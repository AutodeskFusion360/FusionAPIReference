"""Convert Fusion HTML docs to cleaned Markdown for indexing.

This script is intentionally small and dependency-light. It uses BeautifulSoup to parse HTML
and performs conservative extraction of main content, headings, lists and code blocks.
"""

import argparse
import re
import sys
from pathlib import Path

try:
    from bs4 import BeautifulSoup
except Exception:
    print("beautifulsoup4 is required. Install with: pip install beautifulsoup4")
    sys.exit(1)


NAV_PATTERNS = [
    re.compile(r"nav", re.I),
    re.compile(r"header", re.I),
    re.compile(r"footer", re.I),
    re.compile(r"breadcrumb", re.I),
    re.compile(r"side", re.I),
    re.compile(r"menu", re.I),
]


def looks_like_nav_or_footer(tag, extra_patterns=None):
    # defensive: some items returned by parsers may not behave like Tag objects
    if not tag or not hasattr(tag, 'get'):
        return False
    try:
        cls = tag.get('class') or []
        _id = tag.get('id') or ''
    except Exception:
        return False
    combined = ' '.join(cls) + ' ' + _id
    for p in NAV_PATTERNS:
        if p.search(combined):
            return True
    if extra_patterns:
        for c in cls:
            if c in extra_patterns:
                return True
        if _id and _id in extra_patterns:
            return True
    return False


def detect_common_nav_tokens(input_dir: Path, sample_limit: int = 30, freq_threshold: float = 0.15):
    counts = {}
    total_files = 0
    for i, path in enumerate(input_dir.glob('**/*.htm')):
        if i >= sample_limit:
            break
        total_files += 1
        try:
            html = path.read_text(encoding='utf-8', errors='ignore')
            soup = BeautifulSoup(html, 'html.parser')
            for tag in soup.find_all(True):
                # defensive access
                if not hasattr(tag, 'get'):
                    continue
                try:
                    id_ = tag.get('id')
                    if id_:
                        counts[id_] = counts.get(id_, 0) + 1
                    for cls in (tag.get('class') or []):
                        counts[cls] = counts.get(cls, 0) + 1
                except Exception:
                    # skip problematic tag
                    continue
        except Exception:
            continue
    result = set()
    if total_files == 0:
        return result
    for token, c in counts.items():
        if c / total_files >= freq_threshold and len(token) > 2:
            result.add(token)
    return result


def html_to_markdown(html: str, extra_patterns=None) -> str:
    soup = BeautifulSoup(html, 'html.parser')

    # Remove script and style
    for el in soup(['script', 'style']):
        el.decompose()

    # Remove nav-like elements conservatively
    for tag in list(soup.find_all()):
        if looks_like_nav_or_footer(tag, extra_patterns=extra_patterns):
            try:
                tag.decompose()
            except Exception:
                pass

    out_lines = []

    def handle_element(el):
        name = el.name
        if name in ['h1', 'h2', 'h3', 'h4']:
            level = int(name[1])
            text = el.get_text(strip=True)
            out_lines.append('#' * level + ' ' + text)
            out_lines.append('')
        elif name == 'p':
            text = el.get_text(strip=True)
            if text:
                out_lines.append(text)
                out_lines.append('')
        elif name in ['ul', 'ol']:
            for li in el.find_all('li', recursive=False):
                bullet = '-' if name == 'ul' else '1.'
                li_text = ' '.join(li.stripped_strings)
                out_lines.append(f"{bullet} {li_text}")
            out_lines.append('')
        elif name == 'pre':
            code = el.get_text()
            out_lines.append('```')
            out_lines.append(code.rstrip())
            out_lines.append('```')
            out_lines.append('')
        elif name == 'code' and el.parent.name != 'pre':
            out_lines.append(f"`{el.get_text()}`")
        else:
            for child in el.children:
                if getattr(child, 'name', None):
                    handle_element(child)
                else:
                    txt = str(child).strip()
                    if txt:
                        out_lines.append(txt)

    # Try to find main content
    main = soup.find('main')
    if not main:
        main_candidates = []
        for tag in soup.find_all(True):
            id_ = tag.get('id') or ''
            cls = ' '.join(tag.get('class') or [])
            if 'content' in id_.lower() or 'content' in cls.lower() or 'main' in id_.lower() or 'main' in cls.lower():
                main_candidates.append(tag)
        if main_candidates:
            main = main_candidates[0]
    if not main:
        main = soup.body or soup

    for child in main.children:
        if getattr(child, 'name', None):
            if looks_like_nav_or_footer(child, extra_patterns=extra_patterns):
                continue
            handle_element(child)
        else:
            text = str(child).strip()
            if text:
                out_lines.append(text)

    md = '\n'.join(out_lines)
    md = re.sub(r"\n{3,}", '\n\n', md)
    return md.strip() + '\n'


def convert_directory(input_dir: Path, output_dir: Path, auto_detect_nav: bool = True):
    output_dir.mkdir(parents=True, exist_ok=True)

    extra_patterns = set()
    if auto_detect_nav:
        extra_patterns = detect_common_nav_tokens(input_dir)
        if extra_patterns:
            print(f"Auto-detected nav/footer tokens: {sorted(list(extra_patterns))}")

    for path in input_dir.glob('**/*.htm'):
        rel = path.relative_to(input_dir)
        out_path = output_dir.joinpath(rel).with_suffix('.md')
        out_path.parent.mkdir(parents=True, exist_ok=True)
        try:
            html = path.read_text(encoding='utf-8', errors='ignore')
            md = html_to_markdown(html, extra_patterns=extra_patterns)
            out_path.write_text(md, encoding='utf-8')
            print(f"Converted: {path} -> {out_path}")
        except Exception as e:
            # print a concise error and continue; full traceback may be noisy for many files
            print(f"Failed to convert {path}: {e!r}")


def main():
    parser = argparse.ArgumentParser(description='Convert Fusion API .htm docs into Markdown for indexing')
    parser.add_argument('--input-dir', default='Fusion_API_Documentation/files', help='Input directory with .htm files')
    parser.add_argument('--output-dir', default='processed_docs/md', help='Output directory for .md files')
    parser.add_argument('--no-auto-detect', dest='auto_detect', action='store_false', help='Disable auto-detection of nav/footer class/id tokens')
    args = parser.parse_args()

    input_dir = Path(args.input_dir)
    output_dir = Path(args.output_dir)

    if not input_dir.exists():
        print(f"Input dir does not exist: {input_dir}")
        sys.exit(2)

    convert_directory(input_dir, output_dir, auto_detect_nav=args.auto_detect)


if __name__ == '__main__':
    main()
