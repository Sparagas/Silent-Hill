typedef struct shBattleFight;
typedef struct SPACK_STATIC_DATA;
typedef struct shBattleShot;
typedef struct Playing_Info;
typedef struct sh2gfw_Effect_Man;
typedef struct shAttackInfo;
typedef struct FONT_STREAM_DATA;
typedef struct WFONT_STREAM_DATA;
typedef struct MFONT_STREAM_DATA;
typedef union _anon0;
typedef struct SPACK_OT_DATA;
typedef struct sh2gfw_TEX_HEAD;
typedef struct sh2gfw_CLUTS_HEAD;
typedef struct SPACK_ENV_DATA;
typedef struct sh2gfw_TexMAN;
typedef struct sh2gfw_ALLTEXSYNC_MAN;
typedef struct SPACK_DATA;
typedef union Q_WORDDATA;
typedef struct FONT_DATA;


typedef sh2gfw_TexMAN type_0[96];
typedef unsigned char type_1[14];
typedef unsigned short type_2[400];
typedef short type_3[400];
typedef short type_4[400];
typedef unsigned char type_5[97];
typedef unsigned short type_6[4];
typedef unsigned short type_7[4];
typedef unsigned short type_8[64];
typedef unsigned short type_9[64][10];
typedef float type_10[7];
typedef unsigned char type_11[20];
typedef unsigned int type_12[7];
typedef unsigned short type_13[256];
typedef short type_14[256];
typedef short type_15[256];
typedef shAttackInfo type_16[66];
typedef unsigned char type_17[14];
typedef unsigned char type_18[69];
typedef <unknown fundamental type (0xa510)> type_19[4];
typedef unsigned char type_20[16];
typedef unsigned char type_21[16];
typedef unsigned int type_22[4];
typedef unsigned short type_23[8];
typedef unsigned int type_24[12];
typedef float type_25[4];
typedef unsigned int type_26[12];
typedef unsigned char type_27[16];
typedef unsigned int type_28[8];
typedef int type_29[4];
typedef unsigned char type_30[131072];
typedef short type_31[8];
typedef char type_32[16];
typedef unsigned long type_33[2];
typedef unsigned int type_34[4];
typedef Q_WORDDATA type_35[48];

struct shBattleFight
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

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct Playing_Info
{
	unsigned char stage;
	unsigned char enemy_off;
	unsigned char voice_off;
	unsigned char memo_select;
	unsigned char clear_end_kind;
	unsigned char clear_end_number;
	unsigned char rank;
	unsigned char game_stage;
	unsigned char hidden_item_get;
	char spray_pow;
	unsigned short savecount;
	unsigned short clearcount;
	unsigned short item_get;
	unsigned short kill_by_shot;
	unsigned short kill_by_fight;
	float time;
	float walk_distance;
	float run_distance;
	float boat_clear_time;
	float boat_max_speed;
	float jms_damage_total;
	float mar_damage_by_enemy;
	float mar_damage_by_jms;
	float stage_check_point[7];
	unsigned int stage_score[7];
	unsigned int total_score;
	float total_time;
	unsigned char battle_level;
	unsigned char riddle_level;
	unsigned char brightness_level;
	char screen_position_x;
	char screen_position_y;
	unsigned char vibration;
	unsigned char auto_load;
	unsigned char sound;
	unsigned char bgm_volume;
	unsigned char se_volume;
	unsigned char weapon_control;
	unsigned char blood_color;
	unsigned char view_control;
	unsigned char retreat_turn;
	unsigned char walk_run_control;
	unsigned char auto_aiming;
	unsigned char view_mode;
	unsigned char bullet_adjust;
	unsigned char language;
	unsigned char subtitles;
	unsigned char control_type;
	unsigned char radar;
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

struct FONT_STREAM_DATA
{
	unsigned short x;
	unsigned short y;
	unsigned short w;
	unsigned short h;
	unsigned short u;
	unsigned short v;
	unsigned int rgb_u;
	unsigned int rgb_d;
};

struct WFONT_STREAM_DATA
{
	unsigned short x;
	unsigned short y;
	unsigned short vw;
	unsigned short vh;
	unsigned short u;
	unsigned short v;
	unsigned int rgb_u;
	unsigned int rgb_d;
	unsigned short w;
	unsigned short h;
};

struct MFONT_STREAM_DATA
{
	unsigned short x;
	unsigned short y;
	unsigned short u;
	unsigned short v;
};

union _anon0
{
	shBattleFight fight;
	shBattleShot shot;
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

struct FONT_DATA
{
	unsigned int tex_head[12];
	unsigned int clut_head[12];
	unsigned int clut[8];
	unsigned char texbuf[131072];
	unsigned long tex0;
	int fonttype;
	unsigned int rgb_u;
	unsigned int rgb_d;
	unsigned int rgb_s[4];
	unsigned int alpha;
	unsigned int alpha_base;
	unsigned int flag;
	unsigned short x;
	unsigned short y;
	unsigned short wide_w;
	unsigned short wide_h;
	unsigned short right_x;
	unsigned short right_y;
	unsigned short wm;
	unsigned short hm;
	short wait_count;
	short wait_type;
	short page_sound;
	unsigned short code[400];
	short upper[400];
	short lower[400];
	short top;
	short bottom;
	short st_num;
	short w_st_num;
	short prl_count;
	short preload;
	short shadow_max;
	short shadow_now;
	unsigned short sel_xl;
	unsigned short sel_xr;
	unsigned short sel_yu[4];
	unsigned short sel_yd[4];
	short sel_max;
	short sel_now;
	unsigned short mes_v[64][10];
	unsigned short* mes_str_now;
	unsigned short* mes_str;
	unsigned short* prl_str;
	FONT_STREAM_DATA* stream;
	WFONT_STREAM_DATA* w_stream;
	MFONT_STREAM_DATA* m_stream;
	unsigned short stream_max;
	unsigned short w_stream_max;
	unsigned short m_stream_max;
	unsigned short m_code[256];
	short m_upper[256];
	short m_lower[256];
	short m_top;
	short m_bottom;
	short m_st_num;
	int m_base_x;
	int m_base_y;
	int m_base_z;
	unsigned int m_rgba;
	int m_sx;
	int m_sy;
	int m_w;
	int m_h;
	int m_x;
	int m_y;
	float bar_blink;
	unsigned long* pCur;
	int base_x;
	int base_y;
	int base_z;
};

shAttackInfo sh2_attack_list[66];
unsigned char human_skelton[14];
unsigned char enemy_skelton[14];
unsigned char obj_outdoor_skelton[20];
unsigned char obj_anime_skelton[69];
unsigned char obj_stay_skelton[97];
<unknown fundamental type (0xa510)> FjDebugEnvData[4];
SPACK_DATA spack;
sh2gfw_Effect_Man FjFontTexMan;
sh2gfw_ALLTEXSYNC_MAN AllTexSync_Man;
FONT_DATA font;
Playing_Info playing;

void fjInitAll();
void fjInitFontTexture();
void fjMoveEffect();
void fjDrawExec();
void fjFontDrawExec();
void fjFontDrawExecVif1();
int fjAssert_(char* file, int line, char* str);

// 
// Start address: 0x1cd360
void fjInitAll()
{
	// Line 62, Address: 0x1cd360, Func Offset: 0
	// Line 63, Address: 0x1cd368, Func Offset: 0x8
	// Line 64, Address: 0x1cd370, Func Offset: 0x10
	// Line 65, Address: 0x1cd378, Func Offset: 0x18
	// Line 66, Address: 0x1cd380, Func Offset: 0x20
	// Line 88, Address: 0x1cd388, Func Offset: 0x28
	// Line 89, Address: 0x1cd398, Func Offset: 0x38
	// Line 90, Address: 0x1cd3ac, Func Offset: 0x4c
	// Line 91, Address: 0x1cd3e4, Func Offset: 0x84
	// Line 92, Address: 0x1cd424, Func Offset: 0xc4
	// Line 93, Address: 0x1cd46c, Func Offset: 0x10c
	// Line 94, Address: 0x1cd474, Func Offset: 0x114
	// Line 95, Address: 0x1cd47c, Func Offset: 0x11c
	// Line 96, Address: 0x1cd490, Func Offset: 0x130
	// Func End, Address: 0x1cd4a0, Func Offset: 0x140
}

// 
// Start address: 0x1cd4a0
void fjInitFontTexture()
{
	sh2gfw_CLUTS_HEAD* pCH;
	sh2gfw_TEX_HEAD* pTH;
	// Line 100, Address: 0x1cd4a0, Func Offset: 0
	// Line 104, Address: 0x1cd4b0, Func Offset: 0x10
	// Line 105, Address: 0x1cd4b8, Func Offset: 0x18
	// Line 106, Address: 0x1cd4c0, Func Offset: 0x20
	// Line 107, Address: 0x1cd4cc, Func Offset: 0x2c
	// Line 108, Address: 0x1cd4d4, Func Offset: 0x34
	// Line 109, Address: 0x1cd4d8, Func Offset: 0x38
	// Line 110, Address: 0x1cd4e0, Func Offset: 0x40
	// Line 111, Address: 0x1cd4e8, Func Offset: 0x48
	// Line 112, Address: 0x1cd4f0, Func Offset: 0x50
	// Line 113, Address: 0x1cd4f4, Func Offset: 0x54
	// Line 114, Address: 0x1cd4f8, Func Offset: 0x58
	// Line 115, Address: 0x1cd500, Func Offset: 0x60
	// Line 116, Address: 0x1cd504, Func Offset: 0x64
	// Line 117, Address: 0x1cd50c, Func Offset: 0x6c
	// Line 118, Address: 0x1cd514, Func Offset: 0x74
	// Line 119, Address: 0x1cd51c, Func Offset: 0x7c
	// Line 120, Address: 0x1cd524, Func Offset: 0x84
	// Line 121, Address: 0x1cd528, Func Offset: 0x88
	// Line 122, Address: 0x1cd53c, Func Offset: 0x9c
	// Line 124, Address: 0x1cd544, Func Offset: 0xa4
	// Line 126, Address: 0x1cd570, Func Offset: 0xd0
	// Line 127, Address: 0x1cd57c, Func Offset: 0xdc
	// Func End, Address: 0x1cd594, Func Offset: 0xf4
}

// 
// Start address: 0x1cd5a0
void fjMoveEffect()
{
	// Line 137, Address: 0x1cd5a0, Func Offset: 0
	// Line 139, Address: 0x1cd5a8, Func Offset: 0x8
	// Line 140, Address: 0x1cd5b4, Func Offset: 0x14
	// Func End, Address: 0x1cd5c4, Func Offset: 0x24
}

// 
// Start address: 0x1cd5d0
void fjDrawExec()
{
	// Line 144, Address: 0x1cd5d0, Func Offset: 0
	// Line 146, Address: 0x1cd5d8, Func Offset: 0x8
	// Line 149, Address: 0x1cd5e0, Func Offset: 0x10
	// Line 151, Address: 0x1cd5f0, Func Offset: 0x20
	// Line 152, Address: 0x1cd620, Func Offset: 0x50
	// Line 154, Address: 0x1cd64c, Func Offset: 0x7c
	// Line 186, Address: 0x1cd654, Func Offset: 0x84
	// Line 189, Address: 0x1cd670, Func Offset: 0xa0
	// Func End, Address: 0x1cd680, Func Offset: 0xb0
}

// 
// Start address: 0x1cd680
void fjFontDrawExec()
{
	void* adr2;
	void* adr1;
	// Line 193, Address: 0x1cd680, Func Offset: 0
	// Line 196, Address: 0x1cd690, Func Offset: 0x10
	// Line 198, Address: 0x1cd6b4, Func Offset: 0x34
	// Line 202, Address: 0x1cd6d8, Func Offset: 0x58
	// Line 203, Address: 0x1cd6e4, Func Offset: 0x64
	// Line 205, Address: 0x1cd6f0, Func Offset: 0x70
	// Line 207, Address: 0x1cd700, Func Offset: 0x80
	// Line 208, Address: 0x1cd70c, Func Offset: 0x8c
	// Line 210, Address: 0x1cd718, Func Offset: 0x98
	// Line 212, Address: 0x1cd728, Func Offset: 0xa8
	// Line 213, Address: 0x1cd73c, Func Offset: 0xbc
	// Func End, Address: 0x1cd754, Func Offset: 0xd4
}

// 
// Start address: 0x1cd760
void fjFontDrawExecVif1()
{
	void* adr2;
	void* adr1;
	// Line 217, Address: 0x1cd760, Func Offset: 0
	// Line 220, Address: 0x1cd770, Func Offset: 0x10
	// Line 223, Address: 0x1cd794, Func Offset: 0x34
	// Line 224, Address: 0x1cd7a0, Func Offset: 0x40
	// Line 226, Address: 0x1cd7ac, Func Offset: 0x4c
	// Line 227, Address: 0x1cd7b8, Func Offset: 0x58
	// Line 229, Address: 0x1cd7c4, Func Offset: 0x64
	// Line 230, Address: 0x1cd7d8, Func Offset: 0x78
	// Func End, Address: 0x1cd7f0, Func Offset: 0x90
}

// 
// Start address: 0x1cd7f0
int fjAssert_(char* file, int line, char* str)
{
	// Line 1087, Address: 0x1cd7f0, Func Offset: 0
	// Line 1088, Address: 0x1cd800, Func Offset: 0x10
	// Line 1090, Address: 0x1cd818, Func Offset: 0x28
	// Line 1091, Address: 0x1cd81c, Func Offset: 0x2c
	// Line 1092, Address: 0x1cd820, Func Offset: 0x30
	// Func End, Address: 0x1cd830, Func Offset: 0x40
}

