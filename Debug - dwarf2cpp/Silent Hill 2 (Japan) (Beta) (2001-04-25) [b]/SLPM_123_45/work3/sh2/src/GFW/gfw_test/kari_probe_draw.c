typedef union Q_WORDDATA;
typedef struct sh2gfw_GIFTAG_HEAD;
typedef struct _anon0;
typedef struct shGsStencilDrawEnv;
typedef struct sh2gfw_AREA_HEAD;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef struct sh2gfw_BLOCK_HEAD;
typedef struct sh2gfw_Env_ctl;
typedef struct _anon5;
typedef struct _anon6;
typedef struct shGsLoopEnv;
typedef struct _anon7;
typedef struct shBattleFight;
typedef struct _anon8;
typedef struct _anon9;
typedef struct _anon10;
typedef struct shBattleShot;
typedef struct sh2gfw_BLOCKGLOBAL_HEAD;
typedef struct _anon11;
typedef struct shGsTinyDrawEnv;
typedef struct sh2gfw_BLOCKLOCAL_HEAD;
typedef struct sh2gfw_TEX_HEAD;
typedef struct _anon12;
typedef struct shGsAllEnv;
typedef struct sh2gfw_BLOCK_MAN;
typedef struct _anon13;
typedef struct sh2gfw_GSREGS_HEAD;
typedef struct shAttackInfo;
typedef struct _anon14;
typedef struct _anon15;
typedef union _anon16;
typedef struct _anon17;
typedef struct sh2gfw_CLUTS_HEAD;
typedef struct sh2gfw_SPOTL_MATRIX;
typedef struct _anon18;
typedef struct _anon19;
typedef struct sh2gfw_POINTL_MATRIX;
typedef struct _anon20;
typedef struct shGsDrawEnv;
typedef struct _anon21;
typedef struct _anon22;


typedef Q_WORDDATA type_0[2];
typedef Q_WORDDATA type_1[2];
typedef sh2gfw_GIFTAG_HEAD* type_2[16];
typedef Q_WORDDATA type_3[2];
typedef Q_WORDDATA type_4[4];
typedef unsigned char type_5[8];
typedef unsigned char type_6[8][8];
typedef Q_WORDDATA type_7[2];
typedef Q_WORDDATA type_8[2];
typedef Q_WORDDATA type_9[6];
typedef Q_WORDDATA type_10[2];
typedef Q_WORDDATA type_11[3];
typedef Q_WORDDATA type_12[256];
typedef Q_WORDDATA type_13[6];
typedef int type_14[8];
typedef Q_WORDDATA type_15[48];
typedef float type_16[4][45];
typedef unsigned int type_17[3];
typedef char* type_18[2];
typedef unsigned int type_19[3];
typedef float type_20[4];
typedef unsigned int type_21[3];
typedef unsigned int type_22[3];
typedef unsigned char* type_23[3];
typedef unsigned int type_24[3];
typedef unsigned int type_25[24];
typedef unsigned int type_26[3];
typedef unsigned int type_27[3];
typedef unsigned short type_28[8];
typedef sh2gfw_BLOCK_MAN type_29[6];
typedef shAttackInfo type_30[46];
typedef unsigned short type_31[3];
typedef char* type_32[4];
typedef unsigned short type_33[3];
typedef float type_34[4][3];
typedef int type_35[4];
typedef float type_36[4];
typedef float type_37[4][3];
typedef float type_38[4][4];
typedef float type_39[4][2];
typedef unsigned short type_40[4];
typedef _anon6 type_41[3];
typedef shGsDrawEnv type_42[3];
typedef Q_WORDDATA type_43[64];
typedef char type_44[128];
typedef shGsStencilDrawEnv type_45[3];
typedef sh2gfw_GSREGS_HEAD* type_46[4];
typedef shGsTinyDrawEnv type_47[6];
typedef sh2gfw_GIFTAG_HEAD* type_48[16];
typedef sh2gfw_GIFTAG_HEAD* type_49[16][4];
typedef Q_WORDDATA type_50[10];
typedef unsigned short type_51[8];
typedef unsigned short type_52[8][16];
typedef Q_WORDDATA type_53[10];
typedef unsigned short type_54[8][16][4];
typedef Q_WORDDATA type_55[10];
typedef sh2gfw_TEX_HEAD* type_56[4];
typedef Q_WORDDATA type_57[10];
typedef sh2gfw_CLUTS_HEAD* type_58[4];
typedef Q_WORDDATA type_59[10];
typedef unsigned char type_60[4];
typedef Q_WORDDATA type_61[10];
typedef unsigned char type_62[16];
typedef unsigned char type_63[16][4];
typedef Q_WORDDATA type_64[10];
typedef unsigned char type_65[16];
typedef unsigned char type_66[16][16];
typedef Q_WORDDATA type_67[8];
typedef unsigned char type_68[16][16][4];
typedef Q_WORDDATA type_69[2];
typedef Q_WORDDATA type_70[2];
typedef unsigned char type_71[16];
typedef Q_WORDDATA type_72[2];
typedef void* type_73[4];
typedef unsigned char type_74[16];
typedef Q_WORDDATA type_75[2];
typedef char* type_76[11];
typedef Q_WORDDATA* type_77[4];
typedef Q_WORDDATA type_78[2];
typedef unsigned int type_79[4];
typedef Q_WORDDATA type_80[2];
typedef int type_81[8];
typedef int type_82[8];
typedef unsigned int type_83[4];
typedef Q_WORDDATA type_84[2];
typedef unsigned short type_85[8];
typedef Q_WORDDATA type_86[2];
typedef float type_87[4];
typedef Q_WORDDATA type_88[2];
typedef unsigned char type_89[16];
typedef unsigned char type_90[16];
typedef Q_WORDDATA type_91[5];
typedef Q_WORDDATA type_92[2];
typedef int type_93[4];
typedef unsigned char type_94[16];
typedef unsigned char type_95[0];
typedef Q_WORDDATA type_96[2];
typedef short type_97[8];
typedef char type_98[16];
typedef Q_WORDDATA type_99[2];
typedef unsigned char type_100[0];
typedef Q_WORDDATA type_101[5];
typedef unsigned long type_102[2];
typedef Q_WORDDATA type_103[2];
typedef Q_WORDDATA type_104[2];
typedef Q_WORDDATA type_105[2];

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

struct shGsStencilDrawEnv
{
	_anon0 giftag;
	_anon9 draw;
	Q_WORDDATA alpha1;
	Q_WORDDATA drawq2[6];
	_anon17 clear;
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

struct sh2gfw_AREA_HEAD
{
	unsigned int area_id;
	unsigned int toGlobalTexHead;
	unsigned int toGlobalClutsHead;
	unsigned int date;
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
	_anon20 pmode;
	_anon2 smode2;
	_anon21 dispfb;
	_anon7 display;
	_anon8 bgcolor;
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

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
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
	_anon19 frame1;
	unsigned long frame1addr;
	_anon10 zbuf1;
	long zbuf1addr;
	_anon3 xyoffset1;
	long xyoffset1addr;
	_anon18 scissor1;
	long scissor1addr;
	_anon13 prmodecont;
	long prmodecontaddr;
	_anon1 colclamp;
	long colclampaddr;
	_anon14 dthe;
	long dtheaddr;
	_anon22 test1;
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

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
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

struct sh2gfw_BLOCKLOCAL_HEAD
{
	unsigned short gsregsamount[3];
	unsigned short transamount[3];
	unsigned short ltexnum;
	unsigned short pads;
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

struct _anon12
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
	unsigned int texnum;
	unsigned int blockid;
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
	_anon12 blk_LightData;
};

struct _anon13
{
	struct
	{
		unsigned long AC : 1;
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

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon16 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
};

struct _anon14
{
	struct
	{
		unsigned long DTHE : 1;
		unsigned long pad01 : 63;
	};
};

struct _anon15
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

union _anon16
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _anon17
{
	_anon22 testa;
	long testaaddr;
	_anon11 prim;
	long primaddr;
	_anon15 rgbaq;
	long rgbaqaddr;
	_anon5 xyz2a;
	long xyz2aaddr;
	_anon5 xyz2b;
	long xyz2baddr;
	_anon22 testb;
	long testbaddr;
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

struct sh2gfw_SPOTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA spot_rot;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
};

struct _anon18
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

struct _anon19
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

struct sh2gfw_POINTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
};

struct _anon20
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
	_anon0 giftag;
	_anon9 draw;
	Q_WORDDATA drawq2[5];
	_anon17 clear;
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

struct _anon21
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

struct _anon22
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
float probe_model[4][45];
Q_WORDDATA alpha_clut[64];
Q_WORDDATA noise_clut[4];
char* debug_shdstat_tfx[4];
char* debug_shdstat_tcc[2];
char* debug_shdstat_alpha[11];
shGsAllEnv shGs_AllEnv;
sh2gfw_Env_ctl Env_ctl;
Q_WORDDATA dumqwd[256];
unsigned char shDBG_font8_tex[0];
unsigned char shDBG_font8_clut[0];
_anon4 cam0;
sh2gfw_BLOCK_MAN b_man[6];

void kari_test_main();
void DBG_data_loadGS();
Q_WORDDATA* kari_draw_spotprobes(sh2gfw_SPOTL_MATRIX* spm, Q_WORDDATA* sqd);
void sh2gfw_Vu0NormalLightPhongMatrix(float m[4], float* l0, float* l1, float* l2, float* eyedir);
Q_WORDDATA* debug_alpha_draw(unsigned int tbp, unsigned int cbp, unsigned int x, unsigned int y, unsigned int w, unsigned int h, Q_WORDDATA* qwd);
Q_WORDDATA* debug_Z_draw(unsigned int x, unsigned int y, unsigned int w, unsigned int h, Q_WORDDATA* qwd);
Q_WORDDATA* debug_map_draw(unsigned int x, unsigned int y, unsigned int w, unsigned int h, Q_WORDDATA* qwd);
void kari_DBG_print_junbi(unsigned long* res);

// 
// Start address: 0x177790
void kari_test_main()
{
	Q_WORDDATA* qw_Z;
	Q_WORDDATA* qw_dad;
	Q_WORDDATA* qwbuf;
	// Line 270, Address: 0x177790, Func Offset: 0
	// Line 272, Address: 0x1777a4, Func Offset: 0x14
	// Line 278, Address: 0x1777ac, Func Offset: 0x1c
	// Line 282, Address: 0x1777d4, Func Offset: 0x44
	// Line 287, Address: 0x1777ec, Func Offset: 0x5c
	// Line 291, Address: 0x17782c, Func Offset: 0x9c
	// Line 295, Address: 0x177848, Func Offset: 0xb8
	// Line 306, Address: 0x177850, Func Offset: 0xc0
	// Line 307, Address: 0x177888, Func Offset: 0xf8
	// Line 308, Address: 0x177894, Func Offset: 0x104
	// Line 311, Address: 0x17789c, Func Offset: 0x10c
	// Line 313, Address: 0x1778b4, Func Offset: 0x124
	// Line 314, Address: 0x1778f0, Func Offset: 0x160
	// Line 319, Address: 0x17790c, Func Offset: 0x17c
	// Line 320, Address: 0x177918, Func Offset: 0x188
	// Line 332, Address: 0x177924, Func Offset: 0x194
	// Func End, Address: 0x177940, Func Offset: 0x1b0
}

// 
// Start address: 0x177940
void DBG_data_loadGS()
{
	Q_WORDDATA qwd[48];
	int id;
	// Line 340, Address: 0x177940, Func Offset: 0
	// Line 343, Address: 0x177950, Func Offset: 0x10
	// Line 344, Address: 0x177998, Func Offset: 0x58
	// Line 347, Address: 0x1779dc, Func Offset: 0x9c
	// Line 348, Address: 0x177a14, Func Offset: 0xd4
	// Line 349, Address: 0x177a24, Func Offset: 0xe4
	// Line 350, Address: 0x177a30, Func Offset: 0xf0
	// Line 351, Address: 0x177a38, Func Offset: 0xf8
	// Line 352, Address: 0x177a48, Func Offset: 0x108
	// Line 353, Address: 0x177a58, Func Offset: 0x118
	// Line 354, Address: 0x177a68, Func Offset: 0x128
	// Line 355, Address: 0x177a70, Func Offset: 0x130
	// Line 356, Address: 0x177a80, Func Offset: 0x140
	// Line 357, Address: 0x177a8c, Func Offset: 0x14c
	// Line 358, Address: 0x177a90, Func Offset: 0x150
	// Line 359, Address: 0x177ad0, Func Offset: 0x190
	// Line 361, Address: 0x177b34, Func Offset: 0x1f4
	// Line 362, Address: 0x177b7c, Func Offset: 0x23c
	// Line 365, Address: 0x177bc0, Func Offset: 0x280
	// Line 366, Address: 0x177bf4, Func Offset: 0x2b4
	// Line 367, Address: 0x177c04, Func Offset: 0x2c4
	// Line 368, Address: 0x177c10, Func Offset: 0x2d0
	// Line 369, Address: 0x177c14, Func Offset: 0x2d4
	// Line 370, Address: 0x177c24, Func Offset: 0x2e4
	// Line 371, Address: 0x177c34, Func Offset: 0x2f4
	// Line 372, Address: 0x177c44, Func Offset: 0x304
	// Line 373, Address: 0x177c48, Func Offset: 0x308
	// Line 374, Address: 0x177c58, Func Offset: 0x318
	// Line 375, Address: 0x177c64, Func Offset: 0x324
	// Line 376, Address: 0x177c68, Func Offset: 0x328
	// Line 377, Address: 0x177ca4, Func Offset: 0x364
	// Line 380, Address: 0x177d04, Func Offset: 0x3c4
	// Line 381, Address: 0x177d48, Func Offset: 0x408
	// Line 384, Address: 0x177d88, Func Offset: 0x448
	// Line 385, Address: 0x177dbc, Func Offset: 0x47c
	// Line 386, Address: 0x177dcc, Func Offset: 0x48c
	// Line 387, Address: 0x177dd8, Func Offset: 0x498
	// Line 388, Address: 0x177ddc, Func Offset: 0x49c
	// Line 389, Address: 0x177dec, Func Offset: 0x4ac
	// Line 390, Address: 0x177dfc, Func Offset: 0x4bc
	// Line 391, Address: 0x177e0c, Func Offset: 0x4cc
	// Line 392, Address: 0x177e10, Func Offset: 0x4d0
	// Line 393, Address: 0x177e20, Func Offset: 0x4e0
	// Line 394, Address: 0x177e2c, Func Offset: 0x4ec
	// Line 395, Address: 0x177e30, Func Offset: 0x4f0
	// Line 396, Address: 0x177e70, Func Offset: 0x530
	// Line 399, Address: 0x177ed4, Func Offset: 0x594
	// Line 401, Address: 0x177f1c, Func Offset: 0x5dc
	// Line 406, Address: 0x177f60, Func Offset: 0x620
	// Line 407, Address: 0x177f94, Func Offset: 0x654
	// Line 408, Address: 0x177fa4, Func Offset: 0x664
	// Line 409, Address: 0x177fb0, Func Offset: 0x670
	// Line 410, Address: 0x177fb8, Func Offset: 0x678
	// Line 411, Address: 0x177fc8, Func Offset: 0x688
	// Line 412, Address: 0x177fd8, Func Offset: 0x698
	// Line 413, Address: 0x177fe8, Func Offset: 0x6a8
	// Line 414, Address: 0x177ff0, Func Offset: 0x6b0
	// Line 415, Address: 0x178000, Func Offset: 0x6c0
	// Line 416, Address: 0x17800c, Func Offset: 0x6cc
	// Line 417, Address: 0x178014, Func Offset: 0x6d4
	// Line 419, Address: 0x178054, Func Offset: 0x714
	// Line 422, Address: 0x1780b8, Func Offset: 0x778
	// Line 423, Address: 0x1780c4, Func Offset: 0x784
	// Line 426, Address: 0x1780d4, Func Offset: 0x794
	// Line 427, Address: 0x1780e0, Func Offset: 0x7a0
	// Line 428, Address: 0x1780f0, Func Offset: 0x7b0
	// Line 429, Address: 0x178104, Func Offset: 0x7c4
	// Line 430, Address: 0x178110, Func Offset: 0x7d0
	// Line 431, Address: 0x178120, Func Offset: 0x7e0
	// Line 432, Address: 0x178130, Func Offset: 0x7f0
	// Line 433, Address: 0x178140, Func Offset: 0x800
	// Line 434, Address: 0x178150, Func Offset: 0x810
	// Line 435, Address: 0x17815c, Func Offset: 0x81c
	// Func End, Address: 0x178170, Func Offset: 0x830
}

// 
// Start address: 0x178170
Q_WORDDATA* kari_draw_spotprobes(sh2gfw_SPOTL_MATRIX* spm, Q_WORDDATA* sqd)
{
	int i;
	float lwm[4][4];
	float svm[4][4];
	int sv[4];
	Q_WORDDATA giftemp2;
	float tmp[4];
	// Line 442, Address: 0x178170, Func Offset: 0
	// Line 449, Address: 0x17818c, Func Offset: 0x1c
	// Line 458, Address: 0x178194, Func Offset: 0x24
	// Line 461, Address: 0x1781a8, Func Offset: 0x38
	// Line 467, Address: 0x1781b0, Func Offset: 0x40
	// Line 468, Address: 0x1781bc, Func Offset: 0x4c
	// Line 480, Address: 0x1781d0, Func Offset: 0x60
	// Line 483, Address: 0x1781e8, Func Offset: 0x78
	// Line 485, Address: 0x178200, Func Offset: 0x90
	// Line 493, Address: 0x178214, Func Offset: 0xa4
	// Line 496, Address: 0x17822c, Func Offset: 0xbc
	// Line 498, Address: 0x178238, Func Offset: 0xc8
	// Line 500, Address: 0x17824c, Func Offset: 0xdc
	// Line 502, Address: 0x178264, Func Offset: 0xf4
	// Line 527, Address: 0x178284, Func Offset: 0x114
	// Line 528, Address: 0x1782ac, Func Offset: 0x13c
	// Line 530, Address: 0x1782bc, Func Offset: 0x14c
	// Line 531, Address: 0x1782c8, Func Offset: 0x158
	// Line 532, Address: 0x1782e8, Func Offset: 0x178
	// Line 533, Address: 0x1782f0, Func Offset: 0x180
	// Line 534, Address: 0x1782f8, Func Offset: 0x188
	// Line 540, Address: 0x17830c, Func Offset: 0x19c
	// Line 542, Address: 0x178320, Func Offset: 0x1b0
	// Line 545, Address: 0x178324, Func Offset: 0x1b4
	// Func End, Address: 0x178340, Func Offset: 0x1d0
}

// 
// Start address: 0x178340
void sh2gfw_Vu0NormalLightPhongMatrix(float m[4], float* l0, float* l1, float* l2, float* eyedir)
{
	// Line 748, Address: 0x178340, Func Offset: 0
	// Line 751, Address: 0x17835c, Func Offset: 0x1c
	// Line 752, Address: 0x17836c, Func Offset: 0x2c
	// Line 753, Address: 0x178380, Func Offset: 0x40
	// Line 755, Address: 0x178394, Func Offset: 0x54
	// Line 757, Address: 0x1783a8, Func Offset: 0x68
	// Line 759, Address: 0x1783b8, Func Offset: 0x78
	// Func End, Address: 0x1783c8, Func Offset: 0x88
}

// 
// Start address: 0x1783d0
Q_WORDDATA* debug_alpha_draw(unsigned int tbp, unsigned int cbp, unsigned int x, unsigned int y, unsigned int w, unsigned int h, Q_WORDDATA* qwd)
{
	int id;
	// Line 772, Address: 0x1783d0, Func Offset: 0
	// Line 773, Address: 0x1783f4, Func Offset: 0x24
	// Line 778, Address: 0x1783f8, Func Offset: 0x28
	// Line 780, Address: 0x178408, Func Offset: 0x38
	// Line 782, Address: 0x178460, Func Offset: 0x90
	// Line 784, Address: 0x1784b0, Func Offset: 0xe0
	// Line 785, Address: 0x1784c0, Func Offset: 0xf0
	// Line 788, Address: 0x1784dc, Func Offset: 0x10c
	// Line 789, Address: 0x1784f0, Func Offset: 0x120
	// Line 792, Address: 0x17850c, Func Offset: 0x13c
	// Line 795, Address: 0x17858c, Func Offset: 0x1bc
	// Line 798, Address: 0x1785a8, Func Offset: 0x1d8
	// Line 807, Address: 0x1785cc, Func Offset: 0x1fc
	// Line 809, Address: 0x1785ec, Func Offset: 0x21c
	// Line 811, Address: 0x17860c, Func Offset: 0x23c
	// Line 812, Address: 0x17861c, Func Offset: 0x24c
	// Line 813, Address: 0x17862c, Func Offset: 0x25c
	// Line 814, Address: 0x178640, Func Offset: 0x270
	// Line 816, Address: 0x178658, Func Offset: 0x288
	// Line 817, Address: 0x17866c, Func Offset: 0x29c
	// Line 818, Address: 0x178680, Func Offset: 0x2b0
	// Line 819, Address: 0x178694, Func Offset: 0x2c4
	// Line 823, Address: 0x1786b0, Func Offset: 0x2e0
	// Line 824, Address: 0x1786cc, Func Offset: 0x2fc
	// Line 825, Address: 0x1786e8, Func Offset: 0x318
	// Line 826, Address: 0x1786fc, Func Offset: 0x32c
	// Line 828, Address: 0x178714, Func Offset: 0x344
	// Line 829, Address: 0x178728, Func Offset: 0x358
	// Line 830, Address: 0x17873c, Func Offset: 0x36c
	// Line 831, Address: 0x178750, Func Offset: 0x380
	// Line 833, Address: 0x178768, Func Offset: 0x398
	// Line 834, Address: 0x17877c, Func Offset: 0x3ac
	// Line 835, Address: 0x178790, Func Offset: 0x3c0
	// Line 836, Address: 0x1787a4, Func Offset: 0x3d4
	// Line 840, Address: 0x1787c0, Func Offset: 0x3f0
	// Line 841, Address: 0x1787e4, Func Offset: 0x414
	// Line 842, Address: 0x178808, Func Offset: 0x438
	// Line 843, Address: 0x17881c, Func Offset: 0x44c
	// Line 845, Address: 0x178834, Func Offset: 0x464
	// Line 853, Address: 0x178858, Func Offset: 0x488
	// Line 857, Address: 0x178868, Func Offset: 0x498
	// Line 859, Address: 0x178888, Func Offset: 0x4b8
	// Line 861, Address: 0x178894, Func Offset: 0x4c4
	// Func End, Address: 0x1788a4, Func Offset: 0x4d4
}

// 
// Start address: 0x1788b0
Q_WORDDATA* debug_Z_draw(unsigned int x, unsigned int y, unsigned int w, unsigned int h, Q_WORDDATA* qwd)
{
	int id;
	// Line 866, Address: 0x1788b0, Func Offset: 0
	// Line 867, Address: 0x1788cc, Func Offset: 0x1c
	// Line 871, Address: 0x1788d0, Func Offset: 0x20
	// Line 872, Address: 0x1788e0, Func Offset: 0x30
	// Line 874, Address: 0x178938, Func Offset: 0x88
	// Line 876, Address: 0x178988, Func Offset: 0xd8
	// Line 877, Address: 0x178998, Func Offset: 0xe8
	// Line 880, Address: 0x1789b4, Func Offset: 0x104
	// Line 881, Address: 0x1789c8, Func Offset: 0x118
	// Line 884, Address: 0x1789e4, Func Offset: 0x134
	// Line 887, Address: 0x178a08, Func Offset: 0x158
	// Line 890, Address: 0x178a24, Func Offset: 0x174
	// Line 892, Address: 0x178a44, Func Offset: 0x194
	// Line 894, Address: 0x178a64, Func Offset: 0x1b4
	// Line 895, Address: 0x178a74, Func Offset: 0x1c4
	// Line 896, Address: 0x178a84, Func Offset: 0x1d4
	// Line 897, Address: 0x178a98, Func Offset: 0x1e8
	// Line 899, Address: 0x178ab0, Func Offset: 0x200
	// Line 900, Address: 0x178ac4, Func Offset: 0x214
	// Line 901, Address: 0x178ad8, Func Offset: 0x228
	// Line 902, Address: 0x178aec, Func Offset: 0x23c
	// Line 906, Address: 0x178b08, Func Offset: 0x258
	// Line 907, Address: 0x178b24, Func Offset: 0x274
	// Line 908, Address: 0x178b40, Func Offset: 0x290
	// Line 909, Address: 0x178b54, Func Offset: 0x2a4
	// Line 911, Address: 0x178b6c, Func Offset: 0x2bc
	// Line 912, Address: 0x178b80, Func Offset: 0x2d0
	// Line 913, Address: 0x178b94, Func Offset: 0x2e4
	// Line 914, Address: 0x178ba8, Func Offset: 0x2f8
	// Line 916, Address: 0x178bc0, Func Offset: 0x310
	// Line 917, Address: 0x178bd4, Func Offset: 0x324
	// Line 918, Address: 0x178be8, Func Offset: 0x338
	// Line 919, Address: 0x178bfc, Func Offset: 0x34c
	// Line 923, Address: 0x178c18, Func Offset: 0x368
	// Line 924, Address: 0x178c3c, Func Offset: 0x38c
	// Line 925, Address: 0x178c60, Func Offset: 0x3b0
	// Line 926, Address: 0x178c74, Func Offset: 0x3c4
	// Line 934, Address: 0x178c8c, Func Offset: 0x3dc
	// Line 938, Address: 0x178c9c, Func Offset: 0x3ec
	// Line 940, Address: 0x178cb8, Func Offset: 0x408
	// Line 942, Address: 0x178cc4, Func Offset: 0x414
	// Func End, Address: 0x178cd4, Func Offset: 0x424
}

// 
// Start address: 0x178ce0
Q_WORDDATA* debug_map_draw(unsigned int x, unsigned int y, unsigned int w, unsigned int h, Q_WORDDATA* qwd)
{
	float vvc[4][3];
	float wkv[4][3];
	float work[4][4];
	int sy;
	int sx;
	int k;
	int iy;
	int ix;
	int i;
	int id;
	// Line 954, Address: 0x178ce0, Func Offset: 0
	// Line 955, Address: 0x178d1c, Func Offset: 0x3c
	// Line 960, Address: 0x178d30, Func Offset: 0x50
	// Line 962, Address: 0x178d40, Func Offset: 0x60
	// Line 964, Address: 0x178d60, Func Offset: 0x80
	// Line 966, Address: 0x178dac, Func Offset: 0xcc
	// Line 967, Address: 0x178dd0, Func Offset: 0xf0
	// Line 968, Address: 0x178de4, Func Offset: 0x104
	// Line 969, Address: 0x178df0, Func Offset: 0x110
	// Line 970, Address: 0x178e04, Func Offset: 0x124
	// Line 971, Address: 0x178e10, Func Offset: 0x130
	// Line 973, Address: 0x178e1c, Func Offset: 0x13c
	// Line 974, Address: 0x178e28, Func Offset: 0x148
	// Line 975, Address: 0x178e54, Func Offset: 0x174
	// Line 976, Address: 0x178e90, Func Offset: 0x1b0
	// Line 977, Address: 0x178ec8, Func Offset: 0x1e8
	// Line 979, Address: 0x178ee4, Func Offset: 0x204
	// Line 982, Address: 0x178efc, Func Offset: 0x21c
	// Line 983, Address: 0x178f4c, Func Offset: 0x26c
	// Line 984, Address: 0x178f70, Func Offset: 0x290
	// Line 985, Address: 0x178f7c, Func Offset: 0x29c
	// Line 986, Address: 0x178f88, Func Offset: 0x2a8
	// Line 987, Address: 0x178f94, Func Offset: 0x2b4
	// Line 988, Address: 0x178fa0, Func Offset: 0x2c0
	// Line 989, Address: 0x178fcc, Func Offset: 0x2ec
	// Line 990, Address: 0x179008, Func Offset: 0x328
	// Line 991, Address: 0x179040, Func Offset: 0x360
	// Line 992, Address: 0x17905c, Func Offset: 0x37c
	// Line 999, Address: 0x179074, Func Offset: 0x394
	// Line 1000, Address: 0x179084, Func Offset: 0x3a4
	// Line 1002, Address: 0x1790e0, Func Offset: 0x400
	// Line 1004, Address: 0x179134, Func Offset: 0x454
	// Line 1005, Address: 0x179144, Func Offset: 0x464
	// Line 1008, Address: 0x179164, Func Offset: 0x484
	// Line 1009, Address: 0x179178, Func Offset: 0x498
	// Line 1012, Address: 0x179198, Func Offset: 0x4b8
	// Line 1014, Address: 0x1791b8, Func Offset: 0x4d8
	// Line 1016, Address: 0x1791d8, Func Offset: 0x4f8
	// Line 1017, Address: 0x1791ec, Func Offset: 0x50c
	// Line 1018, Address: 0x179200, Func Offset: 0x520
	// Line 1019, Address: 0x179214, Func Offset: 0x534
	// Line 1023, Address: 0x179230, Func Offset: 0x550
	// Line 1024, Address: 0x17924c, Func Offset: 0x56c
	// Line 1025, Address: 0x179268, Func Offset: 0x588
	// Line 1026, Address: 0x17927c, Func Offset: 0x59c
	// Line 1028, Address: 0x179298, Func Offset: 0x5b8
	// Line 1029, Address: 0x1792ac, Func Offset: 0x5cc
	// Line 1030, Address: 0x1792c0, Func Offset: 0x5e0
	// Line 1031, Address: 0x1792d4, Func Offset: 0x5f4
	// Line 1035, Address: 0x1792f0, Func Offset: 0x610
	// Line 1036, Address: 0x179314, Func Offset: 0x634
	// Line 1037, Address: 0x179338, Func Offset: 0x658
	// Line 1038, Address: 0x17934c, Func Offset: 0x66c
	// Line 1043, Address: 0x179368, Func Offset: 0x688
	// Line 1045, Address: 0x1793c4, Func Offset: 0x6e4
	// Line 1048, Address: 0x179418, Func Offset: 0x738
	// Line 1051, Address: 0x1794a4, Func Offset: 0x7c4
	// Line 1053, Address: 0x1794c4, Func Offset: 0x7e4
	// Line 1055, Address: 0x1794e8, Func Offset: 0x808
	// Line 1057, Address: 0x1794f4, Func Offset: 0x814
	// Line 1058, Address: 0x179508, Func Offset: 0x828
	// Line 1059, Address: 0x17951c, Func Offset: 0x83c
	// Line 1060, Address: 0x179530, Func Offset: 0x850
	// Line 1062, Address: 0x17954c, Func Offset: 0x86c
	// Line 1064, Address: 0x179570, Func Offset: 0x890
	// Line 1065, Address: 0x1795bc, Func Offset: 0x8dc
	// Line 1066, Address: 0x179608, Func Offset: 0x928
	// Line 1067, Address: 0x17961c, Func Offset: 0x93c
	// Line 1068, Address: 0x179638, Func Offset: 0x958
	// Line 1072, Address: 0x17964c, Func Offset: 0x96c
	// Line 1074, Address: 0x17966c, Func Offset: 0x98c
	// Line 1076, Address: 0x179690, Func Offset: 0x9b0
	// Line 1078, Address: 0x17969c, Func Offset: 0x9bc
	// Line 1079, Address: 0x1796b0, Func Offset: 0x9d0
	// Line 1080, Address: 0x1796c4, Func Offset: 0x9e4
	// Line 1081, Address: 0x1796d8, Func Offset: 0x9f8
	// Line 1083, Address: 0x1796f4, Func Offset: 0xa14
	// Line 1085, Address: 0x179718, Func Offset: 0xa38
	// Line 1086, Address: 0x179764, Func Offset: 0xa84
	// Line 1087, Address: 0x1797b0, Func Offset: 0xad0
	// Line 1088, Address: 0x1797c4, Func Offset: 0xae4
	// Line 1089, Address: 0x1797e0, Func Offset: 0xb00
	// Line 1100, Address: 0x1797f4, Func Offset: 0xb14
	// Line 1101, Address: 0x179864, Func Offset: 0xb84
	// Line 1103, Address: 0x1798b8, Func Offset: 0xbd8
	// Line 1104, Address: 0x1798ec, Func Offset: 0xc0c
	// Line 1138, Address: 0x179918, Func Offset: 0xc38
	// Line 1139, Address: 0x179974, Func Offset: 0xc94
	// Line 1140, Address: 0x179980, Func Offset: 0xca0
	// Line 1142, Address: 0x1799a0, Func Offset: 0xcc0
	// Line 1144, Address: 0x1799d4, Func Offset: 0xcf4
	// Line 1145, Address: 0x1799e8, Func Offset: 0xd08
	// Line 1146, Address: 0x1799fc, Func Offset: 0xd1c
	// Line 1147, Address: 0x179a10, Func Offset: 0xd30
	// Line 1149, Address: 0x179a2c, Func Offset: 0xd4c
	// Line 1150, Address: 0x179a38, Func Offset: 0xd58
	// Line 1152, Address: 0x179aac, Func Offset: 0xdcc
	// Line 1154, Address: 0x179b20, Func Offset: 0xe40
	// Line 1155, Address: 0x179b34, Func Offset: 0xe54
	// Line 1157, Address: 0x179b50, Func Offset: 0xe70
	// Line 1159, Address: 0x179bc4, Func Offset: 0xee4
	// Line 1161, Address: 0x179c38, Func Offset: 0xf58
	// Line 1162, Address: 0x179c4c, Func Offset: 0xf6c
	// Line 1163, Address: 0x179c68, Func Offset: 0xf88
	// Line 1165, Address: 0x179c7c, Func Offset: 0xf9c
	// Line 1173, Address: 0x179c8c, Func Offset: 0xfac
	// Line 1175, Address: 0x179ce0, Func Offset: 0x1000
	// Line 1180, Address: 0x179d1c, Func Offset: 0x103c
	// Line 1184, Address: 0x179d2c, Func Offset: 0x104c
	// Line 1186, Address: 0x179d4c, Func Offset: 0x106c
	// Line 1188, Address: 0x179d5c, Func Offset: 0x107c
	// Func End, Address: 0x179d8c, Func Offset: 0x10ac
}

// 
// Start address: 0x179d90
void kari_DBG_print_junbi(unsigned long* res)
{
	unsigned char* sbb[3];
	int ih;
	int iz;
	int iyy;
	int ix[8];
	int padport;
	unsigned int iy;
	float svt[4];
	char string_buf[128];
	// Line 1206, Address: 0x179d90, Func Offset: 0
	// Line 1210, Address: 0x179dc0, Func Offset: 0x30
	// Line 1211, Address: 0x179dc8, Func Offset: 0x38
	// Line 1213, Address: 0x179dd4, Func Offset: 0x44
	// Line 1215, Address: 0x179dec, Func Offset: 0x5c
	// Line 1217, Address: 0x179e04, Func Offset: 0x74
	// Line 1218, Address: 0x179e24, Func Offset: 0x94
	// Line 1219, Address: 0x179e3c, Func Offset: 0xac
	// Line 1223, Address: 0x179e44, Func Offset: 0xb4
	// Line 1229, Address: 0x179e98, Func Offset: 0x108
	// Line 1232, Address: 0x179eac, Func Offset: 0x11c
	// Line 1233, Address: 0x179f10, Func Offset: 0x180
	// Line 1235, Address: 0x179f2c, Func Offset: 0x19c
	// Line 1257, Address: 0x179f38, Func Offset: 0x1a8
	// Line 1261, Address: 0x179f70, Func Offset: 0x1e0
	// Line 1262, Address: 0x179fcc, Func Offset: 0x23c
	// Line 1263, Address: 0x179fec, Func Offset: 0x25c
	// Line 1266, Address: 0x179ff4, Func Offset: 0x264
	// Line 1268, Address: 0x17a010, Func Offset: 0x280
	// Line 1270, Address: 0x17a014, Func Offset: 0x284
	// Line 1271, Address: 0x17a020, Func Offset: 0x290
	// Line 1272, Address: 0x17a02c, Func Offset: 0x29c
	// Line 1274, Address: 0x17a058, Func Offset: 0x2c8
	// Line 1276, Address: 0x17a080, Func Offset: 0x2f0
	// Line 1280, Address: 0x17a094, Func Offset: 0x304
	// Line 1284, Address: 0x17a13c, Func Offset: 0x3ac
	// Line 1285, Address: 0x17a150, Func Offset: 0x3c0
	// Line 1286, Address: 0x17a154, Func Offset: 0x3c4
	// Line 1288, Address: 0x17a164, Func Offset: 0x3d4
	// Line 1289, Address: 0x17a168, Func Offset: 0x3d8
	// Line 1292, Address: 0x17a170, Func Offset: 0x3e0
	// Line 1297, Address: 0x17a1d0, Func Offset: 0x440
	// Line 1299, Address: 0x17a1e8, Func Offset: 0x458
	// Line 1308, Address: 0x17a248, Func Offset: 0x4b8
	// Line 1309, Address: 0x17a260, Func Offset: 0x4d0
	// Line 1312, Address: 0x17a268, Func Offset: 0x4d8
	// Line 1319, Address: 0x17a2cc, Func Offset: 0x53c
	// Line 1326, Address: 0x17a2e4, Func Offset: 0x554
	// Line 1330, Address: 0x17a318, Func Offset: 0x588
	// Line 1339, Address: 0x17a3ac, Func Offset: 0x61c
	// Line 1342, Address: 0x17a3c4, Func Offset: 0x634
	// Line 1345, Address: 0x17a3cc, Func Offset: 0x63c
	// Line 1353, Address: 0x17a448, Func Offset: 0x6b8
	// Line 1354, Address: 0x17a460, Func Offset: 0x6d0
	// Line 1358, Address: 0x17a468, Func Offset: 0x6d8
	// Line 1366, Address: 0x17a4bc, Func Offset: 0x72c
	// Line 1368, Address: 0x17a4d8, Func Offset: 0x748
	// Line 1371, Address: 0x17a4e0, Func Offset: 0x750
	// Line 1380, Address: 0x17a554, Func Offset: 0x7c4
	// Line 1381, Address: 0x17a57c, Func Offset: 0x7ec
	// Line 1384, Address: 0x17a584, Func Offset: 0x7f4
	// Line 1392, Address: 0x17a5e8, Func Offset: 0x858
	// Line 1394, Address: 0x17a610, Func Offset: 0x880
	// Line 1397, Address: 0x17a618, Func Offset: 0x888
	// Line 1403, Address: 0x17a694, Func Offset: 0x904
	// Line 1405, Address: 0x17a6b4, Func Offset: 0x924
	// Line 1410, Address: 0x17a718, Func Offset: 0x988
	// Line 1412, Address: 0x17a734, Func Offset: 0x9a4
	// Line 1415, Address: 0x17a73c, Func Offset: 0x9ac
	// Line 1420, Address: 0x17a794, Func Offset: 0xa04
	// Line 1422, Address: 0x17a7b0, Func Offset: 0xa20
	// Line 1427, Address: 0x17a808, Func Offset: 0xa78
	// Line 1429, Address: 0x17a824, Func Offset: 0xa94
	// Line 1434, Address: 0x17a82c, Func Offset: 0xa9c
	// Line 1439, Address: 0x17a88c, Func Offset: 0xafc
	// Line 1441, Address: 0x17a8b0, Func Offset: 0xb20
	// Line 1446, Address: 0x17a910, Func Offset: 0xb80
	// Line 1448, Address: 0x17a930, Func Offset: 0xba0
	// Line 1453, Address: 0x17a998, Func Offset: 0xc08
	// Line 1459, Address: 0x17a9c0, Func Offset: 0xc30
	// Func End, Address: 0x17a9f4, Func Offset: 0xc64
}

