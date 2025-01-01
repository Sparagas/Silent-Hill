

typedef float type_0[4];
typedef float type_1[4];
typedef float type_2[4][4];

float sg_matrix_zero[4][4];
float sg_matrix_unit[4][4];

void sgMatrixInverse(float dst[4], float src[4]);
void sgMatrixFromEulerZYX(float dst[4], float* rot);
void sgMatrixScale3(float dst[4], float m[4], float* s);
void sgMatrixRotX(float dst[4], float src[4], float rx);
void sgMatrixRotY(float dst[4], float src[4], float ry);
void sgMatrixRotZ(float dst[4], float src[4], float rz);

// 
// Start address: 0x14b150
void sgMatrixInverse(float dst[4], float src[4])
{
	// Line 44, Address: 0x14b150, Func Offset: 0
	// Func End, Address: 0x14b158, Func Offset: 0x8
}

// 
// Start address: 0x14b160
void sgMatrixFromEulerZYX(float dst[4], float* rot)
{
	// Line 55, Address: 0x14b164, Func Offset: 0x4
	// Func End, Address: 0x14b170, Func Offset: 0x10
}

// 
// Start address: 0x14b170
void sgMatrixScale3(float dst[4], float m[4], float* s)
{
	// Line 67, Address: 0x14b174, Func Offset: 0x4
	// Line 68, Address: 0x14b194, Func Offset: 0x24
	// Line 69, Address: 0x14b1a4, Func Offset: 0x34
	// Line 70, Address: 0x14b1b4, Func Offset: 0x44
	// Line 71, Address: 0x14b1c0, Func Offset: 0x50
	// Func End, Address: 0x14b1c8, Func Offset: 0x58
}

// 
// Start address: 0x14b1d0
void sgMatrixRotX(float dst[4], float src[4], float rx)
{
	// Line 96, Address: 0x14b1d0, Func Offset: 0
	// Line 97, Address: 0x14b1e4, Func Offset: 0x14
	// Line 98, Address: 0x14b1fc, Func Offset: 0x2c
	// Func End, Address: 0x14b210, Func Offset: 0x40
}

// 
// Start address: 0x14b210
void sgMatrixRotY(float dst[4], float src[4], float ry)
{
	// Line 108, Address: 0x14b210, Func Offset: 0
	// Line 109, Address: 0x14b224, Func Offset: 0x14
	// Line 110, Address: 0x14b23c, Func Offset: 0x2c
	// Func End, Address: 0x14b250, Func Offset: 0x40
}

// 
// Start address: 0x14b250
void sgMatrixRotZ(float dst[4], float src[4], float rz)
{
	// Line 120, Address: 0x14b250, Func Offset: 0
	// Line 121, Address: 0x14b264, Func Offset: 0x14
	// Line 122, Address: 0x14b27c, Func Offset: 0x2c
	// Func End, Address: 0x14b290, Func Offset: 0x40
}

