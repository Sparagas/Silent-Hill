typedef struct _anon0;
typedef union Q_WORDDATA;
typedef struct _anon1;
typedef struct shGsDrawEnv;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef struct shGsStencilDrawEnv;
typedef struct sh2gfw_SPOTL_MATRIX;
typedef struct _anon5;
typedef struct _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef struct sh2gfw_POINTL_MATRIX;
typedef struct _anon9;
typedef struct shGsLoopEnv;
typedef struct Shadow_Filter_Work;
typedef struct shGsTinyDrawEnv;
typedef struct sh2gfw_Env_ctl;
typedef struct _anon10;
typedef struct _anon11;
typedef struct _anon12;
typedef struct shGsAllEnv;
typedef struct _anon13;
typedef struct _anon14;
typedef struct _anon15;
typedef struct _anon16;
typedef struct _anon17;
typedef struct _anon18;
typedef struct _anon19;


typedef Q_WORDDATA type_0[2];
typedef Q_WORDDATA type_1[2];
typedef Q_WORDDATA type_2[5];
typedef Q_WORDDATA type_3[2];
typedef Q_WORDDATA type_4[2];
typedef Q_WORDDATA type_5[2];
typedef Q_WORDDATA type_6[5];
typedef Q_WORDDATA type_7[2];
typedef Q_WORDDATA type_8[2];
typedef Q_WORDDATA type_9[2];
typedef Q_WORDDATA type_10[2];
typedef Q_WORDDATA type_11[2];
typedef Q_WORDDATA type_12[2];
typedef Q_WORDDATA type_13[2];
typedef unsigned int type_14[4];
typedef Q_WORDDATA type_15[2];
typedef unsigned short type_16[8];
typedef Q_WORDDATA type_17[6];
typedef Q_WORDDATA type_18[2];
typedef float type_19[4];
typedef unsigned char type_20[16];
typedef int type_21[4];
typedef Q_WORDDATA type_22[6];
typedef short type_23[8];
typedef char type_24[16];
typedef unsigned long type_25[2];
typedef unsigned int type_26[3];
typedef unsigned int type_27[3];
typedef unsigned int type_28[3];
typedef unsigned int type_29[24];
typedef unsigned int type_30[3];
typedef unsigned int type_31[3];
typedef unsigned short type_32[8];
typedef Q_WORDDATA type_33[256];
typedef _anon14 type_34[3];
typedef shGsDrawEnv type_35[3];
typedef shGsStencilDrawEnv type_36[3];
typedef shGsTinyDrawEnv type_37[6];
typedef Q_WORDDATA type_38[10];
typedef Q_WORDDATA type_39[10];
typedef Q_WORDDATA type_40[10];
typedef Q_WORDDATA type_41[10];
typedef Q_WORDDATA type_42[10];
typedef float type_43[4];
typedef Q_WORDDATA type_44[10];
typedef float type_45[4];
typedef Q_WORDDATA type_46[10];
typedef float type_47[4][4];
typedef Q_WORDDATA type_48[8];
typedef Q_WORDDATA type_49[2];
typedef Q_WORDDATA type_50[2];
typedef Q_WORDDATA type_51[2];
typedef unsigned short type_52[4];
typedef Q_WORDDATA type_53[2];
typedef Q_WORDDATA type_54[2];
typedef Q_WORDDATA type_55[2];
typedef Q_WORDDATA type_56[2];

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

struct _anon1
{
	struct
	{
		unsigned long CLAMP : 1;
		unsigned long pad01 : 63;
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

struct sh2gfw_SPOTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA dirvec;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
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

struct sh2gfw_POINTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
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

struct Shadow_Filter_Work
{
	short NightOrDay;
	short Test_Mode;
	short ShadowType;
	short JmsLight;
	short pads0;
	short pads1;
	float factor;
	Q_WORDDATA GsAlpha;
	Q_WORDDATA GsTest;
	Q_WORDDATA ShadowColor;
	Q_WORDDATA ShadowNowColor;
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
	float VertexAmbient[4];
	float BaseAmbient[4];
	float BaseVertexColor[4];
	float spot0_Wpos[4];
	float spot0_Wdir[4];
	sh2gfw_SPOTL_MATRIX SpotL0;
	float spot1_Wpos[4];
	float spot1_Wdir[4];
	sh2gfw_SPOTL_MATRIX SpotL1;
	float CharacterLightFactor[4];
	float CharacterLightFactor_Other[4];
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
	Q_WORDDATA MoveFogColor;
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

Shadow_Filter_Work ShadowFilterWork;
shGsAllEnv shGs_AllEnv;
Q_WORDDATA STENCIL_workpacket[256];
sh2gfw_Env_ctl Env_ctl;

void sh2gfw_Set_FilterData(int NoD, Q_WORDDATA* col);
void* Get_ShadowColor();
void sh2gfw_Set_ShadowColorScaleFactor(float fc);
Q_WORDDATA* shdw_Composite_Shadow(Q_WORDDATA* pbuf);
Q_WORDDATA* shdw_fill_Work(Q_WORDDATA* col, unsigned int prim, Q_WORDDATA* pbuf);
Q_WORDDATA* shdw_clear(Q_WORDDATA* pbuf);
Q_WORDDATA* shdw_StencilBuf2Work(unsigned int tbp, unsigned int prim, Q_WORDDATA* pbuf);
Q_WORDDATA* shdw_Work2Work(unsigned int tbp, Q_WORDDATA* pbuf);
void shdw_shadow_filter_main();

// 
// Start address: 0x175f90
void sh2gfw_Set_FilterData(int NoD, Q_WORDDATA* col)
{
	Q_WORDDATA* tstd;
	Q_WORDDATA* alpd;
	Q_WORDDATA* tst;
	Q_WORDDATA* alp;
	// Line 67, Address: 0x175f90, Func Offset: 0
	// Line 69, Address: 0x175f98, Func Offset: 0x8
	// Line 70, Address: 0x175fa0, Func Offset: 0x10
	// Line 71, Address: 0x175fa8, Func Offset: 0x18
	// Line 95, Address: 0x175fc0, Func Offset: 0x30
	// Line 99, Address: 0x175fd4, Func Offset: 0x44
	// Line 101, Address: 0x175fdc, Func Offset: 0x4c
	// Line 102, Address: 0x175fe4, Func Offset: 0x54
	// Line 103, Address: 0x175fec, Func Offset: 0x5c
	// Line 106, Address: 0x176004, Func Offset: 0x74
	// Line 109, Address: 0x176014, Func Offset: 0x84
	// Line 112, Address: 0x176024, Func Offset: 0x94
	// Line 113, Address: 0x176030, Func Offset: 0xa0
	// Func End, Address: 0x176038, Func Offset: 0xa8
}

// 
// Start address: 0x176040
void* Get_ShadowColor()
{
	// Line 124, Address: 0x176040, Func Offset: 0
	// Line 127, Address: 0x176048, Func Offset: 0x8
	// Line 133, Address: 0x1760b4, Func Offset: 0x74
	// Line 135, Address: 0x176110, Func Offset: 0xd0
	// Line 136, Address: 0x176118, Func Offset: 0xd8
	// Func End, Address: 0x176128, Func Offset: 0xe8
}

// 
// Start address: 0x176130
void sh2gfw_Set_ShadowColorScaleFactor(float fc)
{
	// Line 141, Address: 0x176130, Func Offset: 0
	// Line 142, Address: 0x176150, Func Offset: 0x20
	// Line 143, Address: 0x1761b0, Func Offset: 0x80
	// Line 146, Address: 0x1761c0, Func Offset: 0x90
	// Line 148, Address: 0x1761cc, Func Offset: 0x9c
	// Func End, Address: 0x1761d4, Func Offset: 0xa4
}

// 
// Start address: 0x1761e0
Q_WORDDATA* shdw_Composite_Shadow(Q_WORDDATA* pbuf)
{
	int tbp;
	int id;
	// Line 152, Address: 0x1761e0, Func Offset: 0
	// Line 156, Address: 0x1761f0, Func Offset: 0x10
	// Line 158, Address: 0x176208, Func Offset: 0x28
	// Line 159, Address: 0x17620c, Func Offset: 0x2c
	// Line 162, Address: 0x176218, Func Offset: 0x38
	// Line 163, Address: 0x176224, Func Offset: 0x44
	// Line 166, Address: 0x17622c, Func Offset: 0x4c
	// Line 167, Address: 0x176230, Func Offset: 0x50
	// Line 171, Address: 0x176238, Func Offset: 0x58
	// Line 173, Address: 0x176248, Func Offset: 0x68
	// Line 177, Address: 0x176258, Func Offset: 0x78
	// Line 181, Address: 0x176260, Func Offset: 0x80
	// Line 188, Address: 0x176274, Func Offset: 0x94
	// Line 189, Address: 0x17627c, Func Offset: 0x9c
	// Line 191, Address: 0x176284, Func Offset: 0xa4
	// Line 195, Address: 0x176298, Func Offset: 0xb8
	// Line 198, Address: 0x1762a4, Func Offset: 0xc4
	// Line 199, Address: 0x1762ac, Func Offset: 0xcc
	// Line 200, Address: 0x1762b0, Func Offset: 0xd0
	// Line 201, Address: 0x1762b4, Func Offset: 0xd4
	// Line 205, Address: 0x1762b8, Func Offset: 0xd8
	// Line 210, Address: 0x1762c8, Func Offset: 0xe8
	// Line 211, Address: 0x1762d0, Func Offset: 0xf0
	// Line 212, Address: 0x1762d4, Func Offset: 0xf4
	// Line 213, Address: 0x1762dc, Func Offset: 0xfc
	// Line 216, Address: 0x1762e0, Func Offset: 0x100
	// Line 217, Address: 0x1762e4, Func Offset: 0x104
	// Line 218, Address: 0x1762e8, Func Offset: 0x108
	// Line 219, Address: 0x1762f0, Func Offset: 0x110
	// Line 223, Address: 0x1762f4, Func Offset: 0x114
	// Line 225, Address: 0x176304, Func Offset: 0x124
	// Line 226, Address: 0x17630c, Func Offset: 0x12c
	// Line 227, Address: 0x176310, Func Offset: 0x130
	// Line 228, Address: 0x176318, Func Offset: 0x138
	// Line 231, Address: 0x17631c, Func Offset: 0x13c
	// Line 234, Address: 0x176328, Func Offset: 0x148
	// Line 236, Address: 0x17634c, Func Offset: 0x16c
	// Line 237, Address: 0x176350, Func Offset: 0x170
	// Line 239, Address: 0x176358, Func Offset: 0x178
	// Line 241, Address: 0x17635c, Func Offset: 0x17c
	// Func End, Address: 0x176370, Func Offset: 0x190
}

// 
// Start address: 0x176370
Q_WORDDATA* shdw_fill_Work(Q_WORDDATA* col, unsigned int prim, Q_WORDDATA* pbuf)
{
	int id;
	// Line 251, Address: 0x176370, Func Offset: 0
	// Line 252, Address: 0x176374, Func Offset: 0x4
	// Line 257, Address: 0x176380, Func Offset: 0x10
	// Line 258, Address: 0x1763a8, Func Offset: 0x38
	// Line 261, Address: 0x1763b4, Func Offset: 0x44
	// Line 263, Address: 0x1763c0, Func Offset: 0x50
	// Line 265, Address: 0x1763c8, Func Offset: 0x58
	// Line 266, Address: 0x1763d0, Func Offset: 0x60
	// Line 267, Address: 0x1763d4, Func Offset: 0x64
	// Line 268, Address: 0x1763dc, Func Offset: 0x6c
	// Line 272, Address: 0x1763e0, Func Offset: 0x70
	// Line 274, Address: 0x1763e8, Func Offset: 0x78
	// Line 275, Address: 0x1763f0, Func Offset: 0x80
	// Line 276, Address: 0x1763f4, Func Offset: 0x84
	// Line 277, Address: 0x1763f8, Func Offset: 0x88
	// Line 281, Address: 0x1763fc, Func Offset: 0x8c
	// Line 282, Address: 0x17641c, Func Offset: 0xac
	// Line 283, Address: 0x176420, Func Offset: 0xb0
	// Line 284, Address: 0x176428, Func Offset: 0xb8
	// Line 286, Address: 0x17642c, Func Offset: 0xbc
	// Func End, Address: 0x176434, Func Offset: 0xc4
}

// 
// Start address: 0x176440
Q_WORDDATA* shdw_clear(Q_WORDDATA* pbuf)
{
	int id;
	int j;
	// Line 305, Address: 0x176440, Func Offset: 0
	// Line 312, Address: 0x176464, Func Offset: 0x24
	// Line 313, Address: 0x176470, Func Offset: 0x30
	// Line 316, Address: 0x176478, Func Offset: 0x38
	// Line 319, Address: 0x176484, Func Offset: 0x44
	// Line 321, Address: 0x176498, Func Offset: 0x58
	// Line 324, Address: 0x1764a4, Func Offset: 0x64
	// Line 326, Address: 0x1764b8, Func Offset: 0x78
	// Line 331, Address: 0x1764c4, Func Offset: 0x84
	// Line 334, Address: 0x1764d8, Func Offset: 0x98
	// Line 335, Address: 0x1764e0, Func Offset: 0xa0
	// Line 336, Address: 0x1764e4, Func Offset: 0xa4
	// Line 337, Address: 0x1764ec, Func Offset: 0xac
	// Line 339, Address: 0x1764f0, Func Offset: 0xb0
	// Line 342, Address: 0x176500, Func Offset: 0xc0
	// Line 343, Address: 0x176508, Func Offset: 0xc8
	// Line 344, Address: 0x17650c, Func Offset: 0xcc
	// Line 345, Address: 0x176510, Func Offset: 0xd0
	// Line 368, Address: 0x176514, Func Offset: 0xd4
	// Line 370, Address: 0x17651c, Func Offset: 0xdc
	// Line 372, Address: 0x176534, Func Offset: 0xf4
	// Line 373, Address: 0x176538, Func Offset: 0xf8
	// Line 375, Address: 0x176540, Func Offset: 0x100
	// Line 377, Address: 0x176544, Func Offset: 0x104
	// Func End, Address: 0x17654c, Func Offset: 0x10c
}

// 
// Start address: 0x176550
Q_WORDDATA* shdw_StencilBuf2Work(unsigned int tbp, unsigned int prim, Q_WORDDATA* pbuf)
{
	int id;
	// Line 520, Address: 0x176550, Func Offset: 0
	// Line 521, Address: 0x176554, Func Offset: 0x4
	// Line 526, Address: 0x176560, Func Offset: 0x10
	// Line 527, Address: 0x17656c, Func Offset: 0x1c
	// Line 531, Address: 0x176574, Func Offset: 0x24
	// Line 532, Address: 0x176578, Func Offset: 0x28
	// Line 535, Address: 0x176580, Func Offset: 0x30
	// Line 538, Address: 0x176588, Func Offset: 0x38
	// Line 549, Address: 0x1765a4, Func Offset: 0x54
	// Line 551, Address: 0x1765ac, Func Offset: 0x5c
	// Line 557, Address: 0x1765b0, Func Offset: 0x60
	// Line 560, Address: 0x1765d8, Func Offset: 0x88
	// Line 565, Address: 0x1765e4, Func Offset: 0x94
	// Line 566, Address: 0x1765e8, Func Offset: 0x98
	// Line 567, Address: 0x1765ec, Func Offset: 0x9c
	// Line 568, Address: 0x1765f4, Func Offset: 0xa4
	// Line 570, Address: 0x1765f8, Func Offset: 0xa8
	// Line 571, Address: 0x17660c, Func Offset: 0xbc
	// Line 572, Address: 0x176614, Func Offset: 0xc4
	// Line 573, Address: 0x176618, Func Offset: 0xc8
	// Line 574, Address: 0x176620, Func Offset: 0xd0
	// Line 576, Address: 0x176624, Func Offset: 0xd4
	// Line 577, Address: 0x176628, Func Offset: 0xd8
	// Line 578, Address: 0x17662c, Func Offset: 0xdc
	// Line 579, Address: 0x176630, Func Offset: 0xe0
	// Line 581, Address: 0x176634, Func Offset: 0xe4
	// Line 582, Address: 0x176644, Func Offset: 0xf4
	// Line 583, Address: 0x17664c, Func Offset: 0xfc
	// Line 584, Address: 0x176650, Func Offset: 0x100
	// Line 585, Address: 0x176654, Func Offset: 0x104
	// Line 590, Address: 0x176658, Func Offset: 0x108
	// Line 591, Address: 0x17665c, Func Offset: 0x10c
	// Line 595, Address: 0x176660, Func Offset: 0x110
	// Line 597, Address: 0x176680, Func Offset: 0x130
	// Line 598, Address: 0x176684, Func Offset: 0x134
	// Line 600, Address: 0x17668c, Func Offset: 0x13c
	// Line 602, Address: 0x176690, Func Offset: 0x140
	// Func End, Address: 0x176698, Func Offset: 0x148
}

// 
// Start address: 0x1766a0
Q_WORDDATA* shdw_Work2Work(unsigned int tbp, Q_WORDDATA* pbuf)
{
	int id;
	// Line 617, Address: 0x1766a0, Func Offset: 0
	// Line 618, Address: 0x1766a4, Func Offset: 0x4
	// Line 623, Address: 0x1766b0, Func Offset: 0x10
	// Line 624, Address: 0x1766bc, Func Offset: 0x1c
	// Line 628, Address: 0x1766c4, Func Offset: 0x24
	// Line 629, Address: 0x1766c8, Func Offset: 0x28
	// Line 632, Address: 0x1766d0, Func Offset: 0x30
	// Line 633, Address: 0x1766d8, Func Offset: 0x38
	// Line 638, Address: 0x1766f4, Func Offset: 0x54
	// Line 639, Address: 0x1766fc, Func Offset: 0x5c
	// Line 642, Address: 0x176704, Func Offset: 0x64
	// Line 644, Address: 0x176718, Func Offset: 0x78
	// Line 655, Address: 0x176724, Func Offset: 0x84
	// Line 656, Address: 0x17672c, Func Offset: 0x8c
	// Line 657, Address: 0x176730, Func Offset: 0x90
	// Line 658, Address: 0x176734, Func Offset: 0x94
	// Line 662, Address: 0x176738, Func Offset: 0x98
	// Line 666, Address: 0x17674c, Func Offset: 0xac
	// Line 667, Address: 0x176754, Func Offset: 0xb4
	// Line 668, Address: 0x176758, Func Offset: 0xb8
	// Line 669, Address: 0x176760, Func Offset: 0xc0
	// Line 679, Address: 0x176764, Func Offset: 0xc4
	// Line 680, Address: 0x176768, Func Offset: 0xc8
	// Line 681, Address: 0x17676c, Func Offset: 0xcc
	// Line 682, Address: 0x176770, Func Offset: 0xd0
	// Line 686, Address: 0x176774, Func Offset: 0xd4
	// Line 688, Address: 0x176784, Func Offset: 0xe4
	// Line 689, Address: 0x17678c, Func Offset: 0xec
	// Line 690, Address: 0x176790, Func Offset: 0xf0
	// Line 691, Address: 0x176794, Func Offset: 0xf4
	// Line 694, Address: 0x176798, Func Offset: 0xf8
	// Line 695, Address: 0x17679c, Func Offset: 0xfc
	// Line 699, Address: 0x1767a0, Func Offset: 0x100
	// Line 701, Address: 0x1767c0, Func Offset: 0x120
	// Line 702, Address: 0x1767c4, Func Offset: 0x124
	// Line 704, Address: 0x1767cc, Func Offset: 0x12c
	// Line 706, Address: 0x1767d0, Func Offset: 0x130
	// Func End, Address: 0x1767d8, Func Offset: 0x138
}

// 
// Start address: 0x1767e0
void shdw_shadow_filter_main()
{
	Q_WORDDATA* kcs;
	Q_WORDDATA* w2w1;
	Q_WORDDATA* w2w0;
	Q_WORDDATA* sb2w;
	Q_WORDDATA* filw;
	Q_WORDDATA* sqt_clear;
	unsigned int id;
	// Line 718, Address: 0x1767e0, Func Offset: 0
	// Line 726, Address: 0x1767fc, Func Offset: 0x1c
	// Line 727, Address: 0x176814, Func Offset: 0x34
	// Line 730, Address: 0x17682c, Func Offset: 0x4c
	// Line 734, Address: 0x176840, Func Offset: 0x60
	// Line 736, Address: 0x176868, Func Offset: 0x88
	// Line 737, Address: 0x17687c, Func Offset: 0x9c
	// Line 753, Address: 0x176890, Func Offset: 0xb0
	// Line 761, Address: 0x1768ac, Func Offset: 0xcc
	// Line 765, Address: 0x1768b8, Func Offset: 0xd8
	// Line 769, Address: 0x1768c8, Func Offset: 0xe8
	// Line 775, Address: 0x1768d0, Func Offset: 0xf0
	// Line 777, Address: 0x1768e4, Func Offset: 0x104
	// Line 780, Address: 0x1768ec, Func Offset: 0x10c
	// Line 781, Address: 0x1768fc, Func Offset: 0x11c
	// Line 782, Address: 0x17690c, Func Offset: 0x12c
	// Line 785, Address: 0x17691c, Func Offset: 0x13c
	// Line 795, Address: 0x176928, Func Offset: 0x148
	// Line 799, Address: 0x176940, Func Offset: 0x160
	// Line 802, Address: 0x176950, Func Offset: 0x170
	// Line 805, Address: 0x17695c, Func Offset: 0x17c
	// Line 823, Address: 0x17696c, Func Offset: 0x18c
	// Line 825, Address: 0x176974, Func Offset: 0x194
	// Line 827, Address: 0x176988, Func Offset: 0x1a8
	// Line 833, Address: 0x176994, Func Offset: 0x1b4
	// Line 836, Address: 0x17699c, Func Offset: 0x1bc
	// Line 838, Address: 0x1769b0, Func Offset: 0x1d0
	// Line 844, Address: 0x1769bc, Func Offset: 0x1dc
	// Line 846, Address: 0x1769c4, Func Offset: 0x1e4
	// Line 848, Address: 0x1769d8, Func Offset: 0x1f8
	// Line 854, Address: 0x1769e4, Func Offset: 0x204
	// Line 855, Address: 0x1769ec, Func Offset: 0x20c
	// Line 858, Address: 0x1769fc, Func Offset: 0x21c
	// Line 860, Address: 0x176a0c, Func Offset: 0x22c
	// Line 862, Address: 0x176a1c, Func Offset: 0x23c
	// Line 864, Address: 0x176a24, Func Offset: 0x244
	// Line 872, Address: 0x176a58, Func Offset: 0x278
	// Line 876, Address: 0x176a64, Func Offset: 0x284
	// Line 879, Address: 0x176a6c, Func Offset: 0x28c
	// Line 885, Address: 0x176a7c, Func Offset: 0x29c
	// Line 888, Address: 0x176a90, Func Offset: 0x2b0
	// Func End, Address: 0x176ab4, Func Offset: 0x2d4
}

