typedef struct sfObj;
typedef union _anon0;
typedef struct _HoleData;
typedef enum _enum_0 : unsigned char;
typedef struct _GAME_WORK;
typedef struct _EventDriver;
typedef struct _anon1;
typedef enum _enum_1 : unsigned char;
typedef struct EventFlag;

typedef void(*type_1)(sfObj*);
typedef void(*type_2)(sfObj*);
typedef int(*type_15)(sfObj*);
typedef int(*type_19)(sfObj*);
typedef int(*type_21)(sfObj*);
typedef int(*type_24)(sfObj*);
typedef int(*type_25)(sfObj*);

typedef _anon0 type_0[256];
typedef int type_3[1];
typedef _HoleData type_4[26];
typedef int type_5[1];
typedef int type_6[1];
typedef float type_7[4];
typedef float type_8[4][4];
typedef int type_9[1];
typedef int type_10[1];
typedef int type_11[1];
typedef short type_12[6];
typedef float type_13[4];
typedef short type_14[2];
typedef int type_16[1];
typedef unsigned short type_17[2];
typedef char type_18[4];
typedef unsigned char type_20[4];
typedef float type_22[1];
typedef int type_23[1];
typedef short type_26[6];
typedef _anon0 type_27[4];
typedef unsigned char type_28[320];

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

struct _HoleData
{
	_enum_0 stage;
	short sn;
	short flag;
	short map_flag;
	float pos[4];
	float angle;
};

enum _enum_0 : unsigned char
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

struct _EventDriver
{
	int evnum;
	int(*trgchk)(sfObj*);
	int(*init)(sfObj*);
	int(*exec)(sfObj*);
	int(*draw)(sfObj*);
	int(*end)(sfObj*);
	unsigned int* file;
	_anon0 val[4];
};

struct _anon1
{
	int current_hole_index;
	int another_stage;
	int another_scene;
	int room_scene;
	int to_another;
};

enum _enum_1 : unsigned char
{
	HR3LDK_STAT_NONE,
	HR3LDK_STAT_SUBWAY,
	HR3LDK_STAT_SUBWAY_LATER,
	HR3LDK_STAT_FOREST,
	HR3LDK_STAT_FOREST_LATER,
	HR3LDK_STAT_WATER,
	HR3LDK_STAT_WATER_LATER,
	HR3LDK_STAT_BUILDING,
	HR3LDK_STAT_BUILDING_LATER,
	HR3LDK_STAT_HOSPITAL,
	HR3LDK_STAT_HOME,
	HR3LDK_STAT_OLD_3LDK,
	HR3LDK_STAT_PAST_HOME,
	HR3LDK_STAT_UNDER_HOSPITAL,
	HR3LDK_STAT_UNDER_SUBWAY,
	HR3LDK_STAT_UNDER_FOREST,
	HR3LDK_STAT_UNDER_WATER,
	HR3LDK_STAT_UNDER_BUILDING
};

struct EventFlag
{
	unsigned char flag[320];
};

_HoleData holedata[26];
_anon1 holework;
_GAME_WORK gamew;
EventFlag event_flag;
_EventDriver ev_hole_allpurpose;

void HoleWorkInit();
_enum_0 HoleStageToGo();
int HoleSceneToGo();
void HoleSetThroughAfterStageScene(_enum_0 stage, int sn);
void HoleMemorize(_enum_0 stage, int sn);
void HoleSetAnotherPlayerPositionRot();
_enum_0 HoleAnotherStage();
int HoleAnotherScene();
int HoleHalfLatterTunnelScene();
int HoleBathroomHoleLevel();
void HoleAnotherToHole();
void HoleToAnother(_enum_0 stage, int sn);
int tunnle_scene();
int ev_hole_allpurpose_exec();
_enum_1 HoleReturnTo3ldkStatus();
int HoleNotUseTunnle();

// 
// Start address: 0x2b6930
void HoleWorkInit()
{
	// Line 106, Address: 0x2b6930, Func Offset: 0
	// Line 108, Address: 0x2b6944, Func Offset: 0x14
	// Line 110, Address: 0x2b6950, Func Offset: 0x20
	// Line 112, Address: 0x2b6958, Func Offset: 0x28
	// Func End, Address: 0x2b6960, Func Offset: 0x30
}

// 
// Start address: 0x2b6960
_enum_0 HoleStageToGo()
{
	// Line 121, Address: 0x2b6960, Func Offset: 0
	// Line 122, Address: 0x2b6964, Func Offset: 0x4
	// Line 121, Address: 0x2b6968, Func Offset: 0x8
	// Line 122, Address: 0x2b696c, Func Offset: 0xc
	// Line 125, Address: 0x2b6974, Func Offset: 0x14
	// Line 126, Address: 0x2b697c, Func Offset: 0x1c
	// Line 129, Address: 0x2b6980, Func Offset: 0x20
	// Line 132, Address: 0x2b69a0, Func Offset: 0x40
	// Func End, Address: 0x2b69a8, Func Offset: 0x48
}

// 
// Start address: 0x2b69b0
int HoleSceneToGo()
{
	// Line 140, Address: 0x2b69b0, Func Offset: 0
	// Line 141, Address: 0x2b69b4, Func Offset: 0x4
	// Line 140, Address: 0x2b69b8, Func Offset: 0x8
	// Line 141, Address: 0x2b69bc, Func Offset: 0xc
	// Line 144, Address: 0x2b69c4, Func Offset: 0x14
	// Line 145, Address: 0x2b69cc, Func Offset: 0x1c
	// Line 148, Address: 0x2b69d0, Func Offset: 0x20
	// Line 151, Address: 0x2b69f0, Func Offset: 0x40
	// Func End, Address: 0x2b69f8, Func Offset: 0x48
}

// 
// Start address: 0x2b6a00
void HoleSetThroughAfterStageScene(_enum_0 stage, int sn)
{
	// Line 163, Address: 0x2b6a00, Func Offset: 0
	// Line 164, Address: 0x2b6a14, Func Offset: 0x14
	// Line 165, Address: 0x2b6a18, Func Offset: 0x18
	// Line 164, Address: 0x2b6a1c, Func Offset: 0x1c
	// Line 166, Address: 0x2b6a24, Func Offset: 0x24
	// Line 167, Address: 0x2b6a30, Func Offset: 0x30
	// Line 171, Address: 0x2b6a38, Func Offset: 0x38
	// Line 169, Address: 0x2b6a40, Func Offset: 0x40
	// Line 170, Address: 0x2b6a48, Func Offset: 0x48
	// Line 169, Address: 0x2b6a50, Func Offset: 0x50
	// Line 170, Address: 0x2b6a58, Func Offset: 0x58
	// Line 173, Address: 0x2b6a60, Func Offset: 0x60
	// Func End, Address: 0x2b6a68, Func Offset: 0x68
}

// 
// Start address: 0x2b6a70
void HoleMemorize(_enum_0 stage, int sn)
{
	int i;
	// Line 189, Address: 0x2b6a70, Func Offset: 0
	// Line 190, Address: 0x2b6a7c, Func Offset: 0xc
	// Line 189, Address: 0x2b6a88, Func Offset: 0x18
	// Line 190, Address: 0x2b6a8c, Func Offset: 0x1c
	// Line 191, Address: 0x2b6c90, Func Offset: 0x220
	// Line 190, Address: 0x2b6c94, Func Offset: 0x224
	// Line 191, Address: 0x2b6c98, Func Offset: 0x228
	// Line 190, Address: 0x2b6c9c, Func Offset: 0x22c
	// Line 191, Address: 0x2b6ca4, Func Offset: 0x234
	// Line 193, Address: 0x2b6cb0, Func Offset: 0x240
	// Line 195, Address: 0x2b6cc0, Func Offset: 0x250
	// Line 196, Address: 0x2b6ce8, Func Offset: 0x278
	// Line 195, Address: 0x2b6cec, Func Offset: 0x27c
	// Line 196, Address: 0x2b6cf4, Func Offset: 0x284
	// Line 198, Address: 0x2b6d2c, Func Offset: 0x2bc
	// Line 196, Address: 0x2b6d30, Func Offset: 0x2c0
	// Line 198, Address: 0x2b6d3c, Func Offset: 0x2cc
	// Line 199, Address: 0x2b6d6c, Func Offset: 0x2fc
	// Line 201, Address: 0x2b6d74, Func Offset: 0x304
	// Line 204, Address: 0x2b6d88, Func Offset: 0x318
	// Line 205, Address: 0x2b6d9c, Func Offset: 0x32c
	// Func End, Address: 0x2b6da8, Func Offset: 0x338
}

// 
// Start address: 0x2b6db0
void HoleSetAnotherPlayerPositionRot()
{
	int i;
	// Line 263, Address: 0x2b6db0, Func Offset: 0
	// Line 266, Address: 0x2b6db4, Func Offset: 0x4
	// Line 263, Address: 0x2b6db8, Func Offset: 0x8
	// Line 266, Address: 0x2b6dbc, Func Offset: 0xc
	// Line 267, Address: 0x2b6dc4, Func Offset: 0x14
	// Line 266, Address: 0x2b6dd0, Func Offset: 0x20
	// Line 267, Address: 0x2b6dd4, Func Offset: 0x24
	// Line 268, Address: 0x2b6e04, Func Offset: 0x54
	// Line 267, Address: 0x2b6e08, Func Offset: 0x58
	// Line 268, Address: 0x2b6e0c, Func Offset: 0x5c
	// Line 269, Address: 0x2b6e30, Func Offset: 0x80
	// Line 271, Address: 0x2b6e38, Func Offset: 0x88
	// Line 273, Address: 0x2b6e48, Func Offset: 0x98
	// Line 274, Address: 0x2b6e5c, Func Offset: 0xac
	// Func End, Address: 0x2b6e6c, Func Offset: 0xbc
}

// 
// Start address: 0x2b6e70
_enum_0 HoleAnotherStage()
{
	int i;
	// Line 286, Address: 0x2b6e70, Func Offset: 0
	// Line 287, Address: 0x2b6e7c, Func Offset: 0xc
	// Line 286, Address: 0x2b6e88, Func Offset: 0x18
	// Line 287, Address: 0x2b6e8c, Func Offset: 0x1c
	// Line 288, Address: 0x2b6eb8, Func Offset: 0x48
	// Line 290, Address: 0x2b6ed8, Func Offset: 0x68
	// Line 292, Address: 0x2b6ee8, Func Offset: 0x78
	// Line 293, Address: 0x2b6ef0, Func Offset: 0x80
	// Func End, Address: 0x2b6ef8, Func Offset: 0x88
}

// 
// Start address: 0x2b6f00
int HoleAnotherScene()
{
	int i;
	// Line 305, Address: 0x2b6f00, Func Offset: 0
	// Line 306, Address: 0x2b6f0c, Func Offset: 0xc
	// Line 305, Address: 0x2b6f18, Func Offset: 0x18
	// Line 306, Address: 0x2b6f1c, Func Offset: 0x1c
	// Line 307, Address: 0x2b6f48, Func Offset: 0x48
	// Line 309, Address: 0x2b6f68, Func Offset: 0x68
	// Line 311, Address: 0x2b6f78, Func Offset: 0x78
	// Line 312, Address: 0x2b6f80, Func Offset: 0x80
	// Func End, Address: 0x2b6f88, Func Offset: 0x88
}

// 
// Start address: 0x2b6f90
int HoleHalfLatterTunnelScene()
{
	int i;
	int sn;
	short room_to_spiral_tunnel[6];
	short st_sn;
	// Line 321, Address: 0x2b6f90, Func Offset: 0
	// Line 325, Address: 0x2b6f94, Func Offset: 0x4
	// Line 321, Address: 0x2b6f98, Func Offset: 0x8
	// Line 325, Address: 0x2b6f9c, Func Offset: 0xc
	// Line 326, Address: 0x2b6fa4, Func Offset: 0x14
	// Line 325, Address: 0x2b6fb0, Func Offset: 0x20
	// Line 326, Address: 0x2b6fb4, Func Offset: 0x24
	// Line 327, Address: 0x2b6fe0, Func Offset: 0x50
	// Line 330, Address: 0x2b7048, Func Offset: 0xb8
	// Line 333, Address: 0x2b7050, Func Offset: 0xc0
	// Line 336, Address: 0x2b7058, Func Offset: 0xc8
	// Line 339, Address: 0x2b7060, Func Offset: 0xd0
	// Line 348, Address: 0x2b7068, Func Offset: 0xd8
	// Line 351, Address: 0x2b7070, Func Offset: 0xe0
	// Line 354, Address: 0x2b7078, Func Offset: 0xe8
	// Line 364, Address: 0x2b7090, Func Offset: 0x100
	// Line 366, Address: 0x2b70a0, Func Offset: 0x110
	// Line 367, Address: 0x2b70b0, Func Offset: 0x120
	// Line 368, Address: 0x2b70b4, Func Offset: 0x124
	// Line 370, Address: 0x2b70b8, Func Offset: 0x128
	// Line 373, Address: 0x2b70cc, Func Offset: 0x13c
	// Line 374, Address: 0x2b70d0, Func Offset: 0x140
	// Line 376, Address: 0x2b70d8, Func Offset: 0x148
	// Line 378, Address: 0x2b70e8, Func Offset: 0x158
	// Line 379, Address: 0x2b70f0, Func Offset: 0x160
	// Func End, Address: 0x2b70fc, Func Offset: 0x16c
}

// 
// Start address: 0x2b7100
int HoleBathroomHoleLevel()
{
	int bath_scene;
	int level;
	// Line 388, Address: 0x2b7100, Func Offset: 0
	// Line 392, Address: 0x2b7108, Func Offset: 0x8
	// Line 394, Address: 0x2b7110, Func Offset: 0x10
	// Line 395, Address: 0x2b716c, Func Offset: 0x6c
	// Line 397, Address: 0x2b7170, Func Offset: 0x70
	// Line 400, Address: 0x2b7178, Func Offset: 0x78
	// Line 404, Address: 0x2b7180, Func Offset: 0x80
	// Line 407, Address: 0x2b7188, Func Offset: 0x88
	// Line 410, Address: 0x2b7190, Func Offset: 0x90
	// Line 413, Address: 0x2b7198, Func Offset: 0x98
	// Line 415, Address: 0x2b71a0, Func Offset: 0xa0
	// Line 417, Address: 0x2b71a4, Func Offset: 0xa4
	// Line 420, Address: 0x2b71a8, Func Offset: 0xa8
	// Line 419, Address: 0x2b71ac, Func Offset: 0xac
	// Line 420, Address: 0x2b71b0, Func Offset: 0xb0
	// Func End, Address: 0x2b71b8, Func Offset: 0xb8
}

// 
// Start address: 0x2b71c0
void HoleAnotherToHole()
{
	// Line 431, Address: 0x2b71c0, Func Offset: 0
	// Line 433, Address: 0x2b71c8, Func Offset: 0x8
	// Line 435, Address: 0x2b71dc, Func Offset: 0x1c
	// Line 437, Address: 0x2b71f0, Func Offset: 0x30
	// Line 439, Address: 0x2b71fc, Func Offset: 0x3c
	// Line 441, Address: 0x2b7204, Func Offset: 0x44
	// Line 443, Address: 0x2b720c, Func Offset: 0x4c
	// Line 444, Address: 0x2b7214, Func Offset: 0x54
	// Func End, Address: 0x2b7220, Func Offset: 0x60
}

// 
// Start address: 0x2b7220
void HoleToAnother(_enum_0 stage, int sn)
{
	// Line 455, Address: 0x2b7220, Func Offset: 0
	// Line 457, Address: 0x2b7228, Func Offset: 0x8
	// Line 459, Address: 0x2b7230, Func Offset: 0x10
	// Line 460, Address: 0x2b7238, Func Offset: 0x18
	// Func End, Address: 0x2b7244, Func Offset: 0x24
}

// 
// Start address: 0x2b7250
int tunnle_scene()
{
	int sn;
	short spiral_to_tunnel[6];
	short st_sn;
	// Line 472, Address: 0x2b7250, Func Offset: 0
	// Line 475, Address: 0x2b7254, Func Offset: 0x4
	// Line 472, Address: 0x2b7258, Func Offset: 0x8
	// Line 475, Address: 0x2b725c, Func Offset: 0xc
	// Line 476, Address: 0x2b7284, Func Offset: 0x34
	// Line 477, Address: 0x2b7288, Func Offset: 0x38
	// Line 479, Address: 0x2b7298, Func Offset: 0x48
	// Line 483, Address: 0x2b72a0, Func Offset: 0x50
	// Line 485, Address: 0x2b72a8, Func Offset: 0x58
	// Line 487, Address: 0x2b72b8, Func Offset: 0x68
	// Line 491, Address: 0x2b72c0, Func Offset: 0x70
	// Line 493, Address: 0x2b72c8, Func Offset: 0x78
	// Line 495, Address: 0x2b72d8, Func Offset: 0x88
	// Line 499, Address: 0x2b72e0, Func Offset: 0x90
	// Line 501, Address: 0x2b72e8, Func Offset: 0x98
	// Line 503, Address: 0x2b72f8, Func Offset: 0xa8
	// Line 507, Address: 0x2b7300, Func Offset: 0xb0
	// Line 510, Address: 0x2b7308, Func Offset: 0xb8
	// Line 513, Address: 0x2b7310, Func Offset: 0xc0
	// Line 516, Address: 0x2b7318, Func Offset: 0xc8
	// Line 519, Address: 0x2b7320, Func Offset: 0xd0
	// Line 529, Address: 0x2b7334, Func Offset: 0xe4
	// Line 519, Address: 0x2b7338, Func Offset: 0xe8
	// Line 529, Address: 0x2b7340, Func Offset: 0xf0
	// Line 531, Address: 0x2b7344, Func Offset: 0xf4
	// Line 532, Address: 0x2b7358, Func Offset: 0x108
	// Line 533, Address: 0x2b735c, Func Offset: 0x10c
	// Line 535, Address: 0x2b7360, Func Offset: 0x110
	// Line 537, Address: 0x2b7370, Func Offset: 0x120
	// Line 540, Address: 0x2b7378, Func Offset: 0x128
	// Line 542, Address: 0x2b737c, Func Offset: 0x12c
	// Line 544, Address: 0x2b7380, Func Offset: 0x130
	// Func End, Address: 0x2b738c, Func Offset: 0x13c
}

// 
// Start address: 0x2b7390
int ev_hole_allpurpose_exec()
{
	int ret;
	// Line 548, Address: 0x2b7390, Func Offset: 0
	// Line 551, Address: 0x2b739c, Func Offset: 0xc
	// Line 553, Address: 0x2b73ac, Func Offset: 0x1c
	// Line 554, Address: 0x2b73bc, Func Offset: 0x2c
	// Line 555, Address: 0x2b73c4, Func Offset: 0x34
	// Line 556, Address: 0x2b73c8, Func Offset: 0x38
	// Line 557, Address: 0x2b73cc, Func Offset: 0x3c
	// Line 559, Address: 0x2b73d0, Func Offset: 0x40
	// Line 560, Address: 0x2b73d4, Func Offset: 0x44
	// Func End, Address: 0x2b73e4, Func Offset: 0x54
}

// 
// Start address: 0x2b73f0
_enum_1 HoleReturnTo3ldkStatus()
{
	_enum_1 ret;
	int i;
	// Line 622, Address: 0x2b73f0, Func Offset: 0
	// Line 632, Address: 0x2b73f4, Func Offset: 0x4
	// Line 622, Address: 0x2b73f8, Func Offset: 0x8
	// Line 630, Address: 0x2b73fc, Func Offset: 0xc
	// Line 622, Address: 0x2b7400, Func Offset: 0x10
	// Line 632, Address: 0x2b7404, Func Offset: 0x14
	// Line 633, Address: 0x2b740c, Func Offset: 0x1c
	// Line 632, Address: 0x2b7418, Func Offset: 0x28
	// Line 633, Address: 0x2b741c, Func Offset: 0x2c
	// Line 634, Address: 0x2b7450, Func Offset: 0x60
	// Line 635, Address: 0x2b7480, Func Offset: 0x90
	// Line 637, Address: 0x2b7488, Func Offset: 0x98
	// Line 640, Address: 0x2b7498, Func Offset: 0xa8
	// Func End, Address: 0x2b74a8, Func Offset: 0xb8
}

// 
// Start address: 0x2b74b0
int HoleNotUseTunnle()
{
	int i;
	// Line 653, Address: 0x2b74b0, Func Offset: 0
	// Line 654, Address: 0x2b74bc, Func Offset: 0xc
	// Line 653, Address: 0x2b74c8, Func Offset: 0x18
	// Line 654, Address: 0x2b74cc, Func Offset: 0x1c
	// Line 655, Address: 0x2b74f8, Func Offset: 0x48
	// Line 657, Address: 0x2b7500, Func Offset: 0x50
	// Line 660, Address: 0x2b7510, Func Offset: 0x60
	// Func End, Address: 0x2b7518, Func Offset: 0x68
}

