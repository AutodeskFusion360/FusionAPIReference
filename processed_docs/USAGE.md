Usage guide for the helper scripts in `processed_docs`.

1) Install optional dependencies (recommended):

```bash
python3 -m pip install --user beautifulsoup4 openai scikit-learn numpy
```

- `beautifulsoup4` is required for `convert_html.py`.
- `openai` is optional; if you set `OPENAI_API_KEY` the `index_docs.py` will use OpenAI embeddings.
- `scikit-learn` and `numpy` are used as a TF-IDF fallback for embeddings if OpenAI isn't available.

2) Convert HTML docs to Markdown

```bash
python3 processed_docs/convert_html.py --input-dir Fusion_API_Documentation/files --output-dir processed_docs/md
```

3) Create an index (embeddings)

- With OpenAI (set your key):

```bash
export OPENAI_API_KEY="sk-..."
python3 processed_docs/index_docs.py
```

- Without OpenAI (TF-IDF fallback):

```bash
python3 processed_docs/index_docs.py
```

4) Result files

- Converted Markdown: `processed_docs/md/**/*.md`
- Naive JSON index: `processed_docs/index.json`

Notes & next steps

- For production-grade retrieval use FAISS, Milvus, or Pinecone and batch embedding requests.
- You may want to further clean the Markdown (remove boilerplate headers/footers) before indexing.
- If you'd like, I can add a small script showing how to do a simple retrieval + LLM prompt assembly using the generated `index.json`.
