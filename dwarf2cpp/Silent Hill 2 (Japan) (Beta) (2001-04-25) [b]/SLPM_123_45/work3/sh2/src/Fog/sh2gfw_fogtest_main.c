typedef struct sh2gfw_TEX_HEAD;
typedef struct sh2gfw_CLUTS_HEAD;
typedef struct shAttackInfo;
typedef struct _anon0;
typedef union _anon1;
typedef struct sh2gfw_Effect_Man;
typedef struct sh2gfw_TexMAN;
typedef struct sh2gfw_ALLTEXSYNC_MAN;
typedef union Q_WORDDATA;
typedef struct _VbWVSMATRIX;
typedef struct _VbSCREENINFO;
typedef struct shBattleFight;
typedef struct shBattleShot;


typedef float type_0[4];
typedef float type_1[4];
typedef float type_2[4][4];
typedef unsigned char type_3[10];
typedef unsigned char type_4[13];
typedef unsigned char type_5[34];
typedef float type_6[4];
typedef float type_7[4][4];
typedef unsigned char type_8[16];
typedef unsigned char type_9[16];
typedef unsigned int type_10[4];
typedef unsigned short type_11[8];
typedef float type_12[4];
typedef unsigned char type_13[16];
typedef int type_14[4];
typedef short type_15[8];
typedef unsigned char type_16[10];
typedef char type_17[16];
typedef unsigned long type_18[2];
typedef Q_WORDDATA type_19[48];
typedef Q_WORDDATA type_20[96];
typedef sh2gfw_TexMAN* type_21[96];
typedef sh2gfw_TexMAN type_22[96];
typedef shAttackInfo type_23[46];

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

struct _anon0
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

union _anon1
{
	shBattleFight fight;
	shBattleShot shot;
};

struct sh2gfw_Effect_Man
{
	unsigned short effectid;
	unsigned short vifmark;
	unsigned short valid_id;
	unsigned short pads;
	unsigned int thr_cid;
	unsigned int thr_sid;
	<unknown fundamental type (0xa510)> Tex0Data;
	<unknown fundamental type (0xa510)> Alpha;
	void* pTexMAN;
	void* pTexHead;
	void* pTop;
	void* pPad;
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

struct _VbWVSMATRIX
{
	float wvm[4][4];
	float vsm[4][4];
	float wsm[4][4];
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

shAttackInfo sh2_attack_list[46];
unsigned char human_skelton[13];
unsigned char enemy_skelton[10];
unsigned char weapon_skelton[10];
unsigned char obj_anime_skelton[34];
_VbSCREENINFO VbScreenInfo;
_VbWVSMATRIX VbWvsMatrix;
_anon0 cam0;
sh2gfw_Effect_Man FogTex_Man;
sh2gfw_ALLTEXSYNC_MAN AllTexSync_Man;
int fog_tex_head;

void sh2gfw_fogtest_calcmain();
void sh2gfw_init_fogTexture();
void sh2gfw_send_fogtex();

// 
// Start address: 0x172490
void sh2gfw_fogtest_calcmain()
{
	float m0[4][4];
	float v1[4];
	float v0[4];
	float ppos[4];
	// Line 47, Address: 0x172490, Func Offset: 0
	// Line 53, Address: 0x172498, Func Offset: 0x8
	// Line 59, Address: 0x1724ac, Func Offset: 0x1c
	// Line 60, Address: 0x1724b8, Func Offset: 0x28
	// Line 62, Address: 0x1724c4, Func Offset: 0x34
	// Line 64, Address: 0x1724d0, Func Offset: 0x40
	// Line 65, Address: 0x1724e4, Func Offset: 0x54
	// Line 66, Address: 0x1724f0, Func Offset: 0x60
	// Line 67, Address: 0x172504, Func Offset: 0x74
	// Line 69, Address: 0x172510, Func Offset: 0x80
	// Line 73, Address: 0x172520, Func Offset: 0x90
	// Line 74, Address: 0x172530, Func Offset: 0xa0
	// Line 75, Address: 0x172540, Func Offset: 0xb0
	// Line 76, Address: 0x17255c, Func Offset: 0xcc
	// Line 77, Address: 0x172574, Func Offset: 0xe4
	// Line 78, Address: 0x172588, Func Offset: 0xf8
	// Line 79, Address: 0x1725a0, Func Offset: 0x110
	// Line 80, Address: 0x1725b8, Func Offset: 0x128
	// Line 81, Address: 0x1725c0, Func Offset: 0x130
	// Line 82, Address: 0x1725d0, Func Offset: 0x140
	// Line 88, Address: 0x1725e0, Func Offset: 0x150
	// Line 90, Address: 0x1725e8, Func Offset: 0x158
	// Line 92, Address: 0x1725f0, Func Offset: 0x160
	// Func End, Address: 0x172600, Func Offset: 0x170
}

// 
// Start address: 0x172600
void sh2gfw_init_fogTexture()
{
	sh2gfw_CLUTS_HEAD* sCH;
	sh2gfw_TEX_HEAD* sTH;
	// Line 114, Address: 0x172600, Func Offset: 0
	// Line 119, Address: 0x172610, Func Offset: 0x10
	// Line 120, Address: 0x172618, Func Offset: 0x18
	// Line 121, Address: 0x172620, Func Offset: 0x20
	// Line 122, Address: 0x17262c, Func Offset: 0x2c
	// Line 123, Address: 0x172634, Func Offset: 0x34
	// Line 124, Address: 0x17263c, Func Offset: 0x3c
	// Line 125, Address: 0x172644, Func Offset: 0x44
	// Line 126, Address: 0x172648, Func Offset: 0x48
	// Line 127, Address: 0x17264c, Func Offset: 0x4c
	// Line 128, Address: 0x172654, Func Offset: 0x54
	// Line 129, Address: 0x17265c, Func Offset: 0x5c
	// Line 130, Address: 0x172664, Func Offset: 0x64
	// Line 133, Address: 0x17266c, Func Offset: 0x6c
	// Line 135, Address: 0x172684, Func Offset: 0x84
	// Line 137, Address: 0x17268c, Func Offset: 0x8c
	// Line 142, Address: 0x1726b8, Func Offset: 0xb8
	// Line 143, Address: 0x1726c4, Func Offset: 0xc4
	// Func End, Address: 0x1726dc, Func Offset: 0xdc
}

// 
// Start address: 0x1726e0
void sh2gfw_send_fogtex()
{
	unsigned long* fog_Now_pTex0;
	// Line 151, Address: 0x1726e0, Func Offset: 0
	// Line 155, Address: 0x1726ec, Func Offset: 0xc
	// Line 158, Address: 0x1726f8, Func Offset: 0x18
	// Line 170, Address: 0x172734, Func Offset: 0x54
	// Line 180, Address: 0x172754, Func Offset: 0x74
	// Line 189, Address: 0x172774, Func Offset: 0x94
	// Func End, Address: 0x172788, Func Offset: 0xa8
}

