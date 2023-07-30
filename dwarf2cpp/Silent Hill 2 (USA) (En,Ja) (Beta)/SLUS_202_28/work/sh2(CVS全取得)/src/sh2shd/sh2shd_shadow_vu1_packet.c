typedef struct _anon0;
typedef union Q_WORDDATA;
typedef struct DROP_SHADOW_MICRO_FRAME;
typedef struct SHADOW_PACKET_BUF;
typedef struct _anon1;
typedef struct _anon2;
typedef struct shBattleFight;
typedef struct _anon3;
typedef struct _anon4;
typedef struct shGsDrawEnv;
typedef struct shBattleShot;
typedef struct _anon5;
typedef struct _anon6;
typedef struct sh2gfw_Env_ctl;
typedef struct _anon7;
typedef struct _anon8;
typedef struct shGsStencilDrawEnv;
typedef struct _anon9;
typedef struct _anon10;
typedef struct _anon11;
typedef struct _anon12;
typedef struct shAttackInfo;
typedef struct shGsLoopEnv;
typedef struct _anon13;
typedef struct _anon14;
typedef struct SHADOW_MICRO_FRAME;
typedef union _anon15;
typedef struct DROP_SHADOW_ENV;
typedef struct sh2gfw_SPOTL_MATRIX;
typedef struct sh2gfw_POINTL_MATRIX;
typedef struct _anon16;
typedef struct _anon17;
typedef struct shGsTinyDrawEnv;
typedef struct _anon18;
typedef struct shGsAllEnv;
typedef struct _anon19;
typedef struct _anon20;
typedef struct _anon21;


typedef Q_WORDDATA type_0[10];
typedef Q_WORDDATA type_1[10];
typedef Q_WORDDATA type_2[10];
typedef Q_WORDDATA type_3[10];
typedef Q_WORDDATA type_4[8];
typedef Q_WORDDATA type_5[2];
typedef Q_WORDDATA type_6[2];
typedef Q_WORDDATA type_7[2];
typedef Q_WORDDATA type_8[2];
typedef Q_WORDDATA type_9[2];
typedef Q_WORDDATA type_10[2];
typedef Q_WORDDATA type_11[2];
typedef Q_WORDDATA type_12[5];
typedef Q_WORDDATA type_13[2];
typedef Q_WORDDATA type_14[2];
typedef Q_WORDDATA type_15[2];
typedef Q_WORDDATA type_16[5];
typedef Q_WORDDATA type_17[2];
typedef Q_WORDDATA type_18[2];
typedef Q_WORDDATA type_19[2];
typedef unsigned int type_20[4];
typedef unsigned short type_21[8];
typedef Q_WORDDATA type_22[2];
typedef float type_23[4];
typedef Q_WORDDATA type_24[2];
typedef unsigned char type_25[16];
typedef Q_WORDDATA type_26[2];
typedef int type_27[4];
typedef Q_WORDDATA type_28[2];
typedef short type_29[8];
typedef Q_WORDDATA type_30[2];
typedef char type_31[16];
typedef Q_WORDDATA type_32[2];
typedef unsigned long type_33[2];
typedef Q_WORDDATA type_34[2];
typedef Q_WORDDATA type_35[6];
typedef Q_WORDDATA type_36[2];
typedef Q_WORDDATA type_37[6];
typedef unsigned int type_38[3];
typedef unsigned int type_39[3];
typedef unsigned int type_40[3];
typedef unsigned int type_41[24];
typedef unsigned int type_42[3];
typedef unsigned int type_43[3];
typedef unsigned short type_44[8];
typedef unsigned short type_45[4];
typedef float type_46[4];
typedef shAttackInfo type_47[66];
typedef float type_48[4][3];
typedef float type_49[4];
typedef float type_50[4][4];
typedef _anon1 type_51[3];
typedef shGsDrawEnv type_52[3];
typedef shGsStencilDrawEnv type_53[3];
typedef shGsTinyDrawEnv type_54[6];
typedef Q_WORDDATA type_55[10];
typedef Q_WORDDATA type_56[10];
typedef Q_WORDDATA type_57[10];

struct _anon0
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

struct DROP_SHADOW_MICRO_FRAME
{
	float drop_shadow[4][4];
	float world_clip[4][4];
	float clip_screen[4][4];
	Q_WORDDATA color;
	Q_WORDDATA giftag_color;
	Q_WORDDATA giftag_dummy;
	Q_WORDDATA giftag_default;
	Q_WORDDATA fog_param;
	Q_WORDDATA alpha0;
	Q_WORDDATA alpha_range;
	Q_WORDDATA alpha_switch;
	unsigned int* pKickAddr;
	unsigned int* pRawData;
};

struct SHADOW_PACKET_BUF
{
	Q_WORDDATA* head;
	Q_WORDDATA* curr;
};

struct _anon1
{
	_anon21 pmode;
	_anon6 smode2;
	_anon2 dispfb;
	_anon8 display;
	_anon10 bgcolor;
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

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct _anon3
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

struct _anon4
{
	_anon5 frame1;
	unsigned long frame1addr;
	_anon17 zbuf1;
	long zbuf1addr;
	_anon12 xyoffset1;
	long xyoffset1addr;
	_anon3 scissor1;
	long scissor1addr;
	_anon19 prmodecont;
	long prmodecontaddr;
	_anon9 colclamp;
	long colclampaddr;
	_anon20 dthe;
	long dtheaddr;
	_anon7 test1;
	long test1addr;
};

struct shGsDrawEnv
{
	_anon11 giftag;
	_anon4 draw;
	Q_WORDDATA drawq2[5];
	_anon13 clear;
	_anon11 giftag_nc;
	_anon4 draw_nc;
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

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct _anon5
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

struct _anon7
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

struct _anon8
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

struct shGsStencilDrawEnv
{
	_anon11 giftag;
	_anon4 draw;
	Q_WORDDATA alpha1;
	Q_WORDDATA drawq2[6];
	_anon13 clear;
	Q_WORDDATA frame;
	_anon11 giftag_nc;
	_anon4 draw_nc;
	Q_WORDDATA alpha1_nc;
	Q_WORDDATA drawq2_nc[6];
	Q_WORDDATA gifad_frame_normal;
	Q_WORDDATA frame_normal;
	Q_WORDDATA gifad_frame_mskalpha;
	Q_WORDDATA frame_mskalpha;
	Q_WORDDATA gifad_frame_mskDalpha;
	Q_WORDDATA frame_mskDalpha;
};

struct _anon9
{
	struct
	{
		unsigned long CLAMP : 1;
		unsigned long pad01 : 63;
	};
};

struct _anon10
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

struct _anon11
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

struct _anon12
{
	struct
	{
		unsigned long OFX : 16;
		unsigned long pad16 : 16;
		unsigned long OFY : 16;
		unsigned long pad48 : 16;
	};
};

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon15 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
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
	_anon7 testa;
	long testaaddr;
	_anon18 prim;
	long primaddr;
	_anon0 rgbaq;
	long rgbaqaddr;
	_anon14 xyz2a;
	long xyz2aaddr;
	_anon14 xyz2b;
	long xyz2baddr;
	_anon7 testb;
	long testbaddr;
};

struct _anon14
{
	struct
	{
		unsigned long X : 16;
		unsigned long Y : 16;
		unsigned long Z : 32;
	};
};

struct SHADOW_MICRO_FRAME
{
	float drop_shadow[4][4];
	float world_clip[4][4];
	float clip_screen[4][4];
	Q_WORDDATA color;
	Q_WORDDATA giftag_color;
	Q_WORDDATA giftag_dummy;
	Q_WORDDATA giftag_default;
	Q_WORDDATA giftag_3;
	Q_WORDDATA giftag_4;
	Q_WORDDATA giftag_5;
	Q_WORDDATA giftag_6;
	Q_WORDDATA giftag_7;
	Q_WORDDATA giftag_8;
	Q_WORDDATA giftag_9;
	Q_WORDDATA giftag_10;
	Q_WORDDATA alpha0;
	Q_WORDDATA alpha1;
	Q_WORDDATA flags;
	float y_unit[4];
	float dummy[4][3];
	float cam_pos[4];
	float spot_cam_dir[4];
	unsigned int* pKickAddr;
	unsigned int* pRawData;
};

union _anon15
{
	shBattleFight fight;
	shBattleShot shot;
};

struct DROP_SHADOW_ENV
{
	short block;
	float alpha_min;
	float alpha_max;
	float height_revision;
	unsigned int color;
};

struct sh2gfw_SPOTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA dirvec;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
};

struct sh2gfw_POINTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
};

struct _anon16
{
	float pos[4];
	float zdir[4];
	float ydir[4];
	float rot[4];
	float clip_volume[4];
	float world_view[4][4];
	float view_screen[4][4];
	float view_clip[4][4];
	float world_screen[4][4];
	float world_clip[4][4];
	float clip_screen[4][4];
	float camera_pam[4];
	float screen_pam1[4];
	float screen_pam2[4];
	float rot_zdir[4];
	float rot_ydir[4];
};

struct _anon17
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

struct _anon18
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

struct shGsAllEnv
{
	unsigned long loop_counter;
	unsigned int loop;
	unsigned int loop3;
	shGsLoopEnv LoopEnv;
	_anon1 DispEnv[3];
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

struct _anon19
{
	struct
	{
		unsigned long AC : 1;
		unsigned long pad01 : 63;
	};
};

struct _anon20
{
	struct
	{
		unsigned long DTHE : 1;
		unsigned long pad01 : 63;
	};
};

struct _anon21
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

shAttackInfo sh2_attack_list[66];
sh2gfw_Env_ctl Env_ctl;

void shadow_micro_init(SHADOW_MICRO_FRAME* mic, shGsAllEnv* env);
void shadow_set_micro_params(SHADOW_MICRO_FRAME* mic, _anon16* cam, float drop_shadow[4], int spot_cam_flag);
void shadow_add_micro2kick_packet(SHADOW_MICRO_FRAME* mic, SHADOW_PACKET_BUF* packbuf, unsigned int* rawdata);
void drop_shadow_micro_init(DROP_SHADOW_MICRO_FRAME* mic, shGsAllEnv* env, DROP_SHADOW_ENV* ds_env);
void drop_shadow_set_micro_params(DROP_SHADOW_MICRO_FRAME* mic, _anon16* cam);
void drop_shadow_add_micro2kick_packet(DROP_SHADOW_MICRO_FRAME* mic, SHADOW_PACKET_BUF* packbuf, unsigned int* rawdata);

// 
// Start address: 0x1a5fc0
void shadow_micro_init(SHADOW_MICRO_FRAME* mic, shGsAllEnv* env)
{
	// Line 25, Address: 0x1a5fc0, Func Offset: 0
	// Line 26, Address: 0x1a5fc8, Func Offset: 0x8
	// Line 27, Address: 0x1a5fcc, Func Offset: 0xc
	// Line 28, Address: 0x1a5fd0, Func Offset: 0x10
	// Line 36, Address: 0x1a5fd8, Func Offset: 0x18
	// Line 37, Address: 0x1a5fe8, Func Offset: 0x28
	// Line 39, Address: 0x1a5ff0, Func Offset: 0x30
	// Line 40, Address: 0x1a5ff8, Func Offset: 0x38
	// Line 42, Address: 0x1a5ffc, Func Offset: 0x3c
	// Line 43, Address: 0x1a6010, Func Offset: 0x50
	// Line 47, Address: 0x1a601c, Func Offset: 0x5c
	// Line 48, Address: 0x1a6030, Func Offset: 0x70
	// Line 50, Address: 0x1a6038, Func Offset: 0x78
	// Line 51, Address: 0x1a604c, Func Offset: 0x8c
	// Line 53, Address: 0x1a6058, Func Offset: 0x98
	// Line 54, Address: 0x1a606c, Func Offset: 0xac
	// Line 56, Address: 0x1a6078, Func Offset: 0xb8
	// Line 57, Address: 0x1a608c, Func Offset: 0xcc
	// Line 59, Address: 0x1a6098, Func Offset: 0xd8
	// Line 60, Address: 0x1a60ac, Func Offset: 0xec
	// Line 62, Address: 0x1a60c4, Func Offset: 0x104
	// Line 63, Address: 0x1a60d8, Func Offset: 0x118
	// Line 65, Address: 0x1a60f0, Func Offset: 0x130
	// Line 66, Address: 0x1a6104, Func Offset: 0x144
	// Line 68, Address: 0x1a611c, Func Offset: 0x15c
	// Line 69, Address: 0x1a6130, Func Offset: 0x170
	// Line 73, Address: 0x1a6148, Func Offset: 0x188
	// Line 75, Address: 0x1a6150, Func Offset: 0x190
	// Line 77, Address: 0x1a6158, Func Offset: 0x198
	// Line 78, Address: 0x1a615c, Func Offset: 0x19c
	// Line 79, Address: 0x1a6160, Func Offset: 0x1a0
	// Line 80, Address: 0x1a6164, Func Offset: 0x1a4
	// Line 82, Address: 0x1a6168, Func Offset: 0x1a8
	// Line 84, Address: 0x1a617c, Func Offset: 0x1bc
	// Line 85, Address: 0x1a6180, Func Offset: 0x1c0
	// Line 86, Address: 0x1a6184, Func Offset: 0x1c4
	// Func End, Address: 0x1a618c, Func Offset: 0x1cc
}

// 
// Start address: 0x1a6190
void shadow_set_micro_params(SHADOW_MICRO_FRAME* mic, _anon16* cam, float drop_shadow[4], int spot_cam_flag)
{
	// Line 92, Address: 0x1a6190, Func Offset: 0
	// Line 97, Address: 0x1a61a8, Func Offset: 0x18
	// Line 98, Address: 0x1a61c8, Func Offset: 0x38
	// Line 99, Address: 0x1a61e8, Func Offset: 0x58
	// Line 110, Address: 0x1a6208, Func Offset: 0x78
	// Line 121, Address: 0x1a6214, Func Offset: 0x84
	// Line 122, Address: 0x1a6218, Func Offset: 0x88
	// Func End, Address: 0x1a6230, Func Offset: 0xa0
}

// 
// Start address: 0x1a6230
void shadow_add_micro2kick_packet(SHADOW_MICRO_FRAME* mic, SHADOW_PACKET_BUF* packbuf, unsigned int* rawdata)
{
	Q_WORDDATA* curr;
	// Line 131, Address: 0x1a6230, Func Offset: 0
	// Line 132, Address: 0x1a6238, Func Offset: 0x8
	// Line 133, Address: 0x1a623c, Func Offset: 0xc
	// Line 134, Address: 0x1a6240, Func Offset: 0x10
	// Line 137, Address: 0x1a6244, Func Offset: 0x14
	// Line 142, Address: 0x1a625c, Func Offset: 0x2c
	// Line 146, Address: 0x1a628c, Func Offset: 0x5c
	// Line 152, Address: 0x1a62b0, Func Offset: 0x80
	// Line 155, Address: 0x1a62c0, Func Offset: 0x90
	// Line 157, Address: 0x1a62c8, Func Offset: 0x98
	// Line 158, Address: 0x1a631c, Func Offset: 0xec
	// Func End, Address: 0x1a632c, Func Offset: 0xfc
}

// 
// Start address: 0x1a6330
void drop_shadow_micro_init(DROP_SHADOW_MICRO_FRAME* mic, shGsAllEnv* env, DROP_SHADOW_ENV* ds_env)
{
	float unit[4][4];
	// Line 451, Address: 0x1a6330, Func Offset: 0
	// Line 458, Address: 0x1a6338, Func Offset: 0x8
	// Line 460, Address: 0x1a6360, Func Offset: 0x30
	// Line 461, Address: 0x1a6380, Func Offset: 0x50
	// Line 479, Address: 0x1a63a0, Func Offset: 0x70
	// Line 480, Address: 0x1a63a8, Func Offset: 0x78
	// Line 481, Address: 0x1a63b0, Func Offset: 0x80
	// Line 482, Address: 0x1a63b8, Func Offset: 0x88
	// Line 485, Address: 0x1a63c0, Func Offset: 0x90
	// Line 486, Address: 0x1a63d0, Func Offset: 0xa0
	// Line 489, Address: 0x1a63d8, Func Offset: 0xa8
	// Line 490, Address: 0x1a63e0, Func Offset: 0xb0
	// Line 493, Address: 0x1a63e4, Func Offset: 0xb4
	// Line 494, Address: 0x1a63f8, Func Offset: 0xc8
	// Line 506, Address: 0x1a6400, Func Offset: 0xd0
	// Line 507, Address: 0x1a6434, Func Offset: 0x104
	// Line 510, Address: 0x1a646c, Func Offset: 0x13c
	// Line 539, Address: 0x1a6474, Func Offset: 0x144
	// Line 540, Address: 0x1a647c, Func Offset: 0x14c
	// Line 541, Address: 0x1a6484, Func Offset: 0x154
	// Line 542, Address: 0x1a6488, Func Offset: 0x158
	// Line 545, Address: 0x1a648c, Func Offset: 0x15c
	// Line 547, Address: 0x1a6490, Func Offset: 0x160
	// Line 548, Address: 0x1a6494, Func Offset: 0x164
	// Line 549, Address: 0x1a6498, Func Offset: 0x168
	// Func End, Address: 0x1a64a4, Func Offset: 0x174
}

// 
// Start address: 0x1a64b0
void drop_shadow_set_micro_params(DROP_SHADOW_MICRO_FRAME* mic, _anon16* cam)
{
	// Line 556, Address: 0x1a64b0, Func Offset: 0
	// Line 557, Address: 0x1a64d0, Func Offset: 0x20
	// Line 558, Address: 0x1a64f0, Func Offset: 0x40
	// Func End, Address: 0x1a64f8, Func Offset: 0x48
}

// 
// Start address: 0x1a6500
void drop_shadow_add_micro2kick_packet(DROP_SHADOW_MICRO_FRAME* mic, SHADOW_PACKET_BUF* packbuf, unsigned int* rawdata)
{
	Q_WORDDATA* curr;
	// Line 568, Address: 0x1a6500, Func Offset: 0
	// Line 569, Address: 0x1a6508, Func Offset: 0x8
	// Line 570, Address: 0x1a650c, Func Offset: 0xc
	// Line 571, Address: 0x1a6510, Func Offset: 0x10
	// Line 575, Address: 0x1a6514, Func Offset: 0x14
	// Line 579, Address: 0x1a652c, Func Offset: 0x2c
	// Line 583, Address: 0x1a6560, Func Offset: 0x60
	// Line 589, Address: 0x1a6584, Func Offset: 0x84
	// Line 591, Address: 0x1a6594, Func Offset: 0x94
	// Line 593, Address: 0x1a659c, Func Offset: 0x9c
	// Line 594, Address: 0x1a65ec, Func Offset: 0xec
	// Func End, Address: 0x1a65fc, Func Offset: 0xfc
}

