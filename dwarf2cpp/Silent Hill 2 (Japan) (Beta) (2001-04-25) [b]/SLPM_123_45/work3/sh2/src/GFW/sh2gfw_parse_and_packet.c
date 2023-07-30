typedef struct sh2gfw_CLUTS_HEAD;
typedef union Q_WORDDATA;
typedef struct sh2gfw_ALLTEXSYNC_MAN;
typedef struct _anon0;
typedef struct _anon1;
typedef struct sh2gfw_TexMAN;
typedef struct _anon2;
typedef struct _anon3;
typedef struct sh2gfw_GSREGS_HEAD;
typedef struct sh2gfw_BLOCK_MAN;
typedef struct sh2gfw_GIFTAG_HEAD;
typedef struct shGsDrawEnv;
typedef struct _anon4;
typedef struct sh2gfw_TEX_HEAD;
typedef struct _anon5;
typedef struct sh2gfw_VU_HEAD;
typedef struct _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef struct _anon9;
typedef struct _anon10;
typedef struct _anon11;
typedef struct shGsStencilDrawEnv;
typedef struct sh2gfw_TRANSGEOM_HEAD;
typedef struct sh2gfw_AREA_HEAD;
typedef struct sh2gfw_BLOCK_HEAD;
typedef struct shGsLoopEnv;
typedef struct sh2gfw_GEOM_HEAD;
typedef struct _anon12;
typedef struct sh2gfw_BLOCKGLOBAL_HEAD;
typedef struct _anon13;
typedef struct _anon14;
typedef struct shGsTinyDrawEnv;
typedef struct _anon15;
typedef struct sh2gfw_BLOCKLOCAL_HEAD;
typedef struct _anon16;
typedef struct shGsAllEnv;
typedef struct _anon17;
typedef struct _anon18;
typedef struct _anon19;
typedef struct _anon20;
typedef struct _anon21;


typedef unsigned char type_0[4];
typedef Q_WORDDATA type_1[8];
typedef unsigned char type_2[16];
typedef unsigned char type_3[16][4];
typedef Q_WORDDATA type_4[2];
typedef unsigned char type_5[16];
typedef unsigned char type_6[16][16];
typedef unsigned char type_7[16][16][4];
typedef Q_WORDDATA type_8[2];
typedef Q_WORDDATA type_9[2];
typedef Q_WORDDATA type_10[2];
typedef unsigned char type_11[16];
typedef void* type_12[4];
typedef Q_WORDDATA type_13[2];
typedef unsigned char type_14[16];
typedef Q_WORDDATA* type_15[4];
typedef Q_WORDDATA type_16[2];
typedef unsigned int type_17[4];
typedef Q_WORDDATA type_18[2];
typedef int type_19[8];
typedef unsigned int type_20[4];
typedef Q_WORDDATA type_21[2];
typedef int type_22[8];
typedef unsigned short type_23[8];
typedef Q_WORDDATA type_24[2];
typedef float type_25[4];
typedef Q_WORDDATA type_26[5];
typedef Q_WORDDATA type_27[2];
typedef unsigned char type_28[16];
typedef Q_WORDDATA type_29[2];
typedef int type_30[4];
typedef unsigned char type_31[16];
typedef unsigned char type_32[16];
typedef Q_WORDDATA type_33[2];
typedef short type_34[8];
typedef Q_WORDDATA type_35[5];
typedef char type_36[16];
typedef Q_WORDDATA type_37[2];
typedef unsigned long type_38[2];
typedef Q_WORDDATA type_39[2];
typedef Q_WORDDATA type_40[2];
typedef Q_WORDDATA type_41[48];
typedef Q_WORDDATA type_42[2];
typedef Q_WORDDATA type_43[96];
typedef Q_WORDDATA type_44[2];
typedef sh2gfw_TexMAN* type_45[96];
typedef Q_WORDDATA type_46[2];
typedef sh2gfw_TexMAN type_47[96];
typedef Q_WORDDATA type_48[2];
typedef sh2gfw_GIFTAG_HEAD* type_49[16];
typedef Q_WORDDATA type_50[2];
typedef unsigned char type_51[8];
typedef Q_WORDDATA type_52[6];
typedef unsigned char type_53[8][8];
typedef Q_WORDDATA type_54[2];
typedef unsigned short type_55[10];
typedef Q_WORDDATA type_56[3];
typedef Q_WORDDATA type_57[6];
typedef Q_WORDDATA type_58[524288];
typedef Q_WORDDATA type_59[7];
typedef unsigned int type_60[3];
typedef unsigned int type_61[3];
typedef unsigned int type_62[3];
typedef Q_WORDDATA type_63[35328];
typedef unsigned int type_64[3];
typedef unsigned int type_65[3];
typedef unsigned int type_66[24];
typedef Q_WORDDATA type_67[8192];
typedef unsigned int type_68[3];
typedef unsigned int type_69[3];
typedef unsigned char type_70[7];
typedef Q_WORDDATA type_71[12288];
typedef unsigned char type_72[7];
typedef unsigned short type_73[8];
typedef unsigned short type_74[7];
typedef Q_WORDDATA type_75[4096];
typedef unsigned char* type_76[7];
typedef sh2gfw_BLOCK_MAN type_77[6];
typedef Q_WORDDATA type_78[16384];
typedef Q_WORDDATA type_79[512];
typedef unsigned short type_80[3];
typedef unsigned short type_81[3];
typedef Q_WORDDATA type_82[512];
typedef float type_83[4];
typedef float type_84[4];
typedef float type_85[4][4];
typedef float type_86[4][2];
typedef _anon5 type_87[3];
typedef shGsDrawEnv type_88[3];
typedef shGsStencilDrawEnv type_89[3];
typedef shGsTinyDrawEnv type_90[6];
typedef sh2gfw_GSREGS_HEAD* type_91[4];
typedef Q_WORDDATA type_92[10];
typedef Q_WORDDATA type_93[10];
typedef sh2gfw_GIFTAG_HEAD* type_94[16];
typedef sh2gfw_GIFTAG_HEAD* type_95[16][4];
typedef Q_WORDDATA type_96[10];
typedef unsigned short type_97[8];
typedef unsigned short type_98[8][16];
typedef unsigned short type_99[8][16][4];
typedef Q_WORDDATA type_100[10];
typedef sh2gfw_TEX_HEAD* type_101[4];
typedef Q_WORDDATA type_102[10];
typedef Q_WORDDATA type_103[10];
typedef sh2gfw_CLUTS_HEAD* type_104[4];
typedef Q_WORDDATA type_105[10];

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

struct _anon0
{
	struct
	{
		unsigned long NLOOP : 15;
		unsigned long EOP : 1;
		unsigned long pad16 : 16;
		unsigned long id : 14;
		unsigned long PRE : 1;
		unsigned long PRIM : 11;
		unsigned long FLG : 2;
		unsigned long NREG : 4;
	};
	struct
	{
		unsigned long REGS0 : 4;
		unsigned long REGS1 : 4;
		unsigned long REGS2 : 4;
		unsigned long REGS3 : 4;
		unsigned long REGS4 : 4;
		unsigned long REGS5 : 4;
		unsigned long REGS6 : 4;
		unsigned long REGS7 : 4;
		unsigned long REGS8 : 4;
		unsigned long REGS9 : 4;
		unsigned long REGS10 : 4;
		unsigned long REGS11 : 4;
		unsigned long REGS12 : 4;
		unsigned long REGS13 : 4;
		unsigned long REGS14 : 4;
		unsigned long REGS15 : 4;
	};
};

struct _anon1
{
	struct
	{
		unsigned long CLAMP : 1;
		unsigned long pad01 : 63;
	};
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

struct _anon2
{
	struct
	{
		unsigned int INT : 1;
		unsigned int FFMD : 1;
		unsigned int DPMS : 2;
		unsigned int p0 : 28;
	};
	unsigned int p1;
};

struct _anon3
{
	struct
	{
		unsigned long OFX : 16;
		unsigned long pad16 : 16;
		unsigned long OFY : 16;
		unsigned long pad48 : 16;
	};
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
	_anon17 blk_LightData;
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

struct shGsDrawEnv
{
	_anon0 giftag;
	_anon9 draw;
	Q_WORDDATA drawq2[5];
	_anon15 clear;
	_anon0 giftag_nc;
	_anon9 draw_nc;
	Q_WORDDATA drawq2_nc[5];
	Q_WORDDATA gifad_frame_normal;
	Q_WORDDATA frame_normal;
	Q_WORDDATA gifad_frame_mskalpha;
	Q_WORDDATA frame_mskalpha;
	Q_WORDDATA gifad_frame_mskDalpha;
	Q_WORDDATA frame_mskDalpha;
	Q_WORDDATA gifad_frame_mskRGB;
	Q_WORDDATA frame_mskRGB;
};

struct _anon4
{
	struct
	{
		unsigned long X : 16;
		unsigned long Y : 16;
		unsigned long Z : 32;
	};
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

struct _anon5
{
	_anon19 pmode;
	_anon2 smode2;
	_anon20 dispfb;
	_anon6 display;
	_anon8 bgcolor;
};

struct sh2gfw_VU_HEAD
{
	unsigned short vuparm[10];
	unsigned char vukind;
	unsigned char vuamount;
	unsigned char eop_flg;
	unsigned char padc;
	unsigned int vupartsize;
	unsigned int toNextVUPART;
};

struct _anon6
{
	struct
	{
		unsigned int DX : 12;
		unsigned int DY : 11;
		unsigned int MAGH : 4;
		unsigned int MAGV : 2;
		unsigned int p0 : 3;
	};
	struct
	{
		unsigned int DW : 12;
		unsigned int DH : 11;
		unsigned int p1 : 9;
	};
};

struct _anon7
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

struct _anon8
{
	struct
	{
		unsigned int R : 8;
		unsigned int G : 8;
		unsigned int B : 8;
		unsigned int p0 : 8;
	};
	unsigned int p1;
};

struct _anon9
{
	_anon18 frame1;
	unsigned long frame1addr;
	_anon10 zbuf1;
	long zbuf1addr;
	_anon3 xyoffset1;
	long xyoffset1addr;
	_anon16 scissor1;
	long scissor1addr;
	_anon12 prmodecont;
	long prmodecontaddr;
	_anon1 colclamp;
	long colclampaddr;
	_anon13 dthe;
	long dtheaddr;
	_anon21 test1;
	long test1addr;
};

struct _anon10
{
	struct
	{
		unsigned long ZBP : 9;
		unsigned long pad09 : 15;
		unsigned long PSM : 4;
		unsigned long pad28 : 4;
		unsigned long ZMSK : 1;
		unsigned long pad33 : 31;
	};
};

struct _anon11
{
	struct
	{
		unsigned long PRIM : 3;
		unsigned long IIP : 1;
		unsigned long TME : 1;
		unsigned long FGE : 1;
		unsigned long ABE : 1;
		unsigned long AA1 : 1;
		unsigned long FST : 1;
		unsigned long CTXT : 1;
		unsigned long FIX : 1;
		unsigned long pad11 : 53;
	};
};

struct shGsStencilDrawEnv
{
	_anon0 giftag;
	_anon9 draw;
	Q_WORDDATA alpha1;
	Q_WORDDATA drawq2[6];
	_anon15 clear;
	Q_WORDDATA frame;
	_anon0 giftag_nc;
	_anon9 draw_nc;
	Q_WORDDATA alpha1_nc;
	Q_WORDDATA drawq2_nc[6];
	Q_WORDDATA gifad_frame_normal;
	Q_WORDDATA frame_normal;
	Q_WORDDATA gifad_frame_mskalpha;
	Q_WORDDATA frame_mskalpha;
	Q_WORDDATA gifad_frame_mskDalpha;
	Q_WORDDATA frame_mskDalpha;
};

struct sh2gfw_TRANSGEOM_HEAD
{
	unsigned short vNum;
	unsigned short tileno;
	unsigned int datasize;
	unsigned int toNextTRANSGEOM;
	unsigned short unpack_format;
	unsigned short prim;
	Q_WORDDATA calcparms0;
	Q_WORDDATA calcparms1;
	Q_WORDDATA work1;
	Q_WORDDATA work2;
	Q_WORDDATA work3;
	Q_WORDDATA work4;
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

struct shGsLoopEnv
{
	unsigned int GsDrawFBPs[3];
	unsigned int GsNowDispFBPs[3];
	unsigned int GsNextDispFBPs[3];
	unsigned int GsTexTBPs[24];
	unsigned int GsShadowFBP[3];
	unsigned int GsShadowWorkFBP[3];
	unsigned short clutsize;
	unsigned short clutamount;
	unsigned short GsClutPage[8];
};

struct sh2gfw_GEOM_HEAD
{
	unsigned short tsleng;
	unsigned short tileno;
	unsigned int datasize;
	unsigned int toNextGEOM;
	unsigned short unpack_format;
	unsigned short prim;
	Q_WORDDATA calcparms0;
	Q_WORDDATA calcparms1;
	Q_WORDDATA work1;
	Q_WORDDATA work2;
	Q_WORDDATA work3;
	Q_WORDDATA work4;
};

struct _anon12
{
	struct
	{
		unsigned long AC : 1;
		unsigned long pad01 : 63;
	};
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

struct _anon13
{
	struct
	{
		unsigned long DTHE : 1;
		unsigned long pad01 : 63;
	};
};

struct _anon14
{
	struct
	{
		unsigned int R : 8;
		unsigned int G : 8;
		unsigned int B : 8;
		unsigned int A : 8;
	};
	float Q;
};

struct shGsTinyDrawEnv
{
	Q_WORDDATA giftag;
	Q_WORDDATA frame;
	Q_WORDDATA scissor;
	Q_WORDDATA xyoffset;
	Q_WORDDATA zbuf;
	Q_WORDDATA test;
	Q_WORDDATA gifad_normal;
	Q_WORDDATA frame_normal;
	Q_WORDDATA gifad_mskalpha;
	Q_WORDDATA frame_mskalpha;
	Q_WORDDATA gifad_mskDalpha;
	Q_WORDDATA frame_mskDalpha;
};

struct _anon15
{
	_anon21 testa;
	long testaaddr;
	_anon11 prim;
	long primaddr;
	_anon14 rgbaq;
	long rgbaqaddr;
	_anon4 xyz2a;
	long xyz2aaddr;
	_anon4 xyz2b;
	long xyz2baddr;
	_anon21 testb;
	long testbaddr;
};

struct sh2gfw_BLOCKLOCAL_HEAD
{
	unsigned short gsregsamount[3];
	unsigned short transamount[3];
	unsigned short ltexnum;
	unsigned short pads;
};

struct _anon16
{
	struct
	{
		unsigned long SCAX0 : 11;
		unsigned long pad11 : 5;
		unsigned long SCAX1 : 11;
		unsigned long pad27 : 5;
		unsigned long SCAY0 : 11;
		unsigned long pad43 : 5;
		unsigned long SCAY1 : 11;
		unsigned long pad59 : 5;
	};
};

struct shGsAllEnv
{
	unsigned long loop_counter;
	unsigned int loop;
	unsigned int loop3;
	shGsLoopEnv LoopEnv;
	_anon5 DispEnv[3];
	shGsDrawEnv DrawEnv[3];
	shGsStencilDrawEnv StencilBuf[3];
	shGsTinyDrawEnv StencilWork[6];
	Q_WORDDATA DefaultEnv[10];
	Q_WORDDATA StencilEnv[10];
	Q_WORDDATA CompshadowEnv[10];
	Q_WORDDATA Filter_A[10];
	Q_WORDDATA Filter_B[10];
	Q_WORDDATA Filter_C[10];
	Q_WORDDATA Filter_D[10];
	Q_WORDDATA MoveGTex[8];
	Q_WORDDATA GsReg_ALPHA_A[2];
	Q_WORDDATA GsReg_ALPHA_B[2];
	Q_WORDDATA GsReg_ALPHA_C[2];
	Q_WORDDATA GsReg_ALPHA_D[2];
	Q_WORDDATA GsReg_ALPHA_E[2];
	Q_WORDDATA GsReg_TEST_A[2];
	Q_WORDDATA GsReg_TEST_B[2];
	Q_WORDDATA GsReg_TEST_C[2];
	Q_WORDDATA GsReg_TEST_D[2];
	Q_WORDDATA GsReg_TEXA_A[2];
	Q_WORDDATA GsReg_TEXA_B[2];
	Q_WORDDATA GsReg_ZBUF_A[2];
	Q_WORDDATA GsReg_ZBUF_B[2];
	Q_WORDDATA GsReg_PABE_A[2];
	Q_WORDDATA GsReg_PABE_B[2];
	Q_WORDDATA GsReg_FBA_A[2];
	Q_WORDDATA GsReg_FBA_B[2];
	Q_WORDDATA GsReg_PRMODECONT_A[2];
	Q_WORDDATA GsReg_PRMODECONT_B[2];
	Q_WORDDATA GsSync_DummyLABEL[2];
	Q_WORDDATA GsSync_DummyTEXFLUSH[2];
	shGsDrawEnv Now_DrawEnv;
};

struct _anon17
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

struct _anon18
{
	struct
	{
		unsigned long FBP : 9;
		unsigned long pad09 : 7;
		unsigned long FBW : 6;
		unsigned long pad22 : 2;
		unsigned long PSM : 6;
		unsigned long pad30 : 2;
		unsigned long FBMSK : 32;
	};
};

struct _anon19
{
	struct
	{
		unsigned int EN1 : 1;
		unsigned int EN2 : 1;
		unsigned int CRTMD : 3;
		unsigned int MMOD : 1;
		unsigned int AMOD : 1;
		unsigned int SLBG : 1;
		unsigned int ALP : 8;
		unsigned int p0 : 16;
	};
	unsigned int p1;
};

struct _anon20
{
	struct
	{
		unsigned int FBP : 9;
		unsigned int FBW : 6;
		unsigned int PSM : 5;
		unsigned int p0 : 12;
	};
	struct
	{
		unsigned int DBX : 11;
		unsigned int DBY : 11;
		unsigned int p1 : 10;
	};
};

struct _anon21
{
	struct
	{
		unsigned long ATE : 1;
		unsigned long ATST : 3;
		unsigned long AREF : 8;
		unsigned long AFAIL : 2;
		unsigned long DATE : 1;
		unsigned long DATM : 1;
		unsigned long ZTE : 1;
		unsigned long ZTST : 2;
		unsigned long pad19 : 45;
	};
};

Q_WORDDATA BLOCK_TEXUNIT_PACK[4096];
Q_WORDDATA GEOM_PACK[16384];
Q_WORDDATA SEMITRANS_PACK[12288];
Q_WORDDATA databuf[524288];
Q_WORDDATA areabuf[35328];
Q_WORDDATA BLOCK_MAIN_PACK[512];
Q_WORDDATA MAIN_CTL_PACK[512];
Q_WORDDATA SemiTrans_Packet_Buffer[8192];
shGsAllEnv shGs_AllEnv;
Q_WORDDATA EM_env[7];
sh2gfw_ALLTEXSYNC_MAN AllTexSync_Man;
sh2gfw_BLOCK_MAN b_man[6];
_anon7 Area_Data_Man;

Q_WORDDATA* sh2gfw_Get_BTADDR(int bno);
Q_WORDDATA* sh2gfw_Get_PKTADDR(int gno);
Q_WORDDATA* sh2gfw_Get_BGDATABUF(int bno);
Q_WORDDATA* sh2gfw_Get_BGAREABUF();
Q_WORDDATA* sh2gfw_Get_TransLocalBuf();
Q_WORDDATA* sh2gfw_Get_BLOCKmainPack();
Q_WORDDATA* sh2gfw_Get_SemiTransPKADDR(int bno);
int sh2gfw_parse_HEAD(Q_WORDDATA* d_h, sh2gfw_BLOCK_MAN* pB_man, _anon7* pAMAN, sh2gfw_ALLTEXSYNC_MAN* pATSM);
int sh2gfw_parse_global(Q_WORDDATA* d_h, sh2gfw_BLOCK_MAN* pB_man, _anon7* pA_MAN);
int sh2gfw_parse_SemiTransTex(Q_WORDDATA* datahead, sh2gfw_BLOCK_MAN* pB_man);
int sh2gfw_parse_local(Q_WORDDATA* d_h, sh2gfw_BLOCK_MAN* pB_man);
int TransFormTileNo(int tileno);
int sh2gfw_packet_Poly_GlobalTexUsing(sh2gfw_BLOCK_MAN* pB_man, _anon7* pAMAN, Q_WORDDATA* b_p, Q_WORDDATA* g_p, int* pb, int* pl);
int sh2gfw_packet_Poly_LocalTexUsing(sh2gfw_BLOCK_MAN* pB_man, Q_WORDDATA* b_p, Q_WORDDATA* g_p);
int sh2gfw_packet_Poly_SemiTrans(sh2gfw_BLOCK_MAN* pB_man, Q_WORDDATA* b_p);
void PacketGIF_Pre(void* pt, sh2gfw_GIFTAG_HEAD* pGIF_H, Q_WORDDATA** ppqwd);
void PacketGIF_Post(sh2gfw_GIFTAG_HEAD* pGIF_H, Q_WORDDATA** ppqwd);
void Delete_bgBlock(void* block);
void sh2gfw_AllClear_bgBlock();
void sh2gfw_init_zeroQ_BMAN(sh2gfw_BLOCK_MAN* pB_man);

// 
// Start address: 0x1869c0
Q_WORDDATA* sh2gfw_Get_BTADDR(int bno)
{
	// Line 72, Address: 0x1869c0, Func Offset: 0
	// Line 74, Address: 0x1869c8, Func Offset: 0x8
	// Line 75, Address: 0x1869e0, Func Offset: 0x20
	// Func End, Address: 0x1869ec, Func Offset: 0x2c
}

// 
// Start address: 0x1869f0
Q_WORDDATA* sh2gfw_Get_PKTADDR(int gno)
{
	// Line 77, Address: 0x1869f0, Func Offset: 0
	// Line 79, Address: 0x1869f8, Func Offset: 0x8
	// Line 80, Address: 0x186a10, Func Offset: 0x20
	// Func End, Address: 0x186a1c, Func Offset: 0x2c
}

// 
// Start address: 0x186a20
Q_WORDDATA* sh2gfw_Get_BGDATABUF(int bno)
{
	// Line 88, Address: 0x186a20, Func Offset: 0
	// Line 89, Address: 0x186a28, Func Offset: 0x8
	// Line 90, Address: 0x186a40, Func Offset: 0x20
	// Func End, Address: 0x186a4c, Func Offset: 0x2c
}

// 
// Start address: 0x186a50
Q_WORDDATA* sh2gfw_Get_BGAREABUF()
{
	// Line 94, Address: 0x186a50, Func Offset: 0
	// Line 96, Address: 0x186a58, Func Offset: 0x8
	// Func End, Address: 0x186a60, Func Offset: 0x10
}

// 
// Start address: 0x186a60
Q_WORDDATA* sh2gfw_Get_TransLocalBuf()
{
	// Line 100, Address: 0x186a60, Func Offset: 0
	// Line 102, Address: 0x186a68, Func Offset: 0x8
	// Func End, Address: 0x186a70, Func Offset: 0x10
}

// 
// Start address: 0x186a70
Q_WORDDATA* sh2gfw_Get_BLOCKmainPack()
{
	// Line 106, Address: 0x186a70, Func Offset: 0
	// Line 107, Address: 0x186a78, Func Offset: 0x8
	// Func End, Address: 0x186a80, Func Offset: 0x10
}

// 
// Start address: 0x186a80
Q_WORDDATA* sh2gfw_Get_SemiTransPKADDR(int bno)
{
	// Line 114, Address: 0x186a80, Func Offset: 0
	// Line 116, Address: 0x186a88, Func Offset: 0x8
	// Line 117, Address: 0x186aa0, Func Offset: 0x20
	// Func End, Address: 0x186aac, Func Offset: 0x2c
}

// 
// Start address: 0x186ab0
int sh2gfw_parse_HEAD(Q_WORDDATA* d_h, sh2gfw_BLOCK_MAN* pB_man, _anon7* pAMAN, sh2gfw_ALLTEXSYNC_MAN* pATSM)
{
	Q_WORDDATA* datahead;
	unsigned int id;
	unsigned int itex;
	// Line 140, Address: 0x186ab0, Func Offset: 0
	// Line 141, Address: 0x186ad4, Func Offset: 0x24
	// Line 144, Address: 0x186adc, Func Offset: 0x2c
	// Line 147, Address: 0x186ae0, Func Offset: 0x30
	// Line 148, Address: 0x186ae8, Func Offset: 0x38
	// Line 150, Address: 0x186afc, Func Offset: 0x4c
	// Line 151, Address: 0x186b10, Func Offset: 0x60
	// Line 153, Address: 0x186b20, Func Offset: 0x70
	// Line 162, Address: 0x186b34, Func Offset: 0x84
	// Line 164, Address: 0x186b44, Func Offset: 0x94
	// Line 170, Address: 0x186b54, Func Offset: 0xa4
	// Line 173, Address: 0x186b5c, Func Offset: 0xac
	// Line 175, Address: 0x186b64, Func Offset: 0xb4
	// Line 180, Address: 0x186b6c, Func Offset: 0xbc
	// Line 183, Address: 0x186b78, Func Offset: 0xc8
	// Line 187, Address: 0x186ba4, Func Offset: 0xf4
	// Line 199, Address: 0x186bd0, Func Offset: 0x120
	// Line 203, Address: 0x186c20, Func Offset: 0x170
	// Line 206, Address: 0x186c3c, Func Offset: 0x18c
	// Line 207, Address: 0x186c5c, Func Offset: 0x1ac
	// Line 211, Address: 0x186c74, Func Offset: 0x1c4
	// Line 214, Address: 0x186c8c, Func Offset: 0x1dc
	// Line 216, Address: 0x186ca4, Func Offset: 0x1f4
	// Line 217, Address: 0x186cb0, Func Offset: 0x200
	// Line 218, Address: 0x186cbc, Func Offset: 0x20c
	// Line 220, Address: 0x186cc8, Func Offset: 0x218
	// Line 222, Address: 0x186cd8, Func Offset: 0x228
	// Line 224, Address: 0x186ce4, Func Offset: 0x234
	// Func End, Address: 0x186d00, Func Offset: 0x250
}

// 
// Start address: 0x186d00
int sh2gfw_parse_global(Q_WORDDATA* d_h, sh2gfw_BLOCK_MAN* pB_man, _anon7* pA_MAN)
{
	sh2gfw_GEOM_HEAD* sge;
	sh2gfw_TRANSGEOM_HEAD* strge;
	sh2gfw_VU_HEAD* pVU_H;
	int trnum;
	Q_WORDDATA* datahead;
	int ivv;
	int igg;
	unsigned int id;
	unsigned int itex;
	// Line 245, Address: 0x186d00, Func Offset: 0
	// Line 246, Address: 0x186d38, Func Offset: 0x38
	// Line 247, Address: 0x186d40, Func Offset: 0x40
	// Line 249, Address: 0x186d48, Func Offset: 0x48
	// Line 251, Address: 0x186d4c, Func Offset: 0x4c
	// Line 258, Address: 0x186d50, Func Offset: 0x50
	// Line 260, Address: 0x186d58, Func Offset: 0x58
	// Line 262, Address: 0x186d6c, Func Offset: 0x6c
	// Line 263, Address: 0x186d74, Func Offset: 0x74
	// Line 264, Address: 0x186d7c, Func Offset: 0x7c
	// Line 267, Address: 0x186d84, Func Offset: 0x84
	// Line 268, Address: 0x186d88, Func Offset: 0x88
	// Line 269, Address: 0x186d98, Func Offset: 0x98
	// Line 273, Address: 0x186da0, Func Offset: 0xa0
	// Line 278, Address: 0x186db0, Func Offset: 0xb0
	// Line 281, Address: 0x186db4, Func Offset: 0xb4
	// Line 285, Address: 0x186dd8, Func Offset: 0xd8
	// Line 286, Address: 0x186de0, Func Offset: 0xe0
	// Line 290, Address: 0x186de4, Func Offset: 0xe4
	// Line 292, Address: 0x186df8, Func Offset: 0xf8
	// Line 294, Address: 0x186e14, Func Offset: 0x114
	// Line 295, Address: 0x186e3c, Func Offset: 0x13c
	// Line 297, Address: 0x186e44, Func Offset: 0x144
	// Line 300, Address: 0x186e48, Func Offset: 0x148
	// Line 302, Address: 0x186e4c, Func Offset: 0x14c
	// Line 307, Address: 0x186e68, Func Offset: 0x168
	// Line 311, Address: 0x186e78, Func Offset: 0x178
	// Line 312, Address: 0x186e7c, Func Offset: 0x17c
	// Line 313, Address: 0x186e80, Func Offset: 0x180
	// Line 314, Address: 0x186e94, Func Offset: 0x194
	// Line 316, Address: 0x186ea4, Func Offset: 0x1a4
	// Line 317, Address: 0x186eb4, Func Offset: 0x1b4
	// Line 318, Address: 0x186eb8, Func Offset: 0x1b8
	// Line 328, Address: 0x186ebc, Func Offset: 0x1bc
	// Line 330, Address: 0x186ecc, Func Offset: 0x1cc
	// Line 331, Address: 0x186ed8, Func Offset: 0x1d8
	// Line 333, Address: 0x186ee4, Func Offset: 0x1e4
	// Line 339, Address: 0x186eec, Func Offset: 0x1ec
	// Line 340, Address: 0x186ef0, Func Offset: 0x1f0
	// Line 341, Address: 0x186ef4, Func Offset: 0x1f4
	// Line 343, Address: 0x186f08, Func Offset: 0x208
	// Line 346, Address: 0x186f20, Func Offset: 0x220
	// Line 347, Address: 0x186f24, Func Offset: 0x224
	// Line 354, Address: 0x186f40, Func Offset: 0x240
	// Line 355, Address: 0x186f50, Func Offset: 0x250
	// Line 357, Address: 0x186f5c, Func Offset: 0x25c
	// Line 361, Address: 0x186f68, Func Offset: 0x268
	// Line 362, Address: 0x186f84, Func Offset: 0x284
	// Line 366, Address: 0x186f94, Func Offset: 0x294
	// Line 368, Address: 0x186fb8, Func Offset: 0x2b8
	// Line 369, Address: 0x186fc4, Func Offset: 0x2c4
	// Line 370, Address: 0x186fe4, Func Offset: 0x2e4
	// Line 376, Address: 0x186ff0, Func Offset: 0x2f0
	// Line 379, Address: 0x187000, Func Offset: 0x300
	// Line 381, Address: 0x187014, Func Offset: 0x314
	// Line 383, Address: 0x187038, Func Offset: 0x338
	// Line 385, Address: 0x18703c, Func Offset: 0x33c
	// Func End, Address: 0x187070, Func Offset: 0x370
}

// 
// Start address: 0x187070
int sh2gfw_parse_SemiTransTex(Q_WORDDATA* datahead, sh2gfw_BLOCK_MAN* pB_man)
{
	sh2gfw_TRANSGEOM_HEAD* strge;
	sh2gfw_VU_HEAD* pVU_H;
	Q_WORDDATA* d_h;
	int igg;
	int trnum;
	// Line 394, Address: 0x187070, Func Offset: 0
	// Line 397, Address: 0x187090, Func Offset: 0x20
	// Line 399, Address: 0x187094, Func Offset: 0x24
	// Line 401, Address: 0x1870a0, Func Offset: 0x30
	// Line 402, Address: 0x1870a4, Func Offset: 0x34
	// Line 406, Address: 0x1870b0, Func Offset: 0x40
	// Line 412, Address: 0x1870c8, Func Offset: 0x58
	// Line 414, Address: 0x1870e4, Func Offset: 0x74
	// Line 415, Address: 0x187114, Func Offset: 0xa4
	// Line 417, Address: 0x18711c, Func Offset: 0xac
	// Line 423, Address: 0x187128, Func Offset: 0xb8
	// Line 424, Address: 0x18712c, Func Offset: 0xbc
	// Line 426, Address: 0x187138, Func Offset: 0xc8
	// Line 430, Address: 0x18713c, Func Offset: 0xcc
	// Line 431, Address: 0x187154, Func Offset: 0xe4
	// Line 432, Address: 0x187160, Func Offset: 0xf0
	// Line 434, Address: 0x18716c, Func Offset: 0xfc
	// Line 436, Address: 0x187188, Func Offset: 0x118
	// Line 437, Address: 0x187194, Func Offset: 0x124
	// Line 438, Address: 0x1871b4, Func Offset: 0x144
	// Line 439, Address: 0x1871b8, Func Offset: 0x148
	// Func End, Address: 0x1871d8, Func Offset: 0x168
}

// 
// Start address: 0x1871e0
int sh2gfw_parse_local(Q_WORDDATA* d_h, sh2gfw_BLOCK_MAN* pB_man)
{
	sh2gfw_GEOM_HEAD* sge;
	sh2gfw_VU_HEAD* pVU_H;
	Q_WORDDATA* datahead;
	int ivv;
	int igg;
	unsigned int itex;
	// Line 456, Address: 0x1871e0, Func Offset: 0
	// Line 461, Address: 0x187204, Func Offset: 0x24
	// Line 464, Address: 0x187208, Func Offset: 0x28
	// Line 465, Address: 0x187210, Func Offset: 0x30
	// Line 471, Address: 0x187214, Func Offset: 0x34
	// Line 474, Address: 0x187220, Func Offset: 0x40
	// Line 475, Address: 0x187230, Func Offset: 0x50
	// Line 476, Address: 0x187234, Func Offset: 0x54
	// Line 481, Address: 0x187238, Func Offset: 0x58
	// Line 483, Address: 0x187254, Func Offset: 0x74
	// Line 484, Address: 0x187278, Func Offset: 0x98
	// Line 485, Address: 0x1872a8, Func Offset: 0xc8
	// Line 487, Address: 0x1872b0, Func Offset: 0xd0
	// Line 488, Address: 0x1872b4, Func Offset: 0xd4
	// Line 490, Address: 0x1872b8, Func Offset: 0xd8
	// Line 491, Address: 0x1872bc, Func Offset: 0xdc
	// Line 494, Address: 0x1872c0, Func Offset: 0xe0
	// Line 500, Address: 0x1872c4, Func Offset: 0xe4
	// Line 502, Address: 0x1872e4, Func Offset: 0x104
	// Line 504, Address: 0x1872e8, Func Offset: 0x108
	// Line 515, Address: 0x1872ec, Func Offset: 0x10c
	// Line 520, Address: 0x187310, Func Offset: 0x130
	// Line 521, Address: 0x187320, Func Offset: 0x140
	// Line 522, Address: 0x18732c, Func Offset: 0x14c
	// Line 523, Address: 0x187348, Func Offset: 0x168
	// Line 524, Address: 0x187354, Func Offset: 0x174
	// Line 526, Address: 0x187378, Func Offset: 0x198
	// Line 529, Address: 0x18738c, Func Offset: 0x1ac
	// Line 532, Address: 0x1873ac, Func Offset: 0x1cc
	// Line 533, Address: 0x1873cc, Func Offset: 0x1ec
	// Line 536, Address: 0x1873d0, Func Offset: 0x1f0
	// Func End, Address: 0x1873f4, Func Offset: 0x214
}

// 
// Start address: 0x187400
int TransFormTileNo(int tileno)
{
	int gid;
	int iy;
	int ix;
	// Line 539, Address: 0x187400, Func Offset: 0
	// Line 543, Address: 0x187414, Func Offset: 0x14
	// Line 544, Address: 0x18741c, Func Offset: 0x1c
	// Line 546, Address: 0x187424, Func Offset: 0x24
	// Line 547, Address: 0x18743c, Func Offset: 0x3c
	// Line 548, Address: 0x187440, Func Offset: 0x40
	// Line 549, Address: 0x187460, Func Offset: 0x60
	// Line 552, Address: 0x187464, Func Offset: 0x64
	// Line 553, Address: 0x18747c, Func Offset: 0x7c
	// Line 554, Address: 0x187480, Func Offset: 0x80
	// Line 555, Address: 0x1874a0, Func Offset: 0xa0
	// Line 557, Address: 0x1874a4, Func Offset: 0xa4
	// Line 559, Address: 0x1874b0, Func Offset: 0xb0
	// Line 560, Address: 0x1874bc, Func Offset: 0xbc
	// Line 563, Address: 0x1874c0, Func Offset: 0xc0
	// Line 564, Address: 0x1874c4, Func Offset: 0xc4
	// Func End, Address: 0x1874dc, Func Offset: 0xdc
}

// 
// Start address: 0x1874e0
int sh2gfw_packet_Poly_GlobalTexUsing(sh2gfw_BLOCK_MAN* pB_man, _anon7* pAMAN, Q_WORDDATA* b_p, Q_WORDDATA* g_p, int* pb, int* pl)
{
	int gid;
	sh2gfw_GEOM_HEAD* pGEOM_H;
	sh2gfw_VU_HEAD* pVU_H;
	sh2gfw_GIFTAG_HEAD* pGIF_H;
	int ivv;
	int execaddr;
	int tslmax;
	int j;
	int i;
	unsigned int vunum;
	unsigned int gnum;
	Q_WORDDATA* g_pack;
	Q_WORDDATA* b_pack;
	Q_WORDDATA* d_pt;
	// Line 610, Address: 0x1874e0, Func Offset: 0
	// Line 618, Address: 0x187524, Func Offset: 0x44
	// Line 619, Address: 0x18752c, Func Offset: 0x4c
	// Line 623, Address: 0x187534, Func Offset: 0x54
	// Line 626, Address: 0x187544, Func Offset: 0x64
	// Line 630, Address: 0x187550, Func Offset: 0x70
	// Line 631, Address: 0x187590, Func Offset: 0xb0
	// Line 633, Address: 0x18759c, Func Offset: 0xbc
	// Line 634, Address: 0x1875a8, Func Offset: 0xc8
	// Line 638, Address: 0x1875ac, Func Offset: 0xcc
	// Line 639, Address: 0x1875bc, Func Offset: 0xdc
	// Line 641, Address: 0x1875c0, Func Offset: 0xe0
	// Line 643, Address: 0x1875cc, Func Offset: 0xec
	// Line 645, Address: 0x1875d8, Func Offset: 0xf8
	// Line 650, Address: 0x1875f0, Func Offset: 0x110
	// Line 651, Address: 0x187630, Func Offset: 0x150
	// Line 652, Address: 0x187668, Func Offset: 0x188
	// Line 657, Address: 0x187688, Func Offset: 0x1a8
	// Line 669, Address: 0x1876ec, Func Offset: 0x20c
	// Line 670, Address: 0x187704, Func Offset: 0x224
	// Line 672, Address: 0x187708, Func Offset: 0x228
	// Line 674, Address: 0x18771c, Func Offset: 0x23c
	// Line 679, Address: 0x187728, Func Offset: 0x248
	// Line 682, Address: 0x18772c, Func Offset: 0x24c
	// Line 686, Address: 0x187770, Func Offset: 0x290
	// Line 687, Address: 0x187794, Func Offset: 0x2b4
	// Line 691, Address: 0x187798, Func Offset: 0x2b8
	// Line 692, Address: 0x18779c, Func Offset: 0x2bc
	// Line 693, Address: 0x1877b0, Func Offset: 0x2d0
	// Line 694, Address: 0x1877e0, Func Offset: 0x300
	// Line 695, Address: 0x1877f0, Func Offset: 0x310
	// Line 697, Address: 0x1877f8, Func Offset: 0x318
	// Line 699, Address: 0x18780c, Func Offset: 0x32c
	// Line 700, Address: 0x187844, Func Offset: 0x364
	// Line 702, Address: 0x187848, Func Offset: 0x368
	// Line 705, Address: 0x187854, Func Offset: 0x374
	// Line 707, Address: 0x187878, Func Offset: 0x398
	// Line 709, Address: 0x187898, Func Offset: 0x3b8
	// Line 710, Address: 0x1878a8, Func Offset: 0x3c8
	// Line 712, Address: 0x1878b4, Func Offset: 0x3d4
	// Line 714, Address: 0x1878c8, Func Offset: 0x3e8
	// Line 715, Address: 0x1878d8, Func Offset: 0x3f8
	// Line 717, Address: 0x1878f0, Func Offset: 0x410
	// Line 719, Address: 0x187918, Func Offset: 0x438
	// Line 721, Address: 0x187948, Func Offset: 0x468
	// Line 722, Address: 0x187974, Func Offset: 0x494
	// Line 725, Address: 0x1879a0, Func Offset: 0x4c0
	// Line 727, Address: 0x1879a4, Func Offset: 0x4c4
	// Func End, Address: 0x1879d8, Func Offset: 0x4f8
}

// 
// Start address: 0x1879e0
int sh2gfw_packet_Poly_LocalTexUsing(sh2gfw_BLOCK_MAN* pB_man, Q_WORDDATA* b_p, Q_WORDDATA* g_p)
{
	int gid;
	sh2gfw_GEOM_HEAD* pGEOM_H;
	sh2gfw_VU_HEAD* pVU_H;
	sh2gfw_GIFTAG_HEAD* pGIF_H;
	int ivv;
	int execaddr;
	int tslmax;
	int j;
	int i;
	int itex;
	unsigned int vunum;
	unsigned int gnum;
	sh2gfw_TexMAN* pTM;
	Q_WORDDATA* g_pack;
	Q_WORDDATA* b_pack;
	Q_WORDDATA* d_pt;
	// Line 744, Address: 0x1879e0, Func Offset: 0
	// Line 753, Address: 0x187a18, Func Offset: 0x38
	// Line 754, Address: 0x187a20, Func Offset: 0x40
	// Line 758, Address: 0x187a28, Func Offset: 0x48
	// Line 760, Address: 0x187a34, Func Offset: 0x54
	// Line 761, Address: 0x187a48, Func Offset: 0x68
	// Line 762, Address: 0x187a58, Func Offset: 0x78
	// Line 763, Address: 0x187a6c, Func Offset: 0x8c
	// Line 769, Address: 0x187a80, Func Offset: 0xa0
	// Line 770, Address: 0x187abc, Func Offset: 0xdc
	// Line 773, Address: 0x187ac8, Func Offset: 0xe8
	// Line 774, Address: 0x187ad4, Func Offset: 0xf4
	// Line 777, Address: 0x187adc, Func Offset: 0xfc
	// Line 778, Address: 0x187af4, Func Offset: 0x114
	// Line 781, Address: 0x187af8, Func Offset: 0x118
	// Line 782, Address: 0x187b38, Func Offset: 0x158
	// Line 783, Address: 0x187b70, Func Offset: 0x190
	// Line 790, Address: 0x187b90, Func Offset: 0x1b0
	// Line 802, Address: 0x187bf0, Func Offset: 0x210
	// Line 803, Address: 0x187c04, Func Offset: 0x224
	// Line 805, Address: 0x187c08, Func Offset: 0x228
	// Line 807, Address: 0x187c14, Func Offset: 0x234
	// Line 809, Address: 0x187c2c, Func Offset: 0x24c
	// Line 810, Address: 0x187c30, Func Offset: 0x250
	// Line 812, Address: 0x187c4c, Func Offset: 0x26c
	// Line 817, Address: 0x187c58, Func Offset: 0x278
	// Line 820, Address: 0x187c5c, Func Offset: 0x27c
	// Line 824, Address: 0x187cbc, Func Offset: 0x2dc
	// Line 826, Address: 0x187ce8, Func Offset: 0x308
	// Line 829, Address: 0x187cec, Func Offset: 0x30c
	// Line 830, Address: 0x187cf0, Func Offset: 0x310
	// Line 831, Address: 0x187cf4, Func Offset: 0x314
	// Line 832, Address: 0x187d08, Func Offset: 0x328
	// Line 833, Address: 0x187d38, Func Offset: 0x358
	// Line 834, Address: 0x187d48, Func Offset: 0x368
	// Line 836, Address: 0x187d50, Func Offset: 0x370
	// Line 837, Address: 0x187d64, Func Offset: 0x384
	// Line 838, Address: 0x187d9c, Func Offset: 0x3bc
	// Line 839, Address: 0x187da0, Func Offset: 0x3c0
	// Line 841, Address: 0x187dac, Func Offset: 0x3cc
	// Line 843, Address: 0x187dd0, Func Offset: 0x3f0
	// Line 845, Address: 0x187df0, Func Offset: 0x410
	// Line 846, Address: 0x187e00, Func Offset: 0x420
	// Line 847, Address: 0x187e0c, Func Offset: 0x42c
	// Line 850, Address: 0x187e20, Func Offset: 0x440
	// Line 852, Address: 0x187e30, Func Offset: 0x450
	// Line 854, Address: 0x187e48, Func Offset: 0x468
	// Line 855, Address: 0x187e70, Func Offset: 0x490
	// Line 857, Address: 0x187eb0, Func Offset: 0x4d0
	// Line 859, Address: 0x187ed0, Func Offset: 0x4f0
	// Line 860, Address: 0x187ed4, Func Offset: 0x4f4
	// Func End, Address: 0x187f08, Func Offset: 0x528
}

// 
// Start address: 0x187f10
int sh2gfw_packet_Poly_SemiTrans(sh2gfw_BLOCK_MAN* pB_man, Q_WORDDATA* b_p)
{
	sh2gfw_VU_HEAD* pVU_H;
	Q_WORDDATA info;
	Q_WORDDATA* pHL;
	Q_WORDDATA* pHG;
	sh2gfw_TRANSGEOM_HEAD* pTRGEOM_H;
	Q_WORDDATA* head;
	int kk;
	int j;
	int i;
	// Line 874, Address: 0x187f10, Func Offset: 0
	// Line 875, Address: 0x187f3c, Func Offset: 0x2c
	// Line 879, Address: 0x187f44, Func Offset: 0x34
	// Line 881, Address: 0x187f58, Func Offset: 0x48
	// Line 886, Address: 0x187f60, Func Offset: 0x50
	// Line 892, Address: 0x187f88, Func Offset: 0x78
	// Line 894, Address: 0x187f90, Func Offset: 0x80
	// Line 896, Address: 0x187f9c, Func Offset: 0x8c
	// Line 897, Address: 0x187fb8, Func Offset: 0xa8
	// Line 898, Address: 0x187fbc, Func Offset: 0xac
	// Line 900, Address: 0x187fcc, Func Offset: 0xbc
	// Line 901, Address: 0x187fe4, Func Offset: 0xd4
	// Line 903, Address: 0x187fe8, Func Offset: 0xd8
	// Line 908, Address: 0x187ff4, Func Offset: 0xe4
	// Line 910, Address: 0x187ff8, Func Offset: 0xe8
	// Line 922, Address: 0x187ffc, Func Offset: 0xec
	// Line 929, Address: 0x188024, Func Offset: 0x114
	// Line 930, Address: 0x188034, Func Offset: 0x124
	// Line 932, Address: 0x188040, Func Offset: 0x130
	// Line 934, Address: 0x188064, Func Offset: 0x154
	// Line 935, Address: 0x188078, Func Offset: 0x168
	// Line 936, Address: 0x188084, Func Offset: 0x174
	// Line 937, Address: 0x1880a8, Func Offset: 0x198
	// Line 938, Address: 0x1880b0, Func Offset: 0x1a0
	// Line 940, Address: 0x1880c4, Func Offset: 0x1b4
	// Line 947, Address: 0x1880d0, Func Offset: 0x1c0
	// Line 949, Address: 0x1880e0, Func Offset: 0x1d0
	// Line 950, Address: 0x1880e8, Func Offset: 0x1d8
	// Line 952, Address: 0x1880f0, Func Offset: 0x1e0
	// Line 954, Address: 0x1880fc, Func Offset: 0x1ec
	// Line 955, Address: 0x188100, Func Offset: 0x1f0
	// Line 957, Address: 0x188104, Func Offset: 0x1f4
	// Line 960, Address: 0x188110, Func Offset: 0x200
	// Line 961, Address: 0x188120, Func Offset: 0x210
	// Line 962, Address: 0x188124, Func Offset: 0x214
	// Line 964, Address: 0x18813c, Func Offset: 0x22c
	// Line 966, Address: 0x188140, Func Offset: 0x230
	// Line 968, Address: 0x188144, Func Offset: 0x234
	// Line 971, Address: 0x18814c, Func Offset: 0x23c
	// Line 973, Address: 0x188150, Func Offset: 0x240
	// Line 985, Address: 0x188154, Func Offset: 0x244
	// Line 992, Address: 0x18817c, Func Offset: 0x26c
	// Line 993, Address: 0x18818c, Func Offset: 0x27c
	// Line 995, Address: 0x188198, Func Offset: 0x288
	// Line 997, Address: 0x1881a4, Func Offset: 0x294
	// Line 998, Address: 0x1881b8, Func Offset: 0x2a8
	// Line 999, Address: 0x1881c4, Func Offset: 0x2b4
	// Line 1002, Address: 0x1881e4, Func Offset: 0x2d4
	// Line 1003, Address: 0x1881f4, Func Offset: 0x2e4
	// Line 1004, Address: 0x188200, Func Offset: 0x2f0
	// Line 1005, Address: 0x188208, Func Offset: 0x2f8
	// Line 1009, Address: 0x188214, Func Offset: 0x304
	// Line 1011, Address: 0x188220, Func Offset: 0x310
	// Line 1012, Address: 0x188228, Func Offset: 0x318
	// Line 1014, Address: 0x188230, Func Offset: 0x320
	// Line 1021, Address: 0x188238, Func Offset: 0x328
	// Line 1022, Address: 0x188254, Func Offset: 0x344
	// Line 1023, Address: 0x188264, Func Offset: 0x354
	// Line 1026, Address: 0x188280, Func Offset: 0x370
	// Line 1027, Address: 0x1882a4, Func Offset: 0x394
	// Func End, Address: 0x1882d0, Func Offset: 0x3c0
}

// 
// Start address: 0x1882d0
void PacketGIF_Pre(void* pt, sh2gfw_GIFTAG_HEAD* pGIF_H, Q_WORDDATA** ppqwd)
{
	sh2gfw_TexMAN* pTM;
	<unknown fundamental type (0xa510)>* pk;
	Q_WORDDATA* pqwd;
	// Line 1068, Address: 0x1882d0, Func Offset: 0
	// Line 1069, Address: 0x1882f0, Func Offset: 0x20
	// Line 1071, Address: 0x1882f8, Func Offset: 0x28
	// Line 1077, Address: 0x1882fc, Func Offset: 0x2c
	// Line 1078, Address: 0x188334, Func Offset: 0x64
	// Line 1092, Address: 0x188380, Func Offset: 0xb0
	// Line 1093, Address: 0x188390, Func Offset: 0xc0
	// Line 1094, Address: 0x1883d0, Func Offset: 0x100
	// Line 1095, Address: 0x1883d4, Func Offset: 0x104
	// Line 1096, Address: 0x1883f4, Func Offset: 0x124
	// Line 1097, Address: 0x188430, Func Offset: 0x160
	// Line 1101, Address: 0x188438, Func Offset: 0x168
	// Line 1102, Address: 0x188444, Func Offset: 0x174
	// Line 1105, Address: 0x188448, Func Offset: 0x178
	// Line 1110, Address: 0x188450, Func Offset: 0x180
	// Line 1115, Address: 0x18846c, Func Offset: 0x19c
	// Line 1117, Address: 0x188474, Func Offset: 0x1a4
	// Func End, Address: 0x188490, Func Offset: 0x1c0
}

// 
// Start address: 0x188490
void PacketGIF_Post(sh2gfw_GIFTAG_HEAD* pGIF_H, Q_WORDDATA** ppqwd)
{
	<unknown fundamental type (0xa510)>* pk;
	Q_WORDDATA* pqwd;
	// Line 1129, Address: 0x188490, Func Offset: 0
	// Line 1130, Address: 0x1884a8, Func Offset: 0x18
	// Line 1135, Address: 0x1884b0, Func Offset: 0x20
	// Line 1143, Address: 0x1884fc, Func Offset: 0x6c
	// Line 1144, Address: 0x188508, Func Offset: 0x78
	// Line 1147, Address: 0x18850c, Func Offset: 0x7c
	// Line 1152, Address: 0x188514, Func Offset: 0x84
	// Line 1157, Address: 0x188530, Func Offset: 0xa0
	// Line 1158, Address: 0x188538, Func Offset: 0xa8
	// Func End, Address: 0x188550, Func Offset: 0xc0
}

// 
// Start address: 0x188550
void Delete_bgBlock(void* block)
{
	sh2gfw_BLOCK_MAN* pBM;
	void* pDel;
	int i;
	// Line 1170, Address: 0x188550, Func Offset: 0
	// Line 1173, Address: 0x188568, Func Offset: 0x18
	// Line 1178, Address: 0x18856c, Func Offset: 0x1c
	// Line 1179, Address: 0x188578, Func Offset: 0x28
	// Line 1180, Address: 0x188598, Func Offset: 0x48
	// Line 1181, Address: 0x1885c8, Func Offset: 0x78
	// Line 1183, Address: 0x1885e0, Func Offset: 0x90
	// Line 1185, Address: 0x1885ec, Func Offset: 0x9c
	// Func End, Address: 0x188608, Func Offset: 0xb8
}

// 
// Start address: 0x188610
void sh2gfw_AllClear_bgBlock()
{
	int i;
	// Line 1192, Address: 0x188610, Func Offset: 0
	// Line 1197, Address: 0x18861c, Func Offset: 0xc
	// Line 1198, Address: 0x188628, Func Offset: 0x18
	// Line 1201, Address: 0x18866c, Func Offset: 0x5c
	// Line 1202, Address: 0x188674, Func Offset: 0x64
	// Func End, Address: 0x188688, Func Offset: 0x78
}

// 
// Start address: 0x188690
void sh2gfw_init_zeroQ_BMAN(sh2gfw_BLOCK_MAN* pB_man)
{
	<unknown fundamental type (0xa510)>* pl;
	int i;
	// Line 1226, Address: 0x188690, Func Offset: 0
	// Line 1230, Address: 0x1886a0, Func Offset: 0x10
	// Line 1231, Address: 0x1886a8, Func Offset: 0x18
	// Line 1232, Address: 0x1886b4, Func Offset: 0x24
	// Line 1233, Address: 0x1886c0, Func Offset: 0x30
	// Line 1234, Address: 0x1886cc, Func Offset: 0x3c
	// Line 1235, Address: 0x1886d8, Func Offset: 0x48
	// Line 1236, Address: 0x1886e4, Func Offset: 0x54
	// Line 1239, Address: 0x1886f4, Func Offset: 0x64
	// Line 1240, Address: 0x1886fc, Func Offset: 0x6c
	// Line 1241, Address: 0x188704, Func Offset: 0x74
	// Line 1242, Address: 0x18870c, Func Offset: 0x7c
	// Line 1243, Address: 0x188714, Func Offset: 0x84
	// Line 1244, Address: 0x18871c, Func Offset: 0x8c
	// Line 1245, Address: 0x188724, Func Offset: 0x94
	// Line 1246, Address: 0x18872c, Func Offset: 0x9c
	// Line 1250, Address: 0x188734, Func Offset: 0xa4
	// Line 1251, Address: 0x18873c, Func Offset: 0xac
	// Line 1252, Address: 0x188740, Func Offset: 0xb0
	// Line 1253, Address: 0x188748, Func Offset: 0xb8
	// Line 1267, Address: 0x18874c, Func Offset: 0xbc
	// Func End, Address: 0x188760, Func Offset: 0xd0
}

