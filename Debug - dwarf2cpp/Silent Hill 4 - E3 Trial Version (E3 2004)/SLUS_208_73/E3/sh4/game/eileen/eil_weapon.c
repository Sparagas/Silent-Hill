typedef struct sfCldObject;
typedef struct sfCldPart;
typedef enum EileenArmsTypeNo : unsigned char;
typedef struct sfCharacter;
typedef struct sfObj;
typedef struct sgAnime;
typedef struct _anon0;
typedef struct sgBone;
typedef struct _anon1;
typedef struct BattleHit;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef struct sgQTNode;
typedef struct sgSVModel;
typedef struct _anon5;
typedef struct _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef enum BattleAttackKind : unsigned char;
typedef struct _anon9;
typedef enum sgIKSolveResult : unsigned char;
typedef struct _anon10;
typedef struct sgIKHandle;
typedef struct sgQTObject;
typedef struct _anon11;
typedef struct sfOffsetAABB;
typedef struct _anon12;
typedef struct _anon13;
typedef union sfCldBody;
typedef struct _anon14;
typedef struct _anon15;
typedef union _anon16;
typedef union _anon17;
typedef struct _anon18;
typedef struct _anon19;
typedef struct _anon20;
typedef struct _anon21;
typedef enum _enum_0 : unsigned char;
typedef enum BattleHitResult : unsigned char;
typedef enum _enum_1 : unsigned char;

typedef void(*type_0)(sfObj*);
typedef void(*type_9)(sfObj*);
typedef void(*type_13)(_anon9*, int, int, float*);
typedef sgIKSolveResult(*type_14)();
typedef void(*type_22)(sfObj*);
typedef void(*type_30)(sgAnime*, int);
typedef void(*type_38)(sfObj*);
typedef void(*type_42)(sfObj*);
typedef void(*type_43)(sfObj*);

typedef BattleAttackKind type_1[5];
typedef _anon13 type_2[2];
typedef sfCldPart* type_3[6];
typedef float type_4[4][4];
typedef unsigned char type_5[3];
typedef BattleAttackKind* type_6[6];
typedef float type_7[4][4];
typedef float type_8[4][2];
typedef float type_10[4];
typedef float type_11[4];
typedef BattleAttackKind type_12[5];
typedef BattleAttackKind type_15[5];
typedef float type_16[4][2];
typedef _anon2 type_17[8];
typedef sgBone* type_18[8];
typedef float type_19[4];
typedef float type_20[4][8];
typedef unsigned char type_21[3];
typedef int type_23[4][3];
typedef void* type_24[4];
typedef float type_25[6];
typedef _anon14 type_26[4];
typedef _anon16 type_27[0];
typedef BattleAttackKind type_28[5];
typedef short type_29[2];
typedef unsigned short type_31[2];
typedef char type_32[4];
typedef unsigned char type_33[4];
typedef unsigned char type_34[8];
typedef float type_35[1];
typedef int type_36[4];
typedef int type_37[1];
typedef int type_39[6];
typedef _anon17 type_40[256];
typedef unsigned char type_41[4];
typedef BattleAttackKind type_44[5];

struct sfCldObject
{
	sgQTObject tree_object;
	sgQTNode* stay_node;
	sfCldPart* parts[6];
	unsigned char n_parts;
	unsigned char pad[3];
	void* data;
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

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon10 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
};

struct sfObj
{
	_anon17 fwork[256];
	_anon17* work;
	void(*func)(sfObj*);
	_anon17* work_pt0;
	_anon17* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon17* sys_work;
	_anon17* scene_work;
	_anon17* event_work;
	_anon17* objhit_work;
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

struct _anon0
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
	_anon12* anm_ctrl;
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
	_anon18 ball;
	unsigned char hurdle_status;
	unsigned char slope_status;
	float front_height;
	_anon15* ground_poly;
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
	_anon19* current_message;
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

struct _anon1
{
	_anon2 chain_points[8];
	sgBone* bones[8];
	float rot_offsets[4][8];
	int n_points;
	float attenuation;
	float gravity;
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

struct _anon2
{
	float pos[4];
	float last[4];
	float dpos[4];
	float r;
	float g;
};

struct _anon3
{
	_anon13 rod;
	_anon7 cs;
	sfCharacter* chara;
	sgBone* bust_bone;
	void* model_addr;
	sgBone* character_bones;
};

struct _anon4
{
	_anon13 rod_points[2];
	int n_points;
};

struct sgQTNode
{
	int dummy;
};

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
};

struct _anon5
{
	sfCharacter chara;
	_anon0* eileen;
	sgBone* eil_hand;
	int weapon_kind;
	sfCldObject* cld_object;
	sfCldObject* thigh_cld;
	BattleHit* battle_hit;
	float pre_pos[4];
	int rot_hosei_on;
	float rot_hosei_ratio;
	int fire_on;
	int fire_type;
	float fire_lit;
	int chain_se_timer;
};

struct _anon6
{
	float start[4];
	float end[4];
};

struct _anon7
{
	float last[4];
	float def[4];
	float dsp[4];
	float dangle;
	sgBone* bone;
	float hardness;
};

struct _anon8
{
	_anon1 chain;
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

struct _anon9
{
	unsigned long tex0;
	unsigned long clamp;
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

struct _anon10
{
	void* model;
	void* texture;
	void* texture_global;
	float matrices[4][4];
	float* weights;
	float tex_crops[4];
	void(*texture_load_func)(_anon9*, int, int, float*);
	int equip_flag;
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

struct sgQTObject
{
	_anon18 bounding_ball;
	sgQTObject* next;
	sgQTObject* prev;
};

struct _anon11
{
	short base;
	short buffer_w;
	unsigned char psm;
	unsigned char data_psm;
	short w;
	short h;
	short buffer_size;
	short w2;
	short h2;
};

struct sfOffsetAABB
{
	_anon20 aabb;
	float offset[4];
};

struct _anon12
{
	int dummy;
};

struct _anon13
{
	float last[4];
	float dsp[4];
	float point[4];
	sgBone* bone;
	float hardness;
};

union sfCldBody
{
	_anon21 obb;
	_anon20 aabb;
	sfOffsetAABB offset_aabb;
	_anon6 line;
	_anon18 sphere;
};

struct _anon14
{
	unsigned char next_offset;
	unsigned char flags;
	short id;
};

struct _anon15
{
	_anon16 vertex[0];
};

union _anon16
{
	float node[4];
	_anon14 data[4];
};

union _anon17
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

struct _anon18
{
	float center[4];
	float radius;
};

struct _anon19
{
	int message_pack_id;
	int message_id;
	int voice_no;
	short frames;
	short last;
};

struct _anon20
{
	float bmin[4];
	float bmax[4];
};

struct _anon21
{
	float mat[4][4];
	float half_w[4];
};

enum _enum_0 : unsigned char
{
	EILEEN_BUST_EOL,
	EILEEN_BUST_EOH,
	EILEEN_BUST_EOS,
	EILEEN_BUST_CYBL,
	EILEEN_BUST_CYBH
};

enum BattleHitResult : unsigned char
{
	GB_HIT_RES_NONE,
	GB_HIT_RES_PLAYER_HIT,
	GB_HIT_RES_ENEMY_HIT,
	GB_HIT_RES_EILEEN_HIT,
	GB_HIT_RES_END
};

enum _enum_1 : unsigned char
{
	EIL_AK_NORMAL,
	EIL_AK_3_1,
	EIL_AK_3_2,
	EIL_AK_3_3,
	EIL_AK_FINISH
};

float gunfire_offset[4];
BattleAttackKind handbag_attack_kinds[5];
BattleAttackKind club_attack_kinds[5];
BattleAttackKind rod_attack_kinds[5];
BattleAttackKind chain_attack_kinds[5];
BattleAttackKind gun_attack_kinds[5];
int eil_arms_model_no[6];
BattleAttackKind* eil_attack_kinds[6];
float attack_ranges[6];
float sg_vector_unit_y[4];
float gun_shoot_range_v[4];
float sg_matrix_unit[4][4];
sfCldObject eil_thigh_cld;
void(*EilGunFire)(sfObj*);
float sg_vector_unit_w[4];
BattleHit arms_hit;
sfCldObject arms_cld;
sfObj* current_weapon;
void(*EilWeaponDestruct)(sfObj*);
void(*EilWeapon)(sfObj*);
float sg_vector_unit_x[4];
float sg_vector_unit_z[4];
float bust_top[4];
void(*EileenBust)(sfObj*);
int fire_uvs[4][3];
unsigned long* sg_packet_cur;

void EilWeaponInit(sfObj* obj);
void EilWeaponDestruct(sfObj* obj);
void EilWeaponRotHoseiSet(int val);
void EilWeaponRotHosei(sfObj* obj);
void EilWeapon(sfObj* obj);
void EileenWeaponInit();
int EileenWeaponCreate(_anon0* eil, EileenArmsTypeNo arms_type);
void EileenWeaponDelete();
void EileenWeaponHitSet(_enum_1 sub_kind);
int EileenWeaponHitCheck();
void EileenWeaponHitDelete();
void EileenWeaponGunfireSet();
float EilArmsRange(EileenArmsTypeNo arms_type);
void ChainSetPoint(_anon1* chain, int point_idx, sgBone* bone);
void ChainCreate(_anon1* chain, int n_points, float a, float g);
void ChainPointMove(_anon1* chain, int idx);
void ChainMove(_anon1* chain, float* new_pos);
void ChainToHandBag(_anon1* chain);
_anon8* HandBag(sfObj* obj);
_anon1* HandBagChain(_anon8* bag);
void EilHandBag(sfObj* obj);
void ChainToChain(_anon1* chain);
void EilChain(sfObj* obj);
void RodPointUpdate(_anon13* rod);
void RodPointConstruct(_anon13* rod, sgBone* bone, float* point);
void EilRod(sfObj* obj);
void CenterSpringConstruct(_anon7* cs, sgBone* bone);
void CenterSpringUpdate(_anon7* cs);
void EileenBust(sfObj* obj);
void EileenBustMoveSet(sfCharacter* eileen_chara, _enum_0 type);
float GetSize(float* v);
void GetRect(float* c, float r, float vs[4]);
void EilGunFire(sfObj* obj);

// 
// Start address: 0x2c64e0
void EilWeaponInit(sfObj* obj)
{
	sfCharacter* chara;
	sfCharacter* eil_chara;
	sgBone* eil_weapon_kp;
	sgBone* weapon_root;
	_anon5* work;
	int model_type;
	sfCldObject* cld_obj;
	sfCldPart* cld_part;
	_anon6* line;
	int n;
	int n_parts;
	sfCldPart* part;
	_anon21* obb;
	// Line 165, Address: 0x2c64e0, Func Offset: 0
	// Line 177, Address: 0x2c64e4, Func Offset: 0x4
	// Line 165, Address: 0x2c64e8, Func Offset: 0x8
	// Line 178, Address: 0x2c64ec, Func Offset: 0xc
	// Line 165, Address: 0x2c64f0, Func Offset: 0x10
	// Line 184, Address: 0x2c64f4, Func Offset: 0x14
	// Line 165, Address: 0x2c64f8, Func Offset: 0x18
	// Line 177, Address: 0x2c64fc, Func Offset: 0x1c
	// Line 165, Address: 0x2c6500, Func Offset: 0x20
	// Line 178, Address: 0x2c6504, Func Offset: 0x24
	// Line 165, Address: 0x2c6508, Func Offset: 0x28
	// Line 184, Address: 0x2c650c, Func Offset: 0x2c
	// Line 176, Address: 0x2c6510, Func Offset: 0x30
	// Line 177, Address: 0x2c6518, Func Offset: 0x38
	// Line 178, Address: 0x2c651c, Func Offset: 0x3c
	// Line 181, Address: 0x2c6520, Func Offset: 0x40
	// Line 182, Address: 0x2c6528, Func Offset: 0x48
	// Line 184, Address: 0x2c6530, Func Offset: 0x50
	// Line 186, Address: 0x2c6540, Func Offset: 0x60
	// Line 188, Address: 0x2c6564, Func Offset: 0x84
	// Line 192, Address: 0x2c6578, Func Offset: 0x98
	// Line 193, Address: 0x2c657c, Func Offset: 0x9c
	// Line 192, Address: 0x2c6580, Func Offset: 0xa0
	// Line 193, Address: 0x2c6584, Func Offset: 0xa4
	// Line 194, Address: 0x2c658c, Func Offset: 0xac
	// Line 195, Address: 0x2c6598, Func Offset: 0xb8
	// Line 196, Address: 0x2c65a8, Func Offset: 0xc8
	// Line 202, Address: 0x2c65b8, Func Offset: 0xd8
	// Line 203, Address: 0x2c65c4, Func Offset: 0xe4
	// Line 204, Address: 0x2c65d0, Func Offset: 0xf0
	// Line 205, Address: 0x2c65e0, Func Offset: 0x100
	// Line 206, Address: 0x2c65ec, Func Offset: 0x10c
	// Line 209, Address: 0x2c65f0, Func Offset: 0x110
	// Line 210, Address: 0x2c65f4, Func Offset: 0x114
	// Line 211, Address: 0x2c65fc, Func Offset: 0x11c
	// Line 212, Address: 0x2c660c, Func Offset: 0x12c
	// Line 213, Address: 0x2c6614, Func Offset: 0x134
	// Line 215, Address: 0x2c6620, Func Offset: 0x140
	// Line 216, Address: 0x2c662c, Func Offset: 0x14c
	// Line 217, Address: 0x2c6650, Func Offset: 0x170
	// Line 219, Address: 0x2c6658, Func Offset: 0x178
	// Line 220, Address: 0x2c6668, Func Offset: 0x188
	// Line 221, Address: 0x2c6680, Func Offset: 0x1a0
	// Line 222, Address: 0x2c6690, Func Offset: 0x1b0
	// Line 223, Address: 0x2c66b0, Func Offset: 0x1d0
	// Line 226, Address: 0x2c66c8, Func Offset: 0x1e8
	// Line 232, Address: 0x2c66d4, Func Offset: 0x1f4
	// Line 233, Address: 0x2c66d8, Func Offset: 0x1f8
	// Line 234, Address: 0x2c66e8, Func Offset: 0x208
	// Line 235, Address: 0x2c6710, Func Offset: 0x230
	// Line 236, Address: 0x2c671c, Func Offset: 0x23c
	// Line 242, Address: 0x2c6734, Func Offset: 0x254
	// Line 244, Address: 0x2c6744, Func Offset: 0x264
	// Line 245, Address: 0x2c6748, Func Offset: 0x268
	// Line 246, Address: 0x2c6750, Func Offset: 0x270
	// Line 247, Address: 0x2c675c, Func Offset: 0x27c
	// Line 248, Address: 0x2c6780, Func Offset: 0x2a0
	// Line 249, Address: 0x2c6788, Func Offset: 0x2a8
	// Line 250, Address: 0x2c6798, Func Offset: 0x2b8
	// Line 251, Address: 0x2c67b0, Func Offset: 0x2d0
	// Line 252, Address: 0x2c67d8, Func Offset: 0x2f8
	// Line 253, Address: 0x2c67e0, Func Offset: 0x300
	// Line 256, Address: 0x2c67e8, Func Offset: 0x308
	// Line 252, Address: 0x2c67ec, Func Offset: 0x30c
	// Line 254, Address: 0x2c67f0, Func Offset: 0x310
	// Line 255, Address: 0x2c67f4, Func Offset: 0x314
	// Line 256, Address: 0x2c67f8, Func Offset: 0x318
	// Line 253, Address: 0x2c67fc, Func Offset: 0x31c
	// Line 254, Address: 0x2c6800, Func Offset: 0x320
	// Line 255, Address: 0x2c6804, Func Offset: 0x324
	// Line 254, Address: 0x2c680c, Func Offset: 0x32c
	// Line 256, Address: 0x2c6810, Func Offset: 0x330
	// Line 260, Address: 0x2c6824, Func Offset: 0x344
	// Line 261, Address: 0x2c6828, Func Offset: 0x348
	// Func End, Address: 0x2c6844, Func Offset: 0x364
}

// 
// Start address: 0x2c6850
void EilWeaponDestruct(sfObj* obj)
{
	// Line 265, Address: 0x2c6850, Func Offset: 0
	// Line 266, Address: 0x2c685c, Func Offset: 0xc
	// Line 269, Address: 0x2c6860, Func Offset: 0x10
	// Line 271, Address: 0x2c6868, Func Offset: 0x18
	// Line 272, Address: 0x2c6878, Func Offset: 0x28
	// Line 274, Address: 0x2c6880, Func Offset: 0x30
	// Line 275, Address: 0x2c6888, Func Offset: 0x38
	// Line 276, Address: 0x2c6890, Func Offset: 0x40
	// Func End, Address: 0x2c68a0, Func Offset: 0x50
}

// 
// Start address: 0x2c68a0
void EilWeaponRotHoseiSet(int val)
{
	// Line 280, Address: 0x2c68a0, Func Offset: 0
	// Line 284, Address: 0x2c68a8, Func Offset: 0x8
	// Line 286, Address: 0x2c68b0, Func Offset: 0x10
	// Line 287, Address: 0x2c68b4, Func Offset: 0x14
	// Line 289, Address: 0x2c68bc, Func Offset: 0x1c
	// Line 290, Address: 0x2c68c0, Func Offset: 0x20
	// Func End, Address: 0x2c68c8, Func Offset: 0x28
}

// 
// Start address: 0x2c68d0
void EilWeaponRotHosei(sfObj* obj)
{
	_anon5* work;
	sfCharacter* chara;
	float q[4];
	float r;
	// Line 294, Address: 0x2c68d0, Func Offset: 0
	// Line 295, Address: 0x2c68dc, Func Offset: 0xc
	// Line 299, Address: 0x2c68e0, Func Offset: 0x10
	// Line 302, Address: 0x2c68e8, Func Offset: 0x18
	// Line 303, Address: 0x2c68f4, Func Offset: 0x24
	// Line 305, Address: 0x2c6908, Func Offset: 0x38
	// Line 306, Address: 0x2c6920, Func Offset: 0x50
	// Line 308, Address: 0x2c6934, Func Offset: 0x64
	// Line 309, Address: 0x2c693c, Func Offset: 0x6c
	// Line 308, Address: 0x2c6940, Func Offset: 0x70
	// Line 309, Address: 0x2c6944, Func Offset: 0x74
	// Line 307, Address: 0x2c6948, Func Offset: 0x78
	// Line 309, Address: 0x2c694c, Func Offset: 0x7c
	// Line 311, Address: 0x2c6958, Func Offset: 0x88
	// Line 312, Address: 0x2c695c, Func Offset: 0x8c
	// Line 313, Address: 0x2c6964, Func Offset: 0x94
	// Line 314, Address: 0x2c696c, Func Offset: 0x9c
	// Func End, Address: 0x2c6980, Func Offset: 0xb0
}

// 
// Start address: 0x2c6980
void EilWeapon(sfObj* obj)
{
	_anon5* work;
	float v[4];
	float p[4];
	float r;
	sfCharacter* chara;
	sgBone* bone;
	// Line 321, Address: 0x2c6980, Func Offset: 0
	// Line 334, Address: 0x2c6990, Func Offset: 0x10
	// Line 332, Address: 0x2c6994, Func Offset: 0x14
	// Line 334, Address: 0x2c6998, Func Offset: 0x18
	// Line 337, Address: 0x2c69c0, Func Offset: 0x40
	// Line 338, Address: 0x2c69cc, Func Offset: 0x4c
	// Line 340, Address: 0x2c69d8, Func Offset: 0x58
	// Line 341, Address: 0x2c69e0, Func Offset: 0x60
	// Line 344, Address: 0x2c69e8, Func Offset: 0x68
	// Line 346, Address: 0x2c69f0, Func Offset: 0x70
	// Line 348, Address: 0x2c6a00, Func Offset: 0x80
	// Line 350, Address: 0x2c6a04, Func Offset: 0x84
	// Line 348, Address: 0x2c6a08, Func Offset: 0x88
	// Line 349, Address: 0x2c6a10, Func Offset: 0x90
	// Line 350, Address: 0x2c6a14, Func Offset: 0x94
	// Line 351, Address: 0x2c6a20, Func Offset: 0xa0
	// Line 352, Address: 0x2c6a28, Func Offset: 0xa8
	// Line 353, Address: 0x2c6a38, Func Offset: 0xb8
	// Line 354, Address: 0x2c6a40, Func Offset: 0xc0
	// Line 355, Address: 0x2c6a50, Func Offset: 0xd0
	// Line 356, Address: 0x2c6a58, Func Offset: 0xd8
	// Line 357, Address: 0x2c6a68, Func Offset: 0xe8
	// Line 358, Address: 0x2c6a70, Func Offset: 0xf0
	// Line 359, Address: 0x2c6a74, Func Offset: 0xf4
	// Line 362, Address: 0x2c6a7c, Func Offset: 0xfc
	// Line 363, Address: 0x2c6a80, Func Offset: 0x100
	// Line 364, Address: 0x2c6a88, Func Offset: 0x108
	// Line 366, Address: 0x2c6a90, Func Offset: 0x110
	// Line 373, Address: 0x2c6a98, Func Offset: 0x118
	// Line 374, Address: 0x2c6a9c, Func Offset: 0x11c
	// Line 375, Address: 0x2c6aa4, Func Offset: 0x124
	// Line 376, Address: 0x2c6ab0, Func Offset: 0x130
	// Line 377, Address: 0x2c6abc, Func Offset: 0x13c
	// Line 378, Address: 0x2c6ad8, Func Offset: 0x158
	// Line 379, Address: 0x2c6afc, Func Offset: 0x17c
	// Line 380, Address: 0x2c6b14, Func Offset: 0x194
	// Line 381, Address: 0x2c6b20, Func Offset: 0x1a0
	// Line 383, Address: 0x2c6b24, Func Offset: 0x1a4
	// Line 384, Address: 0x2c6b30, Func Offset: 0x1b0
	// Line 386, Address: 0x2c6b38, Func Offset: 0x1b8
	// Line 388, Address: 0x2c6b44, Func Offset: 0x1c4
	// Line 389, Address: 0x2c6b4c, Func Offset: 0x1cc
	// Line 390, Address: 0x2c6b50, Func Offset: 0x1d0
	// Line 391, Address: 0x2c6b58, Func Offset: 0x1d8
	// Line 393, Address: 0x2c6b60, Func Offset: 0x1e0
	// Line 394, Address: 0x2c6b70, Func Offset: 0x1f0
	// Line 393, Address: 0x2c6b78, Func Offset: 0x1f8
	// Line 394, Address: 0x2c6b7c, Func Offset: 0x1fc
	// Line 395, Address: 0x2c6b88, Func Offset: 0x208
	// Line 398, Address: 0x2c6b8c, Func Offset: 0x20c
	// Line 401, Address: 0x2c6b90, Func Offset: 0x210
	// Line 403, Address: 0x2c6ba8, Func Offset: 0x228
	// Line 407, Address: 0x2c6bb0, Func Offset: 0x230
	// Line 408, Address: 0x2c6bb8, Func Offset: 0x238
	// Line 409, Address: 0x2c6bcc, Func Offset: 0x24c
	// Line 410, Address: 0x2c6bd4, Func Offset: 0x254
	// Line 411, Address: 0x2c6be0, Func Offset: 0x260
	// Line 412, Address: 0x2c6bec, Func Offset: 0x26c
	// Line 413, Address: 0x2c6bf0, Func Offset: 0x270
	// Func End, Address: 0x2c6c04, Func Offset: 0x284
}

// 
// Start address: 0x2c6c10
void EileenWeaponInit()
{
	// Line 418, Address: 0x2c6c10, Func Offset: 0
	// Line 419, Address: 0x2c6c14, Func Offset: 0x4
	// Func End, Address: 0x2c6c1c, Func Offset: 0xc
}

// 
// Start address: 0x2c6c20
int EileenWeaponCreate(_anon0* eil, EileenArmsTypeNo arms_type)
{
	sfObj* optr;
	// Line 425, Address: 0x2c6c20, Func Offset: 0
	// Line 429, Address: 0x2c6c24, Func Offset: 0x4
	// Line 425, Address: 0x2c6c28, Func Offset: 0x8
	// Line 429, Address: 0x2c6c3c, Func Offset: 0x1c
	// Line 430, Address: 0x2c6c48, Func Offset: 0x28
	// Line 433, Address: 0x2c6c50, Func Offset: 0x30
	// Line 434, Address: 0x2c6c5c, Func Offset: 0x3c
	// Line 435, Address: 0x2c6c64, Func Offset: 0x44
	// Line 436, Address: 0x2c6c70, Func Offset: 0x50
	// Line 437, Address: 0x2c6c78, Func Offset: 0x58
	// Line 438, Address: 0x2c6c80, Func Offset: 0x60
	// Line 439, Address: 0x2c6c90, Func Offset: 0x70
	// Line 441, Address: 0x2c6c94, Func Offset: 0x74
	// Line 439, Address: 0x2c6c98, Func Offset: 0x78
	// Line 441, Address: 0x2c6c9c, Func Offset: 0x7c
	// Line 442, Address: 0x2c6ca4, Func Offset: 0x84
	// Line 443, Address: 0x2c6ca8, Func Offset: 0x88
	// Line 442, Address: 0x2c6cac, Func Offset: 0x8c
	// Line 444, Address: 0x2c6cb0, Func Offset: 0x90
	// Func End, Address: 0x2c6cc8, Func Offset: 0xa8
}

// 
// Start address: 0x2c6cd0
void EileenWeaponDelete()
{
	// Line 448, Address: 0x2c6cd0, Func Offset: 0
	// Line 449, Address: 0x2c6ce0, Func Offset: 0x10
	// Line 450, Address: 0x2c6ce8, Func Offset: 0x18
	// Line 452, Address: 0x2c6cf0, Func Offset: 0x20
	// Line 453, Address: 0x2c6cf8, Func Offset: 0x28
	// Func End, Address: 0x2c6d04, Func Offset: 0x34
}

// 
// Start address: 0x2c6d10
void EileenWeaponHitSet(_enum_1 sub_kind)
{
	_anon5* work;
	sfObj* optr;
	BattleHit* b_hit;
	BattleAttackKind at_kind;
	float v[4];
	sfCldPart* cld_part;
	_anon6* line;
	// Line 457, Address: 0x2c6d10, Func Offset: 0
	// Line 459, Address: 0x2c6d14, Func Offset: 0x4
	// Line 457, Address: 0x2c6d18, Func Offset: 0x8
	// Line 459, Address: 0x2c6d28, Func Offset: 0x18
	// Line 464, Address: 0x2c6d2c, Func Offset: 0x1c
	// Line 467, Address: 0x2c6d34, Func Offset: 0x24
	// Line 470, Address: 0x2c6d38, Func Offset: 0x28
	// Line 468, Address: 0x2c6d48, Func Offset: 0x38
	// Line 472, Address: 0x2c6d4c, Func Offset: 0x3c
	// Line 470, Address: 0x2c6d50, Func Offset: 0x40
	// Line 472, Address: 0x2c6d64, Func Offset: 0x54
	// Line 473, Address: 0x2c6d6c, Func Offset: 0x5c
	// Line 474, Address: 0x2c6d74, Func Offset: 0x64
	// Line 475, Address: 0x2c6d84, Func Offset: 0x74
	// Line 476, Address: 0x2c6da8, Func Offset: 0x98
	// Line 477, Address: 0x2c6db0, Func Offset: 0xa0
	// Line 478, Address: 0x2c6db8, Func Offset: 0xa8
	// Line 479, Address: 0x2c6dc8, Func Offset: 0xb8
	// Line 480, Address: 0x2c6dd4, Func Offset: 0xc4
	// Line 481, Address: 0x2c6df0, Func Offset: 0xe0
	// Line 482, Address: 0x2c6e1c, Func Offset: 0x10c
	// Line 485, Address: 0x2c6e28, Func Offset: 0x118
	// Func End, Address: 0x2c6e40, Func Offset: 0x130
}

// 
// Start address: 0x2c6e40
int EileenWeaponHitCheck()
{
	// Line 490, Address: 0x2c6e40, Func Offset: 0
	// Line 497, Address: 0x2c6e50, Func Offset: 0x10
	// Line 498, Address: 0x2c6e58, Func Offset: 0x18
	// Line 500, Address: 0x2c6e60, Func Offset: 0x20
	// Line 503, Address: 0x2c6e64, Func Offset: 0x24
	// Line 505, Address: 0x2c6e78, Func Offset: 0x38
	// Func End, Address: 0x2c6e84, Func Offset: 0x44
}

// 
// Start address: 0x2c6e90
void EileenWeaponHitDelete()
{
	// Line 509, Address: 0x2c6e90, Func Offset: 0
	// Line 513, Address: 0x2c6ea0, Func Offset: 0x10
	// Line 516, Address: 0x2c6ea8, Func Offset: 0x18
	// Line 518, Address: 0x2c6eac, Func Offset: 0x1c
	// Line 519, Address: 0x2c6eb4, Func Offset: 0x24
	// Func End, Address: 0x2c6ec4, Func Offset: 0x34
}

// 
// Start address: 0x2c6ed0
void EileenWeaponGunfireSet()
{
	// Line 523, Address: 0x2c6ed0, Func Offset: 0
	// Line 527, Address: 0x2c6ed8, Func Offset: 0x8
	// Line 530, Address: 0x2c6ee0, Func Offset: 0x10
	// Line 531, Address: 0x2c6ee4, Func Offset: 0x14
	// Line 532, Address: 0x2c6ee8, Func Offset: 0x18
	// Line 531, Address: 0x2c6eec, Func Offset: 0x1c
	// Line 532, Address: 0x2c6ef0, Func Offset: 0x20
	// Line 533, Address: 0x2c6ef8, Func Offset: 0x28
	// Line 534, Address: 0x2c6efc, Func Offset: 0x2c
	// Func End, Address: 0x2c6f08, Func Offset: 0x38
}

// 
// Start address: 0x2c6f10
float EilArmsRange(EileenArmsTypeNo arms_type)
{
	// Line 540, Address: 0x2c6f14, Func Offset: 0x4
	// Line 541, Address: 0x2c6f28, Func Offset: 0x18
	// Line 542, Address: 0x2c6f38, Func Offset: 0x28
	// Line 543, Address: 0x2c6f50, Func Offset: 0x40
	// Func End, Address: 0x2c6f58, Func Offset: 0x48
}

// 
// Start address: 0x2c6f60
void ChainSetPoint(_anon1* chain, int point_idx, sgBone* bone)
{
	_anon2* point;
	// Line 569, Address: 0x2c6f60, Func Offset: 0
	// Line 573, Address: 0x2c6f64, Func Offset: 0x4
	// Line 569, Address: 0x2c6f68, Func Offset: 0x8
	// Line 574, Address: 0x2c6f6c, Func Offset: 0xc
	// Line 569, Address: 0x2c6f70, Func Offset: 0x10
	// Line 573, Address: 0x2c6f74, Func Offset: 0x14
	// Line 569, Address: 0x2c6f78, Func Offset: 0x18
	// Line 574, Address: 0x2c6f8c, Func Offset: 0x2c
	// Line 573, Address: 0x2c6f94, Func Offset: 0x34
	// Line 575, Address: 0x2c6f98, Func Offset: 0x38
	// Line 576, Address: 0x2c6fa4, Func Offset: 0x44
	// Line 577, Address: 0x2c6fb8, Func Offset: 0x58
	// Line 578, Address: 0x2c6fc0, Func Offset: 0x60
	// Line 579, Address: 0x2c6fd0, Func Offset: 0x70
	// Func End, Address: 0x2c6fec, Func Offset: 0x8c
}

// 
// Start address: 0x2c6ff0
void ChainCreate(_anon1* chain, int n_points, float a, float g)
{
	int i;
	_anon2* point;
	_anon2* prev_point;
	float v[4];
	// Line 588, Address: 0x2c6ff0, Func Offset: 0
	// Line 582, Address: 0x2c6ff4, Func Offset: 0x4
	// Line 589, Address: 0x2c6ff8, Func Offset: 0x8
	// Line 594, Address: 0x2c6ffc, Func Offset: 0xc
	// Line 591, Address: 0x2c7000, Func Offset: 0x10
	// Line 594, Address: 0x2c7004, Func Offset: 0x14
	// Line 595, Address: 0x2c7010, Func Offset: 0x20
	// Line 596, Address: 0x2c7018, Func Offset: 0x28
	// Line 595, Address: 0x2c701c, Func Offset: 0x2c
	// Line 596, Address: 0x2c7020, Func Offset: 0x30
	// Line 597, Address: 0x2c7024, Func Offset: 0x34
	// Line 598, Address: 0x2c7038, Func Offset: 0x48
	// Line 599, Address: 0x2c7058, Func Offset: 0x68
	// Line 598, Address: 0x2c705c, Func Offset: 0x6c
	// Line 599, Address: 0x2c7060, Func Offset: 0x70
	// Line 602, Address: 0x2c706c, Func Offset: 0x7c
	// Line 604, Address: 0x2c7070, Func Offset: 0x80
	// Line 605, Address: 0x2c7088, Func Offset: 0x98
	// Line 608, Address: 0x2c7090, Func Offset: 0xa0
	// Line 606, Address: 0x2c7094, Func Offset: 0xa4
	// Line 607, Address: 0x2c7098, Func Offset: 0xa8
	// Line 608, Address: 0x2c709c, Func Offset: 0xac
	// Line 609, Address: 0x2c70a8, Func Offset: 0xb8
	// Func End, Address: 0x2c70b0, Func Offset: 0xc0
}

// 
// Start address: 0x2c70b0
void ChainPointMove(_anon1* chain, int idx)
{
	_anon2* point;
	_anon2* upper_point;
	float pos[4];
	float from_upper_dir[4];
	float speed[4];
	float v[4];
	// Line 627, Address: 0x2c70b0, Func Offset: 0
	// Line 618, Address: 0x2c70b4, Func Offset: 0x4
	// Line 627, Address: 0x2c70b8, Func Offset: 0x8
	// Line 628, Address: 0x2c70bc, Func Offset: 0xc
	// Line 629, Address: 0x2c70c4, Func Offset: 0x14
	// Line 628, Address: 0x2c70c8, Func Offset: 0x18
	// Line 629, Address: 0x2c70cc, Func Offset: 0x1c
	// Line 630, Address: 0x2c70e4, Func Offset: 0x34
	// Line 633, Address: 0x2c70f0, Func Offset: 0x40
	// Line 634, Address: 0x2c7118, Func Offset: 0x68
	// Line 659, Address: 0x2c7138, Func Offset: 0x88
	// Line 660, Address: 0x2c7164, Func Offset: 0xb4
	// Line 662, Address: 0x2c7184, Func Offset: 0xd4
	// Line 663, Address: 0x2c71a0, Func Offset: 0xf0
	// Line 664, Address: 0x2c71cc, Func Offset: 0x11c
	// Line 667, Address: 0x2c71f4, Func Offset: 0x144
	// Line 682, Address: 0x2c720c, Func Offset: 0x15c
	// Func End, Address: 0x2c7214, Func Offset: 0x164
}

// 
// Start address: 0x2c7220
void ChainMove(_anon1* chain, float* new_pos)
{
	_anon2* point;
	int n_points;
	int i;
	// Line 685, Address: 0x2c7220, Func Offset: 0
	// Line 691, Address: 0x2c722c, Func Offset: 0xc
	// Line 692, Address: 0x2c7234, Func Offset: 0x14
	// Line 694, Address: 0x2c7238, Func Offset: 0x18
	// Line 695, Address: 0x2c7248, Func Offset: 0x28
	// Line 696, Address: 0x2c7254, Func Offset: 0x34
	// Line 697, Address: 0x2c7268, Func Offset: 0x48
	// Func End, Address: 0x2c7274, Func Offset: 0x54
}

// 
// Start address: 0x2c7280
void ChainToHandBag(_anon1* chain)
{
	_anon2* point;
	_anon2* upper_point;
	int n_points;
	int idx;
	sgBone* bone;
	sgBone* upper_bone;
	float q[4];
	float q_inv[4];
	float m[4][4];
	float local_dir[4];
	float v[4];
	float vy[4];
	float vz[4];
	// Line 702, Address: 0x2c7280, Func Offset: 0
	// Line 717, Address: 0x2c72a0, Func Offset: 0x20
	// Line 719, Address: 0x2c72a4, Func Offset: 0x24
	// Line 720, Address: 0x2c72b0, Func Offset: 0x30
	// Line 723, Address: 0x2c72b8, Func Offset: 0x38
	// Line 721, Address: 0x2c72bc, Func Offset: 0x3c
	// Line 723, Address: 0x2c72c8, Func Offset: 0x48
	// Line 724, Address: 0x2c72dc, Func Offset: 0x5c
	// Line 725, Address: 0x2c7308, Func Offset: 0x88
	// Line 726, Address: 0x2c7314, Func Offset: 0x94
	// Line 727, Address: 0x2c731c, Func Offset: 0x9c
	// Line 728, Address: 0x2c7324, Func Offset: 0xa4
	// Line 730, Address: 0x2c7338, Func Offset: 0xb8
	// Line 731, Address: 0x2c7348, Func Offset: 0xc8
	// Line 732, Address: 0x2c7354, Func Offset: 0xd4
	// Line 733, Address: 0x2c7364, Func Offset: 0xe4
	// Line 735, Address: 0x2c7370, Func Offset: 0xf0
	// Line 736, Address: 0x2c7398, Func Offset: 0x118
	// Line 735, Address: 0x2c739c, Func Offset: 0x11c
	// Line 736, Address: 0x2c73a0, Func Offset: 0x120
	// Line 739, Address: 0x2c73c8, Func Offset: 0x148
	// Line 741, Address: 0x2c73f4, Func Offset: 0x174
	// Line 742, Address: 0x2c741c, Func Offset: 0x19c
	// Line 743, Address: 0x2c7448, Func Offset: 0x1c8
	// Line 744, Address: 0x2c746c, Func Offset: 0x1ec
	// Line 745, Address: 0x2c7498, Func Offset: 0x218
	// Line 746, Address: 0x2c74a8, Func Offset: 0x228
	// Line 747, Address: 0x2c74b8, Func Offset: 0x238
	// Line 748, Address: 0x2c74c8, Func Offset: 0x248
	// Line 749, Address: 0x2c74dc, Func Offset: 0x25c
	// Line 751, Address: 0x2c74e8, Func Offset: 0x268
	// Line 752, Address: 0x2c74f4, Func Offset: 0x274
	// Line 754, Address: 0x2c7500, Func Offset: 0x280
	// Line 755, Address: 0x2c7528, Func Offset: 0x2a8
	// Line 756, Address: 0x2c7538, Func Offset: 0x2b8
	// Line 757, Address: 0x2c7544, Func Offset: 0x2c4
	// Line 758, Address: 0x2c7548, Func Offset: 0x2c8
	// Line 759, Address: 0x2c755c, Func Offset: 0x2dc
	// Line 761, Address: 0x2c756c, Func Offset: 0x2ec
	// Line 760, Address: 0x2c7570, Func Offset: 0x2f0
	// Line 761, Address: 0x2c7574, Func Offset: 0x2f4
	// Line 760, Address: 0x2c7578, Func Offset: 0x2f8
	// Line 761, Address: 0x2c757c, Func Offset: 0x2fc
	// Line 762, Address: 0x2c7584, Func Offset: 0x304
	// Func End, Address: 0x2c75a4, Func Offset: 0x324
}

// 
// Start address: 0x2c75b0
_anon8* HandBag(sfObj* obj)
{
	// Line 772, Address: 0x2c75b0, Func Offset: 0
	// Func End, Address: 0x2c75b8, Func Offset: 0x8
}

// 
// Start address: 0x2c75c0
_anon1* HandBagChain(_anon8* bag)
{
	// Line 777, Address: 0x2c75c0, Func Offset: 0
	// Func End, Address: 0x2c75c8, Func Offset: 0x8
}

// 
// Start address: 0x2c75d0
void EilHandBag(sfObj* obj)
{
	sfCharacter* chara;
	_anon5* work;
	_anon8* bag;
	_anon1* chain;
	_anon2* point;
	sgBone* bone;
	float v[4];
	sfCldObject* cld_obj;
	sfCldPart* cld_part;
	_anon21* obb;
	_anon6 line;
	float q[4];
	// Line 781, Address: 0x2c75d0, Func Offset: 0
	// Line 792, Address: 0x2c75d4, Func Offset: 0x4
	// Line 781, Address: 0x2c75d8, Func Offset: 0x8
	// Line 792, Address: 0x2c75e8, Func Offset: 0x18
	// Line 790, Address: 0x2c75ec, Func Offset: 0x1c
	// Line 792, Address: 0x2c75f0, Func Offset: 0x20
	// Line 794, Address: 0x2c7608, Func Offset: 0x38
	// Line 795, Address: 0x2c7614, Func Offset: 0x44
	// Line 801, Address: 0x2c7620, Func Offset: 0x50
	// Line 802, Address: 0x2c7628, Func Offset: 0x58
	// Line 803, Address: 0x2c7634, Func Offset: 0x64
	// Line 804, Address: 0x2c7650, Func Offset: 0x80
	// Line 805, Address: 0x2c766c, Func Offset: 0x9c
	// Line 807, Address: 0x2c7688, Func Offset: 0xb8
	// Line 809, Address: 0x2c76a8, Func Offset: 0xd8
	// Line 810, Address: 0x2c76b0, Func Offset: 0xe0
	// Line 812, Address: 0x2c76bc, Func Offset: 0xec
	// Line 813, Address: 0x2c76c0, Func Offset: 0xf0
	// Line 814, Address: 0x2c76c8, Func Offset: 0xf8
	// Line 819, Address: 0x2c76d0, Func Offset: 0x100
	// Line 814, Address: 0x2c76d4, Func Offset: 0x104
	// Line 819, Address: 0x2c76d8, Func Offset: 0x108
	// Line 824, Address: 0x2c76dc, Func Offset: 0x10c
	// Line 825, Address: 0x2c76e4, Func Offset: 0x114
	// Line 826, Address: 0x2c7708, Func Offset: 0x138
	// Line 827, Address: 0x2c7710, Func Offset: 0x140
	// Line 829, Address: 0x2c7720, Func Offset: 0x150
	// Line 831, Address: 0x2c772c, Func Offset: 0x15c
	// Line 833, Address: 0x2c7734, Func Offset: 0x164
	// Line 835, Address: 0x2c7744, Func Offset: 0x174
	// Line 836, Address: 0x2c774c, Func Offset: 0x17c
	// Line 837, Address: 0x2c7760, Func Offset: 0x190
	// Line 839, Address: 0x2c7788, Func Offset: 0x1b8
	// Line 838, Address: 0x2c778c, Func Offset: 0x1bc
	// Line 839, Address: 0x2c7790, Func Offset: 0x1c0
	// Line 841, Address: 0x2c77a4, Func Offset: 0x1d4
	// Line 840, Address: 0x2c77a8, Func Offset: 0x1d8
	// Line 841, Address: 0x2c77ac, Func Offset: 0x1dc
	// Line 846, Address: 0x2c77c0, Func Offset: 0x1f0
	// Line 847, Address: 0x2c77cc, Func Offset: 0x1fc
	// Line 848, Address: 0x2c77d8, Func Offset: 0x208
	// Line 849, Address: 0x2c77e4, Func Offset: 0x214
	// Line 851, Address: 0x2c77ec, Func Offset: 0x21c
	// Line 852, Address: 0x2c77f0, Func Offset: 0x220
	// Func End, Address: 0x2c7808, Func Offset: 0x238
}

// 
// Start address: 0x2c7810
void ChainToChain(_anon1* chain)
{
	_anon2* point;
	_anon2* upper_point;
	int n_points;
	int idx;
	sgBone* bone;
	sgBone* upper_bone;
	float q[4];
	float q_inv[4];
	float m[4][4];
	float local_dir[4];
	float v[4];
	float vy[4];
	float vz[4];
	// Line 856, Address: 0x2c7810, Func Offset: 0
	// Line 871, Address: 0x2c782c, Func Offset: 0x1c
	// Line 873, Address: 0x2c7830, Func Offset: 0x20
	// Line 874, Address: 0x2c7838, Func Offset: 0x28
	// Line 877, Address: 0x2c7840, Func Offset: 0x30
	// Line 875, Address: 0x2c7844, Func Offset: 0x34
	// Line 877, Address: 0x2c7850, Func Offset: 0x40
	// Line 878, Address: 0x2c7864, Func Offset: 0x54
	// Line 879, Address: 0x2c7890, Func Offset: 0x80
	// Line 880, Address: 0x2c789c, Func Offset: 0x8c
	// Line 881, Address: 0x2c78a4, Func Offset: 0x94
	// Line 882, Address: 0x2c78ac, Func Offset: 0x9c
	// Line 884, Address: 0x2c78c0, Func Offset: 0xb0
	// Line 885, Address: 0x2c78d0, Func Offset: 0xc0
	// Line 886, Address: 0x2c78dc, Func Offset: 0xcc
	// Line 889, Address: 0x2c78ec, Func Offset: 0xdc
	// Line 891, Address: 0x2c7918, Func Offset: 0x108
	// Line 892, Address: 0x2c7940, Func Offset: 0x130
	// Line 893, Address: 0x2c796c, Func Offset: 0x15c
	// Line 894, Address: 0x2c7990, Func Offset: 0x180
	// Line 895, Address: 0x2c79bc, Func Offset: 0x1ac
	// Line 896, Address: 0x2c79cc, Func Offset: 0x1bc
	// Line 897, Address: 0x2c79dc, Func Offset: 0x1cc
	// Line 898, Address: 0x2c79ec, Func Offset: 0x1dc
	// Line 899, Address: 0x2c7a00, Func Offset: 0x1f0
	// Line 900, Address: 0x2c7a0c, Func Offset: 0x1fc
	// Line 901, Address: 0x2c7a28, Func Offset: 0x218
	// Line 903, Address: 0x2c7a34, Func Offset: 0x224
	// Line 905, Address: 0x2c7a44, Func Offset: 0x234
	// Line 904, Address: 0x2c7a48, Func Offset: 0x238
	// Line 905, Address: 0x2c7a4c, Func Offset: 0x23c
	// Line 904, Address: 0x2c7a50, Func Offset: 0x240
	// Line 905, Address: 0x2c7a54, Func Offset: 0x244
	// Line 906, Address: 0x2c7a5c, Func Offset: 0x24c
	// Func End, Address: 0x2c7a78, Func Offset: 0x268
}

// 
// Start address: 0x2c7a80
void EilChain(sfObj* obj)
{
	_anon8* bag;
	_anon1* chain;
	sgBone* bone;
	float v[4];
	// Line 910, Address: 0x2c7a80, Func Offset: 0
	// Line 924, Address: 0x2c7a84, Func Offset: 0x4
	// Line 910, Address: 0x2c7a88, Func Offset: 0x8
	// Line 924, Address: 0x2c7a98, Func Offset: 0x18
	// Line 922, Address: 0x2c7a9c, Func Offset: 0x1c
	// Line 924, Address: 0x2c7aa0, Func Offset: 0x20
	// Line 926, Address: 0x2c7ab8, Func Offset: 0x38
	// Line 927, Address: 0x2c7ac4, Func Offset: 0x44
	// Line 933, Address: 0x2c7ad0, Func Offset: 0x50
	// Line 934, Address: 0x2c7ad8, Func Offset: 0x58
	// Line 935, Address: 0x2c7ae4, Func Offset: 0x64
	// Line 936, Address: 0x2c7b00, Func Offset: 0x80
	// Line 937, Address: 0x2c7b1c, Func Offset: 0x9c
	// Line 938, Address: 0x2c7b38, Func Offset: 0xb8
	// Line 939, Address: 0x2c7b54, Func Offset: 0xd4
	// Line 940, Address: 0x2c7b70, Func Offset: 0xf0
	// Line 941, Address: 0x2c7b8c, Func Offset: 0x10c
	// Line 942, Address: 0x2c7ba8, Func Offset: 0x128
	// Line 943, Address: 0x2c7bc4, Func Offset: 0x144
	// Line 953, Address: 0x2c7be4, Func Offset: 0x164
	// Line 955, Address: 0x2c7bf0, Func Offset: 0x170
	// Line 956, Address: 0x2c7bf8, Func Offset: 0x178
	// Line 958, Address: 0x2c7c00, Func Offset: 0x180
	// Line 959, Address: 0x2c7c10, Func Offset: 0x190
	// Line 960, Address: 0x2c7c1c, Func Offset: 0x19c
	// Line 961, Address: 0x2c7c28, Func Offset: 0x1a8
	// Line 971, Address: 0x2c7c30, Func Offset: 0x1b0
	// Func End, Address: 0x2c7c48, Func Offset: 0x1c8
}

// 
// Start address: 0x2c7c50
void RodPointUpdate(_anon13* rod)
{
	sgBone* bone;
	float q[4];
	float v[4];
	float rigid_point[4];
	float new_point[4];
	float v0[4];
	float v1[4];
	float angle;
	float axis[4];
	// Line 986, Address: 0x2c7c50, Func Offset: 0
	// Line 1001, Address: 0x2c7c54, Func Offset: 0x4
	// Line 986, Address: 0x2c7c58, Func Offset: 0x8
	// Line 1001, Address: 0x2c7c5c, Func Offset: 0xc
	// Line 986, Address: 0x2c7c60, Func Offset: 0x10
	// Line 998, Address: 0x2c7c6c, Func Offset: 0x1c
	// Line 1001, Address: 0x2c7c70, Func Offset: 0x20
	// Line 1002, Address: 0x2c7c78, Func Offset: 0x28
	// Line 1005, Address: 0x2c7c88, Func Offset: 0x38
	// Line 1008, Address: 0x2c7cbc, Func Offset: 0x6c
	// Line 1009, Address: 0x2c7cec, Func Offset: 0x9c
	// Line 1012, Address: 0x2c7d0c, Func Offset: 0xbc
	// Line 1013, Address: 0x2c7d2c, Func Offset: 0xdc
	// Line 1014, Address: 0x2c7d54, Func Offset: 0x104
	// Line 1017, Address: 0x2c7d74, Func Offset: 0x124
	// Line 1018, Address: 0x2c7da0, Func Offset: 0x150
	// Line 1019, Address: 0x2c7db0, Func Offset: 0x160
	// Line 1020, Address: 0x2c7ddc, Func Offset: 0x18c
	// Line 1021, Address: 0x2c7dec, Func Offset: 0x19c
	// Line 1022, Address: 0x2c7e08, Func Offset: 0x1b8
	// Line 1024, Address: 0x2c7e0c, Func Offset: 0x1bc
	// Line 1025, Address: 0x2c7e10, Func Offset: 0x1c0
	// Line 1026, Address: 0x2c7e20, Func Offset: 0x1d0
	// Line 1029, Address: 0x2c7e2c, Func Offset: 0x1dc
	// Line 1032, Address: 0x2c7e3c, Func Offset: 0x1ec
	// Line 1034, Address: 0x2c7e58, Func Offset: 0x208
	// Line 1035, Address: 0x2c7e64, Func Offset: 0x214
	// Func End, Address: 0x2c7e78, Func Offset: 0x228
}

// 
// Start address: 0x2c7e80
void RodPointConstruct(_anon13* rod, sgBone* bone, float* point)
{
	// Line 1039, Address: 0x2c7e80, Func Offset: 0
	// Line 1041, Address: 0x2c7e84, Func Offset: 0x4
	// Line 1039, Address: 0x2c7e88, Func Offset: 0x8
	// Line 1041, Address: 0x2c7e8c, Func Offset: 0xc
	// Line 1039, Address: 0x2c7e90, Func Offset: 0x10
	// Line 1040, Address: 0x2c7e94, Func Offset: 0x14
	// Line 1041, Address: 0x2c7e98, Func Offset: 0x18
	// Line 1042, Address: 0x2c7ea0, Func Offset: 0x20
	// Line 1043, Address: 0x2c7ea4, Func Offset: 0x24
	// Func End, Address: 0x2c7eac, Func Offset: 0x2c
}

// 
// Start address: 0x2c7eb0
void EilRod(sfObj* obj)
{
	_anon4* rod_work;
	int i;
	_anon13* rod;
	float rod_point_offsets[4][2];
	// Line 1052, Address: 0x2c7eb0, Func Offset: 0
	// Line 1069, Address: 0x2c7eb4, Func Offset: 0x4
	// Line 1052, Address: 0x2c7eb8, Func Offset: 0x8
	// Line 1069, Address: 0x2c7ec8, Func Offset: 0x18
	// Line 1067, Address: 0x2c7ecc, Func Offset: 0x1c
	// Line 1069, Address: 0x2c7ed0, Func Offset: 0x20
	// Line 1071, Address: 0x2c7ee8, Func Offset: 0x38
	// Line 1072, Address: 0x2c7ef8, Func Offset: 0x48
	// Line 1080, Address: 0x2c7f00, Func Offset: 0x50
	// Line 1082, Address: 0x2c7f1c, Func Offset: 0x6c
	// Line 1084, Address: 0x2c7f40, Func Offset: 0x90
	// Line 1085, Address: 0x2c7f4c, Func Offset: 0x9c
	// Line 1088, Address: 0x2c7f50, Func Offset: 0xa0
	// Line 1091, Address: 0x2c7f54, Func Offset: 0xa4
	// Line 1093, Address: 0x2c7f58, Func Offset: 0xa8
	// Line 1094, Address: 0x2c7f60, Func Offset: 0xb0
	// Line 1093, Address: 0x2c7f64, Func Offset: 0xb4
	// Line 1094, Address: 0x2c7f68, Func Offset: 0xb8
	// Line 1096, Address: 0x2c7f74, Func Offset: 0xc4
	// Line 1097, Address: 0x2c7f78, Func Offset: 0xc8
	// Func End, Address: 0x2c7f90, Func Offset: 0xe0
}

// 
// Start address: 0x2c7f90
void CenterSpringConstruct(_anon7* cs, sgBone* bone)
{
	// Line 1110, Address: 0x2c7f90, Func Offset: 0
	// Line 1111, Address: 0x2c7f9c, Func Offset: 0xc
	// Line 1112, Address: 0x2c7fa4, Func Offset: 0x14
	// Line 1113, Address: 0x2c7fb0, Func Offset: 0x20
	// Line 1114, Address: 0x2c7fb8, Func Offset: 0x28
	// Line 1116, Address: 0x2c7fc8, Func Offset: 0x38
	// Line 1115, Address: 0x2c7fd0, Func Offset: 0x40
	// Line 1116, Address: 0x2c7fd4, Func Offset: 0x44
	// Line 1117, Address: 0x2c7fd8, Func Offset: 0x48
	// Func End, Address: 0x2c7fe8, Func Offset: 0x58
}

// 
// Start address: 0x2c7ff0
void CenterSpringUpdate(_anon7* cs)
{
	float new_pos[4];
	float center_pos[4];
	float v[4];
	sgBone* bone;
	float r;
	float q[4];
	float q2[4];
	// Line 1120, Address: 0x2c7ff0, Func Offset: 0
	// Line 1129, Address: 0x2c8004, Func Offset: 0x14
	// Line 1130, Address: 0x2c8008, Func Offset: 0x18
	// Line 1131, Address: 0x2c8014, Func Offset: 0x24
	// Line 1134, Address: 0x2c8020, Func Offset: 0x30
	// Line 1136, Address: 0x2c8054, Func Offset: 0x64
	// Line 1137, Address: 0x2c8084, Func Offset: 0x94
	// Line 1140, Address: 0x2c80a4, Func Offset: 0xb4
	// Line 1141, Address: 0x2c80c4, Func Offset: 0xd4
	// Line 1142, Address: 0x2c80ec, Func Offset: 0xfc
	// Line 1145, Address: 0x2c810c, Func Offset: 0x11c
	// Line 1146, Address: 0x2c812c, Func Offset: 0x13c
	// Line 1147, Address: 0x2c8150, Func Offset: 0x160
	// Line 1148, Address: 0x2c8168, Func Offset: 0x178
	// Line 1149, Address: 0x2c8194, Func Offset: 0x1a4
	// Line 1150, Address: 0x2c81c0, Func Offset: 0x1d0
	// Line 1153, Address: 0x2c81e0, Func Offset: 0x1f0
	// Line 1154, Address: 0x2c81ec, Func Offset: 0x1fc
	// Line 1155, Address: 0x2c8208, Func Offset: 0x218
	// Line 1158, Address: 0x2c8214, Func Offset: 0x224
	// Line 1159, Address: 0x2c821c, Func Offset: 0x22c
	// Line 1161, Address: 0x2c8228, Func Offset: 0x238
	// Line 1162, Address: 0x2c8248, Func Offset: 0x258
	// Line 1163, Address: 0x2c824c, Func Offset: 0x25c
	// Line 1164, Address: 0x2c8250, Func Offset: 0x260
	// Line 1163, Address: 0x2c8254, Func Offset: 0x264
	// Line 1164, Address: 0x2c8258, Func Offset: 0x268
	// Line 1162, Address: 0x2c825c, Func Offset: 0x26c
	// Line 1164, Address: 0x2c8260, Func Offset: 0x270
	// Line 1163, Address: 0x2c8264, Func Offset: 0x274
	// Line 1164, Address: 0x2c8268, Func Offset: 0x278
	// Line 1163, Address: 0x2c826c, Func Offset: 0x27c
	// Line 1164, Address: 0x2c8270, Func Offset: 0x280
	// Line 1165, Address: 0x2c8278, Func Offset: 0x288
	// Line 1166, Address: 0x2c8280, Func Offset: 0x290
	// Line 1165, Address: 0x2c8284, Func Offset: 0x294
	// Line 1166, Address: 0x2c8288, Func Offset: 0x298
	// Line 1167, Address: 0x2c8298, Func Offset: 0x2a8
	// Line 1168, Address: 0x2c82a4, Func Offset: 0x2b4
	// Line 1169, Address: 0x2c82b4, Func Offset: 0x2c4
	// Line 1170, Address: 0x2c82c0, Func Offset: 0x2d0
	// Func End, Address: 0x2c82d4, Func Offset: 0x2e4
}

// 
// Start address: 0x2c82e0
void EileenBust(sfObj* obj)
{
	sfCharacter* chara;
	sgAnime* anm;
	_anon3* work;
	_anon7* cs;
	int bone_no;
	int mdl_type;
	// Line 1191, Address: 0x2c82e0, Func Offset: 0
	// Line 1202, Address: 0x2c82e4, Func Offset: 0x4
	// Line 1191, Address: 0x2c82e8, Func Offset: 0x8
	// Line 1202, Address: 0x2c82fc, Func Offset: 0x1c
	// Line 1201, Address: 0x2c8300, Func Offset: 0x20
	// Line 1202, Address: 0x2c8304, Func Offset: 0x24
	// Line 1203, Address: 0x2c831c, Func Offset: 0x3c
	// Line 1204, Address: 0x2c8320, Func Offset: 0x40
	// Line 1205, Address: 0x2c8328, Func Offset: 0x48
	// Line 1206, Address: 0x2c8330, Func Offset: 0x50
	// Line 1207, Address: 0x2c8340, Func Offset: 0x60
	// Line 1209, Address: 0x2c8358, Func Offset: 0x78
	// Line 1210, Address: 0x2c8368, Func Offset: 0x88
	// Line 1211, Address: 0x2c8370, Func Offset: 0x90
	// Line 1212, Address: 0x2c8378, Func Offset: 0x98
	// Line 1214, Address: 0x2c8384, Func Offset: 0xa4
	// Line 1218, Address: 0x2c8390, Func Offset: 0xb0
	// Line 1214, Address: 0x2c8394, Func Offset: 0xb4
	// Line 1215, Address: 0x2c8398, Func Offset: 0xb8
	// Line 1218, Address: 0x2c839c, Func Offset: 0xbc
	// Line 1221, Address: 0x2c83ac, Func Offset: 0xcc
	// Line 1220, Address: 0x2c83b0, Func Offset: 0xd0
	// Line 1221, Address: 0x2c83b4, Func Offset: 0xd4
	// Line 1224, Address: 0x2c83c4, Func Offset: 0xe4
	// Line 1225, Address: 0x2c83d8, Func Offset: 0xf8
	// Line 1226, Address: 0x2c83dc, Func Offset: 0xfc
	// Line 1225, Address: 0x2c83e0, Func Offset: 0x100
	// Line 1226, Address: 0x2c83e4, Func Offset: 0x104
	// Line 1227, Address: 0x2c83ec, Func Offset: 0x10c
	// Line 1230, Address: 0x2c83f8, Func Offset: 0x118
	// Line 1231, Address: 0x2c8404, Func Offset: 0x124
	// Line 1232, Address: 0x2c8408, Func Offset: 0x128
	// Line 1231, Address: 0x2c840c, Func Offset: 0x12c
	// Line 1232, Address: 0x2c8410, Func Offset: 0x130
	// Line 1233, Address: 0x2c8418, Func Offset: 0x138
	// Line 1235, Address: 0x2c8428, Func Offset: 0x148
	// Line 1236, Address: 0x2c8430, Func Offset: 0x150
	// Line 1238, Address: 0x2c8438, Func Offset: 0x158
	// Line 1240, Address: 0x2c843c, Func Offset: 0x15c
	// Line 1241, Address: 0x2c844c, Func Offset: 0x16c
	// Line 1242, Address: 0x2c8454, Func Offset: 0x174
	// Line 1243, Address: 0x2c845c, Func Offset: 0x17c
	// Line 1245, Address: 0x2c8460, Func Offset: 0x180
	// Line 1246, Address: 0x2c8474, Func Offset: 0x194
	// Line 1247, Address: 0x2c847c, Func Offset: 0x19c
	// Line 1248, Address: 0x2c8484, Func Offset: 0x1a4
	// Line 1250, Address: 0x2c8488, Func Offset: 0x1a8
	// Line 1252, Address: 0x2c8490, Func Offset: 0x1b0
	// Line 1255, Address: 0x2c8498, Func Offset: 0x1b8
	// Func End, Address: 0x2c84b4, Func Offset: 0x1d4
}

// 
// Start address: 0x2c84c0
void EileenBustMoveSet(sfCharacter* eileen_chara, _enum_0 type)
{
	sfObj* optr;
	// Line 1261, Address: 0x2c84c0, Func Offset: 0
	// Line 1263, Address: 0x2c84d8, Func Offset: 0x18
	// Line 1264, Address: 0x2c84e4, Func Offset: 0x24
	// Line 1266, Address: 0x2c84ec, Func Offset: 0x2c
	// Line 1267, Address: 0x2c84f8, Func Offset: 0x38
	// Line 1268, Address: 0x2c84fc, Func Offset: 0x3c
	// Line 1269, Address: 0x2c8500, Func Offset: 0x40
	// Line 1267, Address: 0x2c8504, Func Offset: 0x44
	// Line 1268, Address: 0x2c8508, Func Offset: 0x48
	// Line 1269, Address: 0x2c850c, Func Offset: 0x4c
	// Line 1270, Address: 0x2c8514, Func Offset: 0x54
	// Func End, Address: 0x2c8530, Func Offset: 0x70
}

// 
// Start address: 0x2c8530
float GetSize(float* v)
{
	float v0[4];
	float v1[4];
	float wvm[4][4];
	float vsm[4][4];
	float r;
	// Line 1283, Address: 0x2c8530, Func Offset: 0
	// Line 1291, Address: 0x2c8540, Func Offset: 0x10
	// Line 1292, Address: 0x2c8548, Func Offset: 0x18
	// Line 1293, Address: 0x2c8550, Func Offset: 0x20
	// Line 1294, Address: 0x2c8584, Func Offset: 0x54
	// Line 1296, Address: 0x2c8594, Func Offset: 0x64
	// Line 1295, Address: 0x2c8598, Func Offset: 0x68
	// Line 1296, Address: 0x2c859c, Func Offset: 0x6c
	// Line 1295, Address: 0x2c85a0, Func Offset: 0x70
	// Line 1296, Address: 0x2c85a8, Func Offset: 0x78
	// Line 1295, Address: 0x2c85ac, Func Offset: 0x7c
	// Line 1296, Address: 0x2c85b4, Func Offset: 0x84
	// Line 1297, Address: 0x2c85e8, Func Offset: 0xb8
	// Line 1298, Address: 0x2c8628, Func Offset: 0xf8
	// Line 1300, Address: 0x2c862c, Func Offset: 0xfc
	// Line 1298, Address: 0x2c8630, Func Offset: 0x100
	// Line 1300, Address: 0x2c8634, Func Offset: 0x104
	// Line 1298, Address: 0x2c8638, Func Offset: 0x108
	// Line 1300, Address: 0x2c863c, Func Offset: 0x10c
	// Func End, Address: 0x2c8644, Func Offset: 0x114
}

// 
// Start address: 0x2c8650
void GetRect(float* c, float r, float vs[4])
{
	float dx;
	float dy;
	// Line 1303, Address: 0x2c8650, Func Offset: 0
	// Line 1307, Address: 0x2c866c, Func Offset: 0x1c
	// Line 1309, Address: 0x2c8678, Func Offset: 0x28
	// Line 1310, Address: 0x2c8680, Func Offset: 0x30
	// Line 1311, Address: 0x2c868c, Func Offset: 0x3c
	// Line 1312, Address: 0x2c8698, Func Offset: 0x48
	// Line 1313, Address: 0x2c86a0, Func Offset: 0x50
	// Line 1314, Address: 0x2c86ac, Func Offset: 0x5c
	// Line 1315, Address: 0x2c86b8, Func Offset: 0x68
	// Func End, Address: 0x2c86d0, Func Offset: 0x80
}

// 
// Start address: 0x2c86d0
void EilGunFire(sfObj* obj)
{
	_anon5* work;
	float v[4];
	float center[4];
	sgBone* bone;
	sfCharacter* chara;
	float wsm[4][4];
	float sc[4];
	float r;
	float scs[4][4];
	unsigned long* pk;
	unsigned long tex0;
	float lit;
	int col;
	_anon11* tex;
	int cbp;
	int* uv;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	// Line 1324, Address: 0x2c86d0, Func Offset: 0
	// Line 1342, Address: 0x2c86e4, Func Offset: 0x14
	// Line 1344, Address: 0x2c86e8, Func Offset: 0x18
	// Line 1346, Address: 0x2c86f4, Func Offset: 0x24
	// Line 1350, Address: 0x2c8704, Func Offset: 0x34
	// Line 1353, Address: 0x2c870c, Func Offset: 0x3c
	// Line 1355, Address: 0x2c8720, Func Offset: 0x50
	// Line 1356, Address: 0x2c8728, Func Offset: 0x58
	// Line 1357, Address: 0x2c8750, Func Offset: 0x80
	// Line 1359, Address: 0x2c8770, Func Offset: 0xa0
	// Line 1360, Address: 0x2c8778, Func Offset: 0xa8
	// Line 1361, Address: 0x2c87b8, Func Offset: 0xe8
	// Line 1362, Address: 0x2c87f0, Func Offset: 0x120
	// Line 1363, Address: 0x2c8818, Func Offset: 0x148
	// Line 1365, Address: 0x2c8858, Func Offset: 0x188
	// Line 1366, Address: 0x2c8860, Func Offset: 0x190
	// Line 1369, Address: 0x2c8878, Func Offset: 0x1a8
	// Line 1370, Address: 0x2c8884, Func Offset: 0x1b4
	// Line 1372, Address: 0x2c888c, Func Offset: 0x1bc
	// Line 1373, Address: 0x2c8898, Func Offset: 0x1c8
	// Line 1372, Address: 0x2c88a0, Func Offset: 0x1d0
	// Line 1373, Address: 0x2c88a4, Func Offset: 0x1d4
	// Line 1376, Address: 0x2c88b4, Func Offset: 0x1e4
	// Line 1373, Address: 0x2c88b8, Func Offset: 0x1e8
	// Line 1377, Address: 0x2c88bc, Func Offset: 0x1ec
	// Line 1380, Address: 0x2c88d4, Func Offset: 0x204
	// Line 1381, Address: 0x2c88ec, Func Offset: 0x21c
	// Line 1382, Address: 0x2c88f4, Func Offset: 0x224
	// Line 1383, Address: 0x2c88fc, Func Offset: 0x22c
	// Line 1384, Address: 0x2c8908, Func Offset: 0x238
	// Line 1386, Address: 0x2c890c, Func Offset: 0x23c
	// Line 1384, Address: 0x2c8910, Func Offset: 0x240
	// Line 1386, Address: 0x2c8914, Func Offset: 0x244
	// Line 1388, Address: 0x2c8918, Func Offset: 0x248
	// Line 1384, Address: 0x2c891c, Func Offset: 0x24c
	// Line 1388, Address: 0x2c8920, Func Offset: 0x250
	// Line 1384, Address: 0x2c8924, Func Offset: 0x254
	// Line 1388, Address: 0x2c8928, Func Offset: 0x258
	// Line 1385, Address: 0x2c892c, Func Offset: 0x25c
	// Line 1386, Address: 0x2c8930, Func Offset: 0x260
	// Line 1387, Address: 0x2c8934, Func Offset: 0x264
	// Line 1388, Address: 0x2c8938, Func Offset: 0x268
	// Line 1389, Address: 0x2c893c, Func Offset: 0x26c
	// Line 1384, Address: 0x2c8940, Func Offset: 0x270
	// Line 1389, Address: 0x2c8944, Func Offset: 0x274
	// Line 1384, Address: 0x2c8948, Func Offset: 0x278
	// Line 1391, Address: 0x2c8958, Func Offset: 0x288
	// Line 1384, Address: 0x2c895c, Func Offset: 0x28c
	// Line 1385, Address: 0x2c8960, Func Offset: 0x290
	// Line 1384, Address: 0x2c8964, Func Offset: 0x294
	// Line 1391, Address: 0x2c8968, Func Offset: 0x298
	// Line 1384, Address: 0x2c896c, Func Offset: 0x29c
	// Line 1392, Address: 0x2c8970, Func Offset: 0x2a0
	// Line 1385, Address: 0x2c8974, Func Offset: 0x2a4
	// Line 1393, Address: 0x2c8978, Func Offset: 0x2a8
	// Line 1385, Address: 0x2c897c, Func Offset: 0x2ac
	// Line 1386, Address: 0x2c8994, Func Offset: 0x2c4
	// Line 1385, Address: 0x2c8998, Func Offset: 0x2c8
	// Line 1386, Address: 0x2c89a0, Func Offset: 0x2d0
	// Line 1387, Address: 0x2c89bc, Func Offset: 0x2ec
	// Line 1386, Address: 0x2c89c0, Func Offset: 0x2f0
	// Line 1387, Address: 0x2c89c8, Func Offset: 0x2f8
	// Line 1388, Address: 0x2c89e4, Func Offset: 0x314
	// Line 1387, Address: 0x2c89e8, Func Offset: 0x318
	// Line 1388, Address: 0x2c89f0, Func Offset: 0x320
	// Line 1389, Address: 0x2c8a0c, Func Offset: 0x33c
	// Line 1388, Address: 0x2c8a10, Func Offset: 0x340
	// Line 1389, Address: 0x2c8a18, Func Offset: 0x348
	// Line 1392, Address: 0x2c8a34, Func Offset: 0x364
	// Line 1389, Address: 0x2c8a38, Func Offset: 0x368
	// Line 1392, Address: 0x2c8a40, Func Offset: 0x370
	// Line 1391, Address: 0x2c8a44, Func Offset: 0x374
	// Line 1392, Address: 0x2c8a48, Func Offset: 0x378
	// Line 1391, Address: 0x2c8a50, Func Offset: 0x380
	// Line 1392, Address: 0x2c8a58, Func Offset: 0x388
	// Line 1393, Address: 0x2c8a68, Func Offset: 0x398
	// Line 1392, Address: 0x2c8a6c, Func Offset: 0x39c
	// Line 1393, Address: 0x2c8a9c, Func Offset: 0x3cc
	// Line 1394, Address: 0x2c8adc, Func Offset: 0x40c
	// Line 1393, Address: 0x2c8ae0, Func Offset: 0x410
	// Line 1394, Address: 0x2c8ae4, Func Offset: 0x414
	// Line 1395, Address: 0x2c8aec, Func Offset: 0x41c
	// Line 1394, Address: 0x2c8af0, Func Offset: 0x420
	// Line 1395, Address: 0x2c8b08, Func Offset: 0x438
	// Line 1394, Address: 0x2c8b0c, Func Offset: 0x43c
	// Line 1395, Address: 0x2c8b3c, Func Offset: 0x46c
	// Line 1396, Address: 0x2c8b7c, Func Offset: 0x4ac
	// Line 1397, Address: 0x2c8b84, Func Offset: 0x4b4
	// Line 1398, Address: 0x2c8b8c, Func Offset: 0x4bc
	// Line 1399, Address: 0x2c8ba4, Func Offset: 0x4d4
	// Line 1401, Address: 0x2c8bbc, Func Offset: 0x4ec
	// Line 1402, Address: 0x2c8bc8, Func Offset: 0x4f8
	// Func End, Address: 0x2c8be0, Func Offset: 0x510
}

