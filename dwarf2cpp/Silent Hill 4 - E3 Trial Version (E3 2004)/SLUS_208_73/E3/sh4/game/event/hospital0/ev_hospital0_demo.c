typedef struct sfObj;
typedef struct _EventDriver;
typedef struct EventFlag;
typedef union _anon0;
typedef struct _GAME_WORK;

typedef int(*type_3)(sfObj*);
typedef int(*type_4)(sfObj*);
typedef int(*type_5)(sfObj*);
typedef int(*type_6)(sfObj*);
typedef int(*type_7)(sfObj*);
typedef void(*type_21)(sfObj*);
typedef void(*type_31)(sfObj*);

typedef float type_0[4];
typedef unsigned int type_1[3];
typedef float type_2[4];
typedef _anon0 type_8[4];
typedef unsigned int type_9[4];
typedef int type_10[1];
typedef int type_11[1];
typedef unsigned char type_12[320];
typedef int type_13[1];
typedef unsigned int type_14[3];
typedef int type_15[1];
typedef unsigned int type_16[3];
typedef _anon0 type_17[256];
typedef short type_18[2];
typedef int type_19[1];
typedef unsigned short type_20[2];
typedef char type_22[4];
typedef int type_23[1];
typedef unsigned char type_24[4];
typedef float type_25[1];
typedef int type_26[1];
typedef float type_27[4];
typedef float type_28[4][4];
typedef unsigned int type_29[4];
typedef int type_30[1];
typedef unsigned int type_32[3];

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

struct EventFlag
{
	unsigned char flag[320];
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

unsigned int ev_hospital0_hs01_155_file[4];
int hs01_set_continue;
_GAME_WORK gamew;
_EventDriver ev_hospital0_hs01_155;
unsigned int ev_hospital0_hs10_044_file[3];
EventFlag event_flag;
float sg_vector_unit_y[4];
_EventDriver ev_hospital0_hs10_044;
unsigned int ev_hospital0_hs10_156_file[4];
_EventDriver ev_hospital0_hs10_156;
unsigned int ev_hospital0_hs06_163_file[3];
_EventDriver ev_hospital0_hs06_163;
_EventDriver ev_hospital0_hs06_163_msg;
_EventDriver ev_hospital0_hs06_163_not_near;
_EventDriver ev_hole_allpurpose;
_EventDriver ev_hole_hospital0_hs06;
unsigned int ev_hospital0_hs06_45_file[3];
_EventDriver ev_hospital0_hs06_045;
unsigned int ev_hospital0_hs04_2290_file[3];
_EventDriver ev_hospital0_hs04_2290;

int ev_hospital0_hs01_155_exec(sfObj* obj);
int ev_hospital0_hs01_155_end(sfObj* obj);
int ev_hospital0_hs10_044_end(sfObj* obj);
int ev_hospital0_hs06_163_end(sfObj* obj);
int ev_hospital0_hs06_163_msg_end();
int ev_hole_hospital0_hs06_exec();
int ev_hospital0_hs06_045_end(sfObj* obj);

// 
// Start address: 0x1ed67e0
int ev_hospital0_hs01_155_exec(sfObj* obj)
{
	// Line 2121, Address: 0x1ed67e0, Func Offset: 0
	// Line 2124, Address: 0x1ed67e4, Func Offset: 0x4
	// Line 2121, Address: 0x1ed67e8, Func Offset: 0x8
	// Line 2124, Address: 0x1ed67f4, Func Offset: 0x14
	// Line 2122, Address: 0x1ed67f8, Func Offset: 0x18
	// Line 2124, Address: 0x1ed67fc, Func Offset: 0x1c
	// Line 2125, Address: 0x1ed6814, Func Offset: 0x34
	// Line 2127, Address: 0x1ed6818, Func Offset: 0x38
	// Line 2128, Address: 0x1ed6828, Func Offset: 0x48
	// Line 2130, Address: 0x1ed6830, Func Offset: 0x50
	// Line 2132, Address: 0x1ed6838, Func Offset: 0x58
	// Line 2133, Address: 0x1ed6848, Func Offset: 0x68
	// Line 2134, Address: 0x1ed684c, Func Offset: 0x6c
	// Line 2133, Address: 0x1ed6850, Func Offset: 0x70
	// Line 2134, Address: 0x1ed6854, Func Offset: 0x74
	// Line 2135, Address: 0x1ed685c, Func Offset: 0x7c
	// Line 2136, Address: 0x1ed6864, Func Offset: 0x84
	// Line 2138, Address: 0x1ed686c, Func Offset: 0x8c
	// Line 2143, Address: 0x1ed6898, Func Offset: 0xb8
	// Line 2146, Address: 0x1ed689c, Func Offset: 0xbc
	// Line 2148, Address: 0x1ed68a0, Func Offset: 0xc0
	// Line 2147, Address: 0x1ed68a8, Func Offset: 0xc8
	// Line 2148, Address: 0x1ed68ac, Func Offset: 0xcc
	// Func End, Address: 0x1ed68b8, Func Offset: 0xd8
	// Line 72, Address: 0x1ed67e0, Func Offset: 0
	// Func End, Address: 0x1ed67fc, Func Offset: 0x1c
}

// 
// Start address: 0x1ed6800
int ev_hospital0_hs01_155_end(sfObj* obj)
{
	int* door;
	int next_scene;
	// Line 76, Address: 0x1ed6800, Func Offset: 0
	// Line 81, Address: 0x1ed680c, Func Offset: 0xc
	// Line 83, Address: 0x1ed6814, Func Offset: 0x14
	// Line 85, Address: 0x1ed681c, Func Offset: 0x1c
	// Line 88, Address: 0x1ed6824, Func Offset: 0x24
	// Line 89, Address: 0x1ed6834, Func Offset: 0x34
	// Line 90, Address: 0x1ed683c, Func Offset: 0x3c
	// Line 92, Address: 0x1ed6850, Func Offset: 0x50
	// Line 94, Address: 0x1ed6858, Func Offset: 0x58
	// Line 95, Address: 0x1ed6864, Func Offset: 0x64
	// Line 98, Address: 0x1ed6870, Func Offset: 0x70
	// Line 100, Address: 0x1ed687c, Func Offset: 0x7c
	// Line 102, Address: 0x1ed6884, Func Offset: 0x84
	// Line 104, Address: 0x1ed688c, Func Offset: 0x8c
	// Line 105, Address: 0x1ed6898, Func Offset: 0x98
	// Func End, Address: 0x1ed68a8, Func Offset: 0xa8
	// Line 823, Address: 0x1ed6800, Func Offset: 0
	// Line 828, Address: 0x1ed6820, Func Offset: 0x20
	// Line 829, Address: 0x1ed682c, Func Offset: 0x2c
	// Line 830, Address: 0x1ed6838, Func Offset: 0x38
	// Line 831, Address: 0x1ed6840, Func Offset: 0x40
	// Line 832, Address: 0x1ed684c, Func Offset: 0x4c
	// Line 834, Address: 0x1ed6878, Func Offset: 0x78
	// Line 836, Address: 0x1ed689c, Func Offset: 0x9c
	// Line 837, Address: 0x1ed68a8, Func Offset: 0xa8
	// Line 838, Address: 0x1ed68b4, Func Offset: 0xb4
	// Line 839, Address: 0x1ed68c0, Func Offset: 0xc0
	// Line 840, Address: 0x1ed68c8, Func Offset: 0xc8
	// Line 841, Address: 0x1ed68d0, Func Offset: 0xd0
	// Line 843, Address: 0x1ed68d8, Func Offset: 0xd8
	// Line 845, Address: 0x1ed6900, Func Offset: 0x100
	// Line 846, Address: 0x1ed6908, Func Offset: 0x108
	// Line 847, Address: 0x1ed6910, Func Offset: 0x110
	// Line 851, Address: 0x1ed691c, Func Offset: 0x11c
	// Line 852, Address: 0x1ed6920, Func Offset: 0x120
	// Line 853, Address: 0x1ed6940, Func Offset: 0x140
	// Line 852, Address: 0x1ed6944, Func Offset: 0x144
	// Line 853, Address: 0x1ed6948, Func Offset: 0x148
	// Line 855, Address: 0x1ed6964, Func Offset: 0x164
	// Line 856, Address: 0x1ed6978, Func Offset: 0x178
	// Line 858, Address: 0x1ed698c, Func Offset: 0x18c
	// Line 859, Address: 0x1ed6998, Func Offset: 0x198
	// Line 860, Address: 0x1ed69ac, Func Offset: 0x1ac
	// Line 861, Address: 0x1ed69b0, Func Offset: 0x1b0
	// Line 862, Address: 0x1ed69dc, Func Offset: 0x1dc
	// Line 864, Address: 0x1ed69e8, Func Offset: 0x1e8
	// Line 863, Address: 0x1ed69ec, Func Offset: 0x1ec
	// Line 864, Address: 0x1ed69f8, Func Offset: 0x1f8
	// Line 863, Address: 0x1ed6a08, Func Offset: 0x208
	// Line 864, Address: 0x1ed6a0c, Func Offset: 0x20c
	// Line 865, Address: 0x1ed6a14, Func Offset: 0x214
	// Line 866, Address: 0x1ed6a24, Func Offset: 0x224
	// Line 867, Address: 0x1ed6a30, Func Offset: 0x230
	// Line 868, Address: 0x1ed6a4c, Func Offset: 0x24c
	// Line 869, Address: 0x1ed6a50, Func Offset: 0x250
	// Line 868, Address: 0x1ed6a54, Func Offset: 0x254
	// Line 869, Address: 0x1ed6a58, Func Offset: 0x258
	// Line 870, Address: 0x1ed6a94, Func Offset: 0x294
	// Line 871, Address: 0x1ed6aac, Func Offset: 0x2ac
	// Line 872, Address: 0x1ed6ab8, Func Offset: 0x2b8
	// Line 873, Address: 0x1ed6ac0, Func Offset: 0x2c0
	// Line 876, Address: 0x1ed6af0, Func Offset: 0x2f0
	// Line 877, Address: 0x1ed6af8, Func Offset: 0x2f8
	// Line 878, Address: 0x1ed6b00, Func Offset: 0x300
	// Line 880, Address: 0x1ed6b0c, Func Offset: 0x30c
	// Line 881, Address: 0x1ed6b18, Func Offset: 0x318
	// Line 882, Address: 0x1ed6b1c, Func Offset: 0x31c
	// Line 883, Address: 0x1ed6b20, Func Offset: 0x320
	// Line 884, Address: 0x1ed6b44, Func Offset: 0x344
	// Line 887, Address: 0x1ed6b50, Func Offset: 0x350
	// Func End, Address: 0x1ed6b74, Func Offset: 0x374
}

// 
// Start address: 0x1ed68b0
int ev_hospital0_hs10_044_end(sfObj* obj)
{
	float r[4];
	float e_pos[4];
	// Line 129, Address: 0x1ed68b0, Func Offset: 0
	// Line 132, Address: 0x1ed68b4, Func Offset: 0x4
	// Line 129, Address: 0x1ed68b8, Func Offset: 0x8
	// Line 132, Address: 0x1ed68bc, Func Offset: 0xc
	// Line 129, Address: 0x1ed68c0, Func Offset: 0x10
	// Line 132, Address: 0x1ed68c4, Func Offset: 0x14
	// Line 134, Address: 0x1ed68d4, Func Offset: 0x24
	// Line 135, Address: 0x1ed68dc, Func Offset: 0x2c
	// Line 136, Address: 0x1ed68f4, Func Offset: 0x44
	// Line 137, Address: 0x1ed68f8, Func Offset: 0x48
	// Line 136, Address: 0x1ed68fc, Func Offset: 0x4c
	// Line 137, Address: 0x1ed6908, Func Offset: 0x58
	// Line 138, Address: 0x1ed6910, Func Offset: 0x60
	// Func End, Address: 0x1ed6920, Func Offset: 0x70
}

// 
// Start address: 0x1ed6920
int ev_hospital0_hs06_163_end(sfObj* obj)
{
	// Line 178, Address: 0x1ed6920, Func Offset: 0
	// Line 180, Address: 0x1ed692c, Func Offset: 0xc
	// Line 181, Address: 0x1ed6934, Func Offset: 0x14
	// Line 182, Address: 0x1ed693c, Func Offset: 0x1c
	// Func End, Address: 0x1ed694c, Func Offset: 0x2c
}

// 
// Start address: 0x1ed6950
int ev_hospital0_hs06_163_msg_end()
{
	// Line 968, Address: 0x1ed6950, Func Offset: 0
	// Func End, Address: 0x1ed6958, Func Offset: 0x8
	// Line 674, Address: 0x1ed6950, Func Offset: 0
	// Line 681, Address: 0x1ed6954, Func Offset: 0x4
	// Line 674, Address: 0x1ed6958, Func Offset: 0x8
	// Line 681, Address: 0x1ed695c, Func Offset: 0xc
	// Line 682, Address: 0x1ed696c, Func Offset: 0x1c
	// Line 683, Address: 0x1ed6974, Func Offset: 0x24
	// Line 684, Address: 0x1ed6980, Func Offset: 0x30
	// Line 687, Address: 0x1ed6994, Func Offset: 0x44
	// Line 688, Address: 0x1ed699c, Func Offset: 0x4c
	// Line 692, Address: 0x1ed69a8, Func Offset: 0x58
	// Line 693, Address: 0x1ed69b4, Func Offset: 0x64
	// Line 697, Address: 0x1ed69c8, Func Offset: 0x78
	// Line 696, Address: 0x1ed69cc, Func Offset: 0x7c
	// Line 697, Address: 0x1ed69d0, Func Offset: 0x80
	// Func End, Address: 0x1ed69d8, Func Offset: 0x88
	// Line 1372, Address: 0x1ed6950, Func Offset: 0
	// Line 1374, Address: 0x1ed6954, Func Offset: 0x4
	// Line 1372, Address: 0x1ed6958, Func Offset: 0x8
	// Line 1374, Address: 0x1ed695c, Func Offset: 0xc
	// Line 1372, Address: 0x1ed6960, Func Offset: 0x10
	// Line 1374, Address: 0x1ed6964, Func Offset: 0x14
	// Line 1372, Address: 0x1ed6968, Func Offset: 0x18
	// Line 1380, Address: 0x1ed696c, Func Offset: 0x1c
	// Line 1374, Address: 0x1ed6970, Func Offset: 0x20
	// Line 1380, Address: 0x1ed6980, Func Offset: 0x30
	// Line 1378, Address: 0x1ed6984, Func Offset: 0x34
	// Line 1380, Address: 0x1ed6988, Func Offset: 0x38
	// Line 1383, Address: 0x1ed69a0, Func Offset: 0x50
	// Line 1386, Address: 0x1ed69d8, Func Offset: 0x88
	// Line 1387, Address: 0x1ed69e0, Func Offset: 0x90
	// Line 1389, Address: 0x1ed69ec, Func Offset: 0x9c
	// Line 1390, Address: 0x1ed6a30, Func Offset: 0xe0
	// Line 1391, Address: 0x1ed6a44, Func Offset: 0xf4
	// Line 1393, Address: 0x1ed6a50, Func Offset: 0x100
	// Line 1394, Address: 0x1ed6a58, Func Offset: 0x108
	// Line 1397, Address: 0x1ed6a64, Func Offset: 0x114
	// Line 1399, Address: 0x1ed6a68, Func Offset: 0x118
	// Line 1398, Address: 0x1ed6a70, Func Offset: 0x120
	// Line 1399, Address: 0x1ed6a74, Func Offset: 0x124
	// Func End, Address: 0x1ed6a80, Func Offset: 0x130
	// Line 227, Address: 0x1ed6950, Func Offset: 0
	// Line 229, Address: 0x1ed6958, Func Offset: 0x8
	// Line 231, Address: 0x1ed6968, Func Offset: 0x18
	// Line 232, Address: 0x1ed6974, Func Offset: 0x24
	// Line 234, Address: 0x1ed6978, Func Offset: 0x28
	// Line 233, Address: 0x1ed697c, Func Offset: 0x2c
	// Line 234, Address: 0x1ed6980, Func Offset: 0x30
	// Func End, Address: 0x1ed6988, Func Offset: 0x38
}

// 
// Start address: 0x1ed6990
int ev_hole_hospital0_hs06_exec()
{
	int bNearEileen;
	// Line 251, Address: 0x1ed6990, Func Offset: 0
	// Line 253, Address: 0x1ed6998, Func Offset: 0x8
	// Line 270, Address: 0x1ed69a8, Func Offset: 0x18
	// Line 271, Address: 0x1ed69b4, Func Offset: 0x24
	// Line 272, Address: 0x1ed69bc, Func Offset: 0x2c
	// Line 275, Address: 0x1ed69c4, Func Offset: 0x34
	// Line 276, Address: 0x1ed69d0, Func Offset: 0x40
	// Line 281, Address: 0x1ed69d8, Func Offset: 0x48
	// Line 282, Address: 0x1ed69e8, Func Offset: 0x58
	// Line 289, Address: 0x1ed69f0, Func Offset: 0x60
	// Line 290, Address: 0x1ed6a00, Func Offset: 0x70
	// Line 291, Address: 0x1ed6a08, Func Offset: 0x78
	// Func End, Address: 0x1ed6a14, Func Offset: 0x84
}

// 
// Start address: 0x1ed6a20
int ev_hospital0_hs06_045_end(sfObj* obj)
{
	// Line 313, Address: 0x1ed6a20, Func Offset: 0
	// Line 315, Address: 0x1ed6a2c, Func Offset: 0xc
	// Line 316, Address: 0x1ed6a34, Func Offset: 0x14
	// Line 317, Address: 0x1ed6a3c, Func Offset: 0x1c
	// Func End, Address: 0x1ed6a4c, Func Offset: 0x2c
}

