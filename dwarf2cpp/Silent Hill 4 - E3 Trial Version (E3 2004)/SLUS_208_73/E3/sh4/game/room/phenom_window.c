typedef struct sfObj;
typedef struct sgAnime;
typedef struct sgBone;
typedef struct sgIKHandle;
typedef struct _anon0;
typedef struct _anon1;
typedef struct sfCharacter;
typedef struct sgSVModel;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef enum sgIKSolveResult : unsigned char;

typedef void(*type_0)(sfObj*);
typedef void(*type_1)(sfObj*);
typedef void(*type_7)(sgAnime*, int);
typedef void(*type_10)(sfObj*);
typedef void(*type_13)(sfObj*);
typedef void(*type_14)(_anon3*, int, int, float*);
typedef void(*type_15)(int);
typedef sgIKSolveResult(*type_24)();

typedef void* type_2[4];
typedef float type_3[4];
typedef float type_4[4];
typedef float type_5[4][4];
typedef _anon5 type_6[0];
typedef unsigned char type_8[4];
typedef _anon2 type_9[256];
typedef float type_11[8];
typedef sfObj* type_12[30];
typedef short type_16[2];
typedef unsigned short type_17[2];
typedef char type_18[4];
typedef unsigned char type_19[4];
typedef float type_20[6];
typedef float type_21[1];
typedef int type_22[1];
typedef float type_23[4][2];
typedef float type_25[4];

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

struct _anon0
{
	float pos0[4];
	float spot[4];
	float level;
	float damage;
	int stat;
	int timer;
	int mdl_disp;
};

struct _anon1
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

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon4 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
};

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
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

struct _anon5
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

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

float data_00l[8];
float data_00s[6];
float sg_vector_unit_y[4];
_anon5 phenom_data[0];
void(*PhenomDebugDrawFunc)(sfObj*);
void(*PhenomWindowMain)(sfObj*);

float random_near_1();
void PhenomWindowMain(sfObj* obj);
void PhenomWindowInit(int n);

// 
// Start address: 0x2a0c40
float random_near_1()
{
	// Line 27, Address: 0x2a0c40, Func Offset: 0
	// Line 28, Address: 0x2a0c48, Func Offset: 0x8
	// Line 29, Address: 0x2a0c60, Func Offset: 0x20
	// Line 28, Address: 0x2a0c68, Func Offset: 0x28
	// Line 29, Address: 0x2a0c74, Func Offset: 0x34
	// Func End, Address: 0x2a0c7c, Func Offset: 0x3c
}

// 
// Start address: 0x2a0c80
void PhenomWindowMain(sfObj* obj)
{
	_anon1* ppptr;
	_anon0* pptr;
	sfCharacter* chara;
	float last_pos[4];
	float q[4];
	int level;
	int stat;
	float f;
	// Line 61, Address: 0x2a0c80, Func Offset: 0
	// Line 71, Address: 0x2a0ca8, Func Offset: 0x28
	// Line 73, Address: 0x2a0cac, Func Offset: 0x2c
	// Line 74, Address: 0x2a0cb8, Func Offset: 0x38
	// Line 75, Address: 0x2a0cbc, Func Offset: 0x3c
	// Line 73, Address: 0x2a0cc0, Func Offset: 0x40
	// Line 76, Address: 0x2a0cc4, Func Offset: 0x44
	// Line 74, Address: 0x2a0cc8, Func Offset: 0x48
	// Line 76, Address: 0x2a0cd0, Func Offset: 0x50
	// Line 78, Address: 0x2a0cd8, Func Offset: 0x58
	// Line 81, Address: 0x2a0cfc, Func Offset: 0x7c
	// Line 82, Address: 0x2a0d00, Func Offset: 0x80
	// Line 83, Address: 0x2a0d24, Func Offset: 0xa4
	// Line 84, Address: 0x2a0d28, Func Offset: 0xa8
	// Line 85, Address: 0x2a0d38, Func Offset: 0xb8
	// Line 86, Address: 0x2a0d60, Func Offset: 0xe0
	// Line 87, Address: 0x2a0d88, Func Offset: 0x108
	// Line 88, Address: 0x2a0db0, Func Offset: 0x130
	// Line 89, Address: 0x2a0db8, Func Offset: 0x138
	// Line 91, Address: 0x2a0dc0, Func Offset: 0x140
	// Line 92, Address: 0x2a0dd0, Func Offset: 0x150
	// Line 94, Address: 0x2a0ddc, Func Offset: 0x15c
	// Line 95, Address: 0x2a0e08, Func Offset: 0x188
	// Line 98, Address: 0x2a0e10, Func Offset: 0x190
	// Line 102, Address: 0x2a0e48, Func Offset: 0x1c8
	// Line 104, Address: 0x2a0e58, Func Offset: 0x1d8
	// Line 106, Address: 0x2a0e60, Func Offset: 0x1e0
	// Line 110, Address: 0x2a0e68, Func Offset: 0x1e8
	// Line 111, Address: 0x2a0ea8, Func Offset: 0x228
	// Line 112, Address: 0x2a0ebc, Func Offset: 0x23c
	// Line 114, Address: 0x2a0ec4, Func Offset: 0x244
	// Line 116, Address: 0x2a0ed0, Func Offset: 0x250
	// Line 118, Address: 0x2a0ed8, Func Offset: 0x258
	// Line 119, Address: 0x2a0ee4, Func Offset: 0x264
	// Line 121, Address: 0x2a0f04, Func Offset: 0x284
	// Line 122, Address: 0x2a0f14, Func Offset: 0x294
	// Line 124, Address: 0x2a0f1c, Func Offset: 0x29c
	// Line 126, Address: 0x2a0f20, Func Offset: 0x2a0
	// Line 128, Address: 0x2a0f40, Func Offset: 0x2c0
	// Line 129, Address: 0x2a0f50, Func Offset: 0x2d0
	// Line 132, Address: 0x2a0f58, Func Offset: 0x2d8
	// Line 134, Address: 0x2a0f5c, Func Offset: 0x2dc
	// Line 135, Address: 0x2a0f64, Func Offset: 0x2e4
	// Line 136, Address: 0x2a0f68, Func Offset: 0x2e8
	// Line 137, Address: 0x2a0f78, Func Offset: 0x2f8
	// Line 138, Address: 0x2a0f88, Func Offset: 0x308
	// Line 140, Address: 0x2a0f98, Func Offset: 0x318
	// Line 141, Address: 0x2a0fb8, Func Offset: 0x338
	// Line 144, Address: 0x2a0fc0, Func Offset: 0x340
	// Line 146, Address: 0x2a0fc8, Func Offset: 0x348
	// Line 148, Address: 0x2a0fcc, Func Offset: 0x34c
	// Line 150, Address: 0x2a0fd0, Func Offset: 0x350
	// Line 151, Address: 0x2a0fdc, Func Offset: 0x35c
	// Line 154, Address: 0x2a0ff8, Func Offset: 0x378
	// Line 155, Address: 0x2a1004, Func Offset: 0x384
	// Line 156, Address: 0x2a1018, Func Offset: 0x398
	// Line 157, Address: 0x2a1024, Func Offset: 0x3a4
	// Func End, Address: 0x2a1098, Func Offset: 0x418
}

// 
// Start address: 0x2a10a0
void PhenomWindowInit(int n)
{
	_anon1* ppptr;
	sfCharacter* chara;
	sfObj* optr;
	// Line 162, Address: 0x2a10a0, Func Offset: 0
	// Line 167, Address: 0x2a10b8, Func Offset: 0x18
	// Line 168, Address: 0x2a10c4, Func Offset: 0x24
	// Line 169, Address: 0x2a10d4, Func Offset: 0x34
	// Line 171, Address: 0x2a10e4, Func Offset: 0x44
	// Line 170, Address: 0x2a10e8, Func Offset: 0x48
	// Line 171, Address: 0x2a10ec, Func Offset: 0x4c
	// Line 175, Address: 0x2a1108, Func Offset: 0x68
	// Line 172, Address: 0x2a110c, Func Offset: 0x6c
	// Line 175, Address: 0x2a1110, Func Offset: 0x70
	// Line 173, Address: 0x2a1114, Func Offset: 0x74
	// Line 175, Address: 0x2a1118, Func Offset: 0x78
	// Line 176, Address: 0x2a1120, Func Offset: 0x80
	// Line 178, Address: 0x2a114c, Func Offset: 0xac
	// Line 180, Address: 0x2a1154, Func Offset: 0xb4
	// Line 179, Address: 0x2a1158, Func Offset: 0xb8
	// Line 180, Address: 0x2a115c, Func Offset: 0xbc
	// Line 182, Address: 0x2a1178, Func Offset: 0xd8
	// Line 184, Address: 0x2a1180, Func Offset: 0xe0
	// Line 188, Address: 0x2a118c, Func Offset: 0xec
	// Line 189, Address: 0x2a1198, Func Offset: 0xf8
	// Line 190, Address: 0x2a11a8, Func Offset: 0x108
	// Line 192, Address: 0x2a11b8, Func Offset: 0x118
	// Line 191, Address: 0x2a11c0, Func Offset: 0x120
	// Line 192, Address: 0x2a11c4, Func Offset: 0x124
	// Line 196, Address: 0x2a11e0, Func Offset: 0x140
	// Line 193, Address: 0x2a11e4, Func Offset: 0x144
	// Line 196, Address: 0x2a11e8, Func Offset: 0x148
	// Line 194, Address: 0x2a11ec, Func Offset: 0x14c
	// Line 196, Address: 0x2a11f0, Func Offset: 0x150
	// Line 197, Address: 0x2a11f8, Func Offset: 0x158
	// Line 200, Address: 0x2a120c, Func Offset: 0x16c
	// Line 199, Address: 0x2a1210, Func Offset: 0x170
	// Line 200, Address: 0x2a1214, Func Offset: 0x174
	// Line 199, Address: 0x2a122c, Func Offset: 0x18c
	// Line 200, Address: 0x2a1230, Func Offset: 0x190
	// Line 202, Address: 0x2a1248, Func Offset: 0x1a8
	// Line 204, Address: 0x2a1250, Func Offset: 0x1b0
	// Line 206, Address: 0x2a125c, Func Offset: 0x1bc
	// Line 207, Address: 0x2a1260, Func Offset: 0x1c0
	// Func End, Address: 0x2a127c, Func Offset: 0x1dc
}

