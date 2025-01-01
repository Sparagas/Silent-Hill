typedef struct sgIKHandle;
typedef struct _anon0;
typedef struct sfObj;
typedef struct sgBone;
typedef union _anon1;
typedef struct _anon2;
typedef struct sfCharacter;
typedef struct MobWork;
typedef struct sgAnime;
typedef struct sgVectorCardinalKey;
typedef struct _anon3;
typedef struct _anon4;
typedef struct sgSVModel;
typedef struct _anon5;
typedef enum sgIKSolveResult : unsigned char;
typedef struct _anon6;

typedef void(*type_1)(sfObj*);
typedef void(*type_5)(_anon2*, int, int, float*);
typedef sgIKSolveResult(*type_6)();
typedef void(*type_8)(sfObj*);
typedef void(*type_15)(sgAnime*, int);
typedef void(*type_16)(sfObj*);
typedef void(*type_26)(sfObj*);
typedef void(*type_30)(sfObj*);

typedef float type_0[4][4];
typedef float type_2[4][2];
typedef float type_3[4];
typedef float type_4[4][2];
typedef _anon0 type_7[4];
typedef float type_9[4];
typedef float type_10[4];
typedef float type_11[4];
typedef void* type_12[4];
typedef float type_13[4][5];
typedef float type_14[4][2];
typedef float type_17[4];
typedef _anon4 type_18[12];
typedef unsigned char type_19[4];
typedef short type_20[2];
typedef unsigned short type_21[2];
typedef char type_22[4];
typedef unsigned char type_23[4];
typedef float type_24[1];
typedef int type_25[1];
typedef unsigned char type_27[4];
typedef MobWork type_28[4];
typedef _anon3 type_29[5];
typedef _anon1 type_31[256];

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
	float p0[4];
	float p1[4];
	float p2[4];
	float delete_planes[4][2];
};

struct sfObj
{
	_anon1 fwork[256];
	_anon1* work;
	void(*func)(sfObj*);
	_anon1* work_pt0;
	_anon1* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon1* sys_work;
	_anon1* scene_work;
	_anon1* event_work;
	_anon1* objhit_work;
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

union _anon1
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

struct _anon2
{
	unsigned long tex0;
	unsigned long clamp;
};

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon6 model_work;
	sgSVModel sv_model;
	sgAnime* anime;
	unsigned short flag;
};

struct MobWork
{
	sfCharacter character;
	float move_dir[4];
	float pos[4];
	float dests[4][5];
	float delete_plane[4];
	int n_dests;
	int current_dest;
	short way_no;
	short type;
	short action;
	short pair_follower;
	float current_speed;
	int round_dir;
	MobWork* paired;
	MobWork* next;
	MobWork* prev;
	sfObj* this_obj;
	int event_end;
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

struct sgVectorCardinalKey
{
	float p[4];
	float Tsd[4];
};

struct _anon3
{
	int anime_file;
	float speed;
};

struct _anon4
{
	int model_file;
	int texture_file;
};

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
};

struct _anon5
{
	MobWork heads[4];
	int n_mob;
	int n_max_mob;
	int time;
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

struct _anon6
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

_anon0 ways_table[4];
_anon4 mob_table[12];
_anon3 action_table[5];
_anon5 control_work;
void(*RoomOutSideMob)(sfObj*);
void(*RoomOutSideMobControlDestruct)(sfObj*);
void(*RoomOutSideMobDestuct)(sfObj*);
float sg_vector_unit_z[4];

void SetMobObj(int fast_forward);
void DeleteMobObj(sfObj* optr);
void RoomOutSideMobDestuct(sfObj* optr);
void RoomOutSideMobControl(sfObj* obj);
void RoomOutSideMobSetMax(int n);
void RoomOutSideMobControlDraw();
void RoomOutSideMobControlDestruct();
void MakePositionBlurring(float* p);
int CheckArrival(MobWork* work);
void InitWork(MobWork* work);
void CopyWork(MobWork* work, MobWork* from);
void RoomOutSideMob(sfObj* obj);
void RoomOutSideMobDraw(MobWork* work);

// 
// Start address: 0x21ed50
void SetMobObj(int fast_forward)
{
	sfObj* optr;
	sfObj* optr2;
	MobWork* head;
	int type;
	int way_no;
	int action;
	int npair;
	// Line 220, Address: 0x21ed50, Func Offset: 0
	// Line 231, Address: 0x21ed54, Func Offset: 0x4
	// Line 220, Address: 0x21ed58, Func Offset: 0x8
	// Line 231, Address: 0x21ed84, Func Offset: 0x34
	// Line 235, Address: 0x21ed9c, Func Offset: 0x4c
	// Line 237, Address: 0x21eda8, Func Offset: 0x58
	// Line 239, Address: 0x21edc8, Func Offset: 0x78
	// Line 241, Address: 0x21edd4, Func Offset: 0x84
	// Line 242, Address: 0x21edf4, Func Offset: 0xa4
	// Line 243, Address: 0x21edfc, Func Offset: 0xac
	// Line 244, Address: 0x21ee20, Func Offset: 0xd0
	// Line 246, Address: 0x21ee3c, Func Offset: 0xec
	// Line 247, Address: 0x21ee48, Func Offset: 0xf8
	// Line 249, Address: 0x21ee50, Func Offset: 0x100
	// Line 250, Address: 0x21ee5c, Func Offset: 0x10c
	// Line 251, Address: 0x21ee68, Func Offset: 0x118
	// Line 257, Address: 0x21ee78, Func Offset: 0x128
	// Line 252, Address: 0x21ee7c, Func Offset: 0x12c
	// Line 258, Address: 0x21ee80, Func Offset: 0x130
	// Line 253, Address: 0x21ee84, Func Offset: 0x134
	// Line 254, Address: 0x21ee88, Func Offset: 0x138
	// Line 255, Address: 0x21ee8c, Func Offset: 0x13c
	// Line 256, Address: 0x21ee90, Func Offset: 0x140
	// Line 257, Address: 0x21eea8, Func Offset: 0x158
	// Line 258, Address: 0x21eeb4, Func Offset: 0x164
	// Line 260, Address: 0x21eebc, Func Offset: 0x16c
	// Line 263, Address: 0x21eec4, Func Offset: 0x174
	// Line 265, Address: 0x21eee4, Func Offset: 0x194
	// Line 266, Address: 0x21eef0, Func Offset: 0x1a0
	// Line 267, Address: 0x21eef8, Func Offset: 0x1a8
	// Line 268, Address: 0x21ef04, Func Offset: 0x1b4
	// Line 269, Address: 0x21ef10, Func Offset: 0x1c0
	// Line 278, Address: 0x21ef20, Func Offset: 0x1d0
	// Line 270, Address: 0x21ef24, Func Offset: 0x1d4
	// Line 276, Address: 0x21ef28, Func Offset: 0x1d8
	// Line 279, Address: 0x21ef2c, Func Offset: 0x1dc
	// Line 271, Address: 0x21ef30, Func Offset: 0x1e0
	// Line 272, Address: 0x21ef34, Func Offset: 0x1e4
	// Line 273, Address: 0x21ef38, Func Offset: 0x1e8
	// Line 274, Address: 0x21ef3c, Func Offset: 0x1ec
	// Line 275, Address: 0x21ef40, Func Offset: 0x1f0
	// Line 276, Address: 0x21ef44, Func Offset: 0x1f4
	// Line 277, Address: 0x21ef48, Func Offset: 0x1f8
	// Line 278, Address: 0x21ef60, Func Offset: 0x210
	// Line 279, Address: 0x21ef6c, Func Offset: 0x21c
	// Line 283, Address: 0x21ef74, Func Offset: 0x224
	// Line 284, Address: 0x21ef80, Func Offset: 0x230
	// Line 285, Address: 0x21ef94, Func Offset: 0x244
	// Line 286, Address: 0x21ef9c, Func Offset: 0x24c
	// Line 287, Address: 0x21efa0, Func Offset: 0x250
	// Line 288, Address: 0x21efb4, Func Offset: 0x264
	// Line 290, Address: 0x21efbc, Func Offset: 0x26c
	// Line 291, Address: 0x21efd0, Func Offset: 0x280
	// Func End, Address: 0x21f000, Func Offset: 0x2b0
}

// 
// Start address: 0x21f000
void DeleteMobObj(sfObj* optr)
{
	// Line 295, Address: 0x21f000, Func Offset: 0
	// Line 297, Address: 0x21f010, Func Offset: 0x10
	// Line 299, Address: 0x21f014, Func Offset: 0x14
	// Line 301, Address: 0x21f030, Func Offset: 0x30
	// Line 302, Address: 0x21f038, Func Offset: 0x38
	// Line 303, Address: 0x21f03c, Func Offset: 0x3c
	// Line 304, Address: 0x21f044, Func Offset: 0x44
	// Line 307, Address: 0x21f048, Func Offset: 0x48
	// Line 308, Address: 0x21f050, Func Offset: 0x50
	// Line 309, Address: 0x21f064, Func Offset: 0x64
	// Func End, Address: 0x21f074, Func Offset: 0x74
}

// 
// Start address: 0x21f080
void RoomOutSideMobDestuct(sfObj* optr)
{
	// Line 317, Address: 0x21f080, Func Offset: 0
	// Func End, Address: 0x21f088, Func Offset: 0x8
}

// 
// Start address: 0x21f090
void RoomOutSideMobControl(sfObj* obj)
{
	int i;
	int n;
	MobWork* head;
	// Line 325, Address: 0x21f090, Func Offset: 0
	// Line 330, Address: 0x21f094, Func Offset: 0x4
	// Line 325, Address: 0x21f098, Func Offset: 0x8
	// Line 330, Address: 0x21f0a8, Func Offset: 0x18
	// Line 331, Address: 0x21f0cc, Func Offset: 0x3c
	// Line 333, Address: 0x21f0d0, Func Offset: 0x40
	// Line 334, Address: 0x21f0d8, Func Offset: 0x48
	// Line 335, Address: 0x21f0e8, Func Offset: 0x58
	// Line 338, Address: 0x21f0ec, Func Offset: 0x5c
	// Line 335, Address: 0x21f0f0, Func Offset: 0x60
	// Line 338, Address: 0x21f0f4, Func Offset: 0x64
	// Line 339, Address: 0x21f0f8, Func Offset: 0x68
	// Line 340, Address: 0x21f0fc, Func Offset: 0x6c
	// Line 343, Address: 0x21f12c, Func Offset: 0x9c
	// Line 344, Address: 0x21f144, Func Offset: 0xb4
	// Line 346, Address: 0x21f158, Func Offset: 0xc8
	// Line 349, Address: 0x21f160, Func Offset: 0xd0
	// Line 350, Address: 0x21f16c, Func Offset: 0xdc
	// Line 349, Address: 0x21f170, Func Offset: 0xe0
	// Line 350, Address: 0x21f174, Func Offset: 0xe4
	// Line 349, Address: 0x21f178, Func Offset: 0xe8
	// Line 350, Address: 0x21f17c, Func Offset: 0xec
	// Line 349, Address: 0x21f180, Func Offset: 0xf0
	// Line 350, Address: 0x21f18c, Func Offset: 0xfc
	// Line 351, Address: 0x21f194, Func Offset: 0x104
	// Line 354, Address: 0x21f1a0, Func Offset: 0x110
	// Line 355, Address: 0x21f1a8, Func Offset: 0x118
	// Line 356, Address: 0x21f1b0, Func Offset: 0x120
	// Line 357, Address: 0x21f1c0, Func Offset: 0x130
	// Line 359, Address: 0x21f1f0, Func Offset: 0x160
	// Line 360, Address: 0x21f218, Func Offset: 0x188
	// Line 361, Address: 0x21f220, Func Offset: 0x190
	// Line 362, Address: 0x21f22c, Func Offset: 0x19c
	// Line 363, Address: 0x21f230, Func Offset: 0x1a0
	// Line 365, Address: 0x21f244, Func Offset: 0x1b4
	// Line 366, Address: 0x21f254, Func Offset: 0x1c4
	// Line 368, Address: 0x21f280, Func Offset: 0x1f0
	// Line 369, Address: 0x21f2a8, Func Offset: 0x218
	// Line 373, Address: 0x21f2b0, Func Offset: 0x220
	// Func End, Address: 0x21f2c4, Func Offset: 0x234
}

// 
// Start address: 0x21f2d0
void RoomOutSideMobSetMax(int n)
{
	// Line 378, Address: 0x21f2d0, Func Offset: 0
	// Line 379, Address: 0x21f2d4, Func Offset: 0x4
	// Func End, Address: 0x21f2dc, Func Offset: 0xc
}

// 
// Start address: 0x21f2e0
void RoomOutSideMobControlDraw()
{
	int i;
	MobWork* head;
	MobWork* work;
	// Line 383, Address: 0x21f2e0, Func Offset: 0
	// Line 385, Address: 0x21f2f0, Func Offset: 0x10
	// Line 383, Address: 0x21f2f8, Func Offset: 0x18
	// Line 385, Address: 0x21f2fc, Func Offset: 0x1c
	// Line 387, Address: 0x21f300, Func Offset: 0x20
	// Line 388, Address: 0x21f304, Func Offset: 0x24
	// Line 389, Address: 0x21f30c, Func Offset: 0x2c
	// Line 390, Address: 0x21f314, Func Offset: 0x34
	// Line 392, Address: 0x21f318, Func Offset: 0x38
	// Line 394, Address: 0x21f324, Func Offset: 0x44
	// Line 395, Address: 0x21f32c, Func Offset: 0x4c
	// Line 396, Address: 0x21f340, Func Offset: 0x60
	// Line 397, Address: 0x21f350, Func Offset: 0x70
	// Func End, Address: 0x21f368, Func Offset: 0x88
}

// 
// Start address: 0x21f370
void RoomOutSideMobControlDestruct()
{
	int i;
	MobWork* head;
	MobWork* work;
	// Line 405, Address: 0x21f370, Func Offset: 0
	// Line 411, Address: 0x21f37c, Func Offset: 0xc
	// Line 407, Address: 0x21f380, Func Offset: 0x10
	// Line 408, Address: 0x21f384, Func Offset: 0x14
	// Line 409, Address: 0x21f38c, Func Offset: 0x1c
	// Line 410, Address: 0x21f394, Func Offset: 0x24
	// Line 411, Address: 0x21f398, Func Offset: 0x28
	// Line 412, Address: 0x21f39c, Func Offset: 0x2c
	// Line 413, Address: 0x21f3a0, Func Offset: 0x30
	// Line 414, Address: 0x21f3b4, Func Offset: 0x44
	// Line 415, Address: 0x21f3c8, Func Offset: 0x58
	// Func End, Address: 0x21f3d8, Func Offset: 0x68
}

// 
// Start address: 0x21f3e0
void MakePositionBlurring(float* p)
{
	float r;
	float a;
	// Line 422, Address: 0x21f3e0, Func Offset: 0
	// Line 425, Address: 0x21f3f4, Func Offset: 0x14
	// Line 426, Address: 0x21f404, Func Offset: 0x24
	// Line 427, Address: 0x21f42c, Func Offset: 0x4c
	// Line 428, Address: 0x21f440, Func Offset: 0x60
	// Line 429, Address: 0x21f45c, Func Offset: 0x7c
	// Func End, Address: 0x21f474, Func Offset: 0x94
}

// 
// Start address: 0x21f480
int CheckArrival(MobWork* work)
{
	float r;
	float v[4];
	// Line 438, Address: 0x21f480, Func Offset: 0
	// Line 435, Address: 0x21f484, Func Offset: 0x4
	// Line 438, Address: 0x21f488, Func Offset: 0x8
	// Line 439, Address: 0x21f4ac, Func Offset: 0x2c
	// Line 440, Address: 0x21f4d0, Func Offset: 0x50
	// Line 441, Address: 0x21f4e8, Func Offset: 0x68
	// Line 442, Address: 0x21f4f0, Func Offset: 0x70
	// Line 443, Address: 0x21f4f8, Func Offset: 0x78
	// Func End, Address: 0x21f500, Func Offset: 0x80
}

// 
// Start address: 0x21f500
void InitWork(MobWork* work)
{
	sfCharacter* chara;
	sgAnime* anm;
	float v[4];
	_anon0* way;
	int i;
	float r;
	_anon3* action;
	// Line 446, Address: 0x21f500, Func Offset: 0
	// Line 458, Address: 0x21f504, Func Offset: 0x4
	// Line 446, Address: 0x21f508, Func Offset: 0x8
	// Line 458, Address: 0x21f50c, Func Offset: 0xc
	// Line 446, Address: 0x21f510, Func Offset: 0x10
	// Line 458, Address: 0x21f524, Func Offset: 0x24
	// Line 459, Address: 0x21f52c, Func Offset: 0x2c
	// Line 460, Address: 0x21f548, Func Offset: 0x48
	// Line 459, Address: 0x21f54c, Func Offset: 0x4c
	// Line 460, Address: 0x21f558, Func Offset: 0x58
	// Line 461, Address: 0x21f560, Func Offset: 0x60
	// Line 462, Address: 0x21f578, Func Offset: 0x78
	// Line 464, Address: 0x21f584, Func Offset: 0x84
	// Line 465, Address: 0x21f594, Func Offset: 0x94
	// Line 470, Address: 0x21f5a8, Func Offset: 0xa8
	// Line 466, Address: 0x21f5ac, Func Offset: 0xac
	// Line 470, Address: 0x21f5b0, Func Offset: 0xb0
	// Line 466, Address: 0x21f5b4, Func Offset: 0xb4
	// Line 470, Address: 0x21f5bc, Func Offset: 0xbc
	// Line 471, Address: 0x21f5cc, Func Offset: 0xcc
	// Line 472, Address: 0x21f5e0, Func Offset: 0xe0
	// Line 473, Address: 0x21f5ec, Func Offset: 0xec
	// Line 474, Address: 0x21f5f4, Func Offset: 0xf4
	// Line 475, Address: 0x21f5fc, Func Offset: 0xfc
	// Line 476, Address: 0x21f604, Func Offset: 0x104
	// Line 477, Address: 0x21f608, Func Offset: 0x108
	// Line 478, Address: 0x21f610, Func Offset: 0x110
	// Line 479, Address: 0x21f618, Func Offset: 0x118
	// Line 480, Address: 0x21f620, Func Offset: 0x120
	// Line 481, Address: 0x21f628, Func Offset: 0x128
	// Line 484, Address: 0x21f630, Func Offset: 0x130
	// Line 487, Address: 0x21f638, Func Offset: 0x138
	// Line 488, Address: 0x21f654, Func Offset: 0x154
	// Line 489, Address: 0x21f680, Func Offset: 0x180
	// Line 490, Address: 0x21f6ac, Func Offset: 0x1ac
	// Line 492, Address: 0x21f6cc, Func Offset: 0x1cc
	// Line 493, Address: 0x21f6e8, Func Offset: 0x1e8
	// Line 494, Address: 0x21f714, Func Offset: 0x214
	// Line 495, Address: 0x21f740, Func Offset: 0x240
	// Line 498, Address: 0x21f760, Func Offset: 0x260
	// Line 501, Address: 0x21f764, Func Offset: 0x264
	// Line 502, Address: 0x21f770, Func Offset: 0x270
	// Line 503, Address: 0x21f780, Func Offset: 0x280
	// Line 504, Address: 0x21f798, Func Offset: 0x298
	// Func End, Address: 0x21f7b4, Func Offset: 0x2b4
}

// 
// Start address: 0x21f7c0
void CopyWork(MobWork* work, MobWork* from)
{
	sfCharacter* chara;
	sgAnime* anm;
	int i;
	float r;
	_anon3* action;
	// Line 508, Address: 0x21f7c0, Func Offset: 0
	// Line 520, Address: 0x21f7c4, Func Offset: 0x4
	// Line 508, Address: 0x21f7c8, Func Offset: 0x8
	// Line 520, Address: 0x21f7cc, Func Offset: 0xc
	// Line 508, Address: 0x21f7d0, Func Offset: 0x10
	// Line 514, Address: 0x21f7e8, Func Offset: 0x28
	// Line 515, Address: 0x21f7f0, Func Offset: 0x30
	// Line 516, Address: 0x21f7f8, Func Offset: 0x38
	// Line 520, Address: 0x21f800, Func Offset: 0x40
	// Line 521, Address: 0x21f804, Func Offset: 0x44
	// Line 520, Address: 0x21f808, Func Offset: 0x48
	// Line 521, Address: 0x21f810, Func Offset: 0x50
	// Line 522, Address: 0x21f820, Func Offset: 0x60
	// Line 523, Address: 0x21f828, Func Offset: 0x68
	// Line 524, Address: 0x21f840, Func Offset: 0x80
	// Line 525, Address: 0x21f84c, Func Offset: 0x8c
	// Line 529, Address: 0x21f854, Func Offset: 0x94
	// Line 530, Address: 0x21f85c, Func Offset: 0x9c
	// Line 531, Address: 0x21f874, Func Offset: 0xb4
	// Line 532, Address: 0x21f884, Func Offset: 0xc4
	// Line 533, Address: 0x21f898, Func Offset: 0xd8
	// Func End, Address: 0x21f8b4, Func Offset: 0xf4
}

// 
// Start address: 0x21f8c0
void RoomOutSideMob(sfObj* obj)
{
	sfCharacter* chara;
	MobWork* work;
	float v[4];
	float r;
	int n;
	int i;
	_anon4* mob;
	void* mdl_data;
	void* tex_data;
	MobWork* lead;
	sgVectorCardinalKey current;
	sgVectorCardinalKey next;
	MobWork* lead;
	int i;
	float v0[4];
	float v1[4];
	unsigned char c[4];
	float side[4][2];
	// Line 536, Address: 0x21f8c0, Func Offset: 0
	// Line 553, Address: 0x21f8d4, Func Offset: 0x14
	// Line 555, Address: 0x21f8d8, Func Offset: 0x18
	// Line 556, Address: 0x21f8e4, Func Offset: 0x24
	// Line 557, Address: 0x21f8ec, Func Offset: 0x2c
	// Line 558, Address: 0x21f8f4, Func Offset: 0x34
	// Line 560, Address: 0x21f8f8, Func Offset: 0x38
	// Line 566, Address: 0x21f918, Func Offset: 0x58
	// Line 567, Address: 0x21f92c, Func Offset: 0x6c
	// Line 568, Address: 0x21f934, Func Offset: 0x74
	// Line 569, Address: 0x21f940, Func Offset: 0x80
	// Line 572, Address: 0x21f950, Func Offset: 0x90
	// Line 573, Address: 0x21f95c, Func Offset: 0x9c
	// Line 574, Address: 0x21f964, Func Offset: 0xa4
	// Line 575, Address: 0x21f970, Func Offset: 0xb0
	// Line 576, Address: 0x21f97c, Func Offset: 0xbc
	// Line 577, Address: 0x21f980, Func Offset: 0xc0
	// Line 580, Address: 0x21f984, Func Offset: 0xc4
	// Line 584, Address: 0x21f990, Func Offset: 0xd0
	// Line 581, Address: 0x21f994, Func Offset: 0xd4
	// Line 584, Address: 0x21f99c, Func Offset: 0xdc
	// Line 585, Address: 0x21f9b0, Func Offset: 0xf0
	// Line 586, Address: 0x21f9dc, Func Offset: 0x11c
	// Line 587, Address: 0x21f9e8, Func Offset: 0x128
	// Line 588, Address: 0x21f9ec, Func Offset: 0x12c
	// Line 589, Address: 0x21fa14, Func Offset: 0x154
	// Line 591, Address: 0x21fa30, Func Offset: 0x170
	// Line 594, Address: 0x21fa50, Func Offset: 0x190
	// Line 595, Address: 0x21fa60, Func Offset: 0x1a0
	// Line 596, Address: 0x21fa68, Func Offset: 0x1a8
	// Line 599, Address: 0x21fa70, Func Offset: 0x1b0
	// Line 600, Address: 0x21fa7c, Func Offset: 0x1bc
	// Line 613, Address: 0x21fa88, Func Offset: 0x1c8
	// Line 614, Address: 0x21fa98, Func Offset: 0x1d8
	// Line 617, Address: 0x21facc, Func Offset: 0x20c
	// Line 618, Address: 0x21fad8, Func Offset: 0x218
	// Line 619, Address: 0x21faf0, Func Offset: 0x230
	// Line 620, Address: 0x21faf8, Func Offset: 0x238
	// Line 621, Address: 0x21fafc, Func Offset: 0x23c
	// Line 622, Address: 0x21fb24, Func Offset: 0x264
	// Line 624, Address: 0x21fb40, Func Offset: 0x280
	// Line 625, Address: 0x21fb44, Func Offset: 0x284
	// Line 624, Address: 0x21fb48, Func Offset: 0x288
	// Line 625, Address: 0x21fb4c, Func Offset: 0x28c
	// Line 626, Address: 0x21fb58, Func Offset: 0x298
	// Line 627, Address: 0x21fb60, Func Offset: 0x2a0
	// Line 629, Address: 0x21fb84, Func Offset: 0x2c4
	// Line 630, Address: 0x21fb9c, Func Offset: 0x2dc
	// Line 631, Address: 0x21fbc4, Func Offset: 0x304
	// Line 632, Address: 0x21fbf4, Func Offset: 0x334
	// Line 633, Address: 0x21fc00, Func Offset: 0x340
	// Line 635, Address: 0x21fc30, Func Offset: 0x370
	// Line 636, Address: 0x21fc34, Func Offset: 0x374
	// Line 637, Address: 0x21fc5c, Func Offset: 0x39c
	// Line 638, Address: 0x21fc80, Func Offset: 0x3c0
	// Line 639, Address: 0x21fc84, Func Offset: 0x3c4
	// Line 638, Address: 0x21fc94, Func Offset: 0x3d4
	// Line 639, Address: 0x21fc98, Func Offset: 0x3d8
	// Line 640, Address: 0x21fca4, Func Offset: 0x3e4
	// Line 641, Address: 0x21fcb0, Func Offset: 0x3f0
	// Line 642, Address: 0x21fcc4, Func Offset: 0x404
	// Line 643, Address: 0x21fccc, Func Offset: 0x40c
	// Line 645, Address: 0x21fcd4, Func Offset: 0x414
	// Line 646, Address: 0x21fcd8, Func Offset: 0x418
	// Line 647, Address: 0x21fce8, Func Offset: 0x428
	// Line 648, Address: 0x21fd08, Func Offset: 0x448
	// Line 652, Address: 0x21fd34, Func Offset: 0x474
	// Line 653, Address: 0x21fd44, Func Offset: 0x484
	// Line 654, Address: 0x21fd50, Func Offset: 0x490
	// Line 655, Address: 0x21fd64, Func Offset: 0x4a4
	// Line 656, Address: 0x21fd6c, Func Offset: 0x4ac
	// Line 688, Address: 0x21fd74, Func Offset: 0x4b4
	// Line 691, Address: 0x21fd78, Func Offset: 0x4b8
	// Line 692, Address: 0x21fd9c, Func Offset: 0x4dc
	// Line 695, Address: 0x21fdbc, Func Offset: 0x4fc
	// Line 696, Address: 0x21fdd0, Func Offset: 0x510
	// Line 697, Address: 0x21fdf4, Func Offset: 0x534
	// Line 699, Address: 0x21fe00, Func Offset: 0x540
	// Line 700, Address: 0x21fe08, Func Offset: 0x548
	// Line 702, Address: 0x21fe10, Func Offset: 0x550
	// Line 704, Address: 0x21fe24, Func Offset: 0x564
	// Func End, Address: 0x21fe40, Func Offset: 0x580
}

// 
// Start address: 0x21fe40
void RoomOutSideMobDraw(MobWork* work)
{
	float q[4];
	// Line 710, Address: 0x21fe40, Func Offset: 0
	// Line 717, Address: 0x21fe50, Func Offset: 0x10
	// Line 719, Address: 0x21fe58, Func Offset: 0x18
	// Line 720, Address: 0x21fe6c, Func Offset: 0x2c
	// Line 722, Address: 0x21fe78, Func Offset: 0x38
	// Line 724, Address: 0x21fe88, Func Offset: 0x48
	// Line 725, Address: 0x21fe90, Func Offset: 0x50
	// Func End, Address: 0x21fea0, Func Offset: 0x60
}

