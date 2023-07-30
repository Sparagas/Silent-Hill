

typedef unsigned int type_0[8];
typedef float type_1[4];
typedef unsigned int type_2[12];
typedef float type_3[4];
typedef float type_4[4][4];

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
void shRotMatrixX();
void shRotMatrixY();
void shRotMatrixZ();
void sh_mulmatrix();
void shPushRandSeed(int seed);
int shPopRandSeed();
int shRandI();
float shRandF();
void shRandF_asm();
void shRandV_asm();
float shSway1f();
void shSway1f_asm();
void shCreateNormal();
void shSetMiniMaxN();
char shScreenClipI(int* v0);
char shScreenClipF(float* v0);
void shQzero();
void shMulMatrix(float m0[4], float m1[4], float m2[4]);

// 
// Start address: 0x172790
float shAngleRegulate()
{
	// Line 64, Address: 0x172790, Func Offset: 0
	// Line 65, Address: 0x172794, Func Offset: 0x4
	// Line 66, Address: 0x172798, Func Offset: 0x8
	// Line 67, Address: 0x17279c, Func Offset: 0xc
	// Line 68, Address: 0x1727a0, Func Offset: 0x10
	// Line 69, Address: 0x1727a4, Func Offset: 0x14
	// Line 71, Address: 0x1727ac, Func Offset: 0x1c
	// Line 72, Address: 0x1727b0, Func Offset: 0x20
	// Line 73, Address: 0x1727b4, Func Offset: 0x24
	// Line 74, Address: 0x1727b8, Func Offset: 0x28
	// Line 75, Address: 0x1727bc, Func Offset: 0x2c
	// Line 78, Address: 0x1727c4, Func Offset: 0x34
	// Line 79, Address: 0x1727c8, Func Offset: 0x38
	// Line 80, Address: 0x1727cc, Func Offset: 0x3c
	// Line 81, Address: 0x1727d0, Func Offset: 0x40
	// Line 82, Address: 0x1727d4, Func Offset: 0x44
	// Line 84, Address: 0x1727d8, Func Offset: 0x48
	// Func End, Address: 0x1727e0, Func Offset: 0x50
}

// 
// Start address: 0x1727e0
float shAtanV()
{
	// Line 109, Address: 0x1727e0, Func Offset: 0
	// Line 110, Address: 0x1727e4, Func Offset: 0x4
	// Line 112, Address: 0x1727ec, Func Offset: 0xc
	// Line 113, Address: 0x1727f0, Func Offset: 0x10
	// Func End, Address: 0x1727f8, Func Offset: 0x18
}

// 
// Start address: 0x172800
float shAtan2()
{
	// Line 128, Address: 0x172800, Func Offset: 0
	// Line 129, Address: 0x172804, Func Offset: 0x4
	// Line 130, Address: 0x172808, Func Offset: 0x8
	// Line 131, Address: 0x17280c, Func Offset: 0xc
	// Line 132, Address: 0x172810, Func Offset: 0x10
	// Line 134, Address: 0x172818, Func Offset: 0x18
	// Line 135, Address: 0x17281c, Func Offset: 0x1c
	// Func End, Address: 0x172824, Func Offset: 0x24
}

// 
// Start address: 0x172830
void shAtan_asm()
{
	// Line 149, Address: 0x172830, Func Offset: 0
	// Line 150, Address: 0x172834, Func Offset: 0x4
	// Line 151, Address: 0x172838, Func Offset: 0x8
	// Line 152, Address: 0x17283c, Func Offset: 0xc
	// Line 153, Address: 0x172840, Func Offset: 0x10
	// Line 154, Address: 0x172844, Func Offset: 0x14
	// Line 155, Address: 0x172848, Func Offset: 0x18
	// Line 156, Address: 0x17284c, Func Offset: 0x1c
	// Line 157, Address: 0x172850, Func Offset: 0x20
	// Line 158, Address: 0x172854, Func Offset: 0x24
	// Line 159, Address: 0x172858, Func Offset: 0x28
	// Line 161, Address: 0x172860, Func Offset: 0x30
	// Line 162, Address: 0x172864, Func Offset: 0x34
	// Line 163, Address: 0x172868, Func Offset: 0x38
	// Line 164, Address: 0x17286c, Func Offset: 0x3c
	// Line 166, Address: 0x172870, Func Offset: 0x40
	// Line 167, Address: 0x172874, Func Offset: 0x44
	// Line 169, Address: 0x17287c, Func Offset: 0x4c
	// Line 170, Address: 0x172880, Func Offset: 0x50
	// Line 171, Address: 0x172884, Func Offset: 0x54
	// Line 172, Address: 0x172888, Func Offset: 0x58
	// Line 173, Address: 0x17288c, Func Offset: 0x5c
	// Line 174, Address: 0x172890, Func Offset: 0x60
	// Line 175, Address: 0x172894, Func Offset: 0x64
	// Line 176, Address: 0x172898, Func Offset: 0x68
	// Line 177, Address: 0x17289c, Func Offset: 0x6c
	// Line 178, Address: 0x1728a0, Func Offset: 0x70
	// Line 179, Address: 0x1728a4, Func Offset: 0x74
	// Line 180, Address: 0x1728a8, Func Offset: 0x78
	// Line 181, Address: 0x1728ac, Func Offset: 0x7c
	// Line 182, Address: 0x1728b0, Func Offset: 0x80
	// Line 183, Address: 0x1728b4, Func Offset: 0x84
	// Line 184, Address: 0x1728b8, Func Offset: 0x88
	// Line 185, Address: 0x1728bc, Func Offset: 0x8c
	// Line 186, Address: 0x1728c0, Func Offset: 0x90
	// Line 187, Address: 0x1728c4, Func Offset: 0x94
	// Line 188, Address: 0x1728c8, Func Offset: 0x98
	// Line 189, Address: 0x1728cc, Func Offset: 0x9c
	// Line 190, Address: 0x1728d0, Func Offset: 0xa0
	// Line 191, Address: 0x1728d4, Func Offset: 0xa4
	// Line 192, Address: 0x1728d8, Func Offset: 0xa8
	// Line 193, Address: 0x1728dc, Func Offset: 0xac
	// Line 194, Address: 0x1728e0, Func Offset: 0xb0
	// Line 195, Address: 0x1728e4, Func Offset: 0xb4
	// Line 196, Address: 0x1728e8, Func Offset: 0xb8
	// Line 197, Address: 0x1728ec, Func Offset: 0xbc
	// Line 198, Address: 0x1728f0, Func Offset: 0xc0
	// Line 199, Address: 0x1728f4, Func Offset: 0xc4
	// Line 200, Address: 0x1728f8, Func Offset: 0xc8
	// Line 203, Address: 0x172900, Func Offset: 0xd0
	// Line 204, Address: 0x172904, Func Offset: 0xd4
	// Line 207, Address: 0x17290c, Func Offset: 0xdc
	// Line 210, Address: 0x172914, Func Offset: 0xe4
	// Line 211, Address: 0x172918, Func Offset: 0xe8
	// Line 212, Address: 0x17291c, Func Offset: 0xec
	// Line 213, Address: 0x172920, Func Offset: 0xf0
	// Func End, Address: 0x172928, Func Offset: 0xf8
}

// 
// Start address: 0x172930
void sh_ecossin()
{
	// Line 226, Address: 0x172930, Func Offset: 0
	// Line 227, Address: 0x172934, Func Offset: 0x4
	// Line 228, Address: 0x172938, Func Offset: 0x8
	// Line 229, Address: 0x17293c, Func Offset: 0xc
	// Line 230, Address: 0x172940, Func Offset: 0x10
	// Line 231, Address: 0x172944, Func Offset: 0x14
	// Line 232, Address: 0x172948, Func Offset: 0x18
	// Line 234, Address: 0x172950, Func Offset: 0x20
	// Line 235, Address: 0x172954, Func Offset: 0x24
	// Line 236, Address: 0x172958, Func Offset: 0x28
	// Line 237, Address: 0x17295c, Func Offset: 0x2c
	// Line 238, Address: 0x172960, Func Offset: 0x30
	// Line 239, Address: 0x172964, Func Offset: 0x34
	// Line 240, Address: 0x172968, Func Offset: 0x38
	// Line 241, Address: 0x17296c, Func Offset: 0x3c
	// Line 242, Address: 0x172970, Func Offset: 0x40
	// Line 243, Address: 0x172974, Func Offset: 0x44
	// Line 246, Address: 0x17297c, Func Offset: 0x4c
	// Line 247, Address: 0x172980, Func Offset: 0x50
	// Line 248, Address: 0x172984, Func Offset: 0x54
	// Line 249, Address: 0x172988, Func Offset: 0x58
	// Line 250, Address: 0x17298c, Func Offset: 0x5c
	// Line 251, Address: 0x172990, Func Offset: 0x60
	// Line 252, Address: 0x172994, Func Offset: 0x64
	// Line 253, Address: 0x172998, Func Offset: 0x68
	// Line 254, Address: 0x17299c, Func Offset: 0x6c
	// Line 255, Address: 0x1729a0, Func Offset: 0x70
	// Line 256, Address: 0x1729a4, Func Offset: 0x74
	// Line 257, Address: 0x1729a8, Func Offset: 0x78
	// Line 258, Address: 0x1729ac, Func Offset: 0x7c
	// Line 259, Address: 0x1729b0, Func Offset: 0x80
	// Line 260, Address: 0x1729b4, Func Offset: 0x84
	// Line 262, Address: 0x1729b8, Func Offset: 0x88
	// Line 263, Address: 0x1729bc, Func Offset: 0x8c
	// Line 264, Address: 0x1729c0, Func Offset: 0x90
	// Line 265, Address: 0x1729c4, Func Offset: 0x94
	// Line 266, Address: 0x1729c8, Func Offset: 0x98
	// Line 267, Address: 0x1729cc, Func Offset: 0x9c
	// Line 268, Address: 0x1729d0, Func Offset: 0xa0
	// Line 269, Address: 0x1729d4, Func Offset: 0xa4
	// Line 270, Address: 0x1729d8, Func Offset: 0xa8
	// Line 271, Address: 0x1729dc, Func Offset: 0xac
	// Line 272, Address: 0x1729e0, Func Offset: 0xb0
	// Line 273, Address: 0x1729e4, Func Offset: 0xb4
	// Line 274, Address: 0x1729e8, Func Offset: 0xb8
	// Line 275, Address: 0x1729ec, Func Offset: 0xbc
	// Line 276, Address: 0x1729f0, Func Offset: 0xc0
	// Line 277, Address: 0x1729f4, Func Offset: 0xc4
	// Line 278, Address: 0x1729f8, Func Offset: 0xc8
	// Line 281, Address: 0x172a00, Func Offset: 0xd0
	// Line 283, Address: 0x172a08, Func Offset: 0xd8
	// Line 285, Address: 0x172a0c, Func Offset: 0xdc
	// Func End, Address: 0x172a14, Func Offset: 0xe4
}

// 
// Start address: 0x172a20
float shSinF()
{
	// Line 297, Address: 0x172a20, Func Offset: 0
	// Line 298, Address: 0x172a24, Func Offset: 0x4
	// Line 299, Address: 0x172a28, Func Offset: 0x8
	// Line 300, Address: 0x172a2c, Func Offset: 0xc
	// Line 301, Address: 0x172a30, Func Offset: 0x10
	// Line 303, Address: 0x172a38, Func Offset: 0x18
	// Line 304, Address: 0x172a3c, Func Offset: 0x1c
	// Line 305, Address: 0x172a40, Func Offset: 0x20
	// Line 306, Address: 0x172a44, Func Offset: 0x24
	// Line 307, Address: 0x172a48, Func Offset: 0x28
	// Line 308, Address: 0x172a4c, Func Offset: 0x2c
	// Line 309, Address: 0x172a50, Func Offset: 0x30
	// Line 310, Address: 0x172a54, Func Offset: 0x34
	// Line 311, Address: 0x172a58, Func Offset: 0x38
	// Line 312, Address: 0x172a5c, Func Offset: 0x3c
	// Line 314, Address: 0x172a64, Func Offset: 0x44
	// Line 315, Address: 0x172a68, Func Offset: 0x48
	// Line 316, Address: 0x172a6c, Func Offset: 0x4c
	// Line 317, Address: 0x172a70, Func Offset: 0x50
	// Line 320, Address: 0x172a78, Func Offset: 0x58
	// Line 321, Address: 0x172a7c, Func Offset: 0x5c
	// Line 322, Address: 0x172a80, Func Offset: 0x60
	// Line 323, Address: 0x172a84, Func Offset: 0x64
	// Line 324, Address: 0x172a88, Func Offset: 0x68
	// Line 325, Address: 0x172a8c, Func Offset: 0x6c
	// Line 326, Address: 0x172a90, Func Offset: 0x70
	// Line 327, Address: 0x172a94, Func Offset: 0x74
	// Line 328, Address: 0x172a98, Func Offset: 0x78
	// Line 329, Address: 0x172a9c, Func Offset: 0x7c
	// Line 330, Address: 0x172aa0, Func Offset: 0x80
	// Line 331, Address: 0x172aa4, Func Offset: 0x84
	// Line 332, Address: 0x172aa8, Func Offset: 0x88
	// Line 333, Address: 0x172aac, Func Offset: 0x8c
	// Line 334, Address: 0x172ab0, Func Offset: 0x90
	// Line 335, Address: 0x172ab4, Func Offset: 0x94
	// Line 336, Address: 0x172ab8, Func Offset: 0x98
	// Line 337, Address: 0x172abc, Func Offset: 0x9c
	// Line 340, Address: 0x172ac4, Func Offset: 0xa4
	// Func End, Address: 0x172acc, Func Offset: 0xac
}

// 
// Start address: 0x172ad0
float shCosF()
{
	// Line 352, Address: 0x172ad0, Func Offset: 0
	// Line 353, Address: 0x172ad4, Func Offset: 0x4
	// Line 354, Address: 0x172ad8, Func Offset: 0x8
	// Line 355, Address: 0x172adc, Func Offset: 0xc
	// Line 356, Address: 0x172ae0, Func Offset: 0x10
	// Line 357, Address: 0x172ae4, Func Offset: 0x14
	// Line 358, Address: 0x172ae8, Func Offset: 0x18
	// Line 360, Address: 0x172af0, Func Offset: 0x20
	// Line 361, Address: 0x172af4, Func Offset: 0x24
	// Line 362, Address: 0x172af8, Func Offset: 0x28
	// Line 363, Address: 0x172afc, Func Offset: 0x2c
	// Line 364, Address: 0x172b00, Func Offset: 0x30
	// Line 365, Address: 0x172b04, Func Offset: 0x34
	// Line 366, Address: 0x172b08, Func Offset: 0x38
	// Line 367, Address: 0x172b0c, Func Offset: 0x3c
	// Line 368, Address: 0x172b10, Func Offset: 0x40
	// Line 369, Address: 0x172b14, Func Offset: 0x44
	// Line 372, Address: 0x172b1c, Func Offset: 0x4c
	// Line 373, Address: 0x172b20, Func Offset: 0x50
	// Line 374, Address: 0x172b24, Func Offset: 0x54
	// Line 375, Address: 0x172b28, Func Offset: 0x58
	// Line 376, Address: 0x172b2c, Func Offset: 0x5c
	// Line 377, Address: 0x172b30, Func Offset: 0x60
	// Line 378, Address: 0x172b34, Func Offset: 0x64
	// Line 379, Address: 0x172b38, Func Offset: 0x68
	// Line 380, Address: 0x172b3c, Func Offset: 0x6c
	// Line 381, Address: 0x172b40, Func Offset: 0x70
	// Line 382, Address: 0x172b44, Func Offset: 0x74
	// Line 383, Address: 0x172b48, Func Offset: 0x78
	// Line 384, Address: 0x172b4c, Func Offset: 0x7c
	// Line 385, Address: 0x172b50, Func Offset: 0x80
	// Line 386, Address: 0x172b54, Func Offset: 0x84
	// Func End, Address: 0x172b5c, Func Offset: 0x8c
}

// 
// Start address: 0x172b60
void shSinCosV()
{
	// Line 415, Address: 0x172b60, Func Offset: 0
	// Line 416, Address: 0x172b64, Func Offset: 0x4
	// Line 418, Address: 0x172b6c, Func Offset: 0xc
	// Line 419, Address: 0x172b70, Func Offset: 0x10
	// Line 420, Address: 0x172b74, Func Offset: 0x14
	// Line 421, Address: 0x172b78, Func Offset: 0x18
	// Func End, Address: 0x172b80, Func Offset: 0x20
}

// 
// Start address: 0x172b80
void shSinCosV_Scale()
{
	// Line 455, Address: 0x172b80, Func Offset: 0
	// Line 456, Address: 0x172b84, Func Offset: 0x4
	// Line 457, Address: 0x172b88, Func Offset: 0x8
	// Line 459, Address: 0x172b90, Func Offset: 0x10
	// Line 460, Address: 0x172b94, Func Offset: 0x14
	// Line 461, Address: 0x172b98, Func Offset: 0x18
	// Line 462, Address: 0x172b9c, Func Offset: 0x1c
	// Line 463, Address: 0x172ba0, Func Offset: 0x20
	// Line 464, Address: 0x172ba4, Func Offset: 0x24
	// Line 465, Address: 0x172ba8, Func Offset: 0x28
	// Func End, Address: 0x172bb0, Func Offset: 0x30
}

// 
// Start address: 0x172bb0
void shRotMatrixX()
{
	// Line 479, Address: 0x172bb0, Func Offset: 0
	// Line 480, Address: 0x172bb4, Func Offset: 0x4
	// Line 483, Address: 0x172bbc, Func Offset: 0xc
	// Line 484, Address: 0x172bc0, Func Offset: 0x10
	// Line 485, Address: 0x172bc4, Func Offset: 0x14
	// Line 486, Address: 0x172bc8, Func Offset: 0x18
	// Line 488, Address: 0x172bcc, Func Offset: 0x1c
	// Line 489, Address: 0x172bd0, Func Offset: 0x20
	// Line 490, Address: 0x172bd4, Func Offset: 0x24
	// Line 491, Address: 0x172bd8, Func Offset: 0x28
	// Line 493, Address: 0x172be0, Func Offset: 0x30
	// Func End, Address: 0x172be8, Func Offset: 0x38
}

// 
// Start address: 0x172bf0
void shRotMatrixY()
{
	// Line 507, Address: 0x172bf0, Func Offset: 0
	// Line 508, Address: 0x172bf4, Func Offset: 0x4
	// Line 511, Address: 0x172bfc, Func Offset: 0xc
	// Line 512, Address: 0x172c00, Func Offset: 0x10
	// Line 513, Address: 0x172c04, Func Offset: 0x14
	// Line 514, Address: 0x172c08, Func Offset: 0x18
	// Line 516, Address: 0x172c0c, Func Offset: 0x1c
	// Line 517, Address: 0x172c10, Func Offset: 0x20
	// Line 518, Address: 0x172c14, Func Offset: 0x24
	// Line 519, Address: 0x172c18, Func Offset: 0x28
	// Line 521, Address: 0x172c20, Func Offset: 0x30
	// Func End, Address: 0x172c28, Func Offset: 0x38
}

// 
// Start address: 0x172c30
void shRotMatrixZ()
{
	// Line 535, Address: 0x172c30, Func Offset: 0
	// Line 536, Address: 0x172c34, Func Offset: 0x4
	// Line 539, Address: 0x172c3c, Func Offset: 0xc
	// Line 540, Address: 0x172c40, Func Offset: 0x10
	// Line 541, Address: 0x172c44, Func Offset: 0x14
	// Line 543, Address: 0x172c48, Func Offset: 0x18
	// Line 544, Address: 0x172c4c, Func Offset: 0x1c
	// Line 545, Address: 0x172c50, Func Offset: 0x20
	// Line 547, Address: 0x172c58, Func Offset: 0x28
	// Func End, Address: 0x172c60, Func Offset: 0x30
}

// 
// Start address: 0x172c60
void sh_mulmatrix()
{
	// Line 562, Address: 0x172c60, Func Offset: 0
	// Line 563, Address: 0x172c64, Func Offset: 0x4
	// Line 564, Address: 0x172c68, Func Offset: 0x8
	// Line 565, Address: 0x172c6c, Func Offset: 0xc
	// Line 566, Address: 0x172c70, Func Offset: 0x10
	// Line 567, Address: 0x172c74, Func Offset: 0x14
	// Line 568, Address: 0x172c78, Func Offset: 0x18
	// Line 569, Address: 0x172c7c, Func Offset: 0x1c
	// Line 570, Address: 0x172c80, Func Offset: 0x20
	// Line 571, Address: 0x172c84, Func Offset: 0x24
	// Line 572, Address: 0x172c88, Func Offset: 0x28
	// Line 573, Address: 0x172c8c, Func Offset: 0x2c
	// Line 574, Address: 0x172c90, Func Offset: 0x30
	// Line 575, Address: 0x172c94, Func Offset: 0x34
	// Line 576, Address: 0x172c98, Func Offset: 0x38
	// Line 577, Address: 0x172c9c, Func Offset: 0x3c
	// Line 578, Address: 0x172ca0, Func Offset: 0x40
	// Line 579, Address: 0x172ca4, Func Offset: 0x44
	// Line 580, Address: 0x172ca8, Func Offset: 0x48
	// Line 581, Address: 0x172cac, Func Offset: 0x4c
	// Line 582, Address: 0x172cb0, Func Offset: 0x50
	// Line 583, Address: 0x172cb4, Func Offset: 0x54
	// Line 584, Address: 0x172cb8, Func Offset: 0x58
	// Line 585, Address: 0x172cbc, Func Offset: 0x5c
	// Func End, Address: 0x172cc4, Func Offset: 0x64
}

// 
// Start address: 0x172cd0
void shPushRandSeed(int seed)
{
	// Line 613, Address: 0x172cd0, Func Offset: 0
	// Line 614, Address: 0x172cd8, Func Offset: 0x8
	// Line 615, Address: 0x172ce8, Func Offset: 0x18
	// Line 616, Address: 0x172cf4, Func Offset: 0x24
	// Func End, Address: 0x172d00, Func Offset: 0x30
}

// 
// Start address: 0x172d00
int shPopRandSeed()
{
	int seed;
	// Line 621, Address: 0x172d00, Func Offset: 0
	// Line 622, Address: 0x172d08, Func Offset: 0x8
	// Line 623, Address: 0x172d10, Func Offset: 0x10
	// Line 624, Address: 0x172d20, Func Offset: 0x20
	// Line 625, Address: 0x172d24, Func Offset: 0x24
	// Func End, Address: 0x172d34, Func Offset: 0x34
}

// 
// Start address: 0x172d40
int shRandI()
{
	// Line 650, Address: 0x172d40, Func Offset: 0
	// Line 651, Address: 0x172d68, Func Offset: 0x28
	// Func End, Address: 0x172d70, Func Offset: 0x30
}

// 
// Start address: 0x172d70
float shRandF()
{
	// Line 674, Address: 0x172d70, Func Offset: 0
	// Line 675, Address: 0x172d74, Func Offset: 0x4
	// Line 677, Address: 0x172d7c, Func Offset: 0xc
	// Func End, Address: 0x172d84, Func Offset: 0x14
}

// 
// Start address: 0x172d90
void shRandF_asm()
{
	// Line 688, Address: 0x172d90, Func Offset: 0
	// Line 689, Address: 0x172db8, Func Offset: 0x28
	// Line 690, Address: 0x172dbc, Func Offset: 0x2c
	// Line 691, Address: 0x172dc0, Func Offset: 0x30
	// Line 692, Address: 0x172dc4, Func Offset: 0x34
	// Line 693, Address: 0x172dc8, Func Offset: 0x38
	// Line 694, Address: 0x172dcc, Func Offset: 0x3c
	// Func End, Address: 0x172dd4, Func Offset: 0x44
}

// 
// Start address: 0x172de0
void shRandV_asm()
{
	// Line 763, Address: 0x172de0, Func Offset: 0
	// Line 764, Address: 0x172de8, Func Offset: 0x8
	// Line 765, Address: 0x172dec, Func Offset: 0xc
	// Line 766, Address: 0x172df0, Func Offset: 0x10
	// Line 767, Address: 0x172df4, Func Offset: 0x14
	// Line 768, Address: 0x172df8, Func Offset: 0x18
	// Line 769, Address: 0x172dfc, Func Offset: 0x1c
	// Line 770, Address: 0x172e00, Func Offset: 0x20
	// Line 771, Address: 0x172e04, Func Offset: 0x24
	// Line 772, Address: 0x172e08, Func Offset: 0x28
	// Line 773, Address: 0x172e0c, Func Offset: 0x2c
	// Line 774, Address: 0x172e10, Func Offset: 0x30
	// Line 775, Address: 0x172e14, Func Offset: 0x34
	// Line 776, Address: 0x172e18, Func Offset: 0x38
	// Line 777, Address: 0x172e1c, Func Offset: 0x3c
	// Line 778, Address: 0x172e20, Func Offset: 0x40
	// Line 779, Address: 0x172e24, Func Offset: 0x44
	// Line 780, Address: 0x172e28, Func Offset: 0x48
	// Line 781, Address: 0x172e2c, Func Offset: 0x4c
	// Line 782, Address: 0x172e30, Func Offset: 0x50
	// Line 783, Address: 0x172e34, Func Offset: 0x54
	// Line 784, Address: 0x172e38, Func Offset: 0x58
	// Line 785, Address: 0x172e3c, Func Offset: 0x5c
	// Line 786, Address: 0x172e40, Func Offset: 0x60
	// Line 787, Address: 0x172e44, Func Offset: 0x64
	// Line 788, Address: 0x172e48, Func Offset: 0x68
	// Line 789, Address: 0x172e4c, Func Offset: 0x6c
	// Line 790, Address: 0x172e50, Func Offset: 0x70
	// Line 791, Address: 0x172e54, Func Offset: 0x74
	// Line 792, Address: 0x172e58, Func Offset: 0x78
	// Func End, Address: 0x172e60, Func Offset: 0x80
}

// 
// Start address: 0x172e60
float shSway1f()
{
	// Line 811, Address: 0x172e60, Func Offset: 0
	// Line 812, Address: 0x172e64, Func Offset: 0x4
	// Line 814, Address: 0x172e6c, Func Offset: 0xc
	// Func End, Address: 0x172e74, Func Offset: 0x14
}

// 
// Start address: 0x172e80
void shSway1f_asm()
{
	// Line 828, Address: 0x172e80, Func Offset: 0
	// Line 829, Address: 0x172e84, Func Offset: 0x4
	// Line 830, Address: 0x172e88, Func Offset: 0x8
	// Line 831, Address: 0x172e8c, Func Offset: 0xc
	// Line 833, Address: 0x172e94, Func Offset: 0x14
	// Line 834, Address: 0x172ebc, Func Offset: 0x3c
	// Line 835, Address: 0x172ec0, Func Offset: 0x40
	// Line 838, Address: 0x172ec8, Func Offset: 0x48
	// Line 839, Address: 0x172ef0, Func Offset: 0x70
	// Line 840, Address: 0x172ef4, Func Offset: 0x74
	// Line 841, Address: 0x172ef8, Func Offset: 0x78
	// Line 842, Address: 0x172efc, Func Offset: 0x7c
	// Line 843, Address: 0x172f00, Func Offset: 0x80
	// Line 844, Address: 0x172f04, Func Offset: 0x84
	// Line 845, Address: 0x172f08, Func Offset: 0x88
	// Line 846, Address: 0x172f0c, Func Offset: 0x8c
	// Line 847, Address: 0x172f10, Func Offset: 0x90
	// Line 848, Address: 0x172f14, Func Offset: 0x94
	// Line 849, Address: 0x172f18, Func Offset: 0x98
	// Line 850, Address: 0x172f1c, Func Offset: 0x9c
	// Func End, Address: 0x172f24, Func Offset: 0xa4
}

// 
// Start address: 0x172f30
void shCreateNormal()
{
	// Line 874, Address: 0x172f30, Func Offset: 0
	// Line 875, Address: 0x172f34, Func Offset: 0x4
	// Line 876, Address: 0x172f38, Func Offset: 0x8
	// Line 877, Address: 0x172f3c, Func Offset: 0xc
	// Line 878, Address: 0x172f40, Func Offset: 0x10
	// Line 879, Address: 0x172f44, Func Offset: 0x14
	// Line 880, Address: 0x172f48, Func Offset: 0x18
	// Line 881, Address: 0x172f4c, Func Offset: 0x1c
	// Line 882, Address: 0x172f50, Func Offset: 0x20
	// Line 883, Address: 0x172f54, Func Offset: 0x24
	// Line 884, Address: 0x172f58, Func Offset: 0x28
	// Line 885, Address: 0x172f5c, Func Offset: 0x2c
	// Line 886, Address: 0x172f60, Func Offset: 0x30
	// Line 887, Address: 0x172f64, Func Offset: 0x34
	// Line 888, Address: 0x172f68, Func Offset: 0x38
	// Func End, Address: 0x172f70, Func Offset: 0x40
}

// 
// Start address: 0x172f70
void shSetMiniMaxN()
{
	// Line 904, Address: 0x172f70, Func Offset: 0
	// Line 905, Address: 0x172f74, Func Offset: 0x4
	// Line 906, Address: 0x172f78, Func Offset: 0x8
	// Line 909, Address: 0x172f80, Func Offset: 0x10
	// Line 910, Address: 0x172f84, Func Offset: 0x14
	// Line 911, Address: 0x172f88, Func Offset: 0x18
	// Line 912, Address: 0x172f8c, Func Offset: 0x1c
	// Line 913, Address: 0x172f90, Func Offset: 0x20
	// Line 914, Address: 0x172f94, Func Offset: 0x24
	// Line 917, Address: 0x172f9c, Func Offset: 0x2c
	// Line 918, Address: 0x172fa0, Func Offset: 0x30
	// Func End, Address: 0x172fa8, Func Offset: 0x38
}

// 
// Start address: 0x172fb0
char shScreenClipI(int* v0)
{
	int x;
	// Line 991, Address: 0x172fb0, Func Offset: 0
	// Line 992, Address: 0x172fc8, Func Offset: 0x18
	// Line 993, Address: 0x172fe0, Func Offset: 0x30
	// Line 994, Address: 0x172ff8, Func Offset: 0x48
	// Line 995, Address: 0x173010, Func Offset: 0x60
	// Line 996, Address: 0x173018, Func Offset: 0x68
	// Line 997, Address: 0x173040, Func Offset: 0x90
	// Line 998, Address: 0x173044, Func Offset: 0x94
	// Func End, Address: 0x17304c, Func Offset: 0x9c
}

// 
// Start address: 0x173050
char shScreenClipF(float* v0)
{
	float x;
	// Line 1007, Address: 0x173050, Func Offset: 0
	// Line 1008, Address: 0x173068, Func Offset: 0x18
	// Line 1009, Address: 0x173090, Func Offset: 0x40
	// Line 1010, Address: 0x1730a8, Func Offset: 0x58
	// Line 1011, Address: 0x1730d0, Func Offset: 0x80
	// Line 1012, Address: 0x1730d4, Func Offset: 0x84
	// Line 1013, Address: 0x17311c, Func Offset: 0xcc
	// Line 1014, Address: 0x173120, Func Offset: 0xd0
	// Func End, Address: 0x173128, Func Offset: 0xd8
}

// 
// Start address: 0x173130
void shQzero()
{
	// Line 1025, Address: 0x173130, Func Offset: 0
	// Line 1027, Address: 0x173138, Func Offset: 0x8
	// Line 1029, Address: 0x173140, Func Offset: 0x10
	// Line 1030, Address: 0x173144, Func Offset: 0x14
	// Line 1031, Address: 0x173148, Func Offset: 0x18
	// Line 1033, Address: 0x173150, Func Offset: 0x20
	// Line 1035, Address: 0x173154, Func Offset: 0x24
	// Line 1036, Address: 0x173158, Func Offset: 0x28
	// Line 1037, Address: 0x17315c, Func Offset: 0x2c
	// Line 1038, Address: 0x173160, Func Offset: 0x30
	// Line 1039, Address: 0x173164, Func Offset: 0x34
	// Line 1040, Address: 0x173168, Func Offset: 0x38
	// Line 1043, Address: 0x173170, Func Offset: 0x40
	// Line 1044, Address: 0x173174, Func Offset: 0x44
	// Line 1047, Address: 0x17317c, Func Offset: 0x4c
	// Line 1048, Address: 0x173180, Func Offset: 0x50
	// Line 1049, Address: 0x173184, Func Offset: 0x54
	// Line 1050, Address: 0x173188, Func Offset: 0x58
	// Line 1051, Address: 0x17318c, Func Offset: 0x5c
	// Line 1052, Address: 0x173190, Func Offset: 0x60
	// Line 1055, Address: 0x173198, Func Offset: 0x68
	// Line 1056, Address: 0x17319c, Func Offset: 0x6c
	// Line 1057, Address: 0x1731a0, Func Offset: 0x70
	// Line 1060, Address: 0x1731a8, Func Offset: 0x78
	// Line 1061, Address: 0x1731ac, Func Offset: 0x7c
	// Line 1062, Address: 0x1731b0, Func Offset: 0x80
	// Line 1063, Address: 0x1731b4, Func Offset: 0x84
	// Line 1064, Address: 0x1731b8, Func Offset: 0x88
	// Line 1065, Address: 0x1731bc, Func Offset: 0x8c
	// Line 1068, Address: 0x1731c4, Func Offset: 0x94
	// Line 1069, Address: 0x1731c8, Func Offset: 0x98
	// Line 1072, Address: 0x1731d0, Func Offset: 0xa0
	// Line 1073, Address: 0x1731d4, Func Offset: 0xa4
	// Line 1074, Address: 0x1731d8, Func Offset: 0xa8
	// Line 1075, Address: 0x1731dc, Func Offset: 0xac
	// Line 1076, Address: 0x1731e0, Func Offset: 0xb0
	// Line 1077, Address: 0x1731e4, Func Offset: 0xb4
	// Line 1080, Address: 0x1731ec, Func Offset: 0xbc
	// Func End, Address: 0x1731f4, Func Offset: 0xc4
}

// 
// Start address: 0x173200
void shMulMatrix(float m0[4], float m1[4], float m2[4])
{
	// Line 1186, Address: 0x173200, Func Offset: 0
	// Line 1187, Address: 0x173204, Func Offset: 0x4
	// Line 1188, Address: 0x173208, Func Offset: 0x8
	// Line 1189, Address: 0x17320c, Func Offset: 0xc
	// Line 1190, Address: 0x173210, Func Offset: 0x10
	// Line 1191, Address: 0x173214, Func Offset: 0x14
	// Line 1192, Address: 0x173218, Func Offset: 0x18
	// Line 1193, Address: 0x17321c, Func Offset: 0x1c
	// Line 1194, Address: 0x173220, Func Offset: 0x20
	// Line 1195, Address: 0x173224, Func Offset: 0x24
	// Line 1196, Address: 0x173228, Func Offset: 0x28
	// Line 1197, Address: 0x17322c, Func Offset: 0x2c
	// Line 1198, Address: 0x173230, Func Offset: 0x30
	// Line 1199, Address: 0x173234, Func Offset: 0x34
	// Line 1200, Address: 0x173238, Func Offset: 0x38
	// Line 1201, Address: 0x17323c, Func Offset: 0x3c
	// Line 1202, Address: 0x173240, Func Offset: 0x40
	// Line 1203, Address: 0x173244, Func Offset: 0x44
	// Line 1204, Address: 0x173248, Func Offset: 0x48
	// Line 1205, Address: 0x17324c, Func Offset: 0x4c
	// Line 1206, Address: 0x173250, Func Offset: 0x50
	// Line 1207, Address: 0x173254, Func Offset: 0x54
	// Line 1208, Address: 0x173258, Func Offset: 0x58
	// Line 1209, Address: 0x17325c, Func Offset: 0x5c
	// Line 1210, Address: 0x173260, Func Offset: 0x60
	// Line 1211, Address: 0x173264, Func Offset: 0x64
	// Line 1212, Address: 0x173268, Func Offset: 0x68
	// Line 1213, Address: 0x17326c, Func Offset: 0x6c
	// Line 1220, Address: 0x173270, Func Offset: 0x70
	// Func End, Address: 0x173278, Func Offset: 0x78
}

