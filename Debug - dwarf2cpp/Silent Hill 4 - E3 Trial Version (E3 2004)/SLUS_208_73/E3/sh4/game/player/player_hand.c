typedef struct sgQTNode;
typedef struct sgAnime;
typedef struct sgBone;
typedef struct sgSVModel;
typedef struct sfCldPart;
typedef struct sgIKHandle;
typedef struct sfObj;
typedef struct _anon0;
typedef struct _anon1;
typedef struct sfCharacter;
typedef struct sgQTObject;
typedef struct sfCldObject;
typedef enum sgIKSolveResult : unsigned char;
typedef struct sfOffsetAABB;
typedef union sfCldBody;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef enum GameItem : unsigned char;
typedef struct _anon5;
typedef struct _PLAYER_WORK;
typedef struct _anon6;
typedef union _anon7;
typedef struct _anon8;

typedef void(*type_4)(_anon0*, int, int, float*);
typedef sgIKSolveResult(*type_7)();
typedef void(*type_13)(sfObj*);
typedef void(*type_14)(sgAnime*, int);
typedef void(*type_18)(sfObj*);

typedef sfCldPart* type_0[6];
typedef unsigned char type_1[3];
typedef float type_2[4][4];
typedef float type_3[4];
typedef float type_5[4];
typedef float type_6[4][2];
typedef unsigned char type_8[3];
typedef _PLAYER_WORK type_9[2];
typedef float type_10[4];
typedef void* type_11[4];
typedef _anon7 type_12[256];
typedef short type_15[2];
typedef unsigned char type_16[4];
typedef unsigned short type_17[2];
typedef char type_19[4];
typedef unsigned char type_20[4];
typedef float type_21[1];
typedef int type_22[1];

struct sgQTNode
{
	int dummy;
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

struct _anon0
{
	unsigned long tex0;
	unsigned long clamp;
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

struct sgQTObject
{
	_anon4 bounding_ball;
	sgQTObject* next;
	sgQTObject* prev;
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

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
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

struct _anon2
{
	int dummy;
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

struct _anon5
{
	float bmin[4];
	float bmax[4];
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
	_anon2* anim_ctrl;
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

struct _anon6
{
	float mat[4][4];
	float half_w[4];
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

struct _anon8
{
	float target_r[4];
	float target_l[4];
	float current_r[4];
	float current_l[4];
};

float sg_vector_zero[4];
_anon8 lwork;
_PLAYER_WORK playerw[2];

void PlayerHandInitLWork();
void PlayerHandSetTarget(float* right, float* left);
void PlayerHandSetCurrent(float* right, float* left);
void PlayerHandSetPos();

// 
// Start address: 0x2d8700
void PlayerHandInitLWork()
{
	// Line 58, Address: 0x2d8700, Func Offset: 0
	// Line 59, Address: 0x2d8718, Func Offset: 0x18
	// Line 60, Address: 0x2d8728, Func Offset: 0x28
	// Line 61, Address: 0x2d8738, Func Offset: 0x38
	// Line 64, Address: 0x2d8744, Func Offset: 0x44
	// Func End, Address: 0x2d874c, Func Offset: 0x4c
}

// 
// Start address: 0x2d8750
void PlayerHandSetTarget(float* right, float* left)
{
	// Line 69, Address: 0x2d8750, Func Offset: 0
	// Line 70, Address: 0x2d876c, Func Offset: 0x1c
	// Line 73, Address: 0x2d878c, Func Offset: 0x3c
	// Func End, Address: 0x2d8794, Func Offset: 0x44
}

// 
// Start address: 0x2d87a0
void PlayerHandSetCurrent(float* right, float* left)
{
	// Line 78, Address: 0x2d87a0, Func Offset: 0
	// Line 79, Address: 0x2d87ac, Func Offset: 0xc
	// Line 78, Address: 0x2d87b0, Func Offset: 0x10
	// Line 79, Address: 0x2d87b8, Func Offset: 0x18
	// Line 78, Address: 0x2d87bc, Func Offset: 0x1c
	// Line 79, Address: 0x2d87c8, Func Offset: 0x28
	// Line 82, Address: 0x2d87dc, Func Offset: 0x3c
	// Func End, Address: 0x2d87e4, Func Offset: 0x44
}

// 
// Start address: 0x2d87f0
void PlayerHandSetPos()
{
	float len_r;
	float len_l;
	float len_c;
	float nom_r[4];
	float nom_l[4];
	float sb;
	float a;
	float rslt;
	float nom_c[4];
	float sb;
	float a;
	float rslt;
	float nom_c[4];
	sgIKHandle* h_r;
	sgIKHandle* h_l;
	sgBone* b_r;
	sgBone* b_l;
	float pos_r[4];
	float pos_l[4];
	// Line 100, Address: 0x2d87f0, Func Offset: 0
	// Line 107, Address: 0x2d87f4, Func Offset: 0x4
	// Line 100, Address: 0x2d87f8, Func Offset: 0x8
	// Line 107, Address: 0x2d87fc, Func Offset: 0xc
	// Line 100, Address: 0x2d8800, Func Offset: 0x10
	// Line 107, Address: 0x2d8824, Func Offset: 0x34
	// Line 108, Address: 0x2d8844, Func Offset: 0x54
	// Line 109, Address: 0x2d886c, Func Offset: 0x7c
	// Line 110, Address: 0x2d889c, Func Offset: 0xac
	// Line 112, Address: 0x2d88cc, Func Offset: 0xdc
	// Line 113, Address: 0x2d88e4, Func Offset: 0xf4
	// Line 114, Address: 0x2d88e8, Func Offset: 0xf8
	// Line 115, Address: 0x2d8900, Func Offset: 0x110
	// Line 118, Address: 0x2d8908, Func Offset: 0x118
	// Line 123, Address: 0x2d8934, Func Offset: 0x144
	// Line 125, Address: 0x2d8938, Func Offset: 0x148
	// Line 127, Address: 0x2d895c, Func Offset: 0x16c
	// Line 129, Address: 0x2d8968, Func Offset: 0x178
	// Line 130, Address: 0x2d897c, Func Offset: 0x18c
	// Line 131, Address: 0x2d8994, Func Offset: 0x1a4
	// Line 133, Address: 0x2d89a0, Func Offset: 0x1b0
	// Line 135, Address: 0x2d89bc, Func Offset: 0x1cc
	// Line 138, Address: 0x2d89c0, Func Offset: 0x1d0
	// Line 139, Address: 0x2d89f0, Func Offset: 0x200
	// Line 142, Address: 0x2d8a00, Func Offset: 0x210
	// Line 139, Address: 0x2d8a04, Func Offset: 0x214
	// Line 140, Address: 0x2d8a08, Func Offset: 0x218
	// Line 141, Address: 0x2d8a1c, Func Offset: 0x22c
	// Line 139, Address: 0x2d8a28, Func Offset: 0x238
	// Line 141, Address: 0x2d8a30, Func Offset: 0x240
	// Line 139, Address: 0x2d8a34, Func Offset: 0x244
	// Line 141, Address: 0x2d8a38, Func Offset: 0x248
	// Line 139, Address: 0x2d8a3c, Func Offset: 0x24c
	// Line 142, Address: 0x2d8a40, Func Offset: 0x250
	// Line 140, Address: 0x2d8a44, Func Offset: 0x254
	// Line 141, Address: 0x2d8a54, Func Offset: 0x264
	// Line 139, Address: 0x2d8a64, Func Offset: 0x274
	// Line 140, Address: 0x2d8a68, Func Offset: 0x278
	// Line 141, Address: 0x2d8a6c, Func Offset: 0x27c
	// Line 142, Address: 0x2d8a70, Func Offset: 0x280
	// Line 144, Address: 0x2d8a94, Func Offset: 0x2a4
	// Line 151, Address: 0x2d8abc, Func Offset: 0x2cc
	// Line 156, Address: 0x2d8ae8, Func Offset: 0x2f8
	// Line 158, Address: 0x2d8aec, Func Offset: 0x2fc
	// Line 160, Address: 0x2d8b10, Func Offset: 0x320
	// Line 162, Address: 0x2d8b18, Func Offset: 0x328
	// Line 163, Address: 0x2d8b2c, Func Offset: 0x33c
	// Line 164, Address: 0x2d8b44, Func Offset: 0x354
	// Line 166, Address: 0x2d8b50, Func Offset: 0x360
	// Line 168, Address: 0x2d8b6c, Func Offset: 0x37c
	// Line 171, Address: 0x2d8b70, Func Offset: 0x380
	// Line 172, Address: 0x2d8ba0, Func Offset: 0x3b0
	// Line 175, Address: 0x2d8bb0, Func Offset: 0x3c0
	// Line 172, Address: 0x2d8bb4, Func Offset: 0x3c4
	// Line 173, Address: 0x2d8bb8, Func Offset: 0x3c8
	// Line 174, Address: 0x2d8bcc, Func Offset: 0x3dc
	// Line 172, Address: 0x2d8bd8, Func Offset: 0x3e8
	// Line 174, Address: 0x2d8be0, Func Offset: 0x3f0
	// Line 172, Address: 0x2d8be4, Func Offset: 0x3f4
	// Line 174, Address: 0x2d8be8, Func Offset: 0x3f8
	// Line 172, Address: 0x2d8bec, Func Offset: 0x3fc
	// Line 175, Address: 0x2d8bf0, Func Offset: 0x400
	// Line 173, Address: 0x2d8bf4, Func Offset: 0x404
	// Line 174, Address: 0x2d8c04, Func Offset: 0x414
	// Line 172, Address: 0x2d8c14, Func Offset: 0x424
	// Line 173, Address: 0x2d8c18, Func Offset: 0x428
	// Line 174, Address: 0x2d8c1c, Func Offset: 0x42c
	// Line 175, Address: 0x2d8c20, Func Offset: 0x430
	// Line 177, Address: 0x2d8c44, Func Offset: 0x454
	// Line 184, Address: 0x2d8c6c, Func Offset: 0x47c
	// Line 192, Address: 0x2d8cf0, Func Offset: 0x500
	// Line 194, Address: 0x2d8d08, Func Offset: 0x518
	// Line 196, Address: 0x2d8d24, Func Offset: 0x534
	// Line 194, Address: 0x2d8d28, Func Offset: 0x538
	// Line 196, Address: 0x2d8d2c, Func Offset: 0x53c
	// Line 197, Address: 0x2d8d38, Func Offset: 0x548
	// Line 196, Address: 0x2d8d3c, Func Offset: 0x54c
	// Line 197, Address: 0x2d8d40, Func Offset: 0x550
	// Line 198, Address: 0x2d8d50, Func Offset: 0x560
	// Line 199, Address: 0x2d8d5c, Func Offset: 0x56c
	// Line 200, Address: 0x2d8d68, Func Offset: 0x578
	// Line 201, Address: 0x2d8d8c, Func Offset: 0x59c
	// Line 202, Address: 0x2d8db0, Func Offset: 0x5c0
	// Line 203, Address: 0x2d8dbc, Func Offset: 0x5cc
	// Line 204, Address: 0x2d8dc8, Func Offset: 0x5d8
	// Line 205, Address: 0x2d8dd0, Func Offset: 0x5e0
	// Line 209, Address: 0x2d8dd8, Func Offset: 0x5e8
	// Line 210, Address: 0x2d8df0, Func Offset: 0x600
	// Line 213, Address: 0x2d8e08, Func Offset: 0x618
	// Func End, Address: 0x2d8e38, Func Offset: 0x648
}

