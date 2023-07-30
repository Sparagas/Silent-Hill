typedef struct sfObj;
typedef union _anon0;
typedef struct _anon1;
typedef struct sgBone;
typedef struct _anon2;
typedef struct _anon3;
typedef struct sfCldObject;
typedef struct _PLAYER_WORK;
typedef struct sgAnime;
typedef struct _anon4;
typedef struct _anon5;
typedef struct _anon6;
typedef struct _anon7;
typedef struct sfCharacter;
typedef struct _anon8;
typedef struct _anon9;
typedef struct _anon10;
typedef union _anon11;
typedef struct _anon12;
typedef struct _GAME_WORK;
typedef struct _anon13;
typedef struct sgQTNode;
typedef struct sfCldPart;
typedef struct sgSVModel;
typedef enum sgIKSolveResult : unsigned char;
typedef enum GameItem : unsigned char;
typedef struct sgIKHandle;
typedef struct sgQTObject;
typedef struct sfOffsetAABB;
typedef union sfCldBody;
typedef struct _anon14;

typedef void(*type_3)(sfObj*);
typedef void(*type_4)(_anon5*, int, int, float*);
typedef sgIKSolveResult(*type_17)();
typedef void(*type_18)(sfObj*);
typedef void(*type_22)(sfObj*);
typedef void(*type_24)(sgAnime*, int);

typedef float type_0[4][4];
typedef unsigned char type_1[4];
typedef float type_2[4];
typedef int type_5[1];
typedef int type_6[1];
typedef _anon7 type_7[4];
typedef _anon11 type_8[0];
typedef int type_9[1];
typedef int type_10[1];
typedef sfCldPart* type_11[6];
typedef unsigned char type_12[3];
typedef int type_13[1];
typedef float type_14[4];
typedef float type_15[4][2];
typedef float type_16[4];
typedef unsigned char type_19[3];
typedef void* type_20[4];
typedef _anon0 type_21[256];
typedef short type_23[2];
typedef unsigned short type_25[2];
typedef int type_26[1];
typedef char type_27[4];
typedef unsigned char type_28[4];
typedef int type_29[1];
typedef float type_30[1];
typedef int type_31[1];

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

struct _anon1
{
	int id;
	float x;
	float y;
	float z;
	float rot;
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

struct _anon2
{
	float abcd[4];
};

struct _anon3
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

struct sfCldObject
{
	sgQTObject tree_object;
	sgQTNode* stay_node;
	sfCldPart* parts[6];
	unsigned char n_parts;
	unsigned char pad[3];
	void* data;
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

struct _anon4
{
	float start[4];
	float end[4];
};

struct _anon5
{
	unsigned long tex0;
	unsigned long clamp;
};

struct _anon6
{
	float center[4];
	float radius;
};

struct _anon7
{
	unsigned char next_offset;
	unsigned char flags;
	short id;
};

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon14 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
};

struct _anon8
{
	int dummy;
};

struct _anon9
{
	float bmin[4];
	float bmax[4];
};

struct _anon10
{
	_anon11 vertex[0];
};

union _anon11
{
	float node[4];
	_anon7 data[4];
};

struct _anon12
{
	float mat[4][4];
	float half_w[4];
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

struct _anon13
{
	float move;
	float speed;
	float rot;
	float side;
	float vert;
	float f_dir;
	float f_move;
	float f_push[4];
	int item;
	int shoot;
	int curse;
	int finisher;
	int select;
	int silent;
	int access;
	float run;
	int battle;
	int power;
	int power_last;
	int backstep;
	float anim_speed;
	int retarget;
	int rstick;
	int stopping;
	float stick_rot;
	int search_view;
	float camera_x;
	float camera_y;
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

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
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
	_anon6 bounding_ball;
	sgQTObject* next;
	sgQTObject* prev;
};

struct sfOffsetAABB
{
	_anon9 aabb;
	float offset[4];
};

union sfCldBody
{
	_anon12 obb;
	_anon9 aabb;
	sfOffsetAABB offset_aabb;
	_anon4 line;
	_anon6 sphere;
};

struct _anon14
{
	void* model;
	void* texture;
	void* texture_global;
	float matrices[4][4];
	float* weights;
	float tex_crops[4];
	void(*texture_load_func)(_anon5*, int, int, float*);
	int equip_flag;
};

void* c_anim;
_GAME_WORK gamew;
float sg_vector_unit_y[4];
float sg_vector_zero[4];
void(*sfObjFuncDummy)(sfObj*);
float sg_vector_unit_z[4];
float sg_vector_unit_x[4];
_anon3 player_battle_work;

void move_normal(_anon13* ui_work, float* pos);
void move_battle(_anon13* ui_work, float* pos);
void PlayerAnotherWorldNormalObjConstruct(sfObj* obj);
void PlayerAnotherWorldNormalObj(sfObj* obj);
void PlayerAnotherWorldNormalObjDestruct();
void PlayerAnotherWorldNormalObjDraw();

// 
// Start address: 0x1b5ab0
void move_normal(_anon13* ui_work, float* pos)
{
	_PLAYER_WORK* p;
	float move;
	// Line 113, Address: 0x1b5ab0, Func Offset: 0
	// Line 114, Address: 0x1b5ab4, Func Offset: 0x4
	// Line 113, Address: 0x1b5ab8, Func Offset: 0x8
	// Line 114, Address: 0x1b5ac8, Func Offset: 0x18
	// Line 119, Address: 0x1b5acc, Func Offset: 0x1c
	// Line 121, Address: 0x1b5adc, Func Offset: 0x2c
	// Line 122, Address: 0x1b5af8, Func Offset: 0x48
	// Line 124, Address: 0x1b5b00, Func Offset: 0x50
	// Line 130, Address: 0x1b5b08, Func Offset: 0x58
	// Line 132, Address: 0x1b5b20, Func Offset: 0x70
	// Line 130, Address: 0x1b5b24, Func Offset: 0x74
	// Line 132, Address: 0x1b5b2c, Func Offset: 0x7c
	// Line 133, Address: 0x1b5b44, Func Offset: 0x94
	// Line 136, Address: 0x1b5b5c, Func Offset: 0xac
	// Line 139, Address: 0x1b5b64, Func Offset: 0xb4
	// Func End, Address: 0x1b5b7c, Func Offset: 0xcc
}

// 
// Start address: 0x1b5b80
void move_battle(_anon13* ui_work, float* pos)
{
	_PLAYER_WORK* p;
	// Line 143, Address: 0x1b5b80, Func Offset: 0
	// Line 147, Address: 0x1b5b84, Func Offset: 0x4
	// Line 143, Address: 0x1b5b88, Func Offset: 0x8
	// Line 147, Address: 0x1b5b8c, Func Offset: 0xc
	// Line 143, Address: 0x1b5b90, Func Offset: 0x10
	// Line 144, Address: 0x1b5b94, Func Offset: 0x14
	// Line 143, Address: 0x1b5b98, Func Offset: 0x18
	// Line 147, Address: 0x1b5b9c, Func Offset: 0x1c
	// Line 144, Address: 0x1b5ba4, Func Offset: 0x24
	// Line 147, Address: 0x1b5ba8, Func Offset: 0x28
	// Line 148, Address: 0x1b5bb4, Func Offset: 0x34
	// Line 150, Address: 0x1b5bc4, Func Offset: 0x44
	// Line 151, Address: 0x1b5be0, Func Offset: 0x60
	// Line 153, Address: 0x1b5be8, Func Offset: 0x68
	// Line 157, Address: 0x1b5bf0, Func Offset: 0x70
	// Line 158, Address: 0x1b5c14, Func Offset: 0x94
	// Line 159, Address: 0x1b5c34, Func Offset: 0xb4
	// Line 161, Address: 0x1b5c40, Func Offset: 0xc0
	// Line 164, Address: 0x1b5c48, Func Offset: 0xc8
	// Line 167, Address: 0x1b5c50, Func Offset: 0xd0
	// Func End, Address: 0x1b5c64, Func Offset: 0xe4
}

// 
// Start address: 0x1b5c70
void PlayerAnotherWorldNormalObjConstruct(sfObj* obj)
{
	_PLAYER_WORK* p;
	_anon1* w;
	sgAnime* anim;
	GameItem wpl;
	int menuid;
	int hit;
	_anon2 plane;
	_anon4 line;
	float tmp[4];
	float q[4];
	float trs[4];
	float q[4];
	sgBone* b;
	// Line 171, Address: 0x1b5c70, Func Offset: 0
	// Line 172, Address: 0x1b5c74, Func Offset: 0x4
	// Line 171, Address: 0x1b5c78, Func Offset: 0x8
	// Line 172, Address: 0x1b5c8c, Func Offset: 0x1c
	// Line 173, Address: 0x1b5c90, Func Offset: 0x20
	// Line 177, Address: 0x1b5c98, Func Offset: 0x28
	// Line 178, Address: 0x1b5ca4, Func Offset: 0x34
	// Line 179, Address: 0x1b5cb4, Func Offset: 0x44
	// Line 182, Address: 0x1b5ce0, Func Offset: 0x70
	// Line 183, Address: 0x1b5cf8, Func Offset: 0x88
	// Line 184, Address: 0x1b5d04, Func Offset: 0x94
	// Line 187, Address: 0x1b5d10, Func Offset: 0xa0
	// Line 188, Address: 0x1b5d1c, Func Offset: 0xac
	// Line 189, Address: 0x1b5d2c, Func Offset: 0xbc
	// Line 190, Address: 0x1b5d38, Func Offset: 0xc8
	// Line 193, Address: 0x1b5d48, Func Offset: 0xd8
	// Line 194, Address: 0x1b5d50, Func Offset: 0xe0
	// Line 195, Address: 0x1b5d58, Func Offset: 0xe8
	// Line 198, Address: 0x1b5d60, Func Offset: 0xf0
	// Line 199, Address: 0x1b5d68, Func Offset: 0xf8
	// Line 200, Address: 0x1b5d7c, Func Offset: 0x10c
	// Line 202, Address: 0x1b5d8c, Func Offset: 0x11c
	// Line 203, Address: 0x1b5d98, Func Offset: 0x128
	// Line 204, Address: 0x1b5da0, Func Offset: 0x130
	// Line 205, Address: 0x1b5da8, Func Offset: 0x138
	// Line 210, Address: 0x1b5db0, Func Offset: 0x140
	// Line 211, Address: 0x1b5dbc, Func Offset: 0x14c
	// Line 212, Address: 0x1b5dc4, Func Offset: 0x154
	// Line 216, Address: 0x1b5dc8, Func Offset: 0x158
	// Line 218, Address: 0x1b5dd4, Func Offset: 0x164
	// Line 219, Address: 0x1b5ddc, Func Offset: 0x16c
	// Line 220, Address: 0x1b5de4, Func Offset: 0x174
	// Line 222, Address: 0x1b5dec, Func Offset: 0x17c
	// Line 231, Address: 0x1b5df0, Func Offset: 0x180
	// Line 241, Address: 0x1b5df8, Func Offset: 0x188
	// Line 242, Address: 0x1b5e04, Func Offset: 0x194
	// Line 245, Address: 0x1b5e10, Func Offset: 0x1a0
	// Line 243, Address: 0x1b5e14, Func Offset: 0x1a4
	// Line 244, Address: 0x1b5e20, Func Offset: 0x1b0
	// Line 243, Address: 0x1b5e2c, Func Offset: 0x1bc
	// Line 244, Address: 0x1b5e30, Func Offset: 0x1c0
	// Line 243, Address: 0x1b5e34, Func Offset: 0x1c4
	// Line 245, Address: 0x1b5e38, Func Offset: 0x1c8
	// Line 246, Address: 0x1b5e40, Func Offset: 0x1d0
	// Line 247, Address: 0x1b5e48, Func Offset: 0x1d8
	// Line 248, Address: 0x1b5e54, Func Offset: 0x1e4
	// Line 254, Address: 0x1b5e5c, Func Offset: 0x1ec
	// Line 258, Address: 0x1b5e60, Func Offset: 0x1f0
	// Line 259, Address: 0x1b5e6c, Func Offset: 0x1fc
	// Line 265, Address: 0x1b5e74, Func Offset: 0x204
	// Line 268, Address: 0x1b5e80, Func Offset: 0x210
	// Line 265, Address: 0x1b5e84, Func Offset: 0x214
	// Line 268, Address: 0x1b5e88, Func Offset: 0x218
	// Line 270, Address: 0x1b5ea0, Func Offset: 0x230
	// Line 274, Address: 0x1b5ea8, Func Offset: 0x238
	// Line 277, Address: 0x1b5eb0, Func Offset: 0x240
	// Line 280, Address: 0x1b5eb8, Func Offset: 0x248
	// Line 282, Address: 0x1b5ec0, Func Offset: 0x250
	// Line 283, Address: 0x1b5ec8, Func Offset: 0x258
	// Line 284, Address: 0x1b5ecc, Func Offset: 0x25c
	// Line 289, Address: 0x1b5ed8, Func Offset: 0x268
	// Line 290, Address: 0x1b5eec, Func Offset: 0x27c
	// Line 291, Address: 0x1b5ef8, Func Offset: 0x288
	// Line 292, Address: 0x1b5f04, Func Offset: 0x294
	// Line 294, Address: 0x1b5f0c, Func Offset: 0x29c
	// Line 300, Address: 0x1b5f14, Func Offset: 0x2a4
	// Line 301, Address: 0x1b5f20, Func Offset: 0x2b0
	// Line 302, Address: 0x1b5f2c, Func Offset: 0x2bc
	// Line 324, Address: 0x1b5f38, Func Offset: 0x2c8
	// Line 325, Address: 0x1b5f3c, Func Offset: 0x2cc
	// Line 326, Address: 0x1b5f40, Func Offset: 0x2d0
	// Line 327, Address: 0x1b5f44, Func Offset: 0x2d4
	// Line 328, Address: 0x1b5f48, Func Offset: 0x2d8
	// Line 329, Address: 0x1b5f4c, Func Offset: 0x2dc
	// Line 330, Address: 0x1b5f50, Func Offset: 0x2e0
	// Line 331, Address: 0x1b5f54, Func Offset: 0x2e4
	// Line 332, Address: 0x1b5f58, Func Offset: 0x2e8
	// Line 333, Address: 0x1b5f5c, Func Offset: 0x2ec
	// Line 335, Address: 0x1b5f60, Func Offset: 0x2f0
	// Line 336, Address: 0x1b5f68, Func Offset: 0x2f8
	// Line 337, Address: 0x1b5f70, Func Offset: 0x300
	// Line 338, Address: 0x1b5f78, Func Offset: 0x308
	// Line 339, Address: 0x1b5f80, Func Offset: 0x310
	// Line 340, Address: 0x1b5f88, Func Offset: 0x318
	// Line 343, Address: 0x1b5f90, Func Offset: 0x320
	// Line 344, Address: 0x1b5f94, Func Offset: 0x324
	// Line 345, Address: 0x1b5f98, Func Offset: 0x328
	// Line 346, Address: 0x1b5f9c, Func Offset: 0x32c
	// Line 347, Address: 0x1b5fa0, Func Offset: 0x330
	// Line 348, Address: 0x1b5fa4, Func Offset: 0x334
	// Line 350, Address: 0x1b5fa8, Func Offset: 0x338
	// Line 351, Address: 0x1b5fb0, Func Offset: 0x340
	// Line 352, Address: 0x1b5fb8, Func Offset: 0x348
	// Line 353, Address: 0x1b5fc0, Func Offset: 0x350
	// Line 354, Address: 0x1b5fc8, Func Offset: 0x358
	// Line 358, Address: 0x1b5fd0, Func Offset: 0x360
	// Line 359, Address: 0x1b5fd8, Func Offset: 0x368
	// Line 360, Address: 0x1b5fe4, Func Offset: 0x374
	// Line 363, Address: 0x1b5fec, Func Offset: 0x37c
	// Line 365, Address: 0x1b6010, Func Offset: 0x3a0
	// Line 371, Address: 0x1b6018, Func Offset: 0x3a8
	// Line 374, Address: 0x1b6024, Func Offset: 0x3b4
	// Func End, Address: 0x1b6040, Func Offset: 0x3d0
}

// 
// Start address: 0x1b6040
void PlayerAnotherWorldNormalObj(sfObj* obj)
{
	_PLAYER_WORK* p;
	_anon13* ui_work;
	float pos[4];
	float force;
	float pos_r[4];
	float pos_l[4];
	float vl;
	float ra;
	float pos_e[4];
	int f;
	int num;
	float sf;
	float rpf;
	_anon4 line;
	_anon10* pol;
	int no_light;
	float q[4];
	float qx[4];
	float qz[4];
	float trs[4];
	sgBone* wp;
	sgBone* hd;
	float pos_w[4];
	float pos_h[4];
	float tgt[4];
	sgBone* b;
	float q_s[4];
	float q_d[4];
	float q[4];
	sgBone* b;
	// Line 378, Address: 0x1b6040, Func Offset: 0
	// Line 379, Address: 0x1b6044, Func Offset: 0x4
	// Line 378, Address: 0x1b6048, Func Offset: 0x8
	// Line 392, Address: 0x1b605c, Func Offset: 0x1c
	// Line 379, Address: 0x1b6060, Func Offset: 0x20
	// Line 392, Address: 0x1b6064, Func Offset: 0x24
	// Line 394, Address: 0x1b6070, Func Offset: 0x30
	// Line 395, Address: 0x1b607c, Func Offset: 0x3c
	// Line 396, Address: 0x1b6088, Func Offset: 0x48
	// Line 397, Address: 0x1b6094, Func Offset: 0x54
	// Line 399, Address: 0x1b6098, Func Offset: 0x58
	// Line 400, Address: 0x1b60a0, Func Offset: 0x60
	// Line 401, Address: 0x1b60b0, Func Offset: 0x70
	// Line 402, Address: 0x1b60b8, Func Offset: 0x78
	// Line 404, Address: 0x1b60c0, Func Offset: 0x80
	// Line 405, Address: 0x1b60cc, Func Offset: 0x8c
	// Line 420, Address: 0x1b60d0, Func Offset: 0x90
	// Line 423, Address: 0x1b60d8, Func Offset: 0x98
	// Line 424, Address: 0x1b60e4, Func Offset: 0xa4
	// Line 425, Address: 0x1b60fc, Func Offset: 0xbc
	// Line 430, Address: 0x1b6100, Func Offset: 0xc0
	// Line 431, Address: 0x1b6118, Func Offset: 0xd8
	// Line 434, Address: 0x1b6138, Func Offset: 0xf8
	// Line 436, Address: 0x1b6140, Func Offset: 0x100
	// Line 437, Address: 0x1b6154, Func Offset: 0x114
	// Line 438, Address: 0x1b6160, Func Offset: 0x120
	// Line 437, Address: 0x1b6168, Func Offset: 0x128
	// Line 438, Address: 0x1b616c, Func Offset: 0x12c
	// Line 439, Address: 0x1b6178, Func Offset: 0x138
	// Line 441, Address: 0x1b617c, Func Offset: 0x13c
	// Line 444, Address: 0x1b6180, Func Offset: 0x140
	// Line 445, Address: 0x1b618c, Func Offset: 0x14c
	// Line 449, Address: 0x1b61bc, Func Offset: 0x17c
	// Line 450, Address: 0x1b61c4, Func Offset: 0x184
	// Line 453, Address: 0x1b61d0, Func Offset: 0x190
	// Line 455, Address: 0x1b61d8, Func Offset: 0x198
	// Line 459, Address: 0x1b61e0, Func Offset: 0x1a0
	// Line 460, Address: 0x1b61f8, Func Offset: 0x1b8
	// Line 461, Address: 0x1b6200, Func Offset: 0x1c0
	// Line 463, Address: 0x1b6208, Func Offset: 0x1c8
	// Line 465, Address: 0x1b6214, Func Offset: 0x1d4
	// Line 466, Address: 0x1b6218, Func Offset: 0x1d8
	// Line 468, Address: 0x1b6220, Func Offset: 0x1e0
	// Line 469, Address: 0x1b6244, Func Offset: 0x204
	// Line 470, Address: 0x1b6250, Func Offset: 0x210
	// Line 471, Address: 0x1b626c, Func Offset: 0x22c
	// Line 472, Address: 0x1b6284, Func Offset: 0x244
	// Line 474, Address: 0x1b6288, Func Offset: 0x248
	// Line 475, Address: 0x1b62c0, Func Offset: 0x280
	// Line 476, Address: 0x1b62dc, Func Offset: 0x29c
	// Line 481, Address: 0x1b62e0, Func Offset: 0x2a0
	// Line 483, Address: 0x1b62ec, Func Offset: 0x2ac
	// Line 484, Address: 0x1b62f8, Func Offset: 0x2b8
	// Line 485, Address: 0x1b6308, Func Offset: 0x2c8
	// Line 487, Address: 0x1b6314, Func Offset: 0x2d4
	// Line 488, Address: 0x1b631c, Func Offset: 0x2dc
	// Line 520, Address: 0x1b6320, Func Offset: 0x2e0
	// Line 516, Address: 0x1b6324, Func Offset: 0x2e4
	// Line 520, Address: 0x1b6328, Func Offset: 0x2e8
	// Line 516, Address: 0x1b632c, Func Offset: 0x2ec
	// Line 517, Address: 0x1b6330, Func Offset: 0x2f0
	// Line 518, Address: 0x1b6338, Func Offset: 0x2f8
	// Line 520, Address: 0x1b6340, Func Offset: 0x300
	// Line 523, Address: 0x1b635c, Func Offset: 0x31c
	// Line 524, Address: 0x1b6384, Func Offset: 0x344
	// Line 525, Address: 0x1b6390, Func Offset: 0x350
	// Line 529, Address: 0x1b63c0, Func Offset: 0x380
	// Line 530, Address: 0x1b63d0, Func Offset: 0x390
	// Line 531, Address: 0x1b63e0, Func Offset: 0x3a0
	// Line 533, Address: 0x1b63e8, Func Offset: 0x3a8
	// Line 535, Address: 0x1b6400, Func Offset: 0x3c0
	// Line 537, Address: 0x1b6448, Func Offset: 0x408
	// Line 538, Address: 0x1b644c, Func Offset: 0x40c
	// Line 540, Address: 0x1b6458, Func Offset: 0x418
	// Line 542, Address: 0x1b6464, Func Offset: 0x424
	// Line 544, Address: 0x1b6470, Func Offset: 0x430
	// Line 547, Address: 0x1b6474, Func Offset: 0x434
	// Line 550, Address: 0x1b6480, Func Offset: 0x440
	// Line 551, Address: 0x1b648c, Func Offset: 0x44c
	// Line 552, Address: 0x1b6498, Func Offset: 0x458
	// Line 553, Address: 0x1b64a8, Func Offset: 0x468
	// Line 555, Address: 0x1b64b8, Func Offset: 0x478
	// Line 556, Address: 0x1b64c8, Func Offset: 0x488
	// Line 558, Address: 0x1b64e8, Func Offset: 0x4a8
	// Line 556, Address: 0x1b64f0, Func Offset: 0x4b0
	// Line 558, Address: 0x1b64f4, Func Offset: 0x4b4
	// Line 560, Address: 0x1b6530, Func Offset: 0x4f0
	// Line 561, Address: 0x1b6534, Func Offset: 0x4f4
	// Line 563, Address: 0x1b6540, Func Offset: 0x500
	// Line 565, Address: 0x1b654c, Func Offset: 0x50c
	// Line 567, Address: 0x1b6558, Func Offset: 0x518
	// Line 576, Address: 0x1b6560, Func Offset: 0x520
	// Line 579, Address: 0x1b6578, Func Offset: 0x538
	// Line 580, Address: 0x1b6580, Func Offset: 0x540
	// Line 582, Address: 0x1b6584, Func Offset: 0x544
	// Line 581, Address: 0x1b6588, Func Offset: 0x548
	// Line 582, Address: 0x1b658c, Func Offset: 0x54c
	// Line 580, Address: 0x1b6590, Func Offset: 0x550
	// Line 582, Address: 0x1b6594, Func Offset: 0x554
	// Line 581, Address: 0x1b6598, Func Offset: 0x558
	// Line 582, Address: 0x1b659c, Func Offset: 0x55c
	// Line 583, Address: 0x1b65ac, Func Offset: 0x56c
	// Line 585, Address: 0x1b65b8, Func Offset: 0x578
	// Line 586, Address: 0x1b65c0, Func Offset: 0x580
	// Line 588, Address: 0x1b65d0, Func Offset: 0x590
	// Line 595, Address: 0x1b65d8, Func Offset: 0x598
	// Line 596, Address: 0x1b65e8, Func Offset: 0x5a8
	// Line 597, Address: 0x1b65f8, Func Offset: 0x5b8
	// Line 599, Address: 0x1b6600, Func Offset: 0x5c0
	// Line 601, Address: 0x1b6608, Func Offset: 0x5c8
	// Line 604, Address: 0x1b662c, Func Offset: 0x5ec
	// Line 605, Address: 0x1b6638, Func Offset: 0x5f8
	// Line 606, Address: 0x1b6644, Func Offset: 0x604
	// Line 608, Address: 0x1b6664, Func Offset: 0x624
	// Line 610, Address: 0x1b6668, Func Offset: 0x628
	// Line 614, Address: 0x1b6670, Func Offset: 0x630
	// Line 615, Address: 0x1b6680, Func Offset: 0x640
	// Line 616, Address: 0x1b6690, Func Offset: 0x650
	// Line 617, Address: 0x1b66ac, Func Offset: 0x66c
	// Line 619, Address: 0x1b66c8, Func Offset: 0x688
	// Line 620, Address: 0x1b66d8, Func Offset: 0x698
	// Line 621, Address: 0x1b66e0, Func Offset: 0x6a0
	// Line 622, Address: 0x1b66ec, Func Offset: 0x6ac
	// Line 623, Address: 0x1b66fc, Func Offset: 0x6bc
	// Line 624, Address: 0x1b6708, Func Offset: 0x6c8
	// Line 625, Address: 0x1b6714, Func Offset: 0x6d4
	// Line 626, Address: 0x1b6724, Func Offset: 0x6e4
	// Line 628, Address: 0x1b6730, Func Offset: 0x6f0
	// Line 634, Address: 0x1b6748, Func Offset: 0x708
	// Line 635, Address: 0x1b6758, Func Offset: 0x718
	// Line 636, Address: 0x1b6760, Func Offset: 0x720
	// Line 638, Address: 0x1b6768, Func Offset: 0x728
	// Line 639, Address: 0x1b677c, Func Offset: 0x73c
	// Line 640, Address: 0x1b6784, Func Offset: 0x744
	// Line 641, Address: 0x1b6790, Func Offset: 0x750
	// Line 642, Address: 0x1b6794, Func Offset: 0x754
	// Line 644, Address: 0x1b67a0, Func Offset: 0x760
	// Line 645, Address: 0x1b67a8, Func Offset: 0x768
	// Line 646, Address: 0x1b67b4, Func Offset: 0x774
	// Line 648, Address: 0x1b67bc, Func Offset: 0x77c
	// Line 650, Address: 0x1b67c0, Func Offset: 0x780
	// Line 651, Address: 0x1b67dc, Func Offset: 0x79c
	// Line 652, Address: 0x1b67ec, Func Offset: 0x7ac
	// Line 651, Address: 0x1b67f4, Func Offset: 0x7b4
	// Line 652, Address: 0x1b67fc, Func Offset: 0x7bc
	// Line 653, Address: 0x1b6808, Func Offset: 0x7c8
	// Line 659, Address: 0x1b6810, Func Offset: 0x7d0
	// Line 666, Address: 0x1b6818, Func Offset: 0x7d8
	// Line 667, Address: 0x1b6828, Func Offset: 0x7e8
	// Line 670, Address: 0x1b6838, Func Offset: 0x7f8
	// Line 668, Address: 0x1b683c, Func Offset: 0x7fc
	// Line 669, Address: 0x1b6848, Func Offset: 0x808
	// Line 668, Address: 0x1b6854, Func Offset: 0x814
	// Line 669, Address: 0x1b6858, Func Offset: 0x818
	// Line 668, Address: 0x1b685c, Func Offset: 0x81c
	// Line 670, Address: 0x1b6860, Func Offset: 0x820
	// Line 671, Address: 0x1b6868, Func Offset: 0x828
	// Line 672, Address: 0x1b6870, Func Offset: 0x830
	// Line 673, Address: 0x1b6878, Func Offset: 0x838
	// Line 672, Address: 0x1b687c, Func Offset: 0x83c
	// Line 673, Address: 0x1b6880, Func Offset: 0x840
	// Line 674, Address: 0x1b6888, Func Offset: 0x848
	// Line 675, Address: 0x1b68a0, Func Offset: 0x860
	// Line 684, Address: 0x1b68a8, Func Offset: 0x868
	// Line 685, Address: 0x1b68bc, Func Offset: 0x87c
	// Line 687, Address: 0x1b68d4, Func Offset: 0x894
	// Line 688, Address: 0x1b68e0, Func Offset: 0x8a0
	// Line 690, Address: 0x1b68f0, Func Offset: 0x8b0
	// Line 692, Address: 0x1b6908, Func Offset: 0x8c8
	// Line 693, Address: 0x1b6914, Func Offset: 0x8d4
	// Line 694, Address: 0x1b6924, Func Offset: 0x8e4
	// Line 695, Address: 0x1b6928, Func Offset: 0x8e8
	// Line 701, Address: 0x1b6934, Func Offset: 0x8f4
	// Line 702, Address: 0x1b6940, Func Offset: 0x900
	// Line 703, Address: 0x1b6954, Func Offset: 0x914
	// Line 709, Address: 0x1b6960, Func Offset: 0x920
	// Line 714, Address: 0x1b6968, Func Offset: 0x928
	// Line 719, Address: 0x1b6970, Func Offset: 0x930
	// Line 720, Address: 0x1b6978, Func Offset: 0x938
	// Line 723, Address: 0x1b6980, Func Offset: 0x940
	// Line 727, Address: 0x1b6988, Func Offset: 0x948
	// Line 730, Address: 0x1b6990, Func Offset: 0x950
	// Line 733, Address: 0x1b69b8, Func Offset: 0x978
	// Line 739, Address: 0x1b69c8, Func Offset: 0x988
	// Line 740, Address: 0x1b69d4, Func Offset: 0x994
	// Line 739, Address: 0x1b69d8, Func Offset: 0x998
	// Line 740, Address: 0x1b69dc, Func Offset: 0x99c
	// Line 741, Address: 0x1b69e8, Func Offset: 0x9a8
	// Line 742, Address: 0x1b69f4, Func Offset: 0x9b4
	// Line 743, Address: 0x1b6a00, Func Offset: 0x9c0
	// Line 744, Address: 0x1b6a20, Func Offset: 0x9e0
	// Line 750, Address: 0x1b6a30, Func Offset: 0x9f0
	// Line 752, Address: 0x1b6a38, Func Offset: 0x9f8
	// Line 756, Address: 0x1b6a40, Func Offset: 0xa00
	// Line 759, Address: 0x1b6a48, Func Offset: 0xa08
	// Line 780, Address: 0x1b6a50, Func Offset: 0xa10
	// Line 785, Address: 0x1b6a88, Func Offset: 0xa48
	// Line 786, Address: 0x1b6a98, Func Offset: 0xa58
	// Line 787, Address: 0x1b6aa4, Func Offset: 0xa64
	// Line 788, Address: 0x1b6ab0, Func Offset: 0xa70
	// Line 789, Address: 0x1b6abc, Func Offset: 0xa7c
	// Line 790, Address: 0x1b6acc, Func Offset: 0xa8c
	// Line 791, Address: 0x1b6ad8, Func Offset: 0xa98
	// Line 794, Address: 0x1b6ae0, Func Offset: 0xaa0
	// Line 795, Address: 0x1b6aec, Func Offset: 0xaac
	// Line 827, Address: 0x1b6af8, Func Offset: 0xab8
	// Line 828, Address: 0x1b6b00, Func Offset: 0xac0
	// Line 829, Address: 0x1b6b0c, Func Offset: 0xacc
	// Line 833, Address: 0x1b6b18, Func Offset: 0xad8
	// Line 836, Address: 0x1b6b20, Func Offset: 0xae0
	// Func End, Address: 0x1b6b3c, Func Offset: 0xafc
}

// 
// Start address: 0x1b6b40
void PlayerAnotherWorldNormalObjDestruct()
{
	_PLAYER_WORK* p;
	// Line 839, Address: 0x1b6b40, Func Offset: 0
	// Line 840, Address: 0x1b6b44, Func Offset: 0x4
	// Line 839, Address: 0x1b6b48, Func Offset: 0x8
	// Line 840, Address: 0x1b6b50, Func Offset: 0x10
	// Line 842, Address: 0x1b6b54, Func Offset: 0x14
	// Line 843, Address: 0x1b6b5c, Func Offset: 0x1c
	// Line 844, Address: 0x1b6b64, Func Offset: 0x24
	// Line 845, Address: 0x1b6b70, Func Offset: 0x30
	// Line 847, Address: 0x1b6b78, Func Offset: 0x38
	// Line 848, Address: 0x1b6b80, Func Offset: 0x40
	// Line 849, Address: 0x1b6b88, Func Offset: 0x48
	// Line 850, Address: 0x1b6b90, Func Offset: 0x50
	// Line 851, Address: 0x1b6b98, Func Offset: 0x58
	// Line 853, Address: 0x1b6ba0, Func Offset: 0x60
	// Line 855, Address: 0x1b6ba8, Func Offset: 0x68
	// Line 857, Address: 0x1b6bb8, Func Offset: 0x78
	// Line 858, Address: 0x1b6bc4, Func Offset: 0x84
	// Line 860, Address: 0x1b6bc8, Func Offset: 0x88
	// Line 862, Address: 0x1b6bec, Func Offset: 0xac
	// Line 863, Address: 0x1b6bf4, Func Offset: 0xb4
	// Line 865, Address: 0x1b6bf8, Func Offset: 0xb8
	// Line 866, Address: 0x1b6c00, Func Offset: 0xc0
	// Line 867, Address: 0x1b6c08, Func Offset: 0xc8
	// Line 868, Address: 0x1b6c10, Func Offset: 0xd0
	// Line 871, Address: 0x1b6c18, Func Offset: 0xd8
	// Func End, Address: 0x1b6c28, Func Offset: 0xe8
}

// 
// Start address: 0x1b6c30
void PlayerAnotherWorldNormalObjDraw()
{
	_PLAYER_WORK* p;
	// Line 874, Address: 0x1b6c30, Func Offset: 0
	// Line 876, Address: 0x1b6c34, Func Offset: 0x4
	// Line 874, Address: 0x1b6c38, Func Offset: 0x8
	// Line 876, Address: 0x1b6c40, Func Offset: 0x10
	// Line 923, Address: 0x1b6c48, Func Offset: 0x18
	// Line 924, Address: 0x1b6c50, Func Offset: 0x20
	// Line 925, Address: 0x1b6c68, Func Offset: 0x38
	// Line 927, Address: 0x1b6c6c, Func Offset: 0x3c
	// Line 948, Address: 0x1b6c70, Func Offset: 0x40
	// Line 951, Address: 0x1b6c78, Func Offset: 0x48
	// Func End, Address: 0x1b6c88, Func Offset: 0x58
}

