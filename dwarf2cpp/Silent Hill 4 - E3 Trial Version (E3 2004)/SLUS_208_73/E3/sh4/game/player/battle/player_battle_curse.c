typedef union _anon0;
typedef struct sgIKHandle;
typedef struct _EventDriver;
typedef struct sfObj;
typedef struct sfCldPart;
typedef enum _enum : unsigned char;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef enum GameItem : unsigned char;
typedef struct _anon4;
typedef struct sgBone;
typedef struct _anon5;
typedef struct _anon6;
typedef union _anon7;
typedef struct _PLAYER_WORK;
typedef struct _anon8;
typedef struct sgAnime;
typedef struct sfCharacter;
typedef struct _anon9;
typedef struct _GAME_WORK;
typedef struct sfCldObject;
typedef struct sgQTNode;
typedef struct _anon10;
typedef struct sgSVModel;
typedef struct _anon11;
typedef struct _anon12;
typedef enum sgIKSolveResult : unsigned char;
typedef struct sgQTObject;
typedef struct sfOffsetAABB;
typedef union sfCldBody;

typedef int(*type_0)(sfObj*);
typedef void(*type_1)(sfObj*);
typedef int(*type_3)(sfObj*);
typedef int(*type_5)(sfObj*);
typedef int(*type_6)(sfObj*);
typedef int(*type_7)(sfObj*);
typedef void(*type_16)(sgAnime*, int);
typedef void(*type_34)(_anon10*, int, int, float*);
typedef void(*type_36)(sfObj*);
typedef sgIKSolveResult(*type_43)();

typedef _anon0 type_2[6];
typedef unsigned char type_4[3];
typedef _anon0 type_8[6];
typedef _anon3 type_9[4];
typedef _anon4 type_10[32];
typedef _anon7 type_11[0];
typedef _anon0 type_12[4];
typedef _anon4 type_13[32];
typedef void* type_14[4];
typedef int type_15[1];
typedef int type_17[1];
typedef float type_18[4];
typedef int type_19[1];
typedef unsigned char type_20[4];
typedef _anon0 type_21[6];
typedef int type_22[1];
typedef int type_23[1];
typedef float type_24[4];
typedef int type_25[1];
typedef float type_26[4];
typedef float type_27[4][4];
typedef sfCldPart* type_28[6];
typedef unsigned char type_29[3];
typedef int type_30[1];
typedef _anon9 type_31[32];
typedef _anon9 type_32[32];
typedef _anon0 type_33[6];
typedef _anon0 type_35[256];
typedef short type_37[2];
typedef float type_38[4][2];
typedef unsigned short type_39[2];
typedef char type_40[4];
typedef unsigned char type_41[4];
typedef _PLAYER_WORK type_42[2];
typedef float type_44[1];
typedef int type_45[1];

union _anon0
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

struct _EventDriver
{
	int evnum;
	int(*trgchk)(sfObj*);
	int(*init)(sfObj*);
	int(*exec)(sfObj*);
	int(*draw)(sfObj*);
	int(*end)(sfObj*);
	unsigned int* file;
	_anon0 val[4];
};

struct sfObj
{
	_anon0 fwork[256];
	_anon0* work;
	void(*func)(sfObj*);
	_anon0* work_pt0;
	_anon0* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon0* sys_work;
	_anon0* scene_work;
	_anon0* event_work;
	_anon0* objhit_work;
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
	HOLY_DATA_TYPE_NONE,
	HOLY_DATA_TYPE_CHRISM,
	HOLY_DATA_TYPE_CANDLE,
	HOLY_DATA_TYPE_PRAYER,
	HOLY_DATA_TYPE_DMY
};

struct _anon1
{
	float start[4];
	float end[4];
};

struct _anon2
{
	float center[4];
	float radius;
};

struct _anon3
{
	unsigned char next_offset;
	unsigned char flags;
	short id;
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

struct _anon4
{
	_enum type;
	sfObj* obj;
	float center[4];
	float mult;
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

struct _anon5
{
	float bmin[4];
	float bmax[4];
};

struct _anon6
{
	_anon7 vertex[0];
};

union _anon7
{
	float node[4];
	_anon3 data[4];
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
	_anon12* anim_ctrl;
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

struct _anon8
{
	float mat[4][4];
	float half_w[4];
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

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon11 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
};

struct _anon9
{
	float center[4];
	float range;
	float c_damage;
	int mode;
	float red_dist;
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

struct sgQTNode
{
	int dummy;
};

struct _anon10
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

struct _anon12
{
	int dummy;
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

struct sgQTObject
{
	_anon2 bounding_ball;
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
	_anon8 obb;
	_anon5 aabb;
	sfOffsetAABB offset_aabb;
	_anon1 line;
	_anon2 sphere;
};

int scene_cnt;
float spot_max;
float red_current;
float red_pow;
float medal_total;
float nodist_total;
int red_mode;
float spot_total;
int spot_data_num_bak;
int spot_data_num;
int holy_data_num;
float red_dist;
_anon9 spot_data[32];
_GAME_WORK gamew;
int saint_pow;
_PLAYER_WORK playerw[2];
_anon4 holy_data[32];
_anon9 spot_bak[32];
float max_pos[4];
float sg_vector_zero[4];
int holy_data_num_real;
_anon4 holy_data_real[32];
int curse_step;
_anon0 damage_msg[6];
_anon0 scenein_msg[6];
_anon0 medaluse_msg[6];
_anon0 candleuse_msg[6];
_EventDriver damage_event;
_EventDriver scenein_event;
_EventDriver medaluse_event;
_EventDriver candleuse_event;

void PlayerCurseInitScene();
void PlayerCurseSpotClear();
void PlayerCurseHolyClear();
void PlayerCurseSetReduceMode(float start_dist);
float PlayerCurseSetDamageSpot(float* center, float range, float c_damage);
void set_holy(float* center, _enum type, float mult, sfObj* obj);
void PlayerCurseSetHoly(float* center, _enum type, float mult, sfObj* obj);
float PlayerCurseDamageSpotProc(_PLAYER_WORK* p);
float PlayerCurseGetDamageTotal();
float PlayerCurseGetDamageByPos(float* pos);
float PlayerCurseGetPowerNoDistTotal();
int PlayerCurseGetMaxSpot(float* pos);
void PlayerCurseSetHolyAll();
float PlayerCurseGetHolyByPos(float* pos);
float PlayerCurseGetHolyTotal(float* center);
void PlayerCurseSetNoiseFilter();
void PlayerCurseSet2DCurrent(float current);
void PlayerCurseSet2DEffect();
void PlayerCurseStepSet(int step);
int PlayerCurseStepGet();
int room_battle_message_trgchk(sfObj* obj);
void set_event_medaluse();
void set_event_candleuse();
void PlayerCurseSetMessageEvent();

// 
// Start address: 0x2a42a0
void PlayerCurseInitScene()
{
	// Line 131, Address: 0x2a42a0, Func Offset: 0
	// Line 132, Address: 0x2a42a4, Func Offset: 0x4
	// Line 131, Address: 0x2a42a8, Func Offset: 0x8
	// Line 132, Address: 0x2a42ac, Func Offset: 0xc
	// Line 133, Address: 0x2a42b0, Func Offset: 0x10
	// Line 134, Address: 0x2a42b8, Func Offset: 0x18
	// Line 135, Address: 0x2a42c0, Func Offset: 0x20
	// Line 136, Address: 0x2a42c4, Func Offset: 0x24
	// Line 137, Address: 0x2a42cc, Func Offset: 0x2c
	// Line 140, Address: 0x2a42d4, Func Offset: 0x34
	// Func End, Address: 0x2a42e0, Func Offset: 0x40
}

// 
// Start address: 0x2a42e0
void PlayerCurseSpotClear()
{
	// Line 145, Address: 0x2a42e0, Func Offset: 0
	// Line 146, Address: 0x2a42e8, Func Offset: 0x8
	// Line 147, Address: 0x2a42f0, Func Offset: 0x10
	// Line 148, Address: 0x2a42f8, Func Offset: 0x18
	// Line 149, Address: 0x2a4300, Func Offset: 0x20
	// Line 150, Address: 0x2a4308, Func Offset: 0x28
	// Line 151, Address: 0x2a4310, Func Offset: 0x30
	// Line 154, Address: 0x2a4314, Func Offset: 0x34
	// Func End, Address: 0x2a431c, Func Offset: 0x3c
}

// 
// Start address: 0x2a4320
void PlayerCurseHolyClear()
{
	// Line 280, Address: 0x2a4320, Func Offset: 0
	// Line 283, Address: 0x2a4324, Func Offset: 0x4
	// Func End, Address: 0x2a432c, Func Offset: 0xc
}

// 
// Start address: 0x2a4330
void PlayerCurseSetReduceMode(float start_dist)
{
	// Line 299, Address: 0x2a4330, Func Offset: 0
	// Line 298, Address: 0x2a4334, Func Offset: 0x4
	// Line 299, Address: 0x2a4338, Func Offset: 0x8
	// Line 298, Address: 0x2a433c, Func Offset: 0xc
	// Line 302, Address: 0x2a4340, Func Offset: 0x10
	// Func End, Address: 0x2a4348, Func Offset: 0x18
}

// 
// Start address: 0x2a4350
float PlayerCurseSetDamageSpot(float* center, float range, float c_damage)
{
	_anon9* ds;
	_PLAYER_WORK* p;
	float holy_damage;
	int nn;
	// Line 321, Address: 0x2a4350, Func Offset: 0
	// Line 325, Address: 0x2a4354, Func Offset: 0x4
	// Line 321, Address: 0x2a4358, Func Offset: 0x8
	// Line 325, Address: 0x2a4374, Func Offset: 0x24
	// Line 326, Address: 0x2a4388, Func Offset: 0x38
	// Line 327, Address: 0x2a438c, Func Offset: 0x3c
	// Line 331, Address: 0x2a4398, Func Offset: 0x48
	// Line 333, Address: 0x2a43a8, Func Offset: 0x58
	// Line 334, Address: 0x2a43b4, Func Offset: 0x64
	// Line 337, Address: 0x2a43b8, Func Offset: 0x68
	// Line 340, Address: 0x2a43f4, Func Offset: 0xa4
	// Line 342, Address: 0x2a43f8, Func Offset: 0xa8
	// Line 343, Address: 0x2a4408, Func Offset: 0xb8
	// Line 345, Address: 0x2a4510, Func Offset: 0x1c0
	// Line 347, Address: 0x2a4518, Func Offset: 0x1c8
	// Line 349, Address: 0x2a45f8, Func Offset: 0x2a8
	// Line 350, Address: 0x2a4600, Func Offset: 0x2b0
	// Line 349, Address: 0x2a460c, Func Offset: 0x2bc
	// Line 350, Address: 0x2a4614, Func Offset: 0x2c4
	// Line 354, Address: 0x2a461c, Func Offset: 0x2cc
	// Line 355, Address: 0x2a4624, Func Offset: 0x2d4
	// Line 356, Address: 0x2a462c, Func Offset: 0x2dc
	// Line 358, Address: 0x2a4640, Func Offset: 0x2f0
	// Line 359, Address: 0x2a4648, Func Offset: 0x2f8
	// Line 360, Address: 0x2a4650, Func Offset: 0x300
	// Line 362, Address: 0x2a4668, Func Offset: 0x318
	// Line 364, Address: 0x2a4674, Func Offset: 0x324
	// Line 366, Address: 0x2a468c, Func Offset: 0x33c
	// Line 368, Address: 0x2a4694, Func Offset: 0x344
	// Line 367, Address: 0x2a4698, Func Offset: 0x348
	// Line 372, Address: 0x2a469c, Func Offset: 0x34c
	// Line 368, Address: 0x2a46a0, Func Offset: 0x350
	// Line 372, Address: 0x2a46a4, Func Offset: 0x354
	// Line 370, Address: 0x2a46a8, Func Offset: 0x358
	// Line 372, Address: 0x2a46ac, Func Offset: 0x35c
	// Line 370, Address: 0x2a46b0, Func Offset: 0x360
	// Line 369, Address: 0x2a46b4, Func Offset: 0x364
	// Line 372, Address: 0x2a46bc, Func Offset: 0x36c
	// Line 369, Address: 0x2a46c0, Func Offset: 0x370
	// Line 372, Address: 0x2a46c8, Func Offset: 0x378
	// Line 373, Address: 0x2a46d0, Func Offset: 0x380
	// Line 375, Address: 0x2a46d8, Func Offset: 0x388
	// Line 376, Address: 0x2a46ec, Func Offset: 0x39c
	// Line 379, Address: 0x2a46f8, Func Offset: 0x3a8
	// Line 384, Address: 0x2a4708, Func Offset: 0x3b8
	// Line 387, Address: 0x2a4720, Func Offset: 0x3d0
	// Line 390, Address: 0x2a4728, Func Offset: 0x3d8
	// Line 388, Address: 0x2a472c, Func Offset: 0x3dc
	// Line 390, Address: 0x2a4730, Func Offset: 0x3e0
	// Line 389, Address: 0x2a4734, Func Offset: 0x3e4
	// Line 390, Address: 0x2a4738, Func Offset: 0x3e8
	// Line 391, Address: 0x2a4744, Func Offset: 0x3f4
	// Line 392, Address: 0x2a4748, Func Offset: 0x3f8
	// Line 393, Address: 0x2a4750, Func Offset: 0x400
	// Line 395, Address: 0x2a4758, Func Offset: 0x408
	// Line 396, Address: 0x2a475c, Func Offset: 0x40c
	// Line 402, Address: 0x2a4760, Func Offset: 0x410
	// Line 403, Address: 0x2a4768, Func Offset: 0x418
	// Line 399, Address: 0x2a476c, Func Offset: 0x41c
	// Line 403, Address: 0x2a4774, Func Offset: 0x424
	// Line 399, Address: 0x2a477c, Func Offset: 0x42c
	// Line 403, Address: 0x2a4784, Func Offset: 0x434
	// Line 404, Address: 0x2a4790, Func Offset: 0x440
	// Func End, Address: 0x2a47b0, Func Offset: 0x460
}

// 
// Start address: 0x2a47b0
void set_holy(float* center, _enum type, float mult, sfObj* obj)
{
	_anon4* hs;
	// Line 409, Address: 0x2a47b0, Func Offset: 0
	// Line 413, Address: 0x2a47b8, Func Offset: 0x8
	// Line 417, Address: 0x2a47c4, Func Offset: 0x14
	// Line 420, Address: 0x2a47d8, Func Offset: 0x28
	// Line 425, Address: 0x2a47e0, Func Offset: 0x30
	// Line 421, Address: 0x2a47e4, Func Offset: 0x34
	// Line 422, Address: 0x2a47e8, Func Offset: 0x38
	// Line 423, Address: 0x2a47ec, Func Offset: 0x3c
	// Line 425, Address: 0x2a47f0, Func Offset: 0x40
	// Line 428, Address: 0x2a4800, Func Offset: 0x50
	// Func End, Address: 0x2a4808, Func Offset: 0x58
}

// 
// Start address: 0x2a4810
void PlayerCurseSetHoly(float* center, _enum type, float mult, sfObj* obj)
{
	// Line 431, Address: 0x2a4810, Func Offset: 0
	// Line 433, Address: 0x2a4834, Func Offset: 0x24
	// Line 436, Address: 0x2a4844, Func Offset: 0x34
	// Line 437, Address: 0x2a4854, Func Offset: 0x44
	// Line 438, Address: 0x2a4858, Func Offset: 0x48
	// Func End, Address: 0x2a4874, Func Offset: 0x64
}

// 
// Start address: 0x2a4880
float PlayerCurseDamageSpotProc(_PLAYER_WORK* p)
{
	int i;
	float total;
	float red_max;
	float dam;
	_anon1 line;
	_anon6* pol;
	// Line 442, Address: 0x2a4880, Func Offset: 0
	// Line 447, Address: 0x2a4884, Func Offset: 0x4
	// Line 442, Address: 0x2a4888, Func Offset: 0x8
	// Line 447, Address: 0x2a48a0, Func Offset: 0x20
	// Line 444, Address: 0x2a48a4, Func Offset: 0x24
	// Line 448, Address: 0x2a48a8, Func Offset: 0x28
	// Line 451, Address: 0x2a48b0, Func Offset: 0x30
	// Line 452, Address: 0x2a48c0, Func Offset: 0x40
	// Line 454, Address: 0x2a48c4, Func Offset: 0x44
	// Line 452, Address: 0x2a48c8, Func Offset: 0x48
	// Line 454, Address: 0x2a48cc, Func Offset: 0x4c
	// Line 453, Address: 0x2a48d0, Func Offset: 0x50
	// Line 454, Address: 0x2a48d4, Func Offset: 0x54
	// Line 455, Address: 0x2a48e0, Func Offset: 0x60
	// Line 456, Address: 0x2a48e8, Func Offset: 0x68
	// Line 460, Address: 0x2a48f0, Func Offset: 0x70
	// Line 468, Address: 0x2a4904, Func Offset: 0x84
	// Line 462, Address: 0x2a4908, Func Offset: 0x88
	// Line 461, Address: 0x2a490c, Func Offset: 0x8c
	// Line 468, Address: 0x2a4914, Func Offset: 0x94
	// Line 461, Address: 0x2a4918, Func Offset: 0x98
	// Line 465, Address: 0x2a491c, Func Offset: 0x9c
	// Line 463, Address: 0x2a4924, Func Offset: 0xa4
	// Line 466, Address: 0x2a492c, Func Offset: 0xac
	// Line 467, Address: 0x2a4934, Func Offset: 0xb4
	// Line 468, Address: 0x2a493c, Func Offset: 0xbc
	// Line 469, Address: 0x2a494c, Func Offset: 0xcc
	// Line 470, Address: 0x2a4954, Func Offset: 0xd4
	// Line 527, Address: 0x2a4958, Func Offset: 0xd8
	// Line 529, Address: 0x2a4960, Func Offset: 0xe0
	// Line 528, Address: 0x2a4964, Func Offset: 0xe4
	// Line 529, Address: 0x2a4968, Func Offset: 0xe8
	// Line 528, Address: 0x2a496c, Func Offset: 0xec
	// Line 529, Address: 0x2a4970, Func Offset: 0xf0
	// Line 530, Address: 0x2a4980, Func Offset: 0x100
	// Line 532, Address: 0x2a4988, Func Offset: 0x108
	// Line 531, Address: 0x2a499c, Func Offset: 0x11c
	// Line 532, Address: 0x2a49a0, Func Offset: 0x120
	// Line 533, Address: 0x2a49ac, Func Offset: 0x12c
	// Line 537, Address: 0x2a4ae0, Func Offset: 0x260
	// Line 539, Address: 0x2a4ae8, Func Offset: 0x268
	// Line 542, Address: 0x2a4c00, Func Offset: 0x380
	// Line 546, Address: 0x2a4c34, Func Offset: 0x3b4
	// Line 547, Address: 0x2a4c40, Func Offset: 0x3c0
	// Line 548, Address: 0x2a4c5c, Func Offset: 0x3dc
	// Line 549, Address: 0x2a4c64, Func Offset: 0x3e4
	// Line 550, Address: 0x2a4c6c, Func Offset: 0x3ec
	// Line 552, Address: 0x2a4c7c, Func Offset: 0x3fc
	// Line 556, Address: 0x2a4c80, Func Offset: 0x400
	// Line 558, Address: 0x2a4c98, Func Offset: 0x418
	// Line 556, Address: 0x2a4c9c, Func Offset: 0x41c
	// Line 558, Address: 0x2a4ca0, Func Offset: 0x420
	// Line 554, Address: 0x2a4cac, Func Offset: 0x42c
	// Line 558, Address: 0x2a4cb0, Func Offset: 0x430
	// Line 556, Address: 0x2a4cb8, Func Offset: 0x438
	// Line 558, Address: 0x2a4cbc, Func Offset: 0x43c
	// Line 556, Address: 0x2a4ccc, Func Offset: 0x44c
	// Line 558, Address: 0x2a4cd0, Func Offset: 0x450
	// Line 556, Address: 0x2a4ce0, Func Offset: 0x460
	// Line 558, Address: 0x2a4ce4, Func Offset: 0x464
	// Line 560, Address: 0x2a4db8, Func Offset: 0x538
	// Line 558, Address: 0x2a4dc0, Func Offset: 0x540
	// Line 560, Address: 0x2a4dc4, Func Offset: 0x544
	// Line 558, Address: 0x2a4dc8, Func Offset: 0x548
	// Line 560, Address: 0x2a4dcc, Func Offset: 0x54c
	// Line 562, Address: 0x2a4dd4, Func Offset: 0x554
	// Line 561, Address: 0x2a4dd8, Func Offset: 0x558
	// Line 562, Address: 0x2a4ddc, Func Offset: 0x55c
	// Line 561, Address: 0x2a4dec, Func Offset: 0x56c
	// Line 562, Address: 0x2a4df0, Func Offset: 0x570
	// Line 564, Address: 0x2a4dfc, Func Offset: 0x57c
	// Line 567, Address: 0x2a4e1c, Func Offset: 0x59c
	// Line 571, Address: 0x2a4e30, Func Offset: 0x5b0
	// Line 573, Address: 0x2a4e38, Func Offset: 0x5b8
	// Line 574, Address: 0x2a4e40, Func Offset: 0x5c0
	// Line 568, Address: 0x2a4e44, Func Offset: 0x5c4
	// Line 570, Address: 0x2a4e54, Func Offset: 0x5d4
	// Line 574, Address: 0x2a4e5c, Func Offset: 0x5dc
	// Line 575, Address: 0x2a4e60, Func Offset: 0x5e0
	// Func End, Address: 0x2a4e80, Func Offset: 0x600
}

// 
// Start address: 0x2a4e80
float PlayerCurseGetDamageTotal()
{
	// Line 580, Address: 0x2a4e80, Func Offset: 0
	// Line 581, Address: 0x2a4e84, Func Offset: 0x4
	// Func End, Address: 0x2a4e8c, Func Offset: 0xc
}

// 
// Start address: 0x2a4e90
float PlayerCurseGetDamageByPos(float* pos)
{
	int i;
	float total;
	float dam;
	_anon1 line;
	_anon6* pol;
	// Line 588, Address: 0x2a4e90, Func Offset: 0
	// Line 592, Address: 0x2a4e94, Func Offset: 0x4
	// Line 588, Address: 0x2a4e98, Func Offset: 0x8
	// Line 592, Address: 0x2a4eb0, Func Offset: 0x20
	// Line 590, Address: 0x2a4eb4, Func Offset: 0x24
	// Line 592, Address: 0x2a4eb8, Func Offset: 0x28
	// Line 593, Address: 0x2a4ec0, Func Offset: 0x30
	// Line 596, Address: 0x2a4ec8, Func Offset: 0x38
	// Line 598, Address: 0x2a4ed0, Func Offset: 0x40
	// Line 599, Address: 0x2a4ef0, Func Offset: 0x60
	// Line 603, Address: 0x2a5020, Func Offset: 0x190
	// Line 605, Address: 0x2a5028, Func Offset: 0x198
	// Line 608, Address: 0x2a5138, Func Offset: 0x2a8
	// Line 612, Address: 0x2a516c, Func Offset: 0x2dc
	// Line 613, Address: 0x2a5174, Func Offset: 0x2e4
	// Line 614, Address: 0x2a5190, Func Offset: 0x300
	// Line 615, Address: 0x2a5198, Func Offset: 0x308
	// Line 616, Address: 0x2a51a0, Func Offset: 0x310
	// Line 621, Address: 0x2a51b0, Func Offset: 0x320
	// Line 620, Address: 0x2a51b4, Func Offset: 0x324
	// Line 621, Address: 0x2a51b8, Func Offset: 0x328
	// Line 623, Address: 0x2a51cc, Func Offset: 0x33c
	// Line 624, Address: 0x2a51d0, Func Offset: 0x340
	// Func End, Address: 0x2a51f0, Func Offset: 0x360
}

// 
// Start address: 0x2a51f0
float PlayerCurseGetPowerNoDistTotal()
{
	// Line 638, Address: 0x2a51f0, Func Offset: 0
	// Line 639, Address: 0x2a51f4, Func Offset: 0x4
	// Func End, Address: 0x2a51fc, Func Offset: 0xc
}

// 
// Start address: 0x2a5200
int PlayerCurseGetMaxSpot(float* pos)
{
	// Line 645, Address: 0x2a5200, Func Offset: 0
	// Line 646, Address: 0x2a521c, Func Offset: 0x1c
	// Line 647, Address: 0x2a5228, Func Offset: 0x28
	// Line 650, Address: 0x2a5230, Func Offset: 0x30
	// Line 651, Address: 0x2a5238, Func Offset: 0x38
	// Func End, Address: 0x2a5240, Func Offset: 0x40
}

// 
// Start address: 0x2a5240
void PlayerCurseSetHolyAll()
{
	// Line 657, Address: 0x2a5240, Func Offset: 0
	// Line 658, Address: 0x2a5244, Func Offset: 0x4
	// Line 657, Address: 0x2a524c, Func Offset: 0xc
	// Line 658, Address: 0x2a5250, Func Offset: 0x10
	// Line 660, Address: 0x2a5260, Func Offset: 0x20
	// Line 661, Address: 0x2a5270, Func Offset: 0x30
	// Line 664, Address: 0x2a5278, Func Offset: 0x38
	// Func End, Address: 0x2a5284, Func Offset: 0x44
}

// 
// Start address: 0x2a5290
float PlayerCurseGetHolyByPos(float* pos)
{
	// Line 673, Address: 0x2a5290, Func Offset: 0
	// Func End, Address: 0x2a52a0, Func Offset: 0x10
}

// 
// Start address: 0x2a52a0
float PlayerCurseGetHolyTotal(float* center)
{
	int i;
	float total;
	float vsub[4];
	float dist;
	float dist_r;
	// Line 680, Address: 0x2a52a0, Func Offset: 0
	// Line 688, Address: 0x2a52a4, Func Offset: 0x4
	// Line 680, Address: 0x2a52a8, Func Offset: 0x8
	// Line 688, Address: 0x2a52b8, Func Offset: 0x18
	// Line 682, Address: 0x2a52bc, Func Offset: 0x1c
	// Line 688, Address: 0x2a52c0, Func Offset: 0x20
	// Line 689, Address: 0x2a52c8, Func Offset: 0x28
	// Line 691, Address: 0x2a52d0, Func Offset: 0x30
	// Line 692, Address: 0x2a52d8, Func Offset: 0x38
	// Line 693, Address: 0x2a531c, Func Offset: 0x7c
	// Line 695, Address: 0x2a5320, Func Offset: 0x80
	// Line 698, Address: 0x2a533c, Func Offset: 0x9c
	// Line 696, Address: 0x2a5344, Func Offset: 0xa4
	// Line 698, Address: 0x2a5374, Func Offset: 0xd4
	// Line 701, Address: 0x2a5380, Func Offset: 0xe0
	// Line 702, Address: 0x2a5394, Func Offset: 0xf4
	// Line 703, Address: 0x2a5398, Func Offset: 0xf8
	// Line 705, Address: 0x2a53dc, Func Offset: 0x13c
	// Line 706, Address: 0x2a53e4, Func Offset: 0x144
	// Line 708, Address: 0x2a53e8, Func Offset: 0x148
	// Line 711, Address: 0x2a541c, Func Offset: 0x17c
	// Line 709, Address: 0x2a5424, Func Offset: 0x184
	// Line 711, Address: 0x2a5454, Func Offset: 0x1b4
	// Line 713, Address: 0x2a5460, Func Offset: 0x1c0
	// Line 715, Address: 0x2a5470, Func Offset: 0x1d0
	// Line 716, Address: 0x2a54ac, Func Offset: 0x20c
	// Line 718, Address: 0x2a54b8, Func Offset: 0x218
	// Line 720, Address: 0x2a54f8, Func Offset: 0x258
	// Line 721, Address: 0x2a5500, Func Offset: 0x260
	// Line 723, Address: 0x2a5520, Func Offset: 0x280
	// Line 727, Address: 0x2a5528, Func Offset: 0x288
	// Line 728, Address: 0x2a5548, Func Offset: 0x2a8
	// Line 731, Address: 0x2a5578, Func Offset: 0x2d8
	// Line 729, Address: 0x2a5580, Func Offset: 0x2e0
	// Line 731, Address: 0x2a55b0, Func Offset: 0x310
	// Line 734, Address: 0x2a55bc, Func Offset: 0x31c
	// Line 733, Address: 0x2a55c4, Func Offset: 0x324
	// Line 734, Address: 0x2a55d4, Func Offset: 0x334
	// Line 744, Address: 0x2a55e0, Func Offset: 0x340
	// Line 746, Address: 0x2a55fc, Func Offset: 0x35c
	// Line 747, Address: 0x2a5600, Func Offset: 0x360
	// Func End, Address: 0x2a5618, Func Offset: 0x378
}

// 
// Start address: 0x2a5620
void PlayerCurseSetNoiseFilter()
{
	float dam;
	int film;
	int flash;
	int slide;
	// Line 753, Address: 0x2a5620, Func Offset: 0
	// Line 755, Address: 0x2a5628, Func Offset: 0x8
	// Line 762, Address: 0x2a5640, Func Offset: 0x20
	// Line 763, Address: 0x2a5648, Func Offset: 0x28
	// Line 762, Address: 0x2a5650, Func Offset: 0x30
	// Line 763, Address: 0x2a5664, Func Offset: 0x44
	// Line 762, Address: 0x2a5668, Func Offset: 0x48
	// Line 763, Address: 0x2a566c, Func Offset: 0x4c
	// Line 762, Address: 0x2a5674, Func Offset: 0x54
	// Line 763, Address: 0x2a5678, Func Offset: 0x58
	// Line 765, Address: 0x2a5688, Func Offset: 0x68
	// Line 766, Address: 0x2a5698, Func Offset: 0x78
	// Line 771, Address: 0x2a56a8, Func Offset: 0x88
	// Line 774, Address: 0x2a56ac, Func Offset: 0x8c
	// Line 777, Address: 0x2a56b8, Func Offset: 0x98
	// Func End, Address: 0x2a56c8, Func Offset: 0xa8
}

// 
// Start address: 0x2a56d0
void PlayerCurseSet2DCurrent(float current)
{
	// Line 782, Address: 0x2a56d0, Func Offset: 0
	// Line 785, Address: 0x2a56d4, Func Offset: 0x4
	// Func End, Address: 0x2a56dc, Func Offset: 0xc
}

// 
// Start address: 0x2a56e0
void PlayerCurseSet2DEffect()
{
	int ipow;
	float a;
	float fpow;
	float m_pow;
	int m_nis;
	int m_fla;
	// Line 789, Address: 0x2a56e0, Func Offset: 0
	// Line 796, Address: 0x2a56e4, Func Offset: 0x4
	// Line 789, Address: 0x2a56e8, Func Offset: 0x8
	// Line 796, Address: 0x2a56ec, Func Offset: 0xc
	// Line 789, Address: 0x2a56f0, Func Offset: 0x10
	// Line 796, Address: 0x2a56f4, Func Offset: 0x14
	// Line 789, Address: 0x2a56f8, Func Offset: 0x18
	// Line 796, Address: 0x2a56fc, Func Offset: 0x1c
	// Line 789, Address: 0x2a5700, Func Offset: 0x20
	// Line 796, Address: 0x2a5704, Func Offset: 0x24
	// Line 797, Address: 0x2a5720, Func Offset: 0x40
	// Line 798, Address: 0x2a572c, Func Offset: 0x4c
	// Line 799, Address: 0x2a5730, Func Offset: 0x50
	// Line 800, Address: 0x2a5744, Func Offset: 0x64
	// Line 802, Address: 0x2a5768, Func Offset: 0x88
	// Line 803, Address: 0x2a5770, Func Offset: 0x90
	// Line 804, Address: 0x2a5784, Func Offset: 0xa4
	// Line 805, Address: 0x2a57a8, Func Offset: 0xc8
	// Line 807, Address: 0x2a57b0, Func Offset: 0xd0
	// Line 809, Address: 0x2a57d8, Func Offset: 0xf8
	// Line 810, Address: 0x2a57f4, Func Offset: 0x114
	// Line 811, Address: 0x2a5804, Func Offset: 0x124
	// Line 812, Address: 0x2a580c, Func Offset: 0x12c
	// Line 813, Address: 0x2a5834, Func Offset: 0x154
	// Line 815, Address: 0x2a584c, Func Offset: 0x16c
	// Line 819, Address: 0x2a5858, Func Offset: 0x178
	// Line 820, Address: 0x2a586c, Func Offset: 0x18c
	// Line 821, Address: 0x2a5890, Func Offset: 0x1b0
	// Line 822, Address: 0x2a58a4, Func Offset: 0x1c4
	// Line 823, Address: 0x2a58b0, Func Offset: 0x1d0
	// Line 824, Address: 0x2a58bc, Func Offset: 0x1dc
	// Line 825, Address: 0x2a58c0, Func Offset: 0x1e0
	// Line 826, Address: 0x2a58c8, Func Offset: 0x1e8
	// Line 832, Address: 0x2a58d0, Func Offset: 0x1f0
	// Line 835, Address: 0x2a58dc, Func Offset: 0x1fc
	// Line 839, Address: 0x2a58f0, Func Offset: 0x210
	// Line 840, Address: 0x2a5908, Func Offset: 0x228
	// Line 839, Address: 0x2a590c, Func Offset: 0x22c
	// Line 840, Address: 0x2a5918, Func Offset: 0x238
	// Line 839, Address: 0x2a5920, Func Offset: 0x240
	// Line 840, Address: 0x2a5924, Func Offset: 0x244
	// Line 841, Address: 0x2a5934, Func Offset: 0x254
	// Line 842, Address: 0x2a5940, Func Offset: 0x260
	// Line 843, Address: 0x2a5948, Func Offset: 0x268
	// Line 844, Address: 0x2a5958, Func Offset: 0x278
	// Line 843, Address: 0x2a5964, Func Offset: 0x284
	// Line 844, Address: 0x2a5968, Func Offset: 0x288
	// Line 846, Address: 0x2a5970, Func Offset: 0x290
	// Line 849, Address: 0x2a5978, Func Offset: 0x298
	// Func End, Address: 0x2a5990, Func Offset: 0x2b0
}

// 
// Start address: 0x2a5990
void PlayerCurseStepSet(int step)
{
	// Line 855, Address: 0x2a5990, Func Offset: 0
	// Line 856, Address: 0x2a5998, Func Offset: 0x8
	// Line 857, Address: 0x2a59a0, Func Offset: 0x10
	// Line 858, Address: 0x2a59ac, Func Offset: 0x1c
	// Line 860, Address: 0x2a59b0, Func Offset: 0x20
	// Line 863, Address: 0x2a59b4, Func Offset: 0x24
	// Func End, Address: 0x2a59bc, Func Offset: 0x2c
}

// 
// Start address: 0x2a59c0
int PlayerCurseStepGet()
{
	// Line 867, Address: 0x2a59c0, Func Offset: 0
	// Line 868, Address: 0x2a59c4, Func Offset: 0x4
	// Func End, Address: 0x2a59cc, Func Offset: 0xc
}

// 
// Start address: 0x2a59d0
int room_battle_message_trgchk(sfObj* obj)
{
	// Line 892, Address: 0x2a59d0, Func Offset: 0
	// Line 894, Address: 0x2a59d4, Func Offset: 0x4
	// Line 892, Address: 0x2a59d8, Func Offset: 0x8
	// Line 894, Address: 0x2a59dc, Func Offset: 0xc
	// Line 892, Address: 0x2a59e0, Func Offset: 0x10
	// Line 894, Address: 0x2a59e4, Func Offset: 0x14
	// Line 895, Address: 0x2a5a04, Func Offset: 0x34
	// Line 896, Address: 0x2a5a18, Func Offset: 0x48
	// Line 899, Address: 0x2a5a20, Func Offset: 0x50
	// Line 900, Address: 0x2a5a28, Func Offset: 0x58
	// Func End, Address: 0x2a5a38, Func Offset: 0x68
}

// 
// Start address: 0x2a5a40
void set_event_medaluse()
{
	// Line 945, Address: 0x2a5a40, Func Offset: 0
	// Line 947, Address: 0x2a5a44, Func Offset: 0x4
	// Line 945, Address: 0x2a5a48, Func Offset: 0x8
	// Line 947, Address: 0x2a5a4c, Func Offset: 0xc
	// Line 951, Address: 0x2a5a5c, Func Offset: 0x1c
	// Line 947, Address: 0x2a5a60, Func Offset: 0x20
	// Line 951, Address: 0x2a5a64, Func Offset: 0x24
	// Line 954, Address: 0x2a5a74, Func Offset: 0x34
	// Line 956, Address: 0x2a5a78, Func Offset: 0x38
	// Line 958, Address: 0x2a5a88, Func Offset: 0x48
	// Line 959, Address: 0x2a5a9c, Func Offset: 0x5c
	// Line 961, Address: 0x2a5aa8, Func Offset: 0x68
	// Line 964, Address: 0x2a5ab8, Func Offset: 0x78
	// Func End, Address: 0x2a5ac4, Func Offset: 0x84
}

// 
// Start address: 0x2a5ad0
void set_event_candleuse()
{
	// Line 967, Address: 0x2a5ad0, Func Offset: 0
	// Line 968, Address: 0x2a5ad4, Func Offset: 0x4
	// Line 967, Address: 0x2a5ad8, Func Offset: 0x8
	// Line 968, Address: 0x2a5adc, Func Offset: 0xc
	// Line 972, Address: 0x2a5aec, Func Offset: 0x1c
	// Line 968, Address: 0x2a5af0, Func Offset: 0x20
	// Line 972, Address: 0x2a5af4, Func Offset: 0x24
	// Line 975, Address: 0x2a5b04, Func Offset: 0x34
	// Line 977, Address: 0x2a5b08, Func Offset: 0x38
	// Line 979, Address: 0x2a5b18, Func Offset: 0x48
	// Line 980, Address: 0x2a5b2c, Func Offset: 0x5c
	// Line 982, Address: 0x2a5b38, Func Offset: 0x68
	// Line 985, Address: 0x2a5b48, Func Offset: 0x78
	// Func End, Address: 0x2a5b54, Func Offset: 0x84
}

// 
// Start address: 0x2a5b60
void PlayerCurseSetMessageEvent()
{
	float mspot_pos[4];
	float xx;
	float zz;
	float mspot_pos[4];
	float xx;
	float zz;
	// Line 988, Address: 0x2a5b60, Func Offset: 0
	// Line 989, Address: 0x2a5b64, Func Offset: 0x4
	// Line 988, Address: 0x2a5b68, Func Offset: 0x8
	// Line 989, Address: 0x2a5b6c, Func Offset: 0xc
	// Line 993, Address: 0x2a5b7c, Func Offset: 0x1c
	// Line 997, Address: 0x2a5b8c, Func Offset: 0x2c
	// Line 1000, Address: 0x2a5ba4, Func Offset: 0x44
	// Line 1012, Address: 0x2a5bc8, Func Offset: 0x68
	// Line 1018, Address: 0x2a5bd8, Func Offset: 0x78
	// Line 1015, Address: 0x2a5bdc, Func Offset: 0x7c
	// Line 1018, Address: 0x2a5be0, Func Offset: 0x80
	// Line 1015, Address: 0x2a5be4, Func Offset: 0x84
	// Line 1016, Address: 0x2a5be8, Func Offset: 0x88
	// Line 1018, Address: 0x2a5bec, Func Offset: 0x8c
	// Line 1016, Address: 0x2a5bf0, Func Offset: 0x90
	// Line 1015, Address: 0x2a5bf8, Func Offset: 0x98
	// Line 1018, Address: 0x2a5bfc, Func Offset: 0x9c
	// Line 1016, Address: 0x2a5c00, Func Offset: 0xa0
	// Line 1018, Address: 0x2a5c04, Func Offset: 0xa4
	// Line 1020, Address: 0x2a5c14, Func Offset: 0xb4
	// Line 1021, Address: 0x2a5c1c, Func Offset: 0xbc
	// Line 1020, Address: 0x2a5c20, Func Offset: 0xc0
	// Line 1021, Address: 0x2a5c24, Func Offset: 0xc4
	// Line 1026, Address: 0x2a5c2c, Func Offset: 0xcc
	// Line 1027, Address: 0x2a5c34, Func Offset: 0xd4
	// Line 1038, Address: 0x2a5c38, Func Offset: 0xd8
	// Line 1044, Address: 0x2a5c48, Func Offset: 0xe8
	// Line 1041, Address: 0x2a5c4c, Func Offset: 0xec
	// Line 1044, Address: 0x2a5c50, Func Offset: 0xf0
	// Line 1041, Address: 0x2a5c54, Func Offset: 0xf4
	// Line 1042, Address: 0x2a5c58, Func Offset: 0xf8
	// Line 1044, Address: 0x2a5c5c, Func Offset: 0xfc
	// Line 1042, Address: 0x2a5c60, Func Offset: 0x100
	// Line 1041, Address: 0x2a5c68, Func Offset: 0x108
	// Line 1044, Address: 0x2a5c6c, Func Offset: 0x10c
	// Line 1042, Address: 0x2a5c70, Func Offset: 0x110
	// Line 1044, Address: 0x2a5c74, Func Offset: 0x114
	// Line 1046, Address: 0x2a5c84, Func Offset: 0x124
	// Line 1047, Address: 0x2a5c8c, Func Offset: 0x12c
	// Line 1046, Address: 0x2a5c90, Func Offset: 0x130
	// Line 1047, Address: 0x2a5c94, Func Offset: 0x134
	// Line 1055, Address: 0x2a5c9c, Func Offset: 0x13c
	// Line 1058, Address: 0x2a5ca0, Func Offset: 0x140
	// Func End, Address: 0x2a5cac, Func Offset: 0x14c
}

