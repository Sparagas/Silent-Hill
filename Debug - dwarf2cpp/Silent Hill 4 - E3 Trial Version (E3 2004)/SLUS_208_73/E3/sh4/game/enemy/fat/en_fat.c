typedef struct sfObj;
typedef struct EnemyManageDataOne;
typedef struct _anon0;
typedef struct EnemySenseData;
typedef struct EnemyFatWork;
typedef struct EnemyFeetParameter;
typedef enum EnemyFatAnime : unsigned char;
typedef struct EventFlag;
typedef struct EnemyGhostFloatParameter;
typedef struct _anon1;
typedef enum BattleAttackKind : unsigned char;
typedef union _anon2;
typedef union _anon3;
typedef struct EnemyGhostStainParameter;
typedef struct EnemyGhostWallThroughParameter;
typedef struct EnemyGhostInWallParameter;
typedef enum EnemySenseResultType : unsigned char;
typedef enum EnemyPlayerType : unsigned char;
typedef enum EnemyManageEntryType : unsigned char;
typedef struct EnemySenseResult;
typedef struct EnemyGhostAppearFromWallParameter;
typedef enum BattleDamageType : unsigned char;
typedef enum EnemySenseType : unsigned char;
typedef struct EnemyMeasureResult;
typedef struct EnemyGhostFeetParameter;
typedef struct EnemyBattleDamage;

typedef void(*type_2)(void*, int);
typedef void(*type_5)(void*, int);
typedef int(*type_9)(void*);
typedef void(*type_10)(sfObj*);
typedef int(*type_12)(void*);
typedef void(*type_15)(sfObj*);
typedef int(*type_17)(void*);
typedef void(*type_18)(sfObj*);
typedef int(*type_23)(void*);
typedef int(*type_26)(void*);
typedef void(*type_27)(void*, int);
typedef int(*type_28)(void*);
typedef void(*type_30)(void*, int);
typedef void(*type_31)(void*, int);
typedef void(*type_33)(void*, int);
typedef void(*type_34)(void*, int);

typedef int type_0[2];
typedef int type_1[2];
typedef int type_3[2];
typedef float type_4[4];
typedef _anon3 type_6[4];
typedef float type_7[4];
typedef unsigned char type_8[320];
typedef void(*type_11)(sfObj*)[21];
typedef _anon3 type_13[256];
typedef _anon1 type_14[4];
typedef _anon2 type_16[0];
typedef short type_19[2];
typedef unsigned short type_20[2];
typedef char type_21[4];
typedef unsigned char type_22[4];
typedef float type_24[1];
typedef int type_25[1];
typedef int type_29[1];
typedef float type_32[5];

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

struct _anon0
{
	_anon2 vertex[0];
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

struct EnemyFatWork
{
	float tmp_move[4];
	float end_point[4];
	float end_move[4];
	float hitback[4];
	float rot;
	float idling_speed;
	float dash_speed;
	int on_attack;
	int on_sing;
	int singing_song;
	float song_volume;
	int song_pause;
	int down_count;
	int falling_direction;
	float timer;
	float timer2;
	float move_size;
	float movesound_timer;
	float slowly;
	EnemySenseData* player_check;
};

struct EnemyFeetParameter
{
	float leg_length;
	float foot_size;
	float foot_thickness;
	float angle_limit_h;
	float angle_limit_fh;
	float angle_limit_fvl;
	float angle_limit_fvh;
	float leg_minimum;
	float move_limit_minimum;
	float move_limit_maximum;
	float attenuation_air;
	float attenuation;
	float approach_speed;
};

enum EnemyFatAnime : unsigned char
{
	EN_FAT_ANM_NT,
	EN_FAT_ANM_NTSP,
	EN_FAT_ANM_ANT,
	EN_FAT_ANM_DMH1,
	EN_FAT_ANM_DMH2,
	EN_FAT_ANM_DMP1,
	EN_FAT_ANM_DMP2,
	EN_FAT_ANM_DMP3,
	EN_FAT_ANM_XXPS,
	EN_FAT_ANM_XXPU,
	EN_FAT_ANM_XXPD,
	EN_FAT_ANM_XXSU,
	EN_FAT_ANM_XXSD,
	EN_FAT_ANM_ROTS,
	EN_FAT_ANM_ROTU,
	EN_FAT_ANM_ROTD,
	EN_FAT_ANM_UPS,
	EN_FAT_ANM_SPH,
	EN_FAT_ANM_ATT1,
	EN_FAT_ANM_BRS1,
	EN_FAT_ANM_BRS2,
	EN_FAT_ANM_BRS3,
	EN_FAT_ANM_WA,
	EN_FAT_ANM_DNTU,
	EN_FAT_ANM_DNTD,
	EN_FAT_ANM_TDMU,
	EN_FAT_ANM_TDMD,
	EN_FAT_ANM_UPU,
	EN_FAT_ANM_UPD
};

struct EventFlag
{
	unsigned char flag[320];
};

struct EnemyGhostFloatParameter
{
	float lower_limit;
	float fall_limit;
	float rise_speed;
	float descent_speed;
	float fall_speed;
	float noise_limit;
	float noise_rate;
	float noise_t_rate;
	float noise_a_rate;
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
	float node[4];
	_anon1 data[4];
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

struct EnemyGhostStainParameter
{
	float size_w;
	float size_h;
	float appear_time;
	float spot_appear_wait_time;
	float spot_appear_time;
	float disappear_wait_time;
	float disappear_time;
};

struct EnemyGhostWallThroughParameter
{
	int enter_anime;
	float move_speed;
	float rot_limit;
	float stain_appear_range;
	float stain_disappear_range;
	float through_range;
	int enter_sound;
};

struct EnemyGhostInWallParameter
{
	float warp_rate;
	float awake_rate;
	float trap_rate;
	float move_speed;
	float target_range;
	float stain_appear_range;
	float appear_range;
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

struct EnemyGhostAppearFromWallParameter
{
	int appear_anime;
	int anime_type;
	int neutral_anime;
	int neutral_anime_valiation;
	float move_speed;
	float move_range;
	float appear_range;
	float stain_appear_range;
	float stain_disappear_range;
	float awake_rate;
	float normal_height;
	int float_start_frame;
	int appear_sound;
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
	_anon0* poly;
};

struct EnemyGhostFeetParameter
{
	int bone_name[2];
	int heel_bone_name[2];
	int toe_bone_name[2];
	int waist_bone_name;
	EnemyFeetParameter fparam;
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

int song_name[1];
EnemyGhostFeetParameter fat_feet;
EnemyGhostStainParameter fat_stain_parameter;
EnemyGhostFloatParameter fat_float_parameter;
EnemyGhostWallThroughParameter fat_into_wall_parameter;
EnemyGhostInWallParameter fat_in_wall_parameter;
EnemyGhostAppearFromWallParameter fat_from_wall_parameter;
float fat_idling_speed[5];
EventFlag event_flag;
float sg_vector_zero[4];
float sg_vector_unit_y[4];
float en_vector_unit_y_minus[4];
void(*fat_jump_table)(sfObj*)[21];
void(*EnemyEDFatRollUp)(void*, int);
int(*EnemyEDAnimeIsEnd)(void*);
int(*EnemyEDAnimeIsEndSoon)(void*);
void(*EnemyEDFatRevival)(void*, int);
int(*EnemyEDClCheckLastCollidePlayer)(void*);
int(*EnemyEDSenseTest)(void*);
void(*EnemyEDFatMissingInChase)(void*, int);
void(*EnemyEDBattleDamageReduceHP)(void*, int);
int(*EnemyEDBattleDamageCheck)(void*);
void(*EnemyEDFatAdditionalDamageDown)(void*, int);
void(*EnemyEDFatFinish)(void*, int);
int(*EnemyEDGhostCheckFinish)(void*);
void(*EnemyEDFatAdditionalDamage)(void*, int);

int can_down();
void EnemyFatConstruct(sfObj* obj);
void EnemyFatHandle(sfObj* obj);
void EnemyFatDraw(sfObj* obj);
void EnemyFatDestruct(sfObj* obj);
void EnemyFatDataPreserve(sfObj* obj);
void EnemyFatDataExtract(sfObj* obj);
void set_rot_to_player(sfObj* obj);
void EnemyFatAnimeSet(sfObj* obj, int anime);
void EnemyFatRotateControl(sfObj* obj);
void EnemyFatRecover(sfObj* obj);
void EnemyFatControl(sfObj* obj);
void EnemyFatControlInit(sfObj* obj);
int check_floor(sfObj* obj);
void EnemyFatControlFloat(sfObj* obj);
void EnemyFatControlBalloon(sfObj* obj);
void EnemyFatControlRise(sfObj* obj);
void EnemyFatControlConfront(sfObj* obj);
void EnemyFatControlIdling(sfObj* obj);
void EnemyFatControlDash(sfObj* obj);
void EnemyFatControlHurl(sfObj* obj);
void EnemyFatControlCaution(sfObj* obj);
void EnemyFatControlEscape(sfObj* obj);
void EnemyFatControlChase(sfObj* obj);
void EnemyFatControlIntoWall(sfObj* obj);
void EnemyFatControlInWall(sfObj* obj);
void EnemyFatControlFromWall(sfObj* obj);
void EnemyFatControlDamage(sfObj* obj);
void EnemyFatControlDown(sfObj* obj);
void EnemyFatControlDown2(sfObj* obj);
void EnemyFatControlExorcismDown(sfObj* obj);
void EnemyFatControlExorcismDownT(sfObj* obj);
void EnemyFatControlFinished(sfObj* obj);
void EnemyFatControlWait(sfObj* obj);
void EnemyFatSetExtentDamage(sfObj* obj);
void EnemyFatCheckExorcismDamage(sfObj* obj);
void EnemyFatSetSong(sfObj* obj);
int EnemyFatCheckSongEnd(sfObj* obj);
float EnemyFatCalcSongPos(sfObj* obj, float* pos);
void EnemyFatSetEventPlayerCheck(sfObj* obj);
void EnemyFatSetEventDamageCheck(sfObj* obj);
void EnemyEDFatRollUp(void* obj);
void EnemyEDFatRevival(void* obj);
void EnemyEDFatAdditionalDamage(void* obj);
void EnemyEDFatAdditionalDamageDown(void* obj);
void EnemyEDFatFinish(void* obj);
void EnemyEDFatMissingInChase(void* obj);

// 
// Start address: 0x22e4f0
int can_down()
{
	// Line 338, Address: 0x22e4f0, Func Offset: 0
	// Line 339, Address: 0x22e4fc, Func Offset: 0xc
	// Func End, Address: 0x22e504, Func Offset: 0x14
}

// 
// Start address: 0x22e510
void EnemyFatConstruct(sfObj* obj)
{
	EnemyFatWork* ew;
	EnemyManageEntryType etype;
	int sf;
	sfObj* tobj;
	// Line 343, Address: 0x22e510, Func Offset: 0
	// Line 348, Address: 0x22e514, Func Offset: 0x4
	// Line 343, Address: 0x22e518, Func Offset: 0x8
	// Line 348, Address: 0x22e530, Func Offset: 0x20
	// Line 353, Address: 0x22e538, Func Offset: 0x28
	// Line 355, Address: 0x22e568, Func Offset: 0x58
	// Line 356, Address: 0x22e570, Func Offset: 0x60
	// Line 360, Address: 0x22e578, Func Offset: 0x68
	// Line 363, Address: 0x22e5b0, Func Offset: 0xa0
	// Line 366, Address: 0x22e5b8, Func Offset: 0xa8
	// Line 368, Address: 0x22e5c0, Func Offset: 0xb0
	// Line 369, Address: 0x22e5cc, Func Offset: 0xbc
	// Line 373, Address: 0x22e5f8, Func Offset: 0xe8
	// Line 374, Address: 0x22e600, Func Offset: 0xf0
	// Line 377, Address: 0x22e608, Func Offset: 0xf8
	// Line 379, Address: 0x22e618, Func Offset: 0x108
	// Line 380, Address: 0x22e628, Func Offset: 0x118
	// Line 381, Address: 0x22e630, Func Offset: 0x120
	// Line 383, Address: 0x22e660, Func Offset: 0x150
	// Line 385, Address: 0x22e680, Func Offset: 0x170
	// Line 387, Address: 0x22e6a8, Func Offset: 0x198
	// Line 388, Address: 0x22e6b8, Func Offset: 0x1a8
	// Line 389, Address: 0x22e6c4, Func Offset: 0x1b4
	// Line 390, Address: 0x22e6cc, Func Offset: 0x1bc
	// Line 391, Address: 0x22e6e4, Func Offset: 0x1d4
	// Line 393, Address: 0x22e6f8, Func Offset: 0x1e8
	// Line 394, Address: 0x22e704, Func Offset: 0x1f4
	// Line 395, Address: 0x22e70c, Func Offset: 0x1fc
	// Line 396, Address: 0x22e714, Func Offset: 0x204
	// Line 397, Address: 0x22e718, Func Offset: 0x208
	// Line 398, Address: 0x22e728, Func Offset: 0x218
	// Line 399, Address: 0x22e730, Func Offset: 0x220
	// Line 400, Address: 0x22e740, Func Offset: 0x230
	// Line 402, Address: 0x22e750, Func Offset: 0x240
	// Line 403, Address: 0x22e75c, Func Offset: 0x24c
	// Line 405, Address: 0x22e768, Func Offset: 0x258
	// Line 406, Address: 0x22e770, Func Offset: 0x260
	// Line 407, Address: 0x22e79c, Func Offset: 0x28c
	// Line 408, Address: 0x22e7a0, Func Offset: 0x290
	// Line 409, Address: 0x22e7ac, Func Offset: 0x29c
	// Line 410, Address: 0x22e7b4, Func Offset: 0x2a4
	// Line 411, Address: 0x22e7b8, Func Offset: 0x2a8
	// Line 412, Address: 0x22e7c4, Func Offset: 0x2b4
	// Line 413, Address: 0x22e7d0, Func Offset: 0x2c0
	// Line 415, Address: 0x22e7d8, Func Offset: 0x2c8
	// Line 418, Address: 0x22e814, Func Offset: 0x304
	// Line 419, Address: 0x22e81c, Func Offset: 0x30c
	// Line 420, Address: 0x22e82c, Func Offset: 0x31c
	// Line 423, Address: 0x22e838, Func Offset: 0x328
	// Line 425, Address: 0x22e85c, Func Offset: 0x34c
	// Line 426, Address: 0x22e864, Func Offset: 0x354
	// Line 427, Address: 0x22e868, Func Offset: 0x358
	// Line 430, Address: 0x22e8a0, Func Offset: 0x390
	// Line 431, Address: 0x22e8ac, Func Offset: 0x39c
	// Line 432, Address: 0x22e8bc, Func Offset: 0x3ac
	// Line 435, Address: 0x22e8c8, Func Offset: 0x3b8
	// Line 436, Address: 0x22e8d8, Func Offset: 0x3c8
	// Line 437, Address: 0x22e8dc, Func Offset: 0x3cc
	// Line 440, Address: 0x22e8f0, Func Offset: 0x3e0
	// Line 438, Address: 0x22e8f4, Func Offset: 0x3e4
	// Line 440, Address: 0x22e8f8, Func Offset: 0x3e8
	// Line 441, Address: 0x22e904, Func Offset: 0x3f4
	// Func End, Address: 0x22e928, Func Offset: 0x418
}

// 
// Start address: 0x22e930
void EnemyFatHandle(sfObj* obj)
{
	// Line 445, Address: 0x22e930, Func Offset: 0
	// Line 446, Address: 0x22e934, Func Offset: 0x4
	// Line 445, Address: 0x22e938, Func Offset: 0x8
	// Line 446, Address: 0x22e940, Func Offset: 0x10
	// Line 447, Address: 0x22e950, Func Offset: 0x20
	// Line 448, Address: 0x22e958, Func Offset: 0x28
	// Line 449, Address: 0x22e960, Func Offset: 0x30
	// Line 450, Address: 0x22e968, Func Offset: 0x38
	// Line 451, Address: 0x22e970, Func Offset: 0x40
	// Line 453, Address: 0x22e984, Func Offset: 0x54
	// Line 454, Address: 0x22e98c, Func Offset: 0x5c
	// Line 455, Address: 0x22e990, Func Offset: 0x60
	// Line 456, Address: 0x22e998, Func Offset: 0x68
	// Line 457, Address: 0x22e9b0, Func Offset: 0x80
	// Line 459, Address: 0x22e9b8, Func Offset: 0x88
	// Line 460, Address: 0x22e9c0, Func Offset: 0x90
	// Line 461, Address: 0x22e9c8, Func Offset: 0x98
	// Line 463, Address: 0x22e9d0, Func Offset: 0xa0
	// Line 464, Address: 0x22e9e0, Func Offset: 0xb0
	// Line 465, Address: 0x22e9e8, Func Offset: 0xb8
	// Line 466, Address: 0x22e9f0, Func Offset: 0xc0
	// Line 468, Address: 0x22e9f8, Func Offset: 0xc8
	// Func End, Address: 0x22ea08, Func Offset: 0xd8
}

// 
// Start address: 0x22ea10
void EnemyFatDraw(sfObj* obj)
{
	// Line 472, Address: 0x22ea10, Func Offset: 0
	// Line 473, Address: 0x22ea1c, Func Offset: 0xc
	// Line 474, Address: 0x22ea2c, Func Offset: 0x1c
	// Line 475, Address: 0x22ea34, Func Offset: 0x24
	// Line 476, Address: 0x22ea38, Func Offset: 0x28
	// Func End, Address: 0x22ea48, Func Offset: 0x38
}

// 
// Start address: 0x22ea50
void EnemyFatDestruct(sfObj* obj)
{
	EnemyFatWork* ew;
	// Line 480, Address: 0x22ea50, Func Offset: 0
	// Line 483, Address: 0x22ea60, Func Offset: 0x10
	// Line 484, Address: 0x22ea78, Func Offset: 0x28
	// Line 485, Address: 0x22ea80, Func Offset: 0x30
	// Line 488, Address: 0x22ea88, Func Offset: 0x38
	// Line 490, Address: 0x22ea90, Func Offset: 0x40
	// Line 492, Address: 0x22ea9c, Func Offset: 0x4c
	// Line 493, Address: 0x22eab0, Func Offset: 0x60
	// Line 494, Address: 0x22eac8, Func Offset: 0x78
	// Line 496, Address: 0x22ead0, Func Offset: 0x80
	// Line 499, Address: 0x22eadc, Func Offset: 0x8c
	// Line 500, Address: 0x22eae4, Func Offset: 0x94
	// Line 501, Address: 0x22eaec, Func Offset: 0x9c
	// Line 503, Address: 0x22eaf0, Func Offset: 0xa0
	// Line 504, Address: 0x22eaf8, Func Offset: 0xa8
	// Line 506, Address: 0x22eb00, Func Offset: 0xb0
	// Line 508, Address: 0x22eb08, Func Offset: 0xb8
	// Line 509, Address: 0x22eb10, Func Offset: 0xc0
	// Func End, Address: 0x22eb24, Func Offset: 0xd4
}

// 
// Start address: 0x22eb30
void EnemyFatDataPreserve(sfObj* obj)
{
	EnemyFatWork* ew;
	EnemyManageDataOne* pe;
	_anon3 td;
	// Line 513, Address: 0x22eb30, Func Offset: 0
	// Line 517, Address: 0x22eb44, Func Offset: 0x14
	// Line 519, Address: 0x22eb70, Func Offset: 0x40
	// Line 520, Address: 0x22eb78, Func Offset: 0x48
	// Line 524, Address: 0x22eb80, Func Offset: 0x50
	// Line 527, Address: 0x22eb98, Func Offset: 0x68
	// Line 528, Address: 0x22eba0, Func Offset: 0x70
	// Line 529, Address: 0x22ebac, Func Offset: 0x7c
	// Line 530, Address: 0x22ebb8, Func Offset: 0x88
	// Line 531, Address: 0x22ebc4, Func Offset: 0x94
	// Line 532, Address: 0x22ebd8, Func Offset: 0xa8
	// Line 534, Address: 0x22ebe0, Func Offset: 0xb0
	// Line 535, Address: 0x22ebec, Func Offset: 0xbc
	// Line 537, Address: 0x22ebf8, Func Offset: 0xc8
	// Line 536, Address: 0x22ebfc, Func Offset: 0xcc
	// Line 537, Address: 0x22ec04, Func Offset: 0xd4
	// Line 538, Address: 0x22ec0c, Func Offset: 0xdc
	// Line 539, Address: 0x22ec10, Func Offset: 0xe0
	// Func End, Address: 0x22ec28, Func Offset: 0xf8
}

// 
// Start address: 0x22ec30
void EnemyFatDataExtract(sfObj* obj)
{
	EnemyManageDataOne* pe;
	int anime;
	float t;
	EnemyFatWork* ew;
	// Line 543, Address: 0x22ec30, Func Offset: 0
	// Line 546, Address: 0x22ec4c, Func Offset: 0x1c
	// Line 547, Address: 0x22ec60, Func Offset: 0x30
	// Line 548, Address: 0x22ec6c, Func Offset: 0x3c
	// Line 549, Address: 0x22ec78, Func Offset: 0x48
	// Line 550, Address: 0x22ec7c, Func Offset: 0x4c
	// Line 551, Address: 0x22ec94, Func Offset: 0x64
	// Line 552, Address: 0x22ec9c, Func Offset: 0x6c
	// Line 553, Address: 0x22eca8, Func Offset: 0x78
	// Line 554, Address: 0x22ecb0, Func Offset: 0x80
	// Line 556, Address: 0x22ecc8, Func Offset: 0x98
	// Line 557, Address: 0x22eccc, Func Offset: 0x9c
	// Line 559, Address: 0x22ece0, Func Offset: 0xb0
	// Line 560, Address: 0x22ecec, Func Offset: 0xbc
	// Line 561, Address: 0x22ecf8, Func Offset: 0xc8
	// Line 562, Address: 0x22ed04, Func Offset: 0xd4
	// Line 563, Address: 0x22ed0c, Func Offset: 0xdc
	// Line 564, Address: 0x22ed18, Func Offset: 0xe8
	// Line 565, Address: 0x22ed1c, Func Offset: 0xec
	// Line 567, Address: 0x22ed2c, Func Offset: 0xfc
	// Line 568, Address: 0x22ed30, Func Offset: 0x100
	// Line 571, Address: 0x22ed38, Func Offset: 0x108
	// Line 572, Address: 0x22ed44, Func Offset: 0x114
	// Func End, Address: 0x22ed64, Func Offset: 0x134
}

// 
// Start address: 0x22ed70
void set_rot_to_player(sfObj* obj)
{
	EnemyFatWork* ew;
	float rot[4];
	// Line 576, Address: 0x22ed70, Func Offset: 0
	// Line 579, Address: 0x22ed80, Func Offset: 0x10
	// Line 580, Address: 0x22ed8c, Func Offset: 0x1c
	// Line 581, Address: 0x22ed9c, Func Offset: 0x2c
	// Line 582, Address: 0x22edb0, Func Offset: 0x40
	// Line 583, Address: 0x22edbc, Func Offset: 0x4c
	// Line 584, Address: 0x22edc8, Func Offset: 0x58
	// Line 585, Address: 0x22edcc, Func Offset: 0x5c
	// Func End, Address: 0x22ede0, Func Offset: 0x70
}

// 
// Start address: 0x22ede0
void EnemyFatAnimeSet(sfObj* obj, int anime)
{
	// Line 589, Address: 0x22ede0, Func Offset: 0
	// Line 590, Address: 0x22ede4, Func Offset: 0x4
	// Line 589, Address: 0x22ede8, Func Offset: 0x8
	// Line 590, Address: 0x22edf8, Func Offset: 0x18
	// Line 592, Address: 0x22eea8, Func Offset: 0xc8
	// Line 593, Address: 0x22eeb0, Func Offset: 0xd0
	// Line 594, Address: 0x22eebc, Func Offset: 0xdc
	// Line 601, Address: 0x22eec4, Func Offset: 0xe4
	// Line 602, Address: 0x22eec8, Func Offset: 0xe8
	// Line 603, Address: 0x22eed8, Func Offset: 0xf8
	// Line 606, Address: 0x22eefc, Func Offset: 0x11c
	// Line 607, Address: 0x22ef04, Func Offset: 0x124
	// Line 608, Address: 0x22ef08, Func Offset: 0x128
	// Line 609, Address: 0x22ef20, Func Offset: 0x140
	// Line 613, Address: 0x22ef28, Func Offset: 0x148
	// Line 615, Address: 0x22ef50, Func Offset: 0x170
	// Line 616, Address: 0x22ef64, Func Offset: 0x184
	// Line 620, Address: 0x22ef6c, Func Offset: 0x18c
	// Line 621, Address: 0x22ef70, Func Offset: 0x190
	// Line 622, Address: 0x22ef80, Func Offset: 0x1a0
	// Line 624, Address: 0x22ef98, Func Offset: 0x1b8
	// Line 629, Address: 0x22efa0, Func Offset: 0x1c0
	// Line 630, Address: 0x22efb4, Func Offset: 0x1d4
	// Line 631, Address: 0x22efbc, Func Offset: 0x1dc
	// Line 632, Address: 0x22efc0, Func Offset: 0x1e0
	// Line 633, Address: 0x22efc8, Func Offset: 0x1e8
	// Func End, Address: 0x22efdc, Func Offset: 0x1fc
}

// 
// Start address: 0x22efe0
void EnemyFatRotateControl(sfObj* obj)
{
	EnemyFatWork* ew;
	float* pos;
	float move[4];
	float tpos[4];
	float vec[4];
	float rot[4];
	float trot[4];
	float frot[4];
	float frotr[4];
	float d;
	float dt;
	float dtr;
	int m;
	EnemyMeasureResult mres;
	// Line 637, Address: 0x22efe0, Func Offset: 0
	// Line 644, Address: 0x22f000, Func Offset: 0x20
	// Line 645, Address: 0x22f008, Func Offset: 0x28
	// Line 646, Address: 0x22f010, Func Offset: 0x30
	// Line 647, Address: 0x22f01c, Func Offset: 0x3c
	// Line 648, Address: 0x22f028, Func Offset: 0x48
	// Line 649, Address: 0x22f034, Func Offset: 0x54
	// Line 650, Address: 0x22f040, Func Offset: 0x60
	// Line 651, Address: 0x22f054, Func Offset: 0x74
	// Line 653, Address: 0x22f060, Func Offset: 0x80
	// Line 657, Address: 0x22f090, Func Offset: 0xb0
	// Line 658, Address: 0x22f0a4, Func Offset: 0xc4
	// Line 659, Address: 0x22f0c4, Func Offset: 0xe4
	// Line 660, Address: 0x22f0fc, Func Offset: 0x11c
	// Line 661, Address: 0x22f11c, Func Offset: 0x13c
	// Line 662, Address: 0x22f120, Func Offset: 0x140
	// Line 663, Address: 0x22f140, Func Offset: 0x160
	// Line 664, Address: 0x22f154, Func Offset: 0x174
	// Line 665, Address: 0x22f164, Func Offset: 0x184
	// Line 666, Address: 0x22f184, Func Offset: 0x1a4
	// Line 667, Address: 0x22f1a0, Func Offset: 0x1c0
	// Line 668, Address: 0x22f1bc, Func Offset: 0x1dc
	// Line 669, Address: 0x22f1e0, Func Offset: 0x200
	// Line 670, Address: 0x22f200, Func Offset: 0x220
	// Line 671, Address: 0x22f220, Func Offset: 0x240
	// Line 673, Address: 0x22f228, Func Offset: 0x248
	// Line 674, Address: 0x22f248, Func Offset: 0x268
	// Line 675, Address: 0x22f264, Func Offset: 0x284
	// Line 676, Address: 0x22f288, Func Offset: 0x2a8
	// Line 677, Address: 0x22f2a8, Func Offset: 0x2c8
	// Line 678, Address: 0x22f2cc, Func Offset: 0x2ec
	// Line 679, Address: 0x22f2d4, Func Offset: 0x2f4
	// Line 680, Address: 0x22f2d8, Func Offset: 0x2f8
	// Line 681, Address: 0x22f2f8, Func Offset: 0x318
	// Line 682, Address: 0x22f314, Func Offset: 0x334
	// Line 683, Address: 0x22f338, Func Offset: 0x358
	// Line 684, Address: 0x22f358, Func Offset: 0x378
	// Line 686, Address: 0x22f380, Func Offset: 0x3a0
	// Line 690, Address: 0x22f388, Func Offset: 0x3a8
	// Line 691, Address: 0x22f39c, Func Offset: 0x3bc
	// Line 692, Address: 0x22f3a8, Func Offset: 0x3c8
	// Line 693, Address: 0x22f3b0, Func Offset: 0x3d0
	// Line 694, Address: 0x22f3c4, Func Offset: 0x3e4
	// Line 695, Address: 0x22f3c8, Func Offset: 0x3e8
	// Line 696, Address: 0x22f3d8, Func Offset: 0x3f8
	// Line 699, Address: 0x22f3f8, Func Offset: 0x418
	// Line 701, Address: 0x22f400, Func Offset: 0x420
	// Line 703, Address: 0x22f41c, Func Offset: 0x43c
	// Line 706, Address: 0x22f42c, Func Offset: 0x44c
	// Line 707, Address: 0x22f430, Func Offset: 0x450
	// Line 708, Address: 0x22f43c, Func Offset: 0x45c
	// Line 709, Address: 0x22f440, Func Offset: 0x460
	// Line 708, Address: 0x22f444, Func Offset: 0x464
	// Line 709, Address: 0x22f448, Func Offset: 0x468
	// Line 710, Address: 0x22f450, Func Offset: 0x470
	// Line 709, Address: 0x22f454, Func Offset: 0x474
	// Line 710, Address: 0x22f458, Func Offset: 0x478
	// Line 711, Address: 0x22f470, Func Offset: 0x490
	// Line 710, Address: 0x22f474, Func Offset: 0x494
	// Line 711, Address: 0x22f478, Func Offset: 0x498
	// Line 712, Address: 0x22f494, Func Offset: 0x4b4
	// Line 713, Address: 0x22f4a0, Func Offset: 0x4c0
	// Line 714, Address: 0x22f4ac, Func Offset: 0x4cc
	// Line 715, Address: 0x22f4b4, Func Offset: 0x4d4
	// Line 717, Address: 0x22f4c8, Func Offset: 0x4e8
	// Line 720, Address: 0x22f4d0, Func Offset: 0x4f0
	// Line 723, Address: 0x22f4d8, Func Offset: 0x4f8
	// Line 724, Address: 0x22f4f0, Func Offset: 0x510
	// Line 725, Address: 0x22f4f8, Func Offset: 0x518
	// Line 726, Address: 0x22f508, Func Offset: 0x528
	// Line 728, Address: 0x22f510, Func Offset: 0x530
	// Line 730, Address: 0x22f520, Func Offset: 0x540
	// Line 731, Address: 0x22f544, Func Offset: 0x564
	// Line 732, Address: 0x22f564, Func Offset: 0x584
	// Line 733, Address: 0x22f580, Func Offset: 0x5a0
	// Line 734, Address: 0x22f588, Func Offset: 0x5a8
	// Line 733, Address: 0x22f58c, Func Offset: 0x5ac
	// Line 734, Address: 0x22f590, Func Offset: 0x5b0
	// Line 738, Address: 0x22f5a8, Func Offset: 0x5c8
	// Line 739, Address: 0x22f5b8, Func Offset: 0x5d8
	// Line 740, Address: 0x22f5c4, Func Offset: 0x5e4
	// Line 741, Address: 0x22f5d4, Func Offset: 0x5f4
	// Line 743, Address: 0x22f5f4, Func Offset: 0x614
	// Line 744, Address: 0x22f5f8, Func Offset: 0x618
	// Line 745, Address: 0x22f604, Func Offset: 0x624
	// Line 747, Address: 0x22f624, Func Offset: 0x644
	// Line 748, Address: 0x22f630, Func Offset: 0x650
	// Line 749, Address: 0x22f64c, Func Offset: 0x66c
	// Line 751, Address: 0x22f670, Func Offset: 0x690
	// Line 752, Address: 0x22f67c, Func Offset: 0x69c
	// Func End, Address: 0x22f6a4, Func Offset: 0x6c4
}

// 
// Start address: 0x22f6b0
void EnemyFatRecover(sfObj* obj)
{
	EnemyFatWork* ew;
	float heal;
	float dt;
	// Line 775, Address: 0x22f6b0, Func Offset: 0
	// Line 778, Address: 0x22f6c4, Func Offset: 0x14
	// Line 779, Address: 0x22f6d0, Func Offset: 0x20
	// Line 783, Address: 0x22f70c, Func Offset: 0x5c
	// Line 784, Address: 0x22f710, Func Offset: 0x60
	// Line 786, Address: 0x22f718, Func Offset: 0x68
	// Line 787, Address: 0x22f724, Func Offset: 0x74
	// Line 788, Address: 0x22f734, Func Offset: 0x84
	// Line 789, Address: 0x22f750, Func Offset: 0xa0
	// Line 790, Address: 0x22f760, Func Offset: 0xb0
	// Line 791, Address: 0x22f768, Func Offset: 0xb8
	// Line 792, Address: 0x22f774, Func Offset: 0xc4
	// Line 793, Address: 0x22f778, Func Offset: 0xc8
	// Func End, Address: 0x22f790, Func Offset: 0xe0
}

// 
// Start address: 0x22f790
void EnemyFatControl(sfObj* obj)
{
	EnemyFatWork* ew;
	float dt;
	int step;
	float s;
	float spos[4];
	// Line 822, Address: 0x22f790, Func Offset: 0
	// Line 826, Address: 0x22f7a8, Func Offset: 0x18
	// Line 827, Address: 0x22f7b0, Func Offset: 0x20
	// Line 835, Address: 0x22f7bc, Func Offset: 0x2c
	// Line 836, Address: 0x22f7c4, Func Offset: 0x34
	// Line 837, Address: 0x22f7cc, Func Offset: 0x3c
	// Line 840, Address: 0x22f7d4, Func Offset: 0x44
	// Line 841, Address: 0x22f7dc, Func Offset: 0x4c
	// Line 842, Address: 0x22f7ec, Func Offset: 0x5c
	// Line 843, Address: 0x22f7f4, Func Offset: 0x64
	// Line 844, Address: 0x22f80c, Func Offset: 0x7c
	// Line 845, Address: 0x22f824, Func Offset: 0x94
	// Line 849, Address: 0x22f830, Func Offset: 0xa0
	// Line 850, Address: 0x22f838, Func Offset: 0xa8
	// Line 852, Address: 0x22f868, Func Offset: 0xd8
	// Line 853, Address: 0x22f874, Func Offset: 0xe4
	// Line 856, Address: 0x22f880, Func Offset: 0xf0
	// Line 857, Address: 0x22f88c, Func Offset: 0xfc
	// Line 858, Address: 0x22f894, Func Offset: 0x104
	// Line 859, Address: 0x22f898, Func Offset: 0x108
	// Line 860, Address: 0x22f8a4, Func Offset: 0x114
	// Line 861, Address: 0x22f8b4, Func Offset: 0x124
	// Line 862, Address: 0x22f8bc, Func Offset: 0x12c
	// Line 864, Address: 0x22f8c0, Func Offset: 0x130
	// Line 865, Address: 0x22f8c8, Func Offset: 0x138
	// Line 870, Address: 0x22f8d0, Func Offset: 0x140
	// Line 871, Address: 0x22f8e0, Func Offset: 0x150
	// Line 872, Address: 0x22f8f4, Func Offset: 0x164
	// Line 873, Address: 0x22f908, Func Offset: 0x178
	// Line 874, Address: 0x22f910, Func Offset: 0x180
	// Line 875, Address: 0x22f914, Func Offset: 0x184
	// Line 877, Address: 0x22f920, Func Offset: 0x190
	// Line 878, Address: 0x22f92c, Func Offset: 0x19c
	// Line 880, Address: 0x22f93c, Func Offset: 0x1ac
	// Line 881, Address: 0x22f940, Func Offset: 0x1b0
	// Line 887, Address: 0x22f97c, Func Offset: 0x1ec
	// Line 888, Address: 0x22f980, Func Offset: 0x1f0
	// Line 889, Address: 0x22f99c, Func Offset: 0x20c
	// Line 890, Address: 0x22f9a8, Func Offset: 0x218
	// Line 895, Address: 0x22f9c8, Func Offset: 0x238
	// Line 897, Address: 0x22f9e4, Func Offset: 0x254
	// Line 903, Address: 0x22f9ec, Func Offset: 0x25c
	// Func End, Address: 0x22fa08, Func Offset: 0x278
}

// 
// Start address: 0x22fa10
void EnemyFatControlInit(sfObj* obj)
{
	float* pos;
	EnemyMeasureResult mres;
	// Line 907, Address: 0x22fa10, Func Offset: 0
	// Line 911, Address: 0x22fa20, Func Offset: 0x10
	// Line 912, Address: 0x22fa28, Func Offset: 0x18
	// Line 913, Address: 0x22fa34, Func Offset: 0x24
	// Line 914, Address: 0x22fa40, Func Offset: 0x30
	// Line 915, Address: 0x22fa50, Func Offset: 0x40
	// Line 916, Address: 0x22fa58, Func Offset: 0x48
	// Line 918, Address: 0x22fa60, Func Offset: 0x50
	// Line 919, Address: 0x22fa74, Func Offset: 0x64
	// Line 920, Address: 0x22fa98, Func Offset: 0x88
	// Line 921, Address: 0x22faa8, Func Offset: 0x98
	// Line 922, Address: 0x22fab4, Func Offset: 0xa4
	// Line 924, Address: 0x22fabc, Func Offset: 0xac
	// Line 925, Address: 0x22fac0, Func Offset: 0xb0
	// Line 926, Address: 0x22facc, Func Offset: 0xbc
	// Line 927, Address: 0x22fad8, Func Offset: 0xc8
	// Line 928, Address: 0x22fae4, Func Offset: 0xd4
	// Func End, Address: 0x22fafc, Func Offset: 0xec
}

// 
// Start address: 0x22fb00
int check_floor(sfObj* obj)
{
	EnemyMeasureResult mres;
	// Line 932, Address: 0x22fb00, Func Offset: 0
	// Line 934, Address: 0x22fb0c, Func Offset: 0xc
	// Line 937, Address: 0x22fb50, Func Offset: 0x50
	// Line 939, Address: 0x22fb58, Func Offset: 0x58
	// Line 940, Address: 0x22fb60, Func Offset: 0x60
	// Func End, Address: 0x22fb6c, Func Offset: 0x6c
}

// 
// Start address: 0x22fb70
void EnemyFatControlFloat(sfObj* obj)
{
	EnemyFatWork* ew;
	float* pos;
	float* ppos;
	float* target;
	float tpos[4];
	float vec[4];
	float a;
	float d;
	float dt;
	// Line 944, Address: 0x22fb70, Func Offset: 0
	// Line 950, Address: 0x22fb94, Func Offset: 0x24
	// Line 951, Address: 0x22fba0, Func Offset: 0x30
	// Line 952, Address: 0x22fbac, Func Offset: 0x3c
	// Line 953, Address: 0x22fbb8, Func Offset: 0x48
	// Line 954, Address: 0x22fbc0, Func Offset: 0x50
	// Line 955, Address: 0x22fbcc, Func Offset: 0x5c
	// Line 956, Address: 0x22fc04, Func Offset: 0x94
	// Line 958, Address: 0x22fc08, Func Offset: 0x98
	// Line 959, Address: 0x22fc14, Func Offset: 0xa4
	// Line 960, Address: 0x22fc20, Func Offset: 0xb0
	// Line 961, Address: 0x22fc2c, Func Offset: 0xbc
	// Line 962, Address: 0x22fc38, Func Offset: 0xc8
	// Line 963, Address: 0x22fc44, Func Offset: 0xd4
	// Line 964, Address: 0x22fc50, Func Offset: 0xe0
	// Line 965, Address: 0x22fc64, Func Offset: 0xf4
	// Line 966, Address: 0x22fc68, Func Offset: 0xf8
	// Line 968, Address: 0x22fc74, Func Offset: 0x104
	// Line 969, Address: 0x22fc78, Func Offset: 0x108
	// Line 970, Address: 0x22fc8c, Func Offset: 0x11c
	// Line 971, Address: 0x22fc94, Func Offset: 0x124
	// Line 972, Address: 0x22fc9c, Func Offset: 0x12c
	// Line 973, Address: 0x22fca0, Func Offset: 0x130
	// Line 974, Address: 0x22fcc8, Func Offset: 0x158
	// Line 976, Address: 0x22fcd0, Func Offset: 0x160
	// Line 975, Address: 0x22fcd4, Func Offset: 0x164
	// Line 976, Address: 0x22fcd8, Func Offset: 0x168
	// Line 978, Address: 0x22fd04, Func Offset: 0x194
	// Line 979, Address: 0x22fd0c, Func Offset: 0x19c
	// Line 982, Address: 0x22fd14, Func Offset: 0x1a4
	// Line 983, Address: 0x22fd18, Func Offset: 0x1a8
	// Line 984, Address: 0x22fd28, Func Offset: 0x1b8
	// Line 986, Address: 0x22fd44, Func Offset: 0x1d4
	// Line 987, Address: 0x22fd5c, Func Offset: 0x1ec
	// Line 988, Address: 0x22fd64, Func Offset: 0x1f4
	// Line 990, Address: 0x22fd88, Func Offset: 0x218
	// Line 991, Address: 0x22fda4, Func Offset: 0x234
	// Line 992, Address: 0x22fda8, Func Offset: 0x238
	// Line 993, Address: 0x22fdc0, Func Offset: 0x250
	// Line 994, Address: 0x22fdd4, Func Offset: 0x264
	// Line 995, Address: 0x22fe04, Func Offset: 0x294
	// Line 996, Address: 0x22fe0c, Func Offset: 0x29c
	// Line 997, Address: 0x22fe14, Func Offset: 0x2a4
	// Line 998, Address: 0x22fe18, Func Offset: 0x2a8
	// Line 999, Address: 0x22fe3c, Func Offset: 0x2cc
	// Line 1000, Address: 0x22fe44, Func Offset: 0x2d4
	// Line 1001, Address: 0x22fe50, Func Offset: 0x2e0
	// Line 1002, Address: 0x22fe5c, Func Offset: 0x2ec
	// Line 1003, Address: 0x22fe70, Func Offset: 0x300
	// Line 1002, Address: 0x22fe74, Func Offset: 0x304
	// Line 1003, Address: 0x22fe78, Func Offset: 0x308
	// Line 1002, Address: 0x22fe7c, Func Offset: 0x30c
	// Line 1003, Address: 0x22fe84, Func Offset: 0x314
	// Line 1004, Address: 0x22fe8c, Func Offset: 0x31c
	// Line 1005, Address: 0x22fe94, Func Offset: 0x324
	// Line 1006, Address: 0x22fe98, Func Offset: 0x328
	// Line 1007, Address: 0x22febc, Func Offset: 0x34c
	// Line 1008, Address: 0x22fec4, Func Offset: 0x354
	// Line 1010, Address: 0x22fecc, Func Offset: 0x35c
	// Line 1011, Address: 0x22fed0, Func Offset: 0x360
	// Line 1012, Address: 0x22fef8, Func Offset: 0x388
	// Line 1013, Address: 0x22fefc, Func Offset: 0x38c
	// Line 1014, Address: 0x22ff04, Func Offset: 0x394
	// Line 1015, Address: 0x22ff0c, Func Offset: 0x39c
	// Line 1016, Address: 0x22ff10, Func Offset: 0x3a0
	// Line 1018, Address: 0x22ff34, Func Offset: 0x3c4
	// Line 1019, Address: 0x22ff50, Func Offset: 0x3e0
	// Line 1020, Address: 0x22ff58, Func Offset: 0x3e8
	// Line 1021, Address: 0x22ff78, Func Offset: 0x408
	// Line 1022, Address: 0x22ff84, Func Offset: 0x414
	// Line 1023, Address: 0x22ffa8, Func Offset: 0x438
	// Line 1024, Address: 0x22ffc0, Func Offset: 0x450
	// Line 1025, Address: 0x22ffcc, Func Offset: 0x45c
	// Line 1026, Address: 0x22ffd8, Func Offset: 0x468
	// Line 1025, Address: 0x22ffdc, Func Offset: 0x46c
	// Line 1026, Address: 0x22fff0, Func Offset: 0x480
	// Line 1027, Address: 0x230010, Func Offset: 0x4a0
	// Line 1028, Address: 0x23001c, Func Offset: 0x4ac
	// Line 1031, Address: 0x230060, Func Offset: 0x4f0
	// Line 1033, Address: 0x230068, Func Offset: 0x4f8
	// Line 1035, Address: 0x230070, Func Offset: 0x500
	// Line 1037, Address: 0x230090, Func Offset: 0x520
	// Line 1038, Address: 0x230098, Func Offset: 0x528
	// Line 1039, Address: 0x2300b8, Func Offset: 0x548
	// Line 1040, Address: 0x2300c0, Func Offset: 0x550
	// Line 1041, Address: 0x2300f0, Func Offset: 0x580
	// Line 1042, Address: 0x2300fc, Func Offset: 0x58c
	// Line 1043, Address: 0x230108, Func Offset: 0x598
	// Line 1044, Address: 0x230114, Func Offset: 0x5a4
	// Line 1045, Address: 0x230120, Func Offset: 0x5b0
	// Line 1049, Address: 0x230128, Func Offset: 0x5b8
	// Line 1050, Address: 0x230130, Func Offset: 0x5c0
	// Line 1051, Address: 0x230140, Func Offset: 0x5d0
	// Line 1052, Address: 0x23015c, Func Offset: 0x5ec
	// Line 1053, Address: 0x230168, Func Offset: 0x5f8
	// Line 1054, Address: 0x23017c, Func Offset: 0x60c
	// Line 1055, Address: 0x230180, Func Offset: 0x610
	// Func End, Address: 0x2301a8, Func Offset: 0x638
}

// 
// Start address: 0x2301b0
void EnemyFatControlBalloon(sfObj* obj)
{
	EnemyFatWork* ew;
	float* pos;
	float* target;
	float d;
	float dt;
	EnemyMeasureResult mres;
	// Line 1059, Address: 0x2301b0, Func Offset: 0
	// Line 1064, Address: 0x2301d0, Func Offset: 0x20
	// Line 1065, Address: 0x2301dc, Func Offset: 0x2c
	// Line 1066, Address: 0x2301e8, Func Offset: 0x38
	// Line 1067, Address: 0x2301f0, Func Offset: 0x40
	// Line 1068, Address: 0x2301fc, Func Offset: 0x4c
	// Line 1070, Address: 0x230230, Func Offset: 0x80
	// Line 1071, Address: 0x230238, Func Offset: 0x88
	// Line 1072, Address: 0x230244, Func Offset: 0x94
	// Line 1073, Address: 0x230250, Func Offset: 0xa0
	// Line 1074, Address: 0x230264, Func Offset: 0xb4
	// Line 1073, Address: 0x230268, Func Offset: 0xb8
	// Line 1074, Address: 0x230278, Func Offset: 0xc8
	// Line 1076, Address: 0x23028c, Func Offset: 0xdc
	// Line 1077, Address: 0x230294, Func Offset: 0xe4
	// Line 1078, Address: 0x2302a0, Func Offset: 0xf0
	// Line 1080, Address: 0x2302a8, Func Offset: 0xf8
	// Line 1081, Address: 0x2302b0, Func Offset: 0x100
	// Line 1083, Address: 0x2302c4, Func Offset: 0x114
	// Line 1084, Address: 0x2302cc, Func Offset: 0x11c
	// Line 1085, Address: 0x2302d4, Func Offset: 0x124
	// Line 1086, Address: 0x2302d8, Func Offset: 0x128
	// Line 1087, Address: 0x2302e4, Func Offset: 0x134
	// Line 1088, Address: 0x2302f0, Func Offset: 0x140
	// Line 1089, Address: 0x2302fc, Func Offset: 0x14c
	// Line 1091, Address: 0x230304, Func Offset: 0x154
	// Line 1092, Address: 0x230308, Func Offset: 0x158
	// Line 1094, Address: 0x23031c, Func Offset: 0x16c
	// Line 1095, Address: 0x230324, Func Offset: 0x174
	// Line 1096, Address: 0x230330, Func Offset: 0x180
	// Line 1098, Address: 0x230338, Func Offset: 0x188
	// Line 1099, Address: 0x230344, Func Offset: 0x194
	// Line 1100, Address: 0x230354, Func Offset: 0x1a4
	// Line 1101, Address: 0x23035c, Func Offset: 0x1ac
	// Line 1103, Address: 0x230364, Func Offset: 0x1b4
	// Line 1104, Address: 0x23036c, Func Offset: 0x1bc
	// Line 1105, Address: 0x230370, Func Offset: 0x1c0
	// Line 1106, Address: 0x2303a0, Func Offset: 0x1f0
	// Line 1107, Address: 0x2303ac, Func Offset: 0x1fc
	// Line 1108, Address: 0x2303b8, Func Offset: 0x208
	// Line 1110, Address: 0x2303c0, Func Offset: 0x210
	// Line 1111, Address: 0x2303cc, Func Offset: 0x21c
	// Line 1112, Address: 0x2303d8, Func Offset: 0x228
	// Line 1111, Address: 0x2303dc, Func Offset: 0x22c
	// Line 1112, Address: 0x2303e0, Func Offset: 0x230
	// Line 1113, Address: 0x2303f8, Func Offset: 0x248
	// Line 1116, Address: 0x230420, Func Offset: 0x270
	// Line 1118, Address: 0x230438, Func Offset: 0x288
	// Line 1119, Address: 0x23043c, Func Offset: 0x28c
	// Line 1118, Address: 0x23044c, Func Offset: 0x29c
	// Line 1119, Address: 0x230450, Func Offset: 0x2a0
	// Line 1121, Address: 0x230458, Func Offset: 0x2a8
	// Line 1125, Address: 0x23046c, Func Offset: 0x2bc
	// Line 1126, Address: 0x230474, Func Offset: 0x2c4
	// Line 1127, Address: 0x230478, Func Offset: 0x2c8
	// Line 1128, Address: 0x230488, Func Offset: 0x2d8
	// Line 1130, Address: 0x2304a8, Func Offset: 0x2f8
	// Line 1131, Address: 0x2304b0, Func Offset: 0x300
	// Line 1134, Address: 0x2304dc, Func Offset: 0x32c
	// Line 1137, Address: 0x230538, Func Offset: 0x388
	// Line 1138, Address: 0x230540, Func Offset: 0x390
	// Line 1139, Address: 0x230548, Func Offset: 0x398
	// Line 1141, Address: 0x230554, Func Offset: 0x3a4
	// Line 1142, Address: 0x230560, Func Offset: 0x3b0
	// Line 1146, Address: 0x23056c, Func Offset: 0x3bc
	// Line 1147, Address: 0x230570, Func Offset: 0x3c0
	// Func End, Address: 0x230594, Func Offset: 0x3e4
}

// 
// Start address: 0x2305a0
void EnemyFatControlRise(sfObj* obj)
{
	EnemyFatWork* ew;
	float* pos;
	float* ppos;
	float dt;
	float theight;
	// Line 1151, Address: 0x2305a0, Func Offset: 0
	// Line 1155, Address: 0x2305c0, Func Offset: 0x20
	// Line 1156, Address: 0x2305cc, Func Offset: 0x2c
	// Line 1157, Address: 0x2305d8, Func Offset: 0x38
	// Line 1158, Address: 0x2305e0, Func Offset: 0x40
	// Line 1159, Address: 0x2305e8, Func Offset: 0x48
	// Line 1160, Address: 0x2305fc, Func Offset: 0x5c
	// Line 1158, Address: 0x230600, Func Offset: 0x60
	// Line 1159, Address: 0x230604, Func Offset: 0x64
	// Line 1160, Address: 0x230610, Func Offset: 0x70
	// Line 1161, Address: 0x23063c, Func Offset: 0x9c
	// Line 1162, Address: 0x230640, Func Offset: 0xa0
	// Line 1163, Address: 0x23064c, Func Offset: 0xac
	// Line 1164, Address: 0x230658, Func Offset: 0xb8
	// Line 1165, Address: 0x23066c, Func Offset: 0xcc
	// Line 1166, Address: 0x230680, Func Offset: 0xe0
	// Line 1167, Address: 0x230688, Func Offset: 0xe8
	// Line 1168, Address: 0x230690, Func Offset: 0xf0
	// Line 1169, Address: 0x23069c, Func Offset: 0xfc
	// Line 1170, Address: 0x2306a0, Func Offset: 0x100
	// Line 1171, Address: 0x2306ac, Func Offset: 0x10c
	// Line 1172, Address: 0x2306b4, Func Offset: 0x114
	// Line 1173, Address: 0x2306b8, Func Offset: 0x118
	// Line 1174, Address: 0x2306d4, Func Offset: 0x134
	// Line 1175, Address: 0x2306dc, Func Offset: 0x13c
	// Line 1176, Address: 0x2306e8, Func Offset: 0x148
	// Line 1178, Address: 0x2306f0, Func Offset: 0x150
	// Line 1179, Address: 0x2306f8, Func Offset: 0x158
	// Line 1180, Address: 0x230700, Func Offset: 0x160
	// Line 1182, Address: 0x230708, Func Offset: 0x168
	// Line 1183, Address: 0x23071c, Func Offset: 0x17c
	// Line 1184, Address: 0x23072c, Func Offset: 0x18c
	// Line 1186, Address: 0x230734, Func Offset: 0x194
	// Line 1187, Address: 0x23075c, Func Offset: 0x1bc
	// Line 1188, Address: 0x230780, Func Offset: 0x1e0
	// Line 1189, Address: 0x230788, Func Offset: 0x1e8
	// Line 1192, Address: 0x230790, Func Offset: 0x1f0
	// Line 1194, Address: 0x230798, Func Offset: 0x1f8
	// Line 1195, Address: 0x2307ac, Func Offset: 0x20c
	// Line 1196, Address: 0x2307bc, Func Offset: 0x21c
	// Line 1198, Address: 0x2307c4, Func Offset: 0x224
	// Line 1199, Address: 0x2307d0, Func Offset: 0x230
	// Line 1200, Address: 0x2307f4, Func Offset: 0x254
	// Line 1204, Address: 0x2307fc, Func Offset: 0x25c
	// Line 1205, Address: 0x230800, Func Offset: 0x260
	// Line 1206, Address: 0x23080c, Func Offset: 0x26c
	// Line 1209, Address: 0x230838, Func Offset: 0x298
	// Func End, Address: 0x23085c, Func Offset: 0x2bc
}

// 
// Start address: 0x230860
void EnemyFatControlConfront(sfObj* obj)
{
	EnemyFatWork* ew;
	float* pos;
	float* ppos;
	float vec[4];
	float a;
	float d;
	float dp;
	float dt;
	EnemyMeasureResult mres;
	float tpos[4];
	EnemyMeasureResult mres;
	// Line 1213, Address: 0x230860, Func Offset: 0
	// Line 1218, Address: 0x230888, Func Offset: 0x28
	// Line 1219, Address: 0x230894, Func Offset: 0x34
	// Line 1220, Address: 0x2308a0, Func Offset: 0x40
	// Line 1221, Address: 0x2308a8, Func Offset: 0x48
	// Line 1222, Address: 0x2308b4, Func Offset: 0x54
	// Line 1225, Address: 0x2308d8, Func Offset: 0x78
	// Line 1226, Address: 0x2308e4, Func Offset: 0x84
	// Line 1227, Address: 0x2308f0, Func Offset: 0x90
	// Line 1228, Address: 0x2308fc, Func Offset: 0x9c
	// Line 1229, Address: 0x230908, Func Offset: 0xa8
	// Line 1230, Address: 0x230914, Func Offset: 0xb4
	// Line 1231, Address: 0x230920, Func Offset: 0xc0
	// Line 1232, Address: 0x23093c, Func Offset: 0xdc
	// Line 1234, Address: 0x230940, Func Offset: 0xe0
	// Line 1236, Address: 0x23094c, Func Offset: 0xec
	// Line 1238, Address: 0x230950, Func Offset: 0xf0
	// Line 1240, Address: 0x23095c, Func Offset: 0xfc
	// Line 1239, Address: 0x230960, Func Offset: 0x100
	// Line 1240, Address: 0x23096c, Func Offset: 0x10c
	// Line 1239, Address: 0x230970, Func Offset: 0x110
	// Line 1240, Address: 0x230974, Func Offset: 0x114
	// Line 1243, Address: 0x2309a4, Func Offset: 0x144
	// Line 1245, Address: 0x2309c4, Func Offset: 0x164
	// Line 1247, Address: 0x2309cc, Func Offset: 0x16c
	// Line 1248, Address: 0x2309d0, Func Offset: 0x170
	// Line 1249, Address: 0x2309ec, Func Offset: 0x18c
	// Line 1252, Address: 0x230a08, Func Offset: 0x1a8
	// Line 1255, Address: 0x230a10, Func Offset: 0x1b0
	// Line 1256, Address: 0x230a24, Func Offset: 0x1c4
	// Line 1257, Address: 0x230a30, Func Offset: 0x1d0
	// Line 1258, Address: 0x230a38, Func Offset: 0x1d8
	// Line 1259, Address: 0x230a44, Func Offset: 0x1e4
	// Line 1260, Address: 0x230a48, Func Offset: 0x1e8
	// Line 1263, Address: 0x230a70, Func Offset: 0x210
	// Line 1264, Address: 0x230a8c, Func Offset: 0x22c
	// Line 1265, Address: 0x230ab4, Func Offset: 0x254
	// Line 1266, Address: 0x230ab8, Func Offset: 0x258
	// Line 1267, Address: 0x230ac4, Func Offset: 0x264
	// Line 1266, Address: 0x230ac8, Func Offset: 0x268
	// Line 1267, Address: 0x230acc, Func Offset: 0x26c
	// Line 1268, Address: 0x230ae8, Func Offset: 0x288
	// Line 1269, Address: 0x230af4, Func Offset: 0x294
	// Line 1270, Address: 0x230b0c, Func Offset: 0x2ac
	// Line 1271, Address: 0x230b14, Func Offset: 0x2b4
	// Line 1272, Address: 0x230b20, Func Offset: 0x2c0
	// Line 1273, Address: 0x230b30, Func Offset: 0x2d0
	// Line 1274, Address: 0x230b40, Func Offset: 0x2e0
	// Line 1277, Address: 0x230b50, Func Offset: 0x2f0
	// Line 1278, Address: 0x230b58, Func Offset: 0x2f8
	// Line 1277, Address: 0x230b5c, Func Offset: 0x2fc
	// Line 1278, Address: 0x230b78, Func Offset: 0x318
	// Line 1279, Address: 0x230b98, Func Offset: 0x338
	// Line 1280, Address: 0x230ba4, Func Offset: 0x344
	// Line 1281, Address: 0x230bac, Func Offset: 0x34c
	// Line 1282, Address: 0x230bbc, Func Offset: 0x35c
	// Line 1284, Address: 0x230bdc, Func Offset: 0x37c
	// Line 1285, Address: 0x230bf0, Func Offset: 0x390
	// Line 1286, Address: 0x230bfc, Func Offset: 0x39c
	// Line 1289, Address: 0x230c08, Func Offset: 0x3a8
	// Line 1291, Address: 0x230c10, Func Offset: 0x3b0
	// Line 1292, Address: 0x230c24, Func Offset: 0x3c4
	// Line 1293, Address: 0x230c30, Func Offset: 0x3d0
	// Line 1294, Address: 0x230c38, Func Offset: 0x3d8
	// Line 1296, Address: 0x230c3c, Func Offset: 0x3dc
	// Line 1297, Address: 0x230c40, Func Offset: 0x3e0
	// Line 1298, Address: 0x230c50, Func Offset: 0x3f0
	// Line 1299, Address: 0x230c58, Func Offset: 0x3f8
	// Line 1300, Address: 0x230c5c, Func Offset: 0x3fc
	// Line 1301, Address: 0x230c64, Func Offset: 0x404
	// Line 1302, Address: 0x230c68, Func Offset: 0x408
	// Line 1304, Address: 0x230cb4, Func Offset: 0x454
	// Line 1307, Address: 0x230cd4, Func Offset: 0x474
	// Line 1309, Address: 0x230cf4, Func Offset: 0x494
	// Line 1310, Address: 0x230cfc, Func Offset: 0x49c
	// Line 1311, Address: 0x230d00, Func Offset: 0x4a0
	// Line 1314, Address: 0x230d54, Func Offset: 0x4f4
	// Line 1315, Address: 0x230d5c, Func Offset: 0x4fc
	// Line 1316, Address: 0x230d60, Func Offset: 0x500
	// Line 1322, Address: 0x230d68, Func Offset: 0x508
	// Line 1323, Address: 0x230d80, Func Offset: 0x520
	// Line 1325, Address: 0x230d88, Func Offset: 0x528
	// Func End, Address: 0x230db4, Func Offset: 0x554
}

// 
// Start address: 0x230dc0
void EnemyFatControlIdling(sfObj* obj)
{
	EnemyFatWork* ew;
	float* pos;
	float* ppos;
	float a;
	float dt;
	// Line 1329, Address: 0x230dc0, Func Offset: 0
	// Line 1333, Address: 0x230de0, Func Offset: 0x20
	// Line 1334, Address: 0x230dec, Func Offset: 0x2c
	// Line 1335, Address: 0x230df8, Func Offset: 0x38
	// Line 1336, Address: 0x230e00, Func Offset: 0x40
	// Line 1337, Address: 0x230e0c, Func Offset: 0x4c
	// Line 1339, Address: 0x230e40, Func Offset: 0x80
	// Line 1340, Address: 0x230e54, Func Offset: 0x94
	// Line 1341, Address: 0x230e5c, Func Offset: 0x9c
	// Line 1342, Address: 0x230e6c, Func Offset: 0xac
	// Line 1343, Address: 0x230e70, Func Offset: 0xb0
	// Line 1344, Address: 0x230e7c, Func Offset: 0xbc
	// Line 1345, Address: 0x230e88, Func Offset: 0xc8
	// Line 1347, Address: 0x230e94, Func Offset: 0xd4
	// Line 1346, Address: 0x230e98, Func Offset: 0xd8
	// Line 1347, Address: 0x230e9c, Func Offset: 0xdc
	// Line 1346, Address: 0x230ea0, Func Offset: 0xe0
	// Line 1347, Address: 0x230ea4, Func Offset: 0xe4
	// Line 1348, Address: 0x230eb0, Func Offset: 0xf0
	// Line 1349, Address: 0x230ebc, Func Offset: 0xfc
	// Line 1350, Address: 0x230ec8, Func Offset: 0x108
	// Line 1349, Address: 0x230ecc, Func Offset: 0x10c
	// Line 1350, Address: 0x230ed8, Func Offset: 0x118
	// Line 1351, Address: 0x230ee0, Func Offset: 0x120
	// Line 1353, Address: 0x230ee8, Func Offset: 0x128
	// Line 1354, Address: 0x230ef8, Func Offset: 0x138
	// Line 1356, Address: 0x230f00, Func Offset: 0x140
	// Line 1358, Address: 0x230f08, Func Offset: 0x148
	// Line 1360, Address: 0x230f44, Func Offset: 0x184
	// Line 1361, Address: 0x230f48, Func Offset: 0x188
	// Line 1363, Address: 0x230f4c, Func Offset: 0x18c
	// Line 1364, Address: 0x230f50, Func Offset: 0x190
	// Line 1366, Address: 0x230f64, Func Offset: 0x1a4
	// Line 1367, Address: 0x230f6c, Func Offset: 0x1ac
	// Line 1368, Address: 0x230f74, Func Offset: 0x1b4
	// Line 1369, Address: 0x230f78, Func Offset: 0x1b8
	// Line 1372, Address: 0x230f90, Func Offset: 0x1d0
	// Line 1373, Address: 0x230f9c, Func Offset: 0x1dc
	// Line 1372, Address: 0x230fa0, Func Offset: 0x1e0
	// Line 1373, Address: 0x230fa4, Func Offset: 0x1e4
	// Line 1374, Address: 0x230fbc, Func Offset: 0x1fc
	// Line 1375, Address: 0x230fc8, Func Offset: 0x208
	// Line 1374, Address: 0x230fcc, Func Offset: 0x20c
	// Line 1375, Address: 0x230fd0, Func Offset: 0x210
	// Line 1376, Address: 0x230fe8, Func Offset: 0x228
	// Line 1377, Address: 0x231004, Func Offset: 0x244
	// Line 1379, Address: 0x231038, Func Offset: 0x278
	// Line 1380, Address: 0x231040, Func Offset: 0x280
	// Line 1384, Address: 0x231048, Func Offset: 0x288
	// Line 1390, Address: 0x231080, Func Offset: 0x2c0
	// Line 1392, Address: 0x23108c, Func Offset: 0x2cc
	// Line 1393, Address: 0x23109c, Func Offset: 0x2dc
	// Line 1394, Address: 0x2310b0, Func Offset: 0x2f0
	// Line 1395, Address: 0x2310bc, Func Offset: 0x2fc
	// Line 1396, Address: 0x2310c8, Func Offset: 0x308
	// Line 1397, Address: 0x2310d4, Func Offset: 0x314
	// Line 1398, Address: 0x2310dc, Func Offset: 0x31c
	// Line 1399, Address: 0x2310e0, Func Offset: 0x320
	// Line 1400, Address: 0x2310f4, Func Offset: 0x334
	// Line 1401, Address: 0x23110c, Func Offset: 0x34c
	// Line 1402, Address: 0x231110, Func Offset: 0x350
	// Func End, Address: 0x231134, Func Offset: 0x374
}

// 
// Start address: 0x231140
void EnemyFatControlDash(sfObj* obj)
{
	EnemyFatWork* ew;
	float* pos;
	float* ppos;
	float vec[4];
	float vec2[4];
	float a;
	float d;
	float dt;
	// Line 1406, Address: 0x231140, Func Offset: 0
	// Line 1411, Address: 0x231160, Func Offset: 0x20
	// Line 1412, Address: 0x23116c, Func Offset: 0x2c
	// Line 1413, Address: 0x231178, Func Offset: 0x38
	// Line 1414, Address: 0x231180, Func Offset: 0x40
	// Line 1415, Address: 0x23118c, Func Offset: 0x4c
	// Line 1417, Address: 0x2311b8, Func Offset: 0x78
	// Line 1418, Address: 0x2311c4, Func Offset: 0x84
	// Line 1419, Address: 0x2311d0, Func Offset: 0x90
	// Line 1420, Address: 0x2311dc, Func Offset: 0x9c
	// Line 1422, Address: 0x2311e8, Func Offset: 0xa8
	// Line 1421, Address: 0x2311ec, Func Offset: 0xac
	// Line 1422, Address: 0x2311f0, Func Offset: 0xb0
	// Line 1421, Address: 0x2311f4, Func Offset: 0xb4
	// Line 1422, Address: 0x2311f8, Func Offset: 0xb8
	// Line 1423, Address: 0x231204, Func Offset: 0xc4
	// Line 1424, Address: 0x231210, Func Offset: 0xd0
	// Line 1425, Address: 0x231218, Func Offset: 0xd8
	// Line 1427, Address: 0x231220, Func Offset: 0xe0
	// Line 1428, Address: 0x23122c, Func Offset: 0xec
	// Line 1427, Address: 0x231230, Func Offset: 0xf0
	// Line 1428, Address: 0x231234, Func Offset: 0xf4
	// Line 1429, Address: 0x231250, Func Offset: 0x110
	// Line 1430, Address: 0x23125c, Func Offset: 0x11c
	// Line 1431, Address: 0x231274, Func Offset: 0x134
	// Line 1432, Address: 0x231278, Func Offset: 0x138
	// Line 1431, Address: 0x231280, Func Offset: 0x140
	// Line 1432, Address: 0x231284, Func Offset: 0x144
	// Line 1434, Address: 0x2312b8, Func Offset: 0x178
	// Line 1435, Address: 0x2312c0, Func Offset: 0x180
	// Line 1436, Address: 0x2312d4, Func Offset: 0x194
	// Line 1437, Address: 0x2312e0, Func Offset: 0x1a0
	// Line 1438, Address: 0x2312ec, Func Offset: 0x1ac
	// Line 1439, Address: 0x2312f4, Func Offset: 0x1b4
	// Line 1440, Address: 0x2312f8, Func Offset: 0x1b8
	// Line 1441, Address: 0x231304, Func Offset: 0x1c4
	// Line 1440, Address: 0x231308, Func Offset: 0x1c8
	// Line 1441, Address: 0x231310, Func Offset: 0x1d0
	// Line 1442, Address: 0x231318, Func Offset: 0x1d8
	// Line 1441, Address: 0x23131c, Func Offset: 0x1dc
	// Line 1442, Address: 0x231320, Func Offset: 0x1e0
	// Line 1440, Address: 0x231324, Func Offset: 0x1e4
	// Line 1441, Address: 0x231328, Func Offset: 0x1e8
	// Line 1442, Address: 0x231340, Func Offset: 0x200
	// Line 1443, Address: 0x231360, Func Offset: 0x220
	// Line 1444, Address: 0x23136c, Func Offset: 0x22c
	// Line 1446, Address: 0x2313ac, Func Offset: 0x26c
	// Line 1447, Address: 0x2313b0, Func Offset: 0x270
	// Line 1449, Address: 0x2313b4, Func Offset: 0x274
	// Line 1450, Address: 0x2313b8, Func Offset: 0x278
	// Line 1452, Address: 0x2313cc, Func Offset: 0x28c
	// Line 1453, Address: 0x2313d4, Func Offset: 0x294
	// Line 1454, Address: 0x2313e8, Func Offset: 0x2a8
	// Line 1455, Address: 0x2313f4, Func Offset: 0x2b4
	// Line 1456, Address: 0x231400, Func Offset: 0x2c0
	// Line 1457, Address: 0x23140c, Func Offset: 0x2cc
	// Line 1458, Address: 0x231414, Func Offset: 0x2d4
	// Line 1459, Address: 0x231418, Func Offset: 0x2d8
	// Line 1462, Address: 0x231430, Func Offset: 0x2f0
	// Line 1465, Address: 0x231450, Func Offset: 0x310
	// Line 1466, Address: 0x231458, Func Offset: 0x318
	// Line 1467, Address: 0x23146c, Func Offset: 0x32c
	// Line 1468, Address: 0x231478, Func Offset: 0x338
	// Line 1470, Address: 0x231484, Func Offset: 0x344
	// Line 1473, Address: 0x23148c, Func Offset: 0x34c
	// Line 1474, Address: 0x231490, Func Offset: 0x350
	// Line 1475, Address: 0x23149c, Func Offset: 0x35c
	// Line 1476, Address: 0x2314a0, Func Offset: 0x360
	// Line 1477, Address: 0x2314ac, Func Offset: 0x36c
	// Line 1479, Address: 0x2314d0, Func Offset: 0x390
	// Line 1480, Address: 0x2314d8, Func Offset: 0x398
	// Line 1482, Address: 0x2314e0, Func Offset: 0x3a0
	// Line 1483, Address: 0x2314e8, Func Offset: 0x3a8
	// Line 1485, Address: 0x2314f0, Func Offset: 0x3b0
	// Line 1488, Address: 0x2314f8, Func Offset: 0x3b8
	// Line 1489, Address: 0x231504, Func Offset: 0x3c4
	// Line 1490, Address: 0x231510, Func Offset: 0x3d0
	// Line 1489, Address: 0x231514, Func Offset: 0x3d4
	// Line 1488, Address: 0x23151c, Func Offset: 0x3dc
	// Line 1490, Address: 0x231520, Func Offset: 0x3e0
	// Line 1489, Address: 0x231524, Func Offset: 0x3e4
	// Line 1490, Address: 0x231538, Func Offset: 0x3f8
	// Line 1491, Address: 0x231558, Func Offset: 0x418
	// Line 1492, Address: 0x231564, Func Offset: 0x424
	// Line 1493, Address: 0x231584, Func Offset: 0x444
	// Line 1495, Address: 0x23158c, Func Offset: 0x44c
	// Line 1494, Address: 0x231590, Func Offset: 0x450
	// Line 1495, Address: 0x231594, Func Offset: 0x454
	// Line 1494, Address: 0x231598, Func Offset: 0x458
	// Line 1495, Address: 0x23159c, Func Offset: 0x45c
	// Line 1496, Address: 0x2315ac, Func Offset: 0x46c
	// Line 1497, Address: 0x2315b8, Func Offset: 0x478
	// Line 1498, Address: 0x2315c4, Func Offset: 0x484
	// Line 1499, Address: 0x2315d4, Func Offset: 0x494
	// Line 1501, Address: 0x2315e0, Func Offset: 0x4a0
	// Line 1503, Address: 0x2315e8, Func Offset: 0x4a8
	// Line 1507, Address: 0x231600, Func Offset: 0x4c0
	// Func End, Address: 0x231624, Func Offset: 0x4e4
}

// 
// Start address: 0x231630
void EnemyFatControlHurl(sfObj* obj)
{
	EnemyFatWork* ew;
	float* pos;
	float* ppos;
	float vec[4];
	float d;
	float pdir;
	float dt;
	// Line 1511, Address: 0x231630, Func Offset: 0
	// Line 1516, Address: 0x231648, Func Offset: 0x18
	// Line 1517, Address: 0x231654, Func Offset: 0x24
	// Line 1518, Address: 0x23165c, Func Offset: 0x2c
	// Line 1519, Address: 0x231664, Func Offset: 0x34
	// Line 1520, Address: 0x231670, Func Offset: 0x40
	// Line 1521, Address: 0x23167c, Func Offset: 0x4c
	// Line 1523, Address: 0x2316b8, Func Offset: 0x88
	// Line 1524, Address: 0x2316c0, Func Offset: 0x90
	// Line 1525, Address: 0x2316dc, Func Offset: 0xac
	// Line 1526, Address: 0x2316e8, Func Offset: 0xb8
	// Line 1527, Address: 0x2316f4, Func Offset: 0xc4
	// Line 1529, Address: 0x231700, Func Offset: 0xd0
	// Line 1528, Address: 0x231704, Func Offset: 0xd4
	// Line 1529, Address: 0x231708, Func Offset: 0xd8
	// Line 1528, Address: 0x23170c, Func Offset: 0xdc
	// Line 1529, Address: 0x231710, Func Offset: 0xe0
	// Line 1530, Address: 0x23171c, Func Offset: 0xec
	// Line 1531, Address: 0x231728, Func Offset: 0xf8
	// Line 1532, Address: 0x23173c, Func Offset: 0x10c
	// Line 1533, Address: 0x231748, Func Offset: 0x118
	// Line 1532, Address: 0x23174c, Func Offset: 0x11c
	// Line 1533, Address: 0x231758, Func Offset: 0x128
	// Line 1534, Address: 0x231760, Func Offset: 0x130
	// Line 1536, Address: 0x231768, Func Offset: 0x138
	// Line 1537, Address: 0x231788, Func Offset: 0x158
	// Line 1538, Address: 0x231794, Func Offset: 0x164
	// Line 1539, Address: 0x2317a0, Func Offset: 0x170
	// Line 1540, Address: 0x2317ac, Func Offset: 0x17c
	// Line 1539, Address: 0x2317b0, Func Offset: 0x180
	// Line 1538, Address: 0x2317b4, Func Offset: 0x184
	// Line 1539, Address: 0x2317b8, Func Offset: 0x188
	// Line 1540, Address: 0x2317d0, Func Offset: 0x1a0
	// Line 1541, Address: 0x2317f0, Func Offset: 0x1c0
	// Line 1542, Address: 0x2317fc, Func Offset: 0x1cc
	// Line 1544, Address: 0x231828, Func Offset: 0x1f8
	// Line 1545, Address: 0x23183c, Func Offset: 0x20c
	// Line 1544, Address: 0x231840, Func Offset: 0x210
	// Line 1545, Address: 0x231844, Func Offset: 0x214
	// Line 1544, Address: 0x231848, Func Offset: 0x218
	// Line 1545, Address: 0x231850, Func Offset: 0x220
	// Line 1546, Address: 0x231858, Func Offset: 0x228
	// Line 1547, Address: 0x231864, Func Offset: 0x234
	// Line 1549, Address: 0x23186c, Func Offset: 0x23c
	// Line 1550, Address: 0x231874, Func Offset: 0x244
	// Line 1551, Address: 0x231878, Func Offset: 0x248
	// Line 1553, Address: 0x2318a0, Func Offset: 0x270
	// Line 1554, Address: 0x2318a4, Func Offset: 0x274
	// Line 1556, Address: 0x2318c8, Func Offset: 0x298
	// Line 1557, Address: 0x2318dc, Func Offset: 0x2ac
	// Line 1559, Address: 0x2318e4, Func Offset: 0x2b4
	// Line 1560, Address: 0x2318f4, Func Offset: 0x2c4
	// Line 1561, Address: 0x231900, Func Offset: 0x2d0
	// Line 1566, Address: 0x231908, Func Offset: 0x2d8
	// Line 1567, Address: 0x231918, Func Offset: 0x2e8
	// Line 1568, Address: 0x231930, Func Offset: 0x300
	// Line 1567, Address: 0x231934, Func Offset: 0x304
	// Line 1568, Address: 0x231938, Func Offset: 0x308
	// Line 1569, Address: 0x231954, Func Offset: 0x324
	// Line 1570, Address: 0x231960, Func Offset: 0x330
	// Line 1571, Address: 0x231978, Func Offset: 0x348
	// Line 1570, Address: 0x231984, Func Offset: 0x354
	// Line 1571, Address: 0x231988, Func Offset: 0x358
	// Line 1570, Address: 0x23198c, Func Offset: 0x35c
	// Line 1571, Address: 0x231990, Func Offset: 0x360
	// Line 1572, Address: 0x2319bc, Func Offset: 0x38c
	// Line 1573, Address: 0x2319c8, Func Offset: 0x398
	// Line 1574, Address: 0x2319f4, Func Offset: 0x3c4
	// Line 1575, Address: 0x2319fc, Func Offset: 0x3cc
	// Line 1576, Address: 0x231a08, Func Offset: 0x3d8
	// Line 1578, Address: 0x231a14, Func Offset: 0x3e4
	// Line 1579, Address: 0x231a1c, Func Offset: 0x3ec
	// Line 1580, Address: 0x231a20, Func Offset: 0x3f0
	// Line 1581, Address: 0x231a34, Func Offset: 0x404
	// Line 1582, Address: 0x231a4c, Func Offset: 0x41c
	// Line 1583, Address: 0x231a58, Func Offset: 0x428
	// Line 1584, Address: 0x231a68, Func Offset: 0x438
	// Line 1585, Address: 0x231a70, Func Offset: 0x440
	// Line 1584, Address: 0x231a74, Func Offset: 0x444
	// Line 1583, Address: 0x231a88, Func Offset: 0x458
	// Line 1585, Address: 0x231a8c, Func Offset: 0x45c
	// Line 1584, Address: 0x231a90, Func Offset: 0x460
	// Line 1585, Address: 0x231a9c, Func Offset: 0x46c
	// Line 1586, Address: 0x231abc, Func Offset: 0x48c
	// Line 1587, Address: 0x231ac8, Func Offset: 0x498
	// Line 1588, Address: 0x231ad8, Func Offset: 0x4a8
	// Line 1592, Address: 0x231ae0, Func Offset: 0x4b0
	// Func End, Address: 0x231afc, Func Offset: 0x4cc
}

// 
// Start address: 0x231b00
void EnemyFatControlCaution(sfObj* obj)
{
	EnemyFatWork* ew;
	float* pos;
	float a;
	float dt;
	EnemyMeasureResult mres;
	EnemyMeasureResult mres;
	// Line 1596, Address: 0x231b00, Func Offset: 0
	// Line 1600, Address: 0x231b1c, Func Offset: 0x1c
	// Line 1601, Address: 0x231b28, Func Offset: 0x28
	// Line 1602, Address: 0x231b30, Func Offset: 0x30
	// Line 1603, Address: 0x231b3c, Func Offset: 0x3c
	// Line 1604, Address: 0x231b74, Func Offset: 0x74
	// Line 1606, Address: 0x231b78, Func Offset: 0x78
	// Line 1607, Address: 0x231bb0, Func Offset: 0xb0
	// Line 1609, Address: 0x231bd0, Func Offset: 0xd0
	// Line 1610, Address: 0x231bd8, Func Offset: 0xd8
	// Line 1611, Address: 0x231be0, Func Offset: 0xe0
	// Line 1612, Address: 0x231bec, Func Offset: 0xec
	// Line 1613, Address: 0x231bf0, Func Offset: 0xf0
	// Line 1615, Address: 0x231bf8, Func Offset: 0xf8
	// Line 1616, Address: 0x231c04, Func Offset: 0x104
	// Line 1617, Address: 0x231c10, Func Offset: 0x110
	// Line 1618, Address: 0x231c1c, Func Offset: 0x11c
	// Line 1619, Address: 0x231c28, Func Offset: 0x128
	// Line 1620, Address: 0x231c34, Func Offset: 0x134
	// Line 1621, Address: 0x231c48, Func Offset: 0x148
	// Line 1622, Address: 0x231c54, Func Offset: 0x154
	// Line 1621, Address: 0x231c58, Func Offset: 0x158
	// Line 1622, Address: 0x231c74, Func Offset: 0x174
	// Line 1623, Address: 0x231c7c, Func Offset: 0x17c
	// Line 1624, Address: 0x231c84, Func Offset: 0x184
	// Line 1625, Address: 0x231c88, Func Offset: 0x188
	// Line 1626, Address: 0x231c94, Func Offset: 0x194
	// Line 1625, Address: 0x231c98, Func Offset: 0x198
	// Line 1626, Address: 0x231c9c, Func Offset: 0x19c
	// Line 1627, Address: 0x231cb8, Func Offset: 0x1b8
	// Line 1628, Address: 0x231ccc, Func Offset: 0x1cc
	// Line 1629, Address: 0x231cf8, Func Offset: 0x1f8
	// Line 1630, Address: 0x231d00, Func Offset: 0x200
	// Line 1631, Address: 0x231d0c, Func Offset: 0x20c
	// Line 1632, Address: 0x231d18, Func Offset: 0x218
	// Line 1633, Address: 0x231d24, Func Offset: 0x224
	// Line 1632, Address: 0x231d28, Func Offset: 0x228
	// Line 1633, Address: 0x231d2c, Func Offset: 0x22c
	// Line 1632, Address: 0x231d30, Func Offset: 0x230
	// Line 1633, Address: 0x231d38, Func Offset: 0x238
	// Line 1635, Address: 0x231d40, Func Offset: 0x240
	// Line 1636, Address: 0x231d48, Func Offset: 0x248
	// Line 1638, Address: 0x231d64, Func Offset: 0x264
	// Line 1641, Address: 0x231dc4, Func Offset: 0x2c4
	// Line 1642, Address: 0x231dcc, Func Offset: 0x2cc
	// Line 1643, Address: 0x231dd8, Func Offset: 0x2d8
	// Line 1647, Address: 0x231de4, Func Offset: 0x2e4
	// Line 1649, Address: 0x231dec, Func Offset: 0x2ec
	// Line 1651, Address: 0x231df0, Func Offset: 0x2f0
	// Line 1650, Address: 0x231df4, Func Offset: 0x2f4
	// Line 1651, Address: 0x231df8, Func Offset: 0x2f8
	// Line 1650, Address: 0x231dfc, Func Offset: 0x2fc
	// Line 1651, Address: 0x231e00, Func Offset: 0x300
	// Line 1652, Address: 0x231e08, Func Offset: 0x308
	// Line 1651, Address: 0x231e0c, Func Offset: 0x30c
	// Line 1652, Address: 0x231e10, Func Offset: 0x310
	// Line 1653, Address: 0x231e2c, Func Offset: 0x32c
	// Line 1654, Address: 0x231e34, Func Offset: 0x334
	// Line 1655, Address: 0x231e48, Func Offset: 0x348
	// Line 1656, Address: 0x231e5c, Func Offset: 0x35c
	// Line 1657, Address: 0x231e68, Func Offset: 0x368
	// Line 1656, Address: 0x231e6c, Func Offset: 0x36c
	// Line 1657, Address: 0x231e88, Func Offset: 0x388
	// Line 1658, Address: 0x231e90, Func Offset: 0x390
	// Line 1660, Address: 0x231e98, Func Offset: 0x398
	// Line 1663, Address: 0x231ef8, Func Offset: 0x3f8
	// Line 1664, Address: 0x231f00, Func Offset: 0x400
	// Line 1665, Address: 0x231f08, Func Offset: 0x408
	// Line 1667, Address: 0x231f14, Func Offset: 0x414
	// Line 1668, Address: 0x231f18, Func Offset: 0x418
	// Line 1669, Address: 0x231f1c, Func Offset: 0x41c
	// Line 1670, Address: 0x231f28, Func Offset: 0x428
	// Line 1671, Address: 0x231f50, Func Offset: 0x450
	// Line 1672, Address: 0x231f70, Func Offset: 0x470
	// Line 1673, Address: 0x231f94, Func Offset: 0x494
	// Line 1674, Address: 0x231fa0, Func Offset: 0x4a0
	// Line 1675, Address: 0x231fbc, Func Offset: 0x4bc
	// Line 1676, Address: 0x231fc4, Func Offset: 0x4c4
	// Line 1677, Address: 0x231fd0, Func Offset: 0x4d0
	// Line 1678, Address: 0x231fdc, Func Offset: 0x4dc
	// Line 1679, Address: 0x231fe0, Func Offset: 0x4e0
	// Line 1685, Address: 0x231fe8, Func Offset: 0x4e8
	// Func End, Address: 0x232008, Func Offset: 0x508
}

// 
// Start address: 0x232010
void EnemyFatControlEscape(sfObj* obj)
{
	EnemyFatWork* ew;
	float* pos;
	float* target;
	float vec[4];
	float dt;
	float pdir;
	float d;
	EnemyMeasureResult mres;
	// Line 1689, Address: 0x232010, Func Offset: 0
	// Line 1695, Address: 0x232030, Func Offset: 0x20
	// Line 1696, Address: 0x23203c, Func Offset: 0x2c
	// Line 1697, Address: 0x232048, Func Offset: 0x38
	// Line 1698, Address: 0x232054, Func Offset: 0x44
	// Line 1699, Address: 0x232060, Func Offset: 0x50
	// Line 1700, Address: 0x23206c, Func Offset: 0x5c
	// Line 1701, Address: 0x2320a4, Func Offset: 0x94
	// Line 1702, Address: 0x2320a8, Func Offset: 0x98
	// Line 1706, Address: 0x2320f8, Func Offset: 0xe8
	// Line 1707, Address: 0x23211c, Func Offset: 0x10c
	// Line 1708, Address: 0x232124, Func Offset: 0x114
	// Line 1709, Address: 0x232130, Func Offset: 0x120
	// Line 1710, Address: 0x23213c, Func Offset: 0x12c
	// Line 1711, Address: 0x232140, Func Offset: 0x130
	// Line 1713, Address: 0x232148, Func Offset: 0x138
	// Line 1714, Address: 0x232154, Func Offset: 0x144
	// Line 1715, Address: 0x232160, Func Offset: 0x150
	// Line 1716, Address: 0x232170, Func Offset: 0x160
	// Line 1717, Address: 0x23217c, Func Offset: 0x16c
	// Line 1719, Address: 0x232190, Func Offset: 0x180
	// Line 1717, Address: 0x232194, Func Offset: 0x184
	// Line 1718, Address: 0x2321a0, Func Offset: 0x190
	// Line 1717, Address: 0x2321a4, Func Offset: 0x194
	// Line 1719, Address: 0x2321ac, Func Offset: 0x19c
	// Line 1721, Address: 0x2321c0, Func Offset: 0x1b0
	// Line 1722, Address: 0x2321c8, Func Offset: 0x1b8
	// Line 1723, Address: 0x2321d4, Func Offset: 0x1c4
	// Line 1724, Address: 0x2321dc, Func Offset: 0x1cc
	// Line 1725, Address: 0x2321e0, Func Offset: 0x1d0
	// Line 1726, Address: 0x2321e8, Func Offset: 0x1d8
	// Line 1727, Address: 0x2321f4, Func Offset: 0x1e4
	// Line 1728, Address: 0x232200, Func Offset: 0x1f0
	// Line 1731, Address: 0x232208, Func Offset: 0x1f8
	// Line 1732, Address: 0x232218, Func Offset: 0x208
	// Line 1733, Address: 0x232220, Func Offset: 0x210
	// Line 1735, Address: 0x232228, Func Offset: 0x218
	// Line 1737, Address: 0x232230, Func Offset: 0x220
	// Line 1738, Address: 0x23224c, Func Offset: 0x23c
	// Line 1739, Address: 0x232258, Func Offset: 0x248
	// Line 1741, Address: 0x232264, Func Offset: 0x254
	// Line 1742, Address: 0x23226c, Func Offset: 0x25c
	// Line 1743, Address: 0x232270, Func Offset: 0x260
	// Line 1744, Address: 0x232280, Func Offset: 0x270
	// Line 1746, Address: 0x2322a0, Func Offset: 0x290
	// Line 1747, Address: 0x2322a8, Func Offset: 0x298
	// Line 1749, Address: 0x2322b0, Func Offset: 0x2a0
	// Line 1752, Address: 0x232310, Func Offset: 0x300
	// Line 1753, Address: 0x232318, Func Offset: 0x308
	// Line 1754, Address: 0x232320, Func Offset: 0x310
	// Line 1759, Address: 0x23232c, Func Offset: 0x31c
	// Line 1760, Address: 0x232330, Func Offset: 0x320
	// Line 1761, Address: 0x232350, Func Offset: 0x340
	// Line 1762, Address: 0x23235c, Func Offset: 0x34c
	// Line 1763, Address: 0x232368, Func Offset: 0x358
	// Line 1762, Address: 0x232378, Func Offset: 0x368
	// Line 1763, Address: 0x23237c, Func Offset: 0x36c
	// Line 1764, Address: 0x232380, Func Offset: 0x370
	// Line 1763, Address: 0x232384, Func Offset: 0x374
	// Line 1764, Address: 0x232390, Func Offset: 0x380
	// Line 1765, Address: 0x2323b0, Func Offset: 0x3a0
	// Line 1766, Address: 0x2323bc, Func Offset: 0x3ac
	// Line 1767, Address: 0x2323cc, Func Offset: 0x3bc
	// Line 1770, Address: 0x2323ec, Func Offset: 0x3dc
	// Line 1771, Address: 0x2323f8, Func Offset: 0x3e8
	// Line 1773, Address: 0x232408, Func Offset: 0x3f8
	// Func End, Address: 0x23242c, Func Offset: 0x41c
}

// 
// Start address: 0x232430
void EnemyFatControlChase(sfObj* obj)
{
	EnemyFatWork* ew;
	float* pos;
	float* ppos;
	float* target;
	float tpos[4];
	float vec[4];
	float r;
	float d;
	float dt;
	// Line 1777, Address: 0x232430, Func Offset: 0
	// Line 1783, Address: 0x232450, Func Offset: 0x20
	// Line 1784, Address: 0x23245c, Func Offset: 0x2c
	// Line 1785, Address: 0x232468, Func Offset: 0x38
	// Line 1786, Address: 0x232474, Func Offset: 0x44
	// Line 1787, Address: 0x23247c, Func Offset: 0x4c
	// Line 1788, Address: 0x232488, Func Offset: 0x58
	// Line 1789, Address: 0x2324c4, Func Offset: 0x94
	// Line 1791, Address: 0x2324c8, Func Offset: 0x98
	// Line 1792, Address: 0x2324d4, Func Offset: 0xa4
	// Line 1793, Address: 0x2324e0, Func Offset: 0xb0
	// Line 1794, Address: 0x2324ec, Func Offset: 0xbc
	// Line 1795, Address: 0x2324f8, Func Offset: 0xc8
	// Line 1796, Address: 0x232504, Func Offset: 0xd4
	// Line 1797, Address: 0x232520, Func Offset: 0xf0
	// Line 1798, Address: 0x23252c, Func Offset: 0xfc
	// Line 1800, Address: 0x232534, Func Offset: 0x104
	// Line 1801, Address: 0x232538, Func Offset: 0x108
	// Line 1805, Address: 0x232588, Func Offset: 0x158
	// Line 1807, Address: 0x232598, Func Offset: 0x168
	// Line 1808, Address: 0x2325a4, Func Offset: 0x174
	// Line 1809, Address: 0x2325ac, Func Offset: 0x17c
	// Line 1810, Address: 0x2325b0, Func Offset: 0x180
	// Line 1812, Address: 0x2325bc, Func Offset: 0x18c
	// Line 1811, Address: 0x2325c0, Func Offset: 0x190
	// Line 1812, Address: 0x2325cc, Func Offset: 0x19c
	// Line 1811, Address: 0x2325d0, Func Offset: 0x1a0
	// Line 1812, Address: 0x2325d4, Func Offset: 0x1a4
	// Line 1815, Address: 0x232604, Func Offset: 0x1d4
	// Line 1818, Address: 0x232624, Func Offset: 0x1f4
	// Line 1819, Address: 0x232630, Func Offset: 0x200
	// Line 1822, Address: 0x232638, Func Offset: 0x208
	// Line 1825, Address: 0x232688, Func Offset: 0x258
	// Line 1826, Address: 0x232690, Func Offset: 0x260
	// Line 1828, Address: 0x232698, Func Offset: 0x268
	// Line 1829, Address: 0x2326a4, Func Offset: 0x274
	// Line 1830, Address: 0x2326ac, Func Offset: 0x27c
	// Line 1831, Address: 0x2326b0, Func Offset: 0x280
	// Line 1833, Address: 0x2326d0, Func Offset: 0x2a0
	// Line 1834, Address: 0x2326dc, Func Offset: 0x2ac
	// Line 1835, Address: 0x2326e8, Func Offset: 0x2b8
	// Line 1840, Address: 0x2326f4, Func Offset: 0x2c4
	// Line 1841, Address: 0x2326f8, Func Offset: 0x2c8
	// Line 1847, Address: 0x232768, Func Offset: 0x338
	// Line 1848, Address: 0x232774, Func Offset: 0x344
	// Line 1849, Address: 0x23277c, Func Offset: 0x34c
	// Line 1850, Address: 0x232780, Func Offset: 0x350
	// Line 1851, Address: 0x232788, Func Offset: 0x358
	// Line 1853, Address: 0x232790, Func Offset: 0x360
	// Line 1854, Address: 0x232798, Func Offset: 0x368
	// Line 1855, Address: 0x23279c, Func Offset: 0x36c
	// Line 1854, Address: 0x2327a4, Func Offset: 0x374
	// Line 1855, Address: 0x2327a8, Func Offset: 0x378
	// Line 1856, Address: 0x2327bc, Func Offset: 0x38c
	// Line 1857, Address: 0x2327fc, Func Offset: 0x3cc
	// Line 1858, Address: 0x23282c, Func Offset: 0x3fc
	// Line 1859, Address: 0x232848, Func Offset: 0x418
	// Line 1860, Address: 0x23286c, Func Offset: 0x43c
	// Line 1862, Address: 0x232884, Func Offset: 0x454
	// Line 1863, Address: 0x232890, Func Offset: 0x460
	// Line 1864, Address: 0x2328b0, Func Offset: 0x480
	// Line 1866, Address: 0x2328bc, Func Offset: 0x48c
	// Line 1865, Address: 0x2328c0, Func Offset: 0x490
	// Line 1866, Address: 0x2328c4, Func Offset: 0x494
	// Line 1868, Address: 0x2328f4, Func Offset: 0x4c4
	// Line 1873, Address: 0x232900, Func Offset: 0x4d0
	// Line 1874, Address: 0x23290c, Func Offset: 0x4dc
	// Line 1875, Address: 0x23292c, Func Offset: 0x4fc
	// Line 1876, Address: 0x232938, Func Offset: 0x508
	// Line 1879, Address: 0x232950, Func Offset: 0x520
	// Line 1882, Address: 0x232994, Func Offset: 0x564
	// Line 1883, Address: 0x2329a0, Func Offset: 0x570
	// Line 1887, Address: 0x2329a8, Func Offset: 0x578
	// Line 1889, Address: 0x2329b4, Func Offset: 0x584
	// Line 1890, Address: 0x2329b8, Func Offset: 0x588
	// Line 1891, Address: 0x2329cc, Func Offset: 0x59c
	// Line 1890, Address: 0x2329d4, Func Offset: 0x5a4
	// Line 1891, Address: 0x2329e0, Func Offset: 0x5b0
	// Line 1892, Address: 0x232a00, Func Offset: 0x5d0
	// Line 1893, Address: 0x232a0c, Func Offset: 0x5dc
	// Func End, Address: 0x232a34, Func Offset: 0x604
}

// 
// Start address: 0x232a40
void EnemyFatControlIntoWall(sfObj* obj)
{
	int r;
	// Line 1897, Address: 0x232a40, Func Offset: 0
	// Line 1899, Address: 0x232a4c, Func Offset: 0xc
	// Line 1900, Address: 0x232a5c, Func Offset: 0x1c
	// Line 1901, Address: 0x232a64, Func Offset: 0x24
	// Line 1902, Address: 0x232a70, Func Offset: 0x30
	// Line 1903, Address: 0x232a7c, Func Offset: 0x3c
	// Line 1904, Address: 0x232a80, Func Offset: 0x40
	// Line 1906, Address: 0x232a90, Func Offset: 0x50
	// Line 1904, Address: 0x232a94, Func Offset: 0x54
	// Line 1906, Address: 0x232a98, Func Offset: 0x58
	// Line 1907, Address: 0x232aa4, Func Offset: 0x64
	// Line 1908, Address: 0x232acc, Func Offset: 0x8c
	// Line 1909, Address: 0x232ad0, Func Offset: 0x90
	// Line 1910, Address: 0x232adc, Func Offset: 0x9c
	// Line 1911, Address: 0x232ae4, Func Offset: 0xa4
	// Line 1912, Address: 0x232ae8, Func Offset: 0xa8
	// Line 1913, Address: 0x232af4, Func Offset: 0xb4
	// Line 1914, Address: 0x232afc, Func Offset: 0xbc
	// Line 1915, Address: 0x232b00, Func Offset: 0xc0
	// Line 1917, Address: 0x232b0c, Func Offset: 0xcc
	// Line 1918, Address: 0x232b10, Func Offset: 0xd0
	// Func End, Address: 0x232b20, Func Offset: 0xe0
}

// 
// Start address: 0x232b20
void EnemyFatControlInWall(sfObj* obj)
{
	int r;
	// Line 1922, Address: 0x232b20, Func Offset: 0
	// Line 1924, Address: 0x232b2c, Func Offset: 0xc
	// Line 1925, Address: 0x232b3c, Func Offset: 0x1c
	// Line 1926, Address: 0x232b44, Func Offset: 0x24
	// Line 1927, Address: 0x232b54, Func Offset: 0x34
	// Line 1928, Address: 0x232b58, Func Offset: 0x38
	// Line 1930, Address: 0x232b68, Func Offset: 0x48
	// Line 1928, Address: 0x232b6c, Func Offset: 0x4c
	// Line 1930, Address: 0x232b74, Func Offset: 0x54
	// Line 1928, Address: 0x232b7c, Func Offset: 0x5c
	// Line 1930, Address: 0x232b80, Func Offset: 0x60
	// Line 1931, Address: 0x232b88, Func Offset: 0x68
	// Line 1932, Address: 0x232bac, Func Offset: 0x8c
	// Line 1933, Address: 0x232bb0, Func Offset: 0x90
	// Line 1934, Address: 0x232bbc, Func Offset: 0x9c
	// Line 1935, Address: 0x232bc4, Func Offset: 0xa4
	// Line 1936, Address: 0x232bc8, Func Offset: 0xa8
	// Line 1937, Address: 0x232bd4, Func Offset: 0xb4
	// Line 1938, Address: 0x232be0, Func Offset: 0xc0
	// Line 1940, Address: 0x232be8, Func Offset: 0xc8
	// Line 1941, Address: 0x232bf8, Func Offset: 0xd8
	// Line 1943, Address: 0x232c04, Func Offset: 0xe4
	// Line 1944, Address: 0x232c08, Func Offset: 0xe8
	// Func End, Address: 0x232c18, Func Offset: 0xf8
}

// 
// Start address: 0x232c20
void EnemyFatControlFromWall(sfObj* obj)
{
	int r;
	// Line 1948, Address: 0x232c20, Func Offset: 0
	// Line 1950, Address: 0x232c2c, Func Offset: 0xc
	// Line 1952, Address: 0x232c3c, Func Offset: 0x1c
	// Line 1953, Address: 0x232c44, Func Offset: 0x24
	// Line 1954, Address: 0x232c50, Func Offset: 0x30
	// Line 1955, Address: 0x232c5c, Func Offset: 0x3c
	// Line 1956, Address: 0x232c60, Func Offset: 0x40
	// Line 1958, Address: 0x232c70, Func Offset: 0x50
	// Line 1956, Address: 0x232c74, Func Offset: 0x54
	// Line 1958, Address: 0x232c78, Func Offset: 0x58
	// Line 1959, Address: 0x232c84, Func Offset: 0x64
	// Line 1961, Address: 0x232ca8, Func Offset: 0x88
	// Line 1962, Address: 0x232cb4, Func Offset: 0x94
	// Line 1965, Address: 0x232cbc, Func Offset: 0x9c
	// Line 1966, Address: 0x232cc0, Func Offset: 0xa0
	// Line 1967, Address: 0x232ccc, Func Offset: 0xac
	// Line 1969, Address: 0x232cf0, Func Offset: 0xd0
	// Line 1970, Address: 0x232cf8, Func Offset: 0xd8
	// Line 1971, Address: 0x232d00, Func Offset: 0xe0
	// Line 1974, Address: 0x232d0c, Func Offset: 0xec
	// Line 1975, Address: 0x232d10, Func Offset: 0xf0
	// Func End, Address: 0x232d20, Func Offset: 0x100
}

// 
// Start address: 0x232d20
void EnemyFatControlDamage(sfObj* obj)
{
	EnemyFatWork* ew;
	float vec[4];
	float dt;
	float rdt;
	EnemyBattleDamage bd;
	float dir[4];
	float rrot[4];
	int motion;
	int d;
	int nextstep;
	// Line 1979, Address: 0x232d20, Func Offset: 0
	// Line 1983, Address: 0x232d40, Func Offset: 0x20
	// Line 1984, Address: 0x232d48, Func Offset: 0x28
	// Line 1985, Address: 0x232d50, Func Offset: 0x30
	// Line 1986, Address: 0x232d5c, Func Offset: 0x3c
	// Line 1987, Address: 0x232d94, Func Offset: 0x74
	// Line 1988, Address: 0x232d98, Func Offset: 0x78
	// Line 1989, Address: 0x232da4, Func Offset: 0x84
	// Line 1990, Address: 0x232db0, Func Offset: 0x90
	// Line 1991, Address: 0x232dc4, Func Offset: 0xa4
	// Line 1992, Address: 0x232dd0, Func Offset: 0xb0
	// Line 1993, Address: 0x232ddc, Func Offset: 0xbc
	// Line 1994, Address: 0x232de8, Func Offset: 0xc8
	// Line 2001, Address: 0x232dec, Func Offset: 0xcc
	// Line 1994, Address: 0x232df0, Func Offset: 0xd0
	// Line 2001, Address: 0x232df4, Func Offset: 0xd4
	// Line 2002, Address: 0x232dfc, Func Offset: 0xdc
	// Line 2003, Address: 0x232e0c, Func Offset: 0xec
	// Line 2004, Address: 0x232e14, Func Offset: 0xf4
	// Line 2005, Address: 0x232e20, Func Offset: 0x100
	// Line 2006, Address: 0x232e34, Func Offset: 0x114
	// Line 2007, Address: 0x232e38, Func Offset: 0x118
	// Line 2008, Address: 0x232e4c, Func Offset: 0x12c
	// Line 2009, Address: 0x232e5c, Func Offset: 0x13c
	// Line 2010, Address: 0x232e84, Func Offset: 0x164
	// Line 2011, Address: 0x232e9c, Func Offset: 0x17c
	// Line 2013, Address: 0x232ea8, Func Offset: 0x188
	// Line 2014, Address: 0x232ecc, Func Offset: 0x1ac
	// Line 2015, Address: 0x232ed4, Func Offset: 0x1b4
	// Line 2016, Address: 0x232f00, Func Offset: 0x1e0
	// Line 2017, Address: 0x232f20, Func Offset: 0x200
	// Line 2018, Address: 0x232f30, Func Offset: 0x210
	// Line 2019, Address: 0x232f34, Func Offset: 0x214
	// Line 2020, Address: 0x232f40, Func Offset: 0x220
	// Line 2022, Address: 0x232f48, Func Offset: 0x228
	// Line 2023, Address: 0x232f54, Func Offset: 0x234
	// Line 2024, Address: 0x232f64, Func Offset: 0x244
	// Line 2025, Address: 0x232f74, Func Offset: 0x254
	// Line 2027, Address: 0x232f80, Func Offset: 0x260
	// Line 2026, Address: 0x232f84, Func Offset: 0x264
	// Line 2027, Address: 0x232f88, Func Offset: 0x268
	// Line 2026, Address: 0x232f8c, Func Offset: 0x26c
	// Line 2027, Address: 0x232f90, Func Offset: 0x270
	// Line 2029, Address: 0x232fa0, Func Offset: 0x280
	// Line 2031, Address: 0x232fa8, Func Offset: 0x288
	// Line 2033, Address: 0x232fb8, Func Offset: 0x298
	// Line 2032, Address: 0x232fbc, Func Offset: 0x29c
	// Line 2033, Address: 0x232fc0, Func Offset: 0x2a0
	// Line 2032, Address: 0x232fc4, Func Offset: 0x2a4
	// Line 2033, Address: 0x232fc8, Func Offset: 0x2a8
	// Line 2036, Address: 0x232fd4, Func Offset: 0x2b4
	// Line 2038, Address: 0x232ff0, Func Offset: 0x2d0
	// Line 2040, Address: 0x232ffc, Func Offset: 0x2dc
	// Line 2039, Address: 0x233000, Func Offset: 0x2e0
	// Line 2040, Address: 0x233004, Func Offset: 0x2e4
	// Line 2039, Address: 0x233008, Func Offset: 0x2e8
	// Line 2040, Address: 0x23300c, Func Offset: 0x2ec
	// Line 2042, Address: 0x233018, Func Offset: 0x2f8
	// Line 2044, Address: 0x233020, Func Offset: 0x300
	// Line 2045, Address: 0x23303c, Func Offset: 0x31c
	// Line 2046, Address: 0x233040, Func Offset: 0x320
	// Line 2048, Address: 0x233058, Func Offset: 0x338
	// Line 2051, Address: 0x233060, Func Offset: 0x340
	// Line 2053, Address: 0x233068, Func Offset: 0x348
	// Line 2055, Address: 0x233080, Func Offset: 0x360
	// Line 2056, Address: 0x233088, Func Offset: 0x368
	// Line 2059, Address: 0x23308c, Func Offset: 0x36c
	// Line 2060, Address: 0x233090, Func Offset: 0x370
	// Line 2061, Address: 0x23309c, Func Offset: 0x37c
	// Line 2062, Address: 0x2330a4, Func Offset: 0x384
	// Line 2063, Address: 0x2330b0, Func Offset: 0x390
	// Line 2064, Address: 0x2330bc, Func Offset: 0x39c
	// Line 2065, Address: 0x2330c0, Func Offset: 0x3a0
	// Line 2066, Address: 0x2330cc, Func Offset: 0x3ac
	// Line 2068, Address: 0x2330d8, Func Offset: 0x3b8
	// Line 2070, Address: 0x2330e0, Func Offset: 0x3c0
	// Line 2072, Address: 0x2330f8, Func Offset: 0x3d8
	// Line 2074, Address: 0x233100, Func Offset: 0x3e0
	// Line 2076, Address: 0x233118, Func Offset: 0x3f8
	// Line 2078, Address: 0x233120, Func Offset: 0x400
	// Line 2082, Address: 0x233138, Func Offset: 0x418
	// Line 2083, Address: 0x233168, Func Offset: 0x448
	// Line 2084, Address: 0x233174, Func Offset: 0x454
	// Line 2087, Address: 0x2331a0, Func Offset: 0x480
	// Func End, Address: 0x2331c4, Func Offset: 0x4a4
}

// 
// Start address: 0x2331d0
void EnemyFatControlDown(sfObj* obj)
{
	EnemyFatWork* ew;
	float vec[4];
	float dt;
	float rdt;
	// Line 2091, Address: 0x2331d0, Func Offset: 0
	// Line 2095, Address: 0x2331e8, Func Offset: 0x18
	// Line 2096, Address: 0x2331f0, Func Offset: 0x20
	// Line 2097, Address: 0x2331f8, Func Offset: 0x28
	// Line 2098, Address: 0x233204, Func Offset: 0x34
	// Line 2100, Address: 0x233230, Func Offset: 0x60
	// Line 2101, Address: 0x23323c, Func Offset: 0x6c
	// Line 2102, Address: 0x233248, Func Offset: 0x78
	// Line 2103, Address: 0x233254, Func Offset: 0x84
	// Line 2105, Address: 0x233264, Func Offset: 0x94
	// Line 2104, Address: 0x233268, Func Offset: 0x98
	// Line 2105, Address: 0x23326c, Func Offset: 0x9c
	// Line 2104, Address: 0x233270, Func Offset: 0xa0
	// Line 2105, Address: 0x233274, Func Offset: 0xa4
	// Line 2106, Address: 0x233280, Func Offset: 0xb0
	// Line 2107, Address: 0x23328c, Func Offset: 0xbc
	// Line 2106, Address: 0x233290, Func Offset: 0xc0
	// Line 2107, Address: 0x23329c, Func Offset: 0xcc
	// Line 2109, Address: 0x2332a4, Func Offset: 0xd4
	// Line 2110, Address: 0x2332a8, Func Offset: 0xd8
	// Line 2111, Address: 0x2332bc, Func Offset: 0xec
	// Line 2112, Address: 0x2332f0, Func Offset: 0x120
	// Line 2113, Address: 0x2332f8, Func Offset: 0x128
	// Line 2115, Address: 0x233304, Func Offset: 0x134
	// Line 2114, Address: 0x233308, Func Offset: 0x138
	// Line 2115, Address: 0x23330c, Func Offset: 0x13c
	// Line 2114, Address: 0x233310, Func Offset: 0x140
	// Line 2115, Address: 0x233314, Func Offset: 0x144
	// Line 2116, Address: 0x233324, Func Offset: 0x154
	// Line 2117, Address: 0x233330, Func Offset: 0x160
	// Line 2119, Address: 0x23335c, Func Offset: 0x18c
	// Line 2120, Address: 0x233360, Func Offset: 0x190
	// Line 2122, Address: 0x233384, Func Offset: 0x1b4
	// Line 2124, Address: 0x233390, Func Offset: 0x1c0
	// Line 2125, Address: 0x233398, Func Offset: 0x1c8
	// Line 2127, Address: 0x2333a0, Func Offset: 0x1d0
	// Line 2128, Address: 0x2333bc, Func Offset: 0x1ec
	// Line 2130, Address: 0x2333f8, Func Offset: 0x228
	// Line 2131, Address: 0x233400, Func Offset: 0x230
	// Line 2132, Address: 0x233418, Func Offset: 0x248
	// Line 2134, Address: 0x233420, Func Offset: 0x250
	// Line 2135, Address: 0x23342c, Func Offset: 0x25c
	// Line 2137, Address: 0x233438, Func Offset: 0x268
	// Line 2136, Address: 0x23343c, Func Offset: 0x26c
	// Line 2137, Address: 0x233440, Func Offset: 0x270
	// Line 2136, Address: 0x233444, Func Offset: 0x274
	// Line 2137, Address: 0x233448, Func Offset: 0x278
	// Line 2138, Address: 0x233458, Func Offset: 0x288
	// Line 2139, Address: 0x233464, Func Offset: 0x294
	// Line 2140, Address: 0x233470, Func Offset: 0x2a0
	// Line 2141, Address: 0x233480, Func Offset: 0x2b0
	// Line 2142, Address: 0x233488, Func Offset: 0x2b8
	// Line 2147, Address: 0x233490, Func Offset: 0x2c0
	// Line 2148, Address: 0x2334ac, Func Offset: 0x2dc
	// Line 2149, Address: 0x2334b4, Func Offset: 0x2e4
	// Line 2150, Address: 0x2334b8, Func Offset: 0x2e8
	// Line 2151, Address: 0x2334cc, Func Offset: 0x2fc
	// Line 2152, Address: 0x2334e4, Func Offset: 0x314
	// Line 2153, Address: 0x2334e8, Func Offset: 0x318
	// Line 2154, Address: 0x233518, Func Offset: 0x348
	// Line 2155, Address: 0x233524, Func Offset: 0x354
	// Line 2157, Address: 0x233550, Func Offset: 0x380
	// Func End, Address: 0x23356c, Func Offset: 0x39c
}

// 
// Start address: 0x233570
void EnemyFatControlDown2(sfObj* obj)
{
	EnemyFatWork* ew;
	float dt;
	// Line 2161, Address: 0x233570, Func Offset: 0
	// Line 2164, Address: 0x233584, Func Offset: 0x14
	// Line 2165, Address: 0x23358c, Func Offset: 0x1c
	// Line 2166, Address: 0x233598, Func Offset: 0x28
	// Line 2169, Address: 0x2335e4, Func Offset: 0x74
	// Line 2170, Address: 0x2335e8, Func Offset: 0x78
	// Line 2171, Address: 0x2335f4, Func Offset: 0x84
	// Line 2172, Address: 0x233604, Func Offset: 0x94
	// Line 2173, Address: 0x233614, Func Offset: 0xa4
	// Line 2175, Address: 0x233620, Func Offset: 0xb0
	// Line 2174, Address: 0x233624, Func Offset: 0xb4
	// Line 2175, Address: 0x233628, Func Offset: 0xb8
	// Line 2174, Address: 0x23362c, Func Offset: 0xbc
	// Line 2175, Address: 0x233630, Func Offset: 0xc0
	// Line 2176, Address: 0x233640, Func Offset: 0xd0
	// Line 2177, Address: 0x23364c, Func Offset: 0xdc
	// Line 2178, Address: 0x233658, Func Offset: 0xe8
	// Line 2179, Address: 0x23366c, Func Offset: 0xfc
	// Line 2180, Address: 0x233698, Func Offset: 0x128
	// Line 2182, Address: 0x2336b4, Func Offset: 0x144
	// Line 2183, Address: 0x2336d0, Func Offset: 0x160
	// Line 2184, Address: 0x2336f4, Func Offset: 0x184
	// Line 2186, Address: 0x233730, Func Offset: 0x1c0
	// Line 2187, Address: 0x23373c, Func Offset: 0x1cc
	// Line 2188, Address: 0x233748, Func Offset: 0x1d8
	// Line 2189, Address: 0x23376c, Func Offset: 0x1fc
	// Line 2190, Address: 0x233770, Func Offset: 0x200
	// Line 2191, Address: 0x23378c, Func Offset: 0x21c
	// Line 2192, Address: 0x233794, Func Offset: 0x224
	// Line 2193, Address: 0x2337a0, Func Offset: 0x230
	// Line 2194, Address: 0x2337ac, Func Offset: 0x23c
	// Line 2195, Address: 0x2337b0, Func Offset: 0x240
	// Line 2196, Address: 0x2337bc, Func Offset: 0x24c
	// Line 2197, Address: 0x2337c4, Func Offset: 0x254
	// Line 2198, Address: 0x2337c8, Func Offset: 0x258
	// Line 2199, Address: 0x2337e4, Func Offset: 0x274
	// Line 2200, Address: 0x2337ec, Func Offset: 0x27c
	// Line 2201, Address: 0x2337f0, Func Offset: 0x280
	// Line 2200, Address: 0x2337f4, Func Offset: 0x284
	// Line 2201, Address: 0x2337f8, Func Offset: 0x288
	// Line 2202, Address: 0x233804, Func Offset: 0x294
	// Line 2203, Address: 0x233834, Func Offset: 0x2c4
	// Line 2204, Address: 0x233840, Func Offset: 0x2d0
	// Line 2203, Address: 0x233844, Func Offset: 0x2d4
	// Line 2204, Address: 0x233868, Func Offset: 0x2f8
	// Line 2205, Address: 0x233874, Func Offset: 0x304
	// Line 2208, Address: 0x2338b8, Func Offset: 0x348
	// Line 2210, Address: 0x2338c8, Func Offset: 0x358
	// Line 2212, Address: 0x2338d0, Func Offset: 0x360
	// Line 2213, Address: 0x2338ec, Func Offset: 0x37c
	// Line 2214, Address: 0x2338fc, Func Offset: 0x38c
	// Line 2216, Address: 0x233904, Func Offset: 0x394
	// Line 2217, Address: 0x23390c, Func Offset: 0x39c
	// Line 2218, Address: 0x233910, Func Offset: 0x3a0
	// Line 2221, Address: 0x23392c, Func Offset: 0x3bc
	// Line 2222, Address: 0x233930, Func Offset: 0x3c0
	// Func End, Address: 0x233948, Func Offset: 0x3d8
}

// 
// Start address: 0x233950
void EnemyFatControlExorcismDown(sfObj* obj)
{
	EnemyFatWork* ew;
	// Line 2226, Address: 0x233950, Func Offset: 0
	// Line 2228, Address: 0x233960, Func Offset: 0x10
	// Line 2229, Address: 0x233968, Func Offset: 0x18
	// Line 2228, Address: 0x23396c, Func Offset: 0x1c
	// Line 2229, Address: 0x233970, Func Offset: 0x20
	// Line 2230, Address: 0x23397c, Func Offset: 0x2c
	// Line 2231, Address: 0x2339bc, Func Offset: 0x6c
	// Line 2232, Address: 0x2339c0, Func Offset: 0x70
	// Line 2233, Address: 0x2339c8, Func Offset: 0x78
	// Line 2234, Address: 0x2339d8, Func Offset: 0x88
	// Line 2235, Address: 0x2339e4, Func Offset: 0x94
	// Line 2236, Address: 0x2339ec, Func Offset: 0x9c
	// Line 2237, Address: 0x2339f4, Func Offset: 0xa4
	// Line 2238, Address: 0x2339fc, Func Offset: 0xac
	// Line 2239, Address: 0x233a08, Func Offset: 0xb8
	// Line 2241, Address: 0x233a1c, Func Offset: 0xcc
	// Line 2242, Address: 0x233a38, Func Offset: 0xe8
	// Line 2243, Address: 0x233a48, Func Offset: 0xf8
	// Line 2244, Address: 0x233a6c, Func Offset: 0x11c
	// Line 2245, Address: 0x233a78, Func Offset: 0x128
	// Line 2247, Address: 0x233a80, Func Offset: 0x130
	// Line 2248, Address: 0x233a8c, Func Offset: 0x13c
	// Line 2249, Address: 0x233a98, Func Offset: 0x148
	// Line 2250, Address: 0x233ac0, Func Offset: 0x170
	// Line 2251, Address: 0x233ad0, Func Offset: 0x180
	// Line 2252, Address: 0x233adc, Func Offset: 0x18c
	// Line 2253, Address: 0x233ae4, Func Offset: 0x194
	// Line 2254, Address: 0x233af4, Func Offset: 0x1a4
	// Line 2255, Address: 0x233b04, Func Offset: 0x1b4
	// Line 2257, Address: 0x233b10, Func Offset: 0x1c0
	// Line 2256, Address: 0x233b14, Func Offset: 0x1c4
	// Line 2257, Address: 0x233b18, Func Offset: 0x1c8
	// Line 2256, Address: 0x233b1c, Func Offset: 0x1cc
	// Line 2257, Address: 0x233b20, Func Offset: 0x1d0
	// Line 2258, Address: 0x233b30, Func Offset: 0x1e0
	// Line 2259, Address: 0x233b3c, Func Offset: 0x1ec
	// Line 2260, Address: 0x233b40, Func Offset: 0x1f0
	// Line 2261, Address: 0x233b4c, Func Offset: 0x1fc
	// Line 2262, Address: 0x233b54, Func Offset: 0x204
	// Line 2263, Address: 0x233b58, Func Offset: 0x208
	// Line 2264, Address: 0x233b78, Func Offset: 0x228
	// Line 2265, Address: 0x233b84, Func Offset: 0x234
	// Line 2266, Address: 0x233b94, Func Offset: 0x244
	// Line 2267, Address: 0x233bb0, Func Offset: 0x260
	// Line 2269, Address: 0x233bd4, Func Offset: 0x284
	// Line 2270, Address: 0x233be0, Func Offset: 0x290
	// Line 2271, Address: 0x233bfc, Func Offset: 0x2ac
	// Line 2272, Address: 0x233c00, Func Offset: 0x2b0
	// Line 2274, Address: 0x233c08, Func Offset: 0x2b8
	// Line 2276, Address: 0x233c10, Func Offset: 0x2c0
	// Line 2277, Address: 0x233c2c, Func Offset: 0x2dc
	// Line 2278, Address: 0x233c34, Func Offset: 0x2e4
	// Line 2280, Address: 0x233c40, Func Offset: 0x2f0
	// Line 2282, Address: 0x233c48, Func Offset: 0x2f8
	// Line 2283, Address: 0x233c6c, Func Offset: 0x31c
	// Line 2284, Address: 0x233c7c, Func Offset: 0x32c
	// Line 2286, Address: 0x233c84, Func Offset: 0x334
	// Line 2287, Address: 0x233c8c, Func Offset: 0x33c
	// Line 2288, Address: 0x233c90, Func Offset: 0x340
	// Line 2291, Address: 0x233cac, Func Offset: 0x35c
	// Line 2292, Address: 0x233cb0, Func Offset: 0x360
	// Func End, Address: 0x233cc4, Func Offset: 0x374
}

// 
// Start address: 0x233cd0
void EnemyFatControlExorcismDownT(sfObj* obj)
{
	EnemyFatWork* ew;
	// Line 2296, Address: 0x233cd0, Func Offset: 0
	// Line 2298, Address: 0x233ce0, Func Offset: 0x10
	// Line 2299, Address: 0x233ce8, Func Offset: 0x18
	// Line 2298, Address: 0x233cec, Func Offset: 0x1c
	// Line 2299, Address: 0x233cf0, Func Offset: 0x20
	// Line 2300, Address: 0x233cfc, Func Offset: 0x2c
	// Line 2302, Address: 0x233d28, Func Offset: 0x58
	// Line 2303, Address: 0x233d30, Func Offset: 0x60
	// Line 2304, Address: 0x233d40, Func Offset: 0x70
	// Line 2305, Address: 0x233d4c, Func Offset: 0x7c
	// Line 2306, Address: 0x233d54, Func Offset: 0x84
	// Line 2307, Address: 0x233d5c, Func Offset: 0x8c
	// Line 2308, Address: 0x233d64, Func Offset: 0x94
	// Line 2309, Address: 0x233d70, Func Offset: 0xa0
	// Line 2310, Address: 0x233d7c, Func Offset: 0xac
	// Line 2311, Address: 0x233d88, Func Offset: 0xb8
	// Line 2312, Address: 0x233d94, Func Offset: 0xc4
	// Line 2314, Address: 0x233d9c, Func Offset: 0xcc
	// Line 2313, Address: 0x233da0, Func Offset: 0xd0
	// Line 2314, Address: 0x233da4, Func Offset: 0xd4
	// Line 2313, Address: 0x233da8, Func Offset: 0xd8
	// Line 2314, Address: 0x233dac, Func Offset: 0xdc
	// Line 2315, Address: 0x233db8, Func Offset: 0xe8
	// Line 2316, Address: 0x233dc4, Func Offset: 0xf4
	// Line 2317, Address: 0x233dc8, Func Offset: 0xf8
	// Line 2318, Address: 0x233de0, Func Offset: 0x110
	// Line 2319, Address: 0x233e04, Func Offset: 0x134
	// Line 2320, Address: 0x233e10, Func Offset: 0x140
	// Line 2322, Address: 0x233e18, Func Offset: 0x148
	// Line 2323, Address: 0x233e24, Func Offset: 0x154
	// Line 2324, Address: 0x233e2c, Func Offset: 0x15c
	// Line 2325, Address: 0x233e34, Func Offset: 0x164
	// Line 2326, Address: 0x233e38, Func Offset: 0x168
	// Line 2327, Address: 0x233e48, Func Offset: 0x178
	// Line 2328, Address: 0x233e50, Func Offset: 0x180
	// Line 2329, Address: 0x233e74, Func Offset: 0x1a4
	// Line 2331, Address: 0x233e7c, Func Offset: 0x1ac
	// Line 2332, Address: 0x233e84, Func Offset: 0x1b4
	// Line 2333, Address: 0x233e88, Func Offset: 0x1b8
	// Line 2334, Address: 0x233ea4, Func Offset: 0x1d4
	// Line 2337, Address: 0x233eac, Func Offset: 0x1dc
	// Line 2338, Address: 0x233eb0, Func Offset: 0x1e0
	// Func End, Address: 0x233ec4, Func Offset: 0x1f4
}

// 
// Start address: 0x233ed0
void EnemyFatControlFinished(sfObj* obj)
{
	EnemyFatWork* ew;
	// Line 2342, Address: 0x233ed0, Func Offset: 0
	// Line 2344, Address: 0x233ee0, Func Offset: 0x10
	// Line 2345, Address: 0x233eec, Func Offset: 0x1c
	// Line 2346, Address: 0x233f34, Func Offset: 0x64
	// Line 2347, Address: 0x233f38, Func Offset: 0x68
	// Line 2349, Address: 0x233f44, Func Offset: 0x74
	// Line 2350, Address: 0x233f48, Func Offset: 0x78
	// Line 2351, Address: 0x233f54, Func Offset: 0x84
	// Line 2353, Address: 0x233f60, Func Offset: 0x90
	// Line 2354, Address: 0x233f70, Func Offset: 0xa0
	// Line 2355, Address: 0x233f84, Func Offset: 0xb4
	// Line 2356, Address: 0x233f88, Func Offset: 0xb8
	// Line 2355, Address: 0x233f8c, Func Offset: 0xbc
	// Line 2356, Address: 0x233f90, Func Offset: 0xc0
	// Line 2357, Address: 0x233f98, Func Offset: 0xc8
	// Line 2358, Address: 0x233fa0, Func Offset: 0xd0
	// Line 2359, Address: 0x233fcc, Func Offset: 0xfc
	// Line 2361, Address: 0x233fd0, Func Offset: 0x100
	// Line 2365, Address: 0x233fd8, Func Offset: 0x108
	// Line 2367, Address: 0x233fe0, Func Offset: 0x110
	// Line 2369, Address: 0x233fe8, Func Offset: 0x118
	// Line 2371, Address: 0x233ff0, Func Offset: 0x120
	// Line 2372, Address: 0x234000, Func Offset: 0x130
	// Line 2373, Address: 0x23400c, Func Offset: 0x13c
	// Line 2374, Address: 0x23401c, Func Offset: 0x14c
	// Line 2377, Address: 0x234024, Func Offset: 0x154
	// Line 2378, Address: 0x234028, Func Offset: 0x158
	// Line 2379, Address: 0x234038, Func Offset: 0x168
	// Line 2380, Address: 0x234044, Func Offset: 0x174
	// Line 2381, Address: 0x234054, Func Offset: 0x184
	// Line 2383, Address: 0x234060, Func Offset: 0x190
	// Line 2384, Address: 0x23406c, Func Offset: 0x19c
	// Line 2385, Address: 0x234078, Func Offset: 0x1a8
	// Line 2386, Address: 0x234084, Func Offset: 0x1b4
	// Line 2388, Address: 0x2340c8, Func Offset: 0x1f8
	// Line 2389, Address: 0x2340d8, Func Offset: 0x208
	// Line 2391, Address: 0x2340e4, Func Offset: 0x214
	// Line 2392, Address: 0x2340ec, Func Offset: 0x21c
	// Line 2393, Address: 0x2340f0, Func Offset: 0x220
	// Line 2394, Address: 0x234114, Func Offset: 0x244
	// Line 2395, Address: 0x234124, Func Offset: 0x254
	// Line 2396, Address: 0x234130, Func Offset: 0x260
	// Line 2399, Address: 0x23413c, Func Offset: 0x26c
	// Line 2400, Address: 0x234140, Func Offset: 0x270
	// Func End, Address: 0x234154, Func Offset: 0x284
}

// 
// Start address: 0x234160
void EnemyFatControlWait(sfObj* obj)
{
	EnemyFatWork* ew;
	float* pos;
	float* ppos;
	float a;
	float dt;
	float dist;
	EnemyMeasureResult mres;
	// Line 2404, Address: 0x234160, Func Offset: 0
	// Line 2408, Address: 0x234180, Func Offset: 0x20
	// Line 2409, Address: 0x23418c, Func Offset: 0x2c
	// Line 2410, Address: 0x234198, Func Offset: 0x38
	// Line 2411, Address: 0x2341a4, Func Offset: 0x44
	// Line 2412, Address: 0x2341b0, Func Offset: 0x50
	// Line 2413, Address: 0x2341bc, Func Offset: 0x5c
	// Line 2415, Address: 0x2341e8, Func Offset: 0x88
	// Line 2416, Address: 0x2341f4, Func Offset: 0x94
	// Line 2417, Address: 0x234200, Func Offset: 0xa0
	// Line 2418, Address: 0x23420c, Func Offset: 0xac
	// Line 2419, Address: 0x234218, Func Offset: 0xb8
	// Line 2420, Address: 0x234224, Func Offset: 0xc4
	// Line 2421, Address: 0x234230, Func Offset: 0xd0
	// Line 2424, Address: 0x234238, Func Offset: 0xd8
	// Line 2426, Address: 0x234264, Func Offset: 0x104
	// Line 2427, Address: 0x234278, Func Offset: 0x118
	// Line 2428, Address: 0x234280, Func Offset: 0x120
	// Line 2430, Address: 0x234288, Func Offset: 0x128
	// Line 2431, Address: 0x2342a8, Func Offset: 0x148
	// Line 2433, Address: 0x2342c4, Func Offset: 0x164
	// Line 2432, Address: 0x2342c8, Func Offset: 0x168
	// Line 2433, Address: 0x2342cc, Func Offset: 0x16c
	// Line 2434, Address: 0x2342d4, Func Offset: 0x174
	// Line 2435, Address: 0x2342dc, Func Offset: 0x17c
	// Line 2436, Address: 0x2342ec, Func Offset: 0x18c
	// Line 2437, Address: 0x2342f4, Func Offset: 0x194
	// Line 2442, Address: 0x234310, Func Offset: 0x1b0
	// Line 2444, Address: 0x234318, Func Offset: 0x1b8
	// Line 2445, Address: 0x234324, Func Offset: 0x1c4
	// Line 2446, Address: 0x234344, Func Offset: 0x1e4
	// Line 2447, Address: 0x23435c, Func Offset: 0x1fc
	// Line 2448, Address: 0x234364, Func Offset: 0x204
	// Line 2449, Address: 0x234368, Func Offset: 0x208
	// Line 2453, Address: 0x234370, Func Offset: 0x210
	// Line 2454, Address: 0x234378, Func Offset: 0x218
	// Line 2455, Address: 0x234388, Func Offset: 0x228
	// Line 2456, Address: 0x234390, Func Offset: 0x230
	// Line 2457, Address: 0x234394, Func Offset: 0x234
	// Line 2459, Address: 0x234398, Func Offset: 0x238
	// Func End, Address: 0x2343bc, Func Offset: 0x25c
}

// 
// Start address: 0x2343c0
void EnemyFatSetExtentDamage(sfObj* obj)
{
	EnemyFatAnime anime;
	// Line 2466, Address: 0x2343c0, Func Offset: 0
	// Line 2468, Address: 0x2343cc, Func Offset: 0xc
	// Line 2469, Address: 0x2343fc, Func Offset: 0x3c
	// Line 2470, Address: 0x234400, Func Offset: 0x40
	// Line 2471, Address: 0x23440c, Func Offset: 0x4c
	// Line 2485, Address: 0x234444, Func Offset: 0x84
	// Line 2486, Address: 0x234448, Func Offset: 0x88
	// Line 2489, Address: 0x234460, Func Offset: 0xa0
	// Func End, Address: 0x234470, Func Offset: 0xb0
}

// 
// Start address: 0x234470
void EnemyFatCheckExorcismDamage(sfObj* obj)
{
	EnemyFatWork* ew;
	float d;
	// Line 2493, Address: 0x234470, Func Offset: 0
	// Line 2496, Address: 0x234480, Func Offset: 0x10
	// Line 2497, Address: 0x23448c, Func Offset: 0x1c
	// Line 2498, Address: 0x234494, Func Offset: 0x24
	// Line 2499, Address: 0x2344a8, Func Offset: 0x38
	// Line 2500, Address: 0x2344ac, Func Offset: 0x3c
	// Line 2499, Address: 0x2344b0, Func Offset: 0x40
	// Line 2500, Address: 0x2344bc, Func Offset: 0x4c
	// Line 2501, Address: 0x2344d8, Func Offset: 0x68
	// Line 2504, Address: 0x2344f0, Func Offset: 0x80
	// Line 2505, Address: 0x234524, Func Offset: 0xb4
	// Line 2506, Address: 0x234528, Func Offset: 0xb8
	// Line 2507, Address: 0x234530, Func Offset: 0xc0
	// Line 2508, Address: 0x234550, Func Offset: 0xe0
	// Line 2510, Address: 0x234558, Func Offset: 0xe8
	// Line 2511, Address: 0x23456c, Func Offset: 0xfc
	// Line 2512, Address: 0x234578, Func Offset: 0x108
	// Line 2514, Address: 0x234584, Func Offset: 0x114
	// Line 2518, Address: 0x23458c, Func Offset: 0x11c
	// Line 2519, Address: 0x234590, Func Offset: 0x120
	// Line 2520, Address: 0x2345a4, Func Offset: 0x134
	// Line 2521, Address: 0x2345b0, Func Offset: 0x140
	// Line 2522, Address: 0x2345bc, Func Offset: 0x14c
	// Line 2523, Address: 0x2345c8, Func Offset: 0x158
	// Line 2525, Address: 0x2345d4, Func Offset: 0x164
	// Line 2526, Address: 0x2345dc, Func Offset: 0x16c
	// Line 2527, Address: 0x2345e0, Func Offset: 0x170
	// Line 2528, Address: 0x2345f0, Func Offset: 0x180
	// Line 2529, Address: 0x2345fc, Func Offset: 0x18c
	// Line 2530, Address: 0x234608, Func Offset: 0x198
	// Line 2532, Address: 0x234614, Func Offset: 0x1a4
	// Line 2533, Address: 0x23461c, Func Offset: 0x1ac
	// Line 2534, Address: 0x234620, Func Offset: 0x1b0
	// Line 2539, Address: 0x234630, Func Offset: 0x1c0
	// Line 2540, Address: 0x234640, Func Offset: 0x1d0
	// Line 2541, Address: 0x23464c, Func Offset: 0x1dc
	// Line 2542, Address: 0x234658, Func Offset: 0x1e8
	// Line 2545, Address: 0x234664, Func Offset: 0x1f4
	// Line 2546, Address: 0x234670, Func Offset: 0x200
	// Line 2548, Address: 0x234678, Func Offset: 0x208
	// Line 2549, Address: 0x234694, Func Offset: 0x224
	// Line 2550, Address: 0x2346a0, Func Offset: 0x230
	// Line 2551, Address: 0x2346bc, Func Offset: 0x24c
	// Line 2552, Address: 0x2346c0, Func Offset: 0x250
	// Func End, Address: 0x2346d4, Func Offset: 0x264
}

// 
// Start address: 0x2346e0
void EnemyFatSetSong(sfObj* obj)
{
	EnemyFatWork* ew;
	float* pos;
	float* ppos;
	float spos[4];
	float d;
	float dt;
	int song_no;
	// Line 2556, Address: 0x2346e0, Func Offset: 0
	// Line 2562, Address: 0x234704, Func Offset: 0x24
	// Line 2563, Address: 0x23470c, Func Offset: 0x2c
	// Line 2564, Address: 0x234718, Func Offset: 0x38
	// Line 2565, Address: 0x234724, Func Offset: 0x44
	// Line 2567, Address: 0x23472c, Func Offset: 0x4c
	// Line 2568, Address: 0x234730, Func Offset: 0x50
	// Line 2569, Address: 0x234738, Func Offset: 0x58
	// Line 2572, Address: 0x234748, Func Offset: 0x68
	// Line 2571, Address: 0x23474c, Func Offset: 0x6c
	// Line 2569, Address: 0x234750, Func Offset: 0x70
	// Line 2572, Address: 0x234758, Func Offset: 0x78
	// Line 2571, Address: 0x23475c, Func Offset: 0x7c
	// Line 2569, Address: 0x234760, Func Offset: 0x80
	// Line 2570, Address: 0x23476c, Func Offset: 0x8c
	// Line 2572, Address: 0x234770, Func Offset: 0x90
	// Line 2573, Address: 0x23477c, Func Offset: 0x9c
	// Line 2574, Address: 0x234794, Func Offset: 0xb4
	// Line 2575, Address: 0x23479c, Func Offset: 0xbc
	// Line 2576, Address: 0x2347a4, Func Offset: 0xc4
	// Line 2578, Address: 0x2347a8, Func Offset: 0xc8
	// Line 2579, Address: 0x2347ac, Func Offset: 0xcc
	// Line 2580, Address: 0x2347b0, Func Offset: 0xd0
	// Line 2581, Address: 0x2347c0, Func Offset: 0xe0
	// Line 2583, Address: 0x2347d8, Func Offset: 0xf8
	// Line 2585, Address: 0x2347e0, Func Offset: 0x100
	// Line 2587, Address: 0x23480c, Func Offset: 0x12c
	// Line 2592, Address: 0x23481c, Func Offset: 0x13c
	// Line 2594, Address: 0x234838, Func Offset: 0x158
	// Line 2597, Address: 0x234858, Func Offset: 0x178
	// Line 2598, Address: 0x234860, Func Offset: 0x180
	// Func End, Address: 0x234888, Func Offset: 0x1a8
}

// 
// Start address: 0x234890
int EnemyFatCheckSongEnd(sfObj* obj)
{
	EnemyFatWork* ew;
	// Line 2602, Address: 0x234890, Func Offset: 0
	// Line 2604, Address: 0x234898, Func Offset: 0x8
	// Line 2605, Address: 0x2348a4, Func Offset: 0x14
	// Line 2607, Address: 0x2348c4, Func Offset: 0x34
	// Func End, Address: 0x2348d0, Func Offset: 0x40
}

// 
// Start address: 0x2348d0
float EnemyFatCalcSongPos(sfObj* obj, float* pos)
{
	float* cpos;
	float* ppos;
	float pdir[4];
	float dir[4];
	float wdir[4];
	float vec[4];
	float d;
	// Line 2611, Address: 0x2348d0, Func Offset: 0
	// Line 2615, Address: 0x2348ec, Func Offset: 0x1c
	// Line 2616, Address: 0x2348f8, Func Offset: 0x28
	// Line 2617, Address: 0x23490c, Func Offset: 0x3c
	// Line 2618, Address: 0x234914, Func Offset: 0x44
	// Line 2619, Address: 0x23492c, Func Offset: 0x5c
	// Line 2621, Address: 0x234930, Func Offset: 0x60
	// Line 2620, Address: 0x234934, Func Offset: 0x64
	// Line 2621, Address: 0x234938, Func Offset: 0x68
	// Line 2622, Address: 0x23494c, Func Offset: 0x7c
	// Line 2623, Address: 0x234950, Func Offset: 0x80
	// Line 2622, Address: 0x234958, Func Offset: 0x88
	// Line 2623, Address: 0x23495c, Func Offset: 0x8c
	// Line 2624, Address: 0x234980, Func Offset: 0xb0
	// Line 2625, Address: 0x2349ac, Func Offset: 0xdc
	// Line 2626, Address: 0x2349d8, Func Offset: 0x108
	// Line 2627, Address: 0x234a08, Func Offset: 0x138
	// Line 2628, Address: 0x234a38, Func Offset: 0x168
	// Line 2627, Address: 0x234a40, Func Offset: 0x170
	// Line 2628, Address: 0x234a44, Func Offset: 0x174
	// Line 2629, Address: 0x234a60, Func Offset: 0x190
	// Line 2631, Address: 0x234a78, Func Offset: 0x1a8
	// Func End, Address: 0x234a90, Func Offset: 0x1c0
}

// 
// Start address: 0x234a90
void EnemyFatSetEventPlayerCheck(sfObj* obj)
{
	EnemyFatWork* ew;
	EnemySenseData* es;
	// Line 2635, Address: 0x234a90, Func Offset: 0
	// Line 2638, Address: 0x234aa0, Func Offset: 0x10
	// Line 2639, Address: 0x234aa8, Func Offset: 0x18
	// Line 2640, Address: 0x234aac, Func Offset: 0x1c
	// Line 2641, Address: 0x234ab8, Func Offset: 0x28
	// Line 2644, Address: 0x234ac4, Func Offset: 0x34
	// Line 2642, Address: 0x234ac8, Func Offset: 0x38
	// Line 2644, Address: 0x234ad4, Func Offset: 0x44
	// Line 2645, Address: 0x234ae4, Func Offset: 0x54
	// Line 2646, Address: 0x234ae8, Func Offset: 0x58
	// Line 2645, Address: 0x234aec, Func Offset: 0x5c
	// Line 2647, Address: 0x234af0, Func Offset: 0x60
	// Line 2646, Address: 0x234af4, Func Offset: 0x64
	// Line 2647, Address: 0x234af8, Func Offset: 0x68
	// Line 2648, Address: 0x234afc, Func Offset: 0x6c
	// Line 2649, Address: 0x234b08, Func Offset: 0x78
	// Line 2650, Address: 0x234b10, Func Offset: 0x80
	// Line 2651, Address: 0x234b18, Func Offset: 0x88
	// Line 2652, Address: 0x234b24, Func Offset: 0x94
	// Line 2654, Address: 0x234b28, Func Offset: 0x98
	// Line 2656, Address: 0x234b50, Func Offset: 0xc0
	// Line 2657, Address: 0x234b54, Func Offset: 0xc4
	// Line 2656, Address: 0x234b60, Func Offset: 0xd0
	// Line 2657, Address: 0x234b64, Func Offset: 0xd4
	// Line 2659, Address: 0x234b6c, Func Offset: 0xdc
	// Line 2660, Address: 0x234b74, Func Offset: 0xe4
	// Line 2661, Address: 0x234b78, Func Offset: 0xe8
	// Line 2662, Address: 0x234b7c, Func Offset: 0xec
	// Line 2661, Address: 0x234b8c, Func Offset: 0xfc
	// Line 2662, Address: 0x234b90, Func Offset: 0x100
	// Line 2663, Address: 0x234b9c, Func Offset: 0x10c
	// Line 2664, Address: 0x234ba4, Func Offset: 0x114
	// Line 2665, Address: 0x234ba8, Func Offset: 0x118
	// Line 2668, Address: 0x234bc0, Func Offset: 0x130
	// Func End, Address: 0x234bd4, Func Offset: 0x144
}

// 
// Start address: 0x234be0
void EnemyFatSetEventDamageCheck(sfObj* obj)
{
	// Line 2672, Address: 0x234be0, Func Offset: 0
	// Line 2674, Address: 0x234bec, Func Offset: 0xc
	// Line 2675, Address: 0x234bf4, Func Offset: 0x14
	// Line 2677, Address: 0x234c6c, Func Offset: 0x8c
	// Line 2678, Address: 0x234c70, Func Offset: 0x90
	// Line 2684, Address: 0x234c9c, Func Offset: 0xbc
	// Line 2685, Address: 0x234ca0, Func Offset: 0xc0
	// Line 2686, Address: 0x234cb8, Func Offset: 0xd8
	// Line 2688, Address: 0x234cd0, Func Offset: 0xf0
	// Line 2689, Address: 0x234cd8, Func Offset: 0xf8
	// Line 2691, Address: 0x234cf4, Func Offset: 0x114
	// Line 2692, Address: 0x234cf8, Func Offset: 0x118
	// Line 2698, Address: 0x234d00, Func Offset: 0x120
	// Line 2699, Address: 0x234d18, Func Offset: 0x138
	// Line 2701, Address: 0x234d34, Func Offset: 0x154
	// Line 2702, Address: 0x234d40, Func Offset: 0x160
	// Line 2705, Address: 0x234d5c, Func Offset: 0x17c
	// Line 2706, Address: 0x234d64, Func Offset: 0x184
	// Line 2707, Address: 0x234d68, Func Offset: 0x188
	// Line 2708, Address: 0x234d78, Func Offset: 0x198
	// Line 2711, Address: 0x234d90, Func Offset: 0x1b0
	// Line 2714, Address: 0x234d98, Func Offset: 0x1b8
	// Line 2716, Address: 0x234db4, Func Offset: 0x1d4
	// Line 2717, Address: 0x234dcc, Func Offset: 0x1ec
	// Line 2719, Address: 0x234de8, Func Offset: 0x208
	// Line 2720, Address: 0x234df0, Func Offset: 0x210
	// Line 2724, Address: 0x234e0c, Func Offset: 0x22c
	// Line 2725, Address: 0x234e10, Func Offset: 0x230
	// Func End, Address: 0x234e20, Func Offset: 0x240
}

// 
// Start address: 0x234e20
void EnemyEDFatRollUp(void* obj)
{
	// Line 2732, Address: 0x234e20, Func Offset: 0
	// Func End, Address: 0x234e28, Func Offset: 0x8
}

// 
// Start address: 0x234e30
void EnemyEDFatRevival(void* obj)
{
	EnemyFatWork* ew;
	float dist;
	// Line 2737, Address: 0x234e30, Func Offset: 0
	// Line 2740, Address: 0x234e44, Func Offset: 0x14
	// Line 2741, Address: 0x234e50, Func Offset: 0x20
	// Line 2742, Address: 0x234e5c, Func Offset: 0x2c
	// Line 2743, Address: 0x234e68, Func Offset: 0x38
	// Line 2744, Address: 0x234e74, Func Offset: 0x44
	// Line 2745, Address: 0x234e7c, Func Offset: 0x4c
	// Line 2746, Address: 0x234e80, Func Offset: 0x50
	// Line 2745, Address: 0x234e84, Func Offset: 0x54
	// Line 2746, Address: 0x234e88, Func Offset: 0x58
	// Line 2747, Address: 0x234ea4, Func Offset: 0x74
	// Line 2748, Address: 0x234ec0, Func Offset: 0x90
	// Line 2749, Address: 0x234ed8, Func Offset: 0xa8
	// Line 2750, Address: 0x234ef8, Func Offset: 0xc8
	// Line 2751, Address: 0x234f00, Func Offset: 0xd0
	// Line 2754, Address: 0x234f3c, Func Offset: 0x10c
	// Line 2755, Address: 0x234f40, Func Offset: 0x110
	// Line 2756, Address: 0x234f48, Func Offset: 0x118
	// Line 2757, Address: 0x234f58, Func Offset: 0x128
	// Line 2758, Address: 0x234f90, Func Offset: 0x160
	// Line 2759, Address: 0x234f98, Func Offset: 0x168
	// Line 2760, Address: 0x234fdc, Func Offset: 0x1ac
	// Line 2761, Address: 0x234fe4, Func Offset: 0x1b4
	// Line 2762, Address: 0x234ff0, Func Offset: 0x1c0
	// Line 2763, Address: 0x234ffc, Func Offset: 0x1cc
	// Line 2764, Address: 0x235000, Func Offset: 0x1d0
	// Func End, Address: 0x235018, Func Offset: 0x1e8
}

// 
// Start address: 0x235020
void EnemyEDFatAdditionalDamage(void* obj)
{
	EnemyFatWork* ew;
	EnemyBattleDamage bd;
	float vec[4];
	float rrot[4];
	int d;
	int motion;
	int nextstep;
	// Line 2768, Address: 0x235020, Func Offset: 0
	// Line 2774, Address: 0x235038, Func Offset: 0x18
	// Line 2775, Address: 0x235044, Func Offset: 0x24
	// Line 2776, Address: 0x235050, Func Offset: 0x30
	// Line 2777, Address: 0x23505c, Func Offset: 0x3c
	// Line 2778, Address: 0x235068, Func Offset: 0x48
	// Line 2779, Address: 0x235080, Func Offset: 0x60
	// Line 2780, Address: 0x23508c, Func Offset: 0x6c
	// Line 2781, Address: 0x235090, Func Offset: 0x70
	// Line 2782, Address: 0x2350b4, Func Offset: 0x94
	// Line 2783, Address: 0x2350dc, Func Offset: 0xbc
	// Line 2784, Address: 0x2350f8, Func Offset: 0xd8
	// Line 2785, Address: 0x235124, Func Offset: 0x104
	// Line 2786, Address: 0x235134, Func Offset: 0x114
	// Line 2787, Address: 0x23513c, Func Offset: 0x11c
	// Line 2788, Address: 0x235148, Func Offset: 0x128
	// Line 2789, Address: 0x23515c, Func Offset: 0x13c
	// Line 2790, Address: 0x235160, Func Offset: 0x140
	// Line 2791, Address: 0x235170, Func Offset: 0x150
	// Line 2792, Address: 0x235198, Func Offset: 0x178
	// Line 2793, Address: 0x2351c4, Func Offset: 0x1a4
	// Line 2794, Address: 0x2351cc, Func Offset: 0x1ac
	// Line 2795, Address: 0x2351fc, Func Offset: 0x1dc
	// Line 2797, Address: 0x235204, Func Offset: 0x1e4
	// Line 2796, Address: 0x235208, Func Offset: 0x1e8
	// Line 2797, Address: 0x23520c, Func Offset: 0x1ec
	// Line 2796, Address: 0x235210, Func Offset: 0x1f0
	// Line 2797, Address: 0x235214, Func Offset: 0x1f4
	// Line 2798, Address: 0x235224, Func Offset: 0x204
	// Line 2799, Address: 0x235230, Func Offset: 0x210
	// Line 2801, Address: 0x23525c, Func Offset: 0x23c
	// Line 2802, Address: 0x235260, Func Offset: 0x240
	// Line 2804, Address: 0x235284, Func Offset: 0x264
	// Line 2806, Address: 0x235290, Func Offset: 0x270
	// Line 2807, Address: 0x235298, Func Offset: 0x278
	// Line 2811, Address: 0x2352a0, Func Offset: 0x280
	// Line 2818, Address: 0x2352f0, Func Offset: 0x2d0
	// Line 2821, Address: 0x2352f4, Func Offset: 0x2d4
	// Line 2822, Address: 0x2352fc, Func Offset: 0x2dc
	// Line 2823, Address: 0x235300, Func Offset: 0x2e0
	// Line 2824, Address: 0x235314, Func Offset: 0x2f4
	// Line 2825, Address: 0x235324, Func Offset: 0x304
	// Line 2826, Address: 0x23532c, Func Offset: 0x30c
	// Line 2827, Address: 0x235358, Func Offset: 0x338
	// Line 2828, Address: 0x235378, Func Offset: 0x358
	// Line 2829, Address: 0x235388, Func Offset: 0x368
	// Line 2830, Address: 0x23538c, Func Offset: 0x36c
	// Line 2831, Address: 0x235398, Func Offset: 0x378
	// Line 2833, Address: 0x2353a0, Func Offset: 0x380
	// Line 2834, Address: 0x2353ac, Func Offset: 0x38c
	// Line 2835, Address: 0x2353b8, Func Offset: 0x398
	// Line 2836, Address: 0x2353c8, Func Offset: 0x3a8
	// Line 2837, Address: 0x2353d8, Func Offset: 0x3b8
	// Line 2839, Address: 0x2353e4, Func Offset: 0x3c4
	// Line 2838, Address: 0x2353e8, Func Offset: 0x3c8
	// Line 2839, Address: 0x2353ec, Func Offset: 0x3cc
	// Line 2838, Address: 0x2353f0, Func Offset: 0x3d0
	// Line 2839, Address: 0x2353f4, Func Offset: 0x3d4
	// Line 2841, Address: 0x235404, Func Offset: 0x3e4
	// Line 2843, Address: 0x235410, Func Offset: 0x3f0
	// Line 2844, Address: 0x235420, Func Offset: 0x400
	// Line 2846, Address: 0x23542c, Func Offset: 0x40c
	// Line 2845, Address: 0x235430, Func Offset: 0x410
	// Line 2846, Address: 0x235434, Func Offset: 0x414
	// Line 2845, Address: 0x235438, Func Offset: 0x418
	// Line 2846, Address: 0x23543c, Func Offset: 0x41c
	// Line 2849, Address: 0x235448, Func Offset: 0x428
	// Line 2851, Address: 0x235460, Func Offset: 0x440
	// Line 2852, Address: 0x23546c, Func Offset: 0x44c
	// Line 2854, Address: 0x235478, Func Offset: 0x458
	// Line 2853, Address: 0x23547c, Func Offset: 0x45c
	// Line 2854, Address: 0x235480, Func Offset: 0x460
	// Line 2853, Address: 0x235484, Func Offset: 0x464
	// Line 2854, Address: 0x235488, Func Offset: 0x468
	// Line 2856, Address: 0x235494, Func Offset: 0x474
	// Line 2857, Address: 0x2354a0, Func Offset: 0x480
	// Line 2859, Address: 0x2354b8, Func Offset: 0x498
	// Line 2861, Address: 0x2354d0, Func Offset: 0x4b0
	// Line 2864, Address: 0x2354d8, Func Offset: 0x4b8
	// Line 2866, Address: 0x2354e0, Func Offset: 0x4c0
	// Line 2868, Address: 0x2354f8, Func Offset: 0x4d8
	// Line 2869, Address: 0x235500, Func Offset: 0x4e0
	// Line 2873, Address: 0x235504, Func Offset: 0x4e4
	// Line 2874, Address: 0x235508, Func Offset: 0x4e8
	// Line 2875, Address: 0x235514, Func Offset: 0x4f4
	// Line 2876, Address: 0x23551c, Func Offset: 0x4fc
	// Line 2877, Address: 0x235524, Func Offset: 0x504
	// Line 2878, Address: 0x23552c, Func Offset: 0x50c
	// Line 2879, Address: 0x235538, Func Offset: 0x518
	// Line 2880, Address: 0x235540, Func Offset: 0x520
	// Line 2882, Address: 0x23554c, Func Offset: 0x52c
	// Line 2883, Address: 0x235550, Func Offset: 0x530
	// Func End, Address: 0x23556c, Func Offset: 0x54c
}

// 
// Start address: 0x235570
void EnemyEDFatAdditionalDamageDown(void* obj)
{
	EnemyFatWork* ew;
	EnemyBattleDamage bd;
	// Line 2887, Address: 0x235570, Func Offset: 0
	// Line 2890, Address: 0x235584, Func Offset: 0x14
	// Line 2891, Address: 0x235590, Func Offset: 0x20
	// Line 2892, Address: 0x23559c, Func Offset: 0x2c
	// Line 2893, Address: 0x2355ac, Func Offset: 0x3c
	// Line 2895, Address: 0x2355d8, Func Offset: 0x68
	// Line 2896, Address: 0x2355ec, Func Offset: 0x7c
	// Line 2897, Address: 0x2355f0, Func Offset: 0x80
	// Line 2898, Address: 0x235614, Func Offset: 0xa4
	// Line 2899, Address: 0x235618, Func Offset: 0xa8
	// Line 2900, Address: 0x23562c, Func Offset: 0xbc
	// Line 2901, Address: 0x235634, Func Offset: 0xc4
	// Line 2902, Address: 0x235638, Func Offset: 0xc8
	// Line 2903, Address: 0x235644, Func Offset: 0xd4
	// Line 2904, Address: 0x23564c, Func Offset: 0xdc
	// Line 2905, Address: 0x235650, Func Offset: 0xe0
	// Line 2906, Address: 0x23565c, Func Offset: 0xec
	// Line 2907, Address: 0x235660, Func Offset: 0xf0
	// Line 2908, Address: 0x235670, Func Offset: 0x100
	// Line 2909, Address: 0x235680, Func Offset: 0x110
	// Line 2910, Address: 0x235694, Func Offset: 0x124
	// Line 2911, Address: 0x2356a4, Func Offset: 0x134
	// Line 2913, Address: 0x2356c0, Func Offset: 0x150
	// Line 2914, Address: 0x2356c8, Func Offset: 0x158
	// Line 2915, Address: 0x2356ec, Func Offset: 0x17c
	// Line 2916, Address: 0x2356f8, Func Offset: 0x188
	// Line 2918, Address: 0x235704, Func Offset: 0x194
	// Line 2919, Address: 0x235708, Func Offset: 0x198
	// Line 2920, Address: 0x235724, Func Offset: 0x1b4
	// Line 2921, Address: 0x235744, Func Offset: 0x1d4
	// Line 2922, Address: 0x235750, Func Offset: 0x1e0
	// Line 2923, Address: 0x235758, Func Offset: 0x1e8
	// Line 2926, Address: 0x235768, Func Offset: 0x1f8
	// Line 2927, Address: 0x235784, Func Offset: 0x214
	// Func End, Address: 0x2357a0, Func Offset: 0x230
}

// 
// Start address: 0x2357a0
void EnemyEDFatFinish(void* obj)
{
	// Line 2931, Address: 0x2357a0, Func Offset: 0
	// Line 2933, Address: 0x2357ac, Func Offset: 0xc
	// Line 2934, Address: 0x2357b4, Func Offset: 0x14
	// Line 2935, Address: 0x2357c8, Func Offset: 0x28
	// Line 2936, Address: 0x2357e4, Func Offset: 0x44
	// Line 2937, Address: 0x2357ec, Func Offset: 0x4c
	// Line 2938, Address: 0x2357f8, Func Offset: 0x58
	// Line 2939, Address: 0x235804, Func Offset: 0x64
	// Func End, Address: 0x235814, Func Offset: 0x74
}

// 
// Start address: 0x235820
void EnemyEDFatMissingInChase(void* obj)
{
	float* pos;
	float* ppos;
	// Line 2943, Address: 0x235820, Func Offset: 0
	// Line 2945, Address: 0x235830, Func Offset: 0x10
	// Line 2946, Address: 0x235840, Func Offset: 0x20
	// Line 2947, Address: 0x23584c, Func Offset: 0x2c
	// Line 2948, Address: 0x235854, Func Offset: 0x34
	// Line 2949, Address: 0x23586c, Func Offset: 0x4c
	// Line 2950, Address: 0x235874, Func Offset: 0x54
	// Line 2951, Address: 0x235880, Func Offset: 0x60
	// Line 2952, Address: 0x23588c, Func Offset: 0x6c
	// Line 2953, Address: 0x235890, Func Offset: 0x70
	// Func End, Address: 0x2358a4, Func Offset: 0x84
}

