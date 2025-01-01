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
typedef struct shGsTinyDrawEnv;
typedef struct _anon13;
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
typedef Q_WORDDATA type_7[2];
typedef unsigned int type_8[4];
typedef unsigned short type_9[8];
typedef Q_WORDDATA type_10[2];
typedef float type_11[4];
typedef Q_WORDDATA type_12[2];
typedef unsigned char type_13[16];
typedef Q_WORDDATA type_14[5];
typedef Q_WORDDATA type_15[2];
typedef int type_16[4];
typedef Q_WORDDATA type_17[2];
typedef short type_18[8];
typedef Q_WORDDATA type_19[2];
typedef char type_20[16];
typedef Q_WORDDATA type_21[5];
typedef Q_WORDDATA type_22[2];
typedef unsigned long type_23[2];
typedef Q_WORDDATA type_24[2];
typedef Q_WORDDATA type_25[2];
typedef Q_WORDDATA type_26[2];
typedef Q_WORDDATA type_27[2];
typedef Q_WORDDATA type_28[2];
typedef Q_WORDDATA type_29[2];
typedef Q_WORDDATA type_30[2];
typedef Q_WORDDATA type_31[6];
typedef Q_WORDDATA type_32[2];
typedef Q_WORDDATA type_33[6];
typedef unsigned int type_34[3];
typedef unsigned int type_35[3];
typedef unsigned int type_36[3];
typedef unsigned int type_37[24];
typedef unsigned int type_38[3];
typedef unsigned int type_39[3];
typedef unsigned short type_40[8];
typedef _anon5 type_41[3];
typedef shGsDrawEnv type_42[3];
typedef shGsStencilDrawEnv type_43[3];
typedef shGsTinyDrawEnv type_44[6];
typedef Q_WORDDATA type_45[10];
typedef Q_WORDDATA type_46[10];
typedef Q_WORDDATA type_47[10];
typedef Q_WORDDATA type_48[10];
typedef Q_WORDDATA type_49[10];
typedef Q_WORDDATA type_50[10];
typedef Q_WORDDATA type_51[10];

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
		unsigned int R : 8;
		unsigned int G : 8;
		unsigned int B : 8;
		unsigned int A : 8;
	};
	float Q;
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


void shGs_InitDefTBuff(shGsAllEnv* shGsEnv, short draw_psm, short disp_psm, short w, short h, short ztest, short zpsm);
void shGsSetDefTBuffDispEnv(_anon5* disp, short psm, short w, short h, short dx, short dy);
int shGsSetDefTBuffDrawEnv(_anon8* draw, short psm, short w, short h, short ztest, short zpsm);
void shGs_InitGsStencilBuff(shGsAllEnv* shGsEnv, short w, short h, short ztest, short zpsm);
int shGs_InitStencilDrawEnv(shGsStencilDrawEnv* ssb, short w, short h, short ztest, short zpsm);
void shGs_InitGsTinyStencilBuff(shGsAllEnv* shGsEnv, short w, short h);
void shGs_InitDefaultRegsEnv(shGsAllEnv* shGsEnv);

// 
// Start address: 0x194be0
void shGs_InitDefTBuff(shGsAllEnv* shGsEnv, short draw_psm, short disp_psm, short w, short h, short ztest, short zpsm)
{
	unsigned int i;
	// Line 41, Address: 0x194be0, Func Offset: 0
	// Line 47, Address: 0x194c08, Func Offset: 0x28
	// Line 48, Address: 0x194c14, Func Offset: 0x34
	// Line 49, Address: 0x194c4c, Func Offset: 0x6c
	// Line 52, Address: 0x194c64, Func Offset: 0x84
	// Line 53, Address: 0x194c70, Func Offset: 0x90
	// Line 54, Address: 0x194cb0, Func Offset: 0xd0
	// Line 58, Address: 0x194cc4, Func Offset: 0xe4
	// Line 59, Address: 0x194cd0, Func Offset: 0xf0
	// Line 61, Address: 0x194d5c, Func Offset: 0x17c
	// Line 73, Address: 0x194d74, Func Offset: 0x194
	// Line 74, Address: 0x194d80, Func Offset: 0x1a0
	// Line 76, Address: 0x194da4, Func Offset: 0x1c4
	// Line 77, Address: 0x194ddc, Func Offset: 0x1fc
	// Line 78, Address: 0x194e18, Func Offset: 0x238
	// Line 79, Address: 0x194e54, Func Offset: 0x274
	// Line 80, Address: 0x194e8c, Func Offset: 0x2ac
	// Line 82, Address: 0x194edc, Func Offset: 0x2fc
	// Line 83, Address: 0x194f14, Func Offset: 0x334
	// Line 84, Address: 0x194f7c, Func Offset: 0x39c
	// Line 87, Address: 0x194f94, Func Offset: 0x3b4
	// Line 88, Address: 0x194fa0, Func Offset: 0x3c0
	// Line 89, Address: 0x194fe0, Func Offset: 0x400
	// Line 90, Address: 0x195028, Func Offset: 0x448
	// Line 93, Address: 0x195070, Func Offset: 0x490
	// Line 101, Address: 0x1950fc, Func Offset: 0x51c
	// Line 103, Address: 0x1951dc, Func Offset: 0x5fc
	// Line 111, Address: 0x195224, Func Offset: 0x644
	// Line 113, Address: 0x195308, Func Offset: 0x728
	// Line 121, Address: 0x195350, Func Offset: 0x770
	// Line 123, Address: 0x195434, Func Offset: 0x854
	// Line 131, Address: 0x19547c, Func Offset: 0x89c
	// Line 133, Address: 0x195564, Func Offset: 0x984
	// Line 136, Address: 0x19557c, Func Offset: 0x99c
	// Line 138, Address: 0x195588, Func Offset: 0x9a8
	// Line 141, Address: 0x195640, Func Offset: 0xa60
	// Line 143, Address: 0x1956b0, Func Offset: 0xad0
	// Line 144, Address: 0x1956d4, Func Offset: 0xaf4
	// Line 147, Address: 0x195718, Func Offset: 0xb38
	// Line 148, Address: 0x19573c, Func Offset: 0xb5c
	// Line 151, Address: 0x195780, Func Offset: 0xba0
	// Line 152, Address: 0x1957a4, Func Offset: 0xbc4
	// Line 156, Address: 0x1957e8, Func Offset: 0xc08
	// Line 157, Address: 0x195830, Func Offset: 0xc50
	// Line 158, Address: 0x195878, Func Offset: 0xc98
	// Line 159, Address: 0x1958c0, Func Offset: 0xce0
	// Line 160, Address: 0x195908, Func Offset: 0xd28
	// Line 162, Address: 0x195950, Func Offset: 0xd70
	// Line 166, Address: 0x195964, Func Offset: 0xd84
	// Func End, Address: 0x195978, Func Offset: 0xd98
}

// 
// Start address: 0x195980
void shGsSetDefTBuffDispEnv(_anon5* disp, short psm, short w, short h, short dx, short dy)
{
	// Line 172, Address: 0x195980, Func Offset: 0
	// Line 173, Address: 0x1959a0, Func Offset: 0x20
	// Line 174, Address: 0x1959d0, Func Offset: 0x50
	// Line 175, Address: 0x1959e0, Func Offset: 0x60
	// Line 176, Address: 0x1959e8, Func Offset: 0x68
	// Line 177, Address: 0x1959f4, Func Offset: 0x74
	// Line 178, Address: 0x195a08, Func Offset: 0x88
	// Line 179, Address: 0x195a1c, Func Offset: 0x9c
	// Line 181, Address: 0x195a34, Func Offset: 0xb4
	// Line 182, Address: 0x195a44, Func Offset: 0xc4
	// Line 183, Address: 0x195a4c, Func Offset: 0xcc
	// Line 198, Address: 0x195a5c, Func Offset: 0xdc
	// Line 199, Address: 0x195a7c, Func Offset: 0xfc
	// Line 204, Address: 0x195ac0, Func Offset: 0x140
	// Line 205, Address: 0x195ae8, Func Offset: 0x168
	// Line 206, Address: 0x195af0, Func Offset: 0x170
	// Line 209, Address: 0x195b34, Func Offset: 0x1b4
	// Line 214, Address: 0x195b58, Func Offset: 0x1d8
	// Line 216, Address: 0x195b78, Func Offset: 0x1f8
	// Line 228, Address: 0x195b98, Func Offset: 0x218
	// Line 237, Address: 0x195c7c, Func Offset: 0x2fc
	// Line 238, Address: 0x195c84, Func Offset: 0x304
	// Line 246, Address: 0x195d60, Func Offset: 0x3e0
	// Line 247, Address: 0x195d68, Func Offset: 0x3e8
	// Line 249, Address: 0x195d78, Func Offset: 0x3f8
	// Line 251, Address: 0x195d84, Func Offset: 0x404
	// Func End, Address: 0x195d94, Func Offset: 0x414
}

// 
// Start address: 0x195da0
int shGsSetDefTBuffDrawEnv(_anon8* draw, short psm, short w, short h, short ztest, short zpsm)
{
	unsigned int zb;
	// Line 263, Address: 0x195da0, Func Offset: 0
	// Line 264, Address: 0x195da8, Func Offset: 0x8
	// Line 281, Address: 0x195de4, Func Offset: 0x44
	// Line 283, Address: 0x195dec, Func Offset: 0x4c
	// Line 286, Address: 0x195e18, Func Offset: 0x78
	// Line 287, Address: 0x195e28, Func Offset: 0x88
	// Line 289, Address: 0x195e60, Func Offset: 0xc0
	// Line 290, Address: 0x195e68, Func Offset: 0xc8
	// Line 296, Address: 0x195e94, Func Offset: 0xf4
	// Line 297, Address: 0x195e9c, Func Offset: 0xfc
	// Line 302, Address: 0x195eec, Func Offset: 0x14c
	// Line 303, Address: 0x195ef4, Func Offset: 0x154
	// Line 306, Address: 0x195f30, Func Offset: 0x190
	// Line 307, Address: 0x195f38, Func Offset: 0x198
	// Line 310, Address: 0x195f54, Func Offset: 0x1b4
	// Line 311, Address: 0x195f5c, Func Offset: 0x1bc
	// Line 314, Address: 0x195f78, Func Offset: 0x1d8
	// Line 315, Address: 0x195f80, Func Offset: 0x1e0
	// Line 316, Address: 0x195f94, Func Offset: 0x1f4
	// Line 318, Address: 0x195fb8, Func Offset: 0x218
	// Line 321, Address: 0x195fd0, Func Offset: 0x230
	// Line 322, Address: 0x195fd8, Func Offset: 0x238
	// Line 323, Address: 0x195fe0, Func Offset: 0x240
	// Line 325, Address: 0x196008, Func Offset: 0x268
	// Line 326, Address: 0x196010, Func Offset: 0x270
	// Line 328, Address: 0x196018, Func Offset: 0x278
	// Line 330, Address: 0x19601c, Func Offset: 0x27c
	// Line 331, Address: 0x196020, Func Offset: 0x280
	// Func End, Address: 0x196028, Func Offset: 0x288
}

// 
// Start address: 0x196030
void shGs_InitGsStencilBuff(shGsAllEnv* shGsEnv, short w, short h, short ztest, short zpsm)
{
	unsigned int i;
	// Line 343, Address: 0x196030, Func Offset: 0
	// Line 350, Address: 0x196050, Func Offset: 0x20
	// Line 351, Address: 0x19605c, Func Offset: 0x2c
	// Line 353, Address: 0x196098, Func Offset: 0x68
	// Line 356, Address: 0x1960ac, Func Offset: 0x7c
	// Line 362, Address: 0x1960b8, Func Offset: 0x88
	// Line 364, Address: 0x196148, Func Offset: 0x118
	// Line 367, Address: 0x19615c, Func Offset: 0x12c
	// Line 368, Address: 0x196168, Func Offset: 0x138
	// Line 370, Address: 0x19618c, Func Offset: 0x15c
	// Line 371, Address: 0x1961c4, Func Offset: 0x194
	// Line 372, Address: 0x196200, Func Offset: 0x1d0
	// Line 373, Address: 0x19623c, Func Offset: 0x20c
	// Line 374, Address: 0x196274, Func Offset: 0x244
	// Line 376, Address: 0x1962c4, Func Offset: 0x294
	// Line 377, Address: 0x1962fc, Func Offset: 0x2cc
	// Line 383, Address: 0x196314, Func Offset: 0x2e4
	// Line 384, Address: 0x196320, Func Offset: 0x2f0
	// Line 385, Address: 0x196368, Func Offset: 0x338
	// Line 391, Address: 0x1963b0, Func Offset: 0x380
	// Line 395, Address: 0x196430, Func Offset: 0x400
	// Line 396, Address: 0x1964bc, Func Offset: 0x48c
	// Line 397, Address: 0x196504, Func Offset: 0x4d4
	// Line 399, Address: 0x196524, Func Offset: 0x4f4
	// Line 400, Address: 0x1965b0, Func Offset: 0x580
	// Line 402, Address: 0x1965f8, Func Offset: 0x5c8
	// Line 403, Address: 0x196684, Func Offset: 0x654
	// Line 404, Address: 0x1966cc, Func Offset: 0x69c
	// Line 406, Address: 0x1966f0, Func Offset: 0x6c0
	// Line 409, Address: 0x196704, Func Offset: 0x6d4
	// Line 412, Address: 0x196710, Func Offset: 0x6e0
	// Line 413, Address: 0x196758, Func Offset: 0x728
	// Line 419, Address: 0x1967a0, Func Offset: 0x770
	// Line 420, Address: 0x1967c4, Func Offset: 0x794
	// Line 423, Address: 0x196804, Func Offset: 0x7d4
	// Line 424, Address: 0x196828, Func Offset: 0x7f8
	// Line 427, Address: 0x19686c, Func Offset: 0x83c
	// Line 428, Address: 0x196890, Func Offset: 0x860
	// Line 431, Address: 0x1968d4, Func Offset: 0x8a4
	// Line 432, Address: 0x1968f8, Func Offset: 0x8c8
	// Line 436, Address: 0x19693c, Func Offset: 0x90c
	// Line 438, Address: 0x196984, Func Offset: 0x954
	// Line 439, Address: 0x1969a8, Func Offset: 0x978
	// Line 442, Address: 0x1969ec, Func Offset: 0x9bc
	// Line 444, Address: 0x196a34, Func Offset: 0xa04
	// Line 445, Address: 0x196a7c, Func Offset: 0xa4c
	// Line 446, Address: 0x196ac4, Func Offset: 0xa94
	// Line 447, Address: 0x196b0c, Func Offset: 0xadc
	// Line 448, Address: 0x196b54, Func Offset: 0xb24
	// Line 449, Address: 0x196b9c, Func Offset: 0xb6c
	// Line 451, Address: 0x196be4, Func Offset: 0xbb4
	// Line 457, Address: 0x196bfc, Func Offset: 0xbcc
	// Func End, Address: 0x196c10, Func Offset: 0xbe0
}

// 
// Start address: 0x196c10
int shGs_InitStencilDrawEnv(shGsStencilDrawEnv* ssb, short w, short h, short ztest, short zpsm)
{
	unsigned int zb;
	// Line 470, Address: 0x196c10, Func Offset: 0
	// Line 471, Address: 0x196c18, Func Offset: 0x8
	// Line 477, Address: 0x196c44, Func Offset: 0x34
	// Line 478, Address: 0x196c48, Func Offset: 0x38
	// Line 481, Address: 0x196c50, Func Offset: 0x40
	// Line 486, Address: 0x196c88, Func Offset: 0x78
	// Line 487, Address: 0x196c90, Func Offset: 0x80
	// Line 492, Address: 0x196ce0, Func Offset: 0xd0
	// Line 493, Address: 0x196ce8, Func Offset: 0xd8
	// Line 496, Address: 0x196d24, Func Offset: 0x114
	// Line 497, Address: 0x196d2c, Func Offset: 0x11c
	// Line 500, Address: 0x196d48, Func Offset: 0x138
	// Line 501, Address: 0x196d50, Func Offset: 0x140
	// Line 504, Address: 0x196d6c, Func Offset: 0x15c
	// Line 505, Address: 0x196d74, Func Offset: 0x164
	// Line 511, Address: 0x196d8c, Func Offset: 0x17c
	// Line 516, Address: 0x196d94, Func Offset: 0x184
	// Line 519, Address: 0x196dbc, Func Offset: 0x1ac
	// Line 521, Address: 0x196dc0, Func Offset: 0x1b0
	// Line 522, Address: 0x196dc4, Func Offset: 0x1b4
	// Func End, Address: 0x196dcc, Func Offset: 0x1bc
}

// 
// Start address: 0x196dd0
void shGs_InitGsTinyStencilBuff(shGsAllEnv* shGsEnv, short w, short h)
{
	unsigned int fbp;
	unsigned int i;
	// Line 529, Address: 0x196dd0, Func Offset: 0
	// Line 537, Address: 0x196de8, Func Offset: 0x18
	// Line 539, Address: 0x196e14, Func Offset: 0x44
	// Line 540, Address: 0x196e44, Func Offset: 0x74
	// Line 541, Address: 0x196e94, Func Offset: 0xc4
	// Line 543, Address: 0x196ef8, Func Offset: 0x128
	// Line 549, Address: 0x196f20, Func Offset: 0x150
	// Line 551, Address: 0x196f3c, Func Offset: 0x16c
	// Line 552, Address: 0x196f68, Func Offset: 0x198
	// Line 554, Address: 0x196f80, Func Offset: 0x1b0
	// Line 555, Address: 0x196f98, Func Offset: 0x1c8
	// Line 556, Address: 0x196fb0, Func Offset: 0x1e0
	// Line 558, Address: 0x196fbc, Func Offset: 0x1ec
	// Line 559, Address: 0x196fd4, Func Offset: 0x204
	// Line 560, Address: 0x196fec, Func Offset: 0x21c
	// Line 564, Address: 0x196ff8, Func Offset: 0x228
	// Line 565, Address: 0x197004, Func Offset: 0x234
	// Line 566, Address: 0x19704c, Func Offset: 0x27c
	// Line 570, Address: 0x19705c, Func Offset: 0x28c
	// Line 572, Address: 0x197068, Func Offset: 0x298
	// Line 575, Address: 0x1970a4, Func Offset: 0x2d4
	// Line 577, Address: 0x197108, Func Offset: 0x338
	// Line 579, Address: 0x19717c, Func Offset: 0x3ac
	// Line 580, Address: 0x1971b4, Func Offset: 0x3e4
	// Line 582, Address: 0x1971f4, Func Offset: 0x424
	// Line 583, Address: 0x19722c, Func Offset: 0x45c
	// Line 584, Address: 0x197248, Func Offset: 0x478
	// Line 585, Address: 0x197288, Func Offset: 0x4b8
	// Line 587, Address: 0x1972a8, Func Offset: 0x4d8
	// Line 588, Address: 0x1972e0, Func Offset: 0x510
	// Line 589, Address: 0x1972fc, Func Offset: 0x52c
	// Line 590, Address: 0x19733c, Func Offset: 0x56c
	// Line 592, Address: 0x19735c, Func Offset: 0x58c
	// Line 595, Address: 0x19736c, Func Offset: 0x59c
	// Func End, Address: 0x197380, Func Offset: 0x5b0
}

// 
// Start address: 0x197380
void shGs_InitDefaultRegsEnv(shGsAllEnv* shGsEnv)
{
	Q_WORDDATA* qwd;
	unsigned int i;
	unsigned int id;
	// Line 607, Address: 0x197380, Func Offset: 0
	// Line 610, Address: 0x197394, Func Offset: 0x14
	// Line 614, Address: 0x197398, Func Offset: 0x18
	// Line 621, Address: 0x1973c4, Func Offset: 0x44
	// Line 623, Address: 0x1973f4, Func Offset: 0x74
	// Line 624, Address: 0x19741c, Func Offset: 0x9c
	// Line 625, Address: 0x197448, Func Offset: 0xc8
	// Line 626, Address: 0x197478, Func Offset: 0xf8
	// Line 627, Address: 0x1974a4, Func Offset: 0x124
	// Line 628, Address: 0x1974cc, Func Offset: 0x14c
	// Line 629, Address: 0x197500, Func Offset: 0x180
	// Line 632, Address: 0x19752c, Func Offset: 0x1ac
	// Line 634, Address: 0x197530, Func Offset: 0x1b0
	// Line 635, Address: 0x19755c, Func Offset: 0x1dc
	// Line 636, Address: 0x197584, Func Offset: 0x204
	// Line 642, Address: 0x1975b0, Func Offset: 0x230
	// Line 643, Address: 0x1975dc, Func Offset: 0x25c
	// Line 644, Address: 0x1975f4, Func Offset: 0x274
	// Line 645, Address: 0x1975fc, Func Offset: 0x27c
	// Line 646, Address: 0x197608, Func Offset: 0x288
	// Line 647, Address: 0x197618, Func Offset: 0x298
	// Line 648, Address: 0x197630, Func Offset: 0x2b0
	// Line 650, Address: 0x197644, Func Offset: 0x2c4
	// Line 652, Address: 0x19765c, Func Offset: 0x2dc
	// Line 654, Address: 0x197674, Func Offset: 0x2f4
	// Line 658, Address: 0x19768c, Func Offset: 0x30c
	// Line 659, Address: 0x1976a4, Func Offset: 0x324
	// Line 660, Address: 0x1976bc, Func Offset: 0x33c
	// Line 661, Address: 0x1976c4, Func Offset: 0x344
	// Line 662, Address: 0x1976d0, Func Offset: 0x350
	// Line 663, Address: 0x1976e0, Func Offset: 0x360
	// Line 664, Address: 0x1976f8, Func Offset: 0x378
	// Line 668, Address: 0x19770c, Func Offset: 0x38c
	// Line 672, Address: 0x197728, Func Offset: 0x3a8
	// Line 676, Address: 0x197744, Func Offset: 0x3c4
	// Line 685, Address: 0x197760, Func Offset: 0x3e0
	// Line 686, Address: 0x197778, Func Offset: 0x3f8
	// Line 687, Address: 0x19778c, Func Offset: 0x40c
	// Line 688, Address: 0x1977a4, Func Offset: 0x424
	// Line 691, Address: 0x1977bc, Func Offset: 0x43c
	// Line 692, Address: 0x1977d4, Func Offset: 0x454
	// Line 693, Address: 0x1977ec, Func Offset: 0x46c
	// Line 694, Address: 0x1977f4, Func Offset: 0x474
	// Line 695, Address: 0x197800, Func Offset: 0x480
	// Line 696, Address: 0x197810, Func Offset: 0x490
	// Line 697, Address: 0x197828, Func Offset: 0x4a8
	// Line 698, Address: 0x19783c, Func Offset: 0x4bc
	// Line 702, Address: 0x197854, Func Offset: 0x4d4
	// Line 703, Address: 0x19786c, Func Offset: 0x4ec
	// Line 704, Address: 0x197884, Func Offset: 0x504
	// Line 706, Address: 0x19789c, Func Offset: 0x51c
	// Line 720, Address: 0x1978c4, Func Offset: 0x544
	// Line 722, Address: 0x1978f0, Func Offset: 0x570
	// Line 724, Address: 0x19790c, Func Offset: 0x58c
	// Line 725, Address: 0x197938, Func Offset: 0x5b8
	// Line 727, Address: 0x19794c, Func Offset: 0x5cc
	// Func End, Address: 0x197964, Func Offset: 0x5e4
}

