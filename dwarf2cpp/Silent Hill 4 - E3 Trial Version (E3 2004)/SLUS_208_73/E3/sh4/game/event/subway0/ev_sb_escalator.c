typedef struct sgBone;
typedef struct _anon0;
typedef struct sfObj;
typedef struct sgAnime;
typedef struct sgIKHandle;
typedef struct _anon1;
typedef struct _anon2;
typedef union _anon3;
typedef struct _EventDriver;
typedef struct sgSVModel;
typedef struct sfCharacter;
typedef struct _anon4;
typedef struct _anon5;
typedef enum sgIKSolveResult : unsigned char;
typedef struct _GAME_WORK;
typedef struct EventFlag;

typedef sgIKSolveResult(*type_0)();
typedef void(*type_6)(sgAnime*, int);
typedef void(*type_7)(sfObj*);
typedef int(*type_9)(sfObj*);
typedef int(*type_12)(sfObj*);
typedef int(*type_13)(sfObj*);
typedef void(*type_14)(sfObj*);
typedef int(*type_15)(sfObj*);
typedef int(*type_16)(sfObj*);
typedef void(*type_21)(_anon4*, int, int, float*);

typedef float type_1[4];
typedef int type_2[1];
typedef unsigned char type_3[14];
typedef void* type_4[4];
typedef _anon3 type_5[256];
typedef float type_8[4];
typedef float type_10[4][4];
typedef unsigned char type_11[4];
typedef _anon3 type_17[4];
typedef int type_18[1];
typedef int type_19[1];
typedef short type_20[2];
typedef float type_22[4];
typedef unsigned short type_23[2];
typedef char type_24[4];
typedef unsigned char type_25[4];
typedef float type_26[1];
typedef int type_27[1];
typedef int type_28[1];
typedef int type_29[1];
typedef unsigned char type_30[14];
typedef int type_31[1];
typedef unsigned char type_32[320];
typedef float type_33[4][2];
typedef int type_34[1];
typedef _anon3 type_35[10];

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
	float pos[4];
	float rot_y;
	sfCharacter chara;
	sgAnime* anim;
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
	float pos[4];
	float rot_y;
	sfCharacter chara;
	sfCharacter bone;
	sgAnime* anim;
};

struct _anon2
{
	int id;
	float x;
	float y;
	float z;
	float rot;
	int id1;
	int id2;
	int id3;
	int id4;
	_anon3 dmy[10];
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

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
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

struct EventFlag
{
	unsigned char flag[320];
};

unsigned char up_skh[14];
unsigned char down_skh[14];
_EventDriver ev_sb07_es_down;
_EventDriver ev_sb07_es_up;
_EventDriver ev_sb14_es_down;
_EventDriver ev_sb14_es_up;
_EventDriver ev_sb13_es_down0;
_EventDriver ev_sb13_es_down1;
_EventDriver ev_sb13_es_up0;
_EventDriver ev_sb13_es_up1;
_GAME_WORK gamew;
EventFlag event_flag;
_EventDriver ev_sb13_flagset;

int dummy_trgchk();
int dummy_construct();
void EscalatorConstruct(sfObj* obj, unsigned int model_id, unsigned int emt_id, unsigned int anime_id);
void Sb01EscalatorExec(sfObj* obj);
void Sb01EscalatorConstruct(sfObj* obj);
void Sb01EscalatorDestruct(sfObj* obj);
void Sb01EscalatorDraw(sfObj* obj);
int Sb07EscalatorConstruct(sfObj* obj);
int Sb07MoveExec(sfObj* obj);
void Sb14EscalatorConstruct(sfObj* obj);
void Sb22EscalatorConstruct(sfObj* obj);
int Sb14MoveExec(sfObj* obj);
void LongEscalatorConstruct(sfObj* obj, unsigned int model_id, unsigned int bone_id, unsigned int emt_id, unsigned int anime_id);
void Sb13LongEscalatorConstruct(sfObj* obj);
void Sb13LongEscalatorExec(sfObj* obj);
void Sb13LongEscalatorDraw(sfObj* obj);
void Sb13LongEscalatorDestruct(sfObj* obj);
int Sb13MoveConstruct(sfObj* obj);
int Sb13MoveExec(sfObj* obj);
void sb_escalator_se_by_pos_init(sfObj* obj);
void sb_escalator_se_init();
void sb_escalator_se_exec();
void sb_escalator_se_by_pos_exec(sfObj* obj);
void sb_escalator_se_draw();
void sb_escalator_se_end();
int set_f05boss_init();

// 
// Start address: 0x1ed48c0
int dummy_trgchk()
{
	// Line 83, Address: 0x1ed48c0, Func Offset: 0
	// Func End, Address: 0x1ed48c8, Func Offset: 0x8
}

// 
// Start address: 0x1ed48d0
int dummy_construct()
{
	// Line 84, Address: 0x1ed48d0, Func Offset: 0
	// Func End, Address: 0x1ed48d8, Func Offset: 0x8
}

// 
// Start address: 0x1ed48e0
void EscalatorConstruct(sfObj* obj, unsigned int model_id, unsigned int emt_id, unsigned int anime_id)
{
	_anon2* fig_wk;
	_anon0* wk;
	float pos[4];
	// Line 641, Address: 0x1ed48e0, Func Offset: 0
	// Line 642, Address: 0x1ed48f0, Func Offset: 0x10
	// Func End, Address: 0x1ed48f8, Func Offset: 0x18
	// Line 238, Address: 0x1ed48e0, Func Offset: 0
	// Line 239, Address: 0x1ed4908, Func Offset: 0x28
	// Line 240, Address: 0x1ed4910, Func Offset: 0x30
	// Line 241, Address: 0x1ed491c, Func Offset: 0x3c
	// Line 243, Address: 0x1ed4930, Func Offset: 0x50
	// Line 247, Address: 0x1ed4938, Func Offset: 0x58
	// Line 251, Address: 0x1ed495c, Func Offset: 0x7c
	// Line 253, Address: 0x1ed4964, Func Offset: 0x84
	// Line 254, Address: 0x1ed497c, Func Offset: 0x9c
	// Line 256, Address: 0x1ed4984, Func Offset: 0xa4
	// Line 261, Address: 0x1ed4988, Func Offset: 0xa8
	// Line 256, Address: 0x1ed4990, Func Offset: 0xb0
	// Line 257, Address: 0x1ed4994, Func Offset: 0xb4
	// Line 258, Address: 0x1ed499c, Func Offset: 0xbc
	// Line 261, Address: 0x1ed49a4, Func Offset: 0xc4
	// Line 263, Address: 0x1ed49ac, Func Offset: 0xcc
	// Line 266, Address: 0x1ed49b4, Func Offset: 0xd4
	// Line 267, Address: 0x1ed49b8, Func Offset: 0xd8
	// Func End, Address: 0x1ed49d8, Func Offset: 0xf8
	// Line 271, Address: 0x1ed48e0, Func Offset: 0
	// Line 272, Address: 0x1ed48ec, Func Offset: 0xc
	// Line 274, Address: 0x1ed48f4, Func Offset: 0x14
	// Line 275, Address: 0x1ed48fc, Func Offset: 0x1c
	// Line 277, Address: 0x1ed4900, Func Offset: 0x20
	// Line 276, Address: 0x1ed4904, Func Offset: 0x24
	// Line 277, Address: 0x1ed4908, Func Offset: 0x28
	// Func End, Address: 0x1ed4910, Func Offset: 0x30
}

// 
// Start address: 0x1ed49e0
void Sb01EscalatorExec(sfObj* obj)
{
	// Line 271, Address: 0x1ed49e0, Func Offset: 0
	// Line 272, Address: 0x1ed49e4, Func Offset: 0x4
	// Line 274, Address: 0x1ed49ec, Func Offset: 0xc
	// Line 276, Address: 0x1ed49f8, Func Offset: 0x18
	// Func End, Address: 0x1ed4a04, Func Offset: 0x24
}

// 
// Start address: 0x1ed4a10
void Sb01EscalatorConstruct(sfObj* obj)
{
	// Line 719, Address: 0x1ed4a10, Func Offset: 0
	// Line 720, Address: 0x1ed4a24, Func Offset: 0x14
	// Line 721, Address: 0x1ed4a2c, Func Offset: 0x1c
	// Line 722, Address: 0x1ed4a30, Func Offset: 0x20
	// Func End, Address: 0x1ed4a38, Func Offset: 0x28
	// Line 280, Address: 0x1ed4a10, Func Offset: 0
	// Func End, Address: 0x1ed4a2c, Func Offset: 0x1c
}

// 
// Start address: 0x1ed4a30
void Sb01EscalatorDestruct(sfObj* obj)
{
	// Line 284, Address: 0x1ed4a30, Func Offset: 0
	// Line 285, Address: 0x1ed4a34, Func Offset: 0x4
	// Line 288, Address: 0x1ed4a3c, Func Offset: 0xc
	// Line 290, Address: 0x1ed4a48, Func Offset: 0x18
	// Func End, Address: 0x1ed4a54, Func Offset: 0x24
}

// 
// Start address: 0x1ed4a60
void Sb01EscalatorDraw(sfObj* obj)
{
	// Line 780, Address: 0x1ed4a60, Func Offset: 0
	// Line 781, Address: 0x1ed4a74, Func Offset: 0x14
	// Line 782, Address: 0x1ed4a7c, Func Offset: 0x1c
	// Line 783, Address: 0x1ed4a80, Func Offset: 0x20
	// Func End, Address: 0x1ed4a88, Func Offset: 0x28
	// Line 293, Address: 0x1ed4a60, Func Offset: 0
	// Line 294, Address: 0x1ed4a64, Func Offset: 0x4
	// Line 297, Address: 0x1ed4a6c, Func Offset: 0xc
	// Line 299, Address: 0x1ed4a78, Func Offset: 0x18
	// Func End, Address: 0x1ed4a84, Func Offset: 0x24
	// Line 340, Address: 0x1ed4a60, Func Offset: 0
	// Func End, Address: 0x1ed4a68, Func Offset: 0x8
	// Line 193, Address: 0x1ed4a60, Func Offset: 0
	// Line 196, Address: 0x1ed4a64, Func Offset: 0x4
	// Line 193, Address: 0x1ed4a68, Func Offset: 0x8
	// Line 195, Address: 0x1ed4a70, Func Offset: 0x10
	// Line 196, Address: 0x1ed4a74, Func Offset: 0x14
	// Line 201, Address: 0x1ed4a98, Func Offset: 0x38
	// Line 202, Address: 0x1ed4aac, Func Offset: 0x4c
	// Line 205, Address: 0x1ed4ab4, Func Offset: 0x54
	// Line 207, Address: 0x1ed4ab8, Func Offset: 0x58
	// Line 206, Address: 0x1ed4abc, Func Offset: 0x5c
	// Line 207, Address: 0x1ed4ac0, Func Offset: 0x60
	// Func End, Address: 0x1ed4acc, Func Offset: 0x6c
}

// 
// Start address: 0x1ed4a90
int Sb07EscalatorConstruct(sfObj* obj)
{
	// Line 785, Address: 0x1ed4a90, Func Offset: 0
	// Line 786, Address: 0x1ed4a98, Func Offset: 0x8
	// Line 787, Address: 0x1ed4aa8, Func Offset: 0x18
	// Line 790, Address: 0x1ed4ab0, Func Offset: 0x20
	// Line 791, Address: 0x1ed4b00, Func Offset: 0x70
	// Func End, Address: 0x1ed4b0c, Func Offset: 0x7c
	// Line 305, Address: 0x1ed4a90, Func Offset: 0
	// Line 306, Address: 0x1ed4a94, Func Offset: 0x4
	// Line 309, Address: 0x1ed4a9c, Func Offset: 0xc
	// Line 310, Address: 0x1ed4aa8, Func Offset: 0x18
	// Line 311, Address: 0x1ed4ac0, Func Offset: 0x30
	// Line 313, Address: 0x1ed4ac8, Func Offset: 0x38
	// Line 315, Address: 0x1ed4ae4, Func Offset: 0x54
	// Line 318, Address: 0x1ed4ae8, Func Offset: 0x58
	// Line 317, Address: 0x1ed4aec, Func Offset: 0x5c
	// Line 318, Address: 0x1ed4af0, Func Offset: 0x60
	// Func End, Address: 0x1ed4af8, Func Offset: 0x68
}

// 
// Start address: 0x1ed4b00
int Sb07MoveExec(sfObj* obj)
{
	int rtv;
	float move;
	// Line 321, Address: 0x1ed4b00, Func Offset: 0
	// Line 324, Address: 0x1ed4b18, Func Offset: 0x18
	// Line 329, Address: 0x1ed4b20, Func Offset: 0x20
	// Line 332, Address: 0x1ed4b3c, Func Offset: 0x3c
	// Line 331, Address: 0x1ed4b50, Func Offset: 0x50
	// Line 332, Address: 0x1ed4b54, Func Offset: 0x54
	// Line 333, Address: 0x1ed4b5c, Func Offset: 0x5c
	// Line 334, Address: 0x1ed4b68, Func Offset: 0x68
	// Line 336, Address: 0x1ed4b84, Func Offset: 0x84
	// Line 339, Address: 0x1ed4b90, Func Offset: 0x90
	// Line 340, Address: 0x1ed4ba4, Func Offset: 0xa4
	// Line 341, Address: 0x1ed4ba8, Func Offset: 0xa8
	// Line 342, Address: 0x1ed4bbc, Func Offset: 0xbc
	// Line 345, Address: 0x1ed4bc0, Func Offset: 0xc0
	// Line 346, Address: 0x1ed4bc4, Func Offset: 0xc4
	// Func End, Address: 0x1ed4bdc, Func Offset: 0xdc
	// Line 362, Address: 0x1ed4b00, Func Offset: 0
	// Line 363, Address: 0x1ed4b0c, Func Offset: 0xc
	// Line 365, Address: 0x1ed4b14, Func Offset: 0x14
	// Line 366, Address: 0x1ed4b1c, Func Offset: 0x1c
	// Line 368, Address: 0x1ed4b20, Func Offset: 0x20
	// Line 367, Address: 0x1ed4b24, Func Offset: 0x24
	// Line 368, Address: 0x1ed4b28, Func Offset: 0x28
	// Func End, Address: 0x1ed4b30, Func Offset: 0x30
}

// 
// Start address: 0x1ed4be0
void Sb14EscalatorConstruct(sfObj* obj)
{
	// Line 351, Address: 0x1ed4be0, Func Offset: 0
	// Line 352, Address: 0x1ed4be4, Func Offset: 0x4
	// Line 355, Address: 0x1ed4bec, Func Offset: 0xc
	// Line 356, Address: 0x1ed4bf8, Func Offset: 0x18
	// Line 357, Address: 0x1ed4c10, Func Offset: 0x30
	// Line 359, Address: 0x1ed4c18, Func Offset: 0x38
	// Line 361, Address: 0x1ed4c34, Func Offset: 0x54
	// Line 362, Address: 0x1ed4c38, Func Offset: 0x58
	// Func End, Address: 0x1ed4c44, Func Offset: 0x64
}

// 
// Start address: 0x1ed4c50
void Sb22EscalatorConstruct(sfObj* obj)
{
	// Line 366, Address: 0x1ed4c50, Func Offset: 0
	// Line 367, Address: 0x1ed4c54, Func Offset: 0x4
	// Line 370, Address: 0x1ed4c5c, Func Offset: 0xc
	// Line 371, Address: 0x1ed4c68, Func Offset: 0x18
	// Line 372, Address: 0x1ed4c80, Func Offset: 0x30
	// Line 374, Address: 0x1ed4c88, Func Offset: 0x38
	// Line 376, Address: 0x1ed4ca4, Func Offset: 0x54
	// Line 377, Address: 0x1ed4ca8, Func Offset: 0x58
	// Func End, Address: 0x1ed4cb4, Func Offset: 0x64
	// Line 665, Address: 0x1ed4c50, Func Offset: 0
	// Line 666, Address: 0x1ed4c64, Func Offset: 0x14
	// Line 669, Address: 0x1ed4c6c, Func Offset: 0x1c
	// Line 670, Address: 0x1ed4cb4, Func Offset: 0x64
	// Line 671, Address: 0x1ed4cb8, Func Offset: 0x68
	// Line 674, Address: 0x1ed4ccc, Func Offset: 0x7c
	// Line 676, Address: 0x1ed4cd8, Func Offset: 0x88
	// Line 678, Address: 0x1ed4cdc, Func Offset: 0x8c
	// Line 680, Address: 0x1ed4ce4, Func Offset: 0x94
	// Line 682, Address: 0x1ed4ce8, Func Offset: 0x98
	// Line 684, Address: 0x1ed4cfc, Func Offset: 0xac
	// Line 685, Address: 0x1ed4d04, Func Offset: 0xb4
	// Line 687, Address: 0x1ed4d0c, Func Offset: 0xbc
	// Line 688, Address: 0x1ed4d14, Func Offset: 0xc4
	// Line 690, Address: 0x1ed4d18, Func Offset: 0xc8
	// Line 692, Address: 0x1ed4d28, Func Offset: 0xd8
	// Line 695, Address: 0x1ed4d44, Func Offset: 0xf4
	// Line 696, Address: 0x1ed4d48, Func Offset: 0xf8
	// Line 698, Address: 0x1ed4d50, Func Offset: 0x100
	// Line 701, Address: 0x1ed4d58, Func Offset: 0x108
	// Line 703, Address: 0x1ed4d5c, Func Offset: 0x10c
	// Line 701, Address: 0x1ed4d64, Func Offset: 0x114
	// Line 703, Address: 0x1ed4d6c, Func Offset: 0x11c
	// Line 704, Address: 0x1ed4d80, Func Offset: 0x130
	// Line 706, Address: 0x1ed4d8c, Func Offset: 0x13c
	// Line 708, Address: 0x1ed4d94, Func Offset: 0x144
	// Line 709, Address: 0x1ed4d9c, Func Offset: 0x14c
	// Line 711, Address: 0x1ed4da0, Func Offset: 0x150
	// Line 712, Address: 0x1ed4db0, Func Offset: 0x160
	// Line 723, Address: 0x1ed4db8, Func Offset: 0x168
	// Line 722, Address: 0x1ed4dc0, Func Offset: 0x170
	// Line 723, Address: 0x1ed4dc4, Func Offset: 0x174
	// Func End, Address: 0x1ed4dd0, Func Offset: 0x180
}

// 
// Start address: 0x1ed4cc0
int Sb14MoveExec(sfObj* obj)
{
	int rtv;
	float move;
	// Line 381, Address: 0x1ed4cc0, Func Offset: 0
	// Line 384, Address: 0x1ed4cd8, Func Offset: 0x18
	// Line 389, Address: 0x1ed4ce0, Func Offset: 0x20
	// Line 391, Address: 0x1ed4cfc, Func Offset: 0x3c
	// Line 392, Address: 0x1ed4d08, Func Offset: 0x48
	// Line 393, Address: 0x1ed4d10, Func Offset: 0x50
	// Line 396, Address: 0x1ed4d2c, Func Offset: 0x6c
	// Line 395, Address: 0x1ed4d40, Func Offset: 0x80
	// Line 396, Address: 0x1ed4d44, Func Offset: 0x84
	// Line 397, Address: 0x1ed4d4c, Func Offset: 0x8c
	// Line 399, Address: 0x1ed4d50, Func Offset: 0x90
	// Line 400, Address: 0x1ed4d64, Func Offset: 0xa4
	// Line 402, Address: 0x1ed4d68, Func Offset: 0xa8
	// Line 403, Address: 0x1ed4d7c, Func Offset: 0xbc
	// Line 406, Address: 0x1ed4d80, Func Offset: 0xc0
	// Line 407, Address: 0x1ed4d84, Func Offset: 0xc4
	// Func End, Address: 0x1ed4d9c, Func Offset: 0xdc
	// Line 546, Address: 0x1ed4cc0, Func Offset: 0
	// Func End, Address: 0x1ed4cdc, Func Offset: 0x1c
}

// 
// Start address: 0x1ed4da0
void LongEscalatorConstruct(sfObj* obj, unsigned int model_id, unsigned int bone_id, unsigned int emt_id, unsigned int anime_id)
{
	_anon2* fig_wk;
	_anon1* wk;
	float pos[4];
	// Line 416, Address: 0x1ed4da0, Func Offset: 0
	// Line 417, Address: 0x1ed4dd0, Func Offset: 0x30
	// Line 418, Address: 0x1ed4dd8, Func Offset: 0x38
	// Line 419, Address: 0x1ed4de4, Func Offset: 0x44
	// Line 421, Address: 0x1ed4df8, Func Offset: 0x58
	// Line 425, Address: 0x1ed4e00, Func Offset: 0x60
	// Line 429, Address: 0x1ed4e24, Func Offset: 0x84
	// Line 432, Address: 0x1ed4e30, Func Offset: 0x90
	// Line 437, Address: 0x1ed4e54, Func Offset: 0xb4
	// Line 438, Address: 0x1ed4e5c, Func Offset: 0xbc
	// Line 440, Address: 0x1ed4e74, Func Offset: 0xd4
	// Line 442, Address: 0x1ed4e7c, Func Offset: 0xdc
	// Line 447, Address: 0x1ed4e80, Func Offset: 0xe0
	// Line 442, Address: 0x1ed4e88, Func Offset: 0xe8
	// Line 443, Address: 0x1ed4e8c, Func Offset: 0xec
	// Line 444, Address: 0x1ed4e94, Func Offset: 0xf4
	// Line 447, Address: 0x1ed4e9c, Func Offset: 0xfc
	// Line 448, Address: 0x1ed4ea4, Func Offset: 0x104
	// Line 450, Address: 0x1ed4eb0, Func Offset: 0x110
	// Line 454, Address: 0x1ed4eb8, Func Offset: 0x118
	// Func End, Address: 0x1ed4edc, Func Offset: 0x13c
}

// 
// Start address: 0x1ed4ee0
void Sb13LongEscalatorConstruct(sfObj* obj)
{
	// Line 458, Address: 0x1ed4ee0, Func Offset: 0
	// Line 459, Address: 0x1ed4ee4, Func Offset: 0x4
	// Line 462, Address: 0x1ed4eec, Func Offset: 0xc
	// Line 463, Address: 0x1ed4ef8, Func Offset: 0x18
	// Line 466, Address: 0x1ed4f18, Func Offset: 0x38
	// Line 468, Address: 0x1ed4f20, Func Offset: 0x40
	// Line 472, Address: 0x1ed4f44, Func Offset: 0x64
	// Line 473, Address: 0x1ed4f48, Func Offset: 0x68
	// Func End, Address: 0x1ed4f54, Func Offset: 0x74
	// Line 311, Address: 0x1ed4ee0, Func Offset: 0
	// Func End, Address: 0x1ed4ee8, Func Offset: 0x8
}

// 
// Start address: 0x1ed4f60
void Sb13LongEscalatorExec(sfObj* obj)
{
	// Line 1019, Address: 0x1ed4f60, Func Offset: 0
	// Line 1020, Address: 0x1ed4f64, Func Offset: 0x4
	// Line 1019, Address: 0x1ed4f68, Func Offset: 0x8
	// Line 1020, Address: 0x1ed4f70, Func Offset: 0x10
	// Line 1021, Address: 0x1ed4f80, Func Offset: 0x20
	// Line 1024, Address: 0x1ed4f88, Func Offset: 0x28
	// Line 1025, Address: 0x1ed4f90, Func Offset: 0x30
	// Line 1027, Address: 0x1ed4fa0, Func Offset: 0x40
	// Line 1031, Address: 0x1ed4fa8, Func Offset: 0x48
	// Line 1030, Address: 0x1ed4fac, Func Offset: 0x4c
	// Line 1031, Address: 0x1ed4fb4, Func Offset: 0x54
	// Line 1032, Address: 0x1ed4fdc, Func Offset: 0x7c
	// Line 1033, Address: 0x1ed4fe0, Func Offset: 0x80
	// Line 1034, Address: 0x1ed4fe8, Func Offset: 0x88
	// Line 1035, Address: 0x1ed4ff4, Func Offset: 0x94
	// Line 1036, Address: 0x1ed4ffc, Func Offset: 0x9c
	// Line 1037, Address: 0x1ed5000, Func Offset: 0xa0
	// Line 1038, Address: 0x1ed5008, Func Offset: 0xa8
	// Line 1037, Address: 0x1ed5010, Func Offset: 0xb0
	// Line 1038, Address: 0x1ed5014, Func Offset: 0xb4
	// Line 1039, Address: 0x1ed5018, Func Offset: 0xb8
	// Line 1041, Address: 0x1ed5020, Func Offset: 0xc0
	// Line 1042, Address: 0x1ed5028, Func Offset: 0xc8
	// Line 1041, Address: 0x1ed5030, Func Offset: 0xd0
	// Line 1042, Address: 0x1ed5034, Func Offset: 0xd4
	// Line 1043, Address: 0x1ed5038, Func Offset: 0xd8
	// Line 1045, Address: 0x1ed5040, Func Offset: 0xe0
	// Line 1046, Address: 0x1ed5048, Func Offset: 0xe8
	// Line 1045, Address: 0x1ed5050, Func Offset: 0xf0
	// Line 1046, Address: 0x1ed5054, Func Offset: 0xf4
	// Line 1050, Address: 0x1ed505c, Func Offset: 0xfc
	// Line 1051, Address: 0x1ed5074, Func Offset: 0x114
	// Line 1053, Address: 0x1ed5078, Func Offset: 0x118
	// Line 1054, Address: 0x1ed5080, Func Offset: 0x120
	// Func End, Address: 0x1ed5090, Func Offset: 0x130
	// Line 476, Address: 0x1ed4f60, Func Offset: 0
	// Line 477, Address: 0x1ed4f64, Func Offset: 0x4
	// Line 480, Address: 0x1ed4f6c, Func Offset: 0xc
	// Line 482, Address: 0x1ed4f78, Func Offset: 0x18
	// Func End, Address: 0x1ed4f84, Func Offset: 0x24
}

// 
// Start address: 0x1ed4f90
void Sb13LongEscalatorDraw(sfObj* obj)
{
	unsigned char* skh;
	_anon1* wk;
	int i;
	int num;
	float pos[4];
	sgBone* anime_bone;
	// Line 485, Address: 0x1ed4f90, Func Offset: 0
	// Line 486, Address: 0x1ed4fa4, Func Offset: 0x14
	// Line 492, Address: 0x1ed4fac, Func Offset: 0x1c
	// Line 493, Address: 0x1ed4fb8, Func Offset: 0x28
	// Line 494, Address: 0x1ed4fbc, Func Offset: 0x2c
	// Line 495, Address: 0x1ed4fc0, Func Offset: 0x30
	// Line 497, Address: 0x1ed4fc8, Func Offset: 0x38
	// Line 498, Address: 0x1ed4fd0, Func Offset: 0x40
	// Line 499, Address: 0x1ed4fd4, Func Offset: 0x44
	// Line 501, Address: 0x1ed4fd8, Func Offset: 0x48
	// Line 506, Address: 0x1ed4fe8, Func Offset: 0x58
	// Line 508, Address: 0x1ed4ff4, Func Offset: 0x64
	// Line 509, Address: 0x1ed5000, Func Offset: 0x70
	// Line 510, Address: 0x1ed500c, Func Offset: 0x7c
	// Line 513, Address: 0x1ed5014, Func Offset: 0x84
	// Line 514, Address: 0x1ed5024, Func Offset: 0x94
	// Line 515, Address: 0x1ed5028, Func Offset: 0x98
	// Func End, Address: 0x1ed5044, Func Offset: 0xb4
}

// 
// Start address: 0x1ed5050
void Sb13LongEscalatorDestruct(sfObj* obj)
{
	_anon1* wk;
	// Line 518, Address: 0x1ed5050, Func Offset: 0
	// Line 519, Address: 0x1ed5058, Func Offset: 0x8
	// Line 520, Address: 0x1ed5060, Func Offset: 0x10
	// Line 522, Address: 0x1ed5064, Func Offset: 0x14
	// Line 523, Address: 0x1ed506c, Func Offset: 0x1c
	// Line 524, Address: 0x1ed5074, Func Offset: 0x24
	// Line 525, Address: 0x1ed5078, Func Offset: 0x28
	// Func End, Address: 0x1ed5088, Func Offset: 0x38
}

// 
// Start address: 0x1ed5090
int Sb13MoveConstruct(sfObj* obj)
{
	// Line 1057, Address: 0x1ed5090, Func Offset: 0
	// Line 1058, Address: 0x1ed50a4, Func Offset: 0x14
	// Line 1063, Address: 0x1ed50a8, Func Offset: 0x18
	// Line 1066, Address: 0x1ed50b0, Func Offset: 0x20
	// Line 1070, Address: 0x1ed50d0, Func Offset: 0x40
	// Line 1071, Address: 0x1ed50dc, Func Offset: 0x4c
	// Line 1072, Address: 0x1ed50e4, Func Offset: 0x54
	// Line 1073, Address: 0x1ed50ec, Func Offset: 0x5c
	// Line 1075, Address: 0x1ed50f0, Func Offset: 0x60
	// Line 1076, Address: 0x1ed5108, Func Offset: 0x78
	// Line 1077, Address: 0x1ed5110, Func Offset: 0x80
	// Line 1079, Address: 0x1ed5118, Func Offset: 0x88
	// Line 1080, Address: 0x1ed5120, Func Offset: 0x90
	// Line 1083, Address: 0x1ed512c, Func Offset: 0x9c
	// Line 1085, Address: 0x1ed514c, Func Offset: 0xbc
	// Line 1087, Address: 0x1ed5154, Func Offset: 0xc4
	// Line 1093, Address: 0x1ed5158, Func Offset: 0xc8
	// Line 1094, Address: 0x1ed515c, Func Offset: 0xcc
	// Func End, Address: 0x1ed5170, Func Offset: 0xe0
	// Line 731, Address: 0x1ed5090, Func Offset: 0
	// Line 732, Address: 0x1ed5094, Func Offset: 0x4
	// Line 735, Address: 0x1ed509c, Func Offset: 0xc
	// Line 802, Address: 0x1ed50ac, Func Offset: 0x1c
	// Line 805, Address: 0x1ed50b0, Func Offset: 0x20
	// Line 804, Address: 0x1ed50b4, Func Offset: 0x24
	// Line 805, Address: 0x1ed50b8, Func Offset: 0x28
	// Func End, Address: 0x1ed50c0, Func Offset: 0x30
	// Line 644, Address: 0x1ed5090, Func Offset: 0
	// Line 646, Address: 0x1ed5098, Func Offset: 0x8
	// Line 648, Address: 0x1ed50a4, Func Offset: 0x14
	// Line 647, Address: 0x1ed50a8, Func Offset: 0x18
	// Line 648, Address: 0x1ed50ac, Func Offset: 0x1c
	// Func End, Address: 0x1ed50b4, Func Offset: 0x24
}

// 
// Start address: 0x1ed50c0
int Sb13MoveExec(sfObj* obj)
{
	int rtv;
	float dir;
	int num;
	float eil_sp;
	float* eil_dir;
	float up_dir[4];
	float down_dir[4];
	// Line 808, Address: 0x1ed50c0, Func Offset: 0
	// Line 809, Address: 0x1ed50d0, Func Offset: 0x10
	// Line 808, Address: 0x1ed50d4, Func Offset: 0x14
	// Line 811, Address: 0x1ed50d8, Func Offset: 0x18
	// Line 815, Address: 0x1ed50e0, Func Offset: 0x20
	// Line 822, Address: 0x1ed50f0, Func Offset: 0x30
	// Line 823, Address: 0x1ed50f4, Func Offset: 0x34
	// Line 822, Address: 0x1ed50f8, Func Offset: 0x38
	// Line 823, Address: 0x1ed50fc, Func Offset: 0x3c
	// Line 827, Address: 0x1ed5128, Func Offset: 0x68
	// Line 829, Address: 0x1ed5130, Func Offset: 0x70
	// Line 828, Address: 0x1ed5134, Func Offset: 0x74
	// Line 829, Address: 0x1ed5138, Func Offset: 0x78
	// Line 828, Address: 0x1ed513c, Func Offset: 0x7c
	// Line 827, Address: 0x1ed5144, Func Offset: 0x84
	// Line 830, Address: 0x1ed5148, Func Offset: 0x88
	// Line 834, Address: 0x1ed5150, Func Offset: 0x90
	// Line 836, Address: 0x1ed5158, Func Offset: 0x98
	// Line 835, Address: 0x1ed515c, Func Offset: 0x9c
	// Line 836, Address: 0x1ed5160, Func Offset: 0xa0
	// Line 835, Address: 0x1ed5164, Func Offset: 0xa4
	// Line 834, Address: 0x1ed516c, Func Offset: 0xac
	// Line 835, Address: 0x1ed5174, Func Offset: 0xb4
	// Line 840, Address: 0x1ed5178, Func Offset: 0xb8
	// Line 842, Address: 0x1ed5188, Func Offset: 0xc8
	// Line 843, Address: 0x1ed5194, Func Offset: 0xd4
	// Line 845, Address: 0x1ed5198, Func Offset: 0xd8
	// Line 846, Address: 0x1ed51ac, Func Offset: 0xec
	// Line 849, Address: 0x1ed51b0, Func Offset: 0xf0
	// Line 850, Address: 0x1ed51b4, Func Offset: 0xf4
	// Func End, Address: 0x1ed51d0, Func Offset: 0x110
	// Line 672, Address: 0x1ed50c0, Func Offset: 0
	// Line 673, Address: 0x1ed50c4, Func Offset: 0x4
	// Line 672, Address: 0x1ed50c8, Func Offset: 0x8
	// Line 673, Address: 0x1ed50d0, Func Offset: 0x10
	// Line 674, Address: 0x1ed50ec, Func Offset: 0x2c
	// Line 675, Address: 0x1ed50f0, Func Offset: 0x30
	// Line 676, Address: 0x1ed5104, Func Offset: 0x44
	// Line 677, Address: 0x1ed510c, Func Offset: 0x4c
	// Line 679, Address: 0x1ed5110, Func Offset: 0x50
	// Line 681, Address: 0x1ed5118, Func Offset: 0x58
	// Line 682, Address: 0x1ed512c, Func Offset: 0x6c
	// Line 683, Address: 0x1ed5134, Func Offset: 0x74
	// Line 688, Address: 0x1ed5138, Func Offset: 0x78
	// Line 687, Address: 0x1ed5140, Func Offset: 0x80
	// Line 688, Address: 0x1ed5144, Func Offset: 0x84
	// Func End, Address: 0x1ed514c, Func Offset: 0x8c
	// Line 652, Address: 0x1ed50c0, Func Offset: 0
	// Line 658, Address: 0x1ed50c4, Func Offset: 0x4
	// Line 652, Address: 0x1ed50c8, Func Offset: 0x8
	// Line 658, Address: 0x1ed50d0, Func Offset: 0x10
	// Line 659, Address: 0x1ed50e0, Func Offset: 0x20
	// Line 663, Address: 0x1ed50e8, Func Offset: 0x28
	// Line 665, Address: 0x1ed50ec, Func Offset: 0x2c
	// Line 663, Address: 0x1ed50f0, Func Offset: 0x30
	// Line 665, Address: 0x1ed50f4, Func Offset: 0x34
	// Line 666, Address: 0x1ed50fc, Func Offset: 0x3c
	// Line 667, Address: 0x1ed5114, Func Offset: 0x54
	// Line 668, Address: 0x1ed512c, Func Offset: 0x6c
	// Line 669, Address: 0x1ed5144, Func Offset: 0x84
	// Line 670, Address: 0x1ed514c, Func Offset: 0x8c
	// Line 672, Address: 0x1ed5154, Func Offset: 0x94
	// Line 675, Address: 0x1ed5158, Func Offset: 0x98
	// Line 674, Address: 0x1ed5160, Func Offset: 0xa0
	// Line 675, Address: 0x1ed5164, Func Offset: 0xa4
	// Func End, Address: 0x1ed516c, Func Offset: 0xac
	// Line 181, Address: 0x1ed50c0, Func Offset: 0
	// Line 182, Address: 0x1ed50cc, Func Offset: 0xc
	// Line 183, Address: 0x1ed50d4, Func Offset: 0x14
	// Line 184, Address: 0x1ed50dc, Func Offset: 0x1c
	// Line 185, Address: 0x1ed50e8, Func Offset: 0x28
	// Line 188, Address: 0x1ed50f0, Func Offset: 0x30
	// Line 186, Address: 0x1ed50f4, Func Offset: 0x34
	// Line 188, Address: 0x1ed50f8, Func Offset: 0x38
	// Func End, Address: 0x1ed5104, Func Offset: 0x44
}

// 
// Start address: 0x1ed51d0
void sb_escalator_se_by_pos_init(sfObj* obj)
{
	_anon2* fig_wk;
	float pos[4];
	// Line 856, Address: 0x1ed51d0, Func Offset: 0
	// Line 857, Address: 0x1ed51d8, Func Offset: 0x8
	// Line 858, Address: 0x1ed51e0, Func Offset: 0x10
	// Line 861, Address: 0x1ed51e8, Func Offset: 0x18
	// Line 867, Address: 0x1ed51ec, Func Offset: 0x1c
	// Line 861, Address: 0x1ed5210, Func Offset: 0x40
	// Line 862, Address: 0x1ed5214, Func Offset: 0x44
	// Line 863, Address: 0x1ed521c, Func Offset: 0x4c
	// Line 867, Address: 0x1ed5224, Func Offset: 0x54
	// Line 868, Address: 0x1ed522c, Func Offset: 0x5c
	// Line 869, Address: 0x1ed5230, Func Offset: 0x60
	// Func End, Address: 0x1ed523c, Func Offset: 0x6c
	// Line 715, Address: 0x1ed51d0, Func Offset: 0
	// Line 716, Address: 0x1ed51d4, Func Offset: 0x4
	// Line 715, Address: 0x1ed51d8, Func Offset: 0x8
	// Line 716, Address: 0x1ed51dc, Func Offset: 0xc
	// Line 720, Address: 0x1ed51e8, Func Offset: 0x18
	// Line 722, Address: 0x1ed51f0, Func Offset: 0x20
	// Line 721, Address: 0x1ed51f4, Func Offset: 0x24
	// Line 722, Address: 0x1ed51f8, Func Offset: 0x28
	// Func End, Address: 0x1ed5200, Func Offset: 0x30
}

// 
// Start address: 0x1ed5240
void sb_escalator_se_init()
{
	// Line 874, Address: 0x1ed5240, Func Offset: 0
	// Func End, Address: 0x1ed5260, Func Offset: 0x20
	// Line 260, Address: 0x1ed5240, Func Offset: 0
	// Line 261, Address: 0x1ed524c, Func Offset: 0xc
	// Line 262, Address: 0x1ed5254, Func Offset: 0x14
	// Line 266, Address: 0x1ed525c, Func Offset: 0x1c
	// Line 267, Address: 0x1ed5264, Func Offset: 0x24
	// Func End, Address: 0x1ed5274, Func Offset: 0x34
}

// 
// Start address: 0x1ed5260
void sb_escalator_se_exec()
{
	// Line 880, Address: 0x1ed5260, Func Offset: 0
	// Func End, Address: 0x1ed5268, Func Offset: 0x8
	// Line 513, Address: 0x1ed5260, Func Offset: 0
	// Line 514, Address: 0x1ed5280, Func Offset: 0x20
	// Line 518, Address: 0x1ed528c, Func Offset: 0x2c
	// Line 516, Address: 0x1ed5290, Func Offset: 0x30
	// Line 518, Address: 0x1ed5294, Func Offset: 0x34
	// Line 519, Address: 0x1ed52a4, Func Offset: 0x44
	// Line 527, Address: 0x1ed52b4, Func Offset: 0x54
	// Line 528, Address: 0x1ed52dc, Func Offset: 0x7c
	// Line 530, Address: 0x1ed52f0, Func Offset: 0x90
	// Line 528, Address: 0x1ed52f4, Func Offset: 0x94
	// Line 530, Address: 0x1ed52f8, Func Offset: 0x98
	// Line 531, Address: 0x1ed5310, Func Offset: 0xb0
	// Line 533, Address: 0x1ed5334, Func Offset: 0xd4
	// Line 534, Address: 0x1ed533c, Func Offset: 0xdc
	// Line 535, Address: 0x1ed5378, Func Offset: 0x118
	// Line 537, Address: 0x1ed538c, Func Offset: 0x12c
	// Line 538, Address: 0x1ed5390, Func Offset: 0x130
	// Line 537, Address: 0x1ed5394, Func Offset: 0x134
	// Line 540, Address: 0x1ed5398, Func Offset: 0x138
	// Line 544, Address: 0x1ed53fc, Func Offset: 0x19c
	// Line 545, Address: 0x1ed5414, Func Offset: 0x1b4
	// Line 546, Address: 0x1ed5428, Func Offset: 0x1c8
	// Line 547, Address: 0x1ed5434, Func Offset: 0x1d4
	// Line 548, Address: 0x1ed5438, Func Offset: 0x1d8
	// Func End, Address: 0x1ed545c, Func Offset: 0x1fc
}

// 
// Start address: 0x1ed5270
void sb_escalator_se_by_pos_exec(sfObj* obj)
{
	_anon2* fig_wk;
	float pos[4];
	// Line 883, Address: 0x1ed5270, Func Offset: 0
	// Line 884, Address: 0x1ed5278, Func Offset: 0x8
	// Line 885, Address: 0x1ed5280, Func Offset: 0x10
	// Line 888, Address: 0x1ed5288, Func Offset: 0x18
	// Line 894, Address: 0x1ed528c, Func Offset: 0x1c
	// Line 888, Address: 0x1ed52b0, Func Offset: 0x40
	// Line 889, Address: 0x1ed52b4, Func Offset: 0x44
	// Line 890, Address: 0x1ed52bc, Func Offset: 0x4c
	// Line 894, Address: 0x1ed52c4, Func Offset: 0x54
	// Line 895, Address: 0x1ed52cc, Func Offset: 0x5c
	// Line 897, Address: 0x1ed52d0, Func Offset: 0x60
	// Func End, Address: 0x1ed52dc, Func Offset: 0x6c
	// Line 904, Address: 0x1ed5270, Func Offset: 0
	// Line 905, Address: 0x1ed527c, Func Offset: 0xc
	// Line 908, Address: 0x1ed5284, Func Offset: 0x14
	// Line 909, Address: 0x1ed528c, Func Offset: 0x1c
	// Line 911, Address: 0x1ed5290, Func Offset: 0x20
	// Line 910, Address: 0x1ed5294, Func Offset: 0x24
	// Line 911, Address: 0x1ed5298, Func Offset: 0x28
	// Func End, Address: 0x1ed52a0, Func Offset: 0x30
	// Line 291, Address: 0x1ed5270, Func Offset: 0
	// Line 292, Address: 0x1ed5278, Func Offset: 0x8
	// Line 301, Address: 0x1ed5280, Func Offset: 0x10
	// Line 300, Address: 0x1ed5284, Func Offset: 0x14
	// Line 301, Address: 0x1ed5288, Func Offset: 0x18
	// Func End, Address: 0x1ed5290, Func Offset: 0x20
}

// 
// Start address: 0x1ed52e0
void sb_escalator_se_draw()
{
	// Line 902, Address: 0x1ed52e0, Func Offset: 0
	// Func End, Address: 0x1ed52e8, Func Offset: 0x8
	// Line 757, Address: 0x1ed52e0, Func Offset: 0
	// Line 758, Address: 0x1ed52e4, Func Offset: 0x4
	// Line 757, Address: 0x1ed52e8, Func Offset: 0x8
	// Line 758, Address: 0x1ed52ec, Func Offset: 0xc
	// Line 757, Address: 0x1ed52f0, Func Offset: 0x10
	// Line 758, Address: 0x1ed52f4, Func Offset: 0x14
	// Line 760, Address: 0x1ed52fc, Func Offset: 0x1c
	// Line 758, Address: 0x1ed5308, Func Offset: 0x28
	// Line 760, Address: 0x1ed530c, Func Offset: 0x2c
	// Line 764, Address: 0x1ed5314, Func Offset: 0x34
	// Line 765, Address: 0x1ed531c, Func Offset: 0x3c
	// Line 768, Address: 0x1ed5328, Func Offset: 0x48
	// Line 767, Address: 0x1ed532c, Func Offset: 0x4c
	// Line 768, Address: 0x1ed5330, Func Offset: 0x50
	// Func End, Address: 0x1ed533c, Func Offset: 0x5c
}

// 
// Start address: 0x1ed52f0
void sb_escalator_se_end()
{
	// Line 906, Address: 0x1ed52f0, Func Offset: 0
	// Func End, Address: 0x1ed52fc, Func Offset: 0xc
}

// 
// Start address: 0x1ed5300
int set_f05boss_init()
{
	// Line 912, Address: 0x1ed5300, Func Offset: 0
	// Line 913, Address: 0x1ed5304, Func Offset: 0x4
	// Line 912, Address: 0x1ed5308, Func Offset: 0x8
	// Line 914, Address: 0x1ed5314, Func Offset: 0x14
	// Func End, Address: 0x1ed531c, Func Offset: 0x1c
}

