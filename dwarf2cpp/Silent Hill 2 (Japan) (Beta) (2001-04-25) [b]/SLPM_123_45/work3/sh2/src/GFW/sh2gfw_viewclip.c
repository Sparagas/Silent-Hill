typedef struct sh2gfw_CLUTS_HEAD;
typedef struct sh2gfw_ALLTEXSYNC_MAN;
typedef struct _VbWVSMATRIX;
typedef struct sh2gfw_SPOTL_MATRIX;
typedef union Q_WORDDATA;
typedef struct sh2gfw_TexMAN;
typedef struct sh2gfw_GSREGS_HEAD;
typedef struct sh2gfw_POINTL_MATRIX;
typedef struct shBattleFight;
typedef struct sh2gfw_TEX_HEAD;
typedef struct sh2gfw_GIFTAG_HEAD;
typedef struct shBattleShot;
typedef struct sh2gfw_AREA_HEAD;
typedef struct sh2gfw_Env_ctl;
typedef struct sh2gfw_BLOCK_HEAD;
typedef struct shAttackInfo;
typedef union _anon0;
typedef struct sh2gfw_BLOCKGLOBAL_HEAD;
typedef struct sh2gfw_BLOCK_MAN;
typedef struct sh2gfw_BLOCKLOCAL_HEAD;
typedef struct _anon1;


typedef unsigned char type_0[4];
typedef float type_1[4];
typedef unsigned char type_2[16];
typedef unsigned char type_3[16][4];
typedef unsigned char type_4[16];
typedef unsigned char type_5[16][16];
typedef unsigned char type_6[16][16][4];
typedef unsigned char type_7[16];
typedef void* type_8[4];
typedef unsigned char type_9[16];
typedef Q_WORDDATA* type_10[4];
typedef unsigned int type_11[4];
typedef int type_12[8];
typedef unsigned int type_13[4];
typedef int type_14[8];
typedef unsigned short type_15[8];
typedef float type_16[4];
typedef float type_17[2];
typedef unsigned char type_18[16];
typedef int type_19[4];
typedef unsigned char type_20[16];
typedef unsigned char type_21[16];
typedef short type_22[8];
typedef char type_23[16];
typedef unsigned long type_24[2];
typedef Q_WORDDATA type_25[48];
typedef shAttackInfo type_26[46];
typedef Q_WORDDATA type_27[96];
typedef sh2gfw_TexMAN* type_28[96];
typedef sh2gfw_TexMAN type_29[96];
typedef sh2gfw_GIFTAG_HEAD* type_30[16];
typedef unsigned char type_31[8];
typedef unsigned char type_32[8][8];
typedef float type_33[4][3];
typedef Q_WORDDATA type_34[3];
typedef float type_35[4][3];
typedef int type_36[4][3];
typedef unsigned int type_37[3];
typedef unsigned int type_38[3];
typedef sh2gfw_BLOCK_MAN type_39[6];
typedef float type_40[4];
typedef float type_41[4][4];
typedef float type_42[4];
typedef unsigned short type_43[3];
typedef unsigned short type_44[3];
typedef int type_45[4];
typedef float type_46[4][4];
typedef float type_47[4][2];
typedef unsigned short type_48[4];
typedef sh2gfw_GSREGS_HEAD* type_49[4];
typedef sh2gfw_GIFTAG_HEAD* type_50[16];
typedef sh2gfw_GIFTAG_HEAD* type_51[16][4];
typedef unsigned short type_52[8];
typedef unsigned short type_53[8][16];
typedef unsigned short type_54[8][16][4];
typedef sh2gfw_TEX_HEAD* type_55[4];
typedef sh2gfw_CLUTS_HEAD* type_56[4];
typedef float type_57[4][4];

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

struct sh2gfw_ALLTEXSYNC_MAN
{
	unsigned short trans_BACK_num;
	unsigned short transed_BACK;
	unsigned short alltex_BACK;
	unsigned short trans_CHR_num;
	unsigned short transed_CHR;
	unsigned short alltex_CHR;
	unsigned short trans_OTHER_num;
	unsigned short transed_OTHER;
	unsigned short alltex_OTHER;
	unsigned short trans_GBL_num;
	unsigned short transed_GBL;
	unsigned short alltex_GBL;
	unsigned short trans_ALL_num;
	unsigned short transed_ALL;
	unsigned short alltexnum;
	unsigned short trans_NOW_num;
	sh2gfw_TexMAN Empty_Head;
	sh2gfw_TexMAN Used_Head;
	int dbg_add;
	int dbg_del;
	int pad1;
	int pad2;
	Q_WORDDATA TexTransChain[96];
	sh2gfw_TexMAN* TransOrderTable[96];
	sh2gfw_TexMAN TexMan[96];
};

struct _VbWVSMATRIX
{
	float wvm[4][4];
	float vsm[4][4];
	float wsm[4][4];
};

struct sh2gfw_SPOTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA spot_rot;
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

struct sh2gfw_TexMAN
{
	unsigned short check;
	unsigned short mode;
	unsigned short kind;
	unsigned short mark;
	unsigned short attr;
	unsigned short delay;
	int commandid;
	int slotid;
	void* Manage;
	sh2gfw_TexMAN* pPrev;
	sh2gfw_TexMAN* pNext;
	void* TexHead;
	void* ClutHead;
	void* tex;
	void* clut;
	Q_WORDDATA GIFA_D_REGS;
	Q_WORDDATA GS_TEXFLUSH;
	Q_WORDDATA GS_TEX0_1;
	Q_WORDDATA GS_TEX0_2;
	Q_WORDDATA GS_REG0;
	Q_WORDDATA GS_REG1;
	Q_WORDDATA GS_REG2;
	Q_WORDDATA GS_REG3;
	Q_WORDDATA GS_REG4;
	Q_WORDDATA TEX0_for_CLUT[48];
	Q_WORDDATA DMACNT;
	Q_WORDDATA GIFA_D_TEX;
	Q_WORDDATA GS_LABEL;
	Q_WORDDATA GS_TEX_BITBLT;
	Q_WORDDATA GS_TEX_TRXREG;
	Q_WORDDATA GS_TEX_TRXPOS;
	Q_WORDDATA GS_TEX_TRXDIR;
	Q_WORDDATA GIFIMAGE_TEX;
	Q_WORDDATA DMAREF_TEXTRANS;
	Q_WORDDATA DMACNT_CLUT;
	Q_WORDDATA GIFA_D_CLUT;
	Q_WORDDATA GS_CLUT_BITBLT;
	Q_WORDDATA GS_CLUT_TRXREG;
	Q_WORDDATA GS_CLUT_TRXPOS;
	Q_WORDDATA GS_CLUT_TRXDIR;
	Q_WORDDATA GIFIMAGE_CLUT;
	Q_WORDDATA DMAREF_CLUTTRANS;
	Q_WORDDATA DMAREF_DUMLBL;
	Q_WORDDATA DMAEND;
	Q_WORDDATA GIFA_D_LBLU;
	Q_WORDDATA GS_LABELU;
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

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
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

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
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

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon0 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
};

union _anon0
{
	shBattleFight fight;
	shBattleShot shot;
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
	_anon1 blk_LightData;
};

struct sh2gfw_BLOCKLOCAL_HEAD
{
	unsigned short gsregsamount[3];
	unsigned short transamount[3];
	unsigned short ltexnum;
	unsigned short pads;
};

struct _anon1
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

shAttackInfo sh2_attack_list[46];
int First_Draw;
sh2gfw_ALLTEXSYNC_MAN AllTexSync_Man;
sh2gfw_BLOCK_MAN b_man[6];
sh2gfw_Env_ctl Env_ctl;
unsigned int VU0_MIC_CAL_UTIL_DMAHEAD;
_VbWVSMATRIX VbWvsMatrix;

int sh2gfw_viewclip_block(Q_WORDDATA** qwd_tag);
void sh2gfw_ClipDraw_BG(sh2gfw_BLOCK_MAN* pB_man, float bbox[4], float view_triangle[4], Q_WORDDATA** qwd_data);
void sh2gfw_get_blockORIGIN(float bbox[4], float* origin);
int sh2gfw_Get_CamTilePos(float* origin);
void sh2gfw_get_ViewRecTangle(float* origin, float view_triangle[4], int* view_rect, int view_tile);
void sh2gfw_get_viewTriangle(float view_triangle[4]);
void sh2gfw_init_vctagbuf(void* vc);
void sh2gfw_make_tagclipdata(float* origin, float view_triangle[4], int* view_rect, sh2gfw_BLOCK_MAN* pBM);
int sh2_ClipHitCheckSquare(float mat[4], float* box, float* view_triangle);
void kari_set_vu0cal();
void sh2gfw_setVCTAG_DrawSys(sh2gfw_BLOCK_MAN* pB_man);
void sh2gfw_set_objclip_matrix();

// 
// Start address: 0x188e70
int sh2gfw_viewclip_block(Q_WORDDATA** qwd_tag)
{
	float bbox[4][4];
	float view_triangle[4][3];
	Q_WORDDATA* qwd;
	int clip;
	int num;
	int id;
	int imax;
	int i;
	// Line 108, Address: 0x188e70, Func Offset: 0
	// Line 109, Address: 0x188e90, Func Offset: 0x20
	// Line 116, Address: 0x188e94, Func Offset: 0x24
	// Line 119, Address: 0x188ea8, Func Offset: 0x38
	// Line 120, Address: 0x188eb4, Func Offset: 0x44
	// Line 123, Address: 0x188ec0, Func Offset: 0x50
	// Line 125, Address: 0x188ec8, Func Offset: 0x58
	// Line 130, Address: 0x188ed4, Func Offset: 0x64
	// Line 136, Address: 0x188edc, Func Offset: 0x6c
	// Line 138, Address: 0x188ee8, Func Offset: 0x78
	// Line 140, Address: 0x188ef8, Func Offset: 0x88
	// Line 142, Address: 0x188f20, Func Offset: 0xb0
	// Line 144, Address: 0x188f40, Func Offset: 0xd0
	// Line 145, Address: 0x188f58, Func Offset: 0xe8
	// Line 147, Address: 0x188f70, Func Offset: 0x100
	// Line 153, Address: 0x188fe0, Func Offset: 0x170
	// Line 154, Address: 0x188ffc, Func Offset: 0x18c
	// Line 155, Address: 0x189000, Func Offset: 0x190
	// Line 157, Address: 0x189008, Func Offset: 0x198
	// Line 159, Address: 0x189024, Func Offset: 0x1b4
	// Line 160, Address: 0x18902c, Func Offset: 0x1bc
	// Line 161, Address: 0x189048, Func Offset: 0x1d8
	// Line 162, Address: 0x18904c, Func Offset: 0x1dc
	// Line 175, Address: 0x189070, Func Offset: 0x200
	// Line 180, Address: 0x1890a4, Func Offset: 0x234
	// Line 184, Address: 0x1890b4, Func Offset: 0x244
	// Line 185, Address: 0x1890c0, Func Offset: 0x250
	// Line 187, Address: 0x1890c4, Func Offset: 0x254
	// Func End, Address: 0x1890e8, Func Offset: 0x278
}

// 
// Start address: 0x1890f0
void sh2gfw_ClipDraw_BG(sh2gfw_BLOCK_MAN* pB_man, float bbox[4], float view_triangle[4], Q_WORDDATA** qwd_data)
{
	int rect[4];
	float origin[4];
	int j;
	Q_WORDDATA* qbuf;
	Q_WORDDATA* qwd;
	// Line 213, Address: 0x1890f0, Func Offset: 0
	// Line 221, Address: 0x189110, Func Offset: 0x20
	// Line 222, Address: 0x18911c, Func Offset: 0x2c
	// Line 224, Address: 0x189120, Func Offset: 0x30
	// Line 226, Address: 0x189130, Func Offset: 0x40
	// Line 228, Address: 0x189148, Func Offset: 0x58
	// Line 231, Address: 0x18915c, Func Offset: 0x6c
	// Line 233, Address: 0x18917c, Func Offset: 0x8c
	// Line 235, Address: 0x189194, Func Offset: 0xa4
	// Line 241, Address: 0x1891a0, Func Offset: 0xb0
	// Line 246, Address: 0x1891b0, Func Offset: 0xc0
	// Line 247, Address: 0x1891c0, Func Offset: 0xd0
	// Line 248, Address: 0x1891cc, Func Offset: 0xdc
	// Line 250, Address: 0x1891d8, Func Offset: 0xe8
	// Line 253, Address: 0x1891e8, Func Offset: 0xf8
	// Line 254, Address: 0x1891fc, Func Offset: 0x10c
	// Line 255, Address: 0x189220, Func Offset: 0x130
	// Line 256, Address: 0x189224, Func Offset: 0x134
	// Line 260, Address: 0x18924c, Func Offset: 0x15c
	// Line 262, Address: 0x189268, Func Offset: 0x178
	// Line 265, Address: 0x189274, Func Offset: 0x184
	// Line 266, Address: 0x1892b0, Func Offset: 0x1c0
	// Line 267, Address: 0x1892b4, Func Offset: 0x1c4
	// Line 271, Address: 0x1892f4, Func Offset: 0x204
	// Line 272, Address: 0x189320, Func Offset: 0x230
	// Line 273, Address: 0x18933c, Func Offset: 0x24c
	// Line 276, Address: 0x189344, Func Offset: 0x254
	// Line 279, Address: 0x189350, Func Offset: 0x260
	// Line 280, Address: 0x18938c, Func Offset: 0x29c
	// Line 281, Address: 0x189390, Func Offset: 0x2a0
	// Line 285, Address: 0x1893d0, Func Offset: 0x2e0
	// Line 286, Address: 0x1893fc, Func Offset: 0x30c
	// Line 289, Address: 0x189414, Func Offset: 0x324
	// Line 290, Address: 0x189428, Func Offset: 0x338
	// Line 291, Address: 0x18944c, Func Offset: 0x35c
	// Line 292, Address: 0x189450, Func Offset: 0x360
	// Line 296, Address: 0x189478, Func Offset: 0x388
	// Line 297, Address: 0x189494, Func Offset: 0x3a4
	// Line 303, Address: 0x1894a8, Func Offset: 0x3b8
	// Line 306, Address: 0x1894b4, Func Offset: 0x3c4
	// Func End, Address: 0x1894cc, Func Offset: 0x3dc
}

// 
// Start address: 0x1894d0
void sh2gfw_get_blockORIGIN(float bbox[4], float* origin)
{
	int tmp[4];
	int iz;
	int ix;
	// Line 330, Address: 0x1894d0, Func Offset: 0
	// Line 335, Address: 0x1894e8, Func Offset: 0x18
	// Line 336, Address: 0x1894fc, Func Offset: 0x2c
	// Line 337, Address: 0x189508, Func Offset: 0x38
	// Line 338, Address: 0x189524, Func Offset: 0x54
	// Line 340, Address: 0x189534, Func Offset: 0x64
	// Line 341, Address: 0x18954c, Func Offset: 0x7c
	// Line 343, Address: 0x18955c, Func Offset: 0x8c
	// Line 344, Address: 0x189584, Func Offset: 0xb4
	// Line 348, Address: 0x1895ac, Func Offset: 0xdc
	// Line 349, Address: 0x1895bc, Func Offset: 0xec
	// Line 351, Address: 0x1895cc, Func Offset: 0xfc
	// Line 352, Address: 0x1895f0, Func Offset: 0x120
	// Line 353, Address: 0x1895fc, Func Offset: 0x12c
	// Line 354, Address: 0x189620, Func Offset: 0x150
	// Line 356, Address: 0x189630, Func Offset: 0x160
	// Func End, Address: 0x189648, Func Offset: 0x178
}

// 
// Start address: 0x189650
int sh2gfw_Get_CamTilePos(float* origin)
{
	float svt[4];
	int ssz;
	int ssx;
	// Line 363, Address: 0x189650, Func Offset: 0
	// Line 366, Address: 0x189664, Func Offset: 0x14
	// Line 367, Address: 0x189670, Func Offset: 0x20
	// Line 369, Address: 0x189684, Func Offset: 0x34
	// Line 370, Address: 0x1896b0, Func Offset: 0x60
	// Line 371, Address: 0x1896dc, Func Offset: 0x8c
	// Line 372, Address: 0x1896e4, Func Offset: 0x94
	// Func End, Address: 0x1896fc, Func Offset: 0xac
}

// 
// Start address: 0x189700
void sh2gfw_get_ViewRecTangle(float* origin, float view_triangle[4], int* view_rect, int view_tile)
{
	int tmpi[4][3];
	float tmpf[4][3];
	int cz;
	int cx;
	int tp;
	int j;
	int i;
	// Line 386, Address: 0x189700, Func Offset: 0
	// Line 391, Address: 0x18972c, Func Offset: 0x2c
	// Line 392, Address: 0x189738, Func Offset: 0x38
	// Line 393, Address: 0x18975c, Func Offset: 0x5c
	// Line 394, Address: 0x189788, Func Offset: 0x88
	// Line 396, Address: 0x1897a8, Func Offset: 0xa8
	// Line 397, Address: 0x1897d0, Func Offset: 0xd0
	// Line 398, Address: 0x1897f8, Func Offset: 0xf8
	// Line 400, Address: 0x18980c, Func Offset: 0x10c
	// Line 401, Address: 0x189818, Func Offset: 0x118
	// Line 402, Address: 0x189824, Func Offset: 0x124
	// Line 403, Address: 0x189848, Func Offset: 0x148
	// Line 404, Address: 0x189854, Func Offset: 0x154
	// Line 405, Address: 0x18986c, Func Offset: 0x16c
	// Line 407, Address: 0x189878, Func Offset: 0x178
	// Line 408, Address: 0x18988c, Func Offset: 0x18c
	// Line 410, Address: 0x18989c, Func Offset: 0x19c
	// Line 411, Address: 0x1898a8, Func Offset: 0x1a8
	// Line 412, Address: 0x1898b4, Func Offset: 0x1b4
	// Line 413, Address: 0x1898d8, Func Offset: 0x1d8
	// Line 414, Address: 0x1898e4, Func Offset: 0x1e4
	// Line 415, Address: 0x1898fc, Func Offset: 0x1fc
	// Line 417, Address: 0x189908, Func Offset: 0x208
	// Line 418, Address: 0x18991c, Func Offset: 0x21c
	// Line 423, Address: 0x18992c, Func Offset: 0x22c
	// Line 424, Address: 0x18994c, Func Offset: 0x24c
	// Line 426, Address: 0x189968, Func Offset: 0x268
	// Line 427, Address: 0x18997c, Func Offset: 0x27c
	// Line 429, Address: 0x189990, Func Offset: 0x290
	// Line 430, Address: 0x1899b0, Func Offset: 0x2b0
	// Line 432, Address: 0x1899bc, Func Offset: 0x2bc
	// Line 433, Address: 0x1899d0, Func Offset: 0x2d0
	// Line 435, Address: 0x1899e4, Func Offset: 0x2e4
	// Line 436, Address: 0x189a04, Func Offset: 0x304
	// Line 441, Address: 0x189a10, Func Offset: 0x310
	// Line 442, Address: 0x189a1c, Func Offset: 0x31c
	// Line 443, Address: 0x189a28, Func Offset: 0x328
	// Line 444, Address: 0x189a34, Func Offset: 0x334
	// Line 448, Address: 0x189a40, Func Offset: 0x340
	// Func End, Address: 0x189a64, Func Offset: 0x364
}

// 
// Start address: 0x189a70
void sh2gfw_get_viewTriangle(float view_triangle[4])
{
	int i;
	float dx[2];
	float work[4][4];
	// Line 454, Address: 0x189a70, Func Offset: 0
	// Line 460, Address: 0x189a80, Func Offset: 0x10
	// Line 461, Address: 0x189a8c, Func Offset: 0x1c
	// Line 463, Address: 0x189aa4, Func Offset: 0x34
	// Line 464, Address: 0x189acc, Func Offset: 0x5c
	// Line 465, Address: 0x189ad8, Func Offset: 0x68
	// Line 467, Address: 0x189b0c, Func Offset: 0x9c
	// Line 468, Address: 0x189b24, Func Offset: 0xb4
	// Line 469, Address: 0x189b34, Func Offset: 0xc4
	// Line 470, Address: 0x189b4c, Func Offset: 0xdc
	// Line 472, Address: 0x189b5c, Func Offset: 0xec
	// Line 473, Address: 0x189b68, Func Offset: 0xf8
	// Line 474, Address: 0x189b8c, Func Offset: 0x11c
	// Line 476, Address: 0x189bb4, Func Offset: 0x144
	// Line 477, Address: 0x189bc8, Func Offset: 0x158
	// Line 478, Address: 0x189bdc, Func Offset: 0x16c
	// Func End, Address: 0x189bf0, Func Offset: 0x180
}

// 
// Start address: 0x189bf0
void sh2gfw_init_vctagbuf(void* vc)
{
	Q_WORDDATA cleardata;
	Q_WORDDATA* VcBuf;
	// Line 487, Address: 0x189bf0, Func Offset: 0
	// Line 488, Address: 0x189bfc, Func Offset: 0xc
	// Line 490, Address: 0x189c00, Func Offset: 0x10
	// Line 493, Address: 0x189c14, Func Offset: 0x24
	// Line 494, Address: 0x189c28, Func Offset: 0x38
	// Line 495, Address: 0x189c3c, Func Offset: 0x4c
	// Line 496, Address: 0x189c50, Func Offset: 0x60
	// Line 497, Address: 0x189c64, Func Offset: 0x74
	// Func End, Address: 0x189c74, Func Offset: 0x84
}

// 
// Start address: 0x189c80
void sh2gfw_make_tagclipdata(float* origin, float view_triangle[4], int* view_rect, sh2gfw_BLOCK_MAN* pBM)
{
	float svt[4];
	int ssz;
	int ssx;
	int clip;
	unsigned char* tagbuffer;
	float rect[4][4];
	int index;
	int iz;
	int ix;
	int enz;
	int stz;
	int enx;
	int stx;
	// Line 517, Address: 0x189c80, Func Offset: 0
	// Line 523, Address: 0x189cbc, Func Offset: 0x3c
	// Line 524, Address: 0x189cc4, Func Offset: 0x44
	// Line 526, Address: 0x189ccc, Func Offset: 0x4c
	// Line 527, Address: 0x189cd8, Func Offset: 0x58
	// Line 530, Address: 0x189ce4, Func Offset: 0x64
	// Line 531, Address: 0x189cfc, Func Offset: 0x7c
	// Line 532, Address: 0x189d10, Func Offset: 0x90
	// Line 533, Address: 0x189d2c, Func Offset: 0xac
	// Line 540, Address: 0x189d40, Func Offset: 0xc0
	// Line 541, Address: 0x189d58, Func Offset: 0xd8
	// Line 542, Address: 0x189d64, Func Offset: 0xe4
	// Line 543, Address: 0x189d80, Func Offset: 0x100
	// Line 544, Address: 0x189d8c, Func Offset: 0x10c
	// Line 546, Address: 0x189da0, Func Offset: 0x120
	// Line 547, Address: 0x189db0, Func Offset: 0x130
	// Line 549, Address: 0x189dcc, Func Offset: 0x14c
	// Line 550, Address: 0x189ddc, Func Offset: 0x15c
	// Line 552, Address: 0x189df8, Func Offset: 0x178
	// Line 553, Address: 0x189e08, Func Offset: 0x188
	// Line 554, Address: 0x189e24, Func Offset: 0x1a4
	// Line 558, Address: 0x189e40, Func Offset: 0x1c0
	// Line 561, Address: 0x189e48, Func Offset: 0x1c8
	// Line 562, Address: 0x189e54, Func Offset: 0x1d4
	// Line 565, Address: 0x189e60, Func Offset: 0x1e0
	// Line 567, Address: 0x189e7c, Func Offset: 0x1fc
	// Line 569, Address: 0x189e84, Func Offset: 0x204
	// Line 571, Address: 0x189e8c, Func Offset: 0x20c
	// Line 578, Address: 0x189e98, Func Offset: 0x218
	// Line 579, Address: 0x189ea8, Func Offset: 0x228
	// Line 580, Address: 0x189eb8, Func Offset: 0x238
	// Line 581, Address: 0x189ed4, Func Offset: 0x254
	// Line 582, Address: 0x189ef0, Func Offset: 0x270
	// Line 584, Address: 0x189f04, Func Offset: 0x284
	// Line 585, Address: 0x189f0c, Func Offset: 0x28c
	// Line 586, Address: 0x189f14, Func Offset: 0x294
	// Line 587, Address: 0x189f30, Func Offset: 0x2b0
	// Line 589, Address: 0x189f4c, Func Offset: 0x2cc
	// Line 590, Address: 0x189f70, Func Offset: 0x2f0
	// Line 591, Address: 0x189f78, Func Offset: 0x2f8
	// Line 592, Address: 0x189f90, Func Offset: 0x310
	// Line 593, Address: 0x189f98, Func Offset: 0x318
	// Line 599, Address: 0x189fb0, Func Offset: 0x330
	// Line 600, Address: 0x189fbc, Func Offset: 0x33c
	// Line 602, Address: 0x189fd0, Func Offset: 0x350
	// Line 603, Address: 0x189ffc, Func Offset: 0x37c
	// Line 605, Address: 0x18a028, Func Offset: 0x3a8
	// Line 608, Address: 0x18a03c, Func Offset: 0x3bc
	// Line 609, Address: 0x18a048, Func Offset: 0x3c8
	// Line 611, Address: 0x18a05c, Func Offset: 0x3dc
	// Line 612, Address: 0x18a068, Func Offset: 0x3e8
	// Line 614, Address: 0x18a07c, Func Offset: 0x3fc
	// Line 615, Address: 0x18a090, Func Offset: 0x410
	// Line 616, Address: 0x18a0a8, Func Offset: 0x428
	// Line 620, Address: 0x18a0c0, Func Offset: 0x440
	// Func End, Address: 0x18a0f4, Func Offset: 0x474
}

// 
// Start address: 0x18a100
int sh2_ClipHitCheckSquare(float mat[4], float* box, float* view_triangle)
{
	int ret;
	// Line 646, Address: 0x18a100, Func Offset: 0
	// Line 653, Address: 0x18a108, Func Offset: 0x8
	// Line 654, Address: 0x18a10c, Func Offset: 0xc
	// Line 655, Address: 0x18a110, Func Offset: 0x10
	// Line 656, Address: 0x18a114, Func Offset: 0x14
	// Line 658, Address: 0x18a118, Func Offset: 0x18
	// Line 659, Address: 0x18a11c, Func Offset: 0x1c
	// Line 660, Address: 0x18a120, Func Offset: 0x20
	// Line 661, Address: 0x18a124, Func Offset: 0x24
	// Line 663, Address: 0x18a128, Func Offset: 0x28
	// Line 664, Address: 0x18a12c, Func Offset: 0x2c
	// Line 665, Address: 0x18a130, Func Offset: 0x30
	// Line 667, Address: 0x18a134, Func Offset: 0x34
	// Line 668, Address: 0x18a138, Func Offset: 0x38
	// Line 669, Address: 0x18a13c, Func Offset: 0x3c
	// Line 670, Address: 0x18a140, Func Offset: 0x40
	// Line 672, Address: 0x18a144, Func Offset: 0x44
	// Line 673, Address: 0x18a148, Func Offset: 0x48
	// Line 674, Address: 0x18a14c, Func Offset: 0x4c
	// Line 675, Address: 0x18a150, Func Offset: 0x50
	// Line 677, Address: 0x18a154, Func Offset: 0x54
	// Line 678, Address: 0x18a158, Func Offset: 0x58
	// Line 679, Address: 0x18a15c, Func Offset: 0x5c
	// Line 680, Address: 0x18a160, Func Offset: 0x60
	// Line 681, Address: 0x18a164, Func Offset: 0x64
	// Line 682, Address: 0x18a168, Func Offset: 0x68
	// Line 683, Address: 0x18a16c, Func Offset: 0x6c
	// Line 684, Address: 0x18a170, Func Offset: 0x70
	// Line 688, Address: 0x18a178, Func Offset: 0x78
	// Line 689, Address: 0x18a17c, Func Offset: 0x7c
	// Line 690, Address: 0x18a180, Func Offset: 0x80
	// Line 691, Address: 0x18a184, Func Offset: 0x84
	// Line 692, Address: 0x18a188, Func Offset: 0x88
	// Line 693, Address: 0x18a18c, Func Offset: 0x8c
	// Line 694, Address: 0x18a190, Func Offset: 0x90
	// Line 695, Address: 0x18a194, Func Offset: 0x94
	// Line 699, Address: 0x18a19c, Func Offset: 0x9c
	// Line 700, Address: 0x18a1a0, Func Offset: 0xa0
	// Line 701, Address: 0x18a1a4, Func Offset: 0xa4
	// Line 702, Address: 0x18a1a8, Func Offset: 0xa8
	// Line 703, Address: 0x18a1ac, Func Offset: 0xac
	// Line 704, Address: 0x18a1b0, Func Offset: 0xb0
	// Line 705, Address: 0x18a1b4, Func Offset: 0xb4
	// Line 706, Address: 0x18a1b8, Func Offset: 0xb8
	// Line 710, Address: 0x18a1c0, Func Offset: 0xc0
	// Line 711, Address: 0x18a1c4, Func Offset: 0xc4
	// Line 712, Address: 0x18a1c8, Func Offset: 0xc8
	// Line 713, Address: 0x18a1cc, Func Offset: 0xcc
	// Line 717, Address: 0x18a1d4, Func Offset: 0xd4
	// Line 719, Address: 0x18a1dc, Func Offset: 0xdc
	// Line 721, Address: 0x18a1e4, Func Offset: 0xe4
	// Line 723, Address: 0x18a1ec, Func Offset: 0xec
	// Line 725, Address: 0x18a1f4, Func Offset: 0xf4
	// Line 727, Address: 0x18a1fc, Func Offset: 0xfc
	// Line 730, Address: 0x18a204, Func Offset: 0x104
	// Line 731, Address: 0x18a208, Func Offset: 0x108
	// Line 732, Address: 0x18a20c, Func Offset: 0x10c
	// Line 733, Address: 0x18a210, Func Offset: 0x110
	// Line 735, Address: 0x18a218, Func Offset: 0x118
	// Line 737, Address: 0x18a220, Func Offset: 0x120
	// Line 739, Address: 0x18a228, Func Offset: 0x128
	// Line 741, Address: 0x18a230, Func Offset: 0x130
	// Line 743, Address: 0x18a238, Func Offset: 0x138
	// Line 746, Address: 0x18a240, Func Offset: 0x140
	// Line 747, Address: 0x18a244, Func Offset: 0x144
	// Line 748, Address: 0x18a248, Func Offset: 0x148
	// Line 749, Address: 0x18a24c, Func Offset: 0x14c
	// Line 751, Address: 0x18a254, Func Offset: 0x154
	// Line 753, Address: 0x18a25c, Func Offset: 0x15c
	// Line 755, Address: 0x18a264, Func Offset: 0x164
	// Line 757, Address: 0x18a26c, Func Offset: 0x16c
	// Line 759, Address: 0x18a274, Func Offset: 0x174
	// Line 761, Address: 0x18a27c, Func Offset: 0x17c
	// Line 762, Address: 0x18a280, Func Offset: 0x180
	// Line 763, Address: 0x18a284, Func Offset: 0x184
	// Line 764, Address: 0x18a288, Func Offset: 0x188
	// Line 766, Address: 0x18a290, Func Offset: 0x190
	// Line 768, Address: 0x18a298, Func Offset: 0x198
	// Line 770, Address: 0x18a2a0, Func Offset: 0x1a0
	// Line 772, Address: 0x18a2a8, Func Offset: 0x1a8
	// Line 774, Address: 0x18a2b0, Func Offset: 0x1b0
	// Line 776, Address: 0x18a2b8, Func Offset: 0x1b8
	// Line 777, Address: 0x18a2bc, Func Offset: 0x1bc
	// Line 781, Address: 0x18a2c4, Func Offset: 0x1c4
	// Line 783, Address: 0x18a2c8, Func Offset: 0x1c8
	// Line 793, Address: 0x18a2cc, Func Offset: 0x1cc
	// Func End, Address: 0x18a2dc, Func Offset: 0x1dc
}

// 
// Start address: 0x18a2e0
void kari_set_vu0cal()
{
	int i;
	// Line 802, Address: 0x18a2e0, Func Offset: 0
	// Line 803, Address: 0x18a2e8, Func Offset: 0x8
	// Line 805, Address: 0x18a2ec, Func Offset: 0xc
	// Line 807, Address: 0x18a310, Func Offset: 0x30
	// Line 808, Address: 0x18a324, Func Offset: 0x44
	// Line 809, Address: 0x18a330, Func Offset: 0x50
	// Line 811, Address: 0x18a340, Func Offset: 0x60
	// Line 813, Address: 0x18a368, Func Offset: 0x88
	// Func End, Address: 0x18a378, Func Offset: 0x98
}

// 
// Start address: 0x18a380
void sh2gfw_setVCTAG_DrawSys(sh2gfw_BLOCK_MAN* pB_man)
{
	unsigned int ivumax;
	unsigned int igg;
	unsigned int l;
	unsigned int k;
	unsigned int j;
	unsigned int i;
	unsigned int igeomax;
	unsigned char* tagbuffer;
	Q_WORDDATA* qwd;
	// Line 825, Address: 0x18a380, Func Offset: 0
	// Line 841, Address: 0x18a3ac, Func Offset: 0x2c
	// Line 843, Address: 0x18a3b4, Func Offset: 0x34
	// Line 844, Address: 0x18a3d0, Func Offset: 0x50
	// Line 847, Address: 0x18a3d4, Func Offset: 0x54
	// Line 848, Address: 0x18a3dc, Func Offset: 0x5c
	// Line 849, Address: 0x18a3ec, Func Offset: 0x6c
	// Line 850, Address: 0x18a3f8, Func Offset: 0x78
	// Line 851, Address: 0x18a410, Func Offset: 0x90
	// Line 854, Address: 0x18a41c, Func Offset: 0x9c
	// Line 856, Address: 0x18a43c, Func Offset: 0xbc
	// Line 874, Address: 0x18a478, Func Offset: 0xf8
	// Line 875, Address: 0x18a47c, Func Offset: 0xfc
	// Line 877, Address: 0x18a49c, Func Offset: 0x11c
	// Line 878, Address: 0x18a4a0, Func Offset: 0x120
	// Line 881, Address: 0x18a4a8, Func Offset: 0x128
	// Line 882, Address: 0x18a4ac, Func Offset: 0x12c
	// Line 883, Address: 0x18a4cc, Func Offset: 0x14c
	// Line 888, Address: 0x18a4d0, Func Offset: 0x150
	// Line 889, Address: 0x18a4dc, Func Offset: 0x15c
	// Line 890, Address: 0x18a500, Func Offset: 0x180
	// Line 912, Address: 0x18a514, Func Offset: 0x194
	// Line 914, Address: 0x18a524, Func Offset: 0x1a4
	// Line 916, Address: 0x18a534, Func Offset: 0x1b4
	// Line 919, Address: 0x18a54c, Func Offset: 0x1cc
	// Func End, Address: 0x18a57c, Func Offset: 0x1fc
}

// 
// Start address: 0x18a580
void sh2gfw_set_objclip_matrix()
{
	float gsy;
	float gsx;
	// Line 929, Address: 0x18a580, Func Offset: 0
	// Line 933, Address: 0x18a588, Func Offset: 0x8
	// Line 934, Address: 0x18a5bc, Func Offset: 0x3c
	// Line 936, Address: 0x18a5f0, Func Offset: 0x70
	// Line 939, Address: 0x18a600, Func Offset: 0x80
	// Line 940, Address: 0x18a630, Func Offset: 0xb0
	// Line 941, Address: 0x18a660, Func Offset: 0xe0
	// Line 942, Address: 0x18a694, Func Offset: 0x114
	// Line 943, Address: 0x18a6d8, Func Offset: 0x158
	// Line 947, Address: 0x18a6f4, Func Offset: 0x174
	// Line 964, Address: 0x18a714, Func Offset: 0x194
	// Func End, Address: 0x18a724, Func Offset: 0x1a4
}

