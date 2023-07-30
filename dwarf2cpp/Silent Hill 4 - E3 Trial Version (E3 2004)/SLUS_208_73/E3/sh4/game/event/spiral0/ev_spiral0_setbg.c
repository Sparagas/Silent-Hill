typedef struct sgAnime;
typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct sfObj;
typedef union _anon3;
typedef enum sgIKSolveResult : unsigned char;
typedef struct sgIKHandle;
typedef struct _anon4;
typedef struct sgBone;
typedef struct sfCharacter;
typedef struct _GAME_WORK;
typedef struct sgSVModel;

typedef void(*type_3)(_anon0*, int, int, float*);
typedef void(*type_4)(int);
typedef void(*type_5)(sfObj*);
typedef void(*type_6)(sfObj*);
typedef void(*type_9)(sfObj*);
typedef sgIKSolveResult(*type_11)();
typedef void(*type_12)(sfObj*);
typedef void(*type_26)(sgAnime*, int);
typedef void(*type_28)(sfObj*);

typedef int type_0[1];
typedef float type_1[4][4];
typedef float type_2[4];
typedef _anon2 type_7[15];
typedef _anon3 type_8[256];
typedef float type_10[4][2];
typedef float type_13[4];
typedef int type_14[1];
typedef int type_15[1];
typedef short type_16[2];
typedef unsigned short type_17[2];
typedef char type_18[4];
typedef int type_19[1];
typedef unsigned char type_20[4];
typedef float type_21[1];
typedef int type_22[1];
typedef void* type_23[4];
typedef int type_24[1];
typedef float type_25[4];
typedef int type_27[1];
typedef int type_29[1];
typedef unsigned char type_30[4];

struct sgAnime
{
	void* play_data[4];
	sgBone* transforms;
	int n_transforms;
	sgIKHandle* ik_handles;
	sgBone* object_space;
	void(*post_func)(sgAnime*, int);
	float* reals;
	int n_reals;
	float vectors[4];
	int n_vectors;
	int current_time;
	int time_add;
	unsigned char play_status[4];
	unsigned short flag;
	unsigned short construct_check;
};

struct _anon0
{
	unsigned long tex0;
	unsigned long clamp;
};

struct _anon1
{
	void* model;
	void* texture;
	void* texture_global;
	float matrices[4][4];
	float* weights;
	float tex_crops[4];
	void(*texture_load_func)(_anon0*, int, int, float*);
	int equip_flag;
};

struct _anon2
{
	void(*func)(int);
	float pos0[4];
	float rot[4];
	int emb;
	int emt;
	int anm;
	int room_no;
};

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

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

struct sgIKHandle
{
	float acceleration[4][2];
	float damping_ratio;
	sgBone* bone;
	sgBone* start;
	sgBone* end;
	sgIKSolveResult(*solver)();
	sgIKSolveResult solve_result;
	float reach_constrain;
	float close_constrain;
	sgIKHandle* next;
};

struct _anon4
{
	float pos0[4];
	sfCharacter chara;
	int n;
	int timer;
	float h;
	float v;
	float dv;
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

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon1 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
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

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
};

_anon2 st_set_data[15];
void(*StSpiDestruct)(sfObj*);
void(*StSpiDraw)(sfObj*);
void(*StSpiMain)(sfObj*);
_GAME_WORK gamew;

void StSpiDraw(sfObj* obj);
void StSpiMain(sfObj* obj);
void StSpiDestruct(sfObj* obj);
void StSpiInit(int n);
void ST00ControlSet(sfObj* obj);

// 
// Start address: 0x2c9ab0
void StSpiDraw(sfObj* obj)
{
	// Line 313, Address: 0x2c9ab0, Func Offset: 0
	// Func End, Address: 0x2c9abc, Func Offset: 0xc
}

// 
// Start address: 0x2c9ac0
void StSpiMain(sfObj* obj)
{
	_anon4* sswptr;
	sfCharacter* chara;
	float last_pos[4];
	int n;
	// Line 350, Address: 0x2c9ac0, Func Offset: 0
	// Line 360, Address: 0x2c9ac4, Func Offset: 0x4
	// Line 350, Address: 0x2c9ac8, Func Offset: 0x8
	// Line 357, Address: 0x2c9adc, Func Offset: 0x1c
	// Line 360, Address: 0x2c9ae0, Func Offset: 0x20
	// Line 376, Address: 0x2c9b10, Func Offset: 0x50
	// Line 378, Address: 0x2c9b2c, Func Offset: 0x6c
	// Line 379, Address: 0x2c9b3c, Func Offset: 0x7c
	// Line 381, Address: 0x2c9b48, Func Offset: 0x88
	// Line 383, Address: 0x2c9b4c, Func Offset: 0x8c
	// Line 384, Address: 0x2c9b54, Func Offset: 0x94
	// Line 388, Address: 0x2c9b58, Func Offset: 0x98
	// Line 392, Address: 0x2c9b64, Func Offset: 0xa4
	// Line 393, Address: 0x2c9b6c, Func Offset: 0xac
	// Line 394, Address: 0x2c9b78, Func Offset: 0xb8
	// Line 393, Address: 0x2c9b7c, Func Offset: 0xbc
	// Line 396, Address: 0x2c9b84, Func Offset: 0xc4
	// Line 394, Address: 0x2c9b88, Func Offset: 0xc8
	// Line 395, Address: 0x2c9b8c, Func Offset: 0xcc
	// Line 396, Address: 0x2c9b90, Func Offset: 0xd0
	// Line 397, Address: 0x2c9b94, Func Offset: 0xd4
	// Line 398, Address: 0x2c9b9c, Func Offset: 0xdc
	// Line 399, Address: 0x2c9ba4, Func Offset: 0xe4
	// Line 400, Address: 0x2c9ba8, Func Offset: 0xe8
	// Line 405, Address: 0x2c9bb8, Func Offset: 0xf8
	// Line 406, Address: 0x2c9bc0, Func Offset: 0x100
	// Line 408, Address: 0x2c9bc8, Func Offset: 0x108
	// Line 410, Address: 0x2c9bd4, Func Offset: 0x114
	// Line 411, Address: 0x2c9bd8, Func Offset: 0x118
	// Line 410, Address: 0x2c9bdc, Func Offset: 0x11c
	// Line 411, Address: 0x2c9be0, Func Offset: 0x120
	// Line 410, Address: 0x2c9be8, Func Offset: 0x128
	// Line 411, Address: 0x2c9bec, Func Offset: 0x12c
	// Line 412, Address: 0x2c9c00, Func Offset: 0x140
	// Line 414, Address: 0x2c9c08, Func Offset: 0x148
	// Line 412, Address: 0x2c9c0c, Func Offset: 0x14c
	// Line 415, Address: 0x2c9c10, Func Offset: 0x150
	// Line 412, Address: 0x2c9c14, Func Offset: 0x154
	// Line 413, Address: 0x2c9c1c, Func Offset: 0x15c
	// Line 415, Address: 0x2c9c20, Func Offset: 0x160
	// Line 416, Address: 0x2c9c2c, Func Offset: 0x16c
	// Line 417, Address: 0x2c9c60, Func Offset: 0x1a0
	// Line 418, Address: 0x2c9c70, Func Offset: 0x1b0
	// Line 421, Address: 0x2c9c84, Func Offset: 0x1c4
	// Line 419, Address: 0x2c9c88, Func Offset: 0x1c8
	// Line 420, Address: 0x2c9c8c, Func Offset: 0x1cc
	// Line 422, Address: 0x2c9c90, Func Offset: 0x1d0
	// Line 421, Address: 0x2c9c94, Func Offset: 0x1d4
	// Line 423, Address: 0x2c9c98, Func Offset: 0x1d8
	// Line 427, Address: 0x2c9ca0, Func Offset: 0x1e0
	// Line 425, Address: 0x2c9ca4, Func Offset: 0x1e4
	// Line 426, Address: 0x2c9ca8, Func Offset: 0x1e8
	// Line 427, Address: 0x2c9cb0, Func Offset: 0x1f0
	// Line 428, Address: 0x2c9cb8, Func Offset: 0x1f8
	// Line 433, Address: 0x2c9cc0, Func Offset: 0x200
	// Func End, Address: 0x2c9cd8, Func Offset: 0x218
}

// 
// Start address: 0x2c9ce0
void StSpiDestruct(sfObj* obj)
{
	// Line 440, Address: 0x2c9ce0, Func Offset: 0
	// Func End, Address: 0x2c9cec, Func Offset: 0xc
}

// 
// Start address: 0x2c9cf0
void StSpiInit(int n)
{
	_anon4* sswptr;
	sfCharacter* chara;
	sfObj* optr;
	sgAnime* anm;
	int n2;
	// Line 444, Address: 0x2c9cf0, Func Offset: 0
	// Line 452, Address: 0x2c9d0c, Func Offset: 0x1c
	// Line 453, Address: 0x2c9d18, Func Offset: 0x28
	// Line 454, Address: 0x2c9d28, Func Offset: 0x38
	// Line 456, Address: 0x2c9d38, Func Offset: 0x48
	// Line 455, Address: 0x2c9d40, Func Offset: 0x50
	// Line 456, Address: 0x2c9d44, Func Offset: 0x54
	// Line 458, Address: 0x2c9d54, Func Offset: 0x64
	// Line 459, Address: 0x2c9d64, Func Offset: 0x74
	// Line 463, Address: 0x2c9d74, Func Offset: 0x84
	// Line 465, Address: 0x2c9d88, Func Offset: 0x98
	// Line 466, Address: 0x2c9d94, Func Offset: 0xa4
	// Line 475, Address: 0x2c9d98, Func Offset: 0xa8
	// Line 478, Address: 0x2c9ddc, Func Offset: 0xec
	// Line 480, Address: 0x2c9de8, Func Offset: 0xf8
	// Line 488, Address: 0x2c9e00, Func Offset: 0x110
	// Line 490, Address: 0x2c9e18, Func Offset: 0x128
	// Line 491, Address: 0x2c9e24, Func Offset: 0x134
	// Line 492, Address: 0x2c9e2c, Func Offset: 0x13c
	// Line 493, Address: 0x2c9e44, Func Offset: 0x154
	// Line 494, Address: 0x2c9e54, Func Offset: 0x164
	// Line 496, Address: 0x2c9e58, Func Offset: 0x168
	// Line 497, Address: 0x2c9e68, Func Offset: 0x178
	// Func End, Address: 0x2c9e88, Func Offset: 0x198
}

// 
// Start address: 0x2c9e90
void ST00ControlSet(sfObj* obj)
{
	int i;
	int room_no;
	// Line 500, Address: 0x2c9e90, Func Offset: 0
	// Line 504, Address: 0x2c9e94, Func Offset: 0x4
	// Line 500, Address: 0x2c9e98, Func Offset: 0x8
	// Line 506, Address: 0x2c9e9c, Func Offset: 0xc
	// Line 500, Address: 0x2c9ea0, Func Offset: 0x10
	// Line 506, Address: 0x2c9eb4, Func Offset: 0x24
	// Line 531, Address: 0x2c9ed0, Func Offset: 0x40
	// Line 532, Address: 0x2c9ee4, Func Offset: 0x54
	// Line 533, Address: 0x2c9ef0, Func Offset: 0x60
	// Line 534, Address: 0x2c9ef8, Func Offset: 0x68
	// Line 536, Address: 0x2c9f04, Func Offset: 0x74
	// Line 534, Address: 0x2c9f08, Func Offset: 0x78
	// Line 536, Address: 0x2c9f0c, Func Offset: 0x7c
	// Line 538, Address: 0x2c9f18, Func Offset: 0x88
	// Line 542, Address: 0x2c9f24, Func Offset: 0x94
	// Line 545, Address: 0x2c9f28, Func Offset: 0x98
	// Func End, Address: 0x2c9f44, Func Offset: 0xb4
}

