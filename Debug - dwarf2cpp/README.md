# Debug — dwarf2cpp

C/C++ header files generated from **DWARF** debug symbols found in Silent Hill demo and beta disc executables. These were extracted using **[dwarf2cpp](https://github.com/nicknick0630/dwarf2cpp)**, a tool that converts DWARF debugging information into readable C/C++ header files.

The resulting headers reveal original struct definitions, enum values, variable names, and type information from the game's source code — providing invaluable insight into the internal data structures.

## Contents

Each subdirectory corresponds to a specific demo or beta build. Inside, you will find folders named after the PS2 executable ID (e.g., `SLUS_202.28`), containing the extracted header files.

| Directory | Game | Build |
|-----------|------|-------|
| `Silent Hill 2 (Japan) (Beta) (2001-04-25) [b]` | Silent Hill 2 | Japanese beta, April 25, 2001 |
| `Silent Hill 2 (USA) (En,Ja) (Beta)` | Silent Hill 2 | USA beta |
| `Silent Hill 4 - E3 Trial Version (E3 2004)` | Silent Hill 4: The Room | E3 2004 trial version |

The `dwarf2cpp.exe` tool is also included in this directory for reference.
