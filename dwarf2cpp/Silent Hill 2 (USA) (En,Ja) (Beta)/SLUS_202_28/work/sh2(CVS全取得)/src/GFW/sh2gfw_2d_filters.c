typedef struct _anon0;
typedef struct _anon1;
typedef struct FilterParams;
typedef struct Event_List;
typedef union Q_WORDDATA;
typedef struct _anon2;
typedef struct Item_List;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef struct Model_List;
typedef struct shGsDrawEnv;
typedef struct _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef struct _anon9;
typedef struct Enemy_List;
typedef struct _anon10;
typedef struct _anon11;
typedef struct _anon12;
typedef struct shBattleFight;
typedef struct shGsStencilDrawEnv;
typedef struct _anon13;
typedef struct shBattleShot;
typedef struct sh2gfw_SPOTL_MATRIX;
typedef struct _anon14;
typedef struct sh2gfw_Vif1Pkbuf;
typedef struct sh2gfw_POINTL_MATRIX;
typedef struct shGsLoopEnv;
typedef struct Stage_Data;
typedef struct _anon15;
typedef struct _anon16;
typedef struct _AnimeInfo;
typedef struct shGsTinyDrawEnv;
typedef struct sh2gfw_Env_ctl;
typedef struct shAttackInfo;
typedef struct FilterWork;
typedef union _anon17;
typedef struct _anon18;
typedef struct _anon19;
typedef struct shGsAllEnv;
typedef struct _anon20;
typedef struct _anon21;

typedef void(*type_45)();
typedef int(*type_59)();

typedef shGsStencilDrawEnv type_0[3];
typedef shGsTinyDrawEnv type_1[6];
typedef Q_WORDDATA type_2[10];
typedef int type_3[3];
typedef Q_WORDDATA type_4[10];
typedef int type_5[3];
typedef Q_WORDDATA type_6[10];
typedef shAttackInfo type_7[66];
typedef Q_WORDDATA type_8[10];
typedef Q_WORDDATA type_9[10];
typedef Q_WORDDATA type_10[10];
typedef Q_WORDDATA type_11[10];
typedef Q_WORDDATA type_12[8];
typedef Q_WORDDATA type_13[2];
typedef Q_WORDDATA type_14[2];
typedef Q_WORDDATA type_15[0];
typedef Q_WORDDATA type_16[2];
typedef Q_WORDDATA type_17[2];
typedef float type_18[4];
typedef Q_WORDDATA type_19[2];
typedef unsigned short type_20[4];
typedef int type_21[3];
typedef Q_WORDDATA type_22[2];
typedef int type_23[3];
typedef Q_WORDDATA type_24[2];
typedef Q_WORDDATA type_25[2];
typedef int type_26[3];
typedef Q_WORDDATA type_27[2];
typedef Q_WORDDATA type_28[2];
typedef Q_WORDDATA type_29[2];
typedef Q_WORDDATA type_30[5];
typedef Q_WORDDATA type_31[2];
typedef Q_WORDDATA type_32[2];
typedef Q_WORDDATA type_33[2];
typedef Q_WORDDATA type_34[5];
typedef Q_WORDDATA type_35[2];
typedef int type_36[4];
typedef int type_37[3];
typedef Q_WORDDATA type_38[2];
typedef short type_39[8];
typedef int type_40[4];
typedef Q_WORDDATA type_41[2];
typedef short type_42[8];
typedef Q_WORDDATA type_43[2];
typedef Q_WORDDATA type_44[2];
typedef Q_WORDDATA type_46[2];
typedef Q_WORDDATA type_47[2];
typedef float type_48[4];
typedef Q_WORDDATA type_49[2];
typedef Q_WORDDATA type_50[6];
typedef Q_WORDDATA type_51[2];
typedef float type_52[4];
typedef int type_53[3];
typedef float type_54[4][4];
typedef unsigned int type_55[4];
typedef unsigned short type_56[8];
typedef Q_WORDDATA type_57[6];
typedef float type_58[4];
typedef unsigned char type_60[16];
typedef Q_WORDDATA type_61[16];
typedef int type_62[4];
typedef short type_63[8];
typedef char type_64[16];
typedef unsigned long type_65[2];
typedef unsigned int type_66[3];
typedef unsigned int type_67[3];
typedef int type_68[3];
typedef unsigned int type_69[3];
typedef unsigned int type_70[24];
typedef unsigned int type_71[3];
typedef int type_72[3];
typedef unsigned int type_73[3];
typedef unsigned short type_74[8];
typedef Q_WORDDATA type_75[2];
typedef Q_WORDDATA type_76[2];
typedef int type_77[4];
typedef short type_78[8];
typedef short type_79[8];
typedef Q_WORDDATA type_80[160];
typedef Q_WORDDATA type_81[8];
typedef int type_82[3];
typedef _anon1 type_83[3];
typedef shGsDrawEnv type_84[3];

struct _anon0
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

struct _anon1
{
	_anon19 pmode;
	_anon4 smode2;
	_anon0 dispfb;
	_anon7 display;
	_anon8 bgcolor;
};

struct FilterParams
{
	short base_Ix;
	short base_Iy;
	short FO_timer;
	short Max_Timer;
	char TargetSec;
	char FIO_ratio;
	char blurMode;
	char blurRatio;
	char LesserA;
	char GreaterA;
	char sw_flg;
	char dp_flg;
	unsigned char SoftIter;
	unsigned char SoftCit;
	unsigned char SoftAref;
	char SoftMode;
	char SoftShift;
	char TrimAlpha;
	short TexTrimEX;
	short TexTrimEY;
	short TexTrimSX;
	short TexTrimSY;
	int DOF_ZDepth;
	unsigned char KeyAlpha;
	unsigned char testkind;
	unsigned char S1_iter;
	unsigned char S1_alpha;
	char S1_shift;
	char S1_baseIX;
	unsigned char S2_iter;
	unsigned char S2_alpha;
	char S2_shift;
	char S2_baseIX;
};

struct Event_List
{
	int flag;
	int cond;
	int rslt0;
	int rslt1;
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

struct _anon2
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

struct Item_List
{
	float pos_x;
	float pos_z;
	unsigned short pos_y;
	unsigned short rot_y;
	unsigned int st;
};

struct _anon3
{
	_anon5 frame1;
	unsigned long frame1addr;
	_anon15 zbuf1;
	long zbuf1addr;
	_anon11 xyoffset1;
	long xyoffset1addr;
	_anon2 scissor1;
	long scissor1addr;
	_anon18 prmodecont;
	long prmodecontaddr;
	_anon9 colclamp;
	long colclampaddr;
	_anon20 dthe;
	long dtheaddr;
	_anon6 test1;
	long test1addr;
};

struct _anon4
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

struct Model_List
{
	short kind;
	short id;
	short flag_off;
	short flag_on;
	float pos[4];
	float rot[4];
};

struct shGsDrawEnv
{
	_anon10 giftag;
	_anon3 draw;
	Q_WORDDATA drawq2[5];
	_anon14 clear;
	_anon10 giftag_nc;
	_anon3 draw_nc;
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
	struct
	{
		unsigned long CLAMP : 1;
		unsigned long pad01 : 63;
	};
};

struct Enemy_List
{
	short kind;
	short id;
	int pos_x;
	int pos_z;
	short pos_y;
	short rot_y;
	short status;
	unsigned short condition;
};

struct _anon10
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

struct _anon11
{
	struct
	{
		unsigned long OFX : 16;
		unsigned long pad16 : 16;
		unsigned long OFY : 16;
		unsigned long pad48 : 16;
	};
};

struct _anon12
{
	void(*SpecDraw)();
	void(*PreDraw)();
	void(*PostDraw)();
	void(*CharaDraw_Hook)();
};

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct shGsStencilDrawEnv
{
	_anon10 giftag;
	_anon3 draw;
	Q_WORDDATA alpha1;
	Q_WORDDATA drawq2[6];
	_anon14 clear;
	Q_WORDDATA frame;
	_anon10 giftag_nc;
	_anon3 draw_nc;
	Q_WORDDATA alpha1_nc;
	Q_WORDDATA drawq2_nc[6];
	Q_WORDDATA gifad_frame_normal;
	Q_WORDDATA frame_normal;
	Q_WORDDATA gifad_frame_mskalpha;
	Q_WORDDATA frame_mskalpha;
	Q_WORDDATA gifad_frame_mskDalpha;
	Q_WORDDATA frame_mskDalpha;
};

struct _anon13
{
	struct
	{
		unsigned long X : 16;
		unsigned long Y : 16;
		unsigned long Z : 32;
	};
};

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct sh2gfw_SPOTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA dirvec;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
};

struct _anon14
{
	_anon6 testa;
	long testaaddr;
	_anon16 prim;
	long primaddr;
	_anon21 rgbaq;
	long rgbaqaddr;
	_anon13 xyz2a;
	long xyz2aaddr;
	_anon13 xyz2b;
	long xyz2baddr;
	_anon6 testb;
	long testbaddr;
};

struct sh2gfw_Vif1Pkbuf
{
	void* pkTop;
	Q_WORDDATA* pTail;
	int initflg;
	int count;
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

struct Stage_Data
{
	Event_List* ev_list;
	unsigned char* ev_pos;
	int(*ev_prog)();
	Item_List* gi_list;
	Model_List* mdl_list;
	Enemy_List* en_list;
	void(*stage_init)();
	void(*room_init)();
	void(*alltime_func)();
	int glb_crd;
	int pc_model;
	_AnimeInfo* stg_anim_info;
	int(*bgm_control)();
	_anon12* gfw_func;
	int(*chara_data_clear)();
	void(*sound_call_after_load)();
	int reserve_11;
};

struct _anon15
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

struct _anon16
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

struct _AnimeInfo
{
	unsigned short name;
	unsigned short frame;
	short speed;
	unsigned short start;
	unsigned short end;
	unsigned char loop;
	char pad;
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

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon17 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
};

struct FilterWork
{
	int GsFilterKind;
	int Flg;
	int Kind_History;
	int mode;
	Q_WORDDATA FilterData[8];
	Q_WORDDATA CopyFilterColor;
};

union _anon17
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _anon18
{
	struct
	{
		unsigned long AC : 1;
		unsigned long pad01 : 63;
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
		unsigned int R : 8;
		unsigned int G : 8;
		unsigned int B : 8;
		unsigned int A : 8;
	};
	float Q;
};

shAttackInfo sh2_attack_list[66];
shGsAllEnv shGs_AllEnv;
sh2gfw_Env_ctl Env_ctl;
Q_WORDDATA CalcTex_buffer[0];
Q_WORDDATA Noise_Packet[160];
FilterWork shGsFilterWork;
sh2gfw_Vif1Pkbuf shGsFilterPkBuf;
Stage_Data* stage;

void sh2gfw_Copy_FrameToWork(Q_WORDDATA** ppqwd);
void sh2gfw_Filter_JustCopy2(Q_WORDDATA** ppqwd);
void sh2gfw_Filter_Blur(Q_WORDDATA** ppqwd, unsigned int bl_ratio);
void sh2gfw_Filter_Dark_Blur(Q_WORDDATA** ppqwd, unsigned int bl_ratio, unsigned int aref);
void sh2gfw_Filter_Glow_Blur(Q_WORDDATA** ppqwd, unsigned int aref, unsigned int bl_ratio, unsigned int pam);
void sh2gfw_test_MakeNoise();
void sh2gfw_Black_Clear();
void sh2gfw_SendDraw_Noise(Q_WORDDATA** ppqwd, unsigned int ratio, unsigned int pam, unsigned int mode, int loop);
void sh2gfw_Swap_Soft(Q_WORDDATA** ppqwd, int mode, int CompoIt, int aref, int testval, int testmode);
void sh2gfw_Swap_GlowSoft(Q_WORDDATA** ppqwd, int mode, int parm, int aref, int Shift);
void sh2gfw_FadeOut_Retain(Q_WORDDATA** ppqwd, int BorW);
void sh2gfw_Filter_Retain(Q_WORDDATA** ppqwd);
int sh2gfw_Fade2(Q_WORDDATA** ppqwd, int mode, int color, int flg);
int sh2gfw_Fade3(Q_WORDDATA** ppqwd, int* color);
void sh2gfw_Set_FadeOutRetain_Black(float ra);
void sh2gfw_Set_FadeOut_Black(float ra);
void sh2gfw_Set_FadeOutRetain_White(float ra);
void sh2gfw_Set_FadeOutRetain_Red(float ra);
void sh2gfw_Set_FadeOut_White(float ra);
void sh2gfw_Set_FadeIn_Black(float ra);
void sh2gfw_Set_FadeIn_White(float ra);
void sh2gfw_Set_FadeIn_Red(float ra);
void sh2gfw_Set_FilterBlur(int rt);
void sh2gfw_Set_PauseRetain();
void sh2gfw_Reset_PauseRetain();
void sh2gfw_Reset_FilterCommand();
int sh2gfw_Get_FilterCommand();
void* sh2gfw_Get_FilterCommandParams();
int sh2gfw_Set_CaptureNowFB();
void Exec_PostDraw_OVfunc();
int Check_Filter_Soft();
void DemoFadeDraw2();
void Make_Filter_Packet(void* pb);

// 
// Start address: 0x176ce0
void sh2gfw_Copy_FrameToWork(Q_WORDDATA** ppqwd)
{
	int idd[3];
	Q_WORDDATA* qwd;
	int id;
	// Line 31, Address: 0x176ce0, Func Offset: 0
	// Line 33, Address: 0x176cf4, Func Offset: 0x14
	// Line 34, Address: 0x176cf8, Func Offset: 0x18
	// Line 36, Address: 0x176d14, Func Offset: 0x34
	// Line 37, Address: 0x176d34, Func Offset: 0x54
	// Line 39, Address: 0x176d4c, Func Offset: 0x6c
	// Line 49, Address: 0x176d58, Func Offset: 0x78
	// Line 54, Address: 0x176d6c, Func Offset: 0x8c
	// Line 55, Address: 0x176d8c, Func Offset: 0xac
	// Line 64, Address: 0x176da4, Func Offset: 0xc4
	// Line 65, Address: 0x176df0, Func Offset: 0x110
	// Line 67, Address: 0x176dfc, Func Offset: 0x11c
	// Line 71, Address: 0x176e14, Func Offset: 0x134
	// Line 73, Address: 0x176e34, Func Offset: 0x154
	// Line 75, Address: 0x176e48, Func Offset: 0x168
	// Line 84, Address: 0x176e58, Func Offset: 0x178
	// Line 89, Address: 0x176e6c, Func Offset: 0x18c
	// Line 90, Address: 0x176e78, Func Offset: 0x198
	// Line 91, Address: 0x176e84, Func Offset: 0x1a4
	// Line 92, Address: 0x176e90, Func Offset: 0x1b0
	// Line 96, Address: 0x176e9c, Func Offset: 0x1bc
	// Line 102, Address: 0x176eb4, Func Offset: 0x1d4
	// Line 107, Address: 0x176ec8, Func Offset: 0x1e8
	// Line 108, Address: 0x176ed4, Func Offset: 0x1f4
	// Line 109, Address: 0x176ee0, Func Offset: 0x200
	// Line 110, Address: 0x176eec, Func Offset: 0x20c
	// Line 112, Address: 0x176ef8, Func Offset: 0x218
	// Line 114, Address: 0x176f0c, Func Offset: 0x22c
	// Line 117, Address: 0x176f48, Func Offset: 0x268
	// Line 121, Address: 0x176f5c, Func Offset: 0x27c
	// Line 123, Address: 0x176f68, Func Offset: 0x288
	// Line 125, Address: 0x176f70, Func Offset: 0x290
	// Func End, Address: 0x176f88, Func Offset: 0x2a8
}

// 
// Start address: 0x176f90
void sh2gfw_Filter_JustCopy2(Q_WORDDATA** ppqwd)
{
	FilterParams* pfp;
	Q_WORDDATA* qwd;
	int ty;
	int tx;
	int id;
	// Line 129, Address: 0x176f90, Func Offset: 0
	// Line 131, Address: 0x176fa8, Func Offset: 0x18
	// Line 133, Address: 0x176fac, Func Offset: 0x1c
	// Line 135, Address: 0x176fb8, Func Offset: 0x28
	// Line 137, Address: 0x176fc0, Func Offset: 0x30
	// Line 139, Address: 0x176ff0, Func Offset: 0x60
	// Line 140, Address: 0x177018, Func Offset: 0x88
	// Line 151, Address: 0x17702c, Func Offset: 0x9c
	// Line 157, Address: 0x177048, Func Offset: 0xb8
	// Line 167, Address: 0x177070, Func Offset: 0xe0
	// Line 170, Address: 0x1770c4, Func Offset: 0x134
	// Line 175, Address: 0x1770d4, Func Offset: 0x144
	// Line 176, Address: 0x1770f0, Func Offset: 0x160
	// Line 177, Address: 0x1770f8, Func Offset: 0x168
	// Line 188, Address: 0x177100, Func Offset: 0x170
	// Line 194, Address: 0x177108, Func Offset: 0x178
	// Line 197, Address: 0x177124, Func Offset: 0x194
	// Line 202, Address: 0x17712c, Func Offset: 0x19c
	// Line 204, Address: 0x177150, Func Offset: 0x1c0
	// Line 207, Address: 0x177198, Func Offset: 0x208
	// Line 209, Address: 0x1771bc, Func Offset: 0x22c
	// Line 212, Address: 0x1771d0, Func Offset: 0x240
	// Line 217, Address: 0x177200, Func Offset: 0x270
	// Line 218, Address: 0x17721c, Func Offset: 0x28c
	// Line 219, Address: 0x177230, Func Offset: 0x2a0
	// Line 220, Address: 0x177244, Func Offset: 0x2b4
	// Line 222, Address: 0x177258, Func Offset: 0x2c8
	// Line 226, Address: 0x17729c, Func Offset: 0x30c
	// Line 234, Address: 0x1772dc, Func Offset: 0x34c
	// Line 235, Address: 0x1772f8, Func Offset: 0x368
	// Line 236, Address: 0x17730c, Func Offset: 0x37c
	// Line 237, Address: 0x177320, Func Offset: 0x390
	// Line 239, Address: 0x177334, Func Offset: 0x3a4
	// Line 240, Address: 0x177378, Func Offset: 0x3e8
	// Line 241, Address: 0x177388, Func Offset: 0x3f8
	// Line 242, Address: 0x1773a0, Func Offset: 0x410
	// Line 246, Address: 0x1773a8, Func Offset: 0x418
	// Line 250, Address: 0x1773d0, Func Offset: 0x440
	// Line 251, Address: 0x1773e4, Func Offset: 0x454
	// Line 252, Address: 0x1773f8, Func Offset: 0x468
	// Line 254, Address: 0x17740c, Func Offset: 0x47c
	// Line 256, Address: 0x177418, Func Offset: 0x488
	// Line 262, Address: 0x177420, Func Offset: 0x490
	// Func End, Address: 0x17743c, Func Offset: 0x4ac
}

// 
// Start address: 0x177440
void sh2gfw_Filter_Blur(Q_WORDDATA** ppqwd, unsigned int bl_ratio)
{
	Q_WORDDATA* qwd;
	int idd[3];
	int ty;
	int tx;
	int id;
	// Line 265, Address: 0x177440, Func Offset: 0
	// Line 268, Address: 0x17745c, Func Offset: 0x1c
	// Line 272, Address: 0x177478, Func Offset: 0x38
	// Line 274, Address: 0x17747c, Func Offset: 0x3c
	// Line 276, Address: 0x17749c, Func Offset: 0x5c
	// Line 277, Address: 0x1774b4, Func Offset: 0x74
	// Line 287, Address: 0x1774c0, Func Offset: 0x80
	// Line 292, Address: 0x1774d4, Func Offset: 0x94
	// Line 299, Address: 0x1774f4, Func Offset: 0xb4
	// Line 307, Address: 0x177530, Func Offset: 0xf0
	// Line 319, Address: 0x17753c, Func Offset: 0xfc
	// Line 324, Address: 0x17754c, Func Offset: 0x10c
	// Line 326, Address: 0x17755c, Func Offset: 0x11c
	// Line 332, Address: 0x177598, Func Offset: 0x158
	// Line 335, Address: 0x1775b8, Func Offset: 0x178
	// Line 337, Address: 0x1775cc, Func Offset: 0x18c
	// Line 340, Address: 0x1775d8, Func Offset: 0x198
	// Line 342, Address: 0x1775e0, Func Offset: 0x1a0
	// Line 344, Address: 0x1775f4, Func Offset: 0x1b4
	// Line 347, Address: 0x17760c, Func Offset: 0x1cc
	// Line 349, Address: 0x177620, Func Offset: 0x1e0
	// Line 351, Address: 0x177630, Func Offset: 0x1f0
	// Line 353, Address: 0x177644, Func Offset: 0x204
	// Line 355, Address: 0x177650, Func Offset: 0x210
	// Line 357, Address: 0x17765c, Func Offset: 0x21c
	// Line 360, Address: 0x177664, Func Offset: 0x224
	// Func End, Address: 0x177680, Func Offset: 0x240
}

// 
// Start address: 0x177680
void sh2gfw_Filter_Dark_Blur(Q_WORDDATA** ppqwd, unsigned int bl_ratio, unsigned int aref)
{
	Q_WORDDATA* qwd;
	int idd[3];
	int ty;
	int tx;
	int id;
	// Line 364, Address: 0x177680, Func Offset: 0
	// Line 367, Address: 0x17769c, Func Offset: 0x1c
	// Line 371, Address: 0x1776b8, Func Offset: 0x38
	// Line 373, Address: 0x1776bc, Func Offset: 0x3c
	// Line 375, Address: 0x1776dc, Func Offset: 0x5c
	// Line 376, Address: 0x1776f4, Func Offset: 0x74
	// Line 388, Address: 0x177700, Func Offset: 0x80
	// Line 394, Address: 0x177724, Func Offset: 0xa4
	// Line 401, Address: 0x177744, Func Offset: 0xc4
	// Line 406, Address: 0x177780, Func Offset: 0x100
	// Line 411, Address: 0x17778c, Func Offset: 0x10c
	// Line 415, Address: 0x17779c, Func Offset: 0x11c
	// Line 417, Address: 0x1777b8, Func Offset: 0x138
	// Line 420, Address: 0x1777f4, Func Offset: 0x174
	// Line 423, Address: 0x177814, Func Offset: 0x194
	// Line 425, Address: 0x177828, Func Offset: 0x1a8
	// Line 428, Address: 0x177838, Func Offset: 0x1b8
	// Line 430, Address: 0x177840, Func Offset: 0x1c0
	// Line 432, Address: 0x177854, Func Offset: 0x1d4
	// Line 435, Address: 0x17786c, Func Offset: 0x1ec
	// Line 437, Address: 0x177880, Func Offset: 0x200
	// Line 439, Address: 0x177890, Func Offset: 0x210
	// Line 441, Address: 0x1778a4, Func Offset: 0x224
	// Line 447, Address: 0x1778b4, Func Offset: 0x234
	// Line 451, Address: 0x1778c0, Func Offset: 0x240
	// Line 453, Address: 0x1778cc, Func Offset: 0x24c
	// Line 455, Address: 0x1778d4, Func Offset: 0x254
	// Func End, Address: 0x1778f0, Func Offset: 0x270
}

// 
// Start address: 0x1778f0
void sh2gfw_Filter_Glow_Blur(Q_WORDDATA** ppqwd, unsigned int aref, unsigned int bl_ratio, unsigned int pam)
{
	Q_WORDDATA* qwd;
	int idd[3];
	int ty;
	int tx;
	int id;
	// Line 460, Address: 0x1778f0, Func Offset: 0
	// Line 461, Address: 0x177918, Func Offset: 0x28
	// Line 462, Address: 0x17791c, Func Offset: 0x2c
	// Line 466, Address: 0x177938, Func Offset: 0x48
	// Line 468, Address: 0x17793c, Func Offset: 0x4c
	// Line 470, Address: 0x17795c, Func Offset: 0x6c
	// Line 471, Address: 0x177974, Func Offset: 0x84
	// Line 482, Address: 0x177980, Func Offset: 0x90
	// Line 488, Address: 0x1779a4, Func Offset: 0xb4
	// Line 495, Address: 0x1779c4, Func Offset: 0xd4
	// Line 497, Address: 0x177a00, Func Offset: 0x110
	// Line 502, Address: 0x177a08, Func Offset: 0x118
	// Line 503, Address: 0x177a1c, Func Offset: 0x12c
	// Line 508, Address: 0x177a24, Func Offset: 0x134
	// Line 513, Address: 0x177a34, Func Offset: 0x144
	// Line 517, Address: 0x177a4c, Func Offset: 0x15c
	// Line 519, Address: 0x177a74, Func Offset: 0x184
	// Line 522, Address: 0x177abc, Func Offset: 0x1cc
	// Line 525, Address: 0x177ae8, Func Offset: 0x1f8
	// Line 527, Address: 0x177b08, Func Offset: 0x218
	// Line 530, Address: 0x177b18, Func Offset: 0x228
	// Line 532, Address: 0x177b2c, Func Offset: 0x23c
	// Line 534, Address: 0x177b4c, Func Offset: 0x25c
	// Line 537, Address: 0x177b70, Func Offset: 0x280
	// Line 539, Address: 0x177b90, Func Offset: 0x2a0
	// Line 541, Address: 0x177bac, Func Offset: 0x2bc
	// Line 543, Address: 0x177bcc, Func Offset: 0x2dc
	// Line 549, Address: 0x177be8, Func Offset: 0x2f8
	// Line 553, Address: 0x177c04, Func Offset: 0x314
	// Line 555, Address: 0x177c1c, Func Offset: 0x32c
	// Line 561, Address: 0x177c2c, Func Offset: 0x33c
	// Func End, Address: 0x177c50, Func Offset: 0x360
}

// 
// Start address: 0x177c50
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
	// Line 582, Address: 0x177c50, Func Offset: 0
	// Line 588, Address: 0x177c58, Func Offset: 0x8
	// Line 601, Address: 0x177c64, Func Offset: 0x14
	// Line 602, Address: 0x177c7c, Func Offset: 0x2c
	// Line 604, Address: 0x177c80, Func Offset: 0x30
	// Line 605, Address: 0x177c88, Func Offset: 0x38
	// Line 607, Address: 0x177c94, Func Offset: 0x44
	// Line 608, Address: 0x177c9c, Func Offset: 0x4c
	// Line 610, Address: 0x177ca8, Func Offset: 0x58
	// Line 611, Address: 0x177cb0, Func Offset: 0x60
	// Line 613, Address: 0x177cbc, Func Offset: 0x6c
	// Line 615, Address: 0x177ccc, Func Offset: 0x7c
	// Line 616, Address: 0x177cd8, Func Offset: 0x88
	// Line 620, Address: 0x177ce0, Func Offset: 0x90
	// Line 622, Address: 0x177cfc, Func Offset: 0xac
	// Line 623, Address: 0x177d08, Func Offset: 0xb8
	// Line 624, Address: 0x177d18, Func Offset: 0xc8
	// Line 625, Address: 0x177d20, Func Offset: 0xd0
	// Line 628, Address: 0x177d2c, Func Offset: 0xdc
	// Line 629, Address: 0x177d34, Func Offset: 0xe4
	// Line 630, Address: 0x177d5c, Func Offset: 0x10c
	// Line 633, Address: 0x177d74, Func Offset: 0x124
	// Func End, Address: 0x177d7c, Func Offset: 0x12c
}

// 
// Start address: 0x177d80
void sh2gfw_Black_Clear()
{
	int id;
	Q_WORDDATA* qwd;
	// Line 880, Address: 0x177d80, Func Offset: 0
	// Line 884, Address: 0x177d88, Func Offset: 0x8
	// Line 885, Address: 0x177db8, Func Offset: 0x38
	// Line 895, Address: 0x177de0, Func Offset: 0x60
	// Line 900, Address: 0x177dfc, Func Offset: 0x7c
	// Line 902, Address: 0x177e24, Func Offset: 0xa4
	// Line 903, Address: 0x177e4c, Func Offset: 0xcc
	// Line 905, Address: 0x177e64, Func Offset: 0xe4
	// Line 908, Address: 0x177e70, Func Offset: 0xf0
	// Line 910, Address: 0x177e94, Func Offset: 0x114
	// Line 912, Address: 0x177eb4, Func Offset: 0x134
	// Line 914, Address: 0x177ed4, Func Offset: 0x154
	// Line 916, Address: 0x177ef0, Func Offset: 0x170
	// Line 917, Address: 0x177ef8, Func Offset: 0x178
	// Line 919, Address: 0x177f04, Func Offset: 0x184
	// Line 921, Address: 0x177f14, Func Offset: 0x194
	// Func End, Address: 0x177f24, Func Offset: 0x1a4
}

// 
// Start address: 0x177f30
void sh2gfw_SendDraw_Noise(Q_WORDDATA** ppqwd, unsigned int ratio, unsigned int pam, unsigned int mode, int loop)
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
	// Line 927, Address: 0x177f30, Func Offset: 0
	// Line 928, Address: 0x177f40, Func Offset: 0x10
	// Line 930, Address: 0x177f48, Func Offset: 0x18
	// Line 931, Address: 0x177f4c, Func Offset: 0x1c
	// Line 933, Address: 0x177f68, Func Offset: 0x38
	// Line 935, Address: 0x177fa4, Func Offset: 0x74
	// Line 940, Address: 0x177fd8, Func Offset: 0xa8
	// Line 941, Address: 0x17800c, Func Offset: 0xdc
	// Line 942, Address: 0x178018, Func Offset: 0xe8
	// Line 943, Address: 0x178020, Func Offset: 0xf0
	// Line 944, Address: 0x17802c, Func Offset: 0xfc
	// Line 945, Address: 0x178038, Func Offset: 0x108
	// Line 946, Address: 0x178044, Func Offset: 0x114
	// Line 947, Address: 0x17804c, Func Offset: 0x11c
	// Line 948, Address: 0x178058, Func Offset: 0x128
	// Line 949, Address: 0x178064, Func Offset: 0x134
	// Line 950, Address: 0x17806c, Func Offset: 0x13c
	// Line 951, Address: 0x178078, Func Offset: 0x148
	// Line 953, Address: 0x1780ac, Func Offset: 0x17c
	// Line 956, Address: 0x1780fc, Func Offset: 0x1cc
	// Line 957, Address: 0x178100, Func Offset: 0x1d0
	// Line 959, Address: 0x178118, Func Offset: 0x1e8
	// Line 960, Address: 0x17812c, Func Offset: 0x1fc
	// Line 970, Address: 0x178138, Func Offset: 0x208
	// Line 975, Address: 0x17814c, Func Offset: 0x21c
	// Line 983, Address: 0x17816c, Func Offset: 0x23c
	// Line 985, Address: 0x178190, Func Offset: 0x260
	// Line 989, Address: 0x1781a0, Func Offset: 0x270
	// Line 993, Address: 0x1781b4, Func Offset: 0x284
	// Line 997, Address: 0x1781bc, Func Offset: 0x28c
	// Line 1007, Address: 0x1781c4, Func Offset: 0x294
	// Line 1010, Address: 0x1781d8, Func Offset: 0x2a8
	// Line 1014, Address: 0x1781e0, Func Offset: 0x2b0
	// Line 1019, Address: 0x1781fc, Func Offset: 0x2cc
	// Line 1020, Address: 0x178208, Func Offset: 0x2d8
	// Line 1024, Address: 0x178210, Func Offset: 0x2e0
	// Line 1026, Address: 0x178238, Func Offset: 0x308
	// Line 1030, Address: 0x178248, Func Offset: 0x318
	// Line 1033, Address: 0x178270, Func Offset: 0x340
	// Line 1034, Address: 0x17827c, Func Offset: 0x34c
	// Line 1038, Address: 0x178290, Func Offset: 0x360
	// Line 1040, Address: 0x178298, Func Offset: 0x368
	// Line 1044, Address: 0x1782d4, Func Offset: 0x3a4
	// Line 1045, Address: 0x1782dc, Func Offset: 0x3ac
	// Line 1046, Address: 0x1782f8, Func Offset: 0x3c8
	// Line 1054, Address: 0x178300, Func Offset: 0x3d0
	// Line 1058, Address: 0x178328, Func Offset: 0x3f8
	// Line 1062, Address: 0x178338, Func Offset: 0x408
	// Line 1066, Address: 0x178360, Func Offset: 0x430
	// Line 1067, Address: 0x17836c, Func Offset: 0x43c
	// Line 1070, Address: 0x178380, Func Offset: 0x450
	// Line 1071, Address: 0x178388, Func Offset: 0x458
	// Line 1078, Address: 0x1783c4, Func Offset: 0x494
	// Line 1085, Address: 0x1783cc, Func Offset: 0x49c
	// Line 1086, Address: 0x1783d8, Func Offset: 0x4a8
	// Line 1088, Address: 0x1783e4, Func Offset: 0x4b4
	// Line 1091, Address: 0x17840c, Func Offset: 0x4dc
	// Line 1093, Address: 0x17842c, Func Offset: 0x4fc
	// Line 1096, Address: 0x178438, Func Offset: 0x508
	// Line 1098, Address: 0x17844c, Func Offset: 0x51c
	// Line 1103, Address: 0x17846c, Func Offset: 0x53c
	// Line 1106, Address: 0x1784bc, Func Offset: 0x58c
	// Line 1108, Address: 0x1784dc, Func Offset: 0x5ac
	// Line 1113, Address: 0x1784f8, Func Offset: 0x5c8
	// Line 1115, Address: 0x178548, Func Offset: 0x618
	// Line 1116, Address: 0x17855c, Func Offset: 0x62c
	// Line 1121, Address: 0x17856c, Func Offset: 0x63c
	// Line 1122, Address: 0x178578, Func Offset: 0x648
	// Line 1123, Address: 0x178584, Func Offset: 0x654
	// Line 1126, Address: 0x178598, Func Offset: 0x668
	// Line 1127, Address: 0x1785c0, Func Offset: 0x690
	// Line 1128, Address: 0x1785c8, Func Offset: 0x698
	// Func End, Address: 0x1785dc, Func Offset: 0x6ac
}

// 
// Start address: 0x1785e0
void sh2gfw_Swap_Soft(Q_WORDDATA** ppqwd, int mode, int CompoIt, int aref, int testval, int testmode)
{
	int sz;
	int cent;
	int i;
	short dy[8];
	short dx[8];
	Q_WORDDATA* qwd;
	Q_WORDDATA RegFrame[2];
	Q_WORDDATA SwapTex0[2];
	int idd[3];
	int ty;
	int tx;
	int counter;
	int iy;
	int ix;
	int swapbuff;
	int id;
	// Line 1367, Address: 0x1785e0, Func Offset: 0
	// Line 1369, Address: 0x178624, Func Offset: 0x44
	// Line 1372, Address: 0x17862c, Func Offset: 0x4c
	// Line 1377, Address: 0x178648, Func Offset: 0x68
	// Line 1379, Address: 0x17864c, Func Offset: 0x6c
	// Line 1382, Address: 0x178664, Func Offset: 0x84
	// Line 1387, Address: 0x1786a4, Func Offset: 0xc4
	// Line 1395, Address: 0x1786bc, Func Offset: 0xdc
	// Line 1403, Address: 0x1786f8, Func Offset: 0x118
	// Line 1409, Address: 0x17871c, Func Offset: 0x13c
	// Line 1410, Address: 0x17873c, Func Offset: 0x15c
	// Line 1411, Address: 0x178754, Func Offset: 0x174
	// Line 1413, Address: 0x178760, Func Offset: 0x180
	// Line 1418, Address: 0x17877c, Func Offset: 0x19c
	// Line 1419, Address: 0x1787a4, Func Offset: 0x1c4
	// Line 1425, Address: 0x1787ac, Func Offset: 0x1cc
	// Line 1426, Address: 0x1787d4, Func Offset: 0x1f4
	// Line 1434, Address: 0x1787dc, Func Offset: 0x1fc
	// Line 1443, Address: 0x178804, Func Offset: 0x224
	// Line 1444, Address: 0x17882c, Func Offset: 0x24c
	// Line 1447, Address: 0x178844, Func Offset: 0x264
	// Line 1450, Address: 0x178860, Func Offset: 0x280
	// Line 1458, Address: 0x178888, Func Offset: 0x2a8
	// Line 1464, Address: 0x1788a8, Func Offset: 0x2c8
	// Line 1474, Address: 0x1788b0, Func Offset: 0x2d0
	// Line 1475, Address: 0x1788c4, Func Offset: 0x2e4
	// Line 1476, Address: 0x1788c8, Func Offset: 0x2e8
	// Line 1477, Address: 0x1788d4, Func Offset: 0x2f4
	// Line 1478, Address: 0x1788e0, Func Offset: 0x300
	// Line 1479, Address: 0x1788f8, Func Offset: 0x318
	// Line 1480, Address: 0x1788fc, Func Offset: 0x31c
	// Line 1481, Address: 0x17890c, Func Offset: 0x32c
	// Line 1482, Address: 0x178914, Func Offset: 0x334
	// Line 1483, Address: 0x178920, Func Offset: 0x340
	// Line 1484, Address: 0x17892c, Func Offset: 0x34c
	// Line 1485, Address: 0x17895c, Func Offset: 0x37c
	// Line 1486, Address: 0x178960, Func Offset: 0x380
	// Line 1487, Address: 0x178968, Func Offset: 0x388
	// Line 1488, Address: 0x178998, Func Offset: 0x3b8
	// Line 1489, Address: 0x17899c, Func Offset: 0x3bc
	// Line 1491, Address: 0x1789a0, Func Offset: 0x3c0
	// Line 1492, Address: 0x1789b4, Func Offset: 0x3d4
	// Line 1494, Address: 0x1789b8, Func Offset: 0x3d8
	// Line 1495, Address: 0x1789f4, Func Offset: 0x414
	// Line 1496, Address: 0x178a00, Func Offset: 0x420
	// Line 1499, Address: 0x178a0c, Func Offset: 0x42c
	// Line 1501, Address: 0x178a28, Func Offset: 0x448
	// Line 1502, Address: 0x178a40, Func Offset: 0x460
	// Line 1503, Address: 0x178a60, Func Offset: 0x480
	// Line 1504, Address: 0x178a78, Func Offset: 0x498
	// Line 1505, Address: 0x178a7c, Func Offset: 0x49c
	// Line 1507, Address: 0x178a90, Func Offset: 0x4b0
	// Line 1509, Address: 0x178aa4, Func Offset: 0x4c4
	// Line 1512, Address: 0x178ac4, Func Offset: 0x4e4
	// Line 1514, Address: 0x178b14, Func Offset: 0x534
	// Line 1516, Address: 0x178b34, Func Offset: 0x554
	// Line 1519, Address: 0x178b50, Func Offset: 0x570
	// Line 1520, Address: 0x178b8c, Func Offset: 0x5ac
	// Line 1521, Address: 0x178b9c, Func Offset: 0x5bc
	// Line 1526, Address: 0x178bac, Func Offset: 0x5cc
	// Line 1527, Address: 0x178bb0, Func Offset: 0x5d0
	// Line 1528, Address: 0x178bb8, Func Offset: 0x5d8
	// Line 1529, Address: 0x178be0, Func Offset: 0x600
	// Line 1531, Address: 0x178c00, Func Offset: 0x620
	// Line 1533, Address: 0x178c0c, Func Offset: 0x62c
	// Line 1534, Address: 0x178c2c, Func Offset: 0x64c
	// Line 1537, Address: 0x178c44, Func Offset: 0x664
	// Line 1539, Address: 0x178c58, Func Offset: 0x678
	// Line 1542, Address: 0x178c78, Func Offset: 0x698
	// Line 1545, Address: 0x178ca4, Func Offset: 0x6c4
	// Line 1547, Address: 0x178cc4, Func Offset: 0x6e4
	// Line 1550, Address: 0x178ce0, Func Offset: 0x700
	// Line 1555, Address: 0x178d14, Func Offset: 0x734
	// Line 1556, Address: 0x178d28, Func Offset: 0x748
	// Line 1557, Address: 0x178d2c, Func Offset: 0x74c
	// Func End, Address: 0x178d60, Func Offset: 0x780
}

// 
// Start address: 0x178d60
void sh2gfw_Swap_GlowSoft(Q_WORDDATA** ppqwd, int mode, int parm, int aref, int Shift)
{
	int sz;
	int cent;
	int i;
	short dy[8];
	short dx[8];
	Q_WORDDATA* qwd;
	Q_WORDDATA RegFrame[2];
	Q_WORDDATA SwapTex0[2];
	int idd[3];
	int counter;
	int iy;
	int ix;
	int swapbuff;
	int id;
	// Line 1564, Address: 0x178d60, Func Offset: 0
	// Line 1566, Address: 0x178d98, Func Offset: 0x38
	// Line 1568, Address: 0x178da0, Func Offset: 0x40
	// Line 1573, Address: 0x178dbc, Func Offset: 0x5c
	// Line 1575, Address: 0x178dc4, Func Offset: 0x64
	// Line 1584, Address: 0x178ddc, Func Offset: 0x7c
	// Line 1587, Address: 0x178e1c, Func Offset: 0xbc
	// Line 1597, Address: 0x178e34, Func Offset: 0xd4
	// Line 1605, Address: 0x178e70, Func Offset: 0x110
	// Line 1610, Address: 0x178e94, Func Offset: 0x134
	// Line 1613, Address: 0x178ec4, Func Offset: 0x164
	// Line 1614, Address: 0x178eec, Func Offset: 0x18c
	// Line 1625, Address: 0x178f00, Func Offset: 0x1a0
	// Line 1630, Address: 0x178f2c, Func Offset: 0x1cc
	// Line 1632, Address: 0x178f54, Func Offset: 0x1f4
	// Line 1635, Address: 0x178f64, Func Offset: 0x204
	// Line 1639, Address: 0x178f7c, Func Offset: 0x21c
	// Line 1641, Address: 0x178fa0, Func Offset: 0x240
	// Line 1649, Address: 0x178fbc, Func Offset: 0x25c
	// Line 1660, Address: 0x178fc4, Func Offset: 0x264
	// Line 1661, Address: 0x178fd8, Func Offset: 0x278
	// Line 1662, Address: 0x178fdc, Func Offset: 0x27c
	// Line 1663, Address: 0x178fe8, Func Offset: 0x288
	// Line 1664, Address: 0x178ff4, Func Offset: 0x294
	// Line 1665, Address: 0x17900c, Func Offset: 0x2ac
	// Line 1666, Address: 0x179010, Func Offset: 0x2b0
	// Line 1667, Address: 0x179024, Func Offset: 0x2c4
	// Line 1668, Address: 0x17902c, Func Offset: 0x2cc
	// Line 1669, Address: 0x179038, Func Offset: 0x2d8
	// Line 1670, Address: 0x179044, Func Offset: 0x2e4
	// Line 1671, Address: 0x179074, Func Offset: 0x314
	// Line 1672, Address: 0x179078, Func Offset: 0x318
	// Line 1673, Address: 0x179080, Func Offset: 0x320
	// Line 1674, Address: 0x1790b0, Func Offset: 0x350
	// Line 1675, Address: 0x1790b4, Func Offset: 0x354
	// Line 1677, Address: 0x1790b8, Func Offset: 0x358
	// Line 1678, Address: 0x1790cc, Func Offset: 0x36c
	// Line 1680, Address: 0x1790d0, Func Offset: 0x370
	// Line 1681, Address: 0x179128, Func Offset: 0x3c8
	// Line 1682, Address: 0x179134, Func Offset: 0x3d4
	// Line 1685, Address: 0x179140, Func Offset: 0x3e0
	// Line 1687, Address: 0x179160, Func Offset: 0x400
	// Line 1688, Address: 0x179180, Func Offset: 0x420
	// Line 1689, Address: 0x1791a4, Func Offset: 0x444
	// Line 1690, Address: 0x1791c0, Func Offset: 0x460
	// Line 1691, Address: 0x1791c4, Func Offset: 0x464
	// Line 1695, Address: 0x1791dc, Func Offset: 0x47c
	// Line 1697, Address: 0x1791fc, Func Offset: 0x49c
	// Line 1699, Address: 0x179238, Func Offset: 0x4d8
	// Line 1701, Address: 0x179294, Func Offset: 0x534
	// Line 1703, Address: 0x1792c0, Func Offset: 0x560
	// Line 1705, Address: 0x1792f8, Func Offset: 0x598
	// Line 1706, Address: 0x179340, Func Offset: 0x5e0
	// Line 1707, Address: 0x179354, Func Offset: 0x5f4
	// Line 1711, Address: 0x179364, Func Offset: 0x604
	// Line 1712, Address: 0x17936c, Func Offset: 0x60c
	// Line 1713, Address: 0x1793b0, Func Offset: 0x650
	// Line 1715, Address: 0x1793d4, Func Offset: 0x674
	// Line 1717, Address: 0x1793e8, Func Offset: 0x688
	// Line 1718, Address: 0x17940c, Func Offset: 0x6ac
	// Line 1721, Address: 0x179428, Func Offset: 0x6c8
	// Line 1723, Address: 0x179448, Func Offset: 0x6e8
	// Line 1725, Address: 0x179484, Func Offset: 0x724
	// Line 1727, Address: 0x1794b4, Func Offset: 0x754
	// Line 1729, Address: 0x1794e0, Func Offset: 0x780
	// Line 1731, Address: 0x179518, Func Offset: 0x7b8
	// Line 1736, Address: 0x179548, Func Offset: 0x7e8
	// Line 1737, Address: 0x179558, Func Offset: 0x7f8
	// Line 1738, Address: 0x17956c, Func Offset: 0x80c
	// Line 1739, Address: 0x179580, Func Offset: 0x820
	// Line 1741, Address: 0x179588, Func Offset: 0x828
	// Func End, Address: 0x1795b4, Func Offset: 0x854
}

// 
// Start address: 0x1795c0
void sh2gfw_FadeOut_Retain(Q_WORDDATA** ppqwd, int BorW)
{
	int pb;
	int pg;
	int pr;
	int colb;
	int colg;
	int colr;
	FilterParams* pfp;
	Q_WORDDATA* qwd;
	int faderatio;
	int ty;
	int tx;
	int id;
	// Line 1948, Address: 0x1795c0, Func Offset: 0
	// Line 1950, Address: 0x1795ec, Func Offset: 0x2c
	// Line 1952, Address: 0x1795f0, Func Offset: 0x30
	// Line 1957, Address: 0x1795fc, Func Offset: 0x3c
	// Line 1958, Address: 0x179600, Func Offset: 0x40
	// Line 1968, Address: 0x179604, Func Offset: 0x44
	// Line 1969, Address: 0x179610, Func Offset: 0x50
	// Line 1970, Address: 0x179634, Func Offset: 0x74
	// Line 1971, Address: 0x17968c, Func Offset: 0xcc
	// Line 1972, Address: 0x179694, Func Offset: 0xd4
	// Line 1974, Address: 0x1796ec, Func Offset: 0x12c
	// Line 1975, Address: 0x1796f4, Func Offset: 0x134
	// Line 1979, Address: 0x1796f8, Func Offset: 0x138
	// Line 1981, Address: 0x179718, Func Offset: 0x158
	// Line 1982, Address: 0x179730, Func Offset: 0x170
	// Line 1995, Address: 0x17973c, Func Offset: 0x17c
	// Line 2001, Address: 0x179750, Func Offset: 0x190
	// Line 2010, Address: 0x179770, Func Offset: 0x1b0
	// Line 2018, Address: 0x17977c, Func Offset: 0x1bc
	// Line 2021, Address: 0x1797b8, Func Offset: 0x1f8
	// Line 2024, Address: 0x1797c4, Func Offset: 0x204
	// Line 2025, Address: 0x1797e4, Func Offset: 0x224
	// Line 2026, Address: 0x1797ec, Func Offset: 0x22c
	// Line 2027, Address: 0x1797f8, Func Offset: 0x238
	// Line 2030, Address: 0x179808, Func Offset: 0x248
	// Line 2031, Address: 0x179828, Func Offset: 0x268
	// Line 2032, Address: 0x179830, Func Offset: 0x270
	// Line 2033, Address: 0x17983c, Func Offset: 0x27c
	// Line 2034, Address: 0x179844, Func Offset: 0x284
	// Line 2035, Address: 0x179848, Func Offset: 0x288
	// Line 2036, Address: 0x179858, Func Offset: 0x298
	// Line 2038, Address: 0x179864, Func Offset: 0x2a4
	// Line 2041, Address: 0x179870, Func Offset: 0x2b0
	// Line 2044, Address: 0x179884, Func Offset: 0x2c4
	// Line 2048, Address: 0x1798a0, Func Offset: 0x2e0
	// Line 2049, Address: 0x1798c8, Func Offset: 0x308
	// Line 2051, Address: 0x1798e8, Func Offset: 0x328
	// Line 2054, Address: 0x1798f4, Func Offset: 0x334
	// Line 2056, Address: 0x179908, Func Offset: 0x348
	// Line 2058, Address: 0x179928, Func Offset: 0x368
	// Line 2061, Address: 0x179958, Func Offset: 0x398
	// Line 2064, Address: 0x179978, Func Offset: 0x3b8
	// Line 2066, Address: 0x179994, Func Offset: 0x3d4
	// Line 2069, Address: 0x1799c4, Func Offset: 0x404
	// Line 2071, Address: 0x1799e0, Func Offset: 0x420
	// Line 2073, Address: 0x179a00, Func Offset: 0x440
	// Line 2076, Address: 0x179a0c, Func Offset: 0x44c
	// Line 2078, Address: 0x179a28, Func Offset: 0x468
	// Line 2080, Address: 0x179a3c, Func Offset: 0x47c
	// Line 2082, Address: 0x179a58, Func Offset: 0x498
	// Line 2084, Address: 0x179a6c, Func Offset: 0x4ac
	// Line 2089, Address: 0x179a88, Func Offset: 0x4c8
	// Line 2094, Address: 0x179aa4, Func Offset: 0x4e4
	// Line 2095, Address: 0x179abc, Func Offset: 0x4fc
	// Line 2097, Address: 0x179acc, Func Offset: 0x50c
	// Line 2098, Address: 0x179ad8, Func Offset: 0x518
	// Func End, Address: 0x179b04, Func Offset: 0x544
}

// 
// Start address: 0x179b10
void sh2gfw_Filter_Retain(Q_WORDDATA** ppqwd)
{
	int pb;
	int pg;
	int pr;
	int colb;
	int colg;
	int colr;
	FilterParams* pfp;
	Q_WORDDATA* qwd;
	int ty;
	int tx;
	int id;
	// Line 2108, Address: 0x179b10, Func Offset: 0
	// Line 2114, Address: 0x179b2c, Func Offset: 0x1c
	// Line 2119, Address: 0x179b38, Func Offset: 0x28
	// Line 2120, Address: 0x179b3c, Func Offset: 0x2c
	// Line 2131, Address: 0x179b40, Func Offset: 0x30
	// Line 2133, Address: 0x179b60, Func Offset: 0x50
	// Line 2134, Address: 0x179b78, Func Offset: 0x68
	// Line 2147, Address: 0x179b84, Func Offset: 0x74
	// Line 2153, Address: 0x179b98, Func Offset: 0x88
	// Line 2162, Address: 0x179bb8, Func Offset: 0xa8
	// Line 2170, Address: 0x179bc4, Func Offset: 0xb4
	// Line 2174, Address: 0x179c00, Func Offset: 0xf0
	// Line 2175, Address: 0x179c18, Func Offset: 0x108
	// Line 2176, Address: 0x179c24, Func Offset: 0x114
	// Line 2177, Address: 0x179c30, Func Offset: 0x120
	// Line 2179, Address: 0x179c38, Func Offset: 0x128
	// Line 2180, Address: 0x179c40, Func Offset: 0x130
	// Line 2181, Address: 0x179c48, Func Offset: 0x138
	// Line 2186, Address: 0x179c54, Func Offset: 0x144
	// Line 2187, Address: 0x179c74, Func Offset: 0x164
	// Line 2189, Address: 0x179c88, Func Offset: 0x178
	// Line 2192, Address: 0x179c94, Func Offset: 0x184
	// Line 2194, Address: 0x179c9c, Func Offset: 0x18c
	// Line 2196, Address: 0x179cb0, Func Offset: 0x1a0
	// Line 2199, Address: 0x179cd4, Func Offset: 0x1c4
	// Line 2202, Address: 0x179ce8, Func Offset: 0x1d8
	// Line 2204, Address: 0x179cf8, Func Offset: 0x1e8
	// Line 2212, Address: 0x179d1c, Func Offset: 0x20c
	// Line 2213, Address: 0x179d28, Func Offset: 0x218
	// Line 2215, Address: 0x179d30, Func Offset: 0x220
	// Line 2216, Address: 0x179d3c, Func Offset: 0x22c
	// Func End, Address: 0x179d5c, Func Offset: 0x24c
}

// 
// Start address: 0x179d60
int sh2gfw_Fade2(Q_WORDDATA** ppqwd, int mode, int color, int flg)
{
	int ix;
	int ix;
	int ix;
	FilterParams* pfp;
	int colordata[4];
	Q_WORDDATA* qwd;
	int id;
	// Line 2221, Address: 0x179d60, Func Offset: 0
	// Line 2224, Address: 0x179d90, Func Offset: 0x30
	// Line 2225, Address: 0x179d94, Func Offset: 0x34
	// Line 2227, Address: 0x179d9c, Func Offset: 0x3c
	// Line 2228, Address: 0x179db0, Func Offset: 0x50
	// Line 2231, Address: 0x179dbc, Func Offset: 0x5c
	// Line 2238, Address: 0x179ddc, Func Offset: 0x7c
	// Line 2239, Address: 0x179e04, Func Offset: 0xa4
	// Line 2240, Address: 0x179e1c, Func Offset: 0xbc
	// Line 2242, Address: 0x179e30, Func Offset: 0xd0
	// Line 2243, Address: 0x179e3c, Func Offset: 0xdc
	// Line 2247, Address: 0x179e48, Func Offset: 0xe8
	// Line 2250, Address: 0x179e50, Func Offset: 0xf0
	// Line 2252, Address: 0x179e58, Func Offset: 0xf8
	// Line 2253, Address: 0x179e64, Func Offset: 0x104
	// Line 2255, Address: 0x179e68, Func Offset: 0x108
	// Line 2256, Address: 0x179e70, Func Offset: 0x110
	// Line 2260, Address: 0x179e78, Func Offset: 0x118
	// Line 2261, Address: 0x179ea8, Func Offset: 0x148
	// Line 2262, Address: 0x179ed0, Func Offset: 0x170
	// Line 2274, Address: 0x179ee4, Func Offset: 0x184
	// Line 2279, Address: 0x179f00, Func Offset: 0x1a0
	// Line 2283, Address: 0x179f28, Func Offset: 0x1c8
	// Line 2285, Address: 0x179f40, Func Offset: 0x1e0
	// Line 2294, Address: 0x179f48, Func Offset: 0x1e8
	// Line 2296, Address: 0x179f9c, Func Offset: 0x23c
	// Line 2297, Address: 0x179fc4, Func Offset: 0x264
	// Line 2307, Address: 0x179fd8, Func Offset: 0x278
	// Line 2309, Address: 0x17a028, Func Offset: 0x2c8
	// Line 2310, Address: 0x17a050, Func Offset: 0x2f0
	// Line 2318, Address: 0x17a058, Func Offset: 0x2f8
	// Line 2322, Address: 0x17a0a0, Func Offset: 0x340
	// Line 2329, Address: 0x17a0c8, Func Offset: 0x368
	// Line 2331, Address: 0x17a10c, Func Offset: 0x3ac
	// Line 2333, Address: 0x17a130, Func Offset: 0x3d0
	// Line 2337, Address: 0x17a144, Func Offset: 0x3e4
	// Line 2339, Address: 0x17a18c, Func Offset: 0x42c
	// Line 2341, Address: 0x17a1bc, Func Offset: 0x45c
	// Line 2343, Address: 0x17a1f4, Func Offset: 0x494
	// Line 2345, Address: 0x17a220, Func Offset: 0x4c0
	// Line 2350, Address: 0x17a240, Func Offset: 0x4e0
	// Line 2352, Address: 0x17a268, Func Offset: 0x508
	// Line 2353, Address: 0x17a28c, Func Offset: 0x52c
	// Line 2359, Address: 0x17a2a0, Func Offset: 0x540
	// Line 2361, Address: 0x17a2ac, Func Offset: 0x54c
	// Line 2362, Address: 0x17a2b0, Func Offset: 0x550
	// Func End, Address: 0x17a2d8, Func Offset: 0x578
}

// 
// Start address: 0x17a2e0
int sh2gfw_Fade3(Q_WORDDATA** ppqwd, int* color)
{
	FilterParams* pfp;
	Q_WORDDATA* qwd;
	int ty;
	int tx;
	int ix;
	int id;
	// Line 2366, Address: 0x17a2e0, Func Offset: 0
	// Line 2369, Address: 0x17a304, Func Offset: 0x24
	// Line 2370, Address: 0x17a308, Func Offset: 0x28
	// Line 2372, Address: 0x17a30c, Func Offset: 0x2c
	// Line 2376, Address: 0x17a318, Func Offset: 0x38
	// Line 2377, Address: 0x17a338, Func Offset: 0x58
	// Line 2378, Address: 0x17a350, Func Offset: 0x70
	// Line 2390, Address: 0x17a35c, Func Offset: 0x7c
	// Line 2395, Address: 0x17a370, Func Offset: 0x90
	// Line 2399, Address: 0x17a390, Func Offset: 0xb0
	// Line 2403, Address: 0x17a3a0, Func Offset: 0xc0
	// Line 2405, Address: 0x17a3b8, Func Offset: 0xd8
	// Line 2407, Address: 0x17a3cc, Func Offset: 0xec
	// Line 2411, Address: 0x17a3d8, Func Offset: 0xf8
	// Line 2413, Address: 0x17a3f8, Func Offset: 0x118
	// Line 2415, Address: 0x17a410, Func Offset: 0x130
	// Line 2417, Address: 0x17a42c, Func Offset: 0x14c
	// Line 2422, Address: 0x17a440, Func Offset: 0x160
	// Line 2428, Address: 0x17a450, Func Offset: 0x170
	// Line 2429, Address: 0x17a478, Func Offset: 0x198
	// Line 2430, Address: 0x17a490, Func Offset: 0x1b0
	// Line 2432, Address: 0x17a498, Func Offset: 0x1b8
	// Line 2433, Address: 0x17a49c, Func Offset: 0x1bc
	// Line 2434, Address: 0x17a4a4, Func Offset: 0x1c4
	// Line 2437, Address: 0x17a4b0, Func Offset: 0x1d0
	// Line 2440, Address: 0x17a4b4, Func Offset: 0x1d4
	// Line 2441, Address: 0x17a4bc, Func Offset: 0x1dc
	// Line 2447, Address: 0x17a4c4, Func Offset: 0x1e4
	// Line 2449, Address: 0x17a4e4, Func Offset: 0x204
	// Line 2450, Address: 0x17a4fc, Func Offset: 0x21c
	// Line 2461, Address: 0x17a508, Func Offset: 0x228
	// Line 2470, Address: 0x17a51c, Func Offset: 0x23c
	// Line 2471, Address: 0x17a538, Func Offset: 0x258
	// Line 2476, Address: 0x17a544, Func Offset: 0x264
	// Line 2484, Address: 0x17a560, Func Offset: 0x280
	// Line 2487, Address: 0x17a5ac, Func Offset: 0x2cc
	// Line 2492, Address: 0x17a5bc, Func Offset: 0x2dc
	// Line 2493, Address: 0x17a5d0, Func Offset: 0x2f0
	// Line 2494, Address: 0x17a5d8, Func Offset: 0x2f8
	// Line 2505, Address: 0x17a5e0, Func Offset: 0x300
	// Line 2509, Address: 0x17a5e8, Func Offset: 0x308
	// Line 2511, Address: 0x17a5fc, Func Offset: 0x31c
	// Line 2516, Address: 0x17a604, Func Offset: 0x324
	// Line 2518, Address: 0x17a61c, Func Offset: 0x33c
	// Line 2521, Address: 0x17a648, Func Offset: 0x368
	// Line 2523, Address: 0x17a668, Func Offset: 0x388
	// Line 2526, Address: 0x17a674, Func Offset: 0x394
	// Line 2531, Address: 0x17a688, Func Offset: 0x3a8
	// Line 2532, Address: 0x17a6a0, Func Offset: 0x3c0
	// Line 2533, Address: 0x17a6ac, Func Offset: 0x3cc
	// Line 2534, Address: 0x17a6b8, Func Offset: 0x3d8
	// Line 2536, Address: 0x17a6c4, Func Offset: 0x3e4
	// Line 2539, Address: 0x17a6fc, Func Offset: 0x41c
	// Line 2544, Address: 0x17a71c, Func Offset: 0x43c
	// Line 2545, Address: 0x17a734, Func Offset: 0x454
	// Line 2546, Address: 0x17a740, Func Offset: 0x460
	// Line 2547, Address: 0x17a74c, Func Offset: 0x46c
	// Line 2549, Address: 0x17a758, Func Offset: 0x478
	// Line 2550, Address: 0x17a790, Func Offset: 0x4b0
	// Line 2551, Address: 0x17a7a0, Func Offset: 0x4c0
	// Line 2552, Address: 0x17a7b4, Func Offset: 0x4d4
	// Line 2556, Address: 0x17a7bc, Func Offset: 0x4dc
	// Line 2562, Address: 0x17a7d8, Func Offset: 0x4f8
	// Line 2563, Address: 0x17a7e8, Func Offset: 0x508
	// Line 2566, Address: 0x17a7f0, Func Offset: 0x510
	// Line 2568, Address: 0x17a7f4, Func Offset: 0x514
	// Line 2578, Address: 0x17a800, Func Offset: 0x520
	// Line 2579, Address: 0x17a804, Func Offset: 0x524
	// Func End, Address: 0x17a828, Func Offset: 0x548
}

// 
// Start address: 0x17a830
void sh2gfw_Set_FadeOutRetain_Black(float ra)
{
	FilterParams* pfp;
	// Line 2781, Address: 0x17a830, Func Offset: 0
	// Line 2782, Address: 0x17a844, Func Offset: 0x14
	// Line 2783, Address: 0x17a850, Func Offset: 0x20
	// Line 2784, Address: 0x17a85c, Func Offset: 0x2c
	// Line 2786, Address: 0x17a86c, Func Offset: 0x3c
	// Line 2787, Address: 0x17a8b4, Func Offset: 0x84
	// Line 2788, Address: 0x17a8d0, Func Offset: 0xa0
	// Line 2789, Address: 0x17a8d4, Func Offset: 0xa4
	// Func End, Address: 0x17a8ec, Func Offset: 0xbc
}

// 
// Start address: 0x17a8f0
void sh2gfw_Set_FadeOut_Black(float ra)
{
	FilterParams* pfp;
	// Line 2796, Address: 0x17a8f0, Func Offset: 0
	// Line 2797, Address: 0x17a904, Func Offset: 0x14
	// Line 2798, Address: 0x17a910, Func Offset: 0x20
	// Line 2799, Address: 0x17a91c, Func Offset: 0x2c
	// Line 2802, Address: 0x17a92c, Func Offset: 0x3c
	// Line 2803, Address: 0x17a974, Func Offset: 0x84
	// Line 2804, Address: 0x17a984, Func Offset: 0x94
	// Line 2805, Address: 0x17a988, Func Offset: 0x98
	// Line 2806, Address: 0x17a9a0, Func Offset: 0xb0
	// Func End, Address: 0x17a9b8, Func Offset: 0xc8
}

// 
// Start address: 0x17a9c0
void sh2gfw_Set_FadeOutRetain_White(float ra)
{
	FilterParams* pfp;
	// Line 2813, Address: 0x17a9c0, Func Offset: 0
	// Line 2814, Address: 0x17a9d4, Func Offset: 0x14
	// Line 2815, Address: 0x17a9e0, Func Offset: 0x20
	// Line 2816, Address: 0x17a9ec, Func Offset: 0x2c
	// Line 2819, Address: 0x17a9fc, Func Offset: 0x3c
	// Line 2820, Address: 0x17aa44, Func Offset: 0x84
	// Line 2821, Address: 0x17aa60, Func Offset: 0xa0
	// Line 2824, Address: 0x17aa64, Func Offset: 0xa4
	// Func End, Address: 0x17aa7c, Func Offset: 0xbc
}

// 
// Start address: 0x17aa80
void sh2gfw_Set_FadeOutRetain_Red(float ra)
{
	FilterParams* pfp;
	// Line 2832, Address: 0x17aa80, Func Offset: 0
	// Line 2833, Address: 0x17aa94, Func Offset: 0x14
	// Line 2834, Address: 0x17aaa0, Func Offset: 0x20
	// Line 2835, Address: 0x17aaac, Func Offset: 0x2c
	// Line 2837, Address: 0x17aabc, Func Offset: 0x3c
	// Line 2838, Address: 0x17ab04, Func Offset: 0x84
	// Line 2839, Address: 0x17ab20, Func Offset: 0xa0
	// Line 2841, Address: 0x17ab24, Func Offset: 0xa4
	// Func End, Address: 0x17ab3c, Func Offset: 0xbc
}

// 
// Start address: 0x17ab40
void sh2gfw_Set_FadeOut_White(float ra)
{
	FilterParams* pfp;
	// Line 2848, Address: 0x17ab40, Func Offset: 0
	// Line 2849, Address: 0x17ab54, Func Offset: 0x14
	// Line 2850, Address: 0x17ab60, Func Offset: 0x20
	// Line 2851, Address: 0x17ab6c, Func Offset: 0x2c
	// Line 2854, Address: 0x17ab7c, Func Offset: 0x3c
	// Line 2855, Address: 0x17abc4, Func Offset: 0x84
	// Line 2856, Address: 0x17abd4, Func Offset: 0x94
	// Line 2857, Address: 0x17abd8, Func Offset: 0x98
	// Line 2859, Address: 0x17abf0, Func Offset: 0xb0
	// Func End, Address: 0x17ac08, Func Offset: 0xc8
}

// 
// Start address: 0x17ac10
void sh2gfw_Set_FadeIn_Black(float ra)
{
	FilterParams* pfp;
	// Line 2867, Address: 0x17ac10, Func Offset: 0
	// Line 2868, Address: 0x17ac24, Func Offset: 0x14
	// Line 2869, Address: 0x17ac30, Func Offset: 0x20
	// Line 2870, Address: 0x17ac3c, Func Offset: 0x2c
	// Line 2876, Address: 0x17ac44, Func Offset: 0x34
	// Line 2877, Address: 0x17ac8c, Func Offset: 0x7c
	// Line 2878, Address: 0x17ac9c, Func Offset: 0x8c
	// Line 2879, Address: 0x17aca0, Func Offset: 0x90
	// Line 2880, Address: 0x17acb8, Func Offset: 0xa8
	// Func End, Address: 0x17acd0, Func Offset: 0xc0
}

// 
// Start address: 0x17acd0
void sh2gfw_Set_FadeIn_White(float ra)
{
	FilterParams* pfp;
	// Line 2888, Address: 0x17acd0, Func Offset: 0
	// Line 2889, Address: 0x17ace4, Func Offset: 0x14
	// Line 2890, Address: 0x17acf0, Func Offset: 0x20
	// Line 2891, Address: 0x17acfc, Func Offset: 0x2c
	// Line 2895, Address: 0x17ad04, Func Offset: 0x34
	// Line 2896, Address: 0x17ad4c, Func Offset: 0x7c
	// Line 2897, Address: 0x17ad5c, Func Offset: 0x8c
	// Line 2898, Address: 0x17ad60, Func Offset: 0x90
	// Line 2900, Address: 0x17ad78, Func Offset: 0xa8
	// Func End, Address: 0x17ad90, Func Offset: 0xc0
}

// 
// Start address: 0x17ad90
void sh2gfw_Set_FadeIn_Red(float ra)
{
	FilterParams* pfp;
	// Line 2908, Address: 0x17ad90, Func Offset: 0
	// Line 2909, Address: 0x17ada4, Func Offset: 0x14
	// Line 2910, Address: 0x17adb0, Func Offset: 0x20
	// Line 2911, Address: 0x17adbc, Func Offset: 0x2c
	// Line 2913, Address: 0x17adc4, Func Offset: 0x34
	// Line 2914, Address: 0x17ae0c, Func Offset: 0x7c
	// Line 2915, Address: 0x17ae1c, Func Offset: 0x8c
	// Line 2916, Address: 0x17ae20, Func Offset: 0x90
	// Line 2917, Address: 0x17ae38, Func Offset: 0xa8
	// Func End, Address: 0x17ae50, Func Offset: 0xc0
}

// 
// Start address: 0x17ae50
void sh2gfw_Set_FilterBlur(int rt)
{
	FilterParams* pfp;
	// Line 2924, Address: 0x17ae50, Func Offset: 0
	// Line 2925, Address: 0x17ae60, Func Offset: 0x10
	// Line 2926, Address: 0x17ae68, Func Offset: 0x18
	// Line 2927, Address: 0x17ae74, Func Offset: 0x24
	// Line 2928, Address: 0x17ae78, Func Offset: 0x28
	// Func End, Address: 0x17ae8c, Func Offset: 0x3c
}

// 
// Start address: 0x17ae90
void sh2gfw_Set_PauseRetain()
{
	FilterParams* pfp;
	// Line 2951, Address: 0x17ae90, Func Offset: 0
	// Line 2956, Address: 0x17ae98, Func Offset: 0x8
	// Line 2957, Address: 0x17aeac, Func Offset: 0x1c
	// Line 2958, Address: 0x17aeb4, Func Offset: 0x24
	// Line 2959, Address: 0x17aec4, Func Offset: 0x34
	// Line 2962, Address: 0x17aed0, Func Offset: 0x40
	// Func End, Address: 0x17aee0, Func Offset: 0x50
}

// 
// Start address: 0x17aee0
void sh2gfw_Reset_PauseRetain()
{
	FilterParams* pfp;
	// Line 2965, Address: 0x17aee0, Func Offset: 0
	// Line 2966, Address: 0x17aee8, Func Offset: 0x8
	// Line 2967, Address: 0x17aefc, Func Offset: 0x1c
	// Line 2968, Address: 0x17af04, Func Offset: 0x24
	// Line 2969, Address: 0x17af14, Func Offset: 0x34
	// Line 2971, Address: 0x17af20, Func Offset: 0x40
	// Func End, Address: 0x17af30, Func Offset: 0x50
}

// 
// Start address: 0x17af30
void sh2gfw_Reset_FilterCommand()
{
	FilterParams* pfp;
	int ss;
	int kk;
	int mm;
	// Line 2993, Address: 0x17af30, Func Offset: 0
	// Line 2994, Address: 0x17af48, Func Offset: 0x18
	// Line 2995, Address: 0x17af50, Func Offset: 0x20
	// Line 2997, Address: 0x17af58, Func Offset: 0x28
	// Line 2999, Address: 0x17af64, Func Offset: 0x34
	// Line 3001, Address: 0x17af68, Func Offset: 0x38
	// Line 3003, Address: 0x17af80, Func Offset: 0x50
	// Line 3004, Address: 0x17af88, Func Offset: 0x58
	// Line 3005, Address: 0x17af90, Func Offset: 0x60
	// Line 3007, Address: 0x17af94, Func Offset: 0x64
	// Func End, Address: 0x17afb4, Func Offset: 0x84
}

// 
// Start address: 0x17afc0
int sh2gfw_Get_FilterCommand()
{
	// Line 3015, Address: 0x17afc0, Func Offset: 0
	// Line 3016, Address: 0x17afc8, Func Offset: 0x8
	// Func End, Address: 0x17afd0, Func Offset: 0x10
}

// 
// Start address: 0x17afd0
void* sh2gfw_Get_FilterCommandParams()
{
	// Line 3024, Address: 0x17afd0, Func Offset: 0
	// Line 3025, Address: 0x17afd8, Func Offset: 0x8
	// Func End, Address: 0x17afe0, Func Offset: 0x10
}

// 
// Start address: 0x17afe0
int sh2gfw_Set_CaptureNowFB()
{
	FilterParams* pfp;
	// Line 3032, Address: 0x17afe0, Func Offset: 0
	// Line 3033, Address: 0x17afe8, Func Offset: 0x8
	// Line 3034, Address: 0x17aff0, Func Offset: 0x10
	// Line 3035, Address: 0x17affc, Func Offset: 0x1c
	// Line 3036, Address: 0x17b004, Func Offset: 0x24
	// Line 3037, Address: 0x17b008, Func Offset: 0x28
	// Func End, Address: 0x17b018, Func Offset: 0x38
}

// 
// Start address: 0x17b020
void Exec_PostDraw_OVfunc()
{
	// Line 3046, Address: 0x17b020, Func Offset: 0
	// Line 3047, Address: 0x17b028, Func Offset: 0x8
	// Line 3048, Address: 0x17b050, Func Offset: 0x30
	// Line 3050, Address: 0x17b058, Func Offset: 0x38
	// Func End, Address: 0x17b068, Func Offset: 0x48
}

// 
// Start address: 0x17b070
int Check_Filter_Soft()
{
	// Line 3056, Address: 0x17b070, Func Offset: 0
	// Line 3059, Address: 0x17b090, Func Offset: 0x20
	// Line 3062, Address: 0x17b0a8, Func Offset: 0x38
	// Line 3064, Address: 0x17b0ac, Func Offset: 0x3c
	// Func End, Address: 0x17b0b4, Func Offset: 0x44
}

// 
// Start address: 0x17b0c0
void DemoFadeDraw2()
{
	int id;
	Q_WORDDATA KARI_OBI[16];
	// Line 3069, Address: 0x17b0c0, Func Offset: 0
	// Line 3075, Address: 0x17b0c8, Func Offset: 0x8
	// Line 3076, Address: 0x17b0f8, Func Offset: 0x38
	// Line 3086, Address: 0x17b120, Func Offset: 0x60
	// Line 3087, Address: 0x17b13c, Func Offset: 0x7c
	// Line 3089, Address: 0x17b154, Func Offset: 0x94
	// Line 3091, Address: 0x17b160, Func Offset: 0xa0
	// Line 3092, Address: 0x17b168, Func Offset: 0xa8
	// Line 3093, Address: 0x17b170, Func Offset: 0xb0
	// Line 3094, Address: 0x17b178, Func Offset: 0xb8
	// Line 3095, Address: 0x17b184, Func Offset: 0xc4
	// Line 3096, Address: 0x17b1a4, Func Offset: 0xe4
	// Line 3098, Address: 0x17b1c0, Func Offset: 0x100
	// Line 3100, Address: 0x17b1d8, Func Offset: 0x118
	// Line 3101, Address: 0x17b1e0, Func Offset: 0x120
	// Line 3102, Address: 0x17b1e8, Func Offset: 0x128
	// Line 3103, Address: 0x17b1f0, Func Offset: 0x130
	// Line 3104, Address: 0x17b1f8, Func Offset: 0x138
	// Line 3105, Address: 0x17b200, Func Offset: 0x140
	// Line 3106, Address: 0x17b21c, Func Offset: 0x15c
	// Line 3107, Address: 0x17b238, Func Offset: 0x178
	// Line 3108, Address: 0x17b244, Func Offset: 0x184
	// Line 3109, Address: 0x17b24c, Func Offset: 0x18c
	// Line 3110, Address: 0x17b254, Func Offset: 0x194
	// Line 3112, Address: 0x17b25c, Func Offset: 0x19c
	// Line 3113, Address: 0x17b26c, Func Offset: 0x1ac
	// Func End, Address: 0x17b27c, Func Offset: 0x1bc
}

// 
// Start address: 0x17b280
void Make_Filter_Packet(void* pb)
{
	int col[4];
	int col[4];
	FilterParams* pfp;
	Q_WORDDATA* qwd;
	// Line 3277, Address: 0x17b280, Func Offset: 0
	// Line 3278, Address: 0x17b28c, Func Offset: 0xc
	// Line 3279, Address: 0x17b290, Func Offset: 0x10
	// Line 3281, Address: 0x17b29c, Func Offset: 0x1c
	// Line 3282, Address: 0x17b2a8, Func Offset: 0x28
	// Line 3283, Address: 0x17b2b8, Func Offset: 0x38
	// Line 3284, Address: 0x17b2c8, Func Offset: 0x48
	// Line 3285, Address: 0x17b2d4, Func Offset: 0x54
	// Line 3291, Address: 0x17b2d8, Func Offset: 0x58
	// Line 3293, Address: 0x17b308, Func Offset: 0x88
	// Line 3294, Address: 0x17b314, Func Offset: 0x94
	// Line 3295, Address: 0x17b320, Func Offset: 0xa0
	// Line 3297, Address: 0x17b344, Func Offset: 0xc4
	// Line 3300, Address: 0x17b34c, Func Offset: 0xcc
	// Line 3301, Address: 0x17b358, Func Offset: 0xd8
	// Line 3302, Address: 0x17b364, Func Offset: 0xe4
	// Line 3307, Address: 0x17b380, Func Offset: 0x100
	// Line 3312, Address: 0x17b388, Func Offset: 0x108
	// Line 3313, Address: 0x17b394, Func Offset: 0x114
	// Line 3316, Address: 0x17b39c, Func Offset: 0x11c
	// Line 3317, Address: 0x17b3a8, Func Offset: 0x128
	// Line 3318, Address: 0x17b3b4, Func Offset: 0x134
	// Line 3319, Address: 0x17b3c4, Func Offset: 0x144
	// Line 3321, Address: 0x17b3cc, Func Offset: 0x14c
	// Line 3322, Address: 0x17b3d8, Func Offset: 0x158
	// Line 3323, Address: 0x17b3e4, Func Offset: 0x164
	// Line 3327, Address: 0x17b404, Func Offset: 0x184
	// Line 3329, Address: 0x17b40c, Func Offset: 0x18c
	// Line 3330, Address: 0x17b418, Func Offset: 0x198
	// Line 3331, Address: 0x17b424, Func Offset: 0x1a4
	// Line 3335, Address: 0x17b440, Func Offset: 0x1c0
	// Line 3338, Address: 0x17b448, Func Offset: 0x1c8
	// Line 3339, Address: 0x17b460, Func Offset: 0x1e0
	// Line 3341, Address: 0x17b468, Func Offset: 0x1e8
	// Line 3342, Address: 0x17b478, Func Offset: 0x1f8
	// Line 3344, Address: 0x17b480, Func Offset: 0x200
	// Line 3345, Address: 0x17b498, Func Offset: 0x218
	// Line 3347, Address: 0x17b4a0, Func Offset: 0x220
	// Line 3348, Address: 0x17b4b0, Func Offset: 0x230
	// Line 3350, Address: 0x17b4b8, Func Offset: 0x238
	// Line 3351, Address: 0x17b4c8, Func Offset: 0x248
	// Line 3355, Address: 0x17b4d0, Func Offset: 0x250
	// Line 3356, Address: 0x17b4d4, Func Offset: 0x254
	// Line 3357, Address: 0x17b4d8, Func Offset: 0x258
	// Line 3358, Address: 0x17b4f0, Func Offset: 0x270
	// Line 3360, Address: 0x17b4f8, Func Offset: 0x278
	// Line 3361, Address: 0x17b4fc, Func Offset: 0x27c
	// Line 3362, Address: 0x17b500, Func Offset: 0x280
	// Line 3363, Address: 0x17b518, Func Offset: 0x298
	// Line 3365, Address: 0x17b520, Func Offset: 0x2a0
	// Line 3366, Address: 0x17b524, Func Offset: 0x2a4
	// Line 3367, Address: 0x17b528, Func Offset: 0x2a8
	// Line 3368, Address: 0x17b53c, Func Offset: 0x2bc
	// Line 3370, Address: 0x17b54c, Func Offset: 0x2cc
	// Line 3373, Address: 0x17b554, Func Offset: 0x2d4
	// Line 3374, Address: 0x17b560, Func Offset: 0x2e0
	// Line 3382, Address: 0x17b568, Func Offset: 0x2e8
	// Line 3383, Address: 0x17b574, Func Offset: 0x2f4
	// Line 3386, Address: 0x17b580, Func Offset: 0x300
	// Line 3388, Address: 0x17b5ac, Func Offset: 0x32c
	// Line 3390, Address: 0x17b5d8, Func Offset: 0x358
	// Line 3392, Address: 0x17b5e0, Func Offset: 0x360
	// Line 3393, Address: 0x17b5f8, Func Offset: 0x378
	// Line 3400, Address: 0x17b600, Func Offset: 0x380
	// Line 3404, Address: 0x17b620, Func Offset: 0x3a0
	// Line 3407, Address: 0x17b63c, Func Offset: 0x3bc
	// Line 3409, Address: 0x17b668, Func Offset: 0x3e8
	// Line 3410, Address: 0x17b680, Func Offset: 0x400
	// Line 3412, Address: 0x17b688, Func Offset: 0x408
	// Line 3413, Address: 0x17b6a0, Func Offset: 0x420
	// Line 3415, Address: 0x17b6a8, Func Offset: 0x428
	// Line 3416, Address: 0x17b6bc, Func Offset: 0x43c
	// Line 3425, Address: 0x17b6cc, Func Offset: 0x44c
	// Func End, Address: 0x17b6e0, Func Offset: 0x460
}

