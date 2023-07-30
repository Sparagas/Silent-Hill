typedef struct EnemyBuzzWork;
typedef struct sfObj;
typedef struct EnemySenseData;
typedef enum EnemySoundType : unsigned char;
typedef struct EnemySoundTypeControl;
typedef enum EnemyCondition : unsigned char;
typedef struct EnemyBuzzWork2;
typedef struct _anon0;
typedef struct _anon1;
typedef struct sgBone;
typedef enum BattleAttackKind : unsigned char;
typedef struct _anon2;
typedef union _anon3;
typedef struct EnemyClHitResult;
typedef union _anon4;
typedef struct EnemySoundTypeControlData;
typedef struct EnemyManageDataOne;
typedef enum EnemySenseResultType : unsigned char;
typedef enum EnemyPlayerType : unsigned char;
typedef enum EnemyManageEntryType : unsigned char;
typedef struct EnemySenseResult;
typedef enum BattleDamageType : unsigned char;
typedef enum EnemySenseType : unsigned char;
typedef struct EnemyMeasureResult;
typedef struct EnemyBattleDamage;

typedef void(*type_3)(sfObj*, float*);
typedef void(*type_4)(sfObj*);
typedef void(*type_6)(sfObj*);
typedef void(*type_11)(sfObj*);
typedef void(*type_12)(sfObj*);
typedef void(*type_13)(sfObj*);
typedef void(*type_14)(sfObj*);
typedef void(*type_16)(sfObj*);
typedef int(*type_17)(void*);
typedef void(*type_18)(void*, int);
typedef void(*type_19)(sfObj*);
typedef void(*type_21)(void*, int);
typedef int(*type_25)(void*);
typedef void(*type_26)(void*, int);
typedef int(*type_29)(void*);
typedef void(*type_30)(void*, int);
typedef void(*type_31)(void*, int);

typedef float type_0[4];
typedef float type_1[5];
typedef _anon4 type_2[4];
typedef float type_5[4];
typedef void(*type_7)(sfObj*)[16];
typedef _anon1 type_8[4];
typedef _anon3 type_9[0];
typedef _anon4 type_10[256];
typedef int type_15[0];
typedef short type_20[2];
typedef unsigned short type_22[2];
typedef char type_23[4];
typedef unsigned char type_24[4];
typedef float type_27[1];
typedef int type_28[1];

struct EnemyBuzzWork
{
	float target[4];
	float wall_normal[4];
	float move_bk[4];
	float vertical_accel;
	int round_dir;
	float rotate;
	float timer;
	float timer2;
	EnemySenseData* player_check;
	int target_player;
	sfObj* sub_obj;
	int can_attack;
	int attack_step;
	EnemySoundTypeControl* sound_control;
	float speed_control;
	float speed_control2;
	int first_type;
	int finish_count;
	int first_down;
};

struct sfObj
{
	_anon4 fwork[256];
	_anon4* work;
	void(*func)(sfObj*);
	_anon4* work_pt0;
	_anon4* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon4* sys_work;
	_anon4* scene_work;
	_anon4* event_work;
	_anon4* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

struct EnemySenseData
{
	EnemySenseResult result;
	float* pos;
	float* rot;
	float dist_limit;
	float dist_limit2;
	float angle_limit;
	float check_height;
	EnemySenseType type;
	EnemyPlayerType player;
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

struct EnemySoundTypeControl
{
};

enum EnemyCondition : unsigned char
{
	ENEMY_CONDITION_NOENTRY,
	ENEMY_CONDITION_NORMAL,
	ENEMY_CONDITION_CAUTION,
	ENEMY_CONDITION_CHASE,
	ENEMY_CONDITION_ESCAPE,
	ENEMY_CONDITION_BATTLE,
	ENEMY_CONDITION_SEIZE,
	ENEMY_CONDITION_INVINCIBLE,
	ENEMY_CONDITION_RISE,
	ENEMY_CONDITION_DAMAGE,
	ENEMY_CONDITION_DYING,
	ENEMY_CONDITION_DEAD,
	ENEMY_CONDITION_SPECIAL,
	ENEMY_CONDITION_HIDDEN,
	ENEMY_CONDITION_FULLHIDDEN,
	ENEMY_CONDITION_ANOTHERSCENE,
	ENEMY_CONDITION_ERASE,
	ENEMY_CONDITION_FLAGWAIT,
	ENEMY_CONDITION_EVENT
};

struct EnemyBuzzWork2
{
	sfObj* original;
};

struct _anon0
{
	float bmin[4];
	float bmax[4];
};

struct _anon1
{
	unsigned char next_offset;
	unsigned char flags;
	short id;
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

struct _anon2
{
	_anon3 vertex[0];
};

union _anon3
{
	float node[4];
	_anon1 data[4];
};

struct EnemyClHitResult
{
};

union _anon4
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
	_anon4 work[4];
	unsigned int padding;
};

enum EnemySenseResultType : unsigned char
{
	EN_SENSE_RES_NOTHING,
	EN_SENSE_RES_FOUND
};

enum EnemyPlayerType : unsigned char
{
	ENEMY_PLAYER_TYPE_PLAYER,
	ENEMY_PLAYER_TYPE_HEROINE,
	ENEMY_PLAYER_TYPE_NPC,
	ENEMY_PLAYER_TYPE_MAX,
	ENEMY_PLAYER_TYPE_NOTHING = 0xff
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

struct EnemySenseResult
{
	float pos[4];
	EnemySenseResultType type;
	float level;
	sfObj* obj;
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

enum EnemySenseType : unsigned char
{
	EN_SENSE_TYPE_SIGHT_OF_PLAYER,
	EN_SENSE_TYPE_SIGHT_OF_PLAYER_XZ,
	EN_SENSE_TYPE_NOSIGHT_OF_PLAYER,
	EN_SENSE_TYPE_NOSIGHT_OF_PLAYER_XZ
};

struct EnemyMeasureResult
{
	float pos[4];
	float normal[4];
	float dist;
	int exist;
	_anon2* poly;
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

float buzz_hit_size[5];
float suck_pos[4];
EnemySoundTypeControlData buzz_sound;
_anon0 limit_pos;
float sg_vector_zero[4];
void(*set_hit_center)(sfObj*, float*);
void(*EnemyBuzzHandle2)(sfObj*);
void(*EnemyEDBuzz2Normal)(void*, int);
void(*EnemyEDBuzz2Damage)(void*, int);
int(*EnemyEDBattleDamageCheck)(void*);
void(*EnemyBuzzDraw)(sfObj*);
void(*EnemyBuzzDestruct)(sfObj*);
void(*EnemyBuzzConstruct)(sfObj*);
void(*EnemyBuzzHandle)(sfObj*);
float en_vector_unit_y_minus[4];
float en_quat_rot_x_300[4];
void(*buzz_jump_table)(sfObj*)[16];
int(*EnemyEDAnimeIsEnd)(void*);
float sg_vector_unit_y[4];
int(*EnemyEDSenseTest)(void*);
float en_quat_rot_y_270[4];
float en_quat_rot_y_90[4];
void(*EnemyEDBuzzAdditionalDamage)(void*, int);
void(*EnemyEDBuzzAdditionalDamageDown)(void*, int);
void(*EnemyEDBuzzDamageOnWall)(void*, int);

void EnemyBuzzConstruct(sfObj* obj);
void set_hit_center();
void EnemyBuzzSubObjInit(sfObj* obj);
void EnemyBuzzHandle(sfObj* obj);
void EnemyBuzzHandle2(sfObj* obj);
void EnemyBuzzDraw(sfObj* obj);
void EnemyBuzzDestruct(sfObj* obj);
void EnemyBuzzDataPreserve(sfObj* obj);
void EnemyBuzzDataExtract(sfObj* obj);
void check_increase(sfObj* obj);
void EnemyBuzzFlyControl(sfObj* obj);
void EnemyBuzzAnimeSet(sfObj* obj, int anime);
void EnemyBuzzControl(sfObj* obj);
void EnemyBuzzControlInit(sfObj* obj);
void EnemyBuzzControlStayOnCeiling(sfObj* obj);
void EnemyBuzzControlStayOnWall(sfObj* obj);
void EnemyBuzzControlStayOnFloor(sfObj* obj);
void EnemyBuzzControlWander(sfObj* obj);
void EnemyBuzzControlToHold(sfObj* obj);
void EnemyBuzzControlCaution(sfObj* obj);
void EnemyBuzzControlRound(sfObj* obj);
void EnemyBuzzControlDive(sfObj* obj);
void release_bone(sfObj* obj);
void EnemyBuzzControlSuckAttack(sfObj* obj);
void EnemyBuzzControlPeckAttack(sfObj* obj);
void EnemyBuzzControlEscape(sfObj* obj);
void EnemyBuzzControlGather(sfObj* obj);
int check_floor(sfObj* obj);
void EnemyBuzzControlDamage(sfObj* obj);
void EnemyBuzzControlDown(sfObj* obj);
void EnemyBuzzControlDead();
void EnemyBuzzControlWait(sfObj* obj);
void EnemyBuzzGetWallNormal(sfObj* obj);
int EnemyBuzzCheckHoldWall(sfObj* obj, float* target);
void EnemyBuzzSetDie(sfObj* obj);
int EnemyBuzzCheckDamageInfo(sfObj* obj);
int EnemyBuzzCheckDeathBlood(sfObj* obj);
void EnemyBuzzSoundStart(sfObj* obj);
void EnemyBuzzSoundStop(sfObj* obj);
void EnemyBuzzSetEventDamageCheck(sfObj* obj);
void EnemyBuzzSetEventDamageCheckOnWall(sfObj* obj);
void EnemyEDBuzzAdditionalDamage(void* obj);
void EnemyEDBuzzAdditionalDamageDown(void* obj);
void EnemyEDBuzzDamageOnWall(void* obj);
void EnemyEDBuzz2Damage(void* obj);
void EnemyEDBuzz2Normal(void* obj);

// 
// Start address: 0x1ebe70
void EnemyBuzzConstruct(sfObj* obj)
{
	EnemyBuzzWork* ew;
	EnemyManageEntryType etype;
	// Line 263, Address: 0x1ebe70, Func Offset: 0
	// Line 267, Address: 0x1ebe74, Func Offset: 0x4
	// Line 263, Address: 0x1ebe78, Func Offset: 0x8
	// Line 267, Address: 0x1ebe8c, Func Offset: 0x1c
	// Line 269, Address: 0x1ebe94, Func Offset: 0x24
	// Line 270, Address: 0x1ebea0, Func Offset: 0x30
	// Line 273, Address: 0x1ebec0, Func Offset: 0x50
	// Line 274, Address: 0x1ebec8, Func Offset: 0x58
	// Line 277, Address: 0x1ebed0, Func Offset: 0x60
	// Line 278, Address: 0x1ebee0, Func Offset: 0x70
	// Line 279, Address: 0x1ebef0, Func Offset: 0x80
	// Line 280, Address: 0x1ebef8, Func Offset: 0x88
	// Line 282, Address: 0x1ebf24, Func Offset: 0xb4
	// Line 283, Address: 0x1ebf34, Func Offset: 0xc4
	// Line 284, Address: 0x1ebf44, Func Offset: 0xd4
	// Line 286, Address: 0x1ebf64, Func Offset: 0xf4
	// Line 289, Address: 0x1ebf9c, Func Offset: 0x12c
	// Line 291, Address: 0x1ebfb0, Func Offset: 0x140
	// Line 292, Address: 0x1ebfb8, Func Offset: 0x148
	// Line 293, Address: 0x1ebfc0, Func Offset: 0x150
	// Line 295, Address: 0x1ebfc8, Func Offset: 0x158
	// Line 296, Address: 0x1ebfd4, Func Offset: 0x164
	// Line 297, Address: 0x1ebfe4, Func Offset: 0x174
	// Line 298, Address: 0x1ebff0, Func Offset: 0x180
	// Line 299, Address: 0x1ebff8, Func Offset: 0x188
	// Line 300, Address: 0x1ec000, Func Offset: 0x190
	// Line 302, Address: 0x1ec00c, Func Offset: 0x19c
	// Line 303, Address: 0x1ec018, Func Offset: 0x1a8
	// Line 305, Address: 0x1ec024, Func Offset: 0x1b4
	// Line 306, Address: 0x1ec02c, Func Offset: 0x1bc
	// Line 307, Address: 0x1ec038, Func Offset: 0x1c8
	// Line 308, Address: 0x1ec044, Func Offset: 0x1d4
	// Line 310, Address: 0x1ec070, Func Offset: 0x200
	// Line 311, Address: 0x1ec07c, Func Offset: 0x20c
	// Line 312, Address: 0x1ec088, Func Offset: 0x218
	// Line 313, Address: 0x1ec0a4, Func Offset: 0x234
	// Line 315, Address: 0x1ec0a8, Func Offset: 0x238
	// Line 313, Address: 0x1ec0ac, Func Offset: 0x23c
	// Line 315, Address: 0x1ec0b0, Func Offset: 0x240
	// Line 316, Address: 0x1ec0bc, Func Offset: 0x24c
	// Line 317, Address: 0x1ec0c4, Func Offset: 0x254
	// Line 318, Address: 0x1ec0c8, Func Offset: 0x258
	// Line 319, Address: 0x1ec0d4, Func Offset: 0x264
	// Line 320, Address: 0x1ec0e0, Func Offset: 0x270
	// Line 321, Address: 0x1ec0f4, Func Offset: 0x284
	// Line 322, Address: 0x1ec0fc, Func Offset: 0x28c
	// Line 323, Address: 0x1ec104, Func Offset: 0x294
	// Line 324, Address: 0x1ec10c, Func Offset: 0x29c
	// Line 325, Address: 0x1ec110, Func Offset: 0x2a0
	// Line 326, Address: 0x1ec118, Func Offset: 0x2a8
	// Line 327, Address: 0x1ec120, Func Offset: 0x2b0
	// Line 328, Address: 0x1ec12c, Func Offset: 0x2bc
	// Line 329, Address: 0x1ec138, Func Offset: 0x2c8
	// Line 332, Address: 0x1ec144, Func Offset: 0x2d4
	// Line 333, Address: 0x1ec148, Func Offset: 0x2d8
	// Line 334, Address: 0x1ec150, Func Offset: 0x2e0
	// Line 335, Address: 0x1ec154, Func Offset: 0x2e4
	// Func End, Address: 0x1ec174, Func Offset: 0x304
}

// 
// Start address: 0x1ec180
void set_hit_center()
{
	// Line 341, Address: 0x1ec180, Func Offset: 0
	// Func End, Address: 0x1ec188, Func Offset: 0x8
}

// 
// Start address: 0x1ec190
void EnemyBuzzSubObjInit(sfObj* obj)
{
	EnemyBuzzWork* ew;
	EnemyBuzzWork2* ew2;
	sfObj* obj2;
	// Line 345, Address: 0x1ec190, Func Offset: 0
	// Line 349, Address: 0x1ec1a4, Func Offset: 0x14
	// Line 350, Address: 0x1ec1ac, Func Offset: 0x1c
	// Line 349, Address: 0x1ec1b0, Func Offset: 0x20
	// Line 350, Address: 0x1ec1b4, Func Offset: 0x24
	// Line 351, Address: 0x1ec1c0, Func Offset: 0x30
	// Line 352, Address: 0x1ec1c8, Func Offset: 0x38
	// Line 353, Address: 0x1ec1d0, Func Offset: 0x40
	// Line 355, Address: 0x1ec1d8, Func Offset: 0x48
	// Line 356, Address: 0x1ec1e4, Func Offset: 0x54
	// Line 358, Address: 0x1ec1ec, Func Offset: 0x5c
	// Line 359, Address: 0x1ec204, Func Offset: 0x74
	// Line 360, Address: 0x1ec214, Func Offset: 0x84
	// Line 362, Address: 0x1ec230, Func Offset: 0xa0
	// Line 364, Address: 0x1ec250, Func Offset: 0xc0
	// Line 366, Address: 0x1ec258, Func Offset: 0xc8
	// Line 367, Address: 0x1ec268, Func Offset: 0xd8
	// Func End, Address: 0x1ec280, Func Offset: 0xf0
}

// 
// Start address: 0x1ec280
void EnemyBuzzHandle(sfObj* obj)
{
	EnemyCondition cond;
	EnemyBuzzWork* ew;
	// Line 371, Address: 0x1ec280, Func Offset: 0
	// Line 373, Address: 0x1ec28c, Func Offset: 0xc
	// Line 374, Address: 0x1ec294, Func Offset: 0x14
	// Line 375, Address: 0x1ec29c, Func Offset: 0x1c
	// Line 376, Address: 0x1ec2ac, Func Offset: 0x2c
	// Line 377, Address: 0x1ec2b4, Func Offset: 0x34
	// Line 378, Address: 0x1ec2bc, Func Offset: 0x3c
	// Line 379, Address: 0x1ec2c8, Func Offset: 0x48
	// Line 380, Address: 0x1ec2d0, Func Offset: 0x50
	// Line 381, Address: 0x1ec2e8, Func Offset: 0x68
	// Line 383, Address: 0x1ec2f0, Func Offset: 0x70
	// Line 384, Address: 0x1ec2f8, Func Offset: 0x78
	// Line 386, Address: 0x1ec300, Func Offset: 0x80
	// Line 388, Address: 0x1ec308, Func Offset: 0x88
	// Line 389, Address: 0x1ec318, Func Offset: 0x98
	// Line 390, Address: 0x1ec32c, Func Offset: 0xac
	// Line 391, Address: 0x1ec334, Func Offset: 0xb4
	// Line 392, Address: 0x1ec340, Func Offset: 0xc0
	// Line 393, Address: 0x1ec348, Func Offset: 0xc8
	// Line 395, Address: 0x1ec354, Func Offset: 0xd4
	// Line 396, Address: 0x1ec360, Func Offset: 0xe0
	// Line 398, Address: 0x1ec368, Func Offset: 0xe8
	// Func End, Address: 0x1ec378, Func Offset: 0xf8
}

// 
// Start address: 0x1ec380
void EnemyBuzzHandle2(sfObj* obj)
{
	// Line 402, Address: 0x1ec380, Func Offset: 0
	// Line 403, Address: 0x1ec38c, Func Offset: 0xc
	// Line 404, Address: 0x1ec394, Func Offset: 0x14
	// Line 405, Address: 0x1ec3b0, Func Offset: 0x30
	// Line 406, Address: 0x1ec3c8, Func Offset: 0x48
	// Line 407, Address: 0x1ec3d0, Func Offset: 0x50
	// Line 408, Address: 0x1ec3d8, Func Offset: 0x58
	// Func End, Address: 0x1ec3e8, Func Offset: 0x68
}

// 
// Start address: 0x1ec3f0
void EnemyBuzzDraw(sfObj* obj)
{
	// Line 413, Address: 0x1ec3f0, Func Offset: 0
	// Func End, Address: 0x1ec3f8, Func Offset: 0x8
}

// 
// Start address: 0x1ec400
void EnemyBuzzDestruct(sfObj* obj)
{
	EnemyBuzzWork* ew;
	// Line 438, Address: 0x1ec400, Func Offset: 0
	// Line 440, Address: 0x1ec410, Func Offset: 0x10
	// Line 441, Address: 0x1ec418, Func Offset: 0x18
	// Line 442, Address: 0x1ec424, Func Offset: 0x24
	// Line 443, Address: 0x1ec42c, Func Offset: 0x2c
	// Line 444, Address: 0x1ec438, Func Offset: 0x38
	// Line 445, Address: 0x1ec444, Func Offset: 0x44
	// Line 446, Address: 0x1ec44c, Func Offset: 0x4c
	// Line 447, Address: 0x1ec454, Func Offset: 0x54
	// Line 448, Address: 0x1ec458, Func Offset: 0x58
	// Line 449, Address: 0x1ec460, Func Offset: 0x60
	// Line 450, Address: 0x1ec468, Func Offset: 0x68
	// Line 451, Address: 0x1ec470, Func Offset: 0x70
	// Line 452, Address: 0x1ec478, Func Offset: 0x78
	// Line 456, Address: 0x1ec4d8, Func Offset: 0xd8
	// Line 457, Address: 0x1ec4e4, Func Offset: 0xe4
	// Line 458, Address: 0x1ec4ec, Func Offset: 0xec
	// Line 459, Address: 0x1ec4f0, Func Offset: 0xf0
	// Line 461, Address: 0x1ec520, Func Offset: 0x120
	// Line 463, Address: 0x1ec528, Func Offset: 0x128
	// Line 464, Address: 0x1ec530, Func Offset: 0x130
	// Line 465, Address: 0x1ec538, Func Offset: 0x138
	// Func End, Address: 0x1ec54c, Func Offset: 0x14c
}

// 
// Start address: 0x1ec550
void EnemyBuzzDataPreserve(sfObj* obj)
{
	EnemyBuzzWork* ew;
	EnemyManageDataOne* pe;
	int step;
	int substep;
	// Line 469, Address: 0x1ec550, Func Offset: 0
	// Line 473, Address: 0x1ec56c, Func Offset: 0x1c
	// Line 474, Address: 0x1ec578, Func Offset: 0x28
	// Line 475, Address: 0x1ec584, Func Offset: 0x34
	// Line 476, Address: 0x1ec59c, Func Offset: 0x4c
	// Line 480, Address: 0x1ec5f0, Func Offset: 0xa0
	// Line 482, Address: 0x1ec5f8, Func Offset: 0xa8
	// Line 483, Address: 0x1ec600, Func Offset: 0xb0
	// Line 484, Address: 0x1ec60c, Func Offset: 0xbc
	// Line 485, Address: 0x1ec618, Func Offset: 0xc8
	// Line 486, Address: 0x1ec624, Func Offset: 0xd4
	// Line 488, Address: 0x1ec630, Func Offset: 0xe0
	// Line 487, Address: 0x1ec634, Func Offset: 0xe4
	// Line 488, Address: 0x1ec638, Func Offset: 0xe8
	// Line 491, Address: 0x1ec67c, Func Offset: 0x12c
	// Line 493, Address: 0x1ec688, Func Offset: 0x138
	// Func End, Address: 0x1ec6a8, Func Offset: 0x158
}

// 
// Start address: 0x1ec6b0
void EnemyBuzzDataExtract(sfObj* obj)
{
	EnemyBuzzWork* ew;
	EnemyManageDataOne* pe;
	EnemyBuzzWork* ew;
	// Line 497, Address: 0x1ec6b0, Func Offset: 0
	// Line 500, Address: 0x1ec6c4, Func Offset: 0x14
	// Line 501, Address: 0x1ec6d0, Func Offset: 0x20
	// Line 502, Address: 0x1ec6e4, Func Offset: 0x34
	// Line 503, Address: 0x1ec6f0, Func Offset: 0x40
	// Line 504, Address: 0x1ec6fc, Func Offset: 0x4c
	// Line 505, Address: 0x1ec700, Func Offset: 0x50
	// Line 507, Address: 0x1ec71c, Func Offset: 0x6c
	// Line 508, Address: 0x1ec724, Func Offset: 0x74
	// Line 507, Address: 0x1ec728, Func Offset: 0x78
	// Line 508, Address: 0x1ec72c, Func Offset: 0x7c
	// Line 509, Address: 0x1ec734, Func Offset: 0x84
	// Line 510, Address: 0x1ec740, Func Offset: 0x90
	// Line 511, Address: 0x1ec748, Func Offset: 0x98
	// Line 513, Address: 0x1ec750, Func Offset: 0xa0
	// Line 514, Address: 0x1ec75c, Func Offset: 0xac
	// Line 515, Address: 0x1ec760, Func Offset: 0xb0
	// Line 518, Address: 0x1ec768, Func Offset: 0xb8
	// Line 519, Address: 0x1ec77c, Func Offset: 0xcc
	// Line 520, Address: 0x1ec784, Func Offset: 0xd4
	// Line 521, Address: 0x1ec788, Func Offset: 0xd8
	// Func End, Address: 0x1ec7a0, Func Offset: 0xf0
}

// 
// Start address: 0x1ec7a0
void check_increase(sfObj* obj)
{
	int n;
	sfObj* tobj;
	// Line 525, Address: 0x1ec7a0, Func Offset: 0
	// Line 527, Address: 0x1ec7b0, Func Offset: 0x10
	// Line 528, Address: 0x1ec7bc, Func Offset: 0x1c
	// Line 531, Address: 0x1ec800, Func Offset: 0x60
	// Line 537, Address: 0x1ec844, Func Offset: 0xa4
	// Line 538, Address: 0x1ec84c, Func Offset: 0xac
	// Line 541, Address: 0x1ec860, Func Offset: 0xc0
	// Func End, Address: 0x1ec874, Func Offset: 0xd4
}

// 
// Start address: 0x1ec880
void EnemyBuzzFlyControl(sfObj* obj)
{
	EnemyBuzzWork* ew;
	float* pos;
	float* ppos;
	float vec[4];
	float vec2[4];
	float* orot;
	float rot[4];
	float rot2[4];
	float dt;
	float d;
	float ds;
	float t;
	int mode;
	// Line 545, Address: 0x1ec880, Func Offset: 0
	// Line 553, Address: 0x1ec8a8, Func Offset: 0x28
	// Line 554, Address: 0x1ec8b4, Func Offset: 0x34
	// Line 555, Address: 0x1ec8bc, Func Offset: 0x3c
	// Line 556, Address: 0x1ec8c4, Func Offset: 0x44
	// Line 557, Address: 0x1ec8ec, Func Offset: 0x6c
	// Line 558, Address: 0x1ec8f0, Func Offset: 0x70
	// Line 560, Address: 0x1ec8f4, Func Offset: 0x74
	// Line 561, Address: 0x1ec8f8, Func Offset: 0x78
	// Line 563, Address: 0x1ec900, Func Offset: 0x80
	// Line 564, Address: 0x1ec924, Func Offset: 0xa4
	// Line 565, Address: 0x1ec930, Func Offset: 0xb0
	// Line 567, Address: 0x1ec938, Func Offset: 0xb8
	// Line 568, Address: 0x1ec944, Func Offset: 0xc4
	// Line 569, Address: 0x1ec94c, Func Offset: 0xcc
	// Line 568, Address: 0x1ec950, Func Offset: 0xd0
	// Line 569, Address: 0x1ec954, Func Offset: 0xd4
	// Line 570, Address: 0x1ec960, Func Offset: 0xe0
	// Line 571, Address: 0x1ec968, Func Offset: 0xe8
	// Line 572, Address: 0x1ec970, Func Offset: 0xf0
	// Line 573, Address: 0x1ec97c, Func Offset: 0xfc
	// Line 574, Address: 0x1ec980, Func Offset: 0x100
	// Line 575, Address: 0x1ec9a0, Func Offset: 0x120
	// Line 576, Address: 0x1ec9a4, Func Offset: 0x124
	// Line 577, Address: 0x1ec9a8, Func Offset: 0x128
	// Line 578, Address: 0x1ec9c0, Func Offset: 0x140
	// Line 580, Address: 0x1ec9e0, Func Offset: 0x160
	// Line 581, Address: 0x1eca14, Func Offset: 0x194
	// Line 582, Address: 0x1eca20, Func Offset: 0x1a0
	// Line 583, Address: 0x1eca30, Func Offset: 0x1b0
	// Line 584, Address: 0x1eca3c, Func Offset: 0x1bc
	// Line 585, Address: 0x1eca4c, Func Offset: 0x1cc
	// Line 586, Address: 0x1eca60, Func Offset: 0x1e0
	// Line 587, Address: 0x1eca7c, Func Offset: 0x1fc
	// Line 588, Address: 0x1eca80, Func Offset: 0x200
	// Line 592, Address: 0x1ecabc, Func Offset: 0x23c
	// Line 593, Address: 0x1ecac0, Func Offset: 0x240
	// Line 596, Address: 0x1ecae4, Func Offset: 0x264
	// Line 597, Address: 0x1ecae8, Func Offset: 0x268
	// Line 598, Address: 0x1ecaf0, Func Offset: 0x270
	// Line 600, Address: 0x1ecaf8, Func Offset: 0x278
	// Line 601, Address: 0x1ecb24, Func Offset: 0x2a4
	// Line 602, Address: 0x1ecb50, Func Offset: 0x2d0
	// Line 603, Address: 0x1ecb6c, Func Offset: 0x2ec
	// Line 604, Address: 0x1ecb74, Func Offset: 0x2f4
	// Line 603, Address: 0x1ecb78, Func Offset: 0x2f8
	// Line 604, Address: 0x1ecb7c, Func Offset: 0x2fc
	// Line 603, Address: 0x1ecb80, Func Offset: 0x300
	// Line 604, Address: 0x1ecb88, Func Offset: 0x308
	// Line 608, Address: 0x1ecb9c, Func Offset: 0x31c
	// Line 609, Address: 0x1ecba0, Func Offset: 0x320
	// Line 610, Address: 0x1ecba8, Func Offset: 0x328
	// Line 612, Address: 0x1ecbb0, Func Offset: 0x330
	// Line 614, Address: 0x1ecbdc, Func Offset: 0x35c
	// Line 615, Address: 0x1ecbf8, Func Offset: 0x378
	// Line 616, Address: 0x1ecc14, Func Offset: 0x394
	// Line 617, Address: 0x1ecc1c, Func Offset: 0x39c
	// Line 618, Address: 0x1ecc24, Func Offset: 0x3a4
	// Line 619, Address: 0x1ecc28, Func Offset: 0x3a8
	// Line 620, Address: 0x1ecc54, Func Offset: 0x3d4
	// Line 621, Address: 0x1ecc70, Func Offset: 0x3f0
	// Line 622, Address: 0x1ecc88, Func Offset: 0x408
	// Line 624, Address: 0x1ecc90, Func Offset: 0x410
	// Line 625, Address: 0x1eccbc, Func Offset: 0x43c
	// Line 628, Address: 0x1ecce8, Func Offset: 0x468
	// Line 630, Address: 0x1ecd10, Func Offset: 0x490
	// Line 631, Address: 0x1ecd14, Func Offset: 0x494
	// Line 632, Address: 0x1ecd1c, Func Offset: 0x49c
	// Line 633, Address: 0x1ecd20, Func Offset: 0x4a0
	// Line 634, Address: 0x1ecd44, Func Offset: 0x4c4
	// Line 635, Address: 0x1ecd80, Func Offset: 0x500
	// Line 636, Address: 0x1ecda0, Func Offset: 0x520
	// Line 637, Address: 0x1ecdc4, Func Offset: 0x544
	// Line 638, Address: 0x1ecdf0, Func Offset: 0x570
	// Line 639, Address: 0x1ecdfc, Func Offset: 0x57c
	// Line 641, Address: 0x1ece20, Func Offset: 0x5a0
	// Line 643, Address: 0x1ece28, Func Offset: 0x5a8
	// Line 644, Address: 0x1ece38, Func Offset: 0x5b8
	// Line 643, Address: 0x1ece3c, Func Offset: 0x5bc
	// Line 644, Address: 0x1ece40, Func Offset: 0x5c0
	// Line 645, Address: 0x1ece54, Func Offset: 0x5d4
	// Line 646, Address: 0x1ece58, Func Offset: 0x5d8
	// Line 647, Address: 0x1ece60, Func Offset: 0x5e0
	// Line 651, Address: 0x1ece80, Func Offset: 0x600
	// Line 649, Address: 0x1ece84, Func Offset: 0x604
	// Line 651, Address: 0x1ece88, Func Offset: 0x608
	// Line 649, Address: 0x1ece8c, Func Offset: 0x60c
	// Line 650, Address: 0x1ece94, Func Offset: 0x614
	// Line 651, Address: 0x1ecea0, Func Offset: 0x620
	// Line 652, Address: 0x1eceb8, Func Offset: 0x638
	// Line 654, Address: 0x1ecec0, Func Offset: 0x640
	// Line 655, Address: 0x1ecf04, Func Offset: 0x684
	// Line 656, Address: 0x1ecf18, Func Offset: 0x698
	// Line 657, Address: 0x1ecf20, Func Offset: 0x6a0
	// Line 656, Address: 0x1ecf28, Func Offset: 0x6a8
	// Line 657, Address: 0x1ecf3c, Func Offset: 0x6bc
	// Line 659, Address: 0x1ecf58, Func Offset: 0x6d8
	// Line 660, Address: 0x1ecf78, Func Offset: 0x6f8
	// Line 661, Address: 0x1ecf9c, Func Offset: 0x71c
	// Line 663, Address: 0x1ecfc8, Func Offset: 0x748
	// Line 664, Address: 0x1ecfe8, Func Offset: 0x768
	// Line 665, Address: 0x1ecfec, Func Offset: 0x76c
	// Line 670, Address: 0x1ecff4, Func Offset: 0x774
	// Line 671, Address: 0x1ecff8, Func Offset: 0x778
	// Line 672, Address: 0x1ed004, Func Offset: 0x784
	// Line 673, Address: 0x1ed00c, Func Offset: 0x78c
	// Line 674, Address: 0x1ed010, Func Offset: 0x790
	// Line 676, Address: 0x1ed018, Func Offset: 0x798
	// Line 677, Address: 0x1ed020, Func Offset: 0x7a0
	// Line 678, Address: 0x1ed02c, Func Offset: 0x7ac
	// Line 679, Address: 0x1ed054, Func Offset: 0x7d4
	// Line 680, Address: 0x1ed058, Func Offset: 0x7d8
	// Line 681, Address: 0x1ed07c, Func Offset: 0x7fc
	// Line 682, Address: 0x1ed080, Func Offset: 0x800
	// Line 685, Address: 0x1ed08c, Func Offset: 0x80c
	// Line 686, Address: 0x1ed090, Func Offset: 0x810
	// Line 688, Address: 0x1ed0b4, Func Offset: 0x834
	// Line 689, Address: 0x1ed0b8, Func Offset: 0x838
	// Line 690, Address: 0x1ed0dc, Func Offset: 0x85c
	// Line 691, Address: 0x1ed0f4, Func Offset: 0x874
	// Line 692, Address: 0x1ed0fc, Func Offset: 0x87c
	// Line 693, Address: 0x1ed108, Func Offset: 0x888
	// Line 694, Address: 0x1ed114, Func Offset: 0x894
	// Line 695, Address: 0x1ed130, Func Offset: 0x8b0
	// Line 696, Address: 0x1ed13c, Func Offset: 0x8bc
	// Line 697, Address: 0x1ed144, Func Offset: 0x8c4
	// Line 698, Address: 0x1ed148, Func Offset: 0x8c8
	// Line 699, Address: 0x1ed16c, Func Offset: 0x8ec
	// Line 700, Address: 0x1ed184, Func Offset: 0x904
	// Line 701, Address: 0x1ed18c, Func Offset: 0x90c
	// Line 702, Address: 0x1ed198, Func Offset: 0x918
	// Line 703, Address: 0x1ed1a4, Func Offset: 0x924
	// Line 704, Address: 0x1ed1bc, Func Offset: 0x93c
	// Line 705, Address: 0x1ed1c8, Func Offset: 0x948
	// Line 710, Address: 0x1ed1d0, Func Offset: 0x950
	// Line 711, Address: 0x1ed1e8, Func Offset: 0x968
	// Line 712, Address: 0x1ed1f4, Func Offset: 0x974
	// Line 713, Address: 0x1ed200, Func Offset: 0x980
	// Line 716, Address: 0x1ed208, Func Offset: 0x988
	// Line 717, Address: 0x1ed228, Func Offset: 0x9a8
	// Line 718, Address: 0x1ed234, Func Offset: 0x9b4
	// Line 719, Address: 0x1ed254, Func Offset: 0x9d4
	// Line 720, Address: 0x1ed264, Func Offset: 0x9e4
	// Line 721, Address: 0x1ed268, Func Offset: 0x9e8
	// Line 722, Address: 0x1ed274, Func Offset: 0x9f4
	// Line 727, Address: 0x1ed27c, Func Offset: 0x9fc
	// Line 728, Address: 0x1ed280, Func Offset: 0xa00
	// Line 729, Address: 0x1ed294, Func Offset: 0xa14
	// Line 730, Address: 0x1ed2a0, Func Offset: 0xa20
	// Line 732, Address: 0x1ed2a8, Func Offset: 0xa28
	// Line 733, Address: 0x1ed2c0, Func Offset: 0xa40
	// Line 734, Address: 0x1ed2cc, Func Offset: 0xa4c
	// Line 737, Address: 0x1ed2d8, Func Offset: 0xa58
	// Line 738, Address: 0x1ed2ec, Func Offset: 0xa6c
	// Line 739, Address: 0x1ed2fc, Func Offset: 0xa7c
	// Line 741, Address: 0x1ed308, Func Offset: 0xa88
	// Line 742, Address: 0x1ed31c, Func Offset: 0xa9c
	// Line 743, Address: 0x1ed32c, Func Offset: 0xaac
	// Line 744, Address: 0x1ed348, Func Offset: 0xac8
	// Line 746, Address: 0x1ed350, Func Offset: 0xad0
	// Line 747, Address: 0x1ed380, Func Offset: 0xb00
	// Line 748, Address: 0x1ed388, Func Offset: 0xb08
	// Line 749, Address: 0x1ed3a4, Func Offset: 0xb24
	// Line 750, Address: 0x1ed3bc, Func Offset: 0xb3c
	// Line 752, Address: 0x1ed3c4, Func Offset: 0xb44
	// Line 751, Address: 0x1ed3c8, Func Offset: 0xb48
	// Line 752, Address: 0x1ed3d4, Func Offset: 0xb54
	// Line 751, Address: 0x1ed3d8, Func Offset: 0xb58
	// Line 752, Address: 0x1ed3dc, Func Offset: 0xb5c
	// Line 753, Address: 0x1ed3e4, Func Offset: 0xb64
	// Line 754, Address: 0x1ed3fc, Func Offset: 0xb7c
	// Line 758, Address: 0x1ed400, Func Offset: 0xb80
	// Func End, Address: 0x1ed42c, Func Offset: 0xbac
}

// 
// Start address: 0x1ed430
void EnemyBuzzAnimeSet(sfObj* obj, int anime)
{
	int oa;
	// Line 762, Address: 0x1ed430, Func Offset: 0
	// Line 763, Address: 0x1ed444, Func Offset: 0x14
	// Line 764, Address: 0x1ed44c, Func Offset: 0x1c
	// Line 765, Address: 0x1ed454, Func Offset: 0x24
	// Line 766, Address: 0x1ed45c, Func Offset: 0x2c
	// Line 767, Address: 0x1ed464, Func Offset: 0x34
	// Line 768, Address: 0x1ed468, Func Offset: 0x38
	// Line 770, Address: 0x1ed48c, Func Offset: 0x5c
	// Line 771, Address: 0x1ed49c, Func Offset: 0x6c
	// Line 772, Address: 0x1ed4b0, Func Offset: 0x80
	// Line 773, Address: 0x1ed4b8, Func Offset: 0x88
	// Line 774, Address: 0x1ed4c4, Func Offset: 0x94
	// Line 775, Address: 0x1ed4c8, Func Offset: 0x98
	// Line 777, Address: 0x1ed4d0, Func Offset: 0xa0
	// Line 778, Address: 0x1ed4dc, Func Offset: 0xac
	// Line 779, Address: 0x1ed4e8, Func Offset: 0xb8
	// Line 781, Address: 0x1ed4f8, Func Offset: 0xc8
	// Line 783, Address: 0x1ed514, Func Offset: 0xe4
	// Line 784, Address: 0x1ed524, Func Offset: 0xf4
	// Line 786, Address: 0x1ed544, Func Offset: 0x114
	// Line 787, Address: 0x1ed554, Func Offset: 0x124
	// Line 788, Address: 0x1ed558, Func Offset: 0x128
	// Line 789, Address: 0x1ed564, Func Offset: 0x134
	// Func End, Address: 0x1ed57c, Func Offset: 0x14c
}

// 
// Start address: 0x1ed580
void EnemyBuzzControl(sfObj* obj)
{
	int step;
	EnemyBuzzWork* ew;
	// Line 829, Address: 0x1ed580, Func Offset: 0
	// Line 838, Address: 0x1ed598, Func Offset: 0x18
	// Line 841, Address: 0x1ed5a4, Func Offset: 0x24
	// Line 842, Address: 0x1ed5b4, Func Offset: 0x34
	// Line 843, Address: 0x1ed5bc, Func Offset: 0x3c
	// Line 844, Address: 0x1ed5c4, Func Offset: 0x44
	// Line 845, Address: 0x1ed5cc, Func Offset: 0x4c
	// Line 851, Address: 0x1ed5d0, Func Offset: 0x50
	// Line 853, Address: 0x1ed5ec, Func Offset: 0x6c
	// Line 855, Address: 0x1ed5f4, Func Offset: 0x74
	// Line 857, Address: 0x1ed624, Func Offset: 0xa4
	// Line 863, Address: 0x1ed640, Func Offset: 0xc0
	// Func End, Address: 0x1ed65c, Func Offset: 0xdc
}

// 
// Start address: 0x1ed660
void EnemyBuzzControlInit(sfObj* obj)
{
	EnemyBuzzWork* ew;
	int fs;
	// Line 867, Address: 0x1ed660, Func Offset: 0
	// Line 871, Address: 0x1ed670, Func Offset: 0x10
	// Line 872, Address: 0x1ed67c, Func Offset: 0x1c
	// Line 873, Address: 0x1ed684, Func Offset: 0x24
	// Line 874, Address: 0x1ed690, Func Offset: 0x30
	// Line 875, Address: 0x1ed6a0, Func Offset: 0x40
	// Line 876, Address: 0x1ed6a8, Func Offset: 0x48
	// Line 878, Address: 0x1ed6b0, Func Offset: 0x50
	// Line 879, Address: 0x1ed6bc, Func Offset: 0x5c
	// Line 878, Address: 0x1ed6c0, Func Offset: 0x60
	// Line 879, Address: 0x1ed6c4, Func Offset: 0x64
	// Line 881, Address: 0x1ed708, Func Offset: 0xa8
	// Line 882, Address: 0x1ed714, Func Offset: 0xb4
	// Line 886, Address: 0x1ed71c, Func Offset: 0xbc
	// Line 887, Address: 0x1ed720, Func Offset: 0xc0
	// Line 888, Address: 0x1ed728, Func Offset: 0xc8
	// Line 889, Address: 0x1ed734, Func Offset: 0xd4
	// Line 890, Address: 0x1ed73c, Func Offset: 0xdc
	// Line 891, Address: 0x1ed740, Func Offset: 0xe0
	// Line 892, Address: 0x1ed74c, Func Offset: 0xec
	// Line 893, Address: 0x1ed754, Func Offset: 0xf4
	// Line 894, Address: 0x1ed758, Func Offset: 0xf8
	// Line 895, Address: 0x1ed760, Func Offset: 0x100
	// Line 897, Address: 0x1ed76c, Func Offset: 0x10c
	// Line 898, Address: 0x1ed770, Func Offset: 0x110
	// Func End, Address: 0x1ed784, Func Offset: 0x124
}

// 
// Start address: 0x1ed790
void EnemyBuzzControlStayOnCeiling(sfObj* obj)
{
	EnemyBuzzWork* ew;
	float* pos;
	float d;
	float dt;
	int f;
	float vec[4];
	EnemyMeasureResult mres;
	// Line 902, Address: 0x1ed790, Func Offset: 0
	// Line 907, Address: 0x1ed7b0, Func Offset: 0x20
	// Line 908, Address: 0x1ed7bc, Func Offset: 0x2c
	// Line 909, Address: 0x1ed7c8, Func Offset: 0x38
	// Line 911, Address: 0x1ed7d4, Func Offset: 0x44
	// Line 909, Address: 0x1ed7d8, Func Offset: 0x48
	// Line 910, Address: 0x1ed7dc, Func Offset: 0x4c
	// Line 911, Address: 0x1ed7e0, Func Offset: 0x50
	// Line 912, Address: 0x1ed7e8, Func Offset: 0x58
	// Line 913, Address: 0x1ed7f4, Func Offset: 0x64
	// Line 914, Address: 0x1ed82c, Func Offset: 0x9c
	// Line 915, Address: 0x1ed830, Func Offset: 0xa0
	// Line 916, Address: 0x1ed840, Func Offset: 0xb0
	// Line 917, Address: 0x1ed84c, Func Offset: 0xbc
	// Line 918, Address: 0x1ed858, Func Offset: 0xc8
	// Line 919, Address: 0x1ed864, Func Offset: 0xd4
	// Line 920, Address: 0x1ed870, Func Offset: 0xe0
	// Line 921, Address: 0x1ed878, Func Offset: 0xe8
	// Line 922, Address: 0x1ed884, Func Offset: 0xf4
	// Line 923, Address: 0x1ed894, Func Offset: 0x104
	// Line 924, Address: 0x1ed89c, Func Offset: 0x10c
	// Line 925, Address: 0x1ed8a8, Func Offset: 0x118
	// Line 926, Address: 0x1ed8b4, Func Offset: 0x124
	// Line 925, Address: 0x1ed8b8, Func Offset: 0x128
	// Line 926, Address: 0x1ed8c4, Func Offset: 0x134
	// Line 928, Address: 0x1ed8cc, Func Offset: 0x13c
	// Line 929, Address: 0x1ed8d4, Func Offset: 0x144
	// Line 931, Address: 0x1ed8d8, Func Offset: 0x148
	// Line 930, Address: 0x1ed8dc, Func Offset: 0x14c
	// Line 931, Address: 0x1ed8e4, Func Offset: 0x154
	// Line 932, Address: 0x1ed8f4, Func Offset: 0x164
	// Line 933, Address: 0x1ed904, Func Offset: 0x174
	// Line 934, Address: 0x1ed908, Func Offset: 0x178
	// Line 935, Address: 0x1ed918, Func Offset: 0x188
	// Line 937, Address: 0x1ed928, Func Offset: 0x198
	// Line 940, Address: 0x1ed940, Func Offset: 0x1b0
	// Line 941, Address: 0x1ed944, Func Offset: 0x1b4
	// Line 943, Address: 0x1ed968, Func Offset: 0x1d8
	// Line 946, Address: 0x1ed98c, Func Offset: 0x1fc
	// Line 949, Address: 0x1ed9a8, Func Offset: 0x218
	// Line 951, Address: 0x1ed9b0, Func Offset: 0x220
	// Line 953, Address: 0x1ed9c8, Func Offset: 0x238
	// Line 955, Address: 0x1ed9d0, Func Offset: 0x240
	// Line 956, Address: 0x1ed9d8, Func Offset: 0x248
	// Line 957, Address: 0x1ed9e8, Func Offset: 0x258
	// Line 959, Address: 0x1ed9f8, Func Offset: 0x268
	// Line 961, Address: 0x1eda20, Func Offset: 0x290
	// Line 964, Address: 0x1eda24, Func Offset: 0x294
	// Line 965, Address: 0x1eda28, Func Offset: 0x298
	// Line 969, Address: 0x1eda4c, Func Offset: 0x2bc
	// Line 970, Address: 0x1eda64, Func Offset: 0x2d4
	// Line 971, Address: 0x1eda90, Func Offset: 0x300
	// Line 972, Address: 0x1edaa4, Func Offset: 0x314
	// Line 973, Address: 0x1edab0, Func Offset: 0x320
	// Line 974, Address: 0x1edac4, Func Offset: 0x334
	// Line 975, Address: 0x1edad0, Func Offset: 0x340
	// Line 976, Address: 0x1edafc, Func Offset: 0x36c
	// Line 977, Address: 0x1edb14, Func Offset: 0x384
	// Line 978, Address: 0x1edb18, Func Offset: 0x388
	// Line 979, Address: 0x1edb24, Func Offset: 0x394
	// Line 980, Address: 0x1edb30, Func Offset: 0x3a0
	// Line 981, Address: 0x1edb3c, Func Offset: 0x3ac
	// Line 982, Address: 0x1edb44, Func Offset: 0x3b4
	// Line 984, Address: 0x1edb50, Func Offset: 0x3c0
	// Func End, Address: 0x1edb74, Func Offset: 0x3e4
}

// 
// Start address: 0x1edb80
void EnemyBuzzControlStayOnWall(sfObj* obj)
{
	EnemyBuzzWork* ew;
	float* pos;
	float vec[4];
	float tpos[4];
	float tpos2[4];
	float rot[4];
	float quat[4];
	int f;
	int rf;
	float d;
	float dt;
	// Line 988, Address: 0x1edb80, Func Offset: 0
	// Line 995, Address: 0x1edba4, Func Offset: 0x24
	// Line 996, Address: 0x1edbb0, Func Offset: 0x30
	// Line 997, Address: 0x1edbbc, Func Offset: 0x3c
	// Line 998, Address: 0x1edbc8, Func Offset: 0x48
	// Line 999, Address: 0x1edbd8, Func Offset: 0x58
	// Line 1001, Address: 0x1edbe4, Func Offset: 0x64
	// Line 1002, Address: 0x1edbf0, Func Offset: 0x70
	// Line 1003, Address: 0x1edc1c, Func Offset: 0x9c
	// Line 1004, Address: 0x1edc20, Func Offset: 0xa0
	// Line 1005, Address: 0x1edc30, Func Offset: 0xb0
	// Line 1006, Address: 0x1edc3c, Func Offset: 0xbc
	// Line 1007, Address: 0x1edc48, Func Offset: 0xc8
	// Line 1008, Address: 0x1edc54, Func Offset: 0xd4
	// Line 1009, Address: 0x1edc5c, Func Offset: 0xdc
	// Line 1010, Address: 0x1edc7c, Func Offset: 0xfc
	// Line 1011, Address: 0x1edc84, Func Offset: 0x104
	// Line 1012, Address: 0x1edc90, Func Offset: 0x110
	// Line 1013, Address: 0x1edc9c, Func Offset: 0x11c
	// Line 1014, Address: 0x1edca0, Func Offset: 0x120
	// Line 1015, Address: 0x1edcb0, Func Offset: 0x130
	// Line 1016, Address: 0x1edcbc, Func Offset: 0x13c
	// Line 1017, Address: 0x1edcc8, Func Offset: 0x148
	// Line 1018, Address: 0x1edcd8, Func Offset: 0x158
	// Line 1019, Address: 0x1edce0, Func Offset: 0x160
	// Line 1020, Address: 0x1edce8, Func Offset: 0x168
	// Line 1021, Address: 0x1edcfc, Func Offset: 0x17c
	// Line 1020, Address: 0x1edd00, Func Offset: 0x180
	// Line 1021, Address: 0x1edd10, Func Offset: 0x190
	// Line 1023, Address: 0x1edd18, Func Offset: 0x198
	// Line 1025, Address: 0x1edd20, Func Offset: 0x1a0
	// Line 1026, Address: 0x1edd30, Func Offset: 0x1b0
	// Line 1027, Address: 0x1edd4c, Func Offset: 0x1cc
	// Line 1029, Address: 0x1edd54, Func Offset: 0x1d4
	// Line 1030, Address: 0x1edd5c, Func Offset: 0x1dc
	// Line 1032, Address: 0x1edd60, Func Offset: 0x1e0
	// Line 1031, Address: 0x1edd64, Func Offset: 0x1e4
	// Line 1032, Address: 0x1edd6c, Func Offset: 0x1ec
	// Line 1033, Address: 0x1edd7c, Func Offset: 0x1fc
	// Line 1034, Address: 0x1edd8c, Func Offset: 0x20c
	// Line 1035, Address: 0x1edd90, Func Offset: 0x210
	// Line 1036, Address: 0x1edda0, Func Offset: 0x220
	// Line 1038, Address: 0x1eddb0, Func Offset: 0x230
	// Line 1040, Address: 0x1eddc8, Func Offset: 0x248
	// Line 1042, Address: 0x1eddd0, Func Offset: 0x250
	// Line 1043, Address: 0x1edddc, Func Offset: 0x25c
	// Line 1044, Address: 0x1ede00, Func Offset: 0x280
	// Line 1045, Address: 0x1ede14, Func Offset: 0x294
	// Line 1044, Address: 0x1ede18, Func Offset: 0x298
	// Line 1045, Address: 0x1ede28, Func Offset: 0x2a8
	// Line 1048, Address: 0x1ede30, Func Offset: 0x2b0
	// Line 1049, Address: 0x1ede38, Func Offset: 0x2b8
	// Line 1050, Address: 0x1ede54, Func Offset: 0x2d4
	// Line 1051, Address: 0x1ede78, Func Offset: 0x2f8
	// Line 1052, Address: 0x1ede80, Func Offset: 0x300
	// Line 1053, Address: 0x1ede88, Func Offset: 0x308
	// Line 1055, Address: 0x1ede94, Func Offset: 0x314
	// Line 1056, Address: 0x1edea0, Func Offset: 0x320
	// Line 1057, Address: 0x1edecc, Func Offset: 0x34c
	// Line 1058, Address: 0x1edee8, Func Offset: 0x368
	// Line 1059, Address: 0x1edef4, Func Offset: 0x374
	// Line 1060, Address: 0x1edf20, Func Offset: 0x3a0
	// Line 1062, Address: 0x1edf40, Func Offset: 0x3c0
	// Line 1061, Address: 0x1edf48, Func Offset: 0x3c8
	// Line 1062, Address: 0x1edf4c, Func Offset: 0x3cc
	// Line 1064, Address: 0x1edf5c, Func Offset: 0x3dc
	// Line 1065, Address: 0x1edf68, Func Offset: 0x3e8
	// Line 1066, Address: 0x1edf74, Func Offset: 0x3f4
	// Line 1067, Address: 0x1edfa0, Func Offset: 0x420
	// Line 1068, Address: 0x1edfc0, Func Offset: 0x440
	// Line 1069, Address: 0x1edfd8, Func Offset: 0x458
	// Line 1071, Address: 0x1edfdc, Func Offset: 0x45c
	// Line 1072, Address: 0x1edfe0, Func Offset: 0x460
	// Line 1073, Address: 0x1edfe8, Func Offset: 0x468
	// Line 1074, Address: 0x1ee000, Func Offset: 0x480
	// Line 1076, Address: 0x1ee02c, Func Offset: 0x4ac
	// Line 1077, Address: 0x1ee038, Func Offset: 0x4b8
	// Line 1080, Address: 0x1ee06c, Func Offset: 0x4ec
	// Line 1081, Address: 0x1ee070, Func Offset: 0x4f0
	// Line 1082, Address: 0x1ee084, Func Offset: 0x504
	// Line 1083, Address: 0x1ee094, Func Offset: 0x514
	// Line 1084, Address: 0x1ee0a0, Func Offset: 0x520
	// Line 1085, Address: 0x1ee0ac, Func Offset: 0x52c
	// Line 1086, Address: 0x1ee0b4, Func Offset: 0x534
	// Line 1087, Address: 0x1ee0e4, Func Offset: 0x564
	// Line 1090, Address: 0x1ee0f0, Func Offset: 0x570
	// Line 1092, Address: 0x1ee0f8, Func Offset: 0x578
	// Line 1093, Address: 0x1ee10c, Func Offset: 0x58c
	// Line 1094, Address: 0x1ee12c, Func Offset: 0x5ac
	// Line 1095, Address: 0x1ee138, Func Offset: 0x5b8
	// Line 1097, Address: 0x1ee150, Func Offset: 0x5d0
	// Line 1099, Address: 0x1ee158, Func Offset: 0x5d8
	// Line 1100, Address: 0x1ee168, Func Offset: 0x5e8
	// Line 1101, Address: 0x1ee170, Func Offset: 0x5f0
	// Line 1102, Address: 0x1ee180, Func Offset: 0x600
	// Line 1104, Address: 0x1ee190, Func Offset: 0x610
	// Line 1105, Address: 0x1ee1a8, Func Offset: 0x628
	// Line 1106, Address: 0x1ee1bc, Func Offset: 0x63c
	// Line 1109, Address: 0x1ee1cc, Func Offset: 0x64c
	// Line 1107, Address: 0x1ee1d0, Func Offset: 0x650
	// Line 1109, Address: 0x1ee1dc, Func Offset: 0x65c
	// Line 1107, Address: 0x1ee1e4, Func Offset: 0x664
	// Line 1108, Address: 0x1ee1ec, Func Offset: 0x66c
	// Line 1109, Address: 0x1ee1f0, Func Offset: 0x670
	// Line 1110, Address: 0x1ee200, Func Offset: 0x680
	// Line 1114, Address: 0x1ee204, Func Offset: 0x684
	// Line 1115, Address: 0x1ee208, Func Offset: 0x688
	// Line 1118, Address: 0x1ee220, Func Offset: 0x6a0
	// Line 1119, Address: 0x1ee224, Func Offset: 0x6a4
	// Line 1120, Address: 0x1ee240, Func Offset: 0x6c0
	// Line 1121, Address: 0x1ee244, Func Offset: 0x6c4
	// Line 1122, Address: 0x1ee248, Func Offset: 0x6c8
	// Line 1124, Address: 0x1ee26c, Func Offset: 0x6ec
	// Line 1125, Address: 0x1ee27c, Func Offset: 0x6fc
	// Line 1126, Address: 0x1ee2ac, Func Offset: 0x72c
	// Line 1127, Address: 0x1ee2c4, Func Offset: 0x744
	// Line 1128, Address: 0x1ee2d0, Func Offset: 0x750
	// Line 1129, Address: 0x1ee2dc, Func Offset: 0x75c
	// Line 1130, Address: 0x1ee2e8, Func Offset: 0x768
	// Line 1131, Address: 0x1ee2f4, Func Offset: 0x774
	// Line 1132, Address: 0x1ee2fc, Func Offset: 0x77c
	// Line 1134, Address: 0x1ee308, Func Offset: 0x788
	// Func End, Address: 0x1ee330, Func Offset: 0x7b0
}

// 
// Start address: 0x1ee330
void EnemyBuzzControlStayOnFloor(sfObj* obj)
{
	EnemyBuzzWork* ew;
	float* pos;
	int f;
	float d;
	float dt;
	float vec[4];
	// Line 1138, Address: 0x1ee330, Func Offset: 0
	// Line 1143, Address: 0x1ee350, Func Offset: 0x20
	// Line 1144, Address: 0x1ee35c, Func Offset: 0x2c
	// Line 1145, Address: 0x1ee368, Func Offset: 0x38
	// Line 1147, Address: 0x1ee374, Func Offset: 0x44
	// Line 1145, Address: 0x1ee378, Func Offset: 0x48
	// Line 1146, Address: 0x1ee37c, Func Offset: 0x4c
	// Line 1147, Address: 0x1ee380, Func Offset: 0x50
	// Line 1148, Address: 0x1ee388, Func Offset: 0x58
	// Line 1149, Address: 0x1ee394, Func Offset: 0x64
	// Line 1150, Address: 0x1ee3cc, Func Offset: 0x9c
	// Line 1151, Address: 0x1ee3d0, Func Offset: 0xa0
	// Line 1152, Address: 0x1ee3e0, Func Offset: 0xb0
	// Line 1153, Address: 0x1ee3f0, Func Offset: 0xc0
	// Line 1154, Address: 0x1ee3fc, Func Offset: 0xcc
	// Line 1155, Address: 0x1ee408, Func Offset: 0xd8
	// Line 1156, Address: 0x1ee414, Func Offset: 0xe4
	// Line 1157, Address: 0x1ee420, Func Offset: 0xf0
	// Line 1158, Address: 0x1ee428, Func Offset: 0xf8
	// Line 1159, Address: 0x1ee434, Func Offset: 0x104
	// Line 1160, Address: 0x1ee444, Func Offset: 0x114
	// Line 1161, Address: 0x1ee44c, Func Offset: 0x11c
	// Line 1162, Address: 0x1ee458, Func Offset: 0x128
	// Line 1163, Address: 0x1ee464, Func Offset: 0x134
	// Line 1162, Address: 0x1ee468, Func Offset: 0x138
	// Line 1163, Address: 0x1ee474, Func Offset: 0x144
	// Line 1165, Address: 0x1ee47c, Func Offset: 0x14c
	// Line 1166, Address: 0x1ee484, Func Offset: 0x154
	// Line 1168, Address: 0x1ee488, Func Offset: 0x158
	// Line 1167, Address: 0x1ee48c, Func Offset: 0x15c
	// Line 1168, Address: 0x1ee494, Func Offset: 0x164
	// Line 1169, Address: 0x1ee4a4, Func Offset: 0x174
	// Line 1170, Address: 0x1ee4b4, Func Offset: 0x184
	// Line 1171, Address: 0x1ee4b8, Func Offset: 0x188
	// Line 1172, Address: 0x1ee4c8, Func Offset: 0x198
	// Line 1174, Address: 0x1ee4d8, Func Offset: 0x1a8
	// Line 1177, Address: 0x1ee4f0, Func Offset: 0x1c0
	// Line 1178, Address: 0x1ee4f4, Func Offset: 0x1c4
	// Line 1180, Address: 0x1ee518, Func Offset: 0x1e8
	// Line 1183, Address: 0x1ee53c, Func Offset: 0x20c
	// Line 1186, Address: 0x1ee558, Func Offset: 0x228
	// Line 1188, Address: 0x1ee560, Func Offset: 0x230
	// Line 1190, Address: 0x1ee578, Func Offset: 0x248
	// Line 1192, Address: 0x1ee580, Func Offset: 0x250
	// Line 1193, Address: 0x1ee588, Func Offset: 0x258
	// Line 1194, Address: 0x1ee598, Func Offset: 0x268
	// Line 1196, Address: 0x1ee5a8, Func Offset: 0x278
	// Line 1198, Address: 0x1ee5d0, Func Offset: 0x2a0
	// Line 1201, Address: 0x1ee5d4, Func Offset: 0x2a4
	// Line 1202, Address: 0x1ee5d8, Func Offset: 0x2a8
	// Line 1205, Address: 0x1ee5fc, Func Offset: 0x2cc
	// Line 1206, Address: 0x1ee614, Func Offset: 0x2e4
	// Line 1207, Address: 0x1ee640, Func Offset: 0x310
	// Line 1208, Address: 0x1ee658, Func Offset: 0x328
	// Line 1209, Address: 0x1ee664, Func Offset: 0x334
	// Line 1210, Address: 0x1ee670, Func Offset: 0x340
	// Line 1211, Address: 0x1ee67c, Func Offset: 0x34c
	// Line 1212, Address: 0x1ee684, Func Offset: 0x354
	// Line 1214, Address: 0x1ee690, Func Offset: 0x360
	// Func End, Address: 0x1ee6b4, Func Offset: 0x384
}

// 
// Start address: 0x1ee6c0
void EnemyBuzzControlWander(sfObj* obj)
{
	EnemyBuzzWork* ew;
	EnemySenseData* es;
	float* pos;
	float* rot;
	float rot2[4];
	float tpos[4];
	float d;
	float dt;
	EnemyMeasureResult mres;
	float bh;
	// Line 1218, Address: 0x1ee6c0, Func Offset: 0
	// Line 1227, Address: 0x1ee6e4, Func Offset: 0x24
	// Line 1229, Address: 0x1ee6ec, Func Offset: 0x2c
	// Line 1230, Address: 0x1ee708, Func Offset: 0x48
	// Line 1231, Address: 0x1ee710, Func Offset: 0x50
	// Line 1233, Address: 0x1ee718, Func Offset: 0x58
	// Line 1234, Address: 0x1ee728, Func Offset: 0x68
	// Line 1235, Address: 0x1ee730, Func Offset: 0x70
	// Line 1237, Address: 0x1ee738, Func Offset: 0x78
	// Line 1238, Address: 0x1ee744, Func Offset: 0x84
	// Line 1239, Address: 0x1ee750, Func Offset: 0x90
	// Line 1240, Address: 0x1ee75c, Func Offset: 0x9c
	// Line 1242, Address: 0x1ee768, Func Offset: 0xa8
	// Line 1240, Address: 0x1ee76c, Func Offset: 0xac
	// Line 1242, Address: 0x1ee770, Func Offset: 0xb0
	// Line 1243, Address: 0x1ee778, Func Offset: 0xb8
	// Line 1245, Address: 0x1ee7b0, Func Offset: 0xf0
	// Line 1246, Address: 0x1ee7c0, Func Offset: 0x100
	// Line 1247, Address: 0x1ee7cc, Func Offset: 0x10c
	// Line 1248, Address: 0x1ee7d8, Func Offset: 0x118
	// Line 1249, Address: 0x1ee7e4, Func Offset: 0x124
	// Line 1250, Address: 0x1ee7f0, Func Offset: 0x130
	// Line 1251, Address: 0x1ee7fc, Func Offset: 0x13c
	// Line 1250, Address: 0x1ee800, Func Offset: 0x140
	// Line 1251, Address: 0x1ee804, Func Offset: 0x144
	// Line 1252, Address: 0x1ee80c, Func Offset: 0x14c
	// Line 1254, Address: 0x1ee814, Func Offset: 0x154
	// Line 1255, Address: 0x1ee818, Func Offset: 0x158
	// Line 1256, Address: 0x1ee838, Func Offset: 0x178
	// Line 1257, Address: 0x1ee84c, Func Offset: 0x18c
	// Line 1258, Address: 0x1ee85c, Func Offset: 0x19c
	// Line 1259, Address: 0x1ee874, Func Offset: 0x1b4
	// Line 1261, Address: 0x1ee888, Func Offset: 0x1c8
	// Line 1262, Address: 0x1ee898, Func Offset: 0x1d8
	// Line 1263, Address: 0x1ee8a0, Func Offset: 0x1e0
	// Line 1262, Address: 0x1ee8b4, Func Offset: 0x1f4
	// Line 1263, Address: 0x1ee8b8, Func Offset: 0x1f8
	// Line 1262, Address: 0x1ee8c0, Func Offset: 0x200
	// Line 1263, Address: 0x1ee8c4, Func Offset: 0x204
	// Line 1266, Address: 0x1ee8e0, Func Offset: 0x220
	// Line 1267, Address: 0x1ee8e8, Func Offset: 0x228
	// Line 1266, Address: 0x1ee8ec, Func Offset: 0x22c
	// Line 1267, Address: 0x1ee8f0, Func Offset: 0x230
	// Line 1268, Address: 0x1ee8fc, Func Offset: 0x23c
	// Line 1271, Address: 0x1ee900, Func Offset: 0x240
	// Line 1273, Address: 0x1ee908, Func Offset: 0x248
	// Line 1275, Address: 0x1ee930, Func Offset: 0x270
	// Line 1276, Address: 0x1ee938, Func Offset: 0x278
	// Line 1279, Address: 0x1ee940, Func Offset: 0x280
	// Line 1281, Address: 0x1ee974, Func Offset: 0x2b4
	// Line 1282, Address: 0x1ee97c, Func Offset: 0x2bc
	// Line 1283, Address: 0x1ee990, Func Offset: 0x2d0
	// Line 1282, Address: 0x1ee994, Func Offset: 0x2d4
	// Line 1283, Address: 0x1ee9a4, Func Offset: 0x2e4
	// Line 1285, Address: 0x1ee9ac, Func Offset: 0x2ec
	// Line 1286, Address: 0x1ee9b0, Func Offset: 0x2f0
	// Line 1288, Address: 0x1ee9f0, Func Offset: 0x330
	// Line 1289, Address: 0x1eea14, Func Offset: 0x354
	// Line 1290, Address: 0x1eea1c, Func Offset: 0x35c
	// Line 1291, Address: 0x1eea28, Func Offset: 0x368
	// Line 1292, Address: 0x1eea3c, Func Offset: 0x37c
	// Line 1291, Address: 0x1eea40, Func Offset: 0x380
	// Line 1292, Address: 0x1eea50, Func Offset: 0x390
	// Line 1293, Address: 0x1eea58, Func Offset: 0x398
	// Line 1294, Address: 0x1eea60, Func Offset: 0x3a0
	// Line 1297, Address: 0x1eeaa8, Func Offset: 0x3e8
	// Line 1298, Address: 0x1eeac0, Func Offset: 0x400
	// Line 1299, Address: 0x1eead4, Func Offset: 0x414
	// Line 1300, Address: 0x1eeadc, Func Offset: 0x41c
	// Line 1302, Address: 0x1eeae4, Func Offset: 0x424
	// Line 1303, Address: 0x1eeae8, Func Offset: 0x428
	// Line 1306, Address: 0x1eeaf0, Func Offset: 0x430
	// Line 1308, Address: 0x1eeaf8, Func Offset: 0x438
	// Line 1310, Address: 0x1eeb2c, Func Offset: 0x46c
	// Line 1311, Address: 0x1eeb44, Func Offset: 0x484
	// Line 1312, Address: 0x1eeb50, Func Offset: 0x490
	// Line 1313, Address: 0x1eeb5c, Func Offset: 0x49c
	// Line 1318, Address: 0x1eeb68, Func Offset: 0x4a8
	// Line 1321, Address: 0x1eeb74, Func Offset: 0x4b4
	// Line 1322, Address: 0x1eeb78, Func Offset: 0x4b8
	// Line 1323, Address: 0x1eeb7c, Func Offset: 0x4bc
	// Line 1324, Address: 0x1eeb80, Func Offset: 0x4c0
	// Line 1326, Address: 0x1eeb94, Func Offset: 0x4d4
	// Line 1325, Address: 0x1eeb98, Func Offset: 0x4d8
	// Line 1327, Address: 0x1eeb9c, Func Offset: 0x4dc
	// Line 1328, Address: 0x1eeba8, Func Offset: 0x4e8
	// Line 1329, Address: 0x1eebb0, Func Offset: 0x4f0
	// Line 1331, Address: 0x1eebb8, Func Offset: 0x4f8
	// Line 1332, Address: 0x1eebbc, Func Offset: 0x4fc
	// Line 1331, Address: 0x1eebc0, Func Offset: 0x500
	// Line 1332, Address: 0x1eebc4, Func Offset: 0x504
	// Line 1331, Address: 0x1eebc8, Func Offset: 0x508
	// Line 1332, Address: 0x1eebcc, Func Offset: 0x50c
	// Line 1335, Address: 0x1eebd0, Func Offset: 0x510
	// Line 1333, Address: 0x1eebd4, Func Offset: 0x514
	// Line 1335, Address: 0x1eebd8, Func Offset: 0x518
	// Line 1334, Address: 0x1eebdc, Func Offset: 0x51c
	// Line 1335, Address: 0x1eebe0, Func Offset: 0x520
	// Line 1337, Address: 0x1eebf4, Func Offset: 0x534
	// Func End, Address: 0x1eec20, Func Offset: 0x560
}

// 
// Start address: 0x1eec20
void EnemyBuzzControlToHold(sfObj* obj)
{
	EnemyBuzzWork* ew;
	float* pos;
	float rot[4];
	float tpos[4];
	float vec[4];
	float dt;
	// Line 1341, Address: 0x1eec20, Func Offset: 0
	// Line 1347, Address: 0x1eec38, Func Offset: 0x18
	// Line 1348, Address: 0x1eec44, Func Offset: 0x24
	// Line 1349, Address: 0x1eec50, Func Offset: 0x30
	// Line 1350, Address: 0x1eec5c, Func Offset: 0x3c
	// Line 1351, Address: 0x1eec68, Func Offset: 0x48
	// Line 1352, Address: 0x1eec70, Func Offset: 0x50
	// Line 1354, Address: 0x1eeca8, Func Offset: 0x88
	// Line 1355, Address: 0x1eecd0, Func Offset: 0xb0
	// Line 1356, Address: 0x1eecdc, Func Offset: 0xbc
	// Line 1357, Address: 0x1eece4, Func Offset: 0xc4
	// Line 1358, Address: 0x1eece8, Func Offset: 0xc8
	// Line 1359, Address: 0x1eecf8, Func Offset: 0xd8
	// Line 1360, Address: 0x1eed04, Func Offset: 0xe4
	// Line 1361, Address: 0x1eed2c, Func Offset: 0x10c
	// Line 1362, Address: 0x1eed48, Func Offset: 0x128
	// Line 1363, Address: 0x1eed54, Func Offset: 0x134
	// Line 1364, Address: 0x1eed60, Func Offset: 0x140
	// Line 1365, Address: 0x1eed6c, Func Offset: 0x14c
	// Line 1366, Address: 0x1eed70, Func Offset: 0x150
	// Line 1368, Address: 0x1eed7c, Func Offset: 0x15c
	// Line 1369, Address: 0x1eed80, Func Offset: 0x160
	// Line 1370, Address: 0x1eedac, Func Offset: 0x18c
	// Line 1371, Address: 0x1eedc8, Func Offset: 0x1a8
	// Line 1372, Address: 0x1eedec, Func Offset: 0x1cc
	// Line 1373, Address: 0x1eedf8, Func Offset: 0x1d8
	// Line 1374, Address: 0x1eee04, Func Offset: 0x1e4
	// Line 1375, Address: 0x1eee10, Func Offset: 0x1f0
	// Line 1377, Address: 0x1eee18, Func Offset: 0x1f8
	// Line 1379, Address: 0x1eee20, Func Offset: 0x200
	// Line 1380, Address: 0x1eee4c, Func Offset: 0x22c
	// Line 1381, Address: 0x1eee68, Func Offset: 0x248
	// Line 1382, Address: 0x1eee8c, Func Offset: 0x26c
	// Line 1383, Address: 0x1eee94, Func Offset: 0x274
	// Line 1384, Address: 0x1eeea0, Func Offset: 0x280
	// Line 1385, Address: 0x1eeec0, Func Offset: 0x2a0
	// Line 1386, Address: 0x1eeec8, Func Offset: 0x2a8
	// Line 1387, Address: 0x1eeeec, Func Offset: 0x2cc
	// Line 1388, Address: 0x1eeef4, Func Offset: 0x2d4
	// Line 1389, Address: 0x1eef00, Func Offset: 0x2e0
	// Line 1390, Address: 0x1eef24, Func Offset: 0x304
	// Line 1391, Address: 0x1eef34, Func Offset: 0x314
	// Line 1392, Address: 0x1eef40, Func Offset: 0x320
	// Line 1393, Address: 0x1eef48, Func Offset: 0x328
	// Line 1394, Address: 0x1eef50, Func Offset: 0x330
	// Line 1397, Address: 0x1eef5c, Func Offset: 0x33c
	// Line 1398, Address: 0x1eef64, Func Offset: 0x344
	// Line 1399, Address: 0x1eef68, Func Offset: 0x348
	// Line 1403, Address: 0x1eef80, Func Offset: 0x360
	// Line 1404, Address: 0x1eef94, Func Offset: 0x374
	// Line 1405, Address: 0x1eefc0, Func Offset: 0x3a0
	// Line 1407, Address: 0x1eefcc, Func Offset: 0x3ac
	// Line 1408, Address: 0x1eefd0, Func Offset: 0x3b0
	// Func End, Address: 0x1eefec, Func Offset: 0x3cc
}

// 
// Start address: 0x1eeff0
void EnemyBuzzControlCaution(sfObj* obj)
{
	EnemyBuzzWork* ew;
	EnemySenseData* es;
	float* pos;
	float* ppos;
	float* rot;
	float dir[4];
	float vec[4];
	float tpos[4];
	float dt;
	float d;
	float d2;
	// Line 1412, Address: 0x1eeff0, Func Offset: 0
	// Line 1419, Address: 0x1ef014, Func Offset: 0x24
	// Line 1421, Address: 0x1ef01c, Func Offset: 0x2c
	// Line 1422, Address: 0x1ef038, Func Offset: 0x48
	// Line 1423, Address: 0x1ef040, Func Offset: 0x50
	// Line 1425, Address: 0x1ef048, Func Offset: 0x58
	// Line 1426, Address: 0x1ef054, Func Offset: 0x64
	// Line 1427, Address: 0x1ef05c, Func Offset: 0x6c
	// Line 1428, Address: 0x1ef068, Func Offset: 0x78
	// Line 1429, Address: 0x1ef074, Func Offset: 0x84
	// Line 1430, Address: 0x1ef08c, Func Offset: 0x9c
	// Line 1431, Address: 0x1ef090, Func Offset: 0xa0
	// Line 1430, Address: 0x1ef094, Func Offset: 0xa4
	// Line 1431, Address: 0x1ef098, Func Offset: 0xa8
	// Line 1433, Address: 0x1ef0b8, Func Offset: 0xc8
	// Line 1434, Address: 0x1ef0c0, Func Offset: 0xd0
	// Line 1435, Address: 0x1ef0d0, Func Offset: 0xe0
	// Line 1436, Address: 0x1ef0d8, Func Offset: 0xe8
	// Line 1438, Address: 0x1ef0e0, Func Offset: 0xf0
	// Line 1439, Address: 0x1ef10c, Func Offset: 0x11c
	// Line 1440, Address: 0x1ef110, Func Offset: 0x120
	// Line 1442, Address: 0x1ef144, Func Offset: 0x154
	// Line 1443, Address: 0x1ef14c, Func Offset: 0x15c
	// Line 1445, Address: 0x1ef190, Func Offset: 0x1a0
	// Line 1446, Address: 0x1ef198, Func Offset: 0x1a8
	// Line 1449, Address: 0x1ef1a0, Func Offset: 0x1b0
	// Line 1450, Address: 0x1ef1b0, Func Offset: 0x1c0
	// Line 1451, Address: 0x1ef1bc, Func Offset: 0x1cc
	// Line 1452, Address: 0x1ef1c8, Func Offset: 0x1d8
	// Line 1453, Address: 0x1ef1d4, Func Offset: 0x1e4
	// Line 1456, Address: 0x1ef1dc, Func Offset: 0x1ec
	// Line 1457, Address: 0x1ef1e0, Func Offset: 0x1f0
	// Line 1458, Address: 0x1ef210, Func Offset: 0x220
	// Line 1460, Address: 0x1ef22c, Func Offset: 0x23c
	// Line 1459, Address: 0x1ef238, Func Offset: 0x248
	// Line 1460, Address: 0x1ef23c, Func Offset: 0x24c
	// Line 1459, Address: 0x1ef258, Func Offset: 0x268
	// Line 1460, Address: 0x1ef25c, Func Offset: 0x26c
	// Line 1463, Address: 0x1ef27c, Func Offset: 0x28c
	// Line 1464, Address: 0x1ef288, Func Offset: 0x298
	// Line 1463, Address: 0x1ef28c, Func Offset: 0x29c
	// Line 1464, Address: 0x1ef290, Func Offset: 0x2a0
	// Line 1465, Address: 0x1ef29c, Func Offset: 0x2ac
	// Line 1466, Address: 0x1ef2a0, Func Offset: 0x2b0
	// Line 1467, Address: 0x1ef2a4, Func Offset: 0x2b4
	// Line 1468, Address: 0x1ef2a8, Func Offset: 0x2b8
	// Line 1469, Address: 0x1ef2b4, Func Offset: 0x2c4
	// Line 1470, Address: 0x1ef2c8, Func Offset: 0x2d8
	// Line 1471, Address: 0x1ef2e0, Func Offset: 0x2f0
	// Line 1472, Address: 0x1ef2e8, Func Offset: 0x2f8
	// Line 1473, Address: 0x1ef2f4, Func Offset: 0x304
	// Line 1474, Address: 0x1ef308, Func Offset: 0x318
	// Line 1473, Address: 0x1ef30c, Func Offset: 0x31c
	// Line 1474, Address: 0x1ef31c, Func Offset: 0x32c
	// Line 1476, Address: 0x1ef324, Func Offset: 0x334
	// Line 1477, Address: 0x1ef330, Func Offset: 0x340
	// Line 1478, Address: 0x1ef348, Func Offset: 0x358
	// Line 1479, Address: 0x1ef350, Func Offset: 0x360
	// Line 1480, Address: 0x1ef35c, Func Offset: 0x36c
	// Line 1481, Address: 0x1ef364, Func Offset: 0x374
	// Line 1482, Address: 0x1ef368, Func Offset: 0x378
	// Line 1483, Address: 0x1ef384, Func Offset: 0x394
	// Line 1484, Address: 0x1ef398, Func Offset: 0x3a8
	// Line 1485, Address: 0x1ef3a0, Func Offset: 0x3b0
	// Line 1486, Address: 0x1ef3a8, Func Offset: 0x3b8
	// Line 1491, Address: 0x1ef3b4, Func Offset: 0x3c4
	// Line 1493, Address: 0x1ef3b8, Func Offset: 0x3c8
	// Line 1494, Address: 0x1ef3bc, Func Offset: 0x3cc
	// Line 1495, Address: 0x1ef3c0, Func Offset: 0x3d0
	// Line 1496, Address: 0x1ef3c4, Func Offset: 0x3d4
	// Line 1498, Address: 0x1ef3d4, Func Offset: 0x3e4
	// Line 1497, Address: 0x1ef3d8, Func Offset: 0x3e8
	// Line 1499, Address: 0x1ef3dc, Func Offset: 0x3ec
	// Line 1500, Address: 0x1ef3e8, Func Offset: 0x3f8
	// Line 1501, Address: 0x1ef3f0, Func Offset: 0x400
	// Line 1503, Address: 0x1ef3f8, Func Offset: 0x408
	// Line 1504, Address: 0x1ef400, Func Offset: 0x410
	// Line 1503, Address: 0x1ef408, Func Offset: 0x418
	// Line 1505, Address: 0x1ef40c, Func Offset: 0x41c
	// Line 1504, Address: 0x1ef410, Func Offset: 0x420
	// Line 1505, Address: 0x1ef414, Func Offset: 0x424
	// Line 1507, Address: 0x1ef418, Func Offset: 0x428
	// Line 1506, Address: 0x1ef41c, Func Offset: 0x42c
	// Line 1507, Address: 0x1ef420, Func Offset: 0x430
	// Line 1509, Address: 0x1ef438, Func Offset: 0x448
	// Func End, Address: 0x1ef460, Func Offset: 0x470
}

// 
// Start address: 0x1ef460
void EnemyBuzzControlRound(sfObj* obj)
{
	EnemyBuzzWork* ew;
	EnemySenseData* es;
	float* pos;
	float* ppos;
	float* rot;
	float* prot;
	float vec[4];
	float tpos[4];
	float dt;
	float rotr;
	float protr;
	float r;
	float d;
	// Line 1513, Address: 0x1ef460, Func Offset: 0
	// Line 1520, Address: 0x1ef490, Func Offset: 0x30
	// Line 1522, Address: 0x1ef498, Func Offset: 0x38
	// Line 1523, Address: 0x1ef4b4, Func Offset: 0x54
	// Line 1524, Address: 0x1ef4bc, Func Offset: 0x5c
	// Line 1525, Address: 0x1ef4c4, Func Offset: 0x64
	// Line 1526, Address: 0x1ef4c8, Func Offset: 0x68
	// Line 1527, Address: 0x1ef4d4, Func Offset: 0x74
	// Line 1528, Address: 0x1ef4dc, Func Offset: 0x7c
	// Line 1529, Address: 0x1ef4e8, Func Offset: 0x88
	// Line 1530, Address: 0x1ef4f4, Func Offset: 0x94
	// Line 1532, Address: 0x1ef500, Func Offset: 0xa0
	// Line 1533, Address: 0x1ef508, Func Offset: 0xa8
	// Line 1534, Address: 0x1ef518, Func Offset: 0xb8
	// Line 1535, Address: 0x1ef520, Func Offset: 0xc0
	// Line 1537, Address: 0x1ef528, Func Offset: 0xc8
	// Line 1538, Address: 0x1ef554, Func Offset: 0xf4
	// Line 1539, Address: 0x1ef558, Func Offset: 0xf8
	// Line 1540, Address: 0x1ef568, Func Offset: 0x108
	// Line 1541, Address: 0x1ef574, Func Offset: 0x114
	// Line 1542, Address: 0x1ef580, Func Offset: 0x120
	// Line 1543, Address: 0x1ef58c, Func Offset: 0x12c
	// Line 1544, Address: 0x1ef598, Func Offset: 0x138
	// Line 1543, Address: 0x1ef59c, Func Offset: 0x13c
	// Line 1544, Address: 0x1ef5ac, Func Offset: 0x14c
	// Line 1547, Address: 0x1ef5b4, Func Offset: 0x154
	// Line 1548, Address: 0x1ef5b8, Func Offset: 0x158
	// Line 1549, Address: 0x1ef5d0, Func Offset: 0x170
	// Line 1550, Address: 0x1ef5d8, Func Offset: 0x178
	// Line 1551, Address: 0x1ef5e4, Func Offset: 0x184
	// Line 1553, Address: 0x1ef5fc, Func Offset: 0x19c
	// Line 1551, Address: 0x1ef600, Func Offset: 0x1a0
	// Line 1553, Address: 0x1ef604, Func Offset: 0x1a4
	// Line 1552, Address: 0x1ef60c, Func Offset: 0x1ac
	// Line 1553, Address: 0x1ef610, Func Offset: 0x1b0
	// Line 1554, Address: 0x1ef61c, Func Offset: 0x1bc
	// Line 1555, Address: 0x1ef630, Func Offset: 0x1d0
	// Line 1556, Address: 0x1ef63c, Func Offset: 0x1dc
	// Line 1555, Address: 0x1ef640, Func Offset: 0x1e0
	// Line 1556, Address: 0x1ef64c, Func Offset: 0x1ec
	// Line 1557, Address: 0x1ef654, Func Offset: 0x1f4
	// Line 1558, Address: 0x1ef660, Func Offset: 0x200
	// Line 1559, Address: 0x1ef67c, Func Offset: 0x21c
	// Line 1560, Address: 0x1ef690, Func Offset: 0x230
	// Line 1561, Address: 0x1ef698, Func Offset: 0x238
	// Line 1562, Address: 0x1ef6a0, Func Offset: 0x240
	// Line 1563, Address: 0x1ef6ac, Func Offset: 0x24c
	// Line 1564, Address: 0x1ef6b0, Func Offset: 0x250
	// Line 1567, Address: 0x1ef6b8, Func Offset: 0x258
	// Line 1568, Address: 0x1ef6d4, Func Offset: 0x274
	// Line 1569, Address: 0x1ef6f8, Func Offset: 0x298
	// Line 1570, Address: 0x1ef6fc, Func Offset: 0x29c
	// Line 1571, Address: 0x1ef700, Func Offset: 0x2a0
	// Line 1573, Address: 0x1ef730, Func Offset: 0x2d0
	// Line 1574, Address: 0x1ef74c, Func Offset: 0x2ec
	// Line 1575, Address: 0x1ef754, Func Offset: 0x2f4
	// Line 1576, Address: 0x1ef760, Func Offset: 0x300
	// Line 1577, Address: 0x1ef76c, Func Offset: 0x30c
	// Line 1578, Address: 0x1ef770, Func Offset: 0x310
	// Line 1580, Address: 0x1ef778, Func Offset: 0x318
	// Line 1581, Address: 0x1ef784, Func Offset: 0x324
	// Line 1582, Address: 0x1ef7b0, Func Offset: 0x350
	// Line 1583, Address: 0x1ef7b8, Func Offset: 0x358
	// Line 1582, Address: 0x1ef7bc, Func Offset: 0x35c
	// Line 1583, Address: 0x1ef7c0, Func Offset: 0x360
	// Line 1582, Address: 0x1ef7c4, Func Offset: 0x364
	// Line 1583, Address: 0x1ef7c8, Func Offset: 0x368
	// Line 1584, Address: 0x1ef7dc, Func Offset: 0x37c
	// Line 1587, Address: 0x1ef824, Func Offset: 0x3c4
	// Line 1588, Address: 0x1ef830, Func Offset: 0x3d0
	// Line 1587, Address: 0x1ef834, Func Offset: 0x3d4
	// Line 1588, Address: 0x1ef838, Func Offset: 0x3d8
	// Line 1589, Address: 0x1ef844, Func Offset: 0x3e4
	// Line 1590, Address: 0x1ef848, Func Offset: 0x3e8
	// Line 1591, Address: 0x1ef84c, Func Offset: 0x3ec
	// Line 1592, Address: 0x1ef850, Func Offset: 0x3f0
	// Line 1594, Address: 0x1ef85c, Func Offset: 0x3fc
	// Line 1596, Address: 0x1ef860, Func Offset: 0x400
	// Line 1597, Address: 0x1ef864, Func Offset: 0x404
	// Line 1598, Address: 0x1ef868, Func Offset: 0x408
	// Line 1599, Address: 0x1ef86c, Func Offset: 0x40c
	// Line 1601, Address: 0x1ef87c, Func Offset: 0x41c
	// Line 1600, Address: 0x1ef880, Func Offset: 0x420
	// Line 1602, Address: 0x1ef884, Func Offset: 0x424
	// Line 1603, Address: 0x1ef890, Func Offset: 0x430
	// Line 1604, Address: 0x1ef898, Func Offset: 0x438
	// Line 1606, Address: 0x1ef8a0, Func Offset: 0x440
	// Line 1607, Address: 0x1ef8a8, Func Offset: 0x448
	// Line 1606, Address: 0x1ef8b0, Func Offset: 0x450
	// Line 1608, Address: 0x1ef8b4, Func Offset: 0x454
	// Line 1607, Address: 0x1ef8b8, Func Offset: 0x458
	// Line 1608, Address: 0x1ef8bc, Func Offset: 0x45c
	// Line 1610, Address: 0x1ef8c0, Func Offset: 0x460
	// Line 1609, Address: 0x1ef8c4, Func Offset: 0x464
	// Line 1610, Address: 0x1ef8c8, Func Offset: 0x468
	// Line 1612, Address: 0x1ef8e0, Func Offset: 0x480
	// Func End, Address: 0x1ef914, Func Offset: 0x4b4
}

// 
// Start address: 0x1ef920
void EnemyBuzzControlDive(sfObj* obj)
{
	EnemyBuzzWork* ew;
	EnemySenseData* es;
	float* pos;
	float* ppos;
	float dt;
	// Line 1616, Address: 0x1ef920, Func Offset: 0
	// Line 1621, Address: 0x1ef93c, Func Offset: 0x1c
	// Line 1623, Address: 0x1ef944, Func Offset: 0x24
	// Line 1624, Address: 0x1ef960, Func Offset: 0x40
	// Line 1625, Address: 0x1ef968, Func Offset: 0x48
	// Line 1627, Address: 0x1ef970, Func Offset: 0x50
	// Line 1628, Address: 0x1ef978, Func Offset: 0x58
	// Line 1629, Address: 0x1ef984, Func Offset: 0x64
	// Line 1631, Address: 0x1ef990, Func Offset: 0x70
	// Line 1632, Address: 0x1ef998, Func Offset: 0x78
	// Line 1633, Address: 0x1ef9ac, Func Offset: 0x8c
	// Line 1634, Address: 0x1ef9b4, Func Offset: 0x94
	// Line 1635, Address: 0x1ef9bc, Func Offset: 0x9c
	// Line 1636, Address: 0x1ef9c0, Func Offset: 0xa0
	// Line 1637, Address: 0x1ef9e4, Func Offset: 0xc4
	// Line 1638, Address: 0x1ef9e8, Func Offset: 0xc8
	// Line 1639, Address: 0x1ef9f8, Func Offset: 0xd8
	// Line 1640, Address: 0x1efa04, Func Offset: 0xe4
	// Line 1641, Address: 0x1efa10, Func Offset: 0xf0
	// Line 1642, Address: 0x1efa1c, Func Offset: 0xfc
	// Line 1643, Address: 0x1efa20, Func Offset: 0x100
	// Line 1645, Address: 0x1efa2c, Func Offset: 0x10c
	// Line 1646, Address: 0x1efa30, Func Offset: 0x110
	// Line 1647, Address: 0x1efa4c, Func Offset: 0x12c
	// Line 1648, Address: 0x1efa58, Func Offset: 0x138
	// Line 1649, Address: 0x1efa64, Func Offset: 0x144
	// Line 1650, Address: 0x1efa6c, Func Offset: 0x14c
	// Line 1651, Address: 0x1efa70, Func Offset: 0x150
	// Line 1653, Address: 0x1efa78, Func Offset: 0x158
	// Line 1652, Address: 0x1efa7c, Func Offset: 0x15c
	// Line 1653, Address: 0x1efa88, Func Offset: 0x168
	// Line 1652, Address: 0x1efa90, Func Offset: 0x170
	// Line 1653, Address: 0x1efa94, Func Offset: 0x174
	// Line 1656, Address: 0x1efadc, Func Offset: 0x1bc
	// Line 1657, Address: 0x1efae0, Func Offset: 0x1c0
	// Line 1658, Address: 0x1efae4, Func Offset: 0x1c4
	// Line 1659, Address: 0x1efaec, Func Offset: 0x1cc
	// Line 1660, Address: 0x1efaf0, Func Offset: 0x1d0
	// Line 1661, Address: 0x1efb04, Func Offset: 0x1e4
	// Line 1663, Address: 0x1efb0c, Func Offset: 0x1ec
	// Line 1664, Address: 0x1efb1c, Func Offset: 0x1fc
	// Line 1665, Address: 0x1efb24, Func Offset: 0x204
	// Line 1666, Address: 0x1efb28, Func Offset: 0x208
	// Line 1671, Address: 0x1efb40, Func Offset: 0x220
	// Line 1673, Address: 0x1efb5c, Func Offset: 0x23c
	// Line 1675, Address: 0x1efb60, Func Offset: 0x240
	// Line 1676, Address: 0x1efb70, Func Offset: 0x250
	// Line 1678, Address: 0x1efb84, Func Offset: 0x264
	// Line 1677, Address: 0x1efb88, Func Offset: 0x268
	// Line 1679, Address: 0x1efb8c, Func Offset: 0x26c
	// Line 1680, Address: 0x1efb98, Func Offset: 0x278
	// Line 1681, Address: 0x1efba0, Func Offset: 0x280
	// Line 1683, Address: 0x1efba8, Func Offset: 0x288
	// Line 1684, Address: 0x1efbb0, Func Offset: 0x290
	// Line 1683, Address: 0x1efbb8, Func Offset: 0x298
	// Line 1685, Address: 0x1efbbc, Func Offset: 0x29c
	// Line 1684, Address: 0x1efbc0, Func Offset: 0x2a0
	// Line 1685, Address: 0x1efbc4, Func Offset: 0x2a4
	// Line 1687, Address: 0x1efbc8, Func Offset: 0x2a8
	// Line 1686, Address: 0x1efbcc, Func Offset: 0x2ac
	// Line 1687, Address: 0x1efbd0, Func Offset: 0x2b0
	// Line 1689, Address: 0x1efbe8, Func Offset: 0x2c8
	// Func End, Address: 0x1efc08, Func Offset: 0x2e8
}

// 
// Start address: 0x1efc10
void release_bone(sfObj* obj)
{
	sgBone* bone;
	// Line 1693, Address: 0x1efc10, Func Offset: 0
	// Line 1695, Address: 0x1efc1c, Func Offset: 0xc
	// Line 1696, Address: 0x1efc24, Func Offset: 0x14
	// Line 1697, Address: 0x1efc30, Func Offset: 0x20
	// Line 1698, Address: 0x1efc3c, Func Offset: 0x2c
	// Line 1699, Address: 0x1efc48, Func Offset: 0x38
	// Func End, Address: 0x1efc58, Func Offset: 0x48
}

// 
// Start address: 0x1efc60
void EnemyBuzzControlSuckAttack(sfObj* obj)
{
	EnemyBuzzWork* ew;
	float* pos;
	float* ppos;
	float vec[4];
	float dt;
	sgBone* bone;
	sgBone* hbone;
	float rot[4];
	// Line 1703, Address: 0x1efc60, Func Offset: 0
	// Line 1708, Address: 0x1efc84, Func Offset: 0x24
	// Line 1709, Address: 0x1efc90, Func Offset: 0x30
	// Line 1710, Address: 0x1efc98, Func Offset: 0x38
	// Line 1711, Address: 0x1efca0, Func Offset: 0x40
	// Line 1713, Address: 0x1efcac, Func Offset: 0x4c
	// Line 1714, Address: 0x1efcb4, Func Offset: 0x54
	// Line 1715, Address: 0x1efcec, Func Offset: 0x8c
	// Line 1716, Address: 0x1efcf0, Func Offset: 0x90
	// Line 1717, Address: 0x1efcfc, Func Offset: 0x9c
	// Line 1718, Address: 0x1efd04, Func Offset: 0xa4
	// Line 1719, Address: 0x1efd0c, Func Offset: 0xac
	// Line 1720, Address: 0x1efd10, Func Offset: 0xb0
	// Line 1721, Address: 0x1efd20, Func Offset: 0xc0
	// Line 1722, Address: 0x1efd2c, Func Offset: 0xcc
	// Line 1723, Address: 0x1efd38, Func Offset: 0xd8
	// Line 1724, Address: 0x1efd44, Func Offset: 0xe4
	// Line 1725, Address: 0x1efd48, Func Offset: 0xe8
	// Line 1727, Address: 0x1efd54, Func Offset: 0xf4
	// Line 1729, Address: 0x1efd58, Func Offset: 0xf8
	// Line 1731, Address: 0x1efd90, Func Offset: 0x130
	// Line 1732, Address: 0x1efd9c, Func Offset: 0x13c
	// Line 1733, Address: 0x1efda4, Func Offset: 0x144
	// Line 1734, Address: 0x1efda8, Func Offset: 0x148
	// Line 1735, Address: 0x1efdb8, Func Offset: 0x158
	// Line 1736, Address: 0x1efdc0, Func Offset: 0x160
	// Line 1738, Address: 0x1efdc8, Func Offset: 0x168
	// Line 1740, Address: 0x1efdd0, Func Offset: 0x170
	// Line 1739, Address: 0x1efdd4, Func Offset: 0x174
	// Line 1740, Address: 0x1efde8, Func Offset: 0x188
	// Line 1745, Address: 0x1efe18, Func Offset: 0x1b8
	// Line 1746, Address: 0x1efe24, Func Offset: 0x1c4
	// Line 1747, Address: 0x1efe2c, Func Offset: 0x1cc
	// Line 1748, Address: 0x1efe38, Func Offset: 0x1d8
	// Line 1749, Address: 0x1efe44, Func Offset: 0x1e4
	// Line 1750, Address: 0x1efe50, Func Offset: 0x1f0
	// Line 1751, Address: 0x1efe58, Func Offset: 0x1f8
	// Line 1753, Address: 0x1efe74, Func Offset: 0x214
	// Line 1754, Address: 0x1efe80, Func Offset: 0x220
	// Line 1755, Address: 0x1efe8c, Func Offset: 0x22c
	// Line 1756, Address: 0x1efea4, Func Offset: 0x244
	// Line 1757, Address: 0x1efec0, Func Offset: 0x260
	// Line 1758, Address: 0x1efed0, Func Offset: 0x270
	// Line 1759, Address: 0x1efedc, Func Offset: 0x27c
	// Line 1760, Address: 0x1efef0, Func Offset: 0x290
	// Line 1761, Address: 0x1eff04, Func Offset: 0x2a4
	// Line 1762, Address: 0x1eff10, Func Offset: 0x2b0
	// Line 1763, Address: 0x1eff1c, Func Offset: 0x2bc
	// Line 1765, Address: 0x1eff28, Func Offset: 0x2c8
	// Line 1768, Address: 0x1eff60, Func Offset: 0x300
	// Line 1770, Address: 0x1eff78, Func Offset: 0x318
	// Line 1771, Address: 0x1eff7c, Func Offset: 0x31c
	// Line 1773, Address: 0x1eff88, Func Offset: 0x328
	// Line 1775, Address: 0x1eff90, Func Offset: 0x330
	// Line 1777, Address: 0x1effa4, Func Offset: 0x344
	// Line 1779, Address: 0x1effac, Func Offset: 0x34c
	// Line 1780, Address: 0x1effbc, Func Offset: 0x35c
	// Line 1781, Address: 0x1effc4, Func Offset: 0x364
	// Line 1782, Address: 0x1effc8, Func Offset: 0x368
	// Line 1784, Address: 0x1effd4, Func Offset: 0x374
	// Line 1787, Address: 0x1effe0, Func Offset: 0x380
	// Line 1788, Address: 0x1efff8, Func Offset: 0x398
	// Line 1789, Address: 0x1f0000, Func Offset: 0x3a0
	// Line 1790, Address: 0x1f0008, Func Offset: 0x3a8
	// Line 1791, Address: 0x1f001c, Func Offset: 0x3bc
	// Line 1792, Address: 0x1f0024, Func Offset: 0x3c4
	// Line 1793, Address: 0x1f0030, Func Offset: 0x3d0
	// Line 1796, Address: 0x1f0038, Func Offset: 0x3d8
	// Line 1798, Address: 0x1f0050, Func Offset: 0x3f0
	// Line 1802, Address: 0x1f0068, Func Offset: 0x408
	// Func End, Address: 0x1f0090, Func Offset: 0x430
}

// 
// Start address: 0x1f0090
void EnemyBuzzControlPeckAttack(sfObj* obj)
{
	EnemyBuzzWork* ew;
	float* pos;
	float* ppos;
	float dt;
	// Line 1806, Address: 0x1f0090, Func Offset: 0
	// Line 1810, Address: 0x1f00ac, Func Offset: 0x1c
	// Line 1811, Address: 0x1f00b8, Func Offset: 0x28
	// Line 1812, Address: 0x1f00c0, Func Offset: 0x30
	// Line 1813, Address: 0x1f00cc, Func Offset: 0x3c
	// Line 1815, Address: 0x1f00d8, Func Offset: 0x48
	// Line 1816, Address: 0x1f00e0, Func Offset: 0x50
	// Line 1817, Address: 0x1f010c, Func Offset: 0x7c
	// Line 1818, Address: 0x1f0110, Func Offset: 0x80
	// Line 1819, Address: 0x1f0120, Func Offset: 0x90
	// Line 1820, Address: 0x1f012c, Func Offset: 0x9c
	// Line 1821, Address: 0x1f0138, Func Offset: 0xa8
	// Line 1822, Address: 0x1f0144, Func Offset: 0xb4
	// Line 1823, Address: 0x1f0148, Func Offset: 0xb8
	// Line 1825, Address: 0x1f0154, Func Offset: 0xc4
	// Line 1827, Address: 0x1f0158, Func Offset: 0xc8
	// Line 1829, Address: 0x1f0190, Func Offset: 0x100
	// Line 1830, Address: 0x1f019c, Func Offset: 0x10c
	// Line 1831, Address: 0x1f01a4, Func Offset: 0x114
	// Line 1832, Address: 0x1f01a8, Func Offset: 0x118
	// Line 1834, Address: 0x1f01b0, Func Offset: 0x120
	// Line 1833, Address: 0x1f01b4, Func Offset: 0x124
	// Line 1834, Address: 0x1f01c8, Func Offset: 0x138
	// Line 1835, Address: 0x1f01d8, Func Offset: 0x148
	// Line 1836, Address: 0x1f01e0, Func Offset: 0x150
	// Line 1837, Address: 0x1f01ec, Func Offset: 0x15c
	// Line 1839, Address: 0x1f01f4, Func Offset: 0x164
	// Line 1840, Address: 0x1f01fc, Func Offset: 0x16c
	// Line 1841, Address: 0x1f0200, Func Offset: 0x170
	// Line 1844, Address: 0x1f0208, Func Offset: 0x178
	// Line 1842, Address: 0x1f020c, Func Offset: 0x17c
	// Line 1844, Address: 0x1f0220, Func Offset: 0x190
	// Line 1845, Address: 0x1f0234, Func Offset: 0x1a4
	// Line 1847, Address: 0x1f0274, Func Offset: 0x1e4
	// Line 1848, Address: 0x1f0278, Func Offset: 0x1e8
	// Line 1849, Address: 0x1f027c, Func Offset: 0x1ec
	// Line 1850, Address: 0x1f0284, Func Offset: 0x1f4
	// Line 1851, Address: 0x1f0288, Func Offset: 0x1f8
	// Line 1852, Address: 0x1f029c, Func Offset: 0x20c
	// Line 1854, Address: 0x1f02a4, Func Offset: 0x214
	// Line 1855, Address: 0x1f02b4, Func Offset: 0x224
	// Line 1856, Address: 0x1f02bc, Func Offset: 0x22c
	// Line 1857, Address: 0x1f02c0, Func Offset: 0x230
	// Line 1861, Address: 0x1f02d8, Func Offset: 0x248
	// Line 1862, Address: 0x1f02e8, Func Offset: 0x258
	// Line 1864, Address: 0x1f02f0, Func Offset: 0x260
	// Line 1868, Address: 0x1f0300, Func Offset: 0x270
	// Func End, Address: 0x1f0320, Func Offset: 0x290
}

// 
// Start address: 0x1f0320
void EnemyBuzzControlEscape(sfObj* obj)
{
	EnemyBuzzWork* ew;
	float* pos;
	float* rot;
	float tpos[4];
	float vec[4];
	float trot[4];
	float dt;
	int lr;
	// Line 1872, Address: 0x1f0320, Func Offset: 0
	// Line 1880, Address: 0x1f033c, Func Offset: 0x1c
	// Line 1881, Address: 0x1f0348, Func Offset: 0x28
	// Line 1882, Address: 0x1f0354, Func Offset: 0x34
	// Line 1883, Address: 0x1f035c, Func Offset: 0x3c
	// Line 1885, Address: 0x1f0368, Func Offset: 0x48
	// Line 1886, Address: 0x1f0370, Func Offset: 0x50
	// Line 1887, Address: 0x1f0380, Func Offset: 0x60
	// Line 1888, Address: 0x1f0388, Func Offset: 0x68
	// Line 1890, Address: 0x1f0390, Func Offset: 0x70
	// Line 1891, Address: 0x1f03bc, Func Offset: 0x9c
	// Line 1892, Address: 0x1f03c0, Func Offset: 0xa0
	// Line 1893, Address: 0x1f03c8, Func Offset: 0xa8
	// Line 1894, Address: 0x1f03d0, Func Offset: 0xb0
	// Line 1895, Address: 0x1f03e0, Func Offset: 0xc0
	// Line 1896, Address: 0x1f03ec, Func Offset: 0xcc
	// Line 1897, Address: 0x1f03f8, Func Offset: 0xd8
	// Line 1898, Address: 0x1f0404, Func Offset: 0xe4
	// Line 1899, Address: 0x1f0414, Func Offset: 0xf4
	// Line 1900, Address: 0x1f0420, Func Offset: 0x100
	// Line 1899, Address: 0x1f0424, Func Offset: 0x104
	// Line 1900, Address: 0x1f0434, Func Offset: 0x114
	// Line 1902, Address: 0x1f043c, Func Offset: 0x11c
	// Line 1903, Address: 0x1f0440, Func Offset: 0x120
	// Line 1904, Address: 0x1f0450, Func Offset: 0x130
	// Line 1905, Address: 0x1f047c, Func Offset: 0x15c
	// Line 1906, Address: 0x1f0498, Func Offset: 0x178
	// Line 1907, Address: 0x1f04b0, Func Offset: 0x190
	// Line 1909, Address: 0x1f04c4, Func Offset: 0x1a4
	// Line 1910, Address: 0x1f04cc, Func Offset: 0x1ac
	// Line 1911, Address: 0x1f04dc, Func Offset: 0x1bc
	// Line 1912, Address: 0x1f04e8, Func Offset: 0x1c8
	// Line 1913, Address: 0x1f04fc, Func Offset: 0x1dc
	// Line 1914, Address: 0x1f0500, Func Offset: 0x1e0
	// Line 1916, Address: 0x1f0518, Func Offset: 0x1f8
	// Line 1917, Address: 0x1f0524, Func Offset: 0x204
	// Line 1918, Address: 0x1f0530, Func Offset: 0x210
	// Line 1920, Address: 0x1f0538, Func Offset: 0x218
	// Line 1922, Address: 0x1f0540, Func Offset: 0x220
	// Line 1923, Address: 0x1f0568, Func Offset: 0x248
	// Line 1927, Address: 0x1f0570, Func Offset: 0x250
	// Line 1928, Address: 0x1f058c, Func Offset: 0x26c
	// Line 1930, Address: 0x1f0598, Func Offset: 0x278
	// Func End, Address: 0x1f05b8, Func Offset: 0x298
}

// 
// Start address: 0x1f05c0
void EnemyBuzzControlGather(sfObj* obj)
{
	EnemyBuzzWork* ew;
	EnemySenseData* es;
	float* pos;
	float dt;
	int id;
	// Line 1934, Address: 0x1f05c0, Func Offset: 0
	// Line 1939, Address: 0x1f05dc, Func Offset: 0x1c
	// Line 1940, Address: 0x1f05e8, Func Offset: 0x28
	// Line 1941, Address: 0x1f05f0, Func Offset: 0x30
	// Line 1943, Address: 0x1f05f8, Func Offset: 0x38
	// Line 1944, Address: 0x1f0614, Func Offset: 0x54
	// Line 1945, Address: 0x1f061c, Func Offset: 0x5c
	// Line 1946, Address: 0x1f0624, Func Offset: 0x64
	// Line 1947, Address: 0x1f0628, Func Offset: 0x68
	// Line 1948, Address: 0x1f0630, Func Offset: 0x70
	// Line 1952, Address: 0x1f0668, Func Offset: 0xa8
	// Line 1953, Address: 0x1f0670, Func Offset: 0xb0
	// Line 1954, Address: 0x1f0678, Func Offset: 0xb8
	// Line 1955, Address: 0x1f0680, Func Offset: 0xc0
	// Line 1957, Address: 0x1f0688, Func Offset: 0xc8
	// Line 1959, Address: 0x1f0694, Func Offset: 0xd4
	// Line 1960, Address: 0x1f06a0, Func Offset: 0xe0
	// Line 1961, Address: 0x1f06ac, Func Offset: 0xec
	// Line 1962, Address: 0x1f06b8, Func Offset: 0xf8
	// Line 1963, Address: 0x1f06cc, Func Offset: 0x10c
	// Line 1962, Address: 0x1f06d0, Func Offset: 0x110
	// Line 1963, Address: 0x1f06e0, Func Offset: 0x120
	// Line 1964, Address: 0x1f06e8, Func Offset: 0x128
	// Line 1966, Address: 0x1f06f0, Func Offset: 0x130
	// Line 1968, Address: 0x1f0714, Func Offset: 0x154
	// Line 1969, Address: 0x1f071c, Func Offset: 0x15c
	// Line 1971, Address: 0x1f0724, Func Offset: 0x164
	// Line 1972, Address: 0x1f0728, Func Offset: 0x168
	// Line 1973, Address: 0x1f0744, Func Offset: 0x184
	// Line 1974, Address: 0x1f0750, Func Offset: 0x190
	// Line 1973, Address: 0x1f0754, Func Offset: 0x194
	// Line 1974, Address: 0x1f0758, Func Offset: 0x198
	// Line 1973, Address: 0x1f075c, Func Offset: 0x19c
	// Line 1974, Address: 0x1f0760, Func Offset: 0x1a0
	// Line 1975, Address: 0x1f0768, Func Offset: 0x1a8
	// Line 1976, Address: 0x1f0774, Func Offset: 0x1b4
	// Line 1977, Address: 0x1f0778, Func Offset: 0x1b8
	// Line 1979, Address: 0x1f0784, Func Offset: 0x1c4
	// Line 1980, Address: 0x1f078c, Func Offset: 0x1cc
	// Line 1981, Address: 0x1f0790, Func Offset: 0x1d0
	// Line 1982, Address: 0x1f07ac, Func Offset: 0x1ec
	// Line 1983, Address: 0x1f07b8, Func Offset: 0x1f8
	// Line 1988, Address: 0x1f07c0, Func Offset: 0x200
	// Line 1989, Address: 0x1f07d4, Func Offset: 0x214
	// Line 1991, Address: 0x1f0808, Func Offset: 0x248
	// Line 1994, Address: 0x1f0814, Func Offset: 0x254
	// Line 1996, Address: 0x1f0818, Func Offset: 0x258
	// Line 1997, Address: 0x1f0828, Func Offset: 0x268
	// Line 1999, Address: 0x1f083c, Func Offset: 0x27c
	// Line 1998, Address: 0x1f0840, Func Offset: 0x280
	// Line 2000, Address: 0x1f0844, Func Offset: 0x284
	// Line 2001, Address: 0x1f0850, Func Offset: 0x290
	// Line 2002, Address: 0x1f0858, Func Offset: 0x298
	// Line 2004, Address: 0x1f0860, Func Offset: 0x2a0
	// Line 2005, Address: 0x1f0864, Func Offset: 0x2a4
	// Line 2004, Address: 0x1f0868, Func Offset: 0x2a8
	// Line 2005, Address: 0x1f086c, Func Offset: 0x2ac
	// Line 2004, Address: 0x1f0870, Func Offset: 0x2b0
	// Line 2005, Address: 0x1f0874, Func Offset: 0x2b4
	// Line 2008, Address: 0x1f0878, Func Offset: 0x2b8
	// Line 2006, Address: 0x1f087c, Func Offset: 0x2bc
	// Line 2008, Address: 0x1f0880, Func Offset: 0x2c0
	// Line 2007, Address: 0x1f0884, Func Offset: 0x2c4
	// Line 2008, Address: 0x1f0888, Func Offset: 0x2c8
	// Line 2010, Address: 0x1f089c, Func Offset: 0x2dc
	// Func End, Address: 0x1f08c0, Func Offset: 0x300
}

// 
// Start address: 0x1f08c0
int check_floor(sfObj* obj)
{
	float* pos;
	float vec[4];
	// Line 2014, Address: 0x1f08c0, Func Offset: 0
	// Line 2015, Address: 0x1f08d0, Func Offset: 0x10
	// Line 2017, Address: 0x1f08d8, Func Offset: 0x18
	// Line 2018, Address: 0x1f0904, Func Offset: 0x44
	// Line 2020, Address: 0x1f096c, Func Offset: 0xac
	// Line 2021, Address: 0x1f0974, Func Offset: 0xb4
	// Line 2022, Address: 0x1f097c, Func Offset: 0xbc
	// Line 2023, Address: 0x1f0984, Func Offset: 0xc4
	// Line 2022, Address: 0x1f0988, Func Offset: 0xc8
	// Line 2023, Address: 0x1f0994, Func Offset: 0xd4
	// Line 2024, Address: 0x1f099c, Func Offset: 0xdc
	// Line 2026, Address: 0x1f09a4, Func Offset: 0xe4
	// Line 2027, Address: 0x1f09a8, Func Offset: 0xe8
	// Line 2028, Address: 0x1f09d4, Func Offset: 0x114
	// Line 2029, Address: 0x1f0a28, Func Offset: 0x168
	// Line 2031, Address: 0x1f0a30, Func Offset: 0x170
	// Line 2032, Address: 0x1f0a7c, Func Offset: 0x1bc
	// Line 2033, Address: 0x1f0a80, Func Offset: 0x1c0
	// Line 2034, Address: 0x1f0a84, Func Offset: 0x1c4
	// Line 2037, Address: 0x1f0a90, Func Offset: 0x1d0
	// Line 2038, Address: 0x1f0a98, Func Offset: 0x1d8
	// Func End, Address: 0x1f0aac, Func Offset: 0x1ec
}

// 
// Start address: 0x1f0ab0
void EnemyBuzzControlDamage(sfObj* obj)
{
	EnemyBuzzWork* ew;
	float* pos;
	float vec[4];
	float nom[4];
	float rot[4];
	float trot[4];
	EnemyMeasureResult mres;
	EnemyClHitResult* cres;
	float dt;
	float d;
	int rv;
	EnemyBattleDamage bd;
	_anon2* poly;
	// Line 2042, Address: 0x1f0ab0, Func Offset: 0
	// Line 2051, Address: 0x1f0acc, Func Offset: 0x1c
	// Line 2052, Address: 0x1f0ad8, Func Offset: 0x28
	// Line 2053, Address: 0x1f0ae4, Func Offset: 0x34
	// Line 2054, Address: 0x1f0af0, Func Offset: 0x40
	// Line 2055, Address: 0x1f0afc, Func Offset: 0x4c
	// Line 2056, Address: 0x1f0b3c, Func Offset: 0x8c
	// Line 2057, Address: 0x1f0b40, Func Offset: 0x90
	// Line 2058, Address: 0x1f0b48, Func Offset: 0x98
	// Line 2059, Address: 0x1f0b50, Func Offset: 0xa0
	// Line 2060, Address: 0x1f0b60, Func Offset: 0xb0
	// Line 2061, Address: 0x1f0b6c, Func Offset: 0xbc
	// Line 2063, Address: 0x1f0b78, Func Offset: 0xc8
	// Line 2064, Address: 0x1f0b84, Func Offset: 0xd4
	// Line 2068, Address: 0x1f0ba8, Func Offset: 0xf8
	// Line 2069, Address: 0x1f0bb4, Func Offset: 0x104
	// Line 2070, Address: 0x1f0bc4, Func Offset: 0x114
	// Line 2071, Address: 0x1f0bcc, Func Offset: 0x11c
	// Line 2072, Address: 0x1f0bd8, Func Offset: 0x128
	// Line 2073, Address: 0x1f0be4, Func Offset: 0x134
	// Line 2074, Address: 0x1f0be8, Func Offset: 0x138
	// Line 2075, Address: 0x1f0c1c, Func Offset: 0x16c
	// Line 2077, Address: 0x1f0c24, Func Offset: 0x174
	// Line 2076, Address: 0x1f0c2c, Func Offset: 0x17c
	// Line 2075, Address: 0x1f0c30, Func Offset: 0x180
	// Line 2076, Address: 0x1f0c3c, Func Offset: 0x18c
	// Line 2075, Address: 0x1f0c40, Func Offset: 0x190
	// Line 2076, Address: 0x1f0c50, Func Offset: 0x1a0
	// Line 2077, Address: 0x1f0c68, Func Offset: 0x1b8
	// Line 2078, Address: 0x1f0c70, Func Offset: 0x1c0
	// Line 2079, Address: 0x1f0c7c, Func Offset: 0x1cc
	// Line 2080, Address: 0x1f0c88, Func Offset: 0x1d8
	// Line 2082, Address: 0x1f0cc0, Func Offset: 0x210
	// Line 2083, Address: 0x1f0cc8, Func Offset: 0x218
	// Line 2084, Address: 0x1f0ccc, Func Offset: 0x21c
	// Line 2086, Address: 0x1f0cd0, Func Offset: 0x220
	// Line 2087, Address: 0x1f0cd8, Func Offset: 0x228
	// Line 2090, Address: 0x1f0ce0, Func Offset: 0x230
	// Line 2092, Address: 0x1f0d04, Func Offset: 0x254
	// Line 2093, Address: 0x1f0d0c, Func Offset: 0x25c
	// Line 2094, Address: 0x1f0d18, Func Offset: 0x268
	// Line 2096, Address: 0x1f0d24, Func Offset: 0x274
	// Line 2097, Address: 0x1f0d2c, Func Offset: 0x27c
	// Line 2098, Address: 0x1f0d30, Func Offset: 0x280
	// Line 2100, Address: 0x1f0d48, Func Offset: 0x298
	// Line 2101, Address: 0x1f0d5c, Func Offset: 0x2ac
	// Line 2103, Address: 0x1f0d68, Func Offset: 0x2b8
	// Line 2104, Address: 0x1f0d88, Func Offset: 0x2d8
	// Line 2105, Address: 0x1f0d94, Func Offset: 0x2e4
	// Line 2106, Address: 0x1f0d98, Func Offset: 0x2e8
	// Line 2107, Address: 0x1f0dbc, Func Offset: 0x30c
	// Line 2108, Address: 0x1f0dfc, Func Offset: 0x34c
	// Line 2109, Address: 0x1f0e2c, Func Offset: 0x37c
	// Line 2110, Address: 0x1f0e44, Func Offset: 0x394
	// Line 2111, Address: 0x1f0e50, Func Offset: 0x3a0
	// Line 2112, Address: 0x1f0e68, Func Offset: 0x3b8
	// Line 2113, Address: 0x1f0e70, Func Offset: 0x3c0
	// Line 2114, Address: 0x1f0e90, Func Offset: 0x3e0
	// Line 2115, Address: 0x1f0ea0, Func Offset: 0x3f0
	// Line 2116, Address: 0x1f0eb4, Func Offset: 0x404
	// Line 2117, Address: 0x1f0ec0, Func Offset: 0x410
	// Line 2118, Address: 0x1f0ec8, Func Offset: 0x418
	// Line 2119, Address: 0x1f0ed4, Func Offset: 0x424
	// Line 2121, Address: 0x1f0ee0, Func Offset: 0x430
	// Line 2123, Address: 0x1f0ee8, Func Offset: 0x438
	// Line 2124, Address: 0x1f0ef8, Func Offset: 0x448
	// Line 2125, Address: 0x1f0f04, Func Offset: 0x454
	// Line 2126, Address: 0x1f0f10, Func Offset: 0x460
	// Line 2127, Address: 0x1f0f28, Func Offset: 0x478
	// Line 2129, Address: 0x1f0f30, Func Offset: 0x480
	// Line 2130, Address: 0x1f0f4c, Func Offset: 0x49c
	// Line 2131, Address: 0x1f0f54, Func Offset: 0x4a4
	// Line 2132, Address: 0x1f0f64, Func Offset: 0x4b4
	// Line 2133, Address: 0x1f0f74, Func Offset: 0x4c4
	// Line 2134, Address: 0x1f0f80, Func Offset: 0x4d0
	// Line 2135, Address: 0x1f0f88, Func Offset: 0x4d8
	// Line 2136, Address: 0x1f0f90, Func Offset: 0x4e0
	// Line 2137, Address: 0x1f0f9c, Func Offset: 0x4ec
	// Line 2138, Address: 0x1f0fa8, Func Offset: 0x4f8
	// Line 2140, Address: 0x1f0fb4, Func Offset: 0x504
	// Line 2142, Address: 0x1f0fbc, Func Offset: 0x50c
	// Line 2143, Address: 0x1f0fc0, Func Offset: 0x510
	// Line 2144, Address: 0x1f0fd0, Func Offset: 0x520
	// Line 2146, Address: 0x1f0ff0, Func Offset: 0x540
	// Line 2147, Address: 0x1f0ffc, Func Offset: 0x54c
	// Line 2148, Address: 0x1f1008, Func Offset: 0x558
	// Line 2150, Address: 0x1f1014, Func Offset: 0x564
	// Line 2151, Address: 0x1f1020, Func Offset: 0x570
	// Line 2153, Address: 0x1f102c, Func Offset: 0x57c
	// Line 2156, Address: 0x1f1034, Func Offset: 0x584
	// Line 2157, Address: 0x1f1038, Func Offset: 0x588
	// Line 2160, Address: 0x1f1040, Func Offset: 0x590
	// Line 2161, Address: 0x1f1048, Func Offset: 0x598
	// Line 2163, Address: 0x1f1050, Func Offset: 0x5a0
	// Line 2164, Address: 0x1f107c, Func Offset: 0x5cc
	// Line 2165, Address: 0x1f1088, Func Offset: 0x5d8
	// Line 2166, Address: 0x1f1090, Func Offset: 0x5e0
	// Line 2167, Address: 0x1f1098, Func Offset: 0x5e8
	// Line 2172, Address: 0x1f10b0, Func Offset: 0x600
	// Line 2174, Address: 0x1f10cc, Func Offset: 0x61c
	// Func End, Address: 0x1f10f0, Func Offset: 0x640
}

// 
// Start address: 0x1f10f0
void EnemyBuzzControlDown(sfObj* obj)
{
	EnemyBuzzWork* ew;
	float dt;
	EnemyMeasureResult mres;
	// Line 2178, Address: 0x1f10f0, Func Offset: 0
	// Line 2181, Address: 0x1f1104, Func Offset: 0x14
	// Line 2182, Address: 0x1f110c, Func Offset: 0x1c
	// Line 2183, Address: 0x1f1118, Func Offset: 0x28
	// Line 2185, Address: 0x1f1148, Func Offset: 0x58
	// Line 2186, Address: 0x1f1158, Func Offset: 0x68
	// Line 2189, Address: 0x1f1164, Func Offset: 0x74
	// Line 2190, Address: 0x1f1178, Func Offset: 0x88
	// Line 2191, Address: 0x1f1180, Func Offset: 0x90
	// Line 2192, Address: 0x1f1188, Func Offset: 0x98
	// Line 2196, Address: 0x1f1198, Func Offset: 0xa8
	// Line 2197, Address: 0x1f11a8, Func Offset: 0xb8
	// Line 2198, Address: 0x1f11bc, Func Offset: 0xcc
	// Line 2197, Address: 0x1f11c0, Func Offset: 0xd0
	// Line 2198, Address: 0x1f11d0, Func Offset: 0xe0
	// Line 2200, Address: 0x1f11e8, Func Offset: 0xf8
	// Line 2201, Address: 0x1f11f0, Func Offset: 0x100
	// Line 2202, Address: 0x1f11fc, Func Offset: 0x10c
	// Line 2203, Address: 0x1f1200, Func Offset: 0x110
	// Line 2204, Address: 0x1f121c, Func Offset: 0x12c
	// Line 2205, Address: 0x1f122c, Func Offset: 0x13c
	// Line 2206, Address: 0x1f1238, Func Offset: 0x148
	// Line 2208, Address: 0x1f1248, Func Offset: 0x158
	// Line 2209, Address: 0x1f1250, Func Offset: 0x160
	// Line 2212, Address: 0x1f1258, Func Offset: 0x168
	// Line 2213, Address: 0x1f1288, Func Offset: 0x198
	// Line 2216, Address: 0x1f12d8, Func Offset: 0x1e8
	// Line 2217, Address: 0x1f12e4, Func Offset: 0x1f4
	// Line 2218, Address: 0x1f12ec, Func Offset: 0x1fc
	// Line 2219, Address: 0x1f12f0, Func Offset: 0x200
	// Line 2221, Address: 0x1f1320, Func Offset: 0x230
	// Line 2222, Address: 0x1f1330, Func Offset: 0x240
	// Line 2223, Address: 0x1f133c, Func Offset: 0x24c
	// Line 2224, Address: 0x1f1344, Func Offset: 0x254
	// Line 2225, Address: 0x1f1348, Func Offset: 0x258
	// Line 2226, Address: 0x1f135c, Func Offset: 0x26c
	// Line 2225, Address: 0x1f1360, Func Offset: 0x270
	// Line 2226, Address: 0x1f1370, Func Offset: 0x280
	// Line 2227, Address: 0x1f1384, Func Offset: 0x294
	// Line 2228, Address: 0x1f138c, Func Offset: 0x29c
	// Line 2229, Address: 0x1f1394, Func Offset: 0x2a4
	// Line 2230, Address: 0x1f13a0, Func Offset: 0x2b0
	// Line 2231, Address: 0x1f13b0, Func Offset: 0x2c0
	// Line 2236, Address: 0x1f13b8, Func Offset: 0x2c8
	// Line 2237, Address: 0x1f13cc, Func Offset: 0x2dc
	// Line 2238, Address: 0x1f13d0, Func Offset: 0x2e0
	// Line 2239, Address: 0x1f13e0, Func Offset: 0x2f0
	// Line 2246, Address: 0x1f13e8, Func Offset: 0x2f8
	// Line 2248, Address: 0x1f1404, Func Offset: 0x314
	// Func End, Address: 0x1f1420, Func Offset: 0x330
}

// 
// Start address: 0x1f1420
void EnemyBuzzControlDead()
{
	// Line 2254, Address: 0x1f1420, Func Offset: 0
	// Func End, Address: 0x1f1428, Func Offset: 0x8
}

// 
// Start address: 0x1f1430
void EnemyBuzzControlWait(sfObj* obj)
{
	EnemyBuzzWork* ew;
	float* pos;
	float vec[4];
	int f;
	float dt;
	// Line 2258, Address: 0x1f1430, Func Offset: 0
	// Line 2264, Address: 0x1f1444, Func Offset: 0x14
	// Line 2265, Address: 0x1f1450, Func Offset: 0x20
	// Line 2266, Address: 0x1f145c, Func Offset: 0x2c
	// Line 2268, Address: 0x1f1468, Func Offset: 0x38
	// Line 2266, Address: 0x1f146c, Func Offset: 0x3c
	// Line 2268, Address: 0x1f1470, Func Offset: 0x40
	// Line 2269, Address: 0x1f1478, Func Offset: 0x48
	// Line 2270, Address: 0x1f1480, Func Offset: 0x50
	// Line 2271, Address: 0x1f14ac, Func Offset: 0x7c
	// Line 2272, Address: 0x1f14b0, Func Offset: 0x80
	// Line 2273, Address: 0x1f14c0, Func Offset: 0x90
	// Line 2274, Address: 0x1f14d0, Func Offset: 0xa0
	// Line 2275, Address: 0x1f14dc, Func Offset: 0xac
	// Line 2276, Address: 0x1f14e8, Func Offset: 0xb8
	// Line 2277, Address: 0x1f14f4, Func Offset: 0xc4
	// Line 2278, Address: 0x1f1500, Func Offset: 0xd0
	// Line 2279, Address: 0x1f1508, Func Offset: 0xd8
	// Line 2280, Address: 0x1f1510, Func Offset: 0xe0
	// Line 2282, Address: 0x1f1518, Func Offset: 0xe8
	// Line 2285, Address: 0x1f153c, Func Offset: 0x10c
	// Line 2286, Address: 0x1f1550, Func Offset: 0x120
	// Line 2287, Address: 0x1f157c, Func Offset: 0x14c
	// Line 2288, Address: 0x1f1594, Func Offset: 0x164
	// Line 2289, Address: 0x1f15a0, Func Offset: 0x170
	// Line 2290, Address: 0x1f15ac, Func Offset: 0x17c
	// Line 2291, Address: 0x1f15b8, Func Offset: 0x188
	// Line 2292, Address: 0x1f15c0, Func Offset: 0x190
	// Line 2294, Address: 0x1f15c8, Func Offset: 0x198
	// Line 2296, Address: 0x1f15d0, Func Offset: 0x1a0
	// Line 2297, Address: 0x1f15e0, Func Offset: 0x1b0
	// Line 2298, Address: 0x1f15e8, Func Offset: 0x1b8
	// Line 2301, Address: 0x1f15f4, Func Offset: 0x1c4
	// Line 2302, Address: 0x1f15f8, Func Offset: 0x1c8
	// Func End, Address: 0x1f1610, Func Offset: 0x1e0
}

// 
// Start address: 0x1f1610
void EnemyBuzzGetWallNormal(sfObj* obj)
{
	EnemyBuzzWork* ew;
	float* pos;
	float d;
	// Line 2307, Address: 0x1f1610, Func Offset: 0
	// Line 2311, Address: 0x1f1624, Func Offset: 0x14
	// Line 2312, Address: 0x1f162c, Func Offset: 0x1c
	// Line 2314, Address: 0x1f163c, Func Offset: 0x2c
	// Line 2313, Address: 0x1f1640, Func Offset: 0x30
	// Line 2314, Address: 0x1f1644, Func Offset: 0x34
	// Line 2313, Address: 0x1f1648, Func Offset: 0x38
	// Line 2314, Address: 0x1f164c, Func Offset: 0x3c
	// Line 2315, Address: 0x1f1668, Func Offset: 0x58
	// Line 2316, Address: 0x1f1670, Func Offset: 0x60
	// Line 2315, Address: 0x1f1678, Func Offset: 0x68
	// Line 2316, Address: 0x1f167c, Func Offset: 0x6c
	// Line 2317, Address: 0x1f1698, Func Offset: 0x88
	// Func End, Address: 0x1f16b0, Func Offset: 0xa0
}

// 
// Start address: 0x1f16b0
int EnemyBuzzCheckHoldWall(sfObj* obj, float* target)
{
	EnemyBuzzWork* ew;
	EnemyClHitResult* cres;
	float* pos;
	float tpos[4];
	float nom[4];
	int r;
	// Line 2321, Address: 0x1f16b0, Func Offset: 0
	// Line 2326, Address: 0x1f16c8, Func Offset: 0x18
	// Line 2321, Address: 0x1f16cc, Func Offset: 0x1c
	// Line 2327, Address: 0x1f16d0, Func Offset: 0x20
	// Line 2328, Address: 0x1f16d8, Func Offset: 0x28
	// Line 2329, Address: 0x1f16e4, Func Offset: 0x34
	// Line 2330, Address: 0x1f16ec, Func Offset: 0x3c
	// Line 2329, Address: 0x1f16f4, Func Offset: 0x44
	// Line 2330, Address: 0x1f16f8, Func Offset: 0x48
	// Line 2331, Address: 0x1f1708, Func Offset: 0x58
	// Line 2332, Address: 0x1f1710, Func Offset: 0x60
	// Line 2333, Address: 0x1f171c, Func Offset: 0x6c
	// Line 2334, Address: 0x1f1744, Func Offset: 0x94
	// Line 2335, Address: 0x1f1750, Func Offset: 0xa0
	// Line 2336, Address: 0x1f175c, Func Offset: 0xac
	// Line 2339, Address: 0x1f1760, Func Offset: 0xb0
	// Line 2340, Address: 0x1f1768, Func Offset: 0xb8
	// Line 2341, Address: 0x1f176c, Func Offset: 0xbc
	// Func End, Address: 0x1f1788, Func Offset: 0xd8
}

// 
// Start address: 0x1f1790
void EnemyBuzzSetDie(sfObj* obj)
{
	EnemyBuzzWork* ew;
	float* pos;
	// Line 2345, Address: 0x1f1790, Func Offset: 0
	// Line 2348, Address: 0x1f17a4, Func Offset: 0x14
	// Line 2349, Address: 0x1f17b0, Func Offset: 0x20
	// Line 2350, Address: 0x1f17bc, Func Offset: 0x2c
	// Line 2352, Address: 0x1f17e0, Func Offset: 0x50
	// Line 2353, Address: 0x1f17ec, Func Offset: 0x5c
	// Line 2354, Address: 0x1f17fc, Func Offset: 0x6c
	// Line 2355, Address: 0x1f180c, Func Offset: 0x7c
	// Line 2356, Address: 0x1f181c, Func Offset: 0x8c
	// Line 2357, Address: 0x1f1820, Func Offset: 0x90
	// Line 2358, Address: 0x1f182c, Func Offset: 0x9c
	// Line 2359, Address: 0x1f183c, Func Offset: 0xac
	// Line 2360, Address: 0x1f1848, Func Offset: 0xb8
	// Line 2361, Address: 0x1f1850, Func Offset: 0xc0
	// Line 2363, Address: 0x1f1858, Func Offset: 0xc8
	// Line 2364, Address: 0x1f1864, Func Offset: 0xd4
	// Line 2365, Address: 0x1f186c, Func Offset: 0xdc
	// Line 2366, Address: 0x1f1870, Func Offset: 0xe0
	// Func End, Address: 0x1f1888, Func Offset: 0xf8
}

// 
// Start address: 0x1f1890
int EnemyBuzzCheckDamageInfo(sfObj* obj)
{
	// Line 2370, Address: 0x1f1890, Func Offset: 0
	// Line 2371, Address: 0x1f1898, Func Offset: 0x8
	// Line 2373, Address: 0x1f18b0, Func Offset: 0x20
	// Func End, Address: 0x1f18bc, Func Offset: 0x2c
}

// 
// Start address: 0x1f18c0
int EnemyBuzzCheckDeathBlood(sfObj* obj)
{
	// Line 2377, Address: 0x1f18c0, Func Offset: 0
	// Line 2378, Address: 0x1f18c8, Func Offset: 0x8
	// Line 2380, Address: 0x1f18e0, Func Offset: 0x20
	// Func End, Address: 0x1f18ec, Func Offset: 0x2c
}

// 
// Start address: 0x1f18f0
void EnemyBuzzSoundStart(sfObj* obj)
{
	// Line 2385, Address: 0x1f18f0, Func Offset: 0
	// Func End, Address: 0x1f18f8, Func Offset: 0x8
}

// 
// Start address: 0x1f1900
void EnemyBuzzSoundStop(sfObj* obj)
{
	// Line 2391, Address: 0x1f1900, Func Offset: 0
	// Func End, Address: 0x1f1908, Func Offset: 0x8
}

// 
// Start address: 0x1f1910
void EnemyBuzzSetEventDamageCheck(sfObj* obj)
{
	// Line 2397, Address: 0x1f1914, Func Offset: 0x4
	// Func End, Address: 0x1f1928, Func Offset: 0x18
}

// 
// Start address: 0x1f1930
void EnemyBuzzSetEventDamageCheckOnWall(sfObj* obj)
{
	EnemyBuzzWork* ew;
	// Line 2403, Address: 0x1f1930, Func Offset: 0
	// Line 2405, Address: 0x1f193c, Func Offset: 0xc
	// Line 2406, Address: 0x1f1944, Func Offset: 0x14
	// Line 2408, Address: 0x1f1978, Func Offset: 0x48
	// Line 2410, Address: 0x1f1990, Func Offset: 0x60
	// Line 2411, Address: 0x1f1998, Func Offset: 0x68
	// Line 2414, Address: 0x1f19b0, Func Offset: 0x80
	// Func End, Address: 0x1f19c0, Func Offset: 0x90
}

// 
// Start address: 0x1f19c0
void EnemyEDBuzzAdditionalDamage(void* obj)
{
	EnemyBuzzWork* ew;
	EnemyBattleDamage bd;
	float vec[4];
	// Line 2418, Address: 0x1f19c0, Func Offset: 0
	// Line 2422, Address: 0x1f19d4, Func Offset: 0x14
	// Line 2423, Address: 0x1f19e0, Func Offset: 0x20
	// Line 2424, Address: 0x1f19ec, Func Offset: 0x2c
	// Line 2425, Address: 0x1f19fc, Func Offset: 0x3c
	// Line 2426, Address: 0x1f1a08, Func Offset: 0x48
	// Line 2427, Address: 0x1f1a14, Func Offset: 0x54
	// Line 2428, Address: 0x1f1a20, Func Offset: 0x60
	// Line 2429, Address: 0x1f1a30, Func Offset: 0x70
	// Line 2430, Address: 0x1f1a44, Func Offset: 0x84
	// Line 2431, Address: 0x1f1a50, Func Offset: 0x90
	// Line 2433, Address: 0x1f1a5c, Func Offset: 0x9c
	// Line 2434, Address: 0x1f1a60, Func Offset: 0xa0
	// Line 2435, Address: 0x1f1a6c, Func Offset: 0xac
	// Line 2436, Address: 0x1f1aa0, Func Offset: 0xe0
	// Line 2437, Address: 0x1f1aa4, Func Offset: 0xe4
	// Line 2436, Address: 0x1f1ab0, Func Offset: 0xf0
	// Line 2437, Address: 0x1f1ab4, Func Offset: 0xf4
	// Line 2438, Address: 0x1f1ac8, Func Offset: 0x108
	// Line 2439, Address: 0x1f1adc, Func Offset: 0x11c
	// Line 2441, Address: 0x1f1b14, Func Offset: 0x154
	// Line 2442, Address: 0x1f1b20, Func Offset: 0x160
	// Line 2444, Address: 0x1f1b24, Func Offset: 0x164
	// Line 2445, Address: 0x1f1b28, Func Offset: 0x168
	// Func End, Address: 0x1f1b40, Func Offset: 0x180
}

// 
// Start address: 0x1f1b40
void EnemyEDBuzzAdditionalDamageDown(void* obj)
{
	EnemyBuzzWork* ew;
	EnemyBattleDamage bd;
	float vec[4];
	// Line 2449, Address: 0x1f1b40, Func Offset: 0
	// Line 2453, Address: 0x1f1b50, Func Offset: 0x10
	// Line 2454, Address: 0x1f1b58, Func Offset: 0x18
	// Line 2455, Address: 0x1f1b6c, Func Offset: 0x2c
	// Line 2454, Address: 0x1f1b70, Func Offset: 0x30
	// Line 2455, Address: 0x1f1b74, Func Offset: 0x34
	// Line 2454, Address: 0x1f1b78, Func Offset: 0x38
	// Line 2455, Address: 0x1f1b8c, Func Offset: 0x4c
	// Line 2456, Address: 0x1f1b94, Func Offset: 0x54
	// Line 2457, Address: 0x1f1ba4, Func Offset: 0x64
	// Line 2458, Address: 0x1f1bac, Func Offset: 0x6c
	// Line 2459, Address: 0x1f1bb8, Func Offset: 0x78
	// Line 2460, Address: 0x1f1bc4, Func Offset: 0x84
	// Line 2461, Address: 0x1f1bd0, Func Offset: 0x90
	// Line 2462, Address: 0x1f1c04, Func Offset: 0xc4
	// Line 2463, Address: 0x1f1c08, Func Offset: 0xc8
	// Line 2462, Address: 0x1f1c14, Func Offset: 0xd4
	// Line 2463, Address: 0x1f1c18, Func Offset: 0xd8
	// Line 2464, Address: 0x1f1c2c, Func Offset: 0xec
	// Line 2465, Address: 0x1f1c3c, Func Offset: 0xfc
	// Line 2466, Address: 0x1f1c50, Func Offset: 0x110
	// Line 2467, Address: 0x1f1c58, Func Offset: 0x118
	// Line 2469, Address: 0x1f1c64, Func Offset: 0x124
	// Line 2470, Address: 0x1f1c68, Func Offset: 0x128
	// Line 2471, Address: 0x1f1c84, Func Offset: 0x144
	// Line 2472, Address: 0x1f1c88, Func Offset: 0x148
	// Line 2473, Address: 0x1f1c94, Func Offset: 0x154
	// Line 2474, Address: 0x1f1c98, Func Offset: 0x158
	// Line 2475, Address: 0x1f1ca4, Func Offset: 0x164
	// Line 2476, Address: 0x1f1cb4, Func Offset: 0x174
	// Line 2479, Address: 0x1f1cc4, Func Offset: 0x184
	// Line 2480, Address: 0x1f1ce0, Func Offset: 0x1a0
	// Line 2481, Address: 0x1f1cf0, Func Offset: 0x1b0
	// Line 2482, Address: 0x1f1cfc, Func Offset: 0x1bc
	// Line 2483, Address: 0x1f1d00, Func Offset: 0x1c0
	// Line 2484, Address: 0x1f1d10, Func Offset: 0x1d0
	// Line 2485, Address: 0x1f1d1c, Func Offset: 0x1dc
	// Line 2486, Address: 0x1f1d28, Func Offset: 0x1e8
	// Line 2487, Address: 0x1f1d34, Func Offset: 0x1f4
	// Func End, Address: 0x1f1d4c, Func Offset: 0x20c
}

// 
// Start address: 0x1f1d50
void EnemyEDBuzzDamageOnWall(void* obj)
{
	EnemyBuzzWork* ew;
	EnemyBattleDamage bd;
	float vec[4];
	// Line 2491, Address: 0x1f1d50, Func Offset: 0
	// Line 2495, Address: 0x1f1d60, Func Offset: 0x10
	// Line 2496, Address: 0x1f1d68, Func Offset: 0x18
	// Line 2495, Address: 0x1f1d6c, Func Offset: 0x1c
	// Line 2496, Address: 0x1f1d70, Func Offset: 0x20
	// Line 2497, Address: 0x1f1d74, Func Offset: 0x24
	// Line 2498, Address: 0x1f1d80, Func Offset: 0x30
	// Line 2499, Address: 0x1f1d90, Func Offset: 0x40
	// Line 2500, Address: 0x1f1d98, Func Offset: 0x48
	// Line 2501, Address: 0x1f1da4, Func Offset: 0x54
	// Line 2502, Address: 0x1f1db0, Func Offset: 0x60
	// Line 2503, Address: 0x1f1db8, Func Offset: 0x68
	// Line 2504, Address: 0x1f1dec, Func Offset: 0x9c
	// Line 2505, Address: 0x1f1df0, Func Offset: 0xa0
	// Line 2504, Address: 0x1f1dfc, Func Offset: 0xac
	// Line 2505, Address: 0x1f1e00, Func Offset: 0xb0
	// Line 2506, Address: 0x1f1e14, Func Offset: 0xc4
	// Line 2508, Address: 0x1f1e20, Func Offset: 0xd0
	// Line 2509, Address: 0x1f1e2c, Func Offset: 0xdc
	// Line 2510, Address: 0x1f1e3c, Func Offset: 0xec
	// Line 2511, Address: 0x1f1e44, Func Offset: 0xf4
	// Func End, Address: 0x1f1e5c, Func Offset: 0x10c
}

// 
// Start address: 0x1f1e60
void EnemyEDBuzz2Damage(void* obj)
{
	// Line 2515, Address: 0x1f1e60, Func Offset: 0
	// Line 2516, Address: 0x1f1e6c, Func Offset: 0xc
	// Line 2517, Address: 0x1f1e7c, Func Offset: 0x1c
	// Line 2518, Address: 0x1f1e84, Func Offset: 0x24
	// Func End, Address: 0x1f1e98, Func Offset: 0x38
}

// 
// Start address: 0x1f1ea0
void EnemyEDBuzz2Normal(void* obj)
{
	// Line 2522, Address: 0x1f1ea0, Func Offset: 0
	// Line 2523, Address: 0x1f1eac, Func Offset: 0xc
	// Line 2524, Address: 0x1f1ebc, Func Offset: 0x1c
	// Line 2525, Address: 0x1f1ec4, Func Offset: 0x24
	// Func End, Address: 0x1f1ed8, Func Offset: 0x38
}

