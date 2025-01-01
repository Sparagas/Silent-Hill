typedef struct EnEFCT_TASK;
typedef struct _shTskTASK;
typedef struct _VbWVSMATRIX;
typedef struct _VbSCREENINFO;
typedef struct sh2gfw_TEX_HEAD;
typedef struct sh2gfw_Effect_Man;
typedef struct SPACK_OT_DATA;
typedef struct sh2gfw_TexMAN;
typedef struct sh2gfw_ALLTEXSYNC_MAN;
typedef struct sh2gfw_CLUTS_HEAD;
typedef struct shBattleFight;
typedef struct EnEFCT_PFOG_DATA;
typedef struct SPACK_ENV_DATA;
typedef struct shBattleShot;
typedef struct SPACK_STATIC_DATA;
typedef union Q_WORDDATA;
typedef struct SPACK_DATA;
typedef struct _shTskEXECUTE;
typedef struct shAttackInfo;
typedef union _anon0;

typedef void(*type_19)(void*);
typedef void(*type_28)(EnEFCT_TASK*);

typedef unsigned char type_0[10];
typedef _shTskTASK* type_1[8];
typedef unsigned char type_2[13];
typedef float type_3[16];
typedef unsigned char type_4[34];
typedef int type_5[2];
typedef unsigned char type_6[16];
typedef unsigned char type_7[16];
typedef unsigned char type_8[10];
typedef shAttackInfo type_9[46];
typedef unsigned int type_10[4];
typedef unsigned short type_11[8];
typedef Q_WORDDATA type_12[48];
typedef float type_13[4];
typedef Q_WORDDATA type_14[96];
typedef unsigned char type_15[16];
typedef float type_16[4];
typedef sh2gfw_TexMAN* type_17[96];
typedef int type_18[4];
typedef sh2gfw_TexMAN type_20[96];
typedef short type_21[8];
typedef float type_22[4];
typedef float type_23[4][4];
typedef char type_24[16];
typedef unsigned long type_25[2];
typedef int type_26[0];
typedef unsigned char type_27[492];
typedef <unknown fundamental type (0xa510)> type_29[6];

struct EnEFCT_TASK
{
	_shTskEXECUTE exe;
	int step;
	int count;
	EnEFCT_PFOG_DATA pfog;
};

struct _shTskTASK
{
	_shTskEXECUTE exe;
	unsigned char freemem[492];
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

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct EnEFCT_PFOG_DATA
{
	float pos[4];
	float vec[4];
	int alpha;
	float scattar;
	float size;
	float s;
	float t;
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

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct SPACK_STATIC_DATA
{
	unsigned short GifNLOOP;
	unsigned short DmaQwc;
	unsigned int PRE_PRIM_FLG_NREG;
	unsigned long REGS;
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

struct _shTskEXECUTE
{
	void(*adrs)(void*);
	void* next;
	void* prev;
	int mode;
	int atr;
};

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon0 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
};

union _anon0
{
	shBattleFight fight;
	shBattleShot shot;
};

shAttackInfo sh2_attack_list[46];
unsigned char human_skelton[13];
unsigned char enemy_skelton[10];
unsigned char weapon_skelton[10];
unsigned char obj_anime_skelton[34];
int en_efct_kind_list[2];
<unknown fundamental type (0xa510)> EnEfctPoisonEnvData[6];
SPACK_DATA spack;
sh2gfw_Effect_Man EnEfctPoisonTexMan;
sh2gfw_ALLTEXSYNC_MAN AllTexSync_Man;
int poison_texhead[0];
_shTskTASK* shTskTaskListTop[8];
int EnEfctFlagSendPoisonTex;
void(*enEfctMovePoisonFog)(EnEFCT_TASK*);
float sintable[16];
_VbSCREENINFO VbScreenInfo;
_VbWVSMATRIX VbWvsMatrix;

void enEfctInit();
void enEfctTexInit();
void enEfctDraw();
void enEfctSetPoisonFog(float* pos, float* vec);
void enEfctMovePoisonFog(EnEFCT_TASK* pt);
void enEfctDrawPoisonFog(EnEFCT_TASK* pt);
void enEfctSendPoisonTex();

// 
// Start address: 0x159270
void enEfctInit()
{
	// Line 38, Address: 0x159270, Func Offset: 0
	// Line 39, Address: 0x159278, Func Offset: 0x8
	// Line 40, Address: 0x159290, Func Offset: 0x20
	// Line 41, Address: 0x1592a8, Func Offset: 0x38
	// Line 42, Address: 0x1592b8, Func Offset: 0x48
	// Line 43, Address: 0x1592cc, Func Offset: 0x5c
	// Line 44, Address: 0x159300, Func Offset: 0x90
	// Line 45, Address: 0x159334, Func Offset: 0xc4
	// Line 46, Address: 0x15936c, Func Offset: 0xfc
	// Line 47, Address: 0x1593ac, Func Offset: 0x13c
	// Line 48, Address: 0x1593f4, Func Offset: 0x184
	// Line 49, Address: 0x1593fc, Func Offset: 0x18c
	// Line 50, Address: 0x159404, Func Offset: 0x194
	// Line 51, Address: 0x159418, Func Offset: 0x1a8
	// Func End, Address: 0x159428, Func Offset: 0x1b8
}

// 
// Start address: 0x159430
void enEfctTexInit()
{
	sh2gfw_CLUTS_HEAD* pCH;
	sh2gfw_TEX_HEAD* pTH;
	// Line 55, Address: 0x159430, Func Offset: 0
	// Line 60, Address: 0x159440, Func Offset: 0x10
	// Line 61, Address: 0x159448, Func Offset: 0x18
	// Line 62, Address: 0x159450, Func Offset: 0x20
	// Line 63, Address: 0x159464, Func Offset: 0x34
	// Line 64, Address: 0x15946c, Func Offset: 0x3c
	// Line 66, Address: 0x159498, Func Offset: 0x68
	// Line 67, Address: 0x1594a4, Func Offset: 0x74
	// Func End, Address: 0x1594bc, Func Offset: 0x8c
}

// 
// Start address: 0x1594c0
void enEfctDraw()
{
	_shTskTASK* pt;
	int n;
	int kind;
	// Line 87, Address: 0x1594c0, Func Offset: 0
	// Line 90, Address: 0x1594d4, Func Offset: 0x14
	// Line 91, Address: 0x1594d8, Func Offset: 0x18
	// Line 92, Address: 0x1594e0, Func Offset: 0x20
	// Line 93, Address: 0x1594e8, Func Offset: 0x28
	// Line 94, Address: 0x159508, Func Offset: 0x48
	// Line 95, Address: 0x159510, Func Offset: 0x50
	// Line 97, Address: 0x159524, Func Offset: 0x64
	// Line 98, Address: 0x159530, Func Offset: 0x70
	// Line 100, Address: 0x15953c, Func Offset: 0x7c
	// Line 101, Address: 0x159540, Func Offset: 0x80
	// Line 102, Address: 0x159558, Func Offset: 0x98
	// Line 103, Address: 0x159560, Func Offset: 0xa0
	// Line 104, Address: 0x159588, Func Offset: 0xc8
	// Line 106, Address: 0x159598, Func Offset: 0xd8
	// Line 107, Address: 0x1595b8, Func Offset: 0xf8
	// Line 108, Address: 0x1595ec, Func Offset: 0x12c
	// Line 110, Address: 0x1595f4, Func Offset: 0x134
	// Func End, Address: 0x159610, Func Offset: 0x150
}

// 
// Start address: 0x159610
void enEfctSetPoisonFog(float* pos, float* vec)
{
	EnEFCT_TASK* pt;
	// Line 116, Address: 0x159610, Func Offset: 0
	// Line 118, Address: 0x15962c, Func Offset: 0x1c
	// Line 119, Address: 0x159644, Func Offset: 0x34
	// Line 120, Address: 0x15964c, Func Offset: 0x3c
	// Line 121, Address: 0x159654, Func Offset: 0x44
	// Line 122, Address: 0x159664, Func Offset: 0x54
	// Line 123, Address: 0x159668, Func Offset: 0x58
	// Line 124, Address: 0x15966c, Func Offset: 0x5c
	// Line 125, Address: 0x159670, Func Offset: 0x60
	// Line 126, Address: 0x15967c, Func Offset: 0x6c
	// Line 127, Address: 0x1596a0, Func Offset: 0x90
	// Line 128, Address: 0x1596c4, Func Offset: 0xb4
	// Line 129, Address: 0x1596e8, Func Offset: 0xd8
	// Line 130, Address: 0x15970c, Func Offset: 0xfc
	// Line 131, Address: 0x159734, Func Offset: 0x124
	// Line 132, Address: 0x159740, Func Offset: 0x130
	// Line 133, Address: 0x15974c, Func Offset: 0x13c
	// Func End, Address: 0x159768, Func Offset: 0x158
}

// 
// Start address: 0x159770
void enEfctMovePoisonFog(EnEFCT_TASK* pt)
{
	float d;
	float vec[4];
	// Line 141, Address: 0x159770, Func Offset: 0
	// Line 144, Address: 0x159784, Func Offset: 0x14
	// Line 146, Address: 0x1597b0, Func Offset: 0x40
	// Line 147, Address: 0x1597d0, Func Offset: 0x60
	// Line 148, Address: 0x159810, Func Offset: 0xa0
	// Line 149, Address: 0x15982c, Func Offset: 0xbc
	// Line 150, Address: 0x159848, Func Offset: 0xd8
	// Line 151, Address: 0x15985c, Func Offset: 0xec
	// Line 152, Address: 0x15987c, Func Offset: 0x10c
	// Line 154, Address: 0x159888, Func Offset: 0x118
	// Line 156, Address: 0x159890, Func Offset: 0x120
	// Line 157, Address: 0x1598b4, Func Offset: 0x144
	// Line 158, Address: 0x1598f0, Func Offset: 0x180
	// Line 159, Address: 0x159908, Func Offset: 0x198
	// Line 160, Address: 0x159924, Func Offset: 0x1b4
	// Line 161, Address: 0x15992c, Func Offset: 0x1bc
	// Line 162, Address: 0x15994c, Func Offset: 0x1dc
	// Line 163, Address: 0x15996c, Func Offset: 0x1fc
	// Line 165, Address: 0x159978, Func Offset: 0x208
	// Line 167, Address: 0x159980, Func Offset: 0x210
	// Line 168, Address: 0x1599a4, Func Offset: 0x234
	// Line 169, Address: 0x1599e4, Func Offset: 0x274
	// Line 170, Address: 0x1599fc, Func Offset: 0x28c
	// Line 171, Address: 0x159a18, Func Offset: 0x2a8
	// Line 172, Address: 0x159a40, Func Offset: 0x2d0
	// Line 173, Address: 0x159a64, Func Offset: 0x2f4
	// Line 175, Address: 0x159a84, Func Offset: 0x314
	// Line 179, Address: 0x159a90, Func Offset: 0x320
	// Func End, Address: 0x159aa8, Func Offset: 0x338
}

// 
// Start address: 0x159ab0
void enEfctDrawPoisonFog(EnEFCT_TASK* pt)
{
	int i;
	unsigned char c;
	float dt;
	float ds;
	float dy;
	float dx;
	float s;
	float q;
	float vec[4];
	float v0[4];
	// Line 190, Address: 0x159ab0, Func Offset: 0
	// Line 196, Address: 0x159ad4, Func Offset: 0x24
	// Line 197, Address: 0x159b20, Func Offset: 0x70
	// Line 199, Address: 0x159b48, Func Offset: 0x98
	// Line 200, Address: 0x159b5c, Func Offset: 0xac
	// Line 201, Address: 0x159b64, Func Offset: 0xb4
	// Line 202, Address: 0x159b6c, Func Offset: 0xbc
	// Line 207, Address: 0x159c40, Func Offset: 0x190
	// Line 210, Address: 0x159c48, Func Offset: 0x198
	// Line 212, Address: 0x159c50, Func Offset: 0x1a0
	// Line 216, Address: 0x159c88, Func Offset: 0x1d8
	// Line 218, Address: 0x159cf8, Func Offset: 0x248
	// Line 219, Address: 0x159d44, Func Offset: 0x294
	// Line 220, Address: 0x159d98, Func Offset: 0x2e8
	// Line 221, Address: 0x159da8, Func Offset: 0x2f8
	// Line 222, Address: 0x159e04, Func Offset: 0x354
	// Line 223, Address: 0x159e10, Func Offset: 0x360
	// Line 224, Address: 0x159e3c, Func Offset: 0x38c
	// Line 225, Address: 0x159e64, Func Offset: 0x3b4
	// Line 227, Address: 0x159ef4, Func Offset: 0x444
	// Line 228, Address: 0x159f48, Func Offset: 0x498
	// Line 229, Address: 0x159f5c, Func Offset: 0x4ac
	// Line 230, Address: 0x159f64, Func Offset: 0x4b4
	// Func End, Address: 0x159f8c, Func Offset: 0x4dc
}

// 
// Start address: 0x159f90
void enEfctSendPoisonTex()
{
	// Line 234, Address: 0x159f90, Func Offset: 0
	// Line 235, Address: 0x159f98, Func Offset: 0x8
	// Line 236, Address: 0x159fa8, Func Offset: 0x18
	// Line 238, Address: 0x159fc8, Func Offset: 0x38
	// Line 240, Address: 0x159ff0, Func Offset: 0x60
	// Func End, Address: 0x15a000, Func Offset: 0x70
}

