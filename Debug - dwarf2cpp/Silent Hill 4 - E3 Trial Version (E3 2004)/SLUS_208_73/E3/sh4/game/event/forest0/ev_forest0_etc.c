typedef struct sfObj;
typedef struct _ObjHitData;
typedef struct _fr07_ThingWork;
typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _DoorWork;
typedef struct _MedalWork;
typedef struct _anon3;
typedef struct EventFlag;
typedef enum sgLightType : unsigned char;
typedef struct _EventDriver;
typedef union _anon4;
typedef struct _SubtitleMessageData;
typedef enum PlayerExtStatus : unsigned char;
typedef struct _anon5;
typedef struct _anon6;
typedef struct sgBone;
typedef struct _evBgCharData;
typedef struct _anon7;
typedef enum GameItem : unsigned char;
typedef struct _evCmnBgObjData;
typedef struct _ObjHitCylinder;
typedef struct _ObjHitCube;
typedef struct _anon8;
typedef struct _GAME_WORK;
typedef struct _ObjHitSphere;
typedef struct _ObjHitDoor;

typedef int(*type_5)(sfObj*);
typedef void(*type_8)(sfObj*);
typedef int(*type_9)(sfObj*);
typedef int(*type_11)(sfObj*);
typedef int(*type_12)(sfObj*);
typedef int(*type_13)(sfObj*);
typedef int(*type_16)(sfObj*);
typedef void(*type_17)(sfObj*);

typedef _anon2 type_0[2];
typedef int type_1[1];
typedef float type_2[4];
typedef float type_3[4];
typedef unsigned char type_4[320];
typedef int(*type_6)(sfObj*)[10];
typedef _anon4 type_7[256];
typedef _anon4 type_10[10];
typedef float type_14[4];
typedef float type_15[4][4];
typedef _anon4 type_18[4];
typedef int type_19[1];
typedef int type_20[1];
typedef short type_21[2];
typedef unsigned short type_22[2];
typedef char type_23[4];
typedef unsigned char type_24[4];
typedef float type_25[1];
typedef _anon6 type_26[6];
typedef int type_27[1];
typedef int type_28[1];
typedef int type_29[1];
typedef _anon4 type_30[7];
typedef _SubtitleMessageData type_31[2];
typedef int type_32[4];
typedef int type_33[1];
typedef _anon8 type_34[8];
typedef float type_35[4][2];
typedef float type_36[4][2];
typedef int type_37[1];

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

struct _fr07_ThingWork
{
	_anon7 emmodel;
	sgBone bone;
	float pos[4];
	float hitpoly[4];
	float rate_thing;
	float wait;
	int maphit_id;
	int slot;
};

struct _anon0
{
	int old_root;
	int now_root;
	int next_root;
	int stat;
	int counter;
	float pos[4];
	float rot;
	float crot;
	int f_foot_se_ok;
};

struct _anon1
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
	_anon4 dmy[10];
};

struct _anon2
{
	float pos[4];
	float rot[4];
	float move_rot[4];
	float eye_pos[4];
	float target_pos[4];
	float weapon_pos[4];
	float eye_dir[4];
	float floor_normal[4];
	sfObj* target_obj;
	float dir;
	float move_dir;
	float move_speed;
	float moved_speed[4];
	float floor_height;
	float hp_rate;
	float weapon_move[4];
	float weapon_speed;
	PlayerExtStatus status;
	GameItem weapon_kind;
};

struct _DoorWork
{
	_anon7 emmodel;
	sgBone bone;
	float rot_y;
	int se_slot;
};

struct _MedalWork
{
	_anon7 emmodel;
	sgBone bone;
	float rot_y;
};

struct _anon3
{
	float color[4];
	float direction[4];
	float position[4];
	sgLightType type;
	float start;
	float end;
	float spot_cone_angle;
	float falloff_angle;
	int flag;
};

struct EventFlag
{
	unsigned char flag[320];
};

enum sgLightType : unsigned char
{
	SG_LIGHT_NONE,
	SG_LIGHT_AMBIENT,
	SG_LIGHT_DIRECTIONAL,
	SG_LIGHT_POINT,
	SG_LIGHT_SPOT,
	SG_LIGHT_REFRECT_DIRECTIONAL,
	SG_LIGHT_REFRECT_POINT
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
	_anon4 val[4];
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

struct _SubtitleMessageData
{
	short pack_id;
	short msg_id;
	float time;
};

enum PlayerExtStatus : unsigned char
{
	PLAYER_STAT_ABSENT,
	PLAYER_STAT_MOVE,
	PLAYER_STAT_SILENT,
	PLAYER_STAT_READY,
	PLAYER_STAT_LOCK,
	PLAYER_STAT_ATTACK,
	PLAYER_STAT_DAMAGE,
	PLAYER_STAT_EVENT,
	PLAYER_STAT_SWORD,
	PLAYER_STAT_GODMODE,
	PLAYER_STAT_DEAD
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
	_anon4 dmy[7];
};

struct _anon6
{
	_evBgCharData objdat;
	int flag;
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

struct _evBgCharData
{
	int model_id;
	int emt_id;
	int kage_id;
	int anim_id;
};

struct _anon7
{
	void* texture_normal;
	void* texture_global;
	void* texture_semitrans;
	void* model_data;
	sgBone* parent_bone;
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

struct _evCmnBgObjData
{
	int model_id;
	int emt_id;
	int GB_emt_id;
};

struct _ObjHitCylinder
{
	float r;
	float h;
};

struct _ObjHitCube
{
	float w;
	float h;
	float d;
};

struct _anon8
{
	float pos[4];
	int root[4];
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

struct _ObjHitSphere
{
	float r;
};

struct _ObjHitDoor
{
	int num;
};

EventFlag event_flag;
float sg_vector_unit_y[4];
sfObj* g_thingobj;
_GAME_WORK gamew;
_EventDriver ev_forest0_fr17_095b;
_anon6 dool_data[6];
_anon8 root_data[8];
unsigned char jasper_touch_memo;
sfObj* jasper_evchar_obj;
sfObj* jasper_evhit_obj;
_SubtitleMessageData ev_027_mes[2];
int(*jas_func)(sfObj*)[10];
_anon2 player_ext_info[2];
_EventDriver ev_forest0_027;

int ev_forest0_fr20_098_init(sfObj* obj);
int ev_forest0_fr20_098_exec(sfObj* obj);
int ev_forest0_fr20_098_draw(sfObj* obj);
int ev_forest0_fr20_098_end(sfObj* obj);
int ev_forest0_fr22_medal_init(sfObj* obj);
int ev_forest0_fr22_medal_exec();
int ev_forest0_fr22_medal_draw(sfObj* obj);
int ev_forest0_fr22_medal_end(sfObj* obj);
int ev_forest0_fr07_thing_fall_init(sfObj* obj);
int ev_forest0_fr07_thing_fall_start();
int ev_forest0_fr07_thing_fall_exec(sfObj* obj);
int ev_forest0_fr07_thing_fall_draw(sfObj* obj);
int ev_forest0_fr07_thing_fall_end(sfObj* obj);
int ev_forest0_fr_child_init(sfObj* obj);
int ev_forest0_fr_child_exec(sfObj* obj);
int ev_forest0_fr_child_draw(sfObj* obj);
int ev_forest0_fr_child_end(sfObj* obj);
int ev_forest0_fr17_095b_end();
int ev_forest0_fr17_095b_exec();
int ev_forest0_fr13_095b_efc_exec(sfObj* obj);
int ev_forest0_fr13_095b_efc_draw(sfObj* obj);
int ev_forest0_fr_wheelchair_init(sfObj* obj);
int ev_forest0_fr_wheelchair_exec(sfObj* obj);
int ev_forest0_fr_wheelchair_draw(sfObj* obj);
int ev_forest0_fr_wheelchair_end(sfObj* obj);
int ev_forest0_fr_dool_init(sfObj* obj);
int ev_forest0_fr_dool_exec(sfObj* obj);
int ev_forest0_fr_dool_draw(sfObj* obj);
int ev_forest0_fr_dool_end(sfObj* obj);
int ev_forest0_fr_doolparts_init(sfObj* obj);
int ev_forest0_fr_doolparts_draw(sfObj* obj);
int ev_forest0_fr20_walk_jasper_init(sfObj* obj);
int ev_forest0_fr20_walk_jasper_moveevhit(sfObj* obj);
int jas_wait_init(sfObj* obj);
int jas_wait(sfObj* obj);
int jas_walk_init(sfObj* obj);
int jas_walk_rotate(sfObj* obj);
int jas_walk(sfObj* obj);
int jas_talk_init(sfObj* obj);
int jas_talk_stream_ready(sfObj* obj);
void walk_jasper_touch_memo();
int jas_talk(sfObj* obj);
int jas_talk_end(sfObj* obj);
int jas_finish();
int ev_forest0_fr20_walk_jasper_exec(sfObj* obj);
void ev_forest0_fr20_walk_jasper_evhit_init(sfObj* obj);
int ev_forest0_027_trgchk();
int ev_forest0_027_exec();
int ev_forest0_CandleLight_init(sfObj* obj);
int ev_forest0_fr03_futa_init(sfObj* obj);

// 
// Start address: 0x1ed4640
int ev_forest0_fr20_098_init(sfObj* obj)
{
	_DoorWork* wk;
	_anon1* objfg;
	float pos[4];
	// Line 185, Address: 0x1ed4640, Func Offset: 0
	// Line 191, Address: 0x1ed4644, Func Offset: 0x4
	// Line 185, Address: 0x1ed4648, Func Offset: 0x8
	// Line 191, Address: 0x1ed4654, Func Offset: 0x14
	// Line 192, Address: 0x1ed4664, Func Offset: 0x24
	// Line 199, Address: 0x1ed466c, Func Offset: 0x2c
	// Line 200, Address: 0x1ed4674, Func Offset: 0x34
	// Line 201, Address: 0x1ed468c, Func Offset: 0x4c
	// Line 202, Address: 0x1ed46a4, Func Offset: 0x64
	// Line 204, Address: 0x1ed46bc, Func Offset: 0x7c
	// Line 205, Address: 0x1ed46c4, Func Offset: 0x84
	// Line 211, Address: 0x1ed46c8, Func Offset: 0x88
	// Line 205, Address: 0x1ed46cc, Func Offset: 0x8c
	// Line 206, Address: 0x1ed46d0, Func Offset: 0x90
	// Line 207, Address: 0x1ed46d8, Func Offset: 0x98
	// Line 211, Address: 0x1ed46e0, Func Offset: 0xa0
	// Line 214, Address: 0x1ed46e8, Func Offset: 0xa8
	// Line 215, Address: 0x1ed46f4, Func Offset: 0xb4
	// Line 216, Address: 0x1ed46f8, Func Offset: 0xb8
	// Line 215, Address: 0x1ed46fc, Func Offset: 0xbc
	// Line 216, Address: 0x1ed4700, Func Offset: 0xc0
	// Line 217, Address: 0x1ed4710, Func Offset: 0xd0
	// Line 218, Address: 0x1ed4714, Func Offset: 0xd4
	// Line 219, Address: 0x1ed4718, Func Offset: 0xd8
	// Line 223, Address: 0x1ed4720, Func Offset: 0xe0
	// Line 222, Address: 0x1ed4728, Func Offset: 0xe8
	// Line 223, Address: 0x1ed472c, Func Offset: 0xec
	// Func End, Address: 0x1ed4738, Func Offset: 0xf8
}

// 
// Start address: 0x1ed4740
int ev_forest0_fr20_098_exec(sfObj* obj)
{
	_DoorWork* wk;
	float jas_pos[4];
	float pos_a[4];
	float r[4];
	_DoorWork* wk;
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
// Start address: 0x1ed48e0
int ev_forest0_fr20_098_draw(sfObj* obj)
{
	// Line 641, Address: 0x1ed48e0, Func Offset: 0
	// Line 642, Address: 0x1ed48f0, Func Offset: 0x10
	// Func End, Address: 0x1ed48f8, Func Offset: 0x18
	// Line 238, Address: 0x1ed48e0, Func Offset: 0
	// Line 239, Address: 0x1ed4908, Func Offset: 0x28
	// Line 240, Address: 0x1ed4910, Func Offset: 0x30
	// Line 241, Address: 0x1ed491c, Func Offset: 0x3c
	// Line 243, Address: 0x1ed4930, Func Offset: 0x50
	// Line 247, Address: 0x1ed4938, Func Offset: 0x58
	// Line 251, Address: 0x1ed495c, Func Offset: 0x7c
	// Line 253, Address: 0x1ed4964, Func Offset: 0x84
	// Line 254, Address: 0x1ed497c, Func Offset: 0x9c
	// Line 256, Address: 0x1ed4984, Func Offset: 0xa4
	// Line 261, Address: 0x1ed4988, Func Offset: 0xa8
	// Line 256, Address: 0x1ed4990, Func Offset: 0xb0
	// Line 257, Address: 0x1ed4994, Func Offset: 0xb4
	// Line 258, Address: 0x1ed499c, Func Offset: 0xbc
	// Line 261, Address: 0x1ed49a4, Func Offset: 0xc4
	// Line 263, Address: 0x1ed49ac, Func Offset: 0xcc
	// Line 266, Address: 0x1ed49b4, Func Offset: 0xd4
	// Line 267, Address: 0x1ed49b8, Func Offset: 0xd8
	// Func End, Address: 0x1ed49d8, Func Offset: 0xf8
	// Line 271, Address: 0x1ed48e0, Func Offset: 0
	// Line 272, Address: 0x1ed48ec, Func Offset: 0xc
	// Line 274, Address: 0x1ed48f4, Func Offset: 0x14
	// Line 275, Address: 0x1ed48fc, Func Offset: 0x1c
	// Line 277, Address: 0x1ed4900, Func Offset: 0x20
	// Line 276, Address: 0x1ed4904, Func Offset: 0x24
	// Line 277, Address: 0x1ed4908, Func Offset: 0x28
	// Func End, Address: 0x1ed4910, Func Offset: 0x30
}

// 
// Start address: 0x1ed4910
int ev_forest0_fr20_098_end(sfObj* obj)
{
	_DoorWork* wk;
	// Line 280, Address: 0x1ed4910, Func Offset: 0
	// Line 282, Address: 0x1ed4920, Func Offset: 0x10
	// Line 284, Address: 0x1ed4928, Func Offset: 0x18
	// Line 286, Address: 0x1ed4934, Func Offset: 0x24
	// Line 288, Address: 0x1ed4948, Func Offset: 0x38
	// Line 287, Address: 0x1ed4950, Func Offset: 0x40
	// Line 288, Address: 0x1ed4954, Func Offset: 0x44
	// Func End, Address: 0x1ed495c, Func Offset: 0x4c
}

// 
// Start address: 0x1ed4960
int ev_forest0_fr22_medal_init(sfObj* obj)
{
	_MedalWork* wk;
	_anon1* objfg;
	float pos[4];
	float r[4];
	// Line 301, Address: 0x1ed4960, Func Offset: 0
	// Line 307, Address: 0x1ed4964, Func Offset: 0x4
	// Line 301, Address: 0x1ed4968, Func Offset: 0x8
	// Line 307, Address: 0x1ed4974, Func Offset: 0x14
	// Line 308, Address: 0x1ed4984, Func Offset: 0x24
	// Line 315, Address: 0x1ed498c, Func Offset: 0x2c
	// Line 316, Address: 0x1ed4994, Func Offset: 0x34
	// Line 317, Address: 0x1ed49ac, Func Offset: 0x4c
	// Line 318, Address: 0x1ed49c4, Func Offset: 0x64
	// Line 320, Address: 0x1ed49dc, Func Offset: 0x7c
	// Line 321, Address: 0x1ed49e4, Func Offset: 0x84
	// Line 320, Address: 0x1ed49e8, Func Offset: 0x88
	// Line 327, Address: 0x1ed49ec, Func Offset: 0x8c
	// Line 321, Address: 0x1ed49f0, Func Offset: 0x90
	// Line 322, Address: 0x1ed49f4, Func Offset: 0x94
	// Line 323, Address: 0x1ed49fc, Func Offset: 0x9c
	// Line 327, Address: 0x1ed4a04, Func Offset: 0xa4
	// Line 328, Address: 0x1ed4a0c, Func Offset: 0xac
	// Line 329, Address: 0x1ed4a20, Func Offset: 0xc0
	// Line 330, Address: 0x1ed4a2c, Func Offset: 0xcc
	// Line 331, Address: 0x1ed4a38, Func Offset: 0xd8
	// Line 335, Address: 0x1ed4a40, Func Offset: 0xe0
	// Line 334, Address: 0x1ed4a48, Func Offset: 0xe8
	// Line 335, Address: 0x1ed4a4c, Func Offset: 0xec
	// Func End, Address: 0x1ed4a58, Func Offset: 0xf8
	// Line 115, Address: 0x1ed4960, Func Offset: 0
	// Line 114, Address: 0x1ed4964, Func Offset: 0x4
	// Line 115, Address: 0x1ed4968, Func Offset: 0x8
	// Line 116, Address: 0x1ed498c, Func Offset: 0x2c
	// Line 117, Address: 0x1ed4990, Func Offset: 0x30
	// Line 118, Address: 0x1ed4998, Func Offset: 0x38
	// Line 120, Address: 0x1ed49a0, Func Offset: 0x40
	// Line 121, Address: 0x1ed49a8, Func Offset: 0x48
	// Line 123, Address: 0x1ed49b0, Func Offset: 0x50
	// Line 127, Address: 0x1ed49b8, Func Offset: 0x58
	// Func End, Address: 0x1ed49c0, Func Offset: 0x60
	// Line 428, Address: 0x1ed4960, Func Offset: 0
	// Line 434, Address: 0x1ed4964, Func Offset: 0x4
	// Line 428, Address: 0x1ed4968, Func Offset: 0x8
	// Line 434, Address: 0x1ed496c, Func Offset: 0xc
	// Line 428, Address: 0x1ed4970, Func Offset: 0x10
	// Line 434, Address: 0x1ed4974, Func Offset: 0x14
	// Line 428, Address: 0x1ed4978, Func Offset: 0x18
	// Line 434, Address: 0x1ed498c, Func Offset: 0x2c
	// Line 439, Address: 0x1ed4994, Func Offset: 0x34
	// Line 440, Address: 0x1ed49a4, Func Offset: 0x44
	// Line 441, Address: 0x1ed49a8, Func Offset: 0x48
	// Line 442, Address: 0x1ed49ac, Func Offset: 0x4c
	// Line 446, Address: 0x1ed49b0, Func Offset: 0x50
	// Line 447, Address: 0x1ed49e4, Func Offset: 0x84
	// Line 448, Address: 0x1ed49e8, Func Offset: 0x88
	// Line 449, Address: 0x1ed49f0, Func Offset: 0x90
	// Line 450, Address: 0x1ed49f8, Func Offset: 0x98
	// Line 452, Address: 0x1ed4a04, Func Offset: 0xa4
	// Line 455, Address: 0x1ed4a30, Func Offset: 0xd0
	// Line 456, Address: 0x1ed4a3c, Func Offset: 0xdc
	// Line 457, Address: 0x1ed4a48, Func Offset: 0xe8
	// Line 458, Address: 0x1ed4a54, Func Offset: 0xf4
	// Line 459, Address: 0x1ed4a60, Func Offset: 0x100
	// Line 460, Address: 0x1ed4a68, Func Offset: 0x108
	// Line 461, Address: 0x1ed4a70, Func Offset: 0x110
	// Line 463, Address: 0x1ed4a78, Func Offset: 0x118
	// Line 464, Address: 0x1ed4a88, Func Offset: 0x128
	// Line 465, Address: 0x1ed4a90, Func Offset: 0x130
	// Line 466, Address: 0x1ed4a98, Func Offset: 0x138
	// Line 467, Address: 0x1ed4aa4, Func Offset: 0x144
	// Line 468, Address: 0x1ed4aa8, Func Offset: 0x148
	// Line 469, Address: 0x1ed4ab8, Func Offset: 0x158
	// Line 471, Address: 0x1ed4ac0, Func Offset: 0x160
	// Line 472, Address: 0x1ed4ad4, Func Offset: 0x174
	// Line 473, Address: 0x1ed4af4, Func Offset: 0x194
	// Line 474, Address: 0x1ed4b1c, Func Offset: 0x1bc
	// Line 475, Address: 0x1ed4b40, Func Offset: 0x1e0
	// Line 476, Address: 0x1ed4b44, Func Offset: 0x1e4
	// Line 477, Address: 0x1ed4b48, Func Offset: 0x1e8
	// Line 478, Address: 0x1ed4b60, Func Offset: 0x200
	// Line 479, Address: 0x1ed4b68, Func Offset: 0x208
	// Line 480, Address: 0x1ed4b74, Func Offset: 0x214
	// Line 481, Address: 0x1ed4b78, Func Offset: 0x218
	// Line 482, Address: 0x1ed4b9c, Func Offset: 0x23c
	// Line 483, Address: 0x1ed4bc4, Func Offset: 0x264
	// Line 484, Address: 0x1ed4be0, Func Offset: 0x280
	// Line 485, Address: 0x1ed4bf0, Func Offset: 0x290
	// Line 487, Address: 0x1ed4c00, Func Offset: 0x2a0
	// Line 489, Address: 0x1ed4c0c, Func Offset: 0x2ac
	// Line 490, Address: 0x1ed4c20, Func Offset: 0x2c0
	// Line 491, Address: 0x1ed4c2c, Func Offset: 0x2cc
	// Line 499, Address: 0x1ed4c34, Func Offset: 0x2d4
	// Line 501, Address: 0x1ed4c38, Func Offset: 0x2d8
	// Line 502, Address: 0x1ed4c3c, Func Offset: 0x2dc
	// Func End, Address: 0x1ed4c5c, Func Offset: 0x2fc
}

// 
// Start address: 0x1ed4a60
int ev_forest0_fr22_medal_exec()
{
	// Line 780, Address: 0x1ed4a60, Func Offset: 0
	// Line 781, Address: 0x1ed4a74, Func Offset: 0x14
	// Line 782, Address: 0x1ed4a7c, Func Offset: 0x1c
	// Line 783, Address: 0x1ed4a80, Func Offset: 0x20
	// Func End, Address: 0x1ed4a88, Func Offset: 0x28
	// Line 293, Address: 0x1ed4a60, Func Offset: 0
	// Line 294, Address: 0x1ed4a64, Func Offset: 0x4
	// Line 297, Address: 0x1ed4a6c, Func Offset: 0xc
	// Line 299, Address: 0x1ed4a78, Func Offset: 0x18
	// Func End, Address: 0x1ed4a84, Func Offset: 0x24
	// Line 340, Address: 0x1ed4a60, Func Offset: 0
	// Func End, Address: 0x1ed4a68, Func Offset: 0x8
	// Line 193, Address: 0x1ed4a60, Func Offset: 0
	// Line 196, Address: 0x1ed4a64, Func Offset: 0x4
	// Line 193, Address: 0x1ed4a68, Func Offset: 0x8
	// Line 195, Address: 0x1ed4a70, Func Offset: 0x10
	// Line 196, Address: 0x1ed4a74, Func Offset: 0x14
	// Line 201, Address: 0x1ed4a98, Func Offset: 0x38
	// Line 202, Address: 0x1ed4aac, Func Offset: 0x4c
	// Line 205, Address: 0x1ed4ab4, Func Offset: 0x54
	// Line 207, Address: 0x1ed4ab8, Func Offset: 0x58
	// Line 206, Address: 0x1ed4abc, Func Offset: 0x5c
	// Line 207, Address: 0x1ed4ac0, Func Offset: 0x60
	// Func End, Address: 0x1ed4acc, Func Offset: 0x6c
}

// 
// Start address: 0x1ed4a70
int ev_forest0_fr22_medal_draw(sfObj* obj)
{
	_anon1* objfg;
	// Line 343, Address: 0x1ed4a70, Func Offset: 0
	// Line 345, Address: 0x1ed4a7c, Func Offset: 0xc
	// Line 348, Address: 0x1ed4a88, Func Offset: 0x18
	// Line 349, Address: 0x1ed4a90, Func Offset: 0x20
	// Line 350, Address: 0x1ed4ac8, Func Offset: 0x58
	// Line 354, Address: 0x1ed4ad4, Func Offset: 0x64
	// Line 356, Address: 0x1ed4adc, Func Offset: 0x6c
	// Line 357, Address: 0x1ed4ae4, Func Offset: 0x74
	// Line 358, Address: 0x1ed4ae8, Func Offset: 0x78
	// Line 359, Address: 0x1ed4af0, Func Offset: 0x80
	// Func End, Address: 0x1ed4b00, Func Offset: 0x90
}

// 
// Start address: 0x1ed4b00
int ev_forest0_fr22_medal_end(sfObj* obj)
{
	// Line 321, Address: 0x1ed4b00, Func Offset: 0
	// Line 324, Address: 0x1ed4b18, Func Offset: 0x18
	// Line 329, Address: 0x1ed4b20, Func Offset: 0x20
	// Line 332, Address: 0x1ed4b3c, Func Offset: 0x3c
	// Line 331, Address: 0x1ed4b50, Func Offset: 0x50
	// Line 332, Address: 0x1ed4b54, Func Offset: 0x54
	// Line 333, Address: 0x1ed4b5c, Func Offset: 0x5c
	// Line 334, Address: 0x1ed4b68, Func Offset: 0x68
	// Line 336, Address: 0x1ed4b84, Func Offset: 0x84
	// Line 339, Address: 0x1ed4b90, Func Offset: 0x90
	// Line 340, Address: 0x1ed4ba4, Func Offset: 0xa4
	// Line 341, Address: 0x1ed4ba8, Func Offset: 0xa8
	// Line 342, Address: 0x1ed4bbc, Func Offset: 0xbc
	// Line 345, Address: 0x1ed4bc0, Func Offset: 0xc0
	// Line 346, Address: 0x1ed4bc4, Func Offset: 0xc4
	// Func End, Address: 0x1ed4bdc, Func Offset: 0xdc
	// Line 362, Address: 0x1ed4b00, Func Offset: 0
	// Line 363, Address: 0x1ed4b0c, Func Offset: 0xc
	// Line 365, Address: 0x1ed4b14, Func Offset: 0x14
	// Line 366, Address: 0x1ed4b1c, Func Offset: 0x1c
	// Line 368, Address: 0x1ed4b20, Func Offset: 0x20
	// Line 367, Address: 0x1ed4b24, Func Offset: 0x24
	// Line 368, Address: 0x1ed4b28, Func Offset: 0x28
	// Func End, Address: 0x1ed4b30, Func Offset: 0x30
}

// 
// Start address: 0x1ed4b30
int ev_forest0_fr07_thing_fall_init(sfObj* obj)
{
	_fr07_ThingWork* wk;
	// Line 443, Address: 0x1ed4b30, Func Offset: 0
	// Line 449, Address: 0x1ed4b34, Func Offset: 0x4
	// Line 443, Address: 0x1ed4b38, Func Offset: 0x8
	// Line 449, Address: 0x1ed4b40, Func Offset: 0x10
	// Line 450, Address: 0x1ed4b50, Func Offset: 0x20
	// Line 457, Address: 0x1ed4b58, Func Offset: 0x28
	// Line 458, Address: 0x1ed4b60, Func Offset: 0x30
	// Line 459, Address: 0x1ed4b78, Func Offset: 0x48
	// Line 460, Address: 0x1ed4b90, Func Offset: 0x60
	// Line 461, Address: 0x1ed4ba8, Func Offset: 0x78
	// Line 462, Address: 0x1ed4bb0, Func Offset: 0x80
	// Line 467, Address: 0x1ed4bb8, Func Offset: 0x88
	// Line 466, Address: 0x1ed4bc0, Func Offset: 0x90
	// Line 467, Address: 0x1ed4bc4, Func Offset: 0x94
	// Func End, Address: 0x1ed4bcc, Func Offset: 0x9c
}

// 
// Start address: 0x1ed4bd0
int ev_forest0_fr07_thing_fall_start()
{
	// Line 470, Address: 0x1ed4bd0, Func Offset: 0
	// Line 471, Address: 0x1ed4bd8, Func Offset: 0x8
	// Line 472, Address: 0x1ed4be0, Func Offset: 0x10
	// Line 474, Address: 0x1ed4be8, Func Offset: 0x18
	// Func End, Address: 0x1ed4bf0, Func Offset: 0x20
}

// 
// Start address: 0x1ed4bf0
int ev_forest0_fr07_thing_fall_exec(sfObj* obj)
{
	_fr07_ThingWork* wk;
	float swing_v;
	float pos[4];
	float campos[4];
	float v0[4];
	int bQuake;
	float postbl[4][2];
	// Line 479, Address: 0x1ed4bf0, Func Offset: 0
	// Line 487, Address: 0x1ed4bf4, Func Offset: 0x4
	// Line 479, Address: 0x1ed4bf8, Func Offset: 0x8
	// Line 487, Address: 0x1ed4c08, Func Offset: 0x18
	// Line 480, Address: 0x1ed4c0c, Func Offset: 0x1c
	// Line 487, Address: 0x1ed4c10, Func Offset: 0x20
	// Line 489, Address: 0x1ed4c48, Func Offset: 0x58
	// Line 490, Address: 0x1ed4c4c, Func Offset: 0x5c
	// Line 489, Address: 0x1ed4c50, Func Offset: 0x60
	// Line 490, Address: 0x1ed4c54, Func Offset: 0x64
	// Line 491, Address: 0x1ed4c64, Func Offset: 0x74
	// Line 493, Address: 0x1ed4c6c, Func Offset: 0x7c
	// Line 494, Address: 0x1ed4c70, Func Offset: 0x80
	// Line 495, Address: 0x1ed4c84, Func Offset: 0x94
	// Line 496, Address: 0x1ed4c90, Func Offset: 0xa0
	// Line 497, Address: 0x1ed4c98, Func Offset: 0xa8
	// Line 501, Address: 0x1ed4ca0, Func Offset: 0xb0
	// Line 503, Address: 0x1ed4cb0, Func Offset: 0xc0
	// Line 505, Address: 0x1ed4cb8, Func Offset: 0xc8
	// Line 516, Address: 0x1ed4cc0, Func Offset: 0xd0
	// Line 505, Address: 0x1ed4cc8, Func Offset: 0xd8
	// Line 512, Address: 0x1ed4cd4, Func Offset: 0xe4
	// Line 513, Address: 0x1ed4cd8, Func Offset: 0xe8
	// Line 514, Address: 0x1ed4cdc, Func Offset: 0xec
	// Line 516, Address: 0x1ed4ce8, Func Offset: 0xf8
	// Line 517, Address: 0x1ed4cec, Func Offset: 0xfc
	// Line 521, Address: 0x1ed4cf0, Func Offset: 0x100
	// Line 523, Address: 0x1ed4d0c, Func Offset: 0x11c
	// Line 524, Address: 0x1ed4d18, Func Offset: 0x128
	// Line 523, Address: 0x1ed4d1c, Func Offset: 0x12c
	// Line 524, Address: 0x1ed4d2c, Func Offset: 0x13c
	// Line 527, Address: 0x1ed4d3c, Func Offset: 0x14c
	// Line 525, Address: 0x1ed4d48, Func Offset: 0x158
	// Line 527, Address: 0x1ed4d4c, Func Offset: 0x15c
	// Line 528, Address: 0x1ed4d68, Func Offset: 0x178
	// Line 529, Address: 0x1ed4d74, Func Offset: 0x184
	// Line 530, Address: 0x1ed4d78, Func Offset: 0x188
	// Line 531, Address: 0x1ed4d84, Func Offset: 0x194
	// Line 532, Address: 0x1ed4d8c, Func Offset: 0x19c
	// Line 533, Address: 0x1ed4d90, Func Offset: 0x1a0
	// Line 534, Address: 0x1ed4d9c, Func Offset: 0x1ac
	// Line 533, Address: 0x1ed4dac, Func Offset: 0x1bc
	// Line 534, Address: 0x1ed4db0, Func Offset: 0x1c0
	// Line 535, Address: 0x1ed4dbc, Func Offset: 0x1cc
	// Line 538, Address: 0x1ed4dc8, Func Offset: 0x1d8
	// Line 541, Address: 0x1ed4dd0, Func Offset: 0x1e0
	// Line 544, Address: 0x1ed4de0, Func Offset: 0x1f0
	// Line 545, Address: 0x1ed4df0, Func Offset: 0x200
	// Line 550, Address: 0x1ed4df8, Func Offset: 0x208
	// Line 551, Address: 0x1ed4e20, Func Offset: 0x230
	// Line 553, Address: 0x1ed4e48, Func Offset: 0x258
	// Line 554, Address: 0x1ed4e50, Func Offset: 0x260
	// Line 556, Address: 0x1ed4e58, Func Offset: 0x268
	// Line 561, Address: 0x1ed4e74, Func Offset: 0x284
	// Line 562, Address: 0x1ed4e7c, Func Offset: 0x28c
	// Line 561, Address: 0x1ed4e80, Func Offset: 0x290
	// Line 562, Address: 0x1ed4e8c, Func Offset: 0x29c
	// Line 561, Address: 0x1ed4e90, Func Offset: 0x2a0
	// Line 562, Address: 0x1ed4eac, Func Offset: 0x2bc
	// Line 563, Address: 0x1ed4eb4, Func Offset: 0x2c4
	// Line 569, Address: 0x1ed4ee8, Func Offset: 0x2f8
	// Line 568, Address: 0x1ed4ef8, Func Offset: 0x308
	// Line 569, Address: 0x1ed4efc, Func Offset: 0x30c
	// Func End, Address: 0x1ed4f04, Func Offset: 0x314
}

// 
// Start address: 0x1ed4f10
int ev_forest0_fr07_thing_fall_draw(sfObj* obj)
{
	// Line 997, Address: 0x1ed4f10, Func Offset: 0
	// Line 998, Address: 0x1ed4f38, Func Offset: 0x28
	// Func End, Address: 0x1ed4f40, Func Offset: 0x30
	// Line 571, Address: 0x1ed4f10, Func Offset: 0
	// Line 572, Address: 0x1ed4f1c, Func Offset: 0xc
	// Line 574, Address: 0x1ed4f24, Func Offset: 0x14
	// Line 575, Address: 0x1ed4f2c, Func Offset: 0x1c
	// Line 577, Address: 0x1ed4f30, Func Offset: 0x20
	// Line 576, Address: 0x1ed4f34, Func Offset: 0x24
	// Line 577, Address: 0x1ed4f38, Func Offset: 0x28
	// Func End, Address: 0x1ed4f40, Func Offset: 0x30
	// Line 113, Address: 0x1ed4f10, Func Offset: 0
	// Func End, Address: 0x1ed4f18, Func Offset: 0x8
}

// 
// Start address: 0x1ed4f40
int ev_forest0_fr07_thing_fall_end(sfObj* obj)
{
	// Line 1011, Address: 0x1ed4f40, Func Offset: 0
	// Line 1012, Address: 0x1ed4f54, Func Offset: 0x14
	// Line 1016, Address: 0x1ed4f58, Func Offset: 0x18
	// Func End, Address: 0x1ed4f60, Func Offset: 0x20
	// Line 579, Address: 0x1ed4f40, Func Offset: 0
	// Line 582, Address: 0x1ed4f4c, Func Offset: 0xc
	// Line 584, Address: 0x1ed4f54, Func Offset: 0x14
	// Line 585, Address: 0x1ed4f5c, Func Offset: 0x1c
	// Line 587, Address: 0x1ed4f60, Func Offset: 0x20
	// Line 586, Address: 0x1ed4f64, Func Offset: 0x24
	// Line 587, Address: 0x1ed4f68, Func Offset: 0x28
	// Func End, Address: 0x1ed4f70, Func Offset: 0x30
}

// 
// Start address: 0x1ed4f70
int ev_forest0_fr_child_init(sfObj* obj)
{
	_evBgCharData dat;
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
int ev_forest0_fr_child_exec(sfObj* obj)
{
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
// Start address: 0x1ed5020
int ev_forest0_fr_child_draw(sfObj* obj)
{
	// Line 610, Address: 0x1ed5020, Func Offset: 0
	// Line 611, Address: 0x1ed5028, Func Offset: 0x8
	// Line 613, Address: 0x1ed5030, Func Offset: 0x10
	// Line 612, Address: 0x1ed5034, Func Offset: 0x14
	// Line 613, Address: 0x1ed5038, Func Offset: 0x18
	// Func End, Address: 0x1ed5040, Func Offset: 0x20
	// Line 193, Address: 0x1ed5020, Func Offset: 0
	// Line 197, Address: 0x1ed5024, Func Offset: 0x4
	// Line 193, Address: 0x1ed5028, Func Offset: 0x8
	// Line 197, Address: 0x1ed503c, Func Offset: 0x1c
	// Line 199, Address: 0x1ed5044, Func Offset: 0x24
	// Line 201, Address: 0x1ed504c, Func Offset: 0x2c
	// Line 199, Address: 0x1ed5050, Func Offset: 0x30
	// Line 201, Address: 0x1ed5054, Func Offset: 0x34
	// Line 202, Address: 0x1ed5060, Func Offset: 0x40
	// Line 204, Address: 0x1ed506c, Func Offset: 0x4c
	// Line 205, Address: 0x1ed507c, Func Offset: 0x5c
	// Line 206, Address: 0x1ed5084, Func Offset: 0x64
	// Line 208, Address: 0x1ed50b0, Func Offset: 0x90
	// Line 209, Address: 0x1ed50c0, Func Offset: 0xa0
	// Line 210, Address: 0x1ed50d0, Func Offset: 0xb0
	// Line 212, Address: 0x1ed50f0, Func Offset: 0xd0
	// Line 213, Address: 0x1ed50f8, Func Offset: 0xd8
	// Line 214, Address: 0x1ed5104, Func Offset: 0xe4
	// Line 218, Address: 0x1ed5110, Func Offset: 0xf0
	// Line 219, Address: 0x1ed5118, Func Offset: 0xf8
	// Line 221, Address: 0x1ed5120, Func Offset: 0x100
	// Line 223, Address: 0x1ed5130, Func Offset: 0x110
	// Line 226, Address: 0x1ed5138, Func Offset: 0x118
	// Line 227, Address: 0x1ed5144, Func Offset: 0x124
	// Line 228, Address: 0x1ed5158, Func Offset: 0x138
	// Line 230, Address: 0x1ed516c, Func Offset: 0x14c
	// Line 233, Address: 0x1ed5170, Func Offset: 0x150
	// Line 231, Address: 0x1ed5174, Func Offset: 0x154
	// Line 233, Address: 0x1ed5178, Func Offset: 0x158
	// Line 234, Address: 0x1ed5184, Func Offset: 0x164
	// Func End, Address: 0x1ed51a0, Func Offset: 0x180
}

// 
// Start address: 0x1ed5040
int ev_forest0_fr_child_end(sfObj* obj)
{
	// Line 615, Address: 0x1ed5040, Func Offset: 0
	// Line 616, Address: 0x1ed5048, Func Offset: 0x8
	// Line 618, Address: 0x1ed5050, Func Offset: 0x10
	// Line 617, Address: 0x1ed5054, Func Offset: 0x14
	// Line 618, Address: 0x1ed5058, Func Offset: 0x18
	// Func End, Address: 0x1ed5060, Func Offset: 0x20
	// Line 634, Address: 0x1ed5040, Func Offset: 0
	// Line 635, Address: 0x1ed5050, Func Offset: 0x10
	// Line 638, Address: 0x1ed5054, Func Offset: 0x14
	// Line 639, Address: 0x1ed505c, Func Offset: 0x1c
	// Line 641, Address: 0x1ed506c, Func Offset: 0x2c
	// Line 640, Address: 0x1ed5070, Func Offset: 0x30
	// Line 641, Address: 0x1ed5074, Func Offset: 0x34
	// Func End, Address: 0x1ed5084, Func Offset: 0x44
}

// 
// Start address: 0x1ed5060
int ev_forest0_fr17_095b_end()
{
	// Line 626, Address: 0x1ed5060, Func Offset: 0
	// Line 630, Address: 0x1ed5068, Func Offset: 0x8
	// Line 631, Address: 0x1ed5070, Func Offset: 0x10
	// Line 632, Address: 0x1ed507c, Func Offset: 0x1c
	// Line 634, Address: 0x1ed5084, Func Offset: 0x24
	// Line 635, Address: 0x1ed508c, Func Offset: 0x2c
	// Line 638, Address: 0x1ed5094, Func Offset: 0x34
	// Line 637, Address: 0x1ed5098, Func Offset: 0x38
	// Line 638, Address: 0x1ed509c, Func Offset: 0x3c
	// Func End, Address: 0x1ed50a4, Func Offset: 0x44
}

// 
// Start address: 0x1ed50b0
int ev_forest0_fr17_095b_exec()
{
	// Line 659, Address: 0x1ed50b0, Func Offset: 0
	// Func End, Address: 0x1ed50b8, Func Offset: 0x8
	// Line 179, Address: 0x1ed50b0, Func Offset: 0
	// Func End, Address: 0x1ed50b8, Func Offset: 0x8
}

// 
// Start address: 0x1ed50c0
int ev_forest0_fr13_095b_efc_exec(sfObj* obj)
{
	// Line 808, Address: 0x1ed50c0, Func Offset: 0
	// Line 809, Address: 0x1ed50d0, Func Offset: 0x10
	// Line 808, Address: 0x1ed50d4, Func Offset: 0x14
	// Line 811, Address: 0x1ed50d8, Func Offset: 0x18
	// Line 815, Address: 0x1ed50e0, Func Offset: 0x20
	// Line 822, Address: 0x1ed50f0, Func Offset: 0x30
	// Line 823, Address: 0x1ed50f4, Func Offset: 0x34
	// Line 822, Address: 0x1ed50f8, Func Offset: 0x38
	// Line 823, Address: 0x1ed50fc, Func Offset: 0x3c
	// Line 827, Address: 0x1ed5128, Func Offset: 0x68
	// Line 829, Address: 0x1ed5130, Func Offset: 0x70
	// Line 828, Address: 0x1ed5134, Func Offset: 0x74
	// Line 829, Address: 0x1ed5138, Func Offset: 0x78
	// Line 828, Address: 0x1ed513c, Func Offset: 0x7c
	// Line 827, Address: 0x1ed5144, Func Offset: 0x84
	// Line 830, Address: 0x1ed5148, Func Offset: 0x88
	// Line 834, Address: 0x1ed5150, Func Offset: 0x90
	// Line 836, Address: 0x1ed5158, Func Offset: 0x98
	// Line 835, Address: 0x1ed515c, Func Offset: 0x9c
	// Line 836, Address: 0x1ed5160, Func Offset: 0xa0
	// Line 835, Address: 0x1ed5164, Func Offset: 0xa4
	// Line 834, Address: 0x1ed516c, Func Offset: 0xac
	// Line 835, Address: 0x1ed5174, Func Offset: 0xb4
	// Line 840, Address: 0x1ed5178, Func Offset: 0xb8
	// Line 842, Address: 0x1ed5188, Func Offset: 0xc8
	// Line 843, Address: 0x1ed5194, Func Offset: 0xd4
	// Line 845, Address: 0x1ed5198, Func Offset: 0xd8
	// Line 846, Address: 0x1ed51ac, Func Offset: 0xec
	// Line 849, Address: 0x1ed51b0, Func Offset: 0xf0
	// Line 850, Address: 0x1ed51b4, Func Offset: 0xf4
	// Func End, Address: 0x1ed51d0, Func Offset: 0x110
	// Line 672, Address: 0x1ed50c0, Func Offset: 0
	// Line 673, Address: 0x1ed50c4, Func Offset: 0x4
	// Line 672, Address: 0x1ed50c8, Func Offset: 0x8
	// Line 673, Address: 0x1ed50d0, Func Offset: 0x10
	// Line 674, Address: 0x1ed50ec, Func Offset: 0x2c
	// Line 675, Address: 0x1ed50f0, Func Offset: 0x30
	// Line 676, Address: 0x1ed5104, Func Offset: 0x44
	// Line 677, Address: 0x1ed510c, Func Offset: 0x4c
	// Line 679, Address: 0x1ed5110, Func Offset: 0x50
	// Line 681, Address: 0x1ed5118, Func Offset: 0x58
	// Line 682, Address: 0x1ed512c, Func Offset: 0x6c
	// Line 683, Address: 0x1ed5134, Func Offset: 0x74
	// Line 688, Address: 0x1ed5138, Func Offset: 0x78
	// Line 687, Address: 0x1ed5140, Func Offset: 0x80
	// Line 688, Address: 0x1ed5144, Func Offset: 0x84
	// Func End, Address: 0x1ed514c, Func Offset: 0x8c
	// Line 652, Address: 0x1ed50c0, Func Offset: 0
	// Line 658, Address: 0x1ed50c4, Func Offset: 0x4
	// Line 652, Address: 0x1ed50c8, Func Offset: 0x8
	// Line 658, Address: 0x1ed50d0, Func Offset: 0x10
	// Line 659, Address: 0x1ed50e0, Func Offset: 0x20
	// Line 663, Address: 0x1ed50e8, Func Offset: 0x28
	// Line 665, Address: 0x1ed50ec, Func Offset: 0x2c
	// Line 663, Address: 0x1ed50f0, Func Offset: 0x30
	// Line 665, Address: 0x1ed50f4, Func Offset: 0x34
	// Line 666, Address: 0x1ed50fc, Func Offset: 0x3c
	// Line 667, Address: 0x1ed5114, Func Offset: 0x54
	// Line 668, Address: 0x1ed512c, Func Offset: 0x6c
	// Line 669, Address: 0x1ed5144, Func Offset: 0x84
	// Line 670, Address: 0x1ed514c, Func Offset: 0x8c
	// Line 672, Address: 0x1ed5154, Func Offset: 0x94
	// Line 675, Address: 0x1ed5158, Func Offset: 0x98
	// Line 674, Address: 0x1ed5160, Func Offset: 0xa0
	// Line 675, Address: 0x1ed5164, Func Offset: 0xa4
	// Func End, Address: 0x1ed516c, Func Offset: 0xac
	// Line 181, Address: 0x1ed50c0, Func Offset: 0
	// Line 182, Address: 0x1ed50cc, Func Offset: 0xc
	// Line 183, Address: 0x1ed50d4, Func Offset: 0x14
	// Line 184, Address: 0x1ed50dc, Func Offset: 0x1c
	// Line 185, Address: 0x1ed50e8, Func Offset: 0x28
	// Line 188, Address: 0x1ed50f0, Func Offset: 0x30
	// Line 186, Address: 0x1ed50f4, Func Offset: 0x34
	// Line 188, Address: 0x1ed50f8, Func Offset: 0x38
	// Func End, Address: 0x1ed5104, Func Offset: 0x44
}

// 
// Start address: 0x1ed5150
int ev_forest0_fr13_095b_efc_draw(sfObj* obj)
{
	// Line 691, Address: 0x1ed5150, Func Offset: 0
	// Line 693, Address: 0x1ed5154, Func Offset: 0x4
	// Line 691, Address: 0x1ed5158, Func Offset: 0x8
	// Line 693, Address: 0x1ed515c, Func Offset: 0xc
	// Line 695, Address: 0x1ed5170, Func Offset: 0x20
	// Line 696, Address: 0x1ed517c, Func Offset: 0x2c
	// Line 697, Address: 0x1ed5188, Func Offset: 0x38
	// Line 698, Address: 0x1ed5194, Func Offset: 0x44
	// Line 699, Address: 0x1ed519c, Func Offset: 0x4c
	// Line 702, Address: 0x1ed51a8, Func Offset: 0x58
	// Line 708, Address: 0x1ed51c0, Func Offset: 0x70
	// Line 707, Address: 0x1ed51c4, Func Offset: 0x74
	// Line 708, Address: 0x1ed51c8, Func Offset: 0x78
	// Func End, Address: 0x1ed51d0, Func Offset: 0x80
}

// 
// Start address: 0x1ed51d0
int ev_forest0_fr_wheelchair_init(sfObj* obj)
{
	_evBgCharData dat;
	// Line 856, Address: 0x1ed51d0, Func Offset: 0
	// Line 857, Address: 0x1ed51d8, Func Offset: 0x8
	// Line 858, Address: 0x1ed51e0, Func Offset: 0x10
	// Line 861, Address: 0x1ed51e8, Func Offset: 0x18
	// Line 867, Address: 0x1ed51ec, Func Offset: 0x1c
	// Line 861, Address: 0x1ed5210, Func Offset: 0x40
	// Line 862, Address: 0x1ed5214, Func Offset: 0x44
	// Line 863, Address: 0x1ed521c, Func Offset: 0x4c
	// Line 867, Address: 0x1ed5224, Func Offset: 0x54
	// Line 868, Address: 0x1ed522c, Func Offset: 0x5c
	// Line 869, Address: 0x1ed5230, Func Offset: 0x60
	// Func End, Address: 0x1ed523c, Func Offset: 0x6c
	// Line 715, Address: 0x1ed51d0, Func Offset: 0
	// Line 716, Address: 0x1ed51d4, Func Offset: 0x4
	// Line 715, Address: 0x1ed51d8, Func Offset: 0x8
	// Line 716, Address: 0x1ed51dc, Func Offset: 0xc
	// Line 720, Address: 0x1ed51e8, Func Offset: 0x18
	// Line 722, Address: 0x1ed51f0, Func Offset: 0x20
	// Line 721, Address: 0x1ed51f4, Func Offset: 0x24
	// Line 722, Address: 0x1ed51f8, Func Offset: 0x28
	// Func End, Address: 0x1ed5200, Func Offset: 0x30
}

// 
// Start address: 0x1ed5200
int ev_forest0_fr_wheelchair_exec(sfObj* obj)
{
	float pos[4][2];
	// Line 1132, Address: 0x1ed5200, Func Offset: 0
	// Line 1136, Address: 0x1ed5204, Func Offset: 0x4
	// Line 1132, Address: 0x1ed5208, Func Offset: 0x8
	// Line 1136, Address: 0x1ed5214, Func Offset: 0x14
	// Line 1134, Address: 0x1ed5218, Func Offset: 0x18
	// Line 1136, Address: 0x1ed521c, Func Offset: 0x1c
	// Line 1138, Address: 0x1ed5248, Func Offset: 0x48
	// Line 1139, Address: 0x1ed5258, Func Offset: 0x58
	// Line 1140, Address: 0x1ed527c, Func Offset: 0x7c
	// Line 1142, Address: 0x1ed5284, Func Offset: 0x84
	// Line 1143, Address: 0x1ed528c, Func Offset: 0x8c
	// Line 1145, Address: 0x1ed5290, Func Offset: 0x90
	// Line 1147, Address: 0x1ed52a0, Func Offset: 0xa0
	// Line 1149, Address: 0x1ed52a8, Func Offset: 0xa8
	// Line 1150, Address: 0x1ed52c4, Func Offset: 0xc4
	// Line 1151, Address: 0x1ed52d0, Func Offset: 0xd0
	// Line 1153, Address: 0x1ed52d8, Func Offset: 0xd8
	// Line 1156, Address: 0x1ed52e0, Func Offset: 0xe0
	// Line 1157, Address: 0x1ed52f0, Func Offset: 0xf0
	// Line 1160, Address: 0x1ed5314, Func Offset: 0x114
	// Line 1161, Address: 0x1ed5328, Func Offset: 0x128
	// Line 1163, Address: 0x1ed5330, Func Offset: 0x130
	// Line 1166, Address: 0x1ed5338, Func Offset: 0x138
	// Line 1167, Address: 0x1ed5348, Func Offset: 0x148
	// Line 1171, Address: 0x1ed5350, Func Offset: 0x150
	// Line 1172, Address: 0x1ed5358, Func Offset: 0x158
	// Func End, Address: 0x1ed536c, Func Offset: 0x16c
	// Line 724, Address: 0x1ed5200, Func Offset: 0
	// Line 725, Address: 0x1ed5204, Func Offset: 0x4
	// Line 724, Address: 0x1ed5208, Func Offset: 0x8
	// Line 725, Address: 0x1ed520c, Func Offset: 0xc
	// Line 724, Address: 0x1ed5210, Func Offset: 0x10
	// Line 725, Address: 0x1ed5214, Func Offset: 0x14
	// Line 730, Address: 0x1ed521c, Func Offset: 0x1c
	// Line 725, Address: 0x1ed5220, Func Offset: 0x20
	// Line 730, Address: 0x1ed522c, Func Offset: 0x2c
	// Line 731, Address: 0x1ed523c, Func Offset: 0x3c
	// Line 732, Address: 0x1ed5248, Func Offset: 0x48
	// Line 733, Address: 0x1ed5254, Func Offset: 0x54
	// Line 734, Address: 0x1ed5260, Func Offset: 0x60
	// Line 735, Address: 0x1ed5268, Func Offset: 0x68
	// Line 736, Address: 0x1ed5274, Func Offset: 0x74
	// Line 737, Address: 0x1ed5278, Func Offset: 0x78
	// Line 739, Address: 0x1ed5280, Func Offset: 0x80
	// Line 738, Address: 0x1ed5284, Func Offset: 0x84
	// Line 739, Address: 0x1ed5288, Func Offset: 0x88
	// Func End, Address: 0x1ed5294, Func Offset: 0x94
	// Line 549, Address: 0x1ed5200, Func Offset: 0
	// Line 558, Address: 0x1ed5204, Func Offset: 0x4
	// Line 549, Address: 0x1ed5208, Func Offset: 0x8
	// Line 558, Address: 0x1ed520c, Func Offset: 0xc
	// Line 549, Address: 0x1ed5210, Func Offset: 0x10
	// Line 558, Address: 0x1ed5218, Func Offset: 0x18
	// Line 549, Address: 0x1ed521c, Func Offset: 0x1c
	// Line 558, Address: 0x1ed5220, Func Offset: 0x20
	// Line 549, Address: 0x1ed5224, Func Offset: 0x24
	// Line 558, Address: 0x1ed5228, Func Offset: 0x28
	// Line 549, Address: 0x1ed522c, Func Offset: 0x2c
	// Line 557, Address: 0x1ed5234, Func Offset: 0x34
	// Line 549, Address: 0x1ed5238, Func Offset: 0x38
	// Line 557, Address: 0x1ed523c, Func Offset: 0x3c
	// Line 549, Address: 0x1ed5240, Func Offset: 0x40
	// Line 558, Address: 0x1ed5244, Func Offset: 0x44
	// Line 549, Address: 0x1ed5248, Func Offset: 0x48
	// Line 558, Address: 0x1ed524c, Func Offset: 0x4c
	// Line 550, Address: 0x1ed5250, Func Offset: 0x50
	// Line 556, Address: 0x1ed5254, Func Offset: 0x54
	// Line 558, Address: 0x1ed5260, Func Offset: 0x60
	// Line 559, Address: 0x1ed5270, Func Offset: 0x70
	// Line 564, Address: 0x1ed527c, Func Offset: 0x7c
	// Line 559, Address: 0x1ed5284, Func Offset: 0x84
	// Line 560, Address: 0x1ed52d0, Func Offset: 0xd0
	// Line 561, Address: 0x1ed530c, Func Offset: 0x10c
	// Line 562, Address: 0x1ed5328, Func Offset: 0x128
	// Line 563, Address: 0x1ed5330, Func Offset: 0x130
	// Line 564, Address: 0x1ed5334, Func Offset: 0x134
	// Line 566, Address: 0x1ed533c, Func Offset: 0x13c
	// Line 565, Address: 0x1ed5340, Func Offset: 0x140
	// Line 566, Address: 0x1ed5344, Func Offset: 0x144
	// Line 567, Address: 0x1ed5350, Func Offset: 0x150
	// Func End, Address: 0x1ed5380, Func Offset: 0x180
}

// 
// Start address: 0x1ed52a0
int ev_forest0_fr_wheelchair_draw(sfObj* obj)
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
// Start address: 0x1ed52c0
int ev_forest0_fr_wheelchair_end(sfObj* obj)
{
	// Line 746, Address: 0x1ed52c0, Func Offset: 0
	// Line 747, Address: 0x1ed52c8, Func Offset: 0x8
	// Line 749, Address: 0x1ed52d0, Func Offset: 0x10
	// Line 748, Address: 0x1ed52d4, Func Offset: 0x14
	// Line 749, Address: 0x1ed52d8, Func Offset: 0x18
	// Func End, Address: 0x1ed52e0, Func Offset: 0x20
	// Line 281, Address: 0x1ed52c0, Func Offset: 0
	// Line 283, Address: 0x1ed52d0, Func Offset: 0x10
	// Line 284, Address: 0x1ed52dc, Func Offset: 0x1c
	// Line 285, Address: 0x1ed52e8, Func Offset: 0x28
	// Line 286, Address: 0x1ed52f4, Func Offset: 0x34
	// Func End, Address: 0x1ed5308, Func Offset: 0x48
}

// 
// Start address: 0x1ed52e0
int ev_forest0_fr_dool_init(sfObj* obj)
{
	float pos[4];
	_evBgCharData dat;
	// Line 902, Address: 0x1ed52e0, Func Offset: 0
	// Func End, Address: 0x1ed52e8, Func Offset: 0x8
	// Line 757, Address: 0x1ed52e0, Func Offset: 0
	// Line 758, Address: 0x1ed52e4, Func Offset: 0x4
	// Line 757, Address: 0x1ed52e8, Func Offset: 0x8
	// Line 758, Address: 0x1ed52ec, Func Offset: 0xc
	// Line 757, Address: 0x1ed52f0, Func Offset: 0x10
	// Line 758, Address: 0x1ed52f4, Func Offset: 0x14
	// Line 760, Address: 0x1ed52fc, Func Offset: 0x1c
	// Line 758, Address: 0x1ed5308, Func Offset: 0x28
	// Line 760, Address: 0x1ed530c, Func Offset: 0x2c
	// Line 764, Address: 0x1ed5314, Func Offset: 0x34
	// Line 765, Address: 0x1ed531c, Func Offset: 0x3c
	// Line 768, Address: 0x1ed5328, Func Offset: 0x48
	// Line 767, Address: 0x1ed532c, Func Offset: 0x4c
	// Line 768, Address: 0x1ed5330, Func Offset: 0x50
	// Func End, Address: 0x1ed533c, Func Offset: 0x5c
}

// 
// Start address: 0x1ed5340
int ev_forest0_fr_dool_exec(sfObj* obj)
{
	// Line 770, Address: 0x1ed5340, Func Offset: 0
	// Line 771, Address: 0x1ed5344, Func Offset: 0x4
	// Line 770, Address: 0x1ed5348, Func Offset: 0x8
	// Line 771, Address: 0x1ed5350, Func Offset: 0x10
	// Line 772, Address: 0x1ed5364, Func Offset: 0x24
	// Line 774, Address: 0x1ed536c, Func Offset: 0x2c
	// Line 773, Address: 0x1ed5370, Func Offset: 0x30
	// Line 774, Address: 0x1ed5374, Func Offset: 0x34
	// Func End, Address: 0x1ed5380, Func Offset: 0x40
}

// 
// Start address: 0x1ed5380
int ev_forest0_fr_dool_draw(sfObj* obj)
{
	// Line 776, Address: 0x1ed5380, Func Offset: 0
	// Line 777, Address: 0x1ed5388, Func Offset: 0x8
	// Line 779, Address: 0x1ed5390, Func Offset: 0x10
	// Line 778, Address: 0x1ed5394, Func Offset: 0x14
	// Line 779, Address: 0x1ed5398, Func Offset: 0x18
	// Func End, Address: 0x1ed53a0, Func Offset: 0x20
	// Line 573, Address: 0x1ed5380, Func Offset: 0
	// Line 577, Address: 0x1ed5384, Func Offset: 0x4
	// Line 578, Address: 0x1ed5398, Func Offset: 0x18
	// Line 580, Address: 0x1ed53a4, Func Offset: 0x24
	// Line 582, Address: 0x1ed53a8, Func Offset: 0x28
	// Line 583, Address: 0x1ed53b0, Func Offset: 0x30
	// Line 585, Address: 0x1ed53bc, Func Offset: 0x3c
	// Line 587, Address: 0x1ed53c4, Func Offset: 0x44
	// Line 588, Address: 0x1ed53c8, Func Offset: 0x48
	// Func End, Address: 0x1ed53d0, Func Offset: 0x50
}

// 
// Start address: 0x1ed53a0
int ev_forest0_fr_dool_end(sfObj* obj)
{
	// Line 781, Address: 0x1ed53a0, Func Offset: 0
	// Line 782, Address: 0x1ed53a8, Func Offset: 0x8
	// Line 784, Address: 0x1ed53b0, Func Offset: 0x10
	// Line 783, Address: 0x1ed53b4, Func Offset: 0x14
	// Line 784, Address: 0x1ed53b8, Func Offset: 0x18
	// Func End, Address: 0x1ed53c0, Func Offset: 0x20
}

// 
// Start address: 0x1ed53c0
int ev_forest0_fr_doolparts_init(sfObj* obj)
{
	// Line 1199, Address: 0x1ed53c0, Func Offset: 0
	// Line 1203, Address: 0x1ed53c4, Func Offset: 0x4
	// Line 1199, Address: 0x1ed53c8, Func Offset: 0x8
	// Line 1203, Address: 0x1ed53d4, Func Offset: 0x14
	// Line 1201, Address: 0x1ed53d8, Func Offset: 0x18
	// Line 1203, Address: 0x1ed53dc, Func Offset: 0x1c
	// Line 1205, Address: 0x1ed5414, Func Offset: 0x54
	// Line 1206, Address: 0x1ed5418, Func Offset: 0x58
	// Line 1207, Address: 0x1ed5424, Func Offset: 0x64
	// Line 1208, Address: 0x1ed542c, Func Offset: 0x6c
	// Line 1209, Address: 0x1ed5434, Func Offset: 0x74
	// Line 1210, Address: 0x1ed5438, Func Offset: 0x78
	// Line 1211, Address: 0x1ed5448, Func Offset: 0x88
	// Line 1212, Address: 0x1ed546c, Func Offset: 0xac
	// Line 1214, Address: 0x1ed5474, Func Offset: 0xb4
	// Line 1215, Address: 0x1ed547c, Func Offset: 0xbc
	// Line 1217, Address: 0x1ed5480, Func Offset: 0xc0
	// Line 1219, Address: 0x1ed5490, Func Offset: 0xd0
	// Line 1220, Address: 0x1ed54ac, Func Offset: 0xec
	// Line 1221, Address: 0x1ed54b8, Func Offset: 0xf8
	// Line 1223, Address: 0x1ed54c0, Func Offset: 0x100
	// Line 1226, Address: 0x1ed54c8, Func Offset: 0x108
	// Line 1227, Address: 0x1ed54d8, Func Offset: 0x118
	// Line 1230, Address: 0x1ed54fc, Func Offset: 0x13c
	// Line 1231, Address: 0x1ed5510, Func Offset: 0x150
	// Line 1233, Address: 0x1ed5518, Func Offset: 0x158
	// Line 1236, Address: 0x1ed5520, Func Offset: 0x160
	// Line 1237, Address: 0x1ed5530, Func Offset: 0x170
	// Line 1241, Address: 0x1ed5538, Func Offset: 0x178
	// Line 1242, Address: 0x1ed5540, Func Offset: 0x180
	// Func End, Address: 0x1ed5554, Func Offset: 0x194
	// Line 804, Address: 0x1ed53c0, Func Offset: 0
	// Line 806, Address: 0x1ed53c4, Func Offset: 0x4
	// Line 804, Address: 0x1ed53c8, Func Offset: 0x8
	// Line 806, Address: 0x1ed53cc, Func Offset: 0xc
	// Line 808, Address: 0x1ed53e8, Func Offset: 0x28
	// Line 807, Address: 0x1ed53ec, Func Offset: 0x2c
	// Line 808, Address: 0x1ed53f0, Func Offset: 0x30
	// Func End, Address: 0x1ed53f8, Func Offset: 0x38
}

// 
// Start address: 0x1ed5400
int ev_forest0_fr_doolparts_draw(sfObj* obj)
{
	_anon6* dt;
	// Line 811, Address: 0x1ed5400, Func Offset: 0
	// Line 812, Address: 0x1ed5404, Func Offset: 0x4
	// Line 811, Address: 0x1ed5408, Func Offset: 0x8
	// Line 813, Address: 0x1ed540c, Func Offset: 0xc
	// Line 811, Address: 0x1ed5410, Func Offset: 0x10
	// Line 812, Address: 0x1ed5414, Func Offset: 0x14
	// Line 813, Address: 0x1ed5420, Func Offset: 0x20
	// Line 812, Address: 0x1ed5424, Func Offset: 0x24
	// Line 813, Address: 0x1ed542c, Func Offset: 0x2c
	// Line 812, Address: 0x1ed5430, Func Offset: 0x30
	// Line 813, Address: 0x1ed5434, Func Offset: 0x34
	// Line 814, Address: 0x1ed543c, Func Offset: 0x3c
	// Line 815, Address: 0x1ed5444, Func Offset: 0x44
	// Line 816, Address: 0x1ed544c, Func Offset: 0x4c
	// Line 815, Address: 0x1ed5450, Func Offset: 0x50
	// Line 817, Address: 0x1ed5454, Func Offset: 0x54
	// Line 818, Address: 0x1ed545c, Func Offset: 0x5c
	// Line 820, Address: 0x1ed54a0, Func Offset: 0xa0
	// Line 823, Address: 0x1ed54a8, Func Offset: 0xa8
	// Line 824, Address: 0x1ed54b0, Func Offset: 0xb0
	// Line 825, Address: 0x1ed54b8, Func Offset: 0xb8
	// Func End, Address: 0x1ed54c8, Func Offset: 0xc8
	// Line 430, Address: 0x1ed5400, Func Offset: 0
	// Line 432, Address: 0x1ed5404, Func Offset: 0x4
	// Line 430, Address: 0x1ed5408, Func Offset: 0x8
	// Line 432, Address: 0x1ed540c, Func Offset: 0xc
	// Line 430, Address: 0x1ed5410, Func Offset: 0x10
	// Line 432, Address: 0x1ed5420, Func Offset: 0x20
	// Line 434, Address: 0x1ed5424, Func Offset: 0x24
	// Line 431, Address: 0x1ed5428, Func Offset: 0x28
	// Line 432, Address: 0x1ed542c, Func Offset: 0x2c
	// Line 434, Address: 0x1ed5430, Func Offset: 0x30
	// Line 436, Address: 0x1ed5458, Func Offset: 0x58
	// Line 437, Address: 0x1ed5464, Func Offset: 0x64
	// Line 438, Address: 0x1ed549c, Func Offset: 0x9c
	// Line 439, Address: 0x1ed54a0, Func Offset: 0xa0
	// Line 440, Address: 0x1ed54a4, Func Offset: 0xa4
	// Line 441, Address: 0x1ed54ac, Func Offset: 0xac
	// Line 442, Address: 0x1ed54b0, Func Offset: 0xb0
	// Line 443, Address: 0x1ed54b8, Func Offset: 0xb8
	// Line 444, Address: 0x1ed54c0, Func Offset: 0xc0
	// Line 445, Address: 0x1ed54cc, Func Offset: 0xcc
	// Line 446, Address: 0x1ed54d0, Func Offset: 0xd0
	// Line 447, Address: 0x1ed54d4, Func Offset: 0xd4
	// Line 448, Address: 0x1ed54e0, Func Offset: 0xe0
	// Line 447, Address: 0x1ed54ec, Func Offset: 0xec
	// Line 448, Address: 0x1ed54f0, Func Offset: 0xf0
	// Line 449, Address: 0x1ed54fc, Func Offset: 0xfc
	// Line 450, Address: 0x1ed552c, Func Offset: 0x12c
	// Line 452, Address: 0x1ed5534, Func Offset: 0x134
	// Line 453, Address: 0x1ed5560, Func Offset: 0x160
	// Line 455, Address: 0x1ed556c, Func Offset: 0x16c
	// Line 456, Address: 0x1ed5574, Func Offset: 0x174
	// Line 458, Address: 0x1ed5580, Func Offset: 0x180
	// Line 459, Address: 0x1ed558c, Func Offset: 0x18c
	// Line 460, Address: 0x1ed5594, Func Offset: 0x194
	// Line 475, Address: 0x1ed559c, Func Offset: 0x19c
	// Line 477, Address: 0x1ed55a8, Func Offset: 0x1a8
	// Line 475, Address: 0x1ed55ac, Func Offset: 0x1ac
	// Line 477, Address: 0x1ed55b8, Func Offset: 0x1b8
	// Line 479, Address: 0x1ed55bc, Func Offset: 0x1bc
	// Line 480, Address: 0x1ed55c0, Func Offset: 0x1c0
	// Line 481, Address: 0x1ed55d0, Func Offset: 0x1d0
	// Line 482, Address: 0x1ed55d4, Func Offset: 0x1d4
	// Line 483, Address: 0x1ed55dc, Func Offset: 0x1dc
	// Line 484, Address: 0x1ed55e0, Func Offset: 0x1e0
	// Line 485, Address: 0x1ed55e8, Func Offset: 0x1e8
	// Line 486, Address: 0x1ed55f8, Func Offset: 0x1f8
	// Line 485, Address: 0x1ed5600, Func Offset: 0x200
	// Line 486, Address: 0x1ed5604, Func Offset: 0x204
	// Line 488, Address: 0x1ed5610, Func Offset: 0x210
	// Line 489, Address: 0x1ed5614, Func Offset: 0x214
	// Line 492, Address: 0x1ed5618, Func Offset: 0x218
	// Line 494, Address: 0x1ed5638, Func Offset: 0x238
	// Line 496, Address: 0x1ed563c, Func Offset: 0x23c
	// Line 497, Address: 0x1ed5644, Func Offset: 0x244
	// Line 498, Address: 0x1ed5648, Func Offset: 0x248
	// Line 500, Address: 0x1ed564c, Func Offset: 0x24c
	// Line 501, Address: 0x1ed5654, Func Offset: 0x254
	// Line 502, Address: 0x1ed565c, Func Offset: 0x25c
	// Line 503, Address: 0x1ed5660, Func Offset: 0x260
	// Line 508, Address: 0x1ed5668, Func Offset: 0x268
	// Line 509, Address: 0x1ed5670, Func Offset: 0x270
	// Line 510, Address: 0x1ed567c, Func Offset: 0x27c
	// Line 511, Address: 0x1ed5684, Func Offset: 0x284
	// Line 512, Address: 0x1ed5694, Func Offset: 0x294
	// Line 518, Address: 0x1ed5698, Func Offset: 0x298
	// Line 519, Address: 0x1ed56a0, Func Offset: 0x2a0
	// Line 520, Address: 0x1ed56b0, Func Offset: 0x2b0
	// Line 521, Address: 0x1ed56c8, Func Offset: 0x2c8
	// Line 522, Address: 0x1ed56d4, Func Offset: 0x2d4
	// Line 523, Address: 0x1ed56ec, Func Offset: 0x2ec
	// Line 525, Address: 0x1ed56f0, Func Offset: 0x2f0
	// Line 529, Address: 0x1ed5710, Func Offset: 0x310
	// Line 528, Address: 0x1ed5714, Func Offset: 0x314
	// Line 529, Address: 0x1ed5718, Func Offset: 0x318
	// Func End, Address: 0x1ed572c, Func Offset: 0x32c
}

// 
// Start address: 0x1ed54d0
int ev_forest0_fr20_walk_jasper_init(sfObj* obj)
{
	_anon0* wk;
	float pos[4];
	_anon1* objfg;
	_evBgCharData dat;
	// Line 888, Address: 0x1ed54d0, Func Offset: 0
	// Line 892, Address: 0x1ed54d4, Func Offset: 0x4
	// Line 888, Address: 0x1ed54d8, Func Offset: 0x8
	// Line 892, Address: 0x1ed54dc, Func Offset: 0xc
	// Line 888, Address: 0x1ed54e0, Func Offset: 0x10
	// Line 892, Address: 0x1ed54e4, Func Offset: 0x14
	// Line 893, Address: 0x1ed54f0, Func Offset: 0x20
	// Line 894, Address: 0x1ed54f8, Func Offset: 0x28
	// Line 899, Address: 0x1ed5508, Func Offset: 0x38
	// Line 895, Address: 0x1ed550c, Func Offset: 0x3c
	// Line 899, Address: 0x1ed5510, Func Offset: 0x40
	// Line 903, Address: 0x1ed5518, Func Offset: 0x48
	// Line 897, Address: 0x1ed551c, Func Offset: 0x4c
	// Line 899, Address: 0x1ed5520, Func Offset: 0x50
	// Line 903, Address: 0x1ed5534, Func Offset: 0x64
	// Line 904, Address: 0x1ed553c, Func Offset: 0x6c
	// Line 905, Address: 0x1ed5544, Func Offset: 0x74
	// Line 906, Address: 0x1ed554c, Func Offset: 0x7c
	// Line 910, Address: 0x1ed5550, Func Offset: 0x80
	// Line 906, Address: 0x1ed5554, Func Offset: 0x84
	// Line 907, Address: 0x1ed5558, Func Offset: 0x88
	// Line 908, Address: 0x1ed5560, Func Offset: 0x90
	// Line 910, Address: 0x1ed5568, Func Offset: 0x98
	// Line 914, Address: 0x1ed556c, Func Offset: 0x9c
	// Line 912, Address: 0x1ed5570, Func Offset: 0xa0
	// Line 915, Address: 0x1ed5578, Func Offset: 0xa8
	// Func End, Address: 0x1ed5588, Func Offset: 0xb8
	// Line 374, Address: 0x1ed54d0, Func Offset: 0
	// Line 378, Address: 0x1ed54e0, Func Offset: 0x10
	// Line 387, Address: 0x1ed54ec, Func Offset: 0x1c
	// Line 389, Address: 0x1ed54f4, Func Offset: 0x24
	// Line 390, Address: 0x1ed54fc, Func Offset: 0x2c
	// Line 391, Address: 0x1ed5520, Func Offset: 0x50
	// Line 392, Address: 0x1ed5524, Func Offset: 0x54
	// Line 393, Address: 0x1ed5534, Func Offset: 0x64
	// Line 397, Address: 0x1ed5538, Func Offset: 0x68
	// Line 398, Address: 0x1ed5548, Func Offset: 0x78
	// Line 401, Address: 0x1ed5550, Func Offset: 0x80
	// Line 403, Address: 0x1ed5558, Func Offset: 0x88
	// Line 405, Address: 0x1ed5574, Func Offset: 0xa4
	// Line 406, Address: 0x1ed557c, Func Offset: 0xac
	// Line 413, Address: 0x1ed5584, Func Offset: 0xb4
	// Func End, Address: 0x1ed5598, Func Offset: 0xc8
}

// 
// Start address: 0x1ed5590
int ev_forest0_fr20_walk_jasper_moveevhit(sfObj* obj)
{
	_anon5* objte;
	_anon1* objfg;
	_ObjHitData* hitdt;
	// Line 918, Address: 0x1ed5590, Func Offset: 0
	// Line 924, Address: 0x1ed5598, Func Offset: 0x8
	// Line 925, Address: 0x1ed55a0, Func Offset: 0x10
	// Line 926, Address: 0x1ed55b0, Func Offset: 0x20
	// Line 927, Address: 0x1ed55bc, Func Offset: 0x2c
	// Line 928, Address: 0x1ed55c4, Func Offset: 0x34
	// Line 929, Address: 0x1ed55d0, Func Offset: 0x40
	// Line 930, Address: 0x1ed55dc, Func Offset: 0x4c
	// Line 934, Address: 0x1ed55e8, Func Offset: 0x58
	// Line 933, Address: 0x1ed55f0, Func Offset: 0x60
	// Line 934, Address: 0x1ed55f4, Func Offset: 0x64
	// Func End, Address: 0x1ed55fc, Func Offset: 0x6c
}

// 
// Start address: 0x1ed5600
int jas_wait_init(sfObj* obj)
{
	_anon0* wk;
	// Line 938, Address: 0x1ed5600, Func Offset: 0
	// Line 942, Address: 0x1ed5604, Func Offset: 0x4
	// Line 938, Address: 0x1ed5608, Func Offset: 0x8
	// Line 942, Address: 0x1ed560c, Func Offset: 0xc
	// Line 938, Address: 0x1ed5610, Func Offset: 0x10
	// Line 942, Address: 0x1ed5614, Func Offset: 0x14
	// Line 938, Address: 0x1ed5618, Func Offset: 0x18
	// Line 942, Address: 0x1ed561c, Func Offset: 0x1c
	// Line 940, Address: 0x1ed5620, Func Offset: 0x20
	// Line 942, Address: 0x1ed5628, Func Offset: 0x28
	// Line 943, Address: 0x1ed5634, Func Offset: 0x34
	// Line 944, Address: 0x1ed5640, Func Offset: 0x40
	// Line 943, Address: 0x1ed5644, Func Offset: 0x44
	// Line 945, Address: 0x1ed5650, Func Offset: 0x50
	// Line 943, Address: 0x1ed5654, Func Offset: 0x54
	// Line 944, Address: 0x1ed5668, Func Offset: 0x68
	// Line 946, Address: 0x1ed566c, Func Offset: 0x6c
	// Func End, Address: 0x1ed5680, Func Offset: 0x80
}

// 
// Start address: 0x1ed5680
int jas_wait(sfObj* obj)
{
	// Line 952, Address: 0x1ed5680, Func Offset: 0
	// Line 953, Address: 0x1ed5694, Func Offset: 0x14
	// Line 954, Address: 0x1ed569c, Func Offset: 0x1c
	// Line 956, Address: 0x1ed56a0, Func Offset: 0x20
	// Func End, Address: 0x1ed56a8, Func Offset: 0x28
}

// 
// Start address: 0x1ed56b0
int jas_walk_init(sfObj* obj)
{
	_anon0* wk;
	float pos[4];
	_anon1* objfg;
	int next_root;
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
// Start address: 0x1ed5810
int jas_walk_rotate(sfObj* obj)
{
	_anon0* wk;
	float r[4];
	// Line 988, Address: 0x1ed5810, Func Offset: 0
	// Line 994, Address: 0x1ed5814, Func Offset: 0x4
	// Line 988, Address: 0x1ed5818, Func Offset: 0x8
	// Line 995, Address: 0x1ed581c, Func Offset: 0xc
	// Line 988, Address: 0x1ed5820, Func Offset: 0x10
	// Line 994, Address: 0x1ed5824, Func Offset: 0x14
	// Line 988, Address: 0x1ed5828, Func Offset: 0x18
	// Line 992, Address: 0x1ed5830, Func Offset: 0x20
	// Line 995, Address: 0x1ed5834, Func Offset: 0x24
	// Line 994, Address: 0x1ed5838, Func Offset: 0x28
	// Line 995, Address: 0x1ed583c, Func Offset: 0x2c
	// Line 994, Address: 0x1ed5840, Func Offset: 0x30
	// Line 995, Address: 0x1ed5850, Func Offset: 0x40
	// Line 996, Address: 0x1ed5858, Func Offset: 0x48
	// Line 997, Address: 0x1ed5864, Func Offset: 0x54
	// Line 998, Address: 0x1ed5898, Func Offset: 0x88
	// Line 999, Address: 0x1ed58a4, Func Offset: 0x94
	// Line 1000, Address: 0x1ed58b8, Func Offset: 0xa8
	// Line 1001, Address: 0x1ed58c4, Func Offset: 0xb4
	// Line 1002, Address: 0x1ed58cc, Func Offset: 0xbc
	// Line 1004, Address: 0x1ed58d0, Func Offset: 0xc0
	// Line 1003, Address: 0x1ed58d8, Func Offset: 0xc8
	// Line 1004, Address: 0x1ed58dc, Func Offset: 0xcc
	// Func End, Address: 0x1ed58e8, Func Offset: 0xd8
}

// 
// Start address: 0x1ed58f0
int jas_walk(sfObj* obj)
{
	_anon0* wk;
	float pos[4];
	_anon1* objfg;
	float fr;
	// Line 1010, Address: 0x1ed58f0, Func Offset: 0
	// Line 1014, Address: 0x1ed5904, Func Offset: 0x14
	// Line 1016, Address: 0x1ed5908, Func Offset: 0x18
	// Line 1017, Address: 0x1ed5910, Func Offset: 0x20
	// Line 1016, Address: 0x1ed5914, Func Offset: 0x24
	// Line 1021, Address: 0x1ed5918, Func Offset: 0x28
	// Line 1017, Address: 0x1ed5920, Func Offset: 0x30
	// Line 1018, Address: 0x1ed5924, Func Offset: 0x34
	// Line 1019, Address: 0x1ed592c, Func Offset: 0x3c
	// Line 1020, Address: 0x1ed5934, Func Offset: 0x44
	// Line 1021, Address: 0x1ed5938, Func Offset: 0x48
	// Line 1022, Address: 0x1ed5948, Func Offset: 0x58
	// Line 1023, Address: 0x1ed5954, Func Offset: 0x64
	// Line 1028, Address: 0x1ed5958, Func Offset: 0x68
	// Line 1023, Address: 0x1ed5968, Func Offset: 0x78
	// Line 1024, Address: 0x1ed596c, Func Offset: 0x7c
	// Line 1025, Address: 0x1ed5974, Func Offset: 0x84
	// Line 1028, Address: 0x1ed597c, Func Offset: 0x8c
	// Line 1029, Address: 0x1ed5998, Func Offset: 0xa8
	// Line 1030, Address: 0x1ed59d8, Func Offset: 0xe8
	// Line 1031, Address: 0x1ed59f8, Func Offset: 0x108
	// Line 1032, Address: 0x1ed5a04, Func Offset: 0x114
	// Line 1033, Address: 0x1ed5a0c, Func Offset: 0x11c
	// Line 1034, Address: 0x1ed5a14, Func Offset: 0x124
	// Line 1036, Address: 0x1ed5a1c, Func Offset: 0x12c
	// Line 1037, Address: 0x1ed5a24, Func Offset: 0x134
	// Line 1038, Address: 0x1ed5a2c, Func Offset: 0x13c
	// Line 1041, Address: 0x1ed5a30, Func Offset: 0x140
	// Line 1042, Address: 0x1ed5a3c, Func Offset: 0x14c
	// Line 1043, Address: 0x1ed5a44, Func Offset: 0x154
	// Line 1044, Address: 0x1ed5a78, Func Offset: 0x188
	// Line 1046, Address: 0x1ed5ab0, Func Offset: 0x1c0
	// Line 1047, Address: 0x1ed5ae0, Func Offset: 0x1f0
	// Line 1049, Address: 0x1ed5ae8, Func Offset: 0x1f8
	// Line 1050, Address: 0x1ed5aec, Func Offset: 0x1fc
	// Line 1052, Address: 0x1ed5af0, Func Offset: 0x200
	// Line 1051, Address: 0x1ed5af8, Func Offset: 0x208
	// Line 1052, Address: 0x1ed5afc, Func Offset: 0x20c
	// Func End, Address: 0x1ed5b0c, Func Offset: 0x21c
}

// 
// Start address: 0x1ed5b10
int jas_talk_init(sfObj* obj)
{
	// Line 1568, Address: 0x1ed5b10, Func Offset: 0
	// Line 1571, Address: 0x1ed5b34, Func Offset: 0x24
	// Func End, Address: 0x1ed5b3c, Func Offset: 0x2c
	// Line 1060, Address: 0x1ed5b10, Func Offset: 0
	// Line 1062, Address: 0x1ed5b14, Func Offset: 0x4
	// Line 1060, Address: 0x1ed5b18, Func Offset: 0x8
	// Line 1062, Address: 0x1ed5b24, Func Offset: 0x14
	// Line 1063, Address: 0x1ed5b2c, Func Offset: 0x1c
	// Line 1064, Address: 0x1ed5b34, Func Offset: 0x24
	// Line 1065, Address: 0x1ed5b40, Func Offset: 0x30
	// Line 1067, Address: 0x1ed5b58, Func Offset: 0x48
	// Line 1068, Address: 0x1ed5b5c, Func Offset: 0x4c
	// Line 1067, Address: 0x1ed5b60, Func Offset: 0x50
	// Line 1069, Address: 0x1ed5b64, Func Offset: 0x54
	// Func End, Address: 0x1ed5b74, Func Offset: 0x64
	// Line 875, Address: 0x1ed5b10, Func Offset: 0
	// Line 877, Address: 0x1ed5b24, Func Offset: 0x14
	// Line 878, Address: 0x1ed5b28, Func Offset: 0x18
	// Line 879, Address: 0x1ed5b30, Func Offset: 0x20
	// Line 880, Address: 0x1ed5b38, Func Offset: 0x28
	// Line 883, Address: 0x1ed5b44, Func Offset: 0x34
	// Line 880, Address: 0x1ed5b48, Func Offset: 0x38
	// Line 883, Address: 0x1ed5b54, Func Offset: 0x44
	// Line 885, Address: 0x1ed5b5c, Func Offset: 0x4c
	// Line 886, Address: 0x1ed5b64, Func Offset: 0x54
	// Line 887, Address: 0x1ed5b68, Func Offset: 0x58
	// Line 889, Address: 0x1ed5b84, Func Offset: 0x74
	// Line 888, Address: 0x1ed5b88, Func Offset: 0x78
	// Line 889, Address: 0x1ed5b8c, Func Offset: 0x7c
	// Func End, Address: 0x1ed5b9c, Func Offset: 0x8c
	// Line 700, Address: 0x1ed5b10, Func Offset: 0
	// Line 701, Address: 0x1ed5b18, Func Offset: 0x8
	// Line 703, Address: 0x1ed5b20, Func Offset: 0x10
	// Line 702, Address: 0x1ed5b24, Func Offset: 0x14
	// Line 703, Address: 0x1ed5b28, Func Offset: 0x18
	// Func End, Address: 0x1ed5b30, Func Offset: 0x20
}

// 
// Start address: 0x1ed5b80
int jas_talk_stream_ready(sfObj* obj)
{
	// Line 1071, Address: 0x1ed5b80, Func Offset: 0
	// Line 1072, Address: 0x1ed5b8c, Func Offset: 0xc
	// Line 1073, Address: 0x1ed5ba8, Func Offset: 0x28
	// Line 1074, Address: 0x1ed5bb0, Func Offset: 0x30
	// Line 1075, Address: 0x1ed5bb8, Func Offset: 0x38
	// Func End, Address: 0x1ed5bc8, Func Offset: 0x48
	// Line 75, Address: 0x1ed5b80, Func Offset: 0
	// Line 78, Address: 0x1ed5b84, Func Offset: 0x4
	// Line 75, Address: 0x1ed5b88, Func Offset: 0x8
	// Line 78, Address: 0x1ed5b98, Func Offset: 0x18
	// Line 79, Address: 0x1ed5bb4, Func Offset: 0x34
	// Line 82, Address: 0x1ed5bb8, Func Offset: 0x38
	// Line 83, Address: 0x1ed5bc8, Func Offset: 0x48
	// Line 85, Address: 0x1ed5bd0, Func Offset: 0x50
	// Line 87, Address: 0x1ed5bd8, Func Offset: 0x58
	// Line 88, Address: 0x1ed5be0, Func Offset: 0x60
	// Line 90, Address: 0x1ed5be4, Func Offset: 0x64
	// Line 91, Address: 0x1ed5be8, Func Offset: 0x68
	// Line 92, Address: 0x1ed5bec, Func Offset: 0x6c
	// Func End, Address: 0x1ed5c00, Func Offset: 0x80
}

// 
// Start address: 0x1ed5bd0
void walk_jasper_touch_memo()
{
	// Line 1079, Address: 0x1ed5bd0, Func Offset: 0
	// Line 1080, Address: 0x1ed5bd8, Func Offset: 0x8
	// Func End, Address: 0x1ed5be0, Func Offset: 0x10
	// Line 729, Address: 0x1ed5bd0, Func Offset: 0
	// Line 730, Address: 0x1ed5bd4, Func Offset: 0x4
	// Line 729, Address: 0x1ed5bd8, Func Offset: 0x8
	// Line 730, Address: 0x1ed5bdc, Func Offset: 0xc
	// Line 731, Address: 0x1ed5bec, Func Offset: 0x1c
	// Line 733, Address: 0x1ed5bf8, Func Offset: 0x28
	// Line 732, Address: 0x1ed5bfc, Func Offset: 0x2c
	// Line 733, Address: 0x1ed5c00, Func Offset: 0x30
	// Func End, Address: 0x1ed5c08, Func Offset: 0x38
}

// 
// Start address: 0x1ed5be0
int jas_talk(sfObj* obj)
{
	// Line 1084, Address: 0x1ed5be0, Func Offset: 0
	// Line 1085, Address: 0x1ed5be4, Func Offset: 0x4
	// Line 1084, Address: 0x1ed5be8, Func Offset: 0x8
	// Line 1085, Address: 0x1ed5bf0, Func Offset: 0x10
	// Line 1087, Address: 0x1ed5c10, Func Offset: 0x30
	// Line 1089, Address: 0x1ed5c18, Func Offset: 0x38
	// Line 1091, Address: 0x1ed5c20, Func Offset: 0x40
	// Line 1095, Address: 0x1ed5c40, Func Offset: 0x60
	// Line 1097, Address: 0x1ed5c48, Func Offset: 0x68
	// Line 1098, Address: 0x1ed5c4c, Func Offset: 0x6c
	// Line 1100, Address: 0x1ed5c58, Func Offset: 0x78
	// Line 1101, Address: 0x1ed5c60, Func Offset: 0x80
	// Func End, Address: 0x1ed5c70, Func Offset: 0x90
	// Line 841, Address: 0x1ed5be0, Func Offset: 0
	// Line 842, Address: 0x1ed5be8, Func Offset: 0x8
	// Line 845, Address: 0x1ed5bf4, Func Offset: 0x14
	// Line 846, Address: 0x1ed5c04, Func Offset: 0x24
	// Line 852, Address: 0x1ed5c0c, Func Offset: 0x2c
	// Line 855, Address: 0x1ed5c10, Func Offset: 0x30
	// Line 854, Address: 0x1ed5c14, Func Offset: 0x34
	// Line 855, Address: 0x1ed5c18, Func Offset: 0x38
	// Func End, Address: 0x1ed5c20, Func Offset: 0x40
	// Line 1054, Address: 0x1ed5be0, Func Offset: 0
	// Line 1055, Address: 0x1ed5be4, Func Offset: 0x4
	// Line 1058, Address: 0x1ed5bf8, Func Offset: 0x18
	// Line 1059, Address: 0x1ed5bfc, Func Offset: 0x1c
	// Line 1058, Address: 0x1ed5c00, Func Offset: 0x20
	// Line 1059, Address: 0x1ed5c04, Func Offset: 0x24
	// Line 1060, Address: 0x1ed5c0c, Func Offset: 0x2c
	// Line 1061, Address: 0x1ed5c34, Func Offset: 0x54
	// Line 1062, Address: 0x1ed5c38, Func Offset: 0x58
	// Func End, Address: 0x1ed5c44, Func Offset: 0x64
}

// 
// Start address: 0x1ed5c70
int jas_talk_end(sfObj* obj)
{
	// Line 1632, Address: 0x1ed5c70, Func Offset: 0
	// Line 1636, Address: 0x1ed5c74, Func Offset: 0x4
	// Line 1632, Address: 0x1ed5c78, Func Offset: 0x8
	// Line 1636, Address: 0x1ed5c84, Func Offset: 0x14
	// Line 1633, Address: 0x1ed5c88, Func Offset: 0x18
	// Line 1636, Address: 0x1ed5c8c, Func Offset: 0x1c
	// Line 1637, Address: 0x1ed5ca4, Func Offset: 0x34
	// Line 1636, Address: 0x1ed5ca8, Func Offset: 0x38
	// Line 1639, Address: 0x1ed5cb0, Func Offset: 0x40
	// Line 1641, Address: 0x1ed5cb8, Func Offset: 0x48
	// Line 1640, Address: 0x1ed5cbc, Func Offset: 0x4c
	// Line 1641, Address: 0x1ed5cc0, Func Offset: 0x50
	// Line 1642, Address: 0x1ed5cc4, Func Offset: 0x54
	// Line 1645, Address: 0x1ed5ccc, Func Offset: 0x5c
	// Line 1643, Address: 0x1ed5cd0, Func Offset: 0x60
	// Line 1642, Address: 0x1ed5cd4, Func Offset: 0x64
	// Line 1643, Address: 0x1ed5cd8, Func Offset: 0x68
	// Line 1645, Address: 0x1ed5cdc, Func Offset: 0x6c
	// Line 1643, Address: 0x1ed5ce0, Func Offset: 0x70
	// Line 1644, Address: 0x1ed5ce4, Func Offset: 0x74
	// Line 1645, Address: 0x1ed5cf0, Func Offset: 0x80
	// Line 1650, Address: 0x1ed5d10, Func Offset: 0xa0
	// Line 1651, Address: 0x1ed5d18, Func Offset: 0xa8
	// Line 1650, Address: 0x1ed5d1c, Func Offset: 0xac
	// Line 1651, Address: 0x1ed5d2c, Func Offset: 0xbc
	// Line 1652, Address: 0x1ed5d30, Func Offset: 0xc0
	// Line 1655, Address: 0x1ed5d38, Func Offset: 0xc8
	// Line 1652, Address: 0x1ed5d3c, Func Offset: 0xcc
	// Line 1655, Address: 0x1ed5d40, Func Offset: 0xd0
	// Line 1652, Address: 0x1ed5d44, Func Offset: 0xd4
	// Line 1653, Address: 0x1ed5d48, Func Offset: 0xd8
	// Line 1654, Address: 0x1ed5d4c, Func Offset: 0xdc
	// Line 1652, Address: 0x1ed5d50, Func Offset: 0xe0
	// Line 1653, Address: 0x1ed5d54, Func Offset: 0xe4
	// Line 1654, Address: 0x1ed5d58, Func Offset: 0xe8
	// Line 1655, Address: 0x1ed5d5c, Func Offset: 0xec
	// Line 1652, Address: 0x1ed5d64, Func Offset: 0xf4
	// Line 1655, Address: 0x1ed5d68, Func Offset: 0xf8
	// Line 1652, Address: 0x1ed5d6c, Func Offset: 0xfc
	// Line 1653, Address: 0x1ed5d70, Func Offset: 0x100
	// Line 1652, Address: 0x1ed5d74, Func Offset: 0x104
	// Line 1653, Address: 0x1ed5d84, Func Offset: 0x114
	// Line 1654, Address: 0x1ed5d9c, Func Offset: 0x12c
	// Line 1653, Address: 0x1ed5da0, Func Offset: 0x130
	// Line 1654, Address: 0x1ed5da8, Func Offset: 0x138
	// Line 1655, Address: 0x1ed5dc8, Func Offset: 0x158
	// Line 1657, Address: 0x1ed5dd8, Func Offset: 0x168
	// Line 1659, Address: 0x1ed5de4, Func Offset: 0x174
	// Line 1660, Address: 0x1ed5de8, Func Offset: 0x178
	// Line 1661, Address: 0x1ed5dfc, Func Offset: 0x18c
	// Line 1663, Address: 0x1ed5e20, Func Offset: 0x1b0
	// Line 1665, Address: 0x1ed5e44, Func Offset: 0x1d4
	// Line 1667, Address: 0x1ed5e48, Func Offset: 0x1d8
	// Line 1668, Address: 0x1ed5e5c, Func Offset: 0x1ec
	// Line 1669, Address: 0x1ed5e64, Func Offset: 0x1f4
	// Line 1671, Address: 0x1ed5e6c, Func Offset: 0x1fc
	// Line 1672, Address: 0x1ed5e74, Func Offset: 0x204
	// Line 1673, Address: 0x1ed5e7c, Func Offset: 0x20c
	// Line 1676, Address: 0x1ed5e80, Func Offset: 0x210
	// Line 1675, Address: 0x1ed5e88, Func Offset: 0x218
	// Line 1676, Address: 0x1ed5e8c, Func Offset: 0x21c
	// Func End, Address: 0x1ed5e98, Func Offset: 0x228
	// Line 1104, Address: 0x1ed5c70, Func Offset: 0
	// Line 1108, Address: 0x1ed5c74, Func Offset: 0x4
	// Line 1104, Address: 0x1ed5c78, Func Offset: 0x8
	// Line 1108, Address: 0x1ed5c80, Func Offset: 0x10
	// Line 1109, Address: 0x1ed5c90, Func Offset: 0x20
	// Line 1110, Address: 0x1ed5ca4, Func Offset: 0x34
	// Line 1111, Address: 0x1ed5ca8, Func Offset: 0x38
	// Line 1112, Address: 0x1ed5cb0, Func Offset: 0x40
	// Line 1113, Address: 0x1ed5cc8, Func Offset: 0x58
	// Line 1116, Address: 0x1ed5cd0, Func Offset: 0x60
	// Line 1115, Address: 0x1ed5cd8, Func Offset: 0x68
	// Line 1116, Address: 0x1ed5cdc, Func Offset: 0x6c
	// Func End, Address: 0x1ed5ce4, Func Offset: 0x74
	// Line 166, Address: 0x1ed5c70, Func Offset: 0
	// Line 167, Address: 0x1ed5c80, Func Offset: 0x10
	// Line 169, Address: 0x1ed5c98, Func Offset: 0x28
	// Line 171, Address: 0x1ed5ca0, Func Offset: 0x30
	// Line 172, Address: 0x1ed5ca8, Func Offset: 0x38
	// Func End, Address: 0x1ed5cb4, Func Offset: 0x44
	// Line 753, Address: 0x1ed5c70, Func Offset: 0
	// Line 754, Address: 0x1ed5c74, Func Offset: 0x4
	// Line 753, Address: 0x1ed5c78, Func Offset: 0x8
	// Line 754, Address: 0x1ed5c7c, Func Offset: 0xc
	// Line 755, Address: 0x1ed5c88, Func Offset: 0x18
	// Line 757, Address: 0x1ed5c90, Func Offset: 0x20
	// Line 756, Address: 0x1ed5c94, Func Offset: 0x24
	// Line 757, Address: 0x1ed5c98, Func Offset: 0x28
	// Func End, Address: 0x1ed5ca0, Func Offset: 0x30
}

// 
// Start address: 0x1ed5cf0
int jas_finish()
{
	// Line 1120, Address: 0x1ed5cf0, Func Offset: 0
	// Func End, Address: 0x1ed5cf8, Func Offset: 0x8
	// Line 912, Address: 0x1ed5cf0, Func Offset: 0
	// Line 914, Address: 0x1ed5cf4, Func Offset: 0x4
	// Line 912, Address: 0x1ed5cf8, Func Offset: 0x8
	// Line 914, Address: 0x1ed5cfc, Func Offset: 0xc
	// Line 915, Address: 0x1ed5d04, Func Offset: 0x14
	// Line 916, Address: 0x1ed5d24, Func Offset: 0x34
	// Func End, Address: 0x1ed5d30, Func Offset: 0x40
}

// 
// Start address: 0x1ed5d00
int ev_forest0_fr20_walk_jasper_exec(sfObj* obj)
{
	float v[4];
	float pl_dir[4];
	float r;
	_anon0* wk;
	float pos[4];
	_anon1* objfg;
	_anon2* info;
	int step;
	// Line 1137, Address: 0x1ed5d00, Func Offset: 0
	// Line 1145, Address: 0x1ed5d14, Func Offset: 0x14
	// Line 1147, Address: 0x1ed5d18, Func Offset: 0x18
	// Line 1150, Address: 0x1ed5d20, Func Offset: 0x20
	// Line 1152, Address: 0x1ed5d54, Func Offset: 0x54
	// Line 1153, Address: 0x1ed5d5c, Func Offset: 0x5c
	// Line 1159, Address: 0x1ed5d60, Func Offset: 0x60
	// Line 1153, Address: 0x1ed5d68, Func Offset: 0x68
	// Line 1154, Address: 0x1ed5d6c, Func Offset: 0x6c
	// Line 1159, Address: 0x1ed5d70, Func Offset: 0x70
	// Line 1154, Address: 0x1ed5d74, Func Offset: 0x74
	// Line 1155, Address: 0x1ed5d78, Func Offset: 0x78
	// Line 1159, Address: 0x1ed5d80, Func Offset: 0x80
	// Line 1160, Address: 0x1ed5d88, Func Offset: 0x88
	// Line 1161, Address: 0x1ed5d94, Func Offset: 0x94
	// Line 1162, Address: 0x1ed5d98, Func Offset: 0x98
	// Line 1163, Address: 0x1ed5da4, Func Offset: 0xa4
	// Line 1165, Address: 0x1ed5da8, Func Offset: 0xa8
	// Line 1166, Address: 0x1ed5db0, Func Offset: 0xb0
	// Line 1167, Address: 0x1ed5dcc, Func Offset: 0xcc
	// Line 1168, Address: 0x1ed5df0, Func Offset: 0xf0
	// Line 1169, Address: 0x1ed5e30, Func Offset: 0x130
	// Line 1170, Address: 0x1ed5e3c, Func Offset: 0x13c
	// Line 1169, Address: 0x1ed5e44, Func Offset: 0x144
	// Line 1170, Address: 0x1ed5e48, Func Offset: 0x148
	// Line 1171, Address: 0x1ed5e54, Func Offset: 0x154
	// Line 1172, Address: 0x1ed5e58, Func Offset: 0x158
	// Line 1171, Address: 0x1ed5e5c, Func Offset: 0x15c
	// Line 1172, Address: 0x1ed5e60, Func Offset: 0x160
	// Line 1171, Address: 0x1ed5e64, Func Offset: 0x164
	// Line 1172, Address: 0x1ed5e70, Func Offset: 0x170
	// Line 1173, Address: 0x1ed5e8c, Func Offset: 0x18c
	// Line 1174, Address: 0x1ed5e94, Func Offset: 0x194
	// Line 1176, Address: 0x1ed5e98, Func Offset: 0x198
	// Line 1177, Address: 0x1ed5ea0, Func Offset: 0x1a0
	// Func End, Address: 0x1ed5eb8, Func Offset: 0x1b8
	// Line 967, Address: 0x1ed5d00, Func Offset: 0
	// Line 968, Address: 0x1ed5d04, Func Offset: 0x4
	// Line 967, Address: 0x1ed5d08, Func Offset: 0x8
	// Line 968, Address: 0x1ed5d10, Func Offset: 0x10
	// Line 969, Address: 0x1ed5d18, Func Offset: 0x18
	// Line 970, Address: 0x1ed5d38, Func Offset: 0x38
	// Line 971, Address: 0x1ed5d54, Func Offset: 0x54
	// Line 972, Address: 0x1ed5d64, Func Offset: 0x64
	// Line 973, Address: 0x1ed5d7c, Func Offset: 0x7c
	// Func End, Address: 0x1ed5d8c, Func Offset: 0x8c
	// Line 293, Address: 0x1ed5d00, Func Offset: 0
	// Line 294, Address: 0x1ed5d04, Func Offset: 0x4
	// Line 293, Address: 0x1ed5d08, Func Offset: 0x8
	// Line 295, Address: 0x1ed5d14, Func Offset: 0x14
	// Func End, Address: 0x1ed5d1c, Func Offset: 0x1c
}

// 
// Start address: 0x1ed5ec0
void ev_forest0_fr20_walk_jasper_evhit_init(sfObj* obj)
{
	// Line 1181, Address: 0x1ed5ec0, Func Offset: 0
	// Line 1182, Address: 0x1ed5ec4, Func Offset: 0x4
	// Func End, Address: 0x1ed5ecc, Func Offset: 0xc
}

// 
// Start address: 0x1ed5ed0
int ev_forest0_027_trgchk()
{
	// Line 1189, Address: 0x1ed5ed0, Func Offset: 0
	// Line 1191, Address: 0x1ed5ef8, Func Offset: 0x28
	// Func End, Address: 0x1ed5f00, Func Offset: 0x30
}

// 
// Start address: 0x1ed5f00
int ev_forest0_027_exec()
{
	// Line 233, Address: 0x1ed5f00, Func Offset: 0
	// Func End, Address: 0x1ed5f08, Func Offset: 0x8
	// Line 1195, Address: 0x1ed5f00, Func Offset: 0
	// Line 1196, Address: 0x1ed5f0c, Func Offset: 0xc
	// Line 1197, Address: 0x1ed5f10, Func Offset: 0x10
	// Func End, Address: 0x1ed5f18, Func Offset: 0x18
}

// 
// Start address: 0x1ed5f20
int ev_forest0_CandleLight_init(sfObj* obj)
{
	_anon3* wk;
	unsigned int* wk_id;
	int shadow_id;
	float pos[4];
	float color[4];
	float shadow_pos[4];
	_anon1* objfg;
	// Line 1219, Address: 0x1ed5f20, Func Offset: 0
	// Line 1224, Address: 0x1ed5f24, Func Offset: 0x4
	// Line 1219, Address: 0x1ed5f28, Func Offset: 0x8
	// Line 1224, Address: 0x1ed5f2c, Func Offset: 0xc
	// Line 1219, Address: 0x1ed5f30, Func Offset: 0x10
	// Line 1224, Address: 0x1ed5f34, Func Offset: 0x14
	// Line 1219, Address: 0x1ed5f38, Func Offset: 0x18
	// Line 1228, Address: 0x1ed5f3c, Func Offset: 0x1c
	// Line 1219, Address: 0x1ed5f40, Func Offset: 0x20
	// Line 1224, Address: 0x1ed5f48, Func Offset: 0x28
	// Line 1228, Address: 0x1ed5f4c, Func Offset: 0x2c
	// Line 1229, Address: 0x1ed5f58, Func Offset: 0x38
	// Line 1231, Address: 0x1ed5f68, Func Offset: 0x48
	// Line 1232, Address: 0x1ed5f6c, Func Offset: 0x4c
	// Line 1234, Address: 0x1ed5f70, Func Offset: 0x50
	// Line 1235, Address: 0x1ed5f78, Func Offset: 0x58
	// Line 1236, Address: 0x1ed5f80, Func Offset: 0x60
	// Line 1237, Address: 0x1ed5f8c, Func Offset: 0x6c
	// Line 1238, Address: 0x1ed5f98, Func Offset: 0x78
	// Line 1239, Address: 0x1ed5fb0, Func Offset: 0x90
	// Line 1240, Address: 0x1ed5fb8, Func Offset: 0x98
	// Line 1244, Address: 0x1ed5fbc, Func Offset: 0x9c
	// Line 1240, Address: 0x1ed5fc4, Func Offset: 0xa4
	// Line 1241, Address: 0x1ed5fc8, Func Offset: 0xa8
	// Line 1242, Address: 0x1ed5fd0, Func Offset: 0xb0
	// Line 1244, Address: 0x1ed5fd8, Func Offset: 0xb8
	// Line 1245, Address: 0x1ed5fe0, Func Offset: 0xc0
	// Line 1246, Address: 0x1ed5fec, Func Offset: 0xcc
	// Line 1249, Address: 0x1ed5ff4, Func Offset: 0xd4
	// Line 1250, Address: 0x1ed5ff8, Func Offset: 0xd8
	// Line 1249, Address: 0x1ed5ffc, Func Offset: 0xdc
	// Line 1250, Address: 0x1ed6000, Func Offset: 0xe0
	// Line 1252, Address: 0x1ed6008, Func Offset: 0xe8
	// Line 1253, Address: 0x1ed600c, Func Offset: 0xec
	// Line 1252, Address: 0x1ed6010, Func Offset: 0xf0
	// Line 1253, Address: 0x1ed6018, Func Offset: 0xf8
	// Line 1254, Address: 0x1ed601c, Func Offset: 0xfc
	// Line 1252, Address: 0x1ed6024, Func Offset: 0x104
	// Line 1253, Address: 0x1ed6034, Func Offset: 0x114
	// Line 1254, Address: 0x1ed603c, Func Offset: 0x11c
	// Line 1255, Address: 0x1ed6044, Func Offset: 0x124
	// Line 1256, Address: 0x1ed605c, Func Offset: 0x13c
	// Line 1258, Address: 0x1ed6064, Func Offset: 0x144
	// Line 1260, Address: 0x1ed607c, Func Offset: 0x15c
	// Line 1262, Address: 0x1ed609c, Func Offset: 0x17c
	// Line 1261, Address: 0x1ed60a0, Func Offset: 0x180
	// Line 1262, Address: 0x1ed60a4, Func Offset: 0x184
	// Func End, Address: 0x1ed60b8, Func Offset: 0x198
}

// 
// Start address: 0x1ed60c0
int ev_forest0_fr03_futa_init(sfObj* obj)
{
	_evCmnBgObjData dat;
	// Line 1267, Address: 0x1ed60c0, Func Offset: 0
	// Line 1268, Address: 0x1ed60c4, Func Offset: 0x4
	// Line 1267, Address: 0x1ed60c8, Func Offset: 0x8
	// Line 1268, Address: 0x1ed60cc, Func Offset: 0xc
	// Line 1271, Address: 0x1ed60e0, Func Offset: 0x20
	// Line 1272, Address: 0x1ed60e8, Func Offset: 0x28
	// Func End, Address: 0x1ed60f4, Func Offset: 0x34
}

