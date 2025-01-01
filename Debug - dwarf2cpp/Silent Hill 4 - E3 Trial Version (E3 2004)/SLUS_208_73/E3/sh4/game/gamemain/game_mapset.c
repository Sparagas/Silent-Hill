typedef struct _anon0;
typedef struct _anon1;
typedef struct EventFlag;
typedef struct _GAME_WORK;


typedef _anon0 type_0[13];
typedef _anon1 type_1[7];
typedef _anon0 type_2[26];
typedef float type_3[4];
typedef _anon0 type_4[29];
typedef _anon1 type_5[3];
typedef _anon0 type_6[26];
typedef int type_7[1];
typedef _anon1 type_8[10];
typedef int type_9[1];
typedef _anon0 type_10[8];
typedef _anon1 type_11[3];
typedef _anon0 type_12[24];
typedef int type_13[1];
typedef int type_14[1];
typedef _anon0 type_15[25];
typedef _anon1 type_16[2];
typedef unsigned char type_17[320];
typedef int type_18[1];
typedef _anon0 type_19[3];
typedef int type_20[1];
typedef _anon0 type_21[31];
typedef _anon1 type_22[5];
typedef _anon0* type_23[15];
typedef int type_24[1];
typedef _anon0 type_25[44];
typedef _anon1 type_26[2];
typedef float type_27[4];
typedef float type_28[4][4];
typedef _anon0 type_29[35];

struct _anon0
{
	int model;
	int global;
	int semitrans;
	int collision;
	int emtex;
	int mode;
	int file;
};

struct _anon1
{
	int mapnum;
	int flag;
};

struct EventFlag
{
	unsigned char flag[320];
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

_anon0 maps_rl[31];
_anon0 maps_sb[26];
_anon0 maps_fr[24];
_anon0 maps_mz[44];
_anon0 maps_bd[29];
_anon0 maps_ie[25];
_anon0 maps_hs[35];
_anon0 maps_cm[26];
_anon0 maps_ls[3];
_anon0 maps_gt[13];
_anon0 maps_st[8];
_anon0* tbl[15];
_anon1 cross_tbl_rl00[10];
_anon1 cross_tbl_rl01[5];
_anon1 cross_tbl_rl02[7];
_anon1 cross_tbl_rl03[3];
_anon1 cross_tbl_rl04[2];
_anon1 cross_tbl_rl05[3];
_anon1 cross_tbl_rl06[2];
_GAME_WORK gamew;
EventFlag event_flag;

_anon0* GameMapsetGetTable();
int _tbl2scene(_anon1* ctbl);
int _get_3ldk_scene();
int GameMapsetGet3ldkScene(int scene);
int GameMapsetGetFileID();

// 
// Start address: 0x1cdad0
_anon0* GameMapsetGetTable()
{
	int scene;
	// Line 161, Address: 0x1cdad0, Func Offset: 0
	// Line 166, Address: 0x1cdad4, Func Offset: 0x4
	// Line 161, Address: 0x1cdad8, Func Offset: 0x8
	// Line 163, Address: 0x1cdadc, Func Offset: 0xc
	// Line 166, Address: 0x1cdae8, Func Offset: 0x18
	// Line 168, Address: 0x1cdb00, Func Offset: 0x30
	// Line 169, Address: 0x1cdb0c, Func Offset: 0x3c
	// Line 168, Address: 0x1cdb10, Func Offset: 0x40
	// Line 171, Address: 0x1cdb24, Func Offset: 0x54
	// Line 172, Address: 0x1cdb2c, Func Offset: 0x5c
	// Line 173, Address: 0x1cdb34, Func Offset: 0x64
	// Line 175, Address: 0x1cdb38, Func Offset: 0x68
	// Line 176, Address: 0x1cdb48, Func Offset: 0x78
	// Func End, Address: 0x1cdb50, Func Offset: 0x80
}

// 
// Start address: 0x1cdb50
int _tbl2scene(_anon1* ctbl)
{
	int i;
	int ret;
	// Line 184, Address: 0x1cdb50, Func Offset: 0
	// Line 190, Address: 0x1cdb58, Func Offset: 0x8
	// Line 185, Address: 0x1cdb64, Func Offset: 0x14
	// Line 184, Address: 0x1cdb68, Func Offset: 0x18
	// Line 186, Address: 0x1cdb6c, Func Offset: 0x1c
	// Line 187, Address: 0x1cdb74, Func Offset: 0x24
	// Line 188, Address: 0x1cdb78, Func Offset: 0x28
	// Line 190, Address: 0x1cdb80, Func Offset: 0x30
	// Line 191, Address: 0x1cdbac, Func Offset: 0x5c
	// Line 192, Address: 0x1cdbb4, Func Offset: 0x64
	// Line 193, Address: 0x1cdbbc, Func Offset: 0x6c
	// Line 192, Address: 0x1cdbc0, Func Offset: 0x70
	// Line 195, Address: 0x1cdbc4, Func Offset: 0x74
	// Line 198, Address: 0x1cdbd0, Func Offset: 0x80
	// Func End, Address: 0x1cdbd8, Func Offset: 0x88
}

// 
// Start address: 0x1cdbe0
int _get_3ldk_scene()
{
	// Line 202, Address: 0x1cdbe0, Func Offset: 0
	// Line 203, Address: 0x1cdbe4, Func Offset: 0x4
	// Line 202, Address: 0x1cdbe8, Func Offset: 0x8
	// Line 203, Address: 0x1cdbec, Func Offset: 0xc
	// Line 206, Address: 0x1cdbf0, Func Offset: 0x10
	// Line 207, Address: 0x1cdc14, Func Offset: 0x34
	// Line 208, Address: 0x1cdc18, Func Offset: 0x38
	// Line 210, Address: 0x1cdc2c, Func Offset: 0x4c
	// Line 211, Address: 0x1cdc30, Func Offset: 0x50
	// Line 213, Address: 0x1cdc44, Func Offset: 0x64
	// Line 214, Address: 0x1cdc48, Func Offset: 0x68
	// Line 216, Address: 0x1cdc5c, Func Offset: 0x7c
	// Line 217, Address: 0x1cdc60, Func Offset: 0x80
	// Line 219, Address: 0x1cdc74, Func Offset: 0x94
	// Line 220, Address: 0x1cdc78, Func Offset: 0x98
	// Line 222, Address: 0x1cdc8c, Func Offset: 0xac
	// Line 223, Address: 0x1cdc90, Func Offset: 0xb0
	// Line 225, Address: 0x1cdca4, Func Offset: 0xc4
	// Line 226, Address: 0x1cdca8, Func Offset: 0xc8
	// Line 231, Address: 0x1cdcbc, Func Offset: 0xdc
	// Line 233, Address: 0x1cdcc0, Func Offset: 0xe0
	// Line 234, Address: 0x1cdcc8, Func Offset: 0xe8
	// Func End, Address: 0x1cdcd4, Func Offset: 0xf4
}

// 
// Start address: 0x1cdce0
int GameMapsetGet3ldkScene(int scene)
{
	// Line 238, Address: 0x1cdce0, Func Offset: 0
	// Line 240, Address: 0x1cdce4, Func Offset: 0x4
	// Line 241, Address: 0x1cdd0c, Func Offset: 0x2c
	// Line 242, Address: 0x1cdd10, Func Offset: 0x30
	// Line 244, Address: 0x1cdd24, Func Offset: 0x44
	// Line 245, Address: 0x1cdd28, Func Offset: 0x48
	// Line 247, Address: 0x1cdd3c, Func Offset: 0x5c
	// Line 248, Address: 0x1cdd40, Func Offset: 0x60
	// Line 250, Address: 0x1cdd54, Func Offset: 0x74
	// Line 251, Address: 0x1cdd58, Func Offset: 0x78
	// Line 253, Address: 0x1cdd6c, Func Offset: 0x8c
	// Line 254, Address: 0x1cdd70, Func Offset: 0x90
	// Line 256, Address: 0x1cdd84, Func Offset: 0xa4
	// Line 257, Address: 0x1cdd88, Func Offset: 0xa8
	// Line 259, Address: 0x1cdd9c, Func Offset: 0xbc
	// Line 260, Address: 0x1cdda0, Func Offset: 0xc0
	// Line 265, Address: 0x1cddb4, Func Offset: 0xd4
	// Line 267, Address: 0x1cddb8, Func Offset: 0xd8
	// Line 268, Address: 0x1cddc0, Func Offset: 0xe0
	// Func End, Address: 0x1cddcc, Func Offset: 0xec
}

// 
// Start address: 0x1cddd0
int GameMapsetGetFileID()
{
	_anon0* dat;
	// Line 272, Address: 0x1cddd0, Func Offset: 0
	// Line 275, Address: 0x1cdddc, Func Offset: 0xc
	// Line 272, Address: 0x1cdde0, Func Offset: 0x10
	// Line 275, Address: 0x1cdde8, Func Offset: 0x18
	// Line 277, Address: 0x1cddf0, Func Offset: 0x20
	// Line 278, Address: 0x1cddfc, Func Offset: 0x2c
	// Line 277, Address: 0x1cde00, Func Offset: 0x30
	// Line 278, Address: 0x1cde04, Func Offset: 0x34
	// Line 279, Address: 0x1cde34, Func Offset: 0x64
	// Line 280, Address: 0x1cde40, Func Offset: 0x70
	// Line 282, Address: 0x1cde50, Func Offset: 0x80
	// Line 284, Address: 0x1cde6c, Func Offset: 0x9c
	// Line 285, Address: 0x1cde74, Func Offset: 0xa4
	// Line 286, Address: 0x1cdea0, Func Offset: 0xd0
	// Line 288, Address: 0x1cdea8, Func Offset: 0xd8
	// Line 289, Address: 0x1cdeac, Func Offset: 0xdc
	// Line 291, Address: 0x1cdeb4, Func Offset: 0xe4
	// Line 293, Address: 0x1cdec0, Func Offset: 0xf0
	// Line 294, Address: 0x1cdec8, Func Offset: 0xf8
	// Line 298, Address: 0x1cded8, Func Offset: 0x108
	// Line 297, Address: 0x1cdedc, Func Offset: 0x10c
	// Line 298, Address: 0x1cdee0, Func Offset: 0x110
	// Func End, Address: 0x1cdee8, Func Offset: 0x118
}

