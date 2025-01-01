typedef struct _anon0;
typedef struct _anon1;
typedef enum sgIKSolveResult : unsigned char;
typedef struct sgIKHandle;
typedef struct sfObj;
typedef struct sgBone;
typedef struct _anon2;
typedef union _anon3;
typedef struct sgAnime;
typedef struct _anon4;
typedef struct sgSVModel;
typedef struct sfCharacter;
typedef struct _GAME_WORK;
typedef struct _anon5;

typedef void(*type_0)(_anon0*, int, int, float*);
typedef sgIKSolveResult(*type_5)();
typedef void(*type_7)(int);
typedef void(*type_9)(sfObj*);
typedef void(*type_11)(sfObj*);
typedef void(*type_12)(sfObj*);
typedef void(*type_17)(sgAnime*, int);
typedef void(*type_26)(sfObj*);

typedef int type_1[1];
typedef float type_2[4][4];
typedef sfObj* type_3[30];
typedef float type_4[4][2];
typedef _anon3 type_6[256];
typedef int type_8[4];
typedef float type_10[4];
typedef int type_13[1];
typedef void* type_14[4];
typedef float type_15[4][4];
typedef int type_16[1];
typedef short type_18[2];
typedef unsigned short type_19[2];
typedef char type_20[4];
typedef unsigned char type_21[4];
typedef float type_22[4];
typedef int type_23[1];
typedef float type_24[1];
typedef int type_25[1];
typedef unsigned char type_27[4];
typedef float type_28[4][4];
typedef float type_29[4];
typedef int type_30[1];
typedef int type_31[1];
typedef int type_32[1];
typedef _anon2 type_33[0];
typedef float type_34[4][3];

struct _anon0
{
	unsigned long tex0;
	unsigned long clamp;
};

struct _anon1
{
	float pos0[4];
	float power;
	float rot_y;
	int n;
	int kind;
	int timer;
	int id;
	int alpha;
	int se;
	int se_slot;
	sfCharacter chara;
	sfObj* sptr[30];
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
	void(*func)(int);
	float pos0[4];
	float spot[4];
	int para0;
	int para1;
	int rad;
	int room_no;
	int timing;
	char* name;
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

struct _anon4
{
	float pos0[4];
	float spot[4];
	float level;
	float damage;
	int stat;
	int timer;
	int mdl_disp;
};

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
};

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon5 model_work;
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

struct _anon5
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

float ghost_pos_list[4][4];
float ghost_pop_area[4][4];
float appear_wall[4][3];
int room_to_dir[4];
float mark_pos[4];
int ghost_app_flag;
_GAME_WORK gamew;
void(*PhenomDebugDrawFunc)(sfObj*);
_anon2 phenom_data[0];
void(*PhenomGhostMain)(sfObj*);

void PhenomCopyGhostMark(float sv[4]);
void PhenomGhostMain(sfObj* obj);
void PhenomGhostInit(int n);

// 
// Start address: 0x2a6790
void PhenomCopyGhostMark(float sv[4])
{
	// Line 61, Address: 0x2a6790, Func Offset: 0
	// Line 62, Address: 0x2a679c, Func Offset: 0xc
	// Func End, Address: 0x2a67a4, Func Offset: 0x14
}

// 
// Start address: 0x2a67b0
void PhenomGhostMain(sfObj* obj)
{
	_anon1* ppptr;
	_anon4* pptr;
	int level;
	int stat;
	int room_no;
	// Line 66, Address: 0x2a67b0, Func Offset: 0
	// Line 73, Address: 0x2a67d0, Func Offset: 0x20
	// Line 74, Address: 0x2a67d8, Func Offset: 0x28
	// Line 77, Address: 0x2a67dc, Func Offset: 0x2c
	// Line 80, Address: 0x2a6804, Func Offset: 0x54
	// Line 81, Address: 0x2a6808, Func Offset: 0x58
	// Line 82, Address: 0x2a682c, Func Offset: 0x7c
	// Line 83, Address: 0x2a6830, Func Offset: 0x80
	// Line 86, Address: 0x2a6840, Func Offset: 0x90
	// Line 87, Address: 0x2a6848, Func Offset: 0x98
	// Line 88, Address: 0x2a685c, Func Offset: 0xac
	// Line 89, Address: 0x2a6880, Func Offset: 0xd0
	// Line 90, Address: 0x2a68a4, Func Offset: 0xf4
	// Line 91, Address: 0x2a68b0, Func Offset: 0x100
	// Line 90, Address: 0x2a68b4, Func Offset: 0x104
	// Line 91, Address: 0x2a68b8, Func Offset: 0x108
	// Line 90, Address: 0x2a68bc, Func Offset: 0x10c
	// Line 91, Address: 0x2a68d4, Func Offset: 0x124
	// Line 92, Address: 0x2a68dc, Func Offset: 0x12c
	// Line 94, Address: 0x2a6908, Func Offset: 0x158
	// Line 95, Address: 0x2a6910, Func Offset: 0x160
	// Line 96, Address: 0x2a6918, Func Offset: 0x168
	// Line 97, Address: 0x2a6920, Func Offset: 0x170
	// Line 112, Address: 0x2a6928, Func Offset: 0x178
	// Line 113, Address: 0x2a692c, Func Offset: 0x17c
	// Line 114, Address: 0x2a693c, Func Offset: 0x18c
	// Line 115, Address: 0x2a6944, Func Offset: 0x194
	// Line 118, Address: 0x2a694c, Func Offset: 0x19c
	// Line 120, Address: 0x2a6950, Func Offset: 0x1a0
	// Func End, Address: 0x2a696c, Func Offset: 0x1bc
}

// 
// Start address: 0x2a6970
void PhenomGhostInit(int n)
{
	_anon1* ppptr;
	sfObj* optr;
	// Line 123, Address: 0x2a6970, Func Offset: 0
	// Line 127, Address: 0x2a6974, Func Offset: 0x4
	// Line 123, Address: 0x2a6978, Func Offset: 0x8
	// Line 129, Address: 0x2a6988, Func Offset: 0x18
	// Line 130, Address: 0x2a6994, Func Offset: 0x24
	// Line 131, Address: 0x2a69a4, Func Offset: 0x34
	// Line 133, Address: 0x2a69b4, Func Offset: 0x44
	// Line 132, Address: 0x2a69b8, Func Offset: 0x48
	// Line 133, Address: 0x2a69bc, Func Offset: 0x4c
	// Line 135, Address: 0x2a69d8, Func Offset: 0x68
	// Line 134, Address: 0x2a69dc, Func Offset: 0x6c
	// Line 135, Address: 0x2a69e0, Func Offset: 0x70
	// Line 136, Address: 0x2a69e8, Func Offset: 0x78
	// Line 137, Address: 0x2a69f8, Func Offset: 0x88
	// Func End, Address: 0x2a6a0c, Func Offset: 0x9c
}

