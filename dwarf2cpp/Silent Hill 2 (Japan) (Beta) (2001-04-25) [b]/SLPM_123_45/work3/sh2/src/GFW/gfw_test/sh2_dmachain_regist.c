typedef union Q_WORDDATA;
typedef struct sh2gfw_VU_PARMS;
typedef struct sh2gfw_GSREGS_HEAD;
typedef struct sh2gfw_TEX_HEAD;
typedef struct sh2gfw_CLUTS_HEAD;
typedef struct sh2gfw_GIFTAG_HEAD;
typedef struct sh2gfw_AREA_HEAD;
typedef struct sh2gfw_BLOCK_HEAD;
typedef struct sh2gfw_BLOCK_MAN;
typedef struct sh2gfw_BLOCKGLOBAL_HEAD;
typedef struct sh2gfw_BLOCKLOCAL_HEAD;
typedef struct _anon0;


typedef unsigned char type_0[16];
typedef unsigned char type_1[16][16];
typedef unsigned char type_2[16][16][4];
typedef void* type_3[4];
typedef unsigned char type_4[16];
typedef Q_WORDDATA* type_5[4];
typedef unsigned char type_6[16];
typedef unsigned int type_7[4];
typedef int type_8[8];
typedef int type_9[8];
typedef unsigned int type_10[4];
typedef unsigned short type_11[8];
typedef float type_12[4];
typedef unsigned char type_13[16];
typedef unsigned char type_14[16];
typedef int type_15[4];
typedef unsigned char type_16[16];
typedef short type_17[8];
typedef char type_18[16];
typedef unsigned long type_19[2];
typedef sh2gfw_GIFTAG_HEAD* type_20[16];
typedef unsigned char type_21[8];
typedef unsigned char type_22[8][8];
typedef Q_WORDDATA type_23[2];
typedef Q_WORDDATA type_24[3];
typedef unsigned int type_25[3];
typedef unsigned int type_26[3];
typedef unsigned short type_27[3];
typedef unsigned short type_28[3];
typedef float type_29[4];
typedef float type_30[4];
typedef float type_31[4][4];
typedef float type_32[4][2];
typedef sh2gfw_GSREGS_HEAD* type_33[4];
typedef sh2gfw_GIFTAG_HEAD* type_34[16];
typedef sh2gfw_GIFTAG_HEAD* type_35[16][4];
typedef unsigned short type_36[8];
typedef unsigned short type_37[8][16];
typedef unsigned short type_38[8][16][4];
typedef sh2gfw_TEX_HEAD* type_39[4];
typedef sh2gfw_CLUTS_HEAD* type_40[4];
typedef unsigned char type_41[4];
typedef unsigned char type_42[16];
typedef unsigned char type_43[16][4];

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

unsigned int SH2GFW_MF_LOAD_HEAD;

void sh2gfw_registDrawTag(Q_WORDDATA** ppqwd, unsigned int addr, unsigned int tagtail, unsigned int itnum);
void sh2gfw_setEND_chain(Q_WORDDATA** ppqwd);
void kari_sh2gfw_VUMICRO_registchain(Q_WORDDATA** ppcurr);
void sh2gfw_VUMATIRICES_registchain(sh2gfw_VU_PARMS* VU1_PARMS, Q_WORDDATA** ppcurr);
void sh2gfw_VUGSREGS_registchain(sh2gfw_VU_PARMS* VU1_PARMS, Q_WORDDATA** ppcurr);
void sh2gfw_regist_BLOCKMATRICES(sh2gfw_BLOCK_MAN* pB_man, Q_WORDDATA** ppqwd);
void sh2gfw_regist_BLOCKLIGHTS(sh2gfw_BLOCK_MAN* pB_man, Q_WORDDATA** ppqwd);

// 
// Start address: 0x17aa00
void sh2gfw_registDrawTag(Q_WORDDATA** ppqwd, unsigned int addr, unsigned int tagtail, unsigned int itnum)
{
	Q_WORDDATA* pushad;
	Q_WORDDATA* qwd;
	// Line 134, Address: 0x17aa00, Func Offset: 0
	// Line 136, Address: 0x17aa1c, Func Offset: 0x1c
	// Line 148, Address: 0x17aa24, Func Offset: 0x24
	// Line 149, Address: 0x17aa54, Func Offset: 0x54
	// Line 150, Address: 0x17aa7c, Func Offset: 0x7c
	// Line 151, Address: 0x17aa9c, Func Offset: 0x9c
	// Line 154, Address: 0x17aaa8, Func Offset: 0xa8
	// Line 157, Address: 0x17aab0, Func Offset: 0xb0
	// Line 162, Address: 0x17aac0, Func Offset: 0xc0
	// Line 165, Address: 0x17aad0, Func Offset: 0xd0
	// Func End, Address: 0x17aae4, Func Offset: 0xe4
}

// 
// Start address: 0x17aaf0
void sh2gfw_setEND_chain(Q_WORDDATA** ppqwd)
{
	Q_WORDDATA* qwd;
	// Line 171, Address: 0x17aaf0, Func Offset: 0
	// Line 172, Address: 0x17aafc, Func Offset: 0xc
	// Line 174, Address: 0x17ab04, Func Offset: 0x14
	// Line 175, Address: 0x17ab0c, Func Offset: 0x1c
	// Line 176, Address: 0x17ab10, Func Offset: 0x20
	// Line 178, Address: 0x17ab14, Func Offset: 0x24
	// Line 180, Address: 0x17ab20, Func Offset: 0x30
	// Func End, Address: 0x17ab30, Func Offset: 0x40
}

// 
// Start address: 0x17ab30
void kari_sh2gfw_VUMICRO_registchain(Q_WORDDATA** ppcurr)
{
	Q_WORDDATA* qwd;
	// Line 188, Address: 0x17ab30, Func Offset: 0
	// Line 189, Address: 0x17ab40, Func Offset: 0x10
	// Line 204, Address: 0x17ab48, Func Offset: 0x18
	// Line 205, Address: 0x17ab90, Func Offset: 0x60
	// Line 207, Address: 0x17ab98, Func Offset: 0x68
	// Func End, Address: 0x17abac, Func Offset: 0x7c
}

// 
// Start address: 0x17abb0
void sh2gfw_VUMATIRICES_registchain(sh2gfw_VU_PARMS* VU1_PARMS, Q_WORDDATA** ppcurr)
{
	Q_WORDDATA* qwd;
	// Line 236, Address: 0x17abb0, Func Offset: 0
	// Line 237, Address: 0x17abc0, Func Offset: 0x10
	// Line 240, Address: 0x17abc8, Func Offset: 0x18
	// Line 241, Address: 0x17ac08, Func Offset: 0x58
	// Line 242, Address: 0x17ac10, Func Offset: 0x60
	// Func End, Address: 0x17ac20, Func Offset: 0x70
}

// 
// Start address: 0x17ac20
void sh2gfw_VUGSREGS_registchain(sh2gfw_VU_PARMS* VU1_PARMS, Q_WORDDATA** ppcurr)
{
	Q_WORDDATA* qwd;
	// Line 248, Address: 0x17ac20, Func Offset: 0
	// Line 249, Address: 0x17ac30, Func Offset: 0x10
	// Line 254, Address: 0x17ac38, Func Offset: 0x18
	// Line 255, Address: 0x17ac7c, Func Offset: 0x5c
	// Line 256, Address: 0x17ac84, Func Offset: 0x64
	// Func End, Address: 0x17ac94, Func Offset: 0x74
}

// 
// Start address: 0x17aca0
void sh2gfw_regist_BLOCKMATRICES(sh2gfw_BLOCK_MAN* pB_man, Q_WORDDATA** ppqwd)
{
	Q_WORDDATA* qwd;
	// Line 263, Address: 0x17aca0, Func Offset: 0
	// Line 264, Address: 0x17acb0, Func Offset: 0x10
	// Line 266, Address: 0x17acb8, Func Offset: 0x18
	// Line 268, Address: 0x17acd0, Func Offset: 0x30
	// Line 270, Address: 0x17ad10, Func Offset: 0x70
	// Line 274, Address: 0x17ad30, Func Offset: 0x90
	// Line 275, Address: 0x17ad38, Func Offset: 0x98
	// Func End, Address: 0x17ad48, Func Offset: 0xa8
}

// 
// Start address: 0x17ad50
void sh2gfw_regist_BLOCKLIGHTS(sh2gfw_BLOCK_MAN* pB_man, Q_WORDDATA** ppqwd)
{
	Q_WORDDATA* qwd;
	// Line 281, Address: 0x17ad50, Func Offset: 0
	// Line 282, Address: 0x17ad60, Func Offset: 0x10
	// Line 285, Address: 0x17ad68, Func Offset: 0x18
	// Line 288, Address: 0x17ad80, Func Offset: 0x30
	// Line 291, Address: 0x17adc4, Func Offset: 0x74
	// Line 292, Address: 0x17adcc, Func Offset: 0x7c
	// Func End, Address: 0x17addc, Func Offset: 0x8c
}

