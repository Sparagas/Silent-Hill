typedef struct _anon0;
typedef struct sfCharacter;
typedef struct sgAnime;
typedef struct sgBone;
typedef struct sgIKHandle;
typedef struct _anon1;
typedef struct sfObj;
typedef struct sgSVModel;
typedef struct _anon2;
typedef union _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef enum sgLightType : unsigned char;
typedef struct _anon6;
typedef enum sgIKSolveResult : unsigned char;

typedef void(*type_0)(sfObj*);
typedef void(*type_5)(sgAnime*, int);
typedef void(*type_9)(int);
typedef void(*type_10)(sfObj*);
typedef void(*type_11)(sfObj*);
typedef void(*type_12)(_anon4*, int, int, float*);
typedef void(*type_19)(sfObj*);
typedef void(*type_21)(sfObj*);
typedef sgIKSolveResult(*type_22)();

typedef void* type_1[4];
typedef float type_2[4];
typedef float type_3[4];
typedef float type_4[4][4];
typedef sfObj* type_6[30];
typedef unsigned char type_7[4];
typedef _anon3 type_8[256];
typedef short type_13[2];
typedef unsigned short type_14[2];
typedef char type_15[4];
typedef unsigned char type_16[4];
typedef float type_17[1];
typedef int type_18[1];
typedef float type_20[4][2];
typedef float type_23[4];
typedef _anon2 type_24[0];

struct _anon0
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
	_anon5 model_work;
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
	float pos0[4];
	float spot[4];
	float level;
	float damage;
	int stat;
	int timer;
	int mdl_disp;
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

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
};

struct _anon2
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
	unsigned long tex0;
	unsigned long clamp;
};

struct _anon5
{
	void* model;
	void* texture;
	void* texture_global;
	float matrices[4][4];
	float* weights;
	float tex_crops[4];
	void(*texture_load_func)(_anon4*, int, int, float*);
	int equip_flag;
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

struct _anon6
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

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

_anon0* PDWptr;
float sg_vector_unit_y[4];
void(*PhenomDollSub)(sfObj*);
float lit_dirction[4];
float lit_color[4];
float lit_pos[4];
unsigned int doll_light_id;
_anon6 doll_light;
int doll_app_flag;
void(*PhenomDebugDrawFunc)(sfObj*);
_anon2 phenom_data[0];
void(*PhenomDollMain)(sfObj*);

void PhenomDollSub(sfObj* obj);
void OrderDollDisappear(sfObj* obj, int t);
int PhenomCheckDollSub();
void PhenomDollSetLight();
void PhenomDollRemoveLight();
void PhenomDollMain(sfObj* obj);
void PhenomDollInit(int n);

// 
// Start address: 0x2a8a00
void PhenomDollSub(sfObj* obj)
{
	_anon0* pppptr;
	sfCharacter* chara;
	float q[4];
	float last_pos[4];
	sgAnime* anm;
	// Line 35, Address: 0x2a8a00, Func Offset: 0
	// Line 44, Address: 0x2a8a04, Func Offset: 0x4
	// Line 35, Address: 0x2a8a08, Func Offset: 0x8
	// Line 42, Address: 0x2a8a20, Func Offset: 0x20
	// Line 44, Address: 0x2a8a24, Func Offset: 0x24
	// Line 45, Address: 0x2a8a74, Func Offset: 0x74
	// Line 48, Address: 0x2a8a78, Func Offset: 0x78
	// Line 50, Address: 0x2a8a84, Func Offset: 0x84
	// Line 52, Address: 0x2a8aa4, Func Offset: 0xa4
	// Line 54, Address: 0x2a8ab0, Func Offset: 0xb0
	// Line 55, Address: 0x2a8acc, Func Offset: 0xcc
	// Line 58, Address: 0x2a8ad8, Func Offset: 0xd8
	// Line 60, Address: 0x2a8ae8, Func Offset: 0xe8
	// Line 67, Address: 0x2a8af0, Func Offset: 0xf0
	// Line 70, Address: 0x2a8af8, Func Offset: 0xf8
	// Line 73, Address: 0x2a8b00, Func Offset: 0x100
	// Line 75, Address: 0x2a8b04, Func Offset: 0x104
	// Line 73, Address: 0x2a8b08, Func Offset: 0x108
	// Line 75, Address: 0x2a8b10, Func Offset: 0x110
	// Line 79, Address: 0x2a8b18, Func Offset: 0x118
	// Line 77, Address: 0x2a8b1c, Func Offset: 0x11c
	// Line 78, Address: 0x2a8b28, Func Offset: 0x128
	// Line 77, Address: 0x2a8b34, Func Offset: 0x134
	// Line 78, Address: 0x2a8b3c, Func Offset: 0x13c
	// Line 79, Address: 0x2a8b54, Func Offset: 0x154
	// Line 81, Address: 0x2a8b5c, Func Offset: 0x15c
	// Line 82, Address: 0x2a8b74, Func Offset: 0x174
	// Line 84, Address: 0x2a8b7c, Func Offset: 0x17c
	// Line 85, Address: 0x2a8b80, Func Offset: 0x180
	// Line 86, Address: 0x2a8b94, Func Offset: 0x194
	// Line 87, Address: 0x2a8bec, Func Offset: 0x1ec
	// Line 88, Address: 0x2a8bf0, Func Offset: 0x1f0
	// Line 89, Address: 0x2a8c00, Func Offset: 0x200
	// Line 91, Address: 0x2a8c08, Func Offset: 0x208
	// Line 92, Address: 0x2a8c18, Func Offset: 0x218
	// Line 94, Address: 0x2a8c20, Func Offset: 0x220
	// Line 95, Address: 0x2a8c30, Func Offset: 0x230
	// Line 97, Address: 0x2a8c38, Func Offset: 0x238
	// Line 98, Address: 0x2a8c48, Func Offset: 0x248
	// Line 100, Address: 0x2a8c50, Func Offset: 0x250
	// Line 103, Address: 0x2a8c60, Func Offset: 0x260
	// Line 105, Address: 0x2a8c68, Func Offset: 0x268
	// Line 107, Address: 0x2a8c70, Func Offset: 0x270
	// Line 108, Address: 0x2a8c7c, Func Offset: 0x27c
	// Line 109, Address: 0x2a8ca8, Func Offset: 0x2a8
	// Line 111, Address: 0x2a8cb0, Func Offset: 0x2b0
	// Line 117, Address: 0x2a8cb8, Func Offset: 0x2b8
	// Line 118, Address: 0x2a8cd0, Func Offset: 0x2d0
	// Line 120, Address: 0x2a8cd8, Func Offset: 0x2d8
	// Line 123, Address: 0x2a8ce4, Func Offset: 0x2e4
	// Line 122, Address: 0x2a8ce8, Func Offset: 0x2e8
	// Line 123, Address: 0x2a8d08, Func Offset: 0x308
	// Line 124, Address: 0x2a8d10, Func Offset: 0x310
	// Line 125, Address: 0x2a8d2c, Func Offset: 0x32c
	// Line 126, Address: 0x2a8d34, Func Offset: 0x334
	// Line 127, Address: 0x2a8d38, Func Offset: 0x338
	// Line 128, Address: 0x2a8d4c, Func Offset: 0x34c
	// Line 130, Address: 0x2a8d54, Func Offset: 0x354
	// Line 131, Address: 0x2a8d5c, Func Offset: 0x35c
	// Line 132, Address: 0x2a8d60, Func Offset: 0x360
	// Line 142, Address: 0x2a8d70, Func Offset: 0x370
	// Func End, Address: 0x2a8d8c, Func Offset: 0x38c
}

// 
// Start address: 0x2a8d90
void OrderDollDisappear(sfObj* obj, int t)
{
	// Line 150, Address: 0x2a8d90, Func Offset: 0
	// Line 151, Address: 0x2a8d94, Func Offset: 0x4
	// Line 150, Address: 0x2a8d98, Func Offset: 0x8
	// Line 152, Address: 0x2a8d9c, Func Offset: 0xc
	// Func End, Address: 0x2a8da4, Func Offset: 0x14
}

// 
// Start address: 0x2a8db0
int PhenomCheckDollSub()
{
	// Line 157, Address: 0x2a8db0, Func Offset: 0
	// Line 158, Address: 0x2a8db4, Func Offset: 0x4
	// Line 157, Address: 0x2a8db8, Func Offset: 0x8
	// Line 158, Address: 0x2a8dbc, Func Offset: 0xc
	// Line 159, Address: 0x2a8dc4, Func Offset: 0x14
	// Line 158, Address: 0x2a8dc8, Func Offset: 0x18
	// Line 159, Address: 0x2a8dcc, Func Offset: 0x1c
	// Func End, Address: 0x2a8dd4, Func Offset: 0x24
}

// 
// Start address: 0x2a8de0
void PhenomDollSetLight()
{
	float v[4];
	// Line 173, Address: 0x2a8de0, Func Offset: 0
	// Line 176, Address: 0x2a8de4, Func Offset: 0x4
	// Line 173, Address: 0x2a8de8, Func Offset: 0x8
	// Line 176, Address: 0x2a8dec, Func Offset: 0xc
	// Line 178, Address: 0x2a8df4, Func Offset: 0x14
	// Line 179, Address: 0x2a8e04, Func Offset: 0x24
	// Line 181, Address: 0x2a8e18, Func Offset: 0x38
	// Line 182, Address: 0x2a8e34, Func Offset: 0x54
	// Line 183, Address: 0x2a8e64, Func Offset: 0x84
	// Line 184, Address: 0x2a8e74, Func Offset: 0x94
	// Line 185, Address: 0x2a8e88, Func Offset: 0xa8
	// Line 187, Address: 0x2a8e9c, Func Offset: 0xbc
	// Func End, Address: 0x2a8ea8, Func Offset: 0xc8
}

// 
// Start address: 0x2a8eb0
void PhenomDollRemoveLight()
{
	// Line 189, Address: 0x2a8eb0, Func Offset: 0
	// Line 190, Address: 0x2a8ebc, Func Offset: 0xc
	// Line 189, Address: 0x2a8ec0, Func Offset: 0x10
	// Line 190, Address: 0x2a8ec4, Func Offset: 0x14
	// Line 191, Address: 0x2a8ecc, Func Offset: 0x1c
	// Line 192, Address: 0x2a8ed4, Func Offset: 0x24
	// Line 194, Address: 0x2a8ee0, Func Offset: 0x30
	// Func End, Address: 0x2a8eec, Func Offset: 0x3c
}

// 
// Start address: 0x2a8ef0
void PhenomDollMain(sfObj* obj)
{
	_anon0* ppptr;
	_anon1* pptr;
	int level;
	int stat;
	int i;
	int j;
	int n;
	int ins;
	_anon0* pppptr;
	_anon0* ssptr;
	sfObj* optr;
	float y;
	float z;
	float r;
	// Line 198, Address: 0x2a8ef0, Func Offset: 0
	// Line 209, Address: 0x2a8f44, Func Offset: 0x54
	// Line 210, Address: 0x2a8f48, Func Offset: 0x58
	// Line 211, Address: 0x2a8f50, Func Offset: 0x60
	// Line 214, Address: 0x2a8f54, Func Offset: 0x64
	// Line 218, Address: 0x2a8f78, Func Offset: 0x88
	// Line 219, Address: 0x2a8f88, Func Offset: 0x98
	// Line 220, Address: 0x2a8f90, Func Offset: 0xa0
	// Line 222, Address: 0x2a8fb8, Func Offset: 0xc8
	// Line 223, Address: 0x2a8fc0, Func Offset: 0xd0
	// Line 227, Address: 0x2a8ff0, Func Offset: 0x100
	// Line 224, Address: 0x2a8ffc, Func Offset: 0x10c
	// Line 230, Address: 0x2a9000, Func Offset: 0x110
	// Line 227, Address: 0x2a900c, Func Offset: 0x11c
	// Line 228, Address: 0x2a901c, Func Offset: 0x12c
	// Line 231, Address: 0x2a9040, Func Offset: 0x150
	// Line 232, Address: 0x2a904c, Func Offset: 0x15c
	// Line 233, Address: 0x2a905c, Func Offset: 0x16c
	// Line 238, Address: 0x2a906c, Func Offset: 0x17c
	// Line 234, Address: 0x2a9070, Func Offset: 0x180
	// Line 236, Address: 0x2a9074, Func Offset: 0x184
	// Line 239, Address: 0x2a907c, Func Offset: 0x18c
	// Line 235, Address: 0x2a9080, Func Offset: 0x190
	// Line 236, Address: 0x2a9084, Func Offset: 0x194
	// Line 241, Address: 0x2a9088, Func Offset: 0x198
	// Line 242, Address: 0x2a9090, Func Offset: 0x1a0
	// Line 244, Address: 0x2a909c, Func Offset: 0x1ac
	// Line 246, Address: 0x2a90b4, Func Offset: 0x1c4
	// Line 247, Address: 0x2a90c0, Func Offset: 0x1d0
	// Line 248, Address: 0x2a90c4, Func Offset: 0x1d4
	// Line 247, Address: 0x2a90c8, Func Offset: 0x1d8
	// Line 248, Address: 0x2a90cc, Func Offset: 0x1dc
	// Line 249, Address: 0x2a90e8, Func Offset: 0x1f8
	// Line 251, Address: 0x2a9108, Func Offset: 0x218
	// Line 252, Address: 0x2a9118, Func Offset: 0x228
	// Line 255, Address: 0x2a9120, Func Offset: 0x230
	// Line 256, Address: 0x2a9130, Func Offset: 0x240
	// Line 257, Address: 0x2a9144, Func Offset: 0x254
	// Line 258, Address: 0x2a9148, Func Offset: 0x258
	// Line 262, Address: 0x2a9150, Func Offset: 0x260
	// Line 260, Address: 0x2a9154, Func Offset: 0x264
	// Line 262, Address: 0x2a9158, Func Offset: 0x268
	// Line 260, Address: 0x2a915c, Func Offset: 0x26c
	// Line 261, Address: 0x2a9164, Func Offset: 0x274
	// Line 262, Address: 0x2a916c, Func Offset: 0x27c
	// Line 263, Address: 0x2a9174, Func Offset: 0x284
	// Line 264, Address: 0x2a9178, Func Offset: 0x288
	// Line 265, Address: 0x2a9184, Func Offset: 0x294
	// Line 268, Address: 0x2a9190, Func Offset: 0x2a0
	// Line 292, Address: 0x2a919c, Func Offset: 0x2ac
	// Line 295, Address: 0x2a91a0, Func Offset: 0x2b0
	// Line 296, Address: 0x2a91ac, Func Offset: 0x2bc
	// Line 297, Address: 0x2a91b4, Func Offset: 0x2c4
	// Line 300, Address: 0x2a91bc, Func Offset: 0x2cc
	// Line 301, Address: 0x2a91c4, Func Offset: 0x2d4
	// Line 303, Address: 0x2a91c8, Func Offset: 0x2d8
	// Line 304, Address: 0x2a91d4, Func Offset: 0x2e4
	// Line 305, Address: 0x2a91dc, Func Offset: 0x2ec
	// Line 306, Address: 0x2a91ec, Func Offset: 0x2fc
	// Line 307, Address: 0x2a91f4, Func Offset: 0x304
	// Line 308, Address: 0x2a91fc, Func Offset: 0x30c
	// Line 310, Address: 0x2a9210, Func Offset: 0x320
	// Line 311, Address: 0x2a9220, Func Offset: 0x330
	// Line 315, Address: 0x2a9228, Func Offset: 0x338
	// Func End, Address: 0x2a927c, Func Offset: 0x38c
}

// 
// Start address: 0x2a9280
void PhenomDollInit(int n)
{
	_anon0* ppptr;
	sfObj* optr;
	// Line 319, Address: 0x2a9280, Func Offset: 0
	// Line 325, Address: 0x2a9284, Func Offset: 0x4
	// Line 319, Address: 0x2a9288, Func Offset: 0x8
	// Line 324, Address: 0x2a928c, Func Offset: 0xc
	// Line 319, Address: 0x2a9290, Func Offset: 0x10
	// Line 325, Address: 0x2a9298, Func Offset: 0x18
	// Line 324, Address: 0x2a92a0, Func Offset: 0x20
	// Line 327, Address: 0x2a92a4, Func Offset: 0x24
	// Line 328, Address: 0x2a92b0, Func Offset: 0x30
	// Line 329, Address: 0x2a92c0, Func Offset: 0x40
	// Line 331, Address: 0x2a92d0, Func Offset: 0x50
	// Line 330, Address: 0x2a92d4, Func Offset: 0x54
	// Line 332, Address: 0x2a92d8, Func Offset: 0x58
	// Line 331, Address: 0x2a92f0, Func Offset: 0x70
	// Line 332, Address: 0x2a92f4, Func Offset: 0x74
	// Line 335, Address: 0x2a92fc, Func Offset: 0x7c
	// Line 333, Address: 0x2a9300, Func Offset: 0x80
	// Line 335, Address: 0x2a9304, Func Offset: 0x84
	// Line 336, Address: 0x2a930c, Func Offset: 0x8c
	// Line 363, Address: 0x2a931c, Func Offset: 0x9c
	// Func End, Address: 0x2a9330, Func Offset: 0xb0
}

