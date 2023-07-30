typedef struct sh2gfw_TexMAN;
typedef struct sh2gfw_Effect_Man;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct shAttackInfo;
typedef struct sh2gfw_TEX_HEAD;
typedef union _anon0;
typedef struct sh2gfw_CLUTS_HEAD;
typedef struct sh2gfw_ALLTEXSYNC_MAN;
typedef union Q_WORDDATA;


typedef unsigned int type_0[4];
typedef unsigned short type_1[8];
typedef float type_2[4];
typedef unsigned char type_3[16];
typedef int type_4[4];
typedef short type_5[8];
typedef char type_6[16];
typedef Q_WORDDATA type_7[48];
typedef unsigned long type_8[2];
typedef Q_WORDDATA type_9[96];
typedef sh2gfw_TexMAN* type_10[96];
typedef sh2gfw_TexMAN type_11[96];
typedef shAttackInfo type_12[46];
typedef unsigned char type_13[16];
typedef unsigned char type_14[16];

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

union _anon0
{
	shBattleFight fight;
	shBattleShot shot;
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

shAttackInfo sh2_attack_list[46];
Q_WORDDATA effect_dummy_end;
sh2gfw_Effect_Man GunBloodTex_Man;
unsigned int paddata2;
sh2gfw_ALLTEXSYNC_MAN AllTexSync_Man;
int GunBloodTex_head;
sh2gfw_Effect_Man FlameTex_Man;

void sh_ef_test();
void sh2gfw_init_GunBloodTex_Man();
void sh2gfw_Send_GunBloodTex();
<unknown fundamental type (0xa510)>* sh2gfw_Get_efctTEX0(int efctkind, int clut_id);

// 
// Start address: 0x14c2a0
void sh_ef_test()
{
	void* addr;
	int f;
	// Line 56, Address: 0x14c2a0, Func Offset: 0
	// Line 61, Address: 0x14c2b0, Func Offset: 0x10
	// Line 68, Address: 0x14c2b4, Func Offset: 0x14
	// Line 75, Address: 0x14c2bc, Func Offset: 0x1c
	// Line 94, Address: 0x14c2c4, Func Offset: 0x24
	// Line 149, Address: 0x14c2d8, Func Offset: 0x38
	// Line 150, Address: 0x14c2e0, Func Offset: 0x40
	// Line 151, Address: 0x14c2f4, Func Offset: 0x54
	// Line 154, Address: 0x14c2fc, Func Offset: 0x5c
	// Line 157, Address: 0x14c308, Func Offset: 0x68
	// Line 181, Address: 0x14c314, Func Offset: 0x74
	// Line 183, Address: 0x14c320, Func Offset: 0x80
	// Line 185, Address: 0x14c328, Func Offset: 0x88
	// Line 194, Address: 0x14c338, Func Offset: 0x98
	// Func End, Address: 0x14c350, Func Offset: 0xb0
}

// 
// Start address: 0x14c350
void sh2gfw_init_GunBloodTex_Man()
{
	sh2gfw_CLUTS_HEAD* pCH;
	sh2gfw_TEX_HEAD* pTH;
	// Line 220, Address: 0x14c350, Func Offset: 0
	// Line 225, Address: 0x14c360, Func Offset: 0x10
	// Line 227, Address: 0x14c378, Func Offset: 0x28
	// Line 229, Address: 0x14c380, Func Offset: 0x30
	// Line 232, Address: 0x14c3b8, Func Offset: 0x68
	// Line 233, Address: 0x14c3c0, Func Offset: 0x70
	// Line 236, Address: 0x14c3c8, Func Offset: 0x78
	// Line 241, Address: 0x14c3f4, Func Offset: 0xa4
	// Line 243, Address: 0x14c400, Func Offset: 0xb0
	// Func End, Address: 0x14c418, Func Offset: 0xc8
}

// 
// Start address: 0x14c420
void sh2gfw_Send_GunBloodTex()
{
	// Line 251, Address: 0x14c420, Func Offset: 0
	// Line 254, Address: 0x14c428, Func Offset: 0x8
	// Line 256, Address: 0x14c464, Func Offset: 0x44
	// Line 266, Address: 0x14c488, Func Offset: 0x68
	// Line 273, Address: 0x14c4ac, Func Offset: 0x8c
	// Func End, Address: 0x14c4bc, Func Offset: 0x9c
}

// 
// Start address: 0x14c4c0
<unknown fundamental type (0xa510)>* sh2gfw_Get_efctTEX0(int efctkind, int clut_id)
{
	sh2gfw_Effect_Man* ef_tex_man;
	<unknown fundamental type (0xa510)>* pTex0;
	// Line 335, Address: 0x14c4c0, Func Offset: 0
	// Line 336, Address: 0x14c4d8, Func Offset: 0x18
	// Line 339, Address: 0x14c4dc, Func Offset: 0x1c
	// Line 346, Address: 0x14c508, Func Offset: 0x48
	// Line 347, Address: 0x14c510, Func Offset: 0x50
	// Line 349, Address: 0x14c518, Func Offset: 0x58
	// Line 350, Address: 0x14c520, Func Offset: 0x60
	// Line 352, Address: 0x14c528, Func Offset: 0x68
	// Line 357, Address: 0x14c550, Func Offset: 0x90
	// Line 363, Address: 0x14c568, Func Offset: 0xa8
	// Line 364, Address: 0x14c56c, Func Offset: 0xac
	// Func End, Address: 0x14c584, Func Offset: 0xc4
}

