typedef struct sgBone;
typedef struct sgIKHandle;
typedef struct _anon0;
typedef struct _anon1;
typedef enum sgIKSolveResult : unsigned char;

typedef sgIKSolveResult(*type_4)();

typedef float type_0[4];
typedef sgBone type_1[64];
typedef float type_2[4][2];
typedef float type_3[4];

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
	sgBone* free;
	int left;
	int tmp_work_allocated;
	int n_works;
	sgBone* work_top;
};

struct _anon1
{
	sgIKHandle* free_top;
	int n_works;
	int left;
	sgIKHandle* work_top;
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

sgBone tmp_bone_work[64];
_anon0 bone_man;
_anon1 handle_man;

void sgAnimeWorkBoneInit();
int sgAnimeWorkBoneNeedSize(int n_bones);
void sgAnimeWorkBoneSetBuffer(void* addr, int size);
void sgAnimeWorkBoneFreeAll();
sgBone* sgAnimeWorkBoneAllocate(int alloc_num);
void sgAnimeWorkBoneFree(sgBone* bone_);
void sgAnimeWorkIKHandleInit();
int sgAnimeWorkIKHandleNeedSize(int n_handles);
void sgAnimeWorkIKHandleSetBuffer(void* addr, int size);
void sgAnimeWorkIKHandleFreeAll();
sgIKHandle* sgAnimeWorkIKHandleAllocate();
void sgAnimeWorkIKHandleFree(sgIKHandle* handle);

// 
// Start address: 0x145010
void sgAnimeWorkBoneInit()
{
	// Line 53, Address: 0x145010, Func Offset: 0
	// Line 56, Address: 0x145014, Func Offset: 0x4
	// Line 53, Address: 0x145018, Func Offset: 0x8
	// Line 56, Address: 0x14501c, Func Offset: 0xc
	// Line 57, Address: 0x14502c, Func Offset: 0x1c
	// Line 58, Address: 0x145040, Func Offset: 0x30
	// Line 59, Address: 0x14504c, Func Offset: 0x3c
	// Func End, Address: 0x145058, Func Offset: 0x48
}

// 
// Start address: 0x145060
int sgAnimeWorkBoneNeedSize(int n_bones)
{
	// Line 67, Address: 0x145060, Func Offset: 0
	// Line 68, Address: 0x145068, Func Offset: 0x8
	// Func End, Address: 0x145070, Func Offset: 0x10
}

// 
// Start address: 0x145070
void sgAnimeWorkBoneSetBuffer(void* addr, int size)
{
	int n_bones;
	sgBone* bone;
	// Line 79, Address: 0x145070, Func Offset: 0
	// Line 84, Address: 0x145084, Func Offset: 0x14
	// Line 85, Address: 0x14508c, Func Offset: 0x1c
	// Line 86, Address: 0x145098, Func Offset: 0x28
	// Line 87, Address: 0x1450a4, Func Offset: 0x34
	// Line 89, Address: 0x1450b0, Func Offset: 0x40
	// Line 90, Address: 0x1450b8, Func Offset: 0x48
	// Line 89, Address: 0x1450bc, Func Offset: 0x4c
	// Line 90, Address: 0x1450c0, Func Offset: 0x50
	// Line 89, Address: 0x1450c8, Func Offset: 0x58
	// Line 90, Address: 0x1450dc, Func Offset: 0x6c
	// Line 95, Address: 0x1450e4, Func Offset: 0x74
	// Line 92, Address: 0x1450e8, Func Offset: 0x78
	// Line 95, Address: 0x1450ec, Func Offset: 0x7c
	// Line 92, Address: 0x1450f0, Func Offset: 0x80
	// Line 96, Address: 0x1450f4, Func Offset: 0x84
	// Line 93, Address: 0x1450fc, Func Offset: 0x8c
	// Line 94, Address: 0x145104, Func Offset: 0x94
	// Line 97, Address: 0x145108, Func Offset: 0x98
	// Line 98, Address: 0x145110, Func Offset: 0xa0
	// Line 99, Address: 0x145118, Func Offset: 0xa8
	// Func End, Address: 0x14512c, Func Offset: 0xbc
}

// 
// Start address: 0x145130
void sgAnimeWorkBoneFreeAll()
{
	sgBone* bone;
	int n_bones;
	int i;
	// Line 103, Address: 0x145130, Func Offset: 0
	// Line 109, Address: 0x145134, Func Offset: 0x4
	// Line 103, Address: 0x145138, Func Offset: 0x8
	// Line 109, Address: 0x145148, Func Offset: 0x18
	// Line 110, Address: 0x14514c, Func Offset: 0x1c
	// Line 112, Address: 0x145154, Func Offset: 0x24
	// Line 113, Address: 0x14515c, Func Offset: 0x2c
	// Line 115, Address: 0x145164, Func Offset: 0x34
	// Line 116, Address: 0x145170, Func Offset: 0x40
	// Line 118, Address: 0x14517c, Func Offset: 0x4c
	// Line 119, Address: 0x145184, Func Offset: 0x54
	// Line 120, Address: 0x145188, Func Offset: 0x58
	// Line 121, Address: 0x145198, Func Offset: 0x68
	// Func End, Address: 0x1451b0, Func Offset: 0x80
}

// 
// Start address: 0x1451b0
sgBone* sgAnimeWorkBoneAllocate(int alloc_num)
{
	int i;
	sgBone* bone;
	sgBone* bone_free;
	// Line 139, Address: 0x1451b0, Func Offset: 0
	// Line 143, Address: 0x1451c8, Func Offset: 0x18
	// Line 144, Address: 0x1451d0, Func Offset: 0x20
	// Line 146, Address: 0x1451d8, Func Offset: 0x28
	// Line 147, Address: 0x1451ec, Func Offset: 0x3c
	// Line 148, Address: 0x1451f8, Func Offset: 0x48
	// Line 151, Address: 0x145208, Func Offset: 0x58
	// Line 152, Address: 0x145220, Func Offset: 0x70
	// Line 155, Address: 0x145234, Func Offset: 0x84
	// Line 156, Address: 0x14523c, Func Offset: 0x8c
	// Line 157, Address: 0x145248, Func Offset: 0x98
	// Line 161, Address: 0x145250, Func Offset: 0xa0
	// Line 160, Address: 0x145254, Func Offset: 0xa4
	// Line 161, Address: 0x145258, Func Offset: 0xa8
	// Line 162, Address: 0x145260, Func Offset: 0xb0
	// Line 163, Address: 0x145274, Func Offset: 0xc4
	// Line 164, Address: 0x145284, Func Offset: 0xd4
	// Line 165, Address: 0x14528c, Func Offset: 0xdc
	// Line 164, Address: 0x145290, Func Offset: 0xe0
	// Line 166, Address: 0x145294, Func Offset: 0xe4
	// Line 168, Address: 0x14529c, Func Offset: 0xec
	// Line 169, Address: 0x1452ac, Func Offset: 0xfc
	// Line 171, Address: 0x1452b4, Func Offset: 0x104
	// Line 173, Address: 0x1452c8, Func Offset: 0x118
	// Line 174, Address: 0x1452cc, Func Offset: 0x11c
	// Line 175, Address: 0x1452d8, Func Offset: 0x128
	// Line 176, Address: 0x1452e0, Func Offset: 0x130
	// Line 177, Address: 0x1452e4, Func Offset: 0x134
	// Line 178, Address: 0x1452f8, Func Offset: 0x148
	// Line 179, Address: 0x145300, Func Offset: 0x150
	// Line 178, Address: 0x145304, Func Offset: 0x154
	// Line 179, Address: 0x14530c, Func Offset: 0x15c
	// Line 183, Address: 0x145314, Func Offset: 0x164
	// Line 185, Address: 0x145328, Func Offset: 0x178
	// Line 186, Address: 0x145338, Func Offset: 0x188
	// Line 187, Address: 0x145340, Func Offset: 0x190
	// Func End, Address: 0x14535c, Func Offset: 0x1ac
}

// 
// Start address: 0x145360
void sgAnimeWorkBoneFree(sgBone* bone_)
{
	int i;
	sgBone* bone;
	// Line 193, Address: 0x145360, Func Offset: 0
	// Line 197, Address: 0x145370, Func Offset: 0x10
	// Line 200, Address: 0x145378, Func Offset: 0x18
	// Line 201, Address: 0x14538c, Func Offset: 0x2c
	// Line 202, Address: 0x145394, Func Offset: 0x34
	// Line 203, Address: 0x1453a0, Func Offset: 0x40
	// Line 205, Address: 0x1453a8, Func Offset: 0x48
	// Line 206, Address: 0x1453b0, Func Offset: 0x50
	// Line 207, Address: 0x1453b4, Func Offset: 0x54
	// Line 208, Address: 0x1453bc, Func Offset: 0x5c
	// Line 207, Address: 0x1453c4, Func Offset: 0x64
	// Line 208, Address: 0x1453cc, Func Offset: 0x6c
	// Line 209, Address: 0x1453d8, Func Offset: 0x78
	// Func End, Address: 0x1453ec, Func Offset: 0x8c
}

// 
// Start address: 0x1453f0
void sgAnimeWorkIKHandleInit()
{
	// Line 290, Address: 0x1453f0, Func Offset: 0
	// Line 293, Address: 0x1453f4, Func Offset: 0x4
	// Line 290, Address: 0x1453f8, Func Offset: 0x8
	// Line 293, Address: 0x1453fc, Func Offset: 0xc
	// Line 294, Address: 0x14540c, Func Offset: 0x1c
	// Line 295, Address: 0x145418, Func Offset: 0x28
	// Func End, Address: 0x145424, Func Offset: 0x34
}

// 
// Start address: 0x145430
int sgAnimeWorkIKHandleNeedSize(int n_handles)
{
	// Line 303, Address: 0x145430, Func Offset: 0
	// Line 304, Address: 0x145438, Func Offset: 0x8
	// Func End, Address: 0x145440, Func Offset: 0x10
}

// 
// Start address: 0x145440
void sgAnimeWorkIKHandleSetBuffer(void* addr, int size)
{
	int n_handles;
	int i;
	sgIKHandle* handle;
	// Line 315, Address: 0x145440, Func Offset: 0
	// Line 320, Address: 0x145454, Func Offset: 0x14
	// Line 322, Address: 0x14545c, Func Offset: 0x1c
	// Line 323, Address: 0x145468, Func Offset: 0x28
	// Line 324, Address: 0x145474, Func Offset: 0x34
	// Line 326, Address: 0x145480, Func Offset: 0x40
	// Line 327, Address: 0x145488, Func Offset: 0x48
	// Line 326, Address: 0x14548c, Func Offset: 0x4c
	// Line 327, Address: 0x145490, Func Offset: 0x50
	// Line 326, Address: 0x145498, Func Offset: 0x58
	// Line 327, Address: 0x1454a0, Func Offset: 0x60
	// Line 332, Address: 0x1454a8, Func Offset: 0x68
	// Line 329, Address: 0x1454ac, Func Offset: 0x6c
	// Line 332, Address: 0x1454b0, Func Offset: 0x70
	// Line 329, Address: 0x1454b4, Func Offset: 0x74
	// Line 330, Address: 0x1454b8, Func Offset: 0x78
	// Line 331, Address: 0x1454c0, Func Offset: 0x80
	// Line 333, Address: 0x1454c8, Func Offset: 0x88
	// Line 335, Address: 0x1454cc, Func Offset: 0x8c
	// Line 336, Address: 0x1454d4, Func Offset: 0x94
	// Line 337, Address: 0x1454f0, Func Offset: 0xb0
	// Line 338, Address: 0x1454f8, Func Offset: 0xb8
	// Line 337, Address: 0x1454fc, Func Offset: 0xbc
	// Line 338, Address: 0x145504, Func Offset: 0xc4
	// Line 337, Address: 0x14550c, Func Offset: 0xcc
	// Line 338, Address: 0x145514, Func Offset: 0xd4
	// Line 337, Address: 0x145520, Func Offset: 0xe0
	// Line 338, Address: 0x145528, Func Offset: 0xe8
	// Line 337, Address: 0x145534, Func Offset: 0xf4
	// Line 338, Address: 0x14553c, Func Offset: 0xfc
	// Line 337, Address: 0x145560, Func Offset: 0x120
	// Line 338, Address: 0x145564, Func Offset: 0x124
	// Line 339, Address: 0x145580, Func Offset: 0x140
	// Line 340, Address: 0x145584, Func Offset: 0x144
	// Line 341, Address: 0x145588, Func Offset: 0x148
	// Func End, Address: 0x14559c, Func Offset: 0x15c
}

// 
// Start address: 0x1455a0
void sgAnimeWorkIKHandleFreeAll()
{
	int n_handles;
	int i;
	sgIKHandle* handle;
	// Line 345, Address: 0x1455a0, Func Offset: 0
	// Line 351, Address: 0x1455a4, Func Offset: 0x4
	// Line 345, Address: 0x1455a8, Func Offset: 0x8
	// Line 351, Address: 0x1455b4, Func Offset: 0x14
	// Line 352, Address: 0x1455b8, Func Offset: 0x18
	// Line 354, Address: 0x1455bc, Func Offset: 0x1c
	// Line 352, Address: 0x1455c0, Func Offset: 0x20
	// Line 354, Address: 0x1455c4, Func Offset: 0x24
	// Line 356, Address: 0x1455d4, Func Offset: 0x34
	// Line 357, Address: 0x1455dc, Func Offset: 0x3c
	// Line 359, Address: 0x1455e0, Func Offset: 0x40
	// Line 360, Address: 0x1455e8, Func Offset: 0x48
	// Line 361, Address: 0x145608, Func Offset: 0x68
	// Line 362, Address: 0x145610, Func Offset: 0x70
	// Line 361, Address: 0x145614, Func Offset: 0x74
	// Line 362, Address: 0x14561c, Func Offset: 0x7c
	// Line 361, Address: 0x145624, Func Offset: 0x84
	// Line 362, Address: 0x14562c, Func Offset: 0x8c
	// Line 361, Address: 0x145638, Func Offset: 0x98
	// Line 362, Address: 0x145640, Func Offset: 0xa0
	// Line 361, Address: 0x14564c, Func Offset: 0xac
	// Line 362, Address: 0x145654, Func Offset: 0xb4
	// Line 361, Address: 0x145678, Func Offset: 0xd8
	// Line 362, Address: 0x14567c, Func Offset: 0xdc
	// Line 363, Address: 0x145698, Func Offset: 0xf8
	// Line 364, Address: 0x14569c, Func Offset: 0xfc
	// Line 365, Address: 0x1456a0, Func Offset: 0x100
	// Func End, Address: 0x1456b4, Func Offset: 0x114
}

// 
// Start address: 0x1456c0
sgIKHandle* sgAnimeWorkIKHandleAllocate()
{
	// Line 376, Address: 0x1456c0, Func Offset: 0
	// Line 380, Address: 0x1456c8, Func Offset: 0x8
	// Line 381, Address: 0x1456d0, Func Offset: 0x10
	// Line 382, Address: 0x1456d8, Func Offset: 0x18
	// Line 383, Address: 0x1456e4, Func Offset: 0x24
	// Line 384, Address: 0x1456e8, Func Offset: 0x28
	// Func End, Address: 0x1456f0, Func Offset: 0x30
}

// 
// Start address: 0x1456f0
void sgAnimeWorkIKHandleFree(sgIKHandle* handle)
{
	// Line 389, Address: 0x1456f0, Func Offset: 0
	// Line 390, Address: 0x1456fc, Func Offset: 0xc
	// Line 391, Address: 0x145700, Func Offset: 0x10
	// Func End, Address: 0x145708, Func Offset: 0x18
}

