typedef struct TexFogParam;
typedef enum _cam3Step : unsigned char;
typedef struct _cam3Work;
typedef struct Last02Data;
typedef struct EventFlag;
typedef struct sfObj;
typedef union _anon0;
typedef struct _GAME_WORK;
typedef struct SceneParamData;
typedef struct TexFogSceneInitWork;

typedef void(*type_0)();
typedef void(*type_5)(sfObj*);
typedef void(*type_12)(sfObj*);
typedef void(*type_16)();
typedef void(*type_18)(sfObj*);

typedef void(*type_1)()[2];
typedef int type_2[1];
typedef int type_3[1];
typedef unsigned char type_4[320];
typedef TexFogParam type_6[2];
typedef void(*type_7)(sfObj*)[3];
typedef int type_8[1];
typedef TexFogParam type_9[2];
typedef int type_10[1];
typedef _anon0 type_11[256];
typedef SceneParamData type_13[25];
typedef int type_14[1];
typedef int type_15[1];
typedef short type_17[2];
typedef int type_19[1];
typedef unsigned short type_20[2];
typedef char type_21[4];
typedef unsigned char type_22[4];
typedef float type_23[1];
typedef TexFogParam type_24[2];
typedef int type_25[1];
typedef float type_26[4];
typedef float type_27[4];
typedef float type_28[4][4];
typedef unsigned char type_29[4];

struct TexFogParam
{
	int UsePtclNum;
	unsigned int OnCamCoordinateXYZFlag;
	float PtclAlphaVal;
	unsigned char AroundRGB[4];
	unsigned char NearFogRGBA[4];
	float PtclWldSpd[4];
	float MinLclXYZ[4];
	float MaxLclXYZ[4];
	float PtclRadius;
	float PtclHeightRate;
	float MaxPolyOmega;
	float TexS_SpdRate;
	float TgtNearFogAlphaRate;
	float NearFogAlphaRate;
};

enum _cam3Step : unsigned char
{
	CAM3_STEP_NORMAL,
	CAM3_STEP_AUTOFOCUS,
	CAM3_STEP_RESET,
	CAM3_STEP_STOP
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

struct Last02Data
{
	int ChgFogStep;
};

struct EventFlag
{
	unsigned char flag[320];
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

struct SceneParamData
{
	int PtclNum;
	float LoopSqrLen;
	float PtclAlphaVal;
	float NearFogAlpha;
	float PtclRadius;
	float Spd;
	float MoveAng;
};

struct TexFogSceneInitWork
{
	Last02Data Last02;
};

void(*camInitFuncs)()[2];
void(*camera_main_funcs)(sfObj*)[3];
TexFogSceneInitWork TfsiW;
_GAME_WORK gamew;
EventFlag event_flag;
TexFogParam ForestLoop13_FogPrm;
SceneParamData ForestData[25];
void(*Last02_ContFogPrm_For_Demo_And_Playable)();
_cam3Work cam3_work;

void TexFog_SceneInit_And_SetParam();
void water_Mz31_init_particle(int ForDemoFlag);
void water_Mz33_init_particle(int ForDemoFlag);
void set_TexFogParam_from_SceneParamData(TexFogParam* pFogPrm, SceneParamData* pDt, int AroundR, int AroundG, int AroundB, int NearFogR, int NearFogG, int NearFogB);
void forest_init_particle(int ForDemoFlag, int ScnNo);
void building_init_particle(int ForDemoFlag, int ScnNo);
void last_init_particle(int ForDemoFlag, int ScnNo);
void TexFog_Last02_NavelStringDemoStart();
void Last02_ContFogPrm_For_Demo_And_Playable();

// 
// Start address: 0x338a90
void TexFog_SceneInit_And_SetParam()
{
	int ForDemoFlag;
	int StgNo;
	int ScnNo;
	// Line 78, Address: 0x338a90, Func Offset: 0
	// Line 83, Address: 0x338a94, Func Offset: 0x4
	// Line 78, Address: 0x338a98, Func Offset: 0x8
	// Line 80, Address: 0x338a9c, Func Offset: 0xc
	// Line 78, Address: 0x338aa0, Func Offset: 0x10
	// Line 83, Address: 0x338aa4, Func Offset: 0x14
	// Line 78, Address: 0x338aa8, Func Offset: 0x18
	// Line 83, Address: 0x338aac, Func Offset: 0x1c
	// Line 78, Address: 0x338ab0, Func Offset: 0x20
	// Line 80, Address: 0x338ab4, Func Offset: 0x24
	// Line 81, Address: 0x338ab8, Func Offset: 0x28
	// Line 83, Address: 0x338ac0, Func Offset: 0x30
	// Line 85, Address: 0x338ac8, Func Offset: 0x38
	// Line 86, Address: 0x338ad0, Func Offset: 0x40
	// Line 88, Address: 0x338b00, Func Offset: 0x70
	// Line 90, Address: 0x338b08, Func Offset: 0x78
	// Line 91, Address: 0x338b14, Func Offset: 0x84
	// Line 92, Address: 0x338b1c, Func Offset: 0x8c
	// Line 93, Address: 0x338b34, Func Offset: 0xa4
	// Line 95, Address: 0x338b3c, Func Offset: 0xac
	// Line 96, Address: 0x338b44, Func Offset: 0xb4
	// Line 98, Address: 0x338b48, Func Offset: 0xb8
	// Line 99, Address: 0x338b54, Func Offset: 0xc4
	// Line 100, Address: 0x338b5c, Func Offset: 0xcc
	// Line 102, Address: 0x338b60, Func Offset: 0xd0
	// Line 103, Address: 0x338b6c, Func Offset: 0xdc
	// Line 104, Address: 0x338b74, Func Offset: 0xe4
	// Line 105, Address: 0x338b78, Func Offset: 0xe8
	// Line 107, Address: 0x338b80, Func Offset: 0xf0
	// Line 111, Address: 0x338b8c, Func Offset: 0xfc
	// Line 112, Address: 0x338ba0, Func Offset: 0x110
	// Func End, Address: 0x338bb8, Func Offset: 0x128
}

// 
// Start address: 0x338bc0
void water_Mz31_init_particle(int ForDemoFlag)
{
	TexFogParam* pFog;
	TexFogParam Mz31FogPrm[2];
	// Line 128, Address: 0x338bc0, Func Offset: 0
	// Line 160, Address: 0x338bc4, Func Offset: 0x4
	// Line 128, Address: 0x338bc8, Func Offset: 0x8
	// Line 160, Address: 0x338bcc, Func Offset: 0xc
	// Line 128, Address: 0x338bd0, Func Offset: 0x10
	// Line 160, Address: 0x338bd4, Func Offset: 0x14
	// Line 128, Address: 0x338bd8, Func Offset: 0x18
	// Line 162, Address: 0x338bdc, Func Offset: 0x1c
	// Line 160, Address: 0x338be0, Func Offset: 0x20
	// Line 162, Address: 0x338bfc, Func Offset: 0x3c
	// Line 163, Address: 0x338c04, Func Offset: 0x44
	// Line 164, Address: 0x338c10, Func Offset: 0x50
	// Func End, Address: 0x338c24, Func Offset: 0x64
}

// 
// Start address: 0x338c30
void water_Mz33_init_particle(int ForDemoFlag)
{
	TexFogParam FogPrm;
	TexFogParam Mz33FogPrmDemo[2];
	TexFogParam Mz33FogPrm[2];
	// Line 171, Address: 0x338c30, Func Offset: 0
	// Line 235, Address: 0x338c40, Func Offset: 0x10
	// Line 237, Address: 0x338c48, Func Offset: 0x18
	// Line 238, Address: 0x338c78, Func Offset: 0x48
	// Line 240, Address: 0x338c80, Func Offset: 0x50
	// Line 241, Address: 0x338cb4, Func Offset: 0x84
	// Line 242, Address: 0x338cb8, Func Offset: 0x88
	// Line 243, Address: 0x338cc4, Func Offset: 0x94
	// Line 244, Address: 0x338cd0, Func Offset: 0xa0
	// Func End, Address: 0x338ce0, Func Offset: 0xb0
}

// 
// Start address: 0x338ce0
void set_TexFogParam_from_SceneParamData(TexFogParam* pFogPrm, SceneParamData* pDt, int AroundR, int AroundG, int AroundB, int NearFogR, int NearFogG, int NearFogB)
{
	unsigned char FogCol[4];
	// Line 341, Address: 0x338ce0, Func Offset: 0
	// Line 343, Address: 0x338d28, Func Offset: 0x48
	// Line 344, Address: 0x338d30, Func Offset: 0x50
	// Line 353, Address: 0x338d34, Func Offset: 0x54
	// Line 345, Address: 0x338d38, Func Offset: 0x58
	// Line 353, Address: 0x338d3c, Func Offset: 0x5c
	// Line 344, Address: 0x338d40, Func Offset: 0x60
	// Line 345, Address: 0x338d44, Func Offset: 0x64
	// Line 346, Address: 0x338d48, Func Offset: 0x68
	// Line 347, Address: 0x338d50, Func Offset: 0x70
	// Line 348, Address: 0x338d54, Func Offset: 0x74
	// Line 349, Address: 0x338d58, Func Offset: 0x78
	// Line 350, Address: 0x338d5c, Func Offset: 0x7c
	// Line 351, Address: 0x338d60, Func Offset: 0x80
	// Line 352, Address: 0x338d64, Func Offset: 0x84
	// Line 353, Address: 0x338d68, Func Offset: 0x88
	// Line 355, Address: 0x338da4, Func Offset: 0xc4
	// Line 356, Address: 0x338db8, Func Offset: 0xd8
	// Line 357, Address: 0x338dbc, Func Offset: 0xdc
	// Line 359, Address: 0x338dc8, Func Offset: 0xe8
	// Line 360, Address: 0x338dd0, Func Offset: 0xf0
	// Line 364, Address: 0x338dd4, Func Offset: 0xf4
	// Line 363, Address: 0x338dd8, Func Offset: 0xf8
	// Line 357, Address: 0x338de4, Func Offset: 0x104
	// Line 368, Address: 0x338de8, Func Offset: 0x108
	// Line 369, Address: 0x338df0, Func Offset: 0x110
	// Line 370, Address: 0x338df8, Func Offset: 0x118
	// Line 357, Address: 0x338dfc, Func Offset: 0x11c
	// Line 370, Address: 0x338e00, Func Offset: 0x120
	// Line 359, Address: 0x338e04, Func Offset: 0x124
	// Line 360, Address: 0x338e10, Func Offset: 0x130
	// Line 361, Address: 0x338e14, Func Offset: 0x134
	// Line 363, Address: 0x338e20, Func Offset: 0x140
	// Line 364, Address: 0x338e2c, Func Offset: 0x14c
	// Line 365, Address: 0x338e30, Func Offset: 0x150
	// Line 367, Address: 0x338e3c, Func Offset: 0x15c
	// Line 368, Address: 0x338e44, Func Offset: 0x164
	// Line 369, Address: 0x338e48, Func Offset: 0x168
	// Line 370, Address: 0x338e4c, Func Offset: 0x16c
	// Line 371, Address: 0x338e50, Func Offset: 0x170
	// Func End, Address: 0x338e7c, Func Offset: 0x19c
}

// 
// Start address: 0x338e80
void forest_init_particle(int ForDemoFlag, int ScnNo)
{
	SceneParamData* pDt;
	TexFogParam FogPrm;
	// Line 381, Address: 0x338e80, Func Offset: 0
	// Line 386, Address: 0x338e84, Func Offset: 0x4
	// Line 381, Address: 0x338e88, Func Offset: 0x8
	// Line 386, Address: 0x338e90, Func Offset: 0x10
	// Line 390, Address: 0x338e98, Func Offset: 0x18
	// Line 391, Address: 0x338eb0, Func Offset: 0x30
	// Line 394, Address: 0x338ebc, Func Offset: 0x3c
	// Line 397, Address: 0x338ecc, Func Offset: 0x4c
	// Line 400, Address: 0x338ee4, Func Offset: 0x64
	// Line 402, Address: 0x338ef4, Func Offset: 0x74
	// Line 403, Address: 0x338f00, Func Offset: 0x80
	// Line 407, Address: 0x338f08, Func Offset: 0x88
	// Line 412, Address: 0x338f2c, Func Offset: 0xac
	// Line 414, Address: 0x338f30, Func Offset: 0xb0
	// Line 415, Address: 0x338f3c, Func Offset: 0xbc
	// Line 416, Address: 0x338f48, Func Offset: 0xc8
	// Func End, Address: 0x338f58, Func Offset: 0xd8
}

// 
// Start address: 0x338f60
void building_init_particle(int ForDemoFlag, int ScnNo)
{
	float SpdAng;
	float SpdY;
	float TexS_SpdRate;
	TexFogParam Scn3_1stFogPrm;
	TexFogParam FogPrm;
	TexFogParam Scn4_DemoFogPrm;
	// Line 436, Address: 0x338f60, Func Offset: 0
	// Line 457, Address: 0x338f64, Func Offset: 0x4
	// Line 436, Address: 0x338f68, Func Offset: 0x8
	// Line 457, Address: 0x338f84, Func Offset: 0x24
	// Line 463, Address: 0x338f94, Func Offset: 0x34
	// Line 464, Address: 0x338fdc, Func Offset: 0x7c
	// Line 465, Address: 0x338fe8, Func Offset: 0x88
	// Line 466, Address: 0x33900c, Func Offset: 0xac
	// Line 467, Address: 0x33903c, Func Offset: 0xdc
	// Line 468, Address: 0x339068, Func Offset: 0x108
	// Line 469, Address: 0x339090, Func Offset: 0x130
	// Line 470, Address: 0x3390b8, Func Offset: 0x158
	// Line 473, Address: 0x3390d8, Func Offset: 0x178
	// Line 474, Address: 0x3390e4, Func Offset: 0x184
	// Line 473, Address: 0x3390e8, Func Offset: 0x188
	// Line 474, Address: 0x3390ec, Func Offset: 0x18c
	// Line 473, Address: 0x3390f0, Func Offset: 0x190
	// Line 475, Address: 0x3390f8, Func Offset: 0x198
	// Line 476, Address: 0x339108, Func Offset: 0x1a8
	// Line 475, Address: 0x33910c, Func Offset: 0x1ac
	// Line 478, Address: 0x339110, Func Offset: 0x1b0
	// Line 476, Address: 0x339114, Func Offset: 0x1b4
	// Line 478, Address: 0x339118, Func Offset: 0x1b8
	// Line 475, Address: 0x33911c, Func Offset: 0x1bc
	// Line 478, Address: 0x339124, Func Offset: 0x1c4
	// Line 479, Address: 0x33912c, Func Offset: 0x1cc
	// Line 496, Address: 0x339140, Func Offset: 0x1e0
	// Line 497, Address: 0x339150, Func Offset: 0x1f0
	// Line 498, Address: 0x339158, Func Offset: 0x1f8
	// Line 503, Address: 0x339180, Func Offset: 0x220
	// Line 508, Address: 0x339194, Func Offset: 0x234
	// Line 505, Address: 0x33919c, Func Offset: 0x23c
	// Line 508, Address: 0x3391a0, Func Offset: 0x240
	// Line 509, Address: 0x3391a8, Func Offset: 0x248
	// Line 510, Address: 0x3391c8, Func Offset: 0x268
	// Line 512, Address: 0x3391d0, Func Offset: 0x270
	// Line 514, Address: 0x3391e0, Func Offset: 0x280
	// Func End, Address: 0x339200, Func Offset: 0x2a0
}

// 
// Start address: 0x339200
void last_init_particle(int ForDemoFlag, int ScnNo)
{
	TexFogParam Last02_FogPrm;
	// Line 531, Address: 0x339200, Func Offset: 0
	// Line 548, Address: 0x339204, Func Offset: 0x4
	// Line 531, Address: 0x339208, Func Offset: 0x8
	// Line 548, Address: 0x339210, Func Offset: 0x10
	// Line 551, Address: 0x339218, Func Offset: 0x18
	// Line 552, Address: 0x339224, Func Offset: 0x24
	// Line 553, Address: 0x339234, Func Offset: 0x34
	// Func End, Address: 0x339248, Func Offset: 0x48
}

// 
// Start address: 0x339250
void TexFog_Last02_NavelStringDemoStart()
{
	// Line 564, Address: 0x339250, Func Offset: 0
	// Line 565, Address: 0x339258, Func Offset: 0x8
	// Func End, Address: 0x339260, Func Offset: 0x10
}

// 
// Start address: 0x339260
void Last02_ContFogPrm_For_Demo_And_Playable()
{
	TexFogParam FogPrm;
	Last02Data* pDt;
	// Line 572, Address: 0x339260, Func Offset: 0
	// Line 576, Address: 0x339264, Func Offset: 0x4
	// Line 572, Address: 0x339268, Func Offset: 0x8
	// Line 576, Address: 0x33926c, Func Offset: 0xc
	// Line 572, Address: 0x339270, Func Offset: 0x10
	// Line 576, Address: 0x339274, Func Offset: 0x14
	// Line 574, Address: 0x339278, Func Offset: 0x18
	// Line 576, Address: 0x33927c, Func Offset: 0x1c
	// Line 580, Address: 0x3392b4, Func Offset: 0x54
	// Line 584, Address: 0x3392b8, Func Offset: 0x58
	// Line 586, Address: 0x3392c0, Func Offset: 0x60
	// Line 587, Address: 0x3392cc, Func Offset: 0x6c
	// Line 588, Address: 0x3392d0, Func Offset: 0x70
	// Line 587, Address: 0x3392d4, Func Offset: 0x74
	// Line 590, Address: 0x3392d8, Func Offset: 0x78
	// Line 589, Address: 0x3392dc, Func Offset: 0x7c
	// Line 588, Address: 0x3392e0, Func Offset: 0x80
	// Line 589, Address: 0x3392e4, Func Offset: 0x84
	// Line 590, Address: 0x3392ec, Func Offset: 0x8c
	// Line 596, Address: 0x339308, Func Offset: 0xa8
	// Line 602, Address: 0x33931c, Func Offset: 0xbc
	// Line 603, Address: 0x339324, Func Offset: 0xc4
	// Line 604, Address: 0x339328, Func Offset: 0xc8
	// Line 605, Address: 0x33933c, Func Offset: 0xdc
	// Line 607, Address: 0x339340, Func Offset: 0xe0
	// Line 609, Address: 0x33934c, Func Offset: 0xec
	// Line 608, Address: 0x339350, Func Offset: 0xf0
	// Line 609, Address: 0x339354, Func Offset: 0xf4
	// Line 617, Address: 0x339358, Func Offset: 0xf8
	// Line 608, Address: 0x339360, Func Offset: 0x100
	// Line 617, Address: 0x339364, Func Offset: 0x104
	// Line 610, Address: 0x339368, Func Offset: 0x108
	// Line 617, Address: 0x339370, Func Offset: 0x110
	// Line 624, Address: 0x339380, Func Offset: 0x120
	// Line 626, Address: 0x339388, Func Offset: 0x128
	// Line 628, Address: 0x339398, Func Offset: 0x138
	// Line 630, Address: 0x33939c, Func Offset: 0x13c
	// Line 628, Address: 0x3393a0, Func Offset: 0x140
	// Line 630, Address: 0x3393a4, Func Offset: 0x144
	// Line 631, Address: 0x3393ac, Func Offset: 0x14c
	// Line 632, Address: 0x3393b0, Func Offset: 0x150
	// Line 636, Address: 0x3393b8, Func Offset: 0x158
	// Line 631, Address: 0x3393c4, Func Offset: 0x164
	// Line 633, Address: 0x3393c8, Func Offset: 0x168
	// Line 634, Address: 0x3393cc, Func Offset: 0x16c
	// Line 636, Address: 0x3393d0, Func Offset: 0x170
	// Line 642, Address: 0x3393d8, Func Offset: 0x178
	// Line 654, Address: 0x3393f4, Func Offset: 0x194
	// Line 655, Address: 0x3393f8, Func Offset: 0x198
	// Func End, Address: 0x339408, Func Offset: 0x1a8
}

