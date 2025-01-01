typedef struct sgVectorS12LinearKey;
typedef struct sgVectorS4BezierKey;
typedef struct sgVectorS4LinearKey;
typedef struct sgVectorS12CardinalKey;
typedef struct sgQuatSquadKey;
typedef struct sgVectorLinearKey;
typedef struct sgQuatBoehmKey;
typedef struct sgQuatS15LinearKey;
typedef struct sgQuatLinearKey;
typedef struct sgQuatS15SquadKey;
typedef struct sgQuatS15BoehmKey;
typedef struct sgFloatCardinalKey;
typedef struct sgFloatLinearKey;
typedef struct sgVectorHermiteKey;
typedef struct sgVectorCardinalKey;
typedef struct sgVectorBezierKey;
typedef struct sgVectorStepKey;
typedef struct sgVectorS4HermiteKey;
typedef struct sgVectorS4CardinalKey;


typedef float type_0[4];
typedef float type_1[4][4];
typedef float type_2[4];
typedef short type_3[4];
typedef float type_4[4];
typedef float type_5[4];
typedef float type_6[4];
typedef float type_7[4];
typedef float type_8[4];
typedef float type_9[4];
typedef float type_10[4];
typedef float type_11[4];
typedef float type_12[4];
typedef float type_13[4];
typedef float type_14[4];

struct sgVectorS12LinearKey
{
	short p[4];
};

struct sgVectorS4BezierKey
{
	short p[4];
	short in_knot[4];
	short out_knot[4];
};

struct sgVectorS4LinearKey
{
	short p[4];
};

struct sgVectorS12CardinalKey
{
	short p[4];
	short Tsd[4];
};

struct sgQuatSquadKey
{
	float q[4];
	float Ts[4];
	float Td[4];
};

struct sgVectorLinearKey
{
	float p[4];
};

struct sgQuatBoehmKey
{
	float q[4];
	float Tq[4];
};

struct sgQuatS15LinearKey
{
	short q[4];
};

struct sgQuatLinearKey
{
	float q[4];
};

struct sgQuatS15SquadKey
{
	short q[4];
	short Ts[4];
	short Td[4];
};

struct sgQuatS15BoehmKey
{
	short q[4];
	short Tq[4];
};

struct sgFloatCardinalKey
{
	float value;
	float tan;
};

struct sgFloatLinearKey
{
	float value;
};

struct sgVectorHermiteKey
{
	float p[4];
	float Ts[4];
	float Td[4];
};

struct sgVectorCardinalKey
{
	float p[4];
	float Tsd[4];
};

struct sgVectorBezierKey
{
	float p[4];
	float in_knot[4];
	float out_knot[4];
};

struct sgVectorStepKey
{
	float p[4];
};

struct sgVectorS4HermiteKey
{
	short p[4];
	short Ts[4];
	short Td[4];
};

struct sgVectorS4CardinalKey
{
	short p[4];
	short Tsd[4];
};

float hermite_base_matrix[4][4];
float bezier_base_matrix[4][4];

void sgHermiteCalcBasis(float* v, float u);
void sgInterpVectorHermite(float* val, sgVectorHermiteKey* key0, sgVectorHermiteKey* key1, float u);
void sgInterpVectorCardinal(float* val, sgVectorCardinalKey* key0, sgVectorCardinalKey* key1, float u);
void sgInterpVectorBezier(float* val, sgVectorBezierKey* key0, sgVectorBezierKey* key1, float u);
void sgInterpVectorLinear(float* val, sgVectorLinearKey* key0, sgVectorLinearKey* key1, float u);
void sgInterpVectorS4Hermite(float* val, sgVectorS4HermiteKey* key0, sgVectorS4HermiteKey* key1, float u);
void sgInterpVectorS4Cardinal(float* val, sgVectorS4CardinalKey* key0, sgVectorS4CardinalKey* key1, float u);
void sgInterpVectorS4Bezier(float* val, sgVectorS4BezierKey* key0, sgVectorS4BezierKey* key1, float u);
void sgInterpVectorS4Linear(float* val, sgVectorS4LinearKey* key0, sgVectorS4LinearKey* key1, float u);
void sgInterpVectorS12Cardinal(float* val, sgVectorS12CardinalKey* key0, sgVectorS12CardinalKey* key1, float u);
void sgInterpVectorS12Linear(float* val, sgVectorS12LinearKey* key0, sgVectorS12LinearKey* key1, float u);
void sgInterpVectorStep(float* val, sgVectorStepKey* key0);
void sgInterpFloatLinear(float* val, sgFloatLinearKey* key0, sgFloatLinearKey* key1, float u);
void sgInterpFloatCardinal(float* val, sgFloatCardinalKey* key0, sgFloatCardinalKey* key1, float u);
void sgInterpQuatSquad(float* val, sgQuatSquadKey* key0, sgQuatSquadKey* key1, float u);
void sgInterpQuatBoehm(float* val, sgQuatBoehmKey* key0, sgQuatBoehmKey* key1, float u);
void sgInterpQuatLinear(float* val, sgQuatLinearKey* key0, sgQuatLinearKey* key1, float u);
void sgInterpQuatS15Squad(float* val, sgQuatS15SquadKey* key0, sgQuatS15SquadKey* key1, float u);
void sgInterpQuatS15Boehm(float* val, sgQuatS15BoehmKey* key0, sgQuatS15BoehmKey* key1, float u);
void sgInterpQuatS15Linear(float* val, sgQuatS15LinearKey* key0, sgQuatS15LinearKey* key1, float u);

// 
// Start address: 0x147390
void sgHermiteCalcBasis(float* v, float u)
{
	float s[4];
	// Line 55, Address: 0x147390, Func Offset: 0
	// Line 49, Address: 0x147394, Func Offset: 0x4
	// Line 53, Address: 0x147398, Func Offset: 0x8
	// Line 58, Address: 0x14739c, Func Offset: 0xc
	// Line 53, Address: 0x1473a0, Func Offset: 0x10
	// Line 58, Address: 0x1473a4, Func Offset: 0x14
	// Line 56, Address: 0x1473ac, Func Offset: 0x1c
	// Line 54, Address: 0x1473b0, Func Offset: 0x20
	// Line 55, Address: 0x1473b4, Func Offset: 0x24
	// Line 56, Address: 0x1473b8, Func Offset: 0x28
	// Line 58, Address: 0x1473bc, Func Offset: 0x2c
	// Line 59, Address: 0x1473e4, Func Offset: 0x54
	// Func End, Address: 0x1473ec, Func Offset: 0x5c
}

// 
// Start address: 0x1473f0
void sgInterpVectorHermite(float* val, sgVectorHermiteKey* key0, sgVectorHermiteKey* key1, float u)
{
	int i;
	float v[4];
	float pt[4];
	float r[4];
	// Line 167, Address: 0x1473f0, Func Offset: 0
	// Line 175, Address: 0x147410, Func Offset: 0x20
	// Line 178, Address: 0x147418, Func Offset: 0x28
	// Line 181, Address: 0x147430, Func Offset: 0x40
	// Line 182, Address: 0x14743c, Func Offset: 0x4c
	// Line 181, Address: 0x147440, Func Offset: 0x50
	// Line 182, Address: 0x147444, Func Offset: 0x54
	// Line 183, Address: 0x14744c, Func Offset: 0x5c
	// Line 184, Address: 0x147454, Func Offset: 0x64
	// Line 185, Address: 0x14745c, Func Offset: 0x6c
	// Line 186, Address: 0x14746c, Func Offset: 0x7c
	// Line 187, Address: 0x147474, Func Offset: 0x84
	// Line 186, Address: 0x147478, Func Offset: 0x88
	// Line 187, Address: 0x147498, Func Offset: 0xa8
	// Line 189, Address: 0x1474a4, Func Offset: 0xb4
	// Func End, Address: 0x1474bc, Func Offset: 0xcc
}

// 
// Start address: 0x1474c0
void sgInterpVectorCardinal(float* val, sgVectorCardinalKey* key0, sgVectorCardinalKey* key1, float u)
{
	int i;
	float v[4];
	float pt[4];
	float r[4];
	// Line 199, Address: 0x1474c0, Func Offset: 0
	// Line 204, Address: 0x1474e0, Func Offset: 0x20
	// Line 206, Address: 0x1474e8, Func Offset: 0x28
	// Line 209, Address: 0x147500, Func Offset: 0x40
	// Line 210, Address: 0x14750c, Func Offset: 0x4c
	// Line 209, Address: 0x147510, Func Offset: 0x50
	// Line 210, Address: 0x147514, Func Offset: 0x54
	// Line 211, Address: 0x14751c, Func Offset: 0x5c
	// Line 212, Address: 0x147524, Func Offset: 0x64
	// Line 213, Address: 0x14752c, Func Offset: 0x6c
	// Line 214, Address: 0x14753c, Func Offset: 0x7c
	// Line 215, Address: 0x147544, Func Offset: 0x84
	// Line 214, Address: 0x147548, Func Offset: 0x88
	// Line 215, Address: 0x147568, Func Offset: 0xa8
	// Line 217, Address: 0x147574, Func Offset: 0xb4
	// Func End, Address: 0x14758c, Func Offset: 0xcc
}

// 
// Start address: 0x147590
void sgInterpVectorBezier(float* val, sgVectorBezierKey* key0, sgVectorBezierKey* key1, float u)
{
	float s;
	float u2;
	float v0[4];
	float v1[4];
	float out[4];
	float in[4];
	float p[4];
	// Line 249, Address: 0x147590, Func Offset: 0
	// Line 228, Address: 0x147594, Func Offset: 0x4
	// Line 249, Address: 0x147598, Func Offset: 0x8
	// Line 257, Address: 0x14759c, Func Offset: 0xc
	// Line 250, Address: 0x1475a0, Func Offset: 0x10
	// Line 249, Address: 0x1475a4, Func Offset: 0x14
	// Line 257, Address: 0x1475a8, Func Offset: 0x18
	// Line 258, Address: 0x1475b0, Func Offset: 0x20
	// Line 259, Address: 0x1475bc, Func Offset: 0x2c
	// Line 260, Address: 0x1475c8, Func Offset: 0x38
	// Line 263, Address: 0x1475d4, Func Offset: 0x44
	// Line 264, Address: 0x1475f0, Func Offset: 0x60
	// Line 265, Address: 0x147620, Func Offset: 0x90
	// Line 266, Address: 0x147640, Func Offset: 0xb0
	// Line 267, Address: 0x147664, Func Offset: 0xd4
	// Line 268, Address: 0x147694, Func Offset: 0x104
	// Line 269, Address: 0x1476b4, Func Offset: 0x124
	// Line 270, Address: 0x1476d8, Func Offset: 0x148
	// Line 271, Address: 0x147700, Func Offset: 0x170
	// Line 273, Address: 0x147720, Func Offset: 0x190
	// Line 275, Address: 0x14772c, Func Offset: 0x19c
	// Func End, Address: 0x147734, Func Offset: 0x1a4
}

// 
// Start address: 0x147740
void sgInterpVectorLinear(float* val, sgVectorLinearKey* key0, sgVectorLinearKey* key1, float u)
{
	float v0[4];
	float v1[4];
	// Line 286, Address: 0x147740, Func Offset: 0
	// Line 290, Address: 0x147744, Func Offset: 0x4
	// Line 291, Address: 0x147750, Func Offset: 0x10
	// Line 292, Address: 0x14775c, Func Offset: 0x1c
	// Line 293, Address: 0x147784, Func Offset: 0x44
	// Line 294, Address: 0x147790, Func Offset: 0x50
	// Func End, Address: 0x147798, Func Offset: 0x58
}

// 
// Start address: 0x1477a0
void sgInterpVectorS4Hermite(float* val, sgVectorS4HermiteKey* key0, sgVectorS4HermiteKey* key1, float u)
{
	sgVectorHermiteKey hkey0;
	sgVectorHermiteKey hkey1;
	// Line 304, Address: 0x1477a0, Func Offset: 0
	// Line 307, Address: 0x1477a8, Func Offset: 0x8
	// Line 308, Address: 0x1477c4, Func Offset: 0x24
	// Line 309, Address: 0x1477e4, Func Offset: 0x44
	// Line 310, Address: 0x147800, Func Offset: 0x60
	// Line 311, Address: 0x147820, Func Offset: 0x80
	// Line 312, Address: 0x14782c, Func Offset: 0x8c
	// Func End, Address: 0x147838, Func Offset: 0x98
}

// 
// Start address: 0x147840
void sgInterpVectorS4Cardinal(float* val, sgVectorS4CardinalKey* key0, sgVectorS4CardinalKey* key1, float u)
{
	sgVectorCardinalKey ckey0;
	sgVectorCardinalKey ckey1;
	// Line 315, Address: 0x147840, Func Offset: 0
	// Line 318, Address: 0x147848, Func Offset: 0x8
	// Line 319, Address: 0x147864, Func Offset: 0x24
	// Line 320, Address: 0x147884, Func Offset: 0x44
	// Line 321, Address: 0x1478a0, Func Offset: 0x60
	// Line 322, Address: 0x1478c0, Func Offset: 0x80
	// Line 323, Address: 0x1478cc, Func Offset: 0x8c
	// Func End, Address: 0x1478d8, Func Offset: 0x98
}

// 
// Start address: 0x1478e0
void sgInterpVectorS4Bezier(float* val, sgVectorS4BezierKey* key0, sgVectorS4BezierKey* key1, float u)
{
	sgVectorBezierKey bkey0;
	sgVectorBezierKey bkey1;
	// Line 326, Address: 0x1478e0, Func Offset: 0
	// Line 329, Address: 0x1478e8, Func Offset: 0x8
	// Line 330, Address: 0x147904, Func Offset: 0x24
	// Line 331, Address: 0x147924, Func Offset: 0x44
	// Line 332, Address: 0x147940, Func Offset: 0x60
	// Line 333, Address: 0x147960, Func Offset: 0x80
	// Line 334, Address: 0x14796c, Func Offset: 0x8c
	// Func End, Address: 0x147978, Func Offset: 0x98
}

// 
// Start address: 0x147980
void sgInterpVectorS4Linear(float* val, sgVectorS4LinearKey* key0, sgVectorS4LinearKey* key1, float u)
{
	float v0[4];
	float v1[4];
	// Line 340, Address: 0x147980, Func Offset: 0
	// Line 337, Address: 0x147984, Func Offset: 0x4
	// Line 340, Address: 0x147988, Func Offset: 0x8
	// Line 341, Address: 0x1479a0, Func Offset: 0x20
	// Line 342, Address: 0x1479bc, Func Offset: 0x3c
	// Line 343, Address: 0x1479f0, Func Offset: 0x70
	// Line 344, Address: 0x1479fc, Func Offset: 0x7c
	// Func End, Address: 0x147a04, Func Offset: 0x84
}

// 
// Start address: 0x147a10
void sgInterpVectorS12Cardinal(float* val, sgVectorS12CardinalKey* key0, sgVectorS12CardinalKey* key1, float u)
{
	sgVectorCardinalKey ckey0;
	sgVectorCardinalKey ckey1;
	// Line 347, Address: 0x147a10, Func Offset: 0
	// Line 350, Address: 0x147a18, Func Offset: 0x8
	// Line 351, Address: 0x147a34, Func Offset: 0x24
	// Line 352, Address: 0x147a54, Func Offset: 0x44
	// Line 353, Address: 0x147a70, Func Offset: 0x60
	// Line 354, Address: 0x147a90, Func Offset: 0x80
	// Line 355, Address: 0x147a9c, Func Offset: 0x8c
	// Func End, Address: 0x147aa8, Func Offset: 0x98
}

// 
// Start address: 0x147ab0
void sgInterpVectorS12Linear(float* val, sgVectorS12LinearKey* key0, sgVectorS12LinearKey* key1, float u)
{
	float v0[4];
	float v1[4];
	// Line 361, Address: 0x147ab0, Func Offset: 0
	// Line 358, Address: 0x147ab4, Func Offset: 0x4
	// Line 361, Address: 0x147ab8, Func Offset: 0x8
	// Line 362, Address: 0x147ad0, Func Offset: 0x20
	// Line 363, Address: 0x147aec, Func Offset: 0x3c
	// Line 364, Address: 0x147b20, Func Offset: 0x70
	// Line 365, Address: 0x147b2c, Func Offset: 0x7c
	// Func End, Address: 0x147b34, Func Offset: 0x84
}

// 
// Start address: 0x147b40
void sgInterpVectorStep(float* val, sgVectorStepKey* key0)
{
	// Line 376, Address: 0x147b40, Func Offset: 0
	// Line 377, Address: 0x147b44, Func Offset: 0x4
	// Func End, Address: 0x147b4c, Func Offset: 0xc
}

// 
// Start address: 0x147b50
void sgInterpFloatLinear(float* val, sgFloatLinearKey* key0, sgFloatLinearKey* key1, float u)
{
	// Line 392, Address: 0x147b50, Func Offset: 0
	// Line 393, Address: 0x147b6c, Func Offset: 0x1c
	// Func End, Address: 0x147b74, Func Offset: 0x24
}

// 
// Start address: 0x147b80
void sgInterpFloatCardinal(float* val, sgFloatCardinalKey* key0, sgFloatCardinalKey* key1, float u)
{
	float v[4];
	float pt[4];
	float r[4];
	// Line 404, Address: 0x147b80, Func Offset: 0
	// Line 410, Address: 0x147ba0, Func Offset: 0x20
	// Line 412, Address: 0x147ba8, Func Offset: 0x28
	// Line 416, Address: 0x147bac, Func Offset: 0x2c
	// Line 412, Address: 0x147bb8, Func Offset: 0x38
	// Line 413, Address: 0x147bbc, Func Offset: 0x3c
	// Line 414, Address: 0x147bc4, Func Offset: 0x44
	// Line 415, Address: 0x147bcc, Func Offset: 0x4c
	// Line 416, Address: 0x147bd4, Func Offset: 0x54
	// Line 417, Address: 0x147be4, Func Offset: 0x64
	// Line 418, Address: 0x147c04, Func Offset: 0x84
	// Func End, Address: 0x147c1c, Func Offset: 0x9c
}

// 
// Start address: 0x147c20
void sgInterpQuatSquad(float* val, sgQuatSquadKey* key0, sgQuatSquadKey* key1, float u)
{
	// Line 434, Address: 0x147c24, Func Offset: 0x4
	// Func End, Address: 0x147c30, Func Offset: 0x10
}

// 
// Start address: 0x147c30
void sgInterpQuatBoehm(float* val, sgQuatBoehmKey* key0, sgQuatBoehmKey* key1, float u)
{
	// Line 447, Address: 0x147c34, Func Offset: 0x4
	// Func End, Address: 0x147c40, Func Offset: 0x10
}

// 
// Start address: 0x147c40
void sgInterpQuatLinear(float* val, sgQuatLinearKey* key0, sgQuatLinearKey* key1, float u)
{
	// Line 460, Address: 0x147c40, Func Offset: 0
	// Func End, Address: 0x147c48, Func Offset: 0x8
}

// 
// Start address: 0x147c50
void sgInterpQuatS15Squad(float* val, sgQuatS15SquadKey* key0, sgQuatS15SquadKey* key1, float u)
{
	float q0[4];
	float q1[4];
	float Td[4];
	float Ts[4];
	// Line 472, Address: 0x147c50, Func Offset: 0
	// Line 478, Address: 0x147c58, Func Offset: 0x8
	// Line 479, Address: 0x147c74, Func Offset: 0x24
	// Line 480, Address: 0x147c94, Func Offset: 0x44
	// Line 481, Address: 0x147cb0, Func Offset: 0x60
	// Line 482, Address: 0x147cd0, Func Offset: 0x80
	// Line 483, Address: 0x147ce4, Func Offset: 0x94
	// Func End, Address: 0x147cf0, Func Offset: 0xa0
}

// 
// Start address: 0x147cf0
void sgInterpQuatS15Boehm(float* val, sgQuatS15BoehmKey* key0, sgQuatS15BoehmKey* key1, float u)
{
	float q0[4];
	float q1[4];
	float Tq0[4];
	float Tq1[4];
	// Line 494, Address: 0x147cf0, Func Offset: 0
	// Line 500, Address: 0x147cf8, Func Offset: 0x8
	// Line 501, Address: 0x147d14, Func Offset: 0x24
	// Line 502, Address: 0x147d34, Func Offset: 0x44
	// Line 503, Address: 0x147d50, Func Offset: 0x60
	// Line 504, Address: 0x147d70, Func Offset: 0x80
	// Line 505, Address: 0x147d84, Func Offset: 0x94
	// Func End, Address: 0x147d90, Func Offset: 0xa0
}

// 
// Start address: 0x147d90
void sgInterpQuatS15Linear(float* val, sgQuatS15LinearKey* key0, sgQuatS15LinearKey* key1, float u)
{
	float q0[4];
	float q1[4];
	// Line 516, Address: 0x147d90, Func Offset: 0
	// Line 519, Address: 0x147d98, Func Offset: 0x8
	// Line 520, Address: 0x147db4, Func Offset: 0x24
	// Line 521, Address: 0x147dd0, Func Offset: 0x40
	// Line 522, Address: 0x147ddc, Func Offset: 0x4c
	// Func End, Address: 0x147de8, Func Offset: 0x58
}

