typedef struct sh2gfw_TEX_HEAD;
typedef struct sh2gfw_CLUTS_HEAD;
typedef struct _anon0;
typedef struct sh2gfw_BLOCK_MAN;
typedef union Q_WORDDATA;
typedef struct sh2gfw_AREA_HEAD;
typedef struct sh2gfw_GSREGS_HEAD;
typedef struct sh2gfw_BLOCK_HEAD;
typedef struct sh2gfw_BLOCKGLOBAL_HEAD;
typedef struct sh2gfw_BLOCKLOCAL_HEAD;
typedef struct sh2gfw_GIFTAG_HEAD;
typedef struct _anon1;
typedef struct _anon2;


typedef unsigned short type_0[3];
typedef unsigned short type_1[3];
typedef float type_2[4];
typedef float type_3[4];
typedef float type_4[4][4];
typedef unsigned char type_5[16];
typedef sh2gfw_BLOCK_MAN type_6[6];
typedef unsigned char type_7[16];
typedef float type_8[4][2];
typedef unsigned int type_9[4];
typedef unsigned short type_10[8];
typedef float type_11[4];
typedef unsigned char type_12[16];
typedef sh2gfw_GSREGS_HEAD* type_13[4];
typedef int type_14[4];
typedef unsigned char type_15[16];
typedef short type_16[8];
typedef sh2gfw_GIFTAG_HEAD* type_17[16];
typedef sh2gfw_GIFTAG_HEAD* type_18[16][4];
typedef unsigned char type_19[16];
typedef char type_20[16];
typedef unsigned short type_21[8];
typedef unsigned short type_22[8][16];
typedef unsigned short type_23[8][16][4];
typedef unsigned long type_24[2];
typedef sh2gfw_TEX_HEAD* type_25[4];
typedef sh2gfw_CLUTS_HEAD* type_26[4];
typedef unsigned char type_27[4];
typedef unsigned char type_28[16];
typedef unsigned char type_29[16][4];
typedef unsigned char type_30[16];
typedef unsigned char type_31[16][16];
typedef unsigned char type_32[16][16][4];
typedef void* type_33[4];
typedef unsigned short type_34[3];
typedef Q_WORDDATA* type_35[4];
typedef _anon1 type_36[4];
typedef unsigned int type_37[4];
typedef int type_38[8];
typedef int type_39[8];
typedef unsigned int type_40[3];
typedef unsigned int type_41[3];
typedef sh2gfw_GIFTAG_HEAD* type_42[16];
typedef unsigned char type_43[8];
typedef unsigned char type_44[8][8];
typedef Q_WORDDATA type_45[3];

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

struct sh2gfw_AREA_HEAD
{
	unsigned int area_id;
	unsigned int toGlobalTexHead;
	unsigned int toGlobalClutsHead;
	unsigned int date;
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

struct _anon1
{
	unsigned char* data_head;
	unsigned char* block_man;
	unsigned char loadingflg;
	unsigned char datavalid;
	unsigned char datacond;
	unsigned char padc;
	unsigned int data_id;
};

struct _anon2
{
	unsigned int all_condflg;
	unsigned short loadednum;
	unsigned short nouse_blocknum;
	unsigned short loadin_gno;
	unsigned short pads[3];
	_anon1 BlockCD[4];
};

_anon2 MMBlock_Man;
sh2gfw_BLOCK_MAN b_man[6];

void sh2gfw_allinit_memman();
int sh2gfw_MMblock_loaded(unsigned char* head, unsigned int id);
unsigned char* sh2gfw_MMblock_getLoadble_addr();
int sh2gfw_MMblock_AllDrawable_num();
int sh2gfw_MMblock_get_IDbman(unsigned int id);
int sh2gfw_MMblock_GetPhysIndex(unsigned int mapid);

// 
// Start address: 0x17ddf0
void sh2gfw_allinit_memman()
{
	int i;
	// Line 73, Address: 0x17ddf0, Func Offset: 0
	// Line 76, Address: 0x17ddfc, Func Offset: 0xc
	// Line 79, Address: 0x17de08, Func Offset: 0x18
	// Line 80, Address: 0x17de28, Func Offset: 0x38
	// Line 82, Address: 0x17de50, Func Offset: 0x60
	// Line 83, Address: 0x17de64, Func Offset: 0x74
	// Line 85, Address: 0x17de78, Func Offset: 0x88
	// Line 87, Address: 0x17de8c, Func Offset: 0x9c
	// Line 89, Address: 0x17deb8, Func Offset: 0xc8
	// Line 92, Address: 0x17decc, Func Offset: 0xdc
	// Line 93, Address: 0x17ded4, Func Offset: 0xe4
	// Line 94, Address: 0x17dedc, Func Offset: 0xec
	// Line 97, Address: 0x17dee8, Func Offset: 0xf8
	// Func End, Address: 0x17defc, Func Offset: 0x10c
}

// 
// Start address: 0x17df00
int sh2gfw_MMblock_loaded(unsigned char* head, unsigned int id)
{
	int i;
	// Line 105, Address: 0x17df00, Func Offset: 0
	// Line 108, Address: 0x17df10, Func Offset: 0x10
	// Line 109, Address: 0x17df1c, Func Offset: 0x1c
	// Line 110, Address: 0x17df3c, Func Offset: 0x3c
	// Line 112, Address: 0x17df50, Func Offset: 0x50
	// Line 115, Address: 0x17df68, Func Offset: 0x68
	// Line 116, Address: 0x17df7c, Func Offset: 0x7c
	// Line 119, Address: 0x17df90, Func Offset: 0x90
	// Line 120, Address: 0x17dfa8, Func Offset: 0xa8
	// Line 121, Address: 0x17dfc0, Func Offset: 0xc0
	// Line 123, Address: 0x17dfd8, Func Offset: 0xd8
	// Line 125, Address: 0x17dfdc, Func Offset: 0xdc
	// Func End, Address: 0x17dfec, Func Offset: 0xec
}

// 
// Start address: 0x17dff0
unsigned char* sh2gfw_MMblock_getLoadble_addr()
{
	int i;
	// Line 154, Address: 0x17dff0, Func Offset: 0
	// Line 157, Address: 0x17dff8, Func Offset: 0x8
	// Line 158, Address: 0x17e004, Func Offset: 0x14
	// Line 159, Address: 0x17e024, Func Offset: 0x34
	// Line 161, Address: 0x17e038, Func Offset: 0x48
	// Line 162, Address: 0x17e050, Func Offset: 0x60
	// Line 164, Address: 0x17e068, Func Offset: 0x78
	// Func End, Address: 0x17e078, Func Offset: 0x88
}

// 
// Start address: 0x17e080
int sh2gfw_MMblock_AllDrawable_num()
{
	// Line 224, Address: 0x17e080, Func Offset: 0
	// Line 226, Address: 0x17e08c, Func Offset: 0xc
	// Func End, Address: 0x17e094, Func Offset: 0x14
}

// 
// Start address: 0x17e0a0
int sh2gfw_MMblock_get_IDbman(unsigned int id)
{
	int j;
	int i;
	// Line 242, Address: 0x17e0a0, Func Offset: 0
	// Line 243, Address: 0x17e0b0, Func Offset: 0x10
	// Line 244, Address: 0x17e0b4, Func Offset: 0x14
	// Line 245, Address: 0x17e0c0, Func Offset: 0x20
	// Line 247, Address: 0x17e0e4, Func Offset: 0x44
	// Line 248, Address: 0x17e0f4, Func Offset: 0x54
	// Line 249, Address: 0x17e0f8, Func Offset: 0x58
	// Line 251, Address: 0x17e110, Func Offset: 0x70
	// Line 253, Address: 0x17e11c, Func Offset: 0x7c
	// Line 255, Address: 0x17e128, Func Offset: 0x88
	// Line 258, Address: 0x17e12c, Func Offset: 0x8c
	// Func End, Address: 0x17e140, Func Offset: 0xa0
}

// 
// Start address: 0x17e140
int sh2gfw_MMblock_GetPhysIndex(unsigned int mapid)
{
	int i;
	// Line 262, Address: 0x17e140, Func Offset: 0
	// Line 265, Address: 0x17e14c, Func Offset: 0xc
	// Line 266, Address: 0x17e158, Func Offset: 0x18
	// Line 267, Address: 0x17e178, Func Offset: 0x38
	// Line 269, Address: 0x17e190, Func Offset: 0x50
	// Line 271, Address: 0x17e1bc, Func Offset: 0x7c
	// Line 272, Address: 0x17e1c8, Func Offset: 0x88
	// Line 275, Address: 0x17e1cc, Func Offset: 0x8c
	// Func End, Address: 0x17e1dc, Func Offset: 0x9c
}

