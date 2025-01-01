typedef struct sgTexArc;
typedef struct sfCldPart;
typedef enum GameItem : unsigned char;
typedef struct sgQTNode;
typedef struct sgQTObject;
typedef struct sfObj;
typedef struct _anon0;
typedef struct _anon1;
typedef struct sfOffsetAABB;
typedef enum _cam3Step : unsigned char;
typedef union sfCldBody;
typedef struct _anon2;
typedef union _anon3;
typedef struct _cam3Work;
typedef struct sgBone;
typedef struct _anon4;
typedef struct _anon5;
typedef struct _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef struct _GAME_WORK;
typedef struct sfCldObject;
typedef enum PlayerExtStatus : unsigned char;

typedef void(*type_0)();
typedef void(*type_3)();
typedef void(*type_5)();
typedef void(*type_10)(sfObj*);
typedef void(*type_12)();
typedef void(*type_15)(sfObj*);
typedef void(*type_18)(sfObj*);
typedef void(*type_21)();
typedef void(*type_24)();
typedef void(*type_36)(sfObj*);

typedef void(*type_1)()[13];
typedef int type_2[1];
typedef void(*type_4)()[13];
typedef void(*type_6)()[2];
typedef _anon3 type_7[256];
typedef float type_8[4];
typedef float type_9[4][4];
typedef unsigned char type_11[3];
typedef void(*type_13)()[13];
typedef float type_14[4];
typedef float type_16[4];
typedef _anon2 type_17[2];
typedef void(*type_19)(sfObj*)[3];
typedef int type_20[1];
typedef void(*type_22)()[13];
typedef int type_23[1];
typedef short type_25[2];
typedef void(*type_26)()[13];
typedef unsigned short type_27[2];
typedef char type_28[4];
typedef unsigned char type_29[4];
typedef float type_30[1];
typedef int type_31[1];
typedef int type_32[1];
typedef int type_33[1];
typedef int type_34[1];
typedef int type_35[1];
typedef sfCldPart* type_37[6];
typedef unsigned char type_38[3];

struct sgTexArc
{
	<unknown fundamental type (0xa510)> dummy;
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

struct sgQTNode
{
	int dummy;
};

struct sgQTObject
{
	_anon0 bounding_ball;
	sgQTObject* next;
	sgQTObject* prev;
};

struct sfObj
{
	_anon3 fwork[256];
	_anon3* work;
	void(*func)(sfObj*);
	_anon3* work_pt0;
	_anon3* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon3* sys_work;
	_anon3* scene_work;
	_anon3* event_work;
	_anon3* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

struct _anon0
{
	float center[4];
	float radius;
};

struct _anon1
{
	void* texture_normal;
	void* texture_global;
	void* texture_semitrans;
	void* model_data;
	sgBone* parent_bone;
};

struct sfOffsetAABB
{
	_anon7 aabb;
	float offset[4];
};

enum _cam3Step : unsigned char
{
	CAM3_STEP_NORMAL,
	CAM3_STEP_AUTOFOCUS,
	CAM3_STEP_RESET,
	CAM3_STEP_STOP
};

union sfCldBody
{
	_anon8 obb;
	_anon7 aabb;
	sfOffsetAABB offset_aabb;
	_anon6 line;
	_anon0 sphere;
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

union _anon3
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

struct _cam3Work
{
	_cam3Step step;
	float mtx[4][4];
	float rot[4];
	float lookat[4];
	int run;
	int forceRotate;
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

struct _anon4
{
	_anon1 em_map;
	_anon1 addtional;
	int display_on;
};

struct _anon5
{
	int model;
	int global;
	int semitrans;
	int collision;
	int emtex;
	int mode;
	int file;
};

struct _anon6
{
	float start[4];
	float end[4];
};

struct _anon7
{
	float bmin[4];
	float bmax[4];
};

struct _anon8
{
	float mat[4][4];
	float half_w[4];
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

struct sfCldObject
{
	sgQTObject tree_object;
	sgQTNode* stay_node;
	sfCldPart* parts[6];
	unsigned char n_parts;
	unsigned char pad[3];
	void* data;
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

void(*camInitFuncs)()[2];
void(*camera_main_funcs)(sfObj*)[3];
float sg_vector_unit_w[4];
_GAME_WORK gamew;
_anon2 player_ext_info[2];
_anon4 game_bg;
void(*stage_init_func_tbl)()[13];
void(*scene_set_func_tbl)()[13];
void(*scene_main_func_tbl)()[13];
void(*scene_end_func_tbl)()[13];
void(*stage_end_func_tbl)()[13];
int scene_fade_in_start;
sfCldObject camera_cld;
sfObj* cam_obj;
void(*CameraMain)(sfObj*);
_cam3Work cam3_work;

void ScenePlayerSet();
int GamePlayerSceneMovePermission();
int GamePlayerClosedDoorAccessPermission();
void GameAccessCheck();
void GameBgInit();
void GameBgSetDrawData(void* model, sgTexArc* texture, sgTexArc* gtex);
void GameBgSetAdditionalDrawData(void* model, sgTexArc* texture, sgTexArc* gtex);
void GameBgSetFromGAME_MAPDATA(_anon5* sb);
void GameCommonMapDrawOn();
void GameCommonMapDrawOff();
int GameCommonMapDrawStatus();
void GameCommonSetModelData(void* model_data);
void GameCommonSetAdditionalBG(_anon1* add_model);
void GameCommonMapSet();
void GameCommonMapDraw();
void GameCommonMapDrawSortPart();
void GameCommonStageInit();
void GameCommonSceneInit();
void GameCommonSceneSet();
void GameCommonSceneMain();
void GameCommonSceneEnd();
void GameCommonStageEnd();

// 
// Start address: 0x1f4e70
void ScenePlayerSet()
{
	int door_no;
	int* door;
	float pos[4];
	float yr;
	// Line 77, Address: 0x1f4e70, Func Offset: 0
	// Line 78, Address: 0x1f4e74, Func Offset: 0x4
	// Line 77, Address: 0x1f4e78, Func Offset: 0x8
	// Line 78, Address: 0x1f4e84, Func Offset: 0x14
	// Line 79, Address: 0x1f4e88, Func Offset: 0x18
	// Line 81, Address: 0x1f4e90, Func Offset: 0x20
	// Line 84, Address: 0x1f4e98, Func Offset: 0x28
	// Line 86, Address: 0x1f4ea4, Func Offset: 0x34
	// Line 89, Address: 0x1f4eac, Func Offset: 0x3c
	// Line 90, Address: 0x1f4eb8, Func Offset: 0x48
	// Line 93, Address: 0x1f4ec8, Func Offset: 0x58
	// Line 100, Address: 0x1f4ed0, Func Offset: 0x60
	// Line 101, Address: 0x1f4edc, Func Offset: 0x6c
	// Line 102, Address: 0x1f4ee8, Func Offset: 0x78
	// Line 103, Address: 0x1f4ef4, Func Offset: 0x84
	// Line 104, Address: 0x1f4efc, Func Offset: 0x8c
	// Line 108, Address: 0x1f4f08, Func Offset: 0x98
	// Func End, Address: 0x1f4f1c, Func Offset: 0xac
}

// 
// Start address: 0x1f4f20
int GamePlayerSceneMovePermission()
{
	PlayerExtStatus stat;
	// Line 114, Address: 0x1f4f20, Func Offset: 0
	// Line 117, Address: 0x1f4f28, Func Offset: 0x8
	// Line 120, Address: 0x1f4f2c, Func Offset: 0xc
	// Func End, Address: 0x1f4f34, Func Offset: 0x14
}

// 
// Start address: 0x1f4f40
int GamePlayerClosedDoorAccessPermission()
{
	PlayerExtStatus stat;
	// Line 126, Address: 0x1f4f40, Func Offset: 0
	// Line 128, Address: 0x1f4f44, Func Offset: 0x4
	// Line 126, Address: 0x1f4f48, Func Offset: 0x8
	// Line 128, Address: 0x1f4f4c, Func Offset: 0xc
	// Line 129, Address: 0x1f4f54, Func Offset: 0x14
	// Line 131, Address: 0x1f4f60, Func Offset: 0x20
	// Line 132, Address: 0x1f4f6c, Func Offset: 0x2c
	// Line 134, Address: 0x1f4f78, Func Offset: 0x38
	// Line 135, Address: 0x1f4f84, Func Offset: 0x44
	// Line 137, Address: 0x1f4f90, Func Offset: 0x50
	// Line 138, Address: 0x1f4f9c, Func Offset: 0x5c
	// Line 141, Address: 0x1f4fa8, Func Offset: 0x68
	// Line 144, Address: 0x1f4fb0, Func Offset: 0x70
	// Func End, Address: 0x1f4fb8, Func Offset: 0x78
}

// 
// Start address: 0x1f4fc0
void GameAccessCheck()
{
	int i;
	int hit;
	int n_doors;
	int door_type;
	int door_no;
	int door_open_ok;
	int* door;
	// Line 149, Address: 0x1f4fc0, Func Offset: 0
	// Line 158, Address: 0x1f4fdc, Func Offset: 0x1c
	// Line 161, Address: 0x1f4fec, Func Offset: 0x2c
	// Line 164, Address: 0x1f4ff8, Func Offset: 0x38
	// Line 167, Address: 0x1f5008, Func Offset: 0x48
	// Line 169, Address: 0x1f5010, Func Offset: 0x50
	// Line 167, Address: 0x1f5014, Func Offset: 0x54
	// Line 169, Address: 0x1f5018, Func Offset: 0x58
	// Line 170, Address: 0x1f501c, Func Offset: 0x5c
	// Line 172, Address: 0x1f5028, Func Offset: 0x68
	// Line 173, Address: 0x1f5038, Func Offset: 0x78
	// Line 174, Address: 0x1f5048, Func Offset: 0x88
	// Line 175, Address: 0x1f5050, Func Offset: 0x90
	// Line 176, Address: 0x1f5058, Func Offset: 0x98
	// Line 177, Address: 0x1f5064, Func Offset: 0xa4
	// Line 186, Address: 0x1f5070, Func Offset: 0xb0
	// Line 187, Address: 0x1f507c, Func Offset: 0xbc
	// Line 189, Address: 0x1f5084, Func Offset: 0xc4
	// Line 191, Address: 0x1f5088, Func Offset: 0xc8
	// Line 193, Address: 0x1f508c, Func Offset: 0xcc
	// Line 194, Address: 0x1f5098, Func Offset: 0xd8
	// Line 196, Address: 0x1f50ac, Func Offset: 0xec
	// Line 199, Address: 0x1f50b0, Func Offset: 0xf0
	// Line 203, Address: 0x1f50c0, Func Offset: 0x100
	// Line 205, Address: 0x1f50c8, Func Offset: 0x108
	// Line 207, Address: 0x1f50d8, Func Offset: 0x118
	// Func End, Address: 0x1f50fc, Func Offset: 0x13c
}

// 
// Start address: 0x1f5100
void GameBgInit()
{
	// Line 231, Address: 0x1f5100, Func Offset: 0
	// Line 232, Address: 0x1f5104, Func Offset: 0x4
	// Line 231, Address: 0x1f5108, Func Offset: 0x8
	// Line 232, Address: 0x1f510c, Func Offset: 0xc
	// Line 233, Address: 0x1f5118, Func Offset: 0x18
	// Line 234, Address: 0x1f5124, Func Offset: 0x24
	// Line 235, Address: 0x1f5130, Func Offset: 0x30
	// Func End, Address: 0x1f513c, Func Offset: 0x3c
}

// 
// Start address: 0x1f5140
void GameBgSetDrawData(void* model, sgTexArc* texture, sgTexArc* gtex)
{
	// Line 239, Address: 0x1f5140, Func Offset: 0
	// Line 242, Address: 0x1f5158, Func Offset: 0x18
	// Line 243, Address: 0x1f516c, Func Offset: 0x2c
	// Line 244, Address: 0x1f517c, Func Offset: 0x3c
	// Line 245, Address: 0x1f518c, Func Offset: 0x4c
	// Line 248, Address: 0x1f519c, Func Offset: 0x5c
	// Line 249, Address: 0x1f51a8, Func Offset: 0x68
	// Func End, Address: 0x1f51c0, Func Offset: 0x80
}

// 
// Start address: 0x1f51c0
void GameBgSetAdditionalDrawData(void* model, sgTexArc* texture, sgTexArc* gtex)
{
	_anon1* em_map;
	// Line 254, Address: 0x1f51c0, Func Offset: 0
	// Line 255, Address: 0x1f51e4, Func Offset: 0x24
	// Line 257, Address: 0x1f51ec, Func Offset: 0x2c
	// Line 258, Address: 0x1f51f4, Func Offset: 0x34
	// Line 259, Address: 0x1f5200, Func Offset: 0x40
	// Line 260, Address: 0x1f520c, Func Offset: 0x4c
	// Line 261, Address: 0x1f5218, Func Offset: 0x58
	// Func End, Address: 0x1f5234, Func Offset: 0x74
}

// 
// Start address: 0x1f5240
void GameBgSetFromGAME_MAPDATA(_anon5* sb)
{
	void* model;
	sgTexArc* local_texture;
	sgTexArc* global_texture;
	// Line 266, Address: 0x1f5240, Func Offset: 0
	// Line 268, Address: 0x1f525c, Func Offset: 0x1c
	// Line 271, Address: 0x1f5260, Func Offset: 0x20
	// Line 272, Address: 0x1f5270, Func Offset: 0x30
	// Line 273, Address: 0x1f5278, Func Offset: 0x38
	// Line 274, Address: 0x1f528c, Func Offset: 0x4c
	// Line 275, Address: 0x1f5294, Func Offset: 0x54
	// Line 277, Address: 0x1f52a0, Func Offset: 0x60
	// Line 279, Address: 0x1f52b0, Func Offset: 0x70
	// Func End, Address: 0x1f52cc, Func Offset: 0x8c
}

// 
// Start address: 0x1f52d0
void GameCommonMapDrawOn()
{
	// Line 318, Address: 0x1f52d0, Func Offset: 0
	// Line 319, Address: 0x1f52d8, Func Offset: 0x8
	// Func End, Address: 0x1f52e0, Func Offset: 0x10
}

// 
// Start address: 0x1f52e0
void GameCommonMapDrawOff()
{
	// Line 325, Address: 0x1f52e0, Func Offset: 0
	// Line 326, Address: 0x1f52e4, Func Offset: 0x4
	// Func End, Address: 0x1f52ec, Func Offset: 0xc
}

// 
// Start address: 0x1f52f0
int GameCommonMapDrawStatus()
{
	// Line 334, Address: 0x1f52f0, Func Offset: 0
	// Line 335, Address: 0x1f52f4, Func Offset: 0x4
	// Func End, Address: 0x1f52fc, Func Offset: 0xc
}

// 
// Start address: 0x1f5300
void GameCommonSetModelData(void* model_data)
{
	// Line 359, Address: 0x1f5300, Func Offset: 0
	// Line 360, Address: 0x1f5308, Func Offset: 0x8
	// Line 361, Address: 0x1f5310, Func Offset: 0x10
	// Line 362, Address: 0x1f531c, Func Offset: 0x1c
	// Line 364, Address: 0x1f5320, Func Offset: 0x20
	// Func End, Address: 0x1f532c, Func Offset: 0x2c
}

// 
// Start address: 0x1f5330
void GameCommonSetAdditionalBG(_anon1* add_model)
{
	// Line 369, Address: 0x1f5330, Func Offset: 0
	// Line 370, Address: 0x1f5340, Func Offset: 0x10
	// Line 373, Address: 0x1f5370, Func Offset: 0x40
	// Func End, Address: 0x1f5384, Func Offset: 0x54
}

// 
// Start address: 0x1f5390
void GameCommonMapSet()
{
	_anon5* sb;
	_anon7 aabb;
	_anon7 dummy_aabb;
	// Line 377, Address: 0x1f5390, Func Offset: 0
	// Line 378, Address: 0x1f5398, Func Offset: 0x8
	// Line 385, Address: 0x1f53a4, Func Offset: 0x14
	// Line 389, Address: 0x1f53ac, Func Offset: 0x1c
	// Line 392, Address: 0x1f53b4, Func Offset: 0x24
	// Line 395, Address: 0x1f53c0, Func Offset: 0x30
	// Line 396, Address: 0x1f53c8, Func Offset: 0x38
	// Line 399, Address: 0x1f53d8, Func Offset: 0x48
	// Line 400, Address: 0x1f53e0, Func Offset: 0x50
	// Line 401, Address: 0x1f53f0, Func Offset: 0x60
	// Line 402, Address: 0x1f53f8, Func Offset: 0x68
	// Line 406, Address: 0x1f5400, Func Offset: 0x70
	// Line 410, Address: 0x1f5418, Func Offset: 0x88
	// Func End, Address: 0x1f5428, Func Offset: 0x98
}

// 
// Start address: 0x1f5430
void GameCommonMapDraw()
{
	// Line 417, Address: 0x1f5430, Func Offset: 0
	// Line 422, Address: 0x1f5434, Func Offset: 0x4
	// Line 417, Address: 0x1f5438, Func Offset: 0x8
	// Line 422, Address: 0x1f543c, Func Offset: 0xc
	// Line 431, Address: 0x1f5448, Func Offset: 0x18
	// Line 432, Address: 0x1f5450, Func Offset: 0x20
	// Line 433, Address: 0x1f545c, Func Offset: 0x2c
	// Line 434, Address: 0x1f5480, Func Offset: 0x50
	// Line 443, Address: 0x1f54a0, Func Offset: 0x70
	// Func End, Address: 0x1f54ac, Func Offset: 0x7c
}

// 
// Start address: 0x1f54b0
void GameCommonMapDrawSortPart()
{
	_anon4* bg;
	// Line 449, Address: 0x1f54b0, Func Offset: 0
	// Line 450, Address: 0x1f54b4, Func Offset: 0x4
	// Line 449, Address: 0x1f54b8, Func Offset: 0x8
	// Line 452, Address: 0x1f54bc, Func Offset: 0xc
	// Line 455, Address: 0x1f54cc, Func Offset: 0x1c
	// Line 456, Address: 0x1f54d4, Func Offset: 0x24
	// Line 457, Address: 0x1f54f8, Func Offset: 0x48
	// Line 460, Address: 0x1f5518, Func Offset: 0x68
	// Func End, Address: 0x1f5524, Func Offset: 0x74
}

// 
// Start address: 0x1f5530
void GameCommonStageInit()
{
	int stage;
	// Line 558, Address: 0x1f5530, Func Offset: 0
	// Line 559, Address: 0x1f5534, Func Offset: 0x4
	// Line 558, Address: 0x1f5538, Func Offset: 0x8
	// Line 559, Address: 0x1f553c, Func Offset: 0xc
	// Line 583, Address: 0x1f5554, Func Offset: 0x24
	// Line 584, Address: 0x1f555c, Func Offset: 0x2c
	// Line 585, Address: 0x1f5568, Func Offset: 0x38
	// Func End, Address: 0x1f5574, Func Offset: 0x44
}

// 
// Start address: 0x1f5580
void GameCommonSceneInit()
{
	// Line 589, Address: 0x1f5580, Func Offset: 0
	// Line 590, Address: 0x1f5588, Func Offset: 0x8
	// Line 593, Address: 0x1f5590, Func Offset: 0x10
	// Line 596, Address: 0x1f5598, Func Offset: 0x18
	// Line 597, Address: 0x1f55a0, Func Offset: 0x20
	// Line 601, Address: 0x1f55a8, Func Offset: 0x28
	// Line 602, Address: 0x1f55b8, Func Offset: 0x38
	// Line 605, Address: 0x1f55bc, Func Offset: 0x3c
	// Line 607, Address: 0x1f55c4, Func Offset: 0x44
	// Line 608, Address: 0x1f55cc, Func Offset: 0x4c
	// Line 609, Address: 0x1f55d4, Func Offset: 0x54
	// Line 612, Address: 0x1f55dc, Func Offset: 0x5c
	// Line 615, Address: 0x1f55e4, Func Offset: 0x64
	// Line 618, Address: 0x1f55ec, Func Offset: 0x6c
	// Line 622, Address: 0x1f55f4, Func Offset: 0x74
	// Func End, Address: 0x1f5600, Func Offset: 0x80
}

// 
// Start address: 0x1f5600
void GameCommonSceneSet()
{
	int stage;
	// Line 628, Address: 0x1f5600, Func Offset: 0
	// Line 629, Address: 0x1f5604, Func Offset: 0x4
	// Line 628, Address: 0x1f5608, Func Offset: 0x8
	// Line 635, Address: 0x1f5610, Func Offset: 0x10
	// Line 638, Address: 0x1f5618, Func Offset: 0x18
	// Line 641, Address: 0x1f5630, Func Offset: 0x30
	// Line 645, Address: 0x1f5638, Func Offset: 0x38
	// Line 648, Address: 0x1f5644, Func Offset: 0x44
	// Line 651, Address: 0x1f564c, Func Offset: 0x4c
	// Line 654, Address: 0x1f5654, Func Offset: 0x54
	// Line 655, Address: 0x1f5660, Func Offset: 0x60
	// Line 654, Address: 0x1f5664, Func Offset: 0x64
	// Line 655, Address: 0x1f5668, Func Offset: 0x68
	// Line 656, Address: 0x1f5678, Func Offset: 0x78
	// Line 658, Address: 0x1f5688, Func Offset: 0x88
	// Line 659, Address: 0x1f5694, Func Offset: 0x94
	// Line 660, Address: 0x1f56a4, Func Offset: 0xa4
	// Line 661, Address: 0x1f56c4, Func Offset: 0xc4
	// Line 662, Address: 0x1f56cc, Func Offset: 0xcc
	// Line 664, Address: 0x1f56d8, Func Offset: 0xd8
	// Line 665, Address: 0x1f56ec, Func Offset: 0xec
	// Line 666, Address: 0x1f5700, Func Offset: 0x100
	// Line 667, Address: 0x1f570c, Func Offset: 0x10c
	// Line 669, Address: 0x1f5710, Func Offset: 0x110
	// Line 672, Address: 0x1f5718, Func Offset: 0x118
	// Line 673, Address: 0x1f5720, Func Offset: 0x120
	// Line 676, Address: 0x1f5728, Func Offset: 0x128
	// Line 679, Address: 0x1f5730, Func Offset: 0x130
	// Line 682, Address: 0x1f5738, Func Offset: 0x138
	// Line 685, Address: 0x1f5740, Func Offset: 0x140
	// Line 688, Address: 0x1f5748, Func Offset: 0x148
	// Line 691, Address: 0x1f5750, Func Offset: 0x150
	// Line 692, Address: 0x1f5760, Func Offset: 0x160
	// Line 694, Address: 0x1f5770, Func Offset: 0x170
	// Line 695, Address: 0x1f5778, Func Offset: 0x178
	// Line 708, Address: 0x1f5780, Func Offset: 0x180
	// Line 699, Address: 0x1f5784, Func Offset: 0x184
	// Line 708, Address: 0x1f5794, Func Offset: 0x194
	// Line 710, Address: 0x1f57b8, Func Offset: 0x1b8
	// Line 711, Address: 0x1f57c8, Func Offset: 0x1c8
	// Line 713, Address: 0x1f57d0, Func Offset: 0x1d0
	// Line 714, Address: 0x1f57d8, Func Offset: 0x1d8
	// Line 716, Address: 0x1f57e0, Func Offset: 0x1e0
	// Line 717, Address: 0x1f57e8, Func Offset: 0x1e8
	// Line 716, Address: 0x1f57ec, Func Offset: 0x1ec
	// Line 717, Address: 0x1f57f4, Func Offset: 0x1f4
	// Line 720, Address: 0x1f5808, Func Offset: 0x208
	// Line 721, Address: 0x1f5810, Func Offset: 0x210
	// Line 725, Address: 0x1f5818, Func Offset: 0x218
	// Line 737, Address: 0x1f582c, Func Offset: 0x22c
	// Func End, Address: 0x1f583c, Func Offset: 0x23c
}

// 
// Start address: 0x1f5840
void GameCommonSceneMain()
{
	sfCldPart* cld_part;
	int stage;
	_anon0* camera_ball;
	// Line 741, Address: 0x1f5840, Func Offset: 0
	// Line 745, Address: 0x1f5854, Func Offset: 0x14
	// Line 747, Address: 0x1f5864, Func Offset: 0x24
	// Line 748, Address: 0x1f586c, Func Offset: 0x2c
	// Line 751, Address: 0x1f5880, Func Offset: 0x40
	// Line 753, Address: 0x1f589c, Func Offset: 0x5c
	// Line 754, Address: 0x1f58a4, Func Offset: 0x64
	// Line 757, Address: 0x1f58b8, Func Offset: 0x78
	// Line 758, Address: 0x1f58d0, Func Offset: 0x90
	// Line 760, Address: 0x1f58d8, Func Offset: 0x98
	// Line 761, Address: 0x1f58e8, Func Offset: 0xa8
	// Line 762, Address: 0x1f5900, Func Offset: 0xc0
	// Line 763, Address: 0x1f5908, Func Offset: 0xc8
	// Line 764, Address: 0x1f5914, Func Offset: 0xd4
	// Line 767, Address: 0x1f5918, Func Offset: 0xd8
	// Line 770, Address: 0x1f5920, Func Offset: 0xe0
	// Line 772, Address: 0x1f5928, Func Offset: 0xe8
	// Line 775, Address: 0x1f5930, Func Offset: 0xf0
	// Func End, Address: 0x1f5940, Func Offset: 0x100
}

// 
// Start address: 0x1f5940
void GameCommonSceneEnd()
{
	int stage;
	// Line 779, Address: 0x1f5940, Func Offset: 0
	// Line 780, Address: 0x1f5944, Func Offset: 0x4
	// Line 779, Address: 0x1f5948, Func Offset: 0x8
	// Line 780, Address: 0x1f594c, Func Offset: 0xc
	// Line 781, Address: 0x1f5964, Func Offset: 0x24
	// Line 782, Address: 0x1f596c, Func Offset: 0x2c
	// Line 784, Address: 0x1f5978, Func Offset: 0x38
	// Line 786, Address: 0x1f5980, Func Offset: 0x40
	// Line 787, Address: 0x1f5988, Func Offset: 0x48
	// Line 790, Address: 0x1f5990, Func Offset: 0x50
	// Line 791, Address: 0x1f599c, Func Offset: 0x5c
	// Line 794, Address: 0x1f59a8, Func Offset: 0x68
	// Line 797, Address: 0x1f59b0, Func Offset: 0x70
	// Line 800, Address: 0x1f59b8, Func Offset: 0x78
	// Line 803, Address: 0x1f59c0, Func Offset: 0x80
	// Func End, Address: 0x1f59cc, Func Offset: 0x8c
}

// 
// Start address: 0x1f59d0
void GameCommonStageEnd()
{
	int stage;
	// Line 807, Address: 0x1f59d0, Func Offset: 0
	// Line 808, Address: 0x1f59d4, Func Offset: 0x4
	// Line 807, Address: 0x1f59d8, Func Offset: 0x8
	// Line 808, Address: 0x1f59dc, Func Offset: 0xc
	// Line 810, Address: 0x1f59f4, Func Offset: 0x24
	// Line 811, Address: 0x1f59fc, Func Offset: 0x2c
	// Line 814, Address: 0x1f5a08, Func Offset: 0x38
	// Func End, Address: 0x1f5a14, Func Offset: 0x44
}

