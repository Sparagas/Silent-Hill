typedef struct _anon0;
typedef struct _anon1;
typedef struct MicroFrame_data;
typedef struct sh2gfw_GIFTAG_HEAD;
typedef struct _anon2;
typedef struct sh2gfw_VU_HEAD;
typedef struct shAttackInfo;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct sh2gfw_VU1_AllMicroMAN;
typedef struct _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef struct _anon9;
typedef struct _anon10;
typedef struct shGsDrawEnv;
typedef struct _anon11;
typedef union Q_WORDDATA;
typedef struct shGsStencilDrawEnv;
typedef struct sh2gfw_SPOTL_MATRIX;
typedef struct sh2gfw_VU_PARMS;
typedef struct _anon12;
typedef struct _anon13;
typedef struct sh2gfw_POINTL_MATRIX;
typedef struct shGsLoopEnv;
typedef struct _anon14;
typedef struct _anon15;
typedef struct shBattleFight;
typedef struct shGsTinyDrawEnv;
typedef struct _anon16;
typedef struct _anon17;
typedef struct shBattleShot;
typedef struct sh2gfw_Env_ctl;
typedef struct _anon18;
typedef struct _anon19;
typedef struct shGsAllEnv;
typedef struct _anon20;
typedef struct _anon21;


typedef shGsDrawEnv type_0[3];
typedef shGsStencilDrawEnv type_1[3];
typedef shGsTinyDrawEnv type_2[6];
typedef Q_WORDDATA type_3[10];
typedef Q_WORDDATA type_4[10];
typedef Q_WORDDATA type_5[10];
typedef Q_WORDDATA type_6[10];
typedef Q_WORDDATA type_7[10];
typedef float type_8[4];
typedef Q_WORDDATA type_9[10];
typedef Q_WORDDATA type_10[10];
typedef float type_11[4];
typedef float type_12[4][4];
typedef Q_WORDDATA type_13[8];
typedef Q_WORDDATA type_14[2];
typedef Q_WORDDATA type_15[2];
typedef Q_WORDDATA type_16[2];
typedef unsigned short type_17[4];
typedef Q_WORDDATA type_18[2];
typedef Q_WORDDATA type_19[2];
typedef Q_WORDDATA type_20[2];
typedef MicroFrame_data type_21[32];
typedef Q_WORDDATA type_22[2];
typedef float type_23[4][2];
typedef Q_WORDDATA type_24[2];
typedef Q_WORDDATA type_25[2];
typedef Q_WORDDATA type_26[5];
typedef Q_WORDDATA type_27[2];
typedef Q_WORDDATA type_28[2];
typedef Q_WORDDATA type_29[2];
typedef Q_WORDDATA type_30[5];
typedef shAttackInfo type_31[66];
typedef Q_WORDDATA type_32[2];
typedef Q_WORDDATA type_33[2];
typedef Q_WORDDATA type_34[2];
typedef Q_WORDDATA type_35[2];
typedef Q_WORDDATA type_36[2];
typedef Q_WORDDATA type_37[2];
typedef Q_WORDDATA type_38[2];
typedef unsigned int type_39[4];
typedef short type_40[16];
typedef short type_41[16][8];
typedef Q_WORDDATA type_42[2];
typedef unsigned short type_43[8];
typedef short type_44[16][8][2];
typedef Q_WORDDATA type_45[6];
typedef Q_WORDDATA type_46[2];
typedef float type_47[4];
typedef unsigned char type_48[16];
typedef int type_49[4];
typedef Q_WORDDATA type_50[6];
typedef short type_51[8];
typedef char type_52[16];
typedef unsigned long type_53[2];
typedef unsigned int type_54[3];
typedef unsigned int type_55[3];
typedef unsigned int type_56[3];
typedef unsigned int type_57[24];
typedef unsigned int type_58[3];
typedef unsigned int type_59[3];
typedef unsigned short type_60[8];
typedef Q_WORDDATA type_61[2];
typedef unsigned short type_62[10];
typedef short type_63[2];
typedef short type_64[2][32];
typedef _anon16 type_65[3];

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

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon5 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
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

union _anon5
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

struct _anon6
{
	float light_vect[4][4];
	float light_col[4][4];
	float light_amb[4];
	float light_pam[4][2];
	Q_WORDDATA LightPos1;
	Q_WORDDATA VertexAmbient;
	Q_WORDDATA BaseVertexColor;
	Q_WORDDATA BaseAmbient;
	Q_WORDDATA ALPHA_clear;
	float LightRealPos[4];
	float LightRealDir[4];
	unsigned int light_type_buf;
	unsigned int light_type_now;
	unsigned int pad1;
	unsigned int pad2;
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
	_anon21 testa;
	long testaaddr;
	_anon11 prim;
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

struct _anon9
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

struct shGsDrawEnv
{
	_anon0 giftag;
	_anon19 draw;
	Q_WORDDATA drawq2[5];
	_anon8 clear;
	_anon0 giftag_nc;
	_anon19 draw_nc;
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
	_anon19 draw;
	Q_WORDDATA alpha1;
	Q_WORDDATA drawq2[6];
	_anon8 clear;
	Q_WORDDATA frame;
	_anon0 giftag_nc;
	_anon19 draw_nc;
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

struct sh2gfw_POINTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
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

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
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
	_anon18 pmode;
	_anon3 smode2;
	_anon20 dispfb;
	_anon7 display;
	_anon9 bgcolor;
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

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
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
	_anon17 frame1;
	unsigned long frame1addr;
	_anon10 zbuf1;
	long zbuf1addr;
	_anon2 xyoffset1;
	long xyoffset1addr;
	_anon15 scissor1;
	long scissor1addr;
	_anon13 prmodecont;
	long prmodecontaddr;
	_anon1 colclamp;
	long colclampaddr;
	_anon12 dthe;
	long dtheaddr;
	_anon21 test1;
	long test1addr;
};

struct shGsAllEnv
{
	unsigned long loop_counter;
	unsigned int loop;
	unsigned int loop3;
	shGsLoopEnv LoopEnv;
	_anon16 DispEnv[3];
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

shAttackInfo sh2_attack_list[66];
sh2gfw_VU1_AllMicroMAN AllMicro_Man;
short GifVu2MicExecAddr[16][8][2];
short Vuchange_LightTable[2][32];
shGsAllEnv shGs_AllEnv;
sh2gfw_Env_ctl Env_ctl;

int sh2gfw_get_VuBase(int execaddr);
int sh2gfw_get_VuOffset(int execaddr);
void sh2gfw_Init_VuCounter();
int sh2gfw_Check_VuCounter(int vc);
int sh2gfw_GetVuKick_Addr(int execaddr);
int sh2gfw_GetVuKick_Addr2(int execaddr);
void sh2gfw_init_VU_PARAMS(sh2gfw_VU_PARMS* VU_PARMS);
void sh2gfw_allinit_lightenv(_anon6* slv);
void sh2gfw_set_GSREGS2Vu(sh2gfw_VU_PARMS* vupam);
int sh2gfw_set_VuSend(void* pT, sh2gfw_GIFTAG_HEAD* pGH, sh2gfw_VU_HEAD* vuh, int* exec, Q_WORDDATA** ppqwd);
int sh2gfw_get_VUmode(int light_mode, int tfx, sh2gfw_GIFTAG_HEAD* pGIF_H, sh2gfw_VU_HEAD* pVU_H);
int sh2gfw_Change_VUmode(unsigned int light_mode, unsigned int vuid, unsigned int* baseaddr, unsigned int* offsetaddr);

// 
// Start address: 0x180140
int sh2gfw_get_VuBase(int execaddr)
{
	// Line 64, Address: 0x180140, Func Offset: 0
	// Line 65, Address: 0x180158, Func Offset: 0x18
	// Func End, Address: 0x180160, Func Offset: 0x20
}

// 
// Start address: 0x180160
int sh2gfw_get_VuOffset(int execaddr)
{
	// Line 74, Address: 0x180160, Func Offset: 0
	// Line 75, Address: 0x180178, Func Offset: 0x18
	// Func End, Address: 0x180180, Func Offset: 0x20
}

// 
// Start address: 0x180180
void sh2gfw_Init_VuCounter()
{
	// Line 82, Address: 0x180180, Func Offset: 0
	// Line 83, Address: 0x18018c, Func Offset: 0xc
	// Func End, Address: 0x180194, Func Offset: 0x14
}

// 
// Start address: 0x1801a0
int sh2gfw_Check_VuCounter(int vc)
{
	// Line 93, Address: 0x1801a0, Func Offset: 0
	// Line 95, Address: 0x1801bc, Func Offset: 0x1c
	// Line 96, Address: 0x1801c4, Func Offset: 0x24
	// Line 98, Address: 0x1801c8, Func Offset: 0x28
	// Func End, Address: 0x1801d0, Func Offset: 0x30
}

// 
// Start address: 0x1801d0
int sh2gfw_GetVuKick_Addr(int execaddr)
{
	// Line 106, Address: 0x1801d0, Func Offset: 0
	// Line 107, Address: 0x1801e8, Func Offset: 0x18
	// Func End, Address: 0x1801f0, Func Offset: 0x20
}

// 
// Start address: 0x1801f0
int sh2gfw_GetVuKick_Addr2(int execaddr)
{
	// Line 117, Address: 0x1801f0, Func Offset: 0
	// Line 118, Address: 0x180208, Func Offset: 0x18
	// Func End, Address: 0x180210, Func Offset: 0x20
}

// 
// Start address: 0x180210
void sh2gfw_init_VU_PARAMS(sh2gfw_VU_PARMS* VU_PARMS)
{
	float zero[4][4];
	float unit[4][4];
	// Line 133, Address: 0x180210, Func Offset: 0
	// Line 137, Address: 0x180220, Func Offset: 0x10
	// Line 138, Address: 0x18022c, Func Offset: 0x1c
	// Line 139, Address: 0x180234, Func Offset: 0x24
	// Line 140, Address: 0x18023c, Func Offset: 0x2c
	// Line 142, Address: 0x180248, Func Offset: 0x38
	// Line 143, Address: 0x180258, Func Offset: 0x48
	// Line 144, Address: 0x180268, Func Offset: 0x58
	// Line 145, Address: 0x180278, Func Offset: 0x68
	// Line 152, Address: 0x180288, Func Offset: 0x78
	// Line 153, Address: 0x18028c, Func Offset: 0x7c
	// Line 154, Address: 0x180290, Func Offset: 0x80
	// Line 158, Address: 0x180294, Func Offset: 0x84
	// Line 159, Address: 0x1802b0, Func Offset: 0xa0
	// Line 160, Address: 0x1802c0, Func Offset: 0xb0
	// Line 162, Address: 0x1802d0, Func Offset: 0xc0
	// Line 163, Address: 0x1802d8, Func Offset: 0xc8
	// Line 165, Address: 0x1802e0, Func Offset: 0xd0
	// Func End, Address: 0x1802f4, Func Offset: 0xe4
}

// 
// Start address: 0x180300
void sh2gfw_allinit_lightenv(_anon6* slv)
{
	unsigned int i;
	// Line 219, Address: 0x180300, Func Offset: 0
	// Line 220, Address: 0x18030c, Func Offset: 0xc
	// Line 221, Address: 0x180310, Func Offset: 0x10
	// Line 223, Address: 0x18032c, Func Offset: 0x2c
	// Func End, Address: 0x180334, Func Offset: 0x34
}

// 
// Start address: 0x180340
void sh2gfw_set_GSREGS2Vu(sh2gfw_VU_PARMS* vupam)
{
	// Line 232, Address: 0x180340, Func Offset: 0
	// Line 233, Address: 0x180350, Func Offset: 0x10
	// Line 234, Address: 0x180360, Func Offset: 0x20
	// Line 236, Address: 0x180370, Func Offset: 0x30
	// Line 237, Address: 0x180380, Func Offset: 0x40
	// Line 240, Address: 0x180390, Func Offset: 0x50
	// Func End, Address: 0x180398, Func Offset: 0x58
}

// 
// Start address: 0x1803a0
int sh2gfw_set_VuSend(void* pT, sh2gfw_GIFTAG_HEAD* pGH, sh2gfw_VU_HEAD* vuh, int* exec, Q_WORDDATA** ppqwd)
{
	unsigned int offstad;
	unsigned int basead;
	unsigned int bpack;
	unsigned int execaddr;
	int tfx;
	Q_WORDDATA* b_pack;
	// Line 259, Address: 0x1803a0, Func Offset: 0
	// Line 261, Address: 0x1803d8, Func Offset: 0x38
	// Line 267, Address: 0x1803dc, Func Offset: 0x3c
	// Line 271, Address: 0x1803ec, Func Offset: 0x4c
	// Line 279, Address: 0x18040c, Func Offset: 0x6c
	// Line 280, Address: 0x18041c, Func Offset: 0x7c
	// Line 283, Address: 0x18042c, Func Offset: 0x8c
	// Line 285, Address: 0x180440, Func Offset: 0xa0
	// Line 286, Address: 0x180468, Func Offset: 0xc8
	// Line 287, Address: 0x18048c, Func Offset: 0xec
	// Line 291, Address: 0x180494, Func Offset: 0xf4
	// Line 292, Address: 0x1804b8, Func Offset: 0x118
	// Line 296, Address: 0x1804dc, Func Offset: 0x13c
	// Line 298, Address: 0x180500, Func Offset: 0x160
	// Line 299, Address: 0x180508, Func Offset: 0x168
	// Line 308, Address: 0x18050c, Func Offset: 0x16c
	// Line 309, Address: 0x180524, Func Offset: 0x184
	// Func End, Address: 0x180554, Func Offset: 0x1b4
}

// 
// Start address: 0x180560
int sh2gfw_get_VUmode(int light_mode, int tfx, sh2gfw_GIFTAG_HEAD* pGIF_H, sh2gfw_VU_HEAD* pVU_H)
{
	int execaddr;
	// Line 334, Address: 0x180560, Func Offset: 0
	// Line 345, Address: 0x180580, Func Offset: 0x20
	// Line 346, Address: 0x18058c, Func Offset: 0x2c
	// Line 387, Address: 0x180594, Func Offset: 0x34
	// Line 388, Address: 0x1805a4, Func Offset: 0x44
	// Line 389, Address: 0x1805b8, Func Offset: 0x58
	// Line 390, Address: 0x1805d0, Func Offset: 0x70
	// Line 392, Address: 0x1805e4, Func Offset: 0x84
	// Line 393, Address: 0x1805ec, Func Offset: 0x8c
	// Line 394, Address: 0x180600, Func Offset: 0xa0
	// Line 397, Address: 0x180614, Func Offset: 0xb4
	// Line 409, Address: 0x180640, Func Offset: 0xe0
	// Func End, Address: 0x18065c, Func Offset: 0xfc
}

// 
// Start address: 0x180660
int sh2gfw_Change_VUmode(unsigned int light_mode, unsigned int vuid, unsigned int* baseaddr, unsigned int* offsetaddr)
{
	int id;
	int execaddr;
	// Line 425, Address: 0x180660, Func Offset: 0
	// Line 429, Address: 0x180680, Func Offset: 0x20
	// Line 431, Address: 0x180684, Func Offset: 0x24
	// Line 433, Address: 0x1806a4, Func Offset: 0x44
	// Line 434, Address: 0x1806b8, Func Offset: 0x58
	// Line 436, Address: 0x1806c8, Func Offset: 0x68
	// Line 438, Address: 0x1806cc, Func Offset: 0x6c
	// Func End, Address: 0x1806ec, Func Offset: 0x8c
}

