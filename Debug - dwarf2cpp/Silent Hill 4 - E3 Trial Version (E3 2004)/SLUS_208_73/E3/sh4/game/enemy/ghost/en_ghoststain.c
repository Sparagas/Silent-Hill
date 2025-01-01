typedef struct EnemyGhostSpotWork;
typedef struct _anon0;
typedef struct sfObj;
typedef struct _anon1;
typedef union _anon2;
typedef struct EnemyGhostStainWork;
typedef struct EnemyGhostStainParameter;
typedef struct EnemyBattleAttack;
typedef struct _GAME_WORK;
typedef union _anon3;
typedef struct EnemyTexParameter;
typedef struct _anon4;
typedef struct EnemyMeasureResult;
typedef enum EnemyTexIdentity : unsigned char;

typedef void(*type_1)(sfObj*);
typedef void(*type_5)(sfObj*);
typedef void(*type_13)(sfObj*);
typedef void(*type_28)(sfObj*);
typedef void(*type_35)(sfObj*);
typedef void(*type_36)(sfObj*);

typedef float type_0[4][25];
typedef float type_2[4][5];
typedef int type_3[1];
typedef _anon0 type_4[4];
typedef _anon2 type_6[0];
typedef float type_7[25];
typedef int type_8[1];
typedef float type_9[16];
typedef float type_10[16];
typedef int type_11[16];
typedef short type_12[25];
typedef short type_14[16];
typedef short type_15[5];
typedef int type_16[1];
typedef char type_17[24];
typedef int type_18[1];
typedef char type_19[25];
typedef int type_20[1];
typedef float type_21[9];
typedef float type_22[9];
typedef int type_23[1];
typedef float type_24[9];
typedef float type_25[9];
typedef _anon3 type_26[256];
typedef float type_27[4];
typedef float type_29[4];
typedef int type_30[1];
typedef float type_31[4];
typedef _anon4 type_32[2];
typedef float type_33[4];
typedef float type_34[4][4];
typedef char type_37[2];
typedef short type_38[2];
typedef unsigned short type_39[2];
typedef char type_40[4];
typedef unsigned char type_41[4];
typedef float type_42[1];
typedef int type_43[1];
typedef EnemyTexParameter type_44[4];
typedef char type_45[25];

struct EnemyGhostSpotWork
{
	float center_org[4];
	float center[4][25];
	float drop_pos[4][5];
	float normal[4];
	float floor_normal[4];
	float cylinder_center[4];
	float drum_center_line[4];
	float size[25];
	float drip_range[16];
	float drip_limit[16];
	int tex_type[16];
	short timer[25];
	short timer2[16];
	short timer3[5];
	float double_range;
	float disappear_time;
	float exorcism_damage;
	short appear_spot;
	short appear_drip;
	short appear_drop;
	short cylinder_mode;
	short step;
	short spot_type;
	sfObj* myobj;
	char drip_table_copy[25];
};

struct _anon0
{
	unsigned char next_offset;
	unsigned char flags;
	short id;
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
	_anon2 vertex[0];
};

union _anon2
{
	float node[4];
	_anon0 data[4];
};

struct EnemyGhostStainWork
{
	float center[4];
	float normal[4];
	float cylinder_center[4];
	float drum_center_line[4];
	EnemyGhostStainParameter parameter;
	float width[9];
	float width_add[9];
	float height[9];
	float height_add[9];
	float strength;
	float alpha[4];
	float alpha_add[4];
	float double_range;
	int cylinder_mode;
	int step;
	float timer;
	float attack_wait;
	int spot_type;
	EnemyGhostSpotWork* spot;
	sfObj* myobj;
	float exorcism_damage;
	EnemyBattleAttack* attack;
};

struct EnemyGhostStainParameter
{
	float size_w;
	float size_h;
	float appear_time;
	float spot_appear_wait_time;
	float spot_appear_time;
	float disappear_wait_time;
	float disappear_time;
};

struct EnemyBattleAttack
{
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

struct EnemyTexParameter
{
	_anon4 st[2];
	EnemyTexIdentity texid;
	unsigned long clamp;
	int rotate;
};

struct _anon4
{
	float S;
	float T;
};

struct EnemyMeasureResult
{
	float pos[4];
	float normal[4];
	float dist;
	int exist;
	_anon1* poly;
};

enum EnemyTexIdentity : unsigned char
{
	EN_TEX_ID_COALTAR,
	EN_TEX_ID_GHOSTSTAIN,
	EN_TEX_ID_CELL,
	EN_TEX_ID_CELL2,
	EN_TEX_ID_MUCUS,
	EN_TEX_ID_CRUSH_HIL,
	EN_TEX_ID_EARTHWORM,
	EN_TEX_ID_EARTHWORM2,
	EN_TEX_ID_EARTHWORM3,
	EN_TEX_ID_EARTHWORM4,
	EN_TEX_ID_BLOODPOOL,
	EN_TEX_ID_FLAME1,
	EN_TEX_ID_FLAME2,
	EN_TEX_ID_TOACH,
	EN_TEX_ID_FIRE,
	EN_TEX_ID_FIRELIGHT,
	EN_TEX_ID_WALL,
	EN_TEX_ID_MAX
};

char spot_table[25];
char drip_table[24];
char drip_tex_table[2];
void(*EnemyGhostSpotDraw)(sfObj*);
void(*EnemyGhostSpotHandle)(sfObj*);
void(*EnemyGhostStainDraw)(sfObj*);
void(*EnemyGhostStainHandle)(sfObj*);
_GAME_WORK gamew;

EnemyGhostStainWork* EnemyGhostStainConstruct(float* center, float* normal, int spot, float double_range, EnemyGhostStainParameter* gsp);
void EnemyGhostStainDestruct(EnemyGhostStainWork* pgs);
void EnemyGhostStainSetThreadDemo(EnemyGhostStainWork* pgs);
int equip_saintmedallion();
void EnemyGhostStainHandle(sfObj* obj);
void stain_step_appear(EnemyGhostStainWork* pgs);
void stain_step_stagnation(EnemyGhostStainWork* pgs);
void stain_step_disappear(EnemyGhostStainWork* pgs);
void stain_control(EnemyGhostStainWork* pgs);
void check_outbreak_spot(EnemyGhostStainWork* pgs);
void outbreak_spot(EnemyGhostStainWork* pgs);
void outbreak_drip(EnemyGhostStainWork* pgs);
void outbreak_drop(EnemyGhostStainWork* pgs);
void EnemyGhostStainDraw(sfObj* obj);
void EnemyGhostStainDisappear(EnemyGhostStainWork* pgs);
void EnemyGhostSpotHandle(sfObj* obj);
void spot_disappear(EnemyGhostSpotWork* pgsp);
void EnemyGhostSpotDraw(sfObj* obj);

// 
// Start address: 0x1d9380
EnemyGhostStainWork* EnemyGhostStainConstruct(float* center, float* normal, int spot, float double_range, EnemyGhostStainParameter* gsp)
{
	EnemyGhostStainWork* pgs;
	EnemyGhostSpotWork* pgsp;
	sfObj* myobj;
	sfObj* sobj;
	int i;
	float p;
	// Line 199, Address: 0x1d9380, Func Offset: 0
	// Line 206, Address: 0x1d9398, Func Offset: 0x18
	// Line 199, Address: 0x1d939c, Func Offset: 0x1c
	// Line 206, Address: 0x1d93b8, Func Offset: 0x38
	// Line 199, Address: 0x1d93bc, Func Offset: 0x3c
	// Line 206, Address: 0x1d93c0, Func Offset: 0x40
	// Line 207, Address: 0x1d93cc, Func Offset: 0x4c
	// Line 208, Address: 0x1d93d4, Func Offset: 0x54
	// Line 209, Address: 0x1d93dc, Func Offset: 0x5c
	// Line 210, Address: 0x1d93e0, Func Offset: 0x60
	// Line 211, Address: 0x1d93f4, Func Offset: 0x74
	// Line 212, Address: 0x1d93fc, Func Offset: 0x7c
	// Line 213, Address: 0x1d9404, Func Offset: 0x84
	// Line 214, Address: 0x1d9408, Func Offset: 0x88
	// Line 216, Address: 0x1d9418, Func Offset: 0x98
	// Line 217, Address: 0x1d9424, Func Offset: 0xa4
	// Line 216, Address: 0x1d9428, Func Offset: 0xa8
	// Line 218, Address: 0x1d942c, Func Offset: 0xac
	// Line 219, Address: 0x1d9460, Func Offset: 0xe0
	// Line 220, Address: 0x1d9468, Func Offset: 0xe8
	// Line 221, Address: 0x1d9478, Func Offset: 0xf8
	// Line 222, Address: 0x1d9480, Func Offset: 0x100
	// Line 223, Address: 0x1d9488, Func Offset: 0x108
	// Line 225, Address: 0x1d9490, Func Offset: 0x110
	// Line 226, Address: 0x1d94a4, Func Offset: 0x124
	// Line 227, Address: 0x1d94ac, Func Offset: 0x12c
	// Line 228, Address: 0x1d94b4, Func Offset: 0x134
	// Line 229, Address: 0x1d94bc, Func Offset: 0x13c
	// Line 230, Address: 0x1d94c0, Func Offset: 0x140
	// Line 231, Address: 0x1d94d0, Func Offset: 0x150
	// Line 233, Address: 0x1d94dc, Func Offset: 0x15c
	// Line 231, Address: 0x1d94e0, Func Offset: 0x160
	// Line 234, Address: 0x1d94e4, Func Offset: 0x164
	// Line 235, Address: 0x1d94ec, Func Offset: 0x16c
	// Line 236, Address: 0x1d94f4, Func Offset: 0x174
	// Line 239, Address: 0x1d94f8, Func Offset: 0x178
	// Line 237, Address: 0x1d94fc, Func Offset: 0x17c
	// Line 239, Address: 0x1d9500, Func Offset: 0x180
	// Line 240, Address: 0x1d9508, Func Offset: 0x188
	// Line 242, Address: 0x1d950c, Func Offset: 0x18c
	// Line 243, Address: 0x1d9518, Func Offset: 0x198
	// Line 245, Address: 0x1d951c, Func Offset: 0x19c
	// Line 246, Address: 0x1d9528, Func Offset: 0x1a8
	// Line 249, Address: 0x1d9530, Func Offset: 0x1b0
	// Line 250, Address: 0x1d9538, Func Offset: 0x1b8
	// Line 251, Address: 0x1d9540, Func Offset: 0x1c0
	// Line 250, Address: 0x1d9544, Func Offset: 0x1c4
	// Line 252, Address: 0x1d9548, Func Offset: 0x1c8
	// Line 254, Address: 0x1d9590, Func Offset: 0x210
	// Line 252, Address: 0x1d9594, Func Offset: 0x214
	// Line 254, Address: 0x1d95a8, Func Offset: 0x228
	// Line 255, Address: 0x1d95b4, Func Offset: 0x234
	// Line 256, Address: 0x1d95c0, Func Offset: 0x240
	// Line 257, Address: 0x1d95d4, Func Offset: 0x254
	// Line 259, Address: 0x1d9600, Func Offset: 0x280
	// Line 257, Address: 0x1d9604, Func Offset: 0x284
	// Line 259, Address: 0x1d9634, Func Offset: 0x2b4
	// Line 260, Address: 0x1d9644, Func Offset: 0x2c4
	// Line 261, Address: 0x1d9650, Func Offset: 0x2d0
	// Line 263, Address: 0x1d967c, Func Offset: 0x2fc
	// Line 261, Address: 0x1d9680, Func Offset: 0x300
	// Line 263, Address: 0x1d96b0, Func Offset: 0x330
	// Line 264, Address: 0x1d96bc, Func Offset: 0x33c
	// Line 265, Address: 0x1d96c4, Func Offset: 0x344
	// Line 266, Address: 0x1d96c8, Func Offset: 0x348
	// Line 268, Address: 0x1d96cc, Func Offset: 0x34c
	// Line 269, Address: 0x1d96d8, Func Offset: 0x358
	// Line 270, Address: 0x1d96dc, Func Offset: 0x35c
	// Line 271, Address: 0x1d96e0, Func Offset: 0x360
	// Line 272, Address: 0x1d96e4, Func Offset: 0x364
	// Line 273, Address: 0x1d96e8, Func Offset: 0x368
	// Line 274, Address: 0x1d96f0, Func Offset: 0x370
	// Line 276, Address: 0x1d96fc, Func Offset: 0x37c
	// Line 275, Address: 0x1d9700, Func Offset: 0x380
	// Line 276, Address: 0x1d970c, Func Offset: 0x38c
	// Line 277, Address: 0x1d9720, Func Offset: 0x3a0
	// Line 278, Address: 0x1d972c, Func Offset: 0x3ac
	// Line 277, Address: 0x1d9730, Func Offset: 0x3b0
	// Line 278, Address: 0x1d9734, Func Offset: 0x3b4
	// Line 279, Address: 0x1d9738, Func Offset: 0x3b8
	// Line 277, Address: 0x1d973c, Func Offset: 0x3bc
	// Line 278, Address: 0x1d9748, Func Offset: 0x3c8
	// Line 279, Address: 0x1d974c, Func Offset: 0x3cc
	// Line 280, Address: 0x1d975c, Func Offset: 0x3dc
	// Line 281, Address: 0x1d9768, Func Offset: 0x3e8
	// Line 282, Address: 0x1d9780, Func Offset: 0x400
	// Line 283, Address: 0x1d978c, Func Offset: 0x40c
	// Line 282, Address: 0x1d9790, Func Offset: 0x410
	// Line 283, Address: 0x1d9794, Func Offset: 0x414
	// Line 284, Address: 0x1d9798, Func Offset: 0x418
	// Line 282, Address: 0x1d979c, Func Offset: 0x41c
	// Line 283, Address: 0x1d97a8, Func Offset: 0x428
	// Line 284, Address: 0x1d97ac, Func Offset: 0x42c
	// Line 285, Address: 0x1d97bc, Func Offset: 0x43c
	// Line 286, Address: 0x1d97c0, Func Offset: 0x440
	// Line 287, Address: 0x1d97c8, Func Offset: 0x448
	// Line 289, Address: 0x1d97d0, Func Offset: 0x450
	// Line 287, Address: 0x1d97d4, Func Offset: 0x454
	// Line 288, Address: 0x1d97d8, Func Offset: 0x458
	// Line 289, Address: 0x1d97dc, Func Offset: 0x45c
	// Line 290, Address: 0x1d97ec, Func Offset: 0x46c
	// Line 291, Address: 0x1d97f8, Func Offset: 0x478
	// Line 292, Address: 0x1d9804, Func Offset: 0x484
	// Line 294, Address: 0x1d9818, Func Offset: 0x498
	// Line 297, Address: 0x1d9820, Func Offset: 0x4a0
	// Line 298, Address: 0x1d9828, Func Offset: 0x4a8
	// Line 299, Address: 0x1d982c, Func Offset: 0x4ac
	// Line 298, Address: 0x1d9834, Func Offset: 0x4b4
	// Line 299, Address: 0x1d9840, Func Offset: 0x4c0
	// Line 300, Address: 0x1d9848, Func Offset: 0x4c8
	// Line 302, Address: 0x1d9858, Func Offset: 0x4d8
	// Line 303, Address: 0x1d985c, Func Offset: 0x4dc
	// Line 307, Address: 0x1d9860, Func Offset: 0x4e0
	// Line 304, Address: 0x1d9864, Func Offset: 0x4e4
	// Line 305, Address: 0x1d9868, Func Offset: 0x4e8
	// Line 306, Address: 0x1d986c, Func Offset: 0x4ec
	// Line 308, Address: 0x1d9870, Func Offset: 0x4f0
	// Func End, Address: 0x1d989c, Func Offset: 0x51c
}

// 
// Start address: 0x1d98a0
void EnemyGhostStainDestruct(EnemyGhostStainWork* pgs)
{
	// Line 314, Address: 0x1d98a0, Func Offset: 0
	// Line 315, Address: 0x1d98b0, Func Offset: 0x10
	// Line 316, Address: 0x1d98d4, Func Offset: 0x34
	// Line 317, Address: 0x1d98dc, Func Offset: 0x3c
	// Line 318, Address: 0x1d98e4, Func Offset: 0x44
	// Line 317, Address: 0x1d98e8, Func Offset: 0x48
	// Line 319, Address: 0x1d98ec, Func Offset: 0x4c
	// Line 320, Address: 0x1d9900, Func Offset: 0x60
	// Line 322, Address: 0x1d9908, Func Offset: 0x68
	// Line 323, Address: 0x1d9910, Func Offset: 0x70
	// Func End, Address: 0x1d9920, Func Offset: 0x80
}

// 
// Start address: 0x1d9920
void EnemyGhostStainSetThreadDemo(EnemyGhostStainWork* pgs)
{
	// Line 329, Address: 0x1d9920, Func Offset: 0
	// Line 330, Address: 0x1d9930, Func Offset: 0x10
	// Line 331, Address: 0x1d9950, Func Offset: 0x30
	// Line 332, Address: 0x1d995c, Func Offset: 0x3c
	// Line 333, Address: 0x1d9964, Func Offset: 0x44
	// Line 335, Address: 0x1d9970, Func Offset: 0x50
	// Func End, Address: 0x1d9980, Func Offset: 0x60
}

// 
// Start address: 0x1d9980
int equip_saintmedallion()
{
	// Line 339, Address: 0x1d9980, Func Offset: 0
	// Line 340, Address: 0x1d9988, Func Offset: 0x8
	// Line 343, Address: 0x1d99c4, Func Offset: 0x44
	// Line 344, Address: 0x1d99cc, Func Offset: 0x4c
	// Line 345, Address: 0x1d99d0, Func Offset: 0x50
	// Line 346, Address: 0x1d99d8, Func Offset: 0x58
	// Func End, Address: 0x1d99e4, Func Offset: 0x64
}

// 
// Start address: 0x1d99f0
void EnemyGhostStainHandle(sfObj* obj)
{
	EnemyGhostStainWork* pgs;
	float s;
	float d;
	// Line 352, Address: 0x1d99f0, Func Offset: 0
	// Line 354, Address: 0x1d9a08, Func Offset: 0x18
	// Line 355, Address: 0x1d9a10, Func Offset: 0x20
	// Line 356, Address: 0x1d9a14, Func Offset: 0x24
	// Line 355, Address: 0x1d9a20, Func Offset: 0x30
	// Line 356, Address: 0x1d9a24, Func Offset: 0x34
	// Line 358, Address: 0x1d9a5c, Func Offset: 0x6c
	// Line 359, Address: 0x1d9a74, Func Offset: 0x84
	// Line 360, Address: 0x1d9a84, Func Offset: 0x94
	// Line 361, Address: 0x1d9a90, Func Offset: 0xa0
	// Line 362, Address: 0x1d9a98, Func Offset: 0xa8
	// Line 361, Address: 0x1d9a9c, Func Offset: 0xac
	// Line 362, Address: 0x1d9aa8, Func Offset: 0xb8
	// Line 364, Address: 0x1d9ad0, Func Offset: 0xe0
	// Line 365, Address: 0x1d9af8, Func Offset: 0x108
	// Line 367, Address: 0x1d9b00, Func Offset: 0x110
	// Line 368, Address: 0x1d9b18, Func Offset: 0x128
	// Line 369, Address: 0x1d9b20, Func Offset: 0x130
	// Line 370, Address: 0x1d9b24, Func Offset: 0x134
	// Line 371, Address: 0x1d9b28, Func Offset: 0x138
	// Line 372, Address: 0x1d9b30, Func Offset: 0x140
	// Line 373, Address: 0x1d9b3c, Func Offset: 0x14c
	// Line 376, Address: 0x1d9b5c, Func Offset: 0x16c
	// Line 373, Address: 0x1d9b60, Func Offset: 0x170
	// Line 377, Address: 0x1d9b64, Func Offset: 0x174
	// Line 378, Address: 0x1d9b6c, Func Offset: 0x17c
	// Line 381, Address: 0x1d9b74, Func Offset: 0x184
	// Line 382, Address: 0x1d9b80, Func Offset: 0x190
	// Line 383, Address: 0x1d9b94, Func Offset: 0x1a4
	// Line 384, Address: 0x1d9b9c, Func Offset: 0x1ac
	// Line 387, Address: 0x1d9ba4, Func Offset: 0x1b4
	// Line 388, Address: 0x1d9bbc, Func Offset: 0x1cc
	// Line 389, Address: 0x1d9bc4, Func Offset: 0x1d4
	// Line 391, Address: 0x1d9bc8, Func Offset: 0x1d8
	// Line 393, Address: 0x1d9bf0, Func Offset: 0x200
	// Line 394, Address: 0x1d9bf8, Func Offset: 0x208
	// Line 396, Address: 0x1d9c00, Func Offset: 0x210
	// Line 397, Address: 0x1d9c08, Func Offset: 0x218
	// Line 399, Address: 0x1d9c10, Func Offset: 0x220
	// Line 402, Address: 0x1d9c18, Func Offset: 0x228
	// Line 403, Address: 0x1d9c20, Func Offset: 0x230
	// Func End, Address: 0x1d9c3c, Func Offset: 0x24c
}

// 
// Start address: 0x1d9c40
void stain_step_appear(EnemyGhostStainWork* pgs)
{
	// Line 409, Address: 0x1d9c40, Func Offset: 0
	// Line 410, Address: 0x1d9c4c, Func Offset: 0xc
	// Line 411, Address: 0x1d9c58, Func Offset: 0x18
	// Line 410, Address: 0x1d9c60, Func Offset: 0x20
	// Line 411, Address: 0x1d9c68, Func Offset: 0x28
	// Line 412, Address: 0x1d9c74, Func Offset: 0x34
	// Line 413, Address: 0x1d9c80, Func Offset: 0x40
	// Line 414, Address: 0x1d9c88, Func Offset: 0x48
	// Line 415, Address: 0x1d9c9c, Func Offset: 0x5c
	// Line 417, Address: 0x1d9ca0, Func Offset: 0x60
	// Func End, Address: 0x1d9cb0, Func Offset: 0x70
}

// 
// Start address: 0x1d9cb0
void stain_step_stagnation(EnemyGhostStainWork* pgs)
{
	// Line 423, Address: 0x1d9cb0, Func Offset: 0
	// Line 424, Address: 0x1d9cbc, Func Offset: 0xc
	// Line 425, Address: 0x1d9cc8, Func Offset: 0x18
	// Line 426, Address: 0x1d9ccc, Func Offset: 0x1c
	// Line 424, Address: 0x1d9cd0, Func Offset: 0x20
	// Line 426, Address: 0x1d9cd8, Func Offset: 0x28
	// Line 427, Address: 0x1d9ce0, Func Offset: 0x30
	// Line 428, Address: 0x1d9ce8, Func Offset: 0x38
	// Func End, Address: 0x1d9cf8, Func Offset: 0x48
}

// 
// Start address: 0x1d9d00
void stain_step_disappear(EnemyGhostStainWork* pgs)
{
	float d;
	int i;
	// Line 434, Address: 0x1d9d00, Func Offset: 0
	// Line 437, Address: 0x1d9d14, Func Offset: 0x14
	// Line 439, Address: 0x1d9d18, Func Offset: 0x18
	// Line 440, Address: 0x1d9d28, Func Offset: 0x28
	// Line 439, Address: 0x1d9d30, Func Offset: 0x30
	// Line 440, Address: 0x1d9d34, Func Offset: 0x34
	// Line 441, Address: 0x1d9d40, Func Offset: 0x40
	// Line 442, Address: 0x1d9d44, Func Offset: 0x44
	// Line 443, Address: 0x1d9d50, Func Offset: 0x50
	// Line 446, Address: 0x1d9d78, Func Offset: 0x78
	// Line 447, Address: 0x1d9d80, Func Offset: 0x80
	// Line 448, Address: 0x1d9d84, Func Offset: 0x84
	// Line 449, Address: 0x1d9d90, Func Offset: 0x90
	// Line 450, Address: 0x1d9d98, Func Offset: 0x98
	// Line 449, Address: 0x1d9d9c, Func Offset: 0x9c
	// Line 450, Address: 0x1d9da4, Func Offset: 0xa4
	// Line 452, Address: 0x1d9db4, Func Offset: 0xb4
	// Line 451, Address: 0x1d9db8, Func Offset: 0xb8
	// Line 452, Address: 0x1d9dbc, Func Offset: 0xbc
	// Line 451, Address: 0x1d9dc0, Func Offset: 0xc0
	// Line 452, Address: 0x1d9dc4, Func Offset: 0xc4
	// Line 453, Address: 0x1d9de8, Func Offset: 0xe8
	// Line 455, Address: 0x1d9df0, Func Offset: 0xf0
	// Func End, Address: 0x1d9e04, Func Offset: 0x104
}

// 
// Start address: 0x1d9e10
void stain_control(EnemyGhostStainWork* pgs)
{
	float d;
	float p;
	float p1;
	float p2;
	int i;
	// Line 461, Address: 0x1d9e10, Func Offset: 0
	// Line 464, Address: 0x1d9e14, Func Offset: 0x4
	// Line 461, Address: 0x1d9e18, Func Offset: 0x8
	// Line 464, Address: 0x1d9e38, Func Offset: 0x28
	// Line 465, Address: 0x1d9e44, Func Offset: 0x34
	// Line 467, Address: 0x1d9e50, Func Offset: 0x40
	// Line 466, Address: 0x1d9e54, Func Offset: 0x44
	// Line 465, Address: 0x1d9e60, Func Offset: 0x50
	// Line 466, Address: 0x1d9e64, Func Offset: 0x54
	// Line 467, Address: 0x1d9e6c, Func Offset: 0x5c
	// Line 468, Address: 0x1d9e78, Func Offset: 0x68
	// Line 472, Address: 0x1d9eb8, Func Offset: 0xa8
	// Line 477, Address: 0x1d9ecc, Func Offset: 0xbc
	// Line 474, Address: 0x1d9ed0, Func Offset: 0xc0
	// Line 475, Address: 0x1d9ed4, Func Offset: 0xc4
	// Line 473, Address: 0x1d9ee0, Func Offset: 0xd0
	// Line 474, Address: 0x1d9ee4, Func Offset: 0xd4
	// Line 476, Address: 0x1d9ee8, Func Offset: 0xd8
	// Line 474, Address: 0x1d9ef0, Func Offset: 0xe0
	// Line 475, Address: 0x1d9ef4, Func Offset: 0xe4
	// Line 477, Address: 0x1d9ef8, Func Offset: 0xe8
	// Line 478, Address: 0x1d9f00, Func Offset: 0xf0
	// Line 479, Address: 0x1d9f14, Func Offset: 0x104
	// Line 478, Address: 0x1d9f2c, Func Offset: 0x11c
	// Line 479, Address: 0x1d9f30, Func Offset: 0x120
	// Line 478, Address: 0x1d9f40, Func Offset: 0x130
	// Line 479, Address: 0x1d9f44, Func Offset: 0x134
	// Line 481, Address: 0x1d9f5c, Func Offset: 0x14c
	// Line 482, Address: 0x1d9f64, Func Offset: 0x154
	// Line 483, Address: 0x1d9f7c, Func Offset: 0x16c
	// Line 486, Address: 0x1d9f80, Func Offset: 0x170
	// Line 491, Address: 0x1d9f94, Func Offset: 0x184
	// Line 488, Address: 0x1d9f98, Func Offset: 0x188
	// Line 489, Address: 0x1d9f9c, Func Offset: 0x18c
	// Line 487, Address: 0x1d9fa8, Func Offset: 0x198
	// Line 488, Address: 0x1d9fac, Func Offset: 0x19c
	// Line 490, Address: 0x1d9fb0, Func Offset: 0x1a0
	// Line 488, Address: 0x1d9fb8, Func Offset: 0x1a8
	// Line 489, Address: 0x1d9fbc, Func Offset: 0x1ac
	// Line 491, Address: 0x1d9fc0, Func Offset: 0x1b0
	// Line 492, Address: 0x1d9fc8, Func Offset: 0x1b8
	// Line 493, Address: 0x1d9fdc, Func Offset: 0x1cc
	// Line 492, Address: 0x1d9ff4, Func Offset: 0x1e4
	// Line 493, Address: 0x1d9ff8, Func Offset: 0x1e8
	// Line 492, Address: 0x1da008, Func Offset: 0x1f8
	// Line 493, Address: 0x1da00c, Func Offset: 0x1fc
	// Line 495, Address: 0x1da024, Func Offset: 0x214
	// Line 496, Address: 0x1da02c, Func Offset: 0x21c
	// Line 497, Address: 0x1da044, Func Offset: 0x234
	// Line 500, Address: 0x1da048, Func Offset: 0x238
	// Line 501, Address: 0x1da05c, Func Offset: 0x24c
	// Func End, Address: 0x1da084, Func Offset: 0x274
}

// 
// Start address: 0x1da090
void check_outbreak_spot(EnemyGhostStainWork* pgs)
{
	EnemyGhostSpotWork* pgsp;
	float d;
	float d2;
	int n;
	// Line 507, Address: 0x1da090, Func Offset: 0
	// Line 511, Address: 0x1da0ac, Func Offset: 0x1c
	// Line 512, Address: 0x1da0b0, Func Offset: 0x20
	// Line 513, Address: 0x1da0b8, Func Offset: 0x28
	// Line 516, Address: 0x1da0bc, Func Offset: 0x2c
	// Line 513, Address: 0x1da0c0, Func Offset: 0x30
	// Line 516, Address: 0x1da0c8, Func Offset: 0x38
	// Line 515, Address: 0x1da0cc, Func Offset: 0x3c
	// Line 513, Address: 0x1da0d0, Func Offset: 0x40
	// Line 516, Address: 0x1da0e0, Func Offset: 0x50
	// Line 517, Address: 0x1da0ec, Func Offset: 0x5c
	// Line 518, Address: 0x1da0fc, Func Offset: 0x6c
	// Line 517, Address: 0x1da100, Func Offset: 0x70
	// Line 519, Address: 0x1da104, Func Offset: 0x74
	// Line 520, Address: 0x1da108, Func Offset: 0x78
	// Line 521, Address: 0x1da120, Func Offset: 0x90
	// Line 522, Address: 0x1da128, Func Offset: 0x98
	// Line 523, Address: 0x1da130, Func Offset: 0xa0
	// Line 524, Address: 0x1da144, Func Offset: 0xb4
	// Line 525, Address: 0x1da158, Func Offset: 0xc8
	// Line 526, Address: 0x1da178, Func Offset: 0xe8
	// Line 529, Address: 0x1da184, Func Offset: 0xf4
	// Line 530, Address: 0x1da190, Func Offset: 0x100
	// Line 531, Address: 0x1da198, Func Offset: 0x108
	// Line 532, Address: 0x1da1ac, Func Offset: 0x11c
	// Line 534, Address: 0x1da1b0, Func Offset: 0x120
	// Line 535, Address: 0x1da1bc, Func Offset: 0x12c
	// Line 536, Address: 0x1da1d4, Func Offset: 0x144
	// Line 537, Address: 0x1da1e0, Func Offset: 0x150
	// Line 538, Address: 0x1da1e8, Func Offset: 0x158
	// Line 539, Address: 0x1da1fc, Func Offset: 0x16c
	// Func End, Address: 0x1da220, Func Offset: 0x190
}

// 
// Start address: 0x1da220
void outbreak_spot(EnemyGhostStainWork* pgs)
{
	EnemyGhostSpotWork* pgsp;
	float vec[4];
	int n;
	int nd;
	int sn;
	float d;
	float dm;
	// Line 545, Address: 0x1da220, Func Offset: 0
	// Line 552, Address: 0x1da224, Func Offset: 0x4
	// Line 545, Address: 0x1da228, Func Offset: 0x8
	// Line 552, Address: 0x1da22c, Func Offset: 0xc
	// Line 545, Address: 0x1da230, Func Offset: 0x10
	// Line 553, Address: 0x1da234, Func Offset: 0x14
	// Line 545, Address: 0x1da238, Func Offset: 0x18
	// Line 550, Address: 0x1da24c, Func Offset: 0x2c
	// Line 551, Address: 0x1da250, Func Offset: 0x30
	// Line 552, Address: 0x1da254, Func Offset: 0x34
	// Line 553, Address: 0x1da25c, Func Offset: 0x3c
	// Line 554, Address: 0x1da264, Func Offset: 0x44
	// Line 555, Address: 0x1da284, Func Offset: 0x64
	// Line 556, Address: 0x1da290, Func Offset: 0x70
	// Line 558, Address: 0x1da2b8, Func Offset: 0x98
	// Line 559, Address: 0x1da2c0, Func Offset: 0xa0
	// Line 558, Address: 0x1da2c4, Func Offset: 0xa4
	// Line 559, Address: 0x1da2c8, Func Offset: 0xa8
	// Line 561, Address: 0x1da2fc, Func Offset: 0xdc
	// Line 562, Address: 0x1da300, Func Offset: 0xe0
	// Line 563, Address: 0x1da30c, Func Offset: 0xec
	// Line 565, Address: 0x1da334, Func Offset: 0x114
	// Line 564, Address: 0x1da340, Func Offset: 0x120
	// Line 565, Address: 0x1da344, Func Offset: 0x124
	// Line 564, Address: 0x1da348, Func Offset: 0x128
	// Line 565, Address: 0x1da35c, Func Offset: 0x13c
	// Line 566, Address: 0x1da370, Func Offset: 0x150
	// Line 571, Address: 0x1da394, Func Offset: 0x174
	// Line 570, Address: 0x1da398, Func Offset: 0x178
	// Line 571, Address: 0x1da39c, Func Offset: 0x17c
	// Line 570, Address: 0x1da3a0, Func Offset: 0x180
	// Line 571, Address: 0x1da3a4, Func Offset: 0x184
	// Line 570, Address: 0x1da3ac, Func Offset: 0x18c
	// Line 571, Address: 0x1da3b0, Func Offset: 0x190
	// Line 572, Address: 0x1da3c0, Func Offset: 0x1a0
	// Line 573, Address: 0x1da3c8, Func Offset: 0x1a8
	// Line 574, Address: 0x1da3e4, Func Offset: 0x1c4
	// Line 573, Address: 0x1da3e8, Func Offset: 0x1c8
	// Line 574, Address: 0x1da3f0, Func Offset: 0x1d0
	// Line 575, Address: 0x1da3f4, Func Offset: 0x1d4
	// Line 576, Address: 0x1da3fc, Func Offset: 0x1dc
	// Line 577, Address: 0x1da430, Func Offset: 0x210
	// Line 579, Address: 0x1da478, Func Offset: 0x258
	// Line 580, Address: 0x1da484, Func Offset: 0x264
	// Line 581, Address: 0x1da488, Func Offset: 0x268
	// Line 582, Address: 0x1da490, Func Offset: 0x270
	// Func End, Address: 0x1da4b4, Func Offset: 0x294
}

// 
// Start address: 0x1da4c0
void outbreak_drip(EnemyGhostStainWork* pgs)
{
	int n;
	int nd;
	EnemyGhostSpotWork* pgsp;
	// Line 588, Address: 0x1da4c0, Func Offset: 0
	// Line 591, Address: 0x1da4d4, Func Offset: 0x14
	// Line 592, Address: 0x1da4d8, Func Offset: 0x18
	// Line 593, Address: 0x1da4dc, Func Offset: 0x1c
	// Line 594, Address: 0x1da4e0, Func Offset: 0x20
	// Line 595, Address: 0x1da4ec, Func Offset: 0x2c
	// Line 594, Address: 0x1da4f0, Func Offset: 0x30
	// Line 595, Address: 0x1da500, Func Offset: 0x40
	// Line 596, Address: 0x1da510, Func Offset: 0x50
	// Line 597, Address: 0x1da514, Func Offset: 0x54
	// Line 598, Address: 0x1da544, Func Offset: 0x84
	// Line 599, Address: 0x1da570, Func Offset: 0xb0
	// Line 598, Address: 0x1da574, Func Offset: 0xb4
	// Line 599, Address: 0x1da588, Func Offset: 0xc8
	// Line 600, Address: 0x1da58c, Func Offset: 0xcc
	// Func End, Address: 0x1da5a4, Func Offset: 0xe4
}

// 
// Start address: 0x1da5b0
void outbreak_drop(EnemyGhostStainWork* pgs)
{
	EnemyGhostSpotWork* pgsp;
	float pos[4];
	float vec[4];
	EnemyMeasureResult mres;
	int n;
	// Line 606, Address: 0x1da5b0, Func Offset: 0
	// Line 611, Address: 0x1da5c8, Func Offset: 0x18
	// Line 612, Address: 0x1da5cc, Func Offset: 0x1c
	// Line 613, Address: 0x1da5d4, Func Offset: 0x24
	// Line 614, Address: 0x1da5fc, Func Offset: 0x4c
	// Line 615, Address: 0x1da634, Func Offset: 0x84
	// Line 617, Address: 0x1da648, Func Offset: 0x98
	// Line 618, Address: 0x1da664, Func Offset: 0xb4
	// Line 619, Address: 0x1da690, Func Offset: 0xe0
	// Line 621, Address: 0x1da6b0, Func Offset: 0x100
	// Line 620, Address: 0x1da6b4, Func Offset: 0x104
	// Line 621, Address: 0x1da6b8, Func Offset: 0x108
	// Line 620, Address: 0x1da6bc, Func Offset: 0x10c
	// Line 621, Address: 0x1da6c0, Func Offset: 0x110
	// Line 622, Address: 0x1da6d0, Func Offset: 0x120
	// Line 623, Address: 0x1da6d4, Func Offset: 0x124
	// Line 622, Address: 0x1da6d8, Func Offset: 0x128
	// Line 623, Address: 0x1da6dc, Func Offset: 0x12c
	// Line 622, Address: 0x1da6e0, Func Offset: 0x130
	// Line 623, Address: 0x1da6e4, Func Offset: 0x134
	// Line 624, Address: 0x1da6f4, Func Offset: 0x144
	// Line 625, Address: 0x1da6fc, Func Offset: 0x14c
	// Line 624, Address: 0x1da700, Func Offset: 0x150
	// Line 626, Address: 0x1da704, Func Offset: 0x154
	// Line 628, Address: 0x1da70c, Func Offset: 0x15c
	// Line 629, Address: 0x1da710, Func Offset: 0x160
	// Line 630, Address: 0x1da728, Func Offset: 0x178
	// Line 631, Address: 0x1da734, Func Offset: 0x184
	// Line 632, Address: 0x1da750, Func Offset: 0x1a0
	// Line 631, Address: 0x1da754, Func Offset: 0x1a4
	// Line 632, Address: 0x1da75c, Func Offset: 0x1ac
	// Line 633, Address: 0x1da760, Func Offset: 0x1b0
	// Func End, Address: 0x1da778, Func Offset: 0x1c8
}

// 
// Start address: 0x1da780
void EnemyGhostStainDraw(sfObj* obj)
{
	EnemyGhostStainWork* pgs;
	EnemyTexParameter tex[4];
	float pos[4];
	float nom[4];
	float vec[4];
	float dr;
	int i;
	int n;
	// Line 639, Address: 0x1da780, Func Offset: 0
	// Line 646, Address: 0x1da784, Func Offset: 0x4
	// Line 639, Address: 0x1da788, Func Offset: 0x8
	// Line 645, Address: 0x1da794, Func Offset: 0x14
	// Line 646, Address: 0x1da798, Func Offset: 0x18
	// Line 647, Address: 0x1da7a4, Func Offset: 0x24
	// Line 648, Address: 0x1da7ac, Func Offset: 0x2c
	// Line 649, Address: 0x1da7b8, Func Offset: 0x38
	// Line 650, Address: 0x1da7d4, Func Offset: 0x54
	// Line 651, Address: 0x1da7e4, Func Offset: 0x64
	// Line 653, Address: 0x1da7f0, Func Offset: 0x70
	// Line 652, Address: 0x1da7f4, Func Offset: 0x74
	// Line 653, Address: 0x1da7f8, Func Offset: 0x78
	// Line 655, Address: 0x1da800, Func Offset: 0x80
	// Line 656, Address: 0x1da814, Func Offset: 0x94
	// Line 657, Address: 0x1da830, Func Offset: 0xb0
	// Line 658, Address: 0x1da850, Func Offset: 0xd0
	// Line 660, Address: 0x1da854, Func Offset: 0xd4
	// Line 661, Address: 0x1da858, Func Offset: 0xd8
	// Line 662, Address: 0x1da874, Func Offset: 0xf4
	// Line 663, Address: 0x1da878, Func Offset: 0xf8
	// Line 666, Address: 0x1da8a4, Func Offset: 0x124
	// Line 667, Address: 0x1da8ac, Func Offset: 0x12c
	// Line 668, Address: 0x1da8b0, Func Offset: 0x130
	// Line 672, Address: 0x1da8e4, Func Offset: 0x164
	// Line 673, Address: 0x1da8ec, Func Offset: 0x16c
	// Line 674, Address: 0x1da8f0, Func Offset: 0x170
	// Line 679, Address: 0x1da92c, Func Offset: 0x1ac
	// Line 680, Address: 0x1da930, Func Offset: 0x1b0
	// Line 681, Address: 0x1da93c, Func Offset: 0x1bc
	// Line 682, Address: 0x1da958, Func Offset: 0x1d8
	// Line 684, Address: 0x1da970, Func Offset: 0x1f0
	// Line 685, Address: 0x1da97c, Func Offset: 0x1fc
	// Line 686, Address: 0x1da984, Func Offset: 0x204
	// Func End, Address: 0x1da99c, Func Offset: 0x21c
}

// 
// Start address: 0x1da9a0
void EnemyGhostStainDisappear(EnemyGhostStainWork* pgs)
{
	// Line 723, Address: 0x1da9a0, Func Offset: 0
	// Line 724, Address: 0x1da9b0, Func Offset: 0x10
	// Line 725, Address: 0x1da9b8, Func Offset: 0x18
	// Line 726, Address: 0x1da9bc, Func Offset: 0x1c
	// Line 727, Address: 0x1da9e0, Func Offset: 0x40
	// Line 728, Address: 0x1da9e8, Func Offset: 0x48
	// Line 730, Address: 0x1da9f0, Func Offset: 0x50
	// Func End, Address: 0x1daa00, Func Offset: 0x60
}

// 
// Start address: 0x1daa00
void EnemyGhostSpotHandle(sfObj* obj)
{
	EnemyGhostSpotWork* pgsp;
	float d;
	float dr;
	float dt;
	float t;
	float ed;
	int i;
	int n;
	int m;
	// Line 736, Address: 0x1daa00, Func Offset: 0
	// Line 741, Address: 0x1daa0c, Func Offset: 0xc
	// Line 742, Address: 0x1daa14, Func Offset: 0x14
	// Line 743, Address: 0x1daa38, Func Offset: 0x38
	// Line 746, Address: 0x1daa4c, Func Offset: 0x4c
	// Line 744, Address: 0x1daa50, Func Offset: 0x50
	// Line 746, Address: 0x1daa54, Func Offset: 0x54
	// Line 747, Address: 0x1daa64, Func Offset: 0x64
	// Line 749, Address: 0x1daa70, Func Offset: 0x70
	// Line 751, Address: 0x1daa80, Func Offset: 0x80
	// Line 752, Address: 0x1daa94, Func Offset: 0x94
	// Line 754, Address: 0x1daa98, Func Offset: 0x98
	// Line 753, Address: 0x1daa9c, Func Offset: 0x9c
	// Line 754, Address: 0x1daaa0, Func Offset: 0xa0
	// Line 755, Address: 0x1daab4, Func Offset: 0xb4
	// Line 756, Address: 0x1daab8, Func Offset: 0xb8
	// Line 758, Address: 0x1daac0, Func Offset: 0xc0
	// Line 759, Address: 0x1daad0, Func Offset: 0xd0
	// Line 760, Address: 0x1daad8, Func Offset: 0xd8
	// Line 762, Address: 0x1daadc, Func Offset: 0xdc
	// Line 763, Address: 0x1daae0, Func Offset: 0xe0
	// Line 764, Address: 0x1daaf8, Func Offset: 0xf8
	// Line 765, Address: 0x1dab10, Func Offset: 0x110
	// Line 764, Address: 0x1dab18, Func Offset: 0x118
	// Line 765, Address: 0x1dab24, Func Offset: 0x124
	// Line 766, Address: 0x1dab40, Func Offset: 0x140
	// Line 767, Address: 0x1dab44, Func Offset: 0x144
	// Line 768, Address: 0x1dab54, Func Offset: 0x154
	// Line 769, Address: 0x1dab58, Func Offset: 0x158
	// Line 770, Address: 0x1dab70, Func Offset: 0x170
	// Line 771, Address: 0x1dab78, Func Offset: 0x178
	// Line 772, Address: 0x1dab80, Func Offset: 0x180
	// Line 773, Address: 0x1dab84, Func Offset: 0x184
	// Line 772, Address: 0x1dab88, Func Offset: 0x188
	// Line 773, Address: 0x1dab8c, Func Offset: 0x18c
	// Line 772, Address: 0x1dab90, Func Offset: 0x190
	// Line 773, Address: 0x1dabb0, Func Offset: 0x1b0
	// Line 774, Address: 0x1dabcc, Func Offset: 0x1cc
	// Line 776, Address: 0x1dabd4, Func Offset: 0x1d4
	// Line 777, Address: 0x1dabec, Func Offset: 0x1ec
	// Line 778, Address: 0x1dabfc, Func Offset: 0x1fc
	// Line 779, Address: 0x1dac00, Func Offset: 0x200
	// Line 780, Address: 0x1dac18, Func Offset: 0x218
	// Line 781, Address: 0x1dac24, Func Offset: 0x224
	// Line 780, Address: 0x1dac2c, Func Offset: 0x22c
	// Line 781, Address: 0x1dac4c, Func Offset: 0x24c
	// Line 782, Address: 0x1dac68, Func Offset: 0x268
	// Line 783, Address: 0x1dac6c, Func Offset: 0x26c
	// Line 784, Address: 0x1dac7c, Func Offset: 0x27c
	// Line 785, Address: 0x1dac80, Func Offset: 0x280
	// Line 787, Address: 0x1dac94, Func Offset: 0x294
	// Line 786, Address: 0x1dac98, Func Offset: 0x298
	// Line 787, Address: 0x1dac9c, Func Offset: 0x29c
	// Line 788, Address: 0x1daca8, Func Offset: 0x2a8
	// Line 793, Address: 0x1dacb0, Func Offset: 0x2b0
	// Func End, Address: 0x1dacc0, Func Offset: 0x2c0
}

// 
// Start address: 0x1dacc0
void spot_disappear(EnemyGhostSpotWork* pgsp)
{
	// Line 800, Address: 0x1dacc0, Func Offset: 0
	// Line 801, Address: 0x1daccc, Func Offset: 0xc
	// Line 803, Address: 0x1dacd0, Func Offset: 0x10
	// Func End, Address: 0x1dacd8, Func Offset: 0x18
}

// 
// Start address: 0x1dace0
void EnemyGhostSpotDraw(sfObj* obj)
{
	EnemyGhostSpotWork* pgsp;
	int i;
	int m;
	int sn;
	int n;
	float w;
	float h;
	float d;
	float strength;
	float tr;
	float t;
	unsigned int color;
	EnemyTexParameter tex;
	EnemyTexParameter tex2;
	float tpos[4];
	float vec[4];
	// Line 809, Address: 0x1dace0, Func Offset: 0
	// Line 817, Address: 0x1dad0c, Func Offset: 0x2c
	// Line 818, Address: 0x1dad14, Func Offset: 0x34
	// Line 819, Address: 0x1dad20, Func Offset: 0x40
	// Line 820, Address: 0x1dad24, Func Offset: 0x44
	// Line 818, Address: 0x1dad28, Func Offset: 0x48
	// Line 820, Address: 0x1dad34, Func Offset: 0x54
	// Line 821, Address: 0x1dad40, Func Offset: 0x60
	// Line 822, Address: 0x1dad48, Func Offset: 0x68
	// Line 821, Address: 0x1dad4c, Func Offset: 0x6c
	// Line 822, Address: 0x1dad54, Func Offset: 0x74
	// Line 823, Address: 0x1dad5c, Func Offset: 0x7c
	// Line 824, Address: 0x1dad6c, Func Offset: 0x8c
	// Line 826, Address: 0x1dad80, Func Offset: 0xa0
	// Line 827, Address: 0x1dada8, Func Offset: 0xc8
	// Line 828, Address: 0x1dadd0, Func Offset: 0xf0
	// Line 829, Address: 0x1daddc, Func Offset: 0xfc
	// Line 830, Address: 0x1dade8, Func Offset: 0x108
	// Line 829, Address: 0x1dadec, Func Offset: 0x10c
	// Line 830, Address: 0x1dadf0, Func Offset: 0x110
	// Line 831, Address: 0x1dadfc, Func Offset: 0x11c
	// Line 830, Address: 0x1dae00, Func Offset: 0x120
	// Line 831, Address: 0x1dae04, Func Offset: 0x124
	// Line 832, Address: 0x1dae24, Func Offset: 0x144
	// Line 833, Address: 0x1dae28, Func Offset: 0x148
	// Line 834, Address: 0x1dae34, Func Offset: 0x154
	// Line 835, Address: 0x1dae3c, Func Offset: 0x15c
	// Line 836, Address: 0x1dae40, Func Offset: 0x160
	// Line 838, Address: 0x1dae58, Func Offset: 0x178
	// Line 840, Address: 0x1dae60, Func Offset: 0x180
	// Line 843, Address: 0x1dae7c, Func Offset: 0x19c
	// Line 844, Address: 0x1dae80, Func Offset: 0x1a0
	// Line 845, Address: 0x1dae88, Func Offset: 0x1a8
	// Line 846, Address: 0x1dae9c, Func Offset: 0x1bc
	// Line 847, Address: 0x1daea0, Func Offset: 0x1c0
	// Line 848, Address: 0x1daea8, Func Offset: 0x1c8
	// Line 845, Address: 0x1daeac, Func Offset: 0x1cc
	// Line 847, Address: 0x1daeb0, Func Offset: 0x1d0
	// Line 846, Address: 0x1daeb8, Func Offset: 0x1d8
	// Line 847, Address: 0x1daec0, Func Offset: 0x1e0
	// Line 848, Address: 0x1daedc, Func Offset: 0x1fc
	// Line 849, Address: 0x1daee8, Func Offset: 0x208
	// Line 850, Address: 0x1daef0, Func Offset: 0x210
	// Line 852, Address: 0x1daf0c, Func Offset: 0x22c
	// Line 854, Address: 0x1daf18, Func Offset: 0x238
	// Line 853, Address: 0x1daf1c, Func Offset: 0x23c
	// Line 854, Address: 0x1daf24, Func Offset: 0x244
	// Line 855, Address: 0x1daf34, Func Offset: 0x254
	// Line 856, Address: 0x1daf38, Func Offset: 0x258
	// Line 857, Address: 0x1daf4c, Func Offset: 0x26c
	// Line 858, Address: 0x1daf70, Func Offset: 0x290
	// Line 861, Address: 0x1daf88, Func Offset: 0x2a8
	// Line 862, Address: 0x1daf90, Func Offset: 0x2b0
	// Line 861, Address: 0x1daf9c, Func Offset: 0x2bc
	// Line 862, Address: 0x1dafa0, Func Offset: 0x2c0
	// Line 861, Address: 0x1dafa4, Func Offset: 0x2c4
	// Line 862, Address: 0x1dafa8, Func Offset: 0x2c8
	// Line 861, Address: 0x1dafb0, Func Offset: 0x2d0
	// Line 862, Address: 0x1dafb8, Func Offset: 0x2d8
	// Line 861, Address: 0x1dafc0, Func Offset: 0x2e0
	// Line 862, Address: 0x1dafcc, Func Offset: 0x2ec
	// Line 864, Address: 0x1dafd4, Func Offset: 0x2f4
	// Line 865, Address: 0x1dafd8, Func Offset: 0x2f8
	// Line 866, Address: 0x1dafe4, Func Offset: 0x304
	// Line 867, Address: 0x1dafe8, Func Offset: 0x308
	// Line 868, Address: 0x1daffc, Func Offset: 0x31c
	// Line 867, Address: 0x1db000, Func Offset: 0x320
	// Line 868, Address: 0x1db018, Func Offset: 0x338
	// Line 869, Address: 0x1db024, Func Offset: 0x344
	// Line 870, Address: 0x1db02c, Func Offset: 0x34c
	// Line 873, Address: 0x1db04c, Func Offset: 0x36c
	// Line 874, Address: 0x1db050, Func Offset: 0x370
	// Line 873, Address: 0x1db054, Func Offset: 0x374
	// Line 874, Address: 0x1db058, Func Offset: 0x378
	// Line 876, Address: 0x1db068, Func Offset: 0x388
	// Line 877, Address: 0x1db070, Func Offset: 0x390
	// Line 876, Address: 0x1db07c, Func Offset: 0x39c
	// Line 877, Address: 0x1db088, Func Offset: 0x3a8
	// Line 876, Address: 0x1db09c, Func Offset: 0x3bc
	// Line 877, Address: 0x1db0a4, Func Offset: 0x3c4
	// Line 876, Address: 0x1db0a8, Func Offset: 0x3c8
	// Line 877, Address: 0x1db0ac, Func Offset: 0x3cc
	// Line 879, Address: 0x1db0b4, Func Offset: 0x3d4
	// Line 880, Address: 0x1db0cc, Func Offset: 0x3ec
	// Line 881, Address: 0x1db0d0, Func Offset: 0x3f0
	// Line 882, Address: 0x1db0dc, Func Offset: 0x3fc
	// Line 883, Address: 0x1db0e8, Func Offset: 0x408
	// Line 884, Address: 0x1db10c, Func Offset: 0x42c
	// Line 885, Address: 0x1db120, Func Offset: 0x440
	// Line 884, Address: 0x1db124, Func Offset: 0x444
	// Line 885, Address: 0x1db13c, Func Offset: 0x45c
	// Line 886, Address: 0x1db148, Func Offset: 0x468
	// Line 887, Address: 0x1db150, Func Offset: 0x470
	// Line 890, Address: 0x1db16c, Func Offset: 0x48c
	// Line 891, Address: 0x1db170, Func Offset: 0x490
	// Line 890, Address: 0x1db174, Func Offset: 0x494
	// Line 891, Address: 0x1db178, Func Offset: 0x498
	// Line 893, Address: 0x1db188, Func Offset: 0x4a8
	// Line 894, Address: 0x1db190, Func Offset: 0x4b0
	// Line 893, Address: 0x1db19c, Func Offset: 0x4bc
	// Line 894, Address: 0x1db1bc, Func Offset: 0x4dc
	// Line 895, Address: 0x1db1d8, Func Offset: 0x4f8
	// Line 896, Address: 0x1db200, Func Offset: 0x520
	// Line 900, Address: 0x1db230, Func Offset: 0x550
	// Line 901, Address: 0x1db244, Func Offset: 0x564
	// Line 902, Address: 0x1db24c, Func Offset: 0x56c
	// Func End, Address: 0x1db27c, Func Offset: 0x59c
}

