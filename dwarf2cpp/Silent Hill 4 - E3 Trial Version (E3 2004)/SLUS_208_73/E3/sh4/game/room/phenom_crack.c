typedef struct _anon0;
typedef struct sfObj;
typedef enum sgIKSolveResult : unsigned char;
typedef struct sgIKHandle;
typedef struct _anon1;
typedef struct sgBone;
typedef union _anon2;
typedef struct _anon3;
typedef struct sgAnime;
typedef struct _anon4;
typedef struct sgSVModel;
typedef struct sfCharacter;
typedef struct _GAME_WORK;
typedef struct _anon5;

typedef void(*type_0)(_anon0*, int, int, float*);
typedef void(*type_3)(sfObj*);
typedef sgIKSolveResult(*type_7)();
typedef void(*type_9)(sfObj*);
typedef void(*type_11)(sfObj*);
typedef void(*type_17)(sgAnime*, int);
typedef void(*type_18)(int);
typedef void(*type_25)(sfObj*);

typedef int type_1[1];
typedef float type_2[4];
typedef _anon4 type_4[0];
typedef float type_5[4][2];
typedef float type_6[4][3];
typedef _anon2 type_8[256];
typedef float type_10[4];
typedef float type_12[4][4];
typedef int type_13[1];
typedef void* type_14[4];
typedef sfObj* type_15[30];
typedef int type_16[1];
typedef int type_19[4];
typedef short type_20[2];
typedef unsigned short type_21[2];
typedef char type_22[4];
typedef unsigned char type_23[4];
typedef int type_24[1];
typedef float type_26[1];
typedef int type_27[1];
typedef unsigned char type_28[4];
typedef float type_29[4][4];
typedef float type_30[4];
typedef int type_31[1];
typedef int type_32[1];
typedef int type_33[1];
typedef float type_34[4][4];

struct _anon0
{
	unsigned long tex0;
	unsigned long clamp;
};

struct sfObj
{
	_anon2 fwork[256];
	_anon2* work;
	void(*func)(sfObj*);
	_anon2* work_pt0;
	_anon2* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon2* sys_work;
	_anon2* scene_work;
	_anon2* event_work;
	_anon2* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
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

struct _anon1
{
	float pos0[4];
	float spot[4];
	float level;
	float damage;
	int stat;
	int timer;
	int mdl_disp;
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

union _anon2
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

struct _anon3
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

float crack_pos_list[4][4];
float crack_pop_area[4][4];
float appear_wall[4][3];
int room_to_dir[4];
float mark_pos[4];
int crack_app_flag;
_anon4 phenom_data[0];
_GAME_WORK gamew;
void(*PhenomDebugDrawFunc)(sfObj*);
void(*PhenomCrackMain)(sfObj*);

void PhenomCopyCrackMark(float sv[4]);
void PhenomCrackMain(sfObj* obj);
void PhenomCrackInit(int n);

// 
// Start address: 0x2a7a10
void PhenomCopyCrackMark(float sv[4])
{
	// Line 60, Address: 0x2a7a10, Func Offset: 0
	// Line 61, Address: 0x2a7a1c, Func Offset: 0xc
	// Func End, Address: 0x2a7a24, Func Offset: 0x14
}

// 
// Start address: 0x2a7a30
void PhenomCrackMain(sfObj* obj)
{
	_anon3* ppptr;
	_anon1* pptr;
	float level;
	float ratio;
	float dist;
	float rad;
	float attack;
	int stat;
	int room_no;
	float AllRadiusRatio;
	float CoreRadiusRatio;
	// Line 65, Address: 0x2a7a30, Func Offset: 0
	// Line 73, Address: 0x2a7a4c, Func Offset: 0x1c
	// Line 74, Address: 0x2a7a50, Func Offset: 0x20
	// Line 76, Address: 0x2a7a58, Func Offset: 0x28
	// Line 75, Address: 0x2a7a5c, Func Offset: 0x2c
	// Line 78, Address: 0x2a7a60, Func Offset: 0x30
	// Line 82, Address: 0x2a7a88, Func Offset: 0x58
	// Line 83, Address: 0x2a7aac, Func Offset: 0x7c
	// Line 84, Address: 0x2a7ab0, Func Offset: 0x80
	// Line 87, Address: 0x2a7ab8, Func Offset: 0x88
	// Line 85, Address: 0x2a7abc, Func Offset: 0x8c
	// Line 87, Address: 0x2a7ac0, Func Offset: 0x90
	// Line 85, Address: 0x2a7ac4, Func Offset: 0x94
	// Line 87, Address: 0x2a7acc, Func Offset: 0x9c
	// Line 88, Address: 0x2a7ad8, Func Offset: 0xa8
	// Line 89, Address: 0x2a7b00, Func Offset: 0xd0
	// Line 90, Address: 0x2a7b28, Func Offset: 0xf8
	// Line 91, Address: 0x2a7b44, Func Offset: 0x114
	// Line 90, Address: 0x2a7b48, Func Offset: 0x118
	// Line 91, Address: 0x2a7b4c, Func Offset: 0x11c
	// Line 90, Address: 0x2a7b50, Func Offset: 0x120
	// Line 91, Address: 0x2a7b5c, Func Offset: 0x12c
	// Line 93, Address: 0x2a7b64, Func Offset: 0x134
	// Line 101, Address: 0x2a7bac, Func Offset: 0x17c
	// Line 102, Address: 0x2a7bb4, Func Offset: 0x184
	// Line 103, Address: 0x2a7bbc, Func Offset: 0x18c
	// Line 104, Address: 0x2a7bc4, Func Offset: 0x194
	// Line 105, Address: 0x2a7bcc, Func Offset: 0x19c
	// Line 107, Address: 0x2a7bd0, Func Offset: 0x1a0
	// Line 108, Address: 0x2a7be4, Func Offset: 0x1b4
	// Line 110, Address: 0x2a7bf0, Func Offset: 0x1c0
	// Line 108, Address: 0x2a7bf4, Func Offset: 0x1c4
	// Line 110, Address: 0x2a7bf8, Func Offset: 0x1c8
	// Line 108, Address: 0x2a7bfc, Func Offset: 0x1cc
	// Line 109, Address: 0x2a7c00, Func Offset: 0x1d0
	// Line 110, Address: 0x2a7c10, Func Offset: 0x1e0
	// Line 108, Address: 0x2a7c20, Func Offset: 0x1f0
	// Line 110, Address: 0x2a7c38, Func Offset: 0x208
	// Line 109, Address: 0x2a7c48, Func Offset: 0x218
	// Line 110, Address: 0x2a7c5c, Func Offset: 0x22c
	// Line 117, Address: 0x2a7c78, Func Offset: 0x248
	// Line 118, Address: 0x2a7c80, Func Offset: 0x250
	// Line 119, Address: 0x2a7c8c, Func Offset: 0x25c
	// Line 120, Address: 0x2a7c98, Func Offset: 0x268
	// Line 121, Address: 0x2a7cac, Func Offset: 0x27c
	// Line 123, Address: 0x2a7cb8, Func Offset: 0x288
	// Line 124, Address: 0x2a7cbc, Func Offset: 0x28c
	// Line 126, Address: 0x2a7cc0, Func Offset: 0x290
	// Line 160, Address: 0x2a7ccc, Func Offset: 0x29c
	// Line 171, Address: 0x2a7cd4, Func Offset: 0x2a4
	// Line 172, Address: 0x2a7cd8, Func Offset: 0x2a8
	// Line 173, Address: 0x2a7cdc, Func Offset: 0x2ac
	// Line 174, Address: 0x2a7cec, Func Offset: 0x2bc
	// Line 176, Address: 0x2a7cfc, Func Offset: 0x2cc
	// Line 179, Address: 0x2a7d04, Func Offset: 0x2d4
	// Line 180, Address: 0x2a7d08, Func Offset: 0x2d8
	// Func End, Address: 0x2a7d24, Func Offset: 0x2f4
}

// 
// Start address: 0x2a7d30
void PhenomCrackInit(int n)
{
	_anon3* ppptr;
	sfObj* optr;
	// Line 183, Address: 0x2a7d30, Func Offset: 0
	// Line 187, Address: 0x2a7d34, Func Offset: 0x4
	// Line 183, Address: 0x2a7d38, Func Offset: 0x8
	// Line 189, Address: 0x2a7d48, Func Offset: 0x18
	// Line 190, Address: 0x2a7d54, Func Offset: 0x24
	// Line 191, Address: 0x2a7d64, Func Offset: 0x34
	// Line 193, Address: 0x2a7d74, Func Offset: 0x44
	// Line 192, Address: 0x2a7d78, Func Offset: 0x48
	// Line 193, Address: 0x2a7d7c, Func Offset: 0x4c
	// Line 195, Address: 0x2a7d98, Func Offset: 0x68
	// Line 194, Address: 0x2a7d9c, Func Offset: 0x6c
	// Line 195, Address: 0x2a7da0, Func Offset: 0x70
	// Line 196, Address: 0x2a7da8, Func Offset: 0x78
	// Line 197, Address: 0x2a7db8, Func Offset: 0x88
	// Func End, Address: 0x2a7dcc, Func Offset: 0x9c
}

