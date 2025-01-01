typedef struct _anon0;
typedef struct _EventDriver;
typedef enum sgIKSolveResult : unsigned char;
typedef struct sfObj;
typedef struct _anon1;
typedef struct sgIKHandle;
typedef struct sgBone;
typedef struct _anon2;
typedef struct _GAME_WORK;
typedef struct sgAnime;
typedef union _anon3;
typedef struct sgSVModel;
typedef struct sfCharacter;
typedef enum sgLightType : unsigned char;
typedef struct _anon4;
typedef struct _anon5;
typedef struct EventFlag;

typedef void(*type_0)(_anon4*, int, int, float*);
typedef int(*type_4)(sfObj*);
typedef int(*type_5)(sfObj*);
typedef int(*type_7)(sfObj*);
typedef int(*type_9)(sfObj*);
typedef int(*type_10)(sfObj*);
typedef sgIKSolveResult(*type_11)();
typedef int(*type_17)(_anon0*);
typedef void(*type_23)(sgAnime*, int);
typedef void(*type_31)(sfObj*);
typedef void(*type_34)(sfObj*);

typedef unsigned char type_1[320];
typedef float type_2[4];
typedef int type_3[1];
typedef int type_6[1];
typedef float type_8[4][2];
typedef int type_12[1];
typedef _anon3 type_13[4];
typedef float type_14[4];
typedef int type_15[1];
typedef float type_16[11];
typedef int(*type_18)(_anon0*)[11];
typedef int type_19[1];
typedef int type_20[1];
typedef void* type_21[4];
typedef int type_22[1];
typedef short type_24[2];
typedef unsigned short type_25[2];
typedef _anon3 type_26[256];
typedef char type_27[4];
typedef unsigned char type_28[4];
typedef float type_29[4][4];
typedef unsigned char type_30[4];
typedef float type_32[1];
typedef int type_33[1];
typedef float type_35[4];

struct _anon0
{
	float pos[4];
	int step;
	int step_s;
	int prev_step;
	int dir;
	int timer;
	int foot_timer;
	int foot_se_no;
	float rad;
	float target_rad;
	int is_shadow_ok;
	float len;
	float y_pos;
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

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
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

struct _anon1
{
	sfCharacter chara;
	_anon2 light;
	_anon0 man;
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
	float color[4];
	float direction[4];
	float position[4];
	sgLightType type;
	float start;
	float end;
	float spot_cone_angle;
	float falloff_angle;
	int flag;
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

enum sgLightType : unsigned char
{
	SG_LIGHT_NONE,
	SG_LIGHT_AMBIENT,
	SG_LIGHT_DIRECTIONAL,
	SG_LIGHT_POINT,
	SG_LIGHT_SPOT,
	SG_LIGHT_REFRECT_DIRECTIONAL,
	SG_LIGHT_REFRECT_POINT
};

struct _anon4
{
	unsigned long tex0;
	unsigned long clamp;
};

struct _anon5
{
	void* model;
	void* texture;
	void* texture_global;
	float matrices[4][4];
	float* weights;
	float tex_crops[4];
	void(*texture_load_func)(_anon4*, int, int, float*);
	int equip_flag;
};

struct EventFlag
{
	unsigned char flag[320];
};

float probability[11];
float base_pos[4];
_GAME_WORK gamew;
EventFlag event_flag;
float sg_vector_unit_y[4];
_EventDriver ev_water0_deserted_feel;

float MzEvGetSoundAngle(float* sound_pos);
float MzEvGetSoundVolume(float* sound_pos, float max_distance);
void MzEvSoundCall(int se_no, float* sound_pos);
void se_pos_call(int se_no, float* sound_source);
float CloseToTargetAngle(float base, float target, float limit);
int is_shadow_range(_anon0* man);
void man_init(_anon0* man, int pos_no);
int man_idle(_anon0* man);
int man_around(_anon0* man);
int man_checking(_anon0* man);
int man_general(_anon0* man, int se_no);
int man_yawn(_anon0* man);
int man_move_chair(_anon0* man);
int man_clatter(_anon0* man);
int man_drop_can(_anon0* man);
int man_drop_weight(_anon0* man);
int man_drop_pen(_anon0* man);
int man_cough(_anon0* man);
int man_spit(_anon0* man);
void man_exec(_anon0* man);
void shadow_model_trans(_anon1* wk);
int ev_water0_deserted_feel_trgchk();
void light_init(_anon2* l);
void shadow_model_init(_anon1* wk);
int ev_water0_deserted_feel_init(sfObj* obj);
int ev_water0_deserted_feel_exec(sfObj* obj);
int ev_water0_deserted_feel_draw();
int ev_water0_deserted_feel_end(sfObj* obj);

// 
// Start address: 0x1ed6bd0
float MzEvGetSoundAngle(float* sound_pos)
{
	float dir_z[4];
	float dir[4];
	float c_ang;
	float angle;
	float cam_pos[4];
	// Line 213, Address: 0x1ed6bd0, Func Offset: 0
	// Line 220, Address: 0x1ed6be0, Func Offset: 0x10
	// Line 221, Address: 0x1ed6bec, Func Offset: 0x1c
	// Line 224, Address: 0x1ed6bf8, Func Offset: 0x28
	// Line 225, Address: 0x1ed6c00, Func Offset: 0x30
	// Line 226, Address: 0x1ed6c1c, Func Offset: 0x4c
	// Line 227, Address: 0x1ed6c48, Func Offset: 0x78
	// Line 229, Address: 0x1ed6c50, Func Offset: 0x80
	// Line 232, Address: 0x1ed6c54, Func Offset: 0x84
	// Line 229, Address: 0x1ed6c60, Func Offset: 0x90
	// Line 232, Address: 0x1ed6c64, Func Offset: 0x94
	// Func End, Address: 0x1ed6c6c, Func Offset: 0x9c
}

// 
// Start address: 0x1ed6c70
float MzEvGetSoundVolume(float* sound_pos, float max_distance)
{
	float cam_pos[4];
	float cam_to_sound[4];
	float dist;
	float ratio;
	// Line 236, Address: 0x1ed6c70, Func Offset: 0
	// Line 243, Address: 0x1ed6c88, Func Offset: 0x18
	// Line 244, Address: 0x1ed6c90, Func Offset: 0x20
	// Line 245, Address: 0x1ed6cac, Func Offset: 0x3c
	// Line 246, Address: 0x1ed6cd0, Func Offset: 0x60
	// Line 247, Address: 0x1ed6cec, Func Offset: 0x7c
	// Line 248, Address: 0x1ed6cf4, Func Offset: 0x84
	// Line 250, Address: 0x1ed6d00, Func Offset: 0x90
	// Line 251, Address: 0x1ed6d14, Func Offset: 0xa4
	// Line 254, Address: 0x1ed6d18, Func Offset: 0xa8
	// Func End, Address: 0x1ed6d2c, Func Offset: 0xbc
}

// 
// Start address: 0x1ed6d30
void MzEvSoundCall(int se_no, float* sound_pos)
{
	float r;
	float angle;
	float volume;
	// Line 259, Address: 0x1ed6d30, Func Offset: 0
	// Line 260, Address: 0x1ed6d34, Func Offset: 0x4
	// Line 259, Address: 0x1ed6d38, Func Offset: 0x8
	// Line 260, Address: 0x1ed6d54, Func Offset: 0x24
	// Line 261, Address: 0x1ed6d58, Func Offset: 0x28
	// Line 262, Address: 0x1ed6d64, Func Offset: 0x34
	// Line 264, Address: 0x1ed6d78, Func Offset: 0x48
	// Line 262, Address: 0x1ed6d90, Func Offset: 0x60
	// Line 264, Address: 0x1ed6d94, Func Offset: 0x64
	// Line 267, Address: 0x1ed6d9c, Func Offset: 0x6c
	// Line 268, Address: 0x1ed6db4, Func Offset: 0x84
	// Line 269, Address: 0x1ed6dc0, Func Offset: 0x90
	// Line 270, Address: 0x1ed6dcc, Func Offset: 0x9c
	// Func End, Address: 0x1ed6de8, Func Offset: 0xb8
}

// 
// Start address: 0x1ed6df0
void se_pos_call(int se_no, float* sound_source)
{
	float cam_pos[4];
	float cam_dir[4];
	float d[4];
	float a;
	float b;
	float pan;
	float vol;
	float len;
	// Line 70, Address: 0x1ed6df0, Func Offset: 0
	// Line 73, Address: 0x1ed6e04, Func Offset: 0x14
	// Line 74, Address: 0x1ed6e14, Func Offset: 0x24
	// Line 75, Address: 0x1ed6e28, Func Offset: 0x38
	// Line 77, Address: 0x1ed6e30, Func Offset: 0x40
	// Line 78, Address: 0x1ed6e3c, Func Offset: 0x4c
	// Line 79, Address: 0x1ed6e40, Func Offset: 0x50
	// Line 80, Address: 0x1ed6e44, Func Offset: 0x54
	// Line 81, Address: 0x1ed6e48, Func Offset: 0x58
	// Line 82, Address: 0x1ed6e4c, Func Offset: 0x5c
	// Func End, Address: 0x1ed6e60, Func Offset: 0x70
	// Line 273, Address: 0x1ed6df0, Func Offset: 0
	// Line 281, Address: 0x1ed6e08, Func Offset: 0x18
	// Line 282, Address: 0x1ed6e14, Func Offset: 0x24
	// Line 283, Address: 0x1ed6e1c, Func Offset: 0x2c
	// Line 284, Address: 0x1ed6e38, Func Offset: 0x48
	// Line 285, Address: 0x1ed6e44, Func Offset: 0x54
	// Line 286, Address: 0x1ed6e54, Func Offset: 0x64
	// Line 288, Address: 0x1ed6e5c, Func Offset: 0x6c
	// Line 289, Address: 0x1ed6e80, Func Offset: 0x90
	// Line 290, Address: 0x1ed6e98, Func Offset: 0xa8
	// Line 291, Address: 0x1ed6e9c, Func Offset: 0xac
	// Line 294, Address: 0x1ed6ea8, Func Offset: 0xb8
	// Line 293, Address: 0x1ed6eac, Func Offset: 0xbc
	// Line 294, Address: 0x1ed6eb0, Func Offset: 0xc0
	// Line 295, Address: 0x1ed6eb8, Func Offset: 0xc8
	// Line 294, Address: 0x1ed6ebc, Func Offset: 0xcc
	// Line 295, Address: 0x1ed6ecc, Func Offset: 0xdc
	// Line 296, Address: 0x1ed6ed8, Func Offset: 0xe8
	// Line 298, Address: 0x1ed6edc, Func Offset: 0xec
	// Line 299, Address: 0x1ed6ee0, Func Offset: 0xf0
	// Line 300, Address: 0x1ed6ef4, Func Offset: 0x104
	// Func End, Address: 0x1ed6f0c, Func Offset: 0x11c
}

// 
// Start address: 0x1ed6f10
float CloseToTargetAngle(float base, float target, float limit)
{
	float d;
	// Line 306, Address: 0x1ed6f10, Func Offset: 0
	// Line 307, Address: 0x1ed6f20, Func Offset: 0x10
	// Line 306, Address: 0x1ed6f24, Func Offset: 0x14
	// Line 307, Address: 0x1ed6f30, Func Offset: 0x20
	// Line 308, Address: 0x1ed6f38, Func Offset: 0x28
	// Line 309, Address: 0x1ed6f50, Func Offset: 0x40
	// Line 310, Address: 0x1ed6f60, Func Offset: 0x50
	// Line 312, Address: 0x1ed6f68, Func Offset: 0x58
	// Func End, Address: 0x1ed6f80, Func Offset: 0x70
	// Line 1660, Address: 0x1ed6f10, Func Offset: 0
	// Line 1661, Address: 0x1ed6f14, Func Offset: 0x4
	// Line 1660, Address: 0x1ed6f18, Func Offset: 0x8
	// Line 1661, Address: 0x1ed6f20, Func Offset: 0x10
	// Line 1662, Address: 0x1ed6f28, Func Offset: 0x18
	// Line 1663, Address: 0x1ed6f48, Func Offset: 0x38
	// Line 1664, Address: 0x1ed6f64, Func Offset: 0x54
	// Line 1665, Address: 0x1ed6f74, Func Offset: 0x64
	// Line 1666, Address: 0x1ed6f8c, Func Offset: 0x7c
	// Func End, Address: 0x1ed6f9c, Func Offset: 0x8c
}

// 
// Start address: 0x1ed6f80
int is_shadow_range(_anon0* man)
{
	int scene;
	int floor;
	int pos_no;
	float target_rad;
	// Line 325, Address: 0x1ed6f80, Func Offset: 0
	// Line 326, Address: 0x1ed6f84, Func Offset: 0x4
	// Line 325, Address: 0x1ed6f88, Func Offset: 0x8
	// Line 326, Address: 0x1ed6f90, Func Offset: 0x10
	// Line 327, Address: 0x1ed6f94, Func Offset: 0x14
	// Line 328, Address: 0x1ed6f9c, Func Offset: 0x1c
	// Line 329, Address: 0x1ed6fa8, Func Offset: 0x28
	// Line 331, Address: 0x1ed6fd4, Func Offset: 0x54
	// Line 329, Address: 0x1ed6fdc, Func Offset: 0x5c
	// Line 331, Address: 0x1ed6fe0, Func Offset: 0x60
	// Line 347, Address: 0x1ed6fe8, Func Offset: 0x68
	// Line 339, Address: 0x1ed6ff0, Func Offset: 0x70
	// Line 347, Address: 0x1ed6ff4, Func Offset: 0x74
	// Func End, Address: 0x1ed6ffc, Func Offset: 0x7c
}

// 
// Start address: 0x1ed7000
void man_init(_anon0* man, int pos_no)
{
	float rot[4];
	float pos[4];
	float rad;
	// Line 301, Address: 0x1ed7000, Func Offset: 0
	// Line 303, Address: 0x1ed7004, Func Offset: 0x4
	// Line 301, Address: 0x1ed7008, Func Offset: 0x8
	// Line 303, Address: 0x1ed700c, Func Offset: 0xc
	// Line 304, Address: 0x1ed701c, Func Offset: 0x1c
	// Line 305, Address: 0x1ed7024, Func Offset: 0x24
	// Line 308, Address: 0x1ed7030, Func Offset: 0x30
	// Line 309, Address: 0x1ed703c, Func Offset: 0x3c
	// Line 311, Address: 0x1ed7040, Func Offset: 0x40
	// Line 310, Address: 0x1ed7044, Func Offset: 0x44
	// Line 311, Address: 0x1ed7048, Func Offset: 0x48
	// Func End, Address: 0x1ed7050, Func Offset: 0x50
	// Line 355, Address: 0x1ed7000, Func Offset: 0
	// Line 351, Address: 0x1ed7004, Func Offset: 0x4
	// Line 355, Address: 0x1ed700c, Func Offset: 0xc
	// Line 351, Address: 0x1ed7014, Func Offset: 0x14
	// Line 357, Address: 0x1ed701c, Func Offset: 0x1c
	// Line 355, Address: 0x1ed7020, Func Offset: 0x20
	// Line 357, Address: 0x1ed702c, Func Offset: 0x2c
	// Line 355, Address: 0x1ed7030, Func Offset: 0x30
	// Line 357, Address: 0x1ed7044, Func Offset: 0x44
	// Line 355, Address: 0x1ed7048, Func Offset: 0x48
	// Line 351, Address: 0x1ed7050, Func Offset: 0x50
	// Line 355, Address: 0x1ed7054, Func Offset: 0x54
	// Line 357, Address: 0x1ed7058, Func Offset: 0x58
	// Line 358, Address: 0x1ed7060, Func Offset: 0x60
	// Line 359, Address: 0x1ed7074, Func Offset: 0x74
	// Line 361, Address: 0x1ed7080, Func Offset: 0x80
	// Line 363, Address: 0x1ed7094, Func Offset: 0x94
	// Line 365, Address: 0x1ed709c, Func Offset: 0x9c
	// Line 367, Address: 0x1ed70a8, Func Offset: 0xa8
	// Line 368, Address: 0x1ed70b0, Func Offset: 0xb0
	// Line 369, Address: 0x1ed70b4, Func Offset: 0xb4
	// Line 370, Address: 0x1ed70b8, Func Offset: 0xb8
	// Line 371, Address: 0x1ed70c0, Func Offset: 0xc0
	// Line 372, Address: 0x1ed70c4, Func Offset: 0xc4
	// Line 378, Address: 0x1ed70c8, Func Offset: 0xc8
	// Func End, Address: 0x1ed70dc, Func Offset: 0xdc
}

// 
// Start address: 0x1ed70e0
int man_idle(_anon0* man)
{
	int rtv;
	// Line 323, Address: 0x1ed70e0, Func Offset: 0
	// Line 324, Address: 0x1ed70ec, Func Offset: 0xc
	// Line 326, Address: 0x1ed70f0, Func Offset: 0x10
	// Line 327, Address: 0x1ed70f8, Func Offset: 0x18
	// Line 328, Address: 0x1ed7100, Func Offset: 0x20
	// Line 329, Address: 0x1ed7108, Func Offset: 0x28
	// Line 330, Address: 0x1ed7110, Func Offset: 0x30
	// Line 333, Address: 0x1ed7118, Func Offset: 0x38
	// Line 332, Address: 0x1ed711c, Func Offset: 0x3c
	// Line 333, Address: 0x1ed7120, Func Offset: 0x40
	// Func End, Address: 0x1ed712c, Func Offset: 0x4c
	// Line 382, Address: 0x1ed70e0, Func Offset: 0
	// Line 386, Address: 0x1ed70e4, Func Offset: 0x4
	// Line 382, Address: 0x1ed70e8, Func Offset: 0x8
	// Line 385, Address: 0x1ed70fc, Func Offset: 0x1c
	// Line 386, Address: 0x1ed7100, Func Offset: 0x20
	// Line 387, Address: 0x1ed711c, Func Offset: 0x3c
	// Line 388, Address: 0x1ed7120, Func Offset: 0x40
	// Line 389, Address: 0x1ed7160, Func Offset: 0x80
	// Line 391, Address: 0x1ed716c, Func Offset: 0x8c
	// Line 392, Address: 0x1ed7170, Func Offset: 0x90
	// Line 393, Address: 0x1ed7180, Func Offset: 0xa0
	// Line 396, Address: 0x1ed7184, Func Offset: 0xa4
	// Line 398, Address: 0x1ed7188, Func Offset: 0xa8
	// Line 399, Address: 0x1ed718c, Func Offset: 0xac
	// Func End, Address: 0x1ed71a4, Func Offset: 0xc4
}

// 
// Start address: 0x1ed71b0
int man_around(_anon0* man)
{
	int rtv;
	float rot[4];
	// Line 403, Address: 0x1ed71b0, Func Offset: 0
	// Line 408, Address: 0x1ed71b4, Func Offset: 0x4
	// Line 403, Address: 0x1ed71b8, Func Offset: 0x8
	// Line 407, Address: 0x1ed71cc, Func Offset: 0x1c
	// Line 408, Address: 0x1ed71d0, Func Offset: 0x20
	// Line 411, Address: 0x1ed71f8, Func Offset: 0x48
	// Line 412, Address: 0x1ed7238, Func Offset: 0x88
	// Line 413, Address: 0x1ed7264, Func Offset: 0xb4
	// Line 416, Address: 0x1ed7270, Func Offset: 0xc0
	// Line 418, Address: 0x1ed72b0, Func Offset: 0x100
	// Line 419, Address: 0x1ed72bc, Func Offset: 0x10c
	// Line 420, Address: 0x1ed72c0, Func Offset: 0x110
	// Line 421, Address: 0x1ed72c8, Func Offset: 0x118
	// Line 422, Address: 0x1ed72dc, Func Offset: 0x12c
	// Line 425, Address: 0x1ed72e0, Func Offset: 0x130
	// Line 426, Address: 0x1ed72f4, Func Offset: 0x144
	// Line 428, Address: 0x1ed7308, Func Offset: 0x158
	// Line 445, Address: 0x1ed7318, Func Offset: 0x168
	// Line 447, Address: 0x1ed7320, Func Offset: 0x170
	// Line 448, Address: 0x1ed7338, Func Offset: 0x188
	// Line 449, Address: 0x1ed734c, Func Offset: 0x19c
	// Line 450, Address: 0x1ed7364, Func Offset: 0x1b4
	// Line 451, Address: 0x1ed7368, Func Offset: 0x1b8
	// Line 452, Address: 0x1ed7390, Func Offset: 0x1e0
	// Line 455, Address: 0x1ed7394, Func Offset: 0x1e4
	// Line 457, Address: 0x1ed7398, Func Offset: 0x1e8
	// Line 459, Address: 0x1ed73c8, Func Offset: 0x218
	// Line 461, Address: 0x1ed73d0, Func Offset: 0x220
	// Line 463, Address: 0x1ed73d4, Func Offset: 0x224
	// Line 461, Address: 0x1ed73d8, Func Offset: 0x228
	// Line 464, Address: 0x1ed73e0, Func Offset: 0x230
	// Func End, Address: 0x1ed73f8, Func Offset: 0x248
}

// 
// Start address: 0x1ed7400
int man_checking(_anon0* man)
{
	int rtv;
	int scene;
	int floor;
	int pos_no;
	int rot_n;
	int interval;
	float rot[4];
	// Line 468, Address: 0x1ed7400, Func Offset: 0
	// Line 474, Address: 0x1ed7418, Func Offset: 0x18
	// Line 477, Address: 0x1ed7420, Func Offset: 0x20
	// Line 474, Address: 0x1ed7424, Func Offset: 0x24
	// Line 477, Address: 0x1ed7428, Func Offset: 0x28
	// Line 478, Address: 0x1ed742c, Func Offset: 0x2c
	// Line 480, Address: 0x1ed7460, Func Offset: 0x60
	// Line 481, Address: 0x1ed7468, Func Offset: 0x68
	// Line 483, Address: 0x1ed7470, Func Offset: 0x70
	// Line 481, Address: 0x1ed7474, Func Offset: 0x74
	// Line 483, Address: 0x1ed7478, Func Offset: 0x78
	// Line 484, Address: 0x1ed7480, Func Offset: 0x80
	// Line 487, Address: 0x1ed748c, Func Offset: 0x8c
	// Line 488, Address: 0x1ed74a4, Func Offset: 0xa4
	// Line 490, Address: 0x1ed74c8, Func Offset: 0xc8
	// Line 488, Address: 0x1ed74d0, Func Offset: 0xd0
	// Line 490, Address: 0x1ed74d4, Func Offset: 0xd4
	// Line 488, Address: 0x1ed74dc, Func Offset: 0xdc
	// Line 490, Address: 0x1ed74e0, Func Offset: 0xe0
	// Line 491, Address: 0x1ed74ec, Func Offset: 0xec
	// Line 492, Address: 0x1ed74f4, Func Offset: 0xf4
	// Line 493, Address: 0x1ed74f8, Func Offset: 0xf8
	// Line 494, Address: 0x1ed7510, Func Offset: 0x110
	// Line 495, Address: 0x1ed7524, Func Offset: 0x124
	// Line 497, Address: 0x1ed7528, Func Offset: 0x128
	// Line 499, Address: 0x1ed7560, Func Offset: 0x160
	// Line 501, Address: 0x1ed758c, Func Offset: 0x18c
	// Line 505, Address: 0x1ed7598, Func Offset: 0x198
	// Line 507, Address: 0x1ed75b0, Func Offset: 0x1b0
	// Line 508, Address: 0x1ed75c8, Func Offset: 0x1c8
	// Line 509, Address: 0x1ed75dc, Func Offset: 0x1dc
	// Line 510, Address: 0x1ed75f4, Func Offset: 0x1f4
	// Line 511, Address: 0x1ed75f8, Func Offset: 0x1f8
	// Line 512, Address: 0x1ed7620, Func Offset: 0x220
	// Line 514, Address: 0x1ed7628, Func Offset: 0x228
	// Line 516, Address: 0x1ed7630, Func Offset: 0x230
	// Line 517, Address: 0x1ed7640, Func Offset: 0x240
	// Line 518, Address: 0x1ed7654, Func Offset: 0x254
	// Line 517, Address: 0x1ed765c, Func Offset: 0x25c
	// Line 518, Address: 0x1ed7668, Func Offset: 0x268
	// Line 519, Address: 0x1ed767c, Func Offset: 0x27c
	// Line 520, Address: 0x1ed7684, Func Offset: 0x284
	// Line 521, Address: 0x1ed7688, Func Offset: 0x288
	// Line 522, Address: 0x1ed76a0, Func Offset: 0x2a0
	// Line 523, Address: 0x1ed76b4, Func Offset: 0x2b4
	// Line 524, Address: 0x1ed76b8, Func Offset: 0x2b8
	// Line 526, Address: 0x1ed76c0, Func Offset: 0x2c0
	// Line 528, Address: 0x1ed76c8, Func Offset: 0x2c8
	// Line 529, Address: 0x1ed76e0, Func Offset: 0x2e0
	// Line 530, Address: 0x1ed76f4, Func Offset: 0x2f4
	// Line 531, Address: 0x1ed770c, Func Offset: 0x30c
	// Line 532, Address: 0x1ed7710, Func Offset: 0x310
	// Line 533, Address: 0x1ed7738, Func Offset: 0x338
	// Line 536, Address: 0x1ed773c, Func Offset: 0x33c
	// Line 537, Address: 0x1ed7740, Func Offset: 0x340
	// Line 538, Address: 0x1ed7754, Func Offset: 0x354
	// Line 540, Address: 0x1ed7768, Func Offset: 0x368
	// Line 542, Address: 0x1ed778c, Func Offset: 0x38c
	// Line 543, Address: 0x1ed7794, Func Offset: 0x394
	// Line 544, Address: 0x1ed7798, Func Offset: 0x398
	// Line 546, Address: 0x1ed779c, Func Offset: 0x39c
	// Line 544, Address: 0x1ed77a0, Func Offset: 0x3a0
	// Line 547, Address: 0x1ed77a8, Func Offset: 0x3a8
	// Func End, Address: 0x1ed77c0, Func Offset: 0x3c0
}

// 
// Start address: 0x1ed77c0
int man_general(_anon0* man, int se_no)
{
	int rtv;
	// Line 551, Address: 0x1ed77c0, Func Offset: 0
	// Line 555, Address: 0x1ed77c4, Func Offset: 0x4
	// Line 551, Address: 0x1ed77c8, Func Offset: 0x8
	// Line 554, Address: 0x1ed77dc, Func Offset: 0x1c
	// Line 555, Address: 0x1ed77e0, Func Offset: 0x20
	// Line 557, Address: 0x1ed7810, Func Offset: 0x50
	// Line 558, Address: 0x1ed783c, Func Offset: 0x7c
	// Line 562, Address: 0x1ed7848, Func Offset: 0x88
	// Line 563, Address: 0x1ed7858, Func Offset: 0x98
	// Line 565, Address: 0x1ed7860, Func Offset: 0xa0
	// Line 569, Address: 0x1ed7868, Func Offset: 0xa8
	// Line 571, Address: 0x1ed7874, Func Offset: 0xb4
	// Line 572, Address: 0x1ed78b4, Func Offset: 0xf4
	// Line 575, Address: 0x1ed78c0, Func Offset: 0x100
	// Line 576, Address: 0x1ed78d0, Func Offset: 0x110
	// Line 579, Address: 0x1ed78d4, Func Offset: 0x114
	// Line 581, Address: 0x1ed78d8, Func Offset: 0x118
	// Line 582, Address: 0x1ed78dc, Func Offset: 0x11c
	// Func End, Address: 0x1ed78f4, Func Offset: 0x134
}

// 
// Start address: 0x1ed7900
int man_yawn(_anon0* man)
{
	// Line 587, Address: 0x1ed7900, Func Offset: 0
	// Func End, Address: 0x1ed7908, Func Offset: 0x8
}

// 
// Start address: 0x1ed7910
int man_move_chair(_anon0* man)
{
	// Line 593, Address: 0x1ed7910, Func Offset: 0
	// Func End, Address: 0x1ed7918, Func Offset: 0x8
}

// 
// Start address: 0x1ed7920
int man_clatter(_anon0* man)
{
	// Line 929, Address: 0x1ed7920, Func Offset: 0
	// Line 933, Address: 0x1ed7924, Func Offset: 0x4
	// Line 929, Address: 0x1ed7928, Func Offset: 0x8
	// Line 933, Address: 0x1ed792c, Func Offset: 0xc
	// Line 938, Address: 0x1ed7980, Func Offset: 0x60
	// Line 940, Address: 0x1ed7988, Func Offset: 0x68
	// Line 942, Address: 0x1ed7990, Func Offset: 0x70
	// Func End, Address: 0x1ed799c, Func Offset: 0x7c
	// Line 599, Address: 0x1ed7920, Func Offset: 0
	// Func End, Address: 0x1ed7928, Func Offset: 0x8
}

// 
// Start address: 0x1ed7930
int man_drop_can(_anon0* man)
{
	// Line 605, Address: 0x1ed7930, Func Offset: 0
	// Func End, Address: 0x1ed7938, Func Offset: 0x8
}

// 
// Start address: 0x1ed7940
int man_drop_weight(_anon0* man)
{
	// Line 611, Address: 0x1ed7940, Func Offset: 0
	// Func End, Address: 0x1ed7948, Func Offset: 0x8
}

// 
// Start address: 0x1ed7950
int man_drop_pen(_anon0* man)
{
	// Line 617, Address: 0x1ed7950, Func Offset: 0
	// Func End, Address: 0x1ed7958, Func Offset: 0x8
}

// 
// Start address: 0x1ed7960
int man_cough(_anon0* man)
{
	int rtv;
	// Line 622, Address: 0x1ed7960, Func Offset: 0
	// Line 626, Address: 0x1ed7964, Func Offset: 0x4
	// Line 622, Address: 0x1ed7968, Func Offset: 0x8
	// Line 625, Address: 0x1ed797c, Func Offset: 0x1c
	// Line 626, Address: 0x1ed7980, Func Offset: 0x20
	// Line 628, Address: 0x1ed79b0, Func Offset: 0x50
	// Line 629, Address: 0x1ed79dc, Func Offset: 0x7c
	// Line 633, Address: 0x1ed79e8, Func Offset: 0x88
	// Line 634, Address: 0x1ed79f8, Func Offset: 0x98
	// Line 636, Address: 0x1ed7a00, Func Offset: 0xa0
	// Line 640, Address: 0x1ed7a08, Func Offset: 0xa8
	// Line 641, Address: 0x1ed7a1c, Func Offset: 0xbc
	// Line 642, Address: 0x1ed7a24, Func Offset: 0xc4
	// Line 644, Address: 0x1ed7a30, Func Offset: 0xd0
	// Line 645, Address: 0x1ed7a3c, Func Offset: 0xdc
	// Line 647, Address: 0x1ed7a40, Func Offset: 0xe0
	// Line 648, Address: 0x1ed7a80, Func Offset: 0x120
	// Line 650, Address: 0x1ed7a8c, Func Offset: 0x12c
	// Line 651, Address: 0x1ed7a90, Func Offset: 0x130
	// Line 652, Address: 0x1ed7aa0, Func Offset: 0x140
	// Line 655, Address: 0x1ed7aa4, Func Offset: 0x144
	// Line 657, Address: 0x1ed7aa8, Func Offset: 0x148
	// Line 658, Address: 0x1ed7aac, Func Offset: 0x14c
	// Func End, Address: 0x1ed7ac4, Func Offset: 0x164
}

// 
// Start address: 0x1ed7ad0
int man_spit(_anon0* man)
{
	// Line 663, Address: 0x1ed7ad0, Func Offset: 0
	// Func End, Address: 0x1ed7ad8, Func Offset: 0x8
}

// 
// Start address: 0x1ed7ae0
void man_exec(_anon0* man)
{
	float ratio;
	float prob;
	int step;
	int i;
	int(*man_func)(_anon0*)[11];
	// Line 746, Address: 0x1ed7ae0, Func Offset: 0
	// Line 767, Address: 0x1ed7ae4, Func Offset: 0x4
	// Line 746, Address: 0x1ed7ae8, Func Offset: 0x8
	// Line 767, Address: 0x1ed7aec, Func Offset: 0xc
	// Line 746, Address: 0x1ed7af0, Func Offset: 0x10
	// Line 765, Address: 0x1ed7afc, Func Offset: 0x1c
	// Line 767, Address: 0x1ed7b00, Func Offset: 0x20
	// Line 768, Address: 0x1ed7b1c, Func Offset: 0x3c
	// Line 769, Address: 0x1ed7b24, Func Offset: 0x44
	// Line 770, Address: 0x1ed7b28, Func Offset: 0x48
	// Line 774, Address: 0x1ed7b34, Func Offset: 0x54
	// Line 770, Address: 0x1ed7b38, Func Offset: 0x58
	// Line 775, Address: 0x1ed7b48, Func Offset: 0x68
	// Line 777, Address: 0x1ed7b60, Func Offset: 0x80
	// Line 779, Address: 0x1ed7b7c, Func Offset: 0x9c
	// Line 784, Address: 0x1ed7b88, Func Offset: 0xa8
	// Line 785, Address: 0x1ed7b9c, Func Offset: 0xbc
	// Line 786, Address: 0x1ed7ba0, Func Offset: 0xc0
	// Line 787, Address: 0x1ed7ba8, Func Offset: 0xc8
	// Line 791, Address: 0x1ed7bac, Func Offset: 0xcc
	// Line 792, Address: 0x1ed7bb4, Func Offset: 0xd4
	// Line 793, Address: 0x1ed7bb8, Func Offset: 0xd8
	// Line 794, Address: 0x1ed7bc0, Func Offset: 0xe0
	// Line 793, Address: 0x1ed7bc8, Func Offset: 0xe8
	// Line 794, Address: 0x1ed7bcc, Func Offset: 0xec
	// Line 796, Address: 0x1ed7bd8, Func Offset: 0xf8
	// Func End, Address: 0x1ed7bf0, Func Offset: 0x110
}

// 
// Start address: 0x1ed7bf0
void shadow_model_trans(_anon1* wk)
{
	float shadow_base_pos[4];
	float pos[4];
	float rot[4];
	// Line 844, Address: 0x1ed7bf0, Func Offset: 0
	// Line 846, Address: 0x1ed7bf4, Func Offset: 0x4
	// Line 844, Address: 0x1ed7bf8, Func Offset: 0x8
	// Line 851, Address: 0x1ed7bfc, Func Offset: 0xc
	// Line 844, Address: 0x1ed7c00, Func Offset: 0x10
	// Line 846, Address: 0x1ed7c04, Func Offset: 0x14
	// Line 851, Address: 0x1ed7c14, Func Offset: 0x24
	// Line 846, Address: 0x1ed7c18, Func Offset: 0x28
	// Line 851, Address: 0x1ed7c1c, Func Offset: 0x2c
	// Line 853, Address: 0x1ed7c28, Func Offset: 0x38
	// Line 855, Address: 0x1ed7c34, Func Offset: 0x44
	// Line 856, Address: 0x1ed7c44, Func Offset: 0x54
	// Line 857, Address: 0x1ed7c50, Func Offset: 0x60
	// Func End, Address: 0x1ed7c60, Func Offset: 0x70
}

// 
// Start address: 0x1ed7c60
int ev_water0_deserted_feel_trgchk()
{
	// Line 894, Address: 0x1ed7c60, Func Offset: 0
	// Line 895, Address: 0x1ed7c64, Func Offset: 0x4
	// Line 894, Address: 0x1ed7c68, Func Offset: 0x8
	// Line 898, Address: 0x1ed7c6c, Func Offset: 0xc
	// Line 899, Address: 0x1ed7c74, Func Offset: 0x14
	// Line 898, Address: 0x1ed7c78, Func Offset: 0x18
	// Line 899, Address: 0x1ed7c80, Func Offset: 0x20
	// Func End, Address: 0x1ed7c88, Func Offset: 0x28
}

// 
// Start address: 0x1ed7c90
void light_init(_anon2* l)
{
	float col[4];
	float pos[4];
	int id;
	// Line 906, Address: 0x1ed7c90, Func Offset: 0
	// Line 907, Address: 0x1ed7c94, Func Offset: 0x4
	// Line 906, Address: 0x1ed7c98, Func Offset: 0x8
	// Line 907, Address: 0x1ed7c9c, Func Offset: 0xc
	// Line 906, Address: 0x1ed7ca0, Func Offset: 0x10
	// Line 907, Address: 0x1ed7ca4, Func Offset: 0x14
	// Line 908, Address: 0x1ed7cac, Func Offset: 0x1c
	// Line 907, Address: 0x1ed7cb8, Func Offset: 0x28
	// Line 908, Address: 0x1ed7cbc, Func Offset: 0x2c
	// Line 912, Address: 0x1ed7cc4, Func Offset: 0x34
	// Line 913, Address: 0x1ed7ccc, Func Offset: 0x3c
	// Line 915, Address: 0x1ed7cd8, Func Offset: 0x48
	// Line 916, Address: 0x1ed7cf0, Func Offset: 0x60
	// Line 930, Address: 0x1ed7cfc, Func Offset: 0x6c
	// Line 932, Address: 0x1ed7d08, Func Offset: 0x78
	// Line 933, Address: 0x1ed7d10, Func Offset: 0x80
	// Line 934, Address: 0x1ed7d28, Func Offset: 0x98
	// Func End, Address: 0x1ed7d38, Func Offset: 0xa8
}

// 
// Start address: 0x1ed7d40
void shadow_model_init(_anon1* wk)
{
	float rot[4];
	float pos[4];
	_anon0* man;
	// Line 943, Address: 0x1ed7d40, Func Offset: 0
	// Line 951, Address: 0x1ed7d44, Func Offset: 0x4
	// Line 943, Address: 0x1ed7d48, Func Offset: 0x8
	// Line 951, Address: 0x1ed7d5c, Func Offset: 0x1c
	// Line 954, Address: 0x1ed7d88, Func Offset: 0x48
	// Line 959, Address: 0x1ed7da0, Func Offset: 0x60
	// Line 960, Address: 0x1ed7db4, Func Offset: 0x74
	// Line 964, Address: 0x1ed7dc0, Func Offset: 0x80
	// Line 965, Address: 0x1ed7dc4, Func Offset: 0x84
	// Line 964, Address: 0x1ed7dc8, Func Offset: 0x88
	// Line 965, Address: 0x1ed7dcc, Func Offset: 0x8c
	// Line 962, Address: 0x1ed7dd4, Func Offset: 0x94
	// Line 965, Address: 0x1ed7dd8, Func Offset: 0x98
	// Line 966, Address: 0x1ed7de0, Func Offset: 0xa0
	// Line 967, Address: 0x1ed7e08, Func Offset: 0xc8
	// Line 968, Address: 0x1ed7e14, Func Offset: 0xd4
	// Func End, Address: 0x1ed7e2c, Func Offset: 0xec
}

// 
// Start address: 0x1ed7e30
int ev_water0_deserted_feel_init(sfObj* obj)
{
	_anon1* wk;
	int floor;
	int pos_no;
	// Line 971, Address: 0x1ed7e30, Func Offset: 0
	// Line 972, Address: 0x1ed7e34, Func Offset: 0x4
	// Line 971, Address: 0x1ed7e38, Func Offset: 0x8
	// Line 972, Address: 0x1ed7e44, Func Offset: 0x14
	// Line 973, Address: 0x1ed7e54, Func Offset: 0x24
	// Line 975, Address: 0x1ed7e5c, Func Offset: 0x2c
	// Line 976, Address: 0x1ed7e60, Func Offset: 0x30
	// Line 977, Address: 0x1ed7e68, Func Offset: 0x38
	// Line 979, Address: 0x1ed7e78, Func Offset: 0x48
	// Line 980, Address: 0x1ed7e84, Func Offset: 0x54
	// Line 984, Address: 0x1ed7e90, Func Offset: 0x60
	// Line 983, Address: 0x1ed7e98, Func Offset: 0x68
	// Line 984, Address: 0x1ed7e9c, Func Offset: 0x6c
	// Func End, Address: 0x1ed7ea8, Func Offset: 0x78
}

// 
// Start address: 0x1ed7eb0
int ev_water0_deserted_feel_exec(sfObj* obj)
{
	_anon1* wk;
	// Line 987, Address: 0x1ed7eb0, Func Offset: 0
	// Line 988, Address: 0x1ed7ec4, Func Offset: 0x14
	// Line 993, Address: 0x1ed7ecc, Func Offset: 0x1c
	// Line 994, Address: 0x1ed7eec, Func Offset: 0x3c
	// Line 995, Address: 0x1ed7ef0, Func Offset: 0x40
	// Line 997, Address: 0x1ed7ef8, Func Offset: 0x48
	// Line 1000, Address: 0x1ed7f04, Func Offset: 0x54
	// Line 1001, Address: 0x1ed7f0c, Func Offset: 0x5c
	// Line 1003, Address: 0x1ed7f14, Func Offset: 0x64
	// Line 1004, Address: 0x1ed7f18, Func Offset: 0x68
	// Line 1005, Address: 0x1ed7f20, Func Offset: 0x70
	// Line 1006, Address: 0x1ed7f3c, Func Offset: 0x8c
	// Line 1010, Address: 0x1ed7f44, Func Offset: 0x94
	// Line 1013, Address: 0x1ed7f48, Func Offset: 0x98
	// Line 1012, Address: 0x1ed7f50, Func Offset: 0xa0
	// Line 1013, Address: 0x1ed7f54, Func Offset: 0xa4
	// Func End, Address: 0x1ed7f60, Func Offset: 0xb0
}

// 
// Start address: 0x1ed7f60
int ev_water0_deserted_feel_draw()
{
	// Line 1044, Address: 0x1ed7f60, Func Offset: 0
	// Func End, Address: 0x1ed7f68, Func Offset: 0x8
	// Line 120, Address: 0x1ed7f60, Func Offset: 0
	// Line 121, Address: 0x1ed7f64, Func Offset: 0x4
	// Line 120, Address: 0x1ed7f68, Func Offset: 0x8
	// Line 121, Address: 0x1ed7f6c, Func Offset: 0xc
	// Line 123, Address: 0x1ed7f88, Func Offset: 0x28
	// Line 126, Address: 0x1ed7f90, Func Offset: 0x30
	// Line 125, Address: 0x1ed7f94, Func Offset: 0x34
	// Line 126, Address: 0x1ed7f98, Func Offset: 0x38
	// Func End, Address: 0x1ed7fa0, Func Offset: 0x40
}

// 
// Start address: 0x1ed7f70
int ev_water0_deserted_feel_end(sfObj* obj)
{
	// Line 1047, Address: 0x1ed7f70, Func Offset: 0
	// Line 1048, Address: 0x1ed7f84, Func Offset: 0x14
	// Line 1051, Address: 0x1ed7f8c, Func Offset: 0x1c
	// Line 1054, Address: 0x1ed7f94, Func Offset: 0x24
	// Line 1057, Address: 0x1ed7fa0, Func Offset: 0x30
	// Line 1059, Address: 0x1ed7fa8, Func Offset: 0x38
	// Line 1057, Address: 0x1ed7fac, Func Offset: 0x3c
	// Line 1060, Address: 0x1ed7fb8, Func Offset: 0x48
	// Func End, Address: 0x1ed7fc8, Func Offset: 0x58
}

