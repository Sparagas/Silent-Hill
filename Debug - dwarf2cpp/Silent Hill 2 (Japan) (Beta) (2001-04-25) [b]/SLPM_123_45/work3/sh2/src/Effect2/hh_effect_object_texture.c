typedef struct sh2gfw_Effect_Man;
typedef struct shAttackInfo;
typedef struct sh2gfw_TexMAN;
typedef union _anon0;
typedef struct sh2gfw_CLUTS_HEAD;
typedef struct sh2gfw_ALLTEXSYNC_MAN;
typedef struct sh2gfw_TEX_HEAD;
typedef union Q_WORDDATA;
typedef struct shBattleFight;
typedef struct shBattleShot;


typedef sh2gfw_Effect_Man type_0[1];
typedef unsigned char type_1[16];
typedef unsigned char type_2[16];
typedef unsigned int type_3[4];
typedef unsigned short type_4[8];
typedef float type_5[4];
typedef unsigned char type_6[16];
typedef int type_7[4];
typedef short type_8[8];
typedef char type_9[16];
typedef unsigned long type_10[2];
typedef Q_WORDDATA type_11[48];
typedef Q_WORDDATA type_12[96];
typedef sh2gfw_TexMAN* type_13[96];
typedef sh2gfw_TexMAN type_14[96];
typedef int* type_15[1];
typedef shAttackInfo type_16[46];

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
int* _Texture_Header_Table[1];
sh2gfw_ALLTEXSYNC_MAN AllTexSync_Man;
sh2gfw_Effect_Man _Texture_Context_Table[1];

void Object_Texture_Initialize();
void Object_Texture_Send();
void Object_Texture_Send_Sync();
void Object_Texture_Send_Finish();
unsigned long Object_Texture_GS_Register_Tex0_Get(unsigned int Texture_ID, unsigned int Clut_ID);
void HH_Effect_Object_Texture_Initialize();
void HH_Effect_Object_Texture_Send();
void HH_Effect_Object_Texture_Send_Sync();
void HH_Effect_Object_Texture_Send_Finish();
unsigned long HH_Effect_Object_Texture_GS_Register_Tex0_Get(unsigned int Texture_ID, unsigned int Clut_ID);

// 
// Start address: 0x24b090
void Object_Texture_Initialize()
{
	sh2gfw_CLUTS_HEAD* pCluts_Header;
	sh2gfw_TEX_HEAD* pTex_Header;
	sh2gfw_Effect_Man* pTexture_Context;
	unsigned int i;
	// Line 91, Address: 0x24b090, Func Offset: 0
	// Line 94, Address: 0x24b0b0, Func Offset: 0x20
	// Line 95, Address: 0x24b0bc, Func Offset: 0x2c
	// Line 96, Address: 0x24b0d0, Func Offset: 0x40
	// Line 97, Address: 0x24b0e8, Func Offset: 0x58
	// Line 99, Address: 0x24b0f0, Func Offset: 0x60
	// Line 101, Address: 0x24b104, Func Offset: 0x74
	// Line 103, Address: 0x24b140, Func Offset: 0xb0
	// Line 104, Address: 0x24b144, Func Offset: 0xb4
	// Line 105, Address: 0x24b168, Func Offset: 0xd8
	// Line 106, Address: 0x24b170, Func Offset: 0xe0
	// Line 107, Address: 0x24b180, Func Offset: 0xf0
	// Func End, Address: 0x24b1a8, Func Offset: 0x118
}

// 
// Start address: 0x24b1b0
void Object_Texture_Send()
{
	sh2gfw_Effect_Man* pTexture_Context;
	unsigned int i;
	// Line 110, Address: 0x24b1b0, Func Offset: 0
	// Line 113, Address: 0x24b1c4, Func Offset: 0x14
	// Line 114, Address: 0x24b1d0, Func Offset: 0x20
	// Line 116, Address: 0x24b1e4, Func Offset: 0x34
	// Line 118, Address: 0x24b220, Func Offset: 0x70
	// Line 119, Address: 0x24b238, Func Offset: 0x88
	// Line 120, Address: 0x24b248, Func Offset: 0x98
	// Func End, Address: 0x24b264, Func Offset: 0xb4
}

// 
// Start address: 0x24b270
void Object_Texture_Send_Sync()
{
	sh2gfw_Effect_Man* pTexture_Context;
	unsigned int i;
	// Line 123, Address: 0x24b270, Func Offset: 0
	// Line 126, Address: 0x24b284, Func Offset: 0x14
	// Line 127, Address: 0x24b290, Func Offset: 0x20
	// Line 129, Address: 0x24b2a4, Func Offset: 0x34
	// Line 130, Address: 0x24b2b0, Func Offset: 0x40
	// Line 131, Address: 0x24b2c0, Func Offset: 0x50
	// Func End, Address: 0x24b2dc, Func Offset: 0x6c
}

// 
// Start address: 0x24b2e0
void Object_Texture_Send_Finish()
{
	sh2gfw_Effect_Man* pTexture_Context;
	unsigned int i;
	// Line 134, Address: 0x24b2e0, Func Offset: 0
	// Line 137, Address: 0x24b2f4, Func Offset: 0x14
	// Line 138, Address: 0x24b300, Func Offset: 0x20
	// Line 140, Address: 0x24b314, Func Offset: 0x34
	// Line 141, Address: 0x24b320, Func Offset: 0x40
	// Line 142, Address: 0x24b330, Func Offset: 0x50
	// Func End, Address: 0x24b34c, Func Offset: 0x6c
}

// 
// Start address: 0x24b350
unsigned long Object_Texture_GS_Register_Tex0_Get(unsigned int Texture_ID, unsigned int Clut_ID)
{
	unsigned long tex0;
	sh2gfw_Effect_Man* pTexture_Context;
	// Line 145, Address: 0x24b350, Func Offset: 0
	// Line 146, Address: 0x24b36c, Func Offset: 0x1c
	// Line 147, Address: 0x24b384, Func Offset: 0x34
	// Line 149, Address: 0x24b39c, Func Offset: 0x4c
	// Line 150, Address: 0x24b3a0, Func Offset: 0x50
	// Func End, Address: 0x24b3bc, Func Offset: 0x6c
}

// 
// Start address: 0x24b3c0
void HH_Effect_Object_Texture_Initialize()
{
	// Line 159, Address: 0x24b3c0, Func Offset: 0
	// Line 160, Address: 0x24b3c8, Func Offset: 0x8
	// Line 161, Address: 0x24b3d0, Func Offset: 0x10
	// Func End, Address: 0x24b3e0, Func Offset: 0x20
}

// 
// Start address: 0x24b3e0
void HH_Effect_Object_Texture_Send()
{
	// Line 165, Address: 0x24b3e0, Func Offset: 0
	// Line 166, Address: 0x24b3e8, Func Offset: 0x8
	// Line 167, Address: 0x24b3f0, Func Offset: 0x10
	// Func End, Address: 0x24b400, Func Offset: 0x20
}

// 
// Start address: 0x24b400
void HH_Effect_Object_Texture_Send_Sync()
{
	// Line 170, Address: 0x24b400, Func Offset: 0
	// Line 171, Address: 0x24b408, Func Offset: 0x8
	// Line 172, Address: 0x24b410, Func Offset: 0x10
	// Func End, Address: 0x24b420, Func Offset: 0x20
}

// 
// Start address: 0x24b420
void HH_Effect_Object_Texture_Send_Finish()
{
	// Line 175, Address: 0x24b420, Func Offset: 0
	// Line 176, Address: 0x24b428, Func Offset: 0x8
	// Line 177, Address: 0x24b430, Func Offset: 0x10
	// Func End, Address: 0x24b440, Func Offset: 0x20
}

// 
// Start address: 0x24b440
unsigned long HH_Effect_Object_Texture_GS_Register_Tex0_Get(unsigned int Texture_ID, unsigned int Clut_ID)
{
	// Line 180, Address: 0x24b440, Func Offset: 0
	// Line 181, Address: 0x24b450, Func Offset: 0x10
	// Line 182, Address: 0x24b460, Func Offset: 0x20
	// Func End, Address: 0x24b470, Func Offset: 0x30
}

