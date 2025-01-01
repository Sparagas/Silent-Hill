typedef struct sgAnime;
typedef struct _anon0;
typedef struct sfObj;
typedef struct _EventDriver;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef enum sgIKSolveResult : unsigned char;
typedef struct sgQTNode;
typedef struct sgQTObject;
typedef struct _anon4;
typedef struct _anon5;
typedef struct sgIKHandle;
typedef struct _anon6;
typedef struct sgBone;
typedef struct _anon7;
typedef struct _anon8;
typedef struct sfOffsetAABB;
typedef struct _anon9;
typedef union sfCldBody;
typedef struct _anon10;
typedef enum GameItem : unsigned char;
typedef struct sfCldPart;
typedef struct _anon11;
typedef struct _anon12;
typedef union _anon13;
typedef struct sgSVModel;
typedef struct sfCharacter;
typedef struct _anon14;
typedef struct _anon15;
typedef struct EventFlag;
typedef struct sfCldObject;

typedef void(*type_0)(_anon14*, int, int, float*);
typedef int(*type_2)(sfObj*);
typedef int(*type_4)(sfObj*);
typedef int(*type_5)(sfObj*);
typedef int(*type_6)(sfObj*);
typedef int(*type_7)(sfObj*);
typedef sgIKSolveResult(*type_11)();
typedef void(*type_13)(sfObj*);
typedef void(*type_16)(sgAnime*, int);
typedef void(*type_25)(sfObj*);
typedef void(*type_29)(sfObj*);
typedef void(*type_30)(sfObj*);

typedef _anon13 type_1[10];
typedef float type_3[4];
typedef float type_8[4][2];
typedef _anon13 type_9[4];
typedef float type_10[4][24];
typedef float type_12[4];
typedef unsigned char type_14[3];
typedef void* type_15[4];
typedef _anon4 type_17[6];
typedef short type_18[2];
typedef unsigned short type_19[2];
typedef _anon13 type_20[256];
typedef char type_21[4];
typedef float type_22[4][4];
typedef unsigned char type_23[4];
typedef unsigned char type_24[4];
typedef float type_26[1];
typedef int type_27[1];
typedef unsigned char type_28[320];
typedef float type_31[4];
typedef sfCldPart* type_32[6];
typedef unsigned char type_33[3];

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

struct _anon0
{
	int id;
	float x;
	float y;
	float z;
	float rot;
	int id1;
	int id2;
	int id3;
	int id4;
	_anon13 dmy[10];
};

struct sfObj
{
	_anon13 fwork[256];
	_anon13* work;
	void(*func)(sfObj*);
	_anon13* work_pt0;
	_anon13* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon13* sys_work;
	_anon13* scene_work;
	_anon13* event_work;
	_anon13* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

struct _EventDriver
{
	int evnum;
	int(*trgchk)(sfObj*);
	int(*init)(sfObj*);
	int(*exec)(sfObj*);
	int(*draw)(sfObj*);
	int(*end)(sfObj*);
	unsigned int* file;
	_anon13 val[4];
};

struct _anon1
{
	sfCldPart cld_part;
	sgBone bone;
	_anon7 pool;
	float poly[4][24];
	int map_hit_id;
};

struct _anon2
{
	_anon12 model;
	_anon1 cld;
	unsigned int timer;
	unsigned char draw_flag;
};

struct _anon3
{
	unsigned int timer;
	int fade_depth;
	GameItem kind;
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

struct sgQTNode
{
	int dummy;
};

struct sgQTObject
{
	_anon9 bounding_ball;
	sgQTObject* next;
	sgQTObject* prev;
};

struct _anon4
{
	unsigned int model_id;
	unsigned int tex_id;
};

struct _anon5
{
	sfCharacter chara;
	int kind;
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

struct _anon6
{
	sfCharacter chara;
	sfCldObject cld_obj;
	sfCldPart cld_part;
	float alpha;
	unsigned long timer;
	unsigned char draw_flag;
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

struct _anon7
{
	int n_polygons;
	int polygons_offset;
};

struct _anon8
{
	float start[4];
	float end[4];
};

struct sfOffsetAABB
{
	_anon10 aabb;
	float offset[4];
};

struct _anon9
{
	float center[4];
	float radius;
};

union sfCldBody
{
	_anon11 obb;
	_anon10 aabb;
	sfOffsetAABB offset_aabb;
	_anon8 line;
	_anon9 sphere;
};

struct _anon10
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

struct _anon11
{
	float mat[4][4];
	float half_w[4];
};

struct _anon12
{
	void* texture_normal;
	void* texture_global;
	void* texture_semitrans;
	void* model_data;
	sgBone* parent_bone;
};

union _anon13
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

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
};

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon15 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
};

struct _anon14
{
	unsigned long tex0;
	unsigned long clamp;
};

struct _anon15
{
	void* model;
	void* texture;
	void* texture_global;
	float matrices[4][4];
	float* weights;
	float tex_crops[4];
	void(*texture_load_func)(_anon14*, int, int, float*);
	int equip_flag;
};

struct EventFlag
{
	unsigned char flag[320];
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

EventFlag event_flag;
_EventDriver ev_home0_ie24_141_2;
_EventDriver ev_home0_ie24_141_3;
_EventDriver ev_home0_ie24_141_4;
_EventDriver ev_home0_ie24_141_5;
_EventDriver ev_home0_ie24_141_6;
_anon4 tbl[6];
float sg_vector_unit_y[4];
_EventDriver ev_home0_ie24_118_se;
_EventDriver ev_home0_ie24_2280;
_EventDriver ev_home0_ie24_144b;
float sg_matrix_unit[4][4];
void(*reset_transparency)(sfObj*);
void(*set_transparency)(sfObj*);
_EventDriver ev_home0_ie17_135;

int ev_home0_ie24_141_init(sfObj* obj);
int ev_home0_ie24_141_exec_base(sfObj* obj, GameItem kind, unsigned short flag);
int ev_home0_ie24_141_2_exec(sfObj* obj);
int ev_home0_ie24_141_3_exec(sfObj* obj);
int ev_home0_ie24_141_4_exec(sfObj* obj);
int ev_home0_ie24_141_5_exec(sfObj* obj);
int ev_home0_ie24_141_6_exec(sfObj* obj);
int ev_home0_ie24_141_end();
int ev_home0_ie24_redpaper_base_init(sfObj* obj, int kind);
int ev_home0_ie24_redpaper_init_0(sfObj* obj);
int ev_home0_ie24_redpaper_init_1(sfObj* obj);
int ev_home0_ie24_redpaper_init_2(sfObj* obj);
int ev_home0_ie24_redpaper_init_3(sfObj* obj);
int ev_home0_ie24_redpaper_init_4(sfObj* obj);
int ev_home0_ie24_redpaper_init_5(sfObj* obj);
int ev_home0_ie24_redpaper_exec();
int ev_home0_ie24_redpaper_draw(sfObj* obj);
int ev_home0_ie24_redpaper_end(sfObj* obj);
int ev_home0_ie24_118_se_exec(sfObj* obj);
int ev_home0_ie24_2280_trgchk();
int ev_home0_ie24_2280_exec(sfObj* obj);
int ev_home0_ie24_144b_trgchk();
int ev_home0_ie24_144b_init();
int ev_home0_ie24_144b_exec(sfObj* obj);
int ev_ie01_rocker_init(sfObj* obj);
int ev_ie01_rocker_exec(sfObj* obj);
int ev_ie01_rocker_draw(sfObj* obj);
int ev_ie01_rocker_end();
void ev_ie05_refrigerator_cld_init(_anon1* cld);
void ev_ie05_refrigerator_cld_pos(_anon1* cld, float* pos, float rot);
void ev_ie05_refrigerator_cld_end(_anon1* cld);
int ev_ie05_refrigerator_init(sfObj* obj);
int ev_ie05_refrigerator_exec(sfObj* obj);
int ev_ie05_refrigerator_draw(sfObj* obj);
int ev_ie05_refrigerator_end(sfObj* obj);
void set_transparency(sfObj* obj);
void reset_transparency();
void ev_home0_killer_init(sfObj* obj);
float get_ratio(int cnt, int max);
void ev_home0_killer_exec(sfObj* obj);
void ev_home0_killer_draw();
void ev_home0_killer_end(sfObj* obj);
int ev_cam_ie01_man_trgchk();
int ev_cam_ie17_man_trgchk();
int ev_ie24_footmark_init(sfObj* obj);
int ev_ie24_footmark_exec();
int ev_ie24_footmark_draw(sfObj* obj);
int ev_ie24_footmark_end();
int ev_cam_126_127_trgchk();

// 
// Start address: 0x1ed43e0
int ev_home0_ie24_141_init(sfObj* obj)
{
	// Line 241, Address: 0x1ed43e0, Func Offset: 0
	// Func End, Address: 0x1ed43e8, Func Offset: 0x8
	// Line 136, Address: 0x1ed43e0, Func Offset: 0
	// Line 137, Address: 0x1ed43e4, Func Offset: 0x4
	// Line 136, Address: 0x1ed43e8, Func Offset: 0x8
	// Line 137, Address: 0x1ed43f0, Func Offset: 0x10
	// Line 139, Address: 0x1ed4400, Func Offset: 0x20
	// Line 142, Address: 0x1ed4408, Func Offset: 0x28
	// Line 143, Address: 0x1ed440c, Func Offset: 0x2c
	// Line 145, Address: 0x1ed4410, Func Offset: 0x30
	// Line 148, Address: 0x1ed4418, Func Offset: 0x38
	// Line 147, Address: 0x1ed441c, Func Offset: 0x3c
	// Line 148, Address: 0x1ed4420, Func Offset: 0x40
	// Func End, Address: 0x1ed442c, Func Offset: 0x4c
}

// 
// Start address: 0x1ed4430
int ev_home0_ie24_141_exec_base(sfObj* obj, GameItem kind, unsigned short flag)
{
	int rtv;
	_anon3* wk;
	// Line 270, Address: 0x1ed4430, Func Offset: 0
	// Line 275, Address: 0x1ed4458, Func Offset: 0x28
	// Line 278, Address: 0x1ed4478, Func Offset: 0x48
	// Line 283, Address: 0x1ed4480, Func Offset: 0x50
	// Line 285, Address: 0x1ed4484, Func Offset: 0x54
	// Line 287, Address: 0x1ed4488, Func Offset: 0x58
	// Func End, Address: 0x1ed4490, Func Offset: 0x60
	// Line 220, Address: 0x1ed4430, Func Offset: 0
	// Line 228, Address: 0x1ed4438, Func Offset: 0x8
	// Line 220, Address: 0x1ed443c, Func Offset: 0xc
	// Line 228, Address: 0x1ed4440, Func Offset: 0x10
	// Line 232, Address: 0x1ed4448, Func Offset: 0x18
	// Line 234, Address: 0x1ed445c, Func Offset: 0x2c
	// Line 235, Address: 0x1ed446c, Func Offset: 0x3c
	// Line 239, Address: 0x1ed448c, Func Offset: 0x5c
	// Line 244, Address: 0x1ed4498, Func Offset: 0x68
	// Line 239, Address: 0x1ed449c, Func Offset: 0x6c
	// Line 244, Address: 0x1ed44a8, Func Offset: 0x78
	// Line 239, Address: 0x1ed44ac, Func Offset: 0x7c
	// Line 244, Address: 0x1ed44b0, Func Offset: 0x80
	// Line 245, Address: 0x1ed44c0, Func Offset: 0x90
	// Line 250, Address: 0x1ed44e8, Func Offset: 0xb8
	// Line 253, Address: 0x1ed4504, Func Offset: 0xd4
	// Line 257, Address: 0x1ed4534, Func Offset: 0x104
	// Line 258, Address: 0x1ed4548, Func Offset: 0x118
	// Line 259, Address: 0x1ed4550, Func Offset: 0x120
	// Line 260, Address: 0x1ed4558, Func Offset: 0x128
	// Line 262, Address: 0x1ed4568, Func Offset: 0x138
	// Line 265, Address: 0x1ed4578, Func Offset: 0x148
	// Func End, Address: 0x1ed458c, Func Offset: 0x15c
	// Line 151, Address: 0x1ed4430, Func Offset: 0
	// Line 152, Address: 0x1ed4450, Func Offset: 0x20
	// Line 154, Address: 0x1ed4454, Func Offset: 0x24
	// Line 157, Address: 0x1ed445c, Func Offset: 0x2c
	// Line 158, Address: 0x1ed4484, Func Offset: 0x54
	// Line 160, Address: 0x1ed4488, Func Offset: 0x58
	// Line 161, Address: 0x1ed4490, Func Offset: 0x60
	// Line 163, Address: 0x1ed4494, Func Offset: 0x64
	// Line 164, Address: 0x1ed449c, Func Offset: 0x6c
	// Line 165, Address: 0x1ed44a4, Func Offset: 0x74
	// Line 167, Address: 0x1ed44a8, Func Offset: 0x78
	// Line 172, Address: 0x1ed44c0, Func Offset: 0x90
	// Line 174, Address: 0x1ed44c8, Func Offset: 0x98
	// Line 183, Address: 0x1ed44d0, Func Offset: 0xa0
	// Line 185, Address: 0x1ed44d4, Func Offset: 0xa4
	// Line 186, Address: 0x1ed44dc, Func Offset: 0xac
	// Line 188, Address: 0x1ed44e0, Func Offset: 0xb0
	// Line 190, Address: 0x1ed44f0, Func Offset: 0xc0
	// Line 191, Address: 0x1ed4520, Func Offset: 0xf0
	// Line 195, Address: 0x1ed4524, Func Offset: 0xf4
	// Line 197, Address: 0x1ed452c, Func Offset: 0xfc
	// Line 198, Address: 0x1ed4534, Func Offset: 0x104
	// Line 205, Address: 0x1ed4538, Func Offset: 0x108
	// Line 207, Address: 0x1ed453c, Func Offset: 0x10c
	// Line 209, Address: 0x1ed4544, Func Offset: 0x114
	// Line 211, Address: 0x1ed4548, Func Offset: 0x118
	// Line 214, Address: 0x1ed4558, Func Offset: 0x128
	// Line 216, Address: 0x1ed4560, Func Offset: 0x130
	// Line 218, Address: 0x1ed4568, Func Offset: 0x138
	// Line 222, Address: 0x1ed4570, Func Offset: 0x140
	// Line 224, Address: 0x1ed4584, Func Offset: 0x154
	// Line 230, Address: 0x1ed4588, Func Offset: 0x158
	// Line 231, Address: 0x1ed458c, Func Offset: 0x15c
	// Func End, Address: 0x1ed45a8, Func Offset: 0x178
	// Line 137, Address: 0x1ed4430, Func Offset: 0
	// Line 138, Address: 0x1ed4438, Func Offset: 0x8
	// Line 140, Address: 0x1ed4440, Func Offset: 0x10
	// Line 139, Address: 0x1ed4444, Func Offset: 0x14
	// Line 140, Address: 0x1ed4448, Func Offset: 0x18
	// Func End, Address: 0x1ed4450, Func Offset: 0x20
}

// 
// Start address: 0x1ed45b0
int ev_home0_ie24_141_2_exec(sfObj* obj)
{
	// Line 165, Address: 0x1ed45b0, Func Offset: 0
	// Line 167, Address: 0x1ed45b4, Func Offset: 0x4
	// Line 165, Address: 0x1ed45b8, Func Offset: 0x8
	// Line 167, Address: 0x1ed45c0, Func Offset: 0x10
	// Line 168, Address: 0x1ed45e4, Func Offset: 0x34
	// Line 169, Address: 0x1ed45e8, Func Offset: 0x38
	// Line 171, Address: 0x1ed4610, Func Offset: 0x60
	// Line 173, Address: 0x1ed4614, Func Offset: 0x64
	// Line 174, Address: 0x1ed461c, Func Offset: 0x6c
	// Line 175, Address: 0x1ed4620, Func Offset: 0x70
	// Line 176, Address: 0x1ed4644, Func Offset: 0x94
	// Line 177, Address: 0x1ed4648, Func Offset: 0x98
	// Line 178, Address: 0x1ed464c, Func Offset: 0x9c
	// Line 179, Address: 0x1ed4654, Func Offset: 0xa4
	// Line 180, Address: 0x1ed4658, Func Offset: 0xa8
	// Line 181, Address: 0x1ed465c, Func Offset: 0xac
	// Line 182, Address: 0x1ed4664, Func Offset: 0xb4
	// Line 183, Address: 0x1ed4668, Func Offset: 0xb8
	// Line 186, Address: 0x1ed466c, Func Offset: 0xbc
	// Line 187, Address: 0x1ed4674, Func Offset: 0xc4
	// Line 188, Address: 0x1ed4678, Func Offset: 0xc8
	// Line 189, Address: 0x1ed4680, Func Offset: 0xd0
	// Line 190, Address: 0x1ed4684, Func Offset: 0xd4
	// Line 191, Address: 0x1ed46ac, Func Offset: 0xfc
	// Line 194, Address: 0x1ed46b4, Func Offset: 0x104
	// Line 195, Address: 0x1ed46b8, Func Offset: 0x108
	// Line 196, Address: 0x1ed46bc, Func Offset: 0x10c
	// Func End, Address: 0x1ed46cc, Func Offset: 0x11c
	// Line 242, Address: 0x1ed45b0, Func Offset: 0
	// Func End, Address: 0x1ed45bc, Func Offset: 0xc
}

// 
// Start address: 0x1ed45c0
int ev_home0_ie24_141_3_exec(sfObj* obj)
{
	// Line 452, Address: 0x1ed45c0, Func Offset: 0
	// Line 453, Address: 0x1ed45d0, Func Offset: 0x10
	// Func End, Address: 0x1ed45d8, Func Offset: 0x18
	// Line 99, Address: 0x1ed45c0, Func Offset: 0
	// Line 103, Address: 0x1ed45c8, Func Offset: 0x8
	// Line 106, Address: 0x1ed45d4, Func Offset: 0x14
	// Line 108, Address: 0x1ed45dc, Func Offset: 0x1c
	// Func End, Address: 0x1ed45ec, Func Offset: 0x2c
	// Line 247, Address: 0x1ed45c0, Func Offset: 0
	// Func End, Address: 0x1ed45cc, Func Offset: 0xc
}

// 
// Start address: 0x1ed45d0
int ev_home0_ie24_141_4_exec(sfObj* obj)
{
	// Line 252, Address: 0x1ed45d0, Func Offset: 0
	// Func End, Address: 0x1ed45dc, Func Offset: 0xc
	// Line 207, Address: 0x1ed45d0, Func Offset: 0
	// Line 211, Address: 0x1ed45d4, Func Offset: 0x4
	// Line 207, Address: 0x1ed45d8, Func Offset: 0x8
	// Line 211, Address: 0x1ed45dc, Func Offset: 0xc
	// Line 207, Address: 0x1ed45e0, Func Offset: 0x10
	// Line 211, Address: 0x1ed45fc, Func Offset: 0x2c
	// Line 213, Address: 0x1ed4600, Func Offset: 0x30
	// Line 215, Address: 0x1ed4608, Func Offset: 0x38
	// Line 220, Address: 0x1ed460c, Func Offset: 0x3c
	// Line 216, Address: 0x1ed4610, Func Offset: 0x40
	// Line 217, Address: 0x1ed4614, Func Offset: 0x44
	// Line 220, Address: 0x1ed4618, Func Offset: 0x48
	// Line 221, Address: 0x1ed4624, Func Offset: 0x54
	// Line 223, Address: 0x1ed462c, Func Offset: 0x5c
	// Line 221, Address: 0x1ed4630, Func Offset: 0x60
	// Line 222, Address: 0x1ed4640, Func Offset: 0x70
	// Line 223, Address: 0x1ed4650, Func Offset: 0x80
	// Line 224, Address: 0x1ed465c, Func Offset: 0x8c
	// Line 230, Address: 0x1ed4664, Func Offset: 0x94
	// Line 231, Address: 0x1ed4688, Func Offset: 0xb8
	// Line 233, Address: 0x1ed46a8, Func Offset: 0xd8
	// Line 235, Address: 0x1ed46bc, Func Offset: 0xec
	// Line 236, Address: 0x1ed46e4, Func Offset: 0x114
	// Line 235, Address: 0x1ed46e8, Func Offset: 0x118
	// Line 237, Address: 0x1ed46f4, Func Offset: 0x124
	// Line 240, Address: 0x1ed4710, Func Offset: 0x140
	// Line 238, Address: 0x1ed4718, Func Offset: 0x148
	// Line 237, Address: 0x1ed471c, Func Offset: 0x14c
	// Line 240, Address: 0x1ed4724, Func Offset: 0x154
	// Line 241, Address: 0x1ed472c, Func Offset: 0x15c
	// Line 244, Address: 0x1ed4738, Func Offset: 0x168
	// Line 243, Address: 0x1ed4758, Func Offset: 0x188
	// Line 244, Address: 0x1ed475c, Func Offset: 0x18c
	// Func End, Address: 0x1ed4764, Func Offset: 0x194
	// Line 193, Address: 0x1ed45d0, Func Offset: 0
	// Line 194, Address: 0x1ed45e0, Func Offset: 0x10
	// Line 195, Address: 0x1ed45e8, Func Offset: 0x18
	// Line 198, Address: 0x1ed45f8, Func Offset: 0x28
	// Line 199, Address: 0x1ed4608, Func Offset: 0x38
	// Line 202, Address: 0x1ed4618, Func Offset: 0x48
	// Line 204, Address: 0x1ed4634, Func Offset: 0x64
	// Line 206, Address: 0x1ed4638, Func Offset: 0x68
	// Line 209, Address: 0x1ed4640, Func Offset: 0x70
	// Line 211, Address: 0x1ed4648, Func Offset: 0x78
	// Line 213, Address: 0x1ed464c, Func Offset: 0x7c
	// Line 215, Address: 0x1ed4650, Func Offset: 0x80
	// Line 216, Address: 0x1ed4660, Func Offset: 0x90
	// Line 217, Address: 0x1ed466c, Func Offset: 0x9c
	// Line 219, Address: 0x1ed4670, Func Offset: 0xa0
	// Line 220, Address: 0x1ed4678, Func Offset: 0xa8
	// Func End, Address: 0x1ed468c, Func Offset: 0xbc
}

// 
// Start address: 0x1ed45e0
int ev_home0_ie24_141_5_exec(sfObj* obj)
{
	// Line 469, Address: 0x1ed45e0, Func Offset: 0
	// Line 470, Address: 0x1ed45f0, Func Offset: 0x10
	// Func End, Address: 0x1ed45f8, Func Offset: 0x18
	// Line 163, Address: 0x1ed45e0, Func Offset: 0
	// Line 167, Address: 0x1ed460c, Func Offset: 0x2c
	// Line 168, Address: 0x1ed4610, Func Offset: 0x30
	// Line 171, Address: 0x1ed461c, Func Offset: 0x3c
	// Line 173, Address: 0x1ed4624, Func Offset: 0x44
	// Line 174, Address: 0x1ed4628, Func Offset: 0x48
	// Line 176, Address: 0x1ed462c, Func Offset: 0x4c
	// Line 178, Address: 0x1ed4630, Func Offset: 0x50
	// Func End, Address: 0x1ed4638, Func Offset: 0x58
	// Line 257, Address: 0x1ed45e0, Func Offset: 0
	// Func End, Address: 0x1ed45ec, Func Offset: 0xc
}

// 
// Start address: 0x1ed45f0
int ev_home0_ie24_141_6_exec(sfObj* obj)
{
	// Line 112, Address: 0x1ed45f0, Func Offset: 0
	// Line 116, Address: 0x1ed45f8, Func Offset: 0x8
	// Line 119, Address: 0x1ed4604, Func Offset: 0x14
	// Line 120, Address: 0x1ed460c, Func Offset: 0x1c
	// Func End, Address: 0x1ed461c, Func Offset: 0x2c
	// Line 262, Address: 0x1ed45f0, Func Offset: 0
	// Func End, Address: 0x1ed45fc, Func Offset: 0xc
}

// 
// Start address: 0x1ed4600
int ev_home0_ie24_141_end()
{
	// Line 472, Address: 0x1ed4600, Func Offset: 0
	// Line 474, Address: 0x1ed4608, Func Offset: 0x8
	// Line 478, Address: 0x1ed4650, Func Offset: 0x50
	// Func End, Address: 0x1ed465c, Func Offset: 0x5c
	// Line 276, Address: 0x1ed4600, Func Offset: 0
	// Func End, Address: 0x1ed4608, Func Offset: 0x8
}

// 
// Start address: 0x1ed4610
int ev_home0_ie24_redpaper_base_init(sfObj* obj, int kind)
{
	_anon5* dst;
	_anon4* src;
	_anon0* fig;
	float pos[4];
	float r[4];
	// Line 365, Address: 0x1ed4610, Func Offset: 0
	// Line 366, Address: 0x1ed4630, Func Offset: 0x20
	// Line 368, Address: 0x1ed4638, Func Offset: 0x28
	// Line 369, Address: 0x1ed4650, Func Offset: 0x40
	// Line 372, Address: 0x1ed4658, Func Offset: 0x48
	// Line 371, Address: 0x1ed465c, Func Offset: 0x4c
	// Line 372, Address: 0x1ed4664, Func Offset: 0x54
	// Line 377, Address: 0x1ed466c, Func Offset: 0x5c
	// Line 381, Address: 0x1ed4694, Func Offset: 0x84
	// Line 385, Address: 0x1ed4698, Func Offset: 0x88
	// Line 381, Address: 0x1ed46a0, Func Offset: 0x90
	// Line 382, Address: 0x1ed46a4, Func Offset: 0x94
	// Line 383, Address: 0x1ed46ac, Func Offset: 0x9c
	// Line 385, Address: 0x1ed46b4, Func Offset: 0xa4
	// Line 388, Address: 0x1ed46bc, Func Offset: 0xac
	// Line 389, Address: 0x1ed46d0, Func Offset: 0xc0
	// Line 391, Address: 0x1ed46dc, Func Offset: 0xcc
	// Line 396, Address: 0x1ed46e0, Func Offset: 0xd0
	// Line 395, Address: 0x1ed46e8, Func Offset: 0xd8
	// Line 396, Address: 0x1ed46ec, Func Offset: 0xdc
	// Func End, Address: 0x1ed4700, Func Offset: 0xf0
}

// 
// Start address: 0x1ed4700
int ev_home0_ie24_redpaper_init_0(sfObj* obj)
{
	// Line 156, Address: 0x1ed4700, Func Offset: 0
	// Line 157, Address: 0x1ed470c, Func Offset: 0xc
	// Line 159, Address: 0x1ed4714, Func Offset: 0x14
	// Line 161, Address: 0x1ed471c, Func Offset: 0x1c
	// Line 162, Address: 0x1ed4724, Func Offset: 0x24
	// Line 163, Address: 0x1ed4728, Func Offset: 0x28
	// Func End, Address: 0x1ed4734, Func Offset: 0x34
	// Line 399, Address: 0x1ed4700, Func Offset: 0
	// Line 400, Address: 0x1ed4708, Func Offset: 0x8
	// Line 401, Address: 0x1ed4710, Func Offset: 0x10
	// Line 403, Address: 0x1ed4714, Func Offset: 0x14
	// Line 401, Address: 0x1ed4718, Func Offset: 0x18
	// Line 404, Address: 0x1ed4728, Func Offset: 0x28
	// Func End, Address: 0x1ed4734, Func Offset: 0x34
}

// 
// Start address: 0x1ed4740
int ev_home0_ie24_redpaper_init_1(sfObj* obj)
{
	// Line 166, Address: 0x1ed4740, Func Offset: 0
	// Line 167, Address: 0x1ed474c, Func Offset: 0xc
	// Line 170, Address: 0x1ed4754, Func Offset: 0x14
	// Line 171, Address: 0x1ed475c, Func Offset: 0x1c
	// Line 172, Address: 0x1ed4760, Func Offset: 0x20
	// Func End, Address: 0x1ed476c, Func Offset: 0x2c
	// Line 227, Address: 0x1ed4740, Func Offset: 0
	// Line 229, Address: 0x1ed4744, Func Offset: 0x4
	// Line 227, Address: 0x1ed4748, Func Offset: 0x8
	// Line 229, Address: 0x1ed474c, Func Offset: 0xc
	// Line 227, Address: 0x1ed4750, Func Offset: 0x10
	// Line 229, Address: 0x1ed4754, Func Offset: 0x14
	// Line 227, Address: 0x1ed4758, Func Offset: 0x18
	// Line 229, Address: 0x1ed4760, Func Offset: 0x20
	// Line 228, Address: 0x1ed4764, Func Offset: 0x24
	// Line 230, Address: 0x1ed4768, Func Offset: 0x28
	// Line 229, Address: 0x1ed476c, Func Offset: 0x2c
	// Line 230, Address: 0x1ed4770, Func Offset: 0x30
	// Line 232, Address: 0x1ed47a0, Func Offset: 0x60
	// Line 235, Address: 0x1ed47b4, Func Offset: 0x74
	// Line 233, Address: 0x1ed47b8, Func Offset: 0x78
	// Line 235, Address: 0x1ed47bc, Func Offset: 0x7c
	// Line 236, Address: 0x1ed47c4, Func Offset: 0x84
	// Line 238, Address: 0x1ed47d0, Func Offset: 0x90
	// Line 241, Address: 0x1ed47d8, Func Offset: 0x98
	// Line 242, Address: 0x1ed47fc, Func Offset: 0xbc
	// Line 244, Address: 0x1ed4804, Func Offset: 0xc4
	// Line 245, Address: 0x1ed480c, Func Offset: 0xcc
	// Line 246, Address: 0x1ed4810, Func Offset: 0xd0
	// Line 253, Address: 0x1ed4824, Func Offset: 0xe4
	// Line 247, Address: 0x1ed4828, Func Offset: 0xe8
	// Line 253, Address: 0x1ed4834, Func Offset: 0xf4
	// Line 247, Address: 0x1ed4838, Func Offset: 0xf8
	// Line 253, Address: 0x1ed483c, Func Offset: 0xfc
	// Line 251, Address: 0x1ed4840, Func Offset: 0x100
	// Line 253, Address: 0x1ed4844, Func Offset: 0x104
	// Line 254, Address: 0x1ed4850, Func Offset: 0x110
	// Line 257, Address: 0x1ed485c, Func Offset: 0x11c
	// Line 259, Address: 0x1ed4874, Func Offset: 0x134
	// Line 261, Address: 0x1ed4888, Func Offset: 0x148
	// Line 263, Address: 0x1ed4894, Func Offset: 0x154
	// Line 264, Address: 0x1ed4898, Func Offset: 0x158
	// Line 268, Address: 0x1ed48c0, Func Offset: 0x180
	// Line 267, Address: 0x1ed48c8, Func Offset: 0x188
	// Line 268, Address: 0x1ed48cc, Func Offset: 0x18c
	// Func End, Address: 0x1ed48dc, Func Offset: 0x19c
	// Line 407, Address: 0x1ed4740, Func Offset: 0
	// Line 408, Address: 0x1ed4748, Func Offset: 0x8
	// Line 410, Address: 0x1ed4750, Func Offset: 0x10
	// Line 409, Address: 0x1ed4754, Func Offset: 0x14
	// Line 410, Address: 0x1ed4758, Func Offset: 0x18
	// Func End, Address: 0x1ed4760, Func Offset: 0x20
}

// 
// Start address: 0x1ed4760
int ev_home0_ie24_redpaper_init_2(sfObj* obj)
{
	// Line 413, Address: 0x1ed4760, Func Offset: 0
	// Line 414, Address: 0x1ed4768, Func Offset: 0x8
	// Line 416, Address: 0x1ed4770, Func Offset: 0x10
	// Line 415, Address: 0x1ed4774, Func Offset: 0x14
	// Line 416, Address: 0x1ed4778, Func Offset: 0x18
	// Func End, Address: 0x1ed4780, Func Offset: 0x20
}

// 
// Start address: 0x1ed4780
int ev_home0_ie24_redpaper_init_3(sfObj* obj)
{
	// Line 419, Address: 0x1ed4780, Func Offset: 0
	// Line 420, Address: 0x1ed4788, Func Offset: 0x8
	// Line 422, Address: 0x1ed4790, Func Offset: 0x10
	// Line 421, Address: 0x1ed4794, Func Offset: 0x14
	// Line 422, Address: 0x1ed4798, Func Offset: 0x18
	// Func End, Address: 0x1ed47a0, Func Offset: 0x20
}

// 
// Start address: 0x1ed47a0
int ev_home0_ie24_redpaper_init_4(sfObj* obj)
{
	// Line 425, Address: 0x1ed47a0, Func Offset: 0
	// Line 426, Address: 0x1ed47a8, Func Offset: 0x8
	// Line 428, Address: 0x1ed47b0, Func Offset: 0x10
	// Line 427, Address: 0x1ed47b4, Func Offset: 0x14
	// Line 428, Address: 0x1ed47b8, Func Offset: 0x18
	// Func End, Address: 0x1ed47c0, Func Offset: 0x20
	// Line 373, Address: 0x1ed47a0, Func Offset: 0
	// Line 377, Address: 0x1ed47a4, Func Offset: 0x4
	// Line 373, Address: 0x1ed47a8, Func Offset: 0x8
	// Line 377, Address: 0x1ed47ac, Func Offset: 0xc
	// Line 374, Address: 0x1ed47b0, Func Offset: 0x10
	// Line 377, Address: 0x1ed47b4, Func Offset: 0x14
	// Line 378, Address: 0x1ed47c0, Func Offset: 0x20
	// Line 377, Address: 0x1ed47c4, Func Offset: 0x24
	// Line 378, Address: 0x1ed47c8, Func Offset: 0x28
	// Line 379, Address: 0x1ed47ec, Func Offset: 0x4c
	// Line 380, Address: 0x1ed4800, Func Offset: 0x60
	// Line 381, Address: 0x1ed480c, Func Offset: 0x6c
	// Func End, Address: 0x1ed4818, Func Offset: 0x78
}

// 
// Start address: 0x1ed47c0
int ev_home0_ie24_redpaper_init_5(sfObj* obj)
{
	// Line 253, Address: 0x1ed47c0, Func Offset: 0
	// Line 254, Address: 0x1ed47c8, Func Offset: 0x8
	// Func End, Address: 0x1ed47d0, Func Offset: 0x10
	// Line 431, Address: 0x1ed47c0, Func Offset: 0
	// Line 432, Address: 0x1ed47c8, Func Offset: 0x8
	// Line 434, Address: 0x1ed47d0, Func Offset: 0x10
	// Line 433, Address: 0x1ed47d4, Func Offset: 0x14
	// Line 434, Address: 0x1ed47d8, Func Offset: 0x18
	// Func End, Address: 0x1ed47e0, Func Offset: 0x20
	// Line 256, Address: 0x1ed47c0, Func Offset: 0
	// Line 257, Address: 0x1ed47cc, Func Offset: 0xc
	// Line 258, Address: 0x1ed47d0, Func Offset: 0x10
	// Line 259, Address: 0x1ed47d8, Func Offset: 0x18
	// Line 261, Address: 0x1ed47e0, Func Offset: 0x20
	// Line 260, Address: 0x1ed47e4, Func Offset: 0x24
	// Line 261, Address: 0x1ed47e8, Func Offset: 0x28
	// Func End, Address: 0x1ed47f4, Func Offset: 0x34
}

// 
// Start address: 0x1ed47e0
int ev_home0_ie24_redpaper_exec()
{
	// Line 440, Address: 0x1ed47e0, Func Offset: 0
	// Func End, Address: 0x1ed47e8, Func Offset: 0x8
}

// 
// Start address: 0x1ed47f0
int ev_home0_ie24_redpaper_draw(sfObj* obj)
{
	_anon5* r_obj;
	// Line 580, Address: 0x1ed47f0, Func Offset: 0
	// Line 581, Address: 0x1ed4800, Func Offset: 0x10
	// Func End, Address: 0x1ed4808, Func Offset: 0x18
	// Line 443, Address: 0x1ed47f0, Func Offset: 0
	// Line 444, Address: 0x1ed4800, Func Offset: 0x10
	// Line 447, Address: 0x1ed4808, Func Offset: 0x18
	// Line 448, Address: 0x1ed4818, Func Offset: 0x28
	// Line 453, Address: 0x1ed4820, Func Offset: 0x30
	// Line 452, Address: 0x1ed4828, Func Offset: 0x38
	// Line 453, Address: 0x1ed482c, Func Offset: 0x3c
	// Func End, Address: 0x1ed4834, Func Offset: 0x44
}

// 
// Start address: 0x1ed4840
int ev_home0_ie24_redpaper_end(sfObj* obj)
{
	// Line 456, Address: 0x1ed4840, Func Offset: 0
	// Line 457, Address: 0x1ed484c, Func Offset: 0xc
	// Line 460, Address: 0x1ed4854, Func Offset: 0x14
	// Line 461, Address: 0x1ed485c, Func Offset: 0x1c
	// Line 464, Address: 0x1ed4860, Func Offset: 0x20
	// Line 463, Address: 0x1ed4864, Func Offset: 0x24
	// Line 464, Address: 0x1ed4868, Func Offset: 0x28
	// Func End, Address: 0x1ed4870, Func Offset: 0x30
}

// 
// Start address: 0x1ed4870
int ev_home0_ie24_118_se_exec(sfObj* obj)
{
	int rtv;
	float src[4];
	float pos[4];
	// Line 469, Address: 0x1ed4870, Func Offset: 0
	// Line 474, Address: 0x1ed487c, Func Offset: 0xc
	// Line 483, Address: 0x1ed4890, Func Offset: 0x20
	// Line 484, Address: 0x1ed4894, Func Offset: 0x24
	// Line 485, Address: 0x1ed489c, Func Offset: 0x2c
	// Line 487, Address: 0x1ed48a0, Func Offset: 0x30
	// Line 489, Address: 0x1ed48a8, Func Offset: 0x38
	// Line 490, Address: 0x1ed48b4, Func Offset: 0x44
	// Line 491, Address: 0x1ed48d0, Func Offset: 0x60
	// Line 498, Address: 0x1ed490c, Func Offset: 0x9c
	// Line 503, Address: 0x1ed4910, Func Offset: 0xa0
	// Line 504, Address: 0x1ed4914, Func Offset: 0xa4
	// Func End, Address: 0x1ed4924, Func Offset: 0xb4
}

// 
// Start address: 0x1ed4930
int ev_home0_ie24_2280_trgchk()
{
	int rtv;
	// Line 663, Address: 0x1ed4930, Func Offset: 0
	// Line 664, Address: 0x1ed4938, Func Offset: 0x8
	// Line 665, Address: 0x1ed4948, Func Offset: 0x18
	// Line 668, Address: 0x1ed4950, Func Offset: 0x20
	// Line 669, Address: 0x1ed49a8, Func Offset: 0x78
	// Func End, Address: 0x1ed49b4, Func Offset: 0x84
	// Line 99, Address: 0x1ed4930, Func Offset: 0
	// Line 98, Address: 0x1ed4934, Func Offset: 0x4
	// Line 99, Address: 0x1ed4938, Func Offset: 0x8
	// Line 102, Address: 0x1ed4950, Func Offset: 0x20
	// Line 106, Address: 0x1ed4958, Func Offset: 0x28
	// Func End, Address: 0x1ed4960, Func Offset: 0x30
	// Line 520, Address: 0x1ed4930, Func Offset: 0
	// Line 523, Address: 0x1ed4934, Func Offset: 0x4
	// Line 520, Address: 0x1ed4938, Func Offset: 0x8
	// Line 523, Address: 0x1ed4940, Func Offset: 0x10
	// Line 529, Address: 0x1ed4960, Func Offset: 0x30
	// Line 531, Address: 0x1ed4968, Func Offset: 0x38
	// Line 533, Address: 0x1ed497c, Func Offset: 0x4c
	// Line 537, Address: 0x1ed4980, Func Offset: 0x50
	// Line 538, Address: 0x1ed4984, Func Offset: 0x54
	// Func End, Address: 0x1ed4994, Func Offset: 0x64
}

// 
// Start address: 0x1ed49a0
int ev_home0_ie24_2280_exec(sfObj* obj)
{
	int rtv;
	float src[4];
	float pos[4];
	// Line 541, Address: 0x1ed49a0, Func Offset: 0
	// Line 546, Address: 0x1ed49b4, Func Offset: 0x14
	// Line 548, Address: 0x1ed49c8, Func Offset: 0x28
	// Line 551, Address: 0x1ed49e8, Func Offset: 0x48
	// Line 554, Address: 0x1ed49fc, Func Offset: 0x5c
	// Line 555, Address: 0x1ed4a04, Func Offset: 0x64
	// Line 556, Address: 0x1ed4a0c, Func Offset: 0x6c
	// Line 558, Address: 0x1ed4a10, Func Offset: 0x70
	// Line 560, Address: 0x1ed4a18, Func Offset: 0x78
	// Line 561, Address: 0x1ed4a24, Func Offset: 0x84
	// Line 562, Address: 0x1ed4a40, Func Offset: 0xa0
	// Line 563, Address: 0x1ed4a7c, Func Offset: 0xdc
	// Line 564, Address: 0x1ed4a84, Func Offset: 0xe4
	// Line 569, Address: 0x1ed4a88, Func Offset: 0xe8
	// Line 570, Address: 0x1ed4a8c, Func Offset: 0xec
	// Func End, Address: 0x1ed4aa0, Func Offset: 0x100
	// Line 510, Address: 0x1ed49a0, Func Offset: 0
	// Line 522, Address: 0x1ed49b0, Func Offset: 0x10
	// Line 523, Address: 0x1ed49b8, Func Offset: 0x18
	// Line 525, Address: 0x1ed49c4, Func Offset: 0x24
	// Line 529, Address: 0x1ed49cc, Func Offset: 0x2c
	// Line 531, Address: 0x1ed49e0, Func Offset: 0x40
	// Line 532, Address: 0x1ed49f0, Func Offset: 0x50
	// Line 534, Address: 0x1ed4a10, Func Offset: 0x70
	// Line 539, Address: 0x1ed4a1c, Func Offset: 0x7c
	// Line 534, Address: 0x1ed4a20, Func Offset: 0x80
	// Line 539, Address: 0x1ed4a2c, Func Offset: 0x8c
	// Line 547, Address: 0x1ed4a38, Func Offset: 0x98
	// Line 552, Address: 0x1ed4a5c, Func Offset: 0xbc
	// Line 556, Address: 0x1ed4a8c, Func Offset: 0xec
	// Line 557, Address: 0x1ed4aa0, Func Offset: 0x100
	// Line 558, Address: 0x1ed4aa8, Func Offset: 0x108
	// Line 559, Address: 0x1ed4ab0, Func Offset: 0x110
	// Line 561, Address: 0x1ed4ac0, Func Offset: 0x120
	// Line 563, Address: 0x1ed4ad0, Func Offset: 0x130
	// Func End, Address: 0x1ed4ae4, Func Offset: 0x144
}

// 
// Start address: 0x1ed4aa0
int ev_home0_ie24_144b_trgchk()
{
	int rtv;
	// Line 586, Address: 0x1ed4aa0, Func Offset: 0
	// Line 589, Address: 0x1ed4aa4, Func Offset: 0x4
	// Line 586, Address: 0x1ed4aa8, Func Offset: 0x8
	// Line 589, Address: 0x1ed4ab0, Func Offset: 0x10
	// Line 594, Address: 0x1ed4ac0, Func Offset: 0x20
	// Line 600, Address: 0x1ed4ae4, Func Offset: 0x44
	// Line 598, Address: 0x1ed4ae8, Func Offset: 0x48
	// Line 604, Address: 0x1ed4af8, Func Offset: 0x58
	// Line 605, Address: 0x1ed4afc, Func Offset: 0x5c
	// Func End, Address: 0x1ed4b0c, Func Offset: 0x6c
	// Line 377, Address: 0x1ed4aa0, Func Offset: 0
	// Line 386, Address: 0x1ed4ab4, Func Offset: 0x14
	// Line 391, Address: 0x1ed4abc, Func Offset: 0x1c
	// Line 387, Address: 0x1ed4ac0, Func Offset: 0x20
	// Line 391, Address: 0x1ed4ac4, Func Offset: 0x24
	// Line 387, Address: 0x1ed4ad0, Func Offset: 0x30
	// Line 391, Address: 0x1ed4ad8, Func Offset: 0x38
	// Line 392, Address: 0x1ed4ae0, Func Offset: 0x40
	// Line 393, Address: 0x1ed4af4, Func Offset: 0x54
	// Line 395, Address: 0x1ed4af8, Func Offset: 0x58
	// Line 394, Address: 0x1ed4b00, Func Offset: 0x60
	// Line 395, Address: 0x1ed4b04, Func Offset: 0x64
	// Func End, Address: 0x1ed4b10, Func Offset: 0x70
}

// 
// Start address: 0x1ed4b10
int ev_home0_ie24_144b_init()
{
	// Line 793, Address: 0x1ed4b10, Func Offset: 0
	// Line 798, Address: 0x1ed4b14, Func Offset: 0x4
	// Line 793, Address: 0x1ed4b18, Func Offset: 0x8
	// Line 798, Address: 0x1ed4b24, Func Offset: 0x14
	// Line 796, Address: 0x1ed4b28, Func Offset: 0x18
	// Line 798, Address: 0x1ed4b2c, Func Offset: 0x1c
	// Line 799, Address: 0x1ed4b58, Func Offset: 0x48
	// Line 802, Address: 0x1ed4b60, Func Offset: 0x50
	// Line 806, Address: 0x1ed4b68, Func Offset: 0x58
	// Line 807, Address: 0x1ed4b70, Func Offset: 0x60
	// Func End, Address: 0x1ed4b84, Func Offset: 0x74
	// Line 610, Address: 0x1ed4b10, Func Offset: 0
	// Func End, Address: 0x1ed4b18, Func Offset: 0x8
	// Line 397, Address: 0x1ed4b10, Func Offset: 0
	// Line 398, Address: 0x1ed4b1c, Func Offset: 0xc
	// Line 400, Address: 0x1ed4b24, Func Offset: 0x14
	// Line 401, Address: 0x1ed4b2c, Func Offset: 0x1c
	// Line 403, Address: 0x1ed4b30, Func Offset: 0x20
	// Line 402, Address: 0x1ed4b34, Func Offset: 0x24
	// Line 403, Address: 0x1ed4b38, Func Offset: 0x28
	// Func End, Address: 0x1ed4b40, Func Offset: 0x30
}

// 
// Start address: 0x1ed4b20
int ev_home0_ie24_144b_exec(sfObj* obj)
{
	// Line 613, Address: 0x1ed4b20, Func Offset: 0
	// Line 616, Address: 0x1ed4b2c, Func Offset: 0xc
	// Line 618, Address: 0x1ed4b40, Func Offset: 0x20
	// Line 619, Address: 0x1ed4b5c, Func Offset: 0x3c
	// Line 626, Address: 0x1ed4b68, Func Offset: 0x48
	// Line 625, Address: 0x1ed4b70, Func Offset: 0x50
	// Line 626, Address: 0x1ed4b74, Func Offset: 0x54
	// Func End, Address: 0x1ed4b7c, Func Offset: 0x5c
}

// 
// Start address: 0x1ed4b80
int ev_ie01_rocker_init(sfObj* obj)
{
	_anon2* mdl;
	// Line 357, Address: 0x1ed4b80, Func Offset: 0
	// Line 358, Address: 0x1ed4bc0, Func Offset: 0x40
	// Line 365, Address: 0x1ed4bcc, Func Offset: 0x4c
	// Line 367, Address: 0x1ed4be8, Func Offset: 0x68
	// Line 368, Address: 0x1ed4c44, Func Offset: 0xc4
	// Line 369, Address: 0x1ed4c9c, Func Offset: 0x11c
	// Line 371, Address: 0x1ed4cd8, Func Offset: 0x158
	// Line 372, Address: 0x1ed4cec, Func Offset: 0x16c
	// Line 373, Address: 0x1ed4d08, Func Offset: 0x188
	// Line 377, Address: 0x1ed4d0c, Func Offset: 0x18c
	// Line 373, Address: 0x1ed4d14, Func Offset: 0x194
	// Line 377, Address: 0x1ed4d18, Func Offset: 0x198
	// Line 374, Address: 0x1ed4d1c, Func Offset: 0x19c
	// Line 377, Address: 0x1ed4d20, Func Offset: 0x1a0
	// Line 374, Address: 0x1ed4d24, Func Offset: 0x1a4
	// Line 377, Address: 0x1ed4d28, Func Offset: 0x1a8
	// Line 378, Address: 0x1ed4d2c, Func Offset: 0x1ac
	// Line 377, Address: 0x1ed4d3c, Func Offset: 0x1bc
	// Line 379, Address: 0x1ed4d40, Func Offset: 0x1c0
	// Line 378, Address: 0x1ed4d44, Func Offset: 0x1c4
	// Line 379, Address: 0x1ed4d48, Func Offset: 0x1c8
	// Line 378, Address: 0x1ed4d54, Func Offset: 0x1d4
	// Line 379, Address: 0x1ed4d58, Func Offset: 0x1d8
	// Line 385, Address: 0x1ed4d60, Func Offset: 0x1e0
	// Line 382, Address: 0x1ed4d64, Func Offset: 0x1e4
	// Line 385, Address: 0x1ed4d68, Func Offset: 0x1e8
	// Line 386, Address: 0x1ed4d70, Func Offset: 0x1f0
	// Line 388, Address: 0x1ed4d80, Func Offset: 0x200
	// Line 394, Address: 0x1ed4d88, Func Offset: 0x208
	// Line 393, Address: 0x1ed4d8c, Func Offset: 0x20c
	// Line 394, Address: 0x1ed4d90, Func Offset: 0x210
	// Line 393, Address: 0x1ed4d94, Func Offset: 0x214
	// Line 394, Address: 0x1ed4d98, Func Offset: 0x218
	// Line 395, Address: 0x1ed4db0, Func Offset: 0x230
	// Line 396, Address: 0x1ed4dbc, Func Offset: 0x23c
	// Line 395, Address: 0x1ed4dc0, Func Offset: 0x240
	// Line 396, Address: 0x1ed4e00, Func Offset: 0x280
	// Line 397, Address: 0x1ed4e0c, Func Offset: 0x28c
	// Line 396, Address: 0x1ed4e18, Func Offset: 0x298
	// Line 402, Address: 0x1ed4e1c, Func Offset: 0x29c
	// Line 397, Address: 0x1ed4e24, Func Offset: 0x2a4
	// Line 398, Address: 0x1ed4e5c, Func Offset: 0x2dc
	// Line 399, Address: 0x1ed4e78, Func Offset: 0x2f8
	// Line 401, Address: 0x1ed4e90, Func Offset: 0x310
	// Line 402, Address: 0x1ed4e94, Func Offset: 0x314
	// Line 403, Address: 0x1ed4e9c, Func Offset: 0x31c
	// Line 405, Address: 0x1ed4ea0, Func Offset: 0x320
	// Line 403, Address: 0x1ed4ea4, Func Offset: 0x324
	// Line 404, Address: 0x1ed4ea8, Func Offset: 0x328
	// Line 405, Address: 0x1ed4eac, Func Offset: 0x32c
	// Line 404, Address: 0x1ed4eb0, Func Offset: 0x330
	// Line 405, Address: 0x1ed4eb4, Func Offset: 0x334
	// Line 410, Address: 0x1ed4ebc, Func Offset: 0x33c
	// Line 409, Address: 0x1ed4ec0, Func Offset: 0x340
	// Line 410, Address: 0x1ed4ec4, Func Offset: 0x344
	// Line 428, Address: 0x1ed4ec8, Func Offset: 0x348
	// Line 410, Address: 0x1ed4ecc, Func Offset: 0x34c
	// Line 413, Address: 0x1ed4ed4, Func Offset: 0x354
	// Line 428, Address: 0x1ed4ed8, Func Offset: 0x358
	// Line 423, Address: 0x1ed4ee0, Func Offset: 0x360
	// Line 413, Address: 0x1ed4ee8, Func Offset: 0x368
	// Line 418, Address: 0x1ed4ef8, Func Offset: 0x378
	// Line 420, Address: 0x1ed4efc, Func Offset: 0x37c
	// Line 423, Address: 0x1ed4f00, Func Offset: 0x380
	// Line 418, Address: 0x1ed4f04, Func Offset: 0x384
	// Line 423, Address: 0x1ed4f08, Func Offset: 0x388
	// Line 420, Address: 0x1ed4f0c, Func Offset: 0x38c
	// Line 423, Address: 0x1ed4f14, Func Offset: 0x394
	// Line 425, Address: 0x1ed4f18, Func Offset: 0x398
	// Line 423, Address: 0x1ed4f1c, Func Offset: 0x39c
	// Line 425, Address: 0x1ed4f20, Func Offset: 0x3a0
	// Line 428, Address: 0x1ed4f24, Func Offset: 0x3a4
	// Line 429, Address: 0x1ed4f30, Func Offset: 0x3b0
	// Line 435, Address: 0x1ed4f3c, Func Offset: 0x3bc
	// Line 456, Address: 0x1ed4f40, Func Offset: 0x3c0
	// Line 435, Address: 0x1ed4f44, Func Offset: 0x3c4
	// Line 456, Address: 0x1ed4f48, Func Offset: 0x3c8
	// Line 435, Address: 0x1ed4f4c, Func Offset: 0x3cc
	// Line 436, Address: 0x1ed4f50, Func Offset: 0x3d0
	// Line 437, Address: 0x1ed4f54, Func Offset: 0x3d4
	// Line 445, Address: 0x1ed4f58, Func Offset: 0x3d8
	// Line 437, Address: 0x1ed4f5c, Func Offset: 0x3dc
	// Line 456, Address: 0x1ed4f60, Func Offset: 0x3e0
	// Line 440, Address: 0x1ed4f64, Func Offset: 0x3e4
	// Line 462, Address: 0x1ed4f68, Func Offset: 0x3e8
	// Line 440, Address: 0x1ed4f6c, Func Offset: 0x3ec
	// Line 467, Address: 0x1ed4f70, Func Offset: 0x3f0
	// Line 440, Address: 0x1ed4f74, Func Offset: 0x3f4
	// Line 473, Address: 0x1ed4f78, Func Offset: 0x3f8
	// Line 440, Address: 0x1ed4f7c, Func Offset: 0x3fc
	// Line 462, Address: 0x1ed4f80, Func Offset: 0x400
	// Line 445, Address: 0x1ed4f84, Func Offset: 0x404
	// Line 473, Address: 0x1ed4f88, Func Offset: 0x408
	// Line 445, Address: 0x1ed4f8c, Func Offset: 0x40c
	// Line 462, Address: 0x1ed4f90, Func Offset: 0x410
	// Line 445, Address: 0x1ed4f94, Func Offset: 0x414
	// Line 450, Address: 0x1ed4f9c, Func Offset: 0x41c
	// Line 456, Address: 0x1ed4fac, Func Offset: 0x42c
	// Line 462, Address: 0x1ed4fbc, Func Offset: 0x43c
	// Line 467, Address: 0x1ed4fcc, Func Offset: 0x44c
	// Line 473, Address: 0x1ed4fd8, Func Offset: 0x458
	// Line 474, Address: 0x1ed4fe4, Func Offset: 0x464
	// Line 477, Address: 0x1ed4ff0, Func Offset: 0x470
	// Line 480, Address: 0x1ed5004, Func Offset: 0x484
	// Line 481, Address: 0x1ed5014, Func Offset: 0x494
	// Line 482, Address: 0x1ed501c, Func Offset: 0x49c
	// Line 484, Address: 0x1ed5020, Func Offset: 0x4a0
	// Line 487, Address: 0x1ed5028, Func Offset: 0x4a8
	// Line 488, Address: 0x1ed5030, Func Offset: 0x4b0
	// Func End, Address: 0x1ed506c, Func Offset: 0x4ec
	// Line 643, Address: 0x1ed4b80, Func Offset: 0
	// Line 644, Address: 0x1ed4b84, Func Offset: 0x4
	// Line 643, Address: 0x1ed4b88, Func Offset: 0x8
	// Line 644, Address: 0x1ed4b90, Func Offset: 0x10
	// Line 645, Address: 0x1ed4ba0, Func Offset: 0x20
	// Line 648, Address: 0x1ed4ba8, Func Offset: 0x28
	// Line 650, Address: 0x1ed4bb0, Func Offset: 0x30
	// Line 651, Address: 0x1ed4bc4, Func Offset: 0x44
	// Line 652, Address: 0x1ed4bd8, Func Offset: 0x58
	// Line 654, Address: 0x1ed4be0, Func Offset: 0x60
	// Line 656, Address: 0x1ed4bf8, Func Offset: 0x78
	// Line 657, Address: 0x1ed4c10, Func Offset: 0x90
	// Line 659, Address: 0x1ed4c28, Func Offset: 0xa8
	// Line 662, Address: 0x1ed4c30, Func Offset: 0xb0
	// Line 661, Address: 0x1ed4c38, Func Offset: 0xb8
	// Line 662, Address: 0x1ed4c3c, Func Offset: 0xbc
	// Func End, Address: 0x1ed4c44, Func Offset: 0xc4
}

// 
// Start address: 0x1ed4c50
int ev_ie01_rocker_exec(sfObj* obj)
{
	_anon2* mdl;
	// Line 366, Address: 0x1ed4c50, Func Offset: 0
	// Line 367, Address: 0x1ed4c54, Func Offset: 0x4
	// Line 370, Address: 0x1ed4c5c, Func Offset: 0xc
	// Line 371, Address: 0x1ed4c68, Func Offset: 0x18
	// Line 372, Address: 0x1ed4c80, Func Offset: 0x30
	// Line 374, Address: 0x1ed4c88, Func Offset: 0x38
	// Line 376, Address: 0x1ed4ca4, Func Offset: 0x54
	// Line 377, Address: 0x1ed4ca8, Func Offset: 0x58
	// Func End, Address: 0x1ed4cb4, Func Offset: 0x64
	// Line 665, Address: 0x1ed4c50, Func Offset: 0
	// Line 666, Address: 0x1ed4c64, Func Offset: 0x14
	// Line 669, Address: 0x1ed4c6c, Func Offset: 0x1c
	// Line 670, Address: 0x1ed4cb4, Func Offset: 0x64
	// Line 671, Address: 0x1ed4cb8, Func Offset: 0x68
	// Line 674, Address: 0x1ed4ccc, Func Offset: 0x7c
	// Line 676, Address: 0x1ed4cd8, Func Offset: 0x88
	// Line 678, Address: 0x1ed4cdc, Func Offset: 0x8c
	// Line 680, Address: 0x1ed4ce4, Func Offset: 0x94
	// Line 682, Address: 0x1ed4ce8, Func Offset: 0x98
	// Line 684, Address: 0x1ed4cfc, Func Offset: 0xac
	// Line 685, Address: 0x1ed4d04, Func Offset: 0xb4
	// Line 687, Address: 0x1ed4d0c, Func Offset: 0xbc
	// Line 688, Address: 0x1ed4d14, Func Offset: 0xc4
	// Line 690, Address: 0x1ed4d18, Func Offset: 0xc8
	// Line 692, Address: 0x1ed4d28, Func Offset: 0xd8
	// Line 695, Address: 0x1ed4d44, Func Offset: 0xf4
	// Line 696, Address: 0x1ed4d48, Func Offset: 0xf8
	// Line 698, Address: 0x1ed4d50, Func Offset: 0x100
	// Line 701, Address: 0x1ed4d58, Func Offset: 0x108
	// Line 703, Address: 0x1ed4d5c, Func Offset: 0x10c
	// Line 701, Address: 0x1ed4d64, Func Offset: 0x114
	// Line 703, Address: 0x1ed4d6c, Func Offset: 0x11c
	// Line 704, Address: 0x1ed4d80, Func Offset: 0x130
	// Line 706, Address: 0x1ed4d8c, Func Offset: 0x13c
	// Line 708, Address: 0x1ed4d94, Func Offset: 0x144
	// Line 709, Address: 0x1ed4d9c, Func Offset: 0x14c
	// Line 711, Address: 0x1ed4da0, Func Offset: 0x150
	// Line 712, Address: 0x1ed4db0, Func Offset: 0x160
	// Line 723, Address: 0x1ed4db8, Func Offset: 0x168
	// Line 722, Address: 0x1ed4dc0, Func Offset: 0x170
	// Line 723, Address: 0x1ed4dc4, Func Offset: 0x174
	// Func End, Address: 0x1ed4dd0, Func Offset: 0x180
}

// 
// Start address: 0x1ed4dd0
int ev_ie01_rocker_draw(sfObj* obj)
{
	// Line 250, Address: 0x1ed4dd0, Func Offset: 0
	// Line 251, Address: 0x1ed4de4, Func Offset: 0x14
	// Line 254, Address: 0x1ed4dec, Func Offset: 0x1c
	// Line 255, Address: 0x1ed4df8, Func Offset: 0x28
	// Line 256, Address: 0x1ed4dfc, Func Offset: 0x2c
	// Line 258, Address: 0x1ed4e04, Func Offset: 0x34
	// Line 261, Address: 0x1ed4e14, Func Offset: 0x44
	// Line 262, Address: 0x1ed4e20, Func Offset: 0x50
	// Line 263, Address: 0x1ed4e28, Func Offset: 0x58
	// Line 264, Address: 0x1ed4e34, Func Offset: 0x64
	// Line 266, Address: 0x1ed4e40, Func Offset: 0x70
	// Line 269, Address: 0x1ed4e50, Func Offset: 0x80
	// Line 270, Address: 0x1ed4e58, Func Offset: 0x88
	// Line 271, Address: 0x1ed4e60, Func Offset: 0x90
	// Line 272, Address: 0x1ed4e6c, Func Offset: 0x9c
	// Line 273, Address: 0x1ed4e74, Func Offset: 0xa4
	// Line 274, Address: 0x1ed4e80, Func Offset: 0xb0
	// Line 276, Address: 0x1ed4e88, Func Offset: 0xb8
	// Line 279, Address: 0x1ed4e98, Func Offset: 0xc8
	// Line 285, Address: 0x1ed4ea0, Func Offset: 0xd0
	// Line 284, Address: 0x1ed4ea8, Func Offset: 0xd8
	// Line 285, Address: 0x1ed4eac, Func Offset: 0xdc
	// Func End, Address: 0x1ed4eb8, Func Offset: 0xe8
	// Line 726, Address: 0x1ed4dd0, Func Offset: 0
	// Line 727, Address: 0x1ed4ddc, Func Offset: 0xc
	// Line 730, Address: 0x1ed4de4, Func Offset: 0x14
	// Line 731, Address: 0x1ed4dec, Func Offset: 0x1c
	// Line 733, Address: 0x1ed4df0, Func Offset: 0x20
	// Line 732, Address: 0x1ed4df4, Func Offset: 0x24
	// Line 733, Address: 0x1ed4df8, Func Offset: 0x28
	// Func End, Address: 0x1ed4e00, Func Offset: 0x30
}

// 
// Start address: 0x1ed4e00
int ev_ie01_rocker_end()
{
	// Line 738, Address: 0x1ed4e00, Func Offset: 0
	// Func End, Address: 0x1ed4e08, Func Offset: 0x8
}

// 
// Start address: 0x1ed4e10
void ev_ie05_refrigerator_cld_init(_anon1* cld)
{
	sfCldBody* body;
	float obb_xyz[4];
	// Line 743, Address: 0x1ed4e10, Func Offset: 0
	// Line 752, Address: 0x1ed4e1c, Func Offset: 0xc
	// Line 753, Address: 0x1ed4e24, Func Offset: 0x14
	// Line 754, Address: 0x1ed4e30, Func Offset: 0x20
	// Line 755, Address: 0x1ed4e40, Func Offset: 0x30
	// Line 756, Address: 0x1ed4e58, Func Offset: 0x48
	// Line 757, Address: 0x1ed4e60, Func Offset: 0x50
	// Line 758, Address: 0x1ed4e88, Func Offset: 0x78
	// Line 759, Address: 0x1ed4e9c, Func Offset: 0x8c
	// Line 760, Address: 0x1ed4ea0, Func Offset: 0x90
	// Line 762, Address: 0x1ed4eb4, Func Offset: 0xa4
	// Func End, Address: 0x1ed4ec4, Func Offset: 0xb4
}

// 
// Start address: 0x1ed4ed0
void ev_ie05_refrigerator_cld_pos(_anon1* cld, float* pos, float rot)
{
	float r[4];
	// Line 929, Address: 0x1ed4ed0, Func Offset: 0
	// Line 930, Address: 0x1ed4ed8, Func Offset: 0x8
	// Line 936, Address: 0x1ed4ee0, Func Offset: 0x10
	// Line 935, Address: 0x1ed4ee4, Func Offset: 0x14
	// Line 936, Address: 0x1ed4ee8, Func Offset: 0x18
	// Func End, Address: 0x1ed4ef0, Func Offset: 0x20
	// Line 765, Address: 0x1ed4ed0, Func Offset: 0
	// Line 769, Address: 0x1ed4ee8, Func Offset: 0x18
	// Line 770, Address: 0x1ed4ef0, Func Offset: 0x20
	// Line 771, Address: 0x1ed4f04, Func Offset: 0x34
	// Line 773, Address: 0x1ed4f10, Func Offset: 0x40
	// Line 775, Address: 0x1ed4f18, Func Offset: 0x48
	// Line 776, Address: 0x1ed4f24, Func Offset: 0x54
	// Line 777, Address: 0x1ed4f2c, Func Offset: 0x5c
	// Line 778, Address: 0x1ed4f34, Func Offset: 0x64
	// Line 780, Address: 0x1ed4f4c, Func Offset: 0x7c
	// Line 781, Address: 0x1ed4f50, Func Offset: 0x80
	// Func End, Address: 0x1ed4f64, Func Offset: 0x94
}

// 
// Start address: 0x1ed4f70
void ev_ie05_refrigerator_cld_end(_anon1* cld)
{
	// Line 593, Address: 0x1ed4f70, Func Offset: 0
	// Line 594, Address: 0x1ed4f74, Func Offset: 0x4
	// Line 593, Address: 0x1ed4f78, Func Offset: 0x8
	// Line 594, Address: 0x1ed4f7c, Func Offset: 0xc
	// Line 596, Address: 0x1ed4f88, Func Offset: 0x18
	// Line 598, Address: 0x1ed4f90, Func Offset: 0x20
	// Line 597, Address: 0x1ed4f94, Func Offset: 0x24
	// Line 598, Address: 0x1ed4f98, Func Offset: 0x28
	// Func End, Address: 0x1ed4fa0, Func Offset: 0x30
	// Line 784, Address: 0x1ed4f70, Func Offset: 0
	// Line 785, Address: 0x1ed4f7c, Func Offset: 0xc
	// Line 786, Address: 0x1ed4f84, Func Offset: 0x14
	// Line 787, Address: 0x1ed4f8c, Func Offset: 0x1c
	// Line 788, Address: 0x1ed4f90, Func Offset: 0x20
	// Func End, Address: 0x1ed4f9c, Func Offset: 0x2c
}

// 
// Start address: 0x1ed4fa0
int ev_ie05_refrigerator_init(sfObj* obj)
{
	_anon2* mdl;
	_anon1* cld;
	float pos[4];
	// Line 600, Address: 0x1ed4fa0, Func Offset: 0
	// Line 601, Address: 0x1ed4fa4, Func Offset: 0x4
	// Line 600, Address: 0x1ed4fa8, Func Offset: 0x8
	// Line 601, Address: 0x1ed4fb0, Func Offset: 0x10
	// Line 602, Address: 0x1ed4fc0, Func Offset: 0x20
	// Line 603, Address: 0x1ed4fd8, Func Offset: 0x38
	// Line 604, Address: 0x1ed4fe0, Func Offset: 0x40
	// Line 606, Address: 0x1ed4ff8, Func Offset: 0x58
	// Line 608, Address: 0x1ed5000, Func Offset: 0x60
	// Line 607, Address: 0x1ed5004, Func Offset: 0x64
	// Line 608, Address: 0x1ed5008, Func Offset: 0x68
	// Func End, Address: 0x1ed5014, Func Offset: 0x74
	// Line 792, Address: 0x1ed4fa0, Func Offset: 0
	// Line 793, Address: 0x1ed4fa4, Func Offset: 0x4
	// Line 792, Address: 0x1ed4fa8, Func Offset: 0x8
	// Line 793, Address: 0x1ed4fb4, Func Offset: 0x14
	// Line 794, Address: 0x1ed4fc4, Func Offset: 0x24
	// Line 798, Address: 0x1ed4fcc, Func Offset: 0x2c
	// Line 800, Address: 0x1ed4fd4, Func Offset: 0x34
	// Line 801, Address: 0x1ed4fd8, Func Offset: 0x38
	// Line 800, Address: 0x1ed4fdc, Func Offset: 0x3c
	// Line 801, Address: 0x1ed4fe0, Func Offset: 0x40
	// Line 809, Address: 0x1ed4ff0, Func Offset: 0x50
	// Line 811, Address: 0x1ed5004, Func Offset: 0x64
	// Line 812, Address: 0x1ed500c, Func Offset: 0x6c
	// Line 813, Address: 0x1ed5028, Func Offset: 0x88
	// Line 815, Address: 0x1ed5030, Func Offset: 0x90
	// Line 817, Address: 0x1ed5048, Func Offset: 0xa8
	// Line 818, Address: 0x1ed5060, Func Offset: 0xc0
	// Line 820, Address: 0x1ed5078, Func Offset: 0xd8
	// Line 823, Address: 0x1ed5080, Func Offset: 0xe0
	// Line 822, Address: 0x1ed5088, Func Offset: 0xe8
	// Line 823, Address: 0x1ed508c, Func Offset: 0xec
	// Func End, Address: 0x1ed5098, Func Offset: 0xf8
}

// 
// Start address: 0x1ed50a0
int ev_ie05_refrigerator_exec(sfObj* obj)
{
	_anon2* mdl;
	_anon1* cld;
	float player_pos[4];
	float pos[4];
	// Line 826, Address: 0x1ed50a0, Func Offset: 0
	// Line 827, Address: 0x1ed50b8, Func Offset: 0x18
	// Line 830, Address: 0x1ed50c0, Func Offset: 0x20
	// Line 832, Address: 0x1ed5108, Func Offset: 0x68
	// Line 835, Address: 0x1ed511c, Func Offset: 0x7c
	// Line 837, Address: 0x1ed5128, Func Offset: 0x88
	// Line 839, Address: 0x1ed512c, Func Offset: 0x8c
	// Line 841, Address: 0x1ed5134, Func Offset: 0x94
	// Line 843, Address: 0x1ed5138, Func Offset: 0x98
	// Line 845, Address: 0x1ed514c, Func Offset: 0xac
	// Line 846, Address: 0x1ed5154, Func Offset: 0xb4
	// Line 848, Address: 0x1ed515c, Func Offset: 0xbc
	// Line 849, Address: 0x1ed5164, Func Offset: 0xc4
	// Line 851, Address: 0x1ed5168, Func Offset: 0xc8
	// Line 853, Address: 0x1ed5178, Func Offset: 0xd8
	// Line 855, Address: 0x1ed5194, Func Offset: 0xf4
	// Line 856, Address: 0x1ed5198, Func Offset: 0xf8
	// Line 858, Address: 0x1ed51a0, Func Offset: 0x100
	// Line 861, Address: 0x1ed51a8, Func Offset: 0x108
	// Line 873, Address: 0x1ed51ac, Func Offset: 0x10c
	// Line 862, Address: 0x1ed51b0, Func Offset: 0x110
	// Line 873, Address: 0x1ed51b4, Func Offset: 0x114
	// Line 861, Address: 0x1ed51b8, Func Offset: 0x118
	// Line 873, Address: 0x1ed51bc, Func Offset: 0x11c
	// Line 875, Address: 0x1ed51d0, Func Offset: 0x130
	// Line 876, Address: 0x1ed51d8, Func Offset: 0x138
	// Line 878, Address: 0x1ed51f4, Func Offset: 0x154
	// Line 879, Address: 0x1ed5204, Func Offset: 0x164
	// Line 882, Address: 0x1ed5218, Func Offset: 0x178
	// Line 884, Address: 0x1ed5228, Func Offset: 0x188
	// Line 886, Address: 0x1ed5230, Func Offset: 0x190
	// Line 889, Address: 0x1ed5238, Func Offset: 0x198
	// Line 890, Address: 0x1ed5248, Func Offset: 0x1a8
	// Line 901, Address: 0x1ed5250, Func Offset: 0x1b0
	// Line 900, Address: 0x1ed5258, Func Offset: 0x1b8
	// Line 901, Address: 0x1ed525c, Func Offset: 0x1bc
	// Func End, Address: 0x1ed526c, Func Offset: 0x1cc
	// Line 175, Address: 0x1ed50a0, Func Offset: 0
	// Func End, Address: 0x1ed50a8, Func Offset: 0x8
}

// 
// Start address: 0x1ed5270
int ev_ie05_refrigerator_draw(sfObj* obj)
{
	// Line 883, Address: 0x1ed5270, Func Offset: 0
	// Line 884, Address: 0x1ed5278, Func Offset: 0x8
	// Line 885, Address: 0x1ed5280, Func Offset: 0x10
	// Line 888, Address: 0x1ed5288, Func Offset: 0x18
	// Line 894, Address: 0x1ed528c, Func Offset: 0x1c
	// Line 888, Address: 0x1ed52b0, Func Offset: 0x40
	// Line 889, Address: 0x1ed52b4, Func Offset: 0x44
	// Line 890, Address: 0x1ed52bc, Func Offset: 0x4c
	// Line 894, Address: 0x1ed52c4, Func Offset: 0x54
	// Line 895, Address: 0x1ed52cc, Func Offset: 0x5c
	// Line 897, Address: 0x1ed52d0, Func Offset: 0x60
	// Func End, Address: 0x1ed52dc, Func Offset: 0x6c
	// Line 904, Address: 0x1ed5270, Func Offset: 0
	// Line 905, Address: 0x1ed527c, Func Offset: 0xc
	// Line 908, Address: 0x1ed5284, Func Offset: 0x14
	// Line 909, Address: 0x1ed528c, Func Offset: 0x1c
	// Line 911, Address: 0x1ed5290, Func Offset: 0x20
	// Line 910, Address: 0x1ed5294, Func Offset: 0x24
	// Line 911, Address: 0x1ed5298, Func Offset: 0x28
	// Func End, Address: 0x1ed52a0, Func Offset: 0x30
	// Line 291, Address: 0x1ed5270, Func Offset: 0
	// Line 292, Address: 0x1ed5278, Func Offset: 0x8
	// Line 301, Address: 0x1ed5280, Func Offset: 0x10
	// Line 300, Address: 0x1ed5284, Func Offset: 0x14
	// Line 301, Address: 0x1ed5288, Func Offset: 0x18
	// Func End, Address: 0x1ed5290, Func Offset: 0x20
}

// 
// Start address: 0x1ed52a0
int ev_ie05_refrigerator_end(sfObj* obj)
{
	// Line 741, Address: 0x1ed52a0, Func Offset: 0
	// Line 742, Address: 0x1ed52a8, Func Offset: 0x8
	// Line 744, Address: 0x1ed52b0, Func Offset: 0x10
	// Line 743, Address: 0x1ed52b4, Func Offset: 0x14
	// Line 744, Address: 0x1ed52b8, Func Offset: 0x18
	// Func End, Address: 0x1ed52c0, Func Offset: 0x20
	// Line 914, Address: 0x1ed52a0, Func Offset: 0
	// Line 915, Address: 0x1ed52ac, Func Offset: 0xc
	// Line 919, Address: 0x1ed52b4, Func Offset: 0x14
	// Line 920, Address: 0x1ed52bc, Func Offset: 0x1c
	// Line 922, Address: 0x1ed52c0, Func Offset: 0x20
	// Line 921, Address: 0x1ed52c4, Func Offset: 0x24
	// Line 922, Address: 0x1ed52c8, Func Offset: 0x28
	// Func End, Address: 0x1ed52d0, Func Offset: 0x30
}

// 
// Start address: 0x1ed52d0
void set_transparency(sfObj* obj)
{
	_anon6* kl;
	int a;
	// Line 928, Address: 0x1ed52d0, Func Offset: 0
	// Line 929, Address: 0x1ed52d8, Func Offset: 0x8
	// Line 932, Address: 0x1ed52e4, Func Offset: 0x14
	// Line 933, Address: 0x1ed52fc, Func Offset: 0x2c
	// Line 932, Address: 0x1ed5300, Func Offset: 0x30
	// Line 933, Address: 0x1ed5304, Func Offset: 0x34
	// Line 934, Address: 0x1ed5328, Func Offset: 0x58
	// Line 936, Address: 0x1ed533c, Func Offset: 0x6c
	// Line 938, Address: 0x1ed5348, Func Offset: 0x78
	// Func End, Address: 0x1ed5354, Func Offset: 0x84
}

// 
// Start address: 0x1ed5360
void reset_transparency()
{
	// Line 941, Address: 0x1ed5360, Func Offset: 0
	// Line 942, Address: 0x1ed5368, Func Offset: 0x8
	// Line 943, Address: 0x1ed5370, Func Offset: 0x10
	// Line 944, Address: 0x1ed5378, Func Offset: 0x18
	// Func End, Address: 0x1ed5384, Func Offset: 0x24
}

// 
// Start address: 0x1ed5390
void ev_home0_killer_init(sfObj* obj)
{
	float r[4];
	sgAnime* anm;
	_anon6* kl;
	float pos[4];
	// Line 152, Address: 0x1ed5390, Func Offset: 0
	// Line 155, Address: 0x1ed5394, Func Offset: 0x4
	// Line 152, Address: 0x1ed5398, Func Offset: 0x8
	// Line 155, Address: 0x1ed53a8, Func Offset: 0x18
	// Line 157, Address: 0x1ed53d0, Func Offset: 0x40
	// Line 158, Address: 0x1ed53d4, Func Offset: 0x44
	// Line 159, Address: 0x1ed53dc, Func Offset: 0x4c
	// Line 160, Address: 0x1ed53e8, Func Offset: 0x58
	// Line 161, Address: 0x1ed53f0, Func Offset: 0x60
	// Line 163, Address: 0x1ed53f8, Func Offset: 0x68
	// Line 164, Address: 0x1ed5408, Func Offset: 0x78
	// Line 165, Address: 0x1ed5410, Func Offset: 0x80
	// Line 166, Address: 0x1ed5418, Func Offset: 0x88
	// Line 167, Address: 0x1ed5424, Func Offset: 0x94
	// Line 168, Address: 0x1ed5428, Func Offset: 0x98
	// Line 169, Address: 0x1ed5430, Func Offset: 0xa0
	// Line 171, Address: 0x1ed5438, Func Offset: 0xa8
	// Line 186, Address: 0x1ed5440, Func Offset: 0xb0
	// Line 187, Address: 0x1ed5450, Func Offset: 0xc0
	// Line 188, Address: 0x1ed5494, Func Offset: 0x104
	// Line 189, Address: 0x1ed5498, Func Offset: 0x108
	// Line 190, Address: 0x1ed54b0, Func Offset: 0x120
	// Line 191, Address: 0x1ed54d4, Func Offset: 0x144
	// Line 193, Address: 0x1ed54d8, Func Offset: 0x148
	// Line 194, Address: 0x1ed54e8, Func Offset: 0x158
	// Line 195, Address: 0x1ed54f8, Func Offset: 0x168
	// Line 196, Address: 0x1ed5500, Func Offset: 0x170
	// Line 201, Address: 0x1ed550c, Func Offset: 0x17c
	// Line 203, Address: 0x1ed5510, Func Offset: 0x180
	// Line 204, Address: 0x1ed5514, Func Offset: 0x184
	// Func End, Address: 0x1ed5528, Func Offset: 0x198
	// Line 949, Address: 0x1ed5390, Func Offset: 0
	// Line 954, Address: 0x1ed5394, Func Offset: 0x4
	// Line 949, Address: 0x1ed5398, Func Offset: 0x8
	// Line 954, Address: 0x1ed53a8, Func Offset: 0x18
	// Line 956, Address: 0x1ed53cc, Func Offset: 0x3c
	// Line 958, Address: 0x1ed53d8, Func Offset: 0x48
	// Line 956, Address: 0x1ed53e0, Func Offset: 0x50
	// Line 958, Address: 0x1ed53e8, Func Offset: 0x58
	// Line 959, Address: 0x1ed53f0, Func Offset: 0x60
	// Line 960, Address: 0x1ed53f8, Func Offset: 0x68
	// Line 963, Address: 0x1ed5400, Func Offset: 0x70
	// Line 964, Address: 0x1ed5410, Func Offset: 0x80
	// Line 968, Address: 0x1ed5418, Func Offset: 0x88
	// Line 969, Address: 0x1ed541c, Func Offset: 0x8c
	// Line 971, Address: 0x1ed5424, Func Offset: 0x94
	// Line 975, Address: 0x1ed5450, Func Offset: 0xc0
	// Line 976, Address: 0x1ed546c, Func Offset: 0xdc
	// Line 977, Address: 0x1ed5478, Func Offset: 0xe8
	// Line 979, Address: 0x1ed5488, Func Offset: 0xf8
	// Line 980, Address: 0x1ed5494, Func Offset: 0x104
	// Line 981, Address: 0x1ed549c, Func Offset: 0x10c
	// Line 982, Address: 0x1ed54b4, Func Offset: 0x124
	// Line 984, Address: 0x1ed54b8, Func Offset: 0x128
	// Line 987, Address: 0x1ed54c4, Func Offset: 0x134
	// Line 988, Address: 0x1ed54cc, Func Offset: 0x13c
	// Line 990, Address: 0x1ed54d8, Func Offset: 0x148
	// Line 992, Address: 0x1ed54e0, Func Offset: 0x150
	// Line 994, Address: 0x1ed54e8, Func Offset: 0x158
	// Func End, Address: 0x1ed5500, Func Offset: 0x170
	// Line 414, Address: 0x1ed5390, Func Offset: 0
	// Line 417, Address: 0x1ed5394, Func Offset: 0x4
	// Line 418, Address: 0x1ed53b0, Func Offset: 0x20
	// Func End, Address: 0x1ed53c4, Func Offset: 0x34
}

// 
// Start address: 0x1ed5500
float get_ratio(int cnt, int max)
{
	float r;
	// Line 998, Address: 0x1ed5500, Func Offset: 0
	// Line 1000, Address: 0x1ed5504, Func Offset: 0x4
	// Line 1001, Address: 0x1ed5518, Func Offset: 0x18
	// Line 1003, Address: 0x1ed5530, Func Offset: 0x30
	// Line 1004, Address: 0x1ed5534, Func Offset: 0x34
	// Line 1003, Address: 0x1ed5538, Func Offset: 0x38
	// Line 1004, Address: 0x1ed553c, Func Offset: 0x3c
	// Line 1003, Address: 0x1ed5540, Func Offset: 0x40
	// Line 1004, Address: 0x1ed554c, Func Offset: 0x4c
	// Line 1005, Address: 0x1ed5578, Func Offset: 0x78
	// Func End, Address: 0x1ed5580, Func Offset: 0x80
}

// 
// Start address: 0x1ed5580
void ev_home0_killer_exec(sfObj* obj)
{
	_anon6* kl;
	sgAnime* anm;
	// Line 254, Address: 0x1ed5580, Func Offset: 0
	// Line 255, Address: 0x1ed5584, Func Offset: 0x4
	// Line 254, Address: 0x1ed5588, Func Offset: 0x8
	// Line 255, Address: 0x1ed5590, Func Offset: 0x10
	// Line 260, Address: 0x1ed559c, Func Offset: 0x1c
	// Line 259, Address: 0x1ed55a0, Func Offset: 0x20
	// Line 260, Address: 0x1ed55a4, Func Offset: 0x24
	// Func End, Address: 0x1ed55b0, Func Offset: 0x30
	// Line 1008, Address: 0x1ed5580, Func Offset: 0
	// Line 1009, Address: 0x1ed559c, Func Offset: 0x1c
	// Line 1011, Address: 0x1ed55a4, Func Offset: 0x24
	// Line 1013, Address: 0x1ed55ac, Func Offset: 0x2c
	// Line 1014, Address: 0x1ed55cc, Func Offset: 0x4c
	// Line 1016, Address: 0x1ed55d0, Func Offset: 0x50
	// Line 1019, Address: 0x1ed55e4, Func Offset: 0x64
	// Line 1020, Address: 0x1ed55ec, Func Offset: 0x6c
	// Line 1022, Address: 0x1ed55f0, Func Offset: 0x70
	// Line 1023, Address: 0x1ed5618, Func Offset: 0x98
	// Line 1024, Address: 0x1ed5624, Func Offset: 0xa4
	// Line 1027, Address: 0x1ed5640, Func Offset: 0xc0
	// Line 1028, Address: 0x1ed564c, Func Offset: 0xcc
	// Line 1035, Address: 0x1ed5658, Func Offset: 0xd8
	// Line 1036, Address: 0x1ed5664, Func Offset: 0xe4
	// Line 1038, Address: 0x1ed566c, Func Offset: 0xec
	// Line 1039, Address: 0x1ed567c, Func Offset: 0xfc
	// Line 1041, Address: 0x1ed568c, Func Offset: 0x10c
	// Line 1042, Address: 0x1ed5690, Func Offset: 0x110
	// Func End, Address: 0x1ed56ac, Func Offset: 0x12c
}

// 
// Start address: 0x1ed56b0
void ev_home0_killer_draw()
{
	// Line 959, Address: 0x1ed56b0, Func Offset: 0
	// Line 967, Address: 0x1ed56b4, Func Offset: 0x4
	// Line 959, Address: 0x1ed56b8, Func Offset: 0x8
	// Line 967, Address: 0x1ed56bc, Func Offset: 0xc
	// Line 959, Address: 0x1ed56c0, Func Offset: 0x10
	// Line 966, Address: 0x1ed56c4, Func Offset: 0x14
	// Line 959, Address: 0x1ed56c8, Func Offset: 0x18
	// Line 967, Address: 0x1ed56cc, Func Offset: 0x1c
	// Line 965, Address: 0x1ed56d0, Func Offset: 0x20
	// Line 967, Address: 0x1ed56d8, Func Offset: 0x28
	// Line 969, Address: 0x1ed56e4, Func Offset: 0x34
	// Line 970, Address: 0x1ed56ec, Func Offset: 0x3c
	// Line 971, Address: 0x1ed56f4, Func Offset: 0x44
	// Line 972, Address: 0x1ed56fc, Func Offset: 0x4c
	// Line 973, Address: 0x1ed5704, Func Offset: 0x54
	// Line 974, Address: 0x1ed5708, Func Offset: 0x58
	// Line 976, Address: 0x1ed5750, Func Offset: 0xa0
	// Line 977, Address: 0x1ed5754, Func Offset: 0xa4
	// Line 978, Address: 0x1ed577c, Func Offset: 0xcc
	// Line 979, Address: 0x1ed57a8, Func Offset: 0xf8
	// Line 980, Address: 0x1ed57d0, Func Offset: 0x120
	// Line 983, Address: 0x1ed57e8, Func Offset: 0x138
	// Line 982, Address: 0x1ed57ec, Func Offset: 0x13c
	// Line 984, Address: 0x1ed57f0, Func Offset: 0x140
	// Line 983, Address: 0x1ed57f4, Func Offset: 0x144
	// Line 985, Address: 0x1ed57f8, Func Offset: 0x148
	// Func End, Address: 0x1ed580c, Func Offset: 0x15c
	// Line 601, Address: 0x1ed56b0, Func Offset: 0
	// Line 602, Address: 0x1ed56bc, Func Offset: 0xc
	// Line 605, Address: 0x1ed56c4, Func Offset: 0x14
	// Line 606, Address: 0x1ed56cc, Func Offset: 0x1c
	// Line 607, Address: 0x1ed56d0, Func Offset: 0x20
	// Func End, Address: 0x1ed56dc, Func Offset: 0x2c
	// Line 1046, Address: 0x1ed56b0, Func Offset: 0
	// Func End, Address: 0x1ed56b8, Func Offset: 0x8
}

// 
// Start address: 0x1ed56c0
void ev_home0_killer_end(sfObj* obj)
{
	_anon6* kl;
	// Line 1049, Address: 0x1ed56c0, Func Offset: 0
	// Line 1050, Address: 0x1ed56d0, Func Offset: 0x10
	// Line 1053, Address: 0x1ed56d8, Func Offset: 0x18
	// Line 1054, Address: 0x1ed56e0, Func Offset: 0x20
	// Line 1055, Address: 0x1ed56e8, Func Offset: 0x28
	// Line 1059, Address: 0x1ed56f0, Func Offset: 0x30
	// Func End, Address: 0x1ed5700, Func Offset: 0x40
}

// 
// Start address: 0x1ed5700
int ev_cam_ie01_man_trgchk()
{
	// Line 1076, Address: 0x1ed5700, Func Offset: 0
	// Line 1077, Address: 0x1ed5710, Func Offset: 0x10
	// Func End, Address: 0x1ed5718, Func Offset: 0x18
}

// 
// Start address: 0x1ed5720
int ev_cam_ie17_man_trgchk()
{
	// Line 1085, Address: 0x1ed5720, Func Offset: 0
	// Line 1086, Address: 0x1ed5730, Func Offset: 0x10
	// Func End, Address: 0x1ed5738, Func Offset: 0x18
}

// 
// Start address: 0x1ed5740
int ev_ie24_footmark_init(sfObj* obj)
{
	int rtv;
	_anon2* mdl;
	// Line 1090, Address: 0x1ed5740, Func Offset: 0
	// Line 1093, Address: 0x1ed5744, Func Offset: 0x4
	// Line 1090, Address: 0x1ed5748, Func Offset: 0x8
	// Line 1091, Address: 0x1ed5754, Func Offset: 0x14
	// Line 1093, Address: 0x1ed5758, Func Offset: 0x18
	// Line 1094, Address: 0x1ed5768, Func Offset: 0x28
	// Line 1097, Address: 0x1ed5770, Func Offset: 0x30
	// Line 1103, Address: 0x1ed57a8, Func Offset: 0x68
	// Line 1104, Address: 0x1ed57b0, Func Offset: 0x70
	// Line 1105, Address: 0x1ed57c8, Func Offset: 0x88
	// Line 1106, Address: 0x1ed57e0, Func Offset: 0xa0
	// Line 1108, Address: 0x1ed57f8, Func Offset: 0xb8
	// Line 1111, Address: 0x1ed57fc, Func Offset: 0xbc
	// Line 1113, Address: 0x1ed5808, Func Offset: 0xc8
	// Line 1115, Address: 0x1ed580c, Func Offset: 0xcc
	// Line 1116, Address: 0x1ed5810, Func Offset: 0xd0
	// Line 1117, Address: 0x1ed5814, Func Offset: 0xd4
	// Func End, Address: 0x1ed5828, Func Offset: 0xe8
}

// 
// Start address: 0x1ed5830
int ev_ie24_footmark_exec()
{
	// Line 1122, Address: 0x1ed5830, Func Offset: 0
	// Func End, Address: 0x1ed5838, Func Offset: 0x8
}

// 
// Start address: 0x1ed5840
int ev_ie24_footmark_draw(sfObj* obj)
{
	_anon2* mdl;
	// Line 1125, Address: 0x1ed5840, Func Offset: 0
	// Line 1126, Address: 0x1ed584c, Func Offset: 0xc
	// Line 1129, Address: 0x1ed5854, Func Offset: 0x14
	// Line 1130, Address: 0x1ed5860, Func Offset: 0x20
	// Line 1134, Address: 0x1ed5868, Func Offset: 0x28
	// Line 1133, Address: 0x1ed586c, Func Offset: 0x2c
	// Line 1134, Address: 0x1ed5870, Func Offset: 0x30
	// Func End, Address: 0x1ed5878, Func Offset: 0x38
	// Line 599, Address: 0x1ed5840, Func Offset: 0
	// Line 601, Address: 0x1ed5844, Func Offset: 0x4
	// Line 599, Address: 0x1ed5848, Func Offset: 0x8
	// Line 601, Address: 0x1ed584c, Func Offset: 0xc
	// Line 602, Address: 0x1ed5860, Func Offset: 0x20
	// Line 603, Address: 0x1ed5898, Func Offset: 0x58
	// Line 605, Address: 0x1ed58a0, Func Offset: 0x60
	// Line 604, Address: 0x1ed58a4, Func Offset: 0x64
	// Line 605, Address: 0x1ed58a8, Func Offset: 0x68
	// Func End, Address: 0x1ed58b0, Func Offset: 0x70
}

// 
// Start address: 0x1ed5880
int ev_ie24_footmark_end()
{
	// Line 1139, Address: 0x1ed5880, Func Offset: 0
	// Func End, Address: 0x1ed5888, Func Offset: 0x8
}

// 
// Start address: 0x1ed5890
int ev_cam_126_127_trgchk()
{
	// Line 367, Address: 0x1ed5890, Func Offset: 0
	// Func End, Address: 0x1ed5898, Func Offset: 0x8
	// Line 1145, Address: 0x1ed5890, Func Offset: 0
	// Line 1147, Address: 0x1ed58bc, Func Offset: 0x2c
	// Func End, Address: 0x1ed58c4, Func Offset: 0x34
}

