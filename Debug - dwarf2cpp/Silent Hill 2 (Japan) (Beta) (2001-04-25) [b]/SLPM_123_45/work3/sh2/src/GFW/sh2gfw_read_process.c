typedef union Q_WORDDATA;
typedef struct sh2gfw_AREA_HEAD;
typedef struct sh2gfw_TexMAN;
typedef union fsFileIndex;
typedef struct _anon0;
typedef union fsFile;
typedef struct sh2gfw_BLOCK_HEAD;
typedef struct sh2gfw_GSREGS_HEAD;
typedef struct sh2gfw_TEX_HEAD;
typedef struct sh2gfw_CLUTS_HEAD;
typedef struct FilesBgBlock;
typedef struct sh2gfw_BLOCKGLOBAL_HEAD;
typedef struct sh2gfw_GIFTAG_HEAD;
typedef struct sh2gfw_ALLTEXSYNC_MAN;
typedef struct sh2gfw_BLOCK_MAN;
typedef struct sh2gfw_BLOCKLOCAL_HEAD;
typedef struct sh2gfw_TRANS_MAN;
typedef struct _anon1;
typedef struct fsCdFile;
typedef struct fsMgcFile;
typedef struct _anon2;
typedef struct fsMgfFile;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct _anon3;


typedef void* type_0[4];
typedef Q_WORDDATA* type_1[4];
typedef unsigned int type_2[4];
typedef int type_3[8];
typedef int type_4[8];
typedef unsigned int type_5[3];
typedef unsigned int type_6[3];
typedef Q_WORDDATA type_7[48];
typedef Q_WORDDATA type_8[96];
typedef sh2gfw_TexMAN* type_9[96];
typedef sh2gfw_TexMAN type_10[96];
typedef sh2gfw_GIFTAG_HEAD* type_11[16];
typedef unsigned char type_12[8];
typedef unsigned char type_13[8][8];
typedef Q_WORDDATA type_14[3];
typedef unsigned short type_15[3];
typedef unsigned short type_16[3];
typedef unsigned short type_17[4];
typedef unsigned char* type_18[4];
typedef sh2gfw_GIFTAG_HEAD* type_19[16];
typedef sh2gfw_GIFTAG_HEAD* type_20[16][4];
typedef unsigned char type_21[7];
typedef unsigned char type_22[7];
typedef unsigned short type_23[7];
typedef unsigned char* type_24[7];
typedef unsigned char type_25[4];
typedef sh2gfw_GIFTAG_HEAD* type_26[16];
typedef sh2gfw_GIFTAG_HEAD* type_27[16][4];
typedef unsigned char type_28[4];
typedef float type_29[4];
typedef float type_30[4];
typedef float type_31[4][4];
typedef unsigned char type_32[16];
typedef unsigned char type_33[16];
typedef float type_34[4][2];
typedef unsigned int type_35[4];
typedef unsigned short type_36[8];
typedef float type_37[4];
typedef unsigned char type_38[16];
typedef sh2gfw_GSREGS_HEAD* type_39[4];
typedef int type_40[4];
typedef sh2gfw_GIFTAG_HEAD* type_41[16];
typedef short type_42[8];
typedef unsigned char type_43[16];
typedef sh2gfw_GIFTAG_HEAD* type_44[16][4];
typedef unsigned char type_45[16];
typedef char type_46[16];
typedef unsigned short type_47[8];
typedef unsigned short type_48[8][16];
typedef unsigned short type_49[8][16][4];
typedef unsigned long type_50[2];
typedef sh2gfw_TEX_HEAD* type_51[4];
typedef sh2gfw_CLUTS_HEAD* type_52[4];
typedef unsigned char type_53[4];
typedef unsigned char type_54[16];
typedef unsigned char type_55[16][4];
typedef unsigned char type_56[16];
typedef unsigned char type_57[16][16];
typedef unsigned char type_58[16][16][4];

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

union fsFileIndex
{
	_anon0 index;
	unsigned long pack;
};

struct _anon0
{
	fsFile* fp;
	char* name;
};

union fsFile
{
	_anon3 check;
	<unknown fundamental type (0xa510)> pack;
	fsCdFile cd;
	fsHdFile hd;
	fsMgcFile mgc;
	fsMgfFile mgf;
	fsMgpFile mgp;
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

struct FilesBgBlock
{
	fsFileIndex* map;
	fsFileIndex* cld;
	fsFileIndex* cam;
	fsFileIndex* kg2;
	fsFileIndex* tex;
	fsFileIndex* ex0;
	fsFileIndex* ex1;
	fsFileIndex* ex2;
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
	_anon2 blk_LightData;
};

struct sh2gfw_BLOCKLOCAL_HEAD
{
	unsigned short gsregsamount[3];
	unsigned short transamount[3];
	unsigned short ltexnum;
	unsigned short pads;
};

struct sh2gfw_TRANS_MAN
{
	unsigned int blockid;
	_anon1* pA_M;
	unsigned short objnum[4];
	unsigned int trans_clutnum;
	unsigned int pad2;
	unsigned int pad3;
	unsigned int pad4;
	unsigned char* trgehead[4];
	sh2gfw_GIFTAG_HEAD* pTR_global_GIF_H[16][4];
	sh2gfw_TEX_HEAD* p_GTexHead;
	sh2gfw_CLUTS_HEAD* p_GClutHead;
	sh2gfw_TexMAN* p_GTexMan;
	unsigned char used_Ggifnum[4];
	sh2gfw_GIFTAG_HEAD* pTR_trans_GIF_H[16][4];
	sh2gfw_TEX_HEAD* p_TRTexHead;
	sh2gfw_CLUTS_HEAD* p_TRClutHead;
	sh2gfw_TexMAN* p_TRTexMan;
	unsigned char used_TRgifnum[4];
};

struct _anon1
{
	unsigned int areaid;
	unsigned char use_Globalflg[7];
	unsigned char use_Transflg[7];
	unsigned short block_id[7];
	unsigned char* block_man[7];
	sh2gfw_AREA_HEAD* pA_H;
	sh2gfw_TEX_HEAD* global_tex;
	sh2gfw_CLUTS_HEAD* global_clut;
	sh2gfw_TEX_HEAD* global_transtex;
	sh2gfw_CLUTS_HEAD* global_transclut;
	sh2gfw_TexMAN* gTexMAN;
	sh2gfw_TexMAN* gTranstexMAN;
	unsigned short gtex_mode;
	unsigned short gtrans_mode;
	unsigned int pad1;
};

struct fsCdFile
{
	struct
	{
		int type : 8;
		int number : 24;
	};
	char* name;
	int lsn;
	int size;
};

struct fsMgcFile
{
	struct
	{
		int type : 8;
		int padding : 24;
	};
	fsFile* parent;
	char* start;
	char* end;
};

struct _anon2
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

struct fsMgfFile
{
	struct
	{
		int type : 8;
		int padding : 24;
	};
	fsFile* parent;
	int offset;
	int size;
};

struct fsHdFile
{
	struct
	{
		int type : 8;
		int padding : 24;
	};
	char* name;
	int offset;
	int size;
};

struct fsMgpFile
{
	struct
	{
		int type : 8;
		int padding : 24;
	};
	fsFile* file;
	fsMgcFile* start;
	fsMgcFile* end;
};

struct _anon3
{
	struct
	{
		int type : 8;
		int number : 24;
	};
	int pad0;
	int pad1;
	int pad2;
};

sh2gfw_TRANS_MAN sh2_TR_MAN;
sh2gfw_ALLTEXSYNC_MAN AllTexSync_Man;

int sh2gfw_LOAD_DATA_ID2(fsFileIndex* file, void* load_addr);
void sh2gfw_Set_TrTex(void* pT);
int sh2gfw_LoadSet_SemiTransTEX(int stg, void* fl);
void sh2gfw_LOAD_AREADATA_ID(unsigned int stage);
int sh2gfw_Process_AREAtoMAN(Q_WORDDATA* d_h, _anon1* pAMAN, sh2gfw_ALLTEXSYNC_MAN* pATSM);
unsigned int sh2gfw_process_AreaDATA(unsigned int map_id, _anon1* pA_man);
void sh2gfw_AllClear_TrMAN();
void sh2gfw_Delete_TrTex();
unsigned int sh2gfw_process_blockLOCAL_main(Q_WORDDATA* datahead, sh2gfw_BLOCK_MAN* pB_man, _anon1* pA_man, Q_WORDDATA* b_pack, Q_WORDDATA* g_pack, Q_WORDDATA* t_pack, int stid);

// 
// Start address: 0x188760
int sh2gfw_LOAD_DATA_ID2(fsFileIndex* file, void* load_addr)
{
	int fid;
	int sz;
	// Line 79, Address: 0x188760, Func Offset: 0
	// Line 82, Address: 0x188778, Func Offset: 0x18
	// Line 83, Address: 0x188788, Func Offset: 0x28
	// Line 85, Address: 0x188798, Func Offset: 0x38
	// Line 87, Address: 0x1887a8, Func Offset: 0x48
	// Line 94, Address: 0x1887b4, Func Offset: 0x54
	// Line 95, Address: 0x1887c8, Func Offset: 0x68
	// Line 96, Address: 0x1887e4, Func Offset: 0x84
	// Line 97, Address: 0x1887e8, Func Offset: 0x88
	// Func End, Address: 0x188800, Func Offset: 0xa0
}

// 
// Start address: 0x188800
void sh2gfw_Set_TrTex(void* pT)
{
	sh2gfw_AREA_HEAD* pah;
	// Line 137, Address: 0x188800, Func Offset: 0
	// Line 140, Address: 0x188810, Func Offset: 0x10
	// Line 143, Address: 0x188814, Func Offset: 0x14
	// Line 146, Address: 0x188824, Func Offset: 0x24
	// Line 151, Address: 0x188834, Func Offset: 0x34
	// Line 158, Address: 0x188868, Func Offset: 0x68
	// Func End, Address: 0x18887c, Func Offset: 0x7c
}

// 
// Start address: 0x188880
int sh2gfw_LoadSet_SemiTransTEX(int stg, void* fl)
{
	fsFileIndex* file;
	int fid;
	int sz;
	// Line 208, Address: 0x188880, Func Offset: 0
	// Line 213, Address: 0x18889c, Func Offset: 0x1c
	// Line 216, Address: 0x1888a0, Func Offset: 0x20
	// Line 218, Address: 0x1888b0, Func Offset: 0x30
	// Line 220, Address: 0x1888b8, Func Offset: 0x38
	// Line 224, Address: 0x1888c4, Func Offset: 0x44
	// Line 226, Address: 0x188900, Func Offset: 0x80
	// Line 227, Address: 0x188904, Func Offset: 0x84
	// Line 229, Address: 0x18890c, Func Offset: 0x8c
	// Line 230, Address: 0x188910, Func Offset: 0x90
	// Line 233, Address: 0x188918, Func Offset: 0x98
	// Line 234, Address: 0x18891c, Func Offset: 0x9c
	// Line 237, Address: 0x188924, Func Offset: 0xa4
	// Line 245, Address: 0x188928, Func Offset: 0xa8
	// Line 246, Address: 0x188938, Func Offset: 0xb8
	// Line 247, Address: 0x188948, Func Offset: 0xc8
	// Line 249, Address: 0x188950, Func Offset: 0xd0
	// Line 251, Address: 0x188960, Func Offset: 0xe0
	// Line 257, Address: 0x18896c, Func Offset: 0xec
	// Line 259, Address: 0x188988, Func Offset: 0x108
	// Line 262, Address: 0x1889a4, Func Offset: 0x124
	// Line 265, Address: 0x1889b8, Func Offset: 0x138
	// Line 266, Address: 0x1889c4, Func Offset: 0x144
	// Line 267, Address: 0x1889c8, Func Offset: 0x148
	// Func End, Address: 0x1889e4, Func Offset: 0x164
}

// 
// Start address: 0x1889f0
void sh2gfw_LOAD_AREADATA_ID(unsigned int stage)
{
	fsFileIndex* file;
	FilesBgBlock* bg;
	int fid;
	// Line 283, Address: 0x1889f0, Func Offset: 0
	// Line 299, Address: 0x188a08, Func Offset: 0x18
	// Line 300, Address: 0x188a20, Func Offset: 0x30
	// Line 301, Address: 0x188a24, Func Offset: 0x34
	// Line 302, Address: 0x188a2c, Func Offset: 0x3c
	// Line 304, Address: 0x188a48, Func Offset: 0x58
	// Line 307, Address: 0x188a64, Func Offset: 0x74
	// Func End, Address: 0x188a80, Func Offset: 0x90
}

// 
// Start address: 0x188a80
int sh2gfw_Process_AREAtoMAN(Q_WORDDATA* d_h, _anon1* pAMAN, sh2gfw_ALLTEXSYNC_MAN* pATSM)
{
	Q_WORDDATA* datahead;
	// Line 326, Address: 0x188a80, Func Offset: 0
	// Line 328, Address: 0x188a98, Func Offset: 0x18
	// Line 330, Address: 0x188a9c, Func Offset: 0x1c
	// Line 332, Address: 0x188aa4, Func Offset: 0x24
	// Line 335, Address: 0x188abc, Func Offset: 0x3c
	// Line 338, Address: 0x188ad4, Func Offset: 0x54
	// Line 354, Address: 0x188b00, Func Offset: 0x80
	// Line 355, Address: 0x188b20, Func Offset: 0xa0
	// Func End, Address: 0x188b34, Func Offset: 0xb4
}

// 
// Start address: 0x188b40
unsigned int sh2gfw_process_AreaDATA(unsigned int map_id, _anon1* pA_man)
{
	// Line 364, Address: 0x188b40, Func Offset: 0
	// Line 366, Address: 0x188b50, Func Offset: 0x10
	// Line 369, Address: 0x188b64, Func Offset: 0x24
	// Line 370, Address: 0x188b74, Func Offset: 0x34
	// Line 375, Address: 0x188b88, Func Offset: 0x48
	// Line 377, Address: 0x188ba8, Func Offset: 0x68
	// Line 379, Address: 0x188bac, Func Offset: 0x6c
	// Func End, Address: 0x188bbc, Func Offset: 0x7c
}

// 
// Start address: 0x188bc0
void sh2gfw_AllClear_TrMAN()
{
	// Line 419, Address: 0x188bc0, Func Offset: 0
	// Line 420, Address: 0x188bc8, Func Offset: 0x8
	// Line 421, Address: 0x188be0, Func Offset: 0x20
	// Func End, Address: 0x188bf0, Func Offset: 0x30
}

// 
// Start address: 0x188bf0
void sh2gfw_Delete_TrTex()
{
	// Line 428, Address: 0x188bf0, Func Offset: 0
	// Line 429, Address: 0x188bf8, Func Offset: 0x8
	// Line 431, Address: 0x188c08, Func Offset: 0x18
	// Line 433, Address: 0x188c20, Func Offset: 0x30
	// Line 436, Address: 0x188c28, Func Offset: 0x38
	// Func End, Address: 0x188c38, Func Offset: 0x48
}

// 
// Start address: 0x188c40
unsigned int sh2gfw_process_blockLOCAL_main(Q_WORDDATA* datahead, sh2gfw_BLOCK_MAN* pB_man, _anon1* pA_man, Q_WORDDATA* b_pack, Q_WORDDATA* g_pack, Q_WORDDATA* t_pack, int stid)
{
	Q_WORDDATA* qwd;
	int pg;
	int pb;
	int il;
	int ig;
	int ib;
	// Line 462, Address: 0x188c40, Func Offset: 0
	// Line 464, Address: 0x188c74, Func Offset: 0x34
	// Line 468, Address: 0x188c80, Func Offset: 0x40
	// Line 473, Address: 0x188c88, Func Offset: 0x48
	// Line 474, Address: 0x188ca8, Func Offset: 0x68
	// Line 476, Address: 0x188cb0, Func Offset: 0x70
	// Line 477, Address: 0x188cc0, Func Offset: 0x80
	// Line 478, Address: 0x188cc4, Func Offset: 0x84
	// Line 479, Address: 0x188ce4, Func Offset: 0xa4
	// Line 481, Address: 0x188d00, Func Offset: 0xc0
	// Line 487, Address: 0x188d10, Func Offset: 0xd0
	// Line 489, Address: 0x188d20, Func Offset: 0xe0
	// Line 490, Address: 0x188d3c, Func Offset: 0xfc
	// Line 492, Address: 0x188d44, Func Offset: 0x104
	// Line 495, Address: 0x188d54, Func Offset: 0x114
	// Line 497, Address: 0x188d5c, Func Offset: 0x11c
	// Line 499, Address: 0x188d6c, Func Offset: 0x12c
	// Line 503, Address: 0x188d7c, Func Offset: 0x13c
	// Line 504, Address: 0x188d9c, Func Offset: 0x15c
	// Line 506, Address: 0x188da4, Func Offset: 0x164
	// Line 507, Address: 0x188db8, Func Offset: 0x178
	// Line 511, Address: 0x188dd8, Func Offset: 0x198
	// Line 514, Address: 0x188e08, Func Offset: 0x1c8
	// Line 515, Address: 0x188e0c, Func Offset: 0x1cc
	// Line 518, Address: 0x188e20, Func Offset: 0x1e0
	// Line 525, Address: 0x188e38, Func Offset: 0x1f8
	// Line 527, Address: 0x188e44, Func Offset: 0x204
	// Line 528, Address: 0x188e48, Func Offset: 0x208
	// Func End, Address: 0x188e68, Func Offset: 0x228
}

