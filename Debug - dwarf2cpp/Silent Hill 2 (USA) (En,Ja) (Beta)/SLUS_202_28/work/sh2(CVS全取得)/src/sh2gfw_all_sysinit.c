typedef struct sh2gfw_BLOCKGLOBAL_HEAD;
typedef struct shBattleFight;
typedef struct shGsTinyDrawEnv;
typedef struct _AnimeInfo;
typedef struct sh2gfw_GIFTAG_HEAD;
typedef struct _anon0;
typedef struct shBattleShot;
typedef union fsFileIndex;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef union fsFile;
typedef struct sh2gfw_BLOCKLOCAL_HEAD;
typedef struct _anon4;
typedef struct Stage_Data;
typedef struct FilesBgBlock;
typedef struct shGsAllEnv;
typedef struct sh2gfw_TEX_HEAD;
typedef struct sh2gfw_TRANS_MAN;
typedef struct _anon5;
typedef struct _anon6;
typedef struct _anon7;
typedef struct Event_List;
typedef struct _anon8;
typedef struct sh2gfw_CLUTS_HEAD;
typedef struct sh2gfw_TexMAN;
typedef struct sh2gfw_AREA_HEAD;
typedef struct shAttackInfo;
typedef struct Item_List;
typedef struct _anon9;
typedef struct _anon10;
typedef union Q_WORDDATA;
typedef union _anon11;
typedef struct _anon12;
typedef struct _anon13;
typedef struct _anon14;
typedef struct _anon15;
typedef struct Model_List;
typedef struct _anon16;
typedef struct sh2gfw_GSREGS_HEAD;
typedef struct sh2gfw_BLOCK_MAN;
typedef struct shGsDrawEnv;
typedef struct sh2gfw_BLOCK_HEAD;
typedef struct fsCdFile;
typedef struct _anon17;
typedef struct Enemy_List;
typedef struct _anon18;
typedef struct fsMgcFile;
typedef struct _anon19;
typedef struct shGsStencilDrawEnv;
typedef struct sh2gfw_ALLTEXSYNC_MAN;
typedef struct _anon20;
typedef struct fsMgfFile;
typedef struct _anon21;
typedef struct _anon22;
typedef struct _anon23;
typedef struct _anon24;
typedef struct fsHdFile;
typedef struct shGsLoopEnv;
typedef struct sh2gfw_VU_PARMS;
typedef struct fsMgpFile;
typedef struct _anon25;

typedef void(*type_0)();
typedef int(*type_6)();

typedef unsigned int type_1[3];
typedef Q_WORDDATA type_2[48];
typedef unsigned short type_3[8];
typedef sh2gfw_TexMAN type_4[96];
typedef Q_WORDDATA type_5[2];
typedef sh2gfw_GIFTAG_HEAD* type_7[16];
typedef unsigned char type_8[8];
typedef unsigned char type_9[8][8];
typedef unsigned short type_10[3];
typedef Q_WORDDATA type_11[3];
typedef unsigned short type_12[3];
typedef unsigned short type_13[4];
typedef _anon7 type_14[3];
typedef shGsDrawEnv type_15[3];
typedef shGsStencilDrawEnv type_16[3];
typedef float type_17[4];
typedef unsigned char* type_18[4];
typedef shGsTinyDrawEnv type_19[6];
typedef Q_WORDDATA type_20[10];
typedef sh2gfw_GIFTAG_HEAD* type_21[16];
typedef unsigned char type_22[7];
typedef sh2gfw_GIFTAG_HEAD* type_23[16][4];
typedef Q_WORDDATA type_24[10];
typedef unsigned char type_25[7];
typedef unsigned short type_26[7];
typedef Q_WORDDATA type_27[10];
typedef Q_WORDDATA type_28[10];
typedef unsigned char* type_29[7];
typedef Q_WORDDATA type_30[10];
typedef unsigned char type_31[4];
typedef Q_WORDDATA type_32[10];
typedef sh2gfw_GIFTAG_HEAD* type_33[16];
typedef Q_WORDDATA type_34[10];
typedef sh2gfw_GIFTAG_HEAD* type_35[16][4];
typedef Q_WORDDATA type_36[8];
typedef unsigned int type_37[4];
typedef Q_WORDDATA type_38[2];
typedef unsigned short type_39[8];
typedef float type_40[4];
typedef Q_WORDDATA type_41[2];
typedef float type_42[4];
typedef unsigned char type_43[16];
typedef float type_44[4];
typedef Q_WORDDATA type_45[2];
typedef unsigned char type_46[4];
typedef float type_47[4][4];
typedef int type_48[4];
typedef Q_WORDDATA type_49[2];
typedef unsigned char type_50[16];
typedef short type_51[8];
typedef Q_WORDDATA type_52[2];
typedef unsigned char type_53[16];
typedef char type_54[16];
typedef Q_WORDDATA type_55[2];
typedef unsigned long type_56[2];
typedef float type_57[4][2];
typedef Q_WORDDATA type_58[2];
typedef Q_WORDDATA type_59[2];
typedef Q_WORDDATA type_60[2];
typedef Q_WORDDATA type_61[5];
typedef Q_WORDDATA type_62[2];
typedef Q_WORDDATA type_63[2];
typedef unsigned char type_64[16];
typedef sh2gfw_GSREGS_HEAD* type_65[4];
typedef unsigned char type_66[16];
typedef Q_WORDDATA type_67[2];
typedef Q_WORDDATA type_68[5];
typedef sh2gfw_GIFTAG_HEAD* type_69[16];
typedef sh2gfw_GIFTAG_HEAD* type_70[16][4];
typedef Q_WORDDATA type_71[2];
typedef shAttackInfo type_72[66];
typedef unsigned short type_73[8];
typedef unsigned short type_74[8][16];
typedef Q_WORDDATA type_75[2];
typedef unsigned short type_76[8][16][4];
typedef Q_WORDDATA type_77[2];
typedef sh2gfw_TEX_HEAD* type_78[4];
typedef Q_WORDDATA type_79[2];
typedef sh2gfw_CLUTS_HEAD* type_80[4];
typedef Q_WORDDATA type_81[2];
typedef unsigned char type_82[4];
typedef Q_WORDDATA type_83[2];
typedef unsigned char type_84[16];
typedef unsigned char type_85[16][4];
typedef Q_WORDDATA type_86[2];
typedef unsigned char type_87[16];
typedef unsigned char type_88[16][16];
typedef unsigned char type_89[16][16][4];
typedef Q_WORDDATA type_90[2];
typedef Q_WORDDATA type_91[6];
typedef Q_WORDDATA type_92[2];
typedef unsigned int type_93[3];
typedef unsigned int type_94[3];
typedef Q_WORDDATA type_95[6];
typedef void* type_96[4];
typedef Q_WORDDATA* type_97[4];
typedef unsigned int type_98[4];
typedef int type_99[8];
typedef int type_100[8];
typedef unsigned int type_101[3];
typedef unsigned int type_102[3];
typedef unsigned int type_103[3];
typedef sh2gfw_BLOCK_MAN type_104[6];
typedef unsigned int type_105[24];
typedef unsigned int type_106[3];

struct sh2gfw_BLOCKGLOBAL_HEAD
{
	unsigned int gsregsamount;
	unsigned int transamount;
	unsigned char gtexnum;
	unsigned char gtransnum;
	unsigned short pads;
	unsigned int pad2;
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
		unsigned long DTHE : 1;
		unsigned long pad01 : 63;
	};
};

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

union fsFileIndex
{
	_anon3 index;
	unsigned long pack;
};

struct _anon1
{
	struct
	{
		unsigned long AC : 1;
		unsigned long pad01 : 63;
	};
};

struct _anon2
{
	void(*SpecDraw)();
	void(*PreDraw)();
	void(*PostDraw)();
	void(*CharaDraw_Hook)();
};

struct _anon3
{
	fsFile* fp;
	char* name;
};

union fsFile
{
	_anon25 check;
	<unknown fundamental type (0xa510)> pack;
	fsCdFile cd;
	fsHdFile hd;
	fsMgcFile mgc;
	fsMgfFile mgf;
	fsMgpFile mgp;
};

struct sh2gfw_BLOCKLOCAL_HEAD
{
	unsigned short gsregsamount[3];
	unsigned short transamount[3];
	unsigned short ltexnum;
	unsigned short pads;
};

struct _anon4
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
	_anon2* gfw_func;
	int(*chara_data_clear)();
	void(*sound_call_after_load)();
	int reserve_11;
};

struct FilesBgBlock
{
	fsFileIndex* map;
	fsFileIndex* cld;
	fsFileIndex* cam;
	fsFileIndex* kg2;
	fsFileIndex* tex;
	fsFileIndex* ex0;
	fsFileIndex* ex1;
	fsFileIndex* ex2;
};

struct shGsAllEnv
{
	unsigned long loop_counter;
	unsigned int loop;
	unsigned int loop3;
	shGsLoopEnv LoopEnv;
	_anon7 DispEnv[3];
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

struct sh2gfw_TRANS_MAN
{
	unsigned int blockid;
	_anon5* pA_M;
	unsigned short objnum[4];
	unsigned int trans_clutnum;
	unsigned int pad2;
	unsigned int pad3;
	unsigned int pad4;
	unsigned char* trgehead[4];
	sh2gfw_GIFTAG_HEAD* pTR_global_GIF_H[16][4];
	sh2gfw_TEX_HEAD* p_GTexHead;
	sh2gfw_CLUTS_HEAD* p_GClutHead;
	sh2gfw_TexMAN* p_GTexMan;
	unsigned char used_Ggifnum[4];
	sh2gfw_GIFTAG_HEAD* pTR_trans_GIF_H[16][4];
	sh2gfw_TEX_HEAD* p_TRTexHead;
	sh2gfw_CLUTS_HEAD* p_TRClutHead;
	sh2gfw_TexMAN* p_TRTexMan;
	unsigned char used_TRgifnum[4];
};

struct _anon5
{
	unsigned int areaid;
	unsigned char use_Globalflg[7];
	unsigned char use_Transflg[7];
	unsigned short block_id[7];
	unsigned char* block_man[7];
	sh2gfw_AREA_HEAD* pA_H;
	sh2gfw_TEX_HEAD* global_tex;
	sh2gfw_CLUTS_HEAD* global_clut;
	sh2gfw_TEX_HEAD* global_transtex;
	sh2gfw_CLUTS_HEAD* global_transclut;
	sh2gfw_TexMAN* gTexMAN;
	sh2gfw_TexMAN* gTranstexMAN;
	unsigned short gtex_mode;
	unsigned short gtrans_mode;
	unsigned int pad1;
};

struct _anon6
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

struct _anon7
{
	_anon9 pmode;
	_anon18 smode2;
	_anon12 dispfb;
	_anon20 display;
	_anon22 bgcolor;
};

struct Event_List
{
	int flag;
	int cond;
	int rslt0;
	int rslt1;
};

struct _anon8
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

struct sh2gfw_AREA_HEAD
{
	unsigned int area_id;
	unsigned int toGlobalTexHead;
	unsigned int toGlobalClutsHead;
	unsigned int date;
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

struct Item_List
{
	float pos_x;
	float pos_z;
	unsigned short pos_y;
	unsigned short rot_y;
	unsigned int st;
};

struct _anon9
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

struct _anon10
{
	_anon8 frame1;
	unsigned long frame1addr;
	_anon23 zbuf1;
	long zbuf1addr;
	_anon17 xyoffset1;
	long xyoffset1addr;
	_anon6 scissor1;
	long scissor1addr;
	_anon1 prmodecont;
	long prmodecontaddr;
	_anon16 colclamp;
	long colclampaddr;
	_anon0 dthe;
	long dtheaddr;
	_anon13 test1;
	long test1addr;
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

union _anon11
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _anon12
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

struct _anon13
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

struct _anon15
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

struct Model_List
{
	short kind;
	short id;
	short flag_off;
	short flag_on;
	float pos[4];
	float rot[4];
};

struct _anon16
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

struct shGsDrawEnv
{
	_anon15 giftag;
	_anon10 draw;
	Q_WORDDATA drawq2[5];
	_anon21 clear;
	_anon15 giftag_nc;
	_anon10 draw_nc;
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

struct fsCdFile
{
	struct
	{
		int type : 8;
		int number : 24;
	};
	char* name;
	int lsn;
	int size;
};

struct _anon17
{
	struct
	{
		unsigned long OFX : 16;
		unsigned long pad16 : 16;
		unsigned long OFY : 16;
		unsigned long pad48 : 16;
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

struct _anon18
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

struct fsMgcFile
{
	struct
	{
		int type : 8;
		int padding : 24;
	};
	fsFile* parent;
	char* start;
	char* end;
};

struct _anon19
{
	struct
	{
		unsigned long X : 16;
		unsigned long Y : 16;
		unsigned long Z : 32;
	};
};

struct shGsStencilDrawEnv
{
	_anon15 giftag;
	_anon10 draw;
	Q_WORDDATA alpha1;
	Q_WORDDATA drawq2[6];
	_anon21 clear;
	Q_WORDDATA frame;
	_anon15 giftag_nc;
	_anon10 draw_nc;
	Q_WORDDATA alpha1_nc;
	Q_WORDDATA drawq2_nc[6];
	Q_WORDDATA gifad_frame_normal;
	Q_WORDDATA frame_normal;
	Q_WORDDATA gifad_frame_mskalpha;
	Q_WORDDATA frame_mskalpha;
	Q_WORDDATA gifad_frame_mskDalpha;
	Q_WORDDATA frame_mskDalpha;
};

struct sh2gfw_ALLTEXSYNC_MAN
{
	short g_BG;
	short st_BG;
	short l_BG;
	short bg_CHR;
	short human_CHR;
	short en_CHR;
	short ura_CHR;
	short x_CHR;
	short alltex_CHR;
	short oS_CHR;
	short oA_CHR;
	short wp_CHR;
	short alltexnum;
	short alltex_BG;
	short alltex_EFF;
	unsigned short trans_NOW_num;
	sh2gfw_TexMAN Empty_Head;
	sh2gfw_TexMAN Used_Head;
	int dbg_add;
	int dbg_del;
	unsigned short fonttex;
	unsigned short pads;
	int pad2;
	sh2gfw_TexMAN TexMan[96];
};

struct _anon20
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

struct fsMgfFile
{
	struct
	{
		int type : 8;
		int padding : 24;
	};
	fsFile* parent;
	int offset;
	int size;
};

struct _anon21
{
	_anon13 testa;
	long testaaddr;
	_anon24 prim;
	long primaddr;
	_anon4 rgbaq;
	long rgbaqaddr;
	_anon19 xyz2a;
	long xyz2aaddr;
	_anon19 xyz2b;
	long xyz2baddr;
	_anon13 testb;
	long testbaddr;
};

struct _anon22
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

struct _anon23
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

struct _anon24
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

struct fsHdFile
{
	struct
	{
		int type : 8;
		int padding : 24;
	};
	char* name;
	int offset;
	int size;
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

struct fsMgpFile
{
	struct
	{
		int type : 8;
		int padding : 24;
	};
	fsFile* file;
	fsMgcFile* start;
	fsMgcFile* end;
};

struct _anon25
{
	struct
	{
		int type : 8;
		int number : 24;
	};
	int pad0;
	int pad1;
	int pad2;
};

shAttackInfo sh2_attack_list[66];
Q_WORDDATA mct;
Stage_Data* stage;
_anon5 Area_Data_Man;
sh2gfw_TRANS_MAN sh2_TR_MAN;
sh2gfw_BLOCK_MAN b_man[6];
_anon14 LightEnv;
sh2gfw_ALLTEXSYNC_MAN AllTexSync_Man;
sh2gfw_VU_PARMS VU1_PARMS;
shGsAllEnv shGs_AllEnv;

int Vcallback_test(int ca);
void init_PS2();
void step_init_ONE();
void step_init_STAGE();
void map_DATA_LOAD();
void init_Env_ctl();
void init_GSandVU();

// 
// Start address: 0x19f730
int Vcallback_test(int ca)
{
	// Line 117, Address: 0x19f730, Func Offset: 0
	// Line 118, Address: 0x19f744, Func Offset: 0x14
	// Line 119, Address: 0x19f758, Func Offset: 0x28
	// Line 120, Address: 0x19f75c, Func Offset: 0x2c
	// Func End, Address: 0x19f764, Func Offset: 0x34
}

// 
// Start address: 0x19f770
void init_PS2()
{
	// Line 124, Address: 0x19f770, Func Offset: 0
	// Line 126, Address: 0x19f778, Func Offset: 0x8
	// Line 127, Address: 0x19f780, Func Offset: 0x10
	// Line 129, Address: 0x19f798, Func Offset: 0x28
	// Line 132, Address: 0x19f7a0, Func Offset: 0x30
	// Line 133, Address: 0x19f7ac, Func Offset: 0x3c
	// Line 135, Address: 0x19f7b4, Func Offset: 0x44
	// Line 139, Address: 0x19f7bc, Func Offset: 0x4c
	// Line 143, Address: 0x19f7c4, Func Offset: 0x54
	// Line 145, Address: 0x19f7e0, Func Offset: 0x70
	// Line 147, Address: 0x19f7ec, Func Offset: 0x7c
	// Line 148, Address: 0x19f7f4, Func Offset: 0x84
	// Line 150, Address: 0x19f800, Func Offset: 0x90
	// Line 158, Address: 0x19f80c, Func Offset: 0x9c
	// Func End, Address: 0x19f81c, Func Offset: 0xac
}

// 
// Start address: 0x19f820
void step_init_ONE()
{
	// Line 166, Address: 0x19f820, Func Offset: 0
	// Line 168, Address: 0x19f828, Func Offset: 0x8
	// Line 169, Address: 0x19f840, Func Offset: 0x20
	// Line 170, Address: 0x19f858, Func Offset: 0x38
	// Line 175, Address: 0x19f860, Func Offset: 0x40
	// Line 178, Address: 0x19f868, Func Offset: 0x48
	// Line 179, Address: 0x19f870, Func Offset: 0x50
	// Line 182, Address: 0x19f878, Func Offset: 0x58
	// Line 185, Address: 0x19f880, Func Offset: 0x60
	// Line 188, Address: 0x19f888, Func Offset: 0x68
	// Line 194, Address: 0x19f890, Func Offset: 0x70
	// Line 197, Address: 0x19f898, Func Offset: 0x78
	// Line 199, Address: 0x19f8a0, Func Offset: 0x80
	// Line 202, Address: 0x19f8a8, Func Offset: 0x88
	// Line 204, Address: 0x19f8b0, Func Offset: 0x90
	// Line 207, Address: 0x19f8b8, Func Offset: 0x98
	// Line 210, Address: 0x19f8c0, Func Offset: 0xa0
	// Line 215, Address: 0x19f8c8, Func Offset: 0xa8
	// Line 220, Address: 0x19f8d0, Func Offset: 0xb0
	// Line 222, Address: 0x19f8d8, Func Offset: 0xb8
	// Func End, Address: 0x19f8e8, Func Offset: 0xc8
}

// 
// Start address: 0x19f8f0
void step_init_STAGE()
{
	FilesBgBlock* bgfiles;
	// Line 231, Address: 0x19f8f0, Func Offset: 0
	// Line 240, Address: 0x19f8f8, Func Offset: 0x8
	// Line 278, Address: 0x19f900, Func Offset: 0x10
	// Line 282, Address: 0x19f908, Func Offset: 0x18
	// Line 288, Address: 0x19f910, Func Offset: 0x20
	// Line 296, Address: 0x19f918, Func Offset: 0x28
	// Line 308, Address: 0x19f924, Func Offset: 0x34
	// Line 320, Address: 0x19f944, Func Offset: 0x54
	// Line 321, Address: 0x19f95c, Func Offset: 0x6c
	// Line 322, Address: 0x19f964, Func Offset: 0x74
	// Line 325, Address: 0x19f984, Func Offset: 0x94
	// Func End, Address: 0x19f994, Func Offset: 0xa4
}

// 
// Start address: 0x19f9a0
void map_DATA_LOAD()
{
	void* trfile;
	int mapid;
	int i;
	// Line 338, Address: 0x19f9a0, Func Offset: 0
	// Line 345, Address: 0x19f9b0, Func Offset: 0x10
	// Line 346, Address: 0x19f9c8, Func Offset: 0x28
	// Line 349, Address: 0x19f9d0, Func Offset: 0x30
	// Line 352, Address: 0x19fa0c, Func Offset: 0x6c
	// Line 357, Address: 0x19fa14, Func Offset: 0x74
	// Line 359, Address: 0x19fa1c, Func Offset: 0x7c
	// Line 362, Address: 0x19fa24, Func Offset: 0x84
	// Line 363, Address: 0x19fa38, Func Offset: 0x98
	// Line 370, Address: 0x19fa40, Func Offset: 0xa0
	// Line 371, Address: 0x19fa4c, Func Offset: 0xac
	// Line 372, Address: 0x19fa58, Func Offset: 0xb8
	// Line 373, Address: 0x19fa68, Func Offset: 0xc8
	// Line 375, Address: 0x19fa78, Func Offset: 0xd8
	// Func End, Address: 0x19fa90, Func Offset: 0xf0
}

// 
// Start address: 0x19fa90
void init_Env_ctl()
{
	// Line 670, Address: 0x19fa90, Func Offset: 0
	// Func End, Address: 0x19fa98, Func Offset: 0x8
}

// 
// Start address: 0x19faa0
void init_GSandVU()
{
	// Line 673, Address: 0x19faa0, Func Offset: 0
	// Line 676, Address: 0x19faa8, Func Offset: 0x8
	// Line 680, Address: 0x19fad4, Func Offset: 0x34
	// Line 687, Address: 0x19faf8, Func Offset: 0x58
	// Line 688, Address: 0x19fb14, Func Offset: 0x74
	// Line 691, Address: 0x19fb24, Func Offset: 0x84
	// Line 693, Address: 0x19fb34, Func Offset: 0x94
	// Line 694, Address: 0x19fb48, Func Offset: 0xa8
	// Line 696, Address: 0x19fb58, Func Offset: 0xb8
	// Line 697, Address: 0x19fb68, Func Offset: 0xc8
	// Line 698, Address: 0x19fb70, Func Offset: 0xd0
	// Func End, Address: 0x19fb80, Func Offset: 0xe0
}

