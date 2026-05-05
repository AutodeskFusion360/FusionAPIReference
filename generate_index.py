"""generate_index.py

Scan Fusion_API_Documentation/files for .htm pages and generate a simple root-level index.htm
with links to each page. The links are relative so opening index.htm in a browser will navigate to
local documentation pages.

Usage:
    python3 tools/generate_index.py --docs-dir Fusion_API_Documentation/files --output index.htm
"""
from pathlib import Path
import argparse
import os
from typing import List, Tuple, Dict

try:
    from bs4 import BeautifulSoup
except Exception:
    BeautifulSoup = None


def _extract_title(path: Path) -> str:
    """Try to extract a human-friendly title from an HTML file.
    Falls back to the file name if parsing fails or BeautifulSoup isn't available.
    """
    try:
        text = path.read_text(encoding='utf-8', errors='ignore')
        if BeautifulSoup is None:
            return path.name
        soup = BeautifulSoup(text, 'html.parser')
        title_tag = soup.find('title')
        if title_tag and title_tag.string and title_tag.string.strip():
            return title_tag.string.strip()
        # fallback to first H1
        h1 = soup.find('h1')
        if h1 and h1.get_text(strip=True):
            return h1.get_text(strip=True)
    except Exception:
        pass
    return path.name


def build_index(docs_dir: Path, out_path: Path):
    files = sorted(docs_dir.glob('**/*.htm'))

    # Build list of (href, title) tuples. href is computed relative to out_path.parent
    cwd = Path.cwd()
    base = out_path.parent if out_path.parent != Path('.') else cwd
    entries: List[Tuple[str, str]] = []
    for f in files:
        try:
            href = os.path.relpath(str(f), str(base))
        except Exception:
            href = str(f)
        title = _extract_title(f)
        entries.append((href.replace('\\', '/'), title))

    # Deterministic sort by title then href
    entries.sort(key=lambda t: (t[1].lower(), t[0]))

    # Group alphabetically by the first character of the title (A-Z), others into '#'
    groups: Dict[str, List[Tuple[str, str]]] = {}
    for href, title in entries:
        first = title.strip()[0].upper() if title.strip() else '#'
        if not ('A' <= first <= 'Z'):
            first = '#'
        groups.setdefault(first, []).append((href, title))

    # HTML header with single-column CSS and a small client-side search box
    out_lines = [
        '<!doctype html>',
        '<html>',
        '<head>',
        '  <meta charset="utf-8">',
        '  <title>Fusion API Documentation Index</title>',
        '  <meta name="viewport" content="width=device-width,initial-scale=1">',
        '  <style>',
        '    body{font-family:system-ui, -apple-system, Helvetica, Arial; padding:24px;}',
        '    header{display:flex;align-items:center;gap:12px;margin-bottom:12px}',
        '    input[type="search"]{flex:1;padding:8px;border:1px solid #ddd;border-radius:6px}',
        '    ul{columns:1; -webkit-columns:1; -moz-columns:1; list-style-type:none; padding-left:0;}',
        '    ul li{margin:6px 0;}',
        '    a{text-decoration:none;color:#0066cc;word-break:break-all}',
        '    li a{font-size:0.95rem}',
        '    nav.alpha{margin:12px 0}',
        '    nav.alpha a{margin-right:8px;color:#444;text-decoration:none}',
        '    .group{margin-top:18px}',
        '    .group h2{font-size:1.05rem;margin:8px 0}',
        '  </style>',
        '  <script>',
        '    function filterIndex(e){',
        '      const q = e.target.value.toLowerCase();',
        '      document.querySelectorAll("ul.index li").forEach(li=>{',
        '        const t = li.getAttribute("data-title").toLowerCase();',
        '        li.style.display = q && !t.includes(q) ? "none" : "list-item";',
        '      });',
        '    }',
        '  </script>',
        '</head>',
        '<body>',
        '  <header>',
        '    <h1 style="margin:0">Fusion API Documentation Index</h1>',
        '    <input type="search" placeholder="Filter titles (type to filter)..." oninput="filterIndex(event)">',
        '  </header>',
        '  <p>Local index of HTML reference pages. Click to open a page.</p>',
    ]

    # Alphabetical quick nav
    alpha_keys = [chr(c) for c in range(ord('A'), ord('Z') + 1)] + ['#']
    out_lines.append('  <nav class="alpha">')
    for k in alpha_keys:
        out_lines.append(f'    <a href="#{k}">{k}</a>')
    out_lines.append('  </nav>')

    # Add grouped lists
    for k in alpha_keys:
        items = groups.get(k, [])
        out_lines.append(f'  <div class="group" id="{k}">')
        out_lines.append(f'    <h2>{k} ({len(items)})</h2>')
        out_lines.append('    <ul class="index">')
        for href, title in items:
            safe_title = title.replace('<', '&lt;').replace('>', '&gt;')
            out_lines.append(f'      <li data-title="{safe_title}"><a href="{href}">{safe_title}</a> <small style="color:#666">&nbsp;—&nbsp;{href}</small></li>')
        out_lines.append('    </ul>')
        out_lines.append('  </div>')

    out_lines += [
        '</body>',
        '</html>'
    ]

    out_path.write_text('\n'.join(out_lines), encoding='utf-8')
    total = sum(len(v) for v in groups.values())
    print(f'Wrote index: {out_path} with {total} entries')


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--docs-dir', default='./Fusion_API_Documentation/files')
    parser.add_argument('--output', default='index.htm')
    args = parser.parse_args()
    docs_dir = Path(args.docs_dir)
    out_path = Path(args.output)
    if not docs_dir.exists():
        print('Docs dir not found:', docs_dir)
        return
    build_index(docs_dir, out_path)


if __name__ == '__main__':
    main()
