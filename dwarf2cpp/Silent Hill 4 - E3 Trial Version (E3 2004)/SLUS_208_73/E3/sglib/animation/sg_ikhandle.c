typedef struct sgBone;
typedef struct sgIKHandle;
typedef struct _anon0;
typedef enum sgIKHandleSolverType : unsigned char;
typedef enum sgIKSolveResult : unsigned char;

typedef sgIKSolveResult(*type_7)();

typedef float type_0[4];
typedef void* type_1[2];
typedef float type_2[4];
typedef float type_3[4][2];
typedef float type_4[4][2];
typedef sgBone* type_5[2];
typedef float type_6[4][2];

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
	float pre_rots[4][2];
	float current_rots[4][2];
	sgBone* bones[2];
	int n_bones;
};

enum sgIKHandleSolverType : unsigned char
{
	SG_IK_SOLVER_NONE,
	SG_IK_SOLVER_2B,
	SG_IK_SOLVER_MAX
};

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};

void* solver_func_table[2];
float sg_vector_unit_w[4];
_anon0 damp_work;

void sgIKHandleConstruct(sgIKHandle* handle, sgBone* h_bone);
void sgIKHandleCopy(sgIKHandle* dst, sgIKHandle* src);
sgBone* sgIKHandleBone(sgIKHandle* handle);
void sgIKHandleSetStart(sgIKHandle* handle, sgBone* start);
sgBone* sgIKHandleStart(sgIKHandle* handle);
void sgIKHandleSetEnd(sgIKHandle* handle, sgBone* end);
sgBone* sgIKHandleEnd(sgIKHandle* handle);
void sgIKHandleSetSolver(sgIKHandle* handle, sgIKHandleSolverType solver_type);
void sgIKHandleSetGoalPosition(sgIKHandle* handle, float* goal);
void sgIKHandleGetGoalPosition(sgIKHandle* handle, float* goal);
void sgIKHandleSetReachConstraint(sgIKHandle* handle, float r);
void sgIKHandleSetCloseConstraint(sgIKHandle* handle, float r);
void SaveDamps(sgIKHandle* handle);
void ApplyDamps(sgIKHandle* handle);
void sgIKHandleSolve(sgIKHandle* handle);

// 
// Start address: 0x146f00
void sgIKHandleConstruct(sgIKHandle* handle, sgBone* h_bone)
{
	// Line 29, Address: 0x146f00, Func Offset: 0
	// Line 31, Address: 0x146f08, Func Offset: 0x8
	// Line 37, Address: 0x146f0c, Func Offset: 0xc
	// Line 32, Address: 0x146f10, Func Offset: 0x10
	// Line 33, Address: 0x146f14, Func Offset: 0x14
	// Line 34, Address: 0x146f18, Func Offset: 0x18
	// Line 35, Address: 0x146f1c, Func Offset: 0x1c
	// Line 36, Address: 0x146f20, Func Offset: 0x20
	// Line 37, Address: 0x146f24, Func Offset: 0x24
	// Line 38, Address: 0x146f28, Func Offset: 0x28
	// Func End, Address: 0x146f30, Func Offset: 0x30
}

// 
// Start address: 0x146f30
void sgIKHandleCopy(sgIKHandle* dst, sgIKHandle* src)
{
	// Line 49, Address: 0x146f30, Func Offset: 0
	// Line 50, Address: 0x146f40, Func Offset: 0x10
	// Line 51, Address: 0x146f48, Func Offset: 0x18
	// Line 52, Address: 0x146f50, Func Offset: 0x20
	// Func End, Address: 0x146f58, Func Offset: 0x28
}

// 
// Start address: 0x146f60
sgBone* sgIKHandleBone(sgIKHandle* handle)
{
	// Line 66, Address: 0x146f60, Func Offset: 0
	// Line 68, Address: 0x146f6c, Func Offset: 0xc
	// Func End, Address: 0x146f74, Func Offset: 0x14
}

// 
// Start address: 0x146f80
void sgIKHandleSetStart(sgIKHandle* handle, sgBone* start)
{
	// Line 74, Address: 0x146f80, Func Offset: 0
	// Line 76, Address: 0x146f88, Func Offset: 0x8
	// Line 77, Address: 0x146f8c, Func Offset: 0xc
	// Func End, Address: 0x146f98, Func Offset: 0x18
}

// 
// Start address: 0x146fa0
sgBone* sgIKHandleStart(sgIKHandle* handle)
{
	// Line 83, Address: 0x146fa0, Func Offset: 0
	// Line 85, Address: 0x146fac, Func Offset: 0xc
	// Func End, Address: 0x146fb4, Func Offset: 0x14
}

// 
// Start address: 0x146fc0
void sgIKHandleSetEnd(sgIKHandle* handle, sgBone* end)
{
	// Line 92, Address: 0x146fc0, Func Offset: 0
	// Line 94, Address: 0x146fc8, Func Offset: 0x8
	// Line 95, Address: 0x146fcc, Func Offset: 0xc
	// Func End, Address: 0x146fd8, Func Offset: 0x18
}

// 
// Start address: 0x146fe0
sgBone* sgIKHandleEnd(sgIKHandle* handle)
{
	// Line 101, Address: 0x146fe0, Func Offset: 0
	// Line 103, Address: 0x146fec, Func Offset: 0xc
	// Func End, Address: 0x146ff4, Func Offset: 0x14
}

// 
// Start address: 0x147000
void sgIKHandleSetSolver(sgIKHandle* handle, sgIKHandleSolverType solver_type)
{
	// Line 108, Address: 0x147000, Func Offset: 0
	// Line 111, Address: 0x147008, Func Offset: 0x8
	// Line 112, Address: 0x147024, Func Offset: 0x24
	// Func End, Address: 0x147030, Func Offset: 0x30
}

// 
// Start address: 0x147030
void sgIKHandleSetGoalPosition(sgIKHandle* handle, float* goal)
{
	// Line 121, Address: 0x147030, Func Offset: 0
	// Line 122, Address: 0x147034, Func Offset: 0x4
	// Line 124, Address: 0x14703c, Func Offset: 0xc
	// Line 125, Address: 0x147044, Func Offset: 0x14
	// Func End, Address: 0x147054, Func Offset: 0x24
}

// 
// Start address: 0x147060
void sgIKHandleGetGoalPosition(sgIKHandle* handle, float* goal)
{
	// Line 133, Address: 0x147060, Func Offset: 0
	// Line 134, Address: 0x147064, Func Offset: 0x4
	// Line 136, Address: 0x14706c, Func Offset: 0xc
	// Line 137, Address: 0x147074, Func Offset: 0x14
	// Func End, Address: 0x147084, Func Offset: 0x24
}

// 
// Start address: 0x147090
void sgIKHandleSetReachConstraint(sgIKHandle* handle, float r)
{
	// Line 145, Address: 0x147090, Func Offset: 0
	// Line 147, Address: 0x147098, Func Offset: 0x8
	// Line 148, Address: 0x14709c, Func Offset: 0xc
	// Func End, Address: 0x1470a8, Func Offset: 0x18
}

// 
// Start address: 0x1470b0
void sgIKHandleSetCloseConstraint(sgIKHandle* handle, float r)
{
	// Line 156, Address: 0x1470b0, Func Offset: 0
	// Line 158, Address: 0x1470b8, Func Offset: 0x8
	// Line 159, Address: 0x1470bc, Func Offset: 0xc
	// Func End, Address: 0x1470c8, Func Offset: 0x18
}

// 
// Start address: 0x1470d0
void SaveDamps(sgIKHandle* handle)
{
	int i;
	sgBone* bone;
	sgBone* start;
	// Line 185, Address: 0x1470d0, Func Offset: 0
	// Line 187, Address: 0x1470ec, Func Offset: 0x1c
	// Line 188, Address: 0x1470f4, Func Offset: 0x24
	// Line 189, Address: 0x147100, Func Offset: 0x30
	// Line 190, Address: 0x14710c, Func Offset: 0x3c
	// Line 189, Address: 0x147110, Func Offset: 0x40
	// Line 190, Address: 0x147114, Func Offset: 0x44
	// Line 191, Address: 0x147128, Func Offset: 0x58
	// Line 192, Address: 0x147134, Func Offset: 0x64
	// Line 193, Address: 0x147140, Func Offset: 0x70
	// Line 194, Address: 0x147160, Func Offset: 0x90
	// Line 195, Address: 0x147168, Func Offset: 0x98
	// Line 196, Address: 0x147180, Func Offset: 0xb0
	// Line 197, Address: 0x14718c, Func Offset: 0xbc
	// Line 196, Address: 0x147190, Func Offset: 0xc0
	// Line 199, Address: 0x147198, Func Offset: 0xc8
	// Line 200, Address: 0x1471a0, Func Offset: 0xd0
	// Func End, Address: 0x1471c0, Func Offset: 0xf0
}

// 
// Start address: 0x1471c0
void ApplyDamps(sgIKHandle* handle)
{
	int i;
	sgBone* bone;
	float q[4];
	float damp_ratio;
	// Line 205, Address: 0x1471c0, Func Offset: 0
	// Line 207, Address: 0x1471dc, Func Offset: 0x1c
	// Line 212, Address: 0x1471e4, Func Offset: 0x24
	// Line 213, Address: 0x1471ec, Func Offset: 0x2c
	// Line 215, Address: 0x147210, Func Offset: 0x50
	// Line 216, Address: 0x14721c, Func Offset: 0x5c
	// Line 215, Address: 0x147228, Func Offset: 0x68
	// Line 216, Address: 0x14722c, Func Offset: 0x6c
	// Line 219, Address: 0x147238, Func Offset: 0x78
	// Line 218, Address: 0x14723c, Func Offset: 0x7c
	// Line 219, Address: 0x147240, Func Offset: 0x80
	// Line 220, Address: 0x147248, Func Offset: 0x88
	// Line 222, Address: 0x147260, Func Offset: 0xa0
	// Line 223, Address: 0x14726c, Func Offset: 0xac
	// Line 225, Address: 0x147288, Func Offset: 0xc8
	// Line 227, Address: 0x14729c, Func Offset: 0xdc
	// Line 229, Address: 0x1472ac, Func Offset: 0xec
	// Line 230, Address: 0x1472c4, Func Offset: 0x104
	// Line 231, Address: 0x1472d0, Func Offset: 0x110
	// Line 232, Address: 0x1472e8, Func Offset: 0x128
	// Func End, Address: 0x147308, Func Offset: 0x148
}

// 
// Start address: 0x147310
void sgIKHandleSolve(sgIKHandle* handle)
{
	// Line 239, Address: 0x147310, Func Offset: 0
	// Line 240, Address: 0x147320, Func Offset: 0x10
	// Line 243, Address: 0x147328, Func Offset: 0x18
	// Line 244, Address: 0x147340, Func Offset: 0x30
	// Line 246, Address: 0x14734c, Func Offset: 0x3c
	// Line 247, Address: 0x147354, Func Offset: 0x44
	// Line 249, Address: 0x147360, Func Offset: 0x50
	// Line 250, Address: 0x147378, Func Offset: 0x68
	// Line 251, Address: 0x147380, Func Offset: 0x70
	// Func End, Address: 0x147390, Func Offset: 0x80
}

