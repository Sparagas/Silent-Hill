typedef struct EnemyEffectStickyWork;
typedef struct EnemyEffectStickyData;
typedef enum EnemyTexIdentity : unsigned char;
typedef struct EnemyEffectStickyBone;
typedef struct sfObj;
typedef union _anon0;
typedef struct sfAllocateList;
typedef struct sgBone;
typedef struct _anon1;
typedef struct EnemyTexParameter;

typedef void(*type_7)(sfObj*);
typedef void(*type_9)(sfObj*);

typedef float type_0[3];
typedef float type_1[3];
typedef float type_2[3];
typedef float type_3[3];
typedef float type_4[3];
typedef _anon0 type_5[256];
typedef float type_6[4];
typedef float type_8[4];
typedef short type_10[2];
typedef unsigned short type_11[2];
typedef char type_12[4];
typedef unsigned char type_13[4];
typedef float type_14[1];
typedef int type_15[1];
typedef _anon1 type_16[2];

struct EnemyEffectStickyWork
{
	sfAllocateList work_list;
	sfObj* parent;
	EnemyEffectStickyBone* data_addr;
	int data_max;
	float wall_pos[3];
	float wall_normal[3];
};

struct EnemyEffectStickyData
{
	float wpos[3];
	float bpos[3];
	char type;
	char dir;
	char snap_on;
	char ignore;
	float snap_range;
	float shrink_rate;
};

enum EnemyTexIdentity : unsigned char
{
	EN_TEX_ID_COALTAR,
	EN_TEX_ID_GHOSTSTAIN,
	EN_TEX_ID_CELL,
	EN_TEX_ID_CELL2,
	EN_TEX_ID_MUCUS,
	EN_TEX_ID_CRUSH_HIL,
	EN_TEX_ID_EARTHWORM,
	EN_TEX_ID_EARTHWORM2,
	EN_TEX_ID_EARTHWORM3,
	EN_TEX_ID_EARTHWORM4,
	EN_TEX_ID_BLOODPOOL,
	EN_TEX_ID_FLAME1,
	EN_TEX_ID_FLAME2,
	EN_TEX_ID_TOACH,
	EN_TEX_ID_FIRE,
	EN_TEX_ID_FIRELIGHT,
	EN_TEX_ID_WALL,
	EN_TEX_ID_MAX
};

struct EnemyEffectStickyBone
{
	int bone;
	float pos[3];
	float y_deviation;
	int direction;
};

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

struct sfAllocateList
{
	char* work_top;
	unsigned int size;
	int number;
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

struct _anon1
{
	float S;
	float T;
};

struct EnemyTexParameter
{
	_anon1 st[2];
	EnemyTexIdentity texid;
	unsigned long clamp;
	int rotate;
};


EnemyEffectStickyWork* EnemyEffectStickyConstruct(sfObj* obj, EnemyEffectStickyBone* psb, int data_max);
void EnemyEffectStickyDestruct(EnemyEffectStickyWork* esw);
void EnemyEffectStickyStart(EnemyEffectStickyWork* esw, float* wall_pos, float* normal);
void EnemyEffectStickyCut(EnemyEffectStickyWork* esw);
void EnemyEffectStickyErase(EnemyEffectStickyWork* esw);
int EnemyEffectStickyCheckDisappear(EnemyEffectStickyWork* esw);
void EnemyEffectStickyControl(EnemyEffectStickyWork* esw);
void EnemyEffectStickyDraw(EnemyEffectStickyWork* esw);

// 
// Start address: 0x27bc40
EnemyEffectStickyWork* EnemyEffectStickyConstruct(sfObj* obj, EnemyEffectStickyBone* psb, int data_max)
{
	EnemyEffectStickyWork* esw;
	// Line 52, Address: 0x27bc40, Func Offset: 0
	// Line 54, Address: 0x27bc60, Func Offset: 0x20
	// Line 56, Address: 0x27bc70, Func Offset: 0x30
	// Line 57, Address: 0x27bc7c, Func Offset: 0x3c
	// Line 60, Address: 0x27bc80, Func Offset: 0x40
	// Line 58, Address: 0x27bc84, Func Offset: 0x44
	// Line 59, Address: 0x27bc88, Func Offset: 0x48
	// Line 61, Address: 0x27bc8c, Func Offset: 0x4c
	// Func End, Address: 0x27bca8, Func Offset: 0x68
}

// 
// Start address: 0x27bcb0
void EnemyEffectStickyDestruct(EnemyEffectStickyWork* esw)
{
	// Line 67, Address: 0x27bcb0, Func Offset: 0
	// Line 68, Address: 0x27bcb4, Func Offset: 0x4
	// Line 69, Address: 0x27bcbc, Func Offset: 0xc
	// Line 70, Address: 0x27bcc4, Func Offset: 0x14
	// Func End, Address: 0x27bcd4, Func Offset: 0x24
}

// 
// Start address: 0x27bce0
void EnemyEffectStickyStart(EnemyEffectStickyWork* esw, float* wall_pos, float* normal)
{
	EnemyEffectStickyData* ec;
	float pos[4];
	float vec[4];
	float vertical[4];
	int n;
	sfAllocateList* pwl;
	sfObj* obj;
	float d;
	// Line 79, Address: 0x27bce0, Func Offset: 0
	// Line 86, Address: 0x27bd08, Func Offset: 0x28
	// Line 87, Address: 0x27bd10, Func Offset: 0x30
	// Line 88, Address: 0x27bd18, Func Offset: 0x38
	// Line 90, Address: 0x27bd24, Func Offset: 0x44
	// Line 91, Address: 0x27bd28, Func Offset: 0x48
	// Line 92, Address: 0x27bd30, Func Offset: 0x50
	// Line 93, Address: 0x27bd3c, Func Offset: 0x5c
	// Line 94, Address: 0x27bd44, Func Offset: 0x64
	// Line 95, Address: 0x27bd68, Func Offset: 0x88
	// Line 96, Address: 0x27bd84, Func Offset: 0xa4
	// Line 97, Address: 0x27bda4, Func Offset: 0xc4
	// Line 98, Address: 0x27bdc4, Func Offset: 0xe4
	// Line 99, Address: 0x27bde4, Func Offset: 0x104
	// Line 100, Address: 0x27be20, Func Offset: 0x140
	// Line 101, Address: 0x27be40, Func Offset: 0x160
	// Line 102, Address: 0x27be4c, Func Offset: 0x16c
	// Line 103, Address: 0x27be78, Func Offset: 0x198
	// Line 104, Address: 0x27be98, Func Offset: 0x1b8
	// Line 105, Address: 0x27beac, Func Offset: 0x1cc
	// Line 106, Address: 0x27beb8, Func Offset: 0x1d8
	// Line 108, Address: 0x27bec8, Func Offset: 0x1e8
	// Line 106, Address: 0x27becc, Func Offset: 0x1ec
	// Line 107, Address: 0x27bed8, Func Offset: 0x1f8
	// Line 109, Address: 0x27bedc, Func Offset: 0x1fc
	// Line 112, Address: 0x27bef0, Func Offset: 0x210
	// Line 109, Address: 0x27bef4, Func Offset: 0x214
	// Line 111, Address: 0x27bf08, Func Offset: 0x228
	// Line 112, Address: 0x27bf0c, Func Offset: 0x22c
	// Line 113, Address: 0x27bf20, Func Offset: 0x240
	// Line 114, Address: 0x27bf38, Func Offset: 0x258
	// Line 115, Address: 0x27bf50, Func Offset: 0x270
	// Func End, Address: 0x27bf74, Func Offset: 0x294
}

// 
// Start address: 0x27bf80
void EnemyEffectStickyCut(EnemyEffectStickyWork* esw)
{
	EnemyEffectStickyData* ec;
	// Line 121, Address: 0x27bf80, Func Offset: 0
	// Line 123, Address: 0x27bf90, Func Offset: 0x10
	// Line 124, Address: 0x27bf98, Func Offset: 0x18
	// Line 125, Address: 0x27bfa4, Func Offset: 0x24
	// Line 126, Address: 0x27bfb0, Func Offset: 0x30
	// Line 127, Address: 0x27bfb8, Func Offset: 0x38
	// Line 128, Address: 0x27bfc4, Func Offset: 0x44
	// Line 129, Address: 0x27bfd0, Func Offset: 0x50
	// Func End, Address: 0x27bfe0, Func Offset: 0x60
}

// 
// Start address: 0x27bfe0
void EnemyEffectStickyErase(EnemyEffectStickyWork* esw)
{
	// Line 135, Address: 0x27bfe0, Func Offset: 0
	// Line 136, Address: 0x27bfe4, Func Offset: 0x4
	// Line 137, Address: 0x27bfec, Func Offset: 0xc
	// Line 138, Address: 0x27bff4, Func Offset: 0x14
	// Func End, Address: 0x27c004, Func Offset: 0x24
}

// 
// Start address: 0x27c010
int EnemyEffectStickyCheckDisappear(EnemyEffectStickyWork* esw)
{
	// Line 145, Address: 0x27c010, Func Offset: 0
	// Line 146, Address: 0x27c014, Func Offset: 0x4
	// Line 148, Address: 0x27c034, Func Offset: 0x24
	// Func End, Address: 0x27c040, Func Offset: 0x30
}

// 
// Start address: 0x27c040
void EnemyEffectStickyControl(EnemyEffectStickyWork* esw)
{
	EnemyEffectStickyData* ec;
	EnemyEffectStickyData* nec;
	EnemyEffectStickyBone* pba;
	float d;
	float dt;
	float wpos[4];
	float tpos[4];
	float vec[4];
	float nom[4];
	float rot[4];
	sfObj* obj;
	sgBone* bone;
	// Line 154, Address: 0x27c040, Func Offset: 0
	// Line 162, Address: 0x27c064, Func Offset: 0x24
	// Line 163, Address: 0x27c06c, Func Offset: 0x2c
	// Line 164, Address: 0x27c088, Func Offset: 0x48
	// Line 165, Address: 0x27c0a0, Func Offset: 0x60
	// Line 166, Address: 0x27c0a8, Func Offset: 0x68
	// Line 167, Address: 0x27c0b0, Func Offset: 0x70
	// Line 168, Address: 0x27c0b4, Func Offset: 0x74
	// Line 169, Address: 0x27c0b8, Func Offset: 0x78
	// Line 170, Address: 0x27c0c0, Func Offset: 0x80
	// Line 171, Address: 0x27c0cc, Func Offset: 0x8c
	// Line 170, Address: 0x27c0d0, Func Offset: 0x90
	// Line 171, Address: 0x27c0d4, Func Offset: 0x94
	// Line 172, Address: 0x27c0e0, Func Offset: 0xa0
	// Line 173, Address: 0x27c0ec, Func Offset: 0xac
	// Line 174, Address: 0x27c0f8, Func Offset: 0xb8
	// Line 175, Address: 0x27c0fc, Func Offset: 0xbc
	// Line 174, Address: 0x27c108, Func Offset: 0xc8
	// Line 175, Address: 0x27c11c, Func Offset: 0xdc
	// Line 176, Address: 0x27c124, Func Offset: 0xe4
	// Line 178, Address: 0x27c140, Func Offset: 0x100
	// Line 177, Address: 0x27c148, Func Offset: 0x108
	// Line 178, Address: 0x27c14c, Func Offset: 0x10c
	// Line 177, Address: 0x27c150, Func Offset: 0x110
	// Line 178, Address: 0x27c164, Func Offset: 0x124
	// Line 179, Address: 0x27c178, Func Offset: 0x138
	// Line 180, Address: 0x27c1b4, Func Offset: 0x174
	// Line 181, Address: 0x27c1b8, Func Offset: 0x178
	// Line 182, Address: 0x27c1c0, Func Offset: 0x180
	// Line 183, Address: 0x27c1c4, Func Offset: 0x184
	// Line 184, Address: 0x27c1d0, Func Offset: 0x190
	// Line 185, Address: 0x27c1f0, Func Offset: 0x1b0
	// Line 186, Address: 0x27c204, Func Offset: 0x1c4
	// Line 188, Address: 0x27c20c, Func Offset: 0x1cc
	// Line 189, Address: 0x27c210, Func Offset: 0x1d0
	// Line 190, Address: 0x27c21c, Func Offset: 0x1dc
	// Line 191, Address: 0x27c244, Func Offset: 0x204
	// Line 192, Address: 0x27c248, Func Offset: 0x208
	// Line 193, Address: 0x27c250, Func Offset: 0x210
	// Line 197, Address: 0x27c25c, Func Offset: 0x21c
	// Line 198, Address: 0x27c260, Func Offset: 0x220
	// Line 199, Address: 0x27c264, Func Offset: 0x224
	// Line 200, Address: 0x27c268, Func Offset: 0x228
	// Line 201, Address: 0x27c270, Func Offset: 0x230
	// Func End, Address: 0x27c298, Func Offset: 0x258
}

// 
// Start address: 0x27c2a0
void EnemyEffectStickyDraw(EnemyEffectStickyWork* esw)
{
	EnemyEffectStickyData* ec;
	EnemyTexParameter tex;
	float wpos[4];
	float bpos[4];
	float alpha;
	float s;
	// Line 207, Address: 0x27c2a0, Func Offset: 0
	// Line 212, Address: 0x27c2c8, Func Offset: 0x28
	// Line 213, Address: 0x27c2d0, Func Offset: 0x30
	// Line 214, Address: 0x27c2dc, Func Offset: 0x3c
	// Line 215, Address: 0x27c2f8, Func Offset: 0x58
	// Line 216, Address: 0x27c304, Func Offset: 0x64
	// Line 217, Address: 0x27c310, Func Offset: 0x70
	// Line 218, Address: 0x27c32c, Func Offset: 0x8c
	// Line 219, Address: 0x27c348, Func Offset: 0xa8
	// Line 220, Address: 0x27c354, Func Offset: 0xb4
	// Line 221, Address: 0x27c358, Func Offset: 0xb8
	// Line 222, Address: 0x27c370, Func Offset: 0xd0
	// Line 223, Address: 0x27c374, Func Offset: 0xd4
	// Line 224, Address: 0x27c394, Func Offset: 0xf4
	// Line 227, Address: 0x27c3b0, Func Offset: 0x110
	// Line 226, Address: 0x27c3c8, Func Offset: 0x128
	// Line 227, Address: 0x27c3d0, Func Offset: 0x130
	// Line 229, Address: 0x27c3dc, Func Offset: 0x13c
	// Line 230, Address: 0x27c3e8, Func Offset: 0x148
	// Line 233, Address: 0x27c40c, Func Offset: 0x16c
	// Line 234, Address: 0x27c410, Func Offset: 0x170
	// Line 235, Address: 0x27c420, Func Offset: 0x180
	// Line 236, Address: 0x27c428, Func Offset: 0x188
	// Func End, Address: 0x27c454, Func Offset: 0x1b4
}

