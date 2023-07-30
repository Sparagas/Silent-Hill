typedef struct _anon0;
typedef struct sfObj;
typedef enum _cam3Step : unsigned char;
typedef union _anon1;
typedef struct EventFlag;
typedef struct _cam3Work;
typedef struct _anon2;
typedef struct _GAME_WORK;
typedef struct _anon3;

typedef void(*type_1)();
typedef void(*type_11)();
typedef void(*type_15)(sfObj*);
typedef void(*type_19)();
typedef void(*type_20)(sfObj*);
typedef void(*type_26)(sfObj*);
typedef void(*type_33)();

typedef float type_0[4];
typedef void(*type_2)()[5];
typedef unsigned short type_3[2];
typedef float type_4[4];
typedef float type_5[4];
typedef float type_6[4][4];
typedef _anon0 type_7[147];
typedef _anon2 type_8[1];
typedef int type_9[1];
typedef _anon0 type_10[10];
typedef int type_12[1];
typedef void(*type_13)()[2];
typedef _anon1 type_14[256];
typedef int type_16[1];
typedef unsigned char type_17[320];
typedef int type_18[1];
typedef int type_21[1];
typedef unsigned short type_22[493];
typedef int type_23[1];
typedef short type_24[2];
typedef unsigned short type_25[2];
typedef char type_27[4];
typedef void(*type_28)(sfObj*)[3];
typedef unsigned char type_29[4];
typedef float type_30[1];
typedef int type_31[1];
typedef int type_32[1];
typedef _anon0 type_34[11];

struct _anon0
{
	char* title;
	short stage;
	short scene;
	_anon3* flag;
	void(*func)();
};

struct sfObj
{
	_anon1 fwork[256];
	_anon1* work;
	void(*func)(sfObj*);
	_anon1* work_pt0;
	_anon1* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon1* sys_work;
	_anon1* scene_work;
	_anon1* event_work;
	_anon1* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

enum _cam3Step : unsigned char
{
	CAM3_STEP_NORMAL,
	CAM3_STEP_AUTOFOCUS,
	CAM3_STEP_RESET,
	CAM3_STEP_STOP
};

union _anon1
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

struct EventFlag
{
	unsigned char flag[320];
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

struct _anon2
{
	char* title;
	void(*func)();
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

struct _anon3
{
	unsigned short start;
	unsigned short end;
	unsigned short* additional_flags;
	unsigned short* exceptional_flags;
};

void(*camInitFuncs)()[2];
void(*camera_main_funcs)(sfObj*)[3];
_anon2 menu_tbl[1];
_anon0 stage_menu_tbl[11];
_anon0 scene_menu_tbl[10];
unsigned short all_flags[493];
_anon3 f_subway0;
_anon3 f_forest0;
_anon3 f_water0;
_anon3 f_building0;
_anon3 f_apart0;
_anon3 f_hospital0;
_anon3 f_subway1;
_anon3 f_forest1;
_anon3 f_water1;
_anon3 f_building1;
_anon3 f_apart1;
_anon3 f_last;
_anon3 f_rl00a;
_anon3 f_rl00b;
_anon3 f_rl00c;
_anon3 f_rl00d;
_anon3 f_rl00e;
unsigned short f_rl00f_add[2];
_anon3 f_rl00f;
_anon3 f_rl01a_063;
_anon3 f_068;
_anon3 f_rl01a_001;
_anon3 f_rl00_069;
_anon3 f_rl00_004;
_anon3 f_rl00_005;
_anon3 f_rl00_006;
_anon3 f_rl01a_011;
_anon3 f_rl00_079;
_anon3 f_rl01a_018;
_anon3 f_rl00a_019;
_anon3 f_rl00_087;
_anon3 f_rl00_088;
_anon3 f_rl02c_089;
_anon3 f_rl02a_007;
_anon3 f_rl00_2200;
_anon3 f_rl00b_021a;
_anon3 f_rl00b_030a;
_anon3 f_rl00_099;
_anon3 f_rl00_075;
_anon3 f_rl01_106;
_anon3 f_rl00_108;
_anon3 f_rl00_034a;
_anon3 f_rl01_2203;
_anon3 f_rl00_109;
_anon3 f_rl00_110;
_anon3 f_rl01_029;
_anon3 f_rl00_038;
_anon3 f_rl01_2207;
_anon3 f_rl02_039;
_anon3 f_rl03_154;
_anon3 f_rl00_142;
_anon3 f_rl01_143;
_anon3 f_rl00_138;
_anon3 f_rl01_002;
_anon3 f_rl01_145;
_anon3 f_rl00_146;
_anon3 f_rl00_2209;
_anon3 f_rl00_043;
_anon3 f_rl00_147;
_anon3 f_rl00_148;
_anon3 f_rl00_149;
_anon3 f_rl03_150;
_anon3 f_rl03_151;
_anon3 f_rl03_152;
_anon3 f_rl01_164;
_anon3 f_rl00_166;
_anon3 f_rl00_167;
_anon3 f_rl00_189;
_anon3 f_rl00_196;
_anon3 f_rl04_198;
_anon3 f_rl00_200;
_anon3 f_rl04_217;
_anon3 f_rl00_2212;
_anon3 f_rl00_2202;
_anon3 f_rl00_2320;
_anon3 f_rl00_2211;
_anon3 f_rl03_2216;
_anon3 f_rl02_2217;
_anon3 f_rl00_2206;
_anon3 f_sb01_008;
_anon3 f_sb01_009;
_anon3 f_sb02_010;
_anon3 f_sb02_076;
_anon3 f_sb02_082;
_anon3 f_sb25_017;
_anon3 f_sb_latter_hole0;
_anon3 f_sb_2223;
_anon3 f_fr06_020;
_anon3 f_fr_hole0;
_anon3 f_fr_hole1;
_anon3 f_fr_hole2;
_anon3 f_fr21_028;
_anon3 f_fr_latter_hole0;
_anon3 f_fr19_023;
_anon3 f_fr09_025;
_anon3 f_fr17_095a;
_anon3 f_fr20_097;
_anon3 f_fr_186;
_anon3 f_mz_105;
_anon3 f_mz_hole0;
_anon3 f_mz_latter_hole0;
_anon3 f_mz39_2302;
_anon3 f_bd_hole0;
_anon3 f_bd_hole1;
_anon3 f_bd_hole2;
_anon3 f_bd_037;
_anon3 f_bd_latter_start;
_anon3 f_bd_latter_hole0;
_anon3 f_bd_latter_hole1;
_anon3 f_ie_hole0;
_anon3 f_hs_hole0;
_anon3 f_hs_163;
_anon3 f_cm_hole0;
_anon3 f_cm_202;
_anon3 f_gt01_073;
_anon3 f_st01;
_anon3 f_st02;
_anon3 f_st03;
_anon3 f_st04;
_anon3 f_st05;
_anon3 f_ls01_218;
_anon3 f_ls02_050;
_anon3 f_ls02_219;
_anon3 f_epilogueA;
_anon3 f_e3_fr;
EventFlag event_flag;
_anon3 f_e3_mz;
_anon3 f_e3_bd;
_anon0 jump_menu_tbl[147];
_anon0 jump_e3_fr;
_anon0 jump_e3_mz;
_anon0 jump_e3_bd;
void(*game_stage_func)()[5];
_GAME_WORK gamew;
int stage_to_end;
_cam3Work cam3_work;

int E3StageSelect();
void GameStageInit();
float get_heta_ratio();
void GameStageStart();
void GameStageEnd();
void GameStageSetEndStep();
void GameStageMain();

// 
// Start address: 0x16aad0
int E3StageSelect()
{
	int rtv;
	int stage;
	int scene;
	_anon0* sel;
	// Line 161, Address: 0x16aad0, Func Offset: 0
	// Line 162, Address: 0x16aae4, Func Offset: 0x14
	// Line 167, Address: 0x16aae8, Func Offset: 0x18
	// Line 168, Address: 0x16ab18, Func Offset: 0x48
	// Line 169, Address: 0x16ab24, Func Offset: 0x54
	// Line 170, Address: 0x16ab34, Func Offset: 0x64
	// Line 172, Address: 0x16ab40, Func Offset: 0x70
	// Line 177, Address: 0x16ab48, Func Offset: 0x78
	// Line 174, Address: 0x16ab4c, Func Offset: 0x7c
	// Line 177, Address: 0x16ab50, Func Offset: 0x80
	// Line 178, Address: 0x16acf8, Func Offset: 0x228
	// Line 179, Address: 0x16ad04, Func Offset: 0x234
	// Line 181, Address: 0x16ad0c, Func Offset: 0x23c
	// Line 182, Address: 0x16ad34, Func Offset: 0x264
	// Line 186, Address: 0x16ad40, Func Offset: 0x270
	// Line 189, Address: 0x16ad48, Func Offset: 0x278
	// Line 186, Address: 0x16ad4c, Func Offset: 0x27c
	// Line 189, Address: 0x16ad54, Func Offset: 0x284
	// Line 190, Address: 0x16ad5c, Func Offset: 0x28c
	// Line 191, Address: 0x16ad64, Func Offset: 0x294
	// Line 192, Address: 0x16ad6c, Func Offset: 0x29c
	// Line 193, Address: 0x16ad74, Func Offset: 0x2a4
	// Line 194, Address: 0x16ad80, Func Offset: 0x2b0
	// Line 195, Address: 0x16ad88, Func Offset: 0x2b8
	// Line 199, Address: 0x16ad90, Func Offset: 0x2c0
	// Line 200, Address: 0x16ad98, Func Offset: 0x2c8
	// Line 201, Address: 0x16ada0, Func Offset: 0x2d0
	// Line 202, Address: 0x16ada8, Func Offset: 0x2d8
	// Line 203, Address: 0x16adb0, Func Offset: 0x2e0
	// Line 204, Address: 0x16adb8, Func Offset: 0x2e8
	// Line 205, Address: 0x16adc0, Func Offset: 0x2f0
	// Line 206, Address: 0x16adc8, Func Offset: 0x2f8
	// Line 207, Address: 0x16add0, Func Offset: 0x300
	// Line 208, Address: 0x16add8, Func Offset: 0x308
	// Line 211, Address: 0x16ade0, Func Offset: 0x310
	// Line 212, Address: 0x16ade4, Func Offset: 0x314
	// Line 214, Address: 0x16ade8, Func Offset: 0x318
	// Line 215, Address: 0x16adec, Func Offset: 0x31c
	// Func End, Address: 0x16ae04, Func Offset: 0x334
}

// 
// Start address: 0x16ae10
void GameStageInit()
{
	// Line 221, Address: 0x16ae10, Func Offset: 0
	// Line 224, Address: 0x16ae1c, Func Offset: 0xc
	// Line 221, Address: 0x16ae20, Func Offset: 0x10
	// Line 224, Address: 0x16ae2c, Func Offset: 0x1c
	// Line 225, Address: 0x16ae50, Func Offset: 0x40
	// Line 228, Address: 0x16ae54, Func Offset: 0x44
	// Line 230, Address: 0x16ae5c, Func Offset: 0x4c
	// Line 233, Address: 0x16ae64, Func Offset: 0x54
	// Line 236, Address: 0x16ae70, Func Offset: 0x60
	// Line 233, Address: 0x16ae74, Func Offset: 0x64
	// Line 236, Address: 0x16ae78, Func Offset: 0x68
	// Line 238, Address: 0x16ae98, Func Offset: 0x88
	// Line 240, Address: 0x16aea0, Func Offset: 0x90
	// Line 241, Address: 0x16aeac, Func Offset: 0x9c
	// Line 244, Address: 0x16aeb0, Func Offset: 0xa0
	// Line 247, Address: 0x16aeb8, Func Offset: 0xa8
	// Line 250, Address: 0x16aec0, Func Offset: 0xb0
	// Line 253, Address: 0x16aec8, Func Offset: 0xb8
	// Line 254, Address: 0x16aed4, Func Offset: 0xc4
	// Line 263, Address: 0x16aedc, Func Offset: 0xcc
	// Func End, Address: 0x16aeec, Func Offset: 0xdc
}

// 
// Start address: 0x16aef0
float get_heta_ratio()
{
	int lv;
	int cnt;
	float r[4];
	// Line 268, Address: 0x16aef0, Func Offset: 0
	// Line 269, Address: 0x16aef8, Func Offset: 0x8
	// Line 270, Address: 0x16af00, Func Offset: 0x10
	// Line 272, Address: 0x16af08, Func Offset: 0x18
	// Line 279, Address: 0x16af14, Func Offset: 0x24
	// Line 272, Address: 0x16af18, Func Offset: 0x28
	// Line 279, Address: 0x16af1c, Func Offset: 0x2c
	// Line 280, Address: 0x16af24, Func Offset: 0x34
	// Line 291, Address: 0x16af28, Func Offset: 0x38
	// Line 292, Address: 0x16af30, Func Offset: 0x40
	// Line 291, Address: 0x16af34, Func Offset: 0x44
	// Line 292, Address: 0x16af40, Func Offset: 0x50
	// Line 291, Address: 0x16af44, Func Offset: 0x54
	// Line 292, Address: 0x16af58, Func Offset: 0x68
	// Func End, Address: 0x16af60, Func Offset: 0x70
}

// 
// Start address: 0x16af60
void GameStageStart()
{
	float ratio;
	// Line 304, Address: 0x16af60, Func Offset: 0
	// Line 305, Address: 0x16af68, Func Offset: 0x8
	// Line 307, Address: 0x16af70, Func Offset: 0x10
	// Line 308, Address: 0x16af9c, Func Offset: 0x3c
	// Line 310, Address: 0x16afa0, Func Offset: 0x40
	// Line 317, Address: 0x16afb0, Func Offset: 0x50
	// Line 319, Address: 0x16afc0, Func Offset: 0x60
	// Line 324, Address: 0x16afc8, Func Offset: 0x68
	// Line 325, Address: 0x16afd8, Func Offset: 0x78
	// Line 326, Address: 0x16afe0, Func Offset: 0x80
	// Line 330, Address: 0x16aff4, Func Offset: 0x94
	// Line 333, Address: 0x16affc, Func Offset: 0x9c
	// Line 334, Address: 0x16b008, Func Offset: 0xa8
	// Line 335, Address: 0x16b010, Func Offset: 0xb0
	// Line 338, Address: 0x16b018, Func Offset: 0xb8
	// Line 341, Address: 0x16b020, Func Offset: 0xc0
	// Line 344, Address: 0x16b028, Func Offset: 0xc8
	// Line 346, Address: 0x16b030, Func Offset: 0xd0
	// Line 349, Address: 0x16b034, Func Offset: 0xd4
	// Line 346, Address: 0x16b038, Func Offset: 0xd8
	// Line 347, Address: 0x16b044, Func Offset: 0xe4
	// Line 349, Address: 0x16b048, Func Offset: 0xe8
	// Line 352, Address: 0x16b050, Func Offset: 0xf0
	// Line 354, Address: 0x16b058, Func Offset: 0xf8
	// Line 356, Address: 0x16b060, Func Offset: 0x100
	// Line 359, Address: 0x16b068, Func Offset: 0x108
	// Line 361, Address: 0x16b078, Func Offset: 0x118
	// Line 362, Address: 0x16b080, Func Offset: 0x120
	// Line 367, Address: 0x16b088, Func Offset: 0x128
	// Line 370, Address: 0x16b09c, Func Offset: 0x13c
	// Line 371, Address: 0x16b0a4, Func Offset: 0x144
	// Line 373, Address: 0x16b0ac, Func Offset: 0x14c
	// Line 374, Address: 0x16b0b0, Func Offset: 0x150
	// Line 378, Address: 0x16b0c0, Func Offset: 0x160
	// Line 380, Address: 0x16b0c8, Func Offset: 0x168
	// Line 381, Address: 0x16b0d0, Func Offset: 0x170
	// Line 384, Address: 0x16b0d8, Func Offset: 0x178
	// Line 387, Address: 0x16b0e8, Func Offset: 0x188
	// Line 389, Address: 0x16b0f0, Func Offset: 0x190
	// Line 390, Address: 0x16b0f8, Func Offset: 0x198
	// Line 391, Address: 0x16b100, Func Offset: 0x1a0
	// Line 392, Address: 0x16b108, Func Offset: 0x1a8
	// Line 395, Address: 0x16b110, Func Offset: 0x1b0
	// Line 398, Address: 0x16b120, Func Offset: 0x1c0
	// Line 399, Address: 0x16b128, Func Offset: 0x1c8
	// Line 400, Address: 0x16b130, Func Offset: 0x1d0
	// Line 403, Address: 0x16b138, Func Offset: 0x1d8
	// Line 406, Address: 0x16b148, Func Offset: 0x1e8
	// Line 407, Address: 0x16b150, Func Offset: 0x1f0
	// Line 410, Address: 0x16b158, Func Offset: 0x1f8
	// Line 412, Address: 0x16b160, Func Offset: 0x200
	// Line 413, Address: 0x16b16c, Func Offset: 0x20c
	// Line 412, Address: 0x16b170, Func Offset: 0x210
	// Line 413, Address: 0x16b174, Func Offset: 0x214
	// Line 414, Address: 0x16b19c, Func Offset: 0x23c
	// Line 416, Address: 0x16b1b0, Func Offset: 0x250
	// Line 422, Address: 0x16b1b8, Func Offset: 0x258
	// Line 425, Address: 0x16b1c0, Func Offset: 0x260
	// Line 426, Address: 0x16b1c8, Func Offset: 0x268
	// Func End, Address: 0x16b1d8, Func Offset: 0x278
}

// 
// Start address: 0x16b1e0
void GameStageEnd()
{
	// Line 431, Address: 0x16b1e0, Func Offset: 0
	// Line 432, Address: 0x16b1e8, Func Offset: 0x8
	// Line 434, Address: 0x16b1f0, Func Offset: 0x10
	// Line 435, Address: 0x16b214, Func Offset: 0x34
	// Line 436, Address: 0x16b218, Func Offset: 0x38
	// Line 439, Address: 0x16b220, Func Offset: 0x40
	// Line 442, Address: 0x16b228, Func Offset: 0x48
	// Line 443, Address: 0x16b238, Func Offset: 0x58
	// Line 444, Address: 0x16b240, Func Offset: 0x60
	// Line 451, Address: 0x16b248, Func Offset: 0x68
	// Line 453, Address: 0x16b250, Func Offset: 0x70
	// Line 454, Address: 0x16b258, Func Offset: 0x78
	// Line 457, Address: 0x16b260, Func Offset: 0x80
	// Line 460, Address: 0x16b268, Func Offset: 0x88
	// Line 461, Address: 0x16b270, Func Offset: 0x90
	// Func End, Address: 0x16b27c, Func Offset: 0x9c
}

// 
// Start address: 0x16b280
void GameStageSetEndStep()
{
	// Line 468, Address: 0x16b280, Func Offset: 0
	// Line 469, Address: 0x16b288, Func Offset: 0x8
	// Func End, Address: 0x16b290, Func Offset: 0x10
}

// 
// Start address: 0x16b290
void GameStageMain()
{
	int step;
	// Line 474, Address: 0x16b290, Func Offset: 0
	// Line 477, Address: 0x16b298, Func Offset: 0x8
	// Line 479, Address: 0x16b2a0, Func Offset: 0x10
	// Line 482, Address: 0x16b2a8, Func Offset: 0x18
	// Line 484, Address: 0x16b2c4, Func Offset: 0x34
	// Line 485, Address: 0x16b2d4, Func Offset: 0x44
	// Line 486, Address: 0x16b2dc, Func Offset: 0x4c
	// Line 487, Address: 0x16b2e4, Func Offset: 0x54
	// Line 489, Address: 0x16b2e8, Func Offset: 0x58
	// Line 492, Address: 0x16b2f0, Func Offset: 0x60
	// Func End, Address: 0x16b2fc, Func Offset: 0x6c
}

