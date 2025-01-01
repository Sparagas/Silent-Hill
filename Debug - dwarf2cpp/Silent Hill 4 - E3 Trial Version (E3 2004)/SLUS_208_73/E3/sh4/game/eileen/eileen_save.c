typedef struct sgQTObject;
typedef struct _anon0;
typedef struct sgIKHandle;
typedef struct _anon1;
typedef struct _anon2;
typedef struct sgBone;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef enum BattleAttackKind : unsigned char;
typedef struct sfOffsetAABB;
typedef struct _anon6;
typedef struct sfObj;
typedef union sfCldBody;
typedef struct sfCldPart;
typedef struct sfCldObject;
typedef struct BattleHit;
typedef struct sgAnime;
typedef struct _anon7;
typedef struct _anon8;
typedef struct _GAME_WORK;
typedef union _anon9;
typedef struct _anon10;
typedef struct sfCharacter;
typedef enum BattleHitResult : unsigned char;
typedef struct sgQTNode;
typedef struct _anon11;
typedef struct sgSVModel;
typedef struct _anon12;
typedef enum sgIKSolveResult : unsigned char;
typedef struct _anon13;

typedef void(*type_0)(_anon11*, int, int, float*);
typedef sgIKSolveResult(*type_3)();
typedef void(*type_13)(sgAnime*, int);
typedef void(*type_20)(sfObj*);
typedef void(*type_28)(sfObj*);

typedef float type_1[4][2];
typedef char type_2[21];
typedef _anon1 type_4[4];
typedef _anon5 type_5[0];
typedef int type_6[1];
typedef unsigned char type_7[3];
typedef int type_8[1];
typedef void* type_9[4];
typedef int type_10[1];
typedef float type_11[4];
typedef float type_12[4][4];
typedef int type_14[1];
typedef float type_15[4];
typedef float type_16[4];
typedef int type_17[1];
typedef _anon9 type_18[256];
typedef int type_19[1];
typedef unsigned char type_21[4];
typedef unsigned char type_22[8];
typedef int type_23[1];
typedef short type_24[2];
typedef unsigned short type_25[2];
typedef char type_26[4];
typedef unsigned char type_27[4];
typedef float type_29[1];
typedef int type_30[1];
typedef sfCldPart* type_31[6];
typedef unsigned char type_32[3];

struct sgQTObject
{
	_anon0 bounding_ball;
	sgQTObject* next;
	sgQTObject* prev;
};

struct _anon0
{
	float center[4];
	float radius;
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

struct _anon1
{
	unsigned char next_offset;
	unsigned char flags;
	short id;
};

struct _anon2
{
	float bmin[4];
	float bmax[4];
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
	_anon5 vertex[0];
};

struct _anon4
{
	float mat[4][4];
	float half_w[4];
};

union _anon5
{
	float node[4];
	_anon1 data[4];
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

struct sfOffsetAABB
{
	_anon2 aabb;
	float offset[4];
};

struct _anon6
{
	float position[4];
	float rotation[4];
	float cursed_ratio;
	float total_damage;
	unsigned char arms_type;
	unsigned char stay_stage;
	unsigned char stay_scene;
	unsigned char status;
	unsigned char cynthia_status;
	unsigned char left_with_enemy_status;
	unsigned short left_with_enemy_count;
	unsigned short scene_change_count;
	unsigned short scene_change_with_eileen_count;
	unsigned short down_count;
	unsigned short henry_atk_count;
	unsigned int eileen_play_time;
	unsigned int with_henry_eileen_play_time;
	char flags[21];
};

struct sfObj
{
	_anon9 fwork[256];
	_anon9* work;
	void(*func)(sfObj*);
	_anon9* work_pt0;
	_anon9* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon9* sys_work;
	_anon9* scene_work;
	_anon9* event_work;
	_anon9* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

union sfCldBody
{
	_anon4 obb;
	_anon2 aabb;
	sfOffsetAABB offset_aabb;
	_anon13 line;
	_anon0 sphere;
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

struct sfCldObject
{
	sgQTObject tree_object;
	sgQTNode* stay_node;
	sfCldPart* parts[6];
	unsigned char n_parts;
	unsigned char pad[3];
	void* data;
};

struct BattleHit
{
	BattleAttackKind attack_kind;
	float damage;
	float shock;
	sfCldObject* cld_object;
	float origin_position[4];
	float attack_direction[4];
	BattleHitResult result;
	int flags;
	unsigned int id;
	void* origin;
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

struct _anon7
{
	float* life;
	float* life_max;
	float curse_value;
	float curse_value_current;
	float curse_value_base;
	float total_damage;
	sfCharacter* chara;
	short stage_no;
	short scene_no;
	float* local_pos;
	float global_pos[4];
	float target_dir[4];
	float follow_to_target;
	float pl_pos[4];
	float pl_rot[4];
	float pl_dir[4];
	float distance_to_henry;
	float distance_to_henry_last;
	float to_henry_angle_y;
	int limping;
	unsigned char henry_is_attacking;
	unsigned char hurry_to_henry;
	unsigned short henry_door_touch_timer;
	unsigned int eileen_play_time;
	unsigned int with_henry_eileen_play_time;
	unsigned short down_count;
	unsigned short henry_atk_count;
	unsigned char attack_attitude;
	int hit_status;
	float hit_origin[4];
	sfCldObject* cld_object;
	BattleHit* recieve_attack;
	int recieve_attack_id;
	sfObj* body_hit_enemy;
	short body_hit_timer;
	short attack_hit_timer;
	int damage_is_large;
	int camera_overlap;
	int path_search_status;
	int out_of_scene;
	float global_target[4];
	float first_global_target[4];
	unsigned char global_target_status;
	unsigned char global_path_search_failed;
	_anon8* anm_ctrl;
	int anm_slot;
	float anm_ratio;
	unsigned char anime_mixer_using;
	unsigned char anime_end;
	unsigned char left_foot_on;
	unsigned char right_foot_on;
	float left_foot_hosei;
	float right_foot_hosei;
	int turn_face;
	float turn_ratio;
	float face_target[4];
	float turned_face_rot[4];
	float body_dir[4];
	float move_dir[4];
	float speed;
	float accel;
	float op_move_speed;
	unsigned char limping_move;
	unsigned char op_move_mode;
	float op_move_dir[4];
	float last_pos[4];
	float last_move_dir[4];
	float last_speed;
	float ball_last[4];
	_anon0 ball;
	unsigned char hurdle_status;
	unsigned char slope_status;
	float front_height;
	_anon3* ground_poly;
	unsigned char action;
	unsigned char action_target;
	unsigned char next_action;
	unsigned char next_action_target;
	unsigned char action_mask;
	unsigned char face_move_step;
	unsigned char down_at_first;
	unsigned char hurdle_avoid;
	unsigned char hurdle_avoid_enter;
	unsigned char hurdle_avoid_tried_check;
	short hurdle_avoid_timer;
	short hurdle_avoid_retry_timer;
	float action_frames;
	float angle_speed;
	int timer;
	unsigned char wait_type;
	float speed_ratio;
	short slide_side_in;
	short slide_side;
	short breath_type;
	short turn_large;
	float max_angle_sp;
	sfObj* battle_target;
	float battle_target_position[4];
	float battle_target_center[4];
	float battle_target_direction[4];
	float to_battle_target;
	float battle_target_angle_y;
	unsigned char invincible;
	unsigned char attack_method_suggest;
	unsigned char target_is_large;
	unsigned char battle_target_is_seizing;
	unsigned char curse_on_henry;
	unsigned char curse_suffer;
	unsigned char gun_attack_result;
	short weapon_type;
	short weapon_to_equip;
	short attacking_on;
	short attack_times;
	short henry_attack_check_timer;
	int gun_aiming;
	float aim_target_position[4];
	float current_hand_position[4];
	float moving_ratio;
	float arm_drot[4];
	float ud_offset[4];
	short insane_type;
	short insane_timer;
	short event_step;
	unsigned int se_no;
	short se_set_frame;
	short se_reset_frame;
	unsigned char words_end;
	unsigned char speaking;
	short talk_step;
	short talk_timer;
	_anon10* current_message;
	int tired_param;
	unsigned char command_status[8];
	float go_target[4];
	float turn_target[4];
	float watch_target[4];
	short talk_motion;
	short go_slide_flag;
	short step_counter;
	short status_when_end;
};

struct _anon8
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

union _anon9
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

struct _anon10
{
	int message_pack_id;
	int message_id;
	int voice_no;
	short frames;
	short last;
};

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon12 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
};

enum BattleHitResult : unsigned char
{
	GB_HIT_RES_NONE,
	GB_HIT_RES_PLAYER_HIT,
	GB_HIT_RES_ENEMY_HIT,
	GB_HIT_RES_EILEEN_HIT,
	GB_HIT_RES_END
};

struct sgQTNode
{
	int dummy;
};

struct _anon11
{
	unsigned long tex0;
	unsigned long clamp;
};

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
};

struct _anon12
{
	void* model;
	void* texture;
	void* texture_global;
	float matrices[4][4];
	float* weights;
	float tex_crops[4];
	void(*texture_load_func)(_anon11*, int, int, float*);
	int equip_flag;
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

struct _anon13
{
	float start[4];
	float end[4];
};

int global_target_status;
_GAME_WORK gamew;
float sg_vector_unit_w[4];
_anon6 eil_save_data;
float first_global_target[4];

void EileenSaveDataCopy(_anon6* data, _anon6* from_data);
void EileenSaveDataInitAll();
void EileenSaveDataInit();
_anon6* EileenSaveDataGet();
void EileenSaveDataUpdate(_anon6* data);
void EileenSaveDataRestore(_anon6* data);
void EileenSaveDataToWork(_anon7* eil);
void EileenSaveDataFromWork(_anon7* eil);
void* EileenSaveDataFlags();
int EileenSaveGlobalPathEnable();

// 
// Start address: 0x2e2240
void EileenSaveDataCopy(_anon6* data, _anon6* from_data)
{
	// Line 17, Address: 0x2e2240, Func Offset: 0
	// Line 18, Address: 0x2e2258, Func Offset: 0x18
	// Line 20, Address: 0x2e2260, Func Offset: 0x20
	// Line 21, Address: 0x2e2268, Func Offset: 0x28
	// Line 42, Address: 0x2e2270, Func Offset: 0x30
	// Line 22, Address: 0x2e2274, Func Offset: 0x34
	// Line 42, Address: 0x2e2278, Func Offset: 0x38
	// Line 22, Address: 0x2e2280, Func Offset: 0x40
	// Line 23, Address: 0x2e2284, Func Offset: 0x44
	// Line 24, Address: 0x2e228c, Func Offset: 0x4c
	// Line 25, Address: 0x2e2294, Func Offset: 0x54
	// Line 26, Address: 0x2e229c, Func Offset: 0x5c
	// Line 27, Address: 0x2e22a4, Func Offset: 0x64
	// Line 28, Address: 0x2e22ac, Func Offset: 0x6c
	// Line 30, Address: 0x2e22b4, Func Offset: 0x74
	// Line 31, Address: 0x2e22bc, Func Offset: 0x7c
	// Line 33, Address: 0x2e22c4, Func Offset: 0x84
	// Line 34, Address: 0x2e22cc, Func Offset: 0x8c
	// Line 36, Address: 0x2e22d4, Func Offset: 0x94
	// Line 37, Address: 0x2e22dc, Func Offset: 0x9c
	// Line 39, Address: 0x2e22e4, Func Offset: 0xa4
	// Line 40, Address: 0x2e22ec, Func Offset: 0xac
	// Line 42, Address: 0x2e22f0, Func Offset: 0xb0
	// Line 45, Address: 0x2e22f8, Func Offset: 0xb8
	// Func End, Address: 0x2e230c, Func Offset: 0xcc
}

// 
// Start address: 0x2e2310
void EileenSaveDataInitAll()
{
	_anon6* data;
	// Line 49, Address: 0x2e2310, Func Offset: 0
	// Line 52, Address: 0x2e2314, Func Offset: 0x4
	// Line 49, Address: 0x2e2318, Func Offset: 0x8
	// Line 50, Address: 0x2e2320, Func Offset: 0x10
	// Line 52, Address: 0x2e2328, Func Offset: 0x18
	// Line 54, Address: 0x2e2330, Func Offset: 0x20
	// Line 55, Address: 0x2e2340, Func Offset: 0x30
	// Line 56, Address: 0x2e2348, Func Offset: 0x38
	// Line 57, Address: 0x2e2354, Func Offset: 0x44
	// Line 59, Address: 0x2e2360, Func Offset: 0x50
	// Line 60, Address: 0x2e2368, Func Offset: 0x58
	// Func End, Address: 0x2e2378, Func Offset: 0x68
}

// 
// Start address: 0x2e2380
void EileenSaveDataInit()
{
	_anon6* data;
	// Line 67, Address: 0x2e2380, Func Offset: 0
	// Line 65, Address: 0x2e2384, Func Offset: 0x4
	// Line 67, Address: 0x2e2388, Func Offset: 0x8
	// Line 65, Address: 0x2e238c, Func Offset: 0xc
	// Line 67, Address: 0x2e2390, Func Offset: 0x10
	// Line 68, Address: 0x2e2398, Func Offset: 0x18
	// Line 69, Address: 0x2e23a0, Func Offset: 0x20
	// Line 70, Address: 0x2e23ac, Func Offset: 0x2c
	// Line 74, Address: 0x2e23b8, Func Offset: 0x38
	// Line 71, Address: 0x2e23bc, Func Offset: 0x3c
	// Line 72, Address: 0x2e23c0, Func Offset: 0x40
	// Line 73, Address: 0x2e23c4, Func Offset: 0x44
	// Line 75, Address: 0x2e23c8, Func Offset: 0x48
	// Func End, Address: 0x2e23d0, Func Offset: 0x50
}

// 
// Start address: 0x2e23d0
_anon6* EileenSaveDataGet()
{
	// Line 79, Address: 0x2e23d0, Func Offset: 0
	// Line 80, Address: 0x2e23d4, Func Offset: 0x4
	// Func End, Address: 0x2e23dc, Func Offset: 0xc
}

// 
// Start address: 0x2e23e0
void EileenSaveDataUpdate(_anon6* data)
{
	// Line 84, Address: 0x2e23e0, Func Offset: 0
	// Line 86, Address: 0x2e23e4, Func Offset: 0x4
	// Line 84, Address: 0x2e23e8, Func Offset: 0x8
	// Line 86, Address: 0x2e23ec, Func Offset: 0xc
	// Line 84, Address: 0x2e23f0, Func Offset: 0x10
	// Line 86, Address: 0x2e23f4, Func Offset: 0x14
	// Line 87, Address: 0x2e23fc, Func Offset: 0x1c
	// Line 88, Address: 0x2e2408, Func Offset: 0x28
	// Line 89, Address: 0x2e2414, Func Offset: 0x34
	// Func End, Address: 0x2e2424, Func Offset: 0x44
}

// 
// Start address: 0x2e2430
void EileenSaveDataRestore(_anon6* data)
{
	// Line 99, Address: 0x2e2430, Func Offset: 0
	// Line 101, Address: 0x2e2440, Func Offset: 0x10
	// Line 102, Address: 0x2e2450, Func Offset: 0x20
	// Line 103, Address: 0x2e245c, Func Offset: 0x2c
	// Line 104, Address: 0x2e2468, Func Offset: 0x38
	// Func End, Address: 0x2e2478, Func Offset: 0x48
}

// 
// Start address: 0x2e2480
void EileenSaveDataToWork(_anon7* eil)
{
	_anon6* eil_save;
	sfCharacter* chara;
	float start_position[4];
	float start_rotation[4];
	// Line 108, Address: 0x2e2480, Func Offset: 0
	// Line 109, Address: 0x2e2498, Func Offset: 0x18
	// Line 114, Address: 0x2e249c, Func Offset: 0x1c
	// Line 117, Address: 0x2e24a4, Func Offset: 0x24
	// Line 118, Address: 0x2e24b0, Func Offset: 0x30
	// Line 119, Address: 0x2e24bc, Func Offset: 0x3c
	// Line 120, Address: 0x2e24c4, Func Offset: 0x44
	// Line 121, Address: 0x2e24cc, Func Offset: 0x4c
	// Line 123, Address: 0x2e24d4, Func Offset: 0x54
	// Line 124, Address: 0x2e24d8, Func Offset: 0x58
	// Line 125, Address: 0x2e24e0, Func Offset: 0x60
	// Line 126, Address: 0x2e24ec, Func Offset: 0x6c
	// Line 135, Address: 0x2e24f0, Func Offset: 0x70
	// Line 134, Address: 0x2e24f4, Func Offset: 0x74
	// Line 135, Address: 0x2e24f8, Func Offset: 0x78
	// Line 126, Address: 0x2e24fc, Func Offset: 0x7c
	// Line 127, Address: 0x2e2500, Func Offset: 0x80
	// Line 128, Address: 0x2e2508, Func Offset: 0x88
	// Line 129, Address: 0x2e2510, Func Offset: 0x90
	// Line 130, Address: 0x2e2518, Func Offset: 0x98
	// Line 131, Address: 0x2e2520, Func Offset: 0xa0
	// Line 134, Address: 0x2e2528, Func Offset: 0xa8
	// Line 135, Address: 0x2e2530, Func Offset: 0xb0
	// Line 136, Address: 0x2e2538, Func Offset: 0xb8
	// Func End, Address: 0x2e2550, Func Offset: 0xd0
}

// 
// Start address: 0x2e2550
void EileenSaveDataFromWork(_anon7* eil)
{
	_anon6* eil_save;
	sfCharacter* chara;
	float q[4];
	float gl_pos[4];
	float offset[4];
	// Line 140, Address: 0x2e2550, Func Offset: 0
	// Line 141, Address: 0x2e2564, Func Offset: 0x14
	// Line 144, Address: 0x2e2568, Func Offset: 0x18
	// Line 147, Address: 0x2e2570, Func Offset: 0x20
	// Line 148, Address: 0x2e257c, Func Offset: 0x2c
	// Line 149, Address: 0x2e2580, Func Offset: 0x30
	// Line 150, Address: 0x2e2588, Func Offset: 0x38
	// Line 151, Address: 0x2e259c, Func Offset: 0x4c
	// Line 153, Address: 0x2e25a0, Func Offset: 0x50
	// Line 154, Address: 0x2e25ac, Func Offset: 0x5c
	// Line 155, Address: 0x2e25b4, Func Offset: 0x64
	// Line 156, Address: 0x2e25bc, Func Offset: 0x6c
	// Line 160, Address: 0x2e25c8, Func Offset: 0x78
	// Line 161, Address: 0x2e25cc, Func Offset: 0x7c
	// Line 162, Address: 0x2e25dc, Func Offset: 0x8c
	// Line 163, Address: 0x2e25f0, Func Offset: 0xa0
	// Line 164, Address: 0x2e260c, Func Offset: 0xbc
	// Line 165, Address: 0x2e2610, Func Offset: 0xc0
	// Line 175, Address: 0x2e2614, Func Offset: 0xc4
	// Line 165, Address: 0x2e2620, Func Offset: 0xd0
	// Line 167, Address: 0x2e262c, Func Offset: 0xdc
	// Line 168, Address: 0x2e2634, Func Offset: 0xe4
	// Line 169, Address: 0x2e263c, Func Offset: 0xec
	// Line 170, Address: 0x2e2644, Func Offset: 0xf4
	// Line 171, Address: 0x2e264c, Func Offset: 0xfc
	// Line 172, Address: 0x2e2654, Func Offset: 0x104
	// Line 175, Address: 0x2e265c, Func Offset: 0x10c
	// Line 176, Address: 0x2e2664, Func Offset: 0x114
	// Line 177, Address: 0x2e2674, Func Offset: 0x124
	// Func End, Address: 0x2e268c, Func Offset: 0x13c
}

// 
// Start address: 0x2e2690
void* EileenSaveDataFlags()
{
	// Line 183, Address: 0x2e2690, Func Offset: 0
	// Line 184, Address: 0x2e2694, Func Offset: 0x4
	// Func End, Address: 0x2e269c, Func Offset: 0xc
}

// 
// Start address: 0x2e26a0
int EileenSaveGlobalPathEnable()
{
	// Line 190, Address: 0x2e26a0, Func Offset: 0
	// Line 193, Address: 0x2e26a8, Func Offset: 0x8
	// Func End, Address: 0x2e26b0, Func Offset: 0x10
}

