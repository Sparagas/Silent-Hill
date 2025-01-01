typedef union _anon0;
typedef struct sgBone;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct sfObj;
typedef struct _anon4;
typedef struct sfCharacter;
typedef struct sgAnime;
typedef struct _PLAYER_WORK;
typedef enum sgIKSolveResult : unsigned char;
typedef struct sgIKHandle;
typedef struct sfCldObject;
typedef struct sgQTNode;
typedef struct sfCldPart;
typedef struct _anon5;
typedef struct sgSVModel;
typedef struct _anon6;
typedef struct _anon7;
typedef struct sgQTObject;
typedef struct _anon8;
typedef struct sfOffsetAABB;
typedef union sfCldBody;
typedef enum GameItem : unsigned char;

typedef void(*type_1)(sfObj*);
typedef sgIKSolveResult(*type_6)();
typedef void(*type_10)(_anon5*, int, int, float*);
typedef void(*type_14)(sgAnime*, int);
typedef void(*type_21)(sfObj*);

typedef float type_0[4];
typedef int type_2[4];
typedef float type_3[4];
typedef float type_4[4][2];
typedef sfCldPart* type_5[6];
typedef unsigned char type_7[3];
typedef float type_8[4][4];
typedef int type_9[4];
typedef _PLAYER_WORK type_11[2];
typedef float type_12[4];
typedef void* type_13[4];
typedef short type_15[2];
typedef unsigned short type_16[2];
typedef char type_17[4];
typedef _anon0 type_18[256];
typedef unsigned char type_19[4];
typedef unsigned char type_20[3];
typedef float type_22[1];
typedef int type_23[1];
typedef unsigned char type_24[4];
typedef int type_25[4];

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
	float bmin[4];
	float bmax[4];
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

struct _anon4
{
	float mat[4][4];
	float half_w[4];
};

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon6 model_work;
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
	_anon7* anim_ctrl;
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

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
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

struct _anon5
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

struct _anon6
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

struct _anon7
{
	int dummy;
};

struct sgQTObject
{
	_anon2 bounding_ball;
	sgQTObject* next;
	sgQTObject* prev;
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

struct sfOffsetAABB
{
	_anon3 aabb;
	float offset[4];
};

union sfCldBody
{
	_anon4 obb;
	_anon3 aabb;
	sfOffsetAABB offset_aabb;
	_anon1 line;
	_anon2 sphere;
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

int anim_nom[4];
int anim_lower[4];
int anim_upper[4];
_anon8 player_battle_work;
_PLAYER_WORK playerw[2];

void gun_setmotion(_PLAYER_WORK* p, int mode);
int PlayerBattleGunReload(GameItem gun_kind);
void gun_empty(_PLAYER_WORK* p);
void PlayerBattleGunSetAttack(_PLAYER_WORK* p);
void PlayerBattleGunSetMotion();
int PlayerBattleGunNeutral();
int PlayerBattleGunNormalAttack();

// 
// Start address: 0x2d2290
void gun_setmotion(_PLAYER_WORK* p, int mode)
{
	sgBone* sr_bone;
	sgBone* sl_bone;
	float tmp1[4];
	float tmp2[4];
	float s_point[4];
	float dirc;
	float dist_xz;
	float height_sub;
	float a;
	float a;
	float ratio;
	// Line 82, Address: 0x2d2290, Func Offset: 0
	// Line 91, Address: 0x2d2294, Func Offset: 0x4
	// Line 82, Address: 0x2d2298, Func Offset: 0x8
	// Line 91, Address: 0x2d22ac, Func Offset: 0x1c
	// Line 95, Address: 0x2d22c8, Func Offset: 0x38
	// Line 96, Address: 0x2d22d4, Func Offset: 0x44
	// Line 95, Address: 0x2d22d8, Func Offset: 0x48
	// Line 96, Address: 0x2d22dc, Func Offset: 0x4c
	// Line 98, Address: 0x2d22e8, Func Offset: 0x58
	// Line 99, Address: 0x2d22f4, Func Offset: 0x64
	// Line 100, Address: 0x2d2300, Func Offset: 0x70
	// Line 101, Address: 0x2d2320, Func Offset: 0x90
	// Line 103, Address: 0x2d234c, Func Offset: 0xbc
	// Line 106, Address: 0x2d2358, Func Offset: 0xc8
	// Line 107, Address: 0x2d2360, Func Offset: 0xd0
	// Line 108, Address: 0x2d2380, Func Offset: 0xf0
	// Line 109, Address: 0x2d2390, Func Offset: 0x100
	// Line 108, Address: 0x2d2394, Func Offset: 0x104
	// Line 110, Address: 0x2d23a4, Func Offset: 0x114
	// Line 111, Address: 0x2d23ac, Func Offset: 0x11c
	// Line 113, Address: 0x2d23b8, Func Offset: 0x128
	// Line 114, Address: 0x2d23bc, Func Offset: 0x12c
	// Line 117, Address: 0x2d23c0, Func Offset: 0x130
	// Line 121, Address: 0x2d23cc, Func Offset: 0x13c
	// Line 120, Address: 0x2d23d8, Func Offset: 0x148
	// Line 121, Address: 0x2d23dc, Func Offset: 0x14c
	// Line 122, Address: 0x2d23e8, Func Offset: 0x158
	// Line 123, Address: 0x2d2404, Func Offset: 0x174
	// Line 124, Address: 0x2d2410, Func Offset: 0x180
	// Line 125, Address: 0x2d2424, Func Offset: 0x194
	// Line 126, Address: 0x2d243c, Func Offset: 0x1ac
	// Line 128, Address: 0x2d2448, Func Offset: 0x1b8
	// Line 130, Address: 0x2d2464, Func Offset: 0x1d4
	// Line 136, Address: 0x2d2470, Func Offset: 0x1e0
	// Line 135, Address: 0x2d2478, Func Offset: 0x1e8
	// Line 136, Address: 0x2d247c, Func Offset: 0x1ec
	// Line 137, Address: 0x2d2488, Func Offset: 0x1f8
	// Line 136, Address: 0x2d248c, Func Offset: 0x1fc
	// Line 137, Address: 0x2d2490, Func Offset: 0x200
	// Line 136, Address: 0x2d2494, Func Offset: 0x204
	// Line 137, Address: 0x2d2498, Func Offset: 0x208
	// Line 138, Address: 0x2d24a4, Func Offset: 0x214
	// Line 140, Address: 0x2d24a8, Func Offset: 0x218
	// Line 141, Address: 0x2d24bc, Func Offset: 0x22c
	// Line 143, Address: 0x2d24e4, Func Offset: 0x254
	// Line 145, Address: 0x2d24f0, Func Offset: 0x260
	// Line 148, Address: 0x2d251c, Func Offset: 0x28c
	// Line 152, Address: 0x2d2520, Func Offset: 0x290
	// Line 155, Address: 0x2d2528, Func Offset: 0x298
	// Func End, Address: 0x2d2544, Func Offset: 0x2b4
}

// 
// Start address: 0x2d2550
int PlayerBattleGunReload(GameItem gun_kind)
{
	int rtv;
	int n;
	int n;
	// Line 162, Address: 0x2d2550, Func Offset: 0
	// Line 165, Address: 0x2d255c, Func Offset: 0xc
	// Line 162, Address: 0x2d2560, Func Offset: 0x10
	// Line 165, Address: 0x2d256c, Func Offset: 0x1c
	// Line 184, Address: 0x2d2574, Func Offset: 0x24
	// Line 186, Address: 0x2d258c, Func Offset: 0x3c
	// Line 188, Address: 0x2d2594, Func Offset: 0x44
	// Line 189, Address: 0x2d259c, Func Offset: 0x4c
	// Line 194, Address: 0x2d25a4, Func Offset: 0x54
	// Line 195, Address: 0x2d25b0, Func Offset: 0x60
	// Line 196, Address: 0x2d25bc, Func Offset: 0x6c
	// Line 198, Address: 0x2d25d0, Func Offset: 0x80
	// Line 200, Address: 0x2d25d8, Func Offset: 0x88
	// Line 201, Address: 0x2d25e0, Func Offset: 0x90
	// Line 202, Address: 0x2d25e8, Func Offset: 0x98
	// Line 205, Address: 0x2d25ec, Func Offset: 0x9c
	// Line 207, Address: 0x2d25f0, Func Offset: 0xa0
	// Line 208, Address: 0x2d25f4, Func Offset: 0xa4
	// Func End, Address: 0x2d2608, Func Offset: 0xb8
}

// 
// Start address: 0x2d2610
void gun_empty(_PLAYER_WORK* p)
{
	int f;
	// Line 212, Address: 0x2d2610, Func Offset: 0
	// Line 246, Address: 0x2d2624, Func Offset: 0x14
	// Line 247, Address: 0x2d2638, Func Offset: 0x28
	// Line 248, Address: 0x2d263c, Func Offset: 0x2c
	// Line 251, Address: 0x2d2640, Func Offset: 0x30
	// Line 254, Address: 0x2d264c, Func Offset: 0x3c
	// Line 257, Address: 0x2d2658, Func Offset: 0x48
	// Line 261, Address: 0x2d2660, Func Offset: 0x50
	// Func End, Address: 0x2d2674, Func Offset: 0x64
}

// 
// Start address: 0x2d2680
void PlayerBattleGunSetAttack(_PLAYER_WORK* p)
{
	// Line 265, Address: 0x2d2680, Func Offset: 0
	// Line 266, Address: 0x2d2690, Func Offset: 0x10
	// Line 267, Address: 0x2d26a0, Func Offset: 0x20
	// Line 268, Address: 0x2d26a8, Func Offset: 0x28
	// Line 271, Address: 0x2d26b0, Func Offset: 0x30
	// Line 272, Address: 0x2d26c0, Func Offset: 0x40
	// Line 273, Address: 0x2d26cc, Func Offset: 0x4c
	// Line 275, Address: 0x2d26d8, Func Offset: 0x58
	// Line 276, Address: 0x2d26e4, Func Offset: 0x64
	// Line 278, Address: 0x2d26e8, Func Offset: 0x68
	// Line 282, Address: 0x2d26f0, Func Offset: 0x70
	// Func End, Address: 0x2d2700, Func Offset: 0x80
}

// 
// Start address: 0x2d2700
void PlayerBattleGunSetMotion()
{
	// Line 293, Address: 0x2d2700, Func Offset: 0
	// Func End, Address: 0x2d2724, Func Offset: 0x24
}

// 
// Start address: 0x2d2730
int PlayerBattleGunNeutral()
{
	// Line 299, Address: 0x2d2730, Func Offset: 0
	// Line 301, Address: 0x2d2734, Func Offset: 0x4
	// Line 299, Address: 0x2d2738, Func Offset: 0x8
	// Line 301, Address: 0x2d273c, Func Offset: 0xc
	// Line 302, Address: 0x2d2744, Func Offset: 0x14
	// Line 303, Address: 0x2d2748, Func Offset: 0x18
	// Line 304, Address: 0x2d2768, Func Offset: 0x38
	// Line 305, Address: 0x2d2774, Func Offset: 0x44
	// Line 307, Address: 0x2d2780, Func Offset: 0x50
	// Line 308, Address: 0x2d27ac, Func Offset: 0x7c
	// Line 310, Address: 0x2d27b0, Func Offset: 0x80
	// Line 311, Address: 0x2d27c0, Func Offset: 0x90
	// Line 315, Address: 0x2d27c8, Func Offset: 0x98
	// Line 314, Address: 0x2d27cc, Func Offset: 0x9c
	// Line 315, Address: 0x2d27d0, Func Offset: 0xa0
	// Func End, Address: 0x2d27d8, Func Offset: 0xa8
}

// 
// Start address: 0x2d27e0
int PlayerBattleGunNormalAttack()
{
	// Line 318, Address: 0x2d27e0, Func Offset: 0
	// Line 319, Address: 0x2d27e4, Func Offset: 0x4
	// Line 318, Address: 0x2d27e8, Func Offset: 0x8
	// Line 319, Address: 0x2d27ec, Func Offset: 0xc
	// Line 320, Address: 0x2d27f8, Func Offset: 0x18
	// Line 321, Address: 0x2d280c, Func Offset: 0x2c
	// Line 322, Address: 0x2d2818, Func Offset: 0x38
	// Line 323, Address: 0x2d2820, Func Offset: 0x40
	// Line 324, Address: 0x2d282c, Func Offset: 0x4c
	// Line 327, Address: 0x2d2830, Func Offset: 0x50
	// Line 330, Address: 0x2d2868, Func Offset: 0x88
	// Line 331, Address: 0x2d2874, Func Offset: 0x94
	// Line 333, Address: 0x2d287c, Func Offset: 0x9c
	// Line 331, Address: 0x2d2880, Func Offset: 0xa0
	// Line 333, Address: 0x2d2884, Func Offset: 0xa4
	// Line 334, Address: 0x2d2894, Func Offset: 0xb4
	// Line 336, Address: 0x2d28a0, Func Offset: 0xc0
	// Line 337, Address: 0x2d28a8, Func Offset: 0xc8
	// Line 341, Address: 0x2d28d4, Func Offset: 0xf4
	// Line 342, Address: 0x2d28dc, Func Offset: 0xfc
	// Line 343, Address: 0x2d28e8, Func Offset: 0x108
	// Line 344, Address: 0x2d28ec, Func Offset: 0x10c
	// Line 346, Address: 0x2d28f8, Func Offset: 0x118
	// Line 350, Address: 0x2d293c, Func Offset: 0x15c
	// Line 352, Address: 0x2d2954, Func Offset: 0x174
	// Line 354, Address: 0x2d2958, Func Offset: 0x178
	// Line 357, Address: 0x2d2960, Func Offset: 0x180
	// Line 358, Address: 0x2d2974, Func Offset: 0x194
	// Line 361, Address: 0x2d2980, Func Offset: 0x1a0
	// Line 363, Address: 0x2d298c, Func Offset: 0x1ac
	// Line 364, Address: 0x2d2990, Func Offset: 0x1b0
	// Func End, Address: 0x2d299c, Func Offset: 0x1bc
}

