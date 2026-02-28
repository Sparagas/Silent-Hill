# QuickBMS — Scripts

Extraction scripts for **[QuickBMS](https://aluigi.altervista.org/quickbms.htm)**, a universal game archive extractor. These scripts handle Silent Hill 4 archive formats by reading internal file tables and extracting individual files with auto-detected type-based extensions.

## Usage

1. Download [QuickBMS](https://aluigi.altervista.org/quickbms.htm).
2. Run: `quickbms <script.bms> <archive_file> <output_directory>`

## Scripts

| File | Game | Description |
|------|------|-------------|
| `sh4_bin.bms` | Silent Hill 4: The Room | Extracts files from `.bin` archives (PS2, Xbox, PC). Auto-identifies sub-file types (textures, models, animations, etc.) and appends descriptive extensions. |
| `sh4_sh4.bms` | Silent Hill 4: The Room | Extracts files from `.sh4` archives (Xbox, PC). Reads the embedded filename table and preserves original filenames. |
