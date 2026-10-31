# Tools

Standalone utility scripts for specific reverse engineering tasks. Unlike the format plugins (which work inside 010 Editor, Noesis, etc.), these are independent scripts that can be run directly.

## Silent Hill (1)

| File | Description |
|------|-------------|
| `sh_decrypt_1st_overlays.py` | Decrypts encrypted overlay files (`B_KONAMI.BIN` and `BODYPROG.BIN` from the `1ST/` folder) by reversing the XOR-based linear congruential generator (LCG) encryption. The operation is symmetric — running the script on a decrypted file re-encrypts it. |

### Usage

```
python "Tools/Silent Hill (1)/sh_decrypt_1st_overlays.py" <file1> [file2] ...
```

Run the command from the repository root, or run the script directly from its folder. You can also drag and drop files onto the script.

The script modifies each input file in place. Keep a backup before running it; because the XOR operation is symmetric, running it a second time re-encrypts the file.
