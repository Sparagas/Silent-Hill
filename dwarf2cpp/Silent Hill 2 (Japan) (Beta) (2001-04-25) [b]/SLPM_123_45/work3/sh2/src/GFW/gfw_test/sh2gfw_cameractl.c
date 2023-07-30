typedef struct sh2gfw_AREA_HEAD;
typedef struct sh2gfw_BLOCK_HEAD;
typedef struct sh2gfw_Env_ctl;
typedef struct sh2gfw_BLOCKGLOBAL_HEAD;
typedef struct sh2gfw_BLOCKLOCAL_HEAD;
typedef struct sh2gfw_TEX_HEAD;
typedef struct _anon0;
typedef struct sh2gfw_BLOCK_MAN;
typedef struct sh2gfw_GSREGS_HEAD;
typedef struct sh2gfw_GIFTAG_HEAD;
typedef struct sh2gfw_SPOTL_MATRIX;
typedef struct sh2gfw_CLUTS_HEAD;
typedef union Q_WORDDATA;
typedef struct sh2gfw_POINTL_MATRIX;


typedef unsigned char type_0[8];
typedef unsigned char type_1[8][8];
typedef Q_WORDDATA type_2[3];
typedef sh2gfw_BLOCK_MAN type_3[6];
typedef unsigned int type_4[3];
typedef unsigned int type_5[3];
typedef float type_6[4];
typedef float type_7[4];
typedef float type_8[4][4];
typedef unsigned short type_9[3];
typedef unsigned short type_10[3];
typedef float type_11[4][2];
typedef unsigned short type_12[4];
typedef sh2gfw_GSREGS_HEAD* type_13[4];
typedef sh2gfw_GIFTAG_HEAD* type_14[16];
typedef sh2gfw_GIFTAG_HEAD* type_15[16][4];
typedef char type_16[32];
typedef unsigned short type_17[8];
typedef unsigned short type_18[8][16];
typedef unsigned short type_19[8][16][4];
typedef sh2gfw_TEX_HEAD* type_20[4];
typedef sh2gfw_CLUTS_HEAD* type_21[4];
typedef unsigned char type_22[4];
typedef unsigned char type_23[16];
typedef unsigned char type_24[16][4];
typedef unsigned char type_25[16];
typedef unsigned char type_26[16][16];
typedef unsigned char type_27[16][16][4];
typedef char type_28[32];
typedef unsigned char type_29[16];
typedef void* type_30[4];
typedef unsigned char type_31[16];
typedef Q_WORDDATA* type_32[4];
typedef unsigned int type_33[4];
typedef int type_34[8];
typedef int type_35[8];
typedef unsigned int type_36[4];
typedef unsigned short type_37[8];
typedef unsigned char type_38[16];
typedef float type_39[4];
typedef unsigned char type_40[16];
typedef unsigned char type_41[16];
typedef int type_42[4];
typedef short type_43[8];
typedef char type_44[16];
typedef unsigned long type_45[2];
typedef sh2gfw_GIFTAG_HEAD* type_46[16];

struct sh2gfw_AREA_HEAD
{
	unsigned int area_id;
	unsigned int toGlobalTexHead;
	unsigned int toGlobalClutsHead;
	unsigned int date;
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

struct sh2gfw_SPOTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA spot_rot;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
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

struct sh2gfw_POINTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
};

unsigned int paddata2;
unsigned int paddata;
sh2gfw_Env_ctl Env_ctl;
sh2gfw_BLOCK_MAN b_man[6];

void kari_cameractl_main();
void kari_handle_ctl1();
void kari_handle_ctl2();
void dbg_ambient_set(int pd2);
void dbg_parallel_set(int pd, int flg);
void dbg_spotL_ctl(unsigned int pd2);
void dbg_ambifog_ctl(unsigned int pd2);
void dbg_fogparm_ctl(unsigned int paddata2);
void camera_matrix_trim(unsigned int paddata);
void trim_shadow_parm(unsigned int paddata);
void trim_farnear(unsigned int paddata);
int dbg_noise_set(unsigned int paddata2);
int dbg_gamma_ctl(unsigned int paddata2);

// 
// Start address: 0x17ade0
void kari_cameractl_main()
{
	char padbuffer[32];
	char padbuffer[32];
	// Line 134, Address: 0x17ade0, Func Offset: 0
	// Line 183, Address: 0x17ade8, Func Offset: 0x8
	// Line 184, Address: 0x17adf0, Func Offset: 0x10
	// Line 200, Address: 0x17adf8, Func Offset: 0x18
	// Line 203, Address: 0x17ae0c, Func Offset: 0x2c
	// Line 205, Address: 0x17ae20, Func Offset: 0x40
	// Line 208, Address: 0x17ae48, Func Offset: 0x68
	// Line 209, Address: 0x17ae54, Func Offset: 0x74
	// Line 211, Address: 0x17ae70, Func Offset: 0x90
	// Line 213, Address: 0x17ae84, Func Offset: 0xa4
	// Line 216, Address: 0x17aeac, Func Offset: 0xcc
	// Line 235, Address: 0x17aeb8, Func Offset: 0xd8
	// Func End, Address: 0x17aec8, Func Offset: 0xe8
}

// 
// Start address: 0x17aed0
void kari_handle_ctl1()
{
	unsigned char stat2;
	unsigned char stat1;
	// Line 243, Address: 0x17aed0, Func Offset: 0
	// Line 244, Address: 0x17aee0, Func Offset: 0x10
	// Line 248, Address: 0x17aee8, Func Offset: 0x18
	// Line 251, Address: 0x17af00, Func Offset: 0x30
	// Line 253, Address: 0x17af18, Func Offset: 0x48
	// Line 254, Address: 0x17af2c, Func Offset: 0x5c
	// Line 255, Address: 0x17af34, Func Offset: 0x64
	// Line 256, Address: 0x17af40, Func Offset: 0x70
	// Line 258, Address: 0x17af60, Func Offset: 0x90
	// Line 259, Address: 0x17af74, Func Offset: 0xa4
	// Line 260, Address: 0x17af78, Func Offset: 0xa8
	// Line 261, Address: 0x17af80, Func Offset: 0xb0
	// Line 263, Address: 0x17afa0, Func Offset: 0xd0
	// Line 264, Address: 0x17afb4, Func Offset: 0xe4
	// Line 265, Address: 0x17afbc, Func Offset: 0xec
	// Line 266, Address: 0x17afc8, Func Offset: 0xf8
	// Line 268, Address: 0x17afe8, Func Offset: 0x118
	// Line 269, Address: 0x17affc, Func Offset: 0x12c
	// Line 270, Address: 0x17b004, Func Offset: 0x134
	// Line 272, Address: 0x17b010, Func Offset: 0x140
	// Line 274, Address: 0x17b030, Func Offset: 0x160
	// Line 275, Address: 0x17b044, Func Offset: 0x174
	// Line 276, Address: 0x17b04c, Func Offset: 0x17c
	// Line 278, Address: 0x17b058, Func Offset: 0x188
	// Line 280, Address: 0x17b078, Func Offset: 0x1a8
	// Line 281, Address: 0x17b08c, Func Offset: 0x1bc
	// Line 282, Address: 0x17b094, Func Offset: 0x1c4
	// Line 283, Address: 0x17b0a0, Func Offset: 0x1d0
	// Line 285, Address: 0x17b0c0, Func Offset: 0x1f0
	// Line 286, Address: 0x17b0d4, Func Offset: 0x204
	// Line 287, Address: 0x17b0dc, Func Offset: 0x20c
	// Line 295, Address: 0x17b0e8, Func Offset: 0x218
	// Line 305, Address: 0x17b11c, Func Offset: 0x24c
	// Line 306, Address: 0x17b12c, Func Offset: 0x25c
	// Line 309, Address: 0x17b134, Func Offset: 0x264
	// Line 310, Address: 0x17b14c, Func Offset: 0x27c
	// Line 311, Address: 0x17b15c, Func Offset: 0x28c
	// Line 312, Address: 0x17b16c, Func Offset: 0x29c
	// Line 315, Address: 0x17b174, Func Offset: 0x2a4
	// Line 421, Address: 0x17b17c, Func Offset: 0x2ac
	// Line 424, Address: 0x17b184, Func Offset: 0x2b4
	// Line 545, Address: 0x17b18c, Func Offset: 0x2bc
	// Line 547, Address: 0x17b194, Func Offset: 0x2c4
	// Line 548, Address: 0x17b1a4, Func Offset: 0x2d4
	// Line 550, Address: 0x17b1ac, Func Offset: 0x2dc
	// Line 561, Address: 0x17b1bc, Func Offset: 0x2ec
	// Func End, Address: 0x17b1d4, Func Offset: 0x304
}

// 
// Start address: 0x17b1e0
void kari_handle_ctl2()
{
	unsigned char stat2;
	unsigned char stat1;
	// Line 563, Address: 0x17b1e0, Func Offset: 0
	// Line 564, Address: 0x17b1f0, Func Offset: 0x10
	// Line 566, Address: 0x17b1f8, Func Offset: 0x18
	// Line 568, Address: 0x17b210, Func Offset: 0x30
	// Line 570, Address: 0x17b228, Func Offset: 0x48
	// Line 571, Address: 0x17b23c, Func Offset: 0x5c
	// Line 572, Address: 0x17b240, Func Offset: 0x60
	// Line 574, Address: 0x17b248, Func Offset: 0x68
	// Line 576, Address: 0x17b268, Func Offset: 0x88
	// Line 577, Address: 0x17b27c, Func Offset: 0x9c
	// Line 578, Address: 0x17b284, Func Offset: 0xa4
	// Line 580, Address: 0x17b290, Func Offset: 0xb0
	// Line 582, Address: 0x17b2b0, Func Offset: 0xd0
	// Line 583, Address: 0x17b2c4, Func Offset: 0xe4
	// Line 584, Address: 0x17b2cc, Func Offset: 0xec
	// Line 586, Address: 0x17b2d8, Func Offset: 0xf8
	// Line 588, Address: 0x17b2f8, Func Offset: 0x118
	// Line 589, Address: 0x17b30c, Func Offset: 0x12c
	// Line 590, Address: 0x17b314, Func Offset: 0x134
	// Line 592, Address: 0x17b320, Func Offset: 0x140
	// Line 594, Address: 0x17b340, Func Offset: 0x160
	// Line 595, Address: 0x17b354, Func Offset: 0x174
	// Line 596, Address: 0x17b35c, Func Offset: 0x17c
	// Line 598, Address: 0x17b368, Func Offset: 0x188
	// Line 600, Address: 0x17b388, Func Offset: 0x1a8
	// Line 601, Address: 0x17b39c, Func Offset: 0x1bc
	// Line 602, Address: 0x17b3a4, Func Offset: 0x1c4
	// Line 604, Address: 0x17b3b0, Func Offset: 0x1d0
	// Line 606, Address: 0x17b3d0, Func Offset: 0x1f0
	// Line 607, Address: 0x17b3e4, Func Offset: 0x204
	// Line 608, Address: 0x17b3ec, Func Offset: 0x20c
	// Line 610, Address: 0x17b3f8, Func Offset: 0x218
	// Line 612, Address: 0x17b418, Func Offset: 0x238
	// Line 613, Address: 0x17b42c, Func Offset: 0x24c
	// Line 614, Address: 0x17b434, Func Offset: 0x254
	// Line 616, Address: 0x17b440, Func Offset: 0x260
	// Line 618, Address: 0x17b460, Func Offset: 0x280
	// Line 619, Address: 0x17b474, Func Offset: 0x294
	// Line 620, Address: 0x17b47c, Func Offset: 0x29c
	// Line 627, Address: 0x17b488, Func Offset: 0x2a8
	// Line 629, Address: 0x17b4bc, Func Offset: 0x2dc
	// Line 630, Address: 0x17b4cc, Func Offset: 0x2ec
	// Line 632, Address: 0x17b4d4, Func Offset: 0x2f4
	// Line 633, Address: 0x17b4e4, Func Offset: 0x304
	// Line 636, Address: 0x17b4ec, Func Offset: 0x30c
	// Line 637, Address: 0x17b4fc, Func Offset: 0x31c
	// Line 640, Address: 0x17b504, Func Offset: 0x324
	// Line 641, Address: 0x17b514, Func Offset: 0x334
	// Line 644, Address: 0x17b51c, Func Offset: 0x33c
	// Line 645, Address: 0x17b52c, Func Offset: 0x34c
	// Line 647, Address: 0x17b534, Func Offset: 0x354
	// Line 648, Address: 0x17b548, Func Offset: 0x368
	// Line 651, Address: 0x17b550, Func Offset: 0x370
	// Line 652, Address: 0x17b564, Func Offset: 0x384
	// Line 655, Address: 0x17b56c, Func Offset: 0x38c
	// Line 664, Address: 0x17b57c, Func Offset: 0x39c
	// Func End, Address: 0x17b594, Func Offset: 0x3b4
}

// 
// Start address: 0x17b5a0
void dbg_ambient_set(int pd2)
{
	// Line 680, Address: 0x17b5a0, Func Offset: 0
	// Line 682, Address: 0x17b5a8, Func Offset: 0x8
	// Line 685, Address: 0x17b5fc, Func Offset: 0x5c
	// Line 686, Address: 0x17b624, Func Offset: 0x84
	// Line 687, Address: 0x17b648, Func Offset: 0xa8
	// Line 688, Address: 0x17b66c, Func Offset: 0xcc
	// Line 690, Address: 0x17b690, Func Offset: 0xf0
	// Line 692, Address: 0x17b698, Func Offset: 0xf8
	// Line 693, Address: 0x17b6c0, Func Offset: 0x120
	// Line 694, Address: 0x17b6e4, Func Offset: 0x144
	// Line 695, Address: 0x17b708, Func Offset: 0x168
	// Line 697, Address: 0x17b72c, Func Offset: 0x18c
	// Line 700, Address: 0x17b734, Func Offset: 0x194
	// Line 701, Address: 0x17b75c, Func Offset: 0x1bc
	// Line 702, Address: 0x17b780, Func Offset: 0x1e0
	// Line 703, Address: 0x17b7a4, Func Offset: 0x204
	// Line 706, Address: 0x17b7c8, Func Offset: 0x228
	// Line 708, Address: 0x17b7d0, Func Offset: 0x230
	// Line 709, Address: 0x17b7f8, Func Offset: 0x258
	// Line 710, Address: 0x17b81c, Func Offset: 0x27c
	// Line 711, Address: 0x17b840, Func Offset: 0x2a0
	// Line 714, Address: 0x17b864, Func Offset: 0x2c4
	// Line 717, Address: 0x17b86c, Func Offset: 0x2cc
	// Line 718, Address: 0x17b890, Func Offset: 0x2f0
	// Line 719, Address: 0x17b8b4, Func Offset: 0x314
	// Line 722, Address: 0x17b8d8, Func Offset: 0x338
	// Line 724, Address: 0x17b8e0, Func Offset: 0x340
	// Line 725, Address: 0x17b908, Func Offset: 0x368
	// Line 726, Address: 0x17b92c, Func Offset: 0x38c
	// Line 727, Address: 0x17b950, Func Offset: 0x3b0
	// Line 731, Address: 0x17b974, Func Offset: 0x3d4
	// Func End, Address: 0x17b980, Func Offset: 0x3e0
}

// 
// Start address: 0x17b980
void dbg_parallel_set(int pd, int flg)
{
	float mat[4][4];
	float tmpc[4];
	float tmpv[4];
	// Line 737, Address: 0x17b980, Func Offset: 0
	// Line 743, Address: 0x17b990, Func Offset: 0x10
	// Line 745, Address: 0x17b99c, Func Offset: 0x1c
	// Line 746, Address: 0x17b9ac, Func Offset: 0x2c
	// Line 747, Address: 0x17b9c0, Func Offset: 0x40
	// Line 748, Address: 0x17b9d4, Func Offset: 0x54
	// Line 749, Address: 0x17b9dc, Func Offset: 0x5c
	// Line 750, Address: 0x17b9f0, Func Offset: 0x70
	// Line 754, Address: 0x17ba04, Func Offset: 0x84
	// Line 757, Address: 0x17baa0, Func Offset: 0x120
	// Line 758, Address: 0x17babc, Func Offset: 0x13c
	// Line 760, Address: 0x17bac4, Func Offset: 0x144
	// Line 761, Address: 0x17bae0, Func Offset: 0x160
	// Line 763, Address: 0x17bae8, Func Offset: 0x168
	// Line 764, Address: 0x17bb04, Func Offset: 0x184
	// Line 766, Address: 0x17bb0c, Func Offset: 0x18c
	// Line 767, Address: 0x17bb28, Func Offset: 0x1a8
	// Line 770, Address: 0x17bb30, Func Offset: 0x1b0
	// Line 771, Address: 0x17bb68, Func Offset: 0x1e8
	// Line 772, Address: 0x17bb84, Func Offset: 0x204
	// Line 774, Address: 0x17bb8c, Func Offset: 0x20c
	// Line 775, Address: 0x17bbc4, Func Offset: 0x244
	// Line 777, Address: 0x17bbe0, Func Offset: 0x260
	// Line 778, Address: 0x17bc04, Func Offset: 0x284
	// Line 779, Address: 0x17bc18, Func Offset: 0x298
	// Line 780, Address: 0x17bc2c, Func Offset: 0x2ac
	// Line 782, Address: 0x17bc40, Func Offset: 0x2c0
	// Line 785, Address: 0x17bc48, Func Offset: 0x2c8
	// Line 786, Address: 0x17bc64, Func Offset: 0x2e4
	// Line 788, Address: 0x17bc6c, Func Offset: 0x2ec
	// Line 789, Address: 0x17bc88, Func Offset: 0x308
	// Line 790, Address: 0x17bcac, Func Offset: 0x32c
	// Line 792, Address: 0x17bcc0, Func Offset: 0x340
	// Line 795, Address: 0x17bcc8, Func Offset: 0x348
	// Line 796, Address: 0x17bce4, Func Offset: 0x364
	// Line 798, Address: 0x17bcec, Func Offset: 0x36c
	// Line 799, Address: 0x17bd08, Func Offset: 0x388
	// Line 800, Address: 0x17bd2c, Func Offset: 0x3ac
	// Line 802, Address: 0x17bd40, Func Offset: 0x3c0
	// Line 805, Address: 0x17bd48, Func Offset: 0x3c8
	// Line 806, Address: 0x17bd64, Func Offset: 0x3e4
	// Line 808, Address: 0x17bd6c, Func Offset: 0x3ec
	// Line 809, Address: 0x17bd88, Func Offset: 0x408
	// Line 810, Address: 0x17bdac, Func Offset: 0x42c
	// Line 815, Address: 0x17bdc0, Func Offset: 0x440
	// Line 816, Address: 0x17bdd4, Func Offset: 0x454
	// Line 817, Address: 0x17bde4, Func Offset: 0x464
	// Line 818, Address: 0x17bdf4, Func Offset: 0x474
	// Line 819, Address: 0x17be00, Func Offset: 0x480
	// Line 820, Address: 0x17be0c, Func Offset: 0x48c
	// Line 821, Address: 0x17be18, Func Offset: 0x498
	// Line 822, Address: 0x17be2c, Func Offset: 0x4ac
	// Line 823, Address: 0x17be34, Func Offset: 0x4b4
	// Line 824, Address: 0x17be40, Func Offset: 0x4c0
	// Line 825, Address: 0x17be4c, Func Offset: 0x4cc
	// Line 826, Address: 0x17be58, Func Offset: 0x4d8
	// Line 832, Address: 0x17be6c, Func Offset: 0x4ec
	// Func End, Address: 0x17be7c, Func Offset: 0x4fc
}

// 
// Start address: 0x17be80
void dbg_spotL_ctl(unsigned int pd2)
{
	sh2gfw_SPOTL_MATRIX* splm;
	// Line 850, Address: 0x17be80, Func Offset: 0
	// Line 855, Address: 0x17be90, Func Offset: 0x10
	// Line 857, Address: 0x17bec4, Func Offset: 0x44
	// Line 858, Address: 0x17becc, Func Offset: 0x4c
	// Line 860, Address: 0x17bed4, Func Offset: 0x54
	// Line 861, Address: 0x17bedc, Func Offset: 0x5c
	// Line 863, Address: 0x17bee4, Func Offset: 0x64
	// Line 864, Address: 0x17beec, Func Offset: 0x6c
	// Line 866, Address: 0x17bef4, Func Offset: 0x74
	// Line 873, Address: 0x17befc, Func Offset: 0x7c
	// Line 876, Address: 0x17bff8, Func Offset: 0x178
	// Line 877, Address: 0x17c018, Func Offset: 0x198
	// Line 879, Address: 0x17c020, Func Offset: 0x1a0
	// Line 880, Address: 0x17c040, Func Offset: 0x1c0
	// Line 882, Address: 0x17c048, Func Offset: 0x1c8
	// Line 883, Address: 0x17c068, Func Offset: 0x1e8
	// Line 885, Address: 0x17c070, Func Offset: 0x1f0
	// Line 886, Address: 0x17c090, Func Offset: 0x210
	// Line 889, Address: 0x17c098, Func Offset: 0x218
	// Line 890, Address: 0x17c0b8, Func Offset: 0x238
	// Line 893, Address: 0x17c0c0, Func Offset: 0x240
	// Line 894, Address: 0x17c0e0, Func Offset: 0x260
	// Line 898, Address: 0x17c0e8, Func Offset: 0x268
	// Line 899, Address: 0x17c10c, Func Offset: 0x28c
	// Line 900, Address: 0x17c128, Func Offset: 0x2a8
	// Line 903, Address: 0x17c130, Func Offset: 0x2b0
	// Line 904, Address: 0x17c154, Func Offset: 0x2d4
	// Line 905, Address: 0x17c170, Func Offset: 0x2f0
	// Line 908, Address: 0x17c178, Func Offset: 0x2f8
	// Line 909, Address: 0x17c19c, Func Offset: 0x31c
	// Line 910, Address: 0x17c1b8, Func Offset: 0x338
	// Line 913, Address: 0x17c1c0, Func Offset: 0x340
	// Line 914, Address: 0x17c1e4, Func Offset: 0x364
	// Line 915, Address: 0x17c200, Func Offset: 0x380
	// Line 919, Address: 0x17c208, Func Offset: 0x388
	// Line 920, Address: 0x17c224, Func Offset: 0x3a4
	// Line 921, Address: 0x17c240, Func Offset: 0x3c0
	// Line 922, Address: 0x17c25c, Func Offset: 0x3dc
	// Line 926, Address: 0x17c264, Func Offset: 0x3e4
	// Line 927, Address: 0x17c280, Func Offset: 0x400
	// Line 928, Address: 0x17c29c, Func Offset: 0x41c
	// Line 930, Address: 0x17c2b8, Func Offset: 0x438
	// Line 933, Address: 0x17c2c0, Func Offset: 0x440
	// Line 934, Address: 0x17c2e4, Func Offset: 0x464
	// Line 935, Address: 0x17c2fc, Func Offset: 0x47c
	// Line 938, Address: 0x17c304, Func Offset: 0x484
	// Line 939, Address: 0x17c324, Func Offset: 0x4a4
	// Line 941, Address: 0x17c33c, Func Offset: 0x4bc
	// Line 988, Address: 0x17c344, Func Offset: 0x4c4
	// Line 990, Address: 0x17c35c, Func Offset: 0x4dc
	// Line 992, Address: 0x17c364, Func Offset: 0x4e4
	// Line 993, Address: 0x17c38c, Func Offset: 0x50c
	// Line 995, Address: 0x17c3a4, Func Offset: 0x524
	// Line 999, Address: 0x17c3ac, Func Offset: 0x52c
	// Line 1000, Address: 0x17c3d0, Func Offset: 0x550
	// Line 1001, Address: 0x17c3ec, Func Offset: 0x56c
	// Line 1003, Address: 0x17c3fc, Func Offset: 0x57c
	// Line 1006, Address: 0x17c404, Func Offset: 0x584
	// Line 1007, Address: 0x17c428, Func Offset: 0x5a8
	// Line 1008, Address: 0x17c444, Func Offset: 0x5c4
	// Line 1013, Address: 0x17c454, Func Offset: 0x5d4
	// Line 1014, Address: 0x17c47c, Func Offset: 0x5fc
	// Line 1017, Address: 0x17c494, Func Offset: 0x614
	// Line 1019, Address: 0x17c49c, Func Offset: 0x61c
	// Line 1020, Address: 0x17c4bc, Func Offset: 0x63c
	// Line 1029, Address: 0x17c4d4, Func Offset: 0x654
	// Func End, Address: 0x17c4e8, Func Offset: 0x668
}

// 
// Start address: 0x17c4f0
void dbg_ambifog_ctl(unsigned int pd2)
{
	int i;
	int max;
	// Line 1037, Address: 0x17c4f0, Func Offset: 0
	// Line 1040, Address: 0x17c504, Func Offset: 0x14
	// Line 1043, Address: 0x17c510, Func Offset: 0x20
	// Line 1045, Address: 0x17c5c4, Func Offset: 0xd4
	// Line 1046, Address: 0x17c5ec, Func Offset: 0xfc
	// Line 1047, Address: 0x17c610, Func Offset: 0x120
	// Line 1048, Address: 0x17c634, Func Offset: 0x144
	// Line 1050, Address: 0x17c658, Func Offset: 0x168
	// Line 1052, Address: 0x17c660, Func Offset: 0x170
	// Line 1053, Address: 0x17c680, Func Offset: 0x190
	// Line 1054, Address: 0x17c6a4, Func Offset: 0x1b4
	// Line 1055, Address: 0x17c6c8, Func Offset: 0x1d8
	// Line 1057, Address: 0x17c6ec, Func Offset: 0x1fc
	// Line 1060, Address: 0x17c6f4, Func Offset: 0x204
	// Line 1061, Address: 0x17c700, Func Offset: 0x210
	// Line 1063, Address: 0x17c73c, Func Offset: 0x24c
	// Line 1065, Address: 0x17c744, Func Offset: 0x254
	// Line 1066, Address: 0x17c750, Func Offset: 0x260
	// Line 1067, Address: 0x17c78c, Func Offset: 0x29c
	// Line 1071, Address: 0x17c794, Func Offset: 0x2a4
	// Line 1072, Address: 0x17c7a0, Func Offset: 0x2b0
	// Line 1074, Address: 0x17c7e4, Func Offset: 0x2f4
	// Line 1076, Address: 0x17c7ec, Func Offset: 0x2fc
	// Line 1077, Address: 0x17c7f8, Func Offset: 0x308
	// Line 1079, Address: 0x17c83c, Func Offset: 0x34c
	// Line 1083, Address: 0x17c844, Func Offset: 0x354
	// Line 1084, Address: 0x17c850, Func Offset: 0x360
	// Line 1085, Address: 0x17c894, Func Offset: 0x3a4
	// Line 1087, Address: 0x17c89c, Func Offset: 0x3ac
	// Line 1088, Address: 0x17c8a8, Func Offset: 0x3b8
	// Line 1089, Address: 0x17c8ec, Func Offset: 0x3fc
	// Line 1097, Address: 0x17c8f4, Func Offset: 0x404
	// Line 1098, Address: 0x17c918, Func Offset: 0x428
	// Line 1099, Address: 0x17c938, Func Offset: 0x448
	// Line 1101, Address: 0x17c95c, Func Offset: 0x46c
	// Line 1104, Address: 0x17c964, Func Offset: 0x474
	// Line 1105, Address: 0x17c988, Func Offset: 0x498
	// Line 1106, Address: 0x17c9a8, Func Offset: 0x4b8
	// Line 1108, Address: 0x17c9cc, Func Offset: 0x4dc
	// Line 1111, Address: 0x17c9d4, Func Offset: 0x4e4
	// Line 1112, Address: 0x17c9ec, Func Offset: 0x4fc
	// Line 1113, Address: 0x17ca00, Func Offset: 0x510
	// Line 1114, Address: 0x17ca14, Func Offset: 0x524
	// Line 1116, Address: 0x17ca28, Func Offset: 0x538
	// Line 1122, Address: 0x17ca54, Func Offset: 0x564
	// Line 1125, Address: 0x17ca5c, Func Offset: 0x56c
	// Line 1126, Address: 0x17ca70, Func Offset: 0x580
	// Line 1127, Address: 0x17ca84, Func Offset: 0x594
	// Line 1128, Address: 0x17ca98, Func Offset: 0x5a8
	// Line 1130, Address: 0x17caac, Func Offset: 0x5bc
	// Line 1137, Address: 0x17cad8, Func Offset: 0x5e8
	// Line 1140, Address: 0x17cae0, Func Offset: 0x5f0
	// Line 1142, Address: 0x17caf8, Func Offset: 0x608
	// Line 1143, Address: 0x17cb0c, Func Offset: 0x61c
	// Line 1144, Address: 0x17cb20, Func Offset: 0x630
	// Line 1147, Address: 0x17cb34, Func Offset: 0x644
	// Line 1155, Address: 0x17cb6c, Func Offset: 0x67c
	// Line 1159, Address: 0x17cb74, Func Offset: 0x684
	// Line 1161, Address: 0x17cb88, Func Offset: 0x698
	// Line 1162, Address: 0x17cb9c, Func Offset: 0x6ac
	// Line 1163, Address: 0x17cbb0, Func Offset: 0x6c0
	// Line 1166, Address: 0x17cbc4, Func Offset: 0x6d4
	// Line 1180, Address: 0x17cbfc, Func Offset: 0x70c
	// Func End, Address: 0x17cc14, Func Offset: 0x724
}

// 
// Start address: 0x17cc20
void dbg_fogparm_ctl(unsigned int paddata2)
{
	// Line 1372, Address: 0x17cc20, Func Offset: 0
	// Line 1374, Address: 0x17cc28, Func Offset: 0x8
	// Line 1378, Address: 0x17ccc4, Func Offset: 0xa4
	// Line 1379, Address: 0x17ccec, Func Offset: 0xcc
	// Line 1381, Address: 0x17cd0c, Func Offset: 0xec
	// Line 1383, Address: 0x17cd14, Func Offset: 0xf4
	// Line 1384, Address: 0x17cd40, Func Offset: 0x120
	// Line 1386, Address: 0x17cd60, Func Offset: 0x140
	// Line 1389, Address: 0x17cd68, Func Offset: 0x148
	// Line 1390, Address: 0x17cd90, Func Offset: 0x170
	// Line 1392, Address: 0x17cdb0, Func Offset: 0x190
	// Line 1394, Address: 0x17cdb8, Func Offset: 0x198
	// Line 1395, Address: 0x17cde8, Func Offset: 0x1c8
	// Line 1397, Address: 0x17ce08, Func Offset: 0x1e8
	// Line 1400, Address: 0x17ce10, Func Offset: 0x1f0
	// Line 1401, Address: 0x17ce44, Func Offset: 0x224
	// Line 1403, Address: 0x17ce68, Func Offset: 0x248
	// Line 1406, Address: 0x17ce70, Func Offset: 0x250
	// Line 1407, Address: 0x17ce98, Func Offset: 0x278
	// Line 1410, Address: 0x17cebc, Func Offset: 0x29c
	// Line 1413, Address: 0x17cec4, Func Offset: 0x2a4
	// Line 1414, Address: 0x17cef4, Func Offset: 0x2d4
	// Line 1416, Address: 0x17cf18, Func Offset: 0x2f8
	// Line 1419, Address: 0x17cf20, Func Offset: 0x300
	// Line 1420, Address: 0x17cf48, Func Offset: 0x328
	// Line 1441, Address: 0x17cf6c, Func Offset: 0x34c
	// Func End, Address: 0x17cf78, Func Offset: 0x358
}

// 
// Start address: 0x17cf80
void camera_matrix_trim(unsigned int paddata)
{
	// Line 1449, Address: 0x17cf80, Func Offset: 0
	// Line 1451, Address: 0x17cf88, Func Offset: 0x8
	// Line 1454, Address: 0x17cfdc, Func Offset: 0x5c
	// Line 1455, Address: 0x17d02c, Func Offset: 0xac
	// Line 1457, Address: 0x17d03c, Func Offset: 0xbc
	// Line 1461, Address: 0x17d044, Func Offset: 0xc4
	// Line 1462, Address: 0x17d090, Func Offset: 0x110
	// Line 1464, Address: 0x17d0a4, Func Offset: 0x124
	// Line 1468, Address: 0x17d0ac, Func Offset: 0x12c
	// Line 1469, Address: 0x17d0d0, Func Offset: 0x150
	// Line 1470, Address: 0x17d0f0, Func Offset: 0x170
	// Line 1471, Address: 0x17d110, Func Offset: 0x190
	// Line 1472, Address: 0x17d118, Func Offset: 0x198
	// Line 1473, Address: 0x17d128, Func Offset: 0x1a8
	// Line 1476, Address: 0x17d138, Func Offset: 0x1b8
	// Line 1480, Address: 0x17d140, Func Offset: 0x1c0
	// Line 1481, Address: 0x17d164, Func Offset: 0x1e4
	// Line 1482, Address: 0x17d184, Func Offset: 0x204
	// Line 1483, Address: 0x17d1a4, Func Offset: 0x224
	// Line 1484, Address: 0x17d1ac, Func Offset: 0x22c
	// Line 1485, Address: 0x17d1bc, Func Offset: 0x23c
	// Line 1488, Address: 0x17d1cc, Func Offset: 0x24c
	// Line 1495, Address: 0x17d1d4, Func Offset: 0x254
	// Line 1509, Address: 0x17d1e0, Func Offset: 0x260
	// Line 1512, Address: 0x17d1e8, Func Offset: 0x268
	// Line 1534, Address: 0x17d1f0, Func Offset: 0x270
	// Func End, Address: 0x17d1fc, Func Offset: 0x27c
}

// 
// Start address: 0x17d200
void trim_shadow_parm(unsigned int paddata)
{
	// Line 1539, Address: 0x17d200, Func Offset: 0
	// Line 1540, Address: 0x17d208, Func Offset: 0x8
	// Line 1545, Address: 0x17d304, Func Offset: 0x104
	// Line 1546, Address: 0x17d318, Func Offset: 0x118
	// Line 1547, Address: 0x17d32c, Func Offset: 0x12c
	// Line 1548, Address: 0x17d340, Func Offset: 0x140
	// Line 1552, Address: 0x17d354, Func Offset: 0x154
	// Line 1555, Address: 0x17d35c, Func Offset: 0x15c
	// Line 1556, Address: 0x17d36c, Func Offset: 0x16c
	// Line 1557, Address: 0x17d380, Func Offset: 0x180
	// Line 1558, Address: 0x17d394, Func Offset: 0x194
	// Line 1561, Address: 0x17d3a8, Func Offset: 0x1a8
	// Line 1564, Address: 0x17d3b0, Func Offset: 0x1b0
	// Line 1565, Address: 0x17d3c4, Func Offset: 0x1c4
	// Line 1567, Address: 0x17d3d8, Func Offset: 0x1d8
	// Line 1570, Address: 0x17d3e0, Func Offset: 0x1e0
	// Line 1571, Address: 0x17d3f0, Func Offset: 0x1f0
	// Line 1573, Address: 0x17d404, Func Offset: 0x204
	// Line 1577, Address: 0x17d40c, Func Offset: 0x20c
	// Line 1578, Address: 0x17d418, Func Offset: 0x218
	// Line 1580, Address: 0x17d420, Func Offset: 0x220
	// Line 1581, Address: 0x17d428, Func Offset: 0x228
	// Line 1583, Address: 0x17d430, Func Offset: 0x230
	// Line 1584, Address: 0x17d43c, Func Offset: 0x23c
	// Line 1586, Address: 0x17d444, Func Offset: 0x244
	// Line 1589, Address: 0x17d450, Func Offset: 0x250
	// Line 1590, Address: 0x17d45c, Func Offset: 0x25c
	// Line 1592, Address: 0x17d464, Func Offset: 0x264
	// Line 1593, Address: 0x17d46c, Func Offset: 0x26c
	// Line 1604, Address: 0x17d474, Func Offset: 0x274
	// Line 1606, Address: 0x17d490, Func Offset: 0x290
	// Line 1608, Address: 0x17d498, Func Offset: 0x298
	// Line 1615, Address: 0x17d4a0, Func Offset: 0x2a0
	// Line 1616, Address: 0x17d4bc, Func Offset: 0x2bc
	// Line 1618, Address: 0x17d4c8, Func Offset: 0x2c8
	// Line 1627, Address: 0x17d4d0, Func Offset: 0x2d0
	// Line 1628, Address: 0x17d4ec, Func Offset: 0x2ec
	// Line 1630, Address: 0x17d4f8, Func Offset: 0x2f8
	// Line 1641, Address: 0x17d500, Func Offset: 0x300
	// Line 1643, Address: 0x17d518, Func Offset: 0x318
	// Line 1645, Address: 0x17d520, Func Offset: 0x320
	// Line 1649, Address: 0x17d528, Func Offset: 0x328
	// Line 1651, Address: 0x17d540, Func Offset: 0x340
	// Line 1653, Address: 0x17d54c, Func Offset: 0x34c
	// Line 1658, Address: 0x17d554, Func Offset: 0x354
	// Line 1660, Address: 0x17d56c, Func Offset: 0x36c
	// Line 1661, Address: 0x17d578, Func Offset: 0x378
	// Line 1666, Address: 0x17d580, Func Offset: 0x380
	// Line 1668, Address: 0x17d598, Func Offset: 0x398
	// Line 1670, Address: 0x17d5a4, Func Offset: 0x3a4
	// Line 1674, Address: 0x17d5ac, Func Offset: 0x3ac
	// Line 1676, Address: 0x17d5c4, Func Offset: 0x3c4
	// Line 1678, Address: 0x17d5d0, Func Offset: 0x3d0
	// Line 1681, Address: 0x17d5d8, Func Offset: 0x3d8
	// Line 1683, Address: 0x17d5f0, Func Offset: 0x3f0
	// Line 1692, Address: 0x17d5fc, Func Offset: 0x3fc
	// Line 1694, Address: 0x17d614, Func Offset: 0x414
	// Line 1700, Address: 0x17d620, Func Offset: 0x420
	// Func End, Address: 0x17d62c, Func Offset: 0x42c
}

// 
// Start address: 0x17d630
void trim_farnear(unsigned int paddata)
{
	// Line 1713, Address: 0x17d630, Func Offset: 0
	// Line 1714, Address: 0x17d638, Func Offset: 0x8
	// Line 1717, Address: 0x17d6a4, Func Offset: 0x74
	// Line 1718, Address: 0x17d6c4, Func Offset: 0x94
	// Line 1719, Address: 0x17d700, Func Offset: 0xd0
	// Line 1721, Address: 0x17d708, Func Offset: 0xd8
	// Line 1722, Address: 0x17d728, Func Offset: 0xf8
	// Line 1723, Address: 0x17d754, Func Offset: 0x124
	// Line 1725, Address: 0x17d770, Func Offset: 0x140
	// Line 1732, Address: 0x17d778, Func Offset: 0x148
	// Line 1733, Address: 0x17d79c, Func Offset: 0x16c
	// Line 1734, Address: 0x17d7d0, Func Offset: 0x1a0
	// Line 1736, Address: 0x17d7d8, Func Offset: 0x1a8
	// Line 1737, Address: 0x17d7fc, Func Offset: 0x1cc
	// Line 1739, Address: 0x17d838, Func Offset: 0x208
	// Line 1741, Address: 0x17d840, Func Offset: 0x210
	// Line 1742, Address: 0x17d864, Func Offset: 0x234
	// Line 1743, Address: 0x17d8a0, Func Offset: 0x270
	// Line 1745, Address: 0x17d8a8, Func Offset: 0x278
	// Line 1746, Address: 0x17d8cc, Func Offset: 0x29c
	// Line 1752, Address: 0x17d900, Func Offset: 0x2d0
	// Func End, Address: 0x17d90c, Func Offset: 0x2dc
}

// 
// Start address: 0x17d910
int dbg_noise_set(unsigned int paddata2)
{
	// Line 1759, Address: 0x17d910, Func Offset: 0
	// Line 1760, Address: 0x17d918, Func Offset: 0x8
	// Line 1763, Address: 0x17d984, Func Offset: 0x74
	// Line 1764, Address: 0x17d98c, Func Offset: 0x7c
	// Line 1766, Address: 0x17d994, Func Offset: 0x84
	// Line 1767, Address: 0x17d9a0, Func Offset: 0x90
	// Line 1770, Address: 0x17d9a8, Func Offset: 0x98
	// Line 1771, Address: 0x17d9bc, Func Offset: 0xac
	// Line 1773, Address: 0x17d9c4, Func Offset: 0xb4
	// Line 1774, Address: 0x17d9d8, Func Offset: 0xc8
	// Line 1777, Address: 0x17d9e0, Func Offset: 0xd0
	// Line 1778, Address: 0x17d9f4, Func Offset: 0xe4
	// Line 1780, Address: 0x17d9fc, Func Offset: 0xec
	// Line 1781, Address: 0x17da10, Func Offset: 0x100
	// Line 1784, Address: 0x17da18, Func Offset: 0x108
	// Line 1785, Address: 0x17da2c, Func Offset: 0x11c
	// Line 1787, Address: 0x17da34, Func Offset: 0x124
	// Line 1790, Address: 0x17da48, Func Offset: 0x138
	// Func End, Address: 0x17da54, Func Offset: 0x144
}

// 
// Start address: 0x17da60
int dbg_gamma_ctl(unsigned int paddata2)
{
	// Line 1797, Address: 0x17da60, Func Offset: 0
	// Line 1800, Address: 0x17da68, Func Offset: 0x8
	// Line 1803, Address: 0x17daf8, Func Offset: 0x98
	// Line 1804, Address: 0x17db24, Func Offset: 0xc4
	// Line 1805, Address: 0x17db50, Func Offset: 0xf0
	// Line 1807, Address: 0x17db7c, Func Offset: 0x11c
	// Line 1810, Address: 0x17db84, Func Offset: 0x124
	// Line 1811, Address: 0x17dbb0, Func Offset: 0x150
	// Line 1812, Address: 0x17dbdc, Func Offset: 0x17c
	// Line 1813, Address: 0x17dc08, Func Offset: 0x1a8
	// Line 1816, Address: 0x17dc10, Func Offset: 0x1b0
	// Line 1818, Address: 0x17dc3c, Func Offset: 0x1dc
	// Line 1820, Address: 0x17dc44, Func Offset: 0x1e4
	// Line 1822, Address: 0x17dc70, Func Offset: 0x210
	// Line 1825, Address: 0x17dc78, Func Offset: 0x218
	// Line 1826, Address: 0x17dca4, Func Offset: 0x244
	// Line 1828, Address: 0x17dcac, Func Offset: 0x24c
	// Line 1829, Address: 0x17dcd8, Func Offset: 0x278
	// Line 1832, Address: 0x17dce0, Func Offset: 0x280
	// Line 1833, Address: 0x17dd0c, Func Offset: 0x2ac
	// Line 1836, Address: 0x17dd14, Func Offset: 0x2b4
	// Line 1837, Address: 0x17dd40, Func Offset: 0x2e0
	// Line 1840, Address: 0x17dd48, Func Offset: 0x2e8
	// Line 1841, Address: 0x17dd74, Func Offset: 0x314
	// Line 1844, Address: 0x17dd7c, Func Offset: 0x31c
	// Line 1845, Address: 0x17dda8, Func Offset: 0x348
	// Line 1848, Address: 0x17ddb0, Func Offset: 0x350
	// Line 1849, Address: 0x17ddd4, Func Offset: 0x374
	// Line 1852, Address: 0x17dddc, Func Offset: 0x37c
	// Func End, Address: 0x17dde8, Func Offset: 0x388
}

