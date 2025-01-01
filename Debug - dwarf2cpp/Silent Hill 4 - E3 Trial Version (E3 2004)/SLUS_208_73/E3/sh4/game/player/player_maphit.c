typedef struct sgBone;
typedef struct sgIKHandle;
typedef enum GameItem : unsigned char;
typedef struct _PLAYER_WORK;
typedef struct _BackPolWork;
typedef struct sfObj;
typedef union _anon0;
typedef struct _GAME_WORK;
typedef struct sfCharacter;
typedef struct sgAnime;
typedef struct _anon1;
typedef struct sfCldObject;
typedef struct sgQTNode;
typedef struct sfCldPart;
typedef struct _anon2;
typedef struct sgSVModel;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef struct _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef struct _anon9;
typedef struct _anon10;
typedef union _anon11;
typedef struct sgQTObject;
typedef struct sfOffsetAABB;
typedef union sfCldBody;
typedef enum sgIKSolveResult : unsigned char;

typedef sgIKSolveResult(*type_6)();
typedef void(*type_13)(sfObj*);
typedef void(*type_17)(sgAnime*, int);
typedef void(*type_19)(sfObj*);
typedef void(*type_24)(_anon2*, int, int, float*);

typedef float type_0[4];
typedef unsigned char type_1[3];
typedef float type_2[4][4];
typedef int type_3[1];
typedef float type_4[4][2];
typedef int type_5[1];
typedef _BackPolWork type_7[32];
typedef _BackPolWork type_8[32];
typedef int type_9[1];
typedef int type_10[1];
typedef float type_11[4];
typedef _anon0 type_12[256];
typedef int type_14[1];
typedef int type_15[1];
typedef void* type_16[4];
typedef int type_18[1];
typedef sfCldPart* type_20[6];
typedef unsigned char type_21[4];
typedef unsigned char type_22[3];
typedef float type_23[4];
typedef _anon6 type_25[4];
typedef _anon11 type_26[0];
typedef short type_27[2];
typedef unsigned short type_28[2];
typedef char type_29[4];
typedef _PLAYER_WORK type_30[2];
typedef unsigned char type_31[4];
typedef float type_32[1];
typedef int type_33[1];

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

struct _BackPolWork
{
	_anon3 plane;
	_anon10* pol;
	float dist;
	_BackPolWork* next;
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

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon4 model_work;
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

struct _anon1
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

struct _anon2
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

struct _anon3
{
	float abcd[4];
};

struct _anon4
{
	void* model;
	void* texture;
	void* texture_global;
	float matrices[4][4];
	float* weights;
	float tex_crops[4];
	void(*texture_load_func)(_anon2*, int, int, float*);
	int equip_flag;
};

struct _anon5
{
	float start[4];
	float end[4];
};

struct _anon6
{
	unsigned char next_offset;
	unsigned char flags;
	short id;
};

struct _anon7
{
	float bmin[4];
	float bmax[4];
};

struct _anon8
{
	int dummy;
};

struct _anon9
{
	float mat[4][4];
	float half_w[4];
};

struct _anon10
{
	_anon11 vertex[0];
};

union _anon11
{
	float node[4];
	_anon6 data[4];
};

struct sgQTObject
{
	_anon1 bounding_ball;
	sgQTObject* next;
	sgQTObject* prev;
};

struct sfOffsetAABB
{
	_anon7 aabb;
	float offset[4];
};

union sfCldBody
{
	_anon9 obb;
	_anon7 aabb;
	sfOffsetAABB offset_aabb;
	_anon5 line;
	_anon1 sphere;
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

_PLAYER_WORK playerw[2];
_GAME_WORK gamew;

void make_sphere(_anon1* sph, float* pos);
void move_check(float* pos_l, float* pos_n, float* pos_r, int mode);
void slip_out_all(_anon1* s, int num);
void slip_out_all2(_anon1* s, int num);
void PlayerMaphitFromMoves();
void PlayerMaphitSetPos(float* pos_l, float* pos_n, float* pos_r);

// 
// Start address: 0x2847b0
void make_sphere(_anon1* sph, float* pos)
{
	// Line 66, Address: 0x2847b0, Func Offset: 0
	// Line 68, Address: 0x2847b8, Func Offset: 0x8
	// Line 71, Address: 0x2847bc, Func Offset: 0xc
	// Line 68, Address: 0x2847c8, Func Offset: 0x18
	// Line 69, Address: 0x2847cc, Func Offset: 0x1c
	// Line 71, Address: 0x2847d4, Func Offset: 0x24
	// Line 74, Address: 0x2847dc, Func Offset: 0x2c
	// Func End, Address: 0x2847e4, Func Offset: 0x34
}

// 
// Start address: 0x2847f0
void move_check(float* pos_l, float* pos_n, float* pos_r, int mode)
{
	_anon5 line;
	int hit;
	float pos_tmp[4];
	_anon3 plane;
	int res;
	// Line 78, Address: 0x2847f0, Func Offset: 0
	// Line 84, Address: 0x284804, Func Offset: 0x14
	// Line 85, Address: 0x284810, Func Offset: 0x20
	// Line 86, Address: 0x284818, Func Offset: 0x28
	// Line 87, Address: 0x284820, Func Offset: 0x30
	// Line 88, Address: 0x284824, Func Offset: 0x34
	// Line 89, Address: 0x28482c, Func Offset: 0x3c
	// Line 90, Address: 0x284844, Func Offset: 0x54
	// Line 91, Address: 0x28484c, Func Offset: 0x5c
	// Line 93, Address: 0x28485c, Func Offset: 0x6c
	// Line 94, Address: 0x284870, Func Offset: 0x80
	// Line 95, Address: 0x28487c, Func Offset: 0x8c
	// Line 98, Address: 0x284880, Func Offset: 0x90
	// Line 99, Address: 0x28488c, Func Offset: 0x9c
	// Line 105, Address: 0x284894, Func Offset: 0xa4
	// Line 106, Address: 0x2848a0, Func Offset: 0xb0
	// Line 107, Address: 0x2848a8, Func Offset: 0xb8
	// Line 108, Address: 0x2848b0, Func Offset: 0xc0
	// Line 113, Address: 0x2848b8, Func Offset: 0xc8
	// Line 115, Address: 0x2848bc, Func Offset: 0xcc
	// Line 121, Address: 0x2848c8, Func Offset: 0xd8
	// Line 126, Address: 0x2848d0, Func Offset: 0xe0
	// Func End, Address: 0x2848e4, Func Offset: 0xf4
}

// 
// Start address: 0x2848f0
void slip_out_all(_anon1* s, int num)
{
	int i;
	int n;
	float vec[4];
	float dist;
	_BackPolWork bp[32];
	_BackPolWork bp_start;
	_BackPolWork* bp_tree;
	// Line 137, Address: 0x2848f0, Func Offset: 0
	// Line 149, Address: 0x284910, Func Offset: 0x20
	// Line 147, Address: 0x284914, Func Offset: 0x24
	// Line 149, Address: 0x284918, Func Offset: 0x28
	// Line 150, Address: 0x284920, Func Offset: 0x30
	// Line 151, Address: 0x284934, Func Offset: 0x44
	// Line 152, Address: 0x284940, Func Offset: 0x50
	// Line 171, Address: 0x284944, Func Offset: 0x54
	// Line 152, Address: 0x284948, Func Offset: 0x58
	// Line 172, Address: 0x28494c, Func Offset: 0x5c
	// Line 152, Address: 0x284950, Func Offset: 0x60
	// Line 153, Address: 0x28497c, Func Offset: 0x8c
	// Line 152, Address: 0x284980, Func Offset: 0x90
	// Line 153, Address: 0x284984, Func Offset: 0x94
	// Line 172, Address: 0x28498c, Func Offset: 0x9c
	// Line 173, Address: 0x284998, Func Offset: 0xa8
	// Line 175, Address: 0x2849a4, Func Offset: 0xb4
	// Line 177, Address: 0x2849b8, Func Offset: 0xc8
	// Line 178, Address: 0x2849bc, Func Offset: 0xcc
	// Line 179, Address: 0x2849d0, Func Offset: 0xe0
	// Line 181, Address: 0x2849dc, Func Offset: 0xec
	// Line 180, Address: 0x2849e0, Func Offset: 0xf0
	// Line 179, Address: 0x2849e4, Func Offset: 0xf4
	// Line 180, Address: 0x2849e8, Func Offset: 0xf8
	// Line 181, Address: 0x2849ec, Func Offset: 0xfc
	// Line 184, Address: 0x2849fc, Func Offset: 0x10c
	// Line 188, Address: 0x284a08, Func Offset: 0x118
	// Line 189, Address: 0x284a10, Func Offset: 0x120
	// Line 191, Address: 0x284a18, Func Offset: 0x128
	// Line 193, Address: 0x284a2c, Func Offset: 0x13c
	// Line 199, Address: 0x284a30, Func Offset: 0x140
	// Line 193, Address: 0x284a34, Func Offset: 0x144
	// Line 194, Address: 0x284a50, Func Offset: 0x160
	// Line 193, Address: 0x284a54, Func Offset: 0x164
	// Line 194, Address: 0x284a58, Func Offset: 0x168
	// Line 195, Address: 0x284a5c, Func Offset: 0x16c
	// Line 193, Address: 0x284a60, Func Offset: 0x170
	// Line 195, Address: 0x284a6c, Func Offset: 0x17c
	// Line 197, Address: 0x284a70, Func Offset: 0x180
	// Line 199, Address: 0x284a78, Func Offset: 0x188
	// Line 200, Address: 0x284a9c, Func Offset: 0x1ac
	// Line 201, Address: 0x284ab4, Func Offset: 0x1c4
	// Line 204, Address: 0x284ad0, Func Offset: 0x1e0
	// Func End, Address: 0x284aec, Func Offset: 0x1fc
}

// 
// Start address: 0x284af0
void slip_out_all2(_anon1* s, int num)
{
	int i;
	int n;
	float vec[4];
	float dist;
	_BackPolWork bp[32];
	_BackPolWork bp_start;
	_BackPolWork* bp_tree;
	// Line 208, Address: 0x284af0, Func Offset: 0
	// Line 220, Address: 0x284b10, Func Offset: 0x20
	// Line 218, Address: 0x284b14, Func Offset: 0x24
	// Line 220, Address: 0x284b18, Func Offset: 0x28
	// Line 221, Address: 0x284b20, Func Offset: 0x30
	// Line 222, Address: 0x284b34, Func Offset: 0x44
	// Line 223, Address: 0x284b40, Func Offset: 0x50
	// Line 224, Address: 0x284b78, Func Offset: 0x88
	// Line 226, Address: 0x284b8c, Func Offset: 0x9c
	// Line 228, Address: 0x284b98, Func Offset: 0xa8
	// Line 240, Address: 0x284b9c, Func Offset: 0xac
	// Line 245, Address: 0x284bc0, Func Offset: 0xd0
	// Line 246, Address: 0x284bc8, Func Offset: 0xd8
	// Line 248, Address: 0x284bd4, Func Offset: 0xe4
	// Line 250, Address: 0x284be8, Func Offset: 0xf8
	// Line 251, Address: 0x284bec, Func Offset: 0xfc
	// Line 252, Address: 0x284c00, Func Offset: 0x110
	// Line 253, Address: 0x284c0c, Func Offset: 0x11c
	// Line 252, Address: 0x284c10, Func Offset: 0x120
	// Line 253, Address: 0x284c14, Func Offset: 0x124
	// Line 254, Address: 0x284c18, Func Offset: 0x128
	// Line 257, Address: 0x284c2c, Func Offset: 0x13c
	// Line 261, Address: 0x284c38, Func Offset: 0x148
	// Line 262, Address: 0x284c40, Func Offset: 0x150
	// Line 264, Address: 0x284c48, Func Offset: 0x158
	// Line 266, Address: 0x284c5c, Func Offset: 0x16c
	// Line 267, Address: 0x284c8c, Func Offset: 0x19c
	// Line 269, Address: 0x284ca0, Func Offset: 0x1b0
	// Line 274, Address: 0x284ca4, Func Offset: 0x1b4
	// Line 269, Address: 0x284cac, Func Offset: 0x1bc
	// Line 270, Address: 0x284cb0, Func Offset: 0x1c0
	// Line 272, Address: 0x284cb8, Func Offset: 0x1c8
	// Line 274, Address: 0x284cc0, Func Offset: 0x1d0
	// Line 275, Address: 0x284ce4, Func Offset: 0x1f4
	// Line 276, Address: 0x284cfc, Func Offset: 0x20c
	// Line 279, Address: 0x284d18, Func Offset: 0x228
	// Func End, Address: 0x284d34, Func Offset: 0x244
}

// 
// Start address: 0x284d40
void PlayerMaphitFromMoves()
{
	float pos_l[4];
	float pos_n[4];
	float pos_r[4];
	_anon1 sph;
	int hit;
	int num;
	// Line 283, Address: 0x284d40, Func Offset: 0
	// Line 290, Address: 0x284d44, Func Offset: 0x4
	// Line 283, Address: 0x284d48, Func Offset: 0x8
	// Line 290, Address: 0x284d4c, Func Offset: 0xc
	// Line 294, Address: 0x284d5c, Func Offset: 0x1c
	// Line 291, Address: 0x284d60, Func Offset: 0x20
	// Line 292, Address: 0x284d68, Func Offset: 0x28
	// Line 294, Address: 0x284d6c, Func Offset: 0x2c
	// Line 293, Address: 0x284d74, Func Offset: 0x34
	// Line 294, Address: 0x284d78, Func Offset: 0x38
	// Line 292, Address: 0x284d7c, Func Offset: 0x3c
	// Line 293, Address: 0x284d80, Func Offset: 0x40
	// Line 296, Address: 0x284d84, Func Offset: 0x44
	// Line 297, Address: 0x284d8c, Func Offset: 0x4c
	// Line 298, Address: 0x284d94, Func Offset: 0x54
	// Line 299, Address: 0x284d9c, Func Offset: 0x5c
	// Line 301, Address: 0x284dac, Func Offset: 0x6c
	// Line 303, Address: 0x284db4, Func Offset: 0x74
	// Line 304, Address: 0x284dbc, Func Offset: 0x7c
	// Line 305, Address: 0x284dc4, Func Offset: 0x84
	// Line 306, Address: 0x284dd4, Func Offset: 0x94
	// Line 308, Address: 0x284ddc, Func Offset: 0x9c
	// Line 309, Address: 0x284de0, Func Offset: 0xa0
	// Line 310, Address: 0x284df0, Func Offset: 0xb0
	// Line 311, Address: 0x284df8, Func Offset: 0xb8
	// Line 318, Address: 0x284e0c, Func Offset: 0xcc
	// Line 320, Address: 0x284e38, Func Offset: 0xf8
	// Line 319, Address: 0x284e3c, Func Offset: 0xfc
	// Line 321, Address: 0x284e44, Func Offset: 0x104
	// Line 319, Address: 0x284e48, Func Offset: 0x108
	// Line 321, Address: 0x284e4c, Func Offset: 0x10c
	// Line 322, Address: 0x284e54, Func Offset: 0x114
	// Line 326, Address: 0x284e58, Func Offset: 0x118
	// Func End, Address: 0x284e64, Func Offset: 0x124
}

// 
// Start address: 0x284e70
void PlayerMaphitSetPos(float* pos_l, float* pos_n, float* pos_r)
{
	float pos_bak[4];
	float pos_l_bak[4];
	_anon1 sph;
	int hit;
	_anon5 line;
	_anon3 plane;
	int res;
	float pos_z[4];
	float len_p;
	float len_n;
	int num;
	float len_p;
	float len_n;
	float mult;
	// Line 342, Address: 0x284e70, Func Offset: 0
	// Line 350, Address: 0x284e78, Func Offset: 0x8
	// Line 342, Address: 0x284e7c, Func Offset: 0xc
	// Line 350, Address: 0x284e8c, Func Offset: 0x1c
	// Line 351, Address: 0x284e94, Func Offset: 0x24
	// Line 357, Address: 0x284ea0, Func Offset: 0x30
	// Line 358, Address: 0x284ea8, Func Offset: 0x38
	// Line 362, Address: 0x284eb0, Func Offset: 0x40
	// Line 370, Address: 0x284eb8, Func Offset: 0x48
	// Line 374, Address: 0x284ec8, Func Offset: 0x58
	// Line 383, Address: 0x284ed0, Func Offset: 0x60
	// Line 384, Address: 0x284edc, Func Offset: 0x6c
	// Line 385, Address: 0x284ef0, Func Offset: 0x80
	// Line 386, Address: 0x284ef8, Func Offset: 0x88
	// Line 394, Address: 0x284f00, Func Offset: 0x90
	// Line 395, Address: 0x284f04, Func Offset: 0x94
	// Line 400, Address: 0x284f0c, Func Offset: 0x9c
	// Line 394, Address: 0x284f14, Func Offset: 0xa4
	// Line 395, Address: 0x284f18, Func Offset: 0xa8
	// Line 396, Address: 0x284f24, Func Offset: 0xb4
	// Line 397, Address: 0x284f2c, Func Offset: 0xbc
	// Line 398, Address: 0x284f34, Func Offset: 0xc4
	// Line 399, Address: 0x284f40, Func Offset: 0xd0
	// Line 400, Address: 0x284f44, Func Offset: 0xd4
	// Line 401, Address: 0x284f4c, Func Offset: 0xdc
	// Line 405, Address: 0x284f54, Func Offset: 0xe4
	// Line 406, Address: 0x284f5c, Func Offset: 0xec
	// Line 409, Address: 0x284f68, Func Offset: 0xf8
	// Line 410, Address: 0x284f78, Func Offset: 0x108
	// Line 411, Address: 0x284f80, Func Offset: 0x110
	// Line 412, Address: 0x284f84, Func Offset: 0x114
	// Line 417, Address: 0x284f90, Func Offset: 0x120
	// Line 420, Address: 0x284f98, Func Offset: 0x128
	// Line 423, Address: 0x284fa0, Func Offset: 0x130
	// Line 428, Address: 0x284fb0, Func Offset: 0x140
	// Line 424, Address: 0x284fb4, Func Offset: 0x144
	// Line 425, Address: 0x284fc0, Func Offset: 0x150
	// Line 424, Address: 0x284fd0, Func Offset: 0x160
	// Line 425, Address: 0x284fd4, Func Offset: 0x164
	// Line 424, Address: 0x284fd8, Func Offset: 0x168
	// Line 428, Address: 0x284fdc, Func Offset: 0x16c
	// Line 432, Address: 0x284fe4, Func Offset: 0x174
	// Line 434, Address: 0x284ff0, Func Offset: 0x180
	// Line 436, Address: 0x284ff4, Func Offset: 0x184
	// Line 434, Address: 0x284ff8, Func Offset: 0x188
	// Line 436, Address: 0x284ffc, Func Offset: 0x18c
	// Line 437, Address: 0x285000, Func Offset: 0x190
	// Line 438, Address: 0x285008, Func Offset: 0x198
	// Line 439, Address: 0x28501c, Func Offset: 0x1ac
	// Line 440, Address: 0x285024, Func Offset: 0x1b4
	// Line 444, Address: 0x28502c, Func Offset: 0x1bc
	// Line 448, Address: 0x285034, Func Offset: 0x1c4
	// Line 444, Address: 0x285038, Func Offset: 0x1c8
	// Line 448, Address: 0x285040, Func Offset: 0x1d0
	// Line 444, Address: 0x285044, Func Offset: 0x1d4
	// Line 448, Address: 0x285050, Func Offset: 0x1e0
	// Line 444, Address: 0x285054, Func Offset: 0x1e4
	// Line 448, Address: 0x285058, Func Offset: 0x1e8
	// Line 453, Address: 0x285064, Func Offset: 0x1f4
	// Line 457, Address: 0x285070, Func Offset: 0x200
	// Line 459, Address: 0x285074, Func Offset: 0x204
	// Line 460, Address: 0x285078, Func Offset: 0x208
	// Line 463, Address: 0x28509c, Func Offset: 0x22c
	// Line 465, Address: 0x2850a0, Func Offset: 0x230
	// Line 466, Address: 0x2850a8, Func Offset: 0x238
	// Line 467, Address: 0x2850b8, Func Offset: 0x248
	// Line 471, Address: 0x2850c0, Func Offset: 0x250
	// Line 472, Address: 0x2850cc, Func Offset: 0x25c
	// Line 474, Address: 0x2850e0, Func Offset: 0x270
	// Line 476, Address: 0x2850e8, Func Offset: 0x278
	// Line 478, Address: 0x2850f8, Func Offset: 0x288
	// Line 479, Address: 0x285100, Func Offset: 0x290
	// Line 480, Address: 0x28510c, Func Offset: 0x29c
	// Line 482, Address: 0x285118, Func Offset: 0x2a8
	// Line 480, Address: 0x285120, Func Offset: 0x2b0
	// Line 482, Address: 0x285128, Func Offset: 0x2b8
	// Line 483, Address: 0x28512c, Func Offset: 0x2bc
	// Line 484, Address: 0x285134, Func Offset: 0x2c4
	// Line 486, Address: 0x28513c, Func Offset: 0x2cc
	// Line 487, Address: 0x285144, Func Offset: 0x2d4
	// Line 492, Address: 0x28514c, Func Offset: 0x2dc
	// Line 494, Address: 0x285168, Func Offset: 0x2f8
	// Line 495, Address: 0x28517c, Func Offset: 0x30c
	// Line 496, Address: 0x285180, Func Offset: 0x310
	// Line 498, Address: 0x285188, Func Offset: 0x318
	// Line 500, Address: 0x285194, Func Offset: 0x324
	// Line 502, Address: 0x2851a0, Func Offset: 0x330
	// Line 503, Address: 0x2851ac, Func Offset: 0x33c
	// Line 504, Address: 0x2851b0, Func Offset: 0x340
	// Line 509, Address: 0x2851d4, Func Offset: 0x364
	// Line 504, Address: 0x285214, Func Offset: 0x3a4
	// Line 514, Address: 0x285218, Func Offset: 0x3a8
	// Line 520, Address: 0x285248, Func Offset: 0x3d8
	// Line 522, Address: 0x28524c, Func Offset: 0x3dc
	// Line 523, Address: 0x285250, Func Offset: 0x3e0
	// Line 527, Address: 0x285258, Func Offset: 0x3e8
	// Line 528, Address: 0x285268, Func Offset: 0x3f8
	// Line 534, Address: 0x285270, Func Offset: 0x400
	// Line 536, Address: 0x285278, Func Offset: 0x408
	// Line 541, Address: 0x285280, Func Offset: 0x410
	// Line 550, Address: 0x28528c, Func Offset: 0x41c
	// Line 553, Address: 0x285290, Func Offset: 0x420
	// Func End, Address: 0x2852a4, Func Offset: 0x434
}

