typedef struct sfCharacter;
typedef union _anon0;
typedef struct sgAnime;
typedef struct sfObj;
typedef struct _EventInst;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef enum _enum : unsigned char;
typedef enum PlayerExtStatus : unsigned char;
typedef struct _EventDriver;
typedef struct sfCldObject;
typedef struct sgQTNode;
typedef struct _GAME_WORK;
typedef struct sfCldPart;
typedef struct _anon4;
typedef struct _EventCtrlLink;
typedef enum sgIKSolveResult : unsigned char;
typedef struct sgQTObject;
typedef struct _EventController;
typedef struct sgIKHandle;
typedef struct sgBone;
typedef struct _anon5;
typedef struct _anon6;
typedef struct sfOffsetAABB;
typedef struct _anon7;
typedef union sfCldBody;
typedef struct _anon8;
typedef enum GameItem : unsigned char;
typedef struct _anon9;
typedef struct _PLAYER_WORK;
typedef struct EventFlag;
typedef struct sgSVModel;

typedef void(*type_3)(sfObj*);
typedef int(*type_6)(sfObj*);
typedef int(*type_7)(sfObj*);
typedef void(*type_9)(sfObj*);
typedef int(*type_11)(sfObj*);
typedef void(*type_12)(_anon1*, int, int, float*);
typedef int(*type_13)(sfObj*);
typedef int(*type_15)(sfObj*);
typedef int(*type_18)(sfObj*);
typedef int(*type_20)(sfObj*);
typedef sgIKSolveResult(*type_26)();
typedef void(*type_40)(sgAnime*, int);

typedef _anon0 type_0[256];
typedef float type_1[4][4];
typedef unsigned char type_2[4];
typedef float type_4[4];
typedef int type_5[1];
typedef int type_8[1];
typedef int type_10[1];
typedef sfCldPart* type_14[6];
typedef unsigned char type_16[3];
typedef int type_17[1];
typedef int type_19[1];
typedef _anon0 type_21[4];
typedef int type_22[1];
typedef _anon3 type_23[5];
typedef float type_24[4][2];
typedef _PLAYER_WORK type_25[2];
typedef float type_27[4];
typedef short type_28[2];
typedef unsigned short type_29[2];
typedef char type_30[4];
typedef unsigned char type_31[4];
typedef unsigned char type_32[3];
typedef float type_33[1];
typedef _anon5 type_34[2];
typedef int type_35[1];
typedef void* type_36[4];
typedef float type_37[4];
typedef float type_38[4][0];
typedef unsigned char type_39[320];
typedef int type_41[1];

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon2 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
};

union _anon0
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

struct sgAnime
{
	void* play_data[4];
	sgBone* transforms;
	int n_transforms;
	sgIKHandle* ik_handles;
	sgBone* object_space;
	void(*post_func)(sgAnime*, int);
	float* reals;
	int n_reals;
	float vectors[4];
	int n_vectors;
	int current_time;
	int time_add;
	unsigned char play_status[4];
	unsigned short flag;
	unsigned short construct_check;
};

struct sfObj
{
	_anon0 fwork[256];
	_anon0* work;
	void(*func)(sfObj*);
	_anon0* work_pt0;
	_anon0* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon0* sys_work;
	_anon0* scene_work;
	_anon0* event_work;
	_anon0* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

struct _EventInst
{
	_EventDriver evdrv;
	unsigned int attr;
	int(*drawaf)(sfObj*);
	int(*endexitf)(sfObj*);
};

struct _anon1
{
	unsigned long tex0;
	unsigned long clamp;
};

struct _anon2
{
	void* model;
	void* texture;
	void* texture_global;
	float matrices[4][4];
	float* weights;
	float tex_crops[4];
	void(*texture_load_func)(_anon1*, int, int, float*);
	int equip_flag;
};

struct _anon3
{
	int event_idx;
	int event_type;
};

enum _enum : unsigned char
{
	GAME_STAGE_DUMMY,
	GAME_STAGE_3LDK,
	GAME_STAGE_SUBWAY,
	GAME_STAGE_FOREST,
	GAME_STAGE_WATER,
	GAME_STAGE_BUILDING,
	GAME_STAGE_HOME,
	GAME_STAGE_HOSPITAL,
	GAME_STAGE_PAST_HOME,
	GAME_STAGE_LAST,
	GAME_STAGE_TUNNEL,
	GAME_STAGE_SPIRAL,
	GAME_STAGE_TEST,
	GAME_STAGE_MAX
};

enum PlayerExtStatus : unsigned char
{
	PLAYER_STAT_ABSENT,
	PLAYER_STAT_MOVE,
	PLAYER_STAT_SILENT,
	PLAYER_STAT_READY,
	PLAYER_STAT_LOCK,
	PLAYER_STAT_ATTACK,
	PLAYER_STAT_DAMAGE,
	PLAYER_STAT_EVENT,
	PLAYER_STAT_SWORD,
	PLAYER_STAT_GODMODE,
	PLAYER_STAT_DEAD
};

struct _EventDriver
{
	int evnum;
	int(*trgchk)(sfObj*);
	int(*init)(sfObj*);
	int(*exec)(sfObj*);
	int(*draw)(sfObj*);
	int(*end)(sfObj*);
	unsigned int* file;
	_anon0 val[4];
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

struct sgQTNode
{
	int dummy;
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

struct _anon4
{
	int dummy;
};

struct _EventCtrlLink
{
	_EventCtrlLink* prev;
	_EventCtrlLink* next;
	void* evctrl;
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

struct sgQTObject
{
	_anon7 bounding_ball;
	sgQTObject* next;
	sgQTObject* prev;
};

struct _EventController
{
	_EventDriver* evdriver;
	_EventInst evinst;
	sfObj* obj;
	_EventCtrlLink evlink;
	short step;
	short loadstep;
	unsigned int* loadfile;
	unsigned char active;
	unsigned char loadend;
	unsigned char exec_enable;
	short fd_obj_type;
};

struct sgIKHandle
{
	float acceleration[4][2];
	float damping_ratio;
	sgBone* bone;
	sgBone* start;
	sgBone* end;
	sgIKSolveResult(*solver)();
	sgIKSolveResult solve_result;
	float reach_constrain;
	float close_constrain;
	sgIKHandle* next;
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

struct _anon5
{
	float pos[4];
	float rot[4];
	float move_rot[4];
	float eye_pos[4];
	float target_pos[4];
	float weapon_pos[4];
	float eye_dir[4];
	float floor_normal[4];
	sfObj* target_obj;
	float dir;
	float move_dir;
	float move_speed;
	float moved_speed[4];
	float floor_height;
	float hp_rate;
	float weapon_move[4];
	float weapon_speed;
	PlayerExtStatus status;
	GameItem weapon_kind;
};

struct _anon6
{
	float start[4];
	float end[4];
};

struct sfOffsetAABB
{
	_anon8 aabb;
	float offset[4];
};

struct _anon7
{
	float center[4];
	float radius;
};

union sfCldBody
{
	_anon9 obb;
	_anon8 aabb;
	sfOffsetAABB offset_aabb;
	_anon6 line;
	_anon7 sphere;
};

struct _anon8
{
	float bmin[4];
	float bmax[4];
};

enum GameItem : unsigned char
{
	ITEM_EMPTY,
	ITEM_SMALL_BULLET,
	ITEM_LARGE_BULLET,
	ITEM_SILVER_BULLET,
	ITEM_HOLY_CANDLE,
	ITEM_FINISHER,
	ITEM_RED_CHRISM,
	ITEM_LOADS_PRAYER,
	ITEM_SAINT_MEDALLION,
	ITEM_HEALTH_DRINK,
	ITEM_AMPLE,
	ITEM_FIRST_AID_KIT,
	ITEM_HANDGUN = 0x10,
	ITEM_REVOLVER,
	ITEM_IRON_PIPE,
	ITEM_CUTTER_KNIFE,
	ITEM_METAL_BAT,
	ITEM_DRIVER,
	ITEM_DRIVER_BROKEN,
	ITEM_SPOON,
	ITEM_SPOON_BROKEN,
	ITEM_MID_MASHY,
	ITEM_MID_MASHY_BROKEN,
	ITEM_MASHY_IRON,
	ITEM_MASHY_IRON_BROKEN,
	ITEM_MASHY,
	ITEM_MASHY_BROKEN,
	ITEM_SPADE_MASHY,
	ITEM_SPADE_MASHY_BROKEN,
	ITEM_MASHY_NIBLICK,
	ITEM_MASHY_NIBLICK_BROKEN,
	ITEM_PITCHER,
	ITEM_PITCHER_BROKEN,
	ITEM_NIBLICK,
	ITEM_NIBLICK_BROKEN,
	ITEM_PITCHING_WEDGE,
	ITEM_PITCHING_WEDGE_BROKEN,
	ITEM_SAND_WEDGE,
	ITEM_SAND_WEDGE_BROKEN,
	ITEM_PUTTER,
	ITEM_PUTTER_BROKEN,
	ITEM_WINE_BOTTLE,
	ITEM_WINE_BOTTLE_BROKEN,
	ITEM_SCOOP,
	ITEM_RUSTY_HATCHET,
	ITEM_PICK_OF_DESPAIR,
	ITEM_STUN_GUN,
	ITEM_SPRAY,
	ITEM_CLUB,
	ITEM_CHAIN_SAW,
	ITEM_KEY_OF_LIBERATION = 0x3c,
	ITEM_COIN_OF_LYNCHSTREETLINE,
	ITEM_CHOCOLATE_MILK,
	ITEM_SHOVEL_WITH_BLOOD_CHARACTER,
	ITEM_RUSTY_BLOODY_KEY,
	ITEM_RED_PAPER_1,
	ITEM_RED_PAPER_2,
	ITEM_RED_PAPER_3,
	ITEM_RED_PAPER_4,
	ITEM_RED_PAPER_5,
	ITEM_RED_PAPER_6,
	ITEM_TORN_RED_PAPER_1,
	ITEM_TORN_RED_PAPER_2,
	ITEM_TORN_RED_PAPER_MISS,
	ITEM_KEY_OF_SUPERINTENDANT,
	ITEM_KEY_ROCKER106,
	ITEM_CASSETTE_TAPE,
	ITEM_KEY_WITH_DOLL,
	ITEM_CHARM_OF_SUCCUBUS,
	ITEM_KEY_OF_SICKROOM,
	ITEM_RED_ENVELOPE,
	ITEM_SMALL_KEY,
	ITEM_CYNTHIAS_PASS,
	ITEM_OLD_DOLL,
	ITEM_MASTER_KEY_TO_APART,
	ITEM_ARMORIAL_MEDAL,
	ITEM_PICK_OF_HOPE,
	ITEM_NAVEL_STRING,
	ITEM_ALESSAS_SPEAR,
	ITEM_DIRTY_ENVELOPE,
	ITEM_TOY_KEY,
	ITEM_1SS_COIN_DIRTY,
	ITEM_1SS_COIN,
	ITEM_SB24_KEY,
	ITEM_HANDLE,
	ITEM_DOLLS_HEAD,
	ITEM_DOLLS_RIGHT_ARM,
	ITEM_DOLLS_LEFT_ARM,
	ITEM_DOLLS_RIGHT_LEG,
	ITEM_DOLLS_LEFT_LEG,
	ITEM_UNDERGROUND_KEY,
	ITEM_PRISONERS_SHIRT,
	ITEM_BILLIARD_BALL,
	ITEM_STUFFED_CAT,
	ITEM_VOLLEYBALL,
	ITEM_SMALL_CANDLE_PACKED,
	ITEM_SMALL_CANDLE,
	ITEM_GHOSTS_KEY,
	ITEM_DIRTY_STONE1,
	ITEM_DIRTY_STONE2,
	ITEM_DIRTY_STONE3,
	ITEM_DIRTY_STONE4,
	ITEM_DIRTY_STONE5,
	ITEM_CHANNELING_STONE1,
	ITEM_CHANNELING_STONE2,
	ITEM_CHANNELING_STONE3,
	ITEM_CHANNELING_STONE4,
	ITEM_CHANNELING_STONE5,
	ITEM_PLATE_OF_TEMPTATION,
	ITEM_PLATE_OF_ORIGIN,
	ITEM_PLATE_OF_SURVEILLANCE,
	ITEM_PLATE_OF_CHAOS,
	ITEM_ALBERT_SPORTS_KEY,
	ITEM_UNIFORM,
	ITEM_MZ_UPPER_KEY,
	ITEM_TRAILER_KEY,
	ITEM_HANDBAG = 0x80,
	ITEM_SUBMACHINEGUN,
	ITEM_BLACKJACK,
	ITEM_HORSEWHIP,
	ITEM_CHAIN,
	ITEM_FIRST_LETTER = 0x88,
	ITEM_SCRAP_OF_BOOK,
	ITEM_RED_DIARY_0408,
	ITEM_RED_DIARY_0404,
	ITEM_SCRAP_OF_BIBLE,
	ITEM_DIARY_OF_NEIGHBOUR,
	ITEM_SUPERINTENDANTS_MEMO,
	ITEM_SUPERINTENDANTS_DIARY,
	ITEM_RED_DIARY_0502,
	ITEM_RED_DIARY_0514,
	ITEM_RED_DIARY_0520,
	ITEM_SCRAP_OF_RED_DIARY,
	ITEM_SCRAP_OF_RED_DIARY_2,
	ITEM_MIKES_LOVELETTER,
	ITEM_RED_DIARY_0713,
	ITEM_RED_DIARY_0720,
	ITEM_HOLY_MOTHER_21_SACRAMENTS,
	ITEM_RED_BOOK,
	ITEM_PICTURE_BOOK,
	ITEM_RED_DIARY_0611,
	ITEM_RED_DIARY_0614,
	ITEM_RED_DIARY_SOMETIMEAGO,
	ITEM_RED_DIARY_0717,
	ITEM_RED_DIARY_0718,
	ITEM_RED_DIARY_0723,
	ITEM_RED_DIARY_0725,
	ITEM_RED_DIARY_0728,
	ITEM_RED_DIARY_0729,
	ITEM_RED_DIARY_0802,
	ITEM_RED_DIARY_0803,
	ITEM_RED_DIARY_0804,
	ITEM_RED_DIARY_0805,
	ITEM_RED_DIARY_0807,
	ITEM_SUPERINTENDANTS_DIARY_COUT,
	ITEM_JOSEPHS_LETTER,
	ITEM_JOSEPHS_REPORT,
	ITEM_NURSE_MEMO,
	ITEM_CHILD_LETTER,
	ITEM_BLOODY_SHIRT,
	ITEM_BARTENDERS_MEMO,
	ITEM_BARTENDERS_MEMO2,
	ITEM_MEMOIRS,
	ITEM_JASPERS_MEMO,
	ITEM_BURNED_OUT_MEMO,
	ITEM_DOLLS_TEXT,
	ITEM_EXPLORERS_MEMO,
	ITEM_SENTINELS_DIARY,
	ITEM_PLATE_ABOUT_WATERWHEEL,
	ITEM_PRISONERS_DIARY,
	ITEM_REPORT_1F,
	ITEM_REPORT_2F,
	ITEM_PASSWORD_MEMO,
	ITEM_BRICK = 0xe4,
	ITEM_KILLER_PIPE,
	ITEM_KILLER_GUN1,
	ITEM_KILLER_GUN2,
	ITEM_KIND_MAX
};

struct _anon9
{
	float mat[4][4];
	float half_w[4];
};

struct _PLAYER_WORK
{
	int num;
	int type;
	float life;
	float str;
	float def;
	float tire;
	int dull_count;
	int dulls;
	int dull_motion;
	int invincible;
	GameItem wp_last;
	float life_max;
	float str_max;
	float def_max;
	float ampule_time;
	int draw_flag;
	float pos[4];
	float v_pos[4];
	float eyerot[4];
	float prev_pos[4];
	float rot[4];
	float prev_rot[4];
	float v_rot[4];
	float speed;
	sfCharacter chara;
	sfCharacter* obj;
	sgAnime* anim;
	sgAnime* anim_frame;
	sfCldObject cld_obj;
	sfObj* ch_obj;
	int battle_stat;
	int holy_stat;
	float power_attack;
	int damage;
	int gotmode;
	int hold;
	int hold_kind;
	float hold_time;
	int gun_ikset;
	float gun_angle;
	sfObj* target;
	int target_mode;
	GameItem weapon_kind;
	sfCharacter weapon_chr;
	sfCharacter* wp_chr;
	sfObj* wp_obj;
	sfCldObject weapon_cld;
	sfCldObject* wp_cld;
	int cld_entry;
	GameItem holy_kind;
	int autolock;
	int sword_stat;
	int enemy_near;
	int anime_process;
	int anime_sub;
	_anon4* anim_ctrl;
	int slot_frame;
	int link_anim;
	int slot_link;
	float anim_speed;
	float hit_reduce;
	int auto_search;
	int pos_f;
	float pos_bak[4];
	float rot_bak[4];
	float last_neck[4];
	int advance_only;
	int who;
};

struct EventFlag
{
	unsigned char flag[320];
};

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
};

_GAME_WORK gamew;
float sg_vector_unit_w[4];
float scene_offset_tbl[4][0];
_PLAYER_WORK playerw[2];
_EventDriver ev_forest0_fr09_025_action;
_anon5 player_ext_info[2];
EventFlag event_flag;
int helper_rank;

void GameCameraMatrixSet(float vwm[4]);
void GameCameraViewAngleSet(float angle);
void GameCameraMatrixSetForce(float vwm[4]);
void GameShadowDensitySet(unsigned char density);
void GameShadowDensitySetDisable();
void GameGetSceneOffset(float* offset, _enum stage, int scene_no);
void GameSetNextScene(int scene);
void GameSetNextSceneDoor(int scene, int door_no);
void GameSetNextStage(_enum stage, int scene);
void GameSetNextCancel();
int GameSetNextStageSceneCheck();
int GamePlayDoorMoveExecute();
void GamePlayEventConflictSolveAndExecute();
void GameGetMapOffset(float* ofs);
void GameSetGameOver();
void GameSetGameClear();
void GameSetPlayTime(unsigned int time);
unsigned int GameGetPlayTime();
float GameGetPlayTimeSec();
float GameGetPlayTimeSecByFrame(unsigned int time);
void GameSetGameLevel(int lv);
int GameGetGameLevel();
void GameSetContinueCountUp();
unsigned int GameGetContinueCount();
void GameSetContinueCount(unsigned int num);
void GameKilledEnemyCountUp();
unsigned int GameGetKilledEnemy();
void GameSetKilledEnemy(unsigned int num);
void GameSetContinue();
void GameUpdateContinueData();
void GameHelpClumsyItemGameStartCheck();
void GameHelpClumsyItemCheck();
void GameHelpClumsyItemSet();
void GamePrize3LDKItemSet();
void GameSpecialModeItemInit();
void GameSpecialModeItemSelect();

// 
// Start address: 0x28f2b0
void GameCameraMatrixSet(float vwm[4])
{
	// Line 32, Address: 0x28f2b0, Func Offset: 0
	// Line 33, Address: 0x28f2d4, Func Offset: 0x24
	// Func End, Address: 0x28f2dc, Func Offset: 0x2c
}

// 
// Start address: 0x28f2e0
void GameCameraViewAngleSet(float angle)
{
	// Line 43, Address: 0x28f2e0, Func Offset: 0
	// Line 44, Address: 0x28f2e4, Func Offset: 0x4
	// Func End, Address: 0x28f2ec, Func Offset: 0xc
}

// 
// Start address: 0x28f2f0
void GameCameraMatrixSetForce(float vwm[4])
{
	// Line 54, Address: 0x28f2f0, Func Offset: 0
	// Line 55, Address: 0x28f2f4, Func Offset: 0x4
	// Line 54, Address: 0x28f2f8, Func Offset: 0x8
	// Line 55, Address: 0x28f2fc, Func Offset: 0xc
	// Line 56, Address: 0x28f320, Func Offset: 0x30
	// Line 57, Address: 0x28f348, Func Offset: 0x58
	// Line 58, Address: 0x28f354, Func Offset: 0x64
	// Line 59, Address: 0x28f35c, Func Offset: 0x6c
	// Func End, Address: 0x28f368, Func Offset: 0x78
}

// 
// Start address: 0x28f370
void GameShadowDensitySet(unsigned char density)
{
	// Line 72, Address: 0x28f370, Func Offset: 0
	// Line 73, Address: 0x28f378, Func Offset: 0x8
	// Func End, Address: 0x28f380, Func Offset: 0x10
}

// 
// Start address: 0x28f380
void GameShadowDensitySetDisable()
{
	// Line 82, Address: 0x28f380, Func Offset: 0
	// Line 83, Address: 0x28f388, Func Offset: 0x8
	// Func End, Address: 0x28f390, Func Offset: 0x10
}

// 
// Start address: 0x28f390
void GameGetSceneOffset(float* offset, _enum stage, int scene_no)
{
	float offset_tbl[4];
	// Line 96, Address: 0x28f394, Func Offset: 0x4
	// Line 97, Address: 0x28f3a8, Func Offset: 0x18
	// Line 99, Address: 0x28f3b0, Func Offset: 0x20
	// Line 100, Address: 0x28f3c8, Func Offset: 0x38
	// Line 101, Address: 0x28f3d0, Func Offset: 0x40
	// Line 102, Address: 0x28f3d8, Func Offset: 0x48
	// Line 105, Address: 0x28f3e0, Func Offset: 0x50
	// Line 106, Address: 0x28f3f0, Func Offset: 0x60
	// Func End, Address: 0x28f3f8, Func Offset: 0x68
}

// 
// Start address: 0x28f400
void GameSetNextScene(int scene)
{
	int i;
	// Line 120, Address: 0x28f400, Func Offset: 0
	// Line 125, Address: 0x28f404, Func Offset: 0x4
	// Line 120, Address: 0x28f408, Func Offset: 0x8
	// Line 121, Address: 0x28f40c, Func Offset: 0xc
	// Line 122, Address: 0x28f41c, Func Offset: 0x1c
	// Line 123, Address: 0x28f42c, Func Offset: 0x2c
	// Line 125, Address: 0x28f434, Func Offset: 0x34
	// Line 126, Address: 0x28f450, Func Offset: 0x50
	// Line 127, Address: 0x28f458, Func Offset: 0x58
	// Line 128, Address: 0x28f460, Func Offset: 0x60
	// Line 131, Address: 0x28f470, Func Offset: 0x70
	// Func End, Address: 0x28f478, Func Offset: 0x78
}

// 
// Start address: 0x28f480
void GameSetNextSceneDoor(int scene, int door_no)
{
	int i;
	// Line 149, Address: 0x28f480, Func Offset: 0
	// Line 150, Address: 0x28f488, Func Offset: 0x8
	// Line 154, Address: 0x28f494, Func Offset: 0x14
	// Line 150, Address: 0x28f498, Func Offset: 0x18
	// Line 151, Address: 0x28f49c, Func Offset: 0x1c
	// Line 152, Address: 0x28f4ac, Func Offset: 0x2c
	// Line 154, Address: 0x28f4b4, Func Offset: 0x34
	// Line 155, Address: 0x28f4d0, Func Offset: 0x50
	// Line 156, Address: 0x28f4d8, Func Offset: 0x58
	// Line 157, Address: 0x28f4e0, Func Offset: 0x60
	// Line 159, Address: 0x28f4f0, Func Offset: 0x70
	// Func End, Address: 0x28f4f8, Func Offset: 0x78
}

// 
// Start address: 0x28f500
void GameSetNextStage(_enum stage, int scene)
{
	// Line 174, Address: 0x28f500, Func Offset: 0
	// Line 175, Address: 0x28f50c, Func Offset: 0xc
	// Func End, Address: 0x28f514, Func Offset: 0x14
}

// 
// Start address: 0x28f520
void GameSetNextCancel()
{
	// Line 189, Address: 0x28f520, Func Offset: 0
	// Line 190, Address: 0x28f528, Func Offset: 0x8
	// Line 191, Address: 0x28f530, Func Offset: 0x10
	// Line 193, Address: 0x28f534, Func Offset: 0x14
	// Func End, Address: 0x28f53c, Func Offset: 0x1c
}

// 
// Start address: 0x28f540
int GameSetNextStageSceneCheck()
{
	// Line 204, Address: 0x28f540, Func Offset: 0
	// Line 205, Address: 0x28f560, Func Offset: 0x20
	// Line 207, Address: 0x28f568, Func Offset: 0x28
	// Line 208, Address: 0x28f570, Func Offset: 0x30
	// Func End, Address: 0x28f578, Func Offset: 0x38
}

// 
// Start address: 0x28f580
int GamePlayDoorMoveExecute()
{
	int* door;
	int next_scene;
	int door_no;
	// Line 214, Address: 0x28f580, Func Offset: 0
	// Line 215, Address: 0x28f584, Func Offset: 0x4
	// Line 214, Address: 0x28f588, Func Offset: 0x8
	// Line 215, Address: 0x28f598, Func Offset: 0x18
	// Line 220, Address: 0x28f59c, Func Offset: 0x1c
	// Line 221, Address: 0x28f5a4, Func Offset: 0x24
	// Line 223, Address: 0x28f5b0, Func Offset: 0x30
	// Line 224, Address: 0x28f5b8, Func Offset: 0x38
	// Line 227, Address: 0x28f5c4, Func Offset: 0x44
	// Line 228, Address: 0x28f5cc, Func Offset: 0x4c
	// Line 230, Address: 0x28f5d8, Func Offset: 0x58
	// Line 232, Address: 0x28f5e4, Func Offset: 0x64
	// Line 234, Address: 0x28f5f0, Func Offset: 0x70
	// Line 235, Address: 0x28f5f8, Func Offset: 0x78
	// Line 238, Address: 0x28f5fc, Func Offset: 0x7c
	// Line 242, Address: 0x28f604, Func Offset: 0x84
	// Line 244, Address: 0x28f618, Func Offset: 0x98
	// Line 245, Address: 0x28f620, Func Offset: 0xa0
	// Line 247, Address: 0x28f628, Func Offset: 0xa8
	// Line 248, Address: 0x28f630, Func Offset: 0xb0
	// Func End, Address: 0x28f648, Func Offset: 0xc8
}

// 
// Start address: 0x28f650
void GamePlayEventConflictSolveAndExecute()
{
	int i;
	int n_events;
	int n_entry_events;
	int event_type;
	_anon3 waked_events[5];
	int door_move_disable;
	int text_event_disable;
	int item_event_disable;
	int fileload_event_disable;
	sfObj* obj;
	_EventController* evctl;
	// Line 270, Address: 0x28f650, Func Offset: 0
	// Line 283, Address: 0x28f654, Func Offset: 0x4
	// Line 270, Address: 0x28f658, Func Offset: 0x8
	// Line 283, Address: 0x28f65c, Func Offset: 0xc
	// Line 270, Address: 0x28f660, Func Offset: 0x10
	// Line 280, Address: 0x28f668, Func Offset: 0x18
	// Line 270, Address: 0x28f66c, Func Offset: 0x1c
	// Line 278, Address: 0x28f670, Func Offset: 0x20
	// Line 270, Address: 0x28f674, Func Offset: 0x24
	// Line 277, Address: 0x28f684, Func Offset: 0x34
	// Line 270, Address: 0x28f688, Func Offset: 0x38
	// Line 283, Address: 0x28f68c, Func Offset: 0x3c
	// Line 284, Address: 0x28f698, Func Offset: 0x48
	// Line 285, Address: 0x28f6a0, Func Offset: 0x50
	// Line 286, Address: 0x28f6a8, Func Offset: 0x58
	// Line 287, Address: 0x28f6b0, Func Offset: 0x60
	// Line 288, Address: 0x28f6b8, Func Offset: 0x68
	// Line 289, Address: 0x28f6c0, Func Offset: 0x70
	// Line 300, Address: 0x28f6c8, Func Offset: 0x78
	// Line 301, Address: 0x28f6d4, Func Offset: 0x84
	// Line 303, Address: 0x28f6e0, Func Offset: 0x90
	// Line 304, Address: 0x28f6e4, Func Offset: 0x94
	// Line 307, Address: 0x28f6e8, Func Offset: 0x98
	// Line 306, Address: 0x28f6ec, Func Offset: 0x9c
	// Line 307, Address: 0x28f6f0, Func Offset: 0xa0
	// Line 308, Address: 0x28f700, Func Offset: 0xb0
	// Line 309, Address: 0x28f70c, Func Offset: 0xbc
	// Line 311, Address: 0x28f714, Func Offset: 0xc4
	// Line 313, Address: 0x28f718, Func Offset: 0xc8
	// Line 312, Address: 0x28f71c, Func Offset: 0xcc
	// Line 314, Address: 0x28f724, Func Offset: 0xd4
	// Line 317, Address: 0x28f738, Func Offset: 0xe8
	// Line 319, Address: 0x28f750, Func Offset: 0x100
	// Line 324, Address: 0x28f758, Func Offset: 0x108
	// Line 319, Address: 0x28f75c, Func Offset: 0x10c
	// Line 318, Address: 0x28f760, Func Offset: 0x110
	// Line 319, Address: 0x28f764, Func Offset: 0x114
	// Line 321, Address: 0x28f784, Func Offset: 0x134
	// Line 324, Address: 0x28f788, Func Offset: 0x138
	// Line 326, Address: 0x28f790, Func Offset: 0x140
	// Line 329, Address: 0x28f798, Func Offset: 0x148
	// Line 330, Address: 0x28f79c, Func Offset: 0x14c
	// Line 332, Address: 0x28f7a0, Func Offset: 0x150
	// Line 335, Address: 0x28f7a8, Func Offset: 0x158
	// Line 336, Address: 0x28f7ac, Func Offset: 0x15c
	// Line 337, Address: 0x28f7b0, Func Offset: 0x160
	// Line 340, Address: 0x28f7b4, Func Offset: 0x164
	// Line 343, Address: 0x28f7c8, Func Offset: 0x178
	// Line 344, Address: 0x28f7dc, Func Offset: 0x18c
	// Line 345, Address: 0x28f7ec, Func Offset: 0x19c
	// Line 350, Address: 0x28f7f0, Func Offset: 0x1a0
	// Line 351, Address: 0x28f804, Func Offset: 0x1b4
	// Line 355, Address: 0x28f808, Func Offset: 0x1b8
	// Line 356, Address: 0x28f81c, Func Offset: 0x1cc
	// Line 357, Address: 0x28f820, Func Offset: 0x1d0
	// Line 358, Address: 0x28f824, Func Offset: 0x1d4
	// Line 361, Address: 0x28f828, Func Offset: 0x1d8
	// Line 362, Address: 0x28f848, Func Offset: 0x1f8
	// Line 363, Address: 0x28f854, Func Offset: 0x204
	// Line 365, Address: 0x28f85c, Func Offset: 0x20c
	// Line 367, Address: 0x28f860, Func Offset: 0x210
	// Line 366, Address: 0x28f864, Func Offset: 0x214
	// Line 368, Address: 0x28f86c, Func Offset: 0x21c
	// Line 371, Address: 0x28f888, Func Offset: 0x238
	// Line 373, Address: 0x28f898, Func Offset: 0x248
	// Line 374, Address: 0x28f89c, Func Offset: 0x24c
	// Line 376, Address: 0x28f8b0, Func Offset: 0x260
	// Line 377, Address: 0x28f8c4, Func Offset: 0x274
	// Line 378, Address: 0x28f8c8, Func Offset: 0x278
	// Line 379, Address: 0x28f8dc, Func Offset: 0x28c
	// Line 380, Address: 0x28f8e0, Func Offset: 0x290
	// Line 381, Address: 0x28f8f4, Func Offset: 0x2a4
	// Line 384, Address: 0x28f8f8, Func Offset: 0x2a8
	// Line 387, Address: 0x28f900, Func Offset: 0x2b0
	// Line 388, Address: 0x28f91c, Func Offset: 0x2cc
	// Line 389, Address: 0x28f920, Func Offset: 0x2d0
	// Line 390, Address: 0x28f93c, Func Offset: 0x2ec
	// Line 393, Address: 0x28f944, Func Offset: 0x2f4
	// Line 395, Address: 0x28f958, Func Offset: 0x308
	// Line 396, Address: 0x28f960, Func Offset: 0x310
	// Func End, Address: 0x28f98c, Func Offset: 0x33c
}

// 
// Start address: 0x28f990
void GameGetMapOffset(float* ofs)
{
	// Line 413, Address: 0x28f990, Func Offset: 0
	// Line 416, Address: 0x28f99c, Func Offset: 0xc
	// Func End, Address: 0x28f9a4, Func Offset: 0x14
}

// 
// Start address: 0x28f9b0
void GameSetGameOver()
{
	// Line 441, Address: 0x28f9b0, Func Offset: 0
	// Line 443, Address: 0x28f9b8, Func Offset: 0x8
	// Line 445, Address: 0x28f9c0, Func Offset: 0x10
	// Line 446, Address: 0x28f9cc, Func Offset: 0x1c
	// Func End, Address: 0x28f9d8, Func Offset: 0x28
}

// 
// Start address: 0x28f9e0
void GameSetGameClear()
{
	// Line 456, Address: 0x28f9e0, Func Offset: 0
	// Line 457, Address: 0x28f9e8, Func Offset: 0x8
	// Func End, Address: 0x28f9f0, Func Offset: 0x10
}

// 
// Start address: 0x28f9f0
void GameSetPlayTime(unsigned int time)
{
	// Line 468, Address: 0x28f9f0, Func Offset: 0
	// Line 469, Address: 0x28f9f4, Func Offset: 0x4
	// Func End, Address: 0x28f9fc, Func Offset: 0xc
}

// 
// Start address: 0x28fa00
unsigned int GameGetPlayTime()
{
	// Line 478, Address: 0x28fa00, Func Offset: 0
	// Line 479, Address: 0x28fa04, Func Offset: 0x4
	// Func End, Address: 0x28fa0c, Func Offset: 0xc
}

// 
// Start address: 0x28fa10
float GameGetPlayTimeSec()
{
	float sec;
	float n_frames;
	// Line 485, Address: 0x28fa10, Func Offset: 0
	// Line 488, Address: 0x28fa14, Func Offset: 0x4
	// Line 485, Address: 0x28fa18, Func Offset: 0x8
	// Line 488, Address: 0x28fa20, Func Offset: 0x10
	// Line 489, Address: 0x28fa28, Func Offset: 0x18
	// Line 491, Address: 0x28fa34, Func Offset: 0x24
	// Line 489, Address: 0x28fa38, Func Offset: 0x28
	// Line 491, Address: 0x28fa40, Func Offset: 0x30
	// Func End, Address: 0x28fa4c, Func Offset: 0x3c
}

// 
// Start address: 0x28fa50
float GameGetPlayTimeSecByFrame(unsigned int time)
{
	float sec;
	float n_frames;
	// Line 498, Address: 0x28fa50, Func Offset: 0
	// Line 501, Address: 0x28fa5c, Func Offset: 0xc
	// Line 502, Address: 0x28fa60, Func Offset: 0x10
	// Line 504, Address: 0x28fa6c, Func Offset: 0x1c
	// Line 502, Address: 0x28fa70, Func Offset: 0x20
	// Line 504, Address: 0x28fa78, Func Offset: 0x28
	// Func End, Address: 0x28fa84, Func Offset: 0x34
}

// 
// Start address: 0x28fa90
void GameSetGameLevel(int lv)
{
	// Line 512, Address: 0x28fa90, Func Offset: 0
	// Line 515, Address: 0x28fab4, Func Offset: 0x24
	// Line 516, Address: 0x28fab8, Func Offset: 0x28
	// Line 517, Address: 0x28fabc, Func Offset: 0x2c
	// Line 518, Address: 0x28fac4, Func Offset: 0x34
	// Line 519, Address: 0x28fac8, Func Offset: 0x38
	// Line 522, Address: 0x28fad0, Func Offset: 0x40
	// Func End, Address: 0x28fad8, Func Offset: 0x48
}

// 
// Start address: 0x28fae0
int GameGetGameLevel()
{
	// Line 530, Address: 0x28fae0, Func Offset: 0
	// Line 531, Address: 0x28fae4, Func Offset: 0x4
	// Func End, Address: 0x28faec, Func Offset: 0xc
}

// 
// Start address: 0x28faf0
void GameSetContinueCountUp()
{
	// Line 538, Address: 0x28faf0, Func Offset: 0
	// Line 540, Address: 0x28fb00, Func Offset: 0x10
	// Func End, Address: 0x28fb08, Func Offset: 0x18
}

// 
// Start address: 0x28fb10
unsigned int GameGetContinueCount()
{
	// Line 547, Address: 0x28fb10, Func Offset: 0
	// Line 548, Address: 0x28fb14, Func Offset: 0x4
	// Func End, Address: 0x28fb1c, Func Offset: 0xc
}

// 
// Start address: 0x28fb20
void GameSetContinueCount(unsigned int num)
{
	// Line 556, Address: 0x28fb20, Func Offset: 0
	// Line 557, Address: 0x28fb24, Func Offset: 0x4
	// Func End, Address: 0x28fb2c, Func Offset: 0xc
}

// 
// Start address: 0x28fb30
void GameKilledEnemyCountUp()
{
	// Line 565, Address: 0x28fb30, Func Offset: 0
	// Line 567, Address: 0x28fb40, Func Offset: 0x10
	// Func End, Address: 0x28fb48, Func Offset: 0x18
}

// 
// Start address: 0x28fb50
unsigned int GameGetKilledEnemy()
{
	// Line 574, Address: 0x28fb50, Func Offset: 0
	// Line 575, Address: 0x28fb54, Func Offset: 0x4
	// Func End, Address: 0x28fb5c, Func Offset: 0xc
}

// 
// Start address: 0x28fb60
void GameSetKilledEnemy(unsigned int num)
{
	// Line 583, Address: 0x28fb60, Func Offset: 0
	// Line 584, Address: 0x28fb64, Func Offset: 0x4
	// Func End, Address: 0x28fb6c, Func Offset: 0xc
}

// 
// Start address: 0x28fb70
void GameSetContinue()
{
	// Line 589, Address: 0x28fb70, Func Offset: 0
	// Line 590, Address: 0x28fb78, Func Offset: 0x8
	// Func End, Address: 0x28fb80, Func Offset: 0x10
}

// 
// Start address: 0x28fb80
void GameUpdateContinueData()
{
	// Line 595, Address: 0x28fb80, Func Offset: 0
	// Line 597, Address: 0x28fb84, Func Offset: 0x4
	// Line 595, Address: 0x28fb88, Func Offset: 0x8
	// Line 597, Address: 0x28fb8c, Func Offset: 0xc
	// Line 601, Address: 0x28fb9c, Func Offset: 0x1c
	// Line 602, Address: 0x28fba8, Func Offset: 0x28
	// Line 603, Address: 0x28fbb0, Func Offset: 0x30
	// Line 605, Address: 0x28fbb8, Func Offset: 0x38
	// Func End, Address: 0x28fbc4, Func Offset: 0x44
}

// 
// Start address: 0x28fbd0
void GameHelpClumsyItemGameStartCheck()
{
	_GAME_WORK* w;
	unsigned char* item_set_table;
	// Line 630, Address: 0x28fbd0, Func Offset: 0
	// Line 631, Address: 0x28fbdc, Func Offset: 0xc
	// Line 630, Address: 0x28fbe0, Func Offset: 0x10
	// Line 634, Address: 0x28fbe4, Func Offset: 0x14
	// Line 637, Address: 0x28fbf0, Func Offset: 0x20
	// Line 638, Address: 0x28fc04, Func Offset: 0x34
	// Line 639, Address: 0x28fc18, Func Offset: 0x48
	// Line 642, Address: 0x28fc2c, Func Offset: 0x5c
	// Line 644, Address: 0x28fc3c, Func Offset: 0x6c
	// Line 645, Address: 0x28fc44, Func Offset: 0x74
	// Line 649, Address: 0x28fc48, Func Offset: 0x78
	// Line 650, Address: 0x28fc54, Func Offset: 0x84
	// Line 651, Address: 0x28fc60, Func Offset: 0x90
	// Func End, Address: 0x28fc74, Func Offset: 0xa4
}

// 
// Start address: 0x28fc80
void GameHelpClumsyItemCheck()
{
	_GAME_WORK* w;
	int game_level;
	int has_recover_item;
	int rank;
	float hp_ratio;
	float hp_max;
	float hp;
	// Line 657, Address: 0x28fc80, Func Offset: 0
	// Line 666, Address: 0x28fc84, Func Offset: 0x4
	// Line 657, Address: 0x28fc88, Func Offset: 0x8
	// Line 658, Address: 0x28fc94, Func Offset: 0x14
	// Line 657, Address: 0x28fc98, Func Offset: 0x18
	// Line 658, Address: 0x28fc9c, Func Offset: 0x1c
	// Line 666, Address: 0x28fca0, Func Offset: 0x20
	// Line 669, Address: 0x28fca4, Func Offset: 0x24
	// Line 671, Address: 0x28fcb4, Func Offset: 0x34
	// Line 672, Address: 0x28fcbc, Func Offset: 0x3c
	// Line 674, Address: 0x28fcc0, Func Offset: 0x40
	// Line 677, Address: 0x28fcc8, Func Offset: 0x48
	// Line 681, Address: 0x28fcd0, Func Offset: 0x50
	// Line 683, Address: 0x28fcd8, Func Offset: 0x58
	// Line 687, Address: 0x28fce0, Func Offset: 0x60
	// Line 689, Address: 0x28fcec, Func Offset: 0x6c
	// Line 690, Address: 0x28fcf4, Func Offset: 0x74
	// Line 694, Address: 0x28fcf8, Func Offset: 0x78
	// Line 696, Address: 0x28fd00, Func Offset: 0x80
	// Line 695, Address: 0x28fd04, Func Offset: 0x84
	// Line 696, Address: 0x28fd08, Func Offset: 0x88
	// Line 697, Address: 0x28fd14, Func Offset: 0x94
	// Line 706, Address: 0x28fd20, Func Offset: 0xa0
	// Line 698, Address: 0x28fd24, Func Offset: 0xa4
	// Line 706, Address: 0x28fd30, Func Offset: 0xb0
	// Line 707, Address: 0x28fd4c, Func Offset: 0xcc
	// Line 706, Address: 0x28fd50, Func Offset: 0xd0
	// Line 708, Address: 0x28fd54, Func Offset: 0xd4
	// Line 711, Address: 0x28fd5c, Func Offset: 0xdc
	// Line 712, Address: 0x28fd70, Func Offset: 0xf0
	// Line 713, Address: 0x28fd78, Func Offset: 0xf8
	// Line 714, Address: 0x28fd90, Func Offset: 0x110
	// Line 716, Address: 0x28fd98, Func Offset: 0x118
	// Line 718, Address: 0x28fda4, Func Offset: 0x124
	// Line 719, Address: 0x28fdac, Func Offset: 0x12c
	// Line 718, Address: 0x28fdb0, Func Offset: 0x130
	// Line 720, Address: 0x28fdb4, Func Offset: 0x134
	// Line 723, Address: 0x28fdc0, Func Offset: 0x140
	// Line 724, Address: 0x28fdd4, Func Offset: 0x154
	// Line 725, Address: 0x28fdd8, Func Offset: 0x158
	// Line 726, Address: 0x28fdf0, Func Offset: 0x170
	// Line 728, Address: 0x28fdf8, Func Offset: 0x178
	// Line 729, Address: 0x28fe04, Func Offset: 0x184
	// Line 732, Address: 0x28fe08, Func Offset: 0x188
	// Line 733, Address: 0x28fe10, Func Offset: 0x190
	// Func End, Address: 0x28fe28, Func Offset: 0x1a8
}

// 
// Start address: 0x28fe30
void GameHelpClumsyItemSet()
{
	unsigned char* item_set_table;
	// Line 739, Address: 0x28fe30, Func Offset: 0
	// Line 743, Address: 0x28fe34, Func Offset: 0x4
	// Line 739, Address: 0x28fe38, Func Offset: 0x8
	// Line 743, Address: 0x28fe3c, Func Offset: 0xc
	// Line 746, Address: 0x28fe48, Func Offset: 0x18
	// Line 748, Address: 0x28fe50, Func Offset: 0x20
	// Line 752, Address: 0x28fe80, Func Offset: 0x50
	// Line 753, Address: 0x28fe8c, Func Offset: 0x5c
	// Line 754, Address: 0x28fe94, Func Offset: 0x64
	// Line 755, Address: 0x28fe98, Func Offset: 0x68
	// Line 756, Address: 0x28fea8, Func Offset: 0x78
	// Line 758, Address: 0x28feb0, Func Offset: 0x80
	// Line 760, Address: 0x28febc, Func Offset: 0x8c
	// Line 761, Address: 0x28fec0, Func Offset: 0x90
	// Line 762, Address: 0x28fecc, Func Offset: 0x9c
	// Func End, Address: 0x28fedc, Func Offset: 0xac
}

// 
// Start address: 0x28fee0
void GamePrize3LDKItemSet()
{
	int set_items;
	unsigned char* item_set_table;
	// Line 769, Address: 0x28fee0, Func Offset: 0
	// Line 772, Address: 0x28fef0, Func Offset: 0x10
	// Line 774, Address: 0x28fef8, Func Offset: 0x18
	// Line 775, Address: 0x28ff0c, Func Offset: 0x2c
	// Line 777, Address: 0x28ff10, Func Offset: 0x30
	// Line 779, Address: 0x28ff18, Func Offset: 0x38
	// Line 780, Address: 0x28ff2c, Func Offset: 0x4c
	// Line 781, Address: 0x28ff3c, Func Offset: 0x5c
	// Line 782, Address: 0x28ff50, Func Offset: 0x70
	// Line 783, Address: 0x28ff64, Func Offset: 0x84
	// Line 784, Address: 0x28ff78, Func Offset: 0x98
	// Line 785, Address: 0x28ff8c, Func Offset: 0xac
	// Line 786, Address: 0x28ffa0, Func Offset: 0xc0
	// Line 787, Address: 0x28ffb4, Func Offset: 0xd4
	// Line 788, Address: 0x28ffc8, Func Offset: 0xe8
	// Line 789, Address: 0x28ffdc, Func Offset: 0xfc
	// Line 793, Address: 0x28fff0, Func Offset: 0x110
	// Line 794, Address: 0x290004, Func Offset: 0x124
	// Line 795, Address: 0x290014, Func Offset: 0x134
	// Line 796, Address: 0x290028, Func Offset: 0x148
	// Line 797, Address: 0x29003c, Func Offset: 0x15c
	// Line 798, Address: 0x290050, Func Offset: 0x170
	// Line 799, Address: 0x290064, Func Offset: 0x184
	// Line 800, Address: 0x290078, Func Offset: 0x198
	// Line 802, Address: 0x29008c, Func Offset: 0x1ac
	// Line 804, Address: 0x290098, Func Offset: 0x1b8
	// Line 805, Address: 0x2900ac, Func Offset: 0x1cc
	// Line 806, Address: 0x2900c0, Func Offset: 0x1e0
	// Line 807, Address: 0x2900d4, Func Offset: 0x1f4
	// Line 808, Address: 0x2900e8, Func Offset: 0x208
	// Line 809, Address: 0x2900fc, Func Offset: 0x21c
	// Line 810, Address: 0x290110, Func Offset: 0x230
	// Line 811, Address: 0x290124, Func Offset: 0x244
	// Line 812, Address: 0x290138, Func Offset: 0x258
	// Line 813, Address: 0x29014c, Func Offset: 0x26c
	// Line 816, Address: 0x290160, Func Offset: 0x280
	// Line 817, Address: 0x290174, Func Offset: 0x294
	// Line 818, Address: 0x290188, Func Offset: 0x2a8
	// Line 819, Address: 0x29019c, Func Offset: 0x2bc
	// Line 820, Address: 0x2901b0, Func Offset: 0x2d0
	// Line 821, Address: 0x2901c4, Func Offset: 0x2e4
	// Line 823, Address: 0x2901d8, Func Offset: 0x2f8
	// Func End, Address: 0x2901ec, Func Offset: 0x30c
}

// 
// Start address: 0x2901f0
void GameSpecialModeItemInit()
{
	unsigned char* item_set_table;
	// Line 831, Address: 0x2901f0, Func Offset: 0
	// Line 835, Address: 0x2901f8, Func Offset: 0x8
	// Line 838, Address: 0x290200, Func Offset: 0x10
	// Line 840, Address: 0x290214, Func Offset: 0x24
	// Line 841, Address: 0x290220, Func Offset: 0x30
	// Line 843, Address: 0x290224, Func Offset: 0x34
	// Line 841, Address: 0x290228, Func Offset: 0x38
	// Line 843, Address: 0x29022c, Func Offset: 0x3c
	// Line 841, Address: 0x290238, Func Offset: 0x48
	// Line 843, Address: 0x290240, Func Offset: 0x50
	// Line 845, Address: 0x290248, Func Offset: 0x58
	// Line 847, Address: 0x29025c, Func Offset: 0x6c
	// Line 849, Address: 0x290270, Func Offset: 0x80
	// Line 851, Address: 0x290284, Func Offset: 0x94
	// Line 853, Address: 0x290298, Func Offset: 0xa8
	// Line 854, Address: 0x2902ac, Func Offset: 0xbc
	// Line 856, Address: 0x2902c0, Func Offset: 0xd0
	// Line 857, Address: 0x2902d4, Func Offset: 0xe4
	// Line 859, Address: 0x2902e8, Func Offset: 0xf8
	// Line 861, Address: 0x2902fc, Func Offset: 0x10c
	// Line 863, Address: 0x290310, Func Offset: 0x120
	// Line 864, Address: 0x290324, Func Offset: 0x134
	// Line 867, Address: 0x290328, Func Offset: 0x138
	// Line 868, Address: 0x290338, Func Offset: 0x148
	// Line 869, Address: 0x290348, Func Offset: 0x158
	// Line 870, Address: 0x29035c, Func Offset: 0x16c
	// Line 871, Address: 0x290370, Func Offset: 0x180
	// Line 872, Address: 0x290384, Func Offset: 0x194
	// Line 873, Address: 0x290398, Func Offset: 0x1a8
	// Line 874, Address: 0x2903ac, Func Offset: 0x1bc
	// Line 875, Address: 0x2903c0, Func Offset: 0x1d0
	// Line 876, Address: 0x2903d4, Func Offset: 0x1e4
	// Line 877, Address: 0x2903e8, Func Offset: 0x1f8
	// Line 878, Address: 0x2903fc, Func Offset: 0x20c
	// Line 880, Address: 0x290410, Func Offset: 0x220
	// Func End, Address: 0x290420, Func Offset: 0x230
}

// 
// Start address: 0x290420
void GameSpecialModeItemSelect()
{
	int i;
	int n;
	unsigned char* item_set_table;
	// Line 883, Address: 0x290420, Func Offset: 0
	// Line 888, Address: 0x29042c, Func Offset: 0xc
	// Line 892, Address: 0x290434, Func Offset: 0x14
	// Line 893, Address: 0x290444, Func Offset: 0x24
	// Line 894, Address: 0x290448, Func Offset: 0x28
	// Line 895, Address: 0x29044c, Func Offset: 0x2c
	// Line 896, Address: 0x29045c, Func Offset: 0x3c
	// Line 897, Address: 0x29046c, Func Offset: 0x4c
	// Line 898, Address: 0x290474, Func Offset: 0x54
	// Line 901, Address: 0x290478, Func Offset: 0x58
	// Line 903, Address: 0x29048c, Func Offset: 0x6c
	// Line 904, Address: 0x290490, Func Offset: 0x70
	// Line 905, Address: 0x290494, Func Offset: 0x74
	// Line 907, Address: 0x2904ac, Func Offset: 0x8c
	// Line 909, Address: 0x2904c0, Func Offset: 0xa0
	// Line 910, Address: 0x2904cc, Func Offset: 0xac
	// Line 911, Address: 0x2904d0, Func Offset: 0xb0
	// Line 912, Address: 0x2904d4, Func Offset: 0xb4
	// Line 913, Address: 0x2904e4, Func Offset: 0xc4
	// Line 915, Address: 0x2904f4, Func Offset: 0xd4
	// Line 916, Address: 0x2904f8, Func Offset: 0xd8
	// Func End, Address: 0x29050c, Func Offset: 0xec
}

