typedef struct sfObj;
typedef struct sfCharacter;
typedef struct sgAnime;
typedef struct _anon0;
typedef struct _anon1;
typedef struct _EventInst;
typedef struct _EventDriver;
typedef enum sgIKSolveResult : unsigned char;
typedef struct sgIKHandle;
typedef struct sgBone;
typedef struct _anon2;
typedef union _anon3;
typedef struct _anon4;
typedef struct sgSVModel;

typedef void(*type_3)(sfObj*);
typedef int(*type_4)(sfObj*);
typedef int(*type_6)(sfObj*);
typedef int(*type_9)(sfObj*);
typedef int(*type_10)(sfObj*);
typedef int(*type_11)(sfObj*);
typedef int(*type_13)(sfObj*);
typedef void(*type_14)(sfObj*);
typedef int(*type_16)(sfObj*);
typedef sgIKSolveResult(*type_17)();
typedef void(*type_20)(sfObj*);
typedef void(*type_29)(_anon2*, int, int, float*);
typedef void(*type_34)(sfObj*);
typedef void(*type_35)(sgAnime*, int);
typedef void(*type_36)(sfObj*);

typedef float type_0[4];
typedef unsigned char type_1[4];
typedef unsigned int type_2[6];
typedef unsigned int type_5[4];
typedef unsigned int type_7[4];
typedef unsigned int type_8[6];
typedef float type_12[4][2];
typedef float type_15[4];
typedef _anon3 type_18[4];
typedef _anon3 type_19[256];
typedef short type_21[2];
typedef unsigned short type_22[2];
typedef char type_23[4];
typedef unsigned char type_24[4];
typedef float type_25[4][4];
typedef unsigned int type_26[5];
typedef float type_27[1];
typedef int type_28[1];
typedef _anon3 type_30[0];
typedef unsigned int type_31[6];
typedef float type_32[4];
typedef void* type_33[4];

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

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon4 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
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

struct _anon0
{
	sfCharacter chara;
	float child_alpha;
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

struct _anon2
{
	unsigned long tex0;
	unsigned long clamp;
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
	void* model;
	void* texture;
	void* texture_global;
	float matrices[4][4];
	float* weights;
	float tex_crops[4];
	void(*texture_load_func)(_anon2*, int, int, float*);
	int equip_flag;
};

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
};

unsigned int ev_pasthome0_cm24_201_file[4];
float sg_vector_unit_y[4];
_EventDriver ev_pasthome0_cm24_201;
unsigned int ev_pasthome0_cm09_58_file[6];
unsigned int ev_pasthome0_cm09_59_file[6];
unsigned int ev_pasthome0_cm09_60_file[6];
_anon3 MsgCommon_ItemFull[0];
_EventDriver ev_pasthome0_cm09_58;
_EventDriver ev_pasthome0_cm09_59;
_EventDriver ev_pasthome0_cm09_60;
unsigned int ev_pasthome0_cm01_55_file[5];
_EventDriver ev_pasthome0_cm01_55;
_EventDriver ev_pasthome0_cm01_56;
_EventDriver ev_pasthome0_cm01_57;
void(*sfObjFuncDummy)(sfObj*);
void(*cm24_reset_transparency)(sfObj*);
void(*cm24_set_transparency)(sfObj*);
_EventDriver ev_home0_cm24_2282;
unsigned int ev_pasthome0_cm21_49_file[4];
_EventDriver ev_pasthome0_cm21_49;
_EventDriver ev_pasthome0_cm15_61;

int ev_pasthome0_cm24_201_exec(sfObj* obj);
int ev_pasthome0_cm24_201_end(sfObj* obj);
int ev_pasthome0_cm09_58_trgchk(sfObj* obj);
int ev_pasthome0_cm09_58_init(sfObj* obj);
int ev_pasthome0_cm09_58_exec(sfObj* obj);
int ev_pasthome0_cm09_58_draw(sfObj* obj);
int ev_pasthome0_cm09_58_end(sfObj* obj);
int ev_pasthome0_cm01_55_end(sfObj* obj);
void cm24_set_transparency(sfObj* obj);
void cm24_reset_transparency();
int ev_home0_cm24_2282_trg();
int ev_home0_cm24_2282_init(sfObj* obj);
int ev_home0_cm24_2282_exec(sfObj* obj);
int ev_home0_cm24_2282_end(sfObj* obj);
int ev_pasthome0_cm21_49_exec(sfObj* obj);
int ev_pasthome0_cm21_49_end(sfObj* obj);

// 
// Start address: 0x1ed43f0
int ev_pasthome0_cm24_201_exec(sfObj* obj)
{
	// Line 252, Address: 0x1ed43f0, Func Offset: 0
	// Line 253, Address: 0x1ed43f8, Func Offset: 0x8
	// Line 255, Address: 0x1ed4414, Func Offset: 0x24
	// Line 256, Address: 0x1ed4418, Func Offset: 0x28
	// Line 260, Address: 0x1ed4420, Func Offset: 0x30
	// Func End, Address: 0x1ed4428, Func Offset: 0x38
	// Line 91, Address: 0x1ed43f0, Func Offset: 0
	// Func End, Address: 0x1ed440c, Func Offset: 0x1c
}

// 
// Start address: 0x1ed4410
int ev_pasthome0_cm24_201_end(sfObj* obj)
{
	float r[4];
	float e_pos[4];
	// Line 132, Address: 0x1ed4410, Func Offset: 0
	// Line 133, Address: 0x1ed4418, Func Offset: 0x8
	// Line 135, Address: 0x1ed4420, Func Offset: 0x10
	// Line 134, Address: 0x1ed4424, Func Offset: 0x14
	// Line 135, Address: 0x1ed4428, Func Offset: 0x18
	// Func End, Address: 0x1ed4430, Func Offset: 0x20
	// Line 95, Address: 0x1ed4410, Func Offset: 0
	// Line 100, Address: 0x1ed4414, Func Offset: 0x4
	// Line 95, Address: 0x1ed4418, Func Offset: 0x8
	// Line 100, Address: 0x1ed441c, Func Offset: 0xc
	// Line 95, Address: 0x1ed4420, Func Offset: 0x10
	// Line 100, Address: 0x1ed4428, Func Offset: 0x18
	// Line 101, Address: 0x1ed4430, Func Offset: 0x20
	// Line 103, Address: 0x1ed4440, Func Offset: 0x30
	// Line 104, Address: 0x1ed445c, Func Offset: 0x4c
	// Line 105, Address: 0x1ed4464, Func Offset: 0x54
	// Line 106, Address: 0x1ed447c, Func Offset: 0x6c
	// Line 107, Address: 0x1ed4484, Func Offset: 0x74
	// Line 109, Address: 0x1ed448c, Func Offset: 0x7c
	// Line 108, Address: 0x1ed4490, Func Offset: 0x80
	// Line 109, Address: 0x1ed4494, Func Offset: 0x84
	// Func End, Address: 0x1ed44a0, Func Offset: 0x90
}

// 
// Start address: 0x1ed44a0
int ev_pasthome0_cm09_58_trgchk(sfObj* obj)
{
	_EventDriver* ed;
	// Line 82, Address: 0x1ed44a0, Func Offset: 0
	// Line 81, Address: 0x1ed44a4, Func Offset: 0x4
	// Line 82, Address: 0x1ed44a8, Func Offset: 0x8
	// Line 84, Address: 0x1ed4524, Func Offset: 0x84
	// Line 85, Address: 0x1ed4528, Func Offset: 0x88
	// Line 86, Address: 0x1ed4530, Func Offset: 0x90
	// Line 92, Address: 0x1ed4538, Func Offset: 0x98
	// Line 93, Address: 0x1ed4540, Func Offset: 0xa0
	// Line 96, Address: 0x1ed4548, Func Offset: 0xa8
	// Line 97, Address: 0x1ed4550, Func Offset: 0xb0
	// Line 99, Address: 0x1ed4558, Func Offset: 0xb8
	// Line 100, Address: 0x1ed4560, Func Offset: 0xc0
	// Line 102, Address: 0x1ed4568, Func Offset: 0xc8
	// Line 103, Address: 0x1ed4570, Func Offset: 0xd0
	// Line 105, Address: 0x1ed4578, Func Offset: 0xd8
	// Line 109, Address: 0x1ed4580, Func Offset: 0xe0
	// Func End, Address: 0x1ed4588, Func Offset: 0xe8
	// Line 156, Address: 0x1ed44a0, Func Offset: 0
	// Line 158, Address: 0x1ed44b0, Func Offset: 0x10
	// Line 160, Address: 0x1ed44b8, Func Offset: 0x18
	// Line 161, Address: 0x1ed44c8, Func Offset: 0x28
	// Line 162, Address: 0x1ed44cc, Func Offset: 0x2c
	// Line 163, Address: 0x1ed44d4, Func Offset: 0x34
	// Line 164, Address: 0x1ed44e8, Func Offset: 0x48
	// Line 165, Address: 0x1ed4514, Func Offset: 0x74
	// Line 166, Address: 0x1ed4518, Func Offset: 0x78
	// Line 167, Address: 0x1ed4520, Func Offset: 0x80
	// Line 169, Address: 0x1ed4528, Func Offset: 0x88
	// Line 170, Address: 0x1ed4530, Func Offset: 0x90
	// Line 173, Address: 0x1ed4538, Func Offset: 0x98
	// Line 175, Address: 0x1ed4544, Func Offset: 0xa4
	// Line 176, Address: 0x1ed4548, Func Offset: 0xa8
	// Line 178, Address: 0x1ed4550, Func Offset: 0xb0
	// Line 180, Address: 0x1ed4558, Func Offset: 0xb8
	// Func End, Address: 0x1ed456c, Func Offset: 0xcc
}

// 
// Start address: 0x1ed4570
int ev_pasthome0_cm09_58_init(sfObj* obj)
{
	_EventInst* inst;
	// Line 421, Address: 0x1ed4570, Func Offset: 0
	// Line 424, Address: 0x1ed4574, Func Offset: 0x4
	// Line 421, Address: 0x1ed4578, Func Offset: 0x8
	// Line 424, Address: 0x1ed457c, Func Offset: 0xc
	// Line 425, Address: 0x1ed458c, Func Offset: 0x1c
	// Line 426, Address: 0x1ed4594, Func Offset: 0x24
	// Line 428, Address: 0x1ed4598, Func Offset: 0x28
	// Line 432, Address: 0x1ed45a0, Func Offset: 0x30
	// Line 433, Address: 0x1ed45a8, Func Offset: 0x38
	// Func End, Address: 0x1ed45b4, Func Offset: 0x44
	// Line 194, Address: 0x1ed4570, Func Offset: 0
	// Line 195, Address: 0x1ed4584, Func Offset: 0x14
	// Func End, Address: 0x1ed4598, Func Offset: 0x28
	// Line 182, Address: 0x1ed4570, Func Offset: 0
	// Line 183, Address: 0x1ed457c, Func Offset: 0xc
	// Line 184, Address: 0x1ed458c, Func Offset: 0x1c
	// Line 185, Address: 0x1ed4594, Func Offset: 0x24
	// Line 184, Address: 0x1ed4598, Func Offset: 0x28
	// Line 185, Address: 0x1ed459c, Func Offset: 0x2c
	// Line 186, Address: 0x1ed45a4, Func Offset: 0x34
	// Line 187, Address: 0x1ed45b0, Func Offset: 0x40
	// Line 189, Address: 0x1ed45b8, Func Offset: 0x48
	// Line 190, Address: 0x1ed45c0, Func Offset: 0x50
	// Func End, Address: 0x1ed45d0, Func Offset: 0x60
}

// 
// Start address: 0x1ed45d0
int ev_pasthome0_cm09_58_exec(sfObj* obj)
{
	_EventInst* evinst;
	int demo_num;
	int door_frame;
	// Line 252, Address: 0x1ed45d0, Func Offset: 0
	// Func End, Address: 0x1ed45dc, Func Offset: 0xc
	// Line 207, Address: 0x1ed45d0, Func Offset: 0
	// Line 211, Address: 0x1ed45d4, Func Offset: 0x4
	// Line 207, Address: 0x1ed45d8, Func Offset: 0x8
	// Line 211, Address: 0x1ed45dc, Func Offset: 0xc
	// Line 207, Address: 0x1ed45e0, Func Offset: 0x10
	// Line 211, Address: 0x1ed45fc, Func Offset: 0x2c
	// Line 213, Address: 0x1ed4600, Func Offset: 0x30
	// Line 215, Address: 0x1ed4608, Func Offset: 0x38
	// Line 220, Address: 0x1ed460c, Func Offset: 0x3c
	// Line 216, Address: 0x1ed4610, Func Offset: 0x40
	// Line 217, Address: 0x1ed4614, Func Offset: 0x44
	// Line 220, Address: 0x1ed4618, Func Offset: 0x48
	// Line 221, Address: 0x1ed4624, Func Offset: 0x54
	// Line 223, Address: 0x1ed462c, Func Offset: 0x5c
	// Line 221, Address: 0x1ed4630, Func Offset: 0x60
	// Line 222, Address: 0x1ed4640, Func Offset: 0x70
	// Line 223, Address: 0x1ed4650, Func Offset: 0x80
	// Line 224, Address: 0x1ed465c, Func Offset: 0x8c
	// Line 230, Address: 0x1ed4664, Func Offset: 0x94
	// Line 231, Address: 0x1ed4688, Func Offset: 0xb8
	// Line 233, Address: 0x1ed46a8, Func Offset: 0xd8
	// Line 235, Address: 0x1ed46bc, Func Offset: 0xec
	// Line 236, Address: 0x1ed46e4, Func Offset: 0x114
	// Line 235, Address: 0x1ed46e8, Func Offset: 0x118
	// Line 237, Address: 0x1ed46f4, Func Offset: 0x124
	// Line 240, Address: 0x1ed4710, Func Offset: 0x140
	// Line 238, Address: 0x1ed4718, Func Offset: 0x148
	// Line 237, Address: 0x1ed471c, Func Offset: 0x14c
	// Line 240, Address: 0x1ed4724, Func Offset: 0x154
	// Line 241, Address: 0x1ed472c, Func Offset: 0x15c
	// Line 244, Address: 0x1ed4738, Func Offset: 0x168
	// Line 243, Address: 0x1ed4758, Func Offset: 0x188
	// Line 244, Address: 0x1ed475c, Func Offset: 0x18c
	// Func End, Address: 0x1ed4764, Func Offset: 0x194
	// Line 193, Address: 0x1ed45d0, Func Offset: 0
	// Line 194, Address: 0x1ed45e0, Func Offset: 0x10
	// Line 195, Address: 0x1ed45e8, Func Offset: 0x18
	// Line 198, Address: 0x1ed45f8, Func Offset: 0x28
	// Line 199, Address: 0x1ed4608, Func Offset: 0x38
	// Line 202, Address: 0x1ed4618, Func Offset: 0x48
	// Line 204, Address: 0x1ed4634, Func Offset: 0x64
	// Line 206, Address: 0x1ed4638, Func Offset: 0x68
	// Line 209, Address: 0x1ed4640, Func Offset: 0x70
	// Line 211, Address: 0x1ed4648, Func Offset: 0x78
	// Line 213, Address: 0x1ed464c, Func Offset: 0x7c
	// Line 215, Address: 0x1ed4650, Func Offset: 0x80
	// Line 216, Address: 0x1ed4660, Func Offset: 0x90
	// Line 217, Address: 0x1ed466c, Func Offset: 0x9c
	// Line 219, Address: 0x1ed4670, Func Offset: 0xa0
	// Line 220, Address: 0x1ed4678, Func Offset: 0xa8
	// Func End, Address: 0x1ed468c, Func Offset: 0xbc
}

// 
// Start address: 0x1ed4690
int ev_pasthome0_cm09_58_draw(sfObj* obj)
{
	// Line 223, Address: 0x1ed4690, Func Offset: 0
	// Line 225, Address: 0x1ed469c, Func Offset: 0xc
	// Line 228, Address: 0x1ed46bc, Func Offset: 0x2c
	// Func End, Address: 0x1ed46cc, Func Offset: 0x3c
}

// 
// Start address: 0x1ed46d0
int ev_pasthome0_cm09_58_end(sfObj* obj)
{
	// Line 528, Address: 0x1ed46d0, Func Offset: 0
	// Line 529, Address: 0x1ed46e0, Func Offset: 0x10
	// Func End, Address: 0x1ed46e8, Func Offset: 0x18
	// Line 206, Address: 0x1ed46d0, Func Offset: 0
	// Line 209, Address: 0x1ed46f0, Func Offset: 0x20
	// Line 210, Address: 0x1ed4700, Func Offset: 0x30
	// Line 212, Address: 0x1ed4704, Func Offset: 0x34
	// Line 214, Address: 0x1ed4708, Func Offset: 0x38
	// Func End, Address: 0x1ed4710, Func Offset: 0x40
	// Line 230, Address: 0x1ed46d0, Func Offset: 0
	// Line 231, Address: 0x1ed46dc, Func Offset: 0xc
	// Line 232, Address: 0x1ed46ec, Func Offset: 0x1c
	// Line 233, Address: 0x1ed46f4, Func Offset: 0x24
	// Line 235, Address: 0x1ed46f8, Func Offset: 0x28
	// Line 237, Address: 0x1ed4700, Func Offset: 0x30
	// Line 239, Address: 0x1ed4708, Func Offset: 0x38
	// Line 240, Address: 0x1ed4710, Func Offset: 0x40
	// Line 241, Address: 0x1ed4718, Func Offset: 0x48
	// Func End, Address: 0x1ed4728, Func Offset: 0x58
}

// 
// Start address: 0x1ed4730
int ev_pasthome0_cm01_55_end(sfObj* obj)
{
	float r[4];
	float h_pos[4];
	float e_pos[4];
	// Line 305, Address: 0x1ed4730, Func Offset: 0
	// Line 310, Address: 0x1ed4738, Func Offset: 0x8
	// Line 313, Address: 0x1ed4740, Func Offset: 0x10
	// Line 314, Address: 0x1ed475c, Func Offset: 0x2c
	// Line 315, Address: 0x1ed4774, Func Offset: 0x44
	// Line 317, Address: 0x1ed4784, Func Offset: 0x54
	// Line 316, Address: 0x1ed4788, Func Offset: 0x58
	// Line 317, Address: 0x1ed478c, Func Offset: 0x5c
	// Func End, Address: 0x1ed4794, Func Offset: 0x64
}

// 
// Start address: 0x1ed47a0
void cm24_set_transparency(sfObj* obj)
{
	_anon0* wk;
	int a;
	// Line 425, Address: 0x1ed47a0, Func Offset: 0
	// Line 426, Address: 0x1ed47a8, Func Offset: 0x8
	// Line 428, Address: 0x1ed47b0, Func Offset: 0x10
	// Line 427, Address: 0x1ed47b4, Func Offset: 0x14
	// Line 428, Address: 0x1ed47b8, Func Offset: 0x18
	// Func End, Address: 0x1ed47c0, Func Offset: 0x20
	// Line 373, Address: 0x1ed47a0, Func Offset: 0
	// Line 377, Address: 0x1ed47a4, Func Offset: 0x4
	// Line 373, Address: 0x1ed47a8, Func Offset: 0x8
	// Line 377, Address: 0x1ed47ac, Func Offset: 0xc
	// Line 374, Address: 0x1ed47b0, Func Offset: 0x10
	// Line 377, Address: 0x1ed47b4, Func Offset: 0x14
	// Line 378, Address: 0x1ed47c0, Func Offset: 0x20
	// Line 377, Address: 0x1ed47c4, Func Offset: 0x24
	// Line 378, Address: 0x1ed47c8, Func Offset: 0x28
	// Line 379, Address: 0x1ed47ec, Func Offset: 0x4c
	// Line 380, Address: 0x1ed4800, Func Offset: 0x60
	// Line 381, Address: 0x1ed480c, Func Offset: 0x6c
	// Func End, Address: 0x1ed4818, Func Offset: 0x78
}

// 
// Start address: 0x1ed4820
void cm24_reset_transparency()
{
	// Line 93, Address: 0x1ed4820, Func Offset: 0
	// Line 94, Address: 0x1ed4828, Func Offset: 0x8
	// Line 96, Address: 0x1ed4830, Func Offset: 0x10
	// Line 98, Address: 0x1ed4838, Func Offset: 0x18
	// Line 100, Address: 0x1ed4848, Func Offset: 0x28
	// Line 103, Address: 0x1ed4850, Func Offset: 0x30
	// Func End, Address: 0x1ed4860, Func Offset: 0x40
	// Line 384, Address: 0x1ed4820, Func Offset: 0
	// Line 385, Address: 0x1ed4828, Func Offset: 0x8
	// Line 386, Address: 0x1ed4830, Func Offset: 0x10
	// Line 387, Address: 0x1ed4838, Func Offset: 0x18
	// Func End, Address: 0x1ed4844, Func Offset: 0x24
}

// 
// Start address: 0x1ed4850
int ev_home0_cm24_2282_trg()
{
	// Line 398, Address: 0x1ed4850, Func Offset: 0
	// Func End, Address: 0x1ed4858, Func Offset: 0x8
}

// 
// Start address: 0x1ed4860
int ev_home0_cm24_2282_init(sfObj* obj)
{
	_anon1* wk;
	float childpos[4];
	float base_pos[4];
	float pos[4];
	float length;
	// Line 106, Address: 0x1ed4860, Func Offset: 0
	// Line 107, Address: 0x1ed4864, Func Offset: 0x4
	// Line 110, Address: 0x1ed486c, Func Offset: 0xc
	// Line 111, Address: 0x1ed4874, Func Offset: 0x14
	// Line 112, Address: 0x1ed4878, Func Offset: 0x18
	// Func End, Address: 0x1ed4884, Func Offset: 0x24
	// Line 401, Address: 0x1ed4860, Func Offset: 0
	// Line 403, Address: 0x1ed4864, Func Offset: 0x4
	// Line 401, Address: 0x1ed4868, Func Offset: 0x8
	// Line 403, Address: 0x1ed486c, Func Offset: 0xc
	// Line 401, Address: 0x1ed4870, Func Offset: 0x10
	// Line 403, Address: 0x1ed4874, Func Offset: 0x14
	// Line 408, Address: 0x1ed4880, Func Offset: 0x20
	// Line 409, Address: 0x1ed4894, Func Offset: 0x34
	// Line 410, Address: 0x1ed48b4, Func Offset: 0x54
	// Line 411, Address: 0x1ed48dc, Func Offset: 0x7c
	// Line 412, Address: 0x1ed48f4, Func Offset: 0x94
	// Line 413, Address: 0x1ed48f8, Func Offset: 0x98
	// Line 414, Address: 0x1ed4904, Func Offset: 0xa4
	// Line 416, Address: 0x1ed4908, Func Offset: 0xa8
	// Line 419, Address: 0x1ed4918, Func Offset: 0xb8
	// Line 420, Address: 0x1ed4924, Func Offset: 0xc4
	// Line 421, Address: 0x1ed4934, Func Offset: 0xd4
	// Line 424, Address: 0x1ed4948, Func Offset: 0xe8
	// Line 425, Address: 0x1ed4950, Func Offset: 0xf0
	// Func End, Address: 0x1ed4960, Func Offset: 0x100
}

// 
// Start address: 0x1ed4960
int ev_home0_cm24_2282_exec(sfObj* obj)
{
	int rtv;
	_anon1* wk;
	sfObj* child_obj;
	_anon0* child_wk;
	sfCharacter* chara;
	float childpos[4];
	float base_pos[4];
	float pos[4];
	float length;
	float vol;
	// Line 301, Address: 0x1ed4960, Func Offset: 0
	// Line 307, Address: 0x1ed4964, Func Offset: 0x4
	// Line 301, Address: 0x1ed4968, Func Offset: 0x8
	// Line 307, Address: 0x1ed4974, Func Offset: 0x14
	// Line 308, Address: 0x1ed4984, Func Offset: 0x24
	// Line 315, Address: 0x1ed498c, Func Offset: 0x2c
	// Line 316, Address: 0x1ed4994, Func Offset: 0x34
	// Line 317, Address: 0x1ed49ac, Func Offset: 0x4c
	// Line 318, Address: 0x1ed49c4, Func Offset: 0x64
	// Line 320, Address: 0x1ed49dc, Func Offset: 0x7c
	// Line 321, Address: 0x1ed49e4, Func Offset: 0x84
	// Line 320, Address: 0x1ed49e8, Func Offset: 0x88
	// Line 327, Address: 0x1ed49ec, Func Offset: 0x8c
	// Line 321, Address: 0x1ed49f0, Func Offset: 0x90
	// Line 322, Address: 0x1ed49f4, Func Offset: 0x94
	// Line 323, Address: 0x1ed49fc, Func Offset: 0x9c
	// Line 327, Address: 0x1ed4a04, Func Offset: 0xa4
	// Line 328, Address: 0x1ed4a0c, Func Offset: 0xac
	// Line 329, Address: 0x1ed4a20, Func Offset: 0xc0
	// Line 330, Address: 0x1ed4a2c, Func Offset: 0xcc
	// Line 331, Address: 0x1ed4a38, Func Offset: 0xd8
	// Line 335, Address: 0x1ed4a40, Func Offset: 0xe0
	// Line 334, Address: 0x1ed4a48, Func Offset: 0xe8
	// Line 335, Address: 0x1ed4a4c, Func Offset: 0xec
	// Func End, Address: 0x1ed4a58, Func Offset: 0xf8
	// Line 115, Address: 0x1ed4960, Func Offset: 0
	// Line 114, Address: 0x1ed4964, Func Offset: 0x4
	// Line 115, Address: 0x1ed4968, Func Offset: 0x8
	// Line 116, Address: 0x1ed498c, Func Offset: 0x2c
	// Line 117, Address: 0x1ed4990, Func Offset: 0x30
	// Line 118, Address: 0x1ed4998, Func Offset: 0x38
	// Line 120, Address: 0x1ed49a0, Func Offset: 0x40
	// Line 121, Address: 0x1ed49a8, Func Offset: 0x48
	// Line 123, Address: 0x1ed49b0, Func Offset: 0x50
	// Line 127, Address: 0x1ed49b8, Func Offset: 0x58
	// Func End, Address: 0x1ed49c0, Func Offset: 0x60
	// Line 428, Address: 0x1ed4960, Func Offset: 0
	// Line 434, Address: 0x1ed4964, Func Offset: 0x4
	// Line 428, Address: 0x1ed4968, Func Offset: 0x8
	// Line 434, Address: 0x1ed496c, Func Offset: 0xc
	// Line 428, Address: 0x1ed4970, Func Offset: 0x10
	// Line 434, Address: 0x1ed4974, Func Offset: 0x14
	// Line 428, Address: 0x1ed4978, Func Offset: 0x18
	// Line 434, Address: 0x1ed498c, Func Offset: 0x2c
	// Line 439, Address: 0x1ed4994, Func Offset: 0x34
	// Line 440, Address: 0x1ed49a4, Func Offset: 0x44
	// Line 441, Address: 0x1ed49a8, Func Offset: 0x48
	// Line 442, Address: 0x1ed49ac, Func Offset: 0x4c
	// Line 446, Address: 0x1ed49b0, Func Offset: 0x50
	// Line 447, Address: 0x1ed49e4, Func Offset: 0x84
	// Line 448, Address: 0x1ed49e8, Func Offset: 0x88
	// Line 449, Address: 0x1ed49f0, Func Offset: 0x90
	// Line 450, Address: 0x1ed49f8, Func Offset: 0x98
	// Line 452, Address: 0x1ed4a04, Func Offset: 0xa4
	// Line 455, Address: 0x1ed4a30, Func Offset: 0xd0
	// Line 456, Address: 0x1ed4a3c, Func Offset: 0xdc
	// Line 457, Address: 0x1ed4a48, Func Offset: 0xe8
	// Line 458, Address: 0x1ed4a54, Func Offset: 0xf4
	// Line 459, Address: 0x1ed4a60, Func Offset: 0x100
	// Line 460, Address: 0x1ed4a68, Func Offset: 0x108
	// Line 461, Address: 0x1ed4a70, Func Offset: 0x110
	// Line 463, Address: 0x1ed4a78, Func Offset: 0x118
	// Line 464, Address: 0x1ed4a88, Func Offset: 0x128
	// Line 465, Address: 0x1ed4a90, Func Offset: 0x130
	// Line 466, Address: 0x1ed4a98, Func Offset: 0x138
	// Line 467, Address: 0x1ed4aa4, Func Offset: 0x144
	// Line 468, Address: 0x1ed4aa8, Func Offset: 0x148
	// Line 469, Address: 0x1ed4ab8, Func Offset: 0x158
	// Line 471, Address: 0x1ed4ac0, Func Offset: 0x160
	// Line 472, Address: 0x1ed4ad4, Func Offset: 0x174
	// Line 473, Address: 0x1ed4af4, Func Offset: 0x194
	// Line 474, Address: 0x1ed4b1c, Func Offset: 0x1bc
	// Line 475, Address: 0x1ed4b40, Func Offset: 0x1e0
	// Line 476, Address: 0x1ed4b44, Func Offset: 0x1e4
	// Line 477, Address: 0x1ed4b48, Func Offset: 0x1e8
	// Line 478, Address: 0x1ed4b60, Func Offset: 0x200
	// Line 479, Address: 0x1ed4b68, Func Offset: 0x208
	// Line 480, Address: 0x1ed4b74, Func Offset: 0x214
	// Line 481, Address: 0x1ed4b78, Func Offset: 0x218
	// Line 482, Address: 0x1ed4b9c, Func Offset: 0x23c
	// Line 483, Address: 0x1ed4bc4, Func Offset: 0x264
	// Line 484, Address: 0x1ed4be0, Func Offset: 0x280
	// Line 485, Address: 0x1ed4bf0, Func Offset: 0x290
	// Line 487, Address: 0x1ed4c00, Func Offset: 0x2a0
	// Line 489, Address: 0x1ed4c0c, Func Offset: 0x2ac
	// Line 490, Address: 0x1ed4c20, Func Offset: 0x2c0
	// Line 491, Address: 0x1ed4c2c, Func Offset: 0x2cc
	// Line 499, Address: 0x1ed4c34, Func Offset: 0x2d4
	// Line 501, Address: 0x1ed4c38, Func Offset: 0x2d8
	// Line 502, Address: 0x1ed4c3c, Func Offset: 0x2dc
	// Func End, Address: 0x1ed4c5c, Func Offset: 0x2fc
}

// 
// Start address: 0x1ed4c60
int ev_home0_cm24_2282_end(sfObj* obj)
{
	_anon0* child_wk;
	// Line 505, Address: 0x1ed4c60, Func Offset: 0
	// Line 506, Address: 0x1ed4c64, Func Offset: 0x4
	// Line 505, Address: 0x1ed4c68, Func Offset: 0x8
	// Line 506, Address: 0x1ed4c70, Func Offset: 0x10
	// Line 509, Address: 0x1ed4c7c, Func Offset: 0x1c
	// Line 511, Address: 0x1ed4c88, Func Offset: 0x28
	// Line 512, Address: 0x1ed4c90, Func Offset: 0x30
	// Line 514, Address: 0x1ed4c98, Func Offset: 0x38
	// Line 518, Address: 0x1ed4ca0, Func Offset: 0x40
	// Line 517, Address: 0x1ed4ca8, Func Offset: 0x48
	// Line 518, Address: 0x1ed4cac, Func Offset: 0x4c
	// Func End, Address: 0x1ed4cb4, Func Offset: 0x54
}

// 
// Start address: 0x1ed4cc0
int ev_pasthome0_cm21_49_exec(sfObj* obj)
{
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
// Start address: 0x1ed4ce0
int ev_pasthome0_cm21_49_end(sfObj* obj)
{
	// Line 886, Address: 0x1ed4ce0, Func Offset: 0
	// Line 889, Address: 0x1ed4cec, Func Offset: 0xc
	// Line 890, Address: 0x1ed4d38, Func Offset: 0x58
	// Line 889, Address: 0x1ed4d3c, Func Offset: 0x5c
	// Line 890, Address: 0x1ed4d50, Func Offset: 0x70
	// Func End, Address: 0x1ed4d60, Func Offset: 0x80
	// Line 550, Address: 0x1ed4ce0, Func Offset: 0
	// Line 551, Address: 0x1ed4ce8, Func Offset: 0x8
	// Line 554, Address: 0x1ed4cf0, Func Offset: 0x10
	// Line 553, Address: 0x1ed4cf4, Func Offset: 0x14
	// Line 554, Address: 0x1ed4cf8, Func Offset: 0x18
	// Func End, Address: 0x1ed4d00, Func Offset: 0x20
}

