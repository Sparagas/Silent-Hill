typedef struct _anon0;
typedef struct EnemyPickgirlHairObjData;
typedef struct EnemyPickgirlHairWork;
typedef struct EnemyPickgirlHairObjWork;
typedef struct sfObj;
typedef struct EnemyPickgirlHairList;
typedef struct EnemyPickgirlHairData;
typedef struct _anon1;
typedef struct EnemyPickgirlHairSkeleton;
typedef struct sgBone;
typedef struct _anon2;
typedef struct _anon3;
typedef union _anon4;
typedef struct EnemyLocalHitWork;
typedef struct EnemyPickgirlLocalHit;
typedef enum sgIKSolveResult : unsigned char;
typedef struct sgIKHandle;
typedef union _anon5;
typedef struct sfCharacter;
typedef struct sgAnime;
typedef struct EnemyMeasureResult;
typedef struct sgSVModel;

typedef void(*type_4)(_anon1*, int, int, float*);
typedef sgIKSolveResult(*type_12)();
typedef void(*type_15)(sfObj*);
typedef void(*type_20)(sfObj*);
typedef void(*type_30)(sgAnime*, int);

typedef float type_0[4][4];
typedef float type_1[4][4];
typedef EnemyPickgirlHairList type_2[4];
typedef float type_3[4];
typedef _anon2 type_5[4];
typedef float type_6[3];
typedef _anon4 type_7[0];
typedef float type_8[3];
typedef float type_9[4];
typedef EnemyPickgirlHairSkeleton type_10[8];
typedef float type_11[4][2];
typedef _anon5 type_13[256];
typedef float type_14[4];
typedef float type_16[3];
typedef float type_17[3];
typedef EnemyPickgirlHairSkeleton type_18[6];
typedef EnemyPickgirlLocalHit type_19[11];
typedef short type_21[2];
typedef unsigned short type_22[2];
typedef void* type_23[4];
typedef EnemyPickgirlHairSkeleton type_24[8];
typedef char type_25[4];
typedef unsigned char type_26[4];
typedef float type_27[4];
typedef float type_28[1];
typedef int type_29[1];
typedef unsigned char type_31[4];
typedef EnemyPickgirlHairSkeleton type_32[6];

struct _anon0
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

struct EnemyPickgirlHairObjData
{
	float crot[4];
	float rrot[4];
	sfObj* obj;
	float floor_height;
};

struct EnemyPickgirlHairWork
{
	EnemyPickgirlHairData* data_list;
	EnemyPickgirlHairList* hair_list;
	float move_mode;
};

struct EnemyPickgirlHairObjWork
{
	sfObj* myobj;
	sfObj* spare_obj;
	sfObj* parent;
	EnemyPickgirlHairWork* hair_work;
	EnemyLocalHitWork* local_hit;
	int lines;
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

struct EnemyPickgirlHairList
{
	EnemyPickgirlHairSkeleton* data_address;
	int data_number;
};

struct EnemyPickgirlHairData
{
	float pos[3];
	float move[3];
	float rot[4];
};

struct _anon1
{
	unsigned long tex0;
	unsigned long clamp;
};

struct EnemyPickgirlHairSkeleton
{
	int bone_name;
	float thickness;
	float length;
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

struct _anon2
{
	unsigned char next_offset;
	unsigned char flags;
	short id;
};

struct _anon3
{
	_anon4 vertex[0];
};

union _anon4
{
	float node[4];
	_anon2 data[4];
};

struct EnemyLocalHitWork
{
};

struct EnemyPickgirlLocalHit
{
	int bone_name;
	float pos1[3];
	float pos2[3];
	float radius;
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
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

struct sfCharacter
{
	sgBone root;
	sgAnime anime_work;
	_anon0 model_work;
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

struct EnemyMeasureResult
{
	float pos[4];
	float normal[4];
	float dist;
	int exist;
	_anon3* poly;
};

struct sgSVModel
{
	void* model;
	float local_matrices[4][4];
	int flag;
};

EnemyPickgirlHairSkeleton pickgirl_hair_bone_bkr[6];
EnemyPickgirlHairSkeleton pickgirl_hair_bone_bkl[6];
EnemyPickgirlHairSkeleton pickgirl_hair_bone_fkr[8];
EnemyPickgirlHairSkeleton pickgirl_hair_bone_fkl[8];
EnemyPickgirlHairList pickgirl_hair[4];
EnemyPickgirlLocalHit pickgirl_localhit[11];
float sg_vector_unit_w[4];
float sg_vector_zero[4];
float pickgirl_hair_target_pos[4][4];
int pickgirl_hair_move_mode;
float sg_vector_unit_y[4];

EnemyPickgirlHairObjWork* make_work(sfObj* obj, sfObj* obj2, EnemyPickgirlHairList* phl, int num);
EnemyLocalHitWork* make_localhit(sfObj* obj, EnemyPickgirlLocalHit* plh, int num);
EnemyPickgirlHairObjWork* EnemyPickgirlHairMakeWork(sfObj* obj);
void EnemyPickgirlHairDeleteWork(EnemyPickgirlHairObjWork* phow);
void EnemyPickgirlHairDraw(EnemyPickgirlHairObjWork* phow);
void EnemyPickgirlHairHidden(EnemyPickgirlHairObjWork* phow);
void EnemyPickgirlHairAnimeChange(EnemyPickgirlHairObjWork* phow);
void EnemyPickgirlHairReset(EnemyPickgirlHairObjWork* phow);
void EnemyPickgirlHairSetTarget(EnemyPickgirlHairObjWork* phow, int num, float* pos);
void EnemyPickgirlHairIgnoreTarget(EnemyPickgirlHairObjWork* phow, int num);
void EnemyPickgirlHairIgnoreTargetSlow(EnemyPickgirlHairObjWork* phow, int num);
void move_one(EnemyPickgirlHairData* ehd, float* ppos, float thickness, float length, float floor_height);
void move_line(EnemyPickgirlHairObjData* hod, EnemyPickgirlHairWork* ehw);
void move_line_target(EnemyPickgirlHairObjData* hod, EnemyPickgirlHairWork* ehw, float* target);
void EnemyPickgirlHairMove(EnemyPickgirlHairObjWork* phow);
void EnemyPickgirlHairRestore(EnemyPickgirlHairObjWork* phow);

// 
// Start address: 0x2818a0
EnemyPickgirlHairObjWork* make_work(sfObj* obj, sfObj* obj2, EnemyPickgirlHairList* phl, int num)
{
	EnemyPickgirlHairObjWork* phow;
	EnemyPickgirlHairWork* ehw;
	sfObj* tobj;
	int i;
	int s;
	sfObj* nobj;
	// Line 211, Address: 0x2818a0, Func Offset: 0
	// Line 217, Address: 0x2818d8, Func Offset: 0x38
	// Line 218, Address: 0x2818e0, Func Offset: 0x40
	// Line 217, Address: 0x2818e4, Func Offset: 0x44
	// Line 219, Address: 0x2818e8, Func Offset: 0x48
	// Line 220, Address: 0x2818ec, Func Offset: 0x4c
	// Line 226, Address: 0x281904, Func Offset: 0x64
	// Line 222, Address: 0x281908, Func Offset: 0x68
	// Line 223, Address: 0x281910, Func Offset: 0x70
	// Line 226, Address: 0x281914, Func Offset: 0x74
	// Line 227, Address: 0x281920, Func Offset: 0x80
	// Line 228, Address: 0x281924, Func Offset: 0x84
	// Line 229, Address: 0x281928, Func Offset: 0x88
	// Line 228, Address: 0x28192c, Func Offset: 0x8c
	// Line 229, Address: 0x281938, Func Offset: 0x98
	// Line 231, Address: 0x281948, Func Offset: 0xa8
	// Line 232, Address: 0x281950, Func Offset: 0xb0
	// Line 233, Address: 0x281958, Func Offset: 0xb8
	// Line 234, Address: 0x28195c, Func Offset: 0xbc
	// Line 236, Address: 0x281968, Func Offset: 0xc8
	// Line 237, Address: 0x281970, Func Offset: 0xd0
	// Line 238, Address: 0x281974, Func Offset: 0xd4
	// Line 239, Address: 0x281988, Func Offset: 0xe8
	// Line 241, Address: 0x281990, Func Offset: 0xf0
	// Line 242, Address: 0x281994, Func Offset: 0xf4
	// Line 243, Address: 0x281998, Func Offset: 0xf8
	// Line 244, Address: 0x28199c, Func Offset: 0xfc
	// Line 245, Address: 0x2819a0, Func Offset: 0x100
	// Line 246, Address: 0x2819b0, Func Offset: 0x110
	// Line 245, Address: 0x2819b8, Func Offset: 0x118
	// Line 246, Address: 0x2819bc, Func Offset: 0x11c
	// Line 247, Address: 0x2819c8, Func Offset: 0x128
	// Line 248, Address: 0x2819d0, Func Offset: 0x130
	// Func End, Address: 0x2819fc, Func Offset: 0x15c
}

// 
// Start address: 0x281a00
EnemyLocalHitWork* make_localhit(sfObj* obj, EnemyPickgirlLocalHit* plh, int num)
{
	EnemyLocalHitWork* plhw;
	sgBone* bone;
	float pos1[4];
	float pos2[4];
	int i;
	int id;
	// Line 258, Address: 0x281a00, Func Offset: 0
	// Line 263, Address: 0x281a34, Func Offset: 0x34
	// Line 264, Address: 0x281a40, Func Offset: 0x40
	// Line 265, Address: 0x281a50, Func Offset: 0x50
	// Line 266, Address: 0x281a68, Func Offset: 0x68
	// Line 267, Address: 0x281a74, Func Offset: 0x74
	// Line 271, Address: 0x281a7c, Func Offset: 0x7c
	// Line 272, Address: 0x281a88, Func Offset: 0x88
	// Line 274, Address: 0x281a8c, Func Offset: 0x8c
	// Line 273, Address: 0x281a90, Func Offset: 0x90
	// Line 274, Address: 0x281a94, Func Offset: 0x94
	// Line 272, Address: 0x281aa0, Func Offset: 0xa0
	// Line 273, Address: 0x281ab8, Func Offset: 0xb8
	// Line 274, Address: 0x281adc, Func Offset: 0xdc
	// Line 275, Address: 0x281ae8, Func Offset: 0xe8
	// Line 276, Address: 0x281af8, Func Offset: 0xf8
	// Line 277, Address: 0x281b00, Func Offset: 0x100
	// Func End, Address: 0x281b30, Func Offset: 0x130
}

// 
// Start address: 0x281b30
EnemyPickgirlHairObjWork* EnemyPickgirlHairMakeWork(sfObj* obj)
{
	sfObj* myobj;
	sfObj* myobj2;
	EnemyPickgirlHairObjWork* phow;
	sfCharacter* chara;
	sfCharacter* chara2;
	sfCharacter* pchara;
	int type;
	sfObj* tmp;
	// Line 284, Address: 0x281b30, Func Offset: 0
	// Line 290, Address: 0x281b50, Func Offset: 0x20
	// Line 293, Address: 0x281b90, Func Offset: 0x60
	// Line 294, Address: 0x281ba0, Func Offset: 0x70
	// Line 297, Address: 0x281be0, Func Offset: 0xb0
	// Line 298, Address: 0x281be8, Func Offset: 0xb8
	// Line 299, Address: 0x281bf0, Func Offset: 0xc0
	// Line 301, Address: 0x281bf8, Func Offset: 0xc8
	// Line 304, Address: 0x281c04, Func Offset: 0xd4
	// Line 305, Address: 0x281c08, Func Offset: 0xd8
	// Line 306, Address: 0x281c0c, Func Offset: 0xdc
	// Line 307, Address: 0x281c10, Func Offset: 0xe0
	// Line 308, Address: 0x281c1c, Func Offset: 0xec
	// Line 309, Address: 0x281c28, Func Offset: 0xf8
	// Line 310, Address: 0x281c34, Func Offset: 0x104
	// Line 311, Address: 0x281c44, Func Offset: 0x114
	// Line 312, Address: 0x281c54, Func Offset: 0x124
	// Line 313, Address: 0x281c60, Func Offset: 0x130
	// Line 314, Address: 0x281c6c, Func Offset: 0x13c
	// Line 316, Address: 0x281c78, Func Offset: 0x148
	// Line 317, Address: 0x281c84, Func Offset: 0x154
	// Line 318, Address: 0x281c94, Func Offset: 0x164
	// Line 319, Address: 0x281ca4, Func Offset: 0x174
	// Line 321, Address: 0x281cb8, Func Offset: 0x188
	// Line 322, Address: 0x281cc4, Func Offset: 0x194
	// Line 323, Address: 0x281cd4, Func Offset: 0x1a4
	// Line 324, Address: 0x281ce4, Func Offset: 0x1b4
	// Line 325, Address: 0x281cf8, Func Offset: 0x1c8
	// Line 326, Address: 0x281d14, Func Offset: 0x1e4
	// Line 328, Address: 0x281d1c, Func Offset: 0x1ec
	// Line 330, Address: 0x281d30, Func Offset: 0x200
	// Line 331, Address: 0x281d38, Func Offset: 0x208
	// Line 332, Address: 0x281d40, Func Offset: 0x210
	// Line 333, Address: 0x281d48, Func Offset: 0x218
	// Line 334, Address: 0x281d50, Func Offset: 0x220
	// Line 335, Address: 0x281d58, Func Offset: 0x228
	// Line 338, Address: 0x281d60, Func Offset: 0x230
	// Line 339, Address: 0x281d68, Func Offset: 0x238
	// Func End, Address: 0x281d8c, Func Offset: 0x25c
}

// 
// Start address: 0x281d90
void EnemyPickgirlHairDeleteWork(EnemyPickgirlHairObjWork* phow)
{
	sfObj* obj;
	sfObj* nobj;
	// Line 345, Address: 0x281d90, Func Offset: 0
	// Line 347, Address: 0x281da0, Func Offset: 0x10
	// Line 348, Address: 0x281da8, Func Offset: 0x18
	// Line 349, Address: 0x281db0, Func Offset: 0x20
	// Line 350, Address: 0x281dc0, Func Offset: 0x30
	// Line 351, Address: 0x281dc8, Func Offset: 0x38
	// Line 352, Address: 0x281dcc, Func Offset: 0x3c
	// Line 353, Address: 0x281ddc, Func Offset: 0x4c
	// Line 354, Address: 0x281de0, Func Offset: 0x50
	// Line 356, Address: 0x281de8, Func Offset: 0x58
	// Line 358, Address: 0x281df0, Func Offset: 0x60
	// Line 359, Address: 0x281e08, Func Offset: 0x78
	// Line 361, Address: 0x281e10, Func Offset: 0x80
	// Func End, Address: 0x281e24, Func Offset: 0x94
}

// 
// Start address: 0x281e30
void EnemyPickgirlHairDraw(EnemyPickgirlHairObjWork* phow)
{
	sfObj* obj;
	// Line 367, Address: 0x281e30, Func Offset: 0
	// Line 369, Address: 0x281e40, Func Offset: 0x10
	// Line 371, Address: 0x281e48, Func Offset: 0x18
	// Line 373, Address: 0x281e50, Func Offset: 0x20
	// Line 374, Address: 0x281e58, Func Offset: 0x28
	// Func End, Address: 0x281e68, Func Offset: 0x38
}

// 
// Start address: 0x281e70
void EnemyPickgirlHairHidden(EnemyPickgirlHairObjWork* phow)
{
	sfObj* obj;
	// Line 380, Address: 0x281e70, Func Offset: 0
	// Line 382, Address: 0x281e80, Func Offset: 0x10
	// Line 384, Address: 0x281e88, Func Offset: 0x18
	// Line 386, Address: 0x281e90, Func Offset: 0x20
	// Line 387, Address: 0x281e98, Func Offset: 0x28
	// Func End, Address: 0x281ea8, Func Offset: 0x38
}

// 
// Start address: 0x281eb0
void EnemyPickgirlHairAnimeChange(EnemyPickgirlHairObjWork* phow)
{
	sfObj* obj;
	sfObj* pobj;
	// Line 393, Address: 0x281eb0, Func Offset: 0
	// Line 395, Address: 0x281ec4, Func Offset: 0x14
	// Line 397, Address: 0x281ecc, Func Offset: 0x1c
	// Line 398, Address: 0x281ed0, Func Offset: 0x20
	// Line 400, Address: 0x281ef0, Func Offset: 0x40
	// Line 401, Address: 0x281f10, Func Offset: 0x60
	// Func End, Address: 0x281f28, Func Offset: 0x78
}

// 
// Start address: 0x281f30
void EnemyPickgirlHairReset(EnemyPickgirlHairObjWork* phow)
{
	EnemyPickgirlHairWork* ehw;
	EnemyPickgirlHairData* ehd;
	float pos[4];
	float* rot;
	int i;
	int j;
	int m;
	// Line 407, Address: 0x281f30, Func Offset: 0
	// Line 413, Address: 0x281f5c, Func Offset: 0x2c
	// Line 414, Address: 0x281f64, Func Offset: 0x34
	// Line 415, Address: 0x281f68, Func Offset: 0x38
	// Line 416, Address: 0x281f70, Func Offset: 0x40
	// Line 415, Address: 0x281f74, Func Offset: 0x44
	// Line 416, Address: 0x281f78, Func Offset: 0x48
	// Line 417, Address: 0x281f88, Func Offset: 0x58
	// Line 418, Address: 0x281f8c, Func Offset: 0x5c
	// Line 417, Address: 0x281f90, Func Offset: 0x60
	// Line 419, Address: 0x281f94, Func Offset: 0x64
	// Line 421, Address: 0x281fa8, Func Offset: 0x78
	// Line 422, Address: 0x281fc4, Func Offset: 0x94
	// Line 425, Address: 0x281fc8, Func Offset: 0x98
	// Line 422, Address: 0x281fcc, Func Offset: 0x9c
	// Line 424, Address: 0x281fd0, Func Offset: 0xa0
	// Line 425, Address: 0x281fd4, Func Offset: 0xa4
	// Line 424, Address: 0x281fd8, Func Offset: 0xa8
	// Line 422, Address: 0x281fdc, Func Offset: 0xac
	// Line 423, Address: 0x281ff0, Func Offset: 0xc0
	// Line 424, Address: 0x282010, Func Offset: 0xe0
	// Line 425, Address: 0x282030, Func Offset: 0x100
	// Line 426, Address: 0x282038, Func Offset: 0x108
	// Line 427, Address: 0x282050, Func Offset: 0x120
	// Func End, Address: 0x282080, Func Offset: 0x150
}

// 
// Start address: 0x282080
void EnemyPickgirlHairSetTarget(EnemyPickgirlHairObjWork* phow, int num, float* pos)
{
	// Line 437, Address: 0x282080, Func Offset: 0
	// Line 439, Address: 0x282088, Func Offset: 0x8
	// Line 440, Address: 0x2820a8, Func Offset: 0x28
	// Line 441, Address: 0x2820c0, Func Offset: 0x40
	// Line 442, Address: 0x2820dc, Func Offset: 0x5c
	// Func End, Address: 0x2820e8, Func Offset: 0x68
}

// 
// Start address: 0x2820f0
void EnemyPickgirlHairIgnoreTarget(EnemyPickgirlHairObjWork* phow, int num)
{
	// Line 450, Address: 0x2820f0, Func Offset: 0
	// Line 452, Address: 0x2820f8, Func Offset: 0x8
	// Line 453, Address: 0x282118, Func Offset: 0x28
	// Line 454, Address: 0x282130, Func Offset: 0x40
	// Func End, Address: 0x282138, Func Offset: 0x48
}

// 
// Start address: 0x282140
void EnemyPickgirlHairIgnoreTargetSlow(EnemyPickgirlHairObjWork* phow, int num)
{
	// Line 462, Address: 0x282140, Func Offset: 0
	// Line 464, Address: 0x282148, Func Offset: 0x8
	// Line 465, Address: 0x282168, Func Offset: 0x28
	// Line 466, Address: 0x282184, Func Offset: 0x44
	// Func End, Address: 0x282190, Func Offset: 0x50
}

// 
// Start address: 0x282190
void move_one(EnemyPickgirlHairData* ehd, float* ppos, float thickness, float length, float floor_height)
{
	float* tpos;
	float* vec;
	float* vec2;
	float* move;
	float dt;
	float d;
	// Line 479, Address: 0x282190, Func Offset: 0
	// Line 482, Address: 0x282194, Func Offset: 0x4
	// Line 479, Address: 0x282198, Func Offset: 0x8
	// Line 482, Address: 0x2821cc, Func Offset: 0x3c
	// Line 483, Address: 0x2821f0, Func Offset: 0x60
	// Line 482, Address: 0x2821f4, Func Offset: 0x64
	// Line 484, Address: 0x2821f8, Func Offset: 0x68
	// Line 486, Address: 0x2821fc, Func Offset: 0x6c
	// Line 487, Address: 0x282204, Func Offset: 0x74
	// Line 489, Address: 0x282208, Func Offset: 0x78
	// Line 487, Address: 0x282210, Func Offset: 0x80
	// Line 488, Address: 0x282228, Func Offset: 0x98
	// Line 489, Address: 0x282244, Func Offset: 0xb4
	// Line 491, Address: 0x282268, Func Offset: 0xd8
	// Line 492, Address: 0x282274, Func Offset: 0xe4
	// Line 491, Address: 0x282278, Func Offset: 0xe8
	// Line 493, Address: 0x282284, Func Offset: 0xf4
	// Line 494, Address: 0x28228c, Func Offset: 0xfc
	// Line 495, Address: 0x282290, Func Offset: 0x100
	// Line 496, Address: 0x28229c, Func Offset: 0x10c
	// Line 495, Address: 0x2822a0, Func Offset: 0x110
	// Line 497, Address: 0x2822b8, Func Offset: 0x128
	// Line 499, Address: 0x2822c0, Func Offset: 0x130
	// Line 500, Address: 0x2822d0, Func Offset: 0x140
	// Line 499, Address: 0x2822d4, Func Offset: 0x144
	// Line 500, Address: 0x2822dc, Func Offset: 0x14c
	// Line 499, Address: 0x2822e0, Func Offset: 0x150
	// Line 500, Address: 0x2822e4, Func Offset: 0x154
	// Line 499, Address: 0x2822e8, Func Offset: 0x158
	// Line 500, Address: 0x2822ec, Func Offset: 0x15c
	// Line 499, Address: 0x2822f0, Func Offset: 0x160
	// Line 500, Address: 0x2822f4, Func Offset: 0x164
	// Line 499, Address: 0x2822f8, Func Offset: 0x168
	// Line 500, Address: 0x2822fc, Func Offset: 0x16c
	// Line 502, Address: 0x282304, Func Offset: 0x174
	// Line 503, Address: 0x282308, Func Offset: 0x178
	// Line 504, Address: 0x282330, Func Offset: 0x1a0
	// Line 505, Address: 0x28234c, Func Offset: 0x1bc
	// Line 506, Address: 0x282360, Func Offset: 0x1d0
	// Line 507, Address: 0x282374, Func Offset: 0x1e4
	// Line 508, Address: 0x282398, Func Offset: 0x208
	// Line 510, Address: 0x2823a4, Func Offset: 0x214
	// Line 509, Address: 0x2823a8, Func Offset: 0x218
	// Line 510, Address: 0x2823b0, Func Offset: 0x220
	// Line 509, Address: 0x2823b4, Func Offset: 0x224
	// Line 510, Address: 0x2823b8, Func Offset: 0x228
	// Line 511, Address: 0x2823d4, Func Offset: 0x244
	// Line 512, Address: 0x2823f4, Func Offset: 0x264
	// Line 513, Address: 0x282410, Func Offset: 0x280
	// Line 514, Address: 0x282424, Func Offset: 0x294
	// Line 517, Address: 0x282438, Func Offset: 0x2a8
	// Line 516, Address: 0x28243c, Func Offset: 0x2ac
	// Line 517, Address: 0x282440, Func Offset: 0x2b0
	// Line 518, Address: 0x28244c, Func Offset: 0x2bc
	// Line 519, Address: 0x282450, Func Offset: 0x2c0
	// Line 520, Address: 0x282454, Func Offset: 0x2c4
	// Line 521, Address: 0x282458, Func Offset: 0x2c8
	// Line 522, Address: 0x282474, Func Offset: 0x2e4
	// Line 523, Address: 0x282484, Func Offset: 0x2f4
	// Line 524, Address: 0x282488, Func Offset: 0x2f8
	// Line 526, Address: 0x28248c, Func Offset: 0x2fc
	// Line 529, Address: 0x282490, Func Offset: 0x300
	// Line 527, Address: 0x282494, Func Offset: 0x304
	// Line 528, Address: 0x2824ac, Func Offset: 0x31c
	// Line 529, Address: 0x2824c4, Func Offset: 0x334
	// Line 530, Address: 0x2824d4, Func Offset: 0x344
	// Func End, Address: 0x282508, Func Offset: 0x378
}

// 
// Start address: 0x282510
void move_line(EnemyPickgirlHairObjData* hod, EnemyPickgirlHairWork* ehw)
{
	int i;
	int m;
	EnemyPickgirlHairData* ehd;
	EnemyPickgirlHairSkeleton* ehs;
	sgBone* bone;
	sgBone* pbone;
	sgBone* ppbone;
	float* ppos;
	float* pos;
	float* vec;
	float* trot;
	float* prot;
	// Line 538, Address: 0x282510, Func Offset: 0
	// Line 545, Address: 0x282514, Func Offset: 0x4
	// Line 538, Address: 0x282518, Func Offset: 0x8
	// Line 553, Address: 0x282530, Func Offset: 0x20
	// Line 538, Address: 0x282534, Func Offset: 0x24
	// Line 545, Address: 0x282548, Func Offset: 0x38
	// Line 549, Address: 0x282560, Func Offset: 0x50
	// Line 545, Address: 0x282564, Func Offset: 0x54
	// Line 546, Address: 0x282568, Func Offset: 0x58
	// Line 549, Address: 0x28256c, Func Offset: 0x5c
	// Line 547, Address: 0x282570, Func Offset: 0x60
	// Line 550, Address: 0x282574, Func Offset: 0x64
	// Line 552, Address: 0x282578, Func Offset: 0x68
	// Line 550, Address: 0x28257c, Func Offset: 0x6c
	// Line 551, Address: 0x282584, Func Offset: 0x74
	// Line 553, Address: 0x282588, Func Offset: 0x78
	// Line 554, Address: 0x282590, Func Offset: 0x80
	// Line 555, Address: 0x2825a0, Func Offset: 0x90
	// Line 556, Address: 0x2825a8, Func Offset: 0x98
	// Line 557, Address: 0x2825b4, Func Offset: 0xa4
	// Line 558, Address: 0x2825c0, Func Offset: 0xb0
	// Line 559, Address: 0x2825cc, Func Offset: 0xbc
	// Line 560, Address: 0x2825d0, Func Offset: 0xc0
	// Line 562, Address: 0x2825f0, Func Offset: 0xe0
	// Line 563, Address: 0x28260c, Func Offset: 0xfc
	// Line 564, Address: 0x282620, Func Offset: 0x110
	// Line 565, Address: 0x282634, Func Offset: 0x124
	// Line 566, Address: 0x282644, Func Offset: 0x134
	// Line 567, Address: 0x282680, Func Offset: 0x170
	// Line 568, Address: 0x28268c, Func Offset: 0x17c
	// Line 569, Address: 0x282690, Func Offset: 0x180
	// Line 570, Address: 0x28269c, Func Offset: 0x18c
	// Line 571, Address: 0x2826b4, Func Offset: 0x1a4
	// Line 572, Address: 0x2826c0, Func Offset: 0x1b0
	// Line 573, Address: 0x2826c8, Func Offset: 0x1b8
	// Line 574, Address: 0x2826e4, Func Offset: 0x1d4
	// Line 575, Address: 0x2826f4, Func Offset: 0x1e4
	// Line 577, Address: 0x282700, Func Offset: 0x1f0
	// Line 578, Address: 0x282710, Func Offset: 0x200
	// Line 579, Address: 0x282724, Func Offset: 0x214
	// Line 580, Address: 0x282738, Func Offset: 0x228
	// Line 581, Address: 0x282748, Func Offset: 0x238
	// Line 582, Address: 0x282754, Func Offset: 0x244
	// Line 583, Address: 0x282764, Func Offset: 0x254
	// Line 584, Address: 0x282768, Func Offset: 0x258
	// Line 587, Address: 0x282770, Func Offset: 0x260
	// Line 585, Address: 0x282774, Func Offset: 0x264
	// Line 587, Address: 0x282778, Func Offset: 0x268
	// Line 586, Address: 0x28277c, Func Offset: 0x26c
	// Line 587, Address: 0x282780, Func Offset: 0x270
	// Line 605, Address: 0x282798, Func Offset: 0x288
	// Line 606, Address: 0x2827a8, Func Offset: 0x298
	// Func End, Address: 0x2827d8, Func Offset: 0x2c8
}

// 
// Start address: 0x2827e0
void move_line_target(EnemyPickgirlHairObjData* hod, EnemyPickgirlHairWork* ehw, float* target)
{
	EnemyPickgirlHairData* ehd;
	EnemyPickgirlHairSkeleton* ehs;
	sgBone* bone;
	float* tpos;
	float* pos;
	float* vec;
	int i;
	int m;
	// Line 616, Address: 0x2827e0, Func Offset: 0
	// Line 622, Address: 0x2827e4, Func Offset: 0x4
	// Line 616, Address: 0x2827e8, Func Offset: 0x8
	// Line 622, Address: 0x282810, Func Offset: 0x30
	// Line 623, Address: 0x282828, Func Offset: 0x48
	// Line 622, Address: 0x28282c, Func Offset: 0x4c
	// Line 624, Address: 0x282830, Func Offset: 0x50
	// Line 625, Address: 0x282834, Func Offset: 0x54
	// Line 626, Address: 0x28283c, Func Offset: 0x5c
	// Line 627, Address: 0x282844, Func Offset: 0x64
	// Line 628, Address: 0x282850, Func Offset: 0x70
	// Line 629, Address: 0x282858, Func Offset: 0x78
	// Line 628, Address: 0x28285c, Func Offset: 0x7c
	// Line 629, Address: 0x282860, Func Offset: 0x80
	// Line 628, Address: 0x282864, Func Offset: 0x84
	// Line 629, Address: 0x282868, Func Offset: 0x88
	// Line 628, Address: 0x282870, Func Offset: 0x90
	// Line 629, Address: 0x282874, Func Offset: 0x94
	// Line 628, Address: 0x282878, Func Offset: 0x98
	// Line 630, Address: 0x28287c, Func Offset: 0x9c
	// Line 631, Address: 0x282888, Func Offset: 0xa8
	// Line 635, Address: 0x282894, Func Offset: 0xb4
	// Line 636, Address: 0x2828a8, Func Offset: 0xc8
	// Line 637, Address: 0x2828d8, Func Offset: 0xf8
	// Line 638, Address: 0x2828e0, Func Offset: 0x100
	// Line 641, Address: 0x2828f0, Func Offset: 0x110
	// Line 639, Address: 0x2828f4, Func Offset: 0x114
	// Line 641, Address: 0x2828f8, Func Offset: 0x118
	// Line 639, Address: 0x2828fc, Func Offset: 0x11c
	// Line 641, Address: 0x282904, Func Offset: 0x124
	// Line 642, Address: 0x28290c, Func Offset: 0x12c
	// Func End, Address: 0x282934, Func Offset: 0x154
}

// 
// Start address: 0x282940
void EnemyPickgirlHairMove(EnemyPickgirlHairObjWork* phow)
{
	EnemyPickgirlHairObjData* hod;
	EnemyMeasureResult mres;
	int i;
	// Line 648, Address: 0x282940, Func Offset: 0
	// Line 652, Address: 0x28295c, Func Offset: 0x1c
	// Line 656, Address: 0x282964, Func Offset: 0x24
	// Line 658, Address: 0x282970, Func Offset: 0x30
	// Line 656, Address: 0x282974, Func Offset: 0x34
	// Line 658, Address: 0x282978, Func Offset: 0x38
	// Line 659, Address: 0x28297c, Func Offset: 0x3c
	// Line 660, Address: 0x282988, Func Offset: 0x48
	// Line 661, Address: 0x282994, Func Offset: 0x54
	// Line 662, Address: 0x2829a8, Func Offset: 0x68
	// Line 663, Address: 0x2829ac, Func Offset: 0x6c
	// Line 664, Address: 0x2829b8, Func Offset: 0x78
	// Line 666, Address: 0x2829c0, Func Offset: 0x80
	// Line 667, Address: 0x2829c8, Func Offset: 0x88
	// Line 668, Address: 0x2829e8, Func Offset: 0xa8
	// Line 669, Address: 0x282a14, Func Offset: 0xd4
	// Line 670, Address: 0x282a24, Func Offset: 0xe4
	// Line 671, Address: 0x282a30, Func Offset: 0xf0
	// Line 674, Address: 0x282a44, Func Offset: 0x104
	// Line 671, Address: 0x282a50, Func Offset: 0x110
	// Line 674, Address: 0x282a54, Func Offset: 0x114
	// Line 675, Address: 0x282a60, Func Offset: 0x120
	// Line 676, Address: 0x282a68, Func Offset: 0x128
	// Line 681, Address: 0x282a74, Func Offset: 0x134
	// Func End, Address: 0x282a98, Func Offset: 0x158
}

// 
// Start address: 0x282aa0
void EnemyPickgirlHairRestore(EnemyPickgirlHairObjWork* phow)
{
	EnemyPickgirlHairWork* ehw;
	EnemyPickgirlHairData* ehd;
	sgBone* bone;
	float pos[4];
	float rot[4];
	int i;
	int j;
	int m;
	// Line 687, Address: 0x282aa0, Func Offset: 0
	// Line 694, Address: 0x282acc, Func Offset: 0x2c
	// Line 696, Address: 0x282ad4, Func Offset: 0x34
	// Line 695, Address: 0x282ad8, Func Offset: 0x38
	// Line 696, Address: 0x282adc, Func Offset: 0x3c
	// Line 697, Address: 0x282af0, Func Offset: 0x50
	// Line 698, Address: 0x282af4, Func Offset: 0x54
	// Line 697, Address: 0x282af8, Func Offset: 0x58
	// Line 699, Address: 0x282afc, Func Offset: 0x5c
	// Line 701, Address: 0x282b10, Func Offset: 0x70
	// Line 702, Address: 0x282b28, Func Offset: 0x88
	// Line 701, Address: 0x282b2c, Func Offset: 0x8c
	// Line 702, Address: 0x282b30, Func Offset: 0x90
	// Line 704, Address: 0x282b34, Func Offset: 0x94
	// Line 702, Address: 0x282b3c, Func Offset: 0x9c
	// Line 703, Address: 0x282b58, Func Offset: 0xb8
	// Line 704, Address: 0x282b80, Func Offset: 0xe0
	// Line 705, Address: 0x282b88, Func Offset: 0xe8
	// Line 706, Address: 0x282b94, Func Offset: 0xf4
	// Line 707, Address: 0x282b9c, Func Offset: 0xfc
	// Line 706, Address: 0x282ba0, Func Offset: 0x100
	// Line 707, Address: 0x282ba4, Func Offset: 0x104
	// Line 708, Address: 0x282bb0, Func Offset: 0x110
	// Line 709, Address: 0x282bc8, Func Offset: 0x128
	// Func End, Address: 0x282bf8, Func Offset: 0x158
}

