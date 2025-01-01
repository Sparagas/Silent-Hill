typedef struct _anon0;
typedef struct sfObj;
typedef struct sfCharacter;
typedef struct sgQTObject;
typedef struct sgBone;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef union _anon4;
typedef struct _anon5;
typedef struct sfOffsetAABB;
typedef struct sgAnime;
typedef enum BattleAttackKind : unsigned char;
typedef struct CynthiaWork;
typedef union sfCldBody;
typedef struct sgIKHandle;
typedef enum GameItem : unsigned char;
typedef struct sfCldPart;
typedef struct _GAME_WORK;
typedef struct sfCldObject;
typedef struct BattleHit;
typedef struct _anon6;
typedef enum PlayerExtStatus : unsigned char;
typedef union _anon7;
typedef struct _anon8;
typedef enum BattleHitResult : unsigned char;
typedef struct sgQTNode;
typedef struct _anon9;
typedef struct sgSVModel;
typedef struct _anon10;
typedef struct _anon11;
typedef enum sgIKSolveResult : unsigned char;
typedef struct _anon12;
typedef struct _anon13;
typedef struct _anon14;
typedef struct EventFlag;

typedef sgIKSolveResult(*type_4)();
typedef void(*type_11)(sfObj*);
typedef void(*type_14)(sgAnime*, int);
typedef void(*type_15)(sfObj*);
typedef void(*type_17)(sfObj*);
typedef void(*type_19)(sfObj*);
typedef void(*type_23)(sfObj*);
typedef void(*type_34)(_anon9*, int, int, float*);

typedef float type_0[4][2];
typedef unsigned char type_1[320];
typedef _anon11 type_2[2];
typedef _anon14 type_3[4];
typedef _anon4 type_5[0];
typedef int type_6[1];
typedef int type_7[1];
typedef unsigned char type_8[3];
typedef int type_9[1];
typedef int type_10[1];
typedef void* type_12[4];
typedef int type_13[1];
typedef float type_16[4];
typedef _anon7 type_18[256];
typedef unsigned char type_20[4];
typedef unsigned char type_21[8];
typedef short type_22[2];
typedef unsigned short type_24[2];
typedef char type_25[4];
typedef unsigned char type_26[4];
typedef char type_27[21];
typedef float type_28[1];
typedef float type_29[4];
typedef int type_30[1];
typedef sfCldPart* type_31[6];
typedef unsigned char type_32[3];
typedef float type_33[4][4];
typedef int type_35[1];
typedef float type_36[4];
typedef int type_37[1];

struct _anon0
{
	float bmin[4];
	float bmax[4];
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

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon10 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
};

struct sgQTObject
{
	_anon13 bounding_ball;
	sgQTObject* next;
	sgQTObject* prev;
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
	_anon13 ball;
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
	_anon8* current_message;
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

struct _anon2
{
	_anon4 vertex[0];
};

struct _anon3
{
	float mat[4][4];
	float half_w[4];
};

union _anon4
{
	float node[4];
	_anon14 data[4];
};

struct _anon5
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

struct sfOffsetAABB
{
	_anon0 aabb;
	float offset[4];
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

struct CynthiaWork
{
	sfCharacter chara;
	sfCldObject cld_object;
	float local_pos[4];
	int in_use;
	float life;
	float life_max;
};

union sfCldBody
{
	_anon3 obb;
	_anon0 aabb;
	sfOffsetAABB offset_aabb;
	_anon12 line;
	_anon13 sphere;
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

struct _anon6
{
	int dummy;
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

struct sgQTNode
{
	int dummy;
};

struct _anon9
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

struct _anon11
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

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

struct _anon12
{
	float start[4];
	float end[4];
};

struct _anon13
{
	float center[4];
	float radius;
};

struct _anon14
{
	unsigned char next_offset;
	unsigned char flags;
	short id;
};

struct EventFlag
{
	unsigned char flag[320];
};

sfObj* cynthia_obj;
_GAME_WORK gamew;
_anon11 player_ext_info[2];
float sg_vector_unit_z[4];
float sg_vector_unit_y[4];
CynthiaWork cyn_work;
void(*CynthiaDestruct)(sfObj*);
EventFlag event_flag;
void(*Cynthia)(sfObj*);
float sg_vector_unit_w[4];
void(*CynthiaStandingDestruct)(sfObj*);

void CynthiaSaveStatus(_anon1* eil);
void CynAnimeSetDelay(_anon1* eil, void* anm_data, float sec);
void CynAnimeSetMixer(_anon1* eil, void* anm_data0, void* anm_data1);
void StepChange(sfObj* obj, int new_step);
void CynthiaGameInit();
void CynthiaInit(_anon1* eil, CynthiaWork* cyn);
void CynthiaDestruct(sfObj* obj);
void CynthiaFirst(_anon1* eil);
void CynthiaAnalize(_anon1* eil);
void CynthiaCldCheck(_anon1* eil);
void CynthiaThink_ToHenry(_anon1* eil);
void CynthiaThink_ByScene(_anon1* eil);
void CynthiaThink_Collision(_anon1* eil);
void CynthiaThink(_anon1* eil);
void CynWait(sfObj* obj);
void CynFirstWalk(sfObj* obj);
void CynFollow(sfObj* obj);
void CynTurn(sfObj* obj);
void CynPushed(sfObj* obj);
void CynDamage(sfObj* obj);
void CynthiaObjectCollision(_anon1* eil);
void Cynthia(sfObj* obj);
void CynthiaCall();
void CynthiaGetPos(float* v);
void CynthiaGetRot(float* q);
int CynthiaFollowingInit();
int CynthiaFollowing();
int CynthiaFollowingEnd();
void CynthiaSetWithHenry();
void CynthiaSetAlone();
int CynthiaExistence();
void CynthiaCheckAndCall();
void CynthiaStandingDestruct(sfObj* obj);
void CynthiaStanding(sfObj* obj);

// 
// Start address: 0x2f5bf0
void CynthiaSaveStatus(_anon1* eil)
{
	// Line 43, Address: 0x2f5bf0, Func Offset: 0
	// Func End, Address: 0x2f5bf8, Func Offset: 0x8
}

// 
// Start address: 0x2f5c00
void CynAnimeSetDelay(_anon1* eil, void* anm_data, float sec)
{
	_anon6* anm_ctrl;
	// Line 84, Address: 0x2f5c00, Func Offset: 0
	// Line 86, Address: 0x2f5c10, Func Offset: 0x10
	// Line 88, Address: 0x2f5c18, Func Offset: 0x18
	// Line 89, Address: 0x2f5c24, Func Offset: 0x24
	// Line 90, Address: 0x2f5c28, Func Offset: 0x28
	// Line 91, Address: 0x2f5c2c, Func Offset: 0x2c
	// Func End, Address: 0x2f5c40, Func Offset: 0x40
}

// 
// Start address: 0x2f5c40
void CynAnimeSetMixer(_anon1* eil, void* anm_data0, void* anm_data1)
{
	_anon6* anm_ctrl;
	// Line 95, Address: 0x2f5c40, Func Offset: 0
	// Line 96, Address: 0x2f5c50, Func Offset: 0x10
	// Line 97, Address: 0x2f5c54, Func Offset: 0x14
	// Line 99, Address: 0x2f5c5c, Func Offset: 0x1c
	// Line 101, Address: 0x2f5c64, Func Offset: 0x24
	// Line 102, Address: 0x2f5c70, Func Offset: 0x30
	// Line 103, Address: 0x2f5c84, Func Offset: 0x44
	// Line 104, Address: 0x2f5c8c, Func Offset: 0x4c
	// Line 105, Address: 0x2f5c90, Func Offset: 0x50
	// Func End, Address: 0x2f5ca4, Func Offset: 0x64
}

// 
// Start address: 0x2f5cb0
void StepChange(sfObj* obj, int new_step)
{
	// Line 110, Address: 0x2f5cb0, Func Offset: 0
	// Line 111, Address: 0x2f5cbc, Func Offset: 0xc
	// Line 112, Address: 0x2f5cc0, Func Offset: 0x10
	// Line 114, Address: 0x2f5cc4, Func Offset: 0x14
	// Line 116, Address: 0x2f5cd0, Func Offset: 0x20
	// Func End, Address: 0x2f5cd8, Func Offset: 0x28
}

// 
// Start address: 0x2f5ce0
void CynthiaGameInit()
{
	// Line 122, Address: 0x2f5ce0, Func Offset: 0
	// Line 123, Address: 0x2f5ce4, Func Offset: 0x4
	// Func End, Address: 0x2f5cec, Func Offset: 0xc
}

// 
// Start address: 0x2f5cf0
void CynthiaInit(_anon1* eil, CynthiaWork* cyn)
{
	sgAnime* anime;
	int with_henry;
	// Line 127, Address: 0x2f5cf0, Func Offset: 0
	// Line 135, Address: 0x2f5cf4, Func Offset: 0x4
	// Line 127, Address: 0x2f5cf8, Func Offset: 0x8
	// Line 136, Address: 0x2f5cfc, Func Offset: 0xc
	// Line 127, Address: 0x2f5d00, Func Offset: 0x10
	// Line 134, Address: 0x2f5d14, Func Offset: 0x24
	// Line 135, Address: 0x2f5d18, Func Offset: 0x28
	// Line 136, Address: 0x2f5d1c, Func Offset: 0x2c
	// Line 137, Address: 0x2f5d20, Func Offset: 0x30
	// Line 138, Address: 0x2f5d24, Func Offset: 0x34
	// Line 137, Address: 0x2f5d28, Func Offset: 0x38
	// Line 138, Address: 0x2f5d2c, Func Offset: 0x3c
	// Line 141, Address: 0x2f5d30, Func Offset: 0x40
	// Line 142, Address: 0x2f5d34, Func Offset: 0x44
	// Line 143, Address: 0x2f5d44, Func Offset: 0x54
	// Line 146, Address: 0x2f5d70, Func Offset: 0x80
	// Line 147, Address: 0x2f5d88, Func Offset: 0x98
	// Line 148, Address: 0x2f5d90, Func Offset: 0xa0
	// Line 151, Address: 0x2f5dbc, Func Offset: 0xcc
	// Line 152, Address: 0x2f5dd4, Func Offset: 0xe4
	// Line 153, Address: 0x2f5dd8, Func Offset: 0xe8
	// Line 154, Address: 0x2f5de4, Func Offset: 0xf4
	// Line 155, Address: 0x2f5dfc, Func Offset: 0x10c
	// Line 156, Address: 0x2f5e04, Func Offset: 0x114
	// Line 158, Address: 0x2f5e20, Func Offset: 0x130
	// Line 160, Address: 0x2f5e28, Func Offset: 0x138
	// Line 162, Address: 0x2f5e3c, Func Offset: 0x14c
	// Line 161, Address: 0x2f5e40, Func Offset: 0x150
	// Line 163, Address: 0x2f5e4c, Func Offset: 0x15c
	// Line 165, Address: 0x2f5e50, Func Offset: 0x160
	// Line 167, Address: 0x2f5e5c, Func Offset: 0x16c
	// Line 170, Address: 0x2f5e64, Func Offset: 0x174
	// Line 171, Address: 0x2f5e6c, Func Offset: 0x17c
	// Line 172, Address: 0x2f5e78, Func Offset: 0x188
	// Line 174, Address: 0x2f5e80, Func Offset: 0x190
	// Line 175, Address: 0x2f5e88, Func Offset: 0x198
	// Line 176, Address: 0x2f5e98, Func Offset: 0x1a8
	// Line 177, Address: 0x2f5ea8, Func Offset: 0x1b8
	// Func End, Address: 0x2f5ec4, Func Offset: 0x1d4
}

// 
// Start address: 0x2f5ed0
void CynthiaDestruct(sfObj* obj)
{
	// Line 182, Address: 0x2f5ed0, Func Offset: 0
	// Line 186, Address: 0x2f5ee0, Func Offset: 0x10
	// Line 188, Address: 0x2f5ee4, Func Offset: 0x14
	// Line 190, Address: 0x2f5eec, Func Offset: 0x1c
	// Line 191, Address: 0x2f5ef0, Func Offset: 0x20
	// Line 192, Address: 0x2f5ef8, Func Offset: 0x28
	// Line 194, Address: 0x2f5f00, Func Offset: 0x30
	// Line 195, Address: 0x2f5f08, Func Offset: 0x38
	// Func End, Address: 0x2f5f1c, Func Offset: 0x4c
}

// 
// Start address: 0x2f5f20
void CynthiaFirst(_anon1* eil)
{
	sfCharacter* chara;
	float offset[4];
	// Line 200, Address: 0x2f5f20, Func Offset: 0
	// Line 201, Address: 0x2f5f34, Func Offset: 0x14
	// Line 205, Address: 0x2f5f38, Func Offset: 0x18
	// Line 206, Address: 0x2f5f48, Func Offset: 0x28
	// Line 207, Address: 0x2f5f50, Func Offset: 0x30
	// Line 208, Address: 0x2f5f58, Func Offset: 0x38
	// Line 211, Address: 0x2f5f60, Func Offset: 0x40
	// Line 212, Address: 0x2f5f74, Func Offset: 0x54
	// Line 213, Address: 0x2f5f8c, Func Offset: 0x6c
	// Line 216, Address: 0x2f5fac, Func Offset: 0x8c
	// Line 215, Address: 0x2f5fb0, Func Offset: 0x90
	// Line 216, Address: 0x2f5fb4, Func Offset: 0x94
	// Line 217, Address: 0x2f5fb8, Func Offset: 0x98
	// Func End, Address: 0x2f5fcc, Func Offset: 0xac
}

// 
// Start address: 0x2f5fd0
void CynthiaAnalize(_anon1* eil)
{
	float eil_pos[4];
	float eil_rot[4];
	float to_pl[4];
	float angle;
	float r;
	// Line 221, Address: 0x2f5fd0, Func Offset: 0
	// Line 228, Address: 0x2f5fd4, Func Offset: 0x4
	// Line 221, Address: 0x2f5fd8, Func Offset: 0x8
	// Line 228, Address: 0x2f5fdc, Func Offset: 0xc
	// Line 221, Address: 0x2f5fe0, Func Offset: 0x10
	// Line 228, Address: 0x2f5fe8, Func Offset: 0x18
	// Line 229, Address: 0x2f5ff0, Func Offset: 0x20
	// Line 231, Address: 0x2f6000, Func Offset: 0x30
	// Line 232, Address: 0x2f6008, Func Offset: 0x38
	// Line 234, Address: 0x2f6014, Func Offset: 0x44
	// Line 235, Address: 0x2f6034, Func Offset: 0x64
	// Line 239, Address: 0x2f6074, Func Offset: 0xa4
	// Line 236, Address: 0x2f607c, Func Offset: 0xac
	// Line 239, Address: 0x2f6084, Func Offset: 0xb4
	// Line 240, Address: 0x2f608c, Func Offset: 0xbc
	// Line 241, Address: 0x2f6090, Func Offset: 0xc0
	// Func End, Address: 0x2f60a0, Func Offset: 0xd0
}

// 
// Start address: 0x2f60a0
void CynthiaCldCheck(_anon1* eil)
{
	int n_hits;
	int i;
	sfCldPart* hit_part;
	int hit_kind;
	int status;
	// Line 248, Address: 0x2f60a0, Func Offset: 0
	// Line 257, Address: 0x2f60bc, Func Offset: 0x1c
	// Line 260, Address: 0x2f60c0, Func Offset: 0x20
	// Line 261, Address: 0x2f60c4, Func Offset: 0x24
	// Line 262, Address: 0x2f60cc, Func Offset: 0x2c
	// Line 263, Address: 0x2f60d4, Func Offset: 0x34
	// Line 272, Address: 0x2f60dc, Func Offset: 0x3c
	// Line 273, Address: 0x2f60e8, Func Offset: 0x48
	// Line 274, Address: 0x2f60f8, Func Offset: 0x58
	// Line 275, Address: 0x2f6104, Func Offset: 0x64
	// Line 277, Address: 0x2f610c, Func Offset: 0x6c
	// Line 278, Address: 0x2f6120, Func Offset: 0x80
	// Line 279, Address: 0x2f612c, Func Offset: 0x8c
	// Line 280, Address: 0x2f6130, Func Offset: 0x90
	// Line 281, Address: 0x2f613c, Func Offset: 0x9c
	// Line 282, Address: 0x2f6140, Func Offset: 0xa0
	// Line 283, Address: 0x2f614c, Func Offset: 0xac
	// Line 286, Address: 0x2f6150, Func Offset: 0xb0
	// Line 288, Address: 0x2f6160, Func Offset: 0xc0
	// Line 290, Address: 0x2f6168, Func Offset: 0xc8
	// Line 291, Address: 0x2f6178, Func Offset: 0xd8
	// Func End, Address: 0x2f6194, Func Offset: 0xf4
}

// 
// Start address: 0x2f61a0
void CynthiaThink_ToHenry(_anon1* eil)
{
	float move_dir[4];
	float move_target[4];
	float r;
	float angle;
	int path_result;
	// Line 297, Address: 0x2f61a0, Func Offset: 0
	// Line 306, Address: 0x2f61a8, Func Offset: 0x8
	// Line 297, Address: 0x2f61ac, Func Offset: 0xc
	// Line 306, Address: 0x2f61bc, Func Offset: 0x1c
	// Line 307, Address: 0x2f61c8, Func Offset: 0x28
	// Line 311, Address: 0x2f61d4, Func Offset: 0x34
	// Line 312, Address: 0x2f61e4, Func Offset: 0x44
	// Line 313, Address: 0x2f61f0, Func Offset: 0x50
	// Line 314, Address: 0x2f61f8, Func Offset: 0x58
	// Line 315, Address: 0x2f61fc, Func Offset: 0x5c
	// Line 322, Address: 0x2f6200, Func Offset: 0x60
	// Line 323, Address: 0x2f620c, Func Offset: 0x6c
	// Line 324, Address: 0x2f621c, Func Offset: 0x7c
	// Line 326, Address: 0x2f6224, Func Offset: 0x84
	// Line 327, Address: 0x2f6244, Func Offset: 0xa4
	// Line 328, Address: 0x2f6270, Func Offset: 0xd0
	// Line 331, Address: 0x2f6280, Func Offset: 0xe0
	// Line 333, Address: 0x2f6288, Func Offset: 0xe8
	// Line 338, Address: 0x2f6290, Func Offset: 0xf0
	// Line 342, Address: 0x2f62a0, Func Offset: 0x100
	// Line 343, Address: 0x2f62ac, Func Offset: 0x10c
	// Line 344, Address: 0x2f62b0, Func Offset: 0x110
	// Line 345, Address: 0x2f62b8, Func Offset: 0x118
	// Line 347, Address: 0x2f62c0, Func Offset: 0x120
	// Line 348, Address: 0x2f62e0, Func Offset: 0x140
	// Line 352, Address: 0x2f62e8, Func Offset: 0x148
	// Line 353, Address: 0x2f630c, Func Offset: 0x16c
	// Line 357, Address: 0x2f6310, Func Offset: 0x170
	// Func End, Address: 0x2f6328, Func Offset: 0x188
}

// 
// Start address: 0x2f6330
void CynthiaThink_ByScene(_anon1* eil)
{
	float pl_pos[4];
	int scene_no;
	// Line 364, Address: 0x2f6330, Func Offset: 0
	// Line 367, Address: 0x2f6334, Func Offset: 0x4
	// Line 364, Address: 0x2f6338, Func Offset: 0x8
	// Line 367, Address: 0x2f633c, Func Offset: 0xc
	// Line 368, Address: 0x2f6344, Func Offset: 0x14
	// Line 370, Address: 0x2f6358, Func Offset: 0x28
	// Line 371, Address: 0x2f6374, Func Offset: 0x44
	// Line 372, Address: 0x2f6384, Func Offset: 0x54
	// Line 376, Address: 0x2f6388, Func Offset: 0x58
	// Line 377, Address: 0x2f63a8, Func Offset: 0x78
	// Line 378, Address: 0x2f63b8, Func Offset: 0x88
	// Line 381, Address: 0x2f63bc, Func Offset: 0x8c
	// Line 383, Address: 0x2f63c0, Func Offset: 0x90
	// Func End, Address: 0x2f63c8, Func Offset: 0x98
}

// 
// Start address: 0x2f63d0
void CynthiaThink_Collision(_anon1* eil)
{
	// Line 388, Address: 0x2f63d0, Func Offset: 0
	// Line 389, Address: 0x2f63d4, Func Offset: 0x4
	// Line 392, Address: 0x2f63dc, Func Offset: 0xc
	// Line 394, Address: 0x2f6414, Func Offset: 0x44
	// Line 395, Address: 0x2f6418, Func Offset: 0x48
	// Line 396, Address: 0x2f641c, Func Offset: 0x4c
	// Line 401, Address: 0x2f6424, Func Offset: 0x54
	// Line 402, Address: 0x2f6428, Func Offset: 0x58
	// Line 406, Address: 0x2f6430, Func Offset: 0x60
	// Func End, Address: 0x2f6438, Func Offset: 0x68
}

// 
// Start address: 0x2f6440
void CynthiaThink(_anon1* eil)
{
	// Line 411, Address: 0x2f6440, Func Offset: 0
	// Line 415, Address: 0x2f6444, Func Offset: 0x4
	// Line 411, Address: 0x2f6448, Func Offset: 0x8
	// Line 412, Address: 0x2f6450, Func Offset: 0x10
	// Line 415, Address: 0x2f6454, Func Offset: 0x14
	// Line 416, Address: 0x2f6460, Func Offset: 0x20
	// Line 417, Address: 0x2f6464, Func Offset: 0x24
	// Line 418, Address: 0x2f646c, Func Offset: 0x2c
	// Line 420, Address: 0x2f6470, Func Offset: 0x30
	// Line 421, Address: 0x2f6478, Func Offset: 0x38
	// Line 424, Address: 0x2f6480, Func Offset: 0x40
	// Line 427, Address: 0x2f6488, Func Offset: 0x48
	// Line 428, Address: 0x2f6498, Func Offset: 0x58
	// Line 429, Address: 0x2f64a4, Func Offset: 0x64
	// Line 431, Address: 0x2f64a8, Func Offset: 0x68
	// Func End, Address: 0x2f64b8, Func Offset: 0x78
}

// 
// Start address: 0x2f64c0
void CynWait(sfObj* obj)
{
	_anon1* eil;
	float v[4];
	// Line 436, Address: 0x2f64c0, Func Offset: 0
	// Line 440, Address: 0x2f64c4, Func Offset: 0x4
	// Line 436, Address: 0x2f64c8, Func Offset: 0x8
	// Line 437, Address: 0x2f64d8, Func Offset: 0x18
	// Line 440, Address: 0x2f64dc, Func Offset: 0x1c
	// Line 445, Address: 0x2f6500, Func Offset: 0x40
	// Line 442, Address: 0x2f6504, Func Offset: 0x44
	// Line 445, Address: 0x2f6508, Func Offset: 0x48
	// Line 447, Address: 0x2f6528, Func Offset: 0x68
	// Line 448, Address: 0x2f6568, Func Offset: 0xa8
	// Line 449, Address: 0x2f6574, Func Offset: 0xb4
	// Line 450, Address: 0x2f6578, Func Offset: 0xb8
	// Line 451, Address: 0x2f6584, Func Offset: 0xc4
	// Line 452, Address: 0x2f658c, Func Offset: 0xcc
	// Line 453, Address: 0x2f659c, Func Offset: 0xdc
	// Line 452, Address: 0x2f65a0, Func Offset: 0xe0
	// Line 453, Address: 0x2f65ac, Func Offset: 0xec
	// Line 452, Address: 0x2f65b0, Func Offset: 0xf0
	// Line 453, Address: 0x2f65b4, Func Offset: 0xf4
	// Line 454, Address: 0x2f65bc, Func Offset: 0xfc
	// Line 455, Address: 0x2f65c8, Func Offset: 0x108
	// Line 456, Address: 0x2f65d4, Func Offset: 0x114
	// Line 458, Address: 0x2f65e0, Func Offset: 0x120
	// Line 459, Address: 0x2f65f0, Func Offset: 0x130
	// Line 460, Address: 0x2f6610, Func Offset: 0x150
	// Line 462, Address: 0x2f6618, Func Offset: 0x158
	// Line 464, Address: 0x2f6620, Func Offset: 0x160
	// Line 465, Address: 0x2f662c, Func Offset: 0x16c
	// Line 468, Address: 0x2f6630, Func Offset: 0x170
	// Func End, Address: 0x2f6644, Func Offset: 0x184
}

// 
// Start address: 0x2f6650
void CynFirstWalk(sfObj* obj)
{
	_anon1* eil;
	float v[4];
	float q[4];
	// Line 472, Address: 0x2f6650, Func Offset: 0
	// Line 478, Address: 0x2f6654, Func Offset: 0x4
	// Line 472, Address: 0x2f6658, Func Offset: 0x8
	// Line 473, Address: 0x2f6668, Func Offset: 0x18
	// Line 478, Address: 0x2f666c, Func Offset: 0x1c
	// Line 482, Address: 0x2f6688, Func Offset: 0x38
	// Line 480, Address: 0x2f668c, Func Offset: 0x3c
	// Line 482, Address: 0x2f6690, Func Offset: 0x40
	// Line 484, Address: 0x2f66b0, Func Offset: 0x60
	// Line 485, Address: 0x2f66bc, Func Offset: 0x6c
	// Line 486, Address: 0x2f66d0, Func Offset: 0x80
	// Line 487, Address: 0x2f66dc, Func Offset: 0x8c
	// Line 488, Address: 0x2f66e0, Func Offset: 0x90
	// Line 489, Address: 0x2f66e8, Func Offset: 0x98
	// Line 491, Address: 0x2f66f4, Func Offset: 0xa4
	// Line 492, Address: 0x2f66f8, Func Offset: 0xa8
	// Line 493, Address: 0x2f6704, Func Offset: 0xb4
	// Line 494, Address: 0x2f670c, Func Offset: 0xbc
	// Line 495, Address: 0x2f6714, Func Offset: 0xc4
	// Line 496, Address: 0x2f6724, Func Offset: 0xd4
	// Line 500, Address: 0x2f6730, Func Offset: 0xe0
	// Func End, Address: 0x2f6744, Func Offset: 0xf4
}

// 
// Start address: 0x2f6750
void CynFollow(sfObj* obj)
{
	_anon1* eil;
	float v[4];
	float q[4];
	sgAnime* anm;
	float r;
	float angle;
	float speed_ratio;
	int slowdown;
	// Line 507, Address: 0x2f6750, Func Offset: 0
	// Line 508, Address: 0x2f6770, Func Offset: 0x20
	// Line 521, Address: 0x2f6774, Func Offset: 0x24
	// Line 522, Address: 0x2f6780, Func Offset: 0x30
	// Line 523, Address: 0x2f678c, Func Offset: 0x3c
	// Line 524, Address: 0x2f6798, Func Offset: 0x48
	// Line 523, Address: 0x2f679c, Func Offset: 0x4c
	// Line 524, Address: 0x2f67b0, Func Offset: 0x60
	// Line 525, Address: 0x2f67b8, Func Offset: 0x68
	// Line 526, Address: 0x2f67c0, Func Offset: 0x70
	// Line 527, Address: 0x2f67cc, Func Offset: 0x7c
	// Line 530, Address: 0x2f67d8, Func Offset: 0x88
	// Line 535, Address: 0x2f67f8, Func Offset: 0xa8
	// Line 532, Address: 0x2f67fc, Func Offset: 0xac
	// Line 535, Address: 0x2f6800, Func Offset: 0xb0
	// Line 536, Address: 0x2f682c, Func Offset: 0xdc
	// Line 537, Address: 0x2f6834, Func Offset: 0xe4
	// Line 538, Address: 0x2f6840, Func Offset: 0xf0
	// Line 540, Address: 0x2f684c, Func Offset: 0xfc
	// Line 544, Address: 0x2f6850, Func Offset: 0x100
	// Line 546, Address: 0x2f685c, Func Offset: 0x10c
	// Line 547, Address: 0x2f6868, Func Offset: 0x118
	// Line 548, Address: 0x2f6884, Func Offset: 0x134
	// Line 549, Address: 0x2f68a4, Func Offset: 0x154
	// Line 550, Address: 0x2f68b8, Func Offset: 0x168
	// Line 552, Address: 0x2f68c8, Func Offset: 0x178
	// Line 553, Address: 0x2f68e4, Func Offset: 0x194
	// Line 555, Address: 0x2f68e8, Func Offset: 0x198
	// Line 556, Address: 0x2f6914, Func Offset: 0x1c4
	// Line 561, Address: 0x2f6924, Func Offset: 0x1d4
	// Line 563, Address: 0x2f693c, Func Offset: 0x1ec
	// Line 564, Address: 0x2f6958, Func Offset: 0x208
	// Line 566, Address: 0x2f6960, Func Offset: 0x210
	// Line 567, Address: 0x2f6980, Func Offset: 0x230
	// Line 568, Address: 0x2f6994, Func Offset: 0x244
	// Line 569, Address: 0x2f69a8, Func Offset: 0x258
	// Line 570, Address: 0x2f69c4, Func Offset: 0x274
	// Line 571, Address: 0x2f69cc, Func Offset: 0x27c
	// Line 572, Address: 0x2f69d8, Func Offset: 0x288
	// Line 573, Address: 0x2f69f0, Func Offset: 0x2a0
	// Line 574, Address: 0x2f69f8, Func Offset: 0x2a8
	// Line 575, Address: 0x2f6a00, Func Offset: 0x2b0
	// Line 576, Address: 0x2f6a10, Func Offset: 0x2c0
	// Line 578, Address: 0x2f6a20, Func Offset: 0x2d0
	// Line 581, Address: 0x2f6a2c, Func Offset: 0x2dc
	// Line 583, Address: 0x2f6a38, Func Offset: 0x2e8
	// Line 584, Address: 0x2f6a4c, Func Offset: 0x2fc
	// Line 588, Address: 0x2f6a50, Func Offset: 0x300
	// Line 589, Address: 0x2f6a5c, Func Offset: 0x30c
	// Line 591, Address: 0x2f6a70, Func Offset: 0x320
	// Line 592, Address: 0x2f6a7c, Func Offset: 0x32c
	// Line 594, Address: 0x2f6a80, Func Offset: 0x330
	// Line 596, Address: 0x2f6a94, Func Offset: 0x344
	// Line 597, Address: 0x2f6ab4, Func Offset: 0x364
	// Line 600, Address: 0x2f6abc, Func Offset: 0x36c
	// Line 599, Address: 0x2f6ac0, Func Offset: 0x370
	// Line 600, Address: 0x2f6ac4, Func Offset: 0x374
	// Line 597, Address: 0x2f6ac8, Func Offset: 0x378
	// Line 600, Address: 0x2f6acc, Func Offset: 0x37c
	// Line 599, Address: 0x2f6ad4, Func Offset: 0x384
	// Line 600, Address: 0x2f6ad8, Func Offset: 0x388
	// Line 601, Address: 0x2f6aec, Func Offset: 0x39c
	// Line 602, Address: 0x2f6af4, Func Offset: 0x3a4
	// Line 603, Address: 0x2f6b00, Func Offset: 0x3b0
	// Line 604, Address: 0x2f6b04, Func Offset: 0x3b4
	// Line 608, Address: 0x2f6b08, Func Offset: 0x3b8
	// Line 609, Address: 0x2f6b0c, Func Offset: 0x3bc
	// Line 610, Address: 0x2f6b18, Func Offset: 0x3c8
	// Line 611, Address: 0x2f6b30, Func Offset: 0x3e0
	// Line 612, Address: 0x2f6b48, Func Offset: 0x3f8
	// Line 613, Address: 0x2f6b4c, Func Offset: 0x3fc
	// Line 612, Address: 0x2f6b50, Func Offset: 0x400
	// Line 613, Address: 0x2f6b54, Func Offset: 0x404
	// Line 612, Address: 0x2f6b5c, Func Offset: 0x40c
	// Line 613, Address: 0x2f6b60, Func Offset: 0x410
	// Line 614, Address: 0x2f6b70, Func Offset: 0x420
	// Line 615, Address: 0x2f6b78, Func Offset: 0x428
	// Line 614, Address: 0x2f6b84, Func Offset: 0x434
	// Line 615, Address: 0x2f6b88, Func Offset: 0x438
	// Line 614, Address: 0x2f6b8c, Func Offset: 0x43c
	// Line 616, Address: 0x2f6b90, Func Offset: 0x440
	// Line 617, Address: 0x2f6b98, Func Offset: 0x448
	// Line 618, Address: 0x2f6bb0, Func Offset: 0x460
	// Line 619, Address: 0x2f6bb4, Func Offset: 0x464
	// Line 618, Address: 0x2f6bb8, Func Offset: 0x468
	// Line 619, Address: 0x2f6bbc, Func Offset: 0x46c
	// Line 618, Address: 0x2f6bc4, Func Offset: 0x474
	// Line 619, Address: 0x2f6bc8, Func Offset: 0x478
	// Line 620, Address: 0x2f6bd8, Func Offset: 0x488
	// Line 621, Address: 0x2f6bf8, Func Offset: 0x4a8
	// Line 622, Address: 0x2f6bfc, Func Offset: 0x4ac
	// Line 625, Address: 0x2f6c00, Func Offset: 0x4b0
	// Line 626, Address: 0x2f6c0c, Func Offset: 0x4bc
	// Line 628, Address: 0x2f6c18, Func Offset: 0x4c8
	// Line 629, Address: 0x2f6c20, Func Offset: 0x4d0
	// Line 630, Address: 0x2f6c30, Func Offset: 0x4e0
	// Line 633, Address: 0x2f6c38, Func Offset: 0x4e8
	// Func End, Address: 0x2f6c58, Func Offset: 0x508
}

// 
// Start address: 0x2f6c60
void CynTurn(sfObj* obj)
{
	_anon1* eil;
	sgAnime* anm;
	sfCharacter* chara;
	float q[4];
	float turn_angle;
	float v[4];
	// Line 638, Address: 0x2f6c60, Func Offset: 0
	// Line 649, Address: 0x2f6c64, Func Offset: 0x4
	// Line 638, Address: 0x2f6c68, Func Offset: 0x8
	// Line 639, Address: 0x2f6c84, Func Offset: 0x24
	// Line 649, Address: 0x2f6c8c, Func Offset: 0x2c
	// Line 650, Address: 0x2f6c94, Func Offset: 0x34
	// Line 651, Address: 0x2f6ca0, Func Offset: 0x40
	// Line 650, Address: 0x2f6ca4, Func Offset: 0x44
	// Line 651, Address: 0x2f6cb8, Func Offset: 0x58
	// Line 653, Address: 0x2f6cc0, Func Offset: 0x60
	// Line 655, Address: 0x2f6ce8, Func Offset: 0x88
	// Line 658, Address: 0x2f6cec, Func Offset: 0x8c
	// Line 659, Address: 0x2f6cfc, Func Offset: 0x9c
	// Line 658, Address: 0x2f6d04, Func Offset: 0xa4
	// Line 661, Address: 0x2f6d08, Func Offset: 0xa8
	// Line 662, Address: 0x2f6d34, Func Offset: 0xd4
	// Line 664, Address: 0x2f6d38, Func Offset: 0xd8
	// Line 665, Address: 0x2f6d44, Func Offset: 0xe4
	// Line 666, Address: 0x2f6d5c, Func Offset: 0xfc
	// Line 667, Address: 0x2f6d68, Func Offset: 0x108
	// Line 668, Address: 0x2f6d70, Func Offset: 0x110
	// Line 670, Address: 0x2f6d7c, Func Offset: 0x11c
	// Line 672, Address: 0x2f6d80, Func Offset: 0x120
	// Line 673, Address: 0x2f6d8c, Func Offset: 0x12c
	// Line 674, Address: 0x2f6da0, Func Offset: 0x140
	// Line 676, Address: 0x2f6da8, Func Offset: 0x148
	// Line 677, Address: 0x2f6dbc, Func Offset: 0x15c
	// Line 678, Address: 0x2f6dc4, Func Offset: 0x164
	// Line 679, Address: 0x2f6dcc, Func Offset: 0x16c
	// Line 681, Address: 0x2f6dd0, Func Offset: 0x170
	// Line 682, Address: 0x2f6ddc, Func Offset: 0x17c
	// Line 685, Address: 0x2f6de0, Func Offset: 0x180
	// Line 682, Address: 0x2f6de4, Func Offset: 0x184
	// Line 685, Address: 0x2f6df0, Func Offset: 0x190
	// Line 686, Address: 0x2f6dfc, Func Offset: 0x19c
	// Line 687, Address: 0x2f6e10, Func Offset: 0x1b0
	// Line 688, Address: 0x2f6e20, Func Offset: 0x1c0
	// Line 690, Address: 0x2f6e38, Func Offset: 0x1d8
	// Line 691, Address: 0x2f6e50, Func Offset: 0x1f0
	// Line 692, Address: 0x2f6e5c, Func Offset: 0x1fc
	// Line 693, Address: 0x2f6e64, Func Offset: 0x204
	// Line 694, Address: 0x2f6e74, Func Offset: 0x214
	// Line 696, Address: 0x2f6e78, Func Offset: 0x218
	// Line 697, Address: 0x2f6e90, Func Offset: 0x230
	// Line 698, Address: 0x2f6e9c, Func Offset: 0x23c
	// Line 699, Address: 0x2f6ea4, Func Offset: 0x244
	// Line 700, Address: 0x2f6eb8, Func Offset: 0x258
	// Line 701, Address: 0x2f6ebc, Func Offset: 0x25c
	// Line 703, Address: 0x2f6ec0, Func Offset: 0x260
	// Line 704, Address: 0x2f6ed4, Func Offset: 0x274
	// Line 705, Address: 0x2f6eec, Func Offset: 0x28c
	// Line 706, Address: 0x2f6f00, Func Offset: 0x2a0
	// Line 708, Address: 0x2f6f08, Func Offset: 0x2a8
	// Line 709, Address: 0x2f6f1c, Func Offset: 0x2bc
	// Line 711, Address: 0x2f6f28, Func Offset: 0x2c8
	// Line 714, Address: 0x2f6f30, Func Offset: 0x2d0
	// Line 715, Address: 0x2f6f38, Func Offset: 0x2d8
	// Line 717, Address: 0x2f6f3c, Func Offset: 0x2dc
	// Line 718, Address: 0x2f6f40, Func Offset: 0x2e0
	// Func End, Address: 0x2f6f60, Func Offset: 0x300
}

// 
// Start address: 0x2f6f60
void CynPushed(sfObj* obj)
{
	_anon1* eil;
	float eil_pos[4];
	float v[4];
	int hit_front;
	float r;
	float sp;
	sgAnime* anm;
	// Line 724, Address: 0x2f6f60, Func Offset: 0
	// Line 743, Address: 0x2f6f68, Func Offset: 0x8
	// Line 724, Address: 0x2f6f6c, Func Offset: 0xc
	// Line 725, Address: 0x2f6f7c, Func Offset: 0x1c
	// Line 743, Address: 0x2f6f80, Func Offset: 0x20
	// Line 744, Address: 0x2f6f88, Func Offset: 0x28
	// Line 745, Address: 0x2f6fa8, Func Offset: 0x48
	// Line 746, Address: 0x2f6fac, Func Offset: 0x4c
	// Line 745, Address: 0x2f6fb4, Func Offset: 0x54
	// Line 746, Address: 0x2f6fb8, Func Offset: 0x58
	// Line 747, Address: 0x2f6fdc, Func Offset: 0x7c
	// Line 748, Address: 0x2f7000, Func Offset: 0xa0
	// Line 749, Address: 0x2f7020, Func Offset: 0xc0
	// Line 751, Address: 0x2f7028, Func Offset: 0xc8
	// Line 755, Address: 0x2f7058, Func Offset: 0xf8
	// Line 757, Address: 0x2f7060, Func Offset: 0x100
	// Line 758, Address: 0x2f7068, Func Offset: 0x108
	// Line 759, Address: 0x2f706c, Func Offset: 0x10c
	// Line 760, Address: 0x2f7070, Func Offset: 0x110
	// Line 761, Address: 0x2f7074, Func Offset: 0x114
	// Line 762, Address: 0x2f7080, Func Offset: 0x120
	// Line 766, Address: 0x2f7088, Func Offset: 0x128
	// Line 767, Address: 0x2f70ac, Func Offset: 0x14c
	// Line 768, Address: 0x2f70b4, Func Offset: 0x154
	// Line 769, Address: 0x2f70c8, Func Offset: 0x168
	// Line 770, Address: 0x2f70f4, Func Offset: 0x194
	// Line 771, Address: 0x2f7100, Func Offset: 0x1a0
	// Line 770, Address: 0x2f710c, Func Offset: 0x1ac
	// Line 772, Address: 0x2f7110, Func Offset: 0x1b0
	// Line 771, Address: 0x2f7114, Func Offset: 0x1b4
	// Line 773, Address: 0x2f7118, Func Offset: 0x1b8
	// Line 772, Address: 0x2f711c, Func Offset: 0x1bc
	// Line 774, Address: 0x2f7120, Func Offset: 0x1c0
	// Line 778, Address: 0x2f7128, Func Offset: 0x1c8
	// Line 779, Address: 0x2f714c, Func Offset: 0x1ec
	// Line 780, Address: 0x2f7178, Func Offset: 0x218
	// Line 781, Address: 0x2f7184, Func Offset: 0x224
	// Line 782, Address: 0x2f7188, Func Offset: 0x228
	// Line 781, Address: 0x2f718c, Func Offset: 0x22c
	// Line 780, Address: 0x2f7194, Func Offset: 0x234
	// Line 781, Address: 0x2f7198, Func Offset: 0x238
	// Line 782, Address: 0x2f719c, Func Offset: 0x23c
	// Line 783, Address: 0x2f71a0, Func Offset: 0x240
	// Line 784, Address: 0x2f71a8, Func Offset: 0x248
	// Line 788, Address: 0x2f71b0, Func Offset: 0x250
	// Line 789, Address: 0x2f71bc, Func Offset: 0x25c
	// Line 790, Address: 0x2f71cc, Func Offset: 0x26c
	// Line 789, Address: 0x2f71d0, Func Offset: 0x270
	// Line 790, Address: 0x2f71dc, Func Offset: 0x27c
	// Line 789, Address: 0x2f71e0, Func Offset: 0x280
	// Line 790, Address: 0x2f71e4, Func Offset: 0x284
	// Line 792, Address: 0x2f71ec, Func Offset: 0x28c
	// Line 793, Address: 0x2f71f0, Func Offset: 0x290
	// Line 792, Address: 0x2f71f4, Func Offset: 0x294
	// Line 793, Address: 0x2f71f8, Func Offset: 0x298
	// Line 792, Address: 0x2f7204, Func Offset: 0x2a4
	// Line 793, Address: 0x2f7208, Func Offset: 0x2a8
	// Line 796, Address: 0x2f7210, Func Offset: 0x2b0
	// Line 797, Address: 0x2f7228, Func Offset: 0x2c8
	// Line 798, Address: 0x2f7230, Func Offset: 0x2d0
	// Line 799, Address: 0x2f7248, Func Offset: 0x2e8
	// Line 801, Address: 0x2f7250, Func Offset: 0x2f0
	// Line 802, Address: 0x2f7260, Func Offset: 0x300
	// Line 803, Address: 0x2f7264, Func Offset: 0x304
	// Line 804, Address: 0x2f7274, Func Offset: 0x314
	// Line 806, Address: 0x2f7280, Func Offset: 0x320
	// Line 807, Address: 0x2f7288, Func Offset: 0x328
	// Line 808, Address: 0x2f7290, Func Offset: 0x330
	// Line 812, Address: 0x2f7298, Func Offset: 0x338
	// Func End, Address: 0x2f72b0, Func Offset: 0x350
}

// 
// Start address: 0x2f72b0
void CynDamage(sfObj* obj)
{
	float v[4];
	float r;
	_anon1* eil;
	int hit_front;
	int anime_type;
	float q[4];
	sgAnime* anm;
	// Line 821, Address: 0x2f72b0, Func Offset: 0
	// Line 831, Address: 0x2f72b4, Func Offset: 0x4
	// Line 821, Address: 0x2f72b8, Func Offset: 0x8
	// Line 831, Address: 0x2f72cc, Func Offset: 0x1c
	// Line 824, Address: 0x2f72d0, Func Offset: 0x20
	// Line 831, Address: 0x2f72d4, Func Offset: 0x24
	// Line 833, Address: 0x2f72f8, Func Offset: 0x48
	// Line 836, Address: 0x2f72fc, Func Offset: 0x4c
	// Line 837, Address: 0x2f731c, Func Offset: 0x6c
	// Line 838, Address: 0x2f7320, Func Offset: 0x70
	// Line 837, Address: 0x2f7324, Func Offset: 0x74
	// Line 838, Address: 0x2f7328, Func Offset: 0x78
	// Line 839, Address: 0x2f7350, Func Offset: 0xa0
	// Line 840, Address: 0x2f7374, Func Offset: 0xc4
	// Line 841, Address: 0x2f7388, Func Offset: 0xd8
	// Line 843, Address: 0x2f7390, Func Offset: 0xe0
	// Line 846, Address: 0x2f7398, Func Offset: 0xe8
	// Line 847, Address: 0x2f73a0, Func Offset: 0xf0
	// Line 849, Address: 0x2f73a8, Func Offset: 0xf8
	// Line 850, Address: 0x2f73b0, Func Offset: 0x100
	// Line 861, Address: 0x2f73c8, Func Offset: 0x118
	// Line 862, Address: 0x2f73d0, Func Offset: 0x120
	// Line 863, Address: 0x2f73f4, Func Offset: 0x144
	// Line 864, Address: 0x2f7400, Func Offset: 0x150
	// Line 866, Address: 0x2f7410, Func Offset: 0x160
	// Line 868, Address: 0x2f7414, Func Offset: 0x164
	// Line 872, Address: 0x2f7418, Func Offset: 0x168
	// Line 868, Address: 0x2f741c, Func Offset: 0x16c
	// Line 872, Address: 0x2f7420, Func Offset: 0x170
	// Line 873, Address: 0x2f742c, Func Offset: 0x17c
	// Line 874, Address: 0x2f7438, Func Offset: 0x188
	// Line 875, Address: 0x2f7444, Func Offset: 0x194
	// Line 879, Address: 0x2f7450, Func Offset: 0x1a0
	// Line 880, Address: 0x2f745c, Func Offset: 0x1ac
	// Line 881, Address: 0x2f748c, Func Offset: 0x1dc
	// Line 883, Address: 0x2f7490, Func Offset: 0x1e0
	// Line 885, Address: 0x2f74a4, Func Offset: 0x1f4
	// Line 886, Address: 0x2f74c4, Func Offset: 0x214
	// Line 887, Address: 0x2f74d8, Func Offset: 0x228
	// Line 888, Address: 0x2f74e0, Func Offset: 0x230
	// Line 889, Address: 0x2f74fc, Func Offset: 0x24c
	// Line 890, Address: 0x2f7500, Func Offset: 0x250
	// Line 891, Address: 0x2f7514, Func Offset: 0x264
	// Line 892, Address: 0x2f7524, Func Offset: 0x274
	// Line 893, Address: 0x2f7550, Func Offset: 0x2a0
	// Line 895, Address: 0x2f7564, Func Offset: 0x2b4
	// Line 896, Address: 0x2f7570, Func Offset: 0x2c0
	// Line 897, Address: 0x2f7574, Func Offset: 0x2c4
	// Line 899, Address: 0x2f757c, Func Offset: 0x2cc
	// Line 900, Address: 0x2f7584, Func Offset: 0x2d4
	// Line 901, Address: 0x2f7588, Func Offset: 0x2d8
	// Line 902, Address: 0x2f7590, Func Offset: 0x2e0
	// Line 904, Address: 0x2f7594, Func Offset: 0x2e4
	// Line 906, Address: 0x2f7598, Func Offset: 0x2e8
	// Func End, Address: 0x2f75b4, Func Offset: 0x304
}

// 
// Start address: 0x2f75c0
void CynthiaObjectCollision(_anon1* eil)
{
	float v[4];
	float r;
	// Line 914, Address: 0x2f75c0, Func Offset: 0
	// Line 918, Address: 0x2f75c4, Func Offset: 0x4
	// Line 914, Address: 0x2f75c8, Func Offset: 0x8
	// Line 918, Address: 0x2f75cc, Func Offset: 0xc
	// Line 922, Address: 0x2f75d8, Func Offset: 0x18
	// Line 923, Address: 0x2f75e8, Func Offset: 0x28
	// Line 924, Address: 0x2f7610, Func Offset: 0x50
	// Line 925, Address: 0x2f7624, Func Offset: 0x64
	// Line 927, Address: 0x2f7644, Func Offset: 0x84
	// Line 928, Address: 0x2f7648, Func Offset: 0x88
	// Line 929, Address: 0x2f7674, Func Offset: 0xb4
	// Line 930, Address: 0x2f7684, Func Offset: 0xc4
	// Line 933, Address: 0x2f7688, Func Offset: 0xc8
	// Line 935, Address: 0x2f76a8, Func Offset: 0xe8
	// Line 936, Address: 0x2f76cc, Func Offset: 0x10c
	// Line 937, Address: 0x2f76d4, Func Offset: 0x114
	// Line 936, Address: 0x2f76dc, Func Offset: 0x11c
	// Line 937, Address: 0x2f76e0, Func Offset: 0x120
	// Line 938, Address: 0x2f76ec, Func Offset: 0x12c
	// Line 939, Address: 0x2f76f0, Func Offset: 0x130
	// Line 938, Address: 0x2f76f4, Func Offset: 0x134
	// Line 939, Address: 0x2f76f8, Func Offset: 0x138
	// Line 938, Address: 0x2f76fc, Func Offset: 0x13c
	// Line 939, Address: 0x2f7708, Func Offset: 0x148
	// Line 940, Address: 0x2f7724, Func Offset: 0x164
	// Line 941, Address: 0x2f772c, Func Offset: 0x16c
	// Line 942, Address: 0x2f7730, Func Offset: 0x170
	// Func End, Address: 0x2f773c, Func Offset: 0x17c
}

// 
// Start address: 0x2f7740
void Cynthia(sfObj* obj)
{
	_anon1* eil;
	// Line 946, Address: 0x2f7740, Func Offset: 0
	// Line 947, Address: 0x2f7744, Func Offset: 0x4
	// Line 946, Address: 0x2f7748, Func Offset: 0x8
	// Line 947, Address: 0x2f7754, Func Offset: 0x14
	// Line 952, Address: 0x2f775c, Func Offset: 0x1c
	// Line 954, Address: 0x2f777c, Func Offset: 0x3c
	// Line 955, Address: 0x2f7784, Func Offset: 0x44
	// Line 956, Address: 0x2f778c, Func Offset: 0x4c
	// Line 959, Address: 0x2f7790, Func Offset: 0x50
	// Line 961, Address: 0x2f779c, Func Offset: 0x5c
	// Line 962, Address: 0x2f77a8, Func Offset: 0x68
	// Line 965, Address: 0x2f77b0, Func Offset: 0x70
	// Line 967, Address: 0x2f77bc, Func Offset: 0x7c
	// Line 968, Address: 0x2f77c8, Func Offset: 0x88
	// Line 970, Address: 0x2f77d4, Func Offset: 0x94
	// Line 971, Address: 0x2f77dc, Func Offset: 0x9c
	// Line 972, Address: 0x2f77e4, Func Offset: 0xa4
	// Line 975, Address: 0x2f77e8, Func Offset: 0xa8
	// Line 976, Address: 0x2f77f8, Func Offset: 0xb8
	// Line 978, Address: 0x2f7804, Func Offset: 0xc4
	// Line 979, Address: 0x2f7808, Func Offset: 0xc8
	// Line 982, Address: 0x2f7818, Func Offset: 0xd8
	// Line 984, Address: 0x2f7824, Func Offset: 0xe4
	// Line 987, Address: 0x2f7830, Func Offset: 0xf0
	// Line 988, Address: 0x2f7838, Func Offset: 0xf8
	// Line 989, Address: 0x2f7840, Func Offset: 0x100
	// Line 990, Address: 0x2f7848, Func Offset: 0x108
	// Line 991, Address: 0x2f7850, Func Offset: 0x110
	// Line 993, Address: 0x2f785c, Func Offset: 0x11c
	// Line 994, Address: 0x2f7874, Func Offset: 0x134
	// Line 996, Address: 0x2f7880, Func Offset: 0x140
	// Line 998, Address: 0x2f78a8, Func Offset: 0x168
	// Line 999, Address: 0x2f78b0, Func Offset: 0x170
	// Line 1002, Address: 0x2f78b8, Func Offset: 0x178
	// Line 1003, Address: 0x2f78c0, Func Offset: 0x180
	// Line 1005, Address: 0x2f78c8, Func Offset: 0x188
	// Line 1006, Address: 0x2f78d0, Func Offset: 0x190
	// Line 1008, Address: 0x2f78d8, Func Offset: 0x198
	// Line 1009, Address: 0x2f78e0, Func Offset: 0x1a0
	// Line 1011, Address: 0x2f78e8, Func Offset: 0x1a8
	// Line 1012, Address: 0x2f78f0, Func Offset: 0x1b0
	// Line 1014, Address: 0x2f78f8, Func Offset: 0x1b8
	// Line 1017, Address: 0x2f7900, Func Offset: 0x1c0
	// Line 1019, Address: 0x2f7904, Func Offset: 0x1c4
	// Line 1020, Address: 0x2f7910, Func Offset: 0x1d0
	// Line 1021, Address: 0x2f7918, Func Offset: 0x1d8
	// Line 1022, Address: 0x2f7920, Func Offset: 0x1e0
	// Line 1025, Address: 0x2f7928, Func Offset: 0x1e8
	// Line 1026, Address: 0x2f7944, Func Offset: 0x204
	// Line 1028, Address: 0x2f7950, Func Offset: 0x210
	// Line 1030, Address: 0x2f7960, Func Offset: 0x220
	// Line 1031, Address: 0x2f7968, Func Offset: 0x228
	// Func End, Address: 0x2f797c, Func Offset: 0x23c
}

// 
// Start address: 0x2f7980
void CynthiaCall()
{
	sfObj* optr;
	// Line 1037, Address: 0x2f7980, Func Offset: 0
	// Line 1039, Address: 0x2f7984, Func Offset: 0x4
	// Line 1037, Address: 0x2f7988, Func Offset: 0x8
	// Line 1039, Address: 0x2f7990, Func Offset: 0x10
	// Line 1040, Address: 0x2f799c, Func Offset: 0x1c
	// Line 1041, Address: 0x2f79a8, Func Offset: 0x28
	// Line 1042, Address: 0x2f79b8, Func Offset: 0x38
	// Line 1045, Address: 0x2f79c0, Func Offset: 0x40
	// Line 1046, Address: 0x2f79d0, Func Offset: 0x50
	// Line 1047, Address: 0x2f79d8, Func Offset: 0x58
	// Line 1048, Address: 0x2f79e4, Func Offset: 0x64
	// Line 1049, Address: 0x2f79e8, Func Offset: 0x68
	// Func End, Address: 0x2f79f8, Func Offset: 0x78
}

// 
// Start address: 0x2f7a00
void CynthiaGetPos(float* v)
{
	sfObj* obj;
	_anon1* eil;
	sfCharacter* chara;
	// Line 1053, Address: 0x2f7a00, Func Offset: 0
	// Line 1058, Address: 0x2f7a04, Func Offset: 0x4
	// Line 1053, Address: 0x2f7a08, Func Offset: 0x8
	// Line 1058, Address: 0x2f7a0c, Func Offset: 0xc
	// Line 1053, Address: 0x2f7a10, Func Offset: 0x10
	// Line 1058, Address: 0x2f7a18, Func Offset: 0x18
	// Line 1060, Address: 0x2f7a28, Func Offset: 0x28
	// Line 1062, Address: 0x2f7a30, Func Offset: 0x30
	// Line 1063, Address: 0x2f7a34, Func Offset: 0x34
	// Line 1065, Address: 0x2f7a3c, Func Offset: 0x3c
	// Line 1066, Address: 0x2f7a40, Func Offset: 0x40
	// Line 1068, Address: 0x2f7a48, Func Offset: 0x48
	// Line 1069, Address: 0x2f7a58, Func Offset: 0x58
	// Func End, Address: 0x2f7a68, Func Offset: 0x68
}

// 
// Start address: 0x2f7a70
void CynthiaGetRot(float* q)
{
	sfObj* obj;
	_anon1* eil;
	sfCharacter* chara;
	// Line 1073, Address: 0x2f7a70, Func Offset: 0
	// Line 1078, Address: 0x2f7a74, Func Offset: 0x4
	// Line 1073, Address: 0x2f7a78, Func Offset: 0x8
	// Line 1078, Address: 0x2f7a7c, Func Offset: 0xc
	// Line 1073, Address: 0x2f7a80, Func Offset: 0x10
	// Line 1078, Address: 0x2f7a88, Func Offset: 0x18
	// Line 1080, Address: 0x2f7a98, Func Offset: 0x28
	// Line 1082, Address: 0x2f7aa0, Func Offset: 0x30
	// Line 1083, Address: 0x2f7aa4, Func Offset: 0x34
	// Line 1085, Address: 0x2f7aac, Func Offset: 0x3c
	// Line 1086, Address: 0x2f7ab0, Func Offset: 0x40
	// Line 1088, Address: 0x2f7ab8, Func Offset: 0x48
	// Line 1089, Address: 0x2f7ac8, Func Offset: 0x58
	// Func End, Address: 0x2f7ad8, Func Offset: 0x68
}

// 
// Start address: 0x2f7ae0
int CynthiaFollowingInit()
{
	_anon5* eil_save;
	float q[4];
	// Line 1094, Address: 0x2f7ae0, Func Offset: 0
	// Line 1100, Address: 0x2f7af4, Func Offset: 0x14
	// Line 1101, Address: 0x2f7afc, Func Offset: 0x1c
	// Line 1102, Address: 0x2f7b04, Func Offset: 0x24
	// Line 1103, Address: 0x2f7b0c, Func Offset: 0x2c
	// Line 1105, Address: 0x2f7b10, Func Offset: 0x30
	// Line 1107, Address: 0x2f7b18, Func Offset: 0x38
	// Line 1111, Address: 0x2f7b2c, Func Offset: 0x4c
	// Line 1108, Address: 0x2f7b30, Func Offset: 0x50
	// Line 1109, Address: 0x2f7b3c, Func Offset: 0x5c
	// Line 1111, Address: 0x2f7b48, Func Offset: 0x68
	// Line 1112, Address: 0x2f7b50, Func Offset: 0x70
	// Line 1113, Address: 0x2f7b6c, Func Offset: 0x8c
	// Line 1114, Address: 0x2f7b84, Func Offset: 0xa4
	// Line 1115, Address: 0x2f7b90, Func Offset: 0xb0
	// Line 1116, Address: 0x2f7b94, Func Offset: 0xb4
	// Line 1117, Address: 0x2f7ba0, Func Offset: 0xc0
	// Line 1118, Address: 0x2f7bbc, Func Offset: 0xdc
	// Line 1119, Address: 0x2f7bd4, Func Offset: 0xf4
	// Line 1123, Address: 0x2f7be0, Func Offset: 0x100
	// Line 1122, Address: 0x2f7be8, Func Offset: 0x108
	// Line 1123, Address: 0x2f7bec, Func Offset: 0x10c
	// Func End, Address: 0x2f7bf4, Func Offset: 0x114
}

// 
// Start address: 0x2f7c00
int CynthiaFollowing()
{
	// Line 1129, Address: 0x2f7c00, Func Offset: 0
	// Func End, Address: 0x2f7c08, Func Offset: 0x8
}

// 
// Start address: 0x2f7c10
int CynthiaFollowingEnd()
{
	// Line 1133, Address: 0x2f7c10, Func Offset: 0
	// Line 1134, Address: 0x2f7c20, Func Offset: 0x10
	// Line 1135, Address: 0x2f7c28, Func Offset: 0x18
	// Line 1136, Address: 0x2f7c30, Func Offset: 0x20
	// Line 1139, Address: 0x2f7c38, Func Offset: 0x28
	// Line 1138, Address: 0x2f7c3c, Func Offset: 0x2c
	// Line 1139, Address: 0x2f7c40, Func Offset: 0x30
	// Func End, Address: 0x2f7c48, Func Offset: 0x38
}

// 
// Start address: 0x2f7c50
void CynthiaSetWithHenry()
{
	// Line 1146, Address: 0x2f7c50, Func Offset: 0
	// Line 1147, Address: 0x2f7c60, Func Offset: 0x10
	// Line 1148, Address: 0x2f7c68, Func Offset: 0x18
	// Func End, Address: 0x2f7c70, Func Offset: 0x20
}

// 
// Start address: 0x2f7c70
void CynthiaSetAlone()
{
	// Line 1155, Address: 0x2f7c70, Func Offset: 0
	// Line 1156, Address: 0x2f7c80, Func Offset: 0x10
	// Line 1157, Address: 0x2f7c88, Func Offset: 0x18
	// Func End, Address: 0x2f7c90, Func Offset: 0x20
}

// 
// Start address: 0x2f7c90
int CynthiaExistence()
{
	// Line 1173, Address: 0x2f7c90, Func Offset: 0
	// Line 1174, Address: 0x2f7ca0, Func Offset: 0x10
	// Line 1177, Address: 0x2f7cb0, Func Offset: 0x20
	// Line 1178, Address: 0x2f7cb8, Func Offset: 0x28
	// Line 1179, Address: 0x2f7cc0, Func Offset: 0x30
	// Line 1181, Address: 0x2f7cc4, Func Offset: 0x34
	// Line 1183, Address: 0x2f7cd0, Func Offset: 0x40
	// Func End, Address: 0x2f7cd8, Func Offset: 0x48
}

// 
// Start address: 0x2f7ce0
void CynthiaCheckAndCall()
{
	_anon5* eil_save;
	// Line 1188, Address: 0x2f7ce0, Func Offset: 0
	// Line 1190, Address: 0x2f7ce8, Func Offset: 0x8
	// Line 1192, Address: 0x2f7cf8, Func Offset: 0x18
	// Line 1195, Address: 0x2f7d00, Func Offset: 0x20
	// Line 1196, Address: 0x2f7d08, Func Offset: 0x28
	// Line 1197, Address: 0x2f7d10, Func Offset: 0x30
	// Line 1201, Address: 0x2f7d18, Func Offset: 0x38
	// Line 1202, Address: 0x2f7d2c, Func Offset: 0x4c
	// Line 1203, Address: 0x2f7d34, Func Offset: 0x54
	// Line 1204, Address: 0x2f7d3c, Func Offset: 0x5c
	// Line 1207, Address: 0x2f7d40, Func Offset: 0x60
	// Func End, Address: 0x2f7d4c, Func Offset: 0x6c
}

// 
// Start address: 0x2f7d50
void CynthiaStandingDestruct(sfObj* obj)
{
	// Line 1216, Address: 0x2f7d50, Func Offset: 0
	// Line 1220, Address: 0x2f7d60, Func Offset: 0x10
	// Line 1222, Address: 0x2f7d64, Func Offset: 0x14
	// Line 1224, Address: 0x2f7d6c, Func Offset: 0x1c
	// Line 1225, Address: 0x2f7d70, Func Offset: 0x20
	// Line 1226, Address: 0x2f7d78, Func Offset: 0x28
	// Line 1227, Address: 0x2f7d80, Func Offset: 0x30
	// Func End, Address: 0x2f7d94, Func Offset: 0x44
}

// 
// Start address: 0x2f7da0
void CynthiaStanding(sfObj* obj)
{
	_anon1* eil;
	float q[4];
	// Line 1232, Address: 0x2f7da0, Func Offset: 0
	// Line 1240, Address: 0x2f7da4, Func Offset: 0x4
	// Line 1232, Address: 0x2f7da8, Func Offset: 0x8
	// Line 1240, Address: 0x2f7db8, Func Offset: 0x18
	// Line 1233, Address: 0x2f7dbc, Func Offset: 0x1c
	// Line 1240, Address: 0x2f7dc0, Func Offset: 0x20
	// Line 1241, Address: 0x2f7dcc, Func Offset: 0x2c
	// Line 1242, Address: 0x2f7dd4, Func Offset: 0x34
	// Line 1243, Address: 0x2f7ddc, Func Offset: 0x3c
	// Line 1245, Address: 0x2f7de0, Func Offset: 0x40
	// Line 1247, Address: 0x2f7e00, Func Offset: 0x60
	// Line 1251, Address: 0x2f7e08, Func Offset: 0x68
	// Line 1247, Address: 0x2f7e0c, Func Offset: 0x6c
	// Line 1251, Address: 0x2f7e10, Func Offset: 0x70
	// Line 1253, Address: 0x2f7e1c, Func Offset: 0x7c
	// Line 1254, Address: 0x2f7e20, Func Offset: 0x80
	// Line 1255, Address: 0x2f7e30, Func Offset: 0x90
	// Line 1256, Address: 0x2f7e3c, Func Offset: 0x9c
	// Line 1257, Address: 0x2f7e40, Func Offset: 0xa0
	// Line 1258, Address: 0x2f7e58, Func Offset: 0xb8
	// Line 1259, Address: 0x2f7e64, Func Offset: 0xc4
	// Line 1261, Address: 0x2f7e80, Func Offset: 0xe0
	// Line 1262, Address: 0x2f7e90, Func Offset: 0xf0
	// Line 1264, Address: 0x2f7eb8, Func Offset: 0x118
	// Line 1267, Address: 0x2f7ed8, Func Offset: 0x138
	// Line 1268, Address: 0x2f7ee0, Func Offset: 0x140
	// Line 1270, Address: 0x2f7eec, Func Offset: 0x14c
	// Line 1274, Address: 0x2f7ef0, Func Offset: 0x150
	// Line 1275, Address: 0x2f7ef8, Func Offset: 0x158
	// Line 1276, Address: 0x2f7f0c, Func Offset: 0x16c
	// Line 1277, Address: 0x2f7f14, Func Offset: 0x174
	// Line 1280, Address: 0x2f7f1c, Func Offset: 0x17c
	// Line 1281, Address: 0x2f7f20, Func Offset: 0x180
	// Func End, Address: 0x2f7f38, Func Offset: 0x198
}

