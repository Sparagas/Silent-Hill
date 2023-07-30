typedef struct EnemyParticle;
typedef struct EnemySubObjWorkList;
typedef struct sfObj;
typedef struct sgBone;
typedef union _anon0;
typedef struct EnemyParticleList;
typedef enum EnemyParticleType : unsigned char;
typedef struct EnemyParticleFlame;
typedef struct EnemyParticleSpark;
typedef enum EnemyTexIdentity : unsigned char;
typedef struct EnemyParticleLocalWork;
typedef struct _anon1;
typedef struct EnemyTexParameter;

typedef void(*type_1)(sfObj*);
typedef void(*type_4)(sfObj*);

typedef _anon0 type_0[256];
typedef float type_2[3];
typedef float type_3[3][4];
typedef float type_5[4];
typedef float type_6[3];
typedef float type_7[3];
typedef float type_8[4];
typedef short type_9[2];
typedef unsigned short type_10[2];
typedef char type_11[4];
typedef unsigned char type_12[4];
typedef float type_13[1];
typedef int type_14[1];
typedef _anon1 type_15[2];
typedef float type_16[4];

struct EnemyParticle
{
	float pos[3];
	EnemyParticleType type;
	EnemyParticle* next;
	EnemyParticleList* plist;
	union
	{
		EnemyParticleFlame flame;
		EnemyParticleSpark spark;
	};
};

struct EnemySubObjWorkList
{
	char* work_top;
	sfObj* obj_top;
	unsigned int size;
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

struct EnemyParticleList
{
	EnemyParticle* top;
	sgBone* parent;
};

enum EnemyParticleType : unsigned char
{
	EN_PARTICLE_TYPE_UNKNOWN,
	EN_PARTICLE_TYPE_FLAME,
	EN_PARTICLE_TYPE_SPARK,
	EN_PARTICLE_TYPE_TOACH,
	EN_PARTICLE_TYPE_MAX
};

struct EnemyParticleFlame
{
	float pos[3][4];
	float width;
	float height;
	float textype_rate;
	float draw_alpha;
	float force;
	float transparency;
	float tp_add;
	float anime_count;
	float appear_time;
	float keep_time;
	float fade_time;
	float time_count;
	short anime;
	char textype;
	char fade_mode;
};

struct EnemyParticleSpark
{
	float move[3];
	float transparency;
	int anime;
	float anime_count;
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

struct EnemyParticleLocalWork
{
	EnemySubObjWorkList particle_list;
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

float flame_div_rate[4];
EnemyParticleLocalWork en_particle_work;

void EnemyParticleInit();
void EnemyParticleAllDestruct();
void EnemyParticleListConstruct(EnemyParticleList* ppl, sgBone* parent);
EnemyParticle* EnemyParticleAllocate(EnemyParticleList* ppl);
void EnemyParticleRemove(EnemyParticle* pp);
void EnemyParticleListChangeParent(EnemyParticleList* ppl, sgBone* parent);
void EnemyParticleListDestruct(EnemyParticleList* ppl);
void EnemyParticleFlameConstruct(EnemyParticle* pp, float width, float height, float draw_rate, float tex_rate, float fade_time, float keep_time, float appear_time, float set_time);
void EnemyParticleFlameChangeForce(EnemyParticleList* ppl, float force);
void EnemyParticleFlameDestruct(EnemyParticle* pp);
void EnemyParticleFlameMove(EnemyParticle* pp);
void EnemyParticleFlameDraw(EnemyParticle* pp);
void EnemyParticleSparkConstruct(EnemyParticle* pp, float* pos, float* move, float transparency);
void EnemyParticleSparkDestruct(EnemyParticle* pp);
void EnemyParticleSparkMove(EnemyParticle* pp);
void EnemyParticleSparkDraw(EnemyParticle* pp);
void EnemyParticleToachConstruct(EnemyParticle* pp, float width, float height, float draw_rate, float fade_time, float appear_time, float set_time);
void EnemyParticleToachChangeForce(EnemyParticleList* ppl, float force);
void EnemyParticleToachDestruct(EnemyParticle* pp);
void EnemyParticleListMoveAll(EnemyParticleList* ppl);
void EnemyParticleListDrawAll(EnemyParticleList* ppl);

// 
// Start address: 0x1a1ec0
void EnemyParticleInit()
{
	// Line 81, Address: 0x1a1ec0, Func Offset: 0
	// Func End, Address: 0x1a1ed0, Func Offset: 0x10
}

// 
// Start address: 0x1a1ed0
void EnemyParticleAllDestruct()
{
	// Line 91, Address: 0x1a1ed0, Func Offset: 0
	// Func End, Address: 0x1a1edc, Func Offset: 0xc
}

// 
// Start address: 0x1a1ee0
void EnemyParticleListConstruct(EnemyParticleList* ppl, sgBone* parent)
{
	// Line 100, Address: 0x1a1ee0, Func Offset: 0
	// Line 102, Address: 0x1a1ee4, Func Offset: 0x4
	// Func End, Address: 0x1a1eec, Func Offset: 0xc
}

// 
// Start address: 0x1a1ef0
EnemyParticle* EnemyParticleAllocate(EnemyParticleList* ppl)
{
	EnemyParticle* pp;
	EnemyParticle** ppb;
	// Line 109, Address: 0x1a1ef0, Func Offset: 0
	// Line 112, Address: 0x1a1f08, Func Offset: 0x18
	// Line 113, Address: 0x1a1f18, Func Offset: 0x28
	// Line 114, Address: 0x1a1f1c, Func Offset: 0x2c
	// Line 115, Address: 0x1a1f38, Func Offset: 0x48
	// Line 116, Address: 0x1a1f48, Func Offset: 0x58
	// Line 118, Address: 0x1a1f58, Func Offset: 0x68
	// Line 119, Address: 0x1a1f68, Func Offset: 0x78
	// Line 120, Address: 0x1a1f6c, Func Offset: 0x7c
	// Line 121, Address: 0x1a1f70, Func Offset: 0x80
	// Func End, Address: 0x1a1f88, Func Offset: 0x98
}

// 
// Start address: 0x1a1f90
void EnemyParticleRemove(EnemyParticle* pp)
{
	EnemyParticle* tpp;
	EnemyParticle** ppn;
	// Line 127, Address: 0x1a1f90, Func Offset: 0
	// Line 129, Address: 0x1a1f9c, Func Offset: 0xc
	// Line 130, Address: 0x1a1fa0, Func Offset: 0x10
	// Line 131, Address: 0x1a1fb0, Func Offset: 0x20
	// Line 132, Address: 0x1a1fb8, Func Offset: 0x28
	// Line 133, Address: 0x1a1fbc, Func Offset: 0x2c
	// Line 135, Address: 0x1a1fc8, Func Offset: 0x38
	// Line 136, Address: 0x1a1fd0, Func Offset: 0x40
	// Line 138, Address: 0x1a1fd4, Func Offset: 0x44
	// Line 136, Address: 0x1a1fdc, Func Offset: 0x4c
	// Line 138, Address: 0x1a1fe0, Func Offset: 0x50
	// Line 139, Address: 0x1a1fe8, Func Offset: 0x58
	// Func End, Address: 0x1a1ff4, Func Offset: 0x64
}

// 
// Start address: 0x1a2000
void EnemyParticleListChangeParent(EnemyParticleList* ppl, sgBone* parent)
{
	// Line 148, Address: 0x1a2000, Func Offset: 0
	// Func End, Address: 0x1a2008, Func Offset: 0x8
}

// 
// Start address: 0x1a2010
void EnemyParticleListDestruct(EnemyParticleList* ppl)
{
	EnemyParticle* pp;
	EnemyParticle* ppn;
	// Line 154, Address: 0x1a2010, Func Offset: 0
	// Line 156, Address: 0x1a2024, Func Offset: 0x14
	// Line 157, Address: 0x1a2028, Func Offset: 0x18
	// Line 159, Address: 0x1a2030, Func Offset: 0x20
	// Line 160, Address: 0x1a205c, Func Offset: 0x4c
	// Line 161, Address: 0x1a2060, Func Offset: 0x50
	// Line 162, Address: 0x1a2068, Func Offset: 0x58
	// Line 164, Address: 0x1a2070, Func Offset: 0x60
	// Line 165, Address: 0x1a2078, Func Offset: 0x68
	// Line 167, Address: 0x1a2080, Func Offset: 0x70
	// Line 168, Address: 0x1a2088, Func Offset: 0x78
	// Line 170, Address: 0x1a2090, Func Offset: 0x80
	// Line 174, Address: 0x1a2098, Func Offset: 0x88
	// Line 175, Address: 0x1a20a0, Func Offset: 0x90
	// Line 176, Address: 0x1a20a4, Func Offset: 0x94
	// Line 177, Address: 0x1a20a8, Func Offset: 0x98
	// Func End, Address: 0x1a20bc, Func Offset: 0xac
}

// 
// Start address: 0x1a20c0
void EnemyParticleFlameConstruct(EnemyParticle* pp, float width, float height, float draw_rate, float tex_rate, float fade_time, float keep_time, float appear_time, float set_time)
{
	EnemyParticleFlame* ppf;
	float tpos[4];
	// Line 195, Address: 0x1a20c0, Func Offset: 0
	// Line 199, Address: 0x1a20c4, Func Offset: 0x4
	// Line 195, Address: 0x1a20c8, Func Offset: 0x8
	// Line 210, Address: 0x1a20cc, Func Offset: 0xc
	// Line 195, Address: 0x1a20d0, Func Offset: 0x10
	// Line 200, Address: 0x1a20e0, Func Offset: 0x20
	// Line 199, Address: 0x1a20e4, Func Offset: 0x24
	// Line 203, Address: 0x1a20e8, Func Offset: 0x28
	// Line 201, Address: 0x1a20f0, Func Offset: 0x30
	// Line 203, Address: 0x1a20f4, Func Offset: 0x34
	// Line 209, Address: 0x1a20f8, Func Offset: 0x38
	// Line 202, Address: 0x1a20fc, Func Offset: 0x3c
	// Line 203, Address: 0x1a2100, Func Offset: 0x40
	// Line 204, Address: 0x1a2104, Func Offset: 0x44
	// Line 205, Address: 0x1a2108, Func Offset: 0x48
	// Line 206, Address: 0x1a210c, Func Offset: 0x4c
	// Line 207, Address: 0x1a2110, Func Offset: 0x50
	// Line 208, Address: 0x1a2114, Func Offset: 0x54
	// Line 209, Address: 0x1a2118, Func Offset: 0x58
	// Line 210, Address: 0x1a211c, Func Offset: 0x5c
	// Line 211, Address: 0x1a212c, Func Offset: 0x6c
	// Line 216, Address: 0x1a2138, Func Offset: 0x78
	// Line 211, Address: 0x1a213c, Func Offset: 0x7c
	// Line 213, Address: 0x1a2150, Func Offset: 0x90
	// Line 215, Address: 0x1a21b0, Func Offset: 0xf0
	// Line 216, Address: 0x1a21b4, Func Offset: 0xf4
	// Line 218, Address: 0x1a21b8, Func Offset: 0xf8
	// Line 220, Address: 0x1a21cc, Func Offset: 0x10c
	// Line 221, Address: 0x1a21e8, Func Offset: 0x128
	// Line 222, Address: 0x1a2204, Func Offset: 0x144
	// Line 223, Address: 0x1a2210, Func Offset: 0x150
	// Line 224, Address: 0x1a2214, Func Offset: 0x154
	// Line 225, Address: 0x1a2230, Func Offset: 0x170
	// Line 227, Address: 0x1a2250, Func Offset: 0x190
	// Func End, Address: 0x1a2268, Func Offset: 0x1a8
}

// 
// Start address: 0x1a2270
void EnemyParticleFlameChangeForce(EnemyParticleList* ppl, float force)
{
	EnemyParticle* pp;
	// Line 236, Address: 0x1a2270, Func Offset: 0
	// Line 237, Address: 0x1a2274, Func Offset: 0x4
	// Line 238, Address: 0x1a2280, Func Offset: 0x10
	// Line 239, Address: 0x1a228c, Func Offset: 0x1c
	// Line 241, Address: 0x1a2290, Func Offset: 0x20
	// Line 242, Address: 0x1a2294, Func Offset: 0x24
	// Line 243, Address: 0x1a22a0, Func Offset: 0x30
	// Func End, Address: 0x1a22a8, Func Offset: 0x38
}

// 
// Start address: 0x1a22b0
void EnemyParticleFlameDestruct(EnemyParticle* pp)
{
	// Line 251, Address: 0x1a22b0, Func Offset: 0
	// Func End, Address: 0x1a22b8, Func Offset: 0x8
}

// 
// Start address: 0x1a22c0
void EnemyParticleFlameMove(EnemyParticle* pp)
{
	EnemyParticleFlame* ppf;
	float* ppos;
	float pos[4];
	float tpos[4];
	float vec[4];
	float d;
	float dt;
	int m;
	int i;
	EnemyParticle* npp;
	// Line 286, Address: 0x1a22c0, Func Offset: 0
	// Line 292, Address: 0x1a22dc, Func Offset: 0x1c
	// Line 294, Address: 0x1a22e4, Func Offset: 0x24
	// Line 292, Address: 0x1a22e8, Func Offset: 0x28
	// Line 294, Address: 0x1a22ec, Func Offset: 0x2c
	// Line 295, Address: 0x1a22f8, Func Offset: 0x38
	// Line 297, Address: 0x1a2330, Func Offset: 0x70
	// Line 298, Address: 0x1a234c, Func Offset: 0x8c
	// Line 299, Address: 0x1a2358, Func Offset: 0x98
	// Line 300, Address: 0x1a235c, Func Offset: 0x9c
	// Line 301, Address: 0x1a2360, Func Offset: 0xa0
	// Line 302, Address: 0x1a2374, Func Offset: 0xb4
	// Line 303, Address: 0x1a237c, Func Offset: 0xbc
	// Line 304, Address: 0x1a2380, Func Offset: 0xc0
	// Line 305, Address: 0x1a239c, Func Offset: 0xdc
	// Line 306, Address: 0x1a23a8, Func Offset: 0xe8
	// Line 307, Address: 0x1a23ac, Func Offset: 0xec
	// Line 308, Address: 0x1a23b0, Func Offset: 0xf0
	// Line 310, Address: 0x1a23d4, Func Offset: 0x114
	// Line 311, Address: 0x1a23e0, Func Offset: 0x120
	// Line 312, Address: 0x1a23e8, Func Offset: 0x128
	// Line 313, Address: 0x1a23ec, Func Offset: 0x12c
	// Line 312, Address: 0x1a23f4, Func Offset: 0x134
	// Line 313, Address: 0x1a240c, Func Offset: 0x14c
	// Line 314, Address: 0x1a2420, Func Offset: 0x160
	// Line 315, Address: 0x1a2430, Func Offset: 0x170
	// Line 316, Address: 0x1a2464, Func Offset: 0x1a4
	// Line 317, Address: 0x1a2480, Func Offset: 0x1c0
	// Line 318, Address: 0x1a249c, Func Offset: 0x1dc
	// Line 319, Address: 0x1a24a8, Func Offset: 0x1e8
	// Line 318, Address: 0x1a24ac, Func Offset: 0x1ec
	// Line 319, Address: 0x1a24b0, Func Offset: 0x1f0
	// Line 318, Address: 0x1a24b4, Func Offset: 0x1f4
	// Line 319, Address: 0x1a24c4, Func Offset: 0x204
	// Line 323, Address: 0x1a24d0, Func Offset: 0x210
	// Line 324, Address: 0x1a24e4, Func Offset: 0x224
	// Line 325, Address: 0x1a24ec, Func Offset: 0x22c
	// Line 326, Address: 0x1a24f0, Func Offset: 0x230
	// Line 327, Address: 0x1a24f8, Func Offset: 0x238
	// Line 328, Address: 0x1a2508, Func Offset: 0x248
	// Line 327, Address: 0x1a250c, Func Offset: 0x24c
	// Line 328, Address: 0x1a2524, Func Offset: 0x264
	// Line 329, Address: 0x1a2534, Func Offset: 0x274
	// Line 331, Address: 0x1a253c, Func Offset: 0x27c
	// Line 333, Address: 0x1a2540, Func Offset: 0x280
	// Line 332, Address: 0x1a2544, Func Offset: 0x284
	// Line 333, Address: 0x1a2548, Func Offset: 0x288
	// Line 332, Address: 0x1a254c, Func Offset: 0x28c
	// Line 333, Address: 0x1a2550, Func Offset: 0x290
	// Line 332, Address: 0x1a2558, Func Offset: 0x298
	// Line 333, Address: 0x1a2570, Func Offset: 0x2b0
	// Line 334, Address: 0x1a2598, Func Offset: 0x2d8
	// Line 335, Address: 0x1a25b0, Func Offset: 0x2f0
	// Line 336, Address: 0x1a25cc, Func Offset: 0x30c
	// Line 337, Address: 0x1a25d8, Func Offset: 0x318
	// Line 338, Address: 0x1a25dc, Func Offset: 0x31c
	// Line 339, Address: 0x1a25ec, Func Offset: 0x32c
	// Line 340, Address: 0x1a261c, Func Offset: 0x35c
	// Line 341, Address: 0x1a2638, Func Offset: 0x378
	// Line 343, Address: 0x1a2654, Func Offset: 0x394
	// Line 344, Address: 0x1a2660, Func Offset: 0x3a0
	// Line 345, Address: 0x1a267c, Func Offset: 0x3bc
	// Line 351, Address: 0x1a269c, Func Offset: 0x3dc
	// Line 352, Address: 0x1a26a0, Func Offset: 0x3e0
	// Line 354, Address: 0x1a26a8, Func Offset: 0x3e8
	// Line 352, Address: 0x1a26ac, Func Offset: 0x3ec
	// Line 354, Address: 0x1a26b0, Func Offset: 0x3f0
	// Line 352, Address: 0x1a26b4, Func Offset: 0x3f4
	// Line 354, Address: 0x1a26b8, Func Offset: 0x3f8
	// Line 353, Address: 0x1a26bc, Func Offset: 0x3fc
	// Line 352, Address: 0x1a26c0, Func Offset: 0x400
	// Line 354, Address: 0x1a26c8, Func Offset: 0x408
	// Line 352, Address: 0x1a26d0, Func Offset: 0x410
	// Line 353, Address: 0x1a26d8, Func Offset: 0x418
	// Line 352, Address: 0x1a26e0, Func Offset: 0x420
	// Line 354, Address: 0x1a26f0, Func Offset: 0x430
	// Line 353, Address: 0x1a26f4, Func Offset: 0x434
	// Line 352, Address: 0x1a26fc, Func Offset: 0x43c
	// Line 353, Address: 0x1a2700, Func Offset: 0x440
	// Line 354, Address: 0x1a2704, Func Offset: 0x444
	// Line 356, Address: 0x1a2710, Func Offset: 0x450
	// Line 355, Address: 0x1a2714, Func Offset: 0x454
	// Line 356, Address: 0x1a2718, Func Offset: 0x458
	// Line 357, Address: 0x1a2740, Func Offset: 0x480
	// Line 355, Address: 0x1a2744, Func Offset: 0x484
	// Line 356, Address: 0x1a2748, Func Offset: 0x488
	// Line 357, Address: 0x1a274c, Func Offset: 0x48c
	// Line 355, Address: 0x1a2750, Func Offset: 0x490
	// Line 356, Address: 0x1a2754, Func Offset: 0x494
	// Line 357, Address: 0x1a2770, Func Offset: 0x4b0
	// Line 358, Address: 0x1a279c, Func Offset: 0x4dc
	// Line 359, Address: 0x1a27cc, Func Offset: 0x50c
	// Line 358, Address: 0x1a27d0, Func Offset: 0x510
	// Line 359, Address: 0x1a27e8, Func Offset: 0x528
	// Line 361, Address: 0x1a27f4, Func Offset: 0x534
	// Line 360, Address: 0x1a2804, Func Offset: 0x544
	// Line 361, Address: 0x1a2808, Func Offset: 0x548
	// Line 363, Address: 0x1a2838, Func Offset: 0x578
	// Line 364, Address: 0x1a283c, Func Offset: 0x57c
	// Line 363, Address: 0x1a2840, Func Offset: 0x580
	// Line 364, Address: 0x1a2848, Func Offset: 0x588
	// Line 367, Address: 0x1a2860, Func Offset: 0x5a0
	// Line 369, Address: 0x1a286c, Func Offset: 0x5ac
	// Line 370, Address: 0x1a2874, Func Offset: 0x5b4
	// Line 371, Address: 0x1a2878, Func Offset: 0x5b8
	// Line 373, Address: 0x1a2884, Func Offset: 0x5c4
	// Line 374, Address: 0x1a288c, Func Offset: 0x5cc
	// Line 375, Address: 0x1a2890, Func Offset: 0x5d0
	// Line 379, Address: 0x1a289c, Func Offset: 0x5dc
	// Line 380, Address: 0x1a28a8, Func Offset: 0x5e8
	// Line 381, Address: 0x1a28b4, Func Offset: 0x5f4
	// Line 382, Address: 0x1a28d4, Func Offset: 0x614
	// Line 384, Address: 0x1a28e8, Func Offset: 0x628
	// Line 385, Address: 0x1a28f8, Func Offset: 0x638
	// Func End, Address: 0x1a2918, Func Offset: 0x658
}

// 
// Start address: 0x1a2920
void EnemyParticleFlameDraw(EnemyParticle* pp)
{
	EnemyParticleFlame* ppf;
	int a;
	float f;
	EnemyTexParameter tex;
	float pos[4];
	int i;
	int h;
	float d;
	// Line 391, Address: 0x1a2920, Func Offset: 0
	// Line 396, Address: 0x1a2924, Func Offset: 0x4
	// Line 391, Address: 0x1a2928, Func Offset: 0x8
	// Line 396, Address: 0x1a292c, Func Offset: 0xc
	// Line 391, Address: 0x1a2930, Func Offset: 0x10
	// Line 397, Address: 0x1a2940, Func Offset: 0x20
	// Line 391, Address: 0x1a2944, Func Offset: 0x24
	// Line 395, Address: 0x1a2948, Func Offset: 0x28
	// Line 396, Address: 0x1a294c, Func Offset: 0x2c
	// Line 397, Address: 0x1a2950, Func Offset: 0x30
	// Line 398, Address: 0x1a296c, Func Offset: 0x4c
	// Line 399, Address: 0x1a2970, Func Offset: 0x50
	// Line 400, Address: 0x1a2984, Func Offset: 0x64
	// Line 401, Address: 0x1a298c, Func Offset: 0x6c
	// Line 402, Address: 0x1a2990, Func Offset: 0x70
	// Line 404, Address: 0x1a29b4, Func Offset: 0x94
	// Line 405, Address: 0x1a29b8, Func Offset: 0x98
	// Line 406, Address: 0x1a29cc, Func Offset: 0xac
	// Line 410, Address: 0x1a29d4, Func Offset: 0xb4
	// Line 411, Address: 0x1a29e0, Func Offset: 0xc0
	// Line 413, Address: 0x1a2a08, Func Offset: 0xe8
	// Line 414, Address: 0x1a2a14, Func Offset: 0xf4
	// Line 415, Address: 0x1a2a1c, Func Offset: 0xfc
	// Line 416, Address: 0x1a2a20, Func Offset: 0x100
	// Line 417, Address: 0x1a2a2c, Func Offset: 0x10c
	// Line 418, Address: 0x1a2a34, Func Offset: 0x114
	// Line 419, Address: 0x1a2a38, Func Offset: 0x118
	// Line 420, Address: 0x1a2a44, Func Offset: 0x124
	// Line 423, Address: 0x1a2a48, Func Offset: 0x128
	// Line 425, Address: 0x1a2a50, Func Offset: 0x130
	// Line 423, Address: 0x1a2a58, Func Offset: 0x138
	// Line 424, Address: 0x1a2a70, Func Offset: 0x150
	// Line 425, Address: 0x1a2a88, Func Offset: 0x168
	// Line 426, Address: 0x1a2a90, Func Offset: 0x170
	// Line 427, Address: 0x1a2ab0, Func Offset: 0x190
	// Line 426, Address: 0x1a2ab4, Func Offset: 0x194
	// Line 427, Address: 0x1a2acc, Func Offset: 0x1ac
	// Line 428, Address: 0x1a2adc, Func Offset: 0x1bc
	// Line 429, Address: 0x1a2af8, Func Offset: 0x1d8
	// Line 431, Address: 0x1a2b00, Func Offset: 0x1e0
	// Line 432, Address: 0x1a2b04, Func Offset: 0x1e4
	// Line 431, Address: 0x1a2b08, Func Offset: 0x1e8
	// Line 432, Address: 0x1a2b0c, Func Offset: 0x1ec
	// Line 433, Address: 0x1a2b18, Func Offset: 0x1f8
	// Line 434, Address: 0x1a2b20, Func Offset: 0x200
	// Line 433, Address: 0x1a2b24, Func Offset: 0x204
	// Line 434, Address: 0x1a2b30, Func Offset: 0x210
	// Line 435, Address: 0x1a2b3c, Func Offset: 0x21c
	// Line 436, Address: 0x1a2b40, Func Offset: 0x220
	// Line 438, Address: 0x1a2b68, Func Offset: 0x248
	// Line 439, Address: 0x1a2b7c, Func Offset: 0x25c
	// Line 440, Address: 0x1a2b80, Func Offset: 0x260
	// Func End, Address: 0x1a2b9c, Func Offset: 0x27c
}

// 
// Start address: 0x1a2ba0
void EnemyParticleSparkConstruct(EnemyParticle* pp, float* pos, float* move, float transparency)
{
	EnemyParticleSpark* pps;
	// Line 453, Address: 0x1a2ba0, Func Offset: 0
	// Line 454, Address: 0x1a2ba8, Func Offset: 0x8
	// Line 455, Address: 0x1a2bc0, Func Offset: 0x20
	// Line 456, Address: 0x1a2bd8, Func Offset: 0x38
	// Line 457, Address: 0x1a2bdc, Func Offset: 0x3c
	// Line 459, Address: 0x1a2be0, Func Offset: 0x40
	// Func End, Address: 0x1a2be8, Func Offset: 0x48
}

// 
// Start address: 0x1a2bf0
void EnemyParticleSparkDestruct(EnemyParticle* pp)
{
	// Line 467, Address: 0x1a2bf0, Func Offset: 0
	// Func End, Address: 0x1a2bf8, Func Offset: 0x8
}

// 
// Start address: 0x1a2c00
void EnemyParticleSparkMove(EnemyParticle* pp)
{
	EnemyParticleSpark* pps;
	float pos[4];
	float vec[4];
	float dt;
	// Line 474, Address: 0x1a2c00, Func Offset: 0
	// Line 479, Address: 0x1a2c14, Func Offset: 0x14
	// Line 480, Address: 0x1a2c1c, Func Offset: 0x1c
	// Line 482, Address: 0x1a2c20, Func Offset: 0x20
	// Line 480, Address: 0x1a2c24, Func Offset: 0x24
	// Line 481, Address: 0x1a2c3c, Func Offset: 0x3c
	// Line 482, Address: 0x1a2c58, Func Offset: 0x58
	// Line 483, Address: 0x1a2c74, Func Offset: 0x74
	// Line 486, Address: 0x1a2c94, Func Offset: 0x94
	// Line 484, Address: 0x1a2ca4, Func Offset: 0xa4
	// Line 486, Address: 0x1a2ca8, Func Offset: 0xa8
	// Line 484, Address: 0x1a2cb0, Func Offset: 0xb0
	// Line 485, Address: 0x1a2cc4, Func Offset: 0xc4
	// Line 486, Address: 0x1a2ccc, Func Offset: 0xcc
	// Line 487, Address: 0x1a2cd8, Func Offset: 0xd8
	// Line 488, Address: 0x1a2ce4, Func Offset: 0xe4
	// Line 489, Address: 0x1a2cf0, Func Offset: 0xf0
	// Line 490, Address: 0x1a2d00, Func Offset: 0x100
	// Line 491, Address: 0x1a2d10, Func Offset: 0x110
	// Line 492, Address: 0x1a2d14, Func Offset: 0x114
	// Line 491, Address: 0x1a2d1c, Func Offset: 0x11c
	// Line 492, Address: 0x1a2d20, Func Offset: 0x120
	// Line 493, Address: 0x1a2d44, Func Offset: 0x144
	// Line 495, Address: 0x1a2d4c, Func Offset: 0x14c
	// Line 496, Address: 0x1a2d50, Func Offset: 0x150
	// Func End, Address: 0x1a2d64, Func Offset: 0x164
}

// 
// Start address: 0x1a2d70
void EnemyParticleSparkDraw(EnemyParticle* pp)
{
	EnemyParticleSpark* pps;
	EnemyTexParameter tex;
	float w;
	float h;
	int a;
	float pos[4];
	// Line 502, Address: 0x1a2d70, Func Offset: 0
	// Line 508, Address: 0x1a2d84, Func Offset: 0x14
	// Line 509, Address: 0x1a2d94, Func Offset: 0x24
	// Line 511, Address: 0x1a2d9c, Func Offset: 0x2c
	// Line 510, Address: 0x1a2da8, Func Offset: 0x38
	// Line 511, Address: 0x1a2dac, Func Offset: 0x3c
	// Line 512, Address: 0x1a2dcc, Func Offset: 0x5c
	// Line 514, Address: 0x1a2dd4, Func Offset: 0x64
	// Line 515, Address: 0x1a2dd8, Func Offset: 0x68
	// Line 514, Address: 0x1a2df4, Func Offset: 0x84
	// Line 515, Address: 0x1a2e08, Func Offset: 0x98
	// Line 518, Address: 0x1a2e10, Func Offset: 0xa0
	// Func End, Address: 0x1a2e24, Func Offset: 0xb4
}

// 
// Start address: 0x1a2e30
void EnemyParticleToachConstruct(EnemyParticle* pp, float width, float height, float draw_rate, float fade_time, float appear_time, float set_time)
{
	EnemyParticleFlame* ppf;
	float tpos[4];
	// Line 535, Address: 0x1a2e30, Func Offset: 0
	// Line 539, Address: 0x1a2e34, Func Offset: 0x4
	// Line 535, Address: 0x1a2e38, Func Offset: 0x8
	// Line 548, Address: 0x1a2e3c, Func Offset: 0xc
	// Line 535, Address: 0x1a2e40, Func Offset: 0x10
	// Line 539, Address: 0x1a2e4c, Func Offset: 0x1c
	// Line 543, Address: 0x1a2e50, Func Offset: 0x20
	// Line 541, Address: 0x1a2e58, Func Offset: 0x28
	// Line 543, Address: 0x1a2e5c, Func Offset: 0x2c
	// Line 547, Address: 0x1a2e60, Func Offset: 0x30
	// Line 542, Address: 0x1a2e64, Func Offset: 0x34
	// Line 543, Address: 0x1a2e68, Func Offset: 0x38
	// Line 544, Address: 0x1a2e6c, Func Offset: 0x3c
	// Line 545, Address: 0x1a2e70, Func Offset: 0x40
	// Line 546, Address: 0x1a2e74, Func Offset: 0x44
	// Line 547, Address: 0x1a2e78, Func Offset: 0x48
	// Line 548, Address: 0x1a2e7c, Func Offset: 0x4c
	// Line 549, Address: 0x1a2e8c, Func Offset: 0x5c
	// Line 554, Address: 0x1a2e98, Func Offset: 0x68
	// Line 556, Address: 0x1a2e9c, Func Offset: 0x6c
	// Line 549, Address: 0x1a2ea0, Func Offset: 0x70
	// Line 551, Address: 0x1a2eb4, Func Offset: 0x84
	// Line 553, Address: 0x1a2f14, Func Offset: 0xe4
	// Line 554, Address: 0x1a2f18, Func Offset: 0xe8
	// Line 555, Address: 0x1a2f1c, Func Offset: 0xec
	// Line 557, Address: 0x1a2f20, Func Offset: 0xf0
	// Line 558, Address: 0x1a2f3c, Func Offset: 0x10c
	// Line 559, Address: 0x1a2f5c, Func Offset: 0x12c
	// Func End, Address: 0x1a2f70, Func Offset: 0x140
}

// 
// Start address: 0x1a2f70
void EnemyParticleToachChangeForce(EnemyParticleList* ppl, float force)
{
	EnemyParticle* pp;
	// Line 568, Address: 0x1a2f70, Func Offset: 0
	// Line 569, Address: 0x1a2f74, Func Offset: 0x4
	// Line 570, Address: 0x1a2f80, Func Offset: 0x10
	// Line 571, Address: 0x1a2f8c, Func Offset: 0x1c
	// Line 573, Address: 0x1a2f90, Func Offset: 0x20
	// Line 574, Address: 0x1a2f94, Func Offset: 0x24
	// Line 575, Address: 0x1a2fa0, Func Offset: 0x30
	// Func End, Address: 0x1a2fa8, Func Offset: 0x38
}

// 
// Start address: 0x1a2fb0
void EnemyParticleToachDestruct(EnemyParticle* pp)
{
	// Line 583, Address: 0x1a2fb0, Func Offset: 0
	// Func End, Address: 0x1a2fb8, Func Offset: 0x8
}

// 
// Start address: 0x1a2fc0
void EnemyParticleListMoveAll(EnemyParticleList* ppl)
{
	EnemyParticle* pp;
	EnemyParticle* ppn;
	// Line 590, Address: 0x1a2fc0, Func Offset: 0
	// Line 592, Address: 0x1a2fcc, Func Offset: 0xc
	// Line 593, Address: 0x1a2fd0, Func Offset: 0x10
	// Line 595, Address: 0x1a2fd8, Func Offset: 0x18
	// Line 597, Address: 0x1a3004, Func Offset: 0x44
	// Line 598, Address: 0x1a3008, Func Offset: 0x48
	// Line 599, Address: 0x1a3010, Func Offset: 0x50
	// Line 601, Address: 0x1a3018, Func Offset: 0x58
	// Line 605, Address: 0x1a3020, Func Offset: 0x60
	// Line 606, Address: 0x1a3028, Func Offset: 0x68
	// Func End, Address: 0x1a3038, Func Offset: 0x78
}

// 
// Start address: 0x1a3040
void EnemyParticleListDrawAll(EnemyParticleList* ppl)
{
	EnemyParticle* pp;
	EnemyParticle* ppn;
	// Line 612, Address: 0x1a3040, Func Offset: 0
	// Line 614, Address: 0x1a304c, Func Offset: 0xc
	// Line 615, Address: 0x1a3050, Func Offset: 0x10
	// Line 617, Address: 0x1a3058, Func Offset: 0x18
	// Line 619, Address: 0x1a3084, Func Offset: 0x44
	// Line 620, Address: 0x1a3088, Func Offset: 0x48
	// Line 621, Address: 0x1a3090, Func Offset: 0x50
	// Line 623, Address: 0x1a3098, Func Offset: 0x58
	// Line 627, Address: 0x1a30a0, Func Offset: 0x60
	// Line 628, Address: 0x1a30a8, Func Offset: 0x68
	// Func End, Address: 0x1a30b8, Func Offset: 0x78
}

