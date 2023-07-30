typedef struct sgTexData;
typedef union _anon0;
typedef struct sfObj;
typedef struct sgClutData;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef struct sfFogParams;
typedef struct _anon5;
typedef struct _EventInst;
typedef enum sgLightType : unsigned char;
typedef struct _anon6;
typedef struct sgTexArc;
typedef struct sgBone;
typedef struct EventFlag;
typedef struct _GAME_WORK;
typedef struct _EventDriver;

typedef int(*type_0)(sfObj*);
typedef int(*type_3)(sfObj*);
typedef void(*type_4)(sfObj*);
typedef int(*type_5)(sfObj*);
typedef int(*type_7)(sfObj*);
typedef void(*type_9)(sfObj*);
typedef void(*type_17)(sfObj*);
typedef int(*type_18)(sfObj*);
typedef int(*type_19)(sfObj*);
typedef void(*type_20)(sfObj*);
typedef void(*type_21)(sfObj*);
typedef void(*type_22)(sfObj*);
typedef void(*type_35)(sfObj*);
typedef void(*type_39)(sfObj*);
typedef void(*type_40)(sfObj*);
typedef void(*type_43)(sfObj*);
typedef int(*type_44)(sfObj*);

typedef float type_1[2];
typedef float type_2[2][2];
typedef int type_6[1];
typedef _anon0 type_8[4];
typedef unsigned int type_10[4];
typedef float type_11[4][2];
typedef float type_12[4];
typedef unsigned int type_13[4];
typedef _anon5 type_14[3];
typedef float type_15[4];
typedef float type_16[4][4];
typedef int type_23[1];
typedef float type_24[4][2];
typedef short type_25[2];
typedef int type_26[1];
typedef unsigned short type_27[2];
typedef float type_28[4];
typedef char type_29[4];
typedef unsigned char type_30[4];
typedef float type_31[1];
typedef int type_32[1];
typedef unsigned int type_33[4];
typedef int type_34[1];
typedef unsigned char type_36[4];
typedef _anon0 type_37[256];
typedef int type_38[1];
typedef unsigned char type_41[320];
typedef int type_42[1];
typedef int type_45[1];

struct sgTexData
{
	<unknown fundamental type (0xa510)> dummy;
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

struct sgClutData
{
	<unknown fundamental type (0xa510)> dummy;
};

struct _anon1
{
	void* texture_normal;
	void* texture_global;
	void* texture_semitrans;
	void* model_data;
	sgBone* parent_bone;
};

struct _anon2
{
	float near;
	float far;
	unsigned char col[4];
	unsigned char near_pow;
	unsigned char far_pow;
};

struct _anon3
{
	short base;
	short buffer_w;
	unsigned char psm;
	unsigned char data_psm;
	short w;
	short h;
	short buffer_size;
	short w2;
	short h2;
};

struct _anon4
{
	float position[4];
	float view_direction[4];
	float rl_angle;
	float ud_angle;
	int stand_position;
	int time;
	_anon1 em_model;
	void* model_data;
	sgTexArc* global_texture;
	sgTexArc* local_texture;
	sgTexArc* window_texture;
	int debug_flag;
	sfObj* demo_mob;
	sfObj* demo_mob_event;
	sfObj* cars_control;
	sfObj* mobs_control;
	sfObj* mobetc_control;
	sfObj* out_lights;
	float pre_view_angle;
	int pre_fog_enable;
	unsigned char pre_fog_color[4];
	sfFogParams pre_fog_params;
};

struct sfFogParams
{
	float near;
	float far;
	unsigned char near_pow;
	unsigned char far_pow;
};

struct _anon5
{
	int model_no;
	int texture_no;
	int global_texture_no;
	int lights_no;
	int fog_no;
};

struct _EventInst
{
	_EventDriver evdrv;
	unsigned int attr;
	int(*drawaf)(sfObj*);
	int(*endexitf)(sfObj*);
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

struct _anon6
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

struct sgTexArc
{
	<unknown fundamental type (0xa510)> dummy;
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

struct EventFlag
{
	unsigned char flag[320];
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

unsigned int room_outside_load_files_noon[4];
unsigned int room_outside_load_files_evening[4];
unsigned int room_outside_load_files_night[4];
_EventDriver ev_room_outside;
_EventDriver ev_room_outside2;
float stand_positions[4][2];
float view_direction[4][2];
float initial_value[2][2];
_anon5 tw_models[3];
void(*RoomOutSideDemoMobControl)(sfObj*);
void(*OutSideLights)(sfObj*);
void(*RoomOutSideEtcControl)(sfObj*);
void(*RoomOutSideMobControl)(sfObj*);
void(*RoomOutSideCarsControl)(sfObj*);
void(*RoomOutSideDemoMobEventAgainControl)(sfObj*);
void(*RoomOutSideDemoMobEventControl)(sfObj*);
float sg_vector_unit_y[4];
EventFlag event_flag;
int knock_window;
float pre_camera[4][4];
_GAME_WORK gamew;
float pre_far_z;
float pre_view_angle;
void* data_load_addr;
void(*RoomOutSideWindowDestruct)(sfObj*);
unsigned long* sg_packet_cur;

void SetMobCharacters(_anon4* work);
void SetCharacters(_anon4* work);
void DeleteCharacters(_anon4* work);
void MoveView(_anon4* work);
void UpdataCamera(_anon4* work);
int RoomOutSideWindowTrg();
int RoomOutSideWindowInit(sfObj* obj);
void RoomOutSideWindowDestruct(sfObj* obj);
int RoomOutSideWindow(sfObj* obj);
int RoomOutSideWindowDraw(sfObj* obj);
int RoomOutSideWindowEnd(sfObj* obj);
void RoomOutSideWindow_FrameDraw(sfObj* obj);

// 
// Start address: 0x219560
void SetMobCharacters(_anon4* work)
{
	sfObj* optr;
	// Line 208, Address: 0x219560, Func Offset: 0
	// Line 210, Address: 0x219570, Func Offset: 0x10
	// Line 211, Address: 0x21957c, Func Offset: 0x1c
	// Line 212, Address: 0x21958c, Func Offset: 0x2c
	// Line 213, Address: 0x219598, Func Offset: 0x38
	// Line 214, Address: 0x21959c, Func Offset: 0x3c
	// Func End, Address: 0x2195b0, Func Offset: 0x50
}

// 
// Start address: 0x2195b0
void SetCharacters(_anon4* work)
{
	sfObj* optr;
	// Line 217, Address: 0x2195b0, Func Offset: 0
	// Line 221, Address: 0x2195c0, Func Offset: 0x10
	// Line 222, Address: 0x2195d0, Func Offset: 0x20
	// Line 223, Address: 0x2195d8, Func Offset: 0x28
	// Line 224, Address: 0x2195e4, Func Offset: 0x34
	// Line 225, Address: 0x2195f4, Func Offset: 0x44
	// Line 227, Address: 0x219600, Func Offset: 0x50
	// Line 228, Address: 0x219608, Func Offset: 0x58
	// Line 229, Address: 0x219610, Func Offset: 0x60
	// Line 230, Address: 0x21961c, Func Offset: 0x6c
	// Line 231, Address: 0x21962c, Func Offset: 0x7c
	// Line 234, Address: 0x219638, Func Offset: 0x88
	// Line 235, Address: 0x219644, Func Offset: 0x94
	// Line 236, Address: 0x219654, Func Offset: 0xa4
	// Line 237, Address: 0x219660, Func Offset: 0xb0
	// Line 238, Address: 0x219664, Func Offset: 0xb4
	// Line 240, Address: 0x219668, Func Offset: 0xb8
	// Line 241, Address: 0x219674, Func Offset: 0xc4
	// Line 242, Address: 0x219684, Func Offset: 0xd4
	// Line 243, Address: 0x219690, Func Offset: 0xe0
	// Line 244, Address: 0x219694, Func Offset: 0xe4
	// Line 246, Address: 0x2196a0, Func Offset: 0xf0
	// Line 247, Address: 0x2196ac, Func Offset: 0xfc
	// Line 248, Address: 0x2196bc, Func Offset: 0x10c
	// Line 251, Address: 0x2196c8, Func Offset: 0x118
	// Line 252, Address: 0x2196d0, Func Offset: 0x120
	// Line 253, Address: 0x2196dc, Func Offset: 0x12c
	// Line 254, Address: 0x2196ec, Func Offset: 0x13c
	// Line 257, Address: 0x2196f8, Func Offset: 0x148
	// Line 258, Address: 0x219704, Func Offset: 0x154
	// Line 259, Address: 0x219714, Func Offset: 0x164
	// Line 260, Address: 0x219720, Func Offset: 0x170
	// Line 261, Address: 0x219724, Func Offset: 0x174
	// Func End, Address: 0x219738, Func Offset: 0x188
}

// 
// Start address: 0x219740
void DeleteCharacters(_anon4* work)
{
	// Line 264, Address: 0x219740, Func Offset: 0
	// Line 265, Address: 0x219750, Func Offset: 0x10
	// Line 266, Address: 0x219758, Func Offset: 0x18
	// Line 267, Address: 0x219760, Func Offset: 0x20
	// Line 268, Address: 0x219768, Func Offset: 0x28
	// Line 269, Address: 0x219770, Func Offset: 0x30
	// Line 270, Address: 0x219778, Func Offset: 0x38
	// Line 271, Address: 0x219780, Func Offset: 0x40
	// Func End, Address: 0x219790, Func Offset: 0x50
}

// 
// Start address: 0x219790
void MoveView(_anon4* work)
{
	float x;
	float y;
	float dx;
	float dy;
	float qx[4];
	float qy[4];
	float q[4];
	float vx[4];
	float vy[4];
	float vz[4];
	float v[4];
	float a;
	// Line 292, Address: 0x219790, Func Offset: 0
	// Line 297, Address: 0x2197a8, Func Offset: 0x18
	// Line 299, Address: 0x2197b8, Func Offset: 0x28
	// Line 300, Address: 0x2197c8, Func Offset: 0x38
	// Line 302, Address: 0x2197d0, Func Offset: 0x40
	// Line 303, Address: 0x219800, Func Offset: 0x70
	// Line 304, Address: 0x21980c, Func Offset: 0x7c
	// Line 303, Address: 0x219810, Func Offset: 0x80
	// Line 304, Address: 0x21982c, Func Offset: 0x9c
	// Line 308, Address: 0x219840, Func Offset: 0xb0
	// Line 312, Address: 0x219844, Func Offset: 0xb4
	// Line 306, Address: 0x219848, Func Offset: 0xb8
	// Line 307, Address: 0x21984c, Func Offset: 0xbc
	// Line 308, Address: 0x219850, Func Offset: 0xc0
	// Line 309, Address: 0x219858, Func Offset: 0xc8
	// Line 312, Address: 0x21985c, Func Offset: 0xcc
	// Line 309, Address: 0x219864, Func Offset: 0xd4
	// Line 312, Address: 0x21986c, Func Offset: 0xdc
	// Line 313, Address: 0x219880, Func Offset: 0xf0
	// Line 314, Address: 0x2198a0, Func Offset: 0x110
	// Line 315, Address: 0x2198c0, Func Offset: 0x130
	// Line 394, Address: 0x2198e0, Func Offset: 0x150
	// Line 395, Address: 0x219900, Func Offset: 0x170
	// Line 396, Address: 0x219924, Func Offset: 0x194
	// Line 397, Address: 0x219950, Func Offset: 0x1c0
	// Line 399, Address: 0x219958, Func Offset: 0x1c8
	// Line 397, Address: 0x21995c, Func Offset: 0x1cc
	// Line 399, Address: 0x219960, Func Offset: 0x1d0
	// Line 397, Address: 0x219964, Func Offset: 0x1d4
	// Line 399, Address: 0x21996c, Func Offset: 0x1dc
	// Line 400, Address: 0x219974, Func Offset: 0x1e4
	// Line 401, Address: 0x219984, Func Offset: 0x1f4
	// Line 402, Address: 0x2199a8, Func Offset: 0x218
	// Line 403, Address: 0x2199d4, Func Offset: 0x244
	// Line 405, Address: 0x2199dc, Func Offset: 0x24c
	// Line 403, Address: 0x2199e0, Func Offset: 0x250
	// Line 405, Address: 0x2199e4, Func Offset: 0x254
	// Line 403, Address: 0x2199e8, Func Offset: 0x258
	// Line 405, Address: 0x2199ec, Func Offset: 0x25c
	// Line 406, Address: 0x2199f4, Func Offset: 0x264
	// Line 407, Address: 0x219a04, Func Offset: 0x274
	// Line 408, Address: 0x219a24, Func Offset: 0x294
	// Line 413, Address: 0x219a34, Func Offset: 0x2a4
	// Func End, Address: 0x219a50, Func Offset: 0x2c0
}

// 
// Start address: 0x219a50
void UpdataCamera(_anon4* work)
{
	float m[4][4];
	float vz[4];
	float vx[4];
	float vy[4];
	// Line 420, Address: 0x219a50, Func Offset: 0
	// Line 427, Address: 0x219a58, Func Offset: 0x8
	// Line 428, Address: 0x219a64, Func Offset: 0x14
	// Line 429, Address: 0x219a88, Func Offset: 0x38
	// Line 430, Address: 0x219aac, Func Offset: 0x5c
	// Line 431, Address: 0x219ad8, Func Offset: 0x88
	// Line 432, Address: 0x219b04, Func Offset: 0xb4
	// Line 433, Address: 0x219b30, Func Offset: 0xe0
	// Line 434, Address: 0x219b40, Func Offset: 0xf0
	// Line 435, Address: 0x219b50, Func Offset: 0x100
	// Line 437, Address: 0x219b60, Func Offset: 0x110
	// Line 438, Address: 0x219b6c, Func Offset: 0x11c
	// Line 439, Address: 0x219b70, Func Offset: 0x120
	// Line 441, Address: 0x219b74, Func Offset: 0x124
	// Line 439, Address: 0x219b78, Func Offset: 0x128
	// Line 438, Address: 0x219b80, Func Offset: 0x130
	// Line 441, Address: 0x219b8c, Func Offset: 0x13c
	// Line 443, Address: 0x219b94, Func Offset: 0x144
	// Line 444, Address: 0x219ba4, Func Offset: 0x154
	// Line 445, Address: 0x219bc0, Func Offset: 0x170
	// Line 446, Address: 0x219bc8, Func Offset: 0x178
	// Line 447, Address: 0x219bdc, Func Offset: 0x18c
	// Line 448, Address: 0x219be0, Func Offset: 0x190
	// Line 462, Address: 0x219bf4, Func Offset: 0x1a4
	// Line 463, Address: 0x219bfc, Func Offset: 0x1ac
	// Func End, Address: 0x219c08, Func Offset: 0x1b8
}

// 
// Start address: 0x219c10
int RoomOutSideWindowTrg()
{
	// Line 477, Address: 0x219c10, Func Offset: 0
	// Line 481, Address: 0x219c18, Func Offset: 0x8
	// Line 484, Address: 0x219c3c, Func Offset: 0x2c
	// Func End, Address: 0x219c48, Func Offset: 0x38
}

// 
// Start address: 0x219c50
int RoomOutSideWindowInit(sfObj* obj)
{
	_EventInst* inst;
	int time;
	// Line 487, Address: 0x219c50, Func Offset: 0
	// Line 488, Address: 0x219c64, Func Offset: 0x14
	// Line 489, Address: 0x219c6c, Func Offset: 0x1c
	// Line 491, Address: 0x219c78, Func Offset: 0x28
	// Line 495, Address: 0x219c88, Func Offset: 0x38
	// Line 496, Address: 0x219c8c, Func Offset: 0x3c
	// Line 495, Address: 0x219c90, Func Offset: 0x40
	// Line 496, Address: 0x219c94, Func Offset: 0x44
	// Line 497, Address: 0x219c9c, Func Offset: 0x4c
	// Line 498, Address: 0x219ca8, Func Offset: 0x58
	// Line 499, Address: 0x219cb4, Func Offset: 0x64
	// Line 504, Address: 0x219cc0, Func Offset: 0x70
	// Line 510, Address: 0x219ce4, Func Offset: 0x94
	// Line 512, Address: 0x219cec, Func Offset: 0x9c
	// Line 514, Address: 0x219d0c, Func Offset: 0xbc
	// Line 515, Address: 0x219d10, Func Offset: 0xc0
	// Line 516, Address: 0x219d20, Func Offset: 0xd0
	// Line 518, Address: 0x219d28, Func Offset: 0xd8
	// Line 519, Address: 0x219d38, Func Offset: 0xe8
	// Line 521, Address: 0x219d40, Func Offset: 0xf0
	// Line 525, Address: 0x219d50, Func Offset: 0x100
	// Line 526, Address: 0x219d5c, Func Offset: 0x10c
	// Line 527, Address: 0x219d68, Func Offset: 0x118
	// Line 526, Address: 0x219d74, Func Offset: 0x124
	// Line 527, Address: 0x219d78, Func Offset: 0x128
	// Line 529, Address: 0x219d9c, Func Offset: 0x14c
	// Line 532, Address: 0x219da0, Func Offset: 0x150
	// Line 535, Address: 0x219da8, Func Offset: 0x158
	// Line 534, Address: 0x219dac, Func Offset: 0x15c
	// Line 535, Address: 0x219db0, Func Offset: 0x160
	// Func End, Address: 0x219dc4, Func Offset: 0x174
}

// 
// Start address: 0x219dd0
void RoomOutSideWindowDestruct(sfObj* obj)
{
	// Line 542, Address: 0x219dd0, Func Offset: 0
	// Func End, Address: 0x219dd8, Func Offset: 0x8
}

// 
// Start address: 0x219de0
int RoomOutSideWindow(sfObj* obj)
{
	_anon1* em_model;
	_anon2* fog_param;
	_anon4* work;
	float v[4];
	_anon6 light;
	float lit_color[4];
	float lit_dirction[4];
	float ambi_color[4];
	// Line 548, Address: 0x219de0, Func Offset: 0
	// Line 556, Address: 0x219de4, Func Offset: 0x4
	// Line 548, Address: 0x219de8, Func Offset: 0x8
	// Line 556, Address: 0x219df8, Func Offset: 0x18
	// Line 551, Address: 0x219dfc, Func Offset: 0x1c
	// Line 556, Address: 0x219e00, Func Offset: 0x20
	// Line 558, Address: 0x219e38, Func Offset: 0x58
	// Line 559, Address: 0x219e40, Func Offset: 0x60
	// Line 560, Address: 0x219e4c, Func Offset: 0x6c
	// Line 564, Address: 0x219e54, Func Offset: 0x74
	// Line 566, Address: 0x219e60, Func Offset: 0x80
	// Line 564, Address: 0x219e64, Func Offset: 0x84
	// Line 566, Address: 0x219e68, Func Offset: 0x88
	// Line 567, Address: 0x219e74, Func Offset: 0x94
	// Line 571, Address: 0x219e80, Func Offset: 0xa0
	// Line 570, Address: 0x219e84, Func Offset: 0xa4
	// Line 574, Address: 0x219e88, Func Offset: 0xa8
	// Line 571, Address: 0x219e90, Func Offset: 0xb0
	// Line 572, Address: 0x219e98, Func Offset: 0xb8
	// Line 574, Address: 0x219ea8, Func Offset: 0xc8
	// Line 575, Address: 0x219ec8, Func Offset: 0xe8
	// Line 576, Address: 0x219ef0, Func Offset: 0x110
	// Line 578, Address: 0x219f18, Func Offset: 0x138
	// Line 581, Address: 0x219f24, Func Offset: 0x144
	// Line 578, Address: 0x219f28, Func Offset: 0x148
	// Line 582, Address: 0x219f2c, Func Offset: 0x14c
	// Line 583, Address: 0x219f34, Func Offset: 0x154
	// Line 584, Address: 0x219f40, Func Offset: 0x160
	// Line 585, Address: 0x219f4c, Func Offset: 0x16c
	// Line 587, Address: 0x219f58, Func Offset: 0x178
	// Line 588, Address: 0x219f74, Func Offset: 0x194
	// Line 589, Address: 0x219f7c, Func Offset: 0x19c
	// Line 588, Address: 0x219f80, Func Offset: 0x1a0
	// Line 589, Address: 0x219f84, Func Offset: 0x1a4
	// Line 588, Address: 0x219f88, Func Offset: 0x1a8
	// Line 589, Address: 0x219f98, Func Offset: 0x1b8
	// Line 592, Address: 0x219fa8, Func Offset: 0x1c8
	// Line 593, Address: 0x219fb0, Func Offset: 0x1d0
	// Line 596, Address: 0x219fdc, Func Offset: 0x1fc
	// Line 597, Address: 0x219fe8, Func Offset: 0x208
	// Line 598, Address: 0x219ff0, Func Offset: 0x210
	// Line 601, Address: 0x219ff8, Func Offset: 0x218
	// Line 602, Address: 0x21a020, Func Offset: 0x240
	// Line 603, Address: 0x21a028, Func Offset: 0x248
	// Line 604, Address: 0x21a03c, Func Offset: 0x25c
	// Line 605, Address: 0x21a044, Func Offset: 0x264
	// Line 606, Address: 0x21a048, Func Offset: 0x268
	// Line 609, Address: 0x21a050, Func Offset: 0x270
	// Line 610, Address: 0x21a064, Func Offset: 0x284
	// Line 611, Address: 0x21a06c, Func Offset: 0x28c
	// Line 612, Address: 0x21a074, Func Offset: 0x294
	// Line 614, Address: 0x21a080, Func Offset: 0x2a0
	// Line 616, Address: 0x21a0a0, Func Offset: 0x2c0
	// Line 617, Address: 0x21a0a8, Func Offset: 0x2c8
	// Line 620, Address: 0x21a0b0, Func Offset: 0x2d0
	// Line 622, Address: 0x21a0b8, Func Offset: 0x2d8
	// Line 623, Address: 0x21a0c0, Func Offset: 0x2e0
	// Line 633, Address: 0x21a0c8, Func Offset: 0x2e8
	// Line 634, Address: 0x21a0d0, Func Offset: 0x2f0
	// Line 635, Address: 0x21a0dc, Func Offset: 0x2fc
	// Line 636, Address: 0x21a0ec, Func Offset: 0x30c
	// Line 638, Address: 0x21a0f4, Func Offset: 0x314
	// Line 639, Address: 0x21a100, Func Offset: 0x320
	// Line 640, Address: 0x21a114, Func Offset: 0x334
	// Line 641, Address: 0x21a138, Func Offset: 0x358
	// Line 642, Address: 0x21a144, Func Offset: 0x364
	// Line 643, Address: 0x21a154, Func Offset: 0x374
	// Line 644, Address: 0x21a15c, Func Offset: 0x37c
	// Line 648, Address: 0x21a164, Func Offset: 0x384
	// Line 649, Address: 0x21a18c, Func Offset: 0x3ac
	// Line 650, Address: 0x21a194, Func Offset: 0x3b4
	// Line 651, Address: 0x21a19c, Func Offset: 0x3bc
	// Line 653, Address: 0x21a1a0, Func Offset: 0x3c0
	// Line 654, Address: 0x21a1bc, Func Offset: 0x3dc
	// Line 655, Address: 0x21a1c4, Func Offset: 0x3e4
	// Line 667, Address: 0x21a1c8, Func Offset: 0x3e8
	// Line 668, Address: 0x21a1d4, Func Offset: 0x3f4
	// Line 669, Address: 0x21a1dc, Func Offset: 0x3fc
	// Line 675, Address: 0x21a1e4, Func Offset: 0x404
	// Line 676, Address: 0x21a1e8, Func Offset: 0x408
	// Line 678, Address: 0x21a1f8, Func Offset: 0x418
	// Line 679, Address: 0x21a1fc, Func Offset: 0x41c
	// Line 680, Address: 0x21a210, Func Offset: 0x430
	// Line 681, Address: 0x21a214, Func Offset: 0x434
	// Line 682, Address: 0x21a21c, Func Offset: 0x43c
	// Line 684, Address: 0x21a220, Func Offset: 0x440
	// Line 686, Address: 0x21a234, Func Offset: 0x454
	// Line 685, Address: 0x21a238, Func Offset: 0x458
	// Line 686, Address: 0x21a240, Func Offset: 0x460
	// Line 685, Address: 0x21a248, Func Offset: 0x468
	// Line 686, Address: 0x21a24c, Func Offset: 0x46c
	// Line 687, Address: 0x21a258, Func Offset: 0x478
	// Line 689, Address: 0x21a260, Func Offset: 0x480
	// Line 692, Address: 0x21a264, Func Offset: 0x484
	// Line 693, Address: 0x21a26c, Func Offset: 0x48c
	// Line 694, Address: 0x21a270, Func Offset: 0x490
	// Line 696, Address: 0x21a298, Func Offset: 0x4b8
	// Line 697, Address: 0x21a2bc, Func Offset: 0x4dc
	// Line 698, Address: 0x21a2c8, Func Offset: 0x4e8
	// Line 699, Address: 0x21a2d4, Func Offset: 0x4f4
	// Line 700, Address: 0x21a2d8, Func Offset: 0x4f8
	// Line 701, Address: 0x21a2e0, Func Offset: 0x500
	// Line 703, Address: 0x21a2f0, Func Offset: 0x510
	// Line 704, Address: 0x21a2f8, Func Offset: 0x518
	// Line 706, Address: 0x21a300, Func Offset: 0x520
	// Line 708, Address: 0x21a308, Func Offset: 0x528
	// Line 713, Address: 0x21a310, Func Offset: 0x530
	// Line 714, Address: 0x21a318, Func Offset: 0x538
	// Func End, Address: 0x21a330, Func Offset: 0x550
}

// 
// Start address: 0x21a330
int RoomOutSideWindowDraw(sfObj* obj)
{
	// Line 721, Address: 0x21a330, Func Offset: 0
	// Line 725, Address: 0x21a340, Func Offset: 0x10
	// Line 723, Address: 0x21a344, Func Offset: 0x14
	// Line 725, Address: 0x21a348, Func Offset: 0x18
	// Line 726, Address: 0x21a354, Func Offset: 0x24
	// Line 728, Address: 0x21a360, Func Offset: 0x30
	// Line 729, Address: 0x21a368, Func Offset: 0x38
	// Line 730, Address: 0x21a370, Func Offset: 0x40
	// Line 731, Address: 0x21a378, Func Offset: 0x48
	// Line 732, Address: 0x21a380, Func Offset: 0x50
	// Line 733, Address: 0x21a390, Func Offset: 0x60
	// Line 734, Address: 0x21a398, Func Offset: 0x68
	// Line 735, Address: 0x21a3a4, Func Offset: 0x74
	// Line 736, Address: 0x21a3ac, Func Offset: 0x7c
	// Line 737, Address: 0x21a3b0, Func Offset: 0x80
	// Line 738, Address: 0x21a3c0, Func Offset: 0x90
	// Line 741, Address: 0x21a3c8, Func Offset: 0x98
	// Line 742, Address: 0x21a3d0, Func Offset: 0xa0
	// Func End, Address: 0x21a3e4, Func Offset: 0xb4
}

// 
// Start address: 0x21a3f0
int RoomOutSideWindowEnd(sfObj* obj)
{
	// Line 747, Address: 0x21a3f0, Func Offset: 0
	// Line 750, Address: 0x21a3f4, Func Offset: 0x4
	// Line 747, Address: 0x21a3f8, Func Offset: 0x8
	// Line 748, Address: 0x21a400, Func Offset: 0x10
	// Line 750, Address: 0x21a404, Func Offset: 0x14
	// Line 753, Address: 0x21a40c, Func Offset: 0x1c
	// Line 755, Address: 0x21a414, Func Offset: 0x24
	// Line 758, Address: 0x21a41c, Func Offset: 0x2c
	// Line 759, Address: 0x21a424, Func Offset: 0x34
	// Line 762, Address: 0x21a430, Func Offset: 0x40
	// Line 763, Address: 0x21a438, Func Offset: 0x48
	// Line 764, Address: 0x21a440, Func Offset: 0x50
	// Line 766, Address: 0x21a448, Func Offset: 0x58
	// Line 767, Address: 0x21a454, Func Offset: 0x64
	// Line 771, Address: 0x21a460, Func Offset: 0x70
	// Line 774, Address: 0x21a488, Func Offset: 0x98
	// Line 776, Address: 0x21a490, Func Offset: 0xa0
	// Line 778, Address: 0x21a498, Func Offset: 0xa8
	// Line 779, Address: 0x21a4a0, Func Offset: 0xb0
	// Line 781, Address: 0x21a4a8, Func Offset: 0xb8
	// Line 782, Address: 0x21a4b0, Func Offset: 0xc0
	// Func End, Address: 0x21a4c0, Func Offset: 0xd0
}

// 
// Start address: 0x21a4c0
void RoomOutSideWindow_FrameDraw(sfObj* obj)
{
	int x0;
	int y0;
	int x1;
	int y1;
	float win_x0;
	float win_y0;
	float move_w;
	float move_h;
	sgTexArc* tex_arc;
	sgTexData* tex_data;
	sgClutData* clut_data;
	unsigned int tex_id;
	unsigned int clut_id;
	_anon3* frame_tex;
	_anon3* glass_tex;
	unsigned long* pk;
	unsigned long cbp;
	unsigned long frame_tex0;
	unsigned long glass_tex0;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	// Line 791, Address: 0x21a4c0, Func Offset: 0
	// Line 797, Address: 0x21a4f8, Func Offset: 0x38
	// Line 798, Address: 0x21a4fc, Func Offset: 0x3c
	// Line 812, Address: 0x21a500, Func Offset: 0x40
	// Line 816, Address: 0x21a508, Func Offset: 0x48
	// Line 819, Address: 0x21a510, Func Offset: 0x50
	// Line 820, Address: 0x21a534, Func Offset: 0x74
	// Line 822, Address: 0x21a54c, Func Offset: 0x8c
	// Line 820, Address: 0x21a550, Func Offset: 0x90
	// Line 832, Address: 0x21a558, Func Offset: 0x98
	// Line 820, Address: 0x21a55c, Func Offset: 0x9c
	// Line 829, Address: 0x21a560, Func Offset: 0xa0
	// Line 822, Address: 0x21a564, Func Offset: 0xa4
	// Line 829, Address: 0x21a568, Func Offset: 0xa8
	// Line 820, Address: 0x21a56c, Func Offset: 0xac
	// Line 831, Address: 0x21a574, Func Offset: 0xb4
	// Line 822, Address: 0x21a578, Func Offset: 0xb8
	// Line 832, Address: 0x21a57c, Func Offset: 0xbc
	// Line 823, Address: 0x21a580, Func Offset: 0xc0
	// Line 825, Address: 0x21a588, Func Offset: 0xc8
	// Line 832, Address: 0x21a58c, Func Offset: 0xcc
	// Line 823, Address: 0x21a590, Func Offset: 0xd0
	// Line 826, Address: 0x21a594, Func Offset: 0xd4
	// Line 829, Address: 0x21a59c, Func Offset: 0xdc
	// Line 831, Address: 0x21a5ac, Func Offset: 0xec
	// Line 829, Address: 0x21a5b4, Func Offset: 0xf4
	// Line 830, Address: 0x21a5c0, Func Offset: 0x100
	// Line 831, Address: 0x21a5c4, Func Offset: 0x104
	// Line 830, Address: 0x21a5d8, Func Offset: 0x118
	// Line 832, Address: 0x21a5dc, Func Offset: 0x11c
	// Line 830, Address: 0x21a5e4, Func Offset: 0x124
	// Line 832, Address: 0x21a5e8, Func Offset: 0x128
	// Line 835, Address: 0x21a5f0, Func Offset: 0x130
	// Line 836, Address: 0x21a600, Func Offset: 0x140
	// Line 839, Address: 0x21a610, Func Offset: 0x150
	// Line 840, Address: 0x21a618, Func Offset: 0x158
	// Line 841, Address: 0x21a628, Func Offset: 0x168
	// Line 842, Address: 0x21a634, Func Offset: 0x174
	// Line 843, Address: 0x21a640, Func Offset: 0x180
	// Line 844, Address: 0x21a64c, Func Offset: 0x18c
	// Line 845, Address: 0x21a658, Func Offset: 0x198
	// Line 846, Address: 0x21a668, Func Offset: 0x1a8
	// Line 848, Address: 0x21a68c, Func Offset: 0x1cc
	// Line 849, Address: 0x21a698, Func Offset: 0x1d8
	// Line 850, Address: 0x21a6a8, Func Offset: 0x1e8
	// Line 851, Address: 0x21a6b4, Func Offset: 0x1f4
	// Line 852, Address: 0x21a6c0, Func Offset: 0x200
	// Line 853, Address: 0x21a6cc, Func Offset: 0x20c
	// Line 854, Address: 0x21a6dc, Func Offset: 0x21c
	// Line 856, Address: 0x21a6fc, Func Offset: 0x23c
	// Line 859, Address: 0x21a704, Func Offset: 0x244
	// Line 860, Address: 0x21a71c, Func Offset: 0x25c
	// Line 861, Address: 0x21a724, Func Offset: 0x264
	// Line 862, Address: 0x21a72c, Func Offset: 0x26c
	// Line 863, Address: 0x21a738, Func Offset: 0x278
	// Line 866, Address: 0x21a73c, Func Offset: 0x27c
	// Line 863, Address: 0x21a740, Func Offset: 0x280
	// Line 866, Address: 0x21a744, Func Offset: 0x284
	// Line 868, Address: 0x21a748, Func Offset: 0x288
	// Line 863, Address: 0x21a764, Func Offset: 0x2a4
	// Line 864, Address: 0x21a76c, Func Offset: 0x2ac
	// Line 863, Address: 0x21a770, Func Offset: 0x2b0
	// Line 864, Address: 0x21a77c, Func Offset: 0x2bc
	// Line 863, Address: 0x21a780, Func Offset: 0x2c0
	// Line 894, Address: 0x21a784, Func Offset: 0x2c4
	// Line 863, Address: 0x21a788, Func Offset: 0x2c8
	// Line 864, Address: 0x21a78c, Func Offset: 0x2cc
	// Line 897, Address: 0x21a7b0, Func Offset: 0x2f0
	// Line 864, Address: 0x21a7c0, Func Offset: 0x300
	// Line 874, Address: 0x21a7cc, Func Offset: 0x30c
	// Line 864, Address: 0x21a7d0, Func Offset: 0x310
	// Line 874, Address: 0x21a7d4, Func Offset: 0x314
	// Line 864, Address: 0x21a7d8, Func Offset: 0x318
	// Line 865, Address: 0x21a7dc, Func Offset: 0x31c
	// Line 907, Address: 0x21a7e8, Func Offset: 0x328
	// Line 865, Address: 0x21a7ec, Func Offset: 0x32c
	// Line 923, Address: 0x21a808, Func Offset: 0x348
	// Line 890, Address: 0x21a814, Func Offset: 0x354
	// Line 876, Address: 0x21a818, Func Offset: 0x358
	// Line 890, Address: 0x21a81c, Func Offset: 0x35c
	// Line 876, Address: 0x21a820, Func Offset: 0x360
	// Line 865, Address: 0x21a824, Func Offset: 0x364
	// Line 890, Address: 0x21a828, Func Offset: 0x368
	// Line 866, Address: 0x21a82c, Func Offset: 0x36c
	// Line 890, Address: 0x21a830, Func Offset: 0x370
	// Line 873, Address: 0x21a83c, Func Offset: 0x37c
	// Line 865, Address: 0x21a840, Func Offset: 0x380
	// Line 866, Address: 0x21a84c, Func Offset: 0x38c
	// Line 894, Address: 0x21a850, Func Offset: 0x390
	// Line 865, Address: 0x21a854, Func Offset: 0x394
	// Line 894, Address: 0x21a858, Func Offset: 0x398
	// Line 866, Address: 0x21a85c, Func Offset: 0x39c
	// Line 894, Address: 0x21a860, Func Offset: 0x3a0
	// Line 897, Address: 0x21a864, Func Offset: 0x3a4
	// Line 898, Address: 0x21a868, Func Offset: 0x3a8
	// Line 897, Address: 0x21a870, Func Offset: 0x3b0
	// Line 903, Address: 0x21a878, Func Offset: 0x3b8
	// Line 899, Address: 0x21a87c, Func Offset: 0x3bc
	// Line 903, Address: 0x21a880, Func Offset: 0x3c0
	// Line 899, Address: 0x21a884, Func Offset: 0x3c4
	// Line 866, Address: 0x21a888, Func Offset: 0x3c8
	// Line 899, Address: 0x21a88c, Func Offset: 0x3cc
	// Line 903, Address: 0x21a890, Func Offset: 0x3d0
	// Line 866, Address: 0x21a89c, Func Offset: 0x3dc
	// Line 905, Address: 0x21a8a4, Func Offset: 0x3e4
	// Line 866, Address: 0x21a8a8, Func Offset: 0x3e8
	// Line 905, Address: 0x21a8ac, Func Offset: 0x3ec
	// Line 867, Address: 0x21a8b0, Func Offset: 0x3f0
	// Line 905, Address: 0x21a8b4, Func Offset: 0x3f4
	// Line 866, Address: 0x21a8b8, Func Offset: 0x3f8
	// Line 907, Address: 0x21a8bc, Func Offset: 0x3fc
	// Line 910, Address: 0x21a8c0, Func Offset: 0x400
	// Line 867, Address: 0x21a8c4, Func Offset: 0x404
	// Line 912, Address: 0x21a8c8, Func Offset: 0x408
	// Line 910, Address: 0x21a8cc, Func Offset: 0x40c
	// Line 938, Address: 0x21a8d0, Func Offset: 0x410
	// Line 910, Address: 0x21a8d4, Func Offset: 0x414
	// Line 938, Address: 0x21a8d8, Func Offset: 0x418
	// Line 920, Address: 0x21a8dc, Func Offset: 0x41c
	// Line 918, Address: 0x21a8e0, Func Offset: 0x420
	// Line 907, Address: 0x21a8e4, Func Offset: 0x424
	// Line 925, Address: 0x21a8e8, Func Offset: 0x428
	// Line 906, Address: 0x21a8ec, Func Offset: 0x42c
	// Line 925, Address: 0x21a8f0, Func Offset: 0x430
	// Line 906, Address: 0x21a8f4, Func Offset: 0x434
	// Line 867, Address: 0x21a8f8, Func Offset: 0x438
	// Line 909, Address: 0x21a904, Func Offset: 0x444
	// Line 867, Address: 0x21a908, Func Offset: 0x448
	// Line 933, Address: 0x21a90c, Func Offset: 0x44c
	// Line 867, Address: 0x21a910, Func Offset: 0x450
	// Line 912, Address: 0x21a914, Func Offset: 0x454
	// Line 867, Address: 0x21a918, Func Offset: 0x458
	// Line 918, Address: 0x21a91c, Func Offset: 0x45c
	// Line 867, Address: 0x21a920, Func Offset: 0x460
	// Line 920, Address: 0x21a924, Func Offset: 0x464
	// Line 923, Address: 0x21a928, Func Offset: 0x468
	// Line 936, Address: 0x21a92c, Func Offset: 0x46c
	// Line 923, Address: 0x21a930, Func Offset: 0x470
	// Line 933, Address: 0x21a934, Func Offset: 0x474
	// Line 936, Address: 0x21a938, Func Offset: 0x478
	// Line 868, Address: 0x21a93c, Func Offset: 0x47c
	// Line 909, Address: 0x21a944, Func Offset: 0x484
	// Line 868, Address: 0x21a948, Func Offset: 0x488
	// Line 869, Address: 0x21a958, Func Offset: 0x498
	// Line 868, Address: 0x21a95c, Func Offset: 0x49c
	// Line 869, Address: 0x21a968, Func Offset: 0x4a8
	// Line 870, Address: 0x21a97c, Func Offset: 0x4bc
	// Line 869, Address: 0x21a980, Func Offset: 0x4c0
	// Line 870, Address: 0x21a98c, Func Offset: 0x4cc
	// Line 873, Address: 0x21a9a0, Func Offset: 0x4e0
	// Line 870, Address: 0x21a9a4, Func Offset: 0x4e4
	// Line 873, Address: 0x21a9ac, Func Offset: 0x4ec
	// Line 874, Address: 0x21a9c0, Func Offset: 0x500
	// Line 873, Address: 0x21a9c4, Func Offset: 0x504
	// Line 874, Address: 0x21a9c8, Func Offset: 0x508
	// Line 875, Address: 0x21a9dc, Func Offset: 0x51c
	// Line 874, Address: 0x21a9e0, Func Offset: 0x520
	// Line 875, Address: 0x21a9e4, Func Offset: 0x524
	// Line 876, Address: 0x21a9f8, Func Offset: 0x538
	// Line 875, Address: 0x21a9fc, Func Offset: 0x53c
	// Line 876, Address: 0x21aa18, Func Offset: 0x558
	// Line 887, Address: 0x21aa2c, Func Offset: 0x56c
	// Line 876, Address: 0x21aa30, Func Offset: 0x570
	// Line 887, Address: 0x21aa34, Func Offset: 0x574
	// Line 889, Address: 0x21aa48, Func Offset: 0x588
	// Line 887, Address: 0x21aa4c, Func Offset: 0x58c
	// Line 889, Address: 0x21aa58, Func Offset: 0x598
	// Line 890, Address: 0x21aa6c, Func Offset: 0x5ac
	// Line 889, Address: 0x21aa70, Func Offset: 0x5b0
	// Line 890, Address: 0x21aa78, Func Offset: 0x5b8
	// Line 891, Address: 0x21aa8c, Func Offset: 0x5cc
	// Line 890, Address: 0x21aa90, Func Offset: 0x5d0
	// Line 891, Address: 0x21aa94, Func Offset: 0x5d4
	// Line 892, Address: 0x21aaa8, Func Offset: 0x5e8
	// Line 891, Address: 0x21aaac, Func Offset: 0x5ec
	// Line 892, Address: 0x21aab4, Func Offset: 0x5f4
	// Line 893, Address: 0x21aac8, Func Offset: 0x608
	// Line 892, Address: 0x21aacc, Func Offset: 0x60c
	// Line 893, Address: 0x21aad0, Func Offset: 0x610
	// Line 894, Address: 0x21aae4, Func Offset: 0x624
	// Line 893, Address: 0x21aae8, Func Offset: 0x628
	// Line 894, Address: 0x21aaec, Func Offset: 0x62c
	// Line 896, Address: 0x21ab00, Func Offset: 0x640
	// Line 894, Address: 0x21ab04, Func Offset: 0x644
	// Line 896, Address: 0x21ab0c, Func Offset: 0x64c
	// Line 897, Address: 0x21ab20, Func Offset: 0x660
	// Line 896, Address: 0x21ab24, Func Offset: 0x664
	// Line 897, Address: 0x21ab2c, Func Offset: 0x66c
	// Line 898, Address: 0x21ab40, Func Offset: 0x680
	// Line 897, Address: 0x21ab44, Func Offset: 0x684
	// Line 898, Address: 0x21ab4c, Func Offset: 0x68c
	// Line 899, Address: 0x21ab60, Func Offset: 0x6a0
	// Line 898, Address: 0x21ab64, Func Offset: 0x6a4
	// Line 899, Address: 0x21ab68, Func Offset: 0x6a8
	// Line 902, Address: 0x21ab7c, Func Offset: 0x6bc
	// Line 899, Address: 0x21ab80, Func Offset: 0x6c0
	// Line 902, Address: 0x21ab88, Func Offset: 0x6c8
	// Line 903, Address: 0x21ab9c, Func Offset: 0x6dc
	// Line 902, Address: 0x21aba0, Func Offset: 0x6e0
	// Line 903, Address: 0x21aba8, Func Offset: 0x6e8
	// Line 904, Address: 0x21abbc, Func Offset: 0x6fc
	// Line 903, Address: 0x21abc0, Func Offset: 0x700
	// Line 904, Address: 0x21abc4, Func Offset: 0x704
	// Line 905, Address: 0x21abd8, Func Offset: 0x718
	// Line 904, Address: 0x21abdc, Func Offset: 0x71c
	// Line 905, Address: 0x21abe4, Func Offset: 0x724
	// Line 906, Address: 0x21abf8, Func Offset: 0x738
	// Line 905, Address: 0x21abfc, Func Offset: 0x73c
	// Line 906, Address: 0x21ac04, Func Offset: 0x744
	// Line 907, Address: 0x21ac18, Func Offset: 0x758
	// Line 906, Address: 0x21ac1c, Func Offset: 0x75c
	// Line 907, Address: 0x21ac20, Func Offset: 0x760
	// Line 909, Address: 0x21ac34, Func Offset: 0x774
	// Line 907, Address: 0x21ac38, Func Offset: 0x778
	// Line 909, Address: 0x21ac3c, Func Offset: 0x77c
	// Line 910, Address: 0x21ac50, Func Offset: 0x790
	// Line 909, Address: 0x21ac54, Func Offset: 0x794
	// Line 910, Address: 0x21ac58, Func Offset: 0x798
	// Line 911, Address: 0x21ac6c, Func Offset: 0x7ac
	// Line 910, Address: 0x21ac70, Func Offset: 0x7b0
	// Line 911, Address: 0x21ac78, Func Offset: 0x7b8
	// Line 912, Address: 0x21ac8c, Func Offset: 0x7cc
	// Line 911, Address: 0x21ac90, Func Offset: 0x7d0
	// Line 912, Address: 0x21ac98, Func Offset: 0x7d8
	// Line 915, Address: 0x21acac, Func Offset: 0x7ec
	// Line 912, Address: 0x21acb0, Func Offset: 0x7f0
	// Line 915, Address: 0x21acb4, Func Offset: 0x7f4
	// Line 916, Address: 0x21acc8, Func Offset: 0x808
	// Line 915, Address: 0x21accc, Func Offset: 0x80c
	// Line 916, Address: 0x21acd4, Func Offset: 0x814
	// Line 917, Address: 0x21ace8, Func Offset: 0x828
	// Line 916, Address: 0x21acec, Func Offset: 0x82c
	// Line 917, Address: 0x21acf0, Func Offset: 0x830
	// Line 918, Address: 0x21ad04, Func Offset: 0x844
	// Line 917, Address: 0x21ad08, Func Offset: 0x848
	// Line 918, Address: 0x21ad10, Func Offset: 0x850
	// Line 919, Address: 0x21ad24, Func Offset: 0x864
	// Line 918, Address: 0x21ad28, Func Offset: 0x868
	// Line 919, Address: 0x21ad2c, Func Offset: 0x86c
	// Line 920, Address: 0x21ad40, Func Offset: 0x880
	// Line 919, Address: 0x21ad44, Func Offset: 0x884
	// Line 920, Address: 0x21ad48, Func Offset: 0x888
	// Line 922, Address: 0x21ad5c, Func Offset: 0x89c
	// Line 920, Address: 0x21ad60, Func Offset: 0x8a0
	// Line 922, Address: 0x21ad64, Func Offset: 0x8a4
	// Line 923, Address: 0x21ad78, Func Offset: 0x8b8
	// Line 922, Address: 0x21ad7c, Func Offset: 0x8bc
	// Line 923, Address: 0x21ad84, Func Offset: 0x8c4
	// Line 924, Address: 0x21ad98, Func Offset: 0x8d8
	// Line 923, Address: 0x21ad9c, Func Offset: 0x8dc
	// Line 924, Address: 0x21ada0, Func Offset: 0x8e0
	// Line 925, Address: 0x21adb4, Func Offset: 0x8f4
	// Line 924, Address: 0x21adb8, Func Offset: 0x8f8
	// Line 925, Address: 0x21adbc, Func Offset: 0x8fc
	// Line 928, Address: 0x21add0, Func Offset: 0x910
	// Line 925, Address: 0x21add4, Func Offset: 0x914
	// Line 928, Address: 0x21add8, Func Offset: 0x918
	// Line 929, Address: 0x21adec, Func Offset: 0x92c
	// Line 928, Address: 0x21adf0, Func Offset: 0x930
	// Line 929, Address: 0x21adf8, Func Offset: 0x938
	// Line 930, Address: 0x21ae0c, Func Offset: 0x94c
	// Line 929, Address: 0x21ae10, Func Offset: 0x950
	// Line 930, Address: 0x21ae14, Func Offset: 0x954
	// Line 931, Address: 0x21ae28, Func Offset: 0x968
	// Line 930, Address: 0x21ae2c, Func Offset: 0x96c
	// Line 931, Address: 0x21ae34, Func Offset: 0x974
	// Line 932, Address: 0x21ae48, Func Offset: 0x988
	// Line 931, Address: 0x21ae4c, Func Offset: 0x98c
	// Line 932, Address: 0x21ae50, Func Offset: 0x990
	// Line 933, Address: 0x21ae64, Func Offset: 0x9a4
	// Line 932, Address: 0x21ae68, Func Offset: 0x9a8
	// Line 933, Address: 0x21ae6c, Func Offset: 0x9ac
	// Line 935, Address: 0x21ae80, Func Offset: 0x9c0
	// Line 933, Address: 0x21ae84, Func Offset: 0x9c4
	// Line 935, Address: 0x21ae88, Func Offset: 0x9c8
	// Line 936, Address: 0x21ae9c, Func Offset: 0x9dc
	// Line 935, Address: 0x21aea0, Func Offset: 0x9e0
	// Line 936, Address: 0x21aea4, Func Offset: 0x9e4
	// Line 937, Address: 0x21aeb8, Func Offset: 0x9f8
	// Line 936, Address: 0x21aebc, Func Offset: 0x9fc
	// Line 937, Address: 0x21aec0, Func Offset: 0xa00
	// Line 938, Address: 0x21aed4, Func Offset: 0xa14
	// Line 937, Address: 0x21aed8, Func Offset: 0xa18
	// Line 938, Address: 0x21aee0, Func Offset: 0xa20
	// Line 940, Address: 0x21aef4, Func Offset: 0xa34
	// Line 942, Address: 0x21aefc, Func Offset: 0xa3c
	// Line 943, Address: 0x21af14, Func Offset: 0xa54
	// Line 944, Address: 0x21af2c, Func Offset: 0xa6c
	// Func End, Address: 0x21af6c, Func Offset: 0xaac
}

