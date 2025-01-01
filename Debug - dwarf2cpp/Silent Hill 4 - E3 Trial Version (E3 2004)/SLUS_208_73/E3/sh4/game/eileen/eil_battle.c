typedef struct _anon0;
typedef struct sgBone;
typedef union sfCldBody;
typedef struct sgIKHandle;
typedef struct _anon1;
typedef struct sfObj;
typedef enum EilCursedLevel : unsigned char;
typedef enum EnemyKind : unsigned char;
typedef struct sgAnime;
typedef struct sfCldPart;
typedef struct sfCharacter;
typedef struct _anon2;
typedef struct _anon3;
typedef struct sfCldObject;
typedef struct _anon4;
typedef struct _anon5;
typedef struct _anon6;
typedef struct _anon7;
typedef enum PlayerExtStatus : unsigned char;
typedef enum BattleHitResult : unsigned char;
typedef enum EilDamagedLevel : unsigned char;
typedef struct BattleHit;
typedef struct _anon8;
typedef struct _anon9;
typedef enum sgIKSolveResult : unsigned char;
typedef struct _anon10;
typedef struct _anon11;
typedef struct sgSVModel;
typedef union _anon12;
typedef struct _anon13;
typedef enum EnemyCondition : unsigned char;
typedef struct _anon14;
typedef enum BattleAttackKind : unsigned char;
typedef struct sgQTNode;
typedef struct _anon15;
typedef enum GameItem : unsigned char;
typedef struct _PLAYER_WORK;
typedef struct _anon16;
typedef union _anon17;
typedef struct sgQTObject;
typedef struct sfOffsetAABB;

typedef void(*type_0)(sgAnime*, int);
typedef void(*type_12)(sfObj*);
typedef sgIKSolveResult(*type_18)();
typedef void(*type_20)(_anon11*, int, int, float*);
typedef void(*type_25)(sfObj*);

typedef unsigned char type_1[3];
typedef float type_2[4];
typedef unsigned char type_3[4];
typedef unsigned char type_4[8];
typedef float type_5[4];
typedef float type_6[4];
typedef float type_7[4][4];
typedef char type_8[21];
typedef _PLAYER_WORK type_9[2];
typedef _anon12 type_10[256];
typedef float type_11[4][2];
typedef short type_13[2];
typedef unsigned short type_14[2];
typedef char type_15[4];
typedef sfCldPart* type_16[6];
typedef unsigned char type_17[4];
typedef unsigned char type_19[3];
typedef float type_21[1];
typedef _anon14 type_22[4];
typedef int type_23[1];
typedef _anon10 type_24[2];
typedef _anon16 type_26[4];
typedef _anon17 type_27[0];
typedef void* type_28[4];

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
	_anon3* anm_ctrl;
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
	_anon4 ball;
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

union sfCldBody
{
	_anon1 obb;
	_anon5 aabb;
	sfOffsetAABB offset_aabb;
	_anon2 line;
	_anon4 sphere;
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
	float mat[4][4];
	float half_w[4];
};

struct sfObj
{
	_anon12 fwork[256];
	_anon12* work;
	void(*func)(sfObj*);
	_anon12* work_pt0;
	_anon12* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon12* sys_work;
	_anon12* scene_work;
	_anon12* event_work;
	_anon12* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

enum EilCursedLevel : unsigned char
{
	EIL_CURSED_NONE,
	EIL_CURSED_SLIGHT,
	EIL_CURSED_MIDDLE,
	EIL_CURSED_SERIOUS
};

enum EnemyKind : unsigned char
{
	ENEMY_KIND_NOTHING,
	ENEMY_KIND_CELL,
	ENEMY_KIND_MUSH,
	ENEMY_KIND_BUZZ,
	ENEMY_KIND_MM,
	ENEMY_KIND_WALLMAN,
	ENEMY_KIND_WHEEL,
	ENEMY_KIND_JINMEN,
	ENEMY_KIND_TWINS,
	ENEMY_KIND_HIL,
	ENEMY_KIND_HYENA,
	ENEMY_KIND_MULTI,
	ENEMY_KIND_PICKGIRL,
	ENEMY_KIND_FLAMES,
	ENEMY_KIND_FAT,
	ENEMY_KIND_SCRATCH,
	ENEMY_KIND_KILLER,
	ENEMY_KIND_NURSE,
	ENEMY_KIND_SAMPLE,
	ENEMY_KIND_MAX,
	ENEMY_KIND_TEST00 = 0,
	ENEMY_KIND_ALL = 0x13
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

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon13 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
};

struct _anon2
{
	float start[4];
	float end[4];
};

struct _anon3
{
	int dummy;
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
	float center[4];
	float radius;
};

struct _anon5
{
	float bmin[4];
	float bmax[4];
};

struct _anon6
{
	int message_pack_id;
	int message_id;
	int voice_no;
	short frames;
	short last;
};

struct _anon7
{
	float target_pos[4];
	float target_dir[4];
	float to_target;
	sfObj* target;
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

enum BattleHitResult : unsigned char
{
	GB_HIT_RES_NONE,
	GB_HIT_RES_PLAYER_HIT,
	GB_HIT_RES_ENEMY_HIT,
	GB_HIT_RES_EILEEN_HIT,
	GB_HIT_RES_END
};

enum EilDamagedLevel : unsigned char
{
	EIL_DAMAGED_NONE,
	EIL_DAMAGED_SLIGHT,
	EIL_DAMAGED_MIDDLE,
	EIL_DAMAGED_SERIOUS
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

struct _anon8
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

struct _anon9
{
	_anon17 vertex[0];
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

struct _anon10
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

union _anon12
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

struct _anon13
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

enum EnemyCondition : unsigned char
{
	ENEMY_CONDITION_NOENTRY,
	ENEMY_CONDITION_NORMAL,
	ENEMY_CONDITION_CAUTION,
	ENEMY_CONDITION_CHASE,
	ENEMY_CONDITION_ESCAPE,
	ENEMY_CONDITION_BATTLE,
	ENEMY_CONDITION_SEIZE,
	ENEMY_CONDITION_INVINCIBLE,
	ENEMY_CONDITION_RISE,
	ENEMY_CONDITION_DAMAGE,
	ENEMY_CONDITION_DYING,
	ENEMY_CONDITION_DEAD,
	ENEMY_CONDITION_SPECIAL,
	ENEMY_CONDITION_HIDDEN,
	ENEMY_CONDITION_FULLHIDDEN,
	ENEMY_CONDITION_ANOTHERSCENE,
	ENEMY_CONDITION_ERASE,
	ENEMY_CONDITION_FLAGWAIT,
	ENEMY_CONDITION_EVENT
};

struct _anon14
{
	int enemy;
	int timer;
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

struct sgQTNode
{
	int dummy;
};

struct _anon15
{
	_anon14 targets[4];
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
	_anon3* anim_ctrl;
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

struct _anon16
{
	unsigned char next_offset;
	unsigned char flags;
	short id;
};

union _anon17
{
	float node[4];
	_anon16 data[4];
};

struct sgQTObject
{
	_anon4 bounding_ball;
	sgQTObject* next;
	sgQTObject* prev;
};

struct sfOffsetAABB
{
	_anon5 aabb;
	float offset[4];
};

_PLAYER_WORK playerw[2];
_anon10 player_ext_info[2];
_anon15 ft_work;
float sg_matrix_unit[4][4];

float CalcCurseBaseValue();
EilCursedLevel CursedLevel(float cursed_ratio);
EilCursedLevel EilStatusCursedLevel(_anon0* eil);
EilCursedLevel EilStatusCursedLevelSaved();
void EilBattleAdvanceCurse(_anon0* eil, float curse_pow);
void EilBattleRecoverCurse(_anon0* eil, float recover_pow);
EilDamagedLevel EilStatusDamagedLevel(_anon0* eil);
void EileenBattleSetDamageForce(float attack_pow);
void EileenBattleSetRecoverForce(float recover_pow);
void EilBattleInflictDamage(_anon0* eil, float attack_pow);
void EilBattleRecoverLife(_anon0* eil, float recover_pow);
void EileenBattleInit(_anon0* eil);
void EileenCldCheck(_anon0* eil);
void EilBattleHitProcess(_anon0* eil);
int TargetIsValid(sfObj* enemy);
int CheckIgnore(sfObj* enemy);
sfObj* EilCheckNearEnemy(_anon0* eil, _anon7* bw);
int EilBattleNearFrontCheck(_anon0* eil, int check_target, int w_size, int z_size);
int EilBattleStraightFrontCheck(_anon0* eil, int check_target, int z_size);
void SelectTarget(_anon0* eil, sfObj* last_target, _anon7* bw);
int SpecialOK(_anon0* eil);
int TakeAttackMethod(_anon0* eil, sfObj* enemy, float* target_pos);
void EilBattleEnemyAnalize(_anon0* eil);
int EilBattleSceneLeftEnemyCheck();
float EilBattleAttackRange(_anon0* eil);
void EilBattleFinishReport(_anon0* eil);

// 
// Start address: 0x2d5b90
float CalcCurseBaseValue()
{
	_anon8* eil_save;
	int room_count;
	int with_henry_count;
	int without_henry_count;
	int with_enemy_left_value;
	float base;
	float a;
	float bonus;
	float result;
	int n;
	// Line 130, Address: 0x2d5b90, Func Offset: 0
	// Line 131, Address: 0x2d5b98, Func Offset: 0x8
	// Line 132, Address: 0x2d5ba0, Func Offset: 0x10
	// Line 135, Address: 0x2d5ba4, Func Offset: 0x14
	// Line 143, Address: 0x2d5ba8, Func Offset: 0x18
	// Line 144, Address: 0x2d5bb4, Func Offset: 0x24
	// Line 146, Address: 0x2d5bc0, Func Offset: 0x30
	// Line 147, Address: 0x2d5bc4, Func Offset: 0x34
	// Line 154, Address: 0x2d5bc8, Func Offset: 0x38
	// Line 148, Address: 0x2d5bcc, Func Offset: 0x3c
	// Line 154, Address: 0x2d5bd0, Func Offset: 0x40
	// Line 149, Address: 0x2d5bd4, Func Offset: 0x44
	// Line 155, Address: 0x2d5bd8, Func Offset: 0x48
	// Line 148, Address: 0x2d5be0, Func Offset: 0x50
	// Line 155, Address: 0x2d5be4, Func Offset: 0x54
	// Line 154, Address: 0x2d5be8, Func Offset: 0x58
	// Line 149, Address: 0x2d5bfc, Func Offset: 0x6c
	// Line 155, Address: 0x2d5c00, Func Offset: 0x70
	// Line 147, Address: 0x2d5c04, Func Offset: 0x74
	// Line 149, Address: 0x2d5c08, Func Offset: 0x78
	// Line 150, Address: 0x2d5c0c, Func Offset: 0x7c
	// Line 155, Address: 0x2d5c10, Func Offset: 0x80
	// Line 156, Address: 0x2d5c24, Func Offset: 0x94
	// Line 162, Address: 0x2d5c2c, Func Offset: 0x9c
	// Line 156, Address: 0x2d5c30, Func Offset: 0xa0
	// Line 161, Address: 0x2d5c34, Func Offset: 0xa4
	// Line 156, Address: 0x2d5c38, Func Offset: 0xa8
	// Line 162, Address: 0x2d5c3c, Func Offset: 0xac
	// Line 161, Address: 0x2d5c40, Func Offset: 0xb0
	// Line 158, Address: 0x2d5c44, Func Offset: 0xb4
	// Line 162, Address: 0x2d5c48, Func Offset: 0xb8
	// Line 163, Address: 0x2d5c58, Func Offset: 0xc8
	// Line 167, Address: 0x2d5c78, Func Offset: 0xe8
	// Line 163, Address: 0x2d5c88, Func Offset: 0xf8
	// Line 168, Address: 0x2d5c8c, Func Offset: 0xfc
	// Line 167, Address: 0x2d5c94, Func Offset: 0x104
	// Line 163, Address: 0x2d5c98, Func Offset: 0x108
	// Line 168, Address: 0x2d5c9c, Func Offset: 0x10c
	// Line 163, Address: 0x2d5ca4, Func Offset: 0x114
	// Line 168, Address: 0x2d5ca8, Func Offset: 0x118
	// Line 163, Address: 0x2d5cb0, Func Offset: 0x120
	// Line 168, Address: 0x2d5cb4, Func Offset: 0x124
	// Line 173, Address: 0x2d5cbc, Func Offset: 0x12c
	// Line 169, Address: 0x2d5cc0, Func Offset: 0x130
	// Line 174, Address: 0x2d5cc4, Func Offset: 0x134
	// Line 175, Address: 0x2d5cd0, Func Offset: 0x140
	// Line 173, Address: 0x2d5cd8, Func Offset: 0x148
	// Line 174, Address: 0x2d5ce8, Func Offset: 0x158
	// Line 175, Address: 0x2d5cec, Func Offset: 0x15c
	// Line 178, Address: 0x2d5cfc, Func Offset: 0x16c
	// Line 176, Address: 0x2d5d0c, Func Offset: 0x17c
	// Line 178, Address: 0x2d5d10, Func Offset: 0x180
	// Line 179, Address: 0x2d5d2c, Func Offset: 0x19c
	// Line 180, Address: 0x2d5d38, Func Offset: 0x1a8
	// Line 179, Address: 0x2d5d40, Func Offset: 0x1b0
	// Line 180, Address: 0x2d5d44, Func Offset: 0x1b4
	// Line 185, Address: 0x2d5d58, Func Offset: 0x1c8
	// Func End, Address: 0x2d5d64, Func Offset: 0x1d4
}

// 
// Start address: 0x2d5d70
EilCursedLevel CursedLevel(float cursed_ratio)
{
	// Line 210, Address: 0x2d5d70, Func Offset: 0
	// Line 211, Address: 0x2d5d8c, Func Offset: 0x1c
	// Line 212, Address: 0x2d5d98, Func Offset: 0x28
	// Line 213, Address: 0x2d5db0, Func Offset: 0x40
	// Line 215, Address: 0x2d5db8, Func Offset: 0x48
	// Line 217, Address: 0x2d5dd8, Func Offset: 0x68
	// Func End, Address: 0x2d5de0, Func Offset: 0x70
}

// 
// Start address: 0x2d5de0
EilCursedLevel EilStatusCursedLevel(_anon0* eil)
{
	// Line 222, Address: 0x2d5de0, Func Offset: 0
	// Func End, Address: 0x2d5de8, Func Offset: 0x8
}

// 
// Start address: 0x2d5df0
EilCursedLevel EilStatusCursedLevelSaved()
{
	// Line 227, Address: 0x2d5df0, Func Offset: 0
	// Line 228, Address: 0x2d5df8, Func Offset: 0x8
	// Line 229, Address: 0x2d5e08, Func Offset: 0x18
	// Func End, Address: 0x2d5e14, Func Offset: 0x24
}

// 
// Start address: 0x2d5e20
void EilBattleAdvanceCurse(_anon0* eil, float curse_pow)
{
	float cv;
	// Line 234, Address: 0x2d5e20, Func Offset: 0
	// Line 236, Address: 0x2d5e24, Func Offset: 0x4
	// Line 235, Address: 0x2d5e30, Func Offset: 0x10
	// Line 236, Address: 0x2d5e34, Func Offset: 0x14
	// Line 237, Address: 0x2d5e3c, Func Offset: 0x1c
	// Func End, Address: 0x2d5e44, Func Offset: 0x24
}

// 
// Start address: 0x2d5e50
void EilBattleRecoverCurse(_anon0* eil, float recover_pow)
{
	float cv;
	// Line 242, Address: 0x2d5e50, Func Offset: 0
	// Line 244, Address: 0x2d5e54, Func Offset: 0x4
	// Line 245, Address: 0x2d5e64, Func Offset: 0x14
	// Line 247, Address: 0x2d5e78, Func Offset: 0x28
	// Line 246, Address: 0x2d5e7c, Func Offset: 0x2c
	// Line 247, Address: 0x2d5e80, Func Offset: 0x30
	// Line 248, Address: 0x2d5e94, Func Offset: 0x44
	// Func End, Address: 0x2d5e9c, Func Offset: 0x4c
}

// 
// Start address: 0x2d5ea0
EilDamagedLevel EilStatusDamagedLevel(_anon0* eil)
{
	float rate;
	// Line 291, Address: 0x2d5ea0, Func Offset: 0
	// Line 294, Address: 0x2d5ea4, Func Offset: 0x4
	// Line 290, Address: 0x2d5ea8, Func Offset: 0x8
	// Line 291, Address: 0x2d5eac, Func Offset: 0xc
	// Line 294, Address: 0x2d5eb0, Func Offset: 0x10
	// Line 295, Address: 0x2d5ebc, Func Offset: 0x1c
	// Line 298, Address: 0x2d5ec8, Func Offset: 0x28
	// Line 297, Address: 0x2d5ecc, Func Offset: 0x2c
	// Line 298, Address: 0x2d5ed0, Func Offset: 0x30
	// Line 299, Address: 0x2d5ee8, Func Offset: 0x48
	// Line 300, Address: 0x2d5ef0, Func Offset: 0x50
	// Line 301, Address: 0x2d5f08, Func Offset: 0x68
	// Line 303, Address: 0x2d5f10, Func Offset: 0x70
	// Line 305, Address: 0x2d5f30, Func Offset: 0x90
	// Func End, Address: 0x2d5f38, Func Offset: 0x98
}

// 
// Start address: 0x2d5f40
void EileenBattleSetDamageForce(float attack_pow)
{
	float eil_life;
	// Line 315, Address: 0x2d5f40, Func Offset: 0
	// Line 317, Address: 0x2d5f44, Func Offset: 0x4
	// Line 315, Address: 0x2d5f48, Func Offset: 0x8
	// Line 317, Address: 0x2d5f4c, Func Offset: 0xc
	// Line 316, Address: 0x2d5f58, Func Offset: 0x18
	// Line 317, Address: 0x2d5f5c, Func Offset: 0x1c
	// Line 318, Address: 0x2d5f64, Func Offset: 0x24
	// Line 319, Address: 0x2d5f68, Func Offset: 0x28
	// Func End, Address: 0x2d5f70, Func Offset: 0x30
}

// 
// Start address: 0x2d5f70
void EileenBattleSetRecoverForce(float recover_pow)
{
	float eil_life;
	// Line 328, Address: 0x2d5f70, Func Offset: 0
	// Line 330, Address: 0x2d5f74, Func Offset: 0x4
	// Line 328, Address: 0x2d5f78, Func Offset: 0x8
	// Line 330, Address: 0x2d5f7c, Func Offset: 0xc
	// Line 329, Address: 0x2d5f88, Func Offset: 0x18
	// Line 330, Address: 0x2d5f8c, Func Offset: 0x1c
	// Line 331, Address: 0x2d5f94, Func Offset: 0x24
	// Line 332, Address: 0x2d5f98, Func Offset: 0x28
	// Func End, Address: 0x2d5fa0, Func Offset: 0x30
}

// 
// Start address: 0x2d5fa0
void EilBattleInflictDamage(_anon0* eil, float attack_pow)
{
	float eil_life;
	// Line 341, Address: 0x2d5fa0, Func Offset: 0
	// Line 338, Address: 0x2d5fa8, Func Offset: 0x8
	// Line 341, Address: 0x2d5fac, Func Offset: 0xc
	// Line 338, Address: 0x2d5fb8, Func Offset: 0x18
	// Line 341, Address: 0x2d5fbc, Func Offset: 0x1c
	// Line 339, Address: 0x2d5fc4, Func Offset: 0x24
	// Line 341, Address: 0x2d5fc8, Func Offset: 0x28
	// Line 342, Address: 0x2d5fd0, Func Offset: 0x30
	// Line 343, Address: 0x2d5fd8, Func Offset: 0x38
	// Line 344, Address: 0x2d5fe0, Func Offset: 0x40
	// Func End, Address: 0x2d5fe8, Func Offset: 0x48
}

// 
// Start address: 0x2d5ff0
void EilBattleRecoverLife(_anon0* eil, float recover_pow)
{
	float eil_life;
	// Line 352, Address: 0x2d5ff0, Func Offset: 0
	// Line 350, Address: 0x2d5ff8, Func Offset: 0x8
	// Line 352, Address: 0x2d5ffc, Func Offset: 0xc
	// Line 350, Address: 0x2d6008, Func Offset: 0x18
	// Line 352, Address: 0x2d600c, Func Offset: 0x1c
	// Line 351, Address: 0x2d6014, Func Offset: 0x24
	// Line 352, Address: 0x2d6018, Func Offset: 0x28
	// Line 353, Address: 0x2d6020, Func Offset: 0x30
	// Line 354, Address: 0x2d6024, Func Offset: 0x34
	// Func End, Address: 0x2d602c, Func Offset: 0x3c
}

// 
// Start address: 0x2d6030
void EileenBattleInit(_anon0* eil)
{
	float cursed_base;
	// Line 358, Address: 0x2d6030, Func Offset: 0
	// Line 360, Address: 0x2d603c, Func Offset: 0xc
	// Line 361, Address: 0x2d6044, Func Offset: 0x14
	// Line 362, Address: 0x2d6048, Func Offset: 0x18
	// Line 363, Address: 0x2d6050, Func Offset: 0x20
	// Func End, Address: 0x2d6060, Func Offset: 0x30
}

// 
// Start address: 0x2d6060
void EileenCldCheck(_anon0* eil)
{
	int n_hits;
	int i;
	sfCldPart* hit_part;
	int hit_kind;
	int status;
	sfObj* hit_enemy;
	EnemyCondition target_condition;
	EnemyKind enemy_kind;
	sfCldObject* hit_target;
	sfObj* enemy;
	// Line 368, Address: 0x2d6060, Func Offset: 0
	// Line 378, Address: 0x2d6088, Func Offset: 0x28
	// Line 379, Address: 0x2d608c, Func Offset: 0x2c
	// Line 380, Address: 0x2d6090, Func Offset: 0x30
	// Line 383, Address: 0x2d6094, Func Offset: 0x34
	// Line 384, Address: 0x2d60a0, Func Offset: 0x40
	// Line 386, Address: 0x2d60b0, Func Offset: 0x50
	// Line 389, Address: 0x2d60b8, Func Offset: 0x58
	// Line 390, Address: 0x2d60bc, Func Offset: 0x5c
	// Line 391, Address: 0x2d60c4, Func Offset: 0x64
	// Line 392, Address: 0x2d60cc, Func Offset: 0x6c
	// Line 401, Address: 0x2d60d4, Func Offset: 0x74
	// Line 402, Address: 0x2d60e0, Func Offset: 0x80
	// Line 403, Address: 0x2d60f0, Func Offset: 0x90
	// Line 404, Address: 0x2d60fc, Func Offset: 0x9c
	// Line 406, Address: 0x2d6104, Func Offset: 0xa4
	// Line 408, Address: 0x2d6118, Func Offset: 0xb8
	// Line 409, Address: 0x2d6124, Func Offset: 0xc4
	// Line 410, Address: 0x2d612c, Func Offset: 0xcc
	// Line 413, Address: 0x2d6130, Func Offset: 0xd0
	// Line 417, Address: 0x2d6144, Func Offset: 0xe4
	// Line 420, Address: 0x2d614c, Func Offset: 0xec
	// Line 422, Address: 0x2d6158, Func Offset: 0xf8
	// Line 424, Address: 0x2d6160, Func Offset: 0x100
	// Line 425, Address: 0x2d616c, Func Offset: 0x10c
	// Line 427, Address: 0x2d6174, Func Offset: 0x114
	// Line 428, Address: 0x2d617c, Func Offset: 0x11c
	// Line 431, Address: 0x2d618c, Func Offset: 0x12c
	// Line 434, Address: 0x2d6198, Func Offset: 0x138
	// Line 435, Address: 0x2d61a0, Func Offset: 0x140
	// Line 438, Address: 0x2d61b0, Func Offset: 0x150
	// Line 439, Address: 0x2d61b4, Func Offset: 0x154
	// Line 445, Address: 0x2d61b8, Func Offset: 0x158
	// Line 446, Address: 0x2d61c4, Func Offset: 0x164
	// Line 447, Address: 0x2d61d0, Func Offset: 0x170
	// Line 448, Address: 0x2d61dc, Func Offset: 0x17c
	// Line 449, Address: 0x2d61e8, Func Offset: 0x188
	// Line 450, Address: 0x2d61f4, Func Offset: 0x194
	// Line 452, Address: 0x2d6200, Func Offset: 0x1a0
	// Line 454, Address: 0x2d620c, Func Offset: 0x1ac
	// Line 455, Address: 0x2d6218, Func Offset: 0x1b8
	// Line 456, Address: 0x2d621c, Func Offset: 0x1bc
	// Line 459, Address: 0x2d6220, Func Offset: 0x1c0
	// Line 461, Address: 0x2d6230, Func Offset: 0x1d0
	// Line 463, Address: 0x2d623c, Func Offset: 0x1dc
	// Line 464, Address: 0x2d6250, Func Offset: 0x1f0
	// Line 465, Address: 0x2d625c, Func Offset: 0x1fc
	// Line 466, Address: 0x2d6260, Func Offset: 0x200
	// Line 480, Address: 0x2d6268, Func Offset: 0x208
	// Func End, Address: 0x2d6294, Func Offset: 0x234
}

// 
// Start address: 0x2d62a0
void EilBattleHitProcess(_anon0* eil)
{
	BattleHit* b_hit;
	float eil_life;
	float damage;
	int hit_id;
	BattleAttackKind at_kind;
	float center[4];
	float c_damage;
	float recover;
	// Line 486, Address: 0x2d62a0, Func Offset: 0
	// Line 500, Address: 0x2d62a4, Func Offset: 0x4
	// Line 486, Address: 0x2d62a8, Func Offset: 0x8
	// Line 500, Address: 0x2d62ac, Func Offset: 0xc
	// Line 486, Address: 0x2d62b0, Func Offset: 0x10
	// Line 500, Address: 0x2d62b4, Func Offset: 0x14
	// Line 486, Address: 0x2d62b8, Func Offset: 0x18
	// Line 500, Address: 0x2d62c0, Func Offset: 0x20
	// Line 503, Address: 0x2d62c8, Func Offset: 0x28
	// Line 506, Address: 0x2d63c8, Func Offset: 0x128
	// Line 508, Address: 0x2d63cc, Func Offset: 0x12c
	// Line 509, Address: 0x2d63d8, Func Offset: 0x138
	// Line 510, Address: 0x2d63e4, Func Offset: 0x144
	// Line 511, Address: 0x2d63f8, Func Offset: 0x158
	// Line 512, Address: 0x2d6400, Func Offset: 0x160
	// Line 514, Address: 0x2d6414, Func Offset: 0x174
	// Line 516, Address: 0x2d641c, Func Offset: 0x17c
	// Line 519, Address: 0x2d6420, Func Offset: 0x180
	// Line 520, Address: 0x2d642c, Func Offset: 0x18c
	// Line 521, Address: 0x2d6438, Func Offset: 0x198
	// Line 520, Address: 0x2d6440, Func Offset: 0x1a0
	// Line 521, Address: 0x2d6448, Func Offset: 0x1a8
	// Line 524, Address: 0x2d6458, Func Offset: 0x1b8
	// Line 526, Address: 0x2d6464, Func Offset: 0x1c4
	// Line 525, Address: 0x2d6468, Func Offset: 0x1c8
	// Line 526, Address: 0x2d646c, Func Offset: 0x1cc
	// Line 528, Address: 0x2d647c, Func Offset: 0x1dc
	// Line 529, Address: 0x2d6488, Func Offset: 0x1e8
	// Line 531, Address: 0x2d6490, Func Offset: 0x1f0
	// Line 535, Address: 0x2d64a8, Func Offset: 0x208
	// Line 538, Address: 0x2d6574, Func Offset: 0x2d4
	// Line 539, Address: 0x2d6580, Func Offset: 0x2e0
	// Line 541, Address: 0x2d6588, Func Offset: 0x2e8
	// Line 545, Address: 0x2d6590, Func Offset: 0x2f0
	// Line 548, Address: 0x2d659c, Func Offset: 0x2fc
	// Line 549, Address: 0x2d65a0, Func Offset: 0x300
	// Line 553, Address: 0x2d65a8, Func Offset: 0x308
	// Line 555, Address: 0x2d65b0, Func Offset: 0x310
	// Line 553, Address: 0x2d65b4, Func Offset: 0x314
	// Line 555, Address: 0x2d65b8, Func Offset: 0x318
	// Line 557, Address: 0x2d65c0, Func Offset: 0x320
	// Line 561, Address: 0x2d65c8, Func Offset: 0x328
	// Line 563, Address: 0x2d65d4, Func Offset: 0x334
	// Line 565, Address: 0x2d65d8, Func Offset: 0x338
	// Line 564, Address: 0x2d65dc, Func Offset: 0x33c
	// Line 569, Address: 0x2d65e0, Func Offset: 0x340
	// Line 565, Address: 0x2d65e4, Func Offset: 0x344
	// Line 568, Address: 0x2d65e8, Func Offset: 0x348
	// Line 569, Address: 0x2d65f0, Func Offset: 0x350
	// Line 572, Address: 0x2d65fc, Func Offset: 0x35c
	// Line 573, Address: 0x2d6608, Func Offset: 0x368
	// Line 574, Address: 0x2d6610, Func Offset: 0x370
	// Line 575, Address: 0x2d6618, Func Offset: 0x378
	// Line 576, Address: 0x2d662c, Func Offset: 0x38c
	// Line 578, Address: 0x2d6638, Func Offset: 0x398
	// Line 580, Address: 0x2d6640, Func Offset: 0x3a0
	// Func End, Address: 0x2d6658, Func Offset: 0x3b8
}

// 
// Start address: 0x2d6660
int TargetIsValid(sfObj* enemy)
{
	EnemyCondition target_condition;
	EnemyKind enemy_kind;
	// Line 587, Address: 0x2d6660, Func Offset: 0
	// Line 591, Address: 0x2d6670, Func Offset: 0x10
	// Line 592, Address: 0x2d6678, Func Offset: 0x18
	// Line 594, Address: 0x2d6680, Func Offset: 0x20
	// Line 595, Address: 0x2d6690, Func Offset: 0x30
	// Line 598, Address: 0x2d6698, Func Offset: 0x38
	// Line 599, Address: 0x2d66a8, Func Offset: 0x48
	// Line 602, Address: 0x2d66b0, Func Offset: 0x50
	// Line 603, Address: 0x2d6700, Func Offset: 0xa0
	// Line 605, Address: 0x2d6708, Func Offset: 0xa8
	// Line 606, Address: 0x2d6714, Func Offset: 0xb4
	// Line 612, Address: 0x2d6748, Func Offset: 0xe8
	// Line 614, Address: 0x2d6750, Func Offset: 0xf0
	// Line 616, Address: 0x2d675c, Func Offset: 0xfc
	// Line 617, Address: 0x2d6778, Func Offset: 0x118
	// Line 618, Address: 0x2d6784, Func Offset: 0x124
	// Line 619, Address: 0x2d678c, Func Offset: 0x12c
	// Line 620, Address: 0x2d6790, Func Offset: 0x130
	// Line 621, Address: 0x2d6798, Func Offset: 0x138
	// Func End, Address: 0x2d67ac, Func Offset: 0x14c
}

// 
// Start address: 0x2d67b0
int CheckIgnore(sfObj* enemy)
{
	EnemyKind enemy_kind;
	// Line 629, Address: 0x2d67b0, Func Offset: 0
	// Line 632, Address: 0x2d67b8, Func Offset: 0x8
	// Line 633, Address: 0x2d67c4, Func Offset: 0x14
	// Line 634, Address: 0x2d67d0, Func Offset: 0x20
	// Line 635, Address: 0x2d67d8, Func Offset: 0x28
	// Line 636, Address: 0x2d67e4, Func Offset: 0x34
	// Line 638, Address: 0x2d67f0, Func Offset: 0x40
	// Line 641, Address: 0x2d67f8, Func Offset: 0x48
	// Func End, Address: 0x2d6804, Func Offset: 0x54
}

// 
// Start address: 0x2d6810
sfObj* EilCheckNearEnemy(_anon0* eil, _anon7* bw)
{
	sfCldObject cld_obj;
	sfCldPart* cld_part;
	_anon4* ball;
	float v[4];
	float target_center[4];
	int n_hits;
	int i;
	float to_target;
	sfObj* target_candidate;
	sfCldObject* hit_target;
	sfObj* enemy;
	float r;
	// Line 648, Address: 0x2d6810, Func Offset: 0
	// Line 661, Address: 0x2d6834, Func Offset: 0x24
	// Line 648, Address: 0x2d6838, Func Offset: 0x28
	// Line 658, Address: 0x2d6840, Func Offset: 0x30
	// Line 648, Address: 0x2d6844, Func Offset: 0x34
	// Line 661, Address: 0x2d6848, Func Offset: 0x38
	// Line 662, Address: 0x2d6850, Func Offset: 0x40
	// Line 663, Address: 0x2d685c, Func Offset: 0x4c
	// Line 664, Address: 0x2d6880, Func Offset: 0x70
	// Line 665, Address: 0x2d6888, Func Offset: 0x78
	// Line 666, Address: 0x2d6890, Func Offset: 0x80
	// Line 667, Address: 0x2d68a0, Func Offset: 0x90
	// Line 668, Address: 0x2d68b0, Func Offset: 0xa0
	// Line 671, Address: 0x2d68bc, Func Offset: 0xac
	// Line 669, Address: 0x2d68c0, Func Offset: 0xb0
	// Line 670, Address: 0x2d68cc, Func Offset: 0xbc
	// Line 669, Address: 0x2d68d0, Func Offset: 0xc0
	// Line 671, Address: 0x2d68d8, Func Offset: 0xc8
	// Line 673, Address: 0x2d68e0, Func Offset: 0xd0
	// Line 675, Address: 0x2d68ec, Func Offset: 0xdc
	// Line 676, Address: 0x2d68f8, Func Offset: 0xe8
	// Line 677, Address: 0x2d6900, Func Offset: 0xf0
	// Line 678, Address: 0x2d6908, Func Offset: 0xf8
	// Line 684, Address: 0x2d6910, Func Offset: 0x100
	// Line 685, Address: 0x2d6918, Func Offset: 0x108
	// Line 690, Address: 0x2d6920, Func Offset: 0x110
	// Line 692, Address: 0x2d692c, Func Offset: 0x11c
	// Line 694, Address: 0x2d6938, Func Offset: 0x128
	// Line 697, Address: 0x2d695c, Func Offset: 0x14c
	// Line 700, Address: 0x2d6978, Func Offset: 0x168
	// Line 701, Address: 0x2d6984, Func Offset: 0x174
	// Line 705, Address: 0x2d698c, Func Offset: 0x17c
	// Line 709, Address: 0x2d699c, Func Offset: 0x18c
	// Line 715, Address: 0x2d69ac, Func Offset: 0x19c
	// Line 716, Address: 0x2d69bc, Func Offset: 0x1ac
	// Line 717, Address: 0x2d69d4, Func Offset: 0x1c4
	// Line 718, Address: 0x2d6a00, Func Offset: 0x1f0
	// Line 719, Address: 0x2d6a2c, Func Offset: 0x21c
	// Line 720, Address: 0x2d6a4c, Func Offset: 0x23c
	// Line 725, Address: 0x2d6a60, Func Offset: 0x250
	// Line 726, Address: 0x2d6a7c, Func Offset: 0x26c
	// Line 729, Address: 0x2d6aa0, Func Offset: 0x290
	// Line 730, Address: 0x2d6ab8, Func Offset: 0x2a8
	// Line 733, Address: 0x2d6ac8, Func Offset: 0x2b8
	// Line 734, Address: 0x2d6ad4, Func Offset: 0x2c4
	// Line 737, Address: 0x2d6ad8, Func Offset: 0x2c8
	// Line 738, Address: 0x2d6ae0, Func Offset: 0x2d0
	// Line 739, Address: 0x2d6b0c, Func Offset: 0x2fc
	// Line 741, Address: 0x2d6b10, Func Offset: 0x300
	// Line 743, Address: 0x2d6b24, Func Offset: 0x314
	// Line 745, Address: 0x2d6b2c, Func Offset: 0x31c
	// Line 747, Address: 0x2d6b30, Func Offset: 0x320
	// Line 746, Address: 0x2d6b34, Func Offset: 0x324
	// Line 748, Address: 0x2d6b38, Func Offset: 0x328
	// Func End, Address: 0x2d6b68, Func Offset: 0x358
}

// 
// Start address: 0x2d6b70
int EilBattleNearFrontCheck(_anon0* eil, int check_target, int w_size, int z_size)
{
	sfCldObject cld_obj;
	sfCldPart* cld_part;
	int kind;
	int n_hits;
	int i;
	_anon1* obb;
	float w;
	float z;
	float z_offset;
	sfCldObject* hit_target;
	sfObj* enemy;
	// Line 810, Address: 0x2d6b70, Func Offset: 0
	// Line 821, Address: 0x2d6b98, Func Offset: 0x28
	// Line 822, Address: 0x2d6ba0, Func Offset: 0x30
	// Line 823, Address: 0x2d6bac, Func Offset: 0x3c
	// Line 824, Address: 0x2d6bd0, Func Offset: 0x60
	// Line 825, Address: 0x2d6bd8, Func Offset: 0x68
	// Line 826, Address: 0x2d6be0, Func Offset: 0x70
	// Line 828, Address: 0x2d6be8, Func Offset: 0x78
	// Line 829, Address: 0x2d6bf8, Func Offset: 0x88
	// Line 831, Address: 0x2d6c10, Func Offset: 0xa0
	// Line 832, Address: 0x2d6c34, Func Offset: 0xc4
	// Line 833, Address: 0x2d6c3c, Func Offset: 0xcc
	// Line 835, Address: 0x2d6c50, Func Offset: 0xe0
	// Line 836, Address: 0x2d6c60, Func Offset: 0xf0
	// Line 838, Address: 0x2d6c68, Func Offset: 0xf8
	// Line 837, Address: 0x2d6c6c, Func Offset: 0xfc
	// Line 838, Address: 0x2d6c70, Func Offset: 0x100
	// Line 839, Address: 0x2d6c74, Func Offset: 0x104
	// Line 840, Address: 0x2d6c80, Func Offset: 0x110
	// Line 841, Address: 0x2d6c88, Func Offset: 0x118
	// Line 844, Address: 0x2d6c98, Func Offset: 0x128
	// Line 845, Address: 0x2d6ca0, Func Offset: 0x130
	// Line 847, Address: 0x2d6ca4, Func Offset: 0x134
	// Line 846, Address: 0x2d6ca8, Func Offset: 0x138
	// Line 847, Address: 0x2d6cac, Func Offset: 0x13c
	// Line 848, Address: 0x2d6cb0, Func Offset: 0x140
	// Line 849, Address: 0x2d6cb4, Func Offset: 0x144
	// Line 851, Address: 0x2d6cc0, Func Offset: 0x150
	// Line 852, Address: 0x2d6cc8, Func Offset: 0x158
	// Line 853, Address: 0x2d6cd0, Func Offset: 0x160
	// Line 854, Address: 0x2d6cd8, Func Offset: 0x168
	// Line 855, Address: 0x2d6ce4, Func Offset: 0x174
	// Line 857, Address: 0x2d6cf0, Func Offset: 0x180
	// Line 858, Address: 0x2d6cf8, Func Offset: 0x188
	// Line 859, Address: 0x2d6d00, Func Offset: 0x190
	// Line 861, Address: 0x2d6d08, Func Offset: 0x198
	// Line 862, Address: 0x2d6d14, Func Offset: 0x1a4
	// Line 863, Address: 0x2d6d1c, Func Offset: 0x1ac
	// Line 865, Address: 0x2d6d28, Func Offset: 0x1b8
	// Line 870, Address: 0x2d6d30, Func Offset: 0x1c0
	// Line 871, Address: 0x2d6d38, Func Offset: 0x1c8
	// Line 872, Address: 0x2d6d84, Func Offset: 0x214
	// Line 873, Address: 0x2d6d90, Func Offset: 0x220
	// Line 874, Address: 0x2d6d98, Func Offset: 0x228
	// Line 877, Address: 0x2d6da0, Func Offset: 0x230
	// Line 879, Address: 0x2d6db0, Func Offset: 0x240
	// Line 880, Address: 0x2d6db8, Func Offset: 0x248
	// Line 882, Address: 0x2d6dcc, Func Offset: 0x25c
	// Line 883, Address: 0x2d6dd0, Func Offset: 0x260
	// Func End, Address: 0x2d6dec, Func Offset: 0x27c
}

// 
// Start address: 0x2d6df0
int EilBattleStraightFrontCheck(_anon0* eil, int check_target, int z_size)
{
	sfCldObject cld_obj;
	sfCldPart* cld_part;
	float v[4];
	int kind;
	int n_hits;
	int i;
	_anon2* line;
	float z;
	sfCldObject* hit_target;
	sfObj* enemy;
	// Line 891, Address: 0x2d6df0, Func Offset: 0
	// Line 901, Address: 0x2d6e10, Func Offset: 0x20
	// Line 902, Address: 0x2d6e18, Func Offset: 0x28
	// Line 903, Address: 0x2d6e24, Func Offset: 0x34
	// Line 904, Address: 0x2d6e48, Func Offset: 0x58
	// Line 905, Address: 0x2d6e50, Func Offset: 0x60
	// Line 906, Address: 0x2d6e58, Func Offset: 0x68
	// Line 908, Address: 0x2d6e60, Func Offset: 0x70
	// Line 909, Address: 0x2d6e70, Func Offset: 0x80
	// Line 910, Address: 0x2d6e80, Func Offset: 0x90
	// Line 912, Address: 0x2d6e8c, Func Offset: 0x9c
	// Line 911, Address: 0x2d6e90, Func Offset: 0xa0
	// Line 912, Address: 0x2d6ea8, Func Offset: 0xb8
	// Line 913, Address: 0x2d6eb0, Func Offset: 0xc0
	// Line 914, Address: 0x2d6eb4, Func Offset: 0xc4
	// Line 915, Address: 0x2d6ed4, Func Offset: 0xe4
	// Line 916, Address: 0x2d6edc, Func Offset: 0xec
	// Line 918, Address: 0x2d6ef0, Func Offset: 0x100
	// Line 919, Address: 0x2d6ef8, Func Offset: 0x108
	// Line 920, Address: 0x2d6f1c, Func Offset: 0x12c
	// Line 921, Address: 0x2d6f38, Func Offset: 0x148
	// Line 923, Address: 0x2d6f40, Func Offset: 0x150
	// Line 924, Address: 0x2d6f48, Func Offset: 0x158
	// Line 925, Address: 0x2d6f50, Func Offset: 0x160
	// Line 926, Address: 0x2d6f5c, Func Offset: 0x16c
	// Line 928, Address: 0x2d6f68, Func Offset: 0x178
	// Line 929, Address: 0x2d6f70, Func Offset: 0x180
	// Line 930, Address: 0x2d6f78, Func Offset: 0x188
	// Line 932, Address: 0x2d6f80, Func Offset: 0x190
	// Line 933, Address: 0x2d6f8c, Func Offset: 0x19c
	// Line 934, Address: 0x2d6f94, Func Offset: 0x1a4
	// Line 936, Address: 0x2d6fa0, Func Offset: 0x1b0
	// Line 941, Address: 0x2d6fa8, Func Offset: 0x1b8
	// Line 942, Address: 0x2d6fb0, Func Offset: 0x1c0
	// Line 943, Address: 0x2d6ffc, Func Offset: 0x20c
	// Line 944, Address: 0x2d7008, Func Offset: 0x218
	// Line 945, Address: 0x2d7010, Func Offset: 0x220
	// Line 948, Address: 0x2d7018, Func Offset: 0x228
	// Line 950, Address: 0x2d7028, Func Offset: 0x238
	// Line 951, Address: 0x2d7030, Func Offset: 0x240
	// Line 953, Address: 0x2d7044, Func Offset: 0x254
	// Line 954, Address: 0x2d7048, Func Offset: 0x258
	// Func End, Address: 0x2d7060, Func Offset: 0x270
}

// 
// Start address: 0x2d7060
void SelectTarget(_anon0* eil, sfObj* last_target, _anon7* bw)
{
	sfObj* target_candidate;
	float to_last;
	float eil_pos[4];
	float target_center[4];
	float v[4];
	// Line 961, Address: 0x2d7060, Func Offset: 0
	// Line 970, Address: 0x2d7080, Func Offset: 0x20
	// Line 974, Address: 0x2d7088, Func Offset: 0x28
	// Line 977, Address: 0x2d7098, Func Offset: 0x38
	// Line 980, Address: 0x2d709c, Func Offset: 0x3c
	// Line 983, Address: 0x2d70a4, Func Offset: 0x44
	// Line 984, Address: 0x2d70ac, Func Offset: 0x4c
	// Line 987, Address: 0x2d70b8, Func Offset: 0x58
	// Line 984, Address: 0x2d70c0, Func Offset: 0x60
	// Line 987, Address: 0x2d70c4, Func Offset: 0x64
	// Line 988, Address: 0x2d70cc, Func Offset: 0x6c
	// Line 989, Address: 0x2d70ec, Func Offset: 0x8c
	// Line 991, Address: 0x2d7110, Func Offset: 0xb0
	// Line 995, Address: 0x2d7128, Func Offset: 0xc8
	// Line 999, Address: 0x2d7138, Func Offset: 0xd8
	// Line 1003, Address: 0x2d7150, Func Offset: 0xf0
	// Line 1004, Address: 0x2d7154, Func Offset: 0xf4
	// Line 1005, Address: 0x2d7160, Func Offset: 0x100
	// Line 1006, Address: 0x2d718c, Func Offset: 0x12c
	// Line 1007, Address: 0x2d7190, Func Offset: 0x130
	// Func End, Address: 0x2d71ac, Func Offset: 0x14c
}

// 
// Start address: 0x2d71b0
int SpecialOK(_anon0* eil)
{
	float angle;
	// Line 1012, Address: 0x2d71b0, Func Offset: 0
	// Line 1015, Address: 0x2d71bc, Func Offset: 0xc
	// Line 1016, Address: 0x2d71d4, Func Offset: 0x24
	// Line 1018, Address: 0x2d71e0, Func Offset: 0x30
	// Line 1019, Address: 0x2d71f8, Func Offset: 0x48
	// Line 1022, Address: 0x2d7200, Func Offset: 0x50
	// Line 1023, Address: 0x2d7204, Func Offset: 0x54
	// Line 1022, Address: 0x2d7208, Func Offset: 0x58
	// Line 1023, Address: 0x2d720c, Func Offset: 0x5c
	// Line 1024, Address: 0x2d7224, Func Offset: 0x74
	// Line 1027, Address: 0x2d7230, Func Offset: 0x80
	// Line 1028, Address: 0x2d7248, Func Offset: 0x98
	// Line 1030, Address: 0x2d7250, Func Offset: 0xa0
	// Line 1031, Address: 0x2d7258, Func Offset: 0xa8
	// Func End, Address: 0x2d7268, Func Offset: 0xb8
}

// 
// Start address: 0x2d7270
int TakeAttackMethod(_anon0* eil, sfObj* enemy, float* target_pos)
{
	EnemyKind enemy_kind;
	EnemyCondition target_condition;
	float h;
	int level;
	int atk_method;
	// Line 1035, Address: 0x2d7270, Func Offset: 0
	// Line 1042, Address: 0x2d7298, Func Offset: 0x28
	// Line 1043, Address: 0x2d72a0, Func Offset: 0x30
	// Line 1045, Address: 0x2d72a8, Func Offset: 0x38
	// Line 1046, Address: 0x2d72b4, Func Offset: 0x44
	// Line 1047, Address: 0x2d72d0, Func Offset: 0x60
	// Line 1049, Address: 0x2d72e0, Func Offset: 0x70
	// Line 1051, Address: 0x2d72e8, Func Offset: 0x78
	// Line 1052, Address: 0x2d72f0, Func Offset: 0x80
	// Line 1055, Address: 0x2d7300, Func Offset: 0x90
	// Line 1057, Address: 0x2d731c, Func Offset: 0xac
	// Line 1061, Address: 0x2d7320, Func Offset: 0xb0
	// Line 1062, Address: 0x2d7330, Func Offset: 0xc0
	// Line 1061, Address: 0x2d7338, Func Offset: 0xc8
	// Line 1062, Address: 0x2d7344, Func Offset: 0xd4
	// Line 1063, Address: 0x2d7350, Func Offset: 0xe0
	// Line 1064, Address: 0x2d7358, Func Offset: 0xe8
	// Line 1065, Address: 0x2d7370, Func Offset: 0x100
	// Line 1067, Address: 0x2d7378, Func Offset: 0x108
	// Line 1070, Address: 0x2d73a0, Func Offset: 0x130
	// Line 1071, Address: 0x2d73a8, Func Offset: 0x138
	// Line 1074, Address: 0x2d73b0, Func Offset: 0x140
	// Line 1077, Address: 0x2d73b8, Func Offset: 0x148
	// Line 1078, Address: 0x2d73c4, Func Offset: 0x154
	// Line 1081, Address: 0x2d73d0, Func Offset: 0x160
	// Line 1084, Address: 0x2d73d8, Func Offset: 0x168
	// Line 1087, Address: 0x2d73e0, Func Offset: 0x170
	// Line 1090, Address: 0x2d73fc, Func Offset: 0x18c
	// Line 1091, Address: 0x2d7404, Func Offset: 0x194
	// Line 1093, Address: 0x2d7408, Func Offset: 0x198
	// Line 1094, Address: 0x2d7414, Func Offset: 0x1a4
	// Line 1096, Address: 0x2d7420, Func Offset: 0x1b0
	// Line 1097, Address: 0x2d7428, Func Offset: 0x1b8
	// Line 1100, Address: 0x2d7444, Func Offset: 0x1d4
	// Line 1101, Address: 0x2d744c, Func Offset: 0x1dc
	// Line 1103, Address: 0x2d7450, Func Offset: 0x1e0
	// Line 1104, Address: 0x2d7458, Func Offset: 0x1e8
	// Line 1107, Address: 0x2d7460, Func Offset: 0x1f0
	// Line 1110, Address: 0x2d7468, Func Offset: 0x1f8
	// Line 1111, Address: 0x2d7484, Func Offset: 0x214
	// Line 1115, Address: 0x2d7488, Func Offset: 0x218
	// Line 1116, Address: 0x2d7490, Func Offset: 0x220
	// Func End, Address: 0x2d74b0, Func Offset: 0x240
}

// 
// Start address: 0x2d74b0
void EilBattleEnemyAnalize(_anon0* eil)
{
	sfObj* enemy;
	sfObj* last_target;
	_anon7 battle_work;
	_anon7* bw;
	float v[4];
	// Line 1125, Address: 0x2d74b0, Func Offset: 0
	// Line 1133, Address: 0x2d74cc, Func Offset: 0x1c
	// Line 1129, Address: 0x2d74d0, Func Offset: 0x20
	// Line 1137, Address: 0x2d74d4, Func Offset: 0x24
	// Line 1139, Address: 0x2d74e4, Func Offset: 0x34
	// Line 1143, Address: 0x2d74ec, Func Offset: 0x3c
	// Line 1145, Address: 0x2d74f8, Func Offset: 0x48
	// Line 1146, Address: 0x2d74fc, Func Offset: 0x4c
	// Line 1151, Address: 0x2d7504, Func Offset: 0x54
	// Line 1152, Address: 0x2d7508, Func Offset: 0x58
	// Line 1153, Address: 0x2d7510, Func Offset: 0x60
	// Line 1154, Address: 0x2d7518, Func Offset: 0x68
	// Line 1156, Address: 0x2d7520, Func Offset: 0x70
	// Line 1157, Address: 0x2d753c, Func Offset: 0x8c
	// Line 1158, Address: 0x2d7540, Func Offset: 0x90
	// Line 1157, Address: 0x2d7544, Func Offset: 0x94
	// Line 1158, Address: 0x2d7548, Func Offset: 0x98
	// Line 1160, Address: 0x2d7568, Func Offset: 0xb8
	// Line 1161, Address: 0x2d757c, Func Offset: 0xcc
	// Line 1162, Address: 0x2d7594, Func Offset: 0xe4
	// Line 1164, Address: 0x2d75a0, Func Offset: 0xf0
	// Line 1167, Address: 0x2d75a8, Func Offset: 0xf8
	// Line 1168, Address: 0x2d75bc, Func Offset: 0x10c
	// Func End, Address: 0x2d75dc, Func Offset: 0x12c
}

// 
// Start address: 0x2d75e0
int EilBattleSceneLeftEnemyCheck()
{
	float point;
	sfObj* enemy;
	EnemyKind enemy_kind;
	// Line 1188, Address: 0x2d75e0, Func Offset: 0
	// Line 1189, Address: 0x2d75f4, Func Offset: 0x14
	// Line 1193, Address: 0x2d75f8, Func Offset: 0x18
	// Line 1194, Address: 0x2d7604, Func Offset: 0x24
	// Line 1195, Address: 0x2d7610, Func Offset: 0x30
	// Line 1198, Address: 0x2d7620, Func Offset: 0x40
	// Line 1201, Address: 0x2d7630, Func Offset: 0x50
	// Line 1202, Address: 0x2d763c, Func Offset: 0x5c
	// Line 1203, Address: 0x2d764c, Func Offset: 0x6c
	// Line 1204, Address: 0x2d7650, Func Offset: 0x70
	// Line 1206, Address: 0x2d76b8, Func Offset: 0xd8
	// Line 1207, Address: 0x2d76c4, Func Offset: 0xe4
	// Line 1208, Address: 0x2d76cc, Func Offset: 0xec
	// Line 1209, Address: 0x2d76d0, Func Offset: 0xf0
	// Line 1210, Address: 0x2d76dc, Func Offset: 0xfc
	// Line 1211, Address: 0x2d76e4, Func Offset: 0x104
	// Line 1212, Address: 0x2d76e8, Func Offset: 0x108
	// Line 1213, Address: 0x2d76f4, Func Offset: 0x114
	// Line 1214, Address: 0x2d76fc, Func Offset: 0x11c
	// Line 1215, Address: 0x2d7700, Func Offset: 0x120
	// Line 1216, Address: 0x2d770c, Func Offset: 0x12c
	// Line 1217, Address: 0x2d7714, Func Offset: 0x134
	// Line 1218, Address: 0x2d7718, Func Offset: 0x138
	// Line 1219, Address: 0x2d7724, Func Offset: 0x144
	// Line 1220, Address: 0x2d772c, Func Offset: 0x14c
	// Line 1221, Address: 0x2d7730, Func Offset: 0x150
	// Line 1222, Address: 0x2d773c, Func Offset: 0x15c
	// Line 1223, Address: 0x2d7744, Func Offset: 0x164
	// Line 1224, Address: 0x2d7748, Func Offset: 0x168
	// Line 1225, Address: 0x2d7754, Func Offset: 0x174
	// Line 1226, Address: 0x2d775c, Func Offset: 0x17c
	// Line 1227, Address: 0x2d7760, Func Offset: 0x180
	// Line 1228, Address: 0x2d776c, Func Offset: 0x18c
	// Line 1229, Address: 0x2d7774, Func Offset: 0x194
	// Line 1230, Address: 0x2d7778, Func Offset: 0x198
	// Line 1233, Address: 0x2d778c, Func Offset: 0x1ac
	// Line 1234, Address: 0x2d77a8, Func Offset: 0x1c8
	// Line 1235, Address: 0x2d77bc, Func Offset: 0x1dc
	// Line 1237, Address: 0x2d77c8, Func Offset: 0x1e8
	// Line 1239, Address: 0x2d77e8, Func Offset: 0x208
	// Func End, Address: 0x2d7800, Func Offset: 0x220
}

// 
// Start address: 0x2d7800
float EilBattleAttackRange(_anon0* eil)
{
	// Line 1246, Address: 0x2d7800, Func Offset: 0
	// Func End, Address: 0x2d7808, Func Offset: 0x8
}

// 
// Start address: 0x2d7810
void EilBattleFinishReport(_anon0* eil)
{
	// Line 1252, Address: 0x2d7810, Func Offset: 0
	// Line 1253, Address: 0x2d7820, Func Offset: 0x10
	// Line 1254, Address: 0x2d78a8, Func Offset: 0x98
	// Func End, Address: 0x2d78bc, Func Offset: 0xac
}

