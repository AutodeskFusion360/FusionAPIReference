# processed_docs

Helper scripts and outputs for converting the Fusion HTML documentation into Markdown and creating a starter vector index for retrieval.

Files:

- `convert_html.py` — converts `.htm` files (from `Fusion_API_Documentation/files`) into cleaned `.md` files under `processed_docs/md`.
- `index_docs.py` — reads the markdown files, chunks them, and creates embeddings. Tries OpenAI embeddings if `OPENAI_API_KEY` is set and `openai` is installed; otherwise falls back to TF-IDF via scikit-learn. Writes `processed_docs/index.json`.
 - `retrieve_and_query.py` — small demo that loads `processed_docs/index.json`, performs a cosine-similarity search over the naive index, and prints top-k matching chunks. Also shows how to assemble a prompt for an LLM using the retrieved context.

Goals:

- Provide a safe, reproducible way to create a local RAG corpus for the Fusion API docs.
- Keep the scripts small and dependency-light for easy adaption.

Notes:

- `convert_html.py` supports an auto-detection mode (enabled by default) that scans a sample of `.htm` files to find common `class`/`id` tokens used by site navigation and footers; these tokens are then stripped during conversion to reduce boilerplate. Disable with `--no-auto-detect` if you prefer the conservative default.
- `retrieve_and_query.py` is a demo and uses a simple cosine similarity over the JSON index. For production use wire the index into a vector DB and replace the fake/demo query embedding with a real embedding provider.

See `USAGE.md` for step-by-step commands and environment setup.
