typedef struct Stage_Data;
typedef struct Event_List;
typedef struct Item_List;
typedef struct Model_List;
typedef struct Enemy_List;
typedef struct _AnimeInfo;
typedef struct shAttackInfo;
typedef struct _anon0;
typedef struct _SH2_SYS;
typedef union _anon1;
typedef union fsFile;
typedef struct fsCdFile;
typedef struct Playing_Info;
typedef struct fsMgcFile;
typedef struct fsMgfFile;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct MariaAppearPoint;
typedef struct _anon2;
typedef struct sh2gfw_TexMAN;
typedef struct sh2gfw_ALLTEXSYNC_MAN;
typedef union Q_WORDDATA;
typedef struct shBattleFight;
typedef union fsFileIndex;
typedef struct _anon3;
typedef struct shBattleShot;

typedef int(*type_1)();
typedef void(*type_4)();

typedef unsigned int type_0[9];
typedef Q_WORDDATA type_2[48];
typedef sh2gfw_TexMAN type_3[96];
typedef float type_5[4];
typedef unsigned int type_6[8];
typedef char type_7[0];
typedef float type_8[4];
typedef shAttackInfo type_9[66];
typedef float type_10[7];
typedef unsigned int type_11[7];
typedef unsigned int type_12[4];
typedef unsigned short type_13[8];
typedef MariaAppearPoint type_14[91];
typedef fsFileIndex type_15[1];
typedef float type_16[4];
typedef unsigned char type_17[16];
typedef int type_18[4];
typedef short type_19[8];
typedef char type_20[16];
typedef unsigned long type_21[2];

struct Stage_Data
{
	Event_List* ev_list;
	unsigned char* ev_pos;
	int(*ev_prog)();
	Item_List* gi_list;
	Model_List* mdl_list;
	Enemy_List* en_list;
	void(*stage_init)();
	void(*room_init)();
	void(*alltime_func)();
	int glb_crd;
	int pc_model;
	_AnimeInfo* stg_anim_info;
	int(*bgm_control)();
	_anon0* gfw_func;
	int(*chara_data_clear)();
	void(*sound_call_after_load)();
	int reserve_11;
};

struct Event_List
{
	int flag;
	int cond;
	int rslt0;
	int rslt1;
};

struct Item_List
{
	float pos_x;
	float pos_z;
	unsigned short pos_y;
	unsigned short rot_y;
	unsigned int st;
};

struct Model_List
{
	short kind;
	short id;
	short flag_off;
	short flag_on;
	float pos[4];
	float rot[4];
};

struct Enemy_List
{
	short kind;
	short id;
	int pos_x;
	int pos_z;
	short pos_y;
	short rot_y;
	short status;
	unsigned short condition;
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
	void(*SpecDraw)();
	void(*PreDraw)();
	void(*PostDraw)();
	void(*CharaDraw_Hook)();
};

struct _SH2_SYS
{
	unsigned int step[8];
	unsigned int pre_playable;
	int main_status;
	unsigned int soft_reset;
	unsigned int frame_cnt;
};

union _anon1
{
	shBattleFight fight;
	shBattleShot shot;
};

union fsFile
{
	_anon2 check;
	<unknown fundamental type (0xa510)> pack;
	fsCdFile cd;
	fsHdFile hd;
	fsMgcFile mgc;
	fsMgfFile mgf;
	fsMgpFile mgp;
};

struct fsCdFile
{
	struct
	{
		int type : 8;
		int number : 24;
	};
	char* name;
	int lsn;
	int size;
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

struct fsMgcFile
{
	struct
	{
		int type : 8;
		int padding : 24;
	};
	fsFile* parent;
	char* start;
	char* end;
};

struct fsMgfFile
{
	struct
	{
		int type : 8;
		int padding : 24;
	};
	fsFile* parent;
	int offset;
	int size;
};

struct fsHdFile
{
	struct
	{
		int type : 8;
		int padding : 24;
	};
	char* name;
	int offset;
	int size;
};

struct fsMgpFile
{
	struct
	{
		int type : 8;
		int padding : 24;
	};
	fsFile* file;
	fsMgcFile* start;
	fsMgcFile* end;
};

struct MariaAppearPoint
{
	short room_name_prev;
	short room_name_now;
	int active_type;
	float pos[4];
};

struct _anon2
{
	struct
	{
		int type : 8;
		int number : 24;
	};
	int pad0;
	int pad1;
	int pad2;
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

union fsFileIndex
{
	_anon3 index;
	unsigned long pack;
};

struct _anon3
{
	fsFile* fp;
	char* name;
};

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

shAttackInfo sh2_attack_list[66];
MariaAppearPoint maria_apeear_point_list[91];
unsigned int pmaria_sub_status_flag[9];
char cursor_adr[0];
fsFileIndex data_pic_etc_carsol_tex[1];
sh2gfw_ALLTEXSYNC_MAN AllTexSync_Man;
_SH2_SYS Sh2sys;
int demo_number;
Playing_Info playing;
Stage_Data* stage;

void systemColdInit();
int systemHotInit();
void PlayingInfoColdInit();
void PlayingInfoHotInit();

// 
// Start address: 0x20a260
void systemColdInit()
{
	int sid;
	int fid;
	// Line 53, Address: 0x20a260, Func Offset: 0
	// Line 57, Address: 0x20a26c, Func Offset: 0xc
	// Line 59, Address: 0x20a278, Func Offset: 0x18
	// Line 62, Address: 0x20a280, Func Offset: 0x20
	// Line 65, Address: 0x20a288, Func Offset: 0x28
	// Line 69, Address: 0x20a290, Func Offset: 0x30
	// Line 71, Address: 0x20a298, Func Offset: 0x38
	// Line 74, Address: 0x20a2a8, Func Offset: 0x48
	// Line 80, Address: 0x20a2b4, Func Offset: 0x54
	// Line 89, Address: 0x20a2bc, Func Offset: 0x5c
	// Line 90, Address: 0x20a2c4, Func Offset: 0x64
	// Line 92, Address: 0x20a2cc, Func Offset: 0x6c
	// Line 93, Address: 0x20a2d8, Func Offset: 0x78
	// Line 94, Address: 0x20a2e0, Func Offset: 0x80
	// Line 95, Address: 0x20a2e8, Func Offset: 0x88
	// Line 96, Address: 0x20a2f0, Func Offset: 0x90
	// Line 98, Address: 0x20a2fc, Func Offset: 0x9c
	// Line 100, Address: 0x20a310, Func Offset: 0xb0
	// Line 103, Address: 0x20a320, Func Offset: 0xc0
	// Line 105, Address: 0x20a328, Func Offset: 0xc8
	// Line 107, Address: 0x20a330, Func Offset: 0xd0
	// Line 114, Address: 0x20a338, Func Offset: 0xd8
	// Line 116, Address: 0x20a350, Func Offset: 0xf0
	// Line 121, Address: 0x20a358, Func Offset: 0xf8
	// Line 123, Address: 0x20a36c, Func Offset: 0x10c
	// Line 124, Address: 0x20a378, Func Offset: 0x118
	// Line 127, Address: 0x20a380, Func Offset: 0x120
	// Line 128, Address: 0x20a388, Func Offset: 0x128
	// Func End, Address: 0x20a39c, Func Offset: 0x13c
}

// 
// Start address: 0x20a3a0
int systemHotInit()
{
	int next;
	int wait;
	int ret;
	int step;
	int count;
	// Line 146, Address: 0x20a3a0, Func Offset: 0
	// Line 147, Address: 0x20a3b4, Func Offset: 0x14
	// Line 148, Address: 0x20a3bc, Func Offset: 0x1c
	// Line 152, Address: 0x20a3c0, Func Offset: 0x20
	// Line 153, Address: 0x20a3c4, Func Offset: 0x24
	// Line 154, Address: 0x20a3dc, Func Offset: 0x3c
	// Line 155, Address: 0x20a3e4, Func Offset: 0x44
	// Line 156, Address: 0x20a3ec, Func Offset: 0x4c
	// Line 157, Address: 0x20a3fc, Func Offset: 0x5c
	// Line 158, Address: 0x20a418, Func Offset: 0x78
	// Line 159, Address: 0x20a420, Func Offset: 0x80
	// Line 161, Address: 0x20a428, Func Offset: 0x88
	// Line 165, Address: 0x20a444, Func Offset: 0xa4
	// Line 167, Address: 0x20a46c, Func Offset: 0xcc
	// Line 170, Address: 0x20a478, Func Offset: 0xd8
	// Line 171, Address: 0x20a480, Func Offset: 0xe0
	// Line 172, Address: 0x20a488, Func Offset: 0xe8
	// Line 173, Address: 0x20a490, Func Offset: 0xf0
	// Line 175, Address: 0x20a498, Func Offset: 0xf8
	// Line 176, Address: 0x20a4a0, Func Offset: 0x100
	// Line 182, Address: 0x20a4a8, Func Offset: 0x108
	// Line 183, Address: 0x20a4b0, Func Offset: 0x110
	// Line 186, Address: 0x20a4b8, Func Offset: 0x118
	// Line 187, Address: 0x20a4c0, Func Offset: 0x120
	// Line 188, Address: 0x20a4c8, Func Offset: 0x128
	// Line 189, Address: 0x20a4d0, Func Offset: 0x130
	// Line 193, Address: 0x20a4d8, Func Offset: 0x138
	// Line 194, Address: 0x20a4e0, Func Offset: 0x140
	// Line 196, Address: 0x20a4e8, Func Offset: 0x148
	// Line 197, Address: 0x20a4f0, Func Offset: 0x150
	// Line 199, Address: 0x20a4f8, Func Offset: 0x158
	// Line 200, Address: 0x20a500, Func Offset: 0x160
	// Line 202, Address: 0x20a508, Func Offset: 0x168
	// Line 203, Address: 0x20a510, Func Offset: 0x170
	// Line 206, Address: 0x20a518, Func Offset: 0x178
	// Line 207, Address: 0x20a520, Func Offset: 0x180
	// Line 208, Address: 0x20a528, Func Offset: 0x188
	// Line 209, Address: 0x20a530, Func Offset: 0x190
	// Line 210, Address: 0x20a538, Func Offset: 0x198
	// Line 213, Address: 0x20a540, Func Offset: 0x1a0
	// Line 214, Address: 0x20a548, Func Offset: 0x1a8
	// Line 216, Address: 0x20a550, Func Offset: 0x1b0
	// Line 217, Address: 0x20a558, Func Offset: 0x1b8
	// Line 219, Address: 0x20a560, Func Offset: 0x1c0
	// Line 220, Address: 0x20a568, Func Offset: 0x1c8
	// Line 221, Address: 0x20a570, Func Offset: 0x1d0
	// Line 222, Address: 0x20a578, Func Offset: 0x1d8
	// Line 224, Address: 0x20a580, Func Offset: 0x1e0
	// Line 225, Address: 0x20a588, Func Offset: 0x1e8
	// Line 226, Address: 0x20a5a0, Func Offset: 0x200
	// Line 228, Address: 0x20a5a8, Func Offset: 0x208
	// Line 229, Address: 0x20a5b0, Func Offset: 0x210
	// Line 232, Address: 0x20a5b8, Func Offset: 0x218
	// Line 235, Address: 0x20a5e8, Func Offset: 0x248
	// Line 236, Address: 0x20a5f0, Func Offset: 0x250
	// Line 238, Address: 0x20a634, Func Offset: 0x294
	// Line 239, Address: 0x20a644, Func Offset: 0x2a4
	// Line 240, Address: 0x20a64c, Func Offset: 0x2ac
	// Line 241, Address: 0x20a654, Func Offset: 0x2b4
	// Line 242, Address: 0x20a658, Func Offset: 0x2b8
	// Func End, Address: 0x20a674, Func Offset: 0x2d4
}

// 
// Start address: 0x20a680
void PlayingInfoColdInit()
{
	// Line 250, Address: 0x20a680, Func Offset: 0
	// Line 251, Address: 0x20a688, Func Offset: 0x8
	// Line 252, Address: 0x20a690, Func Offset: 0x10
	// Line 253, Address: 0x20a698, Func Offset: 0x18
	// Line 255, Address: 0x20a6a0, Func Offset: 0x20
	// Line 256, Address: 0x20a6a8, Func Offset: 0x28
	// Line 259, Address: 0x20a6b0, Func Offset: 0x30
	// Line 260, Address: 0x20a6bc, Func Offset: 0x3c
	// Line 262, Address: 0x20a6c8, Func Offset: 0x48
	// Line 264, Address: 0x20a6d0, Func Offset: 0x50
	// Line 265, Address: 0x20a6dc, Func Offset: 0x5c
	// Line 266, Address: 0x20a6e4, Func Offset: 0x64
	// Line 267, Address: 0x20a6ec, Func Offset: 0x6c
	// Line 268, Address: 0x20a6f4, Func Offset: 0x74
	// Line 269, Address: 0x20a6fc, Func Offset: 0x7c
	// Line 270, Address: 0x20a704, Func Offset: 0x84
	// Line 271, Address: 0x20a710, Func Offset: 0x90
	// Line 272, Address: 0x20a718, Func Offset: 0x98
	// Line 273, Address: 0x20a720, Func Offset: 0xa0
	// Line 274, Address: 0x20a728, Func Offset: 0xa8
	// Line 275, Address: 0x20a730, Func Offset: 0xb0
	// Line 276, Address: 0x20a738, Func Offset: 0xb8
	// Line 277, Address: 0x20a740, Func Offset: 0xc0
	// Line 278, Address: 0x20a748, Func Offset: 0xc8
	// Line 279, Address: 0x20a750, Func Offset: 0xd0
	// Line 285, Address: 0x20a758, Func Offset: 0xd8
	// Line 286, Address: 0x20a760, Func Offset: 0xe0
	// Line 289, Address: 0x20a768, Func Offset: 0xe8
	// Line 291, Address: 0x20a770, Func Offset: 0xf0
	// Func End, Address: 0x20a780, Func Offset: 0x100
}

// 
// Start address: 0x20a780
void PlayingInfoHotInit()
{
	int i;
	// Line 297, Address: 0x20a780, Func Offset: 0
	// Line 299, Address: 0x20a788, Func Offset: 0x8
	// Line 300, Address: 0x20a790, Func Offset: 0x10
	// Line 301, Address: 0x20a798, Func Offset: 0x18
	// Line 302, Address: 0x20a7a0, Func Offset: 0x20
	// Line 303, Address: 0x20a7a8, Func Offset: 0x28
	// Line 304, Address: 0x20a7b0, Func Offset: 0x30
	// Line 305, Address: 0x20a7b8, Func Offset: 0x38
	// Line 306, Address: 0x20a7c0, Func Offset: 0x40
	// Line 307, Address: 0x20a7c8, Func Offset: 0x48
	// Line 308, Address: 0x20a7d0, Func Offset: 0x50
	// Line 309, Address: 0x20a7d8, Func Offset: 0x58
	// Line 310, Address: 0x20a7e0, Func Offset: 0x60
	// Line 311, Address: 0x20a7ec, Func Offset: 0x6c
	// Line 312, Address: 0x20a7f4, Func Offset: 0x74
	// Line 313, Address: 0x20a7fc, Func Offset: 0x7c
	// Line 314, Address: 0x20a808, Func Offset: 0x88
	// Line 315, Address: 0x20a81c, Func Offset: 0x9c
	// Line 316, Address: 0x20a82c, Func Offset: 0xac
	// Line 318, Address: 0x20a83c, Func Offset: 0xbc
	// Func End, Address: 0x20a844, Func Offset: 0xc4
}

