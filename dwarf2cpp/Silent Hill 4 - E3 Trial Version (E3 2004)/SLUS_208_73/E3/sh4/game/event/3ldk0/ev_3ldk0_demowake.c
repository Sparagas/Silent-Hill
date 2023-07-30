typedef struct sfObj;
typedef struct _GAME_WORK;
typedef struct _EventDriver;
typedef union _anon0;
typedef struct EventFlag;
typedef struct _EventInst;
typedef enum _cam3Step : unsigned char;
typedef struct _cam3Work;

typedef void(*type_15)(sfObj*);
typedef int(*type_17)(sfObj*);
typedef void(*type_18)(sfObj*);
typedef int(*type_20)(sfObj*);
typedef int(*type_25)(sfObj*);
typedef int(*type_28)(sfObj*);
typedef int(*type_29)(sfObj*);
typedef int(*type_31)(sfObj*);
typedef int(*type_33)(sfObj*);
typedef int(*type_34)(sfObj*);

typedef unsigned int type_0[2];
typedef unsigned int type_1[2];
typedef unsigned int type_2[2];
typedef int type_3[1];
typedef int type_4[1];
typedef float type_5[4];
typedef unsigned int type_6[2];
typedef unsigned int type_7[2];
typedef int type_8[1];
typedef int type_9[1];
typedef _EventDriver* type_10[1];
typedef int type_11[1];
typedef unsigned int type_12[2];
typedef unsigned int type_13[2];
typedef _anon0 type_14[256];
typedef unsigned char type_16[320];
typedef unsigned int type_19[2];
typedef short type_21[2];
typedef unsigned short type_22[2];
typedef char type_23[4];
typedef unsigned char type_24[4];
typedef float type_26[1];
typedef int type_27[1];
typedef _EventDriver* type_30[9];
typedef unsigned int type_32[2];
typedef _anon0 type_35[4];
typedef int type_36[1];
typedef unsigned int type_37[2];
typedef float type_38[4];
typedef float type_39[4][4];
typedef int type_40[1];

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

struct EventFlag
{
	unsigned char flag[320];
};

struct _EventInst
{
	_EventDriver evdrv;
	unsigned int attr;
	int(*drawaf)(sfObj*);
	int(*endexitf)(sfObj*);
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

float sg_vector_unit_y[4];
_GAME_WORK gamew;
float sg_vector_zero[4];
unsigned int ev_3ldk0_rl01_063_file[2];
_EventDriver ev_3ldk0_rl01_063;
unsigned int ev_3ldk0_rl01_011_file[2];
_EventDriver ev_3ldk0_rl01_011;
unsigned int ev_3ldk0_rl01_018_file[2];
_EventDriver ev_3ldk0_rl01_018;
unsigned int ev_3ldk0_rl01_029_file[2];
_EventDriver ev_3ldk0_rl01_029;
unsigned int ev_3ldk0_rl01_106_file[2];
_EventDriver ev_3ldk0_rl01_106;
unsigned int ev_3ldk0_rl01_001_file[2];
_EventDriver ev_3ldk0_rl01_001;
unsigned int ev_3ldk0_rl01_145_file[2];
_EventDriver ev_3ldk0_rl01_145;
unsigned int ev_3ldk0_rl01_164_file[2];
_EventDriver ev_3ldk0_rl01_164;
unsigned int ev_3ldk0_rl01_221_file[2];
_EventDriver ev_3ldk0_rl01_221;
EventFlag event_flag;
unsigned int ev_wakedemo_allpurpose_01_file[2];
_EventDriver ev_wakedemo_allpurpose_01;
_EventDriver* wakedemo_exclusive[9];
_EventDriver* wakedemo_allpurpose[1];
_EventDriver ev_3ldk0_rl01_wakedemo;
_cam3Work cam3_work;

void ev_3ldk0_set_player_lookat(float rad);
void set_wakeup_startpos_at_fade(float x, float z, float angle);
int ev_wakedemo_common_init(sfObj* obj);
int ev_wakedemo_common_draw(sfObj* obj);
int ev_wakedemo_common_end();
int ev_063_init(sfObj* obj);
int ev_rl01a_demo_001_exec(sfObj* obj);
int ev_rl01a_demo_001_end(sfObj* obj);
int ev_wakedemo_allpurpose_init(sfObj* obj);
int ev_wakedemo_allpurpose_exec(sfObj* obj);
int ev_wakedemo_allpurpose_end(sfObj* obj);
_EventDriver* ev_3ldk0_rl01_wakedemo_get_evdrv();
int ev_3ldk0_rl01_wakedemo_trgchk();
int ev_3ldk0_rl01_wakedemo_init(sfObj* obj);

// 
// Start address: 0x1ee4240
void ev_3ldk0_set_player_lookat(float rad)
{
	float dir[4];
	float pos[4];
	float len;
	// Line 157, Address: 0x1ee4240, Func Offset: 0
	// Line 162, Address: 0x1ee4248, Func Offset: 0x8
	// Line 157, Address: 0x1ee424c, Func Offset: 0xc
	// Line 162, Address: 0x1ee4250, Func Offset: 0x10
	// Line 163, Address: 0x1ee4258, Func Offset: 0x18
	// Line 164, Address: 0x1ee426c, Func Offset: 0x2c
	// Line 165, Address: 0x1ee4288, Func Offset: 0x48
	// Line 166, Address: 0x1ee4290, Func Offset: 0x50
	// Func End, Address: 0x1ee42a0, Func Offset: 0x60
}

// 
// Start address: 0x1ee42a0
void set_wakeup_startpos_at_fade(float x, float z, float angle)
{
	float ppos[4];
	// Line 172, Address: 0x1ee42a0, Func Offset: 0
	// Line 200, Address: 0x1ee42a4, Func Offset: 0x4
	// Line 172, Address: 0x1ee42a8, Func Offset: 0x8
	// Line 200, Address: 0x1ee42ac, Func Offset: 0xc
	// Line 172, Address: 0x1ee42b0, Func Offset: 0x10
	// Line 200, Address: 0x1ee42c4, Func Offset: 0x24
	// Line 203, Address: 0x1ee42cc, Func Offset: 0x2c
	// Line 201, Address: 0x1ee42d0, Func Offset: 0x30
	// Line 203, Address: 0x1ee42d4, Func Offset: 0x34
	// Line 204, Address: 0x1ee42dc, Func Offset: 0x3c
	// Line 206, Address: 0x1ee42e8, Func Offset: 0x48
	// Func End, Address: 0x1ee4300, Func Offset: 0x60
}

// 
// Start address: 0x1ee4300
int ev_wakedemo_common_init(sfObj* obj)
{
	// Line 212, Address: 0x1ee4300, Func Offset: 0
	// Line 213, Address: 0x1ee4304, Func Offset: 0x4
	// Line 212, Address: 0x1ee4308, Func Offset: 0x8
	// Line 213, Address: 0x1ee430c, Func Offset: 0xc
	// Line 214, Address: 0x1ee431c, Func Offset: 0x1c
	// Line 215, Address: 0x1ee4324, Func Offset: 0x24
	// Line 217, Address: 0x1ee4330, Func Offset: 0x30
	// Line 221, Address: 0x1ee4338, Func Offset: 0x38
	// Line 223, Address: 0x1ee4340, Func Offset: 0x40
	// Line 222, Address: 0x1ee4344, Func Offset: 0x44
	// Line 223, Address: 0x1ee4348, Func Offset: 0x48
	// Func End, Address: 0x1ee4350, Func Offset: 0x50
}

// 
// Start address: 0x1ee4350
int ev_wakedemo_common_draw(sfObj* obj)
{
	// Line 229, Address: 0x1ee4350, Func Offset: 0
	// Line 231, Address: 0x1ee4354, Func Offset: 0x4
	// Line 229, Address: 0x1ee4358, Func Offset: 0x8
	// Line 231, Address: 0x1ee435c, Func Offset: 0xc
	// Line 236, Address: 0x1ee4384, Func Offset: 0x34
	// Func End, Address: 0x1ee4390, Func Offset: 0x40
}

// 
// Start address: 0x1ee4390
int ev_wakedemo_common_end()
{
	float look[4];
	float vz2[4];
	float cpos[4];
	float vz[4];
	float lookdist;
	float prot[4];
	float angle;
	int f2;
	float ppos[4];
	int f1;
	// Line 242, Address: 0x1ee4390, Func Offset: 0
	// Line 245, Address: 0x1ee4398, Func Offset: 0x8
	// Line 248, Address: 0x1ee43a0, Func Offset: 0x10
	// Line 249, Address: 0x1ee43a8, Func Offset: 0x18
	// Line 250, Address: 0x1ee43b0, Func Offset: 0x20
	// Line 270, Address: 0x1ee43b8, Func Offset: 0x28
	// Line 283, Address: 0x1ee43c8, Func Offset: 0x38
	// Line 284, Address: 0x1ee43d0, Func Offset: 0x40
	// Line 286, Address: 0x1ee43dc, Func Offset: 0x4c
	// Line 288, Address: 0x1ee43ec, Func Offset: 0x5c
	// Line 290, Address: 0x1ee4400, Func Offset: 0x70
	// Line 291, Address: 0x1ee4408, Func Offset: 0x78
	// Line 292, Address: 0x1ee4414, Func Offset: 0x84
	// Line 293, Address: 0x1ee4420, Func Offset: 0x90
	// Line 292, Address: 0x1ee4424, Func Offset: 0x94
	// Line 293, Address: 0x1ee4428, Func Offset: 0x98
	// Line 296, Address: 0x1ee4430, Func Offset: 0xa0
	// Line 297, Address: 0x1ee4440, Func Offset: 0xb0
	// Line 298, Address: 0x1ee4454, Func Offset: 0xc4
	// Line 297, Address: 0x1ee4458, Func Offset: 0xc8
	// Line 298, Address: 0x1ee445c, Func Offset: 0xcc
	// Line 299, Address: 0x1ee4464, Func Offset: 0xd4
	// Line 301, Address: 0x1ee446c, Func Offset: 0xdc
	// Line 299, Address: 0x1ee4484, Func Offset: 0xf4
	// Line 301, Address: 0x1ee448c, Func Offset: 0xfc
	// Line 302, Address: 0x1ee44a8, Func Offset: 0x118
	// Line 303, Address: 0x1ee44d4, Func Offset: 0x144
	// Line 326, Address: 0x1ee44e0, Func Offset: 0x150
	// Line 329, Address: 0x1ee44e8, Func Offset: 0x158
	// Line 330, Address: 0x1ee4514, Func Offset: 0x184
	// Line 331, Address: 0x1ee451c, Func Offset: 0x18c
	// Line 334, Address: 0x1ee4520, Func Offset: 0x190
	// Line 337, Address: 0x1ee4528, Func Offset: 0x198
	// Line 340, Address: 0x1ee4530, Func Offset: 0x1a0
	// Line 339, Address: 0x1ee4534, Func Offset: 0x1a4
	// Line 340, Address: 0x1ee4538, Func Offset: 0x1a8
	// Func End, Address: 0x1ee4540, Func Offset: 0x1b0
}

// 
// Start address: 0x1ee4540
int ev_063_init(sfObj* obj)
{
	// Line 351, Address: 0x1ee4540, Func Offset: 0
	// Line 353, Address: 0x1ee4548, Func Offset: 0x8
	// Line 351, Address: 0x1ee454c, Func Offset: 0xc
	// Line 353, Address: 0x1ee4550, Func Offset: 0x10
	// Line 354, Address: 0x1ee4558, Func Offset: 0x18
	// Line 355, Address: 0x1ee4560, Func Offset: 0x20
	// Func End, Address: 0x1ee4570, Func Offset: 0x30
}

// 
// Start address: 0x1ee4570
int ev_rl01a_demo_001_exec(sfObj* obj)
{
	// Line 458, Address: 0x1ee4570, Func Offset: 0
	// Func End, Address: 0x1ee4584, Func Offset: 0x14
}

// 
// Start address: 0x1ee4590
int ev_rl01a_demo_001_end(sfObj* obj)
{
	// Line 461, Address: 0x1ee4590, Func Offset: 0
	// Line 462, Address: 0x1ee4594, Func Offset: 0x4
	// Line 461, Address: 0x1ee4598, Func Offset: 0x8
	// Line 462, Address: 0x1ee459c, Func Offset: 0xc
	// Line 461, Address: 0x1ee45a0, Func Offset: 0x10
	// Line 462, Address: 0x1ee45a8, Func Offset: 0x18
	// Line 465, Address: 0x1ee45cc, Func Offset: 0x3c
	// Line 468, Address: 0x1ee45d4, Func Offset: 0x44
	// Line 470, Address: 0x1ee45dc, Func Offset: 0x4c
	// Line 471, Address: 0x1ee45e4, Func Offset: 0x54
	// Func End, Address: 0x1ee45f4, Func Offset: 0x64
}

// 
// Start address: 0x1ee4600
int ev_wakedemo_allpurpose_init(sfObj* obj)
{
	// Line 543, Address: 0x1ee4600, Func Offset: 0
	// Func End, Address: 0x1ee4608, Func Offset: 0x8
}

// 
// Start address: 0x1ee4610
int ev_wakedemo_allpurpose_exec(sfObj* obj)
{
	// Line 546, Address: 0x1ee4610, Func Offset: 0
	// Line 561, Address: 0x1ee4614, Func Offset: 0x4
	// Line 546, Address: 0x1ee4618, Func Offset: 0x8
	// Line 561, Address: 0x1ee4620, Func Offset: 0x10
	// Line 564, Address: 0x1ee4644, Func Offset: 0x34
	// Line 565, Address: 0x1ee4648, Func Offset: 0x38
	// Line 566, Address: 0x1ee4658, Func Offset: 0x48
	// Line 569, Address: 0x1ee4660, Func Offset: 0x50
	// Line 570, Address: 0x1ee4668, Func Offset: 0x58
	// Func End, Address: 0x1ee4678, Func Offset: 0x68
}

// 
// Start address: 0x1ee4680
int ev_wakedemo_allpurpose_end(sfObj* obj)
{
	// Line 572, Address: 0x1ee4680, Func Offset: 0
	// Line 573, Address: 0x1ee4688, Func Offset: 0x8
	// Line 581, Address: 0x1ee4690, Func Offset: 0x10
	// Line 580, Address: 0x1ee4694, Func Offset: 0x14
	// Line 581, Address: 0x1ee4698, Func Offset: 0x18
	// Func End, Address: 0x1ee46a0, Func Offset: 0x20
}

// 
// Start address: 0x1ee46a0
_EventDriver* ev_3ldk0_rl01_wakedemo_get_evdrv()
{
	int i;
	// Line 627, Address: 0x1ee46a0, Func Offset: 0
	// Line 632, Address: 0x1ee46b0, Func Offset: 0x10
	// Line 633, Address: 0x1ee46c0, Func Offset: 0x20
	// Line 634, Address: 0x1ee46e0, Func Offset: 0x40
	// Line 636, Address: 0x1ee46f8, Func Offset: 0x58
	// Line 639, Address: 0x1ee4708, Func Offset: 0x68
	// Line 640, Address: 0x1ee4710, Func Offset: 0x70
	// Line 641, Address: 0x1ee4718, Func Offset: 0x78
	// Func End, Address: 0x1ee472c, Func Offset: 0x8c
}

// 
// Start address: 0x1ee4730
int ev_3ldk0_rl01_wakedemo_trgchk()
{
	// Line 684, Address: 0x1ee4730, Func Offset: 0
	// Line 687, Address: 0x1ee4738, Func Offset: 0x8
	// Line 690, Address: 0x1ee4740, Func Offset: 0x10
	// Line 687, Address: 0x1ee4744, Func Offset: 0x14
	// Line 690, Address: 0x1ee4748, Func Offset: 0x18
	// Func End, Address: 0x1ee4750, Func Offset: 0x20
}

// 
// Start address: 0x1ee4750
int ev_3ldk0_rl01_wakedemo_init(sfObj* obj)
{
	_EventDriver* wake_evdrv;
	_EventInst* evinst;
	int(*init)(sfObj*);
	_anon0 val;
	// Line 692, Address: 0x1ee4750, Func Offset: 0
	// Line 699, Address: 0x1ee4768, Func Offset: 0x18
	// Line 702, Address: 0x1ee4774, Func Offset: 0x24
	// Line 703, Address: 0x1ee4780, Func Offset: 0x30
	// Line 704, Address: 0x1ee4794, Func Offset: 0x44
	// Line 705, Address: 0x1ee47a0, Func Offset: 0x50
	// Line 706, Address: 0x1ee47ac, Func Offset: 0x5c
	// Line 707, Address: 0x1ee47c0, Func Offset: 0x70
	// Line 708, Address: 0x1ee47d4, Func Offset: 0x84
	// Line 709, Address: 0x1ee47e8, Func Offset: 0x98
	// Line 710, Address: 0x1ee47fc, Func Offset: 0xac
	// Line 711, Address: 0x1ee480c, Func Offset: 0xbc
	// Line 714, Address: 0x1ee481c, Func Offset: 0xcc
	// Line 722, Address: 0x1ee4824, Func Offset: 0xd4
	// Line 721, Address: 0x1ee4828, Func Offset: 0xd8
	// Line 722, Address: 0x1ee482c, Func Offset: 0xdc
	// Func End, Address: 0x1ee4844, Func Offset: 0xf4
}

