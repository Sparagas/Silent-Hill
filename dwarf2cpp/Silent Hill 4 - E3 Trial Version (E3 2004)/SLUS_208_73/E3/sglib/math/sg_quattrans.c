typedef struct _anon0;


typedef float type_0[4];
typedef float type_1[4];
typedef float type_2[4];

struct _anon0
{
	float q[4];
	float t[4];
};


void sgQuatTransFromMatrix(_anon0* qt, float m[4]);
void sgQuatTransMul(_anon0* ab, _anon0* a, _anon0* b);
void sgQuatTransMulVector(float* dst, _anon0* qt, float* src);
void sgQuatTransRotTransVector3(float* dst, _anon0* qt, float* src);
void sgQuatTransInverse(_anon0* dst, _anon0* src);

// 
// Start address: 0x14b8a0
void sgQuatTransFromMatrix(_anon0* qt, float m[4])
{
	// Line 29, Address: 0x14b8a0, Func Offset: 0
	// Func End, Address: 0x14b8a8, Func Offset: 0x8
}

// 
// Start address: 0x14b8b0
void sgQuatTransMul(_anon0* ab, _anon0* a, _anon0* b)
{
	// Line 49, Address: 0x14b8b0, Func Offset: 0
	// Func End, Address: 0x14b8b8, Func Offset: 0x8
}

// 
// Start address: 0x14b8c0
void sgQuatTransMulVector(float* dst, _anon0* qt, float* src)
{
	// Line 76, Address: 0x14b8c0, Func Offset: 0
	// Func End, Address: 0x14b8c8, Func Offset: 0x8
}

// 
// Start address: 0x14b8d0
void sgQuatTransRotTransVector3(float* dst, _anon0* qt, float* src)
{
	float v[4];
	// Line 91, Address: 0x14b8d0, Func Offset: 0
	// Line 94, Address: 0x14b8e8, Func Offset: 0x18
	// Line 96, Address: 0x14b8f0, Func Offset: 0x20
	// Line 97, Address: 0x14b8f4, Func Offset: 0x24
	// Line 98, Address: 0x14b8f8, Func Offset: 0x28
	// Line 99, Address: 0x14b8fc, Func Offset: 0x2c
	// Line 100, Address: 0x14b900, Func Offset: 0x30
	// Line 101, Address: 0x14b904, Func Offset: 0x34
	// Line 103, Address: 0x14b908, Func Offset: 0x38
	// Func End, Address: 0x14b91c, Func Offset: 0x4c
}

// 
// Start address: 0x14b920
void sgQuatTransInverse(_anon0* dst, _anon0* src)
{
	// Line 112, Address: 0x14b920, Func Offset: 0
	// Func End, Address: 0x14b928, Func Offset: 0x8
}

