typedef struct SH2_NoSort_Header;
typedef struct SPACK_DATA;
typedef union Q_WORDDATA;
typedef struct SPACK_OT_DATA;
typedef struct sh2gfw_GIFTAG_HEAD;
typedef struct sh2gfw_AREA_HEAD;
typedef struct SemiTrans_SprWork;
typedef struct sh2gfw_BLOCK_HEAD;
typedef struct sh2gfw_TRANS_MAN;
typedef struct SPACK_ENV_DATA;
typedef struct _anon0;
typedef struct SPACK_STATIC_DATA;
typedef struct sh2gfw_TexMAN;
typedef struct sh2gfw_TEX_HEAD;
typedef struct sh2gfw_CLUTS_HEAD;
typedef struct sh2gfw_BLOCKGLOBAL_HEAD;
typedef struct sh2gfw_BLOCK_MAN;
typedef struct sh2gfw_BLOCKLOCAL_HEAD;
typedef struct shBattleFight;
typedef struct _anon1;
typedef struct SH2_SemiTrans_Triangle;
typedef struct shBattleShot;
typedef struct sh2gfw_GSREGS_HEAD;
typedef struct sh2gfw_Vif1Pkbuf;
typedef struct shAttackInfo;
typedef union _anon2;
typedef struct sh2gfw_VU_PARMS;
typedef struct sh2gfw_Vu0_TransMan;


typedef char type_0[16];
typedef Q_WORDDATA type_1[48];
typedef unsigned long type_2[2];
typedef int type_3[2];
typedef sh2gfw_GIFTAG_HEAD* type_4[16];
typedef unsigned char type_5[8];
typedef Q_WORDDATA type_6[2];
typedef unsigned char type_7[8][8];
typedef Q_WORDDATA type_8[3];
typedef SH2_SemiTrans_Triangle type_9[2];
typedef SH2_NoSort_Header type_10[2];
typedef Q_WORDDATA type_11[4];
typedef unsigned short type_12[4];
typedef unsigned int type_13[3];
typedef unsigned int type_14[3];
typedef unsigned char* type_15[4];
typedef sh2gfw_GIFTAG_HEAD* type_16[16];
typedef sh2gfw_GIFTAG_HEAD* type_17[16][4];
typedef unsigned char type_18[7];
typedef unsigned char type_19[7];
typedef unsigned short type_20[7];
typedef unsigned char* type_21[7];
typedef unsigned char type_22[4];
typedef sh2gfw_GIFTAG_HEAD* type_23[16];
typedef sh2gfw_GIFTAG_HEAD* type_24[16][4];
typedef unsigned short type_25[3];
typedef unsigned char type_26[4];
typedef unsigned short type_27[3];
typedef float type_28[4];
typedef float type_29[4];
typedef float type_30[4][4];
typedef float type_31[4][2];
typedef shAttackInfo type_32[46];
typedef sh2gfw_GSREGS_HEAD* type_33[4];
typedef sh2gfw_GIFTAG_HEAD* type_34[16];
typedef sh2gfw_GIFTAG_HEAD* type_35[16][4];
typedef unsigned short type_36[8];
typedef unsigned short type_37[8][16];
typedef unsigned short type_38[8][16][4];
typedef sh2gfw_TEX_HEAD* type_39[4];
typedef sh2gfw_CLUTS_HEAD* type_40[4];
typedef Q_WORDDATA type_41[8];
typedef unsigned char type_42[4];
typedef unsigned char type_43[16];
typedef unsigned char type_44[16][4];
typedef unsigned char type_45[16];
typedef unsigned char type_46[16][16];
typedef unsigned char type_47[16][16][4];
typedef sh2gfw_BLOCK_MAN type_48[6];
typedef Q_WORDDATA type_49[8];
typedef unsigned char type_50[16];
typedef void* type_51[4];
typedef unsigned char type_52[16];
typedef Q_WORDDATA* type_53[4];
typedef unsigned int type_54[4];
typedef int type_55[8];
typedef int type_56[8];
typedef char type_57[16];
typedef unsigned int type_58[4];
typedef unsigned short type_59[8];
typedef unsigned char type_60[16];
typedef float type_61[4];
typedef unsigned char type_62[16];
typedef unsigned char type_63[16];
typedef int type_64[4];
typedef short type_65[8];

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

struct SPACK_STATIC_DATA
{
	unsigned short GifNLOOP;
	unsigned short DmaQwc;
	unsigned int PRE_PRIM_FLG_NREG;
	unsigned long REGS;
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

struct sh2gfw_BLOCKGLOBAL_HEAD
{
	unsigned int gsregsamount;
	unsigned int transamount;
	unsigned char gtexnum;
	unsigned char gtransnum;
	unsigned short pads;
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
	_anon1 blk_LightData;
};

struct sh2gfw_BLOCKLOCAL_HEAD
{
	unsigned short gsregsamount[3];
	unsigned short transamount[3];
	unsigned short ltexnum;
	unsigned short pads;
};

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
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
	Q_WORDDATA GlobalAmbient;
	Q_WORDDATA ALPHA_clear;
	unsigned int light_type_buf;
	unsigned int light_type_now;
	unsigned int pad1;
	unsigned int pad2;
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

struct sh2gfw_Vif1Pkbuf
{
	void* pkTop;
	Q_WORDDATA* pTail;
	int initflg;
	int count;
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

struct sh2gfw_Vu0_TransMan
{
	int Qkick;
	int Qtail;
	void* Qaddr;
	void* Qbase;
	void* Qinfo;
	int tsleng[2];
};

shAttackInfo sh2_attack_list[46];
int vu0tospr_page;
int pktmp_page;
SemiTrans_SprWork* St_SprW;
sh2gfw_Vu0_TransMan Vu0TrMan;
sh2gfw_Vif1Pkbuf NoSortPkbuf;
sh2gfw_VU_PARMS VU1_PARMS;
int SH2GFW_MF_vu0_load_head;
int Spr_WorkTop;
SPACK_DATA spack;
int Vu0ModeBuffer;
sh2gfw_TRANS_MAN sh2_TR_MAN;
sh2gfw_BLOCK_MAN b_man[6];
_anon0 Area_Data_Man;

int Init_Vu0TrMan(void* pk);
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
int Check_ViewClip(sh2gfw_BLOCK_MAN* pB_man, int gid);
int Next_Info();
void Exec_Calc_Sort(void* pTexMAN);
void sh2gfw_Draw_SemiTexUsing(sh2gfw_BLOCK_MAN* pB_man);
int Check_UseTransTex();
int sh2gfw_Draw_SemiTransBG();

// 
// Start address: 0x2114f0
int Init_Vu0TrMan(void* pk)
{
	// Line 136, Address: 0x2114f0, Func Offset: 0
	// Line 138, Address: 0x2114fc, Func Offset: 0xc
	// Line 139, Address: 0x211514, Func Offset: 0x24
	// Line 140, Address: 0x211520, Func Offset: 0x30
	// Line 141, Address: 0x21152c, Func Offset: 0x3c
	// Line 142, Address: 0x211538, Func Offset: 0x48
	// Func End, Address: 0x211548, Func Offset: 0x58
}

// 
// Start address: 0x211550
void Vu0Kick(void* tag)
{
	// Line 152, Address: 0x211550, Func Offset: 0
	// Line 154, Address: 0x211558, Func Offset: 0x8
	// Line 156, Address: 0x211574, Func Offset: 0x24
	// Line 157, Address: 0x21158c, Func Offset: 0x3c
	// Line 158, Address: 0x211598, Func Offset: 0x48
	// Line 162, Address: 0x2115a8, Func Offset: 0x58
	// Func End, Address: 0x2115b4, Func Offset: 0x64
}

// 
// Start address: 0x2115c0
void sh2gfw_Init_NoSortPkbuf()
{
	// Line 188, Address: 0x2115c0, Func Offset: 0
	// Line 190, Address: 0x2115c8, Func Offset: 0x8
	// Line 193, Address: 0x2115e0, Func Offset: 0x20
	// Line 194, Address: 0x2115f0, Func Offset: 0x30
	// Line 195, Address: 0x211610, Func Offset: 0x50
	// Line 197, Address: 0x211630, Func Offset: 0x70
	// Line 198, Address: 0x211648, Func Offset: 0x88
	// Line 203, Address: 0x211658, Func Offset: 0x98
	// Func End, Address: 0x211668, Func Offset: 0xa8
}

// 
// Start address: 0x211670
void Init_Vu04SemiTrans()
{
	Q_WORDDATA* qwd;
	Q_WORDDATA LoadVu0[8];
	// Line 281, Address: 0x211670, Func Offset: 0
	// Line 285, Address: 0x21167c, Func Offset: 0xc
	// Line 292, Address: 0x211684, Func Offset: 0x14
	// Line 293, Address: 0x21168c, Func Offset: 0x1c
	// Line 294, Address: 0x211698, Func Offset: 0x28
	// Line 295, Address: 0x21169c, Func Offset: 0x2c
	// Line 300, Address: 0x2116a4, Func Offset: 0x34
	// Line 304, Address: 0x2116e8, Func Offset: 0x78
	// Line 306, Address: 0x21172c, Func Offset: 0xbc
	// Line 307, Address: 0x211730, Func Offset: 0xc0
	// Line 309, Address: 0x21173c, Func Offset: 0xcc
	// Line 310, Address: 0x211750, Func Offset: 0xe0
	// Line 311, Address: 0x211760, Func Offset: 0xf0
	// Func End, Address: 0x211774, Func Offset: 0x104
}

// 
// Start address: 0x211780
void SetDrawParmsToVu0(sh2gfw_BLOCK_MAN* pB_man)
{
	Q_WORDDATA* qwd;
	Q_WORDDATA LoadMatrixVU0[8];
	// Line 340, Address: 0x211780, Func Offset: 0
	// Line 345, Address: 0x211790, Func Offset: 0x10
	// Line 356, Address: 0x211798, Func Offset: 0x18
	// Line 363, Address: 0x2117d8, Func Offset: 0x58
	// Line 367, Address: 0x21181c, Func Offset: 0x9c
	// Line 369, Address: 0x21183c, Func Offset: 0xbc
	// Line 370, Address: 0x211840, Func Offset: 0xc0
	// Line 372, Address: 0x211848, Func Offset: 0xc8
	// Line 374, Address: 0x211858, Func Offset: 0xd8
	// Line 376, Address: 0x21186c, Func Offset: 0xec
	// Line 378, Address: 0x21187c, Func Offset: 0xfc
	// Func End, Address: 0x211890, Func Offset: 0x110
}

// 
// Start address: 0x211890
int Kick_Vu0TransCalcPacket()
{
	Q_WORDDATA* qwd;
	// Line 391, Address: 0x211890, Func Offset: 0
	// Line 392, Address: 0x211898, Func Offset: 0x8
	// Line 397, Address: 0x2118a4, Func Offset: 0x14
	// Line 399, Address: 0x2118c0, Func Offset: 0x30
	// Line 404, Address: 0x2118e0, Func Offset: 0x50
	// Line 405, Address: 0x2118ec, Func Offset: 0x5c
	// Line 406, Address: 0x2118f8, Func Offset: 0x68
	// Line 407, Address: 0x2118fc, Func Offset: 0x6c
	// Line 409, Address: 0x211908, Func Offset: 0x78
	// Line 413, Address: 0x211928, Func Offset: 0x98
	// Line 414, Address: 0x211944, Func Offset: 0xb4
	// Line 420, Address: 0x211954, Func Offset: 0xc4
	// Line 424, Address: 0x211968, Func Offset: 0xd8
	// Line 427, Address: 0x211974, Func Offset: 0xe4
	// Func End, Address: 0x211984, Func Offset: 0xf4
}

// 
// Start address: 0x211990
void MakePacketTemplate(sh2gfw_TexMAN* pT)
{
	<unknown fundamental type (0xa510)>* ul;
	SH2_SemiTrans_Triangle* stg;
	Q_WORDDATA* worktop;
	// Line 438, Address: 0x211990, Func Offset: 0
	// Line 439, Address: 0x2119a8, Func Offset: 0x18
	// Line 443, Address: 0x2119b0, Func Offset: 0x20
	// Line 444, Address: 0x2119c8, Func Offset: 0x38
	// Line 445, Address: 0x2119d4, Func Offset: 0x44
	// Line 450, Address: 0x2119f8, Func Offset: 0x68
	// Line 454, Address: 0x211a04, Func Offset: 0x74
	// Line 455, Address: 0x211a1c, Func Offset: 0x8c
	// Line 457, Address: 0x211a34, Func Offset: 0xa4
	// Line 464, Address: 0x211a48, Func Offset: 0xb8
	// Line 466, Address: 0x211a80, Func Offset: 0xf0
	// Func End, Address: 0x211a9c, Func Offset: 0x10c
}

// 
// Start address: 0x211aa0
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
	// Line 583, Address: 0x211aa0, Func Offset: 0
	// Line 590, Address: 0x211ac8, Func Offset: 0x28
	// Line 593, Address: 0x211ad4, Func Offset: 0x34
	// Line 594, Address: 0x211ae0, Func Offset: 0x40
	// Line 595, Address: 0x211ae4, Func Offset: 0x44
	// Line 601, Address: 0x211ae8, Func Offset: 0x48
	// Line 612, Address: 0x211b04, Func Offset: 0x64
	// Line 614, Address: 0x211b10, Func Offset: 0x70
	// Line 619, Address: 0x211b20, Func Offset: 0x80
	// Line 620, Address: 0x211b34, Func Offset: 0x94
	// Line 622, Address: 0x211b48, Func Offset: 0xa8
	// Line 626, Address: 0x211b6c, Func Offset: 0xcc
	// Line 633, Address: 0x211b80, Func Offset: 0xe0
	// Line 634, Address: 0x211b8c, Func Offset: 0xec
	// Line 643, Address: 0x211b98, Func Offset: 0xf8
	// Line 645, Address: 0x211bb4, Func Offset: 0x114
	// Line 646, Address: 0x211bc4, Func Offset: 0x124
	// Line 648, Address: 0x211bd4, Func Offset: 0x134
	// Line 650, Address: 0x211bf4, Func Offset: 0x154
	// Line 653, Address: 0x211c04, Func Offset: 0x164
	// Line 656, Address: 0x211c0c, Func Offset: 0x16c
	// Line 657, Address: 0x211c10, Func Offset: 0x170
	// Line 658, Address: 0x211c14, Func Offset: 0x174
	// Line 659, Address: 0x211c18, Func Offset: 0x178
	// Line 663, Address: 0x211c34, Func Offset: 0x194
	// Func End, Address: 0x211c64, Func Offset: 0x1c4
}

// 
// Start address: 0x211d00
<unknown fundamental type (0xa510)> sh2_PMAXW(<unknown fundamental type (0xa510)> rs, <unknown fundamental type (0xa510)> rt)
{
	<unknown fundamental type (0xa510)> rd;
	// Line 563, Address: 0x211d00, Func Offset: 0
	// Line 565, Address: 0x211d04, Func Offset: 0x4
	// Func End, Address: 0x211d0c, Func Offset: 0xc
}

// 
// Start address: 0x211d10
void Transfer_Vu0toSpr()
{
	int work_sadr;
	// Line 724, Address: 0x211d10, Func Offset: 0
	// Line 727, Address: 0x211d18, Func Offset: 0x8
	// Line 729, Address: 0x211d24, Func Offset: 0x14
	// Line 733, Address: 0x211d40, Func Offset: 0x30
	// Line 734, Address: 0x211d5c, Func Offset: 0x4c
	// Line 735, Address: 0x211d60, Func Offset: 0x50
	// Line 740, Address: 0x211d80, Func Offset: 0x70
	// Line 742, Address: 0x211d9c, Func Offset: 0x8c
	// Line 743, Address: 0x211da8, Func Offset: 0x98
	// Line 744, Address: 0x211dbc, Func Offset: 0xac
	// Line 746, Address: 0x211dcc, Func Offset: 0xbc
	// Line 754, Address: 0x211ddc, Func Offset: 0xcc
	// Func End, Address: 0x211dec, Func Offset: 0xdc
}

// 
// Start address: 0x211df0
int Change_Vu0CalcMode()
{
	Q_WORDDATA* pK;
	Q_WORDDATA* qwd;
	Q_WORDDATA Vu0_pkbuf[4];
	// Line 771, Address: 0x211df0, Func Offset: 0
	// Line 773, Address: 0x211e00, Func Offset: 0x10
	// Line 778, Address: 0x211e08, Func Offset: 0x18
	// Line 780, Address: 0x211e3c, Func Offset: 0x4c
	// Line 782, Address: 0x211e48, Func Offset: 0x58
	// Line 785, Address: 0x211e50, Func Offset: 0x60
	// Line 787, Address: 0x211e74, Func Offset: 0x84
	// Line 793, Address: 0x211e84, Func Offset: 0x94
	// Line 794, Address: 0x211e94, Func Offset: 0xa4
	// Line 795, Address: 0x211e9c, Func Offset: 0xac
	// Line 796, Address: 0x211ea0, Func Offset: 0xb0
	// Line 798, Address: 0x211eac, Func Offset: 0xbc
	// Line 808, Address: 0x211ebc, Func Offset: 0xcc
	// Line 810, Address: 0x211ecc, Func Offset: 0xdc
	// Line 811, Address: 0x211ed8, Func Offset: 0xe8
	// Line 813, Address: 0x211ee0, Func Offset: 0xf0
	// Line 825, Address: 0x211eec, Func Offset: 0xfc
	// Line 827, Address: 0x211f08, Func Offset: 0x118
	// Line 829, Address: 0x211f28, Func Offset: 0x138
	// Line 832, Address: 0x211f38, Func Offset: 0x148
	// Line 834, Address: 0x211f3c, Func Offset: 0x14c
	// Func End, Address: 0x211f54, Func Offset: 0x164
}

// 
// Start address: 0x211f60
int CheckGeom(sh2gfw_BLOCK_MAN* pB_m)
{
	Q_WORDDATA* qif;
	// Line 855, Address: 0x211f60, Func Offset: 0
	// Line 856, Address: 0x211f70, Func Offset: 0x10
	// Line 860, Address: 0x211f78, Func Offset: 0x18
	// Line 864, Address: 0x211f8c, Func Offset: 0x2c
	// Line 878, Address: 0x211f94, Func Offset: 0x34
	// Line 881, Address: 0x211f98, Func Offset: 0x38
	// Line 883, Address: 0x211fa8, Func Offset: 0x48
	// Line 885, Address: 0x211fc4, Func Offset: 0x64
	// Line 886, Address: 0x211fd0, Func Offset: 0x70
	// Line 888, Address: 0x211fd8, Func Offset: 0x78
	// Line 890, Address: 0x211ff4, Func Offset: 0x94
	// Line 892, Address: 0x211ff8, Func Offset: 0x98
	// Line 893, Address: 0x212000, Func Offset: 0xa0
	// Line 895, Address: 0x212008, Func Offset: 0xa8
	// Line 897, Address: 0x21200c, Func Offset: 0xac
	// Func End, Address: 0x212020, Func Offset: 0xc0
}

// 
// Start address: 0x212020
int Check_ViewClip(sh2gfw_BLOCK_MAN* pB_man, int gid)
{
	int ret;
	unsigned char* taif;
	// Line 841, Address: 0x212020, Func Offset: 0
	// Line 844, Address: 0x212034, Func Offset: 0x14
	// Line 846, Address: 0x21203c, Func Offset: 0x1c
	// Line 848, Address: 0x212044, Func Offset: 0x24
	// Line 850, Address: 0x212050, Func Offset: 0x30
	// Line 851, Address: 0x212054, Func Offset: 0x34
	// Func End, Address: 0x212068, Func Offset: 0x48
}

// 
// Start address: 0x212070
int Next_Info()
{
	Q_WORDDATA* qif;
	// Line 901, Address: 0x212070, Func Offset: 0
	// Line 902, Address: 0x212078, Func Offset: 0x8
	// Line 903, Address: 0x212080, Func Offset: 0x10
	// Line 904, Address: 0x212084, Func Offset: 0x14
	// Line 905, Address: 0x212098, Func Offset: 0x28
	// Line 908, Address: 0x2120a0, Func Offset: 0x30
	// Line 909, Address: 0x2120a4, Func Offset: 0x34
	// Func End, Address: 0x2120b4, Func Offset: 0x44
}

// 
// Start address: 0x2120c0
void Exec_Calc_Sort(void* pTexMAN)
{
	int flg;
	// Line 921, Address: 0x2120c0, Func Offset: 0
	// Line 923, Address: 0x2120d0, Func Offset: 0x10
	// Line 928, Address: 0x2120dc, Func Offset: 0x1c
	// Line 930, Address: 0x2120e8, Func Offset: 0x28
	// Line 932, Address: 0x2120f0, Func Offset: 0x30
	// Line 934, Address: 0x2120f8, Func Offset: 0x38
	// Line 937, Address: 0x212104, Func Offset: 0x44
	// Line 938, Address: 0x21210c, Func Offset: 0x4c
	// Line 940, Address: 0x212118, Func Offset: 0x58
	// Line 942, Address: 0x212120, Func Offset: 0x60
	// Line 945, Address: 0x212134, Func Offset: 0x74
	// Line 947, Address: 0x212150, Func Offset: 0x90
	// Line 952, Address: 0x212158, Func Offset: 0x98
	// Line 953, Address: 0x212174, Func Offset: 0xb4
	// Func End, Address: 0x212188, Func Offset: 0xc8
}

// 
// Start address: 0x212190
void sh2gfw_Draw_SemiTexUsing(sh2gfw_BLOCK_MAN* pB_man)
{
	// Line 1005, Address: 0x212190, Func Offset: 0
	// Line 1010, Address: 0x21219c, Func Offset: 0xc
	// Line 1012, Address: 0x2121bc, Func Offset: 0x2c
	// Line 1074, Address: 0x2121c8, Func Offset: 0x38
	// Line 1080, Address: 0x2121d4, Func Offset: 0x44
	// Line 1082, Address: 0x2121e4, Func Offset: 0x54
	// Line 1085, Address: 0x2121f4, Func Offset: 0x64
	// Line 1087, Address: 0x2121fc, Func Offset: 0x6c
	// Line 1088, Address: 0x212204, Func Offset: 0x74
	// Line 1089, Address: 0x212214, Func Offset: 0x84
	// Line 1090, Address: 0x212228, Func Offset: 0x98
	// Line 1094, Address: 0x212240, Func Offset: 0xb0
	// Line 1097, Address: 0x212250, Func Offset: 0xc0
	// Line 1100, Address: 0x212260, Func Offset: 0xd0
	// Line 1103, Address: 0x212270, Func Offset: 0xe0
	// Line 1105, Address: 0x212278, Func Offset: 0xe8
	// Line 1106, Address: 0x212280, Func Offset: 0xf0
	// Line 1107, Address: 0x212290, Func Offset: 0x100
	// Line 1108, Address: 0x2122a4, Func Offset: 0x114
	// Line 1112, Address: 0x2122c0, Func Offset: 0x130
	// Func End, Address: 0x2122d0, Func Offset: 0x140
}

// 
// Start address: 0x2122d0
int Check_UseTransTex()
{
	int lca;
	int gbl;
	int id;
	int ret;
	int i;
	// Line 1130, Address: 0x2122d0, Func Offset: 0
	// Line 1131, Address: 0x2122ec, Func Offset: 0x1c
	// Line 1133, Address: 0x2122f8, Func Offset: 0x28
	// Line 1134, Address: 0x212304, Func Offset: 0x34
	// Line 1135, Address: 0x212314, Func Offset: 0x44
	// Line 1136, Address: 0x212338, Func Offset: 0x68
	// Line 1137, Address: 0x21235c, Func Offset: 0x8c
	// Line 1139, Address: 0x212374, Func Offset: 0xa4
	// Line 1140, Address: 0x212380, Func Offset: 0xb0
	// Line 1142, Address: 0x21238c, Func Offset: 0xbc
	// Line 1143, Address: 0x212390, Func Offset: 0xc0
	// Func End, Address: 0x2123b4, Func Offset: 0xe4
}

// 
// Start address: 0x2123c0
int sh2gfw_Draw_SemiTransBG()
{
	char buf[16];
	int i;
	int slotid;
	int comid;
	int tnum;
	// Line 1153, Address: 0x2123c0, Func Offset: 0
	// Line 1156, Address: 0x2123d0, Func Offset: 0x10
	// Line 1160, Address: 0x2123dc, Func Offset: 0x1c
	// Line 1163, Address: 0x2123e8, Func Offset: 0x28
	// Line 1164, Address: 0x2123f8, Func Offset: 0x38
	// Line 1169, Address: 0x212414, Func Offset: 0x54
	// Line 1175, Address: 0x21242c, Func Offset: 0x6c
	// Line 1179, Address: 0x212438, Func Offset: 0x78
	// Line 1182, Address: 0x212448, Func Offset: 0x88
	// Line 1186, Address: 0x212460, Func Offset: 0xa0
	// Line 1191, Address: 0x212490, Func Offset: 0xd0
	// Line 1192, Address: 0x2124ac, Func Offset: 0xec
	// Line 1198, Address: 0x2124c0, Func Offset: 0x100
	// Line 1200, Address: 0x2124d4, Func Offset: 0x114
	// Line 1204, Address: 0x2124dc, Func Offset: 0x11c
	// Line 1207, Address: 0x2124e8, Func Offset: 0x128
	// Line 1209, Address: 0x2124f0, Func Offset: 0x130
	// Line 1210, Address: 0x2124fc, Func Offset: 0x13c
	// Line 1213, Address: 0x212524, Func Offset: 0x164
	// Line 1214, Address: 0x21253c, Func Offset: 0x17c
	// Line 1217, Address: 0x212540, Func Offset: 0x180
	// Line 1222, Address: 0x212554, Func Offset: 0x194
	// Line 1224, Address: 0x212558, Func Offset: 0x198
	// Func End, Address: 0x212570, Func Offset: 0x1b0
}

