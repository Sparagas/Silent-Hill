typedef enum GameItem : unsigned char;
typedef struct sfObj;
typedef struct _anon0;
typedef struct sgBone;
typedef struct _anon1;
typedef struct _PLAYER_WORK;
typedef struct sgAnime;
typedef struct sgIKHandle;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef struct sfCharacter;
typedef struct _anon5;
typedef struct _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef struct sfCldObject;
typedef union _anon9;
typedef struct _EventInst;
typedef struct sgQTNode;
typedef struct sfCldPart;
typedef struct _GAME_WORK;
typedef struct _anon10;
typedef struct _EventDriver;
typedef enum sgIKSolveResult : unsigned char;
typedef struct _anon11;
typedef struct sgSVModel;
typedef struct sgQTObject;
typedef struct sfOffsetAABB;
typedef struct EventFlag;
typedef union sfCldBody;
typedef struct _anon12;

typedef void(*type_5)(_anon1*, int, int, float*);
typedef void(*type_8)(sgAnime*, int);
typedef void(*type_13)(sfObj*);
typedef void(*type_17)(sfObj*);
typedef int(*type_19)(sfObj*);
typedef int(*type_22)(sfObj*);
typedef int(*type_29)(sfObj*);
typedef void(*type_30)(sfObj*);
typedef int(*type_32)(sfObj*);
typedef int(*type_36)(sfObj*);
typedef int(*type_40)(sfObj*);
typedef int(*type_42)(sfObj*);
typedef sgIKSolveResult(*type_43)();

typedef float type_0[4];
typedef unsigned int type_1[2];
typedef unsigned char type_2[3];
typedef unsigned int type_3[4];
typedef unsigned int type_4[4];
typedef void* type_6[4];
typedef unsigned int type_7[2];
typedef float type_9[4][4];
typedef float type_10[4];
typedef unsigned char type_11[4];
typedef int type_12[1];
typedef int type_14[1];
typedef int type_15[1];
typedef _anon9 type_16[256];
typedef sfCldPart* type_18[6];
typedef int type_20[1];
typedef unsigned char type_21[3];
typedef int type_23[1];
typedef short type_24[2];
typedef unsigned int type_25[3];
typedef unsigned short type_26[2];
typedef int type_27[1];
typedef char type_28[4];
typedef unsigned char type_31[4];
typedef float type_33[1];
typedef unsigned int type_34[3];
typedef int type_35[1];
typedef float type_37[4][4];
typedef float type_38[4];
typedef float type_39[4][2];
typedef int type_41[1];
typedef _anon9 type_44[4];
typedef unsigned char type_45[320];

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

struct _anon0
{
	int is_eileen_stand_ok;
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
	unsigned long tex0;
	unsigned long clamp;
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
	_anon10* anim_ctrl;
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

struct _anon2
{
	_anon3 model;
	int draw_flag;
};

struct _anon3
{
	void* texture_normal;
	void* texture_global;
	void* texture_semitrans;
	void* model_data;
	sgBone* parent_bone;
};

struct _anon4
{
	sfCharacter chara;
	int half_demo_start;
	int demo_id;
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

struct _anon5
{
	float start[4];
	float end[4];
};

struct _anon6
{
	float center[4];
	float radius;
};

struct _anon7
{
	float bmin[4];
	float bmax[4];
};

struct _anon8
{
	float mat[4][4];
	float half_w[4];
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

struct _EventInst
{
	_EventDriver evdrv;
	unsigned int attr;
	int(*drawaf)(sfObj*);
	int(*endexitf)(sfObj*);
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

struct _anon10
{
	int dummy;
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
	_anon9 val[4];
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

struct _anon11
{
	float q[4];
	float t[4];
};

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
};

struct sgQTObject
{
	_anon6 bounding_ball;
	sgQTObject* next;
	sgQTObject* prev;
};

struct sfOffsetAABB
{
	_anon7 aabb;
	float offset[4];
};

struct EventFlag
{
	unsigned char flag[320];
};

union sfCldBody
{
	_anon8 obb;
	_anon7 aabb;
	sfOffsetAABB offset_aabb;
	_anon5 line;
	_anon6 sphere;
};

struct _anon12
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

unsigned int ev_water0_mz01_031_file[2];
_EventDriver ev_water0_mz01_031;
EventFlag event_flag;
_GAME_WORK gamew;
sfObj* and_obj;
void(*sfObjFuncDummy)(sfObj*);
_EventDriver ev_water0_mz01_032;
unsigned char jump_land_complete_flag;
_anon9 jump_demo_bright;
_anon9 jump_demo_dark;
_EventDriver ev_water0_mz_jump;
_EventDriver ev_water0_escape_andrew;
_EventDriver ev_water0_valve_demo_r;
_EventDriver ev_water0_valve_demo_l;
_EventDriver ev_water0_valve_demo_at_3f_r;
_EventDriver ev_water0_valve_demo_at_3f_l;
unsigned int ev_water0_escape_andrew_file[4];
unsigned int ev_water0_mz35_033_file[4];
_EventDriver ev_water0_mz35_033;
unsigned int ev_water0_mz33_224_file[2];
_EventDriver ev_water0_mz33_224_demo;
_EventDriver ev_water0_mz33_224;
unsigned int ev_water0_mz39_105_file[3];
_EventDriver ev_water0_mz39_105;
unsigned int ev_water0_mz33_186_file[3];
int mz33_set_continue;
_EventDriver ev_water0_mz33_186;
_EventDriver ev_water0_mz40_2706;

int ev_water0_mz01_031_end(sfObj* obj);
int ev_water0_andrew_trg();
void ev_water0_andrew_init();
void ev_water0_andrew_exec();
void ev_water0_andrew_draw();
void ev_water0_andrew_end();
int ev_water0_mz01_032_trgchk();
int ev_water0_mz01_032_init();
int ev_water0_mz01_032_exec();
int ev_water0_mz01_032_draw();
int ev_water0_mz01_032_end();
int ev_water0_mz_jump_init(sfObj* obj);
int ev_water0_mz_jump_exec(sfObj* obj);
int ev_water0_mz_jump_end(sfObj* obj);
int ev_water_valve_demo_init(sfObj* obj);
int ev_water_valve_demo_exec(sfObj* obj);
int ev_water_valve_demo_draw(sfObj* obj);
int ev_water_valve_demo_end(sfObj* obj);
int ev_water_valve_demo_at_3f_end(sfObj* obj);
int ev_water0_escape_andrew_init(sfObj* obj);
int ev_water0_escape_andrew_exec(sfObj* obj);
int ev_water0_escape_andrew_draw(sfObj* obj);
int ev_water0_escape_andrew_end();
int ev_water0_mz35_033_trgchk();
int ev_water0_mz35_033_exec(sfObj* obj);
int ev_water0_mz35_033_end(sfObj* obj);
int ev_water0_mz33_224_demo_end(sfObj* obj);
int ev_water0_gate_end();
int ev_water0_mz39_105_end(sfObj* obj);
int ev_water0_mz33_186_end(sfObj* obj);
int ev_water0_mz40_2706_trgchk();

// 
// Start address: 0x1ed95f0
int ev_water0_mz01_031_end(sfObj* obj)
{
	// Line 97, Address: 0x1ed95f0, Func Offset: 0
	// Line 99, Address: 0x1ed95fc, Func Offset: 0xc
	// Line 101, Address: 0x1ed9604, Func Offset: 0x14
	// Line 104, Address: 0x1ed960c, Func Offset: 0x1c
	// Line 103, Address: 0x1ed9610, Func Offset: 0x20
	// Line 104, Address: 0x1ed9614, Func Offset: 0x24
	// Func End, Address: 0x1ed9620, Func Offset: 0x30
}

// 
// Start address: 0x1ed9620
int ev_water0_andrew_trg()
{
	// Line 130, Address: 0x1ed9620, Func Offset: 0
	// Line 131, Address: 0x1ed9630, Func Offset: 0x10
	// Func End, Address: 0x1ed9638, Func Offset: 0x18
}

// 
// Start address: 0x1ed9640
void ev_water0_andrew_init()
{
	// Line 134, Address: 0x1ed9640, Func Offset: 0
	// Line 135, Address: 0x1ed9648, Func Offset: 0x8
	// Line 136, Address: 0x1ed9654, Func Offset: 0x14
	// Line 135, Address: 0x1ed9658, Func Offset: 0x18
	// Line 136, Address: 0x1ed965c, Func Offset: 0x1c
	// Line 137, Address: 0x1ed966c, Func Offset: 0x2c
	// Line 138, Address: 0x1ed967c, Func Offset: 0x3c
	// Line 140, Address: 0x1ed9690, Func Offset: 0x50
	// Line 138, Address: 0x1ed9694, Func Offset: 0x54
	// Line 140, Address: 0x1ed9698, Func Offset: 0x58
	// Line 141, Address: 0x1ed96a0, Func Offset: 0x60
	// Line 143, Address: 0x1ed96b4, Func Offset: 0x74
	// Line 144, Address: 0x1ed96bc, Func Offset: 0x7c
	// Line 145, Address: 0x1ed96c0, Func Offset: 0x80
	// Func End, Address: 0x1ed96cc, Func Offset: 0x8c
}

// 
// Start address: 0x1ed96d0
void ev_water0_andrew_exec()
{
	_anon4* wk;
	float pos[4];
	// Line 148, Address: 0x1ed96d0, Func Offset: 0
	// Line 150, Address: 0x1ed96d4, Func Offset: 0x4
	// Line 148, Address: 0x1ed96d8, Func Offset: 0x8
	// Line 150, Address: 0x1ed96e4, Func Offset: 0x14
	// Line 148, Address: 0x1ed96e8, Func Offset: 0x18
	// Line 150, Address: 0x1ed96ec, Func Offset: 0x1c
	// Line 148, Address: 0x1ed96f0, Func Offset: 0x20
	// Line 150, Address: 0x1ed96f4, Func Offset: 0x24
	// Line 149, Address: 0x1ed96f8, Func Offset: 0x28
	// Line 152, Address: 0x1ed96fc, Func Offset: 0x2c
	// Line 150, Address: 0x1ed9700, Func Offset: 0x30
	// Line 152, Address: 0x1ed9704, Func Offset: 0x34
	// Line 154, Address: 0x1ed9720, Func Offset: 0x50
	// Line 155, Address: 0x1ed9748, Func Offset: 0x78
	// Line 156, Address: 0x1ed9750, Func Offset: 0x80
	// Line 158, Address: 0x1ed975c, Func Offset: 0x8c
	// Line 161, Address: 0x1ed9788, Func Offset: 0xb8
	// Line 162, Address: 0x1ed9794, Func Offset: 0xc4
	// Line 163, Address: 0x1ed97a4, Func Offset: 0xd4
	// Line 164, Address: 0x1ed97ac, Func Offset: 0xdc
	// Line 165, Address: 0x1ed97b0, Func Offset: 0xe0
	// Line 166, Address: 0x1ed97c0, Func Offset: 0xf0
	// Line 167, Address: 0x1ed97e8, Func Offset: 0x118
	// Line 168, Address: 0x1ed97f0, Func Offset: 0x120
	// Line 169, Address: 0x1ed97fc, Func Offset: 0x12c
	// Line 170, Address: 0x1ed9800, Func Offset: 0x130
	// Line 172, Address: 0x1ed981c, Func Offset: 0x14c
	// Line 171, Address: 0x1ed9820, Func Offset: 0x150
	// Line 172, Address: 0x1ed9824, Func Offset: 0x154
	// Line 174, Address: 0x1ed9834, Func Offset: 0x164
	// Line 175, Address: 0x1ed983c, Func Offset: 0x16c
	// Line 176, Address: 0x1ed9840, Func Offset: 0x170
	// Line 178, Address: 0x1ed9868, Func Offset: 0x198
	// Line 179, Address: 0x1ed9874, Func Offset: 0x1a4
	// Line 184, Address: 0x1ed987c, Func Offset: 0x1ac
	// Line 185, Address: 0x1ed9880, Func Offset: 0x1b0
	// Func End, Address: 0x1ed9894, Func Offset: 0x1c4
}

// 
// Start address: 0x1ed98a0
void ev_water0_andrew_draw()
{
	_anon4* wk;
	// Line 188, Address: 0x1ed98a0, Func Offset: 0
	// Line 189, Address: 0x1ed98a4, Func Offset: 0x4
	// Line 188, Address: 0x1ed98a8, Func Offset: 0x8
	// Line 189, Address: 0x1ed98ac, Func Offset: 0xc
	// Line 191, Address: 0x1ed98b4, Func Offset: 0x14
	// Line 192, Address: 0x1ed98c0, Func Offset: 0x20
	// Line 194, Address: 0x1ed98c8, Func Offset: 0x28
	// Func End, Address: 0x1ed98d4, Func Offset: 0x34
}

// 
// Start address: 0x1ed98e0
void ev_water0_andrew_end()
{
	_anon4* wk;
	// Line 425, Address: 0x1ed98e0, Func Offset: 0
	// Line 429, Address: 0x1ed9904, Func Offset: 0x24
	// Line 430, Address: 0x1ed9910, Func Offset: 0x30
	// Line 434, Address: 0x1ed9918, Func Offset: 0x38
	// Line 435, Address: 0x1ed994c, Func Offset: 0x6c
	// Line 436, Address: 0x1ed9950, Func Offset: 0x70
	// Line 437, Address: 0x1ed9958, Func Offset: 0x78
	// Line 438, Address: 0x1ed9960, Func Offset: 0x80
	// Line 439, Address: 0x1ed9964, Func Offset: 0x84
	// Line 440, Address: 0x1ed996c, Func Offset: 0x8c
	// Line 441, Address: 0x1ed9970, Func Offset: 0x90
	// Line 442, Address: 0x1ed9978, Func Offset: 0x98
	// Line 443, Address: 0x1ed9980, Func Offset: 0xa0
	// Line 444, Address: 0x1ed9984, Func Offset: 0xa4
	// Line 445, Address: 0x1ed998c, Func Offset: 0xac
	// Line 446, Address: 0x1ed9990, Func Offset: 0xb0
	// Line 447, Address: 0x1ed9998, Func Offset: 0xb8
	// Line 448, Address: 0x1ed99a0, Func Offset: 0xc0
	// Line 452, Address: 0x1ed99a8, Func Offset: 0xc8
	// Line 453, Address: 0x1ed99dc, Func Offset: 0xfc
	// Line 454, Address: 0x1ed99e0, Func Offset: 0x100
	// Line 455, Address: 0x1ed99e8, Func Offset: 0x108
	// Line 457, Address: 0x1ed99f4, Func Offset: 0x114
	// Line 459, Address: 0x1ed99fc, Func Offset: 0x11c
	// Line 462, Address: 0x1ed9a10, Func Offset: 0x130
	// Line 465, Address: 0x1ed9a18, Func Offset: 0x138
	// Line 466, Address: 0x1ed9a2c, Func Offset: 0x14c
	// Line 467, Address: 0x1ed9a40, Func Offset: 0x160
	// Line 469, Address: 0x1ed9a58, Func Offset: 0x178
	// Line 470, Address: 0x1ed9a5c, Func Offset: 0x17c
	// Line 469, Address: 0x1ed9a60, Func Offset: 0x180
	// Line 471, Address: 0x1ed9a64, Func Offset: 0x184
	// Line 472, Address: 0x1ed9a6c, Func Offset: 0x18c
	// Line 474, Address: 0x1ed9a74, Func Offset: 0x194
	// Line 477, Address: 0x1ed9a7c, Func Offset: 0x19c
	// Line 481, Address: 0x1ed9a90, Func Offset: 0x1b0
	// Line 482, Address: 0x1ed9a9c, Func Offset: 0x1bc
	// Line 488, Address: 0x1ed9aa8, Func Offset: 0x1c8
	// Line 489, Address: 0x1ed9ab0, Func Offset: 0x1d0
	// Line 492, Address: 0x1ed9ad4, Func Offset: 0x1f4
	// Line 494, Address: 0x1ed9af4, Func Offset: 0x214
	// Line 495, Address: 0x1ed9afc, Func Offset: 0x21c
	// Line 497, Address: 0x1ed9b08, Func Offset: 0x228
	// Line 498, Address: 0x1ed9b14, Func Offset: 0x234
	// Line 499, Address: 0x1ed9b1c, Func Offset: 0x23c
	// Line 501, Address: 0x1ed9b24, Func Offset: 0x244
	// Line 502, Address: 0x1ed9b28, Func Offset: 0x248
	// Line 504, Address: 0x1ed9b30, Func Offset: 0x250
	// Line 506, Address: 0x1ed9b44, Func Offset: 0x264
	// Line 507, Address: 0x1ed9b4c, Func Offset: 0x26c
	// Line 508, Address: 0x1ed9b58, Func Offset: 0x278
	// Line 509, Address: 0x1ed9b7c, Func Offset: 0x29c
	// Line 510, Address: 0x1ed9b84, Func Offset: 0x2a4
	// Line 509, Address: 0x1ed9b88, Func Offset: 0x2a8
	// Line 512, Address: 0x1ed9b8c, Func Offset: 0x2ac
	// Line 515, Address: 0x1ed9b94, Func Offset: 0x2b4
	// Line 516, Address: 0x1ed9bbc, Func Offset: 0x2dc
	// Line 517, Address: 0x1ed9bc4, Func Offset: 0x2e4
	// Line 518, Address: 0x1ed9bc8, Func Offset: 0x2e8
	// Line 521, Address: 0x1ed9bd0, Func Offset: 0x2f0
	// Line 524, Address: 0x1ed9bd8, Func Offset: 0x2f8
	// Line 525, Address: 0x1ed9c00, Func Offset: 0x320
	// Line 526, Address: 0x1ed9c24, Func Offset: 0x344
	// Line 528, Address: 0x1ed9c2c, Func Offset: 0x34c
	// Line 530, Address: 0x1ed9c34, Func Offset: 0x354
	// Line 531, Address: 0x1ed9c38, Func Offset: 0x358
	// Line 532, Address: 0x1ed9c48, Func Offset: 0x368
	// Line 535, Address: 0x1ed9c50, Func Offset: 0x370
	// Line 537, Address: 0x1ed9c54, Func Offset: 0x374
	// Line 535, Address: 0x1ed9c58, Func Offset: 0x378
	// Line 542, Address: 0x1ed9c5c, Func Offset: 0x37c
	// Line 544, Address: 0x1ed9c60, Func Offset: 0x380
	// Line 545, Address: 0x1ed9c64, Func Offset: 0x384
	// Func End, Address: 0x1ed9c88, Func Offset: 0x3a8
	// Line 197, Address: 0x1ed98e0, Func Offset: 0
	// Line 198, Address: 0x1ed98e4, Func Offset: 0x4
	// Line 197, Address: 0x1ed98e8, Func Offset: 0x8
	// Line 198, Address: 0x1ed98f0, Func Offset: 0x10
	// Line 199, Address: 0x1ed98f8, Func Offset: 0x18
	// Line 200, Address: 0x1ed9900, Func Offset: 0x20
	// Line 202, Address: 0x1ed9908, Func Offset: 0x28
	// Line 203, Address: 0x1ed9910, Func Offset: 0x30
	// Func End, Address: 0x1ed9920, Func Offset: 0x40
}

// 
// Start address: 0x1ed9920
int ev_water0_mz01_032_trgchk()
{
	// Line 209, Address: 0x1ed9920, Func Offset: 0
	// Func End, Address: 0x1ed9928, Func Offset: 0x8
}

// 
// Start address: 0x1ed9930
int ev_water0_mz01_032_init()
{
	// Line 213, Address: 0x1ed9930, Func Offset: 0
	// Line 214, Address: 0x1ed9938, Func Offset: 0x8
	// Line 217, Address: 0x1ed9940, Func Offset: 0x10
	// Line 216, Address: 0x1ed9944, Func Offset: 0x14
	// Line 217, Address: 0x1ed9948, Func Offset: 0x18
	// Func End, Address: 0x1ed9950, Func Offset: 0x20
}

// 
// Start address: 0x1ed9950
int ev_water0_mz01_032_exec()
{
	float pos[4];
	// Line 220, Address: 0x1ed9950, Func Offset: 0
	// Line 222, Address: 0x1ed9954, Func Offset: 0x4
	// Line 220, Address: 0x1ed9958, Func Offset: 0x8
	// Line 222, Address: 0x1ed995c, Func Offset: 0xc
	// Line 225, Address: 0x1ed9968, Func Offset: 0x18
	// Line 227, Address: 0x1ed9970, Func Offset: 0x20
	// Line 229, Address: 0x1ed9978, Func Offset: 0x28
	// Line 230, Address: 0x1ed9988, Func Offset: 0x38
	// Line 231, Address: 0x1ed999c, Func Offset: 0x4c
	// Line 234, Address: 0x1ed99a0, Func Offset: 0x50
	// Line 233, Address: 0x1ed99a4, Func Offset: 0x54
	// Line 234, Address: 0x1ed99a8, Func Offset: 0x58
	// Func End, Address: 0x1ed99b0, Func Offset: 0x60
}

// 
// Start address: 0x1ed99b0
int ev_water0_mz01_032_draw()
{
	// Line 237, Address: 0x1ed99b0, Func Offset: 0
	// Line 238, Address: 0x1ed99b8, Func Offset: 0x8
	// Line 241, Address: 0x1ed99c0, Func Offset: 0x10
	// Line 240, Address: 0x1ed99c4, Func Offset: 0x14
	// Line 241, Address: 0x1ed99c8, Func Offset: 0x18
	// Func End, Address: 0x1ed99d0, Func Offset: 0x20
}

// 
// Start address: 0x1ed99d0
int ev_water0_mz01_032_end()
{
	// Line 244, Address: 0x1ed99d0, Func Offset: 0
	// Line 245, Address: 0x1ed99d8, Func Offset: 0x8
	// Line 248, Address: 0x1ed99e0, Func Offset: 0x10
	// Line 247, Address: 0x1ed99e4, Func Offset: 0x14
	// Line 248, Address: 0x1ed99e8, Func Offset: 0x18
	// Func End, Address: 0x1ed99f0, Func Offset: 0x20
}

// 
// Start address: 0x1ed99f0
int ev_water0_mz_jump_init(sfObj* obj)
{
	_EventInst* inst;
	// Line 277, Address: 0x1ed99f0, Func Offset: 0
	// Line 278, Address: 0x1ed9a04, Func Offset: 0x14
	// Line 279, Address: 0x1ed9a0c, Func Offset: 0x1c
	// Line 278, Address: 0x1ed9a10, Func Offset: 0x20
	// Line 279, Address: 0x1ed9a14, Func Offset: 0x24
	// Line 281, Address: 0x1ed9a18, Func Offset: 0x28
	// Line 282, Address: 0x1ed9a2c, Func Offset: 0x3c
	// Line 285, Address: 0x1ed9a34, Func Offset: 0x44
	// Line 288, Address: 0x1ed9a38, Func Offset: 0x48
	// Line 289, Address: 0x1ed9a48, Func Offset: 0x58
	// Line 290, Address: 0x1ed9a58, Func Offset: 0x68
	// Line 292, Address: 0x1ed9a60, Func Offset: 0x70
	// Line 293, Address: 0x1ed9a74, Func Offset: 0x84
	// Line 294, Address: 0x1ed9a78, Func Offset: 0x88
	// Line 296, Address: 0x1ed9a80, Func Offset: 0x90
	// Line 299, Address: 0x1ed9a88, Func Offset: 0x98
	// Line 298, Address: 0x1ed9a8c, Func Offset: 0x9c
	// Line 299, Address: 0x1ed9a90, Func Offset: 0xa0
	// Func End, Address: 0x1ed9aa4, Func Offset: 0xb4
}

// 
// Start address: 0x1ed9ab0
int ev_water0_mz_jump_exec(sfObj* obj)
{
	_anon0* wk;
	// Line 302, Address: 0x1ed9ab0, Func Offset: 0
	// Line 303, Address: 0x1ed9ac4, Func Offset: 0x14
	// Line 306, Address: 0x1ed9acc, Func Offset: 0x1c
	// Line 309, Address: 0x1ed9ae0, Func Offset: 0x30
	// Line 311, Address: 0x1ed9aec, Func Offset: 0x3c
	// Line 312, Address: 0x1ed9b00, Func Offset: 0x50
	// Line 315, Address: 0x1ed9b08, Func Offset: 0x58
	// Line 320, Address: 0x1ed9b10, Func Offset: 0x60
	// Line 321, Address: 0x1ed9b24, Func Offset: 0x74
	// Func End, Address: 0x1ed9b38, Func Offset: 0x88
}

// 
// Start address: 0x1ed9b40
int ev_water0_mz_jump_end(sfObj* obj)
{
	int scene;
	int next_scene;
	int floor;
	int door_index;
	int index;
	_PLAYER_WORK* wk;
	float player_pos[4];
	float player_rot;
	float dst[4][4];
	// Line 325, Address: 0x1ed9b40, Func Offset: 0
	// Line 326, Address: 0x1ed9b44, Func Offset: 0x4
	// Line 325, Address: 0x1ed9b48, Func Offset: 0x8
	// Line 327, Address: 0x1ed9b5c, Func Offset: 0x1c
	// Line 329, Address: 0x1ed9b68, Func Offset: 0x28
	// Line 330, Address: 0x1ed9b70, Func Offset: 0x30
	// Line 333, Address: 0x1ed9b78, Func Offset: 0x38
	// Line 344, Address: 0x1ed9b80, Func Offset: 0x40
	// Line 347, Address: 0x1ed9b88, Func Offset: 0x48
	// Line 352, Address: 0x1ed9ba0, Func Offset: 0x60
	// Line 353, Address: 0x1ed9bd0, Func Offset: 0x90
	// Line 354, Address: 0x1ed9bd8, Func Offset: 0x98
	// Line 355, Address: 0x1ed9be0, Func Offset: 0xa0
	// Line 356, Address: 0x1ed9be8, Func Offset: 0xa8
	// Line 357, Address: 0x1ed9bec, Func Offset: 0xac
	// Line 359, Address: 0x1ed9bf0, Func Offset: 0xb0
	// Line 371, Address: 0x1ed9bf8, Func Offset: 0xb8
	// Line 370, Address: 0x1ed9c0c, Func Offset: 0xcc
	// Line 371, Address: 0x1ed9c10, Func Offset: 0xd0
	// Line 372, Address: 0x1ed9c14, Func Offset: 0xd4
	// Line 373, Address: 0x1ed9c1c, Func Offset: 0xdc
	// Line 375, Address: 0x1ed9c28, Func Offset: 0xe8
	// Line 376, Address: 0x1ed9c30, Func Offset: 0xf0
	// Line 387, Address: 0x1ed9c3c, Func Offset: 0xfc
	// Line 390, Address: 0x1ed9c40, Func Offset: 0x100
	// Line 392, Address: 0x1ed9c48, Func Offset: 0x108
	// Line 394, Address: 0x1ed9c50, Func Offset: 0x110
	// Line 396, Address: 0x1ed9c54, Func Offset: 0x114
	// Line 394, Address: 0x1ed9c58, Func Offset: 0x118
	// Line 397, Address: 0x1ed9c5c, Func Offset: 0x11c
	// Func End, Address: 0x1ed9c74, Func Offset: 0x134
}

// 
// Start address: 0x1ed9c80
int ev_water_valve_demo_init(sfObj* obj)
{
	// Line 486, Address: 0x1ed9c80, Func Offset: 0
	// Line 487, Address: 0x1ed9c84, Func Offset: 0x4
	// Line 486, Address: 0x1ed9c88, Func Offset: 0x8
	// Line 487, Address: 0x1ed9c8c, Func Offset: 0xc
	// Line 486, Address: 0x1ed9c90, Func Offset: 0x10
	// Line 487, Address: 0x1ed9c94, Func Offset: 0x14
	// Line 488, Address: 0x1ed9ca0, Func Offset: 0x20
	// Line 490, Address: 0x1ed9ca8, Func Offset: 0x28
	// Line 491, Address: 0x1ed9cb0, Func Offset: 0x30
	// Func End, Address: 0x1ed9cc0, Func Offset: 0x40
}

// 
// Start address: 0x1ed9cc0
int ev_water_valve_demo_exec(sfObj* obj)
{
	// Line 494, Address: 0x1ed9cc0, Func Offset: 0
	// Line 495, Address: 0x1ed9ccc, Func Offset: 0xc
	// Line 496, Address: 0x1ed9cd4, Func Offset: 0x14
	// Line 497, Address: 0x1ed9cdc, Func Offset: 0x1c
	// Func End, Address: 0x1ed9cec, Func Offset: 0x2c
}

// 
// Start address: 0x1ed9cf0
int ev_water_valve_demo_draw(sfObj* obj)
{
	// Line 500, Address: 0x1ed9cf0, Func Offset: 0
	// Line 501, Address: 0x1ed9cfc, Func Offset: 0xc
	// Line 502, Address: 0x1ed9d04, Func Offset: 0x14
	// Line 503, Address: 0x1ed9d0c, Func Offset: 0x1c
	// Func End, Address: 0x1ed9d1c, Func Offset: 0x2c
}

// 
// Start address: 0x1ed9d20
int ev_water_valve_demo_end(sfObj* obj)
{
	// Line 506, Address: 0x1ed9d20, Func Offset: 0
	// Line 507, Address: 0x1ed9d2c, Func Offset: 0xc
	// Line 508, Address: 0x1ed9d34, Func Offset: 0x14
	// Line 509, Address: 0x1ed9d3c, Func Offset: 0x1c
	// Func End, Address: 0x1ed9d4c, Func Offset: 0x2c
}

// 
// Start address: 0x1ed9d50
int ev_water_valve_demo_at_3f_end(sfObj* obj)
{
	// Line 513, Address: 0x1ed9d50, Func Offset: 0
	// Line 514, Address: 0x1ed9d54, Func Offset: 0x4
	// Line 513, Address: 0x1ed9d58, Func Offset: 0x8
	// Line 514, Address: 0x1ed9d60, Func Offset: 0x10
	// Line 516, Address: 0x1ed9d70, Func Offset: 0x20
	// Line 518, Address: 0x1ed9d80, Func Offset: 0x30
	// Line 519, Address: 0x1ed9d88, Func Offset: 0x38
	// Line 520, Address: 0x1ed9d90, Func Offset: 0x40
	// Func End, Address: 0x1ed9da0, Func Offset: 0x50
}

// 
// Start address: 0x1ed9da0
int ev_water0_escape_andrew_init(sfObj* obj)
{
	_EventInst* evinst;
	_anon2* d;
	// Line 583, Address: 0x1ed9da0, Func Offset: 0
	// Line 584, Address: 0x1ed9da4, Func Offset: 0x4
	// Line 583, Address: 0x1ed9da8, Func Offset: 0x8
	// Line 584, Address: 0x1ed9db8, Func Offset: 0x18
	// Line 585, Address: 0x1ed9dc4, Func Offset: 0x24
	// Line 586, Address: 0x1ed9dd0, Func Offset: 0x30
	// Line 587, Address: 0x1ed9dd8, Func Offset: 0x38
	// Line 586, Address: 0x1ed9ddc, Func Offset: 0x3c
	// Line 590, Address: 0x1ed9de0, Func Offset: 0x40
	// Line 595, Address: 0x1ed9de8, Func Offset: 0x48
	// Line 596, Address: 0x1ed9df8, Func Offset: 0x58
	// Line 597, Address: 0x1ed9e04, Func Offset: 0x64
	// Line 599, Address: 0x1ed9e0c, Func Offset: 0x6c
	// Line 600, Address: 0x1ed9e14, Func Offset: 0x74
	// Line 602, Address: 0x1ed9e18, Func Offset: 0x78
	// Line 603, Address: 0x1ed9e20, Func Offset: 0x80
	// Func End, Address: 0x1ed9e38, Func Offset: 0x98
}

// 
// Start address: 0x1ed9e40
int ev_water0_escape_andrew_exec(sfObj* obj)
{
	int rtv;
	_anon2* d;
	_anon3* model;
	_anon11 qt;
	// Line 608, Address: 0x1ed9e40, Func Offset: 0
	// Line 611, Address: 0x1ed9e58, Func Offset: 0x18
	// Line 615, Address: 0x1ed9e64, Func Offset: 0x24
	// Line 616, Address: 0x1ed9e84, Func Offset: 0x44
	// Line 617, Address: 0x1ed9e88, Func Offset: 0x48
	// Line 618, Address: 0x1ed9e90, Func Offset: 0x50
	// Line 620, Address: 0x1ed9e98, Func Offset: 0x58
	// Line 621, Address: 0x1ed9ea0, Func Offset: 0x60
	// Line 623, Address: 0x1ed9eac, Func Offset: 0x6c
	// Line 624, Address: 0x1ed9ec4, Func Offset: 0x84
	// Line 625, Address: 0x1ed9edc, Func Offset: 0x9c
	// Line 627, Address: 0x1ed9ef4, Func Offset: 0xb4
	// Line 628, Address: 0x1ed9efc, Func Offset: 0xbc
	// Line 636, Address: 0x1ed9f04, Func Offset: 0xc4
	// Line 638, Address: 0x1ed9f08, Func Offset: 0xc8
	// Line 636, Address: 0x1ed9f0c, Func Offset: 0xcc
	// Line 638, Address: 0x1ed9f10, Func Offset: 0xd0
	// Line 633, Address: 0x1ed9f14, Func Offset: 0xd4
	// Line 638, Address: 0x1ed9f18, Func Offset: 0xd8
	// Line 634, Address: 0x1ed9f1c, Func Offset: 0xdc
	// Line 638, Address: 0x1ed9f20, Func Offset: 0xe0
	// Line 635, Address: 0x1ed9f24, Func Offset: 0xe4
	// Line 638, Address: 0x1ed9f28, Func Offset: 0xe8
	// Line 642, Address: 0x1ed9f58, Func Offset: 0x118
	// Line 645, Address: 0x1ed9f60, Func Offset: 0x120
	// Line 646, Address: 0x1ed9f68, Func Offset: 0x128
	// Line 650, Address: 0x1ed9f70, Func Offset: 0x130
	// Line 651, Address: 0x1ed9f80, Func Offset: 0x140
	// Line 652, Address: 0x1ed9f84, Func Offset: 0x144
	// Line 653, Address: 0x1ed9f88, Func Offset: 0x148
	// Line 660, Address: 0x1ed9f90, Func Offset: 0x150
	// Line 661, Address: 0x1ed9f94, Func Offset: 0x154
	// Func End, Address: 0x1ed9fac, Func Offset: 0x16c
}

// 
// Start address: 0x1ed9fb0
int ev_water0_escape_andrew_draw(sfObj* obj)
{
	_anon2* d;
	// Line 664, Address: 0x1ed9fb0, Func Offset: 0
	// Line 665, Address: 0x1ed9fc4, Func Offset: 0x14
	// Line 669, Address: 0x1ed9fcc, Func Offset: 0x1c
	// Line 670, Address: 0x1ed9fd8, Func Offset: 0x28
	// Line 674, Address: 0x1ed9fe0, Func Offset: 0x30
	// Line 675, Address: 0x1ed9fe8, Func Offset: 0x38
	// Func End, Address: 0x1ed9ff8, Func Offset: 0x48
}

// 
// Start address: 0x1eda000
int ev_water0_escape_andrew_end()
{
	// Line 678, Address: 0x1eda000, Func Offset: 0
	// Line 679, Address: 0x1eda008, Func Offset: 0x8
	// Line 682, Address: 0x1eda018, Func Offset: 0x18
	// Line 684, Address: 0x1eda020, Func Offset: 0x20
	// Line 685, Address: 0x1eda028, Func Offset: 0x28
	// Line 686, Address: 0x1eda030, Func Offset: 0x30
	// Line 688, Address: 0x1eda034, Func Offset: 0x34
	// Line 691, Address: 0x1eda03c, Func Offset: 0x3c
	// Line 694, Address: 0x1eda044, Func Offset: 0x44
	// Line 693, Address: 0x1eda048, Func Offset: 0x48
	// Line 694, Address: 0x1eda04c, Func Offset: 0x4c
	// Func End, Address: 0x1eda054, Func Offset: 0x54
}

// 
// Start address: 0x1eda060
int ev_water0_mz35_033_trgchk()
{
	// Line 727, Address: 0x1eda060, Func Offset: 0
	// Line 728, Address: 0x1eda088, Func Offset: 0x28
	// Func End, Address: 0x1eda090, Func Offset: 0x30
}

// 
// Start address: 0x1eda090
int ev_water0_mz35_033_exec(sfObj* obj)
{
	// Line 734, Address: 0x1eda090, Func Offset: 0
	// Line 735, Address: 0x1eda0a0, Func Offset: 0x10
	// Line 736, Address: 0x1eda0b0, Func Offset: 0x20
	// Line 738, Address: 0x1eda0c0, Func Offset: 0x30
	// Line 742, Address: 0x1eda0cc, Func Offset: 0x3c
	// Line 746, Address: 0x1eda0d8, Func Offset: 0x48
	// Line 747, Address: 0x1eda0e8, Func Offset: 0x58
	// Line 750, Address: 0x1eda0f0, Func Offset: 0x60
	// Line 751, Address: 0x1eda0f8, Func Offset: 0x68
	// Func End, Address: 0x1eda108, Func Offset: 0x78
}

// 
// Start address: 0x1eda110
int ev_water0_mz35_033_end(sfObj* obj)
{
	// Line 755, Address: 0x1eda110, Func Offset: 0
	// Line 756, Address: 0x1eda120, Func Offset: 0x10
	// Func End, Address: 0x1eda128, Func Offset: 0x18
}

// 
// Start address: 0x1eda130
int ev_water0_mz33_224_demo_end(sfObj* obj)
{
	// Line 780, Address: 0x1eda130, Func Offset: 0
	// Line 781, Address: 0x1eda140, Func Offset: 0x10
	// Func End, Address: 0x1eda148, Func Offset: 0x18
}

// 
// Start address: 0x1eda150
int ev_water0_gate_end()
{
	// Line 798, Address: 0x1eda150, Func Offset: 0
	// Line 799, Address: 0x1eda158, Func Offset: 0x8
	// Line 801, Address: 0x1eda168, Func Offset: 0x18
	// Line 802, Address: 0x1eda174, Func Offset: 0x24
	// Line 804, Address: 0x1eda178, Func Offset: 0x28
	// Line 803, Address: 0x1eda17c, Func Offset: 0x2c
	// Line 804, Address: 0x1eda180, Func Offset: 0x30
	// Func End, Address: 0x1eda188, Func Offset: 0x38
}

// 
// Start address: 0x1eda190
int ev_water0_mz39_105_end(sfObj* obj)
{
	// Line 828, Address: 0x1eda190, Func Offset: 0
	// Line 829, Address: 0x1eda198, Func Offset: 0x8
	// Line 837, Address: 0x1eda1a0, Func Offset: 0x10
	// Line 840, Address: 0x1eda1a8, Func Offset: 0x18
	// Line 843, Address: 0x1eda1b0, Func Offset: 0x20
	// Line 842, Address: 0x1eda1b4, Func Offset: 0x24
	// Line 843, Address: 0x1eda1b8, Func Offset: 0x28
	// Func End, Address: 0x1eda1c0, Func Offset: 0x30
}

// 
// Start address: 0x1eda1c0
int ev_water0_mz33_186_end(sfObj* obj)
{
	float pos[4];
	// Line 905, Address: 0x1eda1c0, Func Offset: 0
	// Line 909, Address: 0x1eda1c4, Func Offset: 0x4
	// Line 905, Address: 0x1eda1c8, Func Offset: 0x8
	// Line 909, Address: 0x1eda1cc, Func Offset: 0xc
	// Line 912, Address: 0x1eda1e4, Func Offset: 0x24
	// Func End, Address: 0x1eda1f0, Func Offset: 0x30
	// Line 869, Address: 0x1eda1c0, Func Offset: 0
	// Line 873, Address: 0x1eda1c4, Func Offset: 0x4
	// Line 876, Address: 0x1eda1f0, Func Offset: 0x30
	// Line 882, Address: 0x1eda1f8, Func Offset: 0x38
	// Line 886, Address: 0x1eda200, Func Offset: 0x40
	// Line 889, Address: 0x1eda20c, Func Offset: 0x4c
	// Func End, Address: 0x1eda218, Func Offset: 0x58
}

// 
// Start address: 0x1eda220
int ev_water0_mz40_2706_trgchk()
{
	// Line 985, Address: 0x1eda220, Func Offset: 0
	// Line 1008, Address: 0x1eda230, Func Offset: 0x10
	// Line 1009, Address: 0x1eda238, Func Offset: 0x18
	// Line 1010, Address: 0x1eda244, Func Offset: 0x24
	// Line 1011, Address: 0x1eda24c, Func Offset: 0x2c
	// Line 1014, Address: 0x1eda260, Func Offset: 0x40
	// Line 1015, Address: 0x1eda268, Func Offset: 0x48
	// Line 1018, Address: 0x1eda270, Func Offset: 0x50
	// Line 1022, Address: 0x1eda278, Func Offset: 0x58
	// Line 1025, Address: 0x1eda288, Func Offset: 0x68
	// Line 1026, Address: 0x1eda29c, Func Offset: 0x7c
	// Line 1027, Address: 0x1eda2a4, Func Offset: 0x84
	// Line 1030, Address: 0x1eda2a8, Func Offset: 0x88
	// Line 1036, Address: 0x1eda2e0, Func Offset: 0xc0
	// Line 1037, Address: 0x1eda2f8, Func Offset: 0xd8
	// Line 1040, Address: 0x1eda314, Func Offset: 0xf4
	// Line 1041, Address: 0x1eda320, Func Offset: 0x100
	// Line 1045, Address: 0x1eda32c, Func Offset: 0x10c
	// Line 1048, Address: 0x1eda330, Func Offset: 0x110
	// Line 1050, Address: 0x1eda33c, Func Offset: 0x11c
	// Line 1053, Address: 0x1eda368, Func Offset: 0x148
	// Line 1054, Address: 0x1eda370, Func Offset: 0x150
	// Line 1055, Address: 0x1eda380, Func Offset: 0x160
	// Line 1057, Address: 0x1eda388, Func Offset: 0x168
	// Line 1055, Address: 0x1eda38c, Func Offset: 0x16c
	// Line 1057, Address: 0x1eda390, Func Offset: 0x170
	// Line 1059, Address: 0x1eda3a0, Func Offset: 0x180
	// Line 1061, Address: 0x1eda3a8, Func Offset: 0x188
	// Line 1063, Address: 0x1eda3b0, Func Offset: 0x190
	// Line 1064, Address: 0x1eda3b8, Func Offset: 0x198
	// Line 1065, Address: 0x1eda3c8, Func Offset: 0x1a8
	// Line 1066, Address: 0x1eda3d0, Func Offset: 0x1b0
	// Line 1068, Address: 0x1eda3d8, Func Offset: 0x1b8
	// Line 1071, Address: 0x1eda3f8, Func Offset: 0x1d8
	// Line 1072, Address: 0x1eda400, Func Offset: 0x1e0
	// Func End, Address: 0x1eda414, Func Offset: 0x1f4
	// Line 913, Address: 0x1eda220, Func Offset: 0
	// Line 916, Address: 0x1eda22c, Func Offset: 0xc
	// Func End, Address: 0x1eda234, Func Offset: 0x14
}

