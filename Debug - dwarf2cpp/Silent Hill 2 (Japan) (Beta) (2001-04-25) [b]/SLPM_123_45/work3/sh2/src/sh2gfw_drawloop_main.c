typedef struct sh2gfw_BLOCKLOCAL_HEAD;
typedef struct sh2gfw_TEX_HEAD;
typedef struct _anon0;
typedef struct sh2gfw_BLOCK_MAN;
typedef struct shBattleFight;
typedef struct _anon1;
typedef struct shGsAllEnv;
typedef struct sh2gfw_AREA_HEAD;
typedef struct sh2gfw_BLOCK_HEAD;
typedef struct _anon2;
typedef struct sh2gfw_BLOCKGLOBAL_HEAD;
typedef struct _anon3;
typedef struct shBattleShot;
typedef struct sh2gfw_GSREGS_HEAD;
typedef struct _anon4;
typedef struct sh2gfw_GIFTAG_HEAD;
typedef struct sh2gfw_TexMAN;
typedef struct sh2gfw_CLUTS_HEAD;
typedef struct _anon5;
typedef struct sh2gfw_ALLTEXSYNC_MAN;
typedef struct _anon6;
typedef union Q_WORDDATA;
typedef struct sh2gfw_SPOTL_MATRIX;
typedef struct _anon7;
typedef struct sh2gfw_POINTL_MATRIX;
typedef struct shAttackInfo;
typedef struct _anon8;
typedef struct _anon9;
typedef struct sh2gfw_VU_PARMS;
typedef struct shGsDrawEnv;
typedef struct _anon10;
typedef union _anon11;
typedef struct _anon12;
typedef struct sh2gfw_Env_ctl;
typedef struct _anon13;
typedef struct _anon14;
typedef struct _anon15;
typedef struct shGsStencilDrawEnv;
typedef struct _anon16;
typedef struct _anon17;
typedef struct _anon18;
typedef struct _VbWVSMATRIX;
typedef struct _anon19;
typedef struct _anon20;
typedef struct shGsLoopEnv;
typedef struct _anon21;
typedef struct _anon22;
typedef struct _VbSCREENINFO;
typedef struct _anon23;
typedef struct shGsTinyDrawEnv;


typedef float type_0[4];
typedef unsigned short type_1[3];
typedef unsigned short type_2[3];
typedef float type_3[4];
typedef float type_4[4][4];
typedef float type_5[4][2];
typedef sh2gfw_BLOCK_MAN type_6[6];
typedef _anon17 type_7[3];
typedef sh2gfw_GSREGS_HEAD* type_8[4];
typedef shGsDrawEnv type_9[3];
typedef shAttackInfo type_10[46];
typedef shGsStencilDrawEnv type_11[3];
typedef sh2gfw_GIFTAG_HEAD* type_12[16];
typedef sh2gfw_GIFTAG_HEAD* type_13[16][4];
typedef shGsTinyDrawEnv type_14[6];
typedef unsigned short type_15[8];
typedef unsigned short type_16[8][16];
typedef unsigned short type_17[8][16][4];
typedef Q_WORDDATA type_18[10];
typedef Q_WORDDATA type_19[10];
typedef sh2gfw_TEX_HEAD* type_20[4];
typedef Q_WORDDATA type_21[10];
typedef sh2gfw_CLUTS_HEAD* type_22[4];
typedef Q_WORDDATA type_23[10];
typedef unsigned char type_24[4];
typedef Q_WORDDATA type_25[10];
typedef unsigned char type_26[16];
typedef unsigned char type_27[16][4];
typedef Q_WORDDATA type_28[10];
typedef unsigned char type_29[16];
typedef unsigned char type_30[16][16];
typedef unsigned char type_31[16][16][4];
typedef Q_WORDDATA type_32[10];
typedef float type_33[4];
typedef float type_34[4][4];
typedef Q_WORDDATA type_35[8];
typedef Q_WORDDATA type_36[2];
typedef unsigned char type_37[16];
typedef Q_WORDDATA type_38[2];
typedef void* type_39[4];
typedef unsigned int type_40[4];
typedef unsigned char type_41[16];
typedef Q_WORDDATA type_42[2];
typedef Q_WORDDATA* type_43[4];
typedef unsigned short type_44[8];
typedef Q_WORDDATA type_45[2];
typedef unsigned int type_46[4];
typedef float type_47[4];
typedef int type_48[8];
typedef Q_WORDDATA type_49[2];
typedef unsigned char type_50[16];
typedef int type_51[8];
typedef int type_52[4];
typedef Q_WORDDATA type_53[2];
typedef short type_54[8];
typedef Q_WORDDATA type_55[2];
typedef char type_56[16];
typedef Q_WORDDATA type_57[2];
typedef unsigned long type_58[2];
typedef unsigned char type_59[16];
typedef Q_WORDDATA type_60[2];
typedef unsigned char type_61[16];
typedef Q_WORDDATA type_62[5];
typedef Q_WORDDATA type_63[2];
typedef Q_WORDDATA type_64[2];
typedef int type_65[3];
typedef Q_WORDDATA type_66[2];
typedef Q_WORDDATA type_67[5];
typedef Q_WORDDATA type_68[48];
typedef Q_WORDDATA type_69[2];
typedef Q_WORDDATA type_70[4];
typedef Q_WORDDATA type_71[96];
typedef Q_WORDDATA type_72[2];
typedef sh2gfw_TexMAN* type_73[96];
typedef Q_WORDDATA type_74[2];
typedef sh2gfw_TexMAN type_75[96];
typedef Q_WORDDATA type_76[2];
typedef sh2gfw_GIFTAG_HEAD* type_77[16];
typedef Q_WORDDATA type_78[2];
typedef unsigned char type_79[8];
typedef Q_WORDDATA type_80[2];
typedef Q_WORDDATA type_81[0];
typedef unsigned char type_82[8][8];
typedef Q_WORDDATA type_83[2];
typedef Q_WORDDATA type_84[2];
typedef Q_WORDDATA type_85[2];
typedef Q_WORDDATA type_86[3];
typedef Q_WORDDATA type_87[6];
typedef Q_WORDDATA type_88[2];
typedef char type_89[128];
typedef Q_WORDDATA type_90[6];
typedef unsigned int type_91[3];
typedef Q_WORDDATA type_92[0];
typedef unsigned int type_93[3];
typedef unsigned int type_94[3];
typedef unsigned int type_95[3];
typedef unsigned int type_96[3];
typedef unsigned int type_97[24];
typedef unsigned int type_98[3];
typedef unsigned int type_99[3];
typedef unsigned short type_100[8];
typedef unsigned short type_101[4];

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

struct _anon0
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
	_anon0 blk_LightData;
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
	_anon17 DispEnv[3];
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

struct sh2gfw_AREA_HEAD
{
	unsigned int area_id;
	unsigned int toGlobalTexHead;
	unsigned int toGlobalClutsHead;
	unsigned int date;
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

struct _anon2
{
	struct
	{
		unsigned long DTHE : 1;
		unsigned long pad01 : 63;
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

struct _anon3
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

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
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

struct _anon4
{
	_anon10 testa;
	long testaaddr;
	_anon22 prim;
	long primaddr;
	_anon3 rgbaq;
	long rgbaqaddr;
	_anon16 xyz2a;
	long xyz2aaddr;
	_anon16 xyz2b;
	long xyz2baddr;
	_anon10 testb;
	long testbaddr;
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

struct sh2gfw_TexMAN
{
	unsigned short check;
	unsigned short mode;
	unsigned short kind;
	unsigned short mark;
	unsigned short attr;
	unsigned short delay;
	int commandid;
	int slotid;
	void* Manage;
	sh2gfw_TexMAN* pPrev;
	sh2gfw_TexMAN* pNext;
	void* TexHead;
	void* ClutHead;
	void* tex;
	void* clut;
	Q_WORDDATA GIFA_D_REGS;
	Q_WORDDATA GS_TEXFLUSH;
	Q_WORDDATA GS_TEX0_1;
	Q_WORDDATA GS_TEX0_2;
	Q_WORDDATA GS_REG0;
	Q_WORDDATA GS_REG1;
	Q_WORDDATA GS_REG2;
	Q_WORDDATA GS_REG3;
	Q_WORDDATA GS_REG4;
	Q_WORDDATA TEX0_for_CLUT[48];
	Q_WORDDATA DMACNT;
	Q_WORDDATA GIFA_D_TEX;
	Q_WORDDATA GS_LABEL;
	Q_WORDDATA GS_TEX_BITBLT;
	Q_WORDDATA GS_TEX_TRXREG;
	Q_WORDDATA GS_TEX_TRXPOS;
	Q_WORDDATA GS_TEX_TRXDIR;
	Q_WORDDATA GIFIMAGE_TEX;
	Q_WORDDATA DMAREF_TEXTRANS;
	Q_WORDDATA DMACNT_CLUT;
	Q_WORDDATA GIFA_D_CLUT;
	Q_WORDDATA GS_CLUT_BITBLT;
	Q_WORDDATA GS_CLUT_TRXREG;
	Q_WORDDATA GS_CLUT_TRXPOS;
	Q_WORDDATA GS_CLUT_TRXDIR;
	Q_WORDDATA GIFIMAGE_CLUT;
	Q_WORDDATA DMAREF_CLUTTRANS;
	Q_WORDDATA DMAREF_DUMLBL;
	Q_WORDDATA DMAEND;
	Q_WORDDATA GIFA_D_LBLU;
	Q_WORDDATA GS_LABELU;
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

struct sh2gfw_ALLTEXSYNC_MAN
{
	unsigned short trans_BACK_num;
	unsigned short transed_BACK;
	unsigned short alltex_BACK;
	unsigned short trans_CHR_num;
	unsigned short transed_CHR;
	unsigned short alltex_CHR;
	unsigned short trans_OTHER_num;
	unsigned short transed_OTHER;
	unsigned short alltex_OTHER;
	unsigned short trans_GBL_num;
	unsigned short transed_GBL;
	unsigned short alltex_GBL;
	unsigned short trans_ALL_num;
	unsigned short transed_ALL;
	unsigned short alltexnum;
	unsigned short trans_NOW_num;
	sh2gfw_TexMAN Empty_Head;
	sh2gfw_TexMAN Used_Head;
	int dbg_add;
	int dbg_del;
	int pad1;
	int pad2;
	Q_WORDDATA TexTransChain[96];
	sh2gfw_TexMAN* TransOrderTable[96];
	sh2gfw_TexMAN TexMan[96];
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

struct sh2gfw_SPOTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA spot_rot;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
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

struct sh2gfw_POINTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
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

struct _anon9
{
	Q_WORDDATA* GS_kick;
	Q_WORDDATA* GS_tail;
	unsigned short main_num;
	unsigned short transnum;
	unsigned int pad1;
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

struct shGsDrawEnv
{
	_anon12 giftag;
	_anon19 draw;
	Q_WORDDATA drawq2[5];
	_anon4 clear;
	_anon12 giftag_nc;
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

struct _anon10
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

union _anon11
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _anon12
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

struct _anon13
{
	struct
	{
		unsigned long CLAMP : 1;
		unsigned long pad01 : 63;
	};
};

struct _anon14
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

struct _anon15
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
	_anon12 giftag;
	_anon19 draw;
	Q_WORDDATA alpha1;
	Q_WORDDATA drawq2[6];
	_anon4 clear;
	Q_WORDDATA frame;
	_anon12 giftag_nc;
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

struct _anon16
{
	struct
	{
		unsigned long X : 16;
		unsigned long Y : 16;
		unsigned long Z : 32;
	};
};

struct _anon17
{
	_anon7 pmode;
	_anon14 smode2;
	_anon8 dispfb;
	_anon18 display;
	_anon20 bgcolor;
};

struct _anon18
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

struct _VbWVSMATRIX
{
	float wvm[4][4];
	float vsm[4][4];
	float wsm[4][4];
};

struct _anon19
{
	_anon6 frame1;
	unsigned long frame1addr;
	_anon21 zbuf1;
	long zbuf1addr;
	_anon15 xyoffset1;
	long xyoffset1addr;
	_anon5 scissor1;
	long scissor1addr;
	_anon1 prmodecont;
	long prmodecontaddr;
	_anon13 colclamp;
	long colclampaddr;
	_anon2 dthe;
	long dtheaddr;
	_anon10 test1;
	long test1addr;
};

struct _anon20
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

struct _anon21
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

struct _anon22
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

struct _VbSCREENINFO
{
	float scr_z;
	float sx;
	float sy;
	float cx;
	float cy;
	float zmin;
	float zmax;
	float nearz;
	float farz;
};

struct _anon23
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
_anon9 GSCTL_man;
Q_WORDDATA mct;
sh2gfw_Env_ctl Env_ctl;
unsigned long res2;
unsigned long res;
Q_WORDDATA Noise_Packet[0];
int filter_step;
unsigned int paddata2;
Q_WORDDATA TWOD_FILTER_PACK[0];
sh2gfw_VU_PARMS VU1_PARMS;
_anon23 cam0;
_VbWVSMATRIX VbWvsMatrix;
_VbSCREENINFO VbScreenInfo;
float clip_volume[4];
sh2gfw_ALLTEXSYNC_MAN AllTexSync_Man;
sh2gfw_BLOCK_MAN b_man[6];
int shadow_check;
int fog_check;

void all_Frame_Buffer_Clear();
void DrawLopp_Pre();
void kari_drawloop_main_2dSYNC();
void draw_main_3dSYNC();
void DrawLopp_Post();
void draw_main();
void GSFilterExec4NextLoop();
void Calc_Set_Matrix();
void gs_loppstart_init();
void kari_setdmatag_and_draw();
void kari_set_lightEnv();
void Draw_Character_And_Shadow();
void Spack_All_Draw();
void sh2gfw_Set_CommonDrawEnv();

// 
// Start address: 0x1a4990
void all_Frame_Buffer_Clear()
{
	Q_WORDDATA* kick;
	// Line 104, Address: 0x1a4990, Func Offset: 0
	// Line 106, Address: 0x1a499c, Func Offset: 0xc
	// Line 107, Address: 0x1a49ac, Func Offset: 0x1c
	// Line 108, Address: 0x1a49bc, Func Offset: 0x2c
	// Line 109, Address: 0x1a49cc, Func Offset: 0x3c
	// Line 111, Address: 0x1a49dc, Func Offset: 0x4c
	// Line 112, Address: 0x1a49ec, Func Offset: 0x5c
	// Line 113, Address: 0x1a49fc, Func Offset: 0x6c
	// Line 115, Address: 0x1a4a0c, Func Offset: 0x7c
	// Line 116, Address: 0x1a4a1c, Func Offset: 0x8c
	// Line 120, Address: 0x1a4a2c, Func Offset: 0x9c
	// Line 121, Address: 0x1a4a38, Func Offset: 0xa8
	// Line 123, Address: 0x1a4a44, Func Offset: 0xb4
	// Line 125, Address: 0x1a4a54, Func Offset: 0xc4
	// Line 127, Address: 0x1a4a64, Func Offset: 0xd4
	// Func End, Address: 0x1a4a78, Func Offset: 0xe8
}

// 
// Start address: 0x1a4a80
void DrawLopp_Pre()
{
	// Line 131, Address: 0x1a4a80, Func Offset: 0
	// Line 133, Address: 0x1a4a88, Func Offset: 0x8
	// Line 134, Address: 0x1a4a90, Func Offset: 0x10
	// Line 139, Address: 0x1a4a98, Func Offset: 0x18
	// Line 143, Address: 0x1a4aa0, Func Offset: 0x20
	// Line 147, Address: 0x1a4aa8, Func Offset: 0x28
	// Line 152, Address: 0x1a4ab0, Func Offset: 0x30
	// Line 157, Address: 0x1a4ac0, Func Offset: 0x40
	// Line 162, Address: 0x1a4ac8, Func Offset: 0x48
	// Line 167, Address: 0x1a4ad0, Func Offset: 0x50
	// Line 172, Address: 0x1a4ae0, Func Offset: 0x60
	// Line 176, Address: 0x1a4ae8, Func Offset: 0x68
	// Line 177, Address: 0x1a4af0, Func Offset: 0x70
	// Func End, Address: 0x1a4b00, Func Offset: 0x80
}

// 
// Start address: 0x1a4b00
void kari_drawloop_main_2dSYNC()
{
	// Line 186, Address: 0x1a4b00, Func Offset: 0
	// Line 190, Address: 0x1a4b08, Func Offset: 0x8
	// Line 193, Address: 0x1a4b10, Func Offset: 0x10
	// Line 196, Address: 0x1a4b18, Func Offset: 0x18
	// Line 197, Address: 0x1a4b28, Func Offset: 0x28
	// Line 198, Address: 0x1a4b38, Func Offset: 0x38
	// Line 208, Address: 0x1a4b48, Func Offset: 0x48
	// Func End, Address: 0x1a4b58, Func Offset: 0x58
}

// 
// Start address: 0x1a4b60
void draw_main_3dSYNC()
{
	// Line 214, Address: 0x1a4b60, Func Offset: 0
	// Line 218, Address: 0x1a4b68, Func Offset: 0x8
	// Line 226, Address: 0x1a4b70, Func Offset: 0x10
	// Line 227, Address: 0x1a4b80, Func Offset: 0x20
	// Line 229, Address: 0x1a4b90, Func Offset: 0x30
	// Line 230, Address: 0x1a4ba8, Func Offset: 0x48
	// Line 232, Address: 0x1a4bc0, Func Offset: 0x60
	// Line 234, Address: 0x1a4bd8, Func Offset: 0x78
	// Line 246, Address: 0x1a4bf4, Func Offset: 0x94
	// Func End, Address: 0x1a4c04, Func Offset: 0xa4
}

// 
// Start address: 0x1a4c10
void DrawLopp_Post()
{
	// Line 252, Address: 0x1a4c10, Func Offset: 0
	// Line 256, Address: 0x1a4c18, Func Offset: 0x8
	// Line 258, Address: 0x1a4c40, Func Offset: 0x30
	// Line 261, Address: 0x1a4c48, Func Offset: 0x38
	// Line 262, Address: 0x1a4c58, Func Offset: 0x48
	// Line 268, Address: 0x1a4c68, Func Offset: 0x58
	// Line 271, Address: 0x1a4c78, Func Offset: 0x68
	// Line 272, Address: 0x1a4c84, Func Offset: 0x74
	// Line 277, Address: 0x1a4c90, Func Offset: 0x80
	// Line 281, Address: 0x1a4c98, Func Offset: 0x88
	// Line 289, Address: 0x1a4ca4, Func Offset: 0x94
	// Line 290, Address: 0x1a4cb8, Func Offset: 0xa8
	// Line 298, Address: 0x1a4cc8, Func Offset: 0xb8
	// Line 299, Address: 0x1a4cd8, Func Offset: 0xc8
	// Func End, Address: 0x1a4ce8, Func Offset: 0xd8
}

// 
// Start address: 0x1a4cf0
void draw_main()
{
	Q_WORDDATA* qwd;
	// Line 308, Address: 0x1a4cf0, Func Offset: 0
	// Line 314, Address: 0x1a4cf8, Func Offset: 0x8
	// Line 316, Address: 0x1a4d00, Func Offset: 0x10
	// Line 322, Address: 0x1a4d14, Func Offset: 0x24
	// Line 328, Address: 0x1a4d1c, Func Offset: 0x2c
	// Line 340, Address: 0x1a4d24, Func Offset: 0x34
	// Line 342, Address: 0x1a4d30, Func Offset: 0x40
	// Line 351, Address: 0x1a4d38, Func Offset: 0x48
	// Line 359, Address: 0x1a4d40, Func Offset: 0x50
	// Line 365, Address: 0x1a4d48, Func Offset: 0x58
	// Line 372, Address: 0x1a4d50, Func Offset: 0x60
	// Line 377, Address: 0x1a4d58, Func Offset: 0x68
	// Line 404, Address: 0x1a4d60, Func Offset: 0x70
	// Line 405, Address: 0x1a4d70, Func Offset: 0x80
	// Line 406, Address: 0x1a4d7c, Func Offset: 0x8c
	// Line 408, Address: 0x1a4d94, Func Offset: 0xa4
	// Line 409, Address: 0x1a4dbc, Func Offset: 0xcc
	// Line 412, Address: 0x1a4ddc, Func Offset: 0xec
	// Line 414, Address: 0x1a4e04, Func Offset: 0x114
	// Line 419, Address: 0x1a4e14, Func Offset: 0x124
	// Line 424, Address: 0x1a4e30, Func Offset: 0x140
	// Line 427, Address: 0x1a4e58, Func Offset: 0x168
	// Func End, Address: 0x1a4e68, Func Offset: 0x178
}

// 
// Start address: 0x1a4e70
void GSFilterExec4NextLoop()
{
	int idd[3];
	Q_WORDDATA* qwd2;
	Q_WORDDATA* qwd;
	// Line 443, Address: 0x1a4e70, Func Offset: 0
	// Line 445, Address: 0x1a4e7c, Func Offset: 0xc
	// Line 447, Address: 0x1a4e98, Func Offset: 0x28
	// Line 451, Address: 0x1a4ea4, Func Offset: 0x34
	// Line 453, Address: 0x1a4eb4, Func Offset: 0x44
	// Line 454, Address: 0x1a4eb8, Func Offset: 0x48
	// Line 455, Address: 0x1a4ec4, Func Offset: 0x54
	// Line 467, Address: 0x1a4ed0, Func Offset: 0x60
	// Line 469, Address: 0x1a4ee4, Func Offset: 0x74
	// Line 470, Address: 0x1a4ee8, Func Offset: 0x78
	// Line 471, Address: 0x1a4f0c, Func Offset: 0x9c
	// Line 472, Address: 0x1a4f34, Func Offset: 0xc4
	// Line 481, Address: 0x1a4f40, Func Offset: 0xd0
	// Line 482, Address: 0x1a4f5c, Func Offset: 0xec
	// Line 483, Address: 0x1a4f60, Func Offset: 0xf0
	// Line 484, Address: 0x1a4f84, Func Offset: 0x114
	// Line 485, Address: 0x1a4fac, Func Offset: 0x13c
	// Line 486, Address: 0x1a4fb8, Func Offset: 0x148
	// Line 490, Address: 0x1a4fc8, Func Offset: 0x158
	// Line 493, Address: 0x1a4fd4, Func Offset: 0x164
	// Line 504, Address: 0x1a4fe0, Func Offset: 0x170
	// Func End, Address: 0x1a4ff4, Func Offset: 0x184
}

// 
// Start address: 0x1a5000
void Calc_Set_Matrix()
{
	// Line 515, Address: 0x1a5000, Func Offset: 0
	// Line 527, Address: 0x1a5008, Func Offset: 0x8
	// Line 529, Address: 0x1a5020, Func Offset: 0x20
	// Line 532, Address: 0x1a5028, Func Offset: 0x28
	// Line 535, Address: 0x1a503c, Func Offset: 0x3c
	// Line 536, Address: 0x1a504c, Func Offset: 0x4c
	// Line 537, Address: 0x1a505c, Func Offset: 0x5c
	// Line 539, Address: 0x1a5064, Func Offset: 0x64
	// Line 540, Address: 0x1a5078, Func Offset: 0x78
	// Line 543, Address: 0x1a508c, Func Offset: 0x8c
	// Line 558, Address: 0x1a50a4, Func Offset: 0xa4
	// Line 565, Address: 0x1a5134, Func Offset: 0x134
	// Line 573, Address: 0x1a5154, Func Offset: 0x154
	// Line 596, Address: 0x1a515c, Func Offset: 0x15c
	// Line 597, Address: 0x1a5174, Func Offset: 0x174
	// Line 609, Address: 0x1a518c, Func Offset: 0x18c
	// Line 610, Address: 0x1a51a4, Func Offset: 0x1a4
	// Line 612, Address: 0x1a51bc, Func Offset: 0x1bc
	// Line 621, Address: 0x1a5208, Func Offset: 0x208
	// Line 624, Address: 0x1a5210, Func Offset: 0x210
	// Func End, Address: 0x1a5220, Func Offset: 0x220
}

// 
// Start address: 0x1a5220
void gs_loppstart_init()
{
	Q_WORDDATA* kick;
	// Line 721, Address: 0x1a5220, Func Offset: 0
	// Line 724, Address: 0x1a522c, Func Offset: 0xc
	// Line 726, Address: 0x1a523c, Func Offset: 0x1c
	// Line 727, Address: 0x1a524c, Func Offset: 0x2c
	// Line 730, Address: 0x1a525c, Func Offset: 0x3c
	// Line 731, Address: 0x1a5268, Func Offset: 0x48
	// Line 751, Address: 0x1a5274, Func Offset: 0x54
	// Func End, Address: 0x1a5288, Func Offset: 0x68
}

// 
// Start address: 0x1a5290
void kari_setdmatag_and_draw()
{
	Q_WORDDATA* buf;
	Q_WORDDATA* qwd;
	// Line 756, Address: 0x1a5290, Func Offset: 0
	// Line 760, Address: 0x1a529c, Func Offset: 0xc
	// Line 761, Address: 0x1a52a8, Func Offset: 0x18
	// Line 766, Address: 0x1a52ac, Func Offset: 0x1c
	// Line 768, Address: 0x1a52b8, Func Offset: 0x28
	// Line 771, Address: 0x1a52d0, Func Offset: 0x40
	// Line 773, Address: 0x1a52e4, Func Offset: 0x54
	// Line 774, Address: 0x1a52f0, Func Offset: 0x60
	// Line 775, Address: 0x1a52fc, Func Offset: 0x6c
	// Line 779, Address: 0x1a5300, Func Offset: 0x70
	// Line 780, Address: 0x1a5310, Func Offset: 0x80
	// Line 784, Address: 0x1a5328, Func Offset: 0x98
	// Line 790, Address: 0x1a5334, Func Offset: 0xa4
	// Func End, Address: 0x1a5348, Func Offset: 0xb8
}

// 
// Start address: 0x1a5350
void kari_set_lightEnv()
{
	int i;
	int max;
	// Line 800, Address: 0x1a5350, Func Offset: 0
	// Line 803, Address: 0x1a5360, Func Offset: 0x10
	// Line 805, Address: 0x1a536c, Func Offset: 0x1c
	// Line 808, Address: 0x1a5398, Func Offset: 0x48
	// Line 811, Address: 0x1a53a4, Func Offset: 0x54
	// Line 822, Address: 0x1a5404, Func Offset: 0xb4
	// Line 827, Address: 0x1a5414, Func Offset: 0xc4
	// Line 832, Address: 0x1a541c, Func Offset: 0xcc
	// Line 833, Address: 0x1a5428, Func Offset: 0xd8
	// Line 842, Address: 0x1a5480, Func Offset: 0x130
	// Line 847, Address: 0x1a5494, Func Offset: 0x144
	// Line 853, Address: 0x1a5498, Func Offset: 0x148
	// Line 856, Address: 0x1a54b0, Func Offset: 0x160
	// Func End, Address: 0x1a54c8, Func Offset: 0x178
}

// 
// Start address: 0x1a54d0
void Draw_Character_And_Shadow()
{
	int count;
	int shadow_flg;
	int flare_flg;
	// Line 863, Address: 0x1a54d0, Func Offset: 0
	// Line 866, Address: 0x1a54dc, Func Offset: 0xc
	// Line 873, Address: 0x1a54ec, Func Offset: 0x1c
	// Line 875, Address: 0x1a54f4, Func Offset: 0x24
	// Line 880, Address: 0x1a5500, Func Offset: 0x30
	// Line 884, Address: 0x1a5510, Func Offset: 0x40
	// Line 886, Address: 0x1a5518, Func Offset: 0x48
	// Line 889, Address: 0x1a5530, Func Offset: 0x60
	// Line 894, Address: 0x1a5550, Func Offset: 0x80
	// Line 900, Address: 0x1a5558, Func Offset: 0x88
	// Line 901, Address: 0x1a5570, Func Offset: 0xa0
	// Line 902, Address: 0x1a559c, Func Offset: 0xcc
	// Line 903, Address: 0x1a55ac, Func Offset: 0xdc
	// Line 908, Address: 0x1a55cc, Func Offset: 0xfc
	// Line 912, Address: 0x1a55dc, Func Offset: 0x10c
	// Line 920, Address: 0x1a55e4, Func Offset: 0x114
	// Line 927, Address: 0x1a55ec, Func Offset: 0x11c
	// Line 933, Address: 0x1a55f4, Func Offset: 0x124
	// Line 934, Address: 0x1a5600, Func Offset: 0x130
	// Line 935, Address: 0x1a5618, Func Offset: 0x148
	// Line 940, Address: 0x1a5620, Func Offset: 0x150
	// Func End, Address: 0x1a5634, Func Offset: 0x164
}

// 
// Start address: 0x1a5640
void Spack_All_Draw()
{
	// Line 948, Address: 0x1a5640, Func Offset: 0
	// Line 950, Address: 0x1a5648, Func Offset: 0x8
	// Line 956, Address: 0x1a5650, Func Offset: 0x10
	// Line 962, Address: 0x1a5668, Func Offset: 0x28
	// Line 963, Address: 0x1a5694, Func Offset: 0x54
	// Line 965, Address: 0x1a56b8, Func Offset: 0x78
	// Line 967, Address: 0x1a56d8, Func Offset: 0x98
	// Line 970, Address: 0x1a56ec, Func Offset: 0xac
	// Line 977, Address: 0x1a56f4, Func Offset: 0xb4
	// Line 985, Address: 0x1a56fc, Func Offset: 0xbc
	// Line 986, Address: 0x1a5704, Func Offset: 0xc4
	// Line 995, Address: 0x1a570c, Func Offset: 0xcc
	// Line 1000, Address: 0x1a5714, Func Offset: 0xd4
	// Line 1003, Address: 0x1a571c, Func Offset: 0xdc
	// Func End, Address: 0x1a572c, Func Offset: 0xec
}

// 
// Start address: 0x1a5730
void sh2gfw_Set_CommonDrawEnv()
{
	Q_WORDDATA* qwd;
	Q_WORDDATA CommonEnv[4];
	// Line 1010, Address: 0x1a5730, Func Offset: 0
	// Line 1014, Address: 0x1a573c, Func Offset: 0xc
	// Line 1016, Address: 0x1a574c, Func Offset: 0x1c
	// Line 1018, Address: 0x1a5774, Func Offset: 0x44
	// Line 1020, Address: 0x1a5794, Func Offset: 0x64
	// Line 1022, Address: 0x1a57ac, Func Offset: 0x7c
	// Line 1023, Address: 0x1a57b0, Func Offset: 0x80
	// Line 1025, Address: 0x1a57b8, Func Offset: 0x88
	// Line 1027, Address: 0x1a57c8, Func Offset: 0x98
	// Func End, Address: 0x1a57dc, Func Offset: 0xac
}

