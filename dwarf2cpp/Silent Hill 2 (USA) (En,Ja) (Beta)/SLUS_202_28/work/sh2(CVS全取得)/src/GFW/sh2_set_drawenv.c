typedef struct _anon0;
typedef struct sh2gfw_BLOCK_MAN;
typedef struct _anon1;
typedef struct sh2gfw_TEX_HEAD;
typedef struct _anon2;
typedef struct sh2gfw_AREA_HEAD;
typedef struct shGsDrawEnv;
typedef struct shAttackInfo;
typedef struct sh2gfw_BLOCK_HEAD;
typedef struct _anon3;
typedef struct sh2gfw_BLOCKGLOBAL_HEAD;
typedef struct _anon4;
typedef struct sh2gfw_BLOCKLOCAL_HEAD;
typedef struct sh2gfw_GSREGS_HEAD;
typedef union _anon5;
typedef struct sh2gfw_GIFTAG_HEAD;
typedef union Q_WORDDATA;
typedef struct _anon6;
typedef struct sh2gfw_CLUTS_HEAD;
typedef struct _anon7;
typedef struct _anon8;
typedef struct shGsStencilDrawEnv;
typedef struct _anon9;
typedef struct _anon10;
typedef struct _anon11;
typedef struct _anon12;
typedef struct sh2gfw_SPOTL_MATRIX;
typedef struct _anon13;
typedef struct sh2gfw_POINTL_MATRIX;
typedef struct shGsLoopEnv;
typedef struct sh2gfw_VU_PARMS;
typedef struct _anon14;
typedef struct DrawEnvData;
typedef struct shGsTinyDrawEnv;
typedef struct _anon15;
typedef struct _anon16;
typedef struct sh2gfw_Env_ctl;
typedef struct _anon17;
typedef struct shGsAllEnv;
typedef struct shBattleFight;
typedef struct _anon18;
typedef struct _anon19;
typedef struct shBattleShot;
typedef struct _anon20;
typedef struct _anon21;
typedef struct _anon22;
typedef struct _anon23;
typedef struct _anon24;


typedef Q_WORDDATA type_0[2];
typedef unsigned short type_1[4];
typedef Q_WORDDATA type_2[2];
typedef Q_WORDDATA type_3[2];
typedef Q_WORDDATA type_4[2];
typedef float type_5[4][2];
typedef Q_WORDDATA type_6[2];
typedef Q_WORDDATA type_7[2];
typedef Q_WORDDATA type_8[2];
typedef Q_WORDDATA type_9[5];
typedef Q_WORDDATA type_10[2];
typedef Q_WORDDATA type_11[2];
typedef sh2gfw_GSREGS_HEAD* type_12[4];
typedef Q_WORDDATA type_13[2];
typedef Q_WORDDATA type_14[5];
typedef sh2gfw_GIFTAG_HEAD* type_15[16];
typedef Q_WORDDATA type_16[2];
typedef sh2gfw_GIFTAG_HEAD* type_17[16][4];
typedef unsigned short type_18[8];
typedef Q_WORDDATA type_19[2];
typedef unsigned short type_20[8][16];
typedef unsigned short type_21[8][16][4];
typedef Q_WORDDATA type_22[2];
typedef sh2gfw_TEX_HEAD* type_23[4];
typedef Q_WORDDATA type_24[2];
typedef sh2gfw_CLUTS_HEAD* type_25[4];
typedef Q_WORDDATA type_26[2];
typedef unsigned char type_27[4];
typedef Q_WORDDATA type_28[2];
typedef unsigned int type_29[4];
typedef unsigned char type_30[16];
typedef unsigned char type_31[16][4];
typedef Q_WORDDATA type_32[2];
typedef unsigned short type_33[8];
typedef unsigned char type_34[16];
typedef float type_35[4];
typedef unsigned char type_36[16][16];
typedef Q_WORDDATA type_37[2];
typedef unsigned char type_38[16][16][4];
typedef Q_WORDDATA type_39[6];
typedef Q_WORDDATA type_40[2];
typedef unsigned char type_41[16];
typedef unsigned char type_42[16];
typedef int type_43[4];
typedef short type_44[8];
typedef unsigned char type_45[16];
typedef Q_WORDDATA type_46[6];
typedef char type_47[16];
typedef shAttackInfo type_48[66];
typedef void* type_49[4];
typedef unsigned long type_50[2];
typedef Q_WORDDATA* type_51[4];
typedef unsigned int type_52[4];
typedef int type_53[8];
typedef int type_54[8];
typedef unsigned int type_55[3];
typedef unsigned char type_56[16];
typedef unsigned int type_57[3];
typedef unsigned char type_58[16];
typedef unsigned int type_59[3];
typedef unsigned int type_60[24];
typedef unsigned int type_61[3];
typedef unsigned int type_62[3];
typedef unsigned short type_63[8];
typedef Q_WORDDATA type_64[2];
typedef sh2gfw_GIFTAG_HEAD* type_65[16];
typedef unsigned int type_66[3];
typedef unsigned char type_67[8];
typedef unsigned char type_68[8][8];
typedef unsigned int type_69[3];
typedef Q_WORDDATA type_70[3];
typedef sh2gfw_BLOCK_MAN type_71[6];
typedef _anon19 type_72[3];
typedef shGsDrawEnv type_73[3];
typedef shGsStencilDrawEnv type_74[3];
typedef shGsTinyDrawEnv type_75[6];
typedef Q_WORDDATA type_76[10];
typedef Q_WORDDATA type_77[10];
typedef Q_WORDDATA type_78[10];
typedef Q_WORDDATA type_79[10];
typedef Q_WORDDATA type_80[10];
typedef Q_WORDDATA type_81[10];
typedef float type_82[4];
typedef Q_WORDDATA type_83[10];
typedef float type_84[4];
typedef float type_85[4][4];
typedef Q_WORDDATA type_86[8];
typedef Q_WORDDATA type_87[2];
typedef unsigned short type_88[3];
typedef unsigned short type_89[3];
typedef Q_WORDDATA type_90[2];

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
	_anon2 blk_LightData;
};

struct _anon1
{
	struct
	{
		unsigned long CLAMP : 1;
		unsigned long pad01 : 63;
	};
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

struct sh2gfw_AREA_HEAD
{
	unsigned int area_id;
	unsigned int toGlobalTexHead;
	unsigned int toGlobalClutsHead;
	unsigned int date;
};

struct shGsDrawEnv
{
	_anon0 giftag;
	_anon22 draw;
	Q_WORDDATA drawq2[5];
	_anon10 clear;
	_anon0 giftag_nc;
	_anon22 draw_nc;
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
	_anon5 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
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

struct sh2gfw_BLOCKGLOBAL_HEAD
{
	unsigned int gsregsamount;
	unsigned int transamount;
	unsigned char gtexnum;
	unsigned char gtransnum;
	unsigned short pads;
	unsigned int pad2;
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

struct sh2gfw_BLOCKLOCAL_HEAD
{
	unsigned short gsregsamount[3];
	unsigned short transamount[3];
	unsigned short ltexnum;
	unsigned short pads;
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

union _anon5
{
	shBattleFight fight;
	shBattleShot shot;
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

struct _anon6
{
	struct
	{
		unsigned long X : 16;
		unsigned long Y : 16;
		unsigned long Z : 32;
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

struct _anon7
{
	float x;
	float y;
	float z;
	float w;
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
	_anon0 giftag;
	_anon22 draw;
	Q_WORDDATA alpha1;
	Q_WORDDATA drawq2[6];
	_anon10 clear;
	Q_WORDDATA frame;
	_anon0 giftag_nc;
	_anon22 draw_nc;
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
	int x;
	int y;
	int z;
	int w;
};

struct _anon10
{
	_anon24 testa;
	long testaaddr;
	_anon13 prim;
	long primaddr;
	_anon17 rgbaq;
	long rgbaqaddr;
	_anon6 xyz2a;
	long xyz2aaddr;
	_anon6 xyz2b;
	long xyz2baddr;
	_anon24 testb;
	long testbaddr;
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

struct sh2gfw_SPOTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA dirvec;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
};

struct _anon13
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

struct _anon14
{
	unsigned char flare_inhibit_f;
	unsigned char water_inhibit_f;
	unsigned char lfl_sync_draw_func_exec_f;
	unsigned char draw_center_f;
	float tgt_l_eff_rate;
	float now_l_eff_rate;
	_anon7 scr_l_pos;
	float scr_l_ang_xy;
	float scr_l_ang_z;
	_anon9 l_screen_pos;
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

struct _anon15
{
	struct
	{
		unsigned long DTHE : 1;
		unsigned long pad01 : 63;
	};
};

struct _anon16
{
	struct
	{
		unsigned long AC : 1;
		unsigned long pad01 : 63;
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

struct shGsAllEnv
{
	unsigned long loop_counter;
	unsigned int loop;
	unsigned int loop3;
	shGsLoopEnv LoopEnv;
	_anon19 DispEnv[3];
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
	_anon21 pmode;
	_anon4 smode2;
	_anon23 dispfb;
	_anon8 display;
	_anon11 bgcolor;
};

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct _anon20
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

struct _anon22
{
	_anon20 frame1;
	unsigned long frame1addr;
	_anon12 zbuf1;
	long zbuf1addr;
	_anon3 xyoffset1;
	long xyoffset1addr;
	_anon18 scissor1;
	long scissor1addr;
	_anon16 prmodecont;
	long prmodecontaddr;
	_anon1 colclamp;
	long colclampaddr;
	_anon15 dthe;
	long dtheaddr;
	_anon24 test1;
	long test1addr;
};

struct _anon23
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

struct _anon24
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
sh2gfw_Env_ctl Env_ctl;
shGsAllEnv shGs_AllEnv;
float hohoho;
float zzzzzz;
sh2gfw_BLOCK_MAN b_man[6];
sh2gfw_VU_PARMS VU1_PARMS;
_anon14 light_flare_work;

void sh2gfw_Set_Brightness(int pow);
void kari_sh2setGS_fogcolor(unsigned int fr, unsigned int fg, unsigned int fb);
void kari_sh2setGS_clearcolor(unsigned int cr, unsigned int cg, unsigned int cb, unsigned int ca);
void kari_sh2gfw_vu_change(sh2gfw_BLOCK_MAN* bm, unsigned int light_mode);
int sh2gfw_Rotate_CD11();
int sh2gfw_Jump_BlockPos(int mapidno, float* jv);
int sh2gfw_Reset_BlockPos(int mapidno);
void sh2gfw_Set_Fogfar(float fogfar);
void sh2gfw_Set_FogNear(float fogNear);
void sh2gfw_Set_FogMax(float fogMax);
void sh2gfw_Set_FogMin(float fogMin);
void sh2gfw_Set_DepthFog(float fogfar, float fognear, float fmax, float fmin);
void sh2gfw_Set_DepthFogFAFB();
void sh2gde_SetSpot_JmsOrBG(int bg);
void sh2gde_ResetSpot_Jms();

// 
// Start address: 0x1757b0
void sh2gfw_Set_Brightness(int pow)
{
	// Line 65, Address: 0x1757b0, Func Offset: 0
	// Line 67, Address: 0x1757d8, Func Offset: 0x28
	// Line 73, Address: 0x1757f4, Func Offset: 0x44
	// Line 77, Address: 0x175810, Func Offset: 0x60
	// Line 80, Address: 0x175818, Func Offset: 0x68
	// Line 84, Address: 0x175834, Func Offset: 0x84
	// Line 87, Address: 0x17583c, Func Offset: 0x8c
	// Line 91, Address: 0x175858, Func Offset: 0xa8
	// Line 94, Address: 0x175860, Func Offset: 0xb0
	// Line 97, Address: 0x17587c, Func Offset: 0xcc
	// Line 99, Address: 0x175884, Func Offset: 0xd4
	// Line 102, Address: 0x1758a0, Func Offset: 0xf0
	// Line 105, Address: 0x1758a8, Func Offset: 0xf8
	// Line 108, Address: 0x1758c4, Func Offset: 0x114
	// Line 112, Address: 0x1758cc, Func Offset: 0x11c
	// Line 118, Address: 0x1758e8, Func Offset: 0x138
	// Func End, Address: 0x1758f0, Func Offset: 0x140
}

// 
// Start address: 0x1758f0
void kari_sh2setGS_fogcolor(unsigned int fr, unsigned int fg, unsigned int fb)
{
	// Line 146, Address: 0x1758f0, Func Offset: 0
	// Line 148, Address: 0x175920, Func Offset: 0x30
	// Func End, Address: 0x175928, Func Offset: 0x38
}

// 
// Start address: 0x175930
void kari_sh2setGS_clearcolor(unsigned int cr, unsigned int cg, unsigned int cb, unsigned int ca)
{
	int i;
	// Line 158, Address: 0x175930, Func Offset: 0
	// Line 160, Address: 0x17593c, Func Offset: 0xc
	// Line 163, Address: 0x1759a4, Func Offset: 0x74
	// Line 165, Address: 0x1759b4, Func Offset: 0x84
	// Func End, Address: 0x1759bc, Func Offset: 0x8c
}

// 
// Start address: 0x1759c0
void kari_sh2gfw_vu_change(sh2gfw_BLOCK_MAN* bm, unsigned int light_mode)
{
	unsigned int offsetad;
	unsigned int basead;
	unsigned int itopaddr;
	unsigned int vuk;
	unsigned int ivumax;
	unsigned int igg;
	unsigned int k;
	unsigned int j;
	unsigned int i;
	Q_WORDDATA* qwd;
	// Line 327, Address: 0x1759c0, Func Offset: 0
	// Line 336, Address: 0x1759f0, Func Offset: 0x30
	// Line 337, Address: 0x1759fc, Func Offset: 0x3c
	// Line 338, Address: 0x175a04, Func Offset: 0x44
	// Line 339, Address: 0x175a10, Func Offset: 0x50
	// Line 340, Address: 0x175a20, Func Offset: 0x60
	// Line 346, Address: 0x175a2c, Func Offset: 0x6c
	// Line 347, Address: 0x175a5c, Func Offset: 0x9c
	// Line 352, Address: 0x175a60, Func Offset: 0xa0
	// Line 359, Address: 0x175a74, Func Offset: 0xb4
	// Line 363, Address: 0x175a84, Func Offset: 0xc4
	// Line 376, Address: 0x175aa8, Func Offset: 0xe8
	// Line 378, Address: 0x175abc, Func Offset: 0xfc
	// Line 380, Address: 0x175acc, Func Offset: 0x10c
	// Line 383, Address: 0x175adc, Func Offset: 0x11c
	// Func End, Address: 0x175b0c, Func Offset: 0x14c
}

// 
// Start address: 0x175b10
int sh2gfw_Rotate_CD11()
{
	float tmp[4];
	float svt[4];
	sh2gfw_BLOCK_MAN* pB_man;
	int slot;
	int mapidno;
	// Line 399, Address: 0x175b10, Func Offset: 0
	// Line 403, Address: 0x175b1c, Func Offset: 0xc
	// Line 405, Address: 0x175b28, Func Offset: 0x18
	// Line 406, Address: 0x175b3c, Func Offset: 0x2c
	// Line 407, Address: 0x175b48, Func Offset: 0x38
	// Line 408, Address: 0x175b5c, Func Offset: 0x4c
	// Line 414, Address: 0x175b70, Func Offset: 0x60
	// Line 418, Address: 0x175b8c, Func Offset: 0x7c
	// Line 419, Address: 0x175ba4, Func Offset: 0x94
	// Line 420, Address: 0x175bc4, Func Offset: 0xb4
	// Line 421, Address: 0x175be4, Func Offset: 0xd4
	// Line 423, Address: 0x175be8, Func Offset: 0xd8
	// Line 424, Address: 0x175bfc, Func Offset: 0xec
	// Line 427, Address: 0x175c10, Func Offset: 0x100
	// Line 428, Address: 0x175c20, Func Offset: 0x110
	// Line 430, Address: 0x175c2c, Func Offset: 0x11c
	// Line 433, Address: 0x175c3c, Func Offset: 0x12c
	// Line 435, Address: 0x175c40, Func Offset: 0x130
	// Func End, Address: 0x175c54, Func Offset: 0x144
}

// 
// Start address: 0x175c60
int sh2gfw_Jump_BlockPos(int mapidno, float* jv)
{
	float sv[4];
	sh2gfw_BLOCK_MAN* pB_man;
	int slot;
	// Line 493, Address: 0x175c60, Func Offset: 0
	// Line 496, Address: 0x175c70, Func Offset: 0x10
	// Line 505, Address: 0x175c7c, Func Offset: 0x1c
	// Line 506, Address: 0x175c90, Func Offset: 0x30
	// Line 511, Address: 0x175c9c, Func Offset: 0x3c
	// Line 513, Address: 0x175ca8, Func Offset: 0x48
	// Line 516, Address: 0x175cac, Func Offset: 0x4c
	// Line 518, Address: 0x175cbc, Func Offset: 0x5c
	// Line 519, Address: 0x175ccc, Func Offset: 0x6c
	// Line 521, Address: 0x175cd8, Func Offset: 0x78
	// Line 524, Address: 0x175cec, Func Offset: 0x8c
	// Line 526, Address: 0x175cf0, Func Offset: 0x90
	// Func End, Address: 0x175d04, Func Offset: 0xa4
}

// 
// Start address: 0x175d10
int sh2gfw_Reset_BlockPos(int mapidno)
{
	sh2gfw_BLOCK_MAN* pB_man;
	int slot;
	// Line 536, Address: 0x175d10, Func Offset: 0
	// Line 539, Address: 0x175d1c, Func Offset: 0xc
	// Line 548, Address: 0x175d28, Func Offset: 0x18
	// Line 549, Address: 0x175d3c, Func Offset: 0x2c
	// Line 554, Address: 0x175d48, Func Offset: 0x38
	// Line 555, Address: 0x175d54, Func Offset: 0x44
	// Line 556, Address: 0x175d64, Func Offset: 0x54
	// Line 557, Address: 0x175d74, Func Offset: 0x64
	// Line 559, Address: 0x175d80, Func Offset: 0x70
	// Line 562, Address: 0x175d94, Func Offset: 0x84
	// Line 564, Address: 0x175d98, Func Offset: 0x88
	// Func End, Address: 0x175dac, Func Offset: 0x9c
}

// 
// Start address: 0x175db0
void sh2gfw_Set_Fogfar(float fogfar)
{
	// Line 573, Address: 0x175db0, Func Offset: 0
	// Line 574, Address: 0x175db8, Func Offset: 0x8
	// Func End, Address: 0x175dc0, Func Offset: 0x10
}

// 
// Start address: 0x175dc0
void sh2gfw_Set_FogNear(float fogNear)
{
	// Line 583, Address: 0x175dc0, Func Offset: 0
	// Line 584, Address: 0x175dc8, Func Offset: 0x8
	// Func End, Address: 0x175dd0, Func Offset: 0x10
}

// 
// Start address: 0x175dd0
void sh2gfw_Set_FogMax(float fogMax)
{
	// Line 593, Address: 0x175dd0, Func Offset: 0
	// Line 594, Address: 0x175dd8, Func Offset: 0x8
	// Func End, Address: 0x175de0, Func Offset: 0x10
}

// 
// Start address: 0x175de0
void sh2gfw_Set_FogMin(float fogMin)
{
	// Line 603, Address: 0x175de0, Func Offset: 0
	// Line 604, Address: 0x175de8, Func Offset: 0x8
	// Func End, Address: 0x175df0, Func Offset: 0x10
}

// 
// Start address: 0x175df0
void sh2gfw_Set_DepthFog(float fogfar, float fognear, float fmax, float fmin)
{
	// Line 623, Address: 0x175df0, Func Offset: 0
	// Line 625, Address: 0x175e0c, Func Offset: 0x1c
	// Line 628, Address: 0x175e20, Func Offset: 0x30
	// Line 630, Address: 0x175e30, Func Offset: 0x40
	// Line 633, Address: 0x175e40, Func Offset: 0x50
	// Line 634, Address: 0x175e4c, Func Offset: 0x5c
	// Line 636, Address: 0x175e5c, Func Offset: 0x6c
	// Func End, Address: 0x175e64, Func Offset: 0x74
}

// 
// Start address: 0x175e70
void sh2gfw_Set_DepthFogFAFB()
{
	// Line 639, Address: 0x175e70, Func Offset: 0
	// Line 640, Address: 0x175e78, Func Offset: 0x8
	// Line 647, Address: 0x175ea0, Func Offset: 0x30
	// Func End, Address: 0x175eb0, Func Offset: 0x40
}

// 
// Start address: 0x175eb0
void sh2gde_SetSpot_JmsOrBG(int bg)
{
	DrawEnvData* Now;
	// Line 706, Address: 0x175eb0, Func Offset: 0
	// Line 708, Address: 0x175ec0, Func Offset: 0x10
	// Line 710, Address: 0x175ec8, Func Offset: 0x18
	// Line 711, Address: 0x175ed0, Func Offset: 0x20
	// Line 713, Address: 0x175ed8, Func Offset: 0x28
	// Line 714, Address: 0x175ee0, Func Offset: 0x30
	// Line 718, Address: 0x175ee4, Func Offset: 0x34
	// Func End, Address: 0x175ef8, Func Offset: 0x48
}

// 
// Start address: 0x175f00
void sh2gde_ResetSpot_Jms()
{
	DrawEnvData* Now;
	// Line 729, Address: 0x175f00, Func Offset: 0
	// Line 731, Address: 0x175f08, Func Offset: 0x8
	// Line 733, Address: 0x175f10, Func Offset: 0x10
	// Line 737, Address: 0x175f3c, Func Offset: 0x3c
	// Line 739, Address: 0x175f64, Func Offset: 0x64
	// Line 740, Address: 0x175f70, Func Offset: 0x70
	// Line 741, Address: 0x175f78, Func Offset: 0x78
	// Line 745, Address: 0x175f80, Func Offset: 0x80
	// Func End, Address: 0x175f90, Func Offset: 0x90
}

