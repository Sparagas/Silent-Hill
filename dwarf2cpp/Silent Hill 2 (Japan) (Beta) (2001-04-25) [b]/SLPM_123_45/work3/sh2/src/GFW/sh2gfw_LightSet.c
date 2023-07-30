typedef union Q_WORDDATA;
typedef struct sh2gfw_SPOTL_MATRIX;
typedef struct sh2gfw_GSREGS_HEAD;
typedef struct sh2gfw_POINTL_MATRIX;
typedef struct sh2gfw_TEX_HEAD;
typedef struct sh2gfw_VU_PARMS;
typedef struct sh2gfw_BLOCK_MAN;
typedef struct sh2gfw_CLUTS_HEAD;
typedef struct _anon0;
typedef struct sh2gfw_GIFTAG_HEAD;
typedef struct sh2gfw_AREA_HEAD;
typedef struct sh2gfw_Env_ctl;
typedef struct shBattleFight;
typedef struct sh2gfw_BLOCK_HEAD;
typedef struct shBattleShot;
typedef struct sh2gfw_BLOCKGLOBAL_HEAD;
typedef struct sh2gfw_BLOCKLOCAL_HEAD;
typedef struct shAttackInfo;
typedef union _anon1;


typedef unsigned char type_0[16];
typedef unsigned char type_1[16][16];
typedef unsigned char type_2[16][16][4];
typedef unsigned char type_3[16];
typedef void* type_4[4];
typedef float type_5[4];
typedef unsigned char type_6[16];
typedef Q_WORDDATA* type_7[4];
typedef unsigned int type_8[4];
typedef int type_9[8];
typedef int type_10[8];
typedef unsigned int type_11[4];
typedef float type_12[4][4];
typedef unsigned short type_13[8];
typedef float type_14[4];
typedef unsigned char type_15[16];
typedef unsigned char type_16[16];
typedef int type_17[4];
typedef unsigned char type_18[16];
typedef short type_19[8];
typedef char type_20[16];
typedef unsigned long type_21[2];
typedef float type_22[4][4];
typedef sh2gfw_GIFTAG_HEAD* type_23[16];
typedef Q_WORDDATA type_24[2];
typedef unsigned char type_25[8];
typedef unsigned char type_26[8][8];
typedef Q_WORDDATA type_27[3];
typedef sh2gfw_BLOCK_MAN type_28[6];
typedef unsigned int type_29[3];
typedef shAttackInfo type_30[46];
typedef unsigned int type_31[3];
typedef unsigned short type_32[3];
typedef unsigned short type_33[3];
typedef unsigned short type_34[4];
typedef float type_35[4];
typedef float type_36[4][4];
typedef float type_37[4][2];
typedef sh2gfw_GSREGS_HEAD* type_38[4];
typedef sh2gfw_GIFTAG_HEAD* type_39[16];
typedef sh2gfw_GIFTAG_HEAD* type_40[16][4];
typedef unsigned short type_41[8];
typedef unsigned short type_42[8][16];
typedef unsigned short type_43[8][16][4];
typedef sh2gfw_TEX_HEAD* type_44[4];
typedef sh2gfw_CLUTS_HEAD* type_45[4];
typedef unsigned char type_46[4];
typedef unsigned char type_47[16];
typedef unsigned char type_48[16][4];

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
	Q_WORDDATA spot_rot;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
};

struct sh2gfw_GSREGS_HEAD
{
	unsigned int clutssize;
	unsigned int toNextDATA;
	unsigned int toTexHead;
	unsigned char clutamount;
	unsigned char transamount;
	unsigned char eop_flg;
	unsigned char tr_flg;
	unsigned char fmt[16];
	unsigned char transparency[16];
};

struct sh2gfw_POINTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
};

struct sh2gfw_TEX_HEAD
{
	unsigned int texture_no;
	unsigned short x;
	unsigned short y;
	unsigned short w;
	unsigned short h;
	unsigned char color;
	unsigned char padbyte;
	unsigned short importance;
	unsigned int datasize;
	unsigned int allsize;
	unsigned char sendpsm;
	unsigned char drawpsm;
	unsigned char bitshift;
	unsigned char tagpoint;
	unsigned char bitw;
	unsigned char bith;
	unsigned short check;
	Q_WORDDATA giftag;
};

struct sh2gfw_VU_PARMS
{
	float world_screen[4][4];
	float world_clip[4][4];
	float clip_screen[4][4];
	Q_WORDDATA fog_d;
	Q_WORDDATA rgbamax;
	Q_WORDDATA phong_rgbamax;
	Q_WORDDATA rgbamin;
	float local_screen[4][4];
	float local_clip[4][4];
	float light_vector0[4][4];
	float light_color0[4][4];
	float ambient_col[4];
	Q_WORDDATA light_pam[2];
	float light_pos[4][4];
	Q_WORDDATA GifTag_mskRGB;
	Q_WORDDATA Frame_mskRGB;
	Q_WORDDATA GifTag_mskNORMAL;
	Q_WORDDATA Frame_mskNORMAL;
	Q_WORDDATA GifTag_mskALPHA;
	Q_WORDDATA Frame_mskALPHA;
	Q_WORDDATA GifTag_mskZ;
	Q_WORDDATA mskZ;
	Q_WORDDATA GifTag_unmskZ;
	Q_WORDDATA unmskZ;
};

struct sh2gfw_BLOCK_MAN
{
	sh2gfw_AREA_HEAD* pA_H;
	sh2gfw_BLOCK_HEAD* pB_H;
	sh2gfw_BLOCKGLOBAL_HEAD* pBG_H;
	sh2gfw_BLOCKLOCAL_HEAD* pBL_H;
	sh2gfw_GSREGS_HEAD* pGSREGS_H[4];
	sh2gfw_GIFTAG_HEAD* pGIF_H[16][4];
	unsigned short idVU_tag[8][16][4];
	sh2gfw_TEX_HEAD* pLTEX_H[4];
	sh2gfw_CLUTS_HEAD* pLCLUT_H[4];
	unsigned char gifnum[4];
	unsigned char vunum[16][4];
	unsigned char geom_amount[16][16][4];
	unsigned int texnum;
	unsigned int blockid;
	Q_WORDDATA* p_Matrices;
	void* pTexMAN[4];
	Q_WORDDATA* pBlockPack[4];
	unsigned int bp_leng[4];
	int vif1mark[8];
	int slotid[8];
	sh2gfw_GSREGS_HEAD* pTR_GSREGS_H;
	sh2gfw_TEX_HEAD* pTR_LTEX_H;
	sh2gfw_CLUTS_HEAD* pTR_LCLUT_H;
	void* pTR_TexMAN;
	void* pKT_GTR;
	void* pKT_LTR;
	short tr_gbl_gifnum;
	short tr_gifnum;
	unsigned char tr_gbl_vunum;
	unsigned char tr_vunum;
	unsigned char view_clip_flg;
	unsigned char view_tile;
	sh2gfw_GIFTAG_HEAD* pTR_GIF_H[16];
	unsigned char tileViewClipInfo[8][8];
	float Local_World[4][4];
	float World_Local[4][4];
	Q_WORDDATA calc_parms[3];
	Q_WORDDATA bitmsk_data;
	_anon0 blk_LightData;
};

struct sh2gfw_CLUTS_HEAD
{
	unsigned int clutssize;
	unsigned int toGSREGS;
	unsigned int toRawClut;
	unsigned char clutamount;
	unsigned char transcluts;
	unsigned char clw;
	unsigned char clh;
	unsigned char fmt[16];
	unsigned char transparency[16];
};

struct _anon0
{
	float light_vect[4][4];
	float light_col[4][4];
	float light_amb[4];
	float light_pam[4][2];
	Q_WORDDATA LightPos1;
	Q_WORDDATA VertexAmbient;
	Q_WORDDATA BaseVertexColor;
	Q_WORDDATA GlobalAmbient;
	Q_WORDDATA ALPHA_clear;
	unsigned int light_type_buf;
	unsigned int light_type_now;
	unsigned int pad1;
	unsigned int pad2;
};

struct sh2gfw_GIFTAG_HEAD
{
	unsigned short gsregs_amount;
	unsigned char trans_flg;
	unsigned char eop_flg;
	unsigned int toNextGIFHEAD;
	unsigned short id;
	unsigned char tcc;
	unsigned char tfx;
	unsigned char abe;
	unsigned char pad1;
	unsigned char pad2;
	unsigned char pad3;
};

struct sh2gfw_AREA_HEAD
{
	unsigned int area_id;
	unsigned int toGlobalTexHead;
	unsigned int toGlobalClutsHead;
	unsigned int date;
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

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct sh2gfw_BLOCK_HEAD
{
	unsigned int block_id;
	unsigned int toGlobaldef;
	unsigned int toLocaldef;
	unsigned int toRawblockdataParms;
	unsigned int toLocalTex[3];
	unsigned int toLocalcluts[3];
	unsigned int texnum;
	unsigned char globaltexnum;
	unsigned char transtexnum;
	unsigned char divflg;
	unsigned char padc;
};

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct sh2gfw_BLOCKGLOBAL_HEAD
{
	unsigned int gsregsamount;
	unsigned int transamount;
	unsigned char gtexnum;
	unsigned char gtransnum;
	unsigned short pads;
	unsigned int pad2;
};

struct sh2gfw_BLOCKLOCAL_HEAD
{
	unsigned short gsregsamount[3];
	unsigned short transamount[3];
	unsigned short ltexnum;
	unsigned short pads;
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

shAttackInfo sh2_attack_list[46];
sh2gfw_Env_ctl Env_ctl;
sh2gfw_VU_PARMS VU1_PARMS;
sh2gfw_BLOCK_MAN b_man[6];

void sh2gfw_setparal3LGT_blk(void* pbman, float* light_dir0, float* light_dir1, float* light_dir2, float* col0, float* col1, float* col2, float* ambient);
void sh2gfw_setsp1para2LGT_blk(void* pbman, void* sm, float light0[4], float color0[4], float light1[4], float color1[4], float amb[4]);
int sh2gfw_Get_NightOrDay();
void sh2gfw_Set_Night();
void sh2gfw_Set_Day();

// 
// Start address: 0x183970
void sh2gfw_setparal3LGT_blk(void* pbman, float* light_dir0, float* light_dir1, float* light_dir2, float* col0, float* col1, float* col2, float* ambient)
{
	_anon0* slv;
	sh2gfw_BLOCK_MAN* pB_man;
	float work[4][4];
	// Line 42, Address: 0x183970, Func Offset: 0
	// Line 46, Address: 0x1839a0, Func Offset: 0x30
	// Line 48, Address: 0x1839a4, Func Offset: 0x34
	// Line 51, Address: 0x1839a8, Func Offset: 0x38
	// Line 52, Address: 0x1839bc, Func Offset: 0x4c
	// Line 53, Address: 0x1839d0, Func Offset: 0x60
	// Line 54, Address: 0x1839e4, Func Offset: 0x74
	// Line 63, Address: 0x1839f0, Func Offset: 0x80
	// Line 81, Address: 0x183a0c, Func Offset: 0x9c
	// Line 82, Address: 0x183a20, Func Offset: 0xb0
	// Line 85, Address: 0x183a34, Func Offset: 0xc4
	// Line 89, Address: 0x183a4c, Func Offset: 0xdc
	// Line 96, Address: 0x183a64, Func Offset: 0xf4
	// Line 99, Address: 0x183a80, Func Offset: 0x110
	// Line 107, Address: 0x183a90, Func Offset: 0x120
	// Line 116, Address: 0x183aa4, Func Offset: 0x134
	// Line 125, Address: 0x183ab8, Func Offset: 0x148
	// Line 130, Address: 0x183ac8, Func Offset: 0x158
	// Line 131, Address: 0x183ad8, Func Offset: 0x168
	// Line 132, Address: 0x183ae8, Func Offset: 0x178
	// Line 133, Address: 0x183af8, Func Offset: 0x188
	// Line 135, Address: 0x183b00, Func Offset: 0x190
	// Func End, Address: 0x183b18, Func Offset: 0x1a8
}

// 
// Start address: 0x183b20
void sh2gfw_setsp1para2LGT_blk(void* pbman, void* sm, float light0[4], float color0[4], float light1[4], float color1[4], float amb[4])
{
	float gref;
	float iv[4];
	sh2gfw_SPOTL_MATRIX* splm;
	_anon0* slv;
	sh2gfw_BLOCK_MAN* pB_man;
	float coloralpha;
	float dir_vec[4];
	float work[4][4];
	// Line 155, Address: 0x183b20, Func Offset: 0
	// Line 159, Address: 0x183b50, Func Offset: 0x30
	// Line 163, Address: 0x183b54, Func Offset: 0x34
	// Line 164, Address: 0x183b58, Func Offset: 0x38
	// Line 169, Address: 0x183b5c, Func Offset: 0x3c
	// Line 170, Address: 0x183b6c, Func Offset: 0x4c
	// Line 173, Address: 0x183b78, Func Offset: 0x58
	// Line 174, Address: 0x183b8c, Func Offset: 0x6c
	// Line 175, Address: 0x183ba0, Func Offset: 0x80
	// Line 179, Address: 0x183bb4, Func Offset: 0x94
	// Line 184, Address: 0x183bd0, Func Offset: 0xb0
	// Line 195, Address: 0x183be4, Func Offset: 0xc4
	// Line 209, Address: 0x183bf8, Func Offset: 0xd8
	// Line 211, Address: 0x183c04, Func Offset: 0xe4
	// Line 214, Address: 0x183c24, Func Offset: 0x104
	// Line 233, Address: 0x183c38, Func Offset: 0x118
	// Line 244, Address: 0x183c4c, Func Offset: 0x12c
	// Line 255, Address: 0x183c54, Func Offset: 0x134
	// Line 257, Address: 0x183c70, Func Offset: 0x150
	// Line 264, Address: 0x183c88, Func Offset: 0x168
	// Line 265, Address: 0x183ca0, Func Offset: 0x180
	// Line 266, Address: 0x183cb8, Func Offset: 0x198
	// Line 270, Address: 0x183cd8, Func Offset: 0x1b8
	// Line 274, Address: 0x183cf4, Func Offset: 0x1d4
	// Line 277, Address: 0x183d04, Func Offset: 0x1e4
	// Line 290, Address: 0x183d18, Func Offset: 0x1f8
	// Line 296, Address: 0x183d2c, Func Offset: 0x20c
	// Line 301, Address: 0x183d34, Func Offset: 0x214
	// Line 302, Address: 0x183d44, Func Offset: 0x224
	// Line 303, Address: 0x183d54, Func Offset: 0x234
	// Line 304, Address: 0x183d64, Func Offset: 0x244
	// Line 305, Address: 0x183d6c, Func Offset: 0x24c
	// Func End, Address: 0x183d88, Func Offset: 0x268
}

// 
// Start address: 0x183d90
int sh2gfw_Get_NightOrDay()
{
	// Line 316, Address: 0x183d90, Func Offset: 0
	// Line 318, Address: 0x183da0, Func Offset: 0x10
	// Func End, Address: 0x183da8, Func Offset: 0x18
}

// 
// Start address: 0x183db0
void sh2gfw_Set_Night()
{
	int k;
	// Line 326, Address: 0x183db0, Func Offset: 0
	// Line 329, Address: 0x183dbc, Func Offset: 0xc
	// Line 334, Address: 0x183dcc, Func Offset: 0x1c
	// Line 335, Address: 0x183de0, Func Offset: 0x30
	// Line 336, Address: 0x183df4, Func Offset: 0x44
	// Line 339, Address: 0x183e08, Func Offset: 0x58
	// Line 341, Address: 0x183e18, Func Offset: 0x68
	// Line 342, Address: 0x183e20, Func Offset: 0x70
	// Line 343, Address: 0x183e28, Func Offset: 0x78
	// Line 345, Address: 0x183e30, Func Offset: 0x80
	// Line 346, Address: 0x183e38, Func Offset: 0x88
	// Line 347, Address: 0x183e40, Func Offset: 0x90
	// Line 348, Address: 0x183e48, Func Offset: 0x98
	// Line 350, Address: 0x183e54, Func Offset: 0xa4
	// Line 351, Address: 0x183e64, Func Offset: 0xb4
	// Line 352, Address: 0x183e78, Func Offset: 0xc8
	// Line 353, Address: 0x183e88, Func Offset: 0xd8
	// Line 355, Address: 0x183e98, Func Offset: 0xe8
	// Line 361, Address: 0x183ed0, Func Offset: 0x120
	// Line 370, Address: 0x183efc, Func Offset: 0x14c
	// Line 372, Address: 0x183f08, Func Offset: 0x158
	// Line 379, Address: 0x183f14, Func Offset: 0x164
	// Line 384, Address: 0x183f48, Func Offset: 0x198
	// Line 386, Address: 0x183f64, Func Offset: 0x1b4
	// Line 394, Address: 0x183f70, Func Offset: 0x1c0
	// Func End, Address: 0x183f84, Func Offset: 0x1d4
}

// 
// Start address: 0x183f90
void sh2gfw_Set_Day()
{
	int k;
	// Line 402, Address: 0x183f90, Func Offset: 0
	// Line 406, Address: 0x183f9c, Func Offset: 0xc
	// Line 409, Address: 0x183fac, Func Offset: 0x1c
	// Line 410, Address: 0x183fc0, Func Offset: 0x30
	// Line 411, Address: 0x183fd4, Func Offset: 0x44
	// Line 412, Address: 0x183fe8, Func Offset: 0x58
	// Line 414, Address: 0x183ff8, Func Offset: 0x68
	// Line 415, Address: 0x184004, Func Offset: 0x74
	// Line 416, Address: 0x184010, Func Offset: 0x80
	// Line 418, Address: 0x18401c, Func Offset: 0x8c
	// Line 419, Address: 0x184028, Func Offset: 0x98
	// Line 420, Address: 0x184034, Func Offset: 0xa4
	// Line 421, Address: 0x184040, Func Offset: 0xb0
	// Line 423, Address: 0x18404c, Func Offset: 0xbc
	// Line 424, Address: 0x184060, Func Offset: 0xd0
	// Line 425, Address: 0x184074, Func Offset: 0xe4
	// Line 426, Address: 0x184084, Func Offset: 0xf4
	// Line 429, Address: 0x184094, Func Offset: 0x104
	// Line 436, Address: 0x1840cc, Func Offset: 0x13c
	// Line 444, Address: 0x1840f8, Func Offset: 0x168
	// Line 446, Address: 0x184104, Func Offset: 0x174
	// Line 447, Address: 0x184110, Func Offset: 0x180
	// Line 451, Address: 0x184144, Func Offset: 0x1b4
	// Line 453, Address: 0x18415c, Func Offset: 0x1cc
	// Line 459, Address: 0x184164, Func Offset: 0x1d4
	// Func End, Address: 0x184178, Func Offset: 0x1e8
}

