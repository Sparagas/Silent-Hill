typedef struct sgBone;
typedef struct sfCldObject;
typedef struct sgQTNode;
typedef struct _anon0;
typedef struct sgSVModel;
typedef struct sfCldPart;
typedef struct _anon1;
typedef struct sfCharacter;
typedef struct sgAnime;
typedef struct sfObj;
typedef enum sgIKSolveResult : unsigned char;
typedef struct sgQTObject;
typedef struct sgIKHandle;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef struct sfOffsetAABB;
typedef struct _anon5;
typedef union sfCldBody;
typedef struct _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef struct _anon9;
typedef struct _anon10;
typedef union _anon11;
typedef enum GameItem : unsigned char;
typedef struct _PLAYER_WORK;

typedef void(*type_0)(sfObj*);
typedef void(*type_5)(_anon0*, int, int, float*);
typedef sgIKSolveResult(*type_8)();
typedef void(*type_13)(sgAnime*, int);
typedef void(*type_15)(sfObj*);

typedef sfCldPart* type_1[6];
typedef unsigned char type_2[3];
typedef float type_3[4][4];
typedef float type_4[4];
typedef float type_6[4];
typedef float type_7[4][2];
typedef unsigned char type_9[3];
typedef float type_10[4];
typedef void* type_11[4];
typedef _PLAYER_WORK type_12[2];
typedef _anon11 type_14[256];
typedef short type_16[2];
typedef unsigned char type_17[4];
typedef unsigned short type_18[2];
typedef char type_19[4];
typedef unsigned char type_20[4];
typedef float type_21[1];
typedef int type_22[1];

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

struct _anon0
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

struct _anon1
{
	void* model;
	void* texture;
	void* texture_global;
	float matrices[4][4];
	float* weights;
	float tex_crops[4];
	void(*texture_load_func)(_anon0*, int, int, float*);
	int equip_flag;
};

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon1 model_work;
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

struct sfObj
{
	_anon11 fwork[256];
	_anon11* work;
	void(*func)(sfObj*);
	_anon11* work_pt0;
	_anon11* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon11* sys_work;
	_anon11* scene_work;
	_anon11* event_work;
	_anon11* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

struct sgQTObject
{
	_anon5 bounding_ball;
	sgQTObject* next;
	sgQTObject* prev;
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

struct _anon3
{
	float abcd[4];
};

struct _anon4
{
	float start[4];
	float end[4];
};

struct sfOffsetAABB
{
	_anon6 aabb;
	float offset[4];
};

struct _anon5
{
	float center[4];
	float radius;
};

union sfCldBody
{
	_anon7 obb;
	_anon6 aabb;
	sfOffsetAABB offset_aabb;
	_anon4 line;
	_anon5 sphere;
};

struct _anon6
{
	float bmin[4];
	float bmax[4];
};

struct _anon7
{
	float mat[4][4];
	float half_w[4];
};

struct _anon8
{
	int dummy;
};

struct _anon9
{
	float target_r[4];
	float target_l[4];
	float current_r[4];
	float current_l[4];
	float loc_r[4];
	float loc_l[4];
	float target_h;
	float current_h;
	float spd_r;
	float spd_l;
	int toe_r;
	int toe_l;
};

struct _anon10
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

union _anon11
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

_PLAYER_WORK playerw[2];
float walk_time;
_anon9 lwork;
float sg_vector_zero[4];
_anon10 player_battle_work;

void PlayerFootInitLWork();
void PlayerFootHeightSetTarget(float target);
float PlayerFootHeightGetCurrent();
void PlayerFootSetLastWork();
void PlayerFootAddWalkTime();
int PlayerFootIsWalkTimeOver();
int PlayerFootControlSlip();
int PlayerFootControlBattleSlip(int mode);
void PlayerFootSetTarget(float* right, float* left);
void PlayerFootSetPos();
float height_check(float* pos);
int plane_check(float* pos);
void PlayerFootAboveFloor();

// 
// Start address: 0x2d2d60
void PlayerFootInitLWork()
{
	sgIKHandle* h_r;
	sgIKHandle* h_l;
	// Line 77, Address: 0x2d2d60, Func Offset: 0
	// Line 78, Address: 0x2d2d64, Func Offset: 0x4
	// Line 77, Address: 0x2d2d68, Func Offset: 0x8
	// Line 78, Address: 0x2d2d6c, Func Offset: 0xc
	// Line 77, Address: 0x2d2d70, Func Offset: 0x10
	// Line 78, Address: 0x2d2d74, Func Offset: 0x14
	// Line 77, Address: 0x2d2d78, Func Offset: 0x18
	// Line 78, Address: 0x2d2d7c, Func Offset: 0x1c
	// Line 79, Address: 0x2d2d88, Func Offset: 0x28
	// Line 80, Address: 0x2d2d98, Func Offset: 0x38
	// Line 81, Address: 0x2d2da8, Func Offset: 0x48
	// Line 82, Address: 0x2d2db8, Func Offset: 0x58
	// Line 83, Address: 0x2d2dc8, Func Offset: 0x68
	// Line 84, Address: 0x2d2dd8, Func Offset: 0x78
	// Line 85, Address: 0x2d2de0, Func Offset: 0x80
	// Line 86, Address: 0x2d2de8, Func Offset: 0x88
	// Line 87, Address: 0x2d2df0, Func Offset: 0x90
	// Line 88, Address: 0x2d2df8, Func Offset: 0x98
	// Line 94, Address: 0x2d2e00, Func Offset: 0xa0
	// Line 96, Address: 0x2d2e18, Func Offset: 0xb8
	// Line 98, Address: 0x2d2e38, Func Offset: 0xd8
	// Line 99, Address: 0x2d2e4c, Func Offset: 0xec
	// Line 103, Address: 0x2d2e60, Func Offset: 0x100
	// Func End, Address: 0x2d2e74, Func Offset: 0x114
}

// 
// Start address: 0x2d2e80
void PlayerFootHeightSetTarget(float target)
{
	// Line 108, Address: 0x2d2e80, Func Offset: 0
	// Line 111, Address: 0x2d2e90, Func Offset: 0x10
	// Func End, Address: 0x2d2e98, Func Offset: 0x18
}

// 
// Start address: 0x2d2ea0
float PlayerFootHeightGetCurrent()
{
	// Line 115, Address: 0x2d2ea0, Func Offset: 0
	// Line 117, Address: 0x2d2ea4, Func Offset: 0x4
	// Line 115, Address: 0x2d2ea8, Func Offset: 0x8
	// Line 117, Address: 0x2d2eac, Func Offset: 0xc
	// Line 118, Address: 0x2d2ec0, Func Offset: 0x20
	// Line 119, Address: 0x2d2ec8, Func Offset: 0x28
	// Line 120, Address: 0x2d2ee0, Func Offset: 0x40
	// Line 127, Address: 0x2d2ee8, Func Offset: 0x48
	// Line 128, Address: 0x2d2f14, Func Offset: 0x74
	// Line 127, Address: 0x2d2f1c, Func Offset: 0x7c
	// Line 130, Address: 0x2d2f28, Func Offset: 0x88
	// Func End, Address: 0x2d2f30, Func Offset: 0x90
}

// 
// Start address: 0x2d2f30
void PlayerFootSetLastWork()
{
	sgBone* bone_r;
	sgBone* bone_l;
	float last_r[4];
	float last_l[4];
	float sb_r[4];
	float sb_l[4];
	float sgn;
	float atn;
	float adf;
	// Line 134, Address: 0x2d2f30, Func Offset: 0
	// Line 138, Address: 0x2d2f34, Func Offset: 0x4
	// Line 134, Address: 0x2d2f38, Func Offset: 0x8
	// Line 138, Address: 0x2d2f3c, Func Offset: 0xc
	// Line 134, Address: 0x2d2f40, Func Offset: 0x10
	// Line 138, Address: 0x2d2f50, Func Offset: 0x20
	// Line 140, Address: 0x2d2f5c, Func Offset: 0x2c
	// Line 141, Address: 0x2d2f7c, Func Offset: 0x4c
	// Line 142, Address: 0x2d2f90, Func Offset: 0x60
	// Line 143, Address: 0x2d2f9c, Func Offset: 0x6c
	// Line 145, Address: 0x2d2fa8, Func Offset: 0x78
	// Line 146, Address: 0x2d2fb8, Func Offset: 0x88
	// Line 145, Address: 0x2d2fbc, Func Offset: 0x8c
	// Line 146, Address: 0x2d2fc0, Func Offset: 0x90
	// Line 147, Address: 0x2d2fcc, Func Offset: 0x9c
	// Line 146, Address: 0x2d2fd0, Func Offset: 0xa0
	// Line 147, Address: 0x2d2fd4, Func Offset: 0xa4
	// Line 148, Address: 0x2d2fe0, Func Offset: 0xb0
	// Line 149, Address: 0x2d2ff0, Func Offset: 0xc0
	// Line 152, Address: 0x2d3014, Func Offset: 0xe4
	// Line 163, Address: 0x2d3040, Func Offset: 0x110
	// Line 164, Address: 0x2d3054, Func Offset: 0x124
	// Line 165, Address: 0x2d3068, Func Offset: 0x138
	// Line 166, Address: 0x2d3078, Func Offset: 0x148
	// Line 165, Address: 0x2d307c, Func Offset: 0x14c
	// Line 166, Address: 0x2d3080, Func Offset: 0x150
	// Line 167, Address: 0x2d308c, Func Offset: 0x15c
	// Line 166, Address: 0x2d3090, Func Offset: 0x160
	// Line 167, Address: 0x2d3094, Func Offset: 0x164
	// Line 168, Address: 0x2d30a0, Func Offset: 0x170
	// Line 169, Address: 0x2d30b0, Func Offset: 0x180
	// Line 170, Address: 0x2d30d4, Func Offset: 0x1a4
	// Line 175, Address: 0x2d30f8, Func Offset: 0x1c8
	// Line 177, Address: 0x2d3104, Func Offset: 0x1d4
	// Line 179, Address: 0x2d3114, Func Offset: 0x1e4
	// Line 177, Address: 0x2d3118, Func Offset: 0x1e8
	// Line 179, Address: 0x2d311c, Func Offset: 0x1ec
	// Line 180, Address: 0x2d3134, Func Offset: 0x204
	// Line 182, Address: 0x2d3140, Func Offset: 0x210
	// Line 183, Address: 0x2d3148, Func Offset: 0x218
	// Line 186, Address: 0x2d3184, Func Offset: 0x254
	// Line 187, Address: 0x2d3194, Func Offset: 0x264
	// Line 188, Address: 0x2d31a4, Func Offset: 0x274
	// Line 187, Address: 0x2d31a8, Func Offset: 0x278
	// Line 188, Address: 0x2d31ac, Func Offset: 0x27c
	// Line 189, Address: 0x2d31c4, Func Offset: 0x294
	// Line 191, Address: 0x2d31d0, Func Offset: 0x2a0
	// Line 192, Address: 0x2d31d8, Func Offset: 0x2a8
	// Line 199, Address: 0x2d3218, Func Offset: 0x2e8
	// Func End, Address: 0x2d3234, Func Offset: 0x304
}

// 
// Start address: 0x2d3240
void PlayerFootAddWalkTime()
{
	float mult;
	// Line 203, Address: 0x2d3240, Func Offset: 0
	// Line 206, Address: 0x2d324c, Func Offset: 0xc
	// Line 203, Address: 0x2d3250, Func Offset: 0x10
	// Line 206, Address: 0x2d3258, Func Offset: 0x18
	// Line 208, Address: 0x2d3268, Func Offset: 0x28
	// Line 209, Address: 0x2d3284, Func Offset: 0x44
	// Line 212, Address: 0x2d329c, Func Offset: 0x5c
	// Line 214, Address: 0x2d32a8, Func Offset: 0x68
	// Line 217, Address: 0x2d32c0, Func Offset: 0x80
	// Line 218, Address: 0x2d32d0, Func Offset: 0x90
	// Line 220, Address: 0x2d32d8, Func Offset: 0x98
	// Line 224, Address: 0x2d32e0, Func Offset: 0xa0
	// Func End, Address: 0x2d32f0, Func Offset: 0xb0
}

// 
// Start address: 0x2d32f0
int PlayerFootIsWalkTimeOver()
{
	_anon2* ui;
	int ret;
	// Line 228, Address: 0x2d32f0, Func Offset: 0
	// Line 229, Address: 0x2d32f8, Func Offset: 0x8
	// Line 238, Address: 0x2d3300, Func Offset: 0x10
	// Line 239, Address: 0x2d3354, Func Offset: 0x64
	// Line 242, Address: 0x2d3358, Func Offset: 0x68
	// Func End, Address: 0x2d3364, Func Offset: 0x74
}

// 
// Start address: 0x2d3370
int PlayerFootControlSlip()
{
	sgBone* bone_r;
	sgBone* bone_l;
	float pos_r[4];
	float pos_l[4];
	float pos_dr[4];
	float pos_dl[4];
	float dif_r[4];
	float dif_l[4];
	float foot_r;
	float foot_l;
	int lr;
	float pos_pl[4];
	float loc_r[4];
	float loc_l[4];
	float lr_dif;
	float push_vec[4];
	float len_p;
	float len_p;
	// Line 246, Address: 0x2d3370, Func Offset: 0
	// Line 266, Address: 0x2d3374, Func Offset: 0x4
	// Line 246, Address: 0x2d3378, Func Offset: 0x8
	// Line 266, Address: 0x2d337c, Func Offset: 0xc
	// Line 246, Address: 0x2d3380, Func Offset: 0x10
	// Line 266, Address: 0x2d338c, Func Offset: 0x1c
	// Line 267, Address: 0x2d33c8, Func Offset: 0x58
	// Line 270, Address: 0x2d33d0, Func Offset: 0x60
	// Line 271, Address: 0x2d33e0, Func Offset: 0x70
	// Line 270, Address: 0x2d33e4, Func Offset: 0x74
	// Line 271, Address: 0x2d33e8, Func Offset: 0x78
	// Line 272, Address: 0x2d33f8, Func Offset: 0x88
	// Line 273, Address: 0x2d3404, Func Offset: 0x94
	// Line 276, Address: 0x2d3410, Func Offset: 0xa0
	// Line 277, Address: 0x2d3420, Func Offset: 0xb0
	// Line 278, Address: 0x2d3440, Func Offset: 0xd0
	// Line 285, Address: 0x2d3460, Func Offset: 0xf0
	// Line 286, Address: 0x2d3484, Func Offset: 0x114
	// Line 287, Address: 0x2d34a8, Func Offset: 0x138
	// Line 288, Address: 0x2d34cc, Func Offset: 0x15c
	// Line 296, Address: 0x2d34f0, Func Offset: 0x180
	// Line 297, Address: 0x2d3514, Func Offset: 0x1a4
	// Line 298, Address: 0x2d3538, Func Offset: 0x1c8
	// Line 301, Address: 0x2d3568, Func Offset: 0x1f8
	// Line 304, Address: 0x2d359c, Func Offset: 0x22c
	// Line 305, Address: 0x2d35a0, Func Offset: 0x230
	// Line 308, Address: 0x2d35bc, Func Offset: 0x24c
	// Line 309, Address: 0x2d35c8, Func Offset: 0x258
	// Line 312, Address: 0x2d35dc, Func Offset: 0x26c
	// Line 315, Address: 0x2d35e8, Func Offset: 0x278
	// Line 316, Address: 0x2d35ec, Func Offset: 0x27c
	// Line 321, Address: 0x2d35f0, Func Offset: 0x280
	// Line 324, Address: 0x2d35fc, Func Offset: 0x28c
	// Line 329, Address: 0x2d3600, Func Offset: 0x290
	// Line 327, Address: 0x2d3604, Func Offset: 0x294
	// Line 326, Address: 0x2d3608, Func Offset: 0x298
	// Line 327, Address: 0x2d360c, Func Offset: 0x29c
	// Line 325, Address: 0x2d3610, Func Offset: 0x2a0
	// Line 324, Address: 0x2d3618, Func Offset: 0x2a8
	// Line 326, Address: 0x2d3620, Func Offset: 0x2b0
	// Line 325, Address: 0x2d3624, Func Offset: 0x2b4
	// Line 326, Address: 0x2d3628, Func Offset: 0x2b8
	// Line 329, Address: 0x2d362c, Func Offset: 0x2bc
	// Line 330, Address: 0x2d364c, Func Offset: 0x2dc
	// Line 329, Address: 0x2d3654, Func Offset: 0x2e4
	// Line 330, Address: 0x2d3660, Func Offset: 0x2f0
	// Line 331, Address: 0x2d3668, Func Offset: 0x2f8
	// Line 330, Address: 0x2d366c, Func Offset: 0x2fc
	// Line 331, Address: 0x2d3670, Func Offset: 0x300
	// Line 332, Address: 0x2d3680, Func Offset: 0x310
	// Line 331, Address: 0x2d3684, Func Offset: 0x314
	// Line 332, Address: 0x2d3688, Func Offset: 0x318
	// Line 334, Address: 0x2d36c0, Func Offset: 0x350
	// Line 335, Address: 0x2d36c8, Func Offset: 0x358
	// Line 338, Address: 0x2d36d0, Func Offset: 0x360
	// Line 341, Address: 0x2d36dc, Func Offset: 0x36c
	// Line 346, Address: 0x2d36e0, Func Offset: 0x370
	// Line 344, Address: 0x2d36e4, Func Offset: 0x374
	// Line 343, Address: 0x2d36e8, Func Offset: 0x378
	// Line 344, Address: 0x2d36ec, Func Offset: 0x37c
	// Line 342, Address: 0x2d36f0, Func Offset: 0x380
	// Line 341, Address: 0x2d36f8, Func Offset: 0x388
	// Line 343, Address: 0x2d3700, Func Offset: 0x390
	// Line 342, Address: 0x2d3704, Func Offset: 0x394
	// Line 343, Address: 0x2d3708, Func Offset: 0x398
	// Line 346, Address: 0x2d370c, Func Offset: 0x39c
	// Line 347, Address: 0x2d372c, Func Offset: 0x3bc
	// Line 346, Address: 0x2d3734, Func Offset: 0x3c4
	// Line 347, Address: 0x2d3740, Func Offset: 0x3d0
	// Line 348, Address: 0x2d3748, Func Offset: 0x3d8
	// Line 347, Address: 0x2d374c, Func Offset: 0x3dc
	// Line 348, Address: 0x2d3750, Func Offset: 0x3e0
	// Line 349, Address: 0x2d3760, Func Offset: 0x3f0
	// Line 348, Address: 0x2d3764, Func Offset: 0x3f4
	// Line 349, Address: 0x2d3768, Func Offset: 0x3f8
	// Line 351, Address: 0x2d37a0, Func Offset: 0x430
	// Line 352, Address: 0x2d37a8, Func Offset: 0x438
	// Line 357, Address: 0x2d37b0, Func Offset: 0x440
	// Line 358, Address: 0x2d37b8, Func Offset: 0x448
	// Func End, Address: 0x2d37d0, Func Offset: 0x460
}

// 
// Start address: 0x2d37d0
int PlayerFootControlBattleSlip(int mode)
{
	sgBone* bone;
	float pos[4];
	float dif[4];
	float push_vec[4];
	float pos_pl[4];
	// Line 364, Address: 0x2d37d0, Func Offset: 0
	// Line 372, Address: 0x2d37d4, Func Offset: 0x4
	// Line 364, Address: 0x2d37d8, Func Offset: 0x8
	// Line 372, Address: 0x2d37dc, Func Offset: 0xc
	// Line 364, Address: 0x2d37e0, Func Offset: 0x10
	// Line 372, Address: 0x2d37e8, Func Offset: 0x18
	// Line 373, Address: 0x2d3824, Func Offset: 0x54
	// Line 374, Address: 0x2d382c, Func Offset: 0x5c
	// Line 376, Address: 0x2d3830, Func Offset: 0x60
	// Line 377, Address: 0x2d3838, Func Offset: 0x68
	// Line 379, Address: 0x2d3840, Func Offset: 0x70
	// Line 381, Address: 0x2d3850, Func Offset: 0x80
	// Line 382, Address: 0x2d385c, Func Offset: 0x8c
	// Line 383, Address: 0x2d3868, Func Offset: 0x98
	// Line 384, Address: 0x2d3874, Func Offset: 0xa4
	// Line 385, Address: 0x2d3894, Func Offset: 0xc4
	// Line 386, Address: 0x2d38b4, Func Offset: 0xe4
	// Line 388, Address: 0x2d38c0, Func Offset: 0xf0
	// Line 389, Address: 0x2d38d0, Func Offset: 0x100
	// Line 390, Address: 0x2d38dc, Func Offset: 0x10c
	// Line 391, Address: 0x2d38fc, Func Offset: 0x12c
	// Line 399, Address: 0x2d3920, Func Offset: 0x150
	// Line 395, Address: 0x2d3924, Func Offset: 0x154
	// Line 397, Address: 0x2d3928, Func Offset: 0x158
	// Line 398, Address: 0x2d392c, Func Offset: 0x15c
	// Line 396, Address: 0x2d3930, Func Offset: 0x160
	// Line 398, Address: 0x2d3934, Func Offset: 0x164
	// Line 396, Address: 0x2d3938, Func Offset: 0x168
	// Line 395, Address: 0x2d393c, Func Offset: 0x16c
	// Line 397, Address: 0x2d3944, Func Offset: 0x174
	// Line 399, Address: 0x2d394c, Func Offset: 0x17c
	// Line 401, Address: 0x2d3984, Func Offset: 0x1b4
	// Line 402, Address: 0x2d398c, Func Offset: 0x1bc
	// Line 403, Address: 0x2d3994, Func Offset: 0x1c4
	// Line 405, Address: 0x2d3998, Func Offset: 0x1c8
	// Line 406, Address: 0x2d39a0, Func Offset: 0x1d0
	// Func End, Address: 0x2d39b0, Func Offset: 0x1e0
}

// 
// Start address: 0x2d39b0
void PlayerFootSetTarget(float* right, float* left)
{
	// Line 411, Address: 0x2d39b0, Func Offset: 0
	// Line 412, Address: 0x2d39cc, Func Offset: 0x1c
	// Line 415, Address: 0x2d39ec, Func Offset: 0x3c
	// Func End, Address: 0x2d39f4, Func Offset: 0x44
}

// 
// Start address: 0x2d3a00
void PlayerFootSetPos()
{
	float nom[4];
	float len;
	sgIKHandle* h_r;
	sgIKHandle* h_l;
	sgBone* b_r;
	sgBone* b_l;
	float pos_r[4];
	float pos_l[4];
	sgBone* bone;
	float pos[4];
	sgBone* bone;
	float pos[4];
	// Line 419, Address: 0x2d3a00, Func Offset: 0
	// Line 424, Address: 0x2d3a04, Func Offset: 0x4
	// Line 419, Address: 0x2d3a08, Func Offset: 0x8
	// Line 424, Address: 0x2d3a0c, Func Offset: 0xc
	// Line 419, Address: 0x2d3a10, Func Offset: 0x10
	// Line 424, Address: 0x2d3a14, Func Offset: 0x14
	// Line 419, Address: 0x2d3a18, Func Offset: 0x18
	// Line 424, Address: 0x2d3a24, Func Offset: 0x24
	// Line 425, Address: 0x2d3a5c, Func Offset: 0x5c
	// Line 426, Address: 0x2d3a74, Func Offset: 0x74
	// Line 427, Address: 0x2d3aa4, Func Offset: 0xa4
	// Line 428, Address: 0x2d3aa8, Func Offset: 0xa8
	// Line 429, Address: 0x2d3aec, Func Offset: 0xec
	// Line 430, Address: 0x2d3b04, Func Offset: 0x104
	// Line 435, Address: 0x2d3b30, Func Offset: 0x130
	// Line 437, Address: 0x2d3b54, Func Offset: 0x154
	// Line 438, Address: 0x2d3b94, Func Offset: 0x194
	// Line 440, Address: 0x2d3ba0, Func Offset: 0x1a0
	// Line 443, Address: 0x2d3be8, Func Offset: 0x1e8
	// Line 444, Address: 0x2d3c0c, Func Offset: 0x20c
	// Line 445, Address: 0x2d3c4c, Func Offset: 0x24c
	// Line 447, Address: 0x2d3c58, Func Offset: 0x258
	// Line 451, Address: 0x2d3ca0, Func Offset: 0x2a0
	// Line 459, Address: 0x2d3d28, Func Offset: 0x328
	// Line 461, Address: 0x2d3d40, Func Offset: 0x340
	// Line 463, Address: 0x2d3d5c, Func Offset: 0x35c
	// Line 461, Address: 0x2d3d60, Func Offset: 0x360
	// Line 463, Address: 0x2d3d64, Func Offset: 0x364
	// Line 464, Address: 0x2d3d70, Func Offset: 0x370
	// Line 463, Address: 0x2d3d74, Func Offset: 0x374
	// Line 464, Address: 0x2d3d78, Func Offset: 0x378
	// Line 465, Address: 0x2d3d88, Func Offset: 0x388
	// Line 466, Address: 0x2d3d94, Func Offset: 0x394
	// Line 467, Address: 0x2d3da0, Func Offset: 0x3a0
	// Line 468, Address: 0x2d3dc4, Func Offset: 0x3c4
	// Line 469, Address: 0x2d3de8, Func Offset: 0x3e8
	// Line 470, Address: 0x2d3df4, Func Offset: 0x3f4
	// Line 471, Address: 0x2d3e00, Func Offset: 0x400
	// Line 472, Address: 0x2d3e08, Func Offset: 0x408
	// Line 473, Address: 0x2d3e10, Func Offset: 0x410
	// Line 493, Address: 0x2d3e18, Func Offset: 0x418
	// Line 494, Address: 0x2d3e30, Func Offset: 0x430
	// Line 497, Address: 0x2d3e44, Func Offset: 0x444
	// Line 498, Address: 0x2d3e4c, Func Offset: 0x44c
	// Line 501, Address: 0x2d3e50, Func Offset: 0x450
	// Line 502, Address: 0x2d3e68, Func Offset: 0x468
	// Line 506, Address: 0x2d3e80, Func Offset: 0x480
	// Line 509, Address: 0x2d3e90, Func Offset: 0x490
	// Line 510, Address: 0x2d3ea0, Func Offset: 0x4a0
	// Line 511, Address: 0x2d3eac, Func Offset: 0x4ac
	// Line 512, Address: 0x2d3eb8, Func Offset: 0x4b8
	// Line 511, Address: 0x2d3ebc, Func Offset: 0x4bc
	// Line 512, Address: 0x2d3ec0, Func Offset: 0x4c0
	// Line 511, Address: 0x2d3ec4, Func Offset: 0x4c4
	// Line 512, Address: 0x2d3ed0, Func Offset: 0x4d0
	// Line 514, Address: 0x2d3ed8, Func Offset: 0x4d8
	// Line 517, Address: 0x2d3ee8, Func Offset: 0x4e8
	// Line 518, Address: 0x2d3ef8, Func Offset: 0x4f8
	// Line 519, Address: 0x2d3f04, Func Offset: 0x504
	// Line 520, Address: 0x2d3f10, Func Offset: 0x510
	// Line 519, Address: 0x2d3f14, Func Offset: 0x514
	// Line 520, Address: 0x2d3f18, Func Offset: 0x518
	// Line 519, Address: 0x2d3f1c, Func Offset: 0x51c
	// Line 520, Address: 0x2d3f28, Func Offset: 0x528
	// Line 532, Address: 0x2d3f30, Func Offset: 0x530
	// Func End, Address: 0x2d3f4c, Func Offset: 0x54c
}

// 
// Start address: 0x2d3f50
float height_check(float* pos)
{
	int hit;
	_anon3 plane;
	_anon4 line;
	float tmp[4];
	float ret;
	int res;
	// Line 536, Address: 0x2d3f50, Func Offset: 0
	// Line 543, Address: 0x2d3f58, Func Offset: 0x8
	// Line 536, Address: 0x2d3f5c, Func Offset: 0xc
	// Line 543, Address: 0x2d3f64, Func Offset: 0x14
	// Line 544, Address: 0x2d3f6c, Func Offset: 0x1c
	// Line 548, Address: 0x2d3f78, Func Offset: 0x28
	// Line 546, Address: 0x2d3f7c, Func Offset: 0x2c
	// Line 548, Address: 0x2d3f80, Func Offset: 0x30
	// Line 546, Address: 0x2d3f84, Func Offset: 0x34
	// Line 547, Address: 0x2d3f8c, Func Offset: 0x3c
	// Line 546, Address: 0x2d3f98, Func Offset: 0x48
	// Line 547, Address: 0x2d3f9c, Func Offset: 0x4c
	// Line 546, Address: 0x2d3fa0, Func Offset: 0x50
	// Line 548, Address: 0x2d3fa4, Func Offset: 0x54
	// Line 549, Address: 0x2d3fac, Func Offset: 0x5c
	// Line 551, Address: 0x2d3fb4, Func Offset: 0x64
	// Line 552, Address: 0x2d3fc0, Func Offset: 0x70
	// Line 553, Address: 0x2d3fc8, Func Offset: 0x78
	// Line 554, Address: 0x2d3fd0, Func Offset: 0x80
	// Line 556, Address: 0x2d3fd8, Func Offset: 0x88
	// Line 558, Address: 0x2d3fdc, Func Offset: 0x8c
	// Line 561, Address: 0x2d3fe8, Func Offset: 0x98
	// Line 562, Address: 0x2d3fec, Func Offset: 0x9c
	// Line 565, Address: 0x2d3ff0, Func Offset: 0xa0
	// Func End, Address: 0x2d4000, Func Offset: 0xb0
}

// 
// Start address: 0x2d4000
int plane_check(float* pos)
{
	int hit;
	_anon3 plane;
	_anon4 line;
	float ret;
	float tmp[4];
	// Line 605, Address: 0x2d4000, Func Offset: 0
	// Line 611, Address: 0x2d4008, Func Offset: 0x8
	// Line 605, Address: 0x2d400c, Func Offset: 0xc
	// Line 609, Address: 0x2d4010, Func Offset: 0x10
	// Line 611, Address: 0x2d4014, Func Offset: 0x14
	// Line 612, Address: 0x2d401c, Func Offset: 0x1c
	// Line 616, Address: 0x2d4028, Func Offset: 0x28
	// Line 614, Address: 0x2d402c, Func Offset: 0x2c
	// Line 616, Address: 0x2d4030, Func Offset: 0x30
	// Line 614, Address: 0x2d4034, Func Offset: 0x34
	// Line 615, Address: 0x2d403c, Func Offset: 0x3c
	// Line 614, Address: 0x2d4048, Func Offset: 0x48
	// Line 615, Address: 0x2d404c, Func Offset: 0x4c
	// Line 614, Address: 0x2d4050, Func Offset: 0x50
	// Line 616, Address: 0x2d4054, Func Offset: 0x54
	// Line 617, Address: 0x2d405c, Func Offset: 0x5c
	// Line 619, Address: 0x2d4064, Func Offset: 0x64
	// Line 620, Address: 0x2d408c, Func Offset: 0x8c
	// Line 621, Address: 0x2d40a8, Func Offset: 0xa8
	// Line 626, Address: 0x2d40b0, Func Offset: 0xb0
	// Line 625, Address: 0x2d40b4, Func Offset: 0xb4
	// Line 626, Address: 0x2d40b8, Func Offset: 0xb8
	// Line 625, Address: 0x2d40bc, Func Offset: 0xbc
	// Line 626, Address: 0x2d40c0, Func Offset: 0xc0
	// Func End, Address: 0x2d40c8, Func Offset: 0xc8
}

// 
// Start address: 0x2d40d0
void PlayerFootAboveFloor()
{
	float pos_r[4];
	float pos_l[4];
	float foot_r[4];
	float foot_l[4];
	float toe_height;
	float foot_height;
	float height_r;
	float height_l;
	float sub_chk;
	float sub_pos[4];
	sgBone* b_r;
	sgBone* b_l;
	float drc[4];
	float h_p;
	float h_s;
	float trs[4];
	float toe_tp;
	float foot_tp;
	float target_r[4];
	float target_l[4];
	// Line 631, Address: 0x2d40d0, Func Offset: 0
	// Line 654, Address: 0x2d40d4, Func Offset: 0x4
	// Line 631, Address: 0x2d40d8, Func Offset: 0x8
	// Line 654, Address: 0x2d40f0, Func Offset: 0x20
	// Line 655, Address: 0x2d40fc, Func Offset: 0x2c
	// Line 654, Address: 0x2d4100, Func Offset: 0x30
	// Line 655, Address: 0x2d4104, Func Offset: 0x34
	// Line 656, Address: 0x2d4114, Func Offset: 0x44
	// Line 657, Address: 0x2d4120, Func Offset: 0x50
	// Line 658, Address: 0x2d412c, Func Offset: 0x5c
	// Line 659, Address: 0x2d413c, Func Offset: 0x6c
	// Line 658, Address: 0x2d4140, Func Offset: 0x70
	// Line 659, Address: 0x2d4144, Func Offset: 0x74
	// Line 660, Address: 0x2d4154, Func Offset: 0x84
	// Line 661, Address: 0x2d4160, Func Offset: 0x90
	// Line 663, Address: 0x2d416c, Func Offset: 0x9c
	// Line 664, Address: 0x2d4170, Func Offset: 0xa0
	// Line 663, Address: 0x2d4174, Func Offset: 0xa4
	// Line 668, Address: 0x2d4178, Func Offset: 0xa8
	// Line 672, Address: 0x2d41a0, Func Offset: 0xd0
	// Line 674, Address: 0x2d41ac, Func Offset: 0xdc
	// Line 672, Address: 0x2d41b0, Func Offset: 0xe0
	// Line 673, Address: 0x2d41b4, Func Offset: 0xe4
	// Line 674, Address: 0x2d41b8, Func Offset: 0xe8
	// Line 672, Address: 0x2d41bc, Func Offset: 0xec
	// Line 674, Address: 0x2d41c0, Func Offset: 0xf0
	// Line 676, Address: 0x2d41cc, Func Offset: 0xfc
	// Line 674, Address: 0x2d41d0, Func Offset: 0x100
	// Line 675, Address: 0x2d41d4, Func Offset: 0x104
	// Line 676, Address: 0x2d41d8, Func Offset: 0x108
	// Line 674, Address: 0x2d41e0, Func Offset: 0x110
	// Line 676, Address: 0x2d41e4, Func Offset: 0x114
	// Line 674, Address: 0x2d41e8, Func Offset: 0x118
	// Line 676, Address: 0x2d41ec, Func Offset: 0x11c
	// Line 677, Address: 0x2d4200, Func Offset: 0x130
	// Line 678, Address: 0x2d4210, Func Offset: 0x140
	// Line 679, Address: 0x2d4218, Func Offset: 0x148
	// Line 680, Address: 0x2d421c, Func Offset: 0x14c
	// Line 687, Address: 0x2d4230, Func Offset: 0x160
	// Line 688, Address: 0x2d4240, Func Offset: 0x170
	// Line 690, Address: 0x2d4254, Func Offset: 0x184
	// Line 692, Address: 0x2d425c, Func Offset: 0x18c
	// Line 695, Address: 0x2d4268, Func Offset: 0x198
	// Line 697, Address: 0x2d4274, Func Offset: 0x1a4
	// Line 701, Address: 0x2d4278, Func Offset: 0x1a8
	// Line 702, Address: 0x2d4290, Func Offset: 0x1c0
	// Line 713, Address: 0x2d4298, Func Offset: 0x1c8
	// Line 714, Address: 0x2d42a4, Func Offset: 0x1d4
	// Line 715, Address: 0x2d42ac, Func Offset: 0x1dc
	// Line 717, Address: 0x2d42b8, Func Offset: 0x1e8
	// Line 719, Address: 0x2d42c8, Func Offset: 0x1f8
	// Line 721, Address: 0x2d42d0, Func Offset: 0x200
	// Line 724, Address: 0x2d42d8, Func Offset: 0x208
	// Line 725, Address: 0x2d42ec, Func Offset: 0x21c
	// Line 728, Address: 0x2d42f8, Func Offset: 0x228
	// Line 729, Address: 0x2d4304, Func Offset: 0x234
	// Line 730, Address: 0x2d430c, Func Offset: 0x23c
	// Line 732, Address: 0x2d4318, Func Offset: 0x248
	// Line 733, Address: 0x2d4328, Func Offset: 0x258
	// Line 735, Address: 0x2d4330, Func Offset: 0x260
	// Line 738, Address: 0x2d4338, Func Offset: 0x268
	// Line 739, Address: 0x2d434c, Func Offset: 0x27c
	// Line 772, Address: 0x2d4358, Func Offset: 0x288
	// Line 773, Address: 0x2d436c, Func Offset: 0x29c
	// Line 775, Address: 0x2d4380, Func Offset: 0x2b0
	// Line 778, Address: 0x2d438c, Func Offset: 0x2bc
	// Line 777, Address: 0x2d4390, Func Offset: 0x2c0
	// Line 778, Address: 0x2d4394, Func Offset: 0x2c4
	// Line 782, Address: 0x2d43b0, Func Offset: 0x2e0
	// Line 784, Address: 0x2d43b8, Func Offset: 0x2e8
	// Line 786, Address: 0x2d43c0, Func Offset: 0x2f0
	// Line 789, Address: 0x2d43cc, Func Offset: 0x2fc
	// Line 788, Address: 0x2d43d0, Func Offset: 0x300
	// Line 789, Address: 0x2d43d4, Func Offset: 0x304
	// Line 790, Address: 0x2d43f0, Func Offset: 0x320
	// Line 794, Address: 0x2d43f8, Func Offset: 0x328
	// Line 795, Address: 0x2d4410, Func Offset: 0x340
	// Line 796, Address: 0x2d4420, Func Offset: 0x350
	// Line 798, Address: 0x2d4428, Func Offset: 0x358
	// Line 799, Address: 0x2d4430, Func Offset: 0x360
	// Line 798, Address: 0x2d4438, Func Offset: 0x368
	// Line 799, Address: 0x2d4440, Func Offset: 0x370
	// Line 800, Address: 0x2d4448, Func Offset: 0x378
	// Line 810, Address: 0x2d4454, Func Offset: 0x384
	// Line 812, Address: 0x2d4460, Func Offset: 0x390
	// Line 814, Address: 0x2d4468, Func Offset: 0x398
	// Line 815, Address: 0x2d4470, Func Offset: 0x3a0
	// Line 814, Address: 0x2d4478, Func Offset: 0x3a8
	// Line 815, Address: 0x2d4480, Func Offset: 0x3b0
	// Line 816, Address: 0x2d4488, Func Offset: 0x3b8
	// Line 828, Address: 0x2d4494, Func Offset: 0x3c4
	// Line 830, Address: 0x2d44a0, Func Offset: 0x3d0
	// Line 833, Address: 0x2d44a8, Func Offset: 0x3d8
	// Line 834, Address: 0x2d44c4, Func Offset: 0x3f4
	// Line 835, Address: 0x2d44c8, Func Offset: 0x3f8
	// Line 836, Address: 0x2d44e4, Func Offset: 0x414
	// Line 837, Address: 0x2d44e8, Func Offset: 0x418
	// Line 838, Address: 0x2d4504, Func Offset: 0x434
	// Line 840, Address: 0x2d4508, Func Offset: 0x438
	// Line 841, Address: 0x2d4524, Func Offset: 0x454
	// Line 843, Address: 0x2d4528, Func Offset: 0x458
	// Line 847, Address: 0x2d4534, Func Offset: 0x464
	// Func End, Address: 0x2d4554, Func Offset: 0x484
}

