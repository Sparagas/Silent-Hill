# QuickBMS — Scripts

[QuickBMS](https://aluigi.altervista.org/quickbms.htm) extraction scripts for Silent Hill and Silent Hill 4: The Room.

## Usage

1. Download [QuickBMS](https://aluigi.altervista.org/quickbms.htm).
2. Run: `quickbms <script.bms> <input_file> <output_directory>`

### Silent Hill 1

`silent_hill_1.bms` requires `SLPM_861.92`, `SILENT`, and `HILL` from the same ISO 9660 directory. Use `SLPM_861.92` as the input:

```text
quickbms silent_hill_1.bms SLPM_861.92 output
```

The script decrypts the `1ST` overlays, decompresses and decrypts `HP_SAFE1` and `S__SAFE2`, and decompresses `.CMP` files. Source data is retained with `.encrypted` or `.packed` appended. Decompressed `.CMP` files use `.dec`.

Tested with the NTSC-J Rev 2 files dated June 16, 1999. Rev 1 uses the same executable layout but is untested.

A 2048-byte `HILL` lacks the CD-XA metadata needed to split its audio streams. Audio is kept as `XA/ISO2048_AUDIO_UNSPLIT.XA2048`, while movies are split into `.STR2048` files. The 2336-byte raw-sector path is untested.

## Scripts

| File | Game | Description |
|------|------|-------------|
| `silent_hill_1.bms` | Silent Hill | Extracts the PS1 NTSC-J `SILENT` and `HILL` containers, decrypts overlays, and decompresses LZSS data. |
| `sh4_bin.bms` | Silent Hill 4: The Room | Extracts files from `.bin` archives (PS2, Xbox, PC). Auto-identifies sub-file types and appends descriptive extensions. |
| `sh4_sh4.bms` | Silent Hill 4: The Room | Extracts files from `.sh4` archives (Xbox, PC) and preserves embedded filenames. |
