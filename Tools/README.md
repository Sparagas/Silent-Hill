# Standalone Tools

Standalone utility scripts for specific reverse-engineering tasks. Unlike the format plugins for 010 Editor and Noesis, these scripts run directly.

## Contents

| File | Game / Platform | Description |
|------|-----------------|-------------|
| `sh_decrypt_1st_overlays.py` | Silent Hill 1 | Decrypts `B_KONAMI.BIN` and `BODYPROG.BIN` overlays from the `1ST/` folder using the XOR-based linear congruential generator (LCG). The operation is symmetric, so running it again re-encrypts the file. |

## Usage

```
python "Tools/Silent Hill (1)/sh_decrypt_1st_overlays.py" <file1> [file2] ...
```

Run the command from the repository root, or run the script directly from its folder. You can also drag and drop files onto the script.

The script modifies each input file in place. Keep a backup before running it; because the XOR operation is symmetric, running it a second time re-encrypts the file.
