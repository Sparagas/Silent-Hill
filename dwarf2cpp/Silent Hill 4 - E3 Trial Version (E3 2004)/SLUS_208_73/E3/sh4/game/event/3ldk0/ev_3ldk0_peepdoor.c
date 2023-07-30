typedef struct sfObj;
typedef struct _anon0;
typedef struct _anon1;
typedef struct _EventInst;
typedef struct EventFlag;
typedef struct _EventDriver;
typedef struct sgBone;
typedef struct _anon2;
typedef union _anon3;
typedef struct _GAME_WORK;
typedef struct _anon4;
typedef struct _anon5;
typedef struct _anon6;

typedef int(*type_0)(sfObj*);
typedef int(*type_2)(sfObj*);
typedef int(*type_7)(sfObj*);
typedef int(*type_10)(sfObj*);
typedef int(*type_11)(sfObj*);
typedef int(*type_13)(sfObj*);
typedef int(*type_14)(sfObj*);
typedef int(*type_15)(sfObj*);
typedef int(*type_16)(sfObj*);
typedef int(*type_17)(sfObj*);
typedef void(*type_24)(sfObj*);
typedef int(*type_28)(sfObj*);
typedef int(*type_32)();
typedef void(*type_37)();
typedef void(*type_40)(sfObj*);
typedef int(*type_48)(sfObj*);
typedef int(*type_51)(sfObj*);

typedef unsigned char type_1[4];
typedef unsigned int type_3[5];
typedef float type_4[4];
typedef unsigned char type_5[320];
typedef unsigned int type_6[6];
typedef float type_8[4];
typedef float type_9[4][4];
typedef unsigned int type_12[4];
typedef int type_18[1];
typedef _anon3 type_19[4];
typedef int type_20[1];
typedef unsigned int type_21[4];
typedef unsigned int type_22[3];
typedef _anon3 type_23[256];
typedef int type_25[1];
typedef unsigned int type_26[5];
typedef _anon1 type_27[7];
typedef _anon5 type_29[8];
typedef int type_30[1];
typedef short type_31[2];
typedef unsigned int type_33[5];
typedef unsigned short type_34[2];
typedef unsigned int type_35[6];
typedef char type_36[4];
typedef unsigned char type_38[4];
typedef int type_39[1];
typedef unsigned int type_41[5];
typedef float type_42[1];
typedef int type_43[1];
typedef int type_44[1];
typedef unsigned int type_45[5];
typedef int type_46[1];
typedef float type_47[4];
typedef _anon1 type_49[8];
typedef unsigned int type_50[4];

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
	int demo_num;
	int flag;
	unsigned int* file_tbl;
	void* addr_check;
	unsigned int timer;
	_anon2 em_model;
	unsigned char is_cancel_ok;
};

struct _anon1
{
	int demo_num;
	int(*chk_func)();
	int flag;
	unsigned int* file_tbl;
	void(*func)();
	unsigned char is_cancel_ok;
};

struct _EventInst
{
	_EventDriver evdrv;
	unsigned int attr;
	int(*drawaf)(sfObj*);
	int(*endexitf)(sfObj*);
};

struct EventFlag
{
	unsigned char flag[320];
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
	_anon3 val[4];
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

struct _anon2
{
	void* texture_normal;
	void* texture_global;
	void* texture_semitrans;
	void* model_data;
	sgBone* parent_bone;
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

struct _anon4
{
	short demo_id;
	unsigned char clip;
	unsigned char color_r;
	unsigned char color_g;
	unsigned char color_b;
	unsigned short near;
	unsigned short far;
	unsigned char near_value;
	unsigned char far_value;
};

struct _anon5
{
	int demo_no;
	int prob;
};

struct _anon6
{
	int model_draw_flag;
	int message_draw_flag;
};

unsigned int ev_peepdoor_hallway_file[3];
_GAME_WORK gamew;
_anon6 rl_text;
unsigned int ev_3ldk0_rl00_003_file[6];
short demo_end_flag;
_EventDriver ev_3ldk0_rl00_003;
unsigned int ev081_file[5];
unsigned int ev021_file[5];
unsigned int ev2034_file[4];
unsigned int ev030_b_file[5];
unsigned int ev034_b_file[6];
unsigned int ev2029_file[5];
unsigned int ev2208_file[4];
unsigned int ev2030_file[4];
unsigned int ev_monster_file[5];
EventFlag event_flag;
_anon5 demo_prob[8];
int(*ev_peepdoor_end)(sfObj*);
int(*ev_peepdoor_draw)(sfObj*);
int(*ev_peepdoor_exec)(sfObj*);
int(*ev_peepdoor_hallway_end)(sfObj*);
int(*ev_peepdoor_hallway_draw)(sfObj*);
int(*ev_peepdoor_hallway_exec)(sfObj*);
_EventDriver ev_peepdoor;

void ev_peepdoor_fog_set(int demo_id);
void force_camera_set();
void force_demo_camera_set();
int ev_peepdoor_hallway_exec(sfObj* obj);
int ev_peepdoor_hallway_draw(sfObj* obj);
int ev_peepdoor_hallway_end();
int ev_3ldk0_rl00_003_init(sfObj* obj);
int ev_3ldk0_rl00_003_exec(sfObj* obj);
int ev_3ldk0_rl00_003_draw(sfObj* obj);
int ev_3ldk0_rl00_003_end(sfObj* obj);
int ev_3ldk_peepdoor_monster_check();
int ev_3ldk_peepdoor_check_2208();
void ev_3ldk_peepdoor_func_2208();
int ev_3ldk_peepdoor_check_2204();
void ev_3ldk_peepdoor_func_2204();
int ev_3ldk_peepdoor_check_34b();
void ev_3ldk_peepdoor_func_34b();
int ev_3ldk_peepdoor_check_30b();
void ev_3ldk_peepdoor_func_30b();
int ev_3ldk_peepdoor_check_21();
void ev_3ldk_peepdoor_func_21();
int is_prob_ok(int demo_no);
int ev_3ldk_peepdoor_check_2029();
int ev_3ldk_peepdoor_check_2034();
int ev_3ldk_peepdoor_check_2033();
int ev_3ldk_peepdoor_check_2036();
int ev_3ldk_peepdoor_check_2031();
int ev_3ldk_peepdoor_check_2035();
int ev_3ldk_peepdoor_check_2030();
int ev_3ldk_peepdoor_check_2032();
unsigned int get_next_interval();
_anon1* get_demo_info();
void ev_peepdoor_event_set(sfObj* obj, _anon0* src);
int decide_next_demo(int demo_num);
void demo_setting(_anon0* info);
int ev_peepdoor_trgchk(sfObj* obj);
int ev_peepdoor_init(sfObj* obj);
int ev_peepdoor_exec(sfObj* obj);
int ev_peepdoor_draw(sfObj* obj);
int ev_peepdoor_end(sfObj* obj);

// 
// Start address: 0x1ed7c00
void ev_peepdoor_fog_set(int demo_id)
{
	_anon4 param;
	unsigned char col[4];
	// Line 92, Address: 0x1ed7c00, Func Offset: 0
	// Line 93, Address: 0x1ed7c10, Func Offset: 0x10
	// Line 96, Address: 0x1ed7c48, Func Offset: 0x48
	// Line 98, Address: 0x1ed7c50, Func Offset: 0x50
	// Line 101, Address: 0x1ed7c58, Func Offset: 0x58
	// Line 102, Address: 0x1ed7c5c, Func Offset: 0x5c
	// Line 105, Address: 0x1ed7c60, Func Offset: 0x60
	// Line 103, Address: 0x1ed7c64, Func Offset: 0x64
	// Line 101, Address: 0x1ed7c68, Func Offset: 0x68
	// Line 102, Address: 0x1ed7c6c, Func Offset: 0x6c
	// Line 105, Address: 0x1ed7c70, Func Offset: 0x70
	// Line 106, Address: 0x1ed7c78, Func Offset: 0x78
	// Line 107, Address: 0x1ed7c80, Func Offset: 0x80
	// Line 110, Address: 0x1ed7cec, Func Offset: 0xec
	// Line 111, Address: 0x1ed7cf4, Func Offset: 0xf4
	// Func End, Address: 0x1ed7d04, Func Offset: 0x104
}

// 
// Start address: 0x1ed7d10
void force_camera_set()
{
	float vwm[4][4];
	// Line 115, Address: 0x1ed7d10, Func Offset: 0
	// Line 117, Address: 0x1ed7d18, Func Offset: 0x8
	// Line 118, Address: 0x1ed7d20, Func Offset: 0x10
	// Line 119, Address: 0x1ed7d28, Func Offset: 0x18
	// Line 120, Address: 0x1ed7d3c, Func Offset: 0x2c
	// Func End, Address: 0x1ed7d48, Func Offset: 0x38
}

// 
// Start address: 0x1ed7d50
void force_demo_camera_set()
{
	float vwm[4][4];
	// Line 123, Address: 0x1ed7d50, Func Offset: 0
	// Line 125, Address: 0x1ed7d58, Func Offset: 0x8
	// Line 126, Address: 0x1ed7d60, Func Offset: 0x10
	// Line 127, Address: 0x1ed7d68, Func Offset: 0x18
	// Line 128, Address: 0x1ed7d7c, Func Offset: 0x2c
	// Func End, Address: 0x1ed7d88, Func Offset: 0x38
}

// 
// Start address: 0x1ed7d90
int ev_peepdoor_hallway_exec(sfObj* obj)
{
	int rtv;
	_anon0* info;
	// Line 181, Address: 0x1ed7d90, Func Offset: 0
	// Line 184, Address: 0x1ed7da8, Func Offset: 0x18
	// Line 186, Address: 0x1ed7db0, Func Offset: 0x20
	// Line 188, Address: 0x1ed7dd8, Func Offset: 0x48
	// Line 189, Address: 0x1ed7de0, Func Offset: 0x50
	// Line 191, Address: 0x1ed7dec, Func Offset: 0x5c
	// Line 194, Address: 0x1ed7df8, Func Offset: 0x68
	// Line 197, Address: 0x1ed7e00, Func Offset: 0x70
	// Line 198, Address: 0x1ed7e14, Func Offset: 0x84
	// Line 199, Address: 0x1ed7e2c, Func Offset: 0x9c
	// Line 200, Address: 0x1ed7e44, Func Offset: 0xb4
	// Line 203, Address: 0x1ed7e48, Func Offset: 0xb8
	// Line 204, Address: 0x1ed7e50, Func Offset: 0xc0
	// Line 206, Address: 0x1ed7e74, Func Offset: 0xe4
	// Line 208, Address: 0x1ed7e80, Func Offset: 0xf0
	// Line 209, Address: 0x1ed7e88, Func Offset: 0xf8
	// Line 211, Address: 0x1ed7e90, Func Offset: 0x100
	// Line 212, Address: 0x1ed7ea0, Func Offset: 0x110
	// Line 214, Address: 0x1ed7eac, Func Offset: 0x11c
	// Line 216, Address: 0x1ed7eb4, Func Offset: 0x124
	// Line 217, Address: 0x1ed7eb8, Func Offset: 0x128
	// Line 218, Address: 0x1ed7ee0, Func Offset: 0x150
	// Line 220, Address: 0x1ed7ee4, Func Offset: 0x154
	// Line 221, Address: 0x1ed7f08, Func Offset: 0x178
	// Line 223, Address: 0x1ed7f10, Func Offset: 0x180
	// Line 225, Address: 0x1ed7f18, Func Offset: 0x188
	// Line 229, Address: 0x1ed7f28, Func Offset: 0x198
	// Line 227, Address: 0x1ed7f2c, Func Offset: 0x19c
	// Line 236, Address: 0x1ed7f30, Func Offset: 0x1a0
	// Line 237, Address: 0x1ed7f34, Func Offset: 0x1a4
	// Func End, Address: 0x1ed7f4c, Func Offset: 0x1bc
}

// 
// Start address: 0x1ed7f50
int ev_peepdoor_hallway_draw(sfObj* obj)
{
	// Line 240, Address: 0x1ed7f50, Func Offset: 0
	// Line 241, Address: 0x1ed7f5c, Func Offset: 0xc
	// Line 245, Address: 0x1ed7f64, Func Offset: 0x14
	// Line 248, Address: 0x1ed7f6c, Func Offset: 0x1c
	// Line 251, Address: 0x1ed7f74, Func Offset: 0x24
	// Line 252, Address: 0x1ed7f84, Func Offset: 0x34
	// Line 255, Address: 0x1ed7f8c, Func Offset: 0x3c
	// Line 256, Address: 0x1ed7f9c, Func Offset: 0x4c
	// Line 257, Address: 0x1ed7fa4, Func Offset: 0x54
	// Line 259, Address: 0x1ed7fb0, Func Offset: 0x60
	// Line 265, Address: 0x1ed7fb8, Func Offset: 0x68
	// Line 268, Address: 0x1ed7fc0, Func Offset: 0x70
	// Line 267, Address: 0x1ed7fc4, Func Offset: 0x74
	// Line 268, Address: 0x1ed7fc8, Func Offset: 0x78
	// Func End, Address: 0x1ed7fd0, Func Offset: 0x80
	// Line 1098, Address: 0x1ed7f50, Func Offset: 0
	// Line 1099, Address: 0x1ed7f5c, Func Offset: 0xc
	// Line 1101, Address: 0x1ed7f60, Func Offset: 0x10
	// Line 1102, Address: 0x1ed7f6c, Func Offset: 0x1c
	// Line 1103, Address: 0x1ed7f74, Func Offset: 0x24
	// Line 1104, Address: 0x1ed7f84, Func Offset: 0x34
	// Line 1105, Address: 0x1ed7f94, Func Offset: 0x44
	// Line 1106, Address: 0x1ed7f9c, Func Offset: 0x4c
	// Line 1107, Address: 0x1ed7fa4, Func Offset: 0x54
	// Line 1108, Address: 0x1ed7fb8, Func Offset: 0x68
	// Line 1109, Address: 0x1ed7fcc, Func Offset: 0x7c
	// Line 1114, Address: 0x1ed7fd4, Func Offset: 0x84
	// Line 1116, Address: 0x1ed7fd8, Func Offset: 0x88
	// Line 1115, Address: 0x1ed7fe0, Func Offset: 0x90
	// Line 1116, Address: 0x1ed7fe4, Func Offset: 0x94
	// Func End, Address: 0x1ed7fec, Func Offset: 0x9c
}

// 
// Start address: 0x1ed7fd0
int ev_peepdoor_hallway_end()
{
	// Line 271, Address: 0x1ed7fd0, Func Offset: 0
	// Line 272, Address: 0x1ed7fd8, Func Offset: 0x8
	// Line 274, Address: 0x1ed7fe8, Func Offset: 0x18
	// Line 275, Address: 0x1ed7ff0, Func Offset: 0x20
	// Line 277, Address: 0x1ed7ff8, Func Offset: 0x28
	// Line 280, Address: 0x1ed8000, Func Offset: 0x30
	// Line 283, Address: 0x1ed8004, Func Offset: 0x34
	// Line 286, Address: 0x1ed8010, Func Offset: 0x40
	// Line 285, Address: 0x1ed8014, Func Offset: 0x44
	// Line 286, Address: 0x1ed8018, Func Offset: 0x48
	// Func End, Address: 0x1ed8020, Func Offset: 0x50
	// Line 216, Address: 0x1ed7fd0, Func Offset: 0
	// Line 217, Address: 0x1ed7fd4, Func Offset: 0x4
	// Line 216, Address: 0x1ed7fd8, Func Offset: 0x8
	// Line 218, Address: 0x1ed7fe4, Func Offset: 0x14
	// Func End, Address: 0x1ed7fec, Func Offset: 0x1c
}

// 
// Start address: 0x1ed8020
int ev_3ldk0_rl00_003_init(sfObj* obj)
{
	_EventInst* evinst;
	_anon0* info;
	// Line 316, Address: 0x1ed8020, Func Offset: 0
	// Line 317, Address: 0x1ed8030, Func Offset: 0x10
	// Line 320, Address: 0x1ed803c, Func Offset: 0x1c
	// Line 321, Address: 0x1ed8050, Func Offset: 0x30
	// Line 324, Address: 0x1ed8058, Func Offset: 0x38
	// Line 325, Address: 0x1ed8064, Func Offset: 0x44
	// Line 326, Address: 0x1ed806c, Func Offset: 0x4c
	// Line 329, Address: 0x1ed8070, Func Offset: 0x50
	// Line 330, Address: 0x1ed807c, Func Offset: 0x5c
	// Line 333, Address: 0x1ed8088, Func Offset: 0x68
	// Line 335, Address: 0x1ed8094, Func Offset: 0x74
	// Line 337, Address: 0x1ed809c, Func Offset: 0x7c
	// Line 340, Address: 0x1ed80a8, Func Offset: 0x88
	// Line 342, Address: 0x1ed80b0, Func Offset: 0x90
	// Line 345, Address: 0x1ed80b4, Func Offset: 0x94
	// Line 348, Address: 0x1ed80bc, Func Offset: 0x9c
	// Line 351, Address: 0x1ed80c4, Func Offset: 0xa4
	// Line 350, Address: 0x1ed80c8, Func Offset: 0xa8
	// Line 351, Address: 0x1ed80cc, Func Offset: 0xac
	// Func End, Address: 0x1ed80dc, Func Offset: 0xbc
	// Line 262, Address: 0x1ed8020, Func Offset: 0
	// Line 263, Address: 0x1ed802c, Func Offset: 0xc
	// Line 264, Address: 0x1ed8034, Func Offset: 0x14
	// Line 265, Address: 0x1ed8040, Func Offset: 0x20
	// Line 266, Address: 0x1ed8048, Func Offset: 0x28
	// Func End, Address: 0x1ed8058, Func Offset: 0x38
}

// 
// Start address: 0x1ed80e0
int ev_3ldk0_rl00_003_exec(sfObj* obj)
{
	int rtv;
	_anon0* info;
	// Line 354, Address: 0x1ed80e0, Func Offset: 0
	// Line 358, Address: 0x1ed80f8, Func Offset: 0x18
	// Line 359, Address: 0x1ed8108, Func Offset: 0x28
	// Line 362, Address: 0x1ed8110, Func Offset: 0x30
	// Line 363, Address: 0x1ed8144, Func Offset: 0x64
	// Line 364, Address: 0x1ed8148, Func Offset: 0x68
	// Line 365, Address: 0x1ed8150, Func Offset: 0x70
	// Line 367, Address: 0x1ed8158, Func Offset: 0x78
	// Line 368, Address: 0x1ed8160, Func Offset: 0x80
	// Line 367, Address: 0x1ed8164, Func Offset: 0x84
	// Line 368, Address: 0x1ed8168, Func Offset: 0x88
	// Line 370, Address: 0x1ed8170, Func Offset: 0x90
	// Line 371, Address: 0x1ed8178, Func Offset: 0x98
	// Line 373, Address: 0x1ed8180, Func Offset: 0xa0
	// Line 374, Address: 0x1ed8190, Func Offset: 0xb0
	// Line 376, Address: 0x1ed8198, Func Offset: 0xb8
	// Line 378, Address: 0x1ed81a4, Func Offset: 0xc4
	// Line 381, Address: 0x1ed81ac, Func Offset: 0xcc
	// Line 382, Address: 0x1ed81c0, Func Offset: 0xe0
	// Line 383, Address: 0x1ed81d8, Func Offset: 0xf8
	// Line 385, Address: 0x1ed81f0, Func Offset: 0x110
	// Line 386, Address: 0x1ed81f8, Func Offset: 0x118
	// Line 387, Address: 0x1ed8204, Func Offset: 0x124
	// Line 388, Address: 0x1ed8208, Func Offset: 0x128
	// Line 389, Address: 0x1ed8210, Func Offset: 0x130
	// Line 391, Address: 0x1ed8218, Func Offset: 0x138
	// Line 392, Address: 0x1ed8228, Func Offset: 0x148
	// Line 393, Address: 0x1ed8230, Func Offset: 0x150
	// Line 394, Address: 0x1ed823c, Func Offset: 0x15c
	// Line 395, Address: 0x1ed8240, Func Offset: 0x160
	// Line 396, Address: 0x1ed8248, Func Offset: 0x168
	// Line 399, Address: 0x1ed8250, Func Offset: 0x170
	// Line 404, Address: 0x1ed8260, Func Offset: 0x180
	// Line 402, Address: 0x1ed8264, Func Offset: 0x184
	// Line 411, Address: 0x1ed8268, Func Offset: 0x188
	// Line 412, Address: 0x1ed826c, Func Offset: 0x18c
	// Func End, Address: 0x1ed8284, Func Offset: 0x1a4
}

// 
// Start address: 0x1ed8290
int ev_3ldk0_rl00_003_draw(sfObj* obj)
{
	// Line 415, Address: 0x1ed8290, Func Offset: 0
	// Line 417, Address: 0x1ed8294, Func Offset: 0x4
	// Line 415, Address: 0x1ed8298, Func Offset: 0x8
	// Line 417, Address: 0x1ed82a0, Func Offset: 0x10
	// Line 418, Address: 0x1ed82ac, Func Offset: 0x1c
	// Line 419, Address: 0x1ed82b4, Func Offset: 0x24
	// Line 422, Address: 0x1ed82b8, Func Offset: 0x28
	// Line 425, Address: 0x1ed82c8, Func Offset: 0x38
	// Line 428, Address: 0x1ed82d4, Func Offset: 0x44
	// Line 429, Address: 0x1ed82dc, Func Offset: 0x4c
	// Line 431, Address: 0x1ed82e0, Func Offset: 0x50
	// Line 430, Address: 0x1ed82e8, Func Offset: 0x58
	// Line 431, Address: 0x1ed82ec, Func Offset: 0x5c
	// Func End, Address: 0x1ed82f4, Func Offset: 0x64
}

// 
// Start address: 0x1ed8300
int ev_3ldk0_rl00_003_end(sfObj* obj)
{
	_anon0* info;
	// Line 434, Address: 0x1ed8300, Func Offset: 0
	// Line 435, Address: 0x1ed830c, Func Offset: 0xc
	// Line 436, Address: 0x1ed8314, Func Offset: 0x14
	// Line 438, Address: 0x1ed8318, Func Offset: 0x18
	// Line 439, Address: 0x1ed8320, Func Offset: 0x20
	// Line 443, Address: 0x1ed8328, Func Offset: 0x28
	// Line 446, Address: 0x1ed8338, Func Offset: 0x38
	// Line 448, Address: 0x1ed8340, Func Offset: 0x40
	// Line 449, Address: 0x1ed8348, Func Offset: 0x48
	// Line 450, Address: 0x1ed8350, Func Offset: 0x50
	// Line 452, Address: 0x1ed8354, Func Offset: 0x54
	// Line 455, Address: 0x1ed835c, Func Offset: 0x5c
	// Line 458, Address: 0x1ed8364, Func Offset: 0x64
	// Line 461, Address: 0x1ed836c, Func Offset: 0x6c
	// Line 460, Address: 0x1ed8370, Func Offset: 0x70
	// Line 461, Address: 0x1ed8374, Func Offset: 0x74
	// Func End, Address: 0x1ed837c, Func Offset: 0x7c
}

// 
// Start address: 0x1ed8380
int ev_3ldk_peepdoor_monster_check()
{
	// Line 570, Address: 0x1ed8380, Func Offset: 0
	// Line 573, Address: 0x1ed8388, Func Offset: 0x8
	// Line 582, Address: 0x1ed8390, Func Offset: 0x10
	// Line 581, Address: 0x1ed8394, Func Offset: 0x14
	// Line 582, Address: 0x1ed8398, Func Offset: 0x18
	// Func End, Address: 0x1ed83a0, Func Offset: 0x20
}

// 
// Start address: 0x1ed83a0
int ev_3ldk_peepdoor_check_2208()
{
	int rtv;
	// Line 587, Address: 0x1ed83a0, Func Offset: 0
	// Line 595, Address: 0x1ed83a4, Func Offset: 0x4
	// Line 587, Address: 0x1ed83a8, Func Offset: 0x8
	// Line 595, Address: 0x1ed83b0, Func Offset: 0x10
	// Line 596, Address: 0x1ed83c4, Func Offset: 0x24
	// Line 599, Address: 0x1ed83c8, Func Offset: 0x28
	// Line 600, Address: 0x1ed83cc, Func Offset: 0x2c
	// Func End, Address: 0x1ed83dc, Func Offset: 0x3c
}

// 
// Start address: 0x1ed83e0
void ev_3ldk_peepdoor_func_2208()
{
	// Line 604, Address: 0x1ed83e0, Func Offset: 0
	// Func End, Address: 0x1ed83e8, Func Offset: 0x8
}

// 
// Start address: 0x1ed83f0
int ev_3ldk_peepdoor_check_2204()
{
	int rtv;
	// Line 609, Address: 0x1ed83f0, Func Offset: 0
	// Line 613, Address: 0x1ed83f4, Func Offset: 0x4
	// Line 609, Address: 0x1ed83f8, Func Offset: 0x8
	// Line 613, Address: 0x1ed8400, Func Offset: 0x10
	// Line 618, Address: 0x1ed8424, Func Offset: 0x34
	// Line 616, Address: 0x1ed8428, Func Offset: 0x38
	// Line 619, Address: 0x1ed842c, Func Offset: 0x3c
	// Line 620, Address: 0x1ed8430, Func Offset: 0x40
	// Line 621, Address: 0x1ed8434, Func Offset: 0x44
	// Func End, Address: 0x1ed8444, Func Offset: 0x54
	// Line 1289, Address: 0x1ed83f0, Func Offset: 0
	// Line 1292, Address: 0x1ed83fc, Func Offset: 0xc
	// Func End, Address: 0x1ed8404, Func Offset: 0x14
}

// 
// Start address: 0x1ed8450
void ev_3ldk_peepdoor_func_2204()
{
	// Line 625, Address: 0x1ed8450, Func Offset: 0
	// Func End, Address: 0x1ed8458, Func Offset: 0x8
	// Line 272, Address: 0x1ed8450, Func Offset: 0
	// Func End, Address: 0x1ed8458, Func Offset: 0x8
}

// 
// Start address: 0x1ed8460
int ev_3ldk_peepdoor_check_34b()
{
	int rtv;
	// Line 630, Address: 0x1ed8460, Func Offset: 0
	// Line 633, Address: 0x1ed8464, Func Offset: 0x4
	// Line 630, Address: 0x1ed8468, Func Offset: 0x8
	// Line 633, Address: 0x1ed8470, Func Offset: 0x10
	// Line 634, Address: 0x1ed8484, Func Offset: 0x24
	// Line 636, Address: 0x1ed8488, Func Offset: 0x28
	// Line 637, Address: 0x1ed848c, Func Offset: 0x2c
	// Func End, Address: 0x1ed849c, Func Offset: 0x3c
	// Line 1318, Address: 0x1ed8460, Func Offset: 0
	// Line 1320, Address: 0x1ed8468, Func Offset: 0x8
	// Line 1322, Address: 0x1ed8470, Func Offset: 0x10
	// Line 1323, Address: 0x1ed8484, Func Offset: 0x24
	// Line 1324, Address: 0x1ed8494, Func Offset: 0x34
	// Line 1327, Address: 0x1ed8498, Func Offset: 0x38
	// Line 1326, Address: 0x1ed849c, Func Offset: 0x3c
	// Line 1327, Address: 0x1ed84a0, Func Offset: 0x40
	// Func End, Address: 0x1ed84a8, Func Offset: 0x48
	// Line 278, Address: 0x1ed8460, Func Offset: 0
	// Line 279, Address: 0x1ed846c, Func Offset: 0xc
	// Line 282, Address: 0x1ed8474, Func Offset: 0x14
	// Line 283, Address: 0x1ed847c, Func Offset: 0x1c
	// Line 286, Address: 0x1ed8480, Func Offset: 0x20
	// Line 285, Address: 0x1ed8484, Func Offset: 0x24
	// Line 286, Address: 0x1ed8488, Func Offset: 0x28
	// Func End, Address: 0x1ed8490, Func Offset: 0x30
}

// 
// Start address: 0x1ed84a0
void ev_3ldk_peepdoor_func_34b()
{
	// Line 641, Address: 0x1ed84a0, Func Offset: 0
	// Func End, Address: 0x1ed84a8, Func Offset: 0x8
}

// 
// Start address: 0x1ed84b0
int ev_3ldk_peepdoor_check_30b()
{
	int rtv;
	// Line 646, Address: 0x1ed84b0, Func Offset: 0
	// Line 649, Address: 0x1ed84b4, Func Offset: 0x4
	// Line 646, Address: 0x1ed84b8, Func Offset: 0x8
	// Line 649, Address: 0x1ed84c0, Func Offset: 0x10
	// Line 650, Address: 0x1ed84d4, Func Offset: 0x24
	// Line 652, Address: 0x1ed84d8, Func Offset: 0x28
	// Line 653, Address: 0x1ed84dc, Func Offset: 0x2c
	// Func End, Address: 0x1ed84ec, Func Offset: 0x3c
	// Line 1356, Address: 0x1ed84b0, Func Offset: 0
	// Line 1357, Address: 0x1ed84b8, Func Offset: 0x8
	// Line 1359, Address: 0x1ed84c0, Func Offset: 0x10
	// Line 1361, Address: 0x1ed84c8, Func Offset: 0x18
	// Line 1362, Address: 0x1ed84d0, Func Offset: 0x20
	// Line 1364, Address: 0x1ed84dc, Func Offset: 0x2c
	// Line 1366, Address: 0x1ed84e4, Func Offset: 0x34
	// Line 1369, Address: 0x1ed84ec, Func Offset: 0x3c
	// Line 1368, Address: 0x1ed84f0, Func Offset: 0x40
	// Line 1369, Address: 0x1ed84f4, Func Offset: 0x44
	// Func End, Address: 0x1ed84fc, Func Offset: 0x4c
}

// 
// Start address: 0x1ed84f0
void ev_3ldk_peepdoor_func_30b()
{
	// Line 657, Address: 0x1ed84f0, Func Offset: 0
	// Func End, Address: 0x1ed84f8, Func Offset: 0x8
}

// 
// Start address: 0x1ed8500
int ev_3ldk_peepdoor_check_21()
{
	int rtv;
	// Line 662, Address: 0x1ed8500, Func Offset: 0
	// Line 671, Address: 0x1ed8504, Func Offset: 0x4
	// Line 662, Address: 0x1ed8508, Func Offset: 0x8
	// Line 671, Address: 0x1ed8510, Func Offset: 0x10
	// Line 672, Address: 0x1ed8524, Func Offset: 0x24
	// Line 674, Address: 0x1ed8528, Func Offset: 0x28
	// Line 675, Address: 0x1ed852c, Func Offset: 0x2c
	// Func End, Address: 0x1ed853c, Func Offset: 0x3c
	// Line 1391, Address: 0x1ed8500, Func Offset: 0
	// Line 1394, Address: 0x1ed8508, Func Offset: 0x8
	// Line 1396, Address: 0x1ed8514, Func Offset: 0x14
	// Line 1397, Address: 0x1ed851c, Func Offset: 0x1c
	// Line 1398, Address: 0x1ed8524, Func Offset: 0x24
	// Line 1400, Address: 0x1ed8528, Func Offset: 0x28
	// Line 1401, Address: 0x1ed852c, Func Offset: 0x2c
	// Func End, Address: 0x1ed853c, Func Offset: 0x3c
	// Line 312, Address: 0x1ed8500, Func Offset: 0
	// Line 313, Address: 0x1ed8508, Func Offset: 0x8
	// Line 315, Address: 0x1ed8510, Func Offset: 0x10
	// Line 314, Address: 0x1ed8514, Func Offset: 0x14
	// Line 315, Address: 0x1ed8518, Func Offset: 0x18
	// Func End, Address: 0x1ed8520, Func Offset: 0x20
}

// 
// Start address: 0x1ed8540
void ev_3ldk_peepdoor_func_21()
{
	// Line 679, Address: 0x1ed8540, Func Offset: 0
	// Func End, Address: 0x1ed8548, Func Offset: 0x8
	// Line 1427, Address: 0x1ed8540, Func Offset: 0
	// Line 1428, Address: 0x1ed854c, Func Offset: 0xc
	// Line 1430, Address: 0x1ed8554, Func Offset: 0x14
	// Line 1431, Address: 0x1ed855c, Func Offset: 0x1c
	// Func End, Address: 0x1ed856c, Func Offset: 0x2c
	// Line 330, Address: 0x1ed8540, Func Offset: 0
	// Line 331, Address: 0x1ed8548, Func Offset: 0x8
	// Line 333, Address: 0x1ed8550, Func Offset: 0x10
	// Line 332, Address: 0x1ed8554, Func Offset: 0x14
	// Line 333, Address: 0x1ed8558, Func Offset: 0x18
	// Func End, Address: 0x1ed8560, Func Offset: 0x20
}

// 
// Start address: 0x1ed8550
int is_prob_ok(int demo_no)
{
	int prob;
	int i;
	// Line 697, Address: 0x1ed8550, Func Offset: 0
	// Line 698, Address: 0x1ed855c, Func Offset: 0xc
	// Line 701, Address: 0x1ed8568, Func Offset: 0x18
	// Line 698, Address: 0x1ed856c, Func Offset: 0x1c
	// Line 701, Address: 0x1ed857c, Func Offset: 0x2c
	// Line 702, Address: 0x1ed8588, Func Offset: 0x38
	// Line 703, Address: 0x1ed8594, Func Offset: 0x44
	// Line 704, Address: 0x1ed85a4, Func Offset: 0x54
	// Line 707, Address: 0x1ed85ac, Func Offset: 0x5c
	// Line 708, Address: 0x1ed85c0, Func Offset: 0x70
	// Line 709, Address: 0x1ed85c8, Func Offset: 0x78
	// Func End, Address: 0x1ed85d8, Func Offset: 0x88
	// Line 1491, Address: 0x1ed8550, Func Offset: 0
	// Line 1494, Address: 0x1ed8564, Func Offset: 0x14
	// Line 1495, Address: 0x1ed856c, Func Offset: 0x1c
	// Line 1496, Address: 0x1ed8578, Func Offset: 0x28
	// Line 1497, Address: 0x1ed85a4, Func Offset: 0x54
	// Line 1498, Address: 0x1ed85a8, Func Offset: 0x58
	// Line 1499, Address: 0x1ed85b4, Func Offset: 0x64
	// Line 1500, Address: 0x1ed85bc, Func Offset: 0x6c
	// Line 1501, Address: 0x1ed85c4, Func Offset: 0x74
	// Line 1502, Address: 0x1ed85d0, Func Offset: 0x80
	// Line 1504, Address: 0x1ed85d4, Func Offset: 0x84
	// Line 1502, Address: 0x1ed85d8, Func Offset: 0x88
	// Line 1503, Address: 0x1ed85dc, Func Offset: 0x8c
	// Line 1504, Address: 0x1ed85e0, Func Offset: 0x90
	// Line 1505, Address: 0x1ed85e8, Func Offset: 0x98
	// Line 1508, Address: 0x1ed85f0, Func Offset: 0xa0
	// Line 1509, Address: 0x1ed8610, Func Offset: 0xc0
	// Line 1511, Address: 0x1ed8630, Func Offset: 0xe0
	// Line 1509, Address: 0x1ed8634, Func Offset: 0xe4
	// Line 1511, Address: 0x1ed8638, Func Offset: 0xe8
	// Line 1514, Address: 0x1ed867c, Func Offset: 0x12c
	// Line 1515, Address: 0x1ed8680, Func Offset: 0x130
	// Line 1517, Address: 0x1ed869c, Func Offset: 0x14c
	// Line 1518, Address: 0x1ed86b0, Func Offset: 0x160
	// Line 1520, Address: 0x1ed86b8, Func Offset: 0x168
	// Line 1521, Address: 0x1ed86c8, Func Offset: 0x178
	// Line 1522, Address: 0x1ed86d8, Func Offset: 0x188
	// Line 1523, Address: 0x1ed86dc, Func Offset: 0x18c
	// Line 1524, Address: 0x1ed86e8, Func Offset: 0x198
	// Line 1529, Address: 0x1ed86ec, Func Offset: 0x19c
	// Line 1530, Address: 0x1ed86f0, Func Offset: 0x1a0
	// Line 1531, Address: 0x1ed8710, Func Offset: 0x1c0
	// Line 1532, Address: 0x1ed8718, Func Offset: 0x1c8
	// Line 1533, Address: 0x1ed871c, Func Offset: 0x1cc
	// Line 1534, Address: 0x1ed8720, Func Offset: 0x1d0
	// Line 1535, Address: 0x1ed8730, Func Offset: 0x1e0
	// Line 1536, Address: 0x1ed8744, Func Offset: 0x1f4
	// Line 1537, Address: 0x1ed874c, Func Offset: 0x1fc
	// Line 1539, Address: 0x1ed8798, Func Offset: 0x248
	// Line 1540, Address: 0x1ed87a0, Func Offset: 0x250
	// Line 1541, Address: 0x1ed87a8, Func Offset: 0x258
	// Line 1545, Address: 0x1ed87b4, Func Offset: 0x264
	// Line 1546, Address: 0x1ed87b8, Func Offset: 0x268
	// Func End, Address: 0x1ed87d0, Func Offset: 0x280
}

// 
// Start address: 0x1ed85e0
int ev_3ldk_peepdoor_check_2029()
{
	int rtv;
	// Line 713, Address: 0x1ed85e0, Func Offset: 0
	// Line 717, Address: 0x1ed85e4, Func Offset: 0x4
	// Line 713, Address: 0x1ed85e8, Func Offset: 0x8
	// Line 717, Address: 0x1ed85ec, Func Offset: 0xc
	// Line 722, Address: 0x1ed8638, Func Offset: 0x58
	// Line 725, Address: 0x1ed8640, Func Offset: 0x60
	// Func End, Address: 0x1ed864c, Func Offset: 0x6c
}

// 
// Start address: 0x1ed8650
int ev_3ldk_peepdoor_check_2034()
{
	int rtv;
	// Line 729, Address: 0x1ed8650, Func Offset: 0
	// Line 734, Address: 0x1ed8654, Func Offset: 0x4
	// Line 729, Address: 0x1ed8658, Func Offset: 0x8
	// Line 734, Address: 0x1ed8660, Func Offset: 0x10
	// Line 737, Address: 0x1ed8684, Func Offset: 0x34
	// Line 739, Address: 0x1ed8694, Func Offset: 0x44
	// Line 740, Address: 0x1ed86a0, Func Offset: 0x50
	// Line 741, Address: 0x1ed86c4, Func Offset: 0x74
	// Line 745, Address: 0x1ed86d0, Func Offset: 0x80
	// Line 746, Address: 0x1ed86d4, Func Offset: 0x84
	// Func End, Address: 0x1ed86e4, Func Offset: 0x94
}

// 
// Start address: 0x1ed86f0
int ev_3ldk_peepdoor_check_2033()
{
	int rtv;
	// Line 751, Address: 0x1ed86f0, Func Offset: 0
	// Line 756, Address: 0x1ed86f4, Func Offset: 0x4
	// Line 751, Address: 0x1ed86f8, Func Offset: 0x8
	// Line 756, Address: 0x1ed8700, Func Offset: 0x10
	// Line 759, Address: 0x1ed8724, Func Offset: 0x34
	// Line 761, Address: 0x1ed8734, Func Offset: 0x44
	// Line 762, Address: 0x1ed8740, Func Offset: 0x50
	// Line 763, Address: 0x1ed8764, Func Offset: 0x74
	// Line 767, Address: 0x1ed8770, Func Offset: 0x80
	// Line 768, Address: 0x1ed8774, Func Offset: 0x84
	// Func End, Address: 0x1ed8784, Func Offset: 0x94
}

// 
// Start address: 0x1ed8790
int ev_3ldk_peepdoor_check_2036()
{
	int rtv;
	unsigned long interval;
	int minute;
	// Line 772, Address: 0x1ed8790, Func Offset: 0
	// Line 776, Address: 0x1ed8794, Func Offset: 0x4
	// Line 772, Address: 0x1ed8798, Func Offset: 0x8
	// Line 776, Address: 0x1ed879c, Func Offset: 0xc
	// Line 772, Address: 0x1ed87a0, Func Offset: 0x10
	// Line 776, Address: 0x1ed87a8, Func Offset: 0x18
	// Line 777, Address: 0x1ed87b4, Func Offset: 0x24
	// Line 778, Address: 0x1ed87cc, Func Offset: 0x3c
	// Line 781, Address: 0x1ed87e8, Func Offset: 0x58
	// Line 782, Address: 0x1ed87f4, Func Offset: 0x64
	// Line 784, Address: 0x1ed87fc, Func Offset: 0x6c
	// Line 787, Address: 0x1ed8800, Func Offset: 0x70
	// Line 789, Address: 0x1ed8824, Func Offset: 0x94
	// Line 792, Address: 0x1ed8830, Func Offset: 0xa0
	// Line 793, Address: 0x1ed8838, Func Offset: 0xa8
	// Func End, Address: 0x1ed884c, Func Offset: 0xbc
}

// 
// Start address: 0x1ed8850
int ev_3ldk_peepdoor_check_2031()
{
	int rtv;
	// Line 797, Address: 0x1ed8850, Func Offset: 0
	// Line 801, Address: 0x1ed8854, Func Offset: 0x4
	// Line 797, Address: 0x1ed8858, Func Offset: 0x8
	// Line 801, Address: 0x1ed885c, Func Offset: 0xc
	// Line 802, Address: 0x1ed886c, Func Offset: 0x1c
	// Line 803, Address: 0x1ed8874, Func Offset: 0x24
	// Line 806, Address: 0x1ed8878, Func Offset: 0x28
	// Func End, Address: 0x1ed8884, Func Offset: 0x34
}

// 
// Start address: 0x1ed8890
int ev_3ldk_peepdoor_check_2035()
{
	int rtv;
	// Line 810, Address: 0x1ed8890, Func Offset: 0
	// Line 814, Address: 0x1ed8894, Func Offset: 0x4
	// Line 810, Address: 0x1ed8898, Func Offset: 0x8
	// Line 814, Address: 0x1ed889c, Func Offset: 0xc
	// Line 815, Address: 0x1ed88ac, Func Offset: 0x1c
	// Line 816, Address: 0x1ed88b4, Func Offset: 0x24
	// Line 819, Address: 0x1ed88b8, Func Offset: 0x28
	// Func End, Address: 0x1ed88c4, Func Offset: 0x34
	// Line 473, Address: 0x1ed8890, Func Offset: 0
	// Line 474, Address: 0x1ed88b0, Func Offset: 0x20
	// Line 475, Address: 0x1ed88bc, Func Offset: 0x2c
	// Line 476, Address: 0x1ed88c8, Func Offset: 0x38
	// Line 477, Address: 0x1ed88d0, Func Offset: 0x40
	// Line 481, Address: 0x1ed88d4, Func Offset: 0x44
	// Line 484, Address: 0x1ed88fc, Func Offset: 0x6c
	// Line 488, Address: 0x1ed8900, Func Offset: 0x70
	// Line 484, Address: 0x1ed8908, Func Offset: 0x78
	// Line 485, Address: 0x1ed890c, Func Offset: 0x7c
	// Line 486, Address: 0x1ed8914, Func Offset: 0x84
	// Line 488, Address: 0x1ed891c, Func Offset: 0x8c
	// Line 490, Address: 0x1ed8924, Func Offset: 0x94
	// Line 495, Address: 0x1ed8928, Func Offset: 0x98
	// Func End, Address: 0x1ed8940, Func Offset: 0xb0
}

// 
// Start address: 0x1ed88d0
int ev_3ldk_peepdoor_check_2030()
{
	int rtv;
	// Line 823, Address: 0x1ed88d0, Func Offset: 0
	// Line 827, Address: 0x1ed88d4, Func Offset: 0x4
	// Line 823, Address: 0x1ed88d8, Func Offset: 0x8
	// Line 827, Address: 0x1ed88dc, Func Offset: 0xc
	// Line 828, Address: 0x1ed88ec, Func Offset: 0x1c
	// Line 829, Address: 0x1ed88f4, Func Offset: 0x24
	// Line 832, Address: 0x1ed88f8, Func Offset: 0x28
	// Func End, Address: 0x1ed8904, Func Offset: 0x34
}

// 
// Start address: 0x1ed8910
int ev_3ldk_peepdoor_check_2032()
{
	int rtv;
	// Line 836, Address: 0x1ed8910, Func Offset: 0
	// Line 840, Address: 0x1ed8914, Func Offset: 0x4
	// Line 836, Address: 0x1ed8918, Func Offset: 0x8
	// Line 840, Address: 0x1ed891c, Func Offset: 0xc
	// Line 841, Address: 0x1ed892c, Func Offset: 0x1c
	// Line 842, Address: 0x1ed8934, Func Offset: 0x24
	// Line 845, Address: 0x1ed8938, Func Offset: 0x28
	// Func End, Address: 0x1ed8944, Func Offset: 0x34
}

// 
// Start address: 0x1ed8950
unsigned int get_next_interval()
{
	// Line 848, Address: 0x1ed8950, Func Offset: 0
	// Line 849, Address: 0x1ed895c, Func Offset: 0xc
	// Line 852, Address: 0x1ed89a4, Func Offset: 0x54
	// Func End, Address: 0x1ed89b8, Func Offset: 0x68
}

// 
// Start address: 0x1ed89c0
_anon1* get_demo_info()
{
	_anon1* param;
	int i;
	int start;
	_anon1 default_demo;
	_anon1 other_demo_tbl[8];
	_anon1 event_demo_tbl[7];
	// Line 857, Address: 0x1ed89c0, Func Offset: 0
	// Line 1016, Address: 0x1ed89d4, Func Offset: 0x14
	// Line 1017, Address: 0x1ed89dc, Func Offset: 0x1c
	// Line 1018, Address: 0x1ed89e4, Func Offset: 0x24
	// Line 1019, Address: 0x1ed89ec, Func Offset: 0x2c
	// Line 1020, Address: 0x1ed89fc, Func Offset: 0x3c
	// Line 1022, Address: 0x1ed8a08, Func Offset: 0x48
	// Line 1023, Address: 0x1ed8a18, Func Offset: 0x58
	// Line 1026, Address: 0x1ed8a28, Func Offset: 0x68
	// Line 1027, Address: 0x1ed8a30, Func Offset: 0x70
	// Line 1030, Address: 0x1ed8a38, Func Offset: 0x78
	// Line 1034, Address: 0x1ed8a40, Func Offset: 0x80
	// Line 1037, Address: 0x1ed8a50, Func Offset: 0x90
	// Line 1038, Address: 0x1ed8a64, Func Offset: 0xa4
	// Line 1039, Address: 0x1ed8a74, Func Offset: 0xb4
	// Line 1040, Address: 0x1ed8a78, Func Offset: 0xb8
	// Line 1039, Address: 0x1ed8a7c, Func Offset: 0xbc
	// Line 1040, Address: 0x1ed8a80, Func Offset: 0xc0
	// Line 1039, Address: 0x1ed8a84, Func Offset: 0xc4
	// Line 1040, Address: 0x1ed8a88, Func Offset: 0xc8
	// Line 1045, Address: 0x1ed8a90, Func Offset: 0xd0
	// Line 1046, Address: 0x1ed8a98, Func Offset: 0xd8
	// Line 1047, Address: 0x1ed8ab8, Func Offset: 0xf8
	// Line 1049, Address: 0x1ed8ac4, Func Offset: 0x104
	// Line 1050, Address: 0x1ed8ac8, Func Offset: 0x108
	// Line 1052, Address: 0x1ed8aec, Func Offset: 0x12c
	// Line 1053, Address: 0x1ed8af4, Func Offset: 0x134
	// Line 1054, Address: 0x1ed8b04, Func Offset: 0x144
	// Line 1056, Address: 0x1ed8b10, Func Offset: 0x150
	// Line 1057, Address: 0x1ed8b20, Func Offset: 0x160
	// Line 1060, Address: 0x1ed8b30, Func Offset: 0x170
	// Line 1061, Address: 0x1ed8b38, Func Offset: 0x178
	// Line 1064, Address: 0x1ed8b40, Func Offset: 0x180
	// Line 1067, Address: 0x1ed8b48, Func Offset: 0x188
	// Line 1070, Address: 0x1ed8b58, Func Offset: 0x198
	// Line 1071, Address: 0x1ed8b60, Func Offset: 0x1a0
	// Func End, Address: 0x1ed8b78, Func Offset: 0x1b8
}

// 
// Start address: 0x1ed8b80
void ev_peepdoor_event_set(sfObj* obj, _anon0* src)
{
	_EventInst* dst;
	// Line 1075, Address: 0x1ed8b80, Func Offset: 0
	// Line 1086, Address: 0x1ed8b90, Func Offset: 0x10
	// Line 1087, Address: 0x1ed8b98, Func Offset: 0x18
	// Line 1090, Address: 0x1ed8ba0, Func Offset: 0x20
	// Line 1087, Address: 0x1ed8ba4, Func Offset: 0x24
	// Line 1090, Address: 0x1ed8ba8, Func Offset: 0x28
	// Line 1093, Address: 0x1ed8bb4, Func Offset: 0x34
	// Line 1096, Address: 0x1ed8bc8, Func Offset: 0x48
	// Line 1097, Address: 0x1ed8bd8, Func Offset: 0x58
	// Line 1098, Address: 0x1ed8be8, Func Offset: 0x68
	// Line 1100, Address: 0x1ed8bf8, Func Offset: 0x78
	// Line 1102, Address: 0x1ed8c0c, Func Offset: 0x8c
	// Line 1104, Address: 0x1ed8c40, Func Offset: 0xc0
	// Line 1107, Address: 0x1ed8c48, Func Offset: 0xc8
	// Line 1108, Address: 0x1ed8c58, Func Offset: 0xd8
	// Line 1109, Address: 0x1ed8c68, Func Offset: 0xe8
	// Line 1112, Address: 0x1ed8c78, Func Offset: 0xf8
	// Func End, Address: 0x1ed8c8c, Func Offset: 0x10c
}

// 
// Start address: 0x1ed8c90
int decide_next_demo(int demo_num)
{
	int next_demo;
	int prob;
	// Line 1116, Address: 0x1ed8c90, Func Offset: 0
	// Line 1118, Address: 0x1ed8ca4, Func Offset: 0x14
	// Line 1120, Address: 0x1ed8cac, Func Offset: 0x1c
	// Line 1124, Address: 0x1ed8cf4, Func Offset: 0x64
	// Line 1125, Address: 0x1ed8cf8, Func Offset: 0x68
	// Line 1128, Address: 0x1ed8d04, Func Offset: 0x74
	// Line 1130, Address: 0x1ed8d0c, Func Offset: 0x7c
	// Line 1131, Address: 0x1ed8d10, Func Offset: 0x80
	// Line 1132, Address: 0x1ed8d24, Func Offset: 0x94
	// Line 1133, Address: 0x1ed8d48, Func Offset: 0xb8
	// Line 1134, Address: 0x1ed8d50, Func Offset: 0xc0
	// Line 1139, Address: 0x1ed8d58, Func Offset: 0xc8
	// Line 1141, Address: 0x1ed8d5c, Func Offset: 0xcc
	// Line 1143, Address: 0x1ed8d60, Func Offset: 0xd0
	// Line 1144, Address: 0x1ed8d64, Func Offset: 0xd4
	// Func End, Address: 0x1ed8d78, Func Offset: 0xe8
}

// 
// Start address: 0x1ed8d80
void demo_setting(_anon0* info)
{
	int next_demo;
	// Line 1148, Address: 0x1ed8d80, Func Offset: 0
	// Line 1152, Address: 0x1ed8d90, Func Offset: 0x10
	// Line 1154, Address: 0x1ed8d9c, Func Offset: 0x1c
	// Line 1160, Address: 0x1ed8e28, Func Offset: 0xa8
	// Line 1161, Address: 0x1ed8e30, Func Offset: 0xb0
	// Line 1163, Address: 0x1ed8e3c, Func Offset: 0xbc
	// Line 1165, Address: 0x1ed8e44, Func Offset: 0xc4
	// Line 1173, Address: 0x1ed8e4c, Func Offset: 0xcc
	// Line 1175, Address: 0x1ed8e50, Func Offset: 0xd0
	// Line 1179, Address: 0x1ed8e5c, Func Offset: 0xdc
	// Line 1180, Address: 0x1ed8e60, Func Offset: 0xe0
	// Func End, Address: 0x1ed8e70, Func Offset: 0xf0
}

// 
// Start address: 0x1ed8e70
int ev_peepdoor_trgchk(sfObj* obj)
{
	// Line 1184, Address: 0x1ed8e70, Func Offset: 0
	// Line 1186, Address: 0x1ed8e7c, Func Offset: 0xc
	// Line 1187, Address: 0x1ed8e90, Func Offset: 0x20
	// Line 1192, Address: 0x1ed8e98, Func Offset: 0x28
	// Line 1195, Address: 0x1ed8ec0, Func Offset: 0x50
	// Func End, Address: 0x1ed8ed0, Func Offset: 0x60
}

// 
// Start address: 0x1ed8ed0
int ev_peepdoor_init(sfObj* obj)
{
	_anon0* info;
	_anon1* src;
	_EventInst* evinst;
	// Line 1198, Address: 0x1ed8ed0, Func Offset: 0
	// Line 1200, Address: 0x1ed8ed4, Func Offset: 0x4
	// Line 1198, Address: 0x1ed8ed8, Func Offset: 0x8
	// Line 1200, Address: 0x1ed8ee8, Func Offset: 0x18
	// Line 1203, Address: 0x1ed8ef0, Func Offset: 0x20
	// Line 1205, Address: 0x1ed8efc, Func Offset: 0x2c
	// Line 1208, Address: 0x1ed8f04, Func Offset: 0x34
	// Line 1211, Address: 0x1ed8f0c, Func Offset: 0x3c
	// Line 1208, Address: 0x1ed8f10, Func Offset: 0x40
	// Line 1211, Address: 0x1ed8f14, Func Offset: 0x44
	// Line 1212, Address: 0x1ed8f18, Func Offset: 0x48
	// Line 1214, Address: 0x1ed8f1c, Func Offset: 0x4c
	// Line 1216, Address: 0x1ed8f24, Func Offset: 0x54
	// Line 1222, Address: 0x1ed8f28, Func Offset: 0x58
	// Line 1216, Address: 0x1ed8f30, Func Offset: 0x60
	// Line 1217, Address: 0x1ed8f34, Func Offset: 0x64
	// Line 1218, Address: 0x1ed8f3c, Func Offset: 0x6c
	// Line 1219, Address: 0x1ed8f44, Func Offset: 0x74
	// Line 1222, Address: 0x1ed8f48, Func Offset: 0x78
	// Line 1225, Address: 0x1ed8f50, Func Offset: 0x80
	// Line 1228, Address: 0x1ed8f58, Func Offset: 0x88
	// Line 1231, Address: 0x1ed8f68, Func Offset: 0x98
	// Line 1234, Address: 0x1ed8f70, Func Offset: 0xa0
	// Line 1236, Address: 0x1ed8f7c, Func Offset: 0xac
	// Line 1239, Address: 0x1ed8f84, Func Offset: 0xb4
	// Line 1240, Address: 0x1ed8f90, Func Offset: 0xc0
	// Line 1243, Address: 0x1ed8f9c, Func Offset: 0xcc
	// Line 1246, Address: 0x1ed8fa8, Func Offset: 0xd8
	// Line 1248, Address: 0x1ed8fb0, Func Offset: 0xe0
	// Line 1251, Address: 0x1ed8fb4, Func Offset: 0xe4
	// Line 1254, Address: 0x1ed8fbc, Func Offset: 0xec
	// Line 1257, Address: 0x1ed8fc4, Func Offset: 0xf4
	// Line 1259, Address: 0x1ed8fcc, Func Offset: 0xfc
	// Line 1260, Address: 0x1ed8fd4, Func Offset: 0x104
	// Line 1262, Address: 0x1ed8fd8, Func Offset: 0x108
	// Line 1263, Address: 0x1ed8fe0, Func Offset: 0x110
	// Func End, Address: 0x1ed8ff8, Func Offset: 0x128
}

// 
// Start address: 0x1ed9000
int ev_peepdoor_exec(sfObj* obj)
{
	int rtv;
	_anon0* info;
	_anon0* info;
	// Line 1266, Address: 0x1ed9000, Func Offset: 0
	// Line 1268, Address: 0x1ed9018, Func Offset: 0x18
	// Line 1270, Address: 0x1ed901c, Func Offset: 0x1c
	// Line 1272, Address: 0x1ed9024, Func Offset: 0x24
	// Line 1273, Address: 0x1ed904c, Func Offset: 0x4c
	// Line 1274, Address: 0x1ed9050, Func Offset: 0x50
	// Line 1275, Address: 0x1ed9058, Func Offset: 0x58
	// Line 1276, Address: 0x1ed9060, Func Offset: 0x60
	// Line 1277, Address: 0x1ed9068, Func Offset: 0x68
	// Line 1280, Address: 0x1ed9078, Func Offset: 0x78
	// Line 1283, Address: 0x1ed9080, Func Offset: 0x80
	// Line 1284, Address: 0x1ed9094, Func Offset: 0x94
	// Line 1285, Address: 0x1ed90ac, Func Offset: 0xac
	// Line 1286, Address: 0x1ed90c4, Func Offset: 0xc4
	// Line 1288, Address: 0x1ed90c8, Func Offset: 0xc8
	// Line 1290, Address: 0x1ed90d4, Func Offset: 0xd4
	// Line 1291, Address: 0x1ed90dc, Func Offset: 0xdc
	// Line 1293, Address: 0x1ed90e4, Func Offset: 0xe4
	// Line 1294, Address: 0x1ed90e8, Func Offset: 0xe8
	// Line 1295, Address: 0x1ed90f4, Func Offset: 0xf4
	// Line 1297, Address: 0x1ed9104, Func Offset: 0x104
	// Line 1299, Address: 0x1ed910c, Func Offset: 0x10c
	// Line 1300, Address: 0x1ed9110, Func Offset: 0x110
	// Line 1301, Address: 0x1ed9120, Func Offset: 0x120
	// Line 1302, Address: 0x1ed9128, Func Offset: 0x128
	// Line 1303, Address: 0x1ed9134, Func Offset: 0x134
	// Line 1304, Address: 0x1ed9138, Func Offset: 0x138
	// Line 1305, Address: 0x1ed9140, Func Offset: 0x140
	// Line 1307, Address: 0x1ed9148, Func Offset: 0x148
	// Line 1313, Address: 0x1ed9158, Func Offset: 0x158
	// Line 1311, Address: 0x1ed915c, Func Offset: 0x15c
	// Line 1320, Address: 0x1ed9160, Func Offset: 0x160
	// Line 1321, Address: 0x1ed9164, Func Offset: 0x164
	// Func End, Address: 0x1ed917c, Func Offset: 0x17c
}

// 
// Start address: 0x1ed9180
int ev_peepdoor_draw(sfObj* obj)
{
	_anon0* info;
	// Line 1324, Address: 0x1ed9180, Func Offset: 0
	// Line 1325, Address: 0x1ed9190, Func Offset: 0x10
	// Line 1329, Address: 0x1ed9198, Func Offset: 0x18
	// Line 1330, Address: 0x1ed91a0, Func Offset: 0x20
	// Line 1331, Address: 0x1ed91a8, Func Offset: 0x28
	// Line 1334, Address: 0x1ed91b0, Func Offset: 0x30
	// Line 1338, Address: 0x1ed91b8, Func Offset: 0x38
	// Line 1337, Address: 0x1ed91c0, Func Offset: 0x40
	// Line 1338, Address: 0x1ed91c4, Func Offset: 0x44
	// Func End, Address: 0x1ed91cc, Func Offset: 0x4c
}

// 
// Start address: 0x1ed91d0
int ev_peepdoor_end(sfObj* obj)
{
	_anon0* info;
	// Line 1341, Address: 0x1ed91d0, Func Offset: 0
	// Line 1344, Address: 0x1ed91dc, Func Offset: 0xc
	// Line 1347, Address: 0x1ed91ec, Func Offset: 0x1c
	// Line 1349, Address: 0x1ed91f4, Func Offset: 0x24
	// Line 1350, Address: 0x1ed91fc, Func Offset: 0x2c
	// Line 1352, Address: 0x1ed9204, Func Offset: 0x34
	// Line 1355, Address: 0x1ed9210, Func Offset: 0x40
	// Line 1356, Address: 0x1ed9218, Func Offset: 0x48
	// Line 1357, Address: 0x1ed924c, Func Offset: 0x7c
	// Line 1360, Address: 0x1ed9250, Func Offset: 0x80
	// Line 1362, Address: 0x1ed925c, Func Offset: 0x8c
	// Line 1363, Address: 0x1ed9264, Func Offset: 0x94
	// Line 1364, Address: 0x1ed926c, Func Offset: 0x9c
	// Line 1367, Address: 0x1ed9270, Func Offset: 0xa0
	// Line 1370, Address: 0x1ed9278, Func Offset: 0xa8
	// Line 1369, Address: 0x1ed927c, Func Offset: 0xac
	// Line 1370, Address: 0x1ed9280, Func Offset: 0xb0
	// Func End, Address: 0x1ed928c, Func Offset: 0xbc
}

