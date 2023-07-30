typedef struct _anon0;
typedef struct sh2gfw_TexMAN;
typedef struct _anon1;
typedef struct sh2gfw_TRANSGEOM_HEAD;
typedef struct sh2gfw_TEX_HEAD;
typedef struct _anon2;
typedef union Q_WORDDATA;
typedef struct sh2gfw_BLOCK_MAN;
typedef struct sh2gfw_AREA_HEAD;
typedef struct shGsDrawEnv;
typedef struct sh2gfw_GIFTAG_HEAD;
typedef struct _anon3;
typedef struct sh2gfw_BLOCK_HEAD;
typedef struct sh2gfw_BLOCKGLOBAL_HEAD;
typedef struct _anon4;
typedef struct sh2gfw_BLOCKLOCAL_HEAD;
typedef struct sh2gfw_GSREGS_HEAD;
typedef struct sh2gfw_VU_HEAD;
typedef struct _anon5;
typedef struct sh2gfw_GEOM_HEAD;
typedef struct sh2gfw_CLUTS_HEAD;
typedef struct _anon6;
typedef struct shGsStencilDrawEnv;
typedef struct _anon7;
typedef struct sh2gfw_ALLTEXSYNC_MAN;
typedef struct _anon8;
typedef struct _anon9;
typedef struct _anon10;
typedef struct _anon11;
typedef struct shGsLoopEnv;
typedef struct shGsTinyDrawEnv;
typedef struct _anon12;
typedef struct _anon13;
typedef struct _anon14;
typedef struct shGsAllEnv;
typedef struct _anon15;
typedef struct _anon16;
typedef struct _anon17;
typedef struct _anon18;
typedef struct _anon19;
typedef struct _anon20;
typedef struct _anon21;


typedef Q_WORDDATA type_0[2];
typedef Q_WORDDATA type_1[2];
typedef Q_WORDDATA type_2[2];
typedef Q_WORDDATA type_3[2];
typedef Q_WORDDATA type_4[2];
typedef float type_5[4][2];
typedef Q_WORDDATA type_6[2];
typedef Q_WORDDATA type_7[2];
typedef Q_WORDDATA type_8[5];
typedef Q_WORDDATA type_9[2];
typedef Q_WORDDATA type_10[2];
typedef sh2gfw_GSREGS_HEAD* type_11[4];
typedef Q_WORDDATA type_12[2];
typedef Q_WORDDATA type_13[5];
typedef sh2gfw_GIFTAG_HEAD* type_14[16];
typedef Q_WORDDATA type_15[2];
typedef sh2gfw_GIFTAG_HEAD* type_16[16][4];
typedef Q_WORDDATA type_17[2];
typedef unsigned short type_18[8];
typedef unsigned short type_19[8][16];
typedef unsigned short type_20[8][16][4];
typedef Q_WORDDATA type_21[2];
typedef sh2gfw_TEX_HEAD* type_22[4];
typedef Q_WORDDATA type_23[2];
typedef sh2gfw_CLUTS_HEAD* type_24[4];
typedef Q_WORDDATA type_25[2];
typedef unsigned char type_26[4];
typedef Q_WORDDATA type_27[2];
typedef unsigned int type_28[4];
typedef unsigned char type_29[16];
typedef unsigned char type_30[16][4];
typedef Q_WORDDATA type_31[2];
typedef unsigned short type_32[8];
typedef unsigned char type_33[16];
typedef float type_34[4];
typedef Q_WORDDATA type_35[2];
typedef unsigned char type_36[16][16];
typedef unsigned char type_37[16][16][4];
typedef Q_WORDDATA type_38[6];
typedef Q_WORDDATA type_39[2];
typedef unsigned char type_40[16];
typedef unsigned char type_41[16];
typedef int type_42[4];
typedef short type_43[8];
typedef unsigned char type_44[16];
typedef Q_WORDDATA type_45[6];
typedef char type_46[16];
typedef void* type_47[4];
typedef unsigned long type_48[2];
typedef Q_WORDDATA* type_49[4];
typedef unsigned int type_50[4];
typedef int type_51[8];
typedef int type_52[8];
typedef unsigned int type_53[3];
typedef unsigned char type_54[16];
typedef unsigned int type_55[3];
typedef unsigned char type_56[16];
typedef unsigned int type_57[3];
typedef unsigned int type_58[24];
typedef unsigned int type_59[3];
typedef unsigned int type_60[3];
typedef Q_WORDDATA type_61[48];
typedef Q_WORDDATA type_62[17664];
typedef unsigned short type_63[8];
typedef Q_WORDDATA type_64[17664][2];
typedef sh2gfw_TexMAN type_65[96];
typedef Q_WORDDATA type_66[2048];
typedef Q_WORDDATA type_67[2048][5];
typedef sh2gfw_GIFTAG_HEAD* type_68[16];
typedef Q_WORDDATA type_69[6];
typedef unsigned short type_70[10];
typedef unsigned int type_71[3];
typedef unsigned char type_72[8];
typedef unsigned char type_73[8][8];
typedef unsigned int type_74[3];
typedef Q_WORDDATA type_75[1024];
typedef Q_WORDDATA type_76[1024][5];
typedef Q_WORDDATA type_77[3];
typedef Q_WORDDATA type_78[6144];
typedef Q_WORDDATA type_79[6144][5];
typedef sh2gfw_BLOCK_MAN type_80[6];
typedef Q_WORDDATA type_81[512];
typedef _anon16 type_82[3];
typedef shGsDrawEnv type_83[3];
typedef Q_WORDDATA type_84[512];
typedef shGsStencilDrawEnv type_85[3];
typedef shGsTinyDrawEnv type_86[6];
typedef Q_WORDDATA type_87[10];
typedef unsigned char type_88[7];
typedef Q_WORDDATA type_89[10];
typedef unsigned char type_90[7];
typedef Q_WORDDATA type_91[10];
typedef unsigned short type_92[7];
typedef Q_WORDDATA type_93[10];
typedef unsigned char* type_94[7];
typedef Q_WORDDATA type_95[10];
typedef Q_WORDDATA type_96[10];
typedef float type_97[4];
typedef Q_WORDDATA type_98[10];
typedef float type_99[4];
typedef float type_100[4][4];
typedef Q_WORDDATA type_101[8];
typedef Q_WORDDATA type_102[2];
typedef unsigned short type_103[3];
typedef unsigned short type_104[3];
typedef Q_WORDDATA type_105[2];

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

struct _anon1
{
	struct
	{
		unsigned long CLAMP : 1;
		unsigned long pad01 : 63;
	};
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

struct _anon2
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
	_anon2 blk_LightData;
};

struct sh2gfw_AREA_HEAD
{
	unsigned int area_id;
	unsigned int toGlobalTexHead;
	unsigned int toGlobalClutsHead;
	unsigned int date;
};

struct shGsDrawEnv
{
	_anon0 giftag;
	_anon19 draw;
	Q_WORDDATA drawq2[5];
	_anon8 clear;
	_anon0 giftag_nc;
	_anon19 draw_nc;
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

struct _anon4
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

struct sh2gfw_BLOCKLOCAL_HEAD
{
	unsigned short gsregsamount[3];
	unsigned short transamount[3];
	unsigned short ltexnum;
	unsigned short pads;
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

struct _anon5
{
	struct
	{
		unsigned long X : 16;
		unsigned long Y : 16;
		unsigned long Z : 32;
	};
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

struct shGsStencilDrawEnv
{
	_anon0 giftag;
	_anon19 draw;
	Q_WORDDATA alpha1;
	Q_WORDDATA drawq2[6];
	_anon8 clear;
	Q_WORDDATA frame;
	_anon0 giftag_nc;
	_anon19 draw_nc;
	Q_WORDDATA alpha1_nc;
	Q_WORDDATA drawq2_nc[6];
	Q_WORDDATA gifad_frame_normal;
	Q_WORDDATA frame_normal;
	Q_WORDDATA gifad_frame_mskalpha;
	Q_WORDDATA frame_mskalpha;
	Q_WORDDATA gifad_frame_mskDalpha;
	Q_WORDDATA frame_mskDalpha;
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

struct _anon8
{
	_anon21 testa;
	long testaaddr;
	_anon11 prim;
	long primaddr;
	_anon14 rgbaq;
	long rgbaqaddr;
	_anon5 xyz2a;
	long xyz2aaddr;
	_anon5 xyz2b;
	long xyz2baddr;
	_anon21 testb;
	long testbaddr;
};

struct _anon9
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

struct _anon12
{
	struct
	{
		unsigned long DTHE : 1;
		unsigned long pad01 : 63;
	};
};

struct _anon13
{
	struct
	{
		unsigned long AC : 1;
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

struct shGsAllEnv
{
	unsigned long loop_counter;
	unsigned int loop;
	unsigned int loop3;
	shGsLoopEnv LoopEnv;
	_anon16 DispEnv[3];
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

struct _anon15
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

struct _anon16
{
	_anon18 pmode;
	_anon4 smode2;
	_anon20 dispfb;
	_anon6 display;
	_anon9 bgcolor;
};

struct _anon17
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

struct _anon18
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

struct _anon19
{
	_anon17 frame1;
	unsigned long frame1addr;
	_anon10 zbuf1;
	long zbuf1addr;
	_anon3 xyoffset1;
	long xyoffset1addr;
	_anon15 scissor1;
	long scissor1addr;
	_anon13 prmodecont;
	long prmodecontaddr;
	_anon1 colclamp;
	long colclampaddr;
	_anon12 dthe;
	long dtheaddr;
	_anon21 test1;
	long test1addr;
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

Q_WORDDATA BLOCK_TEXUNIT_PACK[1024][5];
Q_WORDDATA GEOM_PACK[6144][5];
Q_WORDDATA areabuf[17664][2];
Q_WORDDATA BLOCK_MAIN_PACK[512];
Q_WORDDATA MAIN_CTL_PACK[512];
Q_WORDDATA SemiTrans_Packet_Buffer[2048][5];
int one_block_tupk;
int one_block_gpk;
shGsAllEnv shGs_AllEnv;
Q_WORDDATA EM_env[6];
sh2gfw_ALLTEXSYNC_MAN AllTexSync_Man;
sh2gfw_BLOCK_MAN b_man[6];
_anon7 Area_Data_Man;

Q_WORDDATA* sh2gfw_Get_BTADDR(int bno);
Q_WORDDATA* sh2gfw_Get_PKTADDR(int gno);
Q_WORDDATA* sh2gfw_Get_BGAREABUF();
Q_WORDDATA* sh2gfw_Get_TransLocalBuf();
Q_WORDDATA* sh2gfw_Get_BLOCKmainPack();
Q_WORDDATA* sh2gfw_Get_SemiTransPKADDR(int bno);
void sh2gfw_DBG_packsize(int pb, int pg);
int sh2gfw_parse_HEAD(Q_WORDDATA* d_h, sh2gfw_BLOCK_MAN* pB_man, _anon7* pAMAN, sh2gfw_ALLTEXSYNC_MAN* pATSM);
int sh2gfw_parse_global(Q_WORDDATA* d_h, sh2gfw_BLOCK_MAN* pB_man, _anon7* pA_MAN);
int sh2gfw_parse_SemiTransTex(Q_WORDDATA* datahead, sh2gfw_BLOCK_MAN* pB_man);
int sh2gfw_parse_local(Q_WORDDATA* d_h, sh2gfw_BLOCK_MAN* pB_man);
int TransFormTileNo(int tileno);
int sh2gfw_packet_Poly_GlobalTexUsing(sh2gfw_BLOCK_MAN* pB_man, _anon7* pAMAN, Q_WORDDATA* b_p, Q_WORDDATA* g_p, int* pb, int* pl);
int sh2gfw_packet_Poly_LocalTexUsing(sh2gfw_BLOCK_MAN* pB_man, Q_WORDDATA* b_p, Q_WORDDATA* g_p);
int sh2gfw_packet_Poly_SemiTrans(sh2gfw_BLOCK_MAN* pB_man, Q_WORDDATA* b_p);
void sh2gfw_Set_SpecularAlpha();
void PacketGIF_Pre(void* pt, sh2gfw_GIFTAG_HEAD* pGIF_H, Q_WORDDATA** ppqwd);
void PacketGIF_Post(sh2gfw_GIFTAG_HEAD* pGIF_H, Q_WORDDATA** ppqwd);
void sh2gfw_init_zeroQ_BMAN(sh2gfw_BLOCK_MAN* pB_man);

// 
// Start address: 0x1806f0
Q_WORDDATA* sh2gfw_Get_BTADDR(int bno)
{
	// Line 97, Address: 0x1806f0, Func Offset: 0
	// Line 98, Address: 0x180700, Func Offset: 0x10
	// Func End, Address: 0x180708, Func Offset: 0x18
}

// 
// Start address: 0x180710
Q_WORDDATA* sh2gfw_Get_PKTADDR(int gno)
{
	// Line 102, Address: 0x180710, Func Offset: 0
	// Line 103, Address: 0x180728, Func Offset: 0x18
	// Func End, Address: 0x180730, Func Offset: 0x20
}

// 
// Start address: 0x180730
Q_WORDDATA* sh2gfw_Get_BGAREABUF()
{
	// Line 117, Address: 0x180730, Func Offset: 0
	// Line 119, Address: 0x180738, Func Offset: 0x8
	// Func End, Address: 0x180740, Func Offset: 0x10
}

// 
// Start address: 0x180740
Q_WORDDATA* sh2gfw_Get_TransLocalBuf()
{
	// Line 123, Address: 0x180740, Func Offset: 0
	// Line 125, Address: 0x180748, Func Offset: 0x8
	// Func End, Address: 0x180750, Func Offset: 0x10
}

// 
// Start address: 0x180750
Q_WORDDATA* sh2gfw_Get_BLOCKmainPack()
{
	// Line 129, Address: 0x180750, Func Offset: 0
	// Line 130, Address: 0x180758, Func Offset: 0x8
	// Func End, Address: 0x180760, Func Offset: 0x10
}

// 
// Start address: 0x180760
Q_WORDDATA* sh2gfw_Get_SemiTransPKADDR(int bno)
{
	// Line 139, Address: 0x180760, Func Offset: 0
	// Line 140, Address: 0x180770, Func Offset: 0x10
	// Func End, Address: 0x180778, Func Offset: 0x18
}

// 
// Start address: 0x180780
void sh2gfw_DBG_packsize(int pb, int pg)
{
	// Line 143, Address: 0x180780, Func Offset: 0
	// Line 144, Address: 0x180788, Func Offset: 0x8
	// Line 145, Address: 0x1807bc, Func Offset: 0x3c
	// Line 147, Address: 0x1807ec, Func Offset: 0x6c
	// Func End, Address: 0x1807fc, Func Offset: 0x7c
}

// 
// Start address: 0x180800
int sh2gfw_parse_HEAD(Q_WORDDATA* d_h, sh2gfw_BLOCK_MAN* pB_man, _anon7* pAMAN, sh2gfw_ALLTEXSYNC_MAN* pATSM)
{
	Q_WORDDATA* qwdd;
	Q_WORDDATA* datahead;
	unsigned int id;
	unsigned int itex;
	// Line 173, Address: 0x180800, Func Offset: 0
	// Line 181, Address: 0x18082c, Func Offset: 0x2c
	// Line 182, Address: 0x180834, Func Offset: 0x34
	// Line 185, Address: 0x18083c, Func Offset: 0x3c
	// Line 186, Address: 0x180840, Func Offset: 0x40
	// Line 188, Address: 0x18084c, Func Offset: 0x4c
	// Line 189, Address: 0x18085c, Func Offset: 0x5c
	// Line 196, Address: 0x180870, Func Offset: 0x70
	// Line 205, Address: 0x180880, Func Offset: 0x80
	// Line 207, Address: 0x180888, Func Offset: 0x88
	// Line 213, Address: 0x180890, Func Offset: 0x90
	// Line 216, Address: 0x180898, Func Offset: 0x98
	// Line 218, Address: 0x18089c, Func Offset: 0x9c
	// Line 223, Address: 0x1808a0, Func Offset: 0xa0
	// Line 226, Address: 0x1808b0, Func Offset: 0xb0
	// Line 230, Address: 0x1808c8, Func Offset: 0xc8
	// Line 242, Address: 0x1808dc, Func Offset: 0xdc
	// Line 247, Address: 0x180908, Func Offset: 0x108
	// Line 250, Address: 0x180920, Func Offset: 0x120
	// Line 254, Address: 0x180938, Func Offset: 0x138
	// Line 256, Address: 0x18093c, Func Offset: 0x13c
	// Line 261, Address: 0x180974, Func Offset: 0x174
	// Line 264, Address: 0x180984, Func Offset: 0x184
	// Line 266, Address: 0x180994, Func Offset: 0x194
	// Line 267, Address: 0x18099c, Func Offset: 0x19c
	// Line 268, Address: 0x1809a4, Func Offset: 0x1a4
	// Line 270, Address: 0x1809ac, Func Offset: 0x1ac
	// Line 272, Address: 0x1809b4, Func Offset: 0x1b4
	// Line 274, Address: 0x1809bc, Func Offset: 0x1bc
	// Func End, Address: 0x1809e0, Func Offset: 0x1e0
}

// 
// Start address: 0x1809e0
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
	// Line 295, Address: 0x1809e0, Func Offset: 0
	// Line 297, Address: 0x180a08, Func Offset: 0x28
	// Line 301, Address: 0x180a0c, Func Offset: 0x2c
	// Line 308, Address: 0x180a10, Func Offset: 0x30
	// Line 310, Address: 0x180a14, Func Offset: 0x34
	// Line 312, Address: 0x180a24, Func Offset: 0x44
	// Line 313, Address: 0x180a28, Func Offset: 0x48
	// Line 314, Address: 0x180a2c, Func Offset: 0x4c
	// Line 317, Address: 0x180a30, Func Offset: 0x50
	// Line 318, Address: 0x180a34, Func Offset: 0x54
	// Line 319, Address: 0x180a48, Func Offset: 0x68
	// Line 323, Address: 0x180a50, Func Offset: 0x70
	// Line 335, Address: 0x180a58, Func Offset: 0x78
	// Line 336, Address: 0x180a60, Func Offset: 0x80
	// Line 340, Address: 0x180a64, Func Offset: 0x84
	// Line 342, Address: 0x180a74, Func Offset: 0x94
	// Line 344, Address: 0x180a88, Func Offset: 0xa8
	// Line 345, Address: 0x180a9c, Func Offset: 0xbc
	// Line 347, Address: 0x180aa4, Func Offset: 0xc4
	// Line 350, Address: 0x180aa8, Func Offset: 0xc8
	// Line 352, Address: 0x180aac, Func Offset: 0xcc
	// Line 357, Address: 0x180ab8, Func Offset: 0xd8
	// Line 358, Address: 0x180ac4, Func Offset: 0xe4
	// Line 361, Address: 0x180ac8, Func Offset: 0xe8
	// Line 362, Address: 0x180acc, Func Offset: 0xec
	// Line 363, Address: 0x180ad0, Func Offset: 0xf0
	// Line 364, Address: 0x180ae0, Func Offset: 0x100
	// Line 366, Address: 0x180aec, Func Offset: 0x10c
	// Line 368, Address: 0x180b00, Func Offset: 0x120
	// Line 378, Address: 0x180b04, Func Offset: 0x124
	// Line 380, Address: 0x180b14, Func Offset: 0x134
	// Line 381, Address: 0x180b20, Func Offset: 0x140
	// Line 383, Address: 0x180b2c, Func Offset: 0x14c
	// Line 389, Address: 0x180b34, Func Offset: 0x154
	// Line 390, Address: 0x180b38, Func Offset: 0x158
	// Line 391, Address: 0x180b3c, Func Offset: 0x15c
	// Line 393, Address: 0x180b4c, Func Offset: 0x16c
	// Line 395, Address: 0x180b64, Func Offset: 0x184
	// Line 396, Address: 0x180b68, Func Offset: 0x188
	// Line 397, Address: 0x180b6c, Func Offset: 0x18c
	// Line 404, Address: 0x180b7c, Func Offset: 0x19c
	// Line 405, Address: 0x180b8c, Func Offset: 0x1ac
	// Line 407, Address: 0x180b98, Func Offset: 0x1b8
	// Line 408, Address: 0x180ba4, Func Offset: 0x1c4
	// Line 411, Address: 0x180ba8, Func Offset: 0x1c8
	// Line 412, Address: 0x180bb8, Func Offset: 0x1d8
	// Line 416, Address: 0x180bc0, Func Offset: 0x1e0
	// Line 418, Address: 0x180bdc, Func Offset: 0x1fc
	// Line 419, Address: 0x180be0, Func Offset: 0x200
	// Line 420, Address: 0x180bf8, Func Offset: 0x218
	// Line 426, Address: 0x180c04, Func Offset: 0x224
	// Line 429, Address: 0x180c18, Func Offset: 0x238
	// Line 431, Address: 0x180c28, Func Offset: 0x248
	// Line 434, Address: 0x180c44, Func Offset: 0x264
	// Line 436, Address: 0x180c48, Func Offset: 0x268
	// Func End, Address: 0x180c70, Func Offset: 0x290
}

// 
// Start address: 0x180c70
int sh2gfw_parse_SemiTransTex(Q_WORDDATA* datahead, sh2gfw_BLOCK_MAN* pB_man)
{
	sh2gfw_TRANSGEOM_HEAD* strge;
	sh2gfw_VU_HEAD* pVU_H;
	Q_WORDDATA* d_h;
	int igg;
	int trnum;
	// Line 448, Address: 0x180c70, Func Offset: 0
	// Line 450, Address: 0x180c74, Func Offset: 0x4
	// Line 452, Address: 0x180c78, Func Offset: 0x8
	// Line 453, Address: 0x180c7c, Func Offset: 0xc
	// Line 457, Address: 0x180c80, Func Offset: 0x10
	// Line 463, Address: 0x180c90, Func Offset: 0x20
	// Line 465, Address: 0x180ca0, Func Offset: 0x30
	// Line 466, Address: 0x180cb4, Func Offset: 0x44
	// Line 468, Address: 0x180cbc, Func Offset: 0x4c
	// Line 474, Address: 0x180cc0, Func Offset: 0x50
	// Line 475, Address: 0x180cc4, Func Offset: 0x54
	// Line 477, Address: 0x180cc8, Func Offset: 0x58
	// Line 481, Address: 0x180ccc, Func Offset: 0x5c
	// Line 482, Address: 0x180cdc, Func Offset: 0x6c
	// Line 483, Address: 0x180ce8, Func Offset: 0x78
	// Line 485, Address: 0x180cf4, Func Offset: 0x84
	// Line 487, Address: 0x180d00, Func Offset: 0x90
	// Line 488, Address: 0x180d08, Func Offset: 0x98
	// Line 490, Address: 0x180d20, Func Offset: 0xb0
	// Func End, Address: 0x180d28, Func Offset: 0xb8
}

// 
// Start address: 0x180d30
int sh2gfw_parse_local(Q_WORDDATA* d_h, sh2gfw_BLOCK_MAN* pB_man)
{
	sh2gfw_GEOM_HEAD* sge;
	sh2gfw_VU_HEAD* pVU_H;
	Q_WORDDATA* datahead;
	int ivv;
	int igg;
	unsigned int itex;
	// Line 512, Address: 0x180d30, Func Offset: 0
	// Line 515, Address: 0x180d34, Func Offset: 0x4
	// Line 516, Address: 0x180d38, Func Offset: 0x8
	// Line 522, Address: 0x180d3c, Func Offset: 0xc
	// Line 525, Address: 0x180d48, Func Offset: 0x18
	// Line 526, Address: 0x180d54, Func Offset: 0x24
	// Line 527, Address: 0x180d58, Func Offset: 0x28
	// Line 529, Address: 0x180d5c, Func Offset: 0x2c
	// Line 532, Address: 0x180d60, Func Offset: 0x30
	// Line 534, Address: 0x180d7c, Func Offset: 0x4c
	// Line 535, Address: 0x180d8c, Func Offset: 0x5c
	// Line 536, Address: 0x180da0, Func Offset: 0x70
	// Line 538, Address: 0x180da8, Func Offset: 0x78
	// Line 539, Address: 0x180dac, Func Offset: 0x7c
	// Line 541, Address: 0x180db0, Func Offset: 0x80
	// Line 542, Address: 0x180db4, Func Offset: 0x84
	// Line 545, Address: 0x180db8, Func Offset: 0x88
	// Line 551, Address: 0x180dbc, Func Offset: 0x8c
	// Line 553, Address: 0x180ddc, Func Offset: 0xac
	// Line 555, Address: 0x180de0, Func Offset: 0xb0
	// Line 566, Address: 0x180de4, Func Offset: 0xb4
	// Line 571, Address: 0x180df4, Func Offset: 0xc4
	// Line 572, Address: 0x180e04, Func Offset: 0xd4
	// Line 573, Address: 0x180e10, Func Offset: 0xe0
	// Line 574, Address: 0x180e28, Func Offset: 0xf8
	// Line 575, Address: 0x180e34, Func Offset: 0x104
	// Line 577, Address: 0x180e44, Func Offset: 0x114
	// Line 580, Address: 0x180e50, Func Offset: 0x120
	// Line 583, Address: 0x180e70, Func Offset: 0x140
	// Line 587, Address: 0x180e88, Func Offset: 0x158
	// Func End, Address: 0x180e90, Func Offset: 0x160
}

// 
// Start address: 0x180e90
int TransFormTileNo(int tileno)
{
	int gid;
	int iy;
	int ix;
	// Line 601, Address: 0x180e90, Func Offset: 0
	// Line 604, Address: 0x180e9c, Func Offset: 0xc
	// Line 605, Address: 0x180ea0, Func Offset: 0x10
	// Line 607, Address: 0x180ea4, Func Offset: 0x14
	// Line 608, Address: 0x180ebc, Func Offset: 0x2c
	// Line 609, Address: 0x180ec0, Func Offset: 0x30
	// Line 610, Address: 0x180ee0, Func Offset: 0x50
	// Line 613, Address: 0x180ee4, Func Offset: 0x54
	// Line 614, Address: 0x180efc, Func Offset: 0x6c
	// Line 615, Address: 0x180f00, Func Offset: 0x70
	// Line 616, Address: 0x180f20, Func Offset: 0x90
	// Line 618, Address: 0x180f24, Func Offset: 0x94
	// Line 620, Address: 0x180f30, Func Offset: 0xa0
	// Line 621, Address: 0x180f3c, Func Offset: 0xac
	// Line 624, Address: 0x180f40, Func Offset: 0xb0
	// Line 626, Address: 0x180f48, Func Offset: 0xb8
	// Line 634, Address: 0x180f50, Func Offset: 0xc0
	// Func End, Address: 0x180f58, Func Offset: 0xc8
}

// 
// Start address: 0x180f60
int sh2gfw_packet_Poly_GlobalTexUsing(sh2gfw_BLOCK_MAN* pB_man, _anon7* pAMAN, Q_WORDDATA* b_p, Q_WORDDATA* g_p, int* pb, int* pl)
{
	int gid;
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
	// Line 680, Address: 0x180f60, Func Offset: 0
	// Line 688, Address: 0x180fa4, Func Offset: 0x44
	// Line 689, Address: 0x180fac, Func Offset: 0x4c
	// Line 693, Address: 0x180fb4, Func Offset: 0x54
	// Line 696, Address: 0x180fbc, Func Offset: 0x5c
	// Line 703, Address: 0x180fc4, Func Offset: 0x64
	// Line 704, Address: 0x180fd0, Func Offset: 0x70
	// Line 708, Address: 0x180fd4, Func Offset: 0x74
	// Line 709, Address: 0x180fe0, Func Offset: 0x80
	// Line 711, Address: 0x180fe4, Func Offset: 0x84
	// Line 723, Address: 0x180ff0, Func Offset: 0x90
	// Line 725, Address: 0x181050, Func Offset: 0xf0
	// Line 726, Address: 0x181084, Func Offset: 0x124
	// Line 727, Address: 0x1810b8, Func Offset: 0x158
	// Line 741, Address: 0x1810d8, Func Offset: 0x178
	// Line 742, Address: 0x1810f0, Func Offset: 0x190
	// Line 744, Address: 0x1810f4, Func Offset: 0x194
	// Line 746, Address: 0x181100, Func Offset: 0x1a0
	// Line 751, Address: 0x18110c, Func Offset: 0x1ac
	// Line 754, Address: 0x181110, Func Offset: 0x1b0
	// Line 758, Address: 0x181148, Func Offset: 0x1e8
	// Line 759, Address: 0x181168, Func Offset: 0x208
	// Line 762, Address: 0x18116c, Func Offset: 0x20c
	// Line 763, Address: 0x181170, Func Offset: 0x210
	// Line 764, Address: 0x181174, Func Offset: 0x214
	// Line 765, Address: 0x181184, Func Offset: 0x224
	// Line 766, Address: 0x18118c, Func Offset: 0x22c
	// Line 770, Address: 0x1811c4, Func Offset: 0x264
	// Line 771, Address: 0x1811d0, Func Offset: 0x270
	// Line 772, Address: 0x1811d8, Func Offset: 0x278
	// Line 774, Address: 0x1811e0, Func Offset: 0x280
	// Line 777, Address: 0x181218, Func Offset: 0x2b8
	// Line 780, Address: 0x181224, Func Offset: 0x2c4
	// Line 782, Address: 0x181248, Func Offset: 0x2e8
	// Line 784, Address: 0x181268, Func Offset: 0x308
	// Line 785, Address: 0x181278, Func Offset: 0x318
	// Line 787, Address: 0x181284, Func Offset: 0x324
	// Line 789, Address: 0x181298, Func Offset: 0x338
	// Line 790, Address: 0x1812a8, Func Offset: 0x348
	// Line 792, Address: 0x1812c0, Func Offset: 0x360
	// Line 794, Address: 0x1812e8, Func Offset: 0x388
	// Line 796, Address: 0x18130c, Func Offset: 0x3ac
	// Line 797, Address: 0x181334, Func Offset: 0x3d4
	// Line 800, Address: 0x18135c, Func Offset: 0x3fc
	// Line 801, Address: 0x181378, Func Offset: 0x418
	// Line 803, Address: 0x181394, Func Offset: 0x434
	// Line 805, Address: 0x181398, Func Offset: 0x438
	// Func End, Address: 0x1813cc, Func Offset: 0x46c
}

// 
// Start address: 0x1813d0
int sh2gfw_packet_Poly_LocalTexUsing(sh2gfw_BLOCK_MAN* pB_man, Q_WORDDATA* b_p, Q_WORDDATA* g_p)
{
	int gid;
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
	// Line 822, Address: 0x1813d0, Func Offset: 0
	// Line 831, Address: 0x181408, Func Offset: 0x38
	// Line 832, Address: 0x181410, Func Offset: 0x40
	// Line 836, Address: 0x181418, Func Offset: 0x48
	// Line 838, Address: 0x181424, Func Offset: 0x54
	// Line 839, Address: 0x181434, Func Offset: 0x64
	// Line 840, Address: 0x18143c, Func Offset: 0x6c
	// Line 841, Address: 0x181458, Func Offset: 0x88
	// Line 851, Address: 0x181468, Func Offset: 0x98
	// Line 852, Address: 0x181474, Func Offset: 0xa4
	// Line 855, Address: 0x181478, Func Offset: 0xa8
	// Line 856, Address: 0x181490, Func Offset: 0xc0
	// Line 869, Address: 0x181494, Func Offset: 0xc4
	// Line 870, Address: 0x1814f0, Func Offset: 0x120
	// Line 871, Address: 0x181524, Func Offset: 0x154
	// Line 872, Address: 0x181558, Func Offset: 0x188
	// Line 886, Address: 0x181578, Func Offset: 0x1a8
	// Line 887, Address: 0x18158c, Func Offset: 0x1bc
	// Line 889, Address: 0x181590, Func Offset: 0x1c0
	// Line 891, Address: 0x1815a8, Func Offset: 0x1d8
	// Line 896, Address: 0x1815b4, Func Offset: 0x1e4
	// Line 899, Address: 0x1815b8, Func Offset: 0x1e8
	// Line 903, Address: 0x181600, Func Offset: 0x230
	// Line 905, Address: 0x181624, Func Offset: 0x254
	// Line 909, Address: 0x181628, Func Offset: 0x258
	// Line 910, Address: 0x18162c, Func Offset: 0x25c
	// Line 912, Address: 0x18163c, Func Offset: 0x26c
	// Line 915, Address: 0x181644, Func Offset: 0x274
	// Line 916, Address: 0x18167c, Func Offset: 0x2ac
	// Line 917, Address: 0x181688, Func Offset: 0x2b8
	// Line 919, Address: 0x181690, Func Offset: 0x2c0
	// Line 920, Address: 0x181698, Func Offset: 0x2c8
	// Line 922, Address: 0x1816d0, Func Offset: 0x300
	// Line 924, Address: 0x1816dc, Func Offset: 0x30c
	// Line 926, Address: 0x181700, Func Offset: 0x330
	// Line 928, Address: 0x181720, Func Offset: 0x350
	// Line 929, Address: 0x181730, Func Offset: 0x360
	// Line 930, Address: 0x18173c, Func Offset: 0x36c
	// Line 933, Address: 0x181750, Func Offset: 0x380
	// Line 935, Address: 0x181760, Func Offset: 0x390
	// Line 937, Address: 0x181778, Func Offset: 0x3a8
	// Line 938, Address: 0x1817a0, Func Offset: 0x3d0
	// Line 940, Address: 0x1817d4, Func Offset: 0x404
	// Line 945, Address: 0x1817f0, Func Offset: 0x420
	// Line 946, Address: 0x181824, Func Offset: 0x454
	// Line 948, Address: 0x181858, Func Offset: 0x488
	// Line 952, Address: 0x181870, Func Offset: 0x4a0
	// Line 953, Address: 0x181874, Func Offset: 0x4a4
	// Func End, Address: 0x1818a8, Func Offset: 0x4d8
}

// 
// Start address: 0x1818b0
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
	// Line 967, Address: 0x1818b0, Func Offset: 0
	// Line 968, Address: 0x1818dc, Func Offset: 0x2c
	// Line 973, Address: 0x1818e0, Func Offset: 0x30
	// Line 975, Address: 0x1818f4, Func Offset: 0x44
	// Line 980, Address: 0x1818f8, Func Offset: 0x48
	// Line 986, Address: 0x181910, Func Offset: 0x60
	// Line 988, Address: 0x181918, Func Offset: 0x68
	// Line 990, Address: 0x181924, Func Offset: 0x74
	// Line 991, Address: 0x18193c, Func Offset: 0x8c
	// Line 994, Address: 0x181940, Func Offset: 0x90
	// Line 995, Address: 0x181948, Func Offset: 0x98
	// Line 997, Address: 0x18194c, Func Offset: 0x9c
	// Line 1002, Address: 0x181958, Func Offset: 0xa8
	// Line 1003, Address: 0x18195c, Func Offset: 0xac
	// Line 1004, Address: 0x181960, Func Offset: 0xb0
	// Line 1016, Address: 0x181964, Func Offset: 0xb4
	// Line 1023, Address: 0x181988, Func Offset: 0xd8
	// Line 1024, Address: 0x181998, Func Offset: 0xe8
	// Line 1026, Address: 0x1819a4, Func Offset: 0xf4
	// Line 1028, Address: 0x1819bc, Func Offset: 0x10c
	// Line 1029, Address: 0x1819d0, Func Offset: 0x120
	// Line 1030, Address: 0x1819dc, Func Offset: 0x12c
	// Line 1031, Address: 0x1819f8, Func Offset: 0x148
	// Line 1032, Address: 0x181a00, Func Offset: 0x150
	// Line 1034, Address: 0x181a14, Func Offset: 0x164
	// Line 1041, Address: 0x181a20, Func Offset: 0x170
	// Line 1043, Address: 0x181a2c, Func Offset: 0x17c
	// Line 1044, Address: 0x181a30, Func Offset: 0x180
	// Line 1046, Address: 0x181a38, Func Offset: 0x188
	// Line 1048, Address: 0x181a3c, Func Offset: 0x18c
	// Line 1049, Address: 0x181a40, Func Offset: 0x190
	// Line 1051, Address: 0x181a44, Func Offset: 0x194
	// Line 1054, Address: 0x181a50, Func Offset: 0x1a0
	// Line 1055, Address: 0x181a5c, Func Offset: 0x1ac
	// Line 1056, Address: 0x181a60, Func Offset: 0x1b0
	// Line 1060, Address: 0x181a68, Func Offset: 0x1b8
	// Line 1062, Address: 0x181a6c, Func Offset: 0x1bc
	// Line 1064, Address: 0x181a74, Func Offset: 0x1c4
	// Line 1066, Address: 0x181a78, Func Offset: 0x1c8
	// Line 1078, Address: 0x181a7c, Func Offset: 0x1cc
	// Line 1085, Address: 0x181aa0, Func Offset: 0x1f0
	// Line 1086, Address: 0x181ab0, Func Offset: 0x200
	// Line 1088, Address: 0x181abc, Func Offset: 0x20c
	// Line 1090, Address: 0x181ac8, Func Offset: 0x218
	// Line 1091, Address: 0x181adc, Func Offset: 0x22c
	// Line 1092, Address: 0x181ae8, Func Offset: 0x238
	// Line 1095, Address: 0x181b00, Func Offset: 0x250
	// Line 1096, Address: 0x181b08, Func Offset: 0x258
	// Line 1097, Address: 0x181b14, Func Offset: 0x264
	// Line 1098, Address: 0x181b1c, Func Offset: 0x26c
	// Line 1102, Address: 0x181b28, Func Offset: 0x278
	// Line 1104, Address: 0x181b34, Func Offset: 0x284
	// Line 1105, Address: 0x181b38, Func Offset: 0x288
	// Line 1107, Address: 0x181b40, Func Offset: 0x290
	// Line 1114, Address: 0x181b44, Func Offset: 0x294
	// Line 1115, Address: 0x181b5c, Func Offset: 0x2ac
	// Line 1116, Address: 0x181b6c, Func Offset: 0x2bc
	// Line 1119, Address: 0x181b94, Func Offset: 0x2e4
	// Line 1120, Address: 0x181ba8, Func Offset: 0x2f8
	// Func End, Address: 0x181bd4, Func Offset: 0x324
}

// 
// Start address: 0x181be0
void sh2gfw_Set_SpecularAlpha()
{
	// Line 1161, Address: 0x181be0, Func Offset: 0
	// Line 1163, Address: 0x181be8, Func Offset: 0x8
	// Line 1164, Address: 0x181bf8, Func Offset: 0x18
	// Line 1168, Address: 0x181c0c, Func Offset: 0x2c
	// Line 1169, Address: 0x181c2c, Func Offset: 0x4c
	// Line 1171, Address: 0x181c34, Func Offset: 0x54
	// Line 1173, Address: 0x181c54, Func Offset: 0x74
	// Line 1175, Address: 0x181c5c, Func Offset: 0x7c
	// Line 1178, Address: 0x181c7c, Func Offset: 0x9c
	// Func End, Address: 0x181c8c, Func Offset: 0xac
}

// 
// Start address: 0x181c90
void PacketGIF_Pre(void* pt, sh2gfw_GIFTAG_HEAD* pGIF_H, Q_WORDDATA** ppqwd)
{
	sh2gfw_TexMAN* pTM;
	<unknown fundamental type (0xa510)>* pk;
	Q_WORDDATA* pqwd;
	// Line 1191, Address: 0x181c90, Func Offset: 0
	// Line 1192, Address: 0x181cb0, Func Offset: 0x20
	// Line 1194, Address: 0x181cb4, Func Offset: 0x24
	// Line 1247, Address: 0x181cb8, Func Offset: 0x28
	// Line 1253, Address: 0x181cec, Func Offset: 0x5c
	// Line 1254, Address: 0x181d04, Func Offset: 0x74
	// Line 1255, Address: 0x181d14, Func Offset: 0x84
	// Line 1257, Address: 0x181d58, Func Offset: 0xc8
	// Line 1258, Address: 0x181d6c, Func Offset: 0xdc
	// Line 1260, Address: 0x181da4, Func Offset: 0x114
	// Line 1263, Address: 0x181dd8, Func Offset: 0x148
	// Line 1267, Address: 0x181e00, Func Offset: 0x170
	// Line 1269, Address: 0x181e08, Func Offset: 0x178
	// Func End, Address: 0x181e28, Func Offset: 0x198
}

// 
// Start address: 0x181e30
void PacketGIF_Post(sh2gfw_GIFTAG_HEAD* pGIF_H, Q_WORDDATA** ppqwd)
{
	<unknown fundamental type (0xa510)>* pk;
	Q_WORDDATA* pqwd;
	// Line 1281, Address: 0x181e30, Func Offset: 0
	// Line 1282, Address: 0x181e44, Func Offset: 0x14
	// Line 1287, Address: 0x181e48, Func Offset: 0x18
	// Line 1295, Address: 0x181e8c, Func Offset: 0x5c
	// Line 1299, Address: 0x181e94, Func Offset: 0x64
	// Line 1304, Address: 0x181e9c, Func Offset: 0x6c
	// Line 1309, Address: 0x181ec4, Func Offset: 0x94
	// Line 1310, Address: 0x181ec8, Func Offset: 0x98
	// Func End, Address: 0x181ee0, Func Offset: 0xb0
}

// 
// Start address: 0x181ee0
void sh2gfw_init_zeroQ_BMAN(sh2gfw_BLOCK_MAN* pB_man)
{
	<unknown fundamental type (0xa510)>* pl;
	int i;
	// Line 1382, Address: 0x181ee0, Func Offset: 0
	// Line 1383, Address: 0x181ee4, Func Offset: 0x4
	// Line 1384, Address: 0x181ef0, Func Offset: 0x10
	// Line 1385, Address: 0x181efc, Func Offset: 0x1c
	// Line 1386, Address: 0x181f00, Func Offset: 0x20
	// Line 1387, Address: 0x181f04, Func Offset: 0x24
	// Line 1388, Address: 0x181f08, Func Offset: 0x28
	// Line 1391, Address: 0x181f1c, Func Offset: 0x3c
	// Line 1392, Address: 0x181f20, Func Offset: 0x40
	// Line 1393, Address: 0x181f24, Func Offset: 0x44
	// Line 1394, Address: 0x181f28, Func Offset: 0x48
	// Line 1395, Address: 0x181f2c, Func Offset: 0x4c
	// Line 1396, Address: 0x181f30, Func Offset: 0x50
	// Line 1397, Address: 0x181f34, Func Offset: 0x54
	// Line 1398, Address: 0x181f38, Func Offset: 0x58
	// Line 1403, Address: 0x181f3c, Func Offset: 0x5c
	// Line 1405, Address: 0x181f40, Func Offset: 0x60
	// Line 1419, Address: 0x181f44, Func Offset: 0x64
	// Func End, Address: 0x181f4c, Func Offset: 0x6c
}

