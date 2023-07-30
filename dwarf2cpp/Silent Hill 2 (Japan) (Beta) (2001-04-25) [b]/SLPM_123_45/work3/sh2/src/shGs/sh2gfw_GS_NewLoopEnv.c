typedef struct shGsAllEnv;
typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef union Q_WORDDATA;
typedef struct shGsDrawEnv;
typedef struct _anon4;
typedef struct _anon5;
typedef struct _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef struct _anon9;
typedef struct _anon10;
typedef struct shGsStencilDrawEnv;
typedef struct shGsLoopEnv;
typedef struct _anon11;
typedef struct _anon12;
typedef struct _anon13;
typedef struct shGsTinyDrawEnv;
typedef struct _anon14;
typedef struct _anon15;
typedef struct _anon16;
typedef struct _anon17;
typedef struct _anon18;
typedef struct _anon19;


typedef Q_WORDDATA type_0[8];
typedef Q_WORDDATA type_1[2];
typedef Q_WORDDATA type_2[2];
typedef Q_WORDDATA type_3[2];
typedef Q_WORDDATA type_4[2];
typedef Q_WORDDATA type_5[2];
typedef Q_WORDDATA type_6[2];
typedef unsigned int type_7[4];
typedef Q_WORDDATA type_8[2];
typedef unsigned short type_9[8];
typedef Q_WORDDATA type_10[2];
typedef float type_11[4];
typedef Q_WORDDATA type_12[2];
typedef unsigned int type_13[3];
typedef unsigned char type_14[16];
typedef Q_WORDDATA type_15[5];
typedef Q_WORDDATA type_16[2];
typedef int type_17[4];
typedef Q_WORDDATA type_18[2];
typedef short type_19[8];
typedef unsigned int type_20[3];
typedef Q_WORDDATA type_21[2];
typedef char type_22[16];
typedef Q_WORDDATA type_23[5];
typedef unsigned long type_24[2];
typedef Q_WORDDATA type_25[2];
typedef Q_WORDDATA type_26[2];
typedef Q_WORDDATA type_27[2];
typedef Q_WORDDATA type_28[2];
typedef Q_WORDDATA type_29[2];
typedef Q_WORDDATA type_30[2];
typedef Q_WORDDATA type_31[2];
typedef Q_WORDDATA type_32[2];
typedef Q_WORDDATA type_33[6];
typedef Q_WORDDATA type_34[2];
typedef Q_WORDDATA type_35[6];
typedef unsigned int type_36[3];
typedef unsigned int type_37[3];
typedef unsigned int type_38[3];
typedef unsigned int type_39[24];
typedef unsigned int type_40[3];
typedef unsigned int type_41[3];
typedef unsigned short type_42[8];
typedef _anon5 type_43[3];
typedef shGsDrawEnv type_44[3];
typedef shGsStencilDrawEnv type_45[3];
typedef shGsTinyDrawEnv type_46[6];
typedef Q_WORDDATA type_47[10];
typedef Q_WORDDATA type_48[10];
typedef Q_WORDDATA type_49[10];
typedef Q_WORDDATA type_50[10];
typedef Q_WORDDATA type_51[10];
typedef Q_WORDDATA type_52[10];
typedef Q_WORDDATA type_53[10];

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

struct _anon5
{
	_anon17 pmode;
	_anon2 smode2;
	_anon18 dispfb;
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
	_anon16 frame1;
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
	_anon19 test1;
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

struct _anon11
{
	struct
	{
		unsigned long AC : 1;
		unsigned long pad01 : 63;
	};
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
	_anon19 testa;
	long testaaddr;
	_anon10 prim;
	long primaddr;
	_anon13 rgbaq;
	long rgbaqaddr;
	_anon4 xyz2a;
	long xyz2aaddr;
	_anon4 xyz2b;
	long xyz2baddr;
	_anon19 testb;
	long testbaddr;
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

struct _anon17
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

struct _anon18
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

struct _anon19
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

shGsAllEnv shGs_AllEnv;

int sh2gfw_RotateTBuff(shGsAllEnv* shGsEnv);
int sh2gfw_ReturnTBuff(shGsAllEnv* shGsEnv);
int sh2gfw_RotateNext2(shGsAllEnv* stdb);
void sh2gfw_set_LoopDrawEnv(shGsAllEnv* stdb);
<unknown fundamental type (0xa510)>* sh2gfw_Get_FrameNormalRegAddr();
<unknown fundamental type (0xa510)>* sh2gfw_Get_FrameAlphaRegAddr();
void sh2gfw_StartShadowEnv(shGsAllEnv* stdb);
unsigned int sh2gfw_GetStencilFBP(shGsAllEnv* stdb);
unsigned int sh2gfw_GetFilterFBP(shGsAllEnv* stdb, unsigned int page);
void sh2gfw_StartShadowFilter(shGsAllEnv* stdb, unsigned int page);
void sh2gfw_ChangeMask_ShadowFilter(shGsAllEnv* stdb, int mode, int pageno);
void sh2gfw_ChangeClear_StencilBuf(shGsAllEnv* stdb, unsigned int r, unsigned int g, unsigned int b, unsigned int a);
unsigned int sh2gfw_InclimentLoopCounter(shGsAllEnv* stdb);
unsigned int sh2gfw_GetTexTBP0(shGsAllEnv* stdb, unsigned int page);
unsigned int sh2gfw_GetSendingClutTBP0(shGsAllEnv* stdb, unsigned int page);
unsigned int sh2gfw_Get_BaseTBP0for2D();

// 
// Start address: 0x1945f0
int sh2gfw_RotateTBuff(shGsAllEnv* shGsEnv)
{
	// Line 165, Address: 0x1945f0, Func Offset: 0
	// Line 170, Address: 0x1945fc, Func Offset: 0xc
	// Line 173, Address: 0x194624, Func Offset: 0x34
	// Line 174, Address: 0x194654, Func Offset: 0x64
	// Line 178, Address: 0x19465c, Func Offset: 0x6c
	// Line 179, Address: 0x194664, Func Offset: 0x74
	// Func End, Address: 0x194674, Func Offset: 0x84
}

// 
// Start address: 0x194680
int sh2gfw_ReturnTBuff(shGsAllEnv* shGsEnv)
{
	// Line 188, Address: 0x194680, Func Offset: 0
	// Line 190, Address: 0x19468c, Func Offset: 0xc
	// Line 191, Address: 0x194694, Func Offset: 0x14
	// Line 192, Address: 0x1946c4, Func Offset: 0x44
	// Line 195, Address: 0x1946cc, Func Offset: 0x4c
	// Line 197, Address: 0x1946d4, Func Offset: 0x54
	// Func End, Address: 0x1946e4, Func Offset: 0x64
}

// 
// Start address: 0x1946f0
int sh2gfw_RotateNext2(shGsAllEnv* stdb)
{
	unsigned int idd[3];
	// Line 222, Address: 0x1946f0, Func Offset: 0
	// Line 223, Address: 0x1946fc, Func Offset: 0xc
	// Line 226, Address: 0x194718, Func Offset: 0x28
	// Line 227, Address: 0x194720, Func Offset: 0x30
	// Line 228, Address: 0x19475c, Func Offset: 0x6c
	// Line 229, Address: 0x194764, Func Offset: 0x74
	// Func End, Address: 0x194774, Func Offset: 0x84
}

// 
// Start address: 0x194780
void sh2gfw_set_LoopDrawEnv(shGsAllEnv* stdb)
{
	// Line 235, Address: 0x194780, Func Offset: 0
	// Line 237, Address: 0x194788, Func Offset: 0x8
	// Line 239, Address: 0x1947e0, Func Offset: 0x60
	// Func End, Address: 0x1947ec, Func Offset: 0x6c
}

// 
// Start address: 0x1947f0
<unknown fundamental type (0xa510)>* sh2gfw_Get_FrameNormalRegAddr()
{
	// Line 245, Address: 0x1947f0, Func Offset: 0
	// Line 246, Address: 0x1947f8, Func Offset: 0x8
	// Func End, Address: 0x194800, Func Offset: 0x10
}

// 
// Start address: 0x194800
<unknown fundamental type (0xa510)>* sh2gfw_Get_FrameAlphaRegAddr()
{
	// Line 253, Address: 0x194800, Func Offset: 0
	// Line 254, Address: 0x194808, Func Offset: 0x8
	// Func End, Address: 0x194810, Func Offset: 0x10
}

// 
// Start address: 0x194810
void sh2gfw_StartShadowEnv(shGsAllEnv* stdb)
{
	// Line 271, Address: 0x194810, Func Offset: 0
	// Line 274, Address: 0x19481c, Func Offset: 0xc
	// Line 275, Address: 0x194824, Func Offset: 0x14
	// Line 276, Address: 0x194854, Func Offset: 0x44
	// Line 279, Address: 0x19485c, Func Offset: 0x4c
	// Func End, Address: 0x19486c, Func Offset: 0x5c
}

// 
// Start address: 0x194870
unsigned int sh2gfw_GetStencilFBP(shGsAllEnv* stdb)
{
	// Line 288, Address: 0x194870, Func Offset: 0
	// Line 289, Address: 0x194878, Func Offset: 0x8
	// Line 290, Address: 0x1948a4, Func Offset: 0x34
	// Func End, Address: 0x1948b0, Func Offset: 0x40
}

// 
// Start address: 0x1948b0
unsigned int sh2gfw_GetFilterFBP(shGsAllEnv* stdb, unsigned int page)
{
	// Line 295, Address: 0x1948b0, Func Offset: 0
	// Line 296, Address: 0x1948bc, Func Offset: 0xc
	// Line 297, Address: 0x1948ec, Func Offset: 0x3c
	// Func End, Address: 0x1948f8, Func Offset: 0x48
}

// 
// Start address: 0x194900
void sh2gfw_StartShadowFilter(shGsAllEnv* stdb, unsigned int page)
{
	// Line 306, Address: 0x194900, Func Offset: 0
	// Line 308, Address: 0x194910, Func Offset: 0x10
	// Line 309, Address: 0x194918, Func Offset: 0x18
	// Line 310, Address: 0x19494c, Func Offset: 0x4c
	// Line 313, Address: 0x194954, Func Offset: 0x54
	// Func End, Address: 0x194964, Func Offset: 0x64
}

// 
// Start address: 0x194970
void sh2gfw_ChangeMask_ShadowFilter(shGsAllEnv* stdb, int mode, int pageno)
{
	unsigned int id;
	// Line 323, Address: 0x194970, Func Offset: 0
	// Line 326, Address: 0x194988, Func Offset: 0x18
	// Line 328, Address: 0x194994, Func Offset: 0x24
	// Line 330, Address: 0x1949b4, Func Offset: 0x44
	// Line 332, Address: 0x1949dc, Func Offset: 0x6c
	// Line 334, Address: 0x1949e4, Func Offset: 0x74
	// Line 336, Address: 0x194a0c, Func Offset: 0x9c
	// Line 338, Address: 0x194a14, Func Offset: 0xa4
	// Line 343, Address: 0x194a3c, Func Offset: 0xcc
	// Func End, Address: 0x194a50, Func Offset: 0xe0
}

// 
// Start address: 0x194a50
void sh2gfw_ChangeClear_StencilBuf(shGsAllEnv* stdb, unsigned int r, unsigned int g, unsigned int b, unsigned int a)
{
	Q_WORDDATA* qwd;
	// Line 351, Address: 0x194a50, Func Offset: 0
	// Line 354, Address: 0x194a6c, Func Offset: 0x1c
	// Line 356, Address: 0x194a94, Func Offset: 0x44
	// Line 358, Address: 0x194ac0, Func Offset: 0x70
	// Func End, Address: 0x194ad0, Func Offset: 0x80
}

// 
// Start address: 0x194ad0
unsigned int sh2gfw_InclimentLoopCounter(shGsAllEnv* stdb)
{
	// Line 372, Address: 0x194ad0, Func Offset: 0
	// Line 373, Address: 0x194ad8, Func Offset: 0x8
	// Line 374, Address: 0x194ae8, Func Offset: 0x18
	// Line 375, Address: 0x194b08, Func Offset: 0x38
	// Line 376, Address: 0x194b1c, Func Offset: 0x4c
	// Line 378, Address: 0x194b2c, Func Offset: 0x5c
	// Line 379, Address: 0x194b34, Func Offset: 0x64
	// Func End, Address: 0x194b40, Func Offset: 0x70
}

// 
// Start address: 0x194b40
unsigned int sh2gfw_GetTexTBP0(shGsAllEnv* stdb, unsigned int page)
{
	// Line 401, Address: 0x194b40, Func Offset: 0
	// Line 402, Address: 0x194b4c, Func Offset: 0xc
	// Line 404, Address: 0x194b70, Func Offset: 0x30
	// Func End, Address: 0x194b7c, Func Offset: 0x3c
}

// 
// Start address: 0x194b80
unsigned int sh2gfw_GetSendingClutTBP0(shGsAllEnv* stdb, unsigned int page)
{
	// Line 414, Address: 0x194b80, Func Offset: 0
	// Line 415, Address: 0x194b8c, Func Offset: 0xc
	// Line 417, Address: 0x194ba4, Func Offset: 0x24
	// Func End, Address: 0x194bb0, Func Offset: 0x30
}

// 
// Start address: 0x194bb0
unsigned int sh2gfw_Get_BaseTBP0for2D()
{
	// Line 424, Address: 0x194bb0, Func Offset: 0
	// Line 425, Address: 0x194bb8, Func Offset: 0x8
	// Line 426, Address: 0x194bcc, Func Offset: 0x1c
	// Func End, Address: 0x194bdc, Func Offset: 0x2c
}

