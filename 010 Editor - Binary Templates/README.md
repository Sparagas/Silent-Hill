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
| `shte_` | Silent Hill: The Escape |
| `shhc_` | Silent Hill: Homecoming |
| `rw_` | RenderWare (shared engine) |
| `inc_` | Include files (shared helpers) |
| `ps1_` | PS1 system formats |
| `psx_` | PSX executable format |

Files without a game prefix (e.g., `afs.bt`, `color.bt`, `vector.bt`) are shared or system-level formats.

## Templates

### Shared / System Formats
| File | Description |
|------|-------------|
| `afs.bt` | CRI Middleware AFS archive format |
| `CD-ROM Mode 1.bt` | CD-ROM Mode 1 sector format |
| `CD-ROM Mode 2.bt` | CD-ROM Mode 2 sector format |
| `CD-ROM XA Mode 2, Form 1.bt` | CD-ROM XA Mode 2 Form 1 sector format |
| `CD-ROM XA Mode 2, Form 2.bt` | CD-ROM XA Mode 2 Form 2 sector format |
| `color.bt` | Color type definitions |
| `ps1_memory_card.bt` | PS1 memory card format |
| `psx_exe.bt` | PSX executable header |
| `vector.bt` | Vector type definitions |

### Include Files (Shared Helpers)
| File | Description |
|------|-------------|
| `inc_fixed_point.bt` | Fixed-point math helpers |
| `inc_rw.bt` | RenderWare include definitions |
| `inc_sh1_exe.bt` | Silent Hill 1 executable definitions |
| `inc_sh1_save.bt` | Silent Hill 1 save file definitions |
| `inc_sh1.bt` | Silent Hill 1 shared definitions |
| `inc_sh4_bin.bt` | Silent Hill 4 .bin archive definitions |
| `inc_shhc_eiff.bt` | Silent Hill: Homecoming EIFF definitions |

### RenderWare Engine
| File | Description |
|------|-------------|
| `rw_bsp.bt` | RenderWare BSP world/map format |
| `rw_generic.bt` | RenderWare generic stream format |

### Silent Hill (1)
| File | Description |
|------|-------------|
| `sh1_anm.bt` | Animation format |
| `sh1_model.bt` | 3D model format (ILM/IPD/PLM) |
| `sh1_overlay_bodyprog.bt` | BODYPROG.BIN overlay |
| `sh1_overlays_maps.bt` | Map overlay files |
| `sh1_overlays_screens.bt` | Screen overlay files |
| `sh1_ps1_ram_draft.bt` | PS1 RAM layout (draft) |

### Silent Hill 2
| File | Description |
|------|-------------|
| `sh2_ hd_map.bt` | Map format (HD Collection) |
| `sh2_pc_map.bt` | Map format (PC) |
| `sh2_ps2_map_.bt` | Map format (PS2) |
| `sh2_sh3_ps2_tex_tbn2.bt` | TBN2 texture format (PS2) |

### Silent Hill 3
| File | Description |
|------|-------------|
| `sh3_hd_map.bt` | Map format (HD Collection) |
| `sh3_mfa.bt` | MFA animation format |
| `sh3_ps2_map.bt` | Map format (PS2) |

### Silent Hill 4: The Room
| File | Description |
|------|-------------|
| `sh4_animation.bt` | Animation format |
| `sh4_fog_data.bt` | Fog data |
| `sh4_maphit.bt` | Map-hit/collision data |
| `sh4_path_data.bt` | Path/navigation data |
| `sh4_pc_bin.bt` | .bin archive (PC) |
| `sh4_pc_scene_data.bt` | Scene data (PC) |
| `sh4_pc_skeletal_model.bt` | Skeletal model (PC) |
| `sh4_pc_static_model.bt` | Static model (PC) |
| `sh4_ps2_bin.bt` | .bin archive (PS2) |
| `sh4_sh4.bt` | .sh4 archive format |
| `sh4_shadow_model.bt` | Shadow model format |
| `sh4_slgt.bt` | SLGT lighting data |
| `sh4_textures.bt` | Texture format |
| `sh4_xbox_bin.bt` | .bin archive (Xbox) |

### Silent Hill: The Escape
| File | Description |
|------|-------------|
| `shte_nom.bt` | NOM model format |
| `shte_not.bt` | NOT format |
| `shte_pvr.bt` | PVR texture format |
| `shte_smb.bt` | SMB format |
| `shte_sob.bt` | SOB format |

### Silent Hill: Homecoming
| File | Description |
|------|-------------|
| `shhc_assets_b_xml.bt` | Assets XML format |
| `shhc_mdl.bt` | Model format |
| `shhc_mys.bt` | MYS format |
| `shhc_mtm.bt` | MTM format |
| `shhc_nvm.bt` | NVM navigation-mesh format |
| `shhc_pak.bt` | PAK archive format |
| `shhc_pgp.bt` | PGP format |
| `shhc_ptm.bt` | PTM format |
| `shhc_sct.bt` | SCT script format |
| `shhc_ses.bt` | SES sound-event format |
| `shhc_syt_pc_ps3.bt` | SYT format (PC/PS3) |

### Other
| File | Description |
|------|-------------|
| `cmi_draft.bt` | CMI format (draft) |
| `havok_hcl.bt` | Havok HCL animation container format |
| `konami_skeletal_model_finder.bt` | Finder for Konami skeletal model format |
