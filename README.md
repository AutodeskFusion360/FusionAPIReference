# FusionAPIReference

Documentation and source code references for the Autodesk Fusion API. This repository gathers the official HTML documentation, C++ header files, and Python object definitions into a single, local reference corpus intended for both developers and tooling (including LLMs/RAG).

This repository includes tooling to convert and index the HTML docs and to create a browsable local index page (`index.htm`) with single-column layout, titles, and client-side search.

## Repository highlights

- `processed_docs/` — scripts and outputs for converting `.htm` reference pages into cleaned Markdown and for building a starter embedding index and retrieval demo.
- `tools/generate_index.py` — generator that writes a friendly, single-column `index.htm` with title extraction, alphabetical grouping, a small search box, and graceful fallbacks.

- `Fusion_API_Documentation/` — the original HTML documentation and resources. The API pages are under `files/`.
- `Fusion_API_CPP_Reference/` — C++ headers (under `include/`) and prebuilt plugin libraries (in `lib/`).
- `Fusion_API_Python_Reference/` — Python object stubs (under `defs/`) for editor completion and quick signature lookup.
- `processed_docs/` — new: conversion/indexing/retrieval helpers and outputs (see below).
- `tools/generate_index.py` — new: generates a friendly `index.htm` at repo root. Use this to open a single page that links to all HTML docs.

## processed_docs/ — purpose and contents

This folder holds small scripts to transform the bulky HTML corpus into a cleaner, indexable form and a starter retrieval demo. Key items:

- `processed_docs/convert_html.py` — converts `.htm` files from `Fusion_API_Documentation/files` into cleaned Markdown files written to `processed_docs/md/`. The converter strips common navigation/boilerplate, preserves headings, lists and code blocks, and is defensive against malformed HTML.
- `processed_docs/md/` — the Markdown outputs produced by `convert_html.py` (generated; not checked in).
- `processed_docs/index_docs.py` — a starter script that chunks the Markdown files and produces embeddings (OpenAI or a TF-IDF fallback) and writes a simple `processed_docs/index.json` manifest.
- `processed_docs/retrieve_and_query.py` — tiny demo showing how to load the index, run a cosine-similarity lookup, and assemble context for an LLM prompt.
- `processed_docs/README.md` / `USAGE.md` — usage notes for the scripts and the recommended workflow.

Why use `processed_docs/`?

- Cleaner text: Markdown outputs are easier to chunk and embed than raw `.htm` (navigation and boilerplate removed).
- Faster iteration: run the converter once and reuse the Markdown for embedding/indexing experiments.
- Starter RAG tools: `index_docs.py` and `retrieve_and_query.py` provide a minimal pipeline you can adapt for real vector stores and embedding models.

Quick commands (examples)

Create/activate a venv and install requirements (recommended):

```bash
python3 -m venv .venv
.venv/bin/python3 -m pip install -U pip
.venv/bin/python3 -m pip install -r requirements.txt
```

Convert HTML -> Markdown:

```bash
.venv/bin/python3 processed_docs/convert_html.py --input-dir Fusion_API_Documentation/files --output-dir processed_docs/md
```

Build a small JSON index (embeddings or TF-IDF fallback):

```bash
.venv/bin/python3 processed_docs/index_docs.py --input-dir processed_docs/md --output processed_docs/index.json
```

Try a local retrieval demo:

```bash
.venv/bin/python3 processed_docs/retrieve_and_query.py --index processed_docs/index.json
```

Generate the root `index.htm` (friendly, single-column viewer):

```bash
.venv/bin/python3 tools/generate_index.py --docs-dir Fusion_API_Documentation/files --output index.htm
```

Notes about the generator: it will

- attempt to extract a human-friendly page title from each `.htm` (uses BeautifulSoup if installed), falling back to the file name when parsing fails;
- compute relative links safely with respect to the output file so opening `index.htm` locally (file://) works;
- group entries alphabetically (A–Z and `#` for others) and provide a small client-side search box so you can quickly filter titles.

If you manually edit `index.htm` it will be overwritten by a subsequent run of `tools/generate_index.py` — keep a copy of any manual edits if you want them preserved.

## How this helps LLMs and tooling (updated)

- The `processed_docs/` outputs are a ready-to-index source: cleaned Markdown is easier to chunk and embed, and metadata (filename/title) is preserved.
- Use `index_docs.py` to experiment with generating embeddings (the script includes an OpenAI embedding path and a TF-IDF fallback when an API key isn't provided).
- The `retrieve_and_query.py` demo shows how to perform a simple RAG loop locally: retrieve, assemble, and ask the LLM with contextual passages.

## Practical RAG workflow (updated)

1. Convert `.htm` -> Markdown using `processed_docs/convert_html.py`.
2. Chunk Markdown into passages and generate embeddings with `processed_docs/index_docs.py` (or your own embedding tooling).
3. Store vectors in a vector store of your choice and use `retrieve_and_query.py` as a pattern for assembling prompts.

## Troubleshooting and notes

- If BeautifulSoup is not available, the generator still works but will use filenames as titles. Install BeautifulSoup with `pip install beautifulsoup4` if you want richer titles.
- The Markdown outputs are generated to `processed_docs/md` — don't commit the converted files unless you intend to track them in source control (they can be large).
- If you regenerate `index.htm`, any manual edits will be lost. Consider keeping a small patch file if you do manual tweaks.

## Contributing

Contributions that improve the conversion heuristics, indexing pipeline (FAISS/Annoy/SQLite+fts), or the index viewer (search/pagination) are welcome. Open a PR with a focused change.


# Fusion API Reference

This repository contains the Autodesk Fusion API reference documentation and a small toolchain to make the documentation easier to read, index, and query with large language models (LLMs).

The project provides two primary workflows:

- A local browsing workflow: generate a consolidated root index (`index.htm`) that links into the shipped HTML documentation so you can quickly open and navigate the original pages in a browser.
- An LLM ingestion workflow: convert the HTML documentation into cleaned Markdown, chunk and embed the text, and use those embeddings to perform retrieval-augmented generation (RAG) with an LLM.

This README describes the repository layout, the core scripts, and quickstart steps to get either workflow running.

Repository layout
-----------------

- `Fusion_API_Documentation/` — the original HTML documentation. The main corpus of HTML files is under `Fusion_API_Documentation/files/`.
- `Fusion_API_CPP_Reference/` — C++ headers and library files bundled with the API reference.
- `processed_docs/` — conversion and indexing tooling plus generated outputs:
  - `processed_docs/convert_html.py` — converts `.htm` pages to cleaned Markdown.
  - `processed_docs/md/` — Markdown files produced by the converter.
  - `processed_docs/index_docs.py` — starter script to chunk Markdown and create an index (embeddings or TF-IDF fallback).
  - `processed_docs/retrieve_and_query.py` — a small retrieval demo that assembles context for an LLM prompt.
- `tools/` — utility scripts:
  - `tools/generate_index.py` — scans `Fusion_API_Documentation/files/` and writes a single `index.htm` at the repo root with alphabetical grouping and a client-side search box.
- `llms.txt` — a SYSTEM-style guidance file with recommendations for chunking, metadata, embeddings, and prompt templates for LLM ingestion.
- `index.htm` — generated, single-page index that links into the local HTML documentation.
- `LICENSE` — repository license.

Quickstart
----------

1. Create and activate a Python virtual environment:

```bash
python3 -m venv .venv
source .venv/bin/activate
```

2. Install the Python dependencies:

```bash
pip install -r requirements.txt
```

3. Convert the HTML documentation to Markdown (LLM ingestion workflow):

```bash
python3 processed_docs/convert_html.py --input-dir Fusion_API_Documentation/files --output-dir processed_docs/md
```

Converted Markdown will appear under `processed_docs/md/`.

4. (Optional) Build an index for retrieval (embeddings or TF-IDF fallback):

```bash
python3 processed_docs/index_docs.py --docs-dir processed_docs/md --output processed_docs/index.json
```

If you choose an embedding provider, set your provider-specific API key as an environment variable (the index script documents which variables it reads). If you do not provide an embedding provider, the script falls back to TF-IDF-style vectors for local testing.

5. Generate the consolidated root index for local browsing (browsing workflow):

```bash
rm -f index.htm && .venv/bin/python3 tools/generate_index.py --docs-dir Fusion_API_Documentation/files --output index.htm
```

Open `index.htm` in a browser to get a single-page list of the available HTML reference pages with a client-side search box.

LLM integration guidance
------------------------

The repository includes `llms.txt`, a compact, prescriptive guide for preparing the documentation for LLM consumption. Key recommendations:

- Convert HTML to plain, semantic Markdown and preserve headings and short contextual metadata (file path, title, heading hierarchy).
- Chunk text into passages of roughly 500–1,200 tokens with 10–30% overlap so retrievals have context without being too large.
- Store metadata for each chunk: original file path, document title, heading path, chunk index, and a short snippet (first 120 characters).
- Use embeddings (OpenAI or other provider) to index chunks; fall back to TF-IDF vectors for offline testing.
- On query, retrieve the top-k most relevant chunks (k between 4 and 20 depending on token budgets) and assemble them into the LLM prompt with a short system instruction that constrains hallucination and references source paths for provenance.

See `processed_docs/retrieve_and_query.py` and `llms.txt` for an example prompt template and a minimal retrieval loop.

Contributing
------------

Contributions that improve parsing accuracy, chunking heuristics, indexing performance, or retrieval quality are welcome. When opening pull requests:

- Keep changes small and focused.
- Add tests for parsing and chunking where possible (a few representative HTML pages are sufficient).
- Document any new configuration or environment variables.

License
-------

This repository is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported (CC BY-NC-SA 3.0). See the `LICENSE` file for the full text.

Acknowledgements
-----------------

This project bundles official Autodesk Fusion API reference material. The conversion and indexing tooling in `processed_docs/` is a community-maintained companion to the shipped documentation and is intended to make it easier to read and query the reference locally or via LLMs.
