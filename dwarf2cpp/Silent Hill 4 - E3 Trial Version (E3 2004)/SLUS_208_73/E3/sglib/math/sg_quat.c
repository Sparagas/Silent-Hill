

typedef float type_0[4];
typedef float type_1[4];
typedef float type_2[4];

float sg_vector_unit_w[4];

void sgQuatCopy(float* dst, float* src);
void sgQuatMul(float* ab, float* a, float* b);
void sgQuatConjugate(float* dst, float* src);
void sgQuatMulVector(float* dst, float* q, float* src);
void sgQuatMulMatrix(float dst[4], float* q, float src[4]);
void sgQuatNormalize(float* dst, float* src);
float sgQuatDot(float* a, float* b);
void sgQuatFromMatrix(float* q, float m[4]);
void sgMatrixFromQuat(float m[4], float* q);
void sgQuatFromAxisAngle(float* q, float* axis, float angle);
void sgQuatFromEulerZYX(float* q, float* rot);
void sgQuatFromEulerZXY(float* q, float* rot);
void sgQuatFromVertices(float* q, float* src, float* dst);
void sgQuatSlerp(float* ab, float* a, float* b, float t);
void sgQuatSquad(float* ab, float* a, float* a_out, float* b_in, float* b, float t);

// 
// Start address: 0x14b290
void sgQuatCopy(float* dst, float* src)
{
	// Line 24, Address: 0x14b290, Func Offset: 0
	// Line 27, Address: 0x14b294, Func Offset: 0x4
	// Func End, Address: 0x14b29c, Func Offset: 0xc
}

// 
// Start address: 0x14b2a0
void sgQuatMul(float* ab, float* a, float* b)
{
	// Line 39, Address: 0x14b2a0, Func Offset: 0
	// Line 40, Address: 0x14b2a4, Func Offset: 0x4
	// Line 43, Address: 0x14b2a8, Func Offset: 0x8
	// Line 44, Address: 0x14b2ac, Func Offset: 0xc
	// Line 45, Address: 0x14b2b0, Func Offset: 0x10
	// Line 46, Address: 0x14b2b4, Func Offset: 0x14
	// Line 49, Address: 0x14b2b8, Func Offset: 0x18
	// Line 50, Address: 0x14b2bc, Func Offset: 0x1c
	// Line 51, Address: 0x14b2c0, Func Offset: 0x20
	// Line 52, Address: 0x14b2c4, Func Offset: 0x24
	// Line 53, Address: 0x14b2c8, Func Offset: 0x28
	// Line 57, Address: 0x14b2cc, Func Offset: 0x2c
	// Func End, Address: 0x14b2d4, Func Offset: 0x34
}

// 
// Start address: 0x14b2e0
void sgQuatConjugate(float* dst, float* src)
{
	// Line 71, Address: 0x14b2e0, Func Offset: 0
	// Line 72, Address: 0x14b2e4, Func Offset: 0x4
	// Line 73, Address: 0x14b2e8, Func Offset: 0x8
	// Line 74, Address: 0x14b2ec, Func Offset: 0xc
	// Line 78, Address: 0x14b2f0, Func Offset: 0x10
	// Func End, Address: 0x14b2f8, Func Offset: 0x18
}

// 
// Start address: 0x14b300
void sgQuatMulVector(float* dst, float* q, float* src)
{
	// Line 92, Address: 0x14b300, Func Offset: 0
	// Line 93, Address: 0x14b304, Func Offset: 0x4
	// Line 96, Address: 0x14b308, Func Offset: 0x8
	// Line 98, Address: 0x14b30c, Func Offset: 0xc
	// Line 100, Address: 0x14b310, Func Offset: 0x10
	// Line 101, Address: 0x14b314, Func Offset: 0x14
	// Line 103, Address: 0x14b318, Func Offset: 0x18
	// Line 104, Address: 0x14b31c, Func Offset: 0x1c
	// Line 105, Address: 0x14b320, Func Offset: 0x20
	// Line 107, Address: 0x14b324, Func Offset: 0x24
	// Line 108, Address: 0x14b328, Func Offset: 0x28
	// Line 109, Address: 0x14b32c, Func Offset: 0x2c
	// Line 110, Address: 0x14b330, Func Offset: 0x30
	// Line 111, Address: 0x14b334, Func Offset: 0x34
	// Line 112, Address: 0x14b338, Func Offset: 0x38
	// Line 116, Address: 0x14b33c, Func Offset: 0x3c
	// Func End, Address: 0x14b344, Func Offset: 0x44
}

// 
// Start address: 0x14b350
void sgQuatMulMatrix(float dst[4], float* q, float src[4])
{
	int i;
	// Line 126, Address: 0x14b350, Func Offset: 0
	// Line 128, Address: 0x14b378, Func Offset: 0x28
	// Line 126, Address: 0x14b37c, Func Offset: 0x2c
	// Line 129, Address: 0x14b388, Func Offset: 0x38
	// Line 130, Address: 0x14b398, Func Offset: 0x48
	// Line 129, Address: 0x14b39c, Func Offset: 0x4c
	// Line 130, Address: 0x14b3a0, Func Offset: 0x50
	// Line 131, Address: 0x14b3ac, Func Offset: 0x5c
	// Line 132, Address: 0x14b3b4, Func Offset: 0x64
	// Func End, Address: 0x14b3d8, Func Offset: 0x88
}

// 
// Start address: 0x14b3e0
void sgQuatNormalize(float* dst, float* src)
{
	// Line 158, Address: 0x14b3e0, Func Offset: 0
	// Line 159, Address: 0x14b3e4, Func Offset: 0x4
	// Line 160, Address: 0x14b3e8, Func Offset: 0x8
	// Line 161, Address: 0x14b3ec, Func Offset: 0xc
	// Line 162, Address: 0x14b3f0, Func Offset: 0x10
	// Line 164, Address: 0x14b3f4, Func Offset: 0x14
	// Line 165, Address: 0x14b3f8, Func Offset: 0x18
	// Line 166, Address: 0x14b3fc, Func Offset: 0x1c
	// Line 167, Address: 0x14b400, Func Offset: 0x20
	// Line 168, Address: 0x14b408, Func Offset: 0x28
	// Line 172, Address: 0x14b410, Func Offset: 0x30
	// Line 175, Address: 0x14b418, Func Offset: 0x38
	// Line 176, Address: 0x14b41c, Func Offset: 0x3c
	// Line 177, Address: 0x14b420, Func Offset: 0x40
	// Line 178, Address: 0x14b424, Func Offset: 0x44
	// Line 181, Address: 0x14b428, Func Offset: 0x48
	// Func End, Address: 0x14b430, Func Offset: 0x50
}

// 
// Start address: 0x14b430
float sgQuatDot(float* a, float* b)
{
	float ret;
	// Line 194, Address: 0x14b430, Func Offset: 0
	// Line 195, Address: 0x14b434, Func Offset: 0x4
	// Line 197, Address: 0x14b438, Func Offset: 0x8
	// Line 198, Address: 0x14b43c, Func Offset: 0xc
	// Line 199, Address: 0x14b440, Func Offset: 0x10
	// Line 200, Address: 0x14b444, Func Offset: 0x14
	// Line 201, Address: 0x14b448, Func Offset: 0x18
	// Line 202, Address: 0x14b44c, Func Offset: 0x1c
	// Line 203, Address: 0x14b450, Func Offset: 0x20
	// Line 207, Address: 0x14b454, Func Offset: 0x24
	// Func End, Address: 0x14b45c, Func Offset: 0x2c
}

// 
// Start address: 0x14b460
void sgQuatFromMatrix(float* q, float m[4])
{
	// Line 216, Address: 0x14b460, Func Offset: 0
	// Func End, Address: 0x14b468, Func Offset: 0x8
}

// 
// Start address: 0x14b470
void sgMatrixFromQuat(float m[4], float* q)
{
	// Line 226, Address: 0x14b470, Func Offset: 0
	// Func End, Address: 0x14b478, Func Offset: 0x8
}

// 
// Start address: 0x14b480
void sgQuatFromAxisAngle(float* q, float* axis, float angle)
{
	float sr;
	float cr;
	// Line 237, Address: 0x14b480, Func Offset: 0
	// Line 241, Address: 0x14b484, Func Offset: 0x4
	// Line 237, Address: 0x14b488, Func Offset: 0x8
	// Line 241, Address: 0x14b48c, Func Offset: 0xc
	// Line 237, Address: 0x14b490, Func Offset: 0x10
	// Line 241, Address: 0x14b4a8, Func Offset: 0x28
	// Line 242, Address: 0x14b4b4, Func Offset: 0x34
	// Line 243, Address: 0x14b4bc, Func Offset: 0x3c
	// Line 245, Address: 0x14b4c8, Func Offset: 0x48
	// Line 247, Address: 0x14b4e0, Func Offset: 0x60
	// Line 248, Address: 0x14b4f0, Func Offset: 0x70
	// Func End, Address: 0x14b508, Func Offset: 0x88
}

// 
// Start address: 0x14b510
void sgQuatFromEulerZYX(float* q, float* rot)
{
	// Line 260, Address: 0x14b510, Func Offset: 0
	// Func End, Address: 0x14b518, Func Offset: 0x8
}

// 
// Start address: 0x14b520
void sgQuatFromEulerZXY(float* q, float* rot)
{
	// Line 273, Address: 0x14b520, Func Offset: 0
	// Func End, Address: 0x14b528, Func Offset: 0x8
}

// 
// Start address: 0x14b530
void sgQuatFromVertices(float* q, float* src, float* dst)
{
	float cost;
	float len;
	float ss;
	float v2[4];
	// Line 297, Address: 0x14b530, Func Offset: 0
	// Line 307, Address: 0x14b534, Func Offset: 0x4
	// Line 309, Address: 0x14b550, Func Offset: 0x20
	// Line 311, Address: 0x14b56c, Func Offset: 0x3c
	// Line 312, Address: 0x14b574, Func Offset: 0x44
	// Line 313, Address: 0x14b57c, Func Offset: 0x4c
	// Line 316, Address: 0x14b59c, Func Offset: 0x6c
	// Line 320, Address: 0x14b5a0, Func Offset: 0x70
	// Line 316, Address: 0x14b5a4, Func Offset: 0x74
	// Line 317, Address: 0x14b5a8, Func Offset: 0x78
	// Line 318, Address: 0x14b5b0, Func Offset: 0x80
	// Line 320, Address: 0x14b5bc, Func Offset: 0x8c
	// Line 322, Address: 0x14b5dc, Func Offset: 0xac
	// Line 324, Address: 0x14b5f8, Func Offset: 0xc8
	// Line 325, Address: 0x14b600, Func Offset: 0xd0
	// Line 324, Address: 0x14b604, Func Offset: 0xd4
	// Line 326, Address: 0x14b608, Func Offset: 0xd8
	// Line 328, Address: 0x14b610, Func Offset: 0xe0
	// Line 329, Address: 0x14b63c, Func Offset: 0x10c
	// Line 332, Address: 0x14b640, Func Offset: 0x110
	// Line 329, Address: 0x14b644, Func Offset: 0x114
	// Line 332, Address: 0x14b648, Func Offset: 0x118
	// Line 333, Address: 0x14b64c, Func Offset: 0x11c
	// Line 334, Address: 0x14b654, Func Offset: 0x124
	// Line 337, Address: 0x14b658, Func Offset: 0x128
	// Line 340, Address: 0x14b674, Func Offset: 0x144
	// Line 347, Address: 0x14b6a0, Func Offset: 0x170
	// Line 348, Address: 0x14b6b0, Func Offset: 0x180
	// Line 347, Address: 0x14b6b4, Func Offset: 0x184
	// Line 348, Address: 0x14b6b8, Func Offset: 0x188
	// Line 347, Address: 0x14b6bc, Func Offset: 0x18c
	// Line 348, Address: 0x14b6c4, Func Offset: 0x194
	// Line 350, Address: 0x14b6e0, Func Offset: 0x1b0
	// Line 352, Address: 0x14b6f8, Func Offset: 0x1c8
	// Line 350, Address: 0x14b6fc, Func Offset: 0x1cc
	// Line 352, Address: 0x14b708, Func Offset: 0x1d8
	// Line 354, Address: 0x14b710, Func Offset: 0x1e0
	// Func End, Address: 0x14b718, Func Offset: 0x1e8
}

// 
// Start address: 0x14b720
void sgQuatSlerp(float* ab, float* a, float* b, float t)
{
	int flip;
	float omega;
	float cosom;
	float sinom;
	float s0;
	float s1;
	// Line 408, Address: 0x14b720, Func Offset: 0
	// Line 414, Address: 0x14b748, Func Offset: 0x28
	// Line 408, Address: 0x14b74c, Func Offset: 0x2c
	// Line 414, Address: 0x14b750, Func Offset: 0x30
	// Line 417, Address: 0x14b760, Func Offset: 0x40
	// Line 418, Address: 0x14b774, Func Offset: 0x54
	// Line 420, Address: 0x14b778, Func Offset: 0x58
	// Line 421, Address: 0x14b780, Func Offset: 0x60
	// Line 422, Address: 0x14b784, Func Offset: 0x64
	// Line 424, Address: 0x14b788, Func Offset: 0x68
	// Line 426, Address: 0x14b7b0, Func Offset: 0x90
	// Line 427, Address: 0x14b7bc, Func Offset: 0x9c
	// Line 435, Address: 0x14b7c8, Func Offset: 0xa8
	// Line 436, Address: 0x14b7e0, Func Offset: 0xc0
	// Line 435, Address: 0x14b7e4, Func Offset: 0xc4
	// Line 436, Address: 0x14b7f4, Func Offset: 0xd4
	// Line 437, Address: 0x14b810, Func Offset: 0xf0
	// Line 439, Address: 0x14b818, Func Offset: 0xf8
	// Line 441, Address: 0x14b81c, Func Offset: 0xfc
	// Line 443, Address: 0x14b820, Func Offset: 0x100
	// Line 445, Address: 0x14b830, Func Offset: 0x110
	// Line 446, Address: 0x14b85c, Func Offset: 0x13c
	// Func End, Address: 0x14b884, Func Offset: 0x164
}

// 
// Start address: 0x14b890
void sgQuatSquad(float* ab, float* a, float* a_out, float* b_in, float* b, float t)
{
	// Line 463, Address: 0x14b890, Func Offset: 0
	// Func End, Address: 0x14b898, Func Offset: 0x8
}

