typedef struct sgIKHandle;
typedef struct sgBone;
typedef enum sgIKSolveResult : unsigned char;

typedef sgIKSolveResult(*type_3)();

typedef float type_0[4];
typedef float type_1[4];
typedef float type_2[4][2];

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

enum sgIKSolveResult : unsigned char
{
	SG_IK_RESULT_NONE,
	SG_IK_RESULT_OK,
	SG_IK_RESULT_BEYOND
};


sgIKSolveResult SolveByPosition(float* start_delta, float* middle_delta, float* start_pos, float* mid_pos, float* effector, float* goal, float reach_constrain, float close_constrain);
sgIKSolveResult sgIK2BSolver(sgIKHandle* handle);

// 
// Start address: 0x1469e0
sgIKSolveResult SolveByPosition(float* start_delta, float* middle_delta, float* start_pos, float* mid_pos, float* effector, float* goal, float reach_constrain, float close_constrain)
{
	float v1[4];
	float v2[4];
	float ve[4];
	float vh[4];
	float len1;
	float len2;
	float lenh;
	float lenh2;
	float r;
	float qm[4];
	float qeh[4];
	sgIKSolveResult result;
	float v1n[4];
	float v2n[4];
	float angle_v12;
	float d;
	float cos_theta;
	float theta;
	float delta;
	float v1n[4];
	float v2n[4];
	float h[4];
	float dd;
	float ven[4];
	float vhn[4];
	// Line 35, Address: 0x1469e0, Func Offset: 0
	// Line 50, Address: 0x1469e8, Func Offset: 0x8
	// Line 35, Address: 0x1469ec, Func Offset: 0xc
	// Line 50, Address: 0x146a10, Func Offset: 0x30
	// Line 52, Address: 0x146a24, Func Offset: 0x44
	// Line 54, Address: 0x146a3c, Func Offset: 0x5c
	// Line 56, Address: 0x146a54, Func Offset: 0x74
	// Line 59, Address: 0x146a6c, Func Offset: 0x8c
	// Line 61, Address: 0x146a90, Func Offset: 0xb0
	// Line 63, Address: 0x146ab4, Func Offset: 0xd4
	// Line 65, Address: 0x146ad8, Func Offset: 0xf8
	// Line 67, Address: 0x146ae0, Func Offset: 0x100
	// Line 68, Address: 0x146aec, Func Offset: 0x10c
	// Line 70, Address: 0x146af0, Func Offset: 0x110
	// Line 71, Address: 0x146af8, Func Offset: 0x118
	// Line 73, Address: 0x146b00, Func Offset: 0x120
	// Line 74, Address: 0x146b08, Func Offset: 0x128
	// Line 75, Address: 0x146b14, Func Offset: 0x134
	// Line 100, Address: 0x146b18, Func Offset: 0x138
	// Line 101, Address: 0x146b3c, Func Offset: 0x15c
	// Line 102, Address: 0x146b60, Func Offset: 0x180
	// Line 103, Address: 0x146b7c, Func Offset: 0x19c
	// Line 104, Address: 0x146ba0, Func Offset: 0x1c0
	// Line 109, Address: 0x146ba8, Func Offset: 0x1c8
	// Line 114, Address: 0x146bd0, Func Offset: 0x1f0
	// Line 113, Address: 0x146bd8, Func Offset: 0x1f8
	// Line 114, Address: 0x146bdc, Func Offset: 0x1fc
	// Line 115, Address: 0x146c00, Func Offset: 0x220
	// Line 116, Address: 0x146c2c, Func Offset: 0x24c
	// Line 117, Address: 0x146c50, Func Offset: 0x270
	// Line 120, Address: 0x146c58, Func Offset: 0x278
	// Line 121, Address: 0x146c64, Func Offset: 0x284
	// Line 120, Address: 0x146c68, Func Offset: 0x288
	// Line 117, Address: 0x146c7c, Func Offset: 0x29c
	// Line 121, Address: 0x146c80, Func Offset: 0x2a0
	// Line 120, Address: 0x146c84, Func Offset: 0x2a4
	// Line 121, Address: 0x146c8c, Func Offset: 0x2ac
	// Line 122, Address: 0x146ca0, Func Offset: 0x2c0
	// Line 123, Address: 0x146cc0, Func Offset: 0x2e0
	// Line 124, Address: 0x146cc8, Func Offset: 0x2e8
	// Line 125, Address: 0x146ccc, Func Offset: 0x2ec
	// Line 133, Address: 0x146cd8, Func Offset: 0x2f8
	// Line 135, Address: 0x146ce8, Func Offset: 0x308
	// Line 136, Address: 0x146d04, Func Offset: 0x324
	// Line 137, Address: 0x146d30, Func Offset: 0x350
	// Line 139, Address: 0x146d5c, Func Offset: 0x37c
	// Line 154, Address: 0x146d6c, Func Offset: 0x38c
	// Line 155, Address: 0x146d78, Func Offset: 0x398
	// Line 156, Address: 0x146d84, Func Offset: 0x3a4
	// Line 157, Address: 0x146d88, Func Offset: 0x3a8
	// Func End, Address: 0x146db0, Func Offset: 0x3d0
}

// 
// Start address: 0x146db0
sgIKSolveResult sgIK2BSolver(sgIKHandle* handle)
{
	sgBone* start;
	sgBone* middle;
	sgBone* end;
	float goal[4];
	float delta_start[4];
	float delta_middle[4];
	float start_pos[4];
	float middle_pos[4];
	float end_pos[4];
	sgIKSolveResult result;
	float qs[4];
	float qm[4];
	// Line 160, Address: 0x146db0, Func Offset: 0
	// Line 172, Address: 0x146dc8, Func Offset: 0x18
	// Line 173, Address: 0x146dd4, Func Offset: 0x24
	// Line 174, Address: 0x146de0, Func Offset: 0x30
	// Line 179, Address: 0x146dec, Func Offset: 0x3c
	// Line 180, Address: 0x146df8, Func Offset: 0x48
	// Line 181, Address: 0x146e04, Func Offset: 0x54
	// Line 182, Address: 0x146e10, Func Offset: 0x60
	// Line 183, Address: 0x146e1c, Func Offset: 0x6c
	// Line 185, Address: 0x146e28, Func Offset: 0x78
	// Line 195, Address: 0x146e4c, Func Offset: 0x9c
	// Line 185, Address: 0x146e50, Func Offset: 0xa0
	// Line 195, Address: 0x146e54, Func Offset: 0xa4
	// Line 200, Address: 0x146e60, Func Offset: 0xb0
	// Line 201, Address: 0x146e6c, Func Offset: 0xbc
	// Line 203, Address: 0x146e78, Func Offset: 0xc8
	// Line 204, Address: 0x146e88, Func Offset: 0xd8
	// Line 205, Address: 0x146e94, Func Offset: 0xe4
	// Line 206, Address: 0x146ea0, Func Offset: 0xf0
	// Line 207, Address: 0x146eb0, Func Offset: 0x100
	// Line 208, Address: 0x146ebc, Func Offset: 0x10c
	// Line 216, Address: 0x146ec8, Func Offset: 0x118
	// Line 217, Address: 0x146ed0, Func Offset: 0x120
	// Line 220, Address: 0x146ed8, Func Offset: 0x128
	// Line 221, Address: 0x146edc, Func Offset: 0x12c
	// Func End, Address: 0x146ef8, Func Offset: 0x148
}

