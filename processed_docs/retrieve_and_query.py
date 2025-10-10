"""retrieve_and_query.py

Small demo that loads the naive JSON index produced by `index_docs.py`, performs a cosine
similarity search against a query (using numpy), and prints the top-k matching chunks. It also
shows how to assemble a simple LLM prompt using the retrieved context.

Usage:
    python3 processed_docs/retrieve_and_query.py --index processed_docs/index.json --query "How to create a component"

This demo depends on numpy. If you used OpenAI embeddings the script will assume embeddings are lists of floats.
"""

import argparse
import json
import math
from pathlib import Path
from typing import List

try:
    import numpy as np
except Exception:
    np = None


def load_index(path: Path):
    data = json.loads(path.read_text(encoding='utf-8'))
    return data.get('items', [])


def normalize(v: List[float]):
    if np is None:
        # simple L2 normalization
        norm = math.sqrt(sum(x * x for x in v))
        if norm == 0:
            return v
        return [x / norm for x in v]
    arr = np.array(v, dtype=float)
    n = np.linalg.norm(arr)
    if n == 0:
        return arr
    return arr / n


def cosine_sim(a, b):
    if np is not None:
        return float(np.dot(a, b))
    # else a and b are lists
    return sum(x * y for x, y in zip(a, b))


def search(index_items, query_emb, top_k=5):
    results = []
    q = normalize(query_emb)
    for it in index_items:
        emb = normalize(it['embedding'])
        score = cosine_sim(q, emb)
        results.append((score, it))
    results.sort(key=lambda x: x[0], reverse=True)
    return results[:top_k]


def fake_embed_query(query: str, dim=1536):
    # deterministically create a pseudo-embedding for the demo if no embedding provider
    h = abs(hash(query))
    vec = [(h >> (i % 64)) % 100 / 100.0 for i in range(dim)]
    return vec


def main():
    parser = argparse.ArgumentParser(description='Retrieve relevant chunks from index.json')
    parser.add_argument('--index', default='processed_docs/index.json')
    parser.add_argument('--query', required=True)
    parser.add_argument('--top-k', type=int, default=5)
    args = parser.parse_args()

    idx_path = Path(args.index)
    if not idx_path.exists():
        print(f"Index file not found: {idx_path}")
        return

    items = load_index(idx_path)
    if not items:
        print("Index is empty")
        return

    # Determine embedding dimension from first item
    dim = len(items[0]['embedding'])
    try:
        # Attempt to create a real embedding via OpenAI if configured
        import openai
        key = None
        try:
            key = openai.api_key
        except Exception:
            key = None
        if key:
            # TODO: real embedding call here; for demo fallback to fake
            query_emb = fake_embed_query(args.query, dim=dim)
        else:
            query_emb = fake_embed_query(args.query, dim=dim)
    except Exception:
        query_emb = fake_embed_query(args.query, dim=dim)

    results = search(items, query_emb, top_k=args.top_k)

    print(f"Top {args.top_k} results for query: {args.query}\n")
    for score, it in results:
        print(f"Score: {score:.4f}  Source: {it['source']}  chunk_index: {it['chunk_index']}")
        snippet = it['text'][:1000]
        print('---')
        print(snippet)
        print('\n')

    # Example prompt assembly
    ctx = '\n\n'.join([it['text'] for _, it in results])
    prompt = f"You are a helpful assistant for the Fusion API. Use the following documentation excerpts to answer the question.\n\nContext:\n{ctx}\n\nQuestion: {args.query}\n\nAnswer concisely with examples if available."
    print("---\nExample prompt to send to an LLM (truncated):\n")
    print(prompt[:4000])


if __name__ == '__main__':
    main()
