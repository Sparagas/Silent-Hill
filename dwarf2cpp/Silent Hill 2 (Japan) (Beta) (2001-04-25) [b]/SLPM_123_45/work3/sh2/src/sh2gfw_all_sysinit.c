typedef struct _anon0;
typedef struct sh2gfw_GIFTAG_HEAD;
typedef struct FilesBgBlock;
typedef union fsFileIndex;
typedef struct sh2gfw_TEX_HEAD;
typedef struct sh2gfw_CLUTS_HEAD;
typedef struct sh2gfw_TexMAN;
typedef struct sh2gfw_AREA_HEAD;
typedef struct _anon1;
typedef struct _anon2;
typedef struct shGsTinyDrawEnv;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef struct _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef struct sh2gfw_BLOCK_MAN;
typedef struct shGsAllEnv;
typedef struct _anon9;
typedef union Q_WORDDATA;
typedef struct _anon10;
typedef struct sh2gfw_BLOCK_HEAD;
typedef struct sh2gfw_GSREGS_HEAD;
typedef struct sh2gfw_BLOCKGLOBAL_HEAD;
typedef struct sh2gfw_BLOCKLOCAL_HEAD;
typedef struct _anon11;
typedef struct shBattleFight;
typedef struct Model_List;
typedef union fsFile;
typedef struct _anon12;
typedef struct fsCdFile;
typedef struct shBattleShot;
typedef struct _anon13;
typedef struct _anon14;
typedef struct sh2gfw_ALLTEXSYNC_MAN;
typedef struct fsMgcFile;
typedef struct _anon15;
typedef struct sh2gfw_SPOTL_MATRIX;
typedef struct fsMgfFile;
typedef struct _anon16;
typedef struct _anon17;
typedef struct sh2gfw_POINTL_MATRIX;
typedef struct _anon18;
typedef struct fsHdFile;
typedef struct _anon19;
typedef struct sh2gfw_VU_PARMS;
typedef struct shGsDrawEnv;
typedef struct fsMgpFile;
typedef struct shAttackInfo;
typedef struct _anon20;
typedef struct _anon21;
typedef struct _anon22;
typedef union _anon23;
typedef struct _anon24;
typedef struct _anon25;
typedef struct _anon26;
typedef struct shGsStencilDrawEnv;
typedef struct _anon27;
typedef struct _anon28;
typedef struct _anon29;
typedef struct sh2gfw_TRANS_MAN;
typedef struct sh2gfw_Env_ctl;
typedef struct shGsLoopEnv;

typedef void(*type_30)();
typedef int(*type_36)();

typedef unsigned int type_0[3];
typedef unsigned char* type_1[4];
typedef unsigned int type_2[3];
typedef sh2gfw_GIFTAG_HEAD* type_3[16];
typedef sh2gfw_GIFTAG_HEAD* type_4[16][4];
typedef unsigned int type_5[24];
typedef unsigned char type_6[7];
typedef unsigned int type_7[3];
typedef unsigned char type_8[7];
typedef unsigned short type_9[7];
typedef unsigned int type_10[3];
typedef unsigned char* type_11[7];
typedef unsigned char type_12[4];
typedef unsigned short type_13[8];
typedef sh2gfw_GIFTAG_HEAD* type_14[16];
typedef sh2gfw_GIFTAG_HEAD* type_15[16][4];
typedef unsigned char type_16[4];
typedef float type_17[4];
typedef float type_18[4];
typedef float type_19[4][4];
typedef unsigned char type_20[16];
typedef unsigned char type_21[16];
typedef float type_22[4][2];
typedef unsigned int type_23[4];
typedef unsigned short type_24[8];
typedef unsigned short type_25[4];
typedef _anon21 type_26[3];
typedef float type_27[4];
typedef shGsDrawEnv type_28[3];
typedef sh2gfw_GSREGS_HEAD* type_29[4];
typedef unsigned char type_31[16];
typedef shGsStencilDrawEnv type_32[3];
typedef sh2gfw_GIFTAG_HEAD* type_33[16];
typedef int type_34[4];
typedef sh2gfw_GIFTAG_HEAD* type_35[16][4];
typedef shGsTinyDrawEnv type_37[6];
typedef unsigned char type_38[16];
typedef short type_39[8];
typedef unsigned short type_40[8];
typedef unsigned char type_41[16];
typedef unsigned short type_42[8][16];
typedef Q_WORDDATA type_43[10];
typedef unsigned short type_44[8][16][4];
typedef char type_45[16];
typedef Q_WORDDATA type_46[10];
typedef unsigned long type_47[2];
typedef sh2gfw_TEX_HEAD* type_48[4];
typedef Q_WORDDATA type_49[10];
typedef sh2gfw_CLUTS_HEAD* type_50[4];
typedef Q_WORDDATA type_51[10];
typedef unsigned char type_52[4];
typedef Q_WORDDATA type_53[10];
typedef unsigned char type_54[16];
typedef unsigned char type_55[16][4];
typedef Q_WORDDATA type_56[10];
typedef shAttackInfo type_57[46];
typedef unsigned char type_58[16];
typedef unsigned char type_59[16][16];
typedef Q_WORDDATA type_60[10];
typedef unsigned char type_61[16][16][4];
typedef Q_WORDDATA type_62[8];
typedef sh2gfw_BLOCK_MAN type_63[6];
typedef Q_WORDDATA type_64[2];
typedef Q_WORDDATA type_65[2];
typedef void* type_66[4];
typedef Q_WORDDATA type_67[2];
typedef Q_WORDDATA* type_68[4];
typedef Q_WORDDATA type_69[2];
typedef unsigned int type_70[4];
typedef Q_WORDDATA type_71[2];
typedef int type_72[8];
typedef int type_73[8];
typedef Q_WORDDATA type_74[2];
typedef Q_WORDDATA type_75[2];
typedef Q_WORDDATA type_76[2];
typedef Q_WORDDATA type_77[2];
typedef Q_WORDDATA type_78[5];
typedef unsigned int type_79[3];
typedef Q_WORDDATA type_80[2];
typedef unsigned int type_81[3];
typedef Q_WORDDATA type_82[2];
typedef Q_WORDDATA type_83[2];
typedef Q_WORDDATA type_84[5];
typedef Q_WORDDATA type_85[2];
typedef Q_WORDDATA type_86[48];
typedef Q_WORDDATA type_87[96];
typedef Q_WORDDATA type_88[2];
typedef Q_WORDDATA type_89[2];
typedef sh2gfw_TexMAN* type_90[96];
typedef Q_WORDDATA type_91[2];
typedef sh2gfw_TexMAN type_92[96];
typedef sh2gfw_GIFTAG_HEAD* type_93[16];
typedef Q_WORDDATA type_94[2];
typedef Q_WORDDATA type_95[2];
typedef unsigned char type_96[8];
typedef Q_WORDDATA type_97[2];
typedef unsigned char type_98[8][8];
typedef Q_WORDDATA type_99[2];
typedef Q_WORDDATA type_100[2];
typedef float type_101[4];
typedef Q_WORDDATA type_102[3];
typedef Q_WORDDATA type_103[6];
typedef Q_WORDDATA type_104[2];
typedef int type_105[4];
typedef unsigned short type_106[3];
typedef Q_WORDDATA type_107[6];
typedef unsigned short type_108[3];
typedef unsigned short type_109[4];
typedef unsigned int type_110[3];

struct _anon0
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

union fsFileIndex
{
	_anon29 index;
	unsigned long pack;
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
	_anon5* ev_list;
	unsigned char* ev_pos;
	int(*ev_prog)();
	_anon7* gi_list;
	Model_List* mdl_list;
	_anon13* en_list;
	void(*stage_init)();
	void(*room_init)();
	void(*alltime_func)();
	int glb_crd;
	int reserve_05;
	int reserve_06;
	int reserve_07;
	int reserve_08;
	int reserve_09;
	int reserve_10;
	int reserve_11;
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

struct _anon3
{
	struct
	{
		unsigned long DTHE : 1;
		unsigned long pad01 : 63;
	};
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

struct _anon5
{
	int flag;
	int cond;
	int rslt0;
	int rslt1;
};

struct _anon6
{
	_anon15 testa;
	long testaaddr;
	_anon28 prim;
	long primaddr;
	_anon4 rgbaq;
	long rgbaqaddr;
	_anon20 xyz2a;
	long xyz2aaddr;
	_anon20 xyz2b;
	long xyz2baddr;
	_anon15 testb;
	long testbaddr;
};

struct _anon7
{
	float pos_x;
	float pos_z;
	unsigned short pos_y;
	unsigned short rot_y;
	unsigned int st;
};

struct _anon8
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
	_anon8 blk_LightData;
};

struct shGsAllEnv
{
	unsigned long loop_counter;
	unsigned int loop;
	unsigned int loop3;
	shGsLoopEnv LoopEnv;
	_anon21 DispEnv[3];
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

struct _anon9
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

struct _anon10
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

struct sh2gfw_BLOCKGLOBAL_HEAD
{
	unsigned int gsregsamount;
	unsigned int transamount;
	unsigned char gtexnum;
	unsigned char gtransnum;
	unsigned short pads;
	unsigned int pad2;
};

struct sh2gfw_BLOCKLOCAL_HEAD
{
	unsigned short gsregsamount[3];
	unsigned short transamount[3];
	unsigned short ltexnum;
	unsigned short pads;
};

struct _anon11
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

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
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

union fsFile
{
	_anon24 check;
	<unknown fundamental type (0xa510)> pack;
	fsCdFile cd;
	fsHdFile hd;
	fsMgcFile mgc;
	fsMgfFile mgf;
	fsMgpFile mgp;
};

struct _anon12
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

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct _anon13
{
	short kind;
	short id;
	int pos_x;
	int pos_z;
	short pos_y;
	short rot_y;
	short status;
	short condition;
};

struct _anon14
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

struct _anon15
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
	Q_WORDDATA spot_rot;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
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

struct _anon16
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

struct _anon17
{
	struct
	{
		unsigned long CLAMP : 1;
		unsigned long pad01 : 63;
	};
};

struct sh2gfw_POINTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
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

struct _anon19
{
	struct
	{
		unsigned long OFX : 16;
		unsigned long pad16 : 16;
		unsigned long OFY : 16;
		unsigned long pad48 : 16;
	};
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
	_anon16 giftag;
	_anon25 draw;
	Q_WORDDATA drawq2[5];
	_anon6 clear;
	_anon16 giftag_nc;
	_anon25 draw_nc;
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

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon23 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
};

struct _anon20
{
	struct
	{
		unsigned long X : 16;
		unsigned long Y : 16;
		unsigned long Z : 32;
	};
};

struct _anon21
{
	_anon12 pmode;
	_anon18 smode2;
	_anon14 dispfb;
	_anon22 display;
	_anon26 bgcolor;
};

struct _anon22
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

union _anon23
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _anon24
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

struct _anon25
{
	_anon11 frame1;
	unsigned long frame1addr;
	_anon27 zbuf1;
	long zbuf1addr;
	_anon19 xyoffset1;
	long xyoffset1addr;
	_anon9 scissor1;
	long scissor1addr;
	_anon1 prmodecont;
	long prmodecontaddr;
	_anon17 colclamp;
	long colclampaddr;
	_anon3 dthe;
	long dtheaddr;
	_anon15 test1;
	long test1addr;
};

struct _anon26
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

struct shGsStencilDrawEnv
{
	_anon16 giftag;
	_anon25 draw;
	Q_WORDDATA alpha1;
	Q_WORDDATA drawq2[6];
	_anon6 clear;
	Q_WORDDATA frame;
	_anon16 giftag_nc;
	_anon25 draw_nc;
	Q_WORDDATA alpha1_nc;
	Q_WORDDATA drawq2_nc[6];
	Q_WORDDATA gifad_frame_normal;
	Q_WORDDATA frame_normal;
	Q_WORDDATA gifad_frame_mskalpha;
	Q_WORDDATA frame_mskalpha;
	Q_WORDDATA gifad_frame_mskDalpha;
	Q_WORDDATA frame_mskDalpha;
};

struct _anon27
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

struct _anon28
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

struct _anon29
{
	fsFile* fp;
	char* name;
};

struct sh2gfw_TRANS_MAN
{
	unsigned int blockid;
	_anon0* pA_M;
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

shAttackInfo sh2_attack_list[46];
Q_WORDDATA mct;
_anon0 Area_Data_Man;
_anon2* stage;
sh2gfw_ALLTEXSYNC_MAN AllTexSync_Man;
int map_id[4];
sh2gfw_BLOCK_MAN b_man[6];
sh2gfw_TRANS_MAN sh2_TR_MAN;
sh2gfw_Env_ctl Env_ctl;
_anon10 cam0;
float clip_volume[4];
_anon8 LightEnv;
sh2gfw_VU_PARMS VU1_PARMS;
shGsAllEnv shGs_AllEnv;

int Vcallback_test(int ca);
void init_PS2();
void step_init_ONE();
void step_init_STAGE();
void map_DATA_LOAD(int inout_flg);
void init_Env_ctl();
void init_GSandVU();

// 
// Start address: 0x1a3cb0
int Vcallback_test(int ca)
{
	// Line 161, Address: 0x1a3cb0, Func Offset: 0
	// Line 162, Address: 0x1a3cb8, Func Offset: 0x8
	// Line 163, Address: 0x1a3ccc, Func Offset: 0x1c
	// Line 164, Address: 0x1a3ce0, Func Offset: 0x30
	// Line 165, Address: 0x1a3ce4, Func Offset: 0x34
	// Func End, Address: 0x1a3cf0, Func Offset: 0x40
}

// 
// Start address: 0x1a3cf0
void init_PS2()
{
	// Line 169, Address: 0x1a3cf0, Func Offset: 0
	// Line 171, Address: 0x1a3cf8, Func Offset: 0x8
	// Line 172, Address: 0x1a3d00, Func Offset: 0x10
	// Line 174, Address: 0x1a3d18, Func Offset: 0x28
	// Line 177, Address: 0x1a3d20, Func Offset: 0x30
	// Line 178, Address: 0x1a3d30, Func Offset: 0x40
	// Line 180, Address: 0x1a3d40, Func Offset: 0x50
	// Line 184, Address: 0x1a3d48, Func Offset: 0x58
	// Line 188, Address: 0x1a3d54, Func Offset: 0x64
	// Line 189, Address: 0x1a3d70, Func Offset: 0x80
	// Line 191, Address: 0x1a3d80, Func Offset: 0x90
	// Line 192, Address: 0x1a3d8c, Func Offset: 0x9c
	// Line 194, Address: 0x1a3d9c, Func Offset: 0xac
	// Line 202, Address: 0x1a3dac, Func Offset: 0xbc
	// Func End, Address: 0x1a3dbc, Func Offset: 0xcc
}

// 
// Start address: 0x1a3dc0
void step_init_ONE()
{
	// Line 210, Address: 0x1a3dc0, Func Offset: 0
	// Line 215, Address: 0x1a3dc8, Func Offset: 0x8
	// Line 218, Address: 0x1a3dd0, Func Offset: 0x10
	// Line 219, Address: 0x1a3dd8, Func Offset: 0x18
	// Line 222, Address: 0x1a3de0, Func Offset: 0x20
	// Line 225, Address: 0x1a3de8, Func Offset: 0x28
	// Line 228, Address: 0x1a3df0, Func Offset: 0x30
	// Line 234, Address: 0x1a3df8, Func Offset: 0x38
	// Line 237, Address: 0x1a3e00, Func Offset: 0x40
	// Line 239, Address: 0x1a3e08, Func Offset: 0x48
	// Line 242, Address: 0x1a3e10, Func Offset: 0x50
	// Line 243, Address: 0x1a3e18, Func Offset: 0x58
	// Func End, Address: 0x1a3e28, Func Offset: 0x68
}

// 
// Start address: 0x1a3e30
void step_init_STAGE()
{
	// Line 251, Address: 0x1a3e30, Func Offset: 0
	// Line 256, Address: 0x1a3e38, Func Offset: 0x8
	// Line 258, Address: 0x1a3e4c, Func Offset: 0x1c
	// Line 262, Address: 0x1a3e5c, Func Offset: 0x2c
	// Line 278, Address: 0x1a3e64, Func Offset: 0x34
	// Line 285, Address: 0x1a3e6c, Func Offset: 0x3c
	// Line 291, Address: 0x1a3e74, Func Offset: 0x44
	// Line 295, Address: 0x1a3e7c, Func Offset: 0x4c
	// Line 299, Address: 0x1a3e84, Func Offset: 0x54
	// Line 305, Address: 0x1a3e8c, Func Offset: 0x5c
	// Line 311, Address: 0x1a3e94, Func Offset: 0x64
	// Line 313, Address: 0x1a3e9c, Func Offset: 0x6c
	// Line 319, Address: 0x1a3ea4, Func Offset: 0x74
	// Line 325, Address: 0x1a3eac, Func Offset: 0x7c
	// Line 330, Address: 0x1a3ecc, Func Offset: 0x9c
	// Func End, Address: 0x1a3edc, Func Offset: 0xac
}

// 
// Start address: 0x1a3ee0
void map_DATA_LOAD(int inout_flg)
{
	int block;
	int stg;
	fsFileIndex* file_cam;
	fsFileIndex* file_kg2;
	fsFileIndex* file_cld;
	fsFileIndex* file_map;
	FilesBgBlock* bgfiles;
	int trflg;
	int map_amount;
	int i;
	unsigned char* loadaddr;
	// Line 340, Address: 0x1a3ee0, Func Offset: 0
	// Line 344, Address: 0x1a3f10, Func Offset: 0x30
	// Line 347, Address: 0x1a3f18, Func Offset: 0x38
	// Line 348, Address: 0x1a3f20, Func Offset: 0x40
	// Line 350, Address: 0x1a3f2c, Func Offset: 0x4c
	// Line 353, Address: 0x1a3f64, Func Offset: 0x84
	// Line 358, Address: 0x1a3f6c, Func Offset: 0x8c
	// Line 360, Address: 0x1a3f74, Func Offset: 0x94
	// Line 361, Address: 0x1a3f7c, Func Offset: 0x9c
	// Line 363, Address: 0x1a3f84, Func Offset: 0xa4
	// Line 367, Address: 0x1a3f8c, Func Offset: 0xac
	// Line 368, Address: 0x1a3f98, Func Offset: 0xb8
	// Line 369, Address: 0x1a3fb8, Func Offset: 0xd8
	// Line 371, Address: 0x1a3fcc, Func Offset: 0xec
	// Line 372, Address: 0x1a3fe0, Func Offset: 0x100
	// Line 374, Address: 0x1a3fe8, Func Offset: 0x108
	// Line 384, Address: 0x1a3ff4, Func Offset: 0x114
	// Line 385, Address: 0x1a4010, Func Offset: 0x130
	// Line 386, Address: 0x1a4028, Func Offset: 0x148
	// Line 387, Address: 0x1a4030, Func Offset: 0x150
	// Line 388, Address: 0x1a4038, Func Offset: 0x158
	// Line 389, Address: 0x1a404c, Func Offset: 0x16c
	// Line 390, Address: 0x1a4054, Func Offset: 0x174
	// Line 391, Address: 0x1a4058, Func Offset: 0x178
	// Line 392, Address: 0x1a405c, Func Offset: 0x17c
	// Line 393, Address: 0x1a4060, Func Offset: 0x180
	// Line 396, Address: 0x1a4064, Func Offset: 0x184
	// Line 401, Address: 0x1a406c, Func Offset: 0x18c
	// Line 408, Address: 0x1a4094, Func Offset: 0x1b4
	// Line 411, Address: 0x1a40a0, Func Offset: 0x1c0
	// Line 412, Address: 0x1a40b0, Func Offset: 0x1d0
	// Line 416, Address: 0x1a40b8, Func Offset: 0x1d8
	// Line 417, Address: 0x1a40c4, Func Offset: 0x1e4
	// Line 421, Address: 0x1a40e8, Func Offset: 0x208
	// Line 432, Address: 0x1a4160, Func Offset: 0x280
	// Line 434, Address: 0x1a4168, Func Offset: 0x288
	// Line 436, Address: 0x1a4194, Func Offset: 0x2b4
	// Line 438, Address: 0x1a41a0, Func Offset: 0x2c0
	// Line 439, Address: 0x1a41a8, Func Offset: 0x2c8
	// Line 441, Address: 0x1a41b8, Func Offset: 0x2d8
	// Line 442, Address: 0x1a41c0, Func Offset: 0x2e0
	// Line 444, Address: 0x1a41d0, Func Offset: 0x2f0
	// Line 445, Address: 0x1a41d8, Func Offset: 0x2f8
	// Line 447, Address: 0x1a41f0, Func Offset: 0x310
	// Line 451, Address: 0x1a4200, Func Offset: 0x320
	// Line 452, Address: 0x1a4208, Func Offset: 0x328
	// Line 454, Address: 0x1a4218, Func Offset: 0x338
	// Line 455, Address: 0x1a4224, Func Offset: 0x344
	// Line 456, Address: 0x1a422c, Func Offset: 0x34c
	// Line 496, Address: 0x1a4248, Func Offset: 0x368
	// Line 498, Address: 0x1a4258, Func Offset: 0x378
	// Line 500, Address: 0x1a426c, Func Offset: 0x38c
	// Func End, Address: 0x1a42a0, Func Offset: 0x3c0
}

// 
// Start address: 0x1a42a0
void init_Env_ctl()
{
	// Line 503, Address: 0x1a42a0, Func Offset: 0
	// Line 509, Address: 0x1a42a8, Func Offset: 0x8
	// Line 511, Address: 0x1a42c0, Func Offset: 0x20
	// Line 512, Address: 0x1a42d4, Func Offset: 0x34
	// Line 513, Address: 0x1a42e4, Func Offset: 0x44
	// Line 514, Address: 0x1a42f8, Func Offset: 0x58
	// Line 523, Address: 0x1a4304, Func Offset: 0x64
	// Line 524, Address: 0x1a4310, Func Offset: 0x70
	// Line 525, Address: 0x1a4340, Func Offset: 0xa0
	// Line 526, Address: 0x1a4358, Func Offset: 0xb8
	// Line 527, Address: 0x1a4370, Func Offset: 0xd0
	// Line 529, Address: 0x1a4388, Func Offset: 0xe8
	// Line 532, Address: 0x1a4408, Func Offset: 0x168
	// Line 534, Address: 0x1a4470, Func Offset: 0x1d0
	// Line 538, Address: 0x1a44f0, Func Offset: 0x250
	// Line 539, Address: 0x1a4504, Func Offset: 0x264
	// Line 540, Address: 0x1a451c, Func Offset: 0x27c
	// Line 541, Address: 0x1a4530, Func Offset: 0x290
	// Line 553, Address: 0x1a4544, Func Offset: 0x2a4
	// Line 554, Address: 0x1a4554, Func Offset: 0x2b4
	// Line 555, Address: 0x1a4564, Func Offset: 0x2c4
	// Line 557, Address: 0x1a4574, Func Offset: 0x2d4
	// Line 558, Address: 0x1a4588, Func Offset: 0x2e8
	// Line 560, Address: 0x1a45b8, Func Offset: 0x318
	// Line 561, Address: 0x1a45c8, Func Offset: 0x328
	// Line 562, Address: 0x1a45d8, Func Offset: 0x338
	// Line 563, Address: 0x1a45e8, Func Offset: 0x348
	// Line 565, Address: 0x1a45f4, Func Offset: 0x354
	// Line 566, Address: 0x1a460c, Func Offset: 0x36c
	// Line 569, Address: 0x1a461c, Func Offset: 0x37c
	// Line 570, Address: 0x1a462c, Func Offset: 0x38c
	// Line 571, Address: 0x1a4640, Func Offset: 0x3a0
	// Line 572, Address: 0x1a4650, Func Offset: 0x3b0
	// Line 574, Address: 0x1a4660, Func Offset: 0x3c0
	// Line 580, Address: 0x1a468c, Func Offset: 0x3ec
	// Line 585, Address: 0x1a46a4, Func Offset: 0x404
	// Line 586, Address: 0x1a46c0, Func Offset: 0x420
	// Line 587, Address: 0x1a46c8, Func Offset: 0x428
	// Line 592, Address: 0x1a46d4, Func Offset: 0x434
	// Line 593, Address: 0x1a46e8, Func Offset: 0x448
	// Line 594, Address: 0x1a46fc, Func Offset: 0x45c
	// Line 596, Address: 0x1a4710, Func Offset: 0x470
	// Line 598, Address: 0x1a4720, Func Offset: 0x480
	// Line 599, Address: 0x1a4728, Func Offset: 0x488
	// Line 600, Address: 0x1a4730, Func Offset: 0x490
	// Line 602, Address: 0x1a4738, Func Offset: 0x498
	// Line 603, Address: 0x1a4740, Func Offset: 0x4a0
	// Line 604, Address: 0x1a4748, Func Offset: 0x4a8
	// Line 605, Address: 0x1a4750, Func Offset: 0x4b0
	// Line 607, Address: 0x1a475c, Func Offset: 0x4bc
	// Line 608, Address: 0x1a476c, Func Offset: 0x4cc
	// Line 609, Address: 0x1a4780, Func Offset: 0x4e0
	// Line 610, Address: 0x1a4790, Func Offset: 0x4f0
	// Line 612, Address: 0x1a47a0, Func Offset: 0x500
	// Line 618, Address: 0x1a47d8, Func Offset: 0x538
	// Line 625, Address: 0x1a4804, Func Offset: 0x564
	// Line 628, Address: 0x1a4810, Func Offset: 0x570
	// Line 629, Address: 0x1a4824, Func Offset: 0x584
	// Line 630, Address: 0x1a4838, Func Offset: 0x598
	// Line 631, Address: 0x1a484c, Func Offset: 0x5ac
	// Line 640, Address: 0x1a485c, Func Offset: 0x5bc
	// Line 641, Address: 0x1a4868, Func Offset: 0x5c8
	// Line 642, Address: 0x1a4874, Func Offset: 0x5d4
	// Line 643, Address: 0x1a4880, Func Offset: 0x5e0
	// Line 644, Address: 0x1a488c, Func Offset: 0x5ec
	// Line 647, Address: 0x1a4894, Func Offset: 0x5f4
	// Func End, Address: 0x1a48a4, Func Offset: 0x604
}

// 
// Start address: 0x1a48b0
void init_GSandVU()
{
	// Line 650, Address: 0x1a48b0, Func Offset: 0
	// Line 653, Address: 0x1a48b8, Func Offset: 0x8
	// Line 655, Address: 0x1a48e4, Func Offset: 0x34
	// Line 656, Address: 0x1a4908, Func Offset: 0x58
	// Line 657, Address: 0x1a4924, Func Offset: 0x74
	// Line 660, Address: 0x1a4934, Func Offset: 0x84
	// Line 662, Address: 0x1a4944, Func Offset: 0x94
	// Line 663, Address: 0x1a4958, Func Offset: 0xa8
	// Line 665, Address: 0x1a4968, Func Offset: 0xb8
	// Line 666, Address: 0x1a4978, Func Offset: 0xc8
	// Func End, Address: 0x1a4988, Func Offset: 0xd8
}

