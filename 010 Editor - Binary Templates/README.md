# 010 Editor — Binary Templates

Binary template scripts for **[010 Editor](https://www.sweetscape.com/010editor/)**, a hex editor. These templates parse binary file formats by overlaying raw data with named, typed fields — making it easy to inspect and understand Silent Hill file structures.

Each `.bt` file can be applied to a corresponding game file to visualize its internal layout. Templates also serve as file format specifications for developers building their own tools.

## File Naming Convention

Templates follow the pattern `<game prefix>_<format description>.bt`:

| Prefix | Game |
|--------|------|
| `sh1_` | Silent Hill (1) |
| `sh2_` | Silent Hill 2 |
| `sh3_` | Silent Hill 3 |
| `sh4_` | Silent Hill 4: The Room |
| `she_` | Silent Hill: The Escape |
| `shh_` | Silent Hill: Homecoming |
| `rw_` | RenderWare (shared engine) |
| `inc_` | Include files (shared helpers) |
| `ps1_` | PS1 system formats |
| `psx_` | PSX executable format |

Files without a game prefix (e.g., `afs.bt`, `color.bt`, `vector.bt`) are shared or system-level formats.

## Templates

### Shared / System Formats
| File | Description |
|------|-------------|
| `CD-ROM Mode 1.bt` | CD-ROM Mode 1 sector format |
| `CD-ROM Mode 2.bt` | CD-ROM Mode 2 sector format |
| `CD-ROM XA Mode 2, Form 1.bt` | CD-ROM XA Mode 2 Form 1 sector format |
| `CD-ROM XA Mode 2, Form 2.bt` | CD-ROM XA Mode 2 Form 2 sector format |
| `afs.bt` | CRI Middleware AFS archive format |
| `color.bt` | Color type definitions |
| `vector.bt` | Vector type definitions |
| `ps1_memory_card.bt` | PS1 memory card format |
| `psx_exe.bt` | PSX executable header |

### Include Files (Shared Helpers)
| File | Description |
|------|-------------|
| `inc_fixed_point.bt` | Fixed-point math helpers |
| `inc_rw.bt` | RenderWare include definitions |
| `inc_sh1.bt` | Silent Hill 1 shared definitions |
| `inc_sh1_exe.bt` | Silent Hill 1 executable definitions |
| `inc_sh1_save.bt` | Silent Hill 1 save file definitions |
| `inc_sh4_bin.bt` | Silent Hill 4 .bin archive definitions |

### RenderWare Engine
| File | Description |
|------|-------------|
| `rw_bsp.bt` | RenderWare BSP world/map format |
| `rw_generic.bt` | RenderWare generic stream format |

### Silent Hill (1)
| File | Description |
|------|-------------|
| `sh1_model.bt` | 3D model format (ILM/IPD/PLM) |
| `sh1_overlay_bodyprog.bt` | BODYPROG.BIN overlay |
| `sh1_overlays_maps.bt` | Map overlay files |
| `sh1_overlays_screens.bt` | Screen overlay files |
| `sh1_ps1_ram_draft.bt` | PS1 RAM layout (draft) |

### Silent Hill 2
| File | Description |
|------|-------------|
| `sh2_ map_hd.bt` | Map format (HD Collection) |
| `sh2_map_pc.bt` | Map format (PC) |
| `sh2_map_ps2.bt` | Map format (PS2) |
| `sh2_tbn2_ps2.bt` | TBN2 format (PS2) |
| `sh2_tex_ps2.bt` | Texture format (PS2) |

### Silent Hill 3
| File | Description |
|------|-------------|
| `sh3_map_hd.bt` | Map format (HD Collection) |
| `sh3_map_ps2.bt` | Map format (PS2) |
| `sh3_tex_ps2.bt` | Texture format (PS2) |

### Silent Hill 4: The Room
| File | Description |
|------|-------------|
| `sh4_animation.bt` | Animation format |
| `sh4_bin_pc.bt` | .bin archive (PC) |
| `sh4_bin_ps2.bt` | .bin archive (PS2) |
| `sh4_bin_xbox.bt` | .bin archive (Xbox) |
| `sh4_fog_data.bt` | Fog data |
| `sh4_path_data.bt` | Path/navigation data |
| `sh4_scene_data_pc.bt` | Scene data (PC) |
| `sh4_sh4.bt` | .sh4 archive format |
| `sh4_shadow_model.bt` | Shadow model format |
| `sh4_skeletal_model_pc.bt` | Skeletal model (PC) |
| `sh4_slgt.bt` | SLGT lighting data |
| `sh4_static_model_pc.bt` | Static model (PC) |
| `sh4_textures.bt` | Texture format |

### Silent Hill: The Escape
| File | Description |
|------|-------------|
| `she_nom.bt` | NOM model format |
| `she_not.bt` | NOT format |
| `she_pvr.bt` | PVR texture format |
| `she_smb.bt` | SMB format |
| `she_sob.bt` | SOB format |

### Silent Hill: Homecoming
| File | Description |
|------|-------------|
| `shh_assets_b_xml.bt` | Assets XML format |
| `shh_collision_model_pc.bt` | Collision model (PC) |
| `shh_eiff_pc.bt` | EIFF format (PC) |
| `shh_mdl_ps3.bt` | Model format (PS3) |
| `shh_pak.bt` | PAK archive format |
| `shh_syt_pc.bt` | SYT format (PC) |
| `shh_inc-lvlp_pc.bt` | LVLP include (PC) |
| `shh_inc-modl_pc.bt` | MODL include (PC) |
| `shh_inc-mtmc_pc.bt` | MTMC include (PC) |
| `shh_inc-mysc_pc.bt` | MYSC include (PC) |
| `shh_inc-navm_pc.bt` | NAVM include (PC) |
| `shh_inc-pgpc_pc.bt` | PGPC include (PC) |
| `shh_inc-ptmc_pc.bt` | PTMC include (PC) |
| `shh_inc-sctr_pc.bt` | SCTR include (PC) |

### Other
| File | Description |
|------|-------------|
| `cmi_draft.bt` | CMI format (draft) |
| `konami_skeletal_model_finder.bt` | Finder for Konami skeletal model format |
