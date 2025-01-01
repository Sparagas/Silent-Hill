typedef struct sgBone;
typedef struct sgIKHandle;
typedef struct _anon0;
typedef struct _anon1;
typedef struct sgAnime;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef enum BattleHitResult : unsigned char;
typedef union _anon5;
typedef struct _anon6;
typedef struct sfObj;
typedef struct _anon7;
typedef struct _anon8;
typedef union _anon9;
typedef struct sfCharacter;
typedef struct _anon10;
typedef struct sgVectorCardinalKey;
typedef struct BattleHit;
typedef struct sfCldObject;
typedef enum PlayerExtStatus : unsigned char;
typedef struct sgQTNode;
typedef struct sfCldPart;
typedef struct _anon11;
typedef struct sgSVModel;
typedef struct _anon12;
typedef enum BattleAttackKind : unsigned char;
typedef enum sgIKSolveResult : unsigned char;
typedef struct _anon13;
typedef struct sgQTObject;
typedef struct _GAME_WORK;
typedef struct _anon14;
typedef struct sfOffsetAABB;
typedef union sfCldBody;
typedef enum GameItem : unsigned char;

typedef void(*type_0)(sgAnime*, int);
typedef void(*type_5)(sfObj*);
typedef void(*type_11)(sfObj*);
typedef void(*type_21)(_anon11*, int, int, float*);
typedef sgIKSolveResult(*type_28)();

typedef _anon0 type_1[4];
typedef float type_2[4];
typedef _anon5 type_3[0];
typedef _anon9 type_4[256];
typedef unsigned char type_6[4];
typedef float type_7[4];
typedef float type_8[4];
typedef float type_9[4];
typedef int type_10[1];
typedef int type_12[1];
typedef sfCldPart* type_13[6];
typedef unsigned char type_14[3];
typedef float type_15[4][4];
typedef int type_16[1];
typedef float type_17[4];
typedef float type_18[4][2];
typedef float type_19[4][2];
typedef int type_20[1];
typedef int type_22[1];
typedef float type_23[4][2];
typedef int type_24[1];
typedef short type_25[2];
typedef unsigned short type_26[2];
typedef char type_27[4];
typedef unsigned char type_29[4];
typedef float type_30[1];
typedef int type_31[1];
typedef int type_32[1];
typedef float type_33[4];
typedef _anon1 type_34[4];
typedef unsigned char type_35[3];
typedef float type_36[4][4];
typedef _anon14 type_37[2];
typedef unsigned char type_38[8];
typedef void* type_39[4];

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

struct _anon0
{
	unsigned char next_offset;
	unsigned char flags;
	short id;
};

struct _anon1
{
	float abcd[4];
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

struct _anon2
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
	_anon13* anm_ctrl;
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
	_anon6 ball;
	unsigned char hurdle_status;
	unsigned char slope_status;
	float front_height;
	_anon4* ground_poly;
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
	_anon7* current_message;
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

struct _anon3
{
	float start[4];
	float end[4];
};

struct _anon4
{
	_anon5 vertex[0];
};

enum BattleHitResult : unsigned char
{
	GB_HIT_RES_NONE,
	GB_HIT_RES_PLAYER_HIT,
	GB_HIT_RES_ENEMY_HIT,
	GB_HIT_RES_EILEEN_HIT,
	GB_HIT_RES_END
};

union _anon5
{
	float node[4];
	_anon0 data[4];
};

struct _anon6
{
	float center[4];
	float radius;
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

struct _anon7
{
	int message_pack_id;
	int message_id;
	int voice_no;
	short frames;
	short last;
};

struct _anon8
{
	float bmin[4];
	float bmax[4];
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

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon12 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
};

struct _anon10
{
	float mat[4][4];
	float half_w[4];
};

struct sgVectorCardinalKey
{
	float p[4];
	float Tsd[4];
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

struct sgQTNode
{
	int dummy;
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

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

struct _anon13
{
	int dummy;
};

struct sgQTObject
{
	_anon6 bounding_ball;
	sgQTObject* next;
	sgQTObject* prev;
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

struct _anon14
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

struct sfOffsetAABB
{
	_anon8 aabb;
	float offset[4];
};

union sfCldBody
{
	_anon10 obb;
	_anon8 aabb;
	sfOffsetAABB offset_aabb;
	_anon3 line;
	_anon6 sphere;
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

float sg_vector_unit_y[4];
float sg_vector_unit_w[4];
_anon14 player_ext_info[2];
float sg_vector_unit_z[4];
_GAME_WORK gamew;

void BallToPos(_anon2* eil, float* p);
void BallUpdate(_anon2* eil, float* p);
void BallFix(_anon2* eil, float* p);
int SlipOffWallSide(float* sc, float* current);
int GetStandPositionUpDown(float* sc, float* current);
int GetStandPositionUpDownClose(float* sc, float* current);
int GetStandPosition(float* sc, float* current);
int EilCheckHurdle(_anon2* eil, float* target_);
int EilCheckSide(_anon2* eil);
int EilCheckFrontSide(_anon2* eil);
int EilCheckBackSide(_anon2* eil);
_anon4* CheckGroundPolygon(float* pos);
float CheckPointHeight(float* pos);
float CheckPointSlope(float* pos, _anon1* plane);
void CheckHeights(_anon2* eil, float* stand_pos, float base_height, float* heights);
float MaxHeight(float* heights, int n_heights);
float MinHeight(float* heights, int n_heights);
float AverageHeight(float* heights, int n_heights);
_anon4* CheckCriff(_anon2* eil, float* last_pos);
void StairsMove(_anon2* eil);
int EilMoveInit(_anon2* eil, int with_henry);
void EileenMove(_anon2* eil);
void EilMoveAddtional(_anon2* eil, float* dir, float speed);

// 
// Start address: 0x295dc0
void BallToPos(_anon2* eil, float* p)
{
	// Line 42, Address: 0x295dc0, Func Offset: 0
	// Line 43, Address: 0x295dc8, Func Offset: 0x8
	// Line 44, Address: 0x295de0, Func Offset: 0x20
	// Func End, Address: 0x295de8, Func Offset: 0x28
}

// 
// Start address: 0x295df0
void BallUpdate(_anon2* eil, float* p)
{
	// Line 50, Address: 0x295df0, Func Offset: 0
	// Line 51, Address: 0x295df8, Func Offset: 0x8
	// Line 52, Address: 0x295e10, Func Offset: 0x20
	// Func End, Address: 0x295e18, Func Offset: 0x28
}

// 
// Start address: 0x295e20
void BallFix(_anon2* eil, float* p)
{
	// Line 59, Address: 0x295e20, Func Offset: 0
	// Line 60, Address: 0x295e28, Func Offset: 0x8
	// Line 61, Address: 0x295e40, Func Offset: 0x20
	// Func End, Address: 0x295e48, Func Offset: 0x28
}

// 
// Start address: 0x295e50
int SlipOffWallSide(float* sc, float* current)
{
	_anon3 line;
	float v[4];
	int hit;
	int i;
	int candicate;
	float length[4];
	_anon1 planes[4];
	float side_candicates[4][4];
	// Line 67, Address: 0x295e50, Func Offset: 0
	// Line 83, Address: 0x295e64, Func Offset: 0x14
	// Line 86, Address: 0x295e68, Func Offset: 0x18
	// Line 87, Address: 0x295e70, Func Offset: 0x20
	// Line 88, Address: 0x295e78, Func Offset: 0x28
	// Line 92, Address: 0x295e80, Func Offset: 0x30
	// Line 93, Address: 0x295e8c, Func Offset: 0x3c
	// Line 94, Address: 0x295e98, Func Offset: 0x48
	// Line 95, Address: 0x295ec0, Func Offset: 0x70
	// Line 97, Address: 0x295ed4, Func Offset: 0x84
	// Line 98, Address: 0x295edc, Func Offset: 0x8c
	// Line 99, Address: 0x295ef8, Func Offset: 0xa8
	// Line 100, Address: 0x295f00, Func Offset: 0xb0
	// Line 102, Address: 0x295f10, Func Offset: 0xc0
	// Line 106, Address: 0x295f24, Func Offset: 0xd4
	// Line 107, Address: 0x295f30, Func Offset: 0xe0
	// Line 108, Address: 0x295f54, Func Offset: 0x104
	// Line 109, Address: 0x295f58, Func Offset: 0x108
	// Line 112, Address: 0x295f6c, Func Offset: 0x11c
	// Line 113, Address: 0x295f8c, Func Offset: 0x13c
	// Line 114, Address: 0x295fb0, Func Offset: 0x160
	// Line 116, Address: 0x295ff0, Func Offset: 0x1a0
	// Line 117, Address: 0x296024, Func Offset: 0x1d4
	// Line 118, Address: 0x296040, Func Offset: 0x1f0
	// Line 121, Address: 0x296048, Func Offset: 0x1f8
	// Line 122, Address: 0x296050, Func Offset: 0x200
	// Func End, Address: 0x296064, Func Offset: 0x214
}

// 
// Start address: 0x296070
int GetStandPositionUpDown(float* sc, float* current)
{
	_anon3 line;
	float offset[4];
	_anon1 plane;
	float candicates[4][2];
	// Line 129, Address: 0x296070, Func Offset: 0
	// Line 145, Address: 0x296088, Func Offset: 0x18
	// Line 146, Address: 0x296090, Func Offset: 0x20
	// Line 149, Address: 0x2960c0, Func Offset: 0x50
	// Line 150, Address: 0x2960dc, Func Offset: 0x6c
	// Line 151, Address: 0x2960fc, Func Offset: 0x8c
	// Line 152, Address: 0x296110, Func Offset: 0xa0
	// Line 153, Address: 0x29611c, Func Offset: 0xac
	// Line 154, Address: 0x296124, Func Offset: 0xb4
	// Line 157, Address: 0x296128, Func Offset: 0xb8
	// Line 158, Address: 0x296144, Func Offset: 0xd4
	// Line 159, Address: 0x296164, Func Offset: 0xf4
	// Line 160, Address: 0x296178, Func Offset: 0x108
	// Line 161, Address: 0x296184, Func Offset: 0x114
	// Line 162, Address: 0x29618c, Func Offset: 0x11c
	// Line 164, Address: 0x296190, Func Offset: 0x120
	// Line 165, Address: 0x296198, Func Offset: 0x128
	// Func End, Address: 0x2961ac, Func Offset: 0x13c
}

// 
// Start address: 0x2961b0
int GetStandPositionUpDownClose(float* sc, float* current)
{
	_anon3 line;
	float offset[4];
	_anon1 plane;
	float candicates[4][2];
	// Line 173, Address: 0x2961b0, Func Offset: 0
	// Line 189, Address: 0x2961c8, Func Offset: 0x18
	// Line 190, Address: 0x2961d0, Func Offset: 0x20
	// Line 193, Address: 0x296200, Func Offset: 0x50
	// Line 194, Address: 0x29621c, Func Offset: 0x6c
	// Line 195, Address: 0x29623c, Func Offset: 0x8c
	// Line 196, Address: 0x296250, Func Offset: 0xa0
	// Line 197, Address: 0x29625c, Func Offset: 0xac
	// Line 198, Address: 0x296264, Func Offset: 0xb4
	// Line 201, Address: 0x296268, Func Offset: 0xb8
	// Line 202, Address: 0x296284, Func Offset: 0xd4
	// Line 203, Address: 0x2962a4, Func Offset: 0xf4
	// Line 204, Address: 0x2962b8, Func Offset: 0x108
	// Line 205, Address: 0x2962c4, Func Offset: 0x114
	// Line 206, Address: 0x2962cc, Func Offset: 0x11c
	// Line 208, Address: 0x2962d0, Func Offset: 0x120
	// Line 209, Address: 0x2962d8, Func Offset: 0x128
	// Func End, Address: 0x2962ec, Func Offset: 0x13c
}

// 
// Start address: 0x2962f0
int GetStandPosition(float* sc, float* current)
{
	// Line 220, Address: 0x2962f0, Func Offset: 0
	// Line 222, Address: 0x296304, Func Offset: 0x14
	// Line 223, Address: 0x296314, Func Offset: 0x24
	// Line 226, Address: 0x296320, Func Offset: 0x30
	// Line 227, Address: 0x296334, Func Offset: 0x44
	// Line 231, Address: 0x296340, Func Offset: 0x50
	// Line 234, Address: 0x296350, Func Offset: 0x60
	// Func End, Address: 0x296364, Func Offset: 0x74
}

// 
// Start address: 0x296370
int EilCheckHurdle(_anon2* eil, float* target_)
{
	float eil_pos[4];
	_anon3 line;
	_anon1 plane;
	float target[4];
	float v[4];
	float dh[4];
	float r;
	int i;
	// Line 246, Address: 0x296370, Func Offset: 0
	// Line 256, Address: 0x296380, Func Offset: 0x10
	// Line 257, Address: 0x29638c, Func Offset: 0x1c
	// Line 258, Address: 0x296398, Func Offset: 0x28
	// Line 257, Address: 0x29639c, Func Offset: 0x2c
	// Line 258, Address: 0x2963a4, Func Offset: 0x34
	// Line 262, Address: 0x2963ac, Func Offset: 0x3c
	// Line 259, Address: 0x2963b0, Func Offset: 0x40
	// Line 262, Address: 0x2963b4, Func Offset: 0x44
	// Line 259, Address: 0x2963b8, Func Offset: 0x48
	// Line 262, Address: 0x2963c0, Func Offset: 0x50
	// Line 263, Address: 0x2963d4, Func Offset: 0x64
	// Line 264, Address: 0x2963fc, Func Offset: 0x8c
	// Line 267, Address: 0x296428, Func Offset: 0xb8
	// Line 268, Address: 0x296438, Func Offset: 0xc8
	// Line 269, Address: 0x29645c, Func Offset: 0xec
	// Line 270, Address: 0x29647c, Func Offset: 0x10c
	// Line 271, Address: 0x29649c, Func Offset: 0x12c
	// Line 272, Address: 0x2964b0, Func Offset: 0x140
	// Line 274, Address: 0x2964b8, Func Offset: 0x148
	// Line 275, Address: 0x2964d4, Func Offset: 0x164
	// Line 276, Address: 0x2964d8, Func Offset: 0x168
	// Func End, Address: 0x2964ec, Func Offset: 0x17c
}

// 
// Start address: 0x2964f0
int EilCheckSide(_anon2* eil)
{
	_anon3 line;
	float left;
	float right;
	float side[4];
	float v[4];
	_anon1 plane;
	// Line 285, Address: 0x2964f0, Func Offset: 0
	// Line 293, Address: 0x2964f8, Func Offset: 0x8
	// Line 285, Address: 0x2964fc, Func Offset: 0xc
	// Line 293, Address: 0x296500, Func Offset: 0x10
	// Line 294, Address: 0x296508, Func Offset: 0x18
	// Line 295, Address: 0x296514, Func Offset: 0x24
	// Line 294, Address: 0x296524, Func Offset: 0x34
	// Line 295, Address: 0x29652c, Func Offset: 0x3c
	// Line 296, Address: 0x296544, Func Offset: 0x54
	// Line 298, Address: 0x296570, Func Offset: 0x80
	// Line 299, Address: 0x29659c, Func Offset: 0xac
	// Line 300, Address: 0x2965bc, Func Offset: 0xcc
	// Line 301, Address: 0x2965d0, Func Offset: 0xe0
	// Line 302, Address: 0x2965dc, Func Offset: 0xec
	// Line 303, Address: 0x2965e8, Func Offset: 0xf8
	// Line 306, Address: 0x2965f0, Func Offset: 0x100
	// Line 307, Address: 0x29661c, Func Offset: 0x12c
	// Line 308, Address: 0x29663c, Func Offset: 0x14c
	// Line 309, Address: 0x296650, Func Offset: 0x160
	// Line 310, Address: 0x29665c, Func Offset: 0x16c
	// Line 311, Address: 0x296668, Func Offset: 0x178
	// Line 313, Address: 0x296670, Func Offset: 0x180
	// Line 315, Address: 0x2966a0, Func Offset: 0x1b0
	// Line 316, Address: 0x2966a8, Func Offset: 0x1b8
	// Line 317, Address: 0x2966bc, Func Offset: 0x1cc
	// Line 318, Address: 0x2966c8, Func Offset: 0x1d8
	// Line 319, Address: 0x2966d0, Func Offset: 0x1e0
	// Func End, Address: 0x2966e0, Func Offset: 0x1f0
}

// 
// Start address: 0x2966e0
int EilCheckFrontSide(_anon2* eil)
{
	_anon3 line;
	float center[4];
	float side[4];
	float v[4];
	_anon1 plane;
	int left_ok;
	int right_ok;
	// Line 330, Address: 0x2966e0, Func Offset: 0
	// Line 341, Address: 0x2966e8, Func Offset: 0x8
	// Line 330, Address: 0x2966ec, Func Offset: 0xc
	// Line 338, Address: 0x2966fc, Func Offset: 0x1c
	// Line 341, Address: 0x296700, Func Offset: 0x20
	// Line 342, Address: 0x296708, Func Offset: 0x28
	// Line 343, Address: 0x296714, Func Offset: 0x34
	// Line 342, Address: 0x296724, Func Offset: 0x44
	// Line 343, Address: 0x29672c, Func Offset: 0x4c
	// Line 344, Address: 0x296744, Func Offset: 0x64
	// Line 346, Address: 0x296770, Func Offset: 0x90
	// Line 347, Address: 0x2967a0, Func Offset: 0xc0
	// Line 348, Address: 0x2967c0, Func Offset: 0xe0
	// Line 349, Address: 0x2967ec, Func Offset: 0x10c
	// Line 350, Address: 0x296818, Func Offset: 0x138
	// Line 352, Address: 0x296838, Func Offset: 0x158
	// Line 353, Address: 0x29684c, Func Offset: 0x16c
	// Line 356, Address: 0x296850, Func Offset: 0x170
	// Line 357, Address: 0x296880, Func Offset: 0x1a0
	// Line 358, Address: 0x2968a0, Func Offset: 0x1c0
	// Line 359, Address: 0x2968cc, Func Offset: 0x1ec
	// Line 360, Address: 0x2968f8, Func Offset: 0x218
	// Line 362, Address: 0x296918, Func Offset: 0x238
	// Line 363, Address: 0x29692c, Func Offset: 0x24c
	// Line 366, Address: 0x296930, Func Offset: 0x250
	// Line 367, Address: 0x296940, Func Offset: 0x260
	// Line 368, Address: 0x296948, Func Offset: 0x268
	// Line 369, Address: 0x296958, Func Offset: 0x278
	// Line 370, Address: 0x296960, Func Offset: 0x280
	// Line 371, Address: 0x296968, Func Offset: 0x288
	// Line 372, Address: 0x296970, Func Offset: 0x290
	// Line 373, Address: 0x296978, Func Offset: 0x298
	// Func End, Address: 0x296990, Func Offset: 0x2b0
}

// 
// Start address: 0x296990
int EilCheckBackSide(_anon2* eil)
{
	_anon3 line;
	float center[4];
	float side[4];
	float v[4];
	_anon1 plane;
	int left_ok;
	int right_ok;
	// Line 385, Address: 0x296990, Func Offset: 0
	// Line 396, Address: 0x296998, Func Offset: 0x8
	// Line 385, Address: 0x29699c, Func Offset: 0xc
	// Line 393, Address: 0x2969ac, Func Offset: 0x1c
	// Line 396, Address: 0x2969b0, Func Offset: 0x20
	// Line 397, Address: 0x2969b8, Func Offset: 0x28
	// Line 398, Address: 0x2969c4, Func Offset: 0x34
	// Line 397, Address: 0x2969d4, Func Offset: 0x44
	// Line 398, Address: 0x2969dc, Func Offset: 0x4c
	// Line 399, Address: 0x2969f4, Func Offset: 0x64
	// Line 401, Address: 0x296a20, Func Offset: 0x90
	// Line 402, Address: 0x296a50, Func Offset: 0xc0
	// Line 403, Address: 0x296a70, Func Offset: 0xe0
	// Line 404, Address: 0x296a9c, Func Offset: 0x10c
	// Line 405, Address: 0x296ac8, Func Offset: 0x138
	// Line 407, Address: 0x296ae8, Func Offset: 0x158
	// Line 408, Address: 0x296afc, Func Offset: 0x16c
	// Line 411, Address: 0x296b00, Func Offset: 0x170
	// Line 412, Address: 0x296b30, Func Offset: 0x1a0
	// Line 413, Address: 0x296b50, Func Offset: 0x1c0
	// Line 414, Address: 0x296b7c, Func Offset: 0x1ec
	// Line 415, Address: 0x296ba8, Func Offset: 0x218
	// Line 417, Address: 0x296bc8, Func Offset: 0x238
	// Line 418, Address: 0x296bdc, Func Offset: 0x24c
	// Line 421, Address: 0x296be0, Func Offset: 0x250
	// Line 422, Address: 0x296bf0, Func Offset: 0x260
	// Line 423, Address: 0x296bf8, Func Offset: 0x268
	// Line 424, Address: 0x296c08, Func Offset: 0x278
	// Line 425, Address: 0x296c10, Func Offset: 0x280
	// Line 426, Address: 0x296c18, Func Offset: 0x288
	// Line 427, Address: 0x296c20, Func Offset: 0x290
	// Line 428, Address: 0x296c28, Func Offset: 0x298
	// Func End, Address: 0x296c40, Func Offset: 0x2b0
}

// 
// Start address: 0x296c40
_anon4* CheckGroundPolygon(float* pos)
{
	_anon3 line;
	// Line 434, Address: 0x296c40, Func Offset: 0
	// Line 438, Address: 0x296c48, Func Offset: 0x8
	// Line 439, Address: 0x296c54, Func Offset: 0x14
	// Line 442, Address: 0x296c60, Func Offset: 0x20
	// Line 440, Address: 0x296c64, Func Offset: 0x24
	// Line 441, Address: 0x296c70, Func Offset: 0x30
	// Line 440, Address: 0x296c7c, Func Offset: 0x3c
	// Line 441, Address: 0x296c80, Func Offset: 0x40
	// Line 440, Address: 0x296c84, Func Offset: 0x44
	// Line 442, Address: 0x296c88, Func Offset: 0x48
	// Line 443, Address: 0x296c90, Func Offset: 0x50
	// Func End, Address: 0x296c9c, Func Offset: 0x5c
}

// 
// Start address: 0x296ca0
float CheckPointHeight(float* pos)
{
	_anon3 line;
	_anon1 plane;
	int hit;
	float cost;
	// Line 447, Address: 0x296ca0, Func Offset: 0
	// Line 453, Address: 0x296ca8, Func Offset: 0x8
	// Line 454, Address: 0x296cb4, Func Offset: 0x14
	// Line 457, Address: 0x296cc0, Func Offset: 0x20
	// Line 455, Address: 0x296cc4, Func Offset: 0x24
	// Line 457, Address: 0x296cc8, Func Offset: 0x28
	// Line 455, Address: 0x296ccc, Func Offset: 0x2c
	// Line 456, Address: 0x296cd4, Func Offset: 0x34
	// Line 455, Address: 0x296ce0, Func Offset: 0x40
	// Line 456, Address: 0x296ce4, Func Offset: 0x44
	// Line 455, Address: 0x296ce8, Func Offset: 0x48
	// Line 457, Address: 0x296cec, Func Offset: 0x4c
	// Line 458, Address: 0x296cf4, Func Offset: 0x54
	// Line 459, Address: 0x296cfc, Func Offset: 0x5c
	// Line 461, Address: 0x296d10, Func Offset: 0x70
	// Line 463, Address: 0x296d38, Func Offset: 0x98
	// Line 462, Address: 0x296d48, Func Offset: 0xa8
	// Line 463, Address: 0x296d4c, Func Offset: 0xac
	// Line 464, Address: 0x296d58, Func Offset: 0xb8
	// Line 466, Address: 0x296d70, Func Offset: 0xd0
	// Line 467, Address: 0x296d7c, Func Offset: 0xdc
	// Line 468, Address: 0x296d80, Func Offset: 0xe0
	// Func End, Address: 0x296d8c, Func Offset: 0xec
}

// 
// Start address: 0x296d90
float CheckPointSlope(float* pos, _anon1* plane)
{
	_anon3 line;
	int hit;
	float cost;
	// Line 472, Address: 0x296d90, Func Offset: 0
	// Line 477, Address: 0x296d98, Func Offset: 0x8
	// Line 472, Address: 0x296d9c, Func Offset: 0xc
	// Line 477, Address: 0x296da4, Func Offset: 0x14
	// Line 478, Address: 0x296dac, Func Offset: 0x1c
	// Line 481, Address: 0x296db8, Func Offset: 0x28
	// Line 479, Address: 0x296dbc, Func Offset: 0x2c
	// Line 480, Address: 0x296dc8, Func Offset: 0x38
	// Line 479, Address: 0x296dd4, Func Offset: 0x44
	// Line 480, Address: 0x296dd8, Func Offset: 0x48
	// Line 479, Address: 0x296ddc, Func Offset: 0x4c
	// Line 481, Address: 0x296de0, Func Offset: 0x50
	// Line 482, Address: 0x296de8, Func Offset: 0x58
	// Line 483, Address: 0x296df0, Func Offset: 0x60
	// Line 485, Address: 0x296e08, Func Offset: 0x78
	// Line 487, Address: 0x296e2c, Func Offset: 0x9c
	// Line 486, Address: 0x296e3c, Func Offset: 0xac
	// Line 487, Address: 0x296e40, Func Offset: 0xb0
	// Line 488, Address: 0x296e4c, Func Offset: 0xbc
	// Line 490, Address: 0x296e60, Func Offset: 0xd0
	// Line 491, Address: 0x296e70, Func Offset: 0xe0
	// Line 492, Address: 0x296e78, Func Offset: 0xe8
	// Func End, Address: 0x296e88, Func Offset: 0xf8
}

// 
// Start address: 0x296e90
void CheckHeights(_anon2* eil, float* stand_pos, float base_height, float* heights)
{
	int xi;
	int zi;
	float h;
	float dh;
	float dv[4];
	// Line 519, Address: 0x296e90, Func Offset: 0
	// Line 530, Address: 0x296e94, Func Offset: 0x4
	// Line 519, Address: 0x296e98, Func Offset: 0x8
	// Line 530, Address: 0x296ebc, Func Offset: 0x2c
	// Line 531, Address: 0x296ed8, Func Offset: 0x48
	// Line 532, Address: 0x296ee0, Func Offset: 0x50
	// Line 533, Address: 0x296eec, Func Offset: 0x5c
	// Line 534, Address: 0x296f04, Func Offset: 0x74
	// Line 535, Address: 0x296f10, Func Offset: 0x80
	// Line 536, Address: 0x296f18, Func Offset: 0x88
	// Line 537, Address: 0x296f34, Func Offset: 0xa4
	// Line 538, Address: 0x296f3c, Func Offset: 0xac
	// Line 540, Address: 0x296f40, Func Offset: 0xb0
	// Line 541, Address: 0x296f48, Func Offset: 0xb8
	// Line 543, Address: 0x296f50, Func Offset: 0xc0
	// Line 544, Address: 0x296f64, Func Offset: 0xd4
	// Line 545, Address: 0x296f68, Func Offset: 0xd8
	// Line 544, Address: 0x296f6c, Func Offset: 0xdc
	// Line 545, Address: 0x296f80, Func Offset: 0xf0
	// Line 544, Address: 0x296f84, Func Offset: 0xf4
	// Line 545, Address: 0x296f90, Func Offset: 0x100
	// Line 544, Address: 0x296f94, Func Offset: 0x104
	// Line 545, Address: 0x296f98, Func Offset: 0x108
	// Line 544, Address: 0x296f9c, Func Offset: 0x10c
	// Line 545, Address: 0x296fa0, Func Offset: 0x110
	// Line 546, Address: 0x296fa4, Func Offset: 0x114
	// Line 547, Address: 0x296fb8, Func Offset: 0x128
	// Line 548, Address: 0x296fc0, Func Offset: 0x130
	// Line 550, Address: 0x296fcc, Func Offset: 0x13c
	// Line 551, Address: 0x296fe4, Func Offset: 0x154
	// Line 552, Address: 0x296ff0, Func Offset: 0x160
	// Line 553, Address: 0x296ffc, Func Offset: 0x16c
	// Line 552, Address: 0x297000, Func Offset: 0x170
	// Line 553, Address: 0x297008, Func Offset: 0x178
	// Line 554, Address: 0x297014, Func Offset: 0x184
	// Line 556, Address: 0x297024, Func Offset: 0x194
	// Func End, Address: 0x29704c, Func Offset: 0x1bc
}

// 
// Start address: 0x297050
float MaxHeight(float* heights, int n_heights)
{
	float h;
	int i;
	// Line 561, Address: 0x297050, Func Offset: 0
	// Line 563, Address: 0x297054, Func Offset: 0x4
	// Line 561, Address: 0x297058, Func Offset: 0x8
	// Line 563, Address: 0x297060, Func Offset: 0x10
	// Line 564, Address: 0x297068, Func Offset: 0x18
	// Line 563, Address: 0x297074, Func Offset: 0x24
	// Line 564, Address: 0x29707c, Func Offset: 0x2c
	// Line 566, Address: 0x297088, Func Offset: 0x38
	// Line 567, Address: 0x297094, Func Offset: 0x44
	// Line 568, Address: 0x297098, Func Offset: 0x48
	// Line 570, Address: 0x2970a8, Func Offset: 0x58
	// Func End, Address: 0x2970b0, Func Offset: 0x60
}

// 
// Start address: 0x2970b0
float MinHeight(float* heights, int n_heights)
{
	float h;
	int i;
	// Line 575, Address: 0x2970b0, Func Offset: 0
	// Line 577, Address: 0x2970b4, Func Offset: 0x4
	// Line 575, Address: 0x2970b8, Func Offset: 0x8
	// Line 577, Address: 0x2970c0, Func Offset: 0x10
	// Line 578, Address: 0x2970c8, Func Offset: 0x18
	// Line 577, Address: 0x2970d4, Func Offset: 0x24
	// Line 578, Address: 0x2970dc, Func Offset: 0x2c
	// Line 580, Address: 0x2970e8, Func Offset: 0x38
	// Line 581, Address: 0x2970f4, Func Offset: 0x44
	// Line 582, Address: 0x2970f8, Func Offset: 0x48
	// Line 584, Address: 0x297108, Func Offset: 0x58
	// Func End, Address: 0x297110, Func Offset: 0x60
}

// 
// Start address: 0x297110
float AverageHeight(float* heights, int n_heights)
{
	float ah;
	int count;
	int i;
	// Line 588, Address: 0x297110, Func Offset: 0
	// Line 591, Address: 0x297114, Func Offset: 0x4
	// Line 589, Address: 0x297118, Func Offset: 0x8
	// Line 591, Address: 0x29711c, Func Offset: 0xc
	// Line 592, Address: 0x297124, Func Offset: 0x14
	// Line 591, Address: 0x297130, Func Offset: 0x20
	// Line 592, Address: 0x297134, Func Offset: 0x24
	// Line 594, Address: 0x297140, Func Offset: 0x30
	// Line 595, Address: 0x297144, Func Offset: 0x34
	// Line 596, Address: 0x297148, Func Offset: 0x38
	// Line 597, Address: 0x297158, Func Offset: 0x48
	// Line 599, Address: 0x297170, Func Offset: 0x60
	// Func End, Address: 0x297178, Func Offset: 0x68
}

// 
// Start address: 0x297180
_anon4* CheckCriff(_anon2* eil, float* last_pos)
{
	_anon3 line;
	float v[4];
	_anon4* wall_poly;
	_anon1 plane;
	int ground_hit;
	float dy;
	// Line 607, Address: 0x297180, Func Offset: 0
	// Line 621, Address: 0x297188, Func Offset: 0x8
	// Line 607, Address: 0x29718c, Func Offset: 0xc
	// Line 621, Address: 0x2971a0, Func Offset: 0x20
	// Line 622, Address: 0x2971a8, Func Offset: 0x28
	// Line 624, Address: 0x2971b4, Func Offset: 0x34
	// Line 625, Address: 0x2971dc, Func Offset: 0x5c
	// Line 628, Address: 0x2971fc, Func Offset: 0x7c
	// Line 630, Address: 0x29720c, Func Offset: 0x8c
	// Line 631, Address: 0x297218, Func Offset: 0x98
	// Line 632, Address: 0x297220, Func Offset: 0xa0
	// Line 633, Address: 0x297228, Func Offset: 0xa8
	// Line 641, Address: 0x297238, Func Offset: 0xb8
	// Line 644, Address: 0x297248, Func Offset: 0xc8
	// Line 642, Address: 0x29724c, Func Offset: 0xcc
	// Line 644, Address: 0x297250, Func Offset: 0xd0
	// Line 642, Address: 0x297254, Func Offset: 0xd4
	// Line 643, Address: 0x29725c, Func Offset: 0xdc
	// Line 642, Address: 0x297268, Func Offset: 0xe8
	// Line 643, Address: 0x29726c, Func Offset: 0xec
	// Line 642, Address: 0x297270, Func Offset: 0xf0
	// Line 644, Address: 0x297274, Func Offset: 0xf4
	// Line 645, Address: 0x29727c, Func Offset: 0xfc
	// Line 646, Address: 0x297284, Func Offset: 0x104
	// Line 653, Address: 0x297290, Func Offset: 0x110
	// Line 648, Address: 0x297294, Func Offset: 0x114
	// Line 653, Address: 0x29729c, Func Offset: 0x11c
	// Line 648, Address: 0x2972a4, Func Offset: 0x124
	// Line 653, Address: 0x2972a8, Func Offset: 0x128
	// Line 654, Address: 0x2972b4, Func Offset: 0x134
	// Line 655, Address: 0x2972c0, Func Offset: 0x140
	// Line 679, Address: 0x2972c8, Func Offset: 0x148
	// Line 680, Address: 0x2972d0, Func Offset: 0x150
	// Func End, Address: 0x2972e8, Func Offset: 0x168
}

// 
// Start address: 0x2972f0
void StairsMove(_anon2* eil)
{
	float* heights;
	float max_h;
	float min_h;
	float h;
	float base_h;
	float dh;
	float v[4];
	float new_pos[4];
	float next_pos[4];
	float next_h;
	sgVectorCardinalKey p0;
	sgVectorCardinalKey p1;
	sgVectorCardinalKey p2;
	float r;
	// Line 684, Address: 0x2972f0, Func Offset: 0
	// Line 694, Address: 0x297308, Func Offset: 0x18
	// Line 696, Address: 0x29730c, Func Offset: 0x1c
	// Line 697, Address: 0x297310, Func Offset: 0x20
	// Line 701, Address: 0x297320, Func Offset: 0x30
	// Line 702, Address: 0x29732c, Func Offset: 0x3c
	// Line 701, Address: 0x297330, Func Offset: 0x40
	// Line 702, Address: 0x297334, Func Offset: 0x44
	// Line 703, Address: 0x297368, Func Offset: 0x78
	// Line 704, Address: 0x29736c, Func Offset: 0x7c
	// Line 705, Address: 0x297374, Func Offset: 0x84
	// Line 707, Address: 0x297378, Func Offset: 0x88
	// Line 708, Address: 0x29738c, Func Offset: 0x9c
	// Line 709, Address: 0x29739c, Func Offset: 0xac
	// Line 713, Address: 0x2973a4, Func Offset: 0xb4
	// Line 715, Address: 0x2973c0, Func Offset: 0xd0
	// Line 716, Address: 0x2973c8, Func Offset: 0xd8
	// Line 717, Address: 0x2973cc, Func Offset: 0xdc
	// Line 723, Address: 0x2973d0, Func Offset: 0xe0
	// Line 725, Address: 0x2973dc, Func Offset: 0xec
	// Line 727, Address: 0x2973e8, Func Offset: 0xf8
	// Line 728, Address: 0x2973f0, Func Offset: 0x100
	// Line 729, Address: 0x2973f8, Func Offset: 0x108
	// Line 732, Address: 0x297400, Func Offset: 0x110
	// Line 733, Address: 0x297414, Func Offset: 0x124
	// Line 736, Address: 0x297424, Func Offset: 0x134
	// Line 737, Address: 0x297430, Func Offset: 0x140
	// Line 739, Address: 0x297434, Func Offset: 0x144
	// Line 740, Address: 0x297440, Func Offset: 0x150
	// Line 741, Address: 0x297448, Func Offset: 0x158
	// Line 755, Address: 0x297450, Func Offset: 0x160
	// Line 756, Address: 0x297454, Func Offset: 0x164
	// Line 760, Address: 0x297474, Func Offset: 0x184
	// Line 761, Address: 0x297480, Func Offset: 0x190
	// Line 762, Address: 0x297498, Func Offset: 0x1a8
	// Line 763, Address: 0x2974b8, Func Offset: 0x1c8
	// Line 764, Address: 0x2974c0, Func Offset: 0x1d0
	// Line 765, Address: 0x2974c4, Func Offset: 0x1d4
	// Line 769, Address: 0x2974e4, Func Offset: 0x1f4
	// Line 772, Address: 0x2974e8, Func Offset: 0x1f8
	// Line 773, Address: 0x297508, Func Offset: 0x218
	// Line 776, Address: 0x29752c, Func Offset: 0x23c
	// Line 774, Address: 0x297530, Func Offset: 0x240
	// Line 776, Address: 0x297534, Func Offset: 0x244
	// Line 774, Address: 0x297538, Func Offset: 0x248
	// Line 776, Address: 0x29753c, Func Offset: 0x24c
	// Line 777, Address: 0x297544, Func Offset: 0x254
	// Line 778, Address: 0x297554, Func Offset: 0x264
	// Line 779, Address: 0x297564, Func Offset: 0x274
	// Line 780, Address: 0x297584, Func Offset: 0x294
	// Line 781, Address: 0x2975b0, Func Offset: 0x2c0
	// Line 782, Address: 0x2975d0, Func Offset: 0x2e0
	// Line 783, Address: 0x2975fc, Func Offset: 0x30c
	// Line 784, Address: 0x29761c, Func Offset: 0x32c
	// Line 785, Address: 0x297648, Func Offset: 0x358
	// Line 791, Address: 0x297658, Func Offset: 0x368
	// Line 792, Address: 0x297664, Func Offset: 0x374
	// Line 791, Address: 0x29766c, Func Offset: 0x37c
	// Line 792, Address: 0x297670, Func Offset: 0x380
	// Line 793, Address: 0x297684, Func Offset: 0x394
	// Line 795, Address: 0x29768c, Func Offset: 0x39c
	// Line 793, Address: 0x297694, Func Offset: 0x3a4
	// Line 795, Address: 0x297698, Func Offset: 0x3a8
	// Line 796, Address: 0x2976a0, Func Offset: 0x3b0
	// Func End, Address: 0x2976b8, Func Offset: 0x3c8
}

// 
// Start address: 0x2976c0
int EilMoveInit(_anon2* eil, int with_henry)
{
	float pl_pos[4];
	float pl_rot[4];
	float q[4];
	float v[4];
	sfCharacter* chara;
	int ret;
	float d[4];
	float fr22_init_pos[4];
	// Line 802, Address: 0x2976c0, Func Offset: 0
	// Line 819, Address: 0x2976c4, Func Offset: 0x4
	// Line 802, Address: 0x2976c8, Func Offset: 0x8
	// Line 812, Address: 0x2976cc, Func Offset: 0xc
	// Line 802, Address: 0x2976d0, Func Offset: 0x10
	// Line 819, Address: 0x2976d4, Func Offset: 0x14
	// Line 802, Address: 0x2976d8, Func Offset: 0x18
	// Line 812, Address: 0x2976e0, Func Offset: 0x20
	// Line 819, Address: 0x2976e4, Func Offset: 0x24
	// Line 816, Address: 0x2976e8, Func Offset: 0x28
	// Line 819, Address: 0x2976ec, Func Offset: 0x2c
	// Line 820, Address: 0x2976f4, Func Offset: 0x34
	// Line 823, Address: 0x297704, Func Offset: 0x44
	// Line 824, Address: 0x29770c, Func Offset: 0x4c
	// Line 825, Address: 0x297728, Func Offset: 0x68
	// Line 826, Address: 0x297738, Func Offset: 0x78
	// Line 827, Address: 0x29774c, Func Offset: 0x8c
	// Line 828, Address: 0x297774, Func Offset: 0xb4
	// Line 830, Address: 0x297794, Func Offset: 0xd4
	// Line 831, Address: 0x2977b4, Func Offset: 0xf4
	// Line 832, Address: 0x2977d8, Func Offset: 0x118
	// Line 835, Address: 0x2977e8, Func Offset: 0x128
	// Line 837, Address: 0x2977f4, Func Offset: 0x134
	// Line 841, Address: 0x297800, Func Offset: 0x140
	// Line 842, Address: 0x29780c, Func Offset: 0x14c
	// Line 843, Address: 0x297818, Func Offset: 0x158
	// Line 847, Address: 0x297820, Func Offset: 0x160
	// Line 848, Address: 0x297850, Func Offset: 0x190
	// Line 849, Address: 0x297860, Func Offset: 0x1a0
	// Line 850, Address: 0x297880, Func Offset: 0x1c0
	// Line 852, Address: 0x29788c, Func Offset: 0x1cc
	// Line 858, Address: 0x297890, Func Offset: 0x1d0
	// Line 859, Address: 0x2978b4, Func Offset: 0x1f4
	// Line 860, Address: 0x2978cc, Func Offset: 0x20c
	// Line 864, Address: 0x2978d0, Func Offset: 0x210
	// Line 865, Address: 0x2978dc, Func Offset: 0x21c
	// Line 866, Address: 0x2978e4, Func Offset: 0x224
	// Line 867, Address: 0x2978f0, Func Offset: 0x230
	// Line 869, Address: 0x2978f8, Func Offset: 0x238
	// Line 870, Address: 0x297904, Func Offset: 0x244
	// Line 873, Address: 0x29790c, Func Offset: 0x24c
	// Line 874, Address: 0x297918, Func Offset: 0x258
	// Line 875, Address: 0x29792c, Func Offset: 0x26c
	// Line 878, Address: 0x29793c, Func Offset: 0x27c
	// Line 879, Address: 0x297950, Func Offset: 0x290
	// Line 880, Address: 0x297974, Func Offset: 0x2b4
	// Line 883, Address: 0x2979a0, Func Offset: 0x2e0
	// Line 880, Address: 0x2979a4, Func Offset: 0x2e4
	// Line 885, Address: 0x2979a8, Func Offset: 0x2e8
	// Func End, Address: 0x2979bc, Func Offset: 0x2fc
}

// 
// Start address: 0x2979c0
void EileenMove(_anon2* eil)
{
	sfCharacter* chara;
	float last_pos[4];
	float new_pos[4];
	float v[4];
	float v_op[4];
	float move_vector[4];
	float q[4];
	_anon4* poly;
	float r;
	float h_sp;
	// Line 893, Address: 0x2979c0, Func Offset: 0
	// Line 894, Address: 0x2979d4, Func Offset: 0x14
	// Line 904, Address: 0x2979d8, Func Offset: 0x18
	// Line 905, Address: 0x2979ec, Func Offset: 0x2c
	// Line 906, Address: 0x297a14, Func Offset: 0x54
	// Line 909, Address: 0x297a3c, Func Offset: 0x7c
	// Line 910, Address: 0x297a68, Func Offset: 0xa8
	// Line 911, Address: 0x297a90, Func Offset: 0xd0
	// Line 912, Address: 0x297aa4, Func Offset: 0xe4
	// Line 913, Address: 0x297ab4, Func Offset: 0xf4
	// Line 920, Address: 0x297ab8, Func Offset: 0xf8
	// Line 921, Address: 0x297ad8, Func Offset: 0x118
	// Line 923, Address: 0x297ae4, Func Offset: 0x124
	// Line 925, Address: 0x297af0, Func Offset: 0x130
	// Line 928, Address: 0x297af8, Func Offset: 0x138
	// Line 932, Address: 0x297b00, Func Offset: 0x140
	// Line 935, Address: 0x297b0c, Func Offset: 0x14c
	// Line 936, Address: 0x297b1c, Func Offset: 0x15c
	// Line 938, Address: 0x297b38, Func Offset: 0x178
	// Line 939, Address: 0x297b44, Func Offset: 0x184
	// Line 942, Address: 0x297b48, Func Offset: 0x188
	// Line 943, Address: 0x297b68, Func Offset: 0x1a8
	// Line 944, Address: 0x297b70, Func Offset: 0x1b0
	// Line 943, Address: 0x297b74, Func Offset: 0x1b4
	// Line 944, Address: 0x297b80, Func Offset: 0x1c0
	// Line 946, Address: 0x297ba0, Func Offset: 0x1e0
	// Line 950, Address: 0x297bb8, Func Offset: 0x1f8
	// Line 951, Address: 0x297bc4, Func Offset: 0x204
	// Line 953, Address: 0x297bc8, Func Offset: 0x208
	// Line 954, Address: 0x297bd4, Func Offset: 0x214
	// Line 957, Address: 0x297be0, Func Offset: 0x220
	// Line 959, Address: 0x297bec, Func Offset: 0x22c
	// Line 960, Address: 0x297bfc, Func Offset: 0x23c
	// Line 961, Address: 0x297c04, Func Offset: 0x244
	// Line 962, Address: 0x297c10, Func Offset: 0x250
	// Line 963, Address: 0x297c1c, Func Offset: 0x25c
	// Line 966, Address: 0x297c20, Func Offset: 0x260
	// Line 967, Address: 0x297c24, Func Offset: 0x264
	// Line 969, Address: 0x297c48, Func Offset: 0x288
	// Line 970, Address: 0x297c64, Func Offset: 0x2a4
	// Line 972, Address: 0x297c88, Func Offset: 0x2c8
	// Line 973, Address: 0x297c98, Func Offset: 0x2d8
	// Line 974, Address: 0x297c9c, Func Offset: 0x2dc
	// Line 973, Address: 0x297ca0, Func Offset: 0x2e0
	// Line 974, Address: 0x297ca4, Func Offset: 0x2e4
	// Line 975, Address: 0x297cc4, Func Offset: 0x304
	// Line 976, Address: 0x297ce4, Func Offset: 0x324
	// Line 978, Address: 0x297ce8, Func Offset: 0x328
	// Line 979, Address: 0x297d08, Func Offset: 0x348
	// Line 980, Address: 0x297d0c, Func Offset: 0x34c
	// Line 983, Address: 0x297d10, Func Offset: 0x350
	// Line 984, Address: 0x297d3c, Func Offset: 0x37c
	// Line 985, Address: 0x297d5c, Func Offset: 0x39c
	// Line 988, Address: 0x297d68, Func Offset: 0x3a8
	// Line 989, Address: 0x297d78, Func Offset: 0x3b8
	// Line 990, Address: 0x297d7c, Func Offset: 0x3bc
	// Line 989, Address: 0x297d80, Func Offset: 0x3c0
	// Line 990, Address: 0x297d84, Func Offset: 0x3c4
	// Line 991, Address: 0x297da4, Func Offset: 0x3e4
	// Line 992, Address: 0x297dc0, Func Offset: 0x400
	// Line 993, Address: 0x297dec, Func Offset: 0x42c
	// Line 994, Address: 0x297dfc, Func Offset: 0x43c
	// Line 995, Address: 0x297e10, Func Offset: 0x450
	// Line 996, Address: 0x297e1c, Func Offset: 0x45c
	// Line 998, Address: 0x297e20, Func Offset: 0x460
	// Line 999, Address: 0x297e24, Func Offset: 0x464
	// Func End, Address: 0x297e38, Func Offset: 0x478
}

// 
// Start address: 0x297e40
void EilMoveAddtional(_anon2* eil, float* dir, float speed)
{
	// Line 1004, Address: 0x297e40, Func Offset: 0
	// Line 1005, Address: 0x297e48, Func Offset: 0x8
	// Line 1007, Address: 0x297e50, Func Offset: 0x10
	// Func End, Address: 0x297e58, Func Offset: 0x18
}

