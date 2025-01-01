typedef struct sh2gfw_CLUTS_HEAD;
typedef union Q_WORDDATA;
typedef struct _anon0;
typedef struct _anon1;
typedef struct sh2gfw_SPOTL_MATRIX;
typedef struct _anon2;
typedef struct _anon3;
typedef struct sh2gfw_GSREGS_HEAD;
typedef struct sh2gfw_POINTL_MATRIX;
typedef struct shGsDrawEnv;
typedef struct _anon4;
typedef struct sh2gfw_TEX_HEAD;
typedef struct _anon5;
typedef struct _anon6;
typedef struct sh2gfw_GIFTAG_HEAD;
typedef struct _anon7;
typedef struct _anon8;
typedef struct _anon9;
typedef struct _anon10;
typedef struct shGsStencilDrawEnv;
typedef struct sh2gfw_AREA_HEAD;
typedef struct sh2gfw_BLOCK_HEAD;
typedef struct sh2gfw_Env_ctl;
typedef struct shGsLoopEnv;
typedef struct sh2gfw_BLOCK_MAN;
typedef struct _anon11;
typedef struct sh2gfw_BLOCKGLOBAL_HEAD;
typedef struct _anon12;
typedef struct _anon13;
typedef struct shGsTinyDrawEnv;
typedef struct _anon14;
typedef struct sh2gfw_BLOCKLOCAL_HEAD;
typedef struct _anon15;
typedef struct shGsAllEnv;
typedef struct _anon16;
typedef struct _anon17;
typedef struct _anon18;
typedef struct _anon19;
typedef struct _anon20;


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
typedef Q_WORDDATA type_41[2];
typedef Q_WORDDATA type_42[2];
typedef Q_WORDDATA type_43[2];
typedef Q_WORDDATA type_44[2];
typedef sh2gfw_GIFTAG_HEAD* type_45[16];
typedef Q_WORDDATA type_46[2];
typedef unsigned char type_47[8];
typedef Q_WORDDATA type_48[6];
typedef unsigned char type_49[8][8];
typedef Q_WORDDATA type_50[2];
typedef Q_WORDDATA type_51[3];
typedef Q_WORDDATA type_52[6];
typedef unsigned int type_53[3];
typedef unsigned int type_54[3];
typedef unsigned int type_55[3];
typedef unsigned int type_56[3];
typedef unsigned int type_57[3];
typedef unsigned int type_58[24];
typedef unsigned int type_59[3];
typedef unsigned int type_60[3];
typedef unsigned short type_61[8];
typedef unsigned short type_62[3];
typedef unsigned short type_63[3];
typedef float type_64[4];
typedef float type_65[4];
typedef float type_66[4][4];
typedef float type_67[4][2];
typedef unsigned short type_68[4];
typedef _anon5 type_69[3];
typedef shGsDrawEnv type_70[3];
typedef shGsStencilDrawEnv type_71[3];
typedef shGsTinyDrawEnv type_72[6];
typedef sh2gfw_GSREGS_HEAD* type_73[4];
typedef Q_WORDDATA type_74[10];
typedef sh2gfw_GIFTAG_HEAD* type_75[16];
typedef Q_WORDDATA type_76[10];
typedef sh2gfw_GIFTAG_HEAD* type_77[16][4];
typedef Q_WORDDATA type_78[10];
typedef unsigned short type_79[8];
typedef unsigned short type_80[8][16];
typedef unsigned short type_81[8][16][4];
typedef Q_WORDDATA type_82[10];
typedef sh2gfw_TEX_HEAD* type_83[4];
typedef Q_WORDDATA type_84[10];
typedef Q_WORDDATA type_85[10];
typedef sh2gfw_CLUTS_HEAD* type_86[4];
typedef Q_WORDDATA type_87[10];

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

struct sh2gfw_SPOTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA spot_rot;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
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

struct sh2gfw_POINTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
};

struct shGsDrawEnv
{
	_anon0 giftag;
	_anon8 draw;
	Q_WORDDATA drawq2[5];
	_anon14 clear;
	_anon0 giftag_nc;
	_anon8 draw_nc;
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
	_anon18 pmode;
	_anon2 smode2;
	_anon19 dispfb;
	_anon6 display;
	_anon7 bgcolor;
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

struct _anon7
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

struct _anon8
{
	_anon17 frame1;
	unsigned long frame1addr;
	_anon9 zbuf1;
	long zbuf1addr;
	_anon3 xyoffset1;
	long xyoffset1addr;
	_anon15 scissor1;
	long scissor1addr;
	_anon11 prmodecont;
	long prmodecontaddr;
	_anon1 colclamp;
	long colclampaddr;
	_anon12 dthe;
	long dtheaddr;
	_anon20 test1;
	long test1addr;
};

struct _anon9
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

struct _anon10
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
	_anon8 draw;
	Q_WORDDATA alpha1;
	Q_WORDDATA drawq2[6];
	_anon14 clear;
	Q_WORDDATA frame;
	_anon0 giftag_nc;
	_anon8 draw_nc;
	Q_WORDDATA alpha1_nc;
	Q_WORDDATA drawq2_nc[6];
	Q_WORDDATA gifad_frame_normal;
	Q_WORDDATA frame_normal;
	Q_WORDDATA gifad_frame_mskalpha;
	Q_WORDDATA frame_mskalpha;
	Q_WORDDATA gifad_frame_mskDalpha;
	Q_WORDDATA frame_mskDalpha;
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
	_anon16 blk_LightData;
};

struct _anon11
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

struct _anon14
{
	_anon20 testa;
	long testaaddr;
	_anon10 prim;
	long primaddr;
	_anon13 rgbaq;
	long rgbaqaddr;
	_anon4 xyz2a;
	long xyz2aaddr;
	_anon4 xyz2b;
	long xyz2baddr;
	_anon20 testb;
	long testbaddr;
};

struct sh2gfw_BLOCKLOCAL_HEAD
{
	unsigned short gsregsamount[3];
	unsigned short transamount[3];
	unsigned short ltexnum;
	unsigned short pads;
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

struct _anon16
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

struct _anon20
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

sh2gfw_Env_ctl Env_ctl;
shGsAllEnv shGs_AllEnv;

void sh2gfw_Set_Brightness(int pow);
void kari_sh2setGS_fogcolor(unsigned int fr, unsigned int fg, unsigned int fb);
void kari_sh2setGS_clearcolor(unsigned int cr, unsigned int cg, unsigned int cb, unsigned int ca);
void kari_sh2setGS_changeFGE(sh2gfw_BLOCK_MAN* bm, unsigned int fge);
void kari_sh2setGS_changePRIM(sh2gfw_BLOCK_MAN* bm, unsigned int prim, unsigned int mode);
void kari_sh2gfw_vu_change(sh2gfw_BLOCK_MAN* bm, unsigned int light_mode);

// 
// Start address: 0x17e6d0
void sh2gfw_Set_Brightness(int pow)
{
	// Line 59, Address: 0x17e6d0, Func Offset: 0
	// Line 62, Address: 0x17e6d8, Func Offset: 0x8
	// Line 64, Address: 0x17e704, Func Offset: 0x34
	// Line 70, Address: 0x17e728, Func Offset: 0x58
	// Line 74, Address: 0x17e74c, Func Offset: 0x7c
	// Line 77, Address: 0x17e754, Func Offset: 0x84
	// Line 81, Address: 0x17e778, Func Offset: 0xa8
	// Line 84, Address: 0x17e780, Func Offset: 0xb0
	// Line 88, Address: 0x17e7a4, Func Offset: 0xd4
	// Line 91, Address: 0x17e7ac, Func Offset: 0xdc
	// Line 94, Address: 0x17e7d0, Func Offset: 0x100
	// Line 96, Address: 0x17e7d8, Func Offset: 0x108
	// Line 99, Address: 0x17e7fc, Func Offset: 0x12c
	// Line 102, Address: 0x17e804, Func Offset: 0x134
	// Line 105, Address: 0x17e828, Func Offset: 0x158
	// Line 109, Address: 0x17e830, Func Offset: 0x160
	// Line 115, Address: 0x17e854, Func Offset: 0x184
	// Func End, Address: 0x17e860, Func Offset: 0x190
}

// 
// Start address: 0x17e860
void kari_sh2setGS_fogcolor(unsigned int fr, unsigned int fg, unsigned int fb)
{
	// Line 140, Address: 0x17e860, Func Offset: 0
	// Line 143, Address: 0x17e870, Func Offset: 0x10
	// Line 145, Address: 0x17e8c4, Func Offset: 0x64
	// Func End, Address: 0x17e8d0, Func Offset: 0x70
}

// 
// Start address: 0x17e8d0
void kari_sh2setGS_clearcolor(unsigned int cr, unsigned int cg, unsigned int cb, unsigned int ca)
{
	int i;
	// Line 152, Address: 0x17e8d0, Func Offset: 0
	// Line 155, Address: 0x17e8e8, Func Offset: 0x18
	// Line 157, Address: 0x17e8f4, Func Offset: 0x24
	// Line 160, Address: 0x17e970, Func Offset: 0xa0
	// Line 162, Address: 0x17e984, Func Offset: 0xb4
	// Func End, Address: 0x17e994, Func Offset: 0xc4
}

// 
// Start address: 0x17e9a0
void kari_sh2setGS_changeFGE(sh2gfw_BLOCK_MAN* bm, unsigned int fge)
{
	unsigned int igeomax;
	unsigned int vuindex;
	unsigned int ivumax;
	unsigned int igg;
	unsigned int l;
	unsigned int k;
	unsigned int j;
	unsigned int i;
	Q_WORDDATA* tag;
	Q_WORDDATA* qwd;
	// Line 170, Address: 0x17e9a0, Func Offset: 0
	// Line 178, Address: 0x17e9d0, Func Offset: 0x30
	// Line 179, Address: 0x17e9dc, Func Offset: 0x3c
	// Line 180, Address: 0x17e9f0, Func Offset: 0x50
	// Line 181, Address: 0x17e9fc, Func Offset: 0x5c
	// Line 182, Address: 0x17ea14, Func Offset: 0x74
	// Line 184, Address: 0x17ea20, Func Offset: 0x80
	// Line 185, Address: 0x17ea44, Func Offset: 0xa4
	// Line 187, Address: 0x17ea64, Func Offset: 0xc4
	// Line 189, Address: 0x17ea7c, Func Offset: 0xdc
	// Line 192, Address: 0x17ea80, Func Offset: 0xe0
	// Line 194, Address: 0x17ea8c, Func Offset: 0xec
	// Line 196, Address: 0x17ea98, Func Offset: 0xf8
	// Line 198, Address: 0x17eaa4, Func Offset: 0x104
	// Line 200, Address: 0x17eab4, Func Offset: 0x114
	// Line 201, Address: 0x17eac4, Func Offset: 0x124
	// Line 202, Address: 0x17ead4, Func Offset: 0x134
	// Line 203, Address: 0x17ead8, Func Offset: 0x138
	// Line 204, Address: 0x17eadc, Func Offset: 0x13c
	// Line 206, Address: 0x17eaec, Func Offset: 0x14c
	// Line 207, Address: 0x17eaf4, Func Offset: 0x154
	// Line 209, Address: 0x17eb04, Func Offset: 0x164
	// Line 212, Address: 0x17eb0c, Func Offset: 0x16c
	// Line 214, Address: 0x17eb1c, Func Offset: 0x17c
	// Line 215, Address: 0x17eb30, Func Offset: 0x190
	// Line 216, Address: 0x17eb44, Func Offset: 0x1a4
	// Line 217, Address: 0x17eb48, Func Offset: 0x1a8
	// Line 218, Address: 0x17eb4c, Func Offset: 0x1ac
	// Line 220, Address: 0x17eb60, Func Offset: 0x1c0
	// Line 221, Address: 0x17eb68, Func Offset: 0x1c8
	// Line 222, Address: 0x17eb7c, Func Offset: 0x1dc
	// Line 226, Address: 0x17eb80, Func Offset: 0x1e0
	// Line 228, Address: 0x17eb94, Func Offset: 0x1f4
	// Line 230, Address: 0x17eba4, Func Offset: 0x204
	// Line 232, Address: 0x17ebb8, Func Offset: 0x218
	// Line 234, Address: 0x17ebcc, Func Offset: 0x22c
	// Func End, Address: 0x17ebfc, Func Offset: 0x25c
}

// 
// Start address: 0x17ec00
void kari_sh2setGS_changePRIM(sh2gfw_BLOCK_MAN* bm, unsigned int prim, unsigned int mode)
{
	unsigned int igeomax;
	unsigned int vuindex;
	unsigned int ivumax;
	unsigned int igg;
	unsigned int l;
	unsigned int k;
	unsigned int j;
	unsigned int i;
	Q_WORDDATA* tag;
	Q_WORDDATA* qwd;
	// Line 241, Address: 0x17ec00, Func Offset: 0
	// Line 250, Address: 0x17ec34, Func Offset: 0x34
	// Line 251, Address: 0x17ec40, Func Offset: 0x40
	// Line 252, Address: 0x17ec54, Func Offset: 0x54
	// Line 253, Address: 0x17ec60, Func Offset: 0x60
	// Line 254, Address: 0x17ec78, Func Offset: 0x78
	// Line 256, Address: 0x17ec84, Func Offset: 0x84
	// Line 257, Address: 0x17eca8, Func Offset: 0xa8
	// Line 259, Address: 0x17ecc8, Func Offset: 0xc8
	// Line 271, Address: 0x17ece0, Func Offset: 0xe0
	// Line 274, Address: 0x17ece4, Func Offset: 0xe4
	// Line 276, Address: 0x17ecf0, Func Offset: 0xf0
	// Line 278, Address: 0x17ecfc, Func Offset: 0xfc
	// Line 280, Address: 0x17ed08, Func Offset: 0x108
	// Line 281, Address: 0x17ed18, Func Offset: 0x118
	// Line 282, Address: 0x17ed38, Func Offset: 0x138
	// Line 283, Address: 0x17ed58, Func Offset: 0x158
	// Line 284, Address: 0x17ed5c, Func Offset: 0x15c
	// Line 285, Address: 0x17ed60, Func Offset: 0x160
	// Line 286, Address: 0x17ed80, Func Offset: 0x180
	// Line 287, Address: 0x17ed88, Func Offset: 0x188
	// Line 289, Address: 0x17eda8, Func Offset: 0x1a8
	// Line 291, Address: 0x17edb0, Func Offset: 0x1b0
	// Line 292, Address: 0x17edc0, Func Offset: 0x1c0
	// Line 293, Address: 0x17ede0, Func Offset: 0x1e0
	// Line 294, Address: 0x17ee00, Func Offset: 0x200
	// Line 295, Address: 0x17ee04, Func Offset: 0x204
	// Line 296, Address: 0x17ee08, Func Offset: 0x208
	// Line 297, Address: 0x17ee28, Func Offset: 0x228
	// Line 298, Address: 0x17ee30, Func Offset: 0x230
	// Line 305, Address: 0x17ee50, Func Offset: 0x250
	// Line 309, Address: 0x17ee64, Func Offset: 0x264
	// Line 311, Address: 0x17ee74, Func Offset: 0x274
	// Line 313, Address: 0x17ee88, Func Offset: 0x288
	// Line 318, Address: 0x17ee9c, Func Offset: 0x29c
	// Func End, Address: 0x17eecc, Func Offset: 0x2cc
}

// 
// Start address: 0x17eed0
void kari_sh2gfw_vu_change(sh2gfw_BLOCK_MAN* bm, unsigned int light_mode)
{
	unsigned int offsetad;
	unsigned int basead;
	unsigned int itopaddr;
	unsigned int vuk;
	unsigned int ivumax;
	unsigned int igg;
	unsigned int k;
	unsigned int j;
	unsigned int i;
	Q_WORDDATA* qwd;
	// Line 324, Address: 0x17eed0, Func Offset: 0
	// Line 333, Address: 0x17ef00, Func Offset: 0x30
	// Line 334, Address: 0x17ef0c, Func Offset: 0x3c
	// Line 335, Address: 0x17ef1c, Func Offset: 0x4c
	// Line 336, Address: 0x17ef28, Func Offset: 0x58
	// Line 337, Address: 0x17ef40, Func Offset: 0x70
	// Line 343, Address: 0x17ef4c, Func Offset: 0x7c
	// Line 344, Address: 0x17ef88, Func Offset: 0xb8
	// Line 349, Address: 0x17ef90, Func Offset: 0xc0
	// Line 369, Address: 0x17efac, Func Offset: 0xdc
	// Line 372, Address: 0x17efbc, Func Offset: 0xec
	// Line 374, Address: 0x17efc0, Func Offset: 0xf0
	// Line 392, Address: 0x17efe8, Func Offset: 0x118
	// Line 394, Address: 0x17effc, Func Offset: 0x12c
	// Line 396, Address: 0x17f00c, Func Offset: 0x13c
	// Line 399, Address: 0x17f01c, Func Offset: 0x14c
	// Func End, Address: 0x17f04c, Func Offset: 0x17c
}

