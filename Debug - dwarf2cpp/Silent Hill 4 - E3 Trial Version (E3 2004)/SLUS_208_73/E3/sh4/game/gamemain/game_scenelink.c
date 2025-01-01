typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef enum GameItem : unsigned char;
typedef struct _anon5;
typedef enum PlayerExtStatus : unsigned char;
typedef struct _anon6;
typedef struct _anon7;
typedef struct _GAME_WORK;
typedef struct _anon8;
typedef union _anon9;
typedef union _anon10;
typedef struct sfObj;
typedef enum _enum_0 : unsigned char;
typedef struct _anon11;
typedef enum _enum_1 : unsigned char;

typedef int(*type_2)(int, int);
typedef void(*type_34)(sfObj*);
typedef void(*type_36)(sfObj*);

typedef _anon0* type_0[14];
typedef _anon11 type_1[2];
typedef int type_3[1];
typedef int type_4[1];
typedef float type_5[4];
typedef int type_6[0];
typedef int type_7[1];
typedef char type_8[2];
typedef char type_9[2][0];
typedef float type_10[4];
typedef float type_11[4][4];
typedef int type_12[1];
typedef float type_13[3];
typedef char type_14[22];
typedef int type_15[1];
typedef float type_16[3];
typedef int type_17[1];
typedef unsigned char type_18[3];
typedef _anon7 type_19[4];
typedef float type_20[3];
typedef _anon9 type_21[0];
typedef float type_22[4];
typedef float type_23[3];
typedef unsigned char type_24[3];
typedef short type_25[2];
typedef _anon2 type_26[0];
typedef unsigned short type_27[2];
typedef int type_28[1];
typedef char type_29[4];
typedef unsigned char type_30[4];
typedef float type_31[1];
typedef _anon10 type_32[256];
typedef int type_33[1];
typedef float type_35[4][4];

struct _anon0
{
	int n_scenes;
	int n_doorlinks;
	int doorlinks_data_offset;
	int doorlinks_call_functions;
	int scene_data_offsets[0];
};

struct _anon1
{
	int next_door;
};

struct _anon2
{
	float bmin[3];
	unsigned char door_no;
	unsigned char scene_no;
	short door_type;
	float bmax[3];
	unsigned char door_material;
	unsigned char pad1[3];
	float start_position[3];
	float start_direction[3];
};

struct _anon3
{
	char doorlinks[2][0];
};

struct _anon4
{
	float start[4];
	float end[4];
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
	unsigned char n_doors;
	unsigned char pad[3];
	_anon2 doors[0];
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

struct _anon6
{
	char door_num[22];
};

struct _anon7
{
	unsigned char next_offset;
	unsigned char flags;
	short id;
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

struct _anon8
{
	_anon9 vertex[0];
};

union _anon9
{
	float node[4];
	_anon7 data[4];
};

union _anon10
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

struct sfObj
{
	_anon10 fwork[256];
	_anon10* work;
	void(*func)(sfObj*);
	_anon10* work_pt0;
	_anon10* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon10* sys_work;
	_anon10* scene_work;
	_anon10* event_work;
	_anon10* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

enum _enum_0 : unsigned char
{
	DOOR_TYPE_NONE,
	DOOR_TYPE_DOOR,
	DOOR_TYPE_NEXT,
	DOOR_TYPE_MAX
};

struct _anon11
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

enum _enum_1 : unsigned char
{
	DOOR_MAT_NONE,
	DOOR_MAT_STEEL,
	DOOR_MAT_WOOD,
	DOOR_MAT_ELEVATOR,
	DOOR_MAT_KOSHI,
	DOOR_MAT_LARGE,
	DOOR_MAT_TRAIN,
	DOOR_MAT_MAX
};

float sg_vector_unit_y[4];
float sg_vector_unit_z[4];
_GAME_WORK gamew;
_anon11 player_ext_info[2];
_anon1 link_work;
_anon0* data_tops[14];
_anon6 hs32_roomdata;

_anon3* GetDoorLinks(_anon0* data_top);
int(*)(int, int) DoorFunction(_anon0* data_top, int door_no);
_anon5* GetScene(_anon0* data_top, unsigned int scene_no);
_anon2* GetDoor(_anon5* scene, unsigned int door_idx);
void DoorGetMin(_anon2* door, float* bmin);
void DoorGetMax(_anon2* door, float* bmax);
void DoorGetStartPosition(_anon2* door, float* pos);
void DoorGetStartDirection(_anon2* door, float* dir);
void DoorUnderLine(_anon2* door, float* p0, float* p1);
int PlayerDoorAccessCheck_Line(float* p0, float* p1);
int DoorPlayerCheck(_anon2* door);
int DoorNextPlayerCheck(_anon2* door);
void LinkWork_Clear(_anon1* w);
_anon0* CurrentLinkData();
int GameSceneLinkhs32DoorAssignedScene();
int GameSceneLinkhs32DoorReplaceScene();
void GameSceneLinkhs32DoorCopySaveArea(void* pDst);
void GameSceneLinkhs32DoorCopyLoadArea(void* pSrc);
int* GameSceneLinkGetDoor(int scene_no, int door_no);
int GameSceneLinkNDoors(int scene_no);
int* GameSceneLinkGetDoorByIndex(int scene_no, int door_idx);
int GameSceneLinkDoorNo(int* door_);
_enum_0 GameSceneLinkDoorType(int* door_);
_enum_1 GameSceneLinkDoorMaterial(int* door_);
int GameSceneLinkDoorNextSceneNo(int* door_);
void GameSceneLinkDoorStartPosition(int* door_, float* pos);
float GameSceneLinkDoorStartRotationAngleY(int* door_);
int GameSceneLinkDoorPlayerCheck(int* door_);
int GameSceneLinkCallbackExec(int* door_, int scene_no, int next_scene_no);
int GameSceneLinkMoveExecute(int* door_);

// 
// Start address: 0x23f440
_anon3* GetDoorLinks(_anon0* data_top)
{
	// Line 58, Address: 0x23f440, Func Offset: 0
	// Line 64, Address: 0x23f44c, Func Offset: 0xc
	// Func End, Address: 0x23f454, Func Offset: 0x14
}

// 
// Start address: 0x23f460
int(*)(int, int) DoorFunction(_anon0* data_top, int door_no)
{
	// Line 128, Address: 0x23f460, Func Offset: 0
	// Line 129, Address: 0x23f474, Func Offset: 0x14
	// Func End, Address: 0x23f47c, Func Offset: 0x1c
}

// 
// Start address: 0x23f480
_anon5* GetScene(_anon0* data_top, unsigned int scene_no)
{
	// Line 135, Address: 0x23f480, Func Offset: 0
	// Line 136, Address: 0x23f488, Func Offset: 0x8
	// Line 138, Address: 0x23f490, Func Offset: 0x10
	// Line 144, Address: 0x23f4b0, Func Offset: 0x30
	// Func End, Address: 0x23f4b8, Func Offset: 0x38
}

// 
// Start address: 0x23f4c0
_anon2* GetDoor(_anon5* scene, unsigned int door_idx)
{
	// Line 158, Address: 0x23f4c0, Func Offset: 0
	// Line 160, Address: 0x23f4e8, Func Offset: 0x28
	// Func End, Address: 0x23f4f0, Func Offset: 0x30
}

// 
// Start address: 0x23f4f0
void DoorGetMin(_anon2* door, float* bmin)
{
	// Line 194, Address: 0x23f4f0, Func Offset: 0
	// Line 195, Address: 0x23f4f8, Func Offset: 0x8
	// Line 196, Address: 0x23f500, Func Offset: 0x10
	// Line 197, Address: 0x23f504, Func Offset: 0x14
	// Func End, Address: 0x23f50c, Func Offset: 0x1c
}

// 
// Start address: 0x23f510
void DoorGetMax(_anon2* door, float* bmax)
{
	// Line 203, Address: 0x23f510, Func Offset: 0
	// Line 204, Address: 0x23f518, Func Offset: 0x8
	// Line 205, Address: 0x23f520, Func Offset: 0x10
	// Line 206, Address: 0x23f524, Func Offset: 0x14
	// Func End, Address: 0x23f52c, Func Offset: 0x1c
}

// 
// Start address: 0x23f530
void DoorGetStartPosition(_anon2* door, float* pos)
{
	// Line 212, Address: 0x23f530, Func Offset: 0
	// Line 215, Address: 0x23f534, Func Offset: 0x4
	// Line 212, Address: 0x23f538, Func Offset: 0x8
	// Line 213, Address: 0x23f53c, Func Offset: 0xc
	// Line 214, Address: 0x23f544, Func Offset: 0x14
	// Line 216, Address: 0x23f54c, Func Offset: 0x1c
	// Func End, Address: 0x23f554, Func Offset: 0x24
}

// 
// Start address: 0x23f560
void DoorGetStartDirection(_anon2* door, float* dir)
{
	// Line 222, Address: 0x23f560, Func Offset: 0
	// Line 225, Address: 0x23f564, Func Offset: 0x4
	// Line 222, Address: 0x23f568, Func Offset: 0x8
	// Line 223, Address: 0x23f56c, Func Offset: 0xc
	// Line 224, Address: 0x23f574, Func Offset: 0x14
	// Line 226, Address: 0x23f57c, Func Offset: 0x1c
	// Func End, Address: 0x23f584, Func Offset: 0x24
}

// 
// Start address: 0x23f590
void DoorUnderLine(_anon2* door, float* p0, float* p1)
{
	float v[4];
	float bmin[4];
	float bmax[4];
	// Line 231, Address: 0x23f590, Func Offset: 0
	// Line 236, Address: 0x23f59c, Func Offset: 0xc
	// Line 237, Address: 0x23f5a4, Func Offset: 0x14
	// Line 239, Address: 0x23f5ac, Func Offset: 0x1c
	// Line 242, Address: 0x23f5b8, Func Offset: 0x28
	// Line 240, Address: 0x23f5bc, Func Offset: 0x2c
	// Line 242, Address: 0x23f5c0, Func Offset: 0x30
	// Line 240, Address: 0x23f5c4, Func Offset: 0x34
	// Line 242, Address: 0x23f5c8, Func Offset: 0x38
	// Line 243, Address: 0x23f5dc, Func Offset: 0x4c
	// Line 244, Address: 0x23f5e4, Func Offset: 0x54
	// Line 243, Address: 0x23f5e8, Func Offset: 0x58
	// Line 244, Address: 0x23f5ec, Func Offset: 0x5c
	// Line 245, Address: 0x23f600, Func Offset: 0x70
	// Line 246, Address: 0x23f608, Func Offset: 0x78
	// Line 245, Address: 0x23f614, Func Offset: 0x84
	// Line 246, Address: 0x23f618, Func Offset: 0x88
	// Line 247, Address: 0x23f61c, Func Offset: 0x8c
	// Func End, Address: 0x23f628, Func Offset: 0x98
}

// 
// Start address: 0x23f630
int PlayerDoorAccessCheck_Line(float* p0, float* p1)
{
	float pl_pos[4];
	float pl_rot[4];
	float v[4];
	float door[4][4];
	_anon8* poly;
	_anon4 line;
	float r;
	// Line 257, Address: 0x23f630, Func Offset: 0
	// Line 267, Address: 0x23f634, Func Offset: 0x4
	// Line 257, Address: 0x23f638, Func Offset: 0x8
	// Line 267, Address: 0x23f63c, Func Offset: 0xc
	// Line 257, Address: 0x23f640, Func Offset: 0x10
	// Line 267, Address: 0x23f644, Func Offset: 0x14
	// Line 257, Address: 0x23f648, Func Offset: 0x18
	// Line 267, Address: 0x23f658, Func Offset: 0x28
	// Line 268, Address: 0x23f660, Func Offset: 0x30
	// Line 271, Address: 0x23f674, Func Offset: 0x44
	// Line 272, Address: 0x23f688, Func Offset: 0x58
	// Line 274, Address: 0x23f698, Func Offset: 0x68
	// Line 275, Address: 0x23f6a0, Func Offset: 0x70
	// Line 276, Address: 0x23f6b4, Func Offset: 0x84
	// Line 277, Address: 0x23f6d4, Func Offset: 0xa4
	// Line 278, Address: 0x23f6e4, Func Offset: 0xb4
	// Line 281, Address: 0x23f700, Func Offset: 0xd0
	// Line 282, Address: 0x23f730, Func Offset: 0x100
	// Line 283, Address: 0x23f74c, Func Offset: 0x11c
	// Line 284, Address: 0x23f768, Func Offset: 0x138
	// Line 285, Address: 0x23f784, Func Offset: 0x154
	// Line 286, Address: 0x23f7a0, Func Offset: 0x170
	// Line 287, Address: 0x23f7a4, Func Offset: 0x174
	// Line 290, Address: 0x23f7a8, Func Offset: 0x178
	// Line 287, Address: 0x23f7b0, Func Offset: 0x180
	// Line 290, Address: 0x23f7b4, Func Offset: 0x184
	// Line 291, Address: 0x23f7c4, Func Offset: 0x194
	// Line 293, Address: 0x23f7d0, Func Offset: 0x1a0
	// Line 294, Address: 0x23f7d8, Func Offset: 0x1a8
	// Func End, Address: 0x23f7f0, Func Offset: 0x1c0
}

// 
// Start address: 0x23f7f0
int DoorPlayerCheck(_anon2* door)
{
	float p0[4];
	float p1[4];
	// Line 300, Address: 0x23f7f0, Func Offset: 0
	// Line 305, Address: 0x23f7f8, Func Offset: 0x8
	// Line 306, Address: 0x23f804, Func Offset: 0x14
	// Line 307, Address: 0x23f810, Func Offset: 0x20
	// Func End, Address: 0x23f81c, Func Offset: 0x2c
}

// 
// Start address: 0x23f820
int DoorNextPlayerCheck(_anon2* door)
{
	_anon4 line;
	float pl_pos[4];
	float v0[4];
	float v1[4];
	float v2[4];
	float v_start[4];
	float r;
	// Line 311, Address: 0x23f820, Func Offset: 0
	// Line 320, Address: 0x23f828, Func Offset: 0x8
	// Line 311, Address: 0x23f82c, Func Offset: 0xc
	// Line 320, Address: 0x23f830, Func Offset: 0x10
	// Line 321, Address: 0x23f83c, Func Offset: 0x1c
	// Line 322, Address: 0x23f848, Func Offset: 0x28
	// Line 323, Address: 0x23f854, Func Offset: 0x34
	// Line 324, Address: 0x23f86c, Func Offset: 0x4c
	// Line 326, Address: 0x23f870, Func Offset: 0x50
	// Line 325, Address: 0x23f874, Func Offset: 0x54
	// Line 326, Address: 0x23f878, Func Offset: 0x58
	// Line 325, Address: 0x23f87c, Func Offset: 0x5c
	// Line 326, Address: 0x23f880, Func Offset: 0x60
	// Line 327, Address: 0x23f898, Func Offset: 0x78
	// Line 328, Address: 0x23f8b8, Func Offset: 0x98
	// Line 330, Address: 0x23f8dc, Func Offset: 0xbc
	// Line 331, Address: 0x23f8e8, Func Offset: 0xc8
	// Line 332, Address: 0x23f908, Func Offset: 0xe8
	// Line 334, Address: 0x23f92c, Func Offset: 0x10c
	// Line 333, Address: 0x23f930, Func Offset: 0x110
	// Line 334, Address: 0x23f93c, Func Offset: 0x11c
	// Line 335, Address: 0x23f948, Func Offset: 0x128
	// Line 337, Address: 0x23f950, Func Offset: 0x130
	// Line 338, Address: 0x23f958, Func Offset: 0x138
	// Func End, Address: 0x23f968, Func Offset: 0x148
}

// 
// Start address: 0x23f970
void LinkWork_Clear(_anon1* w)
{
	// Line 355, Address: 0x23f970, Func Offset: 0
	// Func End, Address: 0x23f978, Func Offset: 0x8
}

// 
// Start address: 0x23f980
_anon0* CurrentLinkData()
{
	// Line 404, Address: 0x23f980, Func Offset: 0
	// Line 405, Address: 0x23f998, Func Offset: 0x18
	// Func End, Address: 0x23f9a0, Func Offset: 0x20
}

// 
// Start address: 0x23f9a0
int GameSceneLinkhs32DoorAssignedScene()
{
	int i;
	int num;
	// Line 474, Address: 0x23f9a0, Func Offset: 0
	// Line 476, Address: 0x23f9a4, Func Offset: 0x4
	// Line 474, Address: 0x23f9a8, Func Offset: 0x8
	// Line 476, Address: 0x23f9ac, Func Offset: 0xc
	// Line 478, Address: 0x23f9c0, Func Offset: 0x20
	// Line 480, Address: 0x23f9c4, Func Offset: 0x24
	// Line 482, Address: 0x23f9fc, Func Offset: 0x5c
	// Line 483, Address: 0x23fa04, Func Offset: 0x64
	// Line 486, Address: 0x23fa14, Func Offset: 0x74
	// Line 484, Address: 0x23fa18, Func Offset: 0x78
	// Line 486, Address: 0x23fa1c, Func Offset: 0x7c
	// Func End, Address: 0x23fa28, Func Offset: 0x88
}

// 
// Start address: 0x23fa30
int GameSceneLinkhs32DoorReplaceScene()
{
	_anon2* linkdoor;
	int i;
	// Line 492, Address: 0x23fa30, Func Offset: 0
	// Line 497, Address: 0x23fa34, Func Offset: 0x4
	// Line 492, Address: 0x23fa38, Func Offset: 0x8
	// Line 497, Address: 0x23fa3c, Func Offset: 0xc
	// Line 498, Address: 0x23fa44, Func Offset: 0x14
	// Line 499, Address: 0x23fa50, Func Offset: 0x20
	// Line 500, Address: 0x23fa54, Func Offset: 0x24
	// Line 499, Address: 0x23fa5c, Func Offset: 0x2c
	// Line 500, Address: 0x23fa68, Func Offset: 0x38
	// Line 502, Address: 0x23fabc, Func Offset: 0x8c
	// Line 501, Address: 0x23fac0, Func Offset: 0x90
	// Line 502, Address: 0x23fac4, Func Offset: 0x94
	// Func End, Address: 0x23facc, Func Offset: 0x9c
}

// 
// Start address: 0x23fad0
void GameSceneLinkhs32DoorCopySaveArea(void* pDst)
{
	// Line 505, Address: 0x23fad0, Func Offset: 0
	// Func End, Address: 0x23fae0, Func Offset: 0x10
}

// 
// Start address: 0x23fae0
void GameSceneLinkhs32DoorCopyLoadArea(void* pSrc)
{
	// Line 509, Address: 0x23fae4, Func Offset: 0x4
	// Func End, Address: 0x23faf4, Func Offset: 0x14
}

// 
// Start address: 0x23fb00
int* GameSceneLinkGetDoor(int scene_no, int door_no)
{
	int n_doors;
	int i;
	int* door_;
	// Line 522, Address: 0x23fb00, Func Offset: 0
	// Line 525, Address: 0x23fb20, Func Offset: 0x20
	// Line 526, Address: 0x23fb2c, Func Offset: 0x2c
	// Line 527, Address: 0x23fb38, Func Offset: 0x38
	// Line 528, Address: 0x23fb48, Func Offset: 0x48
	// Line 529, Address: 0x23fb58, Func Offset: 0x58
	// Line 530, Address: 0x23fb60, Func Offset: 0x60
	// Line 531, Address: 0x23fb70, Func Offset: 0x70
	// Line 532, Address: 0x23fb78, Func Offset: 0x78
	// Func End, Address: 0x23fb98, Func Offset: 0x98
}

// 
// Start address: 0x23fba0
int GameSceneLinkNDoors(int scene_no)
{
	_anon0* link_data;
	_anon5* scene;
	// Line 537, Address: 0x23fba0, Func Offset: 0
	// Line 538, Address: 0x23fba8, Func Offset: 0x8
	// Line 539, Address: 0x23fbb0, Func Offset: 0x10
	// Line 541, Address: 0x23fbb8, Func Offset: 0x18
	// Line 543, Address: 0x23fbcc, Func Offset: 0x2c
	// Func End, Address: 0x23fbd8, Func Offset: 0x38
}

// 
// Start address: 0x23fbe0
int* GameSceneLinkGetDoorByIndex(int scene_no, int door_idx)
{
	_anon0* link_data;
	_anon5* scene;
	_anon2* door;
	// Line 556, Address: 0x23fbe0, Func Offset: 0
	// Line 557, Address: 0x23fbe8, Func Offset: 0x8
	// Line 560, Address: 0x23fbf0, Func Offset: 0x10
	// Line 561, Address: 0x23fbf8, Func Offset: 0x18
	// Line 563, Address: 0x23fc00, Func Offset: 0x20
	// Line 564, Address: 0x23fc0c, Func Offset: 0x2c
	// Line 565, Address: 0x23fc14, Func Offset: 0x34
	// Line 566, Address: 0x23fc20, Func Offset: 0x40
	// Line 567, Address: 0x23fc2c, Func Offset: 0x4c
	// Line 568, Address: 0x23fc30, Func Offset: 0x50
	// Func End, Address: 0x23fc3c, Func Offset: 0x5c
}

// 
// Start address: 0x23fc40
int GameSceneLinkDoorNo(int* door_)
{
	_anon2* door;
	// Line 576, Address: 0x23fc40, Func Offset: 0
	// Line 578, Address: 0x23fc4c, Func Offset: 0xc
	// Func End, Address: 0x23fc54, Func Offset: 0x14
}

// 
// Start address: 0x23fc60
_enum_0 GameSceneLinkDoorType(int* door_)
{
	_anon2* door;
	// Line 586, Address: 0x23fc60, Func Offset: 0
	// Line 588, Address: 0x23fc6c, Func Offset: 0xc
	// Func End, Address: 0x23fc74, Func Offset: 0x14
}

// 
// Start address: 0x23fc80
_enum_1 GameSceneLinkDoorMaterial(int* door_)
{
	_anon2* door;
	// Line 596, Address: 0x23fc80, Func Offset: 0
	// Line 598, Address: 0x23fc8c, Func Offset: 0xc
	// Func End, Address: 0x23fc94, Func Offset: 0x14
}

// 
// Start address: 0x23fca0
int GameSceneLinkDoorNextSceneNo(int* door_)
{
	_anon2* door;
	_anon0* link_data;
	_anon3* door_links;
	int next_scene_no;
	// Line 604, Address: 0x23fca0, Func Offset: 0
	// Line 606, Address: 0x23fca8, Func Offset: 0x8
	// Line 611, Address: 0x23fcb0, Func Offset: 0x10
	// Line 615, Address: 0x23fcb8, Func Offset: 0x18
	// Line 613, Address: 0x23fcbc, Func Offset: 0x1c
	// Line 615, Address: 0x23fcc8, Func Offset: 0x28
	// Line 617, Address: 0x23fccc, Func Offset: 0x2c
	// Line 619, Address: 0x23fcd4, Func Offset: 0x34
	// Line 620, Address: 0x23fce0, Func Offset: 0x40
	// Line 622, Address: 0x23fcec, Func Offset: 0x4c
	// Line 627, Address: 0x23fcf8, Func Offset: 0x58
	// Line 630, Address: 0x23fd00, Func Offset: 0x60
	// Func End, Address: 0x23fd0c, Func Offset: 0x6c
}

// 
// Start address: 0x23fd10
void GameSceneLinkDoorStartPosition(int* door_, float* pos)
{
	_anon2* door;
	// Line 636, Address: 0x23fd10, Func Offset: 0
	// Line 638, Address: 0x23fd14, Func Offset: 0x4
	// Line 640, Address: 0x23fd1c, Func Offset: 0xc
	// Line 641, Address: 0x23fd24, Func Offset: 0x14
	// Func End, Address: 0x23fd34, Func Offset: 0x24
}

// 
// Start address: 0x23fd40
float GameSceneLinkDoorStartRotationAngleY(int* door_)
{
	_anon2* door;
	float v[4];
	// Line 647, Address: 0x23fd40, Func Offset: 0
	// Line 650, Address: 0x23fd44, Func Offset: 0x4
	// Line 651, Address: 0x23fd4c, Func Offset: 0xc
	// Line 652, Address: 0x23fd58, Func Offset: 0x18
	// Line 653, Address: 0x23fd60, Func Offset: 0x20
	// Line 655, Address: 0x23fd70, Func Offset: 0x30
	// Func End, Address: 0x23fd7c, Func Offset: 0x3c
}

// 
// Start address: 0x23fd80
int GameSceneLinkDoorPlayerCheck(int* door_)
{
	_anon2* door;
	// Line 664, Address: 0x23fd80, Func Offset: 0
	// Line 668, Address: 0x23fd84, Func Offset: 0x4
	// Line 664, Address: 0x23fd88, Func Offset: 0x8
	// Line 668, Address: 0x23fd8c, Func Offset: 0xc
	// Line 672, Address: 0x23fdb0, Func Offset: 0x30
	// Func End, Address: 0x23fdbc, Func Offset: 0x3c
}

// 
// Start address: 0x23fdc0
int GameSceneLinkCallbackExec(int* door_, int scene_no, int next_scene_no)
{
	_anon0* link_data;
	int(*door_func)(int, int);
	int ret;
	// Line 676, Address: 0x23fdc0, Func Offset: 0
	// Line 677, Address: 0x23fdc8, Func Offset: 0x8
	// Line 679, Address: 0x23fdd0, Func Offset: 0x10
	// Line 681, Address: 0x23fddc, Func Offset: 0x1c
	// Line 682, Address: 0x23fde4, Func Offset: 0x24
	// Line 683, Address: 0x23fdf4, Func Offset: 0x34
	// Line 684, Address: 0x23fdf8, Func Offset: 0x38
	// Line 686, Address: 0x23fe04, Func Offset: 0x44
	// Line 687, Address: 0x23fe0c, Func Offset: 0x4c
	// Line 688, Address: 0x23fe10, Func Offset: 0x50
	// Line 689, Address: 0x23fe18, Func Offset: 0x58
	// Func End, Address: 0x23fe24, Func Offset: 0x64
}

// 
// Start address: 0x23fe30
int GameSceneLinkMoveExecute(int* door_)
{
	_anon1* work;
	_anon2* door;
	int next_scene;
	int ret;
	// Line 702, Address: 0x23fe30, Func Offset: 0
	// Line 703, Address: 0x23fe48, Func Offset: 0x18
	// Line 702, Address: 0x23fe4c, Func Offset: 0x1c
	// Line 709, Address: 0x23fe50, Func Offset: 0x20
	// Line 710, Address: 0x23fe58, Func Offset: 0x28
	// Line 713, Address: 0x23fe60, Func Offset: 0x30
	// Line 714, Address: 0x23fe6c, Func Offset: 0x3c
	// Line 715, Address: 0x23fe74, Func Offset: 0x44
	// Line 716, Address: 0x23fe80, Func Offset: 0x50
	// Line 717, Address: 0x23fe90, Func Offset: 0x60
	// Line 718, Address: 0x23fe98, Func Offset: 0x68
	// Line 720, Address: 0x23fea0, Func Offset: 0x70
	// Line 721, Address: 0x23fea8, Func Offset: 0x78
	// Line 723, Address: 0x23feac, Func Offset: 0x7c
	// Line 721, Address: 0x23feb0, Func Offset: 0x80
	// Line 723, Address: 0x23feb4, Func Offset: 0x84
	// Line 724, Address: 0x23feb8, Func Offset: 0x88
	// Func End, Address: 0x23fed4, Func Offset: 0xa4
}

