

typedef unsigned int type_0[12];
typedef float type_1[4];
typedef float type_2[4];
typedef float type_3[4][4];
typedef unsigned int type_4[8];

unsigned int atandata[12];
unsigned int sincosdata[8];
int rand_seed;
int rand_seed_stack;

float shAngleRegulate();
float shAtanV();
float shAtan2();
void shAtan_asm();
void sh_ecossin();
float shSinF();
float shCosF();
void shSinCosV();
void shSinCosV_Scale();
void shRotVectorY();
void shRotMatrixX();
void shRotMatrixY();
void shRotMatrixZ();
void sh_mulmatrix();
void shSrand(int seed);
void shPushRandSeed(int seed);
int shPopRandSeed();
int shRandI();
float shRandF();
void shRandF_asm();
void shRandV_Scale();
void shRandV_asm();
float shSway1f();
void shSway1f_asm();
void shCreateNormal();
void shSetMiniMaxN();
char shScreenClipI(int* v0);
char shScreenClipF(float* v0);
void shQzero();
void shFill();
void shMulMatrix(float m0[4], float m1[4], float m2[4]);

// 
// Start address: 0x16e970
float shAngleRegulate()
{
	// Line 64, Address: 0x16e970, Func Offset: 0
	// Line 65, Address: 0x16e974, Func Offset: 0x4
	// Line 66, Address: 0x16e978, Func Offset: 0x8
	// Line 67, Address: 0x16e97c, Func Offset: 0xc
	// Line 68, Address: 0x16e980, Func Offset: 0x10
	// Line 69, Address: 0x16e984, Func Offset: 0x14
	// Line 71, Address: 0x16e98c, Func Offset: 0x1c
	// Line 72, Address: 0x16e990, Func Offset: 0x20
	// Line 73, Address: 0x16e994, Func Offset: 0x24
	// Line 74, Address: 0x16e998, Func Offset: 0x28
	// Line 75, Address: 0x16e99c, Func Offset: 0x2c
	// Line 78, Address: 0x16e9a4, Func Offset: 0x34
	// Line 79, Address: 0x16e9a8, Func Offset: 0x38
	// Line 80, Address: 0x16e9ac, Func Offset: 0x3c
	// Line 81, Address: 0x16e9b0, Func Offset: 0x40
	// Line 82, Address: 0x16e9b4, Func Offset: 0x44
	// Line 84, Address: 0x16e9b8, Func Offset: 0x48
	// Func End, Address: 0x16e9c0, Func Offset: 0x50
}

// 
// Start address: 0x16e9c0
float shAtanV()
{
	// Line 109, Address: 0x16e9c0, Func Offset: 0
	// Line 110, Address: 0x16e9c4, Func Offset: 0x4
	// Line 112, Address: 0x16e9cc, Func Offset: 0xc
	// Line 113, Address: 0x16e9d0, Func Offset: 0x10
	// Func End, Address: 0x16e9d8, Func Offset: 0x18
}

// 
// Start address: 0x16e9e0
float shAtan2()
{
	// Line 128, Address: 0x16e9e0, Func Offset: 0
	// Line 129, Address: 0x16e9e4, Func Offset: 0x4
	// Line 130, Address: 0x16e9e8, Func Offset: 0x8
	// Line 131, Address: 0x16e9ec, Func Offset: 0xc
	// Line 132, Address: 0x16e9f0, Func Offset: 0x10
	// Line 134, Address: 0x16e9f8, Func Offset: 0x18
	// Line 135, Address: 0x16e9fc, Func Offset: 0x1c
	// Func End, Address: 0x16ea04, Func Offset: 0x24
}

// 
// Start address: 0x16ea10
void shAtan_asm()
{
	// Line 149, Address: 0x16ea10, Func Offset: 0
	// Line 150, Address: 0x16ea14, Func Offset: 0x4
	// Line 151, Address: 0x16ea18, Func Offset: 0x8
	// Line 152, Address: 0x16ea1c, Func Offset: 0xc
	// Line 153, Address: 0x16ea20, Func Offset: 0x10
	// Line 154, Address: 0x16ea24, Func Offset: 0x14
	// Line 155, Address: 0x16ea28, Func Offset: 0x18
	// Line 156, Address: 0x16ea2c, Func Offset: 0x1c
	// Line 157, Address: 0x16ea30, Func Offset: 0x20
	// Line 158, Address: 0x16ea34, Func Offset: 0x24
	// Line 159, Address: 0x16ea38, Func Offset: 0x28
	// Line 161, Address: 0x16ea40, Func Offset: 0x30
	// Line 162, Address: 0x16ea44, Func Offset: 0x34
	// Line 163, Address: 0x16ea48, Func Offset: 0x38
	// Line 164, Address: 0x16ea4c, Func Offset: 0x3c
	// Line 166, Address: 0x16ea50, Func Offset: 0x40
	// Line 167, Address: 0x16ea54, Func Offset: 0x44
	// Line 169, Address: 0x16ea5c, Func Offset: 0x4c
	// Line 170, Address: 0x16ea60, Func Offset: 0x50
	// Line 171, Address: 0x16ea64, Func Offset: 0x54
	// Line 172, Address: 0x16ea68, Func Offset: 0x58
	// Line 173, Address: 0x16ea6c, Func Offset: 0x5c
	// Line 174, Address: 0x16ea70, Func Offset: 0x60
	// Line 175, Address: 0x16ea74, Func Offset: 0x64
	// Line 176, Address: 0x16ea78, Func Offset: 0x68
	// Line 177, Address: 0x16ea7c, Func Offset: 0x6c
	// Line 178, Address: 0x16ea80, Func Offset: 0x70
	// Line 179, Address: 0x16ea84, Func Offset: 0x74
	// Line 180, Address: 0x16ea88, Func Offset: 0x78
	// Line 181, Address: 0x16ea8c, Func Offset: 0x7c
	// Line 182, Address: 0x16ea90, Func Offset: 0x80
	// Line 183, Address: 0x16ea94, Func Offset: 0x84
	// Line 184, Address: 0x16ea98, Func Offset: 0x88
	// Line 185, Address: 0x16ea9c, Func Offset: 0x8c
	// Line 186, Address: 0x16eaa0, Func Offset: 0x90
	// Line 187, Address: 0x16eaa4, Func Offset: 0x94
	// Line 188, Address: 0x16eaa8, Func Offset: 0x98
	// Line 189, Address: 0x16eaac, Func Offset: 0x9c
	// Line 190, Address: 0x16eab0, Func Offset: 0xa0
	// Line 191, Address: 0x16eab4, Func Offset: 0xa4
	// Line 192, Address: 0x16eab8, Func Offset: 0xa8
	// Line 193, Address: 0x16eabc, Func Offset: 0xac
	// Line 194, Address: 0x16eac0, Func Offset: 0xb0
	// Line 195, Address: 0x16eac4, Func Offset: 0xb4
	// Line 196, Address: 0x16eac8, Func Offset: 0xb8
	// Line 197, Address: 0x16eacc, Func Offset: 0xbc
	// Line 198, Address: 0x16ead0, Func Offset: 0xc0
	// Line 199, Address: 0x16ead4, Func Offset: 0xc4
	// Line 200, Address: 0x16ead8, Func Offset: 0xc8
	// Line 203, Address: 0x16eae0, Func Offset: 0xd0
	// Line 204, Address: 0x16eae4, Func Offset: 0xd4
	// Line 207, Address: 0x16eaec, Func Offset: 0xdc
	// Line 210, Address: 0x16eaf4, Func Offset: 0xe4
	// Line 211, Address: 0x16eaf8, Func Offset: 0xe8
	// Line 212, Address: 0x16eafc, Func Offset: 0xec
	// Line 213, Address: 0x16eb00, Func Offset: 0xf0
	// Func End, Address: 0x16eb08, Func Offset: 0xf8
}

// 
// Start address: 0x16eb10
void sh_ecossin()
{
	// Line 226, Address: 0x16eb10, Func Offset: 0
	// Line 227, Address: 0x16eb14, Func Offset: 0x4
	// Line 228, Address: 0x16eb18, Func Offset: 0x8
	// Line 229, Address: 0x16eb1c, Func Offset: 0xc
	// Line 230, Address: 0x16eb20, Func Offset: 0x10
	// Line 231, Address: 0x16eb24, Func Offset: 0x14
	// Line 232, Address: 0x16eb28, Func Offset: 0x18
	// Line 234, Address: 0x16eb30, Func Offset: 0x20
	// Line 235, Address: 0x16eb34, Func Offset: 0x24
	// Line 236, Address: 0x16eb38, Func Offset: 0x28
	// Line 237, Address: 0x16eb3c, Func Offset: 0x2c
	// Line 238, Address: 0x16eb40, Func Offset: 0x30
	// Line 239, Address: 0x16eb44, Func Offset: 0x34
	// Line 240, Address: 0x16eb48, Func Offset: 0x38
	// Line 241, Address: 0x16eb4c, Func Offset: 0x3c
	// Line 242, Address: 0x16eb50, Func Offset: 0x40
	// Line 243, Address: 0x16eb54, Func Offset: 0x44
	// Line 246, Address: 0x16eb5c, Func Offset: 0x4c
	// Line 247, Address: 0x16eb60, Func Offset: 0x50
	// Line 248, Address: 0x16eb64, Func Offset: 0x54
	// Line 249, Address: 0x16eb68, Func Offset: 0x58
	// Line 250, Address: 0x16eb6c, Func Offset: 0x5c
	// Line 251, Address: 0x16eb70, Func Offset: 0x60
	// Line 252, Address: 0x16eb74, Func Offset: 0x64
	// Line 253, Address: 0x16eb78, Func Offset: 0x68
	// Line 254, Address: 0x16eb7c, Func Offset: 0x6c
	// Line 255, Address: 0x16eb80, Func Offset: 0x70
	// Line 256, Address: 0x16eb84, Func Offset: 0x74
	// Line 257, Address: 0x16eb88, Func Offset: 0x78
	// Line 258, Address: 0x16eb8c, Func Offset: 0x7c
	// Line 259, Address: 0x16eb90, Func Offset: 0x80
	// Line 260, Address: 0x16eb94, Func Offset: 0x84
	// Line 262, Address: 0x16eb98, Func Offset: 0x88
	// Line 263, Address: 0x16eb9c, Func Offset: 0x8c
	// Line 264, Address: 0x16eba0, Func Offset: 0x90
	// Line 265, Address: 0x16eba4, Func Offset: 0x94
	// Line 266, Address: 0x16eba8, Func Offset: 0x98
	// Line 267, Address: 0x16ebac, Func Offset: 0x9c
	// Line 268, Address: 0x16ebb0, Func Offset: 0xa0
	// Line 269, Address: 0x16ebb4, Func Offset: 0xa4
	// Line 270, Address: 0x16ebb8, Func Offset: 0xa8
	// Line 271, Address: 0x16ebbc, Func Offset: 0xac
	// Line 272, Address: 0x16ebc0, Func Offset: 0xb0
	// Line 273, Address: 0x16ebc4, Func Offset: 0xb4
	// Line 274, Address: 0x16ebc8, Func Offset: 0xb8
	// Line 275, Address: 0x16ebcc, Func Offset: 0xbc
	// Line 276, Address: 0x16ebd0, Func Offset: 0xc0
	// Line 277, Address: 0x16ebd4, Func Offset: 0xc4
	// Line 278, Address: 0x16ebd8, Func Offset: 0xc8
	// Line 281, Address: 0x16ebe0, Func Offset: 0xd0
	// Line 283, Address: 0x16ebe8, Func Offset: 0xd8
	// Line 285, Address: 0x16ebec, Func Offset: 0xdc
	// Func End, Address: 0x16ebf4, Func Offset: 0xe4
}

// 
// Start address: 0x16ec00
float shSinF()
{
	// Line 297, Address: 0x16ec00, Func Offset: 0
	// Line 298, Address: 0x16ec04, Func Offset: 0x4
	// Line 299, Address: 0x16ec08, Func Offset: 0x8
	// Line 300, Address: 0x16ec0c, Func Offset: 0xc
	// Line 301, Address: 0x16ec10, Func Offset: 0x10
	// Line 303, Address: 0x16ec18, Func Offset: 0x18
	// Line 304, Address: 0x16ec1c, Func Offset: 0x1c
	// Line 305, Address: 0x16ec20, Func Offset: 0x20
	// Line 306, Address: 0x16ec24, Func Offset: 0x24
	// Line 307, Address: 0x16ec28, Func Offset: 0x28
	// Line 308, Address: 0x16ec2c, Func Offset: 0x2c
	// Line 309, Address: 0x16ec30, Func Offset: 0x30
	// Line 310, Address: 0x16ec34, Func Offset: 0x34
	// Line 311, Address: 0x16ec38, Func Offset: 0x38
	// Line 312, Address: 0x16ec3c, Func Offset: 0x3c
	// Line 314, Address: 0x16ec44, Func Offset: 0x44
	// Line 315, Address: 0x16ec48, Func Offset: 0x48
	// Line 316, Address: 0x16ec4c, Func Offset: 0x4c
	// Line 317, Address: 0x16ec50, Func Offset: 0x50
	// Line 320, Address: 0x16ec58, Func Offset: 0x58
	// Line 321, Address: 0x16ec5c, Func Offset: 0x5c
	// Line 322, Address: 0x16ec60, Func Offset: 0x60
	// Line 323, Address: 0x16ec64, Func Offset: 0x64
	// Line 324, Address: 0x16ec68, Func Offset: 0x68
	// Line 325, Address: 0x16ec6c, Func Offset: 0x6c
	// Line 326, Address: 0x16ec70, Func Offset: 0x70
	// Line 327, Address: 0x16ec74, Func Offset: 0x74
	// Line 328, Address: 0x16ec78, Func Offset: 0x78
	// Line 329, Address: 0x16ec7c, Func Offset: 0x7c
	// Line 330, Address: 0x16ec80, Func Offset: 0x80
	// Line 331, Address: 0x16ec84, Func Offset: 0x84
	// Line 332, Address: 0x16ec88, Func Offset: 0x88
	// Line 333, Address: 0x16ec8c, Func Offset: 0x8c
	// Line 334, Address: 0x16ec90, Func Offset: 0x90
	// Line 335, Address: 0x16ec94, Func Offset: 0x94
	// Line 336, Address: 0x16ec98, Func Offset: 0x98
	// Line 337, Address: 0x16ec9c, Func Offset: 0x9c
	// Line 340, Address: 0x16eca4, Func Offset: 0xa4
	// Func End, Address: 0x16ecac, Func Offset: 0xac
}

// 
// Start address: 0x16ecb0
float shCosF()
{
	// Line 352, Address: 0x16ecb0, Func Offset: 0
	// Line 353, Address: 0x16ecb4, Func Offset: 0x4
	// Line 354, Address: 0x16ecb8, Func Offset: 0x8
	// Line 355, Address: 0x16ecbc, Func Offset: 0xc
	// Line 356, Address: 0x16ecc0, Func Offset: 0x10
	// Line 357, Address: 0x16ecc4, Func Offset: 0x14
	// Line 358, Address: 0x16ecc8, Func Offset: 0x18
	// Line 360, Address: 0x16ecd0, Func Offset: 0x20
	// Line 361, Address: 0x16ecd4, Func Offset: 0x24
	// Line 362, Address: 0x16ecd8, Func Offset: 0x28
	// Line 363, Address: 0x16ecdc, Func Offset: 0x2c
	// Line 364, Address: 0x16ece0, Func Offset: 0x30
	// Line 365, Address: 0x16ece4, Func Offset: 0x34
	// Line 366, Address: 0x16ece8, Func Offset: 0x38
	// Line 367, Address: 0x16ecec, Func Offset: 0x3c
	// Line 368, Address: 0x16ecf0, Func Offset: 0x40
	// Line 369, Address: 0x16ecf4, Func Offset: 0x44
	// Line 372, Address: 0x16ecfc, Func Offset: 0x4c
	// Line 373, Address: 0x16ed00, Func Offset: 0x50
	// Line 374, Address: 0x16ed04, Func Offset: 0x54
	// Line 375, Address: 0x16ed08, Func Offset: 0x58
	// Line 376, Address: 0x16ed0c, Func Offset: 0x5c
	// Line 377, Address: 0x16ed10, Func Offset: 0x60
	// Line 378, Address: 0x16ed14, Func Offset: 0x64
	// Line 379, Address: 0x16ed18, Func Offset: 0x68
	// Line 380, Address: 0x16ed1c, Func Offset: 0x6c
	// Line 381, Address: 0x16ed20, Func Offset: 0x70
	// Line 382, Address: 0x16ed24, Func Offset: 0x74
	// Line 383, Address: 0x16ed28, Func Offset: 0x78
	// Line 384, Address: 0x16ed2c, Func Offset: 0x7c
	// Line 385, Address: 0x16ed30, Func Offset: 0x80
	// Line 386, Address: 0x16ed34, Func Offset: 0x84
	// Func End, Address: 0x16ed3c, Func Offset: 0x8c
}

// 
// Start address: 0x16ed40
void shSinCosV()
{
	// Line 415, Address: 0x16ed40, Func Offset: 0
	// Line 416, Address: 0x16ed44, Func Offset: 0x4
	// Line 418, Address: 0x16ed4c, Func Offset: 0xc
	// Line 419, Address: 0x16ed50, Func Offset: 0x10
	// Line 420, Address: 0x16ed54, Func Offset: 0x14
	// Line 421, Address: 0x16ed58, Func Offset: 0x18
	// Func End, Address: 0x16ed60, Func Offset: 0x20
}

// 
// Start address: 0x16ed60
void shSinCosV_Scale()
{
	// Line 455, Address: 0x16ed60, Func Offset: 0
	// Line 456, Address: 0x16ed64, Func Offset: 0x4
	// Line 457, Address: 0x16ed68, Func Offset: 0x8
	// Line 459, Address: 0x16ed70, Func Offset: 0x10
	// Line 460, Address: 0x16ed74, Func Offset: 0x14
	// Line 461, Address: 0x16ed78, Func Offset: 0x18
	// Line 462, Address: 0x16ed7c, Func Offset: 0x1c
	// Line 463, Address: 0x16ed80, Func Offset: 0x20
	// Line 464, Address: 0x16ed84, Func Offset: 0x24
	// Line 465, Address: 0x16ed88, Func Offset: 0x28
	// Func End, Address: 0x16ed90, Func Offset: 0x30
}

// 
// Start address: 0x16ed90
void shRotVectorY()
{
	// Line 478, Address: 0x16ed90, Func Offset: 0
	// Line 479, Address: 0x16ed94, Func Offset: 0x4
	// Line 482, Address: 0x16ed9c, Func Offset: 0xc
	// Line 483, Address: 0x16eda0, Func Offset: 0x10
	// Line 484, Address: 0x16eda4, Func Offset: 0x14
	// Line 485, Address: 0x16eda8, Func Offset: 0x18
	// Line 486, Address: 0x16edac, Func Offset: 0x1c
	// Line 487, Address: 0x16edb0, Func Offset: 0x20
	// Line 488, Address: 0x16edb4, Func Offset: 0x24
	// Func End, Address: 0x16edbc, Func Offset: 0x2c
}

// 
// Start address: 0x16edc0
void shRotMatrixX()
{
	// Line 502, Address: 0x16edc0, Func Offset: 0
	// Line 503, Address: 0x16edc4, Func Offset: 0x4
	// Line 506, Address: 0x16edcc, Func Offset: 0xc
	// Line 507, Address: 0x16edd0, Func Offset: 0x10
	// Line 508, Address: 0x16edd4, Func Offset: 0x14
	// Line 509, Address: 0x16edd8, Func Offset: 0x18
	// Line 511, Address: 0x16eddc, Func Offset: 0x1c
	// Line 512, Address: 0x16ede0, Func Offset: 0x20
	// Line 513, Address: 0x16ede4, Func Offset: 0x24
	// Line 514, Address: 0x16ede8, Func Offset: 0x28
	// Line 516, Address: 0x16edf0, Func Offset: 0x30
	// Func End, Address: 0x16edf8, Func Offset: 0x38
}

// 
// Start address: 0x16ee00
void shRotMatrixY()
{
	// Line 530, Address: 0x16ee00, Func Offset: 0
	// Line 531, Address: 0x16ee04, Func Offset: 0x4
	// Line 534, Address: 0x16ee0c, Func Offset: 0xc
	// Line 535, Address: 0x16ee10, Func Offset: 0x10
	// Line 536, Address: 0x16ee14, Func Offset: 0x14
	// Line 537, Address: 0x16ee18, Func Offset: 0x18
	// Line 539, Address: 0x16ee1c, Func Offset: 0x1c
	// Line 540, Address: 0x16ee20, Func Offset: 0x20
	// Line 541, Address: 0x16ee24, Func Offset: 0x24
	// Line 542, Address: 0x16ee28, Func Offset: 0x28
	// Line 544, Address: 0x16ee30, Func Offset: 0x30
	// Func End, Address: 0x16ee38, Func Offset: 0x38
}

// 
// Start address: 0x16ee40
void shRotMatrixZ()
{
	// Line 558, Address: 0x16ee40, Func Offset: 0
	// Line 559, Address: 0x16ee44, Func Offset: 0x4
	// Line 562, Address: 0x16ee4c, Func Offset: 0xc
	// Line 563, Address: 0x16ee50, Func Offset: 0x10
	// Line 564, Address: 0x16ee54, Func Offset: 0x14
	// Line 566, Address: 0x16ee58, Func Offset: 0x18
	// Line 567, Address: 0x16ee5c, Func Offset: 0x1c
	// Line 568, Address: 0x16ee60, Func Offset: 0x20
	// Line 570, Address: 0x16ee68, Func Offset: 0x28
	// Func End, Address: 0x16ee70, Func Offset: 0x30
}

// 
// Start address: 0x16ee70
void sh_mulmatrix()
{
	// Line 585, Address: 0x16ee70, Func Offset: 0
	// Line 586, Address: 0x16ee74, Func Offset: 0x4
	// Line 587, Address: 0x16ee78, Func Offset: 0x8
	// Line 588, Address: 0x16ee7c, Func Offset: 0xc
	// Line 589, Address: 0x16ee80, Func Offset: 0x10
	// Line 590, Address: 0x16ee84, Func Offset: 0x14
	// Line 591, Address: 0x16ee88, Func Offset: 0x18
	// Line 592, Address: 0x16ee8c, Func Offset: 0x1c
	// Line 593, Address: 0x16ee90, Func Offset: 0x20
	// Line 594, Address: 0x16ee94, Func Offset: 0x24
	// Line 595, Address: 0x16ee98, Func Offset: 0x28
	// Line 596, Address: 0x16ee9c, Func Offset: 0x2c
	// Line 597, Address: 0x16eea0, Func Offset: 0x30
	// Line 598, Address: 0x16eea4, Func Offset: 0x34
	// Line 599, Address: 0x16eea8, Func Offset: 0x38
	// Line 600, Address: 0x16eeac, Func Offset: 0x3c
	// Line 601, Address: 0x16eeb0, Func Offset: 0x40
	// Line 602, Address: 0x16eeb4, Func Offset: 0x44
	// Line 603, Address: 0x16eeb8, Func Offset: 0x48
	// Line 604, Address: 0x16eebc, Func Offset: 0x4c
	// Line 605, Address: 0x16eec0, Func Offset: 0x50
	// Line 606, Address: 0x16eec4, Func Offset: 0x54
	// Line 607, Address: 0x16eec8, Func Offset: 0x58
	// Line 608, Address: 0x16eecc, Func Offset: 0x5c
	// Func End, Address: 0x16eed4, Func Offset: 0x64
}

// 
// Start address: 0x16eee0
void shSrand(int seed)
{
	// Line 622, Address: 0x16eee0, Func Offset: 0
	// Line 623, Address: 0x16eee8, Func Offset: 0x8
	// Func End, Address: 0x16eef0, Func Offset: 0x10
}

// 
// Start address: 0x16eef0
void shPushRandSeed(int seed)
{
	// Line 637, Address: 0x16eef0, Func Offset: 0
	// Line 638, Address: 0x16ef00, Func Offset: 0x10
	// Line 639, Address: 0x16ef08, Func Offset: 0x18
	// Func End, Address: 0x16ef10, Func Offset: 0x20
}

// 
// Start address: 0x16ef10
int shPopRandSeed()
{
	int seed;
	// Line 645, Address: 0x16ef10, Func Offset: 0
	// Line 646, Address: 0x16ef18, Func Offset: 0x8
	// Line 648, Address: 0x16ef28, Func Offset: 0x18
	// Func End, Address: 0x16ef30, Func Offset: 0x20
}

// 
// Start address: 0x16ef30
int shRandI()
{
	// Line 673, Address: 0x16ef30, Func Offset: 0
	// Line 674, Address: 0x16ef58, Func Offset: 0x28
	// Func End, Address: 0x16ef60, Func Offset: 0x30
}

// 
// Start address: 0x16ef60
float shRandF()
{
	// Line 697, Address: 0x16ef60, Func Offset: 0
	// Line 698, Address: 0x16ef64, Func Offset: 0x4
	// Line 700, Address: 0x16ef6c, Func Offset: 0xc
	// Func End, Address: 0x16ef74, Func Offset: 0x14
}

// 
// Start address: 0x16ef80
void shRandF_asm()
{
	// Line 711, Address: 0x16ef80, Func Offset: 0
	// Line 712, Address: 0x16efa8, Func Offset: 0x28
	// Line 713, Address: 0x16efac, Func Offset: 0x2c
	// Line 714, Address: 0x16efb0, Func Offset: 0x30
	// Line 715, Address: 0x16efb4, Func Offset: 0x34
	// Line 716, Address: 0x16efb8, Func Offset: 0x38
	// Line 717, Address: 0x16efbc, Func Offset: 0x3c
	// Func End, Address: 0x16efc4, Func Offset: 0x44
}

// 
// Start address: 0x16efd0
void shRandV_Scale()
{
	// Line 766, Address: 0x16efd0, Func Offset: 0
	// Line 767, Address: 0x16efd4, Func Offset: 0x4
	// Line 769, Address: 0x16efdc, Func Offset: 0xc
	// Line 770, Address: 0x16efe0, Func Offset: 0x10
	// Line 771, Address: 0x16efe4, Func Offset: 0x14
	// Line 772, Address: 0x16efe8, Func Offset: 0x18
	// Line 773, Address: 0x16efec, Func Offset: 0x1c
	// Line 774, Address: 0x16eff0, Func Offset: 0x20
	// Func End, Address: 0x16eff8, Func Offset: 0x28
}

// 
// Start address: 0x16f000
void shRandV_asm()
{
	// Line 786, Address: 0x16f000, Func Offset: 0
	// Line 787, Address: 0x16f008, Func Offset: 0x8
	// Line 788, Address: 0x16f00c, Func Offset: 0xc
	// Line 789, Address: 0x16f010, Func Offset: 0x10
	// Line 790, Address: 0x16f014, Func Offset: 0x14
	// Line 791, Address: 0x16f018, Func Offset: 0x18
	// Line 792, Address: 0x16f01c, Func Offset: 0x1c
	// Line 793, Address: 0x16f020, Func Offset: 0x20
	// Line 794, Address: 0x16f024, Func Offset: 0x24
	// Line 795, Address: 0x16f028, Func Offset: 0x28
	// Line 796, Address: 0x16f02c, Func Offset: 0x2c
	// Line 797, Address: 0x16f030, Func Offset: 0x30
	// Line 798, Address: 0x16f034, Func Offset: 0x34
	// Line 799, Address: 0x16f038, Func Offset: 0x38
	// Line 800, Address: 0x16f03c, Func Offset: 0x3c
	// Line 801, Address: 0x16f040, Func Offset: 0x40
	// Line 802, Address: 0x16f044, Func Offset: 0x44
	// Line 803, Address: 0x16f048, Func Offset: 0x48
	// Line 804, Address: 0x16f04c, Func Offset: 0x4c
	// Line 805, Address: 0x16f050, Func Offset: 0x50
	// Line 806, Address: 0x16f054, Func Offset: 0x54
	// Line 807, Address: 0x16f058, Func Offset: 0x58
	// Line 808, Address: 0x16f05c, Func Offset: 0x5c
	// Line 809, Address: 0x16f060, Func Offset: 0x60
	// Line 810, Address: 0x16f064, Func Offset: 0x64
	// Line 811, Address: 0x16f068, Func Offset: 0x68
	// Line 812, Address: 0x16f06c, Func Offset: 0x6c
	// Line 813, Address: 0x16f070, Func Offset: 0x70
	// Line 814, Address: 0x16f074, Func Offset: 0x74
	// Line 815, Address: 0x16f078, Func Offset: 0x78
	// Func End, Address: 0x16f080, Func Offset: 0x80
}

// 
// Start address: 0x16f080
float shSway1f()
{
	// Line 834, Address: 0x16f080, Func Offset: 0
	// Line 835, Address: 0x16f084, Func Offset: 0x4
	// Line 837, Address: 0x16f08c, Func Offset: 0xc
	// Func End, Address: 0x16f094, Func Offset: 0x14
}

// 
// Start address: 0x16f0a0
void shSway1f_asm()
{
	// Line 851, Address: 0x16f0a0, Func Offset: 0
	// Line 852, Address: 0x16f0a4, Func Offset: 0x4
	// Line 853, Address: 0x16f0a8, Func Offset: 0x8
	// Line 854, Address: 0x16f0ac, Func Offset: 0xc
	// Line 856, Address: 0x16f0b4, Func Offset: 0x14
	// Line 857, Address: 0x16f0dc, Func Offset: 0x3c
	// Line 858, Address: 0x16f0e0, Func Offset: 0x40
	// Line 861, Address: 0x16f0e8, Func Offset: 0x48
	// Line 862, Address: 0x16f110, Func Offset: 0x70
	// Line 863, Address: 0x16f114, Func Offset: 0x74
	// Line 864, Address: 0x16f118, Func Offset: 0x78
	// Line 865, Address: 0x16f11c, Func Offset: 0x7c
	// Line 866, Address: 0x16f120, Func Offset: 0x80
	// Line 867, Address: 0x16f124, Func Offset: 0x84
	// Line 868, Address: 0x16f128, Func Offset: 0x88
	// Line 869, Address: 0x16f12c, Func Offset: 0x8c
	// Line 870, Address: 0x16f130, Func Offset: 0x90
	// Line 871, Address: 0x16f134, Func Offset: 0x94
	// Line 872, Address: 0x16f138, Func Offset: 0x98
	// Line 873, Address: 0x16f13c, Func Offset: 0x9c
	// Func End, Address: 0x16f144, Func Offset: 0xa4
}

// 
// Start address: 0x16f150
void shCreateNormal()
{
	// Line 897, Address: 0x16f150, Func Offset: 0
	// Line 898, Address: 0x16f154, Func Offset: 0x4
	// Line 899, Address: 0x16f158, Func Offset: 0x8
	// Line 900, Address: 0x16f15c, Func Offset: 0xc
	// Line 901, Address: 0x16f160, Func Offset: 0x10
	// Line 902, Address: 0x16f164, Func Offset: 0x14
	// Line 903, Address: 0x16f168, Func Offset: 0x18
	// Line 904, Address: 0x16f16c, Func Offset: 0x1c
	// Line 905, Address: 0x16f170, Func Offset: 0x20
	// Line 906, Address: 0x16f174, Func Offset: 0x24
	// Line 907, Address: 0x16f178, Func Offset: 0x28
	// Line 908, Address: 0x16f17c, Func Offset: 0x2c
	// Line 909, Address: 0x16f180, Func Offset: 0x30
	// Line 910, Address: 0x16f184, Func Offset: 0x34
	// Line 911, Address: 0x16f188, Func Offset: 0x38
	// Func End, Address: 0x16f190, Func Offset: 0x40
}

// 
// Start address: 0x16f190
void shSetMiniMaxN()
{
	// Line 927, Address: 0x16f190, Func Offset: 0
	// Line 928, Address: 0x16f194, Func Offset: 0x4
	// Line 929, Address: 0x16f198, Func Offset: 0x8
	// Line 932, Address: 0x16f1a0, Func Offset: 0x10
	// Line 933, Address: 0x16f1a4, Func Offset: 0x14
	// Line 934, Address: 0x16f1a8, Func Offset: 0x18
	// Line 935, Address: 0x16f1ac, Func Offset: 0x1c
	// Line 936, Address: 0x16f1b0, Func Offset: 0x20
	// Line 937, Address: 0x16f1b4, Func Offset: 0x24
	// Line 940, Address: 0x16f1bc, Func Offset: 0x2c
	// Line 941, Address: 0x16f1c0, Func Offset: 0x30
	// Func End, Address: 0x16f1c8, Func Offset: 0x38
}

// 
// Start address: 0x16f1d0
char shScreenClipI(int* v0)
{
	int x;
	// Line 1014, Address: 0x16f1d0, Func Offset: 0
	// Line 1015, Address: 0x16f1e8, Func Offset: 0x18
	// Line 1016, Address: 0x16f200, Func Offset: 0x30
	// Line 1017, Address: 0x16f218, Func Offset: 0x48
	// Line 1018, Address: 0x16f230, Func Offset: 0x60
	// Line 1019, Address: 0x16f238, Func Offset: 0x68
	// Line 1020, Address: 0x16f260, Func Offset: 0x90
	// Line 1021, Address: 0x16f264, Func Offset: 0x94
	// Func End, Address: 0x16f26c, Func Offset: 0x9c
}

// 
// Start address: 0x16f270
char shScreenClipF(float* v0)
{
	float x;
	// Line 1030, Address: 0x16f270, Func Offset: 0
	// Line 1031, Address: 0x16f288, Func Offset: 0x18
	// Line 1032, Address: 0x16f2b0, Func Offset: 0x40
	// Line 1033, Address: 0x16f2bc, Func Offset: 0x4c
	// Line 1034, Address: 0x16f2d8, Func Offset: 0x68
	// Line 1035, Address: 0x16f2dc, Func Offset: 0x6c
	// Line 1036, Address: 0x16f324, Func Offset: 0xb4
	// Line 1037, Address: 0x16f328, Func Offset: 0xb8
	// Func End, Address: 0x16f330, Func Offset: 0xc0
}

// 
// Start address: 0x16f330
void shQzero()
{
	// Line 1048, Address: 0x16f330, Func Offset: 0
	// Line 1050, Address: 0x16f338, Func Offset: 0x8
	// Line 1052, Address: 0x16f340, Func Offset: 0x10
	// Line 1053, Address: 0x16f344, Func Offset: 0x14
	// Line 1054, Address: 0x16f348, Func Offset: 0x18
	// Line 1056, Address: 0x16f350, Func Offset: 0x20
	// Line 1058, Address: 0x16f354, Func Offset: 0x24
	// Line 1059, Address: 0x16f358, Func Offset: 0x28
	// Line 1060, Address: 0x16f35c, Func Offset: 0x2c
	// Line 1061, Address: 0x16f360, Func Offset: 0x30
	// Line 1062, Address: 0x16f364, Func Offset: 0x34
	// Line 1063, Address: 0x16f368, Func Offset: 0x38
	// Line 1066, Address: 0x16f370, Func Offset: 0x40
	// Line 1067, Address: 0x16f374, Func Offset: 0x44
	// Line 1070, Address: 0x16f37c, Func Offset: 0x4c
	// Line 1071, Address: 0x16f380, Func Offset: 0x50
	// Line 1072, Address: 0x16f384, Func Offset: 0x54
	// Line 1073, Address: 0x16f388, Func Offset: 0x58
	// Line 1074, Address: 0x16f38c, Func Offset: 0x5c
	// Line 1075, Address: 0x16f390, Func Offset: 0x60
	// Line 1078, Address: 0x16f398, Func Offset: 0x68
	// Line 1079, Address: 0x16f39c, Func Offset: 0x6c
	// Line 1080, Address: 0x16f3a0, Func Offset: 0x70
	// Line 1083, Address: 0x16f3a8, Func Offset: 0x78
	// Line 1084, Address: 0x16f3ac, Func Offset: 0x7c
	// Line 1085, Address: 0x16f3b0, Func Offset: 0x80
	// Line 1086, Address: 0x16f3b4, Func Offset: 0x84
	// Line 1087, Address: 0x16f3b8, Func Offset: 0x88
	// Line 1088, Address: 0x16f3bc, Func Offset: 0x8c
	// Line 1091, Address: 0x16f3c4, Func Offset: 0x94
	// Line 1092, Address: 0x16f3c8, Func Offset: 0x98
	// Line 1095, Address: 0x16f3d0, Func Offset: 0xa0
	// Line 1096, Address: 0x16f3d4, Func Offset: 0xa4
	// Line 1097, Address: 0x16f3d8, Func Offset: 0xa8
	// Line 1098, Address: 0x16f3dc, Func Offset: 0xac
	// Line 1099, Address: 0x16f3e0, Func Offset: 0xb0
	// Line 1100, Address: 0x16f3e4, Func Offset: 0xb4
	// Line 1103, Address: 0x16f3ec, Func Offset: 0xbc
	// Func End, Address: 0x16f3f4, Func Offset: 0xc4
}

// 
// Start address: 0x16f400
void shFill()
{
	// Line 1120, Address: 0x16f400, Func Offset: 0
	// Line 1122, Address: 0x16f408, Func Offset: 0x8
	// Line 1123, Address: 0x16f40c, Func Offset: 0xc
	// Line 1124, Address: 0x16f410, Func Offset: 0x10
	// Line 1126, Address: 0x16f418, Func Offset: 0x18
	// Line 1127, Address: 0x16f41c, Func Offset: 0x1c
	// Line 1128, Address: 0x16f420, Func Offset: 0x20
	// Line 1130, Address: 0x16f428, Func Offset: 0x28
	// Line 1132, Address: 0x16f42c, Func Offset: 0x2c
	// Line 1133, Address: 0x16f430, Func Offset: 0x30
	// Line 1134, Address: 0x16f434, Func Offset: 0x34
	// Line 1135, Address: 0x16f438, Func Offset: 0x38
	// Line 1136, Address: 0x16f43c, Func Offset: 0x3c
	// Line 1137, Address: 0x16f440, Func Offset: 0x40
	// Line 1140, Address: 0x16f448, Func Offset: 0x48
	// Line 1141, Address: 0x16f44c, Func Offset: 0x4c
	// Line 1142, Address: 0x16f450, Func Offset: 0x50
	// Line 1144, Address: 0x16f458, Func Offset: 0x58
	// Line 1145, Address: 0x16f45c, Func Offset: 0x5c
	// Line 1147, Address: 0x16f460, Func Offset: 0x60
	// Line 1148, Address: 0x16f464, Func Offset: 0x64
	// Line 1151, Address: 0x16f46c, Func Offset: 0x6c
	// Line 1152, Address: 0x16f470, Func Offset: 0x70
	// Line 1153, Address: 0x16f474, Func Offset: 0x74
	// Line 1154, Address: 0x16f478, Func Offset: 0x78
	// Line 1155, Address: 0x16f47c, Func Offset: 0x7c
	// Line 1156, Address: 0x16f480, Func Offset: 0x80
	// Line 1159, Address: 0x16f488, Func Offset: 0x88
	// Line 1160, Address: 0x16f48c, Func Offset: 0x8c
	// Line 1163, Address: 0x16f494, Func Offset: 0x94
	// Line 1164, Address: 0x16f498, Func Offset: 0x98
	// Line 1165, Address: 0x16f49c, Func Offset: 0x9c
	// Line 1166, Address: 0x16f4a0, Func Offset: 0xa0
	// Line 1167, Address: 0x16f4a4, Func Offset: 0xa4
	// Line 1168, Address: 0x16f4a8, Func Offset: 0xa8
	// Line 1171, Address: 0x16f4b0, Func Offset: 0xb0
	// Func End, Address: 0x16f4b8, Func Offset: 0xb8
}

// 
// Start address: 0x16f4c0
void shMulMatrix(float m0[4], float m1[4], float m2[4])
{
	// Line 1209, Address: 0x16f4c0, Func Offset: 0
	// Line 1210, Address: 0x16f4c4, Func Offset: 0x4
	// Line 1211, Address: 0x16f4c8, Func Offset: 0x8
	// Line 1212, Address: 0x16f4cc, Func Offset: 0xc
	// Line 1213, Address: 0x16f4d0, Func Offset: 0x10
	// Line 1214, Address: 0x16f4d4, Func Offset: 0x14
	// Line 1215, Address: 0x16f4d8, Func Offset: 0x18
	// Line 1216, Address: 0x16f4dc, Func Offset: 0x1c
	// Line 1217, Address: 0x16f4e0, Func Offset: 0x20
	// Line 1218, Address: 0x16f4e4, Func Offset: 0x24
	// Line 1219, Address: 0x16f4e8, Func Offset: 0x28
	// Line 1220, Address: 0x16f4ec, Func Offset: 0x2c
	// Line 1221, Address: 0x16f4f0, Func Offset: 0x30
	// Line 1222, Address: 0x16f4f4, Func Offset: 0x34
	// Line 1223, Address: 0x16f4f8, Func Offset: 0x38
	// Line 1224, Address: 0x16f4fc, Func Offset: 0x3c
	// Line 1225, Address: 0x16f500, Func Offset: 0x40
	// Line 1226, Address: 0x16f504, Func Offset: 0x44
	// Line 1227, Address: 0x16f508, Func Offset: 0x48
	// Line 1228, Address: 0x16f50c, Func Offset: 0x4c
	// Line 1229, Address: 0x16f510, Func Offset: 0x50
	// Line 1230, Address: 0x16f514, Func Offset: 0x54
	// Line 1231, Address: 0x16f518, Func Offset: 0x58
	// Line 1232, Address: 0x16f51c, Func Offset: 0x5c
	// Line 1233, Address: 0x16f520, Func Offset: 0x60
	// Line 1234, Address: 0x16f524, Func Offset: 0x64
	// Line 1235, Address: 0x16f528, Func Offset: 0x68
	// Line 1236, Address: 0x16f52c, Func Offset: 0x6c
	// Line 1243, Address: 0x16f530, Func Offset: 0x70
	// Func End, Address: 0x16f538, Func Offset: 0x78
}

