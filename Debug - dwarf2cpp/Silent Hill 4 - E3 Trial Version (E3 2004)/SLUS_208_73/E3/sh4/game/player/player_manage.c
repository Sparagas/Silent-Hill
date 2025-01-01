typedef struct sfObj;
typedef struct sgIKHandle;
typedef struct _anon0;
typedef struct sfCldObject;
typedef struct _anon1;
typedef struct sfCharacter;
typedef struct sgQTNode;
typedef struct sfCldPart;
typedef struct _anon2;
typedef enum _enum : unsigned char;
typedef struct sgSVModel;
typedef struct _anon3;
typedef struct sgAnime;
typedef struct _anon4;
typedef struct sgBone;
typedef struct _anon5;
typedef struct _anon6;
typedef struct sgQTObject;
typedef struct _anon7;
typedef struct _anon8;
typedef struct EventFlag;
typedef struct sfOffsetAABB;
typedef union _anon9;
typedef union sfCldBody;
typedef enum GameItem : unsigned char;
typedef struct _PLAYER_WORK;
typedef struct _anon10;
typedef struct _anon11;
typedef enum sgIKSolveResult : unsigned char;
typedef struct _anon12;
typedef struct _anon13;

typedef void(*type_8)(sgAnime*, int);
typedef void(*type_14)(_anon6*, int, int, float*);
typedef void(*type_17)(sfObj*);
typedef void(*type_19)(sfObj*);
typedef sgIKSolveResult(*type_25)();

typedef _anon0 type_0[10];
typedef sfCldPart* type_1[6];
typedef unsigned char type_2[3];
typedef float type_3[4];
typedef float type_4[4][4];
typedef void* type_5[4];
typedef float type_6[4];
typedef _anon1 type_7[2];
typedef _anon2 type_9[30];
typedef _anon3 type_10[18];
typedef float type_11[4];
typedef _PLAYER_WORK type_12[2];
typedef unsigned char type_13[320];
typedef unsigned char type_15[4];
typedef _anon9 type_16[256];
typedef unsigned char type_18[3];
typedef float type_20[4][2];
typedef short type_21[2];
typedef unsigned short type_22[2];
typedef char type_23[4];
typedef unsigned char type_24[4];
typedef float type_26[1];
typedef int type_27[1];

struct sfObj
{
	_anon9 fwork[256];
	_anon9* work;
	void(*func)(sfObj*);
	_anon9* work_pt0;
	_anon9* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon9* sys_work;
	_anon9* scene_work;
	_anon9* event_work;
	_anon9* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
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

struct _anon0
{
	_enum stage;
	int src;
	int cur;
	unsigned int flag;
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

struct _anon1
{
	float life;
	float str;
	float def;
	float life_max;
	float str_max;
	float def_max;
	float pos[4];
	float rot[4];
};

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon8 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
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
	_enum stage;
	int scene;
	float trans[4];
	float time;
	float time_bg;
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

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
};

struct _anon3
{
	_enum stage;
	int scene;
	float trans[4];
	float rot[4];
	int en_id;
	sfObj* obj;
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
	int dummy;
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

struct _anon5
{
	GameItem wp_last;
	int curse_step;
};

struct _anon6
{
	unsigned long tex0;
	unsigned long clamp;
};

struct sgQTObject
{
	_anon11 bounding_ball;
	sgQTObject* next;
	sgQTObject* prev;
};

struct _anon7
{
	_anon1 params[2];
	_anon2 holy_data[30];
	_anon3 finish_data[18];
	_anon5 add_data;
};

struct _anon8
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

struct EventFlag
{
	unsigned char flag[320];
};

struct sfOffsetAABB
{
	_anon12 aabb;
	float offset[4];
};

union _anon9
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

union sfCldBody
{
	_anon13 obb;
	_anon12 aabb;
	sfOffsetAABB offset_aabb;
	_anon10 line;
	_anon11 sphere;
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

struct _anon10
{
	float start[4];
	float end[4];
};

struct _anon11
{
	float center[4];
	float radius;
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

struct _anon12
{
	float bmin[4];
	float bmax[4];
};

struct _anon13
{
	float mat[4][4];
	float half_w[4];
};

_PLAYER_WORK playerw[2];
_anon0 trans_data[10];
EventFlag event_flag;

void PlayerManageRestoreData(_anon7* load_data);
void PlayerManageMakeData(_anon7* save_data);

// 
// Start address: 0x2e2040
void PlayerManageRestoreData(_anon7* load_data)
{
	int i;
	_anon1* param;
	// Line 38, Address: 0x2e2040, Func Offset: 0
	// Line 42, Address: 0x2e2044, Func Offset: 0x4
	// Line 38, Address: 0x2e2048, Func Offset: 0x8
	// Line 42, Address: 0x2e2054, Func Offset: 0x14
	// Line 43, Address: 0x2e2060, Func Offset: 0x20
	// Line 44, Address: 0x2e2064, Func Offset: 0x24
	// Line 45, Address: 0x2e2080, Func Offset: 0x40
	// Line 46, Address: 0x2e2084, Func Offset: 0x44
	// Line 47, Address: 0x2e2088, Func Offset: 0x48
	// Line 48, Address: 0x2e2090, Func Offset: 0x50
	// Line 49, Address: 0x2e2098, Func Offset: 0x58
	// Line 50, Address: 0x2e20a0, Func Offset: 0x60
	// Line 51, Address: 0x2e20a8, Func Offset: 0x68
	// Line 52, Address: 0x2e20b0, Func Offset: 0x70
	// Line 53, Address: 0x2e20b8, Func Offset: 0x78
	// Line 54, Address: 0x2e20c0, Func Offset: 0x80
	// Line 55, Address: 0x2e20c8, Func Offset: 0x88
	// Line 56, Address: 0x2e20d0, Func Offset: 0x90
	// Line 57, Address: 0x2e20d8, Func Offset: 0x98
	// Line 58, Address: 0x2e20e0, Func Offset: 0xa0
	// Line 59, Address: 0x2e20e8, Func Offset: 0xa8
	// Line 60, Address: 0x2e20f0, Func Offset: 0xb0
	// Line 63, Address: 0x2e20f8, Func Offset: 0xb8
	// Line 65, Address: 0x2e2108, Func Offset: 0xc8
	// Line 67, Address: 0x2e2110, Func Offset: 0xd0
	// Line 68, Address: 0x2e211c, Func Offset: 0xdc
	// Line 71, Address: 0x2e2124, Func Offset: 0xe4
	// Line 72, Address: 0x2e2130, Func Offset: 0xf0
	// Line 75, Address: 0x2e2138, Func Offset: 0xf8
	// Line 78, Address: 0x2e2140, Func Offset: 0x100
	// Func End, Address: 0x2e2150, Func Offset: 0x110
}

// 
// Start address: 0x2e2150
void PlayerManageMakeData(_anon7* save_data)
{
	int i;
	_anon1* param;
	// Line 82, Address: 0x2e2150, Func Offset: 0
	// Line 87, Address: 0x2e2154, Func Offset: 0x4
	// Line 82, Address: 0x2e2158, Func Offset: 0x8
	// Line 86, Address: 0x2e2164, Func Offset: 0x14
	// Line 87, Address: 0x2e2168, Func Offset: 0x18
	// Line 88, Address: 0x2e2180, Func Offset: 0x30
	// Line 89, Address: 0x2e2188, Func Offset: 0x38
	// Line 90, Address: 0x2e2190, Func Offset: 0x40
	// Line 91, Address: 0x2e2198, Func Offset: 0x48
	// Line 92, Address: 0x2e21a0, Func Offset: 0x50
	// Line 93, Address: 0x2e21a8, Func Offset: 0x58
	// Line 94, Address: 0x2e21b0, Func Offset: 0x60
	// Line 95, Address: 0x2e21b8, Func Offset: 0x68
	// Line 98, Address: 0x2e21c0, Func Offset: 0x70
	// Line 100, Address: 0x2e21d0, Func Offset: 0x80
	// Line 101, Address: 0x2e21d8, Func Offset: 0x88
	// Line 104, Address: 0x2e21e0, Func Offset: 0x90
	// Line 105, Address: 0x2e21e8, Func Offset: 0x98
	// Line 108, Address: 0x2e21f4, Func Offset: 0xa4
	// Func End, Address: 0x2e2204, Func Offset: 0xb4
}

