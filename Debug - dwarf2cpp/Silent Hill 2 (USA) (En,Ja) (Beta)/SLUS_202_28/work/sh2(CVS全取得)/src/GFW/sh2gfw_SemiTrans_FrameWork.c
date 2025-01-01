typedef struct sh2gfw_VU_PARMS;
typedef struct sh2gfw_GSREGS_HEAD;
typedef struct sh2gfw_TEX_HEAD;
typedef struct sh2gfw_CLUTS_HEAD;
typedef struct sh2gfw_GIFTAG_HEAD;
typedef struct sh2gfw_AREA_HEAD;
typedef struct sh2gfw_BLOCK_MAN;
typedef struct SPACK_ENV_DATA;
typedef union Q_WORDDATA;
typedef struct sh2gfw_BLOCK_HEAD;
typedef struct SPACK_STATIC_DATA;
typedef struct sh2gfw_Env_ctl;
typedef struct SPACK_DATA;
typedef struct SH2_SemiTrans_Triangle;
typedef struct SPACK_OT_DATA;
typedef struct sh2gfw_TRANS_MAN;
typedef struct _anon0;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct sh2gfw_BLOCKGLOBAL_HEAD;
typedef struct sh2gfw_TexMAN;
typedef struct sh2gfw_BLOCKLOCAL_HEAD;
typedef struct _anon1;
typedef struct sh2gfw_Vif1Pkbuf;
typedef struct sh2gfw_Vu0_TransMan;
typedef struct SH2_NoSort_Header;
typedef struct shAttackInfo;
typedef union _anon2;
typedef struct SemiTrans_SprWork;
typedef struct sh2gfw_SPOTL_MATRIX;
typedef struct sh2gfw_POINTL_MATRIX;


typedef int type_0[8];
typedef int type_1[8];
typedef unsigned char type_2[16];
typedef unsigned char type_3[16];
typedef Q_WORDDATA type_4[48];
typedef float type_5[4];
typedef float type_6[4];
typedef float type_7[4][4];
typedef Q_WORDDATA type_8[2];
typedef sh2gfw_GIFTAG_HEAD* type_9[16];
typedef unsigned int type_10[3];
typedef unsigned char type_11[8];
typedef unsigned char type_12[8][8];
typedef unsigned int type_13[3];
typedef Q_WORDDATA type_14[3];
typedef unsigned short type_15[4];
typedef unsigned char* type_16[4];
typedef sh2gfw_GIFTAG_HEAD* type_17[16];
typedef unsigned char type_18[7];
typedef sh2gfw_GIFTAG_HEAD* type_19[16][4];
typedef unsigned char type_20[7];
typedef unsigned short type_21[7];
typedef unsigned char* type_22[7];
typedef unsigned char type_23[4];
typedef sh2gfw_GIFTAG_HEAD* type_24[16];
typedef sh2gfw_BLOCK_MAN type_25[6];
typedef sh2gfw_GIFTAG_HEAD* type_26[16][4];
typedef unsigned short type_27[3];
typedef unsigned short type_28[3];
typedef unsigned short type_29[4];
typedef unsigned char type_30[4];
typedef Q_WORDDATA type_31[8];
typedef float type_32[4][2];
typedef char type_33[16];
typedef Q_WORDDATA type_34[4];
typedef int type_35[2];
typedef sh2gfw_GSREGS_HEAD* type_36[4];
typedef sh2gfw_GIFTAG_HEAD* type_37[16];
typedef sh2gfw_GIFTAG_HEAD* type_38[16][4];
typedef unsigned short type_39[8];
typedef unsigned short type_40[8][16];
typedef unsigned short type_41[8][16][4];
typedef sh2gfw_TEX_HEAD* type_42[4];
typedef sh2gfw_CLUTS_HEAD* type_43[4];
typedef unsigned char type_44[4];
typedef SH2_SemiTrans_Triangle type_45[2];
typedef unsigned char type_46[16];
typedef unsigned char type_47[16][4];
typedef SH2_NoSort_Header type_48[2];
typedef Q_WORDDATA type_49[8];
typedef unsigned char type_50[16];
typedef unsigned char type_51[16][16];
typedef unsigned int type_52[4];
typedef unsigned char type_53[16][16][4];
typedef unsigned short type_54[8];
typedef unsigned char type_55[16];
typedef float type_56[4];
typedef unsigned char type_57[16];
typedef unsigned char type_58[16];
typedef int type_59[4];
typedef void* type_60[4];
typedef short type_61[8];
typedef Q_WORDDATA* type_62[4];
typedef char type_63[16];
typedef unsigned int type_64[4];
typedef unsigned long type_65[2];
typedef shAttackInfo type_66[66];

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
	_anon1 blk_LightData;
};

struct SPACK_ENV_DATA
{
	unsigned short DmaQwc;
	unsigned short DmaId;
	void* Addr;
	unsigned int pad1;
	unsigned short VifQwc;
	unsigned char pad2;
	unsigned char VifDirect;
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

struct SPACK_STATIC_DATA
{
	unsigned short GifNLOOP;
	unsigned short DmaQwc;
	unsigned int PRE_PRIM_FLG_NREG;
	unsigned long REGS;
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

struct SPACK_DATA
{
	SPACK_OT_DATA** ot_top;
	SPACK_OT_DATA** ot_last;
	unsigned int ot_size;
	unsigned int ot_width;
	unsigned int w_ofs;
	unsigned int w_mini;
	unsigned int w_max;
	unsigned int envid;
	SPACK_OT_DATA* dma_top;
	SPACK_OT_DATA* dmabuf_pos;
	SPACK_ENV_DATA* env_top;
	unsigned long* pk_last;
	unsigned long* pos;
	short* ot_max;
	<unknown fundamental type (0xa510)>* packet;
	SPACK_STATIC_DATA* ps_top;
	unsigned long* pgiftag;
	unsigned long giftag_b;
	unsigned int flag;
	void* kick_top;
	void* old_lastpos;
};

struct SH2_SemiTrans_Triangle
{
	Q_WORDDATA giftag;
	Q_WORDDATA tex0;
	Q_WORDDATA alpha;
	Q_WORDDATA color_0;
	Q_WORDDATA st_0;
	Q_WORDDATA xyzf2_0;
	Q_WORDDATA color_1;
	Q_WORDDATA st_1;
	Q_WORDDATA xyzf2_1;
	Q_WORDDATA color_2;
	Q_WORDDATA st_2;
	Q_WORDDATA xyzf2_2;
};

struct SPACK_OT_DATA
{
	unsigned short DmaQwc;
	unsigned short DmaId;
	void* Addr;
	unsigned int W;
	unsigned short VifQwc;
	unsigned char EnvID;
	unsigned char VifDirect;
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

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
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

struct sh2gfw_BLOCKLOCAL_HEAD
{
	unsigned short gsregsamount[3];
	unsigned short transamount[3];
	unsigned short ltexnum;
	unsigned short pads;
};

struct _anon1
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

struct sh2gfw_Vif1Pkbuf
{
	void* pkTop;
	Q_WORDDATA* pTail;
	int initflg;
	int count;
};

struct sh2gfw_Vu0_TransMan
{
	int Qkick;
	int Qtail;
	void* Qaddr;
	void* Qbase;
	void* Qinfo;
	int tsleng[2];
};

struct SH2_NoSort_Header
{
	Q_WORDDATA dmacnt_all;
	Q_WORDDATA giftag_reg;
	Q_WORDDATA tex0;
	Q_WORDDATA alpha;
	Q_WORDDATA test;
	Q_WORDDATA zbuf;
	Q_WORDDATA giftag_prim;
};

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon2 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
};

union _anon2
{
	shBattleFight fight;
	shBattleShot shot;
};

struct SemiTrans_SprWork
{
	Q_WORDDATA info;
	int vNum;
	int pad0;
	int pad1;
	int pad2;
	SH2_SemiTrans_Triangle sstg[2];
	SH2_NoSort_Header nsh[2];
};

struct sh2gfw_SPOTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA dirvec;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
};

struct sh2gfw_POINTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
};

shAttackInfo sh2_attack_list[66];
int vu0tospr_page;
int pktmp_page;
SemiTrans_SprWork* St_SprW;
sh2gfw_Vu0_TransMan Vu0TrMan;
sh2gfw_Vif1Pkbuf NoSortPkbuf;
sh2gfw_VU_PARMS VU1_PARMS;
int SH2GFW_MF_vu0_Day_load_head;
int SH2GFW_MF_vu0_Night_load_head;
int Spr_WorkTop;
SPACK_DATA spack;
int Vu0ModeBuffer;
sh2gfw_Env_ctl Env_ctl;
sh2gfw_TRANS_MAN sh2_TR_MAN;
sh2gfw_BLOCK_MAN b_man[6];

void Init_Vu0TrMan(void* pk);
void Vu0Kick(void* tag);
void sh2gfw_Init_NoSortPkbuf();
void Init_Vu04SemiTrans();
void SetDrawParmsToVu0(sh2gfw_BLOCK_MAN* pB_man);
int Kick_Vu0TransCalcPacket();
void MakePacketTemplate(sh2gfw_TexMAN* pT);
void TrimSet_Packet_SprtoMemBuff();
<unknown fundamental type (0xa510)> sh2_PMAXW(<unknown fundamental type (0xa510)> rs, <unknown fundamental type (0xa510)> rt);
void Transfer_Vu0toSpr();
int Change_Vu0CalcMode();
int CheckGeom(sh2gfw_BLOCK_MAN* pB_m);
int Check_ViewClip(sh2gfw_BLOCK_MAN* pB_man, int gid, int divflg);
int Next_Info();
void Exec_Calc_Sort(void* pTexMAN);
void sh2gfw_Draw_SemiTexUsing(sh2gfw_BLOCK_MAN* pB_man);
int Check_UseTransTex();
int sh2gfw_Draw_SemiTransBG();

// 
// Start address: 0x20e250
void Init_Vu0TrMan(void* pk)
{
	// Line 138, Address: 0x20e250, Func Offset: 0
	// Line 140, Address: 0x20e260, Func Offset: 0x10
	// Line 141, Address: 0x20e278, Func Offset: 0x28
	// Line 142, Address: 0x20e280, Func Offset: 0x30
	// Line 143, Address: 0x20e288, Func Offset: 0x38
	// Line 144, Address: 0x20e290, Func Offset: 0x40
	// Func End, Address: 0x20e2a4, Func Offset: 0x54
}

// 
// Start address: 0x20e2b0
void Vu0Kick(void* tag)
{
	// Line 156, Address: 0x20e2b0, Func Offset: 0
	// Line 158, Address: 0x20e2cc, Func Offset: 0x1c
	// Line 159, Address: 0x20e2dc, Func Offset: 0x2c
	// Line 160, Address: 0x20e2e4, Func Offset: 0x34
	// Line 164, Address: 0x20e2f0, Func Offset: 0x40
	// Func End, Address: 0x20e2f8, Func Offset: 0x48
}

// 
// Start address: 0x20e300
void sh2gfw_Init_NoSortPkbuf()
{
	// Line 190, Address: 0x20e300, Func Offset: 0
	// Line 192, Address: 0x20e308, Func Offset: 0x8
	// Line 195, Address: 0x20e320, Func Offset: 0x20
	// Line 196, Address: 0x20e338, Func Offset: 0x38
	// Line 197, Address: 0x20e350, Func Offset: 0x50
	// Line 199, Address: 0x20e360, Func Offset: 0x60
	// Line 200, Address: 0x20e378, Func Offset: 0x78
	// Line 205, Address: 0x20e388, Func Offset: 0x88
	// Func End, Address: 0x20e398, Func Offset: 0x98
}

// 
// Start address: 0x20e3a0
void Init_Vu04SemiTrans()
{
	Q_WORDDATA* qwd;
	Q_WORDDATA LoadVu0[8];
	// Line 283, Address: 0x20e3a0, Func Offset: 0
	// Line 287, Address: 0x20e3ac, Func Offset: 0xc
	// Line 292, Address: 0x20e3b4, Func Offset: 0x14
	// Line 293, Address: 0x20e3c4, Func Offset: 0x24
	// Line 294, Address: 0x20e3d0, Func Offset: 0x30
	// Line 295, Address: 0x20e3d8, Func Offset: 0x38
	// Line 297, Address: 0x20e3e4, Func Offset: 0x44
	// Line 298, Address: 0x20e3ec, Func Offset: 0x4c
	// Line 299, Address: 0x20e3f0, Func Offset: 0x50
	// Line 303, Address: 0x20e3f4, Func Offset: 0x54
	// Line 307, Address: 0x20e438, Func Offset: 0x98
	// Line 309, Address: 0x20e46c, Func Offset: 0xcc
	// Line 310, Address: 0x20e470, Func Offset: 0xd0
	// Line 312, Address: 0x20e478, Func Offset: 0xd8
	// Line 313, Address: 0x20e48c, Func Offset: 0xec
	// Line 314, Address: 0x20e49c, Func Offset: 0xfc
	// Func End, Address: 0x20e4b0, Func Offset: 0x110
}

// 
// Start address: 0x20e4b0
void SetDrawParmsToVu0(sh2gfw_BLOCK_MAN* pB_man)
{
	Q_WORDDATA* qwd;
	Q_WORDDATA LoadMatrixVU0[8];
	// Line 343, Address: 0x20e4b0, Func Offset: 0
	// Line 348, Address: 0x20e4b8, Func Offset: 0x8
	// Line 359, Address: 0x20e4c0, Func Offset: 0x10
	// Line 366, Address: 0x20e514, Func Offset: 0x64
	// Line 370, Address: 0x20e544, Func Offset: 0x94
	// Line 372, Address: 0x20e560, Func Offset: 0xb0
	// Line 373, Address: 0x20e564, Func Offset: 0xb4
	// Line 375, Address: 0x20e56c, Func Offset: 0xbc
	// Line 377, Address: 0x20e574, Func Offset: 0xc4
	// Line 379, Address: 0x20e588, Func Offset: 0xd8
	// Line 381, Address: 0x20e598, Func Offset: 0xe8
	// Func End, Address: 0x20e5a8, Func Offset: 0xf8
}

// 
// Start address: 0x20e5b0
int Kick_Vu0TransCalcPacket()
{
	Q_WORDDATA* qwd;
	// Line 395, Address: 0x20e5b0, Func Offset: 0
	// Line 400, Address: 0x20e5bc, Func Offset: 0xc
	// Line 402, Address: 0x20e5d8, Func Offset: 0x28
	// Line 407, Address: 0x20e5f4, Func Offset: 0x44
	// Line 408, Address: 0x20e5fc, Func Offset: 0x4c
	// Line 410, Address: 0x20e604, Func Offset: 0x54
	// Line 412, Address: 0x20e610, Func Offset: 0x60
	// Line 416, Address: 0x20e630, Func Offset: 0x80
	// Line 417, Address: 0x20e64c, Func Offset: 0x9c
	// Line 423, Address: 0x20e658, Func Offset: 0xa8
	// Line 427, Address: 0x20e66c, Func Offset: 0xbc
	// Line 430, Address: 0x20e674, Func Offset: 0xc4
	// Func End, Address: 0x20e67c, Func Offset: 0xcc
}

// 
// Start address: 0x20e680
void MakePacketTemplate(sh2gfw_TexMAN* pT)
{
	<unknown fundamental type (0xa510)>* ul;
	SH2_SemiTrans_Triangle* stg;
	Q_WORDDATA* worktop;
	// Line 441, Address: 0x20e680, Func Offset: 0
	// Line 446, Address: 0x20e68c, Func Offset: 0xc
	// Line 447, Address: 0x20e6a4, Func Offset: 0x24
	// Line 448, Address: 0x20e6b0, Func Offset: 0x30
	// Line 453, Address: 0x20e6c0, Func Offset: 0x40
	// Line 457, Address: 0x20e6c8, Func Offset: 0x48
	// Line 458, Address: 0x20e6e0, Func Offset: 0x60
	// Line 460, Address: 0x20e6f8, Func Offset: 0x78
	// Line 467, Address: 0x20e70c, Func Offset: 0x8c
	// Line 469, Address: 0x20e740, Func Offset: 0xc0
	// Func End, Address: 0x20e754, Func Offset: 0xd4
}

// 
// Start address: 0x20e760
void TrimSet_Packet_SprtoMemBuff()
{
	SH2_SemiTrans_Triangle* pkSpr;
	SH2_SemiTrans_Triangle* stg;
	int tsleng;
	int i;
	Q_WORDDATA maxw;
	Q_WORDDATA* top2;
	Q_WORDDATA* top1;
	Q_WORDDATA* top0;
	// Line 586, Address: 0x20e760, Func Offset: 0
	// Line 593, Address: 0x20e784, Func Offset: 0x24
	// Line 596, Address: 0x20e790, Func Offset: 0x30
	// Line 597, Address: 0x20e79c, Func Offset: 0x3c
	// Line 598, Address: 0x20e7a0, Func Offset: 0x40
	// Line 604, Address: 0x20e7a4, Func Offset: 0x44
	// Line 615, Address: 0x20e7c0, Func Offset: 0x60
	// Line 617, Address: 0x20e7cc, Func Offset: 0x6c
	// Line 622, Address: 0x20e7dc, Func Offset: 0x7c
	// Line 623, Address: 0x20e7f0, Func Offset: 0x90
	// Line 625, Address: 0x20e804, Func Offset: 0xa4
	// Line 629, Address: 0x20e828, Func Offset: 0xc8
	// Line 636, Address: 0x20e83c, Func Offset: 0xdc
	// Line 637, Address: 0x20e848, Func Offset: 0xe8
	// Line 645, Address: 0x20e854, Func Offset: 0xf4
	// Line 646, Address: 0x20e858, Func Offset: 0xf8
	// Line 648, Address: 0x20e874, Func Offset: 0x114
	// Line 649, Address: 0x20e880, Func Offset: 0x120
	// Line 651, Address: 0x20e88c, Func Offset: 0x12c
	// Line 653, Address: 0x20e8a4, Func Offset: 0x144
	// Line 656, Address: 0x20e8b0, Func Offset: 0x150
	// Line 660, Address: 0x20e8b8, Func Offset: 0x158
	// Line 661, Address: 0x20e8bc, Func Offset: 0x15c
	// Line 662, Address: 0x20e8c0, Func Offset: 0x160
	// Line 666, Address: 0x20e8d4, Func Offset: 0x174
	// Func End, Address: 0x20e900, Func Offset: 0x1a0
}

// 
// Start address: 0x20e960
<unknown fundamental type (0xa510)> sh2_PMAXW(<unknown fundamental type (0xa510)> rs, <unknown fundamental type (0xa510)> rt)
{
	<unknown fundamental type (0xa510)> rd;
	// Line 566, Address: 0x20e960, Func Offset: 0
	// Line 568, Address: 0x20e964, Func Offset: 0x4
	// Func End, Address: 0x20e96c, Func Offset: 0xc
}

// 
// Start address: 0x20e970
void Transfer_Vu0toSpr()
{
	int work_sadr;
	// Line 730, Address: 0x20e970, Func Offset: 0
	// Line 732, Address: 0x20e97c, Func Offset: 0xc
	// Line 736, Address: 0x20e98c, Func Offset: 0x1c
	// Line 738, Address: 0x20e9a8, Func Offset: 0x38
	// Line 742, Address: 0x20e9c4, Func Offset: 0x54
	// Line 743, Address: 0x20e9c8, Func Offset: 0x58
	// Line 745, Address: 0x20e9e4, Func Offset: 0x74
	// Line 746, Address: 0x20e9ec, Func Offset: 0x7c
	// Line 747, Address: 0x20e9fc, Func Offset: 0x8c
	// Line 749, Address: 0x20ea08, Func Offset: 0x98
	// Line 757, Address: 0x20ea14, Func Offset: 0xa4
	// Func End, Address: 0x20ea1c, Func Offset: 0xac
}

// 
// Start address: 0x20ea20
int Change_Vu0CalcMode()
{
	int mode;
	Q_WORDDATA* pK;
	Q_WORDDATA* qwd;
	Q_WORDDATA Vu0_pkbuf[4];
	// Line 774, Address: 0x20ea20, Func Offset: 0
	// Line 776, Address: 0x20ea28, Func Offset: 0x8
	// Line 783, Address: 0x20ea30, Func Offset: 0x10
	// Line 785, Address: 0x20ea3c, Func Offset: 0x1c
	// Line 788, Address: 0x20ea44, Func Offset: 0x24
	// Line 796, Address: 0x20ea64, Func Offset: 0x44
	// Line 797, Address: 0x20ea74, Func Offset: 0x54
	// Line 798, Address: 0x20ea7c, Func Offset: 0x5c
	// Line 799, Address: 0x20ea80, Func Offset: 0x60
	// Line 802, Address: 0x20ea8c, Func Offset: 0x6c
	// Line 808, Address: 0x20eab8, Func Offset: 0x98
	// Line 809, Address: 0x20eac4, Func Offset: 0xa4
	// Line 810, Address: 0x20eacc, Func Offset: 0xac
	// Line 812, Address: 0x20ead4, Func Offset: 0xb4
	// Line 813, Address: 0x20eae0, Func Offset: 0xc0
	// Line 814, Address: 0x20eae8, Func Offset: 0xc8
	// Line 818, Address: 0x20eaf0, Func Offset: 0xd0
	// Line 819, Address: 0x20eafc, Func Offset: 0xdc
	// Line 825, Address: 0x20eb04, Func Offset: 0xe4
	// Line 827, Address: 0x20eb20, Func Offset: 0x100
	// Line 829, Address: 0x20eb3c, Func Offset: 0x11c
	// Line 832, Address: 0x20eb4c, Func Offset: 0x12c
	// Line 834, Address: 0x20eb50, Func Offset: 0x130
	// Func End, Address: 0x20eb60, Func Offset: 0x140
}

// 
// Start address: 0x20eb60
int CheckGeom(sh2gfw_BLOCK_MAN* pB_m)
{
	int divflg;
	Q_WORDDATA* qif;
	// Line 869, Address: 0x20eb60, Func Offset: 0
	// Line 870, Address: 0x20eb78, Func Offset: 0x18
	// Line 874, Address: 0x20eb80, Func Offset: 0x20
	// Line 876, Address: 0x20eb88, Func Offset: 0x28
	// Line 878, Address: 0x20eb90, Func Offset: 0x30
	// Line 881, Address: 0x20eb94, Func Offset: 0x34
	// Line 883, Address: 0x20eba4, Func Offset: 0x44
	// Line 885, Address: 0x20ebbc, Func Offset: 0x5c
	// Line 886, Address: 0x20ebc8, Func Offset: 0x68
	// Line 888, Address: 0x20ebd0, Func Offset: 0x70
	// Line 892, Address: 0x20ebec, Func Offset: 0x8c
	// Line 893, Address: 0x20ebf4, Func Offset: 0x94
	// Line 895, Address: 0x20ebfc, Func Offset: 0x9c
	// Line 897, Address: 0x20ec00, Func Offset: 0xa0
	// Func End, Address: 0x20ec1c, Func Offset: 0xbc
}

// 
// Start address: 0x20ec20
int Check_ViewClip(sh2gfw_BLOCK_MAN* pB_man, int gid, int divflg)
{
	int ret;
	unsigned char* taif;
	// Line 843, Address: 0x20ec20, Func Offset: 0
	// Line 849, Address: 0x20ec2c, Func Offset: 0xc
	// Line 851, Address: 0x20ec48, Func Offset: 0x28
	// Line 855, Address: 0x20ec50, Func Offset: 0x30
	// Line 856, Address: 0x20ec54, Func Offset: 0x34
	// Line 857, Address: 0x20ec58, Func Offset: 0x38
	// Line 858, Address: 0x20ec60, Func Offset: 0x40
	// Line 863, Address: 0x20ec68, Func Offset: 0x48
	// Line 865, Address: 0x20ec6c, Func Offset: 0x4c
	// Func End, Address: 0x20ec74, Func Offset: 0x54
}

// 
// Start address: 0x20ec80
int Next_Info()
{
	Q_WORDDATA* qif;
	// Line 902, Address: 0x20ec80, Func Offset: 0
	// Line 903, Address: 0x20ec88, Func Offset: 0x8
	// Line 904, Address: 0x20ec8c, Func Offset: 0xc
	// Line 905, Address: 0x20eca0, Func Offset: 0x20
	// Line 908, Address: 0x20eca8, Func Offset: 0x28
	// Line 909, Address: 0x20ecac, Func Offset: 0x2c
	// Func End, Address: 0x20ecb4, Func Offset: 0x34
}

// 
// Start address: 0x20ecc0
void Exec_Calc_Sort(void* pTexMAN)
{
	int flg;
	// Line 921, Address: 0x20ecc0, Func Offset: 0
	// Line 923, Address: 0x20ecd0, Func Offset: 0x10
	// Line 928, Address: 0x20ecdc, Func Offset: 0x1c
	// Line 930, Address: 0x20ece8, Func Offset: 0x28
	// Line 932, Address: 0x20ecf0, Func Offset: 0x30
	// Line 934, Address: 0x20ecf8, Func Offset: 0x38
	// Line 937, Address: 0x20ed04, Func Offset: 0x44
	// Line 938, Address: 0x20ed0c, Func Offset: 0x4c
	// Line 940, Address: 0x20ed18, Func Offset: 0x58
	// Line 942, Address: 0x20ed20, Func Offset: 0x60
	// Line 945, Address: 0x20ed34, Func Offset: 0x74
	// Line 947, Address: 0x20ed50, Func Offset: 0x90
	// Line 952, Address: 0x20ed58, Func Offset: 0x98
	// Line 953, Address: 0x20ed74, Func Offset: 0xb4
	// Func End, Address: 0x20ed88, Func Offset: 0xc8
}

// 
// Start address: 0x20ed90
void sh2gfw_Draw_SemiTexUsing(sh2gfw_BLOCK_MAN* pB_man)
{
	// Line 1005, Address: 0x20ed90, Func Offset: 0
	// Line 1010, Address: 0x20eda0, Func Offset: 0x10
	// Line 1012, Address: 0x20edb8, Func Offset: 0x28
	// Line 1074, Address: 0x20edc4, Func Offset: 0x34
	// Line 1080, Address: 0x20edd0, Func Offset: 0x40
	// Line 1082, Address: 0x20eddc, Func Offset: 0x4c
	// Line 1085, Address: 0x20ede4, Func Offset: 0x54
	// Line 1087, Address: 0x20edec, Func Offset: 0x5c
	// Line 1088, Address: 0x20edf4, Func Offset: 0x64
	// Line 1089, Address: 0x20ee00, Func Offset: 0x70
	// Line 1090, Address: 0x20ee14, Func Offset: 0x84
	// Line 1092, Address: 0x20ee2c, Func Offset: 0x9c
	// Line 1094, Address: 0x20ee30, Func Offset: 0xa0
	// Line 1097, Address: 0x20ee3c, Func Offset: 0xac
	// Line 1100, Address: 0x20ee4c, Func Offset: 0xbc
	// Line 1103, Address: 0x20ee54, Func Offset: 0xc4
	// Line 1105, Address: 0x20ee5c, Func Offset: 0xcc
	// Line 1106, Address: 0x20ee64, Func Offset: 0xd4
	// Line 1107, Address: 0x20ee74, Func Offset: 0xe4
	// Line 1108, Address: 0x20ee88, Func Offset: 0xf8
	// Line 1109, Address: 0x20ee9c, Func Offset: 0x10c
	// Line 1112, Address: 0x20eea0, Func Offset: 0x110
	// Func End, Address: 0x20eeb4, Func Offset: 0x124
}

// 
// Start address: 0x20eec0
int Check_UseTransTex()
{
	int lca;
	int gbl;
	int ret;
	int slot;
	// Line 1134, Address: 0x20eec0, Func Offset: 0
	// Line 1135, Address: 0x20eecc, Func Offset: 0xc
	// Line 1136, Address: 0x20eed8, Func Offset: 0x18
	// Line 1137, Address: 0x20eef8, Func Offset: 0x38
	// Line 1138, Address: 0x20ef0c, Func Offset: 0x4c
	// Line 1140, Address: 0x20ef20, Func Offset: 0x60
	// Line 1151, Address: 0x20ef34, Func Offset: 0x74
	// Line 1152, Address: 0x20ef40, Func Offset: 0x80
	// Line 1155, Address: 0x20ef4c, Func Offset: 0x8c
	// Func End, Address: 0x20ef54, Func Offset: 0x94
}

// 
// Start address: 0x20ef60
int sh2gfw_Draw_SemiTransBG()
{
	int slot;
	char buf[16];
	int slotid;
	int comid;
	int tnum;
	// Line 1165, Address: 0x20ef60, Func Offset: 0
	// Line 1168, Address: 0x20ef70, Func Offset: 0x10
	// Line 1172, Address: 0x20ef7c, Func Offset: 0x1c
	// Line 1175, Address: 0x20ef88, Func Offset: 0x28
	// Line 1176, Address: 0x20ef98, Func Offset: 0x38
	// Line 1187, Address: 0x20efbc, Func Offset: 0x5c
	// Line 1191, Address: 0x20efc8, Func Offset: 0x68
	// Line 1194, Address: 0x20efd8, Func Offset: 0x78
	// Line 1198, Address: 0x20efe8, Func Offset: 0x88
	// Line 1203, Address: 0x20f018, Func Offset: 0xb8
	// Line 1204, Address: 0x20f034, Func Offset: 0xd4
	// Line 1210, Address: 0x20f048, Func Offset: 0xe8
	// Line 1212, Address: 0x20f05c, Func Offset: 0xfc
	// Line 1217, Address: 0x20f064, Func Offset: 0x104
	// Line 1220, Address: 0x20f070, Func Offset: 0x110
	// Line 1222, Address: 0x20f078, Func Offset: 0x118
	// Line 1223, Address: 0x20f084, Func Offset: 0x124
	// Line 1224, Address: 0x20f0a4, Func Offset: 0x144
	// Line 1226, Address: 0x20f0b8, Func Offset: 0x158
	// Line 1234, Address: 0x20f0cc, Func Offset: 0x16c
	// Line 1237, Address: 0x20f0d0, Func Offset: 0x170
	// Line 1242, Address: 0x20f0e4, Func Offset: 0x184
	// Line 1244, Address: 0x20f0e8, Func Offset: 0x188
	// Func End, Address: 0x20f100, Func Offset: 0x1a0
}

