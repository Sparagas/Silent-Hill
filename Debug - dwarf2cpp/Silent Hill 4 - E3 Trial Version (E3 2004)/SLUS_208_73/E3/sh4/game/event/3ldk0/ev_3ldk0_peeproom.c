typedef struct _anon0;
typedef struct sfObj;
typedef struct _EventInst;
typedef struct _anon1;
typedef struct _anon2;
typedef struct sfCharacter;
typedef struct _EventDriver;
typedef enum sgIKSolveResult : unsigned char;
typedef struct sgSVModel;
typedef struct sgIKHandle;
typedef struct sgBone;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef struct _anon6;
typedef union _anon7;
typedef struct sgAnime;
typedef struct _GAME_WORK;
typedef struct _SubtitleMessageData;
typedef struct EventFlag;

typedef int(*type_3)(sfObj*);
typedef int(*type_5)(sfObj*);
typedef int(*type_8)(sfObj*);
typedef int(*type_11)(sfObj*);
typedef int(*type_12)(sfObj*);
typedef int(*type_14)(sfObj*);
typedef int(*type_15)(sfObj*);
typedef sgIKSolveResult(*type_16)();
typedef void(*type_20)(sfObj*);
typedef int(*type_22)(sfObj*);
typedef int(*type_25)(sfObj*);
typedef int(*type_28)(sfObj*);
typedef void(*type_29)(sfObj*);
typedef int(*type_30)(sfObj*);
typedef void(*type_31)(_anon4*, int, int, float*);
typedef int(*type_33)(sfObj*);
typedef int(*type_38)(sfObj*);
typedef void(*type_44)(sfObj*);
typedef void(*type_45)(sgAnime*, int);
typedef int(*type_49)(sfObj*);
typedef int(*type_51)();
typedef void(*type_54)();

typedef unsigned int type_0[6];
typedef unsigned char type_1[4];
typedef unsigned int type_2[4];
typedef float type_4[4];
typedef unsigned int type_6[7];
typedef _anon2 type_7[6];
typedef float type_9[4];
typedef float type_10[4][4];
typedef float type_13[4][2];
typedef unsigned int type_17[4];
typedef int type_18[1];
typedef _anon7 type_19[4];
typedef int type_21[1];
typedef unsigned int type_23[3];
typedef unsigned int type_24[5];
typedef _anon7 type_26[256];
typedef float type_27[4];
typedef int type_32[1];
typedef int type_34[1];
typedef _SubtitleMessageData type_35[15];
typedef unsigned int type_36[16];
typedef void* type_37[4];
typedef short type_39[2];
typedef unsigned short type_40[2];
typedef char type_41[4];
typedef unsigned char type_42[4];
typedef int type_43[1];
typedef float type_46[1];
typedef int type_47[1];
typedef int type_48[1];
typedef unsigned int type_50[3];
typedef unsigned char type_52[4];
typedef int type_53[1];
typedef unsigned char type_55[320];
typedef unsigned int type_56[4];

struct _anon0
{
	int demo_num;
	int flag;
	unsigned int* file_tbl;
	void* addr_check;
	unsigned int timer;
	_anon3 em_model;
	unsigned char is_cancel_ok;
};

struct sfObj
{
	_anon7 fwork[256];
	_anon7* work;
	void(*func)(sfObj*);
	_anon7* work_pt0;
	_anon7* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon7* sys_work;
	_anon7* scene_work;
	_anon7* event_work;
	_anon7* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
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
	sfObj* o;
};

struct _anon2
{
	int demo_num;
	int(*chk_func)();
	int flag;
	unsigned int* file_tbl;
	void(*func)();
	unsigned char is_cancel_ok;
};

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon6 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
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
	_anon7 val[4];
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
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

struct _anon3
{
	void* texture_normal;
	void* texture_global;
	void* texture_semitrans;
	void* model_data;
	sgBone* parent_bone;
};

struct _anon4
{
	unsigned long tex0;
	unsigned long clamp;
};

struct _anon5
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

struct _anon6
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

union _anon7
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

struct _SubtitleMessageData
{
	short pack_id;
	short msg_id;
	float time;
};

struct EventFlag
{
	unsigned char flag[320];
};

_SubtitleMessageData Msg3ldk0_043[15];
char mes_care_about_eileen;
EventFlag event_flag;
unsigned int ev_peeproom_room_file[3];
void(*sfObjFuncDummy)(sfObj*);
_GAME_WORK gamew;
float camera_near_z;
unsigned int ev_3ldk0_rl00_013_file[6];
short demo_end_flag;
_EventDriver ev_3ldk0_rl00_013;
unsigned int eileen_file_129[4];
unsigned int eileen_file_117[4];
unsigned int room_file[3];
unsigned int undressed_eileen_file[7];
unsigned int dressed_eileen_file[5];
unsigned int eileen_file_107[4];
_anon2 demo_event_tbl[6];
int(*ev_peeproom_end)(sfObj*);
int(*ev_peeproom_draw)(sfObj*);
int(*ev_peeproom_exec)(sfObj*);
int(*ev_peeproom_room_end)(sfObj*);
int(*ev_peeproom_room_draw)(sfObj*);
int(*ev_peeproom_room_is_eileen_dead_exec)(sfObj*);
int(*ev_peeproom_room_exec)(sfObj*);
_EventDriver ev_peeproom;

int is_care_about_eileen();
void ev_peeproom_fog_set(int demo_id);
void force_camera_set();
void force_demo_camera_set();
int ev_peeproom_room_exec(sfObj* obj);
int ev_peeproom_room_draw(sfObj* obj);
int ev_peeproom_room_end(sfObj* obj);
int ev_peeproom_room_is_eileen_dead_exec(sfObj* obj);
int ev_3ldk0_rl00_013_init(sfObj* obj);
int ev_3ldk0_rl00_013_exec(sfObj* obj);
int ev_3ldk0_rl00_013_draw(sfObj* obj);
int ev_3ldk0_rl00_013_end(sfObj* obj);
int ev_check_2205();
int ev_check_117();
int ev_check_2024();
int ev_check_2023();
int ev_check_043();
int ev_check_only_room();
_anon2* get_demo_info();
void ev_peeproom_event_set(sfObj* obj, _anon0* src);
void demo_setting(_anon0* info);
int decide_next_demo_at_changable_undress(_anon0* info);
int ev_peeproom_trgchk();
int ev_peeproom_init(sfObj* obj);
int ev_peeproom_exec(sfObj* obj);
int ev_peeproom_draw(sfObj* obj);
int ev_peeproom_end(sfObj* obj);

// 
// Start address: 0x1ed9290
int is_care_about_eileen()
{
	// Line 138, Address: 0x1ed9290, Func Offset: 0
	// Line 140, Address: 0x1ed92b8, Func Offset: 0x28
	// Func End, Address: 0x1ed92c0, Func Offset: 0x30
}

// 
// Start address: 0x1ed92c0
void ev_peeproom_fog_set(int demo_id)
{
	_anon5 param;
	unsigned char col[4];
	// Line 149, Address: 0x1ed92c0, Func Offset: 0
	// Line 150, Address: 0x1ed92d0, Func Offset: 0x10
	// Line 153, Address: 0x1ed9308, Func Offset: 0x48
	// Line 155, Address: 0x1ed9310, Func Offset: 0x50
	// Line 158, Address: 0x1ed9318, Func Offset: 0x58
	// Line 159, Address: 0x1ed931c, Func Offset: 0x5c
	// Line 162, Address: 0x1ed9320, Func Offset: 0x60
	// Line 160, Address: 0x1ed9324, Func Offset: 0x64
	// Line 158, Address: 0x1ed9328, Func Offset: 0x68
	// Line 159, Address: 0x1ed932c, Func Offset: 0x6c
	// Line 162, Address: 0x1ed9330, Func Offset: 0x70
	// Line 163, Address: 0x1ed9338, Func Offset: 0x78
	// Line 164, Address: 0x1ed9340, Func Offset: 0x80
	// Line 167, Address: 0x1ed93ac, Func Offset: 0xec
	// Line 168, Address: 0x1ed93b4, Func Offset: 0xf4
	// Func End, Address: 0x1ed93c4, Func Offset: 0x104
}

// 
// Start address: 0x1ed93d0
void force_camera_set()
{
	float vwm[4][4];
	// Line 173, Address: 0x1ed93d0, Func Offset: 0
	// Line 175, Address: 0x1ed93d8, Func Offset: 0x8
	// Line 176, Address: 0x1ed93e0, Func Offset: 0x10
	// Line 177, Address: 0x1ed93e8, Func Offset: 0x18
	// Line 178, Address: 0x1ed93fc, Func Offset: 0x2c
	// Line 179, Address: 0x1ed940c, Func Offset: 0x3c
	// Func End, Address: 0x1ed9418, Func Offset: 0x48
}

// 
// Start address: 0x1ed9420
void force_demo_camera_set()
{
	float vwm[4][4];
	// Line 182, Address: 0x1ed9420, Func Offset: 0
	// Line 184, Address: 0x1ed9428, Func Offset: 0x8
	// Line 185, Address: 0x1ed9430, Func Offset: 0x10
	// Line 186, Address: 0x1ed9438, Func Offset: 0x18
	// Line 187, Address: 0x1ed944c, Func Offset: 0x2c
	// Line 188, Address: 0x1ed945c, Func Offset: 0x3c
	// Func End, Address: 0x1ed9468, Func Offset: 0x48
}

// 
// Start address: 0x1ed9470
int ev_peeproom_room_exec(sfObj* obj)
{
	int rtv;
	unsigned int mdl_id;
	unsigned int tex_id;
	unsigned int shd_id;
	_anon0* info;
	_anon1* kobj;
	sfCharacter* chara;
	// Line 246, Address: 0x1ed9470, Func Offset: 0
	// Line 247, Address: 0x1ed9488, Func Offset: 0x18
	// Line 246, Address: 0x1ed948c, Func Offset: 0x1c
	// Line 249, Address: 0x1ed9498, Func Offset: 0x28
	// Line 251, Address: 0x1ed949c, Func Offset: 0x2c
	// Line 252, Address: 0x1ed94a4, Func Offset: 0x34
	// Line 255, Address: 0x1ed94a8, Func Offset: 0x38
	// Line 256, Address: 0x1ed94b4, Func Offset: 0x44
	// Line 257, Address: 0x1ed94bc, Func Offset: 0x4c
	// Line 260, Address: 0x1ed94c0, Func Offset: 0x50
	// Line 261, Address: 0x1ed94f4, Func Offset: 0x84
	// Line 262, Address: 0x1ed94f8, Func Offset: 0x88
	// Line 263, Address: 0x1ed9500, Func Offset: 0x90
	// Line 264, Address: 0x1ed9508, Func Offset: 0x98
	// Line 265, Address: 0x1ed950c, Func Offset: 0x9c
	// Line 266, Address: 0x1ed9514, Func Offset: 0xa4
	// Line 267, Address: 0x1ed9518, Func Offset: 0xa8
	// Line 268, Address: 0x1ed9520, Func Offset: 0xb0
	// Line 269, Address: 0x1ed9528, Func Offset: 0xb8
	// Line 270, Address: 0x1ed952c, Func Offset: 0xbc
	// Line 271, Address: 0x1ed9534, Func Offset: 0xc4
	// Line 272, Address: 0x1ed9538, Func Offset: 0xc8
	// Line 273, Address: 0x1ed9540, Func Offset: 0xd0
	// Line 274, Address: 0x1ed9548, Func Offset: 0xd8
	// Line 278, Address: 0x1ed9550, Func Offset: 0xe0
	// Line 280, Address: 0x1ed9578, Func Offset: 0x108
	// Line 281, Address: 0x1ed9580, Func Offset: 0x110
	// Line 283, Address: 0x1ed958c, Func Offset: 0x11c
	// Line 285, Address: 0x1ed9594, Func Offset: 0x124
	// Line 288, Address: 0x1ed95a0, Func Offset: 0x130
	// Line 289, Address: 0x1ed95a8, Func Offset: 0x138
	// Line 290, Address: 0x1ed95bc, Func Offset: 0x14c
	// Line 291, Address: 0x1ed95d0, Func Offset: 0x160
	// Line 293, Address: 0x1ed95ec, Func Offset: 0x17c
	// Line 294, Address: 0x1ed95f4, Func Offset: 0x184
	// Line 296, Address: 0x1ed95fc, Func Offset: 0x18c
	// Line 299, Address: 0x1ed9604, Func Offset: 0x194
	// Line 303, Address: 0x1ed9618, Func Offset: 0x1a8
	// Line 305, Address: 0x1ed9624, Func Offset: 0x1b4
	// Line 311, Address: 0x1ed9630, Func Offset: 0x1c0
	// Line 312, Address: 0x1ed9638, Func Offset: 0x1c8
	// Line 317, Address: 0x1ed965c, Func Offset: 0x1ec
	// Line 314, Address: 0x1ed9660, Func Offset: 0x1f0
	// Line 317, Address: 0x1ed9668, Func Offset: 0x1f8
	// Line 314, Address: 0x1ed9670, Func Offset: 0x200
	// Line 317, Address: 0x1ed9674, Func Offset: 0x204
	// Line 319, Address: 0x1ed9684, Func Offset: 0x214
	// Line 320, Address: 0x1ed968c, Func Offset: 0x21c
	// Line 321, Address: 0x1ed9694, Func Offset: 0x224
	// Line 322, Address: 0x1ed9698, Func Offset: 0x228
	// Line 324, Address: 0x1ed96c0, Func Offset: 0x250
	// Line 325, Address: 0x1ed96cc, Func Offset: 0x25c
	// Line 327, Address: 0x1ed96d0, Func Offset: 0x260
	// Line 329, Address: 0x1ed96f8, Func Offset: 0x288
	// Line 331, Address: 0x1ed96fc, Func Offset: 0x28c
	// Line 332, Address: 0x1ed9720, Func Offset: 0x2b0
	// Line 334, Address: 0x1ed9728, Func Offset: 0x2b8
	// Line 336, Address: 0x1ed9730, Func Offset: 0x2c0
	// Line 340, Address: 0x1ed9740, Func Offset: 0x2d0
	// Line 338, Address: 0x1ed9744, Func Offset: 0x2d4
	// Line 347, Address: 0x1ed9748, Func Offset: 0x2d8
	// Line 348, Address: 0x1ed974c, Func Offset: 0x2dc
	// Func End, Address: 0x1ed9770, Func Offset: 0x300
	// Line 949, Address: 0x1ed9470, Func Offset: 0
	// Line 950, Address: 0x1ed9484, Func Offset: 0x14
	// Line 953, Address: 0x1ed948c, Func Offset: 0x1c
	// Line 954, Address: 0x1ed9494, Func Offset: 0x24
	// Line 956, Address: 0x1ed94a0, Func Offset: 0x30
	// Func End, Address: 0x1ed94b0, Func Offset: 0x40
}

// 
// Start address: 0x1ed9770
int ev_peeproom_room_draw(sfObj* obj)
{
	_anon0* info;
	// Line 351, Address: 0x1ed9770, Func Offset: 0
	// Line 352, Address: 0x1ed9780, Func Offset: 0x10
	// Line 356, Address: 0x1ed9788, Func Offset: 0x18
	// Line 357, Address: 0x1ed9790, Func Offset: 0x20
	// Line 358, Address: 0x1ed9798, Func Offset: 0x28
	// Line 360, Address: 0x1ed97a0, Func Offset: 0x30
	// Line 361, Address: 0x1ed97b0, Func Offset: 0x40
	// Line 362, Address: 0x1ed97bc, Func Offset: 0x4c
	// Line 364, Address: 0x1ed97d0, Func Offset: 0x60
	// Line 366, Address: 0x1ed97d8, Func Offset: 0x68
	// Line 368, Address: 0x1ed97e0, Func Offset: 0x70
	// Line 374, Address: 0x1ed97e8, Func Offset: 0x78
	// Line 377, Address: 0x1ed97f0, Func Offset: 0x80
	// Line 376, Address: 0x1ed97f4, Func Offset: 0x84
	// Line 377, Address: 0x1ed97f8, Func Offset: 0x88
	// Func End, Address: 0x1ed9804, Func Offset: 0x94
}

// 
// Start address: 0x1ed9810
int ev_peeproom_room_end(sfObj* obj)
{
	_anon0* info;
	_anon1* kobj;
	// Line 380, Address: 0x1ed9810, Func Offset: 0
	// Line 381, Address: 0x1ed981c, Func Offset: 0xc
	// Line 382, Address: 0x1ed982c, Func Offset: 0x1c
	// Line 384, Address: 0x1ed9838, Func Offset: 0x28
	// Line 385, Address: 0x1ed9840, Func Offset: 0x30
	// Line 387, Address: 0x1ed9848, Func Offset: 0x38
	// Line 390, Address: 0x1ed9850, Func Offset: 0x40
	// Line 393, Address: 0x1ed9858, Func Offset: 0x48
	// Line 395, Address: 0x1ed9868, Func Offset: 0x58
	// Line 396, Address: 0x1ed9870, Func Offset: 0x60
	// Line 398, Address: 0x1ed9874, Func Offset: 0x64
	// Line 399, Address: 0x1ed987c, Func Offset: 0x6c
	// Line 401, Address: 0x1ed9884, Func Offset: 0x74
	// Line 399, Address: 0x1ed9888, Func Offset: 0x78
	// Line 403, Address: 0x1ed988c, Func Offset: 0x7c
	// Line 404, Address: 0x1ed9894, Func Offset: 0x84
	// Line 406, Address: 0x1ed989c, Func Offset: 0x8c
	// Line 408, Address: 0x1ed98a4, Func Offset: 0x94
	// Line 409, Address: 0x1ed98ac, Func Offset: 0x9c
	// Line 410, Address: 0x1ed98b0, Func Offset: 0xa0
	// Line 414, Address: 0x1ed98b8, Func Offset: 0xa8
	// Line 417, Address: 0x1ed98c0, Func Offset: 0xb0
	// Line 419, Address: 0x1ed98c4, Func Offset: 0xb4
	// Line 417, Address: 0x1ed98c8, Func Offset: 0xb8
	// Line 420, Address: 0x1ed98cc, Func Offset: 0xbc
	// Func End, Address: 0x1ed98dc, Func Offset: 0xcc
}

// 
// Start address: 0x1ed98e0
int ev_peeproom_room_is_eileen_dead_exec(sfObj* obj)
{
	int rtv;
	unsigned int mdl_id;
	unsigned int tex_id;
	unsigned int shd_id;
	_anon0* info;
	_anon1* kobj;
	sfCharacter* chara;
	_anon0* info;
	// Line 425, Address: 0x1ed98e0, Func Offset: 0
	// Line 429, Address: 0x1ed9904, Func Offset: 0x24
	// Line 430, Address: 0x1ed9910, Func Offset: 0x30
	// Line 434, Address: 0x1ed9918, Func Offset: 0x38
	// Line 435, Address: 0x1ed994c, Func Offset: 0x6c
	// Line 436, Address: 0x1ed9950, Func Offset: 0x70
	// Line 437, Address: 0x1ed9958, Func Offset: 0x78
	// Line 438, Address: 0x1ed9960, Func Offset: 0x80
	// Line 439, Address: 0x1ed9964, Func Offset: 0x84
	// Line 440, Address: 0x1ed996c, Func Offset: 0x8c
	// Line 441, Address: 0x1ed9970, Func Offset: 0x90
	// Line 442, Address: 0x1ed9978, Func Offset: 0x98
	// Line 443, Address: 0x1ed9980, Func Offset: 0xa0
	// Line 444, Address: 0x1ed9984, Func Offset: 0xa4
	// Line 445, Address: 0x1ed998c, Func Offset: 0xac
	// Line 446, Address: 0x1ed9990, Func Offset: 0xb0
	// Line 447, Address: 0x1ed9998, Func Offset: 0xb8
	// Line 448, Address: 0x1ed99a0, Func Offset: 0xc0
	// Line 452, Address: 0x1ed99a8, Func Offset: 0xc8
	// Line 453, Address: 0x1ed99dc, Func Offset: 0xfc
	// Line 454, Address: 0x1ed99e0, Func Offset: 0x100
	// Line 455, Address: 0x1ed99e8, Func Offset: 0x108
	// Line 457, Address: 0x1ed99f4, Func Offset: 0x114
	// Line 459, Address: 0x1ed99fc, Func Offset: 0x11c
	// Line 462, Address: 0x1ed9a10, Func Offset: 0x130
	// Line 465, Address: 0x1ed9a18, Func Offset: 0x138
	// Line 466, Address: 0x1ed9a2c, Func Offset: 0x14c
	// Line 467, Address: 0x1ed9a40, Func Offset: 0x160
	// Line 469, Address: 0x1ed9a58, Func Offset: 0x178
	// Line 470, Address: 0x1ed9a5c, Func Offset: 0x17c
	// Line 469, Address: 0x1ed9a60, Func Offset: 0x180
	// Line 471, Address: 0x1ed9a64, Func Offset: 0x184
	// Line 472, Address: 0x1ed9a6c, Func Offset: 0x18c
	// Line 474, Address: 0x1ed9a74, Func Offset: 0x194
	// Line 477, Address: 0x1ed9a7c, Func Offset: 0x19c
	// Line 481, Address: 0x1ed9a90, Func Offset: 0x1b0
	// Line 482, Address: 0x1ed9a9c, Func Offset: 0x1bc
	// Line 488, Address: 0x1ed9aa8, Func Offset: 0x1c8
	// Line 489, Address: 0x1ed9ab0, Func Offset: 0x1d0
	// Line 492, Address: 0x1ed9ad4, Func Offset: 0x1f4
	// Line 494, Address: 0x1ed9af4, Func Offset: 0x214
	// Line 495, Address: 0x1ed9afc, Func Offset: 0x21c
	// Line 497, Address: 0x1ed9b08, Func Offset: 0x228
	// Line 498, Address: 0x1ed9b14, Func Offset: 0x234
	// Line 499, Address: 0x1ed9b1c, Func Offset: 0x23c
	// Line 501, Address: 0x1ed9b24, Func Offset: 0x244
	// Line 502, Address: 0x1ed9b28, Func Offset: 0x248
	// Line 504, Address: 0x1ed9b30, Func Offset: 0x250
	// Line 506, Address: 0x1ed9b44, Func Offset: 0x264
	// Line 507, Address: 0x1ed9b4c, Func Offset: 0x26c
	// Line 508, Address: 0x1ed9b58, Func Offset: 0x278
	// Line 509, Address: 0x1ed9b7c, Func Offset: 0x29c
	// Line 510, Address: 0x1ed9b84, Func Offset: 0x2a4
	// Line 509, Address: 0x1ed9b88, Func Offset: 0x2a8
	// Line 512, Address: 0x1ed9b8c, Func Offset: 0x2ac
	// Line 515, Address: 0x1ed9b94, Func Offset: 0x2b4
	// Line 516, Address: 0x1ed9bbc, Func Offset: 0x2dc
	// Line 517, Address: 0x1ed9bc4, Func Offset: 0x2e4
	// Line 518, Address: 0x1ed9bc8, Func Offset: 0x2e8
	// Line 521, Address: 0x1ed9bd0, Func Offset: 0x2f0
	// Line 524, Address: 0x1ed9bd8, Func Offset: 0x2f8
	// Line 525, Address: 0x1ed9c00, Func Offset: 0x320
	// Line 526, Address: 0x1ed9c24, Func Offset: 0x344
	// Line 528, Address: 0x1ed9c2c, Func Offset: 0x34c
	// Line 530, Address: 0x1ed9c34, Func Offset: 0x354
	// Line 531, Address: 0x1ed9c38, Func Offset: 0x358
	// Line 532, Address: 0x1ed9c48, Func Offset: 0x368
	// Line 535, Address: 0x1ed9c50, Func Offset: 0x370
	// Line 537, Address: 0x1ed9c54, Func Offset: 0x374
	// Line 535, Address: 0x1ed9c58, Func Offset: 0x378
	// Line 542, Address: 0x1ed9c5c, Func Offset: 0x37c
	// Line 544, Address: 0x1ed9c60, Func Offset: 0x380
	// Line 545, Address: 0x1ed9c64, Func Offset: 0x384
	// Func End, Address: 0x1ed9c88, Func Offset: 0x3a8
	// Line 197, Address: 0x1ed98e0, Func Offset: 0
	// Line 198, Address: 0x1ed98e4, Func Offset: 0x4
	// Line 197, Address: 0x1ed98e8, Func Offset: 0x8
	// Line 198, Address: 0x1ed98f0, Func Offset: 0x10
	// Line 199, Address: 0x1ed98f8, Func Offset: 0x18
	// Line 200, Address: 0x1ed9900, Func Offset: 0x20
	// Line 202, Address: 0x1ed9908, Func Offset: 0x28
	// Line 203, Address: 0x1ed9910, Func Offset: 0x30
	// Func End, Address: 0x1ed9920, Func Offset: 0x40
}

// 
// Start address: 0x1ed9c90
int ev_3ldk0_rl00_013_init(sfObj* obj)
{
	_EventInst* evinst;
	_anon0* info;
	_anon1* kobj;
	// Line 565, Address: 0x1ed9c90, Func Offset: 0
	// Line 566, Address: 0x1ed9ca4, Func Offset: 0x14
	// Line 569, Address: 0x1ed9cb0, Func Offset: 0x20
	// Line 570, Address: 0x1ed9cc4, Func Offset: 0x34
	// Line 573, Address: 0x1ed9ccc, Func Offset: 0x3c
	// Line 574, Address: 0x1ed9cd8, Func Offset: 0x48
	// Line 576, Address: 0x1ed9ce0, Func Offset: 0x50
	// Line 577, Address: 0x1ed9cf4, Func Offset: 0x64
	// Line 580, Address: 0x1ed9cfc, Func Offset: 0x6c
	// Line 581, Address: 0x1ed9d0c, Func Offset: 0x7c
	// Line 582, Address: 0x1ed9d14, Func Offset: 0x84
	// Line 584, Address: 0x1ed9d1c, Func Offset: 0x8c
	// Line 586, Address: 0x1ed9d38, Func Offset: 0xa8
	// Line 589, Address: 0x1ed9d40, Func Offset: 0xb0
	// Line 595, Address: 0x1ed9d48, Func Offset: 0xb8
	// Line 596, Address: 0x1ed9d54, Func Offset: 0xc4
	// Line 598, Address: 0x1ed9d60, Func Offset: 0xd0
	// Line 601, Address: 0x1ed9d68, Func Offset: 0xd8
	// Line 603, Address: 0x1ed9d70, Func Offset: 0xe0
	// Line 606, Address: 0x1ed9d74, Func Offset: 0xe4
	// Line 609, Address: 0x1ed9d7c, Func Offset: 0xec
	// Line 612, Address: 0x1ed9d84, Func Offset: 0xf4
	// Line 615, Address: 0x1ed9d8c, Func Offset: 0xfc
	// Line 614, Address: 0x1ed9d90, Func Offset: 0x100
	// Line 615, Address: 0x1ed9d94, Func Offset: 0x104
	// Func End, Address: 0x1ed9da8, Func Offset: 0x118
}

// 
// Start address: 0x1ed9db0
int ev_3ldk0_rl00_013_exec(sfObj* obj)
{
	int rtv;
	_anon0* info;
	_anon1* kobj;
	sfCharacter* chara;
	// Line 618, Address: 0x1ed9db0, Func Offset: 0
	// Line 619, Address: 0x1ed9dc8, Func Offset: 0x18
	// Line 623, Address: 0x1ed9dd0, Func Offset: 0x20
	// Line 624, Address: 0x1ed9de0, Func Offset: 0x30
	// Line 627, Address: 0x1ed9de8, Func Offset: 0x38
	// Line 628, Address: 0x1ed9e1c, Func Offset: 0x6c
	// Line 629, Address: 0x1ed9e20, Func Offset: 0x70
	// Line 630, Address: 0x1ed9e28, Func Offset: 0x78
	// Line 632, Address: 0x1ed9e30, Func Offset: 0x80
	// Line 633, Address: 0x1ed9e38, Func Offset: 0x88
	// Line 632, Address: 0x1ed9e3c, Func Offset: 0x8c
	// Line 633, Address: 0x1ed9e40, Func Offset: 0x90
	// Line 634, Address: 0x1ed9e48, Func Offset: 0x98
	// Line 635, Address: 0x1ed9e50, Func Offset: 0xa0
	// Line 637, Address: 0x1ed9e58, Func Offset: 0xa8
	// Line 676, Address: 0x1ed9e68, Func Offset: 0xb8
	// Line 677, Address: 0x1ed9e70, Func Offset: 0xc0
	// Line 679, Address: 0x1ed9e7c, Func Offset: 0xcc
	// Line 682, Address: 0x1ed9e84, Func Offset: 0xd4
	// Line 683, Address: 0x1ed9e98, Func Offset: 0xe8
	// Line 684, Address: 0x1ed9eb0, Func Offset: 0x100
	// Line 686, Address: 0x1ed9ecc, Func Offset: 0x11c
	// Line 687, Address: 0x1ed9ed4, Func Offset: 0x124
	// Line 689, Address: 0x1ed9edc, Func Offset: 0x12c
	// Line 692, Address: 0x1ed9ee4, Func Offset: 0x134
	// Line 696, Address: 0x1ed9ef8, Func Offset: 0x148
	// Line 697, Address: 0x1ed9f04, Func Offset: 0x154
	// Line 698, Address: 0x1ed9f10, Func Offset: 0x160
	// Line 700, Address: 0x1ed9f1c, Func Offset: 0x16c
	// Line 701, Address: 0x1ed9f20, Func Offset: 0x170
	// Line 702, Address: 0x1ed9f28, Func Offset: 0x178
	// Line 703, Address: 0x1ed9f38, Func Offset: 0x188
	// Line 705, Address: 0x1ed9f44, Func Offset: 0x194
	// Line 706, Address: 0x1ed9f48, Func Offset: 0x198
	// Line 707, Address: 0x1ed9f50, Func Offset: 0x1a0
	// Line 709, Address: 0x1ed9f58, Func Offset: 0x1a8
	// Line 710, Address: 0x1ed9f68, Func Offset: 0x1b8
	// Line 711, Address: 0x1ed9f70, Func Offset: 0x1c0
	// Line 712, Address: 0x1ed9f7c, Func Offset: 0x1cc
	// Line 713, Address: 0x1ed9f80, Func Offset: 0x1d0
	// Line 714, Address: 0x1ed9f88, Func Offset: 0x1d8
	// Line 716, Address: 0x1ed9f90, Func Offset: 0x1e0
	// Line 722, Address: 0x1ed9fa0, Func Offset: 0x1f0
	// Line 720, Address: 0x1ed9fa4, Func Offset: 0x1f4
	// Line 729, Address: 0x1ed9fa8, Func Offset: 0x1f8
	// Line 730, Address: 0x1ed9fac, Func Offset: 0x1fc
	// Func End, Address: 0x1ed9fc8, Func Offset: 0x218
}

// 
// Start address: 0x1ed9fd0
int ev_3ldk0_rl00_013_draw(sfObj* obj)
{
	// Line 733, Address: 0x1ed9fd0, Func Offset: 0
	// Line 734, Address: 0x1ed9fd8, Func Offset: 0x8
	// Line 737, Address: 0x1ed9fe8, Func Offset: 0x18
	// Line 738, Address: 0x1ed9ff4, Func Offset: 0x24
	// Line 740, Address: 0x1ed9ff8, Func Offset: 0x28
	// Line 739, Address: 0x1ed9ffc, Func Offset: 0x2c
	// Line 740, Address: 0x1eda000, Func Offset: 0x30
	// Func End, Address: 0x1eda008, Func Offset: 0x38
}

// 
// Start address: 0x1eda010
int ev_3ldk0_rl00_013_end(sfObj* obj)
{
	_anon0* info;
	_anon1* kobj;
	// Line 743, Address: 0x1eda010, Func Offset: 0
	// Line 744, Address: 0x1eda01c, Func Offset: 0xc
	// Line 745, Address: 0x1eda02c, Func Offset: 0x1c
	// Line 747, Address: 0x1eda03c, Func Offset: 0x2c
	// Line 748, Address: 0x1eda044, Func Offset: 0x34
	// Line 750, Address: 0x1eda048, Func Offset: 0x38
	// Line 751, Address: 0x1eda050, Func Offset: 0x40
	// Line 756, Address: 0x1eda05c, Func Offset: 0x4c
	// Line 757, Address: 0x1eda064, Func Offset: 0x54
	// Line 759, Address: 0x1eda06c, Func Offset: 0x5c
	// Line 762, Address: 0x1eda074, Func Offset: 0x64
	// Line 763, Address: 0x1eda07c, Func Offset: 0x6c
	// Line 764, Address: 0x1eda080, Func Offset: 0x70
	// Line 767, Address: 0x1eda088, Func Offset: 0x78
	// Line 770, Address: 0x1eda090, Func Offset: 0x80
	// Line 772, Address: 0x1eda098, Func Offset: 0x88
	// Line 773, Address: 0x1eda0a0, Func Offset: 0x90
	// Line 776, Address: 0x1eda0a8, Func Offset: 0x98
	// Line 779, Address: 0x1eda0b0, Func Offset: 0xa0
	// Line 782, Address: 0x1eda0b8, Func Offset: 0xa8
	// Line 781, Address: 0x1eda0bc, Func Offset: 0xac
	// Line 782, Address: 0x1eda0c0, Func Offset: 0xb0
	// Func End, Address: 0x1eda0cc, Func Offset: 0xbc
}

// 
// Start address: 0x1eda0d0
int ev_check_2205()
{
	// Line 872, Address: 0x1eda0d0, Func Offset: 0
	// Func End, Address: 0x1eda0d8, Func Offset: 0x8
}

// 
// Start address: 0x1eda0e0
int ev_check_117()
{
	// Line 875, Address: 0x1eda0e0, Func Offset: 0
	// Line 878, Address: 0x1eda0e4, Func Offset: 0x4
	// Line 875, Address: 0x1eda0e8, Func Offset: 0x8
	// Line 878, Address: 0x1eda0ec, Func Offset: 0xc
	// Line 882, Address: 0x1eda114, Func Offset: 0x34
	// Func End, Address: 0x1eda120, Func Offset: 0x40
}

// 
// Start address: 0x1eda120
int ev_check_2024()
{
	// Line 889, Address: 0x1eda120, Func Offset: 0
	// Line 892, Address: 0x1eda160, Func Offset: 0x40
	// Func End, Address: 0x1eda168, Func Offset: 0x48
}

// 
// Start address: 0x1eda170
int ev_check_2023()
{
	// Line 899, Address: 0x1eda170, Func Offset: 0
	// Line 902, Address: 0x1eda1b0, Func Offset: 0x40
	// Func End, Address: 0x1eda1b8, Func Offset: 0x48
}

// 
// Start address: 0x1eda1c0
int ev_check_043()
{
	// Line 905, Address: 0x1eda1c0, Func Offset: 0
	// Line 909, Address: 0x1eda1c4, Func Offset: 0x4
	// Line 905, Address: 0x1eda1c8, Func Offset: 0x8
	// Line 909, Address: 0x1eda1cc, Func Offset: 0xc
	// Line 912, Address: 0x1eda1e4, Func Offset: 0x24
	// Func End, Address: 0x1eda1f0, Func Offset: 0x30
	// Line 869, Address: 0x1eda1c0, Func Offset: 0
	// Line 873, Address: 0x1eda1c4, Func Offset: 0x4
	// Line 876, Address: 0x1eda1f0, Func Offset: 0x30
	// Line 882, Address: 0x1eda1f8, Func Offset: 0x38
	// Line 886, Address: 0x1eda200, Func Offset: 0x40
	// Line 889, Address: 0x1eda20c, Func Offset: 0x4c
	// Func End, Address: 0x1eda218, Func Offset: 0x58
}

// 
// Start address: 0x1eda1f0
int ev_check_only_room()
{
	// Line 917, Address: 0x1eda1f0, Func Offset: 0
	// Line 919, Address: 0x1eda214, Func Offset: 0x24
	// Func End, Address: 0x1eda21c, Func Offset: 0x2c
}

// 
// Start address: 0x1eda220
_anon2* get_demo_info()
{
	_anon2* param;
	int i;
	int eileen_demo_num;
	unsigned long interval;
	int minute;
	_anon2 demo;
	_anon2 default_demo;
	// Line 985, Address: 0x1eda220, Func Offset: 0
	// Line 1008, Address: 0x1eda230, Func Offset: 0x10
	// Line 1009, Address: 0x1eda238, Func Offset: 0x18
	// Line 1010, Address: 0x1eda244, Func Offset: 0x24
	// Line 1011, Address: 0x1eda24c, Func Offset: 0x2c
	// Line 1014, Address: 0x1eda260, Func Offset: 0x40
	// Line 1015, Address: 0x1eda268, Func Offset: 0x48
	// Line 1018, Address: 0x1eda270, Func Offset: 0x50
	// Line 1022, Address: 0x1eda278, Func Offset: 0x58
	// Line 1025, Address: 0x1eda288, Func Offset: 0x68
	// Line 1026, Address: 0x1eda29c, Func Offset: 0x7c
	// Line 1027, Address: 0x1eda2a4, Func Offset: 0x84
	// Line 1030, Address: 0x1eda2a8, Func Offset: 0x88
	// Line 1036, Address: 0x1eda2e0, Func Offset: 0xc0
	// Line 1037, Address: 0x1eda2f8, Func Offset: 0xd8
	// Line 1040, Address: 0x1eda314, Func Offset: 0xf4
	// Line 1041, Address: 0x1eda320, Func Offset: 0x100
	// Line 1045, Address: 0x1eda32c, Func Offset: 0x10c
	// Line 1048, Address: 0x1eda330, Func Offset: 0x110
	// Line 1050, Address: 0x1eda33c, Func Offset: 0x11c
	// Line 1053, Address: 0x1eda368, Func Offset: 0x148
	// Line 1054, Address: 0x1eda370, Func Offset: 0x150
	// Line 1055, Address: 0x1eda380, Func Offset: 0x160
	// Line 1057, Address: 0x1eda388, Func Offset: 0x168
	// Line 1055, Address: 0x1eda38c, Func Offset: 0x16c
	// Line 1057, Address: 0x1eda390, Func Offset: 0x170
	// Line 1059, Address: 0x1eda3a0, Func Offset: 0x180
	// Line 1061, Address: 0x1eda3a8, Func Offset: 0x188
	// Line 1063, Address: 0x1eda3b0, Func Offset: 0x190
	// Line 1064, Address: 0x1eda3b8, Func Offset: 0x198
	// Line 1065, Address: 0x1eda3c8, Func Offset: 0x1a8
	// Line 1066, Address: 0x1eda3d0, Func Offset: 0x1b0
	// Line 1068, Address: 0x1eda3d8, Func Offset: 0x1b8
	// Line 1071, Address: 0x1eda3f8, Func Offset: 0x1d8
	// Line 1072, Address: 0x1eda400, Func Offset: 0x1e0
	// Func End, Address: 0x1eda414, Func Offset: 0x1f4
	// Line 913, Address: 0x1eda220, Func Offset: 0
	// Line 916, Address: 0x1eda22c, Func Offset: 0xc
	// Func End, Address: 0x1eda234, Func Offset: 0x14
}

// 
// Start address: 0x1eda420
void ev_peeproom_event_set(sfObj* obj, _anon0* src)
{
	int i;
	_EventInst* dst;
	unsigned int tmp;
	unsigned int ev_file[16];
	// Line 1076, Address: 0x1eda420, Func Offset: 0
	// Line 1089, Address: 0x1eda440, Func Offset: 0x20
	// Line 1090, Address: 0x1eda448, Func Offset: 0x28
	// Line 1093, Address: 0x1eda450, Func Offset: 0x30
	// Line 1090, Address: 0x1eda454, Func Offset: 0x34
	// Line 1093, Address: 0x1eda458, Func Offset: 0x38
	// Line 1094, Address: 0x1eda468, Func Offset: 0x48
	// Line 1096, Address: 0x1eda46c, Func Offset: 0x4c
	// Line 1094, Address: 0x1eda474, Func Offset: 0x54
	// Line 1096, Address: 0x1eda47c, Func Offset: 0x5c
	// Line 1098, Address: 0x1eda484, Func Offset: 0x64
	// Line 1100, Address: 0x1eda4b8, Func Offset: 0x98
	// Line 1101, Address: 0x1eda4bc, Func Offset: 0x9c
	// Line 1102, Address: 0x1eda4c4, Func Offset: 0xa4
	// Line 1103, Address: 0x1eda4c8, Func Offset: 0xa8
	// Line 1104, Address: 0x1eda4cc, Func Offset: 0xac
	// Line 1105, Address: 0x1eda4d4, Func Offset: 0xb4
	// Line 1106, Address: 0x1eda4d8, Func Offset: 0xb8
	// Line 1113, Address: 0x1eda4e0, Func Offset: 0xc0
	// Line 1117, Address: 0x1eda4f0, Func Offset: 0xd0
	// Line 1113, Address: 0x1eda4f4, Func Offset: 0xd4
	// Line 1117, Address: 0x1eda4f8, Func Offset: 0xd8
	// Line 1118, Address: 0x1eda508, Func Offset: 0xe8
	// Line 1120, Address: 0x1eda51c, Func Offset: 0xfc
	// Line 1122, Address: 0x1eda524, Func Offset: 0x104
	// Line 1125, Address: 0x1eda52c, Func Offset: 0x10c
	// Line 1126, Address: 0x1eda53c, Func Offset: 0x11c
	// Line 1127, Address: 0x1eda54c, Func Offset: 0x12c
	// Line 1128, Address: 0x1eda55c, Func Offset: 0x13c
	// Line 1129, Address: 0x1eda568, Func Offset: 0x148
	// Line 1130, Address: 0x1eda574, Func Offset: 0x154
	// Line 1131, Address: 0x1eda580, Func Offset: 0x160
	// Line 1132, Address: 0x1eda590, Func Offset: 0x170
	// Line 1134, Address: 0x1eda5a4, Func Offset: 0x184
	// Line 1135, Address: 0x1eda5d8, Func Offset: 0x1b8
	// Line 1138, Address: 0x1eda5e0, Func Offset: 0x1c0
	// Line 1139, Address: 0x1eda5f0, Func Offset: 0x1d0
	// Line 1140, Address: 0x1eda600, Func Offset: 0x1e0
	// Line 1143, Address: 0x1eda610, Func Offset: 0x1f0
	// Func End, Address: 0x1eda634, Func Offset: 0x214
}

// 
// Start address: 0x1eda640
void demo_setting(_anon0* info)
{
	int demo_type;
	int index;
	// Line 1147, Address: 0x1eda640, Func Offset: 0
	// Line 1148, Address: 0x1eda654, Func Offset: 0x14
	// Line 1152, Address: 0x1eda65c, Func Offset: 0x1c
	// Line 1154, Address: 0x1eda668, Func Offset: 0x28
	// Line 1157, Address: 0x1eda698, Func Offset: 0x58
	// Line 1159, Address: 0x1eda6a8, Func Offset: 0x68
	// Line 1162, Address: 0x1eda6b0, Func Offset: 0x70
	// Line 1163, Address: 0x1eda6b8, Func Offset: 0x78
	// Line 1165, Address: 0x1eda6c4, Func Offset: 0x84
	// Line 1167, Address: 0x1eda6cc, Func Offset: 0x8c
	// Line 1169, Address: 0x1eda6d4, Func Offset: 0x94
	// Line 1171, Address: 0x1eda6d8, Func Offset: 0x98
	// Line 1172, Address: 0x1eda6e0, Func Offset: 0xa0
	// Line 1174, Address: 0x1eda6e8, Func Offset: 0xa8
	// Line 1176, Address: 0x1eda6f8, Func Offset: 0xb8
	// Line 1180, Address: 0x1eda700, Func Offset: 0xc0
	// Func End, Address: 0x1eda714, Func Offset: 0xd4
}

// 
// Start address: 0x1eda720
int decide_next_demo_at_changable_undress(_anon0* info)
{
	int demo_type;
	int index;
	// Line 1184, Address: 0x1eda720, Func Offset: 0
	// Line 1187, Address: 0x1eda730, Func Offset: 0x10
	// Line 1188, Address: 0x1eda740, Func Offset: 0x20
	// Line 1190, Address: 0x1eda748, Func Offset: 0x28
	// Line 1192, Address: 0x1eda750, Func Offset: 0x30
	// Line 1194, Address: 0x1eda75c, Func Offset: 0x3c
	// Line 1195, Address: 0x1eda768, Func Offset: 0x48
	// Line 1196, Address: 0x1eda774, Func Offset: 0x54
	// Line 1197, Address: 0x1eda77c, Func Offset: 0x5c
	// Line 1204, Address: 0x1eda784, Func Offset: 0x64
	// Line 1207, Address: 0x1eda788, Func Offset: 0x68
	// Line 1206, Address: 0x1eda790, Func Offset: 0x70
	// Line 1207, Address: 0x1eda794, Func Offset: 0x74
	// Func End, Address: 0x1eda79c, Func Offset: 0x7c
}

// 
// Start address: 0x1eda7a0
int ev_peeproom_trgchk()
{
	// Line 1214, Address: 0x1eda7a0, Func Offset: 0
	// Line 1215, Address: 0x1eda7ac, Func Offset: 0xc
	// Func End, Address: 0x1eda7b4, Func Offset: 0x14
}

// 
// Start address: 0x1eda7c0
int ev_peeproom_init(sfObj* obj)
{
	_EventInst* evinst;
	_anon0* info;
	_anon2* src;
	_anon1* kobj;
	// Line 1218, Address: 0x1eda7c0, Func Offset: 0
	// Line 1220, Address: 0x1eda7d4, Func Offset: 0x14
	// Line 1222, Address: 0x1eda7e0, Func Offset: 0x20
	// Line 1223, Address: 0x1eda7f4, Func Offset: 0x34
	// Line 1228, Address: 0x1eda7fc, Func Offset: 0x3c
	// Line 1230, Address: 0x1eda804, Func Offset: 0x44
	// Line 1237, Address: 0x1eda808, Func Offset: 0x48
	// Line 1230, Address: 0x1eda810, Func Offset: 0x50
	// Line 1231, Address: 0x1eda814, Func Offset: 0x54
	// Line 1232, Address: 0x1eda81c, Func Offset: 0x5c
	// Line 1233, Address: 0x1eda824, Func Offset: 0x64
	// Line 1237, Address: 0x1eda82c, Func Offset: 0x6c
	// Line 1240, Address: 0x1eda834, Func Offset: 0x74
	// Line 1243, Address: 0x1eda83c, Func Offset: 0x7c
	// Line 1246, Address: 0x1eda844, Func Offset: 0x84
	// Line 1247, Address: 0x1eda858, Func Offset: 0x98
	// Line 1250, Address: 0x1eda860, Func Offset: 0xa0
	// Line 1251, Address: 0x1eda870, Func Offset: 0xb0
	// Line 1252, Address: 0x1eda878, Func Offset: 0xb8
	// Line 1254, Address: 0x1eda880, Func Offset: 0xc0
	// Line 1256, Address: 0x1eda89c, Func Offset: 0xdc
	// Line 1259, Address: 0x1eda8a4, Func Offset: 0xe4
	// Line 1262, Address: 0x1eda8ac, Func Offset: 0xec
	// Line 1265, Address: 0x1eda8b0, Func Offset: 0xf0
	// Line 1266, Address: 0x1eda8bc, Func Offset: 0xfc
	// Line 1269, Address: 0x1eda8c0, Func Offset: 0x100
	// Line 1270, Address: 0x1eda8cc, Func Offset: 0x10c
	// Line 1273, Address: 0x1eda8d8, Func Offset: 0x118
	// Line 1275, Address: 0x1eda8e0, Func Offset: 0x120
	// Line 1278, Address: 0x1eda8e4, Func Offset: 0x124
	// Line 1281, Address: 0x1eda8ec, Func Offset: 0x12c
	// Line 1284, Address: 0x1eda8f4, Func Offset: 0x134
	// Line 1286, Address: 0x1eda8f8, Func Offset: 0x138
	// Line 1284, Address: 0x1eda8fc, Func Offset: 0x13c
	// Line 1287, Address: 0x1eda900, Func Offset: 0x140
	// Func End, Address: 0x1eda918, Func Offset: 0x158
}

// 
// Start address: 0x1eda920
int ev_peeproom_exec(sfObj* obj)
{
	int rtv;
	_anon0* info;
	_anon1* kobj;
	unsigned int mdl_id;
	unsigned int tex_id;
	unsigned int shd_id;
	sfCharacter* chara;
	// Line 1290, Address: 0x1eda920, Func Offset: 0
	// Line 1291, Address: 0x1eda938, Func Offset: 0x18
	// Line 1290, Address: 0x1eda93c, Func Offset: 0x1c
	// Line 1294, Address: 0x1eda940, Func Offset: 0x20
	// Line 1290, Address: 0x1eda944, Func Offset: 0x24
	// Line 1295, Address: 0x1eda950, Func Offset: 0x30
	// Line 1298, Address: 0x1eda954, Func Offset: 0x34
	// Line 1299, Address: 0x1eda95c, Func Offset: 0x3c
	// Line 1301, Address: 0x1eda964, Func Offset: 0x44
	// Line 1302, Address: 0x1eda96c, Func Offset: 0x4c
	// Line 1306, Address: 0x1eda970, Func Offset: 0x50
	// Line 1307, Address: 0x1eda9a4, Func Offset: 0x84
	// Line 1308, Address: 0x1eda9a8, Func Offset: 0x88
	// Line 1309, Address: 0x1eda9b0, Func Offset: 0x90
	// Line 1310, Address: 0x1eda9b8, Func Offset: 0x98
	// Line 1311, Address: 0x1eda9bc, Func Offset: 0x9c
	// Line 1312, Address: 0x1eda9c4, Func Offset: 0xa4
	// Line 1313, Address: 0x1eda9c8, Func Offset: 0xa8
	// Line 1314, Address: 0x1eda9d0, Func Offset: 0xb0
	// Line 1315, Address: 0x1eda9d8, Func Offset: 0xb8
	// Line 1316, Address: 0x1eda9dc, Func Offset: 0xbc
	// Line 1317, Address: 0x1eda9e4, Func Offset: 0xc4
	// Line 1318, Address: 0x1eda9e8, Func Offset: 0xc8
	// Line 1319, Address: 0x1eda9f0, Func Offset: 0xd0
	// Line 1320, Address: 0x1eda9f8, Func Offset: 0xd8
	// Line 1324, Address: 0x1edaa00, Func Offset: 0xe0
	// Line 1325, Address: 0x1edaa0c, Func Offset: 0xec
	// Line 1326, Address: 0x1edaa14, Func Offset: 0xf4
	// Line 1328, Address: 0x1edaa18, Func Offset: 0xf8
	// Line 1330, Address: 0x1edaa40, Func Offset: 0x120
	// Line 1331, Address: 0x1edaa48, Func Offset: 0x128
	// Line 1332, Address: 0x1edaa50, Func Offset: 0x130
	// Line 1334, Address: 0x1edaa5c, Func Offset: 0x13c
	// Line 1335, Address: 0x1edaa64, Func Offset: 0x144
	// Line 1338, Address: 0x1edaa70, Func Offset: 0x150
	// Line 1339, Address: 0x1edaa78, Func Offset: 0x158
	// Line 1340, Address: 0x1edaa8c, Func Offset: 0x16c
	// Line 1341, Address: 0x1edaaa0, Func Offset: 0x180
	// Line 1343, Address: 0x1edaab8, Func Offset: 0x198
	// Line 1344, Address: 0x1edaac8, Func Offset: 0x1a8
	// Line 1347, Address: 0x1edaad0, Func Offset: 0x1b0
	// Line 1351, Address: 0x1edaae4, Func Offset: 0x1c4
	// Line 1352, Address: 0x1edaaf0, Func Offset: 0x1d0
	// Line 1353, Address: 0x1edaafc, Func Offset: 0x1dc
	// Line 1357, Address: 0x1edab08, Func Offset: 0x1e8
	// Line 1359, Address: 0x1edab14, Func Offset: 0x1f4
	// Line 1360, Address: 0x1edab1c, Func Offset: 0x1fc
	// Line 1361, Address: 0x1edab24, Func Offset: 0x204
	// Line 1362, Address: 0x1edab28, Func Offset: 0x208
	// Line 1364, Address: 0x1edab48, Func Offset: 0x228
	// Line 1365, Address: 0x1edab54, Func Offset: 0x234
	// Line 1367, Address: 0x1edab58, Func Offset: 0x238
	// Line 1368, Address: 0x1edab64, Func Offset: 0x244
	// Line 1370, Address: 0x1edab74, Func Offset: 0x254
	// Line 1373, Address: 0x1edab7c, Func Offset: 0x25c
	// Line 1375, Address: 0x1edab84, Func Offset: 0x264
	// Line 1376, Address: 0x1edab88, Func Offset: 0x268
	// Line 1377, Address: 0x1edab98, Func Offset: 0x278
	// Line 1378, Address: 0x1edaba0, Func Offset: 0x280
	// Line 1380, Address: 0x1edaba8, Func Offset: 0x288
	// Line 1382, Address: 0x1edabb0, Func Offset: 0x290
	// Line 1383, Address: 0x1edabb4, Func Offset: 0x294
	// Line 1386, Address: 0x1edabc0, Func Offset: 0x2a0
	// Line 1387, Address: 0x1edabd0, Func Offset: 0x2b0
	// Line 1388, Address: 0x1edabd8, Func Offset: 0x2b8
	// Line 1393, Address: 0x1edabe0, Func Offset: 0x2c0
	// Line 1394, Address: 0x1edabe8, Func Offset: 0x2c8
	// Line 1398, Address: 0x1edabf0, Func Offset: 0x2d0
	// Line 1400, Address: 0x1edabf4, Func Offset: 0x2d4
	// Line 1405, Address: 0x1edac04, Func Offset: 0x2e4
	// Line 1403, Address: 0x1edac08, Func Offset: 0x2e8
	// Line 1410, Address: 0x1edac0c, Func Offset: 0x2ec
	// Line 1412, Address: 0x1edac10, Func Offset: 0x2f0
	// Line 1413, Address: 0x1edac20, Func Offset: 0x300
	// Line 1414, Address: 0x1edac24, Func Offset: 0x304
	// Func End, Address: 0x1edac4c, Func Offset: 0x32c
}

// 
// Start address: 0x1edac50
int ev_peeproom_draw(sfObj* obj)
{
	_anon0* info;
	// Line 1417, Address: 0x1edac50, Func Offset: 0
	// Line 1418, Address: 0x1edac60, Func Offset: 0x10
	// Line 1422, Address: 0x1edac68, Func Offset: 0x18
	// Line 1423, Address: 0x1edac70, Func Offset: 0x20
	// Line 1424, Address: 0x1edac78, Func Offset: 0x28
	// Line 1426, Address: 0x1edac80, Func Offset: 0x30
	// Line 1427, Address: 0x1edac90, Func Offset: 0x40
	// Line 1428, Address: 0x1edac9c, Func Offset: 0x4c
	// Line 1430, Address: 0x1edacb0, Func Offset: 0x60
	// Line 1432, Address: 0x1edacb8, Func Offset: 0x68
	// Line 1434, Address: 0x1edacc0, Func Offset: 0x70
	// Line 1439, Address: 0x1edacc8, Func Offset: 0x78
	// Line 1440, Address: 0x1edacd8, Func Offset: 0x88
	// Line 1444, Address: 0x1edace0, Func Offset: 0x90
	// Line 1443, Address: 0x1edace8, Func Offset: 0x98
	// Line 1444, Address: 0x1edacec, Func Offset: 0x9c
	// Func End, Address: 0x1edacf4, Func Offset: 0xa4
}

// 
// Start address: 0x1edad00
int ev_peeproom_end(sfObj* obj)
{
	_anon0* info;
	_anon1* kobj;
	// Line 1447, Address: 0x1edad00, Func Offset: 0
	// Line 1448, Address: 0x1edad0c, Func Offset: 0xc
	// Line 1449, Address: 0x1edad1c, Func Offset: 0x1c
	// Line 1451, Address: 0x1edad28, Func Offset: 0x28
	// Line 1454, Address: 0x1edad30, Func Offset: 0x30
	// Line 1456, Address: 0x1edad38, Func Offset: 0x38
	// Line 1457, Address: 0x1edad40, Func Offset: 0x40
	// Line 1460, Address: 0x1edad48, Func Offset: 0x48
	// Line 1463, Address: 0x1edad50, Func Offset: 0x50
	// Line 1465, Address: 0x1edad5c, Func Offset: 0x5c
	// Line 1466, Address: 0x1edad64, Func Offset: 0x64
	// Line 1469, Address: 0x1edad68, Func Offset: 0x68
	// Line 1470, Address: 0x1edad70, Func Offset: 0x70
	// Line 1471, Address: 0x1edada4, Func Offset: 0xa4
	// Line 1470, Address: 0x1edada8, Func Offset: 0xa8
	// Line 1472, Address: 0x1edadac, Func Offset: 0xac
	// Line 1473, Address: 0x1edadb4, Func Offset: 0xb4
	// Line 1475, Address: 0x1edadbc, Func Offset: 0xbc
	// Line 1473, Address: 0x1edadc0, Func Offset: 0xc0
	// Line 1477, Address: 0x1edadc4, Func Offset: 0xc4
	// Line 1478, Address: 0x1edadcc, Func Offset: 0xcc
	// Line 1480, Address: 0x1edadd4, Func Offset: 0xd4
	// Line 1482, Address: 0x1edaddc, Func Offset: 0xdc
	// Line 1483, Address: 0x1edade4, Func Offset: 0xe4
	// Line 1484, Address: 0x1edade8, Func Offset: 0xe8
	// Line 1488, Address: 0x1edadf0, Func Offset: 0xf0
	// Line 1491, Address: 0x1edadf8, Func Offset: 0xf8
	// Line 1493, Address: 0x1edadfc, Func Offset: 0xfc
	// Line 1491, Address: 0x1edae00, Func Offset: 0x100
	// Line 1494, Address: 0x1edae04, Func Offset: 0x104
	// Func End, Address: 0x1edae14, Func Offset: 0x114
}

