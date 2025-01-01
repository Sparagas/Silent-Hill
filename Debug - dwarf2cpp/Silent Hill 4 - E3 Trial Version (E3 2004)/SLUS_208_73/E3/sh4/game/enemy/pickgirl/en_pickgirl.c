typedef struct sfObj;
typedef struct EnemyMeasureResult;
typedef struct EnemyPickgirlWork;
typedef struct EnemyBattleDamage;
typedef struct EnemyFeetParameter;
typedef struct EnemyManageDataOne;
typedef struct _anon0;
typedef struct EnemySenseData;
typedef enum EnemyPickgirlAnime : unsigned char;
typedef struct EnemyPickgirlHairObjWork;
typedef struct EventFlag;
typedef struct EnemyRwMotion;
typedef struct EnemyRwMotionParameter;
typedef struct EnemyEffectStickyBone;
typedef struct EnemyGhostFloatParameter;
typedef struct EnemyRwWork;
typedef struct EnemyObjHook;
typedef struct EnemyGhostStainParameter;
typedef struct _anon1;
typedef enum BattleAttackKind : unsigned char;
typedef struct EnemyClHitResult;
typedef union _anon2;
typedef union _anon3;
typedef struct sgBone;
typedef struct EnemyGhostWallThroughParameter;
typedef struct EnemyGhostInWallParameter;
typedef enum EnemySenseResultType : unsigned char;
typedef struct EnemyGhostAppearFromWallParameter;
typedef enum EnemyPlayerType : unsigned char;
typedef enum EnemyManageEntryType : unsigned char;
typedef struct EnemySenseResult;
typedef enum BattleDamageType : unsigned char;
typedef struct EnemyGhostFeetParameter;
typedef enum EnemySenseType : unsigned char;

typedef void(*type_0)(void*, int);
typedef void(*type_2)(void*, int);
typedef void(*type_3)(void*, int);
typedef void(*type_6)(sfObj*);
typedef int(*type_13)(void*);
typedef void(*type_15)(sfObj*);
typedef void(*type_16)(sfObj*);
typedef void(*type_18)(void*, int);
typedef void(*type_20)(sfObj*);
typedef void(*type_21)(void*, int);
typedef void(*type_22)(sfObj*);
typedef void(*type_23)(void*, int);
typedef int(*type_24)(void*);
typedef void(*type_27)(void*, int);
typedef int(*type_32)(void*);
typedef void(*type_33)(void*, int);
typedef int(*type_36)(void*);
typedef void(*type_37)(void*, int);
typedef int(*type_38)(void*);
typedef void(*type_39)(void*, int);
typedef void(*type_40)(void*, int);
typedef void(*type_43)(void*, int);
typedef void(*type_44)(void*, int);

typedef float type_1[4];
typedef _anon2 type_4[4];
typedef float type_5[4];
typedef void(*type_7)(sfObj*)[24];
typedef float type_8[4][4];
typedef unsigned char type_9[320];
typedef float type_10[4];
typedef float type_11[3];
typedef EnemyRwMotionParameter type_12[0];
typedef _anon2 type_14[256];
typedef _anon1 type_17[4];
typedef _anon3 type_19[0];
typedef short type_25[2];
typedef unsigned short type_26[2];
typedef char type_28[4];
typedef EnemyEffectStickyBone type_29[32];
typedef unsigned char type_30[4];
typedef float type_31[1];
typedef int type_34[1];
typedef int type_35[8];
typedef int type_41[2];
typedef int type_42[2];
typedef int type_45[2];

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

struct EnemyMeasureResult
{
	float pos[4];
	float normal[4];
	float dist;
	int exist;
	_anon0* poly;
};

struct EnemyPickgirlWork
{
	float hitback[4];
	float attack_pos[4];
	float head_rot[4];
	float hair_swing[4][4];
	float timer;
	float timer2;
	float move_speed;
	float move_speed_accel;
	float swing_speed;
	float sound_timer;
	float slowly;
	int attack_success;
	int falling_direction;
	int down_count;
	int head_mode;
	int continuity_count;
	EnemyPickgirlHairObjWork* hair_work;
	EnemyRwWork* rw_work;
	EnemySenseData* player_check;
	EnemySenseData* player_check2;
	EnemyObjHook* animechange_hook;
	EnemyObjHook* animeupdate_hook;
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

enum EnemyPickgirlAnime : unsigned char
{
	EN_GIRL_ANM_NT,
	EN_GIRL_ANM_WLK,
	EN_GIRL_ANM_WLKC,
	EN_GIRL_ANM_WLKN,
	EN_GIRL_ANM_WLKS,
	EN_GIRL_ANM_DMH1,
	EN_GIRL_ANM_DMH2,
	EN_GIRL_ANM_DMP1,
	EN_GIRL_ANM_DMP2,
	EN_GIRL_ANM_DMP3,
	EN_GIRL_ANM_DMC1,
	EN_GIRL_ANM_DMC2,
	EN_GIRL_ANM_XXP1,
	EN_GIRL_ANM_XXP2,
	EN_GIRL_ANM_XXP3,
	EN_GIRL_ANM_XXS1,
	EN_GIRL_ANM_XXS2,
	EN_GIRL_ANM_XXG1,
	EN_GIRL_ANM_XXG2,
	EN_GIRL_ANM_XXC1,
	EN_GIRL_ANM_UPD,
	EN_GIRL_ANM_ROTD,
	EN_GIRL_ANM_ATT1A,
	EN_GIRL_ANM_ATT1B,
	EN_GIRL_ANM_ATT1C,
	EN_GIRL_ANM_ATT2A,
	EN_GIRL_ANM_ATT2B,
	EN_GIRL_ANM_ATT2C,
	EN_GIRL_ANM_WKD1,
	EN_GIRL_ANM_WKD2,
	EN_GIRL_ANM_WO1,
	EN_GIRL_ANM_WPS,
	EN_GIRL_ANM_DNT,
	EN_GIRL_ANM_TDM,
	EN_GIRL_ANM_DM
};

struct EnemyPickgirlHairObjWork
{
};

struct EventFlag
{
	unsigned char flag[320];
};

struct EnemyRwMotion
{
	short right_foot;
	short left_foot;
	float rate;
	EnemyRwMotionParameter param[0];
};

struct EnemyRwMotionParameter
{
	short frame;
	short cond;
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

struct EnemyRwWork
{
};

struct EnemyObjHook
{
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

struct EnemyClHitResult
{
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

struct EnemyGhostFeetParameter
{
	int bone_name[2];
	int heel_bone_name[2];
	int toe_bone_name[2];
	int waist_bone_name;
	EnemyFeetParameter fparam;
};

enum EnemySenseType : unsigned char
{
	EN_SENSE_TYPE_SIGHT_OF_PLAYER,
	EN_SENSE_TYPE_SIGHT_OF_PLAYER_XZ,
	EN_SENSE_TYPE_NOSIGHT_OF_PLAYER,
	EN_SENSE_TYPE_NOSIGHT_OF_PLAYER_XZ
};

float bite_pos[4];
EnemyEffectStickyBone pickgirl_sticky_bone[32];
EnemyGhostFeetParameter pickgirl_feet;
EnemyGhostStainParameter pickgirl_stain_parameter;
EnemyGhostFloatParameter pickgirl_float_parameter;
EnemyGhostWallThroughParameter pickgirl_through_parameter;
EnemyGhostInWallParameter pickgirl_in_wall_parameter;
EnemyGhostAppearFromWallParameter pickgirl_appear_parameter;
EnemyRwMotion rw_wlks;
EventFlag event_flag;
void(*EnemyPickgirlAnimeUpdateHook)(sfObj*);
void(*EnemyPickgirlAnimeChangeHook)(sfObj*);
float sg_vector_zero[4];
float en_vector_unit_y_minus[4];
float sg_vector_unit_x[4];
float sg_vector_unit_z[4];
void(*pickgirl_jump_table)(sfObj*)[24];
int(*EnemyEDAnimeIsEnd)(void*);
void(*EnemyEDPickgirlWanderResetTarget)(void*, int);
void(*EnemyEDPickgirlAttackEnd)(void*, int);
int(*EnemyEDAnimeIsEndSoon)(void*);
void(*EnemyEDPickgirlAttackStep1)(void*, int);
int hair_bone_name[8];
float sg_vector_unit_y[4];
void(*EnemyEDPickgirlAttackEnd3)(void*, int);
void(*EnemyEDPickgirlAttackEnd2)(void*, int);
void(*EnemyEDPickgirlAttack2Step1)(void*, int);
void(*EnemyEDPickgirlCrawlResetTarget)(void*, int);
void(*EnemyEDPickgirlRevival)(void*, int);
int(*EnemyEDSenseTest)(void*);
void(*EnemyEDPickgirlMissingInChase)(void*, int);
int(*EnemyEDBattleDamageCheck)(void*);
void(*EnemyEDPickgirlAdditionalDamageDown)(void*, int);
void(*EnemyEDPickgirlFinish)(void*, int);
int(*EnemyEDGhostCheckFinish)(void*);
void(*EnemyEDPickgirlAdditionalDamage)(void*, int);
void(*EnemyEDBattleDamageReduceHP)(void*, int);

int check_event_flag();
void appear_check_sb(sfObj* obj);
void EnemyPickgirlConstruct(sfObj* obj);
void EnemyPickgirlHandle(sfObj* obj);
void EnemyPickgirlDraw(sfObj* obj);
void EnemyPickgirlDestruct(sfObj* obj);
void EnemyPickgirlDataPreserve(sfObj* obj);
void EnemyPickgirlDataExtract(sfObj* obj);
void EnemyPickgirlAnimeChangeHook(sfObj* obj);
void EnemyPickgirlAnimeUpdateHook(sfObj* obj);
void EnemyPickgirlAnimeSet(sfObj* obj, int anime);
void EnemyPickgirlMoveSpeedControl(sfObj* obj);
void EnemyPickgirlSetHeight(sfObj* obj, float height);
void EnemyPickgirlHeadControl(sfObj* obj);
void EnemyPickgirlHeadControlStart(sfObj* obj);
void EnemyPickgirlHeadControlStop(sfObj* obj);
void EnemyPickgirlIgnoreHairTarget(sfObj* obj);
void EnemyPickgirlIgnoreHairTargetSlow(sfObj* obj);
void EnemyPickgirlRecover(sfObj* obj);
void EnemyPickgirlControl(sfObj* obj);
void EnemyPickgirlControlInit(sfObj* obj);
void EnemyPickgirlControlWander(sfObj* obj);
void EnemyPickgirlControlChase(sfObj* obj);
void EnemyPickgirlControlAttack(sfObj* obj);
int set_confront_target(sfObj* obj);
void EnemyPickgirlControlConfront(sfObj* obj);
void EnemyPickgirlControlCapture(sfObj* obj);
void EnemyPickgirlControlCapture2(sfObj* obj);
void EnemyPickgirlControlVacant(sfObj* obj);
int check_hit_hair(sfObj* obj);
void EnemyPickgirlControlCrawl(sfObj* obj);
void EnemyPickgirlControlCrawlChase(sfObj* obj);
void EnemyPickgirlControlCapture3(sfObj* obj);
void EnemyPickgirlControlTrepang(sfObj* obj);
void EnemyPickgirlControlThroughWall(sfObj* obj);
void EnemyPickgirlControlChaseInWall(sfObj* obj);
void EnemyPickgirlControlAppearFromWall(sfObj* obj);
int set_damage_anime(sfObj* obj, EnemyBattleDamage* bd, float dir, int down);
void EnemyPickgirlControlDamage(sfObj* obj);
void EnemyPickgirlControlDown(sfObj* obj);
void EnemyPickgirlControlRise(sfObj* obj);
void EnemyPickgirlControlExorcismDown(sfObj* obj);
void EnemyPickgirlControlCrawlDamage(sfObj* obj);
void EnemyPickgirlControlFinished(sfObj* obj);
void EnemyPickgirlControlEvent(sfObj* obj);
void EnemyPickgirlControlWait(sfObj* obj);
void EnemyPickgirlControlFlagWait(sfObj* obj);
void EnemyPickgirlSetExtentDamage(sfObj* obj);
void EnemyPickgirlCheckExorcismDamage(sfObj* obj);
void EnemyPickgirlSetEventPlayerCheck(sfObj* obj);
void EnemyPickgirlSetEventAttackCheck(sfObj* obj);
void EnemyPickgirlSetEventDamageCheck(sfObj* obj);
void EnemyEDPickgirlWanderResetTarget(void* obj);
void EnemyEDPickgirlCrawlResetTarget(void* obj);
void EnemyEDPickgirlMissingInChase(void* obj);
void EnemyEDPickgirlAttackStep1(void* obj);
void EnemyEDPickgirlAttack2Step1(void* obj);
void EnemyEDPickgirlAttackEnd(void* obj);
void EnemyEDPickgirlAttackEnd2(void* obj);
void EnemyEDPickgirlAttackEnd3(void* obj);
void EnemyEDPickgirlAdditionalDamage(void* obj);
void EnemyEDPickgirlAdditionalDamageDown(void* obj);
void EnemyEDPickgirlFinish(void* obj);
void EnemyEDPickgirlRevival(void* obj);
void EnemyPickgirlToCapture(sfObj* obj);
void EnemyPickgirlRiseFromCrawl(sfObj* obj);

// 
// Start address: 0x2358b0
int check_event_flag()
{
	// Line 427, Address: 0x2358b0, Func Offset: 0
	// Line 429, Address: 0x2358b8, Func Offset: 0x8
	// Line 432, Address: 0x2358ec, Func Offset: 0x3c
	// Func End, Address: 0x2358f8, Func Offset: 0x48
}

// 
// Start address: 0x235900
void appear_check_sb(sfObj* obj)
{
	EnemyManageDataOne* pe;
	int dscene;
	// Line 436, Address: 0x235900, Func Offset: 0
	// Line 439, Address: 0x235908, Func Offset: 0x8
	// Line 440, Address: 0x23591c, Func Offset: 0x1c
	// Line 443, Address: 0x235924, Func Offset: 0x24
	// Line 448, Address: 0x235934, Func Offset: 0x34
	// Line 451, Address: 0x235958, Func Offset: 0x58
	// Line 453, Address: 0x235960, Func Offset: 0x60
	// Line 454, Address: 0x235968, Func Offset: 0x68
	// Func End, Address: 0x235974, Func Offset: 0x74
}

// 
// Start address: 0x235980
void EnemyPickgirlConstruct(sfObj* obj)
{
	EnemyPickgirlWork* ew;
	EnemyManageEntryType etype;
	int type;
	int sf;
	sfObj* tobj;
	EnemyManageDataOne* pe;
	// Line 458, Address: 0x235980, Func Offset: 0
	// Line 463, Address: 0x235984, Func Offset: 0x4
	// Line 458, Address: 0x235988, Func Offset: 0x8
	// Line 463, Address: 0x2359a4, Func Offset: 0x24
	// Line 465, Address: 0x2359ac, Func Offset: 0x2c
	// Line 467, Address: 0x2359c8, Func Offset: 0x48
	// Line 469, Address: 0x2359d0, Func Offset: 0x50
	// Line 471, Address: 0x235a1c, Func Offset: 0x9c
	// Line 472, Address: 0x235a24, Func Offset: 0xa4
	// Line 473, Address: 0x235a2c, Func Offset: 0xac
	// Line 474, Address: 0x235a30, Func Offset: 0xb0
	// Line 479, Address: 0x235a38, Func Offset: 0xb8
	// Line 481, Address: 0x235a68, Func Offset: 0xe8
	// Line 482, Address: 0x235a70, Func Offset: 0xf0
	// Line 486, Address: 0x235a78, Func Offset: 0xf8
	// Line 487, Address: 0x235a84, Func Offset: 0x104
	// Line 490, Address: 0x235aa8, Func Offset: 0x128
	// Line 491, Address: 0x235ab0, Func Offset: 0x130
	// Line 494, Address: 0x235ab8, Func Offset: 0x138
	// Line 495, Address: 0x235ac4, Func Offset: 0x144
	// Line 498, Address: 0x235af0, Func Offset: 0x170
	// Line 499, Address: 0x235af8, Func Offset: 0x178
	// Line 501, Address: 0x235b00, Func Offset: 0x180
	// Line 502, Address: 0x235b10, Func Offset: 0x190
	// Line 504, Address: 0x235b1c, Func Offset: 0x19c
	// Line 505, Address: 0x235b2c, Func Offset: 0x1ac
	// Line 506, Address: 0x235b34, Func Offset: 0x1b4
	// Line 508, Address: 0x235b60, Func Offset: 0x1e0
	// Line 509, Address: 0x235b70, Func Offset: 0x1f0
	// Line 511, Address: 0x235b94, Func Offset: 0x214
	// Line 513, Address: 0x235bb8, Func Offset: 0x238
	// Line 514, Address: 0x235bc8, Func Offset: 0x248
	// Line 515, Address: 0x235bd0, Func Offset: 0x250
	// Line 516, Address: 0x235bdc, Func Offset: 0x25c
	// Line 517, Address: 0x235be8, Func Offset: 0x268
	// Line 518, Address: 0x235bf0, Func Offset: 0x270
	// Line 519, Address: 0x235c08, Func Offset: 0x288
	// Line 521, Address: 0x235c28, Func Offset: 0x2a8
	// Line 522, Address: 0x235c34, Func Offset: 0x2b4
	// Line 523, Address: 0x235c3c, Func Offset: 0x2bc
	// Line 524, Address: 0x235c44, Func Offset: 0x2c4
	// Line 525, Address: 0x235c48, Func Offset: 0x2c8
	// Line 526, Address: 0x235c50, Func Offset: 0x2d0
	// Line 527, Address: 0x235c5c, Func Offset: 0x2dc
	// Line 529, Address: 0x235c68, Func Offset: 0x2e8
	// Line 530, Address: 0x235c70, Func Offset: 0x2f0
	// Line 531, Address: 0x235c78, Func Offset: 0x2f8
	// Line 534, Address: 0x235c80, Func Offset: 0x300
	// Line 535, Address: 0x235c94, Func Offset: 0x314
	// Line 536, Address: 0x235ca4, Func Offset: 0x324
	// Line 537, Address: 0x235cb4, Func Offset: 0x334
	// Line 538, Address: 0x235cc4, Func Offset: 0x344
	// Line 539, Address: 0x235cd0, Func Offset: 0x350
	// Line 540, Address: 0x235cdc, Func Offset: 0x35c
	// Line 542, Address: 0x235cf0, Func Offset: 0x370
	// Line 545, Address: 0x235d04, Func Offset: 0x384
	// Line 546, Address: 0x235d10, Func Offset: 0x390
	// Line 548, Address: 0x235d1c, Func Offset: 0x39c
	// Line 549, Address: 0x235d24, Func Offset: 0x3a4
	// Line 551, Address: 0x235d50, Func Offset: 0x3d0
	// Line 552, Address: 0x235d5c, Func Offset: 0x3dc
	// Line 554, Address: 0x235d64, Func Offset: 0x3e4
	// Line 555, Address: 0x235d68, Func Offset: 0x3e8
	// Line 556, Address: 0x235d74, Func Offset: 0x3f4
	// Line 557, Address: 0x235d80, Func Offset: 0x400
	// Line 560, Address: 0x235d88, Func Offset: 0x408
	// Line 563, Address: 0x235dc4, Func Offset: 0x444
	// Line 564, Address: 0x235dcc, Func Offset: 0x44c
	// Line 565, Address: 0x235ddc, Func Offset: 0x45c
	// Line 566, Address: 0x235de8, Func Offset: 0x468
	// Line 569, Address: 0x235df0, Func Offset: 0x470
	// Line 571, Address: 0x235e0c, Func Offset: 0x48c
	// Line 572, Address: 0x235e14, Func Offset: 0x494
	// Line 573, Address: 0x235e1c, Func Offset: 0x49c
	// Line 574, Address: 0x235e20, Func Offset: 0x4a0
	// Line 576, Address: 0x235e4c, Func Offset: 0x4cc
	// Line 577, Address: 0x235e54, Func Offset: 0x4d4
	// Line 578, Address: 0x235e60, Func Offset: 0x4e0
	// Line 579, Address: 0x235e70, Func Offset: 0x4f0
	// Line 580, Address: 0x235e78, Func Offset: 0x4f8
	// Line 581, Address: 0x235e84, Func Offset: 0x504
	// Line 583, Address: 0x235eac, Func Offset: 0x52c
	// Line 584, Address: 0x235eb4, Func Offset: 0x534
	// Line 587, Address: 0x235ef8, Func Offset: 0x578
	// Line 588, Address: 0x235f04, Func Offset: 0x584
	// Line 589, Address: 0x235f14, Func Offset: 0x594
	// Line 593, Address: 0x235f20, Func Offset: 0x5a0
	// Line 594, Address: 0x235f24, Func Offset: 0x5a4
	// Line 596, Address: 0x235f28, Func Offset: 0x5a8
	// Line 597, Address: 0x235f44, Func Offset: 0x5c4
	// Line 598, Address: 0x235f4c, Func Offset: 0x5cc
	// Line 600, Address: 0x235f58, Func Offset: 0x5d8
	// Line 602, Address: 0x235f64, Func Offset: 0x5e4
	// Line 603, Address: 0x235f74, Func Offset: 0x5f4
	// Line 604, Address: 0x235f7c, Func Offset: 0x5fc
	// Line 605, Address: 0x235f8c, Func Offset: 0x60c
	// Line 606, Address: 0x235f94, Func Offset: 0x614
	// Line 607, Address: 0x235f9c, Func Offset: 0x61c
	// Line 608, Address: 0x235fa8, Func Offset: 0x628
	// Line 609, Address: 0x235fb0, Func Offset: 0x630
	// Line 611, Address: 0x235fbc, Func Offset: 0x63c
	// Line 612, Address: 0x235fc8, Func Offset: 0x648
	// Line 613, Address: 0x235fd4, Func Offset: 0x654
	// Line 614, Address: 0x235fd8, Func Offset: 0x658
	// Line 615, Address: 0x235fe4, Func Offset: 0x664
	// Line 616, Address: 0x235ff4, Func Offset: 0x674
	// Line 618, Address: 0x236000, Func Offset: 0x680
	// Func End, Address: 0x236024, Func Offset: 0x6a4
}

// 
// Start address: 0x236030
void EnemyPickgirlHandle(sfObj* obj)
{
	EnemyPickgirlWork* ew;
	float* pos;
	// Line 622, Address: 0x236030, Func Offset: 0
	// Line 624, Address: 0x236040, Func Offset: 0x10
	// Line 625, Address: 0x236048, Func Offset: 0x18
	// Line 626, Address: 0x236050, Func Offset: 0x20
	// Line 627, Address: 0x236058, Func Offset: 0x28
	// Line 628, Address: 0x236060, Func Offset: 0x30
	// Line 629, Address: 0x236068, Func Offset: 0x38
	// Line 630, Address: 0x236078, Func Offset: 0x48
	// Line 631, Address: 0x23608c, Func Offset: 0x5c
	// Line 632, Address: 0x236090, Func Offset: 0x60
	// Line 634, Address: 0x2360b8, Func Offset: 0x88
	// Line 635, Address: 0x2360c0, Func Offset: 0x90
	// Line 636, Address: 0x2360dc, Func Offset: 0xac
	// Line 639, Address: 0x2360f0, Func Offset: 0xc0
	// Line 640, Address: 0x2360f8, Func Offset: 0xc8
	// Line 641, Address: 0x236100, Func Offset: 0xd0
	// Line 669, Address: 0x236108, Func Offset: 0xd8
	// Line 670, Address: 0x236114, Func Offset: 0xe4
	// Line 672, Address: 0x23611c, Func Offset: 0xec
	// Line 674, Address: 0x236144, Func Offset: 0x114
	// Line 675, Address: 0x23614c, Func Offset: 0x11c
	// Line 676, Address: 0x236154, Func Offset: 0x124
	// Line 677, Address: 0x236160, Func Offset: 0x130
	// Line 678, Address: 0x236168, Func Offset: 0x138
	// Line 680, Address: 0x236170, Func Offset: 0x140
	// Func End, Address: 0x236184, Func Offset: 0x154
}

// 
// Start address: 0x236190
void EnemyPickgirlDraw(sfObj* obj)
{
	// Line 684, Address: 0x236190, Func Offset: 0
	// Line 685, Address: 0x23619c, Func Offset: 0xc
	// Line 687, Address: 0x2361c4, Func Offset: 0x34
	// Line 688, Address: 0x2361cc, Func Offset: 0x3c
	// Line 689, Address: 0x2361d0, Func Offset: 0x40
	// Func End, Address: 0x2361e0, Func Offset: 0x50
}

// 
// Start address: 0x2361e0
void EnemyPickgirlDestruct(sfObj* obj)
{
	EnemyPickgirlWork* ew;
	// Line 693, Address: 0x2361e0, Func Offset: 0
	// Line 696, Address: 0x2361f0, Func Offset: 0x10
	// Line 697, Address: 0x236208, Func Offset: 0x28
	// Line 698, Address: 0x236210, Func Offset: 0x30
	// Line 700, Address: 0x236218, Func Offset: 0x38
	// Line 702, Address: 0x236220, Func Offset: 0x40
	// Line 703, Address: 0x236234, Func Offset: 0x54
	// Line 704, Address: 0x23624c, Func Offset: 0x6c
	// Line 705, Address: 0x236254, Func Offset: 0x74
	// Line 706, Address: 0x236258, Func Offset: 0x78
	// Line 709, Address: 0x236260, Func Offset: 0x80
	// Line 710, Address: 0x236268, Func Offset: 0x88
	// Line 711, Address: 0x236274, Func Offset: 0x94
	// Line 712, Address: 0x23627c, Func Offset: 0x9c
	// Line 713, Address: 0x236284, Func Offset: 0xa4
	// Line 714, Address: 0x23628c, Func Offset: 0xac
	// Line 715, Address: 0x236294, Func Offset: 0xb4
	// Line 716, Address: 0x23629c, Func Offset: 0xbc
	// Func End, Address: 0x2362b4, Func Offset: 0xd4
}

// 
// Start address: 0x2362c0
void EnemyPickgirlDataPreserve(sfObj* obj)
{
	EnemyManageDataOne* pe;
	_anon2 td;
	// Line 720, Address: 0x2362c0, Func Offset: 0
	// Line 723, Address: 0x2362d0, Func Offset: 0x10
	// Line 724, Address: 0x2362fc, Func Offset: 0x3c
	// Line 725, Address: 0x236300, Func Offset: 0x40
	// Line 726, Address: 0x236308, Func Offset: 0x48
	// Line 730, Address: 0x236310, Func Offset: 0x50
	// Line 733, Address: 0x236328, Func Offset: 0x68
	// Line 734, Address: 0x236334, Func Offset: 0x74
	// Line 735, Address: 0x236340, Func Offset: 0x80
	// Line 736, Address: 0x23634c, Func Offset: 0x8c
	// Line 737, Address: 0x236360, Func Offset: 0xa0
	// Line 739, Address: 0x236368, Func Offset: 0xa8
	// Line 740, Address: 0x236374, Func Offset: 0xb4
	// Line 742, Address: 0x236380, Func Offset: 0xc0
	// Func End, Address: 0x236394, Func Offset: 0xd4
}

// 
// Start address: 0x2363a0
void EnemyPickgirlDataExtract(sfObj* obj)
{
	EnemyManageDataOne* pe;
	int anime;
	float t;
	// Line 746, Address: 0x2363a0, Func Offset: 0
	// Line 749, Address: 0x2363b8, Func Offset: 0x18
	// Line 750, Address: 0x2363cc, Func Offset: 0x2c
	// Line 751, Address: 0x2363d8, Func Offset: 0x38
	// Line 752, Address: 0x2363e4, Func Offset: 0x44
	// Line 753, Address: 0x2363e8, Func Offset: 0x48
	// Line 754, Address: 0x236400, Func Offset: 0x60
	// Line 755, Address: 0x236408, Func Offset: 0x68
	// Line 756, Address: 0x236414, Func Offset: 0x74
	// Line 757, Address: 0x23641c, Func Offset: 0x7c
	// Line 759, Address: 0x236428, Func Offset: 0x88
	// Line 760, Address: 0x23642c, Func Offset: 0x8c
	// Line 761, Address: 0x236440, Func Offset: 0xa0
	// Line 762, Address: 0x236448, Func Offset: 0xa8
	// Line 763, Address: 0x236454, Func Offset: 0xb4
	// Line 764, Address: 0x23645c, Func Offset: 0xbc
	// Line 765, Address: 0x236468, Func Offset: 0xc8
	// Line 767, Address: 0x236474, Func Offset: 0xd4
	// Line 768, Address: 0x236478, Func Offset: 0xd8
	// Line 771, Address: 0x236480, Func Offset: 0xe0
	// Line 772, Address: 0x23648c, Func Offset: 0xec
	// Func End, Address: 0x2364a8, Func Offset: 0x108
}

// 
// Start address: 0x2364b0
void EnemyPickgirlAnimeChangeHook(sfObj* obj)
{
	EnemyPickgirlWork* ew;
	// Line 776, Address: 0x2364b0, Func Offset: 0
	// Line 778, Address: 0x2364b8, Func Offset: 0x8
	// Line 779, Address: 0x2364c0, Func Offset: 0x10
	// Line 780, Address: 0x2364c8, Func Offset: 0x18
	// Func End, Address: 0x2364d4, Func Offset: 0x24
}

// 
// Start address: 0x2364e0
void EnemyPickgirlAnimeUpdateHook(sfObj* obj)
{
	EnemyPickgirlWork* ew;
	float trot[4];
	sgBone* bone;
	// Line 784, Address: 0x2364e0, Func Offset: 0
	// Line 786, Address: 0x2364f0, Func Offset: 0x10
	// Line 787, Address: 0x2364f8, Func Offset: 0x18
	// Line 788, Address: 0x236504, Func Offset: 0x24
	// Line 791, Address: 0x236510, Func Offset: 0x30
	// Line 792, Address: 0x23651c, Func Offset: 0x3c
	// Line 793, Address: 0x236530, Func Offset: 0x50
	// Line 794, Address: 0x23653c, Func Offset: 0x5c
	// Line 795, Address: 0x23654c, Func Offset: 0x6c
	// Line 797, Address: 0x236558, Func Offset: 0x78
	// Func End, Address: 0x23656c, Func Offset: 0x8c
}

// 
// Start address: 0x236570
void EnemyPickgirlAnimeSet(sfObj* obj, int anime)
{
	EnemyPickgirlWork* ew;
	EnemyRwMotion* pm;
	int old_anime;
	float s;
	// Line 838, Address: 0x236570, Func Offset: 0
	// Line 843, Address: 0x236588, Func Offset: 0x18
	// Line 844, Address: 0x236594, Func Offset: 0x24
	// Line 845, Address: 0x23659c, Func Offset: 0x2c
	// Line 848, Address: 0x236610, Func Offset: 0xa0
	// Line 849, Address: 0x236618, Func Offset: 0xa8
	// Line 850, Address: 0x236620, Func Offset: 0xb0
	// Line 855, Address: 0x236628, Func Offset: 0xb8
	// Line 856, Address: 0x236630, Func Offset: 0xc0
	// Line 860, Address: 0x236664, Func Offset: 0xf4
	// Line 861, Address: 0x23666c, Func Offset: 0xfc
	// Line 862, Address: 0x236670, Func Offset: 0x100
	// Line 863, Address: 0x236688, Func Offset: 0x118
	// Line 868, Address: 0x236690, Func Offset: 0x120
	// Line 869, Address: 0x2366a4, Func Offset: 0x134
	// Line 870, Address: 0x2366ac, Func Offset: 0x13c
	// Line 871, Address: 0x2366b0, Func Offset: 0x140
	// Line 872, Address: 0x2366bc, Func Offset: 0x14c
	// Line 874, Address: 0x2366c0, Func Offset: 0x150
	// Line 875, Address: 0x2366d4, Func Offset: 0x164
	// Line 876, Address: 0x2366d8, Func Offset: 0x168
	// Line 879, Address: 0x2366e0, Func Offset: 0x170
	// Line 880, Address: 0x2366e8, Func Offset: 0x178
	// Line 881, Address: 0x2366fc, Func Offset: 0x18c
	// Line 880, Address: 0x236700, Func Offset: 0x190
	// Line 881, Address: 0x236704, Func Offset: 0x194
	// Line 880, Address: 0x236708, Func Offset: 0x198
	// Line 881, Address: 0x23670c, Func Offset: 0x19c
	// Line 888, Address: 0x236730, Func Offset: 0x1c0
	// Line 890, Address: 0x236738, Func Offset: 0x1c8
	// Func End, Address: 0x236750, Func Offset: 0x1e0
}

// 
// Start address: 0x236750
void EnemyPickgirlMoveSpeedControl(sfObj* obj)
{
	EnemyPickgirlWork* ew;
	float d;
	// Line 894, Address: 0x236750, Func Offset: 0
	// Line 897, Address: 0x23675c, Func Offset: 0xc
	// Line 898, Address: 0x236764, Func Offset: 0x14
	// Line 897, Address: 0x236768, Func Offset: 0x18
	// Line 898, Address: 0x23676c, Func Offset: 0x1c
	// Line 899, Address: 0x236770, Func Offset: 0x20
	// Line 898, Address: 0x236774, Func Offset: 0x24
	// Line 899, Address: 0x236778, Func Offset: 0x28
	// Line 898, Address: 0x23677c, Func Offset: 0x2c
	// Line 899, Address: 0x236790, Func Offset: 0x40
	// Line 898, Address: 0x2367b0, Func Offset: 0x60
	// Line 899, Address: 0x2367b4, Func Offset: 0x64
	// Line 901, Address: 0x2367cc, Func Offset: 0x7c
	// Line 902, Address: 0x2367ec, Func Offset: 0x9c
	// Line 903, Address: 0x236804, Func Offset: 0xb4
	// Line 905, Address: 0x236808, Func Offset: 0xb8
	// Func End, Address: 0x23681c, Func Offset: 0xcc
}

// 
// Start address: 0x236820
void EnemyPickgirlSetHeight(sfObj* obj, float height)
{
	EnemyMeasureResult mres;
	// Line 909, Address: 0x236820, Func Offset: 0
	// Line 911, Address: 0x236834, Func Offset: 0x14
	// Line 912, Address: 0x23684c, Func Offset: 0x2c
	// Line 915, Address: 0x236870, Func Offset: 0x50
	// Func End, Address: 0x236884, Func Offset: 0x64
}

// 
// Start address: 0x236890
void EnemyPickgirlHeadControl(sfObj* obj)
{
	EnemyPickgirlWork* ew;
	float* hpos;
	float* nrot;
	float vec[4];
	float trot[4];
	sgBone* bone;
	float dt;
	// Line 919, Address: 0x236890, Func Offset: 0
	// Line 927, Address: 0x2368a8, Func Offset: 0x18
	// Line 928, Address: 0x2368b0, Func Offset: 0x20
	// Line 927, Address: 0x2368b4, Func Offset: 0x24
	// Line 928, Address: 0x2368b8, Func Offset: 0x28
	// Line 929, Address: 0x2368c4, Func Offset: 0x34
	// Line 930, Address: 0x2368cc, Func Offset: 0x3c
	// Line 931, Address: 0x2368e0, Func Offset: 0x50
	// Line 932, Address: 0x2368e8, Func Offset: 0x58
	// Line 933, Address: 0x23690c, Func Offset: 0x7c
	// Line 934, Address: 0x236910, Func Offset: 0x80
	// Line 936, Address: 0x236930, Func Offset: 0xa0
	// Line 937, Address: 0x23693c, Func Offset: 0xac
	// Line 938, Address: 0x236958, Func Offset: 0xc8
	// Line 939, Address: 0x236974, Func Offset: 0xe4
	// Line 941, Address: 0x236994, Func Offset: 0x104
	// Line 942, Address: 0x23699c, Func Offset: 0x10c
	// Line 943, Address: 0x2369a0, Func Offset: 0x110
	// Line 945, Address: 0x2369c8, Func Offset: 0x138
	// Line 946, Address: 0x2369cc, Func Offset: 0x13c
	// Line 947, Address: 0x2369d0, Func Offset: 0x140
	// Line 949, Address: 0x2369dc, Func Offset: 0x14c
	// Line 950, Address: 0x2369e0, Func Offset: 0x150
	// Func End, Address: 0x2369fc, Func Offset: 0x16c
}

// 
// Start address: 0x236a00
void EnemyPickgirlHeadControlStart(sfObj* obj)
{
	EnemyPickgirlWork* ew;
	// Line 954, Address: 0x236a00, Func Offset: 0
	// Line 956, Address: 0x236a10, Func Offset: 0x10
	// Line 957, Address: 0x236a18, Func Offset: 0x18
	// Line 958, Address: 0x236a24, Func Offset: 0x24
	// Line 960, Address: 0x236a38, Func Offset: 0x38
	// Line 961, Address: 0x236a40, Func Offset: 0x40
	// Func End, Address: 0x236a54, Func Offset: 0x54
}

// 
// Start address: 0x236a60
void EnemyPickgirlHeadControlStop(sfObj* obj)
{
	EnemyPickgirlWork* ew;
	// Line 965, Address: 0x236a60, Func Offset: 0
	// Line 967, Address: 0x236a68, Func Offset: 0x8
	// Line 968, Address: 0x236a70, Func Offset: 0x10
	// Line 969, Address: 0x236a80, Func Offset: 0x20
	// Line 970, Address: 0x236a84, Func Offset: 0x24
	// Line 971, Address: 0x236a88, Func Offset: 0x28
	// Func End, Address: 0x236a94, Func Offset: 0x34
}

// 
// Start address: 0x236aa0
void EnemyPickgirlIgnoreHairTarget(sfObj* obj)
{
	EnemyPickgirlWork* ew;
	int i;
	// Line 975, Address: 0x236aa0, Func Offset: 0
	// Line 978, Address: 0x236aac, Func Offset: 0xc
	// Line 979, Address: 0x236ab8, Func Offset: 0x18
	// Line 980, Address: 0x236ac0, Func Offset: 0x20
	// Line 981, Address: 0x236acc, Func Offset: 0x2c
	// Line 982, Address: 0x236adc, Func Offset: 0x3c
	// Func End, Address: 0x236af0, Func Offset: 0x50
}

// 
// Start address: 0x236af0
void EnemyPickgirlIgnoreHairTargetSlow(sfObj* obj)
{
	EnemyPickgirlWork* ew;
	int i;
	// Line 986, Address: 0x236af0, Func Offset: 0
	// Line 989, Address: 0x236afc, Func Offset: 0xc
	// Line 990, Address: 0x236b08, Func Offset: 0x18
	// Line 991, Address: 0x236b10, Func Offset: 0x20
	// Line 992, Address: 0x236b1c, Func Offset: 0x2c
	// Line 993, Address: 0x236b2c, Func Offset: 0x3c
	// Func End, Address: 0x236b40, Func Offset: 0x50
}

// 
// Start address: 0x236b40
void EnemyPickgirlRecover(sfObj* obj)
{
	EnemyPickgirlWork* ew;
	float heal;
	float dt;
	// Line 997, Address: 0x236b40, Func Offset: 0
	// Line 1000, Address: 0x236b54, Func Offset: 0x14
	// Line 1005, Address: 0x236b90, Func Offset: 0x50
	// Line 1007, Address: 0x236b98, Func Offset: 0x58
	// Line 1008, Address: 0x236ba0, Func Offset: 0x60
	// Line 1009, Address: 0x236bac, Func Offset: 0x6c
	// Line 1011, Address: 0x236bc4, Func Offset: 0x84
	// Line 1012, Address: 0x236be0, Func Offset: 0xa0
	// Line 1013, Address: 0x236bf0, Func Offset: 0xb0
	// Line 1014, Address: 0x236bf8, Func Offset: 0xb8
	// Line 1015, Address: 0x236c04, Func Offset: 0xc4
	// Line 1016, Address: 0x236c08, Func Offset: 0xc8
	// Func End, Address: 0x236c20, Func Offset: 0xe0
}

// 
// Start address: 0x236c20
void EnemyPickgirlControl(sfObj* obj)
{
	EnemyPickgirlWork* ew;
	int step;
	float dt;
	float r;
	float t;
	float vec[4];
	// Line 1080, Address: 0x236c20, Func Offset: 0
	// Line 1084, Address: 0x236c3c, Func Offset: 0x1c
	// Line 1093, Address: 0x236c44, Func Offset: 0x24
	// Line 1094, Address: 0x236c50, Func Offset: 0x30
	// Line 1096, Address: 0x236c68, Func Offset: 0x48
	// Line 1097, Address: 0x236c74, Func Offset: 0x54
	// Line 1099, Address: 0x236ca0, Func Offset: 0x80
	// Line 1100, Address: 0x236ca8, Func Offset: 0x88
	// Line 1101, Address: 0x236cc8, Func Offset: 0xa8
	// Line 1102, Address: 0x236ccc, Func Offset: 0xac
	// Line 1103, Address: 0x236cd0, Func Offset: 0xb0
	// Line 1104, Address: 0x236cdc, Func Offset: 0xbc
	// Line 1105, Address: 0x236ce8, Func Offset: 0xc8
	// Line 1106, Address: 0x236cf4, Func Offset: 0xd4
	// Line 1107, Address: 0x236d00, Func Offset: 0xe0
	// Line 1108, Address: 0x236d14, Func Offset: 0xf4
	// Line 1110, Address: 0x236d1c, Func Offset: 0xfc
	// Line 1113, Address: 0x236d20, Func Offset: 0x100
	// Line 1114, Address: 0x236d28, Func Offset: 0x108
	// Line 1115, Address: 0x236d30, Func Offset: 0x110
	// Line 1117, Address: 0x236d38, Func Offset: 0x118
	// Line 1119, Address: 0x236d40, Func Offset: 0x120
	// Line 1121, Address: 0x236d5c, Func Offset: 0x13c
	// Line 1125, Address: 0x236d68, Func Offset: 0x148
	// Line 1126, Address: 0x236d74, Func Offset: 0x154
	// Line 1125, Address: 0x236d7c, Func Offset: 0x15c
	// Line 1126, Address: 0x236d84, Func Offset: 0x164
	// Line 1127, Address: 0x236dac, Func Offset: 0x18c
	// Line 1128, Address: 0x236db8, Func Offset: 0x198
	// Line 1129, Address: 0x236dd4, Func Offset: 0x1b4
	// Line 1130, Address: 0x236de8, Func Offset: 0x1c8
	// Line 1131, Address: 0x236df4, Func Offset: 0x1d4
	// Line 1133, Address: 0x236df8, Func Offset: 0x1d8
	// Line 1139, Address: 0x236e00, Func Offset: 0x1e0
	// Func End, Address: 0x236e20, Func Offset: 0x200
}

// 
// Start address: 0x236e20
void EnemyPickgirlControlInit(sfObj* obj)
{
	// Line 1143, Address: 0x236e20, Func Offset: 0
	// Line 1144, Address: 0x236e24, Func Offset: 0x4
	// Line 1143, Address: 0x236e28, Func Offset: 0x8
	// Line 1144, Address: 0x236e2c, Func Offset: 0xc
	// Line 1143, Address: 0x236e30, Func Offset: 0x10
	// Line 1144, Address: 0x236e34, Func Offset: 0x14
	// Line 1145, Address: 0x236e3c, Func Offset: 0x1c
	// Line 1146, Address: 0x236e48, Func Offset: 0x28
	// Line 1147, Address: 0x236e54, Func Offset: 0x34
	// Func End, Address: 0x236e64, Func Offset: 0x44
}

// 
// Start address: 0x236e70
void EnemyPickgirlControlWander(sfObj* obj)
{
	EnemyPickgirlWork* ew;
	float* pos;
	float* target;
	float rot[4];
	float tpos[4];
	float vec[4];
	float dt;
	float r;
	float d;
	// Line 1151, Address: 0x236e70, Func Offset: 0
	// Line 1158, Address: 0x236e8c, Func Offset: 0x1c
	// Line 1159, Address: 0x236e98, Func Offset: 0x28
	// Line 1160, Address: 0x236ea4, Func Offset: 0x34
	// Line 1161, Address: 0x236eb0, Func Offset: 0x40
	// Line 1162, Address: 0x236eb8, Func Offset: 0x48
	// Line 1163, Address: 0x236ec4, Func Offset: 0x54
	// Line 1164, Address: 0x236f04, Func Offset: 0x94
	// Line 1166, Address: 0x236f08, Func Offset: 0x98
	// Line 1167, Address: 0x236f10, Func Offset: 0xa0
	// Line 1168, Address: 0x236f1c, Func Offset: 0xac
	// Line 1169, Address: 0x236f28, Func Offset: 0xb8
	// Line 1170, Address: 0x236f34, Func Offset: 0xc4
	// Line 1171, Address: 0x236f44, Func Offset: 0xd4
	// Line 1172, Address: 0x236f54, Func Offset: 0xe4
	// Line 1173, Address: 0x236f60, Func Offset: 0xf0
	// Line 1174, Address: 0x236f70, Func Offset: 0x100
	// Line 1175, Address: 0x236f7c, Func Offset: 0x10c
	// Line 1176, Address: 0x236f88, Func Offset: 0x118
	// Line 1177, Address: 0x236f90, Func Offset: 0x120
	// Line 1179, Address: 0x236f94, Func Offset: 0x124
	// Line 1177, Address: 0x236f98, Func Offset: 0x128
	// Line 1179, Address: 0x236f9c, Func Offset: 0x12c
	// Line 1181, Address: 0x236fa4, Func Offset: 0x134
	// Line 1182, Address: 0x236fa8, Func Offset: 0x138
	// Line 1183, Address: 0x236fbc, Func Offset: 0x14c
	// Line 1184, Address: 0x236fd0, Func Offset: 0x160
	// Line 1185, Address: 0x236fd8, Func Offset: 0x168
	// Line 1187, Address: 0x237000, Func Offset: 0x190
	// Line 1188, Address: 0x23701c, Func Offset: 0x1ac
	// Line 1189, Address: 0x237020, Func Offset: 0x1b0
	// Line 1190, Address: 0x237030, Func Offset: 0x1c0
	// Line 1191, Address: 0x237044, Func Offset: 0x1d4
	// Line 1192, Address: 0x237050, Func Offset: 0x1e0
	// Line 1194, Address: 0x237084, Func Offset: 0x214
	// Line 1195, Address: 0x23708c, Func Offset: 0x21c
	// Line 1196, Address: 0x237094, Func Offset: 0x224
	// Line 1197, Address: 0x237098, Func Offset: 0x228
	// Line 1198, Address: 0x2370d4, Func Offset: 0x264
	// Line 1199, Address: 0x2370dc, Func Offset: 0x26c
	// Line 1200, Address: 0x2370ec, Func Offset: 0x27c
	// Line 1201, Address: 0x2370fc, Func Offset: 0x28c
	// Line 1202, Address: 0x237108, Func Offset: 0x298
	// Line 1203, Address: 0x237114, Func Offset: 0x2a4
	// Line 1204, Address: 0x237120, Func Offset: 0x2b0
	// Line 1205, Address: 0x237130, Func Offset: 0x2c0
	// Line 1206, Address: 0x23713c, Func Offset: 0x2cc
	// Line 1207, Address: 0x237144, Func Offset: 0x2d4
	// Line 1208, Address: 0x237148, Func Offset: 0x2d8
	// Line 1209, Address: 0x237154, Func Offset: 0x2e4
	// Line 1210, Address: 0x237168, Func Offset: 0x2f8
	// Line 1209, Address: 0x23716c, Func Offset: 0x2fc
	// Line 1210, Address: 0x237170, Func Offset: 0x300
	// Line 1209, Address: 0x237174, Func Offset: 0x304
	// Line 1210, Address: 0x23717c, Func Offset: 0x30c
	// Line 1211, Address: 0x237184, Func Offset: 0x314
	// Line 1212, Address: 0x23718c, Func Offset: 0x31c
	// Line 1213, Address: 0x237190, Func Offset: 0x320
	// Line 1216, Address: 0x237198, Func Offset: 0x328
	// Line 1217, Address: 0x2371a4, Func Offset: 0x334
	// Line 1218, Address: 0x2371ac, Func Offset: 0x33c
	// Line 1221, Address: 0x2371f0, Func Offset: 0x380
	// Line 1222, Address: 0x2371fc, Func Offset: 0x38c
	// Line 1223, Address: 0x237204, Func Offset: 0x394
	// Line 1224, Address: 0x237208, Func Offset: 0x398
	// Line 1226, Address: 0x237228, Func Offset: 0x3b8
	// Line 1229, Address: 0x237230, Func Offset: 0x3c0
	// Line 1230, Address: 0x23723c, Func Offset: 0x3cc
	// Line 1232, Address: 0x23725c, Func Offset: 0x3ec
	// Line 1233, Address: 0x237268, Func Offset: 0x3f8
	// Line 1234, Address: 0x237274, Func Offset: 0x404
	// Line 1236, Address: 0x23728c, Func Offset: 0x41c
	// Line 1234, Address: 0x237294, Func Offset: 0x424
	// Line 1236, Address: 0x237298, Func Offset: 0x428
	// Line 1237, Address: 0x2372b8, Func Offset: 0x448
	// Line 1238, Address: 0x2372c4, Func Offset: 0x454
	// Line 1240, Address: 0x2372e4, Func Offset: 0x474
	// Line 1241, Address: 0x2372ec, Func Offset: 0x47c
	// Line 1242, Address: 0x2372f0, Func Offset: 0x480
	// Line 1243, Address: 0x23730c, Func Offset: 0x49c
	// Line 1244, Address: 0x237318, Func Offset: 0x4a8
	// Line 1246, Address: 0x23731c, Func Offset: 0x4ac
	// Line 1248, Address: 0x237328, Func Offset: 0x4b8
	// Line 1250, Address: 0x237330, Func Offset: 0x4c0
	// Line 1252, Address: 0x237348, Func Offset: 0x4d8
	// Line 1254, Address: 0x237350, Func Offset: 0x4e0
	// Line 1255, Address: 0x237358, Func Offset: 0x4e8
	// Func End, Address: 0x237378, Func Offset: 0x508
}

// 
// Start address: 0x237380
void EnemyPickgirlControlChase(sfObj* obj)
{
	EnemyPickgirlWork* ew;
	float* pos;
	float* target;
	float rot[4];
	float tpos[4];
	float vec[4];
	float dt;
	float r;
	int f;
	// Line 1259, Address: 0x237380, Func Offset: 0
	// Line 1267, Address: 0x23739c, Func Offset: 0x1c
	// Line 1268, Address: 0x2373a8, Func Offset: 0x28
	// Line 1269, Address: 0x2373b4, Func Offset: 0x34
	// Line 1270, Address: 0x2373c0, Func Offset: 0x40
	// Line 1271, Address: 0x2373c8, Func Offset: 0x48
	// Line 1272, Address: 0x2373d4, Func Offset: 0x54
	// Line 1275, Address: 0x2373f8, Func Offset: 0x78
	// Line 1276, Address: 0x237400, Func Offset: 0x80
	// Line 1277, Address: 0x23740c, Func Offset: 0x8c
	// Line 1278, Address: 0x237414, Func Offset: 0x94
	// Line 1279, Address: 0x237420, Func Offset: 0xa0
	// Line 1280, Address: 0x23742c, Func Offset: 0xac
	// Line 1281, Address: 0x23743c, Func Offset: 0xbc
	// Line 1282, Address: 0x23744c, Func Offset: 0xcc
	// Line 1283, Address: 0x237458, Func Offset: 0xd8
	// Line 1284, Address: 0x237464, Func Offset: 0xe4
	// Line 1285, Address: 0x237470, Func Offset: 0xf0
	// Line 1286, Address: 0x237478, Func Offset: 0xf8
	// Line 1289, Address: 0x23747c, Func Offset: 0xfc
	// Line 1286, Address: 0x237480, Func Offset: 0x100
	// Line 1287, Address: 0x237484, Func Offset: 0x104
	// Line 1289, Address: 0x237488, Func Offset: 0x108
	// Line 1292, Address: 0x237490, Func Offset: 0x110
	// Line 1293, Address: 0x2374a0, Func Offset: 0x120
	// Line 1294, Address: 0x2374ac, Func Offset: 0x12c
	// Line 1296, Address: 0x2374b4, Func Offset: 0x134
	// Line 1298, Address: 0x23750c, Func Offset: 0x18c
	// Line 1299, Address: 0x237510, Func Offset: 0x190
	// Line 1301, Address: 0x237520, Func Offset: 0x1a0
	// Line 1300, Address: 0x23752c, Func Offset: 0x1ac
	// Line 1301, Address: 0x237530, Func Offset: 0x1b0
	// Line 1303, Address: 0x237540, Func Offset: 0x1c0
	// Line 1304, Address: 0x23754c, Func Offset: 0x1cc
	// Line 1305, Address: 0x23755c, Func Offset: 0x1dc
	// Line 1306, Address: 0x237568, Func Offset: 0x1e8
	// Line 1311, Address: 0x237570, Func Offset: 0x1f0
	// Line 1312, Address: 0x23757c, Func Offset: 0x1fc
	// Line 1313, Address: 0x237584, Func Offset: 0x204
	// Line 1314, Address: 0x237588, Func Offset: 0x208
	// Line 1316, Address: 0x2375a8, Func Offset: 0x228
	// Line 1318, Address: 0x2375b4, Func Offset: 0x234
	// Line 1319, Address: 0x2375b8, Func Offset: 0x238
	// Line 1320, Address: 0x2375c8, Func Offset: 0x248
	// Line 1321, Address: 0x2375d4, Func Offset: 0x254
	// Line 1323, Address: 0x2375f4, Func Offset: 0x274
	// Line 1324, Address: 0x237600, Func Offset: 0x280
	// Line 1325, Address: 0x23760c, Func Offset: 0x28c
	// Line 1327, Address: 0x237620, Func Offset: 0x2a0
	// Line 1329, Address: 0x237634, Func Offset: 0x2b4
	// Line 1330, Address: 0x23763c, Func Offset: 0x2bc
	// Line 1331, Address: 0x237640, Func Offset: 0x2c0
	// Line 1334, Address: 0x237654, Func Offset: 0x2d4
	// Line 1336, Address: 0x237658, Func Offset: 0x2d8
	// Line 1335, Address: 0x23765c, Func Offset: 0x2dc
	// Line 1336, Address: 0x237664, Func Offset: 0x2e4
	// Line 1337, Address: 0x237684, Func Offset: 0x304
	// Line 1340, Address: 0x237690, Func Offset: 0x310
	// Line 1341, Address: 0x237698, Func Offset: 0x318
	// Line 1342, Address: 0x2376a0, Func Offset: 0x320
	// Func End, Address: 0x2376c0, Func Offset: 0x340
}

// 
// Start address: 0x2376c0
void EnemyPickgirlControlAttack(sfObj* obj)
{
	EnemyPickgirlWork* ew;
	float* pos;
	float* ppos;
	float tpos[4];
	float vec[4];
	float dt;
	// Line 1346, Address: 0x2376c0, Func Offset: 0
	// Line 1351, Address: 0x2376d8, Func Offset: 0x18
	// Line 1352, Address: 0x2376e4, Func Offset: 0x24
	// Line 1353, Address: 0x2376ec, Func Offset: 0x2c
	// Line 1354, Address: 0x2376f8, Func Offset: 0x38
	// Line 1356, Address: 0x237738, Func Offset: 0x78
	// Line 1357, Address: 0x237740, Func Offset: 0x80
	// Line 1358, Address: 0x237748, Func Offset: 0x88
	// Line 1359, Address: 0x237750, Func Offset: 0x90
	// Line 1360, Address: 0x23775c, Func Offset: 0x9c
	// Line 1361, Address: 0x237770, Func Offset: 0xb0
	// Line 1362, Address: 0x23777c, Func Offset: 0xbc
	// Line 1363, Address: 0x237788, Func Offset: 0xc8
	// Line 1364, Address: 0x2377a0, Func Offset: 0xe0
	// Line 1365, Address: 0x2377ac, Func Offset: 0xec
	// Line 1366, Address: 0x2377b4, Func Offset: 0xf4
	// Line 1367, Address: 0x2377c0, Func Offset: 0x100
	// Line 1368, Address: 0x2377cc, Func Offset: 0x10c
	// Line 1369, Address: 0x2377d8, Func Offset: 0x118
	// Line 1370, Address: 0x2377e4, Func Offset: 0x124
	// Line 1371, Address: 0x2377f0, Func Offset: 0x130
	// Line 1372, Address: 0x2377f8, Func Offset: 0x138
	// Line 1373, Address: 0x237800, Func Offset: 0x140
	// Line 1377, Address: 0x237808, Func Offset: 0x148
	// Line 1379, Address: 0x237828, Func Offset: 0x168
	// Line 1380, Address: 0x23783c, Func Offset: 0x17c
	// Line 1383, Address: 0x237874, Func Offset: 0x1b4
	// Line 1384, Address: 0x237880, Func Offset: 0x1c0
	// Line 1386, Address: 0x23789c, Func Offset: 0x1dc
	// Line 1387, Address: 0x2378a4, Func Offset: 0x1e4
	// Line 1388, Address: 0x2378a8, Func Offset: 0x1e8
	// Line 1389, Address: 0x2378c0, Func Offset: 0x200
	// Line 1390, Address: 0x2378e4, Func Offset: 0x224
	// Line 1391, Address: 0x2378f4, Func Offset: 0x234
	// Line 1392, Address: 0x2378fc, Func Offset: 0x23c
	// Line 1393, Address: 0x237900, Func Offset: 0x240
	// Line 1392, Address: 0x237908, Func Offset: 0x248
	// Line 1393, Address: 0x23790c, Func Offset: 0x24c
	// Line 1394, Address: 0x237914, Func Offset: 0x254
	// Line 1396, Address: 0x23791c, Func Offset: 0x25c
	// Line 1398, Address: 0x237924, Func Offset: 0x264
	// Line 1399, Address: 0x237928, Func Offset: 0x268
	// Line 1402, Address: 0x237944, Func Offset: 0x284
	// Line 1403, Address: 0x237948, Func Offset: 0x288
	// Func End, Address: 0x237964, Func Offset: 0x2a4
}

// 
// Start address: 0x237970
int set_confront_target(sfObj* obj)
{
	EnemyPickgirlWork* ew;
	float* hpos;
	float tpos[4];
	float vec[4];
	float fvec[4];
	float trot[4];
	float srot[4];
	EnemyClHitResult* cres;
	int i;
	int r;
	float dt;
	// Line 1413, Address: 0x237970, Func Offset: 0
	// Line 1421, Address: 0x237994, Func Offset: 0x24
	// Line 1422, Address: 0x2379a0, Func Offset: 0x30
	// Line 1423, Address: 0x2379b4, Func Offset: 0x44
	// Line 1424, Address: 0x2379bc, Func Offset: 0x4c
	// Line 1425, Address: 0x2379c8, Func Offset: 0x58
	// Line 1426, Address: 0x2379d4, Func Offset: 0x64
	// Line 1427, Address: 0x2379fc, Func Offset: 0x8c
	// Line 1428, Address: 0x237a00, Func Offset: 0x90
	// Line 1430, Address: 0x237a08, Func Offset: 0x98
	// Line 1432, Address: 0x237a48, Func Offset: 0xd8
	// Line 1434, Address: 0x237a90, Func Offset: 0x120
	// Line 1435, Address: 0x237aac, Func Offset: 0x13c
	// Line 1436, Address: 0x237ac8, Func Offset: 0x158
	// Line 1437, Address: 0x237ad8, Func Offset: 0x168
	// Line 1438, Address: 0x237ae8, Func Offset: 0x178
	// Line 1439, Address: 0x237b04, Func Offset: 0x194
	// Line 1441, Address: 0x237b14, Func Offset: 0x1a4
	// Line 1442, Address: 0x237b1c, Func Offset: 0x1ac
	// Line 1443, Address: 0x237b3c, Func Offset: 0x1cc
	// Line 1444, Address: 0x237b58, Func Offset: 0x1e8
	// Line 1446, Address: 0x237b78, Func Offset: 0x208
	// Line 1449, Address: 0x237b7c, Func Offset: 0x20c
	// Line 1450, Address: 0x237b80, Func Offset: 0x210
	// Line 1451, Address: 0x237b88, Func Offset: 0x218
	// Line 1452, Address: 0x237ba8, Func Offset: 0x238
	// Line 1453, Address: 0x237bc4, Func Offset: 0x254
	// Line 1455, Address: 0x237be4, Func Offset: 0x274
	// Line 1459, Address: 0x237be8, Func Offset: 0x278
	// Line 1460, Address: 0x237bfc, Func Offset: 0x28c
	// Line 1462, Address: 0x237c04, Func Offset: 0x294
	// Line 1464, Address: 0x237c24, Func Offset: 0x2b4
	// Line 1465, Address: 0x237c28, Func Offset: 0x2b8
	// Line 1464, Address: 0x237c2c, Func Offset: 0x2bc
	// Line 1465, Address: 0x237c30, Func Offset: 0x2c0
	// Line 1466, Address: 0x237c58, Func Offset: 0x2e8
	// Line 1467, Address: 0x237c6c, Func Offset: 0x2fc
	// Line 1470, Address: 0x237c94, Func Offset: 0x324
	// Line 1471, Address: 0x237ca4, Func Offset: 0x334
	// Line 1473, Address: 0x237cb0, Func Offset: 0x340
	// Line 1474, Address: 0x237ce0, Func Offset: 0x370
	// Line 1475, Address: 0x237cec, Func Offset: 0x37c
	// Line 1477, Address: 0x237d10, Func Offset: 0x3a0
	// Line 1479, Address: 0x237d14, Func Offset: 0x3a4
	// Line 1480, Address: 0x237d18, Func Offset: 0x3a8
	// Line 1481, Address: 0x237d20, Func Offset: 0x3b0
	// Line 1482, Address: 0x237d24, Func Offset: 0x3b4
	// Func End, Address: 0x237d4c, Func Offset: 0x3dc
}

// 
// Start address: 0x237d50
void EnemyPickgirlControlConfront(sfObj* obj)
{
	EnemyPickgirlWork* ew;
	float* pos;
	float vec[4];
	float dt;
	float d;
	// Line 1486, Address: 0x237d50, Func Offset: 0
	// Line 1491, Address: 0x237d68, Func Offset: 0x18
	// Line 1492, Address: 0x237d74, Func Offset: 0x24
	// Line 1493, Address: 0x237d7c, Func Offset: 0x2c
	// Line 1494, Address: 0x237d88, Func Offset: 0x38
	// Line 1495, Address: 0x237dac, Func Offset: 0x5c
	// Line 1496, Address: 0x237db0, Func Offset: 0x60
	// Line 1497, Address: 0x237dc0, Func Offset: 0x70
	// Line 1498, Address: 0x237dc8, Func Offset: 0x78
	// Line 1500, Address: 0x237dd0, Func Offset: 0x80
	// Line 1501, Address: 0x237dd8, Func Offset: 0x88
	// Line 1502, Address: 0x237de0, Func Offset: 0x90
	// Line 1503, Address: 0x237de8, Func Offset: 0x98
	// Line 1504, Address: 0x237df4, Func Offset: 0xa4
	// Line 1505, Address: 0x237e00, Func Offset: 0xb0
	// Line 1506, Address: 0x237e10, Func Offset: 0xc0
	// Line 1507, Address: 0x237e1c, Func Offset: 0xcc
	// Line 1508, Address: 0x237e24, Func Offset: 0xd4
	// Line 1509, Address: 0x237e30, Func Offset: 0xe0
	// Line 1510, Address: 0x237e3c, Func Offset: 0xec
	// Line 1511, Address: 0x237e48, Func Offset: 0xf8
	// Line 1512, Address: 0x237e50, Func Offset: 0x100
	// Line 1514, Address: 0x237e54, Func Offset: 0x104
	// Line 1518, Address: 0x237e60, Func Offset: 0x110
	// Line 1522, Address: 0x237e90, Func Offset: 0x140
	// Line 1523, Address: 0x237ea4, Func Offset: 0x154
	// Line 1526, Address: 0x237edc, Func Offset: 0x18c
	// Line 1527, Address: 0x237ee8, Func Offset: 0x198
	// Line 1528, Address: 0x237ef8, Func Offset: 0x1a8
	// Line 1532, Address: 0x237f00, Func Offset: 0x1b0
	// Line 1533, Address: 0x237f10, Func Offset: 0x1c0
	// Line 1535, Address: 0x237f30, Func Offset: 0x1e0
	// Line 1536, Address: 0x237f40, Func Offset: 0x1f0
	// Line 1539, Address: 0x237f84, Func Offset: 0x234
	// Line 1540, Address: 0x237f8c, Func Offset: 0x23c
	// Line 1541, Address: 0x237f94, Func Offset: 0x244
	// Line 1543, Address: 0x237fa0, Func Offset: 0x250
	// Line 1544, Address: 0x237fa8, Func Offset: 0x258
	// Line 1545, Address: 0x237fac, Func Offset: 0x25c
	// Line 1546, Address: 0x237fb0, Func Offset: 0x260
	// Func End, Address: 0x237fcc, Func Offset: 0x27c
}

// 
// Start address: 0x237fd0
void EnemyPickgirlControlCapture(sfObj* obj)
{
	EnemyPickgirlWork* ew;
	float* pos;
	float* ppos;
	float tpos[4];
	float dt;
	// Line 1550, Address: 0x237fd0, Func Offset: 0
	// Line 1555, Address: 0x237fe8, Func Offset: 0x18
	// Line 1556, Address: 0x237ff4, Func Offset: 0x24
	// Line 1557, Address: 0x237ffc, Func Offset: 0x2c
	// Line 1558, Address: 0x238008, Func Offset: 0x38
	// Line 1560, Address: 0x238048, Func Offset: 0x78
	// Line 1561, Address: 0x238054, Func Offset: 0x84
	// Line 1562, Address: 0x238060, Func Offset: 0x90
	// Line 1563, Address: 0x238078, Func Offset: 0xa8
	// Line 1564, Address: 0x238084, Func Offset: 0xb4
	// Line 1565, Address: 0x23808c, Func Offset: 0xbc
	// Line 1566, Address: 0x238098, Func Offset: 0xc8
	// Line 1567, Address: 0x2380a4, Func Offset: 0xd4
	// Line 1568, Address: 0x2380b0, Func Offset: 0xe0
	// Line 1569, Address: 0x2380b8, Func Offset: 0xe8
	// Line 1570, Address: 0x2380c4, Func Offset: 0xf4
	// Line 1572, Address: 0x2380cc, Func Offset: 0xfc
	// Line 1573, Address: 0x2380d0, Func Offset: 0x100
	// Line 1574, Address: 0x2380d8, Func Offset: 0x108
	// Line 1576, Address: 0x2380f8, Func Offset: 0x128
	// Line 1578, Address: 0x238114, Func Offset: 0x144
	// Line 1579, Address: 0x23811c, Func Offset: 0x14c
	// Line 1581, Address: 0x238120, Func Offset: 0x150
	// Line 1580, Address: 0x238124, Func Offset: 0x154
	// Line 1581, Address: 0x23812c, Func Offset: 0x15c
	// Line 1582, Address: 0x238148, Func Offset: 0x178
	// Line 1583, Address: 0x238168, Func Offset: 0x198
	// Line 1584, Address: 0x238178, Func Offset: 0x1a8
	// Line 1585, Address: 0x238180, Func Offset: 0x1b0
	// Line 1586, Address: 0x238184, Func Offset: 0x1b4
	// Line 1585, Address: 0x23818c, Func Offset: 0x1bc
	// Line 1586, Address: 0x238190, Func Offset: 0x1c0
	// Line 1587, Address: 0x238198, Func Offset: 0x1c8
	// Line 1588, Address: 0x2381a8, Func Offset: 0x1d8
	// Line 1589, Address: 0x2381b0, Func Offset: 0x1e0
	// Line 1591, Address: 0x2381b8, Func Offset: 0x1e8
	// Line 1593, Address: 0x2381c0, Func Offset: 0x1f0
	// Line 1595, Address: 0x2381dc, Func Offset: 0x20c
	// Line 1596, Address: 0x2381e4, Func Offset: 0x214
	// Line 1597, Address: 0x2381e8, Func Offset: 0x218
	// Line 1598, Address: 0x2381f0, Func Offset: 0x220
	// Line 1600, Address: 0x238210, Func Offset: 0x240
	// Line 1603, Address: 0x23822c, Func Offset: 0x25c
	// Line 1604, Address: 0x238230, Func Offset: 0x260
	// Func End, Address: 0x23824c, Func Offset: 0x27c
}

// 
// Start address: 0x238250
void EnemyPickgirlControlCapture2(sfObj* obj)
{
	EnemyPickgirlWork* ew;
	float* pos;
	float* ppos;
	float tpos[4];
	float vec[4];
	float dt;
	// Line 1608, Address: 0x238250, Func Offset: 0
	// Line 1613, Address: 0x238268, Func Offset: 0x18
	// Line 1614, Address: 0x238274, Func Offset: 0x24
	// Line 1615, Address: 0x23827c, Func Offset: 0x2c
	// Line 1616, Address: 0x238288, Func Offset: 0x38
	// Line 1618, Address: 0x2382c8, Func Offset: 0x78
	// Line 1619, Address: 0x2382d4, Func Offset: 0x84
	// Line 1620, Address: 0x2382e8, Func Offset: 0x98
	// Line 1621, Address: 0x2382f4, Func Offset: 0xa4
	// Line 1622, Address: 0x238300, Func Offset: 0xb0
	// Line 1623, Address: 0x238318, Func Offset: 0xc8
	// Line 1624, Address: 0x238324, Func Offset: 0xd4
	// Line 1625, Address: 0x238330, Func Offset: 0xe0
	// Line 1626, Address: 0x238338, Func Offset: 0xe8
	// Line 1627, Address: 0x238344, Func Offset: 0xf4
	// Line 1628, Address: 0x238350, Func Offset: 0x100
	// Line 1629, Address: 0x23835c, Func Offset: 0x10c
	// Line 1630, Address: 0x238364, Func Offset: 0x114
	// Line 1632, Address: 0x23836c, Func Offset: 0x11c
	// Line 1634, Address: 0x238370, Func Offset: 0x120
	// Line 1635, Address: 0x238378, Func Offset: 0x128
	// Line 1637, Address: 0x238398, Func Offset: 0x148
	// Line 1639, Address: 0x2383b4, Func Offset: 0x164
	// Line 1640, Address: 0x2383bc, Func Offset: 0x16c
	// Line 1642, Address: 0x2383c0, Func Offset: 0x170
	// Line 1641, Address: 0x2383c4, Func Offset: 0x174
	// Line 1642, Address: 0x2383cc, Func Offset: 0x17c
	// Line 1643, Address: 0x2383e4, Func Offset: 0x194
	// Line 1644, Address: 0x238404, Func Offset: 0x1b4
	// Line 1645, Address: 0x238414, Func Offset: 0x1c4
	// Line 1646, Address: 0x23841c, Func Offset: 0x1cc
	// Line 1647, Address: 0x238420, Func Offset: 0x1d0
	// Line 1646, Address: 0x238428, Func Offset: 0x1d8
	// Line 1647, Address: 0x23842c, Func Offset: 0x1dc
	// Line 1648, Address: 0x238434, Func Offset: 0x1e4
	// Line 1650, Address: 0x23843c, Func Offset: 0x1ec
	// Line 1651, Address: 0x238444, Func Offset: 0x1f4
	// Line 1652, Address: 0x238448, Func Offset: 0x1f8
	// Line 1654, Address: 0x238464, Func Offset: 0x214
	// Line 1655, Address: 0x23846c, Func Offset: 0x21c
	// Line 1656, Address: 0x238470, Func Offset: 0x220
	// Line 1657, Address: 0x238478, Func Offset: 0x228
	// Line 1659, Address: 0x238498, Func Offset: 0x248
	// Line 1662, Address: 0x2384b4, Func Offset: 0x264
	// Line 1663, Address: 0x2384b8, Func Offset: 0x268
	// Func End, Address: 0x2384d4, Func Offset: 0x284
}

// 
// Start address: 0x2384e0
void EnemyPickgirlControlVacant(sfObj* obj)
{
	EnemyPickgirlWork* ew;
	float vec[4];
	float dt;
	float d;
	// Line 1667, Address: 0x2384e0, Func Offset: 0
	// Line 1672, Address: 0x2384f8, Func Offset: 0x18
	// Line 1673, Address: 0x238504, Func Offset: 0x24
	// Line 1674, Address: 0x23850c, Func Offset: 0x2c
	// Line 1675, Address: 0x238518, Func Offset: 0x38
	// Line 1676, Address: 0x23853c, Func Offset: 0x5c
	// Line 1678, Address: 0x238540, Func Offset: 0x60
	// Line 1679, Address: 0x23854c, Func Offset: 0x6c
	// Line 1680, Address: 0x238558, Func Offset: 0x78
	// Line 1681, Address: 0x238564, Func Offset: 0x84
	// Line 1682, Address: 0x238574, Func Offset: 0x94
	// Line 1683, Address: 0x238580, Func Offset: 0xa0
	// Line 1684, Address: 0x23858c, Func Offset: 0xac
	// Line 1685, Address: 0x238598, Func Offset: 0xb8
	// Line 1686, Address: 0x2385a0, Func Offset: 0xc0
	// Line 1688, Address: 0x2385ac, Func Offset: 0xcc
	// Line 1686, Address: 0x2385b0, Func Offset: 0xd0
	// Line 1688, Address: 0x2385c4, Func Offset: 0xe4
	// Line 1690, Address: 0x2385cc, Func Offset: 0xec
	// Line 1691, Address: 0x2385d0, Func Offset: 0xf0
	// Line 1692, Address: 0x2385e0, Func Offset: 0x100
	// Line 1693, Address: 0x2385f4, Func Offset: 0x114
	// Line 1694, Address: 0x238604, Func Offset: 0x124
	// Line 1696, Address: 0x238648, Func Offset: 0x168
	// Line 1697, Address: 0x238654, Func Offset: 0x174
	// Line 1699, Address: 0x23865c, Func Offset: 0x17c
	// Line 1700, Address: 0x238660, Func Offset: 0x180
	// Line 1701, Address: 0x23867c, Func Offset: 0x19c
	// Line 1705, Address: 0x238688, Func Offset: 0x1a8
	// Line 1707, Address: 0x2386ac, Func Offset: 0x1cc
	// Line 1708, Address: 0x2386cc, Func Offset: 0x1ec
	// Line 1710, Address: 0x2386d8, Func Offset: 0x1f8
	// Line 1711, Address: 0x2386e0, Func Offset: 0x200
	// Line 1712, Address: 0x2386e4, Func Offset: 0x204
	// Line 1713, Address: 0x2386e8, Func Offset: 0x208
	// Func End, Address: 0x238704, Func Offset: 0x224
}

// 
// Start address: 0x238710
int check_hit_hair(sfObj* obj)
{
	float tpos[4];
	EnemyClHitResult* cres;
	int i;
	int r;
	// Line 1717, Address: 0x238710, Func Offset: 0
	// Line 1722, Address: 0x23872c, Func Offset: 0x1c
	// Line 1723, Address: 0x238748, Func Offset: 0x38
	// Line 1724, Address: 0x238750, Func Offset: 0x40
	// Line 1726, Address: 0x238758, Func Offset: 0x48
	// Line 1724, Address: 0x23875c, Func Offset: 0x4c
	// Line 1725, Address: 0x238760, Func Offset: 0x50
	// Line 1726, Address: 0x238764, Func Offset: 0x54
	// Line 1727, Address: 0x238770, Func Offset: 0x60
	// Line 1728, Address: 0x238780, Func Offset: 0x70
	// Line 1729, Address: 0x23879c, Func Offset: 0x8c
	// Line 1732, Address: 0x2387bc, Func Offset: 0xac
	// Line 1735, Address: 0x2387c4, Func Offset: 0xb4
	// Line 1736, Address: 0x2387d8, Func Offset: 0xc8
	// Line 1737, Address: 0x2387e0, Func Offset: 0xd0
	// Line 1738, Address: 0x2387e8, Func Offset: 0xd8
	// Func End, Address: 0x238808, Func Offset: 0xf8
}

// 
// Start address: 0x238810
void EnemyPickgirlControlCrawl(sfObj* obj)
{
	EnemyPickgirlWork* ew;
	float* pos;
	float* target;
	float rot[4];
	float tpos[4];
	float vec[4];
	float dt;
	float r;
	// Line 1742, Address: 0x238810, Func Offset: 0
	// Line 1749, Address: 0x238830, Func Offset: 0x20
	// Line 1750, Address: 0x23883c, Func Offset: 0x2c
	// Line 1751, Address: 0x238848, Func Offset: 0x38
	// Line 1752, Address: 0x238854, Func Offset: 0x44
	// Line 1753, Address: 0x23885c, Func Offset: 0x4c
	// Line 1754, Address: 0x238868, Func Offset: 0x58
	// Line 1757, Address: 0x2388a8, Func Offset: 0x98
	// Line 1758, Address: 0x2388b0, Func Offset: 0xa0
	// Line 1759, Address: 0x2388bc, Func Offset: 0xac
	// Line 1760, Address: 0x2388cc, Func Offset: 0xbc
	// Line 1761, Address: 0x2388dc, Func Offset: 0xcc
	// Line 1762, Address: 0x2388ec, Func Offset: 0xdc
	// Line 1763, Address: 0x2388f8, Func Offset: 0xe8
	// Line 1764, Address: 0x238904, Func Offset: 0xf4
	// Line 1765, Address: 0x238910, Func Offset: 0x100
	// Line 1766, Address: 0x23891c, Func Offset: 0x10c
	// Line 1767, Address: 0x238928, Func Offset: 0x118
	// Line 1768, Address: 0x238930, Func Offset: 0x120
	// Line 1772, Address: 0x238934, Func Offset: 0x124
	// Line 1768, Address: 0x238938, Func Offset: 0x128
	// Line 1769, Address: 0x23893c, Func Offset: 0x12c
	// Line 1770, Address: 0x238940, Func Offset: 0x130
	// Line 1772, Address: 0x238944, Func Offset: 0x134
	// Line 1774, Address: 0x23894c, Func Offset: 0x13c
	// Line 1775, Address: 0x238950, Func Offset: 0x140
	// Line 1776, Address: 0x238964, Func Offset: 0x154
	// Line 1777, Address: 0x23897c, Func Offset: 0x16c
	// Line 1779, Address: 0x2389ac, Func Offset: 0x19c
	// Line 1780, Address: 0x2389b4, Func Offset: 0x1a4
	// Line 1781, Address: 0x2389c0, Func Offset: 0x1b0
	// Line 1783, Address: 0x2389c8, Func Offset: 0x1b8
	// Line 1784, Address: 0x2389e4, Func Offset: 0x1d4
	// Line 1785, Address: 0x2389e8, Func Offset: 0x1d8
	// Line 1786, Address: 0x2389fc, Func Offset: 0x1ec
	// Line 1787, Address: 0x238a34, Func Offset: 0x224
	// Line 1788, Address: 0x238a3c, Func Offset: 0x22c
	// Line 1789, Address: 0x238a50, Func Offset: 0x240
	// Line 1788, Address: 0x238a54, Func Offset: 0x244
	// Line 1789, Address: 0x238a58, Func Offset: 0x248
	// Line 1788, Address: 0x238a5c, Func Offset: 0x24c
	// Line 1789, Address: 0x238a64, Func Offset: 0x254
	// Line 1790, Address: 0x238a6c, Func Offset: 0x25c
	// Line 1791, Address: 0x238a74, Func Offset: 0x264
	// Line 1792, Address: 0x238a78, Func Offset: 0x268
	// Line 1795, Address: 0x238a80, Func Offset: 0x270
	// Line 1797, Address: 0x238ab0, Func Offset: 0x2a0
	// Line 1798, Address: 0x238ab8, Func Offset: 0x2a8
	// Line 1799, Address: 0x238ac4, Func Offset: 0x2b4
	// Line 1800, Address: 0x238acc, Func Offset: 0x2bc
	// Line 1801, Address: 0x238ad0, Func Offset: 0x2c0
	// Line 1802, Address: 0x238ad8, Func Offset: 0x2c8
	// Line 1801, Address: 0x238adc, Func Offset: 0x2cc
	// Line 1802, Address: 0x238ae0, Func Offset: 0x2d0
	// Line 1803, Address: 0x238af0, Func Offset: 0x2e0
	// Line 1805, Address: 0x238b00, Func Offset: 0x2f0
	// Line 1806, Address: 0x238b14, Func Offset: 0x304
	// Line 1807, Address: 0x238b20, Func Offset: 0x310
	// Line 1808, Address: 0x238b28, Func Offset: 0x318
	// Line 1809, Address: 0x238b50, Func Offset: 0x340
	// Line 1811, Address: 0x238b70, Func Offset: 0x360
	// Line 1813, Address: 0x238b78, Func Offset: 0x368
	// Line 1814, Address: 0x238b94, Func Offset: 0x384
	// Line 1815, Address: 0x238b9c, Func Offset: 0x38c
	// Line 1817, Address: 0x238ba4, Func Offset: 0x394
	// Line 1818, Address: 0x238bac, Func Offset: 0x39c
	// Line 1819, Address: 0x238bb0, Func Offset: 0x3a0
	// Line 1821, Address: 0x238bc8, Func Offset: 0x3b8
	// Line 1823, Address: 0x238bd0, Func Offset: 0x3c0
	// Line 1824, Address: 0x238be0, Func Offset: 0x3d0
	// Line 1825, Address: 0x238c00, Func Offset: 0x3f0
	// Line 1826, Address: 0x238c08, Func Offset: 0x3f8
	// Line 1829, Address: 0x238c10, Func Offset: 0x400
	// Line 1831, Address: 0x238c28, Func Offset: 0x418
	// Line 1832, Address: 0x238c30, Func Offset: 0x420
	// Func End, Address: 0x238c54, Func Offset: 0x444
}

// 
// Start address: 0x238c60
void EnemyPickgirlControlCrawlChase(sfObj* obj)
{
	EnemyPickgirlWork* ew;
	float* pos;
	float* target;
	float rot[4];
	float tpos[4];
	float dt;
	float r;
	// Line 1836, Address: 0x238c60, Func Offset: 0
	// Line 1843, Address: 0x238c80, Func Offset: 0x20
	// Line 1844, Address: 0x238c8c, Func Offset: 0x2c
	// Line 1845, Address: 0x238c98, Func Offset: 0x38
	// Line 1846, Address: 0x238ca4, Func Offset: 0x44
	// Line 1847, Address: 0x238cac, Func Offset: 0x4c
	// Line 1848, Address: 0x238cb8, Func Offset: 0x58
	// Line 1849, Address: 0x238ce4, Func Offset: 0x84
	// Line 1851, Address: 0x238ce8, Func Offset: 0x88
	// Line 1852, Address: 0x238cf4, Func Offset: 0x94
	// Line 1853, Address: 0x238d00, Func Offset: 0xa0
	// Line 1854, Address: 0x238d10, Func Offset: 0xb0
	// Line 1855, Address: 0x238d20, Func Offset: 0xc0
	// Line 1856, Address: 0x238d2c, Func Offset: 0xcc
	// Line 1857, Address: 0x238d38, Func Offset: 0xd8
	// Line 1858, Address: 0x238d40, Func Offset: 0xe0
	// Line 1859, Address: 0x238d4c, Func Offset: 0xec
	// Line 1860, Address: 0x238d58, Func Offset: 0xf8
	// Line 1861, Address: 0x238d64, Func Offset: 0x104
	// Line 1864, Address: 0x238d68, Func Offset: 0x108
	// Line 1862, Address: 0x238d6c, Func Offset: 0x10c
	// Line 1864, Address: 0x238d70, Func Offset: 0x110
	// Line 1867, Address: 0x238d78, Func Offset: 0x118
	// Line 1868, Address: 0x238d88, Func Offset: 0x128
	// Line 1870, Address: 0x238db8, Func Offset: 0x158
	// Line 1871, Address: 0x238dc0, Func Offset: 0x160
	// Line 1872, Address: 0x238dcc, Func Offset: 0x16c
	// Line 1873, Address: 0x238dd4, Func Offset: 0x174
	// Line 1874, Address: 0x238dd8, Func Offset: 0x178
	// Line 1876, Address: 0x238dfc, Func Offset: 0x19c
	// Line 1877, Address: 0x238e04, Func Offset: 0x1a4
	// Line 1878, Address: 0x238e10, Func Offset: 0x1b0
	// Line 1880, Address: 0x238e18, Func Offset: 0x1b8
	// Line 1881, Address: 0x238e20, Func Offset: 0x1c0
	// Line 1880, Address: 0x238e24, Func Offset: 0x1c4
	// Line 1881, Address: 0x238e28, Func Offset: 0x1c8
	// Line 1882, Address: 0x238e38, Func Offset: 0x1d8
	// Line 1884, Address: 0x238e48, Func Offset: 0x1e8
	// Line 1885, Address: 0x238e5c, Func Offset: 0x1fc
	// Line 1886, Address: 0x238e68, Func Offset: 0x208
	// Line 1887, Address: 0x238e70, Func Offset: 0x210
	// Line 1888, Address: 0x238e8c, Func Offset: 0x22c
	// Line 1889, Address: 0x238e94, Func Offset: 0x234
	// Line 1890, Address: 0x238e98, Func Offset: 0x238
	// Line 1892, Address: 0x238eac, Func Offset: 0x24c
	// Line 1893, Address: 0x238eb4, Func Offset: 0x254
	// Line 1894, Address: 0x238eb8, Func Offset: 0x258
	// Line 1896, Address: 0x238edc, Func Offset: 0x27c
	// Line 1897, Address: 0x238ee4, Func Offset: 0x284
	// Line 1898, Address: 0x238ef0, Func Offset: 0x290
	// Line 1900, Address: 0x238f08, Func Offset: 0x2a8
	// Line 1901, Address: 0x238f18, Func Offset: 0x2b8
	// Line 1902, Address: 0x238f20, Func Offset: 0x2c0
	// Line 1903, Address: 0x238f28, Func Offset: 0x2c8
	// Line 1905, Address: 0x238f40, Func Offset: 0x2e0
	// Line 1906, Address: 0x238f80, Func Offset: 0x320
	// Line 1907, Address: 0x238f88, Func Offset: 0x328
	// Line 1909, Address: 0x238f90, Func Offset: 0x330
	// Func End, Address: 0x238fb4, Func Offset: 0x354
}

// 
// Start address: 0x238fc0
void EnemyPickgirlControlCapture3(sfObj* obj)
{
	EnemyPickgirlWork* ew;
	float* pos;
	float* ppos;
	float dt;
	// Line 1913, Address: 0x238fc0, Func Offset: 0
	// Line 1917, Address: 0x238fdc, Func Offset: 0x1c
	// Line 1918, Address: 0x238fe8, Func Offset: 0x28
	// Line 1919, Address: 0x238ff4, Func Offset: 0x34
	// Line 1920, Address: 0x238ffc, Func Offset: 0x3c
	// Line 1921, Address: 0x239008, Func Offset: 0x48
	// Line 1922, Address: 0x23902c, Func Offset: 0x6c
	// Line 1923, Address: 0x239030, Func Offset: 0x70
	// Line 1924, Address: 0x23903c, Func Offset: 0x7c
	// Line 1925, Address: 0x239044, Func Offset: 0x84
	// Line 1926, Address: 0x239050, Func Offset: 0x90
	// Line 1927, Address: 0x23905c, Func Offset: 0x9c
	// Line 1928, Address: 0x239068, Func Offset: 0xa8
	// Line 1929, Address: 0x239070, Func Offset: 0xb0
	// Line 1930, Address: 0x23907c, Func Offset: 0xbc
	// Line 1931, Address: 0x239080, Func Offset: 0xc0
	// Line 1933, Address: 0x23908c, Func Offset: 0xcc
	// Line 1934, Address: 0x239090, Func Offset: 0xd0
	// Line 1935, Address: 0x239098, Func Offset: 0xd8
	// Line 1937, Address: 0x2390b8, Func Offset: 0xf8
	// Line 1938, Address: 0x2390c8, Func Offset: 0x108
	// Line 1939, Address: 0x2390d0, Func Offset: 0x110
	// Line 1940, Address: 0x2390dc, Func Offset: 0x11c
	// Line 1941, Address: 0x2390ec, Func Offset: 0x12c
	// Line 1942, Address: 0x2390f8, Func Offset: 0x138
	// Line 1943, Address: 0x239110, Func Offset: 0x150
	// Line 1944, Address: 0x23911c, Func Offset: 0x15c
	// Line 1945, Address: 0x239128, Func Offset: 0x168
	// Line 1948, Address: 0x239134, Func Offset: 0x174
	// Line 1949, Address: 0x239138, Func Offset: 0x178
	// Func End, Address: 0x239158, Func Offset: 0x198
}

// 
// Start address: 0x239160
void EnemyPickgirlControlTrepang(sfObj* obj)
{
	EnemyPickgirlWork* ew;
	float* pos;
	float* target;
	float rot[4];
	float tpos[4];
	float vec[4];
	float dt;
	float r;
	// Line 1953, Address: 0x239160, Func Offset: 0
	// Line 1960, Address: 0x239180, Func Offset: 0x20
	// Line 1961, Address: 0x23918c, Func Offset: 0x2c
	// Line 1962, Address: 0x239198, Func Offset: 0x38
	// Line 1963, Address: 0x2391a4, Func Offset: 0x44
	// Line 1964, Address: 0x2391ac, Func Offset: 0x4c
	// Line 1965, Address: 0x2391b8, Func Offset: 0x58
	// Line 1968, Address: 0x2391f0, Func Offset: 0x90
	// Line 1969, Address: 0x2391fc, Func Offset: 0x9c
	// Line 1970, Address: 0x239208, Func Offset: 0xa8
	// Line 1971, Address: 0x239218, Func Offset: 0xb8
	// Line 1972, Address: 0x239228, Func Offset: 0xc8
	// Line 1973, Address: 0x239238, Func Offset: 0xd8
	// Line 1974, Address: 0x239244, Func Offset: 0xe4
	// Line 1975, Address: 0x239250, Func Offset: 0xf0
	// Line 1976, Address: 0x23925c, Func Offset: 0xfc
	// Line 1977, Address: 0x239268, Func Offset: 0x108
	// Line 1978, Address: 0x239274, Func Offset: 0x114
	// Line 1979, Address: 0x23927c, Func Offset: 0x11c
	// Line 1983, Address: 0x239290, Func Offset: 0x130
	// Line 1979, Address: 0x239294, Func Offset: 0x134
	// Line 1981, Address: 0x2392a0, Func Offset: 0x140
	// Line 1979, Address: 0x2392a4, Func Offset: 0x144
	// Line 1980, Address: 0x2392ac, Func Offset: 0x14c
	// Line 1981, Address: 0x2392b0, Func Offset: 0x150
	// Line 1983, Address: 0x2392b4, Func Offset: 0x154
	// Line 1985, Address: 0x2392bc, Func Offset: 0x15c
	// Line 1986, Address: 0x2392c0, Func Offset: 0x160
	// Line 1987, Address: 0x2392d4, Func Offset: 0x174
	// Line 1988, Address: 0x2392ec, Func Offset: 0x18c
	// Line 1990, Address: 0x2392f4, Func Offset: 0x194
	// Line 1991, Address: 0x2392f8, Func Offset: 0x198
	// Line 1992, Address: 0x239328, Func Offset: 0x1c8
	// Line 1994, Address: 0x239348, Func Offset: 0x1e8
	// Line 1995, Address: 0x23934c, Func Offset: 0x1ec
	// Line 1996, Address: 0x239360, Func Offset: 0x200
	// Line 1997, Address: 0x239374, Func Offset: 0x214
	// Line 1998, Address: 0x23937c, Func Offset: 0x21c
	// Line 1999, Address: 0x239388, Func Offset: 0x228
	// Line 2000, Address: 0x239394, Func Offset: 0x234
	// Line 2001, Address: 0x2393a0, Func Offset: 0x240
	// Line 2003, Address: 0x2393ac, Func Offset: 0x24c
	// Line 2004, Address: 0x2393b4, Func Offset: 0x254
	// Line 2005, Address: 0x2393b8, Func Offset: 0x258
	// Line 2006, Address: 0x2393d4, Func Offset: 0x274
	// Line 2007, Address: 0x2393e0, Func Offset: 0x280
	// Line 2008, Address: 0x2393ec, Func Offset: 0x28c
	// Line 2009, Address: 0x2393f8, Func Offset: 0x298
	// Line 2011, Address: 0x239400, Func Offset: 0x2a0
	// Line 2013, Address: 0x239430, Func Offset: 0x2d0
	// Line 2014, Address: 0x23945c, Func Offset: 0x2fc
	// Line 2015, Address: 0x239468, Func Offset: 0x308
	// Line 2016, Address: 0x239474, Func Offset: 0x314
	// Line 2017, Address: 0x23947c, Func Offset: 0x31c
	// Line 2018, Address: 0x239480, Func Offset: 0x320
	// Line 2019, Address: 0x239488, Func Offset: 0x328
	// Line 2018, Address: 0x23948c, Func Offset: 0x32c
	// Line 2019, Address: 0x239490, Func Offset: 0x330
	// Line 2020, Address: 0x2394a0, Func Offset: 0x340
	// Line 2022, Address: 0x2394b0, Func Offset: 0x350
	// Line 2023, Address: 0x2394c4, Func Offset: 0x364
	// Line 2024, Address: 0x2394d0, Func Offset: 0x370
	// Line 2025, Address: 0x2394d8, Func Offset: 0x378
	// Line 2026, Address: 0x239500, Func Offset: 0x3a0
	// Line 2028, Address: 0x239520, Func Offset: 0x3c0
	// Line 2029, Address: 0x23952c, Func Offset: 0x3cc
	// Line 2031, Address: 0x239580, Func Offset: 0x420
	// Line 2032, Address: 0x23958c, Func Offset: 0x42c
	// Line 2033, Address: 0x239594, Func Offset: 0x434
	// Line 2034, Address: 0x239598, Func Offset: 0x438
	// Line 2037, Address: 0x2395b4, Func Offset: 0x454
	// Line 2038, Address: 0x2395b8, Func Offset: 0x458
	// Func End, Address: 0x2395dc, Func Offset: 0x47c
}

// 
// Start address: 0x2395e0
void EnemyPickgirlControlThroughWall(sfObj* obj)
{
	EnemyPickgirlWork* ew;
	int r;
	// Line 2042, Address: 0x2395e0, Func Offset: 0
	// Line 2045, Address: 0x2395f0, Func Offset: 0x10
	// Line 2046, Address: 0x2395fc, Func Offset: 0x1c
	// Line 2047, Address: 0x23960c, Func Offset: 0x2c
	// Line 2048, Address: 0x239614, Func Offset: 0x34
	// Line 2049, Address: 0x239620, Func Offset: 0x40
	// Line 2050, Address: 0x239630, Func Offset: 0x50
	// Line 2051, Address: 0x239638, Func Offset: 0x58
	// Line 2052, Address: 0x239644, Func Offset: 0x64
	// Line 2053, Address: 0x239650, Func Offset: 0x70
	// Line 2054, Address: 0x23965c, Func Offset: 0x7c
	// Line 2055, Address: 0x239668, Func Offset: 0x88
	// Line 2057, Address: 0x239670, Func Offset: 0x90
	// Line 2058, Address: 0x23967c, Func Offset: 0x9c
	// Line 2057, Address: 0x239680, Func Offset: 0xa0
	// Line 2058, Address: 0x239684, Func Offset: 0xa4
	// Line 2061, Address: 0x23969c, Func Offset: 0xbc
	// Line 2058, Address: 0x2396a0, Func Offset: 0xc0
	// Line 2061, Address: 0x2396a8, Func Offset: 0xc8
	// Line 2058, Address: 0x2396b0, Func Offset: 0xd0
	// Line 2061, Address: 0x2396b4, Func Offset: 0xd4
	// Line 2062, Address: 0x2396bc, Func Offset: 0xdc
	// Line 2064, Address: 0x2396e8, Func Offset: 0x108
	// Line 2065, Address: 0x2396f0, Func Offset: 0x110
	// Line 2067, Address: 0x2396f8, Func Offset: 0x118
	// Line 2068, Address: 0x239710, Func Offset: 0x130
	// Line 2070, Address: 0x239718, Func Offset: 0x138
	// Line 2072, Address: 0x239720, Func Offset: 0x140
	// Line 2073, Address: 0x23972c, Func Offset: 0x14c
	// Line 2074, Address: 0x239734, Func Offset: 0x154
	// Line 2075, Address: 0x239738, Func Offset: 0x158
	// Line 2077, Address: 0x239744, Func Offset: 0x164
	// Line 2078, Address: 0x239748, Func Offset: 0x168
	// Func End, Address: 0x23975c, Func Offset: 0x17c
}

// 
// Start address: 0x239760
void EnemyPickgirlControlChaseInWall(sfObj* obj)
{
	int r;
	// Line 2082, Address: 0x239760, Func Offset: 0
	// Line 2084, Address: 0x23976c, Func Offset: 0xc
	// Line 2085, Address: 0x23977c, Func Offset: 0x1c
	// Line 2086, Address: 0x239784, Func Offset: 0x24
	// Line 2087, Address: 0x239794, Func Offset: 0x34
	// Line 2088, Address: 0x239798, Func Offset: 0x38
	// Line 2091, Address: 0x2397b0, Func Offset: 0x50
	// Line 2088, Address: 0x2397b4, Func Offset: 0x54
	// Line 2091, Address: 0x2397bc, Func Offset: 0x5c
	// Line 2088, Address: 0x2397c4, Func Offset: 0x64
	// Line 2091, Address: 0x2397c8, Func Offset: 0x68
	// Line 2092, Address: 0x2397d0, Func Offset: 0x70
	// Line 2093, Address: 0x2397f4, Func Offset: 0x94
	// Line 2094, Address: 0x2397f8, Func Offset: 0x98
	// Line 2095, Address: 0x239804, Func Offset: 0xa4
	// Line 2096, Address: 0x23980c, Func Offset: 0xac
	// Line 2097, Address: 0x239810, Func Offset: 0xb0
	// Line 2098, Address: 0x23981c, Func Offset: 0xbc
	// Line 2099, Address: 0x239828, Func Offset: 0xc8
	// Line 2101, Address: 0x239830, Func Offset: 0xd0
	// Line 2102, Address: 0x239840, Func Offset: 0xe0
	// Line 2104, Address: 0x23984c, Func Offset: 0xec
	// Line 2105, Address: 0x239850, Func Offset: 0xf0
	// Func End, Address: 0x239860, Func Offset: 0x100
}

// 
// Start address: 0x239860
void EnemyPickgirlControlAppearFromWall(sfObj* obj)
{
	int r;
	// Line 2109, Address: 0x239860, Func Offset: 0
	// Line 2111, Address: 0x23986c, Func Offset: 0xc
	// Line 2112, Address: 0x23987c, Func Offset: 0x1c
	// Line 2113, Address: 0x239884, Func Offset: 0x24
	// Line 2115, Address: 0x239890, Func Offset: 0x30
	// Line 2118, Address: 0x2398a8, Func Offset: 0x48
	// Line 2115, Address: 0x2398ac, Func Offset: 0x4c
	// Line 2118, Address: 0x2398b0, Func Offset: 0x50
	// Line 2119, Address: 0x2398bc, Func Offset: 0x5c
	// Line 2121, Address: 0x2398e0, Func Offset: 0x80
	// Line 2122, Address: 0x2398ec, Func Offset: 0x8c
	// Line 2123, Address: 0x239900, Func Offset: 0xa0
	// Line 2125, Address: 0x239908, Func Offset: 0xa8
	// Line 2129, Address: 0x239910, Func Offset: 0xb0
	// Line 2130, Address: 0x239918, Func Offset: 0xb8
	// Line 2132, Address: 0x239924, Func Offset: 0xc4
	// Line 2133, Address: 0x239928, Func Offset: 0xc8
	// Func End, Address: 0x239938, Func Offset: 0xd8
}

// 
// Start address: 0x239940
int set_damage_anime(sfObj* obj, EnemyBattleDamage* bd, float dir, int down)
{
	EnemyPickgirlWork* ew;
	EnemyPickgirlAnime anime;
	int nextstep;
	float s;
	// Line 2138, Address: 0x239940, Func Offset: 0
	// Line 2143, Address: 0x239970, Func Offset: 0x30
	// Line 2146, Address: 0x239978, Func Offset: 0x38
	// Line 2143, Address: 0x23997c, Func Offset: 0x3c
	// Line 2145, Address: 0x239980, Func Offset: 0x40
	// Line 2144, Address: 0x239984, Func Offset: 0x44
	// Line 2146, Address: 0x239988, Func Offset: 0x48
	// Line 2147, Address: 0x23999c, Func Offset: 0x5c
	// Line 2148, Address: 0x2399c4, Func Offset: 0x84
	// Line 2149, Address: 0x2399c8, Func Offset: 0x88
	// Line 2150, Address: 0x2399e0, Func Offset: 0xa0
	// Line 2151, Address: 0x2399f4, Func Offset: 0xb4
	// Line 2153, Address: 0x239a08, Func Offset: 0xc8
	// Line 2160, Address: 0x239a10, Func Offset: 0xd0
	// Line 2162, Address: 0x239a18, Func Offset: 0xd8
	// Line 2166, Address: 0x239a20, Func Offset: 0xe0
	// Line 2168, Address: 0x239a28, Func Offset: 0xe8
	// Line 2169, Address: 0x239a30, Func Offset: 0xf0
	// Line 2172, Address: 0x239a38, Func Offset: 0xf8
	// Line 2177, Address: 0x239a40, Func Offset: 0x100
	// Line 2179, Address: 0x239a48, Func Offset: 0x108
	// Line 2180, Address: 0x239a50, Func Offset: 0x110
	// Line 2183, Address: 0x239a58, Func Offset: 0x118
	// Line 2188, Address: 0x239a60, Func Offset: 0x120
	// Line 2190, Address: 0x239a68, Func Offset: 0x128
	// Line 2194, Address: 0x239a70, Func Offset: 0x130
	// Line 2196, Address: 0x239a74, Func Offset: 0x134
	// Line 2198, Address: 0x239a7c, Func Offset: 0x13c
	// Line 2199, Address: 0x239a80, Func Offset: 0x140
	// Line 2201, Address: 0x239a88, Func Offset: 0x148
	// Line 2202, Address: 0x239a90, Func Offset: 0x150
	// Line 2205, Address: 0x239a98, Func Offset: 0x158
	// Line 2207, Address: 0x239aa0, Func Offset: 0x160
	// Line 2209, Address: 0x239aa8, Func Offset: 0x168
	// Line 2210, Address: 0x239ab0, Func Offset: 0x170
	// Line 2213, Address: 0x239ab4, Func Offset: 0x174
	// Line 2215, Address: 0x239abc, Func Offset: 0x17c
	// Line 2216, Address: 0x239ac0, Func Offset: 0x180
	// Line 2218, Address: 0x239ac8, Func Offset: 0x188
	// Line 2219, Address: 0x239acc, Func Offset: 0x18c
	// Line 2220, Address: 0x239ad8, Func Offset: 0x198
	// Line 2223, Address: 0x239adc, Func Offset: 0x19c
	// Line 2224, Address: 0x239ae4, Func Offset: 0x1a4
	// Line 2225, Address: 0x239ae8, Func Offset: 0x1a8
	// Line 2227, Address: 0x239b00, Func Offset: 0x1c0
	// Line 2228, Address: 0x239b08, Func Offset: 0x1c8
	// Line 2231, Address: 0x239b0c, Func Offset: 0x1cc
	// Line 2232, Address: 0x239b10, Func Offset: 0x1d0
	// Line 2233, Address: 0x239b1c, Func Offset: 0x1dc
	// Line 2234, Address: 0x239b20, Func Offset: 0x1e0
	// Line 2233, Address: 0x239b24, Func Offset: 0x1e4
	// Line 2234, Address: 0x239b28, Func Offset: 0x1e8
	// Line 2236, Address: 0x239b40, Func Offset: 0x200
	// Line 2237, Address: 0x239b58, Func Offset: 0x218
	// Line 2239, Address: 0x239b60, Func Offset: 0x220
	// Line 2242, Address: 0x239b80, Func Offset: 0x240
	// Line 2243, Address: 0x239b8c, Func Offset: 0x24c
	// Line 2244, Address: 0x239b90, Func Offset: 0x250
	// Line 2245, Address: 0x239b94, Func Offset: 0x254
	// Func End, Address: 0x239bbc, Func Offset: 0x27c
}

// 
// Start address: 0x239bc0
void EnemyPickgirlControlDamage(sfObj* obj)
{
	EnemyPickgirlWork* ew;
	float dt;
	float tlimit;
	EnemyBattleDamage bd;
	float dir[4];
	float rrot[4];
	int d;
	int nextstep;
	// Line 2249, Address: 0x239bc0, Func Offset: 0
	// Line 2252, Address: 0x239bd8, Func Offset: 0x18
	// Line 2253, Address: 0x239be0, Func Offset: 0x20
	// Line 2254, Address: 0x239bec, Func Offset: 0x2c
	// Line 2256, Address: 0x239c28, Func Offset: 0x68
	// Line 2257, Address: 0x239c30, Func Offset: 0x70
	// Line 2258, Address: 0x239c38, Func Offset: 0x78
	// Line 2259, Address: 0x239c40, Func Offset: 0x80
	// Line 2260, Address: 0x239c48, Func Offset: 0x88
	// Line 2261, Address: 0x239c50, Func Offset: 0x90
	// Line 2262, Address: 0x239c5c, Func Offset: 0x9c
	// Line 2263, Address: 0x239c64, Func Offset: 0xa4
	// Line 2264, Address: 0x239c70, Func Offset: 0xb0
	// Line 2265, Address: 0x239c7c, Func Offset: 0xbc
	// Line 2266, Address: 0x239c88, Func Offset: 0xc8
	// Line 2267, Address: 0x239c94, Func Offset: 0xd4
	// Line 2268, Address: 0x239ca0, Func Offset: 0xe0
	// Line 2269, Address: 0x239cac, Func Offset: 0xec
	// Line 2270, Address: 0x239cb4, Func Offset: 0xf4
	// Line 2271, Address: 0x239cbc, Func Offset: 0xfc
	// Line 2278, Address: 0x239cc4, Func Offset: 0x104
	// Line 2279, Address: 0x239cd0, Func Offset: 0x110
	// Line 2280, Address: 0x239ce0, Func Offset: 0x120
	// Line 2281, Address: 0x239ce8, Func Offset: 0x128
	// Line 2282, Address: 0x239cf0, Func Offset: 0x130
	// Line 2283, Address: 0x239d04, Func Offset: 0x144
	// Line 2284, Address: 0x239d08, Func Offset: 0x148
	// Line 2285, Address: 0x239d30, Func Offset: 0x170
	// Line 2286, Address: 0x239d48, Func Offset: 0x188
	// Line 2287, Address: 0x239d5c, Func Offset: 0x19c
	// Line 2288, Address: 0x239d6c, Func Offset: 0x1ac
	// Line 2289, Address: 0x239d84, Func Offset: 0x1c4
	// Line 2291, Address: 0x239d98, Func Offset: 0x1d8
	// Line 2292, Address: 0x239dbc, Func Offset: 0x1fc
	// Line 2293, Address: 0x239dd0, Func Offset: 0x210
	// Line 2294, Address: 0x239de0, Func Offset: 0x220
	// Line 2295, Address: 0x239dec, Func Offset: 0x22c
	// Line 2296, Address: 0x239dfc, Func Offset: 0x23c
	// Line 2297, Address: 0x239e08, Func Offset: 0x248
	// Line 2298, Address: 0x239e14, Func Offset: 0x254
	// Line 2299, Address: 0x239e20, Func Offset: 0x260
	// Line 2300, Address: 0x239e2c, Func Offset: 0x26c
	// Line 2303, Address: 0x239e48, Func Offset: 0x288
	// Line 2304, Address: 0x239e64, Func Offset: 0x2a4
	// Line 2305, Address: 0x239e6c, Func Offset: 0x2ac
	// Line 2306, Address: 0x239e78, Func Offset: 0x2b8
	// Line 2307, Address: 0x239e84, Func Offset: 0x2c4
	// Line 2308, Address: 0x239e90, Func Offset: 0x2d0
	// Line 2309, Address: 0x239e9c, Func Offset: 0x2dc
	// Line 2312, Address: 0x239ea0, Func Offset: 0x2e0
	// Line 2314, Address: 0x239ea8, Func Offset: 0x2e8
	// Line 2316, Address: 0x239ebc, Func Offset: 0x2fc
	// Line 2317, Address: 0x239ec4, Func Offset: 0x304
	// Line 2318, Address: 0x239ec8, Func Offset: 0x308
	// Line 2320, Address: 0x239ee0, Func Offset: 0x320
	// Line 2322, Address: 0x239ee8, Func Offset: 0x328
	// Line 2323, Address: 0x239eec, Func Offset: 0x32c
	// Line 2322, Address: 0x239ef0, Func Offset: 0x330
	// Line 2323, Address: 0x239ef8, Func Offset: 0x338
	// Line 2324, Address: 0x239f08, Func Offset: 0x348
	// Line 2325, Address: 0x239f24, Func Offset: 0x364
	// Line 2326, Address: 0x239f34, Func Offset: 0x374
	// Line 2327, Address: 0x239f40, Func Offset: 0x380
	// Line 2328, Address: 0x239f4c, Func Offset: 0x38c
	// Line 2329, Address: 0x239f58, Func Offset: 0x398
	// Line 2330, Address: 0x239f64, Func Offset: 0x3a4
	// Line 2331, Address: 0x239f70, Func Offset: 0x3b0
	// Line 2332, Address: 0x239f7c, Func Offset: 0x3bc
	// Line 2335, Address: 0x239f88, Func Offset: 0x3c8
	// Line 2337, Address: 0x239f90, Func Offset: 0x3d0
	// Line 2338, Address: 0x239fa0, Func Offset: 0x3e0
	// Line 2337, Address: 0x239fa4, Func Offset: 0x3e4
	// Line 2338, Address: 0x239fb0, Func Offset: 0x3f0
	// Line 2337, Address: 0x239fb4, Func Offset: 0x3f4
	// Line 2338, Address: 0x239fb8, Func Offset: 0x3f8
	// Line 2339, Address: 0x239fc4, Func Offset: 0x404
	// Line 2343, Address: 0x239fd0, Func Offset: 0x410
	// Func End, Address: 0x239fec, Func Offset: 0x42c
}

// 
// Start address: 0x239ff0
void EnemyPickgirlControlDown(sfObj* obj)
{
	EnemyPickgirlWork* ew;
	float dt;
	float t;
	// Line 2347, Address: 0x239ff0, Func Offset: 0
	// Line 2350, Address: 0x23a008, Func Offset: 0x18
	// Line 2351, Address: 0x23a010, Func Offset: 0x20
	// Line 2352, Address: 0x23a01c, Func Offset: 0x2c
	// Line 2356, Address: 0x23a070, Func Offset: 0x80
	// Line 2357, Address: 0x23a084, Func Offset: 0x94
	// Line 2358, Address: 0x23a0b0, Func Offset: 0xc0
	// Line 2360, Address: 0x23a0cc, Func Offset: 0xdc
	// Line 2361, Address: 0x23a0e8, Func Offset: 0xf8
	// Line 2362, Address: 0x23a10c, Func Offset: 0x11c
	// Line 2364, Address: 0x23a148, Func Offset: 0x158
	// Line 2365, Address: 0x23a154, Func Offset: 0x164
	// Line 2366, Address: 0x23a160, Func Offset: 0x170
	// Line 2367, Address: 0x23a18c, Func Offset: 0x19c
	// Line 2368, Address: 0x23a190, Func Offset: 0x1a0
	// Line 2369, Address: 0x23a1a4, Func Offset: 0x1b4
	// Line 2370, Address: 0x23a1b4, Func Offset: 0x1c4
	// Line 2371, Address: 0x23a1c0, Func Offset: 0x1d0
	// Line 2372, Address: 0x23a1cc, Func Offset: 0x1dc
	// Line 2373, Address: 0x23a1d8, Func Offset: 0x1e8
	// Line 2374, Address: 0x23a1e4, Func Offset: 0x1f4
	// Line 2375, Address: 0x23a200, Func Offset: 0x210
	// Line 2376, Address: 0x23a208, Func Offset: 0x218
	// Line 2377, Address: 0x23a210, Func Offset: 0x220
	// Line 2380, Address: 0x23a250, Func Offset: 0x260
	// Line 2381, Address: 0x23a258, Func Offset: 0x268
	// Line 2383, Address: 0x23a260, Func Offset: 0x270
	// Line 2384, Address: 0x23a26c, Func Offset: 0x27c
	// Line 2386, Address: 0x23a270, Func Offset: 0x280
	// Line 2387, Address: 0x23a280, Func Offset: 0x290
	// Line 2389, Address: 0x23a288, Func Offset: 0x298
	// Line 2390, Address: 0x23a2a4, Func Offset: 0x2b4
	// Line 2392, Address: 0x23a2ec, Func Offset: 0x2fc
	// Line 2393, Address: 0x23a2f4, Func Offset: 0x304
	// Line 2394, Address: 0x23a2fc, Func Offset: 0x30c
	// Line 2395, Address: 0x23a300, Func Offset: 0x310
	// Line 2397, Address: 0x23a330, Func Offset: 0x340
	// Line 2398, Address: 0x23a33c, Func Offset: 0x34c
	// Line 2399, Address: 0x23a340, Func Offset: 0x350
	// Line 2398, Address: 0x23a344, Func Offset: 0x354
	// Line 2399, Address: 0x23a348, Func Offset: 0x358
	// Line 2401, Address: 0x23a354, Func Offset: 0x364
	// Line 2402, Address: 0x23a384, Func Offset: 0x394
	// Line 2404, Address: 0x23a3cc, Func Offset: 0x3dc
	// Line 2405, Address: 0x23a3d4, Func Offset: 0x3e4
	// Line 2406, Address: 0x23a3dc, Func Offset: 0x3ec
	// Line 2407, Address: 0x23a3e0, Func Offset: 0x3f0
	// Line 2408, Address: 0x23a40c, Func Offset: 0x41c
	// Line 2409, Address: 0x23a418, Func Offset: 0x428
	// Line 2411, Address: 0x23a424, Func Offset: 0x434
	// Line 2412, Address: 0x23a42c, Func Offset: 0x43c
	// Line 2413, Address: 0x23a430, Func Offset: 0x440
	// Line 2414, Address: 0x23a44c, Func Offset: 0x45c
	// Line 2416, Address: 0x23a480, Func Offset: 0x490
	// Line 2417, Address: 0x23a488, Func Offset: 0x498
	// Line 2418, Address: 0x23a48c, Func Offset: 0x49c
	// Line 2417, Address: 0x23a490, Func Offset: 0x4a0
	// Line 2418, Address: 0x23a494, Func Offset: 0x4a4
	// Line 2419, Address: 0x23a4a0, Func Offset: 0x4b0
	// Line 2420, Address: 0x23a4a8, Func Offset: 0x4b8
	// Line 2421, Address: 0x23a4d4, Func Offset: 0x4e4
	// Line 2423, Address: 0x23a4e0, Func Offset: 0x4f0
	// Line 2425, Address: 0x23a50c, Func Offset: 0x51c
	// Line 2427, Address: 0x23a514, Func Offset: 0x524
	// Line 2428, Address: 0x23a51c, Func Offset: 0x52c
	// Line 2429, Address: 0x23a520, Func Offset: 0x530
	// Line 2430, Address: 0x23a53c, Func Offset: 0x54c
	// Line 2431, Address: 0x23a548, Func Offset: 0x558
	// Line 2433, Address: 0x23a550, Func Offset: 0x560
	// Line 2435, Address: 0x23a558, Func Offset: 0x568
	// Line 2437, Address: 0x23a574, Func Offset: 0x584
	// Line 2438, Address: 0x23a57c, Func Offset: 0x58c
	// Line 2439, Address: 0x23a580, Func Offset: 0x590
	// Line 2440, Address: 0x23a590, Func Offset: 0x5a0
	// Line 2441, Address: 0x23a598, Func Offset: 0x5a8
	// Line 2442, Address: 0x23a5b4, Func Offset: 0x5c4
	// Line 2444, Address: 0x23a5b8, Func Offset: 0x5c8
	// Line 2445, Address: 0x23a5cc, Func Offset: 0x5dc
	// Line 2447, Address: 0x23a5d4, Func Offset: 0x5e4
	// Line 2448, Address: 0x23a5e0, Func Offset: 0x5f0
	// Line 2449, Address: 0x23a5e4, Func Offset: 0x5f4
	// Line 2450, Address: 0x23a5e8, Func Offset: 0x5f8
	// Func End, Address: 0x23a604, Func Offset: 0x614
}

// 
// Start address: 0x23a610
void EnemyPickgirlControlRise(sfObj* obj)
{
	// Line 2454, Address: 0x23a610, Func Offset: 0
	// Line 2455, Address: 0x23a61c, Func Offset: 0xc
	// Line 2457, Address: 0x23a640, Func Offset: 0x30
	// Line 2458, Address: 0x23a64c, Func Offset: 0x3c
	// Line 2459, Address: 0x23a658, Func Offset: 0x48
	// Line 2460, Address: 0x23a668, Func Offset: 0x58
	// Line 2461, Address: 0x23a678, Func Offset: 0x68
	// Line 2462, Address: 0x23a680, Func Offset: 0x70
	// Line 2463, Address: 0x23a68c, Func Offset: 0x7c
	// Line 2464, Address: 0x23a698, Func Offset: 0x88
	// Line 2465, Address: 0x23a6a4, Func Offset: 0x94
	// Line 2466, Address: 0x23a6b0, Func Offset: 0xa0
	// Line 2467, Address: 0x23a6bc, Func Offset: 0xac
	// Line 2468, Address: 0x23a6c4, Func Offset: 0xb4
	// Line 2469, Address: 0x23a6cc, Func Offset: 0xbc
	// Line 2470, Address: 0x23a6d0, Func Offset: 0xc0
	// Line 2474, Address: 0x23a6e8, Func Offset: 0xd8
	// Func End, Address: 0x23a6f8, Func Offset: 0xe8
}

// 
// Start address: 0x23a700
void EnemyPickgirlControlExorcismDown(sfObj* obj)
{
	EnemyPickgirlWork* ew;
	float dt;
	// Line 2478, Address: 0x23a700, Func Offset: 0
	// Line 2481, Address: 0x23a714, Func Offset: 0x14
	// Line 2482, Address: 0x23a71c, Func Offset: 0x1c
	// Line 2483, Address: 0x23a728, Func Offset: 0x28
	// Line 2485, Address: 0x23a768, Func Offset: 0x68
	// Line 2486, Address: 0x23a770, Func Offset: 0x70
	// Line 2487, Address: 0x23a778, Func Offset: 0x78
	// Line 2488, Address: 0x23a780, Func Offset: 0x80
	// Line 2489, Address: 0x23a788, Func Offset: 0x88
	// Line 2490, Address: 0x23a790, Func Offset: 0x90
	// Line 2491, Address: 0x23a79c, Func Offset: 0x9c
	// Line 2492, Address: 0x23a7a8, Func Offset: 0xa8
	// Line 2493, Address: 0x23a7b8, Func Offset: 0xb8
	// Line 2494, Address: 0x23a7c4, Func Offset: 0xc4
	// Line 2495, Address: 0x23a7d0, Func Offset: 0xd0
	// Line 2496, Address: 0x23a7dc, Func Offset: 0xdc
	// Line 2497, Address: 0x23a7e8, Func Offset: 0xe8
	// Line 2498, Address: 0x23a7fc, Func Offset: 0xfc
	// Line 2499, Address: 0x23a80c, Func Offset: 0x10c
	// Line 2500, Address: 0x23a818, Func Offset: 0x118
	// Line 2501, Address: 0x23a820, Func Offset: 0x120
	// Line 2502, Address: 0x23a82c, Func Offset: 0x12c
	// Line 2503, Address: 0x23a834, Func Offset: 0x134
	// Line 2504, Address: 0x23a83c, Func Offset: 0x13c
	// Line 2505, Address: 0x23a844, Func Offset: 0x144
	// Line 2506, Address: 0x23a84c, Func Offset: 0x14c
	// Line 2507, Address: 0x23a858, Func Offset: 0x158
	// Line 2509, Address: 0x23a85c, Func Offset: 0x15c
	// Line 2510, Address: 0x23a868, Func Offset: 0x168
	// Line 2512, Address: 0x23a870, Func Offset: 0x170
	// Line 2513, Address: 0x23a890, Func Offset: 0x190
	// Line 2514, Address: 0x23a89c, Func Offset: 0x19c
	// Line 2515, Address: 0x23a8a8, Func Offset: 0x1a8
	// Line 2516, Address: 0x23a8c4, Func Offset: 0x1c4
	// Line 2518, Address: 0x23a8e8, Func Offset: 0x1e8
	// Line 2519, Address: 0x23a8f0, Func Offset: 0x1f0
	// Line 2520, Address: 0x23a90c, Func Offset: 0x20c
	// Line 2521, Address: 0x23a910, Func Offset: 0x210
	// Line 2523, Address: 0x23a918, Func Offset: 0x218
	// Line 2525, Address: 0x23a920, Func Offset: 0x220
	// Line 2526, Address: 0x23a93c, Func Offset: 0x23c
	// Line 2527, Address: 0x23a944, Func Offset: 0x244
	// Line 2528, Address: 0x23a948, Func Offset: 0x248
	// Line 2527, Address: 0x23a94c, Func Offset: 0x24c
	// Line 2528, Address: 0x23a950, Func Offset: 0x250
	// Line 2530, Address: 0x23a95c, Func Offset: 0x25c
	// Line 2531, Address: 0x23a964, Func Offset: 0x264
	// Line 2532, Address: 0x23a968, Func Offset: 0x268
	// Line 2533, Address: 0x23a984, Func Offset: 0x284
	// Line 2534, Address: 0x23a990, Func Offset: 0x290
	// Line 2536, Address: 0x23a998, Func Offset: 0x298
	// Line 2538, Address: 0x23a9a0, Func Offset: 0x2a0
	// Line 2540, Address: 0x23a9bc, Func Offset: 0x2bc
	// Line 2541, Address: 0x23a9c4, Func Offset: 0x2c4
	// Line 2542, Address: 0x23a9c8, Func Offset: 0x2c8
	// Line 2543, Address: 0x23a9f0, Func Offset: 0x2f0
	// Line 2544, Address: 0x23a9f8, Func Offset: 0x2f8
	// Line 2545, Address: 0x23aa18, Func Offset: 0x318
	// Line 2546, Address: 0x23aa2c, Func Offset: 0x32c
	// Line 2548, Address: 0x23aa30, Func Offset: 0x330
	// Line 2549, Address: 0x23aa48, Func Offset: 0x348
	// Line 2552, Address: 0x23aa50, Func Offset: 0x350
	// Line 2553, Address: 0x23aa60, Func Offset: 0x360
	// Line 2554, Address: 0x23aa80, Func Offset: 0x380
	// Line 2556, Address: 0x23aa88, Func Offset: 0x388
	// Line 2557, Address: 0x23aa90, Func Offset: 0x390
	// Line 2558, Address: 0x23aa94, Func Offset: 0x394
	// Line 2559, Address: 0x23aa98, Func Offset: 0x398
	// Func End, Address: 0x23aab0, Func Offset: 0x3b0
}

// 
// Start address: 0x23aab0
void EnemyPickgirlControlCrawlDamage(sfObj* obj)
{
	EnemyPickgirlWork* ew;
	EnemyBattleDamage bd;
	int d;
	// Line 2563, Address: 0x23aab0, Func Offset: 0
	// Line 2565, Address: 0x23aac8, Func Offset: 0x18
	// Line 2566, Address: 0x23aad4, Func Offset: 0x24
	// Line 2567, Address: 0x23ab0c, Func Offset: 0x5c
	// Line 2568, Address: 0x23ab10, Func Offset: 0x60
	// Line 2569, Address: 0x23ab1c, Func Offset: 0x6c
	// Line 2573, Address: 0x23ab28, Func Offset: 0x78
	// Line 2574, Address: 0x23ab38, Func Offset: 0x88
	// Line 2576, Address: 0x23ab48, Func Offset: 0x98
	// Line 2577, Address: 0x23ab5c, Func Offset: 0xac
	// Line 2578, Address: 0x23ab60, Func Offset: 0xb0
	// Line 2579, Address: 0x23ab70, Func Offset: 0xc0
	// Line 2580, Address: 0x23ab78, Func Offset: 0xc8
	// Line 2581, Address: 0x23ab80, Func Offset: 0xd0
	// Line 2582, Address: 0x23ab94, Func Offset: 0xe4
	// Line 2583, Address: 0x23ab98, Func Offset: 0xe8
	// Line 2584, Address: 0x23abbc, Func Offset: 0x10c
	// Line 2585, Address: 0x23abd0, Func Offset: 0x120
	// Line 2586, Address: 0x23abd8, Func Offset: 0x128
	// Line 2587, Address: 0x23abe0, Func Offset: 0x130
	// Line 2588, Address: 0x23abec, Func Offset: 0x13c
	// Line 2589, Address: 0x23abf0, Func Offset: 0x140
	// Line 2590, Address: 0x23abf8, Func Offset: 0x148
	// Line 2591, Address: 0x23ac00, Func Offset: 0x150
	// Line 2592, Address: 0x23ac0c, Func Offset: 0x15c
	// Line 2594, Address: 0x23ac48, Func Offset: 0x198
	// Line 2595, Address: 0x23ac64, Func Offset: 0x1b4
	// Line 2596, Address: 0x23ac6c, Func Offset: 0x1bc
	// Line 2597, Address: 0x23ac70, Func Offset: 0x1c0
	// Line 2598, Address: 0x23ac7c, Func Offset: 0x1cc
	// Line 2599, Address: 0x23ac88, Func Offset: 0x1d8
	// Line 2602, Address: 0x23ac90, Func Offset: 0x1e0
	// Line 2604, Address: 0x23ac98, Func Offset: 0x1e8
	// Line 2606, Address: 0x23acb0, Func Offset: 0x200
	// Line 2608, Address: 0x23acb8, Func Offset: 0x208
	// Line 2609, Address: 0x23acd0, Func Offset: 0x220
	// Line 2611, Address: 0x23acd8, Func Offset: 0x228
	// Line 2613, Address: 0x23ace0, Func Offset: 0x230
	// Line 2614, Address: 0x23acf8, Func Offset: 0x248
	// Line 2615, Address: 0x23ad00, Func Offset: 0x250
	// Line 2618, Address: 0x23ad0c, Func Offset: 0x25c
	// Line 2619, Address: 0x23ad10, Func Offset: 0x260
	// Func End, Address: 0x23ad2c, Func Offset: 0x27c
}

// 
// Start address: 0x23ad30
void EnemyPickgirlControlFinished(sfObj* obj)
{
	EnemyPickgirlWork* ew;
	// Line 2623, Address: 0x23ad30, Func Offset: 0
	// Line 2625, Address: 0x23ad40, Func Offset: 0x10
	// Line 2626, Address: 0x23ad4c, Func Offset: 0x1c
	// Line 2627, Address: 0x23ad8c, Func Offset: 0x5c
	// Line 2628, Address: 0x23ad90, Func Offset: 0x60
	// Line 2630, Address: 0x23ad9c, Func Offset: 0x6c
	// Line 2631, Address: 0x23ada0, Func Offset: 0x70
	// Line 2632, Address: 0x23adac, Func Offset: 0x7c
	// Line 2633, Address: 0x23adbc, Func Offset: 0x8c
	// Line 2634, Address: 0x23adc8, Func Offset: 0x98
	// Line 2635, Address: 0x23add4, Func Offset: 0xa4
	// Line 2636, Address: 0x23ade8, Func Offset: 0xb8
	// Line 2637, Address: 0x23adec, Func Offset: 0xbc
	// Line 2636, Address: 0x23adf0, Func Offset: 0xc0
	// Line 2637, Address: 0x23adf4, Func Offset: 0xc4
	// Line 2638, Address: 0x23adfc, Func Offset: 0xcc
	// Line 2639, Address: 0x23ae04, Func Offset: 0xd4
	// Line 2640, Address: 0x23ae08, Func Offset: 0xd8
	// Line 2643, Address: 0x23ae10, Func Offset: 0xe0
	// Line 2644, Address: 0x23ae20, Func Offset: 0xf0
	// Line 2645, Address: 0x23ae28, Func Offset: 0xf8
	// Line 2646, Address: 0x23ae34, Func Offset: 0x104
	// Line 2649, Address: 0x23ae3c, Func Offset: 0x10c
	// Line 2650, Address: 0x23ae40, Func Offset: 0x110
	// Line 2651, Address: 0x23ae50, Func Offset: 0x120
	// Line 2652, Address: 0x23ae58, Func Offset: 0x128
	// Line 2654, Address: 0x23ae64, Func Offset: 0x134
	// Line 2655, Address: 0x23ae70, Func Offset: 0x140
	// Line 2656, Address: 0x23ae7c, Func Offset: 0x14c
	// Line 2657, Address: 0x23ae88, Func Offset: 0x158
	// Line 2659, Address: 0x23aec8, Func Offset: 0x198
	// Line 2661, Address: 0x23aed8, Func Offset: 0x1a8
	// Line 2663, Address: 0x23aee4, Func Offset: 0x1b4
	// Line 2664, Address: 0x23aeec, Func Offset: 0x1bc
	// Line 2665, Address: 0x23aef0, Func Offset: 0x1c0
	// Line 2666, Address: 0x23af14, Func Offset: 0x1e4
	// Line 2667, Address: 0x23af20, Func Offset: 0x1f0
	// Line 2668, Address: 0x23af2c, Func Offset: 0x1fc
	// Line 2672, Address: 0x23af38, Func Offset: 0x208
	// Func End, Address: 0x23af4c, Func Offset: 0x21c
}

// 
// Start address: 0x23af50
void EnemyPickgirlControlEvent(sfObj* obj)
{
	// Line 2676, Address: 0x23af50, Func Offset: 0
	// Line 2677, Address: 0x23af5c, Func Offset: 0xc
	// Line 2678, Address: 0x23af6c, Func Offset: 0x1c
	// Line 2679, Address: 0x23af74, Func Offset: 0x24
	// Line 2680, Address: 0x23af80, Func Offset: 0x30
	// Line 2681, Address: 0x23af90, Func Offset: 0x40
	// Line 2682, Address: 0x23af9c, Func Offset: 0x4c
	// Line 2683, Address: 0x23afa0, Func Offset: 0x50
	// Func End, Address: 0x23afb0, Func Offset: 0x60
}

// 
// Start address: 0x23afb0
void EnemyPickgirlControlWait(sfObj* obj)
{
	float* pos;
	float* ppos;
	// Line 2687, Address: 0x23afb0, Func Offset: 0
	// Line 2689, Address: 0x23afc4, Func Offset: 0x14
	// Line 2690, Address: 0x23afd0, Func Offset: 0x20
	// Line 2691, Address: 0x23afdc, Func Offset: 0x2c
	// Line 2693, Address: 0x23b000, Func Offset: 0x50
	// Line 2694, Address: 0x23b00c, Func Offset: 0x5c
	// Line 2695, Address: 0x23b018, Func Offset: 0x68
	// Line 2696, Address: 0x23b028, Func Offset: 0x78
	// Line 2697, Address: 0x23b034, Func Offset: 0x84
	// Line 2698, Address: 0x23b03c, Func Offset: 0x8c
	// Line 2699, Address: 0x23b048, Func Offset: 0x98
	// Line 2700, Address: 0x23b054, Func Offset: 0xa4
	// Line 2701, Address: 0x23b060, Func Offset: 0xb0
	// Line 2702, Address: 0x23b068, Func Offset: 0xb8
	// Line 2703, Address: 0x23b070, Func Offset: 0xc0
	// Line 2705, Address: 0x23b078, Func Offset: 0xc8
	// Line 2708, Address: 0x23b0b0, Func Offset: 0x100
	// Line 2712, Address: 0x23b0b8, Func Offset: 0x108
	// Line 2715, Address: 0x23b0e0, Func Offset: 0x130
	// Func End, Address: 0x23b0f8, Func Offset: 0x148
}

// 
// Start address: 0x23b100
void EnemyPickgirlControlFlagWait(sfObj* obj)
{
	// Line 2719, Address: 0x23b100, Func Offset: 0
	// Line 2720, Address: 0x23b10c, Func Offset: 0xc
	// Line 2721, Address: 0x23b11c, Func Offset: 0x1c
	// Line 2722, Address: 0x23b124, Func Offset: 0x24
	// Line 2723, Address: 0x23b134, Func Offset: 0x34
	// Line 2725, Address: 0x23b140, Func Offset: 0x40
	// Func End, Address: 0x23b150, Func Offset: 0x50
}

// 
// Start address: 0x23b150
void EnemyPickgirlSetExtentDamage(sfObj* obj)
{
	EnemyPickgirlAnime anime;
	float d;
	// Line 2731, Address: 0x23b150, Func Offset: 0
	// Line 2733, Address: 0x23b154, Func Offset: 0x4
	// Line 2731, Address: 0x23b158, Func Offset: 0x8
	// Line 2733, Address: 0x23b164, Func Offset: 0x14
	// Line 2734, Address: 0x23b168, Func Offset: 0x18
	// Line 2735, Address: 0x23b184, Func Offset: 0x34
	// Line 2736, Address: 0x23b188, Func Offset: 0x38
	// Line 2739, Address: 0x23b190, Func Offset: 0x40
	// Line 2741, Address: 0x23b1c0, Func Offset: 0x70
	// Line 2742, Address: 0x23b1cc, Func Offset: 0x7c
	// Line 2755, Address: 0x23b1f4, Func Offset: 0xa4
	// Line 2756, Address: 0x23b1f8, Func Offset: 0xa8
	// Line 2760, Address: 0x23b218, Func Offset: 0xc8
	// Func End, Address: 0x23b22c, Func Offset: 0xdc
}

// 
// Start address: 0x23b230
void EnemyPickgirlCheckExorcismDamage(sfObj* obj)
{
	EnemyPickgirlWork* ew;
	float d;
	// Line 2764, Address: 0x23b230, Func Offset: 0
	// Line 2767, Address: 0x23b240, Func Offset: 0x10
	// Line 2768, Address: 0x23b24c, Func Offset: 0x1c
	// Line 2769, Address: 0x23b254, Func Offset: 0x24
	// Line 2770, Address: 0x23b268, Func Offset: 0x38
	// Line 2771, Address: 0x23b26c, Func Offset: 0x3c
	// Line 2770, Address: 0x23b270, Func Offset: 0x40
	// Line 2771, Address: 0x23b27c, Func Offset: 0x4c
	// Line 2772, Address: 0x23b298, Func Offset: 0x68
	// Line 2775, Address: 0x23b2b0, Func Offset: 0x80
	// Line 2777, Address: 0x23b2f0, Func Offset: 0xc0
	// Line 2778, Address: 0x23b2f8, Func Offset: 0xc8
	// Line 2779, Address: 0x23b318, Func Offset: 0xe8
	// Line 2781, Address: 0x23b320, Func Offset: 0xf0
	// Line 2782, Address: 0x23b334, Func Offset: 0x104
	// Line 2783, Address: 0x23b340, Func Offset: 0x110
	// Line 2785, Address: 0x23b34c, Func Offset: 0x11c
	// Line 2788, Address: 0x23b354, Func Offset: 0x124
	// Line 2789, Address: 0x23b358, Func Offset: 0x128
	// Line 2790, Address: 0x23b36c, Func Offset: 0x13c
	// Line 2791, Address: 0x23b378, Func Offset: 0x148
	// Line 2792, Address: 0x23b384, Func Offset: 0x154
	// Line 2793, Address: 0x23b390, Func Offset: 0x160
	// Line 2795, Address: 0x23b39c, Func Offset: 0x16c
	// Line 2796, Address: 0x23b3a4, Func Offset: 0x174
	// Line 2797, Address: 0x23b3a8, Func Offset: 0x178
	// Line 2802, Address: 0x23b3b8, Func Offset: 0x188
	// Line 2804, Address: 0x23b3c4, Func Offset: 0x194
	// Line 2805, Address: 0x23b3d0, Func Offset: 0x1a0
	// Line 2807, Address: 0x23b3d8, Func Offset: 0x1a8
	// Line 2808, Address: 0x23b3f4, Func Offset: 0x1c4
	// Line 2809, Address: 0x23b400, Func Offset: 0x1d0
	// Line 2810, Address: 0x23b41c, Func Offset: 0x1ec
	// Line 2811, Address: 0x23b420, Func Offset: 0x1f0
	// Func End, Address: 0x23b434, Func Offset: 0x204
}

// 
// Start address: 0x23b440
void EnemyPickgirlSetEventPlayerCheck(sfObj* obj)
{
	EnemyPickgirlWork* ew;
	EnemySenseData* es;
	// Line 2818, Address: 0x23b440, Func Offset: 0
	// Line 2822, Address: 0x23b450, Func Offset: 0x10
	// Line 2823, Address: 0x23b458, Func Offset: 0x18
	// Line 2824, Address: 0x23b45c, Func Offset: 0x1c
	// Line 2825, Address: 0x23b468, Func Offset: 0x28
	// Line 2828, Address: 0x23b474, Func Offset: 0x34
	// Line 2826, Address: 0x23b478, Func Offset: 0x38
	// Line 2828, Address: 0x23b480, Func Offset: 0x40
	// Line 2829, Address: 0x23b4ac, Func Offset: 0x6c
	// Line 2830, Address: 0x23b4b0, Func Offset: 0x70
	// Line 2831, Address: 0x23b4c0, Func Offset: 0x80
	// Line 2832, Address: 0x23b4c4, Func Offset: 0x84
	// Line 2831, Address: 0x23b4c8, Func Offset: 0x88
	// Line 2833, Address: 0x23b4cc, Func Offset: 0x8c
	// Line 2832, Address: 0x23b4d0, Func Offset: 0x90
	// Line 2833, Address: 0x23b4d4, Func Offset: 0x94
	// Line 2834, Address: 0x23b4d8, Func Offset: 0x98
	// Line 2835, Address: 0x23b4e0, Func Offset: 0xa0
	// Line 2836, Address: 0x23b4e8, Func Offset: 0xa8
	// Line 2837, Address: 0x23b4f0, Func Offset: 0xb0
	// Line 2838, Address: 0x23b4fc, Func Offset: 0xbc
	// Line 2840, Address: 0x23b500, Func Offset: 0xc0
	// Line 2842, Address: 0x23b51c, Func Offset: 0xdc
	// Line 2843, Address: 0x23b524, Func Offset: 0xe4
	// Line 2844, Address: 0x23b528, Func Offset: 0xe8
	// Line 2847, Address: 0x23b530, Func Offset: 0xf0
	// Line 2845, Address: 0x23b534, Func Offset: 0xf4
	// Line 2846, Address: 0x23b53c, Func Offset: 0xfc
	// Line 2847, Address: 0x23b544, Func Offset: 0x104
	// Line 2848, Address: 0x23b558, Func Offset: 0x118
	// Line 2849, Address: 0x23b55c, Func Offset: 0x11c
	// Line 2850, Address: 0x23b568, Func Offset: 0x128
	// Line 2851, Address: 0x23b56c, Func Offset: 0x12c
	// Line 2852, Address: 0x23b570, Func Offset: 0x130
	// Line 2854, Address: 0x23b58c, Func Offset: 0x14c
	// Line 2855, Address: 0x23b594, Func Offset: 0x154
	// Line 2856, Address: 0x23b598, Func Offset: 0x158
	// Line 2857, Address: 0x23b5a8, Func Offset: 0x168
	// Line 2858, Address: 0x23b5ac, Func Offset: 0x16c
	// Line 2857, Address: 0x23b5b0, Func Offset: 0x170
	// Line 2859, Address: 0x23b5b4, Func Offset: 0x174
	// Line 2858, Address: 0x23b5b8, Func Offset: 0x178
	// Line 2859, Address: 0x23b5bc, Func Offset: 0x17c
	// Line 2860, Address: 0x23b5c0, Func Offset: 0x180
	// Line 2861, Address: 0x23b5c8, Func Offset: 0x188
	// Line 2862, Address: 0x23b5d0, Func Offset: 0x190
	// Line 2863, Address: 0x23b5d8, Func Offset: 0x198
	// Line 2864, Address: 0x23b5e4, Func Offset: 0x1a4
	// Line 2866, Address: 0x23b5e8, Func Offset: 0x1a8
	// Line 2868, Address: 0x23b604, Func Offset: 0x1c4
	// Line 2869, Address: 0x23b60c, Func Offset: 0x1cc
	// Line 2870, Address: 0x23b610, Func Offset: 0x1d0
	// Line 2871, Address: 0x23b618, Func Offset: 0x1d8
	// Line 2872, Address: 0x23b61c, Func Offset: 0x1dc
	// Line 2874, Address: 0x23b620, Func Offset: 0x1e0
	// Line 2871, Address: 0x23b624, Func Offset: 0x1e4
	// Line 2872, Address: 0x23b628, Func Offset: 0x1e8
	// Line 2874, Address: 0x23b630, Func Offset: 0x1f0
	// Line 2873, Address: 0x23b634, Func Offset: 0x1f4
	// Line 2874, Address: 0x23b638, Func Offset: 0x1f8
	// Line 2873, Address: 0x23b63c, Func Offset: 0x1fc
	// Line 2874, Address: 0x23b640, Func Offset: 0x200
	// Line 2877, Address: 0x23b64c, Func Offset: 0x20c
	// Line 2879, Address: 0x23b650, Func Offset: 0x210
	// Func End, Address: 0x23b664, Func Offset: 0x224
}

// 
// Start address: 0x23b670
void EnemyPickgirlSetEventAttackCheck(sfObj* obj)
{
	EnemyPickgirlWork* ew;
	EnemySenseData* es;
	// Line 2883, Address: 0x23b670, Func Offset: 0
	// Line 2887, Address: 0x23b680, Func Offset: 0x10
	// Line 2888, Address: 0x23b688, Func Offset: 0x18
	// Line 2889, Address: 0x23b68c, Func Offset: 0x1c
	// Line 2890, Address: 0x23b698, Func Offset: 0x28
	// Line 2891, Address: 0x23b6a4, Func Offset: 0x34
	// Line 2892, Address: 0x23b6ac, Func Offset: 0x3c
	// Line 2891, Address: 0x23b6b4, Func Offset: 0x44
	// Line 2893, Address: 0x23b6b8, Func Offset: 0x48
	// Line 2897, Address: 0x23b6bc, Func Offset: 0x4c
	// Line 2892, Address: 0x23b6c0, Func Offset: 0x50
	// Line 2893, Address: 0x23b6c4, Func Offset: 0x54
	// Line 2897, Address: 0x23b6cc, Func Offset: 0x5c
	// Line 2894, Address: 0x23b6d0, Func Offset: 0x60
	// Line 2897, Address: 0x23b6d4, Func Offset: 0x64
	// Line 2894, Address: 0x23b6d8, Func Offset: 0x68
	// Line 2897, Address: 0x23b6dc, Func Offset: 0x6c
	// Line 2895, Address: 0x23b6e0, Func Offset: 0x70
	// Line 2897, Address: 0x23b6e4, Func Offset: 0x74
	// Line 2900, Address: 0x23b6f0, Func Offset: 0x80
	// Func End, Address: 0x23b704, Func Offset: 0x94
}

// 
// Start address: 0x23b710
void EnemyPickgirlSetEventDamageCheck(sfObj* obj)
{
	EnemyPickgirlWork* ew;
	// Line 2904, Address: 0x23b710, Func Offset: 0
	// Line 2906, Address: 0x23b720, Func Offset: 0x10
	// Line 2908, Address: 0x23b750, Func Offset: 0x40
	// Line 2910, Address: 0x23b76c, Func Offset: 0x5c
	// Line 2911, Address: 0x23b774, Func Offset: 0x64
	// Line 2912, Address: 0x23b778, Func Offset: 0x68
	// Line 2913, Address: 0x23b784, Func Offset: 0x74
	// Line 2915, Address: 0x23b7b0, Func Offset: 0xa0
	// Line 2926, Address: 0x23b7c0, Func Offset: 0xb0
	// Line 2928, Address: 0x23b7d8, Func Offset: 0xc8
	// Line 2932, Address: 0x23b7e0, Func Offset: 0xd0
	// Line 2935, Address: 0x23b820, Func Offset: 0x110
	// Line 2937, Address: 0x23b838, Func Offset: 0x128
	// Line 2938, Address: 0x23b840, Func Offset: 0x130
	// Line 2941, Address: 0x23b858, Func Offset: 0x148
	// Line 2943, Address: 0x23b860, Func Offset: 0x150
	// Line 2945, Address: 0x23b87c, Func Offset: 0x16c
	// Line 2947, Address: 0x23b884, Func Offset: 0x174
	// Line 2948, Address: 0x23b888, Func Offset: 0x178
	// Line 2950, Address: 0x23b8a4, Func Offset: 0x194
	// Line 2952, Address: 0x23b8c0, Func Offset: 0x1b0
	// Line 2957, Address: 0x23b8c8, Func Offset: 0x1b8
	// Line 2961, Address: 0x23b8e0, Func Offset: 0x1d0
	// Func End, Address: 0x23b8f4, Func Offset: 0x1e4
}

// 
// Start address: 0x23b900
void EnemyEDPickgirlWanderResetTarget(void* obj)
{
	// Line 2967, Address: 0x23b900, Func Offset: 0
	// Line 2968, Address: 0x23b90c, Func Offset: 0xc
	// Line 2969, Address: 0x23b91c, Func Offset: 0x1c
	// Line 2970, Address: 0x23b924, Func Offset: 0x24
	// Func End, Address: 0x23b938, Func Offset: 0x38
}

// 
// Start address: 0x23b940
void EnemyEDPickgirlCrawlResetTarget(void* obj)
{
	// Line 2974, Address: 0x23b940, Func Offset: 0
	// Line 2975, Address: 0x23b94c, Func Offset: 0xc
	// Line 2976, Address: 0x23b95c, Func Offset: 0x1c
	// Line 2977, Address: 0x23b964, Func Offset: 0x24
	// Func End, Address: 0x23b978, Func Offset: 0x38
}

// 
// Start address: 0x23b980
void EnemyEDPickgirlMissingInChase(void* obj)
{
	float* pos;
	// Line 2988, Address: 0x23b980, Func Offset: 0
	// Line 2990, Address: 0x23b98c, Func Offset: 0xc
	// Line 2991, Address: 0x23b99c, Func Offset: 0x1c
	// Line 2992, Address: 0x23b9a4, Func Offset: 0x24
	// Line 2994, Address: 0x23b9b4, Func Offset: 0x34
	// Line 2995, Address: 0x23b9bc, Func Offset: 0x3c
	// Line 2996, Address: 0x23b9c8, Func Offset: 0x48
	// Line 2997, Address: 0x23b9d4, Func Offset: 0x54
	// Line 2998, Address: 0x23b9d8, Func Offset: 0x58
	// Func End, Address: 0x23b9e8, Func Offset: 0x68
}

// 
// Start address: 0x23b9f0
void EnemyEDPickgirlAttackStep1(void* obj)
{
	EnemyPickgirlWork* ew;
	float tpos[4];
	float ppos[4];
	float dir[4];
	float vec[4];
	float rot[4];
	float d;
	float d2;
	// Line 3002, Address: 0x23b9f0, Func Offset: 0
	// Line 3007, Address: 0x23ba04, Func Offset: 0x14
	// Line 3008, Address: 0x23ba14, Func Offset: 0x24
	// Line 3009, Address: 0x23ba20, Func Offset: 0x30
	// Line 3010, Address: 0x23ba30, Func Offset: 0x40
	// Line 3011, Address: 0x23ba44, Func Offset: 0x54
	// Line 3012, Address: 0x23ba54, Func Offset: 0x64
	// Line 3015, Address: 0x23bab0, Func Offset: 0xc0
	// Line 3016, Address: 0x23bab8, Func Offset: 0xc8
	// Line 3017, Address: 0x23bad8, Func Offset: 0xe8
	// Line 3018, Address: 0x23bafc, Func Offset: 0x10c
	// Line 3020, Address: 0x23bb30, Func Offset: 0x140
	// Line 3023, Address: 0x23bb60, Func Offset: 0x170
	// Line 3024, Address: 0x23bb68, Func Offset: 0x178
	// Line 3026, Address: 0x23bb88, Func Offset: 0x198
	// Line 3027, Address: 0x23bb9c, Func Offset: 0x1ac
	// Line 3028, Address: 0x23bba4, Func Offset: 0x1b4
	// Line 3029, Address: 0x23bbb0, Func Offset: 0x1c0
	// Line 3030, Address: 0x23bbb4, Func Offset: 0x1c4
	// Line 3031, Address: 0x23bbb8, Func Offset: 0x1c8
	// Line 3034, Address: 0x23bbd8, Func Offset: 0x1e8
	// Line 3035, Address: 0x23bbe8, Func Offset: 0x1f8
	// Line 3036, Address: 0x23bbf0, Func Offset: 0x200
	// Line 3037, Address: 0x23bbfc, Func Offset: 0x20c
	// Line 3038, Address: 0x23bc04, Func Offset: 0x214
	// Line 3039, Address: 0x23bc10, Func Offset: 0x220
	// Line 3040, Address: 0x23bc1c, Func Offset: 0x22c
	// Line 3041, Address: 0x23bc40, Func Offset: 0x250
	// Line 3042, Address: 0x23bc54, Func Offset: 0x264
	// Line 3043, Address: 0x23bc64, Func Offset: 0x274
	// Line 3044, Address: 0x23bc6c, Func Offset: 0x27c
	// Line 3045, Address: 0x23bc78, Func Offset: 0x288
	// Line 3046, Address: 0x23bc7c, Func Offset: 0x28c
	// Line 3047, Address: 0x23bc88, Func Offset: 0x298
	// Line 3051, Address: 0x23bc90, Func Offset: 0x2a0
	// Line 3052, Address: 0x23bc9c, Func Offset: 0x2ac
	// Line 3053, Address: 0x23bca8, Func Offset: 0x2b8
	// Func End, Address: 0x23bcc0, Func Offset: 0x2d0
}

// 
// Start address: 0x23bcc0
void EnemyEDPickgirlAttack2Step1(void* obj)
{
	EnemyPickgirlWork* ew;
	float tpos[4];
	float ppos[4];
	float dir[4];
	float rot[4];
	// Line 3057, Address: 0x23bcc0, Func Offset: 0
	// Line 3061, Address: 0x23bcd0, Func Offset: 0x10
	// Line 3062, Address: 0x23bce0, Func Offset: 0x20
	// Line 3063, Address: 0x23bcec, Func Offset: 0x2c
	// Line 3064, Address: 0x23bcf8, Func Offset: 0x38
	// Line 3065, Address: 0x23bd0c, Func Offset: 0x4c
	// Line 3066, Address: 0x23bd30, Func Offset: 0x70
	// Line 3067, Address: 0x23bd3c, Func Offset: 0x7c
	// Line 3068, Address: 0x23bd44, Func Offset: 0x84
	// Line 3076, Address: 0x23bde0, Func Offset: 0x120
	// Line 3077, Address: 0x23bde8, Func Offset: 0x128
	// Line 3080, Address: 0x23be14, Func Offset: 0x154
	// Line 3081, Address: 0x23be1c, Func Offset: 0x15c
	// Line 3082, Address: 0x23be28, Func Offset: 0x168
	// Line 3083, Address: 0x23be30, Func Offset: 0x170
	// Line 3084, Address: 0x23be3c, Func Offset: 0x17c
	// Line 3085, Address: 0x23be48, Func Offset: 0x188
	// Line 3086, Address: 0x23be50, Func Offset: 0x190
	// Line 3087, Address: 0x23be60, Func Offset: 0x1a0
	// Line 3088, Address: 0x23be64, Func Offset: 0x1a4
	// Line 3089, Address: 0x23be70, Func Offset: 0x1b0
	// Line 3091, Address: 0x23be9c, Func Offset: 0x1dc
	// Line 3092, Address: 0x23beac, Func Offset: 0x1ec
	// Line 3093, Address: 0x23beb8, Func Offset: 0x1f8
	// Line 3094, Address: 0x23bec4, Func Offset: 0x204
	// Line 3095, Address: 0x23bec8, Func Offset: 0x208
	// Func End, Address: 0x23bedc, Func Offset: 0x21c
}

// 
// Start address: 0x23bee0
void EnemyEDPickgirlAttackEnd(void* obj)
{
	EnemyPickgirlWork* ew;
	// Line 3099, Address: 0x23bee0, Func Offset: 0
	// Line 3101, Address: 0x23bef0, Func Offset: 0x10
	// Line 3102, Address: 0x23befc, Func Offset: 0x1c
	// Line 3103, Address: 0x23bf04, Func Offset: 0x24
	// Line 3104, Address: 0x23bf10, Func Offset: 0x30
	// Line 3105, Address: 0x23bf18, Func Offset: 0x38
	// Line 3106, Address: 0x23bf28, Func Offset: 0x48
	// Line 3107, Address: 0x23bf34, Func Offset: 0x54
	// Line 3108, Address: 0x23bf58, Func Offset: 0x78
	// Line 3109, Address: 0x23bf60, Func Offset: 0x80
	// Line 3110, Address: 0x23bf68, Func Offset: 0x88
	// Line 3112, Address: 0x23bf74, Func Offset: 0x94
	// Line 3113, Address: 0x23bfb8, Func Offset: 0xd8
	// Line 3114, Address: 0x23bfc4, Func Offset: 0xe4
	// Line 3115, Address: 0x23bfec, Func Offset: 0x10c
	// Line 3116, Address: 0x23bff4, Func Offset: 0x114
	// Line 3117, Address: 0x23c000, Func Offset: 0x120
	// Line 3118, Address: 0x23c00c, Func Offset: 0x12c
	// Line 3119, Address: 0x23c010, Func Offset: 0x130
	// Func End, Address: 0x23c024, Func Offset: 0x144
}

// 
// Start address: 0x23c030
void EnemyEDPickgirlAttackEnd2(void* obj)
{
	// Line 3123, Address: 0x23c030, Func Offset: 0
	// Line 3125, Address: 0x23c03c, Func Offset: 0xc
	// Line 3126, Address: 0x23c044, Func Offset: 0x14
	// Line 3127, Address: 0x23c04c, Func Offset: 0x1c
	// Line 3128, Address: 0x23c058, Func Offset: 0x28
	// Line 3129, Address: 0x23c060, Func Offset: 0x30
	// Line 3130, Address: 0x23c070, Func Offset: 0x40
	// Line 3131, Address: 0x23c08c, Func Offset: 0x5c
	// Line 3132, Address: 0x23c094, Func Offset: 0x64
	// Line 3133, Address: 0x23c0a0, Func Offset: 0x70
	// Line 3134, Address: 0x23c0ac, Func Offset: 0x7c
	// Line 3135, Address: 0x23c0b0, Func Offset: 0x80
	// Func End, Address: 0x23c0c0, Func Offset: 0x90
}

// 
// Start address: 0x23c0c0
void EnemyEDPickgirlAttackEnd3(void* obj)
{
	float dir[4];
	float d;
	// Line 3139, Address: 0x23c0c0, Func Offset: 0
	// Line 3143, Address: 0x23c0cc, Func Offset: 0xc
	// Line 3144, Address: 0x23c0d4, Func Offset: 0x14
	// Line 3145, Address: 0x23c0e0, Func Offset: 0x20
	// Line 3146, Address: 0x23c0e8, Func Offset: 0x28
	// Line 3147, Address: 0x23c0f8, Func Offset: 0x38
	// Line 3148, Address: 0x23c10c, Func Offset: 0x4c
	// Line 3149, Address: 0x23c118, Func Offset: 0x58
	// Line 3150, Address: 0x23c134, Func Offset: 0x74
	// Line 3151, Address: 0x23c13c, Func Offset: 0x7c
	// Line 3152, Address: 0x23c148, Func Offset: 0x88
	// Line 3153, Address: 0x23c154, Func Offset: 0x94
	// Line 3154, Address: 0x23c158, Func Offset: 0x98
	// Func End, Address: 0x23c168, Func Offset: 0xa8
}

// 
// Start address: 0x23c170
void EnemyEDPickgirlAdditionalDamage(void* obj)
{
	EnemyPickgirlWork* ew;
	EnemyBattleDamage bd;
	float dir[4];
	int d;
	float rrot[4];
	int nextstep;
	// Line 3158, Address: 0x23c170, Func Offset: 0
	// Line 3163, Address: 0x23c184, Func Offset: 0x14
	// Line 3164, Address: 0x23c190, Func Offset: 0x20
	// Line 3165, Address: 0x23c19c, Func Offset: 0x2c
	// Line 3166, Address: 0x23c1b4, Func Offset: 0x44
	// Line 3168, Address: 0x23c1c8, Func Offset: 0x58
	// Line 3169, Address: 0x23c1ec, Func Offset: 0x7c
	// Line 3170, Address: 0x23c214, Func Offset: 0xa4
	// Line 3171, Address: 0x23c22c, Func Offset: 0xbc
	// Line 3172, Address: 0x23c23c, Func Offset: 0xcc
	// Line 3173, Address: 0x23c244, Func Offset: 0xd4
	// Line 3174, Address: 0x23c250, Func Offset: 0xe0
	// Line 3175, Address: 0x23c264, Func Offset: 0xf4
	// Line 3176, Address: 0x23c268, Func Offset: 0xf8
	// Line 3177, Address: 0x23c278, Func Offset: 0x108
	// Line 3178, Address: 0x23c28c, Func Offset: 0x11c
	// Line 3179, Address: 0x23c294, Func Offset: 0x124
	// Line 3180, Address: 0x23c298, Func Offset: 0x128
	// Line 3183, Address: 0x23c2ac, Func Offset: 0x13c
	// Line 3184, Address: 0x23c2c0, Func Offset: 0x150
	// Line 3185, Address: 0x23c2d0, Func Offset: 0x160
	// Line 3186, Address: 0x23c2e8, Func Offset: 0x178
	// Line 3187, Address: 0x23c2f4, Func Offset: 0x184
	// Line 3188, Address: 0x23c308, Func Offset: 0x198
	// Line 3189, Address: 0x23c314, Func Offset: 0x1a4
	// Line 3191, Address: 0x23c320, Func Offset: 0x1b0
	// Line 3192, Address: 0x23c33c, Func Offset: 0x1cc
	// Line 3193, Address: 0x23c344, Func Offset: 0x1d4
	// Line 3194, Address: 0x23c350, Func Offset: 0x1e0
	// Line 3195, Address: 0x23c35c, Func Offset: 0x1ec
	// Line 3196, Address: 0x23c368, Func Offset: 0x1f8
	// Line 3197, Address: 0x23c374, Func Offset: 0x204
	// Line 3198, Address: 0x23c378, Func Offset: 0x208
	// Line 3199, Address: 0x23c37c, Func Offset: 0x20c
	// Line 3200, Address: 0x23c380, Func Offset: 0x210
	// Func End, Address: 0x23c398, Func Offset: 0x228
}

// 
// Start address: 0x23c3a0
void EnemyEDPickgirlAdditionalDamageDown(void* obj)
{
	EnemyPickgirlWork* ew;
	EnemyBattleDamage bd;
	// Line 3204, Address: 0x23c3a0, Func Offset: 0
	// Line 3207, Address: 0x23c3b4, Func Offset: 0x14
	// Line 3208, Address: 0x23c3c0, Func Offset: 0x20
	// Line 3209, Address: 0x23c3cc, Func Offset: 0x2c
	// Line 3210, Address: 0x23c3dc, Func Offset: 0x3c
	// Line 3212, Address: 0x23c408, Func Offset: 0x68
	// Line 3213, Address: 0x23c41c, Func Offset: 0x7c
	// Line 3214, Address: 0x23c420, Func Offset: 0x80
	// Line 3215, Address: 0x23c444, Func Offset: 0xa4
	// Line 3216, Address: 0x23c448, Func Offset: 0xa8
	// Line 3217, Address: 0x23c45c, Func Offset: 0xbc
	// Line 3218, Address: 0x23c464, Func Offset: 0xc4
	// Line 3219, Address: 0x23c468, Func Offset: 0xc8
	// Line 3220, Address: 0x23c474, Func Offset: 0xd4
	// Line 3221, Address: 0x23c47c, Func Offset: 0xdc
	// Line 3222, Address: 0x23c480, Func Offset: 0xe0
	// Line 3223, Address: 0x23c48c, Func Offset: 0xec
	// Line 3224, Address: 0x23c490, Func Offset: 0xf0
	// Line 3225, Address: 0x23c4a0, Func Offset: 0x100
	// Line 3226, Address: 0x23c4a8, Func Offset: 0x108
	// Line 3227, Address: 0x23c4bc, Func Offset: 0x11c
	// Line 3228, Address: 0x23c4cc, Func Offset: 0x12c
	// Line 3230, Address: 0x23c4e8, Func Offset: 0x148
	// Line 3231, Address: 0x23c4f0, Func Offset: 0x150
	// Line 3232, Address: 0x23c514, Func Offset: 0x174
	// Line 3233, Address: 0x23c520, Func Offset: 0x180
	// Line 3235, Address: 0x23c52c, Func Offset: 0x18c
	// Line 3236, Address: 0x23c530, Func Offset: 0x190
	// Line 3237, Address: 0x23c534, Func Offset: 0x194
	// Line 3236, Address: 0x23c538, Func Offset: 0x198
	// Line 3237, Address: 0x23c53c, Func Offset: 0x19c
	// Line 3238, Address: 0x23c558, Func Offset: 0x1b8
	// Line 3239, Address: 0x23c578, Func Offset: 0x1d8
	// Line 3240, Address: 0x23c584, Func Offset: 0x1e4
	// Line 3241, Address: 0x23c590, Func Offset: 0x1f0
	// Line 3243, Address: 0x23c5a0, Func Offset: 0x200
	// Line 3244, Address: 0x23c5c4, Func Offset: 0x224
	// Line 3245, Address: 0x23c5cc, Func Offset: 0x22c
	// Line 3247, Address: 0x23c5d8, Func Offset: 0x238
	// Line 3248, Address: 0x23c5f4, Func Offset: 0x254
	// Func End, Address: 0x23c610, Func Offset: 0x270
}

// 
// Start address: 0x23c610
void EnemyEDPickgirlFinish(void* obj)
{
	// Line 3252, Address: 0x23c610, Func Offset: 0
	// Line 3254, Address: 0x23c61c, Func Offset: 0xc
	// Line 3255, Address: 0x23c624, Func Offset: 0x14
	// Line 3256, Address: 0x23c638, Func Offset: 0x28
	// Line 3257, Address: 0x23c658, Func Offset: 0x48
	// Line 3258, Address: 0x23c660, Func Offset: 0x50
	// Line 3259, Address: 0x23c66c, Func Offset: 0x5c
	// Line 3260, Address: 0x23c678, Func Offset: 0x68
	// Func End, Address: 0x23c688, Func Offset: 0x78
}

// 
// Start address: 0x23c690
void EnemyEDPickgirlRevival(void* obj)
{
	EnemyPickgirlWork* ew;
	// Line 3264, Address: 0x23c690, Func Offset: 0
	// Line 3266, Address: 0x23c6a0, Func Offset: 0x10
	// Line 3267, Address: 0x23c6a8, Func Offset: 0x18
	// Line 3266, Address: 0x23c6ac, Func Offset: 0x1c
	// Line 3268, Address: 0x23c6b0, Func Offset: 0x20
	// Line 3267, Address: 0x23c6b4, Func Offset: 0x24
	// Line 3268, Address: 0x23c6b8, Func Offset: 0x28
	// Line 3269, Address: 0x23c6d4, Func Offset: 0x44
	// Line 3270, Address: 0x23c6f0, Func Offset: 0x60
	// Line 3271, Address: 0x23c708, Func Offset: 0x78
	// Line 3272, Address: 0x23c724, Func Offset: 0x94
	// Line 3273, Address: 0x23c730, Func Offset: 0xa0
	// Line 3276, Address: 0x23c76c, Func Offset: 0xdc
	// Line 3277, Address: 0x23c770, Func Offset: 0xe0
	// Line 3278, Address: 0x23c780, Func Offset: 0xf0
	// Line 3279, Address: 0x23c788, Func Offset: 0xf8
	// Line 3280, Address: 0x23c790, Func Offset: 0x100
	// Line 3281, Address: 0x23c7b8, Func Offset: 0x128
	// Line 3282, Address: 0x23c7c4, Func Offset: 0x134
	// Line 3283, Address: 0x23c7d0, Func Offset: 0x140
	// Line 3284, Address: 0x23c7dc, Func Offset: 0x14c
	// Line 3285, Address: 0x23c7e0, Func Offset: 0x150
	// Func End, Address: 0x23c7f4, Func Offset: 0x164
}

// 
// Start address: 0x23c800
void EnemyPickgirlToCapture(sfObj* obj)
{
	// Line 3289, Address: 0x23c800, Func Offset: 0
	// Line 3290, Address: 0x23c80c, Func Offset: 0xc
	// Line 3291, Address: 0x23c814, Func Offset: 0x14
	// Line 3292, Address: 0x23c828, Func Offset: 0x28
	// Line 3293, Address: 0x23c830, Func Offset: 0x30
	// Line 3294, Address: 0x23c844, Func Offset: 0x44
	// Line 3295, Address: 0x23c858, Func Offset: 0x58
	// Line 3296, Address: 0x23c864, Func Offset: 0x64
	// Func End, Address: 0x23c874, Func Offset: 0x74
}

// 
// Start address: 0x23c880
void EnemyPickgirlRiseFromCrawl(sfObj* obj)
{
	// Line 3300, Address: 0x23c880, Func Offset: 0
	// Line 3301, Address: 0x23c884, Func Offset: 0x4
	// Line 3300, Address: 0x23c888, Func Offset: 0x8
	// Line 3301, Address: 0x23c88c, Func Offset: 0xc
	// Line 3300, Address: 0x23c890, Func Offset: 0x10
	// Line 3301, Address: 0x23c894, Func Offset: 0x14
	// Line 3302, Address: 0x23c8a0, Func Offset: 0x20
	// Line 3303, Address: 0x23c8a8, Func Offset: 0x28
	// Line 3304, Address: 0x23c8bc, Func Offset: 0x3c
	// Line 3305, Address: 0x23c8c8, Func Offset: 0x48
	// Line 3306, Address: 0x23c8d4, Func Offset: 0x54
	// Line 3307, Address: 0x23c8e8, Func Offset: 0x68
	// Func End, Address: 0x23c8f8, Func Offset: 0x78
}

