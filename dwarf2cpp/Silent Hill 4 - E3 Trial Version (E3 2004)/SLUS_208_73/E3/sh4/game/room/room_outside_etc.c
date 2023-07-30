typedef struct sgBone;
typedef struct sfCharacter;
typedef struct sgIKHandle;
typedef struct sgAnime;
typedef struct sgSVModel;
typedef struct sfObj;
typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef enum sgIKSolveResult : unsigned char;

typedef sgIKSolveResult(*type_1)();
typedef void(*type_4)(sgAnime*, int);
typedef void(*type_5)(sfObj*);
typedef void(*type_11)(sfObj*);
typedef void(*type_13)(_anon0*, int, int, float*);
typedef void(*type_16)(sfObj*);
typedef void(*type_20)(sfObj*);

typedef float type_0[4][2];
typedef float type_2[4];
typedef void* type_3[4];
typedef float type_6[4];
typedef float type_7[4][4];
typedef unsigned char type_8[4];
typedef float type_9[4];
typedef _anon2 type_10[256];
typedef short type_12[2];
typedef unsigned short type_14[2];
typedef char type_15[4];
typedef unsigned char type_17[4];
typedef float type_18[1];
typedef int type_19[1];

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

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon1 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
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

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
};

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

struct _anon0
{
	unsigned long tex0;
	unsigned long clamp;
};

struct _anon1
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

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

int kubi_move;
int usaball_move;
float usaball_rot[4];
float usaball_pos[4];
unsigned int usaball_last_access;
float usaball_time;
void(*RoomOutSideUsaBallDestruct)(sfObj*);
int kubi_falltime;
int kubi_time;
void(*RoomOutSideKubiDestruct)(sfObj*);

void RoomOutSideEtcInit();
void RoomOutSideEtcControl(sfObj* obj);
void RoomOutSideUsaBallInit();
int RoomOutSideUsaBallSetRand();
void RoomOutSideUsaBallDestruct(sfObj* obj);
void RoomOutSideUsaBallControl(sfObj* obj);
void RoomOutSideKubiInit();
int RoomOutSideKubiSetRand();
void RoomOutSideKubiDestruct(sfObj* obj);
void RoomOutSideKubiControl(sfObj* obj);

// 
// Start address: 0x333780
void RoomOutSideEtcInit()
{
	// Line 32, Address: 0x333780, Func Offset: 0
	// Line 33, Address: 0x333788, Func Offset: 0x8
	// Line 34, Address: 0x333790, Func Offset: 0x10
	// Line 35, Address: 0x333798, Func Offset: 0x18
	// Func End, Address: 0x3337a4, Func Offset: 0x24
}

// 
// Start address: 0x3337b0
void RoomOutSideEtcControl(sfObj* obj)
{
	// Line 39, Address: 0x3337b0, Func Offset: 0
	// Line 40, Address: 0x3337b4, Func Offset: 0x4
	// Line 39, Address: 0x3337b8, Func Offset: 0x8
	// Line 40, Address: 0x3337bc, Func Offset: 0xc
	// Line 41, Address: 0x3337c8, Func Offset: 0x18
	// Line 42, Address: 0x3337d0, Func Offset: 0x20
	// Line 44, Address: 0x3337d8, Func Offset: 0x28
	// Line 45, Address: 0x3337e8, Func Offset: 0x38
	// Line 46, Address: 0x3337f0, Func Offset: 0x40
	// Line 48, Address: 0x3337f8, Func Offset: 0x48
	// Func End, Address: 0x333804, Func Offset: 0x54
}

// 
// Start address: 0x333810
void RoomOutSideUsaBallInit()
{
	// Line 55, Address: 0x333810, Func Offset: 0
	// Line 56, Address: 0x333814, Func Offset: 0x4
	// Line 55, Address: 0x333818, Func Offset: 0x8
	// Line 57, Address: 0x33381c, Func Offset: 0xc
	// Line 58, Address: 0x333838, Func Offset: 0x28
	// Line 59, Address: 0x333844, Func Offset: 0x34
	// Line 58, Address: 0x333848, Func Offset: 0x38
	// Line 59, Address: 0x33384c, Func Offset: 0x3c
	// Line 61, Address: 0x33386c, Func Offset: 0x5c
	// Line 63, Address: 0x3338a8, Func Offset: 0x98
	// Func End, Address: 0x3338b4, Func Offset: 0xa4
}

// 
// Start address: 0x3338c0
int RoomOutSideUsaBallSetRand()
{
	// Line 67, Address: 0x3338c0, Func Offset: 0
	// Line 74, Address: 0x3338c8, Func Offset: 0x8
	// Line 75, Address: 0x3338f0, Func Offset: 0x30
	// Line 76, Address: 0x3338f4, Func Offset: 0x34
	// Line 75, Address: 0x3338f8, Func Offset: 0x38
	// Line 76, Address: 0x3338fc, Func Offset: 0x3c
	// Func End, Address: 0x333904, Func Offset: 0x44
}

// 
// Start address: 0x333910
void RoomOutSideUsaBallDestruct(sfObj* obj)
{
	// Line 79, Address: 0x333910, Func Offset: 0
	// Line 81, Address: 0x333918, Func Offset: 0x8
	// Line 82, Address: 0x333920, Func Offset: 0x10
	// Line 83, Address: 0x333930, Func Offset: 0x20
	// Func End, Address: 0x33393c, Func Offset: 0x2c
}

// 
// Start address: 0x333940
void RoomOutSideUsaBallControl(sfObj* obj)
{
	sfCharacter* chara;
	float pos0[4];
	float pos1[4];
	float temp;
	float q[4];
	// Line 87, Address: 0x333940, Func Offset: 0
	// Line 89, Address: 0x333944, Func Offset: 0x4
	// Line 87, Address: 0x333948, Func Offset: 0x8
	// Line 89, Address: 0x33394c, Func Offset: 0xc
	// Line 87, Address: 0x333950, Func Offset: 0x10
	// Line 89, Address: 0x333954, Func Offset: 0x14
	// Line 87, Address: 0x333958, Func Offset: 0x18
	// Line 90, Address: 0x33395c, Func Offset: 0x1c
	// Line 87, Address: 0x333960, Func Offset: 0x20
	// Line 96, Address: 0x333964, Func Offset: 0x24
	// Line 89, Address: 0x333968, Func Offset: 0x28
	// Line 90, Address: 0x33396c, Func Offset: 0x2c
	// Line 89, Address: 0x333970, Func Offset: 0x30
	// Line 90, Address: 0x333974, Func Offset: 0x34
	// Line 96, Address: 0x333980, Func Offset: 0x40
	// Line 98, Address: 0x33398c, Func Offset: 0x4c
	// Line 99, Address: 0x3339ac, Func Offset: 0x6c
	// Line 100, Address: 0x3339b0, Func Offset: 0x70
	// Line 101, Address: 0x3339bc, Func Offset: 0x7c
	// Line 102, Address: 0x3339cc, Func Offset: 0x8c
	// Line 103, Address: 0x3339d0, Func Offset: 0x90
	// Line 104, Address: 0x3339dc, Func Offset: 0x9c
	// Line 105, Address: 0x3339e4, Func Offset: 0xa4
	// Line 108, Address: 0x333a10, Func Offset: 0xd0
	// Line 110, Address: 0x333a74, Func Offset: 0x134
	// Line 111, Address: 0x333a7c, Func Offset: 0x13c
	// Line 112, Address: 0x333a84, Func Offset: 0x144
	// Line 113, Address: 0x333a88, Func Offset: 0x148
	// Line 114, Address: 0x333aa4, Func Offset: 0x164
	// Line 115, Address: 0x333ab0, Func Offset: 0x170
	// Line 114, Address: 0x333ab4, Func Offset: 0x174
	// Line 115, Address: 0x333ab8, Func Offset: 0x178
	// Line 114, Address: 0x333abc, Func Offset: 0x17c
	// Line 115, Address: 0x333ac0, Func Offset: 0x180
	// Line 114, Address: 0x333ac8, Func Offset: 0x188
	// Line 115, Address: 0x333acc, Func Offset: 0x18c
	// Line 116, Address: 0x333af4, Func Offset: 0x1b4
	// Line 118, Address: 0x333afc, Func Offset: 0x1bc
	// Line 116, Address: 0x333b00, Func Offset: 0x1c0
	// Line 118, Address: 0x333b04, Func Offset: 0x1c4
	// Line 116, Address: 0x333b08, Func Offset: 0x1c8
	// Line 117, Address: 0x333b1c, Func Offset: 0x1dc
	// Line 118, Address: 0x333b20, Func Offset: 0x1e0
	// Line 119, Address: 0x333b28, Func Offset: 0x1e8
	// Line 120, Address: 0x333b54, Func Offset: 0x214
	// Line 119, Address: 0x333b58, Func Offset: 0x218
	// Line 121, Address: 0x333b5c, Func Offset: 0x21c
	// Line 120, Address: 0x333b60, Func Offset: 0x220
	// Line 121, Address: 0x333b64, Func Offset: 0x224
	// Line 119, Address: 0x333b68, Func Offset: 0x228
	// Line 121, Address: 0x333b6c, Func Offset: 0x22c
	// Line 120, Address: 0x333b70, Func Offset: 0x230
	// Line 121, Address: 0x333b78, Func Offset: 0x238
	// Line 122, Address: 0x333b80, Func Offset: 0x240
	// Line 125, Address: 0x333b8c, Func Offset: 0x24c
	// Line 128, Address: 0x333b90, Func Offset: 0x250
	// Line 129, Address: 0x333b98, Func Offset: 0x258
	// Func End, Address: 0x333bb0, Func Offset: 0x270
}

// 
// Start address: 0x333bb0
void RoomOutSideKubiInit()
{
	// Line 141, Address: 0x333bb0, Func Offset: 0
	// Line 142, Address: 0x333bb4, Func Offset: 0x4
	// Func End, Address: 0x333bbc, Func Offset: 0xc
}

// 
// Start address: 0x333bc0
int RoomOutSideKubiSetRand()
{
	// Line 146, Address: 0x333bc0, Func Offset: 0
	// Line 154, Address: 0x333bc8, Func Offset: 0x8
	// Line 156, Address: 0x333bf8, Func Offset: 0x38
	// Line 157, Address: 0x333bfc, Func Offset: 0x3c
	// Line 159, Address: 0x333c08, Func Offset: 0x48
	// Line 162, Address: 0x333c30, Func Offset: 0x70
	// Line 163, Address: 0x333c34, Func Offset: 0x74
	// Line 162, Address: 0x333c38, Func Offset: 0x78
	// Line 163, Address: 0x333c3c, Func Offset: 0x7c
	// Func End, Address: 0x333c44, Func Offset: 0x84
}

// 
// Start address: 0x333c50
void RoomOutSideKubiDestruct(sfObj* obj)
{
	// Line 168, Address: 0x333c50, Func Offset: 0
	// Func End, Address: 0x333c58, Func Offset: 0x8
}

// 
// Start address: 0x333c60
void RoomOutSideKubiControl(sfObj* obj)
{
	sfCharacter* chara;
	float pos[4];
	float temp_pos[4];
	float q0[4];
	float q1[4];
	float q2[4];
	float rot[4];
	float kaiten_rot[4];
	float fall_speed;
	float mat[4][4];
	float fall_far;
	// Line 173, Address: 0x333c60, Func Offset: 0
	// Line 179, Address: 0x333c64, Func Offset: 0x4
	// Line 173, Address: 0x333c68, Func Offset: 0x8
	// Line 180, Address: 0x333c6c, Func Offset: 0xc
	// Line 173, Address: 0x333c70, Func Offset: 0x10
	// Line 182, Address: 0x333c74, Func Offset: 0x14
	// Line 173, Address: 0x333c78, Func Offset: 0x18
	// Line 179, Address: 0x333c7c, Func Offset: 0x1c
	// Line 173, Address: 0x333c80, Func Offset: 0x20
	// Line 179, Address: 0x333c84, Func Offset: 0x24
	// Line 180, Address: 0x333c8c, Func Offset: 0x2c
	// Line 182, Address: 0x333c98, Func Offset: 0x38
	// Line 179, Address: 0x333ca0, Func Offset: 0x40
	// Line 184, Address: 0x333ca4, Func Offset: 0x44
	// Line 180, Address: 0x333ca8, Func Offset: 0x48
	// Line 182, Address: 0x333cb8, Func Offset: 0x58
	// Line 184, Address: 0x333cc0, Func Offset: 0x60
	// Line 186, Address: 0x333cf0, Func Offset: 0x90
	// Line 187, Address: 0x333cfc, Func Offset: 0x9c
	// Line 188, Address: 0x333d0c, Func Offset: 0xac
	// Line 189, Address: 0x333d10, Func Offset: 0xb0
	// Line 190, Address: 0x333d1c, Func Offset: 0xbc
	// Line 191, Address: 0x333d24, Func Offset: 0xc4
	// Line 194, Address: 0x333d50, Func Offset: 0xf0
	// Line 195, Address: 0x333d5c, Func Offset: 0xfc
	// Line 196, Address: 0x333d68, Func Offset: 0x108
	// Line 197, Address: 0x333d74, Func Offset: 0x114
	// Line 199, Address: 0x333d80, Func Offset: 0x120
	// Line 197, Address: 0x333d84, Func Offset: 0x124
	// Line 199, Address: 0x333d88, Func Offset: 0x128
	// Line 197, Address: 0x333d8c, Func Offset: 0x12c
	// Line 200, Address: 0x333d9c, Func Offset: 0x13c
	// Line 201, Address: 0x333da4, Func Offset: 0x144
	// Line 202, Address: 0x333dac, Func Offset: 0x14c
	// Line 203, Address: 0x333db0, Func Offset: 0x150
	// Line 204, Address: 0x333dd8, Func Offset: 0x178
	// Line 205, Address: 0x333ddc, Func Offset: 0x17c
	// Line 206, Address: 0x333de4, Func Offset: 0x184
	// Line 207, Address: 0x333df0, Func Offset: 0x190
	// Line 208, Address: 0x333e28, Func Offset: 0x1c8
	// Line 209, Address: 0x333e30, Func Offset: 0x1d0
	// Line 208, Address: 0x333e34, Func Offset: 0x1d4
	// Line 209, Address: 0x333e38, Func Offset: 0x1d8
	// Line 208, Address: 0x333e3c, Func Offset: 0x1dc
	// Line 209, Address: 0x333e40, Func Offset: 0x1e0
	// Line 211, Address: 0x333e48, Func Offset: 0x1e8
	// Line 212, Address: 0x333e58, Func Offset: 0x1f8
	// Line 213, Address: 0x333e64, Func Offset: 0x204
	// Line 214, Address: 0x333e70, Func Offset: 0x210
	// Line 213, Address: 0x333e74, Func Offset: 0x214
	// Line 215, Address: 0x333e94, Func Offset: 0x234
	// Line 216, Address: 0x333ea8, Func Offset: 0x248
	// Line 215, Address: 0x333eac, Func Offset: 0x24c
	// Line 216, Address: 0x333eb0, Func Offset: 0x250
	// Line 215, Address: 0x333eb4, Func Offset: 0x254
	// Line 216, Address: 0x333ebc, Func Offset: 0x25c
	// Line 217, Address: 0x333ec4, Func Offset: 0x264
	// Line 218, Address: 0x333ed4, Func Offset: 0x274
	// Line 219, Address: 0x333ee4, Func Offset: 0x284
	// Line 220, Address: 0x333ef0, Func Offset: 0x290
	// Line 221, Address: 0x333f04, Func Offset: 0x2a4
	// Line 222, Address: 0x333f38, Func Offset: 0x2d8
	// Line 224, Address: 0x333f40, Func Offset: 0x2e0
	// Line 226, Address: 0x333f48, Func Offset: 0x2e8
	// Line 227, Address: 0x333f4c, Func Offset: 0x2ec
	// Line 228, Address: 0x333f54, Func Offset: 0x2f4
	// Line 229, Address: 0x333f58, Func Offset: 0x2f8
	// Line 228, Address: 0x333f5c, Func Offset: 0x2fc
	// Line 229, Address: 0x333f60, Func Offset: 0x300
	// Line 228, Address: 0x333f64, Func Offset: 0x304
	// Line 229, Address: 0x333f6c, Func Offset: 0x30c
	// Line 230, Address: 0x333f74, Func Offset: 0x314
	// Line 231, Address: 0x333f80, Func Offset: 0x320
	// Line 232, Address: 0x333f90, Func Offset: 0x330
	// Line 233, Address: 0x333fa0, Func Offset: 0x340
	// Line 234, Address: 0x333fac, Func Offset: 0x34c
	// Line 235, Address: 0x333fc8, Func Offset: 0x368
	// Line 250, Address: 0x333fd4, Func Offset: 0x374
	// Line 253, Address: 0x333fd8, Func Offset: 0x378
	// Line 254, Address: 0x333fe0, Func Offset: 0x380
	// Func End, Address: 0x333ff8, Func Offset: 0x398
}

