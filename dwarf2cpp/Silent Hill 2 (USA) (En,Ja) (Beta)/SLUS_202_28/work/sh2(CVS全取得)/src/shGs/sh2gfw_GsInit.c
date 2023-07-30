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
typedef struct shGsDrawEnv;
typedef struct _anon9;
typedef union Q_WORDDATA;
typedef struct shGsStencilDrawEnv;
typedef struct _anon10;
typedef struct _anon11;
typedef struct _anon12;
typedef struct shGsLoopEnv;
typedef struct _anon13;
typedef struct _anon14;
typedef struct shGsTinyDrawEnv;
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
typedef Q_WORDDATA type_25[2];
typedef Q_WORDDATA type_26[2];
typedef Q_WORDDATA type_27[2];
typedef Q_WORDDATA type_28[2];
typedef Q_WORDDATA type_29[2];
typedef Q_WORDDATA type_30[2];
typedef Q_WORDDATA type_31[2];
typedef unsigned int type_32[4];
typedef Q_WORDDATA type_33[2];
typedef unsigned short type_34[8];
typedef Q_WORDDATA type_35[6];
typedef Q_WORDDATA type_36[2];
typedef float type_37[4];
typedef unsigned char type_38[16];
typedef int type_39[4];
typedef Q_WORDDATA type_40[6];
typedef short type_41[8];
typedef char type_42[16];
typedef unsigned long type_43[2];
typedef unsigned int type_44[3];
typedef unsigned int type_45[3];
typedef unsigned int type_46[3];
typedef unsigned int type_47[24];
typedef unsigned int type_48[3];
typedef unsigned int type_49[3];
typedef unsigned short type_50[8];
typedef _anon15 type_51[3];

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
		unsigned long X : 16;
		unsigned long Y : 16;
		unsigned long Z : 32;
	};
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
	_anon13 rgbaq;
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
	_anon10 draw;
	Q_WORDDATA drawq2[5];
	_anon6 clear;
	_anon0 giftag_nc;
	_anon10 draw_nc;
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
	_anon10 draw;
	Q_WORDDATA alpha1;
	Q_WORDDATA drawq2[6];
	_anon6 clear;
	Q_WORDDATA frame;
	_anon0 giftag_nc;
	_anon10 draw_nc;
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
	_anon16 frame1;
	unsigned long frame1addr;
	_anon8 zbuf1;
	long zbuf1addr;
	_anon2 xyoffset1;
	long xyoffset1addr;
	_anon14 scissor1;
	long scissor1addr;
	_anon12 prmodecont;
	long prmodecontaddr;
	_anon1 colclamp;
	long colclampaddr;
	_anon11 dthe;
	long dtheaddr;
	_anon19 test1;
	long test1addr;
};

struct _anon11
{
	struct
	{
		unsigned long DTHE : 1;
		unsigned long pad01 : 63;
	};
};

struct _anon12
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

struct _anon14
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

struct _anon15
{
	_anon17 pmode;
	_anon3 smode2;
	_anon18 dispfb;
	_anon5 display;
	_anon7 bgcolor;
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

void shGs_InitDefTBuff(shGsAllEnv* shGsEnv, short draw_psm, short disp_psm, short w, short h, short ztest, short zpsm);
void shGs_TrimDispArea(int xx, int yy);
void shGs_SetDefaultDispArea();
void shGsSetDefTBuffDispEnv(_anon15* disp, short psm, short w, short h, short dx, short dy);
int shGsSetDefTBuffDrawEnv(_anon10* draw, short psm, short w, short h, short ztest, short zpsm);
void shGs_InitGsStencilBuff(shGsAllEnv* shGsEnv, short w, short h, short ztest, short zpsm);
int shGs_InitStencilDrawEnv(shGsStencilDrawEnv* ssb, short w, short h, short ztest, short zpsm);
void shGs_InitGsTinyStencilBuff(shGsAllEnv* shGsEnv, short w, short h);
void shGs_InitDefaultRegsEnv(shGsAllEnv* shGsEnv);

// 
// Start address: 0x18f5d0
void shGs_InitDefTBuff(shGsAllEnv* shGsEnv, short draw_psm, short disp_psm, short w, short h, short ztest, short zpsm)
{
	unsigned int i;
	// Line 41, Address: 0x18f5d0, Func Offset: 0
	// Line 47, Address: 0x18f614, Func Offset: 0x44
	// Line 48, Address: 0x18f620, Func Offset: 0x50
	// Line 49, Address: 0x18f650, Func Offset: 0x80
	// Line 52, Address: 0x18f664, Func Offset: 0x94
	// Line 53, Address: 0x18f670, Func Offset: 0xa0
	// Line 54, Address: 0x18f6a8, Func Offset: 0xd8
	// Line 58, Address: 0x18f6bc, Func Offset: 0xec
	// Line 59, Address: 0x18f6c8, Func Offset: 0xf8
	// Line 61, Address: 0x18f740, Func Offset: 0x170
	// Line 73, Address: 0x18f754, Func Offset: 0x184
	// Line 74, Address: 0x18f760, Func Offset: 0x190
	// Line 76, Address: 0x18f77c, Func Offset: 0x1ac
	// Line 77, Address: 0x18f794, Func Offset: 0x1c4
	// Line 78, Address: 0x18f7ac, Func Offset: 0x1dc
	// Line 79, Address: 0x18f7c4, Func Offset: 0x1f4
	// Line 80, Address: 0x18f7dc, Func Offset: 0x20c
	// Line 82, Address: 0x18f7ec, Func Offset: 0x21c
	// Line 83, Address: 0x18f800, Func Offset: 0x230
	// Line 84, Address: 0x18f834, Func Offset: 0x264
	// Line 87, Address: 0x18f844, Func Offset: 0x274
	// Line 88, Address: 0x18f850, Func Offset: 0x280
	// Line 89, Address: 0x18f880, Func Offset: 0x2b0
	// Line 90, Address: 0x18f8b0, Func Offset: 0x2e0
	// Line 93, Address: 0x18f8c8, Func Offset: 0x2f8
	// Line 101, Address: 0x18f8e4, Func Offset: 0x314
	// Line 103, Address: 0x18f91c, Func Offset: 0x34c
	// Line 111, Address: 0x18f924, Func Offset: 0x354
	// Line 113, Address: 0x18f95c, Func Offset: 0x38c
	// Line 121, Address: 0x18f964, Func Offset: 0x394
	// Line 123, Address: 0x18f99c, Func Offset: 0x3cc
	// Line 131, Address: 0x18f9a4, Func Offset: 0x3d4
	// Line 133, Address: 0x18f9e0, Func Offset: 0x410
	// Line 136, Address: 0x18f9f4, Func Offset: 0x424
	// Line 138, Address: 0x18fa00, Func Offset: 0x430
	// Line 142, Address: 0x18fa68, Func Offset: 0x498
	// Line 144, Address: 0x18fa9c, Func Offset: 0x4cc
	// Line 145, Address: 0x18faa4, Func Offset: 0x4d4
	// Line 148, Address: 0x18faac, Func Offset: 0x4dc
	// Line 149, Address: 0x18fab4, Func Offset: 0x4e4
	// Line 152, Address: 0x18fabc, Func Offset: 0x4ec
	// Line 153, Address: 0x18fac4, Func Offset: 0x4f4
	// Line 157, Address: 0x18facc, Func Offset: 0x4fc
	// Line 158, Address: 0x18fad4, Func Offset: 0x504
	// Line 159, Address: 0x18fadc, Func Offset: 0x50c
	// Line 160, Address: 0x18fae4, Func Offset: 0x514
	// Line 161, Address: 0x18faec, Func Offset: 0x51c
	// Line 163, Address: 0x18faf4, Func Offset: 0x524
	// Line 167, Address: 0x18fb04, Func Offset: 0x534
	// Func End, Address: 0x18fb34, Func Offset: 0x564
}

// 
// Start address: 0x18fb40
void shGs_TrimDispArea(int xx, int yy)
{
	int i;
	// Line 173, Address: 0x18fb40, Func Offset: 0
	// Line 174, Address: 0x18fb4c, Func Offset: 0xc
	// Line 175, Address: 0x18fb88, Func Offset: 0x48
	// Line 176, Address: 0x18fbb4, Func Offset: 0x74
	// Line 179, Address: 0x18fbc4, Func Offset: 0x84
	// Func End, Address: 0x18fbcc, Func Offset: 0x8c
}

// 
// Start address: 0x18fbd0
void shGs_SetDefaultDispArea()
{
	int i;
	// Line 186, Address: 0x18fbd0, Func Offset: 0
	// Line 187, Address: 0x18fbdc, Func Offset: 0xc
	// Line 188, Address: 0x18fc0c, Func Offset: 0x3c
	// Line 189, Address: 0x18fc28, Func Offset: 0x58
	// Line 192, Address: 0x18fc3c, Func Offset: 0x6c
	// Func End, Address: 0x18fc44, Func Offset: 0x74
}

// 
// Start address: 0x18fc50
void shGsSetDefTBuffDispEnv(_anon15* disp, short psm, short w, short h, short dx, short dy)
{
	// Line 199, Address: 0x18fc50, Func Offset: 0
	// Line 200, Address: 0x18fc84, Func Offset: 0x34
	// Line 201, Address: 0x18fcac, Func Offset: 0x5c
	// Line 202, Address: 0x18fcbc, Func Offset: 0x6c
	// Line 203, Address: 0x18fcc4, Func Offset: 0x74
	// Line 204, Address: 0x18fccc, Func Offset: 0x7c
	// Line 205, Address: 0x18fce0, Func Offset: 0x90
	// Line 206, Address: 0x18fcf4, Func Offset: 0xa4
	// Line 208, Address: 0x18fd04, Func Offset: 0xb4
	// Line 209, Address: 0x18fd0c, Func Offset: 0xbc
	// Line 210, Address: 0x18fd14, Func Offset: 0xc4
	// Line 225, Address: 0x18fd1c, Func Offset: 0xcc
	// Line 226, Address: 0x18fd34, Func Offset: 0xe4
	// Line 231, Address: 0x18fd60, Func Offset: 0x110
	// Line 232, Address: 0x18fd7c, Func Offset: 0x12c
	// Line 233, Address: 0x18fd84, Func Offset: 0x134
	// Line 236, Address: 0x18fdb0, Func Offset: 0x160
	// Line 241, Address: 0x18fdd0, Func Offset: 0x180
	// Line 243, Address: 0x18fde8, Func Offset: 0x198
	// Line 255, Address: 0x18fe00, Func Offset: 0x1b0
	// Line 264, Address: 0x18feac, Func Offset: 0x25c
	// Line 265, Address: 0x18feb4, Func Offset: 0x264
	// Line 273, Address: 0x18ff58, Func Offset: 0x308
	// Line 274, Address: 0x18ff60, Func Offset: 0x310
	// Line 276, Address: 0x18ff70, Func Offset: 0x320
	// Line 278, Address: 0x18ff74, Func Offset: 0x324
	// Func End, Address: 0x18ff9c, Func Offset: 0x34c
}

// 
// Start address: 0x18ffa0
int shGsSetDefTBuffDrawEnv(_anon10* draw, short psm, short w, short h, short ztest, short zpsm)
{
	unsigned int zb;
	// Line 290, Address: 0x18ffa0, Func Offset: 0
	// Line 291, Address: 0x18ffa8, Func Offset: 0x8
	// Line 308, Address: 0x18ffe4, Func Offset: 0x44
	// Line 310, Address: 0x18ffec, Func Offset: 0x4c
	// Line 313, Address: 0x190018, Func Offset: 0x78
	// Line 314, Address: 0x190028, Func Offset: 0x88
	// Line 317, Address: 0x19005c, Func Offset: 0xbc
	// Line 318, Address: 0x190064, Func Offset: 0xc4
	// Line 325, Address: 0x19008c, Func Offset: 0xec
	// Line 326, Address: 0x190094, Func Offset: 0xf4
	// Line 331, Address: 0x1900dc, Func Offset: 0x13c
	// Line 332, Address: 0x1900e4, Func Offset: 0x144
	// Line 335, Address: 0x19010c, Func Offset: 0x16c
	// Line 336, Address: 0x190114, Func Offset: 0x174
	// Line 339, Address: 0x19012c, Func Offset: 0x18c
	// Line 340, Address: 0x190134, Func Offset: 0x194
	// Line 343, Address: 0x190144, Func Offset: 0x1a4
	// Line 344, Address: 0x19014c, Func Offset: 0x1ac
	// Line 345, Address: 0x190160, Func Offset: 0x1c0
	// Line 347, Address: 0x190178, Func Offset: 0x1d8
	// Line 350, Address: 0x19018c, Func Offset: 0x1ec
	// Line 351, Address: 0x190194, Func Offset: 0x1f4
	// Line 352, Address: 0x19019c, Func Offset: 0x1fc
	// Line 354, Address: 0x1901c0, Func Offset: 0x220
	// Line 355, Address: 0x1901c8, Func Offset: 0x228
	// Line 357, Address: 0x1901cc, Func Offset: 0x22c
	// Line 359, Address: 0x1901d0, Func Offset: 0x230
	// Line 360, Address: 0x1901d4, Func Offset: 0x234
	// Func End, Address: 0x1901dc, Func Offset: 0x23c
}

// 
// Start address: 0x1901e0
void shGs_InitGsStencilBuff(shGsAllEnv* shGsEnv, short w, short h, short ztest, short zpsm)
{
	unsigned int i;
	// Line 372, Address: 0x1901e0, Func Offset: 0
	// Line 379, Address: 0x190214, Func Offset: 0x34
	// Line 380, Address: 0x190220, Func Offset: 0x40
	// Line 382, Address: 0x190254, Func Offset: 0x74
	// Line 385, Address: 0x190264, Func Offset: 0x84
	// Line 391, Address: 0x190270, Func Offset: 0x90
	// Line 393, Address: 0x1902e8, Func Offset: 0x108
	// Line 396, Address: 0x1902fc, Func Offset: 0x11c
	// Line 397, Address: 0x190308, Func Offset: 0x128
	// Line 399, Address: 0x190324, Func Offset: 0x144
	// Line 400, Address: 0x19033c, Func Offset: 0x15c
	// Line 401, Address: 0x190354, Func Offset: 0x174
	// Line 402, Address: 0x19036c, Func Offset: 0x18c
	// Line 403, Address: 0x190384, Func Offset: 0x1a4
	// Line 405, Address: 0x190394, Func Offset: 0x1b4
	// Line 406, Address: 0x1903a8, Func Offset: 0x1c8
	// Line 412, Address: 0x1903bc, Func Offset: 0x1dc
	// Line 413, Address: 0x1903c8, Func Offset: 0x1e8
	// Line 414, Address: 0x190408, Func Offset: 0x228
	// Line 424, Address: 0x190420, Func Offset: 0x240
	// Line 434, Address: 0x190468, Func Offset: 0x288
	// Line 435, Address: 0x190484, Func Offset: 0x2a4
	// Line 436, Address: 0x19048c, Func Offset: 0x2ac
	// Line 438, Address: 0x190490, Func Offset: 0x2b0
	// Line 439, Address: 0x1904a0, Func Offset: 0x2c0
	// Line 441, Address: 0x1904a8, Func Offset: 0x2c8
	// Line 442, Address: 0x1904b8, Func Offset: 0x2d8
	// Line 443, Address: 0x1904c0, Func Offset: 0x2e0
	// Line 445, Address: 0x1904c8, Func Offset: 0x2e8
	// Line 448, Address: 0x1904dc, Func Offset: 0x2fc
	// Line 451, Address: 0x1904e8, Func Offset: 0x308
	// Line 452, Address: 0x190510, Func Offset: 0x330
	// Line 458, Address: 0x190518, Func Offset: 0x338
	// Line 459, Address: 0x190520, Func Offset: 0x340
	// Line 462, Address: 0x190528, Func Offset: 0x348
	// Line 463, Address: 0x190530, Func Offset: 0x350
	// Line 466, Address: 0x190538, Func Offset: 0x358
	// Line 467, Address: 0x190540, Func Offset: 0x360
	// Line 470, Address: 0x190548, Func Offset: 0x368
	// Line 471, Address: 0x190550, Func Offset: 0x370
	// Line 475, Address: 0x190558, Func Offset: 0x378
	// Line 477, Address: 0x190564, Func Offset: 0x384
	// Line 478, Address: 0x190568, Func Offset: 0x388
	// Line 481, Address: 0x190570, Func Offset: 0x390
	// Line 483, Address: 0x190578, Func Offset: 0x398
	// Line 484, Address: 0x190580, Func Offset: 0x3a0
	// Line 485, Address: 0x190588, Func Offset: 0x3a8
	// Line 486, Address: 0x190590, Func Offset: 0x3b0
	// Line 487, Address: 0x190598, Func Offset: 0x3b8
	// Line 488, Address: 0x1905a0, Func Offset: 0x3c0
	// Line 490, Address: 0x1905a8, Func Offset: 0x3c8
	// Line 496, Address: 0x1905bc, Func Offset: 0x3dc
	// Func End, Address: 0x1905e4, Func Offset: 0x404
}

// 
// Start address: 0x1905f0
int shGs_InitStencilDrawEnv(shGsStencilDrawEnv* ssb, short w, short h, short ztest, short zpsm)
{
	unsigned int zb;
	// Line 509, Address: 0x1905f0, Func Offset: 0
	// Line 510, Address: 0x1905f8, Func Offset: 0x8
	// Line 517, Address: 0x190620, Func Offset: 0x30
	// Line 520, Address: 0x190628, Func Offset: 0x38
	// Line 526, Address: 0x190658, Func Offset: 0x68
	// Line 527, Address: 0x190660, Func Offset: 0x70
	// Line 532, Address: 0x1906a0, Func Offset: 0xb0
	// Line 533, Address: 0x1906a8, Func Offset: 0xb8
	// Line 536, Address: 0x1906d0, Func Offset: 0xe0
	// Line 537, Address: 0x1906d8, Func Offset: 0xe8
	// Line 540, Address: 0x1906f0, Func Offset: 0x100
	// Line 541, Address: 0x1906f8, Func Offset: 0x108
	// Line 544, Address: 0x190708, Func Offset: 0x118
	// Line 545, Address: 0x190710, Func Offset: 0x120
	// Line 551, Address: 0x190724, Func Offset: 0x134
	// Line 556, Address: 0x19072c, Func Offset: 0x13c
	// Line 559, Address: 0x190750, Func Offset: 0x160
	// Line 561, Address: 0x190754, Func Offset: 0x164
	// Line 562, Address: 0x190758, Func Offset: 0x168
	// Func End, Address: 0x190760, Func Offset: 0x170
}

// 
// Start address: 0x190760
void shGs_InitGsTinyStencilBuff(shGsAllEnv* shGsEnv, short w, short h)
{
	unsigned int fbp;
	unsigned int i;
	// Line 577, Address: 0x190760, Func Offset: 0
	// Line 579, Address: 0x19077c, Func Offset: 0x1c
	// Line 580, Address: 0x19079c, Func Offset: 0x3c
	// Line 581, Address: 0x1907d4, Func Offset: 0x74
	// Line 583, Address: 0x190814, Func Offset: 0xb4
	// Line 589, Address: 0x190834, Func Offset: 0xd4
	// Line 591, Address: 0x190848, Func Offset: 0xe8
	// Line 592, Address: 0x19085c, Func Offset: 0xfc
	// Line 594, Address: 0x190864, Func Offset: 0x104
	// Line 595, Address: 0x19086c, Func Offset: 0x10c
	// Line 596, Address: 0x190874, Func Offset: 0x114
	// Line 598, Address: 0x19087c, Func Offset: 0x11c
	// Line 599, Address: 0x190884, Func Offset: 0x124
	// Line 600, Address: 0x19088c, Func Offset: 0x12c
	// Line 604, Address: 0x190894, Func Offset: 0x134
	// Line 605, Address: 0x1908a0, Func Offset: 0x140
	// Line 606, Address: 0x1908e4, Func Offset: 0x184
	// Line 610, Address: 0x1908f4, Func Offset: 0x194
	// Line 612, Address: 0x190900, Func Offset: 0x1a0
	// Line 615, Address: 0x190938, Func Offset: 0x1d8
	// Line 617, Address: 0x19095c, Func Offset: 0x1fc
	// Line 619, Address: 0x190970, Func Offset: 0x210
	// Line 620, Address: 0x190978, Func Offset: 0x218
	// Line 622, Address: 0x190980, Func Offset: 0x220
	// Line 623, Address: 0x190988, Func Offset: 0x228
	// Line 624, Address: 0x190990, Func Offset: 0x230
	// Line 625, Address: 0x190998, Func Offset: 0x238
	// Line 627, Address: 0x19099c, Func Offset: 0x23c
	// Line 628, Address: 0x1909a4, Func Offset: 0x244
	// Line 629, Address: 0x1909ac, Func Offset: 0x24c
	// Line 630, Address: 0x1909b4, Func Offset: 0x254
	// Line 632, Address: 0x1909b8, Func Offset: 0x258
	// Line 635, Address: 0x1909cc, Func Offset: 0x26c
	// Func End, Address: 0x1909d4, Func Offset: 0x274
}

// 
// Start address: 0x1909e0
void shGs_InitDefaultRegsEnv(shGsAllEnv* shGsEnv)
{
	Q_WORDDATA* qwd;
	unsigned int i;
	unsigned int id;
	// Line 654, Address: 0x1909e0, Func Offset: 0
	// Line 661, Address: 0x1909f0, Func Offset: 0x10
	// Line 663, Address: 0x190a04, Func Offset: 0x24
	// Line 664, Address: 0x190a10, Func Offset: 0x30
	// Line 665, Address: 0x190a20, Func Offset: 0x40
	// Line 666, Address: 0x190a34, Func Offset: 0x54
	// Line 667, Address: 0x190a44, Func Offset: 0x64
	// Line 668, Address: 0x190a50, Func Offset: 0x70
	// Line 669, Address: 0x190a68, Func Offset: 0x88
	// Line 674, Address: 0x190a84, Func Offset: 0xa4
	// Line 675, Address: 0x190a8c, Func Offset: 0xac
	// Line 676, Address: 0x190a98, Func Offset: 0xb8
	// Line 682, Address: 0x190aac, Func Offset: 0xcc
	// Line 683, Address: 0x190ac0, Func Offset: 0xe0
	// Line 684, Address: 0x190ac8, Func Offset: 0xe8
	// Line 685, Address: 0x190acc, Func Offset: 0xec
	// Line 686, Address: 0x190ad8, Func Offset: 0xf8
	// Line 687, Address: 0x190ae8, Func Offset: 0x108
	// Line 688, Address: 0x190af0, Func Offset: 0x110
	// Line 690, Address: 0x190b04, Func Offset: 0x124
	// Line 692, Address: 0x190b14, Func Offset: 0x134
	// Line 694, Address: 0x190b1c, Func Offset: 0x13c
	// Line 698, Address: 0x190b28, Func Offset: 0x148
	// Line 699, Address: 0x190b30, Func Offset: 0x150
	// Line 700, Address: 0x190b38, Func Offset: 0x158
	// Line 701, Address: 0x190b3c, Func Offset: 0x15c
	// Line 702, Address: 0x190b48, Func Offset: 0x168
	// Line 703, Address: 0x190b58, Func Offset: 0x178
	// Line 704, Address: 0x190b60, Func Offset: 0x180
	// Line 708, Address: 0x190b74, Func Offset: 0x194
	// Line 712, Address: 0x190b88, Func Offset: 0x1a8
	// Line 716, Address: 0x190b94, Func Offset: 0x1b4
	// Line 725, Address: 0x190ba0, Func Offset: 0x1c0
	// Line 726, Address: 0x190ba8, Func Offset: 0x1c8
	// Line 727, Address: 0x190bb4, Func Offset: 0x1d4
	// Line 728, Address: 0x190bbc, Func Offset: 0x1dc
	// Line 731, Address: 0x190bc8, Func Offset: 0x1e8
	// Line 732, Address: 0x190bd0, Func Offset: 0x1f0
	// Line 733, Address: 0x190be0, Func Offset: 0x200
	// Line 734, Address: 0x190be4, Func Offset: 0x204
	// Line 735, Address: 0x190bf0, Func Offset: 0x210
	// Line 736, Address: 0x190c00, Func Offset: 0x220
	// Line 737, Address: 0x190c08, Func Offset: 0x228
	// Line 738, Address: 0x190c1c, Func Offset: 0x23c
	// Line 742, Address: 0x190c2c, Func Offset: 0x24c
	// Line 743, Address: 0x190c34, Func Offset: 0x254
	// Line 744, Address: 0x190c3c, Func Offset: 0x25c
	// Line 748, Address: 0x190c44, Func Offset: 0x264
	// Line 762, Address: 0x190c64, Func Offset: 0x284
	// Line 764, Address: 0x190c80, Func Offset: 0x2a0
	// Line 766, Address: 0x190c90, Func Offset: 0x2b0
	// Line 767, Address: 0x190ca0, Func Offset: 0x2c0
	// Line 769, Address: 0x190cac, Func Offset: 0x2cc
	// Func End, Address: 0x190cb4, Func Offset: 0x2d4
}

