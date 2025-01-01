typedef struct sgAnime;
typedef struct _anon0;
typedef struct sgQTNode;
typedef struct sgIKHandle;
typedef struct _anon1;
typedef struct _anon2;
typedef struct sfCharacter;
typedef struct sgQTObject;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef struct sgBone;
typedef struct _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef union _anon9;
typedef struct sfOffsetAABB;
typedef enum BattleAttackKind : unsigned char;
typedef union sfCldBody;
typedef struct sfObj;
typedef struct sfCldPart;
typedef enum _enum : unsigned char;
typedef struct sfCldObject;
typedef struct BattleHit;
typedef struct _anon10;
typedef union _anon11;
typedef struct _anon12;
typedef enum BattleHitResult : unsigned char;
typedef struct sgSVModel;
typedef struct _anon13;
typedef struct _anon14;
typedef enum sgIKSolveResult : unsigned char;
typedef struct _anon15;

typedef void(*type_0)(_anon0*, int, int, float*);
typedef sgIKSolveResult(*type_2)();
typedef void(*type_9)(sgAnime*, int);
typedef void(*type_14)(sfObj*);
typedef void(*type_22)(sfObj*);

typedef float type_1[4][2];
typedef _anon3 type_3[4];
typedef _anon9 type_4[0];
typedef unsigned char type_5[3];
typedef float type_6[4];
typedef void* type_7[4];
typedef float type_8[4];
typedef float type_10[4];
typedef float type_11[4][4];
typedef unsigned char type_12[4];
typedef _anon11 type_13[256];
typedef unsigned char type_15[8];
typedef short type_16[2];
typedef unsigned short type_17[2];
typedef char type_18[4];
typedef unsigned char type_19[4];
typedef float type_20[1];
typedef int type_21[1];
typedef sfCldPart* type_23[6];
typedef unsigned char type_24[3];

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

struct _anon0
{
	unsigned long tex0;
	unsigned long clamp;
};

struct sgQTNode
{
	int dummy;
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
	float center[4];
	float radius;
};

struct _anon2
{
	float handle_dy;
	float handle_dy_aim;
	int landing;
	int landing_step;
	sgIKHandle* handle;
	sgBone* handle_bone;
	sgBone* heel;
	float heel_ratio;
	float foot_point[4];
	_anon14 land_plane;
	int on_land;
	float land_height;
	float interp_rate;
};

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon13 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
};

struct sgQTObject
{
	_anon1 bounding_ball;
	sgQTObject* next;
	sgQTObject* prev;
};

struct _anon3
{
	unsigned char next_offset;
	unsigned char flags;
	short id;
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
	_anon6* anm_ctrl;
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
	_anon1 ball;
	unsigned char hurdle_status;
	unsigned char slope_status;
	float front_height;
	_anon8* ground_poly;
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
	_anon12* current_message;
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

struct _anon6
{
	int dummy;
};

struct _anon7
{
	float mat[4][4];
	float half_w[4];
};

struct _anon8
{
	_anon9 vertex[0];
};

union _anon9
{
	float node[4];
	_anon3 data[4];
};

struct sfOffsetAABB
{
	_anon5 aabb;
	float offset[4];
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

union sfCldBody
{
	_anon7 obb;
	_anon5 aabb;
	sfOffsetAABB offset_aabb;
	_anon15 line;
	_anon1 sphere;
};

struct sfObj
{
	_anon11 fwork[256];
	_anon11* work;
	void(*func)(sfObj*);
	_anon11* work_pt0;
	_anon11* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon11* sys_work;
	_anon11* scene_work;
	_anon11* event_work;
	_anon11* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
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

enum _enum : unsigned char
{
	LANDING_NORMAL,
	LANDING_ON,
	LANDING_ON_TO_OFF,
	LANDING_OFF
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

struct _anon10
{
	sgAnime* out_anime;
	sgAnime* base_anime;
	sgAnime* target_anime;
	float blend_ratio;
	float blend_speed;
	float play_speed_ratio;
	int flag;
};

union _anon11
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

struct _anon12
{
	int message_pack_id;
	int message_id;
	int voice_no;
	short frames;
	short last;
};

enum BattleHitResult : unsigned char
{
	GB_HIT_RES_NONE,
	GB_HIT_RES_PLAYER_HIT,
	GB_HIT_RES_ENEMY_HIT,
	GB_HIT_RES_EILEEN_HIT,
	GB_HIT_RES_END
};

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
};

struct _anon13
{
	void* model;
	void* texture;
	void* texture_global;
	float matrices[4][4];
	float* weights;
	float tex_crops[4];
	void(*texture_load_func)(_anon0*, int, int, float*);
	int equip_flag;
};

struct _anon14
{
	float abcd[4];
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

struct _anon15
{
	float start[4];
	float end[4];
};

float sg_vector_unit_w[4];
_anon2 right_footwork;
_anon2 left_footwork;
float sg_vector_unit_z[4];
_enum LandingStatus;

void EilFootWorkConstruct(_anon2* footwork, sgIKHandle* handle, sgBone* heel);
void EilFootWorkLandLeave(_anon2* footwork);
void EilFootWorkLandOn(_anon2* footwork);
void EilFootWorkLandOnToOff(_anon2* footwork);
void EilFootWorkLandOff(_anon2* footwork);
void EilFootWorkSetDefault(_anon2* footwork);
void EilFootWorkWhenOff(_anon2* footwork, _anon4* eil);
void EilFootWorkWhenOn(_anon2* footwork, _anon4* eil);
void EilFootWorkNormal(_anon2* footwork);
void EilFootWorkSolveToe(_anon2* footwork);
float EilFootWorkProcess(_anon2* footwork, _anon4* eil);
void EilFootAdjustToGround(_anon4* eil);
void EilFootAdjustToGroundOff(_anon4* eil);
void EilTurnFaceClampTargetDirection(float* result, float* dir);
void EilTurnFace(_anon4* eil);
void EilMachineGunAimingByIK(_anon4* eil);
void EilAnimeInit(_anon4* eil, void* defailt_anime, int type);
void EilAnimeQuit(_anon4* eil);
void EilAnimeSetTurnFace(_anon4* eil, int turn_on);
void EilAnimeSetTurnFaceTarget(_anon4* eil, float* pos);
void EilAnimeGunAimOff(_anon4* eil);
void EilAnimeSetGunAimTarget(_anon4* eil, float* pos);
void EilAnimeSetToeControlOff();
void EilAnimeSetImmediate(_anon4* eil, int anime_no);
void EilAnimeSet(_anon4* eil, int anime_no);
void EilAnimeSetDelay(_anon4* eil, int anime_no, float sec);
void EilAnimeSetLink(_anon4* eil, int anime_no0, int anime_no1);
void EilAnimeTest(sfObj* obj);
sgAnime* EilGetAnime(_anon4* eil);
sgAnime* EilGetTargetAnime(_anon4* eil);
void EilAnimeSetSpeed(_anon4* eil, float sp);
void EileenAnime(_anon4* eil);

// 
// Start address: 0x29f370
void EilFootWorkConstruct(_anon2* footwork, sgIKHandle* handle, sgBone* heel)
{
	// Line 61, Address: 0x29f370, Func Offset: 0
	// Line 62, Address: 0x29f384, Func Offset: 0x14
	// Line 63, Address: 0x29f38c, Func Offset: 0x1c
	// Line 64, Address: 0x29f390, Func Offset: 0x20
	// Line 65, Address: 0x29f394, Func Offset: 0x24
	// Line 66, Address: 0x29f398, Func Offset: 0x28
	// Line 67, Address: 0x29f3a4, Func Offset: 0x34
	// Line 68, Address: 0x29f3a8, Func Offset: 0x38
	// Line 69, Address: 0x29f3b4, Func Offset: 0x44
	// Func End, Address: 0x29f3c8, Func Offset: 0x58
}

// 
// Start address: 0x29f3d0
void EilFootWorkLandLeave(_anon2* footwork)
{
	// Line 74, Address: 0x29f3d0, Func Offset: 0
	// Line 75, Address: 0x29f3dc, Func Offset: 0xc
	// Line 76, Address: 0x29f3e0, Func Offset: 0x10
	// Line 77, Address: 0x29f3e4, Func Offset: 0x14
	// Line 78, Address: 0x29f3e8, Func Offset: 0x18
	// Func End, Address: 0x29f3f0, Func Offset: 0x20
}

// 
// Start address: 0x29f3f0
void EilFootWorkLandOn(_anon2* footwork)
{
	// Line 81, Address: 0x29f3f0, Func Offset: 0
	// Line 82, Address: 0x29f3f4, Func Offset: 0x4
	// Line 84, Address: 0x29f408, Func Offset: 0x18
	// Line 85, Address: 0x29f40c, Func Offset: 0x1c
	// Line 87, Address: 0x29f410, Func Offset: 0x20
	// Func End, Address: 0x29f418, Func Offset: 0x28
}

// 
// Start address: 0x29f420
void EilFootWorkLandOnToOff(_anon2* footwork)
{
	// Line 91, Address: 0x29f420, Func Offset: 0
	// Line 92, Address: 0x29f430, Func Offset: 0x10
	// Line 93, Address: 0x29f434, Func Offset: 0x14
	// Line 95, Address: 0x29f438, Func Offset: 0x18
	// Func End, Address: 0x29f440, Func Offset: 0x20
}

// 
// Start address: 0x29f440
void EilFootWorkLandOff(_anon2* footwork)
{
	// Line 99, Address: 0x29f440, Func Offset: 0
	// Line 100, Address: 0x29f450, Func Offset: 0x10
	// Line 101, Address: 0x29f454, Func Offset: 0x14
	// Line 103, Address: 0x29f458, Func Offset: 0x18
	// Func End, Address: 0x29f460, Func Offset: 0x20
}

// 
// Start address: 0x29f460
void EilFootWorkSetDefault(_anon2* footwork)
{
	// Line 107, Address: 0x29f460, Func Offset: 0
	// Line 110, Address: 0x29f464, Func Offset: 0x4
	// Line 108, Address: 0x29f468, Func Offset: 0x8
	// Line 109, Address: 0x29f46c, Func Offset: 0xc
	// Line 110, Address: 0x29f470, Func Offset: 0x10
	// Func End, Address: 0x29f478, Func Offset: 0x18
}

// 
// Start address: 0x29f480
void EilFootWorkWhenOff(_anon2* footwork, _anon4* eil)
{
	float goal_pos[4];
	float dy;
	float h;
	// Line 114, Address: 0x29f480, Func Offset: 0
	// Line 118, Address: 0x29f484, Func Offset: 0x4
	// Line 114, Address: 0x29f488, Func Offset: 0x8
	// Line 118, Address: 0x29f498, Func Offset: 0x18
	// Line 119, Address: 0x29f4b4, Func Offset: 0x34
	// Line 122, Address: 0x29f4b8, Func Offset: 0x38
	// Line 123, Address: 0x29f4bc, Func Offset: 0x3c
	// Line 125, Address: 0x29f4c8, Func Offset: 0x48
	// Line 127, Address: 0x29f4cc, Func Offset: 0x4c
	// Line 128, Address: 0x29f4dc, Func Offset: 0x5c
	// Line 127, Address: 0x29f4e8, Func Offset: 0x68
	// Line 128, Address: 0x29f4ec, Func Offset: 0x6c
	// Line 129, Address: 0x29f4f8, Func Offset: 0x78
	// Line 132, Address: 0x29f500, Func Offset: 0x80
	// Line 133, Address: 0x29f510, Func Offset: 0x90
	// Line 134, Address: 0x29f528, Func Offset: 0xa8
	// Line 135, Address: 0x29f52c, Func Offset: 0xac
	// Line 137, Address: 0x29f530, Func Offset: 0xb0
	// Line 138, Address: 0x29f548, Func Offset: 0xc8
	// Line 141, Address: 0x29f550, Func Offset: 0xd0
	// Line 142, Address: 0x29f55c, Func Offset: 0xdc
	// Line 143, Address: 0x29f564, Func Offset: 0xe4
	// Line 144, Address: 0x29f56c, Func Offset: 0xec
	// Line 143, Address: 0x29f570, Func Offset: 0xf0
	// Line 144, Address: 0x29f574, Func Offset: 0xf4
	// Line 146, Address: 0x29f578, Func Offset: 0xf8
	// Line 147, Address: 0x29f584, Func Offset: 0x104
	// Line 151, Address: 0x29f588, Func Offset: 0x108
	// Line 150, Address: 0x29f58c, Func Offset: 0x10c
	// Line 151, Address: 0x29f590, Func Offset: 0x110
	// Line 157, Address: 0x29f5d8, Func Offset: 0x158
	// Line 151, Address: 0x29f5dc, Func Offset: 0x15c
	// Line 157, Address: 0x29f5e0, Func Offset: 0x160
	// Line 155, Address: 0x29f5e4, Func Offset: 0x164
	// Line 157, Address: 0x29f5e8, Func Offset: 0x168
	// Line 155, Address: 0x29f5ec, Func Offset: 0x16c
	// Line 157, Address: 0x29f5f8, Func Offset: 0x178
	// Line 158, Address: 0x29f624, Func Offset: 0x1a4
	// Line 163, Address: 0x29f630, Func Offset: 0x1b0
	// Func End, Address: 0x29f644, Func Offset: 0x1c4
}

// 
// Start address: 0x29f650
void EilFootWorkWhenOn(_anon2* footwork, _anon4* eil)
{
	float goal_pos[4];
	float dy;
	float h;
	// Line 166, Address: 0x29f650, Func Offset: 0
	// Line 172, Address: 0x29f654, Func Offset: 0x4
	// Line 166, Address: 0x29f658, Func Offset: 0x8
	// Line 172, Address: 0x29f668, Func Offset: 0x18
	// Line 173, Address: 0x29f684, Func Offset: 0x34
	// Line 175, Address: 0x29f688, Func Offset: 0x38
	// Line 176, Address: 0x29f694, Func Offset: 0x44
	// Line 178, Address: 0x29f698, Func Offset: 0x48
	// Line 176, Address: 0x29f69c, Func Offset: 0x4c
	// Line 178, Address: 0x29f6a0, Func Offset: 0x50
	// Line 176, Address: 0x29f6a4, Func Offset: 0x54
	// Line 178, Address: 0x29f6a8, Func Offset: 0x58
	// Line 179, Address: 0x29f6b0, Func Offset: 0x60
	// Line 180, Address: 0x29f6b8, Func Offset: 0x68
	// Line 179, Address: 0x29f6bc, Func Offset: 0x6c
	// Line 180, Address: 0x29f6c0, Func Offset: 0x70
	// Line 181, Address: 0x29f6c4, Func Offset: 0x74
	// Line 182, Address: 0x29f6e0, Func Offset: 0x90
	// Line 184, Address: 0x29f6ec, Func Offset: 0x9c
	// Line 185, Address: 0x29f6f0, Func Offset: 0xa0
	// Line 186, Address: 0x29f700, Func Offset: 0xb0
	// Line 187, Address: 0x29f704, Func Offset: 0xb4
	// Line 190, Address: 0x29f710, Func Offset: 0xc0
	// Line 191, Address: 0x29f740, Func Offset: 0xf0
	// Line 192, Address: 0x29f74c, Func Offset: 0xfc
	// Line 193, Address: 0x29f754, Func Offset: 0x104
	// Line 194, Address: 0x29f75c, Func Offset: 0x10c
	// Line 196, Address: 0x29f760, Func Offset: 0x110
	// Line 198, Address: 0x29f768, Func Offset: 0x118
	// Line 200, Address: 0x29f7b8, Func Offset: 0x168
	// Line 201, Address: 0x29f7bc, Func Offset: 0x16c
	// Line 204, Address: 0x29f7c8, Func Offset: 0x178
	// Func End, Address: 0x29f7dc, Func Offset: 0x18c
}

// 
// Start address: 0x29f7e0
void EilFootWorkNormal(_anon2* footwork)
{
	float goal_pos[4];
	float dy;
	float h;
	// Line 209, Address: 0x29f7e0, Func Offset: 0
	// Line 214, Address: 0x29f7e4, Func Offset: 0x4
	// Line 209, Address: 0x29f7e8, Func Offset: 0x8
	// Line 214, Address: 0x29f7f4, Func Offset: 0x14
	// Line 216, Address: 0x29f810, Func Offset: 0x30
	// Line 217, Address: 0x29f814, Func Offset: 0x34
	// Line 218, Address: 0x29f818, Func Offset: 0x38
	// Line 219, Address: 0x29f824, Func Offset: 0x44
	// Line 220, Address: 0x29f828, Func Offset: 0x48
	// Line 221, Address: 0x29f838, Func Offset: 0x58
	// Line 220, Address: 0x29f844, Func Offset: 0x64
	// Line 221, Address: 0x29f848, Func Offset: 0x68
	// Line 222, Address: 0x29f854, Func Offset: 0x74
	// Line 225, Address: 0x29f858, Func Offset: 0x78
	// Line 226, Address: 0x29f864, Func Offset: 0x84
	// Line 227, Address: 0x29f870, Func Offset: 0x90
	// Line 229, Address: 0x29f878, Func Offset: 0x98
	// Line 227, Address: 0x29f87c, Func Offset: 0x9c
	// Line 229, Address: 0x29f880, Func Offset: 0xa0
	// Line 230, Address: 0x29f884, Func Offset: 0xa4
	// Line 231, Address: 0x29f89c, Func Offset: 0xbc
	// Line 233, Address: 0x29f8a0, Func Offset: 0xc0
	// Line 234, Address: 0x29f8b8, Func Offset: 0xd8
	// Line 236, Address: 0x29f8c0, Func Offset: 0xe0
	// Line 238, Address: 0x29f8c8, Func Offset: 0xe8
	// Line 239, Address: 0x29f8dc, Func Offset: 0xfc
	// Line 240, Address: 0x29f8e0, Func Offset: 0x100
	// Line 243, Address: 0x29f928, Func Offset: 0x148
	// Line 240, Address: 0x29f92c, Func Offset: 0x14c
	// Line 243, Address: 0x29f930, Func Offset: 0x150
	// Line 242, Address: 0x29f934, Func Offset: 0x154
	// Line 243, Address: 0x29f938, Func Offset: 0x158
	// Line 242, Address: 0x29f93c, Func Offset: 0x15c
	// Line 243, Address: 0x29f948, Func Offset: 0x168
	// Line 244, Address: 0x29f974, Func Offset: 0x194
	// Line 246, Address: 0x29f980, Func Offset: 0x1a0
	// Line 249, Address: 0x29f988, Func Offset: 0x1a8
	// Func End, Address: 0x29f998, Func Offset: 0x1b8
}

// 
// Start address: 0x29f9a0
void EilFootWorkSolveToe(_anon2* footwork)
{
	sgBone* heel;
	float dquat[4];
	float heel_rot[4];
	float heel_mat[4][4];
	float angle;
	float cost;
	float ratio;
	// Line 252, Address: 0x29f9a0, Func Offset: 0
	// Line 262, Address: 0x29f9b0, Func Offset: 0x10
	// Line 263, Address: 0x29f9b4, Func Offset: 0x14
	// Line 266, Address: 0x29f9bc, Func Offset: 0x1c
	// Line 267, Address: 0x29f9c8, Func Offset: 0x28
	// Line 269, Address: 0x29f9d4, Func Offset: 0x34
	// Line 270, Address: 0x29f9e4, Func Offset: 0x44
	// Line 271, Address: 0x29f9f0, Func Offset: 0x50
	// Line 273, Address: 0x29f9f8, Func Offset: 0x58
	// Line 275, Address: 0x29fa04, Func Offset: 0x64
	// Line 276, Address: 0x29fa28, Func Offset: 0x88
	// Line 277, Address: 0x29fa30, Func Offset: 0x90
	// Line 278, Address: 0x29fa34, Func Offset: 0x94
	// Line 277, Address: 0x29fa38, Func Offset: 0x98
	// Line 278, Address: 0x29fa3c, Func Offset: 0x9c
	// Line 277, Address: 0x29fa40, Func Offset: 0xa0
	// Line 278, Address: 0x29fa4c, Func Offset: 0xac
	// Line 279, Address: 0x29fa54, Func Offset: 0xb4
	// Line 282, Address: 0x29fa60, Func Offset: 0xc0
	// Line 281, Address: 0x29fa64, Func Offset: 0xc4
	// Line 282, Address: 0x29fa68, Func Offset: 0xc8
	// Line 281, Address: 0x29fa74, Func Offset: 0xd4
	// Line 282, Address: 0x29fa78, Func Offset: 0xd8
	// Line 284, Address: 0x29fa80, Func Offset: 0xe0
	// Line 283, Address: 0x29fa8c, Func Offset: 0xec
	// Line 284, Address: 0x29fa90, Func Offset: 0xf0
	// Line 285, Address: 0x29fa98, Func Offset: 0xf8
	// Line 286, Address: 0x29faa8, Func Offset: 0x108
	// Line 287, Address: 0x29fab4, Func Offset: 0x114
	// Line 288, Address: 0x29fabc, Func Offset: 0x11c
	// Func End, Address: 0x29fad4, Func Offset: 0x134
}

// 
// Start address: 0x29fae0
float EilFootWorkProcess(_anon2* footwork, _anon4* eil)
{
	float pre_y;
	float goal_pos[4];
	int landing_type;
	// Line 292, Address: 0x29fae0, Func Offset: 0
	// Line 297, Address: 0x29fafc, Func Offset: 0x1c
	// Line 300, Address: 0x29fb08, Func Offset: 0x28
	// Line 301, Address: 0x29fb0c, Func Offset: 0x2c
	// Line 302, Address: 0x29fb18, Func Offset: 0x38
	// Line 303, Address: 0x29fb30, Func Offset: 0x50
	// Line 304, Address: 0x29fb3c, Func Offset: 0x5c
	// Line 306, Address: 0x29fb50, Func Offset: 0x70
	// Line 307, Address: 0x29fb60, Func Offset: 0x80
	// Line 314, Address: 0x29fb68, Func Offset: 0x88
	// Line 315, Address: 0x29fb6c, Func Offset: 0x8c
	// Line 314, Address: 0x29fb74, Func Offset: 0x94
	// Line 315, Address: 0x29fb78, Func Offset: 0x98
	// Func End, Address: 0x29fb88, Func Offset: 0xa8
}

// 
// Start address: 0x29fb90
void EilFootAdjustToGround(_anon4* eil)
{
	sfCharacter* chara;
	sgAnime* anm;
	sgAnime* anime;
	float h;
	float v[4];
	int frame_no;
	// Line 321, Address: 0x29fb90, Func Offset: 0
	// Line 322, Address: 0x29fbb0, Func Offset: 0x20
	// Line 323, Address: 0x29fbb4, Func Offset: 0x24
	// Line 324, Address: 0x29fbbc, Func Offset: 0x2c
	// Line 330, Address: 0x29fbc8, Func Offset: 0x38
	// Line 332, Address: 0x29fc00, Func Offset: 0x70
	// Line 333, Address: 0x29fc08, Func Offset: 0x78
	// Line 334, Address: 0x29fc1c, Func Offset: 0x8c
	// Line 335, Address: 0x29fc24, Func Offset: 0x94
	// Line 336, Address: 0x29fc30, Func Offset: 0xa0
	// Line 337, Address: 0x29fc3c, Func Offset: 0xac
	// Line 338, Address: 0x29fc40, Func Offset: 0xb0
	// Line 339, Address: 0x29fc58, Func Offset: 0xc8
	// Line 340, Address: 0x29fc64, Func Offset: 0xd4
	// Line 341, Address: 0x29fc70, Func Offset: 0xe0
	// Line 343, Address: 0x29fc7c, Func Offset: 0xec
	// Line 344, Address: 0x29fc88, Func Offset: 0xf8
	// Line 345, Address: 0x29fc94, Func Offset: 0x104
	// Line 348, Address: 0x29fca0, Func Offset: 0x110
	// Line 349, Address: 0x29fcb4, Func Offset: 0x124
	// Line 350, Address: 0x29fcbc, Func Offset: 0x12c
	// Line 351, Address: 0x29fcd4, Func Offset: 0x144
	// Line 354, Address: 0x29fcdc, Func Offset: 0x14c
	// Line 351, Address: 0x29fce0, Func Offset: 0x150
	// Line 354, Address: 0x29fce4, Func Offset: 0x154
	// Line 356, Address: 0x29fcf4, Func Offset: 0x164
	// Line 359, Address: 0x29fd18, Func Offset: 0x188
	// Line 361, Address: 0x29fd24, Func Offset: 0x194
	// Line 363, Address: 0x29fd3c, Func Offset: 0x1ac
	// Line 362, Address: 0x29fd40, Func Offset: 0x1b0
	// Line 363, Address: 0x29fd44, Func Offset: 0x1b4
	// Line 362, Address: 0x29fd48, Func Offset: 0x1b8
	// Line 363, Address: 0x29fd4c, Func Offset: 0x1bc
	// Line 364, Address: 0x29fd54, Func Offset: 0x1c4
	// Line 365, Address: 0x29fd58, Func Offset: 0x1c8
	// Func End, Address: 0x29fd78, Func Offset: 0x1e8
}

// 
// Start address: 0x29fd80
void EilFootAdjustToGroundOff(_anon4* eil)
{
	// Line 372, Address: 0x29fd80, Func Offset: 0
	// Line 373, Address: 0x29fd90, Func Offset: 0x10
	// Line 375, Address: 0x29fd9c, Func Offset: 0x1c
	// Line 374, Address: 0x29fda0, Func Offset: 0x20
	// Line 375, Address: 0x29fda4, Func Offset: 0x24
	// Line 376, Address: 0x29fdac, Func Offset: 0x2c
	// Line 377, Address: 0x29fdb0, Func Offset: 0x30
	// Func End, Address: 0x29fdc0, Func Offset: 0x40
}

// 
// Start address: 0x29fdc0
void EilTurnFaceClampTargetDirection(float* result, float* dir)
{
	float local_target_dir[4];
	float rl_angle;
	float ud_angle;
	float r;
	int over_shoulder;
	float over_rl_angle;
	// Line 389, Address: 0x29fdc0, Func Offset: 0
	// Line 397, Address: 0x29fdc8, Func Offset: 0x8
	// Line 389, Address: 0x29fdcc, Func Offset: 0xc
	// Line 394, Address: 0x29fddc, Func Offset: 0x1c
	// Line 389, Address: 0x29fde0, Func Offset: 0x20
	// Line 397, Address: 0x29fde4, Func Offset: 0x24
	// Line 399, Address: 0x29fdec, Func Offset: 0x2c
	// Line 400, Address: 0x29fdfc, Func Offset: 0x3c
	// Line 399, Address: 0x29fe00, Func Offset: 0x40
	// Line 400, Address: 0x29fe04, Func Offset: 0x44
	// Line 402, Address: 0x29fe1c, Func Offset: 0x5c
	// Line 403, Address: 0x29fe20, Func Offset: 0x60
	// Line 404, Address: 0x29fe24, Func Offset: 0x64
	// Line 405, Address: 0x29fe28, Func Offset: 0x68
	// Line 407, Address: 0x29fe44, Func Offset: 0x84
	// Line 408, Address: 0x29fe48, Func Offset: 0x88
	// Line 409, Address: 0x29fe4c, Func Offset: 0x8c
	// Line 410, Address: 0x29fe50, Func Offset: 0x90
	// Line 411, Address: 0x29fe5c, Func Offset: 0x9c
	// Line 414, Address: 0x29fe64, Func Offset: 0xa4
	// Line 415, Address: 0x29fe70, Func Offset: 0xb0
	// Line 414, Address: 0x29fe74, Func Offset: 0xb4
	// Line 415, Address: 0x29fe78, Func Offset: 0xb8
	// Line 416, Address: 0x29fe98, Func Offset: 0xd8
	// Line 419, Address: 0x29feb8, Func Offset: 0xf8
	// Line 421, Address: 0x29fec0, Func Offset: 0x100
	// Line 422, Address: 0x29fec8, Func Offset: 0x108
	// Line 424, Address: 0x29fee8, Func Offset: 0x128
	// Line 425, Address: 0x29fef0, Func Offset: 0x130
	// Line 426, Address: 0x29fef4, Func Offset: 0x134
	// Line 427, Address: 0x29fef8, Func Offset: 0x138
	// Line 429, Address: 0x29ff04, Func Offset: 0x144
	// Line 430, Address: 0x29ff2c, Func Offset: 0x16c
	// Func End, Address: 0x29ff48, Func Offset: 0x188
}

// 
// Start address: 0x29ff50
void EilTurnFace(_anon4* eil)
{
	sgAnime* anime;
	sfCharacter* chara;
	sgBone* head;
	sgBone* neck;
	float neck_abs_rot[4];
	float neck_inv_rot[4];
	float head_abs_pos[4];
	float face_target[4];
	float head_abs_rot[4];
	float to_target_rot[4];
	float target_dir[4];
	float local_target_dir[4];
	float head_drot[4];
	float v[4];
	float q[4];
	// Line 440, Address: 0x29ff50, Func Offset: 0
	// Line 462, Address: 0x29ff58, Func Offset: 0x8
	// Line 440, Address: 0x29ff5c, Func Offset: 0xc
	// Line 462, Address: 0x29ff64, Func Offset: 0x14
	// Line 465, Address: 0x29ff80, Func Offset: 0x30
	// Line 466, Address: 0x29ffb0, Func Offset: 0x60
	// Line 467, Address: 0x29ffd0, Func Offset: 0x80
	// Line 470, Address: 0x29ffe8, Func Offset: 0x98
	// Line 467, Address: 0x29ffec, Func Offset: 0x9c
	// Line 470, Address: 0x29fff0, Func Offset: 0xa0
	// Line 474, Address: 0x29fffc, Func Offset: 0xac
	// Line 475, Address: 0x2a0008, Func Offset: 0xb8
	// Line 476, Address: 0x2a0014, Func Offset: 0xc4
	// Line 478, Address: 0x2a0024, Func Offset: 0xd4
	// Line 479, Address: 0x2a0030, Func Offset: 0xe0
	// Line 480, Address: 0x2a003c, Func Offset: 0xec
	// Line 481, Address: 0x2a005c, Func Offset: 0x10c
	// Line 484, Address: 0x2a0088, Func Offset: 0x138
	// Line 487, Address: 0x2a0094, Func Offset: 0x144
	// Line 488, Address: 0x2a00a8, Func Offset: 0x158
	// Line 489, Address: 0x2a00b8, Func Offset: 0x168
	// Line 490, Address: 0x2a00c4, Func Offset: 0x174
	// Line 491, Address: 0x2a00d8, Func Offset: 0x188
	// Line 494, Address: 0x2a00e8, Func Offset: 0x198
	// Line 499, Address: 0x2a00f8, Func Offset: 0x1a8
	// Line 502, Address: 0x2a0104, Func Offset: 0x1b4
	// Line 506, Address: 0x2a0118, Func Offset: 0x1c8
	// Line 511, Address: 0x2a0128, Func Offset: 0x1d8
	// Line 512, Address: 0x2a0134, Func Offset: 0x1e4
	// Line 513, Address: 0x2a0140, Func Offset: 0x1f0
	// Line 514, Address: 0x2a0150, Func Offset: 0x200
	// Line 515, Address: 0x2a0168, Func Offset: 0x218
	// Line 518, Address: 0x2a0178, Func Offset: 0x228
	// Line 520, Address: 0x2a0194, Func Offset: 0x244
	// Line 521, Address: 0x2a01a0, Func Offset: 0x250
	// Line 522, Address: 0x2a01b0, Func Offset: 0x260
	// Func End, Address: 0x2a01c4, Func Offset: 0x274
}

// 
// Start address: 0x2a01d0
void EilMachineGunAimingByIK(_anon4* eil)
{
	sgAnime* anime;
	sfCharacter* chara;
	sgBone* upperarm;
	sgBone* hand;
	float upperarm_pos[4];
	float gun_target[4];
	float target_dir[4];
	float local_target_dir[4];
	float ik_position[4];
	float v[4];
	float body_rot[4];
	float q[4];
	float r;
	sgIKHandle* handle;
	// Line 584, Address: 0x2a01d0, Func Offset: 0
	// Line 600, Address: 0x2a01e8, Func Offset: 0x18
	// Line 603, Address: 0x2a01f4, Func Offset: 0x24
	// Line 604, Address: 0x2a01f8, Func Offset: 0x28
	// Line 606, Address: 0x2a0204, Func Offset: 0x34
	// Line 607, Address: 0x2a0210, Func Offset: 0x40
	// Line 609, Address: 0x2a021c, Func Offset: 0x4c
	// Line 610, Address: 0x2a0228, Func Offset: 0x58
	// Line 611, Address: 0x2a0244, Func Offset: 0x74
	// Line 614, Address: 0x2a0270, Func Offset: 0xa0
	// Line 615, Address: 0x2a027c, Func Offset: 0xac
	// Line 616, Address: 0x2a0288, Func Offset: 0xb8
	// Line 619, Address: 0x2a0298, Func Offset: 0xc8
	// Line 620, Address: 0x2a02a8, Func Offset: 0xd8
	// Line 619, Address: 0x2a02b4, Func Offset: 0xe4
	// Line 620, Address: 0x2a02b8, Func Offset: 0xe8
	// Line 621, Address: 0x2a02d0, Func Offset: 0x100
	// Line 622, Address: 0x2a02d8, Func Offset: 0x108
	// Line 624, Address: 0x2a02e4, Func Offset: 0x114
	// Line 625, Address: 0x2a02f0, Func Offset: 0x120
	// Line 624, Address: 0x2a02f8, Func Offset: 0x128
	// Line 626, Address: 0x2a02fc, Func Offset: 0x12c
	// Line 625, Address: 0x2a0300, Func Offset: 0x130
	// Line 626, Address: 0x2a0304, Func Offset: 0x134
	// Line 625, Address: 0x2a0310, Func Offset: 0x140
	// Line 626, Address: 0x2a0314, Func Offset: 0x144
	// Line 627, Address: 0x2a032c, Func Offset: 0x15c
	// Line 629, Address: 0x2a0338, Func Offset: 0x168
	// Line 630, Address: 0x2a0364, Func Offset: 0x194
	// Line 633, Address: 0x2a0374, Func Offset: 0x1a4
	// Line 635, Address: 0x2a0380, Func Offset: 0x1b0
	// Line 636, Address: 0x2a038c, Func Offset: 0x1bc
	// Line 635, Address: 0x2a0390, Func Offset: 0x1c0
	// Line 636, Address: 0x2a039c, Func Offset: 0x1cc
	// Line 635, Address: 0x2a03a0, Func Offset: 0x1d0
	// Line 636, Address: 0x2a03a4, Func Offset: 0x1d4
	// Line 637, Address: 0x2a03c0, Func Offset: 0x1f0
	// Line 640, Address: 0x2a03e0, Func Offset: 0x210
	// Line 641, Address: 0x2a03e8, Func Offset: 0x218
	// Line 640, Address: 0x2a03ec, Func Offset: 0x21c
	// Line 641, Address: 0x2a03f4, Func Offset: 0x224
	// Line 640, Address: 0x2a03fc, Func Offset: 0x22c
	// Line 641, Address: 0x2a0404, Func Offset: 0x234
	// Line 642, Address: 0x2a0414, Func Offset: 0x244
	// Line 643, Address: 0x2a0418, Func Offset: 0x248
	// Line 645, Address: 0x2a0450, Func Offset: 0x280
	// Line 646, Address: 0x2a0460, Func Offset: 0x290
	// Line 647, Address: 0x2a046c, Func Offset: 0x29c
	// Line 649, Address: 0x2a0474, Func Offset: 0x2a4
	// Line 650, Address: 0x2a0480, Func Offset: 0x2b0
	// Line 651, Address: 0x2a048c, Func Offset: 0x2bc
	// Func End, Address: 0x2a04ac, Func Offset: 0x2dc
}

// 
// Start address: 0x2a04b0
void EilAnimeInit(_anon4* eil, void* defailt_anime, int type)
{
	sgAnime* anime;
	sgIKHandle* handle;
	int handle_no;
	int foot_no;
	// Line 660, Address: 0x2a04b0, Func Offset: 0
	// Line 661, Address: 0x2a04d0, Func Offset: 0x20
	// Line 667, Address: 0x2a04d4, Func Offset: 0x24
	// Line 668, Address: 0x2a04e0, Func Offset: 0x30
	// Line 669, Address: 0x2a04ec, Func Offset: 0x3c
	// Line 670, Address: 0x2a04f0, Func Offset: 0x40
	// Line 672, Address: 0x2a04f8, Func Offset: 0x48
	// Line 673, Address: 0x2a0504, Func Offset: 0x54
	// Line 674, Address: 0x2a0510, Func Offset: 0x60
	// Line 676, Address: 0x2a0518, Func Offset: 0x68
	// Line 679, Address: 0x2a0520, Func Offset: 0x70
	// Line 680, Address: 0x2a0528, Func Offset: 0x78
	// Line 681, Address: 0x2a052c, Func Offset: 0x7c
	// Line 684, Address: 0x2a0530, Func Offset: 0x80
	// Line 685, Address: 0x2a0538, Func Offset: 0x88
	// Line 686, Address: 0x2a055c, Func Offset: 0xac
	// Line 688, Address: 0x2a0570, Func Offset: 0xc0
	// Line 691, Address: 0x2a0578, Func Offset: 0xc8
	// Line 692, Address: 0x2a0580, Func Offset: 0xd0
	// Line 693, Address: 0x2a0584, Func Offset: 0xd4
	// Line 695, Address: 0x2a0588, Func Offset: 0xd8
	// Line 696, Address: 0x2a0590, Func Offset: 0xe0
	// Line 697, Address: 0x2a05b4, Func Offset: 0x104
	// Line 698, Address: 0x2a05c8, Func Offset: 0x118
	// Func End, Address: 0x2a05e4, Func Offset: 0x134
}

// 
// Start address: 0x2a05f0
void EilAnimeQuit(_anon4* eil)
{
	// Line 703, Address: 0x2a05f0, Func Offset: 0
	// Func End, Address: 0x2a05f8, Func Offset: 0x8
}

// 
// Start address: 0x2a0600
void EilAnimeSetTurnFace(_anon4* eil, int turn_on)
{
	sgAnime* anime;
	sgBone* head;
	// Line 708, Address: 0x2a0600, Func Offset: 0
	// Line 713, Address: 0x2a0614, Func Offset: 0x14
	// Line 715, Address: 0x2a0628, Func Offset: 0x28
	// Line 716, Address: 0x2a0630, Func Offset: 0x30
	// Line 717, Address: 0x2a063c, Func Offset: 0x3c
	// Line 719, Address: 0x2a0648, Func Offset: 0x48
	// Line 720, Address: 0x2a064c, Func Offset: 0x4c
	// Func End, Address: 0x2a0660, Func Offset: 0x60
}

// 
// Start address: 0x2a0660
void EilAnimeSetTurnFaceTarget(_anon4* eil, float* pos)
{
	// Line 725, Address: 0x2a0660, Func Offset: 0
	// Line 726, Address: 0x2a0664, Func Offset: 0x4
	// Func End, Address: 0x2a066c, Func Offset: 0xc
}

// 
// Start address: 0x2a0670
void EilAnimeGunAimOff(_anon4* eil)
{
	// Line 732, Address: 0x2a0670, Func Offset: 0
	// Func End, Address: 0x2a0678, Func Offset: 0x8
}

// 
// Start address: 0x2a0680
void EilAnimeSetGunAimTarget(_anon4* eil, float* pos)
{
	sgAnime* anime;
	sgBone* hand;
	// Line 736, Address: 0x2a0680, Func Offset: 0
	// Line 741, Address: 0x2a0690, Func Offset: 0x10
	// Line 742, Address: 0x2a0698, Func Offset: 0x18
	// Line 743, Address: 0x2a06a0, Func Offset: 0x20
	// Line 746, Address: 0x2a06a4, Func Offset: 0x24
	// Line 747, Address: 0x2a06ac, Func Offset: 0x2c
	// Line 748, Address: 0x2a06b8, Func Offset: 0x38
	// Line 749, Address: 0x2a06c4, Func Offset: 0x44
	// Func End, Address: 0x2a06d4, Func Offset: 0x54
}

// 
// Start address: 0x2a06e0
void EilAnimeSetToeControlOff()
{
	// Line 757, Address: 0x2a06e0, Func Offset: 0
	// Line 758, Address: 0x2a06e8, Func Offset: 0x8
	// Line 759, Address: 0x2a06ec, Func Offset: 0xc
	// Func End, Address: 0x2a06f4, Func Offset: 0x14
}

// 
// Start address: 0x2a0700
void EilAnimeSetImmediate(_anon4* eil, int anime_no)
{
	_anon6* anm_ctrl;
	void* anm_data;
	// Line 763, Address: 0x2a0700, Func Offset: 0
	// Line 764, Address: 0x2a0714, Func Offset: 0x14
	// Line 766, Address: 0x2a0718, Func Offset: 0x18
	// Line 768, Address: 0x2a0720, Func Offset: 0x20
	// Line 769, Address: 0x2a0728, Func Offset: 0x28
	// Line 771, Address: 0x2a0730, Func Offset: 0x30
	// Line 772, Address: 0x2a0740, Func Offset: 0x40
	// Line 773, Address: 0x2a0744, Func Offset: 0x44
	// Line 774, Address: 0x2a0748, Func Offset: 0x48
	// Func End, Address: 0x2a075c, Func Offset: 0x5c
}

// 
// Start address: 0x2a0760
void EilAnimeSet(_anon4* eil, int anime_no)
{
	_anon6* anm_ctrl;
	void* anm_data;
	// Line 778, Address: 0x2a0760, Func Offset: 0
	// Line 779, Address: 0x2a0778, Func Offset: 0x18
	// Line 781, Address: 0x2a077c, Func Offset: 0x1c
	// Line 783, Address: 0x2a0788, Func Offset: 0x28
	// Line 784, Address: 0x2a0790, Func Offset: 0x30
	// Line 785, Address: 0x2a079c, Func Offset: 0x3c
	// Line 786, Address: 0x2a07a0, Func Offset: 0x40
	// Line 787, Address: 0x2a07a8, Func Offset: 0x48
	// Line 788, Address: 0x2a07c0, Func Offset: 0x60
	// Line 789, Address: 0x2a07c4, Func Offset: 0x64
	// Line 790, Address: 0x2a07c8, Func Offset: 0x68
	// Func End, Address: 0x2a07e0, Func Offset: 0x80
}

// 
// Start address: 0x2a07e0
void EilAnimeSetDelay(_anon4* eil, int anime_no, float sec)
{
	_anon6* anm_ctrl;
	void* anm_data;
	// Line 794, Address: 0x2a07e0, Func Offset: 0
	// Line 795, Address: 0x2a07f8, Func Offset: 0x18
	// Line 797, Address: 0x2a0800, Func Offset: 0x20
	// Line 799, Address: 0x2a0808, Func Offset: 0x28
	// Line 800, Address: 0x2a0810, Func Offset: 0x30
	// Line 803, Address: 0x2a0818, Func Offset: 0x38
	// Line 804, Address: 0x2a082c, Func Offset: 0x4c
	// Line 805, Address: 0x2a0830, Func Offset: 0x50
	// Line 806, Address: 0x2a0834, Func Offset: 0x54
	// Func End, Address: 0x2a084c, Func Offset: 0x6c
}

// 
// Start address: 0x2a0850
void EilAnimeSetLink(_anon4* eil, int anime_no0, int anime_no1)
{
	_anon6* anm_ctrl;
	void* anm_data0;
	void* anm_data1;
	// Line 810, Address: 0x2a0850, Func Offset: 0
	// Line 811, Address: 0x2a086c, Func Offset: 0x1c
	// Line 814, Address: 0x2a0874, Func Offset: 0x24
	// Line 815, Address: 0x2a087c, Func Offset: 0x2c
	// Line 817, Address: 0x2a088c, Func Offset: 0x3c
	// Line 818, Address: 0x2a0894, Func Offset: 0x44
	// Line 819, Address: 0x2a08a8, Func Offset: 0x58
	// Line 820, Address: 0x2a08b8, Func Offset: 0x68
	// Line 821, Address: 0x2a08c0, Func Offset: 0x70
	// Line 822, Address: 0x2a08c4, Func Offset: 0x74
	// Func End, Address: 0x2a08e0, Func Offset: 0x90
}

// 
// Start address: 0x2a08e0
void EilAnimeTest(sfObj* obj)
{
	_anon6* anm_ctrl;
	// Line 840, Address: 0x2a08e0, Func Offset: 0
	// Line 841, Address: 0x2a08f8, Func Offset: 0x18
	// Line 844, Address: 0x2a08fc, Func Offset: 0x1c
	// Line 842, Address: 0x2a0900, Func Offset: 0x20
	// Line 844, Address: 0x2a0904, Func Offset: 0x24
	// Line 845, Address: 0x2a092c, Func Offset: 0x4c
	// Line 846, Address: 0x2a0930, Func Offset: 0x50
	// Line 848, Address: 0x2a093c, Func Offset: 0x5c
	// Line 850, Address: 0x2a0940, Func Offset: 0x60
	// Line 851, Address: 0x2a0954, Func Offset: 0x74
	// Line 852, Address: 0x2a095c, Func Offset: 0x7c
	// Line 853, Address: 0x2a0964, Func Offset: 0x84
	// Line 854, Address: 0x2a0968, Func Offset: 0x88
	// Line 856, Address: 0x2a0990, Func Offset: 0xb0
	// Line 857, Address: 0x2a099c, Func Offset: 0xbc
	// Line 859, Address: 0x2a09a0, Func Offset: 0xc0
	// Line 860, Address: 0x2a09b4, Func Offset: 0xd4
	// Line 861, Address: 0x2a09bc, Func Offset: 0xdc
	// Line 862, Address: 0x2a09c4, Func Offset: 0xe4
	// Line 863, Address: 0x2a09c8, Func Offset: 0xe8
	// Line 865, Address: 0x2a09f0, Func Offset: 0x110
	// Line 866, Address: 0x2a09fc, Func Offset: 0x11c
	// Line 868, Address: 0x2a0a00, Func Offset: 0x120
	// Line 869, Address: 0x2a0a14, Func Offset: 0x134
	// Line 872, Address: 0x2a0a20, Func Offset: 0x140
	// Func End, Address: 0x2a0a3c, Func Offset: 0x15c
}

// 
// Start address: 0x2a0a40
sgAnime* EilGetAnime(_anon4* eil)
{
	_anon6* anm_ctrl;
	_anon10* mixer;
	sgAnime* anime;
	// Line 876, Address: 0x2a0a40, Func Offset: 0
	// Line 881, Address: 0x2a0a4c, Func Offset: 0xc
	// Line 882, Address: 0x2a0a58, Func Offset: 0x18
	// Line 883, Address: 0x2a0a60, Func Offset: 0x20
	// Line 884, Address: 0x2a0a68, Func Offset: 0x28
	// Line 885, Address: 0x2a0a70, Func Offset: 0x30
	// Line 888, Address: 0x2a0a78, Func Offset: 0x38
	// Func End, Address: 0x2a0a84, Func Offset: 0x44
}

// 
// Start address: 0x2a0a90
sgAnime* EilGetTargetAnime(_anon4* eil)
{
	_anon6* anm_ctrl;
	_anon10* mixer;
	sgAnime* anime;
	// Line 892, Address: 0x2a0a90, Func Offset: 0
	// Line 897, Address: 0x2a0a9c, Func Offset: 0xc
	// Line 898, Address: 0x2a0aa8, Func Offset: 0x18
	// Line 899, Address: 0x2a0ab0, Func Offset: 0x20
	// Line 900, Address: 0x2a0ab8, Func Offset: 0x28
	// Line 903, Address: 0x2a0ac0, Func Offset: 0x30
	// Func End, Address: 0x2a0acc, Func Offset: 0x3c
}

// 
// Start address: 0x2a0ad0
void EilAnimeSetSpeed(_anon4* eil, float sp)
{
	sgAnime* anime;
	// Line 907, Address: 0x2a0ad0, Func Offset: 0
	// Line 908, Address: 0x2a0adc, Func Offset: 0xc
	// Line 909, Address: 0x2a0ae4, Func Offset: 0x14
	// Line 910, Address: 0x2a0af0, Func Offset: 0x20
	// Func End, Address: 0x2a0b00, Func Offset: 0x30
}

// 
// Start address: 0x2a0b00
void EileenAnime(_anon4* eil)
{
	_anon6* anm_ctrl;
	_anon10* mixer;
	sgAnime* anime;
	// Line 916, Address: 0x2a0b00, Func Offset: 0
	// Line 921, Address: 0x2a0b14, Func Offset: 0x14
	// Line 917, Address: 0x2a0b18, Func Offset: 0x18
	// Line 921, Address: 0x2a0b1c, Func Offset: 0x1c
	// Line 922, Address: 0x2a0b24, Func Offset: 0x24
	// Line 923, Address: 0x2a0b34, Func Offset: 0x34
	// Line 924, Address: 0x2a0b3c, Func Offset: 0x3c
	// Line 925, Address: 0x2a0b48, Func Offset: 0x48
	// Line 926, Address: 0x2a0b50, Func Offset: 0x50
	// Line 927, Address: 0x2a0b58, Func Offset: 0x58
	// Line 929, Address: 0x2a0b68, Func Offset: 0x68
	// Line 931, Address: 0x2a0b70, Func Offset: 0x70
	// Line 932, Address: 0x2a0b78, Func Offset: 0x78
	// Line 933, Address: 0x2a0b88, Func Offset: 0x88
	// Line 936, Address: 0x2a0b90, Func Offset: 0x90
	// Line 937, Address: 0x2a0b9c, Func Offset: 0x9c
	// Line 938, Address: 0x2a0ba4, Func Offset: 0xa4
	// Line 939, Address: 0x2a0bac, Func Offset: 0xac
	// Line 940, Address: 0x2a0bb4, Func Offset: 0xb4
	// Line 941, Address: 0x2a0bc0, Func Offset: 0xc0
	// Line 946, Address: 0x2a0bc8, Func Offset: 0xc8
	// Line 947, Address: 0x2a0bd4, Func Offset: 0xd4
	// Line 948, Address: 0x2a0be0, Func Offset: 0xe0
	// Line 949, Address: 0x2a0bf8, Func Offset: 0xf8
	// Line 950, Address: 0x2a0c00, Func Offset: 0x100
	// Line 952, Address: 0x2a0c10, Func Offset: 0x110
	// Line 953, Address: 0x2a0c1c, Func Offset: 0x11c
	// Line 954, Address: 0x2a0c24, Func Offset: 0x124
	// Line 955, Address: 0x2a0c28, Func Offset: 0x128
	// Func End, Address: 0x2a0c40, Func Offset: 0x140
}

