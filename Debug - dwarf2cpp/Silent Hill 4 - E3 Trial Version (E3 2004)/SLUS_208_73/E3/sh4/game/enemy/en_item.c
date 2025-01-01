typedef struct _anon0;
typedef struct EnemyRobbedItemData;
typedef struct EnemyLostItemData;
typedef struct EnemyItemData;
typedef struct sfObj;
typedef struct sgAnime;
typedef struct _EventHitWork;
typedef struct sgBone;
typedef struct sgIKHandle;
typedef struct EnemyItemWork;
typedef struct EnemyMeasureResult;
typedef struct sfCharacter;
typedef struct _anon1;
typedef enum GameItem : unsigned char;
typedef struct _EventDriver;
typedef union _anon2;
typedef struct _anon3;
typedef enum sgIKSolveResult : unsigned char;
typedef struct sgSVModel;
typedef union _anon4;
typedef struct _anon5;

typedef void(*type_1)(_anon0*, int, int, float*);
typedef void(*type_6)(sgAnime*, int);
typedef void(*type_7)(sfObj*);
typedef void(*type_11)(sfObj*);
typedef void(*type_18)(sfObj*);
typedef int(*type_21)(sfObj*);
typedef int(*type_24)(sfObj*);
typedef int(*type_27)(sfObj*);
typedef int(*type_28)(sfObj*);
typedef sgIKSolveResult(*type_29)();
typedef int(*type_30)(sfObj*);

typedef float type_0[4];
typedef void* type_2[4];
typedef EnemyRobbedItemData type_3[32];
typedef EnemyLostItemData type_4[64];
typedef int type_5[64];
typedef unsigned char type_8[4];
typedef EnemyRobbedItemData* type_9[32];
typedef _anon2 type_10[256];
typedef short type_12[2];
typedef unsigned short type_13[2];
typedef int type_14[100];
typedef char type_15[4];
typedef unsigned char type_16[4];
typedef float type_17[1];
typedef int type_19[1];
typedef float type_20[4];
typedef _anon3 type_22[4];
typedef float type_23[4][4];
typedef _anon4 type_25[0];
typedef float type_26[4][2];
typedef _anon2 type_31[4];
typedef float type_32[4];

struct _anon0
{
	unsigned long tex0;
	unsigned long clamp;
};

struct EnemyRobbedItemData
{
	GameItem kind;
	unsigned int owner_id;
};

struct EnemyLostItemData
{
	GameItem kind;
};

struct EnemyItemData
{
	EnemyRobbedItemData robbed_item[32];
	EnemyLostItemData lost_item[64];
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

struct EnemyItemWork
{
	GameItem item_kind;
};

struct EnemyMeasureResult
{
	float pos[4];
	float normal[4];
	float dist;
	int exist;
	_anon1* poly;
};

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon5 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
};

struct _anon1
{
	_anon4 vertex[0];
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

struct _anon3
{
	unsigned char next_offset;
	unsigned char flags;
	short id;
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

union _anon4
{
	float node[4];
	_anon3 data[4];
};

struct _anon5
{
	void* model;
	void* texture;
	void* texture_global;
	float matrices[4][4];
	float* weights;
	float tex_crops[4];
	void(*texture_load_func)(_anon0*, int, int, float*);
	int equip_flag;
};

void(*item_obj_destruct)(sfObj*);
float sg_vector_unit_x[4];
float sg_vector_unit_w[4];

void EnemyItemInit();
int EnemyCanRobItem(GameItem item_kind);
int EnemyIsItemWithModel(GameItem item_kind);
GameItem EnemyMyItem(sfObj* obj);
int EnemyMyItemSet(sfObj* obj, GameItem item);
void EnemyMyItemVanish(sfObj* obj);
int check_free();
float rob_success_rate(GameItem kind);
int EnemyRobItem(sfObj* obj);
void EnemyRobbedItemAllLost();
int EnemyLeftItemSet(GameItem kind, float* pos, float* rot);
int EnemyLeftItemSetForce(GameItem kind, float* pos, float* rot);
int EnemyLostItemSet(GameItem kind);
void EnemyLostItemReplace();
sfObj* EnemyItemObjConstruct(GameItem kind);
void EnemyItemObjSetParentBone(sfObj* obj, sgBone* parent);
void item_obj_destruct(sfObj* obj);
void EnemyItemObjDestruct(sfObj* obj);
void EnemyItemObjDraw(sfObj* obj);
void EnemyItemObjHidden(sfObj* obj);

// 
// Start address: 0x217470
void EnemyItemInit()
{
	EnemyItemData* enemy_item;
	int i;
	EnemyRobbedItemData* pr;
	// Line 65, Address: 0x217470, Func Offset: 0
	// Line 70, Address: 0x217478, Func Offset: 0x8
	// Line 72, Address: 0x217484, Func Offset: 0x14
	// Line 74, Address: 0x217490, Func Offset: 0x20
	// Line 75, Address: 0x217498, Func Offset: 0x28
	// Line 76, Address: 0x2174a0, Func Offset: 0x30
	// Line 78, Address: 0x2174d4, Func Offset: 0x64
	// Line 80, Address: 0x2174dc, Func Offset: 0x6c
	// Line 81, Address: 0x2174e0, Func Offset: 0x70
	// Func End, Address: 0x217500, Func Offset: 0x90
}

// 
// Start address: 0x217500
int EnemyCanRobItem(GameItem item_kind)
{
	// Line 88, Address: 0x217500, Func Offset: 0
	// Line 89, Address: 0x217508, Func Offset: 0x8
	// Line 90, Address: 0x217528, Func Offset: 0x28
	// Func End, Address: 0x217534, Func Offset: 0x34
}

// 
// Start address: 0x217540
int EnemyIsItemWithModel(GameItem item_kind)
{
	// Line 97, Address: 0x217540, Func Offset: 0
	// Line 98, Address: 0x217548, Func Offset: 0x8
	// Line 99, Address: 0x217550, Func Offset: 0x10
	// Line 98, Address: 0x217554, Func Offset: 0x14
	// Line 99, Address: 0x217558, Func Offset: 0x18
	// Func End, Address: 0x217560, Func Offset: 0x20
}

// 
// Start address: 0x217560
GameItem EnemyMyItem(sfObj* obj)
{
	EnemyItemData* enemy_item;
	int i;
	unsigned int id;
	EnemyRobbedItemData* p;
	// Line 106, Address: 0x217560, Func Offset: 0
	// Line 111, Address: 0x21756c, Func Offset: 0xc
	// Line 112, Address: 0x217574, Func Offset: 0x14
	// Line 114, Address: 0x217580, Func Offset: 0x20
	// Line 115, Address: 0x217588, Func Offset: 0x28
	// Line 116, Address: 0x217594, Func Offset: 0x34
	// Line 118, Address: 0x21759c, Func Offset: 0x3c
	// Line 119, Address: 0x2175b0, Func Offset: 0x50
	// Line 120, Address: 0x2175b8, Func Offset: 0x58
	// Func End, Address: 0x2175c8, Func Offset: 0x68
}

// 
// Start address: 0x2175d0
int EnemyMyItemSet(sfObj* obj, GameItem item)
{
	EnemyItemData* enemy_item;
	int i;
	EnemyRobbedItemData* p;
	// Line 128, Address: 0x2175d0, Func Offset: 0
	// Line 132, Address: 0x2175e8, Func Offset: 0x18
	// Line 133, Address: 0x2175f0, Func Offset: 0x20
	// Line 134, Address: 0x2175f4, Func Offset: 0x24
	// Line 135, Address: 0x2175f8, Func Offset: 0x28
	// Line 137, Address: 0x217604, Func Offset: 0x34
	// Line 138, Address: 0x217610, Func Offset: 0x40
	// Line 140, Address: 0x217618, Func Offset: 0x48
	// Line 141, Address: 0x217628, Func Offset: 0x58
	// Line 142, Address: 0x217630, Func Offset: 0x60
	// Func End, Address: 0x217648, Func Offset: 0x78
}

// 
// Start address: 0x217650
void EnemyMyItemVanish(sfObj* obj)
{
	EnemyItemData* enemy_item;
	int i;
	unsigned int id;
	EnemyRobbedItemData* p;
	// Line 148, Address: 0x217650, Func Offset: 0
	// Line 153, Address: 0x21765c, Func Offset: 0xc
	// Line 154, Address: 0x217664, Func Offset: 0x14
	// Line 156, Address: 0x217670, Func Offset: 0x20
	// Line 157, Address: 0x217678, Func Offset: 0x28
	// Line 158, Address: 0x217690, Func Offset: 0x40
	// Line 159, Address: 0x217694, Func Offset: 0x44
	// Line 161, Address: 0x217698, Func Offset: 0x48
	// Line 162, Address: 0x2176a8, Func Offset: 0x58
	// Func End, Address: 0x2176b8, Func Offset: 0x68
}

// 
// Start address: 0x2176c0
int check_free()
{
	EnemyItemData* enemy_item;
	int i;
	int n;
	// Line 168, Address: 0x2176c0, Func Offset: 0
	// Line 171, Address: 0x2176c8, Func Offset: 0x8
	// Line 172, Address: 0x2176d0, Func Offset: 0x10
	// Line 173, Address: 0x2176d8, Func Offset: 0x18
	// Line 176, Address: 0x2176e4, Func Offset: 0x24
	// Line 177, Address: 0x2176f8, Func Offset: 0x38
	// Line 178, Address: 0x217704, Func Offset: 0x44
	// Line 179, Address: 0x21770c, Func Offset: 0x4c
	// Line 180, Address: 0x217710, Func Offset: 0x50
	// Line 181, Address: 0x217714, Func Offset: 0x54
	// Line 182, Address: 0x217718, Func Offset: 0x58
	// Line 183, Address: 0x217728, Func Offset: 0x68
	// Line 187, Address: 0x217734, Func Offset: 0x74
	// Line 188, Address: 0x217748, Func Offset: 0x88
	// Line 189, Address: 0x217754, Func Offset: 0x94
	// Line 190, Address: 0x21775c, Func Offset: 0x9c
	// Line 191, Address: 0x217760, Func Offset: 0xa0
	// Line 192, Address: 0x217768, Func Offset: 0xa8
	// Func End, Address: 0x217774, Func Offset: 0xb4
}

// 
// Start address: 0x217780
float rob_success_rate(GameItem kind)
{
	float r;
	// Line 199, Address: 0x217780, Func Offset: 0
	// Line 201, Address: 0x217784, Func Offset: 0x4
	// Line 199, Address: 0x217788, Func Offset: 0x8
	// Line 201, Address: 0x21778c, Func Offset: 0xc
	// Line 199, Address: 0x217790, Func Offset: 0x10
	// Line 200, Address: 0x217794, Func Offset: 0x14
	// Line 201, Address: 0x217798, Func Offset: 0x18
	// Line 203, Address: 0x21780c, Func Offset: 0x8c
	// Line 204, Address: 0x217810, Func Offset: 0x90
	// Line 205, Address: 0x21781c, Func Offset: 0x9c
	// Line 206, Address: 0x217824, Func Offset: 0xa4
	// Line 207, Address: 0x217828, Func Offset: 0xa8
	// Line 208, Address: 0x217830, Func Offset: 0xb0
	// Line 215, Address: 0x217838, Func Offset: 0xb8
	// Line 216, Address: 0x217844, Func Offset: 0xc4
	// Line 219, Address: 0x21784c, Func Offset: 0xcc
	// Line 220, Address: 0x217850, Func Offset: 0xd0
	// Line 222, Address: 0x21785c, Func Offset: 0xdc
	// Line 223, Address: 0x217860, Func Offset: 0xe0
	// Line 224, Address: 0x21788c, Func Offset: 0x10c
	// Line 225, Address: 0x217890, Func Offset: 0x110
	// Line 226, Address: 0x217898, Func Offset: 0x118
	// Line 228, Address: 0x2178a0, Func Offset: 0x120
	// Line 229, Address: 0x2178ac, Func Offset: 0x12c
	// Line 230, Address: 0x2178b4, Func Offset: 0x134
	// Line 231, Address: 0x2178b8, Func Offset: 0x138
	// Line 235, Address: 0x2178c8, Func Offset: 0x148
	// Line 234, Address: 0x2178cc, Func Offset: 0x14c
	// Line 235, Address: 0x2178d0, Func Offset: 0x150
	// Func End, Address: 0x2178dc, Func Offset: 0x15c
}

// 
// Start address: 0x2178e0
int EnemyRobItem(sfObj* obj)
{
	int i;
	int j;
	int t;
	int pn;
	int prio[100];
	GameItem now_equip;
	GameItem kind;
	// Line 244, Address: 0x2178e0, Func Offset: 0
	// Line 248, Address: 0x217904, Func Offset: 0x24
	// Line 249, Address: 0x217914, Func Offset: 0x34
	// Line 250, Address: 0x21791c, Func Offset: 0x3c
	// Line 252, Address: 0x217920, Func Offset: 0x40
	// Line 253, Address: 0x21792c, Func Offset: 0x4c
	// Line 254, Address: 0x217930, Func Offset: 0x50
	// Line 255, Address: 0x21793c, Func Offset: 0x5c
	// Line 256, Address: 0x217958, Func Offset: 0x78
	// Line 257, Address: 0x217960, Func Offset: 0x80
	// Line 258, Address: 0x217970, Func Offset: 0x90
	// Line 259, Address: 0x217988, Func Offset: 0xa8
	// Line 258, Address: 0x217a2c, Func Offset: 0x14c
	// Line 260, Address: 0x217a30, Func Offset: 0x150
	// Line 259, Address: 0x217a34, Func Offset: 0x154
	// Line 260, Address: 0x217a38, Func Offset: 0x158
	// Line 259, Address: 0x217a3c, Func Offset: 0x15c
	// Line 260, Address: 0x217a44, Func Offset: 0x164
	// Line 262, Address: 0x217a4c, Func Offset: 0x16c
	// Line 263, Address: 0x217a60, Func Offset: 0x180
	// Line 265, Address: 0x217a70, Func Offset: 0x190
	// Line 266, Address: 0x217a80, Func Offset: 0x1a0
	// Line 267, Address: 0x217a8c, Func Offset: 0x1ac
	// Line 266, Address: 0x217a90, Func Offset: 0x1b0
	// Line 270, Address: 0x217a94, Func Offset: 0x1b4
	// Line 266, Address: 0x217a9c, Func Offset: 0x1bc
	// Line 270, Address: 0x217aa0, Func Offset: 0x1c0
	// Line 267, Address: 0x217aac, Func Offset: 0x1cc
	// Line 268, Address: 0x217ab0, Func Offset: 0x1d0
	// Line 269, Address: 0x217ab8, Func Offset: 0x1d8
	// Line 270, Address: 0x217abc, Func Offset: 0x1dc
	// Line 272, Address: 0x217ac8, Func Offset: 0x1e8
	// Line 273, Address: 0x217ad8, Func Offset: 0x1f8
	// Line 274, Address: 0x217adc, Func Offset: 0x1fc
	// Line 275, Address: 0x217ae4, Func Offset: 0x204
	// Line 276, Address: 0x217b14, Func Offset: 0x234
	// Line 277, Address: 0x217b24, Func Offset: 0x244
	// Line 278, Address: 0x217b2c, Func Offset: 0x24c
	// Line 279, Address: 0x217b30, Func Offset: 0x250
	// Line 280, Address: 0x217b38, Func Offset: 0x258
	// Line 282, Address: 0x217b40, Func Offset: 0x260
	// Line 283, Address: 0x217b50, Func Offset: 0x270
	// Line 284, Address: 0x217b58, Func Offset: 0x278
	// Func End, Address: 0x217b80, Func Offset: 0x2a0
}

// 
// Start address: 0x217b80
void EnemyRobbedItemAllLost()
{
	EnemyItemData* enemy_item;
	EnemyRobbedItemData* p;
	EnemyRobbedItemData* st[32];
	int n;
	int i;
	int j;
	// Line 289, Address: 0x217b80, Func Offset: 0
	// Line 293, Address: 0x217b94, Func Offset: 0x14
	// Line 296, Address: 0x217ba0, Func Offset: 0x20
	// Line 297, Address: 0x217ba4, Func Offset: 0x24
	// Line 298, Address: 0x217bb0, Func Offset: 0x30
	// Line 299, Address: 0x217bbc, Func Offset: 0x3c
	// Line 300, Address: 0x217bc0, Func Offset: 0x40
	// Line 299, Address: 0x217bc4, Func Offset: 0x44
	// Line 302, Address: 0x217bc8, Func Offset: 0x48
	// Line 303, Address: 0x217bdc, Func Offset: 0x5c
	// Line 305, Address: 0x217be4, Func Offset: 0x64
	// Line 306, Address: 0x217bf0, Func Offset: 0x70
	// Line 307, Address: 0x217c0c, Func Offset: 0x8c
	// Line 309, Address: 0x217c14, Func Offset: 0x94
	// Line 308, Address: 0x217c18, Func Offset: 0x98
	// Line 309, Address: 0x217c1c, Func Offset: 0x9c
	// Line 308, Address: 0x217c20, Func Offset: 0xa0
	// Line 309, Address: 0x217c24, Func Offset: 0xa4
	// Line 310, Address: 0x217c2c, Func Offset: 0xac
	// Line 312, Address: 0x217c30, Func Offset: 0xb0
	// Line 314, Address: 0x217c44, Func Offset: 0xc4
	// Line 315, Address: 0x217c50, Func Offset: 0xd0
	// Line 316, Address: 0x217c5c, Func Offset: 0xdc
	// Line 317, Address: 0x217c6c, Func Offset: 0xec
	// Line 322, Address: 0x217c70, Func Offset: 0xf0
	// Line 318, Address: 0x217c74, Func Offset: 0xf4
	// Line 322, Address: 0x217c78, Func Offset: 0xf8
	// Line 323, Address: 0x217c88, Func Offset: 0x108
	// Func End, Address: 0x217ca4, Func Offset: 0x124
}

// 
// Start address: 0x217cb0
int EnemyLeftItemSet(GameItem kind, float* pos, float* rot)
{
	float tpos[4];
	int model_id;
	int tex_id;
	EnemyMeasureResult mres;
	_EventHitWork* ehit;
	// Line 332, Address: 0x217cb0, Func Offset: 0
	// Line 338, Address: 0x217cb4, Func Offset: 0x4
	// Line 332, Address: 0x217cb8, Func Offset: 0x8
	// Line 338, Address: 0x217cbc, Func Offset: 0xc
	// Line 332, Address: 0x217cc0, Func Offset: 0x10
	// Line 338, Address: 0x217cdc, Func Offset: 0x2c
	// Line 340, Address: 0x217ce4, Func Offset: 0x34
	// Line 341, Address: 0x217cec, Func Offset: 0x3c
	// Line 342, Address: 0x217cf0, Func Offset: 0x40
	// Line 343, Address: 0x217cfc, Func Offset: 0x4c
	// Line 344, Address: 0x217d10, Func Offset: 0x60
	// Line 345, Address: 0x217d20, Func Offset: 0x70
	// Line 347, Address: 0x217d28, Func Offset: 0x78
	// Line 348, Address: 0x217d3c, Func Offset: 0x8c
	// Line 349, Address: 0x217d44, Func Offset: 0x94
	// Line 350, Address: 0x217d48, Func Offset: 0x98
	// Line 351, Address: 0x217d68, Func Offset: 0xb8
	// Line 353, Address: 0x217d70, Func Offset: 0xc0
	// Line 355, Address: 0x217d98, Func Offset: 0xe8
	// Line 357, Address: 0x217da4, Func Offset: 0xf4
	// Line 358, Address: 0x217db0, Func Offset: 0x100
	// Line 359, Address: 0x217dbc, Func Offset: 0x10c
	// Line 361, Address: 0x217de0, Func Offset: 0x130
	// Line 362, Address: 0x217df0, Func Offset: 0x140
	// Line 363, Address: 0x217df8, Func Offset: 0x148
	// Line 364, Address: 0x217e04, Func Offset: 0x154
	// Line 365, Address: 0x217e08, Func Offset: 0x158
	// Func End, Address: 0x217e28, Func Offset: 0x178
}

// 
// Start address: 0x217e30
int EnemyLeftItemSetForce(GameItem kind, float* pos, float* rot)
{
	float tpos[4];
	int model_id;
	int tex_id;
	EnemyMeasureResult mres;
	_EventHitWork* ehit;
	// Line 376, Address: 0x217e30, Func Offset: 0
	// Line 382, Address: 0x217e34, Func Offset: 0x4
	// Line 376, Address: 0x217e38, Func Offset: 0x8
	// Line 382, Address: 0x217e3c, Func Offset: 0xc
	// Line 376, Address: 0x217e40, Func Offset: 0x10
	// Line 382, Address: 0x217e5c, Func Offset: 0x2c
	// Line 384, Address: 0x217e64, Func Offset: 0x34
	// Line 385, Address: 0x217e6c, Func Offset: 0x3c
	// Line 386, Address: 0x217e70, Func Offset: 0x40
	// Line 388, Address: 0x217e7c, Func Offset: 0x4c
	// Line 387, Address: 0x217e80, Func Offset: 0x50
	// Line 388, Address: 0x217e94, Func Offset: 0x64
	// Line 391, Address: 0x217eb8, Func Offset: 0x88
	// Line 393, Address: 0x217ec4, Func Offset: 0x94
	// Line 394, Address: 0x217ed0, Func Offset: 0xa0
	// Line 395, Address: 0x217edc, Func Offset: 0xac
	// Line 397, Address: 0x217f00, Func Offset: 0xd0
	// Line 398, Address: 0x217f10, Func Offset: 0xe0
	// Line 399, Address: 0x217f18, Func Offset: 0xe8
	// Line 400, Address: 0x217f24, Func Offset: 0xf4
	// Line 401, Address: 0x217f28, Func Offset: 0xf8
	// Func End, Address: 0x217f48, Func Offset: 0x118
}

// 
// Start address: 0x217f50
int EnemyLostItemSet(GameItem kind)
{
	EnemyItemData* enemy_item;
	int i;
	// Line 408, Address: 0x217f50, Func Offset: 0
	// Line 411, Address: 0x217f60, Func Offset: 0x10
	// Line 413, Address: 0x217f78, Func Offset: 0x28
	// Line 415, Address: 0x217f80, Func Offset: 0x30
	// Line 416, Address: 0x217f88, Func Offset: 0x38
	// Line 417, Address: 0x217f90, Func Offset: 0x40
	// Line 418, Address: 0x217fa0, Func Offset: 0x50
	// Line 419, Address: 0x217fa4, Func Offset: 0x54
	// Line 421, Address: 0x217fac, Func Offset: 0x5c
	// Line 422, Address: 0x217fc0, Func Offset: 0x70
	// Line 423, Address: 0x217fc8, Func Offset: 0x78
	// Func End, Address: 0x217fd8, Func Offset: 0x88
}

// 
// Start address: 0x217fe0
void EnemyLostItemReplace()
{
	EnemyItemData* enemy_item;
	int i;
	int j;
	int t;
	int pm;
	int im;
	int idx[64];
	float pos[4];
	GameItem kind;
	int model_id;
	int tex_id;
	_EventHitWork* ehit;
	// Line 428, Address: 0x217fe0, Func Offset: 0
	// Line 436, Address: 0x218008, Func Offset: 0x28
	// Line 437, Address: 0x218014, Func Offset: 0x34
	// Line 438, Address: 0x21801c, Func Offset: 0x3c
	// Line 441, Address: 0x218024, Func Offset: 0x44
	// Line 438, Address: 0x218028, Func Offset: 0x48
	// Line 440, Address: 0x21802c, Func Offset: 0x4c
	// Line 441, Address: 0x218030, Func Offset: 0x50
	// Line 442, Address: 0x218038, Func Offset: 0x58
	// Line 443, Address: 0x218048, Func Offset: 0x68
	// Line 445, Address: 0x218054, Func Offset: 0x74
	// Line 446, Address: 0x218068, Func Offset: 0x88
	// Line 448, Address: 0x218070, Func Offset: 0x90
	// Line 449, Address: 0x218080, Func Offset: 0xa0
	// Line 450, Address: 0x218098, Func Offset: 0xb8
	// Line 451, Address: 0x2180a4, Func Offset: 0xc4
	// Line 452, Address: 0x2180b0, Func Offset: 0xd0
	// Line 453, Address: 0x2180b8, Func Offset: 0xd8
	// Line 455, Address: 0x2180bc, Func Offset: 0xdc
	// Line 458, Address: 0x2180d0, Func Offset: 0xf0
	// Line 457, Address: 0x2180d4, Func Offset: 0xf4
	// Line 458, Address: 0x2180d8, Func Offset: 0xf8
	// Line 459, Address: 0x2180e0, Func Offset: 0x100
	// Line 460, Address: 0x2180ec, Func Offset: 0x10c
	// Line 461, Address: 0x218104, Func Offset: 0x124
	// Line 462, Address: 0x218110, Func Offset: 0x130
	// Line 463, Address: 0x21811c, Func Offset: 0x13c
	// Line 464, Address: 0x218124, Func Offset: 0x144
	// Line 466, Address: 0x218158, Func Offset: 0x178
	// Line 467, Address: 0x218160, Func Offset: 0x180
	// Line 468, Address: 0x218164, Func Offset: 0x184
	// Line 469, Address: 0x218168, Func Offset: 0x188
	// Line 467, Address: 0x21816c, Func Offset: 0x18c
	// Line 469, Address: 0x218174, Func Offset: 0x194
	// Line 474, Address: 0x21817c, Func Offset: 0x19c
	// Line 475, Address: 0x218190, Func Offset: 0x1b0
	// Func End, Address: 0x2181c0, Func Offset: 0x1e0
}

// 
// Start address: 0x2181c0
sfObj* EnemyItemObjConstruct(GameItem kind)
{
	sfObj* obj;
	sfCharacter* pc;
	EnemyItemWork* ew;
	void* modeldata;
	void* texdata;
	void* shadowdata;
	// Line 506, Address: 0x2181c0, Func Offset: 0
	// Line 511, Address: 0x2181e4, Func Offset: 0x24
	// Line 512, Address: 0x2181f0, Func Offset: 0x30
	// Line 513, Address: 0x218200, Func Offset: 0x40
	// Line 514, Address: 0x21820c, Func Offset: 0x4c
	// Line 515, Address: 0x218220, Func Offset: 0x60
	// Line 516, Address: 0x218234, Func Offset: 0x74
	// Line 517, Address: 0x21823c, Func Offset: 0x7c
	// Line 518, Address: 0x218244, Func Offset: 0x84
	// Line 519, Address: 0x21824c, Func Offset: 0x8c
	// Line 520, Address: 0x218254, Func Offset: 0x94
	// Line 521, Address: 0x218264, Func Offset: 0xa4
	// Line 522, Address: 0x218270, Func Offset: 0xb0
	// Line 523, Address: 0x218280, Func Offset: 0xc0
	// Line 524, Address: 0x21828c, Func Offset: 0xcc
	// Line 525, Address: 0x21829c, Func Offset: 0xdc
	// Line 526, Address: 0x2182a8, Func Offset: 0xe8
	// Line 527, Address: 0x2182ac, Func Offset: 0xec
	// Line 528, Address: 0x2182b0, Func Offset: 0xf0
	// Func End, Address: 0x2182d4, Func Offset: 0x114
}

// 
// Start address: 0x2182e0
void EnemyItemObjSetParentBone(sfObj* obj, sgBone* parent)
{
	sfCharacter* pc;
	EnemyItemWork* ew;
	float trans[4];
	float rot[4];
	// Line 535, Address: 0x2182e0, Func Offset: 0
	// Line 541, Address: 0x2182f4, Func Offset: 0x14
	// Line 542, Address: 0x2182fc, Func Offset: 0x1c
	// Line 543, Address: 0x218300, Func Offset: 0x20
	// Line 544, Address: 0x218308, Func Offset: 0x28
	// Line 545, Address: 0x21831c, Func Offset: 0x3c
	// Line 546, Address: 0x21832c, Func Offset: 0x4c
	// Line 548, Address: 0x218340, Func Offset: 0x60
	// Line 550, Address: 0x21834c, Func Offset: 0x6c
	// Line 551, Address: 0x218358, Func Offset: 0x78
	// Line 552, Address: 0x218364, Func Offset: 0x84
	// Line 553, Address: 0x218370, Func Offset: 0x90
	// Func End, Address: 0x218384, Func Offset: 0xa4
}

// 
// Start address: 0x218390
void item_obj_destruct(sfObj* obj)
{
	sfCharacter* pc;
	// Line 595, Address: 0x218390, Func Offset: 0
	// Line 597, Address: 0x21839c, Func Offset: 0xc
	// Line 598, Address: 0x2183ac, Func Offset: 0x1c
	// Line 599, Address: 0x2183b4, Func Offset: 0x24
	// Line 600, Address: 0x2183bc, Func Offset: 0x2c
	// Func End, Address: 0x2183d0, Func Offset: 0x40
}

// 
// Start address: 0x2183d0
void EnemyItemObjDestruct(sfObj* obj)
{
	// Line 607, Address: 0x2183d0, Func Offset: 0
	// Func End, Address: 0x2183d8, Func Offset: 0x8
}

// 
// Start address: 0x2183e0
void EnemyItemObjDraw(sfObj* obj)
{
	// Line 614, Address: 0x2183e0, Func Offset: 0
	// Line 615, Address: 0x2183e4, Func Offset: 0x4
	// Line 616, Address: 0x2183ec, Func Offset: 0xc
	// Line 617, Address: 0x2183f4, Func Offset: 0x14
	// Func End, Address: 0x218404, Func Offset: 0x24
}

// 
// Start address: 0x218410
void EnemyItemObjHidden(sfObj* obj)
{
	// Line 623, Address: 0x218410, Func Offset: 0
	// Line 624, Address: 0x218414, Func Offset: 0x4
	// Line 625, Address: 0x21841c, Func Offset: 0xc
	// Line 626, Address: 0x218424, Func Offset: 0x14
	// Func End, Address: 0x218434, Func Offset: 0x24
}

