typedef struct sfObj;
typedef struct sgBone;
typedef struct _BathStrangeSound;
typedef union _anon0;
typedef struct _EventInst;
typedef struct _anon1;
typedef struct sgIKHandle;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef struct sgAnime;
typedef struct _anon5;
typedef struct sfCharacter;
typedef struct _anon6;
typedef enum _cam3Step : unsigned char;
typedef struct EventFlag;
typedef struct _anon7;
typedef struct _cam3Work;
typedef struct _GAME_WORK;
typedef struct _EventDriver;
typedef enum sgIKSolveResult : unsigned char;
typedef struct _anon8;
typedef struct DemoMsg;
typedef struct sgSVModel;

typedef void(*type_0)(sfObj*);
typedef sgIKSolveResult(*type_3)();
typedef void(*type_6)(sfObj*);
typedef void(*type_9)(_anon1*, int, int, float*);
typedef void(*type_11)(sgAnime*, int);
typedef void(*type_20)(sfObj*);
typedef int(*type_27)(sfObj*);
typedef int(*type_32)(sfObj*);
typedef int(*type_38)(sfObj*);
typedef int(*type_41)(sfObj*);
typedef int(*type_42)(sfObj*);
typedef int(*type_44)(sfObj*);
typedef int(*type_48)(sfObj*);

typedef _anon0 type_1[0];
typedef _anon0 type_2[4];
typedef unsigned int type_4[1];
typedef float type_5[4];
typedef float type_7[4][4];
typedef float type_8[4];
typedef void* type_10[4];
typedef unsigned int type_12[3];
typedef unsigned int type_13[3];
typedef float type_14[4];
typedef unsigned char type_15[4];
typedef int type_16[1];
typedef unsigned int type_17[2];
typedef float type_18[4];
typedef int type_19[1];
typedef unsigned int type_21[3];
typedef int type_22[1];
typedef short type_23[2];
typedef unsigned short type_24[2];
typedef int type_25[5];
typedef char type_26[4];
typedef unsigned int type_28[7];
typedef unsigned char type_29[4];
typedef int type_30[1];
typedef unsigned char type_31[320];
typedef float type_33[1];
typedef int type_34[1];
typedef float type_35[4][4];
typedef int type_36[1];
typedef _anon7 type_37[20];
typedef int type_39[1];
typedef unsigned int type_40[3];
typedef DemoMsg type_43[3];
typedef float type_45[4][2];
typedef _anon0 type_46[256];
typedef int type_47[1];

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

struct _BathStrangeSound
{
	int wait;
	int msg_idx;
	float rot_spd;
	float now_rot;
	float trg_rot;
	unsigned int belt_timer;
	unsigned int belt_col;
	float cpos[4];
	float cdir[4];
	float cquat[4];
	float tpos[4];
	float tdir[4];
	float tquat[4];
	short slerp_timer;
	short slerp_end_time;
	float slerp;
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

struct _EventInst
{
	_EventDriver evdrv;
	unsigned int attr;
	int(*drawaf)(sfObj*);
	int(*endexitf)(sfObj*);
};

struct _anon1
{
	unsigned long tex0;
	unsigned long clamp;
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

struct _anon2
{
	void* model;
	void* texture;
	void* texture_global;
	float matrices[4][4];
	float* weights;
	float tex_crops[4];
	void(*texture_load_func)(_anon1*, int, int, float*);
	int equip_flag;
};

struct _anon3
{
	int timer;
	int current_scene;
	float volume_ratio;
	int slot;
};

struct _anon4
{
	void* addr_check;
	unsigned int timer;
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

struct _anon5
{
	short timer;
};

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon2 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
};

struct _anon6
{
	_anon8 bg_rl06;
	int mapoff;
};

enum _cam3Step : unsigned char
{
	CAM3_STEP_NORMAL,
	CAM3_STEP_AUTOFOCUS,
	CAM3_STEP_RESET,
	CAM3_STEP_STOP
};

struct EventFlag
{
	unsigned char flag[320];
};

struct _anon7
{
	unsigned int id;
	int start_time;
	float pos[4];
	float vec[4];
	float size_tgt;
	float core_tgt;
	int graw_time;
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

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

struct _anon8
{
	void* texture_normal;
	void* texture_global;
	void* texture_semitrans;
	void* model_data;
	sgBone* parent_bone;
};

struct DemoMsg
{
	short msg;
	float time;
};

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
};

unsigned int ev_3ldk0_rl00_067_file[3];
float ev_3ldk0_rl00_067_pos[4];
float ev_3ldk0_rl00_067_normal[4];
_anon7 demo067_effect[20];
_GAME_WORK gamew;
void(*ev_3ldk0_rl00_067_destruct)(sfObj*);
_EventDriver ev_3ldk0_rl00_067;
_EventDriver ev_3ldk0_rl00_068;
EventFlag event_flag;
_EventDriver ev_3ldk0_UFO;
unsigned int ev_3ldk0_rl01_002_file[3];
_EventDriver ev_3ldk0_rl01_002;
float sg_vector_unit_y[4];
float sg_vector_unit_z[4];
_EventDriver ev_3ldk0_004;
unsigned int ev_3ldk0_rl02_005_file[3];
sfCharacter rl02_005_chara_pipe;
_EventDriver ev_3ldk0_rl02_005;
_EventDriver ev_3ldk0_rl00_079;
float phone_sound_source[4][4];
float phone_vol_ratio[4];
_EventDriver ev_3ldk0_rl_079_calling;
_anon0 Msg3ldk0_014_off[0];
_EventDriver ev_3ldk0_rl01_014;
unsigned int ev_3ldk0_rl02_demo53_file[2];
_EventDriver ev_3ldk0_rl02_demo53;
unsigned int ev_3ldk0_rl04a_198_file[3];
_EventDriver ev_3ldk0_rl04a_198;
unsigned int ev_3ldk0_rl00_200_file[7];
_anon6* ev200wk_pt;
_EventDriver ev_3ldk0_rl00_200;
unsigned int ev_3ldk0_rl04b_217_file[1];
_EventDriver ev_3ldk0_rl04b_217;
_cam3Work cam3_work;

void MemoryStackAlloc(sfObj* obj);
void MemoryStackSaveFree(sfObj* obj);
int ev_rl01a_demo_init(sfObj* obj);
int ev_rl01a_demo_draw(sfObj* obj);
int ev_rl01a_demo_telstand_init(sfObj* obj);
int ev_rl01a_demo_telstand_draw(sfObj* obj);
int ev_3ldk0_rl00_067_init(sfObj* obj);
int ev_3ldk0_rl00_067_exec(sfObj* obj);
int ev_3ldk0_rl00_067_draw(sfObj* obj);
void ev_3ldk0_rl00_067_destruct();
int ev_3ldk0_rl00_067_end(sfObj* obj);
int ev_3ldk0_rl00_068_movie_end(sfObj* obj);
int ev_3ldk0_004_init(sfObj* obj);
void init_camera(sfObj* obj);
int rot_camera(sfObj* obj);
int ev_3ldk0_004_exec_msg(sfObj* obj);
int ev_3ldk0_004_exec(sfObj* obj);
int ev_3ldk0_004_end(sfObj* obj);
int ev_3ldk0_rl02_005_init(sfObj* obj);
int ev_3ldk0_rl02_005_draw(sfObj* obj);
int ev_3ldk0_rl02_005_end(sfObj* obj);
int rl00_079_exec();
void telephone_call_on(sfObj* obj, int kind);
void telephone_call_update(sfObj* obj, int kind);
int rl_telephone_call_trgchk();
int rl_telephone_call_init(sfObj* obj);
int rl_telephone_call_exec(sfObj* obj);
int rl_telephone_call_end(sfObj* obj);
int rl01_014_trgchk(sfObj* obj);
int rl01_014_init(sfObj* obj);
int rl01_014_exec(sfObj* obj);
int rl01_014_destruct();
int ev_3ldk0_rl02_demo53_exec(sfObj* obj);
int ev_3ldk0_rl02_demo53_end(sfObj* obj);
int ev_3ldk0_rl04a_198_end(sfObj* obj);
int ev_3ldk0_rl00_200_init(sfObj* obj);
int ev_3ldk0_rl00_200_exec(sfObj* obj);
int ev_3ldk0_rl00_200_draw(sfObj* obj);
int ev_3ldk0_goto_passageway();
int ev_3ldk0_rl00_200_end(sfObj* obj);
int ev_3ldk0_rl04b_217_nextstage();
int ev_3ldk0_rl04b_217_end(sfObj* obj);

// 
// Start address: 0x1ee2bb0
void MemoryStackAlloc(sfObj* obj)
{
	_anon4* wk;
	// Line 138, Address: 0x1ee2bb0, Func Offset: 0
	// Line 139, Address: 0x1ee2bc0, Func Offset: 0x10
	// Line 140, Address: 0x1ee2bc8, Func Offset: 0x18
	// Line 141, Address: 0x1ee2bd8, Func Offset: 0x28
	// Line 143, Address: 0x1ee2be0, Func Offset: 0x30
	// Line 145, Address: 0x1ee2bec, Func Offset: 0x3c
	// Line 146, Address: 0x1ee2bf0, Func Offset: 0x40
	// Func End, Address: 0x1ee2c00, Func Offset: 0x50
}

// 
// Start address: 0x1ee2c00
void MemoryStackSaveFree(sfObj* obj)
{
	// Line 149, Address: 0x1ee2c00, Func Offset: 0
	// Line 150, Address: 0x1ee2c04, Func Offset: 0x4
	// Line 153, Address: 0x1ee2c18, Func Offset: 0x18
	// Line 155, Address: 0x1ee2c20, Func Offset: 0x20
	// Func End, Address: 0x1ee2c2c, Func Offset: 0x2c
}

// 
// Start address: 0x1ee2c30
int ev_rl01a_demo_init(sfObj* obj)
{
	// Line 161, Address: 0x1ee2c30, Func Offset: 0
	// Line 162, Address: 0x1ee2c3c, Func Offset: 0xc
	// Line 165, Address: 0x1ee2c44, Func Offset: 0x14
	// Line 168, Address: 0x1ee2c4c, Func Offset: 0x1c
	// Line 169, Address: 0x1ee2c54, Func Offset: 0x24
	// Func End, Address: 0x1ee2c64, Func Offset: 0x34
}

// 
// Start address: 0x1ee2c70
int ev_rl01a_demo_draw(sfObj* obj)
{
	// Line 175, Address: 0x1ee2c70, Func Offset: 0
	// Line 177, Address: 0x1ee2c7c, Func Offset: 0xc
	// Line 180, Address: 0x1ee2c84, Func Offset: 0x14
	// Line 181, Address: 0x1ee2c8c, Func Offset: 0x1c
	// Func End, Address: 0x1ee2c9c, Func Offset: 0x2c
}

// 
// Start address: 0x1ee2ca0
int ev_rl01a_demo_telstand_init(sfObj* obj)
{
	// Line 187, Address: 0x1ee2ca0, Func Offset: 0
	// Line 189, Address: 0x1ee2cac, Func Offset: 0xc
	// Line 192, Address: 0x1ee2cb4, Func Offset: 0x14
	// Line 193, Address: 0x1ee2cbc, Func Offset: 0x1c
	// Func End, Address: 0x1ee2ccc, Func Offset: 0x2c
}

// 
// Start address: 0x1ee2cd0
int ev_rl01a_demo_telstand_draw(sfObj* obj)
{
	// Line 199, Address: 0x1ee2cd0, Func Offset: 0
	// Line 201, Address: 0x1ee2cdc, Func Offset: 0xc
	// Line 204, Address: 0x1ee2ce4, Func Offset: 0x14
	// Line 205, Address: 0x1ee2cec, Func Offset: 0x1c
	// Func End, Address: 0x1ee2cfc, Func Offset: 0x2c
}

// 
// Start address: 0x1ee2d00
int ev_3ldk0_rl00_067_init(sfObj* obj)
{
	int r;
	// Line 414, Address: 0x1ee2d00, Func Offset: 0
	// Line 415, Address: 0x1ee2d10, Func Offset: 0x10
	// Line 417, Address: 0x1ee2d1c, Func Offset: 0x1c
	// Line 419, Address: 0x1ee2d24, Func Offset: 0x24
	// Line 421, Address: 0x1ee2d2c, Func Offset: 0x2c
	// Line 425, Address: 0x1ee2d50, Func Offset: 0x50
	// Line 427, Address: 0x1ee2d58, Func Offset: 0x58
	// Line 428, Address: 0x1ee2d5c, Func Offset: 0x5c
	// Func End, Address: 0x1ee2d70, Func Offset: 0x70
}

// 
// Start address: 0x1ee2d70
int ev_3ldk0_rl00_067_exec(sfObj* obj)
{
	int i;
	// Line 431, Address: 0x1ee2d70, Func Offset: 0
	// Line 435, Address: 0x1ee2d88, Func Offset: 0x18
	// Line 436, Address: 0x1ee2d98, Func Offset: 0x28
	// Line 437, Address: 0x1ee2da8, Func Offset: 0x38
	// Line 443, Address: 0x1ee2dc8, Func Offset: 0x58
	// Line 445, Address: 0x1ee2dd8, Func Offset: 0x68
	// Line 446, Address: 0x1ee2de8, Func Offset: 0x78
	// Line 448, Address: 0x1ee2e34, Func Offset: 0xc4
	// Line 453, Address: 0x1ee2e68, Func Offset: 0xf8
	// Line 455, Address: 0x1ee2e78, Func Offset: 0x108
	// Line 456, Address: 0x1ee2e90, Func Offset: 0x120
	// Func End, Address: 0x1ee2ea8, Func Offset: 0x138
}

// 
// Start address: 0x1ee2eb0
int ev_3ldk0_rl00_067_draw(sfObj* obj)
{
	// Line 460, Address: 0x1ee2eb0, Func Offset: 0
	// Func End, Address: 0x1ee2eb8, Func Offset: 0x8
}

// 
// Start address: 0x1ee2ec0
void ev_3ldk0_rl00_067_destruct()
{
	// Line 464, Address: 0x1ee2ec0, Func Offset: 0
	// Line 465, Address: 0x1ee2ec8, Func Offset: 0x8
	// Line 466, Address: 0x1ee2ed0, Func Offset: 0x10
	// Line 467, Address: 0x1ee2edc, Func Offset: 0x1c
	// Func End, Address: 0x1ee2ee8, Func Offset: 0x28
}

// 
// Start address: 0x1ee2ef0
int ev_3ldk0_rl00_067_end(sfObj* obj)
{
	int r;
	// Line 470, Address: 0x1ee2ef0, Func Offset: 0
	// Line 471, Address: 0x1ee2f00, Func Offset: 0x10
	// Line 473, Address: 0x1ee2f0c, Func Offset: 0x1c
	// Line 475, Address: 0x1ee2f14, Func Offset: 0x24
	// Line 481, Address: 0x1ee2f1c, Func Offset: 0x2c
	// Line 483, Address: 0x1ee2f24, Func Offset: 0x34
	// Line 484, Address: 0x1ee2f34, Func Offset: 0x44
	// Line 485, Address: 0x1ee2f38, Func Offset: 0x48
	// Func End, Address: 0x1ee2f4c, Func Offset: 0x5c
}

// 
// Start address: 0x1ee2f50
int ev_3ldk0_rl00_068_movie_end(sfObj* obj)
{
	// Line 502, Address: 0x1ee2f50, Func Offset: 0
	// Line 504, Address: 0x1ee2f60, Func Offset: 0x10
	// Line 508, Address: 0x1ee2f68, Func Offset: 0x18
	// Line 513, Address: 0x1ee2f70, Func Offset: 0x20
	// Line 514, Address: 0x1ee2f78, Func Offset: 0x28
	// Func End, Address: 0x1ee2f88, Func Offset: 0x38
}

// 
// Start address: 0x1ee2f90
int ev_3ldk0_004_init(sfObj* obj)
{
	_EventInst* inst;
	_BathStrangeSound* bath;
	// Line 718, Address: 0x1ee2f90, Func Offset: 0
	// Line 720, Address: 0x1ee2fa0, Func Offset: 0x10
	// Line 724, Address: 0x1ee2fac, Func Offset: 0x1c
	// Line 727, Address: 0x1ee2fb8, Func Offset: 0x28
	// Line 730, Address: 0x1ee2fc4, Func Offset: 0x34
	// Line 733, Address: 0x1ee2fcc, Func Offset: 0x3c
	// Line 736, Address: 0x1ee2fd4, Func Offset: 0x44
	// Line 738, Address: 0x1ee2fdc, Func Offset: 0x4c
	// Line 742, Address: 0x1ee2fec, Func Offset: 0x5c
	// Line 744, Address: 0x1ee3008, Func Offset: 0x78
	// Line 745, Address: 0x1ee3018, Func Offset: 0x88
	// Line 748, Address: 0x1ee3048, Func Offset: 0xb8
	// Line 750, Address: 0x1ee3054, Func Offset: 0xc4
	// Line 751, Address: 0x1ee3058, Func Offset: 0xc8
	// Line 750, Address: 0x1ee305c, Func Offset: 0xcc
	// Line 752, Address: 0x1ee3060, Func Offset: 0xd0
	// Line 750, Address: 0x1ee3064, Func Offset: 0xd4
	// Line 752, Address: 0x1ee3068, Func Offset: 0xd8
	// Line 751, Address: 0x1ee306c, Func Offset: 0xdc
	// Line 753, Address: 0x1ee3070, Func Offset: 0xe0
	// Line 756, Address: 0x1ee3078, Func Offset: 0xe8
	// Line 757, Address: 0x1ee3080, Func Offset: 0xf0
	// Line 758, Address: 0x1ee3088, Func Offset: 0xf8
	// Line 760, Address: 0x1ee3090, Func Offset: 0x100
	// Line 762, Address: 0x1ee30a4, Func Offset: 0x114
	// Line 760, Address: 0x1ee30a8, Func Offset: 0x118
	// Line 763, Address: 0x1ee30b8, Func Offset: 0x128
	// Func End, Address: 0x1ee30cc, Func Offset: 0x13c
}

// 
// Start address: 0x1ee30d0
void init_camera(sfObj* obj)
{
	_BathStrangeSound* bath;
	float m[4][4];
	float vz[4];
	float vx[4];
	float vy[4];
	// Line 766, Address: 0x1ee30d0, Func Offset: 0
	// Line 767, Address: 0x1ee30dc, Func Offset: 0xc
	// Line 774, Address: 0x1ee30e0, Func Offset: 0x10
	// Line 784, Address: 0x1ee30e8, Func Offset: 0x18
	// Line 785, Address: 0x1ee30f0, Func Offset: 0x20
	// Line 787, Address: 0x1ee30fc, Func Offset: 0x2c
	// Line 788, Address: 0x1ee311c, Func Offset: 0x4c
	// Line 789, Address: 0x1ee3148, Func Offset: 0x78
	// Line 790, Address: 0x1ee3170, Func Offset: 0xa0
	// Line 791, Address: 0x1ee319c, Func Offset: 0xcc
	// Line 792, Address: 0x1ee31c0, Func Offset: 0xf0
	// Line 793, Address: 0x1ee31d0, Func Offset: 0x100
	// Line 794, Address: 0x1ee31e0, Func Offset: 0x110
	// Line 795, Address: 0x1ee31f0, Func Offset: 0x120
	// Line 797, Address: 0x1ee31fc, Func Offset: 0x12c
	// Func End, Address: 0x1ee320c, Func Offset: 0x13c
}

// 
// Start address: 0x1ee3210
int rot_camera(sfObj* obj)
{
	_BathStrangeSound* bath;
	float quat[4];
	float dir[4];
	int ret;
	float add_slerp;
	float m[4][4];
	// Line 800, Address: 0x1ee3210, Func Offset: 0
	// Line 812, Address: 0x1ee3214, Func Offset: 0x4
	// Line 800, Address: 0x1ee3218, Func Offset: 0x8
	// Line 812, Address: 0x1ee321c, Func Offset: 0xc
	// Line 800, Address: 0x1ee3220, Func Offset: 0x10
	// Line 801, Address: 0x1ee3228, Func Offset: 0x18
	// Line 812, Address: 0x1ee322c, Func Offset: 0x1c
	// Line 811, Address: 0x1ee3234, Func Offset: 0x24
	// Line 812, Address: 0x1ee3244, Func Offset: 0x34
	// Line 811, Address: 0x1ee3248, Func Offset: 0x38
	// Line 812, Address: 0x1ee3258, Func Offset: 0x48
	// Line 813, Address: 0x1ee3260, Func Offset: 0x50
	// Line 814, Address: 0x1ee3288, Func Offset: 0x78
	// Line 815, Address: 0x1ee3294, Func Offset: 0x84
	// Line 821, Address: 0x1ee3298, Func Offset: 0x88
	// Line 820, Address: 0x1ee329c, Func Offset: 0x8c
	// Line 821, Address: 0x1ee32a0, Func Offset: 0x90
	// Line 820, Address: 0x1ee32a8, Func Offset: 0x98
	// Line 821, Address: 0x1ee32ac, Func Offset: 0x9c
	// Line 822, Address: 0x1ee32b8, Func Offset: 0xa8
	// Line 823, Address: 0x1ee32bc, Func Offset: 0xac
	// Line 825, Address: 0x1ee32c0, Func Offset: 0xb0
	// Line 826, Address: 0x1ee32d4, Func Offset: 0xc4
	// Line 834, Address: 0x1ee32e8, Func Offset: 0xd8
	// Line 835, Address: 0x1ee32f4, Func Offset: 0xe4
	// Line 838, Address: 0x1ee3300, Func Offset: 0xf0
	// Line 837, Address: 0x1ee3304, Func Offset: 0xf4
	// Line 836, Address: 0x1ee3308, Func Offset: 0xf8
	// Line 837, Address: 0x1ee330c, Func Offset: 0xfc
	// Line 836, Address: 0x1ee3310, Func Offset: 0x100
	// Line 838, Address: 0x1ee3314, Func Offset: 0x104
	// Line 843, Address: 0x1ee331c, Func Offset: 0x10c
	// Line 844, Address: 0x1ee3338, Func Offset: 0x128
	// Line 845, Address: 0x1ee333c, Func Offset: 0x12c
	// Line 848, Address: 0x1ee3340, Func Offset: 0x130
	// Func End, Address: 0x1ee3350, Func Offset: 0x140
}

// 
// Start address: 0x1ee3350
int ev_3ldk0_004_exec_msg(sfObj* obj)
{
	DemoMsg msg004[3];
	_BathStrangeSound* bath;
	// Line 851, Address: 0x1ee3350, Func Offset: 0
	// Line 856, Address: 0x1ee3354, Func Offset: 0x4
	// Line 851, Address: 0x1ee3358, Func Offset: 0x8
	// Line 856, Address: 0x1ee335c, Func Offset: 0xc
	// Line 851, Address: 0x1ee3360, Func Offset: 0x10
	// Line 856, Address: 0x1ee3364, Func Offset: 0x14
	// Line 851, Address: 0x1ee3368, Func Offset: 0x18
	// Line 872, Address: 0x1ee336c, Func Offset: 0x1c
	// Line 856, Address: 0x1ee3370, Func Offset: 0x20
	// Line 872, Address: 0x1ee3380, Func Offset: 0x30
	// Line 870, Address: 0x1ee3384, Func Offset: 0x34
	// Line 872, Address: 0x1ee3388, Func Offset: 0x38
	// Line 874, Address: 0x1ee33a0, Func Offset: 0x50
	// Line 875, Address: 0x1ee33ac, Func Offset: 0x5c
	// Line 874, Address: 0x1ee33b8, Func Offset: 0x68
	// Line 875, Address: 0x1ee33c0, Func Offset: 0x70
	// Line 876, Address: 0x1ee33c8, Func Offset: 0x78
	// Line 878, Address: 0x1ee33d0, Func Offset: 0x80
	// Line 882, Address: 0x1ee33dc, Func Offset: 0x8c
	// Line 883, Address: 0x1ee33e4, Func Offset: 0x94
	// Line 884, Address: 0x1ee33e8, Func Offset: 0x98
	// Line 885, Address: 0x1ee341c, Func Offset: 0xcc
	// Line 886, Address: 0x1ee3424, Func Offset: 0xd4
	// Line 887, Address: 0x1ee342c, Func Offset: 0xdc
	// Line 888, Address: 0x1ee3430, Func Offset: 0xe0
	// Line 889, Address: 0x1ee3440, Func Offset: 0xf0
	// Line 890, Address: 0x1ee344c, Func Offset: 0xfc
	// Line 894, Address: 0x1ee3450, Func Offset: 0x100
	// Line 895, Address: 0x1ee3458, Func Offset: 0x108
	// Func End, Address: 0x1ee346c, Func Offset: 0x11c
}

// 
// Start address: 0x1ee3470
int ev_3ldk0_004_exec(sfObj* obj)
{
	_BathStrangeSound* bath;
	int ret;
	unsigned int col;
	// Line 898, Address: 0x1ee3470, Func Offset: 0
	// Line 908, Address: 0x1ee3488, Func Offset: 0x18
	// Line 905, Address: 0x1ee348c, Func Offset: 0x1c
	// Line 908, Address: 0x1ee3490, Func Offset: 0x20
	// Line 911, Address: 0x1ee34b8, Func Offset: 0x48
	// Line 912, Address: 0x1ee34c8, Func Offset: 0x58
	// Line 914, Address: 0x1ee34d0, Func Offset: 0x60
	// Line 917, Address: 0x1ee34d8, Func Offset: 0x68
	// Line 918, Address: 0x1ee34e8, Func Offset: 0x78
	// Line 920, Address: 0x1ee34f0, Func Offset: 0x80
	// Line 923, Address: 0x1ee34f8, Func Offset: 0x88
	// Line 924, Address: 0x1ee3520, Func Offset: 0xb0
	// Line 925, Address: 0x1ee3544, Func Offset: 0xd4
	// Line 926, Address: 0x1ee354c, Func Offset: 0xdc
	// Line 928, Address: 0x1ee3554, Func Offset: 0xe4
	// Line 929, Address: 0x1ee3558, Func Offset: 0xe8
	// Line 930, Address: 0x1ee3568, Func Offset: 0xf8
	// Line 932, Address: 0x1ee3570, Func Offset: 0x100
	// Line 935, Address: 0x1ee3578, Func Offset: 0x108
	// Line 936, Address: 0x1ee3580, Func Offset: 0x110
	// Line 937, Address: 0x1ee3588, Func Offset: 0x118
	// Line 938, Address: 0x1ee3590, Func Offset: 0x120
	// Line 939, Address: 0x1ee3598, Func Offset: 0x128
	// Line 941, Address: 0x1ee35a0, Func Offset: 0x130
	// Line 942, Address: 0x1ee35a8, Func Offset: 0x138
	// Line 943, Address: 0x1ee3650, Func Offset: 0x1e0
	// Line 944, Address: 0x1ee365c, Func Offset: 0x1ec
	// Line 946, Address: 0x1ee3660, Func Offset: 0x1f0
	// Line 947, Address: 0x1ee3668, Func Offset: 0x1f8
	// Line 948, Address: 0x1ee3670, Func Offset: 0x200
	// Line 949, Address: 0x1ee3678, Func Offset: 0x208
	// Line 950, Address: 0x1ee3688, Func Offset: 0x218
	// Line 951, Address: 0x1ee3694, Func Offset: 0x224
	// Line 953, Address: 0x1ee369c, Func Offset: 0x22c
	// Line 955, Address: 0x1ee36a4, Func Offset: 0x234
	// Line 956, Address: 0x1ee36a8, Func Offset: 0x238
	// Line 959, Address: 0x1ee36b8, Func Offset: 0x248
	// Line 960, Address: 0x1ee36c0, Func Offset: 0x250
	// Line 962, Address: 0x1ee36c8, Func Offset: 0x258
	// Line 965, Address: 0x1ee36d0, Func Offset: 0x260
	// Line 966, Address: 0x1ee36e0, Func Offset: 0x270
	// Line 967, Address: 0x1ee36ec, Func Offset: 0x27c
	// Line 969, Address: 0x1ee36f4, Func Offset: 0x284
	// Line 971, Address: 0x1ee36fc, Func Offset: 0x28c
	// Line 972, Address: 0x1ee3700, Func Offset: 0x290
	// Line 973, Address: 0x1ee3710, Func Offset: 0x2a0
	// Line 975, Address: 0x1ee3718, Func Offset: 0x2a8
	// Line 978, Address: 0x1ee3720, Func Offset: 0x2b0
	// Line 979, Address: 0x1ee3730, Func Offset: 0x2c0
	// Line 980, Address: 0x1ee3734, Func Offset: 0x2c4
	// Line 982, Address: 0x1ee373c, Func Offset: 0x2cc
	// Line 984, Address: 0x1ee3744, Func Offset: 0x2d4
	// Line 985, Address: 0x1ee3748, Func Offset: 0x2d8
	// Line 986, Address: 0x1ee3750, Func Offset: 0x2e0
	// Line 987, Address: 0x1ee37f8, Func Offset: 0x388
	// Line 988, Address: 0x1ee3804, Func Offset: 0x394
	// Line 990, Address: 0x1ee3808, Func Offset: 0x398
	// Line 991, Address: 0x1ee3818, Func Offset: 0x3a8
	// Line 992, Address: 0x1ee3820, Func Offset: 0x3b0
	// Line 993, Address: 0x1ee3828, Func Offset: 0x3b8
	// Line 994, Address: 0x1ee3834, Func Offset: 0x3c4
	// Line 995, Address: 0x1ee3850, Func Offset: 0x3e0
	// Line 997, Address: 0x1ee3858, Func Offset: 0x3e8
	// Line 999, Address: 0x1ee3860, Func Offset: 0x3f0
	// Line 1000, Address: 0x1ee3868, Func Offset: 0x3f8
	// Line 1002, Address: 0x1ee386c, Func Offset: 0x3fc
	// Line 1004, Address: 0x1ee3870, Func Offset: 0x400
	// Line 1005, Address: 0x1ee3878, Func Offset: 0x408
	// Line 1006, Address: 0x1ee387c, Func Offset: 0x40c
	// Func End, Address: 0x1ee3894, Func Offset: 0x424
}

// 
// Start address: 0x1ee38a0
int ev_3ldk0_004_end(sfObj* obj)
{
	_BathStrangeSound* bath;
	// Line 1009, Address: 0x1ee38a0, Func Offset: 0
	// Line 1013, Address: 0x1ee38a4, Func Offset: 0x4
	// Line 1009, Address: 0x1ee38a8, Func Offset: 0x8
	// Line 1010, Address: 0x1ee38b0, Func Offset: 0x10
	// Line 1016, Address: 0x1ee38b4, Func Offset: 0x14
	// Line 1019, Address: 0x1ee38bc, Func Offset: 0x1c
	// Line 1022, Address: 0x1ee38c4, Func Offset: 0x24
	// Line 1021, Address: 0x1ee38c8, Func Offset: 0x28
	// Line 1022, Address: 0x1ee38cc, Func Offset: 0x2c
	// Func End, Address: 0x1ee38d8, Func Offset: 0x38
}

// 
// Start address: 0x1ee38e0
int ev_3ldk0_rl02_005_init(sfObj* obj)
{
	float pos[4];
	float quat[4];
	// Line 1048, Address: 0x1ee38e0, Func Offset: 0
	// Line 1053, Address: 0x1ee38e4, Func Offset: 0x4
	// Line 1048, Address: 0x1ee38e8, Func Offset: 0x8
	// Line 1053, Address: 0x1ee38ec, Func Offset: 0xc
	// Line 1048, Address: 0x1ee38f0, Func Offset: 0x10
	// Line 1052, Address: 0x1ee38f4, Func Offset: 0x14
	// Line 1048, Address: 0x1ee38f8, Func Offset: 0x18
	// Line 1053, Address: 0x1ee38fc, Func Offset: 0x1c
	// Line 1052, Address: 0x1ee3904, Func Offset: 0x24
	// Line 1054, Address: 0x1ee3908, Func Offset: 0x28
	// Line 1055, Address: 0x1ee3910, Func Offset: 0x30
	// Line 1054, Address: 0x1ee3914, Func Offset: 0x34
	// Line 1055, Address: 0x1ee3918, Func Offset: 0x38
	// Line 1056, Address: 0x1ee3920, Func Offset: 0x40
	// Line 1057, Address: 0x1ee3928, Func Offset: 0x48
	// Line 1056, Address: 0x1ee392c, Func Offset: 0x4c
	// Line 1057, Address: 0x1ee3930, Func Offset: 0x50
	// Line 1058, Address: 0x1ee3938, Func Offset: 0x58
	// Line 1061, Address: 0x1ee3940, Func Offset: 0x60
	// Line 1058, Address: 0x1ee3944, Func Offset: 0x64
	// Line 1061, Address: 0x1ee3948, Func Offset: 0x68
	// Line 1062, Address: 0x1ee3974, Func Offset: 0x94
	// Line 1063, Address: 0x1ee3984, Func Offset: 0xa4
	// Line 1066, Address: 0x1ee3994, Func Offset: 0xb4
	// Line 1067, Address: 0x1ee399c, Func Offset: 0xbc
	// Func End, Address: 0x1ee39b0, Func Offset: 0xd0
}

// 
// Start address: 0x1ee39b0
int ev_3ldk0_rl02_005_draw(sfObj* obj)
{
	// Line 1070, Address: 0x1ee39b0, Func Offset: 0
	// Line 1072, Address: 0x1ee39bc, Func Offset: 0xc
	// Line 1073, Address: 0x1ee39d0, Func Offset: 0x20
	// Line 1077, Address: 0x1ee39d8, Func Offset: 0x28
	// Line 1078, Address: 0x1ee39e0, Func Offset: 0x30
	// Func End, Address: 0x1ee39f0, Func Offset: 0x40
}

// 
// Start address: 0x1ee39f0
int ev_3ldk0_rl02_005_end(sfObj* obj)
{
	// Line 1081, Address: 0x1ee39f0, Func Offset: 0
	// Line 1083, Address: 0x1ee3a00, Func Offset: 0x10
	// Line 1089, Address: 0x1ee3a0c, Func Offset: 0x1c
	// Line 1093, Address: 0x1ee3a20, Func Offset: 0x30
	// Line 1094, Address: 0x1ee3a28, Func Offset: 0x38
	// Func End, Address: 0x1ee3a38, Func Offset: 0x48
}

// 
// Start address: 0x1ee3a40
int rl00_079_exec()
{
	int rtv;
	// Line 1121, Address: 0x1ee3a40, Func Offset: 0
	// Line 1123, Address: 0x1ee3a54, Func Offset: 0x14
	// Line 1124, Address: 0x1ee3a5c, Func Offset: 0x1c
	// Line 1123, Address: 0x1ee3a60, Func Offset: 0x20
	// Line 1125, Address: 0x1ee3a64, Func Offset: 0x24
	// Line 1128, Address: 0x1ee3a68, Func Offset: 0x28
	// Func End, Address: 0x1ee3a70, Func Offset: 0x30
}

// 
// Start address: 0x1ee3a70
void telephone_call_on(sfObj* obj, int kind)
{
	_anon3* c;
	// Line 1165, Address: 0x1ee3a70, Func Offset: 0
	// Line 1168, Address: 0x1ee3a74, Func Offset: 0x4
	// Line 1165, Address: 0x1ee3a78, Func Offset: 0x8
	// Line 1168, Address: 0x1ee3a7c, Func Offset: 0xc
	// Line 1165, Address: 0x1ee3a84, Func Offset: 0x14
	// Line 1168, Address: 0x1ee3a88, Func Offset: 0x18
	// Line 1166, Address: 0x1ee3a8c, Func Offset: 0x1c
	// Line 1168, Address: 0x1ee3a90, Func Offset: 0x20
	// Line 1170, Address: 0x1ee3a94, Func Offset: 0x24
	// Line 1168, Address: 0x1ee3abc, Func Offset: 0x4c
	// Line 1170, Address: 0x1ee3ac0, Func Offset: 0x50
	// Line 1173, Address: 0x1ee3acc, Func Offset: 0x5c
	// Func End, Address: 0x1ee3adc, Func Offset: 0x6c
}

// 
// Start address: 0x1ee3ae0
void telephone_call_update(sfObj* obj, int kind)
{
	_anon3* c;
	// Line 1198, Address: 0x1ee3ae0, Func Offset: 0
	// Line 1196, Address: 0x1ee3ae4, Func Offset: 0x4
	// Line 1198, Address: 0x1ee3ae8, Func Offset: 0x8
	// Line 1203, Address: 0x1ee3af4, Func Offset: 0x14
	// Line 1198, Address: 0x1ee3af8, Func Offset: 0x18
	// Line 1203, Address: 0x1ee3afc, Func Offset: 0x1c
	// Line 1198, Address: 0x1ee3b08, Func Offset: 0x28
	// Line 1203, Address: 0x1ee3b0c, Func Offset: 0x2c
	// Func End, Address: 0x1ee3b30, Func Offset: 0x50
}

// 
// Start address: 0x1ee3b30
int rl_telephone_call_trgchk()
{
	int rtv;
	// Line 1208, Address: 0x1ee3b30, Func Offset: 0
	// Line 1217, Address: 0x1ee3b38, Func Offset: 0x8
	// Line 1219, Address: 0x1ee3b50, Func Offset: 0x20
	// Line 1220, Address: 0x1ee3b54, Func Offset: 0x24
	// Line 1223, Address: 0x1ee3b58, Func Offset: 0x28
	// Func End, Address: 0x1ee3b60, Func Offset: 0x30
}

// 
// Start address: 0x1ee3b60
int rl_telephone_call_init(sfObj* obj)
{
	// Line 1226, Address: 0x1ee3b60, Func Offset: 0
	// Line 1227, Address: 0x1ee3b64, Func Offset: 0x4
	// Line 1226, Address: 0x1ee3b68, Func Offset: 0x8
	// Line 1227, Address: 0x1ee3b70, Func Offset: 0x10
	// Line 1228, Address: 0x1ee3b80, Func Offset: 0x20
	// Line 1232, Address: 0x1ee3b88, Func Offset: 0x28
	// Line 1235, Address: 0x1ee3b94, Func Offset: 0x34
	// Line 1237, Address: 0x1ee3b9c, Func Offset: 0x3c
	// Line 1235, Address: 0x1ee3ba0, Func Offset: 0x40
	// Line 1237, Address: 0x1ee3bac, Func Offset: 0x4c
	// Line 1238, Address: 0x1ee3bb0, Func Offset: 0x50
	// Func End, Address: 0x1ee3bc0, Func Offset: 0x60
}

// 
// Start address: 0x1ee3bc0
int rl_telephone_call_exec(sfObj* obj)
{
	_anon3* c;
	// Line 1241, Address: 0x1ee3bc0, Func Offset: 0
	// Line 1243, Address: 0x1ee3bd4, Func Offset: 0x14
	// Line 1245, Address: 0x1ee3bd8, Func Offset: 0x18
	// Line 1246, Address: 0x1ee3be0, Func Offset: 0x20
	// Line 1247, Address: 0x1ee3be4, Func Offset: 0x24
	// Line 1249, Address: 0x1ee3be8, Func Offset: 0x28
	// Line 1251, Address: 0x1ee3c10, Func Offset: 0x50
	// Line 1252, Address: 0x1ee3c18, Func Offset: 0x58
	// Line 1253, Address: 0x1ee3c1c, Func Offset: 0x5c
	// Line 1255, Address: 0x1ee3c28, Func Offset: 0x68
	// Line 1257, Address: 0x1ee3c34, Func Offset: 0x74
	// Line 1259, Address: 0x1ee3c38, Func Offset: 0x78
	// Line 1260, Address: 0x1ee3c40, Func Offset: 0x80
	// Line 1262, Address: 0x1ee3c5c, Func Offset: 0x9c
	// Line 1263, Address: 0x1ee3c70, Func Offset: 0xb0
	// Line 1264, Address: 0x1ee3c7c, Func Offset: 0xbc
	// Line 1268, Address: 0x1ee3c84, Func Offset: 0xc4
	// Line 1270, Address: 0x1ee3c8c, Func Offset: 0xcc
	// Line 1272, Address: 0x1ee3c90, Func Offset: 0xd0
	// Line 1273, Address: 0x1ee3cc0, Func Offset: 0x100
	// Line 1274, Address: 0x1ee3ccc, Func Offset: 0x10c
	// Line 1275, Address: 0x1ee3cd4, Func Offset: 0x114
	// Line 1277, Address: 0x1ee3ce0, Func Offset: 0x120
	// Line 1282, Address: 0x1ee3cec, Func Offset: 0x12c
	// Line 1285, Address: 0x1ee3cf0, Func Offset: 0x130
	// Line 1284, Address: 0x1ee3cf8, Func Offset: 0x138
	// Line 1285, Address: 0x1ee3cfc, Func Offset: 0x13c
	// Func End, Address: 0x1ee3d08, Func Offset: 0x148
}

// 
// Start address: 0x1ee3d10
int rl_telephone_call_end(sfObj* obj)
{
	// Line 1288, Address: 0x1ee3d10, Func Offset: 0
	// Line 1289, Address: 0x1ee3d18, Func Offset: 0x8
	// Line 1291, Address: 0x1ee3d28, Func Offset: 0x18
	// Line 1290, Address: 0x1ee3d2c, Func Offset: 0x1c
	// Line 1291, Address: 0x1ee3d30, Func Offset: 0x20
	// Func End, Address: 0x1ee3d38, Func Offset: 0x28
}

// 
// Start address: 0x1ee3d40
int rl01_014_trgchk(sfObj* obj)
{
	int rtv;
	// Line 1309, Address: 0x1ee3d40, Func Offset: 0
	// Line 1319, Address: 0x1ee3d4c, Func Offset: 0xc
	// Line 1320, Address: 0x1ee3d5c, Func Offset: 0x1c
	// Line 1321, Address: 0x1ee3d64, Func Offset: 0x24
	// Line 1323, Address: 0x1ee3d68, Func Offset: 0x28
	// Line 1324, Address: 0x1ee3d98, Func Offset: 0x58
	// Line 1325, Address: 0x1ee3d9c, Func Offset: 0x5c
	// Line 1327, Address: 0x1ee3da0, Func Offset: 0x60
	// Line 1328, Address: 0x1ee3da8, Func Offset: 0x68
	// Func End, Address: 0x1ee3db8, Func Offset: 0x78
}

// 
// Start address: 0x1ee3dc0
int rl01_014_init(sfObj* obj)
{
	_EventInst* inst;
	// Line 1331, Address: 0x1ee3dc0, Func Offset: 0
	// Line 1332, Address: 0x1ee3dc4, Func Offset: 0x4
	// Line 1331, Address: 0x1ee3dc8, Func Offset: 0x8
	// Line 1332, Address: 0x1ee3dd0, Func Offset: 0x10
	// Line 1334, Address: 0x1ee3de0, Func Offset: 0x20
	// Line 1336, Address: 0x1ee3de8, Func Offset: 0x28
	// Line 1340, Address: 0x1ee3dec, Func Offset: 0x2c
	// Line 1342, Address: 0x1ee3e00, Func Offset: 0x40
	// Line 1343, Address: 0x1ee3e14, Func Offset: 0x54
	// Line 1344, Address: 0x1ee3e1c, Func Offset: 0x5c
	// Line 1348, Address: 0x1ee3e30, Func Offset: 0x70
	// Line 1351, Address: 0x1ee3e38, Func Offset: 0x78
	// Line 1350, Address: 0x1ee3e3c, Func Offset: 0x7c
	// Line 1351, Address: 0x1ee3e40, Func Offset: 0x80
	// Func End, Address: 0x1ee3e4c, Func Offset: 0x8c
}

// 
// Start address: 0x1ee3e50
int rl01_014_exec(sfObj* obj)
{
	int rtv;
	// Line 1354, Address: 0x1ee3e50, Func Offset: 0
	// Line 1355, Address: 0x1ee3e60, Func Offset: 0x10
	// Line 1356, Address: 0x1ee3e64, Func Offset: 0x14
	// Line 1359, Address: 0x1ee3e70, Func Offset: 0x20
	// Line 1361, Address: 0x1ee3e90, Func Offset: 0x40
	// Line 1362, Address: 0x1ee3e94, Func Offset: 0x44
	// Line 1363, Address: 0x1ee3e9c, Func Offset: 0x4c
	// Line 1364, Address: 0x1ee3ea0, Func Offset: 0x50
	// Line 1365, Address: 0x1ee3ebc, Func Offset: 0x6c
	// Line 1366, Address: 0x1ee3ec4, Func Offset: 0x74
	// Line 1367, Address: 0x1ee3ecc, Func Offset: 0x7c
	// Line 1368, Address: 0x1ee3ed0, Func Offset: 0x80
	// Line 1371, Address: 0x1ee3edc, Func Offset: 0x8c
	// Line 1376, Address: 0x1ee3ee0, Func Offset: 0x90
	// Line 1378, Address: 0x1ee3ee8, Func Offset: 0x98
	// Line 1379, Address: 0x1ee3eec, Func Offset: 0x9c
	// Func End, Address: 0x1ee3f00, Func Offset: 0xb0
}

// 
// Start address: 0x1ee3f00
int rl01_014_destruct()
{
	// Line 1385, Address: 0x1ee3f00, Func Offset: 0
	// Func End, Address: 0x1ee3f08, Func Offset: 0x8
}

// 
// Start address: 0x1ee3f10
int ev_3ldk0_rl02_demo53_exec(sfObj* obj)
{
	// Line 1407, Address: 0x1ee3f10, Func Offset: 0
	// Line 1408, Address: 0x1ee3f20, Func Offset: 0x10
	// Line 1409, Address: 0x1ee3f28, Func Offset: 0x18
	// Line 1410, Address: 0x1ee3f30, Func Offset: 0x20
	// Func End, Address: 0x1ee3f40, Func Offset: 0x30
}

// 
// Start address: 0x1ee3f40
int ev_3ldk0_rl02_demo53_end(sfObj* obj)
{
	// Line 1412, Address: 0x1ee3f40, Func Offset: 0
	// Line 1416, Address: 0x1ee3f44, Func Offset: 0x4
	// Line 1412, Address: 0x1ee3f48, Func Offset: 0x8
	// Line 1416, Address: 0x1ee3f54, Func Offset: 0x14
	// Line 1418, Address: 0x1ee3f5c, Func Offset: 0x1c
	// Line 1419, Address: 0x1ee3f64, Func Offset: 0x24
	// Line 1420, Address: 0x1ee3f6c, Func Offset: 0x2c
	// Func End, Address: 0x1ee3f7c, Func Offset: 0x3c
}

// 
// Start address: 0x1ee3f80
int ev_3ldk0_rl04a_198_end(sfObj* obj)
{
	float ppos[4];
	// Line 1450, Address: 0x1ee3f80, Func Offset: 0
	// Line 1454, Address: 0x1ee3f84, Func Offset: 0x4
	// Line 1450, Address: 0x1ee3f88, Func Offset: 0x8
	// Line 1454, Address: 0x1ee3f94, Func Offset: 0x14
	// Line 1456, Address: 0x1ee3f9c, Func Offset: 0x1c
	// Line 1455, Address: 0x1ee3fa0, Func Offset: 0x20
	// Line 1456, Address: 0x1ee3fa4, Func Offset: 0x24
	// Line 1455, Address: 0x1ee3fa8, Func Offset: 0x28
	// Line 1457, Address: 0x1ee3fb0, Func Offset: 0x30
	// Line 1458, Address: 0x1ee3fc4, Func Offset: 0x44
	// Line 1460, Address: 0x1ee3fd0, Func Offset: 0x50
	// Line 1461, Address: 0x1ee3fd8, Func Offset: 0x58
	// Func End, Address: 0x1ee3fe8, Func Offset: 0x68
}

// 
// Start address: 0x1ee3ff0
int ev_3ldk0_rl00_200_init(sfObj* obj)
{
	int ret;
	// Line 1492, Address: 0x1ee3ff0, Func Offset: 0
	// Line 1495, Address: 0x1ee3ffc, Func Offset: 0xc
	// Line 1496, Address: 0x1ee4004, Func Offset: 0x14
	// Line 1497, Address: 0x1ee401c, Func Offset: 0x2c
	// Line 1498, Address: 0x1ee4028, Func Offset: 0x38
	// Line 1499, Address: 0x1ee4044, Func Offset: 0x54
	// Line 1500, Address: 0x1ee4060, Func Offset: 0x70
	// Line 1501, Address: 0x1ee4064, Func Offset: 0x74
	// Func End, Address: 0x1ee4074, Func Offset: 0x84
}

// 
// Start address: 0x1ee4080
int ev_3ldk0_rl00_200_exec(sfObj* obj)
{
	int ret;
	// Line 1503, Address: 0x1ee4080, Func Offset: 0
	// Line 1506, Address: 0x1ee4088, Func Offset: 0x8
	// Line 1507, Address: 0x1ee4094, Func Offset: 0x14
	// Line 1508, Address: 0x1ee40a8, Func Offset: 0x28
	// Line 1509, Address: 0x1ee40b8, Func Offset: 0x38
	// Line 1510, Address: 0x1ee40c0, Func Offset: 0x40
	// Line 1514, Address: 0x1ee40d0, Func Offset: 0x50
	// Line 1516, Address: 0x1ee40d8, Func Offset: 0x58
	// Line 1519, Address: 0x1ee40e0, Func Offset: 0x60
	// Line 1520, Address: 0x1ee40e4, Func Offset: 0x64
	// Func End, Address: 0x1ee40f4, Func Offset: 0x74
}

// 
// Start address: 0x1ee4100
int ev_3ldk0_rl00_200_draw(sfObj* obj)
{
	// Line 1522, Address: 0x1ee4100, Func Offset: 0
	// Line 1523, Address: 0x1ee4104, Func Offset: 0x4
	// Line 1522, Address: 0x1ee4108, Func Offset: 0x8
	// Line 1523, Address: 0x1ee4114, Func Offset: 0x14
	// Line 1524, Address: 0x1ee411c, Func Offset: 0x1c
	// Line 1525, Address: 0x1ee4124, Func Offset: 0x24
	// Func End, Address: 0x1ee4134, Func Offset: 0x34
}

// 
// Start address: 0x1ee4140
int ev_3ldk0_goto_passageway()
{
	float pos[4];
	// Line 1527, Address: 0x1ee4140, Func Offset: 0
	// Line 1528, Address: 0x1ee4144, Func Offset: 0x4
	// Line 1527, Address: 0x1ee4148, Func Offset: 0x8
	// Line 1528, Address: 0x1ee414c, Func Offset: 0xc
	// Line 1529, Address: 0x1ee4158, Func Offset: 0x18
	// Line 1530, Address: 0x1ee4168, Func Offset: 0x28
	// Line 1532, Address: 0x1ee417c, Func Offset: 0x3c
	// Line 1531, Address: 0x1ee4180, Func Offset: 0x40
	// Line 1532, Address: 0x1ee4184, Func Offset: 0x44
	// Func End, Address: 0x1ee418c, Func Offset: 0x4c
}

// 
// Start address: 0x1ee4190
int ev_3ldk0_rl00_200_end(sfObj* obj)
{
	// Line 1534, Address: 0x1ee4190, Func Offset: 0
	// Line 1535, Address: 0x1ee41a0, Func Offset: 0x10
	// Line 1536, Address: 0x1ee41a8, Func Offset: 0x18
	// Line 1537, Address: 0x1ee41b0, Func Offset: 0x20
	// Func End, Address: 0x1ee41c0, Func Offset: 0x30
}

// 
// Start address: 0x1ee41c0
int ev_3ldk0_rl04b_217_nextstage()
{
	float pos[4];
	// Line 1556, Address: 0x1ee41c0, Func Offset: 0
	// Line 1557, Address: 0x1ee41c4, Func Offset: 0x4
	// Line 1556, Address: 0x1ee41c8, Func Offset: 0x8
	// Line 1557, Address: 0x1ee41cc, Func Offset: 0xc
	// Line 1558, Address: 0x1ee41d8, Func Offset: 0x18
	// Line 1559, Address: 0x1ee41e8, Func Offset: 0x28
	// Line 1561, Address: 0x1ee41fc, Func Offset: 0x3c
	// Line 1560, Address: 0x1ee4200, Func Offset: 0x40
	// Line 1561, Address: 0x1ee4204, Func Offset: 0x44
	// Func End, Address: 0x1ee420c, Func Offset: 0x4c
}

// 
// Start address: 0x1ee4210
int ev_3ldk0_rl04b_217_end(sfObj* obj)
{
	// Line 1564, Address: 0x1ee4210, Func Offset: 0
	// Line 1565, Address: 0x1ee421c, Func Offset: 0xc
	// Line 1566, Address: 0x1ee4224, Func Offset: 0x14
	// Line 1567, Address: 0x1ee422c, Func Offset: 0x1c
	// Func End, Address: 0x1ee423c, Func Offset: 0x2c
}

