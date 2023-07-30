typedef struct sfObj;
typedef struct sgAnime;
typedef struct sgBone;
typedef struct sgIKHandle;
typedef union _anon0;
typedef struct sgSVModel;
typedef struct DemoEventTable;
typedef struct sfCharacter;
typedef struct _anon1;
typedef struct _anon2;
typedef enum sgIKSolveResult : unsigned char;
typedef struct _anon3;

typedef void(*type_1)(sgAnime*, int);
typedef void(*type_4)(sfObj*);
typedef void(*type_7)(sfObj*);
typedef void(*type_8)(sfObj*);
typedef void(*type_9)(sfObj*);
typedef void(*type_11)(sfObj*);
typedef void(*type_12)(sfObj*);
typedef void(*type_13)(_anon1*, int, int, float*);
typedef sgIKSolveResult(*type_23)();

typedef void* type_0[4];
typedef float type_2[4];
typedef _anon0 type_3[256];
typedef unsigned char type_5[4];
typedef float type_6[4][4];
typedef float type_10[4];
typedef short type_14[35];
typedef short type_15[2];
typedef unsigned short type_16[2];
typedef char type_17[4];
typedef unsigned char type_18[4];
typedef float type_19[4][2];
typedef float type_20[1];
typedef int type_21[1];
typedef short type_22[27];
typedef float type_24[4];

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

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
};

struct DemoEventTable
{
	int demo_id;
	void(*init)(sfObj*);
	void(*exec)(sfObj*);
	void(*end)(sfObj*);
	void(*draw)(sfObj*);
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

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

struct _anon3
{
	void* texture_normal;
	void* texture_global;
	void* texture_semitrans;
	void* model_data;
	sgBone* parent_bone;
};

sgAnime* fananm;
sfCharacter* fanchr;
sfObj* fanobj;
float sg_vector_zero[4];
float peep_x;
float peep_y;
float peep_z;
DemoEventTable demo_event_rl045;
DemoEventTable demo_event_rl046;
DemoEventTable demo_event_rl047;
DemoEventTable demo_event_rl048;
DemoEventTable demo_event_rl049;
float demo050_alpha;
_anon3 door_text_model;
DemoEventTable demo_event_rl050;
DemoEventTable demo_event_rl054;
DemoEventTable demo_event_rl055;
DemoEventTable demo_event_rl057;
DemoEventTable demo_event_rl079;
DemoEventTable demo_event_rl058;
DemoEventTable demo_event_rl059;
DemoEventTable demo_event_rl062;
DemoEventTable demo_event_rl063;
DemoEventTable demo_event_rl064;
DemoEventTable demo_event_rl074;
DemoEventTable demo_event_rl087;
DemoEventTable demo_event_rl101;
DemoEventTable demo_event_rl102;
DemoEventTable demo_event_rl103;
DemoEventTable demo_event_rl104;
DemoEventTable demo_event_rl105;
DemoEventTable demo_event_rl106;
DemoEventTable demo_event_rl107;
DemoEventTable demo_event_rl108;
DemoEventTable demo_event_rl109;
DemoEventTable demo_event_rl110;
DemoEventTable demo_event_rl111;
DemoEventTable demo_event_rl112;
DemoEventTable demo_event_rl113;
DemoEventTable demo_event_rl114;
DemoEventTable demo_event_rl115;
DemoEventTable demo_event_rl116;
DemoEventTable demo_event_rl117;
DemoEventTable demo_event_rl118;
DemoEventTable demo_event_rl119;
DemoEventTable demo_event_rl120;
DemoEventTable demo_event_rl121;
DemoEventTable demo_event_rl122;
DemoEventTable demo_event_rl123;
DemoEventTable demo_event_rl124;
DemoEventTable demo_event_rl125;
DemoEventTable demo_event_rl126;
DemoEventTable demo_event_rl127;
DemoEventTable demo_event_rl128;
DemoEventTable demo_event_rl129;
DemoEventTable demo_event_rl130;
DemoEventTable demo_event_rl140;
DemoEventTable demo_event_rl141;
DemoEventTable demo_event_rl142;
DemoEventTable demo_event_rl143;
DemoEventTable demo_event_rl144;
DemoEventTable demo_event_rl145;
DemoEventTable demo_event_rl146;
DemoEventTable demo_event_rl147;
DemoEventTable demo_event_rl148;
DemoEventTable demo_event_rl149;
DemoEventTable demo_event_rl056;
DemoEventTable demo_event_rl061;
DemoEventTable demo_event_rl075;
DemoEventTable demo_event_rl131;
DemoEventTable demo_event_rl132;
DemoEventTable demo_event_rl133;
DemoEventTable demo_event_rl134;
DemoEventTable demo_event_rl135;
DemoEventTable demo_event_rl136;
DemoEventTable demo_event_rl137;
DemoEventTable demo_event_rl138;
DemoEventTable demo_event_rl139;
DemoEventTable demo_event_rl150;
DemoEventTable demo_event_rl066;
DemoEventTable demo_event_rl060;
_anon3 telephone;
sfObj* demo050_obj;

void DemoOkimonoRL00FanSet(int kind);
void DemoOkimonoRL01FanSet(int kind);
void DemoOkimonoFanAnm();
void DemoEventInitRL00Fan0();
void DemoEventInitRL00Fan2();
void DemoEventInitRL01Fan0();
void DemoEventInitRL01Fan1();
void DemoEventInitRL01Fan2();
void DemoEventExecFan();
void DemoEventInitRLWakeUpDaytime(sfObj* obj);
void DemoEventInitRLWakeUpEvening(sfObj* obj);
void DemoEventInitRLWakeUpNight(sfObj* obj);
void peepdoor_get_camera_vwm(float vwm[4]);
void DemoEventInitDoorPeep();
void DemoEventInitDoorPeepEndless(sfObj* obj);
void DemoEventExecDoorPeep();
void DemoEventDrawDoorPeep();
void peeproom_get_camera_vwm(float vwm[4]);
void DemoEventInitRoomPeep();
void DemoEventInitRoomPeepEndless(sfObj* obj);
void DemoEventExecRoomPeep();
void DemoEventDrawRoomPeep();
void DemoEventInitRLWakeUp();
void DemoEventEndRLWakeUp();
void DemoEventDrawRLWakeUp();
void DemoEventEndRL045(sfObj* obj);
void DemoEventDrawRL045(sfObj* obj);
void DemoEventEndRL047();
void DemoEventDrawRL047();
void DemoEventInitRL050(sfObj* obj);
void DemoEventExecRL050(sfObj* obj);
void DemoEventDrawRL050();
void DemoEventExecRL058(sfObj* obj);
void DemoEventExecRL059(sfObj* obj);
void demo_event_rl063_init(sfObj* obj);
void demo_event_rl063_exec(sfObj* obj);
void demo_event_rl074_init(sfObj* obj);
void DemoEventInitRL150(sfObj* obj);
void DemoEventInitRL066();
void DemoEventInitRL060();

// 
// Start address: 0x273780
void DemoOkimonoRL00FanSet(int kind)
{
	float rot[4];
	// Line 42, Address: 0x273780, Func Offset: 0
	// Line 43, Address: 0x273784, Func Offset: 0x4
	// Line 42, Address: 0x273788, Func Offset: 0x8
	// Line 43, Address: 0x27378c, Func Offset: 0xc
	// Line 45, Address: 0x273798, Func Offset: 0x18
	// Line 47, Address: 0x2737c0, Func Offset: 0x40
	// Line 48, Address: 0x2737e4, Func Offset: 0x64
	// Line 49, Address: 0x2737ec, Func Offset: 0x6c
	// Line 50, Address: 0x2737f0, Func Offset: 0x70
	// Line 51, Address: 0x273814, Func Offset: 0x94
	// Line 52, Address: 0x27381c, Func Offset: 0x9c
	// Line 53, Address: 0x273820, Func Offset: 0xa0
	// Line 57, Address: 0x273848, Func Offset: 0xc8
	// Line 58, Address: 0x27385c, Func Offset: 0xdc
	// Line 59, Address: 0x273870, Func Offset: 0xf0
	// Line 60, Address: 0x27388c, Func Offset: 0x10c
	// Func End, Address: 0x273898, Func Offset: 0x118
}

// 
// Start address: 0x2738a0
void DemoOkimonoRL01FanSet(int kind)
{
	float rot[4];
	// Line 63, Address: 0x2738a0, Func Offset: 0
	// Line 64, Address: 0x2738a4, Func Offset: 0x4
	// Line 63, Address: 0x2738a8, Func Offset: 0x8
	// Line 64, Address: 0x2738ac, Func Offset: 0xc
	// Line 66, Address: 0x2738b8, Func Offset: 0x18
	// Line 68, Address: 0x2738e0, Func Offset: 0x40
	// Line 69, Address: 0x273904, Func Offset: 0x64
	// Line 70, Address: 0x27390c, Func Offset: 0x6c
	// Line 71, Address: 0x273910, Func Offset: 0x70
	// Line 72, Address: 0x273934, Func Offset: 0x94
	// Line 73, Address: 0x27393c, Func Offset: 0x9c
	// Line 74, Address: 0x273940, Func Offset: 0xa0
	// Line 78, Address: 0x273968, Func Offset: 0xc8
	// Line 79, Address: 0x27397c, Func Offset: 0xdc
	// Line 80, Address: 0x273990, Func Offset: 0xf0
	// Line 81, Address: 0x2739ac, Func Offset: 0x10c
	// Func End, Address: 0x2739b8, Func Offset: 0x118
}

// 
// Start address: 0x2739c0
void DemoOkimonoFanAnm()
{
	// Line 85, Address: 0x2739c0, Func Offset: 0
	// Func End, Address: 0x2739cc, Func Offset: 0xc
}

// 
// Start address: 0x2739d0
void DemoEventInitRL00Fan0()
{
	// Line 97, Address: 0x2739d0, Func Offset: 0
	// Func End, Address: 0x2739d8, Func Offset: 0x8
}

// 
// Start address: 0x2739e0
void DemoEventInitRL00Fan2()
{
	// Line 107, Address: 0x2739e0, Func Offset: 0
	// Func End, Address: 0x2739e8, Func Offset: 0x8
}

// 
// Start address: 0x2739f0
void DemoEventInitRL01Fan0()
{
	// Line 119, Address: 0x2739f0, Func Offset: 0
	// Func End, Address: 0x2739f8, Func Offset: 0x8
}

// 
// Start address: 0x273a00
void DemoEventInitRL01Fan1()
{
	// Line 130, Address: 0x273a00, Func Offset: 0
	// Func End, Address: 0x273a08, Func Offset: 0x8
}

// 
// Start address: 0x273a10
void DemoEventInitRL01Fan2()
{
	// Line 140, Address: 0x273a10, Func Offset: 0
	// Func End, Address: 0x273a18, Func Offset: 0x8
}

// 
// Start address: 0x273a20
void DemoEventExecFan()
{
	// Line 146, Address: 0x273a20, Func Offset: 0
	// Func End, Address: 0x273a28, Func Offset: 0x8
}

// 
// Start address: 0x273a30
void DemoEventInitRLWakeUpDaytime(sfObj* obj)
{
	// Line 151, Address: 0x273a30, Func Offset: 0
	// Line 152, Address: 0x273a3c, Func Offset: 0xc
	// Line 153, Address: 0x273a44, Func Offset: 0x14
	// Line 154, Address: 0x273a4c, Func Offset: 0x1c
	// Func End, Address: 0x273a5c, Func Offset: 0x2c
}

// 
// Start address: 0x273a60
void DemoEventInitRLWakeUpEvening(sfObj* obj)
{
	// Line 156, Address: 0x273a60, Func Offset: 0
	// Line 157, Address: 0x273a6c, Func Offset: 0xc
	// Line 158, Address: 0x273a74, Func Offset: 0x14
	// Line 159, Address: 0x273a7c, Func Offset: 0x1c
	// Func End, Address: 0x273a8c, Func Offset: 0x2c
}

// 
// Start address: 0x273a90
void DemoEventInitRLWakeUpNight(sfObj* obj)
{
	// Line 161, Address: 0x273a90, Func Offset: 0
	// Line 162, Address: 0x273a9c, Func Offset: 0xc
	// Line 163, Address: 0x273aa4, Func Offset: 0x14
	// Line 164, Address: 0x273aac, Func Offset: 0x1c
	// Func End, Address: 0x273abc, Func Offset: 0x2c
}

// 
// Start address: 0x273ac0
void peepdoor_get_camera_vwm(float vwm[4])
{
	// Line 173, Address: 0x273ac0, Func Offset: 0
	// Line 174, Address: 0x273ac4, Func Offset: 0x4
	// Line 173, Address: 0x273ac8, Func Offset: 0x8
	// Line 174, Address: 0x273acc, Func Offset: 0xc
	// Line 173, Address: 0x273ad0, Func Offset: 0x10
	// Line 174, Address: 0x273ad4, Func Offset: 0x14
	// Line 175, Address: 0x273b04, Func Offset: 0x44
	// Line 176, Address: 0x273b18, Func Offset: 0x58
	// Line 175, Address: 0x273b1c, Func Offset: 0x5c
	// Line 176, Address: 0x273b30, Func Offset: 0x70
	// Line 177, Address: 0x273b54, Func Offset: 0x94
	// Line 176, Address: 0x273b6c, Func Offset: 0xac
	// Line 177, Address: 0x273b70, Func Offset: 0xb0
	// Line 176, Address: 0x273b74, Func Offset: 0xb4
	// Line 177, Address: 0x273b7c, Func Offset: 0xbc
	// Line 179, Address: 0x273b88, Func Offset: 0xc8
	// Line 177, Address: 0x273ba4, Func Offset: 0xe4
	// Line 179, Address: 0x273bac, Func Offset: 0xec
	// Line 181, Address: 0x273bbc, Func Offset: 0xfc
	// Line 179, Address: 0x273bd8, Func Offset: 0x118
	// Line 181, Address: 0x273bdc, Func Offset: 0x11c
	// Line 182, Address: 0x273bf0, Func Offset: 0x130
	// Line 183, Address: 0x273c20, Func Offset: 0x160
	// Line 184, Address: 0x273c34, Func Offset: 0x174
	// Line 185, Address: 0x273c48, Func Offset: 0x188
	// Line 187, Address: 0x273c5c, Func Offset: 0x19c
	// Line 186, Address: 0x273c68, Func Offset: 0x1a8
	// Line 187, Address: 0x273c7c, Func Offset: 0x1bc
	// Line 185, Address: 0x273c80, Func Offset: 0x1c0
	// Line 187, Address: 0x273c84, Func Offset: 0x1c4
	// Line 186, Address: 0x273c88, Func Offset: 0x1c8
	// Line 185, Address: 0x273c8c, Func Offset: 0x1cc
	// Line 186, Address: 0x273c94, Func Offset: 0x1d4
	// Line 187, Address: 0x273c9c, Func Offset: 0x1dc
	// Line 188, Address: 0x273cac, Func Offset: 0x1ec
	// Func End, Address: 0x273cbc, Func Offset: 0x1fc
}

// 
// Start address: 0x273cc0
void DemoEventInitDoorPeep()
{
	// Line 191, Address: 0x273cc0, Func Offset: 0
	// Line 193, Address: 0x273cc8, Func Offset: 0x8
	// Line 195, Address: 0x273cd0, Func Offset: 0x10
	// Line 202, Address: 0x273cd8, Func Offset: 0x18
	// Func End, Address: 0x273ce4, Func Offset: 0x24
}

// 
// Start address: 0x273cf0
void DemoEventInitDoorPeepEndless(sfObj* obj)
{
	// Line 206, Address: 0x273cf0, Func Offset: 0
	// Line 207, Address: 0x273d00, Func Offset: 0x10
	// Line 208, Address: 0x273d08, Func Offset: 0x18
	// Line 209, Address: 0x273d10, Func Offset: 0x20
	// Func End, Address: 0x273d20, Func Offset: 0x30
}

// 
// Start address: 0x273d20
void DemoEventExecDoorPeep()
{
	// Line 219, Address: 0x273d20, Func Offset: 0
	// Func End, Address: 0x273d28, Func Offset: 0x8
}

// 
// Start address: 0x273d30
void DemoEventDrawDoorPeep()
{
	// Line 223, Address: 0x273d30, Func Offset: 0
	// Func End, Address: 0x273d38, Func Offset: 0x8
}

// 
// Start address: 0x273d40
void peeproom_get_camera_vwm(float vwm[4])
{
	// Line 233, Address: 0x273d40, Func Offset: 0
	// Line 234, Address: 0x273d44, Func Offset: 0x4
	// Line 233, Address: 0x273d48, Func Offset: 0x8
	// Line 234, Address: 0x273d4c, Func Offset: 0xc
	// Line 233, Address: 0x273d50, Func Offset: 0x10
	// Line 234, Address: 0x273d54, Func Offset: 0x14
	// Line 235, Address: 0x273d68, Func Offset: 0x28
	// Line 236, Address: 0x273d7c, Func Offset: 0x3c
	// Line 235, Address: 0x273d80, Func Offset: 0x40
	// Line 236, Address: 0x273d94, Func Offset: 0x54
	// Line 237, Address: 0x273dbc, Func Offset: 0x7c
	// Line 236, Address: 0x273dcc, Func Offset: 0x8c
	// Line 237, Address: 0x273dd4, Func Offset: 0x94
	// Line 236, Address: 0x273ddc, Func Offset: 0x9c
	// Line 237, Address: 0x273de0, Func Offset: 0xa0
	// Line 236, Address: 0x273de4, Func Offset: 0xa4
	// Line 237, Address: 0x273dec, Func Offset: 0xac
	// Line 238, Address: 0x273df8, Func Offset: 0xb8
	// Line 237, Address: 0x273e14, Func Offset: 0xd4
	// Line 238, Address: 0x273e1c, Func Offset: 0xdc
	// Line 239, Address: 0x273e2c, Func Offset: 0xec
	// Line 238, Address: 0x273e48, Func Offset: 0x108
	// Line 239, Address: 0x273e4c, Func Offset: 0x10c
	// Line 240, Address: 0x273e60, Func Offset: 0x120
	// Line 241, Address: 0x273e90, Func Offset: 0x150
	// Line 242, Address: 0x273ea4, Func Offset: 0x164
	// Line 243, Address: 0x273eb8, Func Offset: 0x178
	// Line 245, Address: 0x273ecc, Func Offset: 0x18c
	// Line 244, Address: 0x273ed8, Func Offset: 0x198
	// Line 245, Address: 0x273eec, Func Offset: 0x1ac
	// Line 243, Address: 0x273ef0, Func Offset: 0x1b0
	// Line 245, Address: 0x273ef4, Func Offset: 0x1b4
	// Line 244, Address: 0x273ef8, Func Offset: 0x1b8
	// Line 243, Address: 0x273efc, Func Offset: 0x1bc
	// Line 244, Address: 0x273f04, Func Offset: 0x1c4
	// Line 245, Address: 0x273f0c, Func Offset: 0x1cc
	// Line 246, Address: 0x273f1c, Func Offset: 0x1dc
	// Func End, Address: 0x273f2c, Func Offset: 0x1ec
}

// 
// Start address: 0x273f30
void DemoEventInitRoomPeep()
{
	// Line 251, Address: 0x273f30, Func Offset: 0
	// Func End, Address: 0x273f38, Func Offset: 0x8
}

// 
// Start address: 0x273f40
void DemoEventInitRoomPeepEndless(sfObj* obj)
{
	// Line 262, Address: 0x273f40, Func Offset: 0
	// Line 263, Address: 0x273f50, Func Offset: 0x10
	// Line 264, Address: 0x273f58, Func Offset: 0x18
	// Line 265, Address: 0x273f60, Func Offset: 0x20
	// Func End, Address: 0x273f70, Func Offset: 0x30
}

// 
// Start address: 0x273f70
void DemoEventExecRoomPeep()
{
	// Line 275, Address: 0x273f70, Func Offset: 0
	// Func End, Address: 0x273f78, Func Offset: 0x8
}

// 
// Start address: 0x273f80
void DemoEventDrawRoomPeep()
{
	// Line 279, Address: 0x273f80, Func Offset: 0
	// Func End, Address: 0x273f88, Func Offset: 0x8
}

// 
// Start address: 0x273f90
void DemoEventInitRLWakeUp()
{
	// Line 291, Address: 0x273f90, Func Offset: 0
	// Func End, Address: 0x273f98, Func Offset: 0x8
}

// 
// Start address: 0x273fa0
void DemoEventEndRLWakeUp()
{
	// Line 295, Address: 0x273fa0, Func Offset: 0
	// Line 296, Address: 0x273fa8, Func Offset: 0x8
	// Line 298, Address: 0x273fb0, Func Offset: 0x10
	// Line 299, Address: 0x273fb8, Func Offset: 0x18
	// Func End, Address: 0x273fc4, Func Offset: 0x24
}

// 
// Start address: 0x273fd0
void DemoEventDrawRLWakeUp()
{
	int demo_flame;
	unsigned int col;
	int length;
	int alpha;
	// Line 302, Address: 0x273fd0, Func Offset: 0
	// Line 303, Address: 0x273fe4, Func Offset: 0x14
	// Line 307, Address: 0x273ff4, Func Offset: 0x24
	// Line 311, Address: 0x274000, Func Offset: 0x30
	// Line 307, Address: 0x274004, Func Offset: 0x34
	// Line 311, Address: 0x274008, Func Offset: 0x38
	// Line 316, Address: 0x274018, Func Offset: 0x48
	// Line 317, Address: 0x274030, Func Offset: 0x60
	// Line 316, Address: 0x27403c, Func Offset: 0x6c
	// Line 317, Address: 0x274044, Func Offset: 0x74
	// Line 318, Address: 0x274060, Func Offset: 0x90
	// Line 319, Address: 0x27406c, Func Offset: 0x9c
	// Line 320, Address: 0x27408c, Func Offset: 0xbc
	// Line 323, Address: 0x274098, Func Offset: 0xc8
	// Line 324, Address: 0x2740a0, Func Offset: 0xd0
	// Line 326, Address: 0x2740a8, Func Offset: 0xd8
	// Line 327, Address: 0x2740bc, Func Offset: 0xec
	// Line 328, Address: 0x2740e8, Func Offset: 0x118
	// Line 329, Address: 0x2740ec, Func Offset: 0x11c
	// Line 331, Address: 0x2740f0, Func Offset: 0x120
	// Line 332, Address: 0x2740f8, Func Offset: 0x128
	// Line 334, Address: 0x274100, Func Offset: 0x130
	// Func End, Address: 0x27411c, Func Offset: 0x14c
}

// 
// Start address: 0x274120
void DemoEventEndRL045(sfObj* obj)
{
	// Line 343, Address: 0x274120, Func Offset: 0
	// Func End, Address: 0x274128, Func Offset: 0x8
}

// 
// Start address: 0x274130
void DemoEventDrawRL045(sfObj* obj)
{
	// Line 364, Address: 0x274130, Func Offset: 0
	// Func End, Address: 0x274138, Func Offset: 0x8
}

// 
// Start address: 0x274140
void DemoEventEndRL047()
{
	// Line 391, Address: 0x274140, Func Offset: 0
	// Func End, Address: 0x274148, Func Offset: 0x8
}

// 
// Start address: 0x274150
void DemoEventDrawRL047()
{
	int demo_length;
	int demo_frame;
	int noise_pow;
	// Line 395, Address: 0x274150, Func Offset: 0
	// Line 396, Address: 0x274160, Func Offset: 0x10
	// Line 397, Address: 0x274170, Func Offset: 0x20
	// Line 403, Address: 0x27417c, Func Offset: 0x2c
	// Line 397, Address: 0x274180, Func Offset: 0x30
	// Line 403, Address: 0x274184, Func Offset: 0x34
	// Line 405, Address: 0x274194, Func Offset: 0x44
	// Line 406, Address: 0x2741a8, Func Offset: 0x58
	// Line 407, Address: 0x2741b0, Func Offset: 0x60
	// Line 408, Address: 0x2741bc, Func Offset: 0x6c
	// Line 409, Address: 0x2741c4, Func Offset: 0x74
	// Line 412, Address: 0x2741c8, Func Offset: 0x78
	// Line 413, Address: 0x2741d8, Func Offset: 0x88
	// Line 415, Address: 0x2741e0, Func Offset: 0x90
	// Line 416, Address: 0x2741f0, Func Offset: 0xa0
	// Line 419, Address: 0x274228, Func Offset: 0xd8
	// Line 420, Address: 0x274238, Func Offset: 0xe8
	// Line 423, Address: 0x27424c, Func Offset: 0xfc
	// Line 424, Address: 0x274250, Func Offset: 0x100
	// Func End, Address: 0x274268, Func Offset: 0x118
}

// 
// Start address: 0x274270
void DemoEventInitRL050(sfObj* obj)
{
	// Line 512, Address: 0x274270, Func Offset: 0
	// Line 521, Address: 0x274280, Func Offset: 0x10
	// Line 522, Address: 0x27428c, Func Offset: 0x1c
	// Line 523, Address: 0x2742a8, Func Offset: 0x38
	// Line 525, Address: 0x2742c4, Func Offset: 0x54
	// Line 527, Address: 0x2742c8, Func Offset: 0x58
	// Line 528, Address: 0x2742d4, Func Offset: 0x64
	// Func End, Address: 0x2742e4, Func Offset: 0x74
}

// 
// Start address: 0x2742f0
void DemoEventExecRL050(sfObj* obj)
{
	float time;
	// Line 531, Address: 0x2742f0, Func Offset: 0
	// Line 532, Address: 0x2742f4, Func Offset: 0x4
	// Line 531, Address: 0x2742f8, Func Offset: 0x8
	// Line 532, Address: 0x274304, Func Offset: 0x14
	// Line 534, Address: 0x274314, Func Offset: 0x24
	// Line 535, Address: 0x274320, Func Offset: 0x30
	// Line 534, Address: 0x274324, Func Offset: 0x34
	// Line 535, Address: 0x274328, Func Offset: 0x38
	// Line 534, Address: 0x274334, Func Offset: 0x44
	// Line 535, Address: 0x274338, Func Offset: 0x48
	// Line 538, Address: 0x274340, Func Offset: 0x50
	// Line 539, Address: 0x274348, Func Offset: 0x58
	// Func End, Address: 0x274358, Func Offset: 0x68
}

// 
// Start address: 0x274360
void DemoEventDrawRL050()
{
	int a;
	// Line 542, Address: 0x274360, Func Offset: 0
	// Line 544, Address: 0x274364, Func Offset: 0x4
	// Line 542, Address: 0x274368, Func Offset: 0x8
	// Line 544, Address: 0x27436c, Func Offset: 0xc
	// Line 545, Address: 0x27438c, Func Offset: 0x2c
	// Line 546, Address: 0x274394, Func Offset: 0x34
	// Line 547, Address: 0x2743a8, Func Offset: 0x48
	// Line 548, Address: 0x2743b4, Func Offset: 0x54
	// Line 549, Address: 0x2743c0, Func Offset: 0x60
	// Line 550, Address: 0x2743c8, Func Offset: 0x68
	// Line 551, Address: 0x2743d0, Func Offset: 0x70
	// Line 552, Address: 0x2743d8, Func Offset: 0x78
	// Func End, Address: 0x2743e4, Func Offset: 0x84
}

// 
// Start address: 0x2743f0
void DemoEventExecRL058(sfObj* obj)
{
	short knock_time[27];
	// Line 607, Address: 0x2743f0, Func Offset: 0
	// Line 609, Address: 0x2743f4, Func Offset: 0x4
	// Line 607, Address: 0x2743f8, Func Offset: 0x8
	// Line 609, Address: 0x2743fc, Func Offset: 0xc
	// Line 607, Address: 0x274400, Func Offset: 0x10
	// Line 609, Address: 0x274404, Func Offset: 0x14
	// Line 613, Address: 0x27442c, Func Offset: 0x3c
	// Line 622, Address: 0x274438, Func Offset: 0x48
	// Line 623, Address: 0x274448, Func Offset: 0x58
	// Line 624, Address: 0x274458, Func Offset: 0x68
	// Line 625, Address: 0x27447c, Func Offset: 0x8c
	// Line 626, Address: 0x274484, Func Offset: 0x94
	// Line 627, Address: 0x274490, Func Offset: 0xa0
	// Line 630, Address: 0x274498, Func Offset: 0xa8
	// Line 631, Address: 0x2744ac, Func Offset: 0xbc
	// Line 632, Address: 0x2744d0, Func Offset: 0xe0
	// Line 633, Address: 0x2744d8, Func Offset: 0xe8
	// Line 634, Address: 0x2744e0, Func Offset: 0xf0
	// Line 637, Address: 0x2744ec, Func Offset: 0xfc
	// Line 638, Address: 0x2744f8, Func Offset: 0x108
	// Func End, Address: 0x274508, Func Offset: 0x118
}

// 
// Start address: 0x274510
void DemoEventExecRL059(sfObj* obj)
{
	short knock_time[35];
	// Line 652, Address: 0x274510, Func Offset: 0
	// Line 654, Address: 0x274514, Func Offset: 0x4
	// Line 652, Address: 0x274518, Func Offset: 0x8
	// Line 654, Address: 0x27451c, Func Offset: 0xc
	// Line 652, Address: 0x274520, Func Offset: 0x10
	// Line 654, Address: 0x274524, Func Offset: 0x14
	// Line 659, Address: 0x274554, Func Offset: 0x44
	// Line 661, Address: 0x274560, Func Offset: 0x50
	// Line 669, Address: 0x274570, Func Offset: 0x60
	// Line 670, Address: 0x274580, Func Offset: 0x70
	// Line 671, Address: 0x2745a4, Func Offset: 0x94
	// Line 672, Address: 0x2745ac, Func Offset: 0x9c
	// Line 673, Address: 0x2745b8, Func Offset: 0xa8
	// Line 676, Address: 0x2745c0, Func Offset: 0xb0
	// Line 677, Address: 0x2745d4, Func Offset: 0xc4
	// Line 678, Address: 0x2745f8, Func Offset: 0xe8
	// Line 679, Address: 0x274600, Func Offset: 0xf0
	// Line 680, Address: 0x274608, Func Offset: 0xf8
	// Line 683, Address: 0x274614, Func Offset: 0x104
	// Line 684, Address: 0x274620, Func Offset: 0x110
	// Func End, Address: 0x274630, Func Offset: 0x120
}

// 
// Start address: 0x274630
void demo_event_rl063_init(sfObj* obj)
{
	// Line 721, Address: 0x274630, Func Offset: 0
	// Func End, Address: 0x274638, Func Offset: 0x8
}

// 
// Start address: 0x274640
void demo_event_rl063_exec(sfObj* obj)
{
	// Line 729, Address: 0x274640, Func Offset: 0
	// Func End, Address: 0x274648, Func Offset: 0x8
}

// 
// Start address: 0x274650
void demo_event_rl074_init(sfObj* obj)
{
	// Line 755, Address: 0x274650, Func Offset: 0
	// Line 756, Address: 0x274654, Func Offset: 0x4
	// Line 755, Address: 0x274658, Func Offset: 0x8
	// Line 756, Address: 0x274664, Func Offset: 0x14
	// Line 757, Address: 0x274674, Func Offset: 0x24
	// Line 758, Address: 0x274680, Func Offset: 0x30
	// Line 761, Address: 0x274688, Func Offset: 0x38
	// Line 762, Address: 0x274690, Func Offset: 0x40
	// Func End, Address: 0x2746a0, Func Offset: 0x50
}

// 
// Start address: 0x2746a0
void DemoEventInitRL150(sfObj* obj)
{
	// Line 895, Address: 0x2746a0, Func Offset: 0
	// Line 896, Address: 0x2746ac, Func Offset: 0xc
	// Line 898, Address: 0x2746b4, Func Offset: 0x14
	// Line 899, Address: 0x2746e4, Func Offset: 0x44
	// Line 900, Address: 0x2746e8, Func Offset: 0x48
	// Line 901, Address: 0x2746f0, Func Offset: 0x50
	// Line 903, Address: 0x2746f8, Func Offset: 0x58
	// Line 904, Address: 0x274700, Func Offset: 0x60
	// Line 906, Address: 0x274708, Func Offset: 0x68
	// Line 909, Address: 0x274710, Func Offset: 0x70
	// Func End, Address: 0x274720, Func Offset: 0x80
}

// 
// Start address: 0x274720
void DemoEventInitRL066()
{
	float rot[4];
	// Line 921, Address: 0x274720, Func Offset: 0
	// Line 924, Address: 0x274724, Func Offset: 0x4
	// Line 921, Address: 0x274728, Func Offset: 0x8
	// Line 924, Address: 0x27472c, Func Offset: 0xc
	// Line 939, Address: 0x274738, Func Offset: 0x18
	// Line 924, Address: 0x274750, Func Offset: 0x30
	// Line 939, Address: 0x274754, Func Offset: 0x34
	// Line 941, Address: 0x27475c, Func Offset: 0x3c
	// Line 942, Address: 0x274764, Func Offset: 0x44
	// Func End, Address: 0x274770, Func Offset: 0x50
}

// 
// Start address: 0x274770
void DemoEventInitRL060()
{
	// Line 967, Address: 0x274770, Func Offset: 0
	// Func End, Address: 0x274778, Func Offset: 0x8
}

