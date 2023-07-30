typedef struct _anon0;
typedef struct shGsAllEnv;
typedef struct shBattleFight;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct shBattleShot;
typedef struct _anon4;
typedef struct _anon5;
typedef struct _anon6;
typedef struct _anon7;
typedef union Q_WORDDATA;
typedef struct _anon8;
typedef struct shGsDrawEnv;
typedef struct shAttackInfo;
typedef struct _anon9;
typedef union _anon10;
typedef struct _anon11;
typedef struct _anon12;
typedef struct _anon13;
typedef struct _anon14;
typedef struct shGsStencilDrawEnv;
typedef struct _anon15;
typedef struct _anon16;
typedef struct _anon17;
typedef struct _anon18;
typedef struct _anon19;
typedef struct shGsLoopEnv;
typedef struct _anon20;
typedef struct _anon21;
typedef struct shGsTinyDrawEnv;


typedef float type_0[4];
typedef float type_1[4];
typedef float type_2[4][4];
typedef Q_WORDDATA type_3[256];
typedef Q_WORDDATA type_4[4];
typedef _anon16 type_5[3];
typedef shGsDrawEnv type_6[3];
typedef shGsStencilDrawEnv type_7[3];
typedef Q_WORDDATA type_8[4];
typedef shGsTinyDrawEnv type_9[6];
typedef Q_WORDDATA type_10[10];
typedef Q_WORDDATA type_11[10];
typedef shAttackInfo type_12[46];
typedef Q_WORDDATA type_13[10];
typedef Q_WORDDATA type_14[10];
typedef Q_WORDDATA type_15[10];
typedef Q_WORDDATA type_16[10];
typedef Q_WORDDATA type_17[10];
typedef Q_WORDDATA type_18[8];
typedef Q_WORDDATA type_19[2];
typedef Q_WORDDATA type_20[2];
typedef Q_WORDDATA type_21[2];
typedef Q_WORDDATA type_22[2];
typedef Q_WORDDATA type_23[2];
typedef Q_WORDDATA type_24[2];
typedef unsigned int type_25[4];
typedef unsigned short type_26[8];
typedef Q_WORDDATA type_27[2];
typedef float type_28[4];
typedef Q_WORDDATA type_29[2];
typedef unsigned char type_30[16];
typedef Q_WORDDATA type_31[2];
typedef int type_32[4];
typedef Q_WORDDATA type_33[5];
typedef Q_WORDDATA type_34[2];
typedef short type_35[8];
typedef Q_WORDDATA type_36[2];
typedef char type_37[16];
typedef Q_WORDDATA type_38[2];
typedef unsigned long type_39[2];
typedef Q_WORDDATA type_40[5];
typedef Q_WORDDATA type_41[2];
typedef Q_WORDDATA type_42[2];
typedef Q_WORDDATA type_43[2];
typedef Q_WORDDATA type_44[2];
typedef Q_WORDDATA type_45[2];
typedef Q_WORDDATA type_46[2];
typedef Q_WORDDATA type_47[2];
typedef Q_WORDDATA type_48[2];
typedef Q_WORDDATA type_49[6];
typedef Q_WORDDATA type_50[2];
typedef Q_WORDDATA type_51[6];
typedef unsigned int type_52[3];
typedef unsigned int type_53[3];
typedef unsigned int type_54[3];
typedef unsigned int type_55[24];
typedef unsigned int type_56[3];
typedef unsigned int type_57[3];
typedef unsigned short type_58[8];

struct _anon0
{
	struct
	{
		unsigned long AC : 1;
		unsigned long pad01 : 63;
	};
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

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct _anon1
{
	struct
	{
		unsigned long DTHE : 1;
		unsigned long pad01 : 63;
	};
};

struct _anon2
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

struct _anon3
{
	_anon9 testa;
	long testaaddr;
	_anon21 prim;
	long primaddr;
	_anon2 rgbaq;
	long rgbaqaddr;
	_anon15 xyz2a;
	long xyz2aaddr;
	_anon15 xyz2b;
	long xyz2baddr;
	_anon9 testb;
	long testbaddr;
};

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct _anon4
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

struct _anon5
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

struct _anon6
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

struct _anon7
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

struct _anon8
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

struct shGsDrawEnv
{
	_anon11 giftag;
	_anon18 draw;
	Q_WORDDATA drawq2[5];
	_anon3 clear;
	_anon11 giftag_nc;
	_anon18 draw_nc;
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

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon10 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
};

struct _anon9
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

union _anon10
{
	shBattleFight fight;
	shBattleShot shot;
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
		unsigned long CLAMP : 1;
		unsigned long pad01 : 63;
	};
};

struct _anon13
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

struct _anon14
{
	struct
	{
		unsigned long OFX : 16;
		unsigned long pad16 : 16;
		unsigned long OFY : 16;
		unsigned long pad48 : 16;
	};
};

struct shGsStencilDrawEnv
{
	_anon11 giftag;
	_anon18 draw;
	Q_WORDDATA alpha1;
	Q_WORDDATA drawq2[6];
	_anon3 clear;
	Q_WORDDATA frame;
	_anon11 giftag_nc;
	_anon18 draw_nc;
	Q_WORDDATA alpha1_nc;
	Q_WORDDATA drawq2_nc[6];
	Q_WORDDATA gifad_frame_normal;
	Q_WORDDATA frame_normal;
	Q_WORDDATA gifad_frame_mskalpha;
	Q_WORDDATA frame_mskalpha;
	Q_WORDDATA gifad_frame_mskDalpha;
	Q_WORDDATA frame_mskDalpha;
};

struct _anon15
{
	struct
	{
		unsigned long X : 16;
		unsigned long Y : 16;
		unsigned long Z : 32;
	};
};

struct _anon16
{
	_anon7 pmode;
	_anon13 smode2;
	_anon8 dispfb;
	_anon17 display;
	_anon19 bgcolor;
};

struct _anon17
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

struct _anon18
{
	_anon6 frame1;
	unsigned long frame1addr;
	_anon20 zbuf1;
	long zbuf1addr;
	_anon14 xyoffset1;
	long xyoffset1addr;
	_anon5 scissor1;
	long scissor1addr;
	_anon0 prmodecont;
	long prmodecontaddr;
	_anon12 colclamp;
	long colclampaddr;
	_anon1 dthe;
	long dtheaddr;
	_anon9 test1;
	long test1addr;
};

struct _anon19
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

struct _anon20
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

struct _anon21
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

shAttackInfo sh2_attack_list[46];
shGsAllEnv shGs_AllEnv;
Q_WORDDATA zbuf_pack2[4];
Q_WORDDATA zbuf_pack[4];
Q_WORDDATA STENCIL_workpacket[256];

void shadow_main(unsigned int paddata2, _anon4* cam, float local_world1[4]);
void drop_shadow_main(_anon4* cam, int full_switch, int alpha_switch);

// 
// Start address: 0x180600
void shadow_main(unsigned int paddata2, _anon4* cam, float local_world1[4])
{
	Q_WORDDATA* qkick;
	Q_WORDDATA* call_addr;
	// Line 59, Address: 0x180600, Func Offset: 0
	// Line 64, Address: 0x18061c, Func Offset: 0x1c
	// Line 67, Address: 0x18062c, Func Offset: 0x2c
	// Line 71, Address: 0x180634, Func Offset: 0x34
	// Line 77, Address: 0x180648, Func Offset: 0x48
	// Line 79, Address: 0x180668, Func Offset: 0x68
	// Line 83, Address: 0x180678, Func Offset: 0x78
	// Line 85, Address: 0x180684, Func Offset: 0x84
	// Line 96, Address: 0x180690, Func Offset: 0x90
	// Line 102, Address: 0x18069c, Func Offset: 0x9c
	// Line 104, Address: 0x1806a4, Func Offset: 0xa4
	// Line 109, Address: 0x1806b4, Func Offset: 0xb4
	// Line 110, Address: 0x1806bc, Func Offset: 0xbc
	// Func End, Address: 0x1806d4, Func Offset: 0xd4
}

// 
// Start address: 0x1806e0
void drop_shadow_main(_anon4* cam, int full_switch, int alpha_switch)
{
	Q_WORDDATA* call_addr;
	// Line 115, Address: 0x1806e0, Func Offset: 0
	// Line 120, Address: 0x1806f8, Func Offset: 0x18
	// Line 126, Address: 0x180708, Func Offset: 0x28
	// Line 127, Address: 0x180720, Func Offset: 0x40
	// Line 163, Address: 0x180728, Func Offset: 0x48
	// Line 185, Address: 0x180734, Func Offset: 0x54
	// Func End, Address: 0x180748, Func Offset: 0x68
}

