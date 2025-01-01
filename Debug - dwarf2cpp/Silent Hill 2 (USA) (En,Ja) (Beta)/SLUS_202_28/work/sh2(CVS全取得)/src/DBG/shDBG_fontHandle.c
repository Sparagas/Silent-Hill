typedef struct _anon0;
typedef struct _anon1;
typedef struct sh2gfw_SPOTL_MATRIX;
typedef struct _anon2;
typedef struct sh2gfw_POINTL_MATRIX;
typedef struct _anon3;
typedef struct shGsLoopEnv;
typedef union Q_WORDDATA;
typedef struct _anon4;
typedef struct _anon5;
typedef struct shGsTinyDrawEnv;
typedef struct _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef struct _anon9;
typedef struct sh2gfw_Env_ctl;
typedef struct shGsAllEnv;
typedef struct _anon10;
typedef struct _anon11;
typedef struct _anon12;
typedef struct _anon13;
typedef struct shDBG_font_Packet;
typedef struct shGsDrawEnv;
typedef struct _anon14;
typedef struct _anon15;
typedef struct _anon16;
typedef struct _anon17;
typedef struct _anon18;
typedef struct _anon19;
typedef struct shGsStencilDrawEnv;


typedef Q_WORDDATA type_0[2];
typedef unsigned short type_1[8];
typedef Q_WORDDATA type_2[6];
typedef Q_WORDDATA type_3[2];
typedef float type_4[4];
typedef unsigned char type_5[16];
typedef int type_6[4];
typedef Q_WORDDATA type_7[6];
typedef short type_8[8];
typedef char type_9[16];
typedef unsigned long type_10[2];
typedef unsigned int type_11[3];
typedef unsigned int type_12[3];
typedef unsigned int type_13[3];
typedef unsigned int type_14[24];
typedef unsigned int type_15[3];
typedef unsigned int type_16[3];
typedef unsigned short type_17[8];
typedef _anon14 type_18[3];
typedef shGsDrawEnv type_19[3];
typedef shGsStencilDrawEnv type_20[3];
typedef shGsTinyDrawEnv type_21[6];
typedef Q_WORDDATA type_22[10];
typedef Q_WORDDATA type_23[10];
typedef Q_WORDDATA type_24[10];
typedef Q_WORDDATA type_25[10];
typedef Q_WORDDATA type_26[10];
typedef float type_27[4];
typedef Q_WORDDATA type_28[10];
typedef float type_29[4];
typedef Q_WORDDATA type_30[10];
typedef float type_31[4][4];
typedef Q_WORDDATA type_32[8];
typedef Q_WORDDATA type_33[2];
typedef Q_WORDDATA type_34[2];
typedef Q_WORDDATA type_35[2];
typedef unsigned short type_36[4];
typedef Q_WORDDATA type_37[2];
typedef Q_WORDDATA type_38[2];
typedef Q_WORDDATA type_39[2];
typedef Q_WORDDATA type_40[2];
typedef Q_WORDDATA type_41[2];
typedef Q_WORDDATA type_42[2];
typedef Q_WORDDATA type_43[5];
typedef Q_WORDDATA type_44[2];
typedef Q_WORDDATA type_45[2];
typedef Q_WORDDATA type_46[16];
typedef Q_WORDDATA type_47[2];
typedef Q_WORDDATA type_48[5];
typedef Q_WORDDATA type_49[4];
typedef Q_WORDDATA type_50[2];
typedef Q_WORDDATA type_51[16384];
typedef Q_WORDDATA type_52[2];
typedef Q_WORDDATA type_53[2];
typedef Q_WORDDATA type_54[2];
typedef Q_WORDDATA type_55[2];
typedef unsigned short type_56[4];
typedef unsigned short type_57[4][128];
typedef Q_WORDDATA type_58[2];
typedef Q_WORDDATA type_59[2];
typedef unsigned int type_60[4];

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

struct sh2gfw_SPOTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA dirvec;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
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

struct sh2gfw_POINTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
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

struct shDBG_font_Packet
{
	Q_WORDDATA* Qtail;
	Q_WORDDATA* QKick;
	Q_WORDDATA* QAddr;
	Q_WORDDATA* Q;
	Q_WORDDATA dbg_font_env[16];
	Q_WORDDATA ret_font_packet[4];
	Q_WORDDATA dbg_font_packet[16384];
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

shDBG_font_Packet sh_DBGFontPacket;
sh2gfw_Env_ctl Env_ctl;
shGsAllEnv shGs_AllEnv;
unsigned short dbg_font_uv[4][128];

void shDBG_font_init();
void shDBG_InitFontEnv();
void _shDBG_print_string(char* st, int ix, int iy);
void shDBG_print_string(char* st, int ix, int iy);

// 
// Start address: 0x209790
void shDBG_font_init()
{
	// Line 57, Address: 0x209790, Func Offset: 0
	// Line 61, Address: 0x2097a0, Func Offset: 0x10
	// Func End, Address: 0x2097a8, Func Offset: 0x18
}

// 
// Start address: 0x2097b0
void shDBG_InitFontEnv()
{
	int id;
	Q_WORDDATA* qwd;
	// Line 95, Address: 0x2097b0, Func Offset: 0
	// Line 96, Address: 0x2097b8, Func Offset: 0x8
	// Line 99, Address: 0x2097c4, Func Offset: 0x14
	// Line 101, Address: 0x2097f4, Func Offset: 0x44
	// Line 102, Address: 0x20981c, Func Offset: 0x6c
	// Line 112, Address: 0x209830, Func Offset: 0x80
	// Line 117, Address: 0x20984c, Func Offset: 0x9c
	// Line 125, Address: 0x209874, Func Offset: 0xc4
	// Line 129, Address: 0x2098a0, Func Offset: 0xf0
	// Line 133, Address: 0x2098b4, Func Offset: 0x104
	// Line 139, Address: 0x2098dc, Func Offset: 0x12c
	// Line 143, Address: 0x209900, Func Offset: 0x150
	// Line 145, Address: 0x20990c, Func Offset: 0x15c
	// Line 148, Address: 0x209920, Func Offset: 0x170
	// Line 160, Address: 0x20993c, Func Offset: 0x18c
	// Func End, Address: 0x20994c, Func Offset: 0x19c
}

// 
// Start address: 0x209950
void _shDBG_print_string(char* st, int ix, int iy)
{
	int num;
	int ix2;
	int code;
	Q_WORDDATA* qwd;
	// Line 244, Address: 0x209950, Func Offset: 0
	// Line 248, Address: 0x209958, Func Offset: 0x8
	// Line 250, Address: 0x20995c, Func Offset: 0xc
	// Line 252, Address: 0x209964, Func Offset: 0x14
	// Line 254, Address: 0x209968, Func Offset: 0x18
	// Line 257, Address: 0x20996c, Func Offset: 0x1c
	// Line 258, Address: 0x209970, Func Offset: 0x20
	// Line 259, Address: 0x209978, Func Offset: 0x28
	// Line 260, Address: 0x20997c, Func Offset: 0x2c
	// Line 262, Address: 0x209988, Func Offset: 0x38
	// Line 264, Address: 0x20999c, Func Offset: 0x4c
	// Line 266, Address: 0x2099a4, Func Offset: 0x54
	// Line 272, Address: 0x2099d8, Func Offset: 0x88
	// Line 274, Address: 0x209a08, Func Offset: 0xb8
	// Line 280, Address: 0x209a38, Func Offset: 0xe8
	// Line 282, Address: 0x209a64, Func Offset: 0x114
	// Line 283, Address: 0x209a68, Func Offset: 0x118
	// Line 284, Address: 0x209a6c, Func Offset: 0x11c
	// Line 286, Address: 0x209a7c, Func Offset: 0x12c
	// Line 287, Address: 0x209ac4, Func Offset: 0x174
	// Line 292, Address: 0x209acc, Func Offset: 0x17c
	// Line 294, Address: 0x209b24, Func Offset: 0x1d4
	// Func End, Address: 0x209b34, Func Offset: 0x1e4
}

// 
// Start address: 0x209b40
void shDBG_print_string(char* st, int ix, int iy)
{
	// Line 298, Address: 0x209b40, Func Offset: 0
	// Line 299, Address: 0x209b60, Func Offset: 0x20
	// Line 301, Address: 0x209b70, Func Offset: 0x30
	// Line 302, Address: 0x209b80, Func Offset: 0x40
	// Line 307, Address: 0x209b8c, Func Offset: 0x4c
	// Func End, Address: 0x209ba8, Func Offset: 0x68
}

