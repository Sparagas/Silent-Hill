# Silent Hill Hub

A central repository for **Silent Hill** series reverse engineering, file format documentation, and modding tools.

This project aims to:
- Document file formats used across the Silent Hill series
- Provide tools and scripts for extracting and viewing game assets (3D models, textures, archives, audio)
- Catalog demos, prototypes, related media, and community resources
- Preserve knowledge from forums and wikis

## Table of Contents

- [Scripts and Plugins](#scripts-and-plugins)
  - [010 Editor — Binary Templates](#010-editor--binary-templates)
  - [Noesis — Python Plugins](#noesis--python-plugins)
  - [3D Model Researcher — Scripts](#3d-model-researcher--scripts)
  - [QuickBMS — Scripts](#quickbms--scripts)
- [Tools](#tools)
- [Debug — dwarf2cpp](#debug--dwarf2cpp)
- [Documentation](#documentation)
  - [GitHub Repositories](#github-repositories-related-to-silent-hill)
  - [Websites](#websites-with-silent-hill-information)
  - [Tools List (per game)](#tools-list-per-game)
  - [Screenshots](#screenshots)
  - [Demo List](#silent-hill-series-demo-list)
  - [Related Media List](#related-media-list)
  - [File Format Research](#file-format-research)

---

## Scripts and Plugins

### [010 Editor — Binary Templates](010%20Editor%20-%20Binary%20Templates)
Binary template scripts written in a **C-like** language for **[010 Editor](https://www.sweetscape.com/010editor/)**, a hex editor. These templates overlay raw binary data with named fields, allowing you to inspect and understand Silent Hill file formats directly. They also serve as file format specifications.

Covers formats for Silent Hill 1–4, Origins, Shattered Memories, Homecoming, and shared formats such as CD-ROM sectors, RenderWare, and PS1 memory cards.

### [Noesis — Python Plugins](Noesis%20-%20Python%20Plugins)
Python plugins for **[Noesis](https://richwhitehouse.com/index.php?content=inc_projects.php&showproject=91)**, a tool for previewing and converting 3D models and 2D images. These plugins add support for Silent Hill model and texture formats, enabling viewing and export of game assets.

Includes plugins for Silent Hill 1–4, Origins, and Shattered Memories across PS1, PS2, and PC platforms.

### [3D Model Researcher — Scripts](3D%20Model%20Researcher%20-%20Scripts)
Python scripts for **[3D Model Researcher](https://mr.game-viewer.org/)**, a tool designed to reverse engineer 3D model formats. These scripts enable viewing of Silent Hill 3D models.

### [QuickBMS — Scripts](QuickBMS%20-%20Scripts)
Extraction scripts for **[QuickBMS](https://aluigi.altervista.org/quickbms.htm)**, a universal file extractor. These scripts handle Silent Hill 4 archive formats (`.bin` and `.sh4`), extracting individual files with auto-detected type extensions.

---

## [Tools](Tools)
Standalone utility scripts for specific tasks. Currently contains a **Silent Hill 1** overlay decryption tool that deciphers encrypted overlay files (`B_KONAMI.BIN` and `BODYPROG.BIN` from the `1ST/` folder) using an XOR-based linear congruential generator.

---

## [Debug — dwarf2cpp](Debug%20-%20dwarf2cpp)
C/C++ header files generated from DWARF debug symbols found in Silent Hill demo and beta disc executables, extracted using **[dwarf2cpp](https://github.com/nicknick0630/dwarf2cpp)**. These headers reveal original struct definitions, variable names, and type information from the game's source code. Contains debug data from:
- Silent Hill 2 (Japan) (Beta) (2001-04-25)
- Silent Hill 2 (USA) (Beta)
- Silent Hill 4 — E3 Trial Version (E3 2004)

---

## Documentation

### [GitHub Repositories Related to Silent Hill](docs/GitHub%20list.md)
Curated lists of GitHub repositories related to Silent Hill, organized by game. Includes tools, decompilation projects, and other resources with source code that also serves as file format documentation.

### [Websites with Silent Hill Information](docs/websites)
Archived forum threads and wiki pages (XenTax, ZenHax, ReShax, hcs64) containing reverse engineering discussions, file format notes, and tool releases for Silent Hill games.

### [Tools List (per game)](docs/tools%20list)
Per-game lists of known extraction, conversion, and modding tools organized by platform. Covers every mainline Silent Hill game from the original through Downpour, plus spin-offs.

### [Screenshots](docs/Screenshots)
Screenshots captured during reverse engineering work, organized by game (SH2, SH3, SH4, Shattered Memories, Homecoming).

### [Silent Hill Series Demo List](docs/Demo%20list.md)
Comprehensive list of all known Silent Hill demos and prototypes across every game in the series, cross-referencing entries from Redump, No-Intro, Hidden Palace, and debugging.games databases.

### [Related Media List](docs/Related%20Media%20List.md)
List of demo discs, magazine DVDs, and other media that contain Silent Hill content such as playable demos, save data, trailers, reviews, or release information.

### File Format Research

- **[AFS Archive Games](docs/AFS%20archive%20games.md)** — List of games using CRI Middleware's AFS archive format, which is used by Silent Hill 3 (PS2/PC) and Silent Hill 4 (PS2). Includes entries from Konami, Sega, Capcom, Bandai-Namco, and more.
- **[Konami Skeletal Model Games](docs/Konami%20skeletal%20model%20games.md)** — Documentation of the shared Konami skeletal model format used by Silent Hill 2, 3, and 4 along with many other Konami PS2-era games. Includes version details, header specifications, and a per-game breakdown.
- **[Silent Hill in Other Games](docs/Silent%20Hill%20in%20other%20games.md)** — Catalog of Silent Hill appearances, references, and easter eggs in other video games and non-video-game media.
