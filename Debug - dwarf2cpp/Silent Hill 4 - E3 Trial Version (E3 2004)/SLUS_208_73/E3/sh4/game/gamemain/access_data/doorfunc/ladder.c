typedef struct sfObj;
typedef struct sfOffsetAABB;
typedef struct _anon0;
typedef union sfCldBody;
typedef struct _anon1;
typedef struct _anon2;
typedef struct sgIKHandle;
typedef struct _anon3;
typedef struct sfCldPart;
typedef enum GameItem : unsigned char;
typedef struct _anon4;
typedef struct _PLAYER_WORK;
typedef struct sgBone;
typedef struct sgAnime;
typedef enum _enum : unsigned char;
typedef struct sfCharacter;
typedef struct sgSVModel;
typedef union _anon5;
typedef struct _GAME_WORK;
typedef struct _anon6;
typedef struct _EventDriver;
typedef struct _anon7;
typedef struct sfCldObject;
typedef struct sgQTNode;
typedef struct _anon8;
typedef enum sgIKSolveResult : unsigned char;
typedef struct sgQTObject;
typedef struct EventFlag;

typedef sgIKSolveResult(*type_2)();
typedef void(*type_12)(sgAnime*, int);
typedef void(*type_24)(sfObj*);
typedef int(*type_29)(sfObj*);
typedef int(*type_30)(sfObj*);
typedef int(*type_32)(sfObj*);
typedef int(*type_34)(sfObj*);
typedef void(*type_36)(_anon6*, int, int, float*);
typedef void(*type_40)(sfObj*);
typedef int(*type_42)(sfObj*);

typedef float type_0[4][3];
typedef unsigned char type_1[320];
typedef _anon2 type_3[1];
typedef float type_4[4];
typedef _anon2 type_5[1];
typedef unsigned char type_6[3];
typedef _anon2 type_7[5];
typedef int type_8[1];
typedef void* type_9[4];
typedef int type_10[1];
typedef _anon2 type_11[1];
typedef float type_13[4][2];
typedef _anon2 type_14[1];
typedef int type_15[1];
typedef float type_16[4];
typedef float type_17[4];
typedef float type_18[4][4];
typedef _anon2 type_19[5];
typedef int type_20[1];
typedef unsigned char type_21[4];
typedef _anon5 type_22[256];
typedef _anon2* type_23[13];
typedef int type_25[1];
typedef float type_26[4][2];
typedef _anon2 type_27[7];
typedef int type_28[1];
typedef float type_31[4][3];
typedef _anon2 type_33[1];
typedef sfCldPart* type_35[6];
typedef short type_37[2];
typedef int type_38[1];
typedef unsigned char type_39[2];
typedef unsigned short type_41[2];
typedef unsigned char type_43[3];
typedef char type_44[4];
typedef unsigned char type_45[4];
typedef _anon5 type_46[4];
typedef float type_47[1];
typedef _anon2 type_48[1];
typedef int type_49[1];
typedef _anon2 type_50[1];
typedef float type_51[4][2];
typedef _anon2 type_52[1];
typedef float type_53[4][2];

struct sfObj
{
	_anon5 fwork[256];
	_anon5* work;
	void(*func)(sfObj*);
	_anon5* work_pt0;
	_anon5* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon5* sys_work;
	_anon5* scene_work;
	_anon5* event_work;
	_anon5* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

struct sfOffsetAABB
{
	_anon3 aabb;
	float offset[4];
};

struct _anon0
{
	float start[4];
	float end[4];
};

union sfCldBody
{
	_anon4 obb;
	_anon3 aabb;
	sfOffsetAABB offset_aabb;
	_anon0 line;
	_anon1 sphere;
};

struct _anon1
{
	float center[4];
	float radius;
};

struct _anon2
{
	unsigned char scene_no;
	unsigned char cur_door_no;
	unsigned char upstairs_scene;
	unsigned char upstairs_door_no;
	unsigned char downstairs_scene;
	unsigned char downstairs_door_no;
	unsigned char pad[2];
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
	float bmin[4];
	float bmax[4];
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
	float mat[4][4];
	float half_w[4];
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
	_anon8* anim_ctrl;
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

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon7 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
};

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
};

union _anon5
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

struct _anon6
{
	unsigned long tex0;
	unsigned long clamp;
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
	_anon5 val[4];
};

struct _anon7
{
	void* model;
	void* texture;
	void* texture_global;
	float matrices[4][4];
	float* weights;
	float tex_crops[4];
	void(*texture_load_func)(_anon6*, int, int, float*);
	int equip_flag;
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

struct _anon8
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
	_anon1 bounding_ball;
	sgQTObject* next;
	sgQTObject* prev;
};

struct EventFlag
{
	unsigned char flag[320];
};

_EventDriver ladder_up;
_EventDriver ladder_down;
_EventDriver ladder_updown;
_anon2 ladder_sb[5];
_anon2 ladder_fr[1];
_anon2 ladder_mz[5];
_anon2 ladder_bd[7];
_anon2 ladder_ie[1];
_anon2 ladder_hs[1];
_anon2 ladder_cm[1];
_anon2 ladder_ls[1];
_anon2 ladder_gt[1];
_anon2 ladder_sp[1];
_anon2 ladder_dummy[1];
_anon2* ladder_tbl[13];
_anon2 ladder_work;
_GAME_WORK gamew;
EventFlag event_flag;
_EventDriver ev_subway0_sb10_046;
_EventDriver ev_subway0_sb11_046;
_EventDriver ladder_sb10door31_down;
_EventDriver ladder_sb11door33_down;
float mz31_up_dst[4][3];
float mz31_down_dst[4][3];
float mz31_updown_dst[4][2];
_EventDriver mz31_ladder_up;
_EventDriver mz31_ladder_down;
_EventDriver mz31_ladder_updown;
float mz40_up_dst[4][2];
float mz40_down_dst[4][2];
_EventDriver mz40_ladder_up;
_EventDriver mz40_ladder_down;

_anon2* GetLadderData(int stage, int scene, int door_no);
int LadderConstruct(sfObj* obj);
int LadderUpDestruct(sfObj* obj);
int LadderDownDestruct(sfObj* obj);
int LadderUpDownDestruct(sfObj* obj);
int LadderCheckFunc(int scene_no);
int is_eileen_near();
int IsEv046AtSb10Door31(int scene_no);
int IsEv046AtSb11Door33(int scene_no);
int sb10door31_down_end(sfObj* obj);
int sb11door33_down_end(sfObj* obj);
int DoorCheckAtSb10Door31(int scene_no);
int DoorCheckAtSb11Door33(int scene_no);
void ladder_ui_init();
void ladder_ui_end();
int ladder_move(sfObj* obj, float* dst);
int ev_mz_ladder_exec(sfObj* obj, float* dst, float rot);
int ev_mz31_ladder_up_exec(sfObj* obj);
int ev_mz31_ladder_down_exec(sfObj* obj);
int ev_mz31_ladder_updown_exec(sfObj* obj);
int mz_ladder_construct(sfObj* obj);
int mz_ladder_destruct(sfObj* obj);
int ev_mz40_ladder_up_exec(sfObj* obj);
int ev_mz40_ladder_down_exec(sfObj* obj);

// 
// Start address: 0x2a6e90
_anon2* GetLadderData(int stage, int scene, int door_no)
{
	_anon2* rtv;
	_anon2* wk;
	// Line 215, Address: 0x2a6e90, Func Offset: 0
	// Line 216, Address: 0x2a6ea4, Func Offset: 0x14
	// Line 220, Address: 0x2a6eb0, Func Offset: 0x20
	// Line 221, Address: 0x2a6eb8, Func Offset: 0x28
	// Line 223, Address: 0x2a6ec8, Func Offset: 0x38
	// Line 225, Address: 0x2a6ed0, Func Offset: 0x40
	// Line 226, Address: 0x2a6ed4, Func Offset: 0x44
	// Line 225, Address: 0x2a6ed8, Func Offset: 0x48
	// Line 226, Address: 0x2a6edc, Func Offset: 0x4c
	// Line 240, Address: 0x2a6ef0, Func Offset: 0x60
	// Func End, Address: 0x2a6ef8, Func Offset: 0x68
}

// 
// Start address: 0x2a6f00
int LadderConstruct(sfObj* obj)
{
	// Line 246, Address: 0x2a6f00, Func Offset: 0
	// Line 247, Address: 0x2a6f04, Func Offset: 0x4
	// Line 246, Address: 0x2a6f08, Func Offset: 0x8
	// Line 247, Address: 0x2a6f10, Func Offset: 0x10
	// Line 249, Address: 0x2a6f20, Func Offset: 0x20
	// Line 252, Address: 0x2a6f28, Func Offset: 0x28
	// Line 254, Address: 0x2a6f50, Func Offset: 0x50
	// Line 257, Address: 0x2a6f58, Func Offset: 0x58
	// Line 256, Address: 0x2a6f5c, Func Offset: 0x5c
	// Line 257, Address: 0x2a6f60, Func Offset: 0x60
	// Func End, Address: 0x2a6f6c, Func Offset: 0x6c
}

// 
// Start address: 0x2a6f70
int LadderUpDestruct(sfObj* obj)
{
	_anon2* wk;
	// Line 261, Address: 0x2a6f70, Func Offset: 0
	// Line 264, Address: 0x2a6f7c, Func Offset: 0xc
	// Line 266, Address: 0x2a6f8c, Func Offset: 0x1c
	// Line 268, Address: 0x2a6f98, Func Offset: 0x28
	// Line 272, Address: 0x2a6fa0, Func Offset: 0x30
	// Line 271, Address: 0x2a6fa8, Func Offset: 0x38
	// Line 272, Address: 0x2a6fac, Func Offset: 0x3c
	// Func End, Address: 0x2a6fb4, Func Offset: 0x44
}

// 
// Start address: 0x2a6fc0
int LadderDownDestruct(sfObj* obj)
{
	_anon2* wk;
	// Line 276, Address: 0x2a6fc0, Func Offset: 0
	// Line 279, Address: 0x2a6fcc, Func Offset: 0xc
	// Line 281, Address: 0x2a6fdc, Func Offset: 0x1c
	// Line 283, Address: 0x2a6fe8, Func Offset: 0x28
	// Line 287, Address: 0x2a6ff0, Func Offset: 0x30
	// Line 286, Address: 0x2a6ff8, Func Offset: 0x38
	// Line 287, Address: 0x2a6ffc, Func Offset: 0x3c
	// Func End, Address: 0x2a7004, Func Offset: 0x44
}

// 
// Start address: 0x2a7010
int LadderUpDownDestruct(sfObj* obj)
{
	_anon2* wk;
	int result;
	// Line 291, Address: 0x2a7010, Func Offset: 0
	// Line 293, Address: 0x2a701c, Func Offset: 0xc
	// Line 295, Address: 0x2a7024, Func Offset: 0x14
	// Line 297, Address: 0x2a702c, Func Offset: 0x1c
	// Line 299, Address: 0x2a7038, Func Offset: 0x28
	// Line 300, Address: 0x2a7040, Func Offset: 0x30
	// Line 301, Address: 0x2a7048, Func Offset: 0x38
	// Line 303, Address: 0x2a7054, Func Offset: 0x44
	// Line 305, Address: 0x2a7060, Func Offset: 0x50
	// Line 312, Address: 0x2a7068, Func Offset: 0x58
	// Line 311, Address: 0x2a7070, Func Offset: 0x60
	// Line 312, Address: 0x2a7074, Func Offset: 0x64
	// Func End, Address: 0x2a707c, Func Offset: 0x6c
}

// 
// Start address: 0x2a7080
int LadderCheckFunc(int scene_no)
{
	_enum stage;
	_anon2* src;
	// Line 322, Address: 0x2a7080, Func Offset: 0
	// Line 323, Address: 0x2a708c, Func Offset: 0xc
	// Line 324, Address: 0x2a7094, Func Offset: 0x14
	// Line 325, Address: 0x2a7098, Func Offset: 0x18
	// Line 327, Address: 0x2a70a0, Func Offset: 0x20
	// Line 329, Address: 0x2a70a4, Func Offset: 0x24
	// Line 327, Address: 0x2a70a8, Func Offset: 0x28
	// Line 328, Address: 0x2a70ac, Func Offset: 0x2c
	// Line 329, Address: 0x2a70b4, Func Offset: 0x34
	// Line 330, Address: 0x2a70bc, Func Offset: 0x3c
	// Line 331, Address: 0x2a70c4, Func Offset: 0x44
	// Line 332, Address: 0x2a70cc, Func Offset: 0x4c
	// Line 333, Address: 0x2a70d0, Func Offset: 0x50
	// Line 334, Address: 0x2a70d8, Func Offset: 0x58
	// Line 336, Address: 0x2a710c, Func Offset: 0x8c
	// Line 334, Address: 0x2a7110, Func Offset: 0x90
	// Line 336, Address: 0x2a7114, Func Offset: 0x94
	// Line 339, Address: 0x2a7128, Func Offset: 0xa8
	// Line 340, Address: 0x2a7138, Func Offset: 0xb8
	// Line 341, Address: 0x2a7140, Func Offset: 0xc0
	// Line 344, Address: 0x2a7158, Func Offset: 0xd8
	// Line 345, Address: 0x2a7168, Func Offset: 0xe8
	// Line 346, Address: 0x2a7170, Func Offset: 0xf0
	// Line 349, Address: 0x2a7188, Func Offset: 0x108
	// Line 354, Address: 0x2a7194, Func Offset: 0x114
	// Line 357, Address: 0x2a7198, Func Offset: 0x118
	// Line 356, Address: 0x2a719c, Func Offset: 0x11c
	// Line 357, Address: 0x2a71a0, Func Offset: 0x120
	// Func End, Address: 0x2a71a8, Func Offset: 0x128
}

// 
// Start address: 0x2a71b0
int is_eileen_near()
{
	// Line 367, Address: 0x2a71b0, Func Offset: 0
	// Func End, Address: 0x2a71b8, Func Offset: 0x8
}

// 
// Start address: 0x2a71c0
int IsEv046AtSb10Door31(int scene_no)
{
	// Line 372, Address: 0x2a71c0, Func Offset: 0
	// Line 374, Address: 0x2a71cc, Func Offset: 0xc
	// Line 379, Address: 0x2a722c, Func Offset: 0x6c
	// Func End, Address: 0x2a723c, Func Offset: 0x7c
}

// 
// Start address: 0x2a7240
int IsEv046AtSb11Door33(int scene_no)
{
	// Line 382, Address: 0x2a7240, Func Offset: 0
	// Line 384, Address: 0x2a724c, Func Offset: 0xc
	// Line 389, Address: 0x2a72ac, Func Offset: 0x6c
	// Func End, Address: 0x2a72bc, Func Offset: 0x7c
}

// 
// Start address: 0x2a72c0
int sb10door31_down_end(sfObj* obj)
{
	int rtv;
	_anon2* lwk;
	// Line 393, Address: 0x2a72c0, Func Offset: 0
	// Line 396, Address: 0x2a72d4, Func Offset: 0x14
	// Line 397, Address: 0x2a72e4, Func Offset: 0x24
	// Line 400, Address: 0x2a72e8, Func Offset: 0x28
	// Line 402, Address: 0x2a72f8, Func Offset: 0x38
	// Line 403, Address: 0x2a7304, Func Offset: 0x44
	// Line 406, Address: 0x2a7310, Func Offset: 0x50
	// Line 409, Address: 0x2a7318, Func Offset: 0x58
	// Line 410, Address: 0x2a7324, Func Offset: 0x64
	// Line 411, Address: 0x2a7328, Func Offset: 0x68
	// Line 412, Address: 0x2a732c, Func Offset: 0x6c
	// Line 414, Address: 0x2a7330, Func Offset: 0x70
	// Line 415, Address: 0x2a7334, Func Offset: 0x74
	// Func End, Address: 0x2a7348, Func Offset: 0x88
}

// 
// Start address: 0x2a7350
int sb11door33_down_end(sfObj* obj)
{
	int rtv;
	_anon2* lwk;
	// Line 418, Address: 0x2a7350, Func Offset: 0
	// Line 421, Address: 0x2a7364, Func Offset: 0x14
	// Line 422, Address: 0x2a7374, Func Offset: 0x24
	// Line 425, Address: 0x2a7378, Func Offset: 0x28
	// Line 427, Address: 0x2a7388, Func Offset: 0x38
	// Line 428, Address: 0x2a7394, Func Offset: 0x44
	// Line 431, Address: 0x2a73a0, Func Offset: 0x50
	// Line 434, Address: 0x2a73a8, Func Offset: 0x58
	// Line 435, Address: 0x2a73b4, Func Offset: 0x64
	// Line 436, Address: 0x2a73b8, Func Offset: 0x68
	// Line 437, Address: 0x2a73bc, Func Offset: 0x6c
	// Line 439, Address: 0x2a73c0, Func Offset: 0x70
	// Line 440, Address: 0x2a73c4, Func Offset: 0x74
	// Func End, Address: 0x2a73d8, Func Offset: 0x88
}

// 
// Start address: 0x2a73e0
int DoorCheckAtSb10Door31(int scene_no)
{
	_anon2* src;
	// Line 473, Address: 0x2a73e0, Func Offset: 0
	// Line 474, Address: 0x2a73ec, Func Offset: 0xc
	// Line 476, Address: 0x2a73f8, Func Offset: 0x18
	// Line 478, Address: 0x2a73fc, Func Offset: 0x1c
	// Line 476, Address: 0x2a7400, Func Offset: 0x20
	// Line 477, Address: 0x2a7404, Func Offset: 0x24
	// Line 478, Address: 0x2a740c, Func Offset: 0x2c
	// Line 479, Address: 0x2a7414, Func Offset: 0x34
	// Line 480, Address: 0x2a741c, Func Offset: 0x3c
	// Line 481, Address: 0x2a7424, Func Offset: 0x44
	// Line 483, Address: 0x2a7428, Func Offset: 0x48
	// Line 484, Address: 0x2a7430, Func Offset: 0x50
	// Line 486, Address: 0x2a7464, Func Offset: 0x84
	// Line 484, Address: 0x2a7468, Func Offset: 0x88
	// Line 486, Address: 0x2a746c, Func Offset: 0x8c
	// Line 489, Address: 0x2a7480, Func Offset: 0xa0
	// Line 490, Address: 0x2a7490, Func Offset: 0xb0
	// Line 491, Address: 0x2a7498, Func Offset: 0xb8
	// Line 494, Address: 0x2a74b0, Func Offset: 0xd0
	// Line 496, Address: 0x2a74bc, Func Offset: 0xdc
	// Line 499, Address: 0x2a74c0, Func Offset: 0xe0
	// Line 498, Address: 0x2a74c4, Func Offset: 0xe4
	// Line 499, Address: 0x2a74c8, Func Offset: 0xe8
	// Func End, Address: 0x2a74d0, Func Offset: 0xf0
}

// 
// Start address: 0x2a74d0
int DoorCheckAtSb11Door33(int scene_no)
{
	_anon2* src;
	// Line 502, Address: 0x2a74d0, Func Offset: 0
	// Line 503, Address: 0x2a74dc, Func Offset: 0xc
	// Line 505, Address: 0x2a74e8, Func Offset: 0x18
	// Line 507, Address: 0x2a74ec, Func Offset: 0x1c
	// Line 505, Address: 0x2a74f0, Func Offset: 0x20
	// Line 506, Address: 0x2a74f4, Func Offset: 0x24
	// Line 507, Address: 0x2a74fc, Func Offset: 0x2c
	// Line 508, Address: 0x2a7504, Func Offset: 0x34
	// Line 509, Address: 0x2a750c, Func Offset: 0x3c
	// Line 510, Address: 0x2a7514, Func Offset: 0x44
	// Line 512, Address: 0x2a7518, Func Offset: 0x48
	// Line 513, Address: 0x2a7520, Func Offset: 0x50
	// Line 515, Address: 0x2a7554, Func Offset: 0x84
	// Line 513, Address: 0x2a7558, Func Offset: 0x88
	// Line 515, Address: 0x2a755c, Func Offset: 0x8c
	// Line 518, Address: 0x2a7570, Func Offset: 0xa0
	// Line 519, Address: 0x2a7580, Func Offset: 0xb0
	// Line 520, Address: 0x2a7588, Func Offset: 0xb8
	// Line 523, Address: 0x2a75a0, Func Offset: 0xd0
	// Line 525, Address: 0x2a75ac, Func Offset: 0xdc
	// Line 528, Address: 0x2a75b0, Func Offset: 0xe0
	// Line 527, Address: 0x2a75b4, Func Offset: 0xe4
	// Line 528, Address: 0x2a75b8, Func Offset: 0xe8
	// Func End, Address: 0x2a75c0, Func Offset: 0xf0
}

// 
// Start address: 0x2a75c0
void ladder_ui_init()
{
	// Line 564, Address: 0x2a75c0, Func Offset: 0
	// Line 566, Address: 0x2a75c8, Func Offset: 0x8
	// Line 568, Address: 0x2a75d0, Func Offset: 0x10
	// Line 570, Address: 0x2a75d8, Func Offset: 0x18
	// Line 572, Address: 0x2a75e0, Func Offset: 0x20
	// Line 573, Address: 0x2a75e8, Func Offset: 0x28
	// Func End, Address: 0x2a75f4, Func Offset: 0x34
}

// 
// Start address: 0x2a7600
void ladder_ui_end()
{
	// Line 577, Address: 0x2a7600, Func Offset: 0
	// Line 579, Address: 0x2a7608, Func Offset: 0x8
	// Line 581, Address: 0x2a7610, Func Offset: 0x10
	// Line 582, Address: 0x2a7618, Func Offset: 0x18
	// Line 584, Address: 0x2a7620, Func Offset: 0x20
	// Line 586, Address: 0x2a7628, Func Offset: 0x28
	// Line 587, Address: 0x2a7630, Func Offset: 0x30
	// Func End, Address: 0x2a763c, Func Offset: 0x3c
}

// 
// Start address: 0x2a7640
int ladder_move(sfObj* obj, float* dst)
{
	int rtv;
	_PLAYER_WORK* pwk;
	// Line 591, Address: 0x2a7640, Func Offset: 0
	// Line 593, Address: 0x2a7660, Func Offset: 0x20
	// Line 595, Address: 0x2a7668, Func Offset: 0x28
	// Line 593, Address: 0x2a766c, Func Offset: 0x2c
	// Line 595, Address: 0x2a7670, Func Offset: 0x30
	// Line 597, Address: 0x2a76a0, Func Offset: 0x60
	// Line 598, Address: 0x2a76ac, Func Offset: 0x6c
	// Line 602, Address: 0x2a76b8, Func Offset: 0x78
	// Line 605, Address: 0x2a76c8, Func Offset: 0x88
	// Line 606, Address: 0x2a76d0, Func Offset: 0x90
	// Line 608, Address: 0x2a76d8, Func Offset: 0x98
	// Line 611, Address: 0x2a76e0, Func Offset: 0xa0
	// Line 612, Address: 0x2a76ec, Func Offset: 0xac
	// Line 616, Address: 0x2a76f8, Func Offset: 0xb8
	// Line 617, Address: 0x2a7708, Func Offset: 0xc8
	// Line 620, Address: 0x2a770c, Func Offset: 0xcc
	// Line 622, Address: 0x2a7710, Func Offset: 0xd0
	// Line 623, Address: 0x2a7714, Func Offset: 0xd4
	// Func End, Address: 0x2a7730, Func Offset: 0xf0
}

// 
// Start address: 0x2a7730
int ev_mz_ladder_exec(sfObj* obj, float* dst, float rot)
{
	int rtv;
	// Line 626, Address: 0x2a7730, Func Offset: 0
	// Line 629, Address: 0x2a7734, Func Offset: 0x4
	// Line 626, Address: 0x2a7738, Func Offset: 0x8
	// Line 629, Address: 0x2a7748, Func Offset: 0x18
	// Line 631, Address: 0x2a7778, Func Offset: 0x48
	// Line 632, Address: 0x2a7788, Func Offset: 0x58
	// Line 634, Address: 0x2a7790, Func Offset: 0x60
	// Line 636, Address: 0x2a7798, Func Offset: 0x68
	// Line 637, Address: 0x2a77a8, Func Offset: 0x78
	// Line 639, Address: 0x2a77b0, Func Offset: 0x80
	// Line 640, Address: 0x2a77b8, Func Offset: 0x88
	// Line 642, Address: 0x2a77c0, Func Offset: 0x90
	// Line 644, Address: 0x2a77c4, Func Offset: 0x94
	// Line 645, Address: 0x2a77cc, Func Offset: 0x9c
	// Line 646, Address: 0x2a77d0, Func Offset: 0xa0
	// Line 647, Address: 0x2a77e0, Func Offset: 0xb0
	// Line 649, Address: 0x2a77e4, Func Offset: 0xb4
	// Line 650, Address: 0x2a77ec, Func Offset: 0xbc
	// Line 651, Address: 0x2a77f0, Func Offset: 0xc0
	// Line 653, Address: 0x2a77f8, Func Offset: 0xc8
	// Line 655, Address: 0x2a77fc, Func Offset: 0xcc
	// Line 657, Address: 0x2a7800, Func Offset: 0xd0
	// Line 658, Address: 0x2a7804, Func Offset: 0xd4
	// Func End, Address: 0x2a7818, Func Offset: 0xe8
}

// 
// Start address: 0x2a7820
int ev_mz31_ladder_up_exec(sfObj* obj)
{
	// Line 669, Address: 0x2a7820, Func Offset: 0
	// Func End, Address: 0x2a783c, Func Offset: 0x1c
}

// 
// Start address: 0x2a7840
int ev_mz31_ladder_down_exec(sfObj* obj)
{
	// Line 678, Address: 0x2a7840, Func Offset: 0
	// Func End, Address: 0x2a785c, Func Offset: 0x1c
}

// 
// Start address: 0x2a7860
int ev_mz31_ladder_updown_exec(sfObj* obj)
{
	int rtv;
	int last;
	// Line 683, Address: 0x2a7860, Func Offset: 0
	// Line 688, Address: 0x2a7864, Func Offset: 0x4
	// Line 683, Address: 0x2a7868, Func Offset: 0x8
	// Line 688, Address: 0x2a787c, Func Offset: 0x1c
	// Line 690, Address: 0x2a78b8, Func Offset: 0x58
	// Line 691, Address: 0x2a78c8, Func Offset: 0x68
	// Line 693, Address: 0x2a78d0, Func Offset: 0x70
	// Line 695, Address: 0x2a78d8, Func Offset: 0x78
	// Line 696, Address: 0x2a78e4, Func Offset: 0x84
	// Line 698, Address: 0x2a78f0, Func Offset: 0x90
	// Line 699, Address: 0x2a78f4, Func Offset: 0x94
	// Line 701, Address: 0x2a7900, Func Offset: 0xa0
	// Line 703, Address: 0x2a7908, Func Offset: 0xa8
	// Line 706, Address: 0x2a7910, Func Offset: 0xb0
	// Line 707, Address: 0x2a7918, Func Offset: 0xb8
	// Line 712, Address: 0x2a7924, Func Offset: 0xc4
	// Line 713, Address: 0x2a792c, Func Offset: 0xcc
	// Line 714, Address: 0x2a7930, Func Offset: 0xd0
	// Line 715, Address: 0x2a7948, Func Offset: 0xe8
	// Line 717, Address: 0x2a794c, Func Offset: 0xec
	// Line 718, Address: 0x2a7954, Func Offset: 0xf4
	// Line 719, Address: 0x2a7958, Func Offset: 0xf8
	// Line 720, Address: 0x2a7970, Func Offset: 0x110
	// Line 722, Address: 0x2a7974, Func Offset: 0x114
	// Line 723, Address: 0x2a797c, Func Offset: 0x11c
	// Line 724, Address: 0x2a7980, Func Offset: 0x120
	// Line 725, Address: 0x2a7988, Func Offset: 0x128
	// Line 727, Address: 0x2a798c, Func Offset: 0x12c
	// Line 729, Address: 0x2a7990, Func Offset: 0x130
	// Line 730, Address: 0x2a7994, Func Offset: 0x134
	// Func End, Address: 0x2a79ac, Func Offset: 0x14c
}

// 
// Start address: 0x2a79b0
int mz_ladder_construct(sfObj* obj)
{
	// Line 736, Address: 0x2a79b0, Func Offset: 0
	// Func End, Address: 0x2a79b8, Func Offset: 0x8
}

// 
// Start address: 0x2a79c0
int mz_ladder_destruct(sfObj* obj)
{
	// Line 742, Address: 0x2a79c0, Func Offset: 0
	// Func End, Address: 0x2a79c8, Func Offset: 0x8
}

// 
// Start address: 0x2a79d0
int ev_mz40_ladder_up_exec(sfObj* obj)
{
	// Line 805, Address: 0x2a79d0, Func Offset: 0
	// Func End, Address: 0x2a79ec, Func Offset: 0x1c
}

// 
// Start address: 0x2a79f0
int ev_mz40_ladder_down_exec(sfObj* obj)
{
	// Line 814, Address: 0x2a79f0, Func Offset: 0
	// Func End, Address: 0x2a7a0c, Func Offset: 0x1c
}

