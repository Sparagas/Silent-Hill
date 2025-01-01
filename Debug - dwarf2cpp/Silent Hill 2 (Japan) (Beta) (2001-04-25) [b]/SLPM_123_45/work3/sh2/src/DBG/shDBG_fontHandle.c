typedef struct _anon0;
typedef union Q_WORDDATA;
typedef struct sh2gfw_POINTL_MATRIX;
typedef struct _anon1;
typedef struct shGsDrawEnv;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef struct shGsStencilDrawEnv;
typedef struct _anon5;
typedef struct _anon6;
typedef struct _anon7;
typedef struct sh2gfw_Env_ctl;
typedef struct _anon8;
typedef struct _anon9;
typedef struct shGsLoopEnv;
typedef struct _anon10;
typedef struct _anon11;
typedef struct _anon12;
typedef struct _anon13;
typedef struct _anon14;
typedef struct shGsTinyDrawEnv;
typedef struct shGsAllEnv;
typedef struct _anon15;
typedef struct _anon16;
typedef struct _anon17;
typedef struct _anon18;
typedef struct shDBG_font_Packet;
typedef struct _anon19;
typedef struct sh2gfw_SPOTL_MATRIX;


typedef Q_WORDDATA type_0[2];
typedef Q_WORDDATA type_1[2];
typedef Q_WORDDATA type_2[2];
typedef unsigned short type_3[4];
typedef unsigned int type_4[4];
typedef unsigned short type_5[4][128];
typedef Q_WORDDATA type_6[2];
typedef unsigned short type_7[8];
typedef Q_WORDDATA type_8[2];
typedef float type_9[4];
typedef Q_WORDDATA type_10[2];
typedef unsigned char type_11[16];
typedef Q_WORDDATA type_12[5];
typedef int type_13[4];
typedef Q_WORDDATA type_14[2];
typedef short type_15[8];
typedef Q_WORDDATA type_16[2];
typedef char type_17[16];
typedef Q_WORDDATA type_18[2];
typedef Q_WORDDATA type_19[5];
typedef unsigned long type_20[2];
typedef Q_WORDDATA type_21[2];
typedef Q_WORDDATA type_22[2];
typedef Q_WORDDATA type_23[2];
typedef Q_WORDDATA type_24[2];
typedef Q_WORDDATA type_25[2];
typedef Q_WORDDATA type_26[2];
typedef Q_WORDDATA type_27[2];
typedef Q_WORDDATA type_28[2];
typedef Q_WORDDATA type_29[6];
typedef Q_WORDDATA type_30[2];
typedef Q_WORDDATA type_31[6];
typedef unsigned int type_32[3];
typedef unsigned int type_33[3];
typedef unsigned int type_34[3];
typedef unsigned int type_35[24];
typedef unsigned int type_36[3];
typedef unsigned int type_37[3];
typedef unsigned short type_38[8];
typedef float type_39[4];
typedef float type_40[4];
typedef float type_41[4][4];
typedef unsigned short type_42[4];
typedef _anon9 type_43[3];
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
typedef Q_WORDDATA type_54[8];
typedef Q_WORDDATA type_55[2];
typedef Q_WORDDATA type_56[16];
typedef Q_WORDDATA type_57[2];
typedef Q_WORDDATA type_58[4];
typedef Q_WORDDATA type_59[2];
typedef Q_WORDDATA type_60[12288];

struct _anon0
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

struct sh2gfw_POINTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
};

struct _anon1
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

struct shGsDrawEnv
{
	_anon4 giftag;
	_anon12 draw;
	Q_WORDDATA drawq2[5];
	_anon18 clear;
	_anon4 giftag_nc;
	_anon12 draw_nc;
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

struct _anon3
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

struct _anon4
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

struct shGsStencilDrawEnv
{
	_anon4 giftag;
	_anon12 draw;
	Q_WORDDATA alpha1;
	Q_WORDDATA drawq2[6];
	_anon18 clear;
	Q_WORDDATA frame;
	_anon4 giftag_nc;
	_anon12 draw_nc;
	Q_WORDDATA alpha1_nc;
	Q_WORDDATA drawq2_nc[6];
	Q_WORDDATA gifad_frame_normal;
	Q_WORDDATA frame_normal;
	Q_WORDDATA gifad_frame_mskalpha;
	Q_WORDDATA frame_mskalpha;
	Q_WORDDATA gifad_frame_mskDalpha;
	Q_WORDDATA frame_mskDalpha;
};

struct _anon5
{
	struct
	{
		unsigned long CLAMP : 1;
		unsigned long pad01 : 63;
	};
};

struct _anon6
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

struct _anon7
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

struct _anon8
{
	struct
	{
		unsigned long X : 16;
		unsigned long Y : 16;
		unsigned long Z : 32;
	};
};

struct _anon9
{
	_anon1 pmode;
	_anon6 smode2;
	_anon2 dispfb;
	_anon10 display;
	_anon11 bgcolor;
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

struct _anon12
{
	_anon0 frame1;
	unsigned long frame1addr;
	_anon13 zbuf1;
	long zbuf1addr;
	_anon7 xyoffset1;
	long xyoffset1addr;
	_anon19 scissor1;
	long scissor1addr;
	_anon15 prmodecont;
	long prmodecontaddr;
	_anon5 colclamp;
	long colclampaddr;
	_anon16 dthe;
	long dtheaddr;
	_anon3 test1;
	long test1addr;
};

struct _anon13
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

struct _anon14
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
	_anon9 DispEnv[3];
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

struct _anon15
{
	struct
	{
		unsigned long AC : 1;
		unsigned long pad01 : 63;
	};
};

struct _anon16
{
	struct
	{
		unsigned long DTHE : 1;
		unsigned long pad01 : 63;
	};
};

struct _anon17
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

struct _anon18
{
	_anon3 testa;
	long testaaddr;
	_anon14 prim;
	long primaddr;
	_anon17 rgbaq;
	long rgbaqaddr;
	_anon8 xyz2a;
	long xyz2aaddr;
	_anon8 xyz2b;
	long xyz2baddr;
	_anon3 testb;
	long testbaddr;
};

struct shDBG_font_Packet
{
	Q_WORDDATA* Qtail;
	Q_WORDDATA* QKick;
	Q_WORDDATA* QAddr;
	Q_WORDDATA* Q;
	Q_WORDDATA dbg_font_env[16];
	Q_WORDDATA ret_font_packet[4];
	Q_WORDDATA dbg_font_packet[12288];
};

struct _anon19
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

struct sh2gfw_SPOTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA spot_rot;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
};

shDBG_font_Packet sh_DBGFontPacket;
sh2gfw_Env_ctl Env_ctl;
shGsAllEnv shGs_AllEnv;
unsigned short dbg_font_uv[4][128];

void shDBG_font_init();
void shDBG_font_PrintDrawAll();
void shDBG_InitFontEnv();
void _shDBG_print_string(char* st, int ix, int iy);
void shDBG_print_string(char* st, int ix, int iy);

// 
// Start address: 0x209ce0
void shDBG_font_init()
{
	// Line 57, Address: 0x209ce0, Func Offset: 0
	// Line 61, Address: 0x209cf0, Func Offset: 0x10
	// Func End, Address: 0x209cf8, Func Offset: 0x18
}

// 
// Start address: 0x209d00
void shDBG_font_PrintDrawAll()
{
	// Line 65, Address: 0x209d00, Func Offset: 0
	// Line 67, Address: 0x209d08, Func Offset: 0x8
	// Line 76, Address: 0x209d20, Func Offset: 0x20
	// Line 80, Address: 0x209d50, Func Offset: 0x50
	// Line 83, Address: 0x209d60, Func Offset: 0x60
	// Func End, Address: 0x209d70, Func Offset: 0x70
}

// 
// Start address: 0x209d70
void shDBG_InitFontEnv()
{
	int id;
	Q_WORDDATA* qwd;
	// Line 95, Address: 0x209d70, Func Offset: 0
	// Line 96, Address: 0x209d7c, Func Offset: 0xc
	// Line 97, Address: 0x209d88, Func Offset: 0x18
	// Line 99, Address: 0x209d8c, Func Offset: 0x1c
	// Line 101, Address: 0x209de0, Func Offset: 0x70
	// Line 102, Address: 0x209e30, Func Offset: 0xc0
	// Line 112, Address: 0x209e58, Func Offset: 0xe8
	// Line 117, Address: 0x209e88, Func Offset: 0x118
	// Line 125, Address: 0x209ec4, Func Offset: 0x154
	// Line 129, Address: 0x209f04, Func Offset: 0x194
	// Line 133, Address: 0x209f2c, Func Offset: 0x1bc
	// Line 139, Address: 0x209f68, Func Offset: 0x1f8
	// Line 143, Address: 0x209fa8, Func Offset: 0x238
	// Line 145, Address: 0x209fb4, Func Offset: 0x244
	// Line 148, Address: 0x209fc8, Func Offset: 0x258
	// Line 160, Address: 0x209fe4, Func Offset: 0x274
	// Func End, Address: 0x209ff8, Func Offset: 0x288
}

// 
// Start address: 0x20a000
void _shDBG_print_string(char* st, int ix, int iy)
{
	int num;
	int ix2;
	int code;
	Q_WORDDATA* qwd;
	// Line 244, Address: 0x20a000, Func Offset: 0
	// Line 248, Address: 0x20a024, Func Offset: 0x24
	// Line 250, Address: 0x20a028, Func Offset: 0x28
	// Line 252, Address: 0x20a030, Func Offset: 0x30
	// Line 253, Address: 0x20a03c, Func Offset: 0x3c
	// Line 254, Address: 0x20a048, Func Offset: 0x48
	// Line 257, Address: 0x20a050, Func Offset: 0x50
	// Line 258, Address: 0x20a054, Func Offset: 0x54
	// Line 259, Address: 0x20a05c, Func Offset: 0x5c
	// Line 260, Address: 0x20a060, Func Offset: 0x60
	// Line 262, Address: 0x20a07c, Func Offset: 0x7c
	// Line 264, Address: 0x20a090, Func Offset: 0x90
	// Line 266, Address: 0x20a09c, Func Offset: 0x9c
	// Line 272, Address: 0x20a0e0, Func Offset: 0xe0
	// Line 274, Address: 0x20a118, Func Offset: 0x118
	// Line 280, Address: 0x20a15c, Func Offset: 0x15c
	// Line 282, Address: 0x20a190, Func Offset: 0x190
	// Line 283, Address: 0x20a194, Func Offset: 0x194
	// Line 284, Address: 0x20a198, Func Offset: 0x198
	// Line 286, Address: 0x20a1b0, Func Offset: 0x1b0
	// Line 287, Address: 0x20a200, Func Offset: 0x200
	// Line 292, Address: 0x20a208, Func Offset: 0x208
	// Line 294, Address: 0x20a264, Func Offset: 0x264
	// Func End, Address: 0x20a284, Func Offset: 0x284
}

// 
// Start address: 0x20a290
void shDBG_print_string(char* st, int ix, int iy)
{
	// Line 298, Address: 0x20a290, Func Offset: 0
	// Line 299, Address: 0x20a2a4, Func Offset: 0x14
	// Line 301, Address: 0x20a2b4, Func Offset: 0x24
	// Line 302, Address: 0x20a2c4, Func Offset: 0x34
	// Line 307, Address: 0x20a2d0, Func Offset: 0x40
	// Func End, Address: 0x20a2e0, Func Offset: 0x50
}

