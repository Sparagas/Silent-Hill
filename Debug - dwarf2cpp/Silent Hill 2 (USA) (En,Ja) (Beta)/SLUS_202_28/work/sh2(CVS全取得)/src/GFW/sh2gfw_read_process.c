typedef struct sh2gfw_GSREGS_HEAD;
typedef struct sh2gfw_BLOCK_MAN;
typedef struct sh2gfw_ALLTEXSYNC_MAN;
typedef struct sh2gfw_AREA_HEAD;
typedef struct sh2gfw_BLOCK_HEAD;
typedef struct sh2gfw_BLOCKGLOBAL_HEAD;
typedef struct sh2gfw_BLOCKLOCAL_HEAD;
typedef struct sh2gfw_GIFTAG_HEAD;
typedef struct sh2gfw_TEX_HEAD;
typedef struct sh2gfw_TexMAN;
typedef struct sh2gfw_CLUTS_HEAD;
typedef struct _anon0;
typedef union fsFile;
typedef struct fsCdFile;
typedef union Q_WORDDATA;
typedef struct fsMgcFile;
typedef struct fsMgfFile;
typedef union fsFileIndex;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct _anon1;
typedef struct sh2gfw_TRANS_MAN;
typedef struct _anon2;
typedef struct FilesBgBlock;
typedef struct _anon3;


typedef float type_0[4][2];
typedef char type_1[16];
typedef unsigned long type_2[2];
typedef unsigned char type_3[16];
typedef sh2gfw_GSREGS_HEAD* type_4[4];
typedef unsigned char type_5[16];
typedef sh2gfw_GIFTAG_HEAD* type_6[16];
typedef sh2gfw_GIFTAG_HEAD* type_7[16][4];
typedef unsigned short type_8[8];
typedef unsigned short type_9[8][16];
typedef unsigned short type_10[8][16][4];
typedef sh2gfw_TEX_HEAD* type_11[4];
typedef sh2gfw_CLUTS_HEAD* type_12[4];
typedef unsigned char type_13[4];
typedef unsigned char type_14[16];
typedef unsigned char type_15[16][4];
typedef unsigned char type_16[16];
typedef unsigned char type_17[16][16];
typedef unsigned char type_18[16][16][4];
typedef unsigned int type_19[3];
typedef unsigned int type_20[3];
typedef void* type_21[4];
typedef Q_WORDDATA* type_22[4];
typedef unsigned int type_23[4];
typedef int type_24[8];
typedef int type_25[8];
typedef Q_WORDDATA type_26[48];
typedef sh2gfw_TexMAN type_27[96];
typedef sh2gfw_GIFTAG_HEAD* type_28[16];
typedef unsigned char type_29[8];
typedef unsigned char type_30[8][8];
typedef unsigned short type_31[3];
typedef Q_WORDDATA type_32[3];
typedef unsigned short type_33[3];
typedef unsigned short type_34[4];
typedef sh2gfw_BLOCK_MAN type_35[6];
typedef unsigned char* type_36[4];
typedef sh2gfw_GIFTAG_HEAD* type_37[16];
typedef unsigned char type_38[7];
typedef sh2gfw_GIFTAG_HEAD* type_39[16][4];
typedef unsigned char type_40[7];
typedef unsigned short type_41[7];
typedef unsigned char* type_42[7];
typedef unsigned char type_43[4];
typedef sh2gfw_GIFTAG_HEAD* type_44[16];
typedef sh2gfw_GIFTAG_HEAD* type_45[16][4];
typedef unsigned int type_46[4];
typedef float type_47[4];
typedef unsigned short type_48[8];
typedef float type_49[4];
typedef unsigned char type_50[4];
typedef float type_51[4][4];
typedef float type_52[4];
typedef unsigned char type_53[16];
typedef unsigned char type_54[16];
typedef int type_55[4];
typedef unsigned char type_56[16];
typedef short type_57[8];

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
	_anon3 blk_LightData;
};

struct sh2gfw_ALLTEXSYNC_MAN
{
	short g_BG;
	short st_BG;
	short l_BG;
	short bg_CHR;
	short human_CHR;
	short en_CHR;
	short ura_CHR;
	short x_CHR;
	short alltex_CHR;
	short oS_CHR;
	short oA_CHR;
	short wp_CHR;
	short alltexnum;
	short alltex_BG;
	short alltex_EFF;
	unsigned short trans_NOW_num;
	sh2gfw_TexMAN Empty_Head;
	sh2gfw_TexMAN Used_Head;
	int dbg_add;
	int dbg_del;
	unsigned short fonttex;
	unsigned short pads;
	int pad2;
	sh2gfw_TexMAN TexMan[96];
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

union fsFile
{
	_anon1 check;
	<unknown fundamental type (0xa510)> pack;
	fsCdFile cd;
	fsHdFile hd;
	fsMgcFile mgc;
	fsMgfFile mgf;
	fsMgpFile mgp;
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

union fsFileIndex
{
	_anon2 index;
	unsigned long pack;
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

struct _anon1
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

struct sh2gfw_TRANS_MAN
{
	unsigned int blockid;
	_anon0* pA_M;
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

struct _anon2
{
	fsFile* fp;
	char* name;
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

struct _anon3
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

sh2gfw_TRANS_MAN sh2_TR_MAN;
sh2gfw_ALLTEXSYNC_MAN AllTexSync_Man;
_anon0 Area_Data_Man;
sh2gfw_BLOCK_MAN b_man[6];

void sh2gfw_Set_TrTex(void* pT);
int sh2gfw_LoadSet_SemiTransTEX(int mapid, void* fl);
void sh2gfw_LOAD_AREADATA_ID(unsigned int stage);
int sh2gfw_Process_AREAtoMAN(Q_WORDDATA* d_h, _anon0* pAMAN, sh2gfw_ALLTEXSYNC_MAN* pATSM);
unsigned int sh2gfw_process_AreaDATA(unsigned int map_id);
void sh2gfw_Free_BlockLocalTex(sh2gfw_ALLTEXSYNC_MAN* pATSM, sh2gfw_BLOCK_MAN* pB_man);
void sh2gfw_AllClear_TrMAN();
unsigned int sh2gfw_process_blockLOCAL_main(Q_WORDDATA* datahead, sh2gfw_BLOCK_MAN* pB_man, _anon0* pA_man, Q_WORDDATA* b_pack, Q_WORDDATA* g_pack, Q_WORDDATA* t_pack, int stid, int mapid);
void sh2gfw_Set_GB_Tex(void* addr);
void sh2gfw_Delete_GB_Tex();
void sh2gfw_Set_TR_Tex(void* addr);
void sh2gfw_Delete_TR_Tex();
void sh2gfw_Set_BlockLocal(int slot, void* addr, int mapid);
void sh2gfw_Delete_BlockLocal(int slot);

// 
// Start address: 0x181f50
void sh2gfw_Set_TrTex(void* pT)
{
	int tmp;
	int* mp;
	sh2gfw_AREA_HEAD* pah;
	// Line 152, Address: 0x181f50, Func Offset: 0
	// Line 153, Address: 0x181f5c, Func Offset: 0xc
	// Line 155, Address: 0x181f60, Func Offset: 0x10
	// Line 156, Address: 0x181f68, Func Offset: 0x18
	// Line 160, Address: 0x181f80, Func Offset: 0x30
	// Line 163, Address: 0x181f90, Func Offset: 0x40
	// Line 170, Address: 0x181fa0, Func Offset: 0x50
	// Line 184, Address: 0x181fd8, Func Offset: 0x88
	// Line 185, Address: 0x181fe4, Func Offset: 0x94
	// Func End, Address: 0x181ff8, Func Offset: 0xa8
}

// 
// Start address: 0x182000
int sh2gfw_LoadSet_SemiTransTEX(int mapid, void* fl)
{
	int size;
	int stg;
	void* addr;
	fsFileIndex* file;
	int fid;
	int sz;
	// Line 237, Address: 0x182000, Func Offset: 0
	// Line 244, Address: 0x18201c, Func Offset: 0x1c
	// Line 280, Address: 0x182020, Func Offset: 0x20
	// Line 283, Address: 0x182038, Func Offset: 0x38
	// Line 284, Address: 0x182048, Func Offset: 0x48
	// Line 285, Address: 0x182058, Func Offset: 0x58
	// Line 288, Address: 0x182060, Func Offset: 0x60
	// Line 290, Address: 0x182070, Func Offset: 0x70
	// Line 296, Address: 0x18207c, Func Offset: 0x7c
	// Line 297, Address: 0x182088, Func Offset: 0x88
	// Line 299, Address: 0x182098, Func Offset: 0x98
	// Line 300, Address: 0x1820a4, Func Offset: 0xa4
	// Line 301, Address: 0x1820b4, Func Offset: 0xb4
	// Line 302, Address: 0x1820bc, Func Offset: 0xbc
	// Line 307, Address: 0x1820cc, Func Offset: 0xcc
	// Line 316, Address: 0x1820e4, Func Offset: 0xe4
	// Line 317, Address: 0x1820e8, Func Offset: 0xe8
	// Func End, Address: 0x182108, Func Offset: 0x108
}

// 
// Start address: 0x182110
void sh2gfw_LOAD_AREADATA_ID(unsigned int stage)
{
	fsFileIndex* file;
	FilesBgBlock* bg;
	int fid;
	// Line 333, Address: 0x182110, Func Offset: 0
	// Line 349, Address: 0x18211c, Func Offset: 0xc
	// Line 350, Address: 0x18212c, Func Offset: 0x1c
	// Line 351, Address: 0x182130, Func Offset: 0x20
	// Line 352, Address: 0x182138, Func Offset: 0x28
	// Line 354, Address: 0x182154, Func Offset: 0x44
	// Line 357, Address: 0x18216c, Func Offset: 0x5c
	// Func End, Address: 0x182180, Func Offset: 0x70
}

// 
// Start address: 0x182180
int sh2gfw_Process_AREAtoMAN(Q_WORDDATA* d_h, _anon0* pAMAN, sh2gfw_ALLTEXSYNC_MAN* pATSM)
{
	int tmp;
	int* mp;
	Q_WORDDATA* datahead;
	// Line 376, Address: 0x182180, Func Offset: 0
	// Line 382, Address: 0x1821a0, Func Offset: 0x20
	// Line 383, Address: 0x1821a8, Func Offset: 0x28
	// Line 387, Address: 0x1821c0, Func Offset: 0x40
	// Line 389, Address: 0x1821c4, Func Offset: 0x44
	// Line 392, Address: 0x1821d4, Func Offset: 0x54
	// Line 395, Address: 0x1821e4, Func Offset: 0x64
	// Line 411, Address: 0x182208, Func Offset: 0x88
	// Line 412, Address: 0x18220c, Func Offset: 0x8c
	// Func End, Address: 0x182228, Func Offset: 0xa8
}

// 
// Start address: 0x182230
unsigned int sh2gfw_process_AreaDATA(unsigned int map_id)
{
	// Line 421, Address: 0x182230, Func Offset: 0
	// Line 425, Address: 0x182240, Func Offset: 0x10
	// Line 428, Address: 0x182258, Func Offset: 0x28
	// Line 432, Address: 0x182268, Func Offset: 0x38
	// Line 444, Address: 0x18228c, Func Offset: 0x5c
	// Line 446, Address: 0x182290, Func Offset: 0x60
	// Func End, Address: 0x1822a4, Func Offset: 0x74
}

// 
// Start address: 0x1822b0
void sh2gfw_Free_BlockLocalTex(sh2gfw_ALLTEXSYNC_MAN* pATSM, sh2gfw_BLOCK_MAN* pB_man)
{
	sh2gfw_TexMAN** pTexMAN;
	int i;
	// Line 472, Address: 0x1822b0, Func Offset: 0
	// Line 474, Address: 0x1822d4, Func Offset: 0x24
	// Line 476, Address: 0x1822d8, Func Offset: 0x28
	// Line 478, Address: 0x1822e4, Func Offset: 0x34
	// Line 479, Address: 0x1822fc, Func Offset: 0x4c
	// Line 480, Address: 0x182300, Func Offset: 0x50
	// Line 494, Address: 0x182318, Func Offset: 0x68
	// Func End, Address: 0x18233c, Func Offset: 0x8c
}

// 
// Start address: 0x182340
void sh2gfw_AllClear_TrMAN()
{
	// Line 501, Address: 0x182340, Func Offset: 0
	// Line 502, Address: 0x182348, Func Offset: 0x8
	// Line 503, Address: 0x182360, Func Offset: 0x20
	// Func End, Address: 0x182370, Func Offset: 0x30
}

// 
// Start address: 0x182370
unsigned int sh2gfw_process_blockLOCAL_main(Q_WORDDATA* datahead, sh2gfw_BLOCK_MAN* pB_man, _anon0* pA_man, Q_WORDDATA* b_pack, Q_WORDDATA* g_pack, Q_WORDDATA* t_pack, int stid, int mapid)
{
	Q_WORDDATA* qwd;
	int pg;
	int pb;
	int il;
	int ig;
	int ib;
	// Line 544, Address: 0x182370, Func Offset: 0
	// Line 546, Address: 0x1823bc, Func Offset: 0x4c
	// Line 550, Address: 0x1823c4, Func Offset: 0x54
	// Line 555, Address: 0x1823cc, Func Offset: 0x5c
	// Line 556, Address: 0x1823ec, Func Offset: 0x7c
	// Line 558, Address: 0x1823f4, Func Offset: 0x84
	// Line 559, Address: 0x182408, Func Offset: 0x98
	// Line 560, Address: 0x18240c, Func Offset: 0x9c
	// Line 561, Address: 0x182428, Func Offset: 0xb8
	// Line 563, Address: 0x182440, Func Offset: 0xd0
	// Line 569, Address: 0x182454, Func Offset: 0xe4
	// Line 571, Address: 0x182464, Func Offset: 0xf4
	// Line 572, Address: 0x18247c, Func Offset: 0x10c
	// Line 574, Address: 0x182484, Func Offset: 0x114
	// Line 577, Address: 0x182490, Func Offset: 0x120
	// Line 579, Address: 0x182498, Func Offset: 0x128
	// Line 581, Address: 0x1824ac, Func Offset: 0x13c
	// Line 585, Address: 0x1824b8, Func Offset: 0x148
	// Line 586, Address: 0x1824d0, Func Offset: 0x160
	// Line 588, Address: 0x1824d8, Func Offset: 0x168
	// Line 589, Address: 0x1824e8, Func Offset: 0x178
	// Line 593, Address: 0x182508, Func Offset: 0x198
	// Line 597, Address: 0x182530, Func Offset: 0x1c0
	// Line 600, Address: 0x182540, Func Offset: 0x1d0
	// Line 608, Address: 0x18255c, Func Offset: 0x1ec
	// Line 612, Address: 0x182564, Func Offset: 0x1f4
	// Line 614, Address: 0x18256c, Func Offset: 0x1fc
	// Line 618, Address: 0x182578, Func Offset: 0x208
	// Line 619, Address: 0x18257c, Func Offset: 0x20c
	// Func End, Address: 0x1825b0, Func Offset: 0x240
}

// 
// Start address: 0x1825b0
void sh2gfw_Set_GB_Tex(void* addr)
{
	_anon0* pA_man;
	// Line 630, Address: 0x1825b0, Func Offset: 0
	// Line 633, Address: 0x1825c0, Func Offset: 0x10
	// Line 634, Address: 0x1825d4, Func Offset: 0x24
	// Line 635, Address: 0x1825f0, Func Offset: 0x40
	// Func End, Address: 0x182604, Func Offset: 0x54
}

// 
// Start address: 0x182610
void sh2gfw_Delete_GB_Tex()
{
	_anon0* pA_man;
	// Line 639, Address: 0x182610, Func Offset: 0
	// Line 642, Address: 0x182618, Func Offset: 0x8
	// Line 643, Address: 0x182630, Func Offset: 0x20
	// Line 644, Address: 0x182644, Func Offset: 0x34
	// Func End, Address: 0x182654, Func Offset: 0x44
}

// 
// Start address: 0x182660
void sh2gfw_Set_TR_Tex(void* addr)
{
	// Line 650, Address: 0x182660, Func Offset: 0
	// Line 651, Address: 0x182670, Func Offset: 0x10
	// Line 652, Address: 0x182684, Func Offset: 0x24
	// Line 653, Address: 0x182690, Func Offset: 0x30
	// Func End, Address: 0x1826a4, Func Offset: 0x44
}

// 
// Start address: 0x1826b0
void sh2gfw_Delete_TR_Tex()
{
	// Line 657, Address: 0x1826b0, Func Offset: 0
	// Line 658, Address: 0x1826b8, Func Offset: 0x8
	// Line 659, Address: 0x1826d0, Func Offset: 0x20
	// Line 660, Address: 0x1826e4, Func Offset: 0x34
	// Func End, Address: 0x1826f4, Func Offset: 0x44
}

// 
// Start address: 0x182700
void sh2gfw_Set_BlockLocal(int slot, void* addr, int mapid)
{
	int isout;
	_anon0* pA_man;
	sh2gfw_BLOCK_MAN* pB_man;
	// Line 665, Address: 0x182700, Func Offset: 0
	// Line 666, Address: 0x182730, Func Offset: 0x30
	// Line 668, Address: 0x182744, Func Offset: 0x44
	// Line 669, Address: 0x182758, Func Offset: 0x58
	// Line 670, Address: 0x182768, Func Offset: 0x68
	// Line 679, Address: 0x1827c0, Func Offset: 0xc0
	// Line 681, Address: 0x1827c8, Func Offset: 0xc8
	// Func End, Address: 0x1827f4, Func Offset: 0xf4
}

// 
// Start address: 0x182800
void sh2gfw_Delete_BlockLocal(int slot)
{
	sh2gfw_BLOCK_MAN* pB_man;
	// Line 685, Address: 0x182800, Func Offset: 0
	// Line 686, Address: 0x18280c, Func Offset: 0xc
	// Line 688, Address: 0x182820, Func Offset: 0x20
	// Line 689, Address: 0x182834, Func Offset: 0x34
	// Line 690, Address: 0x182844, Func Offset: 0x44
	// Func End, Address: 0x182858, Func Offset: 0x58
}

