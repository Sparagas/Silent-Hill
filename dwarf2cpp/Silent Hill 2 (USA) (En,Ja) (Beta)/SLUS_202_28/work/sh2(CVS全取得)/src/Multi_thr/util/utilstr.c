

typedef <unknown fundamental type (0xa510)> type[1];


int UtilStrCpyL(char* dst, char* src, int limit);
int UtilStrCatL(char* dst, char* s1, char* s2, int limit);
int UtilStrCat3L(char* dst, char* s1, char* s2, char* s3, int limit);
int UtilStrPathCatL(char* dst, char* path1, char* path2, int limit);
int UtilStrConvertCdPath(char* path);
int UtilStrConvertHdPath(char* path);
int UtilMemCpy(char* dst, char* src, int n);
int UtilMemSet(char* dst, char ch, int n);
int UtilMemSwap(char* dst, char* src, int n);

// 
// Start address: 0x18ac90
int UtilStrCpyL(char* dst, char* src, int limit)
{
	int len;
	// Line 10, Address: 0x18ac90, Func Offset: 0
	// Line 11, Address: 0x18ac94, Func Offset: 0x4
	// Line 12, Address: 0x18ac9c, Func Offset: 0xc
	// Line 13, Address: 0x18aca0, Func Offset: 0x10
	// Line 14, Address: 0x18acc0, Func Offset: 0x30
	// Line 15, Address: 0x18acc4, Func Offset: 0x34
	// Line 17, Address: 0x18acd0, Func Offset: 0x40
	// Func End, Address: 0x18acd8, Func Offset: 0x48
}

// 
// Start address: 0x18ace0
int UtilStrCatL(char* dst, char* s1, char* s2, int limit)
{
	int len;
	// Line 20, Address: 0x18ace0, Func Offset: 0
	// Line 22, Address: 0x18ad04, Func Offset: 0x24
	// Line 23, Address: 0x18ad14, Func Offset: 0x34
	// Line 24, Address: 0x18ad2c, Func Offset: 0x4c
	// Line 25, Address: 0x18ad30, Func Offset: 0x50
	// Func End, Address: 0x18ad50, Func Offset: 0x70
}

// 
// Start address: 0x18ad50
int UtilStrCat3L(char* dst, char* s1, char* s2, char* s3, int limit)
{
	int len;
	// Line 29, Address: 0x18ad50, Func Offset: 0
	// Line 31, Address: 0x18ad7c, Func Offset: 0x2c
	// Line 32, Address: 0x18ad8c, Func Offset: 0x3c
	// Line 33, Address: 0x18ada4, Func Offset: 0x54
	// Line 34, Address: 0x18adbc, Func Offset: 0x6c
	// Line 35, Address: 0x18adc0, Func Offset: 0x70
	// Func End, Address: 0x18ade4, Func Offset: 0x94
}

// 
// Start address: 0x18adf0
int UtilStrPathCatL(char* dst, char* path1, char* path2, int limit)
{
	int len;
	// Line 38, Address: 0x18adf0, Func Offset: 0
	// Line 39, Address: 0x18ae14, Func Offset: 0x24
	// Line 42, Address: 0x18ae18, Func Offset: 0x28
	// Line 43, Address: 0x18ae2c, Func Offset: 0x3c
	// Line 44, Address: 0x18ae48, Func Offset: 0x58
	// Line 45, Address: 0x18ae50, Func Offset: 0x60
	// Line 46, Address: 0x18ae60, Func Offset: 0x70
	// Line 47, Address: 0x18ae84, Func Offset: 0x94
	// Line 51, Address: 0x18ae9c, Func Offset: 0xac
	// Line 53, Address: 0x18aeb4, Func Offset: 0xc4
	// Line 54, Address: 0x18aeb8, Func Offset: 0xc8
	// Func End, Address: 0x18aed8, Func Offset: 0xe8
}

// 
// Start address: 0x18aee0
int UtilStrConvertCdPath(char* path)
{
	char ch;
	int len;
	// Line 60, Address: 0x18aee0, Func Offset: 0
	// Line 61, Address: 0x18aeec, Func Offset: 0xc
	// Line 62, Address: 0x18af1c, Func Offset: 0x3c
	// Line 63, Address: 0x18af30, Func Offset: 0x50
	// Line 65, Address: 0x18af44, Func Offset: 0x64
	// Line 66, Address: 0x18af48, Func Offset: 0x68
	// Func End, Address: 0x18af50, Func Offset: 0x70
}

// 
// Start address: 0x18af50
int UtilStrConvertHdPath(char* path)
{
	char ch;
	int len;
	// Line 72, Address: 0x18af50, Func Offset: 0
	// Line 73, Address: 0x18af5c, Func Offset: 0xc
	// Line 74, Address: 0x18af78, Func Offset: 0x28
	// Line 76, Address: 0x18af8c, Func Offset: 0x3c
	// Line 77, Address: 0x18af90, Func Offset: 0x40
	// Func End, Address: 0x18af98, Func Offset: 0x48
}

// 
// Start address: 0x18afa0
int UtilMemCpy(char* dst, char* src, int n)
{
	char* s;
	char* d;
	short* s;
	short* d;
	int* s;
	int* d;
	long* s;
	long* d;
	<unknown fundamental type (0xa510)>* s;
	<unknown fundamental type (0xa510)>* d;
	int bit;
	int loop;
	// Line 84, Address: 0x18afa0, Func Offset: 0
	// Line 86, Address: 0x18afac, Func Offset: 0xc
	// Line 89, Address: 0x18afb8, Func Offset: 0x18
	// Line 91, Address: 0x18afe8, Func Offset: 0x48
	// Line 93, Address: 0x18aff4, Func Offset: 0x54
	// Line 96, Address: 0x18b000, Func Offset: 0x60
	// Line 98, Address: 0x18b030, Func Offset: 0x90
	// Line 100, Address: 0x18b03c, Func Offset: 0x9c
	// Line 103, Address: 0x18b048, Func Offset: 0xa8
	// Line 105, Address: 0x18b078, Func Offset: 0xd8
	// Line 107, Address: 0x18b084, Func Offset: 0xe4
	// Line 110, Address: 0x18b090, Func Offset: 0xf0
	// Line 112, Address: 0x18b0c0, Func Offset: 0x120
	// Line 117, Address: 0x18b0cc, Func Offset: 0x12c
	// Line 119, Address: 0x18b0f8, Func Offset: 0x158
	// Line 121, Address: 0x18b0fc, Func Offset: 0x15c
	// Func End, Address: 0x18b104, Func Offset: 0x164
}

// 
// Start address: 0x18b110
int UtilMemSet(char* dst, char ch, int n)
{
	unsigned char set;
	unsigned char* d;
	unsigned short set;
	unsigned short* d;
	unsigned int set;
	unsigned int* d;
	unsigned long set;
	unsigned long* d;
	<unknown fundamental type (0xa510)> set;
	<unknown fundamental type (0xa510)> s[1];
	<unknown fundamental type (0xa510)>* d;
	int bit;
	int loop;
	// Line 125, Address: 0x18b110, Func Offset: 0
	// Line 128, Address: 0x18b124, Func Offset: 0x14
	// Line 129, Address: 0x18b12c, Func Offset: 0x1c
	// Line 130, Address: 0x18b138, Func Offset: 0x28
	// Line 133, Address: 0x18b13c, Func Offset: 0x2c
	// Line 134, Address: 0x18b170, Func Offset: 0x60
	// Line 135, Address: 0x18b174, Func Offset: 0x64
	// Line 136, Address: 0x18b178, Func Offset: 0x68
	// Line 137, Address: 0x18b1a4, Func Offset: 0x94
	// Line 139, Address: 0x18b1b0, Func Offset: 0xa0
	// Line 140, Address: 0x18b1bc, Func Offset: 0xac
	// Line 142, Address: 0x18b1c0, Func Offset: 0xb0
	// Line 143, Address: 0x18b1ec, Func Offset: 0xdc
	// Line 144, Address: 0x18b214, Func Offset: 0x104
	// Line 146, Address: 0x18b220, Func Offset: 0x110
	// Line 149, Address: 0x18b22c, Func Offset: 0x11c
	// Line 150, Address: 0x18b240, Func Offset: 0x130
	// Line 151, Address: 0x18b26c, Func Offset: 0x15c
	// Line 153, Address: 0x18b278, Func Offset: 0x168
	// Line 156, Address: 0x18b284, Func Offset: 0x174
	// Line 157, Address: 0x18b294, Func Offset: 0x184
	// Line 158, Address: 0x18b2bc, Func Offset: 0x1ac
	// Line 163, Address: 0x18b2c8, Func Offset: 0x1b8
	// Line 164, Address: 0x18b2e0, Func Offset: 0x1d0
	// Line 165, Address: 0x18b30c, Func Offset: 0x1fc
	// Line 167, Address: 0x18b310, Func Offset: 0x200
	// Func End, Address: 0x18b328, Func Offset: 0x218
}

// 
// Start address: 0x18b330
int UtilMemSwap(char* dst, char* src, int n)
{
	char tmp;
	char* s;
	char* d;
	short tmp;
	short* s;
	short* d;
	int tmp;
	int* s;
	int* d;
	long tmp;
	long* s;
	long* d;
	<unknown fundamental type (0xa510)> tmp;
	<unknown fundamental type (0xa510)>* s;
	<unknown fundamental type (0xa510)>* d;
	int bit;
	int loop;
	// Line 174, Address: 0x18b330, Func Offset: 0
	// Line 176, Address: 0x18b33c, Func Offset: 0xc
	// Line 180, Address: 0x18b348, Func Offset: 0x18
	// Line 181, Address: 0x18b34c, Func Offset: 0x1c
	// Line 182, Address: 0x18b354, Func Offset: 0x24
	// Line 183, Address: 0x18b358, Func Offset: 0x28
	// Line 184, Address: 0x18b364, Func Offset: 0x34
	// Line 185, Address: 0x18b36c, Func Offset: 0x3c
	// Line 186, Address: 0x18b380, Func Offset: 0x50
	// Line 188, Address: 0x18b38c, Func Offset: 0x5c
	// Line 192, Address: 0x18b398, Func Offset: 0x68
	// Line 193, Address: 0x18b39c, Func Offset: 0x6c
	// Line 194, Address: 0x18b3a4, Func Offset: 0x74
	// Line 195, Address: 0x18b3a8, Func Offset: 0x78
	// Line 196, Address: 0x18b3b4, Func Offset: 0x84
	// Line 197, Address: 0x18b3bc, Func Offset: 0x8c
	// Line 198, Address: 0x18b3d0, Func Offset: 0xa0
	// Line 200, Address: 0x18b3dc, Func Offset: 0xac
	// Line 204, Address: 0x18b3e8, Func Offset: 0xb8
	// Line 205, Address: 0x18b3ec, Func Offset: 0xbc
	// Line 206, Address: 0x18b3f4, Func Offset: 0xc4
	// Line 207, Address: 0x18b3f8, Func Offset: 0xc8
	// Line 208, Address: 0x18b404, Func Offset: 0xd4
	// Line 209, Address: 0x18b40c, Func Offset: 0xdc
	// Line 210, Address: 0x18b420, Func Offset: 0xf0
	// Line 212, Address: 0x18b42c, Func Offset: 0xfc
	// Line 216, Address: 0x18b438, Func Offset: 0x108
	// Line 217, Address: 0x18b43c, Func Offset: 0x10c
	// Line 218, Address: 0x18b444, Func Offset: 0x114
	// Line 219, Address: 0x18b448, Func Offset: 0x118
	// Line 220, Address: 0x18b454, Func Offset: 0x124
	// Line 221, Address: 0x18b45c, Func Offset: 0x12c
	// Line 222, Address: 0x18b470, Func Offset: 0x140
	// Line 228, Address: 0x18b47c, Func Offset: 0x14c
	// Line 229, Address: 0x18b480, Func Offset: 0x150
	// Line 230, Address: 0x18b488, Func Offset: 0x158
	// Line 231, Address: 0x18b48c, Func Offset: 0x15c
	// Line 232, Address: 0x18b498, Func Offset: 0x168
	// Line 233, Address: 0x18b4a0, Func Offset: 0x170
	// Line 234, Address: 0x18b4b0, Func Offset: 0x180
	// Line 236, Address: 0x18b4b4, Func Offset: 0x184
	// Func End, Address: 0x18b4bc, Func Offset: 0x18c
}

