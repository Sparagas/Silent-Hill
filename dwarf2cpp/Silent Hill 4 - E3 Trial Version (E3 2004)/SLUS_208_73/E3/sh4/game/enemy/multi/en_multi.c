typedef struct EnemyGhostFeetParameter;
typedef struct EnemyBattleDamage;
typedef struct sfObj;
typedef struct EnemyManageDataOne;
typedef struct _anon0;
typedef struct EnemySenseData;
typedef struct EnemyMultiWork;
typedef struct EnemyFeetParameter;
typedef struct EnemySearchPoint;
typedef struct EnemyEffectStickyBone;
typedef struct EnemyGhostFloatParameter;
typedef enum EnemyMultiSubStepDamage : unsigned char;
typedef struct _anon1;
typedef enum BattleAttackKind : unsigned char;
typedef union _anon2;
typedef union _anon3;
typedef struct EnemyGhostStainParameter;
typedef struct EnemyGhostWallThroughParameter;
typedef enum EnemyMultiAnime : unsigned char;
typedef struct EnemyGhostInWallParameter;
typedef enum EnemySenseResultType : unsigned char;
typedef enum EnemyPlayerType : unsigned char;
typedef enum EnemyManageEntryType : unsigned char;
typedef struct EnemySenseResult;
typedef struct EnemyGhostAppearFromWallParameter;
typedef enum BattleDamageType : unsigned char;
typedef struct EventFlag;
typedef enum EnemySenseType : unsigned char;
typedef struct EnemyPlayerDistanceMeasureData;
typedef struct EnemyMeasureResult;

typedef void(*type_6)(void*, int);
typedef void(*type_7)(void*, int);
typedef int(*type_9)(void*);
typedef void(*type_10)(sfObj*);
typedef void(*type_11)(void*, int);
typedef void(*type_14)(void*, int);
typedef int(*type_15)(void*);
typedef void(*type_17)(void*, int);
typedef void(*type_19)(sfObj*);
typedef void(*type_21)(void*, int);
typedef void(*type_22)(void*, int);
typedef void(*type_24)(void*, int);
typedef void(*type_25)(sfObj*);
typedef int(*type_26)(void*);
typedef void(*type_27)(void*, int);
typedef int(*type_32)(void*);
typedef int(*type_35)(void*);
typedef int(*type_36)(void*);
typedef int(*type_37)(void*);
typedef void(*type_39)(void*, int);

typedef int type_0[2];
typedef int type_1[2];
typedef int type_2[2];
typedef float type_3[4];
typedef _anon2 type_4[4];
typedef float type_5[4];
typedef EnemyEffectStickyBone type_8[32];
typedef void(*type_12)(sfObj*)[18];
typedef float type_13[3];
typedef _anon2 type_16[256];
typedef _anon1 type_18[4];
typedef _anon3 type_20[0];
typedef float type_23[4];
typedef short type_28[2];
typedef unsigned short type_29[2];
typedef char type_30[4];
typedef unsigned char type_31[4];
typedef float type_33[1];
typedef int type_34[1];
typedef unsigned char type_38[320];

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

struct _anon0
{
	_anon3 vertex[0];
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

struct EnemyMultiWork
{
	float hitback[4];
	float attack_pos[4];
	float move_speed;
	float move_speed_accel;
	float anime_speed;
	float anime_speed_add;
	float swing_speed;
	float timer;
	float timer2;
	float sound_timer;
	float transparency;
	int falling_direction;
	int attack_success;
	int down_count;
	int counter;
	int same_attack;
	float slowly;
	EnemySenseData* player_check;
	EnemySenseData* player_check2;
	EnemyPlayerDistanceMeasureData player_measure;
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

struct EnemySearchPoint
{
};

struct EnemyEffectStickyBone
{
	int bone;
	float pos[3];
	float y_deviation;
	int direction;
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

enum EnemyMultiSubStepDamage : unsigned char
{
	EN_MULTI_SS_DAMAGE_INIT,
	EN_MULTI_SS_DAMAGE_NORMAL,
	EN_MULTI_SS_DAMAGE_DOWN,
	EN_MULTI_SS_DAMAGE_CHAINSAW,
	EN_MULTI_SS_DAMAGE_SPRAY,
	EN_MULTI_SS_DAMAGE_COUNTER
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

enum EnemyMultiAnime : unsigned char
{
	EN_MULTI_ANM_NT,
	EN_MULTI_ANM_NT2,
	EN_MULTI_ANM_NT3,
	EN_MULTI_ANM_WLK,
	EN_MULTI_ANM_WLKB,
	EN_MULTI_ANM_DMH1,
	EN_MULTI_ANM_DMH2,
	EN_MULTI_ANM_DMP1,
	EN_MULTI_ANM_DMP2,
	EN_MULTI_ANM_DMP3,
	EN_MULTI_ANM_DMS1,
	EN_MULTI_ANM_DMS2,
	EN_MULTI_ANM_DMCA,
	EN_MULTI_ANM_XXP1,
	EN_MULTI_ANM_XXP2,
	EN_MULTI_ANM_XXP3,
	EN_MULTI_ANM_XXS1,
	EN_MULTI_ANM_XXS2,
	EN_MULTI_ANM_XXG1,
	EN_MULTI_ANM_XXG2,
	EN_MULTI_ANM_XXC1,
	EN_MULTI_ANM_XXC2,
	EN_MULTI_ANM_DMCB,
	EN_MULTI_ANM_UPU,
	EN_MULTI_ANM_UPD,
	EN_MULTI_ANM_DNT1,
	EN_MULTI_ANM_DNT2,
	EN_MULTI_ANM_ROTU,
	EN_MULTI_ANM_ROTD,
	EN_MULTI_ANM_ATT1A,
	EN_MULTI_ANM_ATT1B,
	EN_MULTI_ANM_ATT1C,
	EN_MULTI_ANM_ATT2A,
	EN_MULTI_ANM_ATT2B,
	EN_MULTI_ANM_ATT2C,
	EN_MULTI_ANM_WA,
	EN_MULTI_ANM_WPS,
	EN_MULTI_ANM_TDMU,
	EN_MULTI_ANM_TDMD,
	EN_MULTI_ANM_KEY,
	EN_MULTI_ANM_KNT
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

struct EventFlag
{
	unsigned char flag[320];
};

enum EnemySenseType : unsigned char
{
	EN_SENSE_TYPE_SIGHT_OF_PLAYER,
	EN_SENSE_TYPE_SIGHT_OF_PLAYER_XZ,
	EN_SENSE_TYPE_NOSIGHT_OF_PLAYER,
	EN_SENSE_TYPE_NOSIGHT_OF_PLAYER_XZ
};

struct EnemyPlayerDistanceMeasureData
{
	float* pos;
	float dist;
	EnemyPlayerType type;
};

struct EnemyMeasureResult
{
	float pos[4];
	float normal[4];
	float dist;
	int exist;
	_anon0* poly;
};

float chara_scale[4];
float bite_pos[4];
EnemyEffectStickyBone multi_sticky_bone[32];
EnemyGhostFeetParameter multi_feet;
EnemyGhostStainParameter multi_stain_parameter;
EnemyGhostFloatParameter multi_float_parameter;
EnemyGhostWallThroughParameter multi_through_parameter;
EnemyGhostInWallParameter multi_in_wall_parameter;
EnemyGhostAppearFromWallParameter multi_appear_parameter;
float sg_vector_zero[4];
float en_vector_unit_y_minus[4];
float sg_vector_unit_x[4];
float sg_vector_unit_z[4];
void(*multi_jump_table)(sfObj*)[18];
EventFlag event_flag;
void(*EnemyEDMultiWanderResetTarget)(void*, int);
float sg_vector_unit_y[4];
void(*EnemyEDMultiAttackEnd)(void*, int);
int(*EnemyEDAnimeIsEndSoon)(void*);
void(*EnemyEDMultiAttackStep1)(void*, int);
int(*EnemyEDAnimeIsEnd)(void*);
int(*EnemyEDClCheckLastCollidePlayer)(void*);
void(*EnemyEDMultiAttack2Step1)(void*, int);
float en_quat_rot_y_300[4];
float en_quat_rot_y_60[4];
void(*EnemyEDMultiPushEnd)(void*, int);
int(*EnemyEDAnimeIsEndSoon1)(void*);
void(*EnemyEDMultiRevival)(void*, int);
int(*EnemyEDSenseTest)(void*);
void(*EnemyEDBattleDamageReduceHP)(void*, int);
int(*EnemyEDBattleDamageCheck)(void*);
void(*EnemyEDMultiAdditionalDamageDown)(void*, int);
void(*EnemyEDMultiFinish)(void*, int);
int(*EnemyEDGhostCheckFinish)(void*);
void(*EnemyEDMultiAdditionalDamage)(void*, int);

void EnemyMultiConstruct(sfObj* obj);
void EnemyMultiHandle(sfObj* obj);
void EnemyMultiDraw(sfObj* obj);
void EnemyMultiDestruct(sfObj* obj);
void EnemyMultiDataPreserve(sfObj* obj);
void EnemyMultiDataExtract(sfObj* obj);
void EnemyMultiSwing(sfObj* obj);
void EnemyMultiAnimeSet(sfObj* obj, int anime);
void EnemyMultiAnimeSpeedControl(sfObj* obj);
void EnemyMultiMoveSpeedControl(sfObj* obj);
void EnemyMultiRecover(sfObj* obj);
void EnemyMultiMoveSound(sfObj* obj);
void EnemyMultiControl(sfObj* obj);
void EnemyMultiControlInit(sfObj* obj);
void EnemyMultiControlWander(sfObj* obj);
void EnemyMultiControlChase(sfObj* obj);
void EnemyMultiControlRise(sfObj* obj);
void EnemyMultiControlAttack(sfObj* obj);
void EnemyMultiControlAttack2(sfObj* obj);
void EnemyMultiControlLeave(sfObj* obj);
void EnemyMultiControlThroughWall(sfObj* obj);
void EnemyMultiControlChaseInWall(sfObj* obj);
void EnemyMultiControlAppearFromWall(sfObj* obj);
void EnemyMultiControlPush(sfObj* obj);
void EnemyMultiControlDamage(sfObj* obj);
void EnemyMultiControlEscape(sfObj* obj);
void EnemyMultiControlRound(sfObj* obj);
void EnemyMultiControlDown(sfObj* obj);
void EnemyMultiControlExorcismDown(sfObj* obj);
void EnemyMultiControlFinished(sfObj* obj);
void EnemyMultiControlEvent(sfObj* obj);
void EnemyMultiSetExtentDamage(sfObj* obj);
void EnemyMultiCheckExorcismDamage(sfObj* obj);
void EnemyMultiSetAttackCommand(sfObj* obj, float timer);
void EnemyMultiSetEventPlayerCheck(sfObj* obj);
void EnemyMultiSetEventAttackCheck(sfObj* obj);
void EnemyMultiSetEventDamageCheck(sfObj* obj);
void EnemyEDMultiWanderResetTarget(void* obj);
void EnemyEDMultiAttackStep1(void* obj);
void EnemyEDMultiAttack2Step1(void* obj);
void EnemyEDMultiAttackEnd(void* obj);
void EnemyEDMultiPushEnd(void* obj);
void EnemyEDMultiAdditionalDamage(void* obj);
void EnemyEDMultiAdditionalDamageDown(void* obj);
void EnemyEDMultiFinish(void* obj);
void EnemyEDMultiRevival(void* obj);

// 
// Start address: 0x1b8210
void EnemyMultiConstruct(sfObj* obj)
{
	EnemyMultiWork* ew;
	EnemyManageEntryType etype;
	int type;
	int sf;
	sfObj* tobj;
	float pos[4];
	// Line 393, Address: 0x1b8210, Func Offset: 0
	// Line 398, Address: 0x1b8214, Func Offset: 0x4
	// Line 393, Address: 0x1b8218, Func Offset: 0x8
	// Line 398, Address: 0x1b8230, Func Offset: 0x20
	// Line 403, Address: 0x1b8238, Func Offset: 0x28
	// Line 405, Address: 0x1b8268, Func Offset: 0x58
	// Line 406, Address: 0x1b8270, Func Offset: 0x60
	// Line 410, Address: 0x1b8278, Func Offset: 0x68
	// Line 412, Address: 0x1b8280, Func Offset: 0x70
	// Line 414, Address: 0x1b828c, Func Offset: 0x7c
	// Line 415, Address: 0x1b8298, Func Offset: 0x88
	// Line 419, Address: 0x1b82c8, Func Offset: 0xb8
	// Line 420, Address: 0x1b82d0, Func Offset: 0xc0
	// Line 423, Address: 0x1b82d8, Func Offset: 0xc8
	// Line 425, Address: 0x1b82ec, Func Offset: 0xdc
	// Line 426, Address: 0x1b82f4, Func Offset: 0xe4
	// Line 428, Address: 0x1b82f8, Func Offset: 0xe8
	// Line 429, Address: 0x1b8308, Func Offset: 0xf8
	// Line 430, Address: 0x1b8324, Func Offset: 0x114
	// Line 432, Address: 0x1b8330, Func Offset: 0x120
	// Line 433, Address: 0x1b8340, Func Offset: 0x130
	// Line 434, Address: 0x1b8348, Func Offset: 0x138
	// Line 436, Address: 0x1b8374, Func Offset: 0x164
	// Line 437, Address: 0x1b8384, Func Offset: 0x174
	// Line 439, Address: 0x1b83a4, Func Offset: 0x194
	// Line 442, Address: 0x1b83c8, Func Offset: 0x1b8
	// Line 443, Address: 0x1b83d8, Func Offset: 0x1c8
	// Line 444, Address: 0x1b83e0, Func Offset: 0x1d0
	// Line 445, Address: 0x1b83ec, Func Offset: 0x1dc
	// Line 446, Address: 0x1b83f4, Func Offset: 0x1e4
	// Line 447, Address: 0x1b840c, Func Offset: 0x1fc
	// Line 449, Address: 0x1b8430, Func Offset: 0x220
	// Line 450, Address: 0x1b843c, Func Offset: 0x22c
	// Line 451, Address: 0x1b8444, Func Offset: 0x234
	// Line 452, Address: 0x1b844c, Func Offset: 0x23c
	// Line 453, Address: 0x1b8450, Func Offset: 0x240
	// Line 454, Address: 0x1b8464, Func Offset: 0x254
	// Line 455, Address: 0x1b8474, Func Offset: 0x264
	// Line 456, Address: 0x1b8484, Func Offset: 0x274
	// Line 457, Address: 0x1b8494, Func Offset: 0x284
	// Line 459, Address: 0x1b84a0, Func Offset: 0x290
	// Line 460, Address: 0x1b84ac, Func Offset: 0x29c
	// Line 462, Address: 0x1b84b8, Func Offset: 0x2a8
	// Line 463, Address: 0x1b84c0, Func Offset: 0x2b0
	// Line 464, Address: 0x1b84f4, Func Offset: 0x2e4
	// Line 465, Address: 0x1b84f8, Func Offset: 0x2e8
	// Line 466, Address: 0x1b8504, Func Offset: 0x2f4
	// Line 467, Address: 0x1b850c, Func Offset: 0x2fc
	// Line 468, Address: 0x1b8510, Func Offset: 0x300
	// Line 469, Address: 0x1b851c, Func Offset: 0x30c
	// Line 470, Address: 0x1b8528, Func Offset: 0x318
	// Line 472, Address: 0x1b8530, Func Offset: 0x320
	// Line 473, Address: 0x1b853c, Func Offset: 0x32c
	// Line 474, Address: 0x1b8544, Func Offset: 0x334
	// Line 475, Address: 0x1b8548, Func Offset: 0x338
	// Line 479, Address: 0x1b8584, Func Offset: 0x374
	// Line 480, Address: 0x1b858c, Func Offset: 0x37c
	// Line 481, Address: 0x1b859c, Func Offset: 0x38c
	// Line 484, Address: 0x1b85a8, Func Offset: 0x398
	// Line 486, Address: 0x1b85cc, Func Offset: 0x3bc
	// Line 487, Address: 0x1b85d4, Func Offset: 0x3c4
	// Line 488, Address: 0x1b85e0, Func Offset: 0x3d0
	// Line 490, Address: 0x1b8604, Func Offset: 0x3f4
	// Line 491, Address: 0x1b860c, Func Offset: 0x3fc
	// Line 492, Address: 0x1b861c, Func Offset: 0x40c
	// Line 494, Address: 0x1b8628, Func Offset: 0x418
	// Line 495, Address: 0x1b8634, Func Offset: 0x424
	// Line 496, Address: 0x1b8650, Func Offset: 0x440
	// Line 497, Address: 0x1b8658, Func Offset: 0x448
	// Line 499, Address: 0x1b8664, Func Offset: 0x454
	// Line 500, Address: 0x1b8668, Func Offset: 0x458
	// Line 504, Address: 0x1b86b8, Func Offset: 0x4a8
	// Line 505, Address: 0x1b86c4, Func Offset: 0x4b4
	// Line 506, Address: 0x1b86d4, Func Offset: 0x4c4
	// Line 509, Address: 0x1b86e0, Func Offset: 0x4d0
	// Line 510, Address: 0x1b86e8, Func Offset: 0x4d8
	// Line 511, Address: 0x1b86ec, Func Offset: 0x4dc
	// Line 512, Address: 0x1b86f0, Func Offset: 0x4e0
	// Line 514, Address: 0x1b86f4, Func Offset: 0x4e4
	// Line 515, Address: 0x1b8710, Func Offset: 0x500
	// Line 516, Address: 0x1b8714, Func Offset: 0x504
	// Func End, Address: 0x1b8738, Func Offset: 0x528
}

// 
// Start address: 0x1b8740
void EnemyMultiHandle(sfObj* obj)
{
	// Line 520, Address: 0x1b8740, Func Offset: 0
	// Line 521, Address: 0x1b874c, Func Offset: 0xc
	// Line 522, Address: 0x1b8754, Func Offset: 0x14
	// Line 523, Address: 0x1b875c, Func Offset: 0x1c
	// Line 524, Address: 0x1b8764, Func Offset: 0x24
	// Line 525, Address: 0x1b876c, Func Offset: 0x2c
	// Line 526, Address: 0x1b8774, Func Offset: 0x34
	// Line 527, Address: 0x1b8784, Func Offset: 0x44
	// Line 528, Address: 0x1b8794, Func Offset: 0x54
	// Line 529, Address: 0x1b8798, Func Offset: 0x58
	// Line 530, Address: 0x1b87a0, Func Offset: 0x60
	// Line 531, Address: 0x1b87a8, Func Offset: 0x68
	// Line 533, Address: 0x1b87b0, Func Offset: 0x70
	// Line 534, Address: 0x1b87c0, Func Offset: 0x80
	// Line 535, Address: 0x1b87c8, Func Offset: 0x88
	// Line 536, Address: 0x1b87d0, Func Offset: 0x90
	// Line 538, Address: 0x1b87d8, Func Offset: 0x98
	// Func End, Address: 0x1b87e8, Func Offset: 0xa8
}

// 
// Start address: 0x1b87f0
void EnemyMultiDraw(sfObj* obj)
{
	// Line 542, Address: 0x1b87f0, Func Offset: 0
	// Line 543, Address: 0x1b87fc, Func Offset: 0xc
	// Line 544, Address: 0x1b880c, Func Offset: 0x1c
	// Line 545, Address: 0x1b8814, Func Offset: 0x24
	// Line 546, Address: 0x1b8818, Func Offset: 0x28
	// Func End, Address: 0x1b8828, Func Offset: 0x38
}

// 
// Start address: 0x1b8830
void EnemyMultiDestruct(sfObj* obj)
{
	EnemyMultiWork* ew;
	// Line 550, Address: 0x1b8830, Func Offset: 0
	// Line 553, Address: 0x1b8840, Func Offset: 0x10
	// Line 554, Address: 0x1b8858, Func Offset: 0x28
	// Line 555, Address: 0x1b8860, Func Offset: 0x30
	// Line 558, Address: 0x1b8868, Func Offset: 0x38
	// Line 559, Address: 0x1b8870, Func Offset: 0x40
	// Line 561, Address: 0x1b887c, Func Offset: 0x4c
	// Line 563, Address: 0x1b8894, Func Offset: 0x64
	// Line 566, Address: 0x1b88c0, Func Offset: 0x90
	// Line 567, Address: 0x1b88cc, Func Offset: 0x9c
	// Line 568, Address: 0x1b88ec, Func Offset: 0xbc
	// Line 569, Address: 0x1b88f4, Func Offset: 0xc4
	// Line 570, Address: 0x1b88f8, Func Offset: 0xc8
	// Line 572, Address: 0x1b8900, Func Offset: 0xd0
	// Line 573, Address: 0x1b8908, Func Offset: 0xd8
	// Line 574, Address: 0x1b8910, Func Offset: 0xe0
	// Line 575, Address: 0x1b8918, Func Offset: 0xe8
	// Line 576, Address: 0x1b8920, Func Offset: 0xf0
	// Line 577, Address: 0x1b8928, Func Offset: 0xf8
	// Func End, Address: 0x1b893c, Func Offset: 0x10c
}

// 
// Start address: 0x1b8940
void EnemyMultiDataPreserve(sfObj* obj)
{
	EnemyMultiWork* ew;
	EnemyManageDataOne* pe;
	_anon2 td;
	// Line 581, Address: 0x1b8940, Func Offset: 0
	// Line 585, Address: 0x1b8954, Func Offset: 0x14
	// Line 587, Address: 0x1b8988, Func Offset: 0x48
	// Line 588, Address: 0x1b8990, Func Offset: 0x50
	// Line 593, Address: 0x1b8998, Func Offset: 0x58
	// Line 597, Address: 0x1b89b0, Func Offset: 0x70
	// Line 601, Address: 0x1b89c0, Func Offset: 0x80
	// Line 602, Address: 0x1b89c8, Func Offset: 0x88
	// Line 603, Address: 0x1b89d4, Func Offset: 0x94
	// Line 604, Address: 0x1b89e0, Func Offset: 0xa0
	// Line 605, Address: 0x1b89ec, Func Offset: 0xac
	// Line 606, Address: 0x1b8a00, Func Offset: 0xc0
	// Line 608, Address: 0x1b8a08, Func Offset: 0xc8
	// Line 609, Address: 0x1b8a14, Func Offset: 0xd4
	// Line 611, Address: 0x1b8a20, Func Offset: 0xe0
	// Line 610, Address: 0x1b8a24, Func Offset: 0xe4
	// Line 611, Address: 0x1b8a2c, Func Offset: 0xec
	// Line 612, Address: 0x1b8a34, Func Offset: 0xf4
	// Line 613, Address: 0x1b8a38, Func Offset: 0xf8
	// Func End, Address: 0x1b8a50, Func Offset: 0x110
}

// 
// Start address: 0x1b8a50
void EnemyMultiDataExtract(sfObj* obj)
{
	EnemyManageDataOne* pe;
	int anime;
	float t;
	EnemyMultiWork* ew;
	// Line 617, Address: 0x1b8a50, Func Offset: 0
	// Line 620, Address: 0x1b8a6c, Func Offset: 0x1c
	// Line 621, Address: 0x1b8a80, Func Offset: 0x30
	// Line 622, Address: 0x1b8a8c, Func Offset: 0x3c
	// Line 623, Address: 0x1b8a98, Func Offset: 0x48
	// Line 624, Address: 0x1b8a9c, Func Offset: 0x4c
	// Line 625, Address: 0x1b8ab4, Func Offset: 0x64
	// Line 626, Address: 0x1b8abc, Func Offset: 0x6c
	// Line 627, Address: 0x1b8ac8, Func Offset: 0x78
	// Line 628, Address: 0x1b8ad0, Func Offset: 0x80
	// Line 630, Address: 0x1b8ad8, Func Offset: 0x88
	// Line 631, Address: 0x1b8adc, Func Offset: 0x8c
	// Line 633, Address: 0x1b8af0, Func Offset: 0xa0
	// Line 634, Address: 0x1b8afc, Func Offset: 0xac
	// Line 635, Address: 0x1b8b08, Func Offset: 0xb8
	// Line 636, Address: 0x1b8b14, Func Offset: 0xc4
	// Line 637, Address: 0x1b8b1c, Func Offset: 0xcc
	// Line 638, Address: 0x1b8b28, Func Offset: 0xd8
	// Line 639, Address: 0x1b8b2c, Func Offset: 0xdc
	// Line 641, Address: 0x1b8b3c, Func Offset: 0xec
	// Line 642, Address: 0x1b8b40, Func Offset: 0xf0
	// Line 645, Address: 0x1b8b48, Func Offset: 0xf8
	// Line 646, Address: 0x1b8b54, Func Offset: 0x104
	// Func End, Address: 0x1b8b74, Func Offset: 0x124
}

// 
// Start address: 0x1b8b80
void EnemyMultiSwing(sfObj* obj)
{
	EnemyMultiWork* ew;
	float rot[4];
	float trot[4];
	float vec[4];
	float d;
	float dt;
	// Line 650, Address: 0x1b8b80, Func Offset: 0
	// Line 655, Address: 0x1b8b98, Func Offset: 0x18
	// Line 656, Address: 0x1b8ba0, Func Offset: 0x20
	// Line 657, Address: 0x1b8bac, Func Offset: 0x2c
	// Line 658, Address: 0x1b8bb8, Func Offset: 0x38
	// Line 659, Address: 0x1b8bdc, Func Offset: 0x5c
	// Line 660, Address: 0x1b8be0, Func Offset: 0x60
	// Line 661, Address: 0x1b8bec, Func Offset: 0x6c
	// Line 662, Address: 0x1b8c10, Func Offset: 0x90
	// Line 663, Address: 0x1b8c1c, Func Offset: 0x9c
	// Line 665, Address: 0x1b8c20, Func Offset: 0xa0
	// Line 664, Address: 0x1b8c40, Func Offset: 0xc0
	// Line 665, Address: 0x1b8c44, Func Offset: 0xc4
	// Line 667, Address: 0x1b8c5c, Func Offset: 0xdc
	// Line 668, Address: 0x1b8c84, Func Offset: 0x104
	// Line 667, Address: 0x1b8c88, Func Offset: 0x108
	// Line 668, Address: 0x1b8c8c, Func Offset: 0x10c
	// Line 669, Address: 0x1b8c9c, Func Offset: 0x11c
	// Line 670, Address: 0x1b8cac, Func Offset: 0x12c
	// Line 671, Address: 0x1b8cd8, Func Offset: 0x158
	// Line 672, Address: 0x1b8cec, Func Offset: 0x16c
	// Line 673, Address: 0x1b8cfc, Func Offset: 0x17c
	// Line 674, Address: 0x1b8d04, Func Offset: 0x184
	// Line 675, Address: 0x1b8d08, Func Offset: 0x188
	// Line 676, Address: 0x1b8d1c, Func Offset: 0x19c
	// Line 678, Address: 0x1b8d3c, Func Offset: 0x1bc
	// Line 679, Address: 0x1b8d40, Func Offset: 0x1c0
	// Line 681, Address: 0x1b8d44, Func Offset: 0x1c4
	// Line 682, Address: 0x1b8d48, Func Offset: 0x1c8
	// Line 683, Address: 0x1b8d54, Func Offset: 0x1d4
	// Func End, Address: 0x1b8d70, Func Offset: 0x1f0
}

// 
// Start address: 0x1b8d70
void EnemyMultiAnimeSet(sfObj* obj, int anime)
{
	EnemyMultiWork* ew;
	int last_anime;
	int cf;
	float t;
	// Line 687, Address: 0x1b8d70, Func Offset: 0
	// Line 691, Address: 0x1b8d84, Func Offset: 0x14
	// Line 692, Address: 0x1b8d8c, Func Offset: 0x1c
	// Line 694, Address: 0x1b8d90, Func Offset: 0x20
	// Line 692, Address: 0x1b8d94, Func Offset: 0x24
	// Line 694, Address: 0x1b8d98, Func Offset: 0x28
	// Line 695, Address: 0x1b8da0, Func Offset: 0x30
	// Line 696, Address: 0x1b8da4, Func Offset: 0x34
	// Line 699, Address: 0x1b8e00, Func Offset: 0x90
	// Line 700, Address: 0x1b8e0c, Func Offset: 0x9c
	// Line 702, Address: 0x1b8e14, Func Offset: 0xa4
	// Line 703, Address: 0x1b8e18, Func Offset: 0xa8
	// Line 704, Address: 0x1b8e20, Func Offset: 0xb0
	// Line 710, Address: 0x1b8e28, Func Offset: 0xb8
	// Line 711, Address: 0x1b8e30, Func Offset: 0xc0
	// Line 712, Address: 0x1b8e3c, Func Offset: 0xcc
	// Line 715, Address: 0x1b8e44, Func Offset: 0xd4
	// Line 716, Address: 0x1b8e48, Func Offset: 0xd8
	// Line 717, Address: 0x1b8e4c, Func Offset: 0xdc
	// Line 718, Address: 0x1b8e54, Func Offset: 0xe4
	// Line 722, Address: 0x1b8ef8, Func Offset: 0x188
	// Line 723, Address: 0x1b8f00, Func Offset: 0x190
	// Line 726, Address: 0x1b8f24, Func Offset: 0x1b4
	// Line 730, Address: 0x1b8f30, Func Offset: 0x1c0
	// Line 731, Address: 0x1b8f3c, Func Offset: 0x1cc
	// Line 732, Address: 0x1b8f44, Func Offset: 0x1d4
	// Line 733, Address: 0x1b8f48, Func Offset: 0x1d8
	// Line 734, Address: 0x1b8f50, Func Offset: 0x1e0
	// Line 736, Address: 0x1b8f5c, Func Offset: 0x1ec
	// Line 741, Address: 0x1b8f64, Func Offset: 0x1f4
	// Line 742, Address: 0x1b8f68, Func Offset: 0x1f8
	// Line 743, Address: 0x1b8f70, Func Offset: 0x200
	// Line 745, Address: 0x1b8f78, Func Offset: 0x208
	// Line 749, Address: 0x1b8f84, Func Offset: 0x214
	// Line 750, Address: 0x1b8f88, Func Offset: 0x218
	// Line 754, Address: 0x1b8f90, Func Offset: 0x220
	// Line 755, Address: 0x1b8fa4, Func Offset: 0x234
	// Line 756, Address: 0x1b8fb0, Func Offset: 0x240
	// Line 757, Address: 0x1b8fb8, Func Offset: 0x248
	// Line 758, Address: 0x1b8fc4, Func Offset: 0x254
	// Line 759, Address: 0x1b8fc8, Func Offset: 0x258
	// Func End, Address: 0x1b8fdc, Func Offset: 0x26c
}

// 
// Start address: 0x1b8fe0
void EnemyMultiAnimeSpeedControl(sfObj* obj)
{
	EnemyMultiWork* ew;
	// Line 763, Address: 0x1b8fe0, Func Offset: 0
	// Line 765, Address: 0x1b8ff0, Func Offset: 0x10
	// Line 766, Address: 0x1b8ffc, Func Offset: 0x1c
	// Line 769, Address: 0x1b9020, Func Offset: 0x40
	// Line 771, Address: 0x1b9064, Func Offset: 0x84
	// Line 772, Address: 0x1b9080, Func Offset: 0xa0
	// Line 773, Address: 0x1b9084, Func Offset: 0xa4
	// Line 775, Address: 0x1b9088, Func Offset: 0xa8
	// Line 776, Address: 0x1b90a8, Func Offset: 0xc8
	// Line 777, Address: 0x1b90ac, Func Offset: 0xcc
	// Line 779, Address: 0x1b90b0, Func Offset: 0xd0
	// Line 781, Address: 0x1b90bc, Func Offset: 0xdc
	// Line 782, Address: 0x1b90c0, Func Offset: 0xe0
	// Func End, Address: 0x1b90d4, Func Offset: 0xf4
}

// 
// Start address: 0x1b90e0
void EnemyMultiMoveSpeedControl(sfObj* obj)
{
	EnemyMultiWork* ew;
	float d;
	// Line 786, Address: 0x1b90e0, Func Offset: 0
	// Line 789, Address: 0x1b90f0, Func Offset: 0x10
	// Line 791, Address: 0x1b90f8, Func Offset: 0x18
	// Line 789, Address: 0x1b90fc, Func Offset: 0x1c
	// Line 790, Address: 0x1b9100, Func Offset: 0x20
	// Line 791, Address: 0x1b9108, Func Offset: 0x28
	// Line 795, Address: 0x1b9138, Func Offset: 0x58
	// Line 798, Address: 0x1b9140, Func Offset: 0x60
	// Line 799, Address: 0x1b9150, Func Offset: 0x70
	// Line 798, Address: 0x1b9158, Func Offset: 0x78
	// Line 799, Address: 0x1b9168, Func Offset: 0x88
	// Line 798, Address: 0x1b9178, Func Offset: 0x98
	// Line 799, Address: 0x1b917c, Func Offset: 0x9c
	// Line 798, Address: 0x1b9180, Func Offset: 0xa0
	// Line 799, Address: 0x1b9184, Func Offset: 0xa4
	// Line 801, Address: 0x1b91a8, Func Offset: 0xc8
	// Line 802, Address: 0x1b91c8, Func Offset: 0xe8
	// Line 803, Address: 0x1b91e0, Func Offset: 0x100
	// Line 804, Address: 0x1b91e4, Func Offset: 0x104
	// Line 805, Address: 0x1b91e8, Func Offset: 0x108
	// Func End, Address: 0x1b91fc, Func Offset: 0x11c
}

// 
// Start address: 0x1b9200
void EnemyMultiRecover(sfObj* obj)
{
	EnemyMultiWork* ew;
	float heal;
	float dt;
	// Line 825, Address: 0x1b9200, Func Offset: 0
	// Line 828, Address: 0x1b9214, Func Offset: 0x14
	// Line 829, Address: 0x1b9220, Func Offset: 0x20
	// Line 833, Address: 0x1b925c, Func Offset: 0x5c
	// Line 834, Address: 0x1b9260, Func Offset: 0x60
	// Line 836, Address: 0x1b9268, Func Offset: 0x68
	// Line 837, Address: 0x1b9274, Func Offset: 0x74
	// Line 839, Address: 0x1b928c, Func Offset: 0x8c
	// Line 840, Address: 0x1b92a8, Func Offset: 0xa8
	// Line 841, Address: 0x1b92b8, Func Offset: 0xb8
	// Line 842, Address: 0x1b92c0, Func Offset: 0xc0
	// Line 843, Address: 0x1b92cc, Func Offset: 0xcc
	// Line 844, Address: 0x1b92d0, Func Offset: 0xd0
	// Func End, Address: 0x1b92e8, Func Offset: 0xe8
}

// 
// Start address: 0x1b92f0
void EnemyMultiMoveSound(sfObj* obj)
{
	EnemyMultiWork* ew;
	// Line 848, Address: 0x1b92f0, Func Offset: 0
	// Line 850, Address: 0x1b9300, Func Offset: 0x10
	// Line 851, Address: 0x1b930c, Func Offset: 0x1c
	// Line 852, Address: 0x1b9334, Func Offset: 0x44
	// Line 853, Address: 0x1b9338, Func Offset: 0x48
	// Line 854, Address: 0x1b935c, Func Offset: 0x6c
	// Line 855, Address: 0x1b9380, Func Offset: 0x90
	// Line 856, Address: 0x1b938c, Func Offset: 0x9c
	// Line 859, Address: 0x1b93b4, Func Offset: 0xc4
	// Line 860, Address: 0x1b93b8, Func Offset: 0xc8
	// Func End, Address: 0x1b93cc, Func Offset: 0xdc
}

// 
// Start address: 0x1b93d0
void EnemyMultiControl(sfObj* obj)
{
	EnemyMultiWork* ew;
	int step;
	float dt;
	float r;
	float t;
	float rdt;
	float vec[4];
	// Line 889, Address: 0x1b93d0, Func Offset: 0
	// Line 893, Address: 0x1b93ec, Func Offset: 0x1c
	// Line 894, Address: 0x1b93f8, Func Offset: 0x28
	// Line 895, Address: 0x1b9400, Func Offset: 0x30
	// Line 907, Address: 0x1b9408, Func Offset: 0x38
	// Line 908, Address: 0x1b9414, Func Offset: 0x44
	// Line 909, Address: 0x1b941c, Func Offset: 0x4c
	// Line 910, Address: 0x1b9444, Func Offset: 0x74
	// Line 912, Address: 0x1b9448, Func Offset: 0x78
	// Line 913, Address: 0x1b9464, Func Offset: 0x94
	// Line 915, Address: 0x1b9468, Func Offset: 0x98
	// Line 916, Address: 0x1b9474, Func Offset: 0xa4
	// Line 917, Address: 0x1b9488, Func Offset: 0xb8
	// Line 918, Address: 0x1b9490, Func Offset: 0xc0
	// Line 919, Address: 0x1b94b0, Func Offset: 0xe0
	// Line 920, Address: 0x1b94b4, Func Offset: 0xe4
	// Line 921, Address: 0x1b94c0, Func Offset: 0xf0
	// Line 923, Address: 0x1b94c8, Func Offset: 0xf8
	// Line 924, Address: 0x1b94d4, Func Offset: 0x104
	// Line 925, Address: 0x1b94e8, Func Offset: 0x118
	// Line 926, Address: 0x1b94f4, Func Offset: 0x124
	// Line 930, Address: 0x1b94f8, Func Offset: 0x128
	// Line 931, Address: 0x1b9500, Func Offset: 0x130
	// Line 932, Address: 0x1b9508, Func Offset: 0x138
	// Line 934, Address: 0x1b9510, Func Offset: 0x140
	// Line 936, Address: 0x1b9518, Func Offset: 0x148
	// Line 938, Address: 0x1b9534, Func Offset: 0x164
	// Line 939, Address: 0x1b953c, Func Offset: 0x16c
	// Line 943, Address: 0x1b9544, Func Offset: 0x174
	// Line 944, Address: 0x1b9550, Func Offset: 0x180
	// Line 943, Address: 0x1b9558, Func Offset: 0x188
	// Line 944, Address: 0x1b9560, Func Offset: 0x190
	// Line 945, Address: 0x1b9588, Func Offset: 0x1b8
	// Line 946, Address: 0x1b9594, Func Offset: 0x1c4
	// Line 947, Address: 0x1b95b0, Func Offset: 0x1e0
	// Line 948, Address: 0x1b95c4, Func Offset: 0x1f4
	// Line 954, Address: 0x1b95d0, Func Offset: 0x200
	// Line 955, Address: 0x1b95d8, Func Offset: 0x208
	// Line 956, Address: 0x1b95e0, Func Offset: 0x210
	// Func End, Address: 0x1b9600, Func Offset: 0x230
}

// 
// Start address: 0x1b9600
void EnemyMultiControlInit(sfObj* obj)
{
	EnemyMultiWork* ew;
	float* pos;
	float* ppos;
	float tpos[4];
	EnemySearchPoint* esp;
	float vec[4];
	// Line 960, Address: 0x1b9600, Func Offset: 0
	// Line 963, Address: 0x1b9614, Func Offset: 0x14
	// Line 964, Address: 0x1b961c, Func Offset: 0x1c
	// Line 965, Address: 0x1b9628, Func Offset: 0x28
	// Line 967, Address: 0x1b9644, Func Offset: 0x44
	// Line 970, Address: 0x1b965c, Func Offset: 0x5c
	// Line 971, Address: 0x1b9668, Func Offset: 0x68
	// Line 973, Address: 0x1b9678, Func Offset: 0x78
	// Line 974, Address: 0x1b9684, Func Offset: 0x84
	// Line 975, Address: 0x1b9698, Func Offset: 0x98
	// Line 976, Address: 0x1b96a4, Func Offset: 0xa4
	// Line 977, Address: 0x1b96b0, Func Offset: 0xb0
	// Line 978, Address: 0x1b96bc, Func Offset: 0xbc
	// Line 980, Address: 0x1b96c0, Func Offset: 0xc0
	// Line 981, Address: 0x1b96d4, Func Offset: 0xd4
	// Line 982, Address: 0x1b96dc, Func Offset: 0xdc
	// Line 984, Address: 0x1b96e8, Func Offset: 0xe8
	// Line 986, Address: 0x1b9738, Func Offset: 0x138
	// Line 987, Address: 0x1b9748, Func Offset: 0x148
	// Line 988, Address: 0x1b9750, Func Offset: 0x150
	// Line 989, Address: 0x1b9758, Func Offset: 0x158
	// Line 992, Address: 0x1b9774, Func Offset: 0x174
	// Line 993, Address: 0x1b977c, Func Offset: 0x17c
	// Line 994, Address: 0x1b9788, Func Offset: 0x188
	// Line 995, Address: 0x1b97b4, Func Offset: 0x1b4
	// Line 996, Address: 0x1b97d4, Func Offset: 0x1d4
	// Line 997, Address: 0x1b97e0, Func Offset: 0x1e0
	// Line 998, Address: 0x1b97e8, Func Offset: 0x1e8
	// Line 999, Address: 0x1b97f4, Func Offset: 0x1f4
	// Line 1000, Address: 0x1b9800, Func Offset: 0x200
	// Line 1003, Address: 0x1b980c, Func Offset: 0x20c
	// Line 1004, Address: 0x1b9810, Func Offset: 0x210
	// Line 1006, Address: 0x1b9818, Func Offset: 0x218
	// Line 1008, Address: 0x1b9828, Func Offset: 0x228
	// Line 1009, Address: 0x1b9830, Func Offset: 0x230
	// Line 1010, Address: 0x1b9838, Func Offset: 0x238
	// Line 1011, Address: 0x1b9844, Func Offset: 0x244
	// Line 1012, Address: 0x1b9848, Func Offset: 0x248
	// Func End, Address: 0x1b9860, Func Offset: 0x260
}

// 
// Start address: 0x1b9860
void EnemyMultiControlWander(sfObj* obj)
{
	EnemyMultiWork* ew;
	float* pos;
	float* target;
	float vec[4];
	float vec2[4];
	float rot[4];
	float trot[4];
	float dt;
	float r;
	int nomove;
	// Line 1016, Address: 0x1b9860, Func Offset: 0
	// Line 1024, Address: 0x1b9884, Func Offset: 0x24
	// Line 1025, Address: 0x1b9890, Func Offset: 0x30
	// Line 1026, Address: 0x1b989c, Func Offset: 0x3c
	// Line 1027, Address: 0x1b98a8, Func Offset: 0x48
	// Line 1028, Address: 0x1b98b0, Func Offset: 0x50
	// Line 1030, Address: 0x1b98bc, Func Offset: 0x5c
	// Line 1033, Address: 0x1b9900, Func Offset: 0xa0
	// Line 1034, Address: 0x1b9908, Func Offset: 0xa8
	// Line 1035, Address: 0x1b9914, Func Offset: 0xb4
	// Line 1036, Address: 0x1b991c, Func Offset: 0xbc
	// Line 1037, Address: 0x1b9928, Func Offset: 0xc8
	// Line 1038, Address: 0x1b9934, Func Offset: 0xd4
	// Line 1039, Address: 0x1b9940, Func Offset: 0xe0
	// Line 1040, Address: 0x1b994c, Func Offset: 0xec
	// Line 1042, Address: 0x1b9968, Func Offset: 0x108
	// Line 1043, Address: 0x1b9974, Func Offset: 0x114
	// Line 1044, Address: 0x1b9980, Func Offset: 0x120
	// Line 1048, Address: 0x1b9988, Func Offset: 0x128
	// Line 1051, Address: 0x1b99c0, Func Offset: 0x160
	// Line 1052, Address: 0x1b99c8, Func Offset: 0x168
	// Line 1054, Address: 0x1b99d0, Func Offset: 0x170
	// Line 1055, Address: 0x1b99f4, Func Offset: 0x194
	// Line 1056, Address: 0x1b9a08, Func Offset: 0x1a8
	// Line 1057, Address: 0x1b9a18, Func Offset: 0x1b8
	// Line 1058, Address: 0x1b9a30, Func Offset: 0x1d0
	// Line 1060, Address: 0x1b9a44, Func Offset: 0x1e4
	// Line 1058, Address: 0x1b9a48, Func Offset: 0x1e8
	// Line 1060, Address: 0x1b9a5c, Func Offset: 0x1fc
	// Line 1062, Address: 0x1b9a64, Func Offset: 0x204
	// Line 1063, Address: 0x1b9a68, Func Offset: 0x208
	// Line 1064, Address: 0x1b9a80, Func Offset: 0x220
	// Line 1065, Address: 0x1b9a88, Func Offset: 0x228
	// Line 1064, Address: 0x1b9a8c, Func Offset: 0x22c
	// Line 1065, Address: 0x1b9a90, Func Offset: 0x230
	// Line 1068, Address: 0x1b9ac8, Func Offset: 0x268
	// Line 1071, Address: 0x1b9af0, Func Offset: 0x290
	// Line 1072, Address: 0x1b9af8, Func Offset: 0x298
	// Line 1074, Address: 0x1b9b00, Func Offset: 0x2a0
	// Line 1075, Address: 0x1b9b1c, Func Offset: 0x2bc
	// Line 1076, Address: 0x1b9b24, Func Offset: 0x2c4
	// Line 1077, Address: 0x1b9b38, Func Offset: 0x2d8
	// Line 1076, Address: 0x1b9b3c, Func Offset: 0x2dc
	// Line 1077, Address: 0x1b9b40, Func Offset: 0x2e0
	// Line 1076, Address: 0x1b9b44, Func Offset: 0x2e4
	// Line 1077, Address: 0x1b9b4c, Func Offset: 0x2ec
	// Line 1079, Address: 0x1b9b54, Func Offset: 0x2f4
	// Line 1080, Address: 0x1b9b7c, Func Offset: 0x31c
	// Line 1081, Address: 0x1b9b84, Func Offset: 0x324
	// Line 1082, Address: 0x1b9b98, Func Offset: 0x338
	// Line 1081, Address: 0x1b9b9c, Func Offset: 0x33c
	// Line 1082, Address: 0x1b9ba0, Func Offset: 0x340
	// Line 1081, Address: 0x1b9ba4, Func Offset: 0x344
	// Line 1082, Address: 0x1b9bac, Func Offset: 0x34c
	// Line 1084, Address: 0x1b9bb4, Func Offset: 0x354
	// Line 1085, Address: 0x1b9bdc, Func Offset: 0x37c
	// Line 1086, Address: 0x1b9be4, Func Offset: 0x384
	// Line 1087, Address: 0x1b9bf8, Func Offset: 0x398
	// Line 1086, Address: 0x1b9bfc, Func Offset: 0x39c
	// Line 1087, Address: 0x1b9c00, Func Offset: 0x3a0
	// Line 1086, Address: 0x1b9c04, Func Offset: 0x3a4
	// Line 1087, Address: 0x1b9c0c, Func Offset: 0x3ac
	// Line 1089, Address: 0x1b9c14, Func Offset: 0x3b4
	// Line 1090, Address: 0x1b9c3c, Func Offset: 0x3dc
	// Line 1091, Address: 0x1b9c44, Func Offset: 0x3e4
	// Line 1092, Address: 0x1b9c50, Func Offset: 0x3f0
	// Line 1093, Address: 0x1b9c74, Func Offset: 0x414
	// Line 1094, Address: 0x1b9c88, Func Offset: 0x428
	// Line 1093, Address: 0x1b9c8c, Func Offset: 0x42c
	// Line 1094, Address: 0x1b9c90, Func Offset: 0x430
	// Line 1093, Address: 0x1b9c94, Func Offset: 0x434
	// Line 1094, Address: 0x1b9c9c, Func Offset: 0x43c
	// Line 1098, Address: 0x1b9ca4, Func Offset: 0x444
	// Line 1099, Address: 0x1b9cac, Func Offset: 0x44c
	// Line 1101, Address: 0x1b9cb0, Func Offset: 0x450
	// Line 1102, Address: 0x1b9cc8, Func Offset: 0x468
	// Line 1103, Address: 0x1b9cd0, Func Offset: 0x470
	// Line 1104, Address: 0x1b9ce4, Func Offset: 0x484
	// Line 1103, Address: 0x1b9ce8, Func Offset: 0x488
	// Line 1104, Address: 0x1b9cec, Func Offset: 0x48c
	// Line 1103, Address: 0x1b9cf0, Func Offset: 0x490
	// Line 1104, Address: 0x1b9cf8, Func Offset: 0x498
	// Line 1105, Address: 0x1b9d00, Func Offset: 0x4a0
	// Line 1106, Address: 0x1b9d2c, Func Offset: 0x4cc
	// Line 1107, Address: 0x1b9d34, Func Offset: 0x4d4
	// Line 1108, Address: 0x1b9d58, Func Offset: 0x4f8
	// Line 1109, Address: 0x1b9d6c, Func Offset: 0x50c
	// Line 1108, Address: 0x1b9d70, Func Offset: 0x510
	// Line 1109, Address: 0x1b9d74, Func Offset: 0x514
	// Line 1108, Address: 0x1b9d78, Func Offset: 0x518
	// Line 1109, Address: 0x1b9d80, Func Offset: 0x520
	// Line 1111, Address: 0x1b9d88, Func Offset: 0x528
	// Line 1114, Address: 0x1b9d90, Func Offset: 0x530
	// Line 1115, Address: 0x1b9da8, Func Offset: 0x548
	// Line 1116, Address: 0x1b9dac, Func Offset: 0x54c
	// Line 1117, Address: 0x1b9db0, Func Offset: 0x550
	// Line 1118, Address: 0x1b9dbc, Func Offset: 0x55c
	// Line 1119, Address: 0x1b9de4, Func Offset: 0x584
	// Line 1120, Address: 0x1b9e00, Func Offset: 0x5a0
	// Line 1121, Address: 0x1b9e24, Func Offset: 0x5c4
	// Line 1123, Address: 0x1b9e28, Func Offset: 0x5c8
	// Line 1124, Address: 0x1b9e30, Func Offset: 0x5d0
	// Line 1125, Address: 0x1b9e38, Func Offset: 0x5d8
	// Line 1126, Address: 0x1b9e44, Func Offset: 0x5e4
	// Line 1127, Address: 0x1b9e58, Func Offset: 0x5f8
	// Line 1126, Address: 0x1b9e5c, Func Offset: 0x5fc
	// Line 1127, Address: 0x1b9e60, Func Offset: 0x600
	// Line 1126, Address: 0x1b9e64, Func Offset: 0x604
	// Line 1127, Address: 0x1b9e6c, Func Offset: 0x60c
	// Line 1130, Address: 0x1b9e74, Func Offset: 0x614
	// Line 1131, Address: 0x1b9e78, Func Offset: 0x618
	// Line 1133, Address: 0x1b9e80, Func Offset: 0x620
	// Line 1135, Address: 0x1b9e9c, Func Offset: 0x63c
	// Line 1137, Address: 0x1b9ea8, Func Offset: 0x648
	// Line 1141, Address: 0x1b9ec8, Func Offset: 0x668
	// Line 1142, Address: 0x1b9ed0, Func Offset: 0x670
	// Line 1144, Address: 0x1b9ee8, Func Offset: 0x688
	// Line 1142, Address: 0x1b9eec, Func Offset: 0x68c
	// Line 1144, Address: 0x1b9ef0, Func Offset: 0x690
	// Line 1145, Address: 0x1b9f0c, Func Offset: 0x6ac
	// Line 1146, Address: 0x1b9f10, Func Offset: 0x6b0
	// Line 1147, Address: 0x1b9f14, Func Offset: 0x6b4
	// Line 1148, Address: 0x1b9f1c, Func Offset: 0x6bc
	// Line 1149, Address: 0x1b9f20, Func Offset: 0x6c0
	// Line 1151, Address: 0x1b9f24, Func Offset: 0x6c4
	// Line 1152, Address: 0x1b9f28, Func Offset: 0x6c8
	// Line 1153, Address: 0x1b9f34, Func Offset: 0x6d4
	// Line 1154, Address: 0x1b9f58, Func Offset: 0x6f8
	// Line 1155, Address: 0x1b9f64, Func Offset: 0x704
	// Func End, Address: 0x1b9f90, Func Offset: 0x730
}

// 
// Start address: 0x1b9f90
void EnemyMultiControlChase(sfObj* obj)
{
	EnemyMultiWork* ew;
	float* pos;
	float* ppos;
	float* target;
	float vec[4];
	float tpos[4];
	float pposf[4];
	float rot[4];
	int movemode;
	int pt;
	float r;
	float dt;
	float dh;
	EnemyMeasureResult mres;
	EnemyMeasureResult mres;
	// Line 1159, Address: 0x1b9f90, Func Offset: 0
	// Line 1167, Address: 0x1b9fc0, Func Offset: 0x30
	// Line 1168, Address: 0x1b9fcc, Func Offset: 0x3c
	// Line 1169, Address: 0x1b9fd8, Func Offset: 0x48
	// Line 1170, Address: 0x1b9fe4, Func Offset: 0x54
	// Line 1171, Address: 0x1b9ff0, Func Offset: 0x60
	// Line 1173, Address: 0x1b9ffc, Func Offset: 0x6c
	// Line 1172, Address: 0x1ba000, Func Offset: 0x70
	// Line 1173, Address: 0x1ba014, Func Offset: 0x84
	// Line 1174, Address: 0x1ba01c, Func Offset: 0x8c
	// Line 1175, Address: 0x1ba028, Func Offset: 0x98
	// Line 1176, Address: 0x1ba040, Func Offset: 0xb0
	// Line 1182, Address: 0x1ba04c, Func Offset: 0xbc
	// Line 1185, Address: 0x1ba080, Func Offset: 0xf0
	// Line 1186, Address: 0x1ba08c, Func Offset: 0xfc
	// Line 1187, Address: 0x1ba098, Func Offset: 0x108
	// Line 1188, Address: 0x1ba0a4, Func Offset: 0x114
	// Line 1189, Address: 0x1ba0b0, Func Offset: 0x120
	// Line 1190, Address: 0x1ba0bc, Func Offset: 0x12c
	// Line 1191, Address: 0x1ba0c4, Func Offset: 0x134
	// Line 1192, Address: 0x1ba0d0, Func Offset: 0x140
	// Line 1194, Address: 0x1ba0ec, Func Offset: 0x15c
	// Line 1195, Address: 0x1ba0f8, Func Offset: 0x168
	// Line 1196, Address: 0x1ba110, Func Offset: 0x180
	// Line 1200, Address: 0x1ba168, Func Offset: 0x1d8
	// Line 1201, Address: 0x1ba174, Func Offset: 0x1e4
	// Line 1203, Address: 0x1ba180, Func Offset: 0x1f0
	// Line 1205, Address: 0x1ba188, Func Offset: 0x1f8
	// Line 1208, Address: 0x1ba1b0, Func Offset: 0x220
	// Line 1209, Address: 0x1ba1c0, Func Offset: 0x230
	// Line 1211, Address: 0x1ba1cc, Func Offset: 0x23c
	// Line 1212, Address: 0x1ba1d4, Func Offset: 0x244
	// Line 1214, Address: 0x1ba1d8, Func Offset: 0x248
	// Line 1216, Address: 0x1ba1e4, Func Offset: 0x254
	// Line 1215, Address: 0x1ba1e8, Func Offset: 0x258
	// Line 1216, Address: 0x1ba1ec, Func Offset: 0x25c
	// Line 1218, Address: 0x1ba21c, Func Offset: 0x28c
	// Line 1220, Address: 0x1ba234, Func Offset: 0x2a4
	// Line 1222, Address: 0x1ba240, Func Offset: 0x2b0
	// Line 1225, Address: 0x1ba248, Func Offset: 0x2b8
	// Line 1226, Address: 0x1ba250, Func Offset: 0x2c0
	// Line 1229, Address: 0x1ba258, Func Offset: 0x2c8
	// Line 1230, Address: 0x1ba270, Func Offset: 0x2e0
	// Line 1233, Address: 0x1ba2a8, Func Offset: 0x318
	// Line 1236, Address: 0x1ba2e8, Func Offset: 0x358
	// Line 1237, Address: 0x1ba2f4, Func Offset: 0x364
	// Line 1239, Address: 0x1ba300, Func Offset: 0x370
	// Line 1241, Address: 0x1ba308, Func Offset: 0x378
	// Line 1244, Address: 0x1ba330, Func Offset: 0x3a0
	// Line 1245, Address: 0x1ba340, Func Offset: 0x3b0
	// Line 1247, Address: 0x1ba34c, Func Offset: 0x3bc
	// Line 1248, Address: 0x1ba354, Func Offset: 0x3c4
	// Line 1250, Address: 0x1ba358, Func Offset: 0x3c8
	// Line 1251, Address: 0x1ba370, Func Offset: 0x3e0
	// Line 1253, Address: 0x1ba37c, Func Offset: 0x3ec
	// Line 1252, Address: 0x1ba380, Func Offset: 0x3f0
	// Line 1253, Address: 0x1ba384, Func Offset: 0x3f4
	// Line 1255, Address: 0x1ba3b4, Func Offset: 0x424
	// Line 1257, Address: 0x1ba3cc, Func Offset: 0x43c
	// Line 1259, Address: 0x1ba3d8, Func Offset: 0x448
	// Line 1263, Address: 0x1ba3e0, Func Offset: 0x450
	// Line 1265, Address: 0x1ba3ec, Func Offset: 0x45c
	// Line 1264, Address: 0x1ba3f0, Func Offset: 0x460
	// Line 1265, Address: 0x1ba3fc, Func Offset: 0x46c
	// Line 1264, Address: 0x1ba404, Func Offset: 0x474
	// Line 1265, Address: 0x1ba408, Func Offset: 0x478
	// Line 1266, Address: 0x1ba418, Func Offset: 0x488
	// Line 1269, Address: 0x1ba458, Func Offset: 0x4c8
	// Line 1270, Address: 0x1ba464, Func Offset: 0x4d4
	// Line 1272, Address: 0x1ba470, Func Offset: 0x4e0
	// Line 1274, Address: 0x1ba478, Func Offset: 0x4e8
	// Line 1275, Address: 0x1ba484, Func Offset: 0x4f4
	// Line 1276, Address: 0x1ba48c, Func Offset: 0x4fc
	// Line 1278, Address: 0x1ba490, Func Offset: 0x500
	// Line 1279, Address: 0x1ba498, Func Offset: 0x508
	// Line 1278, Address: 0x1ba49c, Func Offset: 0x50c
	// Line 1279, Address: 0x1ba4a0, Func Offset: 0x510
	// Line 1280, Address: 0x1ba4b8, Func Offset: 0x528
	// Line 1281, Address: 0x1ba4c4, Func Offset: 0x534
	// Line 1282, Address: 0x1ba4d8, Func Offset: 0x548
	// Line 1281, Address: 0x1ba4dc, Func Offset: 0x54c
	// Line 1282, Address: 0x1ba4ec, Func Offset: 0x55c
	// Line 1284, Address: 0x1ba4f4, Func Offset: 0x564
	// Line 1285, Address: 0x1ba4fc, Func Offset: 0x56c
	// Line 1286, Address: 0x1ba51c, Func Offset: 0x58c
	// Line 1287, Address: 0x1ba528, Func Offset: 0x598
	// Line 1288, Address: 0x1ba53c, Func Offset: 0x5ac
	// Line 1287, Address: 0x1ba540, Func Offset: 0x5b0
	// Line 1288, Address: 0x1ba550, Func Offset: 0x5c0
	// Line 1290, Address: 0x1ba558, Func Offset: 0x5c8
	// Line 1291, Address: 0x1ba560, Func Offset: 0x5d0
	// Line 1292, Address: 0x1ba57c, Func Offset: 0x5ec
	// Line 1293, Address: 0x1ba588, Func Offset: 0x5f8
	// Line 1294, Address: 0x1ba59c, Func Offset: 0x60c
	// Line 1293, Address: 0x1ba5a0, Func Offset: 0x610
	// Line 1294, Address: 0x1ba5b0, Func Offset: 0x620
	// Line 1296, Address: 0x1ba5b8, Func Offset: 0x628
	// Line 1297, Address: 0x1ba5c0, Func Offset: 0x630
	// Line 1298, Address: 0x1ba5f0, Func Offset: 0x660
	// Line 1299, Address: 0x1ba5fc, Func Offset: 0x66c
	// Line 1300, Address: 0x1ba608, Func Offset: 0x678
	// Line 1301, Address: 0x1ba62c, Func Offset: 0x69c
	// Line 1302, Address: 0x1ba640, Func Offset: 0x6b0
	// Line 1301, Address: 0x1ba644, Func Offset: 0x6b4
	// Line 1302, Address: 0x1ba648, Func Offset: 0x6b8
	// Line 1301, Address: 0x1ba64c, Func Offset: 0x6bc
	// Line 1302, Address: 0x1ba654, Func Offset: 0x6c4
	// Line 1304, Address: 0x1ba65c, Func Offset: 0x6cc
	// Line 1306, Address: 0x1ba664, Func Offset: 0x6d4
	// Line 1307, Address: 0x1ba668, Func Offset: 0x6d8
	// Line 1308, Address: 0x1ba680, Func Offset: 0x6f0
	// Line 1309, Address: 0x1ba688, Func Offset: 0x6f8
	// Line 1312, Address: 0x1ba690, Func Offset: 0x700
	// Line 1313, Address: 0x1ba6a8, Func Offset: 0x718
	// Line 1314, Address: 0x1ba6b4, Func Offset: 0x724
	// Line 1315, Address: 0x1ba6b8, Func Offset: 0x728
	// Line 1316, Address: 0x1ba6c4, Func Offset: 0x734
	// Line 1317, Address: 0x1ba6f4, Func Offset: 0x764
	// Line 1318, Address: 0x1ba700, Func Offset: 0x770
	// Line 1319, Address: 0x1ba724, Func Offset: 0x794
	// Line 1320, Address: 0x1ba738, Func Offset: 0x7a8
	// Line 1319, Address: 0x1ba73c, Func Offset: 0x7ac
	// Line 1320, Address: 0x1ba74c, Func Offset: 0x7bc
	// Line 1322, Address: 0x1ba754, Func Offset: 0x7c4
	// Line 1323, Address: 0x1ba75c, Func Offset: 0x7cc
	// Line 1325, Address: 0x1ba760, Func Offset: 0x7d0
	// Line 1326, Address: 0x1ba778, Func Offset: 0x7e8
	// Line 1327, Address: 0x1ba77c, Func Offset: 0x7ec
	// Line 1328, Address: 0x1ba780, Func Offset: 0x7f0
	// Line 1329, Address: 0x1ba78c, Func Offset: 0x7fc
	// Line 1330, Address: 0x1ba7b8, Func Offset: 0x828
	// Line 1331, Address: 0x1ba7d4, Func Offset: 0x844
	// Line 1332, Address: 0x1ba7fc, Func Offset: 0x86c
	// Line 1334, Address: 0x1ba800, Func Offset: 0x870
	// Line 1335, Address: 0x1ba808, Func Offset: 0x878
	// Line 1336, Address: 0x1ba814, Func Offset: 0x884
	// Line 1337, Address: 0x1ba820, Func Offset: 0x890
	// Line 1338, Address: 0x1ba824, Func Offset: 0x894
	// Line 1337, Address: 0x1ba828, Func Offset: 0x898
	// Line 1338, Address: 0x1ba82c, Func Offset: 0x89c
	// Line 1340, Address: 0x1ba834, Func Offset: 0x8a4
	// Line 1341, Address: 0x1ba83c, Func Offset: 0x8ac
	// Line 1342, Address: 0x1ba840, Func Offset: 0x8b0
	// Line 1346, Address: 0x1ba890, Func Offset: 0x900
	// Line 1347, Address: 0x1ba89c, Func Offset: 0x90c
	// Line 1348, Address: 0x1ba8a4, Func Offset: 0x914
	// Line 1349, Address: 0x1ba8a8, Func Offset: 0x918
	// Line 1351, Address: 0x1ba8c8, Func Offset: 0x938
	// Line 1354, Address: 0x1ba8d4, Func Offset: 0x944
	// Line 1355, Address: 0x1ba8d8, Func Offset: 0x948
	// Line 1357, Address: 0x1ba8f8, Func Offset: 0x968
	// Line 1358, Address: 0x1ba904, Func Offset: 0x974
	// Line 1359, Address: 0x1ba910, Func Offset: 0x980
	// Line 1360, Address: 0x1ba920, Func Offset: 0x990
	// Line 1361, Address: 0x1ba950, Func Offset: 0x9c0
	// Line 1364, Address: 0x1ba95c, Func Offset: 0x9cc
	// Line 1365, Address: 0x1ba970, Func Offset: 0x9e0
	// Line 1367, Address: 0x1ba988, Func Offset: 0x9f8
	// Line 1368, Address: 0x1ba990, Func Offset: 0xa00
	// Line 1372, Address: 0x1ba9a8, Func Offset: 0xa18
	// Line 1373, Address: 0x1ba9b0, Func Offset: 0xa20
	// Line 1375, Address: 0x1ba9c8, Func Offset: 0xa38
	// Line 1377, Address: 0x1ba9d4, Func Offset: 0xa44
	// Line 1376, Address: 0x1ba9d8, Func Offset: 0xa48
	// Line 1377, Address: 0x1ba9dc, Func Offset: 0xa4c
	// Line 1379, Address: 0x1baa0c, Func Offset: 0xa7c
	// Line 1382, Address: 0x1baa18, Func Offset: 0xa88
	// Line 1384, Address: 0x1baa20, Func Offset: 0xa90
	// Line 1385, Address: 0x1baa28, Func Offset: 0xa98
	// Line 1386, Address: 0x1baa2c, Func Offset: 0xa9c
	// Line 1385, Address: 0x1baa34, Func Offset: 0xaa4
	// Line 1386, Address: 0x1baa38, Func Offset: 0xaa8
	// Line 1387, Address: 0x1baa4c, Func Offset: 0xabc
	// Line 1388, Address: 0x1baa8c, Func Offset: 0xafc
	// Line 1389, Address: 0x1baab8, Func Offset: 0xb28
	// Line 1390, Address: 0x1baad4, Func Offset: 0xb44
	// Line 1391, Address: 0x1baaec, Func Offset: 0xb5c
	// Line 1392, Address: 0x1baaf8, Func Offset: 0xb68
	// Line 1393, Address: 0x1bab00, Func Offset: 0xb70
	// Line 1394, Address: 0x1bab18, Func Offset: 0xb88
	// Line 1396, Address: 0x1bab24, Func Offset: 0xb94
	// Line 1395, Address: 0x1bab28, Func Offset: 0xb98
	// Line 1396, Address: 0x1bab2c, Func Offset: 0xb9c
	// Line 1398, Address: 0x1bab5c, Func Offset: 0xbcc
	// Line 1399, Address: 0x1bab68, Func Offset: 0xbd8
	// Line 1402, Address: 0x1bab70, Func Offset: 0xbe0
	// Line 1404, Address: 0x1bab90, Func Offset: 0xc00
	// Line 1406, Address: 0x1bab9c, Func Offset: 0xc0c
	// Line 1407, Address: 0x1baba4, Func Offset: 0xc14
	// Line 1408, Address: 0x1baba8, Func Offset: 0xc18
	// Line 1409, Address: 0x1babc0, Func Offset: 0xc30
	// Line 1410, Address: 0x1babcc, Func Offset: 0xc3c
	// Line 1411, Address: 0x1babd4, Func Offset: 0xc44
	// Line 1412, Address: 0x1babd8, Func Offset: 0xc48
	// Line 1414, Address: 0x1babf0, Func Offset: 0xc60
	// Line 1415, Address: 0x1babfc, Func Offset: 0xc6c
	// Line 1416, Address: 0x1bac00, Func Offset: 0xc70
	// Line 1418, Address: 0x1bac20, Func Offset: 0xc90
	// Line 1420, Address: 0x1bac2c, Func Offset: 0xc9c
	// Line 1421, Address: 0x1bac34, Func Offset: 0xca4
	// Line 1422, Address: 0x1bac38, Func Offset: 0xca8
	// Line 1425, Address: 0x1bac40, Func Offset: 0xcb0
	// Line 1423, Address: 0x1bac44, Func Offset: 0xcb4
	// Line 1425, Address: 0x1bac48, Func Offset: 0xcb8
	// Line 1423, Address: 0x1bac4c, Func Offset: 0xcbc
	// Line 1425, Address: 0x1bac50, Func Offset: 0xcc0
	// Line 1424, Address: 0x1bac54, Func Offset: 0xcc4
	// Line 1423, Address: 0x1bac60, Func Offset: 0xcd0
	// Line 1425, Address: 0x1bac64, Func Offset: 0xcd4
	// Line 1426, Address: 0x1bac74, Func Offset: 0xce4
	// Line 1427, Address: 0x1bac8c, Func Offset: 0xcfc
	// Line 1428, Address: 0x1bac90, Func Offset: 0xd00
	// Line 1430, Address: 0x1bacb0, Func Offset: 0xd20
	// Line 1432, Address: 0x1bacbc, Func Offset: 0xd2c
	// Line 1434, Address: 0x1bad2c, Func Offset: 0xd9c
	// Line 1436, Address: 0x1bad34, Func Offset: 0xda4
	// Line 1437, Address: 0x1bad3c, Func Offset: 0xdac
	// Line 1438, Address: 0x1bad40, Func Offset: 0xdb0
	// Line 1439, Address: 0x1bad58, Func Offset: 0xdc8
	// Line 1443, Address: 0x1bad8c, Func Offset: 0xdfc
	// Line 1444, Address: 0x1bada0, Func Offset: 0xe10
	// Line 1445, Address: 0x1badbc, Func Offset: 0xe2c
	// Line 1446, Address: 0x1badc0, Func Offset: 0xe30
	// Line 1445, Address: 0x1badc4, Func Offset: 0xe34
	// Line 1446, Address: 0x1badc8, Func Offset: 0xe38
	// Line 1452, Address: 0x1badd0, Func Offset: 0xe40
	// Line 1453, Address: 0x1baddc, Func Offset: 0xe4c
	// Line 1456, Address: 0x1bae00, Func Offset: 0xe70
	// Line 1459, Address: 0x1bae28, Func Offset: 0xe98
	// Line 1461, Address: 0x1bae48, Func Offset: 0xeb8
	// Line 1464, Address: 0x1bae60, Func Offset: 0xed0
	// Line 1465, Address: 0x1bae6c, Func Offset: 0xedc
	// Line 1466, Address: 0x1bae74, Func Offset: 0xee4
	// Line 1467, Address: 0x1bae78, Func Offset: 0xee8
	// Line 1470, Address: 0x1bae88, Func Offset: 0xef8
	// Line 1471, Address: 0x1bae94, Func Offset: 0xf04
	// Line 1472, Address: 0x1baec4, Func Offset: 0xf34
	// Line 1473, Address: 0x1baed0, Func Offset: 0xf40
	// Line 1476, Address: 0x1baed8, Func Offset: 0xf48
	// Line 1477, Address: 0x1baee4, Func Offset: 0xf54
	// Line 1478, Address: 0x1baef0, Func Offset: 0xf60
	// Line 1479, Address: 0x1baef8, Func Offset: 0xf68
	// Line 1481, Address: 0x1baf08, Func Offset: 0xf78
	// Line 1482, Address: 0x1baf14, Func Offset: 0xf84
	// Line 1483, Address: 0x1baf44, Func Offset: 0xfb4
	// Line 1486, Address: 0x1baf50, Func Offset: 0xfc0
	// Func End, Address: 0x1baf84, Func Offset: 0xff4
}

// 
// Start address: 0x1baf90
void EnemyMultiControlRise(sfObj* obj)
{
	EnemyMultiWork* ew;
	float* pos;
	float* ppos;
	float rot[4];
	float dt;
	float theight;
	// Line 1490, Address: 0x1baf90, Func Offset: 0
	// Line 1495, Address: 0x1bafb0, Func Offset: 0x20
	// Line 1496, Address: 0x1bafbc, Func Offset: 0x2c
	// Line 1497, Address: 0x1bafc8, Func Offset: 0x38
	// Line 1498, Address: 0x1bafd4, Func Offset: 0x44
	// Line 1499, Address: 0x1bafdc, Func Offset: 0x4c
	// Line 1500, Address: 0x1bafe4, Func Offset: 0x54
	// Line 1499, Address: 0x1bafec, Func Offset: 0x5c
	// Line 1501, Address: 0x1baff0, Func Offset: 0x60
	// Line 1500, Address: 0x1baff4, Func Offset: 0x64
	// Line 1501, Address: 0x1baff8, Func Offset: 0x68
	// Line 1502, Address: 0x1bb024, Func Offset: 0x94
	// Line 1503, Address: 0x1bb028, Func Offset: 0x98
	// Line 1504, Address: 0x1bb034, Func Offset: 0xa4
	// Line 1505, Address: 0x1bb040, Func Offset: 0xb0
	// Line 1506, Address: 0x1bb04c, Func Offset: 0xbc
	// Line 1505, Address: 0x1bb050, Func Offset: 0xc0
	// Line 1506, Address: 0x1bb05c, Func Offset: 0xcc
	// Line 1507, Address: 0x1bb064, Func Offset: 0xd4
	// Line 1508, Address: 0x1bb06c, Func Offset: 0xdc
	// Line 1509, Address: 0x1bb070, Func Offset: 0xe0
	// Line 1510, Address: 0x1bb094, Func Offset: 0x104
	// Line 1512, Address: 0x1bb09c, Func Offset: 0x10c
	// Line 1513, Address: 0x1bb0a4, Func Offset: 0x114
	// Line 1514, Address: 0x1bb0a8, Func Offset: 0x118
	// Line 1515, Address: 0x1bb0c4, Func Offset: 0x134
	// Line 1518, Address: 0x1bb0cc, Func Offset: 0x13c
	// Line 1519, Address: 0x1bb0d0, Func Offset: 0x140
	// Line 1520, Address: 0x1bb0dc, Func Offset: 0x14c
	// Line 1521, Address: 0x1bb0fc, Func Offset: 0x16c
	// Line 1522, Address: 0x1bb108, Func Offset: 0x178
	// Func End, Address: 0x1bb12c, Func Offset: 0x19c
}

// 
// Start address: 0x1bb130
void EnemyMultiControlAttack(sfObj* obj)
{
	EnemyMultiWork* ew;
	float* pos;
	float* ppos;
	float tpos[4];
	float vec[4];
	float vec2[4];
	float d;
	float dt;
	int id;
	// Line 1526, Address: 0x1bb130, Func Offset: 0
	// Line 1532, Address: 0x1bb14c, Func Offset: 0x1c
	// Line 1533, Address: 0x1bb158, Func Offset: 0x28
	// Line 1534, Address: 0x1bb164, Func Offset: 0x34
	// Line 1535, Address: 0x1bb16c, Func Offset: 0x3c
	// Line 1536, Address: 0x1bb174, Func Offset: 0x44
	// Line 1535, Address: 0x1bb17c, Func Offset: 0x4c
	// Line 1536, Address: 0x1bb180, Func Offset: 0x50
	// Line 1537, Address: 0x1bb188, Func Offset: 0x58
	// Line 1539, Address: 0x1bb1c8, Func Offset: 0x98
	// Line 1540, Address: 0x1bb1d0, Func Offset: 0xa0
	// Line 1541, Address: 0x1bb1d8, Func Offset: 0xa8
	// Line 1542, Address: 0x1bb1e0, Func Offset: 0xb0
	// Line 1546, Address: 0x1bb210, Func Offset: 0xe0
	// Line 1548, Address: 0x1bb218, Func Offset: 0xe8
	// Line 1550, Address: 0x1bb220, Func Offset: 0xf0
	// Line 1551, Address: 0x1bb234, Func Offset: 0x104
	// Line 1552, Address: 0x1bb240, Func Offset: 0x110
	// Line 1558, Address: 0x1bb2f4, Func Offset: 0x1c4
	// Line 1559, Address: 0x1bb2fc, Func Offset: 0x1cc
	// Line 1560, Address: 0x1bb304, Func Offset: 0x1d4
	// Line 1561, Address: 0x1bb308, Func Offset: 0x1d8
	// Line 1562, Address: 0x1bb314, Func Offset: 0x1e4
	// Line 1563, Address: 0x1bb320, Func Offset: 0x1f0
	// Line 1564, Address: 0x1bb32c, Func Offset: 0x1fc
	// Line 1565, Address: 0x1bb338, Func Offset: 0x208
	// Line 1566, Address: 0x1bb344, Func Offset: 0x214
	// Line 1567, Address: 0x1bb350, Func Offset: 0x220
	// Line 1568, Address: 0x1bb358, Func Offset: 0x228
	// Line 1569, Address: 0x1bb364, Func Offset: 0x234
	// Line 1570, Address: 0x1bb36c, Func Offset: 0x23c
	// Line 1571, Address: 0x1bb378, Func Offset: 0x248
	// Line 1572, Address: 0x1bb384, Func Offset: 0x254
	// Line 1573, Address: 0x1bb388, Func Offset: 0x258
	// Line 1574, Address: 0x1bb398, Func Offset: 0x268
	// Line 1578, Address: 0x1bb3a0, Func Offset: 0x270
	// Line 1579, Address: 0x1bb3b8, Func Offset: 0x288
	// Line 1580, Address: 0x1bb3bc, Func Offset: 0x28c
	// Line 1579, Address: 0x1bb3c0, Func Offset: 0x290
	// Line 1580, Address: 0x1bb3c8, Func Offset: 0x298
	// Line 1581, Address: 0x1bb3e0, Func Offset: 0x2b0
	// Line 1583, Address: 0x1bb3f4, Func Offset: 0x2c4
	// Line 1584, Address: 0x1bb408, Func Offset: 0x2d8
	// Line 1586, Address: 0x1bb420, Func Offset: 0x2f0
	// Line 1584, Address: 0x1bb424, Func Offset: 0x2f4
	// Line 1586, Address: 0x1bb42c, Func Offset: 0x2fc
	// Line 1587, Address: 0x1bb440, Func Offset: 0x310
	// Line 1588, Address: 0x1bb444, Func Offset: 0x314
	// Line 1587, Address: 0x1bb44c, Func Offset: 0x31c
	// Line 1588, Address: 0x1bb450, Func Offset: 0x320
	// Line 1589, Address: 0x1bb474, Func Offset: 0x344
	// Line 1590, Address: 0x1bb498, Func Offset: 0x368
	// Line 1589, Address: 0x1bb4a0, Func Offset: 0x370
	// Line 1590, Address: 0x1bb4a4, Func Offset: 0x374
	// Line 1591, Address: 0x1bb4c0, Func Offset: 0x390
	// Line 1592, Address: 0x1bb4cc, Func Offset: 0x39c
	// Line 1594, Address: 0x1bb4e8, Func Offset: 0x3b8
	// Line 1596, Address: 0x1bb4f0, Func Offset: 0x3c0
	// Line 1597, Address: 0x1bb508, Func Offset: 0x3d8
	// Line 1598, Address: 0x1bb52c, Func Offset: 0x3fc
	// Line 1599, Address: 0x1bb53c, Func Offset: 0x40c
	// Line 1600, Address: 0x1bb544, Func Offset: 0x414
	// Line 1601, Address: 0x1bb548, Func Offset: 0x418
	// Line 1600, Address: 0x1bb550, Func Offset: 0x420
	// Line 1601, Address: 0x1bb554, Func Offset: 0x424
	// Line 1602, Address: 0x1bb55c, Func Offset: 0x42c
	// Line 1604, Address: 0x1bb564, Func Offset: 0x434
	// Line 1606, Address: 0x1bb56c, Func Offset: 0x43c
	// Line 1607, Address: 0x1bb570, Func Offset: 0x440
	// Line 1610, Address: 0x1bb58c, Func Offset: 0x45c
	// Line 1611, Address: 0x1bb590, Func Offset: 0x460
	// Func End, Address: 0x1bb5b0, Func Offset: 0x480
}

// 
// Start address: 0x1bb5b0
void EnemyMultiControlAttack2(sfObj* obj)
{
	EnemyMultiWork* ew;
	float* pos;
	float* ppos;
	float tpos[4];
	float vec[4];
	float vec2[4];
	int id;
	float d;
	float dt;
	// Line 1615, Address: 0x1bb5b0, Func Offset: 0
	// Line 1621, Address: 0x1bb5cc, Func Offset: 0x1c
	// Line 1622, Address: 0x1bb5d8, Func Offset: 0x28
	// Line 1623, Address: 0x1bb5e4, Func Offset: 0x34
	// Line 1624, Address: 0x1bb5ec, Func Offset: 0x3c
	// Line 1625, Address: 0x1bb5f4, Func Offset: 0x44
	// Line 1624, Address: 0x1bb5fc, Func Offset: 0x4c
	// Line 1625, Address: 0x1bb600, Func Offset: 0x50
	// Line 1626, Address: 0x1bb608, Func Offset: 0x58
	// Line 1628, Address: 0x1bb648, Func Offset: 0x98
	// Line 1632, Address: 0x1bb678, Func Offset: 0xc8
	// Line 1633, Address: 0x1bb680, Func Offset: 0xd0
	// Line 1635, Address: 0x1bb688, Func Offset: 0xd8
	// Line 1636, Address: 0x1bb694, Func Offset: 0xe4
	// Line 1637, Address: 0x1bb6a0, Func Offset: 0xf0
	// Line 1638, Address: 0x1bb6ac, Func Offset: 0xfc
	// Line 1639, Address: 0x1bb6b8, Func Offset: 0x108
	// Line 1640, Address: 0x1bb6c4, Func Offset: 0x114
	// Line 1641, Address: 0x1bb6cc, Func Offset: 0x11c
	// Line 1642, Address: 0x1bb6d8, Func Offset: 0x128
	// Line 1643, Address: 0x1bb6e8, Func Offset: 0x138
	// Line 1647, Address: 0x1bb6f0, Func Offset: 0x140
	// Line 1648, Address: 0x1bb708, Func Offset: 0x158
	// Line 1650, Address: 0x1bb728, Func Offset: 0x178
	// Line 1651, Address: 0x1bb73c, Func Offset: 0x18c
	// Line 1655, Address: 0x1bb77c, Func Offset: 0x1cc
	// Line 1656, Address: 0x1bb794, Func Offset: 0x1e4
	// Line 1657, Address: 0x1bb798, Func Offset: 0x1e8
	// Line 1656, Address: 0x1bb7a0, Func Offset: 0x1f0
	// Line 1657, Address: 0x1bb7a4, Func Offset: 0x1f4
	// Line 1658, Address: 0x1bb7c0, Func Offset: 0x210
	// Line 1659, Address: 0x1bb7d4, Func Offset: 0x224
	// Line 1662, Address: 0x1bb820, Func Offset: 0x270
	// Line 1663, Address: 0x1bb82c, Func Offset: 0x27c
	// Line 1665, Address: 0x1bb848, Func Offset: 0x298
	// Line 1667, Address: 0x1bb850, Func Offset: 0x2a0
	// Line 1668, Address: 0x1bb868, Func Offset: 0x2b8
	// Line 1669, Address: 0x1bb88c, Func Offset: 0x2dc
	// Line 1670, Address: 0x1bb89c, Func Offset: 0x2ec
	// Line 1671, Address: 0x1bb8a4, Func Offset: 0x2f4
	// Line 1672, Address: 0x1bb8a8, Func Offset: 0x2f8
	// Line 1671, Address: 0x1bb8b0, Func Offset: 0x300
	// Line 1672, Address: 0x1bb8b4, Func Offset: 0x304
	// Line 1673, Address: 0x1bb8bc, Func Offset: 0x30c
	// Line 1675, Address: 0x1bb8c4, Func Offset: 0x314
	// Line 1676, Address: 0x1bb8cc, Func Offset: 0x31c
	// Line 1677, Address: 0x1bb8d0, Func Offset: 0x320
	// Line 1678, Address: 0x1bb8e0, Func Offset: 0x330
	// Line 1681, Address: 0x1bb8f8, Func Offset: 0x348
	// Line 1684, Address: 0x1bb914, Func Offset: 0x364
	// Line 1685, Address: 0x1bb918, Func Offset: 0x368
	// Func End, Address: 0x1bb938, Func Offset: 0x388
}

// 
// Start address: 0x1bb940
void EnemyMultiControlLeave(sfObj* obj)
{
	EnemyMultiWork* ew;
	float* pos;
	float* ppos;
	float* prot;
	float rot[4];
	float vec[4];
	float tpos[4];
	float dt;
	float d;
	int lr;
	// Line 1689, Address: 0x1bb940, Func Offset: 0
	// Line 1697, Address: 0x1bb964, Func Offset: 0x24
	// Line 1698, Address: 0x1bb970, Func Offset: 0x30
	// Line 1699, Address: 0x1bb97c, Func Offset: 0x3c
	// Line 1700, Address: 0x1bb988, Func Offset: 0x48
	// Line 1701, Address: 0x1bb994, Func Offset: 0x54
	// Line 1702, Address: 0x1bb99c, Func Offset: 0x5c
	// Line 1703, Address: 0x1bb9a8, Func Offset: 0x68
	// Line 1705, Address: 0x1bb9e0, Func Offset: 0xa0
	// Line 1706, Address: 0x1bb9ec, Func Offset: 0xac
	// Line 1707, Address: 0x1bb9f8, Func Offset: 0xb8
	// Line 1708, Address: 0x1bba04, Func Offset: 0xc4
	// Line 1709, Address: 0x1bba10, Func Offset: 0xd0
	// Line 1711, Address: 0x1bba2c, Func Offset: 0xec
	// Line 1712, Address: 0x1bba38, Func Offset: 0xf8
	// Line 1713, Address: 0x1bba44, Func Offset: 0x104
	// Line 1714, Address: 0x1bba4c, Func Offset: 0x10c
	// Line 1715, Address: 0x1bba58, Func Offset: 0x118
	// Line 1717, Address: 0x1bba64, Func Offset: 0x124
	// Line 1715, Address: 0x1bba68, Func Offset: 0x128
	// Line 1717, Address: 0x1bba7c, Func Offset: 0x13c
	// Line 1719, Address: 0x1bba84, Func Offset: 0x144
	// Line 1720, Address: 0x1bba88, Func Offset: 0x148
	// Line 1721, Address: 0x1bbaa0, Func Offset: 0x160
	// Line 1722, Address: 0x1bbaa4, Func Offset: 0x164
	// Line 1723, Address: 0x1bbab4, Func Offset: 0x174
	// Line 1724, Address: 0x1bbac8, Func Offset: 0x188
	// Line 1726, Address: 0x1bbad0, Func Offset: 0x190
	// Line 1727, Address: 0x1bbae8, Func Offset: 0x1a8
	// Line 1728, Address: 0x1bbaf0, Func Offset: 0x1b0
	// Line 1729, Address: 0x1bbafc, Func Offset: 0x1bc
	// Line 1730, Address: 0x1bbb00, Func Offset: 0x1c0
	// Line 1731, Address: 0x1bbb0c, Func Offset: 0x1cc
	// Line 1732, Address: 0x1bbb34, Func Offset: 0x1f4
	// Line 1733, Address: 0x1bbb3c, Func Offset: 0x1fc
	// Line 1734, Address: 0x1bbb4c, Func Offset: 0x20c
	// Line 1735, Address: 0x1bbb58, Func Offset: 0x218
	// Line 1737, Address: 0x1bbb68, Func Offset: 0x228
	// Line 1738, Address: 0x1bbb80, Func Offset: 0x240
	// Line 1740, Address: 0x1bbb88, Func Offset: 0x248
	// Line 1741, Address: 0x1bbba0, Func Offset: 0x260
	// Line 1743, Address: 0x1bbba8, Func Offset: 0x268
	// Line 1744, Address: 0x1bbbb8, Func Offset: 0x278
	// Line 1746, Address: 0x1bbbd8, Func Offset: 0x298
	// Line 1747, Address: 0x1bbbf0, Func Offset: 0x2b0
	// Line 1749, Address: 0x1bbc18, Func Offset: 0x2d8
	// Line 1750, Address: 0x1bbc24, Func Offset: 0x2e4
	// Line 1751, Address: 0x1bbc30, Func Offset: 0x2f0
	// Line 1753, Address: 0x1bbc3c, Func Offset: 0x2fc
	// Line 1754, Address: 0x1bbc58, Func Offset: 0x318
	// Line 1756, Address: 0x1bbc60, Func Offset: 0x320
	// Line 1757, Address: 0x1bbc6c, Func Offset: 0x32c
	// Line 1760, Address: 0x1bbcac, Func Offset: 0x36c
	// Line 1761, Address: 0x1bbcb8, Func Offset: 0x378
	// Line 1763, Address: 0x1bbcc0, Func Offset: 0x380
	// Line 1764, Address: 0x1bbcd8, Func Offset: 0x398
	// Line 1766, Address: 0x1bbd00, Func Offset: 0x3c0
	// Line 1767, Address: 0x1bbd0c, Func Offset: 0x3cc
	// Line 1768, Address: 0x1bbd18, Func Offset: 0x3d8
	// Line 1770, Address: 0x1bbd24, Func Offset: 0x3e4
	// Line 1772, Address: 0x1bbd54, Func Offset: 0x414
	// Line 1773, Address: 0x1bbd60, Func Offset: 0x420
	// Line 1772, Address: 0x1bbd64, Func Offset: 0x424
	// Line 1773, Address: 0x1bbd68, Func Offset: 0x428
	// Line 1772, Address: 0x1bbd6c, Func Offset: 0x42c
	// Line 1773, Address: 0x1bbd74, Func Offset: 0x434
	// Line 1774, Address: 0x1bbd7c, Func Offset: 0x43c
	// Line 1775, Address: 0x1bbd88, Func Offset: 0x448
	// Line 1776, Address: 0x1bbd94, Func Offset: 0x454
	// Line 1777, Address: 0x1bbdb8, Func Offset: 0x478
	// Line 1779, Address: 0x1bbdc0, Func Offset: 0x480
	// Line 1780, Address: 0x1bbde0, Func Offset: 0x4a0
	// Line 1781, Address: 0x1bbdec, Func Offset: 0x4ac
	// Line 1782, Address: 0x1bbdf8, Func Offset: 0x4b8
	// Line 1783, Address: 0x1bbe0c, Func Offset: 0x4cc
	// Line 1784, Address: 0x1bbe3c, Func Offset: 0x4fc
	// Line 1785, Address: 0x1bbe48, Func Offset: 0x508
	// Func End, Address: 0x1bbe70, Func Offset: 0x530
}

// 
// Start address: 0x1bbe70
void EnemyMultiControlThroughWall(sfObj* obj)
{
	EnemyMultiWork* ew;
	int r;
	// Line 1789, Address: 0x1bbe70, Func Offset: 0
	// Line 1792, Address: 0x1bbe80, Func Offset: 0x10
	// Line 1793, Address: 0x1bbe8c, Func Offset: 0x1c
	// Line 1794, Address: 0x1bbe9c, Func Offset: 0x2c
	// Line 1795, Address: 0x1bbea4, Func Offset: 0x34
	// Line 1796, Address: 0x1bbeb0, Func Offset: 0x40
	// Line 1797, Address: 0x1bbebc, Func Offset: 0x4c
	// Line 1798, Address: 0x1bbedc, Func Offset: 0x6c
	// Line 1799, Address: 0x1bbef4, Func Offset: 0x84
	// Line 1800, Address: 0x1bbefc, Func Offset: 0x8c
	// Line 1801, Address: 0x1bbf00, Func Offset: 0x90
	// Line 1803, Address: 0x1bbf08, Func Offset: 0x98
	// Line 1806, Address: 0x1bbf20, Func Offset: 0xb0
	// Line 1803, Address: 0x1bbf24, Func Offset: 0xb4
	// Line 1806, Address: 0x1bbf28, Func Offset: 0xb8
	// Line 1807, Address: 0x1bbf34, Func Offset: 0xc4
	// Line 1809, Address: 0x1bbf60, Func Offset: 0xf0
	// Line 1810, Address: 0x1bbf68, Func Offset: 0xf8
	// Line 1812, Address: 0x1bbf70, Func Offset: 0x100
	// Line 1813, Address: 0x1bbf7c, Func Offset: 0x10c
	// Line 1815, Address: 0x1bbf84, Func Offset: 0x114
	// Line 1816, Address: 0x1bbf8c, Func Offset: 0x11c
	// Line 1817, Address: 0x1bbf90, Func Offset: 0x120
	// Line 1818, Address: 0x1bbf9c, Func Offset: 0x12c
	// Line 1817, Address: 0x1bbfa0, Func Offset: 0x130
	// Line 1818, Address: 0x1bbfa4, Func Offset: 0x134
	// Line 1817, Address: 0x1bbfa8, Func Offset: 0x138
	// Line 1818, Address: 0x1bbfbc, Func Offset: 0x14c
	// Line 1819, Address: 0x1bbfc4, Func Offset: 0x154
	// Line 1820, Address: 0x1bbfcc, Func Offset: 0x15c
	// Line 1821, Address: 0x1bbfd0, Func Offset: 0x160
	// Line 1823, Address: 0x1bbfdc, Func Offset: 0x16c
	// Line 1824, Address: 0x1bbfe0, Func Offset: 0x170
	// Func End, Address: 0x1bbff4, Func Offset: 0x184
}

// 
// Start address: 0x1bc000
void EnemyMultiControlChaseInWall(sfObj* obj)
{
	int r;
	// Line 1828, Address: 0x1bc000, Func Offset: 0
	// Line 1830, Address: 0x1bc00c, Func Offset: 0xc
	// Line 1831, Address: 0x1bc01c, Func Offset: 0x1c
	// Line 1832, Address: 0x1bc024, Func Offset: 0x24
	// Line 1833, Address: 0x1bc034, Func Offset: 0x34
	// Line 1834, Address: 0x1bc038, Func Offset: 0x38
	// Line 1837, Address: 0x1bc050, Func Offset: 0x50
	// Line 1834, Address: 0x1bc054, Func Offset: 0x54
	// Line 1837, Address: 0x1bc05c, Func Offset: 0x5c
	// Line 1834, Address: 0x1bc064, Func Offset: 0x64
	// Line 1837, Address: 0x1bc068, Func Offset: 0x68
	// Line 1838, Address: 0x1bc070, Func Offset: 0x70
	// Line 1839, Address: 0x1bc094, Func Offset: 0x94
	// Line 1840, Address: 0x1bc098, Func Offset: 0x98
	// Line 1841, Address: 0x1bc0a4, Func Offset: 0xa4
	// Line 1842, Address: 0x1bc0ac, Func Offset: 0xac
	// Line 1843, Address: 0x1bc0b0, Func Offset: 0xb0
	// Line 1844, Address: 0x1bc0bc, Func Offset: 0xbc
	// Line 1845, Address: 0x1bc0c8, Func Offset: 0xc8
	// Line 1847, Address: 0x1bc0d0, Func Offset: 0xd0
	// Line 1848, Address: 0x1bc0e0, Func Offset: 0xe0
	// Line 1850, Address: 0x1bc0ec, Func Offset: 0xec
	// Line 1851, Address: 0x1bc0f0, Func Offset: 0xf0
	// Func End, Address: 0x1bc100, Func Offset: 0x100
}

// 
// Start address: 0x1bc100
void EnemyMultiControlAppearFromWall(sfObj* obj)
{
	EnemyMultiWork* ew;
	int r;
	// Line 1855, Address: 0x1bc100, Func Offset: 0
	// Line 1858, Address: 0x1bc110, Func Offset: 0x10
	// Line 1859, Address: 0x1bc11c, Func Offset: 0x1c
	// Line 1860, Address: 0x1bc12c, Func Offset: 0x2c
	// Line 1861, Address: 0x1bc134, Func Offset: 0x34
	// Line 1863, Address: 0x1bc140, Func Offset: 0x40
	// Line 1866, Address: 0x1bc158, Func Offset: 0x58
	// Line 1863, Address: 0x1bc15c, Func Offset: 0x5c
	// Line 1866, Address: 0x1bc160, Func Offset: 0x60
	// Line 1867, Address: 0x1bc16c, Func Offset: 0x6c
	// Line 1869, Address: 0x1bc190, Func Offset: 0x90
	// Line 1870, Address: 0x1bc19c, Func Offset: 0x9c
	// Line 1871, Address: 0x1bc1a4, Func Offset: 0xa4
	// Line 1872, Address: 0x1bc1a8, Func Offset: 0xa8
	// Line 1873, Address: 0x1bc1b4, Func Offset: 0xb4
	// Line 1874, Address: 0x1bc1bc, Func Offset: 0xbc
	// Line 1876, Address: 0x1bc1c0, Func Offset: 0xc0
	// Line 1877, Address: 0x1bc1cc, Func Offset: 0xcc
	// Line 1880, Address: 0x1bc1d8, Func Offset: 0xd8
	// Func End, Address: 0x1bc1ec, Func Offset: 0xec
}

// 
// Start address: 0x1bc1f0
void EnemyMultiControlPush(sfObj* obj)
{
	float* pos;
	float* ppos;
	float* rot;
	float rrot[4];
	float vec[4];
	// Line 1884, Address: 0x1bc1f0, Func Offset: 0
	// Line 1885, Address: 0x1bc204, Func Offset: 0x14
	// Line 1887, Address: 0x1bc230, Func Offset: 0x40
	// Line 1893, Address: 0x1bc238, Func Offset: 0x48
	// Line 1894, Address: 0x1bc244, Func Offset: 0x54
	// Line 1895, Address: 0x1bc250, Func Offset: 0x60
	// Line 1896, Address: 0x1bc260, Func Offset: 0x70
	// Line 1897, Address: 0x1bc278, Func Offset: 0x88
	// Line 1898, Address: 0x1bc284, Func Offset: 0x94
	// Line 1899, Address: 0x1bc294, Func Offset: 0xa4
	// Line 1901, Address: 0x1bc2ac, Func Offset: 0xbc
	// Line 1903, Address: 0x1bc2e0, Func Offset: 0xf0
	// Line 1904, Address: 0x1bc2e8, Func Offset: 0xf8
	// Line 1906, Address: 0x1bc2f0, Func Offset: 0x100
	// Line 1911, Address: 0x1bc2fc, Func Offset: 0x10c
	// Line 1912, Address: 0x1bc308, Func Offset: 0x118
	// Line 1913, Address: 0x1bc314, Func Offset: 0x124
	// Line 1915, Address: 0x1bc318, Func Offset: 0x128
	// Line 1916, Address: 0x1bc324, Func Offset: 0x134
	// Line 1917, Address: 0x1bc330, Func Offset: 0x140
	// Line 1918, Address: 0x1bc33c, Func Offset: 0x14c
	// Line 1920, Address: 0x1bc358, Func Offset: 0x168
	// Line 1921, Address: 0x1bc364, Func Offset: 0x174
	// Line 1922, Address: 0x1bc370, Func Offset: 0x180
	// Line 1923, Address: 0x1bc378, Func Offset: 0x188
	// Line 1924, Address: 0x1bc380, Func Offset: 0x190
	// Line 1926, Address: 0x1bc388, Func Offset: 0x198
	// Line 1928, Address: 0x1bc3a4, Func Offset: 0x1b4
	// Line 1929, Address: 0x1bc3ac, Func Offset: 0x1bc
	// Line 1930, Address: 0x1bc3b0, Func Offset: 0x1c0
	// Line 1933, Address: 0x1bc3c4, Func Offset: 0x1d4
	// Line 1934, Address: 0x1bc3c8, Func Offset: 0x1d8
	// Line 1937, Address: 0x1bc3e4, Func Offset: 0x1f4
	// Line 1938, Address: 0x1bc3e8, Func Offset: 0x1f8
	// Line 1939, Address: 0x1bc3f8, Func Offset: 0x208
	// Line 1944, Address: 0x1bc428, Func Offset: 0x238
	// Func End, Address: 0x1bc440, Func Offset: 0x250
}

// 
// Start address: 0x1bc440
void EnemyMultiControlDamage(sfObj* obj)
{
	EnemyMultiWork* ew;
	float tlimit;
	float dt;
	EnemyBattleDamage bd;
	float dir[4];
	float rrot[4];
	int motion;
	int d;
	float s;
	EnemyMultiSubStepDamage nextstep;
	// Line 1948, Address: 0x1bc440, Func Offset: 0
	// Line 1951, Address: 0x1bc45c, Func Offset: 0x1c
	// Line 1952, Address: 0x1bc464, Func Offset: 0x24
	// Line 1953, Address: 0x1bc46c, Func Offset: 0x2c
	// Line 1954, Address: 0x1bc47c, Func Offset: 0x3c
	// Line 1956, Address: 0x1bc4a8, Func Offset: 0x68
	// Line 1957, Address: 0x1bc4b0, Func Offset: 0x70
	// Line 1958, Address: 0x1bc4b8, Func Offset: 0x78
	// Line 1959, Address: 0x1bc4c0, Func Offset: 0x80
	// Line 1960, Address: 0x1bc4c8, Func Offset: 0x88
	// Line 1961, Address: 0x1bc4d0, Func Offset: 0x90
	// Line 1962, Address: 0x1bc4dc, Func Offset: 0x9c
	// Line 1963, Address: 0x1bc4e4, Func Offset: 0xa4
	// Line 1964, Address: 0x1bc4ec, Func Offset: 0xac
	// Line 1965, Address: 0x1bc4f8, Func Offset: 0xb8
	// Line 1966, Address: 0x1bc504, Func Offset: 0xc4
	// Line 1967, Address: 0x1bc510, Func Offset: 0xd0
	// Line 1975, Address: 0x1bc518, Func Offset: 0xd8
	// Line 1976, Address: 0x1bc524, Func Offset: 0xe4
	// Line 1977, Address: 0x1bc534, Func Offset: 0xf4
	// Line 1978, Address: 0x1bc53c, Func Offset: 0xfc
	// Line 1979, Address: 0x1bc548, Func Offset: 0x108
	// Line 1980, Address: 0x1bc55c, Func Offset: 0x11c
	// Line 1981, Address: 0x1bc560, Func Offset: 0x120
	// Line 1982, Address: 0x1bc574, Func Offset: 0x134
	// Line 1983, Address: 0x1bc584, Func Offset: 0x144
	// Line 1984, Address: 0x1bc5a8, Func Offset: 0x168
	// Line 1985, Address: 0x1bc5b4, Func Offset: 0x174
	// Line 1984, Address: 0x1bc5b8, Func Offset: 0x178
	// Line 1985, Address: 0x1bc5bc, Func Offset: 0x17c
	// Line 1986, Address: 0x1bc5d4, Func Offset: 0x194
	// Line 1987, Address: 0x1bc5e8, Func Offset: 0x1a8
	// Line 1990, Address: 0x1bc608, Func Offset: 0x1c8
	// Line 1996, Address: 0x1bc638, Func Offset: 0x1f8
	// Line 1998, Address: 0x1bc640, Func Offset: 0x200
	// Line 2000, Address: 0x1bc648, Func Offset: 0x208
	// Line 2001, Address: 0x1bc650, Func Offset: 0x210
	// Line 2003, Address: 0x1bc654, Func Offset: 0x214
	// Line 2004, Address: 0x1bc660, Func Offset: 0x220
	// Line 2007, Address: 0x1bc66c, Func Offset: 0x22c
	// Line 2008, Address: 0x1bc670, Func Offset: 0x230
	// Line 2011, Address: 0x1bc68c, Func Offset: 0x24c
	// Line 2012, Address: 0x1bc6a4, Func Offset: 0x264
	// Line 2015, Address: 0x1bc6b0, Func Offset: 0x270
	// Line 2018, Address: 0x1bc6d0, Func Offset: 0x290
	// Line 2019, Address: 0x1bc6d8, Func Offset: 0x298
	// Line 2023, Address: 0x1bc6f0, Func Offset: 0x2b0
	// Line 2022, Address: 0x1bc6f4, Func Offset: 0x2b4
	// Line 2025, Address: 0x1bc6f8, Func Offset: 0x2b8
	// Line 2028, Address: 0x1bc700, Func Offset: 0x2c0
	// Line 2029, Address: 0x1bc704, Func Offset: 0x2c4
	// Line 2033, Address: 0x1bc708, Func Offset: 0x2c8
	// Line 2034, Address: 0x1bc730, Func Offset: 0x2f0
	// Line 2035, Address: 0x1bc748, Func Offset: 0x308
	// Line 2036, Address: 0x1bc754, Func Offset: 0x314
	// Line 2037, Address: 0x1bc760, Func Offset: 0x320
	// Line 2038, Address: 0x1bc76c, Func Offset: 0x32c
	// Line 2039, Address: 0x1bc77c, Func Offset: 0x33c
	// Line 2040, Address: 0x1bc784, Func Offset: 0x344
	// Line 2041, Address: 0x1bc794, Func Offset: 0x354
	// Line 2042, Address: 0x1bc7a4, Func Offset: 0x364
	// Line 2043, Address: 0x1bc7b0, Func Offset: 0x370
	// Line 2044, Address: 0x1bc7b8, Func Offset: 0x378
	// Line 2045, Address: 0x1bc7c4, Func Offset: 0x384
	// Line 2048, Address: 0x1bc7e0, Func Offset: 0x3a0
	// Line 2050, Address: 0x1bc800, Func Offset: 0x3c0
	// Line 2051, Address: 0x1bc808, Func Offset: 0x3c8
	// Line 2052, Address: 0x1bc814, Func Offset: 0x3d4
	// Line 2053, Address: 0x1bc820, Func Offset: 0x3e0
	// Line 2054, Address: 0x1bc828, Func Offset: 0x3e8
	// Line 2057, Address: 0x1bc834, Func Offset: 0x3f4
	// Line 2058, Address: 0x1bc83c, Func Offset: 0x3fc
	// Line 2059, Address: 0x1bc840, Func Offset: 0x400
	// Line 2061, Address: 0x1bc858, Func Offset: 0x418
	// Line 2063, Address: 0x1bc860, Func Offset: 0x420
	// Line 2065, Address: 0x1bc878, Func Offset: 0x438
	// Line 2067, Address: 0x1bc880, Func Offset: 0x440
	// Line 2068, Address: 0x1bc884, Func Offset: 0x444
	// Line 2067, Address: 0x1bc888, Func Offset: 0x448
	// Line 2068, Address: 0x1bc894, Func Offset: 0x454
	// Line 2069, Address: 0x1bc8a0, Func Offset: 0x460
	// Line 2070, Address: 0x1bc8bc, Func Offset: 0x47c
	// Line 2071, Address: 0x1bc8c4, Func Offset: 0x484
	// Line 2072, Address: 0x1bc8d4, Func Offset: 0x494
	// Line 2073, Address: 0x1bc8e4, Func Offset: 0x4a4
	// Line 2074, Address: 0x1bc8f0, Func Offset: 0x4b0
	// Line 2076, Address: 0x1bc900, Func Offset: 0x4c0
	// Line 2077, Address: 0x1bc90c, Func Offset: 0x4cc
	// Line 2078, Address: 0x1bc918, Func Offset: 0x4d8
	// Line 2079, Address: 0x1bc924, Func Offset: 0x4e4
	// Line 2082, Address: 0x1bc930, Func Offset: 0x4f0
	// Line 2084, Address: 0x1bc938, Func Offset: 0x4f8
	// Line 2085, Address: 0x1bc954, Func Offset: 0x514
	// Line 2084, Address: 0x1bc958, Func Offset: 0x518
	// Line 2085, Address: 0x1bc968, Func Offset: 0x528
	// Line 2086, Address: 0x1bc974, Func Offset: 0x534
	// Line 2088, Address: 0x1bc97c, Func Offset: 0x53c
	// Line 2089, Address: 0x1bc984, Func Offset: 0x544
	// Line 2090, Address: 0x1bc988, Func Offset: 0x548
	// Line 2094, Address: 0x1bc9a0, Func Offset: 0x560
	// Func End, Address: 0x1bc9c0, Func Offset: 0x580
}

// 
// Start address: 0x1bc9c0
void EnemyMultiControlEscape(sfObj* obj)
{
	EnemyMultiWork* ew;
	float* pos;
	float rot[4];
	float trot[4];
	float vec[4];
	float tpos[4];
	float dt;
	float d;
	// Line 2098, Address: 0x1bc9c0, Func Offset: 0
	// Line 2104, Address: 0x1bc9d8, Func Offset: 0x18
	// Line 2105, Address: 0x1bc9e4, Func Offset: 0x24
	// Line 2106, Address: 0x1bc9f0, Func Offset: 0x30
	// Line 2107, Address: 0x1bc9fc, Func Offset: 0x3c
	// Line 2108, Address: 0x1bca08, Func Offset: 0x48
	// Line 2109, Address: 0x1bca2c, Func Offset: 0x6c
	// Line 2110, Address: 0x1bca30, Func Offset: 0x70
	// Line 2111, Address: 0x1bca4c, Func Offset: 0x8c
	// Line 2112, Address: 0x1bca54, Func Offset: 0x94
	// Line 2113, Address: 0x1bca5c, Func Offset: 0x9c
	// Line 2114, Address: 0x1bca60, Func Offset: 0xa0
	// Line 2115, Address: 0x1bca6c, Func Offset: 0xac
	// Line 2116, Address: 0x1bca78, Func Offset: 0xb8
	// Line 2117, Address: 0x1bca84, Func Offset: 0xc4
	// Line 2118, Address: 0x1bca8c, Func Offset: 0xcc
	// Line 2119, Address: 0x1bca98, Func Offset: 0xd8
	// Line 2120, Address: 0x1bcaa4, Func Offset: 0xe4
	// Line 2122, Address: 0x1bcac0, Func Offset: 0x100
	// Line 2123, Address: 0x1bcacc, Func Offset: 0x10c
	// Line 2124, Address: 0x1bcad8, Func Offset: 0x118
	// Line 2126, Address: 0x1bcaec, Func Offset: 0x12c
	// Line 2124, Address: 0x1bcaf0, Func Offset: 0x130
	// Line 2125, Address: 0x1bcafc, Func Offset: 0x13c
	// Line 2124, Address: 0x1bcb00, Func Offset: 0x140
	// Line 2126, Address: 0x1bcb08, Func Offset: 0x148
	// Line 2129, Address: 0x1bcb10, Func Offset: 0x150
	// Line 2130, Address: 0x1bcb38, Func Offset: 0x178
	// Line 2131, Address: 0x1bcb40, Func Offset: 0x180
	// Line 2133, Address: 0x1bcb48, Func Offset: 0x188
	// Line 2134, Address: 0x1bcb5c, Func Offset: 0x19c
	// Line 2136, Address: 0x1bcb74, Func Offset: 0x1b4
	// Line 2137, Address: 0x1bcb78, Func Offset: 0x1b8
	// Line 2138, Address: 0x1bcb90, Func Offset: 0x1d0
	// Line 2140, Address: 0x1bcbb8, Func Offset: 0x1f8
	// Line 2141, Address: 0x1bcbc4, Func Offset: 0x204
	// Line 2142, Address: 0x1bcbd0, Func Offset: 0x210
	// Line 2144, Address: 0x1bcbdc, Func Offset: 0x21c
	// Line 2145, Address: 0x1bcbf8, Func Offset: 0x238
	// Line 2147, Address: 0x1bcc00, Func Offset: 0x240
	// Line 2148, Address: 0x1bcc20, Func Offset: 0x260
	// Line 2149, Address: 0x1bcc34, Func Offset: 0x274
	// Line 2150, Address: 0x1bcc40, Func Offset: 0x280
	// Line 2151, Address: 0x1bcc4c, Func Offset: 0x28c
	// Line 2153, Address: 0x1bcc64, Func Offset: 0x2a4
	// Line 2154, Address: 0x1bcc90, Func Offset: 0x2d0
	// Line 2155, Address: 0x1bcc9c, Func Offset: 0x2dc
	// Func End, Address: 0x1bccbc, Func Offset: 0x2fc
}

// 
// Start address: 0x1bccc0
void EnemyMultiControlRound(sfObj* obj)
{
	EnemyMultiWork* ew;
	float* pos;
	float* ppos;
	float tpos[4];
	float vec[4];
	float r1;
	float r2;
	float d;
	float df;
	float dt;
	// Line 2159, Address: 0x1bccc0, Func Offset: 0
	// Line 2164, Address: 0x1bcce0, Func Offset: 0x20
	// Line 2165, Address: 0x1bccec, Func Offset: 0x2c
	// Line 2166, Address: 0x1bccf8, Func Offset: 0x38
	// Line 2167, Address: 0x1bcd00, Func Offset: 0x40
	// Line 2168, Address: 0x1bcd0c, Func Offset: 0x4c
	// Line 2170, Address: 0x1bcd30, Func Offset: 0x70
	// Line 2171, Address: 0x1bcd3c, Func Offset: 0x7c
	// Line 2172, Address: 0x1bcd44, Func Offset: 0x84
	// Line 2173, Address: 0x1bcd50, Func Offset: 0x90
	// Line 2174, Address: 0x1bcd58, Func Offset: 0x98
	// Line 2175, Address: 0x1bcd64, Func Offset: 0xa4
	// Line 2176, Address: 0x1bcd70, Func Offset: 0xb0
	// Line 2177, Address: 0x1bcd7c, Func Offset: 0xbc
	// Line 2178, Address: 0x1bcd88, Func Offset: 0xc8
	// Line 2179, Address: 0x1bcd90, Func Offset: 0xd0
	// Line 2180, Address: 0x1bcd94, Func Offset: 0xd4
	// Line 2183, Address: 0x1bcda0, Func Offset: 0xe0
	// Line 2184, Address: 0x1bcdb8, Func Offset: 0xf8
	// Line 2185, Address: 0x1bcdc4, Func Offset: 0x104
	// Line 2186, Address: 0x1bcdd4, Func Offset: 0x114
	// Line 2187, Address: 0x1bcde0, Func Offset: 0x120
	// Line 2188, Address: 0x1bce18, Func Offset: 0x158
	// Line 2189, Address: 0x1bce24, Func Offset: 0x164
	// Line 2190, Address: 0x1bce44, Func Offset: 0x184
	// Line 2191, Address: 0x1bce4c, Func Offset: 0x18c
	// Line 2192, Address: 0x1bce58, Func Offset: 0x198
	// Line 2193, Address: 0x1bce6c, Func Offset: 0x1ac
	// Line 2194, Address: 0x1bce70, Func Offset: 0x1b0
	// Line 2195, Address: 0x1bce7c, Func Offset: 0x1bc
	// Line 2196, Address: 0x1bcea8, Func Offset: 0x1e8
	// Line 2197, Address: 0x1bcec4, Func Offset: 0x204
	// Line 2198, Address: 0x1bced4, Func Offset: 0x214
	// Line 2200, Address: 0x1bcef4, Func Offset: 0x234
	// Line 2201, Address: 0x1bcefc, Func Offset: 0x23c
	// Line 2202, Address: 0x1bcf04, Func Offset: 0x244
	// Line 2203, Address: 0x1bcf08, Func Offset: 0x248
	// Line 2205, Address: 0x1bcf2c, Func Offset: 0x26c
	// Line 2206, Address: 0x1bcf48, Func Offset: 0x288
	// Line 2207, Address: 0x1bcf4c, Func Offset: 0x28c
	// Line 2206, Address: 0x1bcf50, Func Offset: 0x290
	// Line 2207, Address: 0x1bcf54, Func Offset: 0x294
	// Line 2208, Address: 0x1bcf7c, Func Offset: 0x2bc
	// Line 2210, Address: 0x1bcfb0, Func Offset: 0x2f0
	// Line 2211, Address: 0x1bcfbc, Func Offset: 0x2fc
	// Line 2212, Address: 0x1bcfd0, Func Offset: 0x310
	// Line 2213, Address: 0x1bcfe0, Func Offset: 0x320
	// Line 2214, Address: 0x1bcfec, Func Offset: 0x32c
	// Line 2215, Address: 0x1bd038, Func Offset: 0x378
	// Line 2216, Address: 0x1bd044, Func Offset: 0x384
	// Line 2217, Address: 0x1bd048, Func Offset: 0x388
	// Line 2222, Address: 0x1bd068, Func Offset: 0x3a8
	// Line 2224, Address: 0x1bd088, Func Offset: 0x3c8
	// Func End, Address: 0x1bd0ac, Func Offset: 0x3ec
}

// 
// Start address: 0x1bd0b0
void EnemyMultiControlDown(sfObj* obj)
{
	EnemyMultiWork* ew;
	// Line 2228, Address: 0x1bd0b0, Func Offset: 0
	// Line 2230, Address: 0x1bd0c0, Func Offset: 0x10
	// Line 2231, Address: 0x1bd0c8, Func Offset: 0x18
	// Line 2230, Address: 0x1bd0cc, Func Offset: 0x1c
	// Line 2231, Address: 0x1bd0d0, Func Offset: 0x20
	// Line 2232, Address: 0x1bd0dc, Func Offset: 0x2c
	// Line 2236, Address: 0x1bd128, Func Offset: 0x78
	// Line 2237, Address: 0x1bd13c, Func Offset: 0x8c
	// Line 2238, Address: 0x1bd168, Func Offset: 0xb8
	// Line 2240, Address: 0x1bd184, Func Offset: 0xd4
	// Line 2241, Address: 0x1bd1a0, Func Offset: 0xf0
	// Line 2242, Address: 0x1bd1c4, Func Offset: 0x114
	// Line 2244, Address: 0x1bd200, Func Offset: 0x150
	// Line 2245, Address: 0x1bd20c, Func Offset: 0x15c
	// Line 2246, Address: 0x1bd218, Func Offset: 0x168
	// Line 2247, Address: 0x1bd244, Func Offset: 0x194
	// Line 2248, Address: 0x1bd248, Func Offset: 0x198
	// Line 2249, Address: 0x1bd258, Func Offset: 0x1a8
	// Line 2250, Address: 0x1bd268, Func Offset: 0x1b8
	// Line 2251, Address: 0x1bd274, Func Offset: 0x1c4
	// Line 2252, Address: 0x1bd280, Func Offset: 0x1d0
	// Line 2253, Address: 0x1bd288, Func Offset: 0x1d8
	// Line 2254, Address: 0x1bd294, Func Offset: 0x1e4
	// Line 2255, Address: 0x1bd2a4, Func Offset: 0x1f4
	// Line 2256, Address: 0x1bd2c0, Func Offset: 0x210
	// Line 2257, Address: 0x1bd2c8, Func Offset: 0x218
	// Line 2258, Address: 0x1bd2d0, Func Offset: 0x220
	// Line 2259, Address: 0x1bd2dc, Func Offset: 0x22c
	// Line 2260, Address: 0x1bd2e0, Func Offset: 0x230
	// Line 2261, Address: 0x1bd2ec, Func Offset: 0x23c
	// Line 2262, Address: 0x1bd2f4, Func Offset: 0x244
	// Line 2263, Address: 0x1bd2f8, Func Offset: 0x248
	// Line 2264, Address: 0x1bd314, Func Offset: 0x264
	// Line 2265, Address: 0x1bd31c, Func Offset: 0x26c
	// Line 2266, Address: 0x1bd320, Func Offset: 0x270
	// Line 2265, Address: 0x1bd324, Func Offset: 0x274
	// Line 2266, Address: 0x1bd328, Func Offset: 0x278
	// Line 2267, Address: 0x1bd334, Func Offset: 0x284
	// Line 2268, Address: 0x1bd364, Func Offset: 0x2b4
	// Line 2269, Address: 0x1bd390, Func Offset: 0x2e0
	// Line 2271, Address: 0x1bd3a0, Func Offset: 0x2f0
	// Line 2274, Address: 0x1bd3e0, Func Offset: 0x330
	// Line 2276, Address: 0x1bd3f0, Func Offset: 0x340
	// Line 2278, Address: 0x1bd3f8, Func Offset: 0x348
	// Line 2279, Address: 0x1bd410, Func Offset: 0x360
	// Line 2281, Address: 0x1bd420, Func Offset: 0x370
	// Line 2283, Address: 0x1bd428, Func Offset: 0x378
	// Line 2285, Address: 0x1bd430, Func Offset: 0x380
	// Line 2288, Address: 0x1bd44c, Func Offset: 0x39c
	// Line 2289, Address: 0x1bd450, Func Offset: 0x3a0
	// Func End, Address: 0x1bd464, Func Offset: 0x3b4
}

// 
// Start address: 0x1bd470
void EnemyMultiControlExorcismDown(sfObj* obj)
{
	EnemyMultiWork* ew;
	// Line 2293, Address: 0x1bd470, Func Offset: 0
	// Line 2295, Address: 0x1bd480, Func Offset: 0x10
	// Line 2296, Address: 0x1bd488, Func Offset: 0x18
	// Line 2295, Address: 0x1bd48c, Func Offset: 0x1c
	// Line 2296, Address: 0x1bd490, Func Offset: 0x20
	// Line 2297, Address: 0x1bd49c, Func Offset: 0x2c
	// Line 2298, Address: 0x1bd4dc, Func Offset: 0x6c
	// Line 2299, Address: 0x1bd4e0, Func Offset: 0x70
	// Line 2300, Address: 0x1bd4e8, Func Offset: 0x78
	// Line 2301, Address: 0x1bd4f8, Func Offset: 0x88
	// Line 2302, Address: 0x1bd504, Func Offset: 0x94
	// Line 2303, Address: 0x1bd50c, Func Offset: 0x9c
	// Line 2304, Address: 0x1bd514, Func Offset: 0xa4
	// Line 2305, Address: 0x1bd51c, Func Offset: 0xac
	// Line 2306, Address: 0x1bd524, Func Offset: 0xb4
	// Line 2307, Address: 0x1bd530, Func Offset: 0xc0
	// Line 2308, Address: 0x1bd538, Func Offset: 0xc8
	// Line 2309, Address: 0x1bd544, Func Offset: 0xd4
	// Line 2311, Address: 0x1bd550, Func Offset: 0xe0
	// Line 2312, Address: 0x1bd56c, Func Offset: 0xfc
	// Line 2313, Address: 0x1bd57c, Func Offset: 0x10c
	// Line 2314, Address: 0x1bd5a0, Func Offset: 0x130
	// Line 2315, Address: 0x1bd5ac, Func Offset: 0x13c
	// Line 2316, Address: 0x1bd5b4, Func Offset: 0x144
	// Line 2317, Address: 0x1bd5b8, Func Offset: 0x148
	// Line 2318, Address: 0x1bd5c4, Func Offset: 0x154
	// Line 2319, Address: 0x1bd5d0, Func Offset: 0x160
	// Line 2320, Address: 0x1bd5d8, Func Offset: 0x168
	// Line 2321, Address: 0x1bd600, Func Offset: 0x190
	// Line 2322, Address: 0x1bd610, Func Offset: 0x1a0
	// Line 2323, Address: 0x1bd620, Func Offset: 0x1b0
	// Line 2324, Address: 0x1bd630, Func Offset: 0x1c0
	// Line 2325, Address: 0x1bd640, Func Offset: 0x1d0
	// Line 2326, Address: 0x1bd64c, Func Offset: 0x1dc
	// Line 2327, Address: 0x1bd654, Func Offset: 0x1e4
	// Line 2328, Address: 0x1bd660, Func Offset: 0x1f0
	// Line 2329, Address: 0x1bd668, Func Offset: 0x1f8
	// Line 2331, Address: 0x1bd670, Func Offset: 0x200
	// Line 2332, Address: 0x1bd690, Func Offset: 0x220
	// Line 2333, Address: 0x1bd69c, Func Offset: 0x22c
	// Line 2334, Address: 0x1bd6ac, Func Offset: 0x23c
	// Line 2335, Address: 0x1bd6c8, Func Offset: 0x258
	// Line 2337, Address: 0x1bd6ec, Func Offset: 0x27c
	// Line 2338, Address: 0x1bd6f8, Func Offset: 0x288
	// Line 2339, Address: 0x1bd714, Func Offset: 0x2a4
	// Line 2340, Address: 0x1bd718, Func Offset: 0x2a8
	// Line 2342, Address: 0x1bd720, Func Offset: 0x2b0
	// Line 2344, Address: 0x1bd728, Func Offset: 0x2b8
	// Line 2345, Address: 0x1bd744, Func Offset: 0x2d4
	// Line 2346, Address: 0x1bd74c, Func Offset: 0x2dc
	// Line 2347, Address: 0x1bd750, Func Offset: 0x2e0
	// Line 2346, Address: 0x1bd754, Func Offset: 0x2e4
	// Line 2347, Address: 0x1bd758, Func Offset: 0x2e8
	// Line 2349, Address: 0x1bd764, Func Offset: 0x2f4
	// Line 2350, Address: 0x1bd76c, Func Offset: 0x2fc
	// Line 2351, Address: 0x1bd770, Func Offset: 0x300
	// Line 2352, Address: 0x1bd788, Func Offset: 0x318
	// Line 2353, Address: 0x1bd798, Func Offset: 0x328
	// Line 2355, Address: 0x1bd7a0, Func Offset: 0x330
	// Line 2357, Address: 0x1bd7a8, Func Offset: 0x338
	// Line 2360, Address: 0x1bd7c4, Func Offset: 0x354
	// Line 2361, Address: 0x1bd7c8, Func Offset: 0x358
	// Func End, Address: 0x1bd7dc, Func Offset: 0x36c
}

// 
// Start address: 0x1bd7e0
void EnemyMultiControlFinished(sfObj* obj)
{
	EnemyMultiWork* ew;
	// Line 2365, Address: 0x1bd7e0, Func Offset: 0
	// Line 2367, Address: 0x1bd7f0, Func Offset: 0x10
	// Line 2368, Address: 0x1bd7fc, Func Offset: 0x1c
	// Line 2369, Address: 0x1bd844, Func Offset: 0x64
	// Line 2370, Address: 0x1bd848, Func Offset: 0x68
	// Line 2372, Address: 0x1bd854, Func Offset: 0x74
	// Line 2373, Address: 0x1bd858, Func Offset: 0x78
	// Line 2374, Address: 0x1bd864, Func Offset: 0x84
	// Line 2375, Address: 0x1bd874, Func Offset: 0x94
	// Line 2376, Address: 0x1bd880, Func Offset: 0xa0
	// Line 2377, Address: 0x1bd888, Func Offset: 0xa8
	// Line 2378, Address: 0x1bd894, Func Offset: 0xb4
	// Line 2379, Address: 0x1bd8a0, Func Offset: 0xc0
	// Line 2380, Address: 0x1bd8a8, Func Offset: 0xc8
	// Line 2381, Address: 0x1bd8bc, Func Offset: 0xdc
	// Line 2382, Address: 0x1bd8c0, Func Offset: 0xe0
	// Line 2381, Address: 0x1bd8c4, Func Offset: 0xe4
	// Line 2382, Address: 0x1bd8c8, Func Offset: 0xe8
	// Line 2383, Address: 0x1bd8d0, Func Offset: 0xf0
	// Line 2384, Address: 0x1bd8d8, Func Offset: 0xf8
	// Line 2385, Address: 0x1bd904, Func Offset: 0x124
	// Line 2387, Address: 0x1bd908, Func Offset: 0x128
	// Line 2391, Address: 0x1bd910, Func Offset: 0x130
	// Line 2393, Address: 0x1bd918, Func Offset: 0x138
	// Line 2395, Address: 0x1bd920, Func Offset: 0x140
	// Line 2397, Address: 0x1bd928, Func Offset: 0x148
	// Line 2398, Address: 0x1bd938, Func Offset: 0x158
	// Line 2399, Address: 0x1bd944, Func Offset: 0x164
	// Line 2400, Address: 0x1bd954, Func Offset: 0x174
	// Line 2403, Address: 0x1bd95c, Func Offset: 0x17c
	// Line 2404, Address: 0x1bd960, Func Offset: 0x180
	// Line 2405, Address: 0x1bd970, Func Offset: 0x190
	// Line 2406, Address: 0x1bd97c, Func Offset: 0x19c
	// Line 2407, Address: 0x1bd98c, Func Offset: 0x1ac
	// Line 2409, Address: 0x1bd998, Func Offset: 0x1b8
	// Line 2410, Address: 0x1bd9a4, Func Offset: 0x1c4
	// Line 2411, Address: 0x1bd9ac, Func Offset: 0x1cc
	// Line 2412, Address: 0x1bd9b8, Func Offset: 0x1d8
	// Line 2413, Address: 0x1bd9c4, Func Offset: 0x1e4
	// Line 2415, Address: 0x1bda08, Func Offset: 0x228
	// Line 2417, Address: 0x1bda18, Func Offset: 0x238
	// Line 2419, Address: 0x1bda24, Func Offset: 0x244
	// Line 2420, Address: 0x1bda2c, Func Offset: 0x24c
	// Line 2421, Address: 0x1bda30, Func Offset: 0x250
	// Line 2422, Address: 0x1bda48, Func Offset: 0x268
	// Line 2424, Address: 0x1bda58, Func Offset: 0x278
	// Line 2425, Address: 0x1bda64, Func Offset: 0x284
	// Line 2429, Address: 0x1bda70, Func Offset: 0x290
	// Func End, Address: 0x1bda84, Func Offset: 0x2a4
}

// 
// Start address: 0x1bda90
void EnemyMultiControlEvent(sfObj* obj)
{
	EnemyMultiWork* ew;
	// Line 2433, Address: 0x1bda90, Func Offset: 0
	// Line 2435, Address: 0x1bdaa0, Func Offset: 0x10
	// Line 2436, Address: 0x1bdaac, Func Offset: 0x1c
	// Line 2438, Address: 0x1bdad0, Func Offset: 0x40
	// Line 2439, Address: 0x1bdadc, Func Offset: 0x4c
	// Line 2440, Address: 0x1bdae8, Func Offset: 0x58
	// Line 2441, Address: 0x1bdaf4, Func Offset: 0x64
	// Line 2442, Address: 0x1bdb00, Func Offset: 0x70
	// Line 2443, Address: 0x1bdb10, Func Offset: 0x80
	// Line 2444, Address: 0x1bdb20, Func Offset: 0x90
	// Line 2445, Address: 0x1bdb30, Func Offset: 0xa0
	// Line 2446, Address: 0x1bdb3c, Func Offset: 0xac
	// Line 2447, Address: 0x1bdb48, Func Offset: 0xb8
	// Line 2448, Address: 0x1bdb50, Func Offset: 0xc0
	// Line 2449, Address: 0x1bdb5c, Func Offset: 0xcc
	// Line 2450, Address: 0x1bdb64, Func Offset: 0xd4
	// Line 2452, Address: 0x1bdb70, Func Offset: 0xe0
	// Line 2454, Address: 0x1bdb8c, Func Offset: 0xfc
	// Line 2455, Address: 0x1bdb94, Func Offset: 0x104
	// Line 2456, Address: 0x1bdb9c, Func Offset: 0x10c
	// Line 2462, Address: 0x1bdba0, Func Offset: 0x110
	// Line 2463, Address: 0x1bdbb0, Func Offset: 0x120
	// Line 2464, Address: 0x1bdbb8, Func Offset: 0x128
	// Line 2465, Address: 0x1bdbc8, Func Offset: 0x138
	// Line 2466, Address: 0x1bdbd8, Func Offset: 0x148
	// Line 2467, Address: 0x1bdbe0, Func Offset: 0x150
	// Line 2468, Address: 0x1bdbec, Func Offset: 0x15c
	// Line 2469, Address: 0x1bdbf8, Func Offset: 0x168
	// Line 2472, Address: 0x1bdc04, Func Offset: 0x174
	// Line 2473, Address: 0x1bdc08, Func Offset: 0x178
	// Func End, Address: 0x1bdc1c, Func Offset: 0x18c
}

// 
// Start address: 0x1bdc20
void EnemyMultiSetExtentDamage(sfObj* obj)
{
	EnemyMultiAnime anime;
	float d;
	// Line 2512, Address: 0x1bdc20, Func Offset: 0
	// Line 2514, Address: 0x1bdc24, Func Offset: 0x4
	// Line 2512, Address: 0x1bdc28, Func Offset: 0x8
	// Line 2514, Address: 0x1bdc34, Func Offset: 0x14
	// Line 2515, Address: 0x1bdc38, Func Offset: 0x18
	// Line 2516, Address: 0x1bdc5c, Func Offset: 0x3c
	// Line 2517, Address: 0x1bdc60, Func Offset: 0x40
	// Line 2518, Address: 0x1bdc68, Func Offset: 0x48
	// Line 2520, Address: 0x1bdc70, Func Offset: 0x50
	// Line 2523, Address: 0x1bdc78, Func Offset: 0x58
	// Line 2525, Address: 0x1bdca8, Func Offset: 0x88
	// Line 2526, Address: 0x1bdcb4, Func Offset: 0x94
	// Line 2539, Address: 0x1bdcdc, Func Offset: 0xbc
	// Line 2540, Address: 0x1bdce0, Func Offset: 0xc0
	// Line 2544, Address: 0x1bdd00, Func Offset: 0xe0
	// Func End, Address: 0x1bdd14, Func Offset: 0xf4
}

// 
// Start address: 0x1bdd20
void EnemyMultiCheckExorcismDamage(sfObj* obj)
{
	EnemyMultiWork* ew;
	float d;
	// Line 2548, Address: 0x1bdd20, Func Offset: 0
	// Line 2551, Address: 0x1bdd30, Func Offset: 0x10
	// Line 2552, Address: 0x1bdd3c, Func Offset: 0x1c
	// Line 2553, Address: 0x1bdd44, Func Offset: 0x24
	// Line 2554, Address: 0x1bdd58, Func Offset: 0x38
	// Line 2555, Address: 0x1bdd5c, Func Offset: 0x3c
	// Line 2554, Address: 0x1bdd60, Func Offset: 0x40
	// Line 2555, Address: 0x1bdd6c, Func Offset: 0x4c
	// Line 2556, Address: 0x1bdd88, Func Offset: 0x68
	// Line 2559, Address: 0x1bdda0, Func Offset: 0x80
	// Line 2560, Address: 0x1bddec, Func Offset: 0xcc
	// Line 2561, Address: 0x1bddf0, Func Offset: 0xd0
	// Line 2562, Address: 0x1bddf8, Func Offset: 0xd8
	// Line 2563, Address: 0x1bde18, Func Offset: 0xf8
	// Line 2565, Address: 0x1bde20, Func Offset: 0x100
	// Line 2566, Address: 0x1bde34, Func Offset: 0x114
	// Line 2567, Address: 0x1bde40, Func Offset: 0x120
	// Line 2569, Address: 0x1bde4c, Func Offset: 0x12c
	// Line 2573, Address: 0x1bde54, Func Offset: 0x134
	// Line 2574, Address: 0x1bde58, Func Offset: 0x138
	// Line 2575, Address: 0x1bde6c, Func Offset: 0x14c
	// Line 2576, Address: 0x1bde78, Func Offset: 0x158
	// Line 2577, Address: 0x1bde84, Func Offset: 0x164
	// Line 2578, Address: 0x1bde90, Func Offset: 0x170
	// Line 2580, Address: 0x1bde9c, Func Offset: 0x17c
	// Line 2581, Address: 0x1bdea4, Func Offset: 0x184
	// Line 2582, Address: 0x1bdea8, Func Offset: 0x188
	// Line 2587, Address: 0x1bdeb8, Func Offset: 0x198
	// Line 2589, Address: 0x1bdec4, Func Offset: 0x1a4
	// Line 2590, Address: 0x1bded0, Func Offset: 0x1b0
	// Line 2592, Address: 0x1bded8, Func Offset: 0x1b8
	// Line 2593, Address: 0x1bdef4, Func Offset: 0x1d4
	// Line 2594, Address: 0x1bdf00, Func Offset: 0x1e0
	// Line 2595, Address: 0x1bdf1c, Func Offset: 0x1fc
	// Line 2596, Address: 0x1bdf20, Func Offset: 0x200
	// Line 2602, Address: 0x1bdf58, Func Offset: 0x238
	// Line 2604, Address: 0x1bdf84, Func Offset: 0x264
	// Line 2605, Address: 0x1bdf88, Func Offset: 0x268
	// Func End, Address: 0x1bdf9c, Func Offset: 0x27c
}

// 
// Start address: 0x1bdfa0
void EnemyMultiSetAttackCommand(sfObj* obj, float timer)
{
	// Line 2609, Address: 0x1bdfa0, Func Offset: 0
	// Line 2610, Address: 0x1bdfb4, Func Offset: 0x14
	// Line 2612, Address: 0x1bdfdc, Func Offset: 0x3c
	// Func End, Address: 0x1bdff0, Func Offset: 0x50
}

// 
// Start address: 0x1bdff0
void EnemyMultiSetEventPlayerCheck(sfObj* obj)
{
	EnemyMultiWork* ew;
	EnemySenseData* es;
	// Line 2618, Address: 0x1bdff0, Func Offset: 0
	// Line 2622, Address: 0x1be000, Func Offset: 0x10
	// Line 2623, Address: 0x1be008, Func Offset: 0x18
	// Line 2624, Address: 0x1be00c, Func Offset: 0x1c
	// Line 2625, Address: 0x1be018, Func Offset: 0x28
	// Line 2628, Address: 0x1be024, Func Offset: 0x34
	// Line 2626, Address: 0x1be028, Func Offset: 0x38
	// Line 2628, Address: 0x1be030, Func Offset: 0x40
	// Line 2630, Address: 0x1be058, Func Offset: 0x68
	// Line 2631, Address: 0x1be060, Func Offset: 0x70
	// Line 2632, Address: 0x1be068, Func Offset: 0x78
	// Line 2633, Address: 0x1be070, Func Offset: 0x80
	// Line 2634, Address: 0x1be078, Func Offset: 0x88
	// Line 2635, Address: 0x1be080, Func Offset: 0x90
	// Line 2636, Address: 0x1be088, Func Offset: 0x98
	// Line 2637, Address: 0x1be094, Func Offset: 0xa4
	// Line 2639, Address: 0x1be098, Func Offset: 0xa8
	// Line 2642, Address: 0x1be0b4, Func Offset: 0xc4
	// Func End, Address: 0x1be0c8, Func Offset: 0xd8
}

// 
// Start address: 0x1be0d0
void EnemyMultiSetEventAttackCheck(sfObj* obj)
{
	EnemyMultiWork* ew;
	EnemySenseData* es;
	int id;
	// Line 2646, Address: 0x1be0d0, Func Offset: 0
	// Line 2651, Address: 0x1be0e0, Func Offset: 0x10
	// Line 2652, Address: 0x1be0ec, Func Offset: 0x1c
	// Line 2653, Address: 0x1be0fc, Func Offset: 0x2c
	// Line 2656, Address: 0x1be11c, Func Offset: 0x4c
	// Line 2659, Address: 0x1be140, Func Offset: 0x70
	// Line 2661, Address: 0x1be148, Func Offset: 0x78
	// Line 2663, Address: 0x1be150, Func Offset: 0x80
	// Line 2667, Address: 0x1be174, Func Offset: 0xa4
	// Line 2668, Address: 0x1be178, Func Offset: 0xa8
	// Line 2669, Address: 0x1be184, Func Offset: 0xb4
	// Line 2671, Address: 0x1be190, Func Offset: 0xc0
	// Line 2670, Address: 0x1be194, Func Offset: 0xc4
	// Line 2676, Address: 0x1be198, Func Offset: 0xc8
	// Line 2670, Address: 0x1be19c, Func Offset: 0xcc
	// Line 2676, Address: 0x1be1a0, Func Offset: 0xd0
	// Line 2670, Address: 0x1be1a4, Func Offset: 0xd4
	// Line 2672, Address: 0x1be1a8, Func Offset: 0xd8
	// Line 2671, Address: 0x1be1b0, Func Offset: 0xe0
	// Line 2673, Address: 0x1be1b4, Func Offset: 0xe4
	// Line 2672, Address: 0x1be1b8, Func Offset: 0xe8
	// Line 2676, Address: 0x1be1bc, Func Offset: 0xec
	// Line 2673, Address: 0x1be1c0, Func Offset: 0xf0
	// Line 2674, Address: 0x1be1c4, Func Offset: 0xf4
	// Line 2676, Address: 0x1be1c8, Func Offset: 0xf8
	// Line 2679, Address: 0x1be1d8, Func Offset: 0x108
	// Func End, Address: 0x1be1ec, Func Offset: 0x11c
}

// 
// Start address: 0x1be1f0
void EnemyMultiSetEventDamageCheck(sfObj* obj)
{
	EnemyMultiWork* ew;
	// Line 2683, Address: 0x1be1f0, Func Offset: 0
	// Line 2684, Address: 0x1be1fc, Func Offset: 0xc
	// Line 2686, Address: 0x1be228, Func Offset: 0x38
	// Line 2695, Address: 0x1be240, Func Offset: 0x50
	// Line 2697, Address: 0x1be258, Func Offset: 0x68
	// Line 2698, Address: 0x1be26c, Func Offset: 0x7c
	// Line 2701, Address: 0x1be280, Func Offset: 0x90
	// Line 2704, Address: 0x1be288, Func Offset: 0x98
	// Line 2705, Address: 0x1be2a0, Func Offset: 0xb0
	// Line 2707, Address: 0x1be2b8, Func Offset: 0xc8
	// Line 2709, Address: 0x1be2c0, Func Offset: 0xd0
	// Line 2712, Address: 0x1be2e8, Func Offset: 0xf8
	// Line 2713, Address: 0x1be2f0, Func Offset: 0x100
	// Line 2720, Address: 0x1be308, Func Offset: 0x118
	// Line 2722, Address: 0x1be320, Func Offset: 0x130
	// Line 2724, Address: 0x1be328, Func Offset: 0x138
	// Line 2725, Address: 0x1be338, Func Offset: 0x148
	// Line 2728, Address: 0x1be34c, Func Offset: 0x15c
	// Line 2729, Address: 0x1be354, Func Offset: 0x164
	// Line 2730, Address: 0x1be358, Func Offset: 0x168
	// Line 2732, Address: 0x1be374, Func Offset: 0x184
	// Line 2733, Address: 0x1be37c, Func Offset: 0x18c
	// Line 2734, Address: 0x1be380, Func Offset: 0x190
	// Line 2736, Address: 0x1be39c, Func Offset: 0x1ac
	// Line 2737, Address: 0x1be3b0, Func Offset: 0x1c0
	// Line 2739, Address: 0x1be3c8, Func Offset: 0x1d8
	// Line 2740, Address: 0x1be3d0, Func Offset: 0x1e0
	// Line 2743, Address: 0x1be3ec, Func Offset: 0x1fc
	// Line 2744, Address: 0x1be3f4, Func Offset: 0x204
	// Line 2745, Address: 0x1be3f8, Func Offset: 0x208
	// Line 2747, Address: 0x1be414, Func Offset: 0x224
	// Line 2748, Address: 0x1be428, Func Offset: 0x238
	// Line 2750, Address: 0x1be440, Func Offset: 0x250
	// Line 2751, Address: 0x1be448, Func Offset: 0x258
	// Line 2755, Address: 0x1be464, Func Offset: 0x274
	// Line 2756, Address: 0x1be468, Func Offset: 0x278
	// Func End, Address: 0x1be478, Func Offset: 0x288
}

// 
// Start address: 0x1be480
void EnemyEDMultiWanderResetTarget(void* obj)
{
	// Line 2762, Address: 0x1be480, Func Offset: 0
	// Line 2763, Address: 0x1be48c, Func Offset: 0xc
	// Line 2764, Address: 0x1be49c, Func Offset: 0x1c
	// Line 2765, Address: 0x1be4a4, Func Offset: 0x24
	// Func End, Address: 0x1be4b8, Func Offset: 0x38
}

// 
// Start address: 0x1be4c0
void EnemyEDMultiAttackStep1(void* obj)
{
	EnemyMultiWork* ew;
	float tpos[4];
	float ppos[4];
	float dir[4];
	float vec[4];
	float rot[4];
	float d;
	float d2;
	// Line 2769, Address: 0x1be4c0, Func Offset: 0
	// Line 2774, Address: 0x1be4d4, Func Offset: 0x14
	// Line 2775, Address: 0x1be4e4, Func Offset: 0x24
	// Line 2776, Address: 0x1be4ec, Func Offset: 0x2c
	// Line 2775, Address: 0x1be4f0, Func Offset: 0x30
	// Line 2777, Address: 0x1be4f4, Func Offset: 0x34
	// Line 2778, Address: 0x1be504, Func Offset: 0x44
	// Line 2779, Address: 0x1be518, Func Offset: 0x58
	// Line 2780, Address: 0x1be528, Func Offset: 0x68
	// Line 2783, Address: 0x1be588, Func Offset: 0xc8
	// Line 2784, Address: 0x1be590, Func Offset: 0xd0
	// Line 2785, Address: 0x1be5b0, Func Offset: 0xf0
	// Line 2786, Address: 0x1be5d4, Func Offset: 0x114
	// Line 2788, Address: 0x1be610, Func Offset: 0x150
	// Line 2791, Address: 0x1be640, Func Offset: 0x180
	// Line 2792, Address: 0x1be648, Func Offset: 0x188
	// Line 2793, Address: 0x1be65c, Func Offset: 0x19c
	// Line 2794, Address: 0x1be664, Func Offset: 0x1a4
	// Line 2795, Address: 0x1be670, Func Offset: 0x1b0
	// Line 2796, Address: 0x1be674, Func Offset: 0x1b4
	// Line 2797, Address: 0x1be678, Func Offset: 0x1b8
	// Line 2800, Address: 0x1be698, Func Offset: 0x1d8
	// Line 2801, Address: 0x1be6a0, Func Offset: 0x1e0
	// Line 2802, Address: 0x1be6ac, Func Offset: 0x1ec
	// Line 2803, Address: 0x1be6b4, Func Offset: 0x1f4
	// Line 2804, Address: 0x1be6c0, Func Offset: 0x200
	// Line 2805, Address: 0x1be6cc, Func Offset: 0x20c
	// Line 2806, Address: 0x1be6dc, Func Offset: 0x21c
	// Line 2807, Address: 0x1be700, Func Offset: 0x240
	// Line 2808, Address: 0x1be714, Func Offset: 0x254
	// Line 2809, Address: 0x1be724, Func Offset: 0x264
	// Line 2810, Address: 0x1be730, Func Offset: 0x270
	// Line 2811, Address: 0x1be738, Func Offset: 0x278
	// Line 2812, Address: 0x1be73c, Func Offset: 0x27c
	// Line 2815, Address: 0x1be744, Func Offset: 0x284
	// Line 2816, Address: 0x1be748, Func Offset: 0x288
	// Line 2817, Address: 0x1be754, Func Offset: 0x294
	// Line 2818, Address: 0x1be760, Func Offset: 0x2a0
	// Line 2819, Address: 0x1be76c, Func Offset: 0x2ac
	// Func End, Address: 0x1be788, Func Offset: 0x2c8
}

// 
// Start address: 0x1be790
void EnemyEDMultiAttack2Step1(void* obj)
{
	EnemyMultiWork* ew;
	float tpos[4];
	float ppos[4];
	float dir[4];
	float rot[4];
	// Line 2823, Address: 0x1be790, Func Offset: 0
	// Line 2827, Address: 0x1be7a0, Func Offset: 0x10
	// Line 2828, Address: 0x1be7b0, Func Offset: 0x20
	// Line 2829, Address: 0x1be7bc, Func Offset: 0x2c
	// Line 2830, Address: 0x1be7d0, Func Offset: 0x40
	// Line 2831, Address: 0x1be7e4, Func Offset: 0x54
	// Line 2832, Address: 0x1be800, Func Offset: 0x70
	// Line 2833, Address: 0x1be80c, Func Offset: 0x7c
	// Line 2834, Address: 0x1be814, Func Offset: 0x84
	// Line 2842, Address: 0x1be8b4, Func Offset: 0x124
	// Line 2843, Address: 0x1be8bc, Func Offset: 0x12c
	// Line 2846, Address: 0x1be8e8, Func Offset: 0x158
	// Line 2847, Address: 0x1be8f0, Func Offset: 0x160
	// Line 2848, Address: 0x1be8fc, Func Offset: 0x16c
	// Line 2849, Address: 0x1be904, Func Offset: 0x174
	// Line 2850, Address: 0x1be910, Func Offset: 0x180
	// Line 2851, Address: 0x1be91c, Func Offset: 0x18c
	// Line 2852, Address: 0x1be92c, Func Offset: 0x19c
	// Line 2853, Address: 0x1be950, Func Offset: 0x1c0
	// Line 2854, Address: 0x1be964, Func Offset: 0x1d4
	// Line 2855, Address: 0x1be974, Func Offset: 0x1e4
	// Line 2856, Address: 0x1be980, Func Offset: 0x1f0
	// Line 2857, Address: 0x1be990, Func Offset: 0x200
	// Line 2858, Address: 0x1be994, Func Offset: 0x204
	// Line 2859, Address: 0x1be9a0, Func Offset: 0x210
	// Line 2861, Address: 0x1be9a8, Func Offset: 0x218
	// Line 2863, Address: 0x1be9cc, Func Offset: 0x23c
	// Line 2864, Address: 0x1be9d8, Func Offset: 0x248
	// Line 2865, Address: 0x1be9e8, Func Offset: 0x258
	// Line 2866, Address: 0x1be9f4, Func Offset: 0x264
	// Line 2867, Address: 0x1be9f8, Func Offset: 0x268
	// Func End, Address: 0x1bea0c, Func Offset: 0x27c
}

// 
// Start address: 0x1bea10
void EnemyEDMultiAttackEnd(void* obj)
{
	EnemyMultiWork* ew;
	// Line 2871, Address: 0x1bea10, Func Offset: 0
	// Line 2873, Address: 0x1bea20, Func Offset: 0x10
	// Line 2874, Address: 0x1bea2c, Func Offset: 0x1c
	// Line 2875, Address: 0x1bea4c, Func Offset: 0x3c
	// Line 2877, Address: 0x1bea58, Func Offset: 0x48
	// Line 2878, Address: 0x1bea64, Func Offset: 0x54
	// Line 2879, Address: 0x1bea70, Func Offset: 0x60
	// Line 2880, Address: 0x1bea78, Func Offset: 0x68
	// Line 2881, Address: 0x1bea84, Func Offset: 0x74
	// Line 2882, Address: 0x1bea94, Func Offset: 0x84
	// Line 2884, Address: 0x1bead0, Func Offset: 0xc0
	// Line 2885, Address: 0x1beadc, Func Offset: 0xcc
	// Line 2886, Address: 0x1beae8, Func Offset: 0xd8
	// Line 2887, Address: 0x1beaf4, Func Offset: 0xe4
	// Line 2888, Address: 0x1beaf8, Func Offset: 0xe8
	// Func End, Address: 0x1beb0c, Func Offset: 0xfc
}

// 
// Start address: 0x1beb10
void EnemyEDMultiPushEnd(void* obj)
{
	// Line 2892, Address: 0x1beb10, Func Offset: 0
	// Line 2893, Address: 0x1beb1c, Func Offset: 0xc
	// Line 2894, Address: 0x1beb2c, Func Offset: 0x1c
	// Line 2895, Address: 0x1beb3c, Func Offset: 0x2c
	// Line 2896, Address: 0x1beb44, Func Offset: 0x34
	// Line 2897, Address: 0x1beb50, Func Offset: 0x40
	// Line 2898, Address: 0x1beb5c, Func Offset: 0x4c
	// Line 2899, Address: 0x1beb60, Func Offset: 0x50
	// Func End, Address: 0x1beb70, Func Offset: 0x60
}

// 
// Start address: 0x1beb70
void EnemyEDMultiAdditionalDamage(void* obj)
{
	EnemyMultiWork* ew;
	EnemyBattleDamage bd;
	float dir[4];
	int d;
	float rrot[4];
	int motion;
	float s;
	EnemyMultiSubStepDamage nextstep;
	// Line 2903, Address: 0x1beb70, Func Offset: 0
	// Line 2908, Address: 0x1beb94, Func Offset: 0x24
	// Line 2909, Address: 0x1beba0, Func Offset: 0x30
	// Line 2910, Address: 0x1bebac, Func Offset: 0x3c
	// Line 2911, Address: 0x1bebd0, Func Offset: 0x60
	// Line 2912, Address: 0x1bebf8, Func Offset: 0x88
	// Line 2913, Address: 0x1bec10, Func Offset: 0xa0
	// Line 2914, Address: 0x1bec20, Func Offset: 0xb0
	// Line 2915, Address: 0x1bec28, Func Offset: 0xb8
	// Line 2916, Address: 0x1bec30, Func Offset: 0xc0
	// Line 2917, Address: 0x1bec44, Func Offset: 0xd4
	// Line 2918, Address: 0x1bec48, Func Offset: 0xd8
	// Line 2919, Address: 0x1bec58, Func Offset: 0xe8
	// Line 2925, Address: 0x1becb0, Func Offset: 0x140
	// Line 2931, Address: 0x1bece0, Func Offset: 0x170
	// Line 2932, Address: 0x1becf4, Func Offset: 0x184
	// Line 2933, Address: 0x1bed04, Func Offset: 0x194
	// Line 2934, Address: 0x1bed14, Func Offset: 0x1a4
	// Line 2933, Address: 0x1bed18, Func Offset: 0x1a8
	// Line 2934, Address: 0x1bed1c, Func Offset: 0x1ac
	// Line 2935, Address: 0x1bed34, Func Offset: 0x1c4
	// Line 2936, Address: 0x1bed48, Func Offset: 0x1d8
	// Line 2938, Address: 0x1bed68, Func Offset: 0x1f8
	// Line 2944, Address: 0x1bed98, Func Offset: 0x228
	// Line 2946, Address: 0x1beda0, Func Offset: 0x230
	// Line 2948, Address: 0x1beda8, Func Offset: 0x238
	// Line 2949, Address: 0x1bedb0, Func Offset: 0x240
	// Line 2950, Address: 0x1bedbc, Func Offset: 0x24c
	// Line 2951, Address: 0x1bedc4, Func Offset: 0x254
	// Line 2956, Address: 0x1bee08, Func Offset: 0x298
	// Line 2955, Address: 0x1bee0c, Func Offset: 0x29c
	// Line 2958, Address: 0x1bee10, Func Offset: 0x2a0
	// Line 2961, Address: 0x1bee18, Func Offset: 0x2a8
	// Line 2963, Address: 0x1bee1c, Func Offset: 0x2ac
	// Line 2966, Address: 0x1bee3c, Func Offset: 0x2cc
	// Line 2967, Address: 0x1bee54, Func Offset: 0x2e4
	// Line 2970, Address: 0x1bee60, Func Offset: 0x2f0
	// Line 2971, Address: 0x1bee6c, Func Offset: 0x2fc
	// Line 2970, Address: 0x1bee70, Func Offset: 0x300
	// Line 2971, Address: 0x1bee74, Func Offset: 0x304
	// Line 2970, Address: 0x1bee78, Func Offset: 0x308
	// Line 2971, Address: 0x1bee84, Func Offset: 0x314
	// Line 2972, Address: 0x1bee94, Func Offset: 0x324
	// Line 2977, Address: 0x1beedc, Func Offset: 0x36c
	// Line 2979, Address: 0x1beee0, Func Offset: 0x370
	// Line 2980, Address: 0x1beee8, Func Offset: 0x378
	// Line 2982, Address: 0x1beeec, Func Offset: 0x37c
	// Line 2984, Address: 0x1beef0, Func Offset: 0x380
	// Line 2985, Address: 0x1beef8, Func Offset: 0x388
	// Line 2989, Address: 0x1bef10, Func Offset: 0x3a0
	// Line 2988, Address: 0x1bef14, Func Offset: 0x3a4
	// Line 2991, Address: 0x1bef18, Func Offset: 0x3a8
	// Line 2994, Address: 0x1bef20, Func Offset: 0x3b0
	// Line 2995, Address: 0x1bef24, Func Offset: 0x3b4
	// Line 2999, Address: 0x1bef28, Func Offset: 0x3b8
	// Line 3000, Address: 0x1bef34, Func Offset: 0x3c4
	// Line 3001, Address: 0x1bef40, Func Offset: 0x3d0
	// Line 3002, Address: 0x1bef50, Func Offset: 0x3e0
	// Line 3003, Address: 0x1bef58, Func Offset: 0x3e8
	// Line 3004, Address: 0x1bef68, Func Offset: 0x3f8
	// Line 3005, Address: 0x1bef78, Func Offset: 0x408
	// Line 3006, Address: 0x1bef84, Func Offset: 0x414
	// Line 3007, Address: 0x1bef88, Func Offset: 0x418
	// Line 3009, Address: 0x1befa8, Func Offset: 0x438
	// Line 3010, Address: 0x1befb0, Func Offset: 0x440
	// Line 3011, Address: 0x1befbc, Func Offset: 0x44c
	// Line 3012, Address: 0x1befc8, Func Offset: 0x458
	// Line 3013, Address: 0x1befd0, Func Offset: 0x460
	// Line 3015, Address: 0x1befdc, Func Offset: 0x46c
	// Line 3016, Address: 0x1befe0, Func Offset: 0x470
	// Func End, Address: 0x1bf008, Func Offset: 0x498
}

// 
// Start address: 0x1bf010
void EnemyEDMultiAdditionalDamageDown(void* obj)
{
	EnemyMultiWork* ew;
	EnemyBattleDamage bd;
	// Line 3020, Address: 0x1bf010, Func Offset: 0
	// Line 3023, Address: 0x1bf024, Func Offset: 0x14
	// Line 3024, Address: 0x1bf030, Func Offset: 0x20
	// Line 3025, Address: 0x1bf03c, Func Offset: 0x2c
	// Line 3026, Address: 0x1bf04c, Func Offset: 0x3c
	// Line 3028, Address: 0x1bf078, Func Offset: 0x68
	// Line 3029, Address: 0x1bf08c, Func Offset: 0x7c
	// Line 3030, Address: 0x1bf090, Func Offset: 0x80
	// Line 3031, Address: 0x1bf0b4, Func Offset: 0xa4
	// Line 3032, Address: 0x1bf0b8, Func Offset: 0xa8
	// Line 3033, Address: 0x1bf0cc, Func Offset: 0xbc
	// Line 3034, Address: 0x1bf0d4, Func Offset: 0xc4
	// Line 3035, Address: 0x1bf0d8, Func Offset: 0xc8
	// Line 3036, Address: 0x1bf0e4, Func Offset: 0xd4
	// Line 3037, Address: 0x1bf0ec, Func Offset: 0xdc
	// Line 3038, Address: 0x1bf0f0, Func Offset: 0xe0
	// Line 3039, Address: 0x1bf0fc, Func Offset: 0xec
	// Line 3040, Address: 0x1bf100, Func Offset: 0xf0
	// Line 3041, Address: 0x1bf110, Func Offset: 0x100
	// Line 3042, Address: 0x1bf120, Func Offset: 0x110
	// Line 3043, Address: 0x1bf134, Func Offset: 0x124
	// Line 3044, Address: 0x1bf144, Func Offset: 0x134
	// Line 3046, Address: 0x1bf160, Func Offset: 0x150
	// Line 3047, Address: 0x1bf168, Func Offset: 0x158
	// Line 3048, Address: 0x1bf18c, Func Offset: 0x17c
	// Line 3049, Address: 0x1bf198, Func Offset: 0x188
	// Line 3051, Address: 0x1bf1a4, Func Offset: 0x194
	// Line 3052, Address: 0x1bf1a8, Func Offset: 0x198
	// Line 3053, Address: 0x1bf1c4, Func Offset: 0x1b4
	// Line 3054, Address: 0x1bf1e4, Func Offset: 0x1d4
	// Line 3055, Address: 0x1bf1f0, Func Offset: 0x1e0
	// Line 3056, Address: 0x1bf1f8, Func Offset: 0x1e8
	// Line 3059, Address: 0x1bf208, Func Offset: 0x1f8
	// Line 3060, Address: 0x1bf224, Func Offset: 0x214
	// Func End, Address: 0x1bf240, Func Offset: 0x230
}

// 
// Start address: 0x1bf240
void EnemyEDMultiFinish(void* obj)
{
	// Line 3064, Address: 0x1bf240, Func Offset: 0
	// Line 3066, Address: 0x1bf24c, Func Offset: 0xc
	// Line 3067, Address: 0x1bf254, Func Offset: 0x14
	// Line 3068, Address: 0x1bf268, Func Offset: 0x28
	// Line 3069, Address: 0x1bf284, Func Offset: 0x44
	// Line 3070, Address: 0x1bf28c, Func Offset: 0x4c
	// Line 3071, Address: 0x1bf298, Func Offset: 0x58
	// Line 3072, Address: 0x1bf2a4, Func Offset: 0x64
	// Func End, Address: 0x1bf2b4, Func Offset: 0x74
}

// 
// Start address: 0x1bf2c0
void EnemyEDMultiRevival(void* obj)
{
	EnemyMultiWork* ew;
	// Line 3076, Address: 0x1bf2c0, Func Offset: 0
	// Line 3078, Address: 0x1bf2d0, Func Offset: 0x10
	// Line 3079, Address: 0x1bf2d8, Func Offset: 0x18
	// Line 3078, Address: 0x1bf2dc, Func Offset: 0x1c
	// Line 3080, Address: 0x1bf2e0, Func Offset: 0x20
	// Line 3079, Address: 0x1bf2e4, Func Offset: 0x24
	// Line 3080, Address: 0x1bf2e8, Func Offset: 0x28
	// Line 3081, Address: 0x1bf304, Func Offset: 0x44
	// Line 3082, Address: 0x1bf320, Func Offset: 0x60
	// Line 3083, Address: 0x1bf338, Func Offset: 0x78
	// Line 3084, Address: 0x1bf354, Func Offset: 0x94
	// Line 3085, Address: 0x1bf360, Func Offset: 0xa0
	// Line 3088, Address: 0x1bf39c, Func Offset: 0xdc
	// Line 3089, Address: 0x1bf3a0, Func Offset: 0xe0
	// Line 3090, Address: 0x1bf3b0, Func Offset: 0xf0
	// Line 3091, Address: 0x1bf3b8, Func Offset: 0xf8
	// Line 3092, Address: 0x1bf3c4, Func Offset: 0x104
	// Line 3093, Address: 0x1bf3cc, Func Offset: 0x10c
	// Line 3094, Address: 0x1bf3d8, Func Offset: 0x118
	// Func End, Address: 0x1bf3ec, Func Offset: 0x12c
}

