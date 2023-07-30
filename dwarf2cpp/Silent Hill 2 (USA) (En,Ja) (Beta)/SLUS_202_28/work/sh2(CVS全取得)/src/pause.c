typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef union Q_WORDDATA;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef struct shGsDrawEnv;
typedef struct _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef struct _anon9;
typedef struct shGsStencilDrawEnv;
typedef struct _anon10;
typedef struct _anon11;
typedef struct shGsLoopEnv;
typedef struct _anon12;
typedef struct _anon13;
typedef struct _anon14;
typedef struct _anon15;
typedef struct shGsTinyDrawEnv;
typedef struct _anon16;
typedef struct _anon17;
typedef struct _anon18;
typedef struct shGsAllEnv;
typedef enum PAUSE_TYPE : unsigned char;
typedef struct _anon19;


typedef Q_WORDDATA type_0[10];
typedef Q_WORDDATA type_1[10];
typedef Q_WORDDATA type_2[10];
typedef char type_3[29];
typedef Q_WORDDATA type_4[10];
typedef Q_WORDDATA type_5[8];
typedef Q_WORDDATA type_6[2];
typedef Q_WORDDATA type_7[2];
typedef Q_WORDDATA type_8[2];
typedef unsigned int type_9[4];
typedef Q_WORDDATA type_10[2];
typedef unsigned short type_11[8];
typedef Q_WORDDATA type_12[2];
typedef float type_13[4];
typedef unsigned char type_14[16];
typedef char type_15[22];
typedef Q_WORDDATA type_16[2];
typedef int type_17[4];
typedef Q_WORDDATA type_18[2];
typedef Q_WORDDATA type_19[5];
typedef short type_20[8];
typedef Q_WORDDATA type_21[2];
typedef char type_22[16];
typedef Q_WORDDATA type_23[2];
typedef unsigned long type_24[2];
typedef Q_WORDDATA type_25[5];
typedef Q_WORDDATA type_26[2];
typedef Q_WORDDATA type_27[2];
typedef Q_WORDDATA type_28[2];
typedef char type_29[19];
typedef Q_WORDDATA type_30[2];
typedef Q_WORDDATA type_31[2];
typedef Q_WORDDATA type_32[2];
typedef Q_WORDDATA type_33[2];
typedef Q_WORDDATA type_34[2];
typedef Q_WORDDATA type_35[2];
typedef char type_36[16];
typedef Q_WORDDATA type_37[2];
typedef Q_WORDDATA type_38[6];
typedef Q_WORDDATA type_39[2];
typedef Q_WORDDATA type_40[2];
typedef Q_WORDDATA type_41[6];
typedef char type_42[16];
typedef unsigned int type_43[3];
typedef unsigned int type_44[3];
typedef unsigned int type_45[3];
typedef unsigned int type_46[24];
typedef unsigned int type_47[3];
typedef char type_48[18];
typedef unsigned int type_49[3];
typedef unsigned short type_50[8];
typedef char type_51[37];
typedef <unknown fundamental type (0xa510)> type_52[9];
typedef char type_53[11];
typedef _anon15 type_54[3];
typedef Q_WORDDATA type_55[16];
typedef shGsDrawEnv type_56[3];
typedef shGsStencilDrawEnv type_57[3];
typedef char type_58[15];
typedef shGsTinyDrawEnv type_59[6];
typedef Q_WORDDATA type_60[10];
typedef Q_WORDDATA type_61[10];
typedef Q_WORDDATA type_62[10];

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

struct _anon4
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

struct _anon5
{
	_anon19 testa;
	long testaaddr;
	_anon9 prim;
	long primaddr;
	_anon14 rgbaq;
	long rgbaqaddr;
	_anon6 xyz2a;
	long xyz2aaddr;
	_anon6 xyz2b;
	long xyz2baddr;
	_anon19 testb;
	long testbaddr;
};

struct shGsDrawEnv
{
	_anon0 giftag;
	_anon17 draw;
	Q_WORDDATA drawq2[5];
	_anon5 clear;
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

struct _anon6
{
	struct
	{
		unsigned long X : 16;
		unsigned long Y : 16;
		unsigned long Z : 32;
	};
};

struct _anon7
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

struct shGsStencilDrawEnv
{
	_anon0 giftag;
	_anon17 draw;
	Q_WORDDATA alpha1;
	Q_WORDDATA drawq2[6];
	_anon5 clear;
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

struct _anon11
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

struct _anon15
{
	_anon2 pmode;
	_anon7 smode2;
	_anon4 dispfb;
	_anon10 display;
	_anon11 bgcolor;
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

struct _anon17
{
	_anon18 frame1;
	unsigned long frame1addr;
	_anon8 zbuf1;
	long zbuf1addr;
	_anon3 xyoffset1;
	long xyoffset1addr;
	_anon16 scissor1;
	long scissor1addr;
	_anon13 prmodecont;
	long prmodecontaddr;
	_anon1 colclamp;
	long colclampaddr;
	_anon12 dthe;
	long dtheaddr;
	_anon19 test1;
	long test1addr;
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

enum PAUSE_TYPE : unsigned char
{
	PAUSE_TYPE_NONE,
	PAUSE_TYPE_UNDEFINED,
	PAUSE_TYPE_GAME_PAUSE,
	PAUSE_TYPE_NOW_LOADING,
	PAUSE_TYPE_LOAD_DELAY,
	PAUSE_TYPE_TRAY_OPEN,
	PAUSE_TYPE_DISC_EMPTY,
	PAUSE_TYPE_DISC_CHECK,
	PAUSE_TYPE_DISC_ILLEGAL,
	PAUSE_TYPE_PAD_DISCONNECT
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

PAUSE_TYPE pause_type;
int pause_disable;
shGsAllEnv shGs_AllEnv;
<unknown fundamental type (0xa510)> buffer[9];

int PauseSetType(int type);
void __DrawRect(int x0, int y0, int x1, int y1);
void* draw_rect(void* pkt, int x, int y, int w, int h);
void* draw_belt(void* pkt, int y, int h, int z, unsigned int c);
int PauseDisp();

// 
// Start address: 0x298990
int PauseSetType(int type)
{
	int ret;
	// Line 42, Address: 0x298990, Func Offset: 0
	// Line 43, Address: 0x298998, Func Offset: 0x8
	// Line 45, Address: 0x2989a0, Func Offset: 0x10
	// Func End, Address: 0x2989a8, Func Offset: 0x18
}

// 
// Start address: 0x2989b0
void __DrawRect(int x0, int y0, int x1, int y1)
{
	int id;
	Q_WORDDATA KARI_OBI[16];
	// Line 52, Address: 0x2989b0, Func Offset: 0
	// Line 58, Address: 0x2989b8, Func Offset: 0x8
	// Line 61, Address: 0x2989e8, Func Offset: 0x38
	// Line 73, Address: 0x298a10, Func Offset: 0x60
	// Line 76, Address: 0x298a2c, Func Offset: 0x7c
	// Line 77, Address: 0x298a44, Func Offset: 0x94
	// Line 80, Address: 0x298a50, Func Offset: 0xa0
	// Line 81, Address: 0x298a58, Func Offset: 0xa8
	// Line 82, Address: 0x298a60, Func Offset: 0xb0
	// Line 83, Address: 0x298a68, Func Offset: 0xb8
	// Line 86, Address: 0x298a74, Func Offset: 0xc4
	// Line 89, Address: 0x298aa0, Func Offset: 0xf0
	// Line 92, Address: 0x298ac8, Func Offset: 0x118
	// Line 93, Address: 0x298ad4, Func Offset: 0x124
	// Line 94, Address: 0x298adc, Func Offset: 0x12c
	// Line 95, Address: 0x298ae4, Func Offset: 0x134
	// Line 98, Address: 0x298aec, Func Offset: 0x13c
	// Line 99, Address: 0x298afc, Func Offset: 0x14c
	// Line 100, Address: 0x298b0c, Func Offset: 0x15c
	// Func End, Address: 0x298b1c, Func Offset: 0x16c
}

// 
// Start address: 0x298b20
void* draw_rect(void* pkt, int x, int y, int w, int h)
{
	// Line 120, Address: 0x298b20, Func Offset: 0
	// Line 122, Address: 0x298b30, Func Offset: 0x10
	// Line 223, Address: 0x298b4c, Func Offset: 0x2c
	// Line 224, Address: 0x298b50, Func Offset: 0x30
	// Func End, Address: 0x298b64, Func Offset: 0x44
}

// 
// Start address: 0x298b70
void* draw_belt(void* pkt, int y, int h, int z, unsigned int c)
{
	// Line 228, Address: 0x298b70, Func Offset: 0
	// Line 229, Address: 0x298b88, Func Offset: 0x18
	// Line 230, Address: 0x298ba0, Func Offset: 0x30
	// Func End, Address: 0x298bb0, Func Offset: 0x40
}

// 
// Start address: 0x298bb0
int PauseDisp()
{
	unsigned int bcolor;
	char* mes;
	int belt;
	int ccolor;
	int pz;
	<unknown fundamental type (0xa510)>* pkt;
	<unknown fundamental type (0xa510)>* packet;
	int ret;
	int force_pause;
	char m_not_connect[29];
	char m_paused[11];
	int count;
	char m_wrong_disc[15];
	char m_please_insert[37];
	char m_checking[18];
	char m_not_insert[22];
	char m_tray_open[19];
	char m_now_loding[16];
	char m_please_wait[16];
	// Line 235, Address: 0x298bb0, Func Offset: 0
	// Line 236, Address: 0x298bcc, Func Offset: 0x1c
	// Line 237, Address: 0x298bd0, Func Offset: 0x20
	// Line 243, Address: 0x298bd8, Func Offset: 0x28
	// Line 245, Address: 0x298bec, Func Offset: 0x3c
	// Line 247, Address: 0x298c04, Func Offset: 0x54
	// Line 248, Address: 0x298c0c, Func Offset: 0x5c
	// Line 249, Address: 0x298c10, Func Offset: 0x60
	// Line 255, Address: 0x298c18, Func Offset: 0x68
	// Line 302, Address: 0x298c20, Func Offset: 0x70
	// Line 303, Address: 0x298c24, Func Offset: 0x74
	// Line 304, Address: 0x298c28, Func Offset: 0x78
	// Line 306, Address: 0x298c2c, Func Offset: 0x7c
	// Line 307, Address: 0x298c34, Func Offset: 0x84
	// Line 309, Address: 0x298c3c, Func Offset: 0x8c
	// Line 314, Address: 0x298c6c, Func Offset: 0xbc
	// Line 315, Address: 0x298c70, Func Offset: 0xc0
	// Line 316, Address: 0x298c80, Func Offset: 0xd0
	// Line 317, Address: 0x298c94, Func Offset: 0xe4
	// Line 318, Address: 0x298c9c, Func Offset: 0xec
	// Line 320, Address: 0x298ca4, Func Offset: 0xf4
	// Line 321, Address: 0x298ca8, Func Offset: 0xf8
	// Line 322, Address: 0x298cb8, Func Offset: 0x108
	// Line 323, Address: 0x298ccc, Func Offset: 0x11c
	// Line 324, Address: 0x298cd8, Func Offset: 0x128
	// Line 325, Address: 0x298ce0, Func Offset: 0x130
	// Line 326, Address: 0x298ce8, Func Offset: 0x138
	// Line 328, Address: 0x298cf0, Func Offset: 0x140
	// Line 330, Address: 0x298cf8, Func Offset: 0x148
	// Line 340, Address: 0x298cfc, Func Offset: 0x14c
	// Line 342, Address: 0x298d04, Func Offset: 0x154
	// Line 343, Address: 0x298d10, Func Offset: 0x160
	// Line 344, Address: 0x298d20, Func Offset: 0x170
	// Line 345, Address: 0x298d34, Func Offset: 0x184
	// Line 346, Address: 0x298d40, Func Offset: 0x190
	// Line 347, Address: 0x298d48, Func Offset: 0x198
	// Line 348, Address: 0x298d50, Func Offset: 0x1a0
	// Line 350, Address: 0x298d58, Func Offset: 0x1a8
	// Line 352, Address: 0x298d60, Func Offset: 0x1b0
	// Line 353, Address: 0x298d6c, Func Offset: 0x1bc
	// Line 354, Address: 0x298d7c, Func Offset: 0x1cc
	// Line 355, Address: 0x298d90, Func Offset: 0x1e0
	// Line 356, Address: 0x298d9c, Func Offset: 0x1ec
	// Line 357, Address: 0x298da4, Func Offset: 0x1f4
	// Line 358, Address: 0x298dac, Func Offset: 0x1fc
	// Line 360, Address: 0x298db4, Func Offset: 0x204
	// Line 362, Address: 0x298dbc, Func Offset: 0x20c
	// Line 363, Address: 0x298dc8, Func Offset: 0x218
	// Line 364, Address: 0x298dd8, Func Offset: 0x228
	// Line 365, Address: 0x298dec, Func Offset: 0x23c
	// Line 366, Address: 0x298df4, Func Offset: 0x244
	// Line 368, Address: 0x298dfc, Func Offset: 0x24c
	// Line 369, Address: 0x298e08, Func Offset: 0x258
	// Line 370, Address: 0x298e18, Func Offset: 0x268
	// Line 371, Address: 0x298e2c, Func Offset: 0x27c
	// Line 372, Address: 0x298e38, Func Offset: 0x288
	// Line 373, Address: 0x298e40, Func Offset: 0x290
	// Line 374, Address: 0x298e48, Func Offset: 0x298
	// Line 376, Address: 0x298e50, Func Offset: 0x2a0
	// Line 378, Address: 0x298e58, Func Offset: 0x2a8
	// Line 379, Address: 0x298e64, Func Offset: 0x2b4
	// Line 380, Address: 0x298e74, Func Offset: 0x2c4
	// Line 381, Address: 0x298e88, Func Offset: 0x2d8
	// Line 382, Address: 0x298e94, Func Offset: 0x2e4
	// Line 383, Address: 0x298e9c, Func Offset: 0x2ec
	// Line 384, Address: 0x298ea4, Func Offset: 0x2f4
	// Line 389, Address: 0x298eac, Func Offset: 0x2fc
	// Line 390, Address: 0x298ec0, Func Offset: 0x310
	// Line 392, Address: 0x298ec8, Func Offset: 0x318
	// Line 393, Address: 0x298ef0, Func Offset: 0x340
	// Line 394, Address: 0x298f00, Func Offset: 0x350
	// Line 395, Address: 0x298f18, Func Offset: 0x368
	// Line 396, Address: 0x298f38, Func Offset: 0x388
	// Line 397, Address: 0x298f40, Func Offset: 0x390
	// Line 398, Address: 0x298f48, Func Offset: 0x398
	// Line 401, Address: 0x298f58, Func Offset: 0x3a8
	// Line 402, Address: 0x298f60, Func Offset: 0x3b0
	// Line 404, Address: 0x298f68, Func Offset: 0x3b8
	// Line 405, Address: 0x298f70, Func Offset: 0x3c0
	// Line 406, Address: 0x298f74, Func Offset: 0x3c4
	// Func End, Address: 0x298f98, Func Offset: 0x3e8
}

