typedef struct sfObj;
typedef enum EnemyCondition : unsigned char;
typedef struct EnemyKillerWork;
typedef struct sfOffsetAABB;
typedef struct _anon0;
typedef union sfCldBody;
typedef struct _anon1;
typedef struct EventFlag;
typedef union _anon2;
typedef struct sfCldPart;
typedef enum EnemyManageEntryType : unsigned char;
typedef struct sgBone;
typedef struct _anon3;
typedef enum EnemySenseResultType : unsigned char;
typedef enum EnemyPlayerType : unsigned char;
typedef struct EnemyFmWork;
typedef struct EnemySearchData;
typedef struct EnemySenseResult;
typedef struct EnemySenseData;
typedef struct EnemyManageDataOne;
typedef enum EnemySenseType : unsigned char;
typedef enum BattleDamageType : unsigned char;
typedef struct _GAME_WORK;
typedef struct EnemyClHitResult;
typedef union _anon4;
typedef struct EnemyKillerHand;
typedef struct _anon5;
typedef struct EnemyBattleDamage;
typedef struct EnemyKillerSubWork;
typedef struct _anon6;
typedef struct EnemyMeasureResult;
typedef struct _anon7;
typedef struct EnemyRwWork;
typedef struct sfCldObject;
typedef struct EnemyObjHook;
typedef struct sgQTNode;
typedef struct EnemySearchPoint;
typedef struct sgQTObject;
typedef enum BattleAttackKind : unsigned char;

typedef void(*type_7)(void*, int);
typedef int(*type_8)(void*);
typedef void(*type_9)(void*, int);
typedef int(*type_11)(void*);
typedef int(*type_14)(void*);
typedef void(*type_19)(sfObj*);
typedef void(*type_21)(sfObj*);
typedef void(*type_24)(void*, int);
typedef void(*type_27)(sfObj*);

typedef unsigned char type_0[320];
typedef _anon0 type_1[4];
typedef _anon2 type_2[0];
typedef float type_3[4];
typedef int type_4[1];
typedef unsigned char type_5[3];
typedef int type_6[1];
typedef int type_10[1];
typedef float type_12[4];
typedef float type_13[4][4];
typedef int type_15[1];
typedef _anon4 type_16[256];
typedef _anon4 type_17[4];
typedef int type_18[1];
typedef void(*type_20)(sfObj*)[21];
typedef int type_22[1];
typedef float type_23[4];
typedef EnemyKillerHand type_25[2];
typedef int type_26[1];
typedef short type_28[2];
typedef sfCldPart* type_29[6];
typedef unsigned short type_30[2];
typedef char type_31[4];
typedef unsigned char type_32[3];
typedef unsigned char type_33[4];
typedef float type_34[1];
typedef int type_35[1];
typedef float type_36[5];

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

struct EnemyKillerWork
{
	EnemyKillerSubWork subwork;
	float target_pos[4];
	int head_mode;
	int super_armor_count;
	float super_armor_wait;
	int attack_hand;
	int attack_kind;
	float timer;
	int attack_count;
	float attack_timer;
	float distance;
	EnemySearchData* search;
	EnemySenseData* player_check;
	int sound_slot;
	int sound_no;
};

struct sfOffsetAABB
{
	_anon6 aabb;
	float offset[4];
};

struct _anon0
{
	unsigned char next_offset;
	unsigned char flags;
	short id;
};

union sfCldBody
{
	_anon7 obb;
	_anon6 aabb;
	sfOffsetAABB offset_aabb;
	_anon5 line;
	_anon3 sphere;
};

struct _anon1
{
	_anon2 vertex[0];
};

struct EventFlag
{
	unsigned char flag[320];
};

union _anon2
{
	float node[4];
	_anon0 data[4];
};

struct sfCldPart
{
	sfCldBody world_hit;
	sfCldBody local_hit;
	unsigned char hit_type;
	unsigned char pad[3];
	int hit_kind;
	sgBone* parent;
	void* data;
	void* parent_cld;
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

struct _anon3
{
	float center[4];
	float radius;
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

struct EnemyFmWork
{
};

struct EnemySearchData
{
};

struct EnemySenseResult
{
	float pos[4];
	EnemySenseResultType type;
	float level;
	sfObj* obj;
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

enum EnemySenseType : unsigned char
{
	EN_SENSE_TYPE_SIGHT_OF_PLAYER,
	EN_SENSE_TYPE_SIGHT_OF_PLAYER_XZ,
	EN_SENSE_TYPE_NOSIGHT_OF_PLAYER,
	EN_SENSE_TYPE_NOSIGHT_OF_PLAYER_XZ
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

struct _GAME_WORK
{
	int init_at_cold[1];
	int logo_displayed;
	int init_at_warm[1];
	int game_init_executed;
	void* warm_memory_top;
	int load_stage_start;
	int continue_play;
	int game_overed;
	int risky_continue_count;
	int level;
	int init_at_game[1];
	void* game_memory_top;
	int stage;
	int scene;
	int prev_scene;
	int prev_stage;
	int next_stage;
	int next_scene;
	int start_door;
	int world;
	int real_scene;
	float current_camera_mtx[4][4];
	float next_camera_mtx[4][4];
	float game_camera_back[4][4];
	float game_view_angle;
	float game_view_angle_back;
	float map_offset[4];
	void* player;
	int control;
	int player_pos;
	unsigned int next_flags;
	int gameover;
	int gameover_ok;
	int game_complete;
	int gauge;
	int event_disable;
	int eileen_status;
	int cynthia_status;
	int pause_disable_contine;
	unsigned int play_time;
	unsigned int continue_count;
	unsigned int killed_enemy;
	unsigned int held_ghost;
	int update_continue;
	int continue_item;
	int now_peeping;
	unsigned int pre_eil_timer;
	unsigned int eil_interval;
	int pre_demo_index;
	unsigned int pre_demo_type;
	unsigned int pre_door_timer;
	unsigned int door_interval;
	unsigned int pre_door_demo_no;
	int init_at_stage[1];
	void* stage_memory_top;
	int stage_data_save;
	int init_at_scene[1];
	void* scene_memory_top;
	void* snap_texture_load_buffer;
	int game_mode;
	int shadow_density;
	int door_move_disable;
	int fog_effect_off;
	int init_at_loop[1];
	int game_in_action;
	int player_touch_door_no;
	int* passing_door;
	int work_end[1];
	int open_door_sn;
	int open_door_dn;
	int close_door_se_disable;
	int close_door_se_reserve;
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

struct EnemyKillerHand
{
	float arm_rot;
	float arm_rot_v;
	int rot_mode;
	sfObj* weapon_obj;
	int bullet;
	int fire_count;
};

struct _anon5
{
	float start[4];
	float end[4];
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

struct EnemyKillerSubWork
{
	float head_rot[4];
	float neck_rot[4];
	EnemyKillerHand hand[2];
	int head_mode;
	EnemyRwWork* rw_work;
	EnemyFmWork* fm_work;
	sfObj* target_obj;
	EnemyObjHook* animechange_hook;
	EnemyObjHook* animeupdate_hook;
	int falling_direction;
};

struct _anon6
{
	float bmin[4];
	float bmax[4];
};

struct EnemyMeasureResult
{
	float pos[4];
	float normal[4];
	float dist;
	int exist;
	_anon1* poly;
};

struct _anon7
{
	float mat[4][4];
	float half_w[4];
};

struct EnemyRwWork
{
};

struct sfCldObject
{
	sgQTObject tree_object;
	sgQTNode* stay_node;
	sfCldPart* parts[6];
	unsigned char n_parts;
	unsigned char pad[3];
	void* data;
};

struct EnemyObjHook
{
};

struct sgQTNode
{
	int dummy;
};

struct EnemySearchPoint
{
};

struct sgQTObject
{
	_anon3 bounding_ball;
	sgQTObject* next;
	sgQTObject* prev;
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

float super_armor_endurance[5];
_GAME_WORK gamew;
void(*killer_jump_table)(sfObj*)[21];
int(*EnemyEDAnimeIsEndSoon)(void*);
float sg_vector_unit_y[4];
EventFlag event_flag;
int(*EnemyEDSenseTest)(void*);
void(*EnemyEDBattleDamageRefrect)(void*, int);
int(*EnemyEDBattleDamageCheck)(void*);
void(*EnemyEDKillerAdditionalDamageDown)(void*, int);
void(*EnemyEDKillerDamage)(void*, int);

int check_boss(sfObj* obj);
int check_body(sfObj* obj);
int check_final_stage();
void EnemyKillerConstruct(sfObj* obj);
void EnemyKillerHandle(sfObj* obj);
void EnemyKillerDraw(sfObj* obj);
void EnemyKillerDestruct(sfObj* obj);
void EnemyKillerDataPreserve(sfObj* obj);
void EnemyKillerDataExtract(sfObj* obj);
void EnemyKillerControl(sfObj* obj);
void EnemyKillerControlInit(sfObj* obj);
void set_target(sfObj* obj);
int search_path(sfObj* obj, float* target);
void EnemyKillerControlWander(sfObj* obj);
void EnemyKillerControlRun(sfObj* obj);
void EnemyKillerControlCAttack(sfObj* obj);
void EnemyKillerControlApproach(sfObj* obj);
void EnemyKillerControlReady(sfObj* obj);
void EnemyKillerControlShoot(sfObj* obj);
void EnemyKillerControlRapidFire(sfObj* obj);
void set_escape_point(sfObj* obj);
void EnemyKillerControlEscape(sfObj* obj);
void EnemyKillerControlDash(sfObj* obj);
void EnemyKillerControlAttack(sfObj* obj);
void EnemyKillerControlInterval(sfObj* obj);
void EnemyKillerControlBackStep(sfObj* obj);
void EnemyKillerControlDamage(sfObj* obj);
void EnemyKillerControlDown(sfObj* obj);
void EnemyKillerControlFinish(sfObj* obj);
void EnemyKillerControlCM(sfObj* obj);
int door_sound(int type);
void EnemyKillerControlWait(sfObj* obj);
void EnemyKillerControlEvent(sfObj* obj);
void EnemyKillerControlTest();
void EnemyKillerSoundCall(sfObj* obj, int sound_no);
void EnemyKillerSoundStop(sfObj* obj);
void EnemyKillerFindPlayer(sfObj* obj);
void EnemyKillerSetEventDamageCheck(sfObj* obj);
int EnemyKillerCheckNarrowPassage(sfObj* obj);
int EnemyKillerCheckAttackRange(sfObj* obj);
int EnemyKillerSearchEnemy(sfObj* obj);
void EnemyKillerRecover(sfObj* obj);
void EnemyKillerRevival(sfObj* obj);
void EnemyEDKillerDamage(void* obj);
void EnemyEDKillerAdditionalDamageDown(void* obj);

// 
// Start address: 0x223c00
int check_boss(sfObj* obj)
{
	// Line 165, Address: 0x223c00, Func Offset: 0
	// Line 166, Address: 0x223c08, Func Offset: 0x8
	// Line 168, Address: 0x223c10, Func Offset: 0x10
	// Line 166, Address: 0x223c14, Func Offset: 0x14
	// Line 168, Address: 0x223c24, Func Offset: 0x24
	// Func End, Address: 0x223c2c, Func Offset: 0x2c
}

// 
// Start address: 0x223c30
int check_body(sfObj* obj)
{
	// Line 172, Address: 0x223c30, Func Offset: 0
	// Line 173, Address: 0x223c38, Func Offset: 0x8
	// Line 175, Address: 0x223c40, Func Offset: 0x10
	// Line 173, Address: 0x223c44, Func Offset: 0x14
	// Line 175, Address: 0x223c54, Func Offset: 0x24
	// Func End, Address: 0x223c5c, Func Offset: 0x2c
}

// 
// Start address: 0x223c60
int check_final_stage()
{
	int r;
	// Line 179, Address: 0x223c60, Func Offset: 0
	// Line 181, Address: 0x223c6c, Func Offset: 0xc
	// Line 184, Address: 0x223c90, Func Offset: 0x30
	// Line 185, Address: 0x223c94, Func Offset: 0x34
	// Line 186, Address: 0x223c98, Func Offset: 0x38
	// Line 187, Address: 0x223c9c, Func Offset: 0x3c
	// Func End, Address: 0x223cac, Func Offset: 0x4c
}

// 
// Start address: 0x223cb0
void EnemyKillerConstruct(sfObj* obj)
{
	EnemyKillerWork* ew;
	EnemyManageEntryType etype;
	int type;
	sfObj* tobj;
	// Line 191, Address: 0x223cb0, Func Offset: 0
	// Line 196, Address: 0x223cc8, Func Offset: 0x18
	// Line 197, Address: 0x223cd8, Func Offset: 0x28
	// Line 198, Address: 0x223ce0, Func Offset: 0x30
	// Line 199, Address: 0x223ce8, Func Offset: 0x38
	// Line 200, Address: 0x223cf8, Func Offset: 0x48
	// Line 201, Address: 0x223d00, Func Offset: 0x50
	// Line 204, Address: 0x223d08, Func Offset: 0x58
	// Line 209, Address: 0x223d14, Func Offset: 0x64
	// Line 211, Address: 0x223d44, Func Offset: 0x94
	// Line 212, Address: 0x223d4c, Func Offset: 0x9c
	// Line 213, Address: 0x223d54, Func Offset: 0xa4
	// Line 216, Address: 0x223d58, Func Offset: 0xa8
	// Line 217, Address: 0x223d64, Func Offset: 0xb4
	// Line 220, Address: 0x223d88, Func Offset: 0xd8
	// Line 221, Address: 0x223d90, Func Offset: 0xe0
	// Line 224, Address: 0x223d98, Func Offset: 0xe8
	// Line 225, Address: 0x223da0, Func Offset: 0xf0
	// Line 228, Address: 0x223dd4, Func Offset: 0x124
	// Line 229, Address: 0x223df4, Func Offset: 0x144
	// Line 230, Address: 0x223dfc, Func Offset: 0x14c
	// Line 231, Address: 0x223e04, Func Offset: 0x154
	// Line 233, Address: 0x223e08, Func Offset: 0x158
	// Line 235, Address: 0x223e18, Func Offset: 0x168
	// Line 236, Address: 0x223e28, Func Offset: 0x178
	// Line 237, Address: 0x223e30, Func Offset: 0x180
	// Line 239, Address: 0x223e5c, Func Offset: 0x1ac
	// Line 240, Address: 0x223e6c, Func Offset: 0x1bc
	// Line 241, Address: 0x223e7c, Func Offset: 0x1cc
	// Line 243, Address: 0x223e9c, Func Offset: 0x1ec
	// Line 244, Address: 0x223ea4, Func Offset: 0x1f4
	// Line 245, Address: 0x223eac, Func Offset: 0x1fc
	// Line 246, Address: 0x223eb8, Func Offset: 0x208
	// Line 249, Address: 0x223ee8, Func Offset: 0x238
	// Line 250, Address: 0x223ef4, Func Offset: 0x244
	// Line 251, Address: 0x223efc, Func Offset: 0x24c
	// Line 252, Address: 0x223f04, Func Offset: 0x254
	// Line 253, Address: 0x223f08, Func Offset: 0x258
	// Line 254, Address: 0x223f10, Func Offset: 0x260
	// Line 256, Address: 0x223f18, Func Offset: 0x268
	// Line 258, Address: 0x223f24, Func Offset: 0x274
	// Line 259, Address: 0x223f2c, Func Offset: 0x27c
	// Line 261, Address: 0x223f54, Func Offset: 0x2a4
	// Line 262, Address: 0x223f5c, Func Offset: 0x2ac
	// Line 263, Address: 0x223f68, Func Offset: 0x2b8
	// Line 265, Address: 0x223f70, Func Offset: 0x2c0
	// Line 267, Address: 0x223f8c, Func Offset: 0x2dc
	// Line 270, Address: 0x223fc8, Func Offset: 0x318
	// Line 271, Address: 0x223fd4, Func Offset: 0x324
	// Line 272, Address: 0x223fdc, Func Offset: 0x32c
	// Line 273, Address: 0x223fe0, Func Offset: 0x330
	// Line 274, Address: 0x223fec, Func Offset: 0x33c
	// Line 275, Address: 0x223ff4, Func Offset: 0x344
	// Line 276, Address: 0x224000, Func Offset: 0x350
	// Line 277, Address: 0x224008, Func Offset: 0x358
	// Line 280, Address: 0x224014, Func Offset: 0x364
	// Line 281, Address: 0x224018, Func Offset: 0x368
	// Line 283, Address: 0x22401c, Func Offset: 0x36c
	// Line 282, Address: 0x224020, Func Offset: 0x370
	// Line 285, Address: 0x224024, Func Offset: 0x374
	// Line 286, Address: 0x224034, Func Offset: 0x384
	// Func End, Address: 0x224054, Func Offset: 0x3a4
}

// 
// Start address: 0x224060
void EnemyKillerHandle(sfObj* obj)
{
	// Line 290, Address: 0x224060, Func Offset: 0
	// Line 291, Address: 0x224070, Func Offset: 0x10
	// Line 292, Address: 0x224080, Func Offset: 0x20
	// Line 293, Address: 0x224088, Func Offset: 0x28
	// Line 294, Address: 0x224090, Func Offset: 0x30
	// Line 295, Address: 0x2240a0, Func Offset: 0x40
	// Line 296, Address: 0x2240a8, Func Offset: 0x48
	// Line 298, Address: 0x2240b0, Func Offset: 0x50
	// Line 299, Address: 0x2240b8, Func Offset: 0x58
	// Line 300, Address: 0x2240c0, Func Offset: 0x60
	// Line 301, Address: 0x2240c8, Func Offset: 0x68
	// Line 302, Address: 0x2240d0, Func Offset: 0x70
	// Line 303, Address: 0x2240d8, Func Offset: 0x78
	// Line 304, Address: 0x2240e0, Func Offset: 0x80
	// Line 305, Address: 0x2240e8, Func Offset: 0x88
	// Line 306, Address: 0x2240f0, Func Offset: 0x90
	// Line 307, Address: 0x2240f8, Func Offset: 0x98
	// Line 309, Address: 0x224100, Func Offset: 0xa0
	// Line 310, Address: 0x224110, Func Offset: 0xb0
	// Line 312, Address: 0x224134, Func Offset: 0xd4
	// Line 313, Address: 0x22413c, Func Offset: 0xdc
	// Line 314, Address: 0x224144, Func Offset: 0xe4
	// Line 315, Address: 0x224150, Func Offset: 0xf0
	// Line 316, Address: 0x224158, Func Offset: 0xf8
	// Line 318, Address: 0x224160, Func Offset: 0x100
	// Func End, Address: 0x224174, Func Offset: 0x114
}

// 
// Start address: 0x224180
void EnemyKillerDraw(sfObj* obj)
{
	// Line 322, Address: 0x224180, Func Offset: 0
	// Line 323, Address: 0x22418c, Func Offset: 0xc
	// Line 324, Address: 0x22419c, Func Offset: 0x1c
	// Line 325, Address: 0x2241a4, Func Offset: 0x24
	// Line 326, Address: 0x2241c0, Func Offset: 0x40
	// Line 327, Address: 0x2241c8, Func Offset: 0x48
	// Line 328, Address: 0x2241d0, Func Offset: 0x50
	// Line 329, Address: 0x2241d8, Func Offset: 0x58
	// Line 330, Address: 0x2241e0, Func Offset: 0x60
	// Line 332, Address: 0x2241e8, Func Offset: 0x68
	// Func End, Address: 0x2241f8, Func Offset: 0x78
}

// 
// Start address: 0x224200
void EnemyKillerDestruct(sfObj* obj)
{
	EnemyKillerWork* ew;
	// Line 336, Address: 0x224200, Func Offset: 0
	// Line 338, Address: 0x224210, Func Offset: 0x10
	// Line 340, Address: 0x224218, Func Offset: 0x18
	// Line 341, Address: 0x224228, Func Offset: 0x28
	// Line 342, Address: 0x224230, Func Offset: 0x30
	// Line 343, Address: 0x224238, Func Offset: 0x38
	// Line 344, Address: 0x224248, Func Offset: 0x48
	// Line 345, Address: 0x224250, Func Offset: 0x50
	// Line 348, Address: 0x224258, Func Offset: 0x58
	// Line 349, Address: 0x224260, Func Offset: 0x60
	// Line 350, Address: 0x224268, Func Offset: 0x68
	// Line 351, Address: 0x224270, Func Offset: 0x70
	// Line 352, Address: 0x22427c, Func Offset: 0x7c
	// Line 353, Address: 0x224284, Func Offset: 0x84
	// Line 354, Address: 0x22428c, Func Offset: 0x8c
	// Line 356, Address: 0x224294, Func Offset: 0x94
	// Line 357, Address: 0x22429c, Func Offset: 0x9c
	// Func End, Address: 0x2242b4, Func Offset: 0xb4
}

// 
// Start address: 0x2242c0
void EnemyKillerDataPreserve(sfObj* obj)
{
	EnemyManageDataOne* pe;
	// Line 361, Address: 0x2242c0, Func Offset: 0
	// Line 363, Address: 0x2242d0, Func Offset: 0x10
	// Line 364, Address: 0x2242e0, Func Offset: 0x20
	// Line 365, Address: 0x2242e8, Func Offset: 0x28
	// Line 366, Address: 0x2242f0, Func Offset: 0x30
	// Line 369, Address: 0x224300, Func Offset: 0x40
	// Line 370, Address: 0x224330, Func Offset: 0x70
	// Line 371, Address: 0x224338, Func Offset: 0x78
	// Line 372, Address: 0x224344, Func Offset: 0x84
	// Line 373, Address: 0x224350, Func Offset: 0x90
	// Line 374, Address: 0x22435c, Func Offset: 0x9c
	// Func End, Address: 0x224374, Func Offset: 0xb4
}

// 
// Start address: 0x224380
void EnemyKillerDataExtract(sfObj* obj)
{
	EnemyManageDataOne* pe;
	// Line 378, Address: 0x224380, Func Offset: 0
	// Line 380, Address: 0x224394, Func Offset: 0x14
	// Line 381, Address: 0x2243a4, Func Offset: 0x24
	// Line 382, Address: 0x2243ac, Func Offset: 0x2c
	// Line 383, Address: 0x2243b4, Func Offset: 0x34
	// Line 386, Address: 0x2243c8, Func Offset: 0x48
	// Line 387, Address: 0x2243dc, Func Offset: 0x5c
	// Line 388, Address: 0x2243e8, Func Offset: 0x68
	// Line 389, Address: 0x2243f4, Func Offset: 0x74
	// Line 390, Address: 0x224420, Func Offset: 0xa0
	// Line 393, Address: 0x224428, Func Offset: 0xa8
	// Line 394, Address: 0x224434, Func Offset: 0xb4
	// Func End, Address: 0x224450, Func Offset: 0xd0
}

// 
// Start address: 0x224450
void EnemyKillerControl(sfObj* obj)
{
	EnemyKillerWork* ew;
	int step;
	float dt;
	// Line 439, Address: 0x224450, Func Offset: 0
	// Line 443, Address: 0x224460, Func Offset: 0x10
	// Line 452, Address: 0x22446c, Func Offset: 0x1c
	// Line 454, Address: 0x224474, Func Offset: 0x24
	// Line 455, Address: 0x22447c, Func Offset: 0x2c
	// Line 456, Address: 0x2244a0, Func Offset: 0x50
	// Line 457, Address: 0x2244a4, Func Offset: 0x54
	// Line 458, Address: 0x2244b4, Func Offset: 0x64
	// Line 468, Address: 0x2244bc, Func Offset: 0x6c
	// Line 469, Address: 0x2244c4, Func Offset: 0x74
	// Line 472, Address: 0x2244d0, Func Offset: 0x80
	// Line 474, Address: 0x2244d8, Func Offset: 0x88
	// Line 476, Address: 0x2244f4, Func Offset: 0xa4
	// Line 477, Address: 0x2244fc, Func Offset: 0xac
	// Func End, Address: 0x224510, Func Offset: 0xc0
}

// 
// Start address: 0x224510
void EnemyKillerControlInit(sfObj* obj)
{
	// Line 481, Address: 0x224510, Func Offset: 0
	// Line 482, Address: 0x22451c, Func Offset: 0xc
	// Line 484, Address: 0x224540, Func Offset: 0x30
	// Line 485, Address: 0x22454c, Func Offset: 0x3c
	// Line 486, Address: 0x224554, Func Offset: 0x44
	// Line 487, Address: 0x224558, Func Offset: 0x48
	// Line 488, Address: 0x224564, Func Offset: 0x54
	// Line 489, Address: 0x22456c, Func Offset: 0x5c
	// Line 490, Address: 0x224570, Func Offset: 0x60
	// Line 491, Address: 0x22457c, Func Offset: 0x6c
	// Line 492, Address: 0x224580, Func Offset: 0x70
	// Func End, Address: 0x224590, Func Offset: 0x80
}

// 
// Start address: 0x224590
void set_target(sfObj* obj)
{
	EnemyKillerWork* ew;
	float* pos;
	float tpos[4];
	EnemyMeasureResult mres;
	int i;
	int p;
	// Line 496, Address: 0x224590, Func Offset: 0
	// Line 502, Address: 0x2245b0, Func Offset: 0x20
	// Line 503, Address: 0x2245b8, Func Offset: 0x28
	// Line 504, Address: 0x2245c8, Func Offset: 0x38
	// Line 505, Address: 0x2245d4, Func Offset: 0x44
	// Line 506, Address: 0x2245e0, Func Offset: 0x50
	// Line 507, Address: 0x2245f0, Func Offset: 0x60
	// Line 510, Address: 0x224604, Func Offset: 0x74
	// Line 511, Address: 0x224610, Func Offset: 0x80
	// Line 510, Address: 0x224614, Func Offset: 0x84
	// Line 511, Address: 0x224618, Func Offset: 0x88
	// Line 515, Address: 0x224648, Func Offset: 0xb8
	// Line 516, Address: 0x224658, Func Offset: 0xc8
	// Line 517, Address: 0x224664, Func Offset: 0xd4
	// Func End, Address: 0x224688, Func Offset: 0xf8
}

// 
// Start address: 0x224690
int search_path(sfObj* obj, float* target)
{
	EnemyKillerWork* ew;
	EnemySearchPoint* esp;
	float pos[4];
	// Line 521, Address: 0x224690, Func Offset: 0
	// Line 525, Address: 0x2246a8, Func Offset: 0x18
	// Line 526, Address: 0x2246b4, Func Offset: 0x24
	// Line 527, Address: 0x2246c0, Func Offset: 0x30
	// Line 528, Address: 0x2246d4, Func Offset: 0x44
	// Line 529, Address: 0x2246dc, Func Offset: 0x4c
	// Line 528, Address: 0x2246e0, Func Offset: 0x50
	// Line 529, Address: 0x2246e4, Func Offset: 0x54
	// Line 530, Address: 0x2246fc, Func Offset: 0x6c
	// Line 531, Address: 0x224704, Func Offset: 0x74
	// Line 532, Address: 0x224708, Func Offset: 0x78
	// Line 534, Address: 0x224730, Func Offset: 0xa0
	// Line 536, Address: 0x224738, Func Offset: 0xa8
	// Line 540, Address: 0x224744, Func Offset: 0xb4
	// Line 541, Address: 0x224748, Func Offset: 0xb8
	// Func End, Address: 0x224760, Func Offset: 0xd0
}

// 
// Start address: 0x224760
void EnemyKillerControlWander(sfObj* obj)
{
	EnemyKillerWork* ew;
	float* pos;
	float tpos[4];
	float rot[4];
	float dt;
	float d;
	// Line 545, Address: 0x224760, Func Offset: 0
	// Line 551, Address: 0x22477c, Func Offset: 0x1c
	// Line 552, Address: 0x224788, Func Offset: 0x28
	// Line 553, Address: 0x224794, Func Offset: 0x34
	// Line 554, Address: 0x2247a0, Func Offset: 0x40
	// Line 555, Address: 0x2247ac, Func Offset: 0x4c
	// Line 557, Address: 0x2247d8, Func Offset: 0x78
	// Line 558, Address: 0x2247e0, Func Offset: 0x80
	// Line 559, Address: 0x2247ec, Func Offset: 0x8c
	// Line 560, Address: 0x2247f8, Func Offset: 0x98
	// Line 563, Address: 0x224800, Func Offset: 0xa0
	// Line 564, Address: 0x224808, Func Offset: 0xa8
	// Line 565, Address: 0x224824, Func Offset: 0xc4
	// Line 566, Address: 0x224834, Func Offset: 0xd4
	// Line 567, Address: 0x22486c, Func Offset: 0x10c
	// Line 568, Address: 0x224874, Func Offset: 0x114
	// Line 569, Address: 0x22487c, Func Offset: 0x11c
	// Line 570, Address: 0x224880, Func Offset: 0x120
	// Line 571, Address: 0x224888, Func Offset: 0x128
	// Line 574, Address: 0x224890, Func Offset: 0x130
	// Line 575, Address: 0x2248a4, Func Offset: 0x144
	// Line 576, Address: 0x2248ac, Func Offset: 0x14c
	// Line 577, Address: 0x2248b4, Func Offset: 0x154
	// Line 578, Address: 0x2248b8, Func Offset: 0x158
	// Line 579, Address: 0x2248c0, Func Offset: 0x160
	// Line 578, Address: 0x2248c4, Func Offset: 0x164
	// Line 579, Address: 0x2248c8, Func Offset: 0x168
	// Line 580, Address: 0x2248d8, Func Offset: 0x178
	// Line 582, Address: 0x2248e8, Func Offset: 0x188
	// Line 583, Address: 0x2248fc, Func Offset: 0x19c
	// Line 584, Address: 0x224908, Func Offset: 0x1a8
	// Line 586, Address: 0x22492c, Func Offset: 0x1cc
	// Line 593, Address: 0x224934, Func Offset: 0x1d4
	// Line 594, Address: 0x224938, Func Offset: 0x1d8
	// Line 595, Address: 0x22495c, Func Offset: 0x1fc
	// Line 596, Address: 0x22496c, Func Offset: 0x20c
	// Line 597, Address: 0x224974, Func Offset: 0x214
	// Line 598, Address: 0x224980, Func Offset: 0x220
	// Line 601, Address: 0x224988, Func Offset: 0x228
	// Func End, Address: 0x2249a8, Func Offset: 0x248
}

// 
// Start address: 0x2249b0
void EnemyKillerControlRun(sfObj* obj)
{
	EnemyKillerWork* ew;
	float* pos;
	float tpos[4];
	float rot[4];
	float dt;
	float d;
	// Line 605, Address: 0x2249b0, Func Offset: 0
	// Line 611, Address: 0x2249c8, Func Offset: 0x18
	// Line 612, Address: 0x2249d4, Func Offset: 0x24
	// Line 613, Address: 0x2249e0, Func Offset: 0x30
	// Line 614, Address: 0x2249ec, Func Offset: 0x3c
	// Line 615, Address: 0x2249f8, Func Offset: 0x48
	// Line 616, Address: 0x224a2c, Func Offset: 0x7c
	// Line 617, Address: 0x224a30, Func Offset: 0x80
	// Line 618, Address: 0x224a38, Func Offset: 0x88
	// Line 620, Address: 0x224a44, Func Offset: 0x94
	// Line 623, Address: 0x224a50, Func Offset: 0xa0
	// Line 624, Address: 0x224a58, Func Offset: 0xa8
	// Line 625, Address: 0x224a60, Func Offset: 0xb0
	// Line 629, Address: 0x224a68, Func Offset: 0xb8
	// Line 628, Address: 0x224a6c, Func Offset: 0xbc
	// Line 629, Address: 0x224a70, Func Offset: 0xc0
	// Line 628, Address: 0x224a74, Func Offset: 0xc4
	// Line 629, Address: 0x224a78, Func Offset: 0xc8
	// Line 630, Address: 0x224a88, Func Offset: 0xd8
	// Line 631, Address: 0x224a90, Func Offset: 0xe0
	// Line 633, Address: 0x224a98, Func Offset: 0xe8
	// Line 634, Address: 0x224aa0, Func Offset: 0xf0
	// Line 633, Address: 0x224aa4, Func Offset: 0xf4
	// Line 634, Address: 0x224aa8, Func Offset: 0xf8
	// Line 635, Address: 0x224ab8, Func Offset: 0x108
	// Line 637, Address: 0x224ac8, Func Offset: 0x118
	// Line 638, Address: 0x224adc, Func Offset: 0x12c
	// Line 639, Address: 0x224ae8, Func Offset: 0x138
	// Line 641, Address: 0x224b10, Func Offset: 0x160
	// Line 642, Address: 0x224b28, Func Offset: 0x178
	// Line 643, Address: 0x224b30, Func Offset: 0x180
	// Line 644, Address: 0x224b38, Func Offset: 0x188
	// Line 645, Address: 0x224b58, Func Offset: 0x1a8
	// Line 646, Address: 0x224b60, Func Offset: 0x1b0
	// Line 647, Address: 0x224b68, Func Offset: 0x1b8
	// Line 648, Address: 0x224b70, Func Offset: 0x1c0
	// Line 655, Address: 0x224b78, Func Offset: 0x1c8
	// Line 657, Address: 0x224b80, Func Offset: 0x1d0
	// Line 658, Address: 0x224bb0, Func Offset: 0x200
	// Line 659, Address: 0x224bc4, Func Offset: 0x214
	// Line 660, Address: 0x224bd4, Func Offset: 0x224
	// Line 661, Address: 0x224bdc, Func Offset: 0x22c
	// Line 662, Address: 0x224be8, Func Offset: 0x238
	// Line 664, Address: 0x224bf4, Func Offset: 0x244
	// Line 665, Address: 0x224bf8, Func Offset: 0x248
	// Line 667, Address: 0x224c00, Func Offset: 0x250
	// Line 668, Address: 0x224c14, Func Offset: 0x264
	// Line 669, Address: 0x224c38, Func Offset: 0x288
	// Line 671, Address: 0x224c40, Func Offset: 0x290
	// Line 672, Address: 0x224c48, Func Offset: 0x298
	// Line 673, Address: 0x224c6c, Func Offset: 0x2bc
	// Line 675, Address: 0x224c74, Func Offset: 0x2c4
	// Line 676, Address: 0x224c78, Func Offset: 0x2c8
	// Func End, Address: 0x224c94, Func Offset: 0x2e4
}

// 
// Start address: 0x224ca0
void EnemyKillerControlCAttack(sfObj* obj)
{
	EnemyKillerWork* ew;
	sfObj* tobj;
	float* pos;
	float tpos[4];
	float rot[4];
	float dt;
	float d;
	float rt;
	sfCldPart* pcp;
	_anon3* psp;
	float wpos[4];
	float vec[4];
	float wrot[4];
	float wpos[4];
	float vec[4];
	float wrot[4];
	float vec[4];
	// Line 680, Address: 0x224ca0, Func Offset: 0
	// Line 687, Address: 0x224cc8, Func Offset: 0x28
	// Line 688, Address: 0x224cd4, Func Offset: 0x34
	// Line 689, Address: 0x224ce0, Func Offset: 0x40
	// Line 690, Address: 0x224cec, Func Offset: 0x4c
	// Line 691, Address: 0x224cf8, Func Offset: 0x58
	// Line 692, Address: 0x224d08, Func Offset: 0x68
	// Line 693, Address: 0x224d10, Func Offset: 0x70
	// Line 694, Address: 0x224d18, Func Offset: 0x78
	// Line 695, Address: 0x224d24, Func Offset: 0x84
	// Line 696, Address: 0x224d28, Func Offset: 0x88
	// Line 697, Address: 0x224d34, Func Offset: 0x94
	// Line 698, Address: 0x224d38, Func Offset: 0x98
	// Line 699, Address: 0x224d64, Func Offset: 0xc4
	// Line 700, Address: 0x224d68, Func Offset: 0xc8
	// Line 701, Address: 0x224d74, Func Offset: 0xd4
	// Line 702, Address: 0x224d80, Func Offset: 0xe0
	// Line 703, Address: 0x224d88, Func Offset: 0xe8
	// Line 704, Address: 0x224d90, Func Offset: 0xf0
	// Line 707, Address: 0x224d98, Func Offset: 0xf8
	// Line 708, Address: 0x224da8, Func Offset: 0x108
	// Line 709, Address: 0x224db0, Func Offset: 0x110
	// Line 710, Address: 0x224db8, Func Offset: 0x118
	// Line 711, Address: 0x224dc4, Func Offset: 0x124
	// Line 712, Address: 0x224dcc, Func Offset: 0x12c
	// Line 713, Address: 0x224dd0, Func Offset: 0x130
	// Line 714, Address: 0x224ddc, Func Offset: 0x13c
	// Line 715, Address: 0x224dec, Func Offset: 0x14c
	// Line 716, Address: 0x224df4, Func Offset: 0x154
	// Line 717, Address: 0x224dfc, Func Offset: 0x15c
	// Line 718, Address: 0x224e08, Func Offset: 0x168
	// Line 720, Address: 0x224e10, Func Offset: 0x170
	// Line 721, Address: 0x224e20, Func Offset: 0x180
	// Line 722, Address: 0x224e2c, Func Offset: 0x18c
	// Line 723, Address: 0x224e38, Func Offset: 0x198
	// Line 724, Address: 0x224e44, Func Offset: 0x1a4
	// Line 725, Address: 0x224e48, Func Offset: 0x1a8
	// Line 727, Address: 0x224e7c, Func Offset: 0x1dc
	// Line 728, Address: 0x224e84, Func Offset: 0x1e4
	// Line 729, Address: 0x224ec4, Func Offset: 0x224
	// Line 730, Address: 0x224ec8, Func Offset: 0x228
	// Line 731, Address: 0x224ee8, Func Offset: 0x248
	// Line 732, Address: 0x224ef0, Func Offset: 0x250
	// Line 733, Address: 0x224ef4, Func Offset: 0x254
	// Line 734, Address: 0x224f00, Func Offset: 0x260
	// Line 735, Address: 0x224f0c, Func Offset: 0x26c
	// Line 736, Address: 0x224f14, Func Offset: 0x274
	// Line 737, Address: 0x224f18, Func Offset: 0x278
	// Line 738, Address: 0x224f24, Func Offset: 0x284
	// Line 739, Address: 0x224f30, Func Offset: 0x290
	// Line 743, Address: 0x224f38, Func Offset: 0x298
	// Line 745, Address: 0x224f60, Func Offset: 0x2c0
	// Line 746, Address: 0x224f70, Func Offset: 0x2d0
	// Line 747, Address: 0x224f78, Func Offset: 0x2d8
	// Line 748, Address: 0x224f80, Func Offset: 0x2e0
	// Line 749, Address: 0x224f8c, Func Offset: 0x2ec
	// Line 750, Address: 0x224f94, Func Offset: 0x2f4
	// Line 751, Address: 0x224f98, Func Offset: 0x2f8
	// Line 752, Address: 0x224fa4, Func Offset: 0x304
	// Line 754, Address: 0x224fac, Func Offset: 0x30c
	// Line 755, Address: 0x224fb8, Func Offset: 0x318
	// Line 756, Address: 0x224fc4, Func Offset: 0x324
	// Line 757, Address: 0x224fcc, Func Offset: 0x32c
	// Line 758, Address: 0x224fd4, Func Offset: 0x334
	// Line 759, Address: 0x224fd8, Func Offset: 0x338
	// Line 760, Address: 0x224fe4, Func Offset: 0x344
	// Line 761, Address: 0x224fec, Func Offset: 0x34c
	// Line 762, Address: 0x224ff8, Func Offset: 0x358
	// Line 763, Address: 0x225004, Func Offset: 0x364
	// Line 764, Address: 0x22500c, Func Offset: 0x36c
	// Line 765, Address: 0x225010, Func Offset: 0x370
	// Line 767, Address: 0x225060, Func Offset: 0x3c0
	// Line 768, Address: 0x225068, Func Offset: 0x3c8
	// Line 769, Address: 0x225070, Func Offset: 0x3d0
	// Line 770, Address: 0x225074, Func Offset: 0x3d4
	// Line 769, Address: 0x225078, Func Offset: 0x3d8
	// Line 770, Address: 0x22507c, Func Offset: 0x3dc
	// Line 771, Address: 0x225084, Func Offset: 0x3e4
	// Line 772, Address: 0x225090, Func Offset: 0x3f0
	// Line 773, Address: 0x22509c, Func Offset: 0x3fc
	// Line 774, Address: 0x2250a8, Func Offset: 0x408
	// Line 775, Address: 0x2250ac, Func Offset: 0x40c
	// Line 774, Address: 0x2250b0, Func Offset: 0x410
	// Line 775, Address: 0x2250b4, Func Offset: 0x414
	// Line 776, Address: 0x2250bc, Func Offset: 0x41c
	// Line 777, Address: 0x2250c0, Func Offset: 0x420
	// Line 785, Address: 0x2250cc, Func Offset: 0x42c
	// Line 786, Address: 0x2250d4, Func Offset: 0x434
	// Line 787, Address: 0x2250d8, Func Offset: 0x438
	// Line 788, Address: 0x2250e0, Func Offset: 0x440
	// Line 787, Address: 0x2250e4, Func Offset: 0x444
	// Line 788, Address: 0x2250e8, Func Offset: 0x448
	// Line 790, Address: 0x225124, Func Offset: 0x484
	// Line 792, Address: 0x225164, Func Offset: 0x4c4
	// Line 796, Address: 0x225168, Func Offset: 0x4c8
	// Line 797, Address: 0x225178, Func Offset: 0x4d8
	// Line 799, Address: 0x225190, Func Offset: 0x4f0
	// Line 800, Address: 0x2251a8, Func Offset: 0x508
	// Line 801, Address: 0x2251ac, Func Offset: 0x50c
	// Line 802, Address: 0x2251b4, Func Offset: 0x514
	// Line 806, Address: 0x2251b8, Func Offset: 0x518
	// Line 807, Address: 0x2251c4, Func Offset: 0x524
	// Line 808, Address: 0x2251d8, Func Offset: 0x538
	// Line 809, Address: 0x2251e0, Func Offset: 0x540
	// Line 812, Address: 0x2251e4, Func Offset: 0x544
	// Line 813, Address: 0x2251e8, Func Offset: 0x548
	// Line 814, Address: 0x225200, Func Offset: 0x560
	// Line 815, Address: 0x225208, Func Offset: 0x568
	// Line 818, Address: 0x225244, Func Offset: 0x5a4
	// Line 819, Address: 0x225264, Func Offset: 0x5c4
	// Line 820, Address: 0x22526c, Func Offset: 0x5cc
	// Line 821, Address: 0x225270, Func Offset: 0x5d0
	// Line 822, Address: 0x225278, Func Offset: 0x5d8
	// Line 823, Address: 0x225284, Func Offset: 0x5e4
	// Line 824, Address: 0x22528c, Func Offset: 0x5ec
	// Line 825, Address: 0x225290, Func Offset: 0x5f0
	// Line 826, Address: 0x22529c, Func Offset: 0x5fc
	// Line 827, Address: 0x2252a8, Func Offset: 0x608
	// Line 828, Address: 0x2252b4, Func Offset: 0x614
	// Line 829, Address: 0x2252bc, Func Offset: 0x61c
	// Line 832, Address: 0x2252c8, Func Offset: 0x628
	// Line 834, Address: 0x2252d0, Func Offset: 0x630
	// Line 835, Address: 0x2252dc, Func Offset: 0x63c
	// Line 836, Address: 0x2252f0, Func Offset: 0x650
	// Line 837, Address: 0x225300, Func Offset: 0x660
	// Line 839, Address: 0x225308, Func Offset: 0x668
	// Line 843, Address: 0x225328, Func Offset: 0x688
	// Line 845, Address: 0x225340, Func Offset: 0x6a0
	// Line 846, Address: 0x225348, Func Offset: 0x6a8
	// Line 853, Address: 0x225388, Func Offset: 0x6e8
	// Line 855, Address: 0x22539c, Func Offset: 0x6fc
	// Line 856, Address: 0x2253a8, Func Offset: 0x708
	// Line 857, Address: 0x2253d0, Func Offset: 0x730
	// Line 858, Address: 0x2253f0, Func Offset: 0x750
	// Line 860, Address: 0x225408, Func Offset: 0x768
	// Line 861, Address: 0x22541c, Func Offset: 0x77c
	// Line 862, Address: 0x225424, Func Offset: 0x784
	// Line 865, Address: 0x22542c, Func Offset: 0x78c
	// Line 866, Address: 0x225430, Func Offset: 0x790
	// Line 870, Address: 0x225488, Func Offset: 0x7e8
	// Line 871, Address: 0x225494, Func Offset: 0x7f4
	// Line 872, Address: 0x2254a0, Func Offset: 0x800
	// Line 873, Address: 0x2254a8, Func Offset: 0x808
	// Line 875, Address: 0x2254b4, Func Offset: 0x814
	// Line 876, Address: 0x2254bc, Func Offset: 0x81c
	// Line 877, Address: 0x2254c0, Func Offset: 0x820
	// Line 878, Address: 0x2254cc, Func Offset: 0x82c
	// Line 879, Address: 0x2254e0, Func Offset: 0x840
	// Line 880, Address: 0x2254f0, Func Offset: 0x850
	// Line 881, Address: 0x2254f8, Func Offset: 0x858
	// Line 882, Address: 0x225504, Func Offset: 0x864
	// Line 883, Address: 0x225508, Func Offset: 0x868
	// Line 887, Address: 0x225528, Func Offset: 0x888
	// Line 889, Address: 0x225540, Func Offset: 0x8a0
	// Line 890, Address: 0x225548, Func Offset: 0x8a8
	// Line 897, Address: 0x225588, Func Offset: 0x8e8
	// Line 899, Address: 0x22559c, Func Offset: 0x8fc
	// Line 900, Address: 0x2255a8, Func Offset: 0x908
	// Line 901, Address: 0x2255d4, Func Offset: 0x934
	// Line 902, Address: 0x2255f4, Func Offset: 0x954
	// Line 904, Address: 0x22560c, Func Offset: 0x96c
	// Line 905, Address: 0x225620, Func Offset: 0x980
	// Line 906, Address: 0x225628, Func Offset: 0x988
	// Line 910, Address: 0x225630, Func Offset: 0x990
	// Line 914, Address: 0x225688, Func Offset: 0x9e8
	// Line 915, Address: 0x225694, Func Offset: 0x9f4
	// Line 916, Address: 0x2256a0, Func Offset: 0xa00
	// Line 917, Address: 0x2256a8, Func Offset: 0xa08
	// Line 918, Address: 0x2256b4, Func Offset: 0xa14
	// Line 920, Address: 0x2256c0, Func Offset: 0xa20
	// Line 922, Address: 0x2256c8, Func Offset: 0xa28
	// Line 923, Address: 0x2256d0, Func Offset: 0xa30
	// Line 922, Address: 0x2256d4, Func Offset: 0xa34
	// Line 923, Address: 0x2256d8, Func Offset: 0xa38
	// Line 924, Address: 0x2256ec, Func Offset: 0xa4c
	// Line 926, Address: 0x225718, Func Offset: 0xa78
	// Line 927, Address: 0x225720, Func Offset: 0xa80
	// Line 928, Address: 0x225728, Func Offset: 0xa88
	// Line 929, Address: 0x225734, Func Offset: 0xa94
	// Line 930, Address: 0x22573c, Func Offset: 0xa9c
	// Line 933, Address: 0x225748, Func Offset: 0xaa8
	// Line 935, Address: 0x225750, Func Offset: 0xab0
	// Line 936, Address: 0x22575c, Func Offset: 0xabc
	// Line 937, Address: 0x22576c, Func Offset: 0xacc
	// Line 938, Address: 0x225778, Func Offset: 0xad8
	// Line 939, Address: 0x225780, Func Offset: 0xae0
	// Line 940, Address: 0x225788, Func Offset: 0xae8
	// Line 941, Address: 0x225794, Func Offset: 0xaf4
	// Line 942, Address: 0x225798, Func Offset: 0xaf8
	// Line 943, Address: 0x2257a8, Func Offset: 0xb08
	// Line 944, Address: 0x2257ac, Func Offset: 0xb0c
	// Line 943, Address: 0x2257b0, Func Offset: 0xb10
	// Line 944, Address: 0x2257b4, Func Offset: 0xb14
	// Line 946, Address: 0x2257bc, Func Offset: 0xb1c
	// Line 947, Address: 0x2257c4, Func Offset: 0xb24
	// Line 948, Address: 0x2257c8, Func Offset: 0xb28
	// Line 949, Address: 0x2257d0, Func Offset: 0xb30
	// Line 948, Address: 0x2257d4, Func Offset: 0xb34
	// Line 949, Address: 0x2257d8, Func Offset: 0xb38
	// Line 950, Address: 0x225808, Func Offset: 0xb68
	// Line 951, Address: 0x225814, Func Offset: 0xb74
	// Line 952, Address: 0x225818, Func Offset: 0xb78
	// Line 954, Address: 0x225828, Func Offset: 0xb88
	// Line 955, Address: 0x225844, Func Offset: 0xba4
	// Line 956, Address: 0x225848, Func Offset: 0xba8
	// Line 957, Address: 0x225860, Func Offset: 0xbc0
	// Line 958, Address: 0x225890, Func Offset: 0xbf0
	// Line 959, Address: 0x225898, Func Offset: 0xbf8
	// Line 960, Address: 0x2258a4, Func Offset: 0xc04
	// Line 961, Address: 0x2258ac, Func Offset: 0xc0c
	// Line 962, Address: 0x2258b8, Func Offset: 0xc18
	// Line 963, Address: 0x2258c4, Func Offset: 0xc24
	// Line 964, Address: 0x2258c8, Func Offset: 0xc28
	// Line 965, Address: 0x2258d4, Func Offset: 0xc34
	// Line 966, Address: 0x2258dc, Func Offset: 0xc3c
	// Line 967, Address: 0x2258e0, Func Offset: 0xc40
	// Line 969, Address: 0x225914, Func Offset: 0xc74
	// Line 970, Address: 0x225920, Func Offset: 0xc80
	// Line 971, Address: 0x225928, Func Offset: 0xc88
	// Line 972, Address: 0x225930, Func Offset: 0xc90
	// Line 973, Address: 0x22593c, Func Offset: 0xc9c
	// Line 974, Address: 0x225940, Func Offset: 0xca0
	// Line 975, Address: 0x225950, Func Offset: 0xcb0
	// Line 976, Address: 0x225958, Func Offset: 0xcb8
	// Line 977, Address: 0x225960, Func Offset: 0xcc0
	// Line 978, Address: 0x225968, Func Offset: 0xcc8
	// Line 979, Address: 0x225974, Func Offset: 0xcd4
	// Line 980, Address: 0x22597c, Func Offset: 0xcdc
	// Line 981, Address: 0x225988, Func Offset: 0xce8
	// Line 982, Address: 0x225994, Func Offset: 0xcf4
	// Line 983, Address: 0x225998, Func Offset: 0xcf8
	// Line 986, Address: 0x2259a4, Func Offset: 0xd04
	// Line 988, Address: 0x2259ac, Func Offset: 0xd0c
	// Line 989, Address: 0x2259b0, Func Offset: 0xd10
	// Line 990, Address: 0x2259b8, Func Offset: 0xd18
	// Line 989, Address: 0x2259c0, Func Offset: 0xd20
	// Line 990, Address: 0x2259c4, Func Offset: 0xd24
	// Line 991, Address: 0x2259d8, Func Offset: 0xd38
	// Line 992, Address: 0x2259e0, Func Offset: 0xd40
	// Line 993, Address: 0x2259f4, Func Offset: 0xd54
	// Line 994, Address: 0x2259fc, Func Offset: 0xd5c
	// Line 995, Address: 0x225a08, Func Offset: 0xd68
	// Line 996, Address: 0x225a14, Func Offset: 0xd74
	// Line 997, Address: 0x225a1c, Func Offset: 0xd7c
	// Line 1002, Address: 0x225a28, Func Offset: 0xd88
	// Line 1003, Address: 0x225a3c, Func Offset: 0xd9c
	// Line 1004, Address: 0x225a48, Func Offset: 0xda8
	// Func End, Address: 0x225a74, Func Offset: 0xdd4
}

// 
// Start address: 0x225a80
void EnemyKillerControlApproach(sfObj* obj)
{
	EnemyKillerWork* ew;
	float* pos;
	float tpos[4];
	float rot[4];
	float dt;
	float d;
	// Line 1008, Address: 0x225a80, Func Offset: 0
	// Line 1014, Address: 0x225a98, Func Offset: 0x18
	// Line 1015, Address: 0x225aa4, Func Offset: 0x24
	// Line 1016, Address: 0x225ab0, Func Offset: 0x30
	// Line 1017, Address: 0x225abc, Func Offset: 0x3c
	// Line 1018, Address: 0x225ac8, Func Offset: 0x48
	// Line 1019, Address: 0x225aec, Func Offset: 0x6c
	// Line 1020, Address: 0x225af0, Func Offset: 0x70
	// Line 1021, Address: 0x225af8, Func Offset: 0x78
	// Line 1022, Address: 0x225b04, Func Offset: 0x84
	// Line 1023, Address: 0x225b0c, Func Offset: 0x8c
	// Line 1025, Address: 0x225b14, Func Offset: 0x94
	// Line 1026, Address: 0x225b18, Func Offset: 0x98
	// Line 1028, Address: 0x225b28, Func Offset: 0xa8
	// Line 1029, Address: 0x225b3c, Func Offset: 0xbc
	// Line 1030, Address: 0x225b44, Func Offset: 0xc4
	// Line 1031, Address: 0x225b4c, Func Offset: 0xcc
	// Line 1032, Address: 0x225b50, Func Offset: 0xd0
	// Line 1033, Address: 0x225b58, Func Offset: 0xd8
	// Line 1032, Address: 0x225b5c, Func Offset: 0xdc
	// Line 1033, Address: 0x225b60, Func Offset: 0xe0
	// Line 1034, Address: 0x225b70, Func Offset: 0xf0
	// Line 1036, Address: 0x225b80, Func Offset: 0x100
	// Line 1037, Address: 0x225b94, Func Offset: 0x114
	// Line 1038, Address: 0x225ba0, Func Offset: 0x120
	// Line 1040, Address: 0x225bd0, Func Offset: 0x150
	// Line 1041, Address: 0x225be0, Func Offset: 0x160
	// Line 1042, Address: 0x225be8, Func Offset: 0x168
	// Line 1043, Address: 0x225bf0, Func Offset: 0x170
	// Line 1045, Address: 0x225bfc, Func Offset: 0x17c
	// Line 1046, Address: 0x225c18, Func Offset: 0x198
	// Line 1047, Address: 0x225c28, Func Offset: 0x1a8
	// Line 1048, Address: 0x225c30, Func Offset: 0x1b0
	// Line 1049, Address: 0x225c38, Func Offset: 0x1b8
	// Line 1057, Address: 0x225c44, Func Offset: 0x1c4
	// Line 1058, Address: 0x225c48, Func Offset: 0x1c8
	// Func End, Address: 0x225c64, Func Offset: 0x1e4
}

// 
// Start address: 0x225c70
void EnemyKillerControlReady(sfObj* obj)
{
	EnemyKillerWork* ew;
	float* pos;
	float* ppos;
	float rot[4];
	float vec[4];
	float dt;
	float d;
	int f;
	int ca;
	// Line 1062, Address: 0x225c70, Func Offset: 0
	// Line 1069, Address: 0x225c94, Func Offset: 0x24
	// Line 1070, Address: 0x225ca0, Func Offset: 0x30
	// Line 1071, Address: 0x225cac, Func Offset: 0x3c
	// Line 1072, Address: 0x225cb8, Func Offset: 0x48
	// Line 1073, Address: 0x225cc4, Func Offset: 0x54
	// Line 1074, Address: 0x225cd0, Func Offset: 0x60
	// Line 1076, Address: 0x225d08, Func Offset: 0x98
	// Line 1077, Address: 0x225d18, Func Offset: 0xa8
	// Line 1078, Address: 0x225d20, Func Offset: 0xb0
	// Line 1080, Address: 0x225d28, Func Offset: 0xb8
	// Line 1081, Address: 0x225d40, Func Offset: 0xd0
	// Line 1082, Address: 0x225d44, Func Offset: 0xd4
	// Line 1083, Address: 0x225d54, Func Offset: 0xe4
	// Line 1084, Address: 0x225d88, Func Offset: 0x118
	// Line 1085, Address: 0x225d94, Func Offset: 0x124
	// Line 1086, Address: 0x225d9c, Func Offset: 0x12c
	// Line 1087, Address: 0x225da0, Func Offset: 0x130
	// Line 1089, Address: 0x225dc8, Func Offset: 0x158
	// Line 1090, Address: 0x225dd8, Func Offset: 0x168
	// Line 1091, Address: 0x225de0, Func Offset: 0x170
	// Line 1093, Address: 0x225de8, Func Offset: 0x178
	// Line 1094, Address: 0x225df4, Func Offset: 0x184
	// Line 1096, Address: 0x225dfc, Func Offset: 0x18c
	// Line 1097, Address: 0x225e08, Func Offset: 0x198
	// Line 1098, Address: 0x225e14, Func Offset: 0x1a4
	// Line 1099, Address: 0x225e1c, Func Offset: 0x1ac
	// Line 1100, Address: 0x225e24, Func Offset: 0x1b4
	// Line 1101, Address: 0x225e28, Func Offset: 0x1b8
	// Line 1102, Address: 0x225e34, Func Offset: 0x1c4
	// Line 1103, Address: 0x225e3c, Func Offset: 0x1cc
	// Line 1104, Address: 0x225e44, Func Offset: 0x1d4
	// Line 1105, Address: 0x225e4c, Func Offset: 0x1dc
	// Line 1106, Address: 0x225e50, Func Offset: 0x1e0
	// Line 1108, Address: 0x225e70, Func Offset: 0x200
	// Line 1109, Address: 0x225e7c, Func Offset: 0x20c
	// Line 1110, Address: 0x225e8c, Func Offset: 0x21c
	// Line 1111, Address: 0x225e98, Func Offset: 0x228
	// Line 1112, Address: 0x225ea0, Func Offset: 0x230
	// Line 1113, Address: 0x225ea8, Func Offset: 0x238
	// Line 1114, Address: 0x225eb4, Func Offset: 0x244
	// Line 1115, Address: 0x225eb8, Func Offset: 0x248
	// Line 1116, Address: 0x225edc, Func Offset: 0x26c
	// Line 1117, Address: 0x225ee4, Func Offset: 0x274
	// Line 1118, Address: 0x225ee8, Func Offset: 0x278
	// Line 1121, Address: 0x225ef0, Func Offset: 0x280
	// Line 1119, Address: 0x225ef4, Func Offset: 0x284
	// Line 1121, Address: 0x225ef8, Func Offset: 0x288
	// Line 1123, Address: 0x225f00, Func Offset: 0x290
	// Line 1125, Address: 0x225f08, Func Offset: 0x298
	// Line 1127, Address: 0x225f14, Func Offset: 0x2a4
	// Line 1126, Address: 0x225f2c, Func Offset: 0x2bc
	// Line 1127, Address: 0x225f30, Func Offset: 0x2c0
	// Line 1129, Address: 0x225f38, Func Offset: 0x2c8
	// Line 1130, Address: 0x225f44, Func Offset: 0x2d4
	// Line 1131, Address: 0x225f5c, Func Offset: 0x2ec
	// Line 1133, Address: 0x225f90, Func Offset: 0x320
	// Line 1135, Address: 0x225f94, Func Offset: 0x324
	// Line 1136, Address: 0x225f98, Func Offset: 0x328
	// Line 1137, Address: 0x225fb0, Func Offset: 0x340
	// Line 1138, Address: 0x225fb4, Func Offset: 0x344
	// Line 1139, Address: 0x225fb8, Func Offset: 0x348
	// Line 1140, Address: 0x225fc4, Func Offset: 0x354
	// Line 1141, Address: 0x225fd4, Func Offset: 0x364
	// Line 1142, Address: 0x225ff8, Func Offset: 0x388
	// Line 1144, Address: 0x225ffc, Func Offset: 0x38c
	// Line 1146, Address: 0x226000, Func Offset: 0x390
	// Line 1147, Address: 0x226008, Func Offset: 0x398
	// Line 1148, Address: 0x226014, Func Offset: 0x3a4
	// Line 1149, Address: 0x226020, Func Offset: 0x3b0
	// Line 1151, Address: 0x226028, Func Offset: 0x3b8
	// Line 1152, Address: 0x226040, Func Offset: 0x3d0
	// Line 1153, Address: 0x226044, Func Offset: 0x3d4
	// Line 1154, Address: 0x226054, Func Offset: 0x3e4
	// Line 1157, Address: 0x2260a8, Func Offset: 0x438
	// Line 1158, Address: 0x2260b0, Func Offset: 0x440
	// Line 1159, Address: 0x2260bc, Func Offset: 0x44c
	// Line 1160, Address: 0x2260c4, Func Offset: 0x454
	// Line 1161, Address: 0x2260d0, Func Offset: 0x460
	// Line 1162, Address: 0x2260dc, Func Offset: 0x46c
	// Line 1163, Address: 0x2260e0, Func Offset: 0x470
	// Line 1165, Address: 0x2260e8, Func Offset: 0x478
	// Line 1167, Address: 0x2260f0, Func Offset: 0x480
	// Line 1169, Address: 0x226110, Func Offset: 0x4a0
	// Line 1170, Address: 0x22611c, Func Offset: 0x4ac
	// Line 1171, Address: 0x226138, Func Offset: 0x4c8
	// Line 1172, Address: 0x226148, Func Offset: 0x4d8
	// Line 1173, Address: 0x226150, Func Offset: 0x4e0
	// Line 1174, Address: 0x226158, Func Offset: 0x4e8
	// Line 1178, Address: 0x226164, Func Offset: 0x4f4
	// Line 1179, Address: 0x226168, Func Offset: 0x4f8
	// Func End, Address: 0x226190, Func Offset: 0x520
}

// 
// Start address: 0x226190
void EnemyKillerControlShoot(sfObj* obj)
{
	EnemyKillerWork* ew;
	float* pos;
	float* ppos;
	float vec[4];
	float dt;
	float d;
	int n;
	// Line 1183, Address: 0x226190, Func Offset: 0
	// Line 1189, Address: 0x2261ac, Func Offset: 0x1c
	// Line 1190, Address: 0x2261b8, Func Offset: 0x28
	// Line 1191, Address: 0x2261c4, Func Offset: 0x34
	// Line 1192, Address: 0x2261cc, Func Offset: 0x3c
	// Line 1193, Address: 0x2261d8, Func Offset: 0x48
	// Line 1194, Address: 0x226204, Func Offset: 0x74
	// Line 1195, Address: 0x226208, Func Offset: 0x78
	// Line 1196, Address: 0x226214, Func Offset: 0x84
	// Line 1197, Address: 0x22621c, Func Offset: 0x8c
	// Line 1198, Address: 0x226228, Func Offset: 0x98
	// Line 1199, Address: 0x226234, Func Offset: 0xa4
	// Line 1200, Address: 0x226238, Func Offset: 0xa8
	// Line 1201, Address: 0x226248, Func Offset: 0xb8
	// Line 1202, Address: 0x22624c, Func Offset: 0xbc
	// Line 1201, Address: 0x226250, Func Offset: 0xc0
	// Line 1202, Address: 0x226254, Func Offset: 0xc4
	// Line 1203, Address: 0x22625c, Func Offset: 0xcc
	// Line 1205, Address: 0x226264, Func Offset: 0xd4
	// Line 1206, Address: 0x226268, Func Offset: 0xd8
	// Line 1207, Address: 0x226298, Func Offset: 0x108
	// Line 1208, Address: 0x2262a4, Func Offset: 0x114
	// Line 1210, Address: 0x2262b0, Func Offset: 0x120
	// Line 1211, Address: 0x2262c0, Func Offset: 0x130
	// Line 1212, Address: 0x2262d8, Func Offset: 0x148
	// Line 1213, Address: 0x2262dc, Func Offset: 0x14c
	// Line 1214, Address: 0x2262f4, Func Offset: 0x164
	// Line 1215, Address: 0x226310, Func Offset: 0x180
	// Line 1216, Address: 0x226318, Func Offset: 0x188
	// Line 1217, Address: 0x226324, Func Offset: 0x194
	// Line 1218, Address: 0x22632c, Func Offset: 0x19c
	// Line 1219, Address: 0x226338, Func Offset: 0x1a8
	// Line 1220, Address: 0x226344, Func Offset: 0x1b4
	// Line 1221, Address: 0x226348, Func Offset: 0x1b8
	// Line 1222, Address: 0x226354, Func Offset: 0x1c4
	// Line 1223, Address: 0x22635c, Func Offset: 0x1cc
	// Line 1224, Address: 0x226360, Func Offset: 0x1d0
	// Line 1225, Address: 0x226378, Func Offset: 0x1e8
	// Line 1226, Address: 0x226380, Func Offset: 0x1f0
	// Line 1227, Address: 0x22638c, Func Offset: 0x1fc
	// Line 1228, Address: 0x226394, Func Offset: 0x204
	// Line 1229, Address: 0x2263a0, Func Offset: 0x210
	// Line 1230, Address: 0x2263ac, Func Offset: 0x21c
	// Line 1231, Address: 0x2263b0, Func Offset: 0x220
	// Line 1232, Address: 0x2263bc, Func Offset: 0x22c
	// Line 1233, Address: 0x2263c4, Func Offset: 0x234
	// Line 1234, Address: 0x2263c8, Func Offset: 0x238
	// Line 1236, Address: 0x2263d8, Func Offset: 0x248
	// Line 1237, Address: 0x2263e0, Func Offset: 0x250
	// Line 1238, Address: 0x2263fc, Func Offset: 0x26c
	// Line 1239, Address: 0x226400, Func Offset: 0x270
	// Line 1242, Address: 0x226444, Func Offset: 0x2b4
	// Line 1244, Address: 0x226448, Func Offset: 0x2b8
	// Line 1245, Address: 0x226460, Func Offset: 0x2d0
	// Line 1246, Address: 0x226468, Func Offset: 0x2d8
	// Line 1247, Address: 0x226470, Func Offset: 0x2e0
	// Line 1248, Address: 0x226478, Func Offset: 0x2e8
	// Line 1249, Address: 0x226484, Func Offset: 0x2f4
	// Line 1250, Address: 0x22648c, Func Offset: 0x2fc
	// Line 1251, Address: 0x226498, Func Offset: 0x308
	// Line 1252, Address: 0x2264a4, Func Offset: 0x314
	// Line 1253, Address: 0x2264a8, Func Offset: 0x318
	// Line 1256, Address: 0x2264b4, Func Offset: 0x324
	// Line 1259, Address: 0x2264bc, Func Offset: 0x32c
	// Line 1260, Address: 0x2264c0, Func Offset: 0x330
	// Line 1262, Address: 0x2264e0, Func Offset: 0x350
	// Line 1263, Address: 0x2264fc, Func Offset: 0x36c
	// Line 1264, Address: 0x226504, Func Offset: 0x374
	// Line 1265, Address: 0x226514, Func Offset: 0x384
	// Line 1266, Address: 0x22651c, Func Offset: 0x38c
	// Line 1268, Address: 0x226558, Func Offset: 0x3c8
	// Line 1269, Address: 0x226564, Func Offset: 0x3d4
	// Line 1270, Address: 0x22656c, Func Offset: 0x3dc
	// Line 1271, Address: 0x226570, Func Offset: 0x3e0
	// Line 1272, Address: 0x22657c, Func Offset: 0x3ec
	// Line 1273, Address: 0x226584, Func Offset: 0x3f4
	// Line 1274, Address: 0x226588, Func Offset: 0x3f8
	// Line 1279, Address: 0x226594, Func Offset: 0x404
	// Line 1280, Address: 0x226598, Func Offset: 0x408
	// Func End, Address: 0x2265b8, Func Offset: 0x428
}

// 
// Start address: 0x2265c0
void EnemyKillerControlRapidFire(sfObj* obj)
{
	EnemyKillerWork* ew;
	float* pos;
	float* ppos;
	float vec[4];
	float dt;
	float d;
	// Line 1284, Address: 0x2265c0, Func Offset: 0
	// Line 1289, Address: 0x2265e0, Func Offset: 0x20
	// Line 1290, Address: 0x2265ec, Func Offset: 0x2c
	// Line 1291, Address: 0x2265f8, Func Offset: 0x38
	// Line 1292, Address: 0x226600, Func Offset: 0x40
	// Line 1293, Address: 0x22660c, Func Offset: 0x4c
	// Line 1295, Address: 0x226638, Func Offset: 0x78
	// Line 1297, Address: 0x226660, Func Offset: 0xa0
	// Line 1298, Address: 0x22666c, Func Offset: 0xac
	// Line 1299, Address: 0x226674, Func Offset: 0xb4
	// Line 1300, Address: 0x226678, Func Offset: 0xb8
	// Line 1301, Address: 0x226684, Func Offset: 0xc4
	// Line 1302, Address: 0x226690, Func Offset: 0xd0
	// Line 1303, Address: 0x226698, Func Offset: 0xd8
	// Line 1304, Address: 0x2266a0, Func Offset: 0xe0
	// Line 1305, Address: 0x2266a8, Func Offset: 0xe8
	// Line 1306, Address: 0x2266b0, Func Offset: 0xf0
	// Line 1308, Address: 0x2266b8, Func Offset: 0xf8
	// Line 1310, Address: 0x2266d8, Func Offset: 0x118
	// Line 1311, Address: 0x2266e8, Func Offset: 0x128
	// Line 1312, Address: 0x2266f0, Func Offset: 0x130
	// Line 1315, Address: 0x2266f4, Func Offset: 0x134
	// Line 1312, Address: 0x2266f8, Func Offset: 0x138
	// Line 1313, Address: 0x2266fc, Func Offset: 0x13c
	// Line 1315, Address: 0x226700, Func Offset: 0x140
	// Line 1317, Address: 0x226708, Func Offset: 0x148
	// Line 1319, Address: 0x226710, Func Offset: 0x150
	// Line 1321, Address: 0x226730, Func Offset: 0x170
	// Line 1322, Address: 0x226748, Func Offset: 0x188
	// Line 1325, Address: 0x226788, Func Offset: 0x1c8
	// Line 1326, Address: 0x226790, Func Offset: 0x1d0
	// Line 1329, Address: 0x226798, Func Offset: 0x1d8
	// Line 1330, Address: 0x2267a8, Func Offset: 0x1e8
	// Line 1331, Address: 0x2267b8, Func Offset: 0x1f8
	// Line 1333, Address: 0x2267e8, Func Offset: 0x228
	// Line 1334, Address: 0x2267f0, Func Offset: 0x230
	// Line 1335, Address: 0x2267f8, Func Offset: 0x238
	// Line 1339, Address: 0x226800, Func Offset: 0x240
	// Line 1338, Address: 0x226804, Func Offset: 0x244
	// Line 1339, Address: 0x226808, Func Offset: 0x248
	// Line 1340, Address: 0x22681c, Func Offset: 0x25c
	// Line 1341, Address: 0x226820, Func Offset: 0x260
	// Line 1342, Address: 0x22683c, Func Offset: 0x27c
	// Line 1344, Address: 0x226888, Func Offset: 0x2c8
	// Line 1345, Address: 0x226890, Func Offset: 0x2d0
	// Line 1346, Address: 0x22689c, Func Offset: 0x2dc
	// Line 1348, Address: 0x2268a8, Func Offset: 0x2e8
	// Line 1350, Address: 0x2268b0, Func Offset: 0x2f0
	// Line 1351, Address: 0x2268bc, Func Offset: 0x2fc
	// Line 1352, Address: 0x2268cc, Func Offset: 0x30c
	// Line 1353, Address: 0x2268d0, Func Offset: 0x310
	// Line 1352, Address: 0x2268d4, Func Offset: 0x314
	// Line 1353, Address: 0x2268d8, Func Offset: 0x318
	// Line 1354, Address: 0x2268e0, Func Offset: 0x320
	// Line 1356, Address: 0x2268e8, Func Offset: 0x328
	// Line 1357, Address: 0x226918, Func Offset: 0x358
	// Line 1358, Address: 0x226924, Func Offset: 0x364
	// Line 1361, Address: 0x22692c, Func Offset: 0x36c
	// Line 1362, Address: 0x226930, Func Offset: 0x370
	// Line 1363, Address: 0x226944, Func Offset: 0x384
	// Line 1364, Address: 0x226950, Func Offset: 0x390
	// Line 1365, Address: 0x226954, Func Offset: 0x394
	// Line 1364, Address: 0x226958, Func Offset: 0x398
	// Line 1365, Address: 0x22695c, Func Offset: 0x39c
	// Line 1367, Address: 0x226968, Func Offset: 0x3a8
	// Line 1369, Address: 0x226970, Func Offset: 0x3b0
	// Line 1370, Address: 0x2269a0, Func Offset: 0x3e0
	// Line 1371, Address: 0x2269ac, Func Offset: 0x3ec
	// Line 1374, Address: 0x2269b4, Func Offset: 0x3f4
	// Line 1375, Address: 0x2269b8, Func Offset: 0x3f8
	// Line 1376, Address: 0x2269c8, Func Offset: 0x408
	// Line 1378, Address: 0x2269e8, Func Offset: 0x428
	// Line 1379, Address: 0x226a00, Func Offset: 0x440
	// Line 1380, Address: 0x226a04, Func Offset: 0x444
	// Line 1381, Address: 0x226a1c, Func Offset: 0x45c
	// Line 1380, Address: 0x226a20, Func Offset: 0x460
	// Line 1381, Address: 0x226a24, Func Offset: 0x464
	// Line 1385, Address: 0x226a6c, Func Offset: 0x4ac
	// Line 1386, Address: 0x226a74, Func Offset: 0x4b4
	// Line 1388, Address: 0x226a7c, Func Offset: 0x4bc
	// Line 1389, Address: 0x226a80, Func Offset: 0x4c0
	// Line 1390, Address: 0x226a88, Func Offset: 0x4c8
	// Line 1391, Address: 0x226a94, Func Offset: 0x4d4
	// Line 1393, Address: 0x226aa0, Func Offset: 0x4e0
	// Line 1395, Address: 0x226aa8, Func Offset: 0x4e8
	// Line 1397, Address: 0x226ac8, Func Offset: 0x508
	// Line 1398, Address: 0x226ad8, Func Offset: 0x518
	// Line 1399, Address: 0x226ae8, Func Offset: 0x528
	// Line 1400, Address: 0x226af0, Func Offset: 0x530
	// Line 1402, Address: 0x226b20, Func Offset: 0x560
	// Line 1403, Address: 0x226b2c, Func Offset: 0x56c
	// Line 1404, Address: 0x226b50, Func Offset: 0x590
	// Line 1405, Address: 0x226b58, Func Offset: 0x598
	// Line 1406, Address: 0x226b60, Func Offset: 0x5a0
	// Line 1410, Address: 0x226b6c, Func Offset: 0x5ac
	// Line 1411, Address: 0x226b70, Func Offset: 0x5b0
	// Func End, Address: 0x226b94, Func Offset: 0x5d4
}

// 
// Start address: 0x226ba0
void set_escape_point(sfObj* obj)
{
	EnemyKillerWork* ew;
	float* ppos;
	float tpos[4];
	EnemyMeasureResult mres;
	int i;
	int p;
	// Line 1415, Address: 0x226ba0, Func Offset: 0
	// Line 1421, Address: 0x226bc0, Func Offset: 0x20
	// Line 1422, Address: 0x226bcc, Func Offset: 0x2c
	// Line 1423, Address: 0x226bd4, Func Offset: 0x34
	// Line 1424, Address: 0x226bec, Func Offset: 0x4c
	// Line 1425, Address: 0x226bf8, Func Offset: 0x58
	// Line 1426, Address: 0x226c08, Func Offset: 0x68
	// Line 1429, Address: 0x226c1c, Func Offset: 0x7c
	// Line 1430, Address: 0x226c28, Func Offset: 0x88
	// Line 1429, Address: 0x226c2c, Func Offset: 0x8c
	// Line 1430, Address: 0x226c30, Func Offset: 0x90
	// Line 1435, Address: 0x226c74, Func Offset: 0xd4
	// Line 1436, Address: 0x226c88, Func Offset: 0xe8
	// Line 1437, Address: 0x226c94, Func Offset: 0xf4
	// Func End, Address: 0x226cb8, Func Offset: 0x118
}

// 
// Start address: 0x226cc0
void EnemyKillerControlEscape(sfObj* obj)
{
	EnemyKillerWork* ew;
	float* pos;
	float* ppos;
	float tpos[4];
	float vec[4];
	float rot[4];
	float dt;
	float d;
	// Line 1441, Address: 0x226cc0, Func Offset: 0
	// Line 1447, Address: 0x226cdc, Func Offset: 0x1c
	// Line 1448, Address: 0x226ce8, Func Offset: 0x28
	// Line 1449, Address: 0x226cf4, Func Offset: 0x34
	// Line 1450, Address: 0x226d00, Func Offset: 0x40
	// Line 1451, Address: 0x226d0c, Func Offset: 0x4c
	// Line 1452, Address: 0x226d18, Func Offset: 0x58
	// Line 1454, Address: 0x226d58, Func Offset: 0x98
	// Line 1456, Address: 0x226d78, Func Offset: 0xb8
	// Line 1457, Address: 0x226d80, Func Offset: 0xc0
	// Line 1459, Address: 0x226d88, Func Offset: 0xc8
	// Line 1460, Address: 0x226d94, Func Offset: 0xd4
	// Line 1461, Address: 0x226da0, Func Offset: 0xe0
	// Line 1462, Address: 0x226da8, Func Offset: 0xe8
	// Line 1464, Address: 0x226dac, Func Offset: 0xec
	// Line 1467, Address: 0x226db8, Func Offset: 0xf8
	// Line 1468, Address: 0x226dc0, Func Offset: 0x100
	// Line 1469, Address: 0x226dc8, Func Offset: 0x108
	// Line 1473, Address: 0x226dd0, Func Offset: 0x110
	// Line 1472, Address: 0x226dd4, Func Offset: 0x114
	// Line 1473, Address: 0x226dd8, Func Offset: 0x118
	// Line 1472, Address: 0x226ddc, Func Offset: 0x11c
	// Line 1473, Address: 0x226de0, Func Offset: 0x120
	// Line 1476, Address: 0x226e10, Func Offset: 0x150
	// Line 1477, Address: 0x226e18, Func Offset: 0x158
	// Line 1479, Address: 0x226e20, Func Offset: 0x160
	// Line 1480, Address: 0x226e44, Func Offset: 0x184
	// Line 1482, Address: 0x226e64, Func Offset: 0x1a4
	// Line 1483, Address: 0x226e74, Func Offset: 0x1b4
	// Line 1484, Address: 0x226e7c, Func Offset: 0x1bc
	// Line 1485, Address: 0x226e88, Func Offset: 0x1c8
	// Line 1486, Address: 0x226e90, Func Offset: 0x1d0
	// Line 1489, Address: 0x226e98, Func Offset: 0x1d8
	// Line 1490, Address: 0x226ea0, Func Offset: 0x1e0
	// Line 1491, Address: 0x226ea4, Func Offset: 0x1e4
	// Line 1492, Address: 0x226ea8, Func Offset: 0x1e8
	// Line 1493, Address: 0x226eb0, Func Offset: 0x1f0
	// Line 1492, Address: 0x226eb4, Func Offset: 0x1f4
	// Line 1493, Address: 0x226eb8, Func Offset: 0x1f8
	// Line 1494, Address: 0x226ec8, Func Offset: 0x208
	// Line 1496, Address: 0x226ed8, Func Offset: 0x218
	// Line 1497, Address: 0x226eec, Func Offset: 0x22c
	// Line 1498, Address: 0x226ef8, Func Offset: 0x238
	// Line 1500, Address: 0x226f1c, Func Offset: 0x25c
	// Line 1502, Address: 0x226f50, Func Offset: 0x290
	// Line 1503, Address: 0x226f58, Func Offset: 0x298
	// Line 1504, Address: 0x226f74, Func Offset: 0x2b4
	// Line 1505, Address: 0x226f7c, Func Offset: 0x2bc
	// Line 1506, Address: 0x226f88, Func Offset: 0x2c8
	// Line 1507, Address: 0x226f94, Func Offset: 0x2d4
	// Line 1508, Address: 0x226f98, Func Offset: 0x2d8
	// Line 1509, Address: 0x226fa0, Func Offset: 0x2e0
	// Line 1510, Address: 0x226fc4, Func Offset: 0x304
	// Line 1511, Address: 0x226fcc, Func Offset: 0x30c
	// Line 1512, Address: 0x226fd4, Func Offset: 0x314
	// Line 1513, Address: 0x226fe0, Func Offset: 0x320
	// Line 1520, Address: 0x226fe8, Func Offset: 0x328
	// Line 1522, Address: 0x226ff0, Func Offset: 0x330
	// Line 1523, Address: 0x227020, Func Offset: 0x360
	// Line 1524, Address: 0x227034, Func Offset: 0x374
	// Line 1526, Address: 0x227040, Func Offset: 0x380
	// Line 1528, Address: 0x227048, Func Offset: 0x388
	// Line 1530, Address: 0x227068, Func Offset: 0x3a8
	// Line 1531, Address: 0x227074, Func Offset: 0x3b4
	// Line 1532, Address: 0x227098, Func Offset: 0x3d8
	// Line 1533, Address: 0x2270b0, Func Offset: 0x3f0
	// Line 1534, Address: 0x2270b4, Func Offset: 0x3f4
	// Line 1535, Address: 0x2270c8, Func Offset: 0x408
	// Line 1536, Address: 0x2270e0, Func Offset: 0x420
	// Line 1537, Address: 0x2270f0, Func Offset: 0x430
	// Line 1538, Address: 0x2270f8, Func Offset: 0x438
	// Line 1539, Address: 0x227100, Func Offset: 0x440
	// Line 1542, Address: 0x22710c, Func Offset: 0x44c
	// Line 1543, Address: 0x227110, Func Offset: 0x450
	// Line 1545, Address: 0x227118, Func Offset: 0x458
	// Line 1546, Address: 0x22712c, Func Offset: 0x46c
	// Line 1547, Address: 0x227150, Func Offset: 0x490
	// Line 1550, Address: 0x227158, Func Offset: 0x498
	// Func End, Address: 0x227178, Func Offset: 0x4b8
}

// 
// Start address: 0x227180
void EnemyKillerControlDash(sfObj* obj)
{
	EnemyKillerWork* ew;
	float* pos;
	float tpos[4];
	float rot[4];
	float dt;
	// Line 1554, Address: 0x227180, Func Offset: 0
	// Line 1560, Address: 0x227198, Func Offset: 0x18
	// Line 1561, Address: 0x2271a4, Func Offset: 0x24
	// Line 1562, Address: 0x2271b0, Func Offset: 0x30
	// Line 1563, Address: 0x2271bc, Func Offset: 0x3c
	// Line 1564, Address: 0x2271c8, Func Offset: 0x48
	// Line 1565, Address: 0x2271ec, Func Offset: 0x6c
	// Line 1566, Address: 0x2271f0, Func Offset: 0x70
	// Line 1567, Address: 0x227200, Func Offset: 0x80
	// Line 1568, Address: 0x227208, Func Offset: 0x88
	// Line 1570, Address: 0x227210, Func Offset: 0x90
	// Line 1571, Address: 0x227220, Func Offset: 0xa0
	// Line 1572, Address: 0x227228, Func Offset: 0xa8
	// Line 1574, Address: 0x227230, Func Offset: 0xb0
	// Line 1575, Address: 0x22723c, Func Offset: 0xbc
	// Line 1576, Address: 0x227248, Func Offset: 0xc8
	// Line 1577, Address: 0x227250, Func Offset: 0xd0
	// Line 1580, Address: 0x227258, Func Offset: 0xd8
	// Line 1582, Address: 0x227268, Func Offset: 0xe8
	// Line 1583, Address: 0x22727c, Func Offset: 0xfc
	// Line 1584, Address: 0x227284, Func Offset: 0x104
	// Line 1585, Address: 0x22728c, Func Offset: 0x10c
	// Line 1586, Address: 0x227290, Func Offset: 0x110
	// Line 1588, Address: 0x2272b0, Func Offset: 0x130
	// Line 1589, Address: 0x2272bc, Func Offset: 0x13c
	// Line 1592, Address: 0x227300, Func Offset: 0x180
	// Line 1600, Address: 0x227308, Func Offset: 0x188
	// Line 1601, Address: 0x22731c, Func Offset: 0x19c
	// Line 1602, Address: 0x227340, Func Offset: 0x1c0
	// Line 1605, Address: 0x227348, Func Offset: 0x1c8
	// Func End, Address: 0x227364, Func Offset: 0x1e4
}

// 
// Start address: 0x227370
void EnemyKillerControlAttack(sfObj* obj)
{
	EnemyKillerWork* ew;
	float dt;
	int fr;
	int sf;
	int ef;
	sfCldPart* pcp;
	_anon3* psp;
	float vec[4];
	float d;
	float wpos[4];
	float vec[4];
	float wrot[4];
	float wpos[4];
	float vec[4];
	float wrot[4];
	// Line 1609, Address: 0x227370, Func Offset: 0
	// Line 1613, Address: 0x227390, Func Offset: 0x20
	// Line 1614, Address: 0x227398, Func Offset: 0x28
	// Line 1615, Address: 0x2273a4, Func Offset: 0x34
	// Line 1616, Address: 0x2273ec, Func Offset: 0x7c
	// Line 1617, Address: 0x2273f0, Func Offset: 0x80
	// Line 1618, Address: 0x2273fc, Func Offset: 0x8c
	// Line 1619, Address: 0x227404, Func Offset: 0x94
	// Line 1620, Address: 0x22740c, Func Offset: 0x9c
	// Line 1625, Address: 0x227420, Func Offset: 0xb0
	// Line 1627, Address: 0x227454, Func Offset: 0xe4
	// Line 1628, Address: 0x227460, Func Offset: 0xf0
	// Line 1629, Address: 0x227464, Func Offset: 0xf4
	// Line 1630, Address: 0x227470, Func Offset: 0x100
	// Line 1631, Address: 0x22747c, Func Offset: 0x10c
	// Line 1632, Address: 0x227484, Func Offset: 0x114
	// Line 1633, Address: 0x227488, Func Offset: 0x118
	// Line 1634, Address: 0x227494, Func Offset: 0x124
	// Line 1635, Address: 0x22749c, Func Offset: 0x12c
	// Line 1636, Address: 0x2274a4, Func Offset: 0x134
	// Line 1637, Address: 0x2274a8, Func Offset: 0x138
	// Line 1638, Address: 0x2274c8, Func Offset: 0x158
	// Line 1639, Address: 0x2274d4, Func Offset: 0x164
	// Line 1640, Address: 0x2274dc, Func Offset: 0x16c
	// Line 1641, Address: 0x2274e0, Func Offset: 0x170
	// Line 1640, Address: 0x2274e4, Func Offset: 0x174
	// Line 1641, Address: 0x2274e8, Func Offset: 0x178
	// Line 1642, Address: 0x2274f0, Func Offset: 0x180
	// Line 1643, Address: 0x2274f8, Func Offset: 0x188
	// Line 1644, Address: 0x227504, Func Offset: 0x194
	// Line 1645, Address: 0x227508, Func Offset: 0x198
	// Line 1644, Address: 0x22750c, Func Offset: 0x19c
	// Line 1645, Address: 0x227510, Func Offset: 0x1a0
	// Line 1647, Address: 0x227518, Func Offset: 0x1a8
	// Line 1648, Address: 0x227524, Func Offset: 0x1b4
	// Line 1652, Address: 0x227530, Func Offset: 0x1c0
	// Line 1654, Address: 0x227538, Func Offset: 0x1c8
	// Line 1655, Address: 0x22754c, Func Offset: 0x1dc
	// Line 1657, Address: 0x227550, Func Offset: 0x1e0
	// Line 1658, Address: 0x227558, Func Offset: 0x1e8
	// Line 1659, Address: 0x22755c, Func Offset: 0x1ec
	// Line 1661, Address: 0x227560, Func Offset: 0x1f0
	// Line 1662, Address: 0x22756c, Func Offset: 0x1fc
	// Line 1664, Address: 0x227594, Func Offset: 0x224
	// Line 1670, Address: 0x2275d8, Func Offset: 0x268
	// Line 1671, Address: 0x2275e8, Func Offset: 0x278
	// Line 1673, Address: 0x227600, Func Offset: 0x290
	// Line 1674, Address: 0x227618, Func Offset: 0x2a8
	// Line 1675, Address: 0x22761c, Func Offset: 0x2ac
	// Line 1676, Address: 0x227624, Func Offset: 0x2b4
	// Line 1680, Address: 0x227628, Func Offset: 0x2b8
	// Line 1681, Address: 0x227634, Func Offset: 0x2c4
	// Line 1682, Address: 0x227648, Func Offset: 0x2d8
	// Line 1683, Address: 0x227654, Func Offset: 0x2e4
	// Line 1687, Address: 0x227658, Func Offset: 0x2e8
	// Line 1688, Address: 0x227670, Func Offset: 0x300
	// Line 1689, Address: 0x22767c, Func Offset: 0x30c
	// Line 1691, Address: 0x227680, Func Offset: 0x310
	// Line 1692, Address: 0x227698, Func Offset: 0x328
	// Line 1693, Address: 0x2276a4, Func Offset: 0x334
	// Line 1694, Address: 0x2276b4, Func Offset: 0x344
	// Line 1695, Address: 0x2276c0, Func Offset: 0x350
	// Line 1699, Address: 0x2276d4, Func Offset: 0x364
	// Line 1702, Address: 0x227704, Func Offset: 0x394
	// Line 1703, Address: 0x227708, Func Offset: 0x398
	// Line 1704, Address: 0x227720, Func Offset: 0x3b0
	// Line 1705, Address: 0x227738, Func Offset: 0x3c8
	// Line 1706, Address: 0x227744, Func Offset: 0x3d4
	// Line 1707, Address: 0x227750, Func Offset: 0x3e0
	// Line 1709, Address: 0x22775c, Func Offset: 0x3ec
	// Line 1710, Address: 0x227768, Func Offset: 0x3f8
	// Line 1713, Address: 0x227774, Func Offset: 0x404
	// Line 1714, Address: 0x22777c, Func Offset: 0x40c
	// Line 1715, Address: 0x227780, Func Offset: 0x410
	// Line 1716, Address: 0x227794, Func Offset: 0x424
	// Line 1717, Address: 0x2277a4, Func Offset: 0x434
	// Line 1718, Address: 0x2277b0, Func Offset: 0x440
	// Line 1719, Address: 0x2277bc, Func Offset: 0x44c
	// Line 1720, Address: 0x2277c0, Func Offset: 0x450
	// Line 1724, Address: 0x2277e0, Func Offset: 0x470
	// Line 1725, Address: 0x2277f8, Func Offset: 0x488
	// Line 1726, Address: 0x2277fc, Func Offset: 0x48c
	// Line 1727, Address: 0x227808, Func Offset: 0x498
	// Line 1730, Address: 0x22784c, Func Offset: 0x4dc
	// Line 1734, Address: 0x227850, Func Offset: 0x4e0
	// Line 1736, Address: 0x227864, Func Offset: 0x4f4
	// Line 1737, Address: 0x227870, Func Offset: 0x500
	// Line 1738, Address: 0x22789c, Func Offset: 0x52c
	// Line 1739, Address: 0x2278bc, Func Offset: 0x54c
	// Line 1741, Address: 0x2278d4, Func Offset: 0x564
	// Line 1742, Address: 0x2278e8, Func Offset: 0x578
	// Line 1743, Address: 0x2278f4, Func Offset: 0x584
	// Line 1746, Address: 0x2278fc, Func Offset: 0x58c
	// Line 1747, Address: 0x227900, Func Offset: 0x590
	// Line 1749, Address: 0x227924, Func Offset: 0x5b4
	// Line 1750, Address: 0x227930, Func Offset: 0x5c0
	// Line 1751, Address: 0x22793c, Func Offset: 0x5cc
	// Line 1752, Address: 0x227944, Func Offset: 0x5d4
	// Line 1753, Address: 0x22794c, Func Offset: 0x5dc
	// Line 1754, Address: 0x227958, Func Offset: 0x5e8
	// Line 1756, Address: 0x227964, Func Offset: 0x5f4
	// Line 1757, Address: 0x22796c, Func Offset: 0x5fc
	// Line 1758, Address: 0x227970, Func Offset: 0x600
	// Line 1759, Address: 0x227984, Func Offset: 0x614
	// Line 1760, Address: 0x227994, Func Offset: 0x624
	// Line 1762, Address: 0x2279a0, Func Offset: 0x630
	// Line 1765, Address: 0x2279c0, Func Offset: 0x650
	// Line 1766, Address: 0x2279cc, Func Offset: 0x65c
	// Line 1767, Address: 0x2279d0, Func Offset: 0x660
	// Line 1768, Address: 0x2279e8, Func Offset: 0x678
	// Line 1769, Address: 0x2279ec, Func Offset: 0x67c
	// Line 1770, Address: 0x2279f8, Func Offset: 0x688
	// Line 1773, Address: 0x227a3c, Func Offset: 0x6cc
	// Line 1777, Address: 0x227a40, Func Offset: 0x6d0
	// Line 1779, Address: 0x227a54, Func Offset: 0x6e4
	// Line 1780, Address: 0x227a60, Func Offset: 0x6f0
	// Line 1781, Address: 0x227a8c, Func Offset: 0x71c
	// Line 1782, Address: 0x227aac, Func Offset: 0x73c
	// Line 1784, Address: 0x227ac4, Func Offset: 0x754
	// Line 1785, Address: 0x227ad8, Func Offset: 0x768
	// Line 1786, Address: 0x227ae4, Func Offset: 0x774
	// Line 1789, Address: 0x227aec, Func Offset: 0x77c
	// Line 1790, Address: 0x227af0, Func Offset: 0x780
	// Line 1792, Address: 0x227b14, Func Offset: 0x7a4
	// Line 1793, Address: 0x227b20, Func Offset: 0x7b0
	// Line 1794, Address: 0x227b2c, Func Offset: 0x7bc
	// Line 1795, Address: 0x227b34, Func Offset: 0x7c4
	// Line 1796, Address: 0x227b40, Func Offset: 0x7d0
	// Line 1798, Address: 0x227b4c, Func Offset: 0x7dc
	// Line 1799, Address: 0x227b54, Func Offset: 0x7e4
	// Line 1800, Address: 0x227b58, Func Offset: 0x7e8
	// Line 1804, Address: 0x227b70, Func Offset: 0x800
	// Line 1806, Address: 0x227b98, Func Offset: 0x828
	// Func End, Address: 0x227bbc, Func Offset: 0x84c
}

// 
// Start address: 0x227bc0
void EnemyKillerControlInterval(sfObj* obj)
{
	EnemyKillerWork* ew;
	float* pos;
	float tpos[4];
	float rot[4];
	float dt;
	// Line 1810, Address: 0x227bc0, Func Offset: 0
	// Line 1816, Address: 0x227bd8, Func Offset: 0x18
	// Line 1817, Address: 0x227be4, Func Offset: 0x24
	// Line 1818, Address: 0x227bf0, Func Offset: 0x30
	// Line 1819, Address: 0x227bfc, Func Offset: 0x3c
	// Line 1820, Address: 0x227c08, Func Offset: 0x48
	// Line 1821, Address: 0x227c34, Func Offset: 0x74
	// Line 1822, Address: 0x227c38, Func Offset: 0x78
	// Line 1823, Address: 0x227c44, Func Offset: 0x84
	// Line 1824, Address: 0x227c50, Func Offset: 0x90
	// Line 1826, Address: 0x227c58, Func Offset: 0x98
	// Line 1828, Address: 0x227c64, Func Offset: 0xa4
	// Line 1829, Address: 0x227c68, Func Offset: 0xa8
	// Line 1834, Address: 0x227c80, Func Offset: 0xc0
	// Line 1836, Address: 0x227ca0, Func Offset: 0xe0
	// Line 1837, Address: 0x227cac, Func Offset: 0xec
	// Line 1840, Address: 0x227d14, Func Offset: 0x154
	// Line 1841, Address: 0x227d1c, Func Offset: 0x15c
	// Line 1843, Address: 0x227d24, Func Offset: 0x164
	// Line 1844, Address: 0x227d2c, Func Offset: 0x16c
	// Line 1845, Address: 0x227d30, Func Offset: 0x170
	// Line 1848, Address: 0x227d58, Func Offset: 0x198
	// Line 1849, Address: 0x227d64, Func Offset: 0x1a4
	// Line 1850, Address: 0x227d88, Func Offset: 0x1c8
	// Line 1851, Address: 0x227d98, Func Offset: 0x1d8
	// Line 1852, Address: 0x227da0, Func Offset: 0x1e0
	// Line 1853, Address: 0x227da8, Func Offset: 0x1e8
	// Line 1857, Address: 0x227db4, Func Offset: 0x1f4
	// Line 1858, Address: 0x227db8, Func Offset: 0x1f8
	// Func End, Address: 0x227dd4, Func Offset: 0x214
}

// 
// Start address: 0x227de0
void EnemyKillerControlBackStep(sfObj* obj)
{
	float* pos;
	float* ppos;
	float vec[4];
	float d;
	// Line 1862, Address: 0x227de0, Func Offset: 0
	// Line 1863, Address: 0x227df0, Func Offset: 0x10
	// Line 1864, Address: 0x227e14, Func Offset: 0x34
	// Line 1865, Address: 0x227e18, Func Offset: 0x38
	// Line 1870, Address: 0x227e24, Func Offset: 0x44
	// Line 1871, Address: 0x227e30, Func Offset: 0x50
	// Line 1872, Address: 0x227e38, Func Offset: 0x58
	// Line 1873, Address: 0x227e50, Func Offset: 0x70
	// Line 1874, Address: 0x227e54, Func Offset: 0x74
	// Line 1875, Address: 0x227e6c, Func Offset: 0x8c
	// Line 1876, Address: 0x227e80, Func Offset: 0xa0
	// Line 1877, Address: 0x227e88, Func Offset: 0xa8
	// Line 1880, Address: 0x227e90, Func Offset: 0xb0
	// Line 1881, Address: 0x227e98, Func Offset: 0xb8
	// Line 1882, Address: 0x227ea4, Func Offset: 0xc4
	// Line 1883, Address: 0x227eac, Func Offset: 0xcc
	// Line 1884, Address: 0x227eb4, Func Offset: 0xd4
	// Line 1885, Address: 0x227eb8, Func Offset: 0xd8
	// Line 1886, Address: 0x227ed4, Func Offset: 0xf4
	// Line 1887, Address: 0x227ee4, Func Offset: 0x104
	// Line 1888, Address: 0x227eec, Func Offset: 0x10c
	// Line 1889, Address: 0x227ef8, Func Offset: 0x118
	// Line 1893, Address: 0x227f04, Func Offset: 0x124
	// Line 1894, Address: 0x227f08, Func Offset: 0x128
	// Func End, Address: 0x227f1c, Func Offset: 0x13c
}

// 
// Start address: 0x227f20
void EnemyKillerControlDamage(sfObj* obj)
{
	EnemyKillerWork* ew;
	EnemyBattleDamage bd;
	// Line 1898, Address: 0x227f20, Func Offset: 0
	// Line 1900, Address: 0x227f30, Func Offset: 0x10
	// Line 1901, Address: 0x227f3c, Func Offset: 0x1c
	// Line 1902, Address: 0x227f74, Func Offset: 0x54
	// Line 1903, Address: 0x227f78, Func Offset: 0x58
	// Line 1904, Address: 0x227f84, Func Offset: 0x64
	// Line 1905, Address: 0x227f8c, Func Offset: 0x6c
	// Line 1906, Address: 0x227f94, Func Offset: 0x74
	// Line 1907, Address: 0x227fa0, Func Offset: 0x80
	// Line 1908, Address: 0x227fa8, Func Offset: 0x88
	// Line 1911, Address: 0x227fb0, Func Offset: 0x90
	// Line 1912, Address: 0x227fbc, Func Offset: 0x9c
	// Line 1913, Address: 0x227fc8, Func Offset: 0xa8
	// Line 1916, Address: 0x227ff8, Func Offset: 0xd8
	// Line 1917, Address: 0x228004, Func Offset: 0xe4
	// Line 1918, Address: 0x228010, Func Offset: 0xf0
	// Line 1920, Address: 0x228018, Func Offset: 0xf8
	// Line 1924, Address: 0x228024, Func Offset: 0x104
	// Line 1925, Address: 0x228044, Func Offset: 0x124
	// Line 1926, Address: 0x22804c, Func Offset: 0x12c
	// Line 1927, Address: 0x228058, Func Offset: 0x138
	// Line 1929, Address: 0x228060, Func Offset: 0x140
	// Line 1931, Address: 0x228068, Func Offset: 0x148
	// Line 1932, Address: 0x22808c, Func Offset: 0x16c
	// Line 1934, Address: 0x228094, Func Offset: 0x174
	// Line 1935, Address: 0x22809c, Func Offset: 0x17c
	// Line 1936, Address: 0x2280a0, Func Offset: 0x180
	// Line 1937, Address: 0x2280c0, Func Offset: 0x1a0
	// Line 1939, Address: 0x2280d4, Func Offset: 0x1b4
	// Line 1941, Address: 0x2280dc, Func Offset: 0x1bc
	// Line 1942, Address: 0x2280e4, Func Offset: 0x1c4
	// Line 1943, Address: 0x2280e8, Func Offset: 0x1c8
	// Line 1944, Address: 0x2280f8, Func Offset: 0x1d8
	// Line 1948, Address: 0x228100, Func Offset: 0x1e0
	// Func End, Address: 0x228114, Func Offset: 0x1f4
}

// 
// Start address: 0x228120
void EnemyKillerControlDown(sfObj* obj)
{
	EnemyKillerWork* ew;
	float dt;
	// Line 1952, Address: 0x228120, Func Offset: 0
	// Line 1955, Address: 0x228134, Func Offset: 0x14
	// Line 1956, Address: 0x22813c, Func Offset: 0x1c
	// Line 1957, Address: 0x228148, Func Offset: 0x28
	// Line 1958, Address: 0x228174, Func Offset: 0x54
	// Line 1959, Address: 0x228178, Func Offset: 0x58
	// Line 1960, Address: 0x228184, Func Offset: 0x64
	// Line 1961, Address: 0x22818c, Func Offset: 0x6c
	// Line 1962, Address: 0x228194, Func Offset: 0x74
	// Line 1963, Address: 0x2281a4, Func Offset: 0x84
	// Line 1964, Address: 0x2281ac, Func Offset: 0x8c
	// Line 1965, Address: 0x2281c8, Func Offset: 0xa8
	// Line 1966, Address: 0x2281d0, Func Offset: 0xb0
	// Line 1967, Address: 0x2281f4, Func Offset: 0xd4
	// Line 1968, Address: 0x228210, Func Offset: 0xf0
	// Line 1969, Address: 0x228218, Func Offset: 0xf8
	// Line 1971, Address: 0x228238, Func Offset: 0x118
	// Line 1972, Address: 0x228240, Func Offset: 0x120
	// Line 1974, Address: 0x228248, Func Offset: 0x128
	// Line 1975, Address: 0x228264, Func Offset: 0x144
	// Line 1976, Address: 0x228278, Func Offset: 0x158
	// Line 1978, Address: 0x22828c, Func Offset: 0x16c
	// Line 1979, Address: 0x228298, Func Offset: 0x178
	// Line 1980, Address: 0x2282a4, Func Offset: 0x184
	// Line 1981, Address: 0x2282b0, Func Offset: 0x190
	// Line 1982, Address: 0x2282c0, Func Offset: 0x1a0
	// Line 1984, Address: 0x2282d4, Func Offset: 0x1b4
	// Line 1987, Address: 0x2282e0, Func Offset: 0x1c0
	// Line 1988, Address: 0x2282f0, Func Offset: 0x1d0
	// Line 1991, Address: 0x228304, Func Offset: 0x1e4
	// Line 1992, Address: 0x22830c, Func Offset: 0x1ec
	// Line 1993, Address: 0x228310, Func Offset: 0x1f0
	// Line 1994, Address: 0x228320, Func Offset: 0x200
	// Line 1995, Address: 0x228330, Func Offset: 0x210
	// Line 1997, Address: 0x228344, Func Offset: 0x224
	// Line 1998, Address: 0x228350, Func Offset: 0x230
	// Line 1999, Address: 0x22835c, Func Offset: 0x23c
	// Line 2000, Address: 0x228388, Func Offset: 0x268
	// Line 2001, Address: 0x228394, Func Offset: 0x274
	// Line 2002, Address: 0x2283a0, Func Offset: 0x280
	// Line 2003, Address: 0x2283a8, Func Offset: 0x288
	// Line 2004, Address: 0x2283b4, Func Offset: 0x294
	// Line 2003, Address: 0x2283b8, Func Offset: 0x298
	// Line 2004, Address: 0x2283d8, Func Offset: 0x2b8
	// Line 2008, Address: 0x2283e8, Func Offset: 0x2c8
	// Line 2010, Address: 0x2283f0, Func Offset: 0x2d0
	// Line 2011, Address: 0x228408, Func Offset: 0x2e8
	// Line 2012, Address: 0x228418, Func Offset: 0x2f8
	// Line 2013, Address: 0x228428, Func Offset: 0x308
	// Line 2014, Address: 0x228438, Func Offset: 0x318
	// Line 2016, Address: 0x228440, Func Offset: 0x320
	// Line 2018, Address: 0x228448, Func Offset: 0x328
	// Line 2019, Address: 0x228458, Func Offset: 0x338
	// Line 2020, Address: 0x228460, Func Offset: 0x340
	// Line 2022, Address: 0x228468, Func Offset: 0x348
	// Line 2024, Address: 0x228470, Func Offset: 0x350
	// Line 2025, Address: 0x228490, Func Offset: 0x370
	// Line 2026, Address: 0x228498, Func Offset: 0x378
	// Line 2028, Address: 0x2284ac, Func Offset: 0x38c
	// Line 2030, Address: 0x2284b4, Func Offset: 0x394
	// Line 2031, Address: 0x2284bc, Func Offset: 0x39c
	// Line 2032, Address: 0x2284c0, Func Offset: 0x3a0
	// Line 2033, Address: 0x2284d0, Func Offset: 0x3b0
	// Line 2035, Address: 0x2284e4, Func Offset: 0x3c4
	// Line 2036, Address: 0x2284f0, Func Offset: 0x3d0
	// Line 2039, Address: 0x2284fc, Func Offset: 0x3dc
	// Line 2040, Address: 0x228500, Func Offset: 0x3e0
	// Func End, Address: 0x228518, Func Offset: 0x3f8
}

// 
// Start address: 0x228520
void EnemyKillerControlFinish(sfObj* obj)
{
	EnemyKillerWork* ew;
	float* pos;
	float tpos[4];
	float rot[4];
	float dt;
	float d;
	// Line 2044, Address: 0x228520, Func Offset: 0
	// Line 2050, Address: 0x22853c, Func Offset: 0x1c
	// Line 2051, Address: 0x228548, Func Offset: 0x28
	// Line 2052, Address: 0x228554, Func Offset: 0x34
	// Line 2053, Address: 0x228560, Func Offset: 0x40
	// Line 2054, Address: 0x22856c, Func Offset: 0x4c
	// Line 2057, Address: 0x228598, Func Offset: 0x78
	// Line 2058, Address: 0x2285a4, Func Offset: 0x84
	// Line 2059, Address: 0x2285ac, Func Offset: 0x8c
	// Line 2060, Address: 0x2285b4, Func Offset: 0x94
	// Line 2061, Address: 0x2285c0, Func Offset: 0xa0
	// Line 2062, Address: 0x2285cc, Func Offset: 0xac
	// Line 2063, Address: 0x2285d0, Func Offset: 0xb0
	// Line 2066, Address: 0x2285dc, Func Offset: 0xbc
	// Line 2067, Address: 0x2285e0, Func Offset: 0xc0
	// Line 2069, Address: 0x2285f0, Func Offset: 0xd0
	// Line 2072, Address: 0x228604, Func Offset: 0xe4
	// Line 2073, Address: 0x228608, Func Offset: 0xe8
	// Line 2072, Address: 0x22860c, Func Offset: 0xec
	// Line 2073, Address: 0x228614, Func Offset: 0xf4
	// Line 2074, Address: 0x228624, Func Offset: 0x104
	// Line 2075, Address: 0x228634, Func Offset: 0x114
	// Line 2076, Address: 0x228638, Func Offset: 0x118
	// Line 2077, Address: 0x22864c, Func Offset: 0x12c
	// Line 2078, Address: 0x228658, Func Offset: 0x138
	// Line 2079, Address: 0x228668, Func Offset: 0x148
	// Line 2081, Address: 0x228670, Func Offset: 0x150
	// Line 2082, Address: 0x228694, Func Offset: 0x174
	// Line 2083, Address: 0x2286a4, Func Offset: 0x184
	// Line 2084, Address: 0x2286ac, Func Offset: 0x18c
	// Line 2085, Address: 0x2286b4, Func Offset: 0x194
	// Line 2086, Address: 0x2286bc, Func Offset: 0x19c
	// Line 2087, Address: 0x2286c8, Func Offset: 0x1a8
	// Line 2088, Address: 0x2286d0, Func Offset: 0x1b0
	// Line 2089, Address: 0x2286dc, Func Offset: 0x1bc
	// Line 2090, Address: 0x2286e4, Func Offset: 0x1c4
	// Line 2091, Address: 0x2286e8, Func Offset: 0x1c8
	// Line 2090, Address: 0x2286ec, Func Offset: 0x1cc
	// Line 2091, Address: 0x2286f0, Func Offset: 0x1d0
	// Line 2094, Address: 0x2286f8, Func Offset: 0x1d8
	// Line 2096, Address: 0x228700, Func Offset: 0x1e0
	// Line 2097, Address: 0x228710, Func Offset: 0x1f0
	// Line 2098, Address: 0x228718, Func Offset: 0x1f8
	// Line 2099, Address: 0x228724, Func Offset: 0x204
	// Line 2100, Address: 0x228730, Func Offset: 0x210
	// Line 2102, Address: 0x228740, Func Offset: 0x220
	// Line 2104, Address: 0x228748, Func Offset: 0x228
	// Line 2105, Address: 0x228758, Func Offset: 0x238
	// Line 2106, Address: 0x228760, Func Offset: 0x240
	// Line 2107, Address: 0x22876c, Func Offset: 0x24c
	// Line 2108, Address: 0x228778, Func Offset: 0x258
	// Line 2109, Address: 0x228788, Func Offset: 0x268
	// Line 2111, Address: 0x228790, Func Offset: 0x270
	// Line 2113, Address: 0x228798, Func Offset: 0x278
	// Line 2114, Address: 0x2287ac, Func Offset: 0x28c
	// Line 2115, Address: 0x2287b4, Func Offset: 0x294
	// Line 2116, Address: 0x2287c4, Func Offset: 0x2a4
	// Line 2119, Address: 0x2287cc, Func Offset: 0x2ac
	// Line 2120, Address: 0x2287d0, Func Offset: 0x2b0
	// Line 2121, Address: 0x2287e4, Func Offset: 0x2c4
	// Line 2123, Address: 0x228804, Func Offset: 0x2e4
	// Line 2125, Address: 0x228810, Func Offset: 0x2f0
	// Line 2126, Address: 0x22882c, Func Offset: 0x30c
	// Line 2128, Address: 0x228858, Func Offset: 0x338
	// Line 2129, Address: 0x228874, Func Offset: 0x354
	// Line 2130, Address: 0x228878, Func Offset: 0x358
	// Func End, Address: 0x228898, Func Offset: 0x378
}

// 
// Start address: 0x2288a0
void EnemyKillerControlCM(sfObj* obj)
{
	EnemyKillerWork* ew;
	float* pos;
	float* ppos;
	float dt;
	// Line 2134, Address: 0x2288a0, Func Offset: 0
	// Line 2138, Address: 0x2288bc, Func Offset: 0x1c
	// Line 2139, Address: 0x2288c8, Func Offset: 0x28
	// Line 2140, Address: 0x2288d4, Func Offset: 0x34
	// Line 2141, Address: 0x2288dc, Func Offset: 0x3c
	// Line 2142, Address: 0x2288e8, Func Offset: 0x48
	// Line 2143, Address: 0x228914, Func Offset: 0x74
	// Line 2144, Address: 0x228918, Func Offset: 0x78
	// Line 2145, Address: 0x228924, Func Offset: 0x84
	// Line 2146, Address: 0x228930, Func Offset: 0x90
	// Line 2147, Address: 0x228938, Func Offset: 0x98
	// Line 2148, Address: 0x228940, Func Offset: 0xa0
	// Line 2150, Address: 0x228948, Func Offset: 0xa8
	// Line 2152, Address: 0x228980, Func Offset: 0xe0
	// Line 2153, Address: 0x228988, Func Offset: 0xe8
	// Line 2154, Address: 0x228994, Func Offset: 0xf4
	// Line 2155, Address: 0x2289a0, Func Offset: 0x100
	// Line 2156, Address: 0x2289a8, Func Offset: 0x108
	// Line 2157, Address: 0x2289b0, Func Offset: 0x110
	// Line 2159, Address: 0x2289b8, Func Offset: 0x118
	// Line 2161, Address: 0x2289c0, Func Offset: 0x120
	// Line 2162, Address: 0x2289d0, Func Offset: 0x130
	// Line 2163, Address: 0x2289d8, Func Offset: 0x138
	// Line 2164, Address: 0x2289e4, Func Offset: 0x144
	// Line 2165, Address: 0x2289f8, Func Offset: 0x158
	// Line 2166, Address: 0x228a10, Func Offset: 0x170
	// Line 2167, Address: 0x228a18, Func Offset: 0x178
	// Line 2168, Address: 0x228a1c, Func Offset: 0x17c
	// Line 2169, Address: 0x228a20, Func Offset: 0x180
	// Line 2171, Address: 0x228a28, Func Offset: 0x188
	// Line 2173, Address: 0x228a30, Func Offset: 0x190
	// Line 2175, Address: 0x228a5c, Func Offset: 0x1bc
	// Line 2176, Address: 0x228a64, Func Offset: 0x1c4
	// Line 2178, Address: 0x228aa8, Func Offset: 0x208
	// Line 2179, Address: 0x228ab4, Func Offset: 0x214
	// Line 2180, Address: 0x228ad0, Func Offset: 0x230
	// Line 2182, Address: 0x228ae8, Func Offset: 0x248
	// Line 2184, Address: 0x228af0, Func Offset: 0x250
	// Line 2185, Address: 0x228afc, Func Offset: 0x25c
	// Line 2186, Address: 0x228b08, Func Offset: 0x268
	// Line 2187, Address: 0x228b18, Func Offset: 0x278
	// Line 2188, Address: 0x228b1c, Func Offset: 0x27c
	// Line 2187, Address: 0x228b20, Func Offset: 0x280
	// Line 2188, Address: 0x228b24, Func Offset: 0x284
	// Line 2189, Address: 0x228b2c, Func Offset: 0x28c
	// Line 2190, Address: 0x228b34, Func Offset: 0x294
	// Line 2191, Address: 0x228b38, Func Offset: 0x298
	// Line 2192, Address: 0x228b68, Func Offset: 0x2c8
	// Line 2193, Address: 0x228b74, Func Offset: 0x2d4
	// Line 2196, Address: 0x228b7c, Func Offset: 0x2dc
	// Line 2197, Address: 0x228b80, Func Offset: 0x2e0
	// Line 2198, Address: 0x228b94, Func Offset: 0x2f4
	// Line 2199, Address: 0x228ba0, Func Offset: 0x300
	// Line 2200, Address: 0x228ba4, Func Offset: 0x304
	// Line 2199, Address: 0x228ba8, Func Offset: 0x308
	// Line 2200, Address: 0x228bac, Func Offset: 0x30c
	// Line 2202, Address: 0x228bb8, Func Offset: 0x318
	// Line 2204, Address: 0x228bc0, Func Offset: 0x320
	// Line 2205, Address: 0x228bf0, Func Offset: 0x350
	// Line 2206, Address: 0x228bfc, Func Offset: 0x35c
	// Line 2209, Address: 0x228c04, Func Offset: 0x364
	// Line 2210, Address: 0x228c08, Func Offset: 0x368
	// Line 2211, Address: 0x228c18, Func Offset: 0x378
	// Line 2212, Address: 0x228c28, Func Offset: 0x388
	// Line 2213, Address: 0x228c30, Func Offset: 0x390
	// Line 2214, Address: 0x228c34, Func Offset: 0x394
	// Line 2213, Address: 0x228c38, Func Offset: 0x398
	// Line 2214, Address: 0x228c3c, Func Offset: 0x39c
	// Line 2215, Address: 0x228c44, Func Offset: 0x3a4
	// Line 2216, Address: 0x228c68, Func Offset: 0x3c8
	// Line 2217, Address: 0x228c70, Func Offset: 0x3d0
	// Line 2219, Address: 0x228cb0, Func Offset: 0x410
	// Line 2220, Address: 0x228cbc, Func Offset: 0x41c
	// Line 2221, Address: 0x228cc8, Func Offset: 0x428
	// Line 2222, Address: 0x228cd4, Func Offset: 0x434
	// Line 2223, Address: 0x228ce0, Func Offset: 0x440
	// Line 2224, Address: 0x228cec, Func Offset: 0x44c
	// Line 2225, Address: 0x228cf4, Func Offset: 0x454
	// Line 2226, Address: 0x228d00, Func Offset: 0x460
	// Line 2225, Address: 0x228d04, Func Offset: 0x464
	// Line 2226, Address: 0x228d08, Func Offset: 0x468
	// Line 2225, Address: 0x228d0c, Func Offset: 0x46c
	// Line 2226, Address: 0x228d10, Func Offset: 0x470
	// Line 2229, Address: 0x228d18, Func Offset: 0x478
	// Line 2231, Address: 0x228d20, Func Offset: 0x480
	// Line 2232, Address: 0x228d28, Func Offset: 0x488
	// Line 2233, Address: 0x228d34, Func Offset: 0x494
	// Line 2234, Address: 0x228d3c, Func Offset: 0x49c
	// Line 2235, Address: 0x228d44, Func Offset: 0x4a4
	// Line 2236, Address: 0x228d48, Func Offset: 0x4a8
	// Line 2237, Address: 0x228d58, Func Offset: 0x4b8
	// Line 2239, Address: 0x228d60, Func Offset: 0x4c0
	// Line 2241, Address: 0x228d68, Func Offset: 0x4c8
	// Line 2242, Address: 0x228d84, Func Offset: 0x4e4
	// Line 2243, Address: 0x228d90, Func Offset: 0x4f0
	// Line 2246, Address: 0x228d9c, Func Offset: 0x4fc
	// Line 2247, Address: 0x228da0, Func Offset: 0x500
	// Func End, Address: 0x228dc0, Func Offset: 0x520
}

// 
// Start address: 0x228dc0
int door_sound(int type)
{
	int se_no;
	// Line 2251, Address: 0x228dc0, Func Offset: 0
	// Line 2252, Address: 0x228dcc, Func Offset: 0xc
	// Line 2253, Address: 0x228dd4, Func Offset: 0x14
	// Line 2254, Address: 0x228ddc, Func Offset: 0x1c
	// Line 2255, Address: 0x228df4, Func Offset: 0x34
	// Line 2257, Address: 0x228df8, Func Offset: 0x38
	// Line 2259, Address: 0x228e00, Func Offset: 0x40
	// Line 2262, Address: 0x228e04, Func Offset: 0x44
	// Line 2264, Address: 0x228e08, Func Offset: 0x48
	// Func End, Address: 0x228e18, Func Offset: 0x58
}

// 
// Start address: 0x228e20
void EnemyKillerControlWait(sfObj* obj)
{
	EnemyKillerWork* ew;
	float* ppos;
	float d;
	float dt;
	float rot[4];
	// Line 2268, Address: 0x228e20, Func Offset: 0
	// Line 2272, Address: 0x228e38, Func Offset: 0x18
	// Line 2273, Address: 0x228e40, Func Offset: 0x20
	// Line 2274, Address: 0x228e4c, Func Offset: 0x2c
	// Line 2275, Address: 0x228e58, Func Offset: 0x38
	// Line 2277, Address: 0x228e98, Func Offset: 0x78
	// Line 2278, Address: 0x228ea4, Func Offset: 0x84
	// Line 2279, Address: 0x228eb0, Func Offset: 0x90
	// Line 2280, Address: 0x228eb8, Func Offset: 0x98
	// Line 2281, Address: 0x228ebc, Func Offset: 0x9c
	// Line 2282, Address: 0x228ed0, Func Offset: 0xb0
	// Line 2283, Address: 0x228ed8, Func Offset: 0xb8
	// Line 2284, Address: 0x228ee0, Func Offset: 0xc0
	// Line 2286, Address: 0x228ee8, Func Offset: 0xc8
	// Line 2288, Address: 0x228ef0, Func Offset: 0xd0
	// Line 2289, Address: 0x228f04, Func Offset: 0xe4
	// Line 2290, Address: 0x228f08, Func Offset: 0xe8
	// Line 2292, Address: 0x228f14, Func Offset: 0xf4
	// Line 2293, Address: 0x228f1c, Func Offset: 0xfc
	// Line 2294, Address: 0x228f20, Func Offset: 0x100
	// Line 2295, Address: 0x228f3c, Func Offset: 0x11c
	// Line 2297, Address: 0x228f44, Func Offset: 0x124
	// Line 2298, Address: 0x228f4c, Func Offset: 0x12c
	// Line 2299, Address: 0x228f50, Func Offset: 0x130
	// Line 2304, Address: 0x228f84, Func Offset: 0x164
	// Line 2305, Address: 0x228f8c, Func Offset: 0x16c
	// Line 2306, Address: 0x228f98, Func Offset: 0x178
	// Line 2307, Address: 0x228fac, Func Offset: 0x18c
	// Line 2308, Address: 0x228fb8, Func Offset: 0x198
	// Line 2309, Address: 0x228fc0, Func Offset: 0x1a0
	// Line 2310, Address: 0x228fcc, Func Offset: 0x1ac
	// Line 2311, Address: 0x228fe0, Func Offset: 0x1c0
	// Line 2312, Address: 0x228fe4, Func Offset: 0x1c4
	// Line 2314, Address: 0x228ff0, Func Offset: 0x1d0
	// Line 2316, Address: 0x228ff8, Func Offset: 0x1d8
	// Line 2317, Address: 0x229014, Func Offset: 0x1f4
	// Line 2318, Address: 0x229030, Func Offset: 0x210
	// Line 2321, Address: 0x22903c, Func Offset: 0x21c
	// Line 2322, Address: 0x229040, Func Offset: 0x220
	// Func End, Address: 0x22905c, Func Offset: 0x23c
}

// 
// Start address: 0x229060
void EnemyKillerControlEvent(sfObj* obj)
{
	EnemyKillerWork* ew;
	// Line 2326, Address: 0x229060, Func Offset: 0
	// Line 2328, Address: 0x229070, Func Offset: 0x10
	// Line 2329, Address: 0x22907c, Func Offset: 0x1c
	// Line 2330, Address: 0x229088, Func Offset: 0x28
	// Line 2331, Address: 0x229090, Func Offset: 0x30
	// Line 2332, Address: 0x229098, Func Offset: 0x38
	// Line 2333, Address: 0x22909c, Func Offset: 0x3c
	// Line 2332, Address: 0x2290a0, Func Offset: 0x40
	// Line 2333, Address: 0x2290a4, Func Offset: 0x44
	// Line 2334, Address: 0x2290ac, Func Offset: 0x4c
	// Line 2335, Address: 0x2290b8, Func Offset: 0x58
	// Line 2336, Address: 0x2290c4, Func Offset: 0x64
	// Line 2337, Address: 0x2290d0, Func Offset: 0x70
	// Func End, Address: 0x2290e4, Func Offset: 0x84
}

// 
// Start address: 0x2290f0
void EnemyKillerControlTest()
{
	// Line 2447, Address: 0x2290f0, Func Offset: 0
	// Func End, Address: 0x2290f8, Func Offset: 0x8
}

// 
// Start address: 0x229100
void EnemyKillerSoundCall(sfObj* obj, int sound_no)
{
	EnemyKillerWork* ew;
	// Line 2454, Address: 0x229100, Func Offset: 0
	// Line 2456, Address: 0x229118, Func Offset: 0x18
	// Line 2457, Address: 0x229124, Func Offset: 0x24
	// Line 2458, Address: 0x229130, Func Offset: 0x30
	// Line 2461, Address: 0x229138, Func Offset: 0x38
	// Line 2463, Address: 0x229140, Func Offset: 0x40
	// Line 2464, Address: 0x229150, Func Offset: 0x50
	// Line 2465, Address: 0x229154, Func Offset: 0x54
	// Func End, Address: 0x229170, Func Offset: 0x70
}

// 
// Start address: 0x229170
void EnemyKillerSoundStop(sfObj* obj)
{
	EnemyKillerWork* ew;
	// Line 2469, Address: 0x229170, Func Offset: 0
	// Line 2471, Address: 0x229178, Func Offset: 0x8
	// Line 2472, Address: 0x229184, Func Offset: 0x14
	// Line 2473, Address: 0x22918c, Func Offset: 0x1c
	// Line 2474, Address: 0x229194, Func Offset: 0x24
	// Line 2475, Address: 0x229198, Func Offset: 0x28
	// Line 2476, Address: 0x2291a0, Func Offset: 0x30
	// Line 2477, Address: 0x2291a4, Func Offset: 0x34
	// Func End, Address: 0x2291b4, Func Offset: 0x44
}

// 
// Start address: 0x2291c0
void EnemyKillerFindPlayer(sfObj* obj)
{
	EnemyKillerWork* ew;
	EnemySenseData* es;
	// Line 2481, Address: 0x2291c0, Func Offset: 0
	// Line 2484, Address: 0x2291d0, Func Offset: 0x10
	// Line 2485, Address: 0x2291d8, Func Offset: 0x18
	// Line 2486, Address: 0x2291dc, Func Offset: 0x1c
	// Line 2487, Address: 0x2291e8, Func Offset: 0x28
	// Line 2494, Address: 0x2291f4, Func Offset: 0x34
	// Line 2488, Address: 0x2291f8, Func Offset: 0x38
	// Line 2489, Address: 0x2291fc, Func Offset: 0x3c
	// Line 2488, Address: 0x229200, Func Offset: 0x40
	// Line 2494, Address: 0x229204, Func Offset: 0x44
	// Line 2490, Address: 0x229208, Func Offset: 0x48
	// Line 2489, Address: 0x22920c, Func Offset: 0x4c
	// Line 2490, Address: 0x229210, Func Offset: 0x50
	// Line 2494, Address: 0x229214, Func Offset: 0x54
	// Line 2490, Address: 0x229218, Func Offset: 0x58
	// Line 2494, Address: 0x22921c, Func Offset: 0x5c
	// Line 2491, Address: 0x229220, Func Offset: 0x60
	// Line 2494, Address: 0x229224, Func Offset: 0x64
	// Line 2491, Address: 0x229228, Func Offset: 0x68
	// Line 2492, Address: 0x22922c, Func Offset: 0x6c
	// Line 2494, Address: 0x229230, Func Offset: 0x70
	// Line 2496, Address: 0x229238, Func Offset: 0x78
	// Func End, Address: 0x22924c, Func Offset: 0x8c
}

// 
// Start address: 0x229250
void EnemyKillerSetEventDamageCheck(sfObj* obj)
{
	// Line 2500, Address: 0x229250, Func Offset: 0
	// Line 2502, Address: 0x22925c, Func Offset: 0xc
	// Line 2503, Address: 0x229264, Func Offset: 0x14
	// Line 2505, Address: 0x2292a0, Func Offset: 0x50
	// Line 2507, Address: 0x2292bc, Func Offset: 0x6c
	// Line 2508, Address: 0x2292c4, Func Offset: 0x74
	// Line 2509, Address: 0x2292c8, Func Offset: 0x78
	// Line 2510, Address: 0x2292dc, Func Offset: 0x8c
	// Line 2512, Address: 0x2292f8, Func Offset: 0xa8
	// Line 2513, Address: 0x229300, Func Offset: 0xb0
	// Line 2516, Address: 0x22931c, Func Offset: 0xcc
	// Line 2517, Address: 0x229324, Func Offset: 0xd4
	// Line 2518, Address: 0x229328, Func Offset: 0xd8
	// Line 2519, Address: 0x229350, Func Offset: 0x100
	// Line 2521, Address: 0x22936c, Func Offset: 0x11c
	// Line 2522, Address: 0x229378, Func Offset: 0x128
	// Line 2526, Address: 0x229394, Func Offset: 0x144
	// Line 2527, Address: 0x229398, Func Offset: 0x148
	// Func End, Address: 0x2293a8, Func Offset: 0x158
}

// 
// Start address: 0x2293b0
int EnemyKillerCheckNarrowPassage(sfObj* obj)
{
	// Line 2531, Address: 0x2293b0, Func Offset: 0
	// Line 2532, Address: 0x2293b8, Func Offset: 0x8
	// Line 2534, Address: 0x2293d8, Func Offset: 0x28
	// Func End, Address: 0x2293e4, Func Offset: 0x34
}

// 
// Start address: 0x2293f0
int EnemyKillerCheckAttackRange(sfObj* obj)
{
	EnemyKillerWork* ew;
	float* pos;
	float* ppos;
	float vec[4];
	float d;
	sfObj* tobj;
	// Line 2538, Address: 0x2293f0, Func Offset: 0
	// Line 2544, Address: 0x229404, Func Offset: 0x14
	// Line 2545, Address: 0x22940c, Func Offset: 0x1c
	// Line 2546, Address: 0x229418, Func Offset: 0x28
	// Line 2547, Address: 0x229424, Func Offset: 0x34
	// Line 2548, Address: 0x229434, Func Offset: 0x44
	// Line 2549, Address: 0x22943c, Func Offset: 0x4c
	// Line 2550, Address: 0x229448, Func Offset: 0x58
	// Line 2551, Address: 0x229454, Func Offset: 0x64
	// Line 2552, Address: 0x229458, Func Offset: 0x68
	// Line 2553, Address: 0x229470, Func Offset: 0x80
	// Line 2554, Address: 0x2294b0, Func Offset: 0xc0
	// Line 2556, Address: 0x2294d0, Func Offset: 0xe0
	// Line 2557, Address: 0x229510, Func Offset: 0x120
	// Line 2558, Address: 0x229528, Func Offset: 0x138
	// Func End, Address: 0x229540, Func Offset: 0x150
}

// 
// Start address: 0x229540
int EnemyKillerSearchEnemy(sfObj* obj)
{
	EnemyClHitResult* cres;
	float* pos;
	int r;
	sfCldObject* cld;
	sfObj* tobj;
	EnemyCondition cond;
	// Line 2562, Address: 0x229540, Func Offset: 0
	// Line 2565, Address: 0x229550, Func Offset: 0x10
	// Line 2562, Address: 0x229554, Func Offset: 0x14
	// Line 2566, Address: 0x22955c, Func Offset: 0x1c
	// Line 2567, Address: 0x229564, Func Offset: 0x24
	// Line 2568, Address: 0x22956c, Func Offset: 0x2c
	// Line 2567, Address: 0x229574, Func Offset: 0x34
	// Line 2568, Address: 0x229578, Func Offset: 0x38
	// Line 2572, Address: 0x229590, Func Offset: 0x50
	// Line 2573, Address: 0x229598, Func Offset: 0x58
	// Line 2574, Address: 0x2295a4, Func Offset: 0x64
	// Line 2575, Address: 0x2295b4, Func Offset: 0x74
	// Line 2577, Address: 0x2295e8, Func Offset: 0xa8
	// Line 2578, Address: 0x2295f4, Func Offset: 0xb4
	// Line 2581, Address: 0x22960c, Func Offset: 0xcc
	// Line 2582, Address: 0x229614, Func Offset: 0xd4
	// Line 2583, Address: 0x229620, Func Offset: 0xe0
	// Line 2587, Address: 0x229624, Func Offset: 0xe4
	// Line 2588, Address: 0x229628, Func Offset: 0xe8
	// Line 2589, Address: 0x229630, Func Offset: 0xf0
	// Line 2590, Address: 0x229634, Func Offset: 0xf4
	// Func End, Address: 0x229650, Func Offset: 0x110
}

// 
// Start address: 0x229650
void EnemyKillerRecover(sfObj* obj)
{
	float heal;
	float dt;
	EnemyCondition cond;
	// Line 2594, Address: 0x229650, Func Offset: 0
	// Line 2598, Address: 0x229664, Func Offset: 0x14
	// Line 2599, Address: 0x22966c, Func Offset: 0x1c
	// Line 2600, Address: 0x229678, Func Offset: 0x28
	// Line 2601, Address: 0x229690, Func Offset: 0x40
	// Line 2603, Address: 0x229698, Func Offset: 0x48
	// Line 2604, Address: 0x2296a4, Func Offset: 0x54
	// Line 2605, Address: 0x2296b0, Func Offset: 0x60
	// Line 2606, Address: 0x2296bc, Func Offset: 0x6c
	// Line 2609, Address: 0x2296f8, Func Offset: 0xa8
	// Line 2610, Address: 0x229704, Func Offset: 0xb4
	// Line 2611, Address: 0x229710, Func Offset: 0xc0
	// Line 2613, Address: 0x22971c, Func Offset: 0xcc
	// Line 2614, Address: 0x229728, Func Offset: 0xd8
	// Line 2615, Address: 0x229734, Func Offset: 0xe4
	// Line 2616, Address: 0x229738, Func Offset: 0xe8
	// Func End, Address: 0x229750, Func Offset: 0x100
}

// 
// Start address: 0x229750
void EnemyKillerRevival(sfObj* obj)
{
	EnemyKillerWork* ew;
	float* pos;
	float* ppos;
	float vec[4];
	float d;
	int nextstep;
	// Line 2620, Address: 0x229750, Func Offset: 0
	// Line 2626, Address: 0x229764, Func Offset: 0x14
	// Line 2627, Address: 0x22976c, Func Offset: 0x1c
	// Line 2628, Address: 0x229774, Func Offset: 0x24
	// Line 2630, Address: 0x229798, Func Offset: 0x48
	// Line 2631, Address: 0x2297a4, Func Offset: 0x54
	// Line 2632, Address: 0x2297ac, Func Offset: 0x5c
	// Line 2633, Address: 0x2297b0, Func Offset: 0x60
	// Line 2634, Address: 0x2297bc, Func Offset: 0x6c
	// Line 2635, Address: 0x2297c4, Func Offset: 0x74
	// Line 2636, Address: 0x2297dc, Func Offset: 0x8c
	// Line 2637, Address: 0x22981c, Func Offset: 0xcc
	// Line 2638, Address: 0x229820, Func Offset: 0xd0
	// Line 2640, Address: 0x22984c, Func Offset: 0xfc
	// Line 2641, Address: 0x229868, Func Offset: 0x118
	// Line 2643, Address: 0x229878, Func Offset: 0x128
	// Line 2646, Address: 0x229880, Func Offset: 0x130
	// Line 2648, Address: 0x2298a0, Func Offset: 0x150
	// Line 2649, Address: 0x2298a8, Func Offset: 0x158
	// Line 2650, Address: 0x2298ac, Func Offset: 0x15c
	// Line 2651, Address: 0x2298b0, Func Offset: 0x160
	// Line 2652, Address: 0x2298b8, Func Offset: 0x168
	// Func End, Address: 0x2298d0, Func Offset: 0x180
}

// 
// Start address: 0x2298d0
void EnemyEDKillerDamage(void* obj)
{
	EnemyKillerWork* ew;
	EnemyBattleDamage bd;
	int d;
	float dir[4];
	float rrot[4];
	// Line 2656, Address: 0x2298d0, Func Offset: 0
	// Line 2660, Address: 0x2298e8, Func Offset: 0x18
	// Line 2661, Address: 0x2298f4, Func Offset: 0x24
	// Line 2662, Address: 0x229904, Func Offset: 0x34
	// Line 2661, Address: 0x229908, Func Offset: 0x38
	// Line 2662, Address: 0x22990c, Func Offset: 0x3c
	// Line 2665, Address: 0x229914, Func Offset: 0x44
	// Line 2668, Address: 0x22992c, Func Offset: 0x5c
	// Line 2669, Address: 0x229938, Func Offset: 0x68
	// Line 2672, Address: 0x229950, Func Offset: 0x80
	// Line 2673, Address: 0x229960, Func Offset: 0x90
	// Line 2675, Address: 0x229974, Func Offset: 0xa4
	// Line 2676, Address: 0x229980, Func Offset: 0xb0
	// Line 2677, Address: 0x229990, Func Offset: 0xc0
	// Line 2678, Address: 0x2299a0, Func Offset: 0xd0
	// Line 2681, Address: 0x2299b8, Func Offset: 0xe8
	// Line 2682, Address: 0x2299bc, Func Offset: 0xec
	// Line 2683, Address: 0x2299e0, Func Offset: 0x110
	// Line 2685, Address: 0x229a10, Func Offset: 0x140
	// Line 2686, Address: 0x229a18, Func Offset: 0x148
	// Line 2687, Address: 0x229a44, Func Offset: 0x174
	// Line 2689, Address: 0x229a48, Func Offset: 0x178
	// Line 2695, Address: 0x229a50, Func Offset: 0x180
	// Line 2696, Address: 0x229a64, Func Offset: 0x194
	// Line 2697, Address: 0x229a74, Func Offset: 0x1a4
	// Line 2701, Address: 0x229a90, Func Offset: 0x1c0
	// Line 2703, Address: 0x229a98, Func Offset: 0x1c8
	// Line 2705, Address: 0x229ab4, Func Offset: 0x1e4
	// Line 2706, Address: 0x229ab8, Func Offset: 0x1e8
	// Line 2707, Address: 0x229ac8, Func Offset: 0x1f8
	// Line 2708, Address: 0x229ad0, Func Offset: 0x200
	// Line 2709, Address: 0x229ad8, Func Offset: 0x208
	// Line 2710, Address: 0x229ae4, Func Offset: 0x214
	// Line 2711, Address: 0x229af0, Func Offset: 0x220
	// Line 2712, Address: 0x229afc, Func Offset: 0x22c
	// Line 2713, Address: 0x229b00, Func Offset: 0x230
	// Func End, Address: 0x229b1c, Func Offset: 0x24c
}

// 
// Start address: 0x229b20
void EnemyEDKillerAdditionalDamageDown(void* obj)
{
	EnemyKillerWork* ew;
	EnemyBattleDamage bd;
	// Line 2717, Address: 0x229b20, Func Offset: 0
	// Line 2720, Address: 0x229b30, Func Offset: 0x10
	// Line 2721, Address: 0x229b3c, Func Offset: 0x1c
	// Line 2722, Address: 0x229b48, Func Offset: 0x28
	// Line 2723, Address: 0x229b58, Func Offset: 0x38
	// Line 2724, Address: 0x229b6c, Func Offset: 0x4c
	// Line 2725, Address: 0x229b78, Func Offset: 0x58
	// Line 2726, Address: 0x229b84, Func Offset: 0x64
	// Line 2727, Address: 0x229b88, Func Offset: 0x68
	// Line 2728, Address: 0x229b94, Func Offset: 0x74
	// Line 2729, Address: 0x229ba4, Func Offset: 0x84
	// Line 2730, Address: 0x229bc0, Func Offset: 0xa0
	// Line 2732, Address: 0x229bd4, Func Offset: 0xb4
	// Line 2733, Address: 0x229be0, Func Offset: 0xc0
	// Line 2734, Address: 0x229bfc, Func Offset: 0xdc
	// Line 2735, Address: 0x229c18, Func Offset: 0xf8
	// Line 2736, Address: 0x229c20, Func Offset: 0x100
	// Line 2737, Address: 0x229c2c, Func Offset: 0x10c
	// Line 2736, Address: 0x229c30, Func Offset: 0x110
	// Line 2737, Address: 0x229c34, Func Offset: 0x114
	// Line 2736, Address: 0x229c38, Func Offset: 0x118
	// Line 2737, Address: 0x229c4c, Func Offset: 0x12c
	// Line 2738, Address: 0x229c54, Func Offset: 0x134
	// Line 2739, Address: 0x229c58, Func Offset: 0x138
	// Func End, Address: 0x229c6c, Func Offset: 0x14c
}

