typedef struct sfObj;
typedef struct EventFlag;
typedef struct EnemyFootStepData;
typedef struct EnemyScratchMapHit;
typedef enum EnemySenseResultType : unsigned char;
typedef enum EnemyPlayerType : unsigned char;
typedef struct _anon0;
typedef struct EnemyScratchWork;
typedef enum EnemyManageEntryType : unsigned char;
typedef struct EnemyFootStepsData;
typedef struct EnemySenseResult;
typedef enum BattleDamageType : unsigned char;
typedef enum EnemySenseType : unsigned char;
typedef struct EnemyMeasureResult;
typedef struct EnemyBattleDamage;
typedef struct EnemyManageDataOne;
typedef struct EnemySenseData;
typedef struct EnemyRwWork;
typedef struct EnemyFmWork;
typedef union _anon1;
typedef struct EnemyRwMotionParameter;
typedef struct EnemyRwMotion;
typedef struct _anon2;
typedef struct _anon3;
typedef struct EnemyGhostFloatParameter;
typedef struct _anon4;
typedef enum BattleAttackKind : unsigned char;
typedef union _anon5;
typedef struct EnemyFmMotion;
typedef enum EnemyFmMotionParameterType : unsigned char;
typedef enum EnemyScratchAnime : unsigned char;
typedef enum EnemyScratchMovePattern : unsigned char;

typedef int(*type_0)(void*);
typedef int(*type_3)(void*);
typedef void(*type_9)(void*, int);
typedef void(*type_12)(sfObj*);
typedef void(*type_15)(void*, int);
typedef void(*type_19)(sfObj*);
typedef void(*type_20)(void*, int);
typedef void(*type_22)(void*, int);
typedef int(*type_23)(void*);
typedef void(*type_24)(void*, int);
typedef void(*type_25)(sfObj*);
typedef void(*type_26)(void*, int);
typedef int(*type_36)(void*);
typedef int(*type_38)(void*);

typedef unsigned char type_1[320];
typedef <unknown fundamental type (0xa510)> type_2[4];
typedef float type_4[4];
typedef float type_5[4][4];
typedef EnemyScratchMovePattern type_6[16];
typedef EnemyFootStepData type_7[0];
typedef int type_8[4];
typedef float type_10[5];
typedef float type_11[4];
typedef void(*type_13)(sfObj*)[19];
typedef _anon1 type_14[4];
typedef _anon1 type_16[256];
typedef float type_17[4];
typedef float type_18[5];
typedef EnemyRwMotionParameter type_21[0];
typedef short type_27[2];
typedef unsigned short type_28[2];
typedef char type_29[4];
typedef _anon4 type_30[4];
typedef unsigned char type_31[4];
typedef _anon5 type_32[0];
typedef float type_33[1];
typedef int type_34[4];
typedef int type_35[1];
typedef short type_37[0];

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

struct EventFlag
{
	unsigned char flag[320];
};

struct EnemyFootStepData
{
	unsigned short frame;
	char dir;
	unsigned char bone_num;
};

struct EnemyScratchMapHit
{
	<unknown fundamental type (0xa510)> polywork[4];
	_anon0* poly;
	int maphit_id;
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

struct _anon0
{
	_anon5 vertex[0];
};

struct EnemyScratchWork
{
	float hitback[4];
	float timer;
	int down_count;
	int falling_direction;
	int on_attack;
	int move_pattern;
	int scratch_count;
	int scratch_start_frame;
	float move_timer;
	float move_timer_calc1;
	float move_timer_calc2;
	float scratch_timer;
	float anime_speed;
	float anime_speed_add;
	float attack_wait;
	float slowly;
	float warp_before;
	float warp_after;
	int finish_count;
	int attack_success;
	EnemySenseData* player_check;
	EnemyRwWork* rw_work;
	EnemyFmWork* fm_work;
	EnemyScratchMapHit* maphit;
	sfObj* aai_obj;
	int fall_count;
	float stay_time;
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

struct EnemyFootStepsData
{
	int sound;
	int data_number;
	EnemyFootStepData data[0];
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
	_anon0* poly;
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
	_anon1 work[4];
	unsigned int padding;
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

struct EnemyRwWork
{
};

struct EnemyFmWork
{
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

struct EnemyRwMotionParameter
{
	short frame;
	short cond;
};

struct EnemyRwMotion
{
	short right_foot;
	short left_foot;
	float rate;
	EnemyRwMotionParameter param[0];
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

struct _anon4
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

union _anon5
{
	float node[4];
	_anon4 data[4];
};

struct EnemyFmMotion
{
	int max_frame;
	EnemyFmMotionParameterType param_type;
	short param[0];
};

enum EnemyFmMotionParameterType : unsigned char
{
	ENEMY_FM_PARAM_Z_ONLY,
	ENEMY_FM_PARAM_X_ONLY,
	ENEMY_FM_PARAM_XZ,
	ENEMY_FM_PARAM_XYZ
};

enum EnemyScratchAnime : unsigned char
{
	EN_SCR_ANM_NT,
	EN_SCR_ANM_NT2,
	EN_SCR_ANM_NT3,
	EN_SCR_ANM_WLK,
	EN_SCR_ANM_WLKB,
	EN_SCR_ANM_WLKR,
	EN_SCR_ANM_WLKL,
	EN_SCR_ANM_WLKS,
	EN_SCR_ANM_DMH1,
	EN_SCR_ANM_DMH2,
	EN_SCR_ANM_DMP1,
	EN_SCR_ANM_DMP2,
	EN_SCR_ANM_DMP3,
	EN_SCR_ANM_DMS1,
	EN_SCR_ANM_DMS2,
	EN_SCR_ANM_DMCA,
	EN_SCR_ANM_XXP1,
	EN_SCR_ANM_XXP2,
	EN_SCR_ANM_XXP3,
	EN_SCR_ANM_XXS1,
	EN_SCR_ANM_XXS2,
	EN_SCR_ANM_XXG1,
	EN_SCR_ANM_XXG2,
	EN_SCR_ANM_XXC1,
	EN_SCR_ANM_XXC2,
	EN_SCR_ANM_DMCB,
	EN_SCR_ANM_UPU,
	EN_SCR_ANM_UPD,
	EN_SCR_ANM_DNT1,
	EN_SCR_ANM_DNT2,
	EN_SCR_ANM_ROTU,
	EN_SCR_ANM_ROTD,
	EN_SCR_ANM_ATT1,
	EN_SCR_ANM_ATT2A,
	EN_SCR_ANM_ATT2B,
	EN_SCR_ANM_ATT2C,
	EN_SCR_ANM_ATT3A,
	EN_SCR_ANM_ATT3B,
	EN_SCR_ANM_ATT3C,
	EN_SCR_ANM_ATT4,
	EN_SCR_ANM_TDMU,
	EN_SCR_ANM_TDMD,
	EN_SCR_ANM_ST1,
	EN_SCR_ANM_ST2,
	EN_SCR_ANM_REVERSE
};

enum EnemyScratchMovePattern : unsigned char
{
	EN_SCR_MOVE_FORWARD,
	EN_SCR_MOVE_BACKWARD,
	EN_SCR_MOVE_SCRATCH,
	EN_SCR_MOVE_SCRATCH2,
	EN_SCR_MOVE_FORWARD_AND_BACKWARD,
	EN_SCR_MOVE_BACKWARD_AND_FORWARD,
	EN_SCR_MOVE_TRIPLE
};

EnemyScratchMovePattern move_pattern_table[16];
float anime_speed[5];
EnemyGhostFloatParameter scratch_float_parameter;
float weapon_hit_pos[4];
float seize_pos[4];
float bd03_first_pos[4];
EnemyRwMotion rw_wlk;
EnemyFmMotion fm_wlk;
EnemyFootStepsData fs_wlk;
EnemyRwMotion rw_wlkr;
EnemyFootStepsData fs_wlkr;
EnemyRwMotion rw_wlkl;
EnemyFootStepsData fs_wlkl;
EnemyRwMotion rw_wlks;
EnemyFootStepsData fs_wlks;
float hp_rate[5];
void(*scratch_jump_table)(sfObj*)[19];
EventFlag event_flag;
int(*EnemyEDAnimeIsEndSoon)(void*);
float sg_vector_unit_y[4];
int(*EnemyEDBattleDamageCheck)(void*);
int(*EnemyEDAnimeIsEnd)(void*);
float en_vector_unit_y_minus[4];
void(*EnemyEDScratchRevival)(void*, int);
int(*EnemyEDSenseTest)(void*);
void(*EnemyEDScratchAdditionalDamageDown)(void*, int);
void(*EnemyEDBattleDamageReduceHP)(void*, int);
void(*EnemyEDScratchAdditionalDamageSA)(void*, int);
void(*EnemyEDScratchFinish)(void*, int);
int(*EnemyEDGhostCheckFinish)(void*);
void(*EnemyEDScratchAdditionalDamage)(void*, int);
int sound_scr[4];
int sound_det[4];

int is_scratch(sfObj* obj);
void set_center_height(sfObj* obj);
void set_hit(sfObj* obj);
void set_hit_down(sfObj* obj);
void EnemyScratchConstruct(sfObj* obj);
void EnemyScratchMakeWall(sfObj* obj);
void EnemyScratchDeleteWall(sfObj* obj);
void set_transparency(sfObj* obj);
void EnemyScratchHandle(sfObj* obj);
void EnemyScratchDraw(sfObj* obj);
void EnemyScratchDestruct(sfObj* obj);
void EnemyScratchDataPreserve(sfObj* obj);
void EnemyScratchDataExtract(sfObj* obj);
float change_anime_speed(sfObj* obj, float target);
void EnemyScratchAnimeSet(sfObj* obj, EnemyScratchAnime anime);
float calc_timer(EnemyScratchWork* ew);
void EnemyScratchAnimeControl(sfObj* obj);
void EnemyScratchRecover(sfObj* obj);
void EnemyScratchGetWeaponPos(sfObj* obj, float* pos);
int check_player_hp(sfObj* obj);
void check_abyss(sfObj* obj);
void EnemyScratchControl(sfObj* obj);
void EnemyScratchControlInit(sfObj* obj);
void EnemyScratchControlWander(sfObj* obj);
void EnemyScratchControlPerform(sfObj* obj);
void EnemyScratchControlCaution(sfObj* obj);
void EnemyScratchControlChase(sfObj* obj);
void set_pos_behind_player(sfObj* obj);
void after_warp(sfObj* obj);
void EnemyScratchControlWarp(sfObj* obj);
void EnemyScratchControlToWarp(sfObj* obj);
void EnemyScratchControlToWarp2(sfObj* obj);
void EnemyScratchControlAttack(sfObj* obj);
void EnemyScratchControlSeize(sfObj* obj);
void EnemyScratchControlBackAttack(sfObj* obj);
void EnemyScratchControlTurn(sfObj* obj);
void EnemyScratchControlInWall(sfObj* obj);
void EnemyScratchControlDamage(sfObj* obj);
int rot_normalize(sfObj* obj);
void EnemyScratchControlDown(sfObj* obj);
void EnemyScratchControlExorcismDown(sfObj* obj);
void EnemyScratchControlFinished(sfObj* obj);
void EnemyScratchControlEvent(sfObj* obj);
void EnemyScratchControlDead(sfObj* obj);
void EnemyScratchAttackEnd(sfObj* obj);
void EnemyScratchSetExtentDamage(sfObj* obj);
int EnemyScratchCheckPlayerFront(sfObj* obj);
void EnemyScratchSetEventPlayerCheck(sfObj* obj);
void EnemyScratchSetEventDamageCheck(sfObj* obj);
void EnemyScratchCheckExorcismDamage(sfObj* obj);
int EnemyScratchMayAttackPlayer(sfObj* obj);
void EnemyScratchSetAttackInfo(sfObj* obj);
int EnemyScratchCheckAttackInfo(sfObj* obj);
void EnemyScratchDamageSoundCall(sfObj* obj, EnemyBattleDamage* bd);
void EnemyScratchLeft(sfObj* obj);
int damage_anime_set(sfObj* obj, EnemyBattleDamage* bd, float* dir, int down);
void EnemyEDScratchAdditionalDamage(void* obj);
void EnemyEDScratchAdditionalDamageSA(void* obj);
void EnemyEDScratchAdditionalDamageDown(void* obj);
void EnemyEDScratchFinish(void* obj);
void EnemyEDScratchRevival(void* obj);
void EnemyNurseConstruct(sfObj* obj);
void EnemyNurseHandle(sfObj* obj);
void EnemyNurseDraw(sfObj* obj);
void EnemyNurseDestruct(sfObj* obj);
void EnemyNurseDataPreserve(sfObj* obj);
void EnemyNurseDataExtract(sfObj* obj);

// 
// Start address: 0x2a9b10
int is_scratch(sfObj* obj)
{
	// Line 647, Address: 0x2a9b10, Func Offset: 0
	// Line 648, Address: 0x2a9b18, Func Offset: 0x8
	// Line 649, Address: 0x2a9b20, Func Offset: 0x10
	// Line 648, Address: 0x2a9b24, Func Offset: 0x14
	// Line 649, Address: 0x2a9b30, Func Offset: 0x20
	// Func End, Address: 0x2a9b38, Func Offset: 0x28
}

// 
// Start address: 0x2a9b40
void set_center_height(sfObj* obj)
{
	float h;
	// Line 653, Address: 0x2a9b40, Func Offset: 0
	// Line 654, Address: 0x2a9b44, Func Offset: 0x4
	// Line 653, Address: 0x2a9b48, Func Offset: 0x8
	// Line 654, Address: 0x2a9b54, Func Offset: 0x14
	// Line 655, Address: 0x2a9b58, Func Offset: 0x18
	// Line 656, Address: 0x2a9b7c, Func Offset: 0x3c
	// Line 658, Address: 0x2a9b98, Func Offset: 0x58
	// Line 661, Address: 0x2a9ba4, Func Offset: 0x64
	// Line 662, Address: 0x2a9ba8, Func Offset: 0x68
	// Line 663, Address: 0x2a9bb4, Func Offset: 0x74
	// Func End, Address: 0x2a9bc8, Func Offset: 0x88
}

// 
// Start address: 0x2a9bd0
void set_hit(sfObj* obj)
{
	_anon3 obb;
	_anon2 aabb;
	// Line 667, Address: 0x2a9bd0, Func Offset: 0
	// Line 670, Address: 0x2a9bd8, Func Offset: 0x8
	// Line 667, Address: 0x2a9bdc, Func Offset: 0xc
	// Line 670, Address: 0x2a9be4, Func Offset: 0x14
	// Line 671, Address: 0x2a9bec, Func Offset: 0x1c
	// Line 672, Address: 0x2a9bf0, Func Offset: 0x20
	// Line 673, Address: 0x2a9bf8, Func Offset: 0x28
	// Line 672, Address: 0x2a9bfc, Func Offset: 0x2c
	// Line 673, Address: 0x2a9c00, Func Offset: 0x30
	// Line 672, Address: 0x2a9c04, Func Offset: 0x34
	// Line 673, Address: 0x2a9c08, Func Offset: 0x38
	// Line 674, Address: 0x2a9c0c, Func Offset: 0x3c
	// Line 673, Address: 0x2a9c10, Func Offset: 0x40
	// Line 676, Address: 0x2a9c14, Func Offset: 0x44
	// Line 674, Address: 0x2a9c18, Func Offset: 0x48
	// Line 676, Address: 0x2a9c1c, Func Offset: 0x4c
	// Line 677, Address: 0x2a9c24, Func Offset: 0x54
	// Line 679, Address: 0x2a9c3c, Func Offset: 0x6c
	// Func End, Address: 0x2a9c4c, Func Offset: 0x7c
}

// 
// Start address: 0x2a9c50
void set_hit_down(sfObj* obj)
{
	_anon3 obb;
	_anon2 aabb;
	// Line 683, Address: 0x2a9c50, Func Offset: 0
	// Line 686, Address: 0x2a9c58, Func Offset: 0x8
	// Line 683, Address: 0x2a9c5c, Func Offset: 0xc
	// Line 686, Address: 0x2a9c64, Func Offset: 0x14
	// Line 687, Address: 0x2a9c6c, Func Offset: 0x1c
	// Line 688, Address: 0x2a9c70, Func Offset: 0x20
	// Line 689, Address: 0x2a9c78, Func Offset: 0x28
	// Line 688, Address: 0x2a9c7c, Func Offset: 0x2c
	// Line 689, Address: 0x2a9c80, Func Offset: 0x30
	// Line 688, Address: 0x2a9c84, Func Offset: 0x34
	// Line 690, Address: 0x2a9c88, Func Offset: 0x38
	// Line 689, Address: 0x2a9c8c, Func Offset: 0x3c
	// Line 690, Address: 0x2a9c90, Func Offset: 0x40
	// Line 689, Address: 0x2a9c94, Func Offset: 0x44
	// Line 691, Address: 0x2a9c98, Func Offset: 0x48
	// Line 690, Address: 0x2a9c9c, Func Offset: 0x4c
	// Line 691, Address: 0x2a9ca0, Func Offset: 0x50
	// Line 692, Address: 0x2a9ca4, Func Offset: 0x54
	// Line 693, Address: 0x2a9cb0, Func Offset: 0x60
	// Line 695, Address: 0x2a9cc8, Func Offset: 0x78
	// Func End, Address: 0x2a9cd8, Func Offset: 0x88
}

// 
// Start address: 0x2a9ce0
void EnemyScratchConstruct(sfObj* obj)
{
	EnemyScratchWork* ew;
	EnemyManageEntryType etype;
	int sf;
	sfObj* tobj;
	// Line 699, Address: 0x2a9ce0, Func Offset: 0
	// Line 704, Address: 0x2a9ce4, Func Offset: 0x4
	// Line 699, Address: 0x2a9ce8, Func Offset: 0x8
	// Line 704, Address: 0x2a9d00, Func Offset: 0x20
	// Line 709, Address: 0x2a9d08, Func Offset: 0x28
	// Line 711, Address: 0x2a9d38, Func Offset: 0x58
	// Line 712, Address: 0x2a9d40, Func Offset: 0x60
	// Line 716, Address: 0x2a9d48, Func Offset: 0x68
	// Line 718, Address: 0x2a9d50, Func Offset: 0x70
	// Line 719, Address: 0x2a9d5c, Func Offset: 0x7c
	// Line 723, Address: 0x2a9d88, Func Offset: 0xa8
	// Line 724, Address: 0x2a9d90, Func Offset: 0xb0
	// Line 727, Address: 0x2a9d98, Func Offset: 0xb8
	// Line 728, Address: 0x2a9da8, Func Offset: 0xc8
	// Line 730, Address: 0x2a9db4, Func Offset: 0xd4
	// Line 731, Address: 0x2a9dc4, Func Offset: 0xe4
	// Line 732, Address: 0x2a9dcc, Func Offset: 0xec
	// Line 734, Address: 0x2a9df8, Func Offset: 0x118
	// Line 735, Address: 0x2a9e08, Func Offset: 0x128
	// Line 736, Address: 0x2a9e1c, Func Offset: 0x13c
	// Line 738, Address: 0x2a9e40, Func Offset: 0x160
	// Line 739, Address: 0x2a9e58, Func Offset: 0x178
	// Line 740, Address: 0x2a9e60, Func Offset: 0x180
	// Line 741, Address: 0x2a9e70, Func Offset: 0x190
	// Line 742, Address: 0x2a9e7c, Func Offset: 0x19c
	// Line 743, Address: 0x2a9e88, Func Offset: 0x1a8
	// Line 744, Address: 0x2a9e94, Func Offset: 0x1b4
	// Line 745, Address: 0x2a9e9c, Func Offset: 0x1bc
	// Line 746, Address: 0x2a9eb4, Func Offset: 0x1d4
	// Line 748, Address: 0x2a9ec8, Func Offset: 0x1e8
	// Line 749, Address: 0x2a9ed4, Func Offset: 0x1f4
	// Line 750, Address: 0x2a9edc, Func Offset: 0x1fc
	// Line 751, Address: 0x2a9ee4, Func Offset: 0x204
	// Line 752, Address: 0x2a9ee8, Func Offset: 0x208
	// Line 753, Address: 0x2a9ef8, Func Offset: 0x218
	// Line 755, Address: 0x2a9f1c, Func Offset: 0x23c
	// Line 756, Address: 0x2a9f28, Func Offset: 0x248
	// Line 758, Address: 0x2a9f34, Func Offset: 0x254
	// Line 759, Address: 0x2a9f3c, Func Offset: 0x25c
	// Line 761, Address: 0x2a9f68, Func Offset: 0x288
	// Line 762, Address: 0x2a9f74, Func Offset: 0x294
	// Line 763, Address: 0x2a9f7c, Func Offset: 0x29c
	// Line 764, Address: 0x2a9f80, Func Offset: 0x2a0
	// Line 765, Address: 0x2a9f8c, Func Offset: 0x2ac
	// Line 766, Address: 0x2a9f98, Func Offset: 0x2b8
	// Line 768, Address: 0x2a9fa0, Func Offset: 0x2c0
	// Line 771, Address: 0x2a9fdc, Func Offset: 0x2fc
	// Line 772, Address: 0x2a9fe4, Func Offset: 0x304
	// Line 773, Address: 0x2a9ff0, Func Offset: 0x310
	// Line 774, Address: 0x2aa000, Func Offset: 0x320
	// Line 777, Address: 0x2aa00c, Func Offset: 0x32c
	// Line 779, Address: 0x2aa034, Func Offset: 0x354
	// Line 780, Address: 0x2aa03c, Func Offset: 0x35c
	// Line 781, Address: 0x2aa048, Func Offset: 0x368
	// Line 782, Address: 0x2aa054, Func Offset: 0x374
	// Line 783, Address: 0x2aa05c, Func Offset: 0x37c
	// Line 784, Address: 0x2aa060, Func Offset: 0x380
	// Line 786, Address: 0x2aa07c, Func Offset: 0x39c
	// Line 787, Address: 0x2aa084, Func Offset: 0x3a4
	// Line 788, Address: 0x2aa090, Func Offset: 0x3b0
	// Line 789, Address: 0x2aa0a0, Func Offset: 0x3c0
	// Line 790, Address: 0x2aa0ac, Func Offset: 0x3cc
	// Line 793, Address: 0x2aa0b0, Func Offset: 0x3d0
	// Line 794, Address: 0x2aa0c0, Func Offset: 0x3e0
	// Line 796, Address: 0x2aa0c8, Func Offset: 0x3e8
	// Line 798, Address: 0x2aa0d4, Func Offset: 0x3f4
	// Line 796, Address: 0x2aa0d8, Func Offset: 0x3f8
	// Line 798, Address: 0x2aa0dc, Func Offset: 0x3fc
	// Line 796, Address: 0x2aa0e0, Func Offset: 0x400
	// Line 798, Address: 0x2aa0f0, Func Offset: 0x410
	// Line 799, Address: 0x2aa0f8, Func Offset: 0x418
	// Func End, Address: 0x2aa118, Func Offset: 0x438
}

// 
// Start address: 0x2aa120
void EnemyScratchMakeWall(sfObj* obj)
{
	EnemyScratchWork* ew;
	EnemyScratchMapHit* pm;
	_anon0* poly;
	float* fp;
	// Line 803, Address: 0x2aa120, Func Offset: 0
	// Line 808, Address: 0x2aa12c, Func Offset: 0xc
	// Line 809, Address: 0x2aa134, Func Offset: 0x14
	// Line 816, Address: 0x2aa148, Func Offset: 0x28
	// Line 809, Address: 0x2aa14c, Func Offset: 0x2c
	// Line 816, Address: 0x2aa150, Func Offset: 0x30
	// Line 811, Address: 0x2aa154, Func Offset: 0x34
	// Line 819, Address: 0x2aa158, Func Offset: 0x38
	// Line 812, Address: 0x2aa15c, Func Offset: 0x3c
	// Line 813, Address: 0x2aa160, Func Offset: 0x40
	// Line 812, Address: 0x2aa164, Func Offset: 0x44
	// Line 815, Address: 0x2aa168, Func Offset: 0x48
	// Line 812, Address: 0x2aa16c, Func Offset: 0x4c
	// Line 817, Address: 0x2aa170, Func Offset: 0x50
	// Line 812, Address: 0x2aa174, Func Offset: 0x54
	// Line 818, Address: 0x2aa178, Func Offset: 0x58
	// Line 813, Address: 0x2aa17c, Func Offset: 0x5c
	// Line 819, Address: 0x2aa180, Func Offset: 0x60
	// Line 813, Address: 0x2aa184, Func Offset: 0x64
	// Line 820, Address: 0x2aa188, Func Offset: 0x68
	// Line 815, Address: 0x2aa18c, Func Offset: 0x6c
	// Line 816, Address: 0x2aa194, Func Offset: 0x74
	// Line 820, Address: 0x2aa198, Func Offset: 0x78
	// Line 816, Address: 0x2aa19c, Func Offset: 0x7c
	// Line 817, Address: 0x2aa1a0, Func Offset: 0x80
	// Line 818, Address: 0x2aa1a8, Func Offset: 0x88
	// Line 819, Address: 0x2aa1b0, Func Offset: 0x90
	// Line 820, Address: 0x2aa1bc, Func Offset: 0x9c
	// Line 821, Address: 0x2aa1c8, Func Offset: 0xa8
	// Func End, Address: 0x2aa1d8, Func Offset: 0xb8
}

// 
// Start address: 0x2aa1e0
void EnemyScratchDeleteWall(sfObj* obj)
{
	EnemyScratchWork* ew;
	// Line 825, Address: 0x2aa1e0, Func Offset: 0
	// Line 827, Address: 0x2aa1e8, Func Offset: 0x8
	// Line 828, Address: 0x2aa1f4, Func Offset: 0x14
	// Line 829, Address: 0x2aa1fc, Func Offset: 0x1c
	// Line 830, Address: 0x2aa204, Func Offset: 0x24
	// Line 832, Address: 0x2aa208, Func Offset: 0x28
	// Func End, Address: 0x2aa218, Func Offset: 0x38
}

// 
// Start address: 0x2aa220
void set_transparency(sfObj* obj)
{
	EnemyScratchWork* ew;
	int frame;
	float dt;
	float t;
	float t;
	// Line 836, Address: 0x2aa220, Func Offset: 0
	// Line 840, Address: 0x2aa234, Func Offset: 0x14
	// Line 841, Address: 0x2aa240, Func Offset: 0x20
	// Line 846, Address: 0x2aa290, Func Offset: 0x70
	// Line 847, Address: 0x2aa298, Func Offset: 0x78
	// Line 849, Address: 0x2aa2a0, Func Offset: 0x80
	// Line 851, Address: 0x2aa2c8, Func Offset: 0xa8
	// Line 852, Address: 0x2aa2d0, Func Offset: 0xb0
	// Line 853, Address: 0x2aa2d8, Func Offset: 0xb8
	// Line 854, Address: 0x2aa2f0, Func Offset: 0xd0
	// Line 855, Address: 0x2aa300, Func Offset: 0xe0
	// Line 857, Address: 0x2aa304, Func Offset: 0xe4
	// Line 858, Address: 0x2aa310, Func Offset: 0xf0
	// Line 861, Address: 0x2aa328, Func Offset: 0x108
	// Line 863, Address: 0x2aa344, Func Offset: 0x124
	// Line 864, Address: 0x2aa350, Func Offset: 0x130
	// Line 865, Address: 0x2aa374, Func Offset: 0x154
	// Line 866, Address: 0x2aa378, Func Offset: 0x158
	// Line 867, Address: 0x2aa38c, Func Offset: 0x16c
	// Func End, Address: 0x2aa3a4, Func Offset: 0x184
}

// 
// Start address: 0x2aa3b0
void EnemyScratchHandle(sfObj* obj)
{
	EnemyScratchWork* ew;
	// Line 871, Address: 0x2aa3b0, Func Offset: 0
	// Line 873, Address: 0x2aa3c0, Func Offset: 0x10
	// Line 874, Address: 0x2aa3c8, Func Offset: 0x18
	// Line 875, Address: 0x2aa3d0, Func Offset: 0x20
	// Line 876, Address: 0x2aa3d8, Func Offset: 0x28
	// Line 877, Address: 0x2aa3e0, Func Offset: 0x30
	// Line 878, Address: 0x2aa3f0, Func Offset: 0x40
	// Line 879, Address: 0x2aa404, Func Offset: 0x54
	// Line 880, Address: 0x2aa408, Func Offset: 0x58
	// Line 881, Address: 0x2aa41c, Func Offset: 0x6c
	// Line 882, Address: 0x2aa430, Func Offset: 0x80
	// Line 883, Address: 0x2aa438, Func Offset: 0x88
	// Line 884, Address: 0x2aa450, Func Offset: 0xa0
	// Line 887, Address: 0x2aa458, Func Offset: 0xa8
	// Line 888, Address: 0x2aa460, Func Offset: 0xb0
	// Line 889, Address: 0x2aa468, Func Offset: 0xb8
	// Line 891, Address: 0x2aa470, Func Offset: 0xc0
	// Line 892, Address: 0x2aa47c, Func Offset: 0xcc
	// Line 893, Address: 0x2aa48c, Func Offset: 0xdc
	// Line 894, Address: 0x2aa494, Func Offset: 0xe4
	// Line 895, Address: 0x2aa49c, Func Offset: 0xec
	// Line 897, Address: 0x2aa4b0, Func Offset: 0x100
	// Line 898, Address: 0x2aa4b8, Func Offset: 0x108
	// Line 899, Address: 0x2aa4c0, Func Offset: 0x110
	// Line 901, Address: 0x2aa4d0, Func Offset: 0x120
	// Func End, Address: 0x2aa4e4, Func Offset: 0x134
}

// 
// Start address: 0x2aa4f0
void EnemyScratchDraw(sfObj* obj)
{
	// Line 905, Address: 0x2aa4f0, Func Offset: 0
	// Line 906, Address: 0x2aa4fc, Func Offset: 0xc
	// Line 907, Address: 0x2aa50c, Func Offset: 0x1c
	// Line 908, Address: 0x2aa514, Func Offset: 0x24
	// Line 909, Address: 0x2aa518, Func Offset: 0x28
	// Func End, Address: 0x2aa528, Func Offset: 0x38
}

// 
// Start address: 0x2aa530
void EnemyScratchDestruct(sfObj* obj)
{
	EnemyScratchWork* ew;
	// Line 913, Address: 0x2aa530, Func Offset: 0
	// Line 916, Address: 0x2aa540, Func Offset: 0x10
	// Line 917, Address: 0x2aa558, Func Offset: 0x28
	// Line 918, Address: 0x2aa560, Func Offset: 0x30
	// Line 921, Address: 0x2aa568, Func Offset: 0x38
	// Line 923, Address: 0x2aa570, Func Offset: 0x40
	// Line 924, Address: 0x2aa584, Func Offset: 0x54
	// Line 925, Address: 0x2aa59c, Func Offset: 0x6c
	// Line 926, Address: 0x2aa5a4, Func Offset: 0x74
	// Line 927, Address: 0x2aa5a8, Func Offset: 0x78
	// Line 930, Address: 0x2aa5b0, Func Offset: 0x80
	// Line 931, Address: 0x2aa5b8, Func Offset: 0x88
	// Line 932, Address: 0x2aa5c4, Func Offset: 0x94
	// Line 933, Address: 0x2aa5cc, Func Offset: 0x9c
	// Line 934, Address: 0x2aa5d4, Func Offset: 0xa4
	// Line 936, Address: 0x2aa5dc, Func Offset: 0xac
	// Line 938, Address: 0x2aa5e4, Func Offset: 0xb4
	// Line 939, Address: 0x2aa5ec, Func Offset: 0xbc
	// Func End, Address: 0x2aa604, Func Offset: 0xd4
}

// 
// Start address: 0x2aa610
void EnemyScratchDataPreserve(sfObj* obj)
{
	EnemyScratchWork* ew;
	EnemyManageDataOne* pe;
	_anon1 td;
	// Line 943, Address: 0x2aa610, Func Offset: 0
	// Line 947, Address: 0x2aa624, Func Offset: 0x14
	// Line 949, Address: 0x2aa650, Func Offset: 0x40
	// Line 950, Address: 0x2aa658, Func Offset: 0x48
	// Line 954, Address: 0x2aa660, Func Offset: 0x50
	// Line 957, Address: 0x2aa678, Func Offset: 0x68
	// Line 958, Address: 0x2aa680, Func Offset: 0x70
	// Line 959, Address: 0x2aa68c, Func Offset: 0x7c
	// Line 960, Address: 0x2aa698, Func Offset: 0x88
	// Line 961, Address: 0x2aa6a4, Func Offset: 0x94
	// Line 962, Address: 0x2aa6b8, Func Offset: 0xa8
	// Line 964, Address: 0x2aa6c0, Func Offset: 0xb0
	// Line 965, Address: 0x2aa6cc, Func Offset: 0xbc
	// Line 967, Address: 0x2aa6d8, Func Offset: 0xc8
	// Line 966, Address: 0x2aa6dc, Func Offset: 0xcc
	// Line 967, Address: 0x2aa6e4, Func Offset: 0xd4
	// Line 968, Address: 0x2aa6ec, Func Offset: 0xdc
	// Line 969, Address: 0x2aa6f0, Func Offset: 0xe0
	// Func End, Address: 0x2aa708, Func Offset: 0xf8
}

// 
// Start address: 0x2aa710
void EnemyScratchDataExtract(sfObj* obj)
{
	EnemyScratchWork* ew;
	EnemyManageDataOne* pe;
	EnemyScratchAnime anime;
	float t;
	// Line 973, Address: 0x2aa710, Func Offset: 0
	// Line 977, Address: 0x2aa72c, Func Offset: 0x1c
	// Line 978, Address: 0x2aa738, Func Offset: 0x28
	// Line 979, Address: 0x2aa74c, Func Offset: 0x3c
	// Line 980, Address: 0x2aa758, Func Offset: 0x48
	// Line 981, Address: 0x2aa764, Func Offset: 0x54
	// Line 982, Address: 0x2aa768, Func Offset: 0x58
	// Line 983, Address: 0x2aa784, Func Offset: 0x74
	// Line 984, Address: 0x2aa790, Func Offset: 0x80
	// Line 985, Address: 0x2aa79c, Func Offset: 0x8c
	// Line 986, Address: 0x2aa7a8, Func Offset: 0x98
	// Line 987, Address: 0x2aa7b4, Func Offset: 0xa4
	// Line 988, Address: 0x2aa7bc, Func Offset: 0xac
	// Line 990, Address: 0x2aa7c8, Func Offset: 0xb8
	// Line 991, Address: 0x2aa7cc, Func Offset: 0xbc
	// Line 992, Address: 0x2aa7e4, Func Offset: 0xd4
	// Line 993, Address: 0x2aa7f0, Func Offset: 0xe0
	// Line 994, Address: 0x2aa7fc, Func Offset: 0xec
	// Line 995, Address: 0x2aa808, Func Offset: 0xf8
	// Line 996, Address: 0x2aa814, Func Offset: 0x104
	// Line 997, Address: 0x2aa81c, Func Offset: 0x10c
	// Line 998, Address: 0x2aa828, Func Offset: 0x118
	// Line 999, Address: 0x2aa82c, Func Offset: 0x11c
	// Line 1001, Address: 0x2aa83c, Func Offset: 0x12c
	// Line 1002, Address: 0x2aa840, Func Offset: 0x130
	// Line 1005, Address: 0x2aa848, Func Offset: 0x138
	// Line 1006, Address: 0x2aa854, Func Offset: 0x144
	// Func End, Address: 0x2aa874, Func Offset: 0x164
}

// 
// Start address: 0x2aa880
float change_anime_speed(sfObj* obj, float target)
{
	EnemyScratchWork* ew;
	// Line 1010, Address: 0x2aa880, Func Offset: 0
	// Line 1012, Address: 0x2aa894, Func Offset: 0x14
	// Line 1014, Address: 0x2aa89c, Func Offset: 0x1c
	// Line 1020, Address: 0x2aa918, Func Offset: 0x98
	// Func End, Address: 0x2aa92c, Func Offset: 0xac
}

// 
// Start address: 0x2aa930
void EnemyScratchAnimeSet(sfObj* obj, EnemyScratchAnime anime)
{
	EnemyScratchWork* ew;
	EnemyRwMotion* pm;
	EnemyFmMotion* pmf;
	EnemyFootStepsData* pfs;
	int rv;
	int f;
	EnemyScratchAnime old_anime;
	float s;
	// Line 1024, Address: 0x2aa930, Func Offset: 0
	// Line 1032, Address: 0x2aa958, Func Offset: 0x28
	// Line 1034, Address: 0x2aa964, Func Offset: 0x34
	// Line 1036, Address: 0x2aa974, Func Offset: 0x44
	// Line 1035, Address: 0x2aa978, Func Offset: 0x48
	// Line 1036, Address: 0x2aa97c, Func Offset: 0x4c
	// Line 1038, Address: 0x2aa980, Func Offset: 0x50
	// Line 1039, Address: 0x2aa98c, Func Offset: 0x5c
	// Line 1041, Address: 0x2aaa44, Func Offset: 0x114
	// Line 1042, Address: 0x2aaa4c, Func Offset: 0x11c
	// Line 1043, Address: 0x2aaa64, Func Offset: 0x134
	// Line 1044, Address: 0x2aaa70, Func Offset: 0x140
	// Line 1045, Address: 0x2aaa7c, Func Offset: 0x14c
	// Line 1052, Address: 0x2aaa84, Func Offset: 0x154
	// Line 1053, Address: 0x2aaa88, Func Offset: 0x158
	// Line 1054, Address: 0x2aaa94, Func Offset: 0x164
	// Line 1056, Address: 0x2aaa9c, Func Offset: 0x16c
	// Line 1057, Address: 0x2aaaa8, Func Offset: 0x178
	// Line 1058, Address: 0x2aaab4, Func Offset: 0x184
	// Line 1059, Address: 0x2aaabc, Func Offset: 0x18c
	// Line 1060, Address: 0x2aaac0, Func Offset: 0x190
	// Line 1061, Address: 0x2aaacc, Func Offset: 0x19c
	// Line 1062, Address: 0x2aaadc, Func Offset: 0x1ac
	// Line 1065, Address: 0x2aaaf0, Func Offset: 0x1c0
	// Line 1068, Address: 0x2aaafc, Func Offset: 0x1cc
	// Line 1069, Address: 0x2aab08, Func Offset: 0x1d8
	// Line 1070, Address: 0x2aab14, Func Offset: 0x1e4
	// Line 1072, Address: 0x2aab1c, Func Offset: 0x1ec
	// Line 1073, Address: 0x2aab20, Func Offset: 0x1f0
	// Line 1074, Address: 0x2aab2c, Func Offset: 0x1fc
	// Line 1075, Address: 0x2aab34, Func Offset: 0x204
	// Line 1076, Address: 0x2aab3c, Func Offset: 0x20c
	// Line 1077, Address: 0x2aab40, Func Offset: 0x210
	// Line 1078, Address: 0x2aab58, Func Offset: 0x228
	// Line 1079, Address: 0x2aab6c, Func Offset: 0x23c
	// Line 1080, Address: 0x2aab74, Func Offset: 0x244
	// Line 1081, Address: 0x2aab78, Func Offset: 0x248
	// Line 1082, Address: 0x2aab84, Func Offset: 0x254
	// Line 1083, Address: 0x2aab8c, Func Offset: 0x25c
	// Line 1084, Address: 0x2aab94, Func Offset: 0x264
	// Line 1085, Address: 0x2aabac, Func Offset: 0x27c
	// Line 1086, Address: 0x2aabc4, Func Offset: 0x294
	// Line 1089, Address: 0x2aabcc, Func Offset: 0x29c
	// Line 1090, Address: 0x2aabd4, Func Offset: 0x2a4
	// Line 1091, Address: 0x2aabe0, Func Offset: 0x2b0
	// Line 1092, Address: 0x2aabec, Func Offset: 0x2bc
	// Line 1093, Address: 0x2aabf4, Func Offset: 0x2c4
	// Line 1094, Address: 0x2aabf8, Func Offset: 0x2c8
	// Line 1095, Address: 0x2aac08, Func Offset: 0x2d8
	// Line 1096, Address: 0x2aac10, Func Offset: 0x2e0
	// Line 1097, Address: 0x2aac1c, Func Offset: 0x2ec
	// Line 1100, Address: 0x2aac24, Func Offset: 0x2f4
	// Line 1101, Address: 0x2aac28, Func Offset: 0x2f8
	// Line 1102, Address: 0x2aac38, Func Offset: 0x308
	// Line 1103, Address: 0x2aac48, Func Offset: 0x318
	// Line 1105, Address: 0x2aac5c, Func Offset: 0x32c
	// Line 1106, Address: 0x2aac60, Func Offset: 0x330
	// Line 1107, Address: 0x2aac78, Func Offset: 0x348
	// Line 1110, Address: 0x2aacf0, Func Offset: 0x3c0
	// Line 1111, Address: 0x2aad00, Func Offset: 0x3d0
	// Line 1112, Address: 0x2aad08, Func Offset: 0x3d8
	// Line 1119, Address: 0x2aad10, Func Offset: 0x3e0
	// Line 1120, Address: 0x2aad20, Func Offset: 0x3f0
	// Line 1121, Address: 0x2aad38, Func Offset: 0x408
	// Line 1122, Address: 0x2aad3c, Func Offset: 0x40c
	// Line 1123, Address: 0x2aad60, Func Offset: 0x430
	// Line 1125, Address: 0x2aad64, Func Offset: 0x434
	// Line 1126, Address: 0x2aad6c, Func Offset: 0x43c
	// Line 1127, Address: 0x2aad70, Func Offset: 0x440
	// Line 1129, Address: 0x2aad74, Func Offset: 0x444
	// Line 1130, Address: 0x2aad98, Func Offset: 0x468
	// Line 1132, Address: 0x2aada0, Func Offset: 0x470
	// Line 1133, Address: 0x2aadb4, Func Offset: 0x484
	// Line 1135, Address: 0x2aadb8, Func Offset: 0x488
	// Line 1136, Address: 0x2aadd8, Func Offset: 0x4a8
	// Line 1142, Address: 0x2aade0, Func Offset: 0x4b0
	// Line 1140, Address: 0x2aade4, Func Offset: 0x4b4
	// Line 1142, Address: 0x2aade8, Func Offset: 0x4b8
	// Line 1141, Address: 0x2aadec, Func Offset: 0x4bc
	// Line 1144, Address: 0x2aadf0, Func Offset: 0x4c0
	// Line 1145, Address: 0x2aae10, Func Offset: 0x4e0
	// Line 1146, Address: 0x2aae20, Func Offset: 0x4f0
	// Line 1147, Address: 0x2aae2c, Func Offset: 0x4fc
	// Line 1149, Address: 0x2aae38, Func Offset: 0x508
	// Line 1153, Address: 0x2aae44, Func Offset: 0x514
	// Line 1150, Address: 0x2aae48, Func Offset: 0x518
	// Line 1151, Address: 0x2aae4c, Func Offset: 0x51c
	// Line 1153, Address: 0x2aae50, Func Offset: 0x520
	// Line 1158, Address: 0x2aaea8, Func Offset: 0x578
	// Line 1159, Address: 0x2aaeac, Func Offset: 0x57c
	// Line 1158, Address: 0x2aaeb0, Func Offset: 0x580
	// Line 1160, Address: 0x2aaeb4, Func Offset: 0x584
	// Line 1161, Address: 0x2aaebc, Func Offset: 0x58c
	// Line 1162, Address: 0x2aaec0, Func Offset: 0x590
	// Line 1163, Address: 0x2aaec4, Func Offset: 0x594
	// Line 1162, Address: 0x2aaec8, Func Offset: 0x598
	// Line 1164, Address: 0x2aaecc, Func Offset: 0x59c
	// Line 1165, Address: 0x2aaed4, Func Offset: 0x5a4
	// Line 1166, Address: 0x2aaed8, Func Offset: 0x5a8
	// Line 1167, Address: 0x2aaedc, Func Offset: 0x5ac
	// Line 1166, Address: 0x2aaee0, Func Offset: 0x5b0
	// Line 1168, Address: 0x2aaee4, Func Offset: 0x5b4
	// Line 1169, Address: 0x2aaeec, Func Offset: 0x5bc
	// Line 1170, Address: 0x2aaef0, Func Offset: 0x5c0
	// Line 1171, Address: 0x2aaef4, Func Offset: 0x5c4
	// Line 1170, Address: 0x2aaef8, Func Offset: 0x5c8
	// Line 1172, Address: 0x2aaefc, Func Offset: 0x5cc
	// Line 1173, Address: 0x2aaf04, Func Offset: 0x5d4
	// Line 1174, Address: 0x2aaf08, Func Offset: 0x5d8
	// Line 1175, Address: 0x2aaf0c, Func Offset: 0x5dc
	// Line 1174, Address: 0x2aaf10, Func Offset: 0x5e0
	// Line 1175, Address: 0x2aaf14, Func Offset: 0x5e4
	// Line 1178, Address: 0x2aaf18, Func Offset: 0x5e8
	// Line 1179, Address: 0x2aaf20, Func Offset: 0x5f0
	// Line 1180, Address: 0x2aaf2c, Func Offset: 0x5fc
	// Line 1181, Address: 0x2aaf34, Func Offset: 0x604
	// Line 1182, Address: 0x2aaf40, Func Offset: 0x610
	// Line 1183, Address: 0x2aaf50, Func Offset: 0x620
	// Line 1185, Address: 0x2aaf58, Func Offset: 0x628
	// Line 1186, Address: 0x2aaf5c, Func Offset: 0x62c
	// Line 1187, Address: 0x2aaf60, Func Offset: 0x630
	// Func End, Address: 0x2aaf88, Func Offset: 0x658
}

// 
// Start address: 0x2aaf90
float calc_timer(EnemyScratchWork* ew)
{
	float t;
	// Line 1193, Address: 0x2aaf90, Func Offset: 0
	// Line 1191, Address: 0x2aaf9c, Func Offset: 0xc
	// Line 1193, Address: 0x2aafa4, Func Offset: 0x14
	// Line 1191, Address: 0x2aafac, Func Offset: 0x1c
	// Line 1193, Address: 0x2aafb0, Func Offset: 0x20
	// Line 1197, Address: 0x2aafe0, Func Offset: 0x50
	// Line 1200, Address: 0x2ab000, Func Offset: 0x70
	// Func End, Address: 0x2ab010, Func Offset: 0x80
}

// 
// Start address: 0x2ab010
void EnemyScratchAnimeControl(sfObj* obj)
{
	EnemyScratchWork* ew;
	float dt;
	float d;
	int sd;
	int fr;
	int ef;
	// Line 1204, Address: 0x2ab010, Func Offset: 0
	// Line 1208, Address: 0x2ab030, Func Offset: 0x20
	// Line 1209, Address: 0x2ab038, Func Offset: 0x28
	// Line 1210, Address: 0x2ab044, Func Offset: 0x34
	// Line 1211, Address: 0x2ab058, Func Offset: 0x48
	// Line 1212, Address: 0x2ab074, Func Offset: 0x64
	// Line 1213, Address: 0x2ab088, Func Offset: 0x78
	// Line 1214, Address: 0x2ab08c, Func Offset: 0x7c
	// Line 1215, Address: 0x2ab0a8, Func Offset: 0x98
	// Line 1216, Address: 0x2ab0ac, Func Offset: 0x9c
	// Line 1217, Address: 0x2ab0b8, Func Offset: 0xa8
	// Line 1218, Address: 0x2ab0bc, Func Offset: 0xac
	// Line 1219, Address: 0x2ab0c0, Func Offset: 0xb0
	// Line 1220, Address: 0x2ab0dc, Func Offset: 0xcc
	// Line 1221, Address: 0x2ab0ec, Func Offset: 0xdc
	// Line 1222, Address: 0x2ab0f8, Func Offset: 0xe8
	// Line 1221, Address: 0x2ab0fc, Func Offset: 0xec
	// Line 1222, Address: 0x2ab108, Func Offset: 0xf8
	// Line 1223, Address: 0x2ab110, Func Offset: 0x100
	// Line 1224, Address: 0x2ab11c, Func Offset: 0x10c
	// Line 1225, Address: 0x2ab120, Func Offset: 0x110
	// Line 1226, Address: 0x2ab12c, Func Offset: 0x11c
	// Line 1227, Address: 0x2ab130, Func Offset: 0x120
	// Line 1228, Address: 0x2ab134, Func Offset: 0x124
	// Line 1229, Address: 0x2ab138, Func Offset: 0x128
	// Line 1235, Address: 0x2ab1a4, Func Offset: 0x194
	// Line 1237, Address: 0x2ab1b0, Func Offset: 0x1a0
	// Line 1238, Address: 0x2ab1c4, Func Offset: 0x1b4
	// Line 1239, Address: 0x2ab1e0, Func Offset: 0x1d0
	// Line 1242, Address: 0x2ab210, Func Offset: 0x200
	// Line 1245, Address: 0x2ab218, Func Offset: 0x208
	// Line 1247, Address: 0x2ab220, Func Offset: 0x210
	// Line 1248, Address: 0x2ab224, Func Offset: 0x214
	// Line 1249, Address: 0x2ab22c, Func Offset: 0x21c
	// Line 1250, Address: 0x2ab230, Func Offset: 0x220
	// Line 1252, Address: 0x2ab240, Func Offset: 0x230
	// Line 1253, Address: 0x2ab248, Func Offset: 0x238
	// Line 1255, Address: 0x2ab268, Func Offset: 0x258
	// Line 1256, Address: 0x2ab28c, Func Offset: 0x27c
	// Line 1257, Address: 0x2ab2ac, Func Offset: 0x29c
	// Line 1258, Address: 0x2ab2b0, Func Offset: 0x2a0
	// Line 1259, Address: 0x2ab2bc, Func Offset: 0x2ac
	// Line 1262, Address: 0x2ab2f0, Func Offset: 0x2e0
	// Line 1265, Address: 0x2ab2f8, Func Offset: 0x2e8
	// Line 1266, Address: 0x2ab2fc, Func Offset: 0x2ec
	// Line 1267, Address: 0x2ab304, Func Offset: 0x2f4
	// Line 1268, Address: 0x2ab308, Func Offset: 0x2f8
	// Line 1269, Address: 0x2ab314, Func Offset: 0x304
	// Line 1270, Address: 0x2ab318, Func Offset: 0x308
	// Line 1272, Address: 0x2ab31c, Func Offset: 0x30c
	// Line 1273, Address: 0x2ab324, Func Offset: 0x314
	// Line 1274, Address: 0x2ab328, Func Offset: 0x318
	// Line 1275, Address: 0x2ab334, Func Offset: 0x324
	// Line 1276, Address: 0x2ab338, Func Offset: 0x328
	// Line 1277, Address: 0x2ab33c, Func Offset: 0x32c
	// Line 1279, Address: 0x2ab344, Func Offset: 0x334
	// Line 1280, Address: 0x2ab348, Func Offset: 0x338
	// Line 1281, Address: 0x2ab354, Func Offset: 0x344
	// Line 1282, Address: 0x2ab360, Func Offset: 0x350
	// Line 1283, Address: 0x2ab370, Func Offset: 0x360
	// Line 1285, Address: 0x2ab388, Func Offset: 0x378
	// Line 1286, Address: 0x2ab398, Func Offset: 0x388
	// Line 1287, Address: 0x2ab3a4, Func Offset: 0x394
	// Line 1286, Address: 0x2ab3b4, Func Offset: 0x3a4
	// Line 1287, Address: 0x2ab3b8, Func Offset: 0x3a8
	// Line 1289, Address: 0x2ab3c4, Func Offset: 0x3b4
	// Line 1291, Address: 0x2ab3ec, Func Offset: 0x3dc
	// Line 1293, Address: 0x2ab40c, Func Offset: 0x3fc
	// Line 1295, Address: 0x2ab434, Func Offset: 0x424
	// Line 1297, Address: 0x2ab45c, Func Offset: 0x44c
	// Line 1298, Address: 0x2ab468, Func Offset: 0x458
	// Line 1299, Address: 0x2ab46c, Func Offset: 0x45c
	// Line 1300, Address: 0x2ab470, Func Offset: 0x460
	// Line 1301, Address: 0x2ab494, Func Offset: 0x484
	// Line 1303, Address: 0x2ab498, Func Offset: 0x488
	// Line 1305, Address: 0x2ab4a0, Func Offset: 0x490
	// Line 1307, Address: 0x2ab4a4, Func Offset: 0x494
	// Line 1308, Address: 0x2ab4a8, Func Offset: 0x498
	// Line 1310, Address: 0x2ab4b0, Func Offset: 0x4a0
	// Line 1312, Address: 0x2ab4d8, Func Offset: 0x4c8
	// Line 1314, Address: 0x2ab4f4, Func Offset: 0x4e4
	// Line 1315, Address: 0x2ab4f8, Func Offset: 0x4e8
	// Line 1316, Address: 0x2ab504, Func Offset: 0x4f4
	// Line 1317, Address: 0x2ab514, Func Offset: 0x504
	// Line 1318, Address: 0x2ab518, Func Offset: 0x508
	// Line 1320, Address: 0x2ab528, Func Offset: 0x518
	// Line 1322, Address: 0x2ab52c, Func Offset: 0x51c
	// Line 1320, Address: 0x2ab534, Func Offset: 0x524
	// Line 1322, Address: 0x2ab53c, Func Offset: 0x52c
	// Line 1323, Address: 0x2ab544, Func Offset: 0x534
	// Line 1324, Address: 0x2ab550, Func Offset: 0x540
	// Line 1325, Address: 0x2ab558, Func Offset: 0x548
	// Line 1326, Address: 0x2ab568, Func Offset: 0x558
	// Line 1327, Address: 0x2ab578, Func Offset: 0x568
	// Line 1328, Address: 0x2ab57c, Func Offset: 0x56c
	// Line 1327, Address: 0x2ab580, Func Offset: 0x570
	// Line 1329, Address: 0x2ab584, Func Offset: 0x574
	// Line 1327, Address: 0x2ab588, Func Offset: 0x578
	// Line 1329, Address: 0x2ab58c, Func Offset: 0x57c
	// Line 1331, Address: 0x2ab590, Func Offset: 0x580
	// Line 1332, Address: 0x2ab5a0, Func Offset: 0x590
	// Line 1333, Address: 0x2ab5a8, Func Offset: 0x598
	// Line 1335, Address: 0x2ab5b4, Func Offset: 0x5a4
	// Line 1336, Address: 0x2ab5c0, Func Offset: 0x5b0
	// Line 1337, Address: 0x2ab5d0, Func Offset: 0x5c0
	// Line 1338, Address: 0x2ab5d4, Func Offset: 0x5c4
	// Line 1337, Address: 0x2ab5d8, Func Offset: 0x5c8
	// Line 1341, Address: 0x2ab5e0, Func Offset: 0x5d0
	// Line 1342, Address: 0x2ab5f0, Func Offset: 0x5e0
	// Line 1343, Address: 0x2ab5f8, Func Offset: 0x5e8
	// Line 1347, Address: 0x2ab604, Func Offset: 0x5f4
	// Line 1348, Address: 0x2ab608, Func Offset: 0x5f8
	// Func End, Address: 0x2ab62c, Func Offset: 0x61c
}

// 
// Start address: 0x2ab630
void EnemyScratchRecover(sfObj* obj)
{
	float heal;
	float dt;
	// Line 1352, Address: 0x2ab630, Func Offset: 0
	// Line 1355, Address: 0x2ab640, Func Offset: 0x10
	// Line 1359, Address: 0x2ab67c, Func Offset: 0x4c
	// Line 1360, Address: 0x2ab680, Func Offset: 0x50
	// Line 1362, Address: 0x2ab688, Func Offset: 0x58
	// Line 1363, Address: 0x2ab690, Func Offset: 0x60
	// Line 1364, Address: 0x2ab69c, Func Offset: 0x6c
	// Line 1366, Address: 0x2ab6b4, Func Offset: 0x84
	// Line 1367, Address: 0x2ab6c4, Func Offset: 0x94
	// Line 1368, Address: 0x2ab6d4, Func Offset: 0xa4
	// Line 1370, Address: 0x2ab6e8, Func Offset: 0xb8
	// Line 1371, Address: 0x2ab6f0, Func Offset: 0xc0
	// Line 1372, Address: 0x2ab6fc, Func Offset: 0xcc
	// Line 1373, Address: 0x2ab700, Func Offset: 0xd0
	// Func End, Address: 0x2ab714, Func Offset: 0xe4
}

// 
// Start address: 0x2ab720
void EnemyScratchGetWeaponPos(sfObj* obj, float* pos)
{
	float vec[4];
	float rot[4];
	// Line 1377, Address: 0x2ab720, Func Offset: 0
	// Line 1380, Address: 0x2ab728, Func Offset: 0x8
	// Line 1377, Address: 0x2ab72c, Func Offset: 0xc
	// Line 1380, Address: 0x2ab734, Func Offset: 0x14
	// Line 1381, Address: 0x2ab740, Func Offset: 0x20
	// Line 1382, Address: 0x2ab754, Func Offset: 0x34
	// Line 1383, Address: 0x2ab76c, Func Offset: 0x4c
	// Func End, Address: 0x2ab77c, Func Offset: 0x5c
}

// 
// Start address: 0x2ab780
int check_player_hp(sfObj* obj)
{
	// Line 1408, Address: 0x2ab780, Func Offset: 0
	// Line 1409, Address: 0x2ab788, Func Offset: 0x8
	// Line 1412, Address: 0x2ab7c8, Func Offset: 0x48
	// Line 1414, Address: 0x2ab7d0, Func Offset: 0x50
	// Line 1415, Address: 0x2ab7d8, Func Offset: 0x58
	// Func End, Address: 0x2ab7e8, Func Offset: 0x68
}

// 
// Start address: 0x2ab7f0
void check_abyss(sfObj* obj)
{
	// Line 1419, Address: 0x2ab7f0, Func Offset: 0
	// Line 1420, Address: 0x2ab800, Func Offset: 0x10
	// Line 1425, Address: 0x2ab870, Func Offset: 0x80
	// Line 1427, Address: 0x2ab878, Func Offset: 0x88
	// Func End, Address: 0x2ab88c, Func Offset: 0x9c
}

// 
// Start address: 0x2ab890
void EnemyScratchControl(sfObj* obj)
{
	EnemyScratchWork* ew;
	int step;
	float dt;
	float r;
	float dt;
	float rdt;
	float vec[4];
	// Line 1454, Address: 0x2ab890, Func Offset: 0
	// Line 1457, Address: 0x2ab8ac, Func Offset: 0x1c
	// Line 1467, Address: 0x2ab8b8, Func Offset: 0x28
	// Line 1469, Address: 0x2ab8d0, Func Offset: 0x40
	// Line 1470, Address: 0x2ab8dc, Func Offset: 0x4c
	// Line 1471, Address: 0x2ab8e4, Func Offset: 0x54
	// Line 1472, Address: 0x2ab900, Func Offset: 0x70
	// Line 1473, Address: 0x2ab908, Func Offset: 0x78
	// Line 1475, Address: 0x2ab914, Func Offset: 0x84
	// Line 1477, Address: 0x2ab918, Func Offset: 0x88
	// Line 1478, Address: 0x2ab920, Func Offset: 0x90
	// Line 1480, Address: 0x2ab928, Func Offset: 0x98
	// Line 1482, Address: 0x2ab934, Func Offset: 0xa4
	// Line 1484, Address: 0x2ab950, Func Offset: 0xc0
	// Line 1486, Address: 0x2ab994, Func Offset: 0x104
	// Line 1489, Address: 0x2ab9a8, Func Offset: 0x118
	// Line 1491, Address: 0x2ab9b8, Func Offset: 0x128
	// Line 1493, Address: 0x2ab9c0, Func Offset: 0x130
	// Line 1494, Address: 0x2ab9cc, Func Offset: 0x13c
	// Line 1495, Address: 0x2ab9d8, Func Offset: 0x148
	// Line 1496, Address: 0x2ab9e0, Func Offset: 0x150
	// Line 1505, Address: 0x2ab9e8, Func Offset: 0x158
	// Line 1506, Address: 0x2ab9f0, Func Offset: 0x160
	// Line 1507, Address: 0x2ab9fc, Func Offset: 0x16c
	// Line 1506, Address: 0x2aba04, Func Offset: 0x174
	// Line 1507, Address: 0x2aba0c, Func Offset: 0x17c
	// Line 1508, Address: 0x2aba34, Func Offset: 0x1a4
	// Line 1509, Address: 0x2aba40, Func Offset: 0x1b0
	// Line 1510, Address: 0x2aba5c, Func Offset: 0x1cc
	// Line 1511, Address: 0x2aba74, Func Offset: 0x1e4
	// Line 1512, Address: 0x2aba84, Func Offset: 0x1f4
	// Line 1514, Address: 0x2aba88, Func Offset: 0x1f8
	// Func End, Address: 0x2abaa8, Func Offset: 0x218
}

// 
// Start address: 0x2abab0
void EnemyScratchControlInit(sfObj* obj)
{
	float* pos;
	// Line 1518, Address: 0x2abab0, Func Offset: 0
	// Line 1520, Address: 0x2abac0, Func Offset: 0x10
	// Line 1521, Address: 0x2abacc, Func Offset: 0x1c
	// Line 1522, Address: 0x2abadc, Func Offset: 0x2c
	// Line 1523, Address: 0x2abae4, Func Offset: 0x34
	// Line 1524, Address: 0x2abaf0, Func Offset: 0x40
	// Line 1525, Address: 0x2abafc, Func Offset: 0x4c
	// Line 1526, Address: 0x2abb08, Func Offset: 0x58
	// Line 1527, Address: 0x2abb14, Func Offset: 0x64
	// Line 1529, Address: 0x2abb20, Func Offset: 0x70
	// Func End, Address: 0x2abb34, Func Offset: 0x84
}

// 
// Start address: 0x2abb40
void EnemyScratchControlWander(sfObj* obj)
{
	EnemyScratchWork* ew;
	float* pos;
	float* target;
	float tpos[4];
	float vec[4];
	float rot[4];
	float r;
	float dt;
	// Line 1533, Address: 0x2abb40, Func Offset: 0
	// Line 1540, Address: 0x2abb60, Func Offset: 0x20
	// Line 1541, Address: 0x2abb68, Func Offset: 0x28
	// Line 1542, Address: 0x2abb74, Func Offset: 0x34
	// Line 1543, Address: 0x2abb80, Func Offset: 0x40
	// Line 1544, Address: 0x2abb8c, Func Offset: 0x4c
	// Line 1545, Address: 0x2abb98, Func Offset: 0x58
	// Line 1547, Address: 0x2abbd8, Func Offset: 0x98
	// Line 1548, Address: 0x2abbe0, Func Offset: 0xa0
	// Line 1549, Address: 0x2abbec, Func Offset: 0xac
	// Line 1550, Address: 0x2abbf8, Func Offset: 0xb8
	// Line 1551, Address: 0x2abc04, Func Offset: 0xc4
	// Line 1554, Address: 0x2abc10, Func Offset: 0xd0
	// Line 1555, Address: 0x2abc24, Func Offset: 0xe4
	// Line 1556, Address: 0x2abc28, Func Offset: 0xe8
	// Line 1557, Address: 0x2abc34, Func Offset: 0xf4
	// Line 1559, Address: 0x2abc5c, Func Offset: 0x11c
	// Line 1560, Address: 0x2abc78, Func Offset: 0x138
	// Line 1561, Address: 0x2abc7c, Func Offset: 0x13c
	// Line 1562, Address: 0x2abc90, Func Offset: 0x150
	// Line 1563, Address: 0x2abca4, Func Offset: 0x164
	// Line 1565, Address: 0x2abce8, Func Offset: 0x1a8
	// Line 1566, Address: 0x2abcf0, Func Offset: 0x1b0
	// Line 1568, Address: 0x2abcf8, Func Offset: 0x1b8
	// Line 1569, Address: 0x2abd1c, Func Offset: 0x1dc
	// Line 1570, Address: 0x2abd24, Func Offset: 0x1e4
	// Line 1571, Address: 0x2abd30, Func Offset: 0x1f0
	// Line 1572, Address: 0x2abd5c, Func Offset: 0x21c
	// Line 1573, Address: 0x2abd64, Func Offset: 0x224
	// Line 1574, Address: 0x2abd70, Func Offset: 0x230
	// Line 1573, Address: 0x2abd74, Func Offset: 0x234
	// Line 1574, Address: 0x2abd78, Func Offset: 0x238
	// Line 1573, Address: 0x2abd7c, Func Offset: 0x23c
	// Line 1574, Address: 0x2abd84, Func Offset: 0x244
	// Line 1575, Address: 0x2abd8c, Func Offset: 0x24c
	// Line 1577, Address: 0x2abd94, Func Offset: 0x254
	// Line 1578, Address: 0x2abd98, Func Offset: 0x258
	// Line 1579, Address: 0x2abdac, Func Offset: 0x26c
	// Line 1578, Address: 0x2abdb0, Func Offset: 0x270
	// Line 1579, Address: 0x2abdb4, Func Offset: 0x274
	// Line 1578, Address: 0x2abdb8, Func Offset: 0x278
	// Line 1579, Address: 0x2abdc0, Func Offset: 0x280
	// Line 1582, Address: 0x2abdc8, Func Offset: 0x288
	// Line 1585, Address: 0x2abe0c, Func Offset: 0x2cc
	// Line 1586, Address: 0x2abe10, Func Offset: 0x2d0
	// Line 1587, Address: 0x2abe40, Func Offset: 0x300
	// Line 1588, Address: 0x2abe48, Func Offset: 0x308
	// Line 1589, Address: 0x2abe50, Func Offset: 0x310
	// Line 1590, Address: 0x2abe5c, Func Offset: 0x31c
	// Line 1591, Address: 0x2abe68, Func Offset: 0x328
	// Line 1590, Address: 0x2abe6c, Func Offset: 0x32c
	// Line 1591, Address: 0x2abe70, Func Offset: 0x330
	// Line 1590, Address: 0x2abe74, Func Offset: 0x334
	// Line 1591, Address: 0x2abe7c, Func Offset: 0x33c
	// Line 1592, Address: 0x2abe84, Func Offset: 0x344
	// Line 1593, Address: 0x2abe88, Func Offset: 0x348
	// Line 1595, Address: 0x2abe90, Func Offset: 0x350
	// Line 1598, Address: 0x2abed8, Func Offset: 0x398
	// Line 1600, Address: 0x2abeec, Func Offset: 0x3ac
	// Line 1601, Address: 0x2abef4, Func Offset: 0x3b4
	// Line 1602, Address: 0x2abefc, Func Offset: 0x3bc
	// Line 1603, Address: 0x2abf00, Func Offset: 0x3c0
	// Line 1605, Address: 0x2abf08, Func Offset: 0x3c8
	// Line 1606, Address: 0x2abf10, Func Offset: 0x3d0
	// Line 1605, Address: 0x2abf14, Func Offset: 0x3d4
	// Line 1606, Address: 0x2abf18, Func Offset: 0x3d8
	// Line 1605, Address: 0x2abf1c, Func Offset: 0x3dc
	// Line 1606, Address: 0x2abf20, Func Offset: 0x3e0
	// Line 1605, Address: 0x2abf24, Func Offset: 0x3e4
	// Line 1606, Address: 0x2abf48, Func Offset: 0x408
	// Line 1607, Address: 0x2abf50, Func Offset: 0x410
	// Line 1608, Address: 0x2abf5c, Func Offset: 0x41c
	// Line 1609, Address: 0x2abf64, Func Offset: 0x424
	// Line 1610, Address: 0x2abf68, Func Offset: 0x428
	// Line 1611, Address: 0x2abf78, Func Offset: 0x438
	// Line 1612, Address: 0x2abf84, Func Offset: 0x444
	// Line 1614, Address: 0x2abf94, Func Offset: 0x454
	// Line 1612, Address: 0x2abf98, Func Offset: 0x458
	// Line 1614, Address: 0x2abf9c, Func Offset: 0x45c
	// Line 1618, Address: 0x2abfd4, Func Offset: 0x494
	// Line 1619, Address: 0x2abfdc, Func Offset: 0x49c
	// Line 1620, Address: 0x2abfe4, Func Offset: 0x4a4
	// Line 1622, Address: 0x2abfe8, Func Offset: 0x4a8
	// Line 1623, Address: 0x2ac008, Func Offset: 0x4c8
	// Line 1624, Address: 0x2ac028, Func Offset: 0x4e8
	// Line 1625, Address: 0x2ac030, Func Offset: 0x4f0
	// Line 1626, Address: 0x2ac038, Func Offset: 0x4f8
	// Line 1627, Address: 0x2ac044, Func Offset: 0x504
	// Line 1629, Address: 0x2ac050, Func Offset: 0x510
	// Line 1630, Address: 0x2ac07c, Func Offset: 0x53c
	// Line 1631, Address: 0x2ac084, Func Offset: 0x544
	// Line 1632, Address: 0x2ac090, Func Offset: 0x550
	// Line 1631, Address: 0x2ac094, Func Offset: 0x554
	// Line 1632, Address: 0x2ac098, Func Offset: 0x558
	// Line 1631, Address: 0x2ac09c, Func Offset: 0x55c
	// Line 1632, Address: 0x2ac0a4, Func Offset: 0x564
	// Line 1633, Address: 0x2ac0ac, Func Offset: 0x56c
	// Line 1634, Address: 0x2ac0b8, Func Offset: 0x578
	// Line 1636, Address: 0x2ac0c4, Func Offset: 0x584
	// Line 1637, Address: 0x2ac0d0, Func Offset: 0x590
	// Line 1641, Address: 0x2ac0d8, Func Offset: 0x598
	// Line 1642, Address: 0x2ac0f4, Func Offset: 0x5b4
	// Line 1643, Address: 0x2ac100, Func Offset: 0x5c0
	// Line 1646, Address: 0x2ac10c, Func Offset: 0x5cc
	// Line 1647, Address: 0x2ac110, Func Offset: 0x5d0
	// Line 1648, Address: 0x2ac118, Func Offset: 0x5d8
	// Line 1649, Address: 0x2ac134, Func Offset: 0x5f4
	// Line 1650, Address: 0x2ac13c, Func Offset: 0x5fc
	// Line 1651, Address: 0x2ac140, Func Offset: 0x600
	// Func End, Address: 0x2ac164, Func Offset: 0x624
}

// 
// Start address: 0x2ac170
void EnemyScratchControlPerform(sfObj* obj)
{
	EnemyScratchWork* ew;
	float wpos[4];
	float rot[4];
	float dt;
	float r;
	float d;
	float p1[4];
	float p2[4];
	// Line 1655, Address: 0x2ac170, Func Offset: 0
	// Line 1660, Address: 0x2ac18c, Func Offset: 0x1c
	// Line 1661, Address: 0x2ac194, Func Offset: 0x24
	// Line 1662, Address: 0x2ac1a0, Func Offset: 0x30
	// Line 1663, Address: 0x2ac1ac, Func Offset: 0x3c
	// Line 1664, Address: 0x2ac1bc, Func Offset: 0x4c
	// Line 1665, Address: 0x2ac1cc, Func Offset: 0x5c
	// Line 1666, Address: 0x2ac1e0, Func Offset: 0x70
	// Line 1667, Address: 0x2ac20c, Func Offset: 0x9c
	// Line 1668, Address: 0x2ac210, Func Offset: 0xa0
	// Line 1669, Address: 0x2ac218, Func Offset: 0xa8
	// Line 1670, Address: 0x2ac224, Func Offset: 0xb4
	// Line 1671, Address: 0x2ac230, Func Offset: 0xc0
	// Line 1673, Address: 0x2ac23c, Func Offset: 0xcc
	// Line 1674, Address: 0x2ac248, Func Offset: 0xd8
	// Line 1676, Address: 0x2ac250, Func Offset: 0xe0
	// Line 1677, Address: 0x2ac260, Func Offset: 0xf0
	// Line 1678, Address: 0x2ac268, Func Offset: 0xf8
	// Line 1679, Address: 0x2ac274, Func Offset: 0x104
	// Line 1681, Address: 0x2ac280, Func Offset: 0x110
	// Line 1679, Address: 0x2ac284, Func Offset: 0x114
	// Line 1681, Address: 0x2ac294, Func Offset: 0x124
	// Line 1683, Address: 0x2ac29c, Func Offset: 0x12c
	// Line 1684, Address: 0x2ac2a4, Func Offset: 0x134
	// Line 1686, Address: 0x2ac2a8, Func Offset: 0x138
	// Line 1687, Address: 0x2ac2d8, Func Offset: 0x168
	// Line 1688, Address: 0x2ac2e0, Func Offset: 0x170
	// Line 1691, Address: 0x2ac2e8, Func Offset: 0x178
	// Line 1692, Address: 0x2ac304, Func Offset: 0x194
	// Line 1693, Address: 0x2ac30c, Func Offset: 0x19c
	// Line 1694, Address: 0x2ac318, Func Offset: 0x1a8
	// Line 1696, Address: 0x2ac320, Func Offset: 0x1b0
	// Line 1698, Address: 0x2ac33c, Func Offset: 0x1cc
	// Line 1700, Address: 0x2ac360, Func Offset: 0x1f0
	// Line 1701, Address: 0x2ac368, Func Offset: 0x1f8
	// Line 1703, Address: 0x2ac370, Func Offset: 0x200
	// Line 1704, Address: 0x2ac388, Func Offset: 0x218
	// Line 1705, Address: 0x2ac398, Func Offset: 0x228
	// Line 1706, Address: 0x2ac3a4, Func Offset: 0x234
	// Line 1707, Address: 0x2ac3b0, Func Offset: 0x240
	// Line 1708, Address: 0x2ac3bc, Func Offset: 0x24c
	// Line 1709, Address: 0x2ac3c8, Func Offset: 0x258
	// Line 1710, Address: 0x2ac3d0, Func Offset: 0x260
	// Line 1711, Address: 0x2ac3dc, Func Offset: 0x26c
	// Line 1713, Address: 0x2ac3e8, Func Offset: 0x278
	// Line 1714, Address: 0x2ac3f4, Func Offset: 0x284
	// Line 1715, Address: 0x2ac3fc, Func Offset: 0x28c
	// Line 1716, Address: 0x2ac400, Func Offset: 0x290
	// Line 1717, Address: 0x2ac41c, Func Offset: 0x2ac
	// Line 1718, Address: 0x2ac424, Func Offset: 0x2b4
	// Line 1719, Address: 0x2ac430, Func Offset: 0x2c0
	// Line 1722, Address: 0x2ac438, Func Offset: 0x2c8
	// Line 1724, Address: 0x2ac478, Func Offset: 0x308
	// Line 1725, Address: 0x2ac484, Func Offset: 0x314
	// Line 1726, Address: 0x2ac490, Func Offset: 0x320
	// Line 1727, Address: 0x2ac498, Func Offset: 0x328
	// Line 1729, Address: 0x2ac4a8, Func Offset: 0x338
	// Line 1730, Address: 0x2ac4b0, Func Offset: 0x340
	// Line 1733, Address: 0x2ac4c4, Func Offset: 0x354
	// Line 1734, Address: 0x2ac4dc, Func Offset: 0x36c
	// Line 1735, Address: 0x2ac4e4, Func Offset: 0x374
	// Line 1736, Address: 0x2ac4f0, Func Offset: 0x380
	// Line 1738, Address: 0x2ac4f8, Func Offset: 0x388
	// Line 1739, Address: 0x2ac51c, Func Offset: 0x3ac
	// Line 1740, Address: 0x2ac524, Func Offset: 0x3b4
	// Line 1741, Address: 0x2ac52c, Func Offset: 0x3bc
	// Line 1742, Address: 0x2ac538, Func Offset: 0x3c8
	// Line 1743, Address: 0x2ac544, Func Offset: 0x3d4
	// Line 1745, Address: 0x2ac56c, Func Offset: 0x3fc
	// Line 1746, Address: 0x2ac590, Func Offset: 0x420
	// Line 1748, Address: 0x2ac598, Func Offset: 0x428
	// Line 1749, Address: 0x2ac5b0, Func Offset: 0x440
	// Line 1750, Address: 0x2ac5b8, Func Offset: 0x448
	// Line 1751, Address: 0x2ac5c4, Func Offset: 0x454
	// Line 1752, Address: 0x2ac5d0, Func Offset: 0x460
	// Line 1754, Address: 0x2ac5d8, Func Offset: 0x468
	// Line 1756, Address: 0x2ac5f0, Func Offset: 0x480
	// Line 1758, Address: 0x2ac5f8, Func Offset: 0x488
	// Line 1759, Address: 0x2ac608, Func Offset: 0x498
	// Line 1760, Address: 0x2ac614, Func Offset: 0x4a4
	// Line 1761, Address: 0x2ac620, Func Offset: 0x4b0
	// Line 1762, Address: 0x2ac62c, Func Offset: 0x4bc
	// Line 1763, Address: 0x2ac634, Func Offset: 0x4c4
	// Line 1764, Address: 0x2ac63c, Func Offset: 0x4cc
	// Line 1765, Address: 0x2ac648, Func Offset: 0x4d8
	// Line 1766, Address: 0x2ac688, Func Offset: 0x518
	// Line 1767, Address: 0x2ac690, Func Offset: 0x520
	// Line 1768, Address: 0x2ac698, Func Offset: 0x528
	// Line 1769, Address: 0x2ac6a4, Func Offset: 0x534
	// Line 1770, Address: 0x2ac6b0, Func Offset: 0x540
	// Line 1769, Address: 0x2ac6b4, Func Offset: 0x544
	// Line 1770, Address: 0x2ac6b8, Func Offset: 0x548
	// Line 1769, Address: 0x2ac6bc, Func Offset: 0x54c
	// Line 1770, Address: 0x2ac6d0, Func Offset: 0x560
	// Line 1772, Address: 0x2ac6d8, Func Offset: 0x568
	// Line 1774, Address: 0x2ac6e0, Func Offset: 0x570
	// Line 1776, Address: 0x2ac710, Func Offset: 0x5a0
	// Line 1777, Address: 0x2ac71c, Func Offset: 0x5ac
	// Line 1778, Address: 0x2ac728, Func Offset: 0x5b8
	// Line 1779, Address: 0x2ac748, Func Offset: 0x5d8
	// Line 1780, Address: 0x2ac750, Func Offset: 0x5e0
	// Line 1781, Address: 0x2ac75c, Func Offset: 0x5ec
	// Line 1783, Address: 0x2ac768, Func Offset: 0x5f8
	// Line 1785, Address: 0x2ac770, Func Offset: 0x600
	// Line 1787, Address: 0x2ac788, Func Offset: 0x618
	// Line 1789, Address: 0x2ac790, Func Offset: 0x620
	// Line 1793, Address: 0x2ac7a8, Func Offset: 0x638
	// Line 1794, Address: 0x2ac7b0, Func Offset: 0x640
	// Line 1793, Address: 0x2ac7b4, Func Offset: 0x644
	// Line 1794, Address: 0x2ac7b8, Func Offset: 0x648
	// Line 1795, Address: 0x2ac7c8, Func Offset: 0x658
	// Line 1797, Address: 0x2ac7d8, Func Offset: 0x668
	// Line 1798, Address: 0x2ac7e0, Func Offset: 0x670
	// Line 1797, Address: 0x2ac7e4, Func Offset: 0x674
	// Line 1798, Address: 0x2ac7fc, Func Offset: 0x68c
	// Line 1800, Address: 0x2ac818, Func Offset: 0x6a8
	// Line 1801, Address: 0x2ac81c, Func Offset: 0x6ac
	// Line 1800, Address: 0x2ac820, Func Offset: 0x6b0
	// Line 1801, Address: 0x2ac824, Func Offset: 0x6b4
	// Line 1803, Address: 0x2ac874, Func Offset: 0x704
	// Line 1805, Address: 0x2ac89c, Func Offset: 0x72c
	// Line 1806, Address: 0x2ac8a0, Func Offset: 0x730
	// Line 1805, Address: 0x2ac8a4, Func Offset: 0x734
	// Line 1806, Address: 0x2ac8a8, Func Offset: 0x738
	// Line 1807, Address: 0x2ac8b0, Func Offset: 0x740
	// Line 1808, Address: 0x2ac8c8, Func Offset: 0x758
	// Line 1809, Address: 0x2ac8dc, Func Offset: 0x76c
	// Line 1810, Address: 0x2ac8e0, Func Offset: 0x770
	// Line 1809, Address: 0x2ac8e4, Func Offset: 0x774
	// Line 1810, Address: 0x2ac8e8, Func Offset: 0x778
	// Line 1811, Address: 0x2ac8f0, Func Offset: 0x780
	// Line 1812, Address: 0x2ac8f4, Func Offset: 0x784
	// Line 1813, Address: 0x2ac910, Func Offset: 0x7a0
	// Line 1814, Address: 0x2ac918, Func Offset: 0x7a8
	// Line 1817, Address: 0x2ac91c, Func Offset: 0x7ac
	// Line 1818, Address: 0x2ac928, Func Offset: 0x7b8
	// Line 1820, Address: 0x2ac930, Func Offset: 0x7c0
	// Func End, Address: 0x2ac950, Func Offset: 0x7e0
}

// 
// Start address: 0x2ac950
void EnemyScratchControlCaution(sfObj* obj)
{
	EnemyScratchWork* ew;
	float* pos;
	float* ppos;
	float tpos[4];
	float vec[4];
	float rot[4];
	float trot[4];
	float dt;
	float r;
	float ra;
	float d;
	float d2;
	int f;
	EnemyScratchAnime new_anime;
	EnemyScratchAnime old_anime;
	// Line 1824, Address: 0x2ac950, Func Offset: 0
	// Line 1831, Address: 0x2ac97c, Func Offset: 0x2c
	// Line 1832, Address: 0x2ac984, Func Offset: 0x34
	// Line 1833, Address: 0x2ac990, Func Offset: 0x40
	// Line 1834, Address: 0x2ac99c, Func Offset: 0x4c
	// Line 1835, Address: 0x2ac9a8, Func Offset: 0x58
	// Line 1836, Address: 0x2ac9b4, Func Offset: 0x64
	// Line 1837, Address: 0x2ac9c4, Func Offset: 0x74
	// Line 1838, Address: 0x2ac9d4, Func Offset: 0x84
	// Line 1841, Address: 0x2ac9e8, Func Offset: 0x98
	// Line 1840, Address: 0x2ac9ec, Func Offset: 0x9c
	// Line 1841, Address: 0x2ac9f0, Func Offset: 0xa0
	// Line 1842, Address: 0x2aca1c, Func Offset: 0xcc
	// Line 1843, Address: 0x2aca20, Func Offset: 0xd0
	// Line 1844, Address: 0x2aca28, Func Offset: 0xd8
	// Line 1845, Address: 0x2aca34, Func Offset: 0xe4
	// Line 1847, Address: 0x2aca40, Func Offset: 0xf0
	// Line 1848, Address: 0x2aca4c, Func Offset: 0xfc
	// Line 1849, Address: 0x2aca54, Func Offset: 0x104
	// Line 1850, Address: 0x2aca58, Func Offset: 0x108
	// Line 1851, Address: 0x2aca7c, Func Offset: 0x12c
	// Line 1853, Address: 0x2aca80, Func Offset: 0x130
	// Line 1854, Address: 0x2aca88, Func Offset: 0x138
	// Line 1853, Address: 0x2aca8c, Func Offset: 0x13c
	// Line 1854, Address: 0x2aca90, Func Offset: 0x140
	// Line 1853, Address: 0x2aca94, Func Offset: 0x144
	// Line 1854, Address: 0x2aca98, Func Offset: 0x148
	// Line 1853, Address: 0x2aca9c, Func Offset: 0x14c
	// Line 1854, Address: 0x2acabc, Func Offset: 0x16c
	// Line 1855, Address: 0x2acac4, Func Offset: 0x174
	// Line 1856, Address: 0x2acad0, Func Offset: 0x180
	// Line 1858, Address: 0x2acad8, Func Offset: 0x188
	// Line 1859, Address: 0x2acafc, Func Offset: 0x1ac
	// Line 1861, Address: 0x2acb00, Func Offset: 0x1b0
	// Line 1862, Address: 0x2acb18, Func Offset: 0x1c8
	// Line 1863, Address: 0x2acb34, Func Offset: 0x1e4
	// Line 1864, Address: 0x2acb44, Func Offset: 0x1f4
	// Line 1865, Address: 0x2acb60, Func Offset: 0x210
	// Line 1866, Address: 0x2acb68, Func Offset: 0x218
	// Line 1865, Address: 0x2acb74, Func Offset: 0x224
	// Line 1866, Address: 0x2acb98, Func Offset: 0x248
	// Line 1867, Address: 0x2acba0, Func Offset: 0x250
	// Line 1869, Address: 0x2acbac, Func Offset: 0x25c
	// Line 1870, Address: 0x2acbb0, Func Offset: 0x260
	// Line 1871, Address: 0x2acbe0, Func Offset: 0x290
	// Line 1872, Address: 0x2acbe8, Func Offset: 0x298
	// Line 1874, Address: 0x2acbf0, Func Offset: 0x2a0
	// Line 1876, Address: 0x2acbf8, Func Offset: 0x2a8
	// Line 1878, Address: 0x2acc48, Func Offset: 0x2f8
	// Line 1879, Address: 0x2acc50, Func Offset: 0x300
	// Line 1881, Address: 0x2acc58, Func Offset: 0x308
	// Line 1882, Address: 0x2acc84, Func Offset: 0x334
	// Line 1884, Address: 0x2acc98, Func Offset: 0x348
	// Line 1887, Address: 0x2acca0, Func Offset: 0x350
	// Line 1889, Address: 0x2accc4, Func Offset: 0x374
	// Line 1891, Address: 0x2accec, Func Offset: 0x39c
	// Line 1892, Address: 0x2acd10, Func Offset: 0x3c0
	// Line 1893, Address: 0x2acd18, Func Offset: 0x3c8
	// Line 1894, Address: 0x2acd20, Func Offset: 0x3d0
	// Line 1896, Address: 0x2acd38, Func Offset: 0x3e8
	// Line 1897, Address: 0x2acd40, Func Offset: 0x3f0
	// Line 1898, Address: 0x2acd44, Func Offset: 0x3f4
	// Line 1899, Address: 0x2acd48, Func Offset: 0x3f8
	// Line 1900, Address: 0x2acd60, Func Offset: 0x410
	// Line 1901, Address: 0x2acd6c, Func Offset: 0x41c
	// Line 1902, Address: 0x2acd7c, Func Offset: 0x42c
	// Line 1903, Address: 0x2acd84, Func Offset: 0x434
	// Line 1904, Address: 0x2acd90, Func Offset: 0x440
	// Line 1905, Address: 0x2acd9c, Func Offset: 0x44c
	// Line 1906, Address: 0x2acda0, Func Offset: 0x450
	// Line 1907, Address: 0x2acdb4, Func Offset: 0x464
	// Line 1908, Address: 0x2acdc4, Func Offset: 0x474
	// Line 1909, Address: 0x2acdf4, Func Offset: 0x4a4
	// Line 1910, Address: 0x2ace10, Func Offset: 0x4c0
	// Line 1911, Address: 0x2ace28, Func Offset: 0x4d8
	// Line 1912, Address: 0x2ace44, Func Offset: 0x4f4
	// Line 1913, Address: 0x2ace54, Func Offset: 0x504
	// Line 1914, Address: 0x2ace70, Func Offset: 0x520
	// Line 1915, Address: 0x2ace88, Func Offset: 0x538
	// Line 1917, Address: 0x2acea4, Func Offset: 0x554
	// Line 1918, Address: 0x2aceac, Func Offset: 0x55c
	// Line 1919, Address: 0x2aceb4, Func Offset: 0x564
	// Line 1921, Address: 0x2aceb8, Func Offset: 0x568
	// Line 1923, Address: 0x2aced0, Func Offset: 0x580
	// Line 1928, Address: 0x2aced8, Func Offset: 0x588
	// Line 1930, Address: 0x2acf00, Func Offset: 0x5b0
	// Line 1931, Address: 0x2acf04, Func Offset: 0x5b4
	// Line 1932, Address: 0x2acf08, Func Offset: 0x5b8
	// Line 1933, Address: 0x2acf14, Func Offset: 0x5c4
	// Line 1934, Address: 0x2acf20, Func Offset: 0x5d0
	// Line 1936, Address: 0x2acf3c, Func Offset: 0x5ec
	// Line 1937, Address: 0x2acf40, Func Offset: 0x5f0
	// Line 1940, Address: 0x2acf68, Func Offset: 0x618
	// Line 1941, Address: 0x2acf8c, Func Offset: 0x63c
	// Line 1942, Address: 0x2acfbc, Func Offset: 0x66c
	// Line 1943, Address: 0x2acfc4, Func Offset: 0x674
	// Line 1944, Address: 0x2acfd0, Func Offset: 0x680
	// Line 1945, Address: 0x2acfdc, Func Offset: 0x68c
	// Line 1946, Address: 0x2acfe0, Func Offset: 0x690
	// Line 1947, Address: 0x2acfe8, Func Offset: 0x698
	// Line 1949, Address: 0x2ad01c, Func Offset: 0x6cc
	// Line 1950, Address: 0x2ad024, Func Offset: 0x6d4
	// Line 1952, Address: 0x2ad02c, Func Offset: 0x6dc
	// Line 1953, Address: 0x2ad030, Func Offset: 0x6e0
	// Line 1954, Address: 0x2ad03c, Func Offset: 0x6ec
	// Line 1955, Address: 0x2ad044, Func Offset: 0x6f4
	// Line 1956, Address: 0x2ad048, Func Offset: 0x6f8
	// Line 1960, Address: 0x2ad090, Func Offset: 0x740
	// Line 1961, Address: 0x2ad0c0, Func Offset: 0x770
	// Line 1962, Address: 0x2ad0c8, Func Offset: 0x778
	// Line 1963, Address: 0x2ad0d0, Func Offset: 0x780
	// Line 1964, Address: 0x2ad0dc, Func Offset: 0x78c
	// Line 1965, Address: 0x2ad0e0, Func Offset: 0x790
	// Line 1967, Address: 0x2ad0e8, Func Offset: 0x798
	// Line 1968, Address: 0x2ad0f4, Func Offset: 0x7a4
	// Line 1969, Address: 0x2ad0f8, Func Offset: 0x7a8
	// Line 1971, Address: 0x2ad104, Func Offset: 0x7b4
	// Line 1972, Address: 0x2ad108, Func Offset: 0x7b8
	// Line 1973, Address: 0x2ad124, Func Offset: 0x7d4
	// Line 1974, Address: 0x2ad12c, Func Offset: 0x7dc
	// Line 1975, Address: 0x2ad130, Func Offset: 0x7e0
	// Func End, Address: 0x2ad160, Func Offset: 0x810
}

// 
// Start address: 0x2ad160
void EnemyScratchControlChase(sfObj* obj)
{
	EnemyScratchWork* ew;
	float* pos;
	float* ppos;
	float tpos[4];
	float rot[4];
	float dt;
	float d;
	float dir[4];
	// Line 1979, Address: 0x2ad160, Func Offset: 0
	// Line 1985, Address: 0x2ad180, Func Offset: 0x20
	// Line 1986, Address: 0x2ad188, Func Offset: 0x28
	// Line 1987, Address: 0x2ad194, Func Offset: 0x34
	// Line 1988, Address: 0x2ad1a0, Func Offset: 0x40
	// Line 1989, Address: 0x2ad1ac, Func Offset: 0x4c
	// Line 1991, Address: 0x2ad1d0, Func Offset: 0x70
	// Line 1992, Address: 0x2ad1d8, Func Offset: 0x78
	// Line 1993, Address: 0x2ad1e4, Func Offset: 0x84
	// Line 1994, Address: 0x2ad1ec, Func Offset: 0x8c
	// Line 1995, Address: 0x2ad1f8, Func Offset: 0x98
	// Line 1996, Address: 0x2ad204, Func Offset: 0xa4
	// Line 1997, Address: 0x2ad208, Func Offset: 0xa8
	// Line 1998, Address: 0x2ad214, Func Offset: 0xb4
	// Line 1999, Address: 0x2ad21c, Func Offset: 0xbc
	// Line 2000, Address: 0x2ad220, Func Offset: 0xc0
	// Line 2001, Address: 0x2ad230, Func Offset: 0xd0
	// Line 2002, Address: 0x2ad23c, Func Offset: 0xdc
	// Line 2004, Address: 0x2ad260, Func Offset: 0x100
	// Line 2005, Address: 0x2ad268, Func Offset: 0x108
	// Line 2007, Address: 0x2ad270, Func Offset: 0x110
	// Line 2009, Address: 0x2ad2a0, Func Offset: 0x140
	// Line 2010, Address: 0x2ad2b8, Func Offset: 0x158
	// Line 2011, Address: 0x2ad2c0, Func Offset: 0x160
	// Line 2012, Address: 0x2ad2d8, Func Offset: 0x178
	// Line 2014, Address: 0x2ad2e0, Func Offset: 0x180
	// Line 2017, Address: 0x2ad2e8, Func Offset: 0x188
	// Line 2018, Address: 0x2ad32c, Func Offset: 0x1cc
	// Line 2019, Address: 0x2ad338, Func Offset: 0x1d8
	// Line 2023, Address: 0x2ad398, Func Offset: 0x238
	// Line 2024, Address: 0x2ad3a0, Func Offset: 0x240
	// Line 2025, Address: 0x2ad3b0, Func Offset: 0x250
	// Line 2027, Address: 0x2ad3ec, Func Offset: 0x28c
	// Line 2028, Address: 0x2ad3f4, Func Offset: 0x294
	// Line 2029, Address: 0x2ad400, Func Offset: 0x2a0
	// Line 2033, Address: 0x2ad40c, Func Offset: 0x2ac
	// Line 2034, Address: 0x2ad410, Func Offset: 0x2b0
	// Line 2035, Address: 0x2ad42c, Func Offset: 0x2cc
	// Line 2036, Address: 0x2ad434, Func Offset: 0x2d4
	// Line 2037, Address: 0x2ad438, Func Offset: 0x2d8
	// Func End, Address: 0x2ad45c, Func Offset: 0x2fc
}

// 
// Start address: 0x2ad460
void set_pos_behind_player(sfObj* obj)
{
	float* ppos;
	float* prot;
	float tpos[4];
	float tppos[4];
	float trot[4];
	EnemyMeasureResult mres;
	int n;
	float vec[4];
	// Line 2041, Address: 0x2ad460, Func Offset: 0
	// Line 2048, Address: 0x2ad474, Func Offset: 0x14
	// Line 2049, Address: 0x2ad484, Func Offset: 0x24
	// Line 2050, Address: 0x2ad48c, Func Offset: 0x2c
	// Line 2051, Address: 0x2ad4b0, Func Offset: 0x50
	// Line 2052, Address: 0x2ad4b8, Func Offset: 0x58
	// Line 2053, Address: 0x2ad4c4, Func Offset: 0x64
	// Line 2052, Address: 0x2ad4cc, Func Offset: 0x6c
	// Line 2053, Address: 0x2ad4d0, Func Offset: 0x70
	// Line 2055, Address: 0x2ad4e0, Func Offset: 0x80
	// Line 2056, Address: 0x2ad4e8, Func Offset: 0x88
	// Line 2057, Address: 0x2ad510, Func Offset: 0xb0
	// Line 2058, Address: 0x2ad530, Func Offset: 0xd0
	// Line 2059, Address: 0x2ad540, Func Offset: 0xe0
	// Line 2061, Address: 0x2ad550, Func Offset: 0xf0
	// Line 2060, Address: 0x2ad554, Func Offset: 0xf4
	// Line 2061, Address: 0x2ad560, Func Offset: 0x100
	// Line 2060, Address: 0x2ad564, Func Offset: 0x104
	// Line 2061, Address: 0x2ad568, Func Offset: 0x108
	// Line 2062, Address: 0x2ad578, Func Offset: 0x118
	// Line 2064, Address: 0x2ad58c, Func Offset: 0x12c
	// Line 2065, Address: 0x2ad598, Func Offset: 0x138
	// Line 2066, Address: 0x2ad5ac, Func Offset: 0x14c
	// Line 2068, Address: 0x2ad5c4, Func Offset: 0x164
	// Line 2069, Address: 0x2ad5d0, Func Offset: 0x170
	// Line 2070, Address: 0x2ad5d4, Func Offset: 0x174
	// Line 2071, Address: 0x2ad5d8, Func Offset: 0x178
	// Line 2072, Address: 0x2ad5ec, Func Offset: 0x18c
	// Line 2074, Address: 0x2ad610, Func Offset: 0x1b0
	// Line 2075, Address: 0x2ad61c, Func Offset: 0x1bc
	// Line 2074, Address: 0x2ad624, Func Offset: 0x1c4
	// Line 2075, Address: 0x2ad628, Func Offset: 0x1c8
	// Line 2080, Address: 0x2ad638, Func Offset: 0x1d8
	// Line 2082, Address: 0x2ad648, Func Offset: 0x1e8
	// Line 2083, Address: 0x2ad654, Func Offset: 0x1f4
	// Line 2084, Address: 0x2ad65c, Func Offset: 0x1fc
	// Line 2085, Address: 0x2ad678, Func Offset: 0x218
	// Line 2086, Address: 0x2ad694, Func Offset: 0x234
	// Line 2087, Address: 0x2ad6a0, Func Offset: 0x240
	// Func End, Address: 0x2ad6b8, Func Offset: 0x258
}

// 
// Start address: 0x2ad6c0
void after_warp(sfObj* obj)
{
	int ns;
	// Line 2091, Address: 0x2ad6c0, Func Offset: 0
	// Line 2093, Address: 0x2ad6c4, Func Offset: 0x4
	// Line 2091, Address: 0x2ad6c8, Func Offset: 0x8
	// Line 2093, Address: 0x2ad6d0, Func Offset: 0x10
	// Line 2094, Address: 0x2ad6d8, Func Offset: 0x18
	// Line 2095, Address: 0x2ad6e8, Func Offset: 0x28
	// Line 2096, Address: 0x2ad6f8, Func Offset: 0x38
	// Line 2098, Address: 0x2ad724, Func Offset: 0x64
	// Line 2100, Address: 0x2ad754, Func Offset: 0x94
	// Line 2103, Address: 0x2ad760, Func Offset: 0xa0
	// Line 2106, Address: 0x2ad78c, Func Offset: 0xcc
	// Line 2108, Address: 0x2ad7a8, Func Offset: 0xe8
	// Line 2109, Address: 0x2ad7b0, Func Offset: 0xf0
	// Line 2110, Address: 0x2ad7b4, Func Offset: 0xf4
	// Line 2111, Address: 0x2ad7b8, Func Offset: 0xf8
	// Line 2112, Address: 0x2ad7c0, Func Offset: 0x100
	// Func End, Address: 0x2ad7d0, Func Offset: 0x110
}

// 
// Start address: 0x2ad7d0
void EnemyScratchControlWarp(sfObj* obj)
{
	// Line 2116, Address: 0x2ad7d0, Func Offset: 0
	// Line 2118, Address: 0x2ad7dc, Func Offset: 0xc
	// Line 2119, Address: 0x2ad7e4, Func Offset: 0x14
	// Line 2121, Address: 0x2ad810, Func Offset: 0x40
	// Line 2122, Address: 0x2ad818, Func Offset: 0x48
	// Line 2123, Address: 0x2ad824, Func Offset: 0x54
	// Line 2124, Address: 0x2ad830, Func Offset: 0x60
	// Line 2125, Address: 0x2ad83c, Func Offset: 0x6c
	// Line 2127, Address: 0x2ad844, Func Offset: 0x74
	// Line 2128, Address: 0x2ad848, Func Offset: 0x78
	// Line 2129, Address: 0x2ad85c, Func Offset: 0x8c
	// Line 2130, Address: 0x2ad864, Func Offset: 0x94
	// Line 2132, Address: 0x2ad86c, Func Offset: 0x9c
	// Line 2133, Address: 0x2ad874, Func Offset: 0xa4
	// Line 2134, Address: 0x2ad878, Func Offset: 0xa8
	// Line 2135, Address: 0x2ad890, Func Offset: 0xc0
	// Line 2139, Address: 0x2ad898, Func Offset: 0xc8
	// Func End, Address: 0x2ad8a8, Func Offset: 0xd8
}

// 
// Start address: 0x2ad8b0
void EnemyScratchControlToWarp(sfObj* obj)
{
	EnemyScratchWork* ew;
	// Line 2143, Address: 0x2ad8b0, Func Offset: 0
	// Line 2145, Address: 0x2ad8c0, Func Offset: 0x10
	// Line 2146, Address: 0x2ad8cc, Func Offset: 0x1c
	// Line 2148, Address: 0x2ad8f0, Func Offset: 0x40
	// Line 2149, Address: 0x2ad8f8, Func Offset: 0x48
	// Line 2150, Address: 0x2ad904, Func Offset: 0x54
	// Line 2151, Address: 0x2ad910, Func Offset: 0x60
	// Line 2152, Address: 0x2ad91c, Func Offset: 0x6c
	// Line 2153, Address: 0x2ad928, Func Offset: 0x78
	// Line 2154, Address: 0x2ad92c, Func Offset: 0x7c
	// Line 2157, Address: 0x2ad938, Func Offset: 0x88
	// Line 2159, Address: 0x2ad950, Func Offset: 0xa0
	// Line 2158, Address: 0x2ad954, Func Offset: 0xa4
	// Line 2159, Address: 0x2ad958, Func Offset: 0xa8
	// Line 2160, Address: 0x2ad96c, Func Offset: 0xbc
	// Line 2161, Address: 0x2ad974, Func Offset: 0xc4
	// Line 2162, Address: 0x2ad97c, Func Offset: 0xcc
	// Line 2163, Address: 0x2ad980, Func Offset: 0xd0
	// Line 2164, Address: 0x2ad988, Func Offset: 0xd8
	// Line 2168, Address: 0x2ad990, Func Offset: 0xe0
	// Func End, Address: 0x2ad9a4, Func Offset: 0xf4
}

// 
// Start address: 0x2ad9b0
void EnemyScratchControlToWarp2(sfObj* obj)
{
	EnemyScratchWork* ew;
	// Line 2172, Address: 0x2ad9b0, Func Offset: 0
	// Line 2174, Address: 0x2ad9c0, Func Offset: 0x10
	// Line 2175, Address: 0x2ad9cc, Func Offset: 0x1c
	// Line 2177, Address: 0x2ad9f0, Func Offset: 0x40
	// Line 2178, Address: 0x2ad9f8, Func Offset: 0x48
	// Line 2179, Address: 0x2ada04, Func Offset: 0x54
	// Line 2180, Address: 0x2ada10, Func Offset: 0x60
	// Line 2181, Address: 0x2ada14, Func Offset: 0x64
	// Line 2180, Address: 0x2ada18, Func Offset: 0x68
	// Line 2181, Address: 0x2ada1c, Func Offset: 0x6c
	// Line 2182, Address: 0x2ada24, Func Offset: 0x74
	// Line 2184, Address: 0x2ada2c, Func Offset: 0x7c
	// Line 2185, Address: 0x2ada30, Func Offset: 0x80
	// Line 2187, Address: 0x2ada48, Func Offset: 0x98
	// Line 2186, Address: 0x2ada4c, Func Offset: 0x9c
	// Line 2187, Address: 0x2ada50, Func Offset: 0xa0
	// Line 2188, Address: 0x2ada64, Func Offset: 0xb4
	// Line 2189, Address: 0x2ada6c, Func Offset: 0xbc
	// Line 2190, Address: 0x2ada74, Func Offset: 0xc4
	// Line 2191, Address: 0x2ada78, Func Offset: 0xc8
	// Line 2192, Address: 0x2ada80, Func Offset: 0xd0
	// Line 2196, Address: 0x2ada88, Func Offset: 0xd8
	// Func End, Address: 0x2ada9c, Func Offset: 0xec
}

// 
// Start address: 0x2adaa0
void EnemyScratchControlAttack(sfObj* obj)
{
	EnemyScratchWork* ew;
	float wpos[4];
	float dt;
	// Line 2200, Address: 0x2adaa0, Func Offset: 0
	// Line 2204, Address: 0x2adab4, Func Offset: 0x14
	// Line 2205, Address: 0x2adabc, Func Offset: 0x1c
	// Line 2206, Address: 0x2adac8, Func Offset: 0x28
	// Line 2207, Address: 0x2adaec, Func Offset: 0x4c
	// Line 2209, Address: 0x2adaf0, Func Offset: 0x50
	// Line 2210, Address: 0x2adaf8, Func Offset: 0x58
	// Line 2211, Address: 0x2adb04, Func Offset: 0x64
	// Line 2212, Address: 0x2adb10, Func Offset: 0x70
	// Line 2213, Address: 0x2adb1c, Func Offset: 0x7c
	// Line 2214, Address: 0x2adb2c, Func Offset: 0x8c
	// Line 2215, Address: 0x2adb34, Func Offset: 0x94
	// Line 2216, Address: 0x2adb40, Func Offset: 0xa0
	// Line 2217, Address: 0x2adb4c, Func Offset: 0xac
	// Line 2218, Address: 0x2adb50, Func Offset: 0xb0
	// Line 2221, Address: 0x2adb58, Func Offset: 0xb8
	// Line 2226, Address: 0x2adb70, Func Offset: 0xd0
	// Line 2228, Address: 0x2adbbc, Func Offset: 0x11c
	// Line 2229, Address: 0x2adbd0, Func Offset: 0x130
	// Line 2230, Address: 0x2adbd8, Func Offset: 0x138
	// Line 2231, Address: 0x2adbf4, Func Offset: 0x154
	// Line 2233, Address: 0x2adc20, Func Offset: 0x180
	// Line 2234, Address: 0x2adc24, Func Offset: 0x184
	// Line 2233, Address: 0x2adc28, Func Offset: 0x188
	// Line 2234, Address: 0x2adc2c, Func Offset: 0x18c
	// Line 2235, Address: 0x2adc34, Func Offset: 0x194
	// Line 2237, Address: 0x2adc4c, Func Offset: 0x1ac
	// Line 2238, Address: 0x2adc50, Func Offset: 0x1b0
	// Func End, Address: 0x2adc68, Func Offset: 0x1c8
}

// 
// Start address: 0x2adc70
void EnemyScratchControlSeize(sfObj* obj)
{
	EnemyScratchWork* ew;
	float* pos;
	float tpos[4];
	float ppos[4];
	float dir[4];
	float vec[4];
	float rot[4];
	float trot[4];
	float dt;
	float d;
	// Line 2242, Address: 0x2adc70, Func Offset: 0
	// Line 2248, Address: 0x2adc88, Func Offset: 0x18
	// Line 2249, Address: 0x2adc90, Func Offset: 0x20
	// Line 2250, Address: 0x2adc9c, Func Offset: 0x2c
	// Line 2251, Address: 0x2adca8, Func Offset: 0x38
	// Line 2252, Address: 0x2adcb4, Func Offset: 0x44
	// Line 2253, Address: 0x2adcf4, Func Offset: 0x84
	// Line 2254, Address: 0x2adcf8, Func Offset: 0x88
	// Line 2256, Address: 0x2add18, Func Offset: 0xa8
	// Line 2257, Address: 0x2add24, Func Offset: 0xb4
	// Line 2258, Address: 0x2add2c, Func Offset: 0xbc
	// Line 2259, Address: 0x2add30, Func Offset: 0xc0
	// Line 2260, Address: 0x2add3c, Func Offset: 0xcc
	// Line 2261, Address: 0x2add48, Func Offset: 0xd8
	// Line 2262, Address: 0x2add54, Func Offset: 0xe4
	// Line 2263, Address: 0x2add5c, Func Offset: 0xec
	// Line 2264, Address: 0x2add68, Func Offset: 0xf8
	// Line 2263, Address: 0x2add6c, Func Offset: 0xfc
	// Line 2264, Address: 0x2add78, Func Offset: 0x108
	// Line 2265, Address: 0x2add80, Func Offset: 0x110
	// Line 2268, Address: 0x2add88, Func Offset: 0x118
	// Line 2267, Address: 0x2add8c, Func Offset: 0x11c
	// Line 2268, Address: 0x2add94, Func Offset: 0x124
	// Line 2269, Address: 0x2adda8, Func Offset: 0x138
	// Line 2271, Address: 0x2addd4, Func Offset: 0x164
	// Line 2272, Address: 0x2adde4, Func Offset: 0x174
	// Line 2273, Address: 0x2addf8, Func Offset: 0x188
	// Line 2274, Address: 0x2ade08, Func Offset: 0x198
	// Line 2275, Address: 0x2ade10, Func Offset: 0x1a0
	// Line 2276, Address: 0x2ade18, Func Offset: 0x1a8
	// Line 2278, Address: 0x2ade24, Func Offset: 0x1b4
	// Line 2280, Address: 0x2ade2c, Func Offset: 0x1bc
	// Line 2281, Address: 0x2ade30, Func Offset: 0x1c0
	// Line 2282, Address: 0x2ade38, Func Offset: 0x1c8
	// Line 2281, Address: 0x2ade3c, Func Offset: 0x1cc
	// Line 2282, Address: 0x2ade40, Func Offset: 0x1d0
	// Line 2281, Address: 0x2ade44, Func Offset: 0x1d4
	// Line 2282, Address: 0x2ade48, Func Offset: 0x1d8
	// Line 2281, Address: 0x2ade4c, Func Offset: 0x1dc
	// Line 2282, Address: 0x2ade70, Func Offset: 0x200
	// Line 2283, Address: 0x2ade78, Func Offset: 0x208
	// Line 2284, Address: 0x2ade84, Func Offset: 0x214
	// Line 2285, Address: 0x2ade9c, Func Offset: 0x22c
	// Line 2287, Address: 0x2adebc, Func Offset: 0x24c
	// Line 2288, Address: 0x2adec4, Func Offset: 0x254
	// Line 2289, Address: 0x2aded0, Func Offset: 0x260
	// Line 2290, Address: 0x2adedc, Func Offset: 0x26c
	// Line 2291, Address: 0x2adee8, Func Offset: 0x278
	// Line 2292, Address: 0x2adef0, Func Offset: 0x280
	// Line 2295, Address: 0x2adef8, Func Offset: 0x288
	// Line 2297, Address: 0x2adf00, Func Offset: 0x290
	// Line 2298, Address: 0x2adf08, Func Offset: 0x298
	// Line 2297, Address: 0x2adf0c, Func Offset: 0x29c
	// Line 2298, Address: 0x2adf10, Func Offset: 0x2a0
	// Line 2297, Address: 0x2adf14, Func Offset: 0x2a4
	// Line 2298, Address: 0x2adf18, Func Offset: 0x2a8
	// Line 2297, Address: 0x2adf1c, Func Offset: 0x2ac
	// Line 2298, Address: 0x2adf40, Func Offset: 0x2d0
	// Line 2300, Address: 0x2adf48, Func Offset: 0x2d8
	// Line 2301, Address: 0x2adf58, Func Offset: 0x2e8
	// Line 2302, Address: 0x2adf60, Func Offset: 0x2f0
	// Line 2303, Address: 0x2adf70, Func Offset: 0x300
	// Line 2306, Address: 0x2adfd0, Func Offset: 0x360
	// Line 2308, Address: 0x2adfe4, Func Offset: 0x374
	// Line 2309, Address: 0x2adff8, Func Offset: 0x388
	// Line 2310, Address: 0x2ae014, Func Offset: 0x3a4
	// Line 2311, Address: 0x2ae01c, Func Offset: 0x3ac
	// Line 2312, Address: 0x2ae03c, Func Offset: 0x3cc
	// Line 2313, Address: 0x2ae060, Func Offset: 0x3f0
	// Line 2315, Address: 0x2ae0a0, Func Offset: 0x430
	// Line 2318, Address: 0x2ae0d0, Func Offset: 0x460
	// Line 2319, Address: 0x2ae0dc, Func Offset: 0x46c
	// Line 2320, Address: 0x2ae0e8, Func Offset: 0x478
	// Line 2321, Address: 0x2ae0f0, Func Offset: 0x480
	// Line 2322, Address: 0x2ae100, Func Offset: 0x490
	// Line 2323, Address: 0x2ae108, Func Offset: 0x498
	// Line 2324, Address: 0x2ae110, Func Offset: 0x4a0
	// Line 2325, Address: 0x2ae11c, Func Offset: 0x4ac
	// Line 2326, Address: 0x2ae120, Func Offset: 0x4b0
	// Line 2327, Address: 0x2ae128, Func Offset: 0x4b8
	// Line 2328, Address: 0x2ae134, Func Offset: 0x4c4
	// Line 2329, Address: 0x2ae138, Func Offset: 0x4c8
	// Line 2330, Address: 0x2ae144, Func Offset: 0x4d4
	// Line 2333, Address: 0x2ae14c, Func Offset: 0x4dc
	// Line 2334, Address: 0x2ae150, Func Offset: 0x4e0
	// Line 2335, Address: 0x2ae15c, Func Offset: 0x4ec
	// Line 2337, Address: 0x2ae168, Func Offset: 0x4f8
	// Line 2340, Address: 0x2ae170, Func Offset: 0x500
	// Line 2339, Address: 0x2ae174, Func Offset: 0x504
	// Line 2340, Address: 0x2ae178, Func Offset: 0x508
	// Line 2339, Address: 0x2ae184, Func Offset: 0x514
	// Line 2340, Address: 0x2ae188, Func Offset: 0x518
	// Line 2341, Address: 0x2ae190, Func Offset: 0x520
	// Line 2342, Address: 0x2ae1a4, Func Offset: 0x534
	// Line 2343, Address: 0x2ae1c4, Func Offset: 0x554
	// Line 2344, Address: 0x2ae1d4, Func Offset: 0x564
	// Line 2345, Address: 0x2ae1dc, Func Offset: 0x56c
	// Line 2346, Address: 0x2ae1e8, Func Offset: 0x578
	// Line 2348, Address: 0x2ae1f0, Func Offset: 0x580
	// Line 2350, Address: 0x2ae1f8, Func Offset: 0x588
	// Line 2351, Address: 0x2ae210, Func Offset: 0x5a0
	// Line 2352, Address: 0x2ae218, Func Offset: 0x5a8
	// Line 2355, Address: 0x2ae224, Func Offset: 0x5b4
	// Line 2356, Address: 0x2ae228, Func Offset: 0x5b8
	// Func End, Address: 0x2ae244, Func Offset: 0x5d4
}

// 
// Start address: 0x2ae250
void EnemyScratchControlBackAttack(sfObj* obj)
{
	EnemyScratchWork* ew;
	float* pos;
	float wpos[4];
	float dir[4];
	float tpos[4];
	float rot[4];
	float d;
	float dt;
	// Line 2360, Address: 0x2ae250, Func Offset: 0
	// Line 2366, Address: 0x2ae268, Func Offset: 0x18
	// Line 2367, Address: 0x2ae274, Func Offset: 0x24
	// Line 2368, Address: 0x2ae280, Func Offset: 0x30
	// Line 2369, Address: 0x2ae28c, Func Offset: 0x3c
	// Line 2370, Address: 0x2ae298, Func Offset: 0x48
	// Line 2371, Address: 0x2ae2bc, Func Offset: 0x6c
	// Line 2373, Address: 0x2ae2c0, Func Offset: 0x70
	// Line 2374, Address: 0x2ae2c8, Func Offset: 0x78
	// Line 2375, Address: 0x2ae2d4, Func Offset: 0x84
	// Line 2376, Address: 0x2ae2e0, Func Offset: 0x90
	// Line 2377, Address: 0x2ae2ec, Func Offset: 0x9c
	// Line 2378, Address: 0x2ae2fc, Func Offset: 0xac
	// Line 2379, Address: 0x2ae304, Func Offset: 0xb4
	// Line 2380, Address: 0x2ae310, Func Offset: 0xc0
	// Line 2381, Address: 0x2ae31c, Func Offset: 0xcc
	// Line 2382, Address: 0x2ae320, Func Offset: 0xd0
	// Line 2385, Address: 0x2ae328, Func Offset: 0xd8
	// Line 2386, Address: 0x2ae338, Func Offset: 0xe8
	// Line 2388, Address: 0x2ae34c, Func Offset: 0xfc
	// Line 2389, Address: 0x2ae358, Func Offset: 0x108
	// Line 2394, Address: 0x2ae370, Func Offset: 0x120
	// Line 2395, Address: 0x2ae390, Func Offset: 0x140
	// Line 2396, Address: 0x2ae3ac, Func Offset: 0x15c
	// Line 2397, Address: 0x2ae3b4, Func Offset: 0x164
	// Line 2396, Address: 0x2ae3c0, Func Offset: 0x170
	// Line 2397, Address: 0x2ae3e8, Func Offset: 0x198
	// Line 2398, Address: 0x2ae3f0, Func Offset: 0x1a0
	// Line 2399, Address: 0x2ae3fc, Func Offset: 0x1ac
	// Line 2400, Address: 0x2ae410, Func Offset: 0x1c0
	// Line 2401, Address: 0x2ae418, Func Offset: 0x1c8
	// Line 2402, Address: 0x2ae434, Func Offset: 0x1e4
	// Line 2404, Address: 0x2ae460, Func Offset: 0x210
	// Line 2405, Address: 0x2ae464, Func Offset: 0x214
	// Line 2404, Address: 0x2ae468, Func Offset: 0x218
	// Line 2405, Address: 0x2ae46c, Func Offset: 0x21c
	// Line 2406, Address: 0x2ae474, Func Offset: 0x224
	// Line 2408, Address: 0x2ae48c, Func Offset: 0x23c
	// Line 2409, Address: 0x2ae490, Func Offset: 0x240
	// Func End, Address: 0x2ae4ac, Func Offset: 0x25c
}

// 
// Start address: 0x2ae4b0
void EnemyScratchControlTurn(sfObj* obj)
{
	EnemyScratchWork* ew;
	float* pos;
	float* ppos;
	float vec[4];
	float rot[4];
	float dt;
	float d;
	// Line 2413, Address: 0x2ae4b0, Func Offset: 0
	// Line 2419, Address: 0x2ae4cc, Func Offset: 0x1c
	// Line 2420, Address: 0x2ae4d4, Func Offset: 0x24
	// Line 2421, Address: 0x2ae4e0, Func Offset: 0x30
	// Line 2422, Address: 0x2ae4ec, Func Offset: 0x3c
	// Line 2423, Address: 0x2ae4f8, Func Offset: 0x48
	// Line 2424, Address: 0x2ae51c, Func Offset: 0x6c
	// Line 2425, Address: 0x2ae520, Func Offset: 0x70
	// Line 2426, Address: 0x2ae528, Func Offset: 0x78
	// Line 2427, Address: 0x2ae534, Func Offset: 0x84
	// Line 2428, Address: 0x2ae540, Func Offset: 0x90
	// Line 2429, Address: 0x2ae54c, Func Offset: 0x9c
	// Line 2430, Address: 0x2ae554, Func Offset: 0xa4
	// Line 2431, Address: 0x2ae55c, Func Offset: 0xac
	// Line 2432, Address: 0x2ae560, Func Offset: 0xb0
	// Line 2433, Address: 0x2ae568, Func Offset: 0xb8
	// Line 2432, Address: 0x2ae56c, Func Offset: 0xbc
	// Line 2433, Address: 0x2ae570, Func Offset: 0xc0
	// Line 2434, Address: 0x2ae57c, Func Offset: 0xcc
	// Line 2433, Address: 0x2ae580, Func Offset: 0xd0
	// Line 2434, Address: 0x2ae584, Func Offset: 0xd4
	// Line 2433, Address: 0x2ae588, Func Offset: 0xd8
	// Line 2434, Address: 0x2ae58c, Func Offset: 0xdc
	// Line 2433, Address: 0x2ae590, Func Offset: 0xe0
	// Line 2434, Address: 0x2ae5a8, Func Offset: 0xf8
	// Line 2435, Address: 0x2ae5b0, Func Offset: 0x100
	// Line 2436, Address: 0x2ae5bc, Func Offset: 0x10c
	// Line 2437, Address: 0x2ae5e0, Func Offset: 0x130
	// Line 2438, Address: 0x2ae5f8, Func Offset: 0x148
	// Line 2439, Address: 0x2ae5fc, Func Offset: 0x14c
	// Line 2440, Address: 0x2ae610, Func Offset: 0x160
	// Line 2441, Address: 0x2ae628, Func Offset: 0x178
	// Line 2446, Address: 0x2ae630, Func Offset: 0x180
	// Func End, Address: 0x2ae650, Func Offset: 0x1a0
}

// 
// Start address: 0x2ae650
void EnemyScratchControlInWall(sfObj* obj)
{
	EnemyScratchWork* ew;
	float dt;
	// Line 2450, Address: 0x2ae650, Func Offset: 0
	// Line 2453, Address: 0x2ae664, Func Offset: 0x14
	// Line 2454, Address: 0x2ae66c, Func Offset: 0x1c
	// Line 2455, Address: 0x2ae678, Func Offset: 0x28
	// Line 2456, Address: 0x2ae69c, Func Offset: 0x4c
	// Line 2457, Address: 0x2ae6a0, Func Offset: 0x50
	// Line 2458, Address: 0x2ae6a8, Func Offset: 0x58
	// Line 2459, Address: 0x2ae6b4, Func Offset: 0x64
	// Line 2460, Address: 0x2ae6c0, Func Offset: 0x70
	// Line 2461, Address: 0x2ae6d4, Func Offset: 0x84
	// Line 2460, Address: 0x2ae6d8, Func Offset: 0x88
	// Line 2461, Address: 0x2ae6e8, Func Offset: 0x98
	// Line 2464, Address: 0x2ae6f0, Func Offset: 0xa0
	// Line 2465, Address: 0x2ae70c, Func Offset: 0xbc
	// Line 2466, Address: 0x2ae730, Func Offset: 0xe0
	// Line 2467, Address: 0x2ae738, Func Offset: 0xe8
	// Line 2468, Address: 0x2ae748, Func Offset: 0xf8
	// Line 2469, Address: 0x2ae750, Func Offset: 0x100
	// Line 2470, Address: 0x2ae75c, Func Offset: 0x10c
	// Line 2471, Address: 0x2ae764, Func Offset: 0x114
	// Line 2472, Address: 0x2ae768, Func Offset: 0x118
	// Line 2473, Address: 0x2ae770, Func Offset: 0x120
	// Line 2477, Address: 0x2ae784, Func Offset: 0x134
	// Line 2478, Address: 0x2ae788, Func Offset: 0x138
	// Func End, Address: 0x2ae7a0, Func Offset: 0x150
}

// 
// Start address: 0x2ae7a0
void EnemyScratchControlDamage(sfObj* obj)
{
	EnemyScratchWork* ew;
	float d;
	float dt;
	EnemyBattleDamage bd;
	float dir[4];
	float rrot[4];
	int d;
	// Line 2482, Address: 0x2ae7a0, Func Offset: 0
	// Line 2485, Address: 0x2ae7b8, Func Offset: 0x18
	// Line 2486, Address: 0x2ae7c0, Func Offset: 0x20
	// Line 2487, Address: 0x2ae7cc, Func Offset: 0x2c
	// Line 2489, Address: 0x2ae7f8, Func Offset: 0x58
	// Line 2490, Address: 0x2ae800, Func Offset: 0x60
	// Line 2491, Address: 0x2ae808, Func Offset: 0x68
	// Line 2492, Address: 0x2ae820, Func Offset: 0x80
	// Line 2494, Address: 0x2ae828, Func Offset: 0x88
	// Line 2495, Address: 0x2ae830, Func Offset: 0x90
	// Line 2496, Address: 0x2ae83c, Func Offset: 0x9c
	// Line 2497, Address: 0x2ae844, Func Offset: 0xa4
	// Line 2498, Address: 0x2ae850, Func Offset: 0xb0
	// Line 2504, Address: 0x2ae85c, Func Offset: 0xbc
	// Line 2505, Address: 0x2ae868, Func Offset: 0xc8
	// Line 2506, Address: 0x2ae87c, Func Offset: 0xdc
	// Line 2507, Address: 0x2ae88c, Func Offset: 0xec
	// Line 2509, Address: 0x2ae8b4, Func Offset: 0x114
	// Line 2511, Address: 0x2ae8c0, Func Offset: 0x120
	// Line 2512, Address: 0x2ae8e4, Func Offset: 0x144
	// Line 2513, Address: 0x2ae8f0, Func Offset: 0x150
	// Line 2514, Address: 0x2ae910, Func Offset: 0x170
	// Line 2515, Address: 0x2ae938, Func Offset: 0x198
	// Line 2516, Address: 0x2ae950, Func Offset: 0x1b0
	// Line 2518, Address: 0x2ae980, Func Offset: 0x1e0
	// Line 2521, Address: 0x2ae988, Func Offset: 0x1e8
	// Line 2523, Address: 0x2ae990, Func Offset: 0x1f0
	// Line 2524, Address: 0x2ae9bc, Func Offset: 0x21c
	// Line 2526, Address: 0x2ae9d0, Func Offset: 0x230
	// Line 2527, Address: 0x2ae9d8, Func Offset: 0x238
	// Line 2530, Address: 0x2ae9f0, Func Offset: 0x250
	// Line 2532, Address: 0x2ae9f8, Func Offset: 0x258
	// Line 2534, Address: 0x2aea10, Func Offset: 0x270
	// Line 2536, Address: 0x2aea18, Func Offset: 0x278
	// Line 2537, Address: 0x2aea38, Func Offset: 0x298
	// Line 2538, Address: 0x2aea54, Func Offset: 0x2b4
	// Line 2540, Address: 0x2aea68, Func Offset: 0x2c8
	// Line 2541, Address: 0x2aea6c, Func Offset: 0x2cc
	// Line 2540, Address: 0x2aea74, Func Offset: 0x2d4
	// Line 2541, Address: 0x2aea78, Func Offset: 0x2d8
	// Line 2542, Address: 0x2aea80, Func Offset: 0x2e0
	// Line 2543, Address: 0x2aea88, Func Offset: 0x2e8
	// Line 2544, Address: 0x2aea94, Func Offset: 0x2f4
	// Line 2547, Address: 0x2aeaa0, Func Offset: 0x300
	// Line 2549, Address: 0x2aeaa8, Func Offset: 0x308
	// Line 2550, Address: 0x2aeab4, Func Offset: 0x314
	// Line 2552, Address: 0x2aeae4, Func Offset: 0x344
	// Line 2553, Address: 0x2aeae8, Func Offset: 0x348
	// Line 2554, Address: 0x2aeaf0, Func Offset: 0x350
	// Line 2558, Address: 0x2aeaf8, Func Offset: 0x358
	// Line 2559, Address: 0x2aeb04, Func Offset: 0x364
	// Line 2560, Address: 0x2aeb0c, Func Offset: 0x36c
	// Line 2561, Address: 0x2aeb10, Func Offset: 0x370
	// Line 2563, Address: 0x2aeb1c, Func Offset: 0x37c
	// Line 2564, Address: 0x2aeb20, Func Offset: 0x380
	// Line 2565, Address: 0x2aeb34, Func Offset: 0x394
	// Line 2567, Address: 0x2aeb3c, Func Offset: 0x39c
	// Line 2568, Address: 0x2aeb44, Func Offset: 0x3a4
	// Line 2569, Address: 0x2aeb48, Func Offset: 0x3a8
	// Line 2571, Address: 0x2aeb60, Func Offset: 0x3c0
	// Line 2573, Address: 0x2aeb68, Func Offset: 0x3c8
	// Line 2575, Address: 0x2aeb9c, Func Offset: 0x3fc
	// Line 2576, Address: 0x2aeba0, Func Offset: 0x400
	// Line 2577, Address: 0x2aebac, Func Offset: 0x40c
	// Line 2578, Address: 0x2aebb4, Func Offset: 0x414
	// Line 2580, Address: 0x2aebc0, Func Offset: 0x420
	// Line 2582, Address: 0x2aebc8, Func Offset: 0x428
	// Line 2583, Address: 0x2aebdc, Func Offset: 0x43c
	// Line 2584, Address: 0x2aebe4, Func Offset: 0x444
	// Line 2585, Address: 0x2aebe8, Func Offset: 0x448
	// Line 2586, Address: 0x2aec04, Func Offset: 0x464
	// Line 2589, Address: 0x2aec0c, Func Offset: 0x46c
	// Line 2590, Address: 0x2aec10, Func Offset: 0x470
	// Func End, Address: 0x2aec2c, Func Offset: 0x48c
}

// 
// Start address: 0x2aec30
int rot_normalize(sfObj* obj)
{
	float* orot;
	float rot[4];
	int r;
	// Line 2593, Address: 0x2aec30, Func Offset: 0
	// Line 2597, Address: 0x2aec48, Func Offset: 0x18
	// Line 2598, Address: 0x2aec54, Func Offset: 0x24
	// Line 2599, Address: 0x2aec68, Func Offset: 0x38
	// Line 2601, Address: 0x2aec98, Func Offset: 0x68
	// Line 2602, Address: 0x2aec9c, Func Offset: 0x6c
	// Line 2603, Address: 0x2aeca0, Func Offset: 0x70
	// Line 2604, Address: 0x2aecac, Func Offset: 0x7c
	// Line 2605, Address: 0x2aecb0, Func Offset: 0x80
	// Func End, Address: 0x2aecc8, Func Offset: 0x98
}

// 
// Start address: 0x2aecd0
void EnemyScratchControlDown(sfObj* obj)
{
	EnemyScratchWork* ew;
	float* pos;
	float vec[4];
	float rot[4];
	float dt;
	float tpos[4];
	EnemyMeasureResult mres;
	// Line 2609, Address: 0x2aecd0, Func Offset: 0
	// Line 2615, Address: 0x2aece8, Func Offset: 0x18
	// Line 2616, Address: 0x2aecf4, Func Offset: 0x24
	// Line 2617, Address: 0x2aecfc, Func Offset: 0x2c
	// Line 2618, Address: 0x2aed08, Func Offset: 0x38
	// Line 2619, Address: 0x2aed30, Func Offset: 0x60
	// Line 2620, Address: 0x2aed40, Func Offset: 0x70
	// Line 2621, Address: 0x2aed48, Func Offset: 0x78
	// Line 2624, Address: 0x2aed58, Func Offset: 0x88
	// Line 2625, Address: 0x2aed60, Func Offset: 0x90
	// Line 2626, Address: 0x2aed94, Func Offset: 0xc4
	// Line 2627, Address: 0x2aedb0, Func Offset: 0xe0
	// Line 2628, Address: 0x2aedcc, Func Offset: 0xfc
	// Line 2629, Address: 0x2aedd8, Func Offset: 0x108
	// Line 2630, Address: 0x2aedec, Func Offset: 0x11c
	// Line 2632, Address: 0x2aee04, Func Offset: 0x134
	// Line 2635, Address: 0x2aee10, Func Offset: 0x140
	// Line 2636, Address: 0x2aee1c, Func Offset: 0x14c
	// Line 2639, Address: 0x2aee28, Func Offset: 0x158
	// Line 2642, Address: 0x2aee9c, Func Offset: 0x1cc
	// Line 2643, Address: 0x2aeea0, Func Offset: 0x1d0
	// Line 2644, Address: 0x2aeea8, Func Offset: 0x1d8
	// Line 2645, Address: 0x2aeebc, Func Offset: 0x1ec
	// Line 2646, Address: 0x2aeee8, Func Offset: 0x218
	// Line 2648, Address: 0x2aef04, Func Offset: 0x234
	// Line 2649, Address: 0x2aef20, Func Offset: 0x250
	// Line 2650, Address: 0x2aef30, Func Offset: 0x260
	// Line 2652, Address: 0x2aef54, Func Offset: 0x284
	// Line 2653, Address: 0x2aef60, Func Offset: 0x290
	// Line 2656, Address: 0x2aef84, Func Offset: 0x2b4
	// Line 2657, Address: 0x2aefa0, Func Offset: 0x2d0
	// Line 2658, Address: 0x2aefbc, Func Offset: 0x2ec
	// Line 2659, Address: 0x2aefc8, Func Offset: 0x2f8
	// Line 2660, Address: 0x2aefd0, Func Offset: 0x300
	// Line 2662, Address: 0x2aefec, Func Offset: 0x31c
	// Line 2663, Address: 0x2af010, Func Offset: 0x340
	// Line 2664, Address: 0x2af03c, Func Offset: 0x36c
	// Line 2665, Address: 0x2af064, Func Offset: 0x394
	// Line 2666, Address: 0x2af090, Func Offset: 0x3c0
	// Line 2667, Address: 0x2af098, Func Offset: 0x3c8
	// Line 2668, Address: 0x2af0bc, Func Offset: 0x3ec
	// Line 2669, Address: 0x2af0c0, Func Offset: 0x3f0
	// Line 2670, Address: 0x2af0dc, Func Offset: 0x40c
	// Line 2671, Address: 0x2af0e4, Func Offset: 0x414
	// Line 2672, Address: 0x2af0f0, Func Offset: 0x420
	// Line 2673, Address: 0x2af0fc, Func Offset: 0x42c
	// Line 2674, Address: 0x2af100, Func Offset: 0x430
	// Line 2675, Address: 0x2af10c, Func Offset: 0x43c
	// Line 2676, Address: 0x2af118, Func Offset: 0x448
	// Line 2677, Address: 0x2af120, Func Offset: 0x450
	// Line 2678, Address: 0x2af12c, Func Offset: 0x45c
	// Line 2679, Address: 0x2af134, Func Offset: 0x464
	// Line 2680, Address: 0x2af138, Func Offset: 0x468
	// Line 2682, Address: 0x2af14c, Func Offset: 0x47c
	// Line 2683, Address: 0x2af154, Func Offset: 0x484
	// Line 2686, Address: 0x2af168, Func Offset: 0x498
	// Line 2687, Address: 0x2af184, Func Offset: 0x4b4
	// Line 2688, Address: 0x2af190, Func Offset: 0x4c0
	// Line 2689, Address: 0x2af19c, Func Offset: 0x4cc
	// Line 2690, Address: 0x2af1b0, Func Offset: 0x4e0
	// Line 2692, Address: 0x2af1bc, Func Offset: 0x4ec
	// Line 2693, Address: 0x2af1cc, Func Offset: 0x4fc
	// Line 2694, Address: 0x2af1d4, Func Offset: 0x504
	// Line 2695, Address: 0x2af1d8, Func Offset: 0x508
	// Line 2697, Address: 0x2af218, Func Offset: 0x548
	// Line 2698, Address: 0x2af244, Func Offset: 0x574
	// Line 2699, Address: 0x2af254, Func Offset: 0x584
	// Line 2702, Address: 0x2af268, Func Offset: 0x598
	// Line 2703, Address: 0x2af274, Func Offset: 0x5a4
	// Line 2705, Address: 0x2af290, Func Offset: 0x5c0
	// Line 2706, Address: 0x2af298, Func Offset: 0x5c8
	// Line 2708, Address: 0x2af2a0, Func Offset: 0x5d0
	// Line 2709, Address: 0x2af2ac, Func Offset: 0x5dc
	// Line 2710, Address: 0x2af2b0, Func Offset: 0x5e0
	// Line 2709, Address: 0x2af2b4, Func Offset: 0x5e4
	// Line 2710, Address: 0x2af2b8, Func Offset: 0x5e8
	// Line 2711, Address: 0x2af2c0, Func Offset: 0x5f0
	// Line 2712, Address: 0x2af2ec, Func Offset: 0x61c
	// Line 2713, Address: 0x2af318, Func Offset: 0x648
	// Line 2715, Address: 0x2af32c, Func Offset: 0x65c
	// Line 2718, Address: 0x2af370, Func Offset: 0x6a0
	// Line 2719, Address: 0x2af384, Func Offset: 0x6b4
	// Line 2720, Address: 0x2af3b8, Func Offset: 0x6e8
	// Line 2721, Address: 0x2af3c0, Func Offset: 0x6f0
	// Line 2723, Address: 0x2af3cc, Func Offset: 0x6fc
	// Line 2724, Address: 0x2af3d4, Func Offset: 0x704
	// Line 2725, Address: 0x2af3d8, Func Offset: 0x708
	// Line 2726, Address: 0x2af3f4, Func Offset: 0x724
	// Line 2727, Address: 0x2af408, Func Offset: 0x738
	// Line 2729, Address: 0x2af410, Func Offset: 0x740
	// Line 2732, Address: 0x2af418, Func Offset: 0x748
	// Line 2733, Address: 0x2af428, Func Offset: 0x758
	// Line 2736, Address: 0x2af440, Func Offset: 0x770
	// Line 2738, Address: 0x2af448, Func Offset: 0x778
	// Line 2739, Address: 0x2af464, Func Offset: 0x794
	// Line 2741, Address: 0x2af4a0, Func Offset: 0x7d0
	// Line 2742, Address: 0x2af4ac, Func Offset: 0x7dc
	// Line 2743, Address: 0x2af4b8, Func Offset: 0x7e8
	// Line 2745, Address: 0x2af4c0, Func Offset: 0x7f0
	// Line 2746, Address: 0x2af4d0, Func Offset: 0x800
	// Line 2747, Address: 0x2af4d8, Func Offset: 0x808
	// Line 2748, Address: 0x2af4e0, Func Offset: 0x810
	// Line 2749, Address: 0x2af4ec, Func Offset: 0x81c
	// Line 2750, Address: 0x2af4f0, Func Offset: 0x820
	// Line 2751, Address: 0x2af500, Func Offset: 0x830
	// Line 2752, Address: 0x2af50c, Func Offset: 0x83c
	// Line 2753, Address: 0x2af518, Func Offset: 0x848
	// Line 2754, Address: 0x2af538, Func Offset: 0x868
	// Line 2755, Address: 0x2af564, Func Offset: 0x894
	// Line 2756, Address: 0x2af58c, Func Offset: 0x8bc
	// Line 2758, Address: 0x2af594, Func Offset: 0x8c4
	// Line 2759, Address: 0x2af59c, Func Offset: 0x8cc
	// Line 2760, Address: 0x2af5a0, Func Offset: 0x8d0
	// Line 2761, Address: 0x2af5bc, Func Offset: 0x8ec
	// Line 2762, Address: 0x2af5e8, Func Offset: 0x918
	// Line 2763, Address: 0x2af5f8, Func Offset: 0x928
	// Line 2765, Address: 0x2af60c, Func Offset: 0x93c
	// Line 2766, Address: 0x2af610, Func Offset: 0x940
	// Line 2769, Address: 0x2af61c, Func Offset: 0x94c
	// Line 2770, Address: 0x2af624, Func Offset: 0x954
	// Line 2771, Address: 0x2af62c, Func Offset: 0x95c
	// Line 2772, Address: 0x2af630, Func Offset: 0x960
	// Line 2773, Address: 0x2af63c, Func Offset: 0x96c
	// Line 2774, Address: 0x2af648, Func Offset: 0x978
	// Line 2775, Address: 0x2af650, Func Offset: 0x980
	// Line 2778, Address: 0x2af690, Func Offset: 0x9c0
	// Line 2779, Address: 0x2af6a4, Func Offset: 0x9d4
	// Line 2780, Address: 0x2af6d8, Func Offset: 0xa08
	// Line 2781, Address: 0x2af6e0, Func Offset: 0xa10
	// Line 2783, Address: 0x2af6ec, Func Offset: 0xa1c
	// Line 2784, Address: 0x2af6f4, Func Offset: 0xa24
	// Line 2785, Address: 0x2af6f8, Func Offset: 0xa28
	// Line 2786, Address: 0x2af714, Func Offset: 0xa44
	// Line 2787, Address: 0x2af728, Func Offset: 0xa58
	// Line 2791, Address: 0x2af730, Func Offset: 0xa60
	// Func End, Address: 0x2af74c, Func Offset: 0xa7c
}

// 
// Start address: 0x2af750
void EnemyScratchControlExorcismDown(sfObj* obj)
{
	EnemyScratchWork* ew;
	float vec[4];
	float rot[4];
	float tpos[4];
	EnemyMeasureResult mres;
	// Line 2795, Address: 0x2af750, Func Offset: 0
	// Line 2799, Address: 0x2af760, Func Offset: 0x10
	// Line 2800, Address: 0x2af76c, Func Offset: 0x1c
	// Line 2801, Address: 0x2af798, Func Offset: 0x48
	// Line 2802, Address: 0x2af7b4, Func Offset: 0x64
	// Line 2803, Address: 0x2af7bc, Func Offset: 0x6c
	// Line 2806, Address: 0x2af7cc, Func Offset: 0x7c
	// Line 2807, Address: 0x2af7d4, Func Offset: 0x84
	// Line 2809, Address: 0x2af814, Func Offset: 0xc4
	// Line 2810, Address: 0x2af830, Func Offset: 0xe0
	// Line 2811, Address: 0x2af854, Func Offset: 0x104
	// Line 2812, Address: 0x2af860, Func Offset: 0x110
	// Line 2813, Address: 0x2af874, Func Offset: 0x124
	// Line 2815, Address: 0x2af88c, Func Offset: 0x13c
	// Line 2818, Address: 0x2af898, Func Offset: 0x148
	// Line 2819, Address: 0x2af8a4, Func Offset: 0x154
	// Line 2822, Address: 0x2af8b0, Func Offset: 0x160
	// Line 2823, Address: 0x2af8dc, Func Offset: 0x18c
	// Line 2824, Address: 0x2af8e0, Func Offset: 0x190
	// Line 2825, Address: 0x2af8e8, Func Offset: 0x198
	// Line 2826, Address: 0x2af900, Func Offset: 0x1b0
	// Line 2828, Address: 0x2af908, Func Offset: 0x1b8
	// Line 2829, Address: 0x2af910, Func Offset: 0x1c0
	// Line 2830, Address: 0x2af918, Func Offset: 0x1c8
	// Line 2831, Address: 0x2af924, Func Offset: 0x1d4
	// Line 2832, Address: 0x2af930, Func Offset: 0x1e0
	// Line 2833, Address: 0x2af958, Func Offset: 0x208
	// Line 2834, Address: 0x2af970, Func Offset: 0x220
	// Line 2835, Address: 0x2af978, Func Offset: 0x228
	// Line 2836, Address: 0x2af984, Func Offset: 0x234
	// Line 2838, Address: 0x2af990, Func Offset: 0x240
	// Line 2839, Address: 0x2af9b0, Func Offset: 0x260
	// Line 2840, Address: 0x2af9d4, Func Offset: 0x284
	// Line 2841, Address: 0x2af9e0, Func Offset: 0x290
	// Line 2842, Address: 0x2af9fc, Func Offset: 0x2ac
	// Line 2843, Address: 0x2afa00, Func Offset: 0x2b0
	// Line 2844, Address: 0x2afa08, Func Offset: 0x2b8
	// Line 2846, Address: 0x2afa10, Func Offset: 0x2c0
	// Line 2848, Address: 0x2afa2c, Func Offset: 0x2dc
	// Line 2849, Address: 0x2afa34, Func Offset: 0x2e4
	// Line 2852, Address: 0x2afa48, Func Offset: 0x2f8
	// Line 2853, Address: 0x2afa64, Func Offset: 0x314
	// Line 2854, Address: 0x2afa70, Func Offset: 0x320
	// Line 2855, Address: 0x2afa84, Func Offset: 0x334
	// Line 2857, Address: 0x2afa90, Func Offset: 0x340
	// Line 2858, Address: 0x2afaa0, Func Offset: 0x350
	// Line 2860, Address: 0x2afaa8, Func Offset: 0x358
	// Line 2861, Address: 0x2afac4, Func Offset: 0x374
	// Line 2862, Address: 0x2afacc, Func Offset: 0x37c
	// Line 2863, Address: 0x2afad4, Func Offset: 0x384
	// Line 2864, Address: 0x2afad8, Func Offset: 0x388
	// Line 2863, Address: 0x2afadc, Func Offset: 0x38c
	// Line 2864, Address: 0x2afae0, Func Offset: 0x390
	// Line 2865, Address: 0x2afae8, Func Offset: 0x398
	// Line 2868, Address: 0x2afb28, Func Offset: 0x3d8
	// Line 2869, Address: 0x2afb30, Func Offset: 0x3e0
	// Line 2871, Address: 0x2afb44, Func Offset: 0x3f4
	// Line 2872, Address: 0x2afb4c, Func Offset: 0x3fc
	// Line 2873, Address: 0x2afb50, Func Offset: 0x400
	// Line 2874, Address: 0x2afb74, Func Offset: 0x424
	// Line 2875, Address: 0x2afb88, Func Offset: 0x438
	// Line 2877, Address: 0x2afb90, Func Offset: 0x440
	// Line 2880, Address: 0x2afb98, Func Offset: 0x448
	// Line 2881, Address: 0x2afba8, Func Offset: 0x458
	// Line 2884, Address: 0x2afbc0, Func Offset: 0x470
	// Line 2886, Address: 0x2afbc8, Func Offset: 0x478
	// Line 2887, Address: 0x2afbec, Func Offset: 0x49c
	// Line 2889, Address: 0x2afc28, Func Offset: 0x4d8
	// Line 2890, Address: 0x2afc34, Func Offset: 0x4e4
	// Line 2891, Address: 0x2afc3c, Func Offset: 0x4ec
	// Line 2892, Address: 0x2afc40, Func Offset: 0x4f0
	// Line 2893, Address: 0x2afc50, Func Offset: 0x500
	// Line 2894, Address: 0x2afc58, Func Offset: 0x508
	// Line 2895, Address: 0x2afc60, Func Offset: 0x510
	// Line 2896, Address: 0x2afc6c, Func Offset: 0x51c
	// Line 2897, Address: 0x2afc70, Func Offset: 0x520
	// Line 2898, Address: 0x2afc80, Func Offset: 0x530
	// Line 2899, Address: 0x2afc8c, Func Offset: 0x53c
	// Line 2900, Address: 0x2afc98, Func Offset: 0x548
	// Line 2901, Address: 0x2afcb8, Func Offset: 0x568
	// Line 2902, Address: 0x2afce4, Func Offset: 0x594
	// Line 2903, Address: 0x2afd0c, Func Offset: 0x5bc
	// Line 2905, Address: 0x2afd14, Func Offset: 0x5c4
	// Line 2906, Address: 0x2afd1c, Func Offset: 0x5cc
	// Line 2907, Address: 0x2afd20, Func Offset: 0x5d0
	// Line 2908, Address: 0x2afd3c, Func Offset: 0x5ec
	// Line 2909, Address: 0x2afd44, Func Offset: 0x5f4
	// Line 2910, Address: 0x2afd48, Func Offset: 0x5f8
	// Line 2909, Address: 0x2afd4c, Func Offset: 0x5fc
	// Line 2910, Address: 0x2afd50, Func Offset: 0x600
	// Line 2911, Address: 0x2afd58, Func Offset: 0x608
	// Line 2914, Address: 0x2afd98, Func Offset: 0x648
	// Line 2916, Address: 0x2afdac, Func Offset: 0x65c
	// Line 2917, Address: 0x2afdb4, Func Offset: 0x664
	// Line 2918, Address: 0x2afdb8, Func Offset: 0x668
	// Line 2919, Address: 0x2afddc, Func Offset: 0x68c
	// Line 2920, Address: 0x2afde4, Func Offset: 0x694
	// Line 2921, Address: 0x2afdf0, Func Offset: 0x6a0
	// Line 2922, Address: 0x2afe04, Func Offset: 0x6b4
	// Line 2925, Address: 0x2afe0c, Func Offset: 0x6bc
	// Line 2926, Address: 0x2afe10, Func Offset: 0x6c0
	// Func End, Address: 0x2afe24, Func Offset: 0x6d4
}

// 
// Start address: 0x2afe30
void EnemyScratchControlFinished(sfObj* obj)
{
	EnemyScratchWork* ew;
	// Line 2930, Address: 0x2afe30, Func Offset: 0
	// Line 2932, Address: 0x2afe40, Func Offset: 0x10
	// Line 2933, Address: 0x2afe4c, Func Offset: 0x1c
	// Line 2934, Address: 0x2afe94, Func Offset: 0x64
	// Line 2935, Address: 0x2afe98, Func Offset: 0x68
	// Line 2937, Address: 0x2afea4, Func Offset: 0x74
	// Line 2938, Address: 0x2afea8, Func Offset: 0x78
	// Line 2939, Address: 0x2afeb4, Func Offset: 0x84
	// Line 2940, Address: 0x2afec0, Func Offset: 0x90
	// Line 2941, Address: 0x2afecc, Func Offset: 0x9c
	// Line 2942, Address: 0x2afed4, Func Offset: 0xa4
	// Line 2943, Address: 0x2afee0, Func Offset: 0xb0
	// Line 2944, Address: 0x2afef4, Func Offset: 0xc4
	// Line 2945, Address: 0x2afef8, Func Offset: 0xc8
	// Line 2944, Address: 0x2afefc, Func Offset: 0xcc
	// Line 2945, Address: 0x2aff00, Func Offset: 0xd0
	// Line 2946, Address: 0x2aff08, Func Offset: 0xd8
	// Line 2947, Address: 0x2aff10, Func Offset: 0xe0
	// Line 2948, Address: 0x2aff3c, Func Offset: 0x10c
	// Line 2950, Address: 0x2aff40, Func Offset: 0x110
	// Line 2954, Address: 0x2aff48, Func Offset: 0x118
	// Line 2956, Address: 0x2aff50, Func Offset: 0x120
	// Line 2958, Address: 0x2aff58, Func Offset: 0x128
	// Line 2960, Address: 0x2aff60, Func Offset: 0x130
	// Line 2961, Address: 0x2aff70, Func Offset: 0x140
	// Line 2962, Address: 0x2aff7c, Func Offset: 0x14c
	// Line 2963, Address: 0x2aff90, Func Offset: 0x160
	// Line 2967, Address: 0x2aff98, Func Offset: 0x168
	// Line 2968, Address: 0x2affa8, Func Offset: 0x178
	// Line 2969, Address: 0x2affb4, Func Offset: 0x184
	// Line 2970, Address: 0x2affc8, Func Offset: 0x198
	// Line 2972, Address: 0x2affd4, Func Offset: 0x1a4
	// Line 2973, Address: 0x2affe0, Func Offset: 0x1b0
	// Line 2974, Address: 0x2affec, Func Offset: 0x1bc
	// Line 2975, Address: 0x2afff8, Func Offset: 0x1c8
	// Line 2977, Address: 0x2b0038, Func Offset: 0x208
	// Line 2978, Address: 0x2b004c, Func Offset: 0x21c
	// Line 2980, Address: 0x2b0058, Func Offset: 0x228
	// Line 2982, Address: 0x2b0060, Func Offset: 0x230
	// Line 2983, Address: 0x2b0084, Func Offset: 0x254
	// Line 2984, Address: 0x2b0090, Func Offset: 0x260
	// Line 2985, Address: 0x2b00a4, Func Offset: 0x274
	// Line 2989, Address: 0x2b00b0, Func Offset: 0x280
	// Func End, Address: 0x2b00c4, Func Offset: 0x294
}

// 
// Start address: 0x2b00d0
void EnemyScratchControlEvent(sfObj* obj)
{
	EnemyScratchWork* ew;
	float dt;
	// Line 2993, Address: 0x2b00d0, Func Offset: 0
	// Line 2996, Address: 0x2b00e4, Func Offset: 0x14
	// Line 2997, Address: 0x2b00ec, Func Offset: 0x1c
	// Line 2998, Address: 0x2b00f8, Func Offset: 0x28
	// Line 2999, Address: 0x2b0124, Func Offset: 0x54
	// Line 3000, Address: 0x2b0128, Func Offset: 0x58
	// Line 3001, Address: 0x2b0134, Func Offset: 0x64
	// Line 3002, Address: 0x2b0140, Func Offset: 0x70
	// Line 3003, Address: 0x2b014c, Func Offset: 0x7c
	// Line 3004, Address: 0x2b0158, Func Offset: 0x88
	// Line 3005, Address: 0x2b0164, Func Offset: 0x94
	// Line 3006, Address: 0x2b0174, Func Offset: 0xa4
	// Line 3007, Address: 0x2b0184, Func Offset: 0xb4
	// Line 3008, Address: 0x2b0188, Func Offset: 0xb8
	// Line 3009, Address: 0x2b0194, Func Offset: 0xc4
	// Line 3010, Address: 0x2b019c, Func Offset: 0xcc
	// Line 3011, Address: 0x2b01a0, Func Offset: 0xd0
	// Line 3015, Address: 0x2b01f0, Func Offset: 0x120
	// Line 3016, Address: 0x2b01fc, Func Offset: 0x12c
	// Line 3017, Address: 0x2b0204, Func Offset: 0x134
	// Line 3018, Address: 0x2b0224, Func Offset: 0x154
	// Line 3020, Address: 0x2b022c, Func Offset: 0x15c
	// Line 3021, Address: 0x2b0234, Func Offset: 0x164
	// Line 3022, Address: 0x2b0238, Func Offset: 0x168
	// Line 3023, Address: 0x2b0248, Func Offset: 0x178
	// Line 3024, Address: 0x2b0254, Func Offset: 0x184
	// Line 3025, Address: 0x2b025c, Func Offset: 0x18c
	// Line 3026, Address: 0x2b0268, Func Offset: 0x198
	// Line 3027, Address: 0x2b0274, Func Offset: 0x1a4
	// Line 3028, Address: 0x2b0280, Func Offset: 0x1b0
	// Line 3029, Address: 0x2b028c, Func Offset: 0x1bc
	// Line 3030, Address: 0x2b0294, Func Offset: 0x1c4
	// Line 3033, Address: 0x2b029c, Func Offset: 0x1cc
	// Line 3034, Address: 0x2b02a0, Func Offset: 0x1d0
	// Line 3035, Address: 0x2b02a8, Func Offset: 0x1d8
	// Func End, Address: 0x2b02c0, Func Offset: 0x1f0
}

// 
// Start address: 0x2b02c0
void EnemyScratchControlDead(sfObj* obj)
{
	// Line 3039, Address: 0x2b02c0, Func Offset: 0
	// Line 3040, Address: 0x2b02cc, Func Offset: 0xc
	// Line 3041, Address: 0x2b02e4, Func Offset: 0x24
	// Line 3042, Address: 0x2b02e8, Func Offset: 0x28
	// Line 3043, Address: 0x2b02f4, Func Offset: 0x34
	// Line 3044, Address: 0x2b0300, Func Offset: 0x40
	// Line 3045, Address: 0x2b0308, Func Offset: 0x48
	// Line 3048, Address: 0x2b0310, Func Offset: 0x50
	// Func End, Address: 0x2b0320, Func Offset: 0x60
}

// 
// Start address: 0x2b0320
void EnemyScratchAttackEnd(sfObj* obj)
{
	EnemyScratchWork* ew;
	// Line 3052, Address: 0x2b0320, Func Offset: 0
	// Line 3054, Address: 0x2b032c, Func Offset: 0xc
	// Line 3055, Address: 0x2b0334, Func Offset: 0x14
	// Line 3056, Address: 0x2b0340, Func Offset: 0x20
	// Line 3057, Address: 0x2b0344, Func Offset: 0x24
	// Line 3058, Address: 0x2b034c, Func Offset: 0x2c
	// Line 3059, Address: 0x2b0350, Func Offset: 0x30
	// Func End, Address: 0x2b0360, Func Offset: 0x40
}

// 
// Start address: 0x2b0360
void EnemyScratchSetExtentDamage(sfObj* obj)
{
	EnemyScratchAnime anime;
	// Line 3063, Address: 0x2b0360, Func Offset: 0
	// Line 3065, Address: 0x2b036c, Func Offset: 0xc
	// Line 3066, Address: 0x2b037c, Func Offset: 0x1c
	// Line 3067, Address: 0x2b03ac, Func Offset: 0x4c
	// Line 3068, Address: 0x2b03b0, Func Offset: 0x50
	// Line 3069, Address: 0x2b03bc, Func Offset: 0x5c
	// Line 3082, Address: 0x2b03e4, Func Offset: 0x84
	// Line 3083, Address: 0x2b03e8, Func Offset: 0x88
	// Line 3086, Address: 0x2b0400, Func Offset: 0xa0
	// Func End, Address: 0x2b0410, Func Offset: 0xb0
}

// 
// Start address: 0x2b0410
int EnemyScratchCheckPlayerFront(sfObj* obj)
{
	EnemySenseResult sres;
	// Line 3090, Address: 0x2b0410, Func Offset: 0
	// Line 3094, Address: 0x2b041c, Func Offset: 0xc
	// Line 3095, Address: 0x2b0424, Func Offset: 0x14
	// Line 3102, Address: 0x2b0460, Func Offset: 0x50
	// Line 3095, Address: 0x2b0464, Func Offset: 0x54
	// Line 3102, Address: 0x2b0468, Func Offset: 0x58
	// Func End, Address: 0x2b0474, Func Offset: 0x64
}

// 
// Start address: 0x2b0480
void EnemyScratchSetEventPlayerCheck(sfObj* obj)
{
	EnemyScratchWork* ew;
	EnemySenseData* es;
	float* pos;
	// Line 3106, Address: 0x2b0480, Func Offset: 0
	// Line 3111, Address: 0x2b0490, Func Offset: 0x10
	// Line 3112, Address: 0x2b049c, Func Offset: 0x1c
	// Line 3113, Address: 0x2b04a4, Func Offset: 0x24
	// Line 3115, Address: 0x2b04a8, Func Offset: 0x28
	// Line 3122, Address: 0x2b04b8, Func Offset: 0x38
	// Line 3116, Address: 0x2b04bc, Func Offset: 0x3c
	// Line 3117, Address: 0x2b04c0, Func Offset: 0x40
	// Line 3116, Address: 0x2b04c4, Func Offset: 0x44
	// Line 3122, Address: 0x2b04c8, Func Offset: 0x48
	// Line 3118, Address: 0x2b04cc, Func Offset: 0x4c
	// Line 3117, Address: 0x2b04d0, Func Offset: 0x50
	// Line 3118, Address: 0x2b04d4, Func Offset: 0x54
	// Line 3122, Address: 0x2b04d8, Func Offset: 0x58
	// Line 3118, Address: 0x2b04dc, Func Offset: 0x5c
	// Line 3122, Address: 0x2b04e0, Func Offset: 0x60
	// Line 3119, Address: 0x2b04e4, Func Offset: 0x64
	// Line 3122, Address: 0x2b04e8, Func Offset: 0x68
	// Line 3119, Address: 0x2b04ec, Func Offset: 0x6c
	// Line 3120, Address: 0x2b04f0, Func Offset: 0x70
	// Line 3122, Address: 0x2b04f4, Func Offset: 0x74
	// Line 3125, Address: 0x2b04fc, Func Offset: 0x7c
	// Func End, Address: 0x2b0510, Func Offset: 0x90
}

// 
// Start address: 0x2b0510
void EnemyScratchSetEventDamageCheck(sfObj* obj)
{
	EnemyScratchWork* ew;
	// Line 3129, Address: 0x2b0510, Func Offset: 0
	// Line 3131, Address: 0x2b0520, Func Offset: 0x10
	// Line 3132, Address: 0x2b052c, Func Offset: 0x1c
	// Line 3134, Address: 0x2b0558, Func Offset: 0x48
	// Line 3147, Address: 0x2b0584, Func Offset: 0x74
	// Line 3148, Address: 0x2b0588, Func Offset: 0x78
	// Line 3150, Address: 0x2b05c8, Func Offset: 0xb8
	// Line 3152, Address: 0x2b05e4, Func Offset: 0xd4
	// Line 3153, Address: 0x2b05f0, Func Offset: 0xe0
	// Line 3156, Address: 0x2b0608, Func Offset: 0xf8
	// Line 3158, Address: 0x2b0610, Func Offset: 0x100
	// Line 3159, Address: 0x2b0638, Func Offset: 0x128
	// Line 3161, Address: 0x2b0650, Func Offset: 0x140
	// Line 3162, Address: 0x2b0658, Func Offset: 0x148
	// Line 3165, Address: 0x2b0674, Func Offset: 0x164
	// Line 3167, Address: 0x2b067c, Func Offset: 0x16c
	// Line 3168, Address: 0x2b0680, Func Offset: 0x170
	// Line 3170, Address: 0x2b069c, Func Offset: 0x18c
	// Line 3171, Address: 0x2b06b4, Func Offset: 0x1a4
	// Line 3173, Address: 0x2b06cc, Func Offset: 0x1bc
	// Line 3174, Address: 0x2b06f0, Func Offset: 0x1e0
	// Line 3176, Address: 0x2b0708, Func Offset: 0x1f8
	// Line 3177, Address: 0x2b0710, Func Offset: 0x200
	// Line 3181, Address: 0x2b072c, Func Offset: 0x21c
	// Line 3182, Address: 0x2b0730, Func Offset: 0x220
	// Func End, Address: 0x2b0744, Func Offset: 0x234
}

// 
// Start address: 0x2b0750
void EnemyScratchCheckExorcismDamage(sfObj* obj)
{
	EnemyScratchWork* ew;
	float d;
	float s;
	// Line 3186, Address: 0x2b0750, Func Offset: 0
	// Line 3189, Address: 0x2b0764, Func Offset: 0x14
	// Line 3190, Address: 0x2b0790, Func Offset: 0x40
	// Line 3191, Address: 0x2b079c, Func Offset: 0x4c
	// Line 3192, Address: 0x2b07a4, Func Offset: 0x54
	// Line 3193, Address: 0x2b07b8, Func Offset: 0x68
	// Line 3194, Address: 0x2b07bc, Func Offset: 0x6c
	// Line 3193, Address: 0x2b07c0, Func Offset: 0x70
	// Line 3194, Address: 0x2b07cc, Func Offset: 0x7c
	// Line 3195, Address: 0x2b07e8, Func Offset: 0x98
	// Line 3198, Address: 0x2b0800, Func Offset: 0xb0
	// Line 3199, Address: 0x2b0834, Func Offset: 0xe4
	// Line 3200, Address: 0x2b0838, Func Offset: 0xe8
	// Line 3201, Address: 0x2b0840, Func Offset: 0xf0
	// Line 3202, Address: 0x2b0860, Func Offset: 0x110
	// Line 3204, Address: 0x2b0868, Func Offset: 0x118
	// Line 3205, Address: 0x2b087c, Func Offset: 0x12c
	// Line 3206, Address: 0x2b0888, Func Offset: 0x138
	// Line 3207, Address: 0x2b0894, Func Offset: 0x144
	// Line 3208, Address: 0x2b08b4, Func Offset: 0x164
	// Line 3209, Address: 0x2b08c0, Func Offset: 0x170
	// Line 3211, Address: 0x2b08cc, Func Offset: 0x17c
	// Line 3214, Address: 0x2b08d4, Func Offset: 0x184
	// Line 3215, Address: 0x2b08d8, Func Offset: 0x188
	// Line 3216, Address: 0x2b0900, Func Offset: 0x1b0
	// Line 3217, Address: 0x2b090c, Func Offset: 0x1bc
	// Line 3218, Address: 0x2b0918, Func Offset: 0x1c8
	// Line 3220, Address: 0x2b0924, Func Offset: 0x1d4
	// Line 3221, Address: 0x2b092c, Func Offset: 0x1dc
	// Line 3222, Address: 0x2b0930, Func Offset: 0x1e0
	// Line 3224, Address: 0x2b0938, Func Offset: 0x1e8
	// Line 3225, Address: 0x2b0940, Func Offset: 0x1f0
	// Line 3227, Address: 0x2b0948, Func Offset: 0x1f8
	// Line 3228, Address: 0x2b0964, Func Offset: 0x214
	// Line 3229, Address: 0x2b0970, Func Offset: 0x220
	// Line 3230, Address: 0x2b098c, Func Offset: 0x23c
	// Line 3231, Address: 0x2b0990, Func Offset: 0x240
	// Line 3232, Address: 0x2b0994, Func Offset: 0x244
	// Line 3234, Address: 0x2b09c8, Func Offset: 0x278
	// Line 3236, Address: 0x2b09d0, Func Offset: 0x280
	// Line 3239, Address: 0x2b09e0, Func Offset: 0x290
	// Line 3240, Address: 0x2b09fc, Func Offset: 0x2ac
	// Line 3241, Address: 0x2b0a18, Func Offset: 0x2c8
	// Line 3242, Address: 0x2b0a20, Func Offset: 0x2d0
	// Line 3243, Address: 0x2b0a44, Func Offset: 0x2f4
	// Line 3244, Address: 0x2b0a48, Func Offset: 0x2f8
	// Line 3245, Address: 0x2b0a54, Func Offset: 0x304
	// Line 3246, Address: 0x2b0a60, Func Offset: 0x310
	// Func End, Address: 0x2b0a78, Func Offset: 0x328
}

// 
// Start address: 0x2b0a80
int EnemyScratchMayAttackPlayer(sfObj* obj)
{
	// Line 3250, Address: 0x2b0a80, Func Offset: 0
	// Line 3251, Address: 0x2b0a8c, Func Offset: 0xc
	// Line 3252, Address: 0x2b0ab8, Func Offset: 0x38
	// Line 3253, Address: 0x2b0ac0, Func Offset: 0x40
	// Func End, Address: 0x2b0ad0, Func Offset: 0x50
}

// 
// Start address: 0x2b0ad0
void EnemyScratchSetAttackInfo(sfObj* obj)
{
	// Line 3257, Address: 0x2b0ad0, Func Offset: 0
	// Line 3258, Address: 0x2b0adc, Func Offset: 0xc
	// Line 3261, Address: 0x2b0b08, Func Offset: 0x38
	// Func End, Address: 0x2b0b18, Func Offset: 0x48
}

// 
// Start address: 0x2b0b20
int EnemyScratchCheckAttackInfo(sfObj* obj)
{
	// Line 3265, Address: 0x2b0b20, Func Offset: 0
	// Line 3266, Address: 0x2b0b28, Func Offset: 0x8
	// Line 3268, Address: 0x2b0b40, Func Offset: 0x20
	// Line 3266, Address: 0x2b0b44, Func Offset: 0x24
	// Line 3268, Address: 0x2b0b48, Func Offset: 0x28
	// Func End, Address: 0x2b0b50, Func Offset: 0x30
}

// 
// Start address: 0x2b0b50
void EnemyScratchDamageSoundCall(sfObj* obj, EnemyBattleDamage* bd)
{
	int sd;
	int type;
	// Line 3279, Address: 0x2b0b50, Func Offset: 0
	// Line 3281, Address: 0x2b0b64, Func Offset: 0x14
	// Line 3282, Address: 0x2b0b70, Func Offset: 0x20
	// Line 3284, Address: 0x2b0b78, Func Offset: 0x28
	// Line 3286, Address: 0x2b0b94, Func Offset: 0x44
	// Line 3289, Address: 0x2b0bac, Func Offset: 0x5c
	// Line 3294, Address: 0x2b0bb0, Func Offset: 0x60
	// Line 3296, Address: 0x2b0bec, Func Offset: 0x9c
	// Line 3298, Address: 0x2b0c08, Func Offset: 0xb8
	// Line 3299, Address: 0x2b0c18, Func Offset: 0xc8
	// Line 3301, Address: 0x2b0c20, Func Offset: 0xd0
	// Line 3302, Address: 0x2b0c28, Func Offset: 0xd8
	// Line 3304, Address: 0x2b0c30, Func Offset: 0xe0
	// Line 3306, Address: 0x2b0c38, Func Offset: 0xe8
	// Func End, Address: 0x2b0c4c, Func Offset: 0xfc
}

// 
// Start address: 0x2b0c50
void EnemyScratchLeft(sfObj* obj)
{
	// Line 3311, Address: 0x2b0c50, Func Offset: 0
	// Line 3312, Address: 0x2b0c60, Func Offset: 0x10
	// Func End, Address: 0x2b0c68, Func Offset: 0x18
}

// 
// Start address: 0x2b0c70
int damage_anime_set(sfObj* obj, EnemyBattleDamage* bd, float* dir, int down)
{
	EnemyScratchWork* ew;
	int motion;
	int nextstep;
	// Line 3318, Address: 0x2b0c70, Func Offset: 0
	// Line 3322, Address: 0x2b0c98, Func Offset: 0x28
	// Line 3323, Address: 0x2b0ca0, Func Offset: 0x30
	// Line 3322, Address: 0x2b0ca4, Func Offset: 0x34
	// Line 3323, Address: 0x2b0ca8, Func Offset: 0x38
	// Line 3324, Address: 0x2b0cc4, Func Offset: 0x54
	// Line 3325, Address: 0x2b0ce4, Func Offset: 0x74
	// Line 3326, Address: 0x2b0cf0, Func Offset: 0x80
	// Line 3328, Address: 0x2b0d08, Func Offset: 0x98
	// Line 3334, Address: 0x2b0d30, Func Offset: 0xc0
	// Line 3340, Address: 0x2b0d38, Func Offset: 0xc8
	// Line 3341, Address: 0x2b0d3c, Func Offset: 0xcc
	// Line 3342, Address: 0x2b0d44, Func Offset: 0xd4
	// Line 3343, Address: 0x2b0d48, Func Offset: 0xd8
	// Line 3345, Address: 0x2b0d68, Func Offset: 0xf8
	// Line 3346, Address: 0x2b0d74, Func Offset: 0x104
	// Line 3348, Address: 0x2b0d7c, Func Offset: 0x10c
	// Line 3349, Address: 0x2b0d80, Func Offset: 0x110
	// Line 3352, Address: 0x2b0d9c, Func Offset: 0x12c
	// Line 3354, Address: 0x2b0da8, Func Offset: 0x138
	// Line 3355, Address: 0x2b0dac, Func Offset: 0x13c
	// Line 3357, Address: 0x2b0db0, Func Offset: 0x140
	// Line 3358, Address: 0x2b0dc8, Func Offset: 0x158
	// Line 3360, Address: 0x2b0dd8, Func Offset: 0x168
	// Line 3361, Address: 0x2b0de0, Func Offset: 0x170
	// Line 3362, Address: 0x2b0de8, Func Offset: 0x178
	// Line 3364, Address: 0x2b0df0, Func Offset: 0x180
	// Line 3367, Address: 0x2b0e10, Func Offset: 0x1a0
	// Line 3368, Address: 0x2b0e18, Func Offset: 0x1a8
	// Line 3369, Address: 0x2b0e38, Func Offset: 0x1c8
	// Line 3370, Address: 0x2b0e3c, Func Offset: 0x1cc
	// Line 3371, Address: 0x2b0e40, Func Offset: 0x1d0
	// Line 3372, Address: 0x2b0e4c, Func Offset: 0x1dc
	// Line 3373, Address: 0x2b0e50, Func Offset: 0x1e0
	// Func End, Address: 0x2b0e70, Func Offset: 0x200
}

// 
// Start address: 0x2b0e70
void EnemyEDScratchAdditionalDamage(void* obj)
{
	EnemyScratchWork* ew;
	EnemyBattleDamage bd;
	float dir[4];
	int d;
	float rrot[4];
	// Line 3377, Address: 0x2b0e70, Func Offset: 0
	// Line 3382, Address: 0x2b0e88, Func Offset: 0x18
	// Line 3383, Address: 0x2b0e94, Func Offset: 0x24
	// Line 3384, Address: 0x2b0ea0, Func Offset: 0x30
	// Line 3386, Address: 0x2b0ec8, Func Offset: 0x58
	// Line 3387, Address: 0x2b0ed4, Func Offset: 0x64
	// Line 3388, Address: 0x2b0ed8, Func Offset: 0x68
	// Line 3389, Address: 0x2b0efc, Func Offset: 0x8c
	// Line 3390, Address: 0x2b0f08, Func Offset: 0x98
	// Line 3391, Address: 0x2b0f30, Func Offset: 0xc0
	// Line 3392, Address: 0x2b0f48, Func Offset: 0xd8
	// Line 3393, Address: 0x2b0f58, Func Offset: 0xe8
	// Line 3396, Address: 0x2b0f80, Func Offset: 0x110
	// Line 3398, Address: 0x2b0f94, Func Offset: 0x124
	// Line 3399, Address: 0x2b0f9c, Func Offset: 0x12c
	// Line 3404, Address: 0x2b1010, Func Offset: 0x1a0
	// Line 3405, Address: 0x2b1018, Func Offset: 0x1a8
	// Line 3407, Address: 0x2b1020, Func Offset: 0x1b0
	// Line 3408, Address: 0x2b1034, Func Offset: 0x1c4
	// Line 3409, Address: 0x2b1044, Func Offset: 0x1d4
	// Line 3410, Address: 0x2b1064, Func Offset: 0x1f4
	// Line 3412, Address: 0x2b1094, Func Offset: 0x224
	// Line 3414, Address: 0x2b109c, Func Offset: 0x22c
	// Line 3415, Address: 0x2b10a0, Func Offset: 0x230
	// Func End, Address: 0x2b10bc, Func Offset: 0x24c
}

// 
// Start address: 0x2b10c0
void EnemyEDScratchAdditionalDamageSA(void* obj)
{
	EnemyScratchWork* ew;
	EnemyBattleDamage bd;
	float dir[4];
	// Line 3419, Address: 0x2b10c0, Func Offset: 0
	// Line 3423, Address: 0x2b10d0, Func Offset: 0x10
	// Line 3424, Address: 0x2b10dc, Func Offset: 0x1c
	// Line 3425, Address: 0x2b10e8, Func Offset: 0x28
	// Line 3427, Address: 0x2b1110, Func Offset: 0x50
	// Line 3428, Address: 0x2b111c, Func Offset: 0x5c
	// Line 3429, Address: 0x2b1120, Func Offset: 0x60
	// Line 3430, Address: 0x2b112c, Func Offset: 0x6c
	// Line 3431, Address: 0x2b1138, Func Offset: 0x78
	// Line 3432, Address: 0x2b116c, Func Offset: 0xac
	// Line 3433, Address: 0x2b1184, Func Offset: 0xc4
	// Func End, Address: 0x2b1198, Func Offset: 0xd8
}

// 
// Start address: 0x2b11a0
void EnemyEDScratchAdditionalDamageDown(void* obj)
{
	EnemyScratchWork* ew;
	EnemyBattleDamage bd;
	// Line 3437, Address: 0x2b11a0, Func Offset: 0
	// Line 3440, Address: 0x2b11b4, Func Offset: 0x14
	// Line 3441, Address: 0x2b11c0, Func Offset: 0x20
	// Line 3442, Address: 0x2b11cc, Func Offset: 0x2c
	// Line 3445, Address: 0x2b1208, Func Offset: 0x68
	// Line 3446, Address: 0x2b120c, Func Offset: 0x6c
	// Line 3445, Address: 0x2b1210, Func Offset: 0x70
	// Line 3446, Address: 0x2b1214, Func Offset: 0x74
	// Line 3448, Address: 0x2b1220, Func Offset: 0x80
	// Line 3449, Address: 0x2b122c, Func Offset: 0x8c
	// Line 3450, Address: 0x2b1238, Func Offset: 0x98
	// Line 3451, Address: 0x2b1248, Func Offset: 0xa8
	// Line 3452, Address: 0x2b125c, Func Offset: 0xbc
	// Line 3453, Address: 0x2b1278, Func Offset: 0xd8
	// Line 3454, Address: 0x2b1298, Func Offset: 0xf8
	// Line 3455, Address: 0x2b12a4, Func Offset: 0x104
	// Line 3456, Address: 0x2b12c0, Func Offset: 0x120
	// Line 3457, Address: 0x2b12d0, Func Offset: 0x130
	// Line 3458, Address: 0x2b12d8, Func Offset: 0x138
	// Line 3460, Address: 0x2b1304, Func Offset: 0x164
	// Line 3461, Address: 0x2b1310, Func Offset: 0x170
	// Line 3463, Address: 0x2b1344, Func Offset: 0x1a4
	// Line 3464, Address: 0x2b1348, Func Offset: 0x1a8
	// Line 3465, Address: 0x2b1368, Func Offset: 0x1c8
	// Line 3466, Address: 0x2b1374, Func Offset: 0x1d4
	// Line 3467, Address: 0x2b1378, Func Offset: 0x1d8
	// Func End, Address: 0x2b1390, Func Offset: 0x1f0
}

// 
// Start address: 0x2b1390
void EnemyEDScratchFinish(void* obj)
{
	// Line 3471, Address: 0x2b1390, Func Offset: 0
	// Line 3473, Address: 0x2b13a0, Func Offset: 0x10
	// Line 3474, Address: 0x2b13a8, Func Offset: 0x18
	// Line 3475, Address: 0x2b13bc, Func Offset: 0x2c
	// Line 3477, Address: 0x2b13e4, Func Offset: 0x54
	// Line 3478, Address: 0x2b13ec, Func Offset: 0x5c
	// Line 3479, Address: 0x2b13f8, Func Offset: 0x68
	// Line 3480, Address: 0x2b1404, Func Offset: 0x74
	// Func End, Address: 0x2b1418, Func Offset: 0x88
}

// 
// Start address: 0x2b1420
void EnemyEDScratchRevival(void* obj)
{
	EnemyScratchWork* ew;
	// Line 3484, Address: 0x2b1420, Func Offset: 0
	// Line 3486, Address: 0x2b1430, Func Offset: 0x10
	// Line 3487, Address: 0x2b1438, Func Offset: 0x18
	// Line 3486, Address: 0x2b143c, Func Offset: 0x1c
	// Line 3488, Address: 0x2b1440, Func Offset: 0x20
	// Line 3487, Address: 0x2b1444, Func Offset: 0x24
	// Line 3488, Address: 0x2b1448, Func Offset: 0x28
	// Line 3489, Address: 0x2b1464, Func Offset: 0x44
	// Line 3490, Address: 0x2b1480, Func Offset: 0x60
	// Line 3491, Address: 0x2b1498, Func Offset: 0x78
	// Line 3492, Address: 0x2b14b4, Func Offset: 0x94
	// Line 3493, Address: 0x2b14c0, Func Offset: 0xa0
	// Line 3496, Address: 0x2b14fc, Func Offset: 0xdc
	// Line 3497, Address: 0x2b1500, Func Offset: 0xe0
	// Line 3498, Address: 0x2b1508, Func Offset: 0xe8
	// Line 3499, Address: 0x2b1510, Func Offset: 0xf0
	// Line 3500, Address: 0x2b1524, Func Offset: 0x104
	// Line 3501, Address: 0x2b152c, Func Offset: 0x10c
	// Line 3502, Address: 0x2b1538, Func Offset: 0x118
	// Func End, Address: 0x2b154c, Func Offset: 0x12c
}

// 
// Start address: 0x2b1550
void EnemyNurseConstruct(sfObj* obj)
{
	EnemyScratchWork* ew;
	EnemyManageEntryType etype;
	int sf;
	sfObj* tobj;
	// Line 3510, Address: 0x2b1550, Func Offset: 0
	// Line 3515, Address: 0x2b1554, Func Offset: 0x4
	// Line 3510, Address: 0x2b1558, Func Offset: 0x8
	// Line 3515, Address: 0x2b1570, Func Offset: 0x20
	// Line 3520, Address: 0x2b1578, Func Offset: 0x28
	// Line 3522, Address: 0x2b15a8, Func Offset: 0x58
	// Line 3523, Address: 0x2b15b0, Func Offset: 0x60
	// Line 3527, Address: 0x2b15b8, Func Offset: 0x68
	// Line 3528, Address: 0x2b15c4, Func Offset: 0x74
	// Line 3532, Address: 0x2b15f0, Func Offset: 0xa0
	// Line 3533, Address: 0x2b15f8, Func Offset: 0xa8
	// Line 3536, Address: 0x2b1600, Func Offset: 0xb0
	// Line 3537, Address: 0x2b1614, Func Offset: 0xc4
	// Line 3538, Address: 0x2b1624, Func Offset: 0xd4
	// Line 3540, Address: 0x2b1630, Func Offset: 0xe0
	// Line 3541, Address: 0x2b1640, Func Offset: 0xf0
	// Line 3542, Address: 0x2b1648, Func Offset: 0xf8
	// Line 3544, Address: 0x2b1674, Func Offset: 0x124
	// Line 3545, Address: 0x2b167c, Func Offset: 0x12c
	// Line 3546, Address: 0x2b1690, Func Offset: 0x140
	// Line 3548, Address: 0x2b16b4, Func Offset: 0x164
	// Line 3549, Address: 0x2b16cc, Func Offset: 0x17c
	// Line 3550, Address: 0x2b16d4, Func Offset: 0x184
	// Line 3551, Address: 0x2b16e4, Func Offset: 0x194
	// Line 3552, Address: 0x2b16f0, Func Offset: 0x1a0
	// Line 3553, Address: 0x2b16fc, Func Offset: 0x1ac
	// Line 3554, Address: 0x2b1708, Func Offset: 0x1b8
	// Line 3555, Address: 0x2b1710, Func Offset: 0x1c0
	// Line 3556, Address: 0x2b1728, Func Offset: 0x1d8
	// Line 3558, Address: 0x2b1740, Func Offset: 0x1f0
	// Line 3559, Address: 0x2b174c, Func Offset: 0x1fc
	// Line 3560, Address: 0x2b1754, Func Offset: 0x204
	// Line 3561, Address: 0x2b175c, Func Offset: 0x20c
	// Line 3562, Address: 0x2b1760, Func Offset: 0x210
	// Line 3565, Address: 0x2b1770, Func Offset: 0x220
	// Line 3566, Address: 0x2b1780, Func Offset: 0x230
	// Line 3568, Address: 0x2b178c, Func Offset: 0x23c
	// Line 3569, Address: 0x2b1794, Func Offset: 0x244
	// Line 3570, Address: 0x2b17b4, Func Offset: 0x264
	// Line 3571, Address: 0x2b17b8, Func Offset: 0x268
	// Line 3572, Address: 0x2b17c4, Func Offset: 0x274
	// Line 3573, Address: 0x2b17cc, Func Offset: 0x27c
	// Line 3574, Address: 0x2b17d0, Func Offset: 0x280
	// Line 3577, Address: 0x2b180c, Func Offset: 0x2bc
	// Line 3580, Address: 0x2b1814, Func Offset: 0x2c4
	// Line 3583, Address: 0x2b1818, Func Offset: 0x2c8
	// Line 3584, Address: 0x2b1828, Func Offset: 0x2d8
	// Line 3586, Address: 0x2b1830, Func Offset: 0x2e0
	// Line 3588, Address: 0x2b183c, Func Offset: 0x2ec
	// Line 3586, Address: 0x2b1840, Func Offset: 0x2f0
	// Line 3588, Address: 0x2b1844, Func Offset: 0x2f4
	// Line 3586, Address: 0x2b1848, Func Offset: 0x2f8
	// Line 3588, Address: 0x2b1858, Func Offset: 0x308
	// Line 3589, Address: 0x2b1860, Func Offset: 0x310
	// Func End, Address: 0x2b1880, Func Offset: 0x330
}

// 
// Start address: 0x2b1880
void EnemyNurseHandle(sfObj* obj)
{
	// Line 3594, Address: 0x2b1880, Func Offset: 0
	// Func End, Address: 0x2b1888, Func Offset: 0x8
}

// 
// Start address: 0x2b1890
void EnemyNurseDraw(sfObj* obj)
{
	// Line 3600, Address: 0x2b1890, Func Offset: 0
	// Func End, Address: 0x2b1898, Func Offset: 0x8
}

// 
// Start address: 0x2b18a0
void EnemyNurseDestruct(sfObj* obj)
{
	EnemyScratchWork* ew;
	// Line 3605, Address: 0x2b18a0, Func Offset: 0
	// Line 3608, Address: 0x2b18b0, Func Offset: 0x10
	// Line 3610, Address: 0x2b18b8, Func Offset: 0x18
	// Line 3611, Address: 0x2b18c4, Func Offset: 0x24
	// Line 3612, Address: 0x2b18e0, Func Offset: 0x40
	// Line 3613, Address: 0x2b18f0, Func Offset: 0x50
	// Line 3615, Address: 0x2b1900, Func Offset: 0x60
	// Line 3616, Address: 0x2b190c, Func Offset: 0x6c
	// Line 3617, Address: 0x2b1910, Func Offset: 0x70
	// Line 3619, Address: 0x2b1918, Func Offset: 0x78
	// Line 3620, Address: 0x2b1920, Func Offset: 0x80
	// Line 3622, Address: 0x2b1928, Func Offset: 0x88
	// Line 3624, Address: 0x2b1930, Func Offset: 0x90
	// Line 3625, Address: 0x2b1938, Func Offset: 0x98
	// Func End, Address: 0x2b194c, Func Offset: 0xac
}

// 
// Start address: 0x2b1950
void EnemyNurseDataPreserve(sfObj* obj)
{
	EnemyManageDataOne* pe;
	// Line 3629, Address: 0x2b1950, Func Offset: 0
	// Line 3632, Address: 0x2b1960, Func Offset: 0x10
	// Line 3633, Address: 0x2b1978, Func Offset: 0x28
	// Line 3634, Address: 0x2b1980, Func Offset: 0x30
	// Line 3635, Address: 0x2b198c, Func Offset: 0x3c
	// Line 3636, Address: 0x2b1998, Func Offset: 0x48
	// Line 3637, Address: 0x2b19a4, Func Offset: 0x54
	// Func End, Address: 0x2b19bc, Func Offset: 0x6c
}

// 
// Start address: 0x2b19c0
void EnemyNurseDataExtract(sfObj* obj)
{
	EnemyManageDataOne* pe;
	EnemyScratchAnime anime;
	// Line 3641, Address: 0x2b19c0, Func Offset: 0
	// Line 3645, Address: 0x2b19d4, Func Offset: 0x14
	// Line 3646, Address: 0x2b19dc, Func Offset: 0x1c
	// Line 3647, Address: 0x2b19f0, Func Offset: 0x30
	// Line 3648, Address: 0x2b19fc, Func Offset: 0x3c
	// Line 3649, Address: 0x2b1a08, Func Offset: 0x48
	// Line 3650, Address: 0x2b1a0c, Func Offset: 0x4c
	// Line 3651, Address: 0x2b1a24, Func Offset: 0x64
	// Line 3652, Address: 0x2b1a2c, Func Offset: 0x6c
	// Line 3653, Address: 0x2b1a38, Func Offset: 0x78
	// Line 3655, Address: 0x2b1a40, Func Offset: 0x80
	// Line 3658, Address: 0x2b1a48, Func Offset: 0x88
	// Line 3659, Address: 0x2b1a54, Func Offset: 0x94
	// Func End, Address: 0x2b1a6c, Func Offset: 0xac
}

