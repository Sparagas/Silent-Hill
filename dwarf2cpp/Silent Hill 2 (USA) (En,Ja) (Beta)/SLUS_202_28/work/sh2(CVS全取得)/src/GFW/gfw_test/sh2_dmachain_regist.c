typedef struct sh2gfw_BLOCKGLOBAL_HEAD;
typedef struct sh2gfw_BLOCK_MAN;
typedef union Q_WORDDATA;
typedef struct sh2gfw_BLOCKLOCAL_HEAD;
typedef struct sh2gfw_VU_PARMS;
typedef struct _anon0;
typedef struct sh2gfw_TEX_HEAD;
typedef struct sh2gfw_AREA_HEAD;
typedef struct sh2gfw_BLOCK_HEAD;
typedef struct sh2gfw_GSREGS_HEAD;
typedef struct sh2gfw_GIFTAG_HEAD;
typedef struct sh2gfw_CLUTS_HEAD;


typedef float type_0[4];
typedef float type_1[4];
typedef float type_2[4][4];
typedef unsigned short type_3[3];
typedef unsigned short type_4[3];
typedef float type_5[4][2];
typedef sh2gfw_GSREGS_HEAD* type_6[4];
typedef sh2gfw_GIFTAG_HEAD* type_7[16];
typedef sh2gfw_GIFTAG_HEAD* type_8[16][4];
typedef unsigned short type_9[8];
typedef unsigned short type_10[8][16];
typedef unsigned short type_11[8][16][4];
typedef sh2gfw_TEX_HEAD* type_12[4];
typedef sh2gfw_CLUTS_HEAD* type_13[4];
typedef unsigned char type_14[4];
typedef unsigned char type_15[16];
typedef unsigned char type_16[16][4];
typedef unsigned int type_17[4];
typedef unsigned char type_18[16];
typedef unsigned char type_19[16][16];
typedef unsigned short type_20[8];
typedef unsigned char type_21[16][16][4];
typedef float type_22[4];
typedef unsigned char type_23[16];
typedef unsigned char type_24[16];
typedef int type_25[4];
typedef unsigned char type_26[16];
typedef short type_27[8];
typedef void* type_28[4];
typedef char type_29[16];
typedef Q_WORDDATA* type_30[4];
typedef unsigned long type_31[2];
typedef unsigned int type_32[4];
typedef int type_33[8];
typedef int type_34[8];
typedef unsigned char type_35[16];
typedef unsigned char type_36[16];
typedef Q_WORDDATA type_37[2];
typedef sh2gfw_GIFTAG_HEAD* type_38[16];
typedef unsigned char type_39[8];
typedef unsigned char type_40[8][8];
typedef unsigned int type_41[3];
typedef unsigned int type_42[3];
typedef Q_WORDDATA type_43[3];

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
	short texnum;
	short blockid;
	int ObjCondition;
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

struct sh2gfw_BLOCKLOCAL_HEAD
{
	unsigned short gsregsamount[3];
	unsigned short transamount[3];
	unsigned short ltexnum;
	unsigned short pads;
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

struct _anon0
{
	float light_vect[4][4];
	float light_col[4][4];
	float light_amb[4];
	float light_pam[4][2];
	Q_WORDDATA LightPos1;
	Q_WORDDATA VertexAmbient;
	Q_WORDDATA BaseVertexColor;
	Q_WORDDATA BaseAmbient;
	Q_WORDDATA ALPHA_clear;
	float LightRealPos[4];
	float LightRealDir[4];
	unsigned int light_type_buf;
	unsigned int light_type_now;
	unsigned int pad1;
	unsigned int pad2;
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

unsigned int SH2GFW_MF_LOAD_HEAD;

void sh2gfw_registDrawTag(Q_WORDDATA** ppqwd, unsigned int addr, unsigned int tagtail, unsigned int itnum);
void sh2gfw_setEND_chain(Q_WORDDATA** ppqwd);
void kari_sh2gfw_VUMICRO_registchain(Q_WORDDATA** ppcurr);
void sh2gfw_VUMATIRICES_registchain(sh2gfw_VU_PARMS* VU1_PARMS, Q_WORDDATA** ppcurr);
void sh2gfw_VUGSREGS_registchain(sh2gfw_VU_PARMS* VU1_PARMS, Q_WORDDATA** ppcurr);
void sh2gfw_regist_BLOCKMATRICES(sh2gfw_BLOCK_MAN* pB_man, Q_WORDDATA** ppqwd);
void sh2gfw_regist_BLOCKLIGHTS(sh2gfw_BLOCK_MAN* pB_man, Q_WORDDATA** ppqwd);

// 
// Start address: 0x173ee0
void sh2gfw_registDrawTag(Q_WORDDATA** ppqwd, unsigned int addr, unsigned int tagtail, unsigned int itnum)
{
	Q_WORDDATA* pushad;
	Q_WORDDATA* qwd;
	// Line 42, Address: 0x173ee0, Func Offset: 0
	// Line 54, Address: 0x173ee4, Func Offset: 0x4
	// Line 55, Address: 0x173f04, Func Offset: 0x24
	// Line 56, Address: 0x173f28, Func Offset: 0x48
	// Line 57, Address: 0x173f40, Func Offset: 0x60
	// Line 60, Address: 0x173f48, Func Offset: 0x68
	// Line 63, Address: 0x173f50, Func Offset: 0x70
	// Line 68, Address: 0x173f58, Func Offset: 0x78
	// Line 71, Address: 0x173f68, Func Offset: 0x88
	// Func End, Address: 0x173f70, Func Offset: 0x90
}

// 
// Start address: 0x173f70
void sh2gfw_setEND_chain(Q_WORDDATA** ppqwd)
{
	Q_WORDDATA* qwd;
	// Line 78, Address: 0x173f70, Func Offset: 0
	// Line 80, Address: 0x173f74, Func Offset: 0x4
	// Line 81, Address: 0x173f7c, Func Offset: 0xc
	// Line 82, Address: 0x173f80, Func Offset: 0x10
	// Line 84, Address: 0x173f84, Func Offset: 0x14
	// Line 86, Address: 0x173f8c, Func Offset: 0x1c
	// Func End, Address: 0x173f94, Func Offset: 0x24
}

// 
// Start address: 0x173fa0
void kari_sh2gfw_VUMICRO_registchain(Q_WORDDATA** ppcurr)
{
	Q_WORDDATA* qwd;
	// Line 94, Address: 0x173fa0, Func Offset: 0
	// Line 95, Address: 0x173fb4, Func Offset: 0x14
	// Line 110, Address: 0x173fb8, Func Offset: 0x18
	// Line 111, Address: 0x173ffc, Func Offset: 0x5c
	// Line 113, Address: 0x174004, Func Offset: 0x64
	// Func End, Address: 0x17401c, Func Offset: 0x7c
}

// 
// Start address: 0x174020
void sh2gfw_VUMATIRICES_registchain(sh2gfw_VU_PARMS* VU1_PARMS, Q_WORDDATA** ppcurr)
{
	Q_WORDDATA* qwd;
	// Line 143, Address: 0x174020, Func Offset: 0
	// Line 146, Address: 0x174024, Func Offset: 0x4
	// Line 147, Address: 0x17405c, Func Offset: 0x3c
	// Line 148, Address: 0x174064, Func Offset: 0x44
	// Func End, Address: 0x17406c, Func Offset: 0x4c
}

// 
// Start address: 0x174070
void sh2gfw_VUGSREGS_registchain(sh2gfw_VU_PARMS* VU1_PARMS, Q_WORDDATA** ppcurr)
{
	Q_WORDDATA* qwd;
	// Line 155, Address: 0x174070, Func Offset: 0
	// Line 162, Address: 0x174074, Func Offset: 0x4
	// Line 164, Address: 0x1740b0, Func Offset: 0x40
	// Line 165, Address: 0x1740b8, Func Offset: 0x48
	// Func End, Address: 0x1740c0, Func Offset: 0x50
}

// 
// Start address: 0x1740c0
void sh2gfw_regist_BLOCKMATRICES(sh2gfw_BLOCK_MAN* pB_man, Q_WORDDATA** ppqwd)
{
	Q_WORDDATA* qwd;
	// Line 194, Address: 0x1740c0, Func Offset: 0
	// Line 196, Address: 0x1740c4, Func Offset: 0x4
	// Line 198, Address: 0x1740d8, Func Offset: 0x18
	// Line 200, Address: 0x174110, Func Offset: 0x50
	// Line 204, Address: 0x174128, Func Offset: 0x68
	// Line 205, Address: 0x174130, Func Offset: 0x70
	// Func End, Address: 0x174138, Func Offset: 0x78
}

// 
// Start address: 0x174140
void sh2gfw_regist_BLOCKLIGHTS(sh2gfw_BLOCK_MAN* pB_man, Q_WORDDATA** ppqwd)
{
	Q_WORDDATA* qwd;
	// Line 212, Address: 0x174140, Func Offset: 0
	// Line 215, Address: 0x174144, Func Offset: 0x4
	// Line 220, Address: 0x174158, Func Offset: 0x18
	// Line 223, Address: 0x174194, Func Offset: 0x54
	// Line 224, Address: 0x17419c, Func Offset: 0x5c
	// Func End, Address: 0x1741a4, Func Offset: 0x64
}

