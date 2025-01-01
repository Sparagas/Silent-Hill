typedef struct EnemyMeasureTargetData;


typedef float type_0[4];
typedef float type_1[4];
typedef float type_2[13];

struct EnemyMeasureTargetData
{
	float* pos;
	float* target;
	float dist;
};

float en_vector_unit_y_minus[4];
float en_quat_rot_y_30[4];
float en_quat_rot_y_60[4];
float en_quat_rot_y_90[4];
float en_quat_rot_y_150[4];
float en_quat_rot_y_270[4];
float en_quat_rot_y_300[4];
float en_quat_rot_y_330[4];
float en_quat_rot_x_45[4];
float en_quat_rot_x_90[4];
float en_quat_rot_x_270[4];
float en_quat_rot_x_300[4];
float en_quat_rot_z_90[4];
float sincos_table[13];
float sg_vector_unit_x[4];
float sg_vector_unit_y[4];
float sg_vector_unit_z[4];
float sg_vector_unit_w[4];

void EnemySinCosEasy(float* vec, int n, int div);
float EnemyCosEasy(float angle);
float EnemyAddAngle(float r, float a);
float EnemyCloseToTarget(float base, float target, float limit);
float EnemyCloseToTargetAngle(float base, float target, float limit);
void EnemyAngleToVector(float* vec, float angle);
float EnemyVectorToAngle(float* vec);
float EnemyVectorToAngleWithRot(float* vec, float* rot);
void EnemyQuatToVectorZ(float* vec, float* rot);
void EnemyQuatToVectorY(float* vec, float* rot);
void EnemyQuatToVectorX(float* vec, float* rot);
float EnemyQuatToAngle(float* rot);
void EnemyQuatToAngleZXY(float* rotv, float* rot);
void EnemyQuatToAngleZYX(float* rotv, float* rot);
void EnemyQuatCompensateByRotZ(float* dst, float* src);
void EnemyCalcRotFrontVector(float* rot, float* vec);
void EnemyCalcRotFrontHorizontalVector(float* rot, float* vec);
void EnemyCalcRotUpperVector(float* rot, float* vec);
void EnemyCalcRotLowerVector(float* rot, float* vec);
void EnemyCalcTrackBallMove(float* rot, float* move, float radius, float* normal);
unsigned int EnemyCalcColor(float* cv, unsigned int color);
void EnemyCalcVerticalVector(float* vec, float* normal);
void EnemyCalcVerticalHorizontalVector(float* vec, float* normal);
void EnemyCalcCylinderCurvePoint(float* dst, float* normal, float* src, float* point, float* center);
void EnemyCalcDrumCurvePoint(float* dst, float* normal, float* src, float* point, float* center, float* dir);
float EnemyCalcDirDiff(float* vec, float* rot);
float EnemyMeasureTargetDir(float* target, float* pos);
float EnemyMeasureTargetDist(float* target, float* pos);
float EnemyMeasureTargetDistSq(float* target, float* pos);
float EnemyMeasureTargetDistXZ(float* target, float* pos);
float EnemyMeasureTargetDistXZSq(float* target, float* pos);
float EnemyCalcIntersectionLineAndPerpendicular(float* intersection, float* sp, float* ep, float* pos);
int EnemyEDMeasureTargetNearXZ(void* data);
int EnemyLimitVector(float* vec, float limit);
int EnemyQuatLimitAngle(float* dst, float* src, float limit);
int EnemyQuatLerpLimitAngle(float* dst, float* src, float* target, float limit);
int EnemyQuatLerpLimitAngleV(float* dst, float* src, float* target, float limit);
int EnemyWhichRightOrLeft(float* vec, float* rot);
void EnemyRandomVector(float* vec);
void EnemyRandomVectorWithPlane(float* vec, float* normal);
void EnemyRandomVectorInCircleWithPlane(float* vec, float* normal);
void EnemyTurnToTargetHorizontal(float* rot, float* pos, float* target, float rate);
void EnemyTurnToTargetHorizontalLimitAngle(float* rot, float* pos, float* target, float angle);

// 
// Start address: 0x1d4c80
void EnemySinCosEasy(float* vec, int n, int div)
{
	int sf;
	float s;
	float c;
	// Line 72, Address: 0x1d4c80, Func Offset: 0
	// Line 75, Address: 0x1d4c84, Func Offset: 0x4
	// Line 76, Address: 0x1d4ca0, Func Offset: 0x20
	// Line 78, Address: 0x1d4cb0, Func Offset: 0x30
	// Line 79, Address: 0x1d4cc0, Func Offset: 0x40
	// Line 80, Address: 0x1d4d2c, Func Offset: 0xac
	// Line 82, Address: 0x1d4d30, Func Offset: 0xb0
	// Line 84, Address: 0x1d4d38, Func Offset: 0xb8
	// Line 85, Address: 0x1d4d40, Func Offset: 0xc0
	// Line 88, Address: 0x1d4d48, Func Offset: 0xc8
	// Line 90, Address: 0x1d4d50, Func Offset: 0xd0
	// Line 91, Address: 0x1d4d58, Func Offset: 0xd8
	// Line 94, Address: 0x1d4d60, Func Offset: 0xe0
	// Line 96, Address: 0x1d4d68, Func Offset: 0xe8
	// Line 97, Address: 0x1d4d70, Func Offset: 0xf0
	// Line 100, Address: 0x1d4d78, Func Offset: 0xf8
	// Line 102, Address: 0x1d4d80, Func Offset: 0x100
	// Line 103, Address: 0x1d4d84, Func Offset: 0x104
	// Line 104, Address: 0x1d4d8c, Func Offset: 0x10c
	// Line 106, Address: 0x1d4d90, Func Offset: 0x110
	// Line 111, Address: 0x1d4d98, Func Offset: 0x118
	// Line 112, Address: 0x1d4dc4, Func Offset: 0x144
	// Line 113, Address: 0x1d4dcc, Func Offset: 0x14c
	// Line 114, Address: 0x1d4dd0, Func Offset: 0x150
	// Line 116, Address: 0x1d4ddc, Func Offset: 0x15c
	// Line 117, Address: 0x1d4de8, Func Offset: 0x168
	// Line 118, Address: 0x1d4dec, Func Offset: 0x16c
	// Line 120, Address: 0x1d4df0, Func Offset: 0x170
	// Line 121, Address: 0x1d4dfc, Func Offset: 0x17c
	// Line 122, Address: 0x1d4e08, Func Offset: 0x188
	// Line 123, Address: 0x1d4e1c, Func Offset: 0x19c
	// Line 124, Address: 0x1d4e28, Func Offset: 0x1a8
	// Line 125, Address: 0x1d4e34, Func Offset: 0x1b4
	// Line 124, Address: 0x1d4e38, Func Offset: 0x1b8
	// Line 125, Address: 0x1d4e44, Func Offset: 0x1c4
	// Line 124, Address: 0x1d4e54, Func Offset: 0x1d4
	// Line 125, Address: 0x1d4e58, Func Offset: 0x1d8
	// Line 126, Address: 0x1d4e5c, Func Offset: 0x1dc
	// Line 127, Address: 0x1d4e60, Func Offset: 0x1e0
	// Line 128, Address: 0x1d4e68, Func Offset: 0x1e8
	// Line 129, Address: 0x1d4e6c, Func Offset: 0x1ec
	// Line 131, Address: 0x1d4e70, Func Offset: 0x1f0
	// Line 132, Address: 0x1d4e74, Func Offset: 0x1f4
	// Line 133, Address: 0x1d4e78, Func Offset: 0x1f8
	// Line 134, Address: 0x1d4e7c, Func Offset: 0x1fc
	// Line 135, Address: 0x1d4e80, Func Offset: 0x200
	// Func End, Address: 0x1d4e8c, Func Offset: 0x20c
}

// 
// Start address: 0x1d4e90
float EnemyCosEasy(float angle)
{
	float d;
	int n;
	// Line 145, Address: 0x1d4e90, Func Offset: 0
	// Line 147, Address: 0x1d4e9c, Func Offset: 0xc
	// Line 145, Address: 0x1d4ea4, Func Offset: 0x14
	// Line 147, Address: 0x1d4ea8, Func Offset: 0x18
	// Line 148, Address: 0x1d4ec0, Func Offset: 0x30
	// Line 149, Address: 0x1d4ed0, Func Offset: 0x40
	// Line 150, Address: 0x1d4edc, Func Offset: 0x4c
	// Line 151, Address: 0x1d4ef0, Func Offset: 0x60
	// Line 152, Address: 0x1d4f04, Func Offset: 0x74
	// Line 153, Address: 0x1d4f08, Func Offset: 0x78
	// Line 154, Address: 0x1d4f18, Func Offset: 0x88
	// Line 155, Address: 0x1d4f24, Func Offset: 0x94
	// Line 156, Address: 0x1d4f38, Func Offset: 0xa8
	// Line 157, Address: 0x1d4f4c, Func Offset: 0xbc
	// Line 158, Address: 0x1d4f5c, Func Offset: 0xcc
	// Line 159, Address: 0x1d4f74, Func Offset: 0xe4
	// Line 160, Address: 0x1d4f8c, Func Offset: 0xfc
	// Line 161, Address: 0x1d4f98, Func Offset: 0x108
	// Line 162, Address: 0x1d4fac, Func Offset: 0x11c
	// Line 164, Address: 0x1d4fb0, Func Offset: 0x120
	// Func End, Address: 0x1d4fb8, Func Offset: 0x128
}

// 
// Start address: 0x1d4fc0
float EnemyAddAngle(float r, float a)
{
	// Line 202, Address: 0x1d4fc0, Func Offset: 0
	// Func End, Address: 0x1d4fc8, Func Offset: 0x8
}

// 
// Start address: 0x1d4fd0
float EnemyCloseToTarget(float base, float target, float limit)
{
	float d;
	// Line 214, Address: 0x1d4fd0, Func Offset: 0
	// Line 215, Address: 0x1d4fd4, Func Offset: 0x4
	// Line 216, Address: 0x1d4ff0, Func Offset: 0x20
	// Line 217, Address: 0x1d5008, Func Offset: 0x38
	// Line 219, Address: 0x1d5010, Func Offset: 0x40
	// Func End, Address: 0x1d5018, Func Offset: 0x48
}

// 
// Start address: 0x1d5020
float EnemyCloseToTargetAngle(float base, float target, float limit)
{
	float d;
	// Line 228, Address: 0x1d5020, Func Offset: 0
	// Line 229, Address: 0x1d5030, Func Offset: 0x10
	// Line 228, Address: 0x1d5034, Func Offset: 0x14
	// Line 229, Address: 0x1d5040, Func Offset: 0x20
	// Line 230, Address: 0x1d5048, Func Offset: 0x28
	// Line 231, Address: 0x1d5060, Func Offset: 0x40
	// Line 232, Address: 0x1d5070, Func Offset: 0x50
	// Line 234, Address: 0x1d5078, Func Offset: 0x58
	// Func End, Address: 0x1d5090, Func Offset: 0x70
}

// 
// Start address: 0x1d5090
void EnemyAngleToVector(float* vec, float angle)
{
	// Line 242, Address: 0x1d5090, Func Offset: 0
	// Func End, Address: 0x1d5098, Func Offset: 0x8
}

// 
// Start address: 0x1d50a0
float EnemyVectorToAngle(float* vec)
{
	// Line 251, Address: 0x1d50a0, Func Offset: 0
	// Func End, Address: 0x1d50a8, Func Offset: 0x8
}

// 
// Start address: 0x1d50b0
float EnemyVectorToAngleWithRot(float* vec, float* rot)
{
	float tvec[4];
	float trot[4];
	// Line 260, Address: 0x1d50b0, Func Offset: 0
	// Line 263, Address: 0x1d50c0, Func Offset: 0x10
	// Line 264, Address: 0x1d50c8, Func Offset: 0x18
	// Line 265, Address: 0x1d50d8, Func Offset: 0x28
	// Line 266, Address: 0x1d50e0, Func Offset: 0x30
	// Func End, Address: 0x1d50f0, Func Offset: 0x40
}

// 
// Start address: 0x1d50f0
void EnemyQuatToVectorZ(float* vec, float* rot)
{
	// Line 281, Address: 0x1d50f0, Func Offset: 0
	// Line 282, Address: 0x1d50f4, Func Offset: 0x4
	// Line 283, Address: 0x1d50f8, Func Offset: 0x8
	// Line 284, Address: 0x1d50fc, Func Offset: 0xc
	// Line 285, Address: 0x1d5100, Func Offset: 0x10
	// Line 286, Address: 0x1d5104, Func Offset: 0x14
	// Line 287, Address: 0x1d5108, Func Offset: 0x18
	// Line 288, Address: 0x1d510c, Func Offset: 0x1c
	// Line 289, Address: 0x1d5110, Func Offset: 0x20
	// Line 290, Address: 0x1d5114, Func Offset: 0x24
	// Line 294, Address: 0x1d5118, Func Offset: 0x28
	// Func End, Address: 0x1d5120, Func Offset: 0x30
}

// 
// Start address: 0x1d5120
void EnemyQuatToVectorY(float* vec, float* rot)
{
	// Line 309, Address: 0x1d5120, Func Offset: 0
	// Line 310, Address: 0x1d5124, Func Offset: 0x4
	// Line 311, Address: 0x1d5128, Func Offset: 0x8
	// Line 312, Address: 0x1d512c, Func Offset: 0xc
	// Line 313, Address: 0x1d5130, Func Offset: 0x10
	// Line 314, Address: 0x1d5134, Func Offset: 0x14
	// Line 315, Address: 0x1d5138, Func Offset: 0x18
	// Line 316, Address: 0x1d513c, Func Offset: 0x1c
	// Line 317, Address: 0x1d5140, Func Offset: 0x20
	// Line 318, Address: 0x1d5144, Func Offset: 0x24
	// Line 319, Address: 0x1d5148, Func Offset: 0x28
	// Line 323, Address: 0x1d514c, Func Offset: 0x2c
	// Func End, Address: 0x1d5154, Func Offset: 0x34
}

// 
// Start address: 0x1d5160
void EnemyQuatToVectorX(float* vec, float* rot)
{
	// Line 338, Address: 0x1d5160, Func Offset: 0
	// Line 339, Address: 0x1d5164, Func Offset: 0x4
	// Line 340, Address: 0x1d5168, Func Offset: 0x8
	// Line 341, Address: 0x1d516c, Func Offset: 0xc
	// Line 342, Address: 0x1d5170, Func Offset: 0x10
	// Line 343, Address: 0x1d5174, Func Offset: 0x14
	// Line 344, Address: 0x1d5178, Func Offset: 0x18
	// Line 345, Address: 0x1d517c, Func Offset: 0x1c
	// Line 346, Address: 0x1d5180, Func Offset: 0x20
	// Line 347, Address: 0x1d5184, Func Offset: 0x24
	// Line 348, Address: 0x1d5188, Func Offset: 0x28
	// Line 352, Address: 0x1d518c, Func Offset: 0x2c
	// Func End, Address: 0x1d5194, Func Offset: 0x34
}

// 
// Start address: 0x1d51a0
float EnemyQuatToAngle(float* rot)
{
	float vec[4];
	// Line 359, Address: 0x1d51a0, Func Offset: 0
	// Line 361, Address: 0x1d51ac, Func Offset: 0xc
	// Line 362, Address: 0x1d51b4, Func Offset: 0x14
	// Line 363, Address: 0x1d51bc, Func Offset: 0x1c
	// Func End, Address: 0x1d51c8, Func Offset: 0x28
}

// 
// Start address: 0x1d51d0
void EnemyQuatToAngleZXY(float* rotv, float* rot)
{
	float vec[4];
	float trot[4];
	// Line 370, Address: 0x1d51d0, Func Offset: 0
	// Line 373, Address: 0x1d51e4, Func Offset: 0x14
	// Line 374, Address: 0x1d51ec, Func Offset: 0x1c
	// Line 375, Address: 0x1d51f4, Func Offset: 0x24
	// Line 376, Address: 0x1d5200, Func Offset: 0x30
	// Line 377, Address: 0x1d520c, Func Offset: 0x3c
	// Line 378, Address: 0x1d5224, Func Offset: 0x54
	// Line 379, Address: 0x1d5238, Func Offset: 0x68
	// Line 380, Address: 0x1d5244, Func Offset: 0x74
	// Line 379, Address: 0x1d524c, Func Offset: 0x7c
	// Line 380, Address: 0x1d5250, Func Offset: 0x80
	// Line 381, Address: 0x1d525c, Func Offset: 0x8c
	// Line 382, Address: 0x1d526c, Func Offset: 0x9c
	// Line 383, Address: 0x1d5280, Func Offset: 0xb0
	// Func End, Address: 0x1d5294, Func Offset: 0xc4
}

// 
// Start address: 0x1d52a0
void EnemyQuatToAngleZYX(float* rotv, float* rot)
{
	float vec[4];
	float trot[4];
	// Line 390, Address: 0x1d52a0, Func Offset: 0
	// Line 393, Address: 0x1d52b4, Func Offset: 0x14
	// Line 394, Address: 0x1d52bc, Func Offset: 0x1c
	// Line 395, Address: 0x1d52c4, Func Offset: 0x24
	// Line 396, Address: 0x1d52e4, Func Offset: 0x44
	// Line 397, Address: 0x1d52f0, Func Offset: 0x50
	// Line 398, Address: 0x1d5308, Func Offset: 0x68
	// Line 399, Address: 0x1d531c, Func Offset: 0x7c
	// Line 400, Address: 0x1d5328, Func Offset: 0x88
	// Line 399, Address: 0x1d5330, Func Offset: 0x90
	// Line 400, Address: 0x1d5334, Func Offset: 0x94
	// Line 401, Address: 0x1d5340, Func Offset: 0xa0
	// Line 402, Address: 0x1d5350, Func Offset: 0xb0
	// Line 403, Address: 0x1d5364, Func Offset: 0xc4
	// Func End, Address: 0x1d5378, Func Offset: 0xd8
}

// 
// Start address: 0x1d5380
void EnemyQuatCompensateByRotZ(float* dst, float* src)
{
	float q0;
	float q1;
	float q2;
	float q3;
	// Line 412, Address: 0x1d5380, Func Offset: 0
	// Line 413, Address: 0x1d5384, Func Offset: 0x4
	// Line 414, Address: 0x1d5388, Func Offset: 0x8
	// Line 415, Address: 0x1d53a8, Func Offset: 0x28
	// Line 416, Address: 0x1d53ac, Func Offset: 0x2c
	// Line 418, Address: 0x1d53b0, Func Offset: 0x30
	// Line 417, Address: 0x1d53b4, Func Offset: 0x34
	// Line 418, Address: 0x1d53b8, Func Offset: 0x38
	// Line 420, Address: 0x1d53bc, Func Offset: 0x3c
	// Line 419, Address: 0x1d53c0, Func Offset: 0x40
	// Line 421, Address: 0x1d53c4, Func Offset: 0x44
	// Line 422, Address: 0x1d53d0, Func Offset: 0x50
	// Line 424, Address: 0x1d53d8, Func Offset: 0x58
	// Func End, Address: 0x1d53e0, Func Offset: 0x60
}

// 
// Start address: 0x1d53e0
void EnemyCalcRotFrontVector(float* rot, float* vec)
{
	float vec2[4];
	// Line 433, Address: 0x1d53e0, Func Offset: 0
	// Line 438, Address: 0x1d53e8, Func Offset: 0x8
	// Line 439, Address: 0x1d5410, Func Offset: 0x30
	// Line 440, Address: 0x1d542c, Func Offset: 0x4c
	// Line 441, Address: 0x1d5438, Func Offset: 0x58
	// Line 443, Address: 0x1d5440, Func Offset: 0x60
	// Line 444, Address: 0x1d544c, Func Offset: 0x6c
	// Func End, Address: 0x1d545c, Func Offset: 0x7c
}

// 
// Start address: 0x1d5460
void EnemyCalcRotFrontHorizontalVector(float* rot, float* vec)
{
	// Line 453, Address: 0x1d5460, Func Offset: 0
	// Line 454, Address: 0x1d5470, Func Offset: 0x10
	// Line 455, Address: 0x1d548c, Func Offset: 0x2c
	// Func End, Address: 0x1d549c, Func Offset: 0x3c
}

// 
// Start address: 0x1d54a0
void EnemyCalcRotUpperVector(float* rot, float* vec)
{
	float vec2[4];
	// Line 464, Address: 0x1d54a0, Func Offset: 0
	// Line 469, Address: 0x1d54a8, Func Offset: 0x8
	// Line 470, Address: 0x1d54d0, Func Offset: 0x30
	// Line 471, Address: 0x1d54e0, Func Offset: 0x40
	// Func End, Address: 0x1d54ec, Func Offset: 0x4c
}

// 
// Start address: 0x1d54f0
void EnemyCalcRotLowerVector(float* rot, float* vec)
{
	float vec2[4];
	// Line 480, Address: 0x1d54f0, Func Offset: 0
	// Line 485, Address: 0x1d54f8, Func Offset: 0x8
	// Line 486, Address: 0x1d5520, Func Offset: 0x30
	// Line 487, Address: 0x1d5530, Func Offset: 0x40
	// Func End, Address: 0x1d553c, Func Offset: 0x4c
}

// 
// Start address: 0x1d5540
void EnemyCalcTrackBallMove(float* rot, float* move, float radius, float* normal)
{
	float cross[4];
	float nmove[4];
	float d;
	// Line 497, Address: 0x1d5540, Func Offset: 0
	// Line 500, Address: 0x1d5548, Func Offset: 0x8
	// Line 501, Address: 0x1d5564, Func Offset: 0x24
	// Line 502, Address: 0x1d5584, Func Offset: 0x44
	// Line 503, Address: 0x1d55a0, Func Offset: 0x60
	// Line 504, Address: 0x1d55c4, Func Offset: 0x84
	// Line 505, Address: 0x1d55dc, Func Offset: 0x9c
	// Line 506, Address: 0x1d5608, Func Offset: 0xc8
	// Line 507, Address: 0x1d5628, Func Offset: 0xe8
	// Line 508, Address: 0x1d5634, Func Offset: 0xf4
	// Line 509, Address: 0x1d5640, Func Offset: 0x100
	// Line 510, Address: 0x1d564c, Func Offset: 0x10c
	// Line 511, Address: 0x1d5650, Func Offset: 0x110
	// Func End, Address: 0x1d565c, Func Offset: 0x11c
}

// 
// Start address: 0x1d5660
unsigned int EnemyCalcColor(float* cv, unsigned int color)
{
	int i;
	unsigned int ncolor;
	float t;
	// Line 524, Address: 0x1d5660, Func Offset: 0
	// Line 523, Address: 0x1d5664, Func Offset: 0x4
	// Line 524, Address: 0x1d5668, Func Offset: 0x8
	// Line 525, Address: 0x1d5678, Func Offset: 0x18
	// Line 526, Address: 0x1d569c, Func Offset: 0x3c
	// Line 527, Address: 0x1d56ac, Func Offset: 0x4c
	// Line 526, Address: 0x1d56b0, Func Offset: 0x50
	// Line 527, Address: 0x1d56c0, Func Offset: 0x60
	// Line 529, Address: 0x1d56cc, Func Offset: 0x6c
	// Func End, Address: 0x1d56d4, Func Offset: 0x74
}

// 
// Start address: 0x1d56e0
void EnemyCalcVerticalVector(float* vec, float* normal)
{
	float tvec[4];
	// Line 548, Address: 0x1d56e0, Func Offset: 0
	// Line 550, Address: 0x1d56e4, Func Offset: 0x4
	// Line 551, Address: 0x1d5708, Func Offset: 0x28
	// Line 552, Address: 0x1d5738, Func Offset: 0x58
	// Line 553, Address: 0x1d574c, Func Offset: 0x6c
	// Line 554, Address: 0x1d5750, Func Offset: 0x70
	// Line 555, Address: 0x1d5770, Func Offset: 0x90
	// Line 556, Address: 0x1d57a0, Func Offset: 0xc0
	// Line 557, Address: 0x1d57b0, Func Offset: 0xd0
	// Line 558, Address: 0x1d57b8, Func Offset: 0xd8
	// Line 560, Address: 0x1d57e0, Func Offset: 0x100
	// Func End, Address: 0x1d57e8, Func Offset: 0x108
}

// 
// Start address: 0x1d57f0
void EnemyCalcVerticalHorizontalVector(float* vec, float* normal)
{
	// Line 568, Address: 0x1d57f0, Func Offset: 0
	// Line 569, Address: 0x1d5818, Func Offset: 0x28
	// Line 570, Address: 0x1d5824, Func Offset: 0x34
	// Line 571, Address: 0x1d582c, Func Offset: 0x3c
	// Line 572, Address: 0x1d5830, Func Offset: 0x40
	// Line 574, Address: 0x1d5834, Func Offset: 0x44
	// Line 575, Address: 0x1d5838, Func Offset: 0x48
	// Line 572, Address: 0x1d583c, Func Offset: 0x4c
	// Line 573, Address: 0x1d5840, Func Offset: 0x50
	// Line 574, Address: 0x1d584c, Func Offset: 0x5c
	// Line 575, Address: 0x1d5850, Func Offset: 0x60
	// Line 576, Address: 0x1d5854, Func Offset: 0x64
	// Line 577, Address: 0x1d5878, Func Offset: 0x88
	// Func End, Address: 0x1d5880, Func Offset: 0x90
}

// 
// Start address: 0x1d5880
void EnemyCalcCylinderCurvePoint(float* dst, float* normal, float* src, float* point, float* center)
{
	float r;
	float d;
	float vec[4];
	float vec2[4];
	// Line 589, Address: 0x1d5880, Func Offset: 0
	// Line 592, Address: 0x1d5888, Func Offset: 0x8
	// Line 589, Address: 0x1d588c, Func Offset: 0xc
	// Line 592, Address: 0x1d58b4, Func Offset: 0x34
	// Line 593, Address: 0x1d58c8, Func Offset: 0x48
	// Line 594, Address: 0x1d58d8, Func Offset: 0x58
	// Line 593, Address: 0x1d58dc, Func Offset: 0x5c
	// Line 594, Address: 0x1d58e0, Func Offset: 0x60
	// Line 595, Address: 0x1d58f4, Func Offset: 0x74
	// Line 597, Address: 0x1d5908, Func Offset: 0x88
	// Line 598, Address: 0x1d5940, Func Offset: 0xc0
	// Line 599, Address: 0x1d594c, Func Offset: 0xcc
	// Line 600, Address: 0x1d5958, Func Offset: 0xd8
	// Line 602, Address: 0x1d5978, Func Offset: 0xf8
	// Line 601, Address: 0x1d597c, Func Offset: 0xfc
	// Line 602, Address: 0x1d5980, Func Offset: 0x100
	// Line 603, Address: 0x1d5994, Func Offset: 0x114
	// Line 604, Address: 0x1d5998, Func Offset: 0x118
	// Func End, Address: 0x1d59bc, Func Offset: 0x13c
}

// 
// Start address: 0x1d59c0
void EnemyCalcDrumCurvePoint(float* dst, float* normal, float* src, float* point, float* center, float* dir)
{
	float rot[4];
	float tsrc[4];
	float tpoint[4];
	float tcenter[4];
	// Line 617, Address: 0x1d59c0, Func Offset: 0
	// Line 620, Address: 0x1d59e8, Func Offset: 0x28
	// Line 621, Address: 0x1d5a04, Func Offset: 0x44
	// Line 622, Address: 0x1d5a14, Func Offset: 0x54
	// Line 623, Address: 0x1d5a24, Func Offset: 0x64
	// Line 624, Address: 0x1d5a34, Func Offset: 0x74
	// Line 625, Address: 0x1d5a4c, Func Offset: 0x8c
	// Line 626, Address: 0x1d5a58, Func Offset: 0x98
	// Line 627, Address: 0x1d5a68, Func Offset: 0xa8
	// Line 628, Address: 0x1d5a78, Func Offset: 0xb8
	// Func End, Address: 0x1d5a98, Func Offset: 0xd8
}

// 
// Start address: 0x1d5aa0
float EnemyCalcDirDiff(float* vec, float* rot)
{
	float vec2[4];
	float vec3[4];
	// Line 636, Address: 0x1d5aa0, Func Offset: 0
	// Line 638, Address: 0x1d5aa8, Func Offset: 0x8
	// Line 639, Address: 0x1d5ad0, Func Offset: 0x30
	// Line 640, Address: 0x1d5ad8, Func Offset: 0x38
	// Line 641, Address: 0x1d5afc, Func Offset: 0x5c
	// Func End, Address: 0x1d5b08, Func Offset: 0x68
}

// 
// Start address: 0x1d5b10
float EnemyMeasureTargetDir(float* target, float* pos)
{
	float vec[4];
	// Line 649, Address: 0x1d5b10, Func Offset: 0
	// Line 651, Address: 0x1d5b18, Func Offset: 0x8
	// Line 652, Address: 0x1d5b30, Func Offset: 0x20
	// Line 653, Address: 0x1d5b38, Func Offset: 0x28
	// Func End, Address: 0x1d5b44, Func Offset: 0x34
}

// 
// Start address: 0x1d5b50
float EnemyMeasureTargetDist(float* target, float* pos)
{
	// Line 689, Address: 0x1d5b50, Func Offset: 0
	// Line 690, Address: 0x1d5b84, Func Offset: 0x34
	// Func End, Address: 0x1d5b8c, Func Offset: 0x3c
}

// 
// Start address: 0x1d5b90
float EnemyMeasureTargetDistSq(float* target, float* pos)
{
	// Line 699, Address: 0x1d5b90, Func Offset: 0
	// Line 700, Address: 0x1d5bbc, Func Offset: 0x2c
	// Func End, Address: 0x1d5bc4, Func Offset: 0x34
}

// 
// Start address: 0x1d5bd0
float EnemyMeasureTargetDistXZ(float* target, float* pos)
{
	// Line 709, Address: 0x1d5bd0, Func Offset: 0
	// Line 710, Address: 0x1d5bf4, Func Offset: 0x24
	// Func End, Address: 0x1d5bfc, Func Offset: 0x2c
}

// 
// Start address: 0x1d5c00
float EnemyMeasureTargetDistXZSq(float* target, float* pos)
{
	// Line 720, Address: 0x1d5c00, Func Offset: 0
	// Line 721, Address: 0x1d5c1c, Func Offset: 0x1c
	// Func End, Address: 0x1d5c24, Func Offset: 0x24
}

// 
// Start address: 0x1d5c30
float EnemyCalcIntersectionLineAndPerpendicular(float* intersection, float* sp, float* ep, float* pos)
{
	float d;
	// Line 764, Address: 0x1d5c30, Func Offset: 0
	// Line 765, Address: 0x1d5c34, Func Offset: 0x4
	// Line 766, Address: 0x1d5c38, Func Offset: 0x8
	// Line 767, Address: 0x1d5c3c, Func Offset: 0xc
	// Line 768, Address: 0x1d5c40, Func Offset: 0x10
	// Line 769, Address: 0x1d5c44, Func Offset: 0x14
	// Line 770, Address: 0x1d5c48, Func Offset: 0x18
	// Line 771, Address: 0x1d5c4c, Func Offset: 0x1c
	// Line 772, Address: 0x1d5c50, Func Offset: 0x20
	// Line 773, Address: 0x1d5c54, Func Offset: 0x24
	// Line 774, Address: 0x1d5c58, Func Offset: 0x28
	// Line 775, Address: 0x1d5c5c, Func Offset: 0x2c
	// Line 776, Address: 0x1d5c60, Func Offset: 0x30
	// Line 777, Address: 0x1d5c64, Func Offset: 0x34
	// Line 778, Address: 0x1d5c68, Func Offset: 0x38
	// Line 779, Address: 0x1d5c6c, Func Offset: 0x3c
	// Line 780, Address: 0x1d5c70, Func Offset: 0x40
	// Line 781, Address: 0x1d5c74, Func Offset: 0x44
	// Line 782, Address: 0x1d5c78, Func Offset: 0x48
	// Line 783, Address: 0x1d5c7c, Func Offset: 0x4c
	// Line 784, Address: 0x1d5c80, Func Offset: 0x50
	// Line 785, Address: 0x1d5c84, Func Offset: 0x54
	// Line 786, Address: 0x1d5c88, Func Offset: 0x58
	// Line 787, Address: 0x1d5c8c, Func Offset: 0x5c
	// Line 788, Address: 0x1d5c90, Func Offset: 0x60
	// Line 790, Address: 0x1d5c98, Func Offset: 0x68
	// Line 791, Address: 0x1d5c9c, Func Offset: 0x6c
	// Line 792, Address: 0x1d5ca0, Func Offset: 0x70
	// Line 793, Address: 0x1d5ca4, Func Offset: 0x74
	// Line 794, Address: 0x1d5ca8, Func Offset: 0x78
	// Line 795, Address: 0x1d5cac, Func Offset: 0x7c
	// Line 796, Address: 0x1d5cb0, Func Offset: 0x80
	// Line 797, Address: 0x1d5cb4, Func Offset: 0x84
	// Line 798, Address: 0x1d5cb8, Func Offset: 0x88
	// Line 801, Address: 0x1d5cc0, Func Offset: 0x90
	// Line 802, Address: 0x1d5cc4, Func Offset: 0x94
	// Line 803, Address: 0x1d5cc8, Func Offset: 0x98
	// Line 804, Address: 0x1d5ccc, Func Offset: 0x9c
	// Line 807, Address: 0x1d5cd0, Func Offset: 0xa0
	// Line 808, Address: 0x1d5cd4, Func Offset: 0xa4
	// Line 809, Address: 0x1d5cd8, Func Offset: 0xa8
	// Line 810, Address: 0x1d5cdc, Func Offset: 0xac
	// Line 812, Address: 0x1d5ce4, Func Offset: 0xb4
	// Line 813, Address: 0x1d5ce8, Func Offset: 0xb8
	// Line 814, Address: 0x1d5cec, Func Offset: 0xbc
	// Line 815, Address: 0x1d5cf0, Func Offset: 0xc0
	// Line 816, Address: 0x1d5cf4, Func Offset: 0xc4
	// Line 817, Address: 0x1d5cf8, Func Offset: 0xc8
	// Line 823, Address: 0x1d5cfc, Func Offset: 0xcc
	// Func End, Address: 0x1d5d04, Func Offset: 0xd4
}

// 
// Start address: 0x1d5d10
int EnemyEDMeasureTargetNearXZ(void* data)
{
	EnemyMeasureTargetData* pm;
	float d;
	// Line 857, Address: 0x1d5d10, Func Offset: 0
	// Line 858, Address: 0x1d5d38, Func Offset: 0x28
	// Line 859, Address: 0x1d5d50, Func Offset: 0x40
	// Func End, Address: 0x1d5d58, Func Offset: 0x48
}

// 
// Start address: 0x1d5d60
int EnemyLimitVector(float* vec, float limit)
{
	float d;
	int f;
	// Line 902, Address: 0x1d5d60, Func Offset: 0
	// Line 904, Address: 0x1d5d7c, Func Offset: 0x1c
	// Line 905, Address: 0x1d5d8c, Func Offset: 0x2c
	// Line 906, Address: 0x1d5dac, Func Offset: 0x4c
	// Line 909, Address: 0x1d5db0, Func Offset: 0x50
	// Func End, Address: 0x1d5db8, Func Offset: 0x58
}

// 
// Start address: 0x1d5dc0
int EnemyQuatLimitAngle(float* dst, float* src, float limit)
{
	float vec[4];
	float d;
	float dv;
	float cl;
	int f;
	int r;
	// Line 942, Address: 0x1d5dc0, Func Offset: 0
	// Line 947, Address: 0x1d5dc8, Func Offset: 0x8
	// Line 942, Address: 0x1d5dcc, Func Offset: 0xc
	// Line 946, Address: 0x1d5de4, Func Offset: 0x24
	// Line 947, Address: 0x1d5de8, Func Offset: 0x28
	// Line 948, Address: 0x1d5df4, Func Offset: 0x34
	// Line 950, Address: 0x1d5df8, Func Offset: 0x38
	// Line 951, Address: 0x1d5e00, Func Offset: 0x40
	// Line 952, Address: 0x1d5e04, Func Offset: 0x44
	// Line 953, Address: 0x1d5e08, Func Offset: 0x48
	// Line 954, Address: 0x1d5e1c, Func Offset: 0x5c
	// Line 955, Address: 0x1d5e28, Func Offset: 0x68
	// Line 956, Address: 0x1d5e40, Func Offset: 0x80
	// Line 957, Address: 0x1d5e58, Func Offset: 0x98
	// Line 958, Address: 0x1d5e68, Func Offset: 0xa8
	// Line 959, Address: 0x1d5e8c, Func Offset: 0xcc
	// Line 960, Address: 0x1d5e98, Func Offset: 0xd8
	// Line 962, Address: 0x1d5e9c, Func Offset: 0xdc
	// Line 963, Address: 0x1d5ea8, Func Offset: 0xe8
	// Line 964, Address: 0x1d5eb4, Func Offset: 0xf4
	// Line 966, Address: 0x1d5eb8, Func Offset: 0xf8
	// Line 967, Address: 0x1d5ec4, Func Offset: 0x104
	// Line 968, Address: 0x1d5ec8, Func Offset: 0x108
	// Func End, Address: 0x1d5ee8, Func Offset: 0x128
}

// 
// Start address: 0x1d5ef0
int EnemyQuatLerpLimitAngle(float* dst, float* src, float* target, float limit)
{
	float quat[4];
	float vec[4];
	float d;
	float dv;
	float cl;
	int f;
	int r;
	// Line 979, Address: 0x1d5ef0, Func Offset: 0
	// Line 984, Address: 0x1d5f1c, Func Offset: 0x2c
	// Line 985, Address: 0x1d5f30, Func Offset: 0x40
	// Line 988, Address: 0x1d5f44, Func Offset: 0x54
	// Line 989, Address: 0x1d5f50, Func Offset: 0x60
	// Line 990, Address: 0x1d5f54, Func Offset: 0x64
	// Line 991, Address: 0x1d5f58, Func Offset: 0x68
	// Line 992, Address: 0x1d5f6c, Func Offset: 0x7c
	// Line 993, Address: 0x1d5f78, Func Offset: 0x88
	// Line 994, Address: 0x1d5f80, Func Offset: 0x90
	// Line 995, Address: 0x1d5f90, Func Offset: 0xa0
	// Line 996, Address: 0x1d5fa8, Func Offset: 0xb8
	// Line 997, Address: 0x1d5fc0, Func Offset: 0xd0
	// Line 998, Address: 0x1d5fd0, Func Offset: 0xe0
	// Line 999, Address: 0x1d5ff8, Func Offset: 0x108
	// Line 1001, Address: 0x1d6004, Func Offset: 0x114
	// Line 1003, Address: 0x1d6018, Func Offset: 0x128
	// Line 1004, Address: 0x1d6020, Func Offset: 0x130
	// Line 1005, Address: 0x1d602c, Func Offset: 0x13c
	// Line 1007, Address: 0x1d6030, Func Offset: 0x140
	// Line 1008, Address: 0x1d603c, Func Offset: 0x14c
	// Line 1009, Address: 0x1d6040, Func Offset: 0x150
	// Func End, Address: 0x1d6064, Func Offset: 0x174
}

// 
// Start address: 0x1d6070
int EnemyQuatLerpLimitAngleV(float* dst, float* src, float* target, float limit)
{
	float trot[4];
	float trot2[4];
	float vec[4];
	float d;
	int r;
	// Line 1020, Address: 0x1d6070, Func Offset: 0
	// Line 1025, Address: 0x1d6098, Func Offset: 0x28
	// Line 1026, Address: 0x1d60a4, Func Offset: 0x34
	// Line 1027, Address: 0x1d60b4, Func Offset: 0x44
	// Line 1028, Address: 0x1d60c0, Func Offset: 0x50
	// Line 1029, Address: 0x1d60d4, Func Offset: 0x64
	// Line 1031, Address: 0x1d60e0, Func Offset: 0x70
	// Line 1032, Address: 0x1d60e4, Func Offset: 0x74
	// Line 1034, Address: 0x1d60fc, Func Offset: 0x8c
	// Line 1033, Address: 0x1d6100, Func Offset: 0x90
	// Line 1035, Address: 0x1d6104, Func Offset: 0x94
	// Line 1036, Address: 0x1d6108, Func Offset: 0x98
	// Line 1037, Address: 0x1d6110, Func Offset: 0xa0
	// Line 1038, Address: 0x1d6120, Func Offset: 0xb0
	// Line 1039, Address: 0x1d6130, Func Offset: 0xc0
	// Line 1040, Address: 0x1d6140, Func Offset: 0xd0
	// Line 1041, Address: 0x1d6148, Func Offset: 0xd8
	// Line 1042, Address: 0x1d6154, Func Offset: 0xe4
	// Line 1043, Address: 0x1d6158, Func Offset: 0xe8
	// Line 1044, Address: 0x1d615c, Func Offset: 0xec
	// Func End, Address: 0x1d617c, Func Offset: 0x10c
}

// 
// Start address: 0x1d6180
int EnemyWhichRightOrLeft(float* vec, float* rot)
{
	float vec2[4];
	// Line 1052, Address: 0x1d6180, Func Offset: 0
	// Line 1054, Address: 0x1d6190, Func Offset: 0x10
	// Line 1055, Address: 0x1d6198, Func Offset: 0x18
	// Line 1056, Address: 0x1d61b4, Func Offset: 0x34
	// Line 1057, Address: 0x1d6200, Func Offset: 0x80
	// Func End, Address: 0x1d6210, Func Offset: 0x90
}

// 
// Start address: 0x1d6210
void EnemyRandomVector(float* vec)
{
	// Line 1065, Address: 0x1d6210, Func Offset: 0
	// Line 1066, Address: 0x1d621c, Func Offset: 0xc
	// Line 1067, Address: 0x1d6224, Func Offset: 0x14
	// Line 1068, Address: 0x1d622c, Func Offset: 0x1c
	// Line 1069, Address: 0x1d6238, Func Offset: 0x28
	// Line 1070, Address: 0x1d623c, Func Offset: 0x2c
	// Func End, Address: 0x1d624c, Func Offset: 0x3c
}

// 
// Start address: 0x1d6250
void EnemyRandomVectorWithPlane(float* vec, float* normal)
{
	float vec2[4];
	// Line 1080, Address: 0x1d6250, Func Offset: 0
	// Line 1082, Address: 0x1d6264, Func Offset: 0x14
	// Line 1083, Address: 0x1d626c, Func Offset: 0x1c
	// Line 1084, Address: 0x1d6274, Func Offset: 0x24
	// Line 1085, Address: 0x1d6280, Func Offset: 0x30
	// Line 1086, Address: 0x1d6284, Func Offset: 0x34
	// Line 1087, Address: 0x1d62c0, Func Offset: 0x70
	// Line 1088, Address: 0x1d62d8, Func Offset: 0x88
	// Func End, Address: 0x1d62ec, Func Offset: 0x9c
}

// 
// Start address: 0x1d62f0
void EnemyRandomVectorInCircleWithPlane(float* vec, float* normal)
{
	float rot[4];
	// Line 1098, Address: 0x1d62f0, Func Offset: 0
	// Line 1100, Address: 0x1d6304, Func Offset: 0x14
	// Line 1101, Address: 0x1d630c, Func Offset: 0x1c
	// Line 1102, Address: 0x1d6330, Func Offset: 0x40
	// Line 1103, Address: 0x1d6340, Func Offset: 0x50
	// Line 1104, Address: 0x1d6364, Func Offset: 0x74
	// Func End, Address: 0x1d6378, Func Offset: 0x88
}

// 
// Start address: 0x1d6380
void EnemyTurnToTargetHorizontal(float* rot, float* pos, float* target, float rate)
{
	float vec[4];
	float quat[4];
	// Line 1130, Address: 0x1d6380, Func Offset: 0
	// Line 1133, Address: 0x1d6388, Func Offset: 0x8
	// Line 1130, Address: 0x1d638c, Func Offset: 0xc
	// Line 1133, Address: 0x1d639c, Func Offset: 0x1c
	// Line 1134, Address: 0x1d63b0, Func Offset: 0x30
	// Line 1135, Address: 0x1d63b4, Func Offset: 0x34
	// Line 1136, Address: 0x1d63c4, Func Offset: 0x44
	// Line 1137, Address: 0x1d63d8, Func Offset: 0x58
	// Func End, Address: 0x1d63ec, Func Offset: 0x6c
}

// 
// Start address: 0x1d63f0
void EnemyTurnToTargetHorizontalLimitAngle(float* rot, float* pos, float* target, float angle)
{
	float vec[4];
	float quat[4];
	float r;
	// Line 1147, Address: 0x1d63f0, Func Offset: 0
	// Line 1151, Address: 0x1d63f8, Func Offset: 0x8
	// Line 1147, Address: 0x1d63fc, Func Offset: 0xc
	// Line 1151, Address: 0x1d640c, Func Offset: 0x1c
	// Line 1152, Address: 0x1d6420, Func Offset: 0x30
	// Line 1153, Address: 0x1d642c, Func Offset: 0x3c
	// Line 1154, Address: 0x1d643c, Func Offset: 0x4c
	// Line 1155, Address: 0x1d6444, Func Offset: 0x54
	// Line 1157, Address: 0x1d6454, Func Offset: 0x64
	// Line 1158, Address: 0x1d646c, Func Offset: 0x7c
	// Line 1160, Address: 0x1d6470, Func Offset: 0x80
	// Line 1161, Address: 0x1d6484, Func Offset: 0x94
	// Line 1162, Address: 0x1d6494, Func Offset: 0xa4
	// Func End, Address: 0x1d64a8, Func Offset: 0xb8
}

