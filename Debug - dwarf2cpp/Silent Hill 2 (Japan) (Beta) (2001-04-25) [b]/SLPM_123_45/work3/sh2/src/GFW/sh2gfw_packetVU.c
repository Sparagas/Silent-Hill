typedef struct sh2gfw_SPOTL_MATRIX;
typedef struct _anon0;
typedef struct _anon1;
typedef struct shBattleFight;
typedef struct _anon2;
typedef struct _anon3;
typedef union Q_WORDDATA;
typedef struct sh2gfw_POINTL_MATRIX;
typedef struct shBattleShot;
typedef struct shGsDrawEnv;
typedef struct sh2gfw_VU_PARMS;
typedef struct _anon4;
typedef struct _anon5;
typedef struct sh2gfw_GIFTAG_HEAD;
typedef struct _anon6;
typedef struct sh2gfw_VU_HEAD;
typedef struct _anon7;
typedef struct _anon8;
typedef struct _anon9;
typedef struct _anon10;
typedef struct shGsStencilDrawEnv;
typedef struct shAttackInfo;
typedef struct sh2gfw_Env_ctl;
typedef struct MicroFrame_data;
typedef struct shGsLoopEnv;
typedef union _anon11;
typedef struct sh2gfw_VU1_AllMicroMAN;
typedef struct _anon12;
typedef struct _anon13;
typedef struct shGsTinyDrawEnv;
typedef struct _anon14;
typedef struct _anon15;
typedef struct _anon16;
typedef struct _anon17;
typedef struct shGsAllEnv;
typedef struct _anon18;
typedef struct _anon19;
typedef struct _anon20;
typedef struct _anon21;


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
typedef shAttackInfo type_17[46];
typedef Q_WORDDATA type_18[2];
typedef short type_19[8];
typedef Q_WORDDATA type_20[2];
typedef char type_21[16];
typedef Q_WORDDATA type_22[5];
typedef Q_WORDDATA type_23[2];
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
typedef unsigned short type_34[10];
typedef Q_WORDDATA type_35[2];
typedef Q_WORDDATA type_36[6];
typedef unsigned int type_37[3];
typedef unsigned int type_38[3];
typedef short type_39[16];
typedef short type_40[16][8];
typedef short type_41[16][8][2];
typedef unsigned int type_42[3];
typedef unsigned int type_43[24];
typedef unsigned int type_44[3];
typedef unsigned int type_45[3];
typedef unsigned short type_46[8];
typedef MicroFrame_data type_47[32];
typedef float type_48[4];
typedef float type_49[4];
typedef float type_50[4][4];
typedef float type_51[4][2];
typedef unsigned short type_52[4];
typedef _anon5 type_53[3];
typedef shGsDrawEnv type_54[3];
typedef shGsStencilDrawEnv type_55[3];
typedef shGsTinyDrawEnv type_56[6];
typedef Q_WORDDATA type_57[10];
typedef short type_58[2];
typedef Q_WORDDATA type_59[10];
typedef short type_60[2][32];
typedef Q_WORDDATA type_61[10];
typedef Q_WORDDATA type_62[10];
typedef Q_WORDDATA type_63[10];
typedef Q_WORDDATA type_64[10];
typedef Q_WORDDATA type_65[10];

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

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
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

struct sh2gfw_POINTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
};

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct shGsDrawEnv
{
	_anon0 giftag;
	_anon8 draw;
	Q_WORDDATA drawq2[5];
	_anon15 clear;
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

struct sh2gfw_VU_PARMS
{
	float world_screen[4][4];
	float world_clip[4][4];
	float clip_screen[4][4];
	Q_WORDDATA fog_d;
	Q_WORDDATA rgbamax;
	Q_WORDDATA phong_rgbamax;
	Q_WORDDATA rgbamin;
	float local_screen[4][4];
	float local_clip[4][4];
	float light_vector0[4][4];
	float light_color0[4][4];
	float ambient_col[4];
	Q_WORDDATA light_pam[2];
	float light_pos[4][4];
	Q_WORDDATA GifTag_mskRGB;
	Q_WORDDATA Frame_mskRGB;
	Q_WORDDATA GifTag_mskNORMAL;
	Q_WORDDATA Frame_mskNORMAL;
	Q_WORDDATA GifTag_mskALPHA;
	Q_WORDDATA Frame_mskALPHA;
	Q_WORDDATA GifTag_mskZ;
	Q_WORDDATA mskZ;
	Q_WORDDATA GifTag_unmskZ;
	Q_WORDDATA unmskZ;
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
	_anon19 pmode;
	_anon2 smode2;
	_anon20 dispfb;
	_anon6 display;
	_anon7 bgcolor;
};

struct sh2gfw_GIFTAG_HEAD
{
	unsigned short gsregs_amount;
	unsigned char trans_flg;
	unsigned char eop_flg;
	unsigned int toNextGIFHEAD;
	unsigned short id;
	unsigned char tcc;
	unsigned char tfx;
	unsigned char abe;
	unsigned char pad1;
	unsigned char pad2;
	unsigned char pad3;
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

struct sh2gfw_VU_HEAD
{
	unsigned short vuparm[10];
	unsigned char vukind;
	unsigned char vuamount;
	unsigned char eop_flg;
	unsigned char padc;
	unsigned int vupartsize;
	unsigned int toNextVUPART;
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
	_anon18 frame1;
	unsigned long frame1addr;
	_anon9 zbuf1;
	long zbuf1addr;
	_anon3 xyoffset1;
	long xyoffset1addr;
	_anon16 scissor1;
	long scissor1addr;
	_anon12 prmodecont;
	long prmodecontaddr;
	_anon1 colclamp;
	long colclampaddr;
	_anon13 dthe;
	long dtheaddr;
	_anon21 test1;
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
	_anon15 clear;
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

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon11 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
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

struct MicroFrame_data
{
	unsigned int mscaladdr;
	unsigned short tslengmax;
	unsigned short kickoffset;
	unsigned short kickoffset2;
	unsigned short base;
	unsigned short offset;
	unsigned char key;
	unsigned char key2;
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

union _anon11
{
	shBattleFight fight;
	shBattleShot shot;
};

struct sh2gfw_VU1_AllMicroMAN
{
	void* NowMicroCode;
	int BeforeVu;
	int NowMode;
	int NowVu;
	MicroFrame_data MF_data[32];
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
	_anon21 testa;
	long testaaddr;
	_anon10 prim;
	long primaddr;
	_anon14 rgbaq;
	long rgbaqaddr;
	_anon4 xyz2a;
	long xyz2aaddr;
	_anon4 xyz2b;
	long xyz2baddr;
	_anon21 testb;
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

struct _anon17
{
	float light_vect[4][4];
	float light_col[4][4];
	float light_amb[4];
	float light_pam[4][2];
	Q_WORDDATA LightPos1;
	Q_WORDDATA VertexAmbient;
	Q_WORDDATA BaseVertexColor;
	Q_WORDDATA GlobalAmbient;
	Q_WORDDATA ALPHA_clear;
	unsigned int light_type_buf;
	unsigned int light_type_now;
	unsigned int pad1;
	unsigned int pad2;
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

struct _anon19
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

struct _anon20
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

struct _anon21
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

shAttackInfo sh2_attack_list[46];
sh2gfw_VU1_AllMicroMAN AllMicro_Man;
short GifVu2MicExecAddr[16][8][2];
short Vuchange_LightTable[2][32];
shGsAllEnv shGs_AllEnv;
sh2gfw_Env_ctl Env_ctl;

int sh2gfw_get_VuBase(int id);
int sh2gfw_get_VuOffset(int id);
void sh2gfw_Init_VuCounter();
int sh2gfw_Check_VuCounter(int vc);
void sh2gfw_init_VU_PARAMS(sh2gfw_VU_PARMS* VU_PARMS);
void sh2gfw_setfog_VU1_PARAMS(sh2gfw_VU_PARMS* VU1PAM, float fogfar, float fognear, float fmax, float fmin);
void sh2gfw_allinit_lightenv(_anon17* slv);
void sh2gfw_set_GSREGS2Vu(sh2gfw_VU_PARMS* vupam);
int sh2gfw_set_VuSend(void* pT, sh2gfw_GIFTAG_HEAD* pGH, sh2gfw_VU_HEAD* vuh, int* exec, Q_WORDDATA** ppqwd);
int sh2gfw_get_VUmode(int light_mode, int tfx, sh2gfw_GIFTAG_HEAD* pGIF_H, sh2gfw_VU_HEAD* pVU_H, int* baseaddr, int* offsetaddr);
int sh2gfw_Change_VUmode(unsigned int light_mode, unsigned int vuid, unsigned int* baseaddr, unsigned int* offsetaddr);

// 
// Start address: 0x186130
int sh2gfw_get_VuBase(int id)
{
	// Line 51, Address: 0x186130, Func Offset: 0
	// Line 52, Address: 0x186138, Func Offset: 0x8
	// Line 53, Address: 0x186154, Func Offset: 0x24
	// Func End, Address: 0x186160, Func Offset: 0x30
}

// 
// Start address: 0x186160
int sh2gfw_get_VuOffset(int id)
{
	// Line 61, Address: 0x186160, Func Offset: 0
	// Line 62, Address: 0x186168, Func Offset: 0x8
	// Line 63, Address: 0x186184, Func Offset: 0x24
	// Func End, Address: 0x186190, Func Offset: 0x30
}

// 
// Start address: 0x186190
void sh2gfw_Init_VuCounter()
{
	// Line 70, Address: 0x186190, Func Offset: 0
	// Line 71, Address: 0x18619c, Func Offset: 0xc
	// Func End, Address: 0x1861a4, Func Offset: 0x14
}

// 
// Start address: 0x1861b0
int sh2gfw_Check_VuCounter(int vc)
{
	// Line 79, Address: 0x1861b0, Func Offset: 0
	// Line 81, Address: 0x1861b8, Func Offset: 0x8
	// Line 83, Address: 0x1861d8, Func Offset: 0x28
	// Line 84, Address: 0x1861e4, Func Offset: 0x34
	// Line 86, Address: 0x1861e8, Func Offset: 0x38
	// Func End, Address: 0x1861f4, Func Offset: 0x44
}

// 
// Start address: 0x186200
void sh2gfw_init_VU_PARAMS(sh2gfw_VU_PARMS* VU_PARMS)
{
	float zero[4][4];
	float unit[4][4];
	// Line 100, Address: 0x186200, Func Offset: 0
	// Line 104, Address: 0x18620c, Func Offset: 0xc
	// Line 105, Address: 0x186218, Func Offset: 0x18
	// Line 106, Address: 0x186230, Func Offset: 0x30
	// Line 107, Address: 0x186248, Func Offset: 0x48
	// Line 109, Address: 0x186254, Func Offset: 0x54
	// Line 110, Address: 0x186264, Func Offset: 0x64
	// Line 111, Address: 0x186278, Func Offset: 0x78
	// Line 112, Address: 0x18628c, Func Offset: 0x8c
	// Line 134, Address: 0x1862a0, Func Offset: 0xa0
	// Line 135, Address: 0x1862ac, Func Offset: 0xac
	// Line 136, Address: 0x1862b8, Func Offset: 0xb8
	// Line 142, Address: 0x1862c4, Func Offset: 0xc4
	// Line 143, Address: 0x1862f0, Func Offset: 0xf0
	// Line 144, Address: 0x18631c, Func Offset: 0x11c
	// Line 146, Address: 0x186348, Func Offset: 0x148
	// Line 147, Address: 0x186360, Func Offset: 0x160
	// Line 149, Address: 0x186378, Func Offset: 0x178
	// Func End, Address: 0x186388, Func Offset: 0x188
}

// 
// Start address: 0x186390
void sh2gfw_setfog_VU1_PARAMS(sh2gfw_VU_PARMS* VU1PAM, float fogfar, float fognear, float fmax, float fmin)
{
	// Line 195, Address: 0x186390, Func Offset: 0
	// Line 249, Address: 0x1863a8, Func Offset: 0x18
	// Line 251, Address: 0x1863dc, Func Offset: 0x4c
	// Line 254, Address: 0x186410, Func Offset: 0x80
	// Line 256, Address: 0x186434, Func Offset: 0xa4
	// Line 260, Address: 0x186454, Func Offset: 0xc4
	// Line 261, Address: 0x186464, Func Offset: 0xd4
	// Line 265, Address: 0x186478, Func Offset: 0xe8
	// Func End, Address: 0x186484, Func Offset: 0xf4
}

// 
// Start address: 0x186490
void sh2gfw_allinit_lightenv(_anon17* slv)
{
	unsigned int i;
	// Line 282, Address: 0x186490, Func Offset: 0
	// Line 285, Address: 0x18649c, Func Offset: 0xc
	// Line 286, Address: 0x1864a8, Func Offset: 0x18
	// Line 287, Address: 0x1864b0, Func Offset: 0x20
	// Line 289, Address: 0x1864c8, Func Offset: 0x38
	// Func End, Address: 0x1864d8, Func Offset: 0x48
}

// 
// Start address: 0x1864e0
void sh2gfw_set_GSREGS2Vu(sh2gfw_VU_PARMS* vupam)
{
	// Line 585, Address: 0x1864e0, Func Offset: 0
	// Line 588, Address: 0x1864e8, Func Offset: 0x8
	// Line 589, Address: 0x186500, Func Offset: 0x20
	// Line 590, Address: 0x186518, Func Offset: 0x38
	// Line 592, Address: 0x186530, Func Offset: 0x50
	// Line 593, Address: 0x186548, Func Offset: 0x68
	// Line 596, Address: 0x186560, Func Offset: 0x80
	// Func End, Address: 0x18656c, Func Offset: 0x8c
}

// 
// Start address: 0x186570
int sh2gfw_set_VuSend(void* pT, sh2gfw_GIFTAG_HEAD* pGH, sh2gfw_VU_HEAD* vuh, int* exec, Q_WORDDATA** ppqwd)
{
	unsigned int offstad;
	unsigned int basead;
	unsigned int bpack;
	unsigned int execaddr;
	int tfx;
	Q_WORDDATA* b_pack;
	// Line 625, Address: 0x186570, Func Offset: 0
	// Line 627, Address: 0x18659c, Func Offset: 0x2c
	// Line 629, Address: 0x1865a4, Func Offset: 0x34
	// Line 633, Address: 0x1865a8, Func Offset: 0x38
	// Line 637, Address: 0x1865c4, Func Offset: 0x54
	// Line 647, Address: 0x1865f0, Func Offset: 0x80
	// Line 649, Address: 0x186604, Func Offset: 0x94
	// Line 650, Address: 0x186630, Func Offset: 0xc0
	// Line 651, Address: 0x18665c, Func Offset: 0xec
	// Line 657, Address: 0x186664, Func Offset: 0xf4
	// Line 658, Address: 0x18668c, Func Offset: 0x11c
	// Line 660, Address: 0x1866b8, Func Offset: 0x148
	// Line 662, Address: 0x1866bc, Func Offset: 0x14c
	// Line 663, Address: 0x1866e4, Func Offset: 0x174
	// Line 664, Address: 0x1866e8, Func Offset: 0x178
	// Line 665, Address: 0x1866f0, Func Offset: 0x180
	// Line 670, Address: 0x1866f8, Func Offset: 0x188
	// Line 671, Address: 0x186714, Func Offset: 0x1a4
	// Func End, Address: 0x186734, Func Offset: 0x1c4
}

// 
// Start address: 0x186740
int sh2gfw_get_VUmode(int light_mode, int tfx, sh2gfw_GIFTAG_HEAD* pGIF_H, sh2gfw_VU_HEAD* pVU_H, int* baseaddr, int* offsetaddr)
{
	int id;
	int execaddr;
	// Line 698, Address: 0x186740, Func Offset: 0
	// Line 724, Address: 0x186768, Func Offset: 0x28
	// Line 725, Address: 0x186778, Func Offset: 0x38
	// Line 739, Address: 0x186784, Func Offset: 0x44
	// Line 740, Address: 0x1867b0, Func Offset: 0x70
	// Line 745, Address: 0x1867e8, Func Offset: 0xa8
	// Line 747, Address: 0x186808, Func Offset: 0xc8
	// Line 752, Address: 0x186840, Func Offset: 0x100
	// Line 754, Address: 0x186848, Func Offset: 0x108
	// Line 761, Address: 0x186880, Func Offset: 0x140
	// Line 762, Address: 0x186898, Func Offset: 0x158
	// Line 763, Address: 0x1868a8, Func Offset: 0x168
	// Line 764, Address: 0x1868c8, Func Offset: 0x188
	// Line 769, Address: 0x1868d8, Func Offset: 0x198
	// Line 774, Address: 0x1868dc, Func Offset: 0x19c
	// Line 775, Address: 0x1868f0, Func Offset: 0x1b0
	// Line 777, Address: 0x186904, Func Offset: 0x1c4
	// Line 780, Address: 0x186908, Func Offset: 0x1c8
	// Func End, Address: 0x186920, Func Offset: 0x1e0
}

// 
// Start address: 0x186920
int sh2gfw_Change_VUmode(unsigned int light_mode, unsigned int vuid, unsigned int* baseaddr, unsigned int* offsetaddr)
{
	int id;
	int execaddr;
	// Line 796, Address: 0x186920, Func Offset: 0
	// Line 800, Address: 0x186940, Func Offset: 0x20
	// Line 801, Address: 0x186948, Func Offset: 0x28
	// Line 802, Address: 0x186954, Func Offset: 0x34
	// Line 804, Address: 0x18697c, Func Offset: 0x5c
	// Line 805, Address: 0x186990, Func Offset: 0x70
	// Line 807, Address: 0x1869a4, Func Offset: 0x84
	// Line 809, Address: 0x1869a8, Func Offset: 0x88
	// Func End, Address: 0x1869c0, Func Offset: 0xa0
}

