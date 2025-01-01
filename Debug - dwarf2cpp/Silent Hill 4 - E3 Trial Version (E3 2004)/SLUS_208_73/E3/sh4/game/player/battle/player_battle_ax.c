typedef union _anon0;
typedef struct sgBone;
typedef struct sfCharacter;
typedef struct sgAnime;
typedef struct sfObj;
typedef struct _anon1;
typedef struct sfCldObject;
typedef struct sgQTNode;
typedef struct _PLAYER_WORK;
typedef struct sfCldPart;
typedef struct _anon2;
typedef enum sgIKSolveResult : unsigned char;
typedef struct sgSVModel;
typedef struct _anon3;
typedef struct _anon4;
typedef struct sgIKHandle;
typedef struct sgQTObject;
typedef struct _anon5;
typedef struct _anon6;
typedef struct sfOffsetAABB;
typedef struct _anon7;
typedef union sfCldBody;
typedef struct _anon8;
typedef enum GameItem : unsigned char;
typedef struct _anon9;

typedef void(*type_1)(sfObj*);
typedef void(*type_7)(_anon2*, int, int, float*);
typedef sgIKSolveResult(*type_8)();
typedef void(*type_13)(sgAnime*, int);
typedef void(*type_19)(sfObj*);

typedef float type_0[4];
typedef sfCldPart* type_2[6];
typedef unsigned char type_3[3];
typedef float type_4[4][4];
typedef float type_5[4];
typedef float type_6[4][2];
typedef _PLAYER_WORK type_9[2];
typedef float type_10[4];
typedef unsigned char type_11[3];
typedef void* type_12[4];
typedef short type_14[2];
typedef unsigned short type_15[2];
typedef char type_16[4];
typedef _anon0 type_17[256];
typedef unsigned char type_18[4];
typedef float type_20[1];
typedef float type_21[16];
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

struct _anon1
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
	_anon3* anim_ctrl;
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

struct _anon3
{
	int dummy;
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
	_anon7 bounding_ball;
	sgQTObject* next;
	sgQTObject* prev;
};

struct _anon5
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

struct _anon6
{
	float start[4];
	float end[4];
};

struct sfOffsetAABB
{
	_anon8 aabb;
	float offset[4];
};

struct _anon7
{
	float center[4];
	float radius;
};

union sfCldBody
{
	_anon9 obb;
	_anon8 aabb;
	sfOffsetAABB offset_aabb;
	_anon6 line;
	_anon7 sphere;
};

struct _anon8
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

struct _anon9
{
	float mat[4][4];
	float half_w[4];
};

float move_data[16];
_PLAYER_WORK playerw[2];
_anon5 player_battle_work;

float time_to_mov(float ftime);
int PlayerBattleAxNormalAttack();
int PlayerBattleAxStrongAttack();

// 
// Start address: 0x2d9890
float time_to_mov(float ftime)
{
	float ret;
	int icount;
	float fcount;
	float f0;
	float f1;
	float ftt;
	// Line 71, Address: 0x2d9890, Func Offset: 0
	// Line 67, Address: 0x2d9894, Func Offset: 0x4
	// Line 71, Address: 0x2d9898, Func Offset: 0x8
	// Line 67, Address: 0x2d989c, Func Offset: 0xc
	// Line 71, Address: 0x2d98a0, Func Offset: 0x10
	// Line 67, Address: 0x2d98a4, Func Offset: 0x14
	// Line 71, Address: 0x2d98a8, Func Offset: 0x18
	// Line 68, Address: 0x2d98ac, Func Offset: 0x1c
	// Line 71, Address: 0x2d98b0, Func Offset: 0x20
	// Line 72, Address: 0x2d98bc, Func Offset: 0x2c
	// Line 73, Address: 0x2d98c0, Func Offset: 0x30
	// Line 77, Address: 0x2d98cc, Func Offset: 0x3c
	// Line 78, Address: 0x2d98d8, Func Offset: 0x48
	// Line 77, Address: 0x2d98dc, Func Offset: 0x4c
	// Line 78, Address: 0x2d98e0, Func Offset: 0x50
	// Line 79, Address: 0x2d98e4, Func Offset: 0x54
	// Line 78, Address: 0x2d98e8, Func Offset: 0x58
	// Line 77, Address: 0x2d98ec, Func Offset: 0x5c
	// Line 78, Address: 0x2d98f0, Func Offset: 0x60
	// Line 79, Address: 0x2d98f4, Func Offset: 0x64
	// Line 80, Address: 0x2d9900, Func Offset: 0x70
	// Line 79, Address: 0x2d990c, Func Offset: 0x7c
	// Line 80, Address: 0x2d9910, Func Offset: 0x80
	// Line 81, Address: 0x2d991c, Func Offset: 0x8c
	// Line 82, Address: 0x2d9920, Func Offset: 0x90
	// Line 85, Address: 0x2d9938, Func Offset: 0xa8
	// Line 86, Address: 0x2d9944, Func Offset: 0xb4
	// Line 85, Address: 0x2d9948, Func Offset: 0xb8
	// Line 86, Address: 0x2d9960, Func Offset: 0xd0
	// Func End, Address: 0x2d996c, Func Offset: 0xdc
}

// 
// Start address: 0x2d9970
int PlayerBattleAxNormalAttack()
{
	// Line 92, Address: 0x2d9970, Func Offset: 0
	// Func End, Address: 0x2d9978, Func Offset: 0x8
}

// 
// Start address: 0x2d9980
int PlayerBattleAxStrongAttack()
{
	_PLAYER_WORK* p;
	_anon1* ui_work;
	float ftime;
	float mult;
	float pos_e[4];
	float push_vec[4];
	float x;
	float z;
	float dist;
	// Line 97, Address: 0x2d9980, Func Offset: 0
	// Line 98, Address: 0x2d9994, Func Offset: 0x14
	// Line 97, Address: 0x2d9998, Func Offset: 0x18
	// Line 99, Address: 0x2d999c, Func Offset: 0x1c
	// Line 101, Address: 0x2d99a8, Func Offset: 0x28
	// Line 102, Address: 0x2d99b4, Func Offset: 0x34
	// Line 104, Address: 0x2d99c8, Func Offset: 0x48
	// Line 105, Address: 0x2d99d0, Func Offset: 0x50
	// Line 107, Address: 0x2d99d8, Func Offset: 0x58
	// Line 109, Address: 0x2d99e0, Func Offset: 0x60
	// Line 113, Address: 0x2d9a0c, Func Offset: 0x8c
	// Line 112, Address: 0x2d9a10, Func Offset: 0x90
	// Line 113, Address: 0x2d9a14, Func Offset: 0x94
	// Line 114, Address: 0x2d9a18, Func Offset: 0x98
	// Line 115, Address: 0x2d9a24, Func Offset: 0xa4
	// Line 116, Address: 0x2d9a28, Func Offset: 0xa8
	// Line 120, Address: 0x2d9a48, Func Offset: 0xc8
	// Line 121, Address: 0x2d9a50, Func Offset: 0xd0
	// Line 122, Address: 0x2d9a54, Func Offset: 0xd4
	// Line 123, Address: 0x2d9a5c, Func Offset: 0xdc
	// Line 124, Address: 0x2d9a60, Func Offset: 0xe0
	// Line 127, Address: 0x2d9a98, Func Offset: 0x118
	// Line 129, Address: 0x2d9aa0, Func Offset: 0x120
	// Line 130, Address: 0x2d9ab0, Func Offset: 0x130
	// Line 131, Address: 0x2d9ab4, Func Offset: 0x134
	// Line 133, Address: 0x2d9ac0, Func Offset: 0x140
	// Line 134, Address: 0x2d9acc, Func Offset: 0x14c
	// Line 139, Address: 0x2d9ad0, Func Offset: 0x150
	// Line 140, Address: 0x2d9ae4, Func Offset: 0x164
	// Line 141, Address: 0x2d9b00, Func Offset: 0x180
	// Line 144, Address: 0x2d9b04, Func Offset: 0x184
	// Line 141, Address: 0x2d9b08, Func Offset: 0x188
	// Line 144, Address: 0x2d9b0c, Func Offset: 0x18c
	// Line 148, Address: 0x2d9b14, Func Offset: 0x194
	// Line 150, Address: 0x2d9b1c, Func Offset: 0x19c
	// Line 151, Address: 0x2d9b28, Func Offset: 0x1a8
	// Line 150, Address: 0x2d9b34, Func Offset: 0x1b4
	// Line 152, Address: 0x2d9b38, Func Offset: 0x1b8
	// Line 151, Address: 0x2d9b3c, Func Offset: 0x1bc
	// Line 152, Address: 0x2d9b40, Func Offset: 0x1c0
	// Line 153, Address: 0x2d9b48, Func Offset: 0x1c8
	// Line 154, Address: 0x2d9b60, Func Offset: 0x1e0
	// Line 155, Address: 0x2d9b64, Func Offset: 0x1e4
	// Line 156, Address: 0x2d9b70, Func Offset: 0x1f0
	// Line 157, Address: 0x2d9b88, Func Offset: 0x208
	// Line 159, Address: 0x2d9b8c, Func Offset: 0x20c
	// Line 160, Address: 0x2d9b90, Func Offset: 0x210
	// Line 162, Address: 0x2d9b9c, Func Offset: 0x21c
	// Line 161, Address: 0x2d9ba0, Func Offset: 0x220
	// Line 162, Address: 0x2d9ba4, Func Offset: 0x224
	// Line 163, Address: 0x2d9bb4, Func Offset: 0x234
	// Line 164, Address: 0x2d9bbc, Func Offset: 0x23c
	// Line 165, Address: 0x2d9bc8, Func Offset: 0x248
	// Line 166, Address: 0x2d9bf8, Func Offset: 0x278
	// Line 171, Address: 0x2d9c00, Func Offset: 0x280
	// Line 172, Address: 0x2d9c08, Func Offset: 0x288
	// Func End, Address: 0x2d9c24, Func Offset: 0x2a4
}

