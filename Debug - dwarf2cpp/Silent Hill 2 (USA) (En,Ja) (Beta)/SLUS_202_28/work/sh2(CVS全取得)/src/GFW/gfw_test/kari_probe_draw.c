typedef struct _anon0;
typedef struct FilterParams;
typedef struct shBattleShot;
typedef union Q_WORDDATA;
typedef struct _anon1;
typedef struct sh2gfw_GSREGS_HEAD;
typedef struct sh2gfw_POINTL_MATRIX;
typedef struct shGsLoopEnv;
typedef struct sh2gfw_TEX_HEAD;
typedef struct _anon2;
typedef struct sh2gfw_CLUTS_HEAD;
typedef struct _anon3;
typedef struct sh2gfw_GIFTAG_HEAD;
typedef struct sh2gfw_AREA_HEAD;
typedef struct _anon4;
typedef struct shGsTinyDrawEnv;
typedef struct sh2gfw_BLOCK_HEAD;
typedef struct _anon5;
typedef struct sh2gfw_Env_ctl;
typedef struct _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef struct shAttackInfo;
typedef struct _anon9;
typedef struct shGsAllEnv;
typedef union _anon10;
typedef struct DrawEnvData;
typedef struct PointLightData;
typedef struct LP;
typedef struct SpotLightData;
typedef struct sh2gfw_BLOCKGLOBAL_HEAD;
typedef struct _anon11;
typedef struct _anon12;
typedef struct sh2gfw_BLOCKLOCAL_HEAD;
typedef struct _anon13;
typedef struct _anon14;
typedef struct shGsDrawEnv;
typedef struct sh2gfw_BLOCK_MAN;
typedef struct _anon15;
typedef struct _anon16;
typedef struct _anon17;
typedef struct _anon18;
typedef struct _anon19;
typedef struct shGsStencilDrawEnv;
typedef struct shBattleFight;
typedef struct _anon20;
typedef struct _anon21;
typedef struct sh2gfw_SPOTL_MATRIX;


typedef short type_0[8];
typedef unsigned char type_1[16];
typedef Q_WORDDATA* type_2[4];
typedef char type_3[16];
typedef void* type_4[4];
typedef unsigned int type_5[4];
typedef unsigned long type_6[2];
typedef int type_7[8];
typedef int type_8[8];
typedef char type_9[128];
typedef unsigned int type_10[3];
typedef unsigned int type_11[3];
typedef unsigned int type_12[3];
typedef unsigned char type_13[16];
typedef unsigned int type_14[24];
typedef unsigned char type_15[16];
typedef unsigned int type_16[3];
typedef unsigned int type_17[3];
typedef unsigned short type_18[8];
typedef sh2gfw_GIFTAG_HEAD* type_19[16];
typedef Q_WORDDATA type_20[256];
typedef unsigned char type_21[8];
typedef unsigned char type_22[8][8];
typedef unsigned int type_23[3];
typedef float type_24[4][45];
typedef Q_WORDDATA type_25[3];
typedef unsigned int type_26[3];
typedef float type_27[4];
typedef unsigned char type_28[0];
typedef _anon16 type_29[3];
typedef shGsDrawEnv type_30[3];
typedef sh2gfw_BLOCK_MAN type_31[6];
typedef unsigned char type_32[0];
typedef shGsStencilDrawEnv type_33[3];
typedef shGsTinyDrawEnv type_34[6];
typedef Q_WORDDATA type_35[10];
typedef Q_WORDDATA type_36[10];
typedef Q_WORDDATA type_37[10];
typedef Q_WORDDATA type_38[10];
typedef Q_WORDDATA type_39[10];
typedef Q_WORDDATA type_40[10];
typedef Q_WORDDATA type_41[10];
typedef shAttackInfo type_42[66];
typedef float type_43[4][3];
typedef Q_WORDDATA type_44[8];
typedef Q_WORDDATA type_45[2];
typedef float type_46[4][3];
typedef Q_WORDDATA type_47[2];
typedef float type_48[4];
typedef unsigned short type_49[3];
typedef Q_WORDDATA type_50[2];
typedef unsigned short type_51[4];
typedef unsigned short type_52[3];
typedef float type_53[4][4];
typedef Q_WORDDATA type_54[2];
typedef Q_WORDDATA type_55[48];
typedef Q_WORDDATA type_56[2];
typedef Q_WORDDATA type_57[2];
typedef Q_WORDDATA type_58[2];
typedef Q_WORDDATA type_59[4];
typedef Q_WORDDATA type_60[2];
typedef float type_61[4][2];
typedef Q_WORDDATA type_62[2];
typedef int type_63[8];
typedef Q_WORDDATA type_64[5];
typedef Q_WORDDATA type_65[2];
typedef Q_WORDDATA type_66[2];
typedef Q_WORDDATA type_67[2];
typedef Q_WORDDATA type_68[5];
typedef Q_WORDDATA type_69[2];
typedef sh2gfw_GSREGS_HEAD* type_70[4];
typedef Q_WORDDATA type_71[2];
typedef sh2gfw_GIFTAG_HEAD* type_72[16];
typedef unsigned char* type_73[3];
typedef sh2gfw_GIFTAG_HEAD* type_74[16][4];
typedef Q_WORDDATA type_75[2];
typedef unsigned short type_76[8];
typedef Q_WORDDATA type_77[2];
typedef unsigned short type_78[8][16];
typedef unsigned short type_79[8][16][4];
typedef Q_WORDDATA type_80[2];
typedef sh2gfw_TEX_HEAD* type_81[4];
typedef Q_WORDDATA type_82[2];
typedef sh2gfw_CLUTS_HEAD* type_83[4];
typedef Q_WORDDATA type_84[2];
typedef unsigned char type_85[4];
typedef unsigned int type_86[4];
typedef Q_WORDDATA type_87[2];
typedef Q_WORDDATA type_88[6];
typedef unsigned char type_89[16];
typedef Q_WORDDATA type_90[2];
typedef unsigned char type_91[16][4];
typedef unsigned short type_92[8];
typedef unsigned char type_93[16];
typedef float type_94[4];
typedef unsigned char type_95[16][16];
typedef unsigned char type_96[16][16][4];
typedef unsigned char type_97[16];
typedef Q_WORDDATA type_98[6];
typedef unsigned char type_99[16];
typedef int type_100[4];

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

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
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

struct sh2gfw_GSREGS_HEAD
{
	unsigned int clutssize;
	unsigned int toNextDATA;
	unsigned int toTexHead;
	unsigned char clutamount;
	unsigned char transamount;
	unsigned char eop_flg;
	unsigned char tr_flg;
	unsigned char fmt[16];
	unsigned char transparency[16];
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

struct sh2gfw_TEX_HEAD
{
	unsigned int texture_no;
	unsigned short x;
	unsigned short y;
	unsigned short w;
	unsigned short h;
	unsigned char color;
	unsigned char padbyte;
	unsigned short importance;
	unsigned int datasize;
	unsigned int allsize;
	unsigned char sendpsm;
	unsigned char drawpsm;
	unsigned char bitshift;
	unsigned char tagpoint;
	unsigned char bitw;
	unsigned char bith;
	unsigned short check;
	Q_WORDDATA giftag;
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

struct sh2gfw_CLUTS_HEAD
{
	unsigned int clutssize;
	unsigned int toGSREGS;
	unsigned int toRawClut;
	unsigned char clutamount;
	unsigned char transcluts;
	unsigned char clw;
	unsigned char clh;
	unsigned char fmt[16];
	unsigned char transparency[16];
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

struct sh2gfw_AREA_HEAD
{
	unsigned int area_id;
	unsigned int toGlobalTexHead;
	unsigned int toGlobalClutsHead;
	unsigned int date;
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

struct sh2gfw_BLOCK_HEAD
{
	unsigned int block_id;
	unsigned int toGlobaldef;
	unsigned int toLocaldef;
	unsigned int toRawblockdataParms;
	unsigned int toLocalTex[3];
	unsigned int toLocalcluts[3];
	unsigned int texnum;
	unsigned char globaltexnum;
	unsigned char transtexnum;
	unsigned char divflg;
	unsigned char padc;
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

struct _anon6
{
	_anon21 testa;
	long testaaddr;
	_anon9 prim;
	long primaddr;
	_anon13 rgbaq;
	long rgbaqaddr;
	_anon4 xyz2a;
	long xyz2aaddr;
	_anon4 xyz2b;
	long xyz2baddr;
	_anon21 testb;
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

union _anon10
{
	shBattleFight fight;
	shBattleShot shot;
};

struct DrawEnvData
{
	int map_id_name;
	char parallelLNum;
	char FakeSpotNum;
	char FakePointNum;
	char pointLNum;
	char spotLNum;
	char NightOrDay;
	short ShadowColor;
	short ShadowForceLightNo;
	short ShadowDarkNess;
	float pLight_Dir0[4];
	float pLight_Col0[4];
	float pLight_Dir1[4];
	float pLight_Col1[4];
	float pLight_Dir2[4];
	float pLight_Col2[4];
	float SpotCol0[4];
	float SpotDecayParm0[4];
	float SpotParm[4];
	float FogParm[4];
	float Ld_0[4];
	float Ld_1[4];
	float Ld_2[4];
	float Ld_3[4];
	float Ld_4[4];
	float Ld_5[4];
	float Ld_6[4];
	float Ld_7[4];
	float Ld_8[4];
	float Ld_9[4];
	float Ld_A[4];
	float Ld_B[4];
	float Ld_C[4];
	float Ld_D[4];
	float Ld_E[4];
	float MoveFogCol[4];
	float Ambient[4];
	float BaseAmbient[4];
	float BaseColor[4];
	float VertexAmbient[4];
};

struct PointLightData
{
	float Col[4];
	float DecayParm[4];
	float Pos[4];
};

struct LP
{
	float pldir[4];
	float uga[4];
	float poi[4];
	float col[4];
};

struct SpotLightData
{
	float Col[4];
	float DecayParm[4];
	float Pos[4];
	float Dir[4];
};

struct sh2gfw_BLOCKGLOBAL_HEAD
{
	unsigned int gsregsamount;
	unsigned int transamount;
	unsigned char gtexnum;
	unsigned char gtransnum;
	unsigned short pads;
	unsigned int pad2;
};

struct _anon11
{
	struct
	{
		unsigned long DTHE : 1;
		unsigned long pad01 : 63;
	};
};

struct _anon12
{
	struct
	{
		unsigned long AC : 1;
		unsigned long pad01 : 63;
	};
};

struct sh2gfw_BLOCKLOCAL_HEAD
{
	unsigned short gsregsamount[3];
	unsigned short transamount[3];
	unsigned short ltexnum;
	unsigned short pads;
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

struct shGsDrawEnv
{
	_anon0 giftag;
	_anon19 draw;
	Q_WORDDATA drawq2[5];
	_anon6 clear;
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

struct sh2gfw_BLOCK_MAN
{
	sh2gfw_AREA_HEAD* pA_H;
	sh2gfw_BLOCK_HEAD* pB_H;
	sh2gfw_BLOCKGLOBAL_HEAD* pBG_H;
	sh2gfw_BLOCKLOCAL_HEAD* pBL_H;
	sh2gfw_GSREGS_HEAD* pGSREGS_H[4];
	sh2gfw_GIFTAG_HEAD* pGIF_H[16][4];
	unsigned short idVU_tag[8][16][4];
	sh2gfw_TEX_HEAD* pLTEX_H[4];
	sh2gfw_CLUTS_HEAD* pLCLUT_H[4];
	unsigned char gifnum[4];
	unsigned char vunum[16][4];
	unsigned char geom_amount[16][16][4];
	short texnum;
	short blockid;
	int ObjCondition;
	Q_WORDDATA* p_Matrices;
	void* pTexMAN[4];
	Q_WORDDATA* pBlockPack[4];
	unsigned int bp_leng[4];
	int vif1mark[8];
	int slotid[8];
	sh2gfw_GSREGS_HEAD* pTR_GSREGS_H;
	sh2gfw_TEX_HEAD* pTR_LTEX_H;
	sh2gfw_CLUTS_HEAD* pTR_LCLUT_H;
	void* pTR_TexMAN;
	void* pKT_GTR;
	void* pKT_LTR;
	short tr_gbl_gifnum;
	short tr_gifnum;
	unsigned char tr_gbl_vunum;
	unsigned char tr_vunum;
	unsigned char view_clip_flg;
	unsigned char view_tile;
	sh2gfw_GIFTAG_HEAD* pTR_GIF_H[16];
	unsigned char tileViewClipInfo[8][8];
	float Local_World[4][4];
	float World_Local[4][4];
	Q_WORDDATA calc_parms[3];
	Q_WORDDATA bitmsk_data;
	_anon14 blk_LightData;
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

struct _anon16
{
	_anon18 pmode;
	_anon3 smode2;
	_anon20 dispfb;
	_anon5 display;
	_anon7 bgcolor;
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
	_anon17 frame1;
	unsigned long frame1addr;
	_anon8 zbuf1;
	long zbuf1addr;
	_anon2 xyoffset1;
	long xyoffset1addr;
	_anon15 scissor1;
	long scissor1addr;
	_anon12 prmodecont;
	long prmodecontaddr;
	_anon1 colclamp;
	long colclampaddr;
	_anon11 dthe;
	long dtheaddr;
	_anon21 test1;
	long test1addr;
};

struct shGsStencilDrawEnv
{
	_anon0 giftag;
	_anon19 draw;
	Q_WORDDATA alpha1;
	Q_WORDDATA drawq2[6];
	_anon6 clear;
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

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
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

struct sh2gfw_SPOTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA dirvec;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
};

shAttackInfo sh2_attack_list[66];
float probe_model[4][45];
Q_WORDDATA noise_clut[4];
shGsAllEnv shGs_AllEnv;
sh2gfw_Env_ctl Env_ctl;
Q_WORDDATA dumqwd[256];
unsigned char shDBG_font8_tex[0];
unsigned char shDBG_font8_clut[0];
float clip_volume[4];
sh2gfw_BLOCK_MAN b_man[6];

void DBG_data_loadGS();
void sh2gfw_Vu0NormalLightPhongMatrix(float m[4], float* l0, float* l1, float* l2, float* eyedir);
void kari_DBG_print_junbi(unsigned long* res);

// 
// Start address: 0x172930
void DBG_data_loadGS()
{
	Q_WORDDATA qwd[48];
	int id;
	// Line 346, Address: 0x172930, Func Offset: 0
	// Line 351, Address: 0x172938, Func Offset: 0x8
	// Line 352, Address: 0x172958, Func Offset: 0x28
	// Line 355, Address: 0x172970, Func Offset: 0x40
	// Line 356, Address: 0x172990, Func Offset: 0x60
	// Line 357, Address: 0x172998, Func Offset: 0x68
	// Line 359, Address: 0x17299c, Func Offset: 0x6c
	// Line 360, Address: 0x1729a4, Func Offset: 0x74
	// Line 361, Address: 0x1729ac, Func Offset: 0x7c
	// Line 363, Address: 0x1729b0, Func Offset: 0x80
	// Line 364, Address: 0x1729b8, Func Offset: 0x88
	// Line 366, Address: 0x1729bc, Func Offset: 0x8c
	// Line 371, Address: 0x1729d4, Func Offset: 0xa4
	// Line 376, Address: 0x172a0c, Func Offset: 0xdc
	// Line 377, Address: 0x172a1c, Func Offset: 0xec
	// Line 380, Address: 0x172a2c, Func Offset: 0xfc
	// Line 381, Address: 0x172a48, Func Offset: 0x118
	// Line 382, Address: 0x172a4c, Func Offset: 0x11c
	// Line 384, Address: 0x172a50, Func Offset: 0x120
	// Line 385, Address: 0x172a54, Func Offset: 0x124
	// Line 386, Address: 0x172a5c, Func Offset: 0x12c
	// Line 388, Address: 0x172a64, Func Offset: 0x134
	// Line 389, Address: 0x172a68, Func Offset: 0x138
	// Line 391, Address: 0x172a6c, Func Offset: 0x13c
	// Line 392, Address: 0x172a7c, Func Offset: 0x14c
	// Line 395, Address: 0x172a9c, Func Offset: 0x16c
	// Line 396, Address: 0x172aac, Func Offset: 0x17c
	// Line 399, Address: 0x172abc, Func Offset: 0x18c
	// Line 400, Address: 0x172ad8, Func Offset: 0x1a8
	// Line 401, Address: 0x172adc, Func Offset: 0x1ac
	// Line 403, Address: 0x172ae0, Func Offset: 0x1b0
	// Line 404, Address: 0x172ae4, Func Offset: 0x1b4
	// Line 405, Address: 0x172ae8, Func Offset: 0x1b8
	// Line 407, Address: 0x172aec, Func Offset: 0x1bc
	// Line 408, Address: 0x172af0, Func Offset: 0x1c0
	// Line 410, Address: 0x172af4, Func Offset: 0x1c4
	// Line 411, Address: 0x172b04, Func Offset: 0x1d4
	// Line 414, Address: 0x172b2c, Func Offset: 0x1fc
	// Line 416, Address: 0x172b3c, Func Offset: 0x20c
	// Line 421, Address: 0x172b4c, Func Offset: 0x21c
	// Line 422, Address: 0x172b68, Func Offset: 0x238
	// Line 423, Address: 0x172b6c, Func Offset: 0x23c
	// Line 425, Address: 0x172b70, Func Offset: 0x240
	// Line 426, Address: 0x172b74, Func Offset: 0x244
	// Line 427, Address: 0x172b7c, Func Offset: 0x24c
	// Line 429, Address: 0x172b84, Func Offset: 0x254
	// Line 430, Address: 0x172b88, Func Offset: 0x258
	// Line 432, Address: 0x172b8c, Func Offset: 0x25c
	// Line 434, Address: 0x172ba0, Func Offset: 0x270
	// Line 437, Address: 0x172bd0, Func Offset: 0x2a0
	// Line 438, Address: 0x172bd8, Func Offset: 0x2a8
	// Line 441, Address: 0x172be0, Func Offset: 0x2b0
	// Line 442, Address: 0x172bec, Func Offset: 0x2bc
	// Line 443, Address: 0x172bf8, Func Offset: 0x2c8
	// Line 444, Address: 0x172c08, Func Offset: 0x2d8
	// Line 445, Address: 0x172c10, Func Offset: 0x2e0
	// Line 446, Address: 0x172c1c, Func Offset: 0x2ec
	// Line 447, Address: 0x172c28, Func Offset: 0x2f8
	// Line 448, Address: 0x172c38, Func Offset: 0x308
	// Line 449, Address: 0x172c44, Func Offset: 0x314
	// Line 451, Address: 0x172c50, Func Offset: 0x320
	// Func End, Address: 0x172c60, Func Offset: 0x330
}

// 
// Start address: 0x172c60
void sh2gfw_Vu0NormalLightPhongMatrix(float m[4], float* l0, float* l1, float* l2, float* eyedir)
{
	// Line 487, Address: 0x172c60, Func Offset: 0
	// Line 490, Address: 0x172c88, Func Offset: 0x28
	// Line 491, Address: 0x172c90, Func Offset: 0x30
	// Line 492, Address: 0x172ca0, Func Offset: 0x40
	// Line 494, Address: 0x172cb0, Func Offset: 0x50
	// Line 496, Address: 0x172cc0, Func Offset: 0x60
	// Line 498, Address: 0x172cd0, Func Offset: 0x70
	// Func End, Address: 0x172cf0, Func Offset: 0x90
}

// 
// Start address: 0x172cf0
void kari_DBG_print_junbi(unsigned long* res)
{
	SpotLightData* sld;
	PointLightData* pld;
	DrawEnvData* ded;
	FilterParams* pfp;
	int snum;
	int realsnum;
	SpotLightData* sld;
	PointLightData* pld;
	DrawEnvData* ded;
	LP* lp;
	int k1;
	unsigned char* sbb[3];
	int ih;
	int iz;
	int iyy;
	int ix[8];
	int ky;
	int kx;
	int padport;
	unsigned int iy;
	float svt[4];
	char string_buf[128];
	// Line 946, Address: 0x172cf0, Func Offset: 0
	// Line 950, Address: 0x172d18, Func Offset: 0x28
	// Line 951, Address: 0x172d1c, Func Offset: 0x2c
	// Line 953, Address: 0x172d28, Func Offset: 0x38
	// Line 955, Address: 0x172d3c, Func Offset: 0x4c
	// Line 957, Address: 0x172d54, Func Offset: 0x64
	// Line 958, Address: 0x172d70, Func Offset: 0x80
	// Line 959, Address: 0x172d84, Func Offset: 0x94
	// Line 970, Address: 0x172d8c, Func Offset: 0x9c
	// Line 971, Address: 0x172d98, Func Offset: 0xa8
	// Line 977, Address: 0x172dec, Func Offset: 0xfc
	// Line 980, Address: 0x172e00, Func Offset: 0x110
	// Line 981, Address: 0x172e58, Func Offset: 0x168
	// Line 983, Address: 0x172e6c, Func Offset: 0x17c
	// Line 1005, Address: 0x172e78, Func Offset: 0x188
	// Line 1009, Address: 0x172eac, Func Offset: 0x1bc
	// Line 1010, Address: 0x172f04, Func Offset: 0x214
	// Line 1011, Address: 0x172f18, Func Offset: 0x228
	// Line 1014, Address: 0x172f1c, Func Offset: 0x22c
	// Line 1015, Address: 0x172f28, Func Offset: 0x238
	// Line 1017, Address: 0x172f34, Func Offset: 0x244
	// Line 1018, Address: 0x172f50, Func Offset: 0x260
	// Line 1020, Address: 0x172f54, Func Offset: 0x264
	// Line 1021, Address: 0x172f60, Func Offset: 0x270
	// Line 1023, Address: 0x172f6c, Func Offset: 0x27c
	// Line 1025, Address: 0x172fac, Func Offset: 0x2bc
	// Line 1027, Address: 0x172fd0, Func Offset: 0x2e0
	// Line 1028, Address: 0x172fe4, Func Offset: 0x2f4
	// Line 1032, Address: 0x173080, Func Offset: 0x390
	// Line 1034, Address: 0x1730b0, Func Offset: 0x3c0
	// Line 1035, Address: 0x1730b4, Func Offset: 0x3c4
	// Line 1037, Address: 0x1730c4, Func Offset: 0x3d4
	// Line 1038, Address: 0x1730d4, Func Offset: 0x3e4
	// Line 1039, Address: 0x1730d8, Func Offset: 0x3e8
	// Line 1041, Address: 0x1730ec, Func Offset: 0x3fc
	// Line 1067, Address: 0x1730f4, Func Offset: 0x404
	// Line 1074, Address: 0x173150, Func Offset: 0x460
	// Line 1081, Address: 0x173168, Func Offset: 0x478
	// Line 1085, Address: 0x173198, Func Offset: 0x4a8
	// Line 1094, Address: 0x173224, Func Offset: 0x534
	// Line 1097, Address: 0x173238, Func Offset: 0x548
	// Line 1100, Address: 0x173240, Func Offset: 0x550
	// Line 1108, Address: 0x1732b4, Func Offset: 0x5c4
	// Line 1109, Address: 0x1732c8, Func Offset: 0x5d8
	// Line 1113, Address: 0x1732d0, Func Offset: 0x5e0
	// Line 1123, Address: 0x173320, Func Offset: 0x630
	// Line 1125, Address: 0x173334, Func Offset: 0x644
	// Line 1128, Address: 0x17333c, Func Offset: 0x64c
	// Line 1137, Address: 0x173390, Func Offset: 0x6a0
	// Line 1138, Address: 0x1733a4, Func Offset: 0x6b4
	// Line 1141, Address: 0x1733ac, Func Offset: 0x6bc
	// Line 1149, Address: 0x1733e8, Func Offset: 0x6f8
	// Line 1151, Address: 0x1733fc, Func Offset: 0x70c
	// Line 1154, Address: 0x173404, Func Offset: 0x714
	// Line 1162, Address: 0x17340c, Func Offset: 0x71c
	// Line 1164, Address: 0x17341c, Func Offset: 0x72c
	// Line 1170, Address: 0x173480, Func Offset: 0x790
	// Line 1171, Address: 0x173494, Func Offset: 0x7a4
	// Line 1174, Address: 0x1734e4, Func Offset: 0x7f4
	// Line 1176, Address: 0x1734f8, Func Offset: 0x808
	// Line 1184, Address: 0x173500, Func Offset: 0x810
	// Line 1185, Address: 0x173508, Func Offset: 0x818
	// Line 1186, Address: 0x17350c, Func Offset: 0x81c
	// Line 1187, Address: 0x173510, Func Offset: 0x820
	// Line 1188, Address: 0x173524, Func Offset: 0x834
	// Line 1190, Address: 0x173528, Func Offset: 0x838
	// Line 1192, Address: 0x173530, Func Offset: 0x840
	// Line 1193, Address: 0x17354c, Func Offset: 0x85c
	// Line 1194, Address: 0x173550, Func Offset: 0x860
	// Line 1197, Address: 0x173564, Func Offset: 0x874
	// Line 1200, Address: 0x17357c, Func Offset: 0x88c
	// Line 1202, Address: 0x173584, Func Offset: 0x894
	// Line 1205, Address: 0x173598, Func Offset: 0x8a8
	// Line 1206, Address: 0x1735a4, Func Offset: 0x8b4
	// Line 1207, Address: 0x1735ac, Func Offset: 0x8bc
	// Line 1211, Address: 0x1735b8, Func Offset: 0x8c8
	// Line 1213, Address: 0x173608, Func Offset: 0x918
	// Line 1215, Address: 0x173620, Func Offset: 0x930
	// Line 1217, Address: 0x173670, Func Offset: 0x980
	// Line 1219, Address: 0x173688, Func Offset: 0x998
	// Line 1221, Address: 0x1736d8, Func Offset: 0x9e8
	// Line 1223, Address: 0x1736ec, Func Offset: 0x9fc
	// Line 1225, Address: 0x173718, Func Offset: 0xa28
	// Line 1227, Address: 0x17372c, Func Offset: 0xa3c
	// Line 1229, Address: 0x173778, Func Offset: 0xa88
	// Line 1231, Address: 0x17378c, Func Offset: 0xa9c
	// Line 1233, Address: 0x1737d8, Func Offset: 0xae8
	// Line 1237, Address: 0x1737ec, Func Offset: 0xafc
	// Line 1240, Address: 0x1737f4, Func Offset: 0xb04
	// Line 1245, Address: 0x17384c, Func Offset: 0xb5c
	// Line 1248, Address: 0x173860, Func Offset: 0xb70
	// Line 1253, Address: 0x1738b8, Func Offset: 0xbc8
	// Line 1256, Address: 0x1738cc, Func Offset: 0xbdc
	// Line 1261, Address: 0x173924, Func Offset: 0xc34
	// Line 1264, Address: 0x173938, Func Offset: 0xc48
	// Line 1269, Address: 0x173990, Func Offset: 0xca0
	// Line 1271, Address: 0x1739a4, Func Offset: 0xcb4
	// Line 1273, Address: 0x1739ac, Func Offset: 0xcbc
	// Line 1279, Address: 0x1739e0, Func Offset: 0xcf0
	// Line 1280, Address: 0x1739f4, Func Offset: 0xd04
	// Line 1282, Address: 0x1739fc, Func Offset: 0xd0c
	// Line 1283, Address: 0x173a1c, Func Offset: 0xd2c
	// Line 1286, Address: 0x173a30, Func Offset: 0xd40
	// Line 1288, Address: 0x173a3c, Func Offset: 0xd4c
	// Line 1290, Address: 0x173a6c, Func Offset: 0xd7c
	// Line 1292, Address: 0x173a90, Func Offset: 0xda0
	// Line 1293, Address: 0x173aa4, Func Offset: 0xdb4
	// Line 1297, Address: 0x173aac, Func Offset: 0xdbc
	// Line 1299, Address: 0x173acc, Func Offset: 0xddc
	// Line 1301, Address: 0x173ae0, Func Offset: 0xdf0
	// Line 1303, Address: 0x173b04, Func Offset: 0xe14
	// Line 1305, Address: 0x173b18, Func Offset: 0xe28
	// Line 1307, Address: 0x173b3c, Func Offset: 0xe4c
	// Line 1308, Address: 0x173b50, Func Offset: 0xe60
	// Line 1312, Address: 0x173b58, Func Offset: 0xe68
	// Line 1313, Address: 0x173b78, Func Offset: 0xe88
	// Line 1314, Address: 0x173b90, Func Offset: 0xea0
	// Line 1316, Address: 0x173bac, Func Offset: 0xebc
	// Line 1317, Address: 0x173bc0, Func Offset: 0xed0
	// Line 1321, Address: 0x173bc8, Func Offset: 0xed8
	// Line 1322, Address: 0x173bec, Func Offset: 0xefc
	// Line 1323, Address: 0x173c00, Func Offset: 0xf10
	// Line 1329, Address: 0x173c24, Func Offset: 0xf34
	// Line 1331, Address: 0x173c38, Func Offset: 0xf48
	// Line 1333, Address: 0x173c40, Func Offset: 0xf50
	// Line 1335, Address: 0x173c68, Func Offset: 0xf78
	// Line 1336, Address: 0x173c7c, Func Offset: 0xf8c
	// Line 1340, Address: 0x173c84, Func Offset: 0xf94
	// Line 1347, Address: 0x173cc0, Func Offset: 0xfd0
	// Line 1352, Address: 0x173cd4, Func Offset: 0xfe4
	// Line 1358, Address: 0x173cdc, Func Offset: 0xfec
	// Line 1360, Address: 0x173ce4, Func Offset: 0xff4
	// Line 1362, Address: 0x173cf0, Func Offset: 0x1000
	// Line 1363, Address: 0x173cf4, Func Offset: 0x1004
	// Line 1365, Address: 0x173d08, Func Offset: 0x1018
	// Line 1368, Address: 0x173d20, Func Offset: 0x1030
	// Line 1370, Address: 0x173d70, Func Offset: 0x1080
	// Line 1372, Address: 0x173d88, Func Offset: 0x1098
	// Line 1374, Address: 0x173dd8, Func Offset: 0x10e8
	// Line 1376, Address: 0x173df0, Func Offset: 0x1100
	// Line 1378, Address: 0x173e40, Func Offset: 0x1150
	// Line 1380, Address: 0x173e54, Func Offset: 0x1164
	// Line 1382, Address: 0x173ea0, Func Offset: 0x11b0
	// Line 1394, Address: 0x173eb4, Func Offset: 0x11c4
	// Func End, Address: 0x173ee0, Func Offset: 0x11f0
}

