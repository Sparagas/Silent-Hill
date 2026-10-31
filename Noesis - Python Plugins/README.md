# Noesis — Python Plugins

Python plugins for **[Noesis](https://richwhitehouse.com/index.php?content=inc_projects.php&showproject=91)**, a tool for previewing and converting 3D models and 2D images. These plugins add support for Silent Hill game formats, allowing you to open, view, and export models and textures directly.

## Installation

1. Download and install [Noesis](https://richwhitehouse.com/index.php?content=inc_projects.php&showproject=91).
2. Copy the desired `.py` plugin files into the Noesis `plugins/python/` directory.
3. Restart Noesis — the new formats will appear in the supported file type list.

## Naming Convention

Plugins generally follow the pattern `<type>_<game>_<platform>_<format>.py`. In names such as `fmt_rw_ps2_bsp.py`, `rw_` identifies the RenderWare format family.

| Prefix | Type or format family |
|--------|------|
| `fmt_` | Format plugin (models and/or textures) |
| `tex_` | Texture-only plugin |
| `arc_` | Archive extraction plugin |
| `rw_` | RenderWare (shared engine between Silent Hill: Origins / Silent Hill: Zero and Silent Hill: Shattered Memories) |

## Plugins

### Model and Texture Format Plugins (`fmt_`)
| File | Game | Platform | Extensions | Description / Notes |
|------|------|----------|------------|----------------------|
| `fmt_sh1_model.py` | Silent Hill 1 | PS1 | `.ilm`, `.plm`, `.ipd` | 3D models |
| `fmt_sh1_anm.py` | Silent Hill 1 | PS1 | `.anm` | Animation files |
| `fmt_sh2_ps2_map.py` | Silent Hill 2 | PS2 | `.map` | Map/level models |
| `fmt_sh3_ps2_map.py` | Silent Hill 3 | PS2 | `.map` | Map/level models |
| `fmt_sh4_pc_map_bin.py` | Silent Hill 4: The Room | PC | `.bin` | Map models |
| `fmt_sh4_ps2_map_bin.py` | Silent Hill 4: The Room | PS2 | `.bin` | Map models |
| `fmt_shte_ios_nom.py` | Silent Hill: The Escape | iOS | `.nom` | 3D models |
| `fmt_shte_ios_not.py` | Silent Hill: The Escape | iOS | `.not` | NOT format |
| `fmt_shte_ios_pvr.py` | Silent Hill: The Escape | iOS | `.pvr` | Textures |
| `fmt_havok_hcl.py` | Silent Hill: Homecoming | Windows, Xbox 360, PS3 | `.hcl` | Havok collision data |
| `fmt_rw_ps2_bsp.py` | Silent Hill: Origins | PS2 | `.bsp` | RenderWare map models |
| `fmt_sho_ps2_map_bsp.py` | Silent Hill: Origins | PS2 | `.bsp` | BSP map models |

### Texture-Only Plugins (`tex_`)
| File | Game | Platform | Extensions | Description / Notes |
|------|------|----------|------------|----------------------|
| `tex_sh2_sh3_ps2_tex_tbn2.py` | Silent Hill 2 / 3 | PS2 | `.tex`, `.tbn2` | Textures |
| `tex_sh4_bin.py` | Silent Hill 4: The Room | PS2, Xbox, PC | `.bin` | Textures from archives |
| `tex_sh4_textures.py` | Silent Hill 4: The Room | PS2, Xbox, PC | `._sh4_textures` | Textures extracted from `.bin` archives |

### Archive Plugins (`arc_`)
| File | Game | Platform | Extensions | Description / Notes |
|------|------|----------|------------|----------------------|
| `arc_sh4_bin.py` | Silent Hill 4: The Room | PS2, Xbox, PC | `.bin` | Archive extraction |
| `arc_sh4_sh4.py` | Silent Hill 4: The Room | Xbox, PC | `.sh4` | Archive extraction |
