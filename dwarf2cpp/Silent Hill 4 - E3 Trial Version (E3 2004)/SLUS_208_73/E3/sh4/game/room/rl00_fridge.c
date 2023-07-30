typedef struct _EventDriver;
typedef struct sgBone;
typedef struct sfObj;
typedef struct _anon0;
typedef enum sgIKSolveResult : unsigned char;
typedef struct _ObjHitCylinder;
typedef struct _ObjHitCube;
typedef struct sgSVModel;
typedef struct sgIKHandle;
typedef struct _ObjHitSphere;
typedef struct _ObjHitDoor;
typedef struct _ObjHitData;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _EventInst;
typedef struct sgAnime;
typedef struct _FanWork;
typedef union _anon3;
typedef struct _GAME_WORK;
typedef struct _FRIDGE_DATA;
typedef struct sfCharacter;

typedef int(*type_0)(sfObj*);
typedef int(*type_1)(sfObj*);
typedef int(*type_2)(sfObj*);
typedef int(*type_3)(sfObj*);
typedef int(*type_4)(sfObj*);
typedef sgIKSolveResult(*type_8)();
typedef void(*type_10)(_anon1*, int, int, float*);
typedef void(*type_16)(sgAnime*, int);
typedef void(*type_23)(sfObj*);
typedef int(*type_30)(sfObj*);
typedef void(*type_32)(sfObj*);
typedef int(*type_33)(sfObj*);

typedef _anon3 type_5[4];
typedef float type_6[4][4];
typedef float type_7[4][2];
typedef float type_9[4];
typedef int type_11[1];
typedef int type_12[1];
typedef float type_13[4];
typedef void* type_14[4];
typedef int type_15[1];
typedef int type_17[1];
typedef short type_18[2];
typedef _anon3 type_19[256];
typedef unsigned short type_20[2];
typedef char type_21[4];
typedef float type_22[4];
typedef unsigned char type_24[4];
typedef unsigned char type_25[4];
typedef int type_26[1];
typedef float type_27[1];
typedef int type_28[1];
typedef int type_29[1];
typedef int type_31[1];

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

struct _anon0
{
	void* texture_normal;
	void* texture_global;
	void* texture_semitrans;
	void* model_data;
	sgBone* parent_bone;
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

struct _ObjHitCylinder
{
	float r;
	float h;
};

struct _ObjHitCube
{
	float w;
	float h;
	float d;
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

struct _ObjHitSphere
{
	float r;
};

struct _ObjHitDoor
{
	int num;
};

struct _ObjHitData
{
	float pos[4];
	int type;
	unsigned int attr;
	float rot;
	void* check_func;
	union
	{
		_ObjHitCylinder cl;
		_ObjHitCube cb;
		_ObjHitSphere sp;
		_ObjHitDoor dr;
	};
};

struct _anon1
{
	unsigned long tex0;
	unsigned long clamp;
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

struct _EventInst
{
	_EventDriver evdrv;
	unsigned int attr;
	int(*drawaf)(sfObj*);
	int(*endexitf)(sfObj*);
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

struct _FanWork
{
	sfCharacter chr;
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

struct _FRIDGE_DATA
{
	char open;
	_anon0 close_model;
	_anon0 open_model;
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

_FRIDGE_DATA rl00_fridge;
_GAME_WORK gamew;
_EventDriver ev_frigde_open;
_EventDriver ev_frigde_close;

int trgchk_fridge_is_open();
int RL00FridgeIsOpen();
void RL00FridgeSetOpen();
void RL00FridgeSetClose();
void RL00FridgeModelConstruct();
void RL00FridgeModelDraw();
void RL00FridgeConstruct(sfObj* obj);
void RL00FridgeDestruct();
void RL00FridgeExec();
void RL00FridgeDraw();
int ev_frigde_open_trgchk();
int ev_frigde_open_init(sfObj* obj);
int ev_frigde_open_exec(sfObj* obj);
int ev_frigde_close_trgchk();
int ev_frigde_close_init(sfObj* obj);
int ev_frigde_close_exec(sfObj* obj);
void FanConstruct(sfObj* obj);
void FanDestruct(sfObj* obj);
void FanExec(sfObj* obj);
void FanDraw();
void FanRL01Construct(sfObj* obj);

// 
// Start address: 0x1ee1470
int trgchk_fridge_is_open()
{
	// Line 70, Address: 0x1ee1470, Func Offset: 0
	// Func End, Address: 0x1ee1478, Func Offset: 0x8
}

// 
// Start address: 0x1ee1480
int RL00FridgeIsOpen()
{
	// Line 81, Address: 0x1ee1480, Func Offset: 0
	// Line 82, Address: 0x1ee1484, Func Offset: 0x4
	// Func End, Address: 0x1ee148c, Func Offset: 0xc
}

// 
// Start address: 0x1ee1490
void RL00FridgeSetOpen()
{
	// Line 91, Address: 0x1ee1490, Func Offset: 0
	// Line 92, Address: 0x1ee1498, Func Offset: 0x8
	// Func End, Address: 0x1ee14a0, Func Offset: 0x10
}

// 
// Start address: 0x1ee14a0
void RL00FridgeSetClose()
{
	// Line 101, Address: 0x1ee14a0, Func Offset: 0
	// Line 102, Address: 0x1ee14a4, Func Offset: 0x4
	// Func End, Address: 0x1ee14ac, Func Offset: 0xc
}

// 
// Start address: 0x1ee14b0
void RL00FridgeModelConstruct()
{
	// Line 110, Address: 0x1ee14b0, Func Offset: 0
	// Line 111, Address: 0x1ee14b4, Func Offset: 0x4
	// Line 110, Address: 0x1ee14b8, Func Offset: 0x8
	// Line 111, Address: 0x1ee14bc, Func Offset: 0xc
	// Line 112, Address: 0x1ee14c4, Func Offset: 0x14
	// Line 113, Address: 0x1ee14d0, Func Offset: 0x20
	// Line 114, Address: 0x1ee151c, Func Offset: 0x6c
	// Line 115, Address: 0x1ee1520, Func Offset: 0x70
	// Line 116, Address: 0x1ee153c, Func Offset: 0x8c
	// Line 117, Address: 0x1ee1558, Func Offset: 0xa8
	// Line 118, Address: 0x1ee1574, Func Offset: 0xc4
	// Line 119, Address: 0x1ee1590, Func Offset: 0xe0
	// Line 121, Address: 0x1ee1598, Func Offset: 0xe8
	// Line 122, Address: 0x1ee15b4, Func Offset: 0x104
	// Line 123, Address: 0x1ee15d0, Func Offset: 0x120
	// Line 124, Address: 0x1ee15ec, Func Offset: 0x13c
	// Line 125, Address: 0x1ee1608, Func Offset: 0x158
	// Line 127, Address: 0x1ee1610, Func Offset: 0x160
	// Line 128, Address: 0x1ee162c, Func Offset: 0x17c
	// Line 129, Address: 0x1ee1648, Func Offset: 0x198
	// Line 130, Address: 0x1ee1664, Func Offset: 0x1b4
	// Line 131, Address: 0x1ee1680, Func Offset: 0x1d0
	// Line 133, Address: 0x1ee1688, Func Offset: 0x1d8
	// Line 134, Address: 0x1ee16a4, Func Offset: 0x1f4
	// Line 135, Address: 0x1ee16c0, Func Offset: 0x210
	// Line 136, Address: 0x1ee16dc, Func Offset: 0x22c
	// Line 137, Address: 0x1ee16f8, Func Offset: 0x248
	// Line 139, Address: 0x1ee1700, Func Offset: 0x250
	// Line 140, Address: 0x1ee171c, Func Offset: 0x26c
	// Line 141, Address: 0x1ee1738, Func Offset: 0x288
	// Line 142, Address: 0x1ee1754, Func Offset: 0x2a4
	// Line 143, Address: 0x1ee1770, Func Offset: 0x2c0
	// Line 145, Address: 0x1ee1778, Func Offset: 0x2c8
	// Line 146, Address: 0x1ee1794, Func Offset: 0x2e4
	// Line 147, Address: 0x1ee17b0, Func Offset: 0x300
	// Line 148, Address: 0x1ee17cc, Func Offset: 0x31c
	// Line 151, Address: 0x1ee17e8, Func Offset: 0x338
	// Line 152, Address: 0x1ee1804, Func Offset: 0x354
	// Line 153, Address: 0x1ee1820, Func Offset: 0x370
	// Func End, Address: 0x1ee182c, Func Offset: 0x37c
}

// 
// Start address: 0x1ee1830
void RL00FridgeModelDraw()
{
	// Line 161, Address: 0x1ee1830, Func Offset: 0
	// Line 162, Address: 0x1ee1838, Func Offset: 0x8
	// Line 163, Address: 0x1ee1848, Func Offset: 0x18
	// Line 164, Address: 0x1ee1850, Func Offset: 0x20
	// Line 166, Address: 0x1ee1858, Func Offset: 0x28
	// Line 167, Address: 0x1ee1864, Func Offset: 0x34
	// Line 168, Address: 0x1ee1868, Func Offset: 0x38
	// Func End, Address: 0x1ee1874, Func Offset: 0x44
}

// 
// Start address: 0x1ee1880
void RL00FridgeConstruct(sfObj* obj)
{
	// Line 176, Address: 0x1ee1880, Func Offset: 0
	// Line 177, Address: 0x1ee188c, Func Offset: 0xc
	// Line 176, Address: 0x1ee1890, Func Offset: 0x10
	// Line 177, Address: 0x1ee1898, Func Offset: 0x18
	// Line 179, Address: 0x1ee18b0, Func Offset: 0x30
	// Line 180, Address: 0x1ee18bc, Func Offset: 0x3c
	// Line 181, Address: 0x1ee18c4, Func Offset: 0x44
	// Line 182, Address: 0x1ee18cc, Func Offset: 0x4c
	// Line 185, Address: 0x1ee18d0, Func Offset: 0x50
	// Line 187, Address: 0x1ee18d8, Func Offset: 0x58
	// Line 188, Address: 0x1ee18e0, Func Offset: 0x60
	// Func End, Address: 0x1ee18f0, Func Offset: 0x70
}

// 
// Start address: 0x1ee18f0
void RL00FridgeDestruct()
{
	// Line 197, Address: 0x1ee18f0, Func Offset: 0
	// Func End, Address: 0x1ee18f8, Func Offset: 0x8
}

// 
// Start address: 0x1ee1900
void RL00FridgeExec()
{
	// Line 206, Address: 0x1ee1900, Func Offset: 0
	// Func End, Address: 0x1ee1908, Func Offset: 0x8
}

// 
// Start address: 0x1ee1910
void RL00FridgeDraw()
{
	// Line 215, Address: 0x1ee1910, Func Offset: 0
	// Func End, Address: 0x1ee1918, Func Offset: 0x8
}

// 
// Start address: 0x1ee1920
int ev_frigde_open_trgchk()
{
	_ObjHitData hitdt;
	// Line 222, Address: 0x1ee1920, Func Offset: 0
	// Line 223, Address: 0x1ee192c, Func Offset: 0xc
	// Line 222, Address: 0x1ee1930, Func Offset: 0x10
	// Line 223, Address: 0x1ee1934, Func Offset: 0x14
	// Line 225, Address: 0x1ee1948, Func Offset: 0x28
	// Line 232, Address: 0x1ee1950, Func Offset: 0x30
	// Line 243, Address: 0x1ee1958, Func Offset: 0x38
	// Line 236, Address: 0x1ee195c, Func Offset: 0x3c
	// Line 233, Address: 0x1ee1960, Func Offset: 0x40
	// Line 236, Address: 0x1ee1964, Func Offset: 0x44
	// Line 234, Address: 0x1ee1968, Func Offset: 0x48
	// Line 236, Address: 0x1ee196c, Func Offset: 0x4c
	// Line 237, Address: 0x1ee1970, Func Offset: 0x50
	// Line 235, Address: 0x1ee1974, Func Offset: 0x54
	// Line 237, Address: 0x1ee1978, Func Offset: 0x58
	// Line 238, Address: 0x1ee197c, Func Offset: 0x5c
	// Line 237, Address: 0x1ee1980, Func Offset: 0x60
	// Line 238, Address: 0x1ee1984, Func Offset: 0x64
	// Line 240, Address: 0x1ee1988, Func Offset: 0x68
	// Line 238, Address: 0x1ee198c, Func Offset: 0x6c
	// Line 239, Address: 0x1ee1990, Func Offset: 0x70
	// Line 240, Address: 0x1ee1994, Func Offset: 0x74
	// Line 239, Address: 0x1ee1998, Func Offset: 0x78
	// Line 241, Address: 0x1ee19a0, Func Offset: 0x80
	// Line 243, Address: 0x1ee19a4, Func Offset: 0x84
	// Line 249, Address: 0x1ee19d0, Func Offset: 0xb0
	// Func End, Address: 0x1ee19dc, Func Offset: 0xbc
}

// 
// Start address: 0x1ee19e0
int ev_frigde_open_init(sfObj* obj)
{
	_EventInst* inst;
	// Line 252, Address: 0x1ee19e0, Func Offset: 0
	// Line 253, Address: 0x1ee19e8, Func Offset: 0x8
	// Line 254, Address: 0x1ee19f0, Func Offset: 0x10
	// Line 255, Address: 0x1ee19fc, Func Offset: 0x1c
	// Line 257, Address: 0x1ee1a20, Func Offset: 0x40
	// Line 259, Address: 0x1ee1a2c, Func Offset: 0x4c
	// Func End, Address: 0x1ee1a38, Func Offset: 0x58
}

// 
// Start address: 0x1ee1a40
int ev_frigde_open_exec(sfObj* obj)
{
	int ret;
	// Line 262, Address: 0x1ee1a40, Func Offset: 0
	// Line 265, Address: 0x1ee1a44, Func Offset: 0x4
	// Line 262, Address: 0x1ee1a48, Func Offset: 0x8
	// Line 265, Address: 0x1ee1a58, Func Offset: 0x18
	// Line 268, Address: 0x1ee1a80, Func Offset: 0x40
	// Line 269, Address: 0x1ee1a90, Func Offset: 0x50
	// Line 271, Address: 0x1ee1a98, Func Offset: 0x58
	// Line 274, Address: 0x1ee1aa0, Func Offset: 0x60
	// Line 275, Address: 0x1ee1ab8, Func Offset: 0x78
	// Line 276, Address: 0x1ee1ac0, Func Offset: 0x80
	// Line 288, Address: 0x1ee1ae8, Func Offset: 0xa8
	// Line 289, Address: 0x1ee1af0, Func Offset: 0xb0
	// Line 292, Address: 0x1ee1af8, Func Offset: 0xb8
	// Line 294, Address: 0x1ee1b08, Func Offset: 0xc8
	// Line 293, Address: 0x1ee1b0c, Func Offset: 0xcc
	// Line 294, Address: 0x1ee1b10, Func Offset: 0xd0
	// Line 299, Address: 0x1ee1b18, Func Offset: 0xd8
	// Line 300, Address: 0x1ee1b1c, Func Offset: 0xdc
	// Func End, Address: 0x1ee1b30, Func Offset: 0xf0
}

// 
// Start address: 0x1ee1b30
int ev_frigde_close_trgchk()
{
	// Line 316, Address: 0x1ee1b30, Func Offset: 0
	// Line 317, Address: 0x1ee1b3c, Func Offset: 0xc
	// Line 316, Address: 0x1ee1b40, Func Offset: 0x10
	// Line 317, Address: 0x1ee1b44, Func Offset: 0x14
	// Line 319, Address: 0x1ee1b58, Func Offset: 0x28
	// Line 323, Address: 0x1ee1b60, Func Offset: 0x30
	// Line 324, Address: 0x1ee1b68, Func Offset: 0x38
	// Func End, Address: 0x1ee1b74, Func Offset: 0x44
}

// 
// Start address: 0x1ee1b80
int ev_frigde_close_init(sfObj* obj)
{
	_EventInst* inst;
	// Line 327, Address: 0x1ee1b80, Func Offset: 0
	// Line 328, Address: 0x1ee1b88, Func Offset: 0x8
	// Line 329, Address: 0x1ee1b90, Func Offset: 0x10
	// Line 330, Address: 0x1ee1b9c, Func Offset: 0x1c
	// Line 332, Address: 0x1ee1bc0, Func Offset: 0x40
	// Line 331, Address: 0x1ee1bc4, Func Offset: 0x44
	// Line 332, Address: 0x1ee1bc8, Func Offset: 0x48
	// Func End, Address: 0x1ee1bd0, Func Offset: 0x50
}

// 
// Start address: 0x1ee1bd0
int ev_frigde_close_exec(sfObj* obj)
{
	int ret;
	// Line 335, Address: 0x1ee1bd0, Func Offset: 0
	// Line 338, Address: 0x1ee1bd4, Func Offset: 0x4
	// Line 335, Address: 0x1ee1bd8, Func Offset: 0x8
	// Line 338, Address: 0x1ee1be8, Func Offset: 0x18
	// Line 341, Address: 0x1ee1c10, Func Offset: 0x40
	// Line 342, Address: 0x1ee1c20, Func Offset: 0x50
	// Line 344, Address: 0x1ee1c28, Func Offset: 0x58
	// Line 347, Address: 0x1ee1c30, Func Offset: 0x60
	// Line 348, Address: 0x1ee1c48, Func Offset: 0x78
	// Line 349, Address: 0x1ee1c50, Func Offset: 0x80
	// Line 350, Address: 0x1ee1c78, Func Offset: 0xa8
	// Line 351, Address: 0x1ee1c80, Func Offset: 0xb0
	// Line 354, Address: 0x1ee1c88, Func Offset: 0xb8
	// Line 357, Address: 0x1ee1c98, Func Offset: 0xc8
	// Line 356, Address: 0x1ee1c9c, Func Offset: 0xcc
	// Line 358, Address: 0x1ee1ca0, Func Offset: 0xd0
	// Line 361, Address: 0x1ee1cac, Func Offset: 0xdc
	// Line 363, Address: 0x1ee1cb0, Func Offset: 0xe0
	// Line 364, Address: 0x1ee1cb4, Func Offset: 0xe4
	// Func End, Address: 0x1ee1cc8, Func Offset: 0xf8
}

// 
// Start address: 0x1ee1cd0
void FanConstruct(sfObj* obj)
{
	_FanWork* wk;
	sgAnime* anm;
	// Line 389, Address: 0x1ee1cd0, Func Offset: 0
	// Line 393, Address: 0x1ee1cd4, Func Offset: 0x4
	// Line 389, Address: 0x1ee1cd8, Func Offset: 0x8
	// Line 393, Address: 0x1ee1ce8, Func Offset: 0x18
	// Line 396, Address: 0x1ee1cf4, Func Offset: 0x24
	// Line 399, Address: 0x1ee1d38, Func Offset: 0x68
	// Line 400, Address: 0x1ee1d64, Func Offset: 0x94
	// Line 401, Address: 0x1ee1d6c, Func Offset: 0x9c
	// Line 402, Address: 0x1ee1d70, Func Offset: 0xa0
	// Line 403, Address: 0x1ee1d9c, Func Offset: 0xcc
	// Line 405, Address: 0x1ee1da4, Func Offset: 0xd4
	// Line 406, Address: 0x1ee1da8, Func Offset: 0xd8
	// Line 407, Address: 0x1ee1dd4, Func Offset: 0x104
	// Line 408, Address: 0x1ee1ddc, Func Offset: 0x10c
	// Line 410, Address: 0x1ee1de0, Func Offset: 0x110
	// Line 411, Address: 0x1ee1de8, Func Offset: 0x118
	// Line 416, Address: 0x1ee1df0, Func Offset: 0x120
	// Line 417, Address: 0x1ee1dfc, Func Offset: 0x12c
	// Line 418, Address: 0x1ee1e14, Func Offset: 0x144
	// Line 419, Address: 0x1ee1e20, Func Offset: 0x150
	// Func End, Address: 0x1ee1e38, Func Offset: 0x168
}

// 
// Start address: 0x1ee1e40
void FanDestruct(sfObj* obj)
{
	// Line 428, Address: 0x1ee1e40, Func Offset: 0
	// Func End, Address: 0x1ee1e48, Func Offset: 0x8
}

// 
// Start address: 0x1ee1e50
void FanExec(sfObj* obj)
{
	sgAnime* anm;
	// Line 435, Address: 0x1ee1e50, Func Offset: 0
	// Line 439, Address: 0x1ee1e58, Func Offset: 0x8
	// Line 440, Address: 0x1ee1e60, Func Offset: 0x10
	// Line 441, Address: 0x1ee1e68, Func Offset: 0x18
	// Func End, Address: 0x1ee1e74, Func Offset: 0x24
}

// 
// Start address: 0x1ee1e80
void FanDraw()
{
	// Line 448, Address: 0x1ee1e80, Func Offset: 0
	// Func End, Address: 0x1ee1e88, Func Offset: 0x8
}

// 
// Start address: 0x1ee1e90
void FanRL01Construct(sfObj* obj)
{
	_FanWork* wk;
	sgAnime* anm;
	// Line 454, Address: 0x1ee1e90, Func Offset: 0
	// Line 458, Address: 0x1ee1e94, Func Offset: 0x4
	// Line 454, Address: 0x1ee1e98, Func Offset: 0x8
	// Line 458, Address: 0x1ee1ea8, Func Offset: 0x18
	// Line 461, Address: 0x1ee1eb4, Func Offset: 0x24
	// Line 463, Address: 0x1ee1ef0, Func Offset: 0x60
	// Line 464, Address: 0x1ee1f1c, Func Offset: 0x8c
	// Line 465, Address: 0x1ee1f24, Func Offset: 0x94
	// Line 466, Address: 0x1ee1f28, Func Offset: 0x98
	// Line 467, Address: 0x1ee1f54, Func Offset: 0xc4
	// Line 469, Address: 0x1ee1f5c, Func Offset: 0xcc
	// Line 470, Address: 0x1ee1f60, Func Offset: 0xd0
	// Line 471, Address: 0x1ee1f8c, Func Offset: 0xfc
	// Line 472, Address: 0x1ee1f94, Func Offset: 0x104
	// Line 474, Address: 0x1ee1f98, Func Offset: 0x108
	// Line 475, Address: 0x1ee1fa0, Func Offset: 0x110
	// Line 480, Address: 0x1ee1fa8, Func Offset: 0x118
	// Line 481, Address: 0x1ee1fb4, Func Offset: 0x124
	// Line 482, Address: 0x1ee1fcc, Func Offset: 0x13c
	// Line 483, Address: 0x1ee1fd8, Func Offset: 0x148
	// Func End, Address: 0x1ee1ff0, Func Offset: 0x160
}

