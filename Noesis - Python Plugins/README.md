# Noesis — Python Plugins

Python plugins for **[Noesis](https://richwhitehouse.com/index.php?content=inc_projects.php&showproject=91)**, a tool for previewing and converting 3D models and 2D images. These plugins add support for Silent Hill game formats, allowing you to open, view, and export models and textures directly.

## Installation

1. Download and install [Noesis](https://richwhitehouse.com/index.php?content=inc_projects.php&showproject=91).
2. Copy the desired `.py` plugin files into the Noesis `plugins/python/` directory.
3. Restart Noesis — the new formats will appear in the supported file type list.

## File Naming Convention

Plugins follow the pattern `<type>_<game>_<platform>_<format>.py`:

| Prefix | Type |
|--------|------|
| `fmt_` | Format plugin (models and/or textures) |
| `tex_` | Texture-only plugin |
| `arc_` | Archive extraction plugin |

## Plugins

### Model & Texture Format Plugins (`fmt_`)
| File | Game | Description |
|------|------|-------------|
| `fmt_sh1_model.py` | Silent Hill 1 | PS1 3D models (ILM/IPD/PLM) |
| `fmt_sh2_ps2_map.py` | Silent Hill 2 | PS2 map/level models |
| `fmt_sh3_ps2_map.py` | Silent Hill 3 | PS2 map/level models |
| `fmt_sh3_ps2_tex.py` | Silent Hill 3 | PS2 textures |
| `fmt_sh4_map_bin_pc.py` | Silent Hill 4 | PC map .bin models |
| `fmt_sh4_map_bin_ps2.py` | Silent Hill 4 | PS2 map .bin models |
| `fmt_she_ios_nom.py` | Silent Hill: The Escape | iOS NOM models |
| `fmt_she_ios_not.py` | Silent Hill: The Escape | iOS NOT format |
| `fmt_she_ios_pvr.py` | Silent Hill: The Escape | iOS PVR textures |
| `fmt_sho_ps2_map_bsp.py` | Silent Hill: Origins | PS2 BSP map models |

### Texture-Only Plugins (`tex_`)
| File | Game | Description |
|------|------|-------------|
| `tex_sh4_bin.py` | Silent Hill 4 | Textures from .bin archives |
| `tex_sh4_textures.py` | Silent Hill 4 | Standalone texture files |

### Archive Plugins (`arc_`)
| File | Game | Description |
|------|------|-------------|
| `arc_sh4_bin.py` | Silent Hill 4 | .bin archive extraction |
| `arc_sh4_sh4.py` | Silent Hill 4 | .sh4 archive extraction |
