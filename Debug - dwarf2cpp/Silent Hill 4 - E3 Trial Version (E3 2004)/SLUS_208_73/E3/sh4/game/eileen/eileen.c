typedef struct sgAnime;
typedef struct sfObj;
typedef struct _anon0;
typedef struct _anon1;
typedef struct _GAME_WORK;
typedef enum sgIKSolveResult : unsigned char;
typedef struct _anon2;
typedef struct _anon3;
typedef struct sgQTNode;
typedef enum BattleAttackKind : unsigned char;
typedef struct sgQTObject;
typedef enum PlayerExtStatus : unsigned char;
typedef struct sgIKHandle;
typedef struct sfCldObject;
typedef struct BattleHit;
typedef struct sfCharacter;
typedef struct sgBone;
typedef struct sfOffsetAABB;
typedef union sfCldBody;
typedef struct _PLAYER_WORK;
typedef struct _anon4;
typedef struct sfCldPart;
typedef struct _anon5;
typedef struct _anon6;
typedef union _anon7;
typedef struct _anon8;
typedef struct sgSVModel;
typedef enum BattleHitResult : unsigned char;
typedef enum GameItem : unsigned char;
typedef struct _anon9;
typedef struct _anon10;
typedef struct _anon11;
typedef enum EileenArmsTypeNo : unsigned char;
typedef struct _anon12;
typedef struct _anon13;
typedef struct _anon14;
typedef struct _anon15;
typedef union _anon16;
typedef struct _anon17;
typedef enum _enum : unsigned char;

typedef void(*type_8)(sfObj*);
typedef sgIKSolveResult(*type_9)();
typedef void(*type_11)(sfObj*);
typedef void(*type_18)(sfObj*);
typedef void(*type_19)(sgAnime*, int);
typedef void(*type_24)(sfObj*);
typedef void(*type_30)(sfObj*);
typedef void(*type_31)(sfObj*);
typedef void(*type_35)(_anon8*, int, int, float*);
typedef void(*type_40)(sfObj*);

typedef int type_0[1];
typedef float type_1[4];
typedef float type_2[4][4];
typedef int type_3[1];
typedef _anon2 type_4[6];
typedef float type_5[4][2];
typedef int type_6[1];
typedef int type_7[4];
typedef float type_10[4];
typedef int type_12[4];
typedef unsigned char type_13[3];
typedef int type_14[3];
typedef unsigned char type_15[8];
typedef void* type_16[4];
typedef _PLAYER_WORK type_17[2];
typedef float type_20[4];
typedef short type_21[2];
typedef unsigned char type_22[4];
typedef unsigned short type_23[2];
typedef char type_25[4];
typedef _anon7 type_26[256];
typedef _anon4 type_27[2];
typedef unsigned char type_28[4];
typedef int type_29[1];
typedef float type_32[1];
typedef int type_33[1];
typedef int type_34[1];
typedef _anon13 type_36[4];
typedef _anon16 type_37[0];
typedef int type_38[1];
typedef _anon17 type_39[3];
typedef char type_41[21];
typedef sfCldPart* type_42[6];
typedef int type_43[4];
typedef int type_44[1];
typedef unsigned char type_45[3];

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
	_anon7 fwork[256];
	_anon7* work;
	void(*func)(sfObj*);
	_anon7* work_pt0;
	_anon7* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon7* sys_work;
	_anon7* scene_work;
	_anon7* event_work;
	_anon7* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
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
	_anon11* ground_poly;
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

struct _anon1
{
	unsigned long tex0;
	unsigned long tex1;
	unsigned long clamp;
	unsigned long alpha;
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

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

struct _anon2
{
	short motion_type;
	short reverse_enable;
	short cancel_enable;
	short appearance_weight;
	float play_speed;
};

struct _anon3
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

struct sgQTNode
{
	int dummy;
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

struct sgQTObject
{
	_anon12 bounding_ball;
	sgQTObject* next;
	sgQTObject* prev;
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

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon10 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
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

struct sfOffsetAABB
{
	_anon14 aabb;
	float offset[4];
};

union sfCldBody
{
	_anon15 obb;
	_anon14 aabb;
	sfOffsetAABB offset_aabb;
	_anon9 line;
	_anon12 sphere;
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
	_anon5* anim_ctrl;
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

struct _anon4
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

union _anon7
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

enum BattleHitResult : unsigned char
{
	GB_HIT_RES_NONE,
	GB_HIT_RES_PLAYER_HIT,
	GB_HIT_RES_ENEMY_HIT,
	GB_HIT_RES_EILEEN_HIT,
	GB_HIT_RES_END
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
	float start[4];
	float end[4];
};

struct _anon10
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

struct _anon11
{
	_anon16 vertex[0];
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

struct _anon14
{
	float bmin[4];
	float bmax[4];
};

struct _anon15
{
	float mat[4][4];
	float half_w[4];
};

union _anon16
{
	float node[4];
	_anon13 data[4];
};

struct _anon17
{
	int start_motion;
	int running_motion;
	int end_motion;
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

sfObj* eileen_obj;
_PLAYER_WORK playerw[2];
_anon4 player_ext_info[2];
_GAME_WORK gamew;
float sg_vector_unit_y[4];
float sg_vector_unit_z[4];
float sg_vector_unit_w[4];
void(*EilDrawPost)(sfObj*);
void(*EilDrawPre)(sfObj*);
void(*EileenDestruct)(sfObj*);
void(*EileenLast)(sfObj*);
void(*Eileen)(sfObj*);

_PLAYER_WORK* EileenPlayerWork();
void EilPlayerWorkSyncFirst(_anon0* eil);
void UpdatePlayerInfo(_anon0* eil);
int CheckHurryToHenry();
void EileenGameInit();
void EileenInit(_anon0* eil);
void EilDrawPre(sfObj* obj);
void EilDrawPost();
void EileenFirst(_anon0* eil);
int EilAttackAttitude(_anon0* eil);
void EileenAnalize(_anon0* eil);
void EilCommand(_anon0* eil, int command);
void EilCommandQuit(_anon0* eil, int command);
int EilCommandStatus(_anon0* eil, int command);
void FaceToNone(_anon0* eil);
void FaceToCommand(_anon0* eil);
void FaceToHenry(_anon0* eil);
void FaceToEnemy(_anon0* eil);
void FaceToHit(_anon0* eil);
void EilFaceMovement(_anon0* eil);
void EileenThink_OutofScene(_anon0* eil);
void EileenThink_ToHenry(_anon0* eil);
int AttackOnCheck(_anon0* eil);
void EilEscapeThink(_anon0* eil);
void EilAttackThink(_anon0* eil);
void EileenThink_ToEnemy(_anon0* eil);
void EileenThink_ToCommand(_anon0* eil);
void EileenThink_Collision(_anon0* eil);
void EileenThink_HurdleAvoid(_anon0* eil);
void EileenThink(_anon0* eil);
void StepChange(sfObj* obj, int new_step);
void TurnToTarget(_anon0* eil);
void ActionEndByWait(sfObj* obj);
void EilWait(sfObj* obj);
void EilFollow(sfObj* obj);
void EilRunStop(sfObj* obj);
void EilTurn(sfObj* obj);
void EilTargetingMove(sfObj* obj);
void EilSlideMove(sfObj* obj);
void EilDamage(sfObj* obj);
void EilPushed(sfObj* obj);
void EilStandBy(sfObj* obj);
void EilBreath(sfObj* obj);
void EilHenryDead(sfObj* obj);
void EilEquip(sfObj* obj);
void EilAttack(sfObj* obj);
void EilMiddleAttack(sfObj* obj);
void EilLowerAttack(sfObj* obj);
void EilAttackSpecial(sfObj* obj);
void EilAttackFinish(sfObj* obj);
void EilGunAttack(sfObj* obj);
void EilTalk(sfObj* obj);
void EilInsane(sfObj* obj);
void EilDown(sfObj* obj);
void EileenObjectCollision(_anon0* eil);
void EileenDestruct(sfObj* obj);
void EileenConstruct(sfObj* obj);
void Eileen(sfObj* obj);
void EilFollow_LAST(sfObj* obj);
void EileenLast(sfObj* obj);
void EileenLastSet(sfObj* obj);
void EileenStand(sfObj* obj);
sfObj* EileenObj();
void EilGetPos(_anon0* eil, float* v);
void EilGetGlobalPos(_anon0* eil, float* v);
void EilGetRot(_anon0* eil, float* q);
_enum EileenStayStage();
int EileenStayScene();
void EileenGetPos(float* v);
void EileenGetRot(float* q);
int EileenExistence();
void EileenCall();
void EileenDelete();
void EileenSetAlone();
void EileenSetWithHenry();
void EileenWarp(_enum stage, int scene, float* pos, float* rot);
void EileenMoveByForceV(float* dir, float per_sec);
void EileenSceneStart();
void EileenSceneEnd();
int EileenIsWithHenry();
void EileenDemoDisplayOn();
void EileenDemoDisplayOff();
EileenArmsTypeNo EileenCurrentEquipArms();
void EileenCommandEquipArms(EileenArmsTypeNo eileen_arms_type);
int EileenCommandGo(float* pos);
int EileenCommandGoResult();
int EileenCommandTurn(float* pos);
int EileenCommandTurnResult();
int EileenCommandTalk(int motion_no);
void EileenCommandTalkStop();
void EileenCommandInsane(int itype);
void EileenCommandInsaneStop();
void EileenCommandTurnFace(float* pos);

// 
// Start address: 0x297e60
_PLAYER_WORK* EileenPlayerWork()
{
	// Line 174, Address: 0x297e60, Func Offset: 0
	// Line 175, Address: 0x297e64, Func Offset: 0x4
	// Func End, Address: 0x297e6c, Func Offset: 0xc
}

// 
// Start address: 0x297e70
void EilPlayerWorkSyncFirst(_anon0* eil)
{
	_PLAYER_WORK* pl_work;
	// Line 180, Address: 0x297e70, Func Offset: 0
	// Line 181, Address: 0x297e7c, Func Offset: 0xc
	// Line 183, Address: 0x297e84, Func Offset: 0x14
	// Line 184, Address: 0x297e88, Func Offset: 0x18
	// Line 183, Address: 0x297e8c, Func Offset: 0x1c
	// Line 184, Address: 0x297e90, Func Offset: 0x20
	// Line 185, Address: 0x297e94, Func Offset: 0x24
	// Line 186, Address: 0x297e9c, Func Offset: 0x2c
	// Line 187, Address: 0x297ea0, Func Offset: 0x30
	// Line 186, Address: 0x297ea4, Func Offset: 0x34
	// Line 187, Address: 0x297ea8, Func Offset: 0x38
	// Line 188, Address: 0x297eac, Func Offset: 0x3c
	// Func End, Address: 0x297ebc, Func Offset: 0x4c
}

// 
// Start address: 0x297ec0
void UpdatePlayerInfo(_anon0* eil)
{
	_anon4* info;
	PlayerExtStatus stat;
	// Line 193, Address: 0x297ec0, Func Offset: 0
	// Line 197, Address: 0x297ed4, Func Offset: 0x14
	// Line 194, Address: 0x297ed8, Func Offset: 0x18
	// Line 197, Address: 0x297ee0, Func Offset: 0x20
	// Line 198, Address: 0x297ee8, Func Offset: 0x28
	// Line 199, Address: 0x297ef8, Func Offset: 0x38
	// Line 200, Address: 0x297f00, Func Offset: 0x40
	// Line 201, Address: 0x297f08, Func Offset: 0x48
	// Line 202, Address: 0x297f10, Func Offset: 0x50
	// Line 204, Address: 0x297f38, Func Offset: 0x78
	// Line 206, Address: 0x297f40, Func Offset: 0x80
	// Line 208, Address: 0x297f48, Func Offset: 0x88
	// Line 210, Address: 0x297f50, Func Offset: 0x90
	// Line 212, Address: 0x297f58, Func Offset: 0x98
	// Line 214, Address: 0x297f60, Func Offset: 0xa0
	// Line 216, Address: 0x297f68, Func Offset: 0xa8
	// Line 218, Address: 0x297f70, Func Offset: 0xb0
	// Line 221, Address: 0x297f78, Func Offset: 0xb8
	// Line 223, Address: 0x297f80, Func Offset: 0xc0
	// Line 225, Address: 0x297f88, Func Offset: 0xc8
	// Line 227, Address: 0x297f90, Func Offset: 0xd0
	// Line 234, Address: 0x297f98, Func Offset: 0xd8
	// Line 236, Address: 0x297fa0, Func Offset: 0xe0
	// Line 238, Address: 0x297fa8, Func Offset: 0xe8
	// Line 240, Address: 0x297fb0, Func Offset: 0xf0
	// Line 243, Address: 0x297fb8, Func Offset: 0xf8
	// Line 245, Address: 0x297fbc, Func Offset: 0xfc
	// Line 246, Address: 0x297fc0, Func Offset: 0x100
	// Line 247, Address: 0x297fc8, Func Offset: 0x108
	// Line 246, Address: 0x297fcc, Func Offset: 0x10c
	// Line 247, Address: 0x297fd0, Func Offset: 0x110
	// Line 248, Address: 0x297fdc, Func Offset: 0x11c
	// Line 250, Address: 0x298000, Func Offset: 0x140
	// Line 251, Address: 0x298008, Func Offset: 0x148
	// Func End, Address: 0x29801c, Func Offset: 0x15c
}

// 
// Start address: 0x298020
int CheckHurryToHenry()
{
	int* door;
	int door_no;
	int next_scene;
	// Line 258, Address: 0x298020, Func Offset: 0
	// Line 260, Address: 0x298024, Func Offset: 0x4
	// Line 258, Address: 0x298028, Func Offset: 0x8
	// Line 260, Address: 0x298034, Func Offset: 0x14
	// Line 264, Address: 0x298038, Func Offset: 0x18
	// Line 265, Address: 0x298040, Func Offset: 0x20
	// Line 266, Address: 0x298048, Func Offset: 0x28
	// Line 268, Address: 0x298058, Func Offset: 0x38
	// Line 269, Address: 0x298060, Func Offset: 0x40
	// Line 270, Address: 0x298068, Func Offset: 0x48
	// Line 271, Address: 0x298070, Func Offset: 0x50
	// Line 273, Address: 0x298078, Func Offset: 0x58
	// Line 274, Address: 0x298080, Func Offset: 0x60
	// Line 275, Address: 0x298088, Func Offset: 0x68
	// Line 276, Address: 0x298090, Func Offset: 0x70
	// Line 279, Address: 0x298098, Func Offset: 0x78
	// Line 281, Address: 0x2980a8, Func Offset: 0x88
	// Func End, Address: 0x2980bc, Func Offset: 0x9c
}

// 
// Start address: 0x2980c0
void EileenGameInit()
{
	// Line 287, Address: 0x2980c0, Func Offset: 0
	// Line 288, Address: 0x2980c4, Func Offset: 0x4
	// Func End, Address: 0x2980cc, Func Offset: 0xc
}

// 
// Start address: 0x2980d0
void EileenInit(_anon0* eil)
{
	int model_type;
	int with_henry;
	// Line 292, Address: 0x2980d0, Func Offset: 0
	// Line 295, Address: 0x2980e0, Func Offset: 0x10
	// Line 292, Address: 0x2980e4, Func Offset: 0x14
	// Line 298, Address: 0x2980f4, Func Offset: 0x24
	// Line 299, Address: 0x298104, Func Offset: 0x34
	// Line 301, Address: 0x298108, Func Offset: 0x38
	// Line 303, Address: 0x298110, Func Offset: 0x40
	// Line 305, Address: 0x298118, Func Offset: 0x48
	// Line 307, Address: 0x29811c, Func Offset: 0x4c
	// Line 309, Address: 0x298140, Func Offset: 0x70
	// Line 311, Address: 0x298154, Func Offset: 0x84
	// Line 314, Address: 0x29815c, Func Offset: 0x8c
	// Line 315, Address: 0x298160, Func Offset: 0x90
	// Line 314, Address: 0x298164, Func Offset: 0x94
	// Line 315, Address: 0x29816c, Func Offset: 0x9c
	// Line 317, Address: 0x29817c, Func Offset: 0xac
	// Line 316, Address: 0x298180, Func Offset: 0xb0
	// Line 318, Address: 0x29818c, Func Offset: 0xbc
	// Line 319, Address: 0x298190, Func Offset: 0xc0
	// Line 321, Address: 0x29819c, Func Offset: 0xcc
	// Line 323, Address: 0x2981b4, Func Offset: 0xe4
	// Line 325, Address: 0x2981bc, Func Offset: 0xec
	// Line 327, Address: 0x2981c4, Func Offset: 0xf4
	// Line 329, Address: 0x2981cc, Func Offset: 0xfc
	// Line 331, Address: 0x2981d4, Func Offset: 0x104
	// Line 332, Address: 0x2981e0, Func Offset: 0x110
	// Line 333, Address: 0x2981e8, Func Offset: 0x118
	// Line 334, Address: 0x2981f4, Func Offset: 0x124
	// Line 335, Address: 0x298200, Func Offset: 0x130
	// Line 336, Address: 0x29820c, Func Offset: 0x13c
	// Line 337, Address: 0x298218, Func Offset: 0x148
	// Line 338, Address: 0x298224, Func Offset: 0x154
	// Line 341, Address: 0x298228, Func Offset: 0x158
	// Line 342, Address: 0x298230, Func Offset: 0x160
	// Line 343, Address: 0x29823c, Func Offset: 0x16c
	// Line 344, Address: 0x298244, Func Offset: 0x174
	// Line 354, Address: 0x29824c, Func Offset: 0x17c
	// Line 355, Address: 0x29825c, Func Offset: 0x18c
	// Line 356, Address: 0x298268, Func Offset: 0x198
	// Func End, Address: 0x298288, Func Offset: 0x1b8
}

// 
// Start address: 0x298290
void EilDrawPre(sfObj* obj)
{
	sfObj* eil_obj;
	_anon0* eil;
	sfCharacter* chara;
	_anon1 mparams;
	unsigned long tex0;
	unsigned int mapbit;
	float ratio;
	int a;
	_anon3* eil_save;
	int eil_side;
	int henry_side;
	// Line 366, Address: 0x298290, Func Offset: 0
	// Line 367, Address: 0x2982a8, Func Offset: 0x18
	// Line 369, Address: 0x2982b0, Func Offset: 0x20
	// Line 367, Address: 0x2982b4, Func Offset: 0x24
	// Line 369, Address: 0x2982b8, Func Offset: 0x28
	// Line 379, Address: 0x2982c0, Func Offset: 0x30
	// Line 380, Address: 0x2982c8, Func Offset: 0x38
	// Line 381, Address: 0x2982d0, Func Offset: 0x40
	// Line 392, Address: 0x2982d8, Func Offset: 0x48
	// Line 393, Address: 0x2982e0, Func Offset: 0x50
	// Line 394, Address: 0x2982e8, Func Offset: 0x58
	// Line 395, Address: 0x2982ec, Func Offset: 0x5c
	// Line 398, Address: 0x2982f0, Func Offset: 0x60
	// Line 399, Address: 0x298304, Func Offset: 0x74
	// Line 400, Address: 0x298310, Func Offset: 0x80
	// Line 401, Address: 0x298318, Func Offset: 0x88
	// Line 406, Address: 0x298320, Func Offset: 0x90
	// Line 408, Address: 0x298328, Func Offset: 0x98
	// Line 411, Address: 0x298348, Func Offset: 0xb8
	// Line 409, Address: 0x298354, Func Offset: 0xc4
	// Line 411, Address: 0x298358, Func Offset: 0xc8
	// Line 412, Address: 0x298368, Func Offset: 0xd8
	// Line 413, Address: 0x298370, Func Offset: 0xe0
	// Line 414, Address: 0x29838c, Func Offset: 0xfc
	// Line 415, Address: 0x298390, Func Offset: 0x100
	// Line 416, Address: 0x298398, Func Offset: 0x108
	// Line 418, Address: 0x2983a4, Func Offset: 0x114
	// Line 420, Address: 0x2983a8, Func Offset: 0x118
	// Line 421, Address: 0x2983b4, Func Offset: 0x124
	// Line 424, Address: 0x2983c8, Func Offset: 0x138
	// Line 425, Address: 0x2983d8, Func Offset: 0x148
	// Line 430, Address: 0x2983e0, Func Offset: 0x150
	// Line 432, Address: 0x2983e8, Func Offset: 0x158
	// Line 434, Address: 0x2983f0, Func Offset: 0x160
	// Line 435, Address: 0x298408, Func Offset: 0x178
	// Line 439, Address: 0x298410, Func Offset: 0x180
	// Line 436, Address: 0x298414, Func Offset: 0x184
	// Line 439, Address: 0x298418, Func Offset: 0x188
	// Line 440, Address: 0x29841c, Func Offset: 0x18c
	// Line 439, Address: 0x298420, Func Offset: 0x190
	// Line 437, Address: 0x298428, Func Offset: 0x198
	// Line 439, Address: 0x29842c, Func Offset: 0x19c
	// Line 438, Address: 0x298430, Func Offset: 0x1a0
	// Line 437, Address: 0x298434, Func Offset: 0x1a4
	// Line 438, Address: 0x298438, Func Offset: 0x1a8
	// Line 440, Address: 0x29843c, Func Offset: 0x1ac
	// Line 441, Address: 0x298444, Func Offset: 0x1b4
	// Func End, Address: 0x298464, Func Offset: 0x1d4
}

// 
// Start address: 0x298470
void EilDrawPost()
{
	// Line 446, Address: 0x298470, Func Offset: 0
	// Line 447, Address: 0x298478, Func Offset: 0x8
	// Line 448, Address: 0x298480, Func Offset: 0x10
	// Line 456, Address: 0x298488, Func Offset: 0x18
	// Func End, Address: 0x298494, Func Offset: 0x24
}

// 
// Start address: 0x2984a0
void EileenFirst(_anon0* eil)
{
	sfCharacter* chara;
	float offset[4];
	// Line 462, Address: 0x2984a0, Func Offset: 0
	// Line 463, Address: 0x2984b0, Func Offset: 0x10
	// Line 467, Address: 0x2984b8, Func Offset: 0x18
	// Line 468, Address: 0x2984c8, Func Offset: 0x28
	// Line 469, Address: 0x2984d0, Func Offset: 0x30
	// Line 470, Address: 0x2984d8, Func Offset: 0x38
	// Line 472, Address: 0x2984e0, Func Offset: 0x40
	// Line 473, Address: 0x2984f4, Func Offset: 0x54
	// Line 474, Address: 0x29850c, Func Offset: 0x6c
	// Line 478, Address: 0x29852c, Func Offset: 0x8c
	// Line 477, Address: 0x298530, Func Offset: 0x90
	// Line 478, Address: 0x298534, Func Offset: 0x94
	// Line 477, Address: 0x298538, Func Offset: 0x98
	// Line 478, Address: 0x298540, Func Offset: 0xa0
	// Line 492, Address: 0x298558, Func Offset: 0xb8
	// Line 490, Address: 0x29855c, Func Offset: 0xbc
	// Line 491, Address: 0x298560, Func Offset: 0xc0
	// Line 492, Address: 0x298564, Func Offset: 0xc4
	// Line 494, Address: 0x298568, Func Offset: 0xc8
	// Line 496, Address: 0x298574, Func Offset: 0xd4
	// Func End, Address: 0x298588, Func Offset: 0xe8
}

// 
// Start address: 0x298590
int EilAttackAttitude(_anon0* eil)
{
	int attitude;
	EileenArmsTypeNo arms;
	// Line 509, Address: 0x298590, Func Offset: 0
	// Line 512, Address: 0x298594, Func Offset: 0x4
	// Line 515, Address: 0x2985d0, Func Offset: 0x40
	// Line 518, Address: 0x2985d8, Func Offset: 0x48
	// Line 521, Address: 0x2985e0, Func Offset: 0x50
	// Line 525, Address: 0x2985e8, Func Offset: 0x58
	// Line 528, Address: 0x2985f0, Func Offset: 0x60
	// Line 530, Address: 0x2985f4, Func Offset: 0x64
	// Line 533, Address: 0x2985f8, Func Offset: 0x68
	// Func End, Address: 0x298600, Func Offset: 0x70
}

// 
// Start address: 0x298600
void EileenAnalize(_anon0* eil)
{
	float eil_pos[4];
	float eil_rot[4];
	float to_pl[4];
	float angle;
	float r;
	int stat;
	// Line 538, Address: 0x298600, Func Offset: 0
	// Line 546, Address: 0x298604, Func Offset: 0x4
	// Line 538, Address: 0x298608, Func Offset: 0x8
	// Line 546, Address: 0x29860c, Func Offset: 0xc
	// Line 538, Address: 0x298610, Func Offset: 0x10
	// Line 546, Address: 0x298618, Func Offset: 0x18
	// Line 547, Address: 0x298620, Func Offset: 0x20
	// Line 549, Address: 0x298630, Func Offset: 0x30
	// Line 550, Address: 0x298638, Func Offset: 0x38
	// Line 552, Address: 0x298644, Func Offset: 0x44
	// Line 553, Address: 0x298664, Func Offset: 0x64
	// Line 556, Address: 0x2986a4, Func Offset: 0xa4
	// Line 554, Address: 0x2986b4, Func Offset: 0xb4
	// Line 556, Address: 0x2986bc, Func Offset: 0xbc
	// Line 557, Address: 0x2986c4, Func Offset: 0xc4
	// Line 559, Address: 0x2986d0, Func Offset: 0xd0
	// Line 560, Address: 0x2986dc, Func Offset: 0xdc
	// Line 564, Address: 0x2986e0, Func Offset: 0xe0
	// Line 565, Address: 0x2986e8, Func Offset: 0xe8
	// Line 569, Address: 0x298708, Func Offset: 0x108
	// Line 570, Address: 0x29870c, Func Offset: 0x10c
	// Line 571, Address: 0x298718, Func Offset: 0x118
	// Line 572, Address: 0x29871c, Func Offset: 0x11c
	// Line 575, Address: 0x298720, Func Offset: 0x120
	// Line 576, Address: 0x298730, Func Offset: 0x130
	// Line 578, Address: 0x298738, Func Offset: 0x138
	// Line 580, Address: 0x298744, Func Offset: 0x144
	// Line 579, Address: 0x298748, Func Offset: 0x148
	// Line 581, Address: 0x29874c, Func Offset: 0x14c
	// Line 582, Address: 0x298758, Func Offset: 0x158
	// Line 583, Address: 0x29875c, Func Offset: 0x15c
	// Line 585, Address: 0x298760, Func Offset: 0x160
	// Line 587, Address: 0x29876c, Func Offset: 0x16c
	// Line 588, Address: 0x298784, Func Offset: 0x184
	// Line 589, Address: 0x298788, Func Offset: 0x188
	// Line 591, Address: 0x298790, Func Offset: 0x190
	// Line 592, Address: 0x2987a8, Func Offset: 0x1a8
	// Line 593, Address: 0x2987ac, Func Offset: 0x1ac
	// Line 596, Address: 0x2987b0, Func Offset: 0x1b0
	// Line 598, Address: 0x2987bc, Func Offset: 0x1bc
	// Func End, Address: 0x2987cc, Func Offset: 0x1cc
}

// 
// Start address: 0x2987d0
void EilCommand(_anon0* eil, int command)
{
	// Line 605, Address: 0x2987d0, Func Offset: 0
	// Line 606, Address: 0x2987d8, Func Offset: 0x8
	// Func End, Address: 0x2987e0, Func Offset: 0x10
}

// 
// Start address: 0x2987e0
void EilCommandQuit(_anon0* eil, int command)
{
	// Line 610, Address: 0x2987e0, Func Offset: 0
	// Line 611, Address: 0x2987e8, Func Offset: 0x8
	// Func End, Address: 0x2987f0, Func Offset: 0x10
}

// 
// Start address: 0x2987f0
int EilCommandStatus(_anon0* eil, int command)
{
	// Line 616, Address: 0x2987f0, Func Offset: 0
	// Line 618, Address: 0x298800, Func Offset: 0x10
	// Func End, Address: 0x298808, Func Offset: 0x18
}

// 
// Start address: 0x298810
void FaceToNone(_anon0* eil)
{
	// Line 632, Address: 0x298810, Func Offset: 0
	// Line 633, Address: 0x298820, Func Offset: 0x10
	// Line 634, Address: 0x298828, Func Offset: 0x18
	// Func End, Address: 0x298830, Func Offset: 0x20
}

// 
// Start address: 0x298830
void FaceToCommand(_anon0* eil)
{
	// Line 638, Address: 0x298830, Func Offset: 0
	// Line 639, Address: 0x298840, Func Offset: 0x10
	// Line 640, Address: 0x298848, Func Offset: 0x18
	// Func End, Address: 0x298850, Func Offset: 0x20
}

// 
// Start address: 0x298850
void FaceToHenry(_anon0* eil)
{
	// Line 644, Address: 0x298850, Func Offset: 0
	// Line 645, Address: 0x298860, Func Offset: 0x10
	// Line 646, Address: 0x298868, Func Offset: 0x18
	// Func End, Address: 0x298870, Func Offset: 0x20
}

// 
// Start address: 0x298870
void FaceToEnemy(_anon0* eil)
{
	// Line 650, Address: 0x298870, Func Offset: 0
	// Line 651, Address: 0x298880, Func Offset: 0x10
	// Line 652, Address: 0x298888, Func Offset: 0x18
	// Func End, Address: 0x298890, Func Offset: 0x20
}

// 
// Start address: 0x298890
void FaceToHit(_anon0* eil)
{
	// Line 656, Address: 0x298890, Func Offset: 0
	// Line 657, Address: 0x2988a0, Func Offset: 0x10
	// Line 658, Address: 0x2988a8, Func Offset: 0x18
	// Func End, Address: 0x2988b0, Func Offset: 0x20
}

// 
// Start address: 0x2988b0
void EilFaceMovement(_anon0* eil)
{
	float v[4];
	// Line 661, Address: 0x2988b0, Func Offset: 0
	// Line 664, Address: 0x2988bc, Func Offset: 0xc
	// Line 666, Address: 0x2988e8, Func Offset: 0x38
	// Line 667, Address: 0x2988f0, Func Offset: 0x40
	// Line 669, Address: 0x2988f8, Func Offset: 0x48
	// Line 670, Address: 0x298904, Func Offset: 0x54
	// Line 669, Address: 0x298908, Func Offset: 0x58
	// Line 670, Address: 0x29891c, Func Offset: 0x6c
	// Line 671, Address: 0x298924, Func Offset: 0x74
	// Line 672, Address: 0x298930, Func Offset: 0x80
	// Line 674, Address: 0x298938, Func Offset: 0x88
	// Line 675, Address: 0x298940, Func Offset: 0x90
	// Line 676, Address: 0x29894c, Func Offset: 0x9c
	// Line 677, Address: 0x298950, Func Offset: 0xa0
	// Line 679, Address: 0x298958, Func Offset: 0xa8
	// Line 680, Address: 0x298960, Func Offset: 0xb0
	// Line 681, Address: 0x29896c, Func Offset: 0xbc
	// Line 682, Address: 0x298970, Func Offset: 0xc0
	// Line 685, Address: 0x298978, Func Offset: 0xc8
	// Line 690, Address: 0x298980, Func Offset: 0xd0
	// Func End, Address: 0x298990, Func Offset: 0xe0
}

// 
// Start address: 0x298990
void EileenThink_OutofScene(_anon0* eil)
{
	float gl_pos[4];
	int result;
	float dest[4];
	float v[4];
	// Line 732, Address: 0x298990, Func Offset: 0
	// Line 741, Address: 0x2989a0, Func Offset: 0x10
	// Line 749, Address: 0x2989ac, Func Offset: 0x1c
	// Line 750, Address: 0x2989b8, Func Offset: 0x28
	// Line 751, Address: 0x2989bc, Func Offset: 0x2c
	// Line 752, Address: 0x2989c4, Func Offset: 0x34
	// Line 754, Address: 0x2989c8, Func Offset: 0x38
	// Line 755, Address: 0x2989d8, Func Offset: 0x48
	// Line 758, Address: 0x2989e0, Func Offset: 0x50
	// Line 760, Address: 0x2989e8, Func Offset: 0x58
	// Line 764, Address: 0x2989f0, Func Offset: 0x60
	// Line 765, Address: 0x2989fc, Func Offset: 0x6c
	// Line 766, Address: 0x298a1c, Func Offset: 0x8c
	// Line 767, Address: 0x298a48, Func Offset: 0xb8
	// Line 768, Address: 0x298a58, Func Offset: 0xc8
	// Line 770, Address: 0x298a64, Func Offset: 0xd4
	// Line 768, Address: 0x298a68, Func Offset: 0xd8
	// Line 770, Address: 0x298a6c, Func Offset: 0xdc
	// Line 773, Address: 0x298a70, Func Offset: 0xe0
	// Line 785, Address: 0x298a78, Func Offset: 0xe8
	// Line 786, Address: 0x298a7c, Func Offset: 0xec
	// Line 788, Address: 0x298a88, Func Offset: 0xf8
	// Func End, Address: 0x298a9c, Func Offset: 0x10c
}

// 
// Start address: 0x298aa0
void EileenThink_ToHenry(_anon0* eil)
{
	float move_dir[4];
	float move_target[4];
	float angle;
	int ret;
	// Line 794, Address: 0x298aa0, Func Offset: 0
	// Line 804, Address: 0x298aa8, Func Offset: 0x8
	// Line 794, Address: 0x298aac, Func Offset: 0xc
	// Line 804, Address: 0x298ab8, Func Offset: 0x18
	// Line 805, Address: 0x298ac4, Func Offset: 0x24
	// Line 809, Address: 0x298ad0, Func Offset: 0x30
	// Line 810, Address: 0x298ae0, Func Offset: 0x40
	// Line 811, Address: 0x298aec, Func Offset: 0x4c
	// Line 812, Address: 0x298af8, Func Offset: 0x58
	// Line 813, Address: 0x298afc, Func Offset: 0x5c
	// Line 815, Address: 0x298b00, Func Offset: 0x60
	// Line 816, Address: 0x298b0c, Func Offset: 0x6c
	// Line 818, Address: 0x298b18, Func Offset: 0x78
	// Line 820, Address: 0x298b20, Func Offset: 0x80
	// Line 822, Address: 0x298b28, Func Offset: 0x88
	// Line 825, Address: 0x298b30, Func Offset: 0x90
	// Line 826, Address: 0x298b38, Func Offset: 0x98
	// Line 827, Address: 0x298b58, Func Offset: 0xb8
	// Line 828, Address: 0x298b84, Func Offset: 0xe4
	// Line 830, Address: 0x298b94, Func Offset: 0xf4
	// Line 833, Address: 0x298b98, Func Offset: 0xf8
	// Line 836, Address: 0x298ba8, Func Offset: 0x108
	// Line 837, Address: 0x298bc4, Func Offset: 0x124
	// Line 838, Address: 0x298bd0, Func Offset: 0x130
	// Line 839, Address: 0x298bd4, Func Offset: 0x134
	// Line 841, Address: 0x298bd8, Func Offset: 0x138
	// Line 843, Address: 0x298be4, Func Offset: 0x144
	// Line 842, Address: 0x298be8, Func Offset: 0x148
	// Line 843, Address: 0x298bec, Func Offset: 0x14c
	// Line 842, Address: 0x298bf0, Func Offset: 0x150
	// Line 844, Address: 0x298bf4, Func Offset: 0x154
	// Line 848, Address: 0x298c00, Func Offset: 0x160
	// Line 852, Address: 0x298c08, Func Offset: 0x168
	// Line 853, Address: 0x298c2c, Func Offset: 0x18c
	// Line 856, Address: 0x298c38, Func Offset: 0x198
	// Func End, Address: 0x298c4c, Func Offset: 0x1ac
}

// 
// Start address: 0x298c50
int AttackOnCheck(_anon0* eil)
{
	int attitude;
	// Line 862, Address: 0x298c50, Func Offset: 0
	// Line 866, Address: 0x298c60, Func Offset: 0x10
	// Line 867, Address: 0x298c6c, Func Offset: 0x1c
	// Line 871, Address: 0x298c78, Func Offset: 0x28
	// Line 872, Address: 0x298c84, Func Offset: 0x34
	// Line 875, Address: 0x298c88, Func Offset: 0x38
	// Line 876, Address: 0x298ca0, Func Offset: 0x50
	// Line 877, Address: 0x298ca8, Func Offset: 0x58
	// Line 878, Address: 0x298cc0, Func Offset: 0x70
	// Line 879, Address: 0x298cc8, Func Offset: 0x78
	// Line 880, Address: 0x298cd0, Func Offset: 0x80
	// Line 883, Address: 0x298cd8, Func Offset: 0x88
	// Line 884, Address: 0x298ce8, Func Offset: 0x98
	// Line 885, Address: 0x298cf8, Func Offset: 0xa8
	// Line 888, Address: 0x298d00, Func Offset: 0xb0
	// Line 890, Address: 0x298d38, Func Offset: 0xe8
	// Line 895, Address: 0x298d40, Func Offset: 0xf0
	// Line 896, Address: 0x298d4c, Func Offset: 0xfc
	// Line 898, Address: 0x298d58, Func Offset: 0x108
	// Line 899, Address: 0x298d74, Func Offset: 0x124
	// Line 901, Address: 0x298d80, Func Offset: 0x130
	// Line 902, Address: 0x298d98, Func Offset: 0x148
	// Line 907, Address: 0x298da0, Func Offset: 0x150
	// Line 908, Address: 0x298dac, Func Offset: 0x15c
	// Line 909, Address: 0x298db8, Func Offset: 0x168
	// Line 910, Address: 0x298dd0, Func Offset: 0x180
	// Line 915, Address: 0x298dd8, Func Offset: 0x188
	// Line 916, Address: 0x298df4, Func Offset: 0x1a4
	// Line 917, Address: 0x298e00, Func Offset: 0x1b0
	// Line 919, Address: 0x298e08, Func Offset: 0x1b8
	// Line 920, Address: 0x298e20, Func Offset: 0x1d0
	// Line 924, Address: 0x298e28, Func Offset: 0x1d8
	// Line 925, Address: 0x298e40, Func Offset: 0x1f0
	// Line 929, Address: 0x298e48, Func Offset: 0x1f8
	// Line 930, Address: 0x298e50, Func Offset: 0x200
	// Func End, Address: 0x298e64, Func Offset: 0x214
}

// 
// Start address: 0x298e70
void EilEscapeThink(_anon0* eil)
{
	float target_pos[4];
	float v[4];
	float r;
	float angle;
	int back;
	// Line 936, Address: 0x298e70, Func Offset: 0
	// Line 943, Address: 0x298e74, Func Offset: 0x4
	// Line 936, Address: 0x298e78, Func Offset: 0x8
	// Line 943, Address: 0x298e84, Func Offset: 0x14
	// Line 947, Address: 0x298e98, Func Offset: 0x28
	// Line 948, Address: 0x298ebc, Func Offset: 0x4c
	// Line 953, Address: 0x298ed0, Func Offset: 0x60
	// Line 954, Address: 0x298eec, Func Offset: 0x7c
	// Line 958, Address: 0x298ef8, Func Offset: 0x88
	// Line 957, Address: 0x298efc, Func Offset: 0x8c
	// Line 958, Address: 0x298f00, Func Offset: 0x90
	// Line 959, Address: 0x298f1c, Func Offset: 0xac
	// Line 960, Address: 0x298f2c, Func Offset: 0xbc
	// Line 961, Address: 0x298f3c, Func Offset: 0xcc
	// Line 962, Address: 0x298f40, Func Offset: 0xd0
	// Line 966, Address: 0x298f48, Func Offset: 0xd8
	// Line 967, Address: 0x298f60, Func Offset: 0xf0
	// Line 968, Address: 0x298f70, Func Offset: 0x100
	// Line 972, Address: 0x298f80, Func Offset: 0x110
	// Line 971, Address: 0x298f84, Func Offset: 0x114
	// Line 972, Address: 0x298f88, Func Offset: 0x118
	// Line 973, Address: 0x298fa4, Func Offset: 0x134
	// Line 974, Address: 0x298fb4, Func Offset: 0x144
	// Line 975, Address: 0x298fc4, Func Offset: 0x154
	// Line 976, Address: 0x298fc8, Func Offset: 0x158
	// Line 980, Address: 0x298fd0, Func Offset: 0x160
	// Line 981, Address: 0x298fe8, Func Offset: 0x178
	// Line 983, Address: 0x298ff8, Func Offset: 0x188
	// Line 984, Address: 0x299000, Func Offset: 0x190
	// Line 985, Address: 0x29900c, Func Offset: 0x19c
	// Line 986, Address: 0x299014, Func Offset: 0x1a4
	// Line 987, Address: 0x29902c, Func Offset: 0x1bc
	// Line 988, Address: 0x29903c, Func Offset: 0x1cc
	// Line 989, Address: 0x299068, Func Offset: 0x1f8
	// Line 990, Address: 0x299074, Func Offset: 0x204
	// Line 991, Address: 0x299080, Func Offset: 0x210
	// Line 992, Address: 0x299090, Func Offset: 0x220
	// Line 994, Address: 0x299094, Func Offset: 0x224
	// Line 997, Address: 0x299098, Func Offset: 0x228
	// Line 996, Address: 0x29909c, Func Offset: 0x22c
	// Line 997, Address: 0x2990a0, Func Offset: 0x230
	// Line 998, Address: 0x2990bc, Func Offset: 0x24c
	// Line 999, Address: 0x2990cc, Func Offset: 0x25c
	// Line 1000, Address: 0x2990dc, Func Offset: 0x26c
	// Line 1001, Address: 0x2990e0, Func Offset: 0x270
	// Line 1005, Address: 0x2990e8, Func Offset: 0x278
	// Line 1007, Address: 0x299100, Func Offset: 0x290
	// Line 1008, Address: 0x29912c, Func Offset: 0x2bc
	// Line 1009, Address: 0x29914c, Func Offset: 0x2dc
	// Line 1011, Address: 0x299150, Func Offset: 0x2e0
	// Line 1012, Address: 0x299170, Func Offset: 0x300
	// Line 1014, Address: 0x299194, Func Offset: 0x324
	// Line 1015, Address: 0x2991ac, Func Offset: 0x33c
	// Line 1018, Address: 0x2991b8, Func Offset: 0x348
	// Line 1017, Address: 0x2991bc, Func Offset: 0x34c
	// Line 1018, Address: 0x2991c0, Func Offset: 0x350
	// Line 1019, Address: 0x2991dc, Func Offset: 0x36c
	// Line 1020, Address: 0x2991ec, Func Offset: 0x37c
	// Line 1021, Address: 0x2991fc, Func Offset: 0x38c
	// Line 1022, Address: 0x299200, Func Offset: 0x390
	// Line 1025, Address: 0x299208, Func Offset: 0x398
	// Line 1027, Address: 0x299234, Func Offset: 0x3c4
	// Line 1026, Address: 0x299238, Func Offset: 0x3c8
	// Line 1027, Address: 0x29923c, Func Offset: 0x3cc
	// Line 1030, Address: 0x299244, Func Offset: 0x3d4
	// Line 1026, Address: 0x299250, Func Offset: 0x3e0
	// Line 1030, Address: 0x29925c, Func Offset: 0x3ec
	// Line 1031, Address: 0x299270, Func Offset: 0x400
	// Line 1032, Address: 0x29927c, Func Offset: 0x40c
	// Line 1031, Address: 0x299280, Func Offset: 0x410
	// Line 1032, Address: 0x299284, Func Offset: 0x414
	// Line 1036, Address: 0x299288, Func Offset: 0x418
	// Line 1037, Address: 0x299294, Func Offset: 0x424
	// Line 1038, Address: 0x2992b8, Func Offset: 0x448
	// Line 1039, Address: 0x2992bc, Func Offset: 0x44c
	// Line 1040, Address: 0x2992c4, Func Offset: 0x454
	// Line 1043, Address: 0x2992c8, Func Offset: 0x458
	// Func End, Address: 0x2992d8, Func Offset: 0x468
}

// 
// Start address: 0x2992e0
void EilAttackThink(_anon0* eil)
{
	float to_enemy_l;
	float at_range;
	float r;
	int attack_kind;
	// Line 1048, Address: 0x2992e0, Func Offset: 0
	// Line 1069, Address: 0x2992fc, Func Offset: 0x1c
	// Line 1072, Address: 0x299304, Func Offset: 0x24
	// Line 1074, Address: 0x299308, Func Offset: 0x28
	// Line 1075, Address: 0x299324, Func Offset: 0x44
	// Line 1076, Address: 0x299338, Func Offset: 0x58
	// Line 1077, Address: 0x299354, Func Offset: 0x74
	// Line 1078, Address: 0x299358, Func Offset: 0x78
	// Line 1082, Address: 0x299360, Func Offset: 0x80
	// Line 1083, Address: 0x299370, Func Offset: 0x90
	// Line 1084, Address: 0x299384, Func Offset: 0xa4
	// Line 1085, Address: 0x29938c, Func Offset: 0xac
	// Line 1084, Address: 0x299390, Func Offset: 0xb0
	// Line 1086, Address: 0x299394, Func Offset: 0xb4
	// Line 1088, Address: 0x29939c, Func Offset: 0xbc
	// Line 1089, Address: 0x2993a0, Func Offset: 0xc0
	// Line 1090, Address: 0x2993bc, Func Offset: 0xdc
	// Line 1091, Address: 0x2993c4, Func Offset: 0xe4
	// Line 1090, Address: 0x2993c8, Func Offset: 0xe8
	// Line 1092, Address: 0x2993cc, Func Offset: 0xec
	// Line 1094, Address: 0x2993d4, Func Offset: 0xf4
	// Line 1097, Address: 0x2993d8, Func Offset: 0xf8
	// Line 1101, Address: 0x2993e0, Func Offset: 0x100
	// Line 1098, Address: 0x2993e4, Func Offset: 0x104
	// Line 1101, Address: 0x2993e8, Func Offset: 0x108
	// Line 1103, Address: 0x2993f4, Func Offset: 0x114
	// Line 1104, Address: 0x299400, Func Offset: 0x120
	// Line 1105, Address: 0x29942c, Func Offset: 0x14c
	// Line 1106, Address: 0x299438, Func Offset: 0x158
	// Line 1108, Address: 0x299440, Func Offset: 0x160
	// Line 1109, Address: 0x299458, Func Offset: 0x178
	// Line 1111, Address: 0x299480, Func Offset: 0x1a0
	// Line 1110, Address: 0x299484, Func Offset: 0x1a4
	// Line 1111, Address: 0x299488, Func Offset: 0x1a8
	// Line 1112, Address: 0x299490, Func Offset: 0x1b0
	// Line 1114, Address: 0x299498, Func Offset: 0x1b8
	// Line 1115, Address: 0x2994a4, Func Offset: 0x1c4
	// Line 1116, Address: 0x2994ac, Func Offset: 0x1cc
	// Line 1118, Address: 0x2994b0, Func Offset: 0x1d0
	// Line 1120, Address: 0x2994b4, Func Offset: 0x1d4
	// Line 1121, Address: 0x2994bc, Func Offset: 0x1dc
	// Line 1122, Address: 0x2994c8, Func Offset: 0x1e8
	// Line 1124, Address: 0x2994d8, Func Offset: 0x1f8
	// Line 1127, Address: 0x2994e0, Func Offset: 0x200
	// Line 1128, Address: 0x2994e8, Func Offset: 0x208
	// Line 1129, Address: 0x299500, Func Offset: 0x220
	// Line 1130, Address: 0x299534, Func Offset: 0x254
	// Line 1131, Address: 0x299538, Func Offset: 0x258
	// Line 1132, Address: 0x299540, Func Offset: 0x260
	// Line 1134, Address: 0x299548, Func Offset: 0x268
	// Line 1135, Address: 0x299550, Func Offset: 0x270
	// Line 1137, Address: 0x299558, Func Offset: 0x278
	// Line 1138, Address: 0x299564, Func Offset: 0x284
	// Line 1139, Address: 0x29956c, Func Offset: 0x28c
	// Line 1140, Address: 0x299570, Func Offset: 0x290
	// Line 1141, Address: 0x29957c, Func Offset: 0x29c
	// Line 1142, Address: 0x299584, Func Offset: 0x2a4
	// Line 1143, Address: 0x299588, Func Offset: 0x2a8
	// Line 1155, Address: 0x299598, Func Offset: 0x2b8
	// Line 1159, Address: 0x2995a0, Func Offset: 0x2c0
	// Line 1160, Address: 0x2995b8, Func Offset: 0x2d8
	// Line 1162, Address: 0x2995e0, Func Offset: 0x300
	// Line 1161, Address: 0x2995e4, Func Offset: 0x304
	// Line 1162, Address: 0x2995e8, Func Offset: 0x308
	// Line 1163, Address: 0x2995f0, Func Offset: 0x310
	// Line 1166, Address: 0x2995f8, Func Offset: 0x318
	// Line 1167, Address: 0x299604, Func Offset: 0x324
	// Line 1168, Address: 0x29960c, Func Offset: 0x32c
	// Line 1169, Address: 0x299618, Func Offset: 0x338
	// Line 1170, Address: 0x299644, Func Offset: 0x364
	// Line 1171, Address: 0x299648, Func Offset: 0x368
	// Line 1172, Address: 0x299658, Func Offset: 0x378
	// Func End, Address: 0x299674, Func Offset: 0x394
}

// 
// Start address: 0x299680
void EileenThink_ToEnemy(_anon0* eil)
{
	int attack_on;
	int ignore_enemy;
	float r;
	// Line 1177, Address: 0x299680, Func Offset: 0
	// Line 1187, Address: 0x299690, Func Offset: 0x10
	// Line 1188, Address: 0x2996a0, Func Offset: 0x20
	// Line 1189, Address: 0x2996ac, Func Offset: 0x2c
	// Line 1190, Address: 0x2996b8, Func Offset: 0x38
	// Line 1191, Address: 0x2996c4, Func Offset: 0x44
	// Line 1193, Address: 0x2996d0, Func Offset: 0x50
	// Line 1195, Address: 0x2996d8, Func Offset: 0x58
	// Line 1196, Address: 0x2996e4, Func Offset: 0x64
	// Line 1197, Address: 0x2996f0, Func Offset: 0x70
	// Line 1200, Address: 0x2996f8, Func Offset: 0x78
	// Line 1202, Address: 0x299708, Func Offset: 0x88
	// Line 1205, Address: 0x299728, Func Offset: 0xa8
	// Line 1206, Address: 0x299734, Func Offset: 0xb4
	// Line 1207, Address: 0x299738, Func Offset: 0xb8
	// Line 1211, Address: 0x299740, Func Offset: 0xc0
	// Line 1212, Address: 0x29974c, Func Offset: 0xcc
	// Line 1216, Address: 0x299750, Func Offset: 0xd0
	// Line 1215, Address: 0x299754, Func Offset: 0xd4
	// Line 1216, Address: 0x299760, Func Offset: 0xe0
	// Line 1218, Address: 0x299798, Func Offset: 0x118
	// Line 1219, Address: 0x2997a0, Func Offset: 0x120
	// Line 1221, Address: 0x2997a8, Func Offset: 0x128
	// Line 1222, Address: 0x2997b0, Func Offset: 0x130
	// Line 1224, Address: 0x2997b8, Func Offset: 0x138
	// Line 1225, Address: 0x2997c0, Func Offset: 0x140
	// Line 1228, Address: 0x2997c8, Func Offset: 0x148
	// Line 1230, Address: 0x2997d0, Func Offset: 0x150
	// Line 1232, Address: 0x2997dc, Func Offset: 0x15c
	// Line 1233, Address: 0x2997e0, Func Offset: 0x160
	// Line 1234, Address: 0x2997f0, Func Offset: 0x170
	// Line 1237, Address: 0x2997f8, Func Offset: 0x178
	// Line 1238, Address: 0x299818, Func Offset: 0x198
	// Line 1239, Address: 0x29981c, Func Offset: 0x19c
	// Line 1241, Address: 0x299820, Func Offset: 0x1a0
	// Line 1244, Address: 0x299828, Func Offset: 0x1a8
	// Line 1245, Address: 0x299838, Func Offset: 0x1b8
	// Line 1246, Address: 0x299850, Func Offset: 0x1d0
	// Line 1247, Address: 0x299858, Func Offset: 0x1d8
	// Line 1246, Address: 0x29985c, Func Offset: 0x1dc
	// Line 1247, Address: 0x299860, Func Offset: 0x1e0
	// Line 1249, Address: 0x299864, Func Offset: 0x1e4
	// Line 1250, Address: 0x299868, Func Offset: 0x1e8
	// Line 1254, Address: 0x299870, Func Offset: 0x1f0
	// Line 1256, Address: 0x299878, Func Offset: 0x1f8
	// Line 1257, Address: 0x299880, Func Offset: 0x200
	// Line 1259, Address: 0x299890, Func Offset: 0x210
	// Line 1261, Address: 0x299898, Func Offset: 0x218
	// Func End, Address: 0x2998a8, Func Offset: 0x228
}

// 
// Start address: 0x2998b0
void EileenThink_ToCommand(_anon0* eil)
{
	int i;
	float v[4];
	float r;
	int rt;
	int command;
	// Line 1266, Address: 0x2998b0, Func Offset: 0
	// Line 1272, Address: 0x2998c4, Func Offset: 0x14
	// Line 1274, Address: 0x2998d0, Func Offset: 0x20
	// Line 1277, Address: 0x2998e4, Func Offset: 0x34
	// Line 1278, Address: 0x299904, Func Offset: 0x54
	// Line 1280, Address: 0x299908, Func Offset: 0x58
	// Line 1282, Address: 0x299918, Func Offset: 0x68
	// Line 1284, Address: 0x299920, Func Offset: 0x70
	// Line 1285, Address: 0x299928, Func Offset: 0x78
	// Line 1288, Address: 0x299930, Func Offset: 0x80
	// Line 1289, Address: 0x299938, Func Offset: 0x88
	// Line 1292, Address: 0x299940, Func Offset: 0x90
	// Line 1293, Address: 0x299960, Func Offset: 0xb0
	// Line 1295, Address: 0x299984, Func Offset: 0xd4
	// Line 1296, Address: 0x29999c, Func Offset: 0xec
	// Line 1297, Address: 0x2999a0, Func Offset: 0xf0
	// Line 1303, Address: 0x2999a8, Func Offset: 0xf8
	// Line 1305, Address: 0x2999b4, Func Offset: 0x104
	// Line 1304, Address: 0x2999c4, Func Offset: 0x114
	// Line 1305, Address: 0x2999c8, Func Offset: 0x118
	// Line 1306, Address: 0x2999d4, Func Offset: 0x124
	// Line 1307, Address: 0x2999d8, Func Offset: 0x128
	// Line 1308, Address: 0x2999e8, Func Offset: 0x138
	// Line 1309, Address: 0x2999f0, Func Offset: 0x140
	// Line 1312, Address: 0x2999f8, Func Offset: 0x148
	// Line 1313, Address: 0x299a04, Func Offset: 0x154
	// Line 1315, Address: 0x299a20, Func Offset: 0x170
	// Line 1316, Address: 0x299a38, Func Offset: 0x188
	// Line 1318, Address: 0x299a40, Func Offset: 0x190
	// Line 1317, Address: 0x299a44, Func Offset: 0x194
	// Line 1318, Address: 0x299a48, Func Offset: 0x198
	// Line 1319, Address: 0x299a4c, Func Offset: 0x19c
	// Line 1318, Address: 0x299a50, Func Offset: 0x1a0
	// Line 1320, Address: 0x299a54, Func Offset: 0x1a4
	// Line 1321, Address: 0x299a5c, Func Offset: 0x1ac
	// Line 1322, Address: 0x299a60, Func Offset: 0x1b0
	// Line 1325, Address: 0x299a64, Func Offset: 0x1b4
	// Line 1326, Address: 0x299a90, Func Offset: 0x1e0
	// Line 1327, Address: 0x299aa0, Func Offset: 0x1f0
	// Line 1328, Address: 0x299aa8, Func Offset: 0x1f8
	// Line 1331, Address: 0x299ab0, Func Offset: 0x200
	// Line 1332, Address: 0x299ad0, Func Offset: 0x220
	// Line 1334, Address: 0x299adc, Func Offset: 0x22c
	// Line 1333, Address: 0x299aec, Func Offset: 0x23c
	// Line 1334, Address: 0x299af0, Func Offset: 0x240
	// Line 1335, Address: 0x299afc, Func Offset: 0x24c
	// Line 1336, Address: 0x299b00, Func Offset: 0x250
	// Line 1338, Address: 0x299b08, Func Offset: 0x258
	// Line 1339, Address: 0x299b34, Func Offset: 0x284
	// Line 1340, Address: 0x299b44, Func Offset: 0x294
	// Line 1341, Address: 0x299b4c, Func Offset: 0x29c
	// Line 1343, Address: 0x299b54, Func Offset: 0x2a4
	// Line 1344, Address: 0x299b58, Func Offset: 0x2a8
	// Line 1345, Address: 0x299b60, Func Offset: 0x2b0
	// Line 1348, Address: 0x299b68, Func Offset: 0x2b8
	// Line 1349, Address: 0x299b70, Func Offset: 0x2c0
	// Line 1350, Address: 0x299b78, Func Offset: 0x2c8
	// Line 1351, Address: 0x299b84, Func Offset: 0x2d4
	// Line 1354, Address: 0x299b90, Func Offset: 0x2e0
	// Line 1355, Address: 0x299ba4, Func Offset: 0x2f4
	// Func End, Address: 0x299bb8, Func Offset: 0x308
}

// 
// Start address: 0x299bc0
void EileenThink_Collision(_anon0* eil)
{
	// Line 1363, Address: 0x299bc0, Func Offset: 0
	// Line 1364, Address: 0x299bc4, Func Offset: 0x4
	// Line 1368, Address: 0x299bcc, Func Offset: 0xc
	// Line 1371, Address: 0x299bd8, Func Offset: 0x18
	// Line 1376, Address: 0x299c08, Func Offset: 0x48
	// Line 1377, Address: 0x299c14, Func Offset: 0x54
	// Line 1378, Address: 0x299c1c, Func Offset: 0x5c
	// Line 1379, Address: 0x299c20, Func Offset: 0x60
	// Line 1380, Address: 0x299c2c, Func Offset: 0x6c
	// Line 1381, Address: 0x299c34, Func Offset: 0x74
	// Line 1382, Address: 0x299c38, Func Offset: 0x78
	// Line 1383, Address: 0x299c40, Func Offset: 0x80
	// Line 1386, Address: 0x299c48, Func Offset: 0x88
	// Line 1387, Address: 0x299c5c, Func Offset: 0x9c
	// Line 1390, Address: 0x299c6c, Func Offset: 0xac
	// Line 1391, Address: 0x299c70, Func Offset: 0xb0
	// Line 1395, Address: 0x299c80, Func Offset: 0xc0
	// Func End, Address: 0x299c88, Func Offset: 0xc8
}

// 
// Start address: 0x299c90
void EileenThink_HurdleAvoid(_anon0* eil)
{
	int res;
	float v[4];
	float r;
	// Line 1400, Address: 0x299c90, Func Offset: 0
	// Line 1405, Address: 0x299c9c, Func Offset: 0xc
	// Line 1406, Address: 0x299ca8, Func Offset: 0x18
	// Line 1408, Address: 0x299cb0, Func Offset: 0x20
	// Line 1411, Address: 0x299cd8, Func Offset: 0x48
	// Line 1413, Address: 0x299cf0, Func Offset: 0x60
	// Line 1417, Address: 0x299cf8, Func Offset: 0x68
	// Line 1418, Address: 0x299d08, Func Offset: 0x78
	// Line 1419, Address: 0x299d1c, Func Offset: 0x8c
	// Line 1420, Address: 0x299d24, Func Offset: 0x94
	// Line 1422, Address: 0x299d2c, Func Offset: 0x9c
	// Line 1423, Address: 0x299d34, Func Offset: 0xa4
	// Line 1426, Address: 0x299d38, Func Offset: 0xa8
	// Line 1427, Address: 0x299d54, Func Offset: 0xc4
	// Line 1430, Address: 0x299d58, Func Offset: 0xc8
	// Line 1437, Address: 0x299d68, Func Offset: 0xd8
	// Line 1438, Address: 0x299d78, Func Offset: 0xe8
	// Line 1439, Address: 0x299d7c, Func Offset: 0xec
	// Line 1442, Address: 0x299d80, Func Offset: 0xf0
	// Line 1444, Address: 0x299d90, Func Offset: 0x100
	// Line 1445, Address: 0x299d9c, Func Offset: 0x10c
	// Line 1446, Address: 0x299da8, Func Offset: 0x118
	// Line 1447, Address: 0x299db0, Func Offset: 0x120
	// Line 1450, Address: 0x299db8, Func Offset: 0x128
	// Line 1447, Address: 0x299dbc, Func Offset: 0x12c
	// Line 1451, Address: 0x299dc4, Func Offset: 0x134
	// Line 1448, Address: 0x299dc8, Func Offset: 0x138
	// Line 1450, Address: 0x299dcc, Func Offset: 0x13c
	// Line 1452, Address: 0x299dd0, Func Offset: 0x140
	// Line 1456, Address: 0x299dd8, Func Offset: 0x148
	// Line 1458, Address: 0x299de4, Func Offset: 0x154
	// Line 1463, Address: 0x299dec, Func Offset: 0x15c
	// Line 1465, Address: 0x299df0, Func Offset: 0x160
	// Line 1467, Address: 0x299e00, Func Offset: 0x170
	// Line 1470, Address: 0x299e08, Func Offset: 0x178
	// Line 1471, Address: 0x299e18, Func Offset: 0x188
	// Line 1472, Address: 0x299e24, Func Offset: 0x194
	// Line 1473, Address: 0x299e2c, Func Offset: 0x19c
	// Line 1474, Address: 0x299e38, Func Offset: 0x1a8
	// Line 1475, Address: 0x299e40, Func Offset: 0x1b0
	// Line 1474, Address: 0x299e44, Func Offset: 0x1b4
	// Line 1475, Address: 0x299e48, Func Offset: 0x1b8
	// Line 1476, Address: 0x299e4c, Func Offset: 0x1bc
	// Line 1479, Address: 0x299e50, Func Offset: 0x1c0
	// Line 1480, Address: 0x299e54, Func Offset: 0x1c4
	// Line 1482, Address: 0x299e5c, Func Offset: 0x1cc
	// Line 1483, Address: 0x299e60, Func Offset: 0x1d0
	// Line 1484, Address: 0x299e74, Func Offset: 0x1e4
	// Line 1486, Address: 0x299e7c, Func Offset: 0x1ec
	// Line 1487, Address: 0x299e84, Func Offset: 0x1f4
	// Line 1490, Address: 0x299e88, Func Offset: 0x1f8
	// Line 1491, Address: 0x299e94, Func Offset: 0x204
	// Line 1493, Address: 0x299e9c, Func Offset: 0x20c
	// Line 1494, Address: 0x299ea0, Func Offset: 0x210
	// Line 1495, Address: 0x299ec0, Func Offset: 0x230
	// Line 1496, Address: 0x299eec, Func Offset: 0x25c
	// Line 1498, Address: 0x299ef8, Func Offset: 0x268
	// Line 1497, Address: 0x299f08, Func Offset: 0x278
	// Line 1498, Address: 0x299f0c, Func Offset: 0x27c
	// Line 1500, Address: 0x299f18, Func Offset: 0x288
	// Line 1499, Address: 0x299f1c, Func Offset: 0x28c
	// Line 1501, Address: 0x299f20, Func Offset: 0x290
	// Line 1504, Address: 0x299f28, Func Offset: 0x298
	// Line 1505, Address: 0x299f38, Func Offset: 0x2a8
	// Line 1506, Address: 0x299f40, Func Offset: 0x2b0
	// Line 1509, Address: 0x299f48, Func Offset: 0x2b8
	// Line 1511, Address: 0x299f58, Func Offset: 0x2c8
	// Line 1515, Address: 0x299f60, Func Offset: 0x2d0
	// Line 1516, Address: 0x299f70, Func Offset: 0x2e0
	// Line 1517, Address: 0x299f78, Func Offset: 0x2e8
	// Line 1520, Address: 0x299f80, Func Offset: 0x2f0
	// Line 1521, Address: 0x299fa0, Func Offset: 0x310
	// Line 1523, Address: 0x299fc4, Func Offset: 0x334
	// Line 1524, Address: 0x299fdc, Func Offset: 0x34c
	// Line 1525, Address: 0x29a008, Func Offset: 0x378
	// Line 1526, Address: 0x29a010, Func Offset: 0x380
	// Line 1527, Address: 0x29a018, Func Offset: 0x388
	// Line 1528, Address: 0x29a024, Func Offset: 0x394
	// Line 1530, Address: 0x29a028, Func Offset: 0x398
	// Line 1533, Address: 0x29a030, Func Offset: 0x3a0
	// Line 1534, Address: 0x29a034, Func Offset: 0x3a4
	// Func End, Address: 0x29a048, Func Offset: 0x3b8
}

// 
// Start address: 0x29a050
void EileenThink(_anon0* eil)
{
	// Line 1541, Address: 0x29a050, Func Offset: 0
	// Line 1542, Address: 0x29a05c, Func Offset: 0xc
	// Line 1544, Address: 0x29a060, Func Offset: 0x10
	// Line 1545, Address: 0x29a068, Func Offset: 0x18
	// Line 1550, Address: 0x29a074, Func Offset: 0x24
	// Line 1545, Address: 0x29a078, Func Offset: 0x28
	// Line 1550, Address: 0x29a07c, Func Offset: 0x2c
	// Line 1554, Address: 0x29a084, Func Offset: 0x34
	// Line 1555, Address: 0x29a090, Func Offset: 0x40
	// Line 1557, Address: 0x29a098, Func Offset: 0x48
	// Line 1558, Address: 0x29a0a4, Func Offset: 0x54
	// Line 1559, Address: 0x29a0ac, Func Offset: 0x5c
	// Line 1561, Address: 0x29a0b4, Func Offset: 0x64
	// Line 1567, Address: 0x29a0b8, Func Offset: 0x68
	// Line 1568, Address: 0x29a0d8, Func Offset: 0x88
	// Line 1572, Address: 0x29a0e0, Func Offset: 0x90
	// Line 1575, Address: 0x29a0e8, Func Offset: 0x98
	// Line 1580, Address: 0x29a0f4, Func Offset: 0xa4
	// Line 1575, Address: 0x29a0f8, Func Offset: 0xa8
	// Line 1580, Address: 0x29a0fc, Func Offset: 0xac
	// Line 1581, Address: 0x29a108, Func Offset: 0xb8
	// Line 1584, Address: 0x29a118, Func Offset: 0xc8
	// Line 1585, Address: 0x29a124, Func Offset: 0xd4
	// Line 1586, Address: 0x29a12c, Func Offset: 0xdc
	// Line 1587, Address: 0x29a150, Func Offset: 0x100
	// Line 1588, Address: 0x29a158, Func Offset: 0x108
	// Line 1589, Address: 0x29a164, Func Offset: 0x114
	// Line 1590, Address: 0x29a170, Func Offset: 0x120
	// Line 1593, Address: 0x29a180, Func Offset: 0x130
	// Func End, Address: 0x29a190, Func Offset: 0x140
}

// 
// Start address: 0x29a190
void StepChange(sfObj* obj, int new_step)
{
	// Line 1598, Address: 0x29a190, Func Offset: 0
	// Line 1599, Address: 0x29a19c, Func Offset: 0xc
	// Line 1601, Address: 0x29a1a0, Func Offset: 0x10
	// Line 1604, Address: 0x29a1ac, Func Offset: 0x1c
	// Line 1605, Address: 0x29a1b8, Func Offset: 0x28
	// Line 1607, Address: 0x29a1bc, Func Offset: 0x2c
	// Line 1606, Address: 0x29a1c0, Func Offset: 0x30
	// Line 1608, Address: 0x29a1c4, Func Offset: 0x34
	// Line 1607, Address: 0x29a1c8, Func Offset: 0x38
	// Line 1610, Address: 0x29a1cc, Func Offset: 0x3c
	// Line 1611, Address: 0x29a1d8, Func Offset: 0x48
	// Line 1613, Address: 0x29a1e0, Func Offset: 0x50
	// Func End, Address: 0x29a1f0, Func Offset: 0x60
}

// 
// Start address: 0x29a1f0
void TurnToTarget(_anon0* eil)
{
	float turn_angle;
	float q[4];
	// Line 1618, Address: 0x29a1f0, Func Offset: 0
	// Line 1622, Address: 0x29a200, Func Offset: 0x10
	// Line 1623, Address: 0x29a20c, Func Offset: 0x1c
	// Line 1624, Address: 0x29a22c, Func Offset: 0x3c
	// Line 1625, Address: 0x29a24c, Func Offset: 0x5c
	// Line 1626, Address: 0x29a260, Func Offset: 0x70
	// Line 1627, Address: 0x29a270, Func Offset: 0x80
	// Line 1628, Address: 0x29a29c, Func Offset: 0xac
	// Line 1629, Address: 0x29a2a0, Func Offset: 0xb0
	// Func End, Address: 0x29a2b0, Func Offset: 0xc0
}

// 
// Start address: 0x29a2b0
void ActionEndByWait(sfObj* obj)
{
	// Line 1634, Address: 0x29a2b0, Func Offset: 0
	// Line 1635, Address: 0x29a2bc, Func Offset: 0xc
	// Line 1637, Address: 0x29a2c0, Func Offset: 0x10
	// Line 1638, Address: 0x29a2c8, Func Offset: 0x18
	// Line 1639, Address: 0x29a2cc, Func Offset: 0x1c
	// Line 1640, Address: 0x29a2d4, Func Offset: 0x24
	// Func End, Address: 0x29a2e4, Func Offset: 0x34
}

// 
// Start address: 0x29a2f0
void EilWait(sfObj* obj)
{
	int wait_anime[3];
	// Line 1657, Address: 0x29a2f0, Func Offset: 0
	// Line 1666, Address: 0x29a2f4, Func Offset: 0x4
	// Line 1657, Address: 0x29a2f8, Func Offset: 0x8
	// Line 1658, Address: 0x29a310, Func Offset: 0x20
	// Line 1666, Address: 0x29a314, Func Offset: 0x24
	// Line 1668, Address: 0x29a330, Func Offset: 0x40
	// Line 1669, Address: 0x29a334, Func Offset: 0x44
	// Line 1671, Address: 0x29a36c, Func Offset: 0x7c
	// Line 1670, Address: 0x29a378, Func Offset: 0x88
	// Line 1671, Address: 0x29a37c, Func Offset: 0x8c
	// Line 1672, Address: 0x29a394, Func Offset: 0xa4
	// Line 1673, Address: 0x29a3bc, Func Offset: 0xcc
	// Line 1676, Address: 0x29a3c8, Func Offset: 0xd8
	// Line 1677, Address: 0x29a3cc, Func Offset: 0xdc
	// Line 1676, Address: 0x29a3d0, Func Offset: 0xe0
	// Line 1677, Address: 0x29a3d4, Func Offset: 0xe4
	// Line 1678, Address: 0x29a3e0, Func Offset: 0xf0
	// Line 1680, Address: 0x29a3f0, Func Offset: 0x100
	// Line 1682, Address: 0x29a3f8, Func Offset: 0x108
	// Line 1683, Address: 0x29a408, Func Offset: 0x118
	// Line 1682, Address: 0x29a40c, Func Offset: 0x11c
	// Line 1683, Address: 0x29a414, Func Offset: 0x124
	// Line 1685, Address: 0x29a458, Func Offset: 0x168
	// Line 1688, Address: 0x29a460, Func Offset: 0x170
	// Line 1689, Address: 0x29a478, Func Offset: 0x188
	// Line 1690, Address: 0x29a484, Func Offset: 0x194
	// Line 1689, Address: 0x29a48c, Func Offset: 0x19c
	// Line 1690, Address: 0x29a490, Func Offset: 0x1a0
	// Line 1691, Address: 0x29a49c, Func Offset: 0x1ac
	// Line 1695, Address: 0x29a4a8, Func Offset: 0x1b8
	// Func End, Address: 0x29a4c4, Func Offset: 0x1d4
}

// 
// Start address: 0x29a4d0
void EilFollow(sfObj* obj)
{
	_anon0* eil;
	float v[4];
	float q[4];
	sgAnime* anm;
	float r;
	float sp;
	float angle;
	float speed_ratio;
	float walk_sp;
	float run_add_sp;
	int follow_type;
	int frame;
	// Line 1707, Address: 0x29a4d0, Func Offset: 0
	// Line 1731, Address: 0x29a4d4, Func Offset: 0x4
	// Line 1707, Address: 0x29a4d8, Func Offset: 0x8
	// Line 1708, Address: 0x29a4f8, Func Offset: 0x28
	// Line 1729, Address: 0x29a4fc, Func Offset: 0x2c
	// Line 1731, Address: 0x29a504, Func Offset: 0x34
	// Line 1733, Address: 0x29a528, Func Offset: 0x58
	// Line 1735, Address: 0x29a52c, Func Offset: 0x5c
	// Line 1734, Address: 0x29a530, Func Offset: 0x60
	// Line 1735, Address: 0x29a534, Func Offset: 0x64
	// Line 1736, Address: 0x29a53c, Func Offset: 0x6c
	// Line 1737, Address: 0x29a544, Func Offset: 0x74
	// Line 1740, Address: 0x29a550, Func Offset: 0x80
	// Line 1741, Address: 0x29a55c, Func Offset: 0x8c
	// Line 1742, Address: 0x29a568, Func Offset: 0x98
	// Line 1743, Address: 0x29a56c, Func Offset: 0x9c
	// Line 1744, Address: 0x29a578, Func Offset: 0xa8
	// Line 1745, Address: 0x29a588, Func Offset: 0xb8
	// Line 1746, Address: 0x29a58c, Func Offset: 0xbc
	// Line 1747, Address: 0x29a590, Func Offset: 0xc0
	// Line 1749, Address: 0x29a59c, Func Offset: 0xcc
	// Line 1754, Address: 0x29a5a0, Func Offset: 0xd0
	// Line 1755, Address: 0x29a5ac, Func Offset: 0xdc
	// Line 1757, Address: 0x29a5b0, Func Offset: 0xe0
	// Line 1758, Address: 0x29a5bc, Func Offset: 0xec
	// Line 1760, Address: 0x29a5c0, Func Offset: 0xf0
	// Line 1761, Address: 0x29a5d0, Func Offset: 0x100
	// Line 1764, Address: 0x29a5d8, Func Offset: 0x108
	// Line 1765, Address: 0x29a5f0, Func Offset: 0x120
	// Line 1767, Address: 0x29a5f8, Func Offset: 0x128
	// Line 1771, Address: 0x29a604, Func Offset: 0x134
	// Line 1772, Address: 0x29a610, Func Offset: 0x140
	// Line 1773, Address: 0x29a61c, Func Offset: 0x14c
	// Line 1774, Address: 0x29a640, Func Offset: 0x170
	// Line 1775, Address: 0x29a65c, Func Offset: 0x18c
	// Line 1776, Address: 0x29a670, Func Offset: 0x1a0
	// Line 1779, Address: 0x29a680, Func Offset: 0x1b0
	// Line 1780, Address: 0x29a6ac, Func Offset: 0x1dc
	// Line 1785, Address: 0x29a6bc, Func Offset: 0x1ec
	// Line 1786, Address: 0x29a6ec, Func Offset: 0x21c
	// Line 1787, Address: 0x29a6f0, Func Offset: 0x220
	// Line 1788, Address: 0x29a70c, Func Offset: 0x23c
	// Line 1789, Address: 0x29a714, Func Offset: 0x244
	// Line 1790, Address: 0x29a720, Func Offset: 0x250
	// Line 1791, Address: 0x29a730, Func Offset: 0x260
	// Line 1792, Address: 0x29a748, Func Offset: 0x278
	// Line 1794, Address: 0x29a760, Func Offset: 0x290
	// Line 1795, Address: 0x29a76c, Func Offset: 0x29c
	// Line 1796, Address: 0x29a778, Func Offset: 0x2a8
	// Line 1797, Address: 0x29a78c, Func Offset: 0x2bc
	// Line 1800, Address: 0x29a790, Func Offset: 0x2c0
	// Line 1802, Address: 0x29a7b8, Func Offset: 0x2e8
	// Line 1805, Address: 0x29a7c0, Func Offset: 0x2f0
	// Line 1808, Address: 0x29a7c8, Func Offset: 0x2f8
	// Line 1809, Address: 0x29a7d4, Func Offset: 0x304
	// Line 1813, Address: 0x29a7dc, Func Offset: 0x30c
	// Line 1814, Address: 0x29a7e0, Func Offset: 0x310
	// Line 1817, Address: 0x29a7ec, Func Offset: 0x31c
	// Line 1818, Address: 0x29a7f0, Func Offset: 0x320
	// Line 1819, Address: 0x29a808, Func Offset: 0x338
	// Line 1820, Address: 0x29a824, Func Offset: 0x354
	// Line 1821, Address: 0x29a838, Func Offset: 0x368
	// Line 1822, Address: 0x29a854, Func Offset: 0x384
	// Line 1834, Address: 0x29a858, Func Offset: 0x388
	// Line 1835, Address: 0x29a86c, Func Offset: 0x39c
	// Line 1837, Address: 0x29a87c, Func Offset: 0x3ac
	// Line 1838, Address: 0x29a884, Func Offset: 0x3b4
	// Line 1839, Address: 0x29a88c, Func Offset: 0x3bc
	// Line 1840, Address: 0x29a8a0, Func Offset: 0x3d0
	// Line 1841, Address: 0x29a8a8, Func Offset: 0x3d8
	// Line 1842, Address: 0x29a8bc, Func Offset: 0x3ec
	// Line 1844, Address: 0x29a8c4, Func Offset: 0x3f4
	// Line 1850, Address: 0x29a8c8, Func Offset: 0x3f8
	// Line 1852, Address: 0x29a8e4, Func Offset: 0x414
	// Line 1853, Address: 0x29a8ec, Func Offset: 0x41c
	// Line 1850, Address: 0x29a8f0, Func Offset: 0x420
	// Line 1854, Address: 0x29a8f4, Func Offset: 0x424
	// Line 1853, Address: 0x29a8f8, Func Offset: 0x428
	// Line 1854, Address: 0x29a8fc, Func Offset: 0x42c
	// Line 1856, Address: 0x29a904, Func Offset: 0x434
	// Line 1855, Address: 0x29a908, Func Offset: 0x438
	// Line 1856, Address: 0x29a90c, Func Offset: 0x43c
	// Line 1859, Address: 0x29a910, Func Offset: 0x440
	// Line 1860, Address: 0x29a920, Func Offset: 0x450
	// Line 1861, Address: 0x29a92c, Func Offset: 0x45c
	// Line 1865, Address: 0x29a940, Func Offset: 0x470
	// Line 1862, Address: 0x29a948, Func Offset: 0x478
	// Line 1863, Address: 0x29a94c, Func Offset: 0x47c
	// Line 1865, Address: 0x29a950, Func Offset: 0x480
	// Line 1866, Address: 0x29a95c, Func Offset: 0x48c
	// Line 1867, Address: 0x29a968, Func Offset: 0x498
	// Line 1871, Address: 0x29a970, Func Offset: 0x4a0
	// Line 1867, Address: 0x29a974, Func Offset: 0x4a4
	// Line 1868, Address: 0x29a980, Func Offset: 0x4b0
	// Line 1869, Address: 0x29a984, Func Offset: 0x4b4
	// Line 1871, Address: 0x29a988, Func Offset: 0x4b8
	// Line 1872, Address: 0x29a994, Func Offset: 0x4c4
	// Line 1874, Address: 0x29a998, Func Offset: 0x4c8
	// Line 1876, Address: 0x29a9c0, Func Offset: 0x4f0
	// Line 1877, Address: 0x29a9d0, Func Offset: 0x500
	// Line 1879, Address: 0x29a9e0, Func Offset: 0x510
	// Line 1880, Address: 0x29a9e8, Func Offset: 0x518
	// Line 1881, Address: 0x29aa04, Func Offset: 0x534
	// Line 1882, Address: 0x29aa0c, Func Offset: 0x53c
	// Line 1885, Address: 0x29aa10, Func Offset: 0x540
	// Line 1886, Address: 0x29aa20, Func Offset: 0x550
	// Line 1887, Address: 0x29aa30, Func Offset: 0x560
	// Line 1888, Address: 0x29aa3c, Func Offset: 0x56c
	// Line 1890, Address: 0x29aa50, Func Offset: 0x580
	// Line 1894, Address: 0x29aa58, Func Offset: 0x588
	// Func End, Address: 0x29aa7c, Func Offset: 0x5ac
}

// 
// Start address: 0x29aa80
void EilRunStop(sfObj* obj)
{
	// Line 1899, Address: 0x29aa80, Func Offset: 0
	// Line 1903, Address: 0x29aa84, Func Offset: 0x4
	// Line 1899, Address: 0x29aa88, Func Offset: 0x8
	// Line 1903, Address: 0x29aa94, Func Offset: 0x14
	// Line 1900, Address: 0x29aa98, Func Offset: 0x18
	// Line 1903, Address: 0x29aa9c, Func Offset: 0x1c
	// Line 1905, Address: 0x29aac0, Func Offset: 0x40
	// Line 1907, Address: 0x29aac8, Func Offset: 0x48
	// Line 1908, Address: 0x29aad4, Func Offset: 0x54
	// Line 1911, Address: 0x29aae0, Func Offset: 0x60
	// Line 1912, Address: 0x29aafc, Func Offset: 0x7c
	// Line 1914, Address: 0x29ab08, Func Offset: 0x88
	// Line 1916, Address: 0x29ab10, Func Offset: 0x90
	// Line 1919, Address: 0x29ab18, Func Offset: 0x98
	// Func End, Address: 0x29ab2c, Func Offset: 0xac
}

// 
// Start address: 0x29ab30
void EilTurn(sfObj* obj)
{
	_anon0* eil;
	sgAnime* anm;
	sfCharacter* chara;
	float q[4];
	float turn_angle;
	float max_angle_sp;
	int animation;
	int n_fr;
	// Line 1924, Address: 0x29ab30, Func Offset: 0
	// Line 1935, Address: 0x29ab34, Func Offset: 0x4
	// Line 1924, Address: 0x29ab38, Func Offset: 0x8
	// Line 1925, Address: 0x29ab50, Func Offset: 0x20
	// Line 1935, Address: 0x29ab54, Func Offset: 0x24
	// Line 1927, Address: 0x29ab58, Func Offset: 0x28
	// Line 1935, Address: 0x29ab5c, Func Offset: 0x2c
	// Line 1938, Address: 0x29ab80, Func Offset: 0x50
	// Line 1939, Address: 0x29ab84, Func Offset: 0x54
	// Line 1940, Address: 0x29ab88, Func Offset: 0x58
	// Line 1941, Address: 0x29ab90, Func Offset: 0x60
	// Line 1942, Address: 0x29ab9c, Func Offset: 0x6c
	// Line 1943, Address: 0x29abb0, Func Offset: 0x80
	// Line 1944, Address: 0x29abb8, Func Offset: 0x88
	// Line 1946, Address: 0x29abc8, Func Offset: 0x98
	// Line 1948, Address: 0x29abd0, Func Offset: 0xa0
	// Line 1950, Address: 0x29abe0, Func Offset: 0xb0
	// Line 1951, Address: 0x29abf4, Func Offset: 0xc4
	// Line 1953, Address: 0x29ac00, Func Offset: 0xd0
	// Line 1954, Address: 0x29ac08, Func Offset: 0xd8
	// Line 1955, Address: 0x29ac2c, Func Offset: 0xfc
	// Line 1956, Address: 0x29ac30, Func Offset: 0x100
	// Line 1958, Address: 0x29ac34, Func Offset: 0x104
	// Line 1959, Address: 0x29ac38, Func Offset: 0x108
	// Line 1960, Address: 0x29ac40, Func Offset: 0x110
	// Line 1962, Address: 0x29ac44, Func Offset: 0x114
	// Line 1963, Address: 0x29ac4c, Func Offset: 0x11c
	// Line 1964, Address: 0x29ac50, Func Offset: 0x120
	// Line 1965, Address: 0x29ac5c, Func Offset: 0x12c
	// Line 1967, Address: 0x29ac6c, Func Offset: 0x13c
	// Line 1971, Address: 0x29ac78, Func Offset: 0x148
	// Line 1978, Address: 0x29ac80, Func Offset: 0x150
	// Line 1979, Address: 0x29ac8c, Func Offset: 0x15c
	// Line 1981, Address: 0x29ac98, Func Offset: 0x168
	// Line 1983, Address: 0x29aca0, Func Offset: 0x170
	// Line 1984, Address: 0x29acb4, Func Offset: 0x184
	// Line 1986, Address: 0x29acb8, Func Offset: 0x188
	// Line 1987, Address: 0x29acc4, Func Offset: 0x194
	// Line 1988, Address: 0x29accc, Func Offset: 0x19c
	// Line 1989, Address: 0x29acd4, Func Offset: 0x1a4
	// Line 1991, Address: 0x29acd8, Func Offset: 0x1a8
	// Line 1995, Address: 0x29acf0, Func Offset: 0x1c0
	// Line 1996, Address: 0x29ad00, Func Offset: 0x1d0
	// Line 1999, Address: 0x29ad08, Func Offset: 0x1d8
	// Line 2001, Address: 0x29ad18, Func Offset: 0x1e8
	// Line 2000, Address: 0x29ad1c, Func Offset: 0x1ec
	// Line 2001, Address: 0x29ad2c, Func Offset: 0x1fc
	// Line 2002, Address: 0x29ad34, Func Offset: 0x204
	// Line 2004, Address: 0x29ad48, Func Offset: 0x218
	// Line 2006, Address: 0x29ad58, Func Offset: 0x228
	// Line 2007, Address: 0x29ad68, Func Offset: 0x238
	// Line 2008, Address: 0x29ad80, Func Offset: 0x250
	// Line 2009, Address: 0x29ad90, Func Offset: 0x260
	// Line 2011, Address: 0x29ada8, Func Offset: 0x278
	// Line 2012, Address: 0x29adc0, Func Offset: 0x290
	// Line 2013, Address: 0x29adcc, Func Offset: 0x29c
	// Line 2014, Address: 0x29add0, Func Offset: 0x2a0
	// Line 2015, Address: 0x29ade8, Func Offset: 0x2b8
	// Line 2018, Address: 0x29ae00, Func Offset: 0x2d0
	// Line 2019, Address: 0x29ae14, Func Offset: 0x2e4
	// Line 2020, Address: 0x29ae2c, Func Offset: 0x2fc
	// Line 2021, Address: 0x29ae40, Func Offset: 0x310
	// Line 2023, Address: 0x29ae50, Func Offset: 0x320
	// Line 2025, Address: 0x29ae64, Func Offset: 0x334
	// Line 2026, Address: 0x29ae6c, Func Offset: 0x33c
	// Line 2027, Address: 0x29ae70, Func Offset: 0x340
	// Line 2030, Address: 0x29ae78, Func Offset: 0x348
	// Func End, Address: 0x29ae98, Func Offset: 0x368
}

// 
// Start address: 0x29aea0
void EilTargetingMove(sfObj* obj)
{
	_anon0* eil;
	float d;
	float anm_r;
	float sp_r;
	int frame;
	sgAnime* anm;
	// Line 2038, Address: 0x29aea0, Func Offset: 0
	// Line 2046, Address: 0x29aea4, Func Offset: 0x4
	// Line 2038, Address: 0x29aea8, Func Offset: 0x8
	// Line 2046, Address: 0x29aeb8, Func Offset: 0x18
	// Line 2039, Address: 0x29aebc, Func Offset: 0x1c
	// Line 2046, Address: 0x29aec0, Func Offset: 0x20
	// Line 2048, Address: 0x29aed8, Func Offset: 0x38
	// Line 2049, Address: 0x29aedc, Func Offset: 0x3c
	// Line 2051, Address: 0x29aee0, Func Offset: 0x40
	// Line 2050, Address: 0x29aee4, Func Offset: 0x44
	// Line 2051, Address: 0x29aeec, Func Offset: 0x4c
	// Line 2052, Address: 0x29aef8, Func Offset: 0x58
	// Line 2054, Address: 0x29af08, Func Offset: 0x68
	// Line 2056, Address: 0x29af10, Func Offset: 0x70
	// Line 2058, Address: 0x29af20, Func Offset: 0x80
	// Line 2057, Address: 0x29af24, Func Offset: 0x84
	// Line 2058, Address: 0x29af28, Func Offset: 0x88
	// Line 2057, Address: 0x29af2c, Func Offset: 0x8c
	// Line 2058, Address: 0x29af30, Func Offset: 0x90
	// Line 2059, Address: 0x29af38, Func Offset: 0x98
	// Line 2060, Address: 0x29af3c, Func Offset: 0x9c
	// Line 2064, Address: 0x29af48, Func Offset: 0xa8
	// Line 2066, Address: 0x29af6c, Func Offset: 0xcc
	// Line 2067, Address: 0x29af70, Func Offset: 0xd0
	// Line 2069, Address: 0x29af90, Func Offset: 0xf0
	// Line 2070, Address: 0x29af98, Func Offset: 0xf8
	// Line 2072, Address: 0x29afa8, Func Offset: 0x108
	// Line 2074, Address: 0x29afb0, Func Offset: 0x110
	// Line 2075, Address: 0x29afb4, Func Offset: 0x114
	// Line 2076, Address: 0x29afb8, Func Offset: 0x118
	// Line 2079, Address: 0x29afd4, Func Offset: 0x134
	// Line 2080, Address: 0x29afec, Func Offset: 0x14c
	// Line 2079, Address: 0x29aff0, Func Offset: 0x150
	// Line 2080, Address: 0x29aff4, Func Offset: 0x154
	// Line 2077, Address: 0x29affc, Func Offset: 0x15c
	// Line 2080, Address: 0x29b000, Func Offset: 0x160
	// Line 2085, Address: 0x29b008, Func Offset: 0x168
	// Line 2081, Address: 0x29b00c, Func Offset: 0x16c
	// Line 2085, Address: 0x29b010, Func Offset: 0x170
	// Line 2086, Address: 0x29b018, Func Offset: 0x178
	// Line 2087, Address: 0x29b020, Func Offset: 0x180
	// Line 2088, Address: 0x29b038, Func Offset: 0x198
	// Line 2089, Address: 0x29b048, Func Offset: 0x1a8
	// Line 2090, Address: 0x29b058, Func Offset: 0x1b8
	// Line 2093, Address: 0x29b05c, Func Offset: 0x1bc
	// Line 2096, Address: 0x29b060, Func Offset: 0x1c0
	// Line 2097, Address: 0x29b068, Func Offset: 0x1c8
	// Func End, Address: 0x29b080, Func Offset: 0x1e0
}

// 
// Start address: 0x29b080
void EilSlideMove(sfObj* obj)
{
	_anon0* eil;
	float v[4];
	float d;
	float anm_r;
	float sp_r;
	int side;
	// Line 2104, Address: 0x29b080, Func Offset: 0
	// Line 2112, Address: 0x29b084, Func Offset: 0x4
	// Line 2104, Address: 0x29b088, Func Offset: 0x8
	// Line 2105, Address: 0x29b098, Func Offset: 0x18
	// Line 2112, Address: 0x29b09c, Func Offset: 0x1c
	// Line 2114, Address: 0x29b0b8, Func Offset: 0x38
	// Line 2115, Address: 0x29b0bc, Func Offset: 0x3c
	// Line 2118, Address: 0x29b0c0, Func Offset: 0x40
	// Line 2117, Address: 0x29b0c4, Func Offset: 0x44
	// Line 2118, Address: 0x29b0cc, Func Offset: 0x4c
	// Line 2119, Address: 0x29b0d8, Func Offset: 0x58
	// Line 2121, Address: 0x29b0e8, Func Offset: 0x68
	// Line 2123, Address: 0x29b0f0, Func Offset: 0x70
	// Line 2127, Address: 0x29b0fc, Func Offset: 0x7c
	// Line 2129, Address: 0x29b104, Func Offset: 0x84
	// Line 2130, Address: 0x29b10c, Func Offset: 0x8c
	// Line 2131, Address: 0x29b114, Func Offset: 0x94
	// Line 2132, Address: 0x29b11c, Func Offset: 0x9c
	// Line 2134, Address: 0x29b120, Func Offset: 0xa0
	// Line 2135, Address: 0x29b128, Func Offset: 0xa8
	// Line 2136, Address: 0x29b12c, Func Offset: 0xac
	// Line 2138, Address: 0x29b130, Func Offset: 0xb0
	// Line 2139, Address: 0x29b134, Func Offset: 0xb4
	// Line 2140, Address: 0x29b13c, Func Offset: 0xbc
	// Line 2142, Address: 0x29b168, Func Offset: 0xe8
	// Line 2143, Address: 0x29b190, Func Offset: 0x110
	// Line 2145, Address: 0x29b1bc, Func Offset: 0x13c
	// Line 2146, Address: 0x29b1cc, Func Offset: 0x14c
	// Line 2148, Address: 0x29b1d0, Func Offset: 0x150
	// Line 2146, Address: 0x29b1d4, Func Offset: 0x154
	// Line 2148, Address: 0x29b1d8, Func Offset: 0x158
	// Line 2149, Address: 0x29b1dc, Func Offset: 0x15c
	// Line 2150, Address: 0x29b1e0, Func Offset: 0x160
	// Line 2152, Address: 0x29b1ec, Func Offset: 0x16c
	// Line 2153, Address: 0x29b1f0, Func Offset: 0x170
	// Line 2154, Address: 0x29b1f4, Func Offset: 0x174
	// Line 2155, Address: 0x29b1fc, Func Offset: 0x17c
	// Line 2157, Address: 0x29b228, Func Offset: 0x1a8
	// Line 2158, Address: 0x29b250, Func Offset: 0x1d0
	// Line 2161, Address: 0x29b27c, Func Offset: 0x1fc
	// Line 2162, Address: 0x29b2a0, Func Offset: 0x220
	// Line 2165, Address: 0x29b2c8, Func Offset: 0x248
	// Line 2164, Address: 0x29b2d4, Func Offset: 0x254
	// Line 2165, Address: 0x29b2d8, Func Offset: 0x258
	// Line 2167, Address: 0x29b2e8, Func Offset: 0x268
	// Line 2168, Address: 0x29b2f0, Func Offset: 0x270
	// Line 2170, Address: 0x29b300, Func Offset: 0x280
	// Line 2172, Address: 0x29b308, Func Offset: 0x288
	// Line 2173, Address: 0x29b30c, Func Offset: 0x28c
	// Line 2174, Address: 0x29b310, Func Offset: 0x290
	// Line 2178, Address: 0x29b32c, Func Offset: 0x2ac
	// Line 2179, Address: 0x29b344, Func Offset: 0x2c4
	// Line 2178, Address: 0x29b348, Func Offset: 0x2c8
	// Line 2179, Address: 0x29b34c, Func Offset: 0x2cc
	// Line 2175, Address: 0x29b358, Func Offset: 0x2d8
	// Line 2179, Address: 0x29b35c, Func Offset: 0x2dc
	// Line 2185, Address: 0x29b364, Func Offset: 0x2e4
	// Line 2183, Address: 0x29b370, Func Offset: 0x2f0
	// Line 2185, Address: 0x29b374, Func Offset: 0x2f4
	// Line 2180, Address: 0x29b378, Func Offset: 0x2f8
	// Line 2186, Address: 0x29b37c, Func Offset: 0x2fc
	// Line 2188, Address: 0x29b380, Func Offset: 0x300
	// Line 2189, Address: 0x29b390, Func Offset: 0x310
	// Line 2192, Address: 0x29b398, Func Offset: 0x318
	// Line 2193, Address: 0x29b3a8, Func Offset: 0x328
	// Line 2194, Address: 0x29b3b4, Func Offset: 0x334
	// Line 2198, Address: 0x29b3bc, Func Offset: 0x33c
	// Line 2201, Address: 0x29b3c0, Func Offset: 0x340
	// Line 2202, Address: 0x29b3cc, Func Offset: 0x34c
	// Line 2203, Address: 0x29b3d8, Func Offset: 0x358
	// Func End, Address: 0x29b3ec, Func Offset: 0x36c
}

// 
// Start address: 0x29b3f0
void EilDamage(sfObj* obj)
{
	float v[4];
	float r;
	_anon0* eil;
	float eil_pos[4];
	int hit_front;
	int damage_large;
	int anime_type;
	float turn_angle;
	sgAnime* anm;
	int se_no;
	int damage_se[4];
	// Line 2211, Address: 0x29b3f0, Func Offset: 0
	// Line 2229, Address: 0x29b3f4, Func Offset: 0x4
	// Line 2211, Address: 0x29b3f8, Func Offset: 0x8
	// Line 2229, Address: 0x29b410, Func Offset: 0x20
	// Line 2214, Address: 0x29b414, Func Offset: 0x24
	// Line 2229, Address: 0x29b418, Func Offset: 0x28
	// Line 2230, Address: 0x29b43c, Func Offset: 0x4c
	// Line 2231, Address: 0x29b440, Func Offset: 0x50
	// Line 2232, Address: 0x29b444, Func Offset: 0x54
	// Line 2233, Address: 0x29b448, Func Offset: 0x58
	// Line 2232, Address: 0x29b44c, Func Offset: 0x5c
	// Line 2233, Address: 0x29b450, Func Offset: 0x60
	// Line 2234, Address: 0x29b45c, Func Offset: 0x6c
	// Line 2235, Address: 0x29b470, Func Offset: 0x80
	// Line 2236, Address: 0x29b478, Func Offset: 0x88
	// Line 2238, Address: 0x29b488, Func Offset: 0x98
	// Line 2241, Address: 0x29b490, Func Offset: 0xa0
	// Line 2242, Address: 0x29b4ac, Func Offset: 0xbc
	// Line 2245, Address: 0x29b4b8, Func Offset: 0xc8
	// Line 2248, Address: 0x29b4c4, Func Offset: 0xd4
	// Line 2249, Address: 0x29b4e4, Func Offset: 0xf4
	// Line 2250, Address: 0x29b4e8, Func Offset: 0xf8
	// Line 2249, Address: 0x29b4f0, Func Offset: 0x100
	// Line 2250, Address: 0x29b4f4, Func Offset: 0x104
	// Line 2251, Address: 0x29b510, Func Offset: 0x120
	// Line 2252, Address: 0x29b524, Func Offset: 0x134
	// Line 2254, Address: 0x29b530, Func Offset: 0x140
	// Line 2257, Address: 0x29b538, Func Offset: 0x148
	// Line 2259, Address: 0x29b544, Func Offset: 0x154
	// Line 2260, Address: 0x29b550, Func Offset: 0x160
	// Line 2261, Address: 0x29b558, Func Offset: 0x168
	// Line 2263, Address: 0x29b55c, Func Offset: 0x16c
	// Line 2264, Address: 0x29b574, Func Offset: 0x184
	// Line 2266, Address: 0x29b598, Func Offset: 0x1a8
	// Line 2267, Address: 0x29b5a4, Func Offset: 0x1b4
	// Line 2270, Address: 0x29b5a8, Func Offset: 0x1b8
	// Line 2271, Address: 0x29b5b0, Func Offset: 0x1c0
	// Line 2273, Address: 0x29b5b8, Func Offset: 0x1c8
	// Line 2274, Address: 0x29b5c0, Func Offset: 0x1d0
	// Line 2275, Address: 0x29b5c8, Func Offset: 0x1d8
	// Line 2276, Address: 0x29b5d0, Func Offset: 0x1e0
	// Line 2281, Address: 0x29b5d8, Func Offset: 0x1e8
	// Line 2282, Address: 0x29b604, Func Offset: 0x214
	// Line 2283, Address: 0x29b630, Func Offset: 0x240
	// Line 2285, Address: 0x29b638, Func Offset: 0x248
	// Line 2286, Address: 0x29b648, Func Offset: 0x258
	// Line 2287, Address: 0x29b650, Func Offset: 0x260
	// Line 2288, Address: 0x29b658, Func Offset: 0x268
	// Line 2290, Address: 0x29b66c, Func Offset: 0x27c
	// Line 2294, Address: 0x29b678, Func Offset: 0x288
	// Line 2295, Address: 0x29b684, Func Offset: 0x294
	// Line 2296, Address: 0x29b6b4, Func Offset: 0x2c4
	// Line 2303, Address: 0x29b6b8, Func Offset: 0x2c8
	// Line 2304, Address: 0x29b6d0, Func Offset: 0x2e0
	// Line 2306, Address: 0x29b6dc, Func Offset: 0x2ec
	// Line 2307, Address: 0x29b6e8, Func Offset: 0x2f8
	// Line 2308, Address: 0x29b6ec, Func Offset: 0x2fc
	// Line 2310, Address: 0x29b6f4, Func Offset: 0x304
	// Line 2311, Address: 0x29b6fc, Func Offset: 0x30c
	// Line 2312, Address: 0x29b700, Func Offset: 0x310
	// Line 2316, Address: 0x29b708, Func Offset: 0x318
	// Func End, Address: 0x29b728, Func Offset: 0x338
}

// 
// Start address: 0x29b730
void EilPushed(sfObj* obj)
{
	_anon0* eil;
	float target_sp;
	float v[4];
	int hit_front;
	float r;
	float sp;
	_PLAYER_WORK* plw;
	// Line 2321, Address: 0x29b730, Func Offset: 0
	// Line 2340, Address: 0x29b738, Func Offset: 0x8
	// Line 2321, Address: 0x29b73c, Func Offset: 0xc
	// Line 2322, Address: 0x29b748, Func Offset: 0x18
	// Line 2340, Address: 0x29b74c, Func Offset: 0x1c
	// Line 2341, Address: 0x29b768, Func Offset: 0x38
	// Line 2342, Address: 0x29b76c, Func Offset: 0x3c
	// Line 2341, Address: 0x29b774, Func Offset: 0x44
	// Line 2342, Address: 0x29b778, Func Offset: 0x48
	// Line 2343, Address: 0x29b79c, Func Offset: 0x6c
	// Line 2344, Address: 0x29b7c0, Func Offset: 0x90
	// Line 2345, Address: 0x29b7e0, Func Offset: 0xb0
	// Line 2347, Address: 0x29b7e8, Func Offset: 0xb8
	// Line 2349, Address: 0x29b810, Func Offset: 0xe0
	// Line 2350, Address: 0x29b814, Func Offset: 0xe4
	// Line 2355, Address: 0x29b820, Func Offset: 0xf0
	// Line 2356, Address: 0x29b824, Func Offset: 0xf4
	// Line 2355, Address: 0x29b828, Func Offset: 0xf8
	// Line 2356, Address: 0x29b82c, Func Offset: 0xfc
	// Line 2357, Address: 0x29b848, Func Offset: 0x118
	// Line 2361, Address: 0x29b86c, Func Offset: 0x13c
	// Line 2362, Address: 0x29b874, Func Offset: 0x144
	// Line 2363, Address: 0x29b898, Func Offset: 0x168
	// Line 2364, Address: 0x29b89c, Func Offset: 0x16c
	// Line 2365, Address: 0x29b8a8, Func Offset: 0x178
	// Line 2366, Address: 0x29b8c8, Func Offset: 0x198
	// Line 2368, Address: 0x29b8d0, Func Offset: 0x1a0
	// Line 2369, Address: 0x29b8d4, Func Offset: 0x1a4
	// Line 2370, Address: 0x29b8e0, Func Offset: 0x1b0
	// Line 2374, Address: 0x29b8e8, Func Offset: 0x1b8
	// Line 2375, Address: 0x29b8f4, Func Offset: 0x1c4
	// Line 2376, Address: 0x29b920, Func Offset: 0x1f0
	// Line 2377, Address: 0x29b928, Func Offset: 0x1f8
	// Line 2376, Address: 0x29b934, Func Offset: 0x204
	// Line 2377, Address: 0x29b938, Func Offset: 0x208
	// Line 2378, Address: 0x29b93c, Func Offset: 0x20c
	// Line 2379, Address: 0x29b944, Func Offset: 0x214
	// Line 2381, Address: 0x29b94c, Func Offset: 0x21c
	// Line 2383, Address: 0x29b950, Func Offset: 0x220
	// Line 2382, Address: 0x29b954, Func Offset: 0x224
	// Line 2383, Address: 0x29b95c, Func Offset: 0x22c
	// Line 2382, Address: 0x29b964, Func Offset: 0x234
	// Line 2383, Address: 0x29b968, Func Offset: 0x238
	// Line 2384, Address: 0x29b974, Func Offset: 0x244
	// Line 2386, Address: 0x29b978, Func Offset: 0x248
	// Line 2387, Address: 0x29b980, Func Offset: 0x250
	// Line 2388, Address: 0x29b988, Func Offset: 0x258
	// Line 2389, Address: 0x29b998, Func Offset: 0x268
	// Line 2390, Address: 0x29b99c, Func Offset: 0x26c
	// Line 2391, Address: 0x29b9ac, Func Offset: 0x27c
	// Line 2393, Address: 0x29b9b4, Func Offset: 0x284
	// Line 2394, Address: 0x29b9c0, Func Offset: 0x290
	// Line 2395, Address: 0x29b9c8, Func Offset: 0x298
	// Line 2397, Address: 0x29b9cc, Func Offset: 0x29c
	// Line 2399, Address: 0x29b9d4, Func Offset: 0x2a4
	// Line 2401, Address: 0x29b9d8, Func Offset: 0x2a8
	// Line 2402, Address: 0x29b9e4, Func Offset: 0x2b4
	// Line 2403, Address: 0x29ba10, Func Offset: 0x2e0
	// Line 2404, Address: 0x29ba18, Func Offset: 0x2e8
	// Line 2403, Address: 0x29ba24, Func Offset: 0x2f4
	// Line 2406, Address: 0x29ba28, Func Offset: 0x2f8
	// Line 2407, Address: 0x29ba40, Func Offset: 0x310
	// Line 2408, Address: 0x29ba48, Func Offset: 0x318
	// Line 2409, Address: 0x29ba50, Func Offset: 0x320
	// Line 2412, Address: 0x29ba58, Func Offset: 0x328
	// Line 2413, Address: 0x29ba60, Func Offset: 0x330
	// Line 2412, Address: 0x29ba68, Func Offset: 0x338
	// Line 2413, Address: 0x29ba6c, Func Offset: 0x33c
	// Line 2414, Address: 0x29ba78, Func Offset: 0x348
	// Line 2416, Address: 0x29ba80, Func Offset: 0x350
	// Line 2415, Address: 0x29ba84, Func Offset: 0x354
	// Line 2416, Address: 0x29ba88, Func Offset: 0x358
	// Line 2418, Address: 0x29baa0, Func Offset: 0x370
	// Line 2419, Address: 0x29baac, Func Offset: 0x37c
	// Line 2421, Address: 0x29bab4, Func Offset: 0x384
	// Line 2423, Address: 0x29babc, Func Offset: 0x38c
	// Line 2425, Address: 0x29bac0, Func Offset: 0x390
	// Line 2426, Address: 0x29bacc, Func Offset: 0x39c
	// Line 2427, Address: 0x29baf8, Func Offset: 0x3c8
	// Line 2428, Address: 0x29bb00, Func Offset: 0x3d0
	// Line 2427, Address: 0x29bb0c, Func Offset: 0x3dc
	// Line 2428, Address: 0x29bb10, Func Offset: 0x3e0
	// Line 2429, Address: 0x29bb14, Func Offset: 0x3e4
	// Line 2430, Address: 0x29bb1c, Func Offset: 0x3ec
	// Line 2431, Address: 0x29bb24, Func Offset: 0x3f4
	// Line 2433, Address: 0x29bb28, Func Offset: 0x3f8
	// Line 2432, Address: 0x29bb2c, Func Offset: 0x3fc
	// Line 2433, Address: 0x29bb34, Func Offset: 0x404
	// Line 2432, Address: 0x29bb3c, Func Offset: 0x40c
	// Line 2433, Address: 0x29bb40, Func Offset: 0x410
	// Line 2434, Address: 0x29bb4c, Func Offset: 0x41c
	// Line 2436, Address: 0x29bb50, Func Offset: 0x420
	// Line 2437, Address: 0x29bb58, Func Offset: 0x428
	// Line 2438, Address: 0x29bb60, Func Offset: 0x430
	// Line 2439, Address: 0x29bb70, Func Offset: 0x440
	// Line 2440, Address: 0x29bb74, Func Offset: 0x444
	// Line 2441, Address: 0x29bb84, Func Offset: 0x454
	// Line 2443, Address: 0x29bb8c, Func Offset: 0x45c
	// Line 2444, Address: 0x29bb98, Func Offset: 0x468
	// Line 2445, Address: 0x29bba0, Func Offset: 0x470
	// Line 2447, Address: 0x29bba4, Func Offset: 0x474
	// Line 2449, Address: 0x29bbac, Func Offset: 0x47c
	// Line 2451, Address: 0x29bbb0, Func Offset: 0x480
	// Line 2452, Address: 0x29bbdc, Func Offset: 0x4ac
	// Line 2455, Address: 0x29bbe4, Func Offset: 0x4b4
	// Line 2453, Address: 0x29bbe8, Func Offset: 0x4b8
	// Line 2455, Address: 0x29bbf0, Func Offset: 0x4c0
	// Line 2453, Address: 0x29bbf4, Func Offset: 0x4c4
	// Line 2452, Address: 0x29bbfc, Func Offset: 0x4cc
	// Line 2455, Address: 0x29bc00, Func Offset: 0x4d0
	// Line 2457, Address: 0x29bc08, Func Offset: 0x4d8
	// Line 2458, Address: 0x29bc20, Func Offset: 0x4f0
	// Line 2459, Address: 0x29bc28, Func Offset: 0x4f8
	// Line 2460, Address: 0x29bc30, Func Offset: 0x500
	// Line 2463, Address: 0x29bc38, Func Offset: 0x508
	// Line 2464, Address: 0x29bc40, Func Offset: 0x510
	// Line 2463, Address: 0x29bc48, Func Offset: 0x518
	// Line 2464, Address: 0x29bc4c, Func Offset: 0x51c
	// Line 2465, Address: 0x29bc58, Func Offset: 0x528
	// Line 2467, Address: 0x29bc60, Func Offset: 0x530
	// Line 2466, Address: 0x29bc64, Func Offset: 0x534
	// Line 2467, Address: 0x29bc68, Func Offset: 0x538
	// Line 2469, Address: 0x29bc80, Func Offset: 0x550
	// Line 2470, Address: 0x29bc8c, Func Offset: 0x55c
	// Line 2473, Address: 0x29bc94, Func Offset: 0x564
	// Line 2474, Address: 0x29bc98, Func Offset: 0x568
	// Func End, Address: 0x29bcac, Func Offset: 0x57c
}

// 
// Start address: 0x29bcb0
void EilStandBy(sfObj* obj)
{
	int i;
	int w;
	int tw;
	float r;
	float sp;
	sgAnime* anm;
	_anon2 actions[6];
	// Line 2480, Address: 0x29bcb0, Func Offset: 0
	// Line 2504, Address: 0x29bcb4, Func Offset: 0x4
	// Line 2480, Address: 0x29bcb8, Func Offset: 0x8
	// Line 2504, Address: 0x29bcd8, Func Offset: 0x28
	// Line 2495, Address: 0x29bcdc, Func Offset: 0x2c
	// Line 2504, Address: 0x29bce0, Func Offset: 0x30
	// Line 2505, Address: 0x29bd04, Func Offset: 0x54
	// Line 2506, Address: 0x29bd08, Func Offset: 0x58
	// Line 2507, Address: 0x29bd0c, Func Offset: 0x5c
	// Line 2508, Address: 0x29bd10, Func Offset: 0x60
	// Line 2513, Address: 0x29bd18, Func Offset: 0x68
	// Line 2514, Address: 0x29bd5c, Func Offset: 0xac
	// Line 2516, Address: 0x29bd68, Func Offset: 0xb8
	// Line 2515, Address: 0x29bd6c, Func Offset: 0xbc
	// Line 2516, Address: 0x29bd70, Func Offset: 0xc0
	// Line 2514, Address: 0x29bd74, Func Offset: 0xc4
	// Line 2516, Address: 0x29bd78, Func Offset: 0xc8
	// Line 2514, Address: 0x29bd7c, Func Offset: 0xcc
	// Line 2517, Address: 0x29bd88, Func Offset: 0xd8
	// Line 2518, Address: 0x29bd90, Func Offset: 0xe0
	// Line 2520, Address: 0x29bd9c, Func Offset: 0xec
	// Line 2523, Address: 0x29bdb8, Func Offset: 0x108
	// Line 2524, Address: 0x29bdd4, Func Offset: 0x124
	// Line 2528, Address: 0x29bdec, Func Offset: 0x13c
	// Line 2529, Address: 0x29be04, Func Offset: 0x154
	// Line 2530, Address: 0x29be1c, Func Offset: 0x16c
	// Line 2532, Address: 0x29be2c, Func Offset: 0x17c
	// Line 2533, Address: 0x29be30, Func Offset: 0x180
	// Line 2535, Address: 0x29be3c, Func Offset: 0x18c
	// Line 2536, Address: 0x29be54, Func Offset: 0x1a4
	// Line 2537, Address: 0x29be74, Func Offset: 0x1c4
	// Line 2538, Address: 0x29be84, Func Offset: 0x1d4
	// Line 2537, Address: 0x29be88, Func Offset: 0x1d8
	// Line 2538, Address: 0x29be90, Func Offset: 0x1e0
	// Line 2539, Address: 0x29be94, Func Offset: 0x1e4
	// Line 2540, Address: 0x29bea0, Func Offset: 0x1f0
	// Line 2541, Address: 0x29bea4, Func Offset: 0x1f4
	// Line 2544, Address: 0x29bea8, Func Offset: 0x1f8
	// Line 2545, Address: 0x29beb4, Func Offset: 0x204
	// Line 2548, Address: 0x29bec0, Func Offset: 0x210
	// Line 2550, Address: 0x29becc, Func Offset: 0x21c
	// Line 2551, Address: 0x29bed0, Func Offset: 0x220
	// Line 2554, Address: 0x29bedc, Func Offset: 0x22c
	// Line 2555, Address: 0x29bef0, Func Offset: 0x240
	// Line 2557, Address: 0x29bef8, Func Offset: 0x248
	// Line 2558, Address: 0x29bf10, Func Offset: 0x260
	// Line 2559, Address: 0x29bf34, Func Offset: 0x284
	// Line 2561, Address: 0x29bf38, Func Offset: 0x288
	// Line 2563, Address: 0x29bf44, Func Offset: 0x294
	// Line 2564, Address: 0x29bf4c, Func Offset: 0x29c
	// Line 2565, Address: 0x29bf50, Func Offset: 0x2a0
	// Line 2568, Address: 0x29bf58, Func Offset: 0x2a8
	// Func End, Address: 0x29bf80, Func Offset: 0x2d0
}

// 
// Start address: 0x29bf80
void EilBreath(sfObj* obj)
{
	sgAnime* anm;
	int breath_type;
	int action_type;
	// Line 2573, Address: 0x29bf80, Func Offset: 0
	// Line 2579, Address: 0x29bf84, Func Offset: 0x4
	// Line 2573, Address: 0x29bf88, Func Offset: 0x8
	// Line 2579, Address: 0x29bf9c, Func Offset: 0x1c
	// Line 2574, Address: 0x29bfa0, Func Offset: 0x20
	// Line 2579, Address: 0x29bfa4, Func Offset: 0x24
	// Line 2581, Address: 0x29bfc8, Func Offset: 0x48
	// Line 2582, Address: 0x29bfcc, Func Offset: 0x4c
	// Line 2583, Address: 0x29bfd0, Func Offset: 0x50
	// Line 2586, Address: 0x29bfd8, Func Offset: 0x58
	// Line 2585, Address: 0x29bfdc, Func Offset: 0x5c
	// Line 2589, Address: 0x29bfe0, Func Offset: 0x60
	// Line 2590, Address: 0x29bfec, Func Offset: 0x6c
	// Line 2591, Address: 0x29bff4, Func Offset: 0x74
	// Line 2592, Address: 0x29bffc, Func Offset: 0x7c
	// Line 2594, Address: 0x29c000, Func Offset: 0x80
	// Line 2595, Address: 0x29c00c, Func Offset: 0x8c
	// Line 2596, Address: 0x29c010, Func Offset: 0x90
	// Line 2597, Address: 0x29c01c, Func Offset: 0x9c
	// Line 2598, Address: 0x29c020, Func Offset: 0xa0
	// Line 2599, Address: 0x29c024, Func Offset: 0xa4
	// Line 2602, Address: 0x29c028, Func Offset: 0xa8
	// Line 2603, Address: 0x29c034, Func Offset: 0xb4
	// Line 2604, Address: 0x29c040, Func Offset: 0xc0
	// Line 2605, Address: 0x29c054, Func Offset: 0xd4
	// Line 2606, Address: 0x29c05c, Func Offset: 0xdc
	// Line 2607, Address: 0x29c06c, Func Offset: 0xec
	// Line 2608, Address: 0x29c084, Func Offset: 0x104
	// Line 2609, Address: 0x29c088, Func Offset: 0x108
	// Line 2611, Address: 0x29c094, Func Offset: 0x114
	// Line 2612, Address: 0x29c098, Func Offset: 0x118
	// Line 2614, Address: 0x29c09c, Func Offset: 0x11c
	// Line 2615, Address: 0x29c0ac, Func Offset: 0x12c
	// Line 2616, Address: 0x29c0b8, Func Offset: 0x138
	// Line 2617, Address: 0x29c0c0, Func Offset: 0x140
	// Line 2620, Address: 0x29c0d0, Func Offset: 0x150
	// Line 2621, Address: 0x29c0e0, Func Offset: 0x160
	// Line 2622, Address: 0x29c0ec, Func Offset: 0x16c
	// Line 2621, Address: 0x29c0f4, Func Offset: 0x174
	// Line 2622, Address: 0x29c0f8, Func Offset: 0x178
	// Line 2623, Address: 0x29c104, Func Offset: 0x184
	// Line 2627, Address: 0x29c110, Func Offset: 0x190
	// Line 2628, Address: 0x29c120, Func Offset: 0x1a0
	// Line 2632, Address: 0x29c130, Func Offset: 0x1b0
	// Line 2634, Address: 0x29c138, Func Offset: 0x1b8
	// Line 2637, Address: 0x29c140, Func Offset: 0x1c0
	// Func End, Address: 0x29c15c, Func Offset: 0x1dc
}

// 
// Start address: 0x29c160
void EilHenryDead(sfObj* obj)
{
	// Line 2642, Address: 0x29c160, Func Offset: 0
	// Line 2643, Address: 0x29c174, Func Offset: 0x14
	// Line 2646, Address: 0x29c178, Func Offset: 0x18
	// Line 2648, Address: 0x29c180, Func Offset: 0x20
	// Line 2650, Address: 0x29c1a0, Func Offset: 0x40
	// Line 2651, Address: 0x29c1a4, Func Offset: 0x44
	// Line 2652, Address: 0x29c1a8, Func Offset: 0x48
	// Line 2654, Address: 0x29c1b0, Func Offset: 0x50
	// Line 2655, Address: 0x29c1b8, Func Offset: 0x58
	// Line 2660, Address: 0x29c1c4, Func Offset: 0x64
	// Line 2661, Address: 0x29c1c8, Func Offset: 0x68
	// Func End, Address: 0x29c1dc, Func Offset: 0x7c
}

// 
// Start address: 0x29c1e0
void EilEquip(sfObj* obj)
{
	sgAnime* anm;
	// Line 2667, Address: 0x29c1e0, Func Offset: 0
	// Line 2672, Address: 0x29c1e4, Func Offset: 0x4
	// Line 2667, Address: 0x29c1e8, Func Offset: 0x8
	// Line 2672, Address: 0x29c1f8, Func Offset: 0x18
	// Line 2668, Address: 0x29c1fc, Func Offset: 0x1c
	// Line 2672, Address: 0x29c200, Func Offset: 0x20
	// Line 2673, Address: 0x29c22c, Func Offset: 0x4c
	// Line 2674, Address: 0x29c230, Func Offset: 0x50
	// Line 2675, Address: 0x29c234, Func Offset: 0x54
	// Line 2676, Address: 0x29c238, Func Offset: 0x58
	// Line 2678, Address: 0x29c240, Func Offset: 0x60
	// Line 2679, Address: 0x29c248, Func Offset: 0x68
	// Line 2680, Address: 0x29c250, Func Offset: 0x70
	// Line 2682, Address: 0x29c258, Func Offset: 0x78
	// Line 2683, Address: 0x29c260, Func Offset: 0x80
	// Line 2685, Address: 0x29c274, Func Offset: 0x94
	// Line 2686, Address: 0x29c27c, Func Offset: 0x9c
	// Line 2687, Address: 0x29c288, Func Offset: 0xa8
	// Line 2690, Address: 0x29c290, Func Offset: 0xb0
	// Line 2691, Address: 0x29c29c, Func Offset: 0xbc
	// Line 2692, Address: 0x29c2a8, Func Offset: 0xc8
	// Line 2693, Address: 0x29c2b4, Func Offset: 0xd4
	// Line 2694, Address: 0x29c2c0, Func Offset: 0xe0
	// Line 2695, Address: 0x29c2cc, Func Offset: 0xec
	// Line 2697, Address: 0x29c2d8, Func Offset: 0xf8
	// Line 2698, Address: 0x29c2dc, Func Offset: 0xfc
	// Line 2700, Address: 0x29c2e8, Func Offset: 0x108
	// Line 2702, Address: 0x29c2f4, Func Offset: 0x114
	// Line 2703, Address: 0x29c2fc, Func Offset: 0x11c
	// Line 2704, Address: 0x29c300, Func Offset: 0x120
	// Line 2707, Address: 0x29c308, Func Offset: 0x128
	// Func End, Address: 0x29c320, Func Offset: 0x140
}

// 
// Start address: 0x29c320
void EilAttack(sfObj* obj)
{
	sgAnime* anm;
	// Line 2715, Address: 0x29c320, Func Offset: 0
	// Line 2716, Address: 0x29c338, Func Offset: 0x18
	// Line 2718, Address: 0x29c33c, Func Offset: 0x1c
	// Line 2720, Address: 0x29c344, Func Offset: 0x24
	// Line 2718, Address: 0x29c348, Func Offset: 0x28
	// Line 2720, Address: 0x29c34c, Func Offset: 0x2c
	// Line 2721, Address: 0x29c384, Func Offset: 0x64
	// Line 2722, Address: 0x29c388, Func Offset: 0x68
	// Line 2723, Address: 0x29c38c, Func Offset: 0x6c
	// Line 2724, Address: 0x29c390, Func Offset: 0x70
	// Line 2725, Address: 0x29c398, Func Offset: 0x78
	// Line 2726, Address: 0x29c3a4, Func Offset: 0x84
	// Line 2728, Address: 0x29c3b8, Func Offset: 0x98
	// Line 2730, Address: 0x29c3c0, Func Offset: 0xa0
	// Line 2731, Address: 0x29c3d0, Func Offset: 0xb0
	// Line 2733, Address: 0x29c3e0, Func Offset: 0xc0
	// Line 2734, Address: 0x29c3f0, Func Offset: 0xd0
	// Line 2735, Address: 0x29c3fc, Func Offset: 0xdc
	// Line 2737, Address: 0x29c408, Func Offset: 0xe8
	// Line 2738, Address: 0x29c41c, Func Offset: 0xfc
	// Line 2739, Address: 0x29c428, Func Offset: 0x108
	// Line 2740, Address: 0x29c430, Func Offset: 0x110
	// Line 2743, Address: 0x29c43c, Func Offset: 0x11c
	// Line 2744, Address: 0x29c440, Func Offset: 0x120
	// Line 2745, Address: 0x29c454, Func Offset: 0x134
	// Line 2746, Address: 0x29c45c, Func Offset: 0x13c
	// Line 2750, Address: 0x29c468, Func Offset: 0x148
	// Line 2751, Address: 0x29c47c, Func Offset: 0x15c
	// Line 2753, Address: 0x29c480, Func Offset: 0x160
	// Line 2755, Address: 0x29c48c, Func Offset: 0x16c
	// Line 2756, Address: 0x29c494, Func Offset: 0x174
	// Line 2757, Address: 0x29c498, Func Offset: 0x178
	// Line 2758, Address: 0x29c4a0, Func Offset: 0x180
	// Line 2762, Address: 0x29c4a8, Func Offset: 0x188
	// Line 2764, Address: 0x29c4b0, Func Offset: 0x190
	// Line 2766, Address: 0x29c4b8, Func Offset: 0x198
	// Line 2767, Address: 0x29c4c8, Func Offset: 0x1a8
	// Line 2768, Address: 0x29c4d0, Func Offset: 0x1b0
	// Func End, Address: 0x29c4e8, Func Offset: 0x1c8
}

// 
// Start address: 0x29c4f0
void EilMiddleAttack(sfObj* obj)
{
	sgAnime* anm;
	// Line 2776, Address: 0x29c4f0, Func Offset: 0
	// Line 2777, Address: 0x29c508, Func Offset: 0x18
	// Line 2779, Address: 0x29c50c, Func Offset: 0x1c
	// Line 2781, Address: 0x29c514, Func Offset: 0x24
	// Line 2779, Address: 0x29c518, Func Offset: 0x28
	// Line 2781, Address: 0x29c51c, Func Offset: 0x2c
	// Line 2782, Address: 0x29c554, Func Offset: 0x64
	// Line 2783, Address: 0x29c558, Func Offset: 0x68
	// Line 2784, Address: 0x29c55c, Func Offset: 0x6c
	// Line 2785, Address: 0x29c560, Func Offset: 0x70
	// Line 2786, Address: 0x29c568, Func Offset: 0x78
	// Line 2787, Address: 0x29c574, Func Offset: 0x84
	// Line 2789, Address: 0x29c588, Func Offset: 0x98
	// Line 2791, Address: 0x29c590, Func Offset: 0xa0
	// Line 2792, Address: 0x29c59c, Func Offset: 0xac
	// Line 2793, Address: 0x29c5a8, Func Offset: 0xb8
	// Line 2794, Address: 0x29c5b4, Func Offset: 0xc4
	// Line 2795, Address: 0x29c5b8, Func Offset: 0xc8
	// Line 2796, Address: 0x29c5cc, Func Offset: 0xdc
	// Line 2797, Address: 0x29c5d8, Func Offset: 0xe8
	// Line 2798, Address: 0x29c5e0, Func Offset: 0xf0
	// Line 2801, Address: 0x29c5ec, Func Offset: 0xfc
	// Line 2802, Address: 0x29c5f0, Func Offset: 0x100
	// Line 2803, Address: 0x29c604, Func Offset: 0x114
	// Line 2804, Address: 0x29c60c, Func Offset: 0x11c
	// Line 2808, Address: 0x29c618, Func Offset: 0x128
	// Line 2809, Address: 0x29c62c, Func Offset: 0x13c
	// Line 2811, Address: 0x29c630, Func Offset: 0x140
	// Line 2813, Address: 0x29c63c, Func Offset: 0x14c
	// Line 2814, Address: 0x29c644, Func Offset: 0x154
	// Line 2815, Address: 0x29c648, Func Offset: 0x158
	// Line 2816, Address: 0x29c650, Func Offset: 0x160
	// Line 2820, Address: 0x29c658, Func Offset: 0x168
	// Line 2822, Address: 0x29c660, Func Offset: 0x170
	// Line 2824, Address: 0x29c668, Func Offset: 0x178
	// Line 2825, Address: 0x29c678, Func Offset: 0x188
	// Line 2826, Address: 0x29c680, Func Offset: 0x190
	// Func End, Address: 0x29c698, Func Offset: 0x1a8
}

// 
// Start address: 0x29c6a0
void EilLowerAttack(sfObj* obj)
{
	sgAnime* anm;
	// Line 2834, Address: 0x29c6a0, Func Offset: 0
	// Line 2835, Address: 0x29c6b8, Func Offset: 0x18
	// Line 2837, Address: 0x29c6bc, Func Offset: 0x1c
	// Line 2839, Address: 0x29c6c4, Func Offset: 0x24
	// Line 2837, Address: 0x29c6c8, Func Offset: 0x28
	// Line 2839, Address: 0x29c6cc, Func Offset: 0x2c
	// Line 2840, Address: 0x29c704, Func Offset: 0x64
	// Line 2841, Address: 0x29c708, Func Offset: 0x68
	// Line 2842, Address: 0x29c70c, Func Offset: 0x6c
	// Line 2843, Address: 0x29c710, Func Offset: 0x70
	// Line 2844, Address: 0x29c718, Func Offset: 0x78
	// Line 2845, Address: 0x29c724, Func Offset: 0x84
	// Line 2847, Address: 0x29c738, Func Offset: 0x98
	// Line 2849, Address: 0x29c740, Func Offset: 0xa0
	// Line 2850, Address: 0x29c74c, Func Offset: 0xac
	// Line 2851, Address: 0x29c758, Func Offset: 0xb8
	// Line 2852, Address: 0x29c764, Func Offset: 0xc4
	// Line 2853, Address: 0x29c768, Func Offset: 0xc8
	// Line 2854, Address: 0x29c77c, Func Offset: 0xdc
	// Line 2855, Address: 0x29c788, Func Offset: 0xe8
	// Line 2856, Address: 0x29c790, Func Offset: 0xf0
	// Line 2859, Address: 0x29c79c, Func Offset: 0xfc
	// Line 2860, Address: 0x29c7a0, Func Offset: 0x100
	// Line 2861, Address: 0x29c7b4, Func Offset: 0x114
	// Line 2862, Address: 0x29c7bc, Func Offset: 0x11c
	// Line 2866, Address: 0x29c7c8, Func Offset: 0x128
	// Line 2867, Address: 0x29c7dc, Func Offset: 0x13c
	// Line 2869, Address: 0x29c7e0, Func Offset: 0x140
	// Line 2871, Address: 0x29c7ec, Func Offset: 0x14c
	// Line 2872, Address: 0x29c7f4, Func Offset: 0x154
	// Line 2873, Address: 0x29c7f8, Func Offset: 0x158
	// Line 2874, Address: 0x29c800, Func Offset: 0x160
	// Line 2878, Address: 0x29c808, Func Offset: 0x168
	// Line 2880, Address: 0x29c810, Func Offset: 0x170
	// Line 2882, Address: 0x29c818, Func Offset: 0x178
	// Line 2883, Address: 0x29c828, Func Offset: 0x188
	// Line 2884, Address: 0x29c830, Func Offset: 0x190
	// Func End, Address: 0x29c848, Func Offset: 0x1a8
}

// 
// Start address: 0x29c850
void EilAttackSpecial(sfObj* obj)
{
	sgAnime* anm;
	// Line 2896, Address: 0x29c850, Func Offset: 0
	// Line 2897, Address: 0x29c868, Func Offset: 0x18
	// Line 2899, Address: 0x29c86c, Func Offset: 0x1c
	// Line 2901, Address: 0x29c874, Func Offset: 0x24
	// Line 2903, Address: 0x29c8a0, Func Offset: 0x50
	// Line 2904, Address: 0x29c8a4, Func Offset: 0x54
	// Line 2906, Address: 0x29c8a8, Func Offset: 0x58
	// Line 2904, Address: 0x29c8ac, Func Offset: 0x5c
	// Line 2905, Address: 0x29c8b0, Func Offset: 0x60
	// Line 2906, Address: 0x29c8b8, Func Offset: 0x68
	// Line 2907, Address: 0x29c8c4, Func Offset: 0x74
	// Line 2909, Address: 0x29c8d8, Func Offset: 0x88
	// Line 2911, Address: 0x29c8e0, Func Offset: 0x90
	// Line 2912, Address: 0x29c8f0, Func Offset: 0xa0
	// Line 2914, Address: 0x29c900, Func Offset: 0xb0
	// Line 2915, Address: 0x29c910, Func Offset: 0xc0
	// Line 2916, Address: 0x29c918, Func Offset: 0xc8
	// Line 2917, Address: 0x29c920, Func Offset: 0xd0
	// Line 2919, Address: 0x29c928, Func Offset: 0xd8
	// Line 2920, Address: 0x29c93c, Func Offset: 0xec
	// Line 2921, Address: 0x29c948, Func Offset: 0xf8
	// Line 2922, Address: 0x29c950, Func Offset: 0x100
	// Line 2924, Address: 0x29c95c, Func Offset: 0x10c
	// Line 2925, Address: 0x29c960, Func Offset: 0x110
	// Line 2926, Address: 0x29c974, Func Offset: 0x124
	// Line 2927, Address: 0x29c97c, Func Offset: 0x12c
	// Line 2930, Address: 0x29c988, Func Offset: 0x138
	// Line 2931, Address: 0x29c99c, Func Offset: 0x14c
	// Line 2932, Address: 0x29c9a8, Func Offset: 0x158
	// Line 2933, Address: 0x29c9b0, Func Offset: 0x160
	// Line 2935, Address: 0x29c9bc, Func Offset: 0x16c
	// Line 2936, Address: 0x29c9c0, Func Offset: 0x170
	// Line 2937, Address: 0x29c9d4, Func Offset: 0x184
	// Line 2938, Address: 0x29c9dc, Func Offset: 0x18c
	// Line 2941, Address: 0x29c9e8, Func Offset: 0x198
	// Line 2942, Address: 0x29c9fc, Func Offset: 0x1ac
	// Line 2943, Address: 0x29ca08, Func Offset: 0x1b8
	// Line 2944, Address: 0x29ca10, Func Offset: 0x1c0
	// Line 2946, Address: 0x29ca1c, Func Offset: 0x1cc
	// Line 2947, Address: 0x29ca20, Func Offset: 0x1d0
	// Line 2948, Address: 0x29ca34, Func Offset: 0x1e4
	// Line 2949, Address: 0x29ca3c, Func Offset: 0x1ec
	// Line 2952, Address: 0x29ca48, Func Offset: 0x1f8
	// Line 2953, Address: 0x29ca5c, Func Offset: 0x20c
	// Line 2955, Address: 0x29ca60, Func Offset: 0x210
	// Line 2957, Address: 0x29ca6c, Func Offset: 0x21c
	// Line 2958, Address: 0x29ca74, Func Offset: 0x224
	// Line 2959, Address: 0x29ca78, Func Offset: 0x228
	// Line 2960, Address: 0x29ca80, Func Offset: 0x230
	// Line 2964, Address: 0x29ca88, Func Offset: 0x238
	// Line 2965, Address: 0x29ca98, Func Offset: 0x248
	// Line 2966, Address: 0x29caa0, Func Offset: 0x250
	// Line 2967, Address: 0x29caa8, Func Offset: 0x258
	// Func End, Address: 0x29cac0, Func Offset: 0x270
}

// 
// Start address: 0x29cac0
void EilAttackFinish(sfObj* obj)
{
	sgAnime* anm;
	// Line 2978, Address: 0x29cac0, Func Offset: 0
	// Line 2979, Address: 0x29cad8, Func Offset: 0x18
	// Line 2981, Address: 0x29cadc, Func Offset: 0x1c
	// Line 2983, Address: 0x29cae8, Func Offset: 0x28
	// Line 2985, Address: 0x29cb10, Func Offset: 0x50
	// Line 2986, Address: 0x29cb14, Func Offset: 0x54
	// Line 2988, Address: 0x29cb18, Func Offset: 0x58
	// Line 2986, Address: 0x29cb1c, Func Offset: 0x5c
	// Line 2987, Address: 0x29cb20, Func Offset: 0x60
	// Line 2988, Address: 0x29cb28, Func Offset: 0x68
	// Line 2989, Address: 0x29cb34, Func Offset: 0x74
	// Line 2991, Address: 0x29cb48, Func Offset: 0x88
	// Line 2993, Address: 0x29cb50, Func Offset: 0x90
	// Line 2994, Address: 0x29cb60, Func Offset: 0xa0
	// Line 2996, Address: 0x29cb70, Func Offset: 0xb0
	// Line 2997, Address: 0x29cb80, Func Offset: 0xc0
	// Line 2998, Address: 0x29cb88, Func Offset: 0xc8
	// Line 2999, Address: 0x29cb90, Func Offset: 0xd0
	// Line 3001, Address: 0x29cb98, Func Offset: 0xd8
	// Line 3002, Address: 0x29cbac, Func Offset: 0xec
	// Line 3003, Address: 0x29cbb8, Func Offset: 0xf8
	// Line 3004, Address: 0x29cbc0, Func Offset: 0x100
	// Line 3007, Address: 0x29cbcc, Func Offset: 0x10c
	// Line 3008, Address: 0x29cbd0, Func Offset: 0x110
	// Line 3009, Address: 0x29cbe4, Func Offset: 0x124
	// Line 3010, Address: 0x29cbec, Func Offset: 0x12c
	// Line 3013, Address: 0x29cbf8, Func Offset: 0x138
	// Line 3014, Address: 0x29cc0c, Func Offset: 0x14c
	// Line 3015, Address: 0x29cc18, Func Offset: 0x158
	// Line 3016, Address: 0x29cc20, Func Offset: 0x160
	// Line 3019, Address: 0x29cc2c, Func Offset: 0x16c
	// Line 3020, Address: 0x29cc30, Func Offset: 0x170
	// Line 3021, Address: 0x29cc44, Func Offset: 0x184
	// Line 3022, Address: 0x29cc4c, Func Offset: 0x18c
	// Line 3024, Address: 0x29cc58, Func Offset: 0x198
	// Line 3025, Address: 0x29cc6c, Func Offset: 0x1ac
	// Line 3027, Address: 0x29cc70, Func Offset: 0x1b0
	// Line 3028, Address: 0x29cc7c, Func Offset: 0x1bc
	// Line 3029, Address: 0x29cc84, Func Offset: 0x1c4
	// Line 3030, Address: 0x29cc8c, Func Offset: 0x1cc
	// Line 3031, Address: 0x29cc90, Func Offset: 0x1d0
	// Line 3035, Address: 0x29cc98, Func Offset: 0x1d8
	// Line 3038, Address: 0x29cca0, Func Offset: 0x1e0
	// Line 3041, Address: 0x29cca8, Func Offset: 0x1e8
	// Line 3042, Address: 0x29ccb8, Func Offset: 0x1f8
	// Line 3043, Address: 0x29ccc0, Func Offset: 0x200
	// Func End, Address: 0x29ccd8, Func Offset: 0x218
}

// 
// Start address: 0x29cce0
void EilGunAttack(sfObj* obj)
{
	_anon0* eil;
	float r;
	// Line 3051, Address: 0x29cce0, Func Offset: 0
	// Line 3057, Address: 0x29ccf0, Func Offset: 0x10
	// Line 3052, Address: 0x29ccf4, Func Offset: 0x14
	// Line 3057, Address: 0x29ccf8, Func Offset: 0x18
	// Line 3059, Address: 0x29cd20, Func Offset: 0x40
	// Line 3060, Address: 0x29cd24, Func Offset: 0x44
	// Line 3062, Address: 0x29cd28, Func Offset: 0x48
	// Line 3060, Address: 0x29cd2c, Func Offset: 0x4c
	// Line 3061, Address: 0x29cd30, Func Offset: 0x50
	// Line 3062, Address: 0x29cd38, Func Offset: 0x58
	// Line 3063, Address: 0x29cd44, Func Offset: 0x64
	// Line 3065, Address: 0x29cd58, Func Offset: 0x78
	// Line 3067, Address: 0x29cd60, Func Offset: 0x80
	// Line 3070, Address: 0x29cd70, Func Offset: 0x90
	// Line 3072, Address: 0x29cd7c, Func Offset: 0x9c
	// Line 3074, Address: 0x29cd88, Func Offset: 0xa8
	// Line 3080, Address: 0x29cd94, Func Offset: 0xb4
	// Line 3081, Address: 0x29cda8, Func Offset: 0xc8
	// Line 3083, Address: 0x29cdb4, Func Offset: 0xd4
	// Line 3085, Address: 0x29cdb8, Func Offset: 0xd8
	// Line 3086, Address: 0x29cdc4, Func Offset: 0xe4
	// Line 3087, Address: 0x29cdd0, Func Offset: 0xf0
	// Line 3088, Address: 0x29cdd8, Func Offset: 0xf8
	// Line 3090, Address: 0x29cde4, Func Offset: 0x104
	// Line 3091, Address: 0x29cde8, Func Offset: 0x108
	// Line 3092, Address: 0x29cdf4, Func Offset: 0x114
	// Line 3093, Address: 0x29cdfc, Func Offset: 0x11c
	// Line 3094, Address: 0x29ce00, Func Offset: 0x120
	// Line 3096, Address: 0x29ce08, Func Offset: 0x128
	// Line 3097, Address: 0x29ce1c, Func Offset: 0x13c
	// Line 3099, Address: 0x29ce30, Func Offset: 0x150
	// Line 3100, Address: 0x29ce38, Func Offset: 0x158
	// Line 3104, Address: 0x29ce40, Func Offset: 0x160
	// Line 3105, Address: 0x29ce4c, Func Offset: 0x16c
	// Line 3106, Address: 0x29ce58, Func Offset: 0x178
	// Line 3108, Address: 0x29ce60, Func Offset: 0x180
	// Line 3111, Address: 0x29ce78, Func Offset: 0x198
	// Line 3112, Address: 0x29ce84, Func Offset: 0x1a4
	// Line 3114, Address: 0x29ce88, Func Offset: 0x1a8
	// Line 3112, Address: 0x29ce8c, Func Offset: 0x1ac
	// Line 3114, Address: 0x29ce90, Func Offset: 0x1b0
	// Line 3115, Address: 0x29cea8, Func Offset: 0x1c8
	// Line 3118, Address: 0x29ceb0, Func Offset: 0x1d0
	// Line 3119, Address: 0x29cebc, Func Offset: 0x1dc
	// Line 3123, Address: 0x29cec0, Func Offset: 0x1e0
	// Line 3125, Address: 0x29cecc, Func Offset: 0x1ec
	// Line 3126, Address: 0x29ced4, Func Offset: 0x1f4
	// Line 3128, Address: 0x29ced8, Func Offset: 0x1f8
	// Line 3129, Address: 0x29cee4, Func Offset: 0x204
	// Line 3130, Address: 0x29cef0, Func Offset: 0x210
	// Line 3132, Address: 0x29cef8, Func Offset: 0x218
	// Line 3134, Address: 0x29cefc, Func Offset: 0x21c
	// Line 3136, Address: 0x29cf04, Func Offset: 0x224
	// Line 3138, Address: 0x29cf08, Func Offset: 0x228
	// Line 3139, Address: 0x29cf10, Func Offset: 0x230
	// Line 3140, Address: 0x29cf1c, Func Offset: 0x23c
	// Line 3143, Address: 0x29cf28, Func Offset: 0x248
	// Line 3146, Address: 0x29cf34, Func Offset: 0x254
	// Line 3148, Address: 0x29cf3c, Func Offset: 0x25c
	// Line 3149, Address: 0x29cf40, Func Offset: 0x260
	// Func End, Address: 0x29cf54, Func Offset: 0x274
}

// 
// Start address: 0x29cf60
void EilTalk(sfObj* obj)
{
	_anon0* eil;
	sgAnime* anm;
	int anm_type;
	float f;
	int talk_anime[4];
	// Line 3158, Address: 0x29cf60, Func Offset: 0
	// Line 3171, Address: 0x29cf64, Func Offset: 0x4
	// Line 3158, Address: 0x29cf68, Func Offset: 0x8
	// Line 3165, Address: 0x29cf78, Func Offset: 0x18
	// Line 3171, Address: 0x29cf7c, Func Offset: 0x1c
	// Line 3172, Address: 0x29cf90, Func Offset: 0x30
	// Line 3174, Address: 0x29cf98, Func Offset: 0x38
	// Line 3175, Address: 0x29cfd4, Func Offset: 0x74
	// Line 3176, Address: 0x29cfd8, Func Offset: 0x78
	// Line 3177, Address: 0x29cfdc, Func Offset: 0x7c
	// Line 3180, Address: 0x29cfe0, Func Offset: 0x80
	// Line 3181, Address: 0x29cfec, Func Offset: 0x8c
	// Line 3182, Address: 0x29cffc, Func Offset: 0x9c
	// Line 3183, Address: 0x29d000, Func Offset: 0xa0
	// Line 3186, Address: 0x29d008, Func Offset: 0xa8
	// Line 3187, Address: 0x29d010, Func Offset: 0xb0
	// Line 3188, Address: 0x29d028, Func Offset: 0xc8
	// Line 3189, Address: 0x29d038, Func Offset: 0xd8
	// Line 3191, Address: 0x29d044, Func Offset: 0xe4
	// Line 3192, Address: 0x29d048, Func Offset: 0xe8
	// Line 3193, Address: 0x29d058, Func Offset: 0xf8
	// Line 3194, Address: 0x29d064, Func Offset: 0x104
	// Line 3193, Address: 0x29d068, Func Offset: 0x108
	// Line 3194, Address: 0x29d06c, Func Offset: 0x10c
	// Line 3195, Address: 0x29d084, Func Offset: 0x124
	// Line 3196, Address: 0x29d08c, Func Offset: 0x12c
	// Line 3197, Address: 0x29d098, Func Offset: 0x138
	// Line 3196, Address: 0x29d09c, Func Offset: 0x13c
	// Line 3197, Address: 0x29d0b0, Func Offset: 0x150
	// Line 3198, Address: 0x29d0b8, Func Offset: 0x158
	// Line 3200, Address: 0x29d0c0, Func Offset: 0x160
	// Line 3203, Address: 0x29d0c8, Func Offset: 0x168
	// Line 3204, Address: 0x29d0d4, Func Offset: 0x174
	// Line 3205, Address: 0x29d0dc, Func Offset: 0x17c
	// Line 3207, Address: 0x29d0e4, Func Offset: 0x184
	// Line 3212, Address: 0x29d0ec, Func Offset: 0x18c
	// Line 3213, Address: 0x29d0f0, Func Offset: 0x190
	// Line 3216, Address: 0x29d0f8, Func Offset: 0x198
	// Func End, Address: 0x29d10c, Func Offset: 0x1ac
}

// 
// Start address: 0x29d110
void EilInsane(sfObj* obj)
{
	_anon0* eil;
	int insane_type;
	int i;
	sgAnime* anm;
	int fr;
	_anon17 insane_motions[3];
	int ses[4];
	// Line 3224, Address: 0x29d110, Func Offset: 0
	// Line 3242, Address: 0x29d114, Func Offset: 0x4
	// Line 3224, Address: 0x29d118, Func Offset: 0x8
	// Line 3242, Address: 0x29d124, Func Offset: 0x14
	// Line 3236, Address: 0x29d128, Func Offset: 0x18
	// Line 3242, Address: 0x29d12c, Func Offset: 0x1c
	// Line 3244, Address: 0x29d158, Func Offset: 0x48
	// Line 3245, Address: 0x29d15c, Func Offset: 0x4c
	// Line 3246, Address: 0x29d160, Func Offset: 0x50
	// Line 3247, Address: 0x29d168, Func Offset: 0x58
	// Line 3249, Address: 0x29d188, Func Offset: 0x78
	// Line 3247, Address: 0x29d18c, Func Offset: 0x7c
	// Line 3249, Address: 0x29d190, Func Offset: 0x80
	// Line 3247, Address: 0x29d194, Func Offset: 0x84
	// Line 3248, Address: 0x29d198, Func Offset: 0x88
	// Line 3249, Address: 0x29d1a4, Func Offset: 0x94
	// Line 3251, Address: 0x29d1c0, Func Offset: 0xb0
	// Line 3252, Address: 0x29d1cc, Func Offset: 0xbc
	// Line 3253, Address: 0x29d1dc, Func Offset: 0xcc
	// Line 3254, Address: 0x29d1e8, Func Offset: 0xd8
	// Line 3256, Address: 0x29d1f4, Func Offset: 0xe4
	// Line 3257, Address: 0x29d1f8, Func Offset: 0xe8
	// Line 3258, Address: 0x29d208, Func Offset: 0xf8
	// Line 3259, Address: 0x29d210, Func Offset: 0x100
	// Line 3267, Address: 0x29d218, Func Offset: 0x108
	// Line 3268, Address: 0x29d224, Func Offset: 0x114
	// Line 3269, Address: 0x29d234, Func Offset: 0x124
	// Line 3270, Address: 0x29d240, Func Offset: 0x130
	// Line 3271, Address: 0x29d25c, Func Offset: 0x14c
	// Line 3277, Address: 0x29d270, Func Offset: 0x160
	// Line 3279, Address: 0x29d278, Func Offset: 0x168
	// Line 3282, Address: 0x29d284, Func Offset: 0x174
	// Line 3283, Address: 0x29d2a4, Func Offset: 0x194
	// Line 3285, Address: 0x29d2ac, Func Offset: 0x19c
	// Line 3286, Address: 0x29d2b4, Func Offset: 0x1a4
	// Line 3288, Address: 0x29d2b8, Func Offset: 0x1a8
	// Line 3290, Address: 0x29d2c0, Func Offset: 0x1b0
	// Line 3292, Address: 0x29d2c8, Func Offset: 0x1b8
	// Line 3293, Address: 0x29d2d8, Func Offset: 0x1c8
	// Line 3295, Address: 0x29d2e8, Func Offset: 0x1d8
	// Line 3297, Address: 0x29d2f4, Func Offset: 0x1e4
	// Line 3299, Address: 0x29d2f8, Func Offset: 0x1e8
	// Line 3302, Address: 0x29d300, Func Offset: 0x1f0
	// Line 3303, Address: 0x29d30c, Func Offset: 0x1fc
	// Line 3304, Address: 0x29d31c, Func Offset: 0x20c
	// Line 3305, Address: 0x29d330, Func Offset: 0x220
	// Line 3307, Address: 0x29d340, Func Offset: 0x230
	// Line 3308, Address: 0x29d350, Func Offset: 0x240
	// Line 3310, Address: 0x29d364, Func Offset: 0x254
	// Line 3313, Address: 0x29d368, Func Offset: 0x258
	// Line 3314, Address: 0x29d380, Func Offset: 0x270
	// Line 3315, Address: 0x29d3a4, Func Offset: 0x294
	// Line 3316, Address: 0x29d3ac, Func Offset: 0x29c
	// Line 3317, Address: 0x29d3b8, Func Offset: 0x2a8
	// Line 3318, Address: 0x29d3c8, Func Offset: 0x2b8
	// Line 3319, Address: 0x29d3d8, Func Offset: 0x2c8
	// Line 3320, Address: 0x29d3e8, Func Offset: 0x2d8
	// Line 3322, Address: 0x29d3f0, Func Offset: 0x2e0
	// Line 3325, Address: 0x29d3f8, Func Offset: 0x2e8
	// Line 3328, Address: 0x29d404, Func Offset: 0x2f4
	// Line 3330, Address: 0x29d40c, Func Offset: 0x2fc
	// Line 3331, Address: 0x29d410, Func Offset: 0x300
	// Func End, Address: 0x29d424, Func Offset: 0x314
}

// 
// Start address: 0x29d430
void EilDown(sfObj* obj)
{
	_anon0* eil;
	sgAnime* anm;
	// Line 3337, Address: 0x29d430, Func Offset: 0
	// Line 3338, Address: 0x29d444, Func Offset: 0x14
	// Line 3343, Address: 0x29d448, Func Offset: 0x18
	// Line 3345, Address: 0x29d450, Func Offset: 0x20
	// Line 3346, Address: 0x29d48c, Func Offset: 0x5c
	// Line 3347, Address: 0x29d490, Func Offset: 0x60
	// Line 3348, Address: 0x29d494, Func Offset: 0x64
	// Line 3349, Address: 0x29d498, Func Offset: 0x68
	// Line 3355, Address: 0x29d4a0, Func Offset: 0x70
	// Line 3352, Address: 0x29d4a4, Func Offset: 0x74
	// Line 3355, Address: 0x29d4a8, Func Offset: 0x78
	// Line 3359, Address: 0x29d4b8, Func Offset: 0x88
	// Line 3360, Address: 0x29d4c4, Func Offset: 0x94
	// Line 3361, Address: 0x29d4d0, Func Offset: 0xa0
	// Line 3362, Address: 0x29d4dc, Func Offset: 0xac
	// Line 3364, Address: 0x29d4e8, Func Offset: 0xb8
	// Line 3367, Address: 0x29d4f0, Func Offset: 0xc0
	// Line 3369, Address: 0x29d4f8, Func Offset: 0xc8
	// Line 3368, Address: 0x29d4fc, Func Offset: 0xcc
	// Line 3369, Address: 0x29d500, Func Offset: 0xd0
	// Line 3370, Address: 0x29d508, Func Offset: 0xd8
	// Line 3371, Address: 0x29d51c, Func Offset: 0xec
	// Line 3373, Address: 0x29d520, Func Offset: 0xf0
	// Line 3376, Address: 0x29d52c, Func Offset: 0xfc
	// Line 3380, Address: 0x29d538, Func Offset: 0x108
	// Line 3381, Address: 0x29d548, Func Offset: 0x118
	// Line 3382, Address: 0x29d550, Func Offset: 0x120
	// Line 3384, Address: 0x29d55c, Func Offset: 0x12c
	// Line 3386, Address: 0x29d560, Func Offset: 0x130
	// Line 3387, Address: 0x29d56c, Func Offset: 0x13c
	// Line 3388, Address: 0x29d578, Func Offset: 0x148
	// Line 3389, Address: 0x29d580, Func Offset: 0x150
	// Line 3393, Address: 0x29d588, Func Offset: 0x158
	// Line 3396, Address: 0x29d59c, Func Offset: 0x16c
	// Line 3397, Address: 0x29d5b4, Func Offset: 0x184
	// Line 3398, Address: 0x29d5bc, Func Offset: 0x18c
	// Line 3400, Address: 0x29d5c4, Func Offset: 0x194
	// Line 3402, Address: 0x29d5cc, Func Offset: 0x19c
	// Line 3403, Address: 0x29d5d0, Func Offset: 0x1a0
	// Line 3406, Address: 0x29d5dc, Func Offset: 0x1ac
	// Line 3408, Address: 0x29d5e0, Func Offset: 0x1b0
	// Line 3407, Address: 0x29d5e4, Func Offset: 0x1b4
	// Line 3408, Address: 0x29d5ec, Func Offset: 0x1bc
	// Line 3410, Address: 0x29d5f4, Func Offset: 0x1c4
	// Line 3411, Address: 0x29d5f8, Func Offset: 0x1c8
	// Func End, Address: 0x29d60c, Func Offset: 0x1dc
}

// 
// Start address: 0x29d610
void EileenObjectCollision(_anon0* eil)
{
	float v[4];
	float r;
	// Line 3428, Address: 0x29d610, Func Offset: 0
	// Line 3432, Address: 0x29d618, Func Offset: 0x8
	// Line 3435, Address: 0x29d624, Func Offset: 0x14
	// Line 3439, Address: 0x29d634, Func Offset: 0x24
	// Line 3440, Address: 0x29d644, Func Offset: 0x34
	// Line 3441, Address: 0x29d66c, Func Offset: 0x5c
	// Line 3442, Address: 0x29d680, Func Offset: 0x70
	// Line 3445, Address: 0x29d6a0, Func Offset: 0x90
	// Line 3446, Address: 0x29d6cc, Func Offset: 0xbc
	// Line 3447, Address: 0x29d6dc, Func Offset: 0xcc
	// Line 3450, Address: 0x29d6e0, Func Offset: 0xd0
	// Line 3451, Address: 0x29d700, Func Offset: 0xf0
	// Line 3452, Address: 0x29d724, Func Offset: 0x114
	// Line 3453, Address: 0x29d72c, Func Offset: 0x11c
	// Line 3452, Address: 0x29d734, Func Offset: 0x124
	// Line 3453, Address: 0x29d738, Func Offset: 0x128
	// Line 3454, Address: 0x29d744, Func Offset: 0x134
	// Line 3455, Address: 0x29d748, Func Offset: 0x138
	// Line 3454, Address: 0x29d74c, Func Offset: 0x13c
	// Line 3455, Address: 0x29d750, Func Offset: 0x140
	// Line 3454, Address: 0x29d754, Func Offset: 0x144
	// Line 3455, Address: 0x29d760, Func Offset: 0x150
	// Line 3456, Address: 0x29d77c, Func Offset: 0x16c
	// Line 3457, Address: 0x29d784, Func Offset: 0x174
	// Line 3458, Address: 0x29d788, Func Offset: 0x178
	// Func End, Address: 0x29d794, Func Offset: 0x184
}

// 
// Start address: 0x29d7a0
void EileenDestruct(sfObj* obj)
{
	// Line 3465, Address: 0x29d7a0, Func Offset: 0
	// Line 3469, Address: 0x29d7b0, Func Offset: 0x10
	// Line 3471, Address: 0x29d7b4, Func Offset: 0x14
	// Line 3472, Address: 0x29d7bc, Func Offset: 0x1c
	// Line 3474, Address: 0x29d7c4, Func Offset: 0x24
	// Line 3475, Address: 0x29d7c8, Func Offset: 0x28
	// Line 3476, Address: 0x29d7d0, Func Offset: 0x30
	// Line 3478, Address: 0x29d7d8, Func Offset: 0x38
	// Line 3479, Address: 0x29d7dc, Func Offset: 0x3c
	// Line 3480, Address: 0x29d7e4, Func Offset: 0x44
	// Func End, Address: 0x29d7f8, Func Offset: 0x58
}

// 
// Start address: 0x29d800
void EileenConstruct(sfObj* obj)
{
	_anon0* eil;
	float pl_pos[4];
	float eil_pos[4];
	float offset[4];
	sfCharacter* chara;
	_anon3* eil_save;
	_anon3* eil_save;
	// Line 3484, Address: 0x29d800, Func Offset: 0
	// Line 3487, Address: 0x29d818, Func Offset: 0x18
	// Line 3498, Address: 0x29d824, Func Offset: 0x24
	// Line 3501, Address: 0x29d828, Func Offset: 0x28
	// Line 3502, Address: 0x29d838, Func Offset: 0x38
	// Line 3504, Address: 0x29d844, Func Offset: 0x44
	// Line 3505, Address: 0x29d84c, Func Offset: 0x4c
	// Line 3506, Address: 0x29d854, Func Offset: 0x54
	// Line 3508, Address: 0x29d858, Func Offset: 0x58
	// Line 3509, Address: 0x29d868, Func Offset: 0x68
	// Line 3511, Address: 0x29d874, Func Offset: 0x74
	// Line 3512, Address: 0x29d878, Func Offset: 0x78
	// Line 3515, Address: 0x29d880, Func Offset: 0x80
	// Line 3516, Address: 0x29d88c, Func Offset: 0x8c
	// Line 3517, Address: 0x29d89c, Func Offset: 0x9c
	// Line 3520, Address: 0x29d8ac, Func Offset: 0xac
	// Line 3528, Address: 0x29d8c0, Func Offset: 0xc0
	// Line 3530, Address: 0x29d8cc, Func Offset: 0xcc
	// Line 3531, Address: 0x29d8e0, Func Offset: 0xe0
	// Line 3532, Address: 0x29d8f8, Func Offset: 0xf8
	// Line 3534, Address: 0x29d914, Func Offset: 0x114
	// Line 3535, Address: 0x29d918, Func Offset: 0x118
	// Line 3534, Address: 0x29d920, Func Offset: 0x120
	// Line 3535, Address: 0x29d924, Func Offset: 0x124
	// Line 3540, Address: 0x29d92c, Func Offset: 0x12c
	// Line 3541, Address: 0x29d938, Func Offset: 0x138
	// Line 3542, Address: 0x29d958, Func Offset: 0x158
	// Line 3544, Address: 0x29d978, Func Offset: 0x178
	// Line 3545, Address: 0x29d994, Func Offset: 0x194
	// Line 3546, Address: 0x29d9b4, Func Offset: 0x1b4
	// Line 3547, Address: 0x29d9c0, Func Offset: 0x1c0
	// Line 3548, Address: 0x29d9cc, Func Offset: 0x1cc
	// Line 3549, Address: 0x29d9d8, Func Offset: 0x1d8
	// Line 3552, Address: 0x29d9e0, Func Offset: 0x1e0
	// Line 3553, Address: 0x29d9fc, Func Offset: 0x1fc
	// Line 3554, Address: 0x29da04, Func Offset: 0x204
	// Line 3555, Address: 0x29da08, Func Offset: 0x208
	// Line 3556, Address: 0x29da10, Func Offset: 0x210
	// Line 3558, Address: 0x29da1c, Func Offset: 0x21c
	// Line 3560, Address: 0x29da20, Func Offset: 0x220
	// Line 3561, Address: 0x29da2c, Func Offset: 0x22c
	// Func End, Address: 0x29da4c, Func Offset: 0x24c
}

// 
// Start address: 0x29da50
void Eileen(sfObj* obj)
{
	// Line 3565, Address: 0x29da50, Func Offset: 0
	// Line 3570, Address: 0x29da60, Func Offset: 0x10
	// Line 3571, Address: 0x29da6c, Func Offset: 0x1c
	// Line 3572, Address: 0x29da74, Func Offset: 0x24
	// Line 3574, Address: 0x29da78, Func Offset: 0x28
	// Line 3577, Address: 0x29da7c, Func Offset: 0x2c
	// Line 3578, Address: 0x29da84, Func Offset: 0x34
	// Line 3580, Address: 0x29da8c, Func Offset: 0x3c
	// Line 3581, Address: 0x29da98, Func Offset: 0x48
	// Line 3582, Address: 0x29daa0, Func Offset: 0x50
	// Line 3583, Address: 0x29daa8, Func Offset: 0x58
	// Line 3586, Address: 0x29dab0, Func Offset: 0x60
	// Line 3587, Address: 0x29dab8, Func Offset: 0x68
	// Line 3588, Address: 0x29dac0, Func Offset: 0x70
	// Line 3599, Address: 0x29dac8, Func Offset: 0x78
	// Line 3600, Address: 0x29dad8, Func Offset: 0x88
	// Line 3601, Address: 0x29daf0, Func Offset: 0xa0
	// Line 3607, Address: 0x29daf8, Func Offset: 0xa8
	// Line 3609, Address: 0x29dbe0, Func Offset: 0x190
	// Line 3610, Address: 0x29dbe8, Func Offset: 0x198
	// Line 3612, Address: 0x29dbf0, Func Offset: 0x1a0
	// Line 3613, Address: 0x29dbf8, Func Offset: 0x1a8
	// Line 3615, Address: 0x29dc00, Func Offset: 0x1b0
	// Line 3616, Address: 0x29dc08, Func Offset: 0x1b8
	// Line 3618, Address: 0x29dc10, Func Offset: 0x1c0
	// Line 3619, Address: 0x29dc18, Func Offset: 0x1c8
	// Line 3621, Address: 0x29dc20, Func Offset: 0x1d0
	// Line 3622, Address: 0x29dc28, Func Offset: 0x1d8
	// Line 3624, Address: 0x29dc30, Func Offset: 0x1e0
	// Line 3625, Address: 0x29dc38, Func Offset: 0x1e8
	// Line 3627, Address: 0x29dc40, Func Offset: 0x1f0
	// Line 3628, Address: 0x29dc48, Func Offset: 0x1f8
	// Line 3630, Address: 0x29dc50, Func Offset: 0x200
	// Line 3631, Address: 0x29dc58, Func Offset: 0x208
	// Line 3633, Address: 0x29dc60, Func Offset: 0x210
	// Line 3634, Address: 0x29dc68, Func Offset: 0x218
	// Line 3636, Address: 0x29dc70, Func Offset: 0x220
	// Line 3637, Address: 0x29dc78, Func Offset: 0x228
	// Line 3639, Address: 0x29dc80, Func Offset: 0x230
	// Line 3640, Address: 0x29dc88, Func Offset: 0x238
	// Line 3642, Address: 0x29dc90, Func Offset: 0x240
	// Line 3643, Address: 0x29dc98, Func Offset: 0x248
	// Line 3645, Address: 0x29dca0, Func Offset: 0x250
	// Line 3646, Address: 0x29dca8, Func Offset: 0x258
	// Line 3648, Address: 0x29dcb0, Func Offset: 0x260
	// Line 3649, Address: 0x29dcb8, Func Offset: 0x268
	// Line 3651, Address: 0x29dcc0, Func Offset: 0x270
	// Line 3652, Address: 0x29dcc8, Func Offset: 0x278
	// Line 3654, Address: 0x29dcd0, Func Offset: 0x280
	// Line 3655, Address: 0x29dcd8, Func Offset: 0x288
	// Line 3657, Address: 0x29dce0, Func Offset: 0x290
	// Line 3658, Address: 0x29dce8, Func Offset: 0x298
	// Line 3660, Address: 0x29dcf0, Func Offset: 0x2a0
	// Line 3661, Address: 0x29dcf8, Func Offset: 0x2a8
	// Line 3663, Address: 0x29dd00, Func Offset: 0x2b0
	// Line 3664, Address: 0x29dd08, Func Offset: 0x2b8
	// Line 3666, Address: 0x29dd10, Func Offset: 0x2c0
	// Line 3667, Address: 0x29dd18, Func Offset: 0x2c8
	// Line 3669, Address: 0x29dd20, Func Offset: 0x2d0
	// Line 3670, Address: 0x29dd28, Func Offset: 0x2d8
	// Line 3672, Address: 0x29dd30, Func Offset: 0x2e0
	// Line 3684, Address: 0x29dd38, Func Offset: 0x2e8
	// Line 3685, Address: 0x29dd40, Func Offset: 0x2f0
	// Line 3686, Address: 0x29dd4c, Func Offset: 0x2fc
	// Line 3689, Address: 0x29dd58, Func Offset: 0x308
	// Line 3690, Address: 0x29dd64, Func Offset: 0x314
	// Line 3692, Address: 0x29dd70, Func Offset: 0x320
	// Line 3693, Address: 0x29dd78, Func Offset: 0x328
	// Line 3694, Address: 0x29dd80, Func Offset: 0x330
	// Line 3695, Address: 0x29dd88, Func Offset: 0x338
	// Line 3696, Address: 0x29dd90, Func Offset: 0x340
	// Line 3697, Address: 0x29dd98, Func Offset: 0x348
	// Line 3698, Address: 0x29dda0, Func Offset: 0x350
	// Line 3704, Address: 0x29dda8, Func Offset: 0x358
	// Func End, Address: 0x29ddbc, Func Offset: 0x36c
}

// 
// Start address: 0x29ddc0
void EilFollow_LAST(sfObj* obj)
{
	_anon0* eil;
	float v[4];
	sgAnime* anm;
	float r;
	float sp;
	float speed_ratio;
	float walk_sp;
	int frame;
	float max_speed;
	int stop_timer;
	float accel_speed;
	// Line 3712, Address: 0x29ddc0, Func Offset: 0
	// Line 3735, Address: 0x29ddc4, Func Offset: 0x4
	// Line 3712, Address: 0x29ddc8, Func Offset: 0x8
	// Line 3713, Address: 0x29dde0, Func Offset: 0x20
	// Line 3733, Address: 0x29dde4, Func Offset: 0x24
	// Line 3735, Address: 0x29dde8, Func Offset: 0x28
	// Line 3737, Address: 0x29de18, Func Offset: 0x58
	// Line 3738, Address: 0x29de1c, Func Offset: 0x5c
	// Line 3739, Address: 0x29de20, Func Offset: 0x60
	// Line 3741, Address: 0x29de28, Func Offset: 0x68
	// Line 3743, Address: 0x29de34, Func Offset: 0x74
	// Line 3745, Address: 0x29de38, Func Offset: 0x78
	// Line 3746, Address: 0x29de48, Func Offset: 0x88
	// Line 3748, Address: 0x29de4c, Func Offset: 0x8c
	// Line 3747, Address: 0x29de50, Func Offset: 0x90
	// Line 3748, Address: 0x29de54, Func Offset: 0x94
	// Line 3749, Address: 0x29de58, Func Offset: 0x98
	// Line 3751, Address: 0x29de64, Func Offset: 0xa4
	// Line 3754, Address: 0x29de68, Func Offset: 0xa8
	// Line 3753, Address: 0x29de74, Func Offset: 0xb4
	// Line 3754, Address: 0x29de78, Func Offset: 0xb8
	// Line 3756, Address: 0x29de7c, Func Offset: 0xbc
	// Line 3755, Address: 0x29de80, Func Offset: 0xc0
	// Line 3756, Address: 0x29de84, Func Offset: 0xc4
	// Line 3754, Address: 0x29de88, Func Offset: 0xc8
	// Line 3755, Address: 0x29de90, Func Offset: 0xd0
	// Line 3756, Address: 0x29de94, Func Offset: 0xd4
	// Line 3754, Address: 0x29dea4, Func Offset: 0xe4
	// Line 3756, Address: 0x29dea8, Func Offset: 0xe8
	// Line 3754, Address: 0x29debc, Func Offset: 0xfc
	// Line 3755, Address: 0x29dec8, Func Offset: 0x108
	// Line 3756, Address: 0x29ded8, Func Offset: 0x118
	// Line 3758, Address: 0x29dee0, Func Offset: 0x120
	// Line 3756, Address: 0x29dee8, Func Offset: 0x128
	// Line 3758, Address: 0x29def4, Func Offset: 0x134
	// Line 3759, Address: 0x29defc, Func Offset: 0x13c
	// Line 3760, Address: 0x29df28, Func Offset: 0x168
	// Line 3762, Address: 0x29df38, Func Offset: 0x178
	// Line 3763, Address: 0x29df44, Func Offset: 0x184
	// Line 3767, Address: 0x29df4c, Func Offset: 0x18c
	// Line 3766, Address: 0x29df54, Func Offset: 0x194
	// Line 3770, Address: 0x29df58, Func Offset: 0x198
	// Line 3771, Address: 0x29df64, Func Offset: 0x1a4
	// Line 3772, Address: 0x29df68, Func Offset: 0x1a8
	// Line 3773, Address: 0x29df74, Func Offset: 0x1b4
	// Line 3774, Address: 0x29df78, Func Offset: 0x1b8
	// Line 3775, Address: 0x29df90, Func Offset: 0x1d0
	// Line 3776, Address: 0x29df94, Func Offset: 0x1d4
	// Line 3778, Address: 0x29df98, Func Offset: 0x1d8
	// Line 3780, Address: 0x29dfb0, Func Offset: 0x1f0
	// Line 3781, Address: 0x29dfbc, Func Offset: 0x1fc
	// Line 3780, Address: 0x29dfc0, Func Offset: 0x200
	// Line 3782, Address: 0x29dfc4, Func Offset: 0x204
	// Line 3784, Address: 0x29dfd0, Func Offset: 0x210
	// Line 3788, Address: 0x29dfd4, Func Offset: 0x214
	// Line 3784, Address: 0x29dfd8, Func Offset: 0x218
	// Line 3788, Address: 0x29dfe0, Func Offset: 0x220
	// Line 3789, Address: 0x29dfe4, Func Offset: 0x224
	// Line 3785, Address: 0x29dfe8, Func Offset: 0x228
	// Line 3786, Address: 0x29dfec, Func Offset: 0x22c
	// Line 3788, Address: 0x29dff0, Func Offset: 0x230
	// Line 3789, Address: 0x29dff8, Func Offset: 0x238
	// Line 3788, Address: 0x29e000, Func Offset: 0x240
	// Line 3789, Address: 0x29e004, Func Offset: 0x244
	// Line 3792, Address: 0x29e010, Func Offset: 0x250
	// Line 3794, Address: 0x29e018, Func Offset: 0x258
	// Line 3795, Address: 0x29e024, Func Offset: 0x264
	// Line 3796, Address: 0x29e030, Func Offset: 0x270
	// Line 3797, Address: 0x29e040, Func Offset: 0x280
	// Line 3796, Address: 0x29e048, Func Offset: 0x288
	// Line 3797, Address: 0x29e04c, Func Offset: 0x28c
	// Line 3798, Address: 0x29e058, Func Offset: 0x298
	// Line 3800, Address: 0x29e060, Func Offset: 0x2a0
	// Line 3801, Address: 0x29e068, Func Offset: 0x2a8
	// Line 3802, Address: 0x29e078, Func Offset: 0x2b8
	// Line 3801, Address: 0x29e080, Func Offset: 0x2c0
	// Line 3802, Address: 0x29e088, Func Offset: 0x2c8
	// Line 3803, Address: 0x29e094, Func Offset: 0x2d4
	// Line 3804, Address: 0x29e098, Func Offset: 0x2d8
	// Line 3806, Address: 0x29e09c, Func Offset: 0x2dc
	// Line 3807, Address: 0x29e0a8, Func Offset: 0x2e8
	// Line 3808, Address: 0x29e0b4, Func Offset: 0x2f4
	// Line 3809, Address: 0x29e0bc, Func Offset: 0x2fc
	// Line 3810, Address: 0x29e0c0, Func Offset: 0x300
	// Line 3811, Address: 0x29e0c8, Func Offset: 0x308
	// Line 3815, Address: 0x29e0d0, Func Offset: 0x310
	// Func End, Address: 0x29e0ec, Func Offset: 0x32c
}

// 
// Start address: 0x29e0f0
void EileenLast(sfObj* obj)
{
	_anon0* eil;
	float v[4];
	float first_direction[4];
	float first_position[4];
	// Line 3819, Address: 0x29e0f0, Func Offset: 0
	// Line 3826, Address: 0x29e104, Func Offset: 0x14
	// Line 3820, Address: 0x29e108, Func Offset: 0x18
	// Line 3826, Address: 0x29e10c, Func Offset: 0x1c
	// Line 3827, Address: 0x29e114, Func Offset: 0x24
	// Line 3828, Address: 0x29e11c, Func Offset: 0x2c
	// Line 3829, Address: 0x29e120, Func Offset: 0x30
	// Line 3830, Address: 0x29e130, Func Offset: 0x40
	// Line 3832, Address: 0x29e140, Func Offset: 0x50
	// Line 3831, Address: 0x29e144, Func Offset: 0x54
	// Line 3832, Address: 0x29e148, Func Offset: 0x58
	// Line 3833, Address: 0x29e150, Func Offset: 0x60
	// Line 3835, Address: 0x29e15c, Func Offset: 0x6c
	// Line 3837, Address: 0x29e168, Func Offset: 0x78
	// Line 3838, Address: 0x29e174, Func Offset: 0x84
	// Line 3840, Address: 0x29e180, Func Offset: 0x90
	// Line 3841, Address: 0x29e188, Func Offset: 0x98
	// Line 3842, Address: 0x29e190, Func Offset: 0xa0
	// Line 3843, Address: 0x29e198, Func Offset: 0xa8
	// Line 3844, Address: 0x29e1a0, Func Offset: 0xb0
	// Line 3847, Address: 0x29e1e0, Func Offset: 0xf0
	// Line 3849, Address: 0x29e1e8, Func Offset: 0xf8
	// Line 3847, Address: 0x29e1ec, Func Offset: 0xfc
	// Line 3849, Address: 0x29e1fc, Func Offset: 0x10c
	// Line 3850, Address: 0x29e200, Func Offset: 0x110
	// Line 3851, Address: 0x29e20c, Func Offset: 0x11c
	// Line 3853, Address: 0x29e210, Func Offset: 0x120
	// Line 3854, Address: 0x29e218, Func Offset: 0x128
	// Line 3856, Address: 0x29e220, Func Offset: 0x130
	// Line 3857, Address: 0x29e230, Func Offset: 0x140
	// Line 3858, Address: 0x29e234, Func Offset: 0x144
	// Line 3860, Address: 0x29e23c, Func Offset: 0x14c
	// Line 3861, Address: 0x29e244, Func Offset: 0x154
	// Line 3862, Address: 0x29e248, Func Offset: 0x158
	// Line 3866, Address: 0x29e250, Func Offset: 0x160
	// Line 3867, Address: 0x29e26c, Func Offset: 0x17c
	// Line 3868, Address: 0x29e278, Func Offset: 0x188
	// Line 3867, Address: 0x29e27c, Func Offset: 0x18c
	// Line 3868, Address: 0x29e280, Func Offset: 0x190
	// Line 3867, Address: 0x29e28c, Func Offset: 0x19c
	// Line 3868, Address: 0x29e294, Func Offset: 0x1a4
	// Line 3870, Address: 0x29e2a0, Func Offset: 0x1b0
	// Line 3871, Address: 0x29e2c0, Func Offset: 0x1d0
	// Line 3872, Address: 0x29e2c8, Func Offset: 0x1d8
	// Line 3873, Address: 0x29e2d4, Func Offset: 0x1e4
	// Line 3874, Address: 0x29e2d8, Func Offset: 0x1e8
	// Line 3876, Address: 0x29e2e0, Func Offset: 0x1f0
	// Line 3879, Address: 0x29e2e8, Func Offset: 0x1f8
	// Line 3881, Address: 0x29e308, Func Offset: 0x218
	// Line 3882, Address: 0x29e310, Func Offset: 0x220
	// Line 3883, Address: 0x29e318, Func Offset: 0x228
	// Line 3885, Address: 0x29e320, Func Offset: 0x230
	// Line 3886, Address: 0x29e32c, Func Offset: 0x23c
	// Line 3887, Address: 0x29e334, Func Offset: 0x244
	// Line 3888, Address: 0x29e338, Func Offset: 0x248
	// Line 3890, Address: 0x29e344, Func Offset: 0x254
	// Line 3891, Address: 0x29e348, Func Offset: 0x258
	// Line 3892, Address: 0x29e354, Func Offset: 0x264
	// Line 3893, Address: 0x29e36c, Func Offset: 0x27c
	// Line 3894, Address: 0x29e378, Func Offset: 0x288
	// Line 3896, Address: 0x29e380, Func Offset: 0x290
	// Line 3899, Address: 0x29e388, Func Offset: 0x298
	// Line 3900, Address: 0x29e390, Func Offset: 0x2a0
	// Line 3901, Address: 0x29e398, Func Offset: 0x2a8
	// Line 3902, Address: 0x29e3a8, Func Offset: 0x2b8
	// Line 3904, Address: 0x29e3b0, Func Offset: 0x2c0
	// Line 3905, Address: 0x29e3b8, Func Offset: 0x2c8
	// Line 3913, Address: 0x29e3c0, Func Offset: 0x2d0
	// Func End, Address: 0x29e3d8, Func Offset: 0x2e8
}

// 
// Start address: 0x29e3e0
void EileenLastSet(sfObj* obj)
{
	sfObj* optr;
	// Line 3919, Address: 0x29e3e0, Func Offset: 0
	// Line 3921, Address: 0x29e3ec, Func Offset: 0xc
	// Line 3922, Address: 0x29e3f8, Func Offset: 0x18
	// Line 3923, Address: 0x29e400, Func Offset: 0x20
	// Line 3924, Address: 0x29e408, Func Offset: 0x28
	// Line 3926, Address: 0x29e410, Func Offset: 0x30
	// Func End, Address: 0x29e420, Func Offset: 0x40
}

// 
// Start address: 0x29e420
void EileenStand(sfObj* obj)
{
	_anon0* eil;
	// Line 3932, Address: 0x29e420, Func Offset: 0
	// Line 3935, Address: 0x29e430, Func Offset: 0x10
	// Line 3933, Address: 0x29e434, Func Offset: 0x14
	// Line 3935, Address: 0x29e438, Func Offset: 0x18
	// Line 3936, Address: 0x29e440, Func Offset: 0x20
	// Line 3937, Address: 0x29e448, Func Offset: 0x28
	// Line 3938, Address: 0x29e44c, Func Offset: 0x2c
	// Line 3939, Address: 0x29e450, Func Offset: 0x30
	// Line 3940, Address: 0x29e458, Func Offset: 0x38
	// Line 3942, Address: 0x29e470, Func Offset: 0x50
	// Line 3943, Address: 0x29e474, Func Offset: 0x54
	// Line 3946, Address: 0x29e480, Func Offset: 0x60
	// Line 3947, Address: 0x29e488, Func Offset: 0x68
	// Line 3948, Address: 0x29e490, Func Offset: 0x70
	// Line 3949, Address: 0x29e498, Func Offset: 0x78
	// Func End, Address: 0x29e4ac, Func Offset: 0x8c
}

// 
// Start address: 0x29e4b0
sfObj* EileenObj()
{
	// Line 3957, Address: 0x29e4b0, Func Offset: 0
	// Line 3958, Address: 0x29e4b4, Func Offset: 0x4
	// Func End, Address: 0x29e4bc, Func Offset: 0xc
}

// 
// Start address: 0x29e4c0
void EilGetPos(_anon0* eil, float* v)
{
	sfCharacter* chara;
	// Line 3962, Address: 0x29e4c0, Func Offset: 0
	// Line 3963, Address: 0x29e4cc, Func Offset: 0xc
	// Line 3964, Address: 0x29e4d0, Func Offset: 0x10
	// Line 3965, Address: 0x29e4e0, Func Offset: 0x20
	// Func End, Address: 0x29e4f0, Func Offset: 0x30
}

// 
// Start address: 0x29e4f0
void EilGetGlobalPos(_anon0* eil, float* v)
{
	// Line 3970, Address: 0x29e4f0, Func Offset: 0
	// Line 3971, Address: 0x29e4f4, Func Offset: 0x4
	// Func End, Address: 0x29e4fc, Func Offset: 0xc
}

// 
// Start address: 0x29e500
void EilGetRot(_anon0* eil, float* q)
{
	sfCharacter* chara;
	// Line 3975, Address: 0x29e500, Func Offset: 0
	// Line 3976, Address: 0x29e50c, Func Offset: 0xc
	// Line 3977, Address: 0x29e510, Func Offset: 0x10
	// Line 3978, Address: 0x29e520, Func Offset: 0x20
	// Func End, Address: 0x29e530, Func Offset: 0x30
}

// 
// Start address: 0x29e530
_enum EileenStayStage()
{
	sfObj* obj;
	_anon3* save_data;
	// Line 3983, Address: 0x29e530, Func Offset: 0
	// Line 3984, Address: 0x29e53c, Func Offset: 0xc
	// Line 3986, Address: 0x29e544, Func Offset: 0x14
	// Line 3987, Address: 0x29e54c, Func Offset: 0x1c
	// Line 3988, Address: 0x29e560, Func Offset: 0x30
	// Line 3991, Address: 0x29e564, Func Offset: 0x34
	// Line 3994, Address: 0x29e580, Func Offset: 0x50
	// Line 3995, Address: 0x29e588, Func Offset: 0x58
	// Func End, Address: 0x29e59c, Func Offset: 0x6c
}

// 
// Start address: 0x29e5a0
int EileenStayScene()
{
	sfObj* obj;
	_anon3* save_data;
	// Line 4000, Address: 0x29e5a0, Func Offset: 0
	// Line 4001, Address: 0x29e5ac, Func Offset: 0xc
	// Line 4003, Address: 0x29e5b4, Func Offset: 0x14
	// Line 4004, Address: 0x29e5bc, Func Offset: 0x1c
	// Line 4005, Address: 0x29e5d0, Func Offset: 0x30
	// Line 4008, Address: 0x29e5d4, Func Offset: 0x34
	// Line 4011, Address: 0x29e5f0, Func Offset: 0x50
	// Line 4012, Address: 0x29e5f8, Func Offset: 0x58
	// Func End, Address: 0x29e60c, Func Offset: 0x6c
}

// 
// Start address: 0x29e610
void EileenGetPos(float* v)
{
	sfObj* obj;
	_anon0* eil;
	_anon3* save_data;
	// Line 4017, Address: 0x29e610, Func Offset: 0
	// Line 4018, Address: 0x29e624, Func Offset: 0x14
	// Line 4020, Address: 0x29e62c, Func Offset: 0x1c
	// Line 4021, Address: 0x29e634, Func Offset: 0x24
	// Line 4022, Address: 0x29e648, Func Offset: 0x38
	// Line 4024, Address: 0x29e64c, Func Offset: 0x3c
	// Line 4025, Address: 0x29e654, Func Offset: 0x44
	// Line 4026, Address: 0x29e65c, Func Offset: 0x4c
	// Line 4027, Address: 0x29e660, Func Offset: 0x50
	// Line 4028, Address: 0x29e668, Func Offset: 0x58
	// Func End, Address: 0x29e680, Func Offset: 0x70
}

// 
// Start address: 0x29e680
void EileenGetRot(float* q)
{
	sfObj* obj;
	_anon0* eil;
	_anon3* save_data;
	// Line 4033, Address: 0x29e680, Func Offset: 0
	// Line 4034, Address: 0x29e694, Func Offset: 0x14
	// Line 4036, Address: 0x29e69c, Func Offset: 0x1c
	// Line 4037, Address: 0x29e6a4, Func Offset: 0x24
	// Line 4038, Address: 0x29e6b8, Func Offset: 0x38
	// Line 4040, Address: 0x29e6bc, Func Offset: 0x3c
	// Line 4041, Address: 0x29e6c8, Func Offset: 0x48
	// Line 4043, Address: 0x29e6d0, Func Offset: 0x50
	// Line 4044, Address: 0x29e6d8, Func Offset: 0x58
	// Func End, Address: 0x29e6f0, Func Offset: 0x70
}

// 
// Start address: 0x29e6f0
int EileenExistence()
{
	sfObj* obj;
	// Line 4054, Address: 0x29e6f0, Func Offset: 0
	// Line 4055, Address: 0x29e6f8, Func Offset: 0x8
	// Line 4058, Address: 0x29e700, Func Offset: 0x10
	// Line 4059, Address: 0x29e710, Func Offset: 0x20
	// Line 4061, Address: 0x29e718, Func Offset: 0x28
	// Line 4062, Address: 0x29e720, Func Offset: 0x30
	// Line 4064, Address: 0x29e728, Func Offset: 0x38
	// Line 4065, Address: 0x29e72c, Func Offset: 0x3c
	// Line 4066, Address: 0x29e734, Func Offset: 0x44
	// Line 4069, Address: 0x29e740, Func Offset: 0x50
	// Line 4072, Address: 0x29e750, Func Offset: 0x60
	// Func End, Address: 0x29e75c, Func Offset: 0x6c
}

// 
// Start address: 0x29e760
void EileenCall()
{
	sfObj* optr;
	// Line 4077, Address: 0x29e760, Func Offset: 0
	// Line 4079, Address: 0x29e764, Func Offset: 0x4
	// Line 4077, Address: 0x29e768, Func Offset: 0x8
	// Line 4079, Address: 0x29e770, Func Offset: 0x10
	// Line 4080, Address: 0x29e77c, Func Offset: 0x1c
	// Line 4081, Address: 0x29e788, Func Offset: 0x28
	// Line 4082, Address: 0x29e798, Func Offset: 0x38
	// Line 4084, Address: 0x29e7a0, Func Offset: 0x40
	// Line 4085, Address: 0x29e7b0, Func Offset: 0x50
	// Line 4086, Address: 0x29e7b8, Func Offset: 0x58
	// Line 4088, Address: 0x29e7c0, Func Offset: 0x60
	// Line 4089, Address: 0x29e7d0, Func Offset: 0x70
	// Line 4091, Address: 0x29e7d8, Func Offset: 0x78
	// Func End, Address: 0x29e7e8, Func Offset: 0x88
}

// 
// Start address: 0x29e7f0
void EileenDelete()
{
	_anon3* save_data;
	// Line 4096, Address: 0x29e7f0, Func Offset: 0
	// Line 4098, Address: 0x29e7f8, Func Offset: 0x8
	// Line 4100, Address: 0x29e800, Func Offset: 0x10
	// Line 4101, Address: 0x29e810, Func Offset: 0x20
	// Line 4103, Address: 0x29e818, Func Offset: 0x28
	// Line 4104, Address: 0x29e824, Func Offset: 0x34
	// Line 4105, Address: 0x29e82c, Func Offset: 0x3c
	// Line 4106, Address: 0x29e830, Func Offset: 0x40
	// Line 4108, Address: 0x29e838, Func Offset: 0x48
	// Line 4109, Address: 0x29e83c, Func Offset: 0x4c
	// Func End, Address: 0x29e84c, Func Offset: 0x5c
}

// 
// Start address: 0x29e850
void EileenSetAlone()
{
	sfObj* eil_obj;
	// Line 4121, Address: 0x29e850, Func Offset: 0
	// Line 4122, Address: 0x29e858, Func Offset: 0x8
	// Line 4124, Address: 0x29e860, Func Offset: 0x10
	// Line 4127, Address: 0x29e870, Func Offset: 0x20
	// Line 4129, Address: 0x29e874, Func Offset: 0x24
	// Line 4131, Address: 0x29e87c, Func Offset: 0x2c
	// Line 4132, Address: 0x29e880, Func Offset: 0x30
	// Line 4134, Address: 0x29e888, Func Offset: 0x38
	// Line 4135, Address: 0x29e88c, Func Offset: 0x3c
	// Func End, Address: 0x29e89c, Func Offset: 0x4c
}

// 
// Start address: 0x29e8a0
void EileenSetWithHenry()
{
	sfObj* eil_obj;
	// Line 4146, Address: 0x29e8a0, Func Offset: 0
	// Line 4147, Address: 0x29e8a8, Func Offset: 0x8
	// Line 4149, Address: 0x29e8b0, Func Offset: 0x10
	// Line 4152, Address: 0x29e8c0, Func Offset: 0x20
	// Line 4154, Address: 0x29e8c4, Func Offset: 0x24
	// Line 4156, Address: 0x29e8cc, Func Offset: 0x2c
	// Line 4157, Address: 0x29e8d0, Func Offset: 0x30
	// Line 4159, Address: 0x29e8d8, Func Offset: 0x38
	// Line 4160, Address: 0x29e8dc, Func Offset: 0x3c
	// Func End, Address: 0x29e8ec, Func Offset: 0x4c
}

// 
// Start address: 0x29e8f0
void EileenWarp(_enum stage, int scene, float* pos, float* rot)
{
	_anon3* eil_save;
	// Line 4170, Address: 0x29e8f0, Func Offset: 0
	// Line 4173, Address: 0x29e8f4, Func Offset: 0x4
	// Line 4170, Address: 0x29e8f8, Func Offset: 0x8
	// Line 4173, Address: 0x29e91c, Func Offset: 0x2c
	// Line 4176, Address: 0x29e928, Func Offset: 0x38
	// Line 4177, Address: 0x29e934, Func Offset: 0x44
	// Line 4178, Address: 0x29e944, Func Offset: 0x54
	// Line 4179, Address: 0x29e94c, Func Offset: 0x5c
	// Line 4180, Address: 0x29e958, Func Offset: 0x68
	// Line 4182, Address: 0x29e95c, Func Offset: 0x6c
	// Line 4180, Address: 0x29e960, Func Offset: 0x70
	// Line 4182, Address: 0x29e964, Func Offset: 0x74
	// Line 4183, Address: 0x29e96c, Func Offset: 0x7c
	// Line 4185, Address: 0x29e970, Func Offset: 0x80
	// Line 4186, Address: 0x29e974, Func Offset: 0x84
	// Line 4187, Address: 0x29e978, Func Offset: 0x88
	// Line 4188, Address: 0x29e980, Func Offset: 0x90
	// Line 4189, Address: 0x29e984, Func Offset: 0x94
	// Line 4190, Address: 0x29e98c, Func Offset: 0x9c
	// Func End, Address: 0x29e9b0, Func Offset: 0xc0
}

// 
// Start address: 0x29e9b0
void EileenMoveByForceV(float* dir, float per_sec)
{
	sfObj* eil_obj;
	_anon0* eil;
	float move_dir[4];
	float speed;
	// Line 4223, Address: 0x29e9b0, Func Offset: 0
	// Line 4224, Address: 0x29e9c8, Func Offset: 0x18
	// Line 4229, Address: 0x29e9d0, Func Offset: 0x20
	// Line 4231, Address: 0x29e9d8, Func Offset: 0x28
	// Line 4232, Address: 0x29e9dc, Func Offset: 0x2c
	// Line 4236, Address: 0x29e9e4, Func Offset: 0x34
	// Line 4237, Address: 0x29ea08, Func Offset: 0x58
	// Line 4238, Address: 0x29ea14, Func Offset: 0x64
	// Line 4239, Address: 0x29ea20, Func Offset: 0x70
	// Func End, Address: 0x29ea38, Func Offset: 0x88
}

// 
// Start address: 0x29ea40
void EileenSceneStart()
{
	_anon3* eil_save;
	int n;
	float bd28_pos[4];
	// Line 4278, Address: 0x29ea40, Func Offset: 0
	// Line 4279, Address: 0x29ea48, Func Offset: 0x8
	// Line 4282, Address: 0x29ea50, Func Offset: 0x10
	// Line 4286, Address: 0x29ea60, Func Offset: 0x20
	// Line 4287, Address: 0x29ea64, Func Offset: 0x24
	// Line 4288, Address: 0x29ea70, Func Offset: 0x30
	// Line 4289, Address: 0x29ea7c, Func Offset: 0x3c
	// Line 4290, Address: 0x29ea94, Func Offset: 0x54
	// Line 4291, Address: 0x29eaa0, Func Offset: 0x60
	// Line 4293, Address: 0x29eaa8, Func Offset: 0x68
	// Line 4296, Address: 0x29eab8, Func Offset: 0x78
	// Line 4297, Address: 0x29eacc, Func Offset: 0x8c
	// Line 4298, Address: 0x29ead4, Func Offset: 0x94
	// Line 4299, Address: 0x29eadc, Func Offset: 0x9c
	// Line 4298, Address: 0x29eae0, Func Offset: 0xa0
	// Line 4302, Address: 0x29eae8, Func Offset: 0xa8
	// Line 4306, Address: 0x29eaf4, Func Offset: 0xb4
	// Line 4308, Address: 0x29eb00, Func Offset: 0xc0
	// Line 4309, Address: 0x29eb20, Func Offset: 0xe0
	// Line 4313, Address: 0x29eb28, Func Offset: 0xe8
	// Line 4314, Address: 0x29eb44, Func Offset: 0x104
	// Line 4317, Address: 0x29eb54, Func Offset: 0x114
	// Line 4320, Address: 0x29eb58, Func Offset: 0x118
	// Line 4321, Address: 0x29eb68, Func Offset: 0x128
	// Line 4323, Address: 0x29eb88, Func Offset: 0x148
	// Line 4325, Address: 0x29eb8c, Func Offset: 0x14c
	// Line 4327, Address: 0x29eb9c, Func Offset: 0x15c
	// Line 4325, Address: 0x29eba0, Func Offset: 0x160
	// Line 4330, Address: 0x29ebac, Func Offset: 0x16c
	// Line 4331, Address: 0x29ebb4, Func Offset: 0x174
	// Line 4332, Address: 0x29ebbc, Func Offset: 0x17c
	// Line 4333, Address: 0x29ebc4, Func Offset: 0x184
	// Line 4338, Address: 0x29ebc8, Func Offset: 0x188
	// Line 4343, Address: 0x29ebdc, Func Offset: 0x19c
	// Line 4344, Address: 0x29ebe4, Func Offset: 0x1a4
	// Func End, Address: 0x29ebf8, Func Offset: 0x1b8
}

// 
// Start address: 0x29ec00
void EileenSceneEnd()
{
	_anon3* eil_save;
	sfObj* eil_obj;
	_anon0* eil;
	int stage;
	int scene;
	int next_scene;
	float r;
	float v[4];
	int ret;
	// Line 4354, Address: 0x29ec00, Func Offset: 0
	// Line 4355, Address: 0x29ec18, Func Offset: 0x18
	// Line 4356, Address: 0x29ec20, Func Offset: 0x20
	// Line 4358, Address: 0x29ec28, Func Offset: 0x28
	// Line 4359, Address: 0x29ec30, Func Offset: 0x30
	// Line 4360, Address: 0x29ec38, Func Offset: 0x38
	// Line 4363, Address: 0x29ec40, Func Offset: 0x40
	// Line 4366, Address: 0x29ec50, Func Offset: 0x50
	// Line 4367, Address: 0x29ec5c, Func Offset: 0x5c
	// Line 4368, Address: 0x29ec68, Func Offset: 0x68
	// Line 4370, Address: 0x29ec78, Func Offset: 0x78
	// Line 4373, Address: 0x29ec80, Func Offset: 0x80
	// Line 4374, Address: 0x29ec84, Func Offset: 0x84
	// Line 4377, Address: 0x29ec8c, Func Offset: 0x8c
	// Line 4389, Address: 0x29ec98, Func Offset: 0x98
	// Line 4391, Address: 0x29eca8, Func Offset: 0xa8
	// Line 4392, Address: 0x29ecdc, Func Offset: 0xdc
	// Line 4393, Address: 0x29ece0, Func Offset: 0xe0
	// Line 4394, Address: 0x29ece8, Func Offset: 0xe8
	// Line 4395, Address: 0x29ecf4, Func Offset: 0xf4
	// Line 4397, Address: 0x29ecf8, Func Offset: 0xf8
	// Line 4398, Address: 0x29ed04, Func Offset: 0x104
	// Line 4402, Address: 0x29ed10, Func Offset: 0x110
	// Line 4404, Address: 0x29ed18, Func Offset: 0x118
	// Line 4406, Address: 0x29ed24, Func Offset: 0x124
	// Line 4407, Address: 0x29ed2c, Func Offset: 0x12c
	// Line 4409, Address: 0x29ed38, Func Offset: 0x138
	// Line 4410, Address: 0x29ed44, Func Offset: 0x144
	// Line 4412, Address: 0x29ed50, Func Offset: 0x150
	// Line 4415, Address: 0x29ed5c, Func Offset: 0x15c
	// Line 4416, Address: 0x29ed60, Func Offset: 0x160
	// Line 4417, Address: 0x29ed70, Func Offset: 0x170
	// Line 4419, Address: 0x29ed80, Func Offset: 0x180
	// Line 4420, Address: 0x29ed88, Func Offset: 0x188
	// Line 4422, Address: 0x29ed94, Func Offset: 0x194
	// Line 4428, Address: 0x29ed98, Func Offset: 0x198
	// Line 4429, Address: 0x29eda4, Func Offset: 0x1a4
	// Line 4430, Address: 0x29edac, Func Offset: 0x1ac
	// Line 4431, Address: 0x29edbc, Func Offset: 0x1bc
	// Line 4433, Address: 0x29edd0, Func Offset: 0x1d0
	// Line 4435, Address: 0x29eddc, Func Offset: 0x1dc
	// Line 4438, Address: 0x29ede0, Func Offset: 0x1e0
	// Line 4439, Address: 0x29edec, Func Offset: 0x1ec
	// Line 4440, Address: 0x29edf4, Func Offset: 0x1f4
	// Line 4444, Address: 0x29ee00, Func Offset: 0x200
	// Line 4445, Address: 0x29ee10, Func Offset: 0x210
	// Line 4446, Address: 0x29ee18, Func Offset: 0x218
	// Line 4447, Address: 0x29ee28, Func Offset: 0x228
	// Line 4450, Address: 0x29ee30, Func Offset: 0x230
	// Line 4451, Address: 0x29ee44, Func Offset: 0x244
	// Line 4452, Address: 0x29ee4c, Func Offset: 0x24c
	// Line 4453, Address: 0x29ee58, Func Offset: 0x258
	// Line 4454, Address: 0x29ee5c, Func Offset: 0x25c
	// Line 4457, Address: 0x29ee60, Func Offset: 0x260
	// Line 4458, Address: 0x29ee70, Func Offset: 0x270
	// Line 4460, Address: 0x29ee78, Func Offset: 0x278
	// Line 4461, Address: 0x29ee80, Func Offset: 0x280
	// Func End, Address: 0x29eea0, Func Offset: 0x2a0
}

// 
// Start address: 0x29eea0
int EileenIsWithHenry()
{
	sfObj* eil_obj;
	// Line 4468, Address: 0x29eea0, Func Offset: 0
	// Line 4469, Address: 0x29eea8, Func Offset: 0x8
	// Line 4471, Address: 0x29eeb0, Func Offset: 0x10
	// Line 4472, Address: 0x29eeb8, Func Offset: 0x18
	// Line 4474, Address: 0x29eec0, Func Offset: 0x20
	// Line 4475, Address: 0x29eec4, Func Offset: 0x24
	// Line 4476, Address: 0x29eecc, Func Offset: 0x2c
	// Line 4480, Address: 0x29eed8, Func Offset: 0x38
	// Line 4481, Address: 0x29eeec, Func Offset: 0x4c
	// Line 4483, Address: 0x29eef8, Func Offset: 0x58
	// Line 4484, Address: 0x29ef04, Func Offset: 0x64
	// Line 4487, Address: 0x29ef10, Func Offset: 0x70
	// Line 4490, Address: 0x29ef30, Func Offset: 0x90
	// Func End, Address: 0x29ef3c, Func Offset: 0x9c
}

// 
// Start address: 0x29ef40
void EileenDemoDisplayOn()
{
	sfObj* eil_obj;
	// Line 4496, Address: 0x29ef40, Func Offset: 0
	// Line 4497, Address: 0x29ef48, Func Offset: 0x8
	// Line 4498, Address: 0x29ef54, Func Offset: 0x14
	// Line 4500, Address: 0x29ef5c, Func Offset: 0x1c
	// Line 4501, Address: 0x29ef64, Func Offset: 0x24
	// Func End, Address: 0x29ef74, Func Offset: 0x34
}

// 
// Start address: 0x29ef80
void EileenDemoDisplayOff()
{
	sfObj* eil_obj;
	// Line 4506, Address: 0x29ef80, Func Offset: 0
	// Line 4507, Address: 0x29ef88, Func Offset: 0x8
	// Line 4508, Address: 0x29ef94, Func Offset: 0x14
	// Line 4510, Address: 0x29ef9c, Func Offset: 0x1c
	// Line 4511, Address: 0x29efa4, Func Offset: 0x24
	// Func End, Address: 0x29efb4, Func Offset: 0x34
}

// 
// Start address: 0x29efc0
EileenArmsTypeNo EileenCurrentEquipArms()
{
	sfObj* eil_obj;
	EileenArmsTypeNo saved_date;
	// Line 4518, Address: 0x29efc0, Func Offset: 0
	// Line 4519, Address: 0x29efc8, Func Offset: 0x8
	// Line 4521, Address: 0x29efd0, Func Offset: 0x10
	// Line 4522, Address: 0x29efd8, Func Offset: 0x18
	// Line 4523, Address: 0x29efe0, Func Offset: 0x20
	// Line 4525, Address: 0x29efe8, Func Offset: 0x28
	// Line 4527, Address: 0x29efec, Func Offset: 0x2c
	// Line 4530, Address: 0x29f000, Func Offset: 0x40
	// Func End, Address: 0x29f010, Func Offset: 0x50
}

// 
// Start address: 0x29f010
void EileenCommandEquipArms(EileenArmsTypeNo eileen_arms_type)
{
	sfObj* eil_obj;
	// Line 4535, Address: 0x29f010, Func Offset: 0
	// Line 4536, Address: 0x29f01c, Func Offset: 0xc
	// Line 4538, Address: 0x29f024, Func Offset: 0x14
	// Line 4541, Address: 0x29f02c, Func Offset: 0x1c
	// Line 4543, Address: 0x29f030, Func Offset: 0x20
	// Line 4544, Address: 0x29f034, Func Offset: 0x24
	// Line 4545, Address: 0x29f040, Func Offset: 0x30
	// Func End, Address: 0x29f050, Func Offset: 0x40
}

// 
// Start address: 0x29f050
int EileenCommandGo(float* pos)
{
	sfObj* eil_obj;
	_anon0* eil;
	// Line 4555, Address: 0x29f050, Func Offset: 0
	// Line 4556, Address: 0x29f05c, Func Offset: 0xc
	// Line 4558, Address: 0x29f064, Func Offset: 0x14
	// Line 4559, Address: 0x29f06c, Func Offset: 0x1c
	// Line 4566, Address: 0x29f07c, Func Offset: 0x2c
	// Line 4567, Address: 0x29f084, Func Offset: 0x34
	// Line 4568, Address: 0x29f08c, Func Offset: 0x3c
	// Line 4569, Address: 0x29f090, Func Offset: 0x40
	// Func End, Address: 0x29f0a0, Func Offset: 0x50
}

// 
// Start address: 0x29f0a0
int EileenCommandGoResult()
{
	sfObj* eil_obj;
	// Line 4578, Address: 0x29f0a0, Func Offset: 0
	// Line 4579, Address: 0x29f0a8, Func Offset: 0x8
	// Line 4581, Address: 0x29f0b0, Func Offset: 0x10
	// Line 4582, Address: 0x29f0b8, Func Offset: 0x18
	// Line 4583, Address: 0x29f0c0, Func Offset: 0x20
	// Line 4584, Address: 0x29f0c4, Func Offset: 0x24
	// Line 4585, Address: 0x29f0d4, Func Offset: 0x34
	// Line 4587, Address: 0x29f0e0, Func Offset: 0x40
	// Line 4589, Address: 0x29f0f8, Func Offset: 0x58
	// Func End, Address: 0x29f104, Func Offset: 0x64
}

// 
// Start address: 0x29f110
int EileenCommandTurn(float* pos)
{
	sfObj* eil_obj;
	_anon0* eil;
	// Line 4599, Address: 0x29f110, Func Offset: 0
	// Line 4600, Address: 0x29f11c, Func Offset: 0xc
	// Line 4603, Address: 0x29f128, Func Offset: 0x18
	// Line 4604, Address: 0x29f130, Func Offset: 0x20
	// Line 4605, Address: 0x29f138, Func Offset: 0x28
	// Line 4607, Address: 0x29f13c, Func Offset: 0x2c
	// Line 4608, Address: 0x29f150, Func Offset: 0x40
	// Line 4609, Address: 0x29f158, Func Offset: 0x48
	// Line 4610, Address: 0x29f15c, Func Offset: 0x4c
	// Line 4611, Address: 0x29f160, Func Offset: 0x50
	// Line 4612, Address: 0x29f168, Func Offset: 0x58
	// Line 4613, Address: 0x29f170, Func Offset: 0x60
	// Func End, Address: 0x29f180, Func Offset: 0x70
}

// 
// Start address: 0x29f180
int EileenCommandTurnResult()
{
	sfObj* eil_obj;
	// Line 4622, Address: 0x29f180, Func Offset: 0
	// Line 4623, Address: 0x29f188, Func Offset: 0x8
	// Line 4625, Address: 0x29f190, Func Offset: 0x10
	// Line 4626, Address: 0x29f198, Func Offset: 0x18
	// Line 4627, Address: 0x29f1a0, Func Offset: 0x20
	// Line 4628, Address: 0x29f1a4, Func Offset: 0x24
	// Line 4629, Address: 0x29f1b8, Func Offset: 0x38
	// Line 4631, Address: 0x29f1c0, Func Offset: 0x40
	// Line 4633, Address: 0x29f1d8, Func Offset: 0x58
	// Func End, Address: 0x29f1e4, Func Offset: 0x64
}

// 
// Start address: 0x29f1f0
int EileenCommandTalk(int motion_no)
{
	sfObj* eil_obj;
	// Line 4641, Address: 0x29f1f0, Func Offset: 0
	// Line 4642, Address: 0x29f1fc, Func Offset: 0xc
	// Line 4645, Address: 0x29f204, Func Offset: 0x14
	// Line 4646, Address: 0x29f20c, Func Offset: 0x1c
	// Line 4648, Address: 0x29f218, Func Offset: 0x28
	// Line 4650, Address: 0x29f21c, Func Offset: 0x2c
	// Line 4651, Address: 0x29f228, Func Offset: 0x38
	// Line 4652, Address: 0x29f22c, Func Offset: 0x3c
	// Line 4653, Address: 0x29f230, Func Offset: 0x40
	// Func End, Address: 0x29f240, Func Offset: 0x50
}

// 
// Start address: 0x29f240
void EileenCommandTalkStop()
{
	sfObj* eil_obj;
	// Line 4658, Address: 0x29f240, Func Offset: 0
	// Line 4659, Address: 0x29f248, Func Offset: 0x8
	// Line 4662, Address: 0x29f250, Func Offset: 0x10
	// Line 4665, Address: 0x29f258, Func Offset: 0x18
	// Line 4666, Address: 0x29f25c, Func Offset: 0x1c
	// Line 4667, Address: 0x29f264, Func Offset: 0x24
	// Func End, Address: 0x29f274, Func Offset: 0x34
}

// 
// Start address: 0x29f280
void EileenCommandInsane(int itype)
{
	sfObj* eil_obj;
	// Line 4675, Address: 0x29f280, Func Offset: 0
	// Line 4676, Address: 0x29f28c, Func Offset: 0xc
	// Line 4679, Address: 0x29f294, Func Offset: 0x14
	// Line 4681, Address: 0x29f29c, Func Offset: 0x1c
	// Line 4683, Address: 0x29f2a0, Func Offset: 0x20
	// Line 4684, Address: 0x29f2ac, Func Offset: 0x2c
	// Line 4685, Address: 0x29f2b0, Func Offset: 0x30
	// Func End, Address: 0x29f2c0, Func Offset: 0x40
}

// 
// Start address: 0x29f2c0
void EileenCommandInsaneStop()
{
	sfObj* eil_obj;
	// Line 4690, Address: 0x29f2c0, Func Offset: 0
	// Line 4691, Address: 0x29f2c8, Func Offset: 0x8
	// Line 4694, Address: 0x29f2d0, Func Offset: 0x10
	// Line 4696, Address: 0x29f2d8, Func Offset: 0x18
	// Line 4697, Address: 0x29f2dc, Func Offset: 0x1c
	// Line 4698, Address: 0x29f2e4, Func Offset: 0x24
	// Func End, Address: 0x29f2f4, Func Offset: 0x34
}

// 
// Start address: 0x29f300
void EileenCommandTurnFace(float* pos)
{
	sfObj* eil_obj;
	_anon0* eil;
	// Line 4708, Address: 0x29f300, Func Offset: 0
	// Line 4709, Address: 0x29f30c, Func Offset: 0xc
	// Line 4712, Address: 0x29f314, Func Offset: 0x14
	// Line 4716, Address: 0x29f31c, Func Offset: 0x1c
	// Line 4717, Address: 0x29f324, Func Offset: 0x24
	// Line 4718, Address: 0x29f32c, Func Offset: 0x2c
	// Line 4719, Address: 0x29f338, Func Offset: 0x38
	// Line 4720, Address: 0x29f340, Func Offset: 0x40
	// Line 4721, Address: 0x29f34c, Func Offset: 0x4c
	// Line 4722, Address: 0x29f354, Func Offset: 0x54
	// Line 4723, Address: 0x29f358, Func Offset: 0x58
	// Func End, Address: 0x29f368, Func Offset: 0x68
}

