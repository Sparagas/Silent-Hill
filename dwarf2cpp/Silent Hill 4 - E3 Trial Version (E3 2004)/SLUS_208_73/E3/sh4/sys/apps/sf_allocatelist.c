typedef struct sfAllocateList;
typedef struct sfAllocateList2;



struct sfAllocateList
{
	char* work_top;
	unsigned int size;
	int number;
};

struct sfAllocateList2
{
	char* work_top;
	unsigned int size;
	unsigned int lsize;
	int number;
};


void sfAllocateListConstruct(sfAllocateList* pal, unsigned int size);
void* sfAllocateListAllocate(sfAllocateList* pal);
int sfAllocateListNumber(sfAllocateList* pal);
void* sfAllocateListTop(sfAllocateList* pal);
void* sfAllocateListNext(sfAllocateList* pal, void* pwl);
void sfAllocateListFree(sfAllocateList* pal, void* pwl);
void sfAllocateListAllDestruct(sfAllocateList* pal);
void sfAllocateListMoveToTop(sfAllocateList* dst, sfAllocateList* src, void* pwl);
void sfAllocateListMoveToLast(sfAllocateList* dst, sfAllocateList* src, void* pwl);
void sfAllocateList2Construct(sfAllocateList2* pal, unsigned int size);
void* sfAllocateList2Allocate(sfAllocateList2* pal);
void* sfAllocateList2Top(sfAllocateList2* pal);
void* sfAllocateList2Next(sfAllocateList2* pal, void* pwl);
void sfAllocateList2Free(sfAllocateList2* pal, void* pwl);
void sfAllocateList2AllDestruct(sfAllocateList2* pal);

// 
// Start address: 0x24ac10
void sfAllocateListConstruct(sfAllocateList* pal, unsigned int size)
{
	// Line 44, Address: 0x24ac10, Func Offset: 0
	// Line 43, Address: 0x24ac18, Func Offset: 0x8
	// Line 44, Address: 0x24ac1c, Func Offset: 0xc
	// Line 46, Address: 0x24ac24, Func Offset: 0x14
	// Func End, Address: 0x24ac2c, Func Offset: 0x1c
}

// 
// Start address: 0x24ac30
void* sfAllocateListAllocate(sfAllocateList* pal)
{
	char* pwl;
	char* tpwl;
	char** pnext;
	int s;
	// Line 53, Address: 0x24ac30, Func Offset: 0
	// Line 56, Address: 0x24ac44, Func Offset: 0x14
	// Line 57, Address: 0x24ac48, Func Offset: 0x18
	// Line 58, Address: 0x24ac50, Func Offset: 0x20
	// Line 60, Address: 0x24ac60, Func Offset: 0x30
	// Line 61, Address: 0x24ac70, Func Offset: 0x40
	// Line 62, Address: 0x24ac74, Func Offset: 0x44
	// Line 63, Address: 0x24ac90, Func Offset: 0x60
	// Line 64, Address: 0x24ac94, Func Offset: 0x64
	// Line 65, Address: 0x24ac9c, Func Offset: 0x6c
	// Line 67, Address: 0x24aca8, Func Offset: 0x78
	// Func End, Address: 0x24acbc, Func Offset: 0x8c
}

// 
// Start address: 0x24acc0
int sfAllocateListNumber(sfAllocateList* pal)
{
	// Line 76, Address: 0x24acc0, Func Offset: 0
	// Func End, Address: 0x24acc8, Func Offset: 0x8
}

// 
// Start address: 0x24acd0
void* sfAllocateListTop(sfAllocateList* pal)
{
	// Line 85, Address: 0x24acd0, Func Offset: 0
	// Func End, Address: 0x24acd8, Func Offset: 0x8
}

// 
// Start address: 0x24ace0
void* sfAllocateListNext(sfAllocateList* pal, void* pwl)
{
	// Line 93, Address: 0x24ace0, Func Offset: 0
	// Line 94, Address: 0x24ace4, Func Offset: 0x4
	// Line 96, Address: 0x24ad04, Func Offset: 0x24
	// Func End, Address: 0x24ad10, Func Offset: 0x30
}

// 
// Start address: 0x24ad10
void sfAllocateListFree(sfAllocateList* pal, void* pwl)
{
	char* tpwl;
	char** pnext;
	int s;
	// Line 103, Address: 0x24ad10, Func Offset: 0
	// Line 106, Address: 0x24ad14, Func Offset: 0x4
	// Line 109, Address: 0x24ad1c, Func Offset: 0xc
	// Line 107, Address: 0x24ad20, Func Offset: 0x10
	// Line 109, Address: 0x24ad24, Func Offset: 0x14
	// Line 110, Address: 0x24ad30, Func Offset: 0x20
	// Line 111, Address: 0x24ad38, Func Offset: 0x28
	// Line 112, Address: 0x24ad40, Func Offset: 0x30
	// Line 114, Address: 0x24ad48, Func Offset: 0x38
	// Line 115, Address: 0x24ad4c, Func Offset: 0x3c
	// Line 116, Address: 0x24ad58, Func Offset: 0x48
	// Line 120, Address: 0x24ad60, Func Offset: 0x50
	// Line 121, Address: 0x24ad6c, Func Offset: 0x5c
	// Line 122, Address: 0x24ad74, Func Offset: 0x64
	// Func End, Address: 0x24ad84, Func Offset: 0x74
}

// 
// Start address: 0x24ad90
void sfAllocateListAllDestruct(sfAllocateList* pal)
{
	char* tpwl;
	char* npwl;
	// Line 128, Address: 0x24ad90, Func Offset: 0
	// Line 130, Address: 0x24ada4, Func Offset: 0x14
	// Line 131, Address: 0x24ada8, Func Offset: 0x18
	// Line 132, Address: 0x24adb0, Func Offset: 0x20
	// Line 133, Address: 0x24adb8, Func Offset: 0x28
	// Line 134, Address: 0x24adc0, Func Offset: 0x30
	// Line 135, Address: 0x24adc4, Func Offset: 0x34
	// Line 136, Address: 0x24add0, Func Offset: 0x40
	// Line 137, Address: 0x24add4, Func Offset: 0x44
	// Line 138, Address: 0x24add8, Func Offset: 0x48
	// Func End, Address: 0x24adec, Func Offset: 0x5c
}

// 
// Start address: 0x24adf0
void sfAllocateListMoveToTop(sfAllocateList* dst, sfAllocateList* src, void* pwl)
{
	char* tpwl;
	char** pnext;
	int s;
	// Line 151, Address: 0x24adf0, Func Offset: 0
	// Line 155, Address: 0x24adf4, Func Offset: 0x4
	// Line 158, Address: 0x24ae10, Func Offset: 0x20
	// Line 159, Address: 0x24ae20, Func Offset: 0x30
	// Line 160, Address: 0x24ae28, Func Offset: 0x38
	// Line 161, Address: 0x24ae2c, Func Offset: 0x3c
	// Line 162, Address: 0x24ae34, Func Offset: 0x44
	// Line 163, Address: 0x24ae38, Func Offset: 0x48
	// Line 164, Address: 0x24ae3c, Func Offset: 0x4c
	// Line 165, Address: 0x24ae48, Func Offset: 0x58
	// Line 169, Address: 0x24ae50, Func Offset: 0x60
	// Line 170, Address: 0x24ae5c, Func Offset: 0x6c
	// Line 171, Address: 0x24ae64, Func Offset: 0x74
	// Line 172, Address: 0x24ae68, Func Offset: 0x78
	// Line 173, Address: 0x24ae74, Func Offset: 0x84
	// Func End, Address: 0x24ae80, Func Offset: 0x90
}

// 
// Start address: 0x24ae80
void sfAllocateListMoveToLast(sfAllocateList* dst, sfAllocateList* src, void* pwl)
{
	char* tpwl;
	char** pnext;
	int s;
	// Line 186, Address: 0x24ae80, Func Offset: 0
	// Line 190, Address: 0x24ae84, Func Offset: 0x4
	// Line 193, Address: 0x24aea0, Func Offset: 0x20
	// Line 194, Address: 0x24aeb0, Func Offset: 0x30
	// Line 195, Address: 0x24aeb8, Func Offset: 0x38
	// Line 196, Address: 0x24aebc, Func Offset: 0x3c
	// Line 197, Address: 0x24aec4, Func Offset: 0x44
	// Line 198, Address: 0x24aec8, Func Offset: 0x48
	// Line 199, Address: 0x24aecc, Func Offset: 0x4c
	// Line 200, Address: 0x24aed8, Func Offset: 0x58
	// Line 204, Address: 0x24aee0, Func Offset: 0x60
	// Line 206, Address: 0x24aeec, Func Offset: 0x6c
	// Line 207, Address: 0x24aef8, Func Offset: 0x78
	// Line 208, Address: 0x24aefc, Func Offset: 0x7c
	// Line 209, Address: 0x24af18, Func Offset: 0x98
	// Line 210, Address: 0x24af1c, Func Offset: 0x9c
	// Line 211, Address: 0x24af24, Func Offset: 0xa4
	// Line 212, Address: 0x24af30, Func Offset: 0xb0
	// Func End, Address: 0x24af38, Func Offset: 0xb8
}

// 
// Start address: 0x24af40
void sfAllocateList2Construct(sfAllocateList2* pal, unsigned int size)
{
	int n;
	// Line 224, Address: 0x24af40, Func Offset: 0
	// Line 226, Address: 0x24af44, Func Offset: 0x4
	// Line 225, Address: 0x24af4c, Func Offset: 0xc
	// Line 226, Address: 0x24af50, Func Offset: 0x10
	// Line 227, Address: 0x24af54, Func Offset: 0x14
	// Line 228, Address: 0x24af58, Func Offset: 0x18
	// Line 229, Address: 0x24af5c, Func Offset: 0x1c
	// Line 230, Address: 0x24af70, Func Offset: 0x30
	// Line 231, Address: 0x24af7c, Func Offset: 0x3c
	// Line 233, Address: 0x24af80, Func Offset: 0x40
	// Func End, Address: 0x24af88, Func Offset: 0x48
}

// 
// Start address: 0x24af90
void* sfAllocateList2Allocate(sfAllocateList2* pal)
{
	char* pwl;
	char* tpwl;
	char** pnext;
	int s;
	int s2;
	int db;
	int nb;
	// Line 240, Address: 0x24af90, Func Offset: 0
	// Line 245, Address: 0x24afb0, Func Offset: 0x20
	// Line 246, Address: 0x24afb4, Func Offset: 0x24
	// Line 243, Address: 0x24afb8, Func Offset: 0x28
	// Line 246, Address: 0x24afbc, Func Offset: 0x2c
	// Line 250, Address: 0x24afc4, Func Offset: 0x34
	// Line 246, Address: 0x24afc8, Func Offset: 0x38
	// Line 249, Address: 0x24afcc, Func Offset: 0x3c
	// Line 250, Address: 0x24afd0, Func Offset: 0x40
	// Line 252, Address: 0x24afd8, Func Offset: 0x48
	// Line 254, Address: 0x24afdc, Func Offset: 0x4c
	// Line 256, Address: 0x24afe8, Func Offset: 0x58
	// Line 258, Address: 0x24afec, Func Offset: 0x5c
	// Line 255, Address: 0x24aff0, Func Offset: 0x60
	// Line 257, Address: 0x24aff4, Func Offset: 0x64
	// Line 258, Address: 0x24aff8, Func Offset: 0x68
	// Line 259, Address: 0x24b008, Func Offset: 0x78
	// Line 260, Address: 0x24b014, Func Offset: 0x84
	// Line 261, Address: 0x24b01c, Func Offset: 0x8c
	// Line 262, Address: 0x24b024, Func Offset: 0x94
	// Line 263, Address: 0x24b028, Func Offset: 0x98
	// Line 264, Address: 0x24b02c, Func Offset: 0x9c
	// Line 266, Address: 0x24b038, Func Offset: 0xa8
	// Line 267, Address: 0x24b040, Func Offset: 0xb0
	// Line 268, Address: 0x24b050, Func Offset: 0xc0
	// Line 269, Address: 0x24b054, Func Offset: 0xc4
	// Line 270, Address: 0x24b05c, Func Offset: 0xcc
	// Line 269, Address: 0x24b060, Func Offset: 0xd0
	// Line 270, Address: 0x24b064, Func Offset: 0xd4
	// Line 271, Address: 0x24b068, Func Offset: 0xd8
	// Line 272, Address: 0x24b074, Func Offset: 0xe4
	// Line 273, Address: 0x24b078, Func Offset: 0xe8
	// Func End, Address: 0x24b094, Func Offset: 0x104
}

// 
// Start address: 0x24b0a0
void* sfAllocateList2Top(sfAllocateList2* pal)
{
	char* pwl;
	int db;
	int s;
	int s2;
	// Line 293, Address: 0x24b0a0, Func Offset: 0
	// Line 292, Address: 0x24b0a4, Func Offset: 0x4
	// Line 293, Address: 0x24b0a8, Func Offset: 0x8
	// Line 295, Address: 0x24b0ac, Func Offset: 0xc
	// Line 296, Address: 0x24b0b8, Func Offset: 0x18
	// Line 297, Address: 0x24b0c0, Func Offset: 0x20
	// Line 299, Address: 0x24b0d0, Func Offset: 0x30
	// Line 301, Address: 0x24b0e8, Func Offset: 0x48
	// Line 302, Address: 0x24b0ec, Func Offset: 0x4c
	// Line 300, Address: 0x24b0f0, Func Offset: 0x50
	// Line 302, Address: 0x24b0f4, Func Offset: 0x54
	// Line 303, Address: 0x24b108, Func Offset: 0x68
	// Line 305, Address: 0x24b110, Func Offset: 0x70
	// Line 306, Address: 0x24b118, Func Offset: 0x78
	// Line 307, Address: 0x24b120, Func Offset: 0x80
	// Line 308, Address: 0x24b128, Func Offset: 0x88
	// Func End, Address: 0x24b130, Func Offset: 0x90
}

// 
// Start address: 0x24b130
void* sfAllocateList2Next(sfAllocateList2* pal, void* pwl)
{
	char* tpwl;
	int db;
	int s;
	int s2;
	unsigned int n;
	// Line 316, Address: 0x24b130, Func Offset: 0
	// Line 320, Address: 0x24b134, Func Offset: 0x4
	// Line 321, Address: 0x24b150, Func Offset: 0x20
	// Line 322, Address: 0x24b154, Func Offset: 0x24
	// Line 323, Address: 0x24b168, Func Offset: 0x38
	// Line 325, Address: 0x24b16c, Func Offset: 0x3c
	// Line 326, Address: 0x24b180, Func Offset: 0x50
	// Line 327, Address: 0x24b188, Func Offset: 0x58
	// Line 329, Address: 0x24b190, Func Offset: 0x60
	// Line 331, Address: 0x24b198, Func Offset: 0x68
	// Line 334, Address: 0x24b1ac, Func Offset: 0x7c
	// Line 333, Address: 0x24b1b8, Func Offset: 0x88
	// Line 335, Address: 0x24b1c8, Func Offset: 0x98
	// Line 336, Address: 0x24b1cc, Func Offset: 0x9c
	// Line 337, Address: 0x24b1e0, Func Offset: 0xb0
	// Line 338, Address: 0x24b1e8, Func Offset: 0xb8
	// Line 339, Address: 0x24b1f8, Func Offset: 0xc8
	// Line 341, Address: 0x24b204, Func Offset: 0xd4
	// Line 342, Address: 0x24b214, Func Offset: 0xe4
	// Line 343, Address: 0x24b218, Func Offset: 0xe8
	// Line 344, Address: 0x24b21c, Func Offset: 0xec
	// Line 346, Address: 0x24b220, Func Offset: 0xf0
	// Line 348, Address: 0x24b238, Func Offset: 0x108
	// Line 349, Address: 0x24b23c, Func Offset: 0x10c
	// Line 347, Address: 0x24b240, Func Offset: 0x110
	// Line 349, Address: 0x24b244, Func Offset: 0x114
	// Line 351, Address: 0x24b258, Func Offset: 0x128
	// Func End, Address: 0x24b264, Func Offset: 0x134
}

// 
// Start address: 0x24b270
void sfAllocateList2Free(sfAllocateList2* pal, void* pwl)
{
	char* tpwl;
	char** pptr;
	int db;
	int s;
	int s2;
	unsigned int n;
	// Line 358, Address: 0x24b270, Func Offset: 0
	// Line 362, Address: 0x24b27c, Func Offset: 0xc
	// Line 363, Address: 0x24b284, Func Offset: 0x14
	// Line 364, Address: 0x24b288, Func Offset: 0x18
	// Line 368, Address: 0x24b290, Func Offset: 0x20
	// Line 371, Address: 0x24b294, Func Offset: 0x24
	// Line 370, Address: 0x24b298, Func Offset: 0x28
	// Line 371, Address: 0x24b29c, Func Offset: 0x2c
	// Line 372, Address: 0x24b2a8, Func Offset: 0x38
	// Line 373, Address: 0x24b2ac, Func Offset: 0x3c
	// Line 374, Address: 0x24b2b0, Func Offset: 0x40
	// Line 378, Address: 0x24b2b8, Func Offset: 0x48
	// Line 380, Address: 0x24b2c8, Func Offset: 0x58
	// Line 381, Address: 0x24b2d4, Func Offset: 0x64
	// Line 383, Address: 0x24b2d8, Func Offset: 0x68
	// Line 380, Address: 0x24b2dc, Func Offset: 0x6c
	// Line 383, Address: 0x24b2ec, Func Offset: 0x7c
	// Line 384, Address: 0x24b2f8, Func Offset: 0x88
	// Line 385, Address: 0x24b300, Func Offset: 0x90
	// Line 386, Address: 0x24b308, Func Offset: 0x98
	// Line 387, Address: 0x24b310, Func Offset: 0xa0
	// Line 388, Address: 0x24b318, Func Offset: 0xa8
	// Line 389, Address: 0x24b31c, Func Offset: 0xac
	// Line 390, Address: 0x24b320, Func Offset: 0xb0
	// Line 391, Address: 0x24b32c, Func Offset: 0xbc
	// Func End, Address: 0x24b340, Func Offset: 0xd0
}

// 
// Start address: 0x24b340
void sfAllocateList2AllDestruct(sfAllocateList2* pal)
{
	char* tpwl;
	char* npwl;
	int s;
	// Line 397, Address: 0x24b340, Func Offset: 0
	// Line 401, Address: 0x24b358, Func Offset: 0x18
	// Line 400, Address: 0x24b35c, Func Offset: 0x1c
	// Line 402, Address: 0x24b360, Func Offset: 0x20
	// Line 403, Address: 0x24b368, Func Offset: 0x28
	// Line 404, Address: 0x24b36c, Func Offset: 0x2c
	// Line 405, Address: 0x24b374, Func Offset: 0x34
	// Line 406, Address: 0x24b378, Func Offset: 0x38
	// Line 407, Address: 0x24b388, Func Offset: 0x48
	// Line 408, Address: 0x24b38c, Func Offset: 0x4c
	// Line 409, Address: 0x24b390, Func Offset: 0x50
	// Func End, Address: 0x24b3a8, Func Offset: 0x68
}

