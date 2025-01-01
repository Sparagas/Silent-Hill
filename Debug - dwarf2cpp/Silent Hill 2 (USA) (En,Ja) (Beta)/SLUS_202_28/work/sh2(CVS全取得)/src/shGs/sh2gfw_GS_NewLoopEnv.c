typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef struct shGsAllEnv;
typedef struct _anon5;
typedef struct _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef struct shGsDrawEnv;
typedef struct _anon9;
typedef union Q_WORDDATA;
typedef struct shGsStencilDrawEnv;
typedef struct _anon10;
typedef struct _anon11;
typedef struct shGsLoopEnv;
typedef struct _anon12;
typedef struct _anon13;
typedef struct shGsTinyDrawEnv;
typedef struct _anon14;
typedef struct _anon15;
typedef struct _anon16;
typedef struct _anon17;
typedef struct _anon18;
typedef struct _anon19;


typedef shGsDrawEnv type_0[3];
typedef shGsStencilDrawEnv type_1[3];
typedef shGsTinyDrawEnv type_2[6];
typedef Q_WORDDATA type_3[10];
typedef Q_WORDDATA type_4[10];
typedef Q_WORDDATA type_5[10];
typedef Q_WORDDATA type_6[10];
typedef Q_WORDDATA type_7[10];
typedef Q_WORDDATA type_8[10];
typedef Q_WORDDATA type_9[10];
typedef Q_WORDDATA type_10[8];
typedef Q_WORDDATA type_11[2];
typedef Q_WORDDATA type_12[2];
typedef Q_WORDDATA type_13[2];
typedef Q_WORDDATA type_14[2];
typedef Q_WORDDATA type_15[2];
typedef Q_WORDDATA type_16[2];
typedef Q_WORDDATA type_17[2];
typedef Q_WORDDATA type_18[2];
typedef Q_WORDDATA type_19[2];
typedef Q_WORDDATA type_20[5];
typedef Q_WORDDATA type_21[2];
typedef Q_WORDDATA type_22[2];
typedef Q_WORDDATA type_23[2];
typedef Q_WORDDATA type_24[5];
typedef unsigned int type_25[3];
typedef Q_WORDDATA type_26[2];
typedef Q_WORDDATA type_27[2];
typedef Q_WORDDATA type_28[2];
typedef Q_WORDDATA type_29[2];
typedef unsigned int type_30[3];
typedef Q_WORDDATA type_31[2];
typedef Q_WORDDATA type_32[2];
typedef Q_WORDDATA type_33[2];
typedef unsigned int type_34[4];
typedef Q_WORDDATA type_35[2];
typedef unsigned short type_36[8];
typedef Q_WORDDATA type_37[6];
typedef Q_WORDDATA type_38[2];
typedef float type_39[4];
typedef unsigned char type_40[16];
typedef int type_41[4];
typedef Q_WORDDATA type_42[6];
typedef short type_43[8];
typedef char type_44[16];
typedef unsigned long type_45[2];
typedef unsigned int type_46[3];
typedef unsigned int type_47[3];
typedef unsigned int type_48[3];
typedef unsigned int type_49[24];
typedef unsigned int type_50[3];
typedef unsigned int type_51[3];
typedef unsigned short type_52[8];
typedef _anon14 type_53[3];

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
		unsigned long OFX : 16;
		unsigned long pad16 : 16;
		unsigned long OFY : 16;
		unsigned long pad48 : 16;
	};
};

struct _anon3
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

struct _anon4
{
	struct
	{
		unsigned long X : 16;
		unsigned long Y : 16;
		unsigned long Z : 32;
	};
};

struct shGsAllEnv
{
	unsigned long loop_counter;
	unsigned int loop;
	unsigned int loop3;
	shGsLoopEnv LoopEnv;
	_anon14 DispEnv[3];
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

struct _anon5
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

struct _anon6
{
	_anon19 testa;
	long testaaddr;
	_anon9 prim;
	long primaddr;
	_anon12 rgbaq;
	long rgbaqaddr;
	_anon4 xyz2a;
	long xyz2aaddr;
	_anon4 xyz2b;
	long xyz2baddr;
	_anon19 testb;
	long testbaddr;
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

struct shGsDrawEnv
{
	_anon0 giftag;
	_anon17 draw;
	Q_WORDDATA drawq2[5];
	_anon6 clear;
	_anon0 giftag_nc;
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

struct _anon9
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

struct shGsStencilDrawEnv
{
	_anon0 giftag;
	_anon17 draw;
	Q_WORDDATA alpha1;
	Q_WORDDATA drawq2[6];
	_anon6 clear;
	Q_WORDDATA frame;
	_anon0 giftag_nc;
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

struct _anon10
{
	struct
	{
		unsigned long DTHE : 1;
		unsigned long pad01 : 63;
	};
};

struct _anon11
{
	struct
	{
		unsigned long AC : 1;
		unsigned long pad01 : 63;
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

struct _anon12
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

struct _anon13
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
	_anon16 pmode;
	_anon3 smode2;
	_anon18 dispfb;
	_anon5 display;
	_anon7 bgcolor;
};

struct _anon15
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

struct _anon16
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

struct _anon17
{
	_anon15 frame1;
	unsigned long frame1addr;
	_anon8 zbuf1;
	long zbuf1addr;
	_anon2 xyoffset1;
	long xyoffset1addr;
	_anon13 scissor1;
	long scissor1addr;
	_anon11 prmodecont;
	long prmodecontaddr;
	_anon1 colclamp;
	long colclampaddr;
	_anon10 dthe;
	long dtheaddr;
	_anon19 test1;
	long test1addr;
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
unsigned int sh2gfw_DeclimentLoopCounter(shGsAllEnv* stdb);
int sh2gfw_ForceSet_MovieDrawLoopCounter();
unsigned int sh2gfw_GetNowDispFBP(shGsAllEnv* stdb);
unsigned int sh2gfw_GetTexTBP0(shGsAllEnv* stdb, unsigned int page);
unsigned int sh2gfw_GetSendingClutTBP0(shGsAllEnv* stdb, unsigned int page);
unsigned int sh2gfw_Get_BaseTBP0for2D();

// 
// Start address: 0x18efc0
int sh2gfw_RotateTBuff(shGsAllEnv* shGsEnv)
{
	// Line 165, Address: 0x18efc0, Func Offset: 0
	// Line 170, Address: 0x18efd0, Func Offset: 0x10
	// Line 173, Address: 0x18eff0, Func Offset: 0x30
	// Line 174, Address: 0x18f018, Func Offset: 0x58
	// Line 178, Address: 0x18f020, Func Offset: 0x60
	// Line 179, Address: 0x18f024, Func Offset: 0x64
	// Func End, Address: 0x18f038, Func Offset: 0x78
}

// 
// Start address: 0x18f040
int sh2gfw_ReturnTBuff(shGsAllEnv* shGsEnv)
{
	// Line 188, Address: 0x18f040, Func Offset: 0
	// Line 190, Address: 0x18f050, Func Offset: 0x10
	// Line 191, Address: 0x18f058, Func Offset: 0x18
	// Line 192, Address: 0x18f080, Func Offset: 0x40
	// Line 195, Address: 0x18f088, Func Offset: 0x48
	// Line 197, Address: 0x18f08c, Func Offset: 0x4c
	// Func End, Address: 0x18f0a0, Func Offset: 0x60
}

// 
// Start address: 0x18f0a0
int sh2gfw_RotateNext2(shGsAllEnv* stdb)
{
	unsigned int idd[3];
	// Line 222, Address: 0x18f0a0, Func Offset: 0
	// Line 223, Address: 0x18f0b0, Func Offset: 0x10
	// Line 226, Address: 0x18f0cc, Func Offset: 0x2c
	// Line 227, Address: 0x18f0d4, Func Offset: 0x34
	// Line 228, Address: 0x18f108, Func Offset: 0x68
	// Line 229, Address: 0x18f10c, Func Offset: 0x6c
	// Func End, Address: 0x18f120, Func Offset: 0x80
}

// 
// Start address: 0x18f120
void sh2gfw_set_LoopDrawEnv(shGsAllEnv* stdb)
{
	// Line 237, Address: 0x18f120, Func Offset: 0
	// Line 239, Address: 0x18f16c, Func Offset: 0x4c
	// Func End, Address: 0x18f174, Func Offset: 0x54
}

// 
// Start address: 0x18f180
<unknown fundamental type (0xa510)>* sh2gfw_Get_FrameNormalRegAddr()
{
	// Line 245, Address: 0x18f180, Func Offset: 0
	// Line 246, Address: 0x18f188, Func Offset: 0x8
	// Func End, Address: 0x18f190, Func Offset: 0x10
}

// 
// Start address: 0x18f190
<unknown fundamental type (0xa510)>* sh2gfw_Get_FrameAlphaRegAddr()
{
	// Line 253, Address: 0x18f190, Func Offset: 0
	// Line 254, Address: 0x18f198, Func Offset: 0x8
	// Func End, Address: 0x18f1a0, Func Offset: 0x10
}

// 
// Start address: 0x18f1a0
void sh2gfw_StartShadowEnv(shGsAllEnv* stdb)
{
	// Line 271, Address: 0x18f1a0, Func Offset: 0
	// Line 274, Address: 0x18f1b0, Func Offset: 0x10
	// Line 275, Address: 0x18f1b8, Func Offset: 0x18
	// Line 276, Address: 0x18f1e0, Func Offset: 0x40
	// Line 279, Address: 0x18f1e8, Func Offset: 0x48
	// Func End, Address: 0x18f1fc, Func Offset: 0x5c
}

// 
// Start address: 0x18f200
unsigned int sh2gfw_GetStencilFBP(shGsAllEnv* stdb)
{
	// Line 289, Address: 0x18f200, Func Offset: 0
	// Line 290, Address: 0x18f224, Func Offset: 0x24
	// Func End, Address: 0x18f22c, Func Offset: 0x2c
}

// 
// Start address: 0x18f230
unsigned int sh2gfw_GetFilterFBP(shGsAllEnv* stdb, unsigned int page)
{
	// Line 296, Address: 0x18f230, Func Offset: 0
	// Line 297, Address: 0x18f254, Func Offset: 0x24
	// Func End, Address: 0x18f25c, Func Offset: 0x2c
}

// 
// Start address: 0x18f260
void sh2gfw_StartShadowFilter(shGsAllEnv* stdb, unsigned int page)
{
	// Line 306, Address: 0x18f260, Func Offset: 0
	// Line 308, Address: 0x18f278, Func Offset: 0x18
	// Line 309, Address: 0x18f280, Func Offset: 0x20
	// Line 310, Address: 0x18f2a8, Func Offset: 0x48
	// Line 313, Address: 0x18f2b0, Func Offset: 0x50
	// Func End, Address: 0x18f2c8, Func Offset: 0x68
}

// 
// Start address: 0x18f2d0
void sh2gfw_ChangeMask_ShadowFilter(shGsAllEnv* stdb, int mode, int pageno)
{
	unsigned int id;
	// Line 323, Address: 0x18f2d0, Func Offset: 0
	// Line 326, Address: 0x18f2d8, Func Offset: 0x8
	// Line 328, Address: 0x18f2e0, Func Offset: 0x10
	// Line 330, Address: 0x18f2fc, Func Offset: 0x2c
	// Line 332, Address: 0x18f31c, Func Offset: 0x4c
	// Line 334, Address: 0x18f324, Func Offset: 0x54
	// Line 336, Address: 0x18f344, Func Offset: 0x74
	// Line 338, Address: 0x18f34c, Func Offset: 0x7c
	// Line 343, Address: 0x18f36c, Func Offset: 0x9c
	// Func End, Address: 0x18f37c, Func Offset: 0xac
}

// 
// Start address: 0x18f380
void sh2gfw_ChangeClear_StencilBuf(shGsAllEnv* stdb, unsigned int r, unsigned int g, unsigned int b, unsigned int a)
{
	Q_WORDDATA* qwd;
	// Line 354, Address: 0x18f380, Func Offset: 0
	// Line 356, Address: 0x18f39c, Func Offset: 0x1c
	// Line 358, Address: 0x18f3b8, Func Offset: 0x38
	// Func End, Address: 0x18f3c0, Func Offset: 0x40
}

// 
// Start address: 0x18f3c0
unsigned int sh2gfw_InclimentLoopCounter(shGsAllEnv* stdb)
{
	// Line 373, Address: 0x18f3c0, Func Offset: 0
	// Line 374, Address: 0x18f3cc, Func Offset: 0xc
	// Line 375, Address: 0x18f3e8, Func Offset: 0x28
	// Line 376, Address: 0x18f3f4, Func Offset: 0x34
	// Line 378, Address: 0x18f400, Func Offset: 0x40
	// Line 379, Address: 0x18f404, Func Offset: 0x44
	// Func End, Address: 0x18f40c, Func Offset: 0x4c
}

// 
// Start address: 0x18f410
unsigned int sh2gfw_DeclimentLoopCounter(shGsAllEnv* stdb)
{
	// Line 384, Address: 0x18f410, Func Offset: 0
	// Line 386, Address: 0x18f41c, Func Offset: 0xc
	// Line 387, Address: 0x18f438, Func Offset: 0x28
	// Line 389, Address: 0x18f440, Func Offset: 0x30
	// Line 390, Address: 0x18f44c, Func Offset: 0x3c
	// Line 391, Address: 0x18f458, Func Offset: 0x48
	// Line 392, Address: 0x18f460, Func Offset: 0x50
	// Line 393, Address: 0x18f468, Func Offset: 0x58
	// Line 394, Address: 0x18f46c, Func Offset: 0x5c
	// Line 396, Address: 0x18f470, Func Offset: 0x60
	// Func End, Address: 0x18f478, Func Offset: 0x68
}

// 
// Start address: 0x18f480
int sh2gfw_ForceSet_MovieDrawLoopCounter()
{
	// Line 419, Address: 0x18f480, Func Offset: 0
	// Line 421, Address: 0x18f4b0, Func Offset: 0x30
	// Line 422, Address: 0x18f4b8, Func Offset: 0x38
	// Line 423, Address: 0x18f4cc, Func Offset: 0x4c
	// Line 425, Address: 0x18f4e0, Func Offset: 0x60
	// Line 429, Address: 0x18f4ec, Func Offset: 0x6c
	// Line 430, Address: 0x18f4f4, Func Offset: 0x74
	// Line 431, Address: 0x18f508, Func Offset: 0x88
	// Line 433, Address: 0x18f51c, Func Offset: 0x9c
	// Line 443, Address: 0x18f524, Func Offset: 0xa4
	// Line 449, Address: 0x18f528, Func Offset: 0xa8
	// Func End, Address: 0x18f530, Func Offset: 0xb0
}

// 
// Start address: 0x18f530
unsigned int sh2gfw_GetNowDispFBP(shGsAllEnv* stdb)
{
	// Line 453, Address: 0x18f530, Func Offset: 0
	// Line 454, Address: 0x18f54c, Func Offset: 0x1c
	// Func End, Address: 0x18f554, Func Offset: 0x24
}

// 
// Start address: 0x18f560
unsigned int sh2gfw_GetTexTBP0(shGsAllEnv* stdb, unsigned int page)
{
	// Line 471, Address: 0x18f560, Func Offset: 0
	// Line 473, Address: 0x18f578, Func Offset: 0x18
	// Func End, Address: 0x18f580, Func Offset: 0x20
}

// 
// Start address: 0x18f580
unsigned int sh2gfw_GetSendingClutTBP0(shGsAllEnv* stdb, unsigned int page)
{
	// Line 484, Address: 0x18f580, Func Offset: 0
	// Line 486, Address: 0x18f58c, Func Offset: 0xc
	// Func End, Address: 0x18f594, Func Offset: 0x14
}

// 
// Start address: 0x18f5a0
unsigned int sh2gfw_Get_BaseTBP0for2D()
{
	// Line 493, Address: 0x18f5a0, Func Offset: 0
	// Line 494, Address: 0x18f5a8, Func Offset: 0x8
	// Line 495, Address: 0x18f5bc, Func Offset: 0x1c
	// Func End, Address: 0x18f5cc, Func Offset: 0x2c
}

