

typedef unsigned int type_0[8];
typedef unsigned int type_1[12];
typedef unsigned int type_2[624];
typedef float type_3[4];

float range_table[4];
unsigned int sincosdata[8];
unsigned int atandata[12];
int mt_left;
unsigned int mt_state[624];
unsigned int* mt_next;

float sgMathAngleRegulateF(float a);
void sgMathAngleRegulateV(float* dst, float* src);
float sgMathSinF(float r);
float sgMathCosF(float r);
void sg_atan_asm();
float sgMathAtan2F(float y, float x);
float sgMathAtanV(float* v);
float sgMathAsinF(float s);
float sgMathAcosF(float c);
void sgMathSrand(unsigned int seed);
unsigned int mt_rand();
int sgMathRandI();
float sgMathRandF();
float sgMathRandFs();
float sgMathNoise1fSub(float limit, float rate);
float sgMathNoise1f(float* p_base, float* p_add, float normal, float limit, float rate, float t_rate, float a_rate);

// 
// Start address: 0x14b930
float sgMathAngleRegulateF(float a)
{
	float r;
	float b;
	float c;
	// Line 62, Address: 0x14b930, Func Offset: 0
	// Line 63, Address: 0x14b93c, Func Offset: 0xc
	// Line 65, Address: 0x14b944, Func Offset: 0x14
	// Line 66, Address: 0x14b948, Func Offset: 0x18
	// Line 63, Address: 0x14b94c, Func Offset: 0x1c
	// Line 67, Address: 0x14b954, Func Offset: 0x24
	// Line 68, Address: 0x14b95c, Func Offset: 0x2c
	// Line 69, Address: 0x14b960, Func Offset: 0x30
	// Line 70, Address: 0x14b964, Func Offset: 0x34
	// Line 71, Address: 0x14b96c, Func Offset: 0x3c
	// Line 75, Address: 0x14b970, Func Offset: 0x40
	// Func End, Address: 0x14b978, Func Offset: 0x48
}

// 
// Start address: 0x14b980
void sgMathAngleRegulateV(float* dst, float* src)
{
	// Line 86, Address: 0x14b980, Func Offset: 0
	// Line 87, Address: 0x14b988, Func Offset: 0x8
	// Line 88, Address: 0x14b98c, Func Offset: 0xc
	// Line 89, Address: 0x14b990, Func Offset: 0x10
	// Line 90, Address: 0x14b994, Func Offset: 0x14
	// Line 91, Address: 0x14b998, Func Offset: 0x18
	// Line 92, Address: 0x14b99c, Func Offset: 0x1c
	// Line 93, Address: 0x14b9a0, Func Offset: 0x20
	// Line 94, Address: 0x14b9a4, Func Offset: 0x24
	// Line 95, Address: 0x14b9a8, Func Offset: 0x28
	// Line 96, Address: 0x14b9ac, Func Offset: 0x2c
	// Line 99, Address: 0x14b9b0, Func Offset: 0x30
	// Func End, Address: 0x14b9b8, Func Offset: 0x38
}

// 
// Start address: 0x14b9c0
float sgMathSinF(float r)
{
	float s;
	// Line 110, Address: 0x14b9c0, Func Offset: 0
	// Line 112, Address: 0x14b9c8, Func Offset: 0x8
	// Line 113, Address: 0x14b9cc, Func Offset: 0xc
	// Line 114, Address: 0x14b9d0, Func Offset: 0x10
	// Line 115, Address: 0x14b9d4, Func Offset: 0x14
	// Line 117, Address: 0x14b9dc, Func Offset: 0x1c
	// Line 118, Address: 0x14b9e0, Func Offset: 0x20
	// Line 119, Address: 0x14b9e4, Func Offset: 0x24
	// Line 120, Address: 0x14b9e8, Func Offset: 0x28
	// Line 121, Address: 0x14b9ec, Func Offset: 0x2c
	// Line 122, Address: 0x14b9f0, Func Offset: 0x30
	// Line 123, Address: 0x14b9f4, Func Offset: 0x34
	// Line 124, Address: 0x14b9f8, Func Offset: 0x38
	// Line 125, Address: 0x14b9fc, Func Offset: 0x3c
	// Line 126, Address: 0x14ba00, Func Offset: 0x40
	// Line 128, Address: 0x14ba08, Func Offset: 0x48
	// Line 129, Address: 0x14ba0c, Func Offset: 0x4c
	// Line 130, Address: 0x14ba10, Func Offset: 0x50
	// Line 131, Address: 0x14ba14, Func Offset: 0x54
	// Line 133, Address: 0x14ba1c, Func Offset: 0x5c
	// Line 134, Address: 0x14ba20, Func Offset: 0x60
	// Line 135, Address: 0x14ba24, Func Offset: 0x64
	// Line 136, Address: 0x14ba28, Func Offset: 0x68
	// Line 137, Address: 0x14ba2c, Func Offset: 0x6c
	// Line 138, Address: 0x14ba30, Func Offset: 0x70
	// Line 139, Address: 0x14ba34, Func Offset: 0x74
	// Line 140, Address: 0x14ba38, Func Offset: 0x78
	// Line 141, Address: 0x14ba3c, Func Offset: 0x7c
	// Line 142, Address: 0x14ba40, Func Offset: 0x80
	// Line 143, Address: 0x14ba44, Func Offset: 0x84
	// Line 144, Address: 0x14ba48, Func Offset: 0x88
	// Line 145, Address: 0x14ba4c, Func Offset: 0x8c
	// Line 146, Address: 0x14ba50, Func Offset: 0x90
	// Line 147, Address: 0x14ba54, Func Offset: 0x94
	// Line 148, Address: 0x14ba58, Func Offset: 0x98
	// Line 149, Address: 0x14ba5c, Func Offset: 0x9c
	// Line 150, Address: 0x14ba60, Func Offset: 0xa0
	// Line 151, Address: 0x14ba64, Func Offset: 0xa4
	// Line 153, Address: 0x14ba6c, Func Offset: 0xac
	// Line 158, Address: 0x14ba70, Func Offset: 0xb0
	// Func End, Address: 0x14ba78, Func Offset: 0xb8
}

// 
// Start address: 0x14ba80
float sgMathCosF(float r)
{
	float c;
	// Line 169, Address: 0x14ba80, Func Offset: 0
	// Line 171, Address: 0x14ba88, Func Offset: 0x8
	// Line 172, Address: 0x14ba8c, Func Offset: 0xc
	// Line 173, Address: 0x14ba90, Func Offset: 0x10
	// Line 174, Address: 0x14ba94, Func Offset: 0x14
	// Line 175, Address: 0x14ba98, Func Offset: 0x18
	// Line 176, Address: 0x14ba9c, Func Offset: 0x1c
	// Line 178, Address: 0x14baa4, Func Offset: 0x24
	// Line 179, Address: 0x14baa8, Func Offset: 0x28
	// Line 180, Address: 0x14baac, Func Offset: 0x2c
	// Line 181, Address: 0x14bab0, Func Offset: 0x30
	// Line 182, Address: 0x14bab4, Func Offset: 0x34
	// Line 183, Address: 0x14bab8, Func Offset: 0x38
	// Line 184, Address: 0x14babc, Func Offset: 0x3c
	// Line 185, Address: 0x14bac0, Func Offset: 0x40
	// Line 186, Address: 0x14bac4, Func Offset: 0x44
	// Line 187, Address: 0x14bac8, Func Offset: 0x48
	// Line 190, Address: 0x14bad0, Func Offset: 0x50
	// Line 191, Address: 0x14bad4, Func Offset: 0x54
	// Line 192, Address: 0x14bad8, Func Offset: 0x58
	// Line 193, Address: 0x14badc, Func Offset: 0x5c
	// Line 194, Address: 0x14bae0, Func Offset: 0x60
	// Line 195, Address: 0x14bae4, Func Offset: 0x64
	// Line 196, Address: 0x14bae8, Func Offset: 0x68
	// Line 197, Address: 0x14baec, Func Offset: 0x6c
	// Line 198, Address: 0x14baf0, Func Offset: 0x70
	// Line 199, Address: 0x14baf4, Func Offset: 0x74
	// Line 200, Address: 0x14baf8, Func Offset: 0x78
	// Line 201, Address: 0x14bafc, Func Offset: 0x7c
	// Line 202, Address: 0x14bb00, Func Offset: 0x80
	// Line 203, Address: 0x14bb04, Func Offset: 0x84
	// Line 204, Address: 0x14bb08, Func Offset: 0x88
	// Line 209, Address: 0x14bb0c, Func Offset: 0x8c
	// Func End, Address: 0x14bb14, Func Offset: 0x94
}

// 
// Start address: 0x14bb20
void sg_atan_asm()
{
	// Line 219, Address: 0x14bb20, Func Offset: 0
	// Line 221, Address: 0x14bb28, Func Offset: 0x8
	// Line 222, Address: 0x14bb2c, Func Offset: 0xc
	// Line 223, Address: 0x14bb30, Func Offset: 0x10
	// Line 224, Address: 0x14bb34, Func Offset: 0x14
	// Line 225, Address: 0x14bb38, Func Offset: 0x18
	// Line 226, Address: 0x14bb3c, Func Offset: 0x1c
	// Line 227, Address: 0x14bb40, Func Offset: 0x20
	// Line 229, Address: 0x14bb48, Func Offset: 0x28
	// Line 230, Address: 0x14bb4c, Func Offset: 0x2c
	// Line 231, Address: 0x14bb50, Func Offset: 0x30
	// Line 232, Address: 0x14bb54, Func Offset: 0x34
	// Line 234, Address: 0x14bb58, Func Offset: 0x38
	// Line 235, Address: 0x14bb5c, Func Offset: 0x3c
	// Line 237, Address: 0x14bb64, Func Offset: 0x44
	// Line 238, Address: 0x14bb68, Func Offset: 0x48
	// Line 239, Address: 0x14bb6c, Func Offset: 0x4c
	// Line 240, Address: 0x14bb70, Func Offset: 0x50
	// Line 241, Address: 0x14bb74, Func Offset: 0x54
	// Line 242, Address: 0x14bb78, Func Offset: 0x58
	// Line 243, Address: 0x14bb7c, Func Offset: 0x5c
	// Line 244, Address: 0x14bb80, Func Offset: 0x60
	// Line 245, Address: 0x14bb84, Func Offset: 0x64
	// Line 246, Address: 0x14bb88, Func Offset: 0x68
	// Line 247, Address: 0x14bb8c, Func Offset: 0x6c
	// Line 248, Address: 0x14bb90, Func Offset: 0x70
	// Line 249, Address: 0x14bb94, Func Offset: 0x74
	// Line 250, Address: 0x14bb98, Func Offset: 0x78
	// Line 251, Address: 0x14bb9c, Func Offset: 0x7c
	// Line 252, Address: 0x14bba0, Func Offset: 0x80
	// Line 253, Address: 0x14bba4, Func Offset: 0x84
	// Line 254, Address: 0x14bba8, Func Offset: 0x88
	// Line 255, Address: 0x14bbac, Func Offset: 0x8c
	// Line 256, Address: 0x14bbb0, Func Offset: 0x90
	// Line 257, Address: 0x14bbb4, Func Offset: 0x94
	// Line 258, Address: 0x14bbb8, Func Offset: 0x98
	// Line 259, Address: 0x14bbbc, Func Offset: 0x9c
	// Line 260, Address: 0x14bbc0, Func Offset: 0xa0
	// Line 261, Address: 0x14bbc4, Func Offset: 0xa4
	// Line 262, Address: 0x14bbc8, Func Offset: 0xa8
	// Line 263, Address: 0x14bbcc, Func Offset: 0xac
	// Line 264, Address: 0x14bbd0, Func Offset: 0xb0
	// Line 265, Address: 0x14bbd4, Func Offset: 0xb4
	// Line 266, Address: 0x14bbd8, Func Offset: 0xb8
	// Line 267, Address: 0x14bbdc, Func Offset: 0xbc
	// Line 269, Address: 0x14bbe4, Func Offset: 0xc4
	// Line 270, Address: 0x14bbe8, Func Offset: 0xc8
	// Line 271, Address: 0x14bbec, Func Offset: 0xcc
	// Line 273, Address: 0x14bbf4, Func Offset: 0xd4
	// Line 274, Address: 0x14bbf8, Func Offset: 0xd8
	// Line 279, Address: 0x14bc00, Func Offset: 0xe0
	// Func End, Address: 0x14bc08, Func Offset: 0xe8
}

// 
// Start address: 0x14bc10
float sgMathAtan2F(float y, float x)
{
	float r;
	// Line 287, Address: 0x14bc10, Func Offset: 0
	// Line 291, Address: 0x14bc18, Func Offset: 0x8
	// Line 292, Address: 0x14bc1c, Func Offset: 0xc
	// Line 293, Address: 0x14bc20, Func Offset: 0x10
	// Line 294, Address: 0x14bc24, Func Offset: 0x14
	// Line 295, Address: 0x14bc28, Func Offset: 0x18
	// Line 296, Address: 0x14bc2c, Func Offset: 0x1c
	// Line 298, Address: 0x14bc34, Func Offset: 0x24
	// Line 299, Address: 0x14bc38, Func Offset: 0x28
	// Line 300, Address: 0x14bc3c, Func Offset: 0x2c
	// Line 301, Address: 0x14bc40, Func Offset: 0x30
	// Line 305, Address: 0x14bc44, Func Offset: 0x34
	// Func End, Address: 0x14bc50, Func Offset: 0x40
}

// 
// Start address: 0x14bc50
float sgMathAtanV(float* v)
{
	float r;
	// Line 312, Address: 0x14bc50, Func Offset: 0
	// Line 316, Address: 0x14bc58, Func Offset: 0x8
	// Line 317, Address: 0x14bc5c, Func Offset: 0xc
	// Line 318, Address: 0x14bc60, Func Offset: 0x10
	// Line 319, Address: 0x14bc64, Func Offset: 0x14
	// Line 321, Address: 0x14bc6c, Func Offset: 0x1c
	// Line 322, Address: 0x14bc70, Func Offset: 0x20
	// Line 323, Address: 0x14bc74, Func Offset: 0x24
	// Line 324, Address: 0x14bc78, Func Offset: 0x28
	// Line 328, Address: 0x14bc7c, Func Offset: 0x2c
	// Func End, Address: 0x14bc88, Func Offset: 0x38
}

// 
// Start address: 0x14bc90
float sgMathAsinF(float s)
{
	// Line 336, Address: 0x14bc90, Func Offset: 0
	// Func End, Address: 0x14bcb0, Func Offset: 0x20
}

// 
// Start address: 0x14bcb0
float sgMathAcosF(float c)
{
	// Line 345, Address: 0x14bcb4, Func Offset: 0x4
	// Func End, Address: 0x14bcd4, Func Offset: 0x24
}

// 
// Start address: 0x14bce0
void sgMathSrand(unsigned int seed)
{
	unsigned int s;
	int j;
	// Line 356, Address: 0x14bce0, Func Offset: 0
	// Line 357, Address: 0x14bce4, Func Offset: 0x4
	// Line 356, Address: 0x14bce8, Func Offset: 0x8
	// Line 357, Address: 0x14bcec, Func Offset: 0xc
	// Line 358, Address: 0x14bcf4, Func Offset: 0x14
	// Line 359, Address: 0x14bd08, Func Offset: 0x28
	// Line 358, Address: 0x14bd0c, Func Offset: 0x2c
	// Line 359, Address: 0x14bd10, Func Offset: 0x30
	// Line 358, Address: 0x14bd24, Func Offset: 0x44
	// Line 359, Address: 0x14bd28, Func Offset: 0x48
	// Line 358, Address: 0x14bd2c, Func Offset: 0x4c
	// Line 359, Address: 0x14bd30, Func Offset: 0x50
	// Line 358, Address: 0x14bd48, Func Offset: 0x68
	// Line 359, Address: 0x14bd4c, Func Offset: 0x6c
	// Line 358, Address: 0x14bd5c, Func Offset: 0x7c
	// Line 359, Address: 0x14bd60, Func Offset: 0x80
	// Line 358, Address: 0x14bd70, Func Offset: 0x90
	// Line 359, Address: 0x14bd74, Func Offset: 0x94
	// Line 358, Address: 0x14bd84, Func Offset: 0xa4
	// Line 359, Address: 0x14bd88, Func Offset: 0xa8
	// Line 358, Address: 0x14bd98, Func Offset: 0xb8
	// Line 359, Address: 0x14bd9c, Func Offset: 0xbc
	// Line 358, Address: 0x14bdac, Func Offset: 0xcc
	// Line 359, Address: 0x14bdb0, Func Offset: 0xd0
	// Line 358, Address: 0x14bdcc, Func Offset: 0xec
	// Line 359, Address: 0x14bdd4, Func Offset: 0xf4
	// Line 358, Address: 0x14be04, Func Offset: 0x124
	// Line 359, Address: 0x14be08, Func Offset: 0x128
	// Line 361, Address: 0x14be10, Func Offset: 0x130
	// Line 359, Address: 0x14be14, Func Offset: 0x134
	// Line 361, Address: 0x14be18, Func Offset: 0x138
	// Line 359, Address: 0x14be1c, Func Offset: 0x13c
	// Line 358, Address: 0x14be20, Func Offset: 0x140
	// Line 359, Address: 0x14be24, Func Offset: 0x144
	// Line 358, Address: 0x14be34, Func Offset: 0x154
	// Line 359, Address: 0x14be38, Func Offset: 0x158
	// Line 358, Address: 0x14be48, Func Offset: 0x168
	// Line 359, Address: 0x14be4c, Func Offset: 0x16c
	// Line 358, Address: 0x14be5c, Func Offset: 0x17c
	// Line 359, Address: 0x14be60, Func Offset: 0x180
	// Line 358, Address: 0x14be70, Func Offset: 0x190
	// Line 359, Address: 0x14be74, Func Offset: 0x194
	// Line 362, Address: 0x14be88, Func Offset: 0x1a8
	// Func End, Address: 0x14be90, Func Offset: 0x1b0
}

// 
// Start address: 0x14be90
unsigned int mt_rand()
{
	unsigned int y;
	unsigned int* p;
	int j;
	// Line 370, Address: 0x14be90, Func Offset: 0
	// Line 375, Address: 0x14bea8, Func Offset: 0x18
	// Line 372, Address: 0x14beb0, Func Offset: 0x20
	// Line 375, Address: 0x14beb4, Func Offset: 0x24
	// Line 378, Address: 0x14beb8, Func Offset: 0x28
	// Line 372, Address: 0x14bebc, Func Offset: 0x2c
	// Line 376, Address: 0x14bec0, Func Offset: 0x30
	// Line 378, Address: 0x14bec4, Func Offset: 0x34
	// Line 379, Address: 0x14bed0, Func Offset: 0x40
	// Line 378, Address: 0x14bed8, Func Offset: 0x48
	// Line 379, Address: 0x14bedc, Func Offset: 0x4c
	// Line 381, Address: 0x14bf20, Func Offset: 0x90
	// Line 382, Address: 0x14bf30, Func Offset: 0xa0
	// Line 381, Address: 0x14bf34, Func Offset: 0xa4
	// Line 382, Address: 0x14bf3c, Func Offset: 0xac
	// Line 384, Address: 0x14bf88, Func Offset: 0xf8
	// Line 385, Address: 0x14bfc4, Func Offset: 0x134
	// Line 386, Address: 0x14bfc8, Func Offset: 0x138
	// Line 390, Address: 0x14bfd0, Func Offset: 0x140
	// Line 391, Address: 0x14bfd8, Func Offset: 0x148
	// Line 386, Address: 0x14bfdc, Func Offset: 0x14c
	// Line 389, Address: 0x14bfec, Func Offset: 0x15c
	// Line 390, Address: 0x14bff4, Func Offset: 0x164
	// Line 391, Address: 0x14c000, Func Offset: 0x170
	// Line 392, Address: 0x14c00c, Func Offset: 0x17c
	// Line 395, Address: 0x14c010, Func Offset: 0x180
	// Func End, Address: 0x14c018, Func Offset: 0x188
}

// 
// Start address: 0x14c020
int sgMathRandI()
{
	// Line 401, Address: 0x14c020, Func Offset: 0
	// Line 402, Address: 0x14c028, Func Offset: 0x8
	// Line 403, Address: 0x14c030, Func Offset: 0x10
	// Line 402, Address: 0x14c034, Func Offset: 0x14
	// Line 403, Address: 0x14c038, Func Offset: 0x18
	// Func End, Address: 0x14c040, Func Offset: 0x20
}

// 
// Start address: 0x14c040
float sgMathRandF()
{
	// Line 409, Address: 0x14c040, Func Offset: 0
	// Line 410, Address: 0x14c048, Func Offset: 0x8
	// Line 411, Address: 0x14c054, Func Offset: 0x14
	// Line 410, Address: 0x14c058, Func Offset: 0x18
	// Line 411, Address: 0x14c078, Func Offset: 0x38
	// Func End, Address: 0x14c080, Func Offset: 0x40
}

// 
// Start address: 0x14c080
float sgMathRandFs()
{
	unsigned int r;
	float f;
	// Line 417, Address: 0x14c080, Func Offset: 0
	// Line 418, Address: 0x14c088, Func Offset: 0x8
	// Line 419, Address: 0x14c090, Func Offset: 0x10
	// Line 420, Address: 0x14c0ac, Func Offset: 0x2c
	// Line 422, Address: 0x14c0c0, Func Offset: 0x40
	// Func End, Address: 0x14c0cc, Func Offset: 0x4c
}

// 
// Start address: 0x14c0d0
float sgMathNoise1fSub(float limit, float rate)
{
	// Line 430, Address: 0x14c0d0, Func Offset: 0
	// Line 431, Address: 0x14c0d8, Func Offset: 0x8
	// Line 430, Address: 0x14c0dc, Func Offset: 0xc
	// Line 431, Address: 0x14c0e4, Func Offset: 0x14
	// Line 430, Address: 0x14c0e8, Func Offset: 0x18
	// Line 431, Address: 0x14c0ec, Func Offset: 0x1c
	// Line 432, Address: 0x14c108, Func Offset: 0x38
	// Line 433, Address: 0x14c10c, Func Offset: 0x3c
	// Line 434, Address: 0x14c110, Func Offset: 0x40
	// Line 435, Address: 0x14c120, Func Offset: 0x50
	// Line 434, Address: 0x14c124, Func Offset: 0x54
	// Line 435, Address: 0x14c140, Func Offset: 0x70
	// Func End, Address: 0x14c150, Func Offset: 0x80
}

// 
// Start address: 0x14c150
float sgMathNoise1f(float* p_base, float* p_add, float normal, float limit, float rate, float t_rate, float a_rate)
{
	// Line 458, Address: 0x14c150, Func Offset: 0
	// Line 459, Address: 0x14c178, Func Offset: 0x28
	// Line 461, Address: 0x14c1a8, Func Offset: 0x58
	// Line 462, Address: 0x14c1b8, Func Offset: 0x68
	// Func End, Address: 0x14c1d8, Func Offset: 0x88
}

