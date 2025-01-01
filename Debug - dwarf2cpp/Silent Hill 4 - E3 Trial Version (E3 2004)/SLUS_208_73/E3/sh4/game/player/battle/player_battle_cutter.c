typedef union _anon0;
typedef struct sgBone;
typedef struct sfCharacter;
typedef struct sgAnime;
typedef struct _anon1;
typedef struct sfObj;
typedef struct _anon2;
typedef struct sfCldObject;
typedef struct sgQTNode;
typedef struct sfCldPart;
typedef struct _anon3;
typedef enum sgIKSolveResult : unsigned char;
typedef struct sgSVModel;
typedef struct _anon4;
typedef struct _anon5;
typedef struct sgIKHandle;
typedef struct sgQTObject;
typedef struct _anon6;
typedef struct _anon7;
typedef struct sfOffsetAABB;
typedef struct _anon8;
typedef union sfCldBody;
typedef struct _anon9;
typedef enum GameItem : unsigned char;
typedef struct _anon10;
typedef struct _PLAYER_WORK;

typedef void(*type_1)(sfObj*);
typedef void(*type_8)(_anon3*, int, int, float*);
typedef sgIKSolveResult(*type_9)();
typedef void(*type_14)(sgAnime*, int);
typedef void(*type_20)(sfObj*);

typedef float type_0[4];
typedef float type_2[20];
typedef sfCldPart* type_3[6];
typedef unsigned char type_4[3];
typedef float type_5[4][4];
typedef float type_6[4];
typedef float type_7[4][2];
typedef _PLAYER_WORK type_10[2];
typedef float type_11[4];
typedef unsigned char type_12[3];
typedef void* type_13[4];
typedef short type_15[2];
typedef unsigned short type_16[2];
typedef char type_17[4];
typedef _anon0 type_18[256];
typedef unsigned char type_19[4];
typedef float type_21[1];
typedef int type_22[1];
typedef unsigned char type_23[4];

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
	float time;
	float angl_last;
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

struct _anon3
{
	unsigned long tex0;
	unsigned long clamp;
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
};

struct _anon4
{
	void* model;
	void* texture;
	void* texture_global;
	float matrices[4][4];
	float* weights;
	float tex_crops[4];
	void(*texture_load_func)(_anon3*, int, int, float*);
	int equip_flag;
};

struct _anon5
{
	int dummy;
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
	_anon8 bounding_ball;
	sgQTObject* next;
	sgQTObject* prev;
};

struct _anon6
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

struct _anon7
{
	float start[4];
	float end[4];
};

struct sfOffsetAABB
{
	_anon9 aabb;
	float offset[4];
};

struct _anon8
{
	float center[4];
	float radius;
};

union sfCldBody
{
	_anon10 obb;
	_anon9 aabb;
	sfOffsetAABB offset_aabb;
	_anon7 line;
	_anon8 sphere;
};

struct _anon9
{
	float bmin[4];
	float bmax[4];
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

struct _anon10
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
	_anon5* anim_ctrl;
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

float move_data[20];
_PLAYER_WORK playerw[2];
_anon1 lwork;
_anon6 player_battle_work;

float time_to_mov(float ftime);
void anim_mov();
void clear_lwork();
void add_time();
float PlayerBattleCutterGetTime();
float get_blend_ratio(int mode);
int PlayerBattleCutterNormalAttack();
int PlayerBattleCutterStrongAttack();
int PlayerBattleBrokenBottleAttack();

// 
// Start address: 0x2d4560
float time_to_mov(float ftime)
{
	float ret;
	int icount;
	float fcount;
	float f0;
	float f1;
	float ftt;
	// Line 77, Address: 0x2d4560, Func Offset: 0
	// Line 73, Address: 0x2d4564, Func Offset: 0x4
	// Line 77, Address: 0x2d4568, Func Offset: 0x8
	// Line 73, Address: 0x2d456c, Func Offset: 0xc
	// Line 77, Address: 0x2d4570, Func Offset: 0x10
	// Line 73, Address: 0x2d4574, Func Offset: 0x14
	// Line 77, Address: 0x2d4578, Func Offset: 0x18
	// Line 74, Address: 0x2d457c, Func Offset: 0x1c
	// Line 77, Address: 0x2d4580, Func Offset: 0x20
	// Line 78, Address: 0x2d458c, Func Offset: 0x2c
	// Line 79, Address: 0x2d4590, Func Offset: 0x30
	// Line 83, Address: 0x2d459c, Func Offset: 0x3c
	// Line 84, Address: 0x2d45a8, Func Offset: 0x48
	// Line 83, Address: 0x2d45ac, Func Offset: 0x4c
	// Line 84, Address: 0x2d45b0, Func Offset: 0x50
	// Line 85, Address: 0x2d45b4, Func Offset: 0x54
	// Line 84, Address: 0x2d45b8, Func Offset: 0x58
	// Line 83, Address: 0x2d45bc, Func Offset: 0x5c
	// Line 84, Address: 0x2d45c0, Func Offset: 0x60
	// Line 85, Address: 0x2d45c4, Func Offset: 0x64
	// Line 86, Address: 0x2d45d0, Func Offset: 0x70
	// Line 85, Address: 0x2d45dc, Func Offset: 0x7c
	// Line 86, Address: 0x2d45e0, Func Offset: 0x80
	// Line 87, Address: 0x2d45ec, Func Offset: 0x8c
	// Line 88, Address: 0x2d45f0, Func Offset: 0x90
	// Line 91, Address: 0x2d4608, Func Offset: 0xa8
	// Line 92, Address: 0x2d4614, Func Offset: 0xb4
	// Line 91, Address: 0x2d4618, Func Offset: 0xb8
	// Line 92, Address: 0x2d4630, Func Offset: 0xd0
	// Func End, Address: 0x2d463c, Func Offset: 0xdc
}

// 
// Start address: 0x2d4640
void anim_mov()
{
	float ftime;
	float mult;
	float pos_e[4];
	float push_vec[4];
	float x;
	float z;
	float dist;
	// Line 96, Address: 0x2d4640, Func Offset: 0
	// Line 98, Address: 0x2d464c, Func Offset: 0xc
	// Line 99, Address: 0x2d4658, Func Offset: 0x18
	// Line 100, Address: 0x2d4670, Func Offset: 0x30
	// Line 103, Address: 0x2d4674, Func Offset: 0x34
	// Line 100, Address: 0x2d4678, Func Offset: 0x38
	// Line 103, Address: 0x2d467c, Func Offset: 0x3c
	// Line 107, Address: 0x2d4684, Func Offset: 0x44
	// Line 109, Address: 0x2d468c, Func Offset: 0x4c
	// Line 110, Address: 0x2d4698, Func Offset: 0x58
	// Line 109, Address: 0x2d46a4, Func Offset: 0x64
	// Line 111, Address: 0x2d46a8, Func Offset: 0x68
	// Line 110, Address: 0x2d46ac, Func Offset: 0x6c
	// Line 111, Address: 0x2d46b0, Func Offset: 0x70
	// Line 112, Address: 0x2d46b8, Func Offset: 0x78
	// Line 113, Address: 0x2d46d0, Func Offset: 0x90
	// Line 114, Address: 0x2d46d4, Func Offset: 0x94
	// Line 115, Address: 0x2d46e0, Func Offset: 0xa0
	// Line 116, Address: 0x2d46f8, Func Offset: 0xb8
	// Line 118, Address: 0x2d46fc, Func Offset: 0xbc
	// Line 119, Address: 0x2d4700, Func Offset: 0xc0
	// Line 121, Address: 0x2d470c, Func Offset: 0xcc
	// Line 120, Address: 0x2d4710, Func Offset: 0xd0
	// Line 121, Address: 0x2d4714, Func Offset: 0xd4
	// Line 122, Address: 0x2d4724, Func Offset: 0xe4
	// Line 123, Address: 0x2d472c, Func Offset: 0xec
	// Line 124, Address: 0x2d4738, Func Offset: 0xf8
	// Line 125, Address: 0x2d4768, Func Offset: 0x128
	// Line 130, Address: 0x2d4770, Func Offset: 0x130
	// Func End, Address: 0x2d4784, Func Offset: 0x144
}

// 
// Start address: 0x2d4790
void clear_lwork()
{
	// Line 136, Address: 0x2d4790, Func Offset: 0
	// Line 137, Address: 0x2d4798, Func Offset: 0x8
	// Line 140, Address: 0x2d479c, Func Offset: 0xc
	// Func End, Address: 0x2d47a4, Func Offset: 0x14
}

// 
// Start address: 0x2d47b0
void add_time()
{
	float mult;
	// Line 144, Address: 0x2d47b0, Func Offset: 0
	// Line 147, Address: 0x2d47b4, Func Offset: 0x4
	// Line 144, Address: 0x2d47b8, Func Offset: 0x8
	// Line 147, Address: 0x2d47bc, Func Offset: 0xc
	// Line 144, Address: 0x2d47c0, Func Offset: 0x10
	// Line 147, Address: 0x2d47c4, Func Offset: 0x14
	// Line 148, Address: 0x2d47d4, Func Offset: 0x24
	// Line 151, Address: 0x2d47ec, Func Offset: 0x3c
	// Line 153, Address: 0x2d47f8, Func Offset: 0x48
	// Line 157, Address: 0x2d4810, Func Offset: 0x60
	// Line 160, Address: 0x2d4824, Func Offset: 0x74
	// Func End, Address: 0x2d4834, Func Offset: 0x84
}

// 
// Start address: 0x2d4840
float PlayerBattleCutterGetTime()
{
	// Line 165, Address: 0x2d4840, Func Offset: 0
	// Line 166, Address: 0x2d4844, Func Offset: 0x4
	// Func End, Address: 0x2d484c, Func Offset: 0xc
}

// 
// Start address: 0x2d4850
float get_blend_ratio(int mode)
{
	float s_point[4];
	float angl;
	float ratio;
	sgBone* sr_bone;
	sgBone* sl_bone;
	float tmp1[4];
	float tmp2[4];
	float dist_xz;
	float height_sub;
	float tmp1[4];
	float r;
	float r;
	// Line 171, Address: 0x2d4850, Func Offset: 0
	// Line 182, Address: 0x2d4854, Func Offset: 0x4
	// Line 171, Address: 0x2d4858, Func Offset: 0x8
	// Line 182, Address: 0x2d486c, Func Offset: 0x1c
	// Line 183, Address: 0x2d4878, Func Offset: 0x28
	// Line 182, Address: 0x2d487c, Func Offset: 0x2c
	// Line 183, Address: 0x2d4880, Func Offset: 0x30
	// Line 185, Address: 0x2d4890, Func Offset: 0x40
	// Line 186, Address: 0x2d489c, Func Offset: 0x4c
	// Line 187, Address: 0x2d48a8, Func Offset: 0x58
	// Line 188, Address: 0x2d48c8, Func Offset: 0x78
	// Line 191, Address: 0x2d48f4, Func Offset: 0xa4
	// Line 195, Address: 0x2d4904, Func Offset: 0xb4
	// Line 196, Address: 0x2d490c, Func Offset: 0xbc
	// Line 197, Address: 0x2d492c, Func Offset: 0xdc
	// Line 198, Address: 0x2d493c, Func Offset: 0xec
	// Line 197, Address: 0x2d4940, Func Offset: 0xf0
	// Line 199, Address: 0x2d4950, Func Offset: 0x100
	// Line 200, Address: 0x2d4958, Func Offset: 0x108
	// Line 202, Address: 0x2d4960, Func Offset: 0x110
	// Line 209, Address: 0x2d4968, Func Offset: 0x118
	// Line 211, Address: 0x2d4970, Func Offset: 0x120
	// Line 212, Address: 0x2d4988, Func Offset: 0x138
	// Line 213, Address: 0x2d498c, Func Offset: 0x13c
	// Line 211, Address: 0x2d4990, Func Offset: 0x140
	// Line 212, Address: 0x2d4994, Func Offset: 0x144
	// Line 213, Address: 0x2d4998, Func Offset: 0x148
	// Line 212, Address: 0x2d499c, Func Offset: 0x14c
	// Line 213, Address: 0x2d49a0, Func Offset: 0x150
	// Line 214, Address: 0x2d49ac, Func Offset: 0x15c
	// Line 215, Address: 0x2d49b8, Func Offset: 0x168
	// Line 217, Address: 0x2d49cc, Func Offset: 0x17c
	// Line 220, Address: 0x2d49d8, Func Offset: 0x188
	// Line 221, Address: 0x2d49f0, Func Offset: 0x1a0
	// Line 222, Address: 0x2d49f8, Func Offset: 0x1a8
	// Line 220, Address: 0x2d49fc, Func Offset: 0x1ac
	// Line 221, Address: 0x2d4a00, Func Offset: 0x1b0
	// Line 220, Address: 0x2d4a04, Func Offset: 0x1b4
	// Line 221, Address: 0x2d4a08, Func Offset: 0x1b8
	// Line 222, Address: 0x2d4a0c, Func Offset: 0x1bc
	// Line 223, Address: 0x2d4a20, Func Offset: 0x1d0
	// Line 224, Address: 0x2d4a28, Func Offset: 0x1d8
	// Line 225, Address: 0x2d4a3c, Func Offset: 0x1ec
	// Line 228, Address: 0x2d4a40, Func Offset: 0x1f0
	// Line 231, Address: 0x2d4a48, Func Offset: 0x1f8
	// Line 230, Address: 0x2d4a4c, Func Offset: 0x1fc
	// Line 231, Address: 0x2d4a50, Func Offset: 0x200
	// Func End, Address: 0x2d4a64, Func Offset: 0x214
}

// 
// Start address: 0x2d4a70
int PlayerBattleCutterNormalAttack()
{
	float ratio;
	int num;
	// Line 235, Address: 0x2d4a70, Func Offset: 0
	// Line 237, Address: 0x2d4a7c, Func Offset: 0xc
	// Line 235, Address: 0x2d4a80, Func Offset: 0x10
	// Line 237, Address: 0x2d4a88, Func Offset: 0x18
	// Line 239, Address: 0x2d4a98, Func Offset: 0x28
	// Line 254, Address: 0x2d4aa0, Func Offset: 0x30
	// Line 255, Address: 0x2d4aa8, Func Offset: 0x38
	// Line 259, Address: 0x2d4ac4, Func Offset: 0x54
	// Line 255, Address: 0x2d4ac8, Func Offset: 0x58
	// Line 259, Address: 0x2d4acc, Func Offset: 0x5c
	// Line 260, Address: 0x2d4ad4, Func Offset: 0x64
	// Line 261, Address: 0x2d4adc, Func Offset: 0x6c
	// Line 262, Address: 0x2d4ae8, Func Offset: 0x78
	// Line 263, Address: 0x2d4af4, Func Offset: 0x84
	// Line 264, Address: 0x2d4afc, Func Offset: 0x8c
	// Line 265, Address: 0x2d4b00, Func Offset: 0x90
	// Line 266, Address: 0x2d4b24, Func Offset: 0xb4
	// Line 267, Address: 0x2d4b2c, Func Offset: 0xbc
	// Line 268, Address: 0x2d4b34, Func Offset: 0xc4
	// Line 276, Address: 0x2d4b40, Func Offset: 0xd0
	// Line 277, Address: 0x2d4b48, Func Offset: 0xd8
	// Line 276, Address: 0x2d4b4c, Func Offset: 0xdc
	// Line 277, Address: 0x2d4b50, Func Offset: 0xe0
	// Line 276, Address: 0x2d4b54, Func Offset: 0xe4
	// Line 277, Address: 0x2d4b58, Func Offset: 0xe8
	// Line 280, Address: 0x2d4ba8, Func Offset: 0x138
	// Line 281, Address: 0x2d4bbc, Func Offset: 0x14c
	// Line 282, Address: 0x2d4bc4, Func Offset: 0x154
	// Line 283, Address: 0x2d4bcc, Func Offset: 0x15c
	// Line 284, Address: 0x2d4bd0, Func Offset: 0x160
	// Line 286, Address: 0x2d4bdc, Func Offset: 0x16c
	// Line 287, Address: 0x2d4be0, Func Offset: 0x170
	// Line 290, Address: 0x2d4c24, Func Offset: 0x1b4
	// Line 291, Address: 0x2d4c2c, Func Offset: 0x1bc
	// Line 292, Address: 0x2d4c34, Func Offset: 0x1c4
	// Line 293, Address: 0x2d4c40, Func Offset: 0x1d0
	// Line 297, Address: 0x2d4c78, Func Offset: 0x208
	// Line 298, Address: 0x2d4c80, Func Offset: 0x210
	// Line 299, Address: 0x2d4c8c, Func Offset: 0x21c
	// Line 300, Address: 0x2d4c94, Func Offset: 0x224
	// Line 301, Address: 0x2d4c98, Func Offset: 0x228
	// Line 302, Address: 0x2d4ca4, Func Offset: 0x234
	// Line 303, Address: 0x2d4ca8, Func Offset: 0x238
	// Line 307, Address: 0x2d4cf8, Func Offset: 0x288
	// Line 311, Address: 0x2d4d10, Func Offset: 0x2a0
	// Line 313, Address: 0x2d4d1c, Func Offset: 0x2ac
	// Line 315, Address: 0x2d4d44, Func Offset: 0x2d4
	// Line 316, Address: 0x2d4d5c, Func Offset: 0x2ec
	// Line 318, Address: 0x2d4d68, Func Offset: 0x2f8
	// Line 319, Address: 0x2d4d74, Func Offset: 0x304
	// Line 322, Address: 0x2d4d78, Func Offset: 0x308
	// Line 324, Address: 0x2d4d80, Func Offset: 0x310
	// Line 325, Address: 0x2d4d88, Func Offset: 0x318
	// Func End, Address: 0x2d4d98, Func Offset: 0x328
}

// 
// Start address: 0x2d4da0
int PlayerBattleCutterStrongAttack()
{
	_PLAYER_WORK* p;
	_anon2* ui_work;
	float ratio;
	// Line 329, Address: 0x2d4da0, Func Offset: 0
	// Line 330, Address: 0x2d4dac, Func Offset: 0xc
	// Line 329, Address: 0x2d4db0, Func Offset: 0x10
	// Line 331, Address: 0x2d4db4, Func Offset: 0x14
	// Line 334, Address: 0x2d4dbc, Func Offset: 0x1c
	// Line 331, Address: 0x2d4dc0, Func Offset: 0x20
	// Line 334, Address: 0x2d4dc4, Func Offset: 0x24
	// Line 337, Address: 0x2d4de8, Func Offset: 0x48
	// Line 345, Address: 0x2d4df0, Func Offset: 0x50
	// Line 349, Address: 0x2d4df8, Func Offset: 0x58
	// Line 354, Address: 0x2d4e10, Func Offset: 0x70
	// Line 356, Address: 0x2d4e30, Func Offset: 0x90
	// Line 357, Address: 0x2d4e38, Func Offset: 0x98
	// Line 359, Address: 0x2d4e40, Func Offset: 0xa0
	// Line 361, Address: 0x2d4e48, Func Offset: 0xa8
	// Line 365, Address: 0x2d4e80, Func Offset: 0xe0
	// Line 364, Address: 0x2d4e84, Func Offset: 0xe4
	// Line 365, Address: 0x2d4e88, Func Offset: 0xe8
	// Line 366, Address: 0x2d4e8c, Func Offset: 0xec
	// Line 368, Address: 0x2d4e98, Func Offset: 0xf8
	// Line 372, Address: 0x2d4ec4, Func Offset: 0x124
	// Line 373, Address: 0x2d4ecc, Func Offset: 0x12c
	// Line 374, Address: 0x2d4ed4, Func Offset: 0x134
	// Line 375, Address: 0x2d4ed8, Func Offset: 0x138
	// Line 377, Address: 0x2d4ee0, Func Offset: 0x140
	// Line 381, Address: 0x2d4f24, Func Offset: 0x184
	// Line 382, Address: 0x2d4f2c, Func Offset: 0x18c
	// Line 383, Address: 0x2d4f30, Func Offset: 0x190
	// Line 385, Address: 0x2d4f54, Func Offset: 0x1b4
	// Line 387, Address: 0x2d4f60, Func Offset: 0x1c0
	// Line 391, Address: 0x2d4f6c, Func Offset: 0x1cc
	// Line 394, Address: 0x2d4f70, Func Offset: 0x1d0
	// Line 397, Address: 0x2d4f78, Func Offset: 0x1d8
	// Line 399, Address: 0x2d4f80, Func Offset: 0x1e0
	// Line 400, Address: 0x2d4f88, Func Offset: 0x1e8
	// Func End, Address: 0x2d4f9c, Func Offset: 0x1fc
}

// 
// Start address: 0x2d4fa0
int PlayerBattleBrokenBottleAttack()
{
	_PLAYER_WORK* p;
	_anon2* ui_work;
	float ratio;
	// Line 404, Address: 0x2d4fa0, Func Offset: 0
	// Line 405, Address: 0x2d4fac, Func Offset: 0xc
	// Line 404, Address: 0x2d4fb0, Func Offset: 0x10
	// Line 406, Address: 0x2d4fb4, Func Offset: 0x14
	// Line 409, Address: 0x2d4fbc, Func Offset: 0x1c
	// Line 406, Address: 0x2d4fc0, Func Offset: 0x20
	// Line 409, Address: 0x2d4fc4, Func Offset: 0x24
	// Line 414, Address: 0x2d4ffc, Func Offset: 0x5c
	// Line 415, Address: 0x2d5004, Func Offset: 0x64
	// Line 419, Address: 0x2d5008, Func Offset: 0x68
	// Line 423, Address: 0x2d5010, Func Offset: 0x70
	// Line 427, Address: 0x2d5028, Func Offset: 0x88
	// Line 431, Address: 0x2d5060, Func Offset: 0xc0
	// Line 430, Address: 0x2d5064, Func Offset: 0xc4
	// Line 431, Address: 0x2d5068, Func Offset: 0xc8
	// Line 432, Address: 0x2d506c, Func Offset: 0xcc
	// Line 434, Address: 0x2d5078, Func Offset: 0xd8
	// Line 438, Address: 0x2d50a4, Func Offset: 0x104
	// Line 439, Address: 0x2d50ac, Func Offset: 0x10c
	// Line 440, Address: 0x2d50b4, Func Offset: 0x114
	// Line 441, Address: 0x2d50b8, Func Offset: 0x118
	// Line 443, Address: 0x2d50c0, Func Offset: 0x120
	// Line 447, Address: 0x2d5104, Func Offset: 0x164
	// Line 448, Address: 0x2d510c, Func Offset: 0x16c
	// Line 449, Address: 0x2d5110, Func Offset: 0x170
	// Line 451, Address: 0x2d5134, Func Offset: 0x194
	// Line 453, Address: 0x2d5140, Func Offset: 0x1a0
	// Line 457, Address: 0x2d514c, Func Offset: 0x1ac
	// Line 460, Address: 0x2d5150, Func Offset: 0x1b0
	// Line 463, Address: 0x2d5158, Func Offset: 0x1b8
	// Line 465, Address: 0x2d5160, Func Offset: 0x1c0
	// Line 466, Address: 0x2d5168, Func Offset: 0x1c8
	// Func End, Address: 0x2d517c, Func Offset: 0x1dc
}

