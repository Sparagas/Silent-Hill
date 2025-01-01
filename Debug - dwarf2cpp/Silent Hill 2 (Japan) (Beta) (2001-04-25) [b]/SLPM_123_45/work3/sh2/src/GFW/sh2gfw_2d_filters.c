typedef union Q_WORDDATA;
typedef struct sh2gfw_SPOTL_MATRIX;
typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef struct sh2gfw_POINTL_MATRIX;
typedef struct shGsDrawEnv;
typedef struct _anon5;
typedef struct _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef struct _anon9;
typedef struct _anon10;
typedef struct _anon11;
typedef struct shGsStencilDrawEnv;
typedef struct sh2gfw_Env_ctl;
typedef struct shGsLoopEnv;
typedef struct _anon12;
typedef struct _anon13;
typedef struct shGsTinyDrawEnv;
typedef struct _anon14;
typedef struct _anon15;
typedef struct _anon16;
typedef struct shGsAllEnv;
typedef struct _anon17;
typedef struct _anon18;
typedef struct _anon19;
typedef struct _anon20;


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
typedef int type_14[3];
typedef Q_WORDDATA type_15[5];
typedef Q_WORDDATA type_16[2];
typedef int type_17[4];
typedef Q_WORDDATA type_18[2];
typedef short type_19[8];
typedef Q_WORDDATA type_20[2];
typedef char type_21[16];
typedef Q_WORDDATA type_22[5];
typedef Q_WORDDATA type_23[2];
typedef unsigned long type_24[2];
typedef Q_WORDDATA type_25[2];
typedef Q_WORDDATA type_26[2];
typedef Q_WORDDATA* type_27[32];
typedef int type_28[3];
typedef Q_WORDDATA type_29[2];
typedef unsigned short type_30[32];
typedef Q_WORDDATA type_31[2];
typedef Q_WORDDATA type_32[0];
typedef Q_WORDDATA type_33[2];
typedef Q_WORDDATA type_34[2];
typedef Q_WORDDATA type_35[2];
typedef Q_WORDDATA type_36[6];
typedef Q_WORDDATA type_37[2];
typedef Q_WORDDATA type_38[0];
typedef Q_WORDDATA type_39[6];
typedef unsigned int type_40[3];
typedef unsigned int type_41[3];
typedef unsigned int type_42[3];
typedef unsigned int type_43[24];
typedef unsigned int type_44[3];
typedef unsigned int type_45[3];
typedef unsigned short type_46[8];
typedef int type_47[3];
typedef float type_48[4];
typedef float type_49[4];
typedef float type_50[4][4];
typedef int type_51[3];
typedef unsigned short type_52[4];
typedef _anon6 type_53[3];
typedef shGsDrawEnv type_54[3];
typedef shGsStencilDrawEnv type_55[3];
typedef int type_56[3];
typedef shGsTinyDrawEnv type_57[6];
typedef Q_WORDDATA type_58[10];
typedef Q_WORDDATA type_59[10];
typedef Q_WORDDATA type_60[10];
typedef int type_61[3];
typedef Q_WORDDATA type_62[10];
typedef Q_WORDDATA type_63[10];
typedef Q_WORDDATA type_64[256];
typedef Q_WORDDATA type_65[10];
typedef int type_66[3];
typedef Q_WORDDATA type_67[10];

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

struct sh2gfw_SPOTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA spot_rot;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
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
	Q_WORDDATA* f_address[32];
	unsigned short f_length[32];
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
		unsigned long OFX : 16;
		unsigned long pad16 : 16;
		unsigned long OFY : 16;
		unsigned long pad48 : 16;
	};
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
	_anon9 draw;
	Q_WORDDATA drawq2[5];
	_anon15 clear;
	_anon0 giftag_nc;
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

struct _anon5
{
	struct
	{
		unsigned long X : 16;
		unsigned long Y : 16;
		unsigned long Z : 32;
	};
};

struct _anon6
{
	_anon18 pmode;
	_anon3 smode2;
	_anon19 dispfb;
	_anon7 display;
	_anon8 bgcolor;
};

struct _anon7
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

struct _anon8
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

struct _anon9
{
	_anon17 frame1;
	unsigned long frame1addr;
	_anon10 zbuf1;
	long zbuf1addr;
	_anon4 xyoffset1;
	long xyoffset1addr;
	_anon16 scissor1;
	long scissor1addr;
	_anon12 prmodecont;
	long prmodecontaddr;
	_anon1 colclamp;
	long colclampaddr;
	_anon13 dthe;
	long dtheaddr;
	_anon20 test1;
	long test1addr;
};

struct _anon10
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

struct _anon11
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
	_anon9 draw;
	Q_WORDDATA alpha1;
	Q_WORDDATA drawq2[6];
	_anon15 clear;
	Q_WORDDATA frame;
	_anon0 giftag_nc;
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

struct _anon12
{
	struct
	{
		unsigned long AC : 1;
		unsigned long pad01 : 63;
	};
};

struct _anon13
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
	_anon20 testa;
	long testaaddr;
	_anon11 prim;
	long primaddr;
	_anon14 rgbaq;
	long rgbaqaddr;
	_anon5 xyz2a;
	long xyz2aaddr;
	_anon5 xyz2b;
	long xyz2baddr;
	_anon20 testb;
	long testbaddr;
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

Q_WORDDATA TWOD_FILTER_PACK[0];
shGsAllEnv shGs_AllEnv;
sh2gfw_Env_ctl Env_ctl;
Q_WORDDATA CalcTex_buffer[0];
Q_WORDDATA Noise_Packet[256];

void sh2gfw_Filter_JustCopy2(Q_WORDDATA** ppqwd);
void sh2gfw_test_MakeNoise();
void sh2gfw_SendDraw_Noise(Q_WORDDATA** ppqwd, unsigned int ratio, unsigned int pam, unsigned int mode);
void sh2gfw_Fade(Q_WORDDATA** ppqwd, Q_WORDDATA* col, int step, int allstep, int command);

// 
// Start address: 0x180750
void sh2gfw_Filter_JustCopy2(Q_WORDDATA** ppqwd)
{
	Q_WORDDATA* qwd;
	int ty;
	int tx;
	int id;
	// Line 182, Address: 0x180750, Func Offset: 0
	// Line 184, Address: 0x180768, Func Offset: 0x18
	// Line 187, Address: 0x18076c, Func Offset: 0x1c
	// Line 189, Address: 0x180778, Func Offset: 0x28
	// Line 191, Address: 0x1807cc, Func Offset: 0x7c
	// Line 192, Address: 0x18081c, Func Offset: 0xcc
	// Line 203, Address: 0x180844, Func Offset: 0xf4
	// Line 209, Address: 0x180874, Func Offset: 0x124
	// Line 228, Address: 0x1808b0, Func Offset: 0x160
	// Line 233, Address: 0x18093c, Func Offset: 0x1ec
	// Line 237, Address: 0x18094c, Func Offset: 0x1fc
	// Line 241, Address: 0x180978, Func Offset: 0x228
	// Line 245, Address: 0x180980, Func Offset: 0x230
	// Line 255, Address: 0x180988, Func Offset: 0x238
	// Line 258, Address: 0x1809b4, Func Offset: 0x264
	// Line 263, Address: 0x1809bc, Func Offset: 0x26c
	// Line 265, Address: 0x1809e8, Func Offset: 0x298
	// Line 268, Address: 0x180a3c, Func Offset: 0x2ec
	// Line 270, Address: 0x180a5c, Func Offset: 0x30c
	// Line 271, Address: 0x180a74, Func Offset: 0x324
	// Line 273, Address: 0x180a78, Func Offset: 0x328
	// Line 278, Address: 0x180a9c, Func Offset: 0x34c
	// Line 279, Address: 0x180ab8, Func Offset: 0x368
	// Line 280, Address: 0x180ad4, Func Offset: 0x384
	// Line 281, Address: 0x180af0, Func Offset: 0x3a0
	// Line 283, Address: 0x180b14, Func Offset: 0x3c4
	// Line 286, Address: 0x180b5c, Func Offset: 0x40c
	// Line 291, Address: 0x180b8c, Func Offset: 0x43c
	// Line 292, Address: 0x180ba8, Func Offset: 0x458
	// Line 293, Address: 0x180bc4, Func Offset: 0x474
	// Line 294, Address: 0x180be0, Func Offset: 0x490
	// Line 296, Address: 0x180c04, Func Offset: 0x4b4
	// Line 297, Address: 0x180c58, Func Offset: 0x508
	// Line 298, Address: 0x180c68, Func Offset: 0x518
	// Line 299, Address: 0x180c7c, Func Offset: 0x52c
	// Line 303, Address: 0x180c84, Func Offset: 0x534
	// Line 304, Address: 0x180cac, Func Offset: 0x55c
	// Line 307, Address: 0x180cb0, Func Offset: 0x560
	// Line 308, Address: 0x180cc0, Func Offset: 0x570
	// Line 309, Address: 0x180cd4, Func Offset: 0x584
	// Line 310, Address: 0x180ce8, Func Offset: 0x598
	// Line 311, Address: 0x180cf4, Func Offset: 0x5a4
	// Line 317, Address: 0x180d00, Func Offset: 0x5b0
	// Func End, Address: 0x180d1c, Func Offset: 0x5cc
}

// 
// Start address: 0x180d20
void sh2gfw_test_MakeNoise()
{
	int i;
	unsigned int isd;
	unsigned int itmp;
	unsigned int imsk;
	unsigned int irc;
	unsigned int ira;
	unsigned int* noise_data2;
	unsigned int* noise_data1;
	// Line 642, Address: 0x180d20, Func Offset: 0
	// Line 644, Address: 0x180d44, Func Offset: 0x24
	// Line 654, Address: 0x180d48, Func Offset: 0x28
	// Line 655, Address: 0x180d50, Func Offset: 0x30
	// Line 656, Address: 0x180d58, Func Offset: 0x38
	// Line 657, Address: 0x180d60, Func Offset: 0x40
	// Line 659, Address: 0x180d64, Func Offset: 0x44
	// Line 660, Address: 0x180d68, Func Offset: 0x48
	// Line 673, Address: 0x180d74, Func Offset: 0x54
	// Line 674, Address: 0x180d7c, Func Offset: 0x5c
	// Line 676, Address: 0x180d80, Func Offset: 0x60
	// Line 677, Address: 0x180d88, Func Offset: 0x68
	// Line 679, Address: 0x180d94, Func Offset: 0x74
	// Line 680, Address: 0x180d9c, Func Offset: 0x7c
	// Line 682, Address: 0x180da8, Func Offset: 0x88
	// Line 683, Address: 0x180db0, Func Offset: 0x90
	// Line 685, Address: 0x180dbc, Func Offset: 0x9c
	// Line 687, Address: 0x180dc8, Func Offset: 0xa8
	// Line 688, Address: 0x180dd8, Func Offset: 0xb8
	// Line 700, Address: 0x180de0, Func Offset: 0xc0
	// Line 702, Address: 0x180dfc, Func Offset: 0xdc
	// Line 703, Address: 0x180e0c, Func Offset: 0xec
	// Line 704, Address: 0x180e20, Func Offset: 0x100
	// Line 705, Address: 0x180e2c, Func Offset: 0x10c
	// Line 707, Address: 0x180e3c, Func Offset: 0x11c
	// Line 708, Address: 0x180e44, Func Offset: 0x124
	// Line 709, Address: 0x180e6c, Func Offset: 0x14c
	// Line 712, Address: 0x180e88, Func Offset: 0x168
	// Func End, Address: 0x180eb4, Func Offset: 0x194
}

// 
// Start address: 0x180ec0
void sh2gfw_SendDraw_Noise(Q_WORDDATA** ppqwd, unsigned int ratio, unsigned int pam, unsigned int mode)
{
	int col;
	int iy;
	int ix;
	int idd[3];
	int idd[3];
	int ty;
	int tx;
	int id;
	Q_WORDDATA* qwd;
	Q_WORDDATA* pqwd;
	// Line 960, Address: 0x180ec0, Func Offset: 0
	// Line 961, Address: 0x180ef4, Func Offset: 0x34
	// Line 963, Address: 0x180f00, Func Offset: 0x40
	// Line 964, Address: 0x180f0c, Func Offset: 0x4c
	// Line 966, Address: 0x180f28, Func Offset: 0x68
	// Line 968, Address: 0x180f64, Func Offset: 0xa4
	// Line 973, Address: 0x180f9c, Func Offset: 0xdc
	// Line 974, Address: 0x180fd0, Func Offset: 0x110
	// Line 975, Address: 0x180fdc, Func Offset: 0x11c
	// Line 976, Address: 0x180fe4, Func Offset: 0x124
	// Line 977, Address: 0x180ff0, Func Offset: 0x130
	// Line 978, Address: 0x180ffc, Func Offset: 0x13c
	// Line 979, Address: 0x181008, Func Offset: 0x148
	// Line 980, Address: 0x181014, Func Offset: 0x154
	// Line 981, Address: 0x181020, Func Offset: 0x160
	// Line 982, Address: 0x18102c, Func Offset: 0x16c
	// Line 983, Address: 0x181034, Func Offset: 0x174
	// Line 984, Address: 0x181040, Func Offset: 0x180
	// Line 986, Address: 0x181074, Func Offset: 0x1b4
	// Line 989, Address: 0x1810c8, Func Offset: 0x208
	// Line 990, Address: 0x1810d0, Func Offset: 0x210
	// Line 992, Address: 0x181118, Func Offset: 0x258
	// Line 993, Address: 0x181158, Func Offset: 0x298
	// Line 1003, Address: 0x181178, Func Offset: 0x2b8
	// Line 1008, Address: 0x1811a0, Func Offset: 0x2e0
	// Line 1016, Address: 0x1811d4, Func Offset: 0x314
	// Line 1018, Address: 0x18120c, Func Offset: 0x34c
	// Line 1022, Address: 0x18121c, Func Offset: 0x35c
	// Line 1026, Address: 0x181240, Func Offset: 0x380
	// Line 1030, Address: 0x181248, Func Offset: 0x388
	// Line 1040, Address: 0x181250, Func Offset: 0x390
	// Line 1043, Address: 0x181274, Func Offset: 0x3b4
	// Line 1047, Address: 0x18127c, Func Offset: 0x3bc
	// Line 1052, Address: 0x1812a0, Func Offset: 0x3e0
	// Line 1053, Address: 0x1812ac, Func Offset: 0x3ec
	// Line 1057, Address: 0x1812b8, Func Offset: 0x3f8
	// Line 1059, Address: 0x1812ec, Func Offset: 0x42c
	// Line 1063, Address: 0x181304, Func Offset: 0x444
	// Line 1066, Address: 0x181338, Func Offset: 0x478
	// Line 1068, Address: 0x18137c, Func Offset: 0x4bc
	// Line 1069, Address: 0x181384, Func Offset: 0x4c4
	// Line 1070, Address: 0x1813a0, Func Offset: 0x4e0
	// Line 1074, Address: 0x1813ac, Func Offset: 0x4ec
	// Line 1076, Address: 0x1813e0, Func Offset: 0x520
	// Line 1080, Address: 0x1813f8, Func Offset: 0x538
	// Line 1083, Address: 0x18142c, Func Offset: 0x56c
	// Line 1089, Address: 0x18147c, Func Offset: 0x5bc
	// Line 1096, Address: 0x181488, Func Offset: 0x5c8
	// Line 1097, Address: 0x181494, Func Offset: 0x5d4
	// Line 1099, Address: 0x1814a0, Func Offset: 0x5e0
	// Line 1102, Address: 0x1814e8, Func Offset: 0x628
	// Line 1104, Address: 0x181504, Func Offset: 0x644
	// Line 1105, Address: 0x181518, Func Offset: 0x658
	// Line 1107, Address: 0x181520, Func Offset: 0x660
	// Line 1109, Address: 0x181540, Func Offset: 0x680
	// Line 1114, Address: 0x18157c, Func Offset: 0x6bc
	// Line 1117, Address: 0x1815d8, Func Offset: 0x718
	// Line 1119, Address: 0x181604, Func Offset: 0x744
	// Line 1124, Address: 0x181640, Func Offset: 0x780
	// Line 1126, Address: 0x1816a4, Func Offset: 0x7e4
	// Line 1127, Address: 0x1816b4, Func Offset: 0x7f4
	// Line 1132, Address: 0x1816c4, Func Offset: 0x804
	// Line 1133, Address: 0x1816d0, Func Offset: 0x810
	// Line 1139, Address: 0x1816e4, Func Offset: 0x824
	// Line 1141, Address: 0x18170c, Func Offset: 0x84c
	// Line 1142, Address: 0x181718, Func Offset: 0x858
	// Func End, Address: 0x181744, Func Offset: 0x884
}

// 
// Start address: 0x181750
void sh2gfw_Fade(Q_WORDDATA** ppqwd, Q_WORDDATA* col, int step, int allstep, int command)
{
	Q_WORDDATA* qwd;
	int id;
	// Line 1261, Address: 0x181750, Func Offset: 0
	// Line 1263, Address: 0x181770, Func Offset: 0x20
	// Line 1266, Address: 0x181774, Func Offset: 0x24
	// Line 1268, Address: 0x181780, Func Offset: 0x30
	// Line 1270, Address: 0x1817d4, Func Offset: 0x84
	// Line 1272, Address: 0x181824, Func Offset: 0xd4
	// Line 1283, Address: 0x18184c, Func Offset: 0xfc
	// Line 1289, Address: 0x18187c, Func Offset: 0x12c
	// Line 1293, Address: 0x1818b8, Func Offset: 0x168
	// Line 1296, Address: 0x1818e4, Func Offset: 0x194
	// Line 1305, Address: 0x1818f0, Func Offset: 0x1a0
	// Line 1307, Address: 0x181944, Func Offset: 0x1f4
	// Line 1316, Address: 0x18194c, Func Offset: 0x1fc
	// Line 1322, Address: 0x1819a0, Func Offset: 0x250
	// Line 1324, Address: 0x1819f4, Func Offset: 0x2a4
	// Line 1326, Address: 0x181a14, Func Offset: 0x2c4
	// Line 1327, Address: 0x181a28, Func Offset: 0x2d8
	// Line 1329, Address: 0x181a2c, Func Offset: 0x2dc
	// Line 1330, Address: 0x181a9c, Func Offset: 0x34c
	// Line 1333, Address: 0x181aa0, Func Offset: 0x350
	// Line 1338, Address: 0x181ad4, Func Offset: 0x384
	// Line 1340, Address: 0x181b00, Func Offset: 0x3b0
	// Line 1344, Address: 0x181b34, Func Offset: 0x3e4
	// Line 1345, Address: 0x181b44, Func Offset: 0x3f4
	// Line 1346, Address: 0x181b58, Func Offset: 0x408
	// Line 1350, Address: 0x181b78, Func Offset: 0x428
	// Line 1354, Address: 0x181b84, Func Offset: 0x434
	// Func End, Address: 0x181b98, Func Offset: 0x448
}

