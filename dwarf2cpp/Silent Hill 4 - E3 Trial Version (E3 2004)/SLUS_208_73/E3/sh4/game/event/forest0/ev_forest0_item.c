typedef struct _EventDriver;
typedef enum sgIKSolveResult : unsigned char;
typedef struct sfObj;
typedef struct _anon0;
typedef struct sgSVModel;
typedef union _anon1;
typedef struct _anon2;
typedef struct sgIKHandle;
typedef struct sgBone;
typedef struct _anon3;
typedef struct _anon4;
typedef struct sgAnime;
typedef struct sfCharacter;

typedef int(*type_0)(sfObj*);
typedef int(*type_1)(sfObj*);
typedef int(*type_3)(sfObj*);
typedef void(*type_4)(sfObj*);
typedef int(*type_7)(sfObj*);
typedef int(*type_9)(sfObj*);
typedef sgIKSolveResult(*type_12)();
typedef void(*type_13)(sfObj*);
typedef void(*type_15)(_anon3*, int, int, float*);
typedef void(*type_17)(sgAnime*, int);

typedef _anon1 type_2[256];
typedef float type_5[4];
typedef float type_6[4][4];
typedef float type_8[4][2];
typedef _anon1 type_10[4];
typedef _anon1 type_11[10];
typedef float type_14[4];
typedef void* type_16[4];
typedef unsigned char type_18[4];
typedef short type_19[2];
typedef unsigned short type_20[2];
typedef char type_21[4];
typedef unsigned char type_22[4];
typedef float type_23[1];
typedef int type_24[1];
typedef float type_25[4];

struct _EventDriver
{
	int evnum;
	int(*trgchk)(sfObj*);
	int(*init)(sfObj*);
	int(*exec)(sfObj*);
	int(*draw)(sfObj*);
	int(*end)(sfObj*);
	unsigned int* file;
	_anon1 val[4];
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

struct sfObj
{
	_anon1 fwork[256];
	_anon1* work;
	void(*func)(sfObj*);
	_anon1* work_pt0;
	_anon1* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon1* sys_work;
	_anon1* scene_work;
	_anon1* event_work;
	_anon1* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

struct _anon0
{
	sfCharacter chara;
	int draw_flag;
};

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
};

union _anon1
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
	_anon1 dmy[10];
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
	unsigned long tex0;
	unsigned long clamp;
};

struct _anon4
{
	void* model;
	void* texture;
	void* texture_global;
	float matrices[4][4];
	float* weights;
	float tex_crops[4];
	void(*texture_load_func)(_anon3*, int, int, float*);
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

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon4 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
};

_EventDriver ev_forest0_fr09_025_GetShovel;
_EventDriver ev_forest0_fr16_184;
_EventDriver ev_forest0_fr20_097;
_EventDriver ev_forest0_fr22_181;
_EventDriver ev_forest0_fr19_2260;
_EventDriver ev_forest0_fr15_2263;
_EventDriver ev_forest0_fr01_2264;
_EventDriver ev_forest0_fr07_2265;
_EventDriver ev_forest0_fr10_2266;
_EventDriver ev_forest0_fr18_2267;
_EventDriver ev_forest0_GetPick;
_EventDriver ev_forest0_fr23_708;
_EventDriver ev_building0_GetSpadeMashy;
_EventDriver ev_subway0_sb22_chain;
_EventDriver ev_water0_mz13_chainsaw;

int ev_forest0_fr20_097_init(sfObj* obj);
int ev_forest0_fr_Stickfire_trgchk();
int ev_forest0_dollget_evcamera_trgchk();
int ev_subway0_chain_chk();
void Sb22ChainConstruct(sfObj* obj);
void Sb22ChainExec(sfObj* obj);
void Sb22ChainDraw(sfObj* obj);
void Sb22ChainDestruct(sfObj* obj);
int ev_chainsaw_trgchk();

// 
// Start address: 0x1ed6100
int ev_forest0_fr20_097_init(sfObj* obj)
{
	// Line 126, Address: 0x1ed6100, Func Offset: 0
	// Line 127, Address: 0x1ed610c, Func Offset: 0xc
	// Line 128, Address: 0x1ed6114, Func Offset: 0x14
	// Line 129, Address: 0x1ed611c, Func Offset: 0x1c
	// Line 130, Address: 0x1ed6124, Func Offset: 0x24
	// Line 131, Address: 0x1ed612c, Func Offset: 0x2c
	// Func End, Address: 0x1ed613c, Func Offset: 0x3c
	// Line 886, Address: 0x1ed6100, Func Offset: 0
	// Line 888, Address: 0x1ed6104, Func Offset: 0x4
	// Line 886, Address: 0x1ed6108, Func Offset: 0x8
	// Line 888, Address: 0x1ed6114, Func Offset: 0x14
	// Line 889, Address: 0x1ed611c, Func Offset: 0x1c
	// Line 890, Address: 0x1ed6148, Func Offset: 0x48
	// Line 892, Address: 0x1ed6150, Func Offset: 0x50
	// Line 891, Address: 0x1ed6154, Func Offset: 0x54
	// Line 892, Address: 0x1ed6158, Func Offset: 0x58
	// Func End, Address: 0x1ed6164, Func Offset: 0x64
}

// 
// Start address: 0x1ed6140
int ev_forest0_fr_Stickfire_trgchk()
{
	// Line 179, Address: 0x1ed6140, Func Offset: 0
	// Func End, Address: 0x1ed6148, Func Offset: 0x8
}

// 
// Start address: 0x1ed6150
int ev_forest0_dollget_evcamera_trgchk()
{
	// Line 184, Address: 0x1ed6150, Func Offset: 0
	// Func End, Address: 0x1ed6158, Func Offset: 0x8
}

// 
// Start address: 0x1ed6160
int ev_subway0_chain_chk()
{
	// Line 251, Address: 0x1ed6160, Func Offset: 0
	// Line 264, Address: 0x1ed6168, Func Offset: 0x8
	// Line 265, Address: 0x1ed6170, Func Offset: 0x10
	// Line 264, Address: 0x1ed6174, Func Offset: 0x14
	// Line 265, Address: 0x1ed617c, Func Offset: 0x1c
	// Func End, Address: 0x1ed6184, Func Offset: 0x24
}

// 
// Start address: 0x1ed6190
void Sb22ChainConstruct(sfObj* obj)
{
	_anon0* wk;
	_anon2* fig;
	float pos[4];
	float rot[4];
	// Line 269, Address: 0x1ed6190, Func Offset: 0
	// Line 274, Address: 0x1ed61a4, Func Offset: 0x14
	// Line 275, Address: 0x1ed61b4, Func Offset: 0x24
	// Line 276, Address: 0x1ed61bc, Func Offset: 0x2c
	// Line 277, Address: 0x1ed61c4, Func Offset: 0x34
	// Line 278, Address: 0x1ed61cc, Func Offset: 0x3c
	// Line 280, Address: 0x1ed61d0, Func Offset: 0x40
	// Line 281, Address: 0x1ed61e4, Func Offset: 0x54
	// Line 286, Address: 0x1ed61ec, Func Offset: 0x5c
	// Line 289, Address: 0x1ed61f8, Func Offset: 0x68
	// Line 291, Address: 0x1ed6200, Func Offset: 0x70
	// Line 294, Address: 0x1ed622c, Func Offset: 0x9c
	// Line 298, Address: 0x1ed6230, Func Offset: 0xa0
	// Line 294, Address: 0x1ed6238, Func Offset: 0xa8
	// Line 295, Address: 0x1ed623c, Func Offset: 0xac
	// Line 296, Address: 0x1ed6244, Func Offset: 0xb4
	// Line 298, Address: 0x1ed624c, Func Offset: 0xbc
	// Line 299, Address: 0x1ed6254, Func Offset: 0xc4
	// Line 300, Address: 0x1ed6264, Func Offset: 0xd4
	// Line 301, Address: 0x1ed6268, Func Offset: 0xd8
	// Func End, Address: 0x1ed6280, Func Offset: 0xf0
	// Line 899, Address: 0x1ed6190, Func Offset: 0
	// Line 900, Address: 0x1ed6198, Func Offset: 0x8
	// Line 902, Address: 0x1ed61a0, Func Offset: 0x10
	// Line 901, Address: 0x1ed61a4, Func Offset: 0x14
	// Line 902, Address: 0x1ed61a8, Func Offset: 0x18
	// Func End, Address: 0x1ed61b0, Func Offset: 0x20
}

// 
// Start address: 0x1ed6280
void Sb22ChainExec(sfObj* obj)
{
	_anon0* wk;
	// Line 305, Address: 0x1ed6280, Func Offset: 0
	// Line 306, Address: 0x1ed6290, Func Offset: 0x10
	// Line 309, Address: 0x1ed6298, Func Offset: 0x18
	// Line 311, Address: 0x1ed62a8, Func Offset: 0x28
	// Line 313, Address: 0x1ed62ac, Func Offset: 0x2c
	// Line 314, Address: 0x1ed62b0, Func Offset: 0x30
	// Func End, Address: 0x1ed62c0, Func Offset: 0x40
	// Line 926, Address: 0x1ed6280, Func Offset: 0
	// Line 927, Address: 0x1ed6288, Func Offset: 0x8
	// Line 929, Address: 0x1ed6290, Func Offset: 0x10
	// Line 928, Address: 0x1ed6294, Func Offset: 0x14
	// Line 929, Address: 0x1ed6298, Func Offset: 0x18
	// Func End, Address: 0x1ed62a0, Func Offset: 0x20
}

// 
// Start address: 0x1ed62c0
void Sb22ChainDraw(sfObj* obj)
{
	_anon0* wk;
	// Line 318, Address: 0x1ed62c0, Func Offset: 0
	// Line 319, Address: 0x1ed62d0, Func Offset: 0x10
	// Line 322, Address: 0x1ed62d8, Func Offset: 0x18
	// Line 323, Address: 0x1ed62e4, Func Offset: 0x24
	// Line 324, Address: 0x1ed62ec, Func Offset: 0x2c
	// Line 326, Address: 0x1ed62f4, Func Offset: 0x34
	// Line 327, Address: 0x1ed62f8, Func Offset: 0x38
	// Func End, Address: 0x1ed6308, Func Offset: 0x48
	// Line 1151, Address: 0x1ed62c0, Func Offset: 0
	// Line 1152, Address: 0x1ed62c8, Func Offset: 0x8
	// Line 1154, Address: 0x1ed62d0, Func Offset: 0x10
	// Line 1153, Address: 0x1ed62d4, Func Offset: 0x14
	// Line 1154, Address: 0x1ed62d8, Func Offset: 0x18
	// Func End, Address: 0x1ed62e0, Func Offset: 0x20
}

// 
// Start address: 0x1ed6310
void Sb22ChainDestruct(sfObj* obj)
{
	_anon0* wk;
	// Line 404, Address: 0x1ed6310, Func Offset: 0
	// Line 422, Address: 0x1ed6314, Func Offset: 0x4
	// Line 404, Address: 0x1ed6318, Func Offset: 0x8
	// Line 422, Address: 0x1ed6328, Func Offset: 0x18
	// Line 424, Address: 0x1ed6330, Func Offset: 0x20
	// Line 425, Address: 0x1ed6338, Func Offset: 0x28
	// Line 430, Address: 0x1ed6340, Func Offset: 0x30
	// Line 431, Address: 0x1ed6354, Func Offset: 0x44
	// Line 432, Address: 0x1ed636c, Func Offset: 0x5c
	// Line 434, Address: 0x1ed6370, Func Offset: 0x60
	// Line 432, Address: 0x1ed6374, Func Offset: 0x64
	// Line 434, Address: 0x1ed6378, Func Offset: 0x68
	// Line 432, Address: 0x1ed637c, Func Offset: 0x6c
	// Line 434, Address: 0x1ed6380, Func Offset: 0x70
	// Line 432, Address: 0x1ed6384, Func Offset: 0x74
	// Line 434, Address: 0x1ed6390, Func Offset: 0x80
	// Line 435, Address: 0x1ed6398, Func Offset: 0x88
	// Line 436, Address: 0x1ed63ac, Func Offset: 0x9c
	// Line 439, Address: 0x1ed63b0, Func Offset: 0xa0
	// Line 442, Address: 0x1ed63b8, Func Offset: 0xa8
	// Line 441, Address: 0x1ed63bc, Func Offset: 0xac
	// Line 442, Address: 0x1ed63c0, Func Offset: 0xb0
	// Func End, Address: 0x1ed63d4, Func Offset: 0xc4
	// Line 331, Address: 0x1ed6310, Func Offset: 0
	// Line 332, Address: 0x1ed631c, Func Offset: 0xc
	// Line 336, Address: 0x1ed6324, Func Offset: 0x14
	// Line 337, Address: 0x1ed632c, Func Offset: 0x1c
	// Line 338, Address: 0x1ed6330, Func Offset: 0x20
	// Func End, Address: 0x1ed633c, Func Offset: 0x2c
	// Line 953, Address: 0x1ed6310, Func Offset: 0
	// Line 954, Address: 0x1ed6314, Func Offset: 0x4
	// Line 953, Address: 0x1ed6318, Func Offset: 0x8
	// Line 954, Address: 0x1ed631c, Func Offset: 0xc
	// Line 955, Address: 0x1ed6320, Func Offset: 0x10
	// Line 956, Address: 0x1ed6334, Func Offset: 0x24
	// Line 957, Address: 0x1ed633c, Func Offset: 0x2c
	// Line 958, Address: 0x1ed6348, Func Offset: 0x38
	// Line 959, Address: 0x1ed6350, Func Offset: 0x40
	// Line 958, Address: 0x1ed6354, Func Offset: 0x44
	// Line 959, Address: 0x1ed6358, Func Offset: 0x48
	// Line 960, Address: 0x1ed6360, Func Offset: 0x50
	// Line 961, Address: 0x1ed6368, Func Offset: 0x58
	// Line 964, Address: 0x1ed6388, Func Offset: 0x78
	// Line 963, Address: 0x1ed638c, Func Offset: 0x7c
	// Line 964, Address: 0x1ed6390, Func Offset: 0x80
	// Func End, Address: 0x1ed6398, Func Offset: 0x88
}

// 
// Start address: 0x1ed6340
int ev_chainsaw_trgchk()
{
	int rtv;
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

