typedef struct sgBone;
typedef struct sfObj;
typedef struct sgAnime;
typedef enum sfMaphitMaterialType : unsigned char;
typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef union _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct sfCharacter;
typedef enum BattleHitResult : unsigned char;
typedef struct _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef struct BattleHit;
typedef struct sfCldObject;
typedef struct _anon9;
typedef struct sgQTNode;
typedef struct _anon10;
typedef struct sfCldPart;
typedef enum sgIKSolveResult : unsigned char;
typedef struct _anon11;
typedef struct sgSVModel;
typedef struct sgIKHandle;
typedef struct _anon12;
typedef struct sgQTObject;
typedef enum BattleAttackKind : unsigned char;
typedef enum EileenArmsTypeNo : unsigned char;
typedef struct sfOffsetAABB;
typedef union sfCldBody;

typedef void(*type_0)(sgAnime*, int);
typedef void(*type_7)(sfObj*);
typedef void(*type_9)(sfObj*);
typedef sgIKSolveResult(*type_15)();
typedef void(*type_17)(_anon11*, int, int, float*);

typedef float type_1[4];
typedef unsigned char type_2[4];
typedef _anon0 type_3[4];
typedef _anon5 type_4[256];
typedef _anon3 type_5[0];
typedef float type_6[4];
typedef unsigned char type_8[8];
typedef float type_10[4];
typedef float type_11[4][4];
typedef sfCldPart* type_12[6];
typedef unsigned char type_13[3];
typedef float type_14[4][2];
typedef short type_16[2];
typedef unsigned short type_18[2];
typedef char type_19[4];
typedef unsigned char type_20[4];
typedef float type_21[1];
typedef int type_22[1];
typedef void* type_23[4];
typedef unsigned char type_24[3];

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

struct sfObj
{
	_anon5 fwork[256];
	_anon5* work;
	void(*func)(sfObj*);
	_anon5* work_pt0;
	_anon5* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon5* sys_work;
	_anon5* scene_work;
	_anon5* event_work;
	_anon5* objhit_work;
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

enum sfMaphitMaterialType : unsigned char
{
	MH_MATERIAL_MUON,
	MH_MATERIAL_CON,
	MH_MATERIAL_TUCHI,
	MH_MATERIAL_KUSA,
	MH_MATERIAL_TETU,
	MH_MATERIAL_MIZU,
	MH_MATERIAL_TREE,
	MH_MATERIAL_JUUTAN,
	MH_MATERIAL_AMI,
	MH_MATERIAL_GARAS,
	MH_MATERIAL_KAATEN,
	MH_MATERIAL_NIKU,
	MH_MATERIAL_GAREKI
};

struct _anon0
{
	unsigned char next_offset;
	unsigned char flags;
	short id;
};

struct _anon1
{
	int dummy;
};

struct _anon2
{
	_anon3 vertex[0];
};

union _anon3
{
	float node[4];
	_anon0 data[4];
};

struct _anon4
{
	int message_pack_id;
	int message_id;
	int voice_no;
	short frames;
	short last;
};

union _anon5
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

struct _anon6
{
	float start[4];
	float end[4];
};

struct _anon7
{
	float center[4];
	float radius;
};

struct _anon8
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
	_anon1* anm_ctrl;
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
	_anon7 ball;
	unsigned char hurdle_status;
	unsigned char slope_status;
	float front_height;
	_anon2* ground_poly;
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
	_anon4* current_message;
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

struct sfCldObject
{
	sgQTObject tree_object;
	sgQTNode* stay_node;
	sfCldPart* parts[6];
	unsigned char n_parts;
	unsigned char pad[3];
	void* data;
};

struct _anon9
{
	float bmin[4];
	float bmax[4];
};

struct sgQTNode
{
	int dummy;
};

struct _anon10
{
	float mat[4][4];
	float half_w[4];
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

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
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

struct sgQTObject
{
	_anon7 bounding_ball;
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

enum EileenArmsTypeNo : unsigned char
{
	EIL_ARMS_NONE,
	EIL_ARMS_HANDBAG,
	EIL_ARMS_CLUB,
	EIL_ARMS_ROD,
	EIL_ARMS_CHAIN,
	EIL_ARMS_GUN,
	EIL_ARMS_MAX
};

struct sfOffsetAABB
{
	_anon9 aabb;
	float offset[4];
};

union sfCldBody
{
	_anon10 obb;
	_anon9 aabb;
	sfOffsetAABB offset_aabb;
	_anon6 line;
	_anon7 sphere;
};


void EilSd(int sd_no);
void EilSe(_anon8* eil, int se_no);
void EilSeFrameReset(_anon8* eil);
void EilSeFrame(_anon8* eil, int se_no, int fr_no);
void EilSeFrameSet(_anon8* eil, int se_no, int fr_no);
void EilSeFrameExec(_anon8* eil);
void EilSeArmsAttack(_anon8* eil, EileenArmsTypeNo weapon);
int GetFootSE(sfMaphitMaterialType mat);
void FootSE(_anon8* eil);
void EileenSound(_anon8* eil);

// 
// Start address: 0x2e44f0
void EilSd(int sd_no)
{
	// Line 18, Address: 0x2e44f0, Func Offset: 0
	// Func End, Address: 0x2e4510, Func Offset: 0x20
}

// 
// Start address: 0x2e4510
void EilSe(_anon8* eil, int se_no)
{
	// Line 25, Address: 0x2e4514, Func Offset: 0x4
	// Func End, Address: 0x2e453c, Func Offset: 0x2c
}

// 
// Start address: 0x2e4540
void EilSeFrameReset(_anon8* eil)
{
	// Line 39, Address: 0x2e4540, Func Offset: 0
	// Line 41, Address: 0x2e4548, Func Offset: 0x8
	// Func End, Address: 0x2e4550, Func Offset: 0x10
}

// 
// Start address: 0x2e4550
void EilSeFrame(_anon8* eil, int se_no, int fr_no)
{
	sgAnime* anm;
	int fr;
	// Line 46, Address: 0x2e4550, Func Offset: 0
	// Line 47, Address: 0x2e456c, Func Offset: 0x1c
	// Line 48, Address: 0x2e4574, Func Offset: 0x24
	// Line 50, Address: 0x2e457c, Func Offset: 0x2c
	// Line 51, Address: 0x2e458c, Func Offset: 0x3c
	// Line 53, Address: 0x2e4590, Func Offset: 0x40
	// Line 57, Address: 0x2e459c, Func Offset: 0x4c
	// Line 58, Address: 0x2e45a4, Func Offset: 0x54
	// Line 59, Address: 0x2e45cc, Func Offset: 0x7c
	// Line 61, Address: 0x2e45d0, Func Offset: 0x80
	// Func End, Address: 0x2e45e8, Func Offset: 0x98
}

// 
// Start address: 0x2e45f0
void EilSeFrameSet(_anon8* eil, int se_no, int fr_no)
{
	// Line 67, Address: 0x2e45f0, Func Offset: 0
	// Line 68, Address: 0x2e45f4, Func Offset: 0x4
	// Line 70, Address: 0x2e45fc, Func Offset: 0xc
	// Func End, Address: 0x2e4604, Func Offset: 0x14
}

// 
// Start address: 0x2e4610
void EilSeFrameExec(_anon8* eil)
{
	sgAnime* anm;
	int fr;
	// Line 75, Address: 0x2e4610, Func Offset: 0
	// Line 76, Address: 0x2e461c, Func Offset: 0xc
	// Line 79, Address: 0x2e4624, Func Offset: 0x14
	// Line 82, Address: 0x2e4630, Func Offset: 0x20
	// Line 83, Address: 0x2e4638, Func Offset: 0x28
	// Line 84, Address: 0x2e4648, Func Offset: 0x38
	// Line 86, Address: 0x2e4650, Func Offset: 0x40
	// Line 90, Address: 0x2e465c, Func Offset: 0x4c
	// Line 91, Address: 0x2e466c, Func Offset: 0x5c
	// Line 92, Address: 0x2e4694, Func Offset: 0x84
	// Line 93, Address: 0x2e469c, Func Offset: 0x8c
	// Line 94, Address: 0x2e46a0, Func Offset: 0x90
	// Func End, Address: 0x2e46b0, Func Offset: 0xa0
}

// 
// Start address: 0x2e46b0
void EilSeArmsAttack(_anon8* eil, EileenArmsTypeNo weapon)
{
	int se_no;
	// Line 102, Address: 0x2e46b0, Func Offset: 0
	// Line 104, Address: 0x2e46b8, Func Offset: 0x8
	// Line 102, Address: 0x2e46c0, Func Offset: 0x10
	// Line 104, Address: 0x2e46c4, Func Offset: 0x14
	// Line 105, Address: 0x2e46fc, Func Offset: 0x4c
	// Line 107, Address: 0x2e4700, Func Offset: 0x50
	// Line 110, Address: 0x2e4708, Func Offset: 0x58
	// Line 113, Address: 0x2e4710, Func Offset: 0x60
	// Line 116, Address: 0x2e4718, Func Offset: 0x68
	// Line 118, Address: 0x2e4720, Func Offset: 0x70
	// Line 120, Address: 0x2e4724, Func Offset: 0x74
	// Line 121, Address: 0x2e4728, Func Offset: 0x78
	// Line 122, Address: 0x2e4730, Func Offset: 0x80
	// Line 123, Address: 0x2e4758, Func Offset: 0xa8
	// Func End, Address: 0x2e4764, Func Offset: 0xb4
}

// 
// Start address: 0x2e4770
int GetFootSE(sfMaphitMaterialType mat)
{
	// Line 131, Address: 0x2e4770, Func Offset: 0
	// Line 137, Address: 0x2e4798, Func Offset: 0x28
	// Line 139, Address: 0x2e47a0, Func Offset: 0x30
	// Line 141, Address: 0x2e47a8, Func Offset: 0x38
	// Line 143, Address: 0x2e47b0, Func Offset: 0x40
	// Line 145, Address: 0x2e47b8, Func Offset: 0x48
	// Line 147, Address: 0x2e47c0, Func Offset: 0x50
	// Line 149, Address: 0x2e47c8, Func Offset: 0x58
	// Line 151, Address: 0x2e47d0, Func Offset: 0x60
	// Line 153, Address: 0x2e47d8, Func Offset: 0x68
	// Line 155, Address: 0x2e47e0, Func Offset: 0x70
	// Line 157, Address: 0x2e47e8, Func Offset: 0x78
	// Line 159, Address: 0x2e47f0, Func Offset: 0x80
	// Line 160, Address: 0x2e47f8, Func Offset: 0x88
	// Func End, Address: 0x2e4800, Func Offset: 0x90
}

// 
// Start address: 0x2e4800
void FootSE(_anon8* eil)
{
	_anon2* poly;
	sfMaphitMaterialType mat;
	float v[4];
	int left_right;
	int foot_on;
	// Line 166, Address: 0x2e4800, Func Offset: 0
	// Line 170, Address: 0x2e4810, Func Offset: 0x10
	// Line 175, Address: 0x2e4814, Func Offset: 0x14
	// Line 177, Address: 0x2e481c, Func Offset: 0x1c
	// Line 178, Address: 0x2e4828, Func Offset: 0x28
	// Line 180, Address: 0x2e4838, Func Offset: 0x38
	// Line 181, Address: 0x2e4848, Func Offset: 0x48
	// Line 182, Address: 0x2e4854, Func Offset: 0x54
	// Line 183, Address: 0x2e4860, Func Offset: 0x60
	// Line 184, Address: 0x2e4890, Func Offset: 0x90
	// Line 186, Address: 0x2e4898, Func Offset: 0x98
	// Line 187, Address: 0x2e48a0, Func Offset: 0xa0
	// Line 189, Address: 0x2e48ac, Func Offset: 0xac
	// Line 188, Address: 0x2e48b0, Func Offset: 0xb0
	// Line 189, Address: 0x2e48b4, Func Offset: 0xb4
	// Line 192, Address: 0x2e48b8, Func Offset: 0xb8
	// Line 193, Address: 0x2e48c0, Func Offset: 0xc0
	// Line 194, Address: 0x2e48d0, Func Offset: 0xd0
	// Line 195, Address: 0x2e48dc, Func Offset: 0xdc
	// Line 196, Address: 0x2e490c, Func Offset: 0x10c
	// Line 198, Address: 0x2e4914, Func Offset: 0x114
	// Line 199, Address: 0x2e4920, Func Offset: 0x120
	// Line 201, Address: 0x2e492c, Func Offset: 0x12c
	// Line 200, Address: 0x2e4930, Func Offset: 0x130
	// Line 201, Address: 0x2e4934, Func Offset: 0x134
	// Line 204, Address: 0x2e493c, Func Offset: 0x13c
	// Line 206, Address: 0x2e4940, Func Offset: 0x140
	// Func End, Address: 0x2e4950, Func Offset: 0x150
}

// 
// Start address: 0x2e4950
void EileenSound(_anon8* eil)
{
	// Line 249, Address: 0x2e4950, Func Offset: 0
	// Line 251, Address: 0x2e495c, Func Offset: 0xc
	// Line 253, Address: 0x2e4964, Func Offset: 0x14
	// Line 257, Address: 0x2e496c, Func Offset: 0x1c
	// Func End, Address: 0x2e497c, Func Offset: 0x2c
}

