typedef union _anon0;
typedef struct sgBone;
typedef struct sfCharacter;
typedef struct sgAnime;
typedef struct sgIKHandle;
typedef struct sfObj;
typedef struct _anon1;
typedef struct sfCldObject;
typedef struct sgQTNode;
typedef struct sfCldPart;
typedef struct _anon2;
typedef enum sgIKSolveResult : unsigned char;
typedef struct sgSVModel;
typedef struct _anon3;
typedef struct _anon4;
typedef struct sgQTObject;
typedef struct _anon5;
typedef struct _anon6;
typedef struct sfOffsetAABB;
typedef struct _anon7;
typedef union sfCldBody;
typedef struct _anon8;
typedef enum GameItem : unsigned char;
typedef struct _anon9;
typedef struct _PLAYER_WORK;

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
typedef int type_21[1];
typedef unsigned char type_22[4];

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
	_anon3 model_work;
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
	void* model;
	void* texture;
	void* texture_global;
	float matrices[4][4];
	float* weights;
	float tex_crops[4];
	void(*texture_load_func)(_anon2*, int, int, float*);
	int equip_flag;
};

struct _anon4
{
	int dummy;
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
	_anon4* anim_ctrl;
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
float vib_f;
float vib_h;
_anon5 player_battle_work;

void chain_vibration();
void PlayerBattleChainVibration();
int PlayerBattlePickNormalAttack();
int PlayerBattlePickStrongAttack();

// 
// Start address: 0x2d5180
void chain_vibration()
{
	float c_vib;
	sgIKHandle* h_r;
	sgIKHandle* h_l;
	sgBone* bone_r;
	sgBone* bone_l;
	float pos_r[4];
	float pos_l[4];
	sgBone* bone;
	float pos[4];
	// Line 64, Address: 0x2d5180, Func Offset: 0
	// Line 69, Address: 0x2d5198, Func Offset: 0x18
	// Line 76, Address: 0x2d51ac, Func Offset: 0x2c
	// Line 69, Address: 0x2d51b4, Func Offset: 0x34
	// Line 76, Address: 0x2d51c8, Func Offset: 0x48
	// Line 77, Address: 0x2d51dc, Func Offset: 0x5c
	// Line 79, Address: 0x2d51e8, Func Offset: 0x68
	// Line 80, Address: 0x2d51f0, Func Offset: 0x70
	// Line 89, Address: 0x2d5200, Func Offset: 0x80
	// Line 91, Address: 0x2d521c, Func Offset: 0x9c
	// Line 93, Address: 0x2d5238, Func Offset: 0xb8
	// Line 91, Address: 0x2d523c, Func Offset: 0xbc
	// Line 93, Address: 0x2d5240, Func Offset: 0xc0
	// Line 94, Address: 0x2d524c, Func Offset: 0xcc
	// Line 93, Address: 0x2d5250, Func Offset: 0xd0
	// Line 94, Address: 0x2d5254, Func Offset: 0xd4
	// Line 95, Address: 0x2d5264, Func Offset: 0xe4
	// Line 96, Address: 0x2d5270, Func Offset: 0xf0
	// Line 97, Address: 0x2d527c, Func Offset: 0xfc
	// Line 99, Address: 0x2d5280, Func Offset: 0x100
	// Line 98, Address: 0x2d5284, Func Offset: 0x104
	// Line 99, Address: 0x2d5288, Func Offset: 0x108
	// Line 97, Address: 0x2d528c, Func Offset: 0x10c
	// Line 98, Address: 0x2d5290, Func Offset: 0x110
	// Line 97, Address: 0x2d5294, Func Offset: 0x114
	// Line 99, Address: 0x2d5298, Func Offset: 0x118
	// Line 100, Address: 0x2d52a0, Func Offset: 0x120
	// Line 106, Address: 0x2d52ac, Func Offset: 0x12c
	// Line 107, Address: 0x2d52c0, Func Offset: 0x140
	// Line 108, Address: 0x2d52cc, Func Offset: 0x14c
	// Line 109, Address: 0x2d52d0, Func Offset: 0x150
	// Line 108, Address: 0x2d52d4, Func Offset: 0x154
	// Line 109, Address: 0x2d52d8, Func Offset: 0x158
	// Line 108, Address: 0x2d52dc, Func Offset: 0x15c
	// Line 109, Address: 0x2d52e8, Func Offset: 0x168
	// Line 112, Address: 0x2d52f0, Func Offset: 0x170
	// Line 113, Address: 0x2d52f8, Func Offset: 0x178
	// Line 116, Address: 0x2d5300, Func Offset: 0x180
	// Func End, Address: 0x2d5320, Func Offset: 0x1a0
}

// 
// Start address: 0x2d5320
void PlayerBattleChainVibration()
{
	// Line 126, Address: 0x2d5320, Func Offset: 0
	// Func End, Address: 0x2d5328, Func Offset: 0x8
}

// 
// Start address: 0x2d5330
int PlayerBattlePickNormalAttack()
{
	// Line 133, Address: 0x2d5330, Func Offset: 0
	// Line 135, Address: 0x2d5334, Func Offset: 0x4
	// Line 133, Address: 0x2d5338, Func Offset: 0x8
	// Line 135, Address: 0x2d533c, Func Offset: 0xc
	// Line 137, Address: 0x2d5350, Func Offset: 0x20
	// Line 138, Address: 0x2d5360, Func Offset: 0x30
	// Line 140, Address: 0x2d5368, Func Offset: 0x38
	// Line 143, Address: 0x2d5380, Func Offset: 0x50
	// Line 144, Address: 0x2d538c, Func Offset: 0x5c
	// Line 145, Address: 0x2d5398, Func Offset: 0x68
	// Line 146, Address: 0x2d53a0, Func Offset: 0x70
	// Line 147, Address: 0x2d53ac, Func Offset: 0x7c
	// Line 183, Address: 0x2d53b8, Func Offset: 0x88
	// Line 184, Address: 0x2d53cc, Func Offset: 0x9c
	// Line 185, Address: 0x2d53d8, Func Offset: 0xa8
	// Line 186, Address: 0x2d53e0, Func Offset: 0xb0
	// Line 185, Address: 0x2d53e4, Func Offset: 0xb4
	// Line 186, Address: 0x2d53e8, Func Offset: 0xb8
	// Line 187, Address: 0x2d53f8, Func Offset: 0xc8
	// Line 189, Address: 0x2d5400, Func Offset: 0xd0
	// Line 192, Address: 0x2d5408, Func Offset: 0xd8
	// Line 195, Address: 0x2d5440, Func Offset: 0x110
	// Line 196, Address: 0x2d544c, Func Offset: 0x11c
	// Line 197, Address: 0x2d5454, Func Offset: 0x124
	// Line 196, Address: 0x2d5458, Func Offset: 0x128
	// Line 197, Address: 0x2d545c, Func Offset: 0x12c
	// Line 198, Address: 0x2d546c, Func Offset: 0x13c
	// Line 200, Address: 0x2d5474, Func Offset: 0x144
	// Line 201, Address: 0x2d5480, Func Offset: 0x150
	// Line 206, Address: 0x2d54ac, Func Offset: 0x17c
	// Line 205, Address: 0x2d54b0, Func Offset: 0x180
	// Line 206, Address: 0x2d54b8, Func Offset: 0x188
	// Line 207, Address: 0x2d54c4, Func Offset: 0x194
	// Line 208, Address: 0x2d54c8, Func Offset: 0x198
	// Line 207, Address: 0x2d54cc, Func Offset: 0x19c
	// Line 208, Address: 0x2d54d0, Func Offset: 0x1a0
	// Line 209, Address: 0x2d54e0, Func Offset: 0x1b0
	// Line 211, Address: 0x2d54e8, Func Offset: 0x1b8
	// Line 213, Address: 0x2d54f0, Func Offset: 0x1c0
	// Line 216, Address: 0x2d5538, Func Offset: 0x208
	// Line 220, Address: 0x2d5550, Func Offset: 0x220
	// Line 237, Address: 0x2d555c, Func Offset: 0x22c
	// Line 239, Address: 0x2d5584, Func Offset: 0x254
	// Line 240, Address: 0x2d55a0, Func Offset: 0x270
	// Line 242, Address: 0x2d55a8, Func Offset: 0x278
	// Line 243, Address: 0x2d55b4, Func Offset: 0x284
	// Line 245, Address: 0x2d55b8, Func Offset: 0x288
	// Line 246, Address: 0x2d55c0, Func Offset: 0x290
	// Func End, Address: 0x2d55cc, Func Offset: 0x29c
}

// 
// Start address: 0x2d55d0
int PlayerBattlePickStrongAttack()
{
	_PLAYER_WORK* p;
	_anon1* ui_work;
	// Line 250, Address: 0x2d55d0, Func Offset: 0
	// Line 251, Address: 0x2d55e0, Func Offset: 0x10
	// Line 252, Address: 0x2d55e4, Func Offset: 0x14
	// Line 254, Address: 0x2d55f0, Func Offset: 0x20
	// Line 255, Address: 0x2d55fc, Func Offset: 0x2c
	// Line 257, Address: 0x2d5610, Func Offset: 0x40
	// Line 258, Address: 0x2d5618, Func Offset: 0x48
	// Line 260, Address: 0x2d5620, Func Offset: 0x50
	// Line 266, Address: 0x2d5628, Func Offset: 0x58
	// Line 270, Address: 0x2d5654, Func Offset: 0x84
	// Line 269, Address: 0x2d5658, Func Offset: 0x88
	// Line 270, Address: 0x2d565c, Func Offset: 0x8c
	// Line 271, Address: 0x2d5664, Func Offset: 0x94
	// Line 272, Address: 0x2d5678, Func Offset: 0xa8
	// Line 274, Address: 0x2d5680, Func Offset: 0xb0
	// Line 276, Address: 0x2d5688, Func Offset: 0xb8
	// Line 280, Address: 0x2d56a8, Func Offset: 0xd8
	// Line 281, Address: 0x2d56b0, Func Offset: 0xe0
	// Line 282, Address: 0x2d56b4, Func Offset: 0xe4
	// Line 283, Address: 0x2d56c8, Func Offset: 0xf8
	// Line 285, Address: 0x2d56d0, Func Offset: 0x100
	// Line 287, Address: 0x2d56d8, Func Offset: 0x108
	// Line 290, Address: 0x2d5710, Func Offset: 0x140
	// Line 292, Address: 0x2d5718, Func Offset: 0x148
	// Line 294, Address: 0x2d5728, Func Offset: 0x158
	// Line 293, Address: 0x2d572c, Func Offset: 0x15c
	// Line 294, Address: 0x2d5730, Func Offset: 0x160
	// Line 295, Address: 0x2d5740, Func Offset: 0x170
	// Line 297, Address: 0x2d5748, Func Offset: 0x178
	// Line 299, Address: 0x2d5750, Func Offset: 0x180
	// Line 301, Address: 0x2d575c, Func Offset: 0x18c
	// Line 303, Address: 0x2d5760, Func Offset: 0x190
	// Line 304, Address: 0x2d5768, Func Offset: 0x198
	// Func End, Address: 0x2d577c, Func Offset: 0x1ac
}

