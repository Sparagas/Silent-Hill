typedef struct _anon0;
typedef enum sgIKSolveResult : unsigned char;
typedef struct sgBone;
typedef struct sgIKHandle;
typedef struct sgAnime;

typedef sgIKSolveResult(*type_2)();
typedef void(*type_4)(sgAnime*, int);

typedef float type_0[4][2];
typedef float type_1[4];
typedef void* type_3[4];
typedef float type_5[4];
typedef unsigned char type_6[4];

struct _anon0
{
	sgAnime* out_anime;
	sgAnime* base_anime;
	sgAnime* target_anime;
	float blend_ratio;
	float blend_speed;
	float play_speed_ratio;
	int flag;
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
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


void sgAnimeMixerConstruct(_anon0* mixer);
void sgAnimeMixerSetBase(_anon0* mixer, sgAnime* base);
sgAnime* sgAnimeMixerBaseAnime(_anon0* mixer);
void sgAnimeMixerSetTarget(_anon0* mixer, sgAnime* target);
sgAnime* sgAnimeMixerTargetAnime(_anon0* mixer);
void sgAnimeMixerSetOutput(_anon0* mixer, sgAnime* outanime);
sgAnime* sgAnimeMixerOutputAnime(_anon0* mixer);
void sgAnimeMixerSetRatio(_anon0* mixer, float ratio);
float sgAnimeMixerRatio(_anon0* mixer);
void sgAnimeMixerSetProcessTime(_anon0* mixer, float sec);
int sgAnimeMixerIsOver(_anon0* mixer);
void sgAnimeMixerProceedTime(_anon0* mixer);
void sgAnimeMixerProceedTimeWithoutAnime(_anon0* mixer);
void sgAnimeMixerMixerExecute(_anon0* mixer);
void sgAnimeMixerUpdateMixer(_anon0* mixer);
void sgAnimeMixerProcess(_anon0* mixer);

// 
// Start address: 0x147df0
void sgAnimeMixerConstruct(_anon0* mixer)
{
	// Line 32, Address: 0x147df0, Func Offset: 0
	// Func End, Address: 0x147df8, Func Offset: 0x8
}

// 
// Start address: 0x147e00
void sgAnimeMixerSetBase(_anon0* mixer, sgAnime* base)
{
	// Line 46, Address: 0x147e00, Func Offset: 0
	// Func End, Address: 0x147e08, Func Offset: 0x8
}

// 
// Start address: 0x147e10
sgAnime* sgAnimeMixerBaseAnime(_anon0* mixer)
{
	// Line 58, Address: 0x147e10, Func Offset: 0
	// Func End, Address: 0x147e18, Func Offset: 0x8
}

// 
// Start address: 0x147e20
void sgAnimeMixerSetTarget(_anon0* mixer, sgAnime* target)
{
	// Line 71, Address: 0x147e20, Func Offset: 0
	// Func End, Address: 0x147e28, Func Offset: 0x8
}

// 
// Start address: 0x147e30
sgAnime* sgAnimeMixerTargetAnime(_anon0* mixer)
{
	// Line 83, Address: 0x147e30, Func Offset: 0
	// Func End, Address: 0x147e38, Func Offset: 0x8
}

// 
// Start address: 0x147e40
void sgAnimeMixerSetOutput(_anon0* mixer, sgAnime* outanime)
{
	// Line 99, Address: 0x147e40, Func Offset: 0
	// Func End, Address: 0x147e48, Func Offset: 0x8
}

// 
// Start address: 0x147e50
sgAnime* sgAnimeMixerOutputAnime(_anon0* mixer)
{
	// Line 106, Address: 0x147e50, Func Offset: 0
	// Func End, Address: 0x147e58, Func Offset: 0x8
}

// 
// Start address: 0x147e60
void sgAnimeMixerSetRatio(_anon0* mixer, float ratio)
{
	// Line 120, Address: 0x147e60, Func Offset: 0
	// Func End, Address: 0x147e68, Func Offset: 0x8
}

// 
// Start address: 0x147e70
float sgAnimeMixerRatio(_anon0* mixer)
{
	// Line 134, Address: 0x147e70, Func Offset: 0
	// Func End, Address: 0x147e78, Func Offset: 0x8
}

// 
// Start address: 0x147e80
void sgAnimeMixerSetProcessTime(_anon0* mixer, float sec)
{
	// Line 277, Address: 0x147e80, Func Offset: 0
	// Line 279, Address: 0x147e94, Func Offset: 0x14
	// Line 280, Address: 0x147e9c, Func Offset: 0x1c
	// Line 281, Address: 0x147ea0, Func Offset: 0x20
	// Line 282, Address: 0x147ea8, Func Offset: 0x28
	// Line 281, Address: 0x147eac, Func Offset: 0x2c
	// Line 282, Address: 0x147ec8, Func Offset: 0x48
	// Line 283, Address: 0x147ed0, Func Offset: 0x50
	// Line 285, Address: 0x147ed8, Func Offset: 0x58
	// Line 286, Address: 0x147ee0, Func Offset: 0x60
	// Func End, Address: 0x147ee8, Func Offset: 0x68
}

// 
// Start address: 0x147ef0
int sgAnimeMixerIsOver(_anon0* mixer)
{
	// Line 296, Address: 0x147ef0, Func Offset: 0
	// Line 298, Address: 0x147f0c, Func Offset: 0x1c
	// Func End, Address: 0x147f14, Func Offset: 0x24
}

// 
// Start address: 0x147f20
void sgAnimeMixerProceedTime(_anon0* mixer)
{
	sgAnime* base;
	sgAnime* target;
	float base_delta;
	// Line 307, Address: 0x147f20, Func Offset: 0
	// Line 311, Address: 0x147f34, Func Offset: 0x14
	// Line 312, Address: 0x147f40, Func Offset: 0x20
	// Line 314, Address: 0x147f4c, Func Offset: 0x2c
	// Line 315, Address: 0x147f60, Func Offset: 0x40
	// Line 316, Address: 0x147f64, Func Offset: 0x44
	// Line 315, Address: 0x147f70, Func Offset: 0x50
	// Line 316, Address: 0x147f74, Func Offset: 0x54
	// Line 317, Address: 0x147f80, Func Offset: 0x60
	// Line 318, Address: 0x147f84, Func Offset: 0x64
	// Line 320, Address: 0x147f88, Func Offset: 0x68
	// Line 321, Address: 0x147fa0, Func Offset: 0x80
	// Line 322, Address: 0x147fa4, Func Offset: 0x84
	// Line 326, Address: 0x147fa8, Func Offset: 0x88
	// Line 327, Address: 0x147fb8, Func Offset: 0x98
	// Line 328, Address: 0x147fc0, Func Offset: 0xa0
	// Line 329, Address: 0x147fc8, Func Offset: 0xa8
	// Line 331, Address: 0x147fd0, Func Offset: 0xb0
	// Line 333, Address: 0x147fdc, Func Offset: 0xbc
	// Line 331, Address: 0x147fe0, Func Offset: 0xc0
	// Line 333, Address: 0x147fe4, Func Offset: 0xc4
	// Line 334, Address: 0x147ff8, Func Offset: 0xd8
	// Line 337, Address: 0x148008, Func Offset: 0xe8
	// Func End, Address: 0x148020, Func Offset: 0x100
}

// 
// Start address: 0x148020
void sgAnimeMixerProceedTimeWithoutAnime(_anon0* mixer)
{
	// Line 346, Address: 0x148020, Func Offset: 0
	// Line 347, Address: 0x148024, Func Offset: 0x4
	// Line 348, Address: 0x148038, Func Offset: 0x18
	// Line 349, Address: 0x14803c, Func Offset: 0x1c
	// Line 348, Address: 0x148048, Func Offset: 0x28
	// Line 349, Address: 0x14804c, Func Offset: 0x2c
	// Line 350, Address: 0x148058, Func Offset: 0x38
	// Line 351, Address: 0x14805c, Func Offset: 0x3c
	// Line 353, Address: 0x148060, Func Offset: 0x40
	// Line 354, Address: 0x148078, Func Offset: 0x58
	// Line 355, Address: 0x14807c, Func Offset: 0x5c
	// Line 358, Address: 0x148080, Func Offset: 0x60
	// Func End, Address: 0x148088, Func Offset: 0x68
}

// 
// Start address: 0x148090
void sgAnimeMixerMixerExecute(_anon0* mixer)
{
	sgAnime* base;
	sgAnime* target;
	sgAnime* output;
	int idx;
	int n_bones;
	float ratio;
	sgBone* base_bone;
	sgBone* target_bone;
	sgBone* output_bone;
	// Line 370, Address: 0x148090, Func Offset: 0
	// Line 379, Address: 0x1480c0, Func Offset: 0x30
	// Line 381, Address: 0x1480cc, Func Offset: 0x3c
	// Line 383, Address: 0x1480d8, Func Offset: 0x48
	// Line 386, Address: 0x1480e4, Func Offset: 0x54
	// Line 387, Address: 0x1480f0, Func Offset: 0x60
	// Line 388, Address: 0x148104, Func Offset: 0x74
	// Line 389, Address: 0x148110, Func Offset: 0x80
	// Line 390, Address: 0x148124, Func Offset: 0x94
	// Line 392, Address: 0x148130, Func Offset: 0xa0
	// Line 393, Address: 0x148140, Func Offset: 0xb0
	// Line 394, Address: 0x148150, Func Offset: 0xc0
	// Line 395, Address: 0x148160, Func Offset: 0xd0
	// Line 402, Address: 0x148170, Func Offset: 0xe0
	// Line 404, Address: 0x1481a8, Func Offset: 0x118
	// Line 405, Address: 0x1481b8, Func Offset: 0x128
	// Line 406, Address: 0x1481c8, Func Offset: 0x138
	// Line 410, Address: 0x1481d0, Func Offset: 0x140
	// Line 411, Address: 0x1481d8, Func Offset: 0x148
	// Line 413, Address: 0x1481e0, Func Offset: 0x150
	// Line 415, Address: 0x1481f4, Func Offset: 0x164
	// Line 417, Address: 0x148208, Func Offset: 0x178
	// Func End, Address: 0x14823c, Func Offset: 0x1ac
}

// 
// Start address: 0x148240
void sgAnimeMixerUpdateMixer(_anon0* mixer)
{
	sgAnime* base;
	sgAnime* target;
	int cur_time;
	// Line 429, Address: 0x148240, Func Offset: 0
	// Line 432, Address: 0x148254, Func Offset: 0x14
	// Line 433, Address: 0x148260, Func Offset: 0x20
	// Line 435, Address: 0x14826c, Func Offset: 0x2c
	// Line 436, Address: 0x148274, Func Offset: 0x34
	// Line 437, Address: 0x148284, Func Offset: 0x44
	// Line 438, Address: 0x14828c, Func Offset: 0x4c
	// Line 440, Address: 0x148298, Func Offset: 0x58
	// Line 442, Address: 0x1482a0, Func Offset: 0x60
	// Line 443, Address: 0x1482c0, Func Offset: 0x80
	// Line 446, Address: 0x1482c8, Func Offset: 0x88
	// Line 447, Address: 0x1482d0, Func Offset: 0x90
	// Func End, Address: 0x1482e8, Func Offset: 0xa8
}

// 
// Start address: 0x1482f0
void sgAnimeMixerProcess(_anon0* mixer)
{
	// Line 457, Address: 0x1482f0, Func Offset: 0
	// Line 459, Address: 0x1482fc, Func Offset: 0xc
	// Line 461, Address: 0x148304, Func Offset: 0x14
	// Line 462, Address: 0x14830c, Func Offset: 0x1c
	// Func End, Address: 0x14831c, Func Offset: 0x2c
}

