typedef struct sfObj;
typedef struct _anon0;
typedef struct EventUnit;
typedef enum PlayerExtStatus : unsigned char;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct sfCldObject;
typedef struct _anon4;
typedef struct sgQTNode;
typedef struct sfCldPart;
typedef struct _GAME_WORK;
typedef enum sgIKSolveResult : unsigned char;
typedef struct _anon5;
typedef struct _anon6;
typedef enum BattleHitResult : unsigned char;
typedef struct _anon7;
typedef struct sgIKHandle;
typedef struct sgQTObject;
typedef struct _anon8;
typedef struct _anon9;
typedef struct sgBone;
typedef struct _anon10;
typedef struct _anon11;
typedef struct _anon12;
typedef union _anon13;
typedef struct sfOffsetAABB;
typedef struct BattleHit;
typedef struct _anon14;
typedef union sfCldBody;
typedef struct _anon15;
typedef struct sfCharacter;
typedef struct _anon16;
typedef enum GameItem : unsigned char;
typedef struct sgAnime;
typedef union _anon17;
typedef struct _SubtitleMessageData;
typedef enum BattleAttackKind : unsigned char;
typedef enum EilCursedLevel : unsigned char;
typedef struct sgSVModel;
typedef struct _anon18;
typedef struct EventFlag;

typedef void(*type_1)(sfObj*);
typedef void(*type_2)(_anon1*, int, int, float*);
typedef void(*type_3)(EventUnit*);
typedef void(*type_4)(EventUnit*);
typedef int(*type_10)(_anon4*);
typedef void(*type_12)(EventUnit*);
typedef int(*type_16)(_anon4*, EventUnit*);
typedef int(*type_17)(_anon4*, EventUnit*);
typedef int(*type_19)(_anon4*, EventUnit*);
typedef void(*type_22)(EventUnit*);
typedef void(*type_23)(sfObj*);
typedef int(*type_24)(_anon4*);
typedef int(*type_25)(_anon4*);
typedef int(*type_26)(_anon4*, EventUnit*);
typedef int(*type_31)(_anon4*, EventUnit*);
typedef int(*type_32)(_anon4*);
typedef sgIKSolveResult(*type_35)();
typedef void(*type_37)(EventUnit*);
typedef int(*type_38)(_anon4*, EventUnit*);
typedef int(*type_43)(_anon4*, EventUnit*);
typedef int(*type_47)(_anon4*, EventUnit*);
typedef int(*type_50)(_anon4*, EventUnit*);
typedef int(*type_56)(_anon4*, EventUnit*);
typedef int(*type_57)(_anon4*, EventUnit*);
typedef void(*type_58)(EventUnit*);
typedef void(*type_59)(EventUnit*);
typedef int(*type_61)(_anon4*);
typedef int(*type_62)(_anon4*, EventUnit*);
typedef int(*type_63)(_anon4*);
typedef int(*type_68)(_anon4*, EventUnit*);
typedef int(*type_69)(_anon4*, EventUnit*);
typedef int(*type_70)(_anon4*, EventUnit*);
typedef int(*type_71)(_anon4*, EventUnit*);
typedef int(*type_72)(_anon4*, EventUnit*);
typedef int(*type_73)(_anon4*, EventUnit*);
typedef void(*type_77)(sgAnime*, int);
typedef int(*type_80)(_anon4*);
typedef int(*type_82)(_anon4*, EventUnit*);
typedef void(*type_83)(EventUnit*);
typedef void(*type_89)(sfObj*);
typedef int(*type_92)(_anon4*, EventUnit*);
typedef int(*type_93)(_anon4*, EventUnit*);
typedef int(*type_97)(_anon4*);
typedef int(*type_98)(_anon4*, EventUnit*);

typedef float type_0[4];
typedef _anon0 type_5[6];
typedef int type_6[1];
typedef unsigned char type_7[8];
typedef _anon3 type_8[4];
typedef sfCldPart* type_9[6];
typedef int type_11[1];
typedef unsigned char type_13[3];
typedef _anon2 type_14[16];
typedef _anon0 type_15[6];
typedef int type_18[1];
typedef _anon0 type_20[14];
typedef int type_21[1];
typedef unsigned char type_27[2];
typedef float type_28[4][2];
typedef unsigned char type_29[2];
typedef _anon0 type_30[6];
typedef int type_33[1];
typedef unsigned char type_34[2];
typedef unsigned char type_36[2];
typedef float type_39[4];
typedef _anon0 type_40[50];
typedef _anon10 type_41[4];
typedef unsigned char type_42[2];
typedef _anon13 type_44[0];
typedef _anon0 type_45[5];
typedef unsigned char type_46[2];
typedef unsigned char type_48[2];
typedef unsigned char type_49[5];
typedef unsigned char type_51[1];
typedef EventUnit type_52[5];
typedef unsigned char type_53[3];
typedef _anon0 type_54[4];
typedef _anon7 type_55[13];
typedef _anon0 type_60[12];
typedef _anon12 type_64[2];
typedef float type_65[4];
typedef void* type_66[4];
typedef float type_67[4][4];
typedef _anon0 type_74[5];
typedef short type_75[2];
typedef unsigned short type_76[2];
typedef char type_78[4];
typedef unsigned char type_79[4];
typedef float type_81[1];
typedef _anon0 type_84[46];
typedef int type_85[1];
typedef _anon0 type_86[6];
typedef _anon17 type_87[256];
typedef unsigned char type_88[4];
typedef int type_90[1];
typedef _anon0* type_91[12];
typedef int type_94[7];
typedef int type_95[1];
typedef unsigned char type_96[320];

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

struct _anon0
{
	int message_pack_id;
	int message_id;
	int voice_no;
	short frames;
	short last;
};

struct EventUnit
{
	int major_timer;
	int minor_timer;
	int minor_timer_value;
	void(*reset)(EventUnit*);
	int(*wakeup_check)(_anon4*);
	int(*wakeup)(_anon4*, EventUnit*);
	int(*event_func)(_anon4*, EventUnit*);
	int in_progress;
	_anon17 work0;
	_anon17 work1;
	int(*cancel_check)(_anon4*, EventUnit*);
	int cancel_type;
	_anon0* event_message;
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

struct _anon1
{
	unsigned long tex0;
	unsigned long clamp;
};

struct _anon2
{
	float words_point[4];
	float stand_point[4];
	int scene_no;
	int words_no;
};

struct _anon3
{
	float pos[4];
	float rot_y;
	int scene_no;
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
	_anon14 ball;
	unsigned char hurdle_status;
	unsigned char slope_status;
	float front_height;
	_anon9* ground_poly;
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
	_anon0* current_message;
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

struct _anon5
{
	EventUnit events[5];
	int event_in_progress;
};

struct _anon6
{
	unsigned char hospital_words[2];
	unsigned char subway_words[2];
	unsigned char spiral_words[2];
	unsigned char forest_words[2];
	unsigned char water_words[2];
	unsigned char building_words[2];
	unsigned char apart_words[2];
	unsigned char forest_mystery_words[5];
	unsigned char eileen_events[1];
};

enum BattleHitResult : unsigned char
{
	GB_HIT_RES_NONE,
	GB_HIT_RES_PLAYER_HIT,
	GB_HIT_RES_ENEMY_HIT,
	GB_HIT_RES_EILEEN_HIT,
	GB_HIT_RES_END
};

struct _anon7
{
	short motion;
	char voice;
	unsigned char look_henry;
	unsigned char insane_type;
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
	_anon14 bounding_ball;
	sgQTObject* next;
	sgQTObject* prev;
};

struct _anon8
{
	int dummy;
};

struct _anon9
{
	_anon13 vertex[0];
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

struct _anon10
{
	unsigned char next_offset;
	unsigned char flags;
	short id;
};

struct _anon11
{
	float start[4];
	float end[4];
};

struct _anon12
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

union _anon13
{
	float node[4];
	_anon10 data[4];
};

struct sfOffsetAABB
{
	_anon15 aabb;
	float offset[4];
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

struct _anon14
{
	float center[4];
	float radius;
};

union sfCldBody
{
	_anon16 obb;
	_anon15 aabb;
	sfOffsetAABB offset_aabb;
	_anon11 line;
	_anon14 sphere;
};

struct _anon15
{
	float bmin[4];
	float bmax[4];
};

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon18 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
};

struct _anon16
{
	float mat[4][4];
	float half_w[4];
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

struct _SubtitleMessageData
{
	short pack_id;
	short msg_id;
	float time;
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

enum EilCursedLevel : unsigned char
{
	EIL_CURSED_NONE,
	EIL_CURSED_SLIGHT,
	EIL_CURSED_MIDDLE,
	EIL_CURSED_SERIOUS
};

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
};

struct _anon18
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

struct EventFlag
{
	unsigned char flag[320];
};

_anon0 eil_moving_messages[14];
_anon0 eil_abnormal_messages[12];
int eil_talkquit_sounds[7];
_anon0 eil_hospital_messages[6];
_anon0 eil_spiral_messages[5];
_anon0 eil_subway_messages[6];
_anon0 eil_forest_messages[5];
_anon0 eil_water_messages[6];
_anon0 eil_building_messages[6];
_anon0 eil_apart_messages[4];
_anon0* eil_stage_words[12];
_anon0 eil_forest_words_messages[50];
_anon0 eil_forest_words_cursed_messages[46];
_anon2 forest_words[16];
_anon12 player_ext_info[2];
int(*EilEventNormalTalk)(_anon4*, EventUnit*);
int(*GetLeftCancelCheck)(_anon4*, EventUnit*);
int(*GetLeftWakeUp)(_anon4*, EventUnit*);
int(*GetLeftWakeupCheck)(_anon4*);
void(*GetLeftTimerReset)(EventUnit*);
int stage_talk_long_timer;
EventFlag event_flag;
_GAME_WORK gamew;
int(*EilEventStandTalk)(_anon4*, EventUnit*);
int(*StageTalkCancelCheck)(_anon4*, EventUnit*);
int(*StageTalkWakeUp)(_anon4*, EventUnit*);
int(*StageTalkWakeUpCheck)(_anon4*);
void(*StageTalkTimerReset)(EventUnit*);
int(*EilEventForestReadWords)(_anon4*, EventUnit*);
int(*ForestReadCancelCheck)(_anon4*, EventUnit*);
int(*ForestReadWakeUp)(_anon4*, EventUnit*);
int(*ForestReadWakeUpCheck)(_anon4*);
void(*ForestReadTimerReset)(EventUnit*);
int(*EilEventSubwayEscalator)(_anon4*, EventUnit*);
int(*SubwayEscalatorMoveWakeUp)(_anon4*, EventUnit*);
int(*SubwayEscalatorMoveWakeUpCheck)(_anon4*);
void(*SubwayEscalatorMoveTimerReset)(EventUnit*);
float cm01_book_position[4];
int(*EilEventCMStand)(_anon4*, EventUnit*);
int(*CMStandCancelCheck)(_anon4*, EventUnit*);
int(*CMStandWakeUp)(_anon4*, EventUnit*);
int(*CMStandWakeUpCheck)(_anon4*);
void(*CMStandTimerReset)(EventUnit*);
_anon7 insane_types[13];
int(*EilEventInsane)(_anon4*, EventUnit*);
int(*InsaneCancelCheck)(_anon4*, EventUnit*);
int(*InsaneWakeUp)(_anon4*, EventUnit*);
int(*InsaneWakeUpCheck)(_anon4*);
void(*InsaneTimerReset)(EventUnit*);
int(*EilEventCancelTalk)(_anon4*, EventUnit*);
int(*CancelActionWakeUp)(_anon4*, EventUnit*);
int(*CancelActionWakeUpCheck)(_anon4*);
void(*CancelActionReset)(EventUnit*);
_anon5 eil_event_work;
int stage_talk_current_stage;
_anon3 mz_hole_stand_points[4];
float sg_vector_unit_z[4];
float sg_vector_unit_y[4];
sfObj* stand_obj;
void(*EileenStand)(sfObj*);

int EilMessageCount(_anon0* message_table);
_anon0* EilMessagePickup(_anon0* message_table, int idx);
unsigned char* EilEventMessageFlags(int stage_no);
unsigned char* EilEventMessageForestWordsFlags();
unsigned char* EilEventFlags();
int EilEventFlagValue(unsigned char* flags, int no);
void EilEventFlagSetValue(unsigned char* flags, int no, unsigned int value);
void EventUnitClear(EventUnit* ev);
int EventUnitProcess(EventUnit* ev, _anon4* eil);
int EventUnitStart(EventUnit* ev, _anon4* eil);
int EventUnitCancelCheck(EventUnit* ev, _anon4* eil);
void EventUnitDo(EventUnit* ev, _anon4* eil);
void EventUnitReset(EventUnit* ev);
void GetLeftTimerReset(EventUnit* ev);
int GetLeftWakeupCheck(_anon4* eil);
int GetLeftCancelCheck(_anon4* eil, EventUnit* ev);
int GetLeftWakeUp(EventUnit* ev);
void GetLeftEventCreate(EventUnit* ev);
void StageTalkTimerReset(EventUnit* ev);
int StageTalkWakeUpCheck(_anon4* eil);
int StageTalkCancelCheck(_anon4* eil, EventUnit* ev);
int StageTalkWakeUp(EventUnit* ev);
void StageTalkEventCreate(EventUnit* ev);
void ForestReadTimerReset(EventUnit* ev);
int ForestReadWakeUpCheck(_anon4* eil);
int ForestReadCancelCheck(_anon4* eil, EventUnit* ev);
int ForestReadWakeUp(_anon4* eil, EventUnit* ev);
void ForestReadEventCreate(EventUnit* ev);
void SubwayEscalatorMoveTimerReset(EventUnit* ev);
int SubwayEscalatorMoveWakeUpCheck(_anon4* eil);
int SubwayEscalatorMoveWakeUp();
void SubwayEscalatorMoveCreate(EventUnit* ev);
void CMStandTimerReset(EventUnit* ev);
int CMStandWakeUpCheck(_anon4* eil);
int CMStandCancelCheck();
int CMStandWakeUp();
void CMStandCreate(EventUnit* ev);
void InsaneTimerReset(EventUnit* ev);
int InsaneWakeUpCheck(_anon4* eil);
int InsaneWakeUp(_anon4* eil, EventUnit* ev);
int InsaneCancelCheck(_anon4* eil, EventUnit* ev);
void InsaneEventCreate(EventUnit* ev);
void CancelActionReset();
int CancelActionWakeUpCheck();
int CancelActionWakeUp(EventUnit* ev);
void CancelActionCreate(EventUnit* ev);
void EventFinish(_anon4* eil);
int EilEventNormalTalk(_anon4* eil, EventUnit* ev);
int EilEventStandTalk(_anon4* eil, EventUnit* ev);
int EilEventInsane(_anon4* eil, EventUnit* ev);
int EilEventForestReadWords(_anon4* eil, EventUnit* ev);
int EilEventCMStand(_anon4* eil);
int EilEventSubwayEscalator(_anon4* eil);
int EilEventCancelTalk(_anon4* eil, EventUnit* ev);
void EileenEventStaticInit();
void EileenEventInit(_anon4* eil);
void EileenEventCheck(_anon4* eil);
void EileenEventProcess(_anon4* eil);
int EileenEventTalkSet(_anon4* eil, _anon0* emes);
void EileenEventTalkCancel(_anon4* eil);
void EileenEventTalk(_anon4* eil);
int EileenEventFRReadStyle();
int EileenEventCMDemoType();
void EileenEventLastBattleDeadSet();
int EileenEventEndingType();
void MZHoleStandSet(int scene_no);
void EileenEventMZHoleStand();
void EileenEventMZHoleStandEnd();
void EileenEventMZPeepStandSet(int scene_no);
void EileenEventMZPeepStandEnd();
void EileenEventSBStandStart();
void EileenEventSBStandEnd();
void EileenEventBD12StandSet();
void EileenEventBD12StandUpDown();

// 
// Start address: 0x2cddf0
int EilMessageCount(_anon0* message_table)
{
	_anon0* emes;
	int n;
	// Line 62, Address: 0x2cddf0, Func Offset: 0
	// Line 63, Address: 0x2cddf8, Func Offset: 0x8
	// Line 64, Address: 0x2cde00, Func Offset: 0x10
	// Line 65, Address: 0x2cde04, Func Offset: 0x14
	// Line 64, Address: 0x2cde08, Func Offset: 0x18
	// Line 66, Address: 0x2cde0c, Func Offset: 0x1c
	// Line 68, Address: 0x2cde14, Func Offset: 0x24
	// Line 69, Address: 0x2cde18, Func Offset: 0x28
	// Line 68, Address: 0x2cde1c, Func Offset: 0x2c
	// Line 69, Address: 0x2cde20, Func Offset: 0x30
	// Line 71, Address: 0x2cde28, Func Offset: 0x38
	// Func End, Address: 0x2cde30, Func Offset: 0x40
}

// 
// Start address: 0x2cde30
_anon0* EilMessagePickup(_anon0* message_table, int idx)
{
	_anon0* emes;
	int n;
	// Line 78, Address: 0x2cde30, Func Offset: 0
	// Line 79, Address: 0x2cde38, Func Offset: 0x8
	// Line 80, Address: 0x2cde40, Func Offset: 0x10
	// Line 81, Address: 0x2cde44, Func Offset: 0x14
	// Line 80, Address: 0x2cde48, Func Offset: 0x18
	// Line 82, Address: 0x2cde4c, Func Offset: 0x1c
	// Line 83, Address: 0x2cde54, Func Offset: 0x24
	// Line 84, Address: 0x2cde60, Func Offset: 0x30
	// Line 86, Address: 0x2cde68, Func Offset: 0x38
	// Line 87, Address: 0x2cde6c, Func Offset: 0x3c
	// Line 86, Address: 0x2cde70, Func Offset: 0x40
	// Line 87, Address: 0x2cde74, Func Offset: 0x44
	// Line 88, Address: 0x2cde80, Func Offset: 0x50
	// Line 89, Address: 0x2cde88, Func Offset: 0x58
	// Func End, Address: 0x2cde90, Func Offset: 0x60
}

// 
// Start address: 0x2cde90
unsigned char* EilEventMessageFlags(int stage_no)
{
	_anon6* flags;
	// Line 588, Address: 0x2cde90, Func Offset: 0
	// Line 590, Address: 0x2cde9c, Func Offset: 0xc
	// Line 593, Address: 0x2cdea4, Func Offset: 0x14
	// Line 594, Address: 0x2cdef4, Func Offset: 0x64
	// Line 595, Address: 0x2cdef8, Func Offset: 0x68
	// Line 597, Address: 0x2cdf00, Func Offset: 0x70
	// Line 599, Address: 0x2cdf08, Func Offset: 0x78
	// Line 601, Address: 0x2cdf10, Func Offset: 0x80
	// Line 603, Address: 0x2cdf18, Func Offset: 0x88
	// Line 605, Address: 0x2cdf20, Func Offset: 0x90
	// Line 607, Address: 0x2cdf28, Func Offset: 0x98
	// Line 609, Address: 0x2cdf30, Func Offset: 0xa0
	// Line 610, Address: 0x2cdf38, Func Offset: 0xa8
	// Func End, Address: 0x2cdf48, Func Offset: 0xb8
}

// 
// Start address: 0x2cdf50
unsigned char* EilEventMessageForestWordsFlags()
{
	_anon6* flags;
	// Line 613, Address: 0x2cdf50, Func Offset: 0
	// Line 615, Address: 0x2cdf58, Func Offset: 0x8
	// Line 617, Address: 0x2cdf60, Func Offset: 0x10
	// Line 616, Address: 0x2cdf64, Func Offset: 0x14
	// Line 617, Address: 0x2cdf68, Func Offset: 0x18
	// Func End, Address: 0x2cdf70, Func Offset: 0x20
}

// 
// Start address: 0x2cdf70
unsigned char* EilEventFlags()
{
	_anon6* flags;
	// Line 621, Address: 0x2cdf70, Func Offset: 0
	// Line 622, Address: 0x2cdf78, Func Offset: 0x8
	// Line 624, Address: 0x2cdf80, Func Offset: 0x10
	// Line 623, Address: 0x2cdf84, Func Offset: 0x14
	// Line 624, Address: 0x2cdf88, Func Offset: 0x18
	// Func End, Address: 0x2cdf90, Func Offset: 0x20
}

// 
// Start address: 0x2cdf90
int EilEventFlagValue(unsigned char* flags, int no)
{
	int offset;
	int value;
	// Line 630, Address: 0x2cdf90, Func Offset: 0
	// Line 631, Address: 0x2cdfa0, Func Offset: 0x10
	// Line 633, Address: 0x2cdfa8, Func Offset: 0x18
	// Line 636, Address: 0x2cdfc4, Func Offset: 0x34
	// Func End, Address: 0x2cdfcc, Func Offset: 0x3c
}

// 
// Start address: 0x2cdfd0
void EilEventFlagSetValue(unsigned char* flags, int no, unsigned int value)
{
	unsigned int org_value;
	int offset;
	// Line 644, Address: 0x2cdfd0, Func Offset: 0
	// Line 646, Address: 0x2cdfd4, Func Offset: 0x4
	// Line 647, Address: 0x2cdfe8, Func Offset: 0x18
	// Line 649, Address: 0x2cdfec, Func Offset: 0x1c
	// Line 650, Address: 0x2ce008, Func Offset: 0x38
	// Line 652, Address: 0x2ce00c, Func Offset: 0x3c
	// Func End, Address: 0x2ce014, Func Offset: 0x44
}

// 
// Start address: 0x2ce020
void EventUnitClear(EventUnit* ev)
{
	// Line 766, Address: 0x2ce020, Func Offset: 0
	// Func End, Address: 0x2ce028, Func Offset: 0x8
}

// 
// Start address: 0x2ce030
int EventUnitProcess(EventUnit* ev, _anon4* eil)
{
	// Line 771, Address: 0x2ce030, Func Offset: 0
	// Line 772, Address: 0x2ce03c, Func Offset: 0xc
	// Line 773, Address: 0x2ce048, Func Offset: 0x18
	// Line 775, Address: 0x2ce050, Func Offset: 0x20
	// Line 776, Address: 0x2ce05c, Func Offset: 0x2c
	// Line 778, Address: 0x2ce068, Func Offset: 0x38
	// Line 780, Address: 0x2ce074, Func Offset: 0x44
	// Line 784, Address: 0x2ce080, Func Offset: 0x50
	// Line 785, Address: 0x2ce094, Func Offset: 0x64
	// Line 787, Address: 0x2ce0a8, Func Offset: 0x78
	// Line 789, Address: 0x2ce0b0, Func Offset: 0x80
	// Line 790, Address: 0x2ce0bc, Func Offset: 0x8c
	// Line 792, Address: 0x2ce0c8, Func Offset: 0x98
	// Line 793, Address: 0x2ce0d0, Func Offset: 0xa0
	// Func End, Address: 0x2ce0e0, Func Offset: 0xb0
}

// 
// Start address: 0x2ce0e0
int EventUnitStart(EventUnit* ev, _anon4* eil)
{
	// Line 797, Address: 0x2ce0e0, Func Offset: 0
	// Line 799, Address: 0x2ce0f0, Func Offset: 0x10
	// Line 800, Address: 0x2ce108, Func Offset: 0x28
	// Line 801, Address: 0x2ce110, Func Offset: 0x30
	// Line 802, Address: 0x2ce114, Func Offset: 0x34
	// Func End, Address: 0x2ce124, Func Offset: 0x44
}

// 
// Start address: 0x2ce130
int EventUnitCancelCheck(EventUnit* ev, _anon4* eil)
{
	// Line 806, Address: 0x2ce130, Func Offset: 0
	// Line 808, Address: 0x2ce13c, Func Offset: 0xc
	// Line 810, Address: 0x2ce15c, Func Offset: 0x2c
	// Func End, Address: 0x2ce168, Func Offset: 0x38
}

// 
// Start address: 0x2ce170
void EventUnitDo(EventUnit* ev, _anon4* eil)
{
	// Line 813, Address: 0x2ce170, Func Offset: 0
	// Line 814, Address: 0x2ce178, Func Offset: 0x8
	// Line 817, Address: 0x2ce188, Func Offset: 0x18
	// Line 818, Address: 0x2ce190, Func Offset: 0x20
	// Line 819, Address: 0x2ce198, Func Offset: 0x28
	// Func End, Address: 0x2ce1a4, Func Offset: 0x34
}

// 
// Start address: 0x2ce1b0
void EventUnitReset(EventUnit* ev)
{
	// Line 822, Address: 0x2ce1b0, Func Offset: 0
	// Line 823, Address: 0x2ce1bc, Func Offset: 0xc
	// Line 826, Address: 0x2ce1cc, Func Offset: 0x1c
	// Line 827, Address: 0x2ce1d4, Func Offset: 0x24
	// Line 828, Address: 0x2ce1e0, Func Offset: 0x30
	// Line 829, Address: 0x2ce1e8, Func Offset: 0x38
	// Line 830, Address: 0x2ce1ec, Func Offset: 0x3c
	// Func End, Address: 0x2ce200, Func Offset: 0x50
}

// 
// Start address: 0x2ce200
void GetLeftTimerReset(EventUnit* ev)
{
	// Line 849, Address: 0x2ce200, Func Offset: 0
	// Line 850, Address: 0x2ce208, Func Offset: 0x8
	// Line 852, Address: 0x2ce210, Func Offset: 0x10
	// Func End, Address: 0x2ce218, Func Offset: 0x18
}

// 
// Start address: 0x2ce220
int GetLeftWakeupCheck(_anon4* eil)
{
	// Line 857, Address: 0x2ce220, Func Offset: 0
	// Line 858, Address: 0x2ce234, Func Offset: 0x14
	// Line 861, Address: 0x2ce240, Func Offset: 0x20
	// Line 858, Address: 0x2ce244, Func Offset: 0x24
	// Line 861, Address: 0x2ce248, Func Offset: 0x28
	// Line 862, Address: 0x2ce25c, Func Offset: 0x3c
	// Line 866, Address: 0x2ce268, Func Offset: 0x48
	// Line 869, Address: 0x2ce288, Func Offset: 0x68
	// Func End, Address: 0x2ce290, Func Offset: 0x70
}

// 
// Start address: 0x2ce290
int GetLeftCancelCheck(_anon4* eil, EventUnit* ev)
{
	// Line 872, Address: 0x2ce290, Func Offset: 0
	// Line 873, Address: 0x2ce294, Func Offset: 0x4
	// Line 875, Address: 0x2ce2a8, Func Offset: 0x18
	// Line 876, Address: 0x2ce2ac, Func Offset: 0x1c
	// Line 877, Address: 0x2ce2b4, Func Offset: 0x24
	// Line 879, Address: 0x2ce2b8, Func Offset: 0x28
	// Line 880, Address: 0x2ce2c0, Func Offset: 0x30
	// Func End, Address: 0x2ce2c8, Func Offset: 0x38
}

// 
// Start address: 0x2ce2d0
int GetLeftWakeUp(EventUnit* ev)
{
	int mes_no;
	_anon0* emes;
	// Line 883, Address: 0x2ce2d0, Func Offset: 0
	// Line 890, Address: 0x2ce2d4, Func Offset: 0x4
	// Line 883, Address: 0x2ce2d8, Func Offset: 0x8
	// Line 890, Address: 0x2ce2dc, Func Offset: 0xc
	// Line 883, Address: 0x2ce2e0, Func Offset: 0x10
	// Line 890, Address: 0x2ce2e4, Func Offset: 0x14
	// Line 892, Address: 0x2ce2ec, Func Offset: 0x1c
	// Line 893, Address: 0x2ce2f4, Func Offset: 0x24
	// Line 892, Address: 0x2ce2f8, Func Offset: 0x28
	// Line 893, Address: 0x2ce2fc, Func Offset: 0x2c
	// Line 895, Address: 0x2ce304, Func Offset: 0x34
	// Line 897, Address: 0x2ce308, Func Offset: 0x38
	// Line 896, Address: 0x2ce30c, Func Offset: 0x3c
	// Line 897, Address: 0x2ce310, Func Offset: 0x40
	// Func End, Address: 0x2ce31c, Func Offset: 0x4c
}

// 
// Start address: 0x2ce320
void GetLeftEventCreate(EventUnit* ev)
{
	// Line 901, Address: 0x2ce320, Func Offset: 0
	// Line 902, Address: 0x2ce32c, Func Offset: 0xc
	// Line 903, Address: 0x2ce338, Func Offset: 0x18
	// Line 904, Address: 0x2ce344, Func Offset: 0x24
	// Line 905, Address: 0x2ce350, Func Offset: 0x30
	// Line 906, Address: 0x2ce358, Func Offset: 0x38
	// Func End, Address: 0x2ce360, Func Offset: 0x40
}

// 
// Start address: 0x2ce360
void StageTalkTimerReset(EventUnit* ev)
{
	// Line 919, Address: 0x2ce360, Func Offset: 0
	// Line 920, Address: 0x2ce368, Func Offset: 0x8
	// Line 922, Address: 0x2ce370, Func Offset: 0x10
	// Func End, Address: 0x2ce378, Func Offset: 0x18
}

// 
// Start address: 0x2ce380
int StageTalkWakeUpCheck(_anon4* eil)
{
	// Line 925, Address: 0x2ce380, Func Offset: 0
	// Line 927, Address: 0x2ce388, Func Offset: 0x8
	// Line 928, Address: 0x2ce394, Func Offset: 0x14
	// Line 931, Address: 0x2ce3a0, Func Offset: 0x20
	// Line 932, Address: 0x2ce3ac, Func Offset: 0x2c
	// Line 935, Address: 0x2ce3b8, Func Offset: 0x38
	// Line 936, Address: 0x2ce3c8, Func Offset: 0x48
	// Line 939, Address: 0x2ce3d0, Func Offset: 0x50
	// Line 940, Address: 0x2ce3ec, Func Offset: 0x6c
	// Line 943, Address: 0x2ce3f8, Func Offset: 0x78
	// Line 944, Address: 0x2ce404, Func Offset: 0x84
	// Line 948, Address: 0x2ce410, Func Offset: 0x90
	// Line 951, Address: 0x2ce420, Func Offset: 0xa0
	// Func End, Address: 0x2ce42c, Func Offset: 0xac
}

// 
// Start address: 0x2ce430
int StageTalkCancelCheck(_anon4* eil, EventUnit* ev)
{
	// Line 954, Address: 0x2ce430, Func Offset: 0
	// Line 955, Address: 0x2ce434, Func Offset: 0x4
	// Line 954, Address: 0x2ce438, Func Offset: 0x8
	// Line 955, Address: 0x2ce440, Func Offset: 0x10
	// Line 958, Address: 0x2ce460, Func Offset: 0x30
	// Line 959, Address: 0x2ce468, Func Offset: 0x38
	// Line 960, Address: 0x2ce470, Func Offset: 0x40
	// Line 961, Address: 0x2ce478, Func Offset: 0x48
	// Line 964, Address: 0x2ce480, Func Offset: 0x50
	// Line 965, Address: 0x2ce49c, Func Offset: 0x6c
	// Line 966, Address: 0x2ce4a0, Func Offset: 0x70
	// Line 967, Address: 0x2ce4a8, Func Offset: 0x78
	// Line 968, Address: 0x2ce4b0, Func Offset: 0x80
	// Line 971, Address: 0x2ce4b8, Func Offset: 0x88
	// Line 972, Address: 0x2ce4c0, Func Offset: 0x90
	// Func End, Address: 0x2ce4cc, Func Offset: 0x9c
}

// 
// Start address: 0x2ce4d0
int StageTalkWakeUp(EventUnit* ev)
{
	int mes_no;
	int n_messages;
	_anon0* message_table;
	_anon0* emes;
	int stage_no;
	unsigned char* message_flags;
	// Line 975, Address: 0x2ce4d0, Func Offset: 0
	// Line 984, Address: 0x2ce4d4, Func Offset: 0x4
	// Line 975, Address: 0x2ce4d8, Func Offset: 0x8
	// Line 984, Address: 0x2ce4ec, Func Offset: 0x1c
	// Line 985, Address: 0x2ce4f8, Func Offset: 0x28
	// Line 986, Address: 0x2ce500, Func Offset: 0x30
	// Line 989, Address: 0x2ce508, Func Offset: 0x38
	// Line 992, Address: 0x2ce510, Func Offset: 0x40
	// Line 993, Address: 0x2ce524, Func Offset: 0x54
	// Line 995, Address: 0x2ce530, Func Offset: 0x60
	// Line 998, Address: 0x2ce538, Func Offset: 0x68
	// Line 995, Address: 0x2ce53c, Func Offset: 0x6c
	// Line 998, Address: 0x2ce540, Func Offset: 0x70
	// Line 999, Address: 0x2ce548, Func Offset: 0x78
	// Line 1001, Address: 0x2ce558, Func Offset: 0x88
	// Line 1002, Address: 0x2ce568, Func Offset: 0x98
	// Line 1003, Address: 0x2ce570, Func Offset: 0xa0
	// Line 1006, Address: 0x2ce578, Func Offset: 0xa8
	// Line 1007, Address: 0x2ce584, Func Offset: 0xb4
	// Line 1008, Address: 0x2ce58c, Func Offset: 0xbc
	// Line 1009, Address: 0x2ce59c, Func Offset: 0xcc
	// Line 1011, Address: 0x2ce5a4, Func Offset: 0xd4
	// Line 1014, Address: 0x2ce5a8, Func Offset: 0xd8
	// Line 1015, Address: 0x2ce5b0, Func Offset: 0xe0
	// Line 1016, Address: 0x2ce5bc, Func Offset: 0xec
	// Line 1018, Address: 0x2ce5c0, Func Offset: 0xf0
	// Line 1019, Address: 0x2ce5cc, Func Offset: 0xfc
	// Line 1020, Address: 0x2ce5d0, Func Offset: 0x100
	// Func End, Address: 0x2ce5ec, Func Offset: 0x11c
}

// 
// Start address: 0x2ce5f0
void StageTalkEventCreate(EventUnit* ev)
{
	int stage_no;
	_anon0* message_table;
	unsigned char* message_flags;
	int mes_no;
	int n_messages;
	// Line 1023, Address: 0x2ce5f0, Func Offset: 0
	// Line 1036, Address: 0x2ce5f4, Func Offset: 0x4
	// Line 1023, Address: 0x2ce5f8, Func Offset: 0x8
	// Line 1033, Address: 0x2ce5fc, Func Offset: 0xc
	// Line 1023, Address: 0x2ce600, Func Offset: 0x10
	// Line 1036, Address: 0x2ce604, Func Offset: 0x14
	// Line 1023, Address: 0x2ce608, Func Offset: 0x18
	// Line 1033, Address: 0x2ce60c, Func Offset: 0x1c
	// Line 1036, Address: 0x2ce614, Func Offset: 0x24
	// Line 1037, Address: 0x2ce620, Func Offset: 0x30
	// Line 1039, Address: 0x2ce628, Func Offset: 0x38
	// Line 1042, Address: 0x2ce630, Func Offset: 0x40
	// Line 1043, Address: 0x2ce640, Func Offset: 0x50
	// Line 1047, Address: 0x2ce648, Func Offset: 0x58
	// Line 1048, Address: 0x2ce650, Func Offset: 0x60
	// Line 1050, Address: 0x2ce660, Func Offset: 0x70
	// Line 1051, Address: 0x2ce678, Func Offset: 0x88
	// Line 1054, Address: 0x2ce680, Func Offset: 0x90
	// Line 1055, Address: 0x2ce684, Func Offset: 0x94
	// Line 1054, Address: 0x2ce688, Func Offset: 0x98
	// Line 1055, Address: 0x2ce68c, Func Offset: 0x9c
	// Line 1054, Address: 0x2ce690, Func Offset: 0xa0
	// Line 1059, Address: 0x2ce694, Func Offset: 0xa4
	// Line 1056, Address: 0x2ce698, Func Offset: 0xa8
	// Line 1055, Address: 0x2ce69c, Func Offset: 0xac
	// Line 1056, Address: 0x2ce6a0, Func Offset: 0xb0
	// Line 1057, Address: 0x2ce6a4, Func Offset: 0xb4
	// Line 1056, Address: 0x2ce6a8, Func Offset: 0xb8
	// Line 1057, Address: 0x2ce6ac, Func Offset: 0xbc
	// Line 1058, Address: 0x2ce6b0, Func Offset: 0xc0
	// Line 1057, Address: 0x2ce6b4, Func Offset: 0xc4
	// Line 1058, Address: 0x2ce6b8, Func Offset: 0xc8
	// Line 1059, Address: 0x2ce6bc, Func Offset: 0xcc
	// Line 1060, Address: 0x2ce6c4, Func Offset: 0xd4
	// Func End, Address: 0x2ce6dc, Func Offset: 0xec
}

// 
// Start address: 0x2ce6e0
void ForestReadTimerReset(EventUnit* ev)
{
	// Line 1073, Address: 0x2ce6e0, Func Offset: 0
	// Line 1074, Address: 0x2ce6e8, Func Offset: 0x8
	// Line 1076, Address: 0x2ce6f0, Func Offset: 0x10
	// Func End, Address: 0x2ce6f8, Func Offset: 0x18
}

// 
// Start address: 0x2ce700
int ForestReadWakeUpCheck(_anon4* eil)
{
	// Line 1079, Address: 0x2ce700, Func Offset: 0
	// Line 1081, Address: 0x2ce704, Func Offset: 0x4
	// Line 1079, Address: 0x2ce708, Func Offset: 0x8
	// Line 1081, Address: 0x2ce710, Func Offset: 0x10
	// Line 1082, Address: 0x2ce71c, Func Offset: 0x1c
	// Line 1085, Address: 0x2ce728, Func Offset: 0x28
	// Line 1086, Address: 0x2ce744, Func Offset: 0x44
	// Line 1089, Address: 0x2ce750, Func Offset: 0x50
	// Line 1090, Address: 0x2ce760, Func Offset: 0x60
	// Line 1093, Address: 0x2ce768, Func Offset: 0x68
	// Line 1094, Address: 0x2ce778, Func Offset: 0x78
	// Line 1095, Address: 0x2ce788, Func Offset: 0x88
	// Line 1098, Address: 0x2ce790, Func Offset: 0x90
	// Line 1099, Address: 0x2ce798, Func Offset: 0x98
	// Func End, Address: 0x2ce7a8, Func Offset: 0xa8
}

// 
// Start address: 0x2ce7b0
int ForestReadCancelCheck(_anon4* eil, EventUnit* ev)
{
	// Line 1102, Address: 0x2ce7b0, Func Offset: 0
	// Line 1103, Address: 0x2ce7b4, Func Offset: 0x4
	// Line 1102, Address: 0x2ce7b8, Func Offset: 0x8
	// Line 1103, Address: 0x2ce7bc, Func Offset: 0xc
	// Line 1104, Address: 0x2ce7c8, Func Offset: 0x18
	// Line 1105, Address: 0x2ce7cc, Func Offset: 0x1c
	// Line 1106, Address: 0x2ce7d4, Func Offset: 0x24
	// Line 1107, Address: 0x2ce7dc, Func Offset: 0x2c
	// Line 1108, Address: 0x2ce7e4, Func Offset: 0x34
	// Line 1111, Address: 0x2ce7e8, Func Offset: 0x38
	// Line 1112, Address: 0x2ce7f4, Func Offset: 0x44
	// Line 1113, Address: 0x2ce7f8, Func Offset: 0x48
	// Line 1114, Address: 0x2ce800, Func Offset: 0x50
	// Line 1115, Address: 0x2ce808, Func Offset: 0x58
	// Line 1118, Address: 0x2ce810, Func Offset: 0x60
	// Line 1119, Address: 0x2ce82c, Func Offset: 0x7c
	// Line 1120, Address: 0x2ce830, Func Offset: 0x80
	// Line 1121, Address: 0x2ce838, Func Offset: 0x88
	// Line 1122, Address: 0x2ce840, Func Offset: 0x90
	// Line 1125, Address: 0x2ce848, Func Offset: 0x98
	// Line 1126, Address: 0x2ce850, Func Offset: 0xa0
	// Func End, Address: 0x2ce85c, Func Offset: 0xac
}

// 
// Start address: 0x2ce860
int ForestReadWakeUp(_anon4* eil, EventUnit* ev)
{
	int target_no;
	int no;
	_anon2* fwords;
	unsigned char* words_flags;
	int i;
	float v[4];
	float r;
	// Line 1129, Address: 0x2ce860, Func Offset: 0
	// Line 1130, Address: 0x2ce880, Func Offset: 0x20
	// Line 1129, Address: 0x2ce884, Func Offset: 0x24
	// Line 1139, Address: 0x2ce888, Func Offset: 0x28
	// Line 1140, Address: 0x2ce894, Func Offset: 0x34
	// Line 1141, Address: 0x2ce8a0, Func Offset: 0x40
	// Line 1143, Address: 0x2ce8a4, Func Offset: 0x44
	// Line 1141, Address: 0x2ce8ac, Func Offset: 0x4c
	// Line 1143, Address: 0x2ce8b0, Func Offset: 0x50
	// Line 1146, Address: 0x2ce8c0, Func Offset: 0x60
	// Line 1150, Address: 0x2ce8d4, Func Offset: 0x74
	// Line 1151, Address: 0x2ce8f4, Func Offset: 0x94
	// Line 1152, Address: 0x2ce918, Func Offset: 0xb8
	// Line 1156, Address: 0x2ce934, Func Offset: 0xd4
	// Line 1160, Address: 0x2ce944, Func Offset: 0xe4
	// Line 1161, Address: 0x2ce94c, Func Offset: 0xec
	// Line 1163, Address: 0x2ce968, Func Offset: 0x108
	// Line 1164, Address: 0x2ce970, Func Offset: 0x110
	// Line 1167, Address: 0x2ce978, Func Offset: 0x118
	// Line 1168, Address: 0x2ce97c, Func Offset: 0x11c
	// Line 1169, Address: 0x2ce980, Func Offset: 0x120
	// Func End, Address: 0x2ce9a4, Func Offset: 0x144
}

// 
// Start address: 0x2ce9b0
void ForestReadEventCreate(EventUnit* ev)
{
	int scene;
	int i;
	int start_index;
	int n_words;
	int n_left_words;
	unsigned char* words_flags;
	// Line 1172, Address: 0x2ce9b0, Func Offset: 0
	// Line 1173, Address: 0x2ce9b4, Func Offset: 0x4
	// Line 1172, Address: 0x2ce9b8, Func Offset: 0x8
	// Line 1184, Address: 0x2ce9bc, Func Offset: 0xc
	// Line 1172, Address: 0x2ce9c0, Func Offset: 0x10
	// Line 1175, Address: 0x2ce9d0, Func Offset: 0x20
	// Line 1172, Address: 0x2ce9d4, Func Offset: 0x24
	// Line 1173, Address: 0x2ce9d8, Func Offset: 0x28
	// Line 1184, Address: 0x2ce9dc, Func Offset: 0x2c
	// Line 1186, Address: 0x2ce9ec, Func Offset: 0x3c
	// Line 1193, Address: 0x2cea20, Func Offset: 0x70
	// Line 1198, Address: 0x2cea28, Func Offset: 0x78
	// Line 1200, Address: 0x2cea38, Func Offset: 0x88
	// Line 1202, Address: 0x2cea44, Func Offset: 0x94
	// Line 1203, Address: 0x2cea4c, Func Offset: 0x9c
	// Line 1205, Address: 0x2cea50, Func Offset: 0xa0
	// Line 1207, Address: 0x2cea60, Func Offset: 0xb0
	// Line 1211, Address: 0x2cea68, Func Offset: 0xb8
	// Line 1212, Address: 0x2cea70, Func Offset: 0xc0
	// Line 1211, Address: 0x2cea74, Func Offset: 0xc4
	// Line 1212, Address: 0x2cea78, Func Offset: 0xc8
	// Line 1214, Address: 0x2cea80, Func Offset: 0xd0
	// Line 1215, Address: 0x2ceaac, Func Offset: 0xfc
	// Line 1216, Address: 0x2ceab0, Func Offset: 0x100
	// Line 1218, Address: 0x2ceac0, Func Offset: 0x110
	// Line 1221, Address: 0x2ceac8, Func Offset: 0x118
	// Line 1222, Address: 0x2ceacc, Func Offset: 0x11c
	// Line 1221, Address: 0x2cead0, Func Offset: 0x120
	// Line 1222, Address: 0x2cead4, Func Offset: 0x124
	// Line 1221, Address: 0x2cead8, Func Offset: 0x128
	// Line 1228, Address: 0x2ceadc, Func Offset: 0x12c
	// Line 1223, Address: 0x2ceae0, Func Offset: 0x130
	// Line 1222, Address: 0x2ceae4, Func Offset: 0x134
	// Line 1223, Address: 0x2ceae8, Func Offset: 0x138
	// Line 1224, Address: 0x2ceaec, Func Offset: 0x13c
	// Line 1223, Address: 0x2ceaf0, Func Offset: 0x140
	// Line 1224, Address: 0x2ceaf4, Func Offset: 0x144
	// Line 1225, Address: 0x2ceaf8, Func Offset: 0x148
	// Line 1224, Address: 0x2ceafc, Func Offset: 0x14c
	// Line 1225, Address: 0x2ceb00, Func Offset: 0x150
	// Line 1226, Address: 0x2ceb08, Func Offset: 0x158
	// Line 1228, Address: 0x2ceb0c, Func Offset: 0x15c
	// Line 1229, Address: 0x2ceb14, Func Offset: 0x164
	// Func End, Address: 0x2ceb34, Func Offset: 0x184
}

// 
// Start address: 0x2ceb40
void SubwayEscalatorMoveTimerReset(EventUnit* ev)
{
	// Line 1238, Address: 0x2ceb40, Func Offset: 0
	// Line 1239, Address: 0x2ceb44, Func Offset: 0x4
	// Line 1241, Address: 0x2ceb48, Func Offset: 0x8
	// Func End, Address: 0x2ceb50, Func Offset: 0x10
}

// 
// Start address: 0x2ceb50
int SubwayEscalatorMoveWakeUpCheck(_anon4* eil)
{
	// Line 1247, Address: 0x2ceb50, Func Offset: 0
	// Line 1249, Address: 0x2ceb70, Func Offset: 0x20
	// Func End, Address: 0x2ceb78, Func Offset: 0x28
}

// 
// Start address: 0x2ceb80
int SubwayEscalatorMoveWakeUp()
{
	// Line 1254, Address: 0x2ceb80, Func Offset: 0
	// Func End, Address: 0x2ceb88, Func Offset: 0x8
}

// 
// Start address: 0x2ceb90
void SubwayEscalatorMoveCreate(EventUnit* ev)
{
	// Line 1258, Address: 0x2ceb90, Func Offset: 0
	// Line 1259, Address: 0x2ceb9c, Func Offset: 0xc
	// Line 1260, Address: 0x2ceba8, Func Offset: 0x18
	// Line 1262, Address: 0x2cebb4, Func Offset: 0x24
	// Line 1261, Address: 0x2cebb8, Func Offset: 0x28
	// Line 1262, Address: 0x2cebbc, Func Offset: 0x2c
	// Line 1263, Address: 0x2cebc0, Func Offset: 0x30
	// Func End, Address: 0x2cebc8, Func Offset: 0x38
}

// 
// Start address: 0x2cebd0
void CMStandTimerReset(EventUnit* ev)
{
	// Line 1272, Address: 0x2cebd0, Func Offset: 0
	// Line 1273, Address: 0x2cebd4, Func Offset: 0x4
	// Line 1275, Address: 0x2cebd8, Func Offset: 0x8
	// Func End, Address: 0x2cebe0, Func Offset: 0x10
}

// 
// Start address: 0x2cebe0
int CMStandWakeUpCheck(_anon4* eil)
{
	float v[4];
	float r;
	// Line 1281, Address: 0x2cebe0, Func Offset: 0
	// Line 1278, Address: 0x2cebe4, Func Offset: 0x4
	// Line 1281, Address: 0x2cebe8, Func Offset: 0x8
	// Line 1282, Address: 0x2cec08, Func Offset: 0x28
	// Line 1283, Address: 0x2cec2c, Func Offset: 0x4c
	// Line 1284, Address: 0x2cec64, Func Offset: 0x84
	// Line 1285, Address: 0x2cec70, Func Offset: 0x90
	// Line 1286, Address: 0x2cec78, Func Offset: 0x98
	// Func End, Address: 0x2cec80, Func Offset: 0xa0
}

// 
// Start address: 0x2cec80
int CMStandCancelCheck()
{
	// Line 1291, Address: 0x2cec80, Func Offset: 0
	// Func End, Address: 0x2cec88, Func Offset: 0x8
}

// 
// Start address: 0x2cec90
int CMStandWakeUp()
{
	// Line 1296, Address: 0x2cec90, Func Offset: 0
	// Func End, Address: 0x2cec98, Func Offset: 0x8
}

// 
// Start address: 0x2ceca0
void CMStandCreate(EventUnit* ev)
{
	// Line 1299, Address: 0x2ceca0, Func Offset: 0
	// Line 1301, Address: 0x2ceca4, Func Offset: 0x4
	// Line 1299, Address: 0x2ceca8, Func Offset: 0x8
	// Line 1301, Address: 0x2cecac, Func Offset: 0xc
	// Line 1303, Address: 0x2cecbc, Func Offset: 0x1c
	// Line 1304, Address: 0x2cecc0, Func Offset: 0x20
	// Line 1303, Address: 0x2cecc4, Func Offset: 0x24
	// Line 1304, Address: 0x2cecc8, Func Offset: 0x28
	// Line 1303, Address: 0x2ceccc, Func Offset: 0x2c
	// Line 1305, Address: 0x2cecd0, Func Offset: 0x30
	// Line 1304, Address: 0x2cecd4, Func Offset: 0x34
	// Line 1305, Address: 0x2cecd8, Func Offset: 0x38
	// Line 1306, Address: 0x2cecdc, Func Offset: 0x3c
	// Line 1305, Address: 0x2cece0, Func Offset: 0x40
	// Line 1306, Address: 0x2cece4, Func Offset: 0x44
	// Line 1307, Address: 0x2cece8, Func Offset: 0x48
	// Line 1306, Address: 0x2cecec, Func Offset: 0x4c
	// Line 1307, Address: 0x2cecf0, Func Offset: 0x50
	// Line 1308, Address: 0x2cecf4, Func Offset: 0x54
	// Line 1309, Address: 0x2cecfc, Func Offset: 0x5c
	// Func End, Address: 0x2ced0c, Func Offset: 0x6c
}

// 
// Start address: 0x2ced10
void InsaneTimerReset(EventUnit* ev)
{
	// Line 1317, Address: 0x2ced10, Func Offset: 0
	// Line 1318, Address: 0x2ced18, Func Offset: 0x8
	// Line 1320, Address: 0x2ced20, Func Offset: 0x10
	// Func End, Address: 0x2ced28, Func Offset: 0x18
}

// 
// Start address: 0x2ced30
int InsaneWakeUpCheck(_anon4* eil)
{
	// Line 1323, Address: 0x2ced30, Func Offset: 0
	// Line 1324, Address: 0x2ced3c, Func Offset: 0xc
	// Line 1325, Address: 0x2ced50, Func Offset: 0x20
	// Line 1329, Address: 0x2ced58, Func Offset: 0x28
	// Line 1331, Address: 0x2ced80, Func Offset: 0x50
	// Func End, Address: 0x2ced90, Func Offset: 0x60
}

// 
// Start address: 0x2ced90
int InsaneWakeUp(_anon4* eil, EventUnit* ev)
{
	int n_messages;
	_anon0* message_table;
	_anon0* emes;
	float r;
	_anon7* insane;
	int tp;
	// Line 1357, Address: 0x2ced90, Func Offset: 0
	// Line 1369, Address: 0x2ceda8, Func Offset: 0x18
	// Line 1370, Address: 0x2cedb8, Func Offset: 0x28
	// Line 1369, Address: 0x2cedbc, Func Offset: 0x2c
	// Line 1370, Address: 0x2cedc0, Func Offset: 0x30
	// Line 1371, Address: 0x2cedcc, Func Offset: 0x3c
	// Line 1373, Address: 0x2cedd4, Func Offset: 0x44
	// Line 1374, Address: 0x2cedf0, Func Offset: 0x60
	// Line 1375, Address: 0x2cee00, Func Offset: 0x70
	// Line 1378, Address: 0x2cee08, Func Offset: 0x78
	// Line 1379, Address: 0x2cee10, Func Offset: 0x80
	// Line 1382, Address: 0x2cee18, Func Offset: 0x88
	// Line 1383, Address: 0x2cee28, Func Offset: 0x98
	// Line 1384, Address: 0x2cee34, Func Offset: 0xa4
	// Line 1382, Address: 0x2cee38, Func Offset: 0xa8
	// Line 1384, Address: 0x2cee3c, Func Offset: 0xac
	// Line 1383, Address: 0x2cee40, Func Offset: 0xb0
	// Line 1384, Address: 0x2cee44, Func Offset: 0xb4
	// Line 1385, Address: 0x2cee50, Func Offset: 0xc0
	// Line 1386, Address: 0x2cee58, Func Offset: 0xc8
	// Line 1385, Address: 0x2cee5c, Func Offset: 0xcc
	// Line 1386, Address: 0x2cee60, Func Offset: 0xd0
	// Line 1387, Address: 0x2cee68, Func Offset: 0xd8
	// Line 1388, Address: 0x2cee80, Func Offset: 0xf0
	// Line 1387, Address: 0x2cee88, Func Offset: 0xf8
	// Line 1388, Address: 0x2cee98, Func Offset: 0x108
	// Line 1390, Address: 0x2ceeb8, Func Offset: 0x128
	// Line 1391, Address: 0x2ceed8, Func Offset: 0x148
	// Line 1392, Address: 0x2ceeec, Func Offset: 0x15c
	// Line 1394, Address: 0x2ceef4, Func Offset: 0x164
	// Line 1395, Address: 0x2cef00, Func Offset: 0x170
	// Line 1396, Address: 0x2cef04, Func Offset: 0x174
	// Line 1397, Address: 0x2cef08, Func Offset: 0x178
	// Line 1400, Address: 0x2cef10, Func Offset: 0x180
	// Line 1397, Address: 0x2cef14, Func Offset: 0x184
	// Line 1401, Address: 0x2cef18, Func Offset: 0x188
	// Func End, Address: 0x2cef30, Func Offset: 0x1a0
}

// 
// Start address: 0x2cef30
int InsaneCancelCheck(_anon4* eil, EventUnit* ev)
{
	// Line 1404, Address: 0x2cef30, Func Offset: 0
	// Line 1408, Address: 0x2cef34, Func Offset: 0x4
	// Line 1404, Address: 0x2cef38, Func Offset: 0x8
	// Line 1408, Address: 0x2cef3c, Func Offset: 0xc
	// Line 1409, Address: 0x2cef60, Func Offset: 0x30
	// Line 1412, Address: 0x2cef68, Func Offset: 0x38
	// Line 1413, Address: 0x2cef78, Func Offset: 0x48
	// Line 1414, Address: 0x2cef7c, Func Offset: 0x4c
	// Line 1415, Address: 0x2cef84, Func Offset: 0x54
	// Line 1416, Address: 0x2cef8c, Func Offset: 0x5c
	// Line 1417, Address: 0x2cef94, Func Offset: 0x64
	// Line 1418, Address: 0x2cef98, Func Offset: 0x68
	// Line 1419, Address: 0x2cefa0, Func Offset: 0x70
	// Func End, Address: 0x2cefac, Func Offset: 0x7c
}

// 
// Start address: 0x2cefb0
void InsaneEventCreate(EventUnit* ev)
{
	// Line 1423, Address: 0x2cefb0, Func Offset: 0
	// Line 1424, Address: 0x2cefbc, Func Offset: 0xc
	// Line 1425, Address: 0x2cefc8, Func Offset: 0x18
	// Line 1426, Address: 0x2cefd4, Func Offset: 0x24
	// Line 1427, Address: 0x2cefe0, Func Offset: 0x30
	// Line 1428, Address: 0x2cefe8, Func Offset: 0x38
	// Func End, Address: 0x2ceff0, Func Offset: 0x40
}

// 
// Start address: 0x2ceff0
void CancelActionReset()
{
	// Line 1435, Address: 0x2ceff0, Func Offset: 0
	// Func End, Address: 0x2ceff8, Func Offset: 0x8
}

// 
// Start address: 0x2cf000
int CancelActionWakeUpCheck()
{
	// Line 1440, Address: 0x2cf000, Func Offset: 0
	// Func End, Address: 0x2cf008, Func Offset: 0x8
}

// 
// Start address: 0x2cf010
int CancelActionWakeUp(EventUnit* ev)
{
	int no;
	// Line 1443, Address: 0x2cf010, Func Offset: 0
	// Line 1449, Address: 0x2cf01c, Func Offset: 0xc
	// Line 1450, Address: 0x2cf028, Func Offset: 0x18
	// Line 1452, Address: 0x2cf034, Func Offset: 0x24
	// Line 1453, Address: 0x2cf054, Func Offset: 0x44
	// Line 1455, Address: 0x2cf060, Func Offset: 0x50
	// Line 1456, Address: 0x2cf064, Func Offset: 0x54
	// Line 1459, Address: 0x2cf068, Func Offset: 0x58
	// Line 1458, Address: 0x2cf070, Func Offset: 0x60
	// Line 1459, Address: 0x2cf074, Func Offset: 0x64
	// Func End, Address: 0x2cf07c, Func Offset: 0x6c
}

// 
// Start address: 0x2cf080
void CancelActionCreate(EventUnit* ev)
{
	// Line 1463, Address: 0x2cf080, Func Offset: 0
	// Line 1464, Address: 0x2cf08c, Func Offset: 0xc
	// Line 1465, Address: 0x2cf098, Func Offset: 0x18
	// Line 1467, Address: 0x2cf0a4, Func Offset: 0x24
	// Line 1466, Address: 0x2cf0a8, Func Offset: 0x28
	// Line 1467, Address: 0x2cf0ac, Func Offset: 0x2c
	// Line 1468, Address: 0x2cf0b0, Func Offset: 0x30
	// Func End, Address: 0x2cf0b8, Func Offset: 0x38
}

// 
// Start address: 0x2cf0c0
void EventFinish(_anon4* eil)
{
	_anon5* eev;
	// Line 1514, Address: 0x2cf0c0, Func Offset: 0
	// Line 1516, Address: 0x2cf0c4, Func Offset: 0x4
	// Line 1514, Address: 0x2cf0c8, Func Offset: 0x8
	// Line 1516, Address: 0x2cf0d8, Func Offset: 0x18
	// Line 1515, Address: 0x2cf0dc, Func Offset: 0x1c
	// Line 1516, Address: 0x2cf0e0, Func Offset: 0x20
	// Line 1518, Address: 0x2cf0e8, Func Offset: 0x28
	// Line 1520, Address: 0x2cf108, Func Offset: 0x48
	// Line 1522, Address: 0x2cf110, Func Offset: 0x50
	// Line 1523, Address: 0x2cf11c, Func Offset: 0x5c
	// Func End, Address: 0x2cf130, Func Offset: 0x70
}

// 
// Start address: 0x2cf130
int EilEventNormalTalk(_anon4* eil, EventUnit* ev)
{
	float v[4];
	// Line 1531, Address: 0x2cf130, Func Offset: 0
	// Line 1533, Address: 0x2cf134, Func Offset: 0x4
	// Line 1531, Address: 0x2cf138, Func Offset: 0x8
	// Line 1533, Address: 0x2cf140, Func Offset: 0x10
	// Line 1534, Address: 0x2cf15c, Func Offset: 0x2c
	// Line 1535, Address: 0x2cf160, Func Offset: 0x30
	// Line 1536, Address: 0x2cf168, Func Offset: 0x38
	// Line 1537, Address: 0x2cf174, Func Offset: 0x44
	// Line 1538, Address: 0x2cf178, Func Offset: 0x48
	// Line 1539, Address: 0x2cf198, Func Offset: 0x68
	// Line 1542, Address: 0x2cf1a0, Func Offset: 0x70
	// Line 1543, Address: 0x2cf1ac, Func Offset: 0x7c
	// Line 1545, Address: 0x2cf1b4, Func Offset: 0x84
	// Line 1550, Address: 0x2cf1b8, Func Offset: 0x88
	// Line 1549, Address: 0x2cf1c0, Func Offset: 0x90
	// Line 1550, Address: 0x2cf1c4, Func Offset: 0x94
	// Func End, Address: 0x2cf1cc, Func Offset: 0x9c
}

// 
// Start address: 0x2cf1d0
int EilEventStandTalk(_anon4* eil, EventUnit* ev)
{
	float v[4];
	float r;
	// Line 1555, Address: 0x2cf1d0, Func Offset: 0
	// Line 1558, Address: 0x2cf1d4, Func Offset: 0x4
	// Line 1555, Address: 0x2cf1d8, Func Offset: 0x8
	// Line 1558, Address: 0x2cf1e8, Func Offset: 0x18
	// Line 1559, Address: 0x2cf204, Func Offset: 0x34
	// Line 1560, Address: 0x2cf208, Func Offset: 0x38
	// Line 1561, Address: 0x2cf210, Func Offset: 0x40
	// Line 1563, Address: 0x2cf21c, Func Offset: 0x4c
	// Line 1566, Address: 0x2cf228, Func Offset: 0x58
	// Line 1567, Address: 0x2cf248, Func Offset: 0x78
	// Line 1568, Address: 0x2cf250, Func Offset: 0x80
	// Line 1570, Address: 0x2cf254, Func Offset: 0x84
	// Line 1569, Address: 0x2cf264, Func Offset: 0x94
	// Line 1570, Address: 0x2cf268, Func Offset: 0x98
	// Line 1571, Address: 0x2cf274, Func Offset: 0xa4
	// Line 1573, Address: 0x2cf280, Func Offset: 0xb0
	// Line 1574, Address: 0x2cf28c, Func Offset: 0xbc
	// Line 1575, Address: 0x2cf294, Func Offset: 0xc4
	// Line 1578, Address: 0x2cf29c, Func Offset: 0xcc
	// Line 1580, Address: 0x2cf2a0, Func Offset: 0xd0
	// Line 1579, Address: 0x2cf2a8, Func Offset: 0xd8
	// Line 1580, Address: 0x2cf2ac, Func Offset: 0xdc
	// Func End, Address: 0x2cf2b8, Func Offset: 0xe8
}

// 
// Start address: 0x2cf2c0
int EilEventInsane(_anon4* eil, EventUnit* ev)
{
	_anon7* insane;
	float v[4];
	int t;
	// Line 1585, Address: 0x2cf2c0, Func Offset: 0
	// Line 1589, Address: 0x2cf2c4, Func Offset: 0x4
	// Line 1585, Address: 0x2cf2c8, Func Offset: 0x8
	// Line 1589, Address: 0x2cf2cc, Func Offset: 0xc
	// Line 1585, Address: 0x2cf2d0, Func Offset: 0x10
	// Line 1591, Address: 0x2cf2d4, Func Offset: 0x14
	// Line 1585, Address: 0x2cf2d8, Func Offset: 0x18
	// Line 1589, Address: 0x2cf2e8, Func Offset: 0x28
	// Line 1591, Address: 0x2cf2ec, Func Offset: 0x2c
	// Line 1589, Address: 0x2cf2f0, Func Offset: 0x30
	// Line 1591, Address: 0x2cf2fc, Func Offset: 0x3c
	// Line 1593, Address: 0x2cf32c, Func Offset: 0x6c
	// Line 1594, Address: 0x2cf334, Func Offset: 0x74
	// Line 1596, Address: 0x2cf33c, Func Offset: 0x7c
	// Line 1597, Address: 0x2cf340, Func Offset: 0x80
	// Line 1598, Address: 0x2cf34c, Func Offset: 0x8c
	// Line 1599, Address: 0x2cf350, Func Offset: 0x90
	// Line 1600, Address: 0x2cf35c, Func Offset: 0x9c
	// Line 1601, Address: 0x2cf360, Func Offset: 0xa0
	// Line 1602, Address: 0x2cf374, Func Offset: 0xb4
	// Line 1603, Address: 0x2cf380, Func Offset: 0xc0
	// Line 1605, Address: 0x2cf38c, Func Offset: 0xcc
	// Line 1606, Address: 0x2cf394, Func Offset: 0xd4
	// Line 1607, Address: 0x2cf39c, Func Offset: 0xdc
	// Line 1608, Address: 0x2cf3a0, Func Offset: 0xe0
	// Line 1609, Address: 0x2cf3a8, Func Offset: 0xe8
	// Line 1611, Address: 0x2cf3ac, Func Offset: 0xec
	// Line 1613, Address: 0x2cf3b4, Func Offset: 0xf4
	// Line 1614, Address: 0x2cf3b8, Func Offset: 0xf8
	// Line 1615, Address: 0x2cf3c4, Func Offset: 0x104
	// Line 1616, Address: 0x2cf3e0, Func Offset: 0x120
	// Line 1619, Address: 0x2cf3e8, Func Offset: 0x128
	// Line 1620, Address: 0x2cf3f4, Func Offset: 0x134
	// Line 1621, Address: 0x2cf404, Func Offset: 0x144
	// Line 1622, Address: 0x2cf40c, Func Offset: 0x14c
	// Line 1624, Address: 0x2cf414, Func Offset: 0x154
	// Line 1626, Address: 0x2cf418, Func Offset: 0x158
	// Line 1627, Address: 0x2cf424, Func Offset: 0x164
	// Line 1628, Address: 0x2cf42c, Func Offset: 0x16c
	// Line 1629, Address: 0x2cf434, Func Offset: 0x174
	// Line 1631, Address: 0x2cf43c, Func Offset: 0x17c
	// Line 1633, Address: 0x2cf444, Func Offset: 0x184
	// Line 1634, Address: 0x2cf448, Func Offset: 0x188
	// Line 1635, Address: 0x2cf454, Func Offset: 0x194
	// Line 1637, Address: 0x2cf470, Func Offset: 0x1b0
	// Line 1638, Address: 0x2cf478, Func Offset: 0x1b8
	// Line 1639, Address: 0x2cf480, Func Offset: 0x1c0
	// Line 1642, Address: 0x2cf488, Func Offset: 0x1c8
	// Line 1643, Address: 0x2cf498, Func Offset: 0x1d8
	// Line 1644, Address: 0x2cf4a0, Func Offset: 0x1e0
	// Line 1649, Address: 0x2cf4a8, Func Offset: 0x1e8
	// Line 1648, Address: 0x2cf4b0, Func Offset: 0x1f0
	// Line 1649, Address: 0x2cf4b4, Func Offset: 0x1f4
	// Func End, Address: 0x2cf4c4, Func Offset: 0x204
}

// 
// Start address: 0x2cf4d0
int EilEventForestReadWords(_anon4* eil, EventUnit* ev)
{
	float v[4];
	float r;
	_anon2* fwords;
	unsigned char* words_flags;
	_anon0* emes;
	_anon0* message_table;
	int result;
	// Line 1655, Address: 0x2cf4d0, Func Offset: 0
	// Line 1658, Address: 0x2cf4d4, Func Offset: 0x4
	// Line 1655, Address: 0x2cf4d8, Func Offset: 0x8
	// Line 1658, Address: 0x2cf4dc, Func Offset: 0xc
	// Line 1655, Address: 0x2cf4e0, Func Offset: 0x10
	// Line 1658, Address: 0x2cf4f0, Func Offset: 0x20
	// Line 1664, Address: 0x2cf504, Func Offset: 0x34
	// Line 1666, Address: 0x2cf50c, Func Offset: 0x3c
	// Line 1667, Address: 0x2cf534, Func Offset: 0x64
	// Line 1669, Address: 0x2cf538, Func Offset: 0x68
	// Line 1672, Address: 0x2cf540, Func Offset: 0x70
	// Line 1673, Address: 0x2cf548, Func Offset: 0x78
	// Line 1675, Address: 0x2cf554, Func Offset: 0x84
	// Line 1676, Address: 0x2cf558, Func Offset: 0x88
	// Line 1677, Address: 0x2cf560, Func Offset: 0x90
	// Line 1679, Address: 0x2cf568, Func Offset: 0x98
	// Line 1680, Address: 0x2cf570, Func Offset: 0xa0
	// Line 1681, Address: 0x2cf578, Func Offset: 0xa8
	// Line 1685, Address: 0x2cf580, Func Offset: 0xb0
	// Line 1686, Address: 0x2cf59c, Func Offset: 0xcc
	// Line 1688, Address: 0x2cf5a8, Func Offset: 0xd8
	// Line 1687, Address: 0x2cf5b8, Func Offset: 0xe8
	// Line 1688, Address: 0x2cf5bc, Func Offset: 0xec
	// Line 1689, Address: 0x2cf5c8, Func Offset: 0xf8
	// Line 1690, Address: 0x2cf5d0, Func Offset: 0x100
	// Line 1691, Address: 0x2cf5d8, Func Offset: 0x108
	// Line 1692, Address: 0x2cf5e0, Func Offset: 0x110
	// Line 1694, Address: 0x2cf5e4, Func Offset: 0x114
	// Line 1696, Address: 0x2cf5ec, Func Offset: 0x11c
	// Line 1697, Address: 0x2cf5f0, Func Offset: 0x120
	// Line 1698, Address: 0x2cf5f8, Func Offset: 0x128
	// Line 1700, Address: 0x2cf600, Func Offset: 0x130
	// Line 1702, Address: 0x2cf60c, Func Offset: 0x13c
	// Line 1703, Address: 0x2cf610, Func Offset: 0x140
	// Line 1704, Address: 0x2cf61c, Func Offset: 0x14c
	// Line 1706, Address: 0x2cf630, Func Offset: 0x160
	// Line 1707, Address: 0x2cf640, Func Offset: 0x170
	// Line 1709, Address: 0x2cf648, Func Offset: 0x178
	// Line 1710, Address: 0x2cf650, Func Offset: 0x180
	// Line 1711, Address: 0x2cf658, Func Offset: 0x188
	// Line 1712, Address: 0x2cf664, Func Offset: 0x194
	// Line 1713, Address: 0x2cf674, Func Offset: 0x1a4
	// Line 1714, Address: 0x2cf67c, Func Offset: 0x1ac
	// Line 1715, Address: 0x2cf688, Func Offset: 0x1b8
	// Line 1717, Address: 0x2cf68c, Func Offset: 0x1bc
	// Line 1719, Address: 0x2cf694, Func Offset: 0x1c4
	// Line 1720, Address: 0x2cf698, Func Offset: 0x1c8
	// Line 1722, Address: 0x2cf6a4, Func Offset: 0x1d4
	// Line 1725, Address: 0x2cf6a8, Func Offset: 0x1d8
	// Line 1726, Address: 0x2cf6b8, Func Offset: 0x1e8
	// Line 1728, Address: 0x2cf6c0, Func Offset: 0x1f0
	// Line 1729, Address: 0x2cf6c8, Func Offset: 0x1f8
	// Line 1730, Address: 0x2cf6d0, Func Offset: 0x200
	// Line 1731, Address: 0x2cf6dc, Func Offset: 0x20c
	// Line 1734, Address: 0x2cf6e8, Func Offset: 0x218
	// Line 1735, Address: 0x2cf6f4, Func Offset: 0x224
	// Line 1736, Address: 0x2cf6fc, Func Offset: 0x22c
	// Line 1735, Address: 0x2cf700, Func Offset: 0x230
	// Line 1736, Address: 0x2cf704, Func Offset: 0x234
	// Line 1737, Address: 0x2cf710, Func Offset: 0x240
	// Line 1738, Address: 0x2cf718, Func Offset: 0x248
	// Line 1739, Address: 0x2cf720, Func Offset: 0x250
	// Line 1744, Address: 0x2cf728, Func Offset: 0x258
	// Line 1743, Address: 0x2cf730, Func Offset: 0x260
	// Line 1744, Address: 0x2cf734, Func Offset: 0x264
	// Func End, Address: 0x2cf744, Func Offset: 0x274
}

// 
// Start address: 0x2cf750
int EilEventCMStand(_anon4* eil)
{
	float v[4];
	float r;
	int result;
	// Line 1750, Address: 0x2cf750, Func Offset: 0
	// Line 1756, Address: 0x2cf760, Func Offset: 0x10
	// Line 1758, Address: 0x2cf76c, Func Offset: 0x1c
	// Line 1760, Address: 0x2cf7a0, Func Offset: 0x50
	// Line 1761, Address: 0x2cf7a8, Func Offset: 0x58
	// Line 1764, Address: 0x2cf7b0, Func Offset: 0x60
	// Line 1765, Address: 0x2cf7d4, Func Offset: 0x84
	// Line 1766, Address: 0x2cf800, Func Offset: 0xb0
	// Line 1767, Address: 0x2cf82c, Func Offset: 0xdc
	// Line 1768, Address: 0x2cf850, Func Offset: 0x100
	// Line 1769, Address: 0x2cf858, Func Offset: 0x108
	// Line 1770, Address: 0x2cf860, Func Offset: 0x110
	// Line 1772, Address: 0x2cf86c, Func Offset: 0x11c
	// Line 1773, Address: 0x2cf870, Func Offset: 0x120
	// Line 1774, Address: 0x2cf878, Func Offset: 0x128
	// Line 1778, Address: 0x2cf880, Func Offset: 0x130
	// Line 1779, Address: 0x2cf8a4, Func Offset: 0x154
	// Line 1781, Address: 0x2cf8b0, Func Offset: 0x160
	// Line 1780, Address: 0x2cf8c0, Func Offset: 0x170
	// Line 1781, Address: 0x2cf8c4, Func Offset: 0x174
	// Line 1782, Address: 0x2cf8d0, Func Offset: 0x180
	// Line 1783, Address: 0x2cf8d8, Func Offset: 0x188
	// Line 1784, Address: 0x2cf8e0, Func Offset: 0x190
	// Line 1785, Address: 0x2cf8e8, Func Offset: 0x198
	// Line 1787, Address: 0x2cf8ec, Func Offset: 0x19c
	// Line 1789, Address: 0x2cf8f4, Func Offset: 0x1a4
	// Line 1790, Address: 0x2cf8f8, Func Offset: 0x1a8
	// Line 1791, Address: 0x2cf900, Func Offset: 0x1b0
	// Line 1793, Address: 0x2cf908, Func Offset: 0x1b8
	// Line 1795, Address: 0x2cf914, Func Offset: 0x1c4
	// Line 1796, Address: 0x2cf918, Func Offset: 0x1c8
	// Line 1797, Address: 0x2cf93c, Func Offset: 0x1ec
	// Line 1799, Address: 0x2cf948, Func Offset: 0x1f8
	// Line 1798, Address: 0x2cf958, Func Offset: 0x208
	// Line 1799, Address: 0x2cf95c, Func Offset: 0x20c
	// Line 1800, Address: 0x2cf968, Func Offset: 0x218
	// Line 1802, Address: 0x2cf970, Func Offset: 0x220
	// Line 1803, Address: 0x2cf994, Func Offset: 0x244
	// Line 1804, Address: 0x2cf9ac, Func Offset: 0x25c
	// Line 1809, Address: 0x2cf9b0, Func Offset: 0x260
	// Line 1808, Address: 0x2cf9b8, Func Offset: 0x268
	// Line 1809, Address: 0x2cf9bc, Func Offset: 0x26c
	// Func End, Address: 0x2cf9c4, Func Offset: 0x274
}

// 
// Start address: 0x2cf9d0
int EilEventSubwayEscalator(_anon4* eil)
{
	float v[4];
	// Line 1814, Address: 0x2cf9d0, Func Offset: 0
	// Line 1819, Address: 0x2cf9dc, Func Offset: 0xc
	// Line 1821, Address: 0x2cf9f0, Func Offset: 0x20
	// Line 1822, Address: 0x2cfa10, Func Offset: 0x40
	// Line 1823, Address: 0x2cfa18, Func Offset: 0x48
	// Line 1824, Address: 0x2cfa20, Func Offset: 0x50
	// Line 1826, Address: 0x2cfa3c, Func Offset: 0x6c
	// Line 1827, Address: 0x2cfa44, Func Offset: 0x74
	// Line 1828, Address: 0x2cfa4c, Func Offset: 0x7c
	// Line 1831, Address: 0x2cfa54, Func Offset: 0x84
	// Line 1833, Address: 0x2cfa58, Func Offset: 0x88
	// Line 1832, Address: 0x2cfa60, Func Offset: 0x90
	// Line 1833, Address: 0x2cfa64, Func Offset: 0x94
	// Func End, Address: 0x2cfa6c, Func Offset: 0x9c
}

// 
// Start address: 0x2cfa70
int EilEventCancelTalk(_anon4* eil, EventUnit* ev)
{
	// Line 1838, Address: 0x2cfa70, Func Offset: 0
	// Line 1839, Address: 0x2cfa74, Func Offset: 0x4
	// Line 1838, Address: 0x2cfa78, Func Offset: 0x8
	// Line 1839, Address: 0x2cfa80, Func Offset: 0x10
	// Line 1842, Address: 0x2cfaa8, Func Offset: 0x38
	// Line 1843, Address: 0x2cfaac, Func Offset: 0x3c
	// Line 1844, Address: 0x2cfab4, Func Offset: 0x44
	// Line 1843, Address: 0x2cfab8, Func Offset: 0x48
	// Line 1845, Address: 0x2cfabc, Func Offset: 0x4c
	// Line 1846, Address: 0x2cfac4, Func Offset: 0x54
	// Line 1847, Address: 0x2cfacc, Func Offset: 0x5c
	// Line 1848, Address: 0x2cfad0, Func Offset: 0x60
	// Line 1849, Address: 0x2cfadc, Func Offset: 0x6c
	// Line 1850, Address: 0x2cfae0, Func Offset: 0x70
	// Line 1854, Address: 0x2cfae8, Func Offset: 0x78
	// Line 1853, Address: 0x2cfaf0, Func Offset: 0x80
	// Line 1854, Address: 0x2cfaf4, Func Offset: 0x84
	// Func End, Address: 0x2cfafc, Func Offset: 0x8c
}

// 
// Start address: 0x2cfb00
void EileenEventStaticInit()
{
	// Line 1861, Address: 0x2cfb00, Func Offset: 0
	// Line 1862, Address: 0x2cfb08, Func Offset: 0x8
	// Line 1863, Address: 0x2cfb0c, Func Offset: 0xc
	// Func End, Address: 0x2cfb14, Func Offset: 0x14
}

// 
// Start address: 0x2cfb20
void EileenEventInit(_anon4* eil)
{
	_anon5* eev;
	int i;
	// Line 1866, Address: 0x2cfb20, Func Offset: 0
	// Line 1867, Address: 0x2cfb24, Func Offset: 0x4
	// Line 1866, Address: 0x2cfb28, Func Offset: 0x8
	// Line 1867, Address: 0x2cfb40, Func Offset: 0x20
	// Line 1872, Address: 0x2cfb48, Func Offset: 0x28
	// Line 1874, Address: 0x2cfb58, Func Offset: 0x38
	// Line 1873, Address: 0x2cfb5c, Func Offset: 0x3c
	// Line 1874, Address: 0x2cfb60, Func Offset: 0x40
	// Line 1873, Address: 0x2cfb64, Func Offset: 0x44
	// Line 1875, Address: 0x2cfb6c, Func Offset: 0x4c
	// Line 1877, Address: 0x2cfb70, Func Offset: 0x50
	// Line 1878, Address: 0x2cfb78, Func Offset: 0x58
	// Line 1879, Address: 0x2cfb80, Func Offset: 0x60
	// Line 1878, Address: 0x2cfb84, Func Offset: 0x64
	// Line 1879, Address: 0x2cfb88, Func Offset: 0x68
	// Line 1880, Address: 0x2cfb94, Func Offset: 0x74
	// Line 1883, Address: 0x2cfb98, Func Offset: 0x78
	// Line 1880, Address: 0x2cfb9c, Func Offset: 0x7c
	// Line 1883, Address: 0x2cfba0, Func Offset: 0x80
	// Line 1886, Address: 0x2cfbc0, Func Offset: 0xa0
	// Line 1889, Address: 0x2cfbc8, Func Offset: 0xa8
	// Line 1891, Address: 0x2cfbec, Func Offset: 0xcc
	// Line 1892, Address: 0x2cfbf4, Func Offset: 0xd4
	// Line 1895, Address: 0x2cfbf8, Func Offset: 0xd8
	// Line 1897, Address: 0x2cfc1c, Func Offset: 0xfc
	// Line 1898, Address: 0x2cfc24, Func Offset: 0x104
	// Line 1902, Address: 0x2cfc28, Func Offset: 0x108
	// Line 1903, Address: 0x2cfc3c, Func Offset: 0x11c
	// Line 1904, Address: 0x2cfc44, Func Offset: 0x124
	// Line 1908, Address: 0x2cfc48, Func Offset: 0x128
	// Line 1913, Address: 0x2cfc58, Func Offset: 0x138
	// Line 1916, Address: 0x2cfc68, Func Offset: 0x148
	// Line 1918, Address: 0x2cfc78, Func Offset: 0x158
	// Line 1919, Address: 0x2cfc80, Func Offset: 0x160
	// Line 1922, Address: 0x2cfc90, Func Offset: 0x170
	// Line 1923, Address: 0x2cfca4, Func Offset: 0x184
	// Line 1924, Address: 0x2cfcac, Func Offset: 0x18c
	// Line 1926, Address: 0x2cfcb0, Func Offset: 0x190
	// Line 1929, Address: 0x2cfcb8, Func Offset: 0x198
	// Line 1933, Address: 0x2cfcc0, Func Offset: 0x1a0
	// Line 1936, Address: 0x2cfcd0, Func Offset: 0x1b0
	// Line 1937, Address: 0x2cfcd8, Func Offset: 0x1b8
	// Func End, Address: 0x2cfcf4, Func Offset: 0x1d4
}

// 
// Start address: 0x2cfd00
void EileenEventCheck(_anon4* eil)
{
	_anon5* eev;
	EventUnit* ev;
	int wakeup_event;
	int i;
	// Line 1947, Address: 0x2cfd00, Func Offset: 0
	// Line 1956, Address: 0x2cfd04, Func Offset: 0x4
	// Line 1947, Address: 0x2cfd08, Func Offset: 0x8
	// Line 1948, Address: 0x2cfd24, Func Offset: 0x24
	// Line 1956, Address: 0x2cfd28, Func Offset: 0x28
	// Line 1957, Address: 0x2cfd38, Func Offset: 0x38
	// Line 1958, Address: 0x2cfd3c, Func Offset: 0x3c
	// Line 1960, Address: 0x2cfd40, Func Offset: 0x40
	// Line 1964, Address: 0x2cfd4c, Func Offset: 0x4c
	// Line 1965, Address: 0x2cfd58, Func Offset: 0x58
	// Line 1968, Address: 0x2cfd68, Func Offset: 0x68
	// Line 1972, Address: 0x2cfd80, Func Offset: 0x80
	// Line 1975, Address: 0x2cfd88, Func Offset: 0x88
	// Line 1973, Address: 0x2cfd8c, Func Offset: 0x8c
	// Line 1975, Address: 0x2cfda0, Func Offset: 0xa0
	// Line 1977, Address: 0x2cfdb0, Func Offset: 0xb0
	// Line 1978, Address: 0x2cfdb4, Func Offset: 0xb4
	// Line 1979, Address: 0x2cfdc0, Func Offset: 0xc0
	// Line 1980, Address: 0x2cfdd4, Func Offset: 0xd4
	// Line 1982, Address: 0x2cfdd8, Func Offset: 0xd8
	// Line 1986, Address: 0x2cfde0, Func Offset: 0xe0
	// Line 1988, Address: 0x2cfde8, Func Offset: 0xe8
	// Line 1989, Address: 0x2cfdfc, Func Offset: 0xfc
	// Line 1990, Address: 0x2cfe00, Func Offset: 0x100
	// Line 1996, Address: 0x2cfe10, Func Offset: 0x110
	// Line 1997, Address: 0x2cfe18, Func Offset: 0x118
	// Line 1998, Address: 0x2cfe1c, Func Offset: 0x11c
	// Line 1997, Address: 0x2cfe20, Func Offset: 0x120
	// Line 1998, Address: 0x2cfe30, Func Offset: 0x130
	// Line 1999, Address: 0x2cfe40, Func Offset: 0x140
	// Line 2000, Address: 0x2cfe44, Func Offset: 0x144
	// Line 2001, Address: 0x2cfe48, Func Offset: 0x148
	// Func End, Address: 0x2cfe68, Func Offset: 0x168
}

// 
// Start address: 0x2cfe70
void EileenEventProcess(_anon4* eil)
{
	int i;
	_anon5* eev;
	// Line 2008, Address: 0x2cfe70, Func Offset: 0
	// Line 2012, Address: 0x2cfe88, Func Offset: 0x18
	// Line 2010, Address: 0x2cfe8c, Func Offset: 0x1c
	// Line 2012, Address: 0x2cfe94, Func Offset: 0x24
	// Line 2014, Address: 0x2cfe98, Func Offset: 0x28
	// Line 2015, Address: 0x2cfea4, Func Offset: 0x34
	// Line 2016, Address: 0x2cfeb4, Func Offset: 0x44
	// Func End, Address: 0x2cfecc, Func Offset: 0x5c
}

// 
// Start address: 0x2cfed0
int EileenEventTalkSet(_anon4* eil, _anon0* emes)
{
	// Line 2033, Address: 0x2cfed0, Func Offset: 0
	// Line 2034, Address: 0x2cfedc, Func Offset: 0xc
	// Line 2036, Address: 0x2cfee8, Func Offset: 0x18
	// Line 2037, Address: 0x2cfeec, Func Offset: 0x1c
	// Line 2040, Address: 0x2cfef0, Func Offset: 0x20
	// Line 2038, Address: 0x2cfef4, Func Offset: 0x24
	// Line 2039, Address: 0x2cfef8, Func Offset: 0x28
	// Line 2040, Address: 0x2cfefc, Func Offset: 0x2c
	// Line 2041, Address: 0x2cff00, Func Offset: 0x30
	// Func End, Address: 0x2cff08, Func Offset: 0x38
}

// 
// Start address: 0x2cff10
void EileenEventTalkCancel(_anon4* eil)
{
	// Line 2045, Address: 0x2cff10, Func Offset: 0
	// Line 2046, Address: 0x2cff18, Func Offset: 0x8
	// Line 2047, Address: 0x2cff24, Func Offset: 0x14
	// Line 2049, Address: 0x2cff28, Func Offset: 0x18
	// Line 2048, Address: 0x2cff2c, Func Offset: 0x1c
	// Line 2049, Address: 0x2cff30, Func Offset: 0x20
	// Line 2051, Address: 0x2cff34, Func Offset: 0x24
	// Line 2054, Address: 0x2cff3c, Func Offset: 0x2c
	// Line 2055, Address: 0x2cff44, Func Offset: 0x34
	// Line 2056, Address: 0x2cff48, Func Offset: 0x38
	// Func End, Address: 0x2cff54, Func Offset: 0x44
}

// 
// Start address: 0x2cff60
void EileenEventTalk(_anon4* eil)
{
	_anon0* emes;
	float alpha;
	_SubtitleMessageData message_data;
	// Line 2060, Address: 0x2cff60, Func Offset: 0
	// Line 2072, Address: 0x2cff64, Func Offset: 0x4
	// Line 2060, Address: 0x2cff68, Func Offset: 0x8
	// Line 2072, Address: 0x2cff7c, Func Offset: 0x1c
	// Line 2074, Address: 0x2cffac, Func Offset: 0x4c
	// Line 2075, Address: 0x2cffb0, Func Offset: 0x50
	// Line 2076, Address: 0x2cffb4, Func Offset: 0x54
	// Line 2078, Address: 0x2cffbc, Func Offset: 0x5c
	// Line 2079, Address: 0x2cffc4, Func Offset: 0x64
	// Line 2082, Address: 0x2cffc8, Func Offset: 0x68
	// Line 2083, Address: 0x2cffcc, Func Offset: 0x6c
	// Line 2084, Address: 0x2cffd8, Func Offset: 0x78
	// Line 2085, Address: 0x2cffe0, Func Offset: 0x80
	// Line 2086, Address: 0x2cffe4, Func Offset: 0x84
	// Line 2088, Address: 0x2cffec, Func Offset: 0x8c
	// Line 2089, Address: 0x2cfff0, Func Offset: 0x90
	// Line 2090, Address: 0x2cfff4, Func Offset: 0x94
	// Line 2094, Address: 0x2d0010, Func Offset: 0xb0
	// Line 2095, Address: 0x2d001c, Func Offset: 0xbc
	// Line 2098, Address: 0x2d0028, Func Offset: 0xc8
	// Line 2100, Address: 0x2d0030, Func Offset: 0xd0
	// Line 2099, Address: 0x2d0034, Func Offset: 0xd4
	// Line 2100, Address: 0x2d003c, Func Offset: 0xdc
	// Line 2102, Address: 0x2d0040, Func Offset: 0xe0
	// Line 2100, Address: 0x2d0044, Func Offset: 0xe4
	// Line 2101, Address: 0x2d0048, Func Offset: 0xe8
	// Line 2102, Address: 0x2d0054, Func Offset: 0xf4
	// Line 2104, Address: 0x2d005c, Func Offset: 0xfc
	// Line 2105, Address: 0x2d0060, Func Offset: 0x100
	// Line 2106, Address: 0x2d0068, Func Offset: 0x108
	// Line 2107, Address: 0x2d0074, Func Offset: 0x114
	// Line 2108, Address: 0x2d0090, Func Offset: 0x130
	// Line 2109, Address: 0x2d00b0, Func Offset: 0x150
	// Line 2110, Address: 0x2d00b8, Func Offset: 0x158
	// Line 2112, Address: 0x2d00c0, Func Offset: 0x160
	// Line 2114, Address: 0x2d00cc, Func Offset: 0x16c
	// Line 2116, Address: 0x2d00d0, Func Offset: 0x170
	// Line 2117, Address: 0x2d00dc, Func Offset: 0x17c
	// Line 2118, Address: 0x2d0124, Func Offset: 0x1c4
	// Line 2119, Address: 0x2d012c, Func Offset: 0x1cc
	// Line 2120, Address: 0x2d0130, Func Offset: 0x1d0
	// Line 2122, Address: 0x2d014c, Func Offset: 0x1ec
	// Line 2124, Address: 0x2d0150, Func Offset: 0x1f0
	// Line 2125, Address: 0x2d0154, Func Offset: 0x1f4
	// Line 2126, Address: 0x2d0158, Func Offset: 0x1f8
	// Line 2127, Address: 0x2d0164, Func Offset: 0x204
	// Line 2128, Address: 0x2d0168, Func Offset: 0x208
	// Line 2130, Address: 0x2d0170, Func Offset: 0x210
	// Line 2131, Address: 0x2d0178, Func Offset: 0x218
	// Line 2132, Address: 0x2d017c, Func Offset: 0x21c
	// Line 2134, Address: 0x2d0184, Func Offset: 0x224
	// Line 2135, Address: 0x2d0188, Func Offset: 0x228
	// Line 2136, Address: 0x2d0190, Func Offset: 0x230
	// Line 2138, Address: 0x2d0194, Func Offset: 0x234
	// Line 2137, Address: 0x2d0198, Func Offset: 0x238
	// Line 2138, Address: 0x2d019c, Func Offset: 0x23c
	// Line 2139, Address: 0x2d01a0, Func Offset: 0x240
	// Line 2141, Address: 0x2d01a4, Func Offset: 0x244
	// Line 2142, Address: 0x2d01a8, Func Offset: 0x248
	// Func End, Address: 0x2d01c0, Func Offset: 0x260
}

// 
// Start address: 0x2d01c0
int EileenEventFRReadStyle()
{
	sfObj* obj;
	_anon4* eil;
	EilCursedLevel lv;
	// Line 2152, Address: 0x2d01c0, Func Offset: 0
	// Line 2153, Address: 0x2d01c8, Func Offset: 0x8
	// Line 2157, Address: 0x2d01d0, Func Offset: 0x10
	// Line 2158, Address: 0x2d01d8, Func Offset: 0x18
	// Line 2159, Address: 0x2d01e0, Func Offset: 0x20
	// Line 2160, Address: 0x2d01e8, Func Offset: 0x28
	// Line 2162, Address: 0x2d01f8, Func Offset: 0x38
	// Line 2164, Address: 0x2d0200, Func Offset: 0x40
	// Line 2165, Address: 0x2d0210, Func Offset: 0x50
	// Line 2166, Address: 0x2d0218, Func Offset: 0x58
	// Line 2167, Address: 0x2d0220, Func Offset: 0x60
	// Func End, Address: 0x2d022c, Func Offset: 0x6c
}

// 
// Start address: 0x2d0230
int EileenEventCMDemoType()
{
	sfObj* obj;
	_anon4* eil;
	EilCursedLevel lv;
	float cr;
	// Line 2177, Address: 0x2d0230, Func Offset: 0
	// Line 2178, Address: 0x2d023c, Func Offset: 0xc
	// Line 2183, Address: 0x2d0244, Func Offset: 0x14
	// Line 2184, Address: 0x2d024c, Func Offset: 0x1c
	// Line 2185, Address: 0x2d0250, Func Offset: 0x20
	// Line 2186, Address: 0x2d0258, Func Offset: 0x28
	// Line 2187, Address: 0x2d0260, Func Offset: 0x30
	// Line 2188, Address: 0x2d0264, Func Offset: 0x34
	// Line 2189, Address: 0x2d0270, Func Offset: 0x40
	// Line 2190, Address: 0x2d0278, Func Offset: 0x48
	// Line 2191, Address: 0x2d0284, Func Offset: 0x54
	// Line 2193, Address: 0x2d0288, Func Offset: 0x58
	// Line 2194, Address: 0x2d0298, Func Offset: 0x68
	// Line 2197, Address: 0x2d02a0, Func Offset: 0x70
	// Line 2199, Address: 0x2d02c0, Func Offset: 0x90
	// Func End, Address: 0x2d02d4, Func Offset: 0xa4
}

// 
// Start address: 0x2d02e0
void EileenEventLastBattleDeadSet()
{
	unsigned char* flags;
	// Line 2206, Address: 0x2d02e0, Func Offset: 0
	// Line 2208, Address: 0x2d02e8, Func Offset: 0x8
	// Line 2209, Address: 0x2d02f4, Func Offset: 0x14
	// Line 2210, Address: 0x2d0300, Func Offset: 0x20
	// Func End, Address: 0x2d030c, Func Offset: 0x2c
}

// 
// Start address: 0x2d0310
int EileenEventEndingType()
{
	unsigned char* flags;
	// Line 2218, Address: 0x2d0310, Func Offset: 0
	// Line 2220, Address: 0x2d0318, Func Offset: 0x8
	// Line 2223, Address: 0x2d0320, Func Offset: 0x10
	// Line 2225, Address: 0x2d032c, Func Offset: 0x1c
	// Line 2223, Address: 0x2d0330, Func Offset: 0x20
	// Line 2225, Address: 0x2d0334, Func Offset: 0x24
	// Func End, Address: 0x2d033c, Func Offset: 0x2c
}

// 
// Start address: 0x2d0340
void MZHoleStandSet(int scene_no)
{
	sfObj* obj;
	_anon4* eil;
	_anon3* stand;
	float q[4];
	float v[4];
	// Line 2251, Address: 0x2d0340, Func Offset: 0
	// Line 2252, Address: 0x2d0354, Func Offset: 0x14
	// Line 2257, Address: 0x2d035c, Func Offset: 0x1c
	// Line 2258, Address: 0x2d0368, Func Offset: 0x28
	// Line 2259, Address: 0x2d0370, Func Offset: 0x30
	// Line 2261, Address: 0x2d0378, Func Offset: 0x38
	// Line 2262, Address: 0x2d0388, Func Offset: 0x48
	// Line 2264, Address: 0x2d0390, Func Offset: 0x50
	// Line 2269, Address: 0x2d03a4, Func Offset: 0x64
	// Line 2270, Address: 0x2d03ac, Func Offset: 0x6c
	// Line 2271, Address: 0x2d03b8, Func Offset: 0x78
	// Line 2272, Address: 0x2d03c0, Func Offset: 0x80
	// Line 2273, Address: 0x2d03d4, Func Offset: 0x94
	// Line 2274, Address: 0x2d03e0, Func Offset: 0xa0
	// Func End, Address: 0x2d03f8, Func Offset: 0xb8
}

// 
// Start address: 0x2d0400
void EileenEventMZHoleStand()
{
	// Line 2278, Address: 0x2d0400, Func Offset: 0
	// Line 2280, Address: 0x2d0408, Func Offset: 0x8
	// Line 2283, Address: 0x2d041c, Func Offset: 0x1c
	// Line 2284, Address: 0x2d0424, Func Offset: 0x24
	// Line 2285, Address: 0x2d042c, Func Offset: 0x2c
	// Line 2286, Address: 0x2d0434, Func Offset: 0x34
	// Line 2287, Address: 0x2d043c, Func Offset: 0x3c
	// Func End, Address: 0x2d044c, Func Offset: 0x4c
}

// 
// Start address: 0x2d0450
void EileenEventMZHoleStandEnd()
{
	// Line 2291, Address: 0x2d0450, Func Offset: 0
	// Line 2293, Address: 0x2d0458, Func Offset: 0x8
	// Line 2295, Address: 0x2d046c, Func Offset: 0x1c
	// Line 2296, Address: 0x2d0474, Func Offset: 0x24
	// Line 2297, Address: 0x2d047c, Func Offset: 0x2c
	// Func End, Address: 0x2d048c, Func Offset: 0x3c
}

// 
// Start address: 0x2d0490
void EileenEventMZPeepStandSet(int scene_no)
{
	sfObj* optr;
	// Line 2303, Address: 0x2d0490, Func Offset: 0
	// Line 2305, Address: 0x2d049c, Func Offset: 0xc
	// Line 2307, Address: 0x2d04ac, Func Offset: 0x1c
	// Line 2309, Address: 0x2d04c0, Func Offset: 0x30
	// Line 2310, Address: 0x2d04cc, Func Offset: 0x3c
	// Line 2311, Address: 0x2d04d4, Func Offset: 0x44
	// Line 2313, Address: 0x2d04e0, Func Offset: 0x50
	// Line 2314, Address: 0x2d04e8, Func Offset: 0x58
	// Func End, Address: 0x2d04f8, Func Offset: 0x68
}

// 
// Start address: 0x2d0500
void EileenEventMZPeepStandEnd()
{
	// Line 2317, Address: 0x2d0500, Func Offset: 0
	// Line 2318, Address: 0x2d0510, Func Offset: 0x10
	// Line 2319, Address: 0x2d0518, Func Offset: 0x18
	// Line 2320, Address: 0x2d0520, Func Offset: 0x20
	// Line 2321, Address: 0x2d0528, Func Offset: 0x28
	// Func End, Address: 0x2d0534, Func Offset: 0x34
}

// 
// Start address: 0x2d0540
void EileenEventSBStandStart()
{
	float turn_target[4];
	// Line 2325, Address: 0x2d0540, Func Offset: 0
	// Line 2327, Address: 0x2d0548, Func Offset: 0x8
	// Line 2329, Address: 0x2d055c, Func Offset: 0x1c
	// Line 2330, Address: 0x2d0564, Func Offset: 0x24
	// Line 2331, Address: 0x2d056c, Func Offset: 0x2c
	// Line 2332, Address: 0x2d0574, Func Offset: 0x34
	// Func End, Address: 0x2d0584, Func Offset: 0x44
}

// 
// Start address: 0x2d0590
void EileenEventSBStandEnd()
{
	// Line 2336, Address: 0x2d0590, Func Offset: 0
	// Line 2337, Address: 0x2d0598, Func Offset: 0x8
	// Line 2340, Address: 0x2d05ac, Func Offset: 0x1c
	// Line 2341, Address: 0x2d05b4, Func Offset: 0x24
	// Line 2342, Address: 0x2d05bc, Func Offset: 0x2c
	// Func End, Address: 0x2d05cc, Func Offset: 0x3c
}

// 
// Start address: 0x2d05d0
void EileenEventBD12StandSet()
{
	sfObj* obj;
	float pos[4];
	// Line 2347, Address: 0x2d05d0, Func Offset: 0
	// Line 2348, Address: 0x2d05d8, Func Offset: 0x8
	// Line 2352, Address: 0x2d05e0, Func Offset: 0x10
	// Line 2355, Address: 0x2d05f4, Func Offset: 0x24
	// Line 2357, Address: 0x2d05f8, Func Offset: 0x28
	// Line 2360, Address: 0x2d060c, Func Offset: 0x3c
	// Line 2361, Address: 0x2d0618, Func Offset: 0x48
	// Line 2362, Address: 0x2d0634, Func Offset: 0x64
	// Line 2363, Address: 0x2d0638, Func Offset: 0x68
	// Line 2364, Address: 0x2d0644, Func Offset: 0x74
	// Line 2365, Address: 0x2d0648, Func Offset: 0x78
	// Func End, Address: 0x2d0658, Func Offset: 0x88
}

// 
// Start address: 0x2d0660
void EileenEventBD12StandUpDown()
{
	sfObj* obj;
	float pos[4];
	float pl_pos[4];
	// Line 2370, Address: 0x2d0660, Func Offset: 0
	// Line 2371, Address: 0x2d0668, Func Offset: 0x8
	// Line 2376, Address: 0x2d0670, Func Offset: 0x10
	// Line 2379, Address: 0x2d0684, Func Offset: 0x24
	// Line 2381, Address: 0x2d0688, Func Offset: 0x28
	// Line 2384, Address: 0x2d069c, Func Offset: 0x3c
	// Line 2385, Address: 0x2d06a4, Func Offset: 0x44
	// Line 2386, Address: 0x2d06b0, Func Offset: 0x50
	// Line 2387, Address: 0x2d06b8, Func Offset: 0x58
	// Line 2388, Address: 0x2d06c4, Func Offset: 0x64
	// Func End, Address: 0x2d06d8, Func Offset: 0x78
}

