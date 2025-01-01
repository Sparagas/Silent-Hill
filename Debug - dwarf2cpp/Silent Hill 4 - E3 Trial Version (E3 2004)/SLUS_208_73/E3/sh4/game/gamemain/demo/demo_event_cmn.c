typedef union _anon0;
typedef struct sgAnime;
typedef struct sfCharacter;
typedef struct sfObj;
typedef struct sgBone;
typedef struct sgSVModel;
typedef enum sgIKSolveResult : unsigned char;
typedef struct _anon1;
typedef struct _anon2;
typedef struct sgIKHandle;

typedef void(*type_0)(sgAnime*, int);
typedef void(*type_1)(sfObj*);
typedef sgIKSolveResult(*type_8)();
typedef void(*type_10)(_anon1*, int, int, float*);
typedef void(*type_13)(sfObj*);
typedef void(*type_18)(sfObj*);
typedef void(*type_19)(sfObj*);

typedef float type_2[4];
typedef unsigned char type_3[4];
typedef float type_4[4];
typedef float type_5[4][4];
typedef float type_6[4];
typedef float type_7[4][2];
typedef short type_9[2];
typedef unsigned short type_11[2];
typedef char type_12[4];
typedef unsigned char type_14[4];
typedef float type_15[1];
typedef int type_16[1];
typedef _anon0 type_17[256];
typedef void* type_20[4];

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
	_anon2 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
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

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
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

int demo_finish_noise_time;
void(*DemoEventDestructOkimono)(sfObj*);
void(*sfObjFuncDummy)(sfObj*);

void DemoEventInitStageStart();
void DemoEventEndStageStart();
void DemoEventDrawStageStart();
void DemoEventStageFinishSetTime(int time);
void DemoEventEndStageFinish();
void DemoEventDrawStageFinish();
void DemoEventDestructOkimono(sfObj* obj);
sfObj* DemoEventSetOkimono(unsigned int mdl, unsigned int tex, unsigned int sdw, float* pos, float* rot);
sfCharacter* DemoEventGetOkimonoChara(sfObj* obj);

// 
// Start address: 0x2c51f0
void DemoEventInitStageStart()
{
	// Line 17, Address: 0x2c51f0, Func Offset: 0
	// Func End, Address: 0x2c51f8, Func Offset: 0x8
}

// 
// Start address: 0x2c5200
void DemoEventEndStageStart()
{
	// Line 22, Address: 0x2c5200, Func Offset: 0
	// Func End, Address: 0x2c5208, Func Offset: 0x8
}

// 
// Start address: 0x2c5210
void DemoEventDrawStageStart()
{
	int demo_flame;
	// Line 26, Address: 0x2c5210, Func Offset: 0
	// Line 27, Address: 0x2c521c, Func Offset: 0xc
	// Line 32, Address: 0x2c5228, Func Offset: 0x18
	// Line 27, Address: 0x2c522c, Func Offset: 0x1c
	// Line 32, Address: 0x2c5230, Func Offset: 0x20
	// Line 37, Address: 0x2c5240, Func Offset: 0x30
	// Line 38, Address: 0x2c5258, Func Offset: 0x48
	// Line 37, Address: 0x2c5264, Func Offset: 0x54
	// Line 38, Address: 0x2c526c, Func Offset: 0x5c
	// Line 39, Address: 0x2c5288, Func Offset: 0x78
	// Line 40, Address: 0x2c5294, Func Offset: 0x84
	// Line 41, Address: 0x2c52b4, Func Offset: 0xa4
	// Line 43, Address: 0x2c52c0, Func Offset: 0xb0
	// Func End, Address: 0x2c52d4, Func Offset: 0xc4
}

// 
// Start address: 0x2c52e0
void DemoEventStageFinishSetTime(int time)
{
	// Line 52, Address: 0x2c52e0, Func Offset: 0
	// Line 53, Address: 0x2c52e4, Func Offset: 0x4
	// Func End, Address: 0x2c52ec, Func Offset: 0xc
}

// 
// Start address: 0x2c52f0
void DemoEventEndStageFinish()
{
	// Line 57, Address: 0x2c52f0, Func Offset: 0
	// Func End, Address: 0x2c52f8, Func Offset: 0x8
}

// 
// Start address: 0x2c5300
void DemoEventDrawStageFinish()
{
	int demo_length;
	int demo_flame;
	int noise_pow;
	// Line 62, Address: 0x2c5300, Func Offset: 0
	// Line 63, Address: 0x2c5308, Func Offset: 0x8
	// Line 64, Address: 0x2c5318, Func Offset: 0x18
	// Line 68, Address: 0x2c5338, Func Offset: 0x38
	// Line 69, Address: 0x2c5344, Func Offset: 0x44
	// Line 72, Address: 0x2c5378, Func Offset: 0x78
	// Line 74, Address: 0x2c5388, Func Offset: 0x88
	// Line 76, Address: 0x2c53b8, Func Offset: 0xb8
	// Func End, Address: 0x2c53c8, Func Offset: 0xc8
}

// 
// Start address: 0x2c53d0
void DemoEventDestructOkimono(sfObj* obj)
{
	sfCharacter* chara;
	// Line 81, Address: 0x2c53d0, Func Offset: 0
	// Line 83, Address: 0x2c53d8, Func Offset: 0x8
	// Line 84, Address: 0x2c53e0, Func Offset: 0x10
	// Line 85, Address: 0x2c53e8, Func Offset: 0x18
	// Func End, Address: 0x2c53f4, Func Offset: 0x24
}

// 
// Start address: 0x2c5400
sfObj* DemoEventSetOkimono(unsigned int mdl, unsigned int tex, unsigned int sdw, float* pos, float* rot)
{
	sfObj* model_obj;
	sfCharacter* chara;
	// Line 99, Address: 0x2c5400, Func Offset: 0
	// Line 103, Address: 0x2c5434, Func Offset: 0x34
	// Line 104, Address: 0x2c5440, Func Offset: 0x40
	// Line 106, Address: 0x2c5450, Func Offset: 0x50
	// Line 108, Address: 0x2c5464, Func Offset: 0x64
	// Line 109, Address: 0x2c5468, Func Offset: 0x68
	// Line 110, Address: 0x2c5478, Func Offset: 0x78
	// Line 113, Address: 0x2c549c, Func Offset: 0x9c
	// Line 114, Address: 0x2c54a8, Func Offset: 0xa8
	// Line 116, Address: 0x2c54b8, Func Offset: 0xb8
	// Line 117, Address: 0x2c54c0, Func Offset: 0xc0
	// Line 119, Address: 0x2c54d4, Func Offset: 0xd4
	// Line 120, Address: 0x2c54d8, Func Offset: 0xd8
	// Line 121, Address: 0x2c54e4, Func Offset: 0xe4
	// Line 122, Address: 0x2c54f0, Func Offset: 0xf0
	// Line 123, Address: 0x2c54fc, Func Offset: 0xfc
	// Line 124, Address: 0x2c5508, Func Offset: 0x108
	// Line 125, Address: 0x2c5514, Func Offset: 0x114
	// Line 127, Address: 0x2c5524, Func Offset: 0x124
	// Line 128, Address: 0x2c5528, Func Offset: 0x128
	// Func End, Address: 0x2c5550, Func Offset: 0x150
}

// 
// Start address: 0x2c5550
sfCharacter* DemoEventGetOkimonoChara(sfObj* obj)
{
	// Line 134, Address: 0x2c5550, Func Offset: 0
	// Line 135, Address: 0x2c5554, Func Offset: 0x4
	// Func End, Address: 0x2c555c, Func Offset: 0xc
}

