typedef struct sfObj;
typedef struct EnemyKabeWork;
typedef struct EnemyTexParameter;
typedef struct _anon0;
typedef enum EnemyManageEntryType : unsigned char;
typedef enum BattleDamageType : unsigned char;
typedef struct EnemyManageDataOne;
typedef union _anon1;
typedef enum EnemyTexIdentity : unsigned char;
typedef struct EnemyBattleDamage;
typedef struct _anon2;
typedef struct _anon3;
typedef enum BattleAttackKind : unsigned char;

typedef int(*type_1)(void*);
typedef int(*type_2)(void*);
typedef int(*type_3)(void*);
typedef void(*type_4)(sfObj*);
typedef void(*type_9)(sfObj*);
typedef void(*type_12)(sfObj*);
typedef void(*type_20)(void*, int);

typedef _anon0 type_0[2];
typedef void(*type_5)(sfObj*)[20];
typedef float type_6[4];
typedef float type_7[4][4];
typedef _anon1 type_8[256];
typedef float type_10[4];
typedef _anon1 type_11[4];
typedef short type_13[2];
typedef float type_14[4];
typedef unsigned short type_15[2];
typedef char type_16[4];
typedef unsigned char type_17[4];
typedef float type_18[1];
typedef int type_19[1];

struct sfObj
{
	_anon1 fwork[256];
	_anon1* work;
	void(*func)(sfObj*);
	_anon1* work_pt0;
	_anon1* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon1* sys_work;
	_anon1* scene_work;
	_anon1* event_work;
	_anon1* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

struct EnemyKabeWork
{
	float timer;
	float transparency;
	int target_player;
	int on_attack;
};

struct EnemyTexParameter
{
	_anon0 st[2];
	EnemyTexIdentity texid;
	unsigned long clamp;
	int rotate;
};

struct _anon0
{
	float S;
	float T;
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
	_anon1 work[4];
	unsigned int padding;
};

union _anon1
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

enum EnemyTexIdentity : unsigned char
{
	EN_TEX_ID_COALTAR,
	EN_TEX_ID_GHOSTSTAIN,
	EN_TEX_ID_CELL,
	EN_TEX_ID_CELL2,
	EN_TEX_ID_MUCUS,
	EN_TEX_ID_CRUSH_HIL,
	EN_TEX_ID_EARTHWORM,
	EN_TEX_ID_EARTHWORM2,
	EN_TEX_ID_EARTHWORM3,
	EN_TEX_ID_EARTHWORM4,
	EN_TEX_ID_BLOODPOOL,
	EN_TEX_ID_FLAME1,
	EN_TEX_ID_FLAME2,
	EN_TEX_ID_TOACH,
	EN_TEX_ID_FIRE,
	EN_TEX_ID_FIRELIGHT,
	EN_TEX_ID_WALL,
	EN_TEX_ID_MAX
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

struct _anon2
{
	float bmin[4];
	float bmax[4];
};

struct _anon3
{
	float mat[4][4];
	float half_w[4];
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

_anon2 damage_size;
void(*kabe_jump_table)(sfObj*)[20];
float sg_vector_unit_y[4];
int(*EnemyEDAnimeIsEnd)(void*);
int(*EnemyEDAnimeIsEndSoon)(void*);
int(*EnemyEDBattleDamageCheck)(void*);
void(*EnemyEDKabeAdditionalDamage)(void*, int);
float en_quat_rot_x_270[4];

void EnemyKabeConstruct(sfObj* obj);
void check_shadow(sfObj* obj);
void change_body_size(sfObj* obj);
void EnemyKabeHandle(sfObj* obj);
void EnemyKabeDraw(sfObj* obj);
void EnemyKabeDestruct(sfObj* obj);
void EnemyKabeDataPreserve(sfObj* obj);
void EnemyKabeDataExtract(sfObj* obj);
void EnemyKabeAnimeSet(sfObj* obj, int anime);
void EnemyKabeControl(sfObj* obj);
void EnemyKabeControlInit(sfObj* obj);
void EnemyKabeControlHidden(sfObj* obj);
void EnemyKabeControlWait(sfObj* obj);
void EnemyKabeControlLook(sfObj* obj);
void EnemyKabeControlAttackW(sfObj* obj);
void EnemyKabeControlAppear(sfObj* obj);
void EnemyKabeControlStay(sfObj* obj);
void EnemyKabeControlDisappear(sfObj* obj);
void EnemyKabeControlAttackA(sfObj* obj);
int set_damage_anime(sfObj* obj, EnemyBattleDamage* bd);
void EnemyKabeControlDamage(sfObj* obj);
void EnemyKabeControlDown(sfObj* obj);
void EnemyKabeControlDead(sfObj* obj);
void EnemyKabeControlDeadSinceStart(sfObj* obj);
void EnemyKabeControlEvent(sfObj* obj);
void EnemyKabeControlNoMove(sfObj* obj);
void EnemyKabeControlWait2(sfObj* obj);
void EnemyKabeControlAppear2(sfObj* obj);
void EnemyKabeControlDisappear2(sfObj* obj);
void EnemyKabeControlDead2(sfObj* obj);
void EnemyKabeControlTest();
int EnemyKabeCheckPlayerInSamePartition(sfObj* obj);
int EnemyKabeCanAttack(sfObj* obj);
void EnemyKabeSetAttackWait(sfObj* obj);
void EnemyKabeSetEventDamageCheck(sfObj* obj);
void EnemyKabeSetEventAdditionalDamageCheck(sfObj* obj);
void EnemyEDKabeAdditionalDamage(void* obj);
void EnemyKabeDrawWall(sfObj* obj);

// 
// Start address: 0x213df0
void EnemyKabeConstruct(sfObj* obj)
{
	EnemyKabeWork* ew;
	EnemyManageEntryType etype;
	int type;
	_anon3 obb;
	// Line 183, Address: 0x213df0, Func Offset: 0
	// Line 188, Address: 0x213e0c, Func Offset: 0x1c
	// Line 189, Address: 0x213e28, Func Offset: 0x38
	// Line 190, Address: 0x213e30, Func Offset: 0x40
	// Line 193, Address: 0x213e38, Func Offset: 0x48
	// Line 195, Address: 0x213e44, Func Offset: 0x54
	// Line 196, Address: 0x213e50, Func Offset: 0x60
	// Line 199, Address: 0x213e70, Func Offset: 0x80
	// Line 200, Address: 0x213e78, Func Offset: 0x88
	// Line 203, Address: 0x213e80, Func Offset: 0x90
	// Line 204, Address: 0x213e8c, Func Offset: 0x9c
	// Line 205, Address: 0x213e9c, Func Offset: 0xac
	// Line 207, Address: 0x213eb8, Func Offset: 0xc8
	// Line 208, Address: 0x213ec0, Func Offset: 0xd0
	// Line 209, Address: 0x213ec4, Func Offset: 0xd4
	// Line 210, Address: 0x213ec8, Func Offset: 0xd8
	// Line 211, Address: 0x213ed4, Func Offset: 0xe4
	// Line 212, Address: 0x213ee4, Func Offset: 0xf4
	// Line 213, Address: 0x213eec, Func Offset: 0xfc
	// Line 215, Address: 0x213f18, Func Offset: 0x128
	// Line 216, Address: 0x213f28, Func Offset: 0x138
	// Line 220, Address: 0x213f48, Func Offset: 0x158
	// Line 221, Address: 0x213f58, Func Offset: 0x168
	// Line 224, Address: 0x213f70, Func Offset: 0x180
	// Line 226, Address: 0x213f78, Func Offset: 0x188
	// Line 228, Address: 0x213f84, Func Offset: 0x194
	// Line 229, Address: 0x213f8c, Func Offset: 0x19c
	// Line 231, Address: 0x213f90, Func Offset: 0x1a0
	// Line 232, Address: 0x213f9c, Func Offset: 0x1ac
	// Line 233, Address: 0x213fa8, Func Offset: 0x1b8
	// Line 235, Address: 0x213fac, Func Offset: 0x1bc
	// Line 237, Address: 0x213fcc, Func Offset: 0x1dc
	// Line 238, Address: 0x213fd4, Func Offset: 0x1e4
	// Line 240, Address: 0x213ffc, Func Offset: 0x20c
	// Line 241, Address: 0x214004, Func Offset: 0x214
	// Line 242, Address: 0x214008, Func Offset: 0x218
	// Func End, Address: 0x214028, Func Offset: 0x238
}

// 
// Start address: 0x214030
void check_shadow(sfObj* obj)
{
	int f;
	int frame;
	// Line 246, Address: 0x214030, Func Offset: 0
	// Line 249, Address: 0x214048, Func Offset: 0x18
	// Line 250, Address: 0x214054, Func Offset: 0x24
	// Line 254, Address: 0x2140c0, Func Offset: 0x90
	// Line 257, Address: 0x2140cc, Func Offset: 0x9c
	// Line 259, Address: 0x2140d4, Func Offset: 0xa4
	// Line 260, Address: 0x2140d8, Func Offset: 0xa8
	// Line 263, Address: 0x2140e4, Func Offset: 0xb4
	// Line 265, Address: 0x2140ec, Func Offset: 0xbc
	// Line 266, Address: 0x2140f0, Func Offset: 0xc0
	// Line 269, Address: 0x2140fc, Func Offset: 0xcc
	// Line 270, Address: 0x214104, Func Offset: 0xd4
	// Line 271, Address: 0x214108, Func Offset: 0xd8
	// Line 274, Address: 0x214114, Func Offset: 0xe4
	// Line 275, Address: 0x21411c, Func Offset: 0xec
	// Line 276, Address: 0x214120, Func Offset: 0xf0
	// Line 278, Address: 0x214124, Func Offset: 0xf4
	// Line 279, Address: 0x214128, Func Offset: 0xf8
	// Line 280, Address: 0x214130, Func Offset: 0x100
	// Line 281, Address: 0x214138, Func Offset: 0x108
	// Line 282, Address: 0x214140, Func Offset: 0x110
	// Line 284, Address: 0x214148, Func Offset: 0x118
	// Func End, Address: 0x214160, Func Offset: 0x130
}

// 
// Start address: 0x214160
void change_body_size(sfObj* obj)
{
	EnemyKabeWork* ew;
	float t;
	// Line 288, Address: 0x214160, Func Offset: 0
	// Line 291, Address: 0x214174, Func Offset: 0x14
	// Line 292, Address: 0x21417c, Func Offset: 0x1c
	// Line 293, Address: 0x214198, Func Offset: 0x38
	// Line 294, Address: 0x21419c, Func Offset: 0x3c
	// Line 299, Address: 0x2141e0, Func Offset: 0x80
	// Line 300, Address: 0x2141e4, Func Offset: 0x84
	// Line 301, Address: 0x2141ec, Func Offset: 0x8c
	// Line 302, Address: 0x2141f0, Func Offset: 0x90
	// Line 304, Address: 0x2141f8, Func Offset: 0x98
	// Line 307, Address: 0x21422c, Func Offset: 0xcc
	// Func End, Address: 0x214244, Func Offset: 0xe4
}

// 
// Start address: 0x214250
void EnemyKabeHandle(sfObj* obj)
{
	EnemyKabeWork* ew;
	float pos[4];
	// Line 311, Address: 0x214250, Func Offset: 0
	// Line 313, Address: 0x214260, Func Offset: 0x10
	// Line 314, Address: 0x21427c, Func Offset: 0x2c
	// Line 315, Address: 0x214284, Func Offset: 0x34
	// Line 316, Address: 0x21428c, Func Offset: 0x3c
	// Line 317, Address: 0x214290, Func Offset: 0x40
	// Line 318, Address: 0x21429c, Func Offset: 0x4c
	// Line 319, Address: 0x2142a4, Func Offset: 0x54
	// Line 320, Address: 0x2142ac, Func Offset: 0x5c
	// Line 321, Address: 0x2142bc, Func Offset: 0x6c
	// Line 323, Address: 0x2142d8, Func Offset: 0x88
	// Line 324, Address: 0x2142e0, Func Offset: 0x90
	// Line 325, Address: 0x2142f0, Func Offset: 0xa0
	// Line 326, Address: 0x2142fc, Func Offset: 0xac
	// Line 327, Address: 0x214304, Func Offset: 0xb4
	// Line 328, Address: 0x214308, Func Offset: 0xb8
	// Line 329, Address: 0x214310, Func Offset: 0xc0
	// Line 331, Address: 0x214318, Func Offset: 0xc8
	// Line 333, Address: 0x214324, Func Offset: 0xd4
	// Line 334, Address: 0x21433c, Func Offset: 0xec
	// Line 335, Address: 0x214344, Func Offset: 0xf4
	// Line 336, Address: 0x214350, Func Offset: 0x100
	// Line 338, Address: 0x214358, Func Offset: 0x108
	// Func End, Address: 0x21436c, Func Offset: 0x11c
}

// 
// Start address: 0x214370
void EnemyKabeDraw(sfObj* obj)
{
	EnemyKabeWork* ew;
	// Line 342, Address: 0x214370, Func Offset: 0
	// Line 344, Address: 0x21437c, Func Offset: 0xc
	// Line 345, Address: 0x214398, Func Offset: 0x28
	// Line 346, Address: 0x2143a0, Func Offset: 0x30
	// Line 348, Address: 0x2143a8, Func Offset: 0x38
	// Line 349, Address: 0x2143b0, Func Offset: 0x40
	// Line 350, Address: 0x2143cc, Func Offset: 0x5c
	// Line 351, Address: 0x2143d4, Func Offset: 0x64
	// Line 352, Address: 0x2143dc, Func Offset: 0x6c
	// Line 353, Address: 0x2143e4, Func Offset: 0x74
	// Line 354, Address: 0x2143e8, Func Offset: 0x78
	// Func End, Address: 0x2143f8, Func Offset: 0x88
}

// 
// Start address: 0x214400
void EnemyKabeDestruct(sfObj* obj)
{
	// Line 358, Address: 0x214400, Func Offset: 0
	// Line 359, Address: 0x214410, Func Offset: 0x10
	// Line 360, Address: 0x21442c, Func Offset: 0x2c
	// Line 361, Address: 0x214434, Func Offset: 0x34
	// Line 362, Address: 0x21443c, Func Offset: 0x3c
	// Line 363, Address: 0x214440, Func Offset: 0x40
	// Line 364, Address: 0x214448, Func Offset: 0x48
	// Line 366, Address: 0x214478, Func Offset: 0x78
	// Line 367, Address: 0x214498, Func Offset: 0x98
	// Line 369, Address: 0x2144bc, Func Offset: 0xbc
	// Line 370, Address: 0x2144c4, Func Offset: 0xc4
	// Line 371, Address: 0x2144c8, Func Offset: 0xc8
	// Line 372, Address: 0x2144d0, Func Offset: 0xd0
	// Line 373, Address: 0x2144d8, Func Offset: 0xd8
	// Func End, Address: 0x2144ec, Func Offset: 0xec
}

// 
// Start address: 0x2144f0
void EnemyKabeDataPreserve(sfObj* obj)
{
	EnemyManageDataOne* pe;
	// Line 377, Address: 0x2144f0, Func Offset: 0
	// Line 379, Address: 0x214500, Func Offset: 0x10
	// Line 380, Address: 0x21451c, Func Offset: 0x2c
	// Line 381, Address: 0x214524, Func Offset: 0x34
	// Line 382, Address: 0x21452c, Func Offset: 0x3c
	// Line 383, Address: 0x214530, Func Offset: 0x40
	// Line 384, Address: 0x21453c, Func Offset: 0x4c
	// Line 385, Address: 0x214548, Func Offset: 0x58
	// Line 386, Address: 0x214554, Func Offset: 0x64
	// Func End, Address: 0x21456c, Func Offset: 0x7c
}

// 
// Start address: 0x214570
void EnemyKabeDataExtract(sfObj* obj)
{
	EnemyManageDataOne* pe;
	// Line 390, Address: 0x214570, Func Offset: 0
	// Line 392, Address: 0x214580, Func Offset: 0x10
	// Line 393, Address: 0x21459c, Func Offset: 0x2c
	// Line 394, Address: 0x2145a4, Func Offset: 0x34
	// Line 395, Address: 0x2145ac, Func Offset: 0x3c
	// Line 396, Address: 0x2145b0, Func Offset: 0x40
	// Line 397, Address: 0x2145c4, Func Offset: 0x54
	// Line 398, Address: 0x2145d0, Func Offset: 0x60
	// Line 399, Address: 0x2145dc, Func Offset: 0x6c
	// Line 400, Address: 0x2145e4, Func Offset: 0x74
	// Func End, Address: 0x2145fc, Func Offset: 0x8c
}

// 
// Start address: 0x214600
void EnemyKabeAnimeSet(sfObj* obj, int anime)
{
	int r;
	int old_anime;
	int set_anime;
	// Line 404, Address: 0x214600, Func Offset: 0
	// Line 407, Address: 0x214620, Func Offset: 0x20
	// Line 408, Address: 0x214624, Func Offset: 0x24
	// Line 410, Address: 0x214630, Func Offset: 0x30
	// Line 411, Address: 0x214664, Func Offset: 0x64
	// Line 412, Address: 0x214668, Func Offset: 0x68
	// Line 414, Address: 0x21466c, Func Offset: 0x6c
	// Line 415, Address: 0x214674, Func Offset: 0x74
	// Line 416, Address: 0x214678, Func Offset: 0x78
	// Line 418, Address: 0x21467c, Func Offset: 0x7c
	// Line 419, Address: 0x214684, Func Offset: 0x84
	// Line 420, Address: 0x214688, Func Offset: 0x88
	// Line 421, Address: 0x214698, Func Offset: 0x98
	// Line 422, Address: 0x2146a0, Func Offset: 0xa0
	// Line 423, Address: 0x2146ac, Func Offset: 0xac
	// Line 424, Address: 0x2146bc, Func Offset: 0xbc
	// Line 425, Address: 0x2146c0, Func Offset: 0xc0
	// Line 426, Address: 0x2146cc, Func Offset: 0xcc
	// Line 427, Address: 0x2146d4, Func Offset: 0xd4
	// Line 428, Address: 0x2146d8, Func Offset: 0xd8
	// Line 429, Address: 0x2146e8, Func Offset: 0xe8
	// Line 431, Address: 0x2146f0, Func Offset: 0xf0
	// Line 432, Address: 0x2146fc, Func Offset: 0xfc
	// Line 433, Address: 0x214704, Func Offset: 0x104
	// Line 434, Address: 0x214708, Func Offset: 0x108
	// Line 435, Address: 0x214718, Func Offset: 0x118
	// Line 436, Address: 0x214720, Func Offset: 0x120
	// Line 437, Address: 0x214724, Func Offset: 0x124
	// Line 438, Address: 0x214728, Func Offset: 0x128
	// Line 439, Address: 0x214734, Func Offset: 0x134
	// Line 440, Address: 0x21473c, Func Offset: 0x13c
	// Line 443, Address: 0x2147b0, Func Offset: 0x1b0
	// Line 446, Address: 0x2147e0, Func Offset: 0x1e0
	// Line 447, Address: 0x2147f4, Func Offset: 0x1f4
	// Line 450, Address: 0x2147fc, Func Offset: 0x1fc
	// Line 451, Address: 0x214800, Func Offset: 0x200
	// Line 452, Address: 0x214808, Func Offset: 0x208
	// Line 454, Address: 0x214810, Func Offset: 0x210
	// Line 455, Address: 0x214828, Func Offset: 0x228
	// Line 460, Address: 0x214830, Func Offset: 0x230
	// Line 461, Address: 0x214838, Func Offset: 0x238
	// Line 463, Address: 0x214840, Func Offset: 0x240
	// Line 464, Address: 0x214858, Func Offset: 0x258
	// Line 466, Address: 0x214860, Func Offset: 0x260
	// Line 467, Address: 0x21486c, Func Offset: 0x26c
	// Line 468, Address: 0x214870, Func Offset: 0x270
	// Line 469, Address: 0x214878, Func Offset: 0x278
	// Line 470, Address: 0x214888, Func Offset: 0x288
	// Line 472, Address: 0x214890, Func Offset: 0x290
	// Line 473, Address: 0x2148a0, Func Offset: 0x2a0
	// Line 474, Address: 0x2148ac, Func Offset: 0x2ac
	// Line 475, Address: 0x2148b0, Func Offset: 0x2b0
	// Line 479, Address: 0x2148d8, Func Offset: 0x2d8
	// Line 480, Address: 0x2148e0, Func Offset: 0x2e0
	// Line 485, Address: 0x2148e8, Func Offset: 0x2e8
	// Line 487, Address: 0x21493c, Func Offset: 0x33c
	// Line 488, Address: 0x214940, Func Offset: 0x340
	// Line 489, Address: 0x21494c, Func Offset: 0x34c
	// Line 492, Address: 0x214954, Func Offset: 0x354
	// Line 493, Address: 0x214958, Func Offset: 0x358
	// Line 494, Address: 0x214964, Func Offset: 0x364
	// Line 495, Address: 0x21496c, Func Offset: 0x36c
	// Line 496, Address: 0x214970, Func Offset: 0x370
	// Line 498, Address: 0x21497c, Func Offset: 0x37c
	// Line 499, Address: 0x214980, Func Offset: 0x380
	// Func End, Address: 0x2149a0, Func Offset: 0x3a0
}

// 
// Start address: 0x2149a0
void EnemyKabeControl(sfObj* obj)
{
	EnemyKabeWork* ew;
	int step;
	float dt;
	// Line 527, Address: 0x2149a0, Func Offset: 0
	// Line 531, Address: 0x2149b8, Func Offset: 0x18
	// Line 532, Address: 0x2149c4, Func Offset: 0x24
	// Line 547, Address: 0x2149d0, Func Offset: 0x30
	// Line 549, Address: 0x2149f4, Func Offset: 0x54
	// Line 550, Address: 0x214a00, Func Offset: 0x60
	// Line 551, Address: 0x214a04, Func Offset: 0x64
	// Line 554, Address: 0x214a08, Func Offset: 0x68
	// Line 556, Address: 0x214a24, Func Offset: 0x84
	// Line 557, Address: 0x214a30, Func Offset: 0x90
	// Line 558, Address: 0x214a48, Func Offset: 0xa8
	// Line 559, Address: 0x214a5c, Func Offset: 0xbc
	// Line 560, Address: 0x214a68, Func Offset: 0xc8
	// Line 561, Address: 0x214a84, Func Offset: 0xe4
	// Line 562, Address: 0x214a88, Func Offset: 0xe8
	// Line 563, Address: 0x214a90, Func Offset: 0xf0
	// Func End, Address: 0x214aac, Func Offset: 0x10c
}

// 
// Start address: 0x214ab0
void EnemyKabeControlInit(sfObj* obj)
{
	EnemyKabeWork* ew;
	float* pos;
	float tpos[4];
	float rot[4];
	// Line 567, Address: 0x214ab0, Func Offset: 0
	// Line 570, Address: 0x214ac4, Func Offset: 0x14
	// Line 571, Address: 0x214ad0, Func Offset: 0x20
	// Line 579, Address: 0x214adc, Func Offset: 0x2c
	// Line 580, Address: 0x214ae8, Func Offset: 0x38
	// Line 579, Address: 0x214aec, Func Offset: 0x3c
	// Line 580, Address: 0x214af0, Func Offset: 0x40
	// Line 582, Address: 0x214b04, Func Offset: 0x54
	// Line 583, Address: 0x214b0c, Func Offset: 0x5c
	// Line 584, Address: 0x214b18, Func Offset: 0x68
	// Line 583, Address: 0x214b20, Func Offset: 0x70
	// Line 584, Address: 0x214b24, Func Offset: 0x74
	// Line 585, Address: 0x214b2c, Func Offset: 0x7c
	// Line 587, Address: 0x214b34, Func Offset: 0x84
	// Line 588, Address: 0x214b44, Func Offset: 0x94
	// Line 591, Address: 0x214b6c, Func Offset: 0xbc
	// Line 592, Address: 0x214b78, Func Offset: 0xc8
	// Line 594, Address: 0x214b94, Func Offset: 0xe4
	// Line 596, Address: 0x214bb0, Func Offset: 0x100
	// Line 597, Address: 0x214bcc, Func Offset: 0x11c
	// Line 598, Address: 0x214bd8, Func Offset: 0x128
	// Line 600, Address: 0x214be0, Func Offset: 0x130
	// Line 602, Address: 0x214c0c, Func Offset: 0x15c
	// Line 601, Address: 0x214c10, Func Offset: 0x160
	// Line 602, Address: 0x214c14, Func Offset: 0x164
	// Line 603, Address: 0x214c1c, Func Offset: 0x16c
	// Line 605, Address: 0x214c28, Func Offset: 0x178
	// Line 607, Address: 0x214c38, Func Offset: 0x188
	// Func End, Address: 0x214c50, Func Offset: 0x1a0
}

// 
// Start address: 0x214c50
void EnemyKabeControlHidden(sfObj* obj)
{
	EnemyKabeWork* ew;
	float* pos;
	// Line 611, Address: 0x214c50, Func Offset: 0
	// Line 614, Address: 0x214c64, Func Offset: 0x14
	// Line 615, Address: 0x214c70, Func Offset: 0x20
	// Line 616, Address: 0x214c7c, Func Offset: 0x2c
	// Line 617, Address: 0x214c8c, Func Offset: 0x3c
	// Line 618, Address: 0x214c94, Func Offset: 0x44
	// Line 619, Address: 0x214ca4, Func Offset: 0x54
	// Line 620, Address: 0x214cac, Func Offset: 0x5c
	// Line 621, Address: 0x214cb0, Func Offset: 0x60
	// Line 622, Address: 0x214cc4, Func Offset: 0x74
	// Line 624, Address: 0x214d08, Func Offset: 0xb8
	// Line 625, Address: 0x214d14, Func Offset: 0xc4
	// Line 626, Address: 0x214d18, Func Offset: 0xc8
	// Line 627, Address: 0x214d44, Func Offset: 0xf4
	// Line 628, Address: 0x214d4c, Func Offset: 0xfc
	// Line 629, Address: 0x214d50, Func Offset: 0x100
	// Func End, Address: 0x214d68, Func Offset: 0x118
}

// 
// Start address: 0x214d70
void EnemyKabeControlWait(sfObj* obj)
{
	EnemyKabeWork* ew;
	float* pos;
	float dist;
	// Line 633, Address: 0x214d70, Func Offset: 0
	// Line 637, Address: 0x214d88, Func Offset: 0x18
	// Line 638, Address: 0x214d94, Func Offset: 0x24
	// Line 639, Address: 0x214da0, Func Offset: 0x30
	// Line 643, Address: 0x214db0, Func Offset: 0x40
	// Line 639, Address: 0x214db4, Func Offset: 0x44
	// Line 643, Address: 0x214dbc, Func Offset: 0x4c
	// Line 645, Address: 0x214de4, Func Offset: 0x74
	// Line 647, Address: 0x214e10, Func Offset: 0xa0
	// Line 648, Address: 0x214e18, Func Offset: 0xa8
	// Line 649, Address: 0x214e28, Func Offset: 0xb8
	// Line 650, Address: 0x214e34, Func Offset: 0xc4
	// Line 652, Address: 0x214e3c, Func Offset: 0xcc
	// Line 653, Address: 0x214e40, Func Offset: 0xd0
	// Line 654, Address: 0x214e50, Func Offset: 0xe0
	// Line 655, Address: 0x214e58, Func Offset: 0xe8
	// Line 657, Address: 0x214e90, Func Offset: 0x120
	// Line 658, Address: 0x214e9c, Func Offset: 0x12c
	// Line 659, Address: 0x214ee4, Func Offset: 0x174
	// Line 660, Address: 0x214ef4, Func Offset: 0x184
	// Line 661, Address: 0x214efc, Func Offset: 0x18c
	// Line 662, Address: 0x214f08, Func Offset: 0x198
	// Line 664, Address: 0x214f14, Func Offset: 0x1a4
	// Line 665, Address: 0x214f44, Func Offset: 0x1d4
	// Line 666, Address: 0x214f64, Func Offset: 0x1f4
	// Line 667, Address: 0x214f6c, Func Offset: 0x1fc
	// Line 668, Address: 0x214f78, Func Offset: 0x208
	// Line 671, Address: 0x214f84, Func Offset: 0x214
	// Line 672, Address: 0x214f8c, Func Offset: 0x21c
	// Line 673, Address: 0x214f90, Func Offset: 0x220
	// Line 674, Address: 0x214fa0, Func Offset: 0x230
	// Line 675, Address: 0x214fa8, Func Offset: 0x238
	// Line 677, Address: 0x214fb0, Func Offset: 0x240
	// Line 678, Address: 0x214fd4, Func Offset: 0x264
	// Line 681, Address: 0x214fdc, Func Offset: 0x26c
	// Line 682, Address: 0x214fe0, Func Offset: 0x270
	// Line 683, Address: 0x215020, Func Offset: 0x2b0
	// Line 684, Address: 0x215028, Func Offset: 0x2b8
	// Line 686, Address: 0x215064, Func Offset: 0x2f4
	// Line 687, Address: 0x21506c, Func Offset: 0x2fc
	// Line 688, Address: 0x215070, Func Offset: 0x300
	// Func End, Address: 0x21508c, Func Offset: 0x31c
}

// 
// Start address: 0x215090
void EnemyKabeControlLook(sfObj* obj)
{
	EnemyKabeWork* ew;
	float* pos;
	float dt;
	// Line 692, Address: 0x215090, Func Offset: 0
	// Line 696, Address: 0x2150a8, Func Offset: 0x18
	// Line 697, Address: 0x2150b4, Func Offset: 0x24
	// Line 698, Address: 0x2150c0, Func Offset: 0x30
	// Line 699, Address: 0x2150d0, Func Offset: 0x40
	// Line 698, Address: 0x2150d4, Func Offset: 0x44
	// Line 699, Address: 0x2150d8, Func Offset: 0x48
	// Line 700, Address: 0x2150e4, Func Offset: 0x54
	// Line 702, Address: 0x2150f8, Func Offset: 0x68
	// Line 703, Address: 0x215104, Func Offset: 0x74
	// Line 705, Address: 0x215140, Func Offset: 0xb0
	// Line 706, Address: 0x215148, Func Offset: 0xb8
	// Line 707, Address: 0x215158, Func Offset: 0xc8
	// Line 709, Address: 0x215164, Func Offset: 0xd4
	// Line 712, Address: 0x215170, Func Offset: 0xe0
	// Line 713, Address: 0x21519c, Func Offset: 0x10c
	// Line 714, Address: 0x2151c0, Func Offset: 0x130
	// Line 715, Address: 0x2151c8, Func Offset: 0x138
	// Line 716, Address: 0x2151d4, Func Offset: 0x144
	// Line 717, Address: 0x2151e0, Func Offset: 0x150
	// Line 718, Address: 0x2151ec, Func Offset: 0x15c
	// Line 720, Address: 0x2151f4, Func Offset: 0x164
	// Line 722, Address: 0x215228, Func Offset: 0x198
	// Line 723, Address: 0x215234, Func Offset: 0x1a4
	// Line 724, Address: 0x215240, Func Offset: 0x1b0
	// Line 727, Address: 0x21527c, Func Offset: 0x1ec
	// Line 729, Address: 0x215284, Func Offset: 0x1f4
	// Line 730, Address: 0x21528c, Func Offset: 0x1fc
	// Line 731, Address: 0x215290, Func Offset: 0x200
	// Line 733, Address: 0x2152a4, Func Offset: 0x214
	// Line 734, Address: 0x2152ac, Func Offset: 0x21c
	// Line 735, Address: 0x2152b0, Func Offset: 0x220
	// Line 737, Address: 0x2152c8, Func Offset: 0x238
	// Line 739, Address: 0x2152d0, Func Offset: 0x240
	// Line 741, Address: 0x2152e8, Func Offset: 0x258
	// Line 743, Address: 0x2152f4, Func Offset: 0x264
	// Line 746, Address: 0x21534c, Func Offset: 0x2bc
	// Line 747, Address: 0x215354, Func Offset: 0x2c4
	// Line 748, Address: 0x215360, Func Offset: 0x2d0
	// Line 749, Address: 0x215368, Func Offset: 0x2d8
	// Line 751, Address: 0x215370, Func Offset: 0x2e0
	// Func End, Address: 0x21538c, Func Offset: 0x2fc
}

// 
// Start address: 0x215390
void EnemyKabeControlAttackW(sfObj* obj)
{
	EnemyKabeWork* ew;
	float bpos[4];
	float r;
	float d;
	BattleAttackKind ak;
	int bn;
	int tp;
	// Line 755, Address: 0x215390, Func Offset: 0
	// Line 761, Address: 0x2153b0, Func Offset: 0x20
	// Line 762, Address: 0x2153bc, Func Offset: 0x2c
	// Line 763, Address: 0x2153ec, Func Offset: 0x5c
	// Line 764, Address: 0x2153f0, Func Offset: 0x60
	// Line 765, Address: 0x2153fc, Func Offset: 0x6c
	// Line 766, Address: 0x21540c, Func Offset: 0x7c
	// Line 767, Address: 0x21541c, Func Offset: 0x8c
	// Line 768, Address: 0x21542c, Func Offset: 0x9c
	// Line 769, Address: 0x215438, Func Offset: 0xa8
	// Line 770, Address: 0x215470, Func Offset: 0xe0
	// Line 771, Address: 0x21547c, Func Offset: 0xec
	// Line 773, Address: 0x2154f8, Func Offset: 0x168
	// Line 774, Address: 0x215504, Func Offset: 0x174
	// Line 775, Address: 0x215510, Func Offset: 0x180
	// Line 776, Address: 0x21551c, Func Offset: 0x18c
	// Line 777, Address: 0x215520, Func Offset: 0x190
	// Line 778, Address: 0x215544, Func Offset: 0x1b4
	// Line 779, Address: 0x21554c, Func Offset: 0x1bc
	// Line 780, Address: 0x215554, Func Offset: 0x1c4
	// Line 781, Address: 0x215558, Func Offset: 0x1c8
	// Line 782, Address: 0x21557c, Func Offset: 0x1ec
	// Line 784, Address: 0x2155a0, Func Offset: 0x210
	// Line 785, Address: 0x2155ac, Func Offset: 0x21c
	// Line 789, Address: 0x2155b4, Func Offset: 0x224
	// Line 790, Address: 0x2155b8, Func Offset: 0x228
	// Line 794, Address: 0x2155d0, Func Offset: 0x240
	// Line 795, Address: 0x2155d8, Func Offset: 0x248
	// Line 798, Address: 0x2155ec, Func Offset: 0x25c
	// Line 799, Address: 0x21560c, Func Offset: 0x27c
	// Line 800, Address: 0x215610, Func Offset: 0x280
	// Line 803, Address: 0x215614, Func Offset: 0x284
	// Line 804, Address: 0x21561c, Func Offset: 0x28c
	// Line 805, Address: 0x215620, Func Offset: 0x290
	// Line 808, Address: 0x215624, Func Offset: 0x294
	// Line 809, Address: 0x21562c, Func Offset: 0x29c
	// Line 810, Address: 0x215630, Func Offset: 0x2a0
	// Line 811, Address: 0x215634, Func Offset: 0x2a4
	// Line 815, Address: 0x215638, Func Offset: 0x2a8
	// Line 816, Address: 0x21564c, Func Offset: 0x2bc
	// Line 817, Address: 0x215660, Func Offset: 0x2d0
	// Line 818, Address: 0x21566c, Func Offset: 0x2dc
	// Line 821, Address: 0x215678, Func Offset: 0x2e8
	// Line 822, Address: 0x215680, Func Offset: 0x2f0
	// Line 824, Address: 0x2156c4, Func Offset: 0x334
	// Line 825, Address: 0x2156c8, Func Offset: 0x338
	// Line 827, Address: 0x2156cc, Func Offset: 0x33c
	// Line 828, Address: 0x2156d0, Func Offset: 0x340
	// Line 829, Address: 0x2156e4, Func Offset: 0x354
	// Line 830, Address: 0x2156ec, Func Offset: 0x35c
	// Line 832, Address: 0x2156f8, Func Offset: 0x368
	// Line 833, Address: 0x215704, Func Offset: 0x374
	// Line 834, Address: 0x21570c, Func Offset: 0x37c
	// Line 835, Address: 0x215710, Func Offset: 0x380
	// Line 836, Address: 0x215720, Func Offset: 0x390
	// Line 840, Address: 0x215738, Func Offset: 0x3a8
	// Func End, Address: 0x21575c, Func Offset: 0x3cc
}

// 
// Start address: 0x215760
void EnemyKabeControlAppear(sfObj* obj)
{
	// Line 844, Address: 0x215760, Func Offset: 0
	// Line 845, Address: 0x21576c, Func Offset: 0xc
	// Line 847, Address: 0x215790, Func Offset: 0x30
	// Line 848, Address: 0x215798, Func Offset: 0x38
	// Line 849, Address: 0x2157a8, Func Offset: 0x48
	// Line 850, Address: 0x2157b4, Func Offset: 0x54
	// Line 852, Address: 0x2157bc, Func Offset: 0x5c
	// Line 853, Address: 0x2157c0, Func Offset: 0x60
	// Line 857, Address: 0x2157d8, Func Offset: 0x78
	// Line 858, Address: 0x2157e0, Func Offset: 0x80
	// Func End, Address: 0x2157f0, Func Offset: 0x90
}

// 
// Start address: 0x2157f0
void EnemyKabeControlStay(sfObj* obj)
{
	EnemyKabeWork* ew;
	float* pos;
	float dt;
	// Line 862, Address: 0x2157f0, Func Offset: 0
	// Line 866, Address: 0x215808, Func Offset: 0x18
	// Line 867, Address: 0x215814, Func Offset: 0x24
	// Line 868, Address: 0x215820, Func Offset: 0x30
	// Line 869, Address: 0x215830, Func Offset: 0x40
	// Line 870, Address: 0x21583c, Func Offset: 0x4c
	// Line 872, Address: 0x215860, Func Offset: 0x70
	// Line 873, Address: 0x215868, Func Offset: 0x78
	// Line 874, Address: 0x215878, Func Offset: 0x88
	// Line 875, Address: 0x215884, Func Offset: 0x94
	// Line 876, Address: 0x215898, Func Offset: 0xa8
	// Line 875, Address: 0x21589c, Func Offset: 0xac
	// Line 876, Address: 0x2158ac, Func Offset: 0xbc
	// Line 878, Address: 0x2158b4, Func Offset: 0xc4
	// Line 879, Address: 0x2158b8, Func Offset: 0xc8
	// Line 880, Address: 0x2158c8, Func Offset: 0xd8
	// Line 881, Address: 0x2158d8, Func Offset: 0xe8
	// Line 883, Address: 0x2158e0, Func Offset: 0xf0
	// Line 884, Address: 0x2158f4, Func Offset: 0x104
	// Line 885, Address: 0x2158f8, Func Offset: 0x108
	// Line 886, Address: 0x215908, Func Offset: 0x118
	// Line 887, Address: 0x215918, Func Offset: 0x128
	// Line 888, Address: 0x215920, Func Offset: 0x130
	// Line 889, Address: 0x215928, Func Offset: 0x138
	// Line 891, Address: 0x215934, Func Offset: 0x144
	// Line 893, Address: 0x215964, Func Offset: 0x174
	// Line 894, Address: 0x215974, Func Offset: 0x184
	// Line 896, Address: 0x21597c, Func Offset: 0x18c
	// Line 897, Address: 0x215998, Func Offset: 0x1a8
	// Line 900, Address: 0x2159f0, Func Offset: 0x200
	// Line 902, Address: 0x2159fc, Func Offset: 0x20c
	// Line 904, Address: 0x215a2c, Func Offset: 0x23c
	// Line 907, Address: 0x215a34, Func Offset: 0x244
	// Line 908, Address: 0x215a38, Func Offset: 0x248
	// Line 909, Address: 0x215a40, Func Offset: 0x250
	// Func End, Address: 0x215a5c, Func Offset: 0x26c
}

// 
// Start address: 0x215a60
void EnemyKabeControlDisappear(sfObj* obj)
{
	// Line 913, Address: 0x215a60, Func Offset: 0
	// Line 914, Address: 0x215a6c, Func Offset: 0xc
	// Line 916, Address: 0x215a90, Func Offset: 0x30
	// Line 917, Address: 0x215a9c, Func Offset: 0x3c
	// Line 918, Address: 0x215aac, Func Offset: 0x4c
	// Line 919, Address: 0x215ab8, Func Offset: 0x58
	// Line 922, Address: 0x215ac0, Func Offset: 0x60
	// Line 926, Address: 0x215ad8, Func Offset: 0x78
	// Line 927, Address: 0x215ae0, Func Offset: 0x80
	// Func End, Address: 0x215af0, Func Offset: 0x90
}

// 
// Start address: 0x215af0
void EnemyKabeControlAttackA(sfObj* obj)
{
	EnemyKabeWork* ew;
	float bpos[4];
	float r;
	float d;
	BattleAttackKind ak;
	int bn;
	int tp;
	int anime;
	// Line 931, Address: 0x215af0, Func Offset: 0
	// Line 937, Address: 0x215b10, Func Offset: 0x20
	// Line 938, Address: 0x215b1c, Func Offset: 0x2c
	// Line 940, Address: 0x215b48, Func Offset: 0x58
	// Line 941, Address: 0x215b54, Func Offset: 0x64
	// Line 942, Address: 0x215b64, Func Offset: 0x74
	// Line 943, Address: 0x215b74, Func Offset: 0x84
	// Line 944, Address: 0x215b84, Func Offset: 0x94
	// Line 945, Address: 0x215b8c, Func Offset: 0x9c
	// Line 946, Address: 0x215b98, Func Offset: 0xa8
	// Line 947, Address: 0x215bb4, Func Offset: 0xc4
	// Line 949, Address: 0x215bc8, Func Offset: 0xd8
	// Line 951, Address: 0x215bec, Func Offset: 0xfc
	// Line 953, Address: 0x215c14, Func Offset: 0x124
	// Line 956, Address: 0x215c20, Func Offset: 0x130
	// Line 957, Address: 0x215c3c, Func Offset: 0x14c
	// Line 959, Address: 0x215c54, Func Offset: 0x164
	// Line 962, Address: 0x215c60, Func Offset: 0x170
	// Line 963, Address: 0x215c68, Func Offset: 0x178
	// Line 965, Address: 0x215c84, Func Offset: 0x194
	// Line 967, Address: 0x215cac, Func Offset: 0x1bc
	// Line 968, Address: 0x215cb8, Func Offset: 0x1c8
	// Line 970, Address: 0x215cbc, Func Offset: 0x1cc
	// Line 971, Address: 0x215cc0, Func Offset: 0x1d0
	// Line 972, Address: 0x215cc8, Func Offset: 0x1d8
	// Line 973, Address: 0x215cd0, Func Offset: 0x1e0
	// Line 976, Address: 0x215cd8, Func Offset: 0x1e8
	// Line 980, Address: 0x215d08, Func Offset: 0x218
	// Line 982, Address: 0x215d20, Func Offset: 0x230
	// Line 984, Address: 0x215d28, Func Offset: 0x238
	// Line 989, Address: 0x215d40, Func Offset: 0x250
	// Line 990, Address: 0x215d48, Func Offset: 0x258
	// Line 993, Address: 0x215d5c, Func Offset: 0x26c
	// Line 994, Address: 0x215d9c, Func Offset: 0x2ac
	// Line 995, Address: 0x215da0, Func Offset: 0x2b0
	// Line 998, Address: 0x215da4, Func Offset: 0x2b4
	// Line 999, Address: 0x215dac, Func Offset: 0x2bc
	// Line 1000, Address: 0x215db0, Func Offset: 0x2c0
	// Line 1003, Address: 0x215db4, Func Offset: 0x2c4
	// Line 1004, Address: 0x215dbc, Func Offset: 0x2cc
	// Line 1005, Address: 0x215dc0, Func Offset: 0x2d0
	// Line 1008, Address: 0x215dc4, Func Offset: 0x2d4
	// Line 1009, Address: 0x215dcc, Func Offset: 0x2dc
	// Line 1010, Address: 0x215dd0, Func Offset: 0x2e0
	// Line 1013, Address: 0x215dd4, Func Offset: 0x2e4
	// Line 1014, Address: 0x215ddc, Func Offset: 0x2ec
	// Line 1015, Address: 0x215de0, Func Offset: 0x2f0
	// Line 1016, Address: 0x215de4, Func Offset: 0x2f4
	// Line 1020, Address: 0x215de8, Func Offset: 0x2f8
	// Line 1021, Address: 0x215dfc, Func Offset: 0x30c
	// Line 1022, Address: 0x215e10, Func Offset: 0x320
	// Line 1023, Address: 0x215e1c, Func Offset: 0x32c
	// Line 1024, Address: 0x215e40, Func Offset: 0x350
	// Line 1026, Address: 0x215e48, Func Offset: 0x358
	// Line 1029, Address: 0x215e54, Func Offset: 0x364
	// Line 1030, Address: 0x215e60, Func Offset: 0x370
	// Line 1033, Address: 0x215ea0, Func Offset: 0x3b0
	// Line 1035, Address: 0x215ea4, Func Offset: 0x3b4
	// Line 1036, Address: 0x215ea8, Func Offset: 0x3b8
	// Line 1037, Address: 0x215ebc, Func Offset: 0x3cc
	// Line 1038, Address: 0x215ec4, Func Offset: 0x3d4
	// Line 1040, Address: 0x215ed0, Func Offset: 0x3e0
	// Line 1041, Address: 0x215edc, Func Offset: 0x3ec
	// Line 1042, Address: 0x215ee4, Func Offset: 0x3f4
	// Line 1043, Address: 0x215ee8, Func Offset: 0x3f8
	// Line 1044, Address: 0x215ef8, Func Offset: 0x408
	// Line 1048, Address: 0x215f10, Func Offset: 0x420
	// Func End, Address: 0x215f34, Func Offset: 0x444
}

// 
// Start address: 0x215f40
int set_damage_anime(sfObj* obj, EnemyBattleDamage* bd)
{
	int anime;
	int d;
	// Line 1052, Address: 0x215f40, Func Offset: 0
	// Line 1054, Address: 0x215f58, Func Offset: 0x18
	// Line 1055, Address: 0x215f78, Func Offset: 0x38
	// Line 1057, Address: 0x215fa0, Func Offset: 0x60
	// Line 1059, Address: 0x215fa8, Func Offset: 0x68
	// Line 1061, Address: 0x215fc0, Func Offset: 0x80
	// Line 1064, Address: 0x215fc8, Func Offset: 0x88
	// Line 1066, Address: 0x215fd0, Func Offset: 0x90
	// Line 1068, Address: 0x215fd8, Func Offset: 0x98
	// Line 1071, Address: 0x215fe0, Func Offset: 0xa0
	// Line 1074, Address: 0x215fe8, Func Offset: 0xa8
	// Line 1076, Address: 0x215ff0, Func Offset: 0xb0
	// Line 1079, Address: 0x215ff8, Func Offset: 0xb8
	// Line 1082, Address: 0x216000, Func Offset: 0xc0
	// Line 1084, Address: 0x216008, Func Offset: 0xc8
	// Line 1087, Address: 0x216010, Func Offset: 0xd0
	// Line 1089, Address: 0x216018, Func Offset: 0xd8
	// Line 1091, Address: 0x216020, Func Offset: 0xe0
	// Line 1094, Address: 0x216028, Func Offset: 0xe8
	// Line 1096, Address: 0x216030, Func Offset: 0xf0
	// Line 1098, Address: 0x216038, Func Offset: 0xf8
	// Line 1101, Address: 0x216040, Func Offset: 0x100
	// Line 1104, Address: 0x216048, Func Offset: 0x108
	// Line 1106, Address: 0x216050, Func Offset: 0x110
	// Line 1109, Address: 0x216058, Func Offset: 0x118
	// Line 1111, Address: 0x216060, Func Offset: 0x120
	// Line 1113, Address: 0x216064, Func Offset: 0x124
	// Line 1116, Address: 0x21606c, Func Offset: 0x12c
	// Line 1117, Address: 0x216070, Func Offset: 0x130
	// Line 1119, Address: 0x216074, Func Offset: 0x134
	// Line 1120, Address: 0x21607c, Func Offset: 0x13c
	// Line 1121, Address: 0x216080, Func Offset: 0x140
	// Line 1123, Address: 0x216088, Func Offset: 0x148
	// Line 1126, Address: 0x216090, Func Offset: 0x150
	// Line 1129, Address: 0x216098, Func Offset: 0x158
	// Line 1130, Address: 0x21609c, Func Offset: 0x15c
	// Line 1133, Address: 0x2160a0, Func Offset: 0x160
	// Line 1134, Address: 0x2160a8, Func Offset: 0x168
	// Line 1135, Address: 0x2160b8, Func Offset: 0x178
	// Line 1136, Address: 0x2160c0, Func Offset: 0x180
	// Line 1137, Address: 0x2160c8, Func Offset: 0x188
	// Line 1138, Address: 0x2160dc, Func Offset: 0x19c
	// Line 1139, Address: 0x2160e0, Func Offset: 0x1a0
	// Line 1140, Address: 0x2160e4, Func Offset: 0x1a4
	// Func End, Address: 0x2160fc, Func Offset: 0x1bc
}

// 
// Start address: 0x216100
void EnemyKabeControlDamage(sfObj* obj)
{
	EnemyKabeWork* ew;
	float dt;
	EnemyBattleDamage bd;
	// Line 1144, Address: 0x216100, Func Offset: 0
	// Line 1147, Address: 0x216114, Func Offset: 0x14
	// Line 1148, Address: 0x21611c, Func Offset: 0x1c
	// Line 1149, Address: 0x216128, Func Offset: 0x28
	// Line 1151, Address: 0x216160, Func Offset: 0x60
	// Line 1154, Address: 0x21616c, Func Offset: 0x6c
	// Line 1155, Address: 0x216178, Func Offset: 0x78
	// Line 1156, Address: 0x216184, Func Offset: 0x84
	// Line 1159, Address: 0x21619c, Func Offset: 0x9c
	// Line 1160, Address: 0x2161a4, Func Offset: 0xa4
	// Line 1161, Address: 0x2161a8, Func Offset: 0xa8
	// Line 1163, Address: 0x2161c0, Func Offset: 0xc0
	// Line 1164, Address: 0x2161c8, Func Offset: 0xc8
	// Line 1166, Address: 0x2161d0, Func Offset: 0xd0
	// Line 1168, Address: 0x2161e8, Func Offset: 0xe8
	// Line 1169, Address: 0x2161f0, Func Offset: 0xf0
	// Line 1171, Address: 0x2161f8, Func Offset: 0xf8
	// Line 1172, Address: 0x216218, Func Offset: 0x118
	// Line 1173, Address: 0x216224, Func Offset: 0x124
	// Line 1175, Address: 0x216230, Func Offset: 0x130
	// Line 1178, Address: 0x216238, Func Offset: 0x138
	// Func End, Address: 0x216250, Func Offset: 0x150
}

// 
// Start address: 0x216250
void EnemyKabeControlDown(sfObj* obj)
{
	EnemyKabeWork* ew;
	float dt;
	// Line 1182, Address: 0x216250, Func Offset: 0
	// Line 1185, Address: 0x216264, Func Offset: 0x14
	// Line 1186, Address: 0x21626c, Func Offset: 0x1c
	// Line 1187, Address: 0x216278, Func Offset: 0x28
	// Line 1189, Address: 0x2162b0, Func Offset: 0x60
	// Line 1190, Address: 0x2162bc, Func Offset: 0x6c
	// Line 1191, Address: 0x2162d8, Func Offset: 0x88
	// Line 1192, Address: 0x2162e0, Func Offset: 0x90
	// Line 1193, Address: 0x2162f0, Func Offset: 0xa0
	// Line 1194, Address: 0x2162f8, Func Offset: 0xa8
	// Line 1195, Address: 0x216308, Func Offset: 0xb8
	// Line 1196, Address: 0x216310, Func Offset: 0xc0
	// Line 1197, Address: 0x21631c, Func Offset: 0xcc
	// Line 1198, Address: 0x216328, Func Offset: 0xd8
	// Line 1199, Address: 0x216334, Func Offset: 0xe4
	// Line 1200, Address: 0x216338, Func Offset: 0xe8
	// Line 1202, Address: 0x216340, Func Offset: 0xf0
	// Line 1203, Address: 0x216354, Func Offset: 0x104
	// Line 1202, Address: 0x216358, Func Offset: 0x108
	// Line 1203, Address: 0x216368, Func Offset: 0x118
	// Line 1206, Address: 0x216370, Func Offset: 0x120
	// Line 1207, Address: 0x21638c, Func Offset: 0x13c
	// Line 1208, Address: 0x216398, Func Offset: 0x148
	// Line 1209, Address: 0x2163b4, Func Offset: 0x164
	// Line 1210, Address: 0x2163c0, Func Offset: 0x170
	// Line 1211, Address: 0x2163c8, Func Offset: 0x178
	// Line 1213, Address: 0x2163d0, Func Offset: 0x180
	// Line 1214, Address: 0x2163f4, Func Offset: 0x1a4
	// Line 1215, Address: 0x2163fc, Func Offset: 0x1ac
	// Line 1216, Address: 0x216400, Func Offset: 0x1b0
	// Line 1217, Address: 0x216408, Func Offset: 0x1b8
	// Line 1219, Address: 0x216410, Func Offset: 0x1c0
	// Line 1221, Address: 0x216428, Func Offset: 0x1d8
	// Line 1223, Address: 0x216430, Func Offset: 0x1e0
	// Line 1224, Address: 0x216440, Func Offset: 0x1f0
	// Line 1225, Address: 0x216448, Func Offset: 0x1f8
	// Line 1226, Address: 0x216458, Func Offset: 0x208
	// Line 1227, Address: 0x216460, Func Offset: 0x210
	// Line 1228, Address: 0x216470, Func Offset: 0x220
	// Line 1229, Address: 0x216478, Func Offset: 0x228
	// Line 1230, Address: 0x216484, Func Offset: 0x234
	// Line 1231, Address: 0x216490, Func Offset: 0x240
	// Line 1235, Address: 0x21649c, Func Offset: 0x24c
	// Line 1236, Address: 0x2164a0, Func Offset: 0x250
	// Func End, Address: 0x2164b8, Func Offset: 0x268
}

// 
// Start address: 0x2164c0
void EnemyKabeControlDead(sfObj* obj)
{
	EnemyKabeWork* ew;
	// Line 1240, Address: 0x2164c0, Func Offset: 0
	// Line 1242, Address: 0x2164d0, Func Offset: 0x10
	// Line 1243, Address: 0x2164dc, Func Offset: 0x1c
	// Line 1245, Address: 0x216500, Func Offset: 0x40
	// Line 1247, Address: 0x216538, Func Offset: 0x78
	// Line 1248, Address: 0x216540, Func Offset: 0x80
	// Line 1250, Address: 0x216548, Func Offset: 0x88
	// Line 1252, Address: 0x216550, Func Offset: 0x90
	// Line 1253, Address: 0x21656c, Func Offset: 0xac
	// Line 1256, Address: 0x216574, Func Offset: 0xb4
	// Line 1257, Address: 0x216578, Func Offset: 0xb8
	// Func End, Address: 0x21658c, Func Offset: 0xcc
}

// 
// Start address: 0x216590
void EnemyKabeControlDeadSinceStart(sfObj* obj)
{
	// Line 1261, Address: 0x216590, Func Offset: 0
	// Line 1262, Address: 0x21659c, Func Offset: 0xc
	// Line 1263, Address: 0x2165b4, Func Offset: 0x24
	// Line 1264, Address: 0x2165b8, Func Offset: 0x28
	// Line 1265, Address: 0x2165c4, Func Offset: 0x34
	// Line 1266, Address: 0x2165d0, Func Offset: 0x40
	// Line 1267, Address: 0x2165e0, Func Offset: 0x50
	// Line 1268, Address: 0x2165e8, Func Offset: 0x58
	// Line 1269, Address: 0x2165f4, Func Offset: 0x64
	// Line 1270, Address: 0x216600, Func Offset: 0x70
	// Line 1273, Address: 0x216608, Func Offset: 0x78
	// Func End, Address: 0x216618, Func Offset: 0x88
}

// 
// Start address: 0x216620
void EnemyKabeControlEvent(sfObj* obj)
{
	// Line 1277, Address: 0x216620, Func Offset: 0
	// Line 1278, Address: 0x216630, Func Offset: 0x10
	// Line 1279, Address: 0x216654, Func Offset: 0x34
	// Line 1280, Address: 0x216658, Func Offset: 0x38
	// Line 1281, Address: 0x216664, Func Offset: 0x44
	// Line 1282, Address: 0x216674, Func Offset: 0x54
	// Line 1283, Address: 0x216680, Func Offset: 0x60
	// Line 1285, Address: 0x2166a8, Func Offset: 0x88
	// Line 1286, Address: 0x2166b0, Func Offset: 0x90
	// Line 1288, Address: 0x2166b8, Func Offset: 0x98
	// Line 1289, Address: 0x2166c8, Func Offset: 0xa8
	// Line 1290, Address: 0x2166e8, Func Offset: 0xc8
	// Line 1291, Address: 0x2166f0, Func Offset: 0xd0
	// Line 1292, Address: 0x216720, Func Offset: 0x100
	// Line 1293, Address: 0x216728, Func Offset: 0x108
	// Line 1294, Address: 0x216734, Func Offset: 0x114
	// Line 1298, Address: 0x216764, Func Offset: 0x144
	// Line 1299, Address: 0x216768, Func Offset: 0x148
	// Line 1300, Address: 0x216778, Func Offset: 0x158
	// Line 1302, Address: 0x216780, Func Offset: 0x160
	// Func End, Address: 0x216794, Func Offset: 0x174
}

// 
// Start address: 0x2167a0
void EnemyKabeControlNoMove(sfObj* obj)
{
	// Line 1306, Address: 0x2167a0, Func Offset: 0
	// Line 1307, Address: 0x2167ac, Func Offset: 0xc
	// Line 1308, Address: 0x2167c4, Func Offset: 0x24
	// Line 1309, Address: 0x2167c8, Func Offset: 0x28
	// Line 1310, Address: 0x2167d4, Func Offset: 0x34
	// Line 1311, Address: 0x2167e0, Func Offset: 0x40
	// Line 1312, Address: 0x2167e8, Func Offset: 0x48
	// Line 1313, Address: 0x2167f0, Func Offset: 0x50
	// Line 1316, Address: 0x2167f8, Func Offset: 0x58
	// Func End, Address: 0x216808, Func Offset: 0x68
}

// 
// Start address: 0x216810
void EnemyKabeControlWait2(sfObj* obj)
{
	float tpos[4];
	// Line 1320, Address: 0x216810, Func Offset: 0
	// Line 1322, Address: 0x21681c, Func Offset: 0xc
	// Line 1324, Address: 0x216840, Func Offset: 0x30
	// Line 1325, Address: 0x21684c, Func Offset: 0x3c
	// Line 1326, Address: 0x216858, Func Offset: 0x48
	// Line 1327, Address: 0x216864, Func Offset: 0x54
	// Line 1326, Address: 0x21686c, Func Offset: 0x5c
	// Line 1327, Address: 0x216870, Func Offset: 0x60
	// Line 1328, Address: 0x216878, Func Offset: 0x68
	// Line 1329, Address: 0x216880, Func Offset: 0x70
	// Line 1330, Address: 0x21688c, Func Offset: 0x7c
	// Line 1331, Address: 0x216894, Func Offset: 0x84
	// Line 1332, Address: 0x21689c, Func Offset: 0x8c
	// Line 1333, Address: 0x2168a0, Func Offset: 0x90
	// Line 1335, Address: 0x2168c4, Func Offset: 0xb4
	// Line 1338, Address: 0x2168cc, Func Offset: 0xbc
	// Line 1339, Address: 0x2168d0, Func Offset: 0xc0
	// Func End, Address: 0x2168e0, Func Offset: 0xd0
}

// 
// Start address: 0x2168e0
void EnemyKabeControlAppear2(sfObj* obj)
{
	float* pos;
	float tpos[4];
	float vec[4];
	float dt;
	// Line 1343, Address: 0x2168e0, Func Offset: 0
	// Line 1347, Address: 0x2168f8, Func Offset: 0x18
	// Line 1348, Address: 0x216904, Func Offset: 0x24
	// Line 1349, Address: 0x216910, Func Offset: 0x30
	// Line 1350, Address: 0x21691c, Func Offset: 0x3c
	// Line 1352, Address: 0x216948, Func Offset: 0x68
	// Line 1353, Address: 0x216950, Func Offset: 0x70
	// Line 1354, Address: 0x21695c, Func Offset: 0x7c
	// Line 1355, Address: 0x216964, Func Offset: 0x84
	// Line 1357, Address: 0x21696c, Func Offset: 0x8c
	// Line 1358, Address: 0x216970, Func Offset: 0x90
	// Line 1359, Address: 0x21697c, Func Offset: 0x9c
	// Line 1360, Address: 0x216990, Func Offset: 0xb0
	// Line 1361, Address: 0x21699c, Func Offset: 0xbc
	// Line 1362, Address: 0x2169bc, Func Offset: 0xdc
	// Line 1363, Address: 0x2169c4, Func Offset: 0xe4
	// Line 1364, Address: 0x2169c8, Func Offset: 0xe8
	// Line 1365, Address: 0x2169d4, Func Offset: 0xf4
	// Line 1367, Address: 0x2169e0, Func Offset: 0x100
	// Line 1366, Address: 0x2169e4, Func Offset: 0x104
	// Line 1367, Address: 0x2169e8, Func Offset: 0x108
	// Line 1366, Address: 0x2169ec, Func Offset: 0x10c
	// Line 1367, Address: 0x2169f4, Func Offset: 0x114
	// Line 1368, Address: 0x2169fc, Func Offset: 0x11c
	// Line 1369, Address: 0x216a00, Func Offset: 0x120
	// Line 1371, Address: 0x216a0c, Func Offset: 0x12c
	// Line 1372, Address: 0x216a10, Func Offset: 0x130
	// Line 1373, Address: 0x216a18, Func Offset: 0x138
	// Func End, Address: 0x216a34, Func Offset: 0x154
}

// 
// Start address: 0x216a40
void EnemyKabeControlDisappear2(sfObj* obj)
{
	float* pos;
	float tpos[4];
	float vec[4];
	float dt;
	// Line 1377, Address: 0x216a40, Func Offset: 0
	// Line 1381, Address: 0x216a54, Func Offset: 0x14
	// Line 1382, Address: 0x216a60, Func Offset: 0x20
	// Line 1383, Address: 0x216a6c, Func Offset: 0x2c
	// Line 1384, Address: 0x216a78, Func Offset: 0x38
	// Line 1385, Address: 0x216a9c, Func Offset: 0x5c
	// Line 1386, Address: 0x216aa0, Func Offset: 0x60
	// Line 1387, Address: 0x216aac, Func Offset: 0x6c
	// Line 1388, Address: 0x216ab8, Func Offset: 0x78
	// Line 1389, Address: 0x216ac0, Func Offset: 0x80
	// Line 1391, Address: 0x216ac8, Func Offset: 0x88
	// Line 1392, Address: 0x216ad0, Func Offset: 0x90
	// Line 1393, Address: 0x216af0, Func Offset: 0xb0
	// Line 1394, Address: 0x216afc, Func Offset: 0xbc
	// Line 1395, Address: 0x216b08, Func Offset: 0xc8
	// Line 1396, Address: 0x216b14, Func Offset: 0xd4
	// Line 1397, Address: 0x216b18, Func Offset: 0xd8
	// Line 1399, Address: 0x216b24, Func Offset: 0xe4
	// Line 1400, Address: 0x216b28, Func Offset: 0xe8
	// Line 1402, Address: 0x216b4c, Func Offset: 0x10c
	// Line 1403, Address: 0x216b54, Func Offset: 0x114
	// Line 1404, Address: 0x216b58, Func Offset: 0x118
	// Line 1405, Address: 0x216b60, Func Offset: 0x120
	// Func End, Address: 0x216b78, Func Offset: 0x138
}

// 
// Start address: 0x216b80
void EnemyKabeControlDead2(sfObj* obj)
{
	float* pos;
	float tpos[4];
	float vec[4];
	float dt;
	// Line 1409, Address: 0x216b80, Func Offset: 0
	// Line 1413, Address: 0x216b94, Func Offset: 0x14
	// Line 1414, Address: 0x216ba0, Func Offset: 0x20
	// Line 1415, Address: 0x216bac, Func Offset: 0x2c
	// Line 1416, Address: 0x216bb8, Func Offset: 0x38
	// Line 1417, Address: 0x216bdc, Func Offset: 0x5c
	// Line 1418, Address: 0x216be0, Func Offset: 0x60
	// Line 1419, Address: 0x216bec, Func Offset: 0x6c
	// Line 1420, Address: 0x216bf8, Func Offset: 0x78
	// Line 1421, Address: 0x216c00, Func Offset: 0x80
	// Line 1423, Address: 0x216c08, Func Offset: 0x88
	// Line 1424, Address: 0x216c10, Func Offset: 0x90
	// Line 1425, Address: 0x216c30, Func Offset: 0xb0
	// Line 1426, Address: 0x216c3c, Func Offset: 0xbc
	// Line 1427, Address: 0x216c48, Func Offset: 0xc8
	// Line 1429, Address: 0x216c50, Func Offset: 0xd0
	// Line 1431, Address: 0x216c5c, Func Offset: 0xdc
	// Line 1432, Address: 0x216c60, Func Offset: 0xe0
	// Func End, Address: 0x216c78, Func Offset: 0xf8
}

// 
// Start address: 0x216c80
void EnemyKabeControlTest()
{
	// Line 1508, Address: 0x216c80, Func Offset: 0
	// Func End, Address: 0x216c88, Func Offset: 0x8
}

// 
// Start address: 0x216c90
int EnemyKabeCheckPlayerInSamePartition(sfObj* obj)
{
	EnemyKabeWork* ew;
	// Line 1513, Address: 0x216c90, Func Offset: 0
	// Line 1515, Address: 0x216ca0, Func Offset: 0x10
	// Line 1516, Address: 0x216ca8, Func Offset: 0x18
	// Line 1515, Address: 0x216cac, Func Offset: 0x1c
	// Line 1516, Address: 0x216cb0, Func Offset: 0x20
	// Line 1519, Address: 0x216cd8, Func Offset: 0x48
	// Line 1521, Address: 0x216ce0, Func Offset: 0x50
	// Line 1522, Address: 0x216ce8, Func Offset: 0x58
	// Func End, Address: 0x216cfc, Func Offset: 0x6c
}

// 
// Start address: 0x216d00
int EnemyKabeCanAttack(sfObj* obj)
{
	EnemyKabeWork* ew;
	// Line 1526, Address: 0x216d00, Func Offset: 0
	// Line 1528, Address: 0x216d10, Func Offset: 0x10
	// Line 1529, Address: 0x216d18, Func Offset: 0x18
	// Line 1530, Address: 0x216d40, Func Offset: 0x40
	// Line 1531, Address: 0x216d48, Func Offset: 0x48
	// Line 1533, Address: 0x216d68, Func Offset: 0x68
	// Func End, Address: 0x216d7c, Func Offset: 0x7c
}

// 
// Start address: 0x216d80
void EnemyKabeSetAttackWait(sfObj* obj)
{
	// Line 1537, Address: 0x216d80, Func Offset: 0
	// Line 1538, Address: 0x216d8c, Func Offset: 0xc
	// Line 1541, Address: 0x216db8, Func Offset: 0x38
	// Func End, Address: 0x216dc8, Func Offset: 0x48
}

// 
// Start address: 0x216dd0
void EnemyKabeSetEventDamageCheck(sfObj* obj)
{
	// Line 1546, Address: 0x216dd4, Func Offset: 0x4
	// Func End, Address: 0x216de8, Func Offset: 0x18
}

// 
// Start address: 0x216df0
void EnemyKabeSetEventAdditionalDamageCheck(sfObj* obj)
{
	// Line 1553, Address: 0x216df4, Func Offset: 0x4
	// Func End, Address: 0x216e0c, Func Offset: 0x1c
}

// 
// Start address: 0x216e10
void EnemyEDKabeAdditionalDamage(void* obj)
{
	EnemyKabeWork* ew;
	EnemyBattleDamage bd;
	// Line 1559, Address: 0x216e10, Func Offset: 0
	// Line 1562, Address: 0x216e24, Func Offset: 0x14
	// Line 1563, Address: 0x216e30, Func Offset: 0x20
	// Line 1564, Address: 0x216e3c, Func Offset: 0x2c
	// Line 1565, Address: 0x216e48, Func Offset: 0x38
	// Line 1566, Address: 0x216e58, Func Offset: 0x48
	// Line 1567, Address: 0x216e60, Func Offset: 0x50
	// Line 1568, Address: 0x216e68, Func Offset: 0x58
	// Line 1569, Address: 0x216e7c, Func Offset: 0x6c
	// Line 1570, Address: 0x216e80, Func Offset: 0x70
	// Line 1571, Address: 0x216e94, Func Offset: 0x84
	// Line 1572, Address: 0x216ea8, Func Offset: 0x98
	// Line 1571, Address: 0x216eac, Func Offset: 0x9c
	// Line 1572, Address: 0x216eb0, Func Offset: 0xa0
	// Line 1571, Address: 0x216eb4, Func Offset: 0xa4
	// Line 1572, Address: 0x216ebc, Func Offset: 0xac
	// Line 1573, Address: 0x216ec4, Func Offset: 0xb4
	// Line 1575, Address: 0x216ed0, Func Offset: 0xc0
	// Line 1576, Address: 0x216ef8, Func Offset: 0xe8
	// Line 1577, Address: 0x216f14, Func Offset: 0x104
	// Line 1578, Address: 0x216f1c, Func Offset: 0x10c
	// Line 1579, Address: 0x216f28, Func Offset: 0x118
	// Line 1580, Address: 0x216f30, Func Offset: 0x120
	// Line 1581, Address: 0x216f3c, Func Offset: 0x12c
	// Line 1585, Address: 0x216f80, Func Offset: 0x170
	// Func End, Address: 0x216f98, Func Offset: 0x188
}

// 
// Start address: 0x216fa0
void EnemyKabeDrawWall(sfObj* obj)
{
	EnemyKabeWork* ew;
	EnemyTexParameter tex;
	float pos[4];
	float vec[4];
	float light[4];
	float rot[4];
	float left_gap;
	float right_gap;
	float wx;
	float wy;
	float wm;
	unsigned int color;
	unsigned int color2;
	int light_on;
	// Line 1593, Address: 0x216fa0, Func Offset: 0
	// Line 1600, Address: 0x216fc4, Func Offset: 0x24
	// Line 1601, Address: 0x216fd8, Func Offset: 0x38
	// Line 1602, Address: 0x216fe4, Func Offset: 0x44
	// Line 1603, Address: 0x216ff0, Func Offset: 0x50
	// Line 1604, Address: 0x216ffc, Func Offset: 0x5c
	// Line 1605, Address: 0x217008, Func Offset: 0x68
	// Line 1606, Address: 0x217018, Func Offset: 0x78
	// Line 1607, Address: 0x217040, Func Offset: 0xa0
	// Line 1608, Address: 0x217060, Func Offset: 0xc0
	// Line 1609, Address: 0x217074, Func Offset: 0xd4
	// Line 1610, Address: 0x217088, Func Offset: 0xe8
	// Line 1611, Address: 0x217094, Func Offset: 0xf4
	// Line 1612, Address: 0x2170c0, Func Offset: 0x120
	// Line 1613, Address: 0x2170e0, Func Offset: 0x140
	// Line 1614, Address: 0x2170e8, Func Offset: 0x148
	// Line 1616, Address: 0x2170ec, Func Offset: 0x14c
	// Line 1617, Address: 0x217114, Func Offset: 0x174
	// Line 1618, Address: 0x217118, Func Offset: 0x178
	// Line 1619, Address: 0x217124, Func Offset: 0x184
	// Line 1620, Address: 0x21712c, Func Offset: 0x18c
	// Line 1621, Address: 0x217130, Func Offset: 0x190
	// Line 1623, Address: 0x21713c, Func Offset: 0x19c
	// Line 1624, Address: 0x217140, Func Offset: 0x1a0
	// Line 1625, Address: 0x217148, Func Offset: 0x1a8
	// Line 1626, Address: 0x217150, Func Offset: 0x1b0
	// Line 1624, Address: 0x217158, Func Offset: 0x1b8
	// Line 1625, Address: 0x21715c, Func Offset: 0x1bc
	// Line 1626, Address: 0x217160, Func Offset: 0x1c0
	// Line 1627, Address: 0x217164, Func Offset: 0x1c4
	// Line 1629, Address: 0x217190, Func Offset: 0x1f0
	// Line 1630, Address: 0x2171b4, Func Offset: 0x214
	// Line 1632, Address: 0x2171b8, Func Offset: 0x218
	// Line 1633, Address: 0x2171c0, Func Offset: 0x220
	// Line 1636, Address: 0x2171f0, Func Offset: 0x250
	// Line 1650, Address: 0x2171f8, Func Offset: 0x258
	// Line 1652, Address: 0x217200, Func Offset: 0x260
	// Line 1651, Address: 0x217204, Func Offset: 0x264
	// Line 1652, Address: 0x217210, Func Offset: 0x270
	// Line 1653, Address: 0x217228, Func Offset: 0x288
	// Line 1654, Address: 0x21722c, Func Offset: 0x28c
	// Line 1655, Address: 0x217230, Func Offset: 0x290
	// Line 1656, Address: 0x217238, Func Offset: 0x298
	// Line 1657, Address: 0x217240, Func Offset: 0x2a0
	// Line 1658, Address: 0x217244, Func Offset: 0x2a4
	// Line 1656, Address: 0x217248, Func Offset: 0x2a8
	// Line 1657, Address: 0x217254, Func Offset: 0x2b4
	// Line 1658, Address: 0x217258, Func Offset: 0x2b8
	// Line 1656, Address: 0x21725c, Func Offset: 0x2bc
	// Line 1657, Address: 0x217260, Func Offset: 0x2c0
	// Line 1659, Address: 0x217264, Func Offset: 0x2c4
	// Line 1660, Address: 0x217270, Func Offset: 0x2d0
	// Line 1661, Address: 0x217278, Func Offset: 0x2d8
	// Line 1662, Address: 0x21727c, Func Offset: 0x2dc
	// Line 1660, Address: 0x217280, Func Offset: 0x2e0
	// Line 1661, Address: 0x21728c, Func Offset: 0x2ec
	// Line 1662, Address: 0x217290, Func Offset: 0x2f0
	// Line 1660, Address: 0x217294, Func Offset: 0x2f4
	// Line 1661, Address: 0x217298, Func Offset: 0x2f8
	// Line 1664, Address: 0x21729c, Func Offset: 0x2fc
	// Line 1665, Address: 0x2172a4, Func Offset: 0x304
	// Line 1666, Address: 0x2172a8, Func Offset: 0x308
	// Line 1670, Address: 0x2172d4, Func Offset: 0x334
	// Line 1671, Address: 0x2172dc, Func Offset: 0x33c
	// Line 1672, Address: 0x2172e0, Func Offset: 0x340
	// Line 1673, Address: 0x217304, Func Offset: 0x364
	// Line 1674, Address: 0x217308, Func Offset: 0x368
	// Line 1676, Address: 0x217310, Func Offset: 0x370
	// Line 1674, Address: 0x217314, Func Offset: 0x374
	// Line 1676, Address: 0x217318, Func Offset: 0x378
	// Line 1677, Address: 0x21731c, Func Offset: 0x37c
	// Line 1678, Address: 0x217324, Func Offset: 0x384
	// Line 1679, Address: 0x217328, Func Offset: 0x388
	// Line 1680, Address: 0x217330, Func Offset: 0x390
	// Line 1686, Address: 0x217334, Func Offset: 0x394
	// Line 1688, Address: 0x21733c, Func Offset: 0x39c
	// Line 1689, Address: 0x217340, Func Offset: 0x3a0
	// Line 1690, Address: 0x217348, Func Offset: 0x3a8
	// Line 1691, Address: 0x21734c, Func Offset: 0x3ac
	// Line 1689, Address: 0x217350, Func Offset: 0x3b0
	// Line 1690, Address: 0x21735c, Func Offset: 0x3bc
	// Line 1691, Address: 0x217360, Func Offset: 0x3c0
	// Line 1689, Address: 0x217364, Func Offset: 0x3c4
	// Line 1690, Address: 0x217368, Func Offset: 0x3c8
	// Line 1691, Address: 0x21736c, Func Offset: 0x3cc
	// Line 1694, Address: 0x217370, Func Offset: 0x3d0
	// Line 1695, Address: 0x217378, Func Offset: 0x3d8
	// Line 1694, Address: 0x21737c, Func Offset: 0x3dc
	// Line 1695, Address: 0x217380, Func Offset: 0x3e0
	// Line 1694, Address: 0x217388, Func Offset: 0x3e8
	// Line 1695, Address: 0x21738c, Func Offset: 0x3ec
	// Line 1696, Address: 0x217394, Func Offset: 0x3f4
	// Line 1698, Address: 0x2173bc, Func Offset: 0x41c
	// Line 1699, Address: 0x2173c8, Func Offset: 0x428
	// Line 1700, Address: 0x2173d0, Func Offset: 0x430
	// Line 1701, Address: 0x2173d4, Func Offset: 0x434
	// Line 1702, Address: 0x2173d8, Func Offset: 0x438
	// Line 1703, Address: 0x2173f0, Func Offset: 0x450
	// Line 1706, Address: 0x217414, Func Offset: 0x474
	// Line 1707, Address: 0x217420, Func Offset: 0x480
	// Line 1710, Address: 0x217440, Func Offset: 0x4a0
	// Func End, Address: 0x217468, Func Offset: 0x4c8
}

