typedef struct EnemyHilWork;
typedef struct EnemySoundTypeControl;
typedef struct EnemyBattleDamage;
typedef struct sfObj;
typedef struct sgBone;
typedef enum EnemySoundType : unsigned char;
typedef struct _anon0;
typedef enum EnemyCondition : unsigned char;
typedef struct _anon1;
typedef struct _GAME_WORK;
typedef struct _anon2;
typedef struct EnemyClHitResult;
typedef struct _anon3;
typedef enum BattleAttackKind : unsigned char;
typedef struct _anon4;
typedef union _anon5;
typedef union _anon6;
typedef struct EnemySoundTypeControlData;
typedef struct EnemyManageDataOne;
typedef struct EnemyTexParameter;
typedef struct _anon7;
typedef struct EnemyHilMucus;
typedef enum EnemySenseResultType : unsigned char;
typedef enum EnemyManageEntryType : unsigned char;
typedef struct EnemySenseResult;
typedef enum BattleDamageType : unsigned char;
typedef struct EnemyMeasureResult;
typedef enum EnemyTexIdentity : unsigned char;

typedef void(*type_18)(sfObj*);
typedef void(*type_22)(sfObj*);

typedef _anon2 type_0[1];
typedef float type_1[4];
typedef float type_2[4][5];
typedef int type_3[1];
typedef _anon6 type_4[4];
typedef int type_5[1];
typedef _anon2 type_6[4];
typedef float type_7[3];
typedef float type_8[4];
typedef float type_9[4];
typedef int type_10[1];
typedef int type_11[1];
typedef int type_12[1];
typedef _anon2 type_13[4];
typedef _anon3 type_14[4];
typedef _anon5 type_15[0];
typedef unsigned char type_16[3];
typedef _anon6 type_17[256];
typedef int type_19[0];
typedef _anon7 type_20[2];
typedef float type_21[4];
typedef float type_23[4][13];
typedef short type_24[2];
typedef float type_25[4][36];
typedef unsigned short type_26[2];
typedef char type_27[4];
typedef unsigned char type_28[4];
typedef _anon2 type_29[2];
typedef float type_30[1];
typedef float type_31[4][4];
typedef int type_32[1];
typedef float type_33[4];
typedef float type_34[4];
typedef float type_35[4][4];
typedef int type_36[1];
typedef int type_37[1];

struct EnemyHilWork
{
	float wall_normal[4];
	float direction[4];
	float bpos[4][4];
	float move[4];
	float old_pos[4];
	sfObj* mucus_obj;
	EnemyHilMucus* mucus;
	float dir;
	float dir_add;
	int now_speed;
	float speed_scale;
	float move_speed;
	float move_speed_add;
	float timer;
	float viscosity;
	int limit_type;
	int is_limit;
	int tex_type;
	float tex_rot;
	int drip_tex_type;
	float drip_range;
	float attack_timer;
	int on_attack;
	int fall_sound;
	EnemySoundTypeControl* sound_control;
};

struct EnemySoundTypeControl
{
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
	_anon6 fwork[256];
	_anon6* work;
	void(*func)(sfObj*);
	_anon6* work_pt0;
	_anon6* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon6* sys_work;
	_anon6* scene_work;
	_anon6* event_work;
	_anon6* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
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

struct _anon0
{
	float abcd[4];
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

struct _anon1
{
	float start[4];
	float end[4];
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

struct _anon2
{
	float bmin[4];
	float bmax[4];
};

struct EnemyClHitResult
{
};

struct _anon3
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

struct _anon4
{
	_anon5 vertex[0];
};

union _anon5
{
	float node[4];
	_anon3 data[4];
};

union _anon6
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
	_anon6 work[4];
	unsigned int padding;
};

struct EnemyTexParameter
{
	_anon7 st[2];
	EnemyTexIdentity texid;
	unsigned long clamp;
	int rotate;
};

struct _anon7
{
	float S;
	float T;
};

struct EnemyHilMucus
{
	float pos_m[4][13];
	float pos[4][36];
	float timer;
	float transparency;
};

enum EnemySenseResultType : unsigned char
{
	EN_SENSE_RES_NOTHING,
	EN_SENSE_RES_FOUND
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

struct EnemyMeasureResult
{
	float pos[4];
	float normal[4];
	float dist;
	int exist;
	_anon4* poly;
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

float crush_tex_size[3];
unsigned char hil_skeleton_num[3];
float hil_skeleton_dist[4];
float hil_skeleton_tall[4];
float hil_skeleton_limit[4];
_anon2 limit_pos_sb10;
_anon2 limit_pos_mzx1;
_anon2 limit_pos_mz34;
_anon2 limit_pos_bd06[1];
_anon2 limit_pos_bd10[4];
_anon2 limit_pos_bd11[2];
_anon2 limit_pos_bd14[4];
_anon2 limit_pos_ie04;
EnemySoundTypeControlData hil_sound;
_GAME_WORK gamew;
float en_vector_unit_y_minus[4];
float sg_vector_unit_y[4];
float sg_vector_zero[4];

void EnemyHilConstruct(sfObj* obj);
void EnemyHilSkeletonReset(sfObj* obj);
void EnemyHilSkeletonRelease(sfObj* obj);
void EnemyHilMucusInit(sfObj* obj);
void EnemyHilMucusReset(sfObj* obj);
void EnemyHilHandle(sfObj* obj);
void EnemyHilDraw(sfObj* obj);
void EnemyHilDestruct(sfObj* obj);
void EnemyHilDataPreserve(sfObj* obj);
void EnemyHilDataExtract(sfObj* obj);
int check_clean_hit(sfObj* obj);
void limit_move(sfObj* obj);
void EnemyHilControl(sfObj* obj);
void EnemyHilControlInit(sfObj* obj);
int common_control(sfObj* obj);
void common_move(sfObj* obj);
void EnemyHilControlWander(sfObj* obj);
void EnemyHilControlApproach(sfObj* obj);
void EnemyHilControlEscape(sfObj* obj);
void EnemyHilControlFall(sfObj* obj);
void EnemyHilControlFall2(sfObj* obj);
void EnemyHilControlCrush(sfObj* obj);
void EnemyHilControlDead();
void EnemyHilSkeletonControl(sfObj* obj);
void EnemyHilMucusControl(sfObj* obj);
void EnemyHilHitCheck(sfObj* obj);
void EnemyHilMucusDraw(sfObj* obj);
void EnemyHilCrushDraw(sfObj* obj);

// 
// Start address: 0x1abd40
void EnemyHilConstruct(sfObj* obj)
{
	EnemyHilWork* ew;
	EnemyManageEntryType etype;
	float size;
	int type;
	// Line 257, Address: 0x1abd40, Func Offset: 0
	// Line 263, Address: 0x1abd44, Func Offset: 0x4
	// Line 257, Address: 0x1abd48, Func Offset: 0x8
	// Line 263, Address: 0x1abd60, Func Offset: 0x20
	// Line 265, Address: 0x1abd68, Func Offset: 0x28
	// Line 267, Address: 0x1abdb4, Func Offset: 0x74
	// Line 268, Address: 0x1abdbc, Func Offset: 0x7c
	// Line 269, Address: 0x1abdc4, Func Offset: 0x84
	// Line 271, Address: 0x1abdc8, Func Offset: 0x88
	// Line 272, Address: 0x1abdd4, Func Offset: 0x94
	// Line 274, Address: 0x1abdf0, Func Offset: 0xb0
	// Line 275, Address: 0x1abdf8, Func Offset: 0xb8
	// Line 278, Address: 0x1abe00, Func Offset: 0xc0
	// Line 279, Address: 0x1abe0c, Func Offset: 0xcc
	// Line 280, Address: 0x1abe2c, Func Offset: 0xec
	// Line 282, Address: 0x1abe30, Func Offset: 0xf0
	// Line 283, Address: 0x1abe40, Func Offset: 0x100
	// Line 284, Address: 0x1abe48, Func Offset: 0x108
	// Line 286, Address: 0x1abe7c, Func Offset: 0x13c
	// Line 287, Address: 0x1abe80, Func Offset: 0x140
	// Line 288, Address: 0x1abe88, Func Offset: 0x148
	// Line 291, Address: 0x1abe90, Func Offset: 0x150
	// Line 295, Address: 0x1abea0, Func Offset: 0x160
	// Line 296, Address: 0x1abeb0, Func Offset: 0x170
	// Line 297, Address: 0x1abeb8, Func Offset: 0x178
	// Line 299, Address: 0x1abee4, Func Offset: 0x1a4
	// Line 300, Address: 0x1abef0, Func Offset: 0x1b0
	// Line 301, Address: 0x1abf00, Func Offset: 0x1c0
	// Line 302, Address: 0x1abf10, Func Offset: 0x1d0
	// Line 304, Address: 0x1abf30, Func Offset: 0x1f0
	// Line 305, Address: 0x1abf48, Func Offset: 0x208
	// Line 306, Address: 0x1abf50, Func Offset: 0x210
	// Line 308, Address: 0x1abf64, Func Offset: 0x224
	// Line 309, Address: 0x1abf6c, Func Offset: 0x22c
	// Line 310, Address: 0x1abf74, Func Offset: 0x234
	// Line 311, Address: 0x1abf7c, Func Offset: 0x23c
	// Line 312, Address: 0x1abf80, Func Offset: 0x240
	// Line 313, Address: 0x1abf94, Func Offset: 0x254
	// Line 314, Address: 0x1abfa0, Func Offset: 0x260
	// Line 315, Address: 0x1abfb8, Func Offset: 0x278
	// Line 317, Address: 0x1abfc4, Func Offset: 0x284
	// Line 319, Address: 0x1abfcc, Func Offset: 0x28c
	// Line 321, Address: 0x1abfdc, Func Offset: 0x29c
	// Line 322, Address: 0x1abfe4, Func Offset: 0x2a4
	// Line 323, Address: 0x1abffc, Func Offset: 0x2bc
	// Line 324, Address: 0x1ac004, Func Offset: 0x2c4
	// Line 325, Address: 0x1ac010, Func Offset: 0x2d0
	// Line 326, Address: 0x1ac01c, Func Offset: 0x2dc
	// Line 327, Address: 0x1ac024, Func Offset: 0x2e4
	// Line 329, Address: 0x1ac044, Func Offset: 0x304
	// Line 330, Address: 0x1ac054, Func Offset: 0x314
	// Line 331, Address: 0x1ac05c, Func Offset: 0x31c
	// Line 332, Address: 0x1ac060, Func Offset: 0x320
	// Line 333, Address: 0x1ac068, Func Offset: 0x328
	// Line 337, Address: 0x1ac070, Func Offset: 0x330
	// Line 338, Address: 0x1ac07c, Func Offset: 0x33c
	// Line 339, Address: 0x1ac084, Func Offset: 0x344
	// Line 340, Address: 0x1ac08c, Func Offset: 0x34c
	// Line 341, Address: 0x1ac098, Func Offset: 0x358
	// Line 342, Address: 0x1ac0a0, Func Offset: 0x360
	// Func End, Address: 0x1ac0c0, Func Offset: 0x380
}

// 
// Start address: 0x1ac0c0
void EnemyHilSkeletonReset(sfObj* obj)
{
	EnemyHilWork* ew;
	int i;
	// Line 346, Address: 0x1ac0c0, Func Offset: 0
	// Line 349, Address: 0x1ac0d4, Func Offset: 0x14
	// Line 351, Address: 0x1ac0e0, Func Offset: 0x20
	// Line 352, Address: 0x1ac0e8, Func Offset: 0x28
	// Line 353, Address: 0x1ac10c, Func Offset: 0x4c
	// Line 354, Address: 0x1ac11c, Func Offset: 0x5c
	// Line 355, Address: 0x1ac15c, Func Offset: 0x9c
	// Line 356, Address: 0x1ac198, Func Offset: 0xd8
	// Line 357, Address: 0x1ac1a4, Func Offset: 0xe4
	// Func End, Address: 0x1ac1bc, Func Offset: 0xfc
}

// 
// Start address: 0x1ac1c0
void EnemyHilSkeletonRelease(sfObj* obj)
{
	int i;
	// Line 361, Address: 0x1ac1c0, Func Offset: 0
	// Line 363, Address: 0x1ac1d8, Func Offset: 0x18
	// Line 364, Address: 0x1ac1e8, Func Offset: 0x28
	// Line 365, Address: 0x1ac1f4, Func Offset: 0x34
	// Line 366, Address: 0x1ac204, Func Offset: 0x44
	// Func End, Address: 0x1ac21c, Func Offset: 0x5c
}

// 
// Start address: 0x1ac220
void EnemyHilMucusInit(sfObj* obj)
{
	EnemyHilWork* ew;
	sfObj* obj2;
	// Line 370, Address: 0x1ac220, Func Offset: 0
	// Line 374, Address: 0x1ac230, Func Offset: 0x10
	// Line 375, Address: 0x1ac23c, Func Offset: 0x1c
	// Line 376, Address: 0x1ac248, Func Offset: 0x28
	// Line 377, Address: 0x1ac254, Func Offset: 0x34
	// Line 379, Address: 0x1ac264, Func Offset: 0x44
	// Line 380, Address: 0x1ac268, Func Offset: 0x48
	// Line 381, Address: 0x1ac270, Func Offset: 0x50
	// Func End, Address: 0x1ac284, Func Offset: 0x64
}

// 
// Start address: 0x1ac290
void EnemyHilMucusReset(sfObj* obj)
{
	EnemyHilWork* ew;
	EnemyHilMucus* pm;
	float ppos[4];
	int i;
	// Line 385, Address: 0x1ac290, Func Offset: 0
	// Line 390, Address: 0x1ac2a0, Func Offset: 0x10
	// Line 391, Address: 0x1ac2a8, Func Offset: 0x18
	// Line 390, Address: 0x1ac2ac, Func Offset: 0x1c
	// Line 391, Address: 0x1ac2b0, Func Offset: 0x20
	// Line 392, Address: 0x1ac2c0, Func Offset: 0x30
	// Line 394, Address: 0x1ac2c4, Func Offset: 0x34
	// Line 393, Address: 0x1ac2c8, Func Offset: 0x38
	// Line 395, Address: 0x1ac2cc, Func Offset: 0x3c
	// Line 396, Address: 0x1ac2e0, Func Offset: 0x50
	// Line 397, Address: 0x1ac2f0, Func Offset: 0x60
	// Line 398, Address: 0x1ac2f4, Func Offset: 0x64
	// Line 399, Address: 0x1ac308, Func Offset: 0x78
	// Line 400, Address: 0x1ac318, Func Offset: 0x88
	// Line 401, Address: 0x1ac31c, Func Offset: 0x8c
	// Line 402, Address: 0x1ac320, Func Offset: 0x90
	// Func End, Address: 0x1ac334, Func Offset: 0xa4
}

// 
// Start address: 0x1ac340
void EnemyHilHandle(sfObj* obj)
{
	EnemyCondition cond;
	// Line 406, Address: 0x1ac340, Func Offset: 0
	// Line 408, Address: 0x1ac34c, Func Offset: 0xc
	// Line 409, Address: 0x1ac354, Func Offset: 0x14
	// Line 410, Address: 0x1ac35c, Func Offset: 0x1c
	// Line 411, Address: 0x1ac36c, Func Offset: 0x2c
	// Line 412, Address: 0x1ac380, Func Offset: 0x40
	// Line 414, Address: 0x1ac388, Func Offset: 0x48
	// Line 415, Address: 0x1ac390, Func Offset: 0x50
	// Line 416, Address: 0x1ac398, Func Offset: 0x58
	// Line 417, Address: 0x1ac3a0, Func Offset: 0x60
	// Line 418, Address: 0x1ac3a8, Func Offset: 0x68
	// Line 419, Address: 0x1ac3b0, Func Offset: 0x70
	// Line 421, Address: 0x1ac3b8, Func Offset: 0x78
	// Line 423, Address: 0x1ac3c0, Func Offset: 0x80
	// Line 424, Address: 0x1ac3d0, Func Offset: 0x90
	// Line 425, Address: 0x1ac3d8, Func Offset: 0x98
	// Line 426, Address: 0x1ac3e0, Func Offset: 0xa0
	// Line 428, Address: 0x1ac3e8, Func Offset: 0xa8
	// Func End, Address: 0x1ac3f8, Func Offset: 0xb8
}

// 
// Start address: 0x1ac400
void EnemyHilDraw(sfObj* obj)
{
	// Line 432, Address: 0x1ac400, Func Offset: 0
	// Line 433, Address: 0x1ac40c, Func Offset: 0xc
	// Line 434, Address: 0x1ac41c, Func Offset: 0x1c
	// Line 435, Address: 0x1ac424, Func Offset: 0x24
	// Line 436, Address: 0x1ac438, Func Offset: 0x38
	// Line 437, Address: 0x1ac440, Func Offset: 0x40
	// Line 438, Address: 0x1ac448, Func Offset: 0x48
	// Line 440, Address: 0x1ac450, Func Offset: 0x50
	// Line 442, Address: 0x1ac458, Func Offset: 0x58
	// Func End, Address: 0x1ac468, Func Offset: 0x68
}

// 
// Start address: 0x1ac470
void EnemyHilDestruct(sfObj* obj)
{
	EnemyHilWork* ew;
	// Line 446, Address: 0x1ac470, Func Offset: 0
	// Line 448, Address: 0x1ac484, Func Offset: 0x14
	// Line 449, Address: 0x1ac48c, Func Offset: 0x1c
	// Line 450, Address: 0x1ac4a8, Func Offset: 0x38
	// Line 453, Address: 0x1ac4f0, Func Offset: 0x80
	// Line 454, Address: 0x1ac4f8, Func Offset: 0x88
	// Line 455, Address: 0x1ac524, Func Offset: 0xb4
	// Line 457, Address: 0x1ac544, Func Offset: 0xd4
	// Line 458, Address: 0x1ac548, Func Offset: 0xd8
	// Line 459, Address: 0x1ac554, Func Offset: 0xe4
	// Line 460, Address: 0x1ac55c, Func Offset: 0xec
	// Line 461, Address: 0x1ac564, Func Offset: 0xf4
	// Line 462, Address: 0x1ac568, Func Offset: 0xf8
	// Line 463, Address: 0x1ac570, Func Offset: 0x100
	// Line 464, Address: 0x1ac578, Func Offset: 0x108
	// Line 465, Address: 0x1ac580, Func Offset: 0x110
	// Line 466, Address: 0x1ac588, Func Offset: 0x118
	// Line 467, Address: 0x1ac590, Func Offset: 0x120
	// Func End, Address: 0x1ac5a8, Func Offset: 0x138
}

// 
// Start address: 0x1ac5b0
void EnemyHilDataPreserve(sfObj* obj)
{
	EnemyHilWork* ew;
	EnemyManageDataOne* pe;
	_anon6 iu;
	// Line 471, Address: 0x1ac5b0, Func Offset: 0
	// Line 475, Address: 0x1ac5c4, Func Offset: 0x14
	// Line 476, Address: 0x1ac5dc, Func Offset: 0x2c
	// Line 477, Address: 0x1ac5e4, Func Offset: 0x34
	// Line 478, Address: 0x1ac5f0, Func Offset: 0x40
	// Line 479, Address: 0x1ac5fc, Func Offset: 0x4c
	// Line 481, Address: 0x1ac608, Func Offset: 0x58
	// Line 480, Address: 0x1ac60c, Func Offset: 0x5c
	// Line 482, Address: 0x1ac610, Func Offset: 0x60
	// Line 480, Address: 0x1ac614, Func Offset: 0x64
	// Line 481, Address: 0x1ac618, Func Offset: 0x68
	// Line 482, Address: 0x1ac61c, Func Offset: 0x6c
	// Line 483, Address: 0x1ac634, Func Offset: 0x84
	// Line 484, Address: 0x1ac638, Func Offset: 0x88
	// Line 486, Address: 0x1ac63c, Func Offset: 0x8c
	// Line 488, Address: 0x1ac640, Func Offset: 0x90
	// Line 483, Address: 0x1ac644, Func Offset: 0x94
	// Line 484, Address: 0x1ac648, Func Offset: 0x98
	// Line 485, Address: 0x1ac650, Func Offset: 0xa0
	// Line 486, Address: 0x1ac658, Func Offset: 0xa8
	// Line 487, Address: 0x1ac660, Func Offset: 0xb0
	// Line 488, Address: 0x1ac668, Func Offset: 0xb8
	// Line 490, Address: 0x1ac670, Func Offset: 0xc0
	// Func End, Address: 0x1ac688, Func Offset: 0xd8
}

// 
// Start address: 0x1ac690
void EnemyHilDataExtract(sfObj* obj)
{
	EnemyHilWork* ew;
	EnemyManageDataOne* pe;
	// Line 494, Address: 0x1ac690, Func Offset: 0
	// Line 497, Address: 0x1ac6a4, Func Offset: 0x14
	// Line 498, Address: 0x1ac6b0, Func Offset: 0x20
	// Line 499, Address: 0x1ac6c4, Func Offset: 0x34
	// Line 500, Address: 0x1ac6d0, Func Offset: 0x40
	// Line 501, Address: 0x1ac6dc, Func Offset: 0x4c
	// Line 502, Address: 0x1ac6e0, Func Offset: 0x50
	// Line 503, Address: 0x1ac6fc, Func Offset: 0x6c
	// Line 504, Address: 0x1ac704, Func Offset: 0x74
	// Line 505, Address: 0x1ac70c, Func Offset: 0x7c
	// Line 506, Address: 0x1ac714, Func Offset: 0x84
	// Line 507, Address: 0x1ac71c, Func Offset: 0x8c
	// Line 509, Address: 0x1ac720, Func Offset: 0x90
	// Line 512, Address: 0x1ac728, Func Offset: 0x98
	// Line 513, Address: 0x1ac734, Func Offset: 0xa4
	// Func End, Address: 0x1ac74c, Func Offset: 0xbc
}

// 
// Start address: 0x1ac750
int check_clean_hit(sfObj* obj)
{
	EnemyHilWork* ew;
	EnemyBattleDamage* bd;
	_anon1 line;
	float* cpos;
	float tpos[4];
	float d;
	int r;
	BattleAttackKind kind;
	BattleDamageType type;
	// Line 517, Address: 0x1ac750, Func Offset: 0
	// Line 525, Address: 0x1ac774, Func Offset: 0x24
	// Line 526, Address: 0x1ac780, Func Offset: 0x30
	// Line 527, Address: 0x1ac78c, Func Offset: 0x3c
	// Line 529, Address: 0x1ac790, Func Offset: 0x40
	// Line 530, Address: 0x1ac798, Func Offset: 0x48
	// Line 531, Address: 0x1ac79c, Func Offset: 0x4c
	// Line 532, Address: 0x1ac7a8, Func Offset: 0x58
	// Line 533, Address: 0x1ac7b8, Func Offset: 0x68
	// Line 535, Address: 0x1ac7ec, Func Offset: 0x9c
	// Line 536, Address: 0x1ac7f4, Func Offset: 0xa4
	// Line 538, Address: 0x1ac7fc, Func Offset: 0xac
	// Line 539, Address: 0x1ac810, Func Offset: 0xc0
	// Line 540, Address: 0x1ac81c, Func Offset: 0xcc
	// Line 541, Address: 0x1ac82c, Func Offset: 0xdc
	// Line 542, Address: 0x1ac834, Func Offset: 0xe4
	// Line 543, Address: 0x1ac838, Func Offset: 0xe8
	// Line 544, Address: 0x1ac840, Func Offset: 0xf0
	// Line 547, Address: 0x1ac880, Func Offset: 0x130
	// Line 548, Address: 0x1ac890, Func Offset: 0x140
	// Line 550, Address: 0x1ac898, Func Offset: 0x148
	// Line 551, Address: 0x1ac8a0, Func Offset: 0x150
	// Line 552, Address: 0x1ac8b0, Func Offset: 0x160
	// Line 553, Address: 0x1ac8c8, Func Offset: 0x178
	// Line 555, Address: 0x1ac8d0, Func Offset: 0x180
	// Line 556, Address: 0x1ac8dc, Func Offset: 0x18c
	// Line 557, Address: 0x1ac8f8, Func Offset: 0x1a8
	// Line 558, Address: 0x1ac908, Func Offset: 0x1b8
	// Line 559, Address: 0x1ac920, Func Offset: 0x1d0
	// Line 560, Address: 0x1ac930, Func Offset: 0x1e0
	// Line 562, Address: 0x1ac938, Func Offset: 0x1e8
	// Line 564, Address: 0x1ac940, Func Offset: 0x1f0
	// Line 566, Address: 0x1ac958, Func Offset: 0x208
	// Line 567, Address: 0x1ac960, Func Offset: 0x210
	// Line 568, Address: 0x1ac980, Func Offset: 0x230
	// Line 569, Address: 0x1ac98c, Func Offset: 0x23c
	// Line 570, Address: 0x1ac99c, Func Offset: 0x24c
	// Line 571, Address: 0x1ac9d0, Func Offset: 0x280
	// Line 572, Address: 0x1ac9e0, Func Offset: 0x290
	// Line 574, Address: 0x1ac9e8, Func Offset: 0x298
	// Line 576, Address: 0x1ac9f0, Func Offset: 0x2a0
	// Line 578, Address: 0x1ac9f4, Func Offset: 0x2a4
	// Line 579, Address: 0x1aca0c, Func Offset: 0x2bc
	// Line 580, Address: 0x1aca10, Func Offset: 0x2c0
	// Func End, Address: 0x1aca38, Func Offset: 0x2e8
}

// 
// Start address: 0x1aca40
void limit_move(sfObj* obj)
{
	EnemyHilWork* ew;
	int type;
	_anon2* plp;
	// Line 600, Address: 0x1aca40, Func Offset: 0
	// Line 603, Address: 0x1aca58, Func Offset: 0x18
	// Line 605, Address: 0x1aca60, Func Offset: 0x20
	// Line 603, Address: 0x1aca64, Func Offset: 0x24
	// Line 607, Address: 0x1aca68, Func Offset: 0x28
	// Line 609, Address: 0x1aca70, Func Offset: 0x30
	// Line 611, Address: 0x1acaa8, Func Offset: 0x68
	// Line 612, Address: 0x1acaac, Func Offset: 0x6c
	// Line 613, Address: 0x1acab4, Func Offset: 0x74
	// Line 614, Address: 0x1acab8, Func Offset: 0x78
	// Line 618, Address: 0x1acaf0, Func Offset: 0xb0
	// Line 619, Address: 0x1acaf4, Func Offset: 0xb4
	// Line 620, Address: 0x1acafc, Func Offset: 0xbc
	// Line 621, Address: 0x1acb00, Func Offset: 0xc0
	// Line 624, Address: 0x1acb04, Func Offset: 0xc4
	// Line 625, Address: 0x1acb0c, Func Offset: 0xcc
	// Line 626, Address: 0x1acb10, Func Offset: 0xd0
	// Line 628, Address: 0x1acb48, Func Offset: 0x108
	// Line 629, Address: 0x1acb58, Func Offset: 0x118
	// Line 631, Address: 0x1acb60, Func Offset: 0x120
	// Line 632, Address: 0x1acb70, Func Offset: 0x130
	// Line 634, Address: 0x1acb78, Func Offset: 0x138
	// Line 635, Address: 0x1acb88, Func Offset: 0x148
	// Line 637, Address: 0x1acb90, Func Offset: 0x150
	// Line 640, Address: 0x1acba0, Func Offset: 0x160
	// Line 642, Address: 0x1acba8, Func Offset: 0x168
	// Line 645, Address: 0x1acbb0, Func Offset: 0x170
	// Line 646, Address: 0x1acbb8, Func Offset: 0x178
	// Line 649, Address: 0x1acbd4, Func Offset: 0x194
	// Line 650, Address: 0x1acbd8, Func Offset: 0x198
	// Func End, Address: 0x1acbf4, Func Offset: 0x1b4
}

// 
// Start address: 0x1acc00
void EnemyHilControl(sfObj* obj)
{
	EnemyHilWork* ew;
	// Line 654, Address: 0x1acc00, Func Offset: 0
	// Line 656, Address: 0x1acc10, Func Offset: 0x10
	// Line 662, Address: 0x1acc1c, Func Offset: 0x1c
	// Line 663, Address: 0x1acc24, Func Offset: 0x24
	// Line 664, Address: 0x1acc30, Func Offset: 0x30
	// Line 665, Address: 0x1acc44, Func Offset: 0x44
	// Line 667, Address: 0x1acc4c, Func Offset: 0x4c
	// Line 668, Address: 0x1acc50, Func Offset: 0x50
	// Line 669, Address: 0x1acc5c, Func Offset: 0x5c
	// Line 672, Address: 0x1acc60, Func Offset: 0x60
	// Line 673, Address: 0x1acc8c, Func Offset: 0x8c
	// Line 674, Address: 0x1acc90, Func Offset: 0x90
	// Line 675, Address: 0x1acc98, Func Offset: 0x98
	// Line 677, Address: 0x1acca0, Func Offset: 0xa0
	// Line 678, Address: 0x1acca8, Func Offset: 0xa8
	// Line 680, Address: 0x1accb0, Func Offset: 0xb0
	// Line 681, Address: 0x1accb8, Func Offset: 0xb8
	// Line 683, Address: 0x1accc0, Func Offset: 0xc0
	// Line 684, Address: 0x1accc8, Func Offset: 0xc8
	// Line 686, Address: 0x1accd0, Func Offset: 0xd0
	// Line 687, Address: 0x1accd8, Func Offset: 0xd8
	// Line 689, Address: 0x1acce0, Func Offset: 0xe0
	// Line 690, Address: 0x1acce8, Func Offset: 0xe8
	// Line 692, Address: 0x1accf0, Func Offset: 0xf0
	// Line 696, Address: 0x1accf8, Func Offset: 0xf8
	// Line 700, Address: 0x1acd00, Func Offset: 0x100
	// Func End, Address: 0x1acd14, Func Offset: 0x114
}

// 
// Start address: 0x1acd20
void EnemyHilControlInit(sfObj* obj)
{
	EnemyHilWork* ew;
	EnemyClHitResult* cres;
	float* pos;
	float* rot;
	float scale;
	float scale2;
	// Line 704, Address: 0x1acd20, Func Offset: 0
	// Line 710, Address: 0x1acd44, Func Offset: 0x24
	// Line 711, Address: 0x1acd50, Func Offset: 0x30
	// Line 712, Address: 0x1acd5c, Func Offset: 0x3c
	// Line 713, Address: 0x1acd64, Func Offset: 0x44
	// Line 719, Address: 0x1acd68, Func Offset: 0x48
	// Line 714, Address: 0x1acd6c, Func Offset: 0x4c
	// Line 715, Address: 0x1acd70, Func Offset: 0x50
	// Line 716, Address: 0x1acd74, Func Offset: 0x54
	// Line 717, Address: 0x1acd78, Func Offset: 0x58
	// Line 719, Address: 0x1acd7c, Func Offset: 0x5c
	// Line 720, Address: 0x1acd84, Func Offset: 0x64
	// Line 721, Address: 0x1acd90, Func Offset: 0x70
	// Line 722, Address: 0x1acd9c, Func Offset: 0x7c
	// Line 723, Address: 0x1acda8, Func Offset: 0x88
	// Line 724, Address: 0x1acdb4, Func Offset: 0x94
	// Line 725, Address: 0x1acdbc, Func Offset: 0x9c
	// Line 726, Address: 0x1acdc0, Func Offset: 0xa0
	// Line 725, Address: 0x1acdc4, Func Offset: 0xa4
	// Line 726, Address: 0x1acdc8, Func Offset: 0xa8
	// Line 724, Address: 0x1acdcc, Func Offset: 0xac
	// Line 726, Address: 0x1acdd0, Func Offset: 0xb0
	// Line 725, Address: 0x1acdd4, Func Offset: 0xb4
	// Line 726, Address: 0x1acdd8, Func Offset: 0xb8
	// Line 727, Address: 0x1acdf0, Func Offset: 0xd0
	// Line 732, Address: 0x1ace14, Func Offset: 0xf4
	// Line 733, Address: 0x1ace1c, Func Offset: 0xfc
	// Line 734, Address: 0x1ace28, Func Offset: 0x108
	// Line 737, Address: 0x1ace30, Func Offset: 0x110
	// Line 738, Address: 0x1ace3c, Func Offset: 0x11c
	// Line 739, Address: 0x1ace40, Func Offset: 0x120
	// Line 740, Address: 0x1ace48, Func Offset: 0x128
	// Line 741, Address: 0x1ace68, Func Offset: 0x148
	// Line 742, Address: 0x1ace7c, Func Offset: 0x15c
	// Line 743, Address: 0x1ace88, Func Offset: 0x168
	// Line 745, Address: 0x1acea0, Func Offset: 0x180
	// Func End, Address: 0x1acec8, Func Offset: 0x1a8
}

// 
// Start address: 0x1aced0
int common_control(sfObj* obj)
{
	EnemyHilWork* ew;
	float* pos;
	float* ppos;
	float vec[4];
	EnemyClHitResult* cres;
	EnemyMeasureResult mres;
	float dt;
	float bsize;
	float* epos;
	// Line 749, Address: 0x1aced0, Func Offset: 0
	// Line 757, Address: 0x1acef8, Func Offset: 0x28
	// Line 758, Address: 0x1acf04, Func Offset: 0x34
	// Line 759, Address: 0x1acf10, Func Offset: 0x40
	// Line 760, Address: 0x1acf18, Func Offset: 0x48
	// Line 761, Address: 0x1acf24, Func Offset: 0x54
	// Line 764, Address: 0x1acf30, Func Offset: 0x60
	// Line 761, Address: 0x1acf34, Func Offset: 0x64
	// Line 764, Address: 0x1acf38, Func Offset: 0x68
	// Line 765, Address: 0x1acf48, Func Offset: 0x78
	// Line 766, Address: 0x1acf5c, Func Offset: 0x8c
	// Line 767, Address: 0x1acf68, Func Offset: 0x98
	// Line 768, Address: 0x1acf7c, Func Offset: 0xac
	// Line 771, Address: 0x1acf80, Func Offset: 0xb0
	// Line 772, Address: 0x1acf94, Func Offset: 0xc4
	// Line 773, Address: 0x1acfc4, Func Offset: 0xf4
	// Line 774, Address: 0x1acfc8, Func Offset: 0xf8
	// Line 775, Address: 0x1acff0, Func Offset: 0x120
	// Line 776, Address: 0x1acffc, Func Offset: 0x12c
	// Line 777, Address: 0x1ad004, Func Offset: 0x134
	// Line 778, Address: 0x1ad008, Func Offset: 0x138
	// Line 782, Address: 0x1ad028, Func Offset: 0x158
	// Line 783, Address: 0x1ad03c, Func Offset: 0x16c
	// Line 784, Address: 0x1ad044, Func Offset: 0x174
	// Line 785, Address: 0x1ad048, Func Offset: 0x178
	// Line 787, Address: 0x1ad050, Func Offset: 0x180
	// Line 789, Address: 0x1ad078, Func Offset: 0x1a8
	// Line 790, Address: 0x1ad084, Func Offset: 0x1b4
	// Line 794, Address: 0x1ad08c, Func Offset: 0x1bc
	// Line 796, Address: 0x1ad090, Func Offset: 0x1c0
	// Line 798, Address: 0x1ad0b0, Func Offset: 0x1e0
	// Line 803, Address: 0x1ad124, Func Offset: 0x254
	// Line 804, Address: 0x1ad14c, Func Offset: 0x27c
	// Line 803, Address: 0x1ad150, Func Offset: 0x280
	// Line 804, Address: 0x1ad154, Func Offset: 0x284
	// Line 807, Address: 0x1ad188, Func Offset: 0x2b8
	// Line 808, Address: 0x1ad198, Func Offset: 0x2c8
	// Line 810, Address: 0x1ad1a0, Func Offset: 0x2d0
	// Line 811, Address: 0x1ad1b0, Func Offset: 0x2e0
	// Line 813, Address: 0x1ad1b8, Func Offset: 0x2e8
	// Line 814, Address: 0x1ad1c4, Func Offset: 0x2f4
	// Line 815, Address: 0x1ad1d0, Func Offset: 0x300
	// Line 817, Address: 0x1ad1d8, Func Offset: 0x308
	// Line 819, Address: 0x1ad1e8, Func Offset: 0x318
	// Line 820, Address: 0x1ad1f4, Func Offset: 0x324
	// Line 825, Address: 0x1ad26c, Func Offset: 0x39c
	// Line 826, Address: 0x1ad294, Func Offset: 0x3c4
	// Line 825, Address: 0x1ad298, Func Offset: 0x3c8
	// Line 826, Address: 0x1ad29c, Func Offset: 0x3cc
	// Line 829, Address: 0x1ad2d0, Func Offset: 0x400
	// Line 830, Address: 0x1ad2e0, Func Offset: 0x410
	// Line 832, Address: 0x1ad2e8, Func Offset: 0x418
	// Line 833, Address: 0x1ad2f8, Func Offset: 0x428
	// Line 835, Address: 0x1ad300, Func Offset: 0x430
	// Line 836, Address: 0x1ad30c, Func Offset: 0x43c
	// Line 837, Address: 0x1ad318, Func Offset: 0x448
	// Line 840, Address: 0x1ad320, Func Offset: 0x450
	// Line 844, Address: 0x1ad3a0, Func Offset: 0x4d0
	// Line 845, Address: 0x1ad3ac, Func Offset: 0x4dc
	// Line 847, Address: 0x1ad3b8, Func Offset: 0x4e8
	// Line 846, Address: 0x1ad3bc, Func Offset: 0x4ec
	// Line 847, Address: 0x1ad3c0, Func Offset: 0x4f0
	// Line 846, Address: 0x1ad3c4, Func Offset: 0x4f4
	// Line 847, Address: 0x1ad3c8, Func Offset: 0x4f8
	// Line 846, Address: 0x1ad3cc, Func Offset: 0x4fc
	// Line 847, Address: 0x1ad3d8, Func Offset: 0x508
	// Line 848, Address: 0x1ad3e8, Func Offset: 0x518
	// Line 850, Address: 0x1ad3f0, Func Offset: 0x520
	// Line 851, Address: 0x1ad3f8, Func Offset: 0x528
	// Line 855, Address: 0x1ad44c, Func Offset: 0x57c
	// Line 857, Address: 0x1ad470, Func Offset: 0x5a0
	// Line 856, Address: 0x1ad474, Func Offset: 0x5a4
	// Line 857, Address: 0x1ad478, Func Offset: 0x5a8
	// Line 856, Address: 0x1ad47c, Func Offset: 0x5ac
	// Line 857, Address: 0x1ad480, Func Offset: 0x5b0
	// Line 858, Address: 0x1ad488, Func Offset: 0x5b8
	// Line 859, Address: 0x1ad494, Func Offset: 0x5c4
	// Line 860, Address: 0x1ad4a0, Func Offset: 0x5d0
	// Line 863, Address: 0x1ad4a8, Func Offset: 0x5d8
	// Line 865, Address: 0x1ad4c4, Func Offset: 0x5f4
	// Line 872, Address: 0x1ad570, Func Offset: 0x6a0
	// Line 873, Address: 0x1ad578, Func Offset: 0x6a8
	// Line 877, Address: 0x1ad580, Func Offset: 0x6b0
	// Line 879, Address: 0x1ad5b4, Func Offset: 0x6e4
	// Line 880, Address: 0x1ad5cc, Func Offset: 0x6fc
	// Line 883, Address: 0x1ad600, Func Offset: 0x730
	// Line 884, Address: 0x1ad61c, Func Offset: 0x74c
	// Line 886, Address: 0x1ad620, Func Offset: 0x750
	// Line 887, Address: 0x1ad628, Func Offset: 0x758
	// Line 889, Address: 0x1ad62c, Func Offset: 0x75c
	// Line 890, Address: 0x1ad638, Func Offset: 0x768
	// Line 892, Address: 0x1ad63c, Func Offset: 0x76c
	// Line 893, Address: 0x1ad640, Func Offset: 0x770
	// Line 894, Address: 0x1ad648, Func Offset: 0x778
	// Func End, Address: 0x1ad674, Func Offset: 0x7a4
}

// 
// Start address: 0x1ad680
void common_move(sfObj* obj)
{
	EnemyHilWork* ew;
	float vec[4];
	float rot[4];
	float trot[4];
	float dt;
	float d;
	float speed;
	int f;
	// Line 898, Address: 0x1ad680, Func Offset: 0
	// Line 904, Address: 0x1ad6a0, Func Offset: 0x20
	// Line 905, Address: 0x1ad6a8, Func Offset: 0x28
	// Line 906, Address: 0x1ad6b4, Func Offset: 0x34
	// Line 907, Address: 0x1ad6b8, Func Offset: 0x38
	// Line 909, Address: 0x1ad6dc, Func Offset: 0x5c
	// Line 910, Address: 0x1ad6f4, Func Offset: 0x74
	// Line 912, Address: 0x1ad704, Func Offset: 0x84
	// Line 913, Address: 0x1ad710, Func Offset: 0x90
	// Line 916, Address: 0x1ad754, Func Offset: 0xd4
	// Line 920, Address: 0x1ad758, Func Offset: 0xd8
	// Line 921, Address: 0x1ad760, Func Offset: 0xe0
	// Line 922, Address: 0x1ad76c, Func Offset: 0xec
	// Line 921, Address: 0x1ad770, Func Offset: 0xf0
	// Line 922, Address: 0x1ad774, Func Offset: 0xf4
	// Line 921, Address: 0x1ad778, Func Offset: 0xf8
	// Line 922, Address: 0x1ad77c, Func Offset: 0xfc
	// Line 921, Address: 0x1ad784, Func Offset: 0x104
	// Line 922, Address: 0x1ad788, Func Offset: 0x108
	// Line 923, Address: 0x1ad7a4, Func Offset: 0x124
	// Line 924, Address: 0x1ad7a8, Func Offset: 0x128
	// Line 925, Address: 0x1ad7b4, Func Offset: 0x134
	// Line 926, Address: 0x1ad7c0, Func Offset: 0x140
	// Line 927, Address: 0x1ad7d0, Func Offset: 0x150
	// Line 928, Address: 0x1ad7e0, Func Offset: 0x160
	// Line 929, Address: 0x1ad7ec, Func Offset: 0x16c
	// Line 930, Address: 0x1ad7f8, Func Offset: 0x178
	// Line 931, Address: 0x1ad804, Func Offset: 0x184
	// Line 932, Address: 0x1ad80c, Func Offset: 0x18c
	// Line 933, Address: 0x1ad818, Func Offset: 0x198
	// Line 935, Address: 0x1ad828, Func Offset: 0x1a8
	// Line 937, Address: 0x1ad870, Func Offset: 0x1f0
	// Line 938, Address: 0x1ad88c, Func Offset: 0x20c
	// Line 939, Address: 0x1ad89c, Func Offset: 0x21c
	// Line 940, Address: 0x1ad8c0, Func Offset: 0x240
	// Line 941, Address: 0x1ad8c8, Func Offset: 0x248
	// Line 943, Address: 0x1ad8e8, Func Offset: 0x268
	// Line 944, Address: 0x1ad91c, Func Offset: 0x29c
	// Line 945, Address: 0x1ad928, Func Offset: 0x2a8
	// Func End, Address: 0x1ad94c, Func Offset: 0x2cc
}

// 
// Start address: 0x1ad950
void EnemyHilControlWander(sfObj* obj)
{
	EnemyHilWork* ew;
	EnemySenseResult sres;
	// Line 949, Address: 0x1ad950, Func Offset: 0
	// Line 954, Address: 0x1ad960, Func Offset: 0x10
	// Line 958, Address: 0x1ad970, Func Offset: 0x20
	// Line 959, Address: 0x1ad978, Func Offset: 0x28
	// Line 960, Address: 0x1ad980, Func Offset: 0x30
	// Line 961, Address: 0x1ad9a4, Func Offset: 0x54
	// Line 962, Address: 0x1ad9a8, Func Offset: 0x58
	// Line 964, Address: 0x1ad9c8, Func Offset: 0x78
	// Line 965, Address: 0x1ad9d0, Func Offset: 0x80
	// Line 966, Address: 0x1ad9d8, Func Offset: 0x88
	// Line 968, Address: 0x1ad9e0, Func Offset: 0x90
	// Line 969, Address: 0x1ada04, Func Offset: 0xb4
	// Line 970, Address: 0x1ada0c, Func Offset: 0xbc
	// Line 971, Address: 0x1ada18, Func Offset: 0xc8
	// Line 972, Address: 0x1ada2c, Func Offset: 0xdc
	// Line 973, Address: 0x1ada58, Func Offset: 0x108
	// Line 974, Address: 0x1ada64, Func Offset: 0x114
	// Line 975, Address: 0x1ada70, Func Offset: 0x120
	// Line 974, Address: 0x1ada74, Func Offset: 0x124
	// Line 975, Address: 0x1ada90, Func Offset: 0x140
	// Line 976, Address: 0x1ada98, Func Offset: 0x148
	// Line 980, Address: 0x1adaa0, Func Offset: 0x150
	// Line 982, Address: 0x1adad4, Func Offset: 0x184
	// Line 983, Address: 0x1adadc, Func Offset: 0x18c
	// Line 984, Address: 0x1adae4, Func Offset: 0x194
	// Line 985, Address: 0x1adaf0, Func Offset: 0x1a0
	// Line 986, Address: 0x1adaf4, Func Offset: 0x1a4
	// Line 987, Address: 0x1adaf8, Func Offset: 0x1a8
	// Line 989, Address: 0x1adafc, Func Offset: 0x1ac
	// Line 991, Address: 0x1adb1c, Func Offset: 0x1cc
	// Line 992, Address: 0x1adb28, Func Offset: 0x1d8
	// Line 993, Address: 0x1adb2c, Func Offset: 0x1dc
	// Line 994, Address: 0x1adb30, Func Offset: 0x1e0
	// Line 995, Address: 0x1adb38, Func Offset: 0x1e8
	// Line 996, Address: 0x1adb40, Func Offset: 0x1f0
	// Line 998, Address: 0x1adb48, Func Offset: 0x1f8
	// Line 1001, Address: 0x1adb50, Func Offset: 0x200
	// Line 1003, Address: 0x1adb58, Func Offset: 0x208
	// Line 1004, Address: 0x1adb74, Func Offset: 0x224
	// Line 1005, Address: 0x1adb7c, Func Offset: 0x22c
	// Line 1006, Address: 0x1adb80, Func Offset: 0x230
	// Func End, Address: 0x1adb94, Func Offset: 0x244
}

// 
// Start address: 0x1adba0
void EnemyHilControlApproach(sfObj* obj)
{
	EnemyHilWork* ew;
	float vec[4];
	float dir;
	float dt;
	EnemySenseResult sres;
	// Line 1010, Address: 0x1adba0, Func Offset: 0
	// Line 1016, Address: 0x1adbb0, Func Offset: 0x10
	// Line 1020, Address: 0x1adbc0, Func Offset: 0x20
	// Line 1021, Address: 0x1adbc8, Func Offset: 0x28
	// Line 1022, Address: 0x1adbd0, Func Offset: 0x30
	// Line 1023, Address: 0x1adbe0, Func Offset: 0x40
	// Line 1024, Address: 0x1adbe8, Func Offset: 0x48
	// Line 1025, Address: 0x1adbf4, Func Offset: 0x54
	// Line 1026, Address: 0x1adbfc, Func Offset: 0x5c
	// Line 1027, Address: 0x1adc08, Func Offset: 0x68
	// Line 1029, Address: 0x1adc28, Func Offset: 0x88
	// Line 1030, Address: 0x1adc30, Func Offset: 0x90
	// Line 1031, Address: 0x1adc38, Func Offset: 0x98
	// Line 1032, Address: 0x1adc44, Func Offset: 0xa4
	// Line 1034, Address: 0x1adc48, Func Offset: 0xa8
	// Line 1035, Address: 0x1adc54, Func Offset: 0xb4
	// Line 1036, Address: 0x1adc58, Func Offset: 0xb8
	// Line 1037, Address: 0x1adc74, Func Offset: 0xd4
	// Line 1038, Address: 0x1adc7c, Func Offset: 0xdc
	// Line 1039, Address: 0x1adc84, Func Offset: 0xe4
	// Line 1040, Address: 0x1adc88, Func Offset: 0xe8
	// Line 1041, Address: 0x1adcac, Func Offset: 0x10c
	// Line 1042, Address: 0x1adcc0, Func Offset: 0x120
	// Line 1043, Address: 0x1adcdc, Func Offset: 0x13c
	// Line 1044, Address: 0x1adce4, Func Offset: 0x144
	// Func End, Address: 0x1adcfc, Func Offset: 0x15c
}

// 
// Start address: 0x1add00
void EnemyHilControlEscape(sfObj* obj)
{
	EnemyHilWork* ew;
	float vec[4];
	float dir;
	float dt;
	// Line 1048, Address: 0x1add00, Func Offset: 0
	// Line 1053, Address: 0x1add18, Func Offset: 0x18
	// Line 1057, Address: 0x1add28, Func Offset: 0x28
	// Line 1058, Address: 0x1add30, Func Offset: 0x30
	// Line 1059, Address: 0x1add3c, Func Offset: 0x3c
	// Line 1060, Address: 0x1add4c, Func Offset: 0x4c
	// Line 1061, Address: 0x1add54, Func Offset: 0x54
	// Line 1062, Address: 0x1add60, Func Offset: 0x60
	// Line 1063, Address: 0x1add68, Func Offset: 0x68
	// Line 1064, Address: 0x1add74, Func Offset: 0x74
	// Line 1066, Address: 0x1add94, Func Offset: 0x94
	// Line 1067, Address: 0x1add9c, Func Offset: 0x9c
	// Line 1068, Address: 0x1adda8, Func Offset: 0xa8
	// Line 1069, Address: 0x1addb4, Func Offset: 0xb4
	// Line 1070, Address: 0x1addb8, Func Offset: 0xb8
	// Line 1071, Address: 0x1addbc, Func Offset: 0xbc
	// Line 1072, Address: 0x1addc8, Func Offset: 0xc8
	// Line 1071, Address: 0x1addcc, Func Offset: 0xcc
	// Line 1072, Address: 0x1adddc, Func Offset: 0xdc
	// Line 1073, Address: 0x1adde4, Func Offset: 0xe4
	// Line 1074, Address: 0x1adde8, Func Offset: 0xe8
	// Line 1076, Address: 0x1ade14, Func Offset: 0x114
	// Line 1077, Address: 0x1ade28, Func Offset: 0x128
	// Line 1078, Address: 0x1ade44, Func Offset: 0x144
	// Line 1079, Address: 0x1ade4c, Func Offset: 0x14c
	// Line 1080, Address: 0x1ade68, Func Offset: 0x168
	// Line 1081, Address: 0x1ade74, Func Offset: 0x174
	// Line 1082, Address: 0x1ade78, Func Offset: 0x178
	// Func End, Address: 0x1ade94, Func Offset: 0x194
}

// 
// Start address: 0x1adea0
void EnemyHilControlFall(sfObj* obj)
{
	EnemyHilWork* ew;
	float rot[4];
	float quat[4];
	float pos[4];
	float vec[4];
	float vec2[4];
	float nom[4];
	float dt;
	float d;
	float scale;
	EnemyClHitResult* cres;
	// Line 1086, Address: 0x1adea0, Func Offset: 0
	// Line 1092, Address: 0x1adebc, Func Offset: 0x1c
	// Line 1093, Address: 0x1adec8, Func Offset: 0x28
	// Line 1094, Address: 0x1aded4, Func Offset: 0x34
	// Line 1095, Address: 0x1adee0, Func Offset: 0x40
	// Line 1096, Address: 0x1adeec, Func Offset: 0x4c
	// Line 1097, Address: 0x1adef8, Func Offset: 0x58
	// Line 1098, Address: 0x1adf24, Func Offset: 0x84
	// Line 1099, Address: 0x1adf28, Func Offset: 0x88
	// Line 1100, Address: 0x1adf34, Func Offset: 0x94
	// Line 1101, Address: 0x1adf40, Func Offset: 0xa0
	// Line 1102, Address: 0x1adf4c, Func Offset: 0xac
	// Line 1103, Address: 0x1adf78, Func Offset: 0xd8
	// Line 1104, Address: 0x1adf88, Func Offset: 0xe8
	// Line 1105, Address: 0x1adf94, Func Offset: 0xf4
	// Line 1106, Address: 0x1adf98, Func Offset: 0xf8
	// Line 1108, Address: 0x1adf9c, Func Offset: 0xfc
	// Line 1109, Address: 0x1adfa8, Func Offset: 0x108
	// Line 1111, Address: 0x1adfcc, Func Offset: 0x12c
	// Line 1112, Address: 0x1adfd4, Func Offset: 0x134
	// Line 1113, Address: 0x1adff8, Func Offset: 0x158
	// Line 1114, Address: 0x1ae00c, Func Offset: 0x16c
	// Line 1115, Address: 0x1ae01c, Func Offset: 0x17c
	// Line 1116, Address: 0x1ae028, Func Offset: 0x188
	// Line 1117, Address: 0x1ae030, Func Offset: 0x190
	// Line 1118, Address: 0x1ae038, Func Offset: 0x198
	// Line 1119, Address: 0x1ae03c, Func Offset: 0x19c
	// Line 1120, Address: 0x1ae040, Func Offset: 0x1a0
	// Line 1122, Address: 0x1ae048, Func Offset: 0x1a8
	// Line 1123, Address: 0x1ae058, Func Offset: 0x1b8
	// Line 1124, Address: 0x1ae060, Func Offset: 0x1c0
	// Line 1125, Address: 0x1ae06c, Func Offset: 0x1cc
	// Line 1126, Address: 0x1ae078, Func Offset: 0x1d8
	// Line 1127, Address: 0x1ae0a4, Func Offset: 0x204
	// Line 1128, Address: 0x1ae0b0, Func Offset: 0x210
	// Line 1129, Address: 0x1ae0b8, Func Offset: 0x218
	// Line 1130, Address: 0x1ae0bc, Func Offset: 0x21c
	// Line 1132, Address: 0x1ae0c0, Func Offset: 0x220
	// Line 1133, Address: 0x1ae0cc, Func Offset: 0x22c
	// Line 1134, Address: 0x1ae0d4, Func Offset: 0x234
	// Line 1136, Address: 0x1ae0dc, Func Offset: 0x23c
	// Line 1137, Address: 0x1ae0e0, Func Offset: 0x240
	// Line 1139, Address: 0x1ae0f4, Func Offset: 0x254
	// Line 1138, Address: 0x1ae0fc, Func Offset: 0x25c
	// Line 1139, Address: 0x1ae100, Func Offset: 0x260
	// Line 1140, Address: 0x1ae104, Func Offset: 0x264
	// Line 1139, Address: 0x1ae108, Func Offset: 0x268
	// Line 1140, Address: 0x1ae10c, Func Offset: 0x26c
	// Line 1141, Address: 0x1ae120, Func Offset: 0x280
	// Line 1142, Address: 0x1ae124, Func Offset: 0x284
	// Line 1143, Address: 0x1ae12c, Func Offset: 0x28c
	// Line 1144, Address: 0x1ae138, Func Offset: 0x298
	// Line 1145, Address: 0x1ae140, Func Offset: 0x2a0
	// Line 1147, Address: 0x1ae168, Func Offset: 0x2c8
	// Line 1150, Address: 0x1ae174, Func Offset: 0x2d4
	// Line 1151, Address: 0x1ae178, Func Offset: 0x2d8
	// Line 1152, Address: 0x1ae18c, Func Offset: 0x2ec
	// Line 1153, Address: 0x1ae19c, Func Offset: 0x2fc
	// Line 1152, Address: 0x1ae1a0, Func Offset: 0x300
	// Line 1153, Address: 0x1ae1a4, Func Offset: 0x304
	// Line 1154, Address: 0x1ae1b0, Func Offset: 0x310
	// Line 1155, Address: 0x1ae1b4, Func Offset: 0x314
	// Line 1156, Address: 0x1ae1c0, Func Offset: 0x320
	// Line 1157, Address: 0x1ae1dc, Func Offset: 0x33c
	// Line 1160, Address: 0x1ae1e8, Func Offset: 0x348
	// Line 1157, Address: 0x1ae1f0, Func Offset: 0x350
	// Line 1158, Address: 0x1ae1f8, Func Offset: 0x358
	// Line 1160, Address: 0x1ae204, Func Offset: 0x364
	// Line 1162, Address: 0x1ae20c, Func Offset: 0x36c
	// Line 1163, Address: 0x1ae210, Func Offset: 0x370
	// Line 1164, Address: 0x1ae220, Func Offset: 0x380
	// Line 1165, Address: 0x1ae244, Func Offset: 0x3a4
	// Line 1166, Address: 0x1ae280, Func Offset: 0x3e0
	// Line 1167, Address: 0x1ae29c, Func Offset: 0x3fc
	// Line 1168, Address: 0x1ae2a8, Func Offset: 0x408
	// Line 1169, Address: 0x1ae2c0, Func Offset: 0x420
	// Line 1170, Address: 0x1ae2c8, Func Offset: 0x428
	// Line 1171, Address: 0x1ae2ec, Func Offset: 0x44c
	// Line 1170, Address: 0x1ae2f0, Func Offset: 0x450
	// Line 1171, Address: 0x1ae2f4, Func Offset: 0x454
	// Line 1170, Address: 0x1ae2fc, Func Offset: 0x45c
	// Line 1171, Address: 0x1ae300, Func Offset: 0x460
	// Line 1172, Address: 0x1ae314, Func Offset: 0x474
	// Line 1173, Address: 0x1ae340, Func Offset: 0x4a0
	// Line 1174, Address: 0x1ae360, Func Offset: 0x4c0
	// Line 1175, Address: 0x1ae390, Func Offset: 0x4f0
	// Line 1176, Address: 0x1ae3a0, Func Offset: 0x500
	// Line 1177, Address: 0x1ae3c0, Func Offset: 0x520
	// Line 1178, Address: 0x1ae3c8, Func Offset: 0x528
	// Line 1179, Address: 0x1ae3d4, Func Offset: 0x534
	// Line 1180, Address: 0x1ae3e0, Func Offset: 0x540
	// Line 1182, Address: 0x1ae424, Func Offset: 0x584
	// Line 1183, Address: 0x1ae438, Func Offset: 0x598
	// Line 1184, Address: 0x1ae43c, Func Offset: 0x59c
	// Line 1185, Address: 0x1ae448, Func Offset: 0x5a8
	// Line 1188, Address: 0x1ae450, Func Offset: 0x5b0
	// Line 1191, Address: 0x1ae4bc, Func Offset: 0x61c
	// Line 1193, Address: 0x1ae4c0, Func Offset: 0x620
	// Line 1194, Address: 0x1ae4d4, Func Offset: 0x634
	// Line 1195, Address: 0x1ae4dc, Func Offset: 0x63c
	// Line 1196, Address: 0x1ae4e0, Func Offset: 0x640
	// Line 1197, Address: 0x1ae4ec, Func Offset: 0x64c
	// Line 1198, Address: 0x1ae4f4, Func Offset: 0x654
	// Line 1201, Address: 0x1ae4fc, Func Offset: 0x65c
	// Line 1202, Address: 0x1ae500, Func Offset: 0x660
	// Line 1203, Address: 0x1ae508, Func Offset: 0x668
	// Line 1204, Address: 0x1ae52c, Func Offset: 0x68c
	// Line 1205, Address: 0x1ae538, Func Offset: 0x698
	// Line 1206, Address: 0x1ae548, Func Offset: 0x6a8
	// Line 1207, Address: 0x1ae558, Func Offset: 0x6b8
	// Line 1208, Address: 0x1ae56c, Func Offset: 0x6cc
	// Line 1209, Address: 0x1ae588, Func Offset: 0x6e8
	// Line 1210, Address: 0x1ae5c4, Func Offset: 0x724
	// Line 1211, Address: 0x1ae5e8, Func Offset: 0x748
	// Line 1212, Address: 0x1ae60c, Func Offset: 0x76c
	// Line 1213, Address: 0x1ae618, Func Offset: 0x778
	// Line 1214, Address: 0x1ae624, Func Offset: 0x784
	// Line 1215, Address: 0x1ae630, Func Offset: 0x790
	// Line 1216, Address: 0x1ae638, Func Offset: 0x798
	// Line 1220, Address: 0x1ae640, Func Offset: 0x7a0
	// Line 1222, Address: 0x1ae648, Func Offset: 0x7a8
	// Line 1225, Address: 0x1ae658, Func Offset: 0x7b8
	// Line 1226, Address: 0x1ae668, Func Offset: 0x7c8
	// Line 1227, Address: 0x1ae670, Func Offset: 0x7d0
	// Line 1228, Address: 0x1ae68c, Func Offset: 0x7ec
	// Line 1229, Address: 0x1ae6a0, Func Offset: 0x800
	// Line 1228, Address: 0x1ae6a4, Func Offset: 0x804
	// Line 1229, Address: 0x1ae6a8, Func Offset: 0x808
	// Line 1228, Address: 0x1ae6ac, Func Offset: 0x80c
	// Line 1229, Address: 0x1ae6b4, Func Offset: 0x814
	// Line 1230, Address: 0x1ae6bc, Func Offset: 0x81c
	// Line 1231, Address: 0x1ae6c8, Func Offset: 0x828
	// Line 1232, Address: 0x1ae6d4, Func Offset: 0x834
	// Line 1231, Address: 0x1ae6d8, Func Offset: 0x838
	// Line 1232, Address: 0x1ae6e4, Func Offset: 0x844
	// Line 1235, Address: 0x1ae6ec, Func Offset: 0x84c
	// Line 1236, Address: 0x1ae6f4, Func Offset: 0x854
	// Line 1237, Address: 0x1ae6f8, Func Offset: 0x858
	// Line 1240, Address: 0x1ae708, Func Offset: 0x868
	// Line 1241, Address: 0x1ae724, Func Offset: 0x884
	// Line 1242, Address: 0x1ae730, Func Offset: 0x890
	// Line 1244, Address: 0x1ae738, Func Offset: 0x898
	// Line 1246, Address: 0x1ae740, Func Offset: 0x8a0
	// Line 1247, Address: 0x1ae750, Func Offset: 0x8b0
	// Line 1248, Address: 0x1ae758, Func Offset: 0x8b8
	// Line 1249, Address: 0x1ae760, Func Offset: 0x8c0
	// Line 1250, Address: 0x1ae768, Func Offset: 0x8c8
	// Line 1255, Address: 0x1ae76c, Func Offset: 0x8cc
	// Line 1251, Address: 0x1ae770, Func Offset: 0x8d0
	// Line 1255, Address: 0x1ae774, Func Offset: 0x8d4
	// Line 1252, Address: 0x1ae778, Func Offset: 0x8d8
	// Line 1253, Address: 0x1ae77c, Func Offset: 0x8dc
	// Line 1255, Address: 0x1ae780, Func Offset: 0x8e0
	// Line 1256, Address: 0x1ae788, Func Offset: 0x8e8
	// Line 1257, Address: 0x1ae794, Func Offset: 0x8f4
	// Line 1258, Address: 0x1ae7a0, Func Offset: 0x900
	// Line 1259, Address: 0x1ae7c0, Func Offset: 0x920
	// Line 1260, Address: 0x1ae7d4, Func Offset: 0x934
	// Line 1261, Address: 0x1ae7e0, Func Offset: 0x940
	// Line 1264, Address: 0x1ae7f8, Func Offset: 0x958
	// Line 1266, Address: 0x1ae800, Func Offset: 0x960
	// Line 1269, Address: 0x1ae810, Func Offset: 0x970
	// Line 1270, Address: 0x1ae82c, Func Offset: 0x98c
	// Line 1271, Address: 0x1ae838, Func Offset: 0x998
	// Line 1272, Address: 0x1ae83c, Func Offset: 0x99c
	// Line 1273, Address: 0x1ae848, Func Offset: 0x9a8
	// Line 1274, Address: 0x1ae850, Func Offset: 0x9b0
	// Line 1278, Address: 0x1ae858, Func Offset: 0x9b8
	// Line 1279, Address: 0x1ae860, Func Offset: 0x9c0
	// Func End, Address: 0x1ae880, Func Offset: 0x9e0
}

// 
// Start address: 0x1ae880
void EnemyHilControlFall2(sfObj* obj)
{
	EnemyHilWork* ew;
	float* pos;
	float rot[4];
	float trot[4];
	float vec[4];
	float dt;
	float scale;
	EnemyMeasureResult mres;
	// Line 1283, Address: 0x1ae880, Func Offset: 0
	// Line 1290, Address: 0x1ae89c, Func Offset: 0x1c
	// Line 1291, Address: 0x1ae8a8, Func Offset: 0x28
	// Line 1292, Address: 0x1ae8b4, Func Offset: 0x34
	// Line 1293, Address: 0x1ae8c0, Func Offset: 0x40
	// Line 1294, Address: 0x1ae8cc, Func Offset: 0x4c
	// Line 1295, Address: 0x1ae8d8, Func Offset: 0x58
	// Line 1296, Address: 0x1ae8fc, Func Offset: 0x7c
	// Line 1297, Address: 0x1ae900, Func Offset: 0x80
	// Line 1298, Address: 0x1ae90c, Func Offset: 0x8c
	// Line 1299, Address: 0x1ae914, Func Offset: 0x94
	// Line 1300, Address: 0x1ae920, Func Offset: 0xa0
	// Line 1301, Address: 0x1ae92c, Func Offset: 0xac
	// Line 1302, Address: 0x1ae934, Func Offset: 0xb4
	// Line 1303, Address: 0x1ae940, Func Offset: 0xc0
	// Line 1304, Address: 0x1ae94c, Func Offset: 0xcc
	// Line 1305, Address: 0x1ae958, Func Offset: 0xd8
	// Line 1306, Address: 0x1ae960, Func Offset: 0xe0
	// Line 1307, Address: 0x1ae964, Func Offset: 0xe4
	// Line 1310, Address: 0x1ae968, Func Offset: 0xe8
	// Line 1311, Address: 0x1ae978, Func Offset: 0xf8
	// Line 1312, Address: 0x1ae984, Func Offset: 0x104
	// Line 1313, Address: 0x1ae98c, Func Offset: 0x10c
	// Line 1315, Address: 0x1ae994, Func Offset: 0x114
	// Line 1316, Address: 0x1ae998, Func Offset: 0x118
	// Line 1317, Address: 0x1ae9ac, Func Offset: 0x12c
	// Line 1319, Address: 0x1ae9d0, Func Offset: 0x150
	// Line 1320, Address: 0x1ae9d8, Func Offset: 0x158
	// Line 1322, Address: 0x1ae9e0, Func Offset: 0x160
	// Line 1323, Address: 0x1ae9e8, Func Offset: 0x168
	// Line 1325, Address: 0x1ae9f0, Func Offset: 0x170
	// Line 1326, Address: 0x1aea00, Func Offset: 0x180
	// Line 1327, Address: 0x1aea20, Func Offset: 0x1a0
	// Line 1328, Address: 0x1aea2c, Func Offset: 0x1ac
	// Line 1329, Address: 0x1aea38, Func Offset: 0x1b8
	// Line 1332, Address: 0x1aeab0, Func Offset: 0x230
	// Line 1334, Address: 0x1aeab8, Func Offset: 0x238
	// Line 1333, Address: 0x1aeabc, Func Offset: 0x23c
	// Line 1334, Address: 0x1aeac0, Func Offset: 0x240
	// Line 1333, Address: 0x1aeac4, Func Offset: 0x244
	// Line 1334, Address: 0x1aead0, Func Offset: 0x250
	// Line 1335, Address: 0x1aead8, Func Offset: 0x258
	// Line 1336, Address: 0x1aeae0, Func Offset: 0x260
	// Line 1337, Address: 0x1aeaec, Func Offset: 0x26c
	// Line 1338, Address: 0x1aeaf8, Func Offset: 0x278
	// Line 1339, Address: 0x1aeb04, Func Offset: 0x284
	// Line 1340, Address: 0x1aeb10, Func Offset: 0x290
	// Line 1341, Address: 0x1aeb18, Func Offset: 0x298
	// Line 1342, Address: 0x1aeb20, Func Offset: 0x2a0
	// Line 1343, Address: 0x1aeb28, Func Offset: 0x2a8
	// Line 1344, Address: 0x1aeb34, Func Offset: 0x2b4
	// Line 1345, Address: 0x1aeb40, Func Offset: 0x2c0
	// Line 1346, Address: 0x1aeb4c, Func Offset: 0x2cc
	// Line 1347, Address: 0x1aeb6c, Func Offset: 0x2ec
	// Line 1348, Address: 0x1aeb80, Func Offset: 0x300
	// Line 1349, Address: 0x1aeb88, Func Offset: 0x308
	// Line 1354, Address: 0x1aeba0, Func Offset: 0x320
	// Func End, Address: 0x1aebc0, Func Offset: 0x340
}

// 
// Start address: 0x1aebc0
void EnemyHilControlCrush(sfObj* obj)
{
	EnemyHilWork* ew;
	float* pos;
	float tpos[4];
	float vec[4];
	float s;
	// Line 1358, Address: 0x1aebc0, Func Offset: 0
	// Line 1363, Address: 0x1aebd8, Func Offset: 0x18
	// Line 1364, Address: 0x1aebe4, Func Offset: 0x24
	// Line 1365, Address: 0x1aebf0, Func Offset: 0x30
	// Line 1366, Address: 0x1aec14, Func Offset: 0x54
	// Line 1367, Address: 0x1aec18, Func Offset: 0x58
	// Line 1368, Address: 0x1aec24, Func Offset: 0x64
	// Line 1369, Address: 0x1aec38, Func Offset: 0x78
	// Line 1370, Address: 0x1aec40, Func Offset: 0x80
	// Line 1371, Address: 0x1aec48, Func Offset: 0x88
	// Line 1372, Address: 0x1aec50, Func Offset: 0x90
	// Line 1373, Address: 0x1aec5c, Func Offset: 0x9c
	// Line 1374, Address: 0x1aec68, Func Offset: 0xa8
	// Line 1375, Address: 0x1aec74, Func Offset: 0xb4
	// Line 1376, Address: 0x1aec7c, Func Offset: 0xbc
	// Line 1377, Address: 0x1aec88, Func Offset: 0xc8
	// Line 1378, Address: 0x1aec90, Func Offset: 0xd0
	// Line 1380, Address: 0x1aec94, Func Offset: 0xd4
	// Line 1381, Address: 0x1aeca0, Func Offset: 0xe0
	// Line 1380, Address: 0x1aeca4, Func Offset: 0xe4
	// Line 1381, Address: 0x1aecb4, Func Offset: 0xf4
	// Line 1382, Address: 0x1aecc0, Func Offset: 0x100
	// Line 1383, Address: 0x1aeccc, Func Offset: 0x10c
	// Line 1382, Address: 0x1aecd0, Func Offset: 0x110
	// Line 1383, Address: 0x1aecdc, Func Offset: 0x11c
	// Line 1382, Address: 0x1aecf0, Func Offset: 0x130
	// Line 1384, Address: 0x1aecf4, Func Offset: 0x134
	// Line 1385, Address: 0x1aed08, Func Offset: 0x148
	// Line 1386, Address: 0x1aed24, Func Offset: 0x164
	// Line 1388, Address: 0x1aed28, Func Offset: 0x168
	// Line 1387, Address: 0x1aed2c, Func Offset: 0x16c
	// Line 1388, Address: 0x1aed30, Func Offset: 0x170
	// Line 1389, Address: 0x1aed44, Func Offset: 0x184
	// Line 1391, Address: 0x1aed68, Func Offset: 0x1a8
	// Line 1393, Address: 0x1aed90, Func Offset: 0x1d0
	// Line 1391, Address: 0x1aed94, Func Offset: 0x1d4
	// Line 1393, Address: 0x1aed98, Func Offset: 0x1d8
	// Line 1394, Address: 0x1aeda4, Func Offset: 0x1e4
	// Line 1396, Address: 0x1aedb0, Func Offset: 0x1f0
	// Line 1398, Address: 0x1aedc0, Func Offset: 0x200
	// Line 1399, Address: 0x1aedd4, Func Offset: 0x214
	// Line 1400, Address: 0x1aeddc, Func Offset: 0x21c
	// Line 1401, Address: 0x1aede0, Func Offset: 0x220
	// Line 1403, Address: 0x1aee14, Func Offset: 0x254
	// Line 1404, Address: 0x1aee18, Func Offset: 0x258
	// Line 1405, Address: 0x1aee20, Func Offset: 0x260
	// Line 1406, Address: 0x1aee28, Func Offset: 0x268
	// Line 1407, Address: 0x1aee50, Func Offset: 0x290
	// Line 1408, Address: 0x1aee6c, Func Offset: 0x2ac
	// Line 1409, Address: 0x1aee78, Func Offset: 0x2b8
	// Line 1410, Address: 0x1aee90, Func Offset: 0x2d0
	// Line 1411, Address: 0x1aeeb8, Func Offset: 0x2f8
	// Line 1412, Address: 0x1aeed8, Func Offset: 0x318
	// Line 1413, Address: 0x1aeef0, Func Offset: 0x330
	// Line 1418, Address: 0x1aeef8, Func Offset: 0x338
	// Line 1419, Address: 0x1aef00, Func Offset: 0x340
	// Func End, Address: 0x1aef1c, Func Offset: 0x35c
}

// 
// Start address: 0x1aef20
void EnemyHilControlDead()
{
	// Line 1425, Address: 0x1aef20, Func Offset: 0
	// Func End, Address: 0x1aef28, Func Offset: 0x8
}

// 
// Start address: 0x1aef30
void EnemyHilSkeletonControl(sfObj* obj)
{
	EnemyHilWork* ew;
	float ppos[4];
	float vec[4];
	float uvec[4];
	float rot[4];
	float rrot[4];
	float quat[4];
	sgBone* bone;
	sgBone* pbone;
	float d;
	float ang;
	float pang;
	float dist;
	float lim;
	float viscosity;
	float size;
	int i;
	// Line 1429, Address: 0x1aef30, Func Offset: 0
	// Line 1437, Address: 0x1aef60, Func Offset: 0x30
	// Line 1438, Address: 0x1aef70, Func Offset: 0x40
	// Line 1439, Address: 0x1aef7c, Func Offset: 0x4c
	// Line 1440, Address: 0x1aef88, Func Offset: 0x58
	// Line 1447, Address: 0x1aef94, Func Offset: 0x64
	// Line 1448, Address: 0x1aefa0, Func Offset: 0x70
	// Line 1450, Address: 0x1aefac, Func Offset: 0x7c
	// Line 1453, Address: 0x1aefc8, Func Offset: 0x98
	// Line 1451, Address: 0x1aefcc, Func Offset: 0x9c
	// Line 1453, Address: 0x1aefd0, Func Offset: 0xa0
	// Line 1454, Address: 0x1aefdc, Func Offset: 0xac
	// Line 1455, Address: 0x1aefe8, Func Offset: 0xb8
	// Line 1456, Address: 0x1aefec, Func Offset: 0xbc
	// Line 1455, Address: 0x1aeff0, Func Offset: 0xc0
	// Line 1456, Address: 0x1aeff8, Func Offset: 0xc8
	// Line 1455, Address: 0x1aeffc, Func Offset: 0xcc
	// Line 1456, Address: 0x1af000, Func Offset: 0xd0
	// Line 1455, Address: 0x1af004, Func Offset: 0xd4
	// Line 1456, Address: 0x1af008, Func Offset: 0xd8
	// Line 1455, Address: 0x1af00c, Func Offset: 0xdc
	// Line 1457, Address: 0x1af010, Func Offset: 0xe0
	// Line 1458, Address: 0x1af018, Func Offset: 0xe8
	// Line 1459, Address: 0x1af01c, Func Offset: 0xec
	// Line 1460, Address: 0x1af028, Func Offset: 0xf8
	// Line 1461, Address: 0x1af050, Func Offset: 0x120
	// Line 1462, Address: 0x1af060, Func Offset: 0x130
	// Line 1463, Address: 0x1af068, Func Offset: 0x138
	// Line 1464, Address: 0x1af07c, Func Offset: 0x14c
	// Line 1466, Address: 0x1af088, Func Offset: 0x158
	// Line 1467, Address: 0x1af094, Func Offset: 0x164
	// Line 1468, Address: 0x1af0b8, Func Offset: 0x188
	// Line 1469, Address: 0x1af0c0, Func Offset: 0x190
	// Line 1468, Address: 0x1af0cc, Func Offset: 0x19c
	// Line 1469, Address: 0x1af0dc, Func Offset: 0x1ac
	// Line 1470, Address: 0x1af0e4, Func Offset: 0x1b4
	// Line 1471, Address: 0x1af104, Func Offset: 0x1d4
	// Line 1472, Address: 0x1af148, Func Offset: 0x218
	// Line 1473, Address: 0x1af154, Func Offset: 0x224
	// Line 1474, Address: 0x1af16c, Func Offset: 0x23c
	// Line 1476, Address: 0x1af180, Func Offset: 0x250
	// Line 1477, Address: 0x1af188, Func Offset: 0x258
	// Line 1478, Address: 0x1af194, Func Offset: 0x264
	// Line 1479, Address: 0x1af1a4, Func Offset: 0x274
	// Line 1482, Address: 0x1af1b0, Func Offset: 0x280
	// Line 1481, Address: 0x1af1b8, Func Offset: 0x288
	// Line 1482, Address: 0x1af1bc, Func Offset: 0x28c
	// Line 1484, Address: 0x1af1cc, Func Offset: 0x29c
	// Line 1503, Address: 0x1af1dc, Func Offset: 0x2ac
	// Func End, Address: 0x1af214, Func Offset: 0x2e4
}

// 
// Start address: 0x1af220
void EnemyHilMucusControl(sfObj* obj)
{
	EnemyHilWork* ew;
	EnemyHilMucus* pm;
	float vec[4];
	int i;
	float d;
	float dt;
	// Line 1507, Address: 0x1af220, Func Offset: 0
	// Line 1513, Address: 0x1af234, Func Offset: 0x14
	// Line 1514, Address: 0x1af23c, Func Offset: 0x1c
	// Line 1515, Address: 0x1af248, Func Offset: 0x28
	// Line 1517, Address: 0x1af250, Func Offset: 0x30
	// Line 1516, Address: 0x1af254, Func Offset: 0x34
	// Line 1517, Address: 0x1af258, Func Offset: 0x38
	// Line 1518, Address: 0x1af26c, Func Offset: 0x4c
	// Line 1519, Address: 0x1af290, Func Offset: 0x70
	// Line 1521, Address: 0x1af298, Func Offset: 0x78
	// Line 1522, Address: 0x1af2a4, Func Offset: 0x84
	// Line 1523, Address: 0x1af2b8, Func Offset: 0x98
	// Line 1524, Address: 0x1af2c0, Func Offset: 0xa0
	// Line 1525, Address: 0x1af2d0, Func Offset: 0xb0
	// Line 1524, Address: 0x1af2d4, Func Offset: 0xb4
	// Line 1525, Address: 0x1af2d8, Func Offset: 0xb8
	// Line 1526, Address: 0x1af2e0, Func Offset: 0xc0
	// Line 1527, Address: 0x1af304, Func Offset: 0xe4
	// Line 1528, Address: 0x1af310, Func Offset: 0xf0
	// Line 1529, Address: 0x1af330, Func Offset: 0x110
	// Line 1530, Address: 0x1af354, Func Offset: 0x134
	// Line 1531, Address: 0x1af36c, Func Offset: 0x14c
	// Line 1532, Address: 0x1af370, Func Offset: 0x150
	// Line 1534, Address: 0x1af378, Func Offset: 0x158
	// Line 1533, Address: 0x1af37c, Func Offset: 0x15c
	// Line 1534, Address: 0x1af380, Func Offset: 0x160
	// Line 1535, Address: 0x1af38c, Func Offset: 0x16c
	// Line 1536, Address: 0x1af390, Func Offset: 0x170
	// Line 1537, Address: 0x1af394, Func Offset: 0x174
	// Line 1538, Address: 0x1af3b8, Func Offset: 0x198
	// Func End, Address: 0x1af3d0, Func Offset: 0x1b0
}

// 
// Start address: 0x1af3d0
void EnemyHilHitCheck(sfObj* obj)
{
	int mode;
	EnemyHilWork* ew;
	_anon0 plane;
	// Line 1542, Address: 0x1af3d0, Func Offset: 0
	// Line 1544, Address: 0x1af3e4, Func Offset: 0x14
	// Line 1545, Address: 0x1af3f0, Func Offset: 0x20
	// Line 1546, Address: 0x1af3f8, Func Offset: 0x28
	// Line 1549, Address: 0x1af408, Func Offset: 0x38
	// Line 1550, Address: 0x1af414, Func Offset: 0x44
	// Line 1551, Address: 0x1af41c, Func Offset: 0x4c
	// Line 1552, Address: 0x1af424, Func Offset: 0x54
	// Line 1553, Address: 0x1af42c, Func Offset: 0x5c
	// Line 1554, Address: 0x1af434, Func Offset: 0x64
	// Line 1555, Address: 0x1af438, Func Offset: 0x68
	// Line 1557, Address: 0x1af468, Func Offset: 0x98
	// Line 1559, Address: 0x1af470, Func Offset: 0xa0
	// Line 1560, Address: 0x1af478, Func Offset: 0xa8
	// Line 1562, Address: 0x1af488, Func Offset: 0xb8
	// Line 1564, Address: 0x1af4b8, Func Offset: 0xe8
	// Line 1565, Address: 0x1af4c0, Func Offset: 0xf0
	// Line 1568, Address: 0x1af4c8, Func Offset: 0xf8
	// Line 1569, Address: 0x1af4d4, Func Offset: 0x104
	// Line 1571, Address: 0x1af4dc, Func Offset: 0x10c
	// Line 1572, Address: 0x1af4e0, Func Offset: 0x110
	// Line 1574, Address: 0x1af4ec, Func Offset: 0x11c
	// Line 1575, Address: 0x1af4f0, Func Offset: 0x120
	// Line 1576, Address: 0x1af4f8, Func Offset: 0x128
	// Func End, Address: 0x1af510, Func Offset: 0x140
}

// 
// Start address: 0x1af510
void EnemyHilMucusDraw(sfObj* obj)
{
	float pos[4];
	float rot[4];
	EnemyHilWork* ew;
	EnemyHilMucus* pm;
	EnemyTexParameter tex;
	float scale;
	int c;
	float vec[4];
	float def[4];
	float ppos[4][5];
	int i;
	int n;
	int m;
	float d1;
	float d;
	float dr1;
	float dr2;
	// Line 1580, Address: 0x1af510, Func Offset: 0
	// Line 1587, Address: 0x1af528, Func Offset: 0x18
	// Line 1588, Address: 0x1af530, Func Offset: 0x20
	// Line 1589, Address: 0x1af53c, Func Offset: 0x2c
	// Line 1590, Address: 0x1af544, Func Offset: 0x34
	// Line 1589, Address: 0x1af548, Func Offset: 0x38
	// Line 1591, Address: 0x1af54c, Func Offset: 0x3c
	// Line 1592, Address: 0x1af554, Func Offset: 0x44
	// Line 1594, Address: 0x1af56c, Func Offset: 0x5c
	// Line 1595, Address: 0x1af580, Func Offset: 0x70
	// Line 1596, Address: 0x1af594, Func Offset: 0x84
	// Line 1597, Address: 0x1af59c, Func Offset: 0x8c
	// Line 1595, Address: 0x1af5a4, Func Offset: 0x94
	// Line 1597, Address: 0x1af5a8, Func Offset: 0x98
	// Line 1595, Address: 0x1af5bc, Func Offset: 0xac
	// Line 1597, Address: 0x1af5c0, Func Offset: 0xb0
	// Line 1595, Address: 0x1af5c8, Func Offset: 0xb8
	// Line 1597, Address: 0x1af5cc, Func Offset: 0xbc
	// Line 1596, Address: 0x1af5d0, Func Offset: 0xc0
	// Line 1597, Address: 0x1af5d4, Func Offset: 0xc4
	// Line 1601, Address: 0x1af5dc, Func Offset: 0xcc
	// Line 1602, Address: 0x1af5e4, Func Offset: 0xd4
	// Line 1603, Address: 0x1af5e8, Func Offset: 0xd8
	// Line 1604, Address: 0x1af5f4, Func Offset: 0xe4
	// Line 1605, Address: 0x1af600, Func Offset: 0xf0
	// Line 1609, Address: 0x1af620, Func Offset: 0x110
	// Line 1610, Address: 0x1af628, Func Offset: 0x118
	// Line 1611, Address: 0x1af658, Func Offset: 0x148
	// Line 1612, Address: 0x1af678, Func Offset: 0x168
	// Line 1613, Address: 0x1af680, Func Offset: 0x170
	// Line 1614, Address: 0x1af6a4, Func Offset: 0x194
	// Line 1616, Address: 0x1af6b4, Func Offset: 0x1a4
	// Line 1617, Address: 0x1af6c0, Func Offset: 0x1b0
	// Line 1618, Address: 0x1af6d0, Func Offset: 0x1c0
	// Line 1619, Address: 0x1af6e8, Func Offset: 0x1d8
	// Line 1620, Address: 0x1af6ec, Func Offset: 0x1dc
	// Line 1621, Address: 0x1af6f8, Func Offset: 0x1e8
	// Line 1622, Address: 0x1af700, Func Offset: 0x1f0
	// Line 1621, Address: 0x1af704, Func Offset: 0x1f4
	// Line 1622, Address: 0x1af70c, Func Offset: 0x1fc
	// Line 1623, Address: 0x1af71c, Func Offset: 0x20c
	// Line 1624, Address: 0x1af720, Func Offset: 0x210
	// Line 1625, Address: 0x1af728, Func Offset: 0x218
	// Line 1623, Address: 0x1af734, Func Offset: 0x224
	// Line 1625, Address: 0x1af738, Func Offset: 0x228
	// Line 1626, Address: 0x1af740, Func Offset: 0x230
	// Line 1628, Address: 0x1af750, Func Offset: 0x240
	// Line 1626, Address: 0x1af754, Func Offset: 0x244
	// Line 1628, Address: 0x1af758, Func Offset: 0x248
	// Line 1626, Address: 0x1af760, Func Offset: 0x250
	// Line 1628, Address: 0x1af768, Func Offset: 0x258
	// Line 1627, Address: 0x1af778, Func Offset: 0x268
	// Line 1629, Address: 0x1af784, Func Offset: 0x274
	// Line 1630, Address: 0x1af790, Func Offset: 0x280
	// Line 1632, Address: 0x1af798, Func Offset: 0x288
	// Line 1633, Address: 0x1af7a4, Func Offset: 0x294
	// Line 1634, Address: 0x1af7b8, Func Offset: 0x2a8
	// Line 1635, Address: 0x1af7c8, Func Offset: 0x2b8
	// Line 1636, Address: 0x1af7d4, Func Offset: 0x2c4
	// Line 1639, Address: 0x1af7d8, Func Offset: 0x2c8
	// Line 1637, Address: 0x1af7e0, Func Offset: 0x2d0
	// Line 1638, Address: 0x1af7f0, Func Offset: 0x2e0
	// Line 1639, Address: 0x1af7f4, Func Offset: 0x2e4
	// Line 1638, Address: 0x1af7fc, Func Offset: 0x2ec
	// Line 1639, Address: 0x1af800, Func Offset: 0x2f0
	// Line 1638, Address: 0x1af814, Func Offset: 0x304
	// Line 1639, Address: 0x1af818, Func Offset: 0x308
	// Line 1640, Address: 0x1af83c, Func Offset: 0x32c
	// Line 1645, Address: 0x1af848, Func Offset: 0x338
	// Line 1641, Address: 0x1af84c, Func Offset: 0x33c
	// Line 1645, Address: 0x1af850, Func Offset: 0x340
	// Line 1641, Address: 0x1af854, Func Offset: 0x344
	// Line 1642, Address: 0x1af858, Func Offset: 0x348
	// Line 1643, Address: 0x1af868, Func Offset: 0x358
	// Line 1644, Address: 0x1af86c, Func Offset: 0x35c
	// Line 1643, Address: 0x1af870, Func Offset: 0x360
	// Line 1645, Address: 0x1af874, Func Offset: 0x364
	// Line 1643, Address: 0x1af890, Func Offset: 0x380
	// Line 1645, Address: 0x1af894, Func Offset: 0x384
	// Line 1647, Address: 0x1af8bc, Func Offset: 0x3ac
	// Line 1648, Address: 0x1af8d4, Func Offset: 0x3c4
	// Line 1653, Address: 0x1af914, Func Offset: 0x404
	// Line 1655, Address: 0x1af928, Func Offset: 0x418
	// Line 1657, Address: 0x1af938, Func Offset: 0x428
	// Func End, Address: 0x1af954, Func Offset: 0x444
}

// 
// Start address: 0x1af960
void EnemyHilCrushDraw(sfObj* obj)
{
	EnemyHilWork* ew;
	EnemyTexParameter tex;
	float pos[4];
	float vec[4];
	float s;
	// Line 1661, Address: 0x1af960, Func Offset: 0
	// Line 1666, Address: 0x1af970, Func Offset: 0x10
	// Line 1667, Address: 0x1af978, Func Offset: 0x18
	// Line 1668, Address: 0x1af9a8, Func Offset: 0x48
	// Line 1669, Address: 0x1af9b4, Func Offset: 0x54
	// Line 1670, Address: 0x1af9c0, Func Offset: 0x60
	// Line 1671, Address: 0x1af9dc, Func Offset: 0x7c
	// Line 1670, Address: 0x1af9e0, Func Offset: 0x80
	// Line 1671, Address: 0x1af9e4, Func Offset: 0x84
	// Line 1673, Address: 0x1afa04, Func Offset: 0xa4
	// Line 1674, Address: 0x1afa28, Func Offset: 0xc8
	// Line 1675, Address: 0x1afa30, Func Offset: 0xd0
	// Line 1676, Address: 0x1afa3c, Func Offset: 0xdc
	// Line 1677, Address: 0x1afa54, Func Offset: 0xf4
	// Line 1678, Address: 0x1afa88, Func Offset: 0x128
	// Line 1679, Address: 0x1afaa8, Func Offset: 0x148
	// Line 1683, Address: 0x1afae0, Func Offset: 0x180
	// Func End, Address: 0x1afaf4, Func Offset: 0x194
}

