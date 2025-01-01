typedef struct _anon0;
typedef struct shAttackInfo;
typedef union _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct sh2gfw_Effect_Man;
typedef struct _VbSCREENINFO;
typedef struct _anon4;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef union Q_WORDDATA;
typedef struct sh2gfw_SPOTL_MATRIX;
typedef struct Item;
typedef struct sh2gfw_POINTL_MATRIX;
typedef struct _anon5;
typedef struct sh2gfw_Env_ctl;


typedef float type_0[7];
typedef unsigned short type_1[3];
typedef _anon2 type_2[2];
typedef float type_3[7];
typedef unsigned long type_4[2];
typedef float type_5[12];
typedef int type_6[7];
typedef float type_7[4];
typedef _anon0 type_8[4];
typedef unsigned short type_9[7];
typedef shAttackInfo type_10[66];
typedef unsigned short type_11[4];
typedef float type_12[4];
typedef _anon0 type_13[7];
typedef float type_14[4];
typedef float type_15[4][4];
typedef unsigned long type_16[2];
typedef _anon0 type_17[4];
typedef _anon5 type_18[2];
typedef _anon5 type_19[2][7];
typedef <unknown fundamental type (0xa510)> type_20[1280];
typedef unsigned long type_21[2];
typedef unsigned long type_22[2];
typedef unsigned int type_23[4];
typedef unsigned short type_24[8];
typedef float type_25[4];
typedef unsigned char type_26[16];
typedef unsigned int type_27[2];
typedef int type_28[4];
typedef unsigned short type_29[11];
typedef _anon5 type_30[4];
typedef short type_31[8];
typedef char type_32[16];
typedef unsigned long type_33[2];

struct _anon0
{
	int x;
	int y;
	int z;
	int w;
};

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon1 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
};

union _anon1
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _anon2
{
	unsigned char flare_inhibit_f;
	unsigned char water_inhibit_f;
	unsigned char lfl_sync_draw_func_exec_f;
	unsigned char draw_center_f;
	float tgt_l_eff_rate;
	float now_l_eff_rate;
	_anon5 scr_l_pos;
	float scr_l_ang_xy;
	float scr_l_ang_z;
	_anon0 l_screen_pos;
};

struct _anon3
{
	float center_x;
	float center_y;
	float width;
	float height;
};

struct sh2gfw_Effect_Man
{
	unsigned short effectid;
	unsigned short vifmark;
	unsigned short valid_id;
	unsigned short pads;
	int thr_cid;
	int thr_sid;
	<unknown fundamental type (0xa510)> Tex0Data;
	<unknown fundamental type (0xa510)> Alpha;
	void* pTexMAN;
	void* pTexHead;
	void* pTop;
	void* pPad;
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

struct _anon4
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

struct sh2gfw_SPOTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA dirvec;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
};

struct Item
{
	unsigned int flag[2];
	unsigned short number[11];
	unsigned char light_switch;
	unsigned char radio_switch;
	unsigned char radio_volume;
	unsigned char equip;
	float ampoule_efficacy;
	unsigned short event_use[3];
	unsigned short short_pad;
	unsigned char last_cursor;
};

struct sh2gfw_POINTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
};

struct _anon5
{
	float x;
	float y;
	float z;
	float w;
};

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
	float VertexAmbient[4];
	float BaseAmbient[4];
	float BaseVertexColor[4];
	float spot0_Wpos[4];
	float spot0_Wdir[4];
	sh2gfw_SPOTL_MATRIX SpotL0;
	float spot1_Wpos[4];
	float spot1_Wdir[4];
	sh2gfw_SPOTL_MATRIX SpotL1;
	float CharacterLightFactor[4];
	float CharacterLightFactor_Other[4];
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
	Q_WORDDATA MoveFogColor;
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

shAttackInfo sh2_attack_list[66];
sh2gfw_Effect_Man LF_Tex_Work;
_anon3 screen_info;
_VbSCREENINFO VbScreenInfo;
_anon2 light_flare_work[2];
Item item;
float reverse_light_rate;
sh2gfw_Env_ctl Env_ctl;
<unknown fundamental type (0xa510)> kari_kick_packet[1280];

void kari_Thr_LFD2TextureSend();
void kari_Thr_LFD1D2SyncKick(void* pktop);
void shLensFlarePolyFT4AddPacketGif(_anon4* packet);
void shLensFlareDrawCommon(_anon4* packet, _anon2* lf_work, _anon3* sc_info, _anon0* base_color, float base_r, float base_vector, unsigned short z_value);
void shLensFlareGetScreenInfo();
void* kari_shLensFlareDraw();
void shLensFlareSetAlphaEnvironment(_anon4* packet);
void* kari_shLensFlareEffect_Draw(int center_visible_f, _anon2* lf_work, _anon3* sc_info);
void shLensFlareSpriteAddPacketGif(_anon4* packet);
void Kari_LensFlare_DrawExec();

// 
// Start address: 0x184710
void kari_Thr_LFD2TextureSend()
{
	// Line 190, Address: 0x184710, Func Offset: 0
	// Line 193, Address: 0x184718, Func Offset: 0x8
	// Line 195, Address: 0x184754, Func Offset: 0x44
	// Line 203, Address: 0x184778, Func Offset: 0x68
	// Line 211, Address: 0x18479c, Func Offset: 0x8c
	// Func End, Address: 0x1847ac, Func Offset: 0x9c
}

// 
// Start address: 0x1847b0
void kari_Thr_LFD1D2SyncKick(void* pktop)
{
	// Line 215, Address: 0x1847b0, Func Offset: 0
	// Line 217, Address: 0x1847b8, Func Offset: 0x8
	// Line 224, Address: 0x1847d0, Func Offset: 0x20
	// Func End, Address: 0x1847e0, Func Offset: 0x30
}

// 
// Start address: 0x1847e0
void shLensFlarePolyFT4AddPacketGif(_anon4* packet)
{
	<unknown fundamental type (0xa510)>* pTex0;
	float q;
	unsigned long giftag_polyf4[2];
	_anon5 st3;
	_anon5 st2;
	_anon5 st1;
	_anon5 st0;
	_anon0 v3;
	_anon0 v2;
	_anon0 v1;
	_anon0 v0;
	_anon0 c;
	// Line 253, Address: 0x1847e0, Func Offset: 0
	// Line 254, Address: 0x184940, Func Offset: 0x160
	// Line 257, Address: 0x184954, Func Offset: 0x174
	// Line 260, Address: 0x18495c, Func Offset: 0x17c
	// Line 262, Address: 0x184968, Func Offset: 0x188
	// Line 270, Address: 0x184978, Func Offset: 0x198
	// Line 273, Address: 0x184990, Func Offset: 0x1b0
	// Line 277, Address: 0x1849d0, Func Offset: 0x1f0
	// Line 278, Address: 0x184a14, Func Offset: 0x234
	// Line 280, Address: 0x184a3c, Func Offset: 0x25c
	// Line 284, Address: 0x184a7c, Func Offset: 0x29c
	// Line 285, Address: 0x184a98, Func Offset: 0x2b8
	// Line 287, Address: 0x184ac0, Func Offset: 0x2e0
	// Line 291, Address: 0x184b00, Func Offset: 0x320
	// Line 292, Address: 0x184b1c, Func Offset: 0x33c
	// Line 294, Address: 0x184b44, Func Offset: 0x364
	// Line 298, Address: 0x184b84, Func Offset: 0x3a4
	// Line 299, Address: 0x184ba0, Func Offset: 0x3c0
	// Line 301, Address: 0x184bc8, Func Offset: 0x3e8
	// Line 302, Address: 0x184bd4, Func Offset: 0x3f4
	// Func End, Address: 0x184bec, Func Offset: 0x40c
}

// 
// Start address: 0x184bf0
void shLensFlareDrawCommon(_anon4* packet, _anon2* lf_work, _anon3* sc_info, _anon0* base_color, float base_r, float base_vector, unsigned short z_value)
{
	float _rate;
	float r;
	_anon0 prim_p[4];
	_anon0 color;
	_anon5 st1;
	_anon5 st0;
	// Line 317, Address: 0x184bf0, Func Offset: 0
	// Line 321, Address: 0x184c80, Func Offset: 0x90
	// Line 322, Address: 0x184d1c, Func Offset: 0x12c
	// Line 323, Address: 0x184d44, Func Offset: 0x154
	// Line 325, Address: 0x184d78, Func Offset: 0x188
	// Line 327, Address: 0x184dcc, Func Offset: 0x1dc
	// Line 329, Address: 0x184e04, Func Offset: 0x214
	// Line 331, Address: 0x184e38, Func Offset: 0x248
	// Line 332, Address: 0x184e44, Func Offset: 0x254
	// Line 333, Address: 0x184e64, Func Offset: 0x274
	// Func End, Address: 0x184e98, Func Offset: 0x2a8
}

// 
// Start address: 0x184ea0
void shLensFlareGetScreenInfo()
{
	// Line 340, Address: 0x184ea0, Func Offset: 0
	// Line 341, Address: 0x184eb0, Func Offset: 0x10
	// Line 342, Address: 0x184ec0, Func Offset: 0x20
	// Line 343, Address: 0x184ed0, Func Offset: 0x30
	// Line 344, Address: 0x184ee0, Func Offset: 0x40
	// Func End, Address: 0x184ee8, Func Offset: 0x48
}

// 
// Start address: 0x184ef0
void* kari_shLensFlareDraw()
{
	float add_rate;
	int count;
	int center_visible_f;
	// Line 351, Address: 0x184ef0, Func Offset: 0
	// Line 353, Address: 0x184f04, Func Offset: 0x14
	// Line 357, Address: 0x184f0c, Func Offset: 0x1c
	// Line 361, Address: 0x184f14, Func Offset: 0x24
	// Line 362, Address: 0x184f30, Func Offset: 0x40
	// Line 367, Address: 0x184f38, Func Offset: 0x48
	// Line 369, Address: 0x184f54, Func Offset: 0x64
	// Line 378, Address: 0x184f88, Func Offset: 0x98
	// Line 420, Address: 0x184f9c, Func Offset: 0xac
	// Line 422, Address: 0x185008, Func Offset: 0x118
	// Line 429, Address: 0x185028, Func Offset: 0x138
	// Line 434, Address: 0x185038, Func Offset: 0x148
	// Line 435, Address: 0x185040, Func Offset: 0x150
	// Line 442, Address: 0x185044, Func Offset: 0x154
	// Line 444, Address: 0x185064, Func Offset: 0x174
	// Func End, Address: 0x185080, Func Offset: 0x190
}

// 
// Start address: 0x185080
void shLensFlareSetAlphaEnvironment(_anon4* packet)
{
	unsigned long giftag_alpha[2];
	// Line 458, Address: 0x185080, Func Offset: 0
	// Line 465, Address: 0x185090, Func Offset: 0x10
	// Line 469, Address: 0x1850a4, Func Offset: 0x24
	// Line 471, Address: 0x1850b0, Func Offset: 0x30
	// Line 475, Address: 0x1850c4, Func Offset: 0x44
	// Line 479, Address: 0x1850e0, Func Offset: 0x60
	// Line 483, Address: 0x1850f4, Func Offset: 0x74
	// Line 486, Address: 0x185118, Func Offset: 0x98
	// Line 493, Address: 0x185124, Func Offset: 0xa4
	// Func End, Address: 0x185138, Func Offset: 0xb8
}

// 
// Start address: 0x185140
void* kari_shLensFlareEffect_Draw(int center_visible_f, _anon2* lf_work, _anon3* sc_info)
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
	float ang;
	float _rate;
	float _rate;
	_anon0 base_color[7];
	unsigned short z_value[7];
	int base_st_index[7];
	float base_r[7];
	float base_vector[7];
	int flare_drawn;
	int repeat_num;
	_anon5 pos[4];
	_anon4 vif1packet;
	_anon4* vif1pk;
	float line_r;
	float add_mask_ang;
	float add_flare_ang;
	int i2;
	int i1;
	int no;
	float hensin_rate_y;
	float hensin_rate_x;
	float r;
	float hensin_y;
	float hensin_x;
	_anon5 prim_st[2][7];
	_anon0 prim_p[4];
	_anon0 color;
	float ang_dat[12];
	float ang_dat[4];
	// Line 503, Address: 0x185140, Func Offset: 0
	// Line 517, Address: 0x185190, Func Offset: 0x50
	// Line 608, Address: 0x1851c4, Func Offset: 0x84
	// Line 609, Address: 0x1851e8, Func Offset: 0xa8
	// Line 610, Address: 0x18520c, Func Offset: 0xcc
	// Line 612, Address: 0x185230, Func Offset: 0xf0
	// Line 613, Address: 0x185254, Func Offset: 0x114
	// Line 635, Address: 0x185280, Func Offset: 0x140
	// Line 636, Address: 0x185284, Func Offset: 0x144
	// Line 638, Address: 0x185298, Func Offset: 0x158
	// Line 639, Address: 0x1852a8, Func Offset: 0x168
	// Line 640, Address: 0x1852b8, Func Offset: 0x178
	// Line 642, Address: 0x1852c8, Func Offset: 0x188
	// Line 645, Address: 0x1852d0, Func Offset: 0x190
	// Line 646, Address: 0x1852e0, Func Offset: 0x1a0
	// Line 647, Address: 0x1852e4, Func Offset: 0x1a4
	// Line 648, Address: 0x1852ec, Func Offset: 0x1ac
	// Line 651, Address: 0x1852f0, Func Offset: 0x1b0
	// Line 652, Address: 0x1852f4, Func Offset: 0x1b4
	// Line 657, Address: 0x185300, Func Offset: 0x1c0
	// Line 665, Address: 0x185368, Func Offset: 0x228
	// Line 670, Address: 0x18536c, Func Offset: 0x22c
	// Line 671, Address: 0x1853b4, Func Offset: 0x274
	// Line 684, Address: 0x1853d0, Func Offset: 0x290
	// Line 686, Address: 0x1853dc, Func Offset: 0x29c
	// Line 687, Address: 0x1853fc, Func Offset: 0x2bc
	// Line 703, Address: 0x18541c, Func Offset: 0x2dc
	// Line 705, Address: 0x185444, Func Offset: 0x304
	// Line 706, Address: 0x185454, Func Offset: 0x314
	// Line 708, Address: 0x185458, Func Offset: 0x318
	// Line 709, Address: 0x185538, Func Offset: 0x3f8
	// Line 710, Address: 0x185540, Func Offset: 0x400
	// Line 711, Address: 0x185560, Func Offset: 0x420
	// Line 712, Address: 0x185580, Func Offset: 0x440
	// Line 714, Address: 0x1855a0, Func Offset: 0x460
	// Line 716, Address: 0x1855c8, Func Offset: 0x488
	// Line 717, Address: 0x1855f4, Func Offset: 0x4b4
	// Line 718, Address: 0x18564c, Func Offset: 0x50c
	// Line 719, Address: 0x185674, Func Offset: 0x534
	// Line 720, Address: 0x1856c8, Func Offset: 0x588
	// Line 725, Address: 0x1856dc, Func Offset: 0x59c
	// Line 728, Address: 0x1856ec, Func Offset: 0x5ac
	// Line 729, Address: 0x1856f8, Func Offset: 0x5b8
	// Line 730, Address: 0x185700, Func Offset: 0x5c0
	// Line 732, Address: 0x185724, Func Offset: 0x5e4
	// Line 734, Address: 0x185730, Func Offset: 0x5f0
	// Line 736, Address: 0x185738, Func Offset: 0x5f8
	// Line 737, Address: 0x185744, Func Offset: 0x604
	// Line 739, Address: 0x185748, Func Offset: 0x608
	// Line 747, Address: 0x185768, Func Offset: 0x628
	// Line 748, Address: 0x185778, Func Offset: 0x638
	// Line 749, Address: 0x185780, Func Offset: 0x640
	// Line 750, Address: 0x1857a0, Func Offset: 0x660
	// Line 751, Address: 0x1857c0, Func Offset: 0x680
	// Line 753, Address: 0x1857e0, Func Offset: 0x6a0
	// Line 754, Address: 0x1857ec, Func Offset: 0x6ac
	// Line 755, Address: 0x1857f8, Func Offset: 0x6b8
	// Line 756, Address: 0x185804, Func Offset: 0x6c4
	// Line 760, Address: 0x185810, Func Offset: 0x6d0
	// Line 764, Address: 0x185820, Func Offset: 0x6e0
	// Line 765, Address: 0x18582c, Func Offset: 0x6ec
	// Line 766, Address: 0x185834, Func Offset: 0x6f4
	// Line 767, Address: 0x185858, Func Offset: 0x718
	// Line 768, Address: 0x185864, Func Offset: 0x724
	// Line 770, Address: 0x18586c, Func Offset: 0x72c
	// Line 773, Address: 0x185878, Func Offset: 0x738
	// Line 784, Address: 0x185898, Func Offset: 0x758
	// Line 785, Address: 0x1858a8, Func Offset: 0x768
	// Line 786, Address: 0x1858ac, Func Offset: 0x76c
	// Line 787, Address: 0x185988, Func Offset: 0x848
	// Line 788, Address: 0x185990, Func Offset: 0x850
	// Line 789, Address: 0x1859b0, Func Offset: 0x870
	// Line 790, Address: 0x1859d0, Func Offset: 0x890
	// Line 792, Address: 0x1859f0, Func Offset: 0x8b0
	// Line 793, Address: 0x185a38, Func Offset: 0x8f8
	// Line 794, Address: 0x185a64, Func Offset: 0x924
	// Line 795, Address: 0x185abc, Func Offset: 0x97c
	// Line 796, Address: 0x185ae4, Func Offset: 0x9a4
	// Line 798, Address: 0x185b38, Func Offset: 0x9f8
	// Line 799, Address: 0x185b44, Func Offset: 0xa04
	// Line 801, Address: 0x185b64, Func Offset: 0xa24
	// Line 803, Address: 0x185b68, Func Offset: 0xa28
	// Line 827, Address: 0x185b8c, Func Offset: 0xa4c
	// Line 836, Address: 0x185b94, Func Offset: 0xa54
	// Line 837, Address: 0x185be0, Func Offset: 0xaa0
	// Line 838, Address: 0x185c2c, Func Offset: 0xaec
	// Line 839, Address: 0x185c90, Func Offset: 0xb50
	// Line 840, Address: 0x185cdc, Func Offset: 0xb9c
	// Line 841, Address: 0x185d28, Func Offset: 0xbe8
	// Line 842, Address: 0x185d8c, Func Offset: 0xc4c
	// Line 843, Address: 0x185df0, Func Offset: 0xcb0
	// Line 849, Address: 0x185e54, Func Offset: 0xd14
	// Line 862, Address: 0x185f84, Func Offset: 0xe44
	// Line 869, Address: 0x185f9c, Func Offset: 0xe5c
	// Line 870, Address: 0x185fac, Func Offset: 0xe6c
	// Line 873, Address: 0x185fbc, Func Offset: 0xe7c
	// Line 877, Address: 0x185fd0, Func Offset: 0xe90
	// Line 880, Address: 0x186070, Func Offset: 0xf30
	// Line 882, Address: 0x1860a4, Func Offset: 0xf64
	// Line 884, Address: 0x186104, Func Offset: 0xfc4
	// Line 886, Address: 0x186138, Func Offset: 0xff8
	// Line 888, Address: 0x186198, Func Offset: 0x1058
	// Line 890, Address: 0x1861cc, Func Offset: 0x108c
	// Line 892, Address: 0x18622c, Func Offset: 0x10ec
	// Line 894, Address: 0x186260, Func Offset: 0x1120
	// Line 896, Address: 0x1862c0, Func Offset: 0x1180
	// Line 899, Address: 0x1862f8, Func Offset: 0x11b8
	// Line 912, Address: 0x18630c, Func Offset: 0x11cc
	// Line 930, Address: 0x18644c, Func Offset: 0x130c
	// Line 936, Address: 0x186464, Func Offset: 0x1324
	// Line 938, Address: 0x1864bc, Func Offset: 0x137c
	// Line 939, Address: 0x1864e8, Func Offset: 0x13a8
	// Line 940, Address: 0x1864f8, Func Offset: 0x13b8
	// Line 943, Address: 0x186508, Func Offset: 0x13c8
	// Line 946, Address: 0x18651c, Func Offset: 0x13dc
	// Line 949, Address: 0x1865c0, Func Offset: 0x1480
	// Line 951, Address: 0x1865f4, Func Offset: 0x14b4
	// Line 953, Address: 0x186654, Func Offset: 0x1514
	// Line 955, Address: 0x186688, Func Offset: 0x1548
	// Line 957, Address: 0x1866e8, Func Offset: 0x15a8
	// Line 959, Address: 0x18671c, Func Offset: 0x15dc
	// Line 961, Address: 0x18677c, Func Offset: 0x163c
	// Line 963, Address: 0x1867b0, Func Offset: 0x1670
	// Line 966, Address: 0x186810, Func Offset: 0x16d0
	// Line 969, Address: 0x186848, Func Offset: 0x1708
	// Line 977, Address: 0x18685c, Func Offset: 0x171c
	// Line 978, Address: 0x186868, Func Offset: 0x1728
	// Line 980, Address: 0x1868b8, Func Offset: 0x1778
	// Line 985, Address: 0x1868cc, Func Offset: 0x178c
	// Line 986, Address: 0x186970, Func Offset: 0x1830
	// Line 987, Address: 0x186994, Func Offset: 0x1854
	// Line 988, Address: 0x186998, Func Offset: 0x1858
	// Line 989, Address: 0x1869bc, Func Offset: 0x187c
	// Line 990, Address: 0x186a08, Func Offset: 0x18c8
	// Line 991, Address: 0x186a2c, Func Offset: 0x18ec
	// Line 993, Address: 0x186a78, Func Offset: 0x1938
	// Line 994, Address: 0x186a84, Func Offset: 0x1944
	// Line 1001, Address: 0x186aa4, Func Offset: 0x1964
	// Line 1002, Address: 0x186b48, Func Offset: 0x1a08
	// Line 1003, Address: 0x186b50, Func Offset: 0x1a10
	// Line 1004, Address: 0x186b74, Func Offset: 0x1a34
	// Line 1005, Address: 0x186bc0, Func Offset: 0x1a80
	// Line 1006, Address: 0x186be4, Func Offset: 0x1aa4
	// Line 1007, Address: 0x186c30, Func Offset: 0x1af0
	// Line 1008, Address: 0x186c3c, Func Offset: 0x1afc
	// Line 1013, Address: 0x186c5c, Func Offset: 0x1b1c
	// Line 1015, Address: 0x186c74, Func Offset: 0x1b34
	// Line 1017, Address: 0x186c7c, Func Offset: 0x1b3c
	// Line 1020, Address: 0x186c90, Func Offset: 0x1b50
	// Line 1022, Address: 0x186ca0, Func Offset: 0x1b60
	// Line 1024, Address: 0x186cc4, Func Offset: 0x1b84
	// Line 1027, Address: 0x186cd0, Func Offset: 0x1b90
	// Line 1028, Address: 0x186cdc, Func Offset: 0x1b9c
	// Line 1029, Address: 0x186cec, Func Offset: 0x1bac
	// Line 1030, Address: 0x186cf8, Func Offset: 0x1bb8
	// Line 1032, Address: 0x186d04, Func Offset: 0x1bc4
	// Line 1035, Address: 0x186d08, Func Offset: 0x1bc8
	// Func End, Address: 0x186d54, Func Offset: 0x1c14
}

// 
// Start address: 0x186d60
void shLensFlareSpriteAddPacketGif(_anon4* packet)
{
	float q;
	unsigned long giftag_alpha_test[2];
	<unknown fundamental type (0xa510)>* pTex0;
	_anon5 st1;
	_anon5 st0;
	_anon0 v1;
	_anon0 v0;
	_anon0 c;
	// Line 1054, Address: 0x186d60, Func Offset: 0
	// Line 1056, Address: 0x186e28, Func Offset: 0xc8
	// Line 1059, Address: 0x186e3c, Func Offset: 0xdc
	// Line 1062, Address: 0x186e44, Func Offset: 0xe4
	// Line 1064, Address: 0x186e50, Func Offset: 0xf0
	// Line 1069, Address: 0x186e60, Func Offset: 0x100
	// Line 1072, Address: 0x186e78, Func Offset: 0x118
	// Line 1077, Address: 0x186eb8, Func Offset: 0x158
	// Line 1084, Address: 0x186efc, Func Offset: 0x19c
	// Line 1085, Address: 0x186f24, Func Offset: 0x1c4
	// Line 1090, Address: 0x186f64, Func Offset: 0x204
	// Line 1097, Address: 0x186f80, Func Offset: 0x220
	// Line 1099, Address: 0x186fa8, Func Offset: 0x248
	// Line 1100, Address: 0x186fb4, Func Offset: 0x254
	// Func End, Address: 0x186fcc, Func Offset: 0x26c
}

// 
// Start address: 0x186fd0
void Kari_LensFlare_DrawExec()
{
	void* pak;
	Q_WORDDATA dum;
	// Line 1110, Address: 0x186fd0, Func Offset: 0
	// Line 1114, Address: 0x186fd8, Func Offset: 0x8
	// Line 1116, Address: 0x186fe0, Func Offset: 0x10
	// Line 1117, Address: 0x186fe8, Func Offset: 0x18
	// Line 1118, Address: 0x186ff4, Func Offset: 0x24
	// Line 1120, Address: 0x186ffc, Func Offset: 0x2c
	// Line 1148, Address: 0x18700c, Func Offset: 0x3c
	// Func End, Address: 0x18701c, Func Offset: 0x4c
}

