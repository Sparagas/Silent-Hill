typedef struct sh2gfw_TEX_HEAD;
typedef struct _anon0;
typedef struct shBattleInfo;
typedef struct sh2gfw_BLOCK_MAN;
typedef struct sh2gfw_AREA_HEAD;
typedef struct sh2gfw_BLOCK_HEAD;
typedef struct SubCharacter;
typedef struct sh2gfw_BLOCKGLOBAL_HEAD;
typedef struct sh2gfw_BLOCKLOCAL_HEAD;
typedef struct sh2gfw_GSREGS_HEAD;
typedef struct sh2gfw_GIFTAG_HEAD;
typedef struct _CL_VHIT_WALL;
typedef struct shAttackInfo;
typedef struct _VbSCREENINFO;
typedef struct _CL_HITPOLY_HEAD;
typedef struct sh2gfw_CLUTS_HEAD;
typedef struct sh2gfw_TexMAN;
typedef union Q_WORDDATA;
typedef struct _CL_VHIT_CHARA;
typedef union _anon1;
typedef struct sh2gfw_ALLTEXSYNC_MAN;
typedef struct sh2gfw_SPOTL_MATRIX;
typedef struct _CL_VHIT_RESULT;
typedef union _anon2;
typedef struct _anon3;
typedef struct sh2gfw_POINTL_MATRIX;
typedef struct shSkelton;
typedef struct _anon4;
typedef struct sh2gfw_Env_ctl;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct shBattleArea;

typedef void(*type_44)(SubCharacter*);
typedef void(*type_49)(SubCharacter*);

typedef unsigned short type_0[4];
typedef float type_1[4][3];
typedef float type_2[4][2];
typedef float type_3[4];
typedef sh2gfw_GSREGS_HEAD* type_4[4];
typedef sh2gfw_GIFTAG_HEAD* type_5[16];
typedef sh2gfw_GIFTAG_HEAD* type_6[16][4];
typedef unsigned short type_7[8];
typedef unsigned short type_8[8][16];
typedef unsigned short type_9[8][16][4];
typedef float type_10[4];
typedef sh2gfw_TEX_HEAD* type_11[4];
typedef sh2gfw_CLUTS_HEAD* type_12[4];
typedef unsigned char type_13[4];
typedef unsigned int type_14[4];
typedef unsigned char type_15[16];
typedef unsigned char type_16[16][4];
typedef unsigned short type_17[8];
typedef unsigned char type_18[16];
typedef float type_19[4];
typedef unsigned char type_20[16][16];
typedef unsigned char type_21[16][16][4];
typedef unsigned char type_22[16];
typedef unsigned char type_23[16];
typedef int type_24[4];
typedef short type_25[8];
typedef unsigned char type_26[16];
typedef char type_27[16];
typedef void* type_28[4];
typedef unsigned long type_29[2];
typedef Q_WORDDATA* type_30[4];
typedef unsigned int type_31[4];
typedef int type_32[8];
typedef int type_33[8];
typedef unsigned char type_34[16];
typedef float type_35[4][4];
typedef unsigned char type_36[16];
typedef shAttackInfo type_37[66];
typedef float type_38[4];
typedef float type_39[4][4];
typedef Q_WORDDATA type_40[48];
typedef float type_41[4];
typedef sh2gfw_TexMAN type_42[96];
typedef sh2gfw_GIFTAG_HEAD* type_43[16];
typedef unsigned int type_45[3];
typedef unsigned char type_46[8];
typedef unsigned char type_47[8][8];
typedef unsigned int type_48[3];
typedef Q_WORDDATA type_50[3];
typedef unsigned char type_51[4];
typedef float type_52[4][3];
typedef int type_53[4][3];
typedef sh2gfw_BLOCK_MAN type_54[6];
typedef int type_55[4];
typedef float type_56[4][4];
typedef unsigned short type_57[3];
typedef unsigned short type_58[3];

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
	Q_WORDDATA BaseAmbient;
	Q_WORDDATA ALPHA_clear;
	float LightRealPos[4];
	float LightRealDir[4];
	unsigned int light_type_buf;
	unsigned int light_type_now;
	unsigned int pad1;
	unsigned int pad2;
};

struct shBattleInfo
{
	float pos[4];
	float vec[4];
	unsigned short id;
	unsigned short kind;
	float dead_timer;
	float damage;
	float shock;
	int atk_result;
	float prev_atk_pos[4];
	SubCharacter* target;
	float hp;
	float hp_max;
	float hp_rate;
	unsigned int status;
	shBattleArea look;
	shBattleArea feel;
	unsigned char se;
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
	_anon0 blk_LightData;
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

struct SubCharacter
{
	int index;
	unsigned int status;
	unsigned int sub_status;
	unsigned int sub_st;
	short kind;
	short id;
	unsigned int step;
	unsigned int model_type;
	_anon3 pos;
	_anon3 rot;
	_anon3 pos_spd;
	_anon3 rot_spd;
	_anon4 mat;
	shSkelton* sk_top;
	float eye_y;
	float center_y;
	float spd;
	float spd_org;
	float spd_y;
	float spd_roty;
	float grnd_normal[4];
	float grnd_height;
	_anon3 b_pos;
	_anon3 b_rot;
	int en_first_status;
	int colis_fall_timer;
	shBattleInfo battle;
	_CL_VHIT_RESULT eye;
	void(*function)(SubCharacter*);
	void(*effecter_function)(SubCharacter*);
	SubCharacter* pre;
	SubCharacter* next;
	unsigned char work[4];
	void* enemy_p;
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

struct _CL_VHIT_WALL
{
	float cp[4];
	float nl[4];
	_CL_HITPOLY_HEAD* pd;
};

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon1 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
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

struct _CL_HITPOLY_HEAD
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
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

struct _CL_VHIT_CHARA
{
	SubCharacter* sc;
	float cp[4];
};

union _anon1
{
	shBattleFight fight;
	shBattleShot shot;
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

struct sh2gfw_SPOTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA dirvec;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
};

struct _CL_VHIT_RESULT
{
	int kind;
	_anon2 hobj;
};

union _anon2
{
	_CL_VHIT_WALL wall;
	_CL_VHIT_CHARA chara;
};

struct _anon3
{
	float x;
	float y;
	float z;
	float w;
};

struct sh2gfw_POINTL_MATRIX
{
	Q_WORDDATA color;
	Q_WORDDATA position;
	Q_WORDDATA decayparm;
};

struct shSkelton
{
	shSkelton* next;
	shSkelton* parent;
	_anon4 src_m;
	_anon3 src_t;
	_anon4 des_m;
	_anon3 des_t;
	_anon3 axis;
	float theta;
	float xx;
	float yy;
	float zz;
	float xy;
	float yz;
	float zx;
	unsigned short c_count;
	unsigned short c_speed;
	char change;
	char reserved;
	char is_key;
	char pad;
	void* untouchable;
};

struct _anon4
{
	float d[4][4];
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

struct shBattleArea
{
	float center;
	float radius;
};

shAttackInfo sh2_attack_list[66];
sh2gfw_ALLTEXSYNC_MAN AllTexSync_Man;
sh2gfw_BLOCK_MAN b_man[6];
void* pGlobalMan;
float inclip;
sh2gfw_Env_ctl Env_ctl;
_VbSCREENINFO VbScreenInfo;
unsigned int VU0_MIC_CAL_UTIL_DMAHEAD;
float y_dirvec[4];
float clip_volume[4];
int ChrClip_FLG;

int sh2gfw_viewclip_block(Q_WORDDATA** qwd_tag);
void sh2gfw_ClipDraw_BG(sh2gfw_BLOCK_MAN* pB_man, float bbox[4], float view_triangle[4], Q_WORDDATA** qwd_data);
void sh2gfw_get_blockORIGIN(float bbox[4], float* origin);
int sh2gfw_Get_CamTilePos(float* origin);
void sh2gfw_get_ViewRecTangle(float* origin, float view_triangle[4], int* view_rect, int view_tile);
void sh2gfw_get_viewTriangle(float view_triangle[4]);
void sh2gfw_init_vctagbuf(void* vc);
void sh2gfw_make_tagclipdata(float* origin, float view_triangle[4], int* view_rect, sh2gfw_BLOCK_MAN* pBM);
int sh2_ClipHitCheckSquare(float mat[4], float* box, float* view_triangle);
void kari_set_vu0cal();
void sh2gfw_setVCTAG_DrawSys(sh2gfw_BLOCK_MAN* pB_man);
void sh2gfw_set_objclip_matrix();
int sh2gfw_Set_DispOnOffObj(int mapid, int dispflg);
void sh2gfw_Init_DispOnOffObj();
int sh2gfw_FastSet_DispOnOffObj(int mapid, int dispflg);
int sh2gfw_Get_ChrClip_FLG();
void sh2gfw_Check_ChrClip_FLG(int mp);
int sh2gfw_Check_ClipOKChar(void* sp);

// 
// Start address: 0x182860
int sh2gfw_viewclip_block(Q_WORDDATA** qwd_tag)
{
	int slot;
	float bbox[4][4];
	float view_triangle[4][3];
	Q_WORDDATA* qwd;
	int num;
	int id;
	// Line 116, Address: 0x182860, Func Offset: 0
	// Line 124, Address: 0x182878, Func Offset: 0x18
	// Line 126, Address: 0x18288c, Func Offset: 0x2c
	// Line 128, Address: 0x182894, Func Offset: 0x34
	// Line 131, Address: 0x18289c, Func Offset: 0x3c
	// Line 132, Address: 0x1828a8, Func Offset: 0x48
	// Line 134, Address: 0x1828b0, Func Offset: 0x50
	// Line 136, Address: 0x1828b8, Func Offset: 0x58
	// Line 137, Address: 0x1828c4, Func Offset: 0x64
	// Line 140, Address: 0x1828e4, Func Offset: 0x84
	// Line 142, Address: 0x182904, Func Offset: 0xa4
	// Line 144, Address: 0x18291c, Func Offset: 0xbc
	// Line 147, Address: 0x182940, Func Offset: 0xe0
	// Line 149, Address: 0x182954, Func Offset: 0xf4
	// Line 152, Address: 0x18295c, Func Offset: 0xfc
	// Line 153, Address: 0x182964, Func Offset: 0x104
	// Line 154, Address: 0x182968, Func Offset: 0x108
	// Func End, Address: 0x182984, Func Offset: 0x124
}

// 
// Start address: 0x182990
void sh2gfw_ClipDraw_BG(sh2gfw_BLOCK_MAN* pB_man, float bbox[4], float view_triangle[4], Q_WORDDATA** qwd_data)
{
	int* mp;
	int rect[4];
	float origin[4];
	int flg;
	int j;
	Q_WORDDATA* qbuf;
	Q_WORDDATA* qwd;
	// Line 184, Address: 0x182990, Func Offset: 0
	// Line 187, Address: 0x1829c4, Func Offset: 0x34
	// Line 192, Address: 0x1829c8, Func Offset: 0x38
	// Line 193, Address: 0x1829d0, Func Offset: 0x40
	// Line 196, Address: 0x1829d4, Func Offset: 0x44
	// Line 206, Address: 0x1829e0, Func Offset: 0x50
	// Line 207, Address: 0x1829f0, Func Offset: 0x60
	// Line 209, Address: 0x182a08, Func Offset: 0x78
	// Line 210, Address: 0x182a14, Func Offset: 0x84
	// Line 213, Address: 0x182a2c, Func Offset: 0x9c
	// Line 218, Address: 0x182a40, Func Offset: 0xb0
	// Line 224, Address: 0x182a44, Func Offset: 0xb4
	// Line 227, Address: 0x182a58, Func Offset: 0xc8
	// Line 228, Address: 0x182a70, Func Offset: 0xe0
	// Line 229, Address: 0x182a88, Func Offset: 0xf8
	// Line 232, Address: 0x182a90, Func Offset: 0x100
	// Line 235, Address: 0x182aa4, Func Offset: 0x114
	// Line 236, Address: 0x182abc, Func Offset: 0x12c
	// Line 237, Address: 0x182ad0, Func Offset: 0x140
	// Line 238, Address: 0x182ae0, Func Offset: 0x150
	// Line 242, Address: 0x182af8, Func Offset: 0x168
	// Line 244, Address: 0x182b08, Func Offset: 0x178
	// Line 246, Address: 0x182b18, Func Offset: 0x188
	// Line 248, Address: 0x182b28, Func Offset: 0x198
	// Line 250, Address: 0x182b40, Func Offset: 0x1b0
	// Line 252, Address: 0x182b58, Func Offset: 0x1c8
	// Line 253, Address: 0x182b64, Func Offset: 0x1d4
	// Line 256, Address: 0x182b6c, Func Offset: 0x1dc
	// Line 259, Address: 0x182b78, Func Offset: 0x1e8
	// Line 261, Address: 0x182b88, Func Offset: 0x1f8
	// Line 262, Address: 0x182b90, Func Offset: 0x200
	// Line 263, Address: 0x182bac, Func Offset: 0x21c
	// Line 268, Address: 0x182bb4, Func Offset: 0x224
	// Line 273, Address: 0x182bc0, Func Offset: 0x230
	// Line 278, Address: 0x182bd0, Func Offset: 0x240
	// Line 279, Address: 0x182be0, Func Offset: 0x250
	// Line 280, Address: 0x182bec, Func Offset: 0x25c
	// Line 282, Address: 0x182bf8, Func Offset: 0x268
	// Line 297, Address: 0x182c04, Func Offset: 0x274
	// Line 298, Address: 0x182c14, Func Offset: 0x284
	// Line 299, Address: 0x182c18, Func Offset: 0x288
	// Line 303, Address: 0x182c34, Func Offset: 0x2a4
	// Line 304, Address: 0x182c48, Func Offset: 0x2b8
	// Line 307, Address: 0x182c58, Func Offset: 0x2c8
	// Line 308, Address: 0x182c5c, Func Offset: 0x2cc
	// Line 309, Address: 0x182c60, Func Offset: 0x2d0
	// Line 310, Address: 0x182c6c, Func Offset: 0x2dc
	// Line 311, Address: 0x182c78, Func Offset: 0x2e8
	// Line 314, Address: 0x182c8c, Func Offset: 0x2fc
	// Line 317, Address: 0x182c98, Func Offset: 0x308
	// Line 318, Address: 0x182ca0, Func Offset: 0x310
	// Line 322, Address: 0x182cc4, Func Offset: 0x334
	// Line 323, Address: 0x182cdc, Func Offset: 0x34c
	// Line 327, Address: 0x182cf0, Func Offset: 0x360
	// Line 330, Address: 0x182cf8, Func Offset: 0x368
	// Line 333, Address: 0x182d04, Func Offset: 0x374
	// Line 334, Address: 0x182d0c, Func Offset: 0x37c
	// Line 338, Address: 0x182d30, Func Offset: 0x3a0
	// Line 339, Address: 0x182d48, Func Offset: 0x3b8
	// Line 341, Address: 0x182d60, Func Offset: 0x3d0
	// Line 342, Address: 0x182d70, Func Offset: 0x3e0
	// Line 343, Address: 0x182d74, Func Offset: 0x3e4
	// Line 347, Address: 0x182d90, Func Offset: 0x400
	// Line 351, Address: 0x182da4, Func Offset: 0x414
	// Line 353, Address: 0x182dac, Func Offset: 0x41c
	// Func End, Address: 0x182dd8, Func Offset: 0x448
}

// 
// Start address: 0x182de0
void sh2gfw_get_blockORIGIN(float bbox[4], float* origin)
{
	int tmp[4];
	int iz;
	int ix;
	// Line 373, Address: 0x182de0, Func Offset: 0
	// Line 378, Address: 0x182dfc, Func Offset: 0x1c
	// Line 379, Address: 0x182e0c, Func Offset: 0x2c
	// Line 380, Address: 0x182e18, Func Offset: 0x38
	// Line 381, Address: 0x182e30, Func Offset: 0x50
	// Line 383, Address: 0x182e44, Func Offset: 0x64
	// Line 384, Address: 0x182e5c, Func Offset: 0x7c
	// Line 386, Address: 0x182e6c, Func Offset: 0x8c
	// Line 387, Address: 0x182e90, Func Offset: 0xb0
	// Line 391, Address: 0x182eac, Func Offset: 0xcc
	// Line 392, Address: 0x182eb8, Func Offset: 0xd8
	// Line 394, Address: 0x182ec4, Func Offset: 0xe4
	// Line 395, Address: 0x182ee4, Func Offset: 0x104
	// Line 396, Address: 0x182ee8, Func Offset: 0x108
	// Line 397, Address: 0x182efc, Func Offset: 0x11c
	// Line 399, Address: 0x182f04, Func Offset: 0x124
	// Func End, Address: 0x182f20, Func Offset: 0x140
}

// 
// Start address: 0x182f20
int sh2gfw_Get_CamTilePos(float* origin)
{
	float svt[4];
	int ssz;
	int ssx;
	// Line 406, Address: 0x182f20, Func Offset: 0
	// Line 409, Address: 0x182f30, Func Offset: 0x10
	// Line 410, Address: 0x182f3c, Func Offset: 0x1c
	// Line 412, Address: 0x182f50, Func Offset: 0x30
	// Line 413, Address: 0x182f7c, Func Offset: 0x5c
	// Line 414, Address: 0x182fa4, Func Offset: 0x84
	// Line 415, Address: 0x182fac, Func Offset: 0x8c
	// Func End, Address: 0x182fc0, Func Offset: 0xa0
}

// 
// Start address: 0x182fc0
void sh2gfw_get_ViewRecTangle(float* origin, float view_triangle[4], int* view_rect, int view_tile)
{
	int tmpi[4][3];
	float tmpf[4][3];
	int cz;
	int cx;
	int tp;
	int j;
	int i;
	// Line 429, Address: 0x182fc0, Func Offset: 0
	// Line 434, Address: 0x182ff8, Func Offset: 0x38
	// Line 435, Address: 0x183008, Func Offset: 0x48
	// Line 436, Address: 0x183024, Func Offset: 0x64
	// Line 437, Address: 0x183040, Func Offset: 0x80
	// Line 439, Address: 0x183058, Func Offset: 0x98
	// Line 440, Address: 0x183070, Func Offset: 0xb0
	// Line 441, Address: 0x183090, Func Offset: 0xd0
	// Line 443, Address: 0x1830a4, Func Offset: 0xe4
	// Line 444, Address: 0x1830b0, Func Offset: 0xf0
	// Line 445, Address: 0x1830bc, Func Offset: 0xfc
	// Line 447, Address: 0x1830e8, Func Offset: 0x128
	// Line 448, Address: 0x1830ec, Func Offset: 0x12c
	// Line 450, Address: 0x1830f0, Func Offset: 0x130
	// Line 451, Address: 0x183104, Func Offset: 0x144
	// Line 453, Address: 0x183114, Func Offset: 0x154
	// Line 454, Address: 0x183120, Func Offset: 0x160
	// Line 455, Address: 0x18312c, Func Offset: 0x16c
	// Line 457, Address: 0x183154, Func Offset: 0x194
	// Line 458, Address: 0x183158, Func Offset: 0x198
	// Line 459, Address: 0x18315c, Func Offset: 0x19c
	// Line 460, Address: 0x183160, Func Offset: 0x1a0
	// Line 461, Address: 0x183174, Func Offset: 0x1b4
	// Line 466, Address: 0x183184, Func Offset: 0x1c4
	// Line 467, Address: 0x18319c, Func Offset: 0x1dc
	// Line 469, Address: 0x1831b0, Func Offset: 0x1f0
	// Line 470, Address: 0x1831c4, Func Offset: 0x204
	// Line 472, Address: 0x1831d8, Func Offset: 0x218
	// Line 473, Address: 0x1831f8, Func Offset: 0x238
	// Line 475, Address: 0x183204, Func Offset: 0x244
	// Line 476, Address: 0x18321c, Func Offset: 0x25c
	// Line 478, Address: 0x183230, Func Offset: 0x270
	// Line 479, Address: 0x183250, Func Offset: 0x290
	// Line 484, Address: 0x18325c, Func Offset: 0x29c
	// Line 485, Address: 0x183264, Func Offset: 0x2a4
	// Line 486, Address: 0x18326c, Func Offset: 0x2ac
	// Line 487, Address: 0x183274, Func Offset: 0x2b4
	// Line 491, Address: 0x18327c, Func Offset: 0x2bc
	// Func End, Address: 0x1832ac, Func Offset: 0x2ec
}

// 
// Start address: 0x1832b0
void sh2gfw_get_viewTriangle(float view_triangle[4])
{
	int i;
	float work[4][4];
	// Line 498, Address: 0x1832b0, Func Offset: 0
	// Line 504, Address: 0x1832d0, Func Offset: 0x20
	// Line 505, Address: 0x1832dc, Func Offset: 0x2c
	// Line 507, Address: 0x1832f4, Func Offset: 0x44
	// Line 509, Address: 0x183324, Func Offset: 0x74
	// Line 510, Address: 0x183360, Func Offset: 0xb0
	// Line 511, Address: 0x183368, Func Offset: 0xb8
	// Line 515, Address: 0x183388, Func Offset: 0xd8
	// Line 517, Address: 0x183398, Func Offset: 0xe8
	// Line 518, Address: 0x1833ac, Func Offset: 0xfc
	// Line 520, Address: 0x1833cc, Func Offset: 0x11c
	// Line 521, Address: 0x1833ec, Func Offset: 0x13c
	// Line 522, Address: 0x1833f8, Func Offset: 0x148
	// Line 523, Address: 0x183418, Func Offset: 0x168
	// Line 525, Address: 0x183424, Func Offset: 0x174
	// Line 526, Address: 0x183438, Func Offset: 0x188
	// Line 527, Address: 0x18344c, Func Offset: 0x19c
	// Line 529, Address: 0x183464, Func Offset: 0x1b4
	// Line 530, Address: 0x18346c, Func Offset: 0x1bc
	// Line 531, Address: 0x18347c, Func Offset: 0x1cc
	// Func End, Address: 0x1834a0, Func Offset: 0x1f0
}

// 
// Start address: 0x1834a0
void sh2gfw_init_vctagbuf(void* vc)
{
	Q_WORDDATA cleardata;
	Q_WORDDATA* VcBuf;
	// Line 540, Address: 0x1834a0, Func Offset: 0
	// Line 543, Address: 0x1834a4, Func Offset: 0x4
	// Line 546, Address: 0x1834c4, Func Offset: 0x24
	// Line 547, Address: 0x1834cc, Func Offset: 0x2c
	// Line 548, Address: 0x1834d4, Func Offset: 0x34
	// Line 549, Address: 0x1834dc, Func Offset: 0x3c
	// Line 550, Address: 0x1834e4, Func Offset: 0x44
	// Func End, Address: 0x1834f0, Func Offset: 0x50
}

// 
// Start address: 0x1834f0
void sh2gfw_make_tagclipdata(float* origin, float view_triangle[4], int* view_rect, sh2gfw_BLOCK_MAN* pBM)
{
	float svt[4];
	int ssz;
	int ssx;
	int clip;
	int* mp;
	unsigned char* tagbuffer;
	float rect[4][4];
	int index;
	int iz;
	int ix;
	int enz;
	int stz;
	int enx;
	int stx;
	// Line 570, Address: 0x1834f0, Func Offset: 0
	// Line 576, Address: 0x18352c, Func Offset: 0x3c
	// Line 578, Address: 0x183534, Func Offset: 0x44
	// Line 579, Address: 0x183538, Func Offset: 0x48
	// Line 581, Address: 0x183540, Func Offset: 0x50
	// Line 582, Address: 0x183548, Func Offset: 0x58
	// Line 585, Address: 0x18354c, Func Offset: 0x5c
	// Line 586, Address: 0x18355c, Func Offset: 0x6c
	// Line 587, Address: 0x18356c, Func Offset: 0x7c
	// Line 588, Address: 0x183584, Func Offset: 0x94
	// Line 595, Address: 0x183590, Func Offset: 0xa0
	// Line 596, Address: 0x1835b4, Func Offset: 0xc4
	// Line 597, Address: 0x1835b8, Func Offset: 0xc8
	// Line 598, Address: 0x1835d0, Func Offset: 0xe0
	// Line 599, Address: 0x1835d4, Func Offset: 0xe4
	// Line 601, Address: 0x1835e8, Func Offset: 0xf8
	// Line 602, Address: 0x1835fc, Func Offset: 0x10c
	// Line 604, Address: 0x183620, Func Offset: 0x130
	// Line 605, Address: 0x183634, Func Offset: 0x144
	// Line 607, Address: 0x183650, Func Offset: 0x160
	// Line 608, Address: 0x183664, Func Offset: 0x174
	// Line 609, Address: 0x183680, Func Offset: 0x190
	// Line 613, Address: 0x183690, Func Offset: 0x1a0
	// Line 620, Address: 0x183698, Func Offset: 0x1a8
	// Line 621, Address: 0x1836a0, Func Offset: 0x1b0
	// Line 624, Address: 0x1836ac, Func Offset: 0x1bc
	// Line 626, Address: 0x1836c4, Func Offset: 0x1d4
	// Line 628, Address: 0x1836cc, Func Offset: 0x1dc
	// Line 630, Address: 0x1836d4, Func Offset: 0x1e4
	// Line 633, Address: 0x1836e0, Func Offset: 0x1f0
	// Line 634, Address: 0x1836f0, Func Offset: 0x200
	// Line 635, Address: 0x183700, Func Offset: 0x210
	// Line 636, Address: 0x18371c, Func Offset: 0x22c
	// Line 637, Address: 0x183728, Func Offset: 0x238
	// Line 639, Address: 0x18373c, Func Offset: 0x24c
	// Line 640, Address: 0x18374c, Func Offset: 0x25c
	// Line 641, Address: 0x183754, Func Offset: 0x264
	// Line 642, Address: 0x183778, Func Offset: 0x288
	// Line 644, Address: 0x183784, Func Offset: 0x294
	// Line 645, Address: 0x1837a4, Func Offset: 0x2b4
	// Line 646, Address: 0x1837a8, Func Offset: 0x2b8
	// Line 647, Address: 0x1837b4, Func Offset: 0x2c4
	// Line 648, Address: 0x1837b8, Func Offset: 0x2c8
	// Line 679, Address: 0x1837d0, Func Offset: 0x2e0
	// Line 680, Address: 0x1837dc, Func Offset: 0x2ec
	// Line 682, Address: 0x1837f0, Func Offset: 0x300
	// Line 683, Address: 0x18381c, Func Offset: 0x32c
	// Line 685, Address: 0x183844, Func Offset: 0x354
	// Line 688, Address: 0x183854, Func Offset: 0x364
	// Line 689, Address: 0x183860, Func Offset: 0x370
	// Line 691, Address: 0x183874, Func Offset: 0x384
	// Line 692, Address: 0x183880, Func Offset: 0x390
	// Line 694, Address: 0x183894, Func Offset: 0x3a4
	// Line 695, Address: 0x1838a8, Func Offset: 0x3b8
	// Line 696, Address: 0x1838c0, Func Offset: 0x3d0
	// Line 701, Address: 0x1838d8, Func Offset: 0x3e8
	// Func End, Address: 0x18390c, Func Offset: 0x41c
}

// 
// Start address: 0x183910
int sh2_ClipHitCheckSquare(float mat[4], float* box, float* view_triangle)
{
	int ret;
	// Line 727, Address: 0x183910, Func Offset: 0
	// Line 735, Address: 0x183918, Func Offset: 0x8
	// Line 736, Address: 0x18391c, Func Offset: 0xc
	// Line 737, Address: 0x183920, Func Offset: 0x10
	// Line 738, Address: 0x183924, Func Offset: 0x14
	// Line 740, Address: 0x183928, Func Offset: 0x18
	// Line 741, Address: 0x18392c, Func Offset: 0x1c
	// Line 742, Address: 0x183930, Func Offset: 0x20
	// Line 743, Address: 0x183934, Func Offset: 0x24
	// Line 745, Address: 0x183938, Func Offset: 0x28
	// Line 746, Address: 0x18393c, Func Offset: 0x2c
	// Line 747, Address: 0x183940, Func Offset: 0x30
	// Line 749, Address: 0x183944, Func Offset: 0x34
	// Line 750, Address: 0x183948, Func Offset: 0x38
	// Line 751, Address: 0x18394c, Func Offset: 0x3c
	// Line 752, Address: 0x183950, Func Offset: 0x40
	// Line 754, Address: 0x183954, Func Offset: 0x44
	// Line 755, Address: 0x183958, Func Offset: 0x48
	// Line 756, Address: 0x18395c, Func Offset: 0x4c
	// Line 757, Address: 0x183960, Func Offset: 0x50
	// Line 759, Address: 0x183964, Func Offset: 0x54
	// Line 760, Address: 0x183968, Func Offset: 0x58
	// Line 761, Address: 0x18396c, Func Offset: 0x5c
	// Line 762, Address: 0x183970, Func Offset: 0x60
	// Line 763, Address: 0x183974, Func Offset: 0x64
	// Line 764, Address: 0x183978, Func Offset: 0x68
	// Line 765, Address: 0x18397c, Func Offset: 0x6c
	// Line 766, Address: 0x183980, Func Offset: 0x70
	// Line 770, Address: 0x183988, Func Offset: 0x78
	// Line 771, Address: 0x18398c, Func Offset: 0x7c
	// Line 772, Address: 0x183990, Func Offset: 0x80
	// Line 773, Address: 0x183994, Func Offset: 0x84
	// Line 774, Address: 0x183998, Func Offset: 0x88
	// Line 775, Address: 0x18399c, Func Offset: 0x8c
	// Line 776, Address: 0x1839a0, Func Offset: 0x90
	// Line 777, Address: 0x1839a4, Func Offset: 0x94
	// Line 781, Address: 0x1839ac, Func Offset: 0x9c
	// Line 782, Address: 0x1839b0, Func Offset: 0xa0
	// Line 783, Address: 0x1839b4, Func Offset: 0xa4
	// Line 784, Address: 0x1839b8, Func Offset: 0xa8
	// Line 785, Address: 0x1839bc, Func Offset: 0xac
	// Line 786, Address: 0x1839c0, Func Offset: 0xb0
	// Line 787, Address: 0x1839c4, Func Offset: 0xb4
	// Line 788, Address: 0x1839c8, Func Offset: 0xb8
	// Line 792, Address: 0x1839d0, Func Offset: 0xc0
	// Line 793, Address: 0x1839d4, Func Offset: 0xc4
	// Line 794, Address: 0x1839d8, Func Offset: 0xc8
	// Line 795, Address: 0x1839dc, Func Offset: 0xcc
	// Line 799, Address: 0x1839e4, Func Offset: 0xd4
	// Line 801, Address: 0x1839ec, Func Offset: 0xdc
	// Line 803, Address: 0x1839f4, Func Offset: 0xe4
	// Line 805, Address: 0x1839fc, Func Offset: 0xec
	// Line 807, Address: 0x183a04, Func Offset: 0xf4
	// Line 809, Address: 0x183a0c, Func Offset: 0xfc
	// Line 812, Address: 0x183a14, Func Offset: 0x104
	// Line 813, Address: 0x183a18, Func Offset: 0x108
	// Line 814, Address: 0x183a1c, Func Offset: 0x10c
	// Line 815, Address: 0x183a20, Func Offset: 0x110
	// Line 817, Address: 0x183a28, Func Offset: 0x118
	// Line 819, Address: 0x183a30, Func Offset: 0x120
	// Line 821, Address: 0x183a38, Func Offset: 0x128
	// Line 823, Address: 0x183a40, Func Offset: 0x130
	// Line 825, Address: 0x183a48, Func Offset: 0x138
	// Line 828, Address: 0x183a50, Func Offset: 0x140
	// Line 829, Address: 0x183a54, Func Offset: 0x144
	// Line 830, Address: 0x183a58, Func Offset: 0x148
	// Line 831, Address: 0x183a5c, Func Offset: 0x14c
	// Line 833, Address: 0x183a64, Func Offset: 0x154
	// Line 835, Address: 0x183a6c, Func Offset: 0x15c
	// Line 837, Address: 0x183a74, Func Offset: 0x164
	// Line 839, Address: 0x183a7c, Func Offset: 0x16c
	// Line 841, Address: 0x183a84, Func Offset: 0x174
	// Line 843, Address: 0x183a8c, Func Offset: 0x17c
	// Line 844, Address: 0x183a90, Func Offset: 0x180
	// Line 845, Address: 0x183a94, Func Offset: 0x184
	// Line 846, Address: 0x183a98, Func Offset: 0x188
	// Line 848, Address: 0x183aa0, Func Offset: 0x190
	// Line 850, Address: 0x183aa8, Func Offset: 0x198
	// Line 852, Address: 0x183ab0, Func Offset: 0x1a0
	// Line 854, Address: 0x183ab8, Func Offset: 0x1a8
	// Line 856, Address: 0x183ac0, Func Offset: 0x1b0
	// Line 858, Address: 0x183ac8, Func Offset: 0x1b8
	// Line 859, Address: 0x183acc, Func Offset: 0x1bc
	// Line 863, Address: 0x183ad4, Func Offset: 0x1c4
	// Line 865, Address: 0x183ad8, Func Offset: 0x1c8
	// Line 875, Address: 0x183adc, Func Offset: 0x1cc
	// Func End, Address: 0x183aec, Func Offset: 0x1dc
}

// 
// Start address: 0x183af0
void kari_set_vu0cal()
{
	int i;
	// Line 885, Address: 0x183af0, Func Offset: 0
	// Line 887, Address: 0x183af4, Func Offset: 0x4
	// Line 889, Address: 0x183b18, Func Offset: 0x28
	// Line 890, Address: 0x183b28, Func Offset: 0x38
	// Line 891, Address: 0x183b30, Func Offset: 0x40
	// Line 893, Address: 0x183b3c, Func Offset: 0x4c
	// Line 895, Address: 0x183b60, Func Offset: 0x70
	// Func End, Address: 0x183b68, Func Offset: 0x78
}

// 
// Start address: 0x183b70
void sh2gfw_setVCTAG_DrawSys(sh2gfw_BLOCK_MAN* pB_man)
{
	int mapdiv;
	unsigned int ivumax;
	unsigned int igg;
	unsigned int l;
	unsigned int k;
	unsigned int j;
	unsigned int i;
	unsigned int igeomax;
	unsigned char* tagbuffer;
	Q_WORDDATA* qwd;
	// Line 917, Address: 0x183b70, Func Offset: 0
	// Line 926, Address: 0x183b78, Func Offset: 0x8
	// Line 928, Address: 0x183b7c, Func Offset: 0xc
	// Line 929, Address: 0x183b80, Func Offset: 0x10
	// Line 932, Address: 0x183b88, Func Offset: 0x18
	// Line 933, Address: 0x183b90, Func Offset: 0x20
	// Line 934, Address: 0x183b98, Func Offset: 0x28
	// Line 935, Address: 0x183ba4, Func Offset: 0x34
	// Line 936, Address: 0x183bb4, Func Offset: 0x44
	// Line 939, Address: 0x183bc0, Func Offset: 0x50
	// Line 941, Address: 0x183bd8, Func Offset: 0x68
	// Line 960, Address: 0x183bf8, Func Offset: 0x88
	// Line 962, Address: 0x183c10, Func Offset: 0xa0
	// Line 963, Address: 0x183c14, Func Offset: 0xa4
	// Line 971, Address: 0x183c1c, Func Offset: 0xac
	// Line 974, Address: 0x183c3c, Func Offset: 0xcc
	// Line 975, Address: 0x183c44, Func Offset: 0xd4
	// Line 978, Address: 0x183c4c, Func Offset: 0xdc
	// Line 979, Address: 0x183c54, Func Offset: 0xe4
	// Line 980, Address: 0x183c58, Func Offset: 0xe8
	// Line 981, Address: 0x183c5c, Func Offset: 0xec
	// Line 982, Address: 0x183c7c, Func Offset: 0x10c
	// Line 987, Address: 0x183c80, Func Offset: 0x110
	// Line 992, Address: 0x183c88, Func Offset: 0x118
	// Line 993, Address: 0x183c98, Func Offset: 0x128
	// Line 994, Address: 0x183cac, Func Offset: 0x13c
	// Line 1016, Address: 0x183cbc, Func Offset: 0x14c
	// Line 1018, Address: 0x183cd4, Func Offset: 0x164
	// Line 1020, Address: 0x183ce4, Func Offset: 0x174
	// Line 1023, Address: 0x183cf8, Func Offset: 0x188
	// Func End, Address: 0x183d00, Func Offset: 0x190
}

// 
// Start address: 0x183d00
void sh2gfw_set_objclip_matrix()
{
	float wvm[4][4];
	float tmp[4];
	float FarZ;
	float NearZ;
	float gsy;
	float gsx;
	// Line 1035, Address: 0x183d00, Func Offset: 0
	// Line 1042, Address: 0x183d14, Func Offset: 0x14
	// Line 1043, Address: 0x183d1c, Func Offset: 0x1c
	// Line 1059, Address: 0x183d24, Func Offset: 0x24
	// Line 1063, Address: 0x183d2c, Func Offset: 0x2c
	// Line 1064, Address: 0x183d3c, Func Offset: 0x3c
	// Line 1067, Address: 0x183d48, Func Offset: 0x48
	// Line 1068, Address: 0x183d58, Func Offset: 0x58
	// Line 1069, Address: 0x183d80, Func Offset: 0x80
	// Line 1070, Address: 0x183da4, Func Offset: 0xa4
	// Line 1071, Address: 0x183db8, Func Offset: 0xb8
	// Line 1073, Address: 0x183dc0, Func Offset: 0xc0
	// Line 1075, Address: 0x183dcc, Func Offset: 0xcc
	// Line 1076, Address: 0x183de0, Func Offset: 0xe0
	// Line 1085, Address: 0x183df0, Func Offset: 0xf0
	// Line 1086, Address: 0x183e10, Func Offset: 0x110
	// Line 1087, Address: 0x183e18, Func Offset: 0x118
	// Line 1088, Address: 0x183e2c, Func Offset: 0x12c
	// Line 1089, Address: 0x183e4c, Func Offset: 0x14c
	// Line 1090, Address: 0x183e58, Func Offset: 0x158
	// Line 1094, Address: 0x183e60, Func Offset: 0x160
	// Line 1103, Address: 0x183e7c, Func Offset: 0x17c
	// Func End, Address: 0x183e98, Func Offset: 0x198
}

// 
// Start address: 0x183ea0
int sh2gfw_Set_DispOnOffObj(int mapid, int dispflg)
{
	int slot;
	sh2gfw_BLOCK_MAN* pB_man;
	// Line 1120, Address: 0x183ea0, Func Offset: 0
	// Line 1122, Address: 0x183eac, Func Offset: 0xc
	// Line 1123, Address: 0x183ecc, Func Offset: 0x2c
	// Line 1124, Address: 0x183ed8, Func Offset: 0x38
	// Line 1126, Address: 0x183ee8, Func Offset: 0x48
	// Line 1127, Address: 0x183eec, Func Offset: 0x4c
	// Line 1129, Address: 0x183ef4, Func Offset: 0x54
	// Line 1131, Address: 0x183f04, Func Offset: 0x64
	// Line 1133, Address: 0x183f08, Func Offset: 0x68
	// Func End, Address: 0x183f10, Func Offset: 0x70
}

// 
// Start address: 0x183f10
void sh2gfw_Init_DispOnOffObj()
{
	sh2gfw_BLOCK_MAN* pB_man;
	char* ch;
	<unknown fundamental type (0xa510)>* ul;
	int bid;
	int slot;
	int i;
	// Line 1148, Address: 0x183f10, Func Offset: 0
	// Line 1152, Address: 0x183f3c, Func Offset: 0x2c
	// Line 1154, Address: 0x183f48, Func Offset: 0x38
	// Line 1155, Address: 0x183f68, Func Offset: 0x58
	// Line 1156, Address: 0x183f74, Func Offset: 0x64
	// Line 1158, Address: 0x183f7c, Func Offset: 0x6c
	// Line 1160, Address: 0x183f8c, Func Offset: 0x7c
	// Line 1161, Address: 0x183fa4, Func Offset: 0x94
	// Func End, Address: 0x183fac, Func Offset: 0x9c
}

// 
// Start address: 0x183fb0
int sh2gfw_FastSet_DispOnOffObj(int mapid, int dispflg)
{
	char* ch;
	sh2gfw_BLOCK_MAN* pB_man;
	int index;
	// Line 1168, Address: 0x183fb0, Func Offset: 0
	// Line 1171, Address: 0x183fb8, Func Offset: 0x8
	// Line 1173, Address: 0x183fc8, Func Offset: 0x18
	// Line 1175, Address: 0x183fd0, Func Offset: 0x20
	// Line 1176, Address: 0x183fe4, Func Offset: 0x34
	// Line 1178, Address: 0x183fec, Func Offset: 0x3c
	// Line 1180, Address: 0x183ff0, Func Offset: 0x40
	// Func End, Address: 0x183ff8, Func Offset: 0x48
}

// 
// Start address: 0x184000
int sh2gfw_Get_ChrClip_FLG()
{
	// Line 1191, Address: 0x184000, Func Offset: 0
	// Line 1192, Address: 0x184008, Func Offset: 0x8
	// Func End, Address: 0x184010, Func Offset: 0x10
}

// 
// Start address: 0x184010
void sh2gfw_Check_ChrClip_FLG(int mp)
{
	int bid;
	// Line 1199, Address: 0x184010, Func Offset: 0
	// Line 1201, Address: 0x184038, Func Offset: 0x28
	// Line 1202, Address: 0x184040, Func Offset: 0x30
	// Line 1204, Address: 0x184070, Func Offset: 0x60
	// Line 1205, Address: 0x184078, Func Offset: 0x68
	// Line 1207, Address: 0x1840a8, Func Offset: 0x98
	// Line 1208, Address: 0x1840b0, Func Offset: 0xa0
	// Line 1212, Address: 0x1840e0, Func Offset: 0xd0
	// Line 1214, Address: 0x1840ec, Func Offset: 0xdc
	// Func End, Address: 0x1840f4, Func Offset: 0xe4
}

// 
// Start address: 0x184100
int sh2gfw_Check_ClipOKChar(void* sp)
{
	int* mp;
	SubCharacter* scp;
	// Line 1226, Address: 0x184100, Func Offset: 0
	// Line 1229, Address: 0x184108, Func Offset: 0x8
	// Line 1241, Address: 0x18418c, Func Offset: 0x8c
	// Line 1246, Address: 0x184198, Func Offset: 0x98
	// Line 1247, Address: 0x1841a0, Func Offset: 0xa0
	// Line 1248, Address: 0x1841cc, Func Offset: 0xcc
	// Line 1250, Address: 0x1841d8, Func Offset: 0xd8
	// Line 1253, Address: 0x1841dc, Func Offset: 0xdc
	// Func End, Address: 0x1841ec, Func Offset: 0xec
}

