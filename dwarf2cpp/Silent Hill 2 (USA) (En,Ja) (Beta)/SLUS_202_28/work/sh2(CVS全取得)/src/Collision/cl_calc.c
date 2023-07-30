typedef struct _CL_HITPOLY_PLANE;
typedef struct _CL_HITPOLY_COLUMN;


typedef float type_0[4];
typedef float type_1[4][4];
typedef float type_2[4];
typedef float type_3[4][4];
typedef float type_4[4][2];

struct _CL_HITPOLY_PLANE
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
	float p[4][4];
};

struct _CL_HITPOLY_COLUMN
{
	unsigned char kind;
	unsigned char shape;
	unsigned short pad;
	unsigned int weight;
	unsigned int material;
	int flg;
	float p[4][2];
};


void clCalcPlaneEquation(_CL_HITPOLY_PLANE* pl, float* pparam);

// 
// Start address: 0x131590
void clCalcPlaneEquation(_CL_HITPOLY_PLANE* pl, float* pparam)
{
	// Line 31, Address: 0x131590, Func Offset: 0
	// Line 32, Address: 0x131594, Func Offset: 0x4
	// Line 33, Address: 0x131598, Func Offset: 0x8
	// Line 34, Address: 0x13159c, Func Offset: 0xc
	// Line 35, Address: 0x1315a0, Func Offset: 0x10
	// Line 36, Address: 0x1315a4, Func Offset: 0x14
	// Line 37, Address: 0x1315a8, Func Offset: 0x18
	// Line 38, Address: 0x1315ac, Func Offset: 0x1c
	// Line 39, Address: 0x1315b0, Func Offset: 0x20
	// Line 40, Address: 0x1315b4, Func Offset: 0x24
	// Line 41, Address: 0x1315b8, Func Offset: 0x28
	// Line 42, Address: 0x1315bc, Func Offset: 0x2c
	// Line 43, Address: 0x1315c0, Func Offset: 0x30
	// Line 44, Address: 0x1315c4, Func Offset: 0x34
	// Line 45, Address: 0x1315c8, Func Offset: 0x38
	// Line 60, Address: 0x1315cc, Func Offset: 0x3c
	// Func End, Address: 0x1315d4, Func Offset: 0x44
}

