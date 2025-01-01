typedef struct _anon0;
typedef struct sfObj;
typedef struct sgAnime;
typedef struct sgBone;
typedef struct sgIKHandle;
typedef struct _anon1;
typedef struct _EventInst;
typedef struct sfCharacter;
typedef struct _anon2;
typedef union _anon3;
typedef struct _anon4;
typedef struct _EventDriver;
typedef enum sgIKSolveResult : unsigned char;
typedef struct EventFlag;
typedef struct _anon5;
typedef struct sgSVModel;

typedef void(*type_0)(_anon0*, int, int, float*);
typedef void(*type_3)(sfObj*);
typedef void(*type_5)(sgAnime*, int);
typedef void(*type_6)(sfObj*);
typedef void(*type_11)(sfObj*);
typedef void(*type_12)(sfObj*);
typedef void(*type_13)(sfObj*);
typedef int(*type_20)(sfObj*);
typedef int(*type_22)(sfObj*);
typedef int(*type_24)(sfObj*);
typedef int(*type_26)(sfObj*);
typedef int(*type_28)(sfObj*);
typedef sgIKSolveResult(*type_30)();
typedef int(*type_32)(sfObj*);
typedef int(*type_33)(sfObj*);

typedef float type_1[4];
typedef float type_2[4][4];
typedef void* type_4[4];
typedef unsigned char type_7[4];
typedef unsigned int type_8[3];
typedef unsigned int type_9[5];
typedef _anon3 type_10[256];
typedef short type_14[2];
typedef sfCharacter type_15[2];
typedef unsigned short type_16[2];
typedef char type_17[4];
typedef unsigned char type_18[4];
typedef float type_19[1];
typedef int type_21[1];
typedef float type_23[4];
typedef float type_25[4][2];
typedef unsigned char type_27[320];
typedef float type_29[4];
typedef _anon3 type_31[4];

struct _anon0
{
	unsigned long tex0;
	unsigned long clamp;
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

struct _anon1
{
	sfObj* child_obj;
	int half_demo_start;
	int child_delete_flag;
	int demo_id;
};

struct _EventInst
{
	_EventDriver evdrv;
	unsigned int attr;
	int(*drawaf)(sfObj*);
	int(*endexitf)(sfObj*);
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

struct _anon2
{
	sfCharacter chara;
	float child_alpha;
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

struct _anon4
{
	sfCharacter chara[2];
	int half_demo_start;
	int speeching;
	int demo_id;
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

struct EventFlag
{
	unsigned char flag[320];
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

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
};

unsigned int ev_home0_ie24_040_file[5];
_EventDriver ev_home0_ie24_040;
unsigned short KILLER_EVENT_flag;
_EventDriver ev_home0_ie01_killer;
EventFlag event_flag;
_EventDriver ev_home0_ie01_041;
_EventDriver ev_home0_bell;
unsigned int ev_home0_ie20_042_file[3];
_EventDriver ev_home0_ie20_042;
void(*sfObjFuncDummy)(sfObj*);
void(*ie24_reset_transparency)(sfObj*);
void(*ie24_set_transparency)(sfObj*);
_EventDriver ev_home0_ie24_2281;

int ev_home0_ie24_040_end(sfObj* obj);
void ev_home0_ie01_killer_update();
int ev_home0_ie01_killer_init(sfObj* obj);
int ev_home0_ie01_041_trg_chk(sfObj* obj);
int ev_home0_ie01_041_init(sfObj* obj);
int ev_home0_ie01_041_exec(sfObj* obj);
int ev_home0_ie01_041_draw(sfObj* obj);
int ev_home0_ie01_041_end(sfObj* obj);
int ev_home0_ie20_042_end(sfObj* obj);
void ie24_set_transparency(sfObj* obj);
void ie24_reset_transparency();
int ev_home0_ie24_2281_trg();
int ev_home0_ie24_2281_init(sfObj* obj);
int ev_home0_ie24_2281_exec(sfObj* obj);
int ev_home0_ie24_2281_end(sfObj* obj);

// 
// Start address: 0x1ed5dd0
int ev_home0_ie24_040_end(sfObj* obj)
{
	// Line 78, Address: 0x1ed5dd0, Func Offset: 0
	// Line 80, Address: 0x1ed5ddc, Func Offset: 0xc
	// Line 82, Address: 0x1ed5de4, Func Offset: 0x14
	// Line 83, Address: 0x1ed5dec, Func Offset: 0x1c
	// Func End, Address: 0x1ed5dfc, Func Offset: 0x2c
}

// 
// Start address: 0x1ed5e00
void ev_home0_ie01_killer_update()
{
	// Line 119, Address: 0x1ed5e00, Func Offset: 0
	// Line 120, Address: 0x1ed5e04, Func Offset: 0x4
	// Func End, Address: 0x1ed5e0c, Func Offset: 0xc
}

// 
// Start address: 0x1ed5e10
int ev_home0_ie01_killer_init(sfObj* obj)
{
	_EventInst* evinst;
	// Line 123, Address: 0x1ed5e10, Func Offset: 0
	// Line 125, Address: 0x1ed5e18, Func Offset: 0x8
	// Line 127, Address: 0x1ed5e20, Func Offset: 0x10
	// Line 128, Address: 0x1ed5e34, Func Offset: 0x24
	// Line 129, Address: 0x1ed5e48, Func Offset: 0x38
	// Line 135, Address: 0x1ed5e50, Func Offset: 0x40
	// Line 132, Address: 0x1ed5e54, Func Offset: 0x44
	// Line 135, Address: 0x1ed5e58, Func Offset: 0x48
	// Line 132, Address: 0x1ed5e5c, Func Offset: 0x4c
	// Line 135, Address: 0x1ed5e68, Func Offset: 0x58
	// Line 138, Address: 0x1ed5e70, Func Offset: 0x60
	// Line 137, Address: 0x1ed5e74, Func Offset: 0x64
	// Line 138, Address: 0x1ed5e78, Func Offset: 0x68
	// Func End, Address: 0x1ed5e80, Func Offset: 0x70
	// Line 796, Address: 0x1ed5e10, Func Offset: 0
	// Line 797, Address: 0x1ed5e18, Func Offset: 0x8
	// Line 799, Address: 0x1ed5e20, Func Offset: 0x10
	// Line 798, Address: 0x1ed5e24, Func Offset: 0x14
	// Line 799, Address: 0x1ed5e28, Func Offset: 0x18
	// Func End, Address: 0x1ed5e30, Func Offset: 0x20
}

// 
// Start address: 0x1ed5e80
int ev_home0_ie01_041_trg_chk(sfObj* obj)
{
	// Line 161, Address: 0x1ed5e80, Func Offset: 0
	// Line 162, Address: 0x1ed5e84, Func Offset: 0x4
	// Line 161, Address: 0x1ed5e88, Func Offset: 0x8
	// Line 162, Address: 0x1ed5e8c, Func Offset: 0xc
	// Line 166, Address: 0x1ed5eac, Func Offset: 0x2c
	// Line 167, Address: 0x1ed5ebc, Func Offset: 0x3c
	// Line 168, Address: 0x1ed5ec0, Func Offset: 0x40
	// Line 170, Address: 0x1ed5ec8, Func Offset: 0x48
	// Func End, Address: 0x1ed5ed4, Func Offset: 0x54
}

// 
// Start address: 0x1ed5ee0
int ev_home0_ie01_041_init(sfObj* obj)
{
	// Line 996, Address: 0x1ed5ee0, Func Offset: 0
	// Line 997, Address: 0x1ed5ee4, Func Offset: 0x4
	// Line 996, Address: 0x1ed5ee8, Func Offset: 0x8
	// Line 997, Address: 0x1ed5f00, Func Offset: 0x20
	// Line 998, Address: 0x1ed5f08, Func Offset: 0x28
	// Line 999, Address: 0x1ed5f24, Func Offset: 0x44
	// Line 1000, Address: 0x1ed5f34, Func Offset: 0x54
	// Line 1002, Address: 0x1ed5f4c, Func Offset: 0x6c
	// Line 1003, Address: 0x1ed5f5c, Func Offset: 0x7c
	// Line 1004, Address: 0x1ed5f78, Func Offset: 0x98
	// Line 1005, Address: 0x1ed5f88, Func Offset: 0xa8
	// Line 1006, Address: 0x1ed5fa4, Func Offset: 0xc4
	// Func End, Address: 0x1ed5fbc, Func Offset: 0xdc
	// Line 173, Address: 0x1ed5ee0, Func Offset: 0
	// Line 174, Address: 0x1ed5ee4, Func Offset: 0x4
	// Line 173, Address: 0x1ed5ee8, Func Offset: 0x8
	// Line 174, Address: 0x1ed5ef0, Func Offset: 0x10
	// Line 178, Address: 0x1ed5efc, Func Offset: 0x1c
	// Line 177, Address: 0x1ed5f00, Func Offset: 0x20
	// Line 178, Address: 0x1ed5f04, Func Offset: 0x24
	// Func End, Address: 0x1ed5f10, Func Offset: 0x30
	// Line 826, Address: 0x1ed5ee0, Func Offset: 0
	// Line 828, Address: 0x1ed5ee4, Func Offset: 0x4
	// Line 826, Address: 0x1ed5ee8, Func Offset: 0x8
	// Line 828, Address: 0x1ed5ef4, Func Offset: 0x14
	// Line 829, Address: 0x1ed5efc, Func Offset: 0x1c
	// Line 830, Address: 0x1ed5f28, Func Offset: 0x48
	// Line 832, Address: 0x1ed5f30, Func Offset: 0x50
	// Line 831, Address: 0x1ed5f34, Func Offset: 0x54
	// Line 832, Address: 0x1ed5f38, Func Offset: 0x58
	// Func End, Address: 0x1ed5f44, Func Offset: 0x64
}

// 
// Start address: 0x1ed5f10
int ev_home0_ie01_041_exec(sfObj* obj)
{
	_anon4* wk;
	float hitpos[4];
	// Line 236, Address: 0x1ed5f10, Func Offset: 0
	// Line 237, Address: 0x1ed5f1c, Func Offset: 0xc
	// Line 240, Address: 0x1ed5f24, Func Offset: 0x14
	// Line 241, Address: 0x1ed5f34, Func Offset: 0x24
	// Line 243, Address: 0x1ed5f3c, Func Offset: 0x2c
	// Line 244, Address: 0x1ed5f40, Func Offset: 0x30
	// Func End, Address: 0x1ed5f4c, Func Offset: 0x3c
	// Line 181, Address: 0x1ed5f10, Func Offset: 0
	// Line 184, Address: 0x1ed5f14, Func Offset: 0x4
	// Line 181, Address: 0x1ed5f18, Func Offset: 0x8
	// Line 184, Address: 0x1ed5f1c, Func Offset: 0xc
	// Line 181, Address: 0x1ed5f20, Func Offset: 0x10
	// Line 184, Address: 0x1ed5f24, Func Offset: 0x14
	// Line 181, Address: 0x1ed5f28, Func Offset: 0x18
	// Line 186, Address: 0x1ed5f2c, Func Offset: 0x1c
	// Line 181, Address: 0x1ed5f30, Func Offset: 0x20
	// Line 183, Address: 0x1ed5f34, Func Offset: 0x24
	// Line 184, Address: 0x1ed5f38, Func Offset: 0x28
	// Line 186, Address: 0x1ed5f40, Func Offset: 0x30
	// Line 187, Address: 0x1ed5f5c, Func Offset: 0x4c
	// Line 188, Address: 0x1ed5f60, Func Offset: 0x50
	// Line 189, Address: 0x1ed5f68, Func Offset: 0x58
	// Line 190, Address: 0x1ed5f70, Func Offset: 0x60
	// Line 191, Address: 0x1ed5f7c, Func Offset: 0x6c
	// Line 192, Address: 0x1ed5f88, Func Offset: 0x78
	// Line 194, Address: 0x1ed5f9c, Func Offset: 0x8c
	// Line 197, Address: 0x1ed5fc8, Func Offset: 0xb8
	// Line 199, Address: 0x1ed5fe0, Func Offset: 0xd0
	// Line 200, Address: 0x1ed5fec, Func Offset: 0xdc
	// Line 201, Address: 0x1ed5ff8, Func Offset: 0xe8
	// Line 204, Address: 0x1ed6024, Func Offset: 0x114
	// Line 205, Address: 0x1ed6030, Func Offset: 0x120
	// Line 206, Address: 0x1ed6038, Func Offset: 0x128
	// Line 208, Address: 0x1ed6040, Func Offset: 0x130
	// Line 209, Address: 0x1ed6054, Func Offset: 0x144
	// Line 210, Address: 0x1ed6060, Func Offset: 0x150
	// Line 214, Address: 0x1ed6070, Func Offset: 0x160
	// Line 215, Address: 0x1ed6078, Func Offset: 0x168
	// Line 216, Address: 0x1ed6080, Func Offset: 0x170
	// Line 217, Address: 0x1ed6088, Func Offset: 0x178
	// Line 218, Address: 0x1ed6094, Func Offset: 0x184
	// Line 220, Address: 0x1ed60a0, Func Offset: 0x190
	// Line 221, Address: 0x1ed60b0, Func Offset: 0x1a0
	// Line 226, Address: 0x1ed60cc, Func Offset: 0x1bc
	// Line 227, Address: 0x1ed60d4, Func Offset: 0x1c4
	// Line 228, Address: 0x1ed60dc, Func Offset: 0x1cc
	// Line 229, Address: 0x1ed60e4, Func Offset: 0x1d4
	// Line 230, Address: 0x1ed60f0, Func Offset: 0x1e0
	// Line 233, Address: 0x1ed60fc, Func Offset: 0x1ec
	// Line 235, Address: 0x1ed6100, Func Offset: 0x1f0
	// Line 237, Address: 0x1ed6110, Func Offset: 0x200
	// Line 238, Address: 0x1ed6120, Func Offset: 0x210
	// Line 239, Address: 0x1ed6128, Func Offset: 0x218
	// Line 240, Address: 0x1ed6134, Func Offset: 0x224
	// Line 241, Address: 0x1ed6140, Func Offset: 0x230
	// Line 242, Address: 0x1ed6148, Func Offset: 0x238
	// Line 243, Address: 0x1ed6150, Func Offset: 0x240
	// Line 244, Address: 0x1ed615c, Func Offset: 0x24c
	// Line 245, Address: 0x1ed6164, Func Offset: 0x254
	// Line 244, Address: 0x1ed6168, Func Offset: 0x258
	// Line 245, Address: 0x1ed616c, Func Offset: 0x25c
	// Line 244, Address: 0x1ed6170, Func Offset: 0x260
	// Line 245, Address: 0x1ed6174, Func Offset: 0x264
	// Line 244, Address: 0x1ed6178, Func Offset: 0x268
	// Line 245, Address: 0x1ed617c, Func Offset: 0x26c
	// Line 246, Address: 0x1ed6184, Func Offset: 0x274
	// Line 247, Address: 0x1ed6188, Func Offset: 0x278
	// Line 248, Address: 0x1ed6190, Func Offset: 0x280
	// Line 249, Address: 0x1ed6194, Func Offset: 0x284
	// Line 250, Address: 0x1ed6198, Func Offset: 0x288
	// Line 252, Address: 0x1ed61a8, Func Offset: 0x298
	// Line 259, Address: 0x1ed61b0, Func Offset: 0x2a0
	// Line 260, Address: 0x1ed61bc, Func Offset: 0x2ac
	// Line 263, Address: 0x1ed61d0, Func Offset: 0x2c0
	// Line 266, Address: 0x1ed61d8, Func Offset: 0x2c8
	// Line 265, Address: 0x1ed61dc, Func Offset: 0x2cc
	// Line 266, Address: 0x1ed61e0, Func Offset: 0x2d0
	// Func End, Address: 0x1ed61f4, Func Offset: 0x2e4
}

// 
// Start address: 0x1ed6200
int ev_home0_ie01_041_draw(sfObj* obj)
{
	_anon4* wk;
	// Line 1054, Address: 0x1ed6200, Func Offset: 0
	// Line 1055, Address: 0x1ed621c, Func Offset: 0x1c
	// Line 1056, Address: 0x1ed6224, Func Offset: 0x24
	// Line 1057, Address: 0x1ed6238, Func Offset: 0x38
	// Line 1060, Address: 0x1ed624c, Func Offset: 0x4c
	// Line 1061, Address: 0x1ed6264, Func Offset: 0x64
	// Line 1063, Address: 0x1ed6278, Func Offset: 0x78
	// Line 1064, Address: 0x1ed6288, Func Offset: 0x88
	// Line 1069, Address: 0x1ed62c8, Func Offset: 0xc8
	// Line 1072, Address: 0x1ed62e0, Func Offset: 0xe0
	// Line 1073, Address: 0x1ed62ec, Func Offset: 0xec
	// Line 1074, Address: 0x1ed62fc, Func Offset: 0xfc
	// Line 1075, Address: 0x1ed6300, Func Offset: 0x100
	// Func End, Address: 0x1ed631c, Func Offset: 0x11c
	// Line 1132, Address: 0x1ed6200, Func Offset: 0
	// Line 1133, Address: 0x1ed6204, Func Offset: 0x4
	// Line 1132, Address: 0x1ed6208, Func Offset: 0x8
	// Line 1133, Address: 0x1ed620c, Func Offset: 0xc
	// Line 1132, Address: 0x1ed6210, Func Offset: 0x10
	// Line 1133, Address: 0x1ed6214, Func Offset: 0x14
	// Line 1134, Address: 0x1ed6220, Func Offset: 0x20
	// Line 1136, Address: 0x1ed6230, Func Offset: 0x30
	// Line 1137, Address: 0x1ed623c, Func Offset: 0x3c
	// Func End, Address: 0x1ed624c, Func Offset: 0x4c
	// Line 269, Address: 0x1ed6200, Func Offset: 0
	// Line 270, Address: 0x1ed620c, Func Offset: 0xc
	// Line 272, Address: 0x1ed6210, Func Offset: 0x10
	// Line 273, Address: 0x1ed621c, Func Offset: 0x1c
	// Line 274, Address: 0x1ed6224, Func Offset: 0x24
	// Line 275, Address: 0x1ed6234, Func Offset: 0x34
	// Line 276, Address: 0x1ed6244, Func Offset: 0x44
	// Line 277, Address: 0x1ed624c, Func Offset: 0x4c
	// Line 278, Address: 0x1ed6254, Func Offset: 0x54
	// Line 279, Address: 0x1ed6268, Func Offset: 0x68
	// Line 280, Address: 0x1ed627c, Func Offset: 0x7c
	// Line 285, Address: 0x1ed6284, Func Offset: 0x84
	// Line 287, Address: 0x1ed6288, Func Offset: 0x88
	// Line 286, Address: 0x1ed6290, Func Offset: 0x90
	// Line 287, Address: 0x1ed6294, Func Offset: 0x94
	// Func End, Address: 0x1ed629c, Func Offset: 0x9c
}

// 
// Start address: 0x1ed62a0
int ev_home0_ie01_041_end(sfObj* obj)
{
	_anon4* wk;
	// Line 1968, Address: 0x1ed62a0, Func Offset: 0
	// Line 1970, Address: 0x1ed62a4, Func Offset: 0x4
	// Line 1968, Address: 0x1ed62a8, Func Offset: 0x8
	// Line 1970, Address: 0x1ed62ac, Func Offset: 0xc
	// Line 1968, Address: 0x1ed62b0, Func Offset: 0x10
	// Line 1970, Address: 0x1ed62b4, Func Offset: 0x14
	// Line 1968, Address: 0x1ed62b8, Func Offset: 0x18
	// Line 1974, Address: 0x1ed62bc, Func Offset: 0x1c
	// Line 1968, Address: 0x1ed62c0, Func Offset: 0x20
	// Line 1974, Address: 0x1ed62c4, Func Offset: 0x24
	// Line 1969, Address: 0x1ed62c8, Func Offset: 0x28
	// Line 1970, Address: 0x1ed62cc, Func Offset: 0x2c
	// Line 1974, Address: 0x1ed62d0, Func Offset: 0x30
	// Line 1970, Address: 0x1ed62d8, Func Offset: 0x38
	// Line 1974, Address: 0x1ed62dc, Func Offset: 0x3c
	// Line 1981, Address: 0x1ed62e0, Func Offset: 0x40
	// Line 1974, Address: 0x1ed62e4, Func Offset: 0x44
	// Line 1981, Address: 0x1ed62ec, Func Offset: 0x4c
	// Line 1982, Address: 0x1ed62f4, Func Offset: 0x54
	// Line 1983, Address: 0x1ed630c, Func Offset: 0x6c
	// Line 1984, Address: 0x1ed6318, Func Offset: 0x78
	// Line 1983, Address: 0x1ed631c, Func Offset: 0x7c
	// Line 1984, Address: 0x1ed6320, Func Offset: 0x80
	// Line 1983, Address: 0x1ed6324, Func Offset: 0x84
	// Line 1985, Address: 0x1ed633c, Func Offset: 0x9c
	// Line 1986, Address: 0x1ed6348, Func Offset: 0xa8
	// Line 1987, Address: 0x1ed6354, Func Offset: 0xb4
	// Line 1988, Address: 0x1ed636c, Func Offset: 0xcc
	// Line 1989, Address: 0x1ed6378, Func Offset: 0xd8
	// Line 1988, Address: 0x1ed637c, Func Offset: 0xdc
	// Line 1989, Address: 0x1ed6380, Func Offset: 0xe0
	// Line 1988, Address: 0x1ed6384, Func Offset: 0xe4
	// Line 1989, Address: 0x1ed639c, Func Offset: 0xfc
	// Line 1993, Address: 0x1ed63a0, Func Offset: 0x100
	// Line 1996, Address: 0x1ed63b8, Func Offset: 0x118
	// Line 1999, Address: 0x1ed63c4, Func Offset: 0x124
	// Line 1998, Address: 0x1ed63c8, Func Offset: 0x128
	// Line 2000, Address: 0x1ed63cc, Func Offset: 0x12c
	// Line 2003, Address: 0x1ed63d8, Func Offset: 0x138
	// Line 2004, Address: 0x1ed63e0, Func Offset: 0x140
	// Line 2008, Address: 0x1ed63e8, Func Offset: 0x148
	// Line 2009, Address: 0x1ed6400, Func Offset: 0x160
	// Func End, Address: 0x1ed6418, Func Offset: 0x178
	// Line 290, Address: 0x1ed62a0, Func Offset: 0
	// Line 291, Address: 0x1ed62ac, Func Offset: 0xc
	// Line 293, Address: 0x1ed62b0, Func Offset: 0x10
	// Line 294, Address: 0x1ed62b8, Func Offset: 0x18
	// Line 295, Address: 0x1ed62c0, Func Offset: 0x20
	// Line 296, Address: 0x1ed62d4, Func Offset: 0x34
	// Line 298, Address: 0x1ed62d8, Func Offset: 0x38
	// Line 296, Address: 0x1ed62dc, Func Offset: 0x3c
	// Line 298, Address: 0x1ed62e0, Func Offset: 0x40
	// Line 296, Address: 0x1ed62e4, Func Offset: 0x44
	// Line 298, Address: 0x1ed62e8, Func Offset: 0x48
	// Line 296, Address: 0x1ed62ec, Func Offset: 0x4c
	// Line 298, Address: 0x1ed62f0, Func Offset: 0x50
	// Line 297, Address: 0x1ed62f8, Func Offset: 0x58
	// Line 299, Address: 0x1ed630c, Func Offset: 0x6c
	// Line 300, Address: 0x1ed6310, Func Offset: 0x70
	// Line 302, Address: 0x1ed6318, Func Offset: 0x78
	// Line 303, Address: 0x1ed6320, Func Offset: 0x80
	// Line 306, Address: 0x1ed6328, Func Offset: 0x88
	// Line 305, Address: 0x1ed632c, Func Offset: 0x8c
	// Line 306, Address: 0x1ed6330, Func Offset: 0x90
	// Func End, Address: 0x1ed633c, Func Offset: 0x9c
	// Line 946, Address: 0x1ed62a0, Func Offset: 0
	// Line 948, Address: 0x1ed62a4, Func Offset: 0x4
	// Line 946, Address: 0x1ed62a8, Func Offset: 0x8
	// Line 948, Address: 0x1ed62ac, Func Offset: 0xc
	// Line 949, Address: 0x1ed62b4, Func Offset: 0x14
	// Line 950, Address: 0x1ed62e0, Func Offset: 0x40
	// Line 951, Address: 0x1ed6300, Func Offset: 0x60
	// Func End, Address: 0x1ed630c, Func Offset: 0x6c
}

// 
// Start address: 0x1ed6340
int ev_home0_ie20_042_end(sfObj* obj)
{
	// Line 345, Address: 0x1ed6340, Func Offset: 0
	// Line 348, Address: 0x1ed634c, Func Offset: 0xc
	// Line 351, Address: 0x1ed6380, Func Offset: 0x40
	// Line 352, Address: 0x1ed6384, Func Offset: 0x44
	// Line 354, Address: 0x1ed6388, Func Offset: 0x48
	// Line 355, Address: 0x1ed638c, Func Offset: 0x4c
	// Func End, Address: 0x1ed639c, Func Offset: 0x5c
	// Line 393, Address: 0x1ed6340, Func Offset: 0
	// Line 394, Address: 0x1ed6348, Func Offset: 0x8
	// Line 398, Address: 0x1ed6350, Func Offset: 0x10
	// Line 400, Address: 0x1ed635c, Func Offset: 0x1c
	// Line 403, Address: 0x1ed6364, Func Offset: 0x24
	// Line 402, Address: 0x1ed6368, Func Offset: 0x28
	// Line 403, Address: 0x1ed636c, Func Offset: 0x2c
	// Func End, Address: 0x1ed6374, Func Offset: 0x34
}

// 
// Start address: 0x1ed6380
void ie24_set_transparency(sfObj* obj)
{
	_anon2* wk;
	int a;
	// Line 433, Address: 0x1ed6380, Func Offset: 0
	// Line 437, Address: 0x1ed6384, Func Offset: 0x4
	// Line 433, Address: 0x1ed6388, Func Offset: 0x8
	// Line 437, Address: 0x1ed638c, Func Offset: 0xc
	// Line 434, Address: 0x1ed6390, Func Offset: 0x10
	// Line 437, Address: 0x1ed6394, Func Offset: 0x14
	// Line 438, Address: 0x1ed63a0, Func Offset: 0x20
	// Line 437, Address: 0x1ed63a4, Func Offset: 0x24
	// Line 438, Address: 0x1ed63a8, Func Offset: 0x28
	// Line 439, Address: 0x1ed63cc, Func Offset: 0x4c
	// Line 440, Address: 0x1ed63e0, Func Offset: 0x60
	// Line 441, Address: 0x1ed63ec, Func Offset: 0x6c
	// Func End, Address: 0x1ed63f8, Func Offset: 0x78
}

// 
// Start address: 0x1ed6400
void ie24_reset_transparency()
{
	// Line 142, Address: 0x1ed6400, Func Offset: 0
	// Line 145, Address: 0x1ed6408, Func Offset: 0x8
	// Line 147, Address: 0x1ed6414, Func Offset: 0x14
	// Line 148, Address: 0x1ed641c, Func Offset: 0x1c
	// Line 149, Address: 0x1ed6438, Func Offset: 0x38
	// Line 152, Address: 0x1ed6440, Func Offset: 0x40
	// Line 153, Address: 0x1ed6444, Func Offset: 0x44
	// Func End, Address: 0x1ed6454, Func Offset: 0x54
	// Line 444, Address: 0x1ed6400, Func Offset: 0
	// Line 445, Address: 0x1ed6408, Func Offset: 0x8
	// Line 446, Address: 0x1ed6410, Func Offset: 0x10
	// Line 447, Address: 0x1ed6418, Func Offset: 0x18
	// Func End, Address: 0x1ed6424, Func Offset: 0x24
}

// 
// Start address: 0x1ed6430
int ev_home0_ie24_2281_trg()
{
	// Line 458, Address: 0x1ed6430, Func Offset: 0
	// Line 460, Address: 0x1ed6468, Func Offset: 0x38
	// Line 461, Address: 0x1ed6470, Func Offset: 0x40
	// Line 462, Address: 0x1ed6478, Func Offset: 0x48
	// Func End, Address: 0x1ed6480, Func Offset: 0x50
	// Line 1468, Address: 0x1ed6430, Func Offset: 0
	// Line 1475, Address: 0x1ed6434, Func Offset: 0x4
	// Line 1468, Address: 0x1ed6438, Func Offset: 0x8
	// Line 1475, Address: 0x1ed6440, Func Offset: 0x10
	// Line 1476, Address: 0x1ed6450, Func Offset: 0x20
	// Line 1486, Address: 0x1ed6458, Func Offset: 0x28
	// Line 1487, Address: 0x1ed6470, Func Offset: 0x40
	// Line 1489, Address: 0x1ed6488, Func Offset: 0x58
	// Line 1490, Address: 0x1ed64a0, Func Offset: 0x70
	// Line 1491, Address: 0x1ed64a8, Func Offset: 0x78
	// Line 1493, Address: 0x1ed64ac, Func Offset: 0x7c
	// Line 1496, Address: 0x1ed64bc, Func Offset: 0x8c
	// Line 1499, Address: 0x1ed64c0, Func Offset: 0x90
	// Line 1498, Address: 0x1ed64c8, Func Offset: 0x98
	// Line 1499, Address: 0x1ed64cc, Func Offset: 0x9c
	// Func End, Address: 0x1ed64d4, Func Offset: 0xa4
}

// 
// Start address: 0x1ed6480
int ev_home0_ie24_2281_init(sfObj* obj)
{
	_anon1* wk;
	// Line 465, Address: 0x1ed6480, Func Offset: 0
	// Line 467, Address: 0x1ed6484, Func Offset: 0x4
	// Line 465, Address: 0x1ed6488, Func Offset: 0x8
	// Line 467, Address: 0x1ed6490, Func Offset: 0x10
	// Line 470, Address: 0x1ed649c, Func Offset: 0x1c
	// Line 471, Address: 0x1ed64a8, Func Offset: 0x28
	// Line 472, Address: 0x1ed64b8, Func Offset: 0x38
	// Line 476, Address: 0x1ed64cc, Func Offset: 0x4c
	// Line 475, Address: 0x1ed64d0, Func Offset: 0x50
	// Line 476, Address: 0x1ed64d4, Func Offset: 0x54
	// Func End, Address: 0x1ed64e0, Func Offset: 0x60
}

// 
// Start address: 0x1ed64e0
int ev_home0_ie24_2281_exec(sfObj* obj)
{
	int rtv;
	_anon1* wk;
	sfObj* child_obj;
	_anon2* child_wk;
	sfCharacter* chara;
	float childpos[4];
	float base_pos[4];
	float pos[4];
	float length;
	float vol;
	// Line 480, Address: 0x1ed64e0, Func Offset: 0
	// Line 486, Address: 0x1ed64e4, Func Offset: 0x4
	// Line 480, Address: 0x1ed64e8, Func Offset: 0x8
	// Line 486, Address: 0x1ed64ec, Func Offset: 0xc
	// Line 480, Address: 0x1ed64f0, Func Offset: 0x10
	// Line 486, Address: 0x1ed64f4, Func Offset: 0x14
	// Line 480, Address: 0x1ed64f8, Func Offset: 0x18
	// Line 482, Address: 0x1ed650c, Func Offset: 0x2c
	// Line 486, Address: 0x1ed6510, Func Offset: 0x30
	// Line 483, Address: 0x1ed6514, Func Offset: 0x34
	// Line 491, Address: 0x1ed6518, Func Offset: 0x38
	// Line 484, Address: 0x1ed651c, Func Offset: 0x3c
	// Line 486, Address: 0x1ed6520, Func Offset: 0x40
	// Line 491, Address: 0x1ed6524, Func Offset: 0x44
	// Line 492, Address: 0x1ed654c, Func Offset: 0x6c
	// Line 493, Address: 0x1ed6550, Func Offset: 0x70
	// Line 494, Address: 0x1ed6558, Func Offset: 0x78
	// Line 495, Address: 0x1ed6560, Func Offset: 0x80
	// Line 497, Address: 0x1ed656c, Func Offset: 0x8c
	// Line 500, Address: 0x1ed6598, Func Offset: 0xb8
	// Line 501, Address: 0x1ed65a4, Func Offset: 0xc4
	// Line 502, Address: 0x1ed65b0, Func Offset: 0xd0
	// Line 503, Address: 0x1ed65bc, Func Offset: 0xdc
	// Line 504, Address: 0x1ed65c8, Func Offset: 0xe8
	// Line 505, Address: 0x1ed65d0, Func Offset: 0xf0
	// Line 506, Address: 0x1ed65d8, Func Offset: 0xf8
	// Line 508, Address: 0x1ed65e0, Func Offset: 0x100
	// Line 509, Address: 0x1ed65f0, Func Offset: 0x110
	// Line 510, Address: 0x1ed65f8, Func Offset: 0x118
	// Line 511, Address: 0x1ed6600, Func Offset: 0x120
	// Line 512, Address: 0x1ed660c, Func Offset: 0x12c
	// Line 513, Address: 0x1ed6610, Func Offset: 0x130
	// Line 514, Address: 0x1ed6620, Func Offset: 0x140
	// Line 516, Address: 0x1ed6628, Func Offset: 0x148
	// Line 517, Address: 0x1ed663c, Func Offset: 0x15c
	// Line 518, Address: 0x1ed665c, Func Offset: 0x17c
	// Line 519, Address: 0x1ed6684, Func Offset: 0x1a4
	// Line 520, Address: 0x1ed66a8, Func Offset: 0x1c8
	// Line 521, Address: 0x1ed66ac, Func Offset: 0x1cc
	// Line 522, Address: 0x1ed66b0, Func Offset: 0x1d0
	// Line 523, Address: 0x1ed66c8, Func Offset: 0x1e8
	// Line 524, Address: 0x1ed66d0, Func Offset: 0x1f0
	// Line 525, Address: 0x1ed66dc, Func Offset: 0x1fc
	// Line 526, Address: 0x1ed66e0, Func Offset: 0x200
	// Line 527, Address: 0x1ed6704, Func Offset: 0x224
	// Line 528, Address: 0x1ed672c, Func Offset: 0x24c
	// Line 529, Address: 0x1ed6748, Func Offset: 0x268
	// Line 530, Address: 0x1ed6758, Func Offset: 0x278
	// Line 532, Address: 0x1ed6768, Func Offset: 0x288
	// Line 534, Address: 0x1ed6774, Func Offset: 0x294
	// Line 535, Address: 0x1ed6788, Func Offset: 0x2a8
	// Line 536, Address: 0x1ed6794, Func Offset: 0x2b4
	// Line 543, Address: 0x1ed679c, Func Offset: 0x2bc
	// Line 545, Address: 0x1ed67a0, Func Offset: 0x2c0
	// Line 546, Address: 0x1ed67a4, Func Offset: 0x2c4
	// Func End, Address: 0x1ed67c4, Func Offset: 0x2e4
	// Line 1501, Address: 0x1ed64e0, Func Offset: 0
	// Line 1515, Address: 0x1ed64e4, Func Offset: 0x4
	// Line 1501, Address: 0x1ed64e8, Func Offset: 0x8
	// Line 1515, Address: 0x1ed64ec, Func Offset: 0xc
	// Line 1501, Address: 0x1ed64f0, Func Offset: 0x10
	// Line 1515, Address: 0x1ed64f4, Func Offset: 0x14
	// Line 1501, Address: 0x1ed64f8, Func Offset: 0x18
	// Line 1513, Address: 0x1ed64fc, Func Offset: 0x1c
	// Line 1517, Address: 0x1ed6500, Func Offset: 0x20
	// Line 1518, Address: 0x1ed6514, Func Offset: 0x34
	// Line 1517, Address: 0x1ed6518, Func Offset: 0x38
	// Line 1518, Address: 0x1ed6524, Func Offset: 0x44
	// Line 1519, Address: 0x1ed6540, Func Offset: 0x60
	// Line 1521, Address: 0x1ed6574, Func Offset: 0x94
	// Line 1523, Address: 0x1ed6584, Func Offset: 0xa4
	// Line 1541, Address: 0x1ed6594, Func Offset: 0xb4
	// Line 1523, Address: 0x1ed6598, Func Offset: 0xb8
	// Line 1541, Address: 0x1ed659c, Func Offset: 0xbc
	// Line 1523, Address: 0x1ed65a4, Func Offset: 0xc4
	// Line 1541, Address: 0x1ed65a8, Func Offset: 0xc8
	// Line 1543, Address: 0x1ed65c8, Func Offset: 0xe8
	// Line 1542, Address: 0x1ed65d0, Func Offset: 0xf0
	// Line 1543, Address: 0x1ed65d4, Func Offset: 0xf4
	// Line 1546, Address: 0x1ed65f4, Func Offset: 0x114
	// Line 1543, Address: 0x1ed65f8, Func Offset: 0x118
	// Line 1546, Address: 0x1ed65fc, Func Offset: 0x11c
	// Line 1547, Address: 0x1ed6608, Func Offset: 0x128
	// Line 1549, Address: 0x1ed6614, Func Offset: 0x134
	// Line 1548, Address: 0x1ed6620, Func Offset: 0x140
	// Line 1549, Address: 0x1ed6624, Func Offset: 0x144
	// Func End, Address: 0x1ed662c, Func Offset: 0x14c
}

// 
// Start address: 0x1ed67d0
int ev_home0_ie24_2281_end(sfObj* obj)
{
	_anon2* child_wk;
	// Line 549, Address: 0x1ed67d0, Func Offset: 0
	// Line 552, Address: 0x1ed67dc, Func Offset: 0xc
	// Line 554, Address: 0x1ed67e8, Func Offset: 0x18
	// Line 555, Address: 0x1ed67f0, Func Offset: 0x20
	// Line 557, Address: 0x1ed67f8, Func Offset: 0x28
	// Line 560, Address: 0x1ed6800, Func Offset: 0x30
	// Line 559, Address: 0x1ed6804, Func Offset: 0x34
	// Line 560, Address: 0x1ed6808, Func Offset: 0x38
	// Func End, Address: 0x1ed6814, Func Offset: 0x44
}

