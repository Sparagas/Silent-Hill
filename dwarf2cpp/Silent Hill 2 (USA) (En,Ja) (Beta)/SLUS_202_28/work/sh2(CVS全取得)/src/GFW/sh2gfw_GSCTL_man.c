typedef struct shGsTinyDrawEnv;
typedef struct _anon0;
typedef struct _anon1;
typedef union Q_WORDDATA;
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
typedef struct _anon12;
typedef struct shGsDrawEnv;
typedef struct _anon13;
typedef struct _anon14;
typedef struct _anon15;
typedef struct shGsStencilDrawEnv;
typedef struct _anon16;
typedef struct _anon17;
typedef struct _anon18;
typedef struct _anon19;
typedef struct _anon20;
typedef struct shGsLoopEnv;


typedef Q_WORDDATA type_0[0];
typedef _anon6 type_1[3];
typedef shGsDrawEnv type_2[3];
typedef shGsStencilDrawEnv type_3[3];
typedef shGsTinyDrawEnv type_4[6];
typedef Q_WORDDATA type_5[10];
typedef Q_WORDDATA type_6[10];
typedef Q_WORDDATA type_7[10];
typedef Q_WORDDATA type_8[10];
typedef Q_WORDDATA type_9[10];
typedef Q_WORDDATA type_10[10];
typedef Q_WORDDATA type_11[10];
typedef Q_WORDDATA type_12[8];
typedef unsigned int type_13[4];
typedef Q_WORDDATA type_14[2];
typedef unsigned short type_15[8];
typedef Q_WORDDATA type_16[2];
typedef float type_17[4];
typedef Q_WORDDATA type_18[2];
typedef unsigned char type_19[16];
typedef Q_WORDDATA type_20[2];
typedef int type_21[4];
typedef Q_WORDDATA type_22[2];
typedef short type_23[8];
typedef char type_24[16];
typedef Q_WORDDATA type_25[2];
typedef unsigned long type_26[2];
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
typedef unsigned int type_46[3];
typedef unsigned int type_47[3];
typedef unsigned int type_48[3];
typedef unsigned int type_49[24];
typedef unsigned int type_50[3];
typedef unsigned int type_51[3];
typedef unsigned short type_52[8];

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

struct _anon0
{
	struct
	{
		unsigned long DTHE : 1;
		unsigned long pad01 : 63;
	};
};

struct _anon1
{
	struct
	{
		unsigned long AC : 1;
		unsigned long pad01 : 63;
	};
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
	Q_WORDDATA* GS_kick;
	Q_WORDDATA* GS_tail;
	unsigned short main_num;
	unsigned short transnum;
	unsigned int pad1;
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
	_anon7 pmode;
	_anon14 smode2;
	_anon9 dispfb;
	_anon16 display;
	_anon19 bgcolor;
};

struct _anon7
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

struct _anon8
{
	_anon5 frame1;
	unsigned long frame1addr;
	_anon18 zbuf1;
	long zbuf1addr;
	_anon13 xyoffset1;
	long xyoffset1addr;
	_anon4 scissor1;
	long scissor1addr;
	_anon1 prmodecont;
	long prmodecontaddr;
	_anon12 colclamp;
	long colclampaddr;
	_anon0 dthe;
	long dtheaddr;
	_anon10 test1;
	long test1addr;
};

struct _anon9
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

struct _anon10
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

struct _anon11
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

struct _anon12
{
	struct
	{
		unsigned long CLAMP : 1;
		unsigned long pad01 : 63;
	};
};

struct shGsDrawEnv
{
	_anon11 giftag;
	_anon8 draw;
	Q_WORDDATA drawq2[5];
	_anon17 clear;
	_anon11 giftag_nc;
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

struct _anon13
{
	struct
	{
		unsigned long OFX : 16;
		unsigned long pad16 : 16;
		unsigned long OFY : 16;
		unsigned long pad48 : 16;
	};
};

struct _anon14
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

struct _anon15
{
	struct
	{
		unsigned long X : 16;
		unsigned long Y : 16;
		unsigned long Z : 32;
	};
};

struct shGsStencilDrawEnv
{
	_anon11 giftag;
	_anon8 draw;
	Q_WORDDATA alpha1;
	Q_WORDDATA drawq2[6];
	_anon17 clear;
	Q_WORDDATA frame;
	_anon11 giftag_nc;
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

struct _anon17
{
	_anon10 testa;
	long testaaddr;
	_anon20 prim;
	long primaddr;
	_anon2 rgbaq;
	long rgbaqaddr;
	_anon15 xyz2a;
	long xyz2aaddr;
	_anon15 xyz2b;
	long xyz2baddr;
	_anon10 testb;
	long testbaddr;
};

struct _anon18
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

struct _anon19
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
_anon3 GSCTL_man;
shGsAllEnv shGs_AllEnv;

void sh2gfw_init_GSPACKMAN(_anon3* Gman);
void sh2gfw_setREF_gsctl(Q_WORDDATA* gt);
void sh2gfw_setREF_tagchain(Q_WORDDATA** pqwd, Q_WORDDATA* gt);
Q_WORDDATA* sh2gfw_setEND_gsctl();
void sh2gfw_setCALL_gsctl(Q_WORDDATA* pf);
void sh2gfw_setREF_TEXFLUSH();

// 
// Start address: 0x17b6e0
void sh2gfw_init_GSPACKMAN(_anon3* Gman)
{
	// Line 25, Address: 0x17b6e0, Func Offset: 0
	// Line 26, Address: 0x17b6ec, Func Offset: 0xc
	// Line 27, Address: 0x17b6f8, Func Offset: 0x18
	// Line 28, Address: 0x17b6fc, Func Offset: 0x1c
	// Line 30, Address: 0x17b700, Func Offset: 0x20
	// Func End, Address: 0x17b708, Func Offset: 0x28
}

// 
// Start address: 0x17b710
void sh2gfw_setREF_gsctl(Q_WORDDATA* gt)
{
	unsigned short leng;
	Q_WORDDATA* qwd;
	// Line 39, Address: 0x17b710, Func Offset: 0
	// Line 42, Address: 0x17b718, Func Offset: 0x8
	// Line 43, Address: 0x17b728, Func Offset: 0x18
	// Line 44, Address: 0x17b754, Func Offset: 0x44
	// Line 46, Address: 0x17b760, Func Offset: 0x50
	// Func End, Address: 0x17b768, Func Offset: 0x58
}

// 
// Start address: 0x17b770
void sh2gfw_setREF_tagchain(Q_WORDDATA** pqwd, Q_WORDDATA* gt)
{
	unsigned short leng;
	Q_WORDDATA* qwd;
	// Line 58, Address: 0x17b770, Func Offset: 0
	// Line 61, Address: 0x17b774, Func Offset: 0x4
	// Line 62, Address: 0x17b784, Func Offset: 0x14
	// Line 64, Address: 0x17b7b0, Func Offset: 0x40
	// Line 66, Address: 0x17b7b8, Func Offset: 0x48
	// Func End, Address: 0x17b7c0, Func Offset: 0x50
}

// 
// Start address: 0x17b7c0
Q_WORDDATA* sh2gfw_setEND_gsctl()
{
	Q_WORDDATA* qwd;
	// Line 72, Address: 0x17b7c0, Func Offset: 0
	// Line 74, Address: 0x17b7c8, Func Offset: 0x8
	// Line 75, Address: 0x17b7d0, Func Offset: 0x10
	// Line 76, Address: 0x17b7d4, Func Offset: 0x14
	// Line 78, Address: 0x17b7d8, Func Offset: 0x18
	// Line 79, Address: 0x17b7e4, Func Offset: 0x24
	// Line 80, Address: 0x17b7ec, Func Offset: 0x2c
	// Line 84, Address: 0x17b7fc, Func Offset: 0x3c
	// Func End, Address: 0x17b804, Func Offset: 0x44
}

// 
// Start address: 0x17b810
void sh2gfw_setCALL_gsctl(Q_WORDDATA* pf)
{
	Q_WORDDATA* qwd;
	// Line 97, Address: 0x17b810, Func Offset: 0
	// Line 99, Address: 0x17b818, Func Offset: 0x8
	// Line 100, Address: 0x17b834, Func Offset: 0x24
	// Line 102, Address: 0x17b840, Func Offset: 0x30
	// Func End, Address: 0x17b848, Func Offset: 0x38
}

// 
// Start address: 0x17b850
void sh2gfw_setREF_TEXFLUSH()
{
	Q_WORDDATA* qwd;
	// Line 127, Address: 0x17b850, Func Offset: 0
	// Line 128, Address: 0x17b858, Func Offset: 0x8
	// Line 129, Address: 0x17b884, Func Offset: 0x34
	// Line 131, Address: 0x17b890, Func Offset: 0x40
	// Func End, Address: 0x17b898, Func Offset: 0x48
}

