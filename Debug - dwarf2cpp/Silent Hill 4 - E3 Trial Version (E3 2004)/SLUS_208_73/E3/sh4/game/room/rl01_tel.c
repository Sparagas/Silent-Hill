typedef struct sgBone;
typedef struct _anon0;
typedef union _anon1;
typedef struct sfObj;
typedef struct _GAME_WORK;

typedef void(*type_10)(sfObj*);
typedef void(*type_18)(sfObj*);

typedef int type_0[1];
typedef int type_1[1];
typedef float type_2[4];
typedef int type_3[1];
typedef int type_4[1];
typedef short type_5[2];
typedef _anon1 type_6[256];
typedef unsigned short type_7[2];
typedef char type_8[4];
typedef float type_9[4];
typedef float type_11[4][4];
typedef unsigned char type_12[4];
typedef int type_13[1];
typedef float type_14[1];
typedef int type_15[1];
typedef int type_16[1];
typedef int type_17[1];
typedef float type_19[4];

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

struct _anon0
{
	void* texture_normal;
	void* texture_global;
	void* texture_semitrans;
	void* model_data;
	sgBone* parent_bone;
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

_anon0 telephone;
_GAME_WORK gamew;
_anon0 telstand;

void RL01aTelephoneModelConstruct();
void RL01aTelephoneModelDraw();
void RL01aTelephoneConstruct(sfObj* obj);
void RL01aTelephoneDestruct();
void RL01aTelephoneExec();
void RL01aTelephoneDraw();
void RL01aTelephoneStandModelConstruct();
void RL01aTelephoneStandModelDraw();

// 
// Start address: 0x1ee1ff0
void RL01aTelephoneModelConstruct()
{
	// Line 62, Address: 0x1ee1ff0, Func Offset: 0
	// Line 63, Address: 0x1ee1ff4, Func Offset: 0x4
	// Line 62, Address: 0x1ee1ff8, Func Offset: 0x8
	// Line 63, Address: 0x1ee1ffc, Func Offset: 0xc
	// Line 64, Address: 0x1ee2004, Func Offset: 0x14
	// Line 65, Address: 0x1ee2020, Func Offset: 0x30
	// Line 66, Address: 0x1ee203c, Func Offset: 0x4c
	// Line 67, Address: 0x1ee2058, Func Offset: 0x68
	// Func End, Address: 0x1ee2064, Func Offset: 0x74
}

// 
// Start address: 0x1ee2070
void RL01aTelephoneModelDraw()
{
	// Line 77, Address: 0x1ee2070, Func Offset: 0
	// Func End, Address: 0x1ee207c, Func Offset: 0xc
}

// 
// Start address: 0x1ee2080
void RL01aTelephoneConstruct(sfObj* obj)
{
	// Line 86, Address: 0x1ee2080, Func Offset: 0
	// Line 87, Address: 0x1ee2084, Func Offset: 0x4
	// Line 86, Address: 0x1ee2088, Func Offset: 0x8
	// Line 87, Address: 0x1ee208c, Func Offset: 0xc
	// Line 86, Address: 0x1ee2090, Func Offset: 0x10
	// Line 87, Address: 0x1ee2094, Func Offset: 0x14
	// Line 88, Address: 0x1ee20a0, Func Offset: 0x20
	// Line 89, Address: 0x1ee20a8, Func Offset: 0x28
	// Line 90, Address: 0x1ee20b0, Func Offset: 0x30
	// Line 93, Address: 0x1ee20b8, Func Offset: 0x38
	// Line 94, Address: 0x1ee20c0, Func Offset: 0x40
	// Func End, Address: 0x1ee20d0, Func Offset: 0x50
}

// 
// Start address: 0x1ee20d0
void RL01aTelephoneDestruct()
{
	// Line 103, Address: 0x1ee20d0, Func Offset: 0
	// Func End, Address: 0x1ee20d8, Func Offset: 0x8
}

// 
// Start address: 0x1ee20e0
void RL01aTelephoneExec()
{
	// Line 112, Address: 0x1ee20e0, Func Offset: 0
	// Func End, Address: 0x1ee20e8, Func Offset: 0x8
}

// 
// Start address: 0x1ee20f0
void RL01aTelephoneDraw()
{
	// Line 122, Address: 0x1ee20f0, Func Offset: 0
	// Func End, Address: 0x1ee20f8, Func Offset: 0x8
}

// 
// Start address: 0x1ee2100
void RL01aTelephoneStandModelConstruct()
{
	// Line 132, Address: 0x1ee2100, Func Offset: 0
	// Line 133, Address: 0x1ee2104, Func Offset: 0x4
	// Line 132, Address: 0x1ee2108, Func Offset: 0x8
	// Line 133, Address: 0x1ee210c, Func Offset: 0xc
	// Line 134, Address: 0x1ee2114, Func Offset: 0x14
	// Line 135, Address: 0x1ee2130, Func Offset: 0x30
	// Line 137, Address: 0x1ee214c, Func Offset: 0x4c
	// Func End, Address: 0x1ee2158, Func Offset: 0x58
}

// 
// Start address: 0x1ee2160
void RL01aTelephoneStandModelDraw()
{
	// Line 147, Address: 0x1ee2160, Func Offset: 0
	// Func End, Address: 0x1ee216c, Func Offset: 0xc
}

