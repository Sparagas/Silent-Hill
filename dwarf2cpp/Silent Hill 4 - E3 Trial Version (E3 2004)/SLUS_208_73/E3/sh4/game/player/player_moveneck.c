typedef struct sgBone;
typedef union sfCldBody;
typedef struct _GAME_WORK;
typedef struct _anon0;
typedef struct sfCldPart;
typedef struct sgIKHandle;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef enum GameItem : unsigned char;
typedef enum GameObjType : unsigned char;
typedef struct _PLAYER_WORK;
typedef struct sgAnime;
typedef struct sfObj;
typedef union _anon5;
typedef struct sfCharacter;
typedef struct sfCldObject;
typedef struct sgQTNode;
typedef struct EventFlag;
typedef struct sgSVModel;
typedef struct _anon6;
typedef struct _anon7;
typedef enum sgIKSolveResult : unsigned char;
typedef struct _anon8;
typedef struct sgQTObject;
typedef struct sfOffsetAABB;

typedef sgIKSolveResult(*type_2)();
typedef void(*type_12)(sgAnime*, int);
typedef void(*type_14)(sfObj*);
typedef void(*type_16)(sfObj*);
typedef void(*type_22)(_anon6*, int, int, float*);

typedef float type_0[4];
typedef float type_1[4][4];
typedef _PLAYER_WORK type_3[2];
typedef int type_4[1];
typedef int type_5[1];
typedef unsigned char type_6[3];
typedef _anon5 type_7[2];
typedef int type_8[1];
typedef _anon5 type_9[3];
typedef void* type_10[4];
typedef float type_11[4];
typedef _anon5 type_13[256];
typedef unsigned char type_15[4];
typedef unsigned char type_17[320];
typedef sfCldPart* type_18[6];
typedef unsigned char type_19[3];
typedef int type_20[1];
typedef int type_21[1];
typedef short type_23[2];
typedef unsigned short type_24[2];
typedef char type_25[4];
typedef unsigned char type_26[4];
typedef int type_27[1];
typedef float type_28[1];
typedef float type_29[4];
typedef int type_30[1];
typedef float type_31[4][2];
typedef int type_32[1];

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
	_anon4 obb;
	_anon3 aabb;
	sfOffsetAABB offset_aabb;
	_anon0 line;
	_anon1 sphere;
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

struct _anon0
{
	float start[4];
	float end[4];
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
	float center[4];
	float radius;
};

struct _anon2
{
	int id;
	float x;
	float y;
	float z;
	float rot;
	int f1;
	int f2;
	int f3;
	int f4;
	_anon5 dmy[2];
	float vx;
	float vy;
	float vz;
	_anon5 dmy2[3];
	int flagcheck;
	int flagoffcheck;
};

struct _anon3
{
	float bmin[4];
	float bmax[4];
};

struct _anon4
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

enum GameObjType : unsigned char
{
	GAME_OBJ_TYPE_NONE,
	GAME_OBJ_TYPE_PLAYER,
	GAME_OBJ_TYPE_ENEMY,
	GAME_OBJ_TYPE_FIGURE,
	GAME_OBJ_TYPE_ITEM,
	GAME_OBJ_TYPE_SEARCH,
	GAME_OBJ_TYPE_EFFECT,
	GAME_OBJ_TYPE_TEXTEVENT,
	GAME_OBJ_TYPE_MEMOITEM,
	GAME_OBJ_TYPE_EVHIT,
	GAME_OBJ_TYPE_EVENT,
	GAME_OBJ_TYPE_EVCAMERA,
	GAME_OBJ_TYPE_LAST
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

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon7 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
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

struct EventFlag
{
	unsigned char flag[320];
};

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
};

struct _anon6
{
	unsigned long tex0;
	unsigned long clamp;
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

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

struct _anon8
{
	int dummy;
};

struct sgQTObject
{
	_anon1 bounding_ball;
	sgQTObject* next;
	sgQTObject* prev;
};

struct sfOffsetAABB
{
	_anon3 aabb;
	float offset[4];
};

float min_dist;
int min_prio;
float min_vpoint[4];
float min_vec[4];
_PLAYER_WORK playerw[2];
float sg_vector_zero[4];
EventFlag event_flag;
_GAME_WORK gamew;

void PlayerNeckInit();
void PlayerViewPointSetTarget(float* pos, float* v_point, int prio);
void PlayerMoveNeckSetTarget(float* pos);
void search_near_item(GameObjType type);
void PlayerMoveNeck(_PLAYER_WORK* p);
void PlayerViewPointObj(sfObj* obj);

// 
// Start address: 0x229d10
void PlayerNeckInit()
{
	// Line 67, Address: 0x229d10, Func Offset: 0
	// Line 69, Address: 0x229d1c, Func Offset: 0xc
	// Func End, Address: 0x229d24, Func Offset: 0x14
}

// 
// Start address: 0x229d30
void PlayerViewPointSetTarget(float* pos, float* v_point, int prio)
{
	_PLAYER_WORK* p;
	float subvec[4];
	float sq;
	float hdiff;
	float xdiff;
	float zdiff;
	_anon0 line;
	int hit;
	_anon0 line;
	float sb[4];
	float len;
	int hit;
	float rot_p[4];
	// Line 73, Address: 0x229d30, Func Offset: 0
	// Line 79, Address: 0x229d34, Func Offset: 0x4
	// Line 73, Address: 0x229d38, Func Offset: 0x8
	// Line 74, Address: 0x229d5c, Func Offset: 0x2c
	// Line 73, Address: 0x229d60, Func Offset: 0x30
	// Line 79, Address: 0x229d64, Func Offset: 0x34
	// Line 82, Address: 0x229d74, Func Offset: 0x44
	// Line 86, Address: 0x229d8c, Func Offset: 0x5c
	// Line 85, Address: 0x229d98, Func Offset: 0x68
	// Line 86, Address: 0x229d9c, Func Offset: 0x6c
	// Line 91, Address: 0x229dac, Func Offset: 0x7c
	// Line 94, Address: 0x229db0, Func Offset: 0x80
	// Line 92, Address: 0x229db4, Func Offset: 0x84
	// Line 94, Address: 0x229db8, Func Offset: 0x88
	// Line 93, Address: 0x229dbc, Func Offset: 0x8c
	// Line 94, Address: 0x229dc4, Func Offset: 0x94
	// Line 99, Address: 0x229dd0, Func Offset: 0xa0
	// Line 102, Address: 0x229de8, Func Offset: 0xb8
	// Line 106, Address: 0x229df4, Func Offset: 0xc4
	// Line 107, Address: 0x229e00, Func Offset: 0xd0
	// Line 108, Address: 0x229e0c, Func Offset: 0xdc
	// Line 107, Address: 0x229e10, Func Offset: 0xe0
	// Line 108, Address: 0x229e18, Func Offset: 0xe8
	// Line 109, Address: 0x229e20, Func Offset: 0xf0
	// Line 110, Address: 0x229e28, Func Offset: 0xf8
	// Line 111, Address: 0x229e30, Func Offset: 0x100
	// Line 119, Address: 0x229e38, Func Offset: 0x108
	// Line 120, Address: 0x229e48, Func Offset: 0x118
	// Line 121, Address: 0x229e54, Func Offset: 0x124
	// Line 120, Address: 0x229e5c, Func Offset: 0x12c
	// Line 121, Address: 0x229e64, Func Offset: 0x134
	// Line 122, Address: 0x229e78, Func Offset: 0x148
	// Line 123, Address: 0x229eb8, Func Offset: 0x188
	// Line 126, Address: 0x229ed0, Func Offset: 0x1a0
	// Line 125, Address: 0x229ed4, Func Offset: 0x1a4
	// Line 126, Address: 0x229ed8, Func Offset: 0x1a8
	// Line 125, Address: 0x229edc, Func Offset: 0x1ac
	// Line 126, Address: 0x229ee0, Func Offset: 0x1b0
	// Line 127, Address: 0x229efc, Func Offset: 0x1cc
	// Line 128, Address: 0x229f1c, Func Offset: 0x1ec
	// Line 129, Address: 0x229f24, Func Offset: 0x1f4
	// Line 132, Address: 0x229f2c, Func Offset: 0x1fc
	// Line 137, Address: 0x229f30, Func Offset: 0x200
	// Line 138, Address: 0x229f48, Func Offset: 0x218
	// Line 139, Address: 0x229f54, Func Offset: 0x224
	// Line 140, Address: 0x229f58, Func Offset: 0x228
	// Line 141, Address: 0x229f64, Func Offset: 0x234
	// Line 142, Address: 0x229f90, Func Offset: 0x260
	// Line 143, Address: 0x229fbc, Func Offset: 0x28c
	// Line 147, Address: 0x22a000, Func Offset: 0x2d0
	// Line 146, Address: 0x22a004, Func Offset: 0x2d4
	// Line 147, Address: 0x22a008, Func Offset: 0x2d8
	// Line 148, Address: 0x22a014, Func Offset: 0x2e4
	// Line 149, Address: 0x22a024, Func Offset: 0x2f4
	// Line 151, Address: 0x22a02c, Func Offset: 0x2fc
	// Line 152, Address: 0x22a030, Func Offset: 0x300
	// Func End, Address: 0x22a054, Func Offset: 0x324
}

// 
// Start address: 0x22a060
void PlayerMoveNeckSetTarget(float* pos)
{
	// Line 157, Address: 0x22a060, Func Offset: 0
	// Func End, Address: 0x22a06c, Func Offset: 0xc
}

// 
// Start address: 0x22a070
void search_near_item(GameObjType type)
{
	int i;
	int num;
	sfObj* to;
	float tp[4];
	// Line 163, Address: 0x22a070, Func Offset: 0
	// Line 169, Address: 0x22a088, Func Offset: 0x18
	// Line 170, Address: 0x22a098, Func Offset: 0x28
	// Line 173, Address: 0x22a0a0, Func Offset: 0x30
	// Line 174, Address: 0x22a0a8, Func Offset: 0x38
	// Line 175, Address: 0x22a0b8, Func Offset: 0x48
	// Line 177, Address: 0x22a0c0, Func Offset: 0x50
	// Line 179, Address: 0x22a0d0, Func Offset: 0x60
	// Line 180, Address: 0x22a0e0, Func Offset: 0x70
	// Line 182, Address: 0x22a0e8, Func Offset: 0x78
	// Line 185, Address: 0x22a0f8, Func Offset: 0x88
	// Func End, Address: 0x22a114, Func Offset: 0xa4
}

// 
// Start address: 0x22a120
void PlayerMoveNeck(_PLAYER_WORK* p)
{
	float targ[4];
	float sub_vec[4];
	float eye_pos[4];
	sgBone* bone;
	float pos_e[4];
	float dist;
	float clp;
	float y_a;
	// Line 188, Address: 0x22a120, Func Offset: 0
	// Line 192, Address: 0x22a130, Func Offset: 0x10
	// Line 194, Address: 0x22a13c, Func Offset: 0x1c
	// Line 197, Address: 0x22a148, Func Offset: 0x28
	// Line 199, Address: 0x22a154, Func Offset: 0x34
	// Line 201, Address: 0x22a170, Func Offset: 0x50
	// Line 202, Address: 0x22a184, Func Offset: 0x64
	// Line 203, Address: 0x22a190, Func Offset: 0x70
	// Line 204, Address: 0x22a198, Func Offset: 0x78
	// Line 207, Address: 0x22a1b0, Func Offset: 0x90
	// Line 208, Address: 0x22a1c0, Func Offset: 0xa0
	// Line 209, Address: 0x22a1cc, Func Offset: 0xac
	// Line 210, Address: 0x22a1d8, Func Offset: 0xb8
	// Line 211, Address: 0x22a1e4, Func Offset: 0xc4
	// Line 213, Address: 0x22a1ec, Func Offset: 0xcc
	// Line 215, Address: 0x22a1f8, Func Offset: 0xd8
	// Line 216, Address: 0x22a204, Func Offset: 0xe4
	// Line 217, Address: 0x22a20c, Func Offset: 0xec
	// Line 219, Address: 0x22a214, Func Offset: 0xf4
	// Line 221, Address: 0x22a220, Func Offset: 0x100
	// Line 223, Address: 0x22a22c, Func Offset: 0x10c
	// Line 225, Address: 0x22a238, Func Offset: 0x118
	// Line 226, Address: 0x22a244, Func Offset: 0x124
	// Line 230, Address: 0x22a250, Func Offset: 0x130
	// Line 233, Address: 0x22a274, Func Offset: 0x154
	// Line 234, Address: 0x22a290, Func Offset: 0x170
	// Line 236, Address: 0x22a2ac, Func Offset: 0x18c
	// Line 238, Address: 0x22a2cc, Func Offset: 0x1ac
	// Line 239, Address: 0x22a2e4, Func Offset: 0x1c4
	// Line 241, Address: 0x22a2f0, Func Offset: 0x1d0
	// Line 242, Address: 0x22a304, Func Offset: 0x1e4
	// Line 244, Address: 0x22a308, Func Offset: 0x1e8
	// Line 245, Address: 0x22a310, Func Offset: 0x1f0
	// Line 244, Address: 0x22a314, Func Offset: 0x1f4
	// Line 245, Address: 0x22a31c, Func Offset: 0x1fc
	// Line 244, Address: 0x22a328, Func Offset: 0x208
	// Line 245, Address: 0x22a32c, Func Offset: 0x20c
	// Line 246, Address: 0x22a334, Func Offset: 0x214
	// Line 247, Address: 0x22a34c, Func Offset: 0x22c
	// Line 250, Address: 0x22a350, Func Offset: 0x230
	// Line 252, Address: 0x22a370, Func Offset: 0x250
	// Line 253, Address: 0x22a378, Func Offset: 0x258
	// Line 254, Address: 0x22a394, Func Offset: 0x274
	// Line 269, Address: 0x22a398, Func Offset: 0x278
	// Line 268, Address: 0x22a39c, Func Offset: 0x27c
	// Line 269, Address: 0x22a3a0, Func Offset: 0x280
	// Line 270, Address: 0x22a3a4, Func Offset: 0x284
	// Line 269, Address: 0x22a3a8, Func Offset: 0x288
	// Line 270, Address: 0x22a3ac, Func Offset: 0x28c
	// Line 271, Address: 0x22a3b0, Func Offset: 0x290
	// Line 268, Address: 0x22a3b4, Func Offset: 0x294
	// Line 269, Address: 0x22a3b8, Func Offset: 0x298
	// Line 270, Address: 0x22a3bc, Func Offset: 0x29c
	// Line 271, Address: 0x22a3c0, Func Offset: 0x2a0
	// Line 273, Address: 0x22a3cc, Func Offset: 0x2ac
	// Line 274, Address: 0x22a3d8, Func Offset: 0x2b8
	// Line 275, Address: 0x22a3e8, Func Offset: 0x2c8
	// Line 276, Address: 0x22a3ec, Func Offset: 0x2cc
	// Line 280, Address: 0x22a3f0, Func Offset: 0x2d0
	// Line 281, Address: 0x22a40c, Func Offset: 0x2ec
	// Line 282, Address: 0x22a440, Func Offset: 0x320
	// Line 285, Address: 0x22a444, Func Offset: 0x324
	// Line 282, Address: 0x22a448, Func Offset: 0x328
	// Line 283, Address: 0x22a44c, Func Offset: 0x32c
	// Line 284, Address: 0x22a454, Func Offset: 0x334
	// Line 286, Address: 0x22a458, Func Offset: 0x338
	// Line 288, Address: 0x22a460, Func Offset: 0x340
	// Line 291, Address: 0x22a480, Func Offset: 0x360
	// Line 288, Address: 0x22a484, Func Offset: 0x364
	// Line 289, Address: 0x22a490, Func Offset: 0x370
	// Line 290, Address: 0x22a4a8, Func Offset: 0x388
	// Line 291, Address: 0x22a4ac, Func Offset: 0x38c
	// Line 294, Address: 0x22a4b0, Func Offset: 0x390
	// Func End, Address: 0x22a4c0, Func Offset: 0x3a0
}

// 
// Start address: 0x22a4c0
void PlayerViewPointObj(sfObj* obj)
{
	_anon2* w;
	float pos[4];
	float v_point[4];
	int level;
	// Line 298, Address: 0x22a4c0, Func Offset: 0
	// Line 299, Address: 0x22a4c8, Func Offset: 0x8
	// Line 304, Address: 0x22a4d4, Func Offset: 0x14
	// Line 307, Address: 0x22a4e8, Func Offset: 0x28
	// Line 304, Address: 0x22a4ec, Func Offset: 0x2c
	// Line 307, Address: 0x22a4f0, Func Offset: 0x30
	// Line 308, Address: 0x22a51c, Func Offset: 0x5c
	// Line 309, Address: 0x22a520, Func Offset: 0x60
	// Line 310, Address: 0x22a52c, Func Offset: 0x6c
	// Line 312, Address: 0x22a534, Func Offset: 0x74
	// Line 313, Address: 0x22a538, Func Offset: 0x78
	// Line 314, Address: 0x22a544, Func Offset: 0x84
	// Line 316, Address: 0x22a54c, Func Offset: 0x8c
	// Line 317, Address: 0x22a550, Func Offset: 0x90
	// Line 318, Address: 0x22a55c, Func Offset: 0x9c
	// Line 320, Address: 0x22a564, Func Offset: 0xa4
	// Line 321, Address: 0x22a568, Func Offset: 0xa8
	// Line 325, Address: 0x22a574, Func Offset: 0xb4
	// Line 321, Address: 0x22a578, Func Offset: 0xb8
	// Line 327, Address: 0x22a57c, Func Offset: 0xbc
	// Line 328, Address: 0x22a584, Func Offset: 0xc4
	// Line 330, Address: 0x22a5bc, Func Offset: 0xfc
	// Line 328, Address: 0x22a5c0, Func Offset: 0x100
	// Line 332, Address: 0x22a5c4, Func Offset: 0x104
	// Line 333, Address: 0x22a5cc, Func Offset: 0x10c
	// Line 335, Address: 0x22a604, Func Offset: 0x144
	// Line 337, Address: 0x22a608, Func Offset: 0x148
	// Line 340, Address: 0x22a60c, Func Offset: 0x14c
	// Line 337, Address: 0x22a614, Func Offset: 0x154
	// Line 338, Address: 0x22a618, Func Offset: 0x158
	// Line 339, Address: 0x22a620, Func Offset: 0x160
	// Line 340, Address: 0x22a628, Func Offset: 0x168
	// Line 343, Address: 0x22a630, Func Offset: 0x170
	// Line 345, Address: 0x22a65c, Func Offset: 0x19c
	// Line 346, Address: 0x22a664, Func Offset: 0x1a4
	// Line 349, Address: 0x22a670, Func Offset: 0x1b0
	// Line 350, Address: 0x22a674, Func Offset: 0x1b4
	// Line 351, Address: 0x22a67c, Func Offset: 0x1bc
	// Line 352, Address: 0x22a684, Func Offset: 0x1c4
	// Line 355, Address: 0x22a688, Func Offset: 0x1c8
	// Line 358, Address: 0x22a698, Func Offset: 0x1d8
	// Func End, Address: 0x22a6a4, Func Offset: 0x1e4
}

