typedef struct shGsTinyDrawEnv;
typedef union Q_WORDDATA;
typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct shGsAllEnv;
typedef struct _anon4;
typedef struct _anon5;
typedef struct _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef struct _anon9;
typedef struct _anon10;
typedef struct _anon11;
typedef struct shGsDrawEnv;
typedef struct _anon12;
typedef struct _anon13;
typedef struct _anon14;
typedef struct _anon15;
typedef struct _anon16;
typedef struct shGsStencilDrawEnv;
typedef struct _anon17;
typedef struct _anon18;
typedef struct _anon19;
typedef struct _anon20;
typedef struct shGsLoopEnv;


typedef unsigned short type_0[8];
typedef _anon15 type_1[3];
typedef shGsDrawEnv type_2[3];
typedef shGsStencilDrawEnv type_3[3];
typedef shGsTinyDrawEnv type_4[6];
typedef Q_WORDDATA type_5[10];
typedef Q_WORDDATA type_6[10];
typedef Q_WORDDATA type_7[10];
typedef Q_WORDDATA type_8[10];
typedef Q_WORDDATA type_9[10];
typedef unsigned int type_10[4];
typedef Q_WORDDATA type_11[10];
typedef unsigned short type_12[8];
typedef Q_WORDDATA type_13[10];
typedef float type_14[4];
typedef unsigned char type_15[16];
typedef Q_WORDDATA type_16[8];
typedef int type_17[4];
typedef Q_WORDDATA type_18[2];
typedef short type_19[8];
typedef Q_WORDDATA type_20[2];
typedef char type_21[16];
typedef Q_WORDDATA type_22[2];
typedef unsigned long type_23[2];
typedef Q_WORDDATA type_24[2];
typedef Q_WORDDATA type_25[2];
typedef Q_WORDDATA type_26[2];
typedef Q_WORDDATA type_27[2];
typedef Q_WORDDATA type_28[2];
typedef Q_WORDDATA type_29[2];
typedef Q_WORDDATA type_30[5];
typedef Q_WORDDATA type_31[2];
typedef Q_WORDDATA type_32[2];
typedef Q_WORDDATA type_33[2];
typedef Q_WORDDATA type_34[5];
typedef Q_WORDDATA type_35[2];
typedef Q_WORDDATA type_36[2];
typedef Q_WORDDATA type_37[2];
typedef Q_WORDDATA type_38[2];
typedef Q_WORDDATA type_39[2];
typedef Q_WORDDATA type_40[2];
typedef Q_WORDDATA type_41[2];
typedef Q_WORDDATA type_42[2];
typedef Q_WORDDATA type_43[6];
typedef Q_WORDDATA type_44[2];
typedef Q_WORDDATA type_45[6];
typedef Q_WORDDATA type_46[0];
typedef unsigned int type_47[3];
typedef unsigned int type_48[3];
typedef unsigned int type_49[3];
typedef unsigned int type_50[24];
typedef unsigned int type_51[3];
typedef unsigned int type_52[3];

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
		unsigned long AC : 1;
		unsigned long pad01 : 63;
	};
};

struct _anon1
{
	struct
	{
		unsigned long DTHE : 1;
		unsigned long pad01 : 63;
	};
};

struct _anon2
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

struct _anon3
{
	_anon8 testa;
	long testaaddr;
	_anon20 prim;
	long primaddr;
	_anon2 rgbaq;
	long rgbaqaddr;
	_anon14 xyz2a;
	long xyz2aaddr;
	_anon14 xyz2b;
	long xyz2baddr;
	_anon8 testb;
	long testbaddr;
};

struct shGsAllEnv
{
	unsigned long loop_counter;
	unsigned int loop;
	unsigned int loop3;
	shGsLoopEnv LoopEnv;
	_anon15 DispEnv[3];
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

struct _anon4
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

struct _anon5
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

struct _anon6
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

struct _anon9
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

struct _anon10
{
	Q_WORDDATA* GS_kick;
	Q_WORDDATA* GS_tail;
	unsigned short main_num;
	unsigned short transnum;
	unsigned int pad1;
};

struct _anon11
{
	struct
	{
		unsigned long CLAMP : 1;
		unsigned long pad01 : 63;
	};
};

struct shGsDrawEnv
{
	_anon9 giftag;
	_anon17 draw;
	Q_WORDDATA drawq2[5];
	_anon3 clear;
	_anon9 giftag_nc;
	_anon17 draw_nc;
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

struct _anon12
{
	struct
	{
		unsigned long OFX : 16;
		unsigned long pad16 : 16;
		unsigned long OFY : 16;
		unsigned long pad48 : 16;
	};
};

struct _anon13
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

struct _anon14
{
	struct
	{
		unsigned long X : 16;
		unsigned long Y : 16;
		unsigned long Z : 32;
	};
};

struct _anon15
{
	_anon6 pmode;
	_anon13 smode2;
	_anon7 dispfb;
	_anon16 display;
	_anon18 bgcolor;
};

struct _anon16
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
	_anon9 giftag;
	_anon17 draw;
	Q_WORDDATA alpha1;
	Q_WORDDATA drawq2[6];
	_anon3 clear;
	Q_WORDDATA frame;
	_anon9 giftag_nc;
	_anon17 draw_nc;
	Q_WORDDATA alpha1_nc;
	Q_WORDDATA drawq2_nc[6];
	Q_WORDDATA gifad_frame_normal;
	Q_WORDDATA frame_normal;
	Q_WORDDATA gifad_frame_mskalpha;
	Q_WORDDATA frame_mskalpha;
	Q_WORDDATA gifad_frame_mskDalpha;
	Q_WORDDATA frame_mskDalpha;
};

struct _anon17
{
	_anon5 frame1;
	unsigned long frame1addr;
	_anon19 zbuf1;
	long zbuf1addr;
	_anon12 xyoffset1;
	long xyoffset1addr;
	_anon4 scissor1;
	long scissor1addr;
	_anon0 prmodecont;
	long prmodecontaddr;
	_anon11 colclamp;
	long colclampaddr;
	_anon1 dthe;
	long dtheaddr;
	_anon8 test1;
	long test1addr;
};

struct _anon18
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

struct _anon19
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

struct _anon20
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

Q_WORDDATA GSENV_CTL_PACK[0];
_anon10 GSCTL_man;
shGsAllEnv shGs_AllEnv;

void sh2gfw_init_GSPACKMAN(_anon10* Gman);
void sh2gfw_setREF_gsctl(Q_WORDDATA* gt);
void sh2gfw_setREF_tagchain(Q_WORDDATA** pqwd, Q_WORDDATA* gt);
Q_WORDDATA* sh2gfw_setEND_gsctl();
void sh2gfw_setCALL_gsctl(Q_WORDDATA* pf);
void sh2gfw_setREF_TEXFLUSH();

// 
// Start address: 0x181ba0
void sh2gfw_init_GSPACKMAN(_anon10* Gman)
{
	// Line 23, Address: 0x181ba0, Func Offset: 0
	// Line 25, Address: 0x181ba8, Func Offset: 0x8
	// Line 26, Address: 0x181bb8, Func Offset: 0x18
	// Line 27, Address: 0x181bc8, Func Offset: 0x28
	// Line 28, Address: 0x181bd0, Func Offset: 0x30
	// Line 30, Address: 0x181bd8, Func Offset: 0x38
	// Func End, Address: 0x181be4, Func Offset: 0x44
}

// 
// Start address: 0x181bf0
void sh2gfw_setREF_gsctl(Q_WORDDATA* gt)
{
	unsigned short leng;
	Q_WORDDATA* qwd;
	// Line 38, Address: 0x181bf0, Func Offset: 0
	// Line 39, Address: 0x181c00, Func Offset: 0x10
	// Line 42, Address: 0x181c08, Func Offset: 0x18
	// Line 43, Address: 0x181c28, Func Offset: 0x38
	// Line 44, Address: 0x181c64, Func Offset: 0x74
	// Line 46, Address: 0x181c6c, Func Offset: 0x7c
	// Func End, Address: 0x181c80, Func Offset: 0x90
}

// 
// Start address: 0x181c80
void sh2gfw_setREF_tagchain(Q_WORDDATA** pqwd, Q_WORDDATA* gt)
{
	unsigned short leng;
	Q_WORDDATA* qwd;
	// Line 55, Address: 0x181c80, Func Offset: 0
	// Line 58, Address: 0x181c94, Func Offset: 0x14
	// Line 61, Address: 0x181c9c, Func Offset: 0x1c
	// Line 62, Address: 0x181cbc, Func Offset: 0x3c
	// Line 64, Address: 0x181cf8, Func Offset: 0x78
	// Line 66, Address: 0x181d00, Func Offset: 0x80
	// Func End, Address: 0x181d14, Func Offset: 0x94
}

// 
// Start address: 0x181d20
Q_WORDDATA* sh2gfw_setEND_gsctl()
{
	Q_WORDDATA* qwd;
	// Line 70, Address: 0x181d20, Func Offset: 0
	// Line 72, Address: 0x181d28, Func Offset: 0x8
	// Line 74, Address: 0x181d30, Func Offset: 0x10
	// Line 75, Address: 0x181d38, Func Offset: 0x18
	// Line 76, Address: 0x181d3c, Func Offset: 0x1c
	// Line 78, Address: 0x181d40, Func Offset: 0x20
	// Line 79, Address: 0x181d4c, Func Offset: 0x2c
	// Line 80, Address: 0x181d54, Func Offset: 0x34
	// Line 82, Address: 0x181d64, Func Offset: 0x44
	// Line 84, Address: 0x181d68, Func Offset: 0x48
	// Func End, Address: 0x181d78, Func Offset: 0x58
}

// 
// Start address: 0x181d80
void sh2gfw_setCALL_gsctl(Q_WORDDATA* pf)
{
	Q_WORDDATA* qwd;
	// Line 95, Address: 0x181d80, Func Offset: 0
	// Line 97, Address: 0x181d8c, Func Offset: 0xc
	// Line 99, Address: 0x181d94, Func Offset: 0x14
	// Line 100, Address: 0x181db8, Func Offset: 0x38
	// Line 102, Address: 0x181dc0, Func Offset: 0x40
	// Func End, Address: 0x181dd0, Func Offset: 0x50
}

// 
// Start address: 0x181dd0
void sh2gfw_setREF_TEXFLUSH()
{
	Q_WORDDATA* qwd;
	// Line 126, Address: 0x181dd0, Func Offset: 0
	// Line 127, Address: 0x181dd8, Func Offset: 0x8
	// Line 128, Address: 0x181de0, Func Offset: 0x10
	// Line 129, Address: 0x181e10, Func Offset: 0x40
	// Line 131, Address: 0x181e18, Func Offset: 0x48
	// Func End, Address: 0x181e28, Func Offset: 0x58
}

