"""index_docs.py

Starter indexing script to create embeddings for the converted Markdown files.

Features:
- Reads `processed_docs/md/**/*.md` files created by `convert_html.py`.
- Splits documents into token-like chunks (by words) sized to ~500 words.
- Attempts to call OpenAI embeddings if `OPENAI_API_KEY` is set and `openai` package installed.
- If OpenAI isn't available, falls back to a simple TF-IDF vectorizer (scikit-learn) if installed.
- Writes a naive JSON index `processed_docs/index.json` with entries: {id, source, chunk, embedding}

Note: This is a starter script. For production use, replace the naive JSON index with a real vector DB
like FAISS, Milvus, or Pinecone and use batched embedding requests.
"""

import os
import json
import math
from pathlib import Path
from typing import List

try:
    import openai
except Exception:
    openai = None

try:
    from sklearn.feature_extraction.text import TfidfVectorizer
    import numpy as np
except Exception:
    TfidfVectorizer = None
    np = None


def load_md_files(md_dir: Path) -> List[dict]:
    docs = []
    for path in md_dir.glob('**/*.md'):
        text = path.read_text(encoding='utf-8', errors='ignore')
        docs.append({'path': str(path), 'text': text})
    return docs


def chunk_text(text: str, max_words: int = 500):
    words = text.split()
    chunks = []
    for i in range(0, len(words), max_words):
        chunk = ' '.join(words[i:i+max_words])
        chunks.append(chunk)
    return chunks


def embed_with_openai(texts: List[str], model: str = 'text-embedding-3-small'):
    if not openai:
        raise RuntimeError('openai package is not installed')
    key = os.environ.get('OPENAI_API_KEY')
    if not key:
        raise RuntimeError('OPENAI_API_KEY not set')
    openai.api_key = key
    embeddings = []
    for t in texts:
        resp = openai.Embedding.create(input=t, model=model)
        embeddings.append(resp['data'][0]['embedding'])
    return embeddings


def embed_with_tfidf(texts: List[str]):
    if TfidfVectorizer is None:
        raise RuntimeError('scikit-learn not installed for TF-IDF fallback')
    vec = TfidfVectorizer(stop_words='english')
    X = vec.fit_transform(texts)
    return X.toarray().tolist()


def build_index(md_dir: Path, out_path: Path):
    docs = load_md_files(md_dir)
    all_chunks = []
    metadata = []
    for d in docs:
        chunks = chunk_text(d['text'], max_words=500)
        for i, c in enumerate(chunks):
            metadata.append({'source': d['path'], 'chunk_index': i})
            all_chunks.append(c)

    print(f"Total chunks: {len(all_chunks)}")

    embeddings = None
    if openai and os.environ.get('OPENAI_API_KEY'):
        try:
            embeddings = embed_with_openai(all_chunks)
            print('Embedded with OpenAI')
        except Exception as e:
            print('OpenAI embedding failed, falling back to TF-IDF:', e)

    if embeddings is None:
        if TfidfVectorizer is None:
            raise RuntimeError('No embedding method available. Install openai or scikit-learn.')
        embeddings = embed_with_tfidf(all_chunks)
        print('Embedded with TF-IDF fallback')

    index = []
    for i, (meta, chunk, emb) in enumerate(zip(metadata, all_chunks, embeddings)):
        index.append({'id': i, 'source': meta['source'], 'chunk_index': meta['chunk_index'], 'text': chunk, 'embedding': emb})

    out_path.parent.mkdir(parents=True, exist_ok=True)
    out_path.write_text(json.dumps({'version': 1, 'items': index}, indent=2), encoding='utf-8')
    print(f'Index written to: {out_path}')


def main():
    md_dir = Path('processed_docs/md')
    out_path = Path('processed_docs/index.json')
    if not md_dir.exists():
        print(f"Markdown directory not found: {md_dir}. Run convert_html.py first.")
        return
    build_index(md_dir, out_path)


if __name__ == '__main__':
    main()
