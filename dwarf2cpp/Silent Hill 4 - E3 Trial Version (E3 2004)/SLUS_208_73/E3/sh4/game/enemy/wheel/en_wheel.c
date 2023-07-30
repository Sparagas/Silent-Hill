typedef struct EnemyWheelWork;
typedef struct EnemyBattleDamage;
typedef struct EnemyManageDataOne;
typedef struct sfObj;
typedef struct _anon0;
typedef enum EnemyWheelAnime : unsigned char;
typedef enum EnemySoundType : unsigned char;
typedef struct EnemyClHitResult;
typedef struct _anon1;
typedef enum BattleAttackKind : unsigned char;
typedef union _anon2;
typedef union _anon3;
typedef struct sgBone;
typedef struct EnemySoundTypeControl;
typedef struct _anon4;
typedef struct EnemySoundTypeControlData;
typedef struct EventFlag;
typedef enum EnemyManageEntryType : unsigned char;
typedef enum BattleDamageType : unsigned char;
typedef struct EnemyMeasureResult;

typedef void(*type_4)(void*, int);
typedef void(*type_5)(sfObj*);
typedef void(*type_7)(void*, int);
typedef int(*type_9)(void*);
typedef void(*type_12)(sfObj*);
typedef void(*type_17)(sfObj*);
typedef int(*type_28)(void*);

typedef float type_0[4];
typedef _anon2 type_1[4];
typedef int type_2[2];
typedef float type_3[4];
typedef void(*type_6)(sfObj*)[6];
typedef int type_8[4];
typedef _anon2 type_10[256];
typedef _anon1 type_11[4];
typedef _anon3 type_13[0];
typedef char type_14[22];
typedef int type_15[2];
typedef int type_16[0];
typedef float type_18[4];
typedef unsigned char type_19[320];
typedef short type_20[2];
typedef unsigned short type_21[2];
typedef char type_22[4];
typedef unsigned char type_23[4];
typedef float type_24[4][4];
typedef float type_25[1];
typedef float type_26[4][4];
typedef int type_27[1];
typedef int type_29[2];
typedef int type_30[4];

struct EnemyWheelWork
{
	float target[4];
	float wheel[4][4];
	float wheel_rot[4][4];
	float shock[4];
	float target_dir;
	int target_jc;
	int target_door;
	int anime_step;
	int jc_count;
	int on_attack;
	float timer;
	float turn_time_r;
	float turn_start_dir;
	EnemySoundTypeControl* sound_control;
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

struct _anon0
{
	_anon3 vertex[0];
};

enum EnemyWheelAnime : unsigned char
{
	EN_WHEEL_ANM_NT,
	EN_WHEEL_ANM_NT2,
	EN_WHEEL_ANM_NT3,
	EN_WHEEL_ANM_RIGHTTURN,
	EN_WHEEL_ANM_LEFTTURN
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

struct EnemyClHitResult
{
};

struct _anon1
{
	unsigned char next_offset;
	unsigned char flags;
	short id;
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

union _anon3
{
	float node[4];
	_anon1 data[4];
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

struct EnemySoundTypeControl
{
};

struct _anon4
{
	char door_num[22];
};

struct EnemySoundTypeControlData
{
	EnemySoundType sound_type;
	float fadein_speed;
	float fadeout_speed;
	int call_no[0];
};

struct EventFlag
{
	unsigned char flag[320];
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
	_anon0* poly;
};

float right_point[4];
float left_point[4];
int wheel_name1[4];
int wheel_name2[4];
float wheel_size[4];
EnemySoundTypeControlData wheel_sound;
float hitparts_localpos[4];
EventFlag event_flag;
float sg_vector_unit_x[4];
float sg_vector_unit_y[4];
void(*wheel_jump_table)(sfObj*)[6];
_anon4 hs32_roomdata;
void(*EnemyEDWheelHitPlayer)(void*, int);
int(*EnemyEDClCheckLastCollidePlayer)(void*);
float sg_vector_unit_z[4];
float en_vector_unit_y_minus[4];
void(*EnemyEDWheelAdditionalDamage)(void*, int);
int(*EnemyEDBattleDamageCheck)(void*);

void EnemyWheelConstruct(sfObj* obj);
void EnemyWheelHandle(sfObj* obj);
void EnemyWheelDraw();
void EnemyWheelDestruct(sfObj* obj);
void EnemyWheelDataPreserve(sfObj* obj);
void EnemyWheelDataExtract(sfObj* obj);
void EnemyWheelAnimeSet(sfObj* obj, EnemyWheelAnime anime);
void EnemyWheelRotateWheel(sfObj* obj);
void EnemyWheelControl(sfObj* obj);
void EnemyWheelControlInit(sfObj* obj);
int IsHs32();
int IsKeyRoom(int n);
int IsEileensRoom(int n);
int get_door_number();
int get_door_number_with_rail_check(sfObj* obj);
void change_anime(sfObj* obj);
void move_forward(sfObj* obj);
void EnemyWheelControlWander(sfObj* obj);
void EnemyWheelControlIntoDoor(sfObj* obj);
void EnemyWheelControlFromDoor(sfObj* obj);
void EnemyWheelControlDamage(sfObj* obj);
void EnemyWheelControlEvent(sfObj* obj);
void turn_main(sfObj* obj, float* base_pos);
void EnemyWheelControlAnimeRightTurn(sfObj* obj);
void EnemyWheelControlAnimeLeftTurn(sfObj* obj);
void EnemyWheelAnimeEnd(sfObj* obj);
int EnemyWheelCheckCharaHit(sfObj* obj);
void EnemyWheelSetEventDamageCheck(sfObj* obj);
void EnemyWheelSetAttack(sfObj* obj);
void EnemyWheelSoundStart(sfObj* obj);
void EnemyWheelSoundStop(sfObj* obj);
void EnemyEDWheelHitPlayer(void* obj);
void EnemyEDWheelAdditionalDamage(void* obj);

// 
// Start address: 0x23c900
void EnemyWheelConstruct(sfObj* obj)
{
	EnemyWheelWork* ew;
	EnemyManageEntryType etype;
	int type;
	sfObj* tobj;
	// Line 178, Address: 0x23c900, Func Offset: 0
	// Line 183, Address: 0x23c904, Func Offset: 0x4
	// Line 178, Address: 0x23c908, Func Offset: 0x8
	// Line 183, Address: 0x23c920, Func Offset: 0x20
	// Line 188, Address: 0x23c928, Func Offset: 0x28
	// Line 190, Address: 0x23c958, Func Offset: 0x58
	// Line 191, Address: 0x23c960, Func Offset: 0x60
	// Line 195, Address: 0x23c968, Func Offset: 0x68
	// Line 196, Address: 0x23c974, Func Offset: 0x74
	// Line 199, Address: 0x23c998, Func Offset: 0x98
	// Line 200, Address: 0x23c9a0, Func Offset: 0xa0
	// Line 203, Address: 0x23c9a8, Func Offset: 0xa8
	// Line 204, Address: 0x23c9b4, Func Offset: 0xb4
	// Line 205, Address: 0x23c9c4, Func Offset: 0xc4
	// Line 207, Address: 0x23c9d0, Func Offset: 0xd0
	// Line 208, Address: 0x23c9e0, Func Offset: 0xe0
	// Line 209, Address: 0x23c9e8, Func Offset: 0xe8
	// Line 211, Address: 0x23ca14, Func Offset: 0x114
	// Line 212, Address: 0x23ca24, Func Offset: 0x124
	// Line 214, Address: 0x23ca44, Func Offset: 0x144
	// Line 215, Address: 0x23ca54, Func Offset: 0x154
	// Line 217, Address: 0x23ca78, Func Offset: 0x178
	// Line 218, Address: 0x23ca80, Func Offset: 0x180
	// Line 219, Address: 0x23ca90, Func Offset: 0x190
	// Line 220, Address: 0x23ca98, Func Offset: 0x198
	// Line 221, Address: 0x23caa0, Func Offset: 0x1a0
	// Line 224, Address: 0x23caa8, Func Offset: 0x1a8
	// Line 225, Address: 0x23cabc, Func Offset: 0x1bc
	// Line 227, Address: 0x23cac4, Func Offset: 0x1c4
	// Line 228, Address: 0x23cad0, Func Offset: 0x1d0
	// Line 230, Address: 0x23cadc, Func Offset: 0x1dc
	// Line 231, Address: 0x23cae4, Func Offset: 0x1e4
	// Line 233, Address: 0x23cae8, Func Offset: 0x1e8
	// Line 235, Address: 0x23caf0, Func Offset: 0x1f0
	// Line 238, Address: 0x23cb18, Func Offset: 0x218
	// Line 239, Address: 0x23cb38, Func Offset: 0x238
	// Line 240, Address: 0x23cb44, Func Offset: 0x244
	// Line 241, Address: 0x23cb4c, Func Offset: 0x24c
	// Line 242, Address: 0x23cb54, Func Offset: 0x254
	// Line 243, Address: 0x23cb58, Func Offset: 0x258
	// Func End, Address: 0x23cb78, Func Offset: 0x278
}

// 
// Start address: 0x23cb80
void EnemyWheelHandle(sfObj* obj)
{
	// Line 247, Address: 0x23cb80, Func Offset: 0
	// Line 248, Address: 0x23cb8c, Func Offset: 0xc
	// Line 249, Address: 0x23cb94, Func Offset: 0x14
	// Line 250, Address: 0x23cb9c, Func Offset: 0x1c
	// Line 251, Address: 0x23cbc4, Func Offset: 0x44
	// Line 252, Address: 0x23cbcc, Func Offset: 0x4c
	// Line 253, Address: 0x23cbd0, Func Offset: 0x50
	// Line 254, Address: 0x23cbd8, Func Offset: 0x58
	// Line 255, Address: 0x23cbe8, Func Offset: 0x68
	// Line 257, Address: 0x23cbf8, Func Offset: 0x78
	// Line 259, Address: 0x23cc24, Func Offset: 0xa4
	// Line 260, Address: 0x23cc38, Func Offset: 0xb8
	// Line 261, Address: 0x23cc48, Func Offset: 0xc8
	// Line 264, Address: 0x23cc50, Func Offset: 0xd0
	// Line 265, Address: 0x23cc58, Func Offset: 0xd8
	// Line 267, Address: 0x23cc60, Func Offset: 0xe0
	// Line 268, Address: 0x23cc70, Func Offset: 0xf0
	// Line 269, Address: 0x23cc78, Func Offset: 0xf8
	// Line 270, Address: 0x23cc80, Func Offset: 0x100
	// Line 272, Address: 0x23cc88, Func Offset: 0x108
	// Func End, Address: 0x23cc98, Func Offset: 0x118
}

// 
// Start address: 0x23cca0
void EnemyWheelDraw()
{
	// Line 277, Address: 0x23cca0, Func Offset: 0
	// Func End, Address: 0x23cca8, Func Offset: 0x8
}

// 
// Start address: 0x23ccb0
void EnemyWheelDestruct(sfObj* obj)
{
	EnemyWheelWork* ew;
	// Line 281, Address: 0x23ccb0, Func Offset: 0
	// Line 283, Address: 0x23ccc0, Func Offset: 0x10
	// Line 285, Address: 0x23ccc8, Func Offset: 0x18
	// Line 286, Address: 0x23ccd4, Func Offset: 0x24
	// Line 287, Address: 0x23ccdc, Func Offset: 0x2c
	// Line 288, Address: 0x23cce4, Func Offset: 0x34
	// Line 289, Address: 0x23ccec, Func Offset: 0x3c
	// Line 290, Address: 0x23ccf4, Func Offset: 0x44
	// Line 291, Address: 0x23ccfc, Func Offset: 0x4c
	// Func End, Address: 0x23cd10, Func Offset: 0x60
}

// 
// Start address: 0x23cd10
void EnemyWheelDataPreserve(sfObj* obj)
{
	EnemyManageDataOne* pe;
	// Line 295, Address: 0x23cd10, Func Offset: 0
	// Line 297, Address: 0x23cd20, Func Offset: 0x10
	// Line 298, Address: 0x23cd38, Func Offset: 0x28
	// Line 301, Address: 0x23cd60, Func Offset: 0x50
	// Line 302, Address: 0x23cd6c, Func Offset: 0x5c
	// Line 303, Address: 0x23cd78, Func Offset: 0x68
	// Line 304, Address: 0x23cd84, Func Offset: 0x74
	// Func End, Address: 0x23cd9c, Func Offset: 0x8c
}

// 
// Start address: 0x23cda0
void EnemyWheelDataExtract(sfObj* obj)
{
	EnemyManageDataOne* pe;
	// Line 308, Address: 0x23cda0, Func Offset: 0
	// Line 310, Address: 0x23cdb0, Func Offset: 0x10
	// Line 311, Address: 0x23cdc4, Func Offset: 0x24
	// Line 312, Address: 0x23cdd0, Func Offset: 0x30
	// Line 313, Address: 0x23cddc, Func Offset: 0x3c
	// Line 316, Address: 0x23cde4, Func Offset: 0x44
	// Line 318, Address: 0x23cdf0, Func Offset: 0x50
	// Line 319, Address: 0x23ce0c, Func Offset: 0x6c
	// Line 320, Address: 0x23ce14, Func Offset: 0x74
	// Line 321, Address: 0x23ce20, Func Offset: 0x80
	// Line 322, Address: 0x23ce34, Func Offset: 0x94
	// Line 324, Address: 0x23ce3c, Func Offset: 0x9c
	// Line 325, Address: 0x23ce40, Func Offset: 0xa0
	// Func End, Address: 0x23ce54, Func Offset: 0xb4
}

// 
// Start address: 0x23ce60
void EnemyWheelAnimeSet(sfObj* obj, EnemyWheelAnime anime)
{
	EnemyWheelWork* ew;
	// Line 329, Address: 0x23ce60, Func Offset: 0
	// Line 331, Address: 0x23ce78, Func Offset: 0x18
	// Line 332, Address: 0x23ce84, Func Offset: 0x24
	// Line 333, Address: 0x23cea0, Func Offset: 0x40
	// Line 334, Address: 0x23cea8, Func Offset: 0x48
	// Line 335, Address: 0x23ceb0, Func Offset: 0x50
	// Line 336, Address: 0x23ceb8, Func Offset: 0x58
	// Line 338, Address: 0x23cec8, Func Offset: 0x68
	// Line 339, Address: 0x23ced0, Func Offset: 0x70
	// Line 340, Address: 0x23cedc, Func Offset: 0x7c
	// Line 341, Address: 0x23cee0, Func Offset: 0x80
	// Line 342, Address: 0x23cee4, Func Offset: 0x84
	// Func End, Address: 0x23cefc, Func Offset: 0x9c
}

// 
// Start address: 0x23cf00
void EnemyWheelRotateWheel(sfObj* obj)
{
	EnemyWheelWork* ew;
	sgBone* bone;
	float* pos;
	float vec[4];
	float trot[4];
	float rrot[4];
	float d;
	int i;
	int nomove;
	int* wheel_name;
	// Line 346, Address: 0x23cf00, Func Offset: 0
	// Line 355, Address: 0x23cf24, Func Offset: 0x24
	// Line 357, Address: 0x23cf30, Func Offset: 0x30
	// Line 360, Address: 0x23cf58, Func Offset: 0x58
	// Line 362, Address: 0x23cf60, Func Offset: 0x60
	// Line 364, Address: 0x23cf64, Func Offset: 0x64
	// Line 365, Address: 0x23cf68, Func Offset: 0x68
	// Line 367, Address: 0x23cf8c, Func Offset: 0x8c
	// Line 368, Address: 0x23cfb0, Func Offset: 0xb0
	// Line 369, Address: 0x23cfb8, Func Offset: 0xb8
	// Line 370, Address: 0x23cfd0, Func Offset: 0xd0
	// Line 371, Address: 0x23cfdc, Func Offset: 0xdc
	// Line 372, Address: 0x23cff0, Func Offset: 0xf0
	// Line 373, Address: 0x23d014, Func Offset: 0x114
	// Line 374, Address: 0x23d024, Func Offset: 0x124
	// Line 375, Address: 0x23d028, Func Offset: 0x128
	// Line 374, Address: 0x23d02c, Func Offset: 0x12c
	// Line 375, Address: 0x23d038, Func Offset: 0x138
	// Line 374, Address: 0x23d03c, Func Offset: 0x13c
	// Line 375, Address: 0x23d040, Func Offset: 0x140
	// Line 374, Address: 0x23d044, Func Offset: 0x144
	// Line 375, Address: 0x23d054, Func Offset: 0x154
	// Line 376, Address: 0x23d05c, Func Offset: 0x15c
	// Line 377, Address: 0x23d074, Func Offset: 0x174
	// Line 378, Address: 0x23d078, Func Offset: 0x178
	// Line 379, Address: 0x23d08c, Func Offset: 0x18c
	// Line 380, Address: 0x23d0a0, Func Offset: 0x1a0
	// Line 387, Address: 0x23d0b4, Func Offset: 0x1b4
	// Func End, Address: 0x23d0dc, Func Offset: 0x1dc
}

// 
// Start address: 0x23d0e0
void EnemyWheelControl(sfObj* obj)
{
	EnemyWheelWork* ew;
	int step;
	// Line 417, Address: 0x23d0e0, Func Offset: 0
	// Line 420, Address: 0x23d0f4, Func Offset: 0x14
	// Line 432, Address: 0x23d100, Func Offset: 0x20
	// Line 434, Address: 0x23d108, Func Offset: 0x28
	// Line 435, Address: 0x23d114, Func Offset: 0x34
	// Line 436, Address: 0x23d120, Func Offset: 0x40
	// Line 438, Address: 0x23d12c, Func Offset: 0x4c
	// Line 440, Address: 0x23d130, Func Offset: 0x50
	// Line 441, Address: 0x23d144, Func Offset: 0x64
	// Line 442, Address: 0x23d16c, Func Offset: 0x8c
	// Line 443, Address: 0x23d170, Func Offset: 0x90
	// Line 444, Address: 0x23d178, Func Offset: 0x98
	// Line 446, Address: 0x23d180, Func Offset: 0xa0
	// Line 449, Address: 0x23d188, Func Offset: 0xa8
	// Line 450, Address: 0x23d190, Func Offset: 0xb0
	// Line 452, Address: 0x23d198, Func Offset: 0xb8
	// Line 453, Address: 0x23d1b4, Func Offset: 0xd4
	// Line 455, Address: 0x23d1b8, Func Offset: 0xd8
	// Line 461, Address: 0x23d1e8, Func Offset: 0x108
	// Line 462, Address: 0x23d200, Func Offset: 0x120
	// Line 464, Address: 0x23d234, Func Offset: 0x154
	// Line 469, Address: 0x23d238, Func Offset: 0x158
	// Func End, Address: 0x23d250, Func Offset: 0x170
}

// 
// Start address: 0x23d250
void EnemyWheelControlInit(sfObj* obj)
{
	EnemyWheelWork* ew;
	sgBone* bone;
	int i;
	// Line 473, Address: 0x23d250, Func Offset: 0
	// Line 478, Address: 0x23d26c, Func Offset: 0x1c
	// Line 479, Address: 0x23d278, Func Offset: 0x28
	// Line 480, Address: 0x23d284, Func Offset: 0x34
	// Line 481, Address: 0x23d2a4, Func Offset: 0x54
	// Line 482, Address: 0x23d2a8, Func Offset: 0x58
	// Line 483, Address: 0x23d2b8, Func Offset: 0x68
	// Line 484, Address: 0x23d2c4, Func Offset: 0x74
	// Line 485, Address: 0x23d2d0, Func Offset: 0x80
	// Line 484, Address: 0x23d2d4, Func Offset: 0x84
	// Line 485, Address: 0x23d2d8, Func Offset: 0x88
	// Line 486, Address: 0x23d2e4, Func Offset: 0x94
	// Line 488, Address: 0x23d300, Func Offset: 0xb0
	// Line 489, Address: 0x23d308, Func Offset: 0xb8
	// Line 490, Address: 0x23d310, Func Offset: 0xc0
	// Line 491, Address: 0x23d31c, Func Offset: 0xcc
	// Line 492, Address: 0x23d320, Func Offset: 0xd0
	// Func End, Address: 0x23d340, Func Offset: 0xf0
}

// 
// Start address: 0x23d340
int IsHs32()
{
	// Line 496, Address: 0x23d340, Func Offset: 0
	// Line 497, Address: 0x23d348, Func Offset: 0x8
	// Line 498, Address: 0x23d370, Func Offset: 0x30
	// Line 500, Address: 0x23d378, Func Offset: 0x38
	// Line 501, Address: 0x23d380, Func Offset: 0x40
	// Func End, Address: 0x23d38c, Func Offset: 0x4c
}

// 
// Start address: 0x23d390
int IsKeyRoom(int n)
{
	// Line 505, Address: 0x23d390, Func Offset: 0
	// Line 506, Address: 0x23d39c, Func Offset: 0xc
	// Line 507, Address: 0x23d3c4, Func Offset: 0x34
	// Line 508, Address: 0x23d3cc, Func Offset: 0x3c
	// Line 509, Address: 0x23d3d0, Func Offset: 0x40
	// Line 510, Address: 0x23d3d8, Func Offset: 0x48
	// Func End, Address: 0x23d3e8, Func Offset: 0x58
}

// 
// Start address: 0x23d3f0
int IsEileensRoom(int n)
{
	// Line 514, Address: 0x23d3f0, Func Offset: 0
	// Line 515, Address: 0x23d3fc, Func Offset: 0xc
	// Line 516, Address: 0x23d424, Func Offset: 0x34
	// Line 517, Address: 0x23d42c, Func Offset: 0x3c
	// Line 518, Address: 0x23d430, Func Offset: 0x40
	// Line 519, Address: 0x23d438, Func Offset: 0x48
	// Func End, Address: 0x23d448, Func Offset: 0x58
}

// 
// Start address: 0x23d450
int get_door_number()
{
	int i;
	int n;
	int m;
	float* ppos;
	float pos[4];
	float cpos[4];
	// Line 523, Address: 0x23d450, Func Offset: 0
	// Line 527, Address: 0x23d464, Func Offset: 0x14
	// Line 528, Address: 0x23d470, Func Offset: 0x20
	// Line 529, Address: 0x23d47c, Func Offset: 0x2c
	// Line 530, Address: 0x23d484, Func Offset: 0x34
	// Line 531, Address: 0x23d48c, Func Offset: 0x3c
	// Line 532, Address: 0x23d490, Func Offset: 0x40
	// Line 533, Address: 0x23d4b0, Func Offset: 0x60
	// Line 534, Address: 0x23d4d0, Func Offset: 0x80
	// Line 535, Address: 0x23d4d8, Func Offset: 0x88
	// Line 541, Address: 0x23d524, Func Offset: 0xd4
	// Line 542, Address: 0x23d540, Func Offset: 0xf0
	// Line 543, Address: 0x23d544, Func Offset: 0xf4
	// Func End, Address: 0x23d560, Func Offset: 0x110
}

// 
// Start address: 0x23d560
int get_door_number_with_rail_check(sfObj* obj)
{
	EnemyWheelWork* ew;
	int n;
	float tpos[4];
	float dpos[4];
	int junction[2];
	float dir;
	// Line 547, Address: 0x23d560, Func Offset: 0
	// Line 553, Address: 0x23d574, Func Offset: 0x14
	// Line 554, Address: 0x23d580, Func Offset: 0x20
	// Line 555, Address: 0x23d58c, Func Offset: 0x2c
	// Line 556, Address: 0x23d598, Func Offset: 0x38
	// Line 557, Address: 0x23d5a8, Func Offset: 0x48
	// Line 560, Address: 0x23d5d0, Func Offset: 0x70
	// Line 562, Address: 0x23d5d8, Func Offset: 0x78
	// Line 563, Address: 0x23d5ec, Func Offset: 0x8c
	// Line 564, Address: 0x23d5f8, Func Offset: 0x98
	// Line 565, Address: 0x23d618, Func Offset: 0xb8
	// Line 567, Address: 0x23d620, Func Offset: 0xc0
	// Line 568, Address: 0x23d628, Func Offset: 0xc8
	// Func End, Address: 0x23d640, Func Offset: 0xe0
}

// 
// Start address: 0x23d640
void change_anime(sfObj* obj)
{
	float r;
	// Line 572, Address: 0x23d640, Func Offset: 0
	// Line 573, Address: 0x23d650, Func Offset: 0x10
	// Line 574, Address: 0x23d65c, Func Offset: 0x1c
	// Line 576, Address: 0x23d688, Func Offset: 0x48
	// Line 577, Address: 0x23d6a4, Func Offset: 0x64
	// Line 578, Address: 0x23d6ac, Func Offset: 0x6c
	// Line 579, Address: 0x23d6d4, Func Offset: 0x94
	// Line 581, Address: 0x23d6dc, Func Offset: 0x9c
	// Line 583, Address: 0x23d6e4, Func Offset: 0xa4
	// Line 584, Address: 0x23d6e8, Func Offset: 0xa8
	// Line 585, Address: 0x23d6f8, Func Offset: 0xb8
	// Line 586, Address: 0x23d71c, Func Offset: 0xdc
	// Line 590, Address: 0x23d724, Func Offset: 0xe4
	// Line 591, Address: 0x23d728, Func Offset: 0xe8
	// Func End, Address: 0x23d73c, Func Offset: 0xfc
}

// 
// Start address: 0x23d740
void move_forward(sfObj* obj)
{
	float vec[4];
	float d;
	// Line 595, Address: 0x23d740, Func Offset: 0
	// Line 598, Address: 0x23d750, Func Offset: 0x10
	// Line 599, Address: 0x23d764, Func Offset: 0x24
	// Line 600, Address: 0x23d77c, Func Offset: 0x3c
	// Line 601, Address: 0x23d7a8, Func Offset: 0x68
	// Line 602, Address: 0x23d7d4, Func Offset: 0x94
	// Line 603, Address: 0x23d7e0, Func Offset: 0xa0
	// Func End, Address: 0x23d7f4, Func Offset: 0xb4
}

// 
// Start address: 0x23d800
void EnemyWheelControlWander(sfObj* obj)
{
	EnemyWheelWork* ew;
	float* pos;
	float rot[4];
	float tpos[4];
	float dt;
	float dir;
	float tdir;
	float pdir;
	float d;
	int junction[2];
	int f;
	int m;
	int n;
	int i;
	float dm;
	// Line 607, Address: 0x23d800, Func Offset: 0
	// Line 614, Address: 0x23d834, Func Offset: 0x34
	// Line 615, Address: 0x23d840, Func Offset: 0x40
	// Line 616, Address: 0x23d84c, Func Offset: 0x4c
	// Line 617, Address: 0x23d858, Func Offset: 0x58
	// Line 618, Address: 0x23d864, Func Offset: 0x64
	// Line 619, Address: 0x23d870, Func Offset: 0x70
	// Line 621, Address: 0x23d878, Func Offset: 0x78
	// Line 619, Address: 0x23d880, Func Offset: 0x80
	// Line 621, Address: 0x23d884, Func Offset: 0x84
	// Line 624, Address: 0x23d898, Func Offset: 0x98
	// Line 625, Address: 0x23d8c4, Func Offset: 0xc4
	// Line 627, Address: 0x23d8c8, Func Offset: 0xc8
	// Line 628, Address: 0x23d8d0, Func Offset: 0xd0
	// Line 629, Address: 0x23d8dc, Func Offset: 0xdc
	// Line 631, Address: 0x23d8e4, Func Offset: 0xe4
	// Line 634, Address: 0x23d8f0, Func Offset: 0xf0
	// Line 636, Address: 0x23d900, Func Offset: 0x100
	// Line 637, Address: 0x23d908, Func Offset: 0x108
	// Line 638, Address: 0x23d91c, Func Offset: 0x11c
	// Line 639, Address: 0x23d93c, Func Offset: 0x13c
	// Line 640, Address: 0x23d944, Func Offset: 0x144
	// Line 641, Address: 0x23d950, Func Offset: 0x150
	// Line 642, Address: 0x23d95c, Func Offset: 0x15c
	// Line 643, Address: 0x23d960, Func Offset: 0x160
	// Line 644, Address: 0x23d968, Func Offset: 0x168
	// Line 646, Address: 0x23d970, Func Offset: 0x170
	// Line 647, Address: 0x23d988, Func Offset: 0x188
	// Line 649, Address: 0x23d9ac, Func Offset: 0x1ac
	// Line 650, Address: 0x23d9b4, Func Offset: 0x1b4
	// Line 652, Address: 0x23d9c0, Func Offset: 0x1c0
	// Line 654, Address: 0x23d9d4, Func Offset: 0x1d4
	// Line 655, Address: 0x23d9e0, Func Offset: 0x1e0
	// Line 656, Address: 0x23d9fc, Func Offset: 0x1fc
	// Line 657, Address: 0x23da00, Func Offset: 0x200
	// Line 658, Address: 0x23da10, Func Offset: 0x210
	// Line 657, Address: 0x23da14, Func Offset: 0x214
	// Line 658, Address: 0x23da18, Func Offset: 0x218
	// Line 660, Address: 0x23da2c, Func Offset: 0x22c
	// Line 661, Address: 0x23da30, Func Offset: 0x230
	// Line 663, Address: 0x23da3c, Func Offset: 0x23c
	// Line 661, Address: 0x23da50, Func Offset: 0x250
	// Line 663, Address: 0x23da54, Func Offset: 0x254
	// Line 664, Address: 0x23da5c, Func Offset: 0x25c
	// Line 665, Address: 0x23da64, Func Offset: 0x264
	// Line 666, Address: 0x23da70, Func Offset: 0x270
	// Line 667, Address: 0x23da84, Func Offset: 0x284
	// Line 668, Address: 0x23da8c, Func Offset: 0x28c
	// Line 669, Address: 0x23da98, Func Offset: 0x298
	// Line 671, Address: 0x23daa4, Func Offset: 0x2a4
	// Line 672, Address: 0x23daa8, Func Offset: 0x2a8
	// Line 673, Address: 0x23dab0, Func Offset: 0x2b0
	// Line 677, Address: 0x23dab8, Func Offset: 0x2b8
	// Line 678, Address: 0x23dac8, Func Offset: 0x2c8
	// Line 680, Address: 0x23daec, Func Offset: 0x2ec
	// Line 681, Address: 0x23daf4, Func Offset: 0x2f4
	// Line 682, Address: 0x23dafc, Func Offset: 0x2fc
	// Line 683, Address: 0x23db00, Func Offset: 0x300
	// Line 685, Address: 0x23db10, Func Offset: 0x310
	// Line 686, Address: 0x23db18, Func Offset: 0x318
	// Line 687, Address: 0x23db28, Func Offset: 0x328
	// Line 688, Address: 0x23db2c, Func Offset: 0x32c
	// Line 689, Address: 0x23db38, Func Offset: 0x338
	// Line 690, Address: 0x23db3c, Func Offset: 0x33c
	// Line 691, Address: 0x23db40, Func Offset: 0x340
	// Line 692, Address: 0x23db58, Func Offset: 0x358
	// Line 693, Address: 0x23db78, Func Offset: 0x378
	// Line 694, Address: 0x23db80, Func Offset: 0x380
	// Line 695, Address: 0x23db88, Func Offset: 0x388
	// Line 696, Address: 0x23db94, Func Offset: 0x394
	// Line 697, Address: 0x23db98, Func Offset: 0x398
	// Line 698, Address: 0x23dba0, Func Offset: 0x3a0
	// Line 700, Address: 0x23dba8, Func Offset: 0x3a8
	// Line 701, Address: 0x23dbb4, Func Offset: 0x3b4
	// Line 705, Address: 0x23dbd8, Func Offset: 0x3d8
	// Line 706, Address: 0x23dbe0, Func Offset: 0x3e0
	// Line 709, Address: 0x23dbe8, Func Offset: 0x3e8
	// Line 706, Address: 0x23dbec, Func Offset: 0x3ec
	// Line 709, Address: 0x23dbf0, Func Offset: 0x3f0
	// Line 710, Address: 0x23dbf8, Func Offset: 0x3f8
	// Line 711, Address: 0x23dc04, Func Offset: 0x404
	// Line 712, Address: 0x23dc2c, Func Offset: 0x42c
	// Line 713, Address: 0x23dc38, Func Offset: 0x438
	// Line 714, Address: 0x23dc44, Func Offset: 0x444
	// Line 715, Address: 0x23dc50, Func Offset: 0x450
	// Line 716, Address: 0x23dc5c, Func Offset: 0x45c
	// Line 717, Address: 0x23dc60, Func Offset: 0x460
	// Line 719, Address: 0x23dc64, Func Offset: 0x464
	// Line 720, Address: 0x23dc7c, Func Offset: 0x47c
	// Line 722, Address: 0x23dc80, Func Offset: 0x480
	// Line 723, Address: 0x23dc88, Func Offset: 0x488
	// Line 724, Address: 0x23dc90, Func Offset: 0x490
	// Line 725, Address: 0x23dca0, Func Offset: 0x4a0
	// Line 724, Address: 0x23dca4, Func Offset: 0x4a4
	// Line 725, Address: 0x23dcac, Func Offset: 0x4ac
	// Line 726, Address: 0x23dcb4, Func Offset: 0x4b4
	// Line 727, Address: 0x23dcbc, Func Offset: 0x4bc
	// Line 726, Address: 0x23dcc0, Func Offset: 0x4c0
	// Line 727, Address: 0x23dcc4, Func Offset: 0x4c4
	// Line 730, Address: 0x23dcdc, Func Offset: 0x4dc
	// Line 731, Address: 0x23dcec, Func Offset: 0x4ec
	// Line 732, Address: 0x23dcf0, Func Offset: 0x4f0
	// Line 733, Address: 0x23dcfc, Func Offset: 0x4fc
	// Line 734, Address: 0x23dd00, Func Offset: 0x500
	// Line 735, Address: 0x23dd10, Func Offset: 0x510
	// Line 737, Address: 0x23dd1c, Func Offset: 0x51c
	// Line 735, Address: 0x23dd20, Func Offset: 0x520
	// Line 737, Address: 0x23dd24, Func Offset: 0x524
	// Line 739, Address: 0x23dd3c, Func Offset: 0x53c
	// Line 740, Address: 0x23dd50, Func Offset: 0x550
	// Line 741, Address: 0x23dd5c, Func Offset: 0x55c
	// Line 742, Address: 0x23dd68, Func Offset: 0x568
	// Line 743, Address: 0x23dd74, Func Offset: 0x574
	// Line 744, Address: 0x23dd78, Func Offset: 0x578
	// Line 746, Address: 0x23dd80, Func Offset: 0x580
	// Line 747, Address: 0x23dd8c, Func Offset: 0x58c
	// Line 749, Address: 0x23dd9c, Func Offset: 0x59c
	// Line 750, Address: 0x23dda8, Func Offset: 0x5a8
	// Line 751, Address: 0x23ddb0, Func Offset: 0x5b0
	// Line 752, Address: 0x23ddbc, Func Offset: 0x5bc
	// Line 754, Address: 0x23ddc4, Func Offset: 0x5c4
	// Line 755, Address: 0x23ddd0, Func Offset: 0x5d0
	// Line 758, Address: 0x23ddd4, Func Offset: 0x5d4
	// Line 759, Address: 0x23ddd8, Func Offset: 0x5d8
	// Line 763, Address: 0x23dde0, Func Offset: 0x5e0
	// Line 769, Address: 0x23de00, Func Offset: 0x600
	// Line 770, Address: 0x23de0c, Func Offset: 0x60c
	// Line 771, Address: 0x23de14, Func Offset: 0x614
	// Line 772, Address: 0x23de24, Func Offset: 0x624
	// Line 773, Address: 0x23de2c, Func Offset: 0x62c
	// Line 774, Address: 0x23de30, Func Offset: 0x630
	// Func End, Address: 0x23de68, Func Offset: 0x668
}

// 
// Start address: 0x23de70
void EnemyWheelControlIntoDoor(sfObj* obj)
{
	EnemyWheelWork* ew;
	float* pos;
	float rot[4];
	float tpos[4];
	float vec[4];
	float vec2[4];
	float dt;
	float dir;
	float tdir;
	float d;
	int junction[2];
	// Line 778, Address: 0x23de70, Func Offset: 0
	// Line 785, Address: 0x23de8c, Func Offset: 0x1c
	// Line 786, Address: 0x23de98, Func Offset: 0x28
	// Line 787, Address: 0x23dea4, Func Offset: 0x34
	// Line 788, Address: 0x23deb0, Func Offset: 0x40
	// Line 789, Address: 0x23deb8, Func Offset: 0x48
	// Line 791, Address: 0x23dec0, Func Offset: 0x50
	// Line 789, Address: 0x23dec8, Func Offset: 0x58
	// Line 791, Address: 0x23decc, Func Offset: 0x5c
	// Line 799, Address: 0x23dee0, Func Offset: 0x70
	// Line 800, Address: 0x23df0c, Func Offset: 0x9c
	// Line 801, Address: 0x23df10, Func Offset: 0xa0
	// Line 802, Address: 0x23df1c, Func Offset: 0xac
	// Line 803, Address: 0x23df28, Func Offset: 0xb8
	// Line 804, Address: 0x23df38, Func Offset: 0xc8
	// Line 805, Address: 0x23df44, Func Offset: 0xd4
	// Line 806, Address: 0x23df4c, Func Offset: 0xdc
	// Line 808, Address: 0x23df54, Func Offset: 0xe4
	// Line 809, Address: 0x23df58, Func Offset: 0xe8
	// Line 811, Address: 0x23df7c, Func Offset: 0x10c
	// Line 812, Address: 0x23df88, Func Offset: 0x118
	// Line 814, Address: 0x23df94, Func Offset: 0x124
	// Line 815, Address: 0x23dfa0, Func Offset: 0x130
	// Line 816, Address: 0x23dfc0, Func Offset: 0x150
	// Line 817, Address: 0x23dfd4, Func Offset: 0x164
	// Line 818, Address: 0x23dfdc, Func Offset: 0x16c
	// Line 819, Address: 0x23dfe8, Func Offset: 0x178
	// Line 820, Address: 0x23dff4, Func Offset: 0x184
	// Line 821, Address: 0x23dff8, Func Offset: 0x188
	// Line 823, Address: 0x23e000, Func Offset: 0x190
	// Line 824, Address: 0x23e00c, Func Offset: 0x19c
	// Line 825, Address: 0x23e01c, Func Offset: 0x1ac
	// Line 826, Address: 0x23e024, Func Offset: 0x1b4
	// Line 827, Address: 0x23e030, Func Offset: 0x1c0
	// Line 828, Address: 0x23e038, Func Offset: 0x1c8
	// Line 830, Address: 0x23e040, Func Offset: 0x1d0
	// Line 832, Address: 0x23e048, Func Offset: 0x1d8
	// Line 834, Address: 0x23e068, Func Offset: 0x1f8
	// Line 835, Address: 0x23e074, Func Offset: 0x204
	// Line 836, Address: 0x23e07c, Func Offset: 0x20c
	// Line 837, Address: 0x23e084, Func Offset: 0x214
	// Line 838, Address: 0x23e088, Func Offset: 0x218
	// Line 839, Address: 0x23e094, Func Offset: 0x224
	// Line 841, Address: 0x23e0b4, Func Offset: 0x244
	// Line 842, Address: 0x23e0c0, Func Offset: 0x250
	// Line 843, Address: 0x23e0d0, Func Offset: 0x260
	// Line 844, Address: 0x23e0d8, Func Offset: 0x268
	// Line 845, Address: 0x23e0e0, Func Offset: 0x270
	// Line 846, Address: 0x23e0f8, Func Offset: 0x288
	// Line 848, Address: 0x23e100, Func Offset: 0x290
	// Line 850, Address: 0x23e108, Func Offset: 0x298
	// Line 852, Address: 0x23e128, Func Offset: 0x2b8
	// Line 853, Address: 0x23e134, Func Offset: 0x2c4
	// Line 854, Address: 0x23e13c, Func Offset: 0x2cc
	// Line 855, Address: 0x23e148, Func Offset: 0x2d8
	// Line 856, Address: 0x23e160, Func Offset: 0x2f0
	// Line 858, Address: 0x23e198, Func Offset: 0x328
	// Line 860, Address: 0x23e1a0, Func Offset: 0x330
	// Line 862, Address: 0x23e1a8, Func Offset: 0x338
	// Line 863, Address: 0x23e1b4, Func Offset: 0x344
	// Line 864, Address: 0x23e1e0, Func Offset: 0x370
	// Line 865, Address: 0x23e1fc, Func Offset: 0x38c
	// Line 867, Address: 0x23e21c, Func Offset: 0x3ac
	// Line 868, Address: 0x23e228, Func Offset: 0x3b8
	// Line 869, Address: 0x23e230, Func Offset: 0x3c0
	// Line 871, Address: 0x23e258, Func Offset: 0x3e8
	// Line 872, Address: 0x23e260, Func Offset: 0x3f0
	// Line 873, Address: 0x23e26c, Func Offset: 0x3fc
	// Line 874, Address: 0x23e270, Func Offset: 0x400
	// Line 875, Address: 0x23e27c, Func Offset: 0x40c
	// Line 876, Address: 0x23e280, Func Offset: 0x410
	// Line 878, Address: 0x23e288, Func Offset: 0x418
	// Line 879, Address: 0x23e2ac, Func Offset: 0x43c
	// Line 880, Address: 0x23e2b0, Func Offset: 0x440
	// Line 881, Address: 0x23e2bc, Func Offset: 0x44c
	// Line 882, Address: 0x23e2cc, Func Offset: 0x45c
	// Line 884, Address: 0x23e2d8, Func Offset: 0x468
	// Line 886, Address: 0x23e2e0, Func Offset: 0x470
	// Line 887, Address: 0x23e2ec, Func Offset: 0x47c
	// Line 891, Address: 0x23e314, Func Offset: 0x4a4
	// Line 892, Address: 0x23e31c, Func Offset: 0x4ac
	// Line 893, Address: 0x23e324, Func Offset: 0x4b4
	// Line 894, Address: 0x23e328, Func Offset: 0x4b8
	// Line 895, Address: 0x23e348, Func Offset: 0x4d8
	// Line 896, Address: 0x23e350, Func Offset: 0x4e0
	// Line 897, Address: 0x23e358, Func Offset: 0x4e8
	// Line 898, Address: 0x23e364, Func Offset: 0x4f4
	// Line 899, Address: 0x23e368, Func Offset: 0x4f8
	// Line 900, Address: 0x23e370, Func Offset: 0x500
	// Line 901, Address: 0x23e37c, Func Offset: 0x50c
	// Line 902, Address: 0x23e384, Func Offset: 0x514
	// Line 903, Address: 0x23e388, Func Offset: 0x518
	// Line 905, Address: 0x23e3a8, Func Offset: 0x538
	// Line 906, Address: 0x23e3b4, Func Offset: 0x544
	// Line 908, Address: 0x23e3bc, Func Offset: 0x54c
	// Line 909, Address: 0x23e3c0, Func Offset: 0x550
	// Func End, Address: 0x23e3e0, Func Offset: 0x570
}

// 
// Start address: 0x23e3e0
void EnemyWheelControlFromDoor(sfObj* obj)
{
	EnemyWheelWork* ew;
	float* pos;
	float rot[4];
	float tpos[4];
	float vec[4];
	float dt;
	int i;
	int n;
	float dir;
	// Line 913, Address: 0x23e3e0, Func Offset: 0
	// Line 919, Address: 0x23e3f8, Func Offset: 0x18
	// Line 920, Address: 0x23e404, Func Offset: 0x24
	// Line 921, Address: 0x23e410, Func Offset: 0x30
	// Line 922, Address: 0x23e41c, Func Offset: 0x3c
	// Line 923, Address: 0x23e424, Func Offset: 0x44
	// Line 925, Address: 0x23e458, Func Offset: 0x78
	// Line 926, Address: 0x23e460, Func Offset: 0x80
	// Line 927, Address: 0x23e46c, Func Offset: 0x8c
	// Line 928, Address: 0x23e478, Func Offset: 0x98
	// Line 929, Address: 0x23e480, Func Offset: 0xa0
	// Line 930, Address: 0x23e48c, Func Offset: 0xac
	// Line 931, Address: 0x23e498, Func Offset: 0xb8
	// Line 932, Address: 0x23e4c0, Func Offset: 0xe0
	// Line 933, Address: 0x23e4dc, Func Offset: 0xfc
	// Line 934, Address: 0x23e4e8, Func Offset: 0x108
	// Line 935, Address: 0x23e4fc, Func Offset: 0x11c
	// Line 936, Address: 0x23e508, Func Offset: 0x128
	// Line 937, Address: 0x23e510, Func Offset: 0x130
	// Line 938, Address: 0x23e51c, Func Offset: 0x13c
	// Line 939, Address: 0x23e524, Func Offset: 0x144
	// Line 940, Address: 0x23e52c, Func Offset: 0x14c
	// Line 941, Address: 0x23e534, Func Offset: 0x154
	// Line 942, Address: 0x23e538, Func Offset: 0x158
	// Line 943, Address: 0x23e548, Func Offset: 0x168
	// Line 944, Address: 0x23e550, Func Offset: 0x170
	// Line 945, Address: 0x23e568, Func Offset: 0x188
	// Line 947, Address: 0x23e570, Func Offset: 0x190
	// Line 949, Address: 0x23e578, Func Offset: 0x198
	// Line 950, Address: 0x23e580, Func Offset: 0x1a0
	// Line 952, Address: 0x23e594, Func Offset: 0x1b4
	// Line 953, Address: 0x23e59c, Func Offset: 0x1bc
	// Line 955, Address: 0x23e5a4, Func Offset: 0x1c4
	// Line 956, Address: 0x23e5ac, Func Offset: 0x1cc
	// Line 957, Address: 0x23e5b0, Func Offset: 0x1d0
	// Line 958, Address: 0x23e5b8, Func Offset: 0x1d8
	// Line 962, Address: 0x23e5dc, Func Offset: 0x1fc
	// Line 963, Address: 0x23e5e4, Func Offset: 0x204
	// Line 964, Address: 0x23e5f0, Func Offset: 0x210
	// Line 965, Address: 0x23e5fc, Func Offset: 0x21c
	// Line 966, Address: 0x23e608, Func Offset: 0x228
	// Line 967, Address: 0x23e610, Func Offset: 0x230
	// Line 968, Address: 0x23e61c, Func Offset: 0x23c
	// Line 969, Address: 0x23e628, Func Offset: 0x248
	// Line 972, Address: 0x23e648, Func Offset: 0x268
	// Line 973, Address: 0x23e654, Func Offset: 0x274
	// Line 976, Address: 0x23e65c, Func Offset: 0x27c
	// Line 978, Address: 0x23e674, Func Offset: 0x294
	// Line 977, Address: 0x23e678, Func Offset: 0x298
	// Line 978, Address: 0x23e67c, Func Offset: 0x29c
	// Line 981, Address: 0x23e684, Func Offset: 0x2a4
	// Line 982, Address: 0x23e688, Func Offset: 0x2a8
	// Func End, Address: 0x23e6a4, Func Offset: 0x2c4
}

// 
// Start address: 0x23e6b0
void EnemyWheelControlDamage(sfObj* obj)
{
	EnemyWheelWork* ew;
	float vec[4];
	float dt;
	float rdt;
	EnemyBattleDamage bd;
	float dir[4];
	float rrot[4];
	// Line 986, Address: 0x23e6b0, Func Offset: 0
	// Line 990, Address: 0x23e6c8, Func Offset: 0x18
	// Line 991, Address: 0x23e6d0, Func Offset: 0x20
	// Line 992, Address: 0x23e6d8, Func Offset: 0x28
	// Line 993, Address: 0x23e6e4, Func Offset: 0x34
	// Line 995, Address: 0x23e708, Func Offset: 0x58
	// Line 996, Address: 0x23e718, Func Offset: 0x68
	// Line 997, Address: 0x23e720, Func Offset: 0x70
	// Line 999, Address: 0x23e728, Func Offset: 0x78
	// Line 1001, Address: 0x23e734, Func Offset: 0x84
	// Line 1002, Address: 0x23e744, Func Offset: 0x94
	// Line 1003, Address: 0x23e750, Func Offset: 0xa0
	// Line 1004, Address: 0x23e75c, Func Offset: 0xac
	// Line 1005, Address: 0x23e768, Func Offset: 0xb8
	// Line 1010, Address: 0x23e770, Func Offset: 0xc0
	// Line 1011, Address: 0x23e77c, Func Offset: 0xcc
	// Line 1012, Address: 0x23e78c, Func Offset: 0xdc
	// Line 1013, Address: 0x23e794, Func Offset: 0xe4
	// Line 1014, Address: 0x23e798, Func Offset: 0xe8
	// Line 1015, Address: 0x23e7ac, Func Offset: 0xfc
	// Line 1016, Address: 0x23e7bc, Func Offset: 0x10c
	// Line 1017, Address: 0x23e7c8, Func Offset: 0x118
	// Line 1018, Address: 0x23e7f0, Func Offset: 0x140
	// Line 1020, Address: 0x23e7f8, Func Offset: 0x148
	// Line 1018, Address: 0x23e7fc, Func Offset: 0x14c
	// Line 1020, Address: 0x23e818, Func Offset: 0x168
	// Line 1023, Address: 0x23e820, Func Offset: 0x170
	// Line 1024, Address: 0x23e850, Func Offset: 0x1a0
	// Line 1025, Address: 0x23e85c, Func Offset: 0x1ac
	// Line 1027, Address: 0x23e888, Func Offset: 0x1d8
	// Line 1028, Address: 0x23e8a0, Func Offset: 0x1f0
	// Line 1029, Address: 0x23e8bc, Func Offset: 0x20c
	// Line 1030, Address: 0x23e8d4, Func Offset: 0x224
	// Line 1031, Address: 0x23e8dc, Func Offset: 0x22c
	// Line 1032, Address: 0x23e8e4, Func Offset: 0x234
	// Line 1034, Address: 0x23e8f8, Func Offset: 0x248
	// Line 1037, Address: 0x23e900, Func Offset: 0x250
	// Line 1038, Address: 0x23e908, Func Offset: 0x258
	// Line 1042, Address: 0x23e914, Func Offset: 0x264
	// Line 1043, Address: 0x23e918, Func Offset: 0x268
	// Func End, Address: 0x23e934, Func Offset: 0x284
}

// 
// Start address: 0x23e940
void EnemyWheelControlEvent(sfObj* obj)
{
	// Line 1047, Address: 0x23e940, Func Offset: 0
	// Line 1048, Address: 0x23e950, Func Offset: 0x10
	// Line 1050, Address: 0x23e968, Func Offset: 0x28
	// Line 1051, Address: 0x23e978, Func Offset: 0x38
	// Line 1052, Address: 0x23e998, Func Offset: 0x58
	// Line 1053, Address: 0x23e9a4, Func Offset: 0x64
	// Line 1054, Address: 0x23e9b0, Func Offset: 0x70
	// Line 1057, Address: 0x23e9b8, Func Offset: 0x78
	// Line 1058, Address: 0x23e9c8, Func Offset: 0x88
	// Line 1060, Address: 0x23e9d0, Func Offset: 0x90
	// Func End, Address: 0x23e9e4, Func Offset: 0xa4
}

// 
// Start address: 0x23e9f0
void turn_main(sfObj* obj, float* base_pos)
{
	EnemyWheelWork* ew;
	float* pos;
	float tpos[4];
	float bpos[4];
	float vec[4];
	float rot[4];
	float trot[4];
	float dir;
	float dt;
	float rate;
	float orate;
	float d;
	EnemyMeasureResult mres;
	// Line 1064, Address: 0x23e9f0, Func Offset: 0
	// Line 1071, Address: 0x23ea18, Func Offset: 0x28
	// Line 1072, Address: 0x23ea20, Func Offset: 0x30
	// Line 1074, Address: 0x23ea28, Func Offset: 0x38
	// Line 1072, Address: 0x23ea30, Func Offset: 0x40
	// Line 1074, Address: 0x23ea34, Func Offset: 0x44
	// Line 1077, Address: 0x23ea48, Func Offset: 0x58
	// Line 1079, Address: 0x23ea68, Func Offset: 0x78
	// Line 1080, Address: 0x23ea78, Func Offset: 0x88
	// Line 1081, Address: 0x23ea7c, Func Offset: 0x8c
	// Line 1082, Address: 0x23ea88, Func Offset: 0x98
	// Line 1081, Address: 0x23ea8c, Func Offset: 0x9c
	// Line 1082, Address: 0x23ea90, Func Offset: 0xa0
	// Line 1083, Address: 0x23eaa8, Func Offset: 0xb8
	// Line 1084, Address: 0x23eab0, Func Offset: 0xc0
	// Line 1086, Address: 0x23eab8, Func Offset: 0xc8
	// Line 1088, Address: 0x23eae8, Func Offset: 0xf8
	// Line 1086, Address: 0x23eaec, Func Offset: 0xfc
	// Line 1087, Address: 0x23eaf0, Func Offset: 0x100
	// Line 1088, Address: 0x23eaf4, Func Offset: 0x104
	// Line 1095, Address: 0x23eaf8, Func Offset: 0x108
	// Line 1092, Address: 0x23eafc, Func Offset: 0x10c
	// Line 1091, Address: 0x23eb00, Func Offset: 0x110
	// Line 1095, Address: 0x23eb04, Func Offset: 0x114
	// Line 1093, Address: 0x23eb08, Func Offset: 0x118
	// Line 1092, Address: 0x23eb0c, Func Offset: 0x11c
	// Line 1094, Address: 0x23eb10, Func Offset: 0x120
	// Line 1095, Address: 0x23eb14, Func Offset: 0x124
	// Line 1096, Address: 0x23eb20, Func Offset: 0x130
	// Line 1097, Address: 0x23eb28, Func Offset: 0x138
	// Line 1100, Address: 0x23eb30, Func Offset: 0x140
	// Line 1101, Address: 0x23eb3c, Func Offset: 0x14c
	// Line 1102, Address: 0x23eb48, Func Offset: 0x158
	// Line 1103, Address: 0x23eb5c, Func Offset: 0x16c
	// Line 1104, Address: 0x23eb70, Func Offset: 0x180
	// Line 1105, Address: 0x23eb84, Func Offset: 0x194
	// Line 1106, Address: 0x23eb88, Func Offset: 0x198
	// Line 1107, Address: 0x23eb9c, Func Offset: 0x1ac
	// Line 1108, Address: 0x23ebac, Func Offset: 0x1bc
	// Line 1110, Address: 0x23ebc8, Func Offset: 0x1d8
	// Line 1109, Address: 0x23ebd4, Func Offset: 0x1e4
	// Line 1110, Address: 0x23ebd8, Func Offset: 0x1e8
	// Line 1111, Address: 0x23ebe0, Func Offset: 0x1f0
	// Line 1113, Address: 0x23ebfc, Func Offset: 0x20c
	// Line 1112, Address: 0x23ec1c, Func Offset: 0x22c
	// Line 1113, Address: 0x23ec24, Func Offset: 0x234
	// Line 1115, Address: 0x23ec4c, Func Offset: 0x25c
	// Line 1116, Address: 0x23ec60, Func Offset: 0x270
	// Line 1118, Address: 0x23ec7c, Func Offset: 0x28c
	// Line 1119, Address: 0x23ec8c, Func Offset: 0x29c
	// Line 1120, Address: 0x23eca0, Func Offset: 0x2b0
	// Line 1119, Address: 0x23ecb8, Func Offset: 0x2c8
	// Line 1120, Address: 0x23ecbc, Func Offset: 0x2cc
	// Line 1122, Address: 0x23ece0, Func Offset: 0x2f0
	// Line 1123, Address: 0x23ecf0, Func Offset: 0x300
	// Line 1124, Address: 0x23ed14, Func Offset: 0x324
	// Line 1125, Address: 0x23ed24, Func Offset: 0x334
	// Line 1127, Address: 0x23ed30, Func Offset: 0x340
	// Line 1128, Address: 0x23ed40, Func Offset: 0x350
	// Line 1129, Address: 0x23ed60, Func Offset: 0x370
	// Line 1130, Address: 0x23ed7c, Func Offset: 0x38c
	// Line 1131, Address: 0x23ed88, Func Offset: 0x398
	// Func End, Address: 0x23edb0, Func Offset: 0x3c0
}

// 
// Start address: 0x23edb0
void EnemyWheelControlAnimeRightTurn(sfObj* obj)
{
	// Line 1136, Address: 0x23edb0, Func Offset: 0
	// Func End, Address: 0x23edbc, Func Offset: 0xc
}

// 
// Start address: 0x23edc0
void EnemyWheelControlAnimeLeftTurn(sfObj* obj)
{
	// Line 1142, Address: 0x23edc0, Func Offset: 0
	// Func End, Address: 0x23edcc, Func Offset: 0xc
}

// 
// Start address: 0x23edd0
void EnemyWheelAnimeEnd(sfObj* obj)
{
	EnemyWheelWork* ew;
	float trot[4];
	EnemyMeasureResult mres;
	float pos[4];
	// Line 1147, Address: 0x23edd0, Func Offset: 0
	// Line 1151, Address: 0x23ede0, Func Offset: 0x10
	// Line 1153, Address: 0x23edec, Func Offset: 0x1c
	// Line 1155, Address: 0x23ee00, Func Offset: 0x30
	// Line 1157, Address: 0x23ee08, Func Offset: 0x38
	// Line 1156, Address: 0x23ee0c, Func Offset: 0x3c
	// Line 1157, Address: 0x23ee20, Func Offset: 0x50
	// Line 1158, Address: 0x23ee40, Func Offset: 0x70
	// Line 1159, Address: 0x23ee4c, Func Offset: 0x7c
	// Line 1160, Address: 0x23ee50, Func Offset: 0x80
	// Line 1161, Address: 0x23ee64, Func Offset: 0x94
	// Line 1162, Address: 0x23ee70, Func Offset: 0xa0
	// Line 1163, Address: 0x23ee8c, Func Offset: 0xbc
	// Line 1164, Address: 0x23ee90, Func Offset: 0xc0
	// Line 1166, Address: 0x23ee9c, Func Offset: 0xcc
	// Line 1167, Address: 0x23eea0, Func Offset: 0xd0
	// Line 1168, Address: 0x23eeac, Func Offset: 0xdc
	// Line 1169, Address: 0x23eeb4, Func Offset: 0xe4
	// Func End, Address: 0x23eec8, Func Offset: 0xf8
}

// 
// Start address: 0x23eed0
int EnemyWheelCheckCharaHit(sfObj* obj)
{
	EnemyClHitResult* cres;
	float pos[4];
	float tpos[4];
	float vec[4];
	float dir[4];
	int r;
	// Line 1175, Address: 0x23eed0, Func Offset: 0
	// Line 1179, Address: 0x23eee4, Func Offset: 0x14
	// Line 1180, Address: 0x23eef0, Func Offset: 0x20
	// Line 1182, Address: 0x23eefc, Func Offset: 0x2c
	// Line 1183, Address: 0x23ef04, Func Offset: 0x34
	// Line 1184, Address: 0x23ef24, Func Offset: 0x54
	// Line 1185, Address: 0x23ef38, Func Offset: 0x68
	// Line 1186, Address: 0x23ef44, Func Offset: 0x74
	// Line 1187, Address: 0x23ef64, Func Offset: 0x94
	// Line 1188, Address: 0x23ef90, Func Offset: 0xc0
	// Line 1189, Address: 0x23efcc, Func Offset: 0xfc
	// Line 1192, Address: 0x23efd0, Func Offset: 0x100
	// Line 1193, Address: 0x23efd8, Func Offset: 0x108
	// Line 1194, Address: 0x23efe0, Func Offset: 0x110
	// Line 1195, Address: 0x23efe4, Func Offset: 0x114
	// Func End, Address: 0x23effc, Func Offset: 0x12c
}

// 
// Start address: 0x23f000
void EnemyWheelSetEventDamageCheck(sfObj* obj)
{
	// Line 1199, Address: 0x23f000, Func Offset: 0
	// Line 1201, Address: 0x23f00c, Func Offset: 0xc
	// Line 1202, Address: 0x23f014, Func Offset: 0x14
	// Line 1203, Address: 0x23f044, Func Offset: 0x44
	// Line 1204, Address: 0x23f048, Func Offset: 0x48
	// Line 1208, Address: 0x23f05c, Func Offset: 0x5c
	// Line 1209, Address: 0x23f060, Func Offset: 0x60
	// Line 1211, Address: 0x23f078, Func Offset: 0x78
	// Line 1213, Address: 0x23f080, Func Offset: 0x80
	// Line 1216, Address: 0x23f09c, Func Offset: 0x9c
	// Line 1217, Address: 0x23f0a0, Func Offset: 0xa0
	// Func End, Address: 0x23f0b0, Func Offset: 0xb0
}

// 
// Start address: 0x23f0b0
void EnemyWheelSetAttack(sfObj* obj)
{
	EnemyWheelWork* ew;
	float d;
	// Line 1221, Address: 0x23f0b0, Func Offset: 0
	// Line 1224, Address: 0x23f0c0, Func Offset: 0x10
	// Line 1225, Address: 0x23f0cc, Func Offset: 0x1c
	// Line 1226, Address: 0x23f0dc, Func Offset: 0x2c
	// Line 1228, Address: 0x23f0e4, Func Offset: 0x34
	// Line 1229, Address: 0x23f0ec, Func Offset: 0x3c
	// Line 1230, Address: 0x23f0f0, Func Offset: 0x40
	// Line 1231, Address: 0x23f108, Func Offset: 0x58
	// Line 1233, Address: 0x23f134, Func Offset: 0x84
	// Line 1234, Address: 0x23f138, Func Offset: 0x88
	// Line 1236, Address: 0x23f15c, Func Offset: 0xac
	// Line 1237, Address: 0x23f160, Func Offset: 0xb0
	// Func End, Address: 0x23f174, Func Offset: 0xc4
}

// 
// Start address: 0x23f180
void EnemyWheelSoundStart(sfObj* obj)
{
	// Line 1241, Address: 0x23f180, Func Offset: 0
	// Line 1242, Address: 0x23f184, Func Offset: 0x4
	// Line 1241, Address: 0x23f188, Func Offset: 0x8
	// Line 1242, Address: 0x23f190, Func Offset: 0x10
	// Line 1244, Address: 0x23f1a4, Func Offset: 0x24
	// Line 1245, Address: 0x23f1ac, Func Offset: 0x2c
	// Line 1246, Address: 0x23f1b0, Func Offset: 0x30
	// Func End, Address: 0x23f1c0, Func Offset: 0x40
}

// 
// Start address: 0x23f1c0
void EnemyWheelSoundStop(sfObj* obj)
{
	// Line 1251, Address: 0x23f1c0, Func Offset: 0
	// Func End, Address: 0x23f1c8, Func Offset: 0x8
}

// 
// Start address: 0x23f1d0
void EnemyEDWheelHitPlayer(void* obj)
{
	EnemyWheelWork* ew;
	// Line 1258, Address: 0x23f1d0, Func Offset: 0
	// Line 1260, Address: 0x23f1e0, Func Offset: 0x10
	// Line 1261, Address: 0x23f1ec, Func Offset: 0x1c
	// Line 1262, Address: 0x23f1f4, Func Offset: 0x24
	// Line 1263, Address: 0x23f204, Func Offset: 0x34
	// Line 1265, Address: 0x23f230, Func Offset: 0x60
	// Line 1266, Address: 0x23f238, Func Offset: 0x68
	// Line 1269, Address: 0x23f240, Func Offset: 0x70
	// Line 1270, Address: 0x23f248, Func Offset: 0x78
	// Line 1271, Address: 0x23f260, Func Offset: 0x90
	// Line 1272, Address: 0x23f268, Func Offset: 0x98
	// Line 1273, Address: 0x23f274, Func Offset: 0xa4
	// Line 1277, Address: 0x23f280, Func Offset: 0xb0
	// Func End, Address: 0x23f294, Func Offset: 0xc4
}

// 
// Start address: 0x23f2a0
void EnemyEDWheelAdditionalDamage(void* obj)
{
	EnemyWheelWork* ew;
	EnemyBattleDamage bd;
	float vec[4];
	// Line 1281, Address: 0x23f2a0, Func Offset: 0
	// Line 1285, Address: 0x23f2b0, Func Offset: 0x10
	// Line 1286, Address: 0x23f2bc, Func Offset: 0x1c
	// Line 1287, Address: 0x23f2c8, Func Offset: 0x28
	// Line 1288, Address: 0x23f2d8, Func Offset: 0x38
	// Line 1289, Address: 0x23f2e4, Func Offset: 0x44
	// Line 1290, Address: 0x23f2e8, Func Offset: 0x48
	// Line 1291, Address: 0x23f2f4, Func Offset: 0x54
	// Line 1292, Address: 0x23f31c, Func Offset: 0x7c
	// Line 1293, Address: 0x23f33c, Func Offset: 0x9c
	// Line 1294, Address: 0x23f368, Func Offset: 0xc8
	// Func End, Address: 0x23f37c, Func Offset: 0xdc
}

