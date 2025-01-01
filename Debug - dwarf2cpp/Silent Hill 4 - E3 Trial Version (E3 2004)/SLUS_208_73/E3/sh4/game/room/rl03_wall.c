typedef struct sgBone;
typedef struct _anon0;
typedef struct sfObj;
typedef struct EventFlag;
typedef union _anon1;
typedef struct _GAME_WORK;

typedef void(*type_11)(sfObj*);
typedef void(*type_19)(sfObj*);

typedef int type_0[1];
typedef int type_1[1];
typedef unsigned char type_2[320];
typedef float type_3[4];
typedef int type_4[1];
typedef int type_5[1];
typedef short type_6[2];
typedef _anon1 type_7[256];
typedef unsigned short type_8[2];
typedef char type_9[4];
typedef float type_10[4];
typedef float type_12[4][4];
typedef unsigned char type_13[4];
typedef int type_14[1];
typedef float type_15[1];
typedef int type_16[1];
typedef int type_17[1];
typedef int type_18[1];
typedef float type_20[4];

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

struct EventFlag
{
	unsigned char flag[320];
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

_anon0 a2_wall;
_GAME_WORK gamew;
EventFlag event_flag;

void RL03A2WallConstruct(sfObj* obj);
void RL03A2WallDestruct();
void RL03A2WallExec(sfObj* obj);
void RL03A2WallDraw(sfObj* obj);

// 
// Start address: 0x1ee2170
void RL03A2WallConstruct(sfObj* obj)
{
	// Line 55, Address: 0x1ee2170, Func Offset: 0
	// Line 56, Address: 0x1ee2174, Func Offset: 0x4
	// Line 55, Address: 0x1ee2178, Func Offset: 0x8
	// Line 56, Address: 0x1ee217c, Func Offset: 0xc
	// Line 55, Address: 0x1ee2180, Func Offset: 0x10
	// Line 56, Address: 0x1ee2184, Func Offset: 0x14
	// Line 57, Address: 0x1ee2190, Func Offset: 0x20
	// Line 58, Address: 0x1ee2198, Func Offset: 0x28
	// Line 59, Address: 0x1ee21a0, Func Offset: 0x30
	// Line 62, Address: 0x1ee21a8, Func Offset: 0x38
	// Line 63, Address: 0x1ee21b4, Func Offset: 0x44
	// Line 64, Address: 0x1ee21d0, Func Offset: 0x60
	// Line 65, Address: 0x1ee21ec, Func Offset: 0x7c
	// Line 66, Address: 0x1ee2208, Func Offset: 0x98
	// Func End, Address: 0x1ee2218, Func Offset: 0xa8
}

// 
// Start address: 0x1ee2220
void RL03A2WallDestruct()
{
	// Line 75, Address: 0x1ee2220, Func Offset: 0
	// Func End, Address: 0x1ee2228, Func Offset: 0x8
}

// 
// Start address: 0x1ee2230
void RL03A2WallExec(sfObj* obj)
{
	// Line 83, Address: 0x1ee2230, Func Offset: 0
	// Line 84, Address: 0x1ee223c, Func Offset: 0xc
	// Line 85, Address: 0x1ee224c, Func Offset: 0x1c
	// Line 86, Address: 0x1ee2260, Func Offset: 0x30
	// Line 88, Address: 0x1ee2268, Func Offset: 0x38
	// Func End, Address: 0x1ee2278, Func Offset: 0x48
}

// 
// Start address: 0x1ee2280
void RL03A2WallDraw(sfObj* obj)
{
	// Line 97, Address: 0x1ee2280, Func Offset: 0
	// Line 98, Address: 0x1ee2288, Func Offset: 0x8
	// Line 101, Address: 0x1ee2298, Func Offset: 0x18
	// Line 102, Address: 0x1ee22a0, Func Offset: 0x20
	// Func End, Address: 0x1ee22ac, Func Offset: 0x2c
}

