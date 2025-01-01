typedef union _anon0;
typedef struct sfObj;
typedef enum _cam3Step : unsigned char;
typedef struct _cam3Work;
typedef struct _GAME_WORK;

typedef void(*type_1)(sfObj*);
typedef void(*type_4)(sfObj*);
typedef void(*type_7)();
typedef void(*type_18)(sfObj*);

typedef int type_0[1];
typedef int type_2[1];
typedef int type_3[1];
typedef float type_5[4];
typedef float type_6[4][4];
typedef void(*type_8)()[2];
typedef float type_9[4];
typedef short type_10[2];
typedef int type_11[1];
typedef unsigned short type_12[2];
typedef char type_13[4];
typedef unsigned char type_14[4];
typedef int type_15[1];
typedef float type_16[1];
typedef int type_17[1];
typedef void(*type_19)(sfObj*)[3];
typedef int type_20[1];
typedef int type_21[1];
typedef _anon0 type_22[256];

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

void(*camInitFuncs)()[2];
void(*camera_main_funcs)(sfObj*)[3];
_GAME_WORK gamew;
float sg_matrix_unit[4][4];
_cam3Work cam3_work;

void _shSet1V(float* v);

// 
// Start address: 0x2723f0
void _shSet1V(float* v)
{
	// Line 2285, Address: 0x2723f0, Func Offset: 0
	// Line 2288, Address: 0x2723f4, Func Offset: 0x4
	// Line 2286, Address: 0x2723f8, Func Offset: 0x8
	// Line 2287, Address: 0x2723fc, Func Offset: 0xc
	// Line 2289, Address: 0x272400, Func Offset: 0x10
	// Func End, Address: 0x272408, Func Offset: 0x18
}

