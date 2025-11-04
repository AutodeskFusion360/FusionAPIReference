# FusionAPIReference

Documentation and source code references for the Autodesk Fusion API. This repository gathers the official HTML documentation, C++ header files, and Python object definitions into a single, local reference corpus intended for both developers and tooling (including LLMs/RAG).

This repository includes tooling to convert and index the HTML docs and to create a browsable local index page (`index.htm`) with single-column layout, titles, and client-side search.

## Repository highlights

- `Fusion_API_Documentation/` — the original HTML documentation and resources. The API pages are under `files/`.
- `Fusion_API_CPP_Reference/` — C++ headers (under `include/`) and prebuilt plugin libraries (in `lib/`).
- `Fusion_API_Python_Reference/` — Python object stubs (under `defs/`) for editor completion and quick signature lookup.
- `tools/generate_index.py` — new: generates a friendly `index.htm` at repo root. Use this to open a single page that links to all HTML docs.

# Fusion API Reference

This repository contains the Autodesk Fusion API reference documentation and a small toolchain to make the documentation easier to read, index, and query with large language models (LLMs).

It also contains a tool to generate a consolidated root index (`index.htm`) that links into the shipped HTML documentation so you can quickly open and navigate the original pages in a browser.

Repository layout
-----------------

- `Fusion_API_Documentation/` — the original HTML documentation. The main corpus of HTML files is under `Fusion_API_Documentation/files/`.
- `Fusion_API_CPP_Reference/` — C++ headers and library files bundled with the API reference.
- `tools/` — utility scripts:
  - `tools/generate_index.py` — scans `Fusion_API_Documentation/files/` and writes a single `index.htm` at the repo root with alphabetical grouping and a client-side search box.
- `llms.txt` — a SYSTEM-style guidance file with recommendations for chunking, metadata, embeddings, and prompt templates for LLM ingestion.
- `index.htm` — generated, single-page index that links into the local HTML documentation.
- `LICENSE` — repository license.

License
-------

This repository is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported (CC BY-NC-SA 3.0). See the `LICENSE` file for the full text.

Acknowledgements
-----------------

This project bundles official Autodesk Fusion API reference material. 
