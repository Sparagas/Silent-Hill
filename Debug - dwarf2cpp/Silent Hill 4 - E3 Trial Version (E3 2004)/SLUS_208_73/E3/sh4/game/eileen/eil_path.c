typedef struct sfCldObject;
typedef struct _anon0;
typedef struct sgBone;
typedef struct BattleHit;
typedef struct _anon1;
typedef struct sfObj;
typedef struct sgAnime;
typedef union _anon2;
typedef struct sgIKHandle;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef struct _anon6;
typedef struct sfCharacter;
typedef enum BattleHitResult : unsigned char;
typedef struct sgQTNode;
typedef struct _anon7;
typedef struct sfCldPart;
typedef struct _anon8;
typedef struct sgSVModel;
typedef struct _anon9;
typedef union _anon10;
typedef enum _enum_0 : unsigned char;
typedef enum sgIKSolveResult : unsigned char;
typedef struct sgQTObject;
typedef struct _anon11;
typedef struct _anon12;
typedef struct _anon13;
typedef enum _enum_1 : unsigned char;
typedef struct _anon14;
typedef enum BattleAttackKind : unsigned char;
typedef struct sfOffsetAABB;
typedef union _anon15;
typedef struct _anon16;
typedef struct _anon17;
typedef union sfCldBody;
typedef struct _GAME_WORK;

typedef void(*type_5)(sgAnime*, int);
typedef void(*type_20)(_anon8*, int, int, float*);
typedef void(*type_24)(sfObj*);
typedef sgIKSolveResult(*type_29)();
typedef void(*type_33)(sfObj*);

typedef char type_0[2];
typedef int type_1[1];
typedef void* type_2[4];
typedef _anon17 type_3[32];
typedef _anon2 type_4[32];
typedef float type_6[4];
typedef unsigned char type_7[4];
typedef unsigned char type_8[8];
typedef float type_9[4];
typedef float type_10[4][4];
typedef int type_11[2];
typedef sfCldPart* type_12[6];
typedef unsigned char type_13[3];
typedef float type_14[4];
typedef int type_15[1];
typedef short type_16[2];
typedef int type_17[1];
typedef unsigned short type_18[2];
typedef _anon10 type_19[256];
typedef char type_21[4];
typedef int type_22[2];
typedef unsigned char type_23[4];
typedef float type_25[1];
typedef int type_26[1];
typedef float type_27[4][2];
typedef int type_28[1];
typedef int type_30[1];
typedef _anon13 type_31[4];
typedef _anon15 type_32[0];
typedef int type_34[1];
typedef int type_35[1];
typedef unsigned char type_36[3];

struct sfCldObject
{
	sgQTObject tree_object;
	sgQTNode* stay_node;
	sfCldPart* parts[6];
	unsigned char n_parts;
	unsigned char pad[3];
	void* data;
};

struct _anon0
{
	_anon3 eil_path;
	_anon3* cur_path;
	float path_start[4];
	float path_target[4];
	int n_path_point;
	int path_point_index;
	int global_searching;
	int current_target_is_valid;
	float current_target[4];
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

struct _anon1
{
	float x;
	float y;
	float z;
	char scene[2];
	char attr;
	char padding;
};

struct sfObj
{
	_anon10 fwork[256];
	_anon10* work;
	void(*func)(sfObj*);
	_anon10* work_pt0;
	_anon10* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon10* sys_work;
	_anon10* scene_work;
	_anon10* event_work;
	_anon10* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
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

union _anon2
{
	float vec[4];
	_anon1 val;
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

struct _anon3
{
	_anon2 path[32];
	int path_num;
	_enum_0 type;
};

struct _anon4
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
	_anon5* anm_ctrl;
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
	_anon12 ball;
	unsigned char hurdle_status;
	unsigned char slope_status;
	float front_height;
	_anon7* ground_poly;
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
	_anon6* current_message;
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

struct _anon5
{
	int dummy;
};

struct _anon6
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
	_anon9 model_work;
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

struct _anon7
{
	_anon15 vertex[0];
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

struct _anon8
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

struct _anon9
{
	void* model;
	void* texture;
	void* texture_global;
	float matrices[4][4];
	float* weights;
	float tex_crops[4];
	void(*texture_load_func)(_anon8*, int, int, float*);
	int equip_flag;
};

union _anon10
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

enum _enum_0 : unsigned char
{
	SF_STAGE_PATH,
	SF_DETAIL_PATH,
	SF_GHOST_POINT,
	SF_WARP_POINT,
	SF_PATH_TYPE_NUM,
	SF_BLUE_PATH = 0,
	SF_RED_PATH,
	SF_GREEN_POINT,
	SF_YELLOW_POINT
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

struct sgQTObject
{
	_anon12 bounding_ball;
	sgQTObject* next;
	sgQTObject* prev;
};

struct _anon11
{
	float start[4];
	float end[4];
};

struct _anon12
{
	float center[4];
	float radius;
};

struct _anon13
{
	unsigned char next_offset;
	unsigned char flags;
	short id;
};

enum _enum_1 : unsigned char
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

struct _anon14
{
	float bmin[4];
	float bmax[4];
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
	_anon14 aabb;
	float offset[4];
};

union _anon15
{
	float node[4];
	_anon13 data[4];
};

struct _anon16
{
	float mat[4][4];
	float half_w[4];
};

struct _anon17
{
	float pos[4];
	float dot;
};

union sfCldBody
{
	_anon16 obb;
	_anon14 aabb;
	sfOffsetAABB offset_aabb;
	_anon11 line;
	_anon12 sphere;
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

float error_target[4];
_GAME_WORK gamew;
_anon0 path_work;

_anon3* PathWorkPath(_anon0* w);
int PathWorkCurrentPointIndex(_anon0* w);
int PathWorkPointIncrement(_anon0* w);
void PathWorkPointHosei(_anon0* w, float* v);
void PathWorkCurrentPoint(_anon0* w, float* pos);
void PathWorkTargetPointScene(_anon0* w, int* scene);
void PathWorkTarget(_anon0* w, float* pos);
int PathWorkCreateDetail(_anon0* w, float* from_pos, float* to_pos);
int PathWorkReserchDetail(_anon0* w, float* to_pos);
int PathWorkCreateGlobal2(_anon0* w, float* from_pos, int from_scene, float* to_pos, int to_scene);
int ArriveCheck(float* current_pos, float* target_pos);
int ArriveCheck2(float* current_pos, float* target_pos);
void EilPathSearchInit();
int EilPathSearch(_anon4* eil, float* target_pos, float* dest_pos);
int EilPathEscapePoint(_anon4* eil, float* caused_point, float* destination);
int EilPathNearestPoint(_anon4* eil, float* destination);
int EilPathCheckSceneConnection(_enum_1 stage, int from_scene, int to_scene);
int EilPathSearchGlobal(_anon4* eil, float* target_pos, float* dest_pos);
void EilPathUpdateGlobalPathStart(_anon4* eil);

// 
// Start address: 0x2b4120
_anon3* PathWorkPath(_anon0* w)
{
	// Line 49, Address: 0x2b4120, Func Offset: 0
	// Func End, Address: 0x2b4128, Func Offset: 0x8
}

// 
// Start address: 0x2b4130
int PathWorkCurrentPointIndex(_anon0* w)
{
	// Line 54, Address: 0x2b4130, Func Offset: 0
	// Func End, Address: 0x2b4138, Func Offset: 0x8
}

// 
// Start address: 0x2b4140
int PathWorkPointIncrement(_anon0* w)
{
	// Line 58, Address: 0x2b4140, Func Offset: 0
	// Line 59, Address: 0x2b4154, Func Offset: 0x14
	// Line 61, Address: 0x2b4158, Func Offset: 0x18
	// Line 59, Address: 0x2b415c, Func Offset: 0x1c
	// Line 61, Address: 0x2b4160, Func Offset: 0x20
	// Line 63, Address: 0x2b4168, Func Offset: 0x28
	// Line 64, Address: 0x2b4170, Func Offset: 0x30
	// Func End, Address: 0x2b4178, Func Offset: 0x38
}

// 
// Start address: 0x2b4180
void PathWorkPointHosei(_anon0* w, float* v)
{
	float offset[4];
	// Line 77, Address: 0x2b4180, Func Offset: 0
	// Line 80, Address: 0x2b4194, Func Offset: 0x14
	// Line 82, Address: 0x2b41a4, Func Offset: 0x24
	// Line 83, Address: 0x2b41b0, Func Offset: 0x30
	// Line 84, Address: 0x2b41c4, Func Offset: 0x44
	// Line 85, Address: 0x2b41dc, Func Offset: 0x5c
	// Line 86, Address: 0x2b41e0, Func Offset: 0x60
	// Line 87, Address: 0x2b41f0, Func Offset: 0x70
	// Line 89, Address: 0x2b41f8, Func Offset: 0x78
	// Line 90, Address: 0x2b4204, Func Offset: 0x84
	// Line 93, Address: 0x2b4218, Func Offset: 0x98
	// Func End, Address: 0x2b422c, Func Offset: 0xac
}

// 
// Start address: 0x2b4230
void PathWorkCurrentPoint(_anon0* w, float* pos)
{
	_anon2 path_point;
	float v[4];
	// Line 97, Address: 0x2b4230, Func Offset: 0
	// Line 100, Address: 0x2b4244, Func Offset: 0x14
	// Line 102, Address: 0x2b4250, Func Offset: 0x20
	// Line 103, Address: 0x2b426c, Func Offset: 0x3c
	// Line 104, Address: 0x2b4278, Func Offset: 0x48
	// Line 105, Address: 0x2b4284, Func Offset: 0x54
	// Line 106, Address: 0x2b4290, Func Offset: 0x60
	// Line 108, Address: 0x2b4298, Func Offset: 0x68
	// Line 109, Address: 0x2b42a0, Func Offset: 0x70
	// Func End, Address: 0x2b42b4, Func Offset: 0x84
}

// 
// Start address: 0x2b42c0
void PathWorkTargetPointScene(_anon0* w, int* scene)
{
	_anon2 path_point;
	int scene0;
	int scene1;
	int idx;
	// Line 160, Address: 0x2b42c0, Func Offset: 0
	// Line 166, Address: 0x2b42d0, Func Offset: 0x10
	// Line 167, Address: 0x2b42d8, Func Offset: 0x18
	// Line 168, Address: 0x2b42ec, Func Offset: 0x2c
	// Line 169, Address: 0x2b42fc, Func Offset: 0x3c
	// Line 170, Address: 0x2b4308, Func Offset: 0x48
	// Line 171, Address: 0x2b430c, Func Offset: 0x4c
	// Line 172, Address: 0x2b4310, Func Offset: 0x50
	// Func End, Address: 0x2b4324, Func Offset: 0x64
}

// 
// Start address: 0x2b4330
void PathWorkTarget(_anon0* w, float* pos)
{
	// Line 177, Address: 0x2b4330, Func Offset: 0
	// Line 178, Address: 0x2b4334, Func Offset: 0x4
	// Func End, Address: 0x2b433c, Func Offset: 0xc
}

// 
// Start address: 0x2b4340
int PathWorkCreateDetail(_anon0* w, float* from_pos, float* to_pos)
{
	int pathfind_success;
	// Line 184, Address: 0x2b4340, Func Offset: 0
	// Line 186, Address: 0x2b4350, Func Offset: 0x10
	// Line 188, Address: 0x2b4358, Func Offset: 0x18
	// Line 189, Address: 0x2b4370, Func Offset: 0x30
	// Line 190, Address: 0x2b4378, Func Offset: 0x38
	// Line 191, Address: 0x2b4380, Func Offset: 0x40
	// Line 193, Address: 0x2b4398, Func Offset: 0x58
	// Line 195, Address: 0x2b43a0, Func Offset: 0x60
	// Line 196, Address: 0x2b43b0, Func Offset: 0x70
	// Line 197, Address: 0x2b43b4, Func Offset: 0x74
	// Line 198, Address: 0x2b43bc, Func Offset: 0x7c
	// Line 199, Address: 0x2b43c0, Func Offset: 0x80
	// Line 200, Address: 0x2b43d4, Func Offset: 0x94
	// Line 203, Address: 0x2b43d8, Func Offset: 0x98
	// Line 201, Address: 0x2b43dc, Func Offset: 0x9c
	// Line 202, Address: 0x2b43e0, Func Offset: 0xa0
	// Line 203, Address: 0x2b43e4, Func Offset: 0xa4
	// Line 204, Address: 0x2b43e8, Func Offset: 0xa8
	// Func End, Address: 0x2b43f8, Func Offset: 0xb8
}

// 
// Start address: 0x2b4400
int PathWorkReserchDetail(_anon0* w, float* to_pos)
{
	int pathfind_success;
	// Line 210, Address: 0x2b4400, Func Offset: 0
	// Line 212, Address: 0x2b4410, Func Offset: 0x10
	// Line 213, Address: 0x2b4418, Func Offset: 0x18
	// Line 214, Address: 0x2b442c, Func Offset: 0x2c
	// Line 217, Address: 0x2b444c, Func Offset: 0x4c
	// Line 219, Address: 0x2b4454, Func Offset: 0x54
	// Line 220, Address: 0x2b4464, Func Offset: 0x64
	// Line 221, Address: 0x2b4468, Func Offset: 0x68
	// Line 223, Address: 0x2b4470, Func Offset: 0x70
	// Line 224, Address: 0x2b4484, Func Offset: 0x84
	// Line 227, Address: 0x2b4488, Func Offset: 0x88
	// Line 225, Address: 0x2b448c, Func Offset: 0x8c
	// Line 226, Address: 0x2b4490, Func Offset: 0x90
	// Line 227, Address: 0x2b4494, Func Offset: 0x94
	// Line 228, Address: 0x2b4498, Func Offset: 0x98
	// Func End, Address: 0x2b44a8, Func Offset: 0xa8
}

// 
// Start address: 0x2b44b0
int PathWorkCreateGlobal2(_anon0* w, float* from_pos, int from_scene, float* to_pos, int to_scene)
{
	int pathfind_success;
	// Line 250, Address: 0x2b44b0, Func Offset: 0
	// Line 252, Address: 0x2b44c0, Func Offset: 0x10
	// Line 253, Address: 0x2b44c8, Func Offset: 0x18
	// Line 254, Address: 0x2b44cc, Func Offset: 0x1c
	// Line 257, Address: 0x2b44e4, Func Offset: 0x34
	// Line 258, Address: 0x2b44ec, Func Offset: 0x3c
	// Line 259, Address: 0x2b44f0, Func Offset: 0x40
	// Line 261, Address: 0x2b44f8, Func Offset: 0x48
	// Line 262, Address: 0x2b450c, Func Offset: 0x5c
	// Line 263, Address: 0x2b4510, Func Offset: 0x60
	// Line 264, Address: 0x2b4518, Func Offset: 0x68
	// Line 265, Address: 0x2b451c, Func Offset: 0x6c
	// Line 266, Address: 0x2b4520, Func Offset: 0x70
	// Func End, Address: 0x2b4530, Func Offset: 0x80
}

// 
// Start address: 0x2b4530
int ArriveCheck(float* current_pos, float* target_pos)
{
	float v[4];
	float r;
	// Line 273, Address: 0x2b4530, Func Offset: 0
	// Line 276, Address: 0x2b4534, Func Offset: 0x4
	// Line 278, Address: 0x2b454c, Func Offset: 0x1c
	// Line 279, Address: 0x2b4550, Func Offset: 0x20
	// Line 278, Address: 0x2b4558, Func Offset: 0x28
	// Line 279, Address: 0x2b455c, Func Offset: 0x2c
	// Line 281, Address: 0x2b4578, Func Offset: 0x48
	// Line 282, Address: 0x2b4590, Func Offset: 0x60
	// Line 283, Address: 0x2b4598, Func Offset: 0x68
	// Line 284, Address: 0x2b45a0, Func Offset: 0x70
	// Func End, Address: 0x2b45a8, Func Offset: 0x78
}

// 
// Start address: 0x2b45b0
int ArriveCheck2(float* current_pos, float* target_pos)
{
	float v[4];
	float r;
	// Line 289, Address: 0x2b45b0, Func Offset: 0
	// Line 292, Address: 0x2b45b4, Func Offset: 0x4
	// Line 294, Address: 0x2b45cc, Func Offset: 0x1c
	// Line 295, Address: 0x2b45d0, Func Offset: 0x20
	// Line 294, Address: 0x2b45d8, Func Offset: 0x28
	// Line 295, Address: 0x2b45dc, Func Offset: 0x2c
	// Line 297, Address: 0x2b45f8, Func Offset: 0x48
	// Line 298, Address: 0x2b4610, Func Offset: 0x60
	// Line 299, Address: 0x2b4618, Func Offset: 0x68
	// Line 300, Address: 0x2b4620, Func Offset: 0x70
	// Func End, Address: 0x2b4628, Func Offset: 0x78
}

// 
// Start address: 0x2b4630
void EilPathSearchInit()
{
	// Line 306, Address: 0x2b4630, Func Offset: 0
	// Line 307, Address: 0x2b4648, Func Offset: 0x18
	// Line 308, Address: 0x2b4654, Func Offset: 0x24
	// Func End, Address: 0x2b465c, Func Offset: 0x2c
}

// 
// Start address: 0x2b4660
int EilPathSearch(_anon4* eil, float* target_pos, float* dest_pos)
{
	float eil_pos[4];
	float current_target[4];
	float path_target[4];
	float v[4];
	float r;
	_anon0* w;
	int ret;
	int arrive;
	// Line 317, Address: 0x2b4660, Func Offset: 0
	// Line 323, Address: 0x2b4688, Func Offset: 0x28
	// Line 327, Address: 0x2b468c, Func Offset: 0x2c
	// Line 323, Address: 0x2b4690, Func Offset: 0x30
	// Line 327, Address: 0x2b4694, Func Offset: 0x34
	// Line 329, Address: 0x2b469c, Func Offset: 0x3c
	// Line 330, Address: 0x2b46ac, Func Offset: 0x4c
	// Line 331, Address: 0x2b46b8, Func Offset: 0x58
	// Line 332, Address: 0x2b46c0, Func Offset: 0x60
	// Line 333, Address: 0x2b46c8, Func Offset: 0x68
	// Line 334, Address: 0x2b46d4, Func Offset: 0x74
	// Line 337, Address: 0x2b46d8, Func Offset: 0x78
	// Line 338, Address: 0x2b46e4, Func Offset: 0x84
	// Line 339, Address: 0x2b4700, Func Offset: 0xa0
	// Line 341, Address: 0x2b4724, Func Offset: 0xc4
	// Line 342, Address: 0x2b4740, Func Offset: 0xe0
	// Line 343, Address: 0x2b4748, Func Offset: 0xe8
	// Line 344, Address: 0x2b4750, Func Offset: 0xf0
	// Line 347, Address: 0x2b4758, Func Offset: 0xf8
	// Line 350, Address: 0x2b4764, Func Offset: 0x104
	// Line 354, Address: 0x2b4778, Func Offset: 0x118
	// Line 355, Address: 0x2b4784, Func Offset: 0x124
	// Line 356, Address: 0x2b478c, Func Offset: 0x12c
	// Line 358, Address: 0x2b4798, Func Offset: 0x138
	// Line 359, Address: 0x2b47a4, Func Offset: 0x144
	// Line 361, Address: 0x2b47a8, Func Offset: 0x148
	// Line 362, Address: 0x2b47bc, Func Offset: 0x15c
	// Line 363, Address: 0x2b47cc, Func Offset: 0x16c
	// Line 366, Address: 0x2b47d0, Func Offset: 0x170
	// Line 367, Address: 0x2b47dc, Func Offset: 0x17c
	// Line 368, Address: 0x2b47e0, Func Offset: 0x180
	// Func End, Address: 0x2b4800, Func Offset: 0x1a0
}

// 
// Start address: 0x2b4800
int EilPathEscapePoint(_anon4* eil, float* caused_point, float* destination)
{
	int n_points;
	_anon17 points[32];
	float v[4];
	float to_enemy[4];
	float eil_pos[4];
	float small_dot;
	float d;
	int good_point_n;
	int i;
	// Line 383, Address: 0x2b4800, Func Offset: 0
	// Line 394, Address: 0x2b482c, Func Offset: 0x2c
	// Line 395, Address: 0x2b4838, Func Offset: 0x38
	// Line 396, Address: 0x2b4844, Func Offset: 0x44
	// Line 398, Address: 0x2b4848, Func Offset: 0x48
	// Line 399, Address: 0x2b4850, Func Offset: 0x50
	// Line 400, Address: 0x2b4864, Func Offset: 0x64
	// Line 401, Address: 0x2b487c, Func Offset: 0x7c
	// Line 400, Address: 0x2b4880, Func Offset: 0x80
	// Line 401, Address: 0x2b4884, Func Offset: 0x84
	// Line 403, Address: 0x2b4894, Func Offset: 0x94
	// Line 404, Address: 0x2b48a0, Func Offset: 0xa0
	// Line 405, Address: 0x2b48bc, Func Offset: 0xbc
	// Line 406, Address: 0x2b48e8, Func Offset: 0xe8
	// Line 409, Address: 0x2b48f0, Func Offset: 0xf0
	// Line 410, Address: 0x2b48f4, Func Offset: 0xf4
	// Line 412, Address: 0x2b4900, Func Offset: 0x100
	// Line 416, Address: 0x2b491c, Func Offset: 0x11c
	// Line 417, Address: 0x2b4940, Func Offset: 0x140
	// Line 421, Address: 0x2b4980, Func Offset: 0x180
	// Line 422, Address: 0x2b49a8, Func Offset: 0x1a8
	// Line 423, Address: 0x2b49d4, Func Offset: 0x1d4
	// Line 425, Address: 0x2b49fc, Func Offset: 0x1fc
	// Line 426, Address: 0x2b4a08, Func Offset: 0x208
	// Line 427, Address: 0x2b4a0c, Func Offset: 0x20c
	// Line 429, Address: 0x2b4a10, Func Offset: 0x210
	// Line 431, Address: 0x2b4a24, Func Offset: 0x224
	// Line 432, Address: 0x2b4a2c, Func Offset: 0x22c
	// Line 433, Address: 0x2b4a40, Func Offset: 0x240
	// Line 436, Address: 0x2b4a48, Func Offset: 0x248
	// Line 437, Address: 0x2b4a50, Func Offset: 0x250
	// Func End, Address: 0x2b4a78, Func Offset: 0x278
}

// 
// Start address: 0x2b4a80
int EilPathNearestPoint(_anon4* eil, float* destination)
{
	int n_points;
	int i;
	float v[4];
	float d;
	float nearest_r;
	float pos[4];
	// Line 445, Address: 0x2b4a80, Func Offset: 0
	// Line 453, Address: 0x2b4a84, Func Offset: 0x4
	// Line 445, Address: 0x2b4a88, Func Offset: 0x8
	// Line 453, Address: 0x2b4a8c, Func Offset: 0xc
	// Line 445, Address: 0x2b4a90, Func Offset: 0x10
	// Line 454, Address: 0x2b4aac, Func Offset: 0x2c
	// Line 453, Address: 0x2b4ab0, Func Offset: 0x30
	// Line 454, Address: 0x2b4ab4, Func Offset: 0x34
	// Line 456, Address: 0x2b4ab8, Func Offset: 0x38
	// Line 458, Address: 0x2b4ac4, Func Offset: 0x44
	// Line 459, Address: 0x2b4ad0, Func Offset: 0x50
	// Line 460, Address: 0x2b4adc, Func Offset: 0x5c
	// Line 462, Address: 0x2b4ae8, Func Offset: 0x68
	// Line 464, Address: 0x2b4afc, Func Offset: 0x7c
	// Line 465, Address: 0x2b4b1c, Func Offset: 0x9c
	// Line 466, Address: 0x2b4b44, Func Offset: 0xc4
	// Line 467, Address: 0x2b4b50, Func Offset: 0xd0
	// Line 468, Address: 0x2b4b5c, Func Offset: 0xdc
	// Line 470, Address: 0x2b4b60, Func Offset: 0xe0
	// Line 473, Address: 0x2b4b74, Func Offset: 0xf4
	// Line 474, Address: 0x2b4b88, Func Offset: 0x108
	// Line 477, Address: 0x2b4b90, Func Offset: 0x110
	// Line 478, Address: 0x2b4ba8, Func Offset: 0x128
	// Line 481, Address: 0x2b4bb0, Func Offset: 0x130
	// Line 482, Address: 0x2b4bb8, Func Offset: 0x138
	// Func End, Address: 0x2b4bd8, Func Offset: 0x158
}

// 
// Start address: 0x2b4be0
int EilPathCheckSceneConnection(_enum_1 stage, int from_scene, int to_scene)
{
	int n_doors;
	int i;
	int door_type;
	int connect_scene;
	int* door;
	// Line 488, Address: 0x2b4be0, Func Offset: 0
	// Line 491, Address: 0x2b4be4, Func Offset: 0x4
	// Line 488, Address: 0x2b4be8, Func Offset: 0x8
	// Line 491, Address: 0x2b4c08, Func Offset: 0x28
	// Line 492, Address: 0x2b4c18, Func Offset: 0x38
	// Line 498, Address: 0x2b4c20, Func Offset: 0x40
	// Line 499, Address: 0x2b4c2c, Func Offset: 0x4c
	// Line 502, Address: 0x2b4c38, Func Offset: 0x58
	// Line 503, Address: 0x2b4c48, Func Offset: 0x68
	// Line 504, Address: 0x2b4c50, Func Offset: 0x70
	// Line 507, Address: 0x2b4c58, Func Offset: 0x78
	// Line 508, Address: 0x2b4c64, Func Offset: 0x84
	// Line 510, Address: 0x2b4c70, Func Offset: 0x90
	// Line 511, Address: 0x2b4c80, Func Offset: 0xa0
	// Line 512, Address: 0x2b4c88, Func Offset: 0xa8
	// Line 516, Address: 0x2b4c90, Func Offset: 0xb0
	// Line 527, Address: 0x2b4c9c, Func Offset: 0xbc
	// Line 528, Address: 0x2b4cb0, Func Offset: 0xd0
	// Line 533, Address: 0x2b4cb8, Func Offset: 0xd8
	// Line 534, Address: 0x2b4cd0, Func Offset: 0xf0
	// Line 537, Address: 0x2b4cd8, Func Offset: 0xf8
	// Line 540, Address: 0x2b4ce4, Func Offset: 0x104
	// Line 541, Address: 0x2b4cf8, Func Offset: 0x118
	// Line 544, Address: 0x2b4d00, Func Offset: 0x120
	// Line 550, Address: 0x2b4d08, Func Offset: 0x128
	// Line 551, Address: 0x2b4d10, Func Offset: 0x130
	// Func End, Address: 0x2b4d34, Func Offset: 0x154
}

// 
// Start address: 0x2b4d40
int EilPathSearchGlobal(_anon4* eil, float* target_pos, float* dest_pos)
{
	float eil_pos[4];
	float current_target[4];
	_anon0* w;
	int path_result;
	int scene[2];
	// Line 564, Address: 0x2b4d40, Func Offset: 0
	// Line 569, Address: 0x2b4d64, Func Offset: 0x24
	// Line 573, Address: 0x2b4d68, Func Offset: 0x28
	// Line 574, Address: 0x2b4d74, Func Offset: 0x34
	// Line 577, Address: 0x2b4db0, Func Offset: 0x70
	// Line 580, Address: 0x2b4dc0, Func Offset: 0x80
	// Line 582, Address: 0x2b4dd4, Func Offset: 0x94
	// Line 583, Address: 0x2b4ddc, Func Offset: 0x9c
	// Line 584, Address: 0x2b4de0, Func Offset: 0xa0
	// Line 586, Address: 0x2b4de8, Func Offset: 0xa8
	// Line 587, Address: 0x2b4df4, Func Offset: 0xb4
	// Line 590, Address: 0x2b4e00, Func Offset: 0xc0
	// Line 591, Address: 0x2b4e14, Func Offset: 0xd4
	// Line 592, Address: 0x2b4e18, Func Offset: 0xd8
	// Line 594, Address: 0x2b4e20, Func Offset: 0xe0
	// Line 596, Address: 0x2b4e2c, Func Offset: 0xec
	// Line 597, Address: 0x2b4e30, Func Offset: 0xf0
	// Line 598, Address: 0x2b4e3c, Func Offset: 0xfc
	// Line 599, Address: 0x2b4e50, Func Offset: 0x110
	// Line 601, Address: 0x2b4e5c, Func Offset: 0x11c
	// Line 599, Address: 0x2b4e60, Func Offset: 0x120
	// Line 601, Address: 0x2b4e64, Func Offset: 0x124
	// Line 603, Address: 0x2b4e78, Func Offset: 0x138
	// Line 604, Address: 0x2b4e7c, Func Offset: 0x13c
	// Line 603, Address: 0x2b4e80, Func Offset: 0x140
	// Line 604, Address: 0x2b4e84, Func Offset: 0x144
	// Line 605, Address: 0x2b4e8c, Func Offset: 0x14c
	// Line 606, Address: 0x2b4e90, Func Offset: 0x150
	// Line 609, Address: 0x2b4e98, Func Offset: 0x158
	// Line 610, Address: 0x2b4ea4, Func Offset: 0x164
	// Line 611, Address: 0x2b4eac, Func Offset: 0x16c
	// Line 612, Address: 0x2b4eb0, Func Offset: 0x170
	// Line 615, Address: 0x2b4eb8, Func Offset: 0x178
	// Line 616, Address: 0x2b4ec0, Func Offset: 0x180
	// Func End, Address: 0x2b4edc, Func Offset: 0x19c
}

// 
// Start address: 0x2b4ee0
void EilPathUpdateGlobalPathStart(_anon4* eil)
{
	float gl_pos[4];
	float offset[4];
	int idx;
	// Line 620, Address: 0x2b4ee0, Func Offset: 0
	// Line 628, Address: 0x2b4ee8, Func Offset: 0x8
	// Line 620, Address: 0x2b4eec, Func Offset: 0xc
	// Line 626, Address: 0x2b4ef0, Func Offset: 0x10
	// Line 628, Address: 0x2b4ef4, Func Offset: 0x14
	// Line 630, Address: 0x2b4efc, Func Offset: 0x1c
	// Line 629, Address: 0x2b4f00, Func Offset: 0x20
	// Line 630, Address: 0x2b4f04, Func Offset: 0x24
	// Line 629, Address: 0x2b4f08, Func Offset: 0x28
	// Line 630, Address: 0x2b4f10, Func Offset: 0x30
	// Line 629, Address: 0x2b4f1c, Func Offset: 0x3c
	// Line 630, Address: 0x2b4f20, Func Offset: 0x40
	// Line 632, Address: 0x2b4f28, Func Offset: 0x48
	// Line 634, Address: 0x2b4f40, Func Offset: 0x60
	// Line 637, Address: 0x2b4f48, Func Offset: 0x68
	// Line 638, Address: 0x2b4f4c, Func Offset: 0x6c
	// Func End, Address: 0x2b4f60, Func Offset: 0x80
}

