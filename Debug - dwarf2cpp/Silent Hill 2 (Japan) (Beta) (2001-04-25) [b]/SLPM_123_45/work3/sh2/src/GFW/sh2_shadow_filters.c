typedef union Q_WORDDATA;
typedef struct shGsStencilDrawEnv;
typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct sh2gfw_Env_ctl;
typedef struct shGsLoopEnv;
typedef struct _anon4;
typedef struct _anon5;
typedef struct _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef struct _anon9;
typedef struct _anon10;
typedef struct shGsTinyDrawEnv;
typedef struct shGsAllEnv;
typedef struct _anon11;
typedef struct _anon12;
typedef struct _anon13;
typedef struct _anon14;
typedef struct sh2gfw_SPOTL_MATRIX;
typedef struct _anon15;
typedef struct sh2gfw_POINTL_MATRIX;
typedef struct _anon16;
typedef struct shGsDrawEnv;
typedef struct _anon17;
typedef struct _anon18;
typedef struct _anon19;


typedef Q_WORDDATA type_0[2];
typedef Q_WORDDATA type_1[2];
typedef Q_WORDDATA type_2[2];
typedef Q_WORDDATA type_3[2];
typedef Q_WORDDATA type_4[6];
typedef Q_WORDDATA type_5[2];
typedef Q_WORDDATA type_6[6];
typedef Q_WORDDATA type_7[256];
typedef unsigned int type_8[3];
typedef unsigned int type_9[3];
typedef unsigned int type_10[3];
typedef unsigned int type_11[24];
typedef unsigned int type_12[3];
typedef unsigned int type_13[3];
typedef unsigned short type_14[8];
typedef unsigned int type_15[2];
typedef float type_16[4];
typedef float type_17[4];
typedef float type_18[4][4];
typedef unsigned short type_19[4];
typedef _anon5 type_20[3];
typedef shGsDrawEnv type_21[3];
typedef shGsStencilDrawEnv type_22[3];
typedef shGsTinyDrawEnv type_23[6];
typedef Q_WORDDATA type_24[10];
typedef Q_WORDDATA type_25[10];
typedef Q_WORDDATA type_26[10];
typedef Q_WORDDATA type_27[10];
typedef Q_WORDDATA type_28[10];
typedef Q_WORDDATA type_29[10];
typedef Q_WORDDATA type_30[10];
typedef Q_WORDDATA type_31[8];
typedef Q_WORDDATA type_32[2];
typedef Q_WORDDATA type_33[2];
typedef Q_WORDDATA type_34[2];
typedef Q_WORDDATA type_35[2];
typedef Q_WORDDATA type_36[2];
typedef Q_WORDDATA type_37[2];
typedef Q_WORDDATA type_38[2];
typedef unsigned int type_39[4];
typedef Q_WORDDATA type_40[2];
typedef unsigned short type_41[8];
typedef Q_WORDDATA type_42[2];
typedef float type_43[4];
typedef Q_WORDDATA type_44[5];
typedef unsigned char type_45[16];
typedef Q_WORDDATA type_46[2];
typedef int type_47[4];
typedef Q_WORDDATA type_48[2];
typedef short type_49[8];
typedef Q_WORDDATA type_50[2];
typedef Q_WORDDATA type_51[5];
typedef char type_52[16];
typedef Q_WORDDATA type_53[2];
typedef unsigned long type_54[2];
typedef Q_WORDDATA type_55[2];
typedef Q_WORDDATA type_56[2];
typedef Q_WORDDATA type_57[2];

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

struct sh2gfw_SPOTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA spot_rot;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
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

struct sh2gfw_POINTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
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
sh2gfw_Env_ctl Env_ctl;
Q_WORDDATA STENCIL_workpacket[256];

Q_WORDDATA* shdw_fill_Work(Q_WORDDATA* col, unsigned int prim, Q_WORDDATA* pbuf);
Q_WORDDATA* shdw_clear(Q_WORDDATA* pbuf);
Q_WORDDATA* shdw_Composite_Shadow(unsigned int tbp, unsigned int mode, int shadow_mode, int tcc, int tfx, Q_WORDDATA* alp, Q_WORDDATA* color, Q_WORDDATA* test, Q_WORDDATA* pbuf);
Q_WORDDATA* shdw_StencilBuf2Work(unsigned int tbp, unsigned int prim, Q_WORDDATA* pbuf);
Q_WORDDATA* shdw_Work2Work(unsigned int tbp, Q_WORDDATA* pbuf);
void shdw_shadow_filter_main();

// 
// Start address: 0x17f050
Q_WORDDATA* shdw_fill_Work(Q_WORDDATA* col, unsigned int prim, Q_WORDDATA* pbuf)
{
	int id;
	// Line 46, Address: 0x17f050, Func Offset: 0
	// Line 47, Address: 0x17f064, Func Offset: 0x14
	// Line 50, Address: 0x17f068, Func Offset: 0x18
	// Line 51, Address: 0x17f078, Func Offset: 0x28
	// Line 52, Address: 0x17f090, Func Offset: 0x40
	// Line 56, Address: 0x17f094, Func Offset: 0x44
	// Line 57, Address: 0x17f0d4, Func Offset: 0x84
	// Line 58, Address: 0x17f0ec, Func Offset: 0x9c
	// Line 60, Address: 0x17f0f0, Func Offset: 0xa0
	// Line 62, Address: 0x17f118, Func Offset: 0xc8
	// Line 64, Address: 0x17f134, Func Offset: 0xe4
	// Line 65, Address: 0x17f148, Func Offset: 0xf8
	// Line 66, Address: 0x17f15c, Func Offset: 0x10c
	// Line 67, Address: 0x17f170, Func Offset: 0x120
	// Line 68, Address: 0x17f180, Func Offset: 0x130
	// Line 71, Address: 0x17f184, Func Offset: 0x134
	// Line 73, Address: 0x17f1a0, Func Offset: 0x150
	// Line 74, Address: 0x17f1b4, Func Offset: 0x164
	// Line 75, Address: 0x17f1c8, Func Offset: 0x178
	// Line 76, Address: 0x17f1dc, Func Offset: 0x18c
	// Line 77, Address: 0x17f1ec, Func Offset: 0x19c
	// Line 80, Address: 0x17f1f0, Func Offset: 0x1a0
	// Line 81, Address: 0x17f22c, Func Offset: 0x1dc
	// Line 82, Address: 0x17f23c, Func Offset: 0x1ec
	// Line 83, Address: 0x17f250, Func Offset: 0x200
	// Line 85, Address: 0x17f260, Func Offset: 0x210
	// Func End, Address: 0x17f270, Func Offset: 0x220
}

// 
// Start address: 0x17f270
Q_WORDDATA* shdw_clear(Q_WORDDATA* pbuf)
{
	int id;
	int j;
	// Line 96, Address: 0x17f270, Func Offset: 0
	// Line 97, Address: 0x17f280, Func Offset: 0x10
	// Line 104, Address: 0x17f288, Func Offset: 0x18
	// Line 111, Address: 0x17f2c0, Func Offset: 0x50
	// Line 112, Address: 0x17f2dc, Func Offset: 0x6c
	// Line 113, Address: 0x17f2f0, Func Offset: 0x80
	// Line 115, Address: 0x17f2f4, Func Offset: 0x84
	// Line 118, Address: 0x17f31c, Func Offset: 0xac
	// Line 120, Address: 0x17f34c, Func Offset: 0xdc
	// Line 123, Address: 0x17f378, Func Offset: 0x108
	// Line 125, Address: 0x17f398, Func Offset: 0x128
	// Line 128, Address: 0x17f3b4, Func Offset: 0x144
	// Line 132, Address: 0x17f408, Func Offset: 0x198
	// Line 133, Address: 0x17f41c, Func Offset: 0x1ac
	// Line 134, Address: 0x17f430, Func Offset: 0x1c0
	// Line 135, Address: 0x17f444, Func Offset: 0x1d4
	// Line 136, Address: 0x17f454, Func Offset: 0x1e4
	// Line 138, Address: 0x17f458, Func Offset: 0x1e8
	// Line 142, Address: 0x17f4ac, Func Offset: 0x23c
	// Line 143, Address: 0x17f4c0, Func Offset: 0x250
	// Line 144, Address: 0x17f4d4, Func Offset: 0x264
	// Line 145, Address: 0x17f4e8, Func Offset: 0x278
	// Line 147, Address: 0x17f500, Func Offset: 0x290
	// Line 149, Address: 0x17f528, Func Offset: 0x2b8
	// Line 151, Address: 0x17f564, Func Offset: 0x2f4
	// Line 152, Address: 0x17f574, Func Offset: 0x304
	// Line 154, Address: 0x17f588, Func Offset: 0x318
	// Line 156, Address: 0x17f598, Func Offset: 0x328
	// Func End, Address: 0x17f5ac, Func Offset: 0x33c
}

// 
// Start address: 0x17f5b0
Q_WORDDATA* shdw_Composite_Shadow(unsigned int tbp, unsigned int mode, int shadow_mode, int tcc, int tfx, Q_WORDDATA* alp, Q_WORDDATA* color, Q_WORDDATA* test, Q_WORDDATA* pbuf)
{
	int id;
	// Line 168, Address: 0x17f5b0, Func Offset: 0
	// Line 170, Address: 0x17f5d8, Func Offset: 0x28
	// Line 176, Address: 0x17f5dc, Func Offset: 0x2c
	// Line 177, Address: 0x17f5ec, Func Offset: 0x3c
	// Line 178, Address: 0x17f604, Func Offset: 0x54
	// Line 181, Address: 0x17f608, Func Offset: 0x58
	// Line 182, Address: 0x17f624, Func Offset: 0x74
	// Line 183, Address: 0x17f638, Func Offset: 0x88
	// Line 185, Address: 0x17f63c, Func Offset: 0x8c
	// Line 186, Address: 0x17f64c, Func Offset: 0x9c
	// Line 187, Address: 0x17f660, Func Offset: 0xb0
	// Line 190, Address: 0x17f664, Func Offset: 0xb4
	// Line 206, Address: 0x17f684, Func Offset: 0xd4
	// Line 211, Address: 0x17f690, Func Offset: 0xe0
	// Line 213, Address: 0x17f6b0, Func Offset: 0x100
	// Line 218, Address: 0x17f6b8, Func Offset: 0x108
	// Line 222, Address: 0x17f6e4, Func Offset: 0x134
	// Line 224, Address: 0x17f6f8, Func Offset: 0x148
	// Line 227, Address: 0x17f758, Func Offset: 0x1a8
	// Line 229, Address: 0x17f75c, Func Offset: 0x1ac
	// Line 230, Address: 0x17f770, Func Offset: 0x1c0
	// Line 231, Address: 0x17f784, Func Offset: 0x1d4
	// Line 239, Address: 0x17f788, Func Offset: 0x1d8
	// Line 244, Address: 0x17f7a8, Func Offset: 0x1f8
	// Line 245, Address: 0x17f7c0, Func Offset: 0x210
	// Line 246, Address: 0x17f7c4, Func Offset: 0x214
	// Line 247, Address: 0x17f7d0, Func Offset: 0x220
	// Line 248, Address: 0x17f7e0, Func Offset: 0x230
	// Line 249, Address: 0x17f7f0, Func Offset: 0x240
	// Line 250, Address: 0x17f804, Func Offset: 0x254
	// Line 251, Address: 0x17f814, Func Offset: 0x264
	// Line 252, Address: 0x17f81c, Func Offset: 0x26c
	// Line 253, Address: 0x17f830, Func Offset: 0x280
	// Line 254, Address: 0x17f844, Func Offset: 0x294
	// Line 255, Address: 0x17f858, Func Offset: 0x2a8
	// Line 257, Address: 0x17f868, Func Offset: 0x2b8
	// Line 260, Address: 0x17f86c, Func Offset: 0x2bc
	// Line 265, Address: 0x17f88c, Func Offset: 0x2dc
	// Line 266, Address: 0x17f8a0, Func Offset: 0x2f0
	// Line 267, Address: 0x17f8b4, Func Offset: 0x304
	// Line 268, Address: 0x17f8c8, Func Offset: 0x318
	// Line 269, Address: 0x17f8d8, Func Offset: 0x328
	// Line 271, Address: 0x17f8dc, Func Offset: 0x32c
	// Line 272, Address: 0x17f8e8, Func Offset: 0x338
	// Line 273, Address: 0x17f8fc, Func Offset: 0x34c
	// Line 274, Address: 0x17f910, Func Offset: 0x360
	// Line 275, Address: 0x17f924, Func Offset: 0x374
	// Line 276, Address: 0x17f934, Func Offset: 0x384
	// Line 277, Address: 0x17f93c, Func Offset: 0x38c
	// Line 278, Address: 0x17f94c, Func Offset: 0x39c
	// Line 279, Address: 0x17f95c, Func Offset: 0x3ac
	// Line 280, Address: 0x17f970, Func Offset: 0x3c0
	// Line 282, Address: 0x17f980, Func Offset: 0x3d0
	// Line 285, Address: 0x17f984, Func Offset: 0x3d4
	// Line 287, Address: 0x17f9a4, Func Offset: 0x3f4
	// Line 288, Address: 0x17f9b8, Func Offset: 0x408
	// Line 289, Address: 0x17f9cc, Func Offset: 0x41c
	// Line 290, Address: 0x17f9e0, Func Offset: 0x430
	// Line 291, Address: 0x17f9f0, Func Offset: 0x440
	// Line 293, Address: 0x17f9f4, Func Offset: 0x444
	// Line 296, Address: 0x17fa1c, Func Offset: 0x46c
	// Line 298, Address: 0x17fa58, Func Offset: 0x4a8
	// Line 299, Address: 0x17fa68, Func Offset: 0x4b8
	// Line 301, Address: 0x17fa7c, Func Offset: 0x4cc
	// Line 303, Address: 0x17fa8c, Func Offset: 0x4dc
	// Func End, Address: 0x17fa9c, Func Offset: 0x4ec
}

// 
// Start address: 0x17faa0
Q_WORDDATA* shdw_StencilBuf2Work(unsigned int tbp, unsigned int prim, Q_WORDDATA* pbuf)
{
	int id;
	// Line 311, Address: 0x17faa0, Func Offset: 0
	// Line 312, Address: 0x17fab4, Func Offset: 0x14
	// Line 317, Address: 0x17fab8, Func Offset: 0x18
	// Line 318, Address: 0x17fac8, Func Offset: 0x28
	// Line 319, Address: 0x17fae0, Func Offset: 0x40
	// Line 323, Address: 0x17fae4, Func Offset: 0x44
	// Line 324, Address: 0x17fb00, Func Offset: 0x60
	// Line 325, Address: 0x17fb14, Func Offset: 0x74
	// Line 328, Address: 0x17fb18, Func Offset: 0x78
	// Line 329, Address: 0x17fb28, Func Offset: 0x88
	// Line 330, Address: 0x17fb3c, Func Offset: 0x9c
	// Line 332, Address: 0x17fb40, Func Offset: 0xa0
	// Line 333, Address: 0x17fb54, Func Offset: 0xb4
	// Line 336, Address: 0x17fbb4, Func Offset: 0x114
	// Line 338, Address: 0x17fbb8, Func Offset: 0x118
	// Line 339, Address: 0x17fbcc, Func Offset: 0x12c
	// Line 340, Address: 0x17fbdc, Func Offset: 0x13c
	// Line 345, Address: 0x17fbe0, Func Offset: 0x140
	// Line 348, Address: 0x17fc20, Func Offset: 0x180
	// Line 349, Address: 0x17fc38, Func Offset: 0x198
	// Line 351, Address: 0x17fc3c, Func Offset: 0x19c
	// Line 352, Address: 0x17fc4c, Func Offset: 0x1ac
	// Line 353, Address: 0x17fc5c, Func Offset: 0x1bc
	// Line 354, Address: 0x17fc70, Func Offset: 0x1d0
	// Line 355, Address: 0x17fc80, Func Offset: 0x1e0
	// Line 357, Address: 0x17fc84, Func Offset: 0x1e4
	// Line 359, Address: 0x17fcd8, Func Offset: 0x238
	// Line 360, Address: 0x17fcec, Func Offset: 0x24c
	// Line 361, Address: 0x17fd00, Func Offset: 0x260
	// Line 362, Address: 0x17fd14, Func Offset: 0x274
	// Line 363, Address: 0x17fd24, Func Offset: 0x284
	// Line 365, Address: 0x17fd28, Func Offset: 0x288
	// Line 366, Address: 0x17fd3c, Func Offset: 0x29c
	// Line 367, Address: 0x17fd50, Func Offset: 0x2b0
	// Line 368, Address: 0x17fd64, Func Offset: 0x2c4
	// Line 369, Address: 0x17fd74, Func Offset: 0x2d4
	// Line 371, Address: 0x17fd78, Func Offset: 0x2d8
	// Line 373, Address: 0x17fdcc, Func Offset: 0x32c
	// Line 374, Address: 0x17fde0, Func Offset: 0x340
	// Line 375, Address: 0x17fdf4, Func Offset: 0x354
	// Line 376, Address: 0x17fe08, Func Offset: 0x368
	// Line 377, Address: 0x17fe18, Func Offset: 0x378
	// Line 380, Address: 0x17fe1c, Func Offset: 0x37c
	// Line 381, Address: 0x17fe2c, Func Offset: 0x38c
	// Line 382, Address: 0x17fe40, Func Offset: 0x3a0
	// Line 385, Address: 0x17fe44, Func Offset: 0x3a4
	// Line 387, Address: 0x17fe80, Func Offset: 0x3e0
	// Line 388, Address: 0x17fe90, Func Offset: 0x3f0
	// Line 390, Address: 0x17fea4, Func Offset: 0x404
	// Line 392, Address: 0x17feb4, Func Offset: 0x414
	// Func End, Address: 0x17fec4, Func Offset: 0x424
}

// 
// Start address: 0x17fed0
Q_WORDDATA* shdw_Work2Work(unsigned int tbp, Q_WORDDATA* pbuf)
{
	int id;
	// Line 398, Address: 0x17fed0, Func Offset: 0
	// Line 400, Address: 0x17fee0, Func Offset: 0x10
	// Line 407, Address: 0x17fee4, Func Offset: 0x14
	// Line 408, Address: 0x17fef4, Func Offset: 0x24
	// Line 409, Address: 0x17ff0c, Func Offset: 0x3c
	// Line 413, Address: 0x17ff10, Func Offset: 0x40
	// Line 414, Address: 0x17ff2c, Func Offset: 0x5c
	// Line 415, Address: 0x17ff40, Func Offset: 0x70
	// Line 418, Address: 0x17ff44, Func Offset: 0x74
	// Line 419, Address: 0x17ff54, Func Offset: 0x84
	// Line 420, Address: 0x17ff68, Func Offset: 0x98
	// Line 422, Address: 0x17ff6c, Func Offset: 0x9c
	// Line 423, Address: 0x17ff80, Func Offset: 0xb0
	// Line 426, Address: 0x17ffd0, Func Offset: 0x100
	// Line 428, Address: 0x17ffd4, Func Offset: 0x104
	// Line 429, Address: 0x17ffe8, Func Offset: 0x118
	// Line 430, Address: 0x17fffc, Func Offset: 0x12c
	// Line 432, Address: 0x180000, Func Offset: 0x130
	// Line 434, Address: 0x180020, Func Offset: 0x150
	// Line 435, Address: 0x180038, Func Offset: 0x168
	// Line 445, Address: 0x18003c, Func Offset: 0x16c
	// Line 446, Address: 0x180050, Func Offset: 0x180
	// Line 447, Address: 0x180064, Func Offset: 0x194
	// Line 448, Address: 0x180078, Func Offset: 0x1a8
	// Line 450, Address: 0x180088, Func Offset: 0x1b8
	// Line 452, Address: 0x18008c, Func Offset: 0x1bc
	// Line 456, Address: 0x1800e0, Func Offset: 0x210
	// Line 457, Address: 0x1800f4, Func Offset: 0x224
	// Line 458, Address: 0x180108, Func Offset: 0x238
	// Line 459, Address: 0x18011c, Func Offset: 0x24c
	// Line 460, Address: 0x18012c, Func Offset: 0x25c
	// Line 469, Address: 0x180130, Func Offset: 0x260
	// Line 470, Address: 0x180140, Func Offset: 0x270
	// Line 471, Address: 0x180150, Func Offset: 0x280
	// Line 472, Address: 0x180164, Func Offset: 0x294
	// Line 474, Address: 0x180174, Func Offset: 0x2a4
	// Line 476, Address: 0x180178, Func Offset: 0x2a8
	// Line 478, Address: 0x1801cc, Func Offset: 0x2fc
	// Line 479, Address: 0x1801e0, Func Offset: 0x310
	// Line 480, Address: 0x1801f4, Func Offset: 0x324
	// Line 481, Address: 0x180208, Func Offset: 0x338
	// Line 482, Address: 0x180218, Func Offset: 0x348
	// Line 484, Address: 0x18021c, Func Offset: 0x34c
	// Line 485, Address: 0x18022c, Func Offset: 0x35c
	// Line 486, Address: 0x180240, Func Offset: 0x370
	// Line 489, Address: 0x180244, Func Offset: 0x374
	// Line 491, Address: 0x180280, Func Offset: 0x3b0
	// Line 492, Address: 0x180290, Func Offset: 0x3c0
	// Line 494, Address: 0x1802a4, Func Offset: 0x3d4
	// Line 496, Address: 0x1802b4, Func Offset: 0x3e4
	// Func End, Address: 0x1802c4, Func Offset: 0x3f4
}

// 
// Start address: 0x1802d0
void shdw_shadow_filter_main()
{
	Q_WORDDATA* kcs;
	Q_WORDDATA* w2w1;
	Q_WORDDATA* w2w0;
	Q_WORDDATA* sb2w;
	Q_WORDDATA* filw;
	Q_WORDDATA* sqt_clear;
	unsigned int id;
	unsigned int fbp[2];
	// Line 508, Address: 0x1802d0, Func Offset: 0
	// Line 509, Address: 0x1802f4, Func Offset: 0x24
	// Line 510, Address: 0x1802f8, Func Offset: 0x28
	// Line 516, Address: 0x180300, Func Offset: 0x30
	// Line 517, Address: 0x18031c, Func Offset: 0x4c
	// Line 520, Address: 0x180338, Func Offset: 0x68
	// Line 524, Address: 0x180348, Func Offset: 0x78
	// Line 526, Address: 0x180370, Func Offset: 0xa0
	// Line 527, Address: 0x180384, Func Offset: 0xb4
	// Line 543, Address: 0x180398, Func Offset: 0xc8
	// Line 545, Address: 0x1803b4, Func Offset: 0xe4
	// Line 552, Address: 0x1803fc, Func Offset: 0x12c
	// Line 556, Address: 0x180408, Func Offset: 0x138
	// Line 563, Address: 0x180410, Func Offset: 0x140
	// Line 565, Address: 0x180424, Func Offset: 0x154
	// Line 568, Address: 0x18042c, Func Offset: 0x15c
	// Line 569, Address: 0x18043c, Func Offset: 0x16c
	// Line 570, Address: 0x18044c, Func Offset: 0x17c
	// Line 573, Address: 0x18045c, Func Offset: 0x18c
	// Line 583, Address: 0x180468, Func Offset: 0x198
	// Line 587, Address: 0x180480, Func Offset: 0x1b0
	// Line 590, Address: 0x180490, Func Offset: 0x1c0
	// Line 593, Address: 0x18049c, Func Offset: 0x1cc
	// Line 611, Address: 0x1804ac, Func Offset: 0x1dc
	// Line 613, Address: 0x1804b4, Func Offset: 0x1e4
	// Line 615, Address: 0x1804c8, Func Offset: 0x1f8
	// Line 621, Address: 0x1804d4, Func Offset: 0x204
	// Line 624, Address: 0x1804dc, Func Offset: 0x20c
	// Line 626, Address: 0x1804f0, Func Offset: 0x220
	// Line 632, Address: 0x1804fc, Func Offset: 0x22c
	// Line 634, Address: 0x180504, Func Offset: 0x234
	// Line 636, Address: 0x180518, Func Offset: 0x248
	// Line 642, Address: 0x180524, Func Offset: 0x254
	// Line 643, Address: 0x18052c, Func Offset: 0x25c
	// Line 646, Address: 0x18053c, Func Offset: 0x26c
	// Line 648, Address: 0x18054c, Func Offset: 0x27c
	// Line 650, Address: 0x18055c, Func Offset: 0x28c
	// Line 652, Address: 0x180564, Func Offset: 0x294
	// Line 660, Address: 0x180598, Func Offset: 0x2c8
	// Line 664, Address: 0x1805a4, Func Offset: 0x2d4
	// Line 667, Address: 0x1805ac, Func Offset: 0x2dc
	// Line 673, Address: 0x1805bc, Func Offset: 0x2ec
	// Line 676, Address: 0x1805d0, Func Offset: 0x300
	// Func End, Address: 0x1805fc, Func Offset: 0x32c
}

