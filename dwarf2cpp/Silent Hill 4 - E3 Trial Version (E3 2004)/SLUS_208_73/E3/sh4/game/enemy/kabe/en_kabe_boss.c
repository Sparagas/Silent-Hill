typedef struct EnemyBattleDamage;
typedef struct sfObj;
typedef struct EnemyManageDataOne;
typedef struct EnemyKabeBossWork;
typedef struct EventFlag;
typedef struct _anon0;
typedef struct _anon1;
typedef enum EnemyKabeBossAnime : unsigned char;
typedef enum BattleAttackKind : unsigned char;
typedef union _anon2;
typedef enum EnemyManageEntryType : unsigned char;
typedef enum BattleDamageType : unsigned char;

typedef void(*type_1)(sfObj*);
typedef void(*type_8)(sfObj*);
typedef void(*type_10)(sfObj*);
typedef void(*type_11)(sfObj*);
typedef int(*type_12)(void*);
typedef int(*type_18)(void*);
typedef void(*type_20)(void*, int);
typedef int(*type_21)(void*);
typedef void(*type_22)(void*, int);
typedef void(*type_23)(sfObj*);
typedef void(*type_26)(sfObj*);
typedef void(*type_27)(sfObj*);

typedef float type_0[5];
typedef float type_2[4];
typedef _anon2 type_3[4];
typedef unsigned char type_4[320];
typedef float type_5[4];
typedef float type_6[5];
typedef _anon2 type_7[256];
typedef void(*type_9)(sfObj*)[9];
typedef short type_13[2];
typedef unsigned short type_14[2];
typedef char type_15[4];
typedef unsigned char type_16[4];
typedef float type_17[1];
typedef int type_19[1];
typedef float type_24[4];
typedef float type_25[4][4];

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
	_anon2 work[4];
	unsigned int padding;
};

struct EnemyKabeBossWork
{
	float local_time;
	float timer;
	int id;
	int on_attack;
	int landing;
};

struct EventFlag
{
	unsigned char flag[320];
};

struct _anon0
{
	float bmin[4];
	float bmax[4];
};

struct _anon1
{
	float mat[4][4];
	float half_w[4];
};

enum EnemyKabeBossAnime : unsigned char
{
	EN_KABEBOSS_ANM_NT,
	EN_KABEBOSS_ANM_DMH1,
	EN_KABEBOSS_ANM_DMP1,
	EN_KABEBOSS_ANM_DMP2,
	EN_KABEBOSS_ANM_DMP3,
	EN_KABEBOSS_ANM_DMS1,
	EN_KABEBOSS_ANM_DMS2,
	EN_KABEBOSS_ANM_XXP1,
	EN_KABEBOSS_ANM_XXP2,
	EN_KABEBOSS_ANM_XXS1,
	EN_KABEBOSS_ANM_XXG1,
	EN_KABEBOSS_ANM_XXG2,
	EN_KABEBOSS_ANM_XXC1,
	EN_KABEBOSS_ANM_XXC2,
	EN_KABEBOSS_ANM_ATT1,
	EN_KABEBOSS_ANM_ATT2,
	EN_KABEBOSS_ANM_ATT3,
	EN_KABEBOSS_ANM_ATT4,
	EN_KABEBOSS_ANM_ATT5,
	EN_KABEBOSS_ANM_ROD,
	EN_KABEBOSS_ANM_UPU,
	EN_KABEBOSS_ANM_DDM,
	EN_KABEBOSS_ANM_DIE
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

float kb_move_cycle[5];
float kb_stay_time[5];
_anon0 damage_size;
sfObj* kb_true_boss;
int kb_all_number;
int kb_reverse_flag;
float kb_move_timer3;
float kb_move_timer2;
float kb_move_timer;
EventFlag event_flag;
void(*kabeboss_jump_table)(sfObj*)[9];
int(*EnemyEDBattleDamageCheck)(void*);
int(*EnemyEDAnimeIsEndSoon)(void*);
EnemyKabeBossAnime kb_damage_anime;
int(*EnemyEDAnimeIsEnd)(void*);
void(*EnemyEDKabeBossAdditionalDamageDown)(void*, int);
void(*EnemyEDKabeBossRevival)(void*, int);
void(*EnemyKabeBossEventDraw)(sfObj*);
void(*EnemyKabeBossEventDestruct)(sfObj*);
void(*EnemyKabeBossEventConstruct)(sfObj*);
void(*EnemyKabeBossEventHandle)(sfObj*);

sfObj* set_true_boss();
void EnemyKabeBossConstruct(sfObj* obj);
void EnemyKabeBossHandle(sfObj* obj);
void EnemyKabeBossDraw();
void EnemyKabeBossDestruct(sfObj* obj);
void EnemyKabeBossDataPreserve(sfObj* obj);
void EnemyKabeBossDataExtract(sfObj* obj);
void EnemyKabeBossAnimeSet(sfObj* obj, int anime);
float EnemyKabeBossTargetHeight(sfObj* obj);
float EnemyKabeBossMoveSpeed();
void EnemyKabeBossMovePole(sfObj* obj);
int EnemyKabeBossMovePoleFast(sfObj* obj);
void EnemyKabeBossGainTimer(sfObj* obj);
int EnemyKabeBossCheckTrueDamage(sfObj* obj);
void EnemyKabeBossSetTrueDamage();
void EnemyKabeBossSetTrueDead();
void EnemyKabeBossControl(sfObj* obj);
void EnemyKabeBossControlAppear(sfObj* obj);
void EnemyKabeBossControlUpDown(sfObj* obj);
void EnemyKabeBossControlAttack(sfObj* obj);
int set_damage_anime(sfObj* obj, EnemyBattleDamage* bd);
void EnemyKabeBossControlDamage(sfObj* obj);
void EnemyKabeBossControlDown(sfObj* obj);
void EnemyKabeBossControlDead(sfObj* obj);
void EnemyKabeBossControlDamageNT(sfObj* obj);
void EnemyKabeBossControlDownNT(sfObj* obj);
void EnemyKabeBossControlEvent(sfObj* obj);
void EnemyEDKabeBossAdditionalDamageDown(void* obj);
void EnemyEDKabeBossRevival(void* obj);
void EnemyKabeBossEventConstruct(sfObj* obj);
void EnemyKabeBossEventHandle(sfObj* obj);
void EnemyKabeBossEventDestruct(sfObj* obj);
void EnemyKabeBossEventDraw();
int EnemyKabeBossIsTrue(sfObj* obj);

// 
// Start address: 0x2f3610
sfObj* set_true_boss()
{
	int n;
	sfObj* tobj;
	// Line 176, Address: 0x2f3610, Func Offset: 0
	// Line 179, Address: 0x2f3614, Func Offset: 0x4
	// Line 176, Address: 0x2f3618, Func Offset: 0x8
	// Line 179, Address: 0x2f3628, Func Offset: 0x18
	// Line 180, Address: 0x2f363c, Func Offset: 0x2c
	// Line 179, Address: 0x2f3640, Func Offset: 0x30
	// Line 183, Address: 0x2f3648, Func Offset: 0x38
	// Line 184, Address: 0x2f3658, Func Offset: 0x48
	// Line 185, Address: 0x2f3678, Func Offset: 0x68
	// Line 186, Address: 0x2f3684, Func Offset: 0x74
	// Line 187, Address: 0x2f3688, Func Offset: 0x78
	// Line 186, Address: 0x2f368c, Func Offset: 0x7c
	// Line 188, Address: 0x2f3690, Func Offset: 0x80
	// Func End, Address: 0x2f36a8, Func Offset: 0x98
}

// 
// Start address: 0x2f36b0
void EnemyKabeBossConstruct(sfObj* obj)
{
	EnemyKabeBossWork* ew;
	EnemyManageEntryType etype;
	float tpos[4];
	_anon1 obb;
	int n;
	// Line 192, Address: 0x2f36b0, Func Offset: 0
	// Line 197, Address: 0x2f36b4, Func Offset: 0x4
	// Line 192, Address: 0x2f36b8, Func Offset: 0x8
	// Line 197, Address: 0x2f36cc, Func Offset: 0x1c
	// Line 199, Address: 0x2f36d4, Func Offset: 0x24
	// Line 200, Address: 0x2f36e0, Func Offset: 0x30
	// Line 202, Address: 0x2f36f8, Func Offset: 0x48
	// Line 203, Address: 0x2f3700, Func Offset: 0x50
	// Line 206, Address: 0x2f3708, Func Offset: 0x58
	// Line 207, Address: 0x2f3718, Func Offset: 0x68
	// Line 208, Address: 0x2f3728, Func Offset: 0x78
	// Line 209, Address: 0x2f3734, Func Offset: 0x84
	// Line 210, Address: 0x2f3744, Func Offset: 0x94
	// Line 211, Address: 0x2f374c, Func Offset: 0x9c
	// Line 213, Address: 0x2f3778, Func Offset: 0xc8
	// Line 214, Address: 0x2f3788, Func Offset: 0xd8
	// Line 218, Address: 0x2f37a8, Func Offset: 0xf8
	// Line 219, Address: 0x2f37b8, Func Offset: 0x108
	// Line 222, Address: 0x2f37d0, Func Offset: 0x120
	// Line 225, Address: 0x2f37e4, Func Offset: 0x134
	// Line 226, Address: 0x2f37ec, Func Offset: 0x13c
	// Line 227, Address: 0x2f37f4, Func Offset: 0x144
	// Line 228, Address: 0x2f37f8, Func Offset: 0x148
	// Line 229, Address: 0x2f380c, Func Offset: 0x15c
	// Line 231, Address: 0x2f3814, Func Offset: 0x164
	// Line 233, Address: 0x2f3820, Func Offset: 0x170
	// Line 234, Address: 0x2f3828, Func Offset: 0x178
	// Line 235, Address: 0x2f3840, Func Offset: 0x190
	// Line 236, Address: 0x2f3850, Func Offset: 0x1a0
	// Line 237, Address: 0x2f3858, Func Offset: 0x1a8
	// Line 238, Address: 0x2f385c, Func Offset: 0x1ac
	// Line 237, Address: 0x2f3860, Func Offset: 0x1b0
	// Line 238, Address: 0x2f3864, Func Offset: 0x1b4
	// Line 239, Address: 0x2f386c, Func Offset: 0x1bc
	// Line 240, Address: 0x2f3874, Func Offset: 0x1c4
	// Line 241, Address: 0x2f3878, Func Offset: 0x1c8
	// Line 242, Address: 0x2f3888, Func Offset: 0x1d8
	// Line 244, Address: 0x2f3890, Func Offset: 0x1e0
	// Line 247, Address: 0x2f3898, Func Offset: 0x1e8
	// Line 248, Address: 0x2f38b4, Func Offset: 0x204
	// Line 249, Address: 0x2f38bc, Func Offset: 0x20c
	// Line 250, Address: 0x2f38c8, Func Offset: 0x218
	// Line 251, Address: 0x2f38cc, Func Offset: 0x21c
	// Line 250, Address: 0x2f38d0, Func Offset: 0x220
	// Line 251, Address: 0x2f38d4, Func Offset: 0x224
	// Line 252, Address: 0x2f38dc, Func Offset: 0x22c
	// Line 253, Address: 0x2f38e4, Func Offset: 0x234
	// Line 254, Address: 0x2f38e8, Func Offset: 0x238
	// Line 255, Address: 0x2f38f8, Func Offset: 0x248
	// Line 257, Address: 0x2f3900, Func Offset: 0x250
	// Line 258, Address: 0x2f390c, Func Offset: 0x25c
	// Line 262, Address: 0x2f3918, Func Offset: 0x268
	// Line 263, Address: 0x2f3920, Func Offset: 0x270
	// Line 264, Address: 0x2f3924, Func Offset: 0x274
	// Line 263, Address: 0x2f3928, Func Offset: 0x278
	// Line 264, Address: 0x2f392c, Func Offset: 0x27c
	// Line 265, Address: 0x2f3930, Func Offset: 0x280
	// Line 266, Address: 0x2f3950, Func Offset: 0x2a0
	// Line 267, Address: 0x2f3954, Func Offset: 0x2a4
	// Line 268, Address: 0x2f3960, Func Offset: 0x2b0
	// Line 267, Address: 0x2f3964, Func Offset: 0x2b4
	// Line 268, Address: 0x2f3968, Func Offset: 0x2b8
	// Line 269, Address: 0x2f396c, Func Offset: 0x2bc
	// Line 267, Address: 0x2f3970, Func Offset: 0x2c0
	// Line 269, Address: 0x2f3978, Func Offset: 0x2c8
	// Line 267, Address: 0x2f397c, Func Offset: 0x2cc
	// Line 270, Address: 0x2f3990, Func Offset: 0x2e0
	// Line 272, Address: 0x2f3994, Func Offset: 0x2e4
	// Func End, Address: 0x2f39b4, Func Offset: 0x304
}

// 
// Start address: 0x2f39c0
void EnemyKabeBossHandle(sfObj* obj)
{
	// Line 276, Address: 0x2f39c0, Func Offset: 0
	// Line 277, Address: 0x2f39c4, Func Offset: 0x4
	// Line 276, Address: 0x2f39c8, Func Offset: 0x8
	// Line 277, Address: 0x2f39d0, Func Offset: 0x10
	// Line 278, Address: 0x2f39e0, Func Offset: 0x20
	// Line 279, Address: 0x2f39e8, Func Offset: 0x28
	// Line 280, Address: 0x2f39f0, Func Offset: 0x30
	// Line 281, Address: 0x2f39f8, Func Offset: 0x38
	// Line 282, Address: 0x2f3a00, Func Offset: 0x40
	// Line 284, Address: 0x2f3a08, Func Offset: 0x48
	// Line 285, Address: 0x2f3a10, Func Offset: 0x50
	// Func End, Address: 0x2f3a20, Func Offset: 0x60
}

// 
// Start address: 0x2f3a20
void EnemyKabeBossDraw()
{
	// Line 297, Address: 0x2f3a20, Func Offset: 0
	// Func End, Address: 0x2f3a28, Func Offset: 0x8
}

// 
// Start address: 0x2f3a30
void EnemyKabeBossDestruct(sfObj* obj)
{
	// Line 301, Address: 0x2f3a30, Func Offset: 0
	// Line 302, Address: 0x2f3a40, Func Offset: 0x10
	// Line 303, Address: 0x2f3a48, Func Offset: 0x18
	// Line 306, Address: 0x2f3a80, Func Offset: 0x50
	// Line 307, Address: 0x2f3aa0, Func Offset: 0x70
	// Line 308, Address: 0x2f3aa8, Func Offset: 0x78
	// Line 310, Address: 0x2f3ab0, Func Offset: 0x80
	// Line 311, Address: 0x2f3ab8, Func Offset: 0x88
	// Line 312, Address: 0x2f3ac0, Func Offset: 0x90
	// Func End, Address: 0x2f3ad4, Func Offset: 0xa4
}

// 
// Start address: 0x2f3ae0
void EnemyKabeBossDataPreserve(sfObj* obj)
{
	EnemyManageDataOne* pe;
	// Line 316, Address: 0x2f3ae0, Func Offset: 0
	// Line 318, Address: 0x2f3aec, Func Offset: 0xc
	// Line 319, Address: 0x2f3af4, Func Offset: 0x14
	// Line 320, Address: 0x2f3b00, Func Offset: 0x20
	// Func End, Address: 0x2f3b10, Func Offset: 0x30
}

// 
// Start address: 0x2f3b10
void EnemyKabeBossDataExtract(sfObj* obj)
{
	EnemyManageDataOne* pe;
	// Line 324, Address: 0x2f3b10, Func Offset: 0
	// Line 326, Address: 0x2f3b20, Func Offset: 0x10
	// Line 327, Address: 0x2f3b34, Func Offset: 0x24
	// Line 328, Address: 0x2f3b40, Func Offset: 0x30
	// Line 329, Address: 0x2f3b48, Func Offset: 0x38
	// Func End, Address: 0x2f3b5c, Func Offset: 0x4c
}

// 
// Start address: 0x2f3b60
void EnemyKabeBossAnimeSet(sfObj* obj, int anime)
{
	int old_anime;
	float s;
	// Line 333, Address: 0x2f3b60, Func Offset: 0
	// Line 336, Address: 0x2f3b78, Func Offset: 0x18
	// Line 337, Address: 0x2f3b80, Func Offset: 0x20
	// Line 338, Address: 0x2f3b94, Func Offset: 0x34
	// Line 339, Address: 0x2f3b98, Func Offset: 0x38
	// Line 340, Address: 0x2f3ba4, Func Offset: 0x44
	// Line 341, Address: 0x2f3bac, Func Offset: 0x4c
	// Line 342, Address: 0x2f3bb0, Func Offset: 0x50
	// Line 343, Address: 0x2f3bfc, Func Offset: 0x9c
	// Line 344, Address: 0x2f3c00, Func Offset: 0xa0
	// Line 347, Address: 0x2f3c08, Func Offset: 0xa8
	// Line 348, Address: 0x2f3c14, Func Offset: 0xb4
	// Line 350, Address: 0x2f3c1c, Func Offset: 0xbc
	// Line 351, Address: 0x2f3c20, Func Offset: 0xc0
	// Line 352, Address: 0x2f3c2c, Func Offset: 0xcc
	// Line 353, Address: 0x2f3c34, Func Offset: 0xd4
	// Line 354, Address: 0x2f3c38, Func Offset: 0xd8
	// Line 355, Address: 0x2f3c40, Func Offset: 0xe0
	// Line 358, Address: 0x2f3c4c, Func Offset: 0xec
	// Line 359, Address: 0x2f3c50, Func Offset: 0xf0
	// Line 360, Address: 0x2f3c5c, Func Offset: 0xfc
	// Line 361, Address: 0x2f3c60, Func Offset: 0x100
	// Line 362, Address: 0x2f3c68, Func Offset: 0x108
	// Line 363, Address: 0x2f3cb4, Func Offset: 0x154
	// Line 364, Address: 0x2f3cb8, Func Offset: 0x158
	// Line 365, Address: 0x2f3cd4, Func Offset: 0x174
	// Line 366, Address: 0x2f3cdc, Func Offset: 0x17c
	// Line 367, Address: 0x2f3ce0, Func Offset: 0x180
	// Line 369, Address: 0x2f3cec, Func Offset: 0x18c
	// Line 370, Address: 0x2f3cf0, Func Offset: 0x190
	// Line 373, Address: 0x2f3d10, Func Offset: 0x1b0
	// Line 374, Address: 0x2f3d1c, Func Offset: 0x1bc
	// Func End, Address: 0x2f3d38, Func Offset: 0x1d8
}

// 
// Start address: 0x2f3d40
float EnemyKabeBossTargetHeight(sfObj* obj)
{
	EnemyKabeBossWork* ew;
	float t;
	float mc;
	float tn;
	int al;
	// Line 378, Address: 0x2f3d40, Func Offset: 0
	// Line 382, Address: 0x2f3d48, Func Offset: 0x8
	// Line 383, Address: 0x2f3d50, Func Offset: 0x10
	// Line 384, Address: 0x2f3d58, Func Offset: 0x18
	// Line 385, Address: 0x2f3d5c, Func Offset: 0x1c
	// Line 384, Address: 0x2f3d60, Func Offset: 0x20
	// Line 385, Address: 0x2f3d6c, Func Offset: 0x2c
	// Line 384, Address: 0x2f3d70, Func Offset: 0x30
	// Line 385, Address: 0x2f3d74, Func Offset: 0x34
	// Line 386, Address: 0x2f3d9c, Func Offset: 0x5c
	// Line 387, Address: 0x2f3da8, Func Offset: 0x68
	// Line 388, Address: 0x2f3dac, Func Offset: 0x6c
	// Line 389, Address: 0x2f3dc8, Func Offset: 0x88
	// Line 390, Address: 0x2f3ddc, Func Offset: 0x9c
	// Line 391, Address: 0x2f3de8, Func Offset: 0xa8
	// Line 392, Address: 0x2f3dec, Func Offset: 0xac
	// Line 395, Address: 0x2f3df8, Func Offset: 0xb8
	// Line 394, Address: 0x2f3dfc, Func Offset: 0xbc
	// Line 395, Address: 0x2f3e00, Func Offset: 0xc0
	// Line 393, Address: 0x2f3e08, Func Offset: 0xc8
	// Line 395, Address: 0x2f3e0c, Func Offset: 0xcc
	// Line 396, Address: 0x2f3e1c, Func Offset: 0xdc
	// Line 398, Address: 0x2f3e20, Func Offset: 0xe0
	// Line 399, Address: 0x2f3e30, Func Offset: 0xf0
	// Line 400, Address: 0x2f3e38, Func Offset: 0xf8
	// Line 401, Address: 0x2f3e44, Func Offset: 0x104
	// Line 402, Address: 0x2f3e48, Func Offset: 0x108
	// Line 401, Address: 0x2f3e4c, Func Offset: 0x10c
	// Line 402, Address: 0x2f3e50, Func Offset: 0x110
	// Line 401, Address: 0x2f3e54, Func Offset: 0x114
	// Line 402, Address: 0x2f3e5c, Func Offset: 0x11c
	// Line 401, Address: 0x2f3e64, Func Offset: 0x124
	// Line 402, Address: 0x2f3e6c, Func Offset: 0x12c
	// Line 401, Address: 0x2f3e70, Func Offset: 0x130
	// Line 402, Address: 0x2f3e74, Func Offset: 0x134
	// Line 403, Address: 0x2f3e8c, Func Offset: 0x14c
	// Line 404, Address: 0x2f3e9c, Func Offset: 0x15c
	// Line 405, Address: 0x2f3ea8, Func Offset: 0x168
	// Line 408, Address: 0x2f3eb0, Func Offset: 0x170
	// Line 410, Address: 0x2f3eb8, Func Offset: 0x178
	// Line 408, Address: 0x2f3ec0, Func Offset: 0x180
	// Line 410, Address: 0x2f3ed4, Func Offset: 0x194
	// Func End, Address: 0x2f3edc, Func Offset: 0x19c
}

// 
// Start address: 0x2f3ee0
float EnemyKabeBossMoveSpeed()
{
	float t;
	int al;
	// Line 414, Address: 0x2f3ee0, Func Offset: 0
	// Line 417, Address: 0x2f3ee8, Func Offset: 0x8
	// Line 418, Address: 0x2f3ef4, Func Offset: 0x14
	// Line 419, Address: 0x2f3f24, Func Offset: 0x44
	// Line 418, Address: 0x2f3f28, Func Offset: 0x48
	// Line 419, Address: 0x2f3f2c, Func Offset: 0x4c
	// Line 421, Address: 0x2f3f3c, Func Offset: 0x5c
	// Func End, Address: 0x2f3f48, Func Offset: 0x68
}

// 
// Start address: 0x2f3f50
void EnemyKabeBossMovePole(sfObj* obj)
{
	EnemyKabeBossWork* ew;
	float* pos;
	float vec[4];
	float th;
	// Line 425, Address: 0x2f3f50, Func Offset: 0
	// Line 430, Address: 0x2f3f68, Func Offset: 0x18
	// Line 431, Address: 0x2f3f74, Func Offset: 0x24
	// Line 432, Address: 0x2f3f80, Func Offset: 0x30
	// Line 433, Address: 0x2f3f88, Func Offset: 0x38
	// Line 435, Address: 0x2f3f90, Func Offset: 0x40
	// Line 434, Address: 0x2f3f94, Func Offset: 0x44
	// Line 433, Address: 0x2f3f98, Func Offset: 0x48
	// Line 434, Address: 0x2f3f9c, Func Offset: 0x4c
	// Line 435, Address: 0x2f3fa0, Func Offset: 0x50
	// Line 436, Address: 0x2f3fac, Func Offset: 0x5c
	// Line 439, Address: 0x2f3fc8, Func Offset: 0x78
	// Line 440, Address: 0x2f3ffc, Func Offset: 0xac
	// Line 441, Address: 0x2f4004, Func Offset: 0xb4
	// Line 442, Address: 0x2f4008, Func Offset: 0xb8
	// Line 441, Address: 0x2f400c, Func Offset: 0xbc
	// Line 442, Address: 0x2f4010, Func Offset: 0xc0
	// Line 444, Address: 0x2f4020, Func Offset: 0xd0
	// Line 445, Address: 0x2f402c, Func Offset: 0xdc
	// Func End, Address: 0x2f4048, Func Offset: 0xf8
}

// 
// Start address: 0x2f4050
int EnemyKabeBossMovePoleFast(sfObj* obj)
{
	EnemyKabeBossWork* ew;
	float* pos;
	float vec[4];
	float d;
	float th;
	float ms;
	int r;
	// Line 449, Address: 0x2f4050, Func Offset: 0
	// Line 455, Address: 0x2f4068, Func Offset: 0x18
	// Line 456, Address: 0x2f4070, Func Offset: 0x20
	// Line 457, Address: 0x2f407c, Func Offset: 0x2c
	// Line 458, Address: 0x2f4084, Func Offset: 0x34
	// Line 460, Address: 0x2f409c, Func Offset: 0x4c
	// Line 459, Address: 0x2f40a0, Func Offset: 0x50
	// Line 458, Address: 0x2f40a4, Func Offset: 0x54
	// Line 459, Address: 0x2f40b0, Func Offset: 0x60
	// Line 460, Address: 0x2f40b4, Func Offset: 0x64
	// Line 461, Address: 0x2f40b8, Func Offset: 0x68
	// Line 462, Address: 0x2f40bc, Func Offset: 0x6c
	// Line 463, Address: 0x2f40cc, Func Offset: 0x7c
	// Line 465, Address: 0x2f40d0, Func Offset: 0x80
	// Line 466, Address: 0x2f40d8, Func Offset: 0x88
	// Line 468, Address: 0x2f40ec, Func Offset: 0x9c
	// Line 469, Address: 0x2f40f8, Func Offset: 0xa8
	// Line 472, Address: 0x2f4100, Func Offset: 0xb0
	// Line 473, Address: 0x2f410c, Func Offset: 0xbc
	// Line 474, Address: 0x2f4110, Func Offset: 0xc0
	// Func End, Address: 0x2f412c, Func Offset: 0xdc
}

// 
// Start address: 0x2f4130
void EnemyKabeBossGainTimer(sfObj* obj)
{
	float dt;
	float d;
	float mc;
	float rt;
	// Line 478, Address: 0x2f4130, Func Offset: 0
	// Line 480, Address: 0x2f4134, Func Offset: 0x4
	// Line 478, Address: 0x2f4138, Func Offset: 0x8
	// Line 480, Address: 0x2f4148, Func Offset: 0x18
	// Line 481, Address: 0x2f4154, Func Offset: 0x24
	// Line 482, Address: 0x2f415c, Func Offset: 0x2c
	// Line 483, Address: 0x2f4174, Func Offset: 0x44
	// Line 484, Address: 0x2f4188, Func Offset: 0x58
	// Line 483, Address: 0x2f418c, Func Offset: 0x5c
	// Line 484, Address: 0x2f419c, Func Offset: 0x6c
	// Line 485, Address: 0x2f41b4, Func Offset: 0x84
	// Line 486, Address: 0x2f41d8, Func Offset: 0xa8
	// Line 487, Address: 0x2f4204, Func Offset: 0xd4
	// Line 488, Address: 0x2f4208, Func Offset: 0xd8
	// Line 489, Address: 0x2f4218, Func Offset: 0xe8
	// Line 490, Address: 0x2f4228, Func Offset: 0xf8
	// Line 491, Address: 0x2f422c, Func Offset: 0xfc
	// Line 492, Address: 0x2f4248, Func Offset: 0x118
	// Line 493, Address: 0x2f4260, Func Offset: 0x130
	// Line 494, Address: 0x2f4264, Func Offset: 0x134
	// Line 495, Address: 0x2f4288, Func Offset: 0x158
	// Line 496, Address: 0x2f42ac, Func Offset: 0x17c
	// Line 497, Address: 0x2f42bc, Func Offset: 0x18c
	// Line 498, Address: 0x2f42c8, Func Offset: 0x198
	// Line 497, Address: 0x2f42cc, Func Offset: 0x19c
	// Line 498, Address: 0x2f42d0, Func Offset: 0x1a0
	// Line 497, Address: 0x2f42d4, Func Offset: 0x1a4
	// Line 500, Address: 0x2f42f0, Func Offset: 0x1c0
	// Func End, Address: 0x2f4308, Func Offset: 0x1d8
}

// 
// Start address: 0x2f4310
int EnemyKabeBossCheckTrueDamage(sfObj* obj)
{
	int c;
	// Line 504, Address: 0x2f4310, Func Offset: 0
	// Line 506, Address: 0x2f4314, Func Offset: 0x4
	// Line 504, Address: 0x2f4318, Func Offset: 0x8
	// Line 506, Address: 0x2f4320, Func Offset: 0x10
	// Line 507, Address: 0x2f4338, Func Offset: 0x28
	// Line 508, Address: 0x2f434c, Func Offset: 0x3c
	// Line 509, Address: 0x2f4360, Func Offset: 0x50
	// Line 510, Address: 0x2f438c, Func Offset: 0x7c
	// Line 511, Address: 0x2f4390, Func Offset: 0x80
	// Line 512, Address: 0x2f439c, Func Offset: 0x8c
	// Line 513, Address: 0x2f43a4, Func Offset: 0x94
	// Line 514, Address: 0x2f43a8, Func Offset: 0x98
	// Line 515, Address: 0x2f43b4, Func Offset: 0xa4
	// Line 516, Address: 0x2f43bc, Func Offset: 0xac
	// Line 517, Address: 0x2f43c0, Func Offset: 0xb0
	// Line 518, Address: 0x2f43c8, Func Offset: 0xb8
	// Func End, Address: 0x2f43d8, Func Offset: 0xc8
}

// 
// Start address: 0x2f43e0
void EnemyKabeBossSetTrueDamage()
{
	// Line 522, Address: 0x2f43e0, Func Offset: 0
	// Line 523, Address: 0x2f43e4, Func Offset: 0x4
	// Line 522, Address: 0x2f43e8, Func Offset: 0x8
	// Line 523, Address: 0x2f43ec, Func Offset: 0xc
	// Line 526, Address: 0x2f441c, Func Offset: 0x3c
	// Func End, Address: 0x2f4428, Func Offset: 0x48
}

// 
// Start address: 0x2f4430
void EnemyKabeBossSetTrueDead()
{
	// Line 530, Address: 0x2f4430, Func Offset: 0
	// Line 531, Address: 0x2f4434, Func Offset: 0x4
	// Line 530, Address: 0x2f4438, Func Offset: 0x8
	// Line 531, Address: 0x2f443c, Func Offset: 0xc
	// Line 534, Address: 0x2f4470, Func Offset: 0x40
	// Func End, Address: 0x2f447c, Func Offset: 0x4c
}

// 
// Start address: 0x2f4480
void EnemyKabeBossControl(sfObj* obj)
{
	EnemyKabeBossWork* ew;
	int step;
	float h;
	float s;
	// Line 551, Address: 0x2f4480, Func Offset: 0
	// Line 562, Address: 0x2f4498, Func Offset: 0x18
	// Line 563, Address: 0x2f44a4, Func Offset: 0x24
	// Line 564, Address: 0x2f44b0, Func Offset: 0x30
	// Line 565, Address: 0x2f44c8, Func Offset: 0x48
	// Line 566, Address: 0x2f44d0, Func Offset: 0x50
	// Line 567, Address: 0x2f44d4, Func Offset: 0x54
	// Line 571, Address: 0x2f44d8, Func Offset: 0x58
	// Line 572, Address: 0x2f44f4, Func Offset: 0x74
	// Line 575, Address: 0x2f44fc, Func Offset: 0x7c
	// Line 576, Address: 0x2f4508, Func Offset: 0x88
	// Line 577, Address: 0x2f450c, Func Offset: 0x8c
	// Line 578, Address: 0x2f4524, Func Offset: 0xa4
	// Line 579, Address: 0x2f453c, Func Offset: 0xbc
	// Line 578, Address: 0x2f4540, Func Offset: 0xc0
	// Line 579, Address: 0x2f4550, Func Offset: 0xd0
	// Line 580, Address: 0x2f455c, Func Offset: 0xdc
	// Line 581, Address: 0x2f4560, Func Offset: 0xe0
	// Line 582, Address: 0x2f4578, Func Offset: 0xf8
	// Line 583, Address: 0x2f4580, Func Offset: 0x100
	// Line 584, Address: 0x2f4588, Func Offset: 0x108
	// Line 585, Address: 0x2f4594, Func Offset: 0x114
	// Line 588, Address: 0x2f45a0, Func Offset: 0x120
	// Func End, Address: 0x2f45bc, Func Offset: 0x13c
}

// 
// Start address: 0x2f45c0
void EnemyKabeBossControlAppear(sfObj* obj)
{
	float tpos[4];
	// Line 592, Address: 0x2f45c0, Func Offset: 0
	// Line 595, Address: 0x2f45cc, Func Offset: 0xc
	// Line 596, Address: 0x2f45d4, Func Offset: 0x14
	// Line 597, Address: 0x2f45ec, Func Offset: 0x2c
	// Line 598, Address: 0x2f45f0, Func Offset: 0x30
	// Line 599, Address: 0x2f45fc, Func Offset: 0x3c
	// Line 600, Address: 0x2f4608, Func Offset: 0x48
	// Line 601, Address: 0x2f4614, Func Offset: 0x54
	// Line 602, Address: 0x2f4618, Func Offset: 0x58
	// Line 601, Address: 0x2f461c, Func Offset: 0x5c
	// Line 602, Address: 0x2f4620, Func Offset: 0x60
	// Line 603, Address: 0x2f4628, Func Offset: 0x68
	// Line 606, Address: 0x2f4630, Func Offset: 0x70
	// Line 607, Address: 0x2f4640, Func Offset: 0x80
	// Line 609, Address: 0x2f4648, Func Offset: 0x88
	// Line 611, Address: 0x2f4660, Func Offset: 0xa0
	// Line 612, Address: 0x2f4668, Func Offset: 0xa8
	// Func End, Address: 0x2f4678, Func Offset: 0xb8
}

// 
// Start address: 0x2f4680
void EnemyKabeBossControlUpDown(sfObj* obj)
{
	// Line 616, Address: 0x2f4680, Func Offset: 0
	// Line 617, Address: 0x2f468c, Func Offset: 0xc
	// Line 619, Address: 0x2f46b0, Func Offset: 0x30
	// Line 620, Address: 0x2f46bc, Func Offset: 0x3c
	// Line 621, Address: 0x2f46c8, Func Offset: 0x48
	// Line 622, Address: 0x2f46d0, Func Offset: 0x50
	// Line 624, Address: 0x2f46d8, Func Offset: 0x58
	// Line 625, Address: 0x2f46fc, Func Offset: 0x7c
	// Line 628, Address: 0x2f472c, Func Offset: 0xac
	// Line 632, Address: 0x2f4734, Func Offset: 0xb4
	// Line 633, Address: 0x2f4738, Func Offset: 0xb8
	// Line 635, Address: 0x2f4750, Func Offset: 0xd0
	// Line 636, Address: 0x2f4758, Func Offset: 0xd8
	// Line 637, Address: 0x2f4760, Func Offset: 0xe0
	// Line 638, Address: 0x2f4768, Func Offset: 0xe8
	// Func End, Address: 0x2f4778, Func Offset: 0xf8
}

// 
// Start address: 0x2f4780
void EnemyKabeBossControlAttack(sfObj* obj)
{
	EnemyKabeBossWork* ew;
	float bpos[4];
	BattleAttackKind ak;
	int bn;
	int tp;
	float r;
	float d;
	int anime;
	// Line 642, Address: 0x2f4780, Func Offset: 0
	// Line 647, Address: 0x2f47a4, Func Offset: 0x24
	// Line 648, Address: 0x2f47b0, Func Offset: 0x30
	// Line 649, Address: 0x2f47dc, Func Offset: 0x5c
	// Line 650, Address: 0x2f47e0, Func Offset: 0x60
	// Line 654, Address: 0x2f47ec, Func Offset: 0x6c
	// Line 655, Address: 0x2f47fc, Func Offset: 0x7c
	// Line 656, Address: 0x2f480c, Func Offset: 0x8c
	// Line 657, Address: 0x2f4814, Func Offset: 0x94
	// Line 658, Address: 0x2f4820, Func Offset: 0xa0
	// Line 659, Address: 0x2f483c, Func Offset: 0xbc
	// Line 661, Address: 0x2f4850, Func Offset: 0xd0
	// Line 663, Address: 0x2f4874, Func Offset: 0xf4
	// Line 665, Address: 0x2f489c, Func Offset: 0x11c
	// Line 668, Address: 0x2f48a8, Func Offset: 0x128
	// Line 669, Address: 0x2f48c4, Func Offset: 0x144
	// Line 671, Address: 0x2f48dc, Func Offset: 0x15c
	// Line 674, Address: 0x2f48e8, Func Offset: 0x168
	// Line 675, Address: 0x2f48f0, Func Offset: 0x170
	// Line 677, Address: 0x2f490c, Func Offset: 0x18c
	// Line 679, Address: 0x2f4934, Func Offset: 0x1b4
	// Line 680, Address: 0x2f4940, Func Offset: 0x1c0
	// Line 682, Address: 0x2f4944, Func Offset: 0x1c4
	// Line 683, Address: 0x2f4948, Func Offset: 0x1c8
	// Line 684, Address: 0x2f4950, Func Offset: 0x1d0
	// Line 686, Address: 0x2f495c, Func Offset: 0x1dc
	// Line 687, Address: 0x2f4964, Func Offset: 0x1e4
	// Line 689, Address: 0x2f496c, Func Offset: 0x1ec
	// Line 690, Address: 0x2f4970, Func Offset: 0x1f0
	// Line 692, Address: 0x2f49b8, Func Offset: 0x238
	// Line 696, Address: 0x2f4a0c, Func Offset: 0x28c
	// Line 697, Address: 0x2f4a14, Func Offset: 0x294
	// Line 698, Address: 0x2f4a20, Func Offset: 0x2a0
	// Line 702, Address: 0x2f4a2c, Func Offset: 0x2ac
	// Line 703, Address: 0x2f4a30, Func Offset: 0x2b0
	// Line 705, Address: 0x2f4a48, Func Offset: 0x2c8
	// Line 706, Address: 0x2f4a50, Func Offset: 0x2d0
	// Line 707, Address: 0x2f4a58, Func Offset: 0x2d8
	// Line 708, Address: 0x2f4a60, Func Offset: 0x2e0
	// Line 711, Address: 0x2f4a74, Func Offset: 0x2f4
	// Line 712, Address: 0x2f4aac, Func Offset: 0x32c
	// Line 713, Address: 0x2f4ab0, Func Offset: 0x330
	// Line 714, Address: 0x2f4ab4, Func Offset: 0x334
	// Line 716, Address: 0x2f4ab8, Func Offset: 0x338
	// Line 718, Address: 0x2f4ac0, Func Offset: 0x340
	// Line 719, Address: 0x2f4ac4, Func Offset: 0x344
	// Line 721, Address: 0x2f4ac8, Func Offset: 0x348
	// Line 723, Address: 0x2f4ad0, Func Offset: 0x350
	// Line 724, Address: 0x2f4ad4, Func Offset: 0x354
	// Line 726, Address: 0x2f4ad8, Func Offset: 0x358
	// Line 728, Address: 0x2f4ae0, Func Offset: 0x360
	// Line 729, Address: 0x2f4ae4, Func Offset: 0x364
	// Line 731, Address: 0x2f4ae8, Func Offset: 0x368
	// Line 733, Address: 0x2f4af0, Func Offset: 0x370
	// Line 734, Address: 0x2f4af4, Func Offset: 0x374
	// Line 735, Address: 0x2f4af8, Func Offset: 0x378
	// Line 737, Address: 0x2f4afc, Func Offset: 0x37c
	// Line 738, Address: 0x2f4b00, Func Offset: 0x380
	// Line 739, Address: 0x2f4b14, Func Offset: 0x394
	// Line 740, Address: 0x2f4b28, Func Offset: 0x3a8
	// Line 741, Address: 0x2f4b34, Func Offset: 0x3b4
	// Line 744, Address: 0x2f4b3c, Func Offset: 0x3bc
	// Line 745, Address: 0x2f4b48, Func Offset: 0x3c8
	// Line 749, Address: 0x2f4b98, Func Offset: 0x418
	// Line 751, Address: 0x2f4b9c, Func Offset: 0x41c
	// Line 752, Address: 0x2f4ba0, Func Offset: 0x420
	// Line 753, Address: 0x2f4bb4, Func Offset: 0x434
	// Line 755, Address: 0x2f4bbc, Func Offset: 0x43c
	// Line 756, Address: 0x2f4bc8, Func Offset: 0x448
	// Line 758, Address: 0x2f4bd0, Func Offset: 0x450
	// Line 759, Address: 0x2f4be0, Func Offset: 0x460
	// Line 763, Address: 0x2f4bf8, Func Offset: 0x478
	// Func End, Address: 0x2f4c20, Func Offset: 0x4a0
}

// 
// Start address: 0x2f4c20
int set_damage_anime(sfObj* obj, EnemyBattleDamage* bd)
{
	int anime;
	int d;
	int tb;
	// Line 767, Address: 0x2f4c20, Func Offset: 0
	// Line 769, Address: 0x2f4c24, Func Offset: 0x4
	// Line 767, Address: 0x2f4c28, Func Offset: 0x8
	// Line 769, Address: 0x2f4c44, Func Offset: 0x24
	// Line 770, Address: 0x2f4c4c, Func Offset: 0x2c
	// Line 771, Address: 0x2f4c6c, Func Offset: 0x4c
	// Line 772, Address: 0x2f4c94, Func Offset: 0x74
	// Line 773, Address: 0x2f4c98, Func Offset: 0x78
	// Line 775, Address: 0x2f4ca0, Func Offset: 0x80
	// Line 777, Address: 0x2f4cb8, Func Offset: 0x98
	// Line 780, Address: 0x2f4cc0, Func Offset: 0xa0
	// Line 782, Address: 0x2f4cc8, Func Offset: 0xa8
	// Line 784, Address: 0x2f4cd0, Func Offset: 0xb0
	// Line 787, Address: 0x2f4cd8, Func Offset: 0xb8
	// Line 790, Address: 0x2f4ce0, Func Offset: 0xc0
	// Line 792, Address: 0x2f4ce8, Func Offset: 0xc8
	// Line 795, Address: 0x2f4cf0, Func Offset: 0xd0
	// Line 798, Address: 0x2f4cf8, Func Offset: 0xd8
	// Line 800, Address: 0x2f4d00, Func Offset: 0xe0
	// Line 803, Address: 0x2f4d08, Func Offset: 0xe8
	// Line 805, Address: 0x2f4d10, Func Offset: 0xf0
	// Line 807, Address: 0x2f4d18, Func Offset: 0xf8
	// Line 810, Address: 0x2f4d20, Func Offset: 0x100
	// Line 812, Address: 0x2f4d28, Func Offset: 0x108
	// Line 814, Address: 0x2f4d30, Func Offset: 0x110
	// Line 817, Address: 0x2f4d38, Func Offset: 0x118
	// Line 820, Address: 0x2f4d40, Func Offset: 0x120
	// Line 822, Address: 0x2f4d48, Func Offset: 0x128
	// Line 825, Address: 0x2f4d50, Func Offset: 0x130
	// Line 827, Address: 0x2f4d58, Func Offset: 0x138
	// Line 829, Address: 0x2f4d68, Func Offset: 0x148
	// Line 830, Address: 0x2f4d70, Func Offset: 0x150
	// Line 833, Address: 0x2f4d74, Func Offset: 0x154
	// Line 837, Address: 0x2f4d7c, Func Offset: 0x15c
	// Line 838, Address: 0x2f4d80, Func Offset: 0x160
	// Line 840, Address: 0x2f4d90, Func Offset: 0x170
	// Line 841, Address: 0x2f4d98, Func Offset: 0x178
	// Line 844, Address: 0x2f4d9c, Func Offset: 0x17c
	// Line 845, Address: 0x2f4da4, Func Offset: 0x184
	// Line 846, Address: 0x2f4da8, Func Offset: 0x188
	// Line 848, Address: 0x2f4db0, Func Offset: 0x190
	// Line 851, Address: 0x2f4db8, Func Offset: 0x198
	// Line 854, Address: 0x2f4dc0, Func Offset: 0x1a0
	// Line 855, Address: 0x2f4dc4, Func Offset: 0x1a4
	// Line 858, Address: 0x2f4dc8, Func Offset: 0x1a8
	// Line 859, Address: 0x2f4dd0, Func Offset: 0x1b0
	// Line 860, Address: 0x2f4dd4, Func Offset: 0x1b4
	// Func End, Address: 0x2f4df0, Func Offset: 0x1d0
}

// 
// Start address: 0x2f4df0
void EnemyKabeBossControlDamage(sfObj* obj)
{
	EnemyKabeBossWork* ew;
	float dt;
	EnemyBattleDamage bd;
	// Line 864, Address: 0x2f4df0, Func Offset: 0
	// Line 867, Address: 0x2f4e04, Func Offset: 0x14
	// Line 868, Address: 0x2f4e0c, Func Offset: 0x1c
	// Line 869, Address: 0x2f4e18, Func Offset: 0x28
	// Line 871, Address: 0x2f4e58, Func Offset: 0x68
	// Line 874, Address: 0x2f4e64, Func Offset: 0x74
	// Line 875, Address: 0x2f4e70, Func Offset: 0x80
	// Line 876, Address: 0x2f4e80, Func Offset: 0x90
	// Line 877, Address: 0x2f4e88, Func Offset: 0x98
	// Line 878, Address: 0x2f4e90, Func Offset: 0xa0
	// Line 879, Address: 0x2f4ea4, Func Offset: 0xb4
	// Line 880, Address: 0x2f4ea8, Func Offset: 0xb8
	// Line 881, Address: 0x2f4eb8, Func Offset: 0xc8
	// Line 883, Address: 0x2f4ed0, Func Offset: 0xe0
	// Line 884, Address: 0x2f4edc, Func Offset: 0xec
	// Line 885, Address: 0x2f4eec, Func Offset: 0xfc
	// Line 887, Address: 0x2f4f00, Func Offset: 0x110
	// Line 888, Address: 0x2f4f18, Func Offset: 0x128
	// Line 889, Address: 0x2f4f28, Func Offset: 0x138
	// Line 890, Address: 0x2f4f34, Func Offset: 0x144
	// Line 891, Address: 0x2f4f54, Func Offset: 0x164
	// Line 892, Address: 0x2f4f5c, Func Offset: 0x16c
	// Line 893, Address: 0x2f4f68, Func Offset: 0x178
	// Line 895, Address: 0x2f4f70, Func Offset: 0x180
	// Line 896, Address: 0x2f4f84, Func Offset: 0x194
	// Line 898, Address: 0x2f4f8c, Func Offset: 0x19c
	// Line 901, Address: 0x2f4f90, Func Offset: 0x1a0
	// Line 903, Address: 0x2f4f98, Func Offset: 0x1a8
	// Line 905, Address: 0x2f4fb0, Func Offset: 0x1c0
	// Line 907, Address: 0x2f4fb8, Func Offset: 0x1c8
	// Line 909, Address: 0x2f4fcc, Func Offset: 0x1dc
	// Line 910, Address: 0x2f4fd4, Func Offset: 0x1e4
	// Line 911, Address: 0x2f4fd8, Func Offset: 0x1e8
	// Line 912, Address: 0x2f4ff8, Func Offset: 0x208
	// Line 913, Address: 0x2f5024, Func Offset: 0x234
	// Line 914, Address: 0x2f502c, Func Offset: 0x23c
	// Line 915, Address: 0x2f5038, Func Offset: 0x248
	// Line 916, Address: 0x2f5048, Func Offset: 0x258
	// Line 918, Address: 0x2f5050, Func Offset: 0x260
	// Line 919, Address: 0x2f505c, Func Offset: 0x26c
	// Line 922, Address: 0x2f5068, Func Offset: 0x278
	// Line 924, Address: 0x2f5070, Func Offset: 0x280
	// Line 928, Address: 0x2f5088, Func Offset: 0x298
	// Line 929, Address: 0x2f509c, Func Offset: 0x2ac
	// Line 932, Address: 0x2f50b0, Func Offset: 0x2c0
	// Line 933, Address: 0x2f50b8, Func Offset: 0x2c8
	// Func End, Address: 0x2f50d0, Func Offset: 0x2e0
}

// 
// Start address: 0x2f50d0
void EnemyKabeBossControlDown(sfObj* obj)
{
	EnemyKabeBossWork* ew;
	float dt;
	float vec[4];
	// Line 937, Address: 0x2f50d0, Func Offset: 0
	// Line 940, Address: 0x2f50e4, Func Offset: 0x14
	// Line 941, Address: 0x2f50ec, Func Offset: 0x1c
	// Line 942, Address: 0x2f50f8, Func Offset: 0x28
	// Line 944, Address: 0x2f5138, Func Offset: 0x68
	// Line 946, Address: 0x2f5154, Func Offset: 0x84
	// Line 947, Address: 0x2f5160, Func Offset: 0x90
	// Line 948, Address: 0x2f5174, Func Offset: 0xa4
	// Line 949, Address: 0x2f5178, Func Offset: 0xa8
	// Line 950, Address: 0x2f5184, Func Offset: 0xb4
	// Line 951, Address: 0x2f518c, Func Offset: 0xbc
	// Line 952, Address: 0x2f5194, Func Offset: 0xc4
	// Line 953, Address: 0x2f5198, Func Offset: 0xc8
	// Line 954, Address: 0x2f51a4, Func Offset: 0xd4
	// Line 955, Address: 0x2f51ac, Func Offset: 0xdc
	// Line 956, Address: 0x2f51b8, Func Offset: 0xe8
	// Line 955, Address: 0x2f51bc, Func Offset: 0xec
	// Line 956, Address: 0x2f51cc, Func Offset: 0xfc
	// Line 957, Address: 0x2f51d4, Func Offset: 0x104
	// Line 958, Address: 0x2f51dc, Func Offset: 0x10c
	// Line 959, Address: 0x2f51e0, Func Offset: 0x110
	// Line 960, Address: 0x2f51fc, Func Offset: 0x12c
	// Line 961, Address: 0x2f5208, Func Offset: 0x138
	// Line 963, Address: 0x2f5210, Func Offset: 0x140
	// Line 965, Address: 0x2f5218, Func Offset: 0x148
	// Line 967, Address: 0x2f5234, Func Offset: 0x164
	// Line 968, Address: 0x2f523c, Func Offset: 0x16c
	// Line 969, Address: 0x2f5240, Func Offset: 0x170
	// Line 970, Address: 0x2f525c, Func Offset: 0x18c
	// Line 971, Address: 0x2f5268, Func Offset: 0x198
	// Line 972, Address: 0x2f5274, Func Offset: 0x1a4
	// Line 973, Address: 0x2f5278, Func Offset: 0x1a8
	// Line 975, Address: 0x2f529c, Func Offset: 0x1cc
	// Line 977, Address: 0x2f52a4, Func Offset: 0x1d4
	// Line 978, Address: 0x2f52ac, Func Offset: 0x1dc
	// Line 979, Address: 0x2f52b0, Func Offset: 0x1e0
	// Line 981, Address: 0x2f52c8, Func Offset: 0x1f8
	// Line 983, Address: 0x2f52d0, Func Offset: 0x200
	// Line 984, Address: 0x2f52d8, Func Offset: 0x208
	// Line 985, Address: 0x2f52ec, Func Offset: 0x21c
	// Line 987, Address: 0x2f5304, Func Offset: 0x234
	// Line 990, Address: 0x2f533c, Func Offset: 0x26c
	// Line 991, Address: 0x2f5340, Func Offset: 0x270
	// Line 992, Address: 0x2f534c, Func Offset: 0x27c
	// Line 991, Address: 0x2f5350, Func Offset: 0x280
	// Line 992, Address: 0x2f5354, Func Offset: 0x284
	// Line 994, Address: 0x2f5360, Func Offset: 0x290
	// Line 995, Address: 0x2f5368, Func Offset: 0x298
	// Line 997, Address: 0x2f5370, Func Offset: 0x2a0
	// Func End, Address: 0x2f5388, Func Offset: 0x2b8
}

// 
// Start address: 0x2f5390
void EnemyKabeBossControlDead(sfObj* obj)
{
	EnemyKabeBossWork* ew;
	float vec[4];
	float dt;
	float ms;
	// Line 1001, Address: 0x2f5390, Func Offset: 0
	// Line 1005, Address: 0x2f53a0, Func Offset: 0x10
	// Line 1006, Address: 0x2f53a8, Func Offset: 0x18
	// Line 1007, Address: 0x2f53b4, Func Offset: 0x24
	// Line 1008, Address: 0x2f53cc, Func Offset: 0x3c
	// Line 1009, Address: 0x2f53d0, Func Offset: 0x40
	// Line 1010, Address: 0x2f53dc, Func Offset: 0x4c
	// Line 1011, Address: 0x2f53e4, Func Offset: 0x54
	// Line 1013, Address: 0x2f53ec, Func Offset: 0x5c
	// Line 1014, Address: 0x2f53f0, Func Offset: 0x60
	// Line 1015, Address: 0x2f53fc, Func Offset: 0x6c
	// Line 1017, Address: 0x2f5404, Func Offset: 0x74
	// Line 1016, Address: 0x2f5408, Func Offset: 0x78
	// Line 1017, Address: 0x2f540c, Func Offset: 0x7c
	// Line 1018, Address: 0x2f5414, Func Offset: 0x84
	// Line 1019, Address: 0x2f5438, Func Offset: 0xa8
	// Line 1020, Address: 0x2f5444, Func Offset: 0xb4
	// Line 1021, Address: 0x2f544c, Func Offset: 0xbc
	// Line 1022, Address: 0x2f5458, Func Offset: 0xc8
	// Line 1025, Address: 0x2f5460, Func Offset: 0xd0
	// Func End, Address: 0x2f5474, Func Offset: 0xe4
}

// 
// Start address: 0x2f5480
void EnemyKabeBossControlDamageNT(sfObj* obj)
{
	// Line 1029, Address: 0x2f5480, Func Offset: 0
	// Line 1032, Address: 0x2f548c, Func Offset: 0xc
	// Line 1033, Address: 0x2f5494, Func Offset: 0x14
	// Line 1034, Address: 0x2f549c, Func Offset: 0x1c
	// Line 1036, Address: 0x2f54d8, Func Offset: 0x58
	// Line 1037, Address: 0x2f54e4, Func Offset: 0x64
	// Line 1038, Address: 0x2f54f4, Func Offset: 0x74
	// Line 1040, Address: 0x2f5560, Func Offset: 0xe0
	// Line 1041, Address: 0x2f556c, Func Offset: 0xec
	// Line 1045, Address: 0x2f5574, Func Offset: 0xf4
	// Line 1046, Address: 0x2f5578, Func Offset: 0xf8
	// Line 1047, Address: 0x2f5584, Func Offset: 0x104
	// Line 1051, Address: 0x2f558c, Func Offset: 0x10c
	// Line 1052, Address: 0x2f5590, Func Offset: 0x110
	// Line 1055, Address: 0x2f559c, Func Offset: 0x11c
	// Line 1056, Address: 0x2f55a4, Func Offset: 0x124
	// Line 1057, Address: 0x2f55a8, Func Offset: 0x128
	// Line 1059, Address: 0x2f55c0, Func Offset: 0x140
	// Line 1061, Address: 0x2f55c8, Func Offset: 0x148
	// Line 1063, Address: 0x2f55e0, Func Offset: 0x160
	// Line 1065, Address: 0x2f55e8, Func Offset: 0x168
	// Line 1066, Address: 0x2f5600, Func Offset: 0x180
	// Line 1069, Address: 0x2f560c, Func Offset: 0x18c
	// Line 1070, Address: 0x2f5610, Func Offset: 0x190
	// Line 1072, Address: 0x2f5628, Func Offset: 0x1a8
	// Line 1073, Address: 0x2f5630, Func Offset: 0x1b0
	// Func End, Address: 0x2f5640, Func Offset: 0x1c0
}

// 
// Start address: 0x2f5640
void EnemyKabeBossControlDownNT(sfObj* obj)
{
	// Line 1077, Address: 0x2f5640, Func Offset: 0
	// Line 1080, Address: 0x2f564c, Func Offset: 0xc
	// Line 1081, Address: 0x2f5654, Func Offset: 0x14
	// Line 1082, Address: 0x2f565c, Func Offset: 0x1c
	// Line 1084, Address: 0x2f5688, Func Offset: 0x48
	// Line 1085, Address: 0x2f5694, Func Offset: 0x54
	// Line 1086, Address: 0x2f56a4, Func Offset: 0x64
	// Line 1087, Address: 0x2f56b8, Func Offset: 0x78
	// Line 1088, Address: 0x2f56c0, Func Offset: 0x80
	// Line 1089, Address: 0x2f56c8, Func Offset: 0x88
	// Line 1091, Address: 0x2f56d0, Func Offset: 0x90
	// Line 1093, Address: 0x2f56d8, Func Offset: 0x98
	// Line 1094, Address: 0x2f56f4, Func Offset: 0xb4
	// Line 1095, Address: 0x2f56fc, Func Offset: 0xbc
	// Line 1097, Address: 0x2f5704, Func Offset: 0xc4
	// Line 1098, Address: 0x2f570c, Func Offset: 0xcc
	// Line 1099, Address: 0x2f5710, Func Offset: 0xd0
	// Line 1100, Address: 0x2f5728, Func Offset: 0xe8
	// Line 1101, Address: 0x2f5730, Func Offset: 0xf0
	// Line 1104, Address: 0x2f573c, Func Offset: 0xfc
	// Line 1105, Address: 0x2f5740, Func Offset: 0x100
	// Func End, Address: 0x2f5750, Func Offset: 0x110
}

// 
// Start address: 0x2f5750
void EnemyKabeBossControlEvent(sfObj* obj)
{
	float tpos[4];
	int t;
	// Line 1109, Address: 0x2f5750, Func Offset: 0
	// Line 1112, Address: 0x2f5760, Func Offset: 0x10
	// Line 1114, Address: 0x2f5778, Func Offset: 0x28
	// Line 1115, Address: 0x2f5780, Func Offset: 0x30
	// Line 1114, Address: 0x2f5788, Func Offset: 0x38
	// Line 1116, Address: 0x2f5790, Func Offset: 0x40
	// Line 1118, Address: 0x2f5798, Func Offset: 0x48
	// Line 1119, Address: 0x2f57a0, Func Offset: 0x50
	// Line 1123, Address: 0x2f57a8, Func Offset: 0x58
	// Line 1121, Address: 0x2f57ac, Func Offset: 0x5c
	// Line 1123, Address: 0x2f57b0, Func Offset: 0x60
	// Line 1121, Address: 0x2f57b4, Func Offset: 0x64
	// Line 1123, Address: 0x2f57b8, Func Offset: 0x68
	// Line 1121, Address: 0x2f57c8, Func Offset: 0x78
	// Line 1123, Address: 0x2f57cc, Func Offset: 0x7c
	// Line 1129, Address: 0x2f5800, Func Offset: 0xb0
	// Line 1130, Address: 0x2f5804, Func Offset: 0xb4
	// Line 1131, Address: 0x2f5808, Func Offset: 0xb8
	// Line 1132, Address: 0x2f5810, Func Offset: 0xc0
	// Line 1138, Address: 0x2f5858, Func Offset: 0x108
	// Line 1139, Address: 0x2f585c, Func Offset: 0x10c
	// Line 1140, Address: 0x2f5860, Func Offset: 0x110
	// Line 1142, Address: 0x2f5868, Func Offset: 0x118
	// Line 1144, Address: 0x2f5878, Func Offset: 0x128
	// Line 1147, Address: 0x2f5880, Func Offset: 0x130
	// Func End, Address: 0x2f5894, Func Offset: 0x144
}

// 
// Start address: 0x2f58a0
void EnemyEDKabeBossAdditionalDamageDown(void* obj)
{
	EnemyKabeBossWork* ew;
	EnemyBattleDamage bd;
	// Line 1151, Address: 0x2f58a0, Func Offset: 0
	// Line 1154, Address: 0x2f58b0, Func Offset: 0x10
	// Line 1155, Address: 0x2f58bc, Func Offset: 0x1c
	// Line 1156, Address: 0x2f58c8, Func Offset: 0x28
	// Line 1157, Address: 0x2f58d4, Func Offset: 0x34
	// Line 1158, Address: 0x2f58e4, Func Offset: 0x44
	// Line 1159, Address: 0x2f58ec, Func Offset: 0x4c
	// Line 1160, Address: 0x2f58f8, Func Offset: 0x58
	// Line 1161, Address: 0x2f590c, Func Offset: 0x6c
	// Line 1162, Address: 0x2f5910, Func Offset: 0x70
	// Line 1163, Address: 0x2f592c, Func Offset: 0x8c
	// Line 1164, Address: 0x2f5934, Func Offset: 0x94
	// Line 1165, Address: 0x2f5940, Func Offset: 0xa0
	// Line 1166, Address: 0x2f594c, Func Offset: 0xac
	// Line 1167, Address: 0x2f5958, Func Offset: 0xb8
	// Line 1168, Address: 0x2f5964, Func Offset: 0xc4
	// Line 1169, Address: 0x2f5970, Func Offset: 0xd0
	// Line 1168, Address: 0x2f5978, Func Offset: 0xd8
	// Line 1169, Address: 0x2f597c, Func Offset: 0xdc
	// Line 1170, Address: 0x2f5984, Func Offset: 0xe4
	// Line 1172, Address: 0x2f5990, Func Offset: 0xf0
	// Func End, Address: 0x2f59a4, Func Offset: 0x104
}

// 
// Start address: 0x2f59b0
void EnemyEDKabeBossRevival(void* obj)
{
	// Line 1176, Address: 0x2f59b0, Func Offset: 0
	// Line 1177, Address: 0x2f59bc, Func Offset: 0xc
	// Line 1178, Address: 0x2f59d8, Func Offset: 0x28
	// Line 1179, Address: 0x2f59e4, Func Offset: 0x34
	// Func End, Address: 0x2f59f4, Func Offset: 0x44
}

// 
// Start address: 0x2f5a00
void EnemyKabeBossEventConstruct(sfObj* obj)
{
	// Line 1183, Address: 0x2f5a00, Func Offset: 0
	// Line 1184, Address: 0x2f5a04, Func Offset: 0x4
	// Line 1183, Address: 0x2f5a08, Func Offset: 0x8
	// Line 1184, Address: 0x2f5a10, Func Offset: 0x10
	// Line 1185, Address: 0x2f5a18, Func Offset: 0x18
	// Line 1186, Address: 0x2f5a28, Func Offset: 0x28
	// Line 1187, Address: 0x2f5a38, Func Offset: 0x38
	// Line 1188, Address: 0x2f5a44, Func Offset: 0x44
	// Line 1191, Address: 0x2f5a58, Func Offset: 0x58
	// Line 1192, Address: 0x2f5a60, Func Offset: 0x60
	// Line 1194, Address: 0x2f5a68, Func Offset: 0x68
	// Line 1195, Address: 0x2f5a7c, Func Offset: 0x7c
	// Line 1196, Address: 0x2f5a88, Func Offset: 0x88
	// Line 1197, Address: 0x2f5a90, Func Offset: 0x90
	// Line 1198, Address: 0x2f5a9c, Func Offset: 0x9c
	// Func End, Address: 0x2f5ab0, Func Offset: 0xb0
}

// 
// Start address: 0x2f5ab0
void EnemyKabeBossEventHandle(sfObj* obj)
{
	float pos[4];
	// Line 1202, Address: 0x2f5ab0, Func Offset: 0
	// Line 1204, Address: 0x2f5ab8, Func Offset: 0x8
	// Line 1202, Address: 0x2f5abc, Func Offset: 0xc
	// Line 1204, Address: 0x2f5ac8, Func Offset: 0x18
	// Line 1205, Address: 0x2f5ad4, Func Offset: 0x24
	// Line 1206, Address: 0x2f5af0, Func Offset: 0x40
	// Line 1207, Address: 0x2f5b04, Func Offset: 0x54
	// Line 1206, Address: 0x2f5b08, Func Offset: 0x58
	// Line 1207, Address: 0x2f5b10, Func Offset: 0x60
	// Line 1208, Address: 0x2f5b24, Func Offset: 0x74
	// Line 1209, Address: 0x2f5b28, Func Offset: 0x78
	// Line 1210, Address: 0x2f5b3c, Func Offset: 0x8c
	// Line 1212, Address: 0x2f5b44, Func Offset: 0x94
	// Line 1213, Address: 0x2f5b48, Func Offset: 0x98
	// Line 1214, Address: 0x2f5b54, Func Offset: 0xa4
	// Line 1215, Address: 0x2f5b58, Func Offset: 0xa8
	// Line 1216, Address: 0x2f5b60, Func Offset: 0xb0
	// Line 1217, Address: 0x2f5b68, Func Offset: 0xb8
	// Func End, Address: 0x2f5b80, Func Offset: 0xd0
}

// 
// Start address: 0x2f5b80
void EnemyKabeBossEventDestruct(sfObj* obj)
{
	// Line 1221, Address: 0x2f5b80, Func Offset: 0
	// Line 1222, Address: 0x2f5b8c, Func Offset: 0xc
	// Line 1223, Address: 0x2f5b94, Func Offset: 0x14
	// Line 1224, Address: 0x2f5b9c, Func Offset: 0x1c
	// Line 1225, Address: 0x2f5ba4, Func Offset: 0x24
	// Func End, Address: 0x2f5bb4, Func Offset: 0x34
}

// 
// Start address: 0x2f5bc0
void EnemyKabeBossEventDraw()
{
	// Line 1230, Address: 0x2f5bc0, Func Offset: 0
	// Func End, Address: 0x2f5bc8, Func Offset: 0x8
}

// 
// Start address: 0x2f5bd0
int EnemyKabeBossIsTrue(sfObj* obj)
{
	// Line 1238, Address: 0x2f5bd0, Func Offset: 0
	// Line 1239, Address: 0x2f5bdc, Func Offset: 0xc
	// Func End, Address: 0x2f5be4, Func Offset: 0x14
}

