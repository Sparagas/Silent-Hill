typedef struct shGsDrawEnv;
typedef struct _anon0;
typedef struct ScreenEffect_Parameter;
typedef struct _anon1;
typedef struct shGsStencilDrawEnv;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef struct _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef struct shGsLoopEnv;
typedef struct _anon9;
typedef struct _anon10;
typedef struct _anon11;
typedef struct _anon12;
typedef struct shGsTinyDrawEnv;
typedef struct _anon13;
typedef struct shGsAllEnv;
typedef struct _anon14;
typedef struct _anon15;
typedef struct _anon16;
typedef struct _anon17;
typedef struct _anon18;
typedef union Q_WORDDATA;
typedef struct _anon19;


typedef Q_WORDDATA type_0[2];
typedef char type_1[16];
typedef Q_WORDDATA type_2[2];
typedef unsigned long type_3[2];
typedef Q_WORDDATA type_4[2];
typedef Q_WORDDATA type_5[2];
typedef Q_WORDDATA type_6[2];
typedef Q_WORDDATA type_7[5];
typedef Q_WORDDATA type_8[2];
typedef Q_WORDDATA type_9[2];
typedef Q_WORDDATA type_10[2];
typedef Q_WORDDATA type_11[5];
typedef Q_WORDDATA type_12[2];
typedef Q_WORDDATA type_13[2];
typedef Q_WORDDATA type_14[2];
typedef Q_WORDDATA type_15[2];
typedef Q_WORDDATA type_16[2];
typedef Q_WORDDATA type_17[2];
typedef Q_WORDDATA type_18[2];
typedef Q_WORDDATA type_19[2];
typedef Q_WORDDATA type_20[2];
typedef Q_WORDDATA type_21[2];
typedef Q_WORDDATA type_22[6];
typedef Q_WORDDATA type_23[2];
typedef Q_WORDDATA type_24[2];
typedef Q_WORDDATA type_25[6];
typedef unsigned int type_26[3];
typedef unsigned int type_27[3];
typedef unsigned int type_28[3];
typedef unsigned int type_29[24];
typedef unsigned int type_30[3];
typedef unsigned int type_31[3];
typedef unsigned short type_32[8];
typedef _anon6 type_33[3];
typedef shGsDrawEnv type_34[3];
typedef shGsStencilDrawEnv type_35[3];
typedef shGsTinyDrawEnv type_36[6];
typedef Q_WORDDATA type_37[10];
typedef Q_WORDDATA type_38[10];
typedef Q_WORDDATA type_39[10];
typedef Q_WORDDATA type_40[10];
typedef unsigned int type_41[4];
typedef Q_WORDDATA type_42[10];
typedef unsigned short type_43[8];
typedef Q_WORDDATA type_44[10];
typedef float type_45[4];
typedef Q_WORDDATA type_46[10];
typedef unsigned char type_47[16];
typedef Q_WORDDATA type_48[8];
typedef int type_49[4];
typedef Q_WORDDATA type_50[2];
typedef short type_51[8];

struct shGsDrawEnv
{
	_anon4 giftag;
	_anon9 draw;
	Q_WORDDATA drawq2[5];
	_anon17 clear;
	_anon4 giftag_nc;
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

struct _anon0
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

struct ScreenEffect_Parameter
{
	int fade_status;
	int fade_type;
	float fade_timer_now;
	float fade_timer_max;
};

struct _anon1
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

struct shGsStencilDrawEnv
{
	_anon4 giftag;
	_anon9 draw;
	Q_WORDDATA alpha1;
	Q_WORDDATA drawq2[6];
	_anon17 clear;
	Q_WORDDATA frame;
	_anon4 giftag_nc;
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

struct _anon2
{
	struct
	{
		unsigned long CLAMP : 1;
		unsigned long pad01 : 63;
	};
};

struct _anon3
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

struct _anon4
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

struct _anon5
{
	struct
	{
		unsigned long OFX : 16;
		unsigned long pad16 : 16;
		unsigned long OFY : 16;
		unsigned long pad48 : 16;
	};
};

struct _anon6
{
	_anon3 pmode;
	_anon10 smode2;
	_anon7 dispfb;
	_anon13 display;
	_anon14 bgcolor;
};

struct _anon7
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

struct _anon8
{
	struct
	{
		unsigned long X : 16;
		unsigned long Y : 16;
		unsigned long Z : 32;
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

struct _anon9
{
	_anon0 frame1;
	unsigned long frame1addr;
	_anon11 zbuf1;
	long zbuf1addr;
	_anon5 xyoffset1;
	long xyoffset1addr;
	_anon19 scissor1;
	long scissor1addr;
	_anon15 prmodecont;
	long prmodecontaddr;
	_anon2 colclamp;
	long colclampaddr;
	_anon16 dthe;
	long dtheaddr;
	_anon1 test1;
	long test1addr;
};

struct _anon10
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

struct _anon11
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

struct _anon12
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

struct _anon13
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

struct shGsAllEnv
{
	unsigned long loop_counter;
	unsigned int loop;
	unsigned int loop3;
	shGsLoopEnv LoopEnv;
	_anon6 DispEnv[3];
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

struct _anon14
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

struct _anon15
{
	struct
	{
		unsigned long AC : 1;
		unsigned long pad01 : 63;
	};
};

struct _anon16
{
	struct
	{
		unsigned long DTHE : 1;
		unsigned long pad01 : 63;
	};
};

struct _anon17
{
	_anon1 testa;
	long testaaddr;
	_anon12 prim;
	long primaddr;
	_anon18 rgbaq;
	long rgbaqaddr;
	_anon8 xyz2a;
	long xyz2aaddr;
	_anon8 xyz2b;
	long xyz2baddr;
	_anon1 testb;
	long testbaddr;
};

struct _anon18
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

struct _anon19
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

int now_loading_enable;
int now_loading_draw;
ScreenEffect_Parameter scr_efct;
shGsAllEnv shGs_AllEnv;

void NowLoadingEnable();
void NowLoadingCheck();
void NowLoadingDraw();

// 
// Start address: 0x298fa0
void NowLoadingEnable()
{
	// Line 20, Address: 0x298fa0, Func Offset: 0
	// Line 21, Address: 0x298fac, Func Offset: 0xc
	// Func End, Address: 0x298fb4, Func Offset: 0x14
}

// 
// Start address: 0x298fc0
void NowLoadingCheck()
{
	int fade;
	int time;
	// Line 27, Address: 0x298fc0, Func Offset: 0
	// Line 33, Address: 0x298fd0, Func Offset: 0x10
	// Line 38, Address: 0x298ff8, Func Offset: 0x38
	// Line 39, Address: 0x29900c, Func Offset: 0x4c
	// Line 41, Address: 0x299034, Func Offset: 0x74
	// Line 43, Address: 0x299044, Func Offset: 0x84
	// Line 44, Address: 0x299058, Func Offset: 0x98
	// Line 45, Address: 0x299060, Func Offset: 0xa0
	// Line 47, Address: 0x299074, Func Offset: 0xb4
	// Line 48, Address: 0x299088, Func Offset: 0xc8
	// Line 50, Address: 0x299094, Func Offset: 0xd4
	// Line 51, Address: 0x29909c, Func Offset: 0xdc
	// Line 57, Address: 0x2990e4, Func Offset: 0x124
	// Line 59, Address: 0x299100, Func Offset: 0x140
	// Line 60, Address: 0x299108, Func Offset: 0x148
	// Line 62, Address: 0x29911c, Func Offset: 0x15c
	// Line 63, Address: 0x299124, Func Offset: 0x164
	// Line 64, Address: 0x299130, Func Offset: 0x170
	// Line 66, Address: 0x299138, Func Offset: 0x178
	// Line 70, Address: 0x299148, Func Offset: 0x188
	// Line 78, Address: 0x299150, Func Offset: 0x190
	// Line 79, Address: 0x299158, Func Offset: 0x198
	// Func End, Address: 0x299170, Func Offset: 0x1b0
}

// 
// Start address: 0x299170
void NowLoadingDraw()
{
	int y;
	int x;
	int count;
	// Line 83, Address: 0x299170, Func Offset: 0
	// Line 85, Address: 0x299180, Func Offset: 0x10
	// Line 90, Address: 0x299190, Func Offset: 0x20
	// Line 93, Address: 0x2991b8, Func Offset: 0x48
	// Line 94, Address: 0x2991d8, Func Offset: 0x68
	// Line 95, Address: 0x2991f8, Func Offset: 0x88
	// Line 96, Address: 0x299208, Func Offset: 0x98
	// Line 97, Address: 0x299220, Func Offset: 0xb0
	// Line 101, Address: 0x299244, Func Offset: 0xd4
	// Line 102, Address: 0x29924c, Func Offset: 0xdc
	// Line 103, Address: 0x299254, Func Offset: 0xe4
	// Line 105, Address: 0x299264, Func Offset: 0xf4
	// Line 115, Address: 0x299278, Func Offset: 0x108
	// Line 116, Address: 0x299280, Func Offset: 0x110
	// Line 118, Address: 0x299288, Func Offset: 0x118
	// Line 119, Address: 0x299290, Func Offset: 0x120
	// Func End, Address: 0x2992a8, Func Offset: 0x138
}

