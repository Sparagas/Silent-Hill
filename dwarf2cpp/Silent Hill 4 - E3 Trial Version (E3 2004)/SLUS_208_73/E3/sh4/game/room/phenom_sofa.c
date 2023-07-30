typedef struct sgBone;
typedef struct sfObj;
typedef struct _anon0;
typedef struct _anon1;
typedef enum sgIKSolveResult : unsigned char;
typedef struct sgSVModel;
typedef struct sgIKHandle;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct sgAnime;
typedef struct _anon7;
typedef struct sfCharacter;
typedef struct _EventDriver;

typedef void(*type_4)(sfObj*);
typedef sgIKSolveResult(*type_5)();
typedef void(*type_7)(sfObj*);
typedef void(*type_10)(_anon2*, int, int, float*);
typedef void(*type_11)(int);
typedef void(*type_14)(sfObj*);
typedef void(*type_15)(sgAnime*, int);
typedef int(*type_24)(sfObj*);
typedef void(*type_25)(sfObj*);
typedef int(*type_26)(sfObj*);
typedef void(*type_27)(sfObj*);
typedef int(*type_28)(sfObj*);
typedef int(*type_29)(sfObj*);
typedef int(*type_30)(sfObj*);

typedef _anon5 type_0[4];
typedef _anon6 type_1[0];
typedef float type_2[4][4];
typedef float type_3[4][2];
typedef _anon5 type_6[256];
typedef sfObj* type_8[30];
typedef float type_9[4];
typedef float type_12[4];
typedef void* type_13[4];
typedef short type_16[2];
typedef unsigned short type_17[2];
typedef float type_18[4];
typedef char type_19[4];
typedef unsigned char type_20[4];
typedef unsigned char type_21[4];
typedef float type_22[1];
typedef int type_23[1];

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
	_anon5 fwork[256];
	_anon5* work;
	void(*func)(sfObj*);
	_anon5* work_pt0;
	_anon5* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon5* sys_work;
	_anon5* scene_work;
	_anon5* event_work;
	_anon5* objhit_work;
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

struct _anon1
{
	float pos0[4];
	float spot[4];
	float level;
	float damage;
	int stat;
	int timer;
	int mdl_disp;
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

struct _anon2
{
	unsigned long tex0;
	unsigned long clamp;
};

struct _anon3
{
	float pos0[4];
	float power;
	float rot_y;
	int n;
	int kind;
	int timer;
	int id;
	int alpha;
	int se;
	int se_slot;
	sfCharacter chara;
	sfObj* sptr[30];
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

union _anon5
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

struct _anon6
{
	void(*func)(int);
	float pos0[4];
	float spot[4];
	int para0;
	int para1;
	int rad;
	int room_no;
	int timing;
	char* name;
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

struct _anon7
{
	short access;
	short timer;
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

struct _EventDriver
{
	int evnum;
	int(*trgchk)(sfObj*);
	int(*init)(sfObj*);
	int(*exec)(sfObj*);
	int(*draw)(sfObj*);
	int(*end)(sfObj*);
	unsigned int* file;
	_anon5 val[4];
};

int phenom_sofa_timer;
int phenom_sofa_access;
void(*PhenomSofaMain)(sfObj*);
_EventDriver ev_sofa_check;
_anon0 em_model_work;
void(*PhenomSofaDraw)(sfObj*);
void(*PhenomDebugDrawFunc)(sfObj*);
_anon6 phenom_data[0];

void PhenomSofaWhenSave(_anon7* ss);
void PhenomSofaWhenLoad(_anon7* ss);
int PhenomSofaAccessed();
void PhenomSofaAccess();
int ev_sofa_check_trgchk();
int ev_sofa_check_init();
int ev_sofa_check_exec();
void PhenomSofaDraw(sfObj* obj);
void PhenomSofaMain(sfObj* obj);
void PhenomSofaStart();
void PhenomSofaInit(int n);

// 
// Start address: 0x2a6a40
void PhenomSofaWhenSave(_anon7* ss)
{
	// Line 40, Address: 0x2a6a40, Func Offset: 0
	// Line 41, Address: 0x2a6a4c, Func Offset: 0xc
	// Line 42, Address: 0x2a6a54, Func Offset: 0x14
	// Func End, Address: 0x2a6a5c, Func Offset: 0x1c
}

// 
// Start address: 0x2a6a60
void PhenomSofaWhenLoad(_anon7* ss)
{
	// Line 48, Address: 0x2a6a60, Func Offset: 0
	// Line 49, Address: 0x2a6a6c, Func Offset: 0xc
	// Line 50, Address: 0x2a6a74, Func Offset: 0x14
	// Func End, Address: 0x2a6a7c, Func Offset: 0x1c
}

// 
// Start address: 0x2a6a80
int PhenomSofaAccessed()
{
	// Line 55, Address: 0x2a6a80, Func Offset: 0
	// Line 56, Address: 0x2a6a84, Func Offset: 0x4
	// Func End, Address: 0x2a6a8c, Func Offset: 0xc
}

// 
// Start address: 0x2a6a90
void PhenomSofaAccess()
{
	// Line 62, Address: 0x2a6a90, Func Offset: 0
	// Line 61, Address: 0x2a6a94, Func Offset: 0x4
	// Line 62, Address: 0x2a6a98, Func Offset: 0x8
	// Line 61, Address: 0x2a6a9c, Func Offset: 0xc
	// Line 63, Address: 0x2a6aa0, Func Offset: 0x10
	// Func End, Address: 0x2a6aa8, Func Offset: 0x18
}

// 
// Start address: 0x2a6ab0
int ev_sofa_check_trgchk()
{
	_anon1* pptr;
	// Line 67, Address: 0x2a6ab0, Func Offset: 0
	// Line 70, Address: 0x2a6ab4, Func Offset: 0x4
	// Line 67, Address: 0x2a6ab8, Func Offset: 0x8
	// Line 70, Address: 0x2a6abc, Func Offset: 0xc
	// Line 72, Address: 0x2a6ad8, Func Offset: 0x28
	// Line 74, Address: 0x2a6ae0, Func Offset: 0x30
	// Line 76, Address: 0x2a6af8, Func Offset: 0x48
	// Line 78, Address: 0x2a6b20, Func Offset: 0x70
	// Line 81, Address: 0x2a6b30, Func Offset: 0x80
	// Func End, Address: 0x2a6b3c, Func Offset: 0x8c
}

// 
// Start address: 0x2a6b40
int ev_sofa_check_init()
{
	// Line 87, Address: 0x2a6b40, Func Offset: 0
	// Func End, Address: 0x2a6b48, Func Offset: 0x8
}

// 
// Start address: 0x2a6b50
int ev_sofa_check_exec()
{
	// Line 91, Address: 0x2a6b50, Func Offset: 0
	// Line 92, Address: 0x2a6b58, Func Offset: 0x8
	// Line 94, Address: 0x2a6b60, Func Offset: 0x10
	// Line 93, Address: 0x2a6b64, Func Offset: 0x14
	// Line 94, Address: 0x2a6b68, Func Offset: 0x18
	// Func End, Address: 0x2a6b70, Func Offset: 0x20
}

// 
// Start address: 0x2a6b70
void PhenomSofaDraw(sfObj* obj)
{
	_anon1* pptr;
	int level;
	_anon0* em_model;
	unsigned char c_level;
	// Line 112, Address: 0x2a6b70, Func Offset: 0
	// Line 120, Address: 0x2a6b84, Func Offset: 0x14
	// Line 121, Address: 0x2a6b90, Func Offset: 0x20
	// Line 122, Address: 0x2a6b94, Func Offset: 0x24
	// Line 121, Address: 0x2a6b98, Func Offset: 0x28
	// Line 124, Address: 0x2a6ba4, Func Offset: 0x34
	// Line 128, Address: 0x2a6bb0, Func Offset: 0x40
	// Line 126, Address: 0x2a6bbc, Func Offset: 0x4c
	// Line 128, Address: 0x2a6bc0, Func Offset: 0x50
	// Line 129, Address: 0x2a6bc8, Func Offset: 0x58
	// Line 130, Address: 0x2a6bdc, Func Offset: 0x6c
	// Line 132, Address: 0x2a6bf0, Func Offset: 0x80
	// Line 131, Address: 0x2a6bf4, Func Offset: 0x84
	// Line 132, Address: 0x2a6bf8, Func Offset: 0x88
	// Line 134, Address: 0x2a6c00, Func Offset: 0x90
	// Line 139, Address: 0x2a6c08, Func Offset: 0x98
	// Line 140, Address: 0x2a6c14, Func Offset: 0xa4
	// Line 143, Address: 0x2a6c60, Func Offset: 0xf0
	// Line 145, Address: 0x2a6c78, Func Offset: 0x108
	// Line 151, Address: 0x2a6c88, Func Offset: 0x118
	// Line 152, Address: 0x2a6c90, Func Offset: 0x120
	// Line 153, Address: 0x2a6c98, Func Offset: 0x128
	// Line 155, Address: 0x2a6ca0, Func Offset: 0x130
	// Line 156, Address: 0x2a6ca8, Func Offset: 0x138
	// Line 158, Address: 0x2a6cb0, Func Offset: 0x140
	// Line 159, Address: 0x2a6cc0, Func Offset: 0x150
	// Line 161, Address: 0x2a6cc8, Func Offset: 0x158
	// Line 163, Address: 0x2a6cd0, Func Offset: 0x160
	// Func End, Address: 0x2a6ce4, Func Offset: 0x174
}

// 
// Start address: 0x2a6cf0
void PhenomSofaMain(sfObj* obj)
{
	_anon1* pptr;
	_anon0* em_model;
	// Line 167, Address: 0x2a6cf0, Func Offset: 0
	// Line 175, Address: 0x2a6d04, Func Offset: 0x14
	// Line 172, Address: 0x2a6d08, Func Offset: 0x18
	// Line 175, Address: 0x2a6d0c, Func Offset: 0x1c
	// Line 179, Address: 0x2a6d18, Func Offset: 0x28
	// Line 183, Address: 0x2a6d40, Func Offset: 0x50
	// Line 184, Address: 0x2a6d5c, Func Offset: 0x6c
	// Line 185, Address: 0x2a6d60, Func Offset: 0x70
	// Line 186, Address: 0x2a6d68, Func Offset: 0x78
	// Line 187, Address: 0x2a6d80, Func Offset: 0x90
	// Line 188, Address: 0x2a6d98, Func Offset: 0xa8
	// Line 189, Address: 0x2a6da8, Func Offset: 0xb8
	// Line 190, Address: 0x2a6db0, Func Offset: 0xc0
	// Line 211, Address: 0x2a6db8, Func Offset: 0xc8
	// Line 213, Address: 0x2a6dbc, Func Offset: 0xcc
	// Line 215, Address: 0x2a6dc0, Func Offset: 0xd0
	// Func End, Address: 0x2a6dd4, Func Offset: 0xe4
}

// 
// Start address: 0x2a6de0
void PhenomSofaStart()
{
	// Line 221, Address: 0x2a6de0, Func Offset: 0
	// Line 222, Address: 0x2a6de4, Func Offset: 0x4
	// Func End, Address: 0x2a6dec, Func Offset: 0xc
}

// 
// Start address: 0x2a6df0
void PhenomSofaInit(int n)
{
	_anon3* ppptr;
	sfObj* optr;
	// Line 226, Address: 0x2a6df0, Func Offset: 0
	// Line 230, Address: 0x2a6e00, Func Offset: 0x10
	// Line 231, Address: 0x2a6e0c, Func Offset: 0x1c
	// Line 232, Address: 0x2a6e1c, Func Offset: 0x2c
	// Line 234, Address: 0x2a6e2c, Func Offset: 0x3c
	// Line 233, Address: 0x2a6e30, Func Offset: 0x40
	// Line 234, Address: 0x2a6e34, Func Offset: 0x44
	// Line 236, Address: 0x2a6e50, Func Offset: 0x60
	// Line 235, Address: 0x2a6e54, Func Offset: 0x64
	// Line 236, Address: 0x2a6e58, Func Offset: 0x68
	// Line 237, Address: 0x2a6e60, Func Offset: 0x70
	// Line 238, Address: 0x2a6e70, Func Offset: 0x80
	// Func End, Address: 0x2a6e84, Func Offset: 0x94
}

