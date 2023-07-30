typedef struct _EventCtrlLink;
typedef struct sgIKHandle;
typedef struct sgBone;
typedef struct _anon0;
typedef enum GameItem : unsigned char;
typedef enum _enum_0 : unsigned char;
typedef struct _anon1;
typedef struct _EventHitWork;
typedef struct _EventDriver;
typedef enum _enum_1 : unsigned char;
typedef struct sfObj;
typedef struct _Hr3ldkAnotherData;
typedef struct sgAnime;
typedef struct sfCharacter;
typedef struct _EventHitHandler;
typedef union _anon2;
typedef enum sgIKSolveResult : unsigned char;
typedef struct sgSVModel;
typedef struct EventFlag;

typedef void(*type_2)(_anon1*, int, int, float*);
typedef void(*type_4)(sgAnime*, int);
typedef void(*type_7)(sfObj*);
typedef void(*type_13)(sfObj*);
typedef int(*type_16)(sfObj*);
typedef int(*type_17)(sfObj*);
typedef int(*type_19)(sfObj*);
typedef int(*type_21)(sfObj*);
typedef int(*type_23)(sfObj*);
typedef sgIKSolveResult(*type_24)();

typedef float type_0[4][4];
typedef float type_1[4];
typedef void* type_3[4];
typedef unsigned char type_5[4];
typedef _anon2 type_6[256];
typedef float type_8[4];
typedef short type_9[2];
typedef unsigned short type_10[2];
typedef char type_11[4];
typedef unsigned char type_12[4];
typedef float type_14[1];
typedef int type_15[1];
typedef float type_18[4];
typedef float type_20[4][2];
typedef unsigned char type_22[320];
typedef _anon2 type_25[4];

struct _EventCtrlLink
{
	_EventCtrlLink* prev;
	_EventCtrlLink* next;
	void* evctrl;
};

struct sgIKHandle
{
	float acceleration[4][2];
	float damping_ratio;
	sgBone* bone;
	sgBone* start;
	sgBone* end;
	sgIKSolveResult(*solver)();
	sgIKSolveResult solve_result;
	float reach_constrain;
	float close_constrain;
	sgIKHandle* next;
};

struct sgBone
{
	float rot[4];
	float trans[4];
	float scale[4];
	float abs_rot[4];
	float abs_trans[4];
	sgBone* parent;
	sgBone* child_list;
	sgBone* child_sibling;
	unsigned short last;
	unsigned short flag;
	float partly_blend_rate;
};

struct _anon0
{
	void* model;
	void* texture;
	void* texture_global;
	float matrices[4][4];
	float* weights;
	float tex_crops[4];
	void(*texture_load_func)(_anon1*, int, int, float*);
	int equip_flag;
};

enum GameItem : unsigned char
{
	ITEM_EMPTY,
	ITEM_SMALL_BULLET,
	ITEM_LARGE_BULLET,
	ITEM_SILVER_BULLET,
	ITEM_HOLY_CANDLE,
	ITEM_FINISHER,
	ITEM_RED_CHRISM,
	ITEM_LOADS_PRAYER,
	ITEM_SAINT_MEDALLION,
	ITEM_HEALTH_DRINK,
	ITEM_AMPLE,
	ITEM_FIRST_AID_KIT,
	ITEM_HANDGUN = 0x10,
	ITEM_REVOLVER,
	ITEM_IRON_PIPE,
	ITEM_CUTTER_KNIFE,
	ITEM_METAL_BAT,
	ITEM_DRIVER,
	ITEM_DRIVER_BROKEN,
	ITEM_SPOON,
	ITEM_SPOON_BROKEN,
	ITEM_MID_MASHY,
	ITEM_MID_MASHY_BROKEN,
	ITEM_MASHY_IRON,
	ITEM_MASHY_IRON_BROKEN,
	ITEM_MASHY,
	ITEM_MASHY_BROKEN,
	ITEM_SPADE_MASHY,
	ITEM_SPADE_MASHY_BROKEN,
	ITEM_MASHY_NIBLICK,
	ITEM_MASHY_NIBLICK_BROKEN,
	ITEM_PITCHER,
	ITEM_PITCHER_BROKEN,
	ITEM_NIBLICK,
	ITEM_NIBLICK_BROKEN,
	ITEM_PITCHING_WEDGE,
	ITEM_PITCHING_WEDGE_BROKEN,
	ITEM_SAND_WEDGE,
	ITEM_SAND_WEDGE_BROKEN,
	ITEM_PUTTER,
	ITEM_PUTTER_BROKEN,
	ITEM_WINE_BOTTLE,
	ITEM_WINE_BOTTLE_BROKEN,
	ITEM_SCOOP,
	ITEM_RUSTY_HATCHET,
	ITEM_PICK_OF_DESPAIR,
	ITEM_STUN_GUN,
	ITEM_SPRAY,
	ITEM_CLUB,
	ITEM_CHAIN_SAW,
	ITEM_KEY_OF_LIBERATION = 0x3c,
	ITEM_COIN_OF_LYNCHSTREETLINE,
	ITEM_CHOCOLATE_MILK,
	ITEM_SHOVEL_WITH_BLOOD_CHARACTER,
	ITEM_RUSTY_BLOODY_KEY,
	ITEM_RED_PAPER_1,
	ITEM_RED_PAPER_2,
	ITEM_RED_PAPER_3,
	ITEM_RED_PAPER_4,
	ITEM_RED_PAPER_5,
	ITEM_RED_PAPER_6,
	ITEM_TORN_RED_PAPER_1,
	ITEM_TORN_RED_PAPER_2,
	ITEM_TORN_RED_PAPER_MISS,
	ITEM_KEY_OF_SUPERINTENDANT,
	ITEM_KEY_ROCKER106,
	ITEM_CASSETTE_TAPE,
	ITEM_KEY_WITH_DOLL,
	ITEM_CHARM_OF_SUCCUBUS,
	ITEM_KEY_OF_SICKROOM,
	ITEM_RED_ENVELOPE,
	ITEM_SMALL_KEY,
	ITEM_CYNTHIAS_PASS,
	ITEM_OLD_DOLL,
	ITEM_MASTER_KEY_TO_APART,
	ITEM_ARMORIAL_MEDAL,
	ITEM_PICK_OF_HOPE,
	ITEM_NAVEL_STRING,
	ITEM_ALESSAS_SPEAR,
	ITEM_DIRTY_ENVELOPE,
	ITEM_TOY_KEY,
	ITEM_1SS_COIN_DIRTY,
	ITEM_1SS_COIN,
	ITEM_SB24_KEY,
	ITEM_HANDLE,
	ITEM_DOLLS_HEAD,
	ITEM_DOLLS_RIGHT_ARM,
	ITEM_DOLLS_LEFT_ARM,
	ITEM_DOLLS_RIGHT_LEG,
	ITEM_DOLLS_LEFT_LEG,
	ITEM_UNDERGROUND_KEY,
	ITEM_PRISONERS_SHIRT,
	ITEM_BILLIARD_BALL,
	ITEM_STUFFED_CAT,
	ITEM_VOLLEYBALL,
	ITEM_SMALL_CANDLE_PACKED,
	ITEM_SMALL_CANDLE,
	ITEM_GHOSTS_KEY,
	ITEM_DIRTY_STONE1,
	ITEM_DIRTY_STONE2,
	ITEM_DIRTY_STONE3,
	ITEM_DIRTY_STONE4,
	ITEM_DIRTY_STONE5,
	ITEM_CHANNELING_STONE1,
	ITEM_CHANNELING_STONE2,
	ITEM_CHANNELING_STONE3,
	ITEM_CHANNELING_STONE4,
	ITEM_CHANNELING_STONE5,
	ITEM_PLATE_OF_TEMPTATION,
	ITEM_PLATE_OF_ORIGIN,
	ITEM_PLATE_OF_SURVEILLANCE,
	ITEM_PLATE_OF_CHAOS,
	ITEM_ALBERT_SPORTS_KEY,
	ITEM_UNIFORM,
	ITEM_MZ_UPPER_KEY,
	ITEM_TRAILER_KEY,
	ITEM_HANDBAG = 0x80,
	ITEM_SUBMACHINEGUN,
	ITEM_BLACKJACK,
	ITEM_HORSEWHIP,
	ITEM_CHAIN,
	ITEM_FIRST_LETTER = 0x88,
	ITEM_SCRAP_OF_BOOK,
	ITEM_RED_DIARY_0408,
	ITEM_RED_DIARY_0404,
	ITEM_SCRAP_OF_BIBLE,
	ITEM_DIARY_OF_NEIGHBOUR,
	ITEM_SUPERINTENDANTS_MEMO,
	ITEM_SUPERINTENDANTS_DIARY,
	ITEM_RED_DIARY_0502,
	ITEM_RED_DIARY_0514,
	ITEM_RED_DIARY_0520,
	ITEM_SCRAP_OF_RED_DIARY,
	ITEM_SCRAP_OF_RED_DIARY_2,
	ITEM_MIKES_LOVELETTER,
	ITEM_RED_DIARY_0713,
	ITEM_RED_DIARY_0720,
	ITEM_HOLY_MOTHER_21_SACRAMENTS,
	ITEM_RED_BOOK,
	ITEM_PICTURE_BOOK,
	ITEM_RED_DIARY_0611,
	ITEM_RED_DIARY_0614,
	ITEM_RED_DIARY_SOMETIMEAGO,
	ITEM_RED_DIARY_0717,
	ITEM_RED_DIARY_0718,
	ITEM_RED_DIARY_0723,
	ITEM_RED_DIARY_0725,
	ITEM_RED_DIARY_0728,
	ITEM_RED_DIARY_0729,
	ITEM_RED_DIARY_0802,
	ITEM_RED_DIARY_0803,
	ITEM_RED_DIARY_0804,
	ITEM_RED_DIARY_0805,
	ITEM_RED_DIARY_0807,
	ITEM_SUPERINTENDANTS_DIARY_COUT,
	ITEM_JOSEPHS_LETTER,
	ITEM_JOSEPHS_REPORT,
	ITEM_NURSE_MEMO,
	ITEM_CHILD_LETTER,
	ITEM_BLOODY_SHIRT,
	ITEM_BARTENDERS_MEMO,
	ITEM_BARTENDERS_MEMO2,
	ITEM_MEMOIRS,
	ITEM_JASPERS_MEMO,
	ITEM_BURNED_OUT_MEMO,
	ITEM_DOLLS_TEXT,
	ITEM_EXPLORERS_MEMO,
	ITEM_SENTINELS_DIARY,
	ITEM_PLATE_ABOUT_WATERWHEEL,
	ITEM_PRISONERS_DIARY,
	ITEM_REPORT_1F,
	ITEM_REPORT_2F,
	ITEM_PASSWORD_MEMO,
	ITEM_BRICK = 0xe4,
	ITEM_KILLER_PIPE,
	ITEM_KILLER_GUN1,
	ITEM_KILLER_GUN2,
	ITEM_KIND_MAX
};

enum _enum_0 : unsigned char
{
	HR3LDK_STAT_NONE,
	HR3LDK_STAT_SUBWAY,
	HR3LDK_STAT_SUBWAY_LATER,
	HR3LDK_STAT_FOREST,
	HR3LDK_STAT_FOREST_LATER,
	HR3LDK_STAT_WATER,
	HR3LDK_STAT_WATER_LATER,
	HR3LDK_STAT_BUILDING,
	HR3LDK_STAT_BUILDING_LATER,
	HR3LDK_STAT_HOSPITAL,
	HR3LDK_STAT_HOME,
	HR3LDK_STAT_OLD_3LDK,
	HR3LDK_STAT_PAST_HOME,
	HR3LDK_STAT_UNDER_HOSPITAL,
	HR3LDK_STAT_UNDER_SUBWAY,
	HR3LDK_STAT_UNDER_FOREST,
	HR3LDK_STAT_UNDER_WATER,
	HR3LDK_STAT_UNDER_BUILDING
};

struct _anon1
{
	unsigned long tex0;
	unsigned long clamp;
};

struct _EventHitWork
{
	_EventDriver* evdriver;
	sfObj* obj;
	_EventHitWork* prev;
	_EventHitWork* next;
	float pos[4];
	short setlevel;
	short item_id;
	short item_serial_no;
	float item_quat[4];
	sfCharacter* item_character;
	short is_enforce_item;
	void* enforce_item_work;
};

struct _EventDriver
{
	int evnum;
	int(*trgchk)(sfObj*);
	int(*init)(sfObj*);
	int(*exec)(sfObj*);
	int(*draw)(sfObj*);
	int(*end)(sfObj*);
	unsigned int* file;
	_anon2 val[4];
};

enum _enum_1 : unsigned char
{
	GAME_STAGE_DUMMY,
	GAME_STAGE_3LDK,
	GAME_STAGE_SUBWAY,
	GAME_STAGE_FOREST,
	GAME_STAGE_WATER,
	GAME_STAGE_BUILDING,
	GAME_STAGE_HOME,
	GAME_STAGE_HOSPITAL,
	GAME_STAGE_PAST_HOME,
	GAME_STAGE_LAST,
	GAME_STAGE_TUNNEL,
	GAME_STAGE_SPIRAL,
	GAME_STAGE_TEST,
	GAME_STAGE_MAX
};

struct sfObj
{
	_anon2 fwork[256];
	_anon2* work;
	void(*func)(sfObj*);
	_anon2* work_pt0;
	_anon2* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon2* sys_work;
	_anon2* scene_work;
	_anon2* event_work;
	_anon2* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

struct _Hr3ldkAnotherData
{
	short stage;
	short scene;
};

struct sgAnime
{
	void* play_data[4];
	sgBone* transforms;
	int n_transforms;
	sgIKHandle* ik_handles;
	sgBone* object_space;
	void(*post_func)(sgAnime*, int);
	float* reals;
	int n_reals;
	float vectors[4];
	int n_vectors;
	int current_time;
	int time_add;
	unsigned char play_status[4];
	unsigned short flag;
	unsigned short construct_check;
};

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon0 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
};

struct _EventHitHandler
{
	_EventHitWork* first_evhit;
	_EventHitWork* last_evhit;
	short enforce_itemset;
	_EventHitWork* lastconst_item;
	void* lastconst_enforce_item;
};

union _anon2
{
	int si;
	unsigned int ui;
	void* pt;
	short ss[2];
	unsigned short us[2];
	char sc[4];
	unsigned char uc[4];
	float f;
	float fv[1];
	int iv[1];
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
};

struct EventFlag
{
	unsigned char flag[320];
};

_EventHitHandler evhit_handler;
GameItem active_trigger_item;
EventFlag event_flag;
_Hr3ldkAnotherData hr3ldk_another_data;
int return_from_another_scene;
_enum_1 return_from_another_stage;

int EventIsThereSubtitleDisableInActive();
void EventActiveTriggerItemKeep(GameItem item);
GameItem EventActiveTriggerItem();
void EventWalterKnockdownSetState();
_enum_0 ReturnTo3ldkStatus(_enum_1 stage, int scene, int latter);
_enum_0 EventMiscReturnTo3ldkStatus();
void EventMiscHr3ldkAnotherDataLoad(_Hr3ldkAnotherData* addr);
void EventMiscHr3ldkAnotherDataSave(_Hr3ldkAnotherData* addr);
void EventInitAll();
int EventMiscGetMemoNum();

// 
// Start address: 0x2e2c70
int EventIsThereSubtitleDisableInActive()
{
	_EventCtrlLink* now;
	// Line 60, Address: 0x2e2c70, Func Offset: 0
	// Line 65, Address: 0x2e2c78, Func Offset: 0x8
	// Line 68, Address: 0x2e2c80, Func Offset: 0x10
	// Line 73, Address: 0x2e2ca0, Func Offset: 0x30
	// Line 74, Address: 0x2e2cc0, Func Offset: 0x50
	// Line 76, Address: 0x2e2cc8, Func Offset: 0x58
	// Line 77, Address: 0x2e2ce8, Func Offset: 0x78
	// Line 78, Address: 0x2e2cf0, Func Offset: 0x80
	// Func End, Address: 0x2e2cfc, Func Offset: 0x8c
}

// 
// Start address: 0x2e2d00
void EventActiveTriggerItemKeep(GameItem item)
{
	// Line 114, Address: 0x2e2d00, Func Offset: 0
	// Line 115, Address: 0x2e2d04, Func Offset: 0x4
	// Func End, Address: 0x2e2d0c, Func Offset: 0xc
}

// 
// Start address: 0x2e2d10
GameItem EventActiveTriggerItem()
{
	// Line 125, Address: 0x2e2d10, Func Offset: 0
	// Line 126, Address: 0x2e2d14, Func Offset: 0x4
	// Func End, Address: 0x2e2d1c, Func Offset: 0xc
}

// 
// Start address: 0x2e2d20
void EventWalterKnockdownSetState()
{
	// Line 135, Address: 0x2e2d20, Func Offset: 0
	// Line 136, Address: 0x2e2d30, Func Offset: 0x10
	// Func End, Address: 0x2e2d38, Func Offset: 0x18
}

// 
// Start address: 0x2e2d40
_enum_0 ReturnTo3ldkStatus(_enum_1 stage, int scene, int latter)
{
	_enum_0 ret;
	// Line 159, Address: 0x2e2d40, Func Offset: 0
	// Line 161, Address: 0x2e2d6c, Func Offset: 0x2c
	// Line 162, Address: 0x2e2d70, Func Offset: 0x30
	// Line 164, Address: 0x2e2d78, Func Offset: 0x38
	// Line 168, Address: 0x2e2d80, Func Offset: 0x40
	// Line 172, Address: 0x2e2d88, Func Offset: 0x48
	// Line 174, Address: 0x2e2d90, Func Offset: 0x50
	// Line 178, Address: 0x2e2d98, Func Offset: 0x58
	// Line 182, Address: 0x2e2da0, Func Offset: 0x60
	// Line 184, Address: 0x2e2da8, Func Offset: 0x68
	// Line 188, Address: 0x2e2db0, Func Offset: 0x70
	// Line 192, Address: 0x2e2db8, Func Offset: 0x78
	// Line 194, Address: 0x2e2dc0, Func Offset: 0x80
	// Line 198, Address: 0x2e2dc8, Func Offset: 0x88
	// Line 203, Address: 0x2e2dd0, Func Offset: 0x90
	// Line 208, Address: 0x2e2dd8, Func Offset: 0x98
	// Line 212, Address: 0x2e2de0, Func Offset: 0xa0
	// Line 214, Address: 0x2e2dec, Func Offset: 0xac
	// Line 218, Address: 0x2e2df8, Func Offset: 0xb8
	// Line 222, Address: 0x2e2e00, Func Offset: 0xc0
	// Line 224, Address: 0x2e2e0c, Func Offset: 0xcc
	// Line 225, Address: 0x2e2e18, Func Offset: 0xd8
	// Line 227, Address: 0x2e2e24, Func Offset: 0xe4
	// Line 228, Address: 0x2e2e30, Func Offset: 0xf0
	// Line 230, Address: 0x2e2e3c, Func Offset: 0xfc
	// Line 231, Address: 0x2e2e48, Func Offset: 0x108
	// Line 233, Address: 0x2e2e54, Func Offset: 0x114
	// Line 234, Address: 0x2e2e60, Func Offset: 0x120
	// Line 236, Address: 0x2e2e6c, Func Offset: 0x12c
	// Line 245, Address: 0x2e2e78, Func Offset: 0x138
	// Func End, Address: 0x2e2e80, Func Offset: 0x140
}

// 
// Start address: 0x2e2e80
_enum_0 EventMiscReturnTo3ldkStatus()
{
	_enum_0 ret;
	// Line 255, Address: 0x2e2e80, Func Offset: 0
	// Line 261, Address: 0x2e2e88, Func Offset: 0x8
	// Line 262, Address: 0x2e2e98, Func Offset: 0x18
	// Line 266, Address: 0x2e2ea0, Func Offset: 0x20
	// Line 267, Address: 0x2e2eb4, Func Offset: 0x34
	// Line 268, Address: 0x2e2ec4, Func Offset: 0x44
	// Line 271, Address: 0x2e2ec8, Func Offset: 0x48
	// Line 273, Address: 0x2e2ee8, Func Offset: 0x68
	// Func End, Address: 0x2e2ef4, Func Offset: 0x74
}

// 
// Start address: 0x2e2f00
void EventMiscHr3ldkAnotherDataLoad(_Hr3ldkAnotherData* addr)
{
	// Line 284, Address: 0x2e2f04, Func Offset: 0x4
	// Func End, Address: 0x2e2f14, Func Offset: 0x14
}

// 
// Start address: 0x2e2f20
void EventMiscHr3ldkAnotherDataSave(_Hr3ldkAnotherData* addr)
{
	// Line 296, Address: 0x2e2f20, Func Offset: 0
	// Func End, Address: 0x2e2f30, Func Offset: 0x10
}

// 
// Start address: 0x2e2f30
void EventInitAll()
{
	// Line 305, Address: 0x2e2f30, Func Offset: 0
	// Line 306, Address: 0x2e2f38, Func Offset: 0x8
	// Line 307, Address: 0x2e2f40, Func Offset: 0x10
	// Line 308, Address: 0x2e2f48, Func Offset: 0x18
	// Line 309, Address: 0x2e2f50, Func Offset: 0x20
	// Line 310, Address: 0x2e2f58, Func Offset: 0x28
	// Func End, Address: 0x2e2f64, Func Offset: 0x34
}

// 
// Start address: 0x2e2f70
int EventMiscGetMemoNum()
{
	int i;
	int cnt;
	// Line 321, Address: 0x2e2f70, Func Offset: 0
	// Line 322, Address: 0x2e2f74, Func Offset: 0x4
	// Line 323, Address: 0x2e2f78, Func Offset: 0x8
	// Line 322, Address: 0x2e2f84, Func Offset: 0x14
	// Line 323, Address: 0x2e2f88, Func Offset: 0x18
	// Line 324, Address: 0x2e2fb4, Func Offset: 0x44
	// Line 326, Address: 0x2e2fb8, Func Offset: 0x48
	// Line 329, Address: 0x2e2fc8, Func Offset: 0x58
	// Func End, Address: 0x2e2fd0, Func Offset: 0x60
}

