typedef struct sfObj;
typedef enum EnemySoundType : unsigned char;
typedef struct EnemyMmWork;
typedef struct EnemyBlockHit;
typedef struct EnemyExtendedPolygonVertex;
typedef struct EnemyExtendedPolygon;
typedef struct EnemyManageDataOne;
typedef union sgQsortEasyData;
typedef struct EnemyPrism;
typedef struct _anon0;
typedef struct EnemyObjHook;
typedef struct EnemySoundTypeControl;
typedef enum BattleAttackKind : unsigned char;
typedef struct _anon1;
typedef union _anon2;
typedef struct EnemyBlockHitWork;
typedef struct EnemyMaphitMoves;
typedef struct sgBone;
typedef union _anon3;
typedef struct EnemySoundTypeControlData;
typedef enum EnemyManageEntryType : unsigned char;
typedef enum BattleDamageType : unsigned char;
typedef struct EnemyMeasureResult;
typedef struct EnemyBattleDamage;

typedef void(*type_2)(void*, int);
typedef void(*type_3)(sfObj*, float*);
typedef void(*type_12)(sfObj*);
typedef int(*type_14)(void*);
typedef void(*type_15)(sfObj*);
typedef int(*type_20)(void*);
typedef void(*type_23)(sfObj*);

typedef float type_0[4];
typedef float type_1[4][6];
typedef _anon3 type_4[4];
typedef EnemyBlockHit* type_5[3];
typedef float type_6[4];
typedef int type_7[3];
typedef float type_8[10];
typedef _anon0 type_9[4];
typedef _anon2 type_10[0];
typedef _anon3 type_11[256];
typedef int type_13[0];
typedef short type_16[2];
typedef unsigned short type_17[2];
typedef char type_18[4];
typedef unsigned char type_19[4];
typedef float type_21[1];
typedef int type_22[1];

struct sfObj
{
	_anon3 fwork[256];
	_anon3* work;
	void(*func)(sfObj*);
	_anon3* work_pt0;
	_anon3* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon3* sys_work;
	_anon3* scene_work;
	_anon3* event_work;
	_anon3* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

enum EnemySoundType : unsigned char
{
	EN_SOUND_TYPE_FOOTSTEPS,
	EN_SOUND_TYPE_BUZZ,
	EN_SOUND_TYPE_MUCUS,
	EN_SOUND_TYPE_JINMEN,
	EN_SOUND_TYPE_HYENA,
	EN_SOUND_TYPE_MMZ,
	EN_SOUND_TYPE_MUSH,
	EN_SOUND_TYPE_TWINS,
	EN_SOUND_TYPE_FLAMES,
	EN_SOUND_TYPE_WHEEL,
	EN_SOUND_TYPE_MAX
};

struct EnemyMmWork
{
	EnemyMaphitMoves maphit;
	int part_num[3];
	float scale[10];
	float timer;
	float hit_timer;
	EnemyObjHook* animeupdate_hook;
	EnemySoundTypeControl* sound_control;
	int bloodpool;
	EnemyBlockHitWork* block_hit;
};

struct EnemyBlockHit
{
	float center[4];
	float front;
	float rear;
	float upper;
	float lower;
	float width;
	float rotate;
};

struct EnemyExtendedPolygonVertex
{
	float x;
	float z;
	float dx;
	float dz;
	EnemyExtendedPolygonVertex* next;
	EnemyExtendedPolygonVertex* prev;
};

struct EnemyExtendedPolygon
{
	EnemyExtendedPolygonVertex* work;
	EnemyExtendedPolygonVertex* top;
	int vertex_max;
	int vertex_number;
	float higher;
	float lower;
};

struct EnemyManageDataOne
{
	float pos[4];
	float rot[4];
	unsigned int id;
	short kind;
	short condition;
	float hp;
	float leave_time;
	short serial;
	char step;
	char type;
	char mode;
	char anime;
	char stage;
	char scene;
	unsigned int lru_point;
	_anon3 work[4];
	unsigned int padding;
};

union sgQsortEasyData
{
	unsigned long ul;
	int value;
	void* data;
};

struct EnemyPrism
{
	float top[4];
	float end[4];
	float width;
};

struct _anon0
{
	unsigned char next_offset;
	unsigned char flags;
	short id;
};

struct EnemyObjHook
{
};

struct EnemySoundTypeControl
{
};

enum BattleAttackKind : unsigned char
{
	BAK_NOTHING,
	BAK_UNDEFINED,
	BAK_PLAYER_TABLE_START,
	BAK_PLAYER_HAND_GUN = 0x2,
	BAK_PLAYER_REVOLVER,
	BAK_PLAYER_PIPE,
	BAK_PLAYER_PIPE_ST,
	BAK_PLAYER_CUTTER,
	BAK_PLAYER_CUTTER_ST,
	BAK_PLAYER_BAT,
	BAK_PLAYER_BAT_ST,
	BAK_PLAYER_DRIVER,
	BAK_PLAYER_DRIVER_ST,
	BAK_PLAYER_SPOON,
	BAK_PLAYER_SPOON_ST,
	BAK_PLAYER_MID_MASHY,
	BAK_PLAYER_MID_MASHY_ST,
	BAK_PLAYER_MASHY_IRON,
	BAK_PLAYER_MASHY_IRON_ST,
	BAK_PLAYER_MASHY,
	BAK_PLAYER_MASHY_ST,
	BAK_PLAYER_SPADE_MASHY,
	BAK_PLAYER_SPADE_MASHY_ST,
	BAK_PLAYER_MASHY_NIBLICK,
	BAK_PLAYER_MASHY_NIBLICK_ST,
	BAK_PLAYER_PITCHER,
	BAK_PLAYER_PITCHER_ST,
	BAK_PLAYER_NIBLICK,
	BAK_PLAYER_NIBLICK_ST,
	BAK_PLAYER_PITCHING_WEDGE,
	BAK_PLAYER_PITCHING_WEDGE_ST,
	BAK_PLAYER_SAND_WEDGE,
	BAK_PLAYER_SAND_WEDGE_ST,
	BAK_PLAYER_PUTTER,
	BAK_PLAYER_PUTTER_ST,
	BAK_PLAYER_BOTTLE,
	BAK_PLAYER_BROKEN_BOTTLE,
	BAK_PLAYER_SCOOP,
	BAK_PLAYER_SCOOP_ST,
	BAK_PLAYER_HATCHET,
	BAK_PLAYER_HATCHET_ST,
	BAK_PLAYER_PICK,
	BAK_PLAYER_PICK_ST,
	BAK_PLAYER_STUNGUN,
	BAK_PLAYER_SPRAY,
	BAK_PLAYER_CHAINSAW,
	BAK_PLAYER_CHAINSAW_ST,
	BAK_PLAYER_WOOD_STICK,
	BAK_PLAYER_SILVER_BULLET,
	BAK_PLAYER_FINISH,
	BAK_PLAYER_SCOOP_FINISH,
	BAK_PLAYER_PICK_FINISH,
	BAK_PLAYER_CHAINSAW_FINISH,
	BAK_PLAYER_EIL_HANDBAG_N,
	BAK_PLAYER_EIL_HANDBAG_3_1,
	BAK_PLAYER_EIL_HANDBAG_3_2,
	BAK_PLAYER_EIL_HANDBAG_3_3,
	BAK_PLAYER_EIL_HANDBAG_FINISH,
	BAK_PLAYER_EIL_CLUB_N,
	BAK_PLAYER_EIL_CLUB_3_1,
	BAK_PLAYER_EIL_CLUB_3_2,
	BAK_PLAYER_EIL_CLUB_3_3,
	BAK_PLAYER_EIL_CLUB_FINISH,
	BAK_PLAYER_EIL_ROD_N,
	BAK_PLAYER_EIL_ROD_3_1,
	BAK_PLAYER_EIL_ROD_3_2,
	BAK_PLAYER_EIL_ROD_3_3,
	BAK_PLAYER_EIL_ROD_FINISH,
	BAK_PLAYER_EIL_CHAIN_N,
	BAK_PLAYER_EIL_CHAIN_3_1,
	BAK_PLAYER_EIL_CHAIN_3_2,
	BAK_PLAYER_EIL_CHAIN_3_3,
	BAK_PLAYER_EIL_CHAIN_FINISH,
	BAK_PLAYER_EIL_GUN_N,
	BAK_PLAYER_TABLE_END = 0x48,
	BAK_ENEMY_TABLE_START,
	BAK_MUSH_DEATH = 0x49,
	BAK_BUZZ_BLOODSUCK,
	BAK_BUZZ_PECK,
	BAK_BUZZ_DIVE,
	BAK_KABE_STRIKE,
	BAK_KABE_BRINGDOWN,
	BAK_KABE_SIDEBLOW,
	BAK_KABE_HEADBUTT,
	BAK_WHEEL_DASH,
	BAK_JIN_SCRATCH,
	BAK_JIN_STRIKE,
	BAK_JIN_STAB,
	BAK_JIN_BRINGDOWN,
	BAK_TWN_STRIKE,
	BAK_TWN_JUMP,
	BAK_TWN_TURN,
	BAK_HIL_WALL,
	BAK_HIL_FLOOR,
	BAK_HYENA_DASH,
	BAK_MULTI_HEADBUTT,
	BAK_FLAMES_ATT1,
	BAK_FLAMES_ATT2,
	BAK_FAT_SING,
	BAK_FAT_DASH,
	BAK_FAT_DASH2,
	BAK_FAT_BOMB,
	BAK_SCR_ATT1,
	BAK_SCR_ATT2,
	BAK_SCR_ATT4,
	BAK_KILLER_SHOOT,
	BAK_KILLER_RAPIDFIRE,
	BAK_KILLER_PIPE,
	BAK_KILLER_PIPE_ST,
	BAK_KILLER_CHAINSAW_STAB,
	BAK_KILLER_CHAINSAW_SHAKE,
	BAK_KILLER_BLOWOFF,
	BAK_ENEMY_TABLE_END = 0x6c,
	BAK_OTHER_TABLE_START,
	BAK_GHOSTSTAIN_FLICK = 0x6d,
	BAK_OTHER_TABLE_END = 0x6d,
	BAK_MAX_NUMBER
};

struct _anon1
{
	_anon2 vertex[0];
};

union _anon2
{
	float node[4];
	_anon0 data[4];
};

struct EnemyBlockHitWork
{
};

struct EnemyMaphitMoves
{
	_anon1* listbuffer;
	int n_polygons;
	int id;
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

union _anon3
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

struct EnemySoundTypeControlData
{
	EnemySoundType sound_type;
	float fadein_speed;
	float fadeout_speed;
	int call_no[0];
};

enum EnemyManageEntryType : unsigned char
{
	ENEMY_MANAGE_ENTRY_TYPE_APPEAR,
	ENEMY_MANAGE_ENTRY_TYPE_FLAG_WAIT,
	ENEMY_MANAGE_ENTRY_TYPE_DIFFERENT_LEVEL,
	ENEMY_MANAGE_ENTRY_TYPE_ERASED,
	ENEMY_MANAGE_ENTRY_TYPE_ALREADY,
	ENEMY_MANAGE_ENTRY_TYPE_ANOTHER_SCENE
};

enum BattleDamageType : unsigned char
{
	BDT_GUN,
	BDT_REVOLVER,
	BDT_PIPE,
	BDT_PIPE_ST,
	BDT_BAT,
	BDT_BAT_ST,
	BDT_CLUB,
	BDT_CLUB_ST,
	BDT_CUTTER,
	BDT_CUTTER_ST,
	BDT_BOTTLE,
	BDT_BOTTLE_ST,
	BDT_SCOOP,
	BDT_SCOOP_ST,
	BDT_HATCHET,
	BDT_HATCHET_ST,
	BDT_PICK,
	BDT_PICK_ST,
	BDT_STUNGUN,
	BDT_CHAINSAW,
	BDT_CHAINSAW_ST,
	BDT_SMALL,
	BDT_OTHER,
	BDT_EIL_HANDBAG = 0xa,
	BDT_EIL_CLUB = 0x4,
	BDT_EIL_ROD = 0x4,
	BDT_EIL_CHAIN = 0x6,
	BDT_EIL_GUN = 0
};

struct EnemyMeasureResult
{
	float pos[4];
	float normal[4];
	float dist;
	int exist;
	_anon1* poly;
};

struct EnemyBattleDamage
{
	float pos[4];
	float dir[4];
	BattleAttackKind kind;
	BattleDamageType type;
	int id;
	float damage;
	float shock;
};

EnemySoundTypeControlData mmz_sound;
float mz32_appear_pos[4][6];
EnemyBlockHit block_hit_sb05;
EnemyBlockHit block_hit_fr03;
EnemyBlockHit* block_hit_list[3];
void(*EnemyMmAnimeUpdateHook)(sfObj*);
float sg_vector_zero[4];
void(*dummy_set_func)(sfObj*, float*);
int(*EnemyEDAnimeIsEnd)(void*);
void(*EnemyEDMmDamage)(void*, int);
int(*EnemyEDBattleDamageCheck)(void*);

int block_hit_type();
void dummy_set_func();
void EnemyMmConstruct(sfObj* obj);
void EnemyMmHandle(sfObj* obj);
void EnemyMmDraw(sfObj* obj);
void EnemyMmDestruct(sfObj* obj);
void EnemyMmDataPreserve(sfObj* obj);
void EnemyMmDataExtract(sfObj* obj);
void EnemyMmControl(sfObj* obj);
void EnemyMmControlInit(sfObj* obj);
void EnemyMmControlStay(sfObj* obj);
void EnemyMmControlDamage(sfObj* obj);
void EnemyMmAnimeSet(sfObj* obj, int anime);
void EnemyMmAnimeUpdateHook(sfObj* obj);
void EnemyMmScaleControl(sfObj* obj);
void EnemyMmSetEventDamageCheck(sfObj* obj);
void EnemyMmPostincludeWall(sfObj* obj);
void EnemyMmSetHitParts(sfObj* obj);
void EnemyEDMmDamage(void* obj);

// 
// Start address: 0x1fab60
int block_hit_type()
{
	// Line 131, Address: 0x1fab60, Func Offset: 0
	// Line 132, Address: 0x1fab68, Func Offset: 0x8
	// Line 133, Address: 0x1fab70, Func Offset: 0x10
	// Line 143, Address: 0x1fab78, Func Offset: 0x18
	// Line 142, Address: 0x1fab7c, Func Offset: 0x1c
	// Line 143, Address: 0x1fab80, Func Offset: 0x20
	// Func End, Address: 0x1fab88, Func Offset: 0x28
}

// 
// Start address: 0x1fab90
void dummy_set_func()
{
	// Line 148, Address: 0x1fab90, Func Offset: 0
	// Func End, Address: 0x1fab98, Func Offset: 0x8
}

// 
// Start address: 0x1faba0
void EnemyMmConstruct(sfObj* obj)
{
	EnemyManageEntryType etype;
	EnemyMmWork* ew;
	int i;
	// Line 152, Address: 0x1faba0, Func Offset: 0
	// Line 157, Address: 0x1faba4, Func Offset: 0x4
	// Line 152, Address: 0x1faba8, Func Offset: 0x8
	// Line 157, Address: 0x1fabc4, Func Offset: 0x24
	// Line 159, Address: 0x1fabcc, Func Offset: 0x2c
	// Line 160, Address: 0x1fabd8, Func Offset: 0x38
	// Line 162, Address: 0x1fabf0, Func Offset: 0x50
	// Line 163, Address: 0x1fabf8, Func Offset: 0x58
	// Line 166, Address: 0x1fac00, Func Offset: 0x60
	// Line 167, Address: 0x1fac10, Func Offset: 0x70
	// Line 169, Address: 0x1fac24, Func Offset: 0x84
	// Line 170, Address: 0x1fac34, Func Offset: 0x94
	// Line 171, Address: 0x1fac3c, Func Offset: 0x9c
	// Line 173, Address: 0x1fac68, Func Offset: 0xc8
	// Line 175, Address: 0x1fac8c, Func Offset: 0xec
	// Line 176, Address: 0x1fac98, Func Offset: 0xf8
	// Line 177, Address: 0x1faca0, Func Offset: 0x100
	// Line 179, Address: 0x1faca8, Func Offset: 0x108
	// Line 180, Address: 0x1facb0, Func Offset: 0x110
	// Line 181, Address: 0x1facbc, Func Offset: 0x11c
	// Line 182, Address: 0x1facc0, Func Offset: 0x120
	// Line 184, Address: 0x1face4, Func Offset: 0x144
	// Line 185, Address: 0x1facf4, Func Offset: 0x154
	// Line 187, Address: 0x1fad08, Func Offset: 0x168
	// Line 188, Address: 0x1fad10, Func Offset: 0x170
	// Line 189, Address: 0x1fad18, Func Offset: 0x178
	// Line 191, Address: 0x1fad20, Func Offset: 0x180
	// Line 192, Address: 0x1fad2c, Func Offset: 0x18c
	// Line 193, Address: 0x1fad38, Func Offset: 0x198
	// Line 195, Address: 0x1fad4c, Func Offset: 0x1ac
	// Line 196, Address: 0x1fad5c, Func Offset: 0x1bc
	// Line 197, Address: 0x1fad64, Func Offset: 0x1c4
	// Line 199, Address: 0x1fad6c, Func Offset: 0x1cc
	// Line 201, Address: 0x1fad74, Func Offset: 0x1d4
	// Line 203, Address: 0x1fad80, Func Offset: 0x1e0
	// Line 206, Address: 0x1fad88, Func Offset: 0x1e8
	// Line 207, Address: 0x1fad94, Func Offset: 0x1f4
	// Line 208, Address: 0x1fada0, Func Offset: 0x200
	// Line 209, Address: 0x1fadb4, Func Offset: 0x214
	// Line 210, Address: 0x1fadbc, Func Offset: 0x21c
	// Line 211, Address: 0x1fadc0, Func Offset: 0x220
	// Line 212, Address: 0x1fadc8, Func Offset: 0x228
	// Line 213, Address: 0x1fadd0, Func Offset: 0x230
	// Line 214, Address: 0x1fadec, Func Offset: 0x24c
	// Line 215, Address: 0x1fadf0, Func Offset: 0x250
	// Func End, Address: 0x1fae14, Func Offset: 0x274
}

// 
// Start address: 0x1fae20
void EnemyMmHandle(sfObj* obj)
{
	// Line 219, Address: 0x1fae20, Func Offset: 0
	// Line 220, Address: 0x1fae2c, Func Offset: 0xc
	// Line 221, Address: 0x1fae34, Func Offset: 0x14
	// Line 222, Address: 0x1fae3c, Func Offset: 0x1c
	// Line 223, Address: 0x1fae44, Func Offset: 0x24
	// Line 224, Address: 0x1fae4c, Func Offset: 0x2c
	// Line 225, Address: 0x1fae54, Func Offset: 0x34
	// Line 226, Address: 0x1fae5c, Func Offset: 0x3c
	// Line 227, Address: 0x1fae6c, Func Offset: 0x4c
	// Line 228, Address: 0x1fae74, Func Offset: 0x54
	// Line 229, Address: 0x1fae78, Func Offset: 0x58
	// Line 230, Address: 0x1fae80, Func Offset: 0x60
	// Func End, Address: 0x1fae90, Func Offset: 0x70
}

// 
// Start address: 0x1fae90
void EnemyMmDraw(sfObj* obj)
{
	// Line 234, Address: 0x1fae90, Func Offset: 0
	// Line 235, Address: 0x1fae9c, Func Offset: 0xc
	// Line 236, Address: 0x1faeac, Func Offset: 0x1c
	// Line 237, Address: 0x1faeb4, Func Offset: 0x24
	// Line 238, Address: 0x1faec4, Func Offset: 0x34
	// Line 239, Address: 0x1faed4, Func Offset: 0x44
	// Line 240, Address: 0x1faedc, Func Offset: 0x4c
	// Line 241, Address: 0x1faee0, Func Offset: 0x50
	// Line 242, Address: 0x1faee8, Func Offset: 0x58
	// Line 243, Address: 0x1faef8, Func Offset: 0x68
	// Line 244, Address: 0x1faf00, Func Offset: 0x70
	// Line 246, Address: 0x1faf08, Func Offset: 0x78
	// Func End, Address: 0x1faf18, Func Offset: 0x88
}

// 
// Start address: 0x1faf20
void EnemyMmDestruct(sfObj* obj)
{
	EnemyMmWork* ew;
	// Line 250, Address: 0x1faf20, Func Offset: 0
	// Line 252, Address: 0x1faf30, Func Offset: 0x10
	// Line 253, Address: 0x1faf38, Func Offset: 0x18
	// Line 254, Address: 0x1faf44, Func Offset: 0x24
	// Line 255, Address: 0x1faf4c, Func Offset: 0x2c
	// Line 256, Address: 0x1faf54, Func Offset: 0x34
	// Line 257, Address: 0x1faf58, Func Offset: 0x38
	// Line 258, Address: 0x1faf60, Func Offset: 0x40
	// Line 259, Address: 0x1faf68, Func Offset: 0x48
	// Line 260, Address: 0x1faf70, Func Offset: 0x50
	// Line 261, Address: 0x1faf78, Func Offset: 0x58
	// Line 262, Address: 0x1faf80, Func Offset: 0x60
	// Line 263, Address: 0x1faf88, Func Offset: 0x68
	// Func End, Address: 0x1faf9c, Func Offset: 0x7c
}

// 
// Start address: 0x1fafa0
void EnemyMmDataPreserve(sfObj* obj)
{
	EnemyManageDataOne* pe;
	// Line 267, Address: 0x1fafa0, Func Offset: 0
	// Line 269, Address: 0x1fafb0, Func Offset: 0x10
	// Line 270, Address: 0x1fafc8, Func Offset: 0x28
	// Line 271, Address: 0x1fafd4, Func Offset: 0x34
	// Line 272, Address: 0x1fafe0, Func Offset: 0x40
	// Line 273, Address: 0x1fafec, Func Offset: 0x4c
	// Func End, Address: 0x1fb004, Func Offset: 0x64
}

// 
// Start address: 0x1fb010
void EnemyMmDataExtract(sfObj* obj)
{
	EnemyManageDataOne* pe;
	// Line 277, Address: 0x1fb010, Func Offset: 0
	// Line 279, Address: 0x1fb020, Func Offset: 0x10
	// Line 280, Address: 0x1fb034, Func Offset: 0x24
	// Line 281, Address: 0x1fb040, Func Offset: 0x30
	// Line 282, Address: 0x1fb04c, Func Offset: 0x3c
	// Line 285, Address: 0x1fb054, Func Offset: 0x44
	// Line 286, Address: 0x1fb060, Func Offset: 0x50
	// Func End, Address: 0x1fb074, Func Offset: 0x64
}

// 
// Start address: 0x1fb080
void EnemyMmControl(sfObj* obj)
{
	float d;
	EnemyMmWork* ew;
	// Line 303, Address: 0x1fb080, Func Offset: 0
	// Line 306, Address: 0x1fb090, Func Offset: 0x10
	// Line 307, Address: 0x1fb0bc, Func Offset: 0x3c
	// Line 308, Address: 0x1fb0c0, Func Offset: 0x40
	// Line 309, Address: 0x1fb0c8, Func Offset: 0x48
	// Line 311, Address: 0x1fb0d0, Func Offset: 0x50
	// Line 312, Address: 0x1fb0d8, Func Offset: 0x58
	// Line 314, Address: 0x1fb0e0, Func Offset: 0x60
	// Line 318, Address: 0x1fb0e8, Func Offset: 0x68
	// Line 319, Address: 0x1fb0fc, Func Offset: 0x7c
	// Line 320, Address: 0x1fb104, Func Offset: 0x84
	// Line 322, Address: 0x1fb108, Func Offset: 0x88
	// Line 324, Address: 0x1fb120, Func Offset: 0xa0
	// Line 325, Address: 0x1fb134, Func Offset: 0xb4
	// Line 326, Address: 0x1fb15c, Func Offset: 0xdc
	// Line 327, Address: 0x1fb168, Func Offset: 0xe8
	// Line 332, Address: 0x1fb178, Func Offset: 0xf8
	// Line 333, Address: 0x1fb180, Func Offset: 0x100
	// Line 334, Address: 0x1fb194, Func Offset: 0x114
	// Line 335, Address: 0x1fb1a4, Func Offset: 0x124
	// Line 336, Address: 0x1fb1b0, Func Offset: 0x130
	// Line 337, Address: 0x1fb1b4, Func Offset: 0x134
	// Line 339, Address: 0x1fb1b8, Func Offset: 0x138
	// Func End, Address: 0x1fb1cc, Func Offset: 0x14c
}

// 
// Start address: 0x1fb1d0
void EnemyMmControlInit(sfObj* obj)
{
	EnemyMmWork* ew;
	int i;
	// Line 343, Address: 0x1fb1d0, Func Offset: 0
	// Line 346, Address: 0x1fb1dc, Func Offset: 0xc
	// Line 347, Address: 0x1fb1e4, Func Offset: 0x14
	// Line 348, Address: 0x1fb1e8, Func Offset: 0x18
	// Line 350, Address: 0x1fb214, Func Offset: 0x44
	// Line 351, Address: 0x1fb220, Func Offset: 0x50
	// Line 352, Address: 0x1fb22c, Func Offset: 0x5c
	// Func End, Address: 0x1fb23c, Func Offset: 0x6c
}

// 
// Start address: 0x1fb240
void EnemyMmControlStay(sfObj* obj)
{
	EnemyMmWork* ew;
	int n;
	float dt;
	// Line 356, Address: 0x1fb240, Func Offset: 0
	// Line 360, Address: 0x1fb258, Func Offset: 0x18
	// Line 361, Address: 0x1fb260, Func Offset: 0x20
	// Line 364, Address: 0x1fb26c, Func Offset: 0x2c
	// Line 366, Address: 0x1fb274, Func Offset: 0x34
	// Line 367, Address: 0x1fb2a4, Func Offset: 0x64
	// Line 368, Address: 0x1fb2a8, Func Offset: 0x68
	// Line 369, Address: 0x1fb2b4, Func Offset: 0x74
	// Line 370, Address: 0x1fb2dc, Func Offset: 0x9c
	// Line 371, Address: 0x1fb2e0, Func Offset: 0xa0
	// Line 372, Address: 0x1fb2e8, Func Offset: 0xa8
	// Line 374, Address: 0x1fb2f0, Func Offset: 0xb0
	// Line 375, Address: 0x1fb2fc, Func Offset: 0xbc
	// Line 376, Address: 0x1fb304, Func Offset: 0xc4
	// Line 377, Address: 0x1fb308, Func Offset: 0xc8
	// Line 380, Address: 0x1fb310, Func Offset: 0xd0
	// Line 381, Address: 0x1fb324, Func Offset: 0xe4
	// Line 382, Address: 0x1fb344, Func Offset: 0x104
	// Line 383, Address: 0x1fb350, Func Offset: 0x110
	// Line 385, Address: 0x1fb378, Func Offset: 0x138
	// Line 386, Address: 0x1fb388, Func Offset: 0x148
	// Line 387, Address: 0x1fb394, Func Offset: 0x154
	// Line 388, Address: 0x1fb3a0, Func Offset: 0x160
	// Line 389, Address: 0x1fb3b0, Func Offset: 0x170
	// Line 388, Address: 0x1fb3b4, Func Offset: 0x174
	// Line 389, Address: 0x1fb3bc, Func Offset: 0x17c
	// Line 390, Address: 0x1fb3c4, Func Offset: 0x184
	// Line 391, Address: 0x1fb3cc, Func Offset: 0x18c
	// Line 392, Address: 0x1fb3d0, Func Offset: 0x190
	// Line 393, Address: 0x1fb3d8, Func Offset: 0x198
	// Line 395, Address: 0x1fb3e0, Func Offset: 0x1a0
	// Line 397, Address: 0x1fb3fc, Func Offset: 0x1bc
	// Line 398, Address: 0x1fb420, Func Offset: 0x1e0
	// Line 401, Address: 0x1fb428, Func Offset: 0x1e8
	// Line 403, Address: 0x1fb430, Func Offset: 0x1f0
	// Line 404, Address: 0x1fb458, Func Offset: 0x218
	// Line 405, Address: 0x1fb464, Func Offset: 0x224
	// Line 406, Address: 0x1fb470, Func Offset: 0x230
	// Line 405, Address: 0x1fb474, Func Offset: 0x234
	// Line 406, Address: 0x1fb490, Func Offset: 0x250
	// Line 407, Address: 0x1fb498, Func Offset: 0x258
	// Line 409, Address: 0x1fb4a0, Func Offset: 0x260
	// Line 410, Address: 0x1fb4cc, Func Offset: 0x28c
	// Line 412, Address: 0x1fb4d4, Func Offset: 0x294
	// Line 413, Address: 0x1fb4dc, Func Offset: 0x29c
	// Line 414, Address: 0x1fb4e0, Func Offset: 0x2a0
	// Line 415, Address: 0x1fb4f4, Func Offset: 0x2b4
	// Line 416, Address: 0x1fb500, Func Offset: 0x2c0
	// Line 417, Address: 0x1fb50c, Func Offset: 0x2cc
	// Line 418, Address: 0x1fb518, Func Offset: 0x2d8
	// Line 417, Address: 0x1fb51c, Func Offset: 0x2dc
	// Line 418, Address: 0x1fb520, Func Offset: 0x2e0
	// Line 417, Address: 0x1fb528, Func Offset: 0x2e8
	// Line 418, Address: 0x1fb538, Func Offset: 0x2f8
	// Line 419, Address: 0x1fb544, Func Offset: 0x304
	// Line 420, Address: 0x1fb54c, Func Offset: 0x30c
	// Line 421, Address: 0x1fb554, Func Offset: 0x314
	// Line 422, Address: 0x1fb55c, Func Offset: 0x31c
	// Line 423, Address: 0x1fb560, Func Offset: 0x320
	// Line 424, Address: 0x1fb570, Func Offset: 0x330
	// Line 425, Address: 0x1fb57c, Func Offset: 0x33c
	// Line 426, Address: 0x1fb588, Func Offset: 0x348
	// Line 425, Address: 0x1fb58c, Func Offset: 0x34c
	// Line 426, Address: 0x1fb5a8, Func Offset: 0x368
	// Line 428, Address: 0x1fb5b0, Func Offset: 0x370
	// Line 430, Address: 0x1fb5b8, Func Offset: 0x378
	// Line 431, Address: 0x1fb5f8, Func Offset: 0x3b8
	// Line 432, Address: 0x1fb604, Func Offset: 0x3c4
	// Line 433, Address: 0x1fb610, Func Offset: 0x3d0
	// Line 432, Address: 0x1fb614, Func Offset: 0x3d4
	// Line 433, Address: 0x1fb630, Func Offset: 0x3f0
	// Line 435, Address: 0x1fb638, Func Offset: 0x3f8
	// Line 437, Address: 0x1fb640, Func Offset: 0x400
	// Line 438, Address: 0x1fb66c, Func Offset: 0x42c
	// Line 442, Address: 0x1fb678, Func Offset: 0x438
	// Func End, Address: 0x1fb694, Func Offset: 0x454
}

// 
// Start address: 0x1fb6a0
void EnemyMmControlDamage(sfObj* obj)
{
	EnemyMmWork* ew;
	float dt;
	EnemyBattleDamage bd;
	float* pos;
	float vec[4];
	EnemyMeasureResult mres;
	// Line 446, Address: 0x1fb6a0, Func Offset: 0
	// Line 449, Address: 0x1fb6b8, Func Offset: 0x18
	// Line 450, Address: 0x1fb6c0, Func Offset: 0x20
	// Line 451, Address: 0x1fb6cc, Func Offset: 0x2c
	// Line 453, Address: 0x1fb6d4, Func Offset: 0x34
	// Line 454, Address: 0x1fb714, Func Offset: 0x74
	// Line 455, Address: 0x1fb718, Func Offset: 0x78
	// Line 458, Address: 0x1fb724, Func Offset: 0x84
	// Line 459, Address: 0x1fb730, Func Offset: 0x90
	// Line 460, Address: 0x1fb740, Func Offset: 0xa0
	// Line 462, Address: 0x1fb748, Func Offset: 0xa8
	// Line 463, Address: 0x1fb754, Func Offset: 0xb4
	// Line 464, Address: 0x1fb764, Func Offset: 0xc4
	// Line 465, Address: 0x1fb76c, Func Offset: 0xcc
	// Line 466, Address: 0x1fb778, Func Offset: 0xd8
	// Line 467, Address: 0x1fb784, Func Offset: 0xe4
	// Line 468, Address: 0x1fb788, Func Offset: 0xe8
	// Line 470, Address: 0x1fb7a4, Func Offset: 0x104
	// Line 468, Address: 0x1fb7a8, Func Offset: 0x108
	// Line 470, Address: 0x1fb7c0, Func Offset: 0x120
	// Line 471, Address: 0x1fb7dc, Func Offset: 0x13c
	// Line 472, Address: 0x1fb7e4, Func Offset: 0x144
	// Line 473, Address: 0x1fb7f0, Func Offset: 0x150
	// Line 475, Address: 0x1fb7fc, Func Offset: 0x15c
	// Line 476, Address: 0x1fb804, Func Offset: 0x164
	// Line 477, Address: 0x1fb808, Func Offset: 0x168
	// Line 478, Address: 0x1fb818, Func Offset: 0x178
	// Line 479, Address: 0x1fb834, Func Offset: 0x194
	// Line 481, Address: 0x1fb840, Func Offset: 0x1a0
	// Line 482, Address: 0x1fb848, Func Offset: 0x1a8
	// Line 485, Address: 0x1fb860, Func Offset: 0x1c0
	// Line 487, Address: 0x1fb868, Func Offset: 0x1c8
	// Line 488, Address: 0x1fb878, Func Offset: 0x1d8
	// Line 489, Address: 0x1fb894, Func Offset: 0x1f4
	// Line 491, Address: 0x1fb89c, Func Offset: 0x1fc
	// Line 492, Address: 0x1fb8a8, Func Offset: 0x208
	// Line 494, Address: 0x1fb8bc, Func Offset: 0x21c
	// Line 495, Address: 0x1fb8c4, Func Offset: 0x224
	// Line 496, Address: 0x1fb8c8, Func Offset: 0x228
	// Line 497, Address: 0x1fb8dc, Func Offset: 0x23c
	// Line 496, Address: 0x1fb8e0, Func Offset: 0x240
	// Line 497, Address: 0x1fb8f0, Func Offset: 0x250
	// Line 501, Address: 0x1fb914, Func Offset: 0x274
	// Line 502, Address: 0x1fb920, Func Offset: 0x280
	// Line 504, Address: 0x1fb940, Func Offset: 0x2a0
	// Line 505, Address: 0x1fb950, Func Offset: 0x2b0
	// Line 506, Address: 0x1fb96c, Func Offset: 0x2cc
	// Line 508, Address: 0x1fb998, Func Offset: 0x2f8
	// Line 510, Address: 0x1fb9a8, Func Offset: 0x308
	// Line 511, Address: 0x1fb9b4, Func Offset: 0x314
	// Line 512, Address: 0x1fb9b8, Func Offset: 0x318
	// Line 513, Address: 0x1fb9e0, Func Offset: 0x340
	// Line 516, Address: 0x1fb9e8, Func Offset: 0x348
	// Line 517, Address: 0x1fba04, Func Offset: 0x364
	// Line 521, Address: 0x1fba10, Func Offset: 0x370
	// Func End, Address: 0x1fba2c, Func Offset: 0x38c
}

// 
// Start address: 0x1fba30
void EnemyMmAnimeSet(sfObj* obj, int anime)
{
	int old_anime;
	int type;
	float d;
	// Line 525, Address: 0x1fba30, Func Offset: 0
	// Line 526, Address: 0x1fba4c, Func Offset: 0x1c
	// Line 527, Address: 0x1fba58, Func Offset: 0x28
	// Line 529, Address: 0x1fba60, Func Offset: 0x30
	// Line 530, Address: 0x1fba74, Func Offset: 0x44
	// Line 531, Address: 0x1fba88, Func Offset: 0x58
	// Line 532, Address: 0x1fbaa8, Func Offset: 0x78
	// Line 533, Address: 0x1fbab4, Func Offset: 0x84
	// Line 534, Address: 0x1fbad4, Func Offset: 0xa4
	// Line 535, Address: 0x1fbae4, Func Offset: 0xb4
	// Line 536, Address: 0x1fbb14, Func Offset: 0xe4
	// Line 537, Address: 0x1fbb24, Func Offset: 0xf4
	// Line 538, Address: 0x1fbb28, Func Offset: 0xf8
	// Line 539, Address: 0x1fbb50, Func Offset: 0x120
	// Line 540, Address: 0x1fbb5c, Func Offset: 0x12c
	// Line 541, Address: 0x1fbb6c, Func Offset: 0x13c
	// Func End, Address: 0x1fbb88, Func Offset: 0x158
}

// 
// Start address: 0x1fbb90
void EnemyMmAnimeUpdateHook(sfObj* obj)
{
	EnemyMmWork* ew;
	sgBone* bone;
	float scale[4];
	int i;
	float f;
	// Line 545, Address: 0x1fbb90, Func Offset: 0
	// Line 551, Address: 0x1fbbac, Func Offset: 0x1c
	// Line 554, Address: 0x1fbbd8, Func Offset: 0x48
	// Line 556, Address: 0x1fbbe0, Func Offset: 0x50
	// Line 557, Address: 0x1fbbec, Func Offset: 0x5c
	// Line 559, Address: 0x1fbc2c, Func Offset: 0x9c
	// Line 560, Address: 0x1fbc34, Func Offset: 0xa4
	// Line 563, Address: 0x1fbc3c, Func Offset: 0xac
	// Line 564, Address: 0x1fbc40, Func Offset: 0xb0
	// Line 565, Address: 0x1fbc48, Func Offset: 0xb8
	// Line 566, Address: 0x1fbc54, Func Offset: 0xc4
	// Line 567, Address: 0x1fbc58, Func Offset: 0xc8
	// Line 566, Address: 0x1fbc5c, Func Offset: 0xcc
	// Line 567, Address: 0x1fbc60, Func Offset: 0xd0
	// Line 568, Address: 0x1fbc68, Func Offset: 0xd8
	// Line 569, Address: 0x1fbc74, Func Offset: 0xe4
	// Line 570, Address: 0x1fbc78, Func Offset: 0xe8
	// Line 569, Address: 0x1fbc80, Func Offset: 0xf0
	// Line 570, Address: 0x1fbc84, Func Offset: 0xf4
	// Line 571, Address: 0x1fbc8c, Func Offset: 0xfc
	// Line 572, Address: 0x1fbc9c, Func Offset: 0x10c
	// Func End, Address: 0x1fbcc0, Func Offset: 0x130
}

// 
// Start address: 0x1fbcc0
void EnemyMmScaleControl(sfObj* obj)
{
	// Line 576, Address: 0x1fbcc0, Func Offset: 0
	// Line 577, Address: 0x1fbcc8, Func Offset: 0x8
	// Line 578, Address: 0x1fbcd4, Func Offset: 0x14
	// Func End, Address: 0x1fbce4, Func Offset: 0x24
}

// 
// Start address: 0x1fbcf0
void EnemyMmSetEventDamageCheck(sfObj* obj)
{
	// Line 582, Address: 0x1fbcf0, Func Offset: 0
	// Line 583, Address: 0x1fbcfc, Func Offset: 0xc
	// Line 584, Address: 0x1fbd10, Func Offset: 0x20
	// Line 586, Address: 0x1fbd24, Func Offset: 0x34
	// Line 587, Address: 0x1fbd30, Func Offset: 0x40
	// Line 589, Address: 0x1fbd4c, Func Offset: 0x5c
	// Line 590, Address: 0x1fbd50, Func Offset: 0x60
	// Func End, Address: 0x1fbd60, Func Offset: 0x70
}

// 
// Start address: 0x1fbd60
void EnemyMmPostincludeWall(sfObj* obj)
{
	EnemyMmWork* ew;
	int i;
	int m;
	EnemyExtendedPolygon ext_polygon;
	EnemyPrism prism;
	sgBone* bone;
	float* bscale;
	float d;
	float d2;
	float hl;
	// Line 594, Address: 0x1fbd60, Func Offset: 0
	// Line 602, Address: 0x1fbd88, Func Offset: 0x28
	// Line 606, Address: 0x1fbdac, Func Offset: 0x4c
	// Line 608, Address: 0x1fbdb0, Func Offset: 0x50
	// Line 609, Address: 0x1fbdb8, Func Offset: 0x58
	// Line 608, Address: 0x1fbdbc, Func Offset: 0x5c
	// Line 609, Address: 0x1fbdc0, Func Offset: 0x60
	// Line 610, Address: 0x1fbdd8, Func Offset: 0x78
	// Line 612, Address: 0x1fbde0, Func Offset: 0x80
	// Line 613, Address: 0x1fbdfc, Func Offset: 0x9c
	// Line 615, Address: 0x1fbe04, Func Offset: 0xa4
	// Line 616, Address: 0x1fbe10, Func Offset: 0xb0
	// Line 619, Address: 0x1fbe18, Func Offset: 0xb8
	// Line 620, Address: 0x1fbe24, Func Offset: 0xc4
	// Line 621, Address: 0x1fbe30, Func Offset: 0xd0
	// Line 622, Address: 0x1fbe38, Func Offset: 0xd8
	// Line 623, Address: 0x1fbe40, Func Offset: 0xe0
	// Line 624, Address: 0x1fbe50, Func Offset: 0xf0
	// Line 625, Address: 0x1fbe5c, Func Offset: 0xfc
	// Line 626, Address: 0x1fbe6c, Func Offset: 0x10c
	// Line 627, Address: 0x1fbe74, Func Offset: 0x114
	// Line 628, Address: 0x1fbe88, Func Offset: 0x128
	// Line 629, Address: 0x1fbe90, Func Offset: 0x130
	// Line 631, Address: 0x1fbe98, Func Offset: 0x138
	// Line 632, Address: 0x1fbea0, Func Offset: 0x140
	// Line 633, Address: 0x1fbec0, Func Offset: 0x160
	// Line 634, Address: 0x1fbec4, Func Offset: 0x164
	// Line 633, Address: 0x1fbec8, Func Offset: 0x168
	// Line 634, Address: 0x1fbecc, Func Offset: 0x16c
	// Line 636, Address: 0x1fbed4, Func Offset: 0x174
	// Line 638, Address: 0x1fbed8, Func Offset: 0x178
	// Line 637, Address: 0x1fbedc, Func Offset: 0x17c
	// Line 638, Address: 0x1fbee0, Func Offset: 0x180
	// Line 639, Address: 0x1fbeec, Func Offset: 0x18c
	// Line 641, Address: 0x1fbefc, Func Offset: 0x19c
	// Line 643, Address: 0x1fbf0c, Func Offset: 0x1ac
	// Line 644, Address: 0x1fbf14, Func Offset: 0x1b4
	// Func End, Address: 0x1fbf44, Func Offset: 0x1e4
}

// 
// Start address: 0x1fbf50
void EnemyMmSetHitParts(sfObj* obj)
{
	EnemyMmWork* ew;
	sgQsortEasyData* qs_base;
	float pos_base[4];
	float* ppos;
	float ipos[4];
	int i;
	int m;
	int n;
	float d;
	float dm;
	// Line 648, Address: 0x1fbf50, Func Offset: 0
	// Line 656, Address: 0x1fbf78, Func Offset: 0x28
	// Line 657, Address: 0x1fbf84, Func Offset: 0x34
	// Line 658, Address: 0x1fbf90, Func Offset: 0x40
	// Line 660, Address: 0x1fbfa0, Func Offset: 0x50
	// Line 662, Address: 0x1fbfb4, Func Offset: 0x64
	// Line 663, Address: 0x1fbfbc, Func Offset: 0x6c
	// Line 664, Address: 0x1fbfc8, Func Offset: 0x78
	// Line 665, Address: 0x1fbfd0, Func Offset: 0x80
	// Line 666, Address: 0x1fbfe4, Func Offset: 0x94
	// Line 667, Address: 0x1fbfec, Func Offset: 0x9c
	// Line 669, Address: 0x1fc008, Func Offset: 0xb8
	// Line 670, Address: 0x1fc014, Func Offset: 0xc4
	// Line 671, Address: 0x1fc018, Func Offset: 0xc8
	// Line 674, Address: 0x1fc024, Func Offset: 0xd4
	// Line 675, Address: 0x1fc03c, Func Offset: 0xec
	// Line 676, Address: 0x1fc044, Func Offset: 0xf4
	// Line 677, Address: 0x1fc07c, Func Offset: 0x12c
	// Line 679, Address: 0x1fc080, Func Offset: 0x130
	// Line 680, Address: 0x1fc08c, Func Offset: 0x13c
	// Line 681, Address: 0x1fc098, Func Offset: 0x148
	// Line 682, Address: 0x1fc0a0, Func Offset: 0x150
	// Line 684, Address: 0x1fc0c0, Func Offset: 0x170
	// Line 685, Address: 0x1fc0cc, Func Offset: 0x17c
	// Line 684, Address: 0x1fc0d4, Func Offset: 0x184
	// Line 685, Address: 0x1fc0d8, Func Offset: 0x188
	// Line 686, Address: 0x1fc0dc, Func Offset: 0x18c
	// Line 687, Address: 0x1fc0f0, Func Offset: 0x1a0
	// Line 688, Address: 0x1fc108, Func Offset: 0x1b8
	// Line 689, Address: 0x1fc110, Func Offset: 0x1c0
	// Line 690, Address: 0x1fc118, Func Offset: 0x1c8
	// Line 691, Address: 0x1fc120, Func Offset: 0x1d0
	// Line 690, Address: 0x1fc128, Func Offset: 0x1d8
	// Line 691, Address: 0x1fc12c, Func Offset: 0x1dc
	// Line 692, Address: 0x1fc140, Func Offset: 0x1f0
	// Line 694, Address: 0x1fc154, Func Offset: 0x204
	// Line 695, Address: 0x1fc15c, Func Offset: 0x20c
	// Line 696, Address: 0x1fc168, Func Offset: 0x218
	// Func End, Address: 0x1fc194, Func Offset: 0x244
}

// 
// Start address: 0x1fc1a0
void EnemyEDMmDamage(void* obj)
{
	EnemyBattleDamage bd;
	// Line 700, Address: 0x1fc1a0, Func Offset: 0
	// Line 702, Address: 0x1fc1b0, Func Offset: 0x10
	// Line 703, Address: 0x1fc1bc, Func Offset: 0x1c
	// Line 704, Address: 0x1fc1c8, Func Offset: 0x28
	// Func End, Address: 0x1fc1d8, Func Offset: 0x38
}

