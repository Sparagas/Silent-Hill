typedef struct sfCldPart;
typedef struct _ObjHitData;
typedef struct _ObjHitSphere;
typedef enum GameItem : unsigned char;
typedef struct _ObjHitDoor;
typedef struct sgBone;
typedef struct _cam3Work;
typedef struct sfObj;
typedef struct sgAnime;
typedef struct _PLAYER_WORK;
typedef struct _anon0;
typedef struct sgIKHandle;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef union _anon4;
typedef struct sfCharacter;
typedef struct _anon5;
typedef struct sfCldObject;
typedef struct sgQTNode;
typedef struct sgSVModel;
typedef struct _anon6;
typedef struct _cam3AFItem;
typedef enum sgIKSolveResult : unsigned char;
typedef struct _anon7;
typedef struct _anon8;
typedef struct _cam3ldkAF;
typedef struct _GAME_WORK;
typedef struct sgQTObject;
typedef struct sfOffsetAABB;
typedef struct _ObjHitCylinder;
typedef union sfCldBody;
typedef enum _cam3Step : unsigned char;
typedef struct _ObjHitCube;

typedef void(*type_3)(sgAnime*, int);
typedef void(*type_7)(sfObj*);
typedef void(*type_10)(sfObj*);
typedef int(*type_11)(void*);
typedef void(*type_28)(_anon6*, int, int, float*);
typedef sgIKSolveResult(*type_30)();

typedef unsigned char type_0[3];
typedef void* type_1[4];
typedef float type_2[4];
typedef float type_4[4];
typedef _anon4 type_5[256];
typedef unsigned char type_6[4];
typedef float type_8[4];
typedef float type_9[4][4];
typedef int type_12[1];
typedef int type_13[1];
typedef _anon4 type_14[23];
typedef sfCldPart* type_15[6];
typedef unsigned char type_16[3];
typedef int type_17[1];
typedef short type_18[2];
typedef unsigned short type_19[2];
typedef char type_20[4];
typedef unsigned char type_21[4];
typedef int type_22[1];
typedef float type_23[1];
typedef int type_24[1];
typedef float type_25[4][2];
typedef _cam3AFItem type_26[128];
typedef int type_27[1];
typedef int type_29[1];
typedef int type_31[1];

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

struct _ObjHitData
{
	float pos[4];
	int type;
	unsigned int attr;
	float rot;
	void* check_func;
	union
	{
		_ObjHitCylinder cl;
		_ObjHitCube cb;
		_ObjHitSphere sp;
		_ObjHitDoor dr;
	};
};

struct _ObjHitSphere
{
	float r;
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

struct _ObjHitDoor
{
	int num;
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

struct _cam3Work
{
	_cam3Step step;
	float mtx[4][4];
	float rot[4];
	float lookat[4];
	int run;
	int forceRotate;
};

struct sfObj
{
	_anon4 fwork[256];
	_anon4* work;
	void(*func)(sfObj*);
	_anon4* work_pt0;
	_anon4* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon4* sys_work;
	_anon4* scene_work;
	_anon4* event_work;
	_anon4* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
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

struct _anon0
{
	float start[4];
	float end[4];
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

struct _anon1
{
	float center[4];
	float radius;
};

struct _anon2
{
	float bmin[4];
	float bmax[4];
};

struct _anon3
{
	float mat[4][4];
	float half_w[4];
};

union _anon4
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

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon7 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
};

struct _anon5
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
	_anon4 dmy[23];
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

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
};

struct _anon6
{
	unsigned long tex0;
	unsigned long clamp;
};

struct _cam3AFItem
{
	int id;
	sfObj* obj;
	float dot;
	float v_dot;
	int disable;
	int valid;
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

struct _anon7
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

struct _anon8
{
	int dummy;
};

struct _cam3ldkAF
{
	_cam3AFItem items[128];
	_cam3AFItem* focusItem;
	_cam3AFItem* prvFocusItem;
	sfObj* preObj;
	int itemNum;
	int lockedObjID;
	int lock;
	int finish;
	int cancel;
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

struct sgQTObject
{
	_anon1 bounding_ball;
	sgQTObject* next;
	sgQTObject* prev;
};

struct sfOffsetAABB
{
	_anon2 aabb;
	float offset[4];
};

struct _ObjHitCylinder
{
	float r;
	float h;
};

union sfCldBody
{
	_anon3 obb;
	_anon2 aabb;
	sfOffsetAABB offset_aabb;
	_anon0 line;
	_anon1 sphere;
};

enum _cam3Step : unsigned char
{
	CAM3_STEP_NORMAL,
	CAM3_STEP_AUTOFOCUS,
	CAM3_STEP_RESET,
	CAM3_STEP_STOP
};

struct _ObjHitCube
{
	float w;
	float h;
	float d;
};

float check_front_rad;
float check_fan_rad;
sfObj* hitcheck_obj;
_cam3ldkAF cam3_afwork;
_GAME_WORK gamew;
float player_dist;
int hitcheck_cnt_enable;
int hitcheck_cnt2;
int hitcheck_cnt;
_cam3Work cam3_work;

float check_height(float a0, float a1, float b0, float b1);
int check_cylinder_range(float* p, float* cp, float cr, float ch);
int check_cube_range(float* p, float* cp, float w, float h, float d, float dir_rad);
int check_player_range_xz(float* trg, float fan_rad);
int check_player_front_xz(float dir_rad, float front_rad);
int check_player_front_xz_focus(float* trgpos, float dir_rad, float front_rad);
int oh_hitcheck_cylinder(_ObjHitData* hitdt);
int oh_hitcheck_cube(_ObjHitData* hitdt);
int oh_hitcheck_sphere(_ObjHitData* hitdt);
int oh_hitcheck_focus();
int oh_hitcheck_door(_ObjHitData* hitdt);
int oh_hitcheck_near_center(_ObjHitData* hitdt);
int oh_hitcheck_playerdistcheck(_ObjHitData* hitdt);
int oh_hitcheck_main(_ObjHitData* hitdt);
int ObjHitPlayerHitCheckHitdt(_ObjHitData* hitdt);
int ObjHitPlayerHitCheckDefault(sfObj* obj);
int ObjHitCheckFunc(sfObj* obj);
int ObjHitCheckFrontFocus(sfObj* obj, float range);
void ObjHitSetData(sfObj* obj);
void ObjHitSetCheckFanrot(float rot);
void ObjHitSetCheckFrontrot(float rot);
int ObjHitType(sfObj* obj);
unsigned int ObjHitAttr(sfObj* obj);

// 
// Start address: 0x222020
float check_height(float a0, float a1, float b0, float b1)
{
	// Line 86, Address: 0x222020, Func Offset: 0
	// Line 88, Address: 0x222080, Func Offset: 0x60
	// Line 90, Address: 0x222090, Func Offset: 0x70
	// Line 91, Address: 0x222098, Func Offset: 0x78
	// Func End, Address: 0x2220a0, Func Offset: 0x80
}

// 
// Start address: 0x2220a0
int check_cylinder_range(float* p, float* cp, float cr, float ch)
{
	int check;
	float a;
	float b;
	// Line 97, Address: 0x2220a0, Func Offset: 0
	// Line 104, Address: 0x2220a4, Func Offset: 0x4
	// Line 97, Address: 0x2220a8, Func Offset: 0x8
	// Line 104, Address: 0x2220b8, Func Offset: 0x18
	// Line 122, Address: 0x2220d4, Func Offset: 0x34
	// Line 128, Address: 0x2220dc, Func Offset: 0x3c
	// Line 125, Address: 0x2220e0, Func Offset: 0x40
	// Line 126, Address: 0x2220e8, Func Offset: 0x48
	// Line 125, Address: 0x2220f0, Func Offset: 0x50
	// Line 126, Address: 0x2220f4, Func Offset: 0x54
	// Line 128, Address: 0x2220f8, Func Offset: 0x58
	// Line 129, Address: 0x22210c, Func Offset: 0x6c
	// Line 134, Address: 0x222110, Func Offset: 0x70
	// Func End, Address: 0x22211c, Func Offset: 0x7c
}

// 
// Start address: 0x222120
int check_cube_range(float* p, float* cp, float w, float h, float d, float dir_rad)
{
	int check;
	float p0[4];
	float p1[4];
	float p2[4];
	float p3[4];
	float m[4][4];
	float rot[4];
	// Line 140, Address: 0x222120, Func Offset: 0
	// Line 146, Address: 0x222124, Func Offset: 0x4
	// Line 140, Address: 0x222128, Func Offset: 0x8
	// Line 146, Address: 0x22213c, Func Offset: 0x1c
	// Line 164, Address: 0x22216c, Func Offset: 0x4c
	// Line 166, Address: 0x222174, Func Offset: 0x54
	// Line 181, Address: 0x222178, Func Offset: 0x58
	// Line 166, Address: 0x22217c, Func Offset: 0x5c
	// Line 167, Address: 0x222180, Func Offset: 0x60
	// Line 170, Address: 0x222184, Func Offset: 0x64
	// Line 166, Address: 0x222188, Func Offset: 0x68
	// Line 173, Address: 0x22218c, Func Offset: 0x6c
	// Line 176, Address: 0x222190, Func Offset: 0x70
	// Line 181, Address: 0x222194, Func Offset: 0x74
	// Line 168, Address: 0x222198, Func Offset: 0x78
	// Line 166, Address: 0x22219c, Func Offset: 0x7c
	// Line 172, Address: 0x2221a0, Func Offset: 0x80
	// Line 175, Address: 0x2221a4, Func Offset: 0x84
	// Line 168, Address: 0x2221a8, Func Offset: 0x88
	// Line 171, Address: 0x2221ac, Func Offset: 0x8c
	// Line 166, Address: 0x2221b0, Func Offset: 0x90
	// Line 169, Address: 0x2221b4, Func Offset: 0x94
	// Line 174, Address: 0x2221b8, Func Offset: 0x98
	// Line 168, Address: 0x2221bc, Func Offset: 0x9c
	// Line 181, Address: 0x2221c0, Func Offset: 0xa0
	// Line 182, Address: 0x2221e8, Func Offset: 0xc8
	// Line 183, Address: 0x2221f4, Func Offset: 0xd4
	// Line 184, Address: 0x222224, Func Offset: 0x104
	// Line 185, Address: 0x222258, Func Offset: 0x138
	// Line 186, Address: 0x22228c, Func Offset: 0x16c
	// Line 187, Address: 0x2222c0, Func Offset: 0x1a0
	// Line 188, Address: 0x2222d8, Func Offset: 0x1b8
	// Line 189, Address: 0x2222f0, Func Offset: 0x1d0
	// Line 190, Address: 0x222308, Func Offset: 0x1e8
	// Line 195, Address: 0x222320, Func Offset: 0x200
	// Line 199, Address: 0x2223e8, Func Offset: 0x2c8
	// Line 201, Address: 0x2223ec, Func Offset: 0x2cc
	// Line 204, Address: 0x2223f0, Func Offset: 0x2d0
	// Func End, Address: 0x222404, Func Offset: 0x2e4
}

// 
// Start address: 0x222410
int check_player_range_xz(float* trg, float fan_rad)
{
	float ppos[4];
	float sub[4];
	float rad;
	_PLAYER_WORK* p;
	// Line 210, Address: 0x222410, Func Offset: 0
	// Line 213, Address: 0x222428, Func Offset: 0x18
	// Line 215, Address: 0x222430, Func Offset: 0x20
	// Line 216, Address: 0x222444, Func Offset: 0x34
	// Line 217, Address: 0x22245c, Func Offset: 0x4c
	// Line 220, Address: 0x222484, Func Offset: 0x74
	// Line 221, Address: 0x22248c, Func Offset: 0x7c
	// Line 223, Address: 0x2224d4, Func Offset: 0xc4
	// Line 224, Address: 0x2224ec, Func Offset: 0xdc
	// Line 225, Address: 0x2224f4, Func Offset: 0xe4
	// Line 227, Address: 0x2224f8, Func Offset: 0xe8
	// Line 228, Address: 0x222500, Func Offset: 0xf0
	// Func End, Address: 0x222518, Func Offset: 0x108
}

// 
// Start address: 0x222520
int check_player_front_xz(float dir_rad, float front_rad)
{
	_PLAYER_WORK* p;
	float trgdir[4];
	float pdir[4];
	float dot;
	// Line 234, Address: 0x222520, Func Offset: 0
	// Line 235, Address: 0x222538, Func Offset: 0x18
	// Line 239, Address: 0x222544, Func Offset: 0x24
	// Line 240, Address: 0x222550, Func Offset: 0x30
	// Line 241, Address: 0x22255c, Func Offset: 0x3c
	// Line 242, Address: 0x222584, Func Offset: 0x64
	// Line 243, Address: 0x2225a0, Func Offset: 0x80
	// Line 246, Address: 0x2225a8, Func Offset: 0x88
	// Line 247, Address: 0x2225b0, Func Offset: 0x90
	// Func End, Address: 0x2225c8, Func Offset: 0xa8
}

// 
// Start address: 0x2225d0
int check_player_front_xz_focus(float* trgpos, float dir_rad, float front_rad)
{
	_PLAYER_WORK* p;
	float trgdir[4];
	float dot;
	float ppos[4];
	float sub[4];
	// Line 253, Address: 0x2225d0, Func Offset: 0
	// Line 254, Address: 0x2225ec, Func Offset: 0x1c
	// Line 260, Address: 0x2225f4, Func Offset: 0x24
	// Line 262, Address: 0x222608, Func Offset: 0x38
	// Line 263, Address: 0x222614, Func Offset: 0x44
	// Line 264, Address: 0x222624, Func Offset: 0x54
	// Line 265, Address: 0x22264c, Func Offset: 0x7c
	// Line 266, Address: 0x222668, Func Offset: 0x98
	// Line 269, Address: 0x222670, Func Offset: 0xa0
	// Line 270, Address: 0x222678, Func Offset: 0xa8
	// Func End, Address: 0x222690, Func Offset: 0xc0
}

// 
// Start address: 0x222690
int oh_hitcheck_cylinder(_ObjHitData* hitdt)
{
	float ppos[4];
	float trg[4];
	int chk;
	// Line 276, Address: 0x222690, Func Offset: 0
	// Line 280, Address: 0x2226a4, Func Offset: 0x14
	// Line 281, Address: 0x2226b8, Func Offset: 0x28
	// Line 286, Address: 0x2226bc, Func Offset: 0x2c
	// Line 281, Address: 0x2226c0, Func Offset: 0x30
	// Line 286, Address: 0x2226d4, Func Offset: 0x44
	// Line 290, Address: 0x2226ec, Func Offset: 0x5c
	// Line 291, Address: 0x2226fc, Func Offset: 0x6c
	// Line 292, Address: 0x222714, Func Offset: 0x84
	// Line 297, Address: 0x222718, Func Offset: 0x88
	// Line 298, Address: 0x222728, Func Offset: 0x98
	// Line 299, Address: 0x22273c, Func Offset: 0xac
	// Line 304, Address: 0x222740, Func Offset: 0xb0
	// Line 305, Address: 0x222744, Func Offset: 0xb4
	// Func End, Address: 0x222758, Func Offset: 0xc8
}

// 
// Start address: 0x222760
int oh_hitcheck_cube(_ObjHitData* hitdt)
{
	float ppos[4];
	float trg[4];
	int chk;
	// Line 311, Address: 0x222760, Func Offset: 0
	// Line 316, Address: 0x222774, Func Offset: 0x14
	// Line 317, Address: 0x222788, Func Offset: 0x28
	// Line 322, Address: 0x22278c, Func Offset: 0x2c
	// Line 317, Address: 0x222790, Func Offset: 0x30
	// Line 322, Address: 0x2227a4, Func Offset: 0x44
	// Line 326, Address: 0x2227c4, Func Offset: 0x64
	// Line 327, Address: 0x2227d4, Func Offset: 0x74
	// Line 328, Address: 0x2227ec, Func Offset: 0x8c
	// Line 333, Address: 0x2227f0, Func Offset: 0x90
	// Line 334, Address: 0x222800, Func Offset: 0xa0
	// Line 335, Address: 0x222814, Func Offset: 0xb4
	// Line 340, Address: 0x222818, Func Offset: 0xb8
	// Line 341, Address: 0x22281c, Func Offset: 0xbc
	// Func End, Address: 0x222830, Func Offset: 0xd0
}

// 
// Start address: 0x222830
int oh_hitcheck_sphere(_ObjHitData* hitdt)
{
	float ppos[4];
	float trg[4];
	int chk;
	float wx;
	float wy;
	float wz;
	// Line 347, Address: 0x222830, Func Offset: 0
	// Line 353, Address: 0x222844, Func Offset: 0x14
	// Line 354, Address: 0x222858, Func Offset: 0x28
	// Line 361, Address: 0x222878, Func Offset: 0x48
	// Line 359, Address: 0x222880, Func Offset: 0x50
	// Line 363, Address: 0x222888, Func Offset: 0x58
	// Line 364, Address: 0x222890, Func Offset: 0x60
	// Line 361, Address: 0x222894, Func Offset: 0x64
	// Line 363, Address: 0x222898, Func Offset: 0x68
	// Line 359, Address: 0x22289c, Func Offset: 0x6c
	// Line 360, Address: 0x2228a0, Func Offset: 0x70
	// Line 362, Address: 0x2228a4, Func Offset: 0x74
	// Line 364, Address: 0x2228a8, Func Offset: 0x78
	// Line 365, Address: 0x2228ac, Func Offset: 0x7c
	// Line 369, Address: 0x2228c4, Func Offset: 0x94
	// Line 370, Address: 0x2228d4, Func Offset: 0xa4
	// Line 371, Address: 0x2228ec, Func Offset: 0xbc
	// Line 376, Address: 0x2228f0, Func Offset: 0xc0
	// Line 377, Address: 0x222900, Func Offset: 0xd0
	// Line 378, Address: 0x222914, Func Offset: 0xe4
	// Line 383, Address: 0x222918, Func Offset: 0xe8
	// Line 384, Address: 0x22291c, Func Offset: 0xec
	// Func End, Address: 0x222930, Func Offset: 0x100
}

// 
// Start address: 0x222930
int oh_hitcheck_focus()
{
	// Line 392, Address: 0x222930, Func Offset: 0
	// Line 393, Address: 0x222940, Func Offset: 0x10
	// Line 397, Address: 0x222950, Func Offset: 0x20
	// Line 398, Address: 0x222970, Func Offset: 0x40
	// Line 419, Address: 0x222978, Func Offset: 0x48
	// Line 420, Address: 0x222980, Func Offset: 0x50
	// Func End, Address: 0x222988, Func Offset: 0x58
}

// 
// Start address: 0x222990
int oh_hitcheck_door(_ObjHitData* hitdt)
{
	// Line 427, Address: 0x222990, Func Offset: 0
	// Line 428, Address: 0x2229a0, Func Offset: 0x10
	// Func End, Address: 0x2229a8, Func Offset: 0x18
}

// 
// Start address: 0x2229b0
int oh_hitcheck_near_center(_ObjHitData* hitdt)
{
	// Line 434, Address: 0x2229b0, Func Offset: 0
	// Line 436, Address: 0x2229b4, Func Offset: 0x4
	// Line 434, Address: 0x2229b8, Func Offset: 0x8
	// Line 436, Address: 0x2229c4, Func Offset: 0x14
	// Line 437, Address: 0x2229d8, Func Offset: 0x28
	// Line 438, Address: 0x2229f4, Func Offset: 0x44
	// Line 440, Address: 0x2229fc, Func Offset: 0x4c
	// Line 443, Address: 0x222a00, Func Offset: 0x50
	// Line 444, Address: 0x222a10, Func Offset: 0x60
	// Line 449, Address: 0x222a18, Func Offset: 0x68
	// Line 453, Address: 0x222a28, Func Offset: 0x78
	// Func End, Address: 0x222a38, Func Offset: 0x88
}

// 
// Start address: 0x222a40
int oh_hitcheck_playerdistcheck(_ObjHitData* hitdt)
{
	float ppos[4];
	float trg[4];
	int ret;
	// Line 459, Address: 0x222a40, Func Offset: 0
	// Line 469, Address: 0x222a54, Func Offset: 0x14
	// Line 470, Address: 0x222a68, Func Offset: 0x28
	// Line 478, Address: 0x222a6c, Func Offset: 0x2c
	// Line 470, Address: 0x222a70, Func Offset: 0x30
	// Line 478, Address: 0x222a74, Func Offset: 0x34
	// Line 470, Address: 0x222a78, Func Offset: 0x38
	// Line 478, Address: 0x222a84, Func Offset: 0x44
	// Line 470, Address: 0x222a8c, Func Offset: 0x4c
	// Line 474, Address: 0x222a98, Func Offset: 0x58
	// Line 472, Address: 0x222aa0, Func Offset: 0x60
	// Line 476, Address: 0x222aa8, Func Offset: 0x68
	// Line 474, Address: 0x222ab0, Func Offset: 0x70
	// Line 472, Address: 0x222ab4, Func Offset: 0x74
	// Line 476, Address: 0x222ab8, Func Offset: 0x78
	// Line 473, Address: 0x222abc, Func Offset: 0x7c
	// Line 475, Address: 0x222ac0, Func Offset: 0x80
	// Line 477, Address: 0x222ac4, Func Offset: 0x84
	// Line 478, Address: 0x222ac8, Func Offset: 0x88
	// Line 479, Address: 0x222adc, Func Offset: 0x9c
	// Line 482, Address: 0x222ae0, Func Offset: 0xa0
	// Line 483, Address: 0x222ae4, Func Offset: 0xa4
	// Func End, Address: 0x222af8, Func Offset: 0xb8
}

// 
// Start address: 0x222b00
int oh_hitcheck_main(_ObjHitData* hitdt)
{
	int hit;
	// Line 489, Address: 0x222b00, Func Offset: 0
	// Line 494, Address: 0x222b04, Func Offset: 0x4
	// Line 489, Address: 0x222b08, Func Offset: 0x8
	// Line 494, Address: 0x222b10, Func Offset: 0x10
	// Line 498, Address: 0x222b44, Func Offset: 0x44
	// Line 499, Address: 0x222b48, Func Offset: 0x48
	// Line 500, Address: 0x222b58, Func Offset: 0x58
	// Line 513, Address: 0x222b60, Func Offset: 0x60
	// Line 514, Address: 0x222b8c, Func Offset: 0x8c
	// Line 515, Address: 0x222b90, Func Offset: 0x90
	// Line 516, Address: 0x222b98, Func Offset: 0x98
	// Line 519, Address: 0x222ba0, Func Offset: 0xa0
	// Line 520, Address: 0x222ba8, Func Offset: 0xa8
	// Line 523, Address: 0x222bb0, Func Offset: 0xb0
	// Line 524, Address: 0x222bb8, Func Offset: 0xb8
	// Line 527, Address: 0x222bc0, Func Offset: 0xc0
	// Line 528, Address: 0x222bc8, Func Offset: 0xc8
	// Line 532, Address: 0x222bd0, Func Offset: 0xd0
	// Line 535, Address: 0x222bd8, Func Offset: 0xd8
	// Line 536, Address: 0x222be0, Func Offset: 0xe0
	// Line 539, Address: 0x222be8, Func Offset: 0xe8
	// Line 546, Address: 0x222bf0, Func Offset: 0xf0
	// Func End, Address: 0x222c00, Func Offset: 0x100
}

// 
// Start address: 0x222c00
int ObjHitPlayerHitCheckHitdt(_ObjHitData* hitdt)
{
	int hit;
	// Line 582, Address: 0x222c00, Func Offset: 0
	// Line 586, Address: 0x222c04, Func Offset: 0x4
	// Line 582, Address: 0x222c08, Func Offset: 0x8
	// Line 586, Address: 0x222c0c, Func Offset: 0xc
	// Line 582, Address: 0x222c10, Func Offset: 0x10
	// Line 584, Address: 0x222c14, Func Offset: 0x14
	// Line 586, Address: 0x222c20, Func Offset: 0x20
	// Line 587, Address: 0x222c2c, Func Offset: 0x2c
	// Line 588, Address: 0x222c34, Func Offset: 0x34
	// Line 595, Address: 0x222c38, Func Offset: 0x38
	// Line 597, Address: 0x222c48, Func Offset: 0x48
	// Line 598, Address: 0x222c58, Func Offset: 0x58
	// Line 602, Address: 0x222c60, Func Offset: 0x60
	// Line 603, Address: 0x222c70, Func Offset: 0x70
	// Line 604, Address: 0x222c80, Func Offset: 0x80
	// Line 609, Address: 0x222c88, Func Offset: 0x88
	// Line 610, Address: 0x222ca8, Func Offset: 0xa8
	// Line 613, Address: 0x222cb0, Func Offset: 0xb0
	// Line 614, Address: 0x222cc4, Func Offset: 0xc4
	// Line 616, Address: 0x222ccc, Func Offset: 0xcc
	// Line 639, Address: 0x222cd0, Func Offset: 0xd0
	// Line 642, Address: 0x222cd8, Func Offset: 0xd8
	// Line 643, Address: 0x222ce8, Func Offset: 0xe8
	// Line 647, Address: 0x222cf0, Func Offset: 0xf0
	// Func End, Address: 0x222d00, Func Offset: 0x100
}

// 
// Start address: 0x222d00
int ObjHitPlayerHitCheckDefault(sfObj* obj)
{
	_ObjHitData* hitdt;
	// Line 671, Address: 0x222d00, Func Offset: 0
	// Line 674, Address: 0x222d04, Func Offset: 0x4
	// Line 671, Address: 0x222d08, Func Offset: 0x8
	// Line 674, Address: 0x222d0c, Func Offset: 0xc
	// Line 671, Address: 0x222d10, Func Offset: 0x10
	// Line 674, Address: 0x222d14, Func Offset: 0x14
	// Line 672, Address: 0x222d18, Func Offset: 0x18
	// Line 673, Address: 0x222d1c, Func Offset: 0x1c
	// Line 674, Address: 0x222d20, Func Offset: 0x20
	// Line 675, Address: 0x222d28, Func Offset: 0x28
	// Line 676, Address: 0x222d3c, Func Offset: 0x3c
	// Line 677, Address: 0x222d44, Func Offset: 0x44
	// Func End, Address: 0x222d54, Func Offset: 0x54
}

// 
// Start address: 0x222d60
int ObjHitCheckFunc(sfObj* obj)
{
	_ObjHitData* hitdt;
	int(*check_func)(void*);
	// Line 686, Address: 0x222d60, Func Offset: 0
	// Line 690, Address: 0x222d64, Func Offset: 0x4
	// Line 686, Address: 0x222d68, Func Offset: 0x8
	// Line 690, Address: 0x222d6c, Func Offset: 0xc
	// Line 687, Address: 0x222d70, Func Offset: 0x10
	// Line 690, Address: 0x222d74, Func Offset: 0x14
	// Line 691, Address: 0x222d80, Func Offset: 0x20
	// Line 694, Address: 0x222d88, Func Offset: 0x28
	// Line 697, Address: 0x222d8c, Func Offset: 0x2c
	// Line 701, Address: 0x222da8, Func Offset: 0x48
	// Func End, Address: 0x222db4, Func Offset: 0x54
}

// 
// Start address: 0x222dc0
int ObjHitCheckFrontFocus(sfObj* obj, float range)
{
	_ObjHitData* hitdt;
	// Line 727, Address: 0x222dc0, Func Offset: 0
	// Line 728, Address: 0x222dc8, Func Offset: 0x8
	// Func End, Address: 0x222dd0, Func Offset: 0x10
}

// 
// Start address: 0x222dd0
void ObjHitSetData(sfObj* obj)
{
	_anon5* objdata;
	float trans[4];
	_ObjHitData* hitdt;
	// Line 738, Address: 0x222dd0, Func Offset: 0
	// Line 741, Address: 0x222de0, Func Offset: 0x10
	// Line 742, Address: 0x222de8, Func Offset: 0x18
	// Line 746, Address: 0x222e14, Func Offset: 0x44
	// Line 748, Address: 0x222e20, Func Offset: 0x50
	// Line 752, Address: 0x222e28, Func Offset: 0x58
	// Line 760, Address: 0x222e38, Func Offset: 0x68
	// Line 753, Address: 0x222e3c, Func Offset: 0x6c
	// Line 756, Address: 0x222e40, Func Offset: 0x70
	// Line 757, Address: 0x222e48, Func Offset: 0x78
	// Line 758, Address: 0x222e50, Func Offset: 0x80
	// Line 759, Address: 0x222e58, Func Offset: 0x88
	// Line 760, Address: 0x222e60, Func Offset: 0x90
	// Line 762, Address: 0x222e68, Func Offset: 0x98
	// Line 764, Address: 0x222e90, Func Offset: 0xc0
	// Line 765, Address: 0x222ea0, Func Offset: 0xd0
	// Line 766, Address: 0x222eac, Func Offset: 0xdc
	// Line 767, Address: 0x222eb4, Func Offset: 0xe4
	// Line 769, Address: 0x222ec0, Func Offset: 0xf0
	// Line 770, Address: 0x222ec8, Func Offset: 0xf8
	// Line 772, Address: 0x222ecc, Func Offset: 0xfc
	// Line 773, Address: 0x222ed4, Func Offset: 0x104
	// Line 774, Address: 0x222ed8, Func Offset: 0x108
	// Line 775, Address: 0x222ee8, Func Offset: 0x118
	// Line 776, Address: 0x222ef4, Func Offset: 0x124
	// Line 777, Address: 0x222f00, Func Offset: 0x130
	// Line 778, Address: 0x222f08, Func Offset: 0x138
	// Line 780, Address: 0x222f10, Func Offset: 0x140
	// Line 781, Address: 0x222f18, Func Offset: 0x148
	// Line 782, Address: 0x222f20, Func Offset: 0x150
	// Line 784, Address: 0x222f24, Func Offset: 0x154
	// Line 785, Address: 0x222f2c, Func Offset: 0x15c
	// Line 786, Address: 0x222f30, Func Offset: 0x160
	// Line 787, Address: 0x222f40, Func Offset: 0x170
	// Line 788, Address: 0x222f48, Func Offset: 0x178
	// Line 790, Address: 0x222f50, Func Offset: 0x180
	// Line 792, Address: 0x222f54, Func Offset: 0x184
	// Line 793, Address: 0x222f5c, Func Offset: 0x18c
	// Line 796, Address: 0x222f60, Func Offset: 0x190
	// Line 797, Address: 0x222f6c, Func Offset: 0x19c
	// Line 800, Address: 0x222f74, Func Offset: 0x1a4
	// Line 801, Address: 0x222f78, Func Offset: 0x1a8
	// Line 806, Address: 0x222f80, Func Offset: 0x1b0
	// Func End, Address: 0x222f94, Func Offset: 0x1c4
}

// 
// Start address: 0x222fa0
void ObjHitSetCheckFanrot(float rot)
{
	// Line 817, Address: 0x222fa0, Func Offset: 0
	// Line 818, Address: 0x222fa4, Func Offset: 0x4
	// Func End, Address: 0x222fac, Func Offset: 0xc
}

// 
// Start address: 0x222fb0
void ObjHitSetCheckFrontrot(float rot)
{
	// Line 829, Address: 0x222fb0, Func Offset: 0
	// Line 830, Address: 0x222fb4, Func Offset: 0x4
	// Func End, Address: 0x222fbc, Func Offset: 0xc
}

// 
// Start address: 0x222fc0
int ObjHitType(sfObj* obj)
{
	// Line 855, Address: 0x222fc0, Func Offset: 0
	// Line 856, Address: 0x222fc4, Func Offset: 0x4
	// Func End, Address: 0x222fcc, Func Offset: 0xc
}

// 
// Start address: 0x222fd0
unsigned int ObjHitAttr(sfObj* obj)
{
	// Line 868, Address: 0x222fd0, Func Offset: 0
	// Line 869, Address: 0x222fd4, Func Offset: 0x4
	// Func End, Address: 0x222fdc, Func Offset: 0xc
}

