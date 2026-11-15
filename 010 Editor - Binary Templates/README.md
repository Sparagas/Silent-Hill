# 010 Editor — Binary Templates

Binary template scripts for **[010 Editor](https://www.sweetscape.com/010editor/)** that overlay raw game files with named, typed structures for inspection, reverse engineering, and tool development.

## File Naming Convention

Templates follow the pattern `<prefix>_<format>.bt` (files without a prefix are generic or system-level formats):

| Prefix | Scope |
|--------|-------|
| `sh1_` | Silent Hill (1) |
| `sh2_` | Silent Hill 2 |
| `sh3_` | Silent Hill 3 |
| `sh4_` | Silent Hill 4: The Room |
| `shte_` | Silent Hill: The Escape |
| `shhc_` | Silent Hill: Homecoming |
| `rw_` | RenderWare (Silent Hill: Origins / Zero & Silent Hill: Shattered Memories) |
| `ps1_` / `psx_` | PlayStation 1 system formats |
| `inc_` | Shared include headers |

## Format Templates

| File | Game | Platform | Extensions | Description / Notes |
|------|------|----------|------------|---------------------|
| `afs.bt` | Multi-game | PS2, Xbox, PC | `.afs` | CRI Middleware archive |
| `CD-ROM Mode 1.bt` | System | CD-ROM / PS1 | `.bin`, `.iso` | Mode 1 raw sector layout |
| `CD-ROM Mode 2.bt` | System | CD-ROM / PS1 | `.bin`, `.iso` | Mode 2 raw sector layout |
| `CD-ROM XA Mode 2, Form 1.bt` | System | CD-ROM / PS1 | `.bin`, `.iso` | XA Mode 2 Form 1 sector layout |
| `CD-ROM XA Mode 2, Form 2.bt` | System | CD-ROM / PS1 | `.bin`, `.iso` | XA Mode 2 Form 2 sector layout |
| `cmi_draft.bt` | Multi-game | — | `.cmi` | CMI container (draft) |
| `havok_hcl.bt` | Silent Hill: Homecoming | PC, Xbox 360, PS3 | `.hcl` | Havok animation container |
| `konami_skeletal_model_finder.bt` | Multi-game | PS2, Xbox, PC | — | Heuristic scanner for Konami skeletal models |
| `ps1_memory_card.bt` | System | PS1 | `.mcr`, `.mcd`, `.gme`, `.bin` | Memory card image |
| `psx_exe.bt` | System | PS1 | `.exe`, `SLUS_*`, `SLES_*`, `SLPM_*` | PlayStation executable header |
| `rw_bsp.bt` | Silent Hill: Origins / Shattered Memories | PS2, PSP, Wii | `.bsp` | RenderWare world/level geometry |
| `rw_generic.bt` | Silent Hill: Origins / Shattered Memories | PS2, PSP, Wii | `.dff`, `.txd`, `.rws` | RenderWare binary stream |
| `sh1_anm.bt` | Silent Hill (1) | PS1 | `.anm` | Skeletal animation |
| `sh1_model.bt` | Silent Hill (1) | PS1 | `.ilm`, `.ipd`, `.plm` | 3D character, map, and prop models |
| `sh1_overlay_bodyprog.bt` | Silent Hill (1) | PS1 | `BODYPROG.BIN` | Main game logic overlay |
| `sh1_overlays_maps.bt` | Silent Hill (1) | PS1 | `.bin` | Map logic overlays |
| `sh1_overlays_screens.bt` | Silent Hill (1) | PS1 | `.bin` | Screen/UI overlays |
| `sh1_ps1_ram_draft.bt` | Silent Hill (1) | PS1 | `.bin`, `.ram` | RAM memory dump layout (draft) |
| `sh2_hd_map.bt` | Silent Hill 2 | PS3, Xbox 360 | `.map` | Map geometry and data (HD Collection) |
| `sh2_pc_map.bt` | Silent Hill 2 | PC | `.map` | Map geometry and data |
| `sh2_ps2_map.bt` | Silent Hill 2 | PS2 | `.map` | Map geometry and data |
| `sh2_sh3_ps2_hd_tex_tbn2.bt` | Silent Hill 2 / 3 | PS2, PS3, Xbox 360 | `.tex`, `.tbn2` | Texture container |
| `sh3_hd_map.bt` | Silent Hill 3 | PS3, Xbox 360 | `.map` | Map geometry and data (HD Collection) |
| `sh3_mfa.bt` | Silent Hill 3 | PS2, PC | `.mfa` | Facial/character animation |
| `sh3_ps2_map.bt` | Silent Hill 3 | PS2 | `.map` | Map geometry and data |
| `sh4_animation.bt` | Silent Hill 4: The Room | PS2, Xbox, PC | `.anm` | Skeletal animation |
| `sh4_fog_data.bt` | Silent Hill 4: The Room | PS2, Xbox, PC | — | Fog parameters (extracted sub-chunk) |
| `sh4_maphit.bt` | Silent Hill 4: The Room | PS2, Xbox, PC | — | Map collision mesh (extracted sub-chunk) |
| `sh4_path_data.bt` | Silent Hill 4: The Room | PS2, Xbox, PC | — | AI/navigation paths (extracted sub-chunk) |
| `sh4_pc_bin.bt` | Silent Hill 4: The Room | PC | `.bin` | Container archive |
| `sh4_pc_scene_data.bt` | Silent Hill 4: The Room | PC | — | Scene layout data (extracted sub-chunk) |
| `sh4_pc_skeletal_model.bt` | Silent Hill 4: The Room | PC | — | Skeletal model (extracted sub-chunk) |
| `sh4_pc_static_model.bt` | Silent Hill 4: The Room | PC | — | Static environment model (extracted sub-chunk) |
| `sh4_ps2_bin.bt` | Silent Hill 4: The Room | PS2 | `.bin` | Container archive |
| `sh4_sh4.bt` | Silent Hill 4: The Room | Xbox, PC | `.sh4` | Primary game archive |
| `sh4_shadow_model.bt` | Silent Hill 4: The Room | PS2, Xbox, PC | — | Shadow volume mesh (extracted sub-chunk) |
| `sh4_slgt.bt` | Silent Hill 4: The Room | PS2, Xbox, PC | `.slgt` | Stage lighting data |
| `sh4_textures.bt` | Silent Hill 4: The Room | PS2, Xbox, PC | `._sh4_textures` | Texture container |
| `sh4_xbox_bin.bt` | Silent Hill 4: The Room | Xbox | `.bin` | Container archive |
| `shhc_assets_b_xml.bt` | Silent Hill: Homecoming | PC, Xbox 360, PS3 | `.xml` | Binary asset manifest |
| `shhc_mdl.bt` | Silent Hill: Homecoming | PC, Xbox 360, PS3 | `.mdl` | 3D model |
| `shhc_mtm.bt` | Silent Hill: Homecoming | PC, Xbox 360, PS3 | `.mtm` | Material/texture mapping |
| `shhc_mys.bt` | Silent Hill: Homecoming | PC, Xbox 360, PS3 | `.mys` | MYS data container |
| `shhc_nvm.bt` | Silent Hill: Homecoming | PC, Xbox 360, PS3 | `.nvm` | Navigation mesh |
| `shhc_pak.bt` | Silent Hill: Homecoming | PC, Xbox 360, PS3 | `.pak` | Container archive |
| `shhc_pgp.bt` | Silent Hill: Homecoming | PC, Xbox 360, PS3 | `.pgp` | PGP data container |
| `shhc_ptm.bt` | Silent Hill: Homecoming | PC, Xbox 360, PS3 | `.ptm` | Particle/effect data |
| `shhc_sct.bt` | Silent Hill: Homecoming | PC, Xbox 360, PS3 | `.sct` | Compiled script |
| `shhc_ses.bt` | Silent Hill: Homecoming | PC, Xbox 360, PS3 | `.ses` | Sound event script |
| `shhc_syt_pc_ps3.bt` | Silent Hill: Homecoming | PC, PS3 | `.syt` | Texture container |
| `shte_nom.bt` | Silent Hill: The Escape | iOS | `.nom` | 3D model |
| `shte_not.bt` | Silent Hill: The Escape | iOS | `.not` | Texture/material data |
| `shte_pvr.bt` | Silent Hill: The Escape | iOS | `.pvr` | PowerVR texture |
| `shte_smb.bt` | Silent Hill: The Escape | iOS | `.smb` | Stage/map binary |
| `shte_sob.bt` | Silent Hill: The Escape | iOS | `.sob` | Scene object binary |

## Shared Includes & Definitions

Helper headers imported by other templates via `#include` (not intended to be run standalone):

| File | Scope | Description / Notes |
|------|-------|---------------------|
| `color.bt` | Shared | Common RGBA/RGB color structs |
| `inc_fixed_point.bt` | Shared | Fixed-point math types and formatters |
| `inc_rw.bt` | RenderWare | Common RenderWare chunk and struct definitions |
| `inc_sh1.bt` | Silent Hill (1) | Shared data structures |
| `inc_sh1_exe.bt` | Silent Hill (1) | Executable symbol and struct definitions |
| `inc_sh1_save.bt` | Silent Hill (1) | Save game struct definitions |
| `inc_sh4_bin.bt` | Silent Hill 4: The Room | Shared `.bin` archive structures |
| `inc_shhc_eiff.bt` | Silent Hill: Homecoming | EIFF chunk definitions |
| `vector.bt` | Shared | Common 2D/3D/4D vector and matrix structs |
