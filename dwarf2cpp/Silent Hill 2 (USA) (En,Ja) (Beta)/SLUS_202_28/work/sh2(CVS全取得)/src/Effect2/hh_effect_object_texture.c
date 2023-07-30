typedef struct sh2gfw_TexMAN;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct sh2gfw_Effect_Man;
typedef struct sh2gfw_TEX_HEAD;
typedef struct sh2gfw_CLUTS_HEAD;
typedef struct HH_Local_TextureInfomeation;
typedef struct HH_Local_TextureContext;
typedef struct shAttackInfo;
typedef union _anon0;
typedef union Q_WORDDATA;
typedef struct sh2gfw_ALLTEXSYNC_MAN;

typedef int(*type_18)();

typedef int type_0[4];
typedef short type_1[8];
typedef char type_2[16];
typedef unsigned long type_3[2];
typedef int type_4[1];
typedef int type_5[1];
typedef int type_6[1];
typedef int type_7[1];
typedef Q_WORDDATA type_8[48];
typedef int type_9[3];
typedef sh2gfw_TexMAN type_10[96];
typedef int type_11[1];
typedef int type_12[2];
typedef unsigned int type_13[5];
typedef int* type_14[21];
typedef int type_15[1];
typedef int type_16[1];
typedef HH_Local_TextureInfomeation type_17[21];
typedef int type_19[1];
typedef int type_20[3];
typedef shAttackInfo type_21[66];
typedef int type_22[11];
typedef int type_23[1];
typedef int type_24[1];
typedef HH_Local_TextureContext type_25[21];
typedef int type_26[6];
typedef int type_27[1];
typedef int type_28[1];
typedef unsigned int type_29[4];
typedef int type_30[1];
typedef unsigned short type_31[8];
typedef unsigned char type_32[16];
typedef float type_33[4];
typedef unsigned char type_34[16];
typedef unsigned char type_35[16];

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

struct sh2gfw_Effect_Man
{
	unsigned short effectid;
	unsigned short vifmark;
	unsigned short valid_id;
	unsigned short pads;
	int thr_cid;
	int thr_sid;
	<unknown fundamental type (0xa510)> Tex0Data;
	<unknown fundamental type (0xa510)> Alpha;
	void* pTexMAN;
	void* pTexHead;
	void* pTop;
	void* pPad;
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

struct HH_Local_TextureInfomeation
{
	unsigned int Register_Texture_ID;
	void* pFileID;
	unsigned int Entry_Level;
	unsigned int Transport_Priority;
	unsigned int LinkList_Max;
	int* pLinkList;
	int(*pException_Judge)();
};

struct HH_Local_TextureContext
{
	unsigned int Enable;
	int Buffer_Index;
	unsigned int Entry_Level;
	HH_Local_TextureInfomeation* pTexture_Infomeation;
	sh2gfw_Effect_Man EffectTexture_Management;
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

shAttackInfo sh2_attack_list[66];
unsigned int _send_count;
unsigned int _sync_count;
unsigned int _finish_count;
int _fog_list[11];
int _playable_exception_01_list[1];
int _fire_01_list[1];
int _ps_ground_list[6];
int _ps_gesui_list[1];
int _ru_bar_list[1];
int _ru_kitchen_list[1];
int _ru_passba_list[1];
int _ru_passbb_list[1];
int _ru_stair_list[1];
int _ap_stair_list[1];
int _water_01_list[1];
int _water_02_list[3];
int _water_40_list[3];
int _glass_list[1];
int _fly_01_list[2];
int _msi_00_list[1];
int _boatmask_list[1];
HH_Local_TextureInfomeation _TextureInfomeation_Table[21];
HH_Local_TextureInfomeation* _pTexInfo_Table;
int* _TextureHeader_Table[21];
sh2gfw_ALLTEXSYNC_MAN AllTexSync_Man;
unsigned int _texture_buffer_enable[5];
HH_Local_TextureContext _TextureContext_Table[21];
unsigned int _Transport_Current_Priority;

void LocalWrapper_TextureTransport_Entry(sh2gfw_Effect_Man* pEffectTexture_Management, sh2gfw_TEX_HEAD* pTexture_Header, sh2gfw_CLUTS_HEAD* pCluts_Header, unsigned int Texture_ID);
unsigned int LocalWrapper_TextureTransport_Entry_Delete(sh2gfw_Effect_Man* pEffectTexture_Management);
unsigned int TextureContext_DesignateEntryLevel_EntryCheck(unsigned int Entry_Level, HH_Local_TextureInfomeation* pTexture_Infomeation);
unsigned int TextureBinary_DesignateEntryLevel_Load(unsigned int Entry_Level);
unsigned int AlwaysTexture_Context_Entry(HH_Local_TextureInfomeation* pTex_Info, HH_Local_TextureContext* pContext, void* pBuffer);
unsigned int TextureBinary_DesignateTexture_Load_toAlwaysBuffer(HH_Local_TextureInfomeation* pTex_Info);
unsigned int TextureContext_DesignateEntryLevel_Entry(unsigned int Entry_Level);
unsigned int TextureContext_DesignateEntryLevel_AllClear(unsigned int Entry_Level);
unsigned int TextureContext_DesignateEntryLevelUnder_AllClear(unsigned int Entry_Level);
unsigned int AlwaysTexture_Initialize(HH_Local_TextureInfomeation* pTex_Info);
void Object_SPK_Texture_Post();
void Object_Texture_Send();
void Object_Texture_Sync();
void Object_Texture_Finish();
unsigned long Object_Texture_GS_Register_Tex0_Get(unsigned int Texture_ID, unsigned int Clut_ID);
void HH_Effect_Object_Texture_TransportPriority_Initialize();
void HH_Effect_Object_SPK_Texture_Post();
void HH_Effect_Object_Texture_Send();
void HH_Effect_Object_Texture_Sync();
void HH_Effect_Object_Texture_Finish();
unsigned long HH_Effect_Object_Texture_GS_Register_Tex0_Get(unsigned int Texture_ID, unsigned int Clut_ID);
unsigned int HH_Effect_Object_Texture_DesignateEntryLevel_Initialize(unsigned int Entry_Level);
unsigned int HH_Effect_Object_Texture_DesignateEntryLevel_Discard(unsigned int Entry_Level);
unsigned int HH_Effect_Object_Texture_AlwaysTexture_Initialize();

// 
// Start address: 0x26a410
void LocalWrapper_TextureTransport_Entry(sh2gfw_Effect_Man* pEffectTexture_Management, sh2gfw_TEX_HEAD* pTexture_Header, sh2gfw_CLUTS_HEAD* pCluts_Header, unsigned int Texture_ID)
{
	// Line 601, Address: 0x26a410, Func Offset: 0
	// Line 602, Address: 0x26a438, Func Offset: 0x28
	// Line 604, Address: 0x26a448, Func Offset: 0x38
	// Line 605, Address: 0x26a44c, Func Offset: 0x3c
	// Line 606, Address: 0x26a474, Func Offset: 0x64
	// Line 607, Address: 0x26a47c, Func Offset: 0x6c
	// Func End, Address: 0x26a49c, Func Offset: 0x8c
}

// 
// Start address: 0x26a4a0
unsigned int LocalWrapper_TextureTransport_Entry_Delete(sh2gfw_Effect_Man* pEffectTexture_Management)
{
	unsigned int result;
	// Line 619, Address: 0x26a4a0, Func Offset: 0
	// Line 620, Address: 0x26a4ac, Func Offset: 0xc
	// Line 622, Address: 0x26a4b0, Func Offset: 0x10
	// Line 623, Address: 0x26a4cc, Func Offset: 0x2c
	// Line 625, Address: 0x26a4d0, Func Offset: 0x30
	// Line 626, Address: 0x26a4d4, Func Offset: 0x34
	// Func End, Address: 0x26a4e8, Func Offset: 0x48
}

// 
// Start address: 0x26a4f0
unsigned int TextureContext_DesignateEntryLevel_EntryCheck(unsigned int Entry_Level, HH_Local_TextureInfomeation* pTexture_Infomeation)
{
	unsigned int result;
	// Line 640, Address: 0x26a4f0, Func Offset: 0
	// Line 641, Address: 0x26a508, Func Offset: 0x18
	// Line 643, Address: 0x26a50c, Func Offset: 0x1c
	// Line 645, Address: 0x26a540, Func Offset: 0x50
	// Line 649, Address: 0x26a570, Func Offset: 0x80
	// Line 650, Address: 0x26a57c, Func Offset: 0x8c
	// Line 651, Address: 0x26a58c, Func Offset: 0x9c
	// Line 653, Address: 0x26a590, Func Offset: 0xa0
	// Line 655, Address: 0x26a598, Func Offset: 0xa8
	// Line 663, Address: 0x26a59c, Func Offset: 0xac
	// Line 665, Address: 0x26a5a4, Func Offset: 0xb4
	// Line 669, Address: 0x26a5d4, Func Offset: 0xe4
	// Line 670, Address: 0x26a5e0, Func Offset: 0xf0
	// Line 686, Address: 0x26a5f0, Func Offset: 0x100
	// Line 687, Address: 0x26a648, Func Offset: 0x158
	// Line 702, Address: 0x26a64c, Func Offset: 0x15c
	// Line 703, Address: 0x26a650, Func Offset: 0x160
	// Func End, Address: 0x26a66c, Func Offset: 0x17c
}

// 
// Start address: 0x26a670
unsigned int TextureBinary_DesignateEntryLevel_Load(unsigned int Entry_Level)
{
	void* pBuffer;
	int fid;
	HH_Local_TextureContext* pContext;
	int buffer_index;
	HH_Local_TextureInfomeation* pTex_Info;
	unsigned int i;
	unsigned int result;
	// Line 715, Address: 0x26a670, Func Offset: 0
	// Line 716, Address: 0x26a69c, Func Offset: 0x2c
	// Line 719, Address: 0x26a6a0, Func Offset: 0x30
	// Line 720, Address: 0x26a6ac, Func Offset: 0x3c
	// Line 723, Address: 0x26a6bc, Func Offset: 0x4c
	// Line 725, Address: 0x26a6d4, Func Offset: 0x64
	// Line 727, Address: 0x26a750, Func Offset: 0xe0
	// Line 728, Address: 0x26a75c, Func Offset: 0xec
	// Line 730, Address: 0x26a778, Func Offset: 0x108
	// Line 732, Address: 0x26a784, Func Offset: 0x114
	// Line 735, Address: 0x26a794, Func Offset: 0x124
	// Line 738, Address: 0x26a7b0, Func Offset: 0x140
	// Line 741, Address: 0x26a7c4, Func Offset: 0x154
	// Line 746, Address: 0x26a7d0, Func Offset: 0x160
	// Line 749, Address: 0x26a7f0, Func Offset: 0x180
	// Line 751, Address: 0x26a7f8, Func Offset: 0x188
	// Line 753, Address: 0x26a7fc, Func Offset: 0x18c
	// Line 755, Address: 0x26a800, Func Offset: 0x190
	// Line 758, Address: 0x26a804, Func Offset: 0x194
	// Line 760, Address: 0x26a848, Func Offset: 0x1d8
	// Line 764, Address: 0x26a860, Func Offset: 0x1f0
	// Line 769, Address: 0x26a868, Func Offset: 0x1f8
	// Line 770, Address: 0x26a878, Func Offset: 0x208
	// Line 774, Address: 0x26a89c, Func Offset: 0x22c
	// Line 777, Address: 0x26a8c4, Func Offset: 0x254
	// Line 779, Address: 0x26a8d4, Func Offset: 0x264
	// Line 780, Address: 0x26a8d8, Func Offset: 0x268
	// Func End, Address: 0x26a908, Func Offset: 0x298
}

// 
// Start address: 0x26a910
unsigned int AlwaysTexture_Context_Entry(HH_Local_TextureInfomeation* pTex_Info, HH_Local_TextureContext* pContext, void* pBuffer)
{
	unsigned int result;
	// Line 798, Address: 0x26a910, Func Offset: 0
	// Line 800, Address: 0x26a918, Func Offset: 0x8
	// Line 802, Address: 0x26a920, Func Offset: 0x10
	// Line 804, Address: 0x26a924, Func Offset: 0x14
	// Line 807, Address: 0x26a928, Func Offset: 0x18
	// Line 809, Address: 0x26a930, Func Offset: 0x20
	// Line 812, Address: 0x26a948, Func Offset: 0x38
	// Func End, Address: 0x26a950, Func Offset: 0x40
}

// 
// Start address: 0x26a950
unsigned int TextureBinary_DesignateTexture_Load_toAlwaysBuffer(HH_Local_TextureInfomeation* pTex_Info)
{
	int fid;
	void* pBuffer;
	HH_Local_TextureContext* pContext;
	unsigned int result;
	// Line 824, Address: 0x26a950, Func Offset: 0
	// Line 825, Address: 0x26a970, Func Offset: 0x20
	// Line 826, Address: 0x26a974, Func Offset: 0x24
	// Line 828, Address: 0x26a990, Func Offset: 0x40
	// Line 829, Address: 0x26a99c, Func Offset: 0x4c
	// Line 831, Address: 0x26a9ac, Func Offset: 0x5c
	// Line 834, Address: 0x26a9c0, Func Offset: 0x70
	// Line 839, Address: 0x26a9cc, Func Offset: 0x7c
	// Line 841, Address: 0x26a9ec, Func Offset: 0x9c
	// Line 843, Address: 0x26aa00, Func Offset: 0xb0
	// Line 845, Address: 0x26aa04, Func Offset: 0xb4
	// Line 850, Address: 0x26aa0c, Func Offset: 0xbc
	// Line 851, Address: 0x26aa1c, Func Offset: 0xcc
	// Line 854, Address: 0x26aa44, Func Offset: 0xf4
	// Line 855, Address: 0x26aa48, Func Offset: 0xf8
	// Func End, Address: 0x26aa6c, Func Offset: 0x11c
}

// 
// Start address: 0x26aa70
unsigned int TextureContext_DesignateEntryLevel_Entry(unsigned int Entry_Level)
{
	sh2gfw_CLUTS_HEAD* pCluts_Header;
	sh2gfw_TEX_HEAD* pTex_Header;
	HH_Local_TextureContext* pContext;
	unsigned int i;
	unsigned int result;
	// Line 867, Address: 0x26aa70, Func Offset: 0
	// Line 868, Address: 0x26aa84, Func Offset: 0x14
	// Line 871, Address: 0x26aa88, Func Offset: 0x18
	// Line 872, Address: 0x26aa94, Func Offset: 0x24
	// Line 875, Address: 0x26aaac, Func Offset: 0x3c
	// Line 877, Address: 0x26aab8, Func Offset: 0x48
	// Line 878, Address: 0x26aac4, Func Offset: 0x54
	// Line 879, Address: 0x26aad4, Func Offset: 0x64
	// Line 885, Address: 0x26aadc, Func Offset: 0x6c
	// Line 887, Address: 0x26aaf0, Func Offset: 0x80
	// Line 889, Address: 0x26aaf4, Func Offset: 0x84
	// Line 890, Address: 0x26aaf8, Func Offset: 0x88
	// Line 893, Address: 0x26ab0c, Func Offset: 0x9c
	// Func End, Address: 0x26ab24, Func Offset: 0xb4
}

// 
// Start address: 0x26ab30
unsigned int TextureContext_DesignateEntryLevel_AllClear(unsigned int Entry_Level)
{
	HH_Local_TextureContext* pContext;
	unsigned int i;
	unsigned int result;
	// Line 905, Address: 0x26ab30, Func Offset: 0
	// Line 906, Address: 0x26ab48, Func Offset: 0x18
	// Line 910, Address: 0x26ab4c, Func Offset: 0x1c
	// Line 911, Address: 0x26ab58, Func Offset: 0x28
	// Line 914, Address: 0x26ab70, Func Offset: 0x40
	// Line 916, Address: 0x26ab7c, Func Offset: 0x4c
	// Line 918, Address: 0x26ab88, Func Offset: 0x58
	// Line 920, Address: 0x26ab98, Func Offset: 0x68
	// Line 923, Address: 0x26abe0, Func Offset: 0xb0
	// Line 925, Address: 0x26abec, Func Offset: 0xbc
	// Line 926, Address: 0x26ac00, Func Offset: 0xd0
	// Line 928, Address: 0x26ac04, Func Offset: 0xd4
	// Line 929, Address: 0x26ac08, Func Offset: 0xd8
	// Line 932, Address: 0x26ac1c, Func Offset: 0xec
	// Func End, Address: 0x26ac38, Func Offset: 0x108
}

// 
// Start address: 0x26ac40
unsigned int TextureContext_DesignateEntryLevelUnder_AllClear(unsigned int Entry_Level)
{
	unsigned int i;
	unsigned int result;
	// Line 944, Address: 0x26ac40, Func Offset: 0
	// Line 945, Address: 0x26ac4c, Func Offset: 0xc
	// Line 948, Address: 0x26ac50, Func Offset: 0x10
	// Line 949, Address: 0x26ac5c, Func Offset: 0x1c
	// Line 950, Address: 0x26ac68, Func Offset: 0x28
	// Line 951, Address: 0x26ac6c, Func Offset: 0x2c
	// Line 953, Address: 0x26ac7c, Func Offset: 0x3c
	// Func End, Address: 0x26ac90, Func Offset: 0x50
}

// 
// Start address: 0x26ac90
unsigned int AlwaysTexture_Initialize(HH_Local_TextureInfomeation* pTex_Info)
{
	unsigned int Entry_Level;
	unsigned int result;
	// Line 965, Address: 0x26ac90, Func Offset: 0
	// Line 970, Address: 0x26aca0, Func Offset: 0x10
	// Line 973, Address: 0x26acac, Func Offset: 0x1c
	// Line 976, Address: 0x26acb8, Func Offset: 0x28
	// Line 978, Address: 0x26acc4, Func Offset: 0x34
	// Line 979, Address: 0x26acc8, Func Offset: 0x38
	// Func End, Address: 0x26acdc, Func Offset: 0x4c
}

// 
// Start address: 0x26ace0
void Object_SPK_Texture_Post()
{
	sh2gfw_Effect_Man* pTex_Manage;
	HH_Local_TextureContext* pContext;
	unsigned int i;
	// Line 1004, Address: 0x26ace0, Func Offset: 0
	// Line 1008, Address: 0x26acec, Func Offset: 0xc
	// Line 1009, Address: 0x26acf8, Func Offset: 0x18
	// Line 1012, Address: 0x26ad10, Func Offset: 0x30
	// Line 1014, Address: 0x26ad1c, Func Offset: 0x3c
	// Line 1015, Address: 0x26ad30, Func Offset: 0x50
	// Line 1017, Address: 0x26ad34, Func Offset: 0x54
	// Line 1020, Address: 0x26ad6c, Func Offset: 0x8c
	// Line 1023, Address: 0x26ad80, Func Offset: 0xa0
	// Line 1024, Address: 0x26ad94, Func Offset: 0xb4
	// Func End, Address: 0x26ada8, Func Offset: 0xc8
}

// 
// Start address: 0x26adb0
void Object_Texture_Send()
{
	sh2gfw_Effect_Man* pTex_Manage;
	HH_Local_TextureContext* pContext;
	unsigned int priority;
	unsigned int i;
	// Line 1033, Address: 0x26adb0, Func Offset: 0
	// Line 1035, Address: 0x26adc0, Func Offset: 0x10
	// Line 1038, Address: 0x26adc8, Func Offset: 0x18
	// Line 1039, Address: 0x26add4, Func Offset: 0x24
	// Line 1042, Address: 0x26adec, Func Offset: 0x3c
	// Line 1044, Address: 0x26adf8, Func Offset: 0x48
	// Line 1045, Address: 0x26ae08, Func Offset: 0x58
	// Line 1047, Address: 0x26ae0c, Func Offset: 0x5c
	// Line 1049, Address: 0x26ae44, Func Offset: 0x94
	// Line 1050, Address: 0x26ae5c, Func Offset: 0xac
	// Line 1053, Address: 0x26ae70, Func Offset: 0xc0
	// Line 1054, Address: 0x26ae84, Func Offset: 0xd4
	// Func End, Address: 0x26ae9c, Func Offset: 0xec
}

// 
// Start address: 0x26aea0
void Object_Texture_Sync()
{
	sh2gfw_Effect_Man* pTex_Manage;
	HH_Local_TextureContext* pContext;
	unsigned int priority;
	unsigned int i;
	// Line 1063, Address: 0x26aea0, Func Offset: 0
	// Line 1065, Address: 0x26aeb0, Func Offset: 0x10
	// Line 1067, Address: 0x26aeb8, Func Offset: 0x18
	// Line 1068, Address: 0x26aec4, Func Offset: 0x24
	// Line 1071, Address: 0x26aedc, Func Offset: 0x3c
	// Line 1073, Address: 0x26aee8, Func Offset: 0x48
	// Line 1076, Address: 0x26aef8, Func Offset: 0x58
	// Line 1077, Address: 0x26af04, Func Offset: 0x64
	// Line 1080, Address: 0x26af18, Func Offset: 0x78
	// Line 1081, Address: 0x26af2c, Func Offset: 0x8c
	// Func End, Address: 0x26af44, Func Offset: 0xa4
}

// 
// Start address: 0x26af50
void Object_Texture_Finish()
{
	sh2gfw_Effect_Man* pTex_Manage;
	HH_Local_TextureContext* pContext;
	unsigned int priority;
	unsigned int i;
	// Line 1090, Address: 0x26af50, Func Offset: 0
	// Line 1092, Address: 0x26af60, Func Offset: 0x10
	// Line 1094, Address: 0x26af68, Func Offset: 0x18
	// Line 1095, Address: 0x26af74, Func Offset: 0x24
	// Line 1098, Address: 0x26af8c, Func Offset: 0x3c
	// Line 1100, Address: 0x26af98, Func Offset: 0x48
	// Line 1103, Address: 0x26afa8, Func Offset: 0x58
	// Line 1104, Address: 0x26afb4, Func Offset: 0x64
	// Line 1107, Address: 0x26afc8, Func Offset: 0x78
	// Line 1110, Address: 0x26afdc, Func Offset: 0x8c
	// Line 1111, Address: 0x26afe8, Func Offset: 0x98
	// Func End, Address: 0x26b000, Func Offset: 0xb0
}

// 
// Start address: 0x26b000
unsigned long Object_Texture_GS_Register_Tex0_Get(unsigned int Texture_ID, unsigned int Clut_ID)
{
	unsigned long tex0;
	HH_Local_TextureContext* pContext;
	// Line 1123, Address: 0x26b000, Func Offset: 0
	// Line 1124, Address: 0x26b008, Func Offset: 0x8
	// Line 1125, Address: 0x26b020, Func Offset: 0x20
	// Line 1127, Address: 0x26b024, Func Offset: 0x24
	// Line 1128, Address: 0x26b054, Func Offset: 0x54
	// Line 1129, Address: 0x26b060, Func Offset: 0x60
	// Line 1132, Address: 0x26b078, Func Offset: 0x78
	// Func End, Address: 0x26b088, Func Offset: 0x88
}

// 
// Start address: 0x26b090
void HH_Effect_Object_Texture_TransportPriority_Initialize()
{
	// Line 1153, Address: 0x26b090, Func Offset: 0
	// Line 1154, Address: 0x26b098, Func Offset: 0x8
	// Line 1155, Address: 0x26b0a0, Func Offset: 0x10
	// Line 1156, Address: 0x26b0a8, Func Offset: 0x18
	// Line 1157, Address: 0x26b0b0, Func Offset: 0x20
	// Func End, Address: 0x26b0b8, Func Offset: 0x28
}

// 
// Start address: 0x26b0c0
void HH_Effect_Object_SPK_Texture_Post()
{
	// Line 1166, Address: 0x26b0c0, Func Offset: 0
	// Line 1167, Address: 0x26b0c8, Func Offset: 0x8
	// Line 1168, Address: 0x26b0d0, Func Offset: 0x10
	// Func End, Address: 0x26b0e0, Func Offset: 0x20
}

// 
// Start address: 0x26b0e0
void HH_Effect_Object_Texture_Send()
{
	// Line 1184, Address: 0x26b0e0, Func Offset: 0
	// Line 1185, Address: 0x26b0e8, Func Offset: 0x8
	// Line 1186, Address: 0x26b0f0, Func Offset: 0x10
	// Func End, Address: 0x26b100, Func Offset: 0x20
}

// 
// Start address: 0x26b100
void HH_Effect_Object_Texture_Sync()
{
	// Line 1189, Address: 0x26b100, Func Offset: 0
	// Line 1190, Address: 0x26b108, Func Offset: 0x8
	// Line 1191, Address: 0x26b110, Func Offset: 0x10
	// Func End, Address: 0x26b120, Func Offset: 0x20
}

// 
// Start address: 0x26b120
void HH_Effect_Object_Texture_Finish()
{
	// Line 1194, Address: 0x26b120, Func Offset: 0
	// Line 1195, Address: 0x26b128, Func Offset: 0x8
	// Line 1196, Address: 0x26b130, Func Offset: 0x10
	// Func End, Address: 0x26b140, Func Offset: 0x20
}

// 
// Start address: 0x26b140
unsigned long HH_Effect_Object_Texture_GS_Register_Tex0_Get(unsigned int Texture_ID, unsigned int Clut_ID)
{
	// Line 1199, Address: 0x26b140, Func Offset: 0
	// Line 1200, Address: 0x26b148, Func Offset: 0x8
	// Line 1201, Address: 0x26b150, Func Offset: 0x10
	// Func End, Address: 0x26b160, Func Offset: 0x20
}

// 
// Start address: 0x26b160
unsigned int HH_Effect_Object_Texture_DesignateEntryLevel_Initialize(unsigned int Entry_Level)
{
	unsigned int result;
	// Line 1214, Address: 0x26b160, Func Offset: 0
	// Line 1215, Address: 0x26b174, Func Offset: 0x14
	// Line 1224, Address: 0x26b178, Func Offset: 0x18
	// Line 1226, Address: 0x26b18c, Func Offset: 0x2c
	// Line 1229, Address: 0x26b198, Func Offset: 0x38
	// Line 1232, Address: 0x26b1a4, Func Offset: 0x44
	// Line 1234, Address: 0x26b1b0, Func Offset: 0x50
	// Line 1235, Address: 0x26b1b4, Func Offset: 0x54
	// Line 1238, Address: 0x26b1bc, Func Offset: 0x5c
	// Line 1240, Address: 0x26b1cc, Func Offset: 0x6c
	// Line 1242, Address: 0x26b1d8, Func Offset: 0x78
	// Line 1245, Address: 0x26b1e4, Func Offset: 0x84
	// Line 1247, Address: 0x26b1f0, Func Offset: 0x90
	// Line 1252, Address: 0x26b1fc, Func Offset: 0x9c
	// Line 1253, Address: 0x26b200, Func Offset: 0xa0
	// Func End, Address: 0x26b218, Func Offset: 0xb8
}

// 
// Start address: 0x26b220
unsigned int HH_Effect_Object_Texture_DesignateEntryLevel_Discard(unsigned int Entry_Level)
{
	unsigned int result;
	// Line 1265, Address: 0x26b220, Func Offset: 0
	// Line 1270, Address: 0x26b228, Func Offset: 0x8
	// Line 1275, Address: 0x26b230, Func Offset: 0x10
	// Line 1276, Address: 0x26b234, Func Offset: 0x14
	// Func End, Address: 0x26b244, Func Offset: 0x24
}

// 
// Start address: 0x26b250
unsigned int HH_Effect_Object_Texture_AlwaysTexture_Initialize()
{
	HH_Local_TextureInfomeation* pTex_Info;
	unsigned int i;
	unsigned int result;
	// Line 1287, Address: 0x26b250, Func Offset: 0
	// Line 1292, Address: 0x26b258, Func Offset: 0x8
	// Line 1293, Address: 0x26b264, Func Offset: 0x14
	// Line 1295, Address: 0x26b274, Func Offset: 0x24
	// Line 1296, Address: 0x26b284, Func Offset: 0x34
	// Line 1297, Address: 0x26b28c, Func Offset: 0x3c
	// Line 1299, Address: 0x26b294, Func Offset: 0x44
	// Line 1300, Address: 0x26b2a8, Func Offset: 0x58
	// Line 1301, Address: 0x26b2ac, Func Offset: 0x5c
	// Func End, Address: 0x26b2bc, Func Offset: 0x6c
}

