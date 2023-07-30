typedef struct _anon0;
typedef struct sgBone;
typedef struct sfObj;
typedef struct _anon1;
typedef union _anon2;
typedef struct sgIKHandle;
typedef struct _anon3;
typedef struct sfCharacter;
typedef struct sgAnime;
typedef enum GameItem : unsigned char;
typedef struct _PLAYER_WORK;
typedef struct sfCldObject;
typedef struct sgQTNode;
typedef struct sfCldPart;
typedef struct sgSVModel;
typedef enum SpearStat : unsigned char;
typedef struct _anon4;
typedef enum SpearPlayerStat : unsigned char;
typedef struct _anon5;
typedef struct sgQTObject;
typedef struct _EventDriver;
typedef struct _anon6;
typedef struct sfOffsetAABB;
typedef struct _anon7;
typedef struct _anon8;
typedef union sfCldBody;
typedef struct _GAME_WORK;
typedef struct EventFlag;
typedef struct _anon9;
typedef struct _anon10;
typedef struct _anon11;
typedef enum sgIKSolveResult : unsigned char;

typedef void(*type_4)(sfObj*);
typedef sgIKSolveResult(*type_7)();
typedef void(*type_8)(sfObj*);
typedef void(*type_14)(sgAnime*, int);
typedef int(*type_17)(sfObj*);
typedef int(*type_18)(sfObj*);
typedef void(*type_19)(_anon4*, int, int, float*);
typedef int(*type_22)(sfObj*);
typedef int(*type_23)(sfObj*);
typedef int(*type_25)(sfObj*);
typedef void(*type_28)(sfObj*);
typedef void(*type_29)(sfObj*);

typedef float type_0[4];
typedef float type_1[4][4];
typedef _anon2 type_2[256];
typedef _PLAYER_WORK type_3[2];
typedef float type_5[4][2];
typedef _anon3 type_6[8];
typedef float type_9[4];
typedef sfCldPart* type_10[6];
typedef unsigned char type_11[3];
typedef void* type_12[4];
typedef _anon2 type_13[6];
typedef int type_15[1];
typedef int type_16[1];
typedef unsigned char type_20[4];
typedef _anon6 type_21[8];
typedef int type_24[1];
typedef float type_26[4];
typedef _anon8 type_27[9];
typedef _anon2 type_30[4];
typedef int type_31[1];
typedef unsigned char type_32[3];
typedef int type_33[1];
typedef unsigned char type_34[320];
typedef int type_35[1];
typedef short type_36[2];
typedef unsigned short type_37[2];
typedef char type_38[4];
typedef unsigned char type_39[4];
typedef int type_40[1];
typedef float type_41[1];
typedef int type_42[1];

struct _anon0
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

struct sfObj
{
	_anon2 fwork[256];
	_anon2* work;
	void(*func)(sfObj*);
	_anon2* work_pt0;
	_anon2* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon2* sys_work;
	_anon2* scene_work;
	_anon2* event_work;
	_anon2* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

struct _anon1
{
	float mat[4][4];
	float half_w[4];
};

union _anon2
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

struct _anon3
{
	float trans[4];
	float rot[4];
};

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon5 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
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
	_anon9* anim_ctrl;
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

enum SpearStat : unsigned char
{
	SPEAR_STAT_NONE,
	SPEAR_STAT_START,
	SPEAR_STAT_PULL,
	SPEAR_STAT_ITEM,
	SPEAR_STAT_STAB,
	SPEAR_STAT_KILLER
};

struct _anon4
{
	unsigned long tex0;
	unsigned long clamp;
};

enum SpearPlayerStat : unsigned char
{
	PS_STAT_NONE,
	PS_STAT_PULLSTART,
	PS_STAT_PULL,
	PS_STAT_PULLEND,
	PS_STAT_STABSTART,
	PS_STAT_STAB,
	PS_STAT_STABEND,
	PS_STAT_CANTPULL
};

struct _anon5
{
	void* model;
	void* texture;
	void* texture_global;
	float matrices[4][4];
	float* weights;
	float tex_crops[4];
	void(*texture_load_func)(_anon4*, int, int, float*);
	int equip_flag;
};

struct sgQTObject
{
	_anon11 bounding_ball;
	sgQTObject* next;
	sgQTObject* prev;
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
	_anon2 val[4];
};

struct _anon6
{
	SpearStat stat;
	sfCharacter chr;
	float trans[4];
	float rot[4];
	sfObj* obj;
};

struct sfOffsetAABB
{
	_anon0 aabb;
	float offset[4];
};

struct _anon7
{
	SpearPlayerStat stat;
	int spear_num;
	float cantpull_time;
	float cantstab_time;
};

struct _anon8
{
	float angle;
	float x;
	float z;
};

union sfCldBody
{
	_anon1 obb;
	_anon0 aabb;
	sfOffsetAABB offset_aabb;
	_anon10 line;
	_anon11 sphere;
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

struct EventFlag
{
	unsigned char flag[320];
};

struct _anon9
{
	int dummy;
};

struct _anon10
{
	float start[4];
	float end[4];
};

struct _anon11
{
	float center[4];
	float radius;
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

_anon8 ev_data[9];
_anon3 start_pos[8];
_EventDriver message_cant_get;
_anon2 cant_pull_msg[6];
_EventDriver message_cant_pull;
_anon6 spears[8];
_GAME_WORK gamew;
_anon7 lwork;
void(*PlayerSpearObjDestruct)(sfObj*);
void(*PlayerSpearObjUpdate)(sfObj*);
_PLAYER_WORK playerw[2];
EventFlag event_flag;
float sg_vector_unit_x[4];

int PlayerSpearFinishNum();
void PlayerSpearFinishOne();
void PlayerSpearFinishAll();
void PlayerSpearDraw();
void PlayerSpearObjUpdate(sfObj* obj);
void PlayerSpearObjDestruct(sfObj* obj);
int make_obj(int id);
void PlayerSpearInit();
int PlayerSpearIsActive();
int get_item_spear();
int PlayerSpearCanStab();
int PlayerSpearStabCheck();
void spear_normal();
void spear_pullstart();
void spear_pull();
void spear_pullend();
void spear_stabstart();
void spear_stab();
void spear_stabend();
void spear_cantpull();
int PlayerSpearMain();
void PlayerSpearSceneEnd();

// 
// Start address: 0x2f04b0
int PlayerSpearFinishNum()
{
	int i;
	int ret;
	// Line 193, Address: 0x2f04b0, Func Offset: 0
	// Line 195, Address: 0x2f04d8, Func Offset: 0x28
	// Line 199, Address: 0x2f04e0, Func Offset: 0x30
	// Line 198, Address: 0x2f04e4, Func Offset: 0x34
	// Line 199, Address: 0x2f04e8, Func Offset: 0x38
	// Line 200, Address: 0x2f04f0, Func Offset: 0x40
	// Line 199, Address: 0x2f04f4, Func Offset: 0x44
	// Line 200, Address: 0x2f04f8, Func Offset: 0x48
	// Line 201, Address: 0x2f0504, Func Offset: 0x54
	// Line 202, Address: 0x2f0508, Func Offset: 0x58
	// Line 205, Address: 0x2f0518, Func Offset: 0x68
	// Func End, Address: 0x2f0520, Func Offset: 0x70
}

// 
// Start address: 0x2f0520
void PlayerSpearFinishOne()
{
	// Line 209, Address: 0x2f0520, Func Offset: 0
	// Line 210, Address: 0x2f0528, Func Offset: 0x8
	// Line 211, Address: 0x2f053c, Func Offset: 0x1c
	// Line 213, Address: 0x2f0548, Func Offset: 0x28
	// Line 216, Address: 0x2f0578, Func Offset: 0x58
	// Func End, Address: 0x2f0584, Func Offset: 0x64
}

// 
// Start address: 0x2f0590
void PlayerSpearFinishAll()
{
	// Line 223, Address: 0x2f0590, Func Offset: 0
	// Func End, Address: 0x2f0598, Func Offset: 0x8
}

// 
// Start address: 0x2f05a0
void PlayerSpearDraw()
{
	sfCharacter* chr;
	sgBone* par;
	int i;
	// Line 227, Address: 0x2f05a0, Func Offset: 0
	// Line 234, Address: 0x2f05a4, Func Offset: 0x4
	// Line 227, Address: 0x2f05a8, Func Offset: 0x8
	// Line 234, Address: 0x2f05ac, Func Offset: 0xc
	// Line 227, Address: 0x2f05b0, Func Offset: 0x10
	// Line 228, Address: 0x2f05b8, Func Offset: 0x18
	// Line 227, Address: 0x2f05bc, Func Offset: 0x1c
	// Line 234, Address: 0x2f05c4, Func Offset: 0x24
	// Line 236, Address: 0x2f05e8, Func Offset: 0x48
	// Line 239, Address: 0x2f05f0, Func Offset: 0x50
	// Line 240, Address: 0x2f0604, Func Offset: 0x64
	// Line 241, Address: 0x2f0610, Func Offset: 0x70
	// Line 242, Address: 0x2f0618, Func Offset: 0x78
	// Line 244, Address: 0x2f0624, Func Offset: 0x84
	// Line 246, Address: 0x2f0628, Func Offset: 0x88
	// Line 248, Address: 0x2f0638, Func Offset: 0x98
	// Line 249, Address: 0x2f0648, Func Offset: 0xa8
	// Line 251, Address: 0x2f0658, Func Offset: 0xb8
	// Line 255, Address: 0x2f0664, Func Offset: 0xc4
	// Line 257, Address: 0x2f0678, Func Offset: 0xd8
	// Line 259, Address: 0x2f0680, Func Offset: 0xe0
	// Line 262, Address: 0x2f0690, Func Offset: 0xf0
	// Func End, Address: 0x2f06ac, Func Offset: 0x10c
}

// 
// Start address: 0x2f06b0
void PlayerSpearObjUpdate(sfObj* obj)
{
	_anon6* dw;
	// Line 284, Address: 0x2f06b0, Func Offset: 0
	// Line 288, Address: 0x2f06b4, Func Offset: 0x4
	// Line 284, Address: 0x2f06b8, Func Offset: 0x8
	// Line 286, Address: 0x2f06c0, Func Offset: 0x10
	// Line 288, Address: 0x2f06e4, Func Offset: 0x34
	// Line 289, Address: 0x2f06f0, Func Offset: 0x40
	// Line 290, Address: 0x2f06fc, Func Offset: 0x4c
	// Line 293, Address: 0x2f0708, Func Offset: 0x58
	// Func End, Address: 0x2f0718, Func Offset: 0x68
}

// 
// Start address: 0x2f0720
void PlayerSpearObjDestruct(sfObj* obj)
{
	_anon6* dw;
	// Line 297, Address: 0x2f0720, Func Offset: 0
	// Line 299, Address: 0x2f0724, Func Offset: 0x4
	// Line 297, Address: 0x2f0728, Func Offset: 0x8
	// Line 299, Address: 0x2f072c, Func Offset: 0xc
	// Line 297, Address: 0x2f0730, Func Offset: 0x10
	// Line 299, Address: 0x2f0734, Func Offset: 0x14
	// Line 301, Address: 0x2f0750, Func Offset: 0x30
	// Line 302, Address: 0x2f075c, Func Offset: 0x3c
	// Line 303, Address: 0x2f0764, Func Offset: 0x44
	// Line 304, Address: 0x2f0768, Func Offset: 0x48
	// Line 307, Address: 0x2f076c, Func Offset: 0x4c
	// Func End, Address: 0x2f077c, Func Offset: 0x5c
}

// 
// Start address: 0x2f0780
int make_obj(int id)
{
	_anon6* dw;
	_anon3* sw;
	sfObj* obj;
	// Line 311, Address: 0x2f0780, Func Offset: 0
	// Line 312, Address: 0x2f0784, Func Offset: 0x4
	// Line 311, Address: 0x2f0788, Func Offset: 0x8
	// Line 312, Address: 0x2f078c, Func Offset: 0xc
	// Line 311, Address: 0x2f0790, Func Offset: 0x10
	// Line 312, Address: 0x2f0794, Func Offset: 0x14
	// Line 311, Address: 0x2f0798, Func Offset: 0x18
	// Line 313, Address: 0x2f079c, Func Offset: 0x1c
	// Line 311, Address: 0x2f07a0, Func Offset: 0x20
	// Line 313, Address: 0x2f07a8, Func Offset: 0x28
	// Line 312, Address: 0x2f07b0, Func Offset: 0x30
	// Line 313, Address: 0x2f07b8, Func Offset: 0x38
	// Line 312, Address: 0x2f07bc, Func Offset: 0x3c
	// Line 311, Address: 0x2f07c4, Func Offset: 0x44
	// Line 317, Address: 0x2f07c8, Func Offset: 0x48
	// Line 318, Address: 0x2f07d4, Func Offset: 0x54
	// Line 319, Address: 0x2f07dc, Func Offset: 0x5c
	// Line 320, Address: 0x2f07e4, Func Offset: 0x64
	// Line 321, Address: 0x2f07e8, Func Offset: 0x68
	// Line 324, Address: 0x2f07f8, Func Offset: 0x78
	// Line 325, Address: 0x2f0810, Func Offset: 0x90
	// Line 328, Address: 0x2f083c, Func Offset: 0xbc
	// Line 329, Address: 0x2f0848, Func Offset: 0xc8
	// Line 330, Address: 0x2f0854, Func Offset: 0xd4
	// Line 331, Address: 0x2f085c, Func Offset: 0xdc
	// Line 332, Address: 0x2f0868, Func Offset: 0xe8
	// Line 333, Address: 0x2f0878, Func Offset: 0xf8
	// Line 335, Address: 0x2f0890, Func Offset: 0x110
	// Line 336, Address: 0x2f089c, Func Offset: 0x11c
	// Line 337, Address: 0x2f08a0, Func Offset: 0x120
	// Line 341, Address: 0x2f08a8, Func Offset: 0x128
	// Line 342, Address: 0x2f08b0, Func Offset: 0x130
	// Line 343, Address: 0x2f08b8, Func Offset: 0x138
	// Func End, Address: 0x2f08d4, Func Offset: 0x154
}

// 
// Start address: 0x2f08e0
void PlayerSpearInit()
{
	int i;
	// Line 347, Address: 0x2f08e0, Func Offset: 0
	// Line 350, Address: 0x2f08e4, Func Offset: 0x4
	// Line 347, Address: 0x2f08e8, Func Offset: 0x8
	// Line 354, Address: 0x2f08f4, Func Offset: 0x14
	// Line 350, Address: 0x2f08f8, Func Offset: 0x18
	// Line 354, Address: 0x2f08fc, Func Offset: 0x1c
	// Line 351, Address: 0x2f0900, Func Offset: 0x20
	// Line 354, Address: 0x2f0904, Func Offset: 0x24
	// Line 351, Address: 0x2f0908, Func Offset: 0x28
	// Line 352, Address: 0x2f090c, Func Offset: 0x2c
	// Line 354, Address: 0x2f0914, Func Offset: 0x34
	// Line 355, Address: 0x2f0918, Func Offset: 0x38
	// Line 357, Address: 0x2f0920, Func Offset: 0x40
	// Line 358, Address: 0x2f092c, Func Offset: 0x4c
	// Line 361, Address: 0x2f093c, Func Offset: 0x5c
	// Func End, Address: 0x2f0950, Func Offset: 0x70
}

// 
// Start address: 0x2f0950
int PlayerSpearIsActive()
{
	// Line 367, Address: 0x2f0950, Func Offset: 0
	// Line 370, Address: 0x2f0958, Func Offset: 0x8
	// Func End, Address: 0x2f0960, Func Offset: 0x10
}

// 
// Start address: 0x2f0960
int get_item_spear()
{
	int i;
	int ret;
	// Line 378, Address: 0x2f0960, Func Offset: 0
	// Line 376, Address: 0x2f0964, Func Offset: 0x4
	// Line 378, Address: 0x2f0968, Func Offset: 0x8
	// Line 379, Address: 0x2f0970, Func Offset: 0x10
	// Line 378, Address: 0x2f0974, Func Offset: 0x14
	// Line 379, Address: 0x2f0978, Func Offset: 0x18
	// Line 381, Address: 0x2f0984, Func Offset: 0x24
	// Line 383, Address: 0x2f098c, Func Offset: 0x2c
	// Line 386, Address: 0x2f09a0, Func Offset: 0x40
	// Func End, Address: 0x2f09a8, Func Offset: 0x48
}

// 
// Start address: 0x2f09b0
int PlayerSpearCanStab()
{
	// Line 392, Address: 0x2f09b0, Func Offset: 0
	// Line 395, Address: 0x2f09d0, Func Offset: 0x20
	// Func End, Address: 0x2f09d8, Func Offset: 0x28
}

// 
// Start address: 0x2f09e0
int PlayerSpearStabCheck()
{
	int ret;
	float dist;
	float xx;
	float zz;
	float dig;
	int spnum;
	// Line 399, Address: 0x2f09e0, Func Offset: 0
	// Line 402, Address: 0x2f09e4, Func Offset: 0x4
	// Line 399, Address: 0x2f09e8, Func Offset: 0x8
	// Line 402, Address: 0x2f09ec, Func Offset: 0xc
	// Line 399, Address: 0x2f09f0, Func Offset: 0x10
	// Line 402, Address: 0x2f09fc, Func Offset: 0x1c
	// Line 409, Address: 0x2f0a28, Func Offset: 0x48
	// Line 410, Address: 0x2f0a38, Func Offset: 0x58
	// Line 409, Address: 0x2f0a40, Func Offset: 0x60
	// Line 411, Address: 0x2f0a44, Func Offset: 0x64
	// Line 410, Address: 0x2f0a48, Func Offset: 0x68
	// Line 411, Address: 0x2f0a54, Func Offset: 0x74
	// Line 412, Address: 0x2f0a5c, Func Offset: 0x7c
	// Line 414, Address: 0x2f0a78, Func Offset: 0x98
	// Line 415, Address: 0x2f0aa8, Func Offset: 0xc8
	// Line 416, Address: 0x2f0ab4, Func Offset: 0xd4
	// Line 418, Address: 0x2f0ac0, Func Offset: 0xe0
	// Line 419, Address: 0x2f0ac8, Func Offset: 0xe8
	// Line 420, Address: 0x2f0ad0, Func Offset: 0xf0
	// Line 422, Address: 0x2f0ad8, Func Offset: 0xf8
	// Line 423, Address: 0x2f0adc, Func Offset: 0xfc
	// Line 422, Address: 0x2f0ae0, Func Offset: 0x100
	// Line 421, Address: 0x2f0ae4, Func Offset: 0x104
	// Line 423, Address: 0x2f0aec, Func Offset: 0x10c
	// Line 421, Address: 0x2f0af0, Func Offset: 0x110
	// Line 423, Address: 0x2f0af4, Func Offset: 0x114
	// Line 428, Address: 0x2f0b18, Func Offset: 0x138
	// Line 429, Address: 0x2f0b1c, Func Offset: 0x13c
	// Func End, Address: 0x2f0b34, Func Offset: 0x154
}

// 
// Start address: 0x2f0b40
void spear_normal()
{
	int i;
	float dist;
	float xx;
	float zz;
	float dig;
	// Line 433, Address: 0x2f0b40, Func Offset: 0
	// Line 440, Address: 0x2f0b50, Func Offset: 0x10
	// Line 445, Address: 0x2f0b58, Func Offset: 0x18
	// Line 447, Address: 0x2f0b88, Func Offset: 0x48
	// Line 448, Address: 0x2f0ba0, Func Offset: 0x60
	// Line 447, Address: 0x2f0ba8, Func Offset: 0x68
	// Line 448, Address: 0x2f0bac, Func Offset: 0x6c
	// Line 447, Address: 0x2f0bb0, Func Offset: 0x70
	// Line 448, Address: 0x2f0bb4, Func Offset: 0x74
	// Line 447, Address: 0x2f0bc0, Func Offset: 0x80
	// Line 448, Address: 0x2f0bc4, Func Offset: 0x84
	// Line 449, Address: 0x2f0bc8, Func Offset: 0x88
	// Line 450, Address: 0x2f0bd4, Func Offset: 0x94
	// Line 452, Address: 0x2f0c04, Func Offset: 0xc4
	// Line 453, Address: 0x2f0c34, Func Offset: 0xf4
	// Line 454, Address: 0x2f0c44, Func Offset: 0x104
	// Line 456, Address: 0x2f0c54, Func Offset: 0x114
	// Line 457, Address: 0x2f0c5c, Func Offset: 0x11c
	// Line 458, Address: 0x2f0c64, Func Offset: 0x124
	// Line 459, Address: 0x2f0c6c, Func Offset: 0x12c
	// Line 460, Address: 0x2f0c78, Func Offset: 0x138
	// Line 461, Address: 0x2f0c80, Func Offset: 0x140
	// Line 460, Address: 0x2f0c84, Func Offset: 0x144
	// Line 462, Address: 0x2f0ca4, Func Offset: 0x164
	// Line 464, Address: 0x2f0cb0, Func Offset: 0x170
	// Line 465, Address: 0x2f0cc0, Func Offset: 0x180
	// Line 469, Address: 0x2f0cc8, Func Offset: 0x188
	// Line 471, Address: 0x2f0cdc, Func Offset: 0x19c
	// Line 472, Address: 0x2f0ce0, Func Offset: 0x1a0
	// Func End, Address: 0x2f0cf4, Func Offset: 0x1b4
}

// 
// Start address: 0x2f0d00
void spear_pullstart()
{
	float target[4];
	float nxt[4];
	float sf;
	float rpf;
	// Line 476, Address: 0x2f0d00, Func Offset: 0
	// Line 481, Address: 0x2f0d04, Func Offset: 0x4
	// Line 476, Address: 0x2f0d08, Func Offset: 0x8
	// Line 481, Address: 0x2f0d0c, Func Offset: 0xc
	// Line 482, Address: 0x2f0d1c, Func Offset: 0x1c
	// Line 483, Address: 0x2f0d20, Func Offset: 0x20
	// Line 482, Address: 0x2f0d24, Func Offset: 0x24
	// Line 483, Address: 0x2f0d28, Func Offset: 0x28
	// Line 485, Address: 0x2f0d2c, Func Offset: 0x2c
	// Line 482, Address: 0x2f0d30, Func Offset: 0x30
	// Line 485, Address: 0x2f0d34, Func Offset: 0x34
	// Line 484, Address: 0x2f0d38, Func Offset: 0x38
	// Line 485, Address: 0x2f0d3c, Func Offset: 0x3c
	// Line 482, Address: 0x2f0d44, Func Offset: 0x44
	// Line 484, Address: 0x2f0d48, Func Offset: 0x48
	// Line 485, Address: 0x2f0d4c, Func Offset: 0x4c
	// Line 482, Address: 0x2f0d54, Func Offset: 0x54
	// Line 485, Address: 0x2f0d58, Func Offset: 0x58
	// Line 482, Address: 0x2f0d5c, Func Offset: 0x5c
	// Line 484, Address: 0x2f0d6c, Func Offset: 0x6c
	// Line 482, Address: 0x2f0d70, Func Offset: 0x70
	// Line 483, Address: 0x2f0d74, Func Offset: 0x74
	// Line 484, Address: 0x2f0d78, Func Offset: 0x78
	// Line 485, Address: 0x2f0d80, Func Offset: 0x80
	// Line 495, Address: 0x2f0da8, Func Offset: 0xa8
	// Line 486, Address: 0x2f0db8, Func Offset: 0xb8
	// Line 487, Address: 0x2f0dbc, Func Offset: 0xbc
	// Line 488, Address: 0x2f0dc0, Func Offset: 0xc0
	// Line 489, Address: 0x2f0dc4, Func Offset: 0xc4
	// Line 495, Address: 0x2f0dc8, Func Offset: 0xc8
	// Line 486, Address: 0x2f0de0, Func Offset: 0xe0
	// Line 487, Address: 0x2f0de8, Func Offset: 0xe8
	// Line 488, Address: 0x2f0df0, Func Offset: 0xf0
	// Line 489, Address: 0x2f0df8, Func Offset: 0xf8
	// Line 495, Address: 0x2f0e00, Func Offset: 0x100
	// Line 497, Address: 0x2f0e0c, Func Offset: 0x10c
	// Line 498, Address: 0x2f0e1c, Func Offset: 0x11c
	// Line 497, Address: 0x2f0e20, Func Offset: 0x120
	// Line 498, Address: 0x2f0e24, Func Offset: 0x124
	// Line 499, Address: 0x2f0e30, Func Offset: 0x130
	// Line 500, Address: 0x2f0e54, Func Offset: 0x154
	// Line 502, Address: 0x2f0e60, Func Offset: 0x160
	// Line 503, Address: 0x2f0e74, Func Offset: 0x174
	// Line 504, Address: 0x2f0e80, Func Offset: 0x180
	// Line 506, Address: 0x2f0e88, Func Offset: 0x188
	// Line 508, Address: 0x2f0e9c, Func Offset: 0x19c
	// Line 509, Address: 0x2f0ea0, Func Offset: 0x1a0
	// Line 512, Address: 0x2f0ea8, Func Offset: 0x1a8
	// Line 509, Address: 0x2f0eb0, Func Offset: 0x1b0
	// Line 512, Address: 0x2f0eb4, Func Offset: 0x1b4
	// Line 513, Address: 0x2f0ec4, Func Offset: 0x1c4
	// Line 514, Address: 0x2f0ed4, Func Offset: 0x1d4
	// Line 515, Address: 0x2f0ee0, Func Offset: 0x1e0
	// Line 516, Address: 0x2f0ee8, Func Offset: 0x1e8
	// Line 519, Address: 0x2f0ef0, Func Offset: 0x1f0
	// Line 520, Address: 0x2f0f00, Func Offset: 0x200
	// Line 521, Address: 0x2f0f14, Func Offset: 0x214
	// Line 520, Address: 0x2f0f18, Func Offset: 0x218
	// Line 521, Address: 0x2f0f1c, Func Offset: 0x21c
	// Line 520, Address: 0x2f0f20, Func Offset: 0x220
	// Line 521, Address: 0x2f0f38, Func Offset: 0x238
	// Line 522, Address: 0x2f0f3c, Func Offset: 0x23c
	// Line 524, Address: 0x2f0f44, Func Offset: 0x244
	// Line 527, Address: 0x2f0f48, Func Offset: 0x248
	// Func End, Address: 0x2f0f58, Func Offset: 0x258
}

// 
// Start address: 0x2f0f60
void spear_pull()
{
	sgBone* bone;
	float ftime;
	// Line 531, Address: 0x2f0f60, Func Offset: 0
	// Line 534, Address: 0x2f0f64, Func Offset: 0x4
	// Line 531, Address: 0x2f0f68, Func Offset: 0x8
	// Line 534, Address: 0x2f0f6c, Func Offset: 0xc
	// Line 531, Address: 0x2f0f70, Func Offset: 0x10
	// Line 534, Address: 0x2f0f74, Func Offset: 0x14
	// Line 537, Address: 0x2f0f80, Func Offset: 0x20
	// Line 538, Address: 0x2f0f98, Func Offset: 0x38
	// Line 539, Address: 0x2f0fb4, Func Offset: 0x54
	// Line 540, Address: 0x2f0fbc, Func Offset: 0x5c
	// Line 541, Address: 0x2f0fc8, Func Offset: 0x68
	// Line 542, Address: 0x2f0fe4, Func Offset: 0x84
	// Line 543, Address: 0x2f0fec, Func Offset: 0x8c
	// Line 546, Address: 0x2f0ff0, Func Offset: 0x90
	// Line 547, Address: 0x2f1000, Func Offset: 0xa0
	// Line 546, Address: 0x2f1004, Func Offset: 0xa4
	// Line 547, Address: 0x2f1008, Func Offset: 0xa8
	// Line 548, Address: 0x2f1038, Func Offset: 0xd8
	// Line 551, Address: 0x2f106c, Func Offset: 0x10c
	// Line 552, Address: 0x2f1088, Func Offset: 0x128
	// Line 553, Address: 0x2f1090, Func Offset: 0x130
	// Line 554, Address: 0x2f10a0, Func Offset: 0x140
	// Line 553, Address: 0x2f10a4, Func Offset: 0x144
	// Line 556, Address: 0x2f10a8, Func Offset: 0x148
	// Line 554, Address: 0x2f10ac, Func Offset: 0x14c
	// Line 556, Address: 0x2f10b4, Func Offset: 0x154
	// Line 553, Address: 0x2f10bc, Func Offset: 0x15c
	// Line 554, Address: 0x2f10cc, Func Offset: 0x16c
	// Line 556, Address: 0x2f10d0, Func Offset: 0x170
	// Line 554, Address: 0x2f10d4, Func Offset: 0x174
	// Line 556, Address: 0x2f10d8, Func Offset: 0x178
	// Line 557, Address: 0x2f10e4, Func Offset: 0x184
	// Line 560, Address: 0x2f10e8, Func Offset: 0x188
	// Func End, Address: 0x2f10fc, Func Offset: 0x19c
}

// 
// Start address: 0x2f1100
void spear_pullend()
{
	// Line 564, Address: 0x2f1100, Func Offset: 0
	// Line 565, Address: 0x2f1104, Func Offset: 0x4
	// Line 564, Address: 0x2f1108, Func Offset: 0x8
	// Line 565, Address: 0x2f110c, Func Offset: 0xc
	// Line 568, Address: 0x2f1118, Func Offset: 0x18
	// Line 570, Address: 0x2f1120, Func Offset: 0x20
	// Line 572, Address: 0x2f1134, Func Offset: 0x34
	// Line 573, Address: 0x2f113c, Func Offset: 0x3c
	// Line 574, Address: 0x2f114c, Func Offset: 0x4c
	// Line 575, Address: 0x2f1154, Func Offset: 0x54
	// Line 578, Address: 0x2f115c, Func Offset: 0x5c
	// Line 581, Address: 0x2f1160, Func Offset: 0x60
	// Func End, Address: 0x2f116c, Func Offset: 0x6c
}

// 
// Start address: 0x2f1170
void spear_stabstart()
{
	sgBone* bone;
	// Line 585, Address: 0x2f1170, Func Offset: 0
	// Line 587, Address: 0x2f1174, Func Offset: 0x4
	// Line 585, Address: 0x2f1178, Func Offset: 0x8
	// Line 587, Address: 0x2f117c, Func Offset: 0xc
	// Line 590, Address: 0x2f118c, Func Offset: 0x1c
	// Line 591, Address: 0x2f119c, Func Offset: 0x2c
	// Line 590, Address: 0x2f11a0, Func Offset: 0x30
	// Line 591, Address: 0x2f11a4, Func Offset: 0x34
	// Line 592, Address: 0x2f11d4, Func Offset: 0x64
	// Line 593, Address: 0x2f1230, Func Offset: 0xc0
	// Line 595, Address: 0x2f1264, Func Offset: 0xf4
	// Line 597, Address: 0x2f1274, Func Offset: 0x104
	// Line 595, Address: 0x2f1278, Func Offset: 0x108
	// Line 597, Address: 0x2f127c, Func Offset: 0x10c
	// Line 595, Address: 0x2f128c, Func Offset: 0x11c
	// Line 597, Address: 0x2f129c, Func Offset: 0x12c
	// Line 599, Address: 0x2f12b0, Func Offset: 0x140
	// Line 600, Address: 0x2f12c0, Func Offset: 0x150
	// Line 603, Address: 0x2f12cc, Func Offset: 0x15c
	// Func End, Address: 0x2f12dc, Func Offset: 0x16c
}

// 
// Start address: 0x2f12e0
void spear_stab()
{
	sgBone* bone;
	float ftime;
	float sf;
	float rpf;
	float target;
	float xx;
	float zz;
	sgBone* bone;
	float q_s[4];
	float q_n[4];
	float p_s[4];
	// Line 607, Address: 0x2f12e0, Func Offset: 0
	// Line 610, Address: 0x2f12e4, Func Offset: 0x4
	// Line 607, Address: 0x2f12e8, Func Offset: 0x8
	// Line 610, Address: 0x2f12ec, Func Offset: 0xc
	// Line 607, Address: 0x2f12f0, Func Offset: 0x10
	// Line 610, Address: 0x2f12f4, Func Offset: 0x14
	// Line 607, Address: 0x2f12f8, Func Offset: 0x18
	// Line 610, Address: 0x2f12fc, Func Offset: 0x1c
	// Line 613, Address: 0x2f1304, Func Offset: 0x24
	// Line 614, Address: 0x2f1314, Func Offset: 0x34
	// Line 613, Address: 0x2f1318, Func Offset: 0x38
	// Line 614, Address: 0x2f131c, Func Offset: 0x3c
	// Line 615, Address: 0x2f134c, Func Offset: 0x6c
	// Line 617, Address: 0x2f1380, Func Offset: 0xa0
	// Line 620, Address: 0x2f1398, Func Offset: 0xb8
	// Line 624, Address: 0x2f13b8, Func Offset: 0xd8
	// Line 628, Address: 0x2f13c0, Func Offset: 0xe0
	// Line 624, Address: 0x2f13c4, Func Offset: 0xe4
	// Line 628, Address: 0x2f13c8, Func Offset: 0xe8
	// Line 624, Address: 0x2f13cc, Func Offset: 0xec
	// Line 628, Address: 0x2f13d8, Func Offset: 0xf8
	// Line 629, Address: 0x2f13e0, Func Offset: 0x100
	// Line 628, Address: 0x2f13e8, Func Offset: 0x108
	// Line 629, Address: 0x2f13ec, Func Offset: 0x10c
	// Line 630, Address: 0x2f13f4, Func Offset: 0x114
	// Line 632, Address: 0x2f13fc, Func Offset: 0x11c
	// Line 630, Address: 0x2f1404, Func Offset: 0x124
	// Line 632, Address: 0x2f1408, Func Offset: 0x128
	// Line 633, Address: 0x2f1410, Func Offset: 0x130
	// Line 635, Address: 0x2f1420, Func Offset: 0x140
	// Line 637, Address: 0x2f1428, Func Offset: 0x148
	// Line 638, Address: 0x2f143c, Func Offset: 0x15c
	// Line 639, Address: 0x2f1448, Func Offset: 0x168
	// Line 641, Address: 0x2f1450, Func Offset: 0x170
	// Line 643, Address: 0x2f1464, Func Offset: 0x184
	// Line 644, Address: 0x2f1468, Func Offset: 0x188
	// Line 645, Address: 0x2f1474, Func Offset: 0x194
	// Line 646, Address: 0x2f1480, Func Offset: 0x1a0
	// Line 647, Address: 0x2f149c, Func Offset: 0x1bc
	// Line 648, Address: 0x2f14a4, Func Offset: 0x1c4
	// Line 649, Address: 0x2f14b0, Func Offset: 0x1d0
	// Line 650, Address: 0x2f14dc, Func Offset: 0x1fc
	// Line 651, Address: 0x2f14e4, Func Offset: 0x204
	// Line 658, Address: 0x2f14f4, Func Offset: 0x214
	// Line 659, Address: 0x2f1508, Func Offset: 0x228
	// Line 660, Address: 0x2f1514, Func Offset: 0x234
	// Line 662, Address: 0x2f153c, Func Offset: 0x25c
	// Line 663, Address: 0x2f154c, Func Offset: 0x26c
	// Line 664, Address: 0x2f1558, Func Offset: 0x278
	// Line 665, Address: 0x2f1564, Func Offset: 0x284
	// Line 666, Address: 0x2f1570, Func Offset: 0x290
	// Line 665, Address: 0x2f1574, Func Offset: 0x294
	// Line 666, Address: 0x2f1578, Func Offset: 0x298
	// Line 665, Address: 0x2f157c, Func Offset: 0x29c
	// Line 666, Address: 0x2f1588, Func Offset: 0x2a8
	// Line 667, Address: 0x2f1590, Func Offset: 0x2b0
	// Line 668, Address: 0x2f15c8, Func Offset: 0x2e8
	// Line 670, Address: 0x2f15fc, Func Offset: 0x31c
	// Line 673, Address: 0x2f1600, Func Offset: 0x320
	// Func End, Address: 0x2f1618, Func Offset: 0x338
}

// 
// Start address: 0x2f1620
void spear_stabend()
{
	// Line 677, Address: 0x2f1620, Func Offset: 0
	// Line 678, Address: 0x2f1624, Func Offset: 0x4
	// Line 677, Address: 0x2f1628, Func Offset: 0x8
	// Line 678, Address: 0x2f162c, Func Offset: 0xc
	// Line 680, Address: 0x2f1638, Func Offset: 0x18
	// Line 681, Address: 0x2f164c, Func Offset: 0x2c
	// Line 682, Address: 0x2f1654, Func Offset: 0x34
	// Line 683, Address: 0x2f165c, Func Offset: 0x3c
	// Line 684, Address: 0x2f166c, Func Offset: 0x4c
	// Line 685, Address: 0x2f1674, Func Offset: 0x54
	// Line 688, Address: 0x2f1680, Func Offset: 0x60
	// Line 692, Address: 0x2f1688, Func Offset: 0x68
	// Func End, Address: 0x2f1694, Func Offset: 0x74
}

// 
// Start address: 0x2f16a0
void spear_cantpull()
{
	// Line 696, Address: 0x2f16a0, Func Offset: 0
	// Line 697, Address: 0x2f16a4, Func Offset: 0x4
	// Line 696, Address: 0x2f16a8, Func Offset: 0x8
	// Line 697, Address: 0x2f16ac, Func Offset: 0xc
	// Line 698, Address: 0x2f16b8, Func Offset: 0x18
	// Line 700, Address: 0x2f16c4, Func Offset: 0x24
	// Line 698, Address: 0x2f16c8, Func Offset: 0x28
	// Line 700, Address: 0x2f16cc, Func Offset: 0x2c
	// Line 698, Address: 0x2f16d8, Func Offset: 0x38
	// Line 700, Address: 0x2f16e0, Func Offset: 0x40
	// Line 701, Address: 0x2f16ec, Func Offset: 0x4c
	// Line 702, Address: 0x2f16f0, Func Offset: 0x50
	// Line 703, Address: 0x2f16f8, Func Offset: 0x58
	// Line 704, Address: 0x2f1708, Func Offset: 0x68
	// Line 705, Address: 0x2f1710, Func Offset: 0x70
	// Line 709, Address: 0x2f1718, Func Offset: 0x78
	// Func End, Address: 0x2f1724, Func Offset: 0x84
}

// 
// Start address: 0x2f1730
int PlayerSpearMain()
{
	// Line 713, Address: 0x2f1730, Func Offset: 0
	// Line 716, Address: 0x2f1734, Func Offset: 0x4
	// Line 713, Address: 0x2f1738, Func Offset: 0x8
	// Line 716, Address: 0x2f173c, Func Offset: 0xc
	// Line 717, Address: 0x2f1750, Func Offset: 0x20
	// Line 718, Address: 0x2f1760, Func Offset: 0x30
	// Line 717, Address: 0x2f1768, Func Offset: 0x38
	// Line 718, Address: 0x2f1770, Func Offset: 0x40
	// Line 719, Address: 0x2f177c, Func Offset: 0x4c
	// Line 721, Address: 0x2f1784, Func Offset: 0x54
	// Line 723, Address: 0x2f1788, Func Offset: 0x58
	// Line 726, Address: 0x2f17b8, Func Offset: 0x88
	// Line 728, Address: 0x2f17c0, Func Offset: 0x90
	// Line 729, Address: 0x2f17ec, Func Offset: 0xbc
	// Line 730, Address: 0x2f17f0, Func Offset: 0xc0
	// Line 731, Address: 0x2f17f8, Func Offset: 0xc8
	// Line 733, Address: 0x2f1800, Func Offset: 0xd0
	// Line 734, Address: 0x2f1808, Func Offset: 0xd8
	// Line 736, Address: 0x2f1810, Func Offset: 0xe0
	// Line 737, Address: 0x2f1818, Func Offset: 0xe8
	// Line 739, Address: 0x2f1820, Func Offset: 0xf0
	// Line 740, Address: 0x2f1828, Func Offset: 0xf8
	// Line 742, Address: 0x2f1830, Func Offset: 0x100
	// Line 743, Address: 0x2f1838, Func Offset: 0x108
	// Line 745, Address: 0x2f1840, Func Offset: 0x110
	// Line 746, Address: 0x2f1848, Func Offset: 0x118
	// Line 748, Address: 0x2f1850, Func Offset: 0x120
	// Line 749, Address: 0x2f1858, Func Offset: 0x128
	// Line 751, Address: 0x2f1860, Func Offset: 0x130
	// Line 752, Address: 0x2f1868, Func Offset: 0x138
	// Line 754, Address: 0x2f1870, Func Offset: 0x140
	// Line 798, Address: 0x2f1878, Func Offset: 0x148
	// Line 801, Address: 0x2f1888, Func Offset: 0x158
	// Func End, Address: 0x2f1894, Func Offset: 0x164
}

// 
// Start address: 0x2f18a0
void PlayerSpearSceneEnd()
{
	// Line 808, Address: 0x2f18a0, Func Offset: 0
	// Func End, Address: 0x2f18a8, Func Offset: 0x8
}

