typedef struct sfObj;
typedef struct sgIKHandle;
typedef struct sgBone;
typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct sgAnime;
typedef enum sgLightType : unsigned char;
typedef struct _anon4;
typedef struct sfCharacter;
typedef struct _EventInst;
typedef struct EventFlag;
typedef struct _EventDriver;
typedef enum sgIKSolveResult : unsigned char;
typedef struct sgSVModel;

typedef int(*type_1)(sfObj*);
typedef int(*type_4)(sfObj*);
typedef int(*type_5)(sfObj*);
typedef sgIKSolveResult(*type_6)();
typedef void(*type_10)(sfObj*);
typedef void(*type_13)(_anon1*, int, int, float*);
typedef void(*type_14)(sfObj*);
typedef void(*type_17)(sgAnime*, int);
typedef int(*type_33)(sfObj*);
typedef int(*type_34)(sfObj*);
typedef int(*type_35)(sfObj*);
typedef int(*type_36)(sfObj*);

typedef float type_0[4];
typedef float type_2[4][4];
typedef float type_3[4][2];
typedef unsigned int type_7[1];
typedef _anon2 type_8[4];
typedef _anon2 type_9[256];
typedef unsigned int type_11[1];
typedef unsigned int type_12[1];
typedef void* type_15[4];
typedef sfCharacter type_16[3];
typedef float type_18[4];
typedef unsigned int type_19[3];
typedef unsigned char type_20[4];
typedef unsigned int type_21[2];
typedef short type_22[2];
typedef unsigned short type_23[2];
typedef char type_24[4];
typedef unsigned char type_25[4];
typedef float type_26[1];
typedef unsigned int type_27[4];
typedef int type_28[1];
typedef unsigned char type_29[320];
typedef unsigned int type_30[5];
typedef float type_31[4];
typedef unsigned int type_32[4];
typedef unsigned int type_37[3];

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

struct _anon0
{
	int demo_id;
	int speeching;
	int half_demo_start;
	int next_speech;
	int pause_enable;
	sfCharacter chara[3];
};

struct _anon1
{
	unsigned long tex0;
	unsigned long clamp;
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
	void* model;
	void* texture;
	void* texture_global;
	float matrices[4][4];
	float* weights;
	float tex_crops[4];
	void(*texture_load_func)(_anon1*, int, int, float*);
	int equip_flag;
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

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon3 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
};

struct _EventInst
{
	_EventDriver evdrv;
	unsigned int attr;
	int(*drawaf)(sfObj*);
	int(*endexitf)(sfObj*);
};

struct EventFlag
{
	unsigned char flag[320];
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
	_anon2 val[4];
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

unsigned int ev_forest0_fr01_090_file[3];
_EventDriver ev_forest0_fr01_090;
unsigned short jasper_choco_flag;
unsigned short jasper_event_flag;
_EventDriver ev_forest0_fr06_jasper;
unsigned int ev_forest0_fr06_020_file[1];
EventFlag event_flag;
_EventDriver ev_forest0_fr06_020;
_EventDriver ev_forest0_fr06_022;
unsigned int ev_forest0_fr19_023_file[3];
_EventDriver ev_forest0_fr19_023;
int cant_hear_speech;
_EventDriver ev_forest0_fr09_024;
_EventDriver ev_forest0_fr09_jasper;
unsigned int ev_forest0_fr09_025_file[1];
_EventDriver ev_forest0_fr09_025;
_EventDriver ev_forest0_fr09_025_action;
unsigned int ev_forest0_fr09_026_file[1];
_EventDriver ev_forest0_fr09_026;
_EventDriver ev_forest0_fr09_jasper2a;
_EventDriver ev_forest0_fr09_jasper2b;
unsigned int ev_forest0_fr21_028_file[5];
_EventDriver ev_forest0_fr21_028;
unsigned int ev_forest0_fr17_095_file[2];
_EventDriver ev_forest0_fr17_095;
_EventDriver ev_forest0_fr17_095_2;
unsigned int ev_forest0_fr23_2269_file[4];
_EventDriver ev_forest0_fr23_2269;
unsigned int ev_forest0_fr16_047_file[4];
_EventDriver ev_forest0_fr16_047;
_EventDriver ev_forest0_fr06_2702;

int ev_forest0_fr01_090_end(sfObj* obj);
void ev_forest0_fr06_jasper_update();
int ev_forest0_fr06_jasper_init(sfObj* obj);
int ev_forest0_fr06_020_trg_chk(sfObj* obj);
int ev_forest0_fr06_020_init(sfObj* obj);
int ev_forest0_fr06_020_exec(sfObj* obj);
int ev_forest0_fr06_020_draw(sfObj* obj);
int ev_forest0_fr06_020_end(sfObj* obj);
int ev_forest0_fr06_022_trg_chk();
int ev_forest0_fr06_022_exec(sfObj* obj);
int ev_forest0_fr19_023_init(sfObj* obj);
int ev_forest0_fr19_023_end(sfObj* obj);
int ev_forest0_fr09_024_trg_chk();
int ev_forest0_fr09_024_init(sfObj* obj);
int ev_forest0_fr09_024_exec(sfObj* obj);
int ev_forest0_fr09_jasper_trgchk();
int ev_forest0_fr09_jasper_init(sfObj* obj);
int ev_forest0_fr09_025_trg_chk();
int ev_forest0_fr09_025_exec(sfObj* obj);
int ev_forest0_fr09_025_draw(sfObj* obj);
int ev_forest0_fr09_025_end(sfObj* obj);
int ev_forest0_fr09_025_action_exec();
int ev_forest0_fr09_026_trg_chk();
int ev_forest0_fr09_026_exec(sfObj* obj);
int ev_forest0_fr06_026_draw(sfObj* obj);
int ev_forest0_fr09_jasper2_trgchk();
int ev_forest0_fr09_jasper2a_init(sfObj* obj);
int ev_forest0_fr09_jasper2b_init(sfObj* obj);
int ev_forest0_fr21_028_end();
int ev_forest0_fr17_095_exec(sfObj* obj);
int ev_forest0_fr23_2269_end(sfObj* obj);
int ev_forest0_fr16_047_end(sfObj* obj);
int ev_forest0_fr16_exec(sfObj* obj);

// 
// Start address: 0x1ed6c00
int ev_forest0_fr01_090_end(sfObj* obj)
{
	// Line 81, Address: 0x1ed6c00, Func Offset: 0
	// Line 86, Address: 0x1ed6c0c, Func Offset: 0xc
	// Line 88, Address: 0x1ed6c14, Func Offset: 0x14
	// Line 90, Address: 0x1ed6c1c, Func Offset: 0x1c
	// Line 98, Address: 0x1ed6c24, Func Offset: 0x24
	// Line 100, Address: 0x1ed6c2c, Func Offset: 0x2c
	// Line 101, Address: 0x1ed6c34, Func Offset: 0x34
	// Func End, Address: 0x1ed6c44, Func Offset: 0x44
}

// 
// Start address: 0x1ed6c50
void ev_forest0_fr06_jasper_update()
{
	// Line 143, Address: 0x1ed6c50, Func Offset: 0
	// Line 144, Address: 0x1ed6c64, Func Offset: 0x14
	// Line 145, Address: 0x1ed6c68, Func Offset: 0x18
	// Line 146, Address: 0x1ed6c78, Func Offset: 0x28
	// Line 147, Address: 0x1ed6c80, Func Offset: 0x30
	// Line 149, Address: 0x1ed6c88, Func Offset: 0x38
	// Func End, Address: 0x1ed6c90, Func Offset: 0x40
}

// 
// Start address: 0x1ed6c90
int ev_forest0_fr06_jasper_init(sfObj* obj)
{
	// Line 152, Address: 0x1ed6c90, Func Offset: 0
	// Line 154, Address: 0x1ed6c98, Func Offset: 0x8
	// Line 156, Address: 0x1ed6ca0, Func Offset: 0x10
	// Line 157, Address: 0x1ed6cb4, Func Offset: 0x24
	// Line 158, Address: 0x1ed6cc8, Func Offset: 0x38
	// Line 161, Address: 0x1ed6cd0, Func Offset: 0x40
	// Line 162, Address: 0x1ed6ce4, Func Offset: 0x54
	// Line 163, Address: 0x1ed6cf4, Func Offset: 0x64
	// Line 165, Address: 0x1ed6cf8, Func Offset: 0x68
	// Line 164, Address: 0x1ed6cfc, Func Offset: 0x6c
	// Line 165, Address: 0x1ed6d00, Func Offset: 0x70
	// Func End, Address: 0x1ed6d08, Func Offset: 0x78
}

// 
// Start address: 0x1ed6d10
int ev_forest0_fr06_020_trg_chk(sfObj* obj)
{
	// Line 185, Address: 0x1ed6d10, Func Offset: 0
	// Line 194, Address: 0x1ed6d20, Func Offset: 0x10
	// Line 196, Address: 0x1ed6d34, Func Offset: 0x24
	// Line 197, Address: 0x1ed6d44, Func Offset: 0x34
	// Line 198, Address: 0x1ed6d48, Func Offset: 0x38
	// Line 201, Address: 0x1ed6d50, Func Offset: 0x40
	// Func End, Address: 0x1ed6d5c, Func Offset: 0x4c
}

// 
// Start address: 0x1ed6d60
int ev_forest0_fr06_020_init(sfObj* obj)
{
	// Line 353, Address: 0x1ed6d60, Func Offset: 0
	// Line 356, Address: 0x1ed6d68, Func Offset: 0x8
	// Line 359, Address: 0x1ed6d84, Func Offset: 0x24
	// Line 356, Address: 0x1ed6d88, Func Offset: 0x28
	// Line 359, Address: 0x1ed6d8c, Func Offset: 0x2c
	// Func End, Address: 0x1ed6d94, Func Offset: 0x34
	// Line 204, Address: 0x1ed6d60, Func Offset: 0
	// Line 205, Address: 0x1ed6d64, Func Offset: 0x4
	// Line 204, Address: 0x1ed6d68, Func Offset: 0x8
	// Line 205, Address: 0x1ed6d70, Func Offset: 0x10
	// Line 208, Address: 0x1ed6d7c, Func Offset: 0x1c
	// Line 209, Address: 0x1ed6d84, Func Offset: 0x24
	// Line 212, Address: 0x1ed6d8c, Func Offset: 0x2c
	// Line 211, Address: 0x1ed6d90, Func Offset: 0x30
	// Line 212, Address: 0x1ed6d94, Func Offset: 0x34
	// Func End, Address: 0x1ed6da0, Func Offset: 0x40
}

// 
// Start address: 0x1ed6da0
int ev_forest0_fr06_020_exec(sfObj* obj)
{
	_anon0* wk;
	float hitpos[4];
	// Line 57, Address: 0x1ed6da0, Func Offset: 0
	// Line 58, Address: 0x1ed6da4, Func Offset: 0x4
	// Line 57, Address: 0x1ed6da8, Func Offset: 0x8
	// Line 58, Address: 0x1ed6dac, Func Offset: 0xc
	// Line 60, Address: 0x1ed6dbc, Func Offset: 0x1c
	// Line 61, Address: 0x1ed6dc4, Func Offset: 0x24
	// Line 64, Address: 0x1ed6dd0, Func Offset: 0x30
	// Line 65, Address: 0x1ed6ddc, Func Offset: 0x3c
	// Line 67, Address: 0x1ed6de0, Func Offset: 0x40
	// Line 66, Address: 0x1ed6de4, Func Offset: 0x44
	// Line 67, Address: 0x1ed6de8, Func Offset: 0x48
	// Func End, Address: 0x1ed6df0, Func Offset: 0x50
	// Line 215, Address: 0x1ed6da0, Func Offset: 0
	// Line 218, Address: 0x1ed6da4, Func Offset: 0x4
	// Line 215, Address: 0x1ed6da8, Func Offset: 0x8
	// Line 218, Address: 0x1ed6dac, Func Offset: 0xc
	// Line 215, Address: 0x1ed6db0, Func Offset: 0x10
	// Line 217, Address: 0x1ed6dc0, Func Offset: 0x20
	// Line 218, Address: 0x1ed6dc4, Func Offset: 0x24
	// Line 221, Address: 0x1ed6dcc, Func Offset: 0x2c
	// Line 223, Address: 0x1ed6dd4, Func Offset: 0x34
	// Line 224, Address: 0x1ed6df4, Func Offset: 0x54
	// Line 225, Address: 0x1ed6df8, Func Offset: 0x58
	// Line 226, Address: 0x1ed6e00, Func Offset: 0x60
	// Line 227, Address: 0x1ed6e08, Func Offset: 0x68
	// Line 228, Address: 0x1ed6e10, Func Offset: 0x70
	// Line 229, Address: 0x1ed6e1c, Func Offset: 0x7c
	// Line 231, Address: 0x1ed6e30, Func Offset: 0x90
	// Line 234, Address: 0x1ed6e5c, Func Offset: 0xbc
	// Line 236, Address: 0x1ed6e74, Func Offset: 0xd4
	// Line 237, Address: 0x1ed6e80, Func Offset: 0xe0
	// Line 238, Address: 0x1ed6e88, Func Offset: 0xe8
	// Line 240, Address: 0x1ed6e98, Func Offset: 0xf8
	// Line 242, Address: 0x1ed6eb0, Func Offset: 0x110
	// Line 244, Address: 0x1ed6ebc, Func Offset: 0x11c
	// Line 246, Address: 0x1ed6ec4, Func Offset: 0x124
	// Line 248, Address: 0x1ed6ec8, Func Offset: 0x128
	// Line 249, Address: 0x1ed6ed8, Func Offset: 0x138
	// Line 250, Address: 0x1ed6ee4, Func Offset: 0x144
	// Line 255, Address: 0x1ed6ef4, Func Offset: 0x154
	// Line 256, Address: 0x1ed6f00, Func Offset: 0x160
	// Line 257, Address: 0x1ed6f08, Func Offset: 0x168
	// Line 259, Address: 0x1ed6f14, Func Offset: 0x174
	// Line 260, Address: 0x1ed6f24, Func Offset: 0x184
	// Line 262, Address: 0x1ed6f3c, Func Offset: 0x19c
	// Line 263, Address: 0x1ed6f5c, Func Offset: 0x1bc
	// Line 262, Address: 0x1ed6f60, Func Offset: 0x1c0
	// Line 263, Address: 0x1ed6f64, Func Offset: 0x1c4
	// Line 265, Address: 0x1ed6f68, Func Offset: 0x1c8
	// Line 266, Address: 0x1ed6f70, Func Offset: 0x1d0
	// Line 267, Address: 0x1ed6f78, Func Offset: 0x1d8
	// Line 268, Address: 0x1ed6f84, Func Offset: 0x1e4
	// Line 270, Address: 0x1ed6f88, Func Offset: 0x1e8
	// Line 272, Address: 0x1ed6f90, Func Offset: 0x1f0
	// Line 273, Address: 0x1ed6f98, Func Offset: 0x1f8
	// Line 274, Address: 0x1ed6fa0, Func Offset: 0x200
	// Line 275, Address: 0x1ed6fac, Func Offset: 0x20c
	// Line 278, Address: 0x1ed6fb0, Func Offset: 0x210
	// Line 281, Address: 0x1ed6fcc, Func Offset: 0x22c
	// Line 282, Address: 0x1ed6fd4, Func Offset: 0x234
	// Line 283, Address: 0x1ed6ffc, Func Offset: 0x25c
	// Line 284, Address: 0x1ed7000, Func Offset: 0x260
	// Line 285, Address: 0x1ed700c, Func Offset: 0x26c
	// Line 290, Address: 0x1ed7014, Func Offset: 0x274
	// Line 292, Address: 0x1ed7018, Func Offset: 0x278
	// Line 293, Address: 0x1ed7024, Func Offset: 0x284
	// Line 295, Address: 0x1ed7038, Func Offset: 0x298
	// Line 298, Address: 0x1ed7040, Func Offset: 0x2a0
	// Line 297, Address: 0x1ed7044, Func Offset: 0x2a4
	// Line 298, Address: 0x1ed7048, Func Offset: 0x2a8
	// Func End, Address: 0x1ed705c, Func Offset: 0x2bc
}

// 
// Start address: 0x1ed7060
int ev_forest0_fr06_020_draw(sfObj* obj)
{
	_anon0* wk;
	// Line 2490, Address: 0x1ed7060, Func Offset: 0
	// Line 2496, Address: 0x1ed7064, Func Offset: 0x4
	// Line 2490, Address: 0x1ed7068, Func Offset: 0x8
	// Line 2496, Address: 0x1ed706c, Func Offset: 0xc
	// Line 2490, Address: 0x1ed7070, Func Offset: 0x10
	// Line 2491, Address: 0x1ed707c, Func Offset: 0x1c
	// Line 2496, Address: 0x1ed7080, Func Offset: 0x20
	// Line 2491, Address: 0x1ed7084, Func Offset: 0x24
	// Line 2496, Address: 0x1ed7088, Func Offset: 0x28
	// Line 2497, Address: 0x1ed70ac, Func Offset: 0x4c
	// Line 2498, Address: 0x1ed70b0, Func Offset: 0x50
	// Line 2499, Address: 0x1ed70b4, Func Offset: 0x54
	// Line 2500, Address: 0x1ed70bc, Func Offset: 0x5c
	// Line 2501, Address: 0x1ed70c4, Func Offset: 0x64
	// Line 2502, Address: 0x1ed70c8, Func Offset: 0x68
	// Line 2504, Address: 0x1ed70ec, Func Offset: 0x8c
	// Line 2507, Address: 0x1ed70f8, Func Offset: 0x98
	// Line 2508, Address: 0x1ed7104, Func Offset: 0xa4
	// Line 2510, Address: 0x1ed710c, Func Offset: 0xac
	// Line 2511, Address: 0x1ed7114, Func Offset: 0xb4
	// Line 2513, Address: 0x1ed7118, Func Offset: 0xb8
	// Line 2514, Address: 0x1ed7130, Func Offset: 0xd0
	// Line 2515, Address: 0x1ed7138, Func Offset: 0xd8
	// Line 2518, Address: 0x1ed713c, Func Offset: 0xdc
	// Line 2520, Address: 0x1ed7140, Func Offset: 0xe0
	// Line 2521, Address: 0x1ed7144, Func Offset: 0xe4
	// Func End, Address: 0x1ed715c, Func Offset: 0xfc
	// Line 303, Address: 0x1ed7060, Func Offset: 0
	// Line 304, Address: 0x1ed706c, Func Offset: 0xc
	// Line 306, Address: 0x1ed7070, Func Offset: 0x10
	// Line 307, Address: 0x1ed707c, Func Offset: 0x1c
	// Line 308, Address: 0x1ed7084, Func Offset: 0x24
	// Line 309, Address: 0x1ed7094, Func Offset: 0x34
	// Line 310, Address: 0x1ed70a4, Func Offset: 0x44
	// Line 311, Address: 0x1ed70ac, Func Offset: 0x4c
	// Line 312, Address: 0x1ed70b4, Func Offset: 0x54
	// Line 319, Address: 0x1ed70c8, Func Offset: 0x68
	// Line 318, Address: 0x1ed70d0, Func Offset: 0x70
	// Line 319, Address: 0x1ed70d4, Func Offset: 0x74
	// Func End, Address: 0x1ed70dc, Func Offset: 0x7c
}

// 
// Start address: 0x1ed70e0
int ev_forest0_fr06_020_end(sfObj* obj)
{
	_anon0* wk;
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
// Start address: 0x1ed7130
int ev_forest0_fr06_022_trg_chk()
{
	// Line 350, Address: 0x1ed7130, Func Offset: 0
	// Line 359, Address: 0x1ed7138, Func Offset: 0x8
	// Line 361, Address: 0x1ed714c, Func Offset: 0x1c
	// Line 362, Address: 0x1ed7154, Func Offset: 0x24
	// Line 363, Address: 0x1ed7158, Func Offset: 0x28
	// Line 366, Address: 0x1ed7160, Func Offset: 0x30
	// Func End, Address: 0x1ed7168, Func Offset: 0x38
	// Line 1699, Address: 0x1ed7130, Func Offset: 0
	// Line 1700, Address: 0x1ed7138, Func Offset: 0x8
	// Line 1701, Address: 0x1ed7140, Func Offset: 0x10
	// Line 1704, Address: 0x1ed7144, Func Offset: 0x14
	// Line 1705, Address: 0x1ed715c, Func Offset: 0x2c
	// Line 1709, Address: 0x1ed7170, Func Offset: 0x40
	// Line 1711, Address: 0x1ed7178, Func Offset: 0x48
	// Line 1712, Address: 0x1ed7180, Func Offset: 0x50
	// Line 1715, Address: 0x1ed7188, Func Offset: 0x58
	// Func End, Address: 0x1ed7198, Func Offset: 0x68
}

// 
// Start address: 0x1ed7170
int ev_forest0_fr06_022_exec(sfObj* obj)
{
	_anon0* wk;
	float hitpos[4];
	// Line 369, Address: 0x1ed7170, Func Offset: 0
	// Line 372, Address: 0x1ed7174, Func Offset: 0x4
	// Line 369, Address: 0x1ed7178, Func Offset: 0x8
	// Line 372, Address: 0x1ed717c, Func Offset: 0xc
	// Line 369, Address: 0x1ed7180, Func Offset: 0x10
	// Line 371, Address: 0x1ed7190, Func Offset: 0x20
	// Line 372, Address: 0x1ed7194, Func Offset: 0x24
	// Line 375, Address: 0x1ed719c, Func Offset: 0x2c
	// Line 377, Address: 0x1ed71a4, Func Offset: 0x34
	// Line 378, Address: 0x1ed71c4, Func Offset: 0x54
	// Line 379, Address: 0x1ed71c8, Func Offset: 0x58
	// Line 380, Address: 0x1ed71d0, Func Offset: 0x60
	// Line 381, Address: 0x1ed71d8, Func Offset: 0x68
	// Line 382, Address: 0x1ed71e4, Func Offset: 0x74
	// Line 384, Address: 0x1ed71f8, Func Offset: 0x88
	// Line 387, Address: 0x1ed7224, Func Offset: 0xb4
	// Line 389, Address: 0x1ed723c, Func Offset: 0xcc
	// Line 390, Address: 0x1ed7248, Func Offset: 0xd8
	// Line 391, Address: 0x1ed7250, Func Offset: 0xe0
	// Line 393, Address: 0x1ed7260, Func Offset: 0xf0
	// Line 395, Address: 0x1ed7278, Func Offset: 0x108
	// Line 399, Address: 0x1ed728c, Func Offset: 0x11c
	// Line 400, Address: 0x1ed7294, Func Offset: 0x124
	// Line 401, Address: 0x1ed729c, Func Offset: 0x12c
	// Line 402, Address: 0x1ed72a4, Func Offset: 0x134
	// Line 404, Address: 0x1ed72b0, Func Offset: 0x140
	// Line 405, Address: 0x1ed72c0, Func Offset: 0x150
	// Line 408, Address: 0x1ed72d4, Func Offset: 0x164
	// Line 409, Address: 0x1ed72dc, Func Offset: 0x16c
	// Line 410, Address: 0x1ed72e4, Func Offset: 0x174
	// Line 411, Address: 0x1ed72ec, Func Offset: 0x17c
	// Line 415, Address: 0x1ed72f8, Func Offset: 0x188
	// Line 417, Address: 0x1ed7308, Func Offset: 0x198
	// Line 418, Address: 0x1ed7310, Func Offset: 0x1a0
	// Line 419, Address: 0x1ed7318, Func Offset: 0x1a8
	// Line 420, Address: 0x1ed7324, Func Offset: 0x1b4
	// Line 422, Address: 0x1ed7328, Func Offset: 0x1b8
	// Line 425, Address: 0x1ed7344, Func Offset: 0x1d4
	// Line 426, Address: 0x1ed734c, Func Offset: 0x1dc
	// Line 427, Address: 0x1ed7374, Func Offset: 0x204
	// Line 428, Address: 0x1ed7378, Func Offset: 0x208
	// Line 429, Address: 0x1ed7384, Func Offset: 0x214
	// Line 434, Address: 0x1ed738c, Func Offset: 0x21c
	// Line 436, Address: 0x1ed7390, Func Offset: 0x220
	// Line 437, Address: 0x1ed739c, Func Offset: 0x22c
	// Line 439, Address: 0x1ed73b0, Func Offset: 0x240
	// Line 442, Address: 0x1ed73b8, Func Offset: 0x248
	// Line 441, Address: 0x1ed73bc, Func Offset: 0x24c
	// Line 442, Address: 0x1ed73c0, Func Offset: 0x250
	// Func End, Address: 0x1ed73d4, Func Offset: 0x264
}

// 
// Start address: 0x1ed73e0
int ev_forest0_fr19_023_init(sfObj* obj)
{
	// Line 468, Address: 0x1ed73e0, Func Offset: 0
	// Line 469, Address: 0x1ed73f0, Func Offset: 0x10
	// Line 470, Address: 0x1ed73f8, Func Offset: 0x18
	// Line 473, Address: 0x1ed7400, Func Offset: 0x20
	// Line 474, Address: 0x1ed7408, Func Offset: 0x28
	// Func End, Address: 0x1ed7418, Func Offset: 0x38
	// Line 1096, Address: 0x1ed73e0, Func Offset: 0
	// Line 1102, Address: 0x1ed73fc, Func Offset: 0x1c
	// Line 1103, Address: 0x1ed7408, Func Offset: 0x28
	// Line 1104, Address: 0x1ed7414, Func Offset: 0x34
	// Line 1105, Address: 0x1ed7420, Func Offset: 0x40
	// Line 1106, Address: 0x1ed7428, Func Offset: 0x48
	// Line 1107, Address: 0x1ed7434, Func Offset: 0x54
	// Line 1109, Address: 0x1ed7458, Func Offset: 0x78
	// Line 1110, Address: 0x1ed7464, Func Offset: 0x84
	// Line 1111, Address: 0x1ed746c, Func Offset: 0x8c
	// Line 1112, Address: 0x1ed7474, Func Offset: 0x94
	// Line 1113, Address: 0x1ed7480, Func Offset: 0xa0
	// Line 1114, Address: 0x1ed7488, Func Offset: 0xa8
	// Line 1117, Address: 0x1ed7490, Func Offset: 0xb0
	// Line 1118, Address: 0x1ed7498, Func Offset: 0xb8
	// Line 1119, Address: 0x1ed74a4, Func Offset: 0xc4
	// Line 1120, Address: 0x1ed74a8, Func Offset: 0xc8
	// Line 1119, Address: 0x1ed74ac, Func Offset: 0xcc
	// Line 1120, Address: 0x1ed74b4, Func Offset: 0xd4
	// Line 1121, Address: 0x1ed74c4, Func Offset: 0xe4
	// Line 1122, Address: 0x1ed74d4, Func Offset: 0xf4
	// Line 1123, Address: 0x1ed74d8, Func Offset: 0xf8
	// Line 1124, Address: 0x1ed74ec, Func Offset: 0x10c
	// Line 1125, Address: 0x1ed74f8, Func Offset: 0x118
	// Line 1126, Address: 0x1ed751c, Func Offset: 0x13c
	// Line 1127, Address: 0x1ed7524, Func Offset: 0x144
	// Line 1128, Address: 0x1ed753c, Func Offset: 0x15c
	// Line 1129, Address: 0x1ed7544, Func Offset: 0x164
	// Line 1130, Address: 0x1ed7564, Func Offset: 0x184
	// Line 1134, Address: 0x1ed756c, Func Offset: 0x18c
	// Line 1135, Address: 0x1ed7570, Func Offset: 0x190
	// Func End, Address: 0x1ed7590, Func Offset: 0x1b0
}

// 
// Start address: 0x1ed7420
int ev_forest0_fr19_023_end(sfObj* obj)
{
	float pos[4];
	// Line 477, Address: 0x1ed7420, Func Offset: 0
	// Line 478, Address: 0x1ed7424, Func Offset: 0x4
	// Line 477, Address: 0x1ed7428, Func Offset: 0x8
	// Line 478, Address: 0x1ed742c, Func Offset: 0xc
	// Line 477, Address: 0x1ed7430, Func Offset: 0x10
	// Line 480, Address: 0x1ed7434, Func Offset: 0x14
	// Line 478, Address: 0x1ed7438, Func Offset: 0x18
	// Line 480, Address: 0x1ed7444, Func Offset: 0x24
	// Line 481, Address: 0x1ed744c, Func Offset: 0x2c
	// Line 483, Address: 0x1ed7460, Func Offset: 0x40
	// Line 484, Address: 0x1ed7468, Func Offset: 0x48
	// Func End, Address: 0x1ed7478, Func Offset: 0x58
}

// 
// Start address: 0x1ed7480
int ev_forest0_fr09_024_trg_chk()
{
	// Line 517, Address: 0x1ed7480, Func Offset: 0
	// Line 521, Address: 0x1ed7484, Func Offset: 0x4
	// Line 517, Address: 0x1ed7488, Func Offset: 0x8
	// Line 521, Address: 0x1ed748c, Func Offset: 0xc
	// Line 525, Address: 0x1ed74c4, Func Offset: 0x44
	// Line 526, Address: 0x1ed74cc, Func Offset: 0x4c
	// Line 527, Address: 0x1ed74d0, Func Offset: 0x50
	// Line 529, Address: 0x1ed74d8, Func Offset: 0x58
	// Func End, Address: 0x1ed74e4, Func Offset: 0x64
}

// 
// Start address: 0x1ed74f0
int ev_forest0_fr09_024_init(sfObj* obj)
{
	// Line 532, Address: 0x1ed74f0, Func Offset: 0
	// Line 533, Address: 0x1ed74f4, Func Offset: 0x4
	// Line 532, Address: 0x1ed74f8, Func Offset: 0x8
	// Line 533, Address: 0x1ed7500, Func Offset: 0x10
	// Line 536, Address: 0x1ed750c, Func Offset: 0x1c
	// Line 537, Address: 0x1ed7514, Func Offset: 0x24
	// Line 539, Address: 0x1ed751c, Func Offset: 0x2c
	// Line 541, Address: 0x1ed7520, Func Offset: 0x30
	// Line 539, Address: 0x1ed7524, Func Offset: 0x34
	// Line 542, Address: 0x1ed7528, Func Offset: 0x38
	// Func End, Address: 0x1ed7538, Func Offset: 0x48
}

// 
// Start address: 0x1ed7540
int ev_forest0_fr09_024_exec(sfObj* obj)
{
	_anon0* wk;
	float hitpos[4];
	// Line 545, Address: 0x1ed7540, Func Offset: 0
	// Line 548, Address: 0x1ed7544, Func Offset: 0x4
	// Line 545, Address: 0x1ed7548, Func Offset: 0x8
	// Line 548, Address: 0x1ed754c, Func Offset: 0xc
	// Line 545, Address: 0x1ed7550, Func Offset: 0x10
	// Line 548, Address: 0x1ed7554, Func Offset: 0x14
	// Line 545, Address: 0x1ed7558, Func Offset: 0x18
	// Line 548, Address: 0x1ed7564, Func Offset: 0x24
	// Line 547, Address: 0x1ed7568, Func Offset: 0x28
	// Line 551, Address: 0x1ed756c, Func Offset: 0x2c
	// Line 548, Address: 0x1ed7574, Func Offset: 0x34
	// Line 551, Address: 0x1ed7578, Func Offset: 0x38
	// Line 553, Address: 0x1ed7588, Func Offset: 0x48
	// Line 555, Address: 0x1ed75a8, Func Offset: 0x68
	// Line 556, Address: 0x1ed75b0, Func Offset: 0x70
	// Line 557, Address: 0x1ed75b8, Func Offset: 0x78
	// Line 558, Address: 0x1ed75c4, Func Offset: 0x84
	// Line 560, Address: 0x1ed75e0, Func Offset: 0xa0
	// Line 563, Address: 0x1ed760c, Func Offset: 0xcc
	// Line 565, Address: 0x1ed7624, Func Offset: 0xe4
	// Line 566, Address: 0x1ed7630, Func Offset: 0xf0
	// Line 567, Address: 0x1ed7638, Func Offset: 0xf8
	// Line 569, Address: 0x1ed7640, Func Offset: 0x100
	// Line 570, Address: 0x1ed7654, Func Offset: 0x114
	// Line 572, Address: 0x1ed7660, Func Offset: 0x120
	// Line 576, Address: 0x1ed7668, Func Offset: 0x128
	// Line 577, Address: 0x1ed7678, Func Offset: 0x138
	// Line 578, Address: 0x1ed7688, Func Offset: 0x148
	// Line 581, Address: 0x1ed7694, Func Offset: 0x154
	// Line 580, Address: 0x1ed7698, Func Offset: 0x158
	// Line 581, Address: 0x1ed769c, Func Offset: 0x15c
	// Line 582, Address: 0x1ed76a8, Func Offset: 0x168
	// Line 585, Address: 0x1ed76bc, Func Offset: 0x17c
	// Line 584, Address: 0x1ed76c0, Func Offset: 0x180
	// Line 585, Address: 0x1ed76c4, Func Offset: 0x184
	// Line 586, Address: 0x1ed76d0, Func Offset: 0x190
	// Line 588, Address: 0x1ed76d8, Func Offset: 0x198
	// Line 589, Address: 0x1ed76e0, Func Offset: 0x1a0
	// Line 590, Address: 0x1ed76f4, Func Offset: 0x1b4
	// Line 591, Address: 0x1ed76f8, Func Offset: 0x1b8
	// Line 592, Address: 0x1ed76fc, Func Offset: 0x1bc
	// Line 594, Address: 0x1ed7708, Func Offset: 0x1c8
	// Line 595, Address: 0x1ed7710, Func Offset: 0x1d0
	// Line 596, Address: 0x1ed7714, Func Offset: 0x1d4
	// Line 597, Address: 0x1ed7718, Func Offset: 0x1d8
	// Line 598, Address: 0x1ed771c, Func Offset: 0x1dc
	// Line 599, Address: 0x1ed7724, Func Offset: 0x1e4
	// Line 600, Address: 0x1ed772c, Func Offset: 0x1ec
	// Line 601, Address: 0x1ed7734, Func Offset: 0x1f4
	// Line 603, Address: 0x1ed7740, Func Offset: 0x200
	// Line 606, Address: 0x1ed775c, Func Offset: 0x21c
	// Line 607, Address: 0x1ed7764, Func Offset: 0x224
	// Line 608, Address: 0x1ed778c, Func Offset: 0x24c
	// Line 609, Address: 0x1ed7790, Func Offset: 0x250
	// Line 610, Address: 0x1ed779c, Func Offset: 0x25c
	// Line 611, Address: 0x1ed77a4, Func Offset: 0x264
	// Line 613, Address: 0x1ed77a8, Func Offset: 0x268
	// Line 614, Address: 0x1ed77c8, Func Offset: 0x288
	// Line 615, Address: 0x1ed77dc, Func Offset: 0x29c
	// Line 623, Address: 0x1ed77e8, Func Offset: 0x2a8
	// Line 624, Address: 0x1ed77f4, Func Offset: 0x2b4
	// Line 625, Address: 0x1ed7814, Func Offset: 0x2d4
	// Line 626, Address: 0x1ed7820, Func Offset: 0x2e0
	// Line 627, Address: 0x1ed7828, Func Offset: 0x2e8
	// Line 629, Address: 0x1ed7830, Func Offset: 0x2f0
	// Line 631, Address: 0x1ed7838, Func Offset: 0x2f8
	// Line 633, Address: 0x1ed7840, Func Offset: 0x300
	// Line 636, Address: 0x1ed7858, Func Offset: 0x318
	// Line 639, Address: 0x1ed7860, Func Offset: 0x320
	// Line 638, Address: 0x1ed7864, Func Offset: 0x324
	// Line 639, Address: 0x1ed7868, Func Offset: 0x328
	// Func End, Address: 0x1ed787c, Func Offset: 0x33c
}

// 
// Start address: 0x1ed7880
int ev_forest0_fr09_jasper_trgchk()
{
	// Line 654, Address: 0x1ed7880, Func Offset: 0
	// Line 657, Address: 0x1ed7890, Func Offset: 0x10
	// Func End, Address: 0x1ed7898, Func Offset: 0x18
}

// 
// Start address: 0x1ed78a0
int ev_forest0_fr09_jasper_init(sfObj* obj)
{
	// Line 660, Address: 0x1ed78a0, Func Offset: 0
	// Line 662, Address: 0x1ed78a8, Func Offset: 0x8
	// Line 664, Address: 0x1ed78b0, Func Offset: 0x10
	// Line 665, Address: 0x1ed78c4, Func Offset: 0x24
	// Line 666, Address: 0x1ed78d8, Func Offset: 0x38
	// Line 669, Address: 0x1ed78e0, Func Offset: 0x40
	// Line 670, Address: 0x1ed78f4, Func Offset: 0x54
	// Line 671, Address: 0x1ed7904, Func Offset: 0x64
	// Line 674, Address: 0x1ed7908, Func Offset: 0x68
	// Line 673, Address: 0x1ed790c, Func Offset: 0x6c
	// Line 674, Address: 0x1ed7910, Func Offset: 0x70
	// Func End, Address: 0x1ed7918, Func Offset: 0x78
}

// 
// Start address: 0x1ed7920
int ev_forest0_fr09_025_trg_chk()
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
// Start address: 0x1ed79a0
int ev_forest0_fr09_025_exec(sfObj* obj)
{
	_anon0* wk;
	_EventInst* evinst;
	float hitpos[4];
	float pos[4];
	// Line 945, Address: 0x1ed79a0, Func Offset: 0
	// Line 947, Address: 0x1ed79b4, Func Offset: 0x14
	// Line 948, Address: 0x1ed79b8, Func Offset: 0x18
	// Line 949, Address: 0x1ed79c4, Func Offset: 0x24
	// Line 952, Address: 0x1ed79cc, Func Offset: 0x2c
	// Line 949, Address: 0x1ed79d0, Func Offset: 0x30
	// Line 952, Address: 0x1ed79d8, Func Offset: 0x38
	// Line 949, Address: 0x1ed79dc, Func Offset: 0x3c
	// Line 952, Address: 0x1ed79e0, Func Offset: 0x40
	// Line 954, Address: 0x1ed79f0, Func Offset: 0x50
	// Line 956, Address: 0x1ed7a18, Func Offset: 0x78
	// Line 957, Address: 0x1ed7a2c, Func Offset: 0x8c
	// Line 958, Address: 0x1ed7a34, Func Offset: 0x94
	// Line 959, Address: 0x1ed7a40, Func Offset: 0xa0
	// Line 960, Address: 0x1ed7a4c, Func Offset: 0xac
	// Line 961, Address: 0x1ed7a58, Func Offset: 0xb8
	// Line 962, Address: 0x1ed7a60, Func Offset: 0xc0
	// Line 963, Address: 0x1ed7a6c, Func Offset: 0xcc
	// Line 964, Address: 0x1ed7a70, Func Offset: 0xd0
	// Line 965, Address: 0x1ed7a78, Func Offset: 0xd8
	// Line 966, Address: 0x1ed7a90, Func Offset: 0xf0
	// Line 969, Address: 0x1ed7abc, Func Offset: 0x11c
	// Line 971, Address: 0x1ed7ad4, Func Offset: 0x134
	// Line 972, Address: 0x1ed7ae0, Func Offset: 0x140
	// Line 977, Address: 0x1ed7b0c, Func Offset: 0x16c
	// Line 978, Address: 0x1ed7b14, Func Offset: 0x174
	// Line 979, Address: 0x1ed7b1c, Func Offset: 0x17c
	// Line 978, Address: 0x1ed7b20, Func Offset: 0x180
	// Line 980, Address: 0x1ed7b28, Func Offset: 0x188
	// Line 981, Address: 0x1ed7b34, Func Offset: 0x194
	// Line 982, Address: 0x1ed7b3c, Func Offset: 0x19c
	// Line 983, Address: 0x1ed7b44, Func Offset: 0x1a4
	// Line 984, Address: 0x1ed7b4c, Func Offset: 0x1ac
	// Line 985, Address: 0x1ed7b5c, Func Offset: 0x1bc
	// Line 987, Address: 0x1ed7b78, Func Offset: 0x1d8
	// Line 991, Address: 0x1ed7b80, Func Offset: 0x1e0
	// Line 994, Address: 0x1ed7bb4, Func Offset: 0x214
	// Line 995, Address: 0x1ed7bbc, Func Offset: 0x21c
	// Line 998, Address: 0x1ed7bc0, Func Offset: 0x220
	// Line 999, Address: 0x1ed7bd0, Func Offset: 0x230
	// Line 1000, Address: 0x1ed7bdc, Func Offset: 0x23c
	// Line 1001, Address: 0x1ed7bec, Func Offset: 0x24c
	// Line 1002, Address: 0x1ed7bf0, Func Offset: 0x250
	// Line 1003, Address: 0x1ed7bfc, Func Offset: 0x25c
	// Line 1005, Address: 0x1ed7c08, Func Offset: 0x268
	// Line 1007, Address: 0x1ed7c10, Func Offset: 0x270
	// Line 1008, Address: 0x1ed7c1c, Func Offset: 0x27c
	// Line 1009, Address: 0x1ed7c20, Func Offset: 0x280
	// Line 1010, Address: 0x1ed7c28, Func Offset: 0x288
	// Line 1011, Address: 0x1ed7c3c, Func Offset: 0x29c
	// Line 1012, Address: 0x1ed7c44, Func Offset: 0x2a4
	// Line 1013, Address: 0x1ed7c50, Func Offset: 0x2b0
	// Line 1014, Address: 0x1ed7c5c, Func Offset: 0x2bc
	// Line 1015, Address: 0x1ed7c68, Func Offset: 0x2c8
	// Line 1016, Address: 0x1ed7c70, Func Offset: 0x2d0
	// Line 1017, Address: 0x1ed7c7c, Func Offset: 0x2dc
	// Line 1018, Address: 0x1ed7c80, Func Offset: 0x2e0
	// Line 1019, Address: 0x1ed7c84, Func Offset: 0x2e4
	// Line 1020, Address: 0x1ed7c88, Func Offset: 0x2e8
	// Line 1021, Address: 0x1ed7c90, Func Offset: 0x2f0
	// Line 1022, Address: 0x1ed7c94, Func Offset: 0x2f4
	// Line 1023, Address: 0x1ed7c98, Func Offset: 0x2f8
	// Line 1026, Address: 0x1ed7cb4, Func Offset: 0x314
	// Line 1027, Address: 0x1ed7cbc, Func Offset: 0x31c
	// Line 1028, Address: 0x1ed7ce4, Func Offset: 0x344
	// Line 1029, Address: 0x1ed7ce8, Func Offset: 0x348
	// Line 1030, Address: 0x1ed7cf4, Func Offset: 0x354
	// Line 1032, Address: 0x1ed7cfc, Func Offset: 0x35c
	// Line 1033, Address: 0x1ed7d04, Func Offset: 0x364
	// Line 1034, Address: 0x1ed7d08, Func Offset: 0x368
	// Line 1035, Address: 0x1ed7d10, Func Offset: 0x370
	// Line 1038, Address: 0x1ed7d14, Func Offset: 0x374
	// Line 1040, Address: 0x1ed7d24, Func Offset: 0x384
	// Line 1041, Address: 0x1ed7d2c, Func Offset: 0x38c
	// Line 1042, Address: 0x1ed7d34, Func Offset: 0x394
	// Line 1043, Address: 0x1ed7d38, Func Offset: 0x398
	// Line 1044, Address: 0x1ed7d5c, Func Offset: 0x3bc
	// Line 1045, Address: 0x1ed7d6c, Func Offset: 0x3cc
	// Line 1046, Address: 0x1ed7d74, Func Offset: 0x3d4
	// Line 1047, Address: 0x1ed7d7c, Func Offset: 0x3dc
	// Line 1048, Address: 0x1ed7d84, Func Offset: 0x3e4
	// Line 1049, Address: 0x1ed7d90, Func Offset: 0x3f0
	// Line 1050, Address: 0x1ed7d94, Func Offset: 0x3f4
	// Line 1052, Address: 0x1ed7d9c, Func Offset: 0x3fc
	// Line 1053, Address: 0x1ed7da4, Func Offset: 0x404
	// Line 1054, Address: 0x1ed7da8, Func Offset: 0x408
	// Line 1055, Address: 0x1ed7db0, Func Offset: 0x410
	// Line 1056, Address: 0x1ed7dc0, Func Offset: 0x420
	// Line 1058, Address: 0x1ed7dcc, Func Offset: 0x42c
	// Line 1056, Address: 0x1ed7dd0, Func Offset: 0x430
	// Line 1058, Address: 0x1ed7dd4, Func Offset: 0x434
	// Line 1059, Address: 0x1ed7ddc, Func Offset: 0x43c
	// Line 1060, Address: 0x1ed7df0, Func Offset: 0x450
	// Line 1061, Address: 0x1ed7df8, Func Offset: 0x458
	// Line 1062, Address: 0x1ed7e04, Func Offset: 0x464
	// Line 1063, Address: 0x1ed7e0c, Func Offset: 0x46c
	// Line 1068, Address: 0x1ed7e10, Func Offset: 0x470
	// Line 1063, Address: 0x1ed7e14, Func Offset: 0x474
	// Line 1069, Address: 0x1ed7e18, Func Offset: 0x478
	// Line 1066, Address: 0x1ed7e1c, Func Offset: 0x47c
	// Line 1063, Address: 0x1ed7e20, Func Offset: 0x480
	// Line 1066, Address: 0x1ed7e24, Func Offset: 0x484
	// Line 1063, Address: 0x1ed7e28, Func Offset: 0x488
	// Line 1066, Address: 0x1ed7e2c, Func Offset: 0x48c
	// Line 1063, Address: 0x1ed7e30, Func Offset: 0x490
	// Line 1066, Address: 0x1ed7e34, Func Offset: 0x494
	// Line 1064, Address: 0x1ed7e3c, Func Offset: 0x49c
	// Line 1067, Address: 0x1ed7e44, Func Offset: 0x4a4
	// Line 1064, Address: 0x1ed7e48, Func Offset: 0x4a8
	// Line 1067, Address: 0x1ed7e4c, Func Offset: 0x4ac
	// Line 1064, Address: 0x1ed7e50, Func Offset: 0x4b0
	// Line 1067, Address: 0x1ed7e54, Func Offset: 0x4b4
	// Line 1064, Address: 0x1ed7e58, Func Offset: 0x4b8
	// Line 1067, Address: 0x1ed7e5c, Func Offset: 0x4bc
	// Line 1065, Address: 0x1ed7e64, Func Offset: 0x4c4
	// Line 1069, Address: 0x1ed7e78, Func Offset: 0x4d8
	// Line 1070, Address: 0x1ed7e80, Func Offset: 0x4e0
	// Line 1071, Address: 0x1ed7e8c, Func Offset: 0x4ec
	// Line 1072, Address: 0x1ed7e90, Func Offset: 0x4f0
	// Line 1073, Address: 0x1ed7e98, Func Offset: 0x4f8
	// Line 1075, Address: 0x1ed7ea0, Func Offset: 0x500
	// Line 1076, Address: 0x1ed7ea8, Func Offset: 0x508
	// Line 1077, Address: 0x1ed7eb0, Func Offset: 0x510
	// Line 1078, Address: 0x1ed7ebc, Func Offset: 0x51c
	// Line 1080, Address: 0x1ed7ec8, Func Offset: 0x528
	// Line 1081, Address: 0x1ed7ed4, Func Offset: 0x534
	// Line 1083, Address: 0x1ed7ef8, Func Offset: 0x558
	// Line 1084, Address: 0x1ed7f00, Func Offset: 0x560
	// Line 1088, Address: 0x1ed7f04, Func Offset: 0x564
	// Line 1090, Address: 0x1ed7f08, Func Offset: 0x568
	// Line 1091, Address: 0x1ed7f14, Func Offset: 0x574
	// Line 1093, Address: 0x1ed7f28, Func Offset: 0x588
	// Line 1095, Address: 0x1ed7f30, Func Offset: 0x590
	// Line 1094, Address: 0x1ed7f34, Func Offset: 0x594
	// Line 1095, Address: 0x1ed7f38, Func Offset: 0x598
	// Func End, Address: 0x1ed7f4c, Func Offset: 0x5ac
}

// 
// Start address: 0x1ed7f50
int ev_forest0_fr09_025_draw(sfObj* obj)
{
	_anon0* wk;
	// Line 240, Address: 0x1ed7f50, Func Offset: 0
	// Line 241, Address: 0x1ed7f5c, Func Offset: 0xc
	// Line 245, Address: 0x1ed7f64, Func Offset: 0x14
	// Line 248, Address: 0x1ed7f6c, Func Offset: 0x1c
	// Line 251, Address: 0x1ed7f74, Func Offset: 0x24
	// Line 252, Address: 0x1ed7f84, Func Offset: 0x34
	// Line 255, Address: 0x1ed7f8c, Func Offset: 0x3c
	// Line 256, Address: 0x1ed7f9c, Func Offset: 0x4c
	// Line 257, Address: 0x1ed7fa4, Func Offset: 0x54
	// Line 259, Address: 0x1ed7fb0, Func Offset: 0x60
	// Line 265, Address: 0x1ed7fb8, Func Offset: 0x68
	// Line 268, Address: 0x1ed7fc0, Func Offset: 0x70
	// Line 267, Address: 0x1ed7fc4, Func Offset: 0x74
	// Line 268, Address: 0x1ed7fc8, Func Offset: 0x78
	// Func End, Address: 0x1ed7fd0, Func Offset: 0x80
	// Line 1098, Address: 0x1ed7f50, Func Offset: 0
	// Line 1099, Address: 0x1ed7f5c, Func Offset: 0xc
	// Line 1101, Address: 0x1ed7f60, Func Offset: 0x10
	// Line 1102, Address: 0x1ed7f6c, Func Offset: 0x1c
	// Line 1103, Address: 0x1ed7f74, Func Offset: 0x24
	// Line 1104, Address: 0x1ed7f84, Func Offset: 0x34
	// Line 1105, Address: 0x1ed7f94, Func Offset: 0x44
	// Line 1106, Address: 0x1ed7f9c, Func Offset: 0x4c
	// Line 1107, Address: 0x1ed7fa4, Func Offset: 0x54
	// Line 1108, Address: 0x1ed7fb8, Func Offset: 0x68
	// Line 1109, Address: 0x1ed7fcc, Func Offset: 0x7c
	// Line 1114, Address: 0x1ed7fd4, Func Offset: 0x84
	// Line 1116, Address: 0x1ed7fd8, Func Offset: 0x88
	// Line 1115, Address: 0x1ed7fe0, Func Offset: 0x90
	// Line 1116, Address: 0x1ed7fe4, Func Offset: 0x94
	// Func End, Address: 0x1ed7fec, Func Offset: 0x9c
}

// 
// Start address: 0x1ed7ff0
int ev_forest0_fr09_025_end(sfObj* obj)
{
	_anon0* wk;
	// Line 1119, Address: 0x1ed7ff0, Func Offset: 0
	// Line 1120, Address: 0x1ed7ffc, Func Offset: 0xc
	// Line 1122, Address: 0x1ed8000, Func Offset: 0x10
	// Line 1123, Address: 0x1ed8008, Func Offset: 0x18
	// Line 1124, Address: 0x1ed8010, Func Offset: 0x20
	// Line 1125, Address: 0x1ed8018, Func Offset: 0x28
	// Line 1126, Address: 0x1ed8020, Func Offset: 0x30
	// Line 1127, Address: 0x1ed8028, Func Offset: 0x38
	// Line 1130, Address: 0x1ed8030, Func Offset: 0x40
	// Line 1129, Address: 0x1ed8034, Func Offset: 0x44
	// Line 1130, Address: 0x1ed8038, Func Offset: 0x48
	// Func End, Address: 0x1ed8044, Func Offset: 0x54
	// Line 255, Address: 0x1ed7ff0, Func Offset: 0
	// Line 257, Address: 0x1ed7ff4, Func Offset: 0x4
	// Line 255, Address: 0x1ed7ff8, Func Offset: 0x8
	// Line 257, Address: 0x1ed7ffc, Func Offset: 0xc
	// Line 260, Address: 0x1ed8014, Func Offset: 0x24
	// Func End, Address: 0x1ed8020, Func Offset: 0x30
	// Line 74, Address: 0x1ed7ff0, Func Offset: 0
	// Func End, Address: 0x1ed7ff8, Func Offset: 0x8
}

// 
// Start address: 0x1ed8050
int ev_forest0_fr09_025_action_exec()
{
	// Line 1144, Address: 0x1ed8050, Func Offset: 0
	// Line 1146, Address: 0x1ed8054, Func Offset: 0x4
	// Line 1144, Address: 0x1ed8058, Func Offset: 0x8
	// Line 1147, Address: 0x1ed8064, Func Offset: 0x14
	// Func End, Address: 0x1ed806c, Func Offset: 0x1c
}

// 
// Start address: 0x1ed8070
int ev_forest0_fr09_026_trg_chk()
{
	// Line 1173, Address: 0x1ed8070, Func Offset: 0
	// Line 1177, Address: 0x1ed8074, Func Offset: 0x4
	// Line 1173, Address: 0x1ed8078, Func Offset: 0x8
	// Line 1177, Address: 0x1ed807c, Func Offset: 0xc
	// Line 1179, Address: 0x1ed809c, Func Offset: 0x2c
	// Line 1180, Address: 0x1ed80a4, Func Offset: 0x34
	// Line 1181, Address: 0x1ed80a8, Func Offset: 0x38
	// Line 1183, Address: 0x1ed80b0, Func Offset: 0x40
	// Func End, Address: 0x1ed80bc, Func Offset: 0x4c
	// Line 123, Address: 0x1ed8070, Func Offset: 0
	// Line 127, Address: 0x1ed8074, Func Offset: 0x4
	// Line 123, Address: 0x1ed8078, Func Offset: 0x8
	// Line 127, Address: 0x1ed807c, Func Offset: 0xc
	// Line 123, Address: 0x1ed8080, Func Offset: 0x10
	// Line 127, Address: 0x1ed8084, Func Offset: 0x14
	// Line 128, Address: 0x1ed808c, Func Offset: 0x1c
	// Line 129, Address: 0x1ed8090, Func Offset: 0x20
	// Line 130, Address: 0x1ed809c, Func Offset: 0x2c
	// Line 131, Address: 0x1ed80a8, Func Offset: 0x38
	// Line 132, Address: 0x1ed80b8, Func Offset: 0x48
	// Line 133, Address: 0x1ed80d0, Func Offset: 0x60
	// Line 134, Address: 0x1ed80d8, Func Offset: 0x68
	// Line 135, Address: 0x1ed8100, Func Offset: 0x90
	// Line 136, Address: 0x1ed8114, Func Offset: 0xa4
	// Line 138, Address: 0x1ed8118, Func Offset: 0xa8
	// Line 139, Address: 0x1ed812c, Func Offset: 0xbc
	// Func End, Address: 0x1ed813c, Func Offset: 0xcc
}

// 
// Start address: 0x1ed80c0
int ev_forest0_fr09_026_exec(sfObj* obj)
{
	_anon0* wk;
	float hitpos[4];
	// Line 1186, Address: 0x1ed80c0, Func Offset: 0
	// Line 1189, Address: 0x1ed80c4, Func Offset: 0x4
	// Line 1186, Address: 0x1ed80c8, Func Offset: 0x8
	// Line 1189, Address: 0x1ed80cc, Func Offset: 0xc
	// Line 1186, Address: 0x1ed80d0, Func Offset: 0x10
	// Line 1189, Address: 0x1ed80d4, Func Offset: 0x14
	// Line 1186, Address: 0x1ed80d8, Func Offset: 0x18
	// Line 1189, Address: 0x1ed80e4, Func Offset: 0x24
	// Line 1188, Address: 0x1ed80e8, Func Offset: 0x28
	// Line 1192, Address: 0x1ed80ec, Func Offset: 0x2c
	// Line 1189, Address: 0x1ed80f4, Func Offset: 0x34
	// Line 1192, Address: 0x1ed80f8, Func Offset: 0x38
	// Line 1194, Address: 0x1ed8108, Func Offset: 0x48
	// Line 1196, Address: 0x1ed8128, Func Offset: 0x68
	// Line 1197, Address: 0x1ed8130, Func Offset: 0x70
	// Line 1198, Address: 0x1ed8138, Func Offset: 0x78
	// Line 1199, Address: 0x1ed8154, Func Offset: 0x94
	// Line 1200, Address: 0x1ed8160, Func Offset: 0xa0
	// Line 1202, Address: 0x1ed816c, Func Offset: 0xac
	// Line 1205, Address: 0x1ed8198, Func Offset: 0xd8
	// Line 1207, Address: 0x1ed81b0, Func Offset: 0xf0
	// Line 1208, Address: 0x1ed81bc, Func Offset: 0xfc
	// Line 1211, Address: 0x1ed81e8, Func Offset: 0x128
	// Line 1212, Address: 0x1ed81f0, Func Offset: 0x130
	// Line 1214, Address: 0x1ed8200, Func Offset: 0x140
	// Line 1216, Address: 0x1ed8218, Func Offset: 0x158
	// Line 1218, Address: 0x1ed8224, Func Offset: 0x164
	// Line 1219, Address: 0x1ed822c, Func Offset: 0x16c
	// Line 1220, Address: 0x1ed8234, Func Offset: 0x174
	// Line 1221, Address: 0x1ed823c, Func Offset: 0x17c
	// Line 1222, Address: 0x1ed8248, Func Offset: 0x188
	// Line 1223, Address: 0x1ed8254, Func Offset: 0x194
	// Line 1227, Address: 0x1ed8268, Func Offset: 0x1a8
	// Line 1229, Address: 0x1ed8278, Func Offset: 0x1b8
	// Line 1230, Address: 0x1ed8280, Func Offset: 0x1c0
	// Line 1231, Address: 0x1ed8288, Func Offset: 0x1c8
	// Line 1232, Address: 0x1ed8294, Func Offset: 0x1d4
	// Line 1233, Address: 0x1ed82a0, Func Offset: 0x1e0
	// Line 1234, Address: 0x1ed82a4, Func Offset: 0x1e4
	// Line 1235, Address: 0x1ed82a8, Func Offset: 0x1e8
	// Line 1238, Address: 0x1ed82c4, Func Offset: 0x204
	// Line 1239, Address: 0x1ed82cc, Func Offset: 0x20c
	// Line 1240, Address: 0x1ed82f4, Func Offset: 0x234
	// Line 1241, Address: 0x1ed82f8, Func Offset: 0x238
	// Line 1242, Address: 0x1ed8304, Func Offset: 0x244
	// Line 1247, Address: 0x1ed830c, Func Offset: 0x24c
	// Line 1249, Address: 0x1ed8310, Func Offset: 0x250
	// Line 1250, Address: 0x1ed831c, Func Offset: 0x25c
	// Line 1252, Address: 0x1ed8330, Func Offset: 0x270
	// Line 1255, Address: 0x1ed8338, Func Offset: 0x278
	// Line 1254, Address: 0x1ed833c, Func Offset: 0x27c
	// Line 1255, Address: 0x1ed8340, Func Offset: 0x280
	// Func End, Address: 0x1ed8354, Func Offset: 0x294
}

// 
// Start address: 0x1ed8360
int ev_forest0_fr06_026_draw(sfObj* obj)
{
	_anon0* wk;
	// Line 1258, Address: 0x1ed8360, Func Offset: 0
	// Line 1259, Address: 0x1ed836c, Func Offset: 0xc
	// Line 1261, Address: 0x1ed8370, Func Offset: 0x10
	// Line 1262, Address: 0x1ed837c, Func Offset: 0x1c
	// Line 1263, Address: 0x1ed8384, Func Offset: 0x24
	// Line 1264, Address: 0x1ed8394, Func Offset: 0x34
	// Line 1265, Address: 0x1ed83a4, Func Offset: 0x44
	// Line 1266, Address: 0x1ed83ac, Func Offset: 0x4c
	// Line 1267, Address: 0x1ed83b4, Func Offset: 0x54
	// Line 1268, Address: 0x1ed83c8, Func Offset: 0x68
	// Line 1274, Address: 0x1ed83d0, Func Offset: 0x70
	// Line 1273, Address: 0x1ed83d8, Func Offset: 0x78
	// Line 1274, Address: 0x1ed83dc, Func Offset: 0x7c
	// Func End, Address: 0x1ed83e4, Func Offset: 0x84
}

// 
// Start address: 0x1ed83f0
int ev_forest0_fr09_jasper2_trgchk()
{
	// Line 609, Address: 0x1ed83f0, Func Offset: 0
	// Line 613, Address: 0x1ed83f4, Func Offset: 0x4
	// Line 609, Address: 0x1ed83f8, Func Offset: 0x8
	// Line 613, Address: 0x1ed8400, Func Offset: 0x10
	// Line 618, Address: 0x1ed8424, Func Offset: 0x34
	// Line 616, Address: 0x1ed8428, Func Offset: 0x38
	// Line 619, Address: 0x1ed842c, Func Offset: 0x3c
	// Line 620, Address: 0x1ed8430, Func Offset: 0x40
	// Line 621, Address: 0x1ed8434, Func Offset: 0x44
	// Func End, Address: 0x1ed8444, Func Offset: 0x54
	// Line 1289, Address: 0x1ed83f0, Func Offset: 0
	// Line 1292, Address: 0x1ed83fc, Func Offset: 0xc
	// Func End, Address: 0x1ed8404, Func Offset: 0x14
}

// 
// Start address: 0x1ed8410
int ev_forest0_fr09_jasper2a_init(sfObj* obj)
{
	// Line 1295, Address: 0x1ed8410, Func Offset: 0
	// Line 1297, Address: 0x1ed8418, Func Offset: 0x8
	// Line 1299, Address: 0x1ed8420, Func Offset: 0x10
	// Line 1300, Address: 0x1ed8434, Func Offset: 0x24
	// Line 1301, Address: 0x1ed8448, Func Offset: 0x38
	// Line 1305, Address: 0x1ed8450, Func Offset: 0x40
	// Line 1304, Address: 0x1ed8454, Func Offset: 0x44
	// Line 1305, Address: 0x1ed8458, Func Offset: 0x48
	// Func End, Address: 0x1ed8460, Func Offset: 0x50
}

// 
// Start address: 0x1ed8460
int ev_forest0_fr09_jasper2b_init(sfObj* obj)
{
	// Line 630, Address: 0x1ed8460, Func Offset: 0
	// Line 633, Address: 0x1ed8464, Func Offset: 0x4
	// Line 630, Address: 0x1ed8468, Func Offset: 0x8
	// Line 633, Address: 0x1ed8470, Func Offset: 0x10
	// Line 634, Address: 0x1ed8484, Func Offset: 0x24
	// Line 636, Address: 0x1ed8488, Func Offset: 0x28
	// Line 637, Address: 0x1ed848c, Func Offset: 0x2c
	// Func End, Address: 0x1ed849c, Func Offset: 0x3c
	// Line 1318, Address: 0x1ed8460, Func Offset: 0
	// Line 1320, Address: 0x1ed8468, Func Offset: 0x8
	// Line 1322, Address: 0x1ed8470, Func Offset: 0x10
	// Line 1323, Address: 0x1ed8484, Func Offset: 0x24
	// Line 1324, Address: 0x1ed8494, Func Offset: 0x34
	// Line 1327, Address: 0x1ed8498, Func Offset: 0x38
	// Line 1326, Address: 0x1ed849c, Func Offset: 0x3c
	// Line 1327, Address: 0x1ed84a0, Func Offset: 0x40
	// Func End, Address: 0x1ed84a8, Func Offset: 0x48
	// Line 278, Address: 0x1ed8460, Func Offset: 0
	// Line 279, Address: 0x1ed846c, Func Offset: 0xc
	// Line 282, Address: 0x1ed8474, Func Offset: 0x14
	// Line 283, Address: 0x1ed847c, Func Offset: 0x1c
	// Line 286, Address: 0x1ed8480, Func Offset: 0x20
	// Line 285, Address: 0x1ed8484, Func Offset: 0x24
	// Line 286, Address: 0x1ed8488, Func Offset: 0x28
	// Func End, Address: 0x1ed8490, Func Offset: 0x30
}

// 
// Start address: 0x1ed84b0
int ev_forest0_fr21_028_end()
{
	// Line 646, Address: 0x1ed84b0, Func Offset: 0
	// Line 649, Address: 0x1ed84b4, Func Offset: 0x4
	// Line 646, Address: 0x1ed84b8, Func Offset: 0x8
	// Line 649, Address: 0x1ed84c0, Func Offset: 0x10
	// Line 650, Address: 0x1ed84d4, Func Offset: 0x24
	// Line 652, Address: 0x1ed84d8, Func Offset: 0x28
	// Line 653, Address: 0x1ed84dc, Func Offset: 0x2c
	// Func End, Address: 0x1ed84ec, Func Offset: 0x3c
	// Line 1356, Address: 0x1ed84b0, Func Offset: 0
	// Line 1357, Address: 0x1ed84b8, Func Offset: 0x8
	// Line 1359, Address: 0x1ed84c0, Func Offset: 0x10
	// Line 1361, Address: 0x1ed84c8, Func Offset: 0x18
	// Line 1362, Address: 0x1ed84d0, Func Offset: 0x20
	// Line 1364, Address: 0x1ed84dc, Func Offset: 0x2c
	// Line 1366, Address: 0x1ed84e4, Func Offset: 0x34
	// Line 1369, Address: 0x1ed84ec, Func Offset: 0x3c
	// Line 1368, Address: 0x1ed84f0, Func Offset: 0x40
	// Line 1369, Address: 0x1ed84f4, Func Offset: 0x44
	// Func End, Address: 0x1ed84fc, Func Offset: 0x4c
}

// 
// Start address: 0x1ed8500
int ev_forest0_fr17_095_exec(sfObj* obj)
{
	int ret;
	// Line 662, Address: 0x1ed8500, Func Offset: 0
	// Line 671, Address: 0x1ed8504, Func Offset: 0x4
	// Line 662, Address: 0x1ed8508, Func Offset: 0x8
	// Line 671, Address: 0x1ed8510, Func Offset: 0x10
	// Line 672, Address: 0x1ed8524, Func Offset: 0x24
	// Line 674, Address: 0x1ed8528, Func Offset: 0x28
	// Line 675, Address: 0x1ed852c, Func Offset: 0x2c
	// Func End, Address: 0x1ed853c, Func Offset: 0x3c
	// Line 1391, Address: 0x1ed8500, Func Offset: 0
	// Line 1394, Address: 0x1ed8508, Func Offset: 0x8
	// Line 1396, Address: 0x1ed8514, Func Offset: 0x14
	// Line 1397, Address: 0x1ed851c, Func Offset: 0x1c
	// Line 1398, Address: 0x1ed8524, Func Offset: 0x24
	// Line 1400, Address: 0x1ed8528, Func Offset: 0x28
	// Line 1401, Address: 0x1ed852c, Func Offset: 0x2c
	// Func End, Address: 0x1ed853c, Func Offset: 0x3c
	// Line 312, Address: 0x1ed8500, Func Offset: 0
	// Line 313, Address: 0x1ed8508, Func Offset: 0x8
	// Line 315, Address: 0x1ed8510, Func Offset: 0x10
	// Line 314, Address: 0x1ed8514, Func Offset: 0x14
	// Line 315, Address: 0x1ed8518, Func Offset: 0x18
	// Func End, Address: 0x1ed8520, Func Offset: 0x20
}

// 
// Start address: 0x1ed8540
int ev_forest0_fr23_2269_end(sfObj* obj)
{
	// Line 679, Address: 0x1ed8540, Func Offset: 0
	// Func End, Address: 0x1ed8548, Func Offset: 0x8
	// Line 1427, Address: 0x1ed8540, Func Offset: 0
	// Line 1428, Address: 0x1ed854c, Func Offset: 0xc
	// Line 1430, Address: 0x1ed8554, Func Offset: 0x14
	// Line 1431, Address: 0x1ed855c, Func Offset: 0x1c
	// Func End, Address: 0x1ed856c, Func Offset: 0x2c
	// Line 330, Address: 0x1ed8540, Func Offset: 0
	// Line 331, Address: 0x1ed8548, Func Offset: 0x8
	// Line 333, Address: 0x1ed8550, Func Offset: 0x10
	// Line 332, Address: 0x1ed8554, Func Offset: 0x14
	// Line 333, Address: 0x1ed8558, Func Offset: 0x18
	// Func End, Address: 0x1ed8560, Func Offset: 0x20
}

// 
// Start address: 0x1ed8570
int ev_forest0_fr16_047_end(sfObj* obj)
{
	float hen_pos[4];
	float color[4];
	float pos[4];
	unsigned int id;
	_anon4 light;
	// Line 1457, Address: 0x1ed8570, Func Offset: 0
	// Line 1458, Address: 0x1ed8574, Func Offset: 0x4
	// Line 1457, Address: 0x1ed8578, Func Offset: 0x8
	// Line 1460, Address: 0x1ed857c, Func Offset: 0xc
	// Line 1457, Address: 0x1ed8580, Func Offset: 0x10
	// Line 1458, Address: 0x1ed8584, Func Offset: 0x14
	// Line 1457, Address: 0x1ed8588, Func Offset: 0x18
	// Line 1458, Address: 0x1ed858c, Func Offset: 0x1c
	// Line 1464, Address: 0x1ed8598, Func Offset: 0x28
	// Line 1460, Address: 0x1ed859c, Func Offset: 0x2c
	// Line 1461, Address: 0x1ed85a4, Func Offset: 0x34
	// Line 1464, Address: 0x1ed85a8, Func Offset: 0x38
	// Line 1458, Address: 0x1ed85ac, Func Offset: 0x3c
	// Line 1461, Address: 0x1ed85b0, Func Offset: 0x40
	// Line 1460, Address: 0x1ed85b4, Func Offset: 0x44
	// Line 1461, Address: 0x1ed85b8, Func Offset: 0x48
	// Line 1460, Address: 0x1ed85bc, Func Offset: 0x4c
	// Line 1461, Address: 0x1ed85c0, Func Offset: 0x50
	// Line 1464, Address: 0x1ed85c4, Func Offset: 0x54
	// Line 1465, Address: 0x1ed85cc, Func Offset: 0x5c
	// Line 1466, Address: 0x1ed85d8, Func Offset: 0x68
	// Line 1467, Address: 0x1ed85e8, Func Offset: 0x78
	// Line 1468, Address: 0x1ed85f8, Func Offset: 0x88
	// Line 1469, Address: 0x1ed8614, Func Offset: 0xa4
	// Line 1470, Address: 0x1ed8624, Func Offset: 0xb4
	// Line 1471, Address: 0x1ed8630, Func Offset: 0xc0
	// Line 1470, Address: 0x1ed8634, Func Offset: 0xc4
	// Line 1471, Address: 0x1ed8638, Func Offset: 0xc8
	// Line 1472, Address: 0x1ed8640, Func Offset: 0xd0
	// Line 1477, Address: 0x1ed8648, Func Offset: 0xd8
	// Line 1480, Address: 0x1ed8650, Func Offset: 0xe0
	// Line 1481, Address: 0x1ed865c, Func Offset: 0xec
	// Line 1483, Address: 0x1ed8670, Func Offset: 0x100
	// Line 1484, Address: 0x1ed8678, Func Offset: 0x108
	// Func End, Address: 0x1ed868c, Func Offset: 0x11c
}

// 
// Start address: 0x1ed8690
int ev_forest0_fr16_exec(sfObj* obj)
{
	// Line 1493, Address: 0x1ed8690, Func Offset: 0
	// Func End, Address: 0x1ed8698, Func Offset: 0x8
}

