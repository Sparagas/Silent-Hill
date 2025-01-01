typedef struct sh2gfw_Env_ctl;
typedef struct _anon0;
typedef struct _anon1;
typedef struct _VbSCREENINFO;
typedef struct _anon2;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct sh2gfw_Effect_Man;
typedef struct sh2gfw_SPOTL_MATRIX;
typedef struct sh2gfw_POINTL_MATRIX;
typedef union Q_WORDDATA;
typedef struct shAttackInfo;
typedef struct _anon3;
typedef union _anon4;
typedef struct _anon5;


typedef unsigned short type_0[7];
typedef _anon5 type_1[7];
typedef _anon5 type_2[4];
typedef _anon5 type_3[4];
typedef _anon3 type_4[2];
typedef _anon3 type_5[2][7];
typedef unsigned long type_6[2];
typedef unsigned short type_7[4];
typedef unsigned long type_8[2];
typedef shAttackInfo type_9[46];
typedef float type_10[4];
typedef float type_11[4];
typedef float type_12[4][4];
typedef unsigned long type_13[2];
typedef unsigned long type_14[2];
typedef _anon3 type_15[4];
typedef float type_16[12];
typedef float type_17[7];
typedef unsigned int type_18[4];
typedef unsigned short type_19[8];
typedef float type_20[4];
typedef float type_21[4];
typedef unsigned char type_22[16];
typedef int type_23[4];
typedef short type_24[8];
typedef float type_25[7];
typedef char type_26[16];
typedef <unknown fundamental type (0xa510)> type_27[1024];
typedef unsigned long type_28[2];
typedef int type_29[7];

struct sh2gfw_Env_ctl
{
	float camera_p[4];
	float camera_zd[4];
	float camera_yd[4];
	float camera_rot[4];
	float camera_ido[4];
	float camera_parms[4];
	float camera_parms2[4];
	float camera_mat[4][4];
	float objclip_mat[4][4];
	Q_WORDDATA block_index;
	float p_light0[4];
	float p_light1[4];
	float p_light2[4];
	float p_color0[4];
	float p_color1[4];
	float p_color2[4];
	float ambient[4];
	float BaseAmbient[4];
	float VertexAmbient[4];
	float spot0_localpos[4];
	float spot0_localdir[4];
	sh2gfw_SPOTL_MATRIX SpotL0;
	float spot1_localpos[4];
	float spot1_localdir[4];
	sh2gfw_SPOTL_MATRIX SpotL1;
	float spot2_localpos[4];
	float spot2_localdir[4];
	sh2gfw_SPOTL_MATRIX SpotL2;
	float point0_localpos[4];
	sh2gfw_POINTL_MATRIX PointL0;
	unsigned short light_mode;
	unsigned short weather_mode;
	unsigned short time_mode;
	unsigned short now_block;
	unsigned short mode_buf[4];
	Q_WORDDATA stat_ctl_1;
	Q_WORDDATA stat_ctl_2;
	Q_WORDDATA fogcolor;
	Q_WORDDATA fogparm;
	Q_WORDDATA clearcolor;
	Q_WORDDATA random_seeds;
	Q_WORDDATA compo_shadow_env;
	Q_WORDDATA compo_shadow_test;
	Q_WORDDATA compo_shadow_alp;
	Q_WORDDATA compo_shadow_col;
	Q_WORDDATA compo_Fill_col;
	Q_WORDDATA NoiseCondition;
	Q_WORDDATA CopyFilterColor;
};

struct _anon0
{
	unsigned char flare_inhibit_f;
	unsigned char water_inhibit_f;
	unsigned char lfl_sync_draw_func_exec_f;
	unsigned char draw_center_f;
	float tgt_l_eff_rate;
	float now_l_eff_rate;
	_anon3 scr_l_pos;
	float scr_l_ang_xy;
	float scr_l_ang_z;
	_anon5 l_screen_pos;
};

struct _anon1
{
	unsigned int* pCurrent;
	<unknown fundamental type (0xa510)>* pBase;
	<unknown fundamental type (0xa510)>* pDmaTag;
	unsigned int* pVifCode;
	unsigned int numlen;
	unsigned long* pGifTag;
	unsigned int pad12;
	unsigned int pad13;
};

struct _VbSCREENINFO
{
	float scr_z;
	float sx;
	float sy;
	float cx;
	float cy;
	float zmin;
	float zmax;
	float nearz;
	float farz;
};

struct _anon2
{
	float center_x;
	float center_y;
	float width;
	float height;
};

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct sh2gfw_Effect_Man
{
	unsigned short effectid;
	unsigned short vifmark;
	unsigned short valid_id;
	unsigned short pads;
	unsigned int thr_cid;
	unsigned int thr_sid;
	<unknown fundamental type (0xa510)> Tex0Data;
	<unknown fundamental type (0xa510)> Alpha;
	void* pTexMAN;
	void* pTexHead;
	void* pTop;
	void* pPad;
};

struct sh2gfw_SPOTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA spot_rot;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
};

struct sh2gfw_POINTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
};

union Q_WORDDATA
{
	unsigned int ui32[4];
	unsigned short us16[8];
	float fl32[4];
	unsigned char uc8[16];
	int si32[4];
	short ss16[8];
	char sc8[16];
	unsigned long ul64[2];
	<unknown fundamental type (0xa510)> ul128;
};

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon4 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
};

struct _anon3
{
	float x;
	float y;
	float z;
	float w;
};

union _anon4
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _anon5
{
	int x;
	int y;
	int z;
	int w;
};

shAttackInfo sh2_attack_list[46];
sh2gfw_Effect_Man LF_Tex_Work;
_anon2 screen_info;
_VbSCREENINFO VbScreenInfo;
_anon0 light_flare_work;
sh2gfw_Env_ctl Env_ctl;
<unknown fundamental type (0xa510)> kari_kick_packet[1024];

void kari_Thr_LFD2TextureSend();
void kari_Thr_LFD1D2SyncKick(void* pktop);
void shLensFlarePolyFT4AddPacketGif(_anon1* packet);
void shLensFlareDrawCommon(_anon1* packet, _anon0* lf_work, _anon2* sc_info, _anon5* base_color, float base_r, float base_vector, unsigned short z_value);
void shLensFlareGetScreenInfo();
void* kari_shLensFlareDraw();
void shLensFlareSetAlphaEnvironment(_anon1* packet);
void* kari_shLensFlareEffect_Draw(int center_visible_f, _anon0* lf_work, _anon2* sc_info);
void shLensFlareSpriteAddPacketGif(_anon1* packet);
void Kari_LensFlare_DrawExec();

// 
// Start address: 0x18ae00
void kari_Thr_LFD2TextureSend()
{
	// Line 163, Address: 0x18ae00, Func Offset: 0
	// Line 166, Address: 0x18ae08, Func Offset: 0x8
	// Line 168, Address: 0x18ae44, Func Offset: 0x44
	// Line 176, Address: 0x18ae68, Func Offset: 0x68
	// Line 184, Address: 0x18ae8c, Func Offset: 0x8c
	// Func End, Address: 0x18ae9c, Func Offset: 0x9c
}

// 
// Start address: 0x18aea0
void kari_Thr_LFD1D2SyncKick(void* pktop)
{
	// Line 188, Address: 0x18aea0, Func Offset: 0
	// Line 190, Address: 0x18aeac, Func Offset: 0xc
	// Line 197, Address: 0x18aec8, Func Offset: 0x28
	// Func End, Address: 0x18aed8, Func Offset: 0x38
}

// 
// Start address: 0x18aee0
void shLensFlarePolyFT4AddPacketGif(_anon1* packet)
{
	<unknown fundamental type (0xa510)>* pTex0;
	float q;
	unsigned long giftag_polyf4[2];
	_anon3 st3;
	_anon3 st2;
	_anon3 st1;
	_anon3 st0;
	_anon5 v3;
	_anon5 v2;
	_anon5 v1;
	_anon5 v0;
	_anon5 c;
	// Line 226, Address: 0x18aee0, Func Offset: 0
	// Line 227, Address: 0x18b094, Func Offset: 0x1b4
	// Line 230, Address: 0x18b0a8, Func Offset: 0x1c8
	// Line 233, Address: 0x18b0b8, Func Offset: 0x1d8
	// Line 235, Address: 0x18b0cc, Func Offset: 0x1ec
	// Line 242, Address: 0x18b0dc, Func Offset: 0x1fc
	// Line 243, Address: 0x18b0e4, Func Offset: 0x204
	// Line 246, Address: 0x18b0f4, Func Offset: 0x214
	// Line 250, Address: 0x18b150, Func Offset: 0x270
	// Line 251, Address: 0x18b1b4, Func Offset: 0x2d4
	// Line 253, Address: 0x18b1f4, Func Offset: 0x314
	// Line 257, Address: 0x18b250, Func Offset: 0x370
	// Line 258, Address: 0x18b2b4, Func Offset: 0x3d4
	// Line 260, Address: 0x18b2f4, Func Offset: 0x414
	// Line 264, Address: 0x18b368, Func Offset: 0x488
	// Line 265, Address: 0x18b3cc, Func Offset: 0x4ec
	// Line 267, Address: 0x18b40c, Func Offset: 0x52c
	// Line 271, Address: 0x18b480, Func Offset: 0x5a0
	// Line 272, Address: 0x18b4e4, Func Offset: 0x604
	// Line 274, Address: 0x18b524, Func Offset: 0x644
	// Line 275, Address: 0x18b530, Func Offset: 0x650
	// Func End, Address: 0x18b564, Func Offset: 0x684
}

// 
// Start address: 0x18b570
void shLensFlareDrawCommon(_anon1* packet, _anon0* lf_work, _anon2* sc_info, _anon5* base_color, float base_r, float base_vector, unsigned short z_value)
{
	float _rate;
	float r;
	_anon5 prim_p[4];
	_anon5 color;
	_anon3 st1;
	_anon3 st0;
	// Line 290, Address: 0x18b570, Func Offset: 0
	// Line 294, Address: 0x18b5ec, Func Offset: 0x7c
	// Line 295, Address: 0x18b6b8, Func Offset: 0x148
	// Line 296, Address: 0x18b6ec, Func Offset: 0x17c
	// Line 298, Address: 0x18b738, Func Offset: 0x1c8
	// Line 300, Address: 0x18b7a0, Func Offset: 0x230
	// Line 302, Address: 0x18b7ec, Func Offset: 0x27c
	// Line 304, Address: 0x18b854, Func Offset: 0x2e4
	// Line 305, Address: 0x18b864, Func Offset: 0x2f4
	// Line 306, Address: 0x18b884, Func Offset: 0x314
	// Func End, Address: 0x18b894, Func Offset: 0x324
}

// 
// Start address: 0x18b8a0
void shLensFlareGetScreenInfo()
{
	// Line 313, Address: 0x18b8a0, Func Offset: 0
	// Line 314, Address: 0x18b8b0, Func Offset: 0x10
	// Line 315, Address: 0x18b8c0, Func Offset: 0x20
	// Line 316, Address: 0x18b8d0, Func Offset: 0x30
	// Line 317, Address: 0x18b8e0, Func Offset: 0x40
	// Func End, Address: 0x18b8e8, Func Offset: 0x48
}

// 
// Start address: 0x18b8f0
void* kari_shLensFlareDraw()
{
	float add_rate;
	float now2tgt_rate;
	int count;
	int center_visible_f;
	// Line 327, Address: 0x18b8f0, Func Offset: 0
	// Line 330, Address: 0x18b904, Func Offset: 0x14
	// Line 340, Address: 0x18b90c, Func Offset: 0x1c
	// Line 341, Address: 0x18b928, Func Offset: 0x38
	// Line 346, Address: 0x18b930, Func Offset: 0x40
	// Line 373, Address: 0x18b94c, Func Offset: 0x5c
	// Line 376, Address: 0x18b99c, Func Offset: 0xac
	// Line 377, Address: 0x18b9a0, Func Offset: 0xb0
	// Line 380, Address: 0x18b9a8, Func Offset: 0xb8
	// Line 391, Address: 0x18b9ac, Func Offset: 0xbc
	// Line 395, Address: 0x18b9b4, Func Offset: 0xc4
	// Line 397, Address: 0x18b9cc, Func Offset: 0xdc
	// Line 401, Address: 0x18b9d4, Func Offset: 0xe4
	// Line 404, Address: 0x18b9e4, Func Offset: 0xf4
	// Line 406, Address: 0x18ba28, Func Offset: 0x138
	// Line 414, Address: 0x18ba40, Func Offset: 0x150
	// Line 419, Address: 0x18ba50, Func Offset: 0x160
	// Line 420, Address: 0x18ba5c, Func Offset: 0x16c
	// Line 427, Address: 0x18ba60, Func Offset: 0x170
	// Line 430, Address: 0x18ba7c, Func Offset: 0x18c
	// Func End, Address: 0x18ba98, Func Offset: 0x1a8
}

// 
// Start address: 0x18baa0
void shLensFlareSetAlphaEnvironment(_anon1* packet)
{
	unsigned long giftag_alpha[2];
	// Line 439, Address: 0x18baa0, Func Offset: 0
	// Line 446, Address: 0x18baac, Func Offset: 0xc
	// Line 450, Address: 0x18bac0, Func Offset: 0x20
	// Line 452, Address: 0x18bad4, Func Offset: 0x34
	// Line 456, Address: 0x18bae8, Func Offset: 0x48
	// Line 460, Address: 0x18bb04, Func Offset: 0x64
	// Line 465, Address: 0x18bb18, Func Offset: 0x78
	// Line 468, Address: 0x18bb3c, Func Offset: 0x9c
	// Line 475, Address: 0x18bb48, Func Offset: 0xa8
	// Func End, Address: 0x18bb58, Func Offset: 0xb8
}

// 
// Start address: 0x18bb60
void* kari_shLensFlareEffect_Draw(int center_visible_f, _anon0* lf_work, _anon2* sc_info)
{
	unsigned long giftag_Z[2];
	float _rate;
	float _rate;
	float _rate;
	float cos_val;
	float sin_val;
	float rate;
	float ang;
	float _rate;
	float cos_val;
	float sin_val;
	float rate;
	float ang;
	float _rate;
	float _rate;
	_anon5 base_color[7];
	unsigned short z_value[7];
	int base_st_index[7];
	float base_r[7];
	float base_vector[7];
	_anon3 pos[4];
	_anon1 vif1packet;
	_anon1* vif1pk;
	float line_r;
	float add_mask_ang;
	float add_flare_ang;
	int i2;
	int no;
	float hensin_rate_y;
	float hensin_rate_x;
	float r;
	float hensin_y;
	float hensin_x;
	_anon3 prim_st[2][7];
	_anon5 prim_p[4];
	_anon5 color;
	float ang_dat[12];
	float ang_dat[4];
	// Line 484, Address: 0x18bb60, Func Offset: 0
	// Line 500, Address: 0x18bba0, Func Offset: 0x40
	// Line 590, Address: 0x18bbd4, Func Offset: 0x74
	// Line 591, Address: 0x18bbf8, Func Offset: 0x98
	// Line 592, Address: 0x18bc1c, Func Offset: 0xbc
	// Line 593, Address: 0x18bc40, Func Offset: 0xe0
	// Line 594, Address: 0x18bc64, Func Offset: 0x104
	// Line 616, Address: 0x18bc90, Func Offset: 0x130
	// Line 617, Address: 0x18bc94, Func Offset: 0x134
	// Line 619, Address: 0x18bca8, Func Offset: 0x148
	// Line 620, Address: 0x18bcb8, Func Offset: 0x158
	// Line 621, Address: 0x18bcc8, Func Offset: 0x168
	// Line 623, Address: 0x18bcd8, Func Offset: 0x178
	// Line 628, Address: 0x18bce0, Func Offset: 0x180
	// Line 632, Address: 0x18bd60, Func Offset: 0x200
	// Line 637, Address: 0x18bd6c, Func Offset: 0x20c
	// Line 638, Address: 0x18bdb4, Func Offset: 0x254
	// Line 651, Address: 0x18bdd0, Func Offset: 0x270
	// Line 653, Address: 0x18bddc, Func Offset: 0x27c
	// Line 654, Address: 0x18bdfc, Func Offset: 0x29c
	// Line 670, Address: 0x18be1c, Func Offset: 0x2bc
	// Line 672, Address: 0x18be44, Func Offset: 0x2e4
	// Line 673, Address: 0x18be54, Func Offset: 0x2f4
	// Line 675, Address: 0x18be64, Func Offset: 0x304
	// Line 676, Address: 0x18bf44, Func Offset: 0x3e4
	// Line 678, Address: 0x18bf6c, Func Offset: 0x40c
	// Line 679, Address: 0x18bf98, Func Offset: 0x438
	// Line 680, Address: 0x18bff0, Func Offset: 0x490
	// Line 681, Address: 0x18c018, Func Offset: 0x4b8
	// Line 683, Address: 0x18c06c, Func Offset: 0x50c
	// Line 684, Address: 0x18c074, Func Offset: 0x514
	// Line 685, Address: 0x18c07c, Func Offset: 0x51c
	// Line 686, Address: 0x18c084, Func Offset: 0x524
	// Line 688, Address: 0x18c08c, Func Offset: 0x52c
	// Line 689, Address: 0x18c094, Func Offset: 0x534
	// Line 690, Address: 0x18c0a0, Func Offset: 0x540
	// Line 691, Address: 0x18c0a8, Func Offset: 0x548
	// Line 692, Address: 0x18c0cc, Func Offset: 0x56c
	// Line 693, Address: 0x18c0d8, Func Offset: 0x578
	// Line 694, Address: 0x18c0e0, Func Offset: 0x580
	// Line 698, Address: 0x18c0f0, Func Offset: 0x590
	// Line 708, Address: 0x18c110, Func Offset: 0x5b0
	// Line 709, Address: 0x18c120, Func Offset: 0x5c0
	// Line 710, Address: 0x18c12c, Func Offset: 0x5cc
	// Line 711, Address: 0x18c138, Func Offset: 0x5d8
	// Line 712, Address: 0x18c144, Func Offset: 0x5e4
	// Line 713, Address: 0x18c150, Func Offset: 0x5f0
	// Line 714, Address: 0x18c158, Func Offset: 0x5f8
	// Line 715, Address: 0x18c164, Func Offset: 0x604
	// Line 716, Address: 0x18c16c, Func Offset: 0x60c
	// Line 717, Address: 0x18c190, Func Offset: 0x630
	// Line 718, Address: 0x18c19c, Func Offset: 0x63c
	// Line 719, Address: 0x18c1a4, Func Offset: 0x644
	// Line 722, Address: 0x18c1b4, Func Offset: 0x654
	// Line 734, Address: 0x18c1d4, Func Offset: 0x674
	// Line 735, Address: 0x18c1e4, Func Offset: 0x684
	// Line 736, Address: 0x18c1f4, Func Offset: 0x694
	// Line 737, Address: 0x18c2dc, Func Offset: 0x77c
	// Line 738, Address: 0x18c324, Func Offset: 0x7c4
	// Line 739, Address: 0x18c350, Func Offset: 0x7f0
	// Line 740, Address: 0x18c3a8, Func Offset: 0x848
	// Line 741, Address: 0x18c3d0, Func Offset: 0x870
	// Line 742, Address: 0x18c424, Func Offset: 0x8c4
	// Line 744, Address: 0x18c430, Func Offset: 0x8d0
	// Line 752, Address: 0x18c450, Func Offset: 0x8f0
	// Line 772, Address: 0x18c478, Func Offset: 0x918
	// Line 773, Address: 0x18c4c4, Func Offset: 0x964
	// Line 774, Address: 0x18c510, Func Offset: 0x9b0
	// Line 775, Address: 0x18c574, Func Offset: 0xa14
	// Line 776, Address: 0x18c5c0, Func Offset: 0xa60
	// Line 777, Address: 0x18c60c, Func Offset: 0xaac
	// Line 778, Address: 0x18c670, Func Offset: 0xb10
	// Line 779, Address: 0x18c6d4, Func Offset: 0xb74
	// Line 786, Address: 0x18c738, Func Offset: 0xbd8
	// Line 799, Address: 0x18c86c, Func Offset: 0xd0c
	// Line 803, Address: 0x18c884, Func Offset: 0xd24
	// Line 805, Address: 0x18c8e8, Func Offset: 0xd88
	// Line 806, Address: 0x18c918, Func Offset: 0xdb8
	// Line 807, Address: 0x18c928, Func Offset: 0xdc8
	// Line 808, Address: 0x18c938, Func Offset: 0xdd8
	// Line 812, Address: 0x18c950, Func Offset: 0xdf0
	// Line 815, Address: 0x18c9f0, Func Offset: 0xe90
	// Line 817, Address: 0x18ca28, Func Offset: 0xec8
	// Line 819, Address: 0x18ca8c, Func Offset: 0xf2c
	// Line 821, Address: 0x18cac4, Func Offset: 0xf64
	// Line 823, Address: 0x18cb28, Func Offset: 0xfc8
	// Line 825, Address: 0x18cb60, Func Offset: 0x1000
	// Line 827, Address: 0x18cbc4, Func Offset: 0x1064
	// Line 829, Address: 0x18cbfc, Func Offset: 0x109c
	// Line 831, Address: 0x18cc60, Func Offset: 0x1100
	// Line 834, Address: 0x18cc98, Func Offset: 0x1138
	// Line 848, Address: 0x18ccac, Func Offset: 0x114c
	// Line 866, Address: 0x18cdec, Func Offset: 0x128c
	// Line 872, Address: 0x18ce04, Func Offset: 0x12a4
	// Line 874, Address: 0x18ce68, Func Offset: 0x1308
	// Line 875, Address: 0x18ce98, Func Offset: 0x1338
	// Line 876, Address: 0x18cea8, Func Offset: 0x1348
	// Line 877, Address: 0x18ceb8, Func Offset: 0x1358
	// Line 882, Address: 0x18ced0, Func Offset: 0x1370
	// Line 886, Address: 0x18cf78, Func Offset: 0x1418
	// Line 888, Address: 0x18cfb0, Func Offset: 0x1450
	// Line 890, Address: 0x18d014, Func Offset: 0x14b4
	// Line 892, Address: 0x18d04c, Func Offset: 0x14ec
	// Line 894, Address: 0x18d0b0, Func Offset: 0x1550
	// Line 896, Address: 0x18d0e8, Func Offset: 0x1588
	// Line 898, Address: 0x18d14c, Func Offset: 0x15ec
	// Line 900, Address: 0x18d184, Func Offset: 0x1624
	// Line 903, Address: 0x18d1e8, Func Offset: 0x1688
	// Line 906, Address: 0x18d220, Func Offset: 0x16c0
	// Line 914, Address: 0x18d234, Func Offset: 0x16d4
	// Line 915, Address: 0x18d240, Func Offset: 0x16e0
	// Line 917, Address: 0x18d2b4, Func Offset: 0x1754
	// Line 922, Address: 0x18d2c4, Func Offset: 0x1764
	// Line 924, Address: 0x18d364, Func Offset: 0x1804
	// Line 925, Address: 0x18d388, Func Offset: 0x1828
	// Line 926, Address: 0x18d38c, Func Offset: 0x182c
	// Line 927, Address: 0x18d3b0, Func Offset: 0x1850
	// Line 928, Address: 0x18d3fc, Func Offset: 0x189c
	// Line 929, Address: 0x18d420, Func Offset: 0x18c0
	// Line 930, Address: 0x18d46c, Func Offset: 0x190c
	// Line 931, Address: 0x18d478, Func Offset: 0x1918
	// Line 937, Address: 0x18d498, Func Offset: 0x1938
	// Line 938, Address: 0x18d538, Func Offset: 0x19d8
	// Line 939, Address: 0x18d540, Func Offset: 0x19e0
	// Line 940, Address: 0x18d564, Func Offset: 0x1a04
	// Line 941, Address: 0x18d5b0, Func Offset: 0x1a50
	// Line 942, Address: 0x18d5d4, Func Offset: 0x1a74
	// Line 943, Address: 0x18d620, Func Offset: 0x1ac0
	// Line 944, Address: 0x18d62c, Func Offset: 0x1acc
	// Line 948, Address: 0x18d64c, Func Offset: 0x1aec
	// Line 951, Address: 0x18d660, Func Offset: 0x1b00
	// Line 953, Address: 0x18d674, Func Offset: 0x1b14
	// Line 955, Address: 0x18d698, Func Offset: 0x1b38
	// Line 958, Address: 0x18d6a4, Func Offset: 0x1b44
	// Line 959, Address: 0x18d6b0, Func Offset: 0x1b50
	// Line 960, Address: 0x18d6c0, Func Offset: 0x1b60
	// Line 961, Address: 0x18d6cc, Func Offset: 0x1b6c
	// Line 964, Address: 0x18d6d4, Func Offset: 0x1b74
	// Func End, Address: 0x18d710, Func Offset: 0x1bb0
}

// 
// Start address: 0x18d710
void shLensFlareSpriteAddPacketGif(_anon1* packet)
{
	float q;
	unsigned long giftag_alpha_test[2];
	<unknown fundamental type (0xa510)>* pTex0;
	_anon3 st1;
	_anon3 st0;
	_anon5 v1;
	_anon5 v0;
	_anon5 c;
	// Line 983, Address: 0x18d710, Func Offset: 0
	// Line 985, Address: 0x18d81c, Func Offset: 0x10c
	// Line 988, Address: 0x18d830, Func Offset: 0x120
	// Line 991, Address: 0x18d840, Func Offset: 0x130
	// Line 993, Address: 0x18d854, Func Offset: 0x144
	// Line 997, Address: 0x18d864, Func Offset: 0x154
	// Line 998, Address: 0x18d86c, Func Offset: 0x15c
	// Line 1001, Address: 0x18d87c, Func Offset: 0x16c
	// Line 1006, Address: 0x18d8d8, Func Offset: 0x1c8
	// Line 1013, Address: 0x18d93c, Func Offset: 0x22c
	// Line 1014, Address: 0x18d97c, Func Offset: 0x26c
	// Line 1019, Address: 0x18d9d8, Func Offset: 0x2c8
	// Line 1026, Address: 0x18da3c, Func Offset: 0x32c
	// Line 1028, Address: 0x18da7c, Func Offset: 0x36c
	// Line 1029, Address: 0x18da88, Func Offset: 0x378
	// Func End, Address: 0x18dabc, Func Offset: 0x3ac
}

// 
// Start address: 0x18dac0
void Kari_LensFlare_DrawExec()
{
	void* pak;
	Q_WORDDATA dum;
	// Line 1039, Address: 0x18dac0, Func Offset: 0
	// Line 1042, Address: 0x18dacc, Func Offset: 0xc
	// Line 1044, Address: 0x18dad4, Func Offset: 0x14
	// Line 1054, Address: 0x18dae0, Func Offset: 0x20
	// Line 1055, Address: 0x18dae8, Func Offset: 0x28
	// Line 1056, Address: 0x18daf4, Func Offset: 0x34
	// Line 1058, Address: 0x18dafc, Func Offset: 0x3c
	// Line 1076, Address: 0x18db0c, Func Offset: 0x4c
	// Func End, Address: 0x18db20, Func Offset: 0x60
}

