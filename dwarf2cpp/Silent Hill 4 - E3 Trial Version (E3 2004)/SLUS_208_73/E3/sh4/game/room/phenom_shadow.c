typedef struct sfObj;
typedef struct sfCharacter;
typedef struct sgAnime;
typedef struct sgBone;
typedef struct sgIKHandle;
typedef struct sgSVModel;
typedef union _anon0;
typedef enum sgLightType : unsigned char;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef enum sgIKSolveResult : unsigned char;
typedef struct _anon5;

typedef void(*type_4)(sgAnime*, int);
typedef void(*type_7)(sfObj*);
typedef void(*type_8)(sfObj*);
typedef void(*type_9)(sfObj*);
typedef void(*type_10)(sfObj*);
typedef void(*type_11)(_anon1*, int, int, float*);
typedef void(*type_18)(sfObj*);
typedef sgIKSolveResult(*type_20)();

typedef void* type_0[4];
typedef float type_1[4];
typedef float type_2[4];
typedef float type_3[4][4];
typedef unsigned char type_5[4];
typedef _anon0 type_6[256];
typedef short type_12[2];
typedef unsigned short type_13[2];
typedef char type_14[4];
typedef unsigned char type_15[4];
typedef float type_16[1];
typedef int type_17[1];
typedef float type_19[4][2];
typedef float type_21[4];
typedef sfObj* type_22[30];

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

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon2 model_work;
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

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
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

struct _anon3
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

struct _anon4
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

struct _anon5
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

float lit_dirction[4];
float lit_color[4];
float lit_pos[4];
unsigned int shadow_light_id;
_anon3 shadow_light;
void(*PhenomCommonDestruct)(sfObj*);
void(*PhenomDebugDrawFunc)(sfObj*);
float PhenomNullPos[4];
void(*PhenomShadowMain)(sfObj*);

void PhenomShadowSetLight();
void PhenomShadowRemoveLight();
void PhenomShadowMain(sfObj* obj);
void PhenomShadowInit(int n);

// 
// Start address: 0x2c5fe0
void PhenomShadowSetLight()
{
	float v[4];
	// Line 38, Address: 0x2c5fe0, Func Offset: 0
	// Line 41, Address: 0x2c5fe4, Func Offset: 0x4
	// Line 38, Address: 0x2c5fe8, Func Offset: 0x8
	// Line 41, Address: 0x2c5fec, Func Offset: 0xc
	// Line 43, Address: 0x2c5ffc, Func Offset: 0x1c
	// Line 45, Address: 0x2c6004, Func Offset: 0x24
	// Line 46, Address: 0x2c6014, Func Offset: 0x34
	// Line 47, Address: 0x2c6028, Func Offset: 0x48
	// Line 48, Address: 0x2c6044, Func Offset: 0x64
	// Line 49, Address: 0x2c6074, Func Offset: 0x94
	// Line 50, Address: 0x2c6084, Func Offset: 0xa4
	// Line 52, Address: 0x2c6098, Func Offset: 0xb8
	// Line 54, Address: 0x2c60a8, Func Offset: 0xc8
	// Line 52, Address: 0x2c60ac, Func Offset: 0xcc
	// Line 54, Address: 0x2c60b0, Func Offset: 0xd0
	// Line 55, Address: 0x2c60c0, Func Offset: 0xe0
	// Line 57, Address: 0x2c60d0, Func Offset: 0xf0
	// Func End, Address: 0x2c60dc, Func Offset: 0xfc
}

// 
// Start address: 0x2c60e0
void PhenomShadowRemoveLight()
{
	// Line 59, Address: 0x2c60e0, Func Offset: 0
	// Line 60, Address: 0x2c60ec, Func Offset: 0xc
	// Line 59, Address: 0x2c60f0, Func Offset: 0x10
	// Line 60, Address: 0x2c60f4, Func Offset: 0x14
	// Line 61, Address: 0x2c60fc, Func Offset: 0x1c
	// Line 62, Address: 0x2c6104, Func Offset: 0x24
	// Line 64, Address: 0x2c6110, Func Offset: 0x30
	// Func End, Address: 0x2c611c, Func Offset: 0x3c
}

// 
// Start address: 0x2c6120
void PhenomShadowMain(sfObj* obj)
{
	_anon5* ppptr;
	_anon4* pptr;
	float last_pos[4];
	int level;
	int stat;
	sfCharacter* chara;
	sgAnime* anm;
	// Line 67, Address: 0x2c6120, Func Offset: 0
	// Line 75, Address: 0x2c6140, Func Offset: 0x20
	// Line 76, Address: 0x2c6144, Func Offset: 0x24
	// Line 78, Address: 0x2c614c, Func Offset: 0x2c
	// Line 80, Address: 0x2c6150, Func Offset: 0x30
	// Line 81, Address: 0x2c6154, Func Offset: 0x34
	// Line 83, Address: 0x2c6160, Func Offset: 0x40
	// Line 84, Address: 0x2c616c, Func Offset: 0x4c
	// Line 85, Address: 0x2c6194, Func Offset: 0x74
	// Line 86, Address: 0x2c6198, Func Offset: 0x78
	// Line 87, Address: 0x2c61b0, Func Offset: 0x90
	// Line 89, Address: 0x2c61b8, Func Offset: 0x98
	// Line 90, Address: 0x2c61c8, Func Offset: 0xa8
	// Line 91, Address: 0x2c61d0, Func Offset: 0xb0
	// Line 92, Address: 0x2c620c, Func Offset: 0xec
	// Line 93, Address: 0x2c6210, Func Offset: 0xf0
	// Line 94, Address: 0x2c622c, Func Offset: 0x10c
	// Line 95, Address: 0x2c6234, Func Offset: 0x114
	// Line 97, Address: 0x2c6238, Func Offset: 0x118
	// Line 98, Address: 0x2c623c, Func Offset: 0x11c
	// Line 99, Address: 0x2c6244, Func Offset: 0x124
	// Line 100, Address: 0x2c6248, Func Offset: 0x128
	// Line 101, Address: 0x2c6268, Func Offset: 0x148
	// Line 102, Address: 0x2c627c, Func Offset: 0x15c
	// Line 103, Address: 0x2c6284, Func Offset: 0x164
	// Line 112, Address: 0x2c628c, Func Offset: 0x16c
	// Line 113, Address: 0x2c6290, Func Offset: 0x170
	// Line 115, Address: 0x2c62b8, Func Offset: 0x198
	// Line 117, Address: 0x2c62c8, Func Offset: 0x1a8
	// Line 119, Address: 0x2c62d0, Func Offset: 0x1b0
	// Line 123, Address: 0x2c62e0, Func Offset: 0x1c0
	// Line 124, Address: 0x2c62e8, Func Offset: 0x1c8
	// Line 126, Address: 0x2c62f0, Func Offset: 0x1d0
	// Line 127, Address: 0x2c6310, Func Offset: 0x1f0
	// Line 128, Address: 0x2c631c, Func Offset: 0x1fc
	// Line 136, Address: 0x2c6324, Func Offset: 0x204
	// Line 142, Address: 0x2c6328, Func Offset: 0x208
	// Line 143, Address: 0x2c6334, Func Offset: 0x214
	// Line 144, Address: 0x2c633c, Func Offset: 0x21c
	// Line 146, Address: 0x2c6344, Func Offset: 0x224
	// Line 147, Address: 0x2c634c, Func Offset: 0x22c
	// Line 149, Address: 0x2c6350, Func Offset: 0x230
	// Line 150, Address: 0x2c635c, Func Offset: 0x23c
	// Line 151, Address: 0x2c6364, Func Offset: 0x244
	// Line 155, Address: 0x2c6380, Func Offset: 0x260
	// Line 157, Address: 0x2c638c, Func Offset: 0x26c
	// Line 163, Address: 0x2c639c, Func Offset: 0x27c
	// Func End, Address: 0x2c63bc, Func Offset: 0x29c
}

// 
// Start address: 0x2c63c0
void PhenomShadowInit(int n)
{
	_anon5* ppptr;
	sfCharacter* chara;
	sfObj* optr;
	// Line 166, Address: 0x2c63c0, Func Offset: 0
	// Line 171, Address: 0x2c63c4, Func Offset: 0x4
	// Line 166, Address: 0x2c63c8, Func Offset: 0x8
	// Line 171, Address: 0x2c63cc, Func Offset: 0xc
	// Line 166, Address: 0x2c63d0, Func Offset: 0x10
	// Line 173, Address: 0x2c63e4, Func Offset: 0x24
	// Line 174, Address: 0x2c63f0, Func Offset: 0x30
	// Line 175, Address: 0x2c6400, Func Offset: 0x40
	// Line 178, Address: 0x2c6410, Func Offset: 0x50
	// Line 176, Address: 0x2c6414, Func Offset: 0x54
	// Line 178, Address: 0x2c6418, Func Offset: 0x58
	// Line 181, Address: 0x2c6424, Func Offset: 0x64
	// Line 182, Address: 0x2c6434, Func Offset: 0x74
	// Line 185, Address: 0x2c6444, Func Offset: 0x84
	// Line 184, Address: 0x2c6448, Func Offset: 0x88
	// Line 185, Address: 0x2c644c, Func Offset: 0x8c
	// Line 190, Address: 0x2c6474, Func Offset: 0xb4
	// Line 191, Address: 0x2c6484, Func Offset: 0xc4
	// Line 194, Address: 0x2c6490, Func Offset: 0xd0
	// Line 196, Address: 0x2c64a8, Func Offset: 0xe8
	// Line 198, Address: 0x2c64b4, Func Offset: 0xf4
	// Line 199, Address: 0x2c64c4, Func Offset: 0x104
	// Func End, Address: 0x2c64e0, Func Offset: 0x120
}

