typedef struct sgBone;
typedef struct _GAME_WORK;
typedef struct sgAnime;
typedef enum BattleHitResult : unsigned char;
typedef struct _anon0;
typedef struct _anon1;
typedef struct _PLAYER_WORK;
typedef struct _anon2;
typedef struct BattleHit;
typedef struct _anon3;
typedef struct _anon4;
typedef struct sfCldObject;
typedef struct sfCharacter;
typedef struct _anon5;
typedef enum GameItem : unsigned char;
typedef struct _anon6;
typedef struct sfObj;
typedef union _anon7;
typedef struct sgQTNode;
typedef struct _anon8;
typedef struct sfCldPart;
typedef struct sgSVModel;
typedef struct _anon9;
typedef struct _anon10;
typedef enum BattleAttackKind : unsigned char;
typedef enum sgIKSolveResult : unsigned char;
typedef struct _anon11;
typedef struct sgIKHandle;
typedef struct _anon12;
typedef struct sgQTObject;
typedef struct sfOffsetAABB;
typedef union sfCldBody;

typedef void(*type_1)(sgAnime*, int);
typedef void(*type_9)(sfObj*);
typedef void(*type_16)(sfObj*);
typedef void(*type_22)(_anon10*, int, int, float*);
typedef sgIKSolveResult(*type_26)();

typedef float type_0[4];
typedef int type_2[1];
typedef int type_3[1];
typedef _anon1 type_4[17];
typedef unsigned char type_5[4];
typedef _PLAYER_WORK type_6[2];
typedef int type_7[1];
typedef _anon7 type_8[256];
typedef float type_10[4][2];
typedef int type_11[2];
typedef sfCldPart* type_12[6];
typedef unsigned char type_13[3];
typedef int type_14[2];
typedef float type_15[4][4];
typedef float type_17[2];
typedef _anon9 type_18[32];
typedef float type_19[2];
typedef float type_20[4];
typedef float type_21[4][2];
typedef sfCldObject* type_23[4];
typedef float type_24[2];
typedef float type_25[4];
typedef int type_27[17];
typedef int type_28[1];
typedef int type_29[1];
typedef short type_30[2];
typedef int type_31[1];
typedef unsigned short type_32[2];
typedef char type_33[4];
typedef unsigned char type_34[3];
typedef unsigned char type_35[4];
typedef void* type_36[4];
typedef int type_37[1];
typedef float type_38[1];
typedef int type_39[1];

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

enum BattleHitResult : unsigned char
{
	GB_HIT_RES_NONE,
	GB_HIT_RES_PLAYER_HIT,
	GB_HIT_RES_ENEMY_HIT,
	GB_HIT_RES_EILEEN_HIT,
	GB_HIT_RES_END
};

struct _anon0
{
	int dummy;
};

struct _anon1
{
	int front;
	int back;
	float stag_dist;
	float stag_time;
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
	_anon0* anim_ctrl;
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

struct _anon2
{
	float abcd[4];
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

struct _anon3
{
	float start[4];
	float end[4];
};

struct _anon4
{
	float center[4];
	float radius;
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

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon11 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
};

struct _anon5
{
	float bmin[4];
	float bmax[4];
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

struct _anon6
{
	float mat[4][4];
	float half_w[4];
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

struct sgQTNode
{
	int dummy;
};

struct _anon8
{
	float backwalk_time;
	int backwalk_angle;
	float backwalk_count;
	int cancel_count;
	int gun_lastshot;
	float pos_pl[4];
	float pos_ui[4];
	float foot_r[4];
	float foot_l[4];
	float retarget_time;
	sfObj* special_obj;
	float special_time;
	GameItem bullet;
	float spot_time;
	int cancel;
	int battle_disable;
	int spray;
	float finish_time;
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

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
};

struct _anon9
{
	_anon4* range;
	float damage;
	_anon4 sph;
};

struct _anon10
{
	unsigned long tex0;
	unsigned long clamp;
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

struct _anon11
{
	void* model;
	void* texture;
	void* texture_global;
	float matrices[4][4];
	float* weights;
	float tex_crops[4];
	void(*texture_load_func)(_anon10*, int, int, float*);
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

struct _anon12
{
	int attack_num;
	sfCldObject* attack_obj[4];
	float attack_dir[4];
	float attack_pos[4];
	BattleHit* attack_hit;
	unsigned int last_id;
	float nohit_time;
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

union sfCldBody
{
	_anon6 obb;
	_anon5 aabb;
	sfOffsetAABB offset_aabb;
	_anon3 line;
	_anon4 sphere;
};

int damage_type_to_se[17];
_anon1 dam_tbl[17];
int dam_type[2];
float stag_time[2];
_anon12 lwork;
int range_data_num;
float total_bak[2];
_PLAYER_WORK playerw[2];
float sg_vector_zero[4];
_anon8 player_battle_work;
float stag_dist;
int stag_hit_num;
float stag_dir[2];
int dam_dir[2];
float dam_pos[4][2];
_anon9 range_data[32];
_GAME_WORK gamew;

int dir_from_origin(BattleAttackKind kind);
void PlayerBattleHitInitLWork();
void PlayerBattleHitSetNoHitTime(float time);
void PlayerBattleHitDecreseNoHitTime();
void PlayerBattleHitRangeClear();
void PlayerBattleHitRangeInit();
void hit_blood(_PLAYER_WORK* p, float* pos, float shock);
int battle_hit(BattleHit* b_hit, int hit_type);
int PlayerBattleHitSearchAttack();
int PlayerBattleHitByType(float damage, int hit_type, float* origin);
void PlayerBattleGetHitPos(float* pos, int player_type, int pos_kind);
float get_floor_height(float* pos, float s_upper, float s_lower);
int PlayerBattleHitHoldSet(int player_type, int pos_kind, float hold_time, float damage);
int PlayerBattleHitSetPos(int player_type, int pos_kind, float* pos);
int PlayerBattleHitGetHoldStatus(int player_type);
int PlayerBattleHitHoldRelease(int player_type);
float PlayerBattleHitRangeProc(int player_type);
float PlayerBattleHitRangeGetTotal(int player_type);
float PlayerBattleHitGetStagDir(int player_type);
float PlayerBattleHitGetStagDist();
float PlayerBattleHitGetStagTime(int player_type);
int PlayerBattleHitGetType(int player_type);
int PlayerBattleHitGetMotion(int player_type);

// 
// Start address: 0x1ea1a0
int dir_from_origin(BattleAttackKind kind)
{
	int ret;
	// Line 214, Address: 0x1ea1a4, Func Offset: 0x4
	// Line 218, Address: 0x1ea1d0, Func Offset: 0x30
	// Line 219, Address: 0x1ea1d4, Func Offset: 0x34
	// Line 222, Address: 0x1ea1d8, Func Offset: 0x38
	// Func End, Address: 0x1ea1e0, Func Offset: 0x40
}

// 
// Start address: 0x1ea1e0
void PlayerBattleHitInitLWork()
{
	// Line 227, Address: 0x1ea1e0, Func Offset: 0
	// Line 228, Address: 0x1ea1e8, Func Offset: 0x8
	// Line 229, Address: 0x1ea1f0, Func Offset: 0x10
	// Line 230, Address: 0x1ea1f8, Func Offset: 0x18
	// Line 231, Address: 0x1ea200, Func Offset: 0x20
	// Line 234, Address: 0x1ea204, Func Offset: 0x24
	// Func End, Address: 0x1ea20c, Func Offset: 0x2c
}

// 
// Start address: 0x1ea210
void PlayerBattleHitSetNoHitTime(float time)
{
	// Line 238, Address: 0x1ea210, Func Offset: 0
	// Line 239, Address: 0x1ea21c, Func Offset: 0xc
	// Line 240, Address: 0x1ea230, Func Offset: 0x20
	// Line 242, Address: 0x1ea250, Func Offset: 0x40
	// Line 245, Address: 0x1ea258, Func Offset: 0x48
	// Func End, Address: 0x1ea268, Func Offset: 0x58
}

// 
// Start address: 0x1ea270
void PlayerBattleHitDecreseNoHitTime()
{
	// Line 258, Address: 0x1ea270, Func Offset: 0
	// Line 259, Address: 0x1ea278, Func Offset: 0x8
	// Line 260, Address: 0x1ea288, Func Offset: 0x18
	// Line 259, Address: 0x1ea290, Func Offset: 0x20
	// Line 260, Address: 0x1ea298, Func Offset: 0x28
	// Line 261, Address: 0x1ea2a4, Func Offset: 0x34
	// Line 264, Address: 0x1ea2b0, Func Offset: 0x40
	// Func End, Address: 0x1ea2bc, Func Offset: 0x4c
}

// 
// Start address: 0x1ea2c0
void PlayerBattleHitRangeClear()
{
	// Line 269, Address: 0x1ea2c0, Func Offset: 0
	// Line 273, Address: 0x1ea2c4, Func Offset: 0x4
	// Func End, Address: 0x1ea2cc, Func Offset: 0xc
}

// 
// Start address: 0x1ea2d0
void PlayerBattleHitRangeInit()
{
	// Line 278, Address: 0x1ea2d0, Func Offset: 0
	// Line 279, Address: 0x1ea2d8, Func Offset: 0x8
	// Line 282, Address: 0x1ea2e4, Func Offset: 0x14
	// Func End, Address: 0x1ea2ec, Func Offset: 0x1c
}

// 
// Start address: 0x1ea2f0
void hit_blood(_PLAYER_WORK* p, float* pos, float shock)
{
	float b_pos[4];
	float b_dir[4];
	float speed[4];
	float h;
	float rad;
	// Line 307, Address: 0x1ea2f0, Func Offset: 0
	// Line 314, Address: 0x1ea2f8, Func Offset: 0x8
	// Line 315, Address: 0x1ea304, Func Offset: 0x14
	// Line 316, Address: 0x1ea308, Func Offset: 0x18
	// Line 317, Address: 0x1ea328, Func Offset: 0x38
	// Line 318, Address: 0x1ea330, Func Offset: 0x40
	// Line 319, Address: 0x1ea348, Func Offset: 0x58
	// Line 321, Address: 0x1ea350, Func Offset: 0x60
	// Line 320, Address: 0x1ea354, Func Offset: 0x64
	// Line 321, Address: 0x1ea358, Func Offset: 0x68
	// Line 322, Address: 0x1ea370, Func Offset: 0x80
	// Line 324, Address: 0x1ea39c, Func Offset: 0xac
	// Line 325, Address: 0x1ea3b4, Func Offset: 0xc4
	// Line 327, Address: 0x1ea3c8, Func Offset: 0xd8
	// Line 328, Address: 0x1ea3ec, Func Offset: 0xfc
	// Line 331, Address: 0x1ea3f0, Func Offset: 0x100
	// Line 332, Address: 0x1ea404, Func Offset: 0x114
	// Line 333, Address: 0x1ea414, Func Offset: 0x124
	// Line 337, Address: 0x1ea42c, Func Offset: 0x13c
	// Func End, Address: 0x1ea438, Func Offset: 0x148
}

// 
// Start address: 0x1ea440
int battle_hit(BattleHit* b_hit, int hit_type)
{
	_PLAYER_WORK* p;
	float pos[4];
	int r;
	float atn;
	float bh_dir[4];
	int from;
	int dir_is;
	float shock;
	// Line 340, Address: 0x1ea440, Func Offset: 0
	// Line 347, Address: 0x1ea444, Func Offset: 0x4
	// Line 340, Address: 0x1ea448, Func Offset: 0x8
	// Line 341, Address: 0x1ea464, Func Offset: 0x24
	// Line 340, Address: 0x1ea468, Func Offset: 0x28
	// Line 347, Address: 0x1ea46c, Func Offset: 0x2c
	// Line 348, Address: 0x1ea490, Func Offset: 0x50
	// Line 352, Address: 0x1ea498, Func Offset: 0x58
	// Line 354, Address: 0x1ea4a0, Func Offset: 0x60
	// Line 355, Address: 0x1ea4ac, Func Offset: 0x6c
	// Line 356, Address: 0x1ea4c0, Func Offset: 0x80
	// Line 360, Address: 0x1ea4c4, Func Offset: 0x84
	// Line 361, Address: 0x1ea4dc, Func Offset: 0x9c
	// Line 362, Address: 0x1ea4e8, Func Offset: 0xa8
	// Line 368, Address: 0x1ea4f8, Func Offset: 0xb8
	// Line 369, Address: 0x1ea514, Func Offset: 0xd4
	// Line 372, Address: 0x1ea520, Func Offset: 0xe0
	// Line 374, Address: 0x1ea530, Func Offset: 0xf0
	// Line 376, Address: 0x1ea550, Func Offset: 0x110
	// Line 378, Address: 0x1ea558, Func Offset: 0x118
	// Line 379, Address: 0x1ea564, Func Offset: 0x124
	// Line 380, Address: 0x1ea568, Func Offset: 0x128
	// Line 381, Address: 0x1ea570, Func Offset: 0x130
	// Line 380, Address: 0x1ea574, Func Offset: 0x134
	// Line 381, Address: 0x1ea57c, Func Offset: 0x13c
	// Line 380, Address: 0x1ea580, Func Offset: 0x140
	// Line 381, Address: 0x1ea584, Func Offset: 0x144
	// Line 385, Address: 0x1ea590, Func Offset: 0x150
	// Line 381, Address: 0x1ea594, Func Offset: 0x154
	// Line 382, Address: 0x1ea598, Func Offset: 0x158
	// Line 385, Address: 0x1ea59c, Func Offset: 0x15c
	// Line 393, Address: 0x1ea5a4, Func Offset: 0x164
	// Line 397, Address: 0x1ea5e8, Func Offset: 0x1a8
	// Line 393, Address: 0x1ea5ec, Func Offset: 0x1ac
	// Line 397, Address: 0x1ea5f8, Func Offset: 0x1b8
	// Line 399, Address: 0x1ea610, Func Offset: 0x1d0
	// Line 402, Address: 0x1ea640, Func Offset: 0x200
	// Line 406, Address: 0x1ea658, Func Offset: 0x218
	// Line 407, Address: 0x1ea670, Func Offset: 0x230
	// Line 408, Address: 0x1ea680, Func Offset: 0x240
	// Line 412, Address: 0x1ea690, Func Offset: 0x250
	// Line 413, Address: 0x1ea694, Func Offset: 0x254
	// Line 415, Address: 0x1ea698, Func Offset: 0x258
	// Line 416, Address: 0x1ea6a0, Func Offset: 0x260
	// Line 419, Address: 0x1ea6a4, Func Offset: 0x264
	// Line 421, Address: 0x1ea6ac, Func Offset: 0x26c
	// Line 422, Address: 0x1ea6b0, Func Offset: 0x270
	// Line 424, Address: 0x1ea6b8, Func Offset: 0x278
	// Line 425, Address: 0x1ea6d4, Func Offset: 0x294
	// Line 427, Address: 0x1ea6d8, Func Offset: 0x298
	// Line 430, Address: 0x1ea6e4, Func Offset: 0x2a4
	// Line 431, Address: 0x1ea6e8, Func Offset: 0x2a8
	// Func End, Address: 0x1ea708, Func Offset: 0x2c8
}

// 
// Start address: 0x1ea710
int PlayerBattleHitSearchAttack()
{
	int ret;
	int hit;
	int i;
	float near_dist;
	BattleHit* b_hit;
	float dist;
	float stmp[4];
	float pos_a[4];
	float pos_p[4];
	unsigned int c_id;
	// Line 435, Address: 0x1ea710, Func Offset: 0
	// Line 440, Address: 0x1ea714, Func Offset: 0x4
	// Line 435, Address: 0x1ea718, Func Offset: 0x8
	// Line 443, Address: 0x1ea71c, Func Offset: 0xc
	// Line 435, Address: 0x1ea720, Func Offset: 0x10
	// Line 440, Address: 0x1ea724, Func Offset: 0x14
	// Line 435, Address: 0x1ea728, Func Offset: 0x18
	// Line 443, Address: 0x1ea72c, Func Offset: 0x1c
	// Line 435, Address: 0x1ea730, Func Offset: 0x20
	// Line 443, Address: 0x1ea734, Func Offset: 0x24
	// Line 435, Address: 0x1ea738, Func Offset: 0x28
	// Line 436, Address: 0x1ea73c, Func Offset: 0x2c
	// Line 440, Address: 0x1ea740, Func Offset: 0x30
	// Line 443, Address: 0x1ea744, Func Offset: 0x34
	// Line 444, Address: 0x1ea74c, Func Offset: 0x3c
	// Line 446, Address: 0x1ea750, Func Offset: 0x40
	// Line 444, Address: 0x1ea754, Func Offset: 0x44
	// Line 446, Address: 0x1ea758, Func Offset: 0x48
	// Line 445, Address: 0x1ea75c, Func Offset: 0x4c
	// Line 446, Address: 0x1ea760, Func Offset: 0x50
	// Line 445, Address: 0x1ea764, Func Offset: 0x54
	// Line 446, Address: 0x1ea768, Func Offset: 0x58
	// Line 447, Address: 0x1ea774, Func Offset: 0x64
	// Line 449, Address: 0x1ea784, Func Offset: 0x74
	// Line 450, Address: 0x1ea790, Func Offset: 0x80
	// Line 452, Address: 0x1ea79c, Func Offset: 0x8c
	// Line 453, Address: 0x1ea7b8, Func Offset: 0xa8
	// Line 454, Address: 0x1ea7c4, Func Offset: 0xb4
	// Line 459, Address: 0x1ea7cc, Func Offset: 0xbc
	// Line 460, Address: 0x1ea7d4, Func Offset: 0xc4
	// Line 461, Address: 0x1ea7e8, Func Offset: 0xd8
	// Line 462, Address: 0x1ea804, Func Offset: 0xf4
	// Line 463, Address: 0x1ea82c, Func Offset: 0x11c
	// Line 465, Address: 0x1ea838, Func Offset: 0x128
	// Line 464, Address: 0x1ea83c, Func Offset: 0x12c
	// Line 465, Address: 0x1ea840, Func Offset: 0x130
	// Line 466, Address: 0x1ea850, Func Offset: 0x140
	// Line 467, Address: 0x1ea860, Func Offset: 0x150
	// Line 469, Address: 0x1ea864, Func Offset: 0x154
	// Line 471, Address: 0x1ea868, Func Offset: 0x158
	// Line 472, Address: 0x1ea870, Func Offset: 0x160
	// Line 473, Address: 0x1ea874, Func Offset: 0x164
	// Line 471, Address: 0x1ea878, Func Offset: 0x168
	// Line 473, Address: 0x1ea884, Func Offset: 0x174
	// Line 475, Address: 0x1ea8a0, Func Offset: 0x190
	// Line 477, Address: 0x1ea8b0, Func Offset: 0x1a0
	// Line 479, Address: 0x1ea8bc, Func Offset: 0x1ac
	// Line 481, Address: 0x1ea918, Func Offset: 0x208
	// Line 483, Address: 0x1ea938, Func Offset: 0x228
	// Line 487, Address: 0x1ea940, Func Offset: 0x230
	// Line 488, Address: 0x1ea944, Func Offset: 0x234
	// Func End, Address: 0x1ea964, Func Offset: 0x254
}

// 
// Start address: 0x1ea970
int PlayerBattleHitByType(float damage, int hit_type, float* origin)
{
	_PLAYER_WORK* p;
	int r;
	float atn;
	// Line 493, Address: 0x1ea970, Func Offset: 0
	// Line 499, Address: 0x1ea974, Func Offset: 0x4
	// Line 493, Address: 0x1ea978, Func Offset: 0x8
	// Line 494, Address: 0x1ea994, Func Offset: 0x24
	// Line 493, Address: 0x1ea998, Func Offset: 0x28
	// Line 494, Address: 0x1ea99c, Func Offset: 0x2c
	// Line 493, Address: 0x1ea9a0, Func Offset: 0x30
	// Line 499, Address: 0x1ea9a4, Func Offset: 0x34
	// Line 500, Address: 0x1ea9c0, Func Offset: 0x50
	// Line 503, Address: 0x1ea9c8, Func Offset: 0x58
	// Line 504, Address: 0x1ea9d8, Func Offset: 0x68
	// Line 512, Address: 0x1ea9e0, Func Offset: 0x70
	// Line 513, Address: 0x1ea9fc, Func Offset: 0x8c
	// Line 512, Address: 0x1eaa00, Func Offset: 0x90
	// Line 513, Address: 0x1eaa04, Func Offset: 0x94
	// Line 515, Address: 0x1eaa20, Func Offset: 0xb0
	// Line 517, Address: 0x1eaa28, Func Offset: 0xb8
	// Line 518, Address: 0x1eaa34, Func Offset: 0xc4
	// Line 519, Address: 0x1eaa38, Func Offset: 0xc8
	// Line 520, Address: 0x1eaa40, Func Offset: 0xd0
	// Line 519, Address: 0x1eaa44, Func Offset: 0xd4
	// Line 520, Address: 0x1eaa4c, Func Offset: 0xdc
	// Line 519, Address: 0x1eaa50, Func Offset: 0xe0
	// Line 520, Address: 0x1eaa54, Func Offset: 0xe4
	// Line 522, Address: 0x1eaa60, Func Offset: 0xf0
	// Line 525, Address: 0x1eaa6c, Func Offset: 0xfc
	// Line 520, Address: 0x1eaa74, Func Offset: 0x104
	// Line 521, Address: 0x1eaa78, Func Offset: 0x108
	// Line 522, Address: 0x1eaa80, Func Offset: 0x110
	// Line 525, Address: 0x1eaa88, Func Offset: 0x118
	// Line 528, Address: 0x1eaa94, Func Offset: 0x124
	// Line 533, Address: 0x1eaac8, Func Offset: 0x158
	// Line 534, Address: 0x1eaadc, Func Offset: 0x16c
	// Line 535, Address: 0x1eaae8, Func Offset: 0x178
	// Line 536, Address: 0x1eaaf4, Func Offset: 0x184
	// Line 537, Address: 0x1eab04, Func Offset: 0x194
	// Line 540, Address: 0x1eab08, Func Offset: 0x198
	// Line 541, Address: 0x1eab0c, Func Offset: 0x19c
	// Line 543, Address: 0x1eab10, Func Offset: 0x1a0
	// Line 544, Address: 0x1eab18, Func Offset: 0x1a8
	// Line 547, Address: 0x1eab1c, Func Offset: 0x1ac
	// Line 549, Address: 0x1eab24, Func Offset: 0x1b4
	// Line 550, Address: 0x1eab28, Func Offset: 0x1b8
	// Line 552, Address: 0x1eab30, Func Offset: 0x1c0
	// Line 553, Address: 0x1eab4c, Func Offset: 0x1dc
	// Line 555, Address: 0x1eab50, Func Offset: 0x1e0
	// Line 556, Address: 0x1eab58, Func Offset: 0x1e8
	// Func End, Address: 0x1eab7c, Func Offset: 0x20c
}

// 
// Start address: 0x1eab80
void PlayerBattleGetHitPos(float* pos, int player_type, int pos_kind)
{
	_PLAYER_WORK* p;
	sgBone* bone;
	float chst[4];
	float sldr[4];
	// Line 591, Address: 0x1eab80, Func Offset: 0
	// Line 592, Address: 0x1eab84, Func Offset: 0x4
	// Line 591, Address: 0x1eab88, Func Offset: 0x8
	// Line 592, Address: 0x1eab8c, Func Offset: 0xc
	// Line 591, Address: 0x1eab90, Func Offset: 0x10
	// Line 592, Address: 0x1eab94, Func Offset: 0x14
	// Line 591, Address: 0x1eab98, Func Offset: 0x18
	// Line 592, Address: 0x1eab9c, Func Offset: 0x1c
	// Line 595, Address: 0x1eaba4, Func Offset: 0x24
	// Line 597, Address: 0x1eabd0, Func Offset: 0x50
	// Line 598, Address: 0x1eabdc, Func Offset: 0x5c
	// Line 599, Address: 0x1eabe4, Func Offset: 0x64
	// Line 603, Address: 0x1eabe8, Func Offset: 0x68
	// Line 604, Address: 0x1eabf4, Func Offset: 0x74
	// Line 605, Address: 0x1eac00, Func Offset: 0x80
	// Line 606, Address: 0x1eac0c, Func Offset: 0x8c
	// Line 607, Address: 0x1eac18, Func Offset: 0x98
	// Line 608, Address: 0x1eac30, Func Offset: 0xb0
	// Line 610, Address: 0x1eac4c, Func Offset: 0xcc
	// Line 611, Address: 0x1eac54, Func Offset: 0xd4
	// Line 612, Address: 0x1eac58, Func Offset: 0xd8
	// Line 613, Address: 0x1eac64, Func Offset: 0xe4
	// Line 614, Address: 0x1eac70, Func Offset: 0xf0
	// Line 616, Address: 0x1eac78, Func Offset: 0xf8
	// Line 617, Address: 0x1eac84, Func Offset: 0x104
	// Line 618, Address: 0x1eac90, Func Offset: 0x110
	// Line 620, Address: 0x1eac98, Func Offset: 0x118
	// Line 621, Address: 0x1eaca4, Func Offset: 0x124
	// Line 622, Address: 0x1eacb0, Func Offset: 0x130
	// Line 624, Address: 0x1eacb8, Func Offset: 0x138
	// Line 625, Address: 0x1eacc4, Func Offset: 0x144
	// Line 630, Address: 0x1eacd0, Func Offset: 0x150
	// Func End, Address: 0x1eace4, Func Offset: 0x164
}

// 
// Start address: 0x1eacf0
float get_floor_height(float* pos, float s_upper, float s_lower)
{
	_anon3 line;
	_anon2 plane;
	int hit;
	float tmp[4];
	int res;
	// Line 634, Address: 0x1eacf0, Func Offset: 0
	// Line 646, Address: 0x1eacf8, Func Offset: 0x8
	// Line 640, Address: 0x1eacfc, Func Offset: 0xc
	// Line 641, Address: 0x1ead04, Func Offset: 0x14
	// Line 642, Address: 0x1ead10, Func Offset: 0x20
	// Line 643, Address: 0x1ead18, Func Offset: 0x28
	// Line 644, Address: 0x1ead20, Func Offset: 0x30
	// Line 645, Address: 0x1ead2c, Func Offset: 0x3c
	// Line 646, Address: 0x1ead34, Func Offset: 0x44
	// Line 647, Address: 0x1ead3c, Func Offset: 0x4c
	// Line 650, Address: 0x1ead44, Func Offset: 0x54
	// Line 653, Address: 0x1ead50, Func Offset: 0x60
	// Line 659, Address: 0x1ead58, Func Offset: 0x68
	// Line 660, Address: 0x1ead6c, Func Offset: 0x7c
	// Line 662, Address: 0x1ead70, Func Offset: 0x80
	// Line 663, Address: 0x1ead90, Func Offset: 0xa0
	// Func End, Address: 0x1ead9c, Func Offset: 0xac
}

// 
// Start address: 0x1eada0
int PlayerBattleHitHoldSet(int player_type, int pos_kind, float hold_time, float damage)
{
	_PLAYER_WORK* p;
	int r;
	sfObj* o;
	float pos_e[4];
	float vx;
	float vz;
	float atn;
	float b_pos[4];
	float b_dir[4];
	sgBone* bone;
	float chst[4];
	float sldr[4];
	float d;
	float pls[4];
	// Line 794, Address: 0x1eada0, Func Offset: 0
	// Line 795, Address: 0x1eada4, Func Offset: 0x4
	// Line 794, Address: 0x1eada8, Func Offset: 0x8
	// Line 795, Address: 0x1eadac, Func Offset: 0xc
	// Line 794, Address: 0x1eadb0, Func Offset: 0x10
	// Line 795, Address: 0x1eadb4, Func Offset: 0x14
	// Line 794, Address: 0x1eadb8, Func Offset: 0x18
	// Line 795, Address: 0x1eadbc, Func Offset: 0x1c
	// Line 794, Address: 0x1eadc0, Func Offset: 0x20
	// Line 795, Address: 0x1eadc4, Func Offset: 0x24
	// Line 794, Address: 0x1eadc8, Func Offset: 0x28
	// Line 795, Address: 0x1eadcc, Func Offset: 0x2c
	// Line 794, Address: 0x1eadd0, Func Offset: 0x30
	// Line 799, Address: 0x1eade0, Func Offset: 0x40
	// Line 801, Address: 0x1eae40, Func Offset: 0xa0
	// Line 805, Address: 0x1eae48, Func Offset: 0xa8
	// Line 806, Address: 0x1eae60, Func Offset: 0xc0
	// Line 811, Address: 0x1eae68, Func Offset: 0xc8
	// Line 814, Address: 0x1eae80, Func Offset: 0xe0
	// Line 815, Address: 0x1eae88, Func Offset: 0xe8
	// Line 820, Address: 0x1eae90, Func Offset: 0xf0
	// Line 821, Address: 0x1eae9c, Func Offset: 0xfc
	// Line 822, Address: 0x1eaea4, Func Offset: 0x104
	// Line 821, Address: 0x1eaeac, Func Offset: 0x10c
	// Line 823, Address: 0x1eaeb0, Func Offset: 0x110
	// Line 836, Address: 0x1eaeb8, Func Offset: 0x118
	// Line 837, Address: 0x1eaed0, Func Offset: 0x130
	// Line 839, Address: 0x1eaed8, Func Offset: 0x138
	// Line 841, Address: 0x1eaf00, Func Offset: 0x160
	// Line 844, Address: 0x1eaf08, Func Offset: 0x168
	// Line 846, Address: 0x1eaf24, Func Offset: 0x184
	// Line 851, Address: 0x1eaf28, Func Offset: 0x188
	// Line 853, Address: 0x1eaf38, Func Offset: 0x198
	// Line 854, Address: 0x1eaf40, Func Offset: 0x1a0
	// Line 855, Address: 0x1eaf44, Func Offset: 0x1a4
	// Line 856, Address: 0x1eaf48, Func Offset: 0x1a8
	// Line 860, Address: 0x1eaf4c, Func Offset: 0x1ac
	// Line 861, Address: 0x1eaf54, Func Offset: 0x1b4
	// Line 862, Address: 0x1eaf64, Func Offset: 0x1c4
	// Line 863, Address: 0x1eaf70, Func Offset: 0x1d0
	// Line 865, Address: 0x1eaf78, Func Offset: 0x1d8
	// Line 867, Address: 0x1eaf84, Func Offset: 0x1e4
	// Line 869, Address: 0x1eaf90, Func Offset: 0x1f0
	// Line 870, Address: 0x1eaf9c, Func Offset: 0x1fc
	// Line 878, Address: 0x1eafa0, Func Offset: 0x200
	// Line 879, Address: 0x1eafd4, Func Offset: 0x234
	// Line 883, Address: 0x1eafd8, Func Offset: 0x238
	// Line 884, Address: 0x1eafe4, Func Offset: 0x244
	// Line 885, Address: 0x1eaff0, Func Offset: 0x250
	// Line 886, Address: 0x1eaffc, Func Offset: 0x25c
	// Line 887, Address: 0x1eb008, Func Offset: 0x268
	// Line 888, Address: 0x1eb024, Func Offset: 0x284
	// Line 890, Address: 0x1eb04c, Func Offset: 0x2ac
	// Line 891, Address: 0x1eb054, Func Offset: 0x2b4
	// Line 892, Address: 0x1eb058, Func Offset: 0x2b8
	// Line 893, Address: 0x1eb064, Func Offset: 0x2c4
	// Line 894, Address: 0x1eb070, Func Offset: 0x2d0
	// Line 896, Address: 0x1eb078, Func Offset: 0x2d8
	// Line 897, Address: 0x1eb080, Func Offset: 0x2e0
	// Line 898, Address: 0x1eb08c, Func Offset: 0x2ec
	// Line 899, Address: 0x1eb094, Func Offset: 0x2f4
	// Line 900, Address: 0x1eb098, Func Offset: 0x2f8
	// Line 901, Address: 0x1eb0a4, Func Offset: 0x304
	// Line 902, Address: 0x1eb0b0, Func Offset: 0x310
	// Line 904, Address: 0x1eb0b8, Func Offset: 0x318
	// Line 905, Address: 0x1eb0c4, Func Offset: 0x324
	// Line 911, Address: 0x1eb0d0, Func Offset: 0x330
	// Line 912, Address: 0x1eb100, Func Offset: 0x360
	// Line 915, Address: 0x1eb108, Func Offset: 0x368
	// Line 917, Address: 0x1eb110, Func Offset: 0x370
	// Line 916, Address: 0x1eb114, Func Offset: 0x374
	// Line 917, Address: 0x1eb118, Func Offset: 0x378
	// Line 918, Address: 0x1eb124, Func Offset: 0x384
	// Line 919, Address: 0x1eb12c, Func Offset: 0x38c
	// Line 918, Address: 0x1eb138, Func Offset: 0x398
	// Line 919, Address: 0x1eb13c, Func Offset: 0x39c
	// Line 920, Address: 0x1eb15c, Func Offset: 0x3bc
	// Line 922, Address: 0x1eb17c, Func Offset: 0x3dc
	// Line 923, Address: 0x1eb198, Func Offset: 0x3f8
	// Line 927, Address: 0x1eb1b4, Func Offset: 0x414
	// Line 929, Address: 0x1eb1bc, Func Offset: 0x41c
	// Line 931, Address: 0x1eb1c4, Func Offset: 0x424
	// Line 932, Address: 0x1eb1cc, Func Offset: 0x42c
	// Line 934, Address: 0x1eb1d0, Func Offset: 0x430
	// Line 935, Address: 0x1eb1d8, Func Offset: 0x438
	// Func End, Address: 0x1eb1fc, Func Offset: 0x45c
}

// 
// Start address: 0x1eb200
int PlayerBattleHitSetPos(int player_type, int pos_kind, float* pos)
{
	_PLAYER_WORK* p;
	float trans[4];
	float tmp1[4];
	float tmp2[4];
	sgBone* bone;
	float pos_n[4];
	_anon3 line;
	int hit;
	float dist;
	float h_pre;
	float h_nex;
	float p_len;
	float sb[4];
	float pos_l[4];
	float pos_n[4];
	float pos_r[4];
	// Line 955, Address: 0x1eb200, Func Offset: 0
	// Line 956, Address: 0x1eb204, Func Offset: 0x4
	// Line 955, Address: 0x1eb208, Func Offset: 0x8
	// Line 956, Address: 0x1eb20c, Func Offset: 0xc
	// Line 955, Address: 0x1eb210, Func Offset: 0x10
	// Line 956, Address: 0x1eb214, Func Offset: 0x14
	// Line 955, Address: 0x1eb218, Func Offset: 0x18
	// Line 956, Address: 0x1eb21c, Func Offset: 0x1c
	// Line 962, Address: 0x1eb224, Func Offset: 0x24
	// Line 955, Address: 0x1eb228, Func Offset: 0x28
	// Line 956, Address: 0x1eb22c, Func Offset: 0x2c
	// Line 962, Address: 0x1eb230, Func Offset: 0x30
	// Line 963, Address: 0x1eb258, Func Offset: 0x58
	// Line 966, Address: 0x1eb260, Func Offset: 0x60
	// Line 967, Address: 0x1eb284, Func Offset: 0x84
	// Line 968, Address: 0x1eb288, Func Offset: 0x88
	// Line 969, Address: 0x1eb294, Func Offset: 0x94
	// Line 970, Address: 0x1eb2a0, Func Offset: 0xa0
	// Line 971, Address: 0x1eb2ac, Func Offset: 0xac
	// Line 972, Address: 0x1eb2b8, Func Offset: 0xb8
	// Line 973, Address: 0x1eb2d4, Func Offset: 0xd4
	// Line 974, Address: 0x1eb2f8, Func Offset: 0xf8
	// Line 976, Address: 0x1eb300, Func Offset: 0x100
	// Line 977, Address: 0x1eb30c, Func Offset: 0x10c
	// Line 978, Address: 0x1eb318, Func Offset: 0x118
	// Line 980, Address: 0x1eb320, Func Offset: 0x120
	// Line 981, Address: 0x1eb32c, Func Offset: 0x12c
	// Line 982, Address: 0x1eb338, Func Offset: 0x138
	// Line 984, Address: 0x1eb340, Func Offset: 0x140
	// Line 985, Address: 0x1eb34c, Func Offset: 0x14c
	// Line 994, Address: 0x1eb358, Func Offset: 0x158
	// Line 995, Address: 0x1eb370, Func Offset: 0x170
	// Line 996, Address: 0x1eb38c, Func Offset: 0x18c
	// Line 997, Address: 0x1eb39c, Func Offset: 0x19c
	// Line 998, Address: 0x1eb3ac, Func Offset: 0x1ac
	// Line 999, Address: 0x1eb3b0, Func Offset: 0x1b0
	// Line 998, Address: 0x1eb3b4, Func Offset: 0x1b4
	// Line 999, Address: 0x1eb3bc, Func Offset: 0x1bc
	// Line 998, Address: 0x1eb3c0, Func Offset: 0x1c0
	// Line 999, Address: 0x1eb3c8, Func Offset: 0x1c8
	// Line 1005, Address: 0x1eb3d0, Func Offset: 0x1d0
	// Line 1001, Address: 0x1eb3d4, Func Offset: 0x1d4
	// Line 1005, Address: 0x1eb3d8, Func Offset: 0x1d8
	// Line 1001, Address: 0x1eb3e0, Func Offset: 0x1e0
	// Line 1005, Address: 0x1eb3e4, Func Offset: 0x1e4
	// Line 1006, Address: 0x1eb3f4, Func Offset: 0x1f4
	// Line 1007, Address: 0x1eb434, Func Offset: 0x234
	// Line 1008, Address: 0x1eb43c, Func Offset: 0x23c
	// Line 1007, Address: 0x1eb444, Func Offset: 0x244
	// Line 1008, Address: 0x1eb448, Func Offset: 0x248
	// Line 1009, Address: 0x1eb464, Func Offset: 0x264
	// Line 1012, Address: 0x1eb480, Func Offset: 0x280
	// Line 1013, Address: 0x1eb488, Func Offset: 0x288
	// Line 1014, Address: 0x1eb490, Func Offset: 0x290
	// Line 1016, Address: 0x1eb494, Func Offset: 0x294
	// Line 1014, Address: 0x1eb498, Func Offset: 0x298
	// Line 1016, Address: 0x1eb49c, Func Offset: 0x29c
	// Line 1017, Address: 0x1eb4a4, Func Offset: 0x2a4
	// Line 1019, Address: 0x1eb4a8, Func Offset: 0x2a8
	// Line 1020, Address: 0x1eb4b8, Func Offset: 0x2b8
	// Line 1021, Address: 0x1eb4c4, Func Offset: 0x2c4
	// Line 1020, Address: 0x1eb4cc, Func Offset: 0x2cc
	// Line 1021, Address: 0x1eb4d4, Func Offset: 0x2d4
	// Line 1023, Address: 0x1eb4dc, Func Offset: 0x2dc
	// Line 1022, Address: 0x1eb4e0, Func Offset: 0x2e0
	// Line 1023, Address: 0x1eb4f4, Func Offset: 0x2f4
	// Line 1024, Address: 0x1eb4fc, Func Offset: 0x2fc
	// Line 1025, Address: 0x1eb504, Func Offset: 0x304
	// Line 1027, Address: 0x1eb508, Func Offset: 0x308
	// Line 1025, Address: 0x1eb50c, Func Offset: 0x30c
	// Line 1027, Address: 0x1eb510, Func Offset: 0x310
	// Line 1030, Address: 0x1eb518, Func Offset: 0x318
	// Line 1031, Address: 0x1eb528, Func Offset: 0x328
	// Line 1035, Address: 0x1eb538, Func Offset: 0x338
	// Line 1032, Address: 0x1eb53c, Func Offset: 0x33c
	// Line 1033, Address: 0x1eb548, Func Offset: 0x348
	// Line 1032, Address: 0x1eb554, Func Offset: 0x354
	// Line 1033, Address: 0x1eb558, Func Offset: 0x358
	// Line 1032, Address: 0x1eb55c, Func Offset: 0x35c
	// Line 1035, Address: 0x1eb560, Func Offset: 0x360
	// Line 1036, Address: 0x1eb568, Func Offset: 0x368
	// Line 1037, Address: 0x1eb570, Func Offset: 0x370
	// Line 1039, Address: 0x1eb574, Func Offset: 0x374
	// Line 1037, Address: 0x1eb578, Func Offset: 0x378
	// Line 1039, Address: 0x1eb57c, Func Offset: 0x37c
	// Line 1040, Address: 0x1eb584, Func Offset: 0x384
	// Line 1045, Address: 0x1eb588, Func Offset: 0x388
	// Line 1046, Address: 0x1eb598, Func Offset: 0x398
	// Line 1045, Address: 0x1eb5a4, Func Offset: 0x3a4
	// Line 1046, Address: 0x1eb5a8, Func Offset: 0x3a8
	// Line 1047, Address: 0x1eb5b0, Func Offset: 0x3b0
	// Line 1050, Address: 0x1eb5f8, Func Offset: 0x3f8
	// Line 1052, Address: 0x1eb600, Func Offset: 0x400
	// Line 1053, Address: 0x1eb60c, Func Offset: 0x40c
	// Line 1056, Address: 0x1eb610, Func Offset: 0x410
	// Line 1059, Address: 0x1eb62c, Func Offset: 0x42c
	// Line 1060, Address: 0x1eb64c, Func Offset: 0x44c
	// Line 1061, Address: 0x1eb670, Func Offset: 0x470
	// Line 1062, Address: 0x1eb688, Func Offset: 0x488
	// Line 1064, Address: 0x1eb68c, Func Offset: 0x48c
	// Line 1062, Address: 0x1eb690, Func Offset: 0x490
	// Line 1064, Address: 0x1eb694, Func Offset: 0x494
	// Line 1066, Address: 0x1eb69c, Func Offset: 0x49c
	// Line 1077, Address: 0x1eb6a0, Func Offset: 0x4a0
	// Line 1078, Address: 0x1eb6b8, Func Offset: 0x4b8
	// Line 1079, Address: 0x1eb6d4, Func Offset: 0x4d4
	// Line 1080, Address: 0x1eb6e4, Func Offset: 0x4e4
	// Line 1081, Address: 0x1eb6e8, Func Offset: 0x4e8
	// Line 1080, Address: 0x1eb6f0, Func Offset: 0x4f0
	// Line 1081, Address: 0x1eb6f4, Func Offset: 0x4f4
	// Line 1082, Address: 0x1eb6fc, Func Offset: 0x4fc
	// Line 1083, Address: 0x1eb70c, Func Offset: 0x50c
	// Line 1086, Address: 0x1eb710, Func Offset: 0x510
	// Line 1083, Address: 0x1eb718, Func Offset: 0x518
	// Line 1084, Address: 0x1eb71c, Func Offset: 0x51c
	// Line 1085, Address: 0x1eb724, Func Offset: 0x524
	// Line 1086, Address: 0x1eb72c, Func Offset: 0x52c
	// Line 1090, Address: 0x1eb734, Func Offset: 0x534
	// Line 1091, Address: 0x1eb738, Func Offset: 0x538
	// Func End, Address: 0x1eb750, Func Offset: 0x550
}

// 
// Start address: 0x1eb750
int PlayerBattleHitGetHoldStatus(int player_type)
{
	int ret;
	// Line 1113, Address: 0x1eb750, Func Offset: 0
	// Line 1114, Address: 0x1eb784, Func Offset: 0x34
	// Line 1116, Address: 0x1eb788, Func Offset: 0x38
	// Line 1119, Address: 0x1eb790, Func Offset: 0x40
	// Line 1126, Address: 0x1eb798, Func Offset: 0x48
	// Func End, Address: 0x1eb7a0, Func Offset: 0x50
}

// 
// Start address: 0x1eb7a0
int PlayerBattleHitHoldRelease(int player_type)
{
	_PLAYER_WORK* p;
	// Line 1170, Address: 0x1eb7a0, Func Offset: 0
	// Line 1172, Address: 0x1eb7b8, Func Offset: 0x18
	// Line 1173, Address: 0x1eb7d8, Func Offset: 0x38
	// Line 1175, Address: 0x1eb7e0, Func Offset: 0x40
	// Line 1178, Address: 0x1eb7e8, Func Offset: 0x48
	// Func End, Address: 0x1eb7f0, Func Offset: 0x50
}

// 
// Start address: 0x1eb7f0
float PlayerBattleHitRangeProc(int player_type)
{
	int i;
	float total;
	_PLAYER_WORK* p;
	float xx;
	float yy;
	float zz;
	float r;
	// Line 1209, Address: 0x1eb7f0, Func Offset: 0
	// Line 1212, Address: 0x1eb80c, Func Offset: 0x1c
	// Line 1213, Address: 0x1eb814, Func Offset: 0x24
	// Line 1216, Address: 0x1eb820, Func Offset: 0x30
	// Line 1215, Address: 0x1eb824, Func Offset: 0x34
	// Line 1216, Address: 0x1eb828, Func Offset: 0x38
	// Line 1221, Address: 0x1eb84c, Func Offset: 0x5c
	// Line 1222, Address: 0x1eb850, Func Offset: 0x60
	// Line 1223, Address: 0x1eb854, Func Offset: 0x64
	// Line 1224, Address: 0x1eb858, Func Offset: 0x68
	// Line 1221, Address: 0x1eb85c, Func Offset: 0x6c
	// Line 1222, Address: 0x1eb860, Func Offset: 0x70
	// Line 1225, Address: 0x1eb864, Func Offset: 0x74
	// Line 1223, Address: 0x1eb870, Func Offset: 0x80
	// Line 1225, Address: 0x1eb874, Func Offset: 0x84
	// Line 1226, Address: 0x1eb888, Func Offset: 0x98
	// Line 1228, Address: 0x1eb890, Func Offset: 0xa0
	// Line 1230, Address: 0x1eb8a0, Func Offset: 0xb0
	// Line 1231, Address: 0x1eb8b4, Func Offset: 0xc4
	// Line 1232, Address: 0x1eb8b8, Func Offset: 0xc8
	// Func End, Address: 0x1eb8c0, Func Offset: 0xd0
}

// 
// Start address: 0x1eb8c0
float PlayerBattleHitRangeGetTotal(int player_type)
{
	// Line 1236, Address: 0x1eb8c0, Func Offset: 0
	// Line 1237, Address: 0x1eb8d0, Func Offset: 0x10
	// Func End, Address: 0x1eb8d8, Func Offset: 0x18
}

// 
// Start address: 0x1eb8e0
float PlayerBattleHitGetStagDir(int player_type)
{
	// Line 1246, Address: 0x1eb8e0, Func Offset: 0
	// Line 1247, Address: 0x1eb8f0, Func Offset: 0x10
	// Func End, Address: 0x1eb8f8, Func Offset: 0x18
}

// 
// Start address: 0x1eb900
float PlayerBattleHitGetStagDist()
{
	// Line 1254, Address: 0x1eb900, Func Offset: 0
	// Line 1256, Address: 0x1eb904, Func Offset: 0x4
	// Func End, Address: 0x1eb90c, Func Offset: 0xc
}

// 
// Start address: 0x1eb910
float PlayerBattleHitGetStagTime(int player_type)
{
	float mult;
	// Line 1259, Address: 0x1eb910, Func Offset: 0
	// Line 1261, Address: 0x1eb934, Func Offset: 0x24
	// Line 1262, Address: 0x1eb94c, Func Offset: 0x3c
	// Line 1266, Address: 0x1eb960, Func Offset: 0x50
	// Line 1267, Address: 0x1eb984, Func Offset: 0x74
	// Line 1269, Address: 0x1eb998, Func Offset: 0x88
	// Line 1270, Address: 0x1eb9ac, Func Offset: 0x9c
	// Line 1272, Address: 0x1eb9b0, Func Offset: 0xa0
	// Line 1273, Address: 0x1eb9b8, Func Offset: 0xa8
	// Func End, Address: 0x1eb9d0, Func Offset: 0xc0
}

// 
// Start address: 0x1eb9d0
int PlayerBattleHitGetType(int player_type)
{
	// Line 1278, Address: 0x1eb9d0, Func Offset: 0
	// Line 1279, Address: 0x1eb9e0, Func Offset: 0x10
	// Func End, Address: 0x1eb9e8, Func Offset: 0x18
}

// 
// Start address: 0x1eb9f0
int PlayerBattleHitGetMotion(int player_type)
{
	// Line 1291, Address: 0x1eb9f0, Func Offset: 0
	// Line 1299, Address: 0x1eba54, Func Offset: 0x64
	// Func End, Address: 0x1eba5c, Func Offset: 0x6c
}

