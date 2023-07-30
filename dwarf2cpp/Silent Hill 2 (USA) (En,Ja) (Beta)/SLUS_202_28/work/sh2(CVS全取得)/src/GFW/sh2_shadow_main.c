typedef struct shBattleFight;
typedef union Q_WORDDATA;
typedef struct shBattleShot;
typedef struct _anon0;
typedef struct _anon1;
typedef struct sh2gfw_BLOCKGLOBAL_HEAD;
typedef struct _anon2;
typedef struct _anon3;
typedef struct sh2gfw_BLOCKLOCAL_HEAD;
typedef struct _anon4;
typedef struct sh2gfw_TEX_HEAD;
typedef struct _anon5;
typedef struct _anon6;
typedef struct sh2gfw_BLOCK_MAN;
typedef struct _anon7;
typedef struct sh2gfw_AREA_HEAD;
typedef struct shGsDrawEnv;
typedef struct sh2gfw_BLOCK_HEAD;
typedef struct shAttackInfo;
typedef struct _anon8;
typedef struct sh2gfw_GSREGS_HEAD;
typedef struct _anon9;
typedef struct sh2gfw_GIFTAG_HEAD;
typedef union _anon10;
typedef struct _anon11;
typedef struct sh2gfw_CLUTS_HEAD;
typedef struct _anon12;
typedef struct _anon13;
typedef struct shGsStencilDrawEnv;
typedef struct _anon14;
typedef struct _anon15;
typedef struct _anon16;
typedef struct shGsLoopEnv;
typedef struct _anon17;
typedef struct _anon18;
typedef struct _anon19;
typedef struct _anon20;
typedef struct _anon21;
typedef struct _anon22;
typedef struct shGsTinyDrawEnv;
typedef struct _AnimeInfo;
typedef struct shGsAllEnv;


typedef _AnimeInfo type_0[16];
typedef _anon6 type_1[3];
typedef shGsDrawEnv type_2[3];
typedef shGsStencilDrawEnv type_3[3];
typedef unsigned char type_4[69];
typedef Q_WORDDATA type_5[24];
typedef shGsTinyDrawEnv type_6[6];
typedef _AnimeInfo type_7[27];
typedef Q_WORDDATA type_8[10];
typedef Q_WORDDATA type_9[10];
typedef Q_WORDDATA type_10[10];
typedef float type_11[4];
typedef Q_WORDDATA type_12[10];
typedef float type_13[4];
typedef Q_WORDDATA type_14[10];
typedef float type_15[4][4];
typedef _AnimeInfo type_16[30];
typedef Q_WORDDATA type_17[10];
typedef Q_WORDDATA type_18[10];
typedef Q_WORDDATA type_19[8];
typedef unsigned short type_20[3];
typedef Q_WORDDATA type_21[2];
typedef unsigned short type_22[3];
typedef Q_WORDDATA type_23[2];
typedef Q_WORDDATA type_24[2];
typedef _AnimeInfo type_25[7];
typedef Q_WORDDATA type_26[2];
typedef _AnimeInfo type_27[6];
typedef Q_WORDDATA type_28[2];
typedef _AnimeInfo type_29[8];
typedef unsigned char type_30[14];
typedef Q_WORDDATA type_31[2];
typedef float type_32[4][2];
typedef Q_WORDDATA type_33[2];
typedef sh2gfw_BLOCK_MAN type_34[6];
typedef Q_WORDDATA type_35[2];
typedef Q_WORDDATA type_36[2];
typedef _AnimeInfo type_37[2];
typedef _AnimeInfo type_38[10];
typedef Q_WORDDATA type_39[5];
typedef Q_WORDDATA type_40[2];
typedef Q_WORDDATA type_41[2];
typedef sh2gfw_GSREGS_HEAD* type_42[4];
typedef Q_WORDDATA type_43[2];
typedef Q_WORDDATA type_44[5];
typedef sh2gfw_GIFTAG_HEAD* type_45[16];
typedef sh2gfw_GIFTAG_HEAD* type_46[16][4];
typedef Q_WORDDATA type_47[2];
typedef _AnimeInfo type_48[35];
typedef unsigned char type_49[97];
typedef unsigned short type_50[8];
typedef unsigned short type_51[8][16];
typedef Q_WORDDATA type_52[2];
typedef unsigned short type_53[8][16][4];
typedef Q_WORDDATA type_54[2];
typedef sh2gfw_TEX_HEAD* type_55[4];
typedef Q_WORDDATA type_56[2];
typedef _AnimeInfo type_57[1];
typedef sh2gfw_CLUTS_HEAD* type_58[4];
typedef Q_WORDDATA type_59[2];
typedef unsigned int type_60[4];
typedef unsigned char type_61[4];
typedef Q_WORDDATA type_62[2];
typedef unsigned short type_63[8];
typedef unsigned char type_64[16];
typedef unsigned char type_65[16][4];
typedef _AnimeInfo type_66[36];
typedef Q_WORDDATA type_67[2];
typedef float type_68[4];
typedef unsigned char type_69[16];
typedef unsigned char type_70[16][16];
typedef unsigned char type_71[16][16][4];
typedef unsigned char type_72[16];
typedef Q_WORDDATA type_73[2];
typedef Q_WORDDATA type_74[6];
typedef Q_WORDDATA type_75[2];
typedef int type_76[4];
typedef unsigned char type_77[16];
typedef _AnimeInfo type_78[6];
typedef short type_79[8];
typedef unsigned char type_80[16];
typedef char type_81[16];
typedef Q_WORDDATA type_82[6];
typedef unsigned long type_83[2];
typedef void* type_84[4];
typedef unsigned char type_85[14];
typedef Q_WORDDATA* type_86[4];
typedef shAttackInfo type_87[66];
typedef unsigned int type_88[4];
typedef int type_89[8];
typedef int type_90[8];
typedef unsigned char type_91[20];
typedef unsigned int type_92[3];
typedef unsigned char type_93[16];
typedef unsigned char type_94[16];
typedef unsigned int type_95[3];
typedef unsigned int type_96[3];
typedef unsigned int type_97[24];
typedef unsigned int type_98[3];
typedef unsigned int type_99[3];
typedef unsigned short type_100[8];
typedef _AnimeInfo type_101[8];
typedef Q_WORDDATA type_102[256];
typedef sh2gfw_GIFTAG_HEAD* type_103[16];
typedef _AnimeInfo type_104[12];
typedef unsigned int type_105[3];
typedef _AnimeInfo type_106[32];
typedef unsigned char type_107[8];
typedef unsigned char type_108[8][8];
typedef Q_WORDDATA type_109[4];
typedef unsigned int type_110[3];
typedef _AnimeInfo type_111[29];
typedef _AnimeInfo type_112[10];
typedef Q_WORDDATA type_113[3];
typedef Q_WORDDATA type_114[4];
typedef _AnimeInfo type_115[22];

struct shBattleFight
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

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct _anon0
{
	struct
	{
		unsigned long DTHE : 1;
		unsigned long pad01 : 63;
	};
};

struct _anon1
{
	struct
	{
		unsigned long AC : 1;
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

struct _anon2
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

struct _anon5
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

struct _anon6
{
	_anon8 pmode;
	_anon16 smode2;
	_anon11 dispfb;
	_anon18 display;
	_anon20 bgcolor;
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
	_anon5 blk_LightData;
};

struct _anon7
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

struct sh2gfw_AREA_HEAD
{
	unsigned int area_id;
	unsigned int toGlobalTexHead;
	unsigned int toGlobalClutsHead;
	unsigned int date;
};

struct shGsDrawEnv
{
	_anon13 giftag;
	_anon9 draw;
	Q_WORDDATA drawq2[5];
	_anon19 clear;
	_anon13 giftag_nc;
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

struct _anon8
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

struct _anon9
{
	_anon7 frame1;
	unsigned long frame1addr;
	_anon21 zbuf1;
	long zbuf1addr;
	_anon15 xyoffset1;
	long xyoffset1addr;
	_anon4 scissor1;
	long scissor1addr;
	_anon1 prmodecont;
	long prmodecontaddr;
	_anon14 colclamp;
	long colclampaddr;
	_anon0 dthe;
	long dtheaddr;
	_anon12 test1;
	long test1addr;
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

union _anon10
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _anon11
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

struct _anon12
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

struct _anon13
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
	_anon13 giftag;
	_anon9 draw;
	Q_WORDDATA alpha1;
	Q_WORDDATA drawq2[6];
	_anon19 clear;
	Q_WORDDATA frame;
	_anon13 giftag_nc;
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

struct _anon14
{
	struct
	{
		unsigned long CLAMP : 1;
		unsigned long pad01 : 63;
	};
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

struct _anon16
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

struct _anon17
{
	struct
	{
		unsigned long X : 16;
		unsigned long Y : 16;
		unsigned long Z : 32;
	};
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

struct _anon19
{
	_anon12 testa;
	long testaaddr;
	_anon22 prim;
	long primaddr;
	_anon3 rgbaq;
	long rgbaqaddr;
	_anon17 xyz2a;
	long xyz2aaddr;
	_anon17 xyz2b;
	long xyz2baddr;
	_anon12 testb;
	long testbaddr;
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

shAttackInfo sh2_attack_list[66];
unsigned char human_skelton[14];
unsigned char enemy_skelton[14];
unsigned char obj_outdoor_skelton[20];
unsigned char obj_anime_skelton[69];
unsigned char obj_stay_skelton[97];
_AnimeInfo dmaria_anim[30];
_AnimeInfo p_hhh_mar_anim[6];
_AnimeInfo dangela_anim[32];
_AnimeInfo pangela_anim[6];
_AnimeInfo scu_anim[36];
_AnimeInfo d_scu_anim[10];
_AnimeInfo mkn_anim[35];
_AnimeInfo d_mkn_anim[8];
_AnimeInfo nse_anim[27];
_AnimeInfo d_nse_anim[1];
_AnimeInfo red_anim[12];
_AnimeInfo d_red_anim[7];
_AnimeInfo oni_anim[16];
_AnimeInfo d_oni_anim[10];
_AnimeInfo edb_anim[22];
_AnimeInfo d_edb_anim[2];
_AnimeInfo pap_anim[29];
_AnimeInfo d_pap_anim[8];
unsigned int paddata2;
sh2gfw_BLOCK_MAN b_man[6];
_anon2 cam0;
shGsAllEnv shGs_AllEnv;
Q_WORDDATA zbuf_pack2[4];
Q_WORDDATA zbuf_pack[4];
Q_WORDDATA STENCIL_workpacket[256];

void sh2gfw_ShadowControl_Main();
void shadow_main(_anon2* cam);
void drop_shadow_main(_anon2* cam);

// 
// Start address: 0x176ac0
void sh2gfw_ShadowControl_Main()
{
	_anon2* cam_tmp;
	int dense;
	// Line 54, Address: 0x176ac0, Func Offset: 0
	// Line 59, Address: 0x176ad0, Func Offset: 0x10
	// Line 64, Address: 0x176ad8, Func Offset: 0x18
	// Line 66, Address: 0x176ae4, Func Offset: 0x24
	// Line 68, Address: 0x176af4, Func Offset: 0x34
	// Line 72, Address: 0x176b14, Func Offset: 0x54
	// Line 73, Address: 0x176b28, Func Offset: 0x68
	// Line 75, Address: 0x176b30, Func Offset: 0x70
	// Line 77, Address: 0x176b38, Func Offset: 0x78
	// Line 78, Address: 0x176b44, Func Offset: 0x84
	// Line 79, Address: 0x176b58, Func Offset: 0x98
	// Line 81, Address: 0x176b60, Func Offset: 0xa0
	// Line 87, Address: 0x176b7c, Func Offset: 0xbc
	// Line 89, Address: 0x176b84, Func Offset: 0xc4
	// Line 92, Address: 0x176ba0, Func Offset: 0xe0
	// Line 93, Address: 0x176ba8, Func Offset: 0xe8
	// Line 97, Address: 0x176bb0, Func Offset: 0xf0
	// Line 102, Address: 0x176bcc, Func Offset: 0x10c
	// Func End, Address: 0x176be4, Func Offset: 0x124
}

// 
// Start address: 0x176bf0
void shadow_main(_anon2* cam)
{
	Q_WORDDATA* qkick;
	Q_WORDDATA* call_addr;
	// Line 119, Address: 0x176bf0, Func Offset: 0
	// Line 126, Address: 0x176bfc, Func Offset: 0xc
	// Line 129, Address: 0x176c0c, Func Offset: 0x1c
	// Line 133, Address: 0x176c14, Func Offset: 0x24
	// Line 144, Address: 0x176c1c, Func Offset: 0x2c
	// Line 146, Address: 0x176c3c, Func Offset: 0x4c
	// Line 150, Address: 0x176c4c, Func Offset: 0x5c
	// Line 152, Address: 0x176c54, Func Offset: 0x64
	// Line 163, Address: 0x176c60, Func Offset: 0x70
	// Line 166, Address: 0x176c6c, Func Offset: 0x7c
	// Line 168, Address: 0x176c74, Func Offset: 0x84
	// Line 171, Address: 0x176c80, Func Offset: 0x90
	// Line 172, Address: 0x176c88, Func Offset: 0x98
	// Func End, Address: 0x176c9c, Func Offset: 0xac
}

// 
// Start address: 0x176ca0
void drop_shadow_main(_anon2* cam)
{
	Q_WORDDATA* call_addr;
	// Line 177, Address: 0x176ca0, Func Offset: 0
	// Line 188, Address: 0x176ca8, Func Offset: 0x8
	// Line 189, Address: 0x176cb8, Func Offset: 0x18
	// Line 213, Address: 0x176cc0, Func Offset: 0x20
	// Line 225, Address: 0x176cc8, Func Offset: 0x28
	// Func End, Address: 0x176cd8, Func Offset: 0x38
}

