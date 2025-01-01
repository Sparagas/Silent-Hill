

typedef char type_0[1];
typedef char type_1[256];
typedef char type_2[260];
typedef char type_3[1];
typedef char type_4[1];
typedef char type_5[1];
typedef char type_6[1];
typedef char type_7[7];
typedef char type_8[8];
typedef char type_9[256];
typedef char type_10[256];
typedef char type_11[3];

char* execEnv_host_path;
char* execEnv_iop_path_hd;
char* execEnv_iop_path;
char* execEnv_data_path;
char* execEnv_database_path;

char* pathname_skipcheck(char* pathname, char* filename);
int shPathMakeCd(char* fullpath, char* pathname, char* filename);
int shPathMakeHd(char* fullpath, char* rootpath, char* pathname, char* filename);
int shPathMakeIop(char* fullpath, char* filename);
int shPathMakeCdData(char* fullpath, char* filename);
int shPathMakeHdData(char* fullpath, char* filename);
int shPathMakeCdDataBase(char* fullpath, char* filename);
int shPathMakeHdDataBase(char* fullpath, char* filename);
int _shPathMakeCdDataBase(char* fullpath, char* filename);
int _shPathMakeCdData(char* fullpath, char* filename);
int _shPathMakeHdDataBase(char* fullpath, char* filename);
int _shPathMakeHdData(char* fullpath, char* filename);

// 
// Start address: 0x1c5300
char* pathname_skipcheck(char* pathname, char* filename)
{
	// Line 21, Address: 0x1c5300, Func Offset: 0
	// Line 28, Address: 0x1c530c, Func Offset: 0xc
	// Line 31, Address: 0x1c5348, Func Offset: 0x48
	// Line 33, Address: 0x1c5354, Func Offset: 0x54
	// Line 36, Address: 0x1c5390, Func Offset: 0x90
	// Line 38, Address: 0x1c539c, Func Offset: 0x9c
	// Line 41, Address: 0x1c53cc, Func Offset: 0xcc
	// Line 46, Address: 0x1c53d8, Func Offset: 0xd8
	// Line 47, Address: 0x1c53f4, Func Offset: 0xf4
	// Line 48, Address: 0x1c542c, Func Offset: 0x12c
	// Line 49, Address: 0x1c5438, Func Offset: 0x138
	// Line 50, Address: 0x1c5470, Func Offset: 0x170
	// Line 55, Address: 0x1c547c, Func Offset: 0x17c
	// Line 56, Address: 0x1c5484, Func Offset: 0x184
	// Func End, Address: 0x1c5490, Func Offset: 0x190
}

// 
// Start address: 0x1c5490
int shPathMakeCd(char* fullpath, char* pathname, char* filename)
{
	char work2[260];
	char work1[256];
	char* work;
	int len;
	char suffix[3];
	char prefix[8];
	// Line 62, Address: 0x1c5490, Func Offset: 0
	// Line 63, Address: 0x1c54ac, Func Offset: 0x1c
	// Line 64, Address: 0x1c54c0, Func Offset: 0x30
	// Line 70, Address: 0x1c54dc, Func Offset: 0x4c
	// Line 71, Address: 0x1c54f4, Func Offset: 0x64
	// Line 72, Address: 0x1c550c, Func Offset: 0x7c
	// Line 74, Address: 0x1c5514, Func Offset: 0x84
	// Line 75, Address: 0x1c553c, Func Offset: 0xac
	// Line 77, Address: 0x1c5550, Func Offset: 0xc0
	// Line 78, Address: 0x1c5554, Func Offset: 0xc4
	// Line 79, Address: 0x1c5558, Func Offset: 0xc8
	// Line 81, Address: 0x1c5580, Func Offset: 0xf0
	// Line 83, Address: 0x1c559c, Func Offset: 0x10c
	// Line 84, Address: 0x1c55a8, Func Offset: 0x118
	// Line 85, Address: 0x1c55c8, Func Offset: 0x138
	// Line 86, Address: 0x1c55cc, Func Offset: 0x13c
	// Func End, Address: 0x1c55e4, Func Offset: 0x154
}

// 
// Start address: 0x1c55f0
int shPathMakeHd(char* fullpath, char* rootpath, char* pathname, char* filename)
{
	char work2[256];
	char work1[256];
	int len;
	char prefix[7];
	// Line 93, Address: 0x1c55f0, Func Offset: 0
	// Line 94, Address: 0x1c560c, Func Offset: 0x1c
	// Line 104, Address: 0x1c5630, Func Offset: 0x40
	// Line 105, Address: 0x1c5648, Func Offset: 0x58
	// Line 106, Address: 0x1c5660, Func Offset: 0x70
	// Line 107, Address: 0x1c5668, Func Offset: 0x78
	// Line 109, Address: 0x1c567c, Func Offset: 0x8c
	// Line 111, Address: 0x1c5680, Func Offset: 0x90
	// Line 112, Address: 0x1c5698, Func Offset: 0xa8
	// Line 113, Address: 0x1c56b0, Func Offset: 0xc0
	// Line 114, Address: 0x1c56b8, Func Offset: 0xc8
	// Line 116, Address: 0x1c56cc, Func Offset: 0xdc
	// Line 118, Address: 0x1c56d0, Func Offset: 0xe0
	// Line 119, Address: 0x1c56dc, Func Offset: 0xec
	// Line 120, Address: 0x1c56f8, Func Offset: 0x108
	// Line 121, Address: 0x1c56fc, Func Offset: 0x10c
	// Func End, Address: 0x1c5710, Func Offset: 0x120
}

// 
// Start address: 0x1c5710
int shPathMakeIop(char* fullpath, char* filename)
{
	char nullstr[1];
	char* hdpath;
	char* ioppath;
	// Line 124, Address: 0x1c5710, Func Offset: 0
	// Line 127, Address: 0x1c5728, Func Offset: 0x18
	// Line 128, Address: 0x1c573c, Func Offset: 0x2c
	// Line 130, Address: 0x1c574c, Func Offset: 0x3c
	// Line 131, Address: 0x1c5754, Func Offset: 0x44
	// Line 132, Address: 0x1c5760, Func Offset: 0x50
	// Line 135, Address: 0x1c577c, Func Offset: 0x6c
	// Line 136, Address: 0x1c5784, Func Offset: 0x74
	// Line 137, Address: 0x1c578c, Func Offset: 0x7c
	// Line 138, Address: 0x1c5798, Func Offset: 0x88
	// Line 140, Address: 0x1c57b0, Func Offset: 0xa0
	// Func End, Address: 0x1c57c8, Func Offset: 0xb8
}

// 
// Start address: 0x1c57d0
int shPathMakeCdData(char* fullpath, char* filename)
{
	char nullstr[1];
	char* datapath;
	// Line 143, Address: 0x1c57d0, Func Offset: 0
	// Line 145, Address: 0x1c57e4, Func Offset: 0x14
	// Line 146, Address: 0x1c57f8, Func Offset: 0x28
	// Line 147, Address: 0x1c5800, Func Offset: 0x30
	// Line 149, Address: 0x1c580c, Func Offset: 0x3c
	// Line 150, Address: 0x1c5820, Func Offset: 0x50
	// Func End, Address: 0x1c5834, Func Offset: 0x64
}

// 
// Start address: 0x1c5840
int shPathMakeHdData(char* fullpath, char* filename)
{
	char nullstr[1];
	char* hdpath;
	char* datapath;
	// Line 153, Address: 0x1c5840, Func Offset: 0
	// Line 156, Address: 0x1c5858, Func Offset: 0x18
	// Line 157, Address: 0x1c586c, Func Offset: 0x2c
	// Line 158, Address: 0x1c5874, Func Offset: 0x34
	// Line 159, Address: 0x1c5880, Func Offset: 0x40
	// Line 160, Address: 0x1c5888, Func Offset: 0x48
	// Line 162, Address: 0x1c5894, Func Offset: 0x54
	// Line 163, Address: 0x1c58ac, Func Offset: 0x6c
	// Func End, Address: 0x1c58c4, Func Offset: 0x84
}

// 
// Start address: 0x1c58d0
int shPathMakeCdDataBase(char* fullpath, char* filename)
{
	char nullstr[1];
	char* datapath;
	// Line 166, Address: 0x1c58d0, Func Offset: 0
	// Line 168, Address: 0x1c58e4, Func Offset: 0x14
	// Line 169, Address: 0x1c58f8, Func Offset: 0x28
	// Line 170, Address: 0x1c5900, Func Offset: 0x30
	// Line 172, Address: 0x1c590c, Func Offset: 0x3c
	// Line 173, Address: 0x1c5920, Func Offset: 0x50
	// Func End, Address: 0x1c5934, Func Offset: 0x64
}

// 
// Start address: 0x1c5940
int shPathMakeHdDataBase(char* fullpath, char* filename)
{
	char nullstr[1];
	char* hdpath;
	char* datapath;
	// Line 176, Address: 0x1c5940, Func Offset: 0
	// Line 179, Address: 0x1c5958, Func Offset: 0x18
	// Line 180, Address: 0x1c596c, Func Offset: 0x2c
	// Line 181, Address: 0x1c5974, Func Offset: 0x34
	// Line 182, Address: 0x1c5980, Func Offset: 0x40
	// Line 183, Address: 0x1c5988, Func Offset: 0x48
	// Line 185, Address: 0x1c5994, Func Offset: 0x54
	// Line 186, Address: 0x1c59ac, Func Offset: 0x6c
	// Func End, Address: 0x1c59c4, Func Offset: 0x84
}

// 
// Start address: 0x1c59d0
int _shPathMakeCdDataBase(char* fullpath, char* filename)
{
	// Line 190, Address: 0x1c59d0, Func Offset: 0
	// Line 191, Address: 0x1c59e0, Func Offset: 0x10
	// Line 192, Address: 0x1c59f0, Func Offset: 0x20
	// Func End, Address: 0x1c5a00, Func Offset: 0x30
}

// 
// Start address: 0x1c5a00
int _shPathMakeCdData(char* fullpath, char* filename)
{
	// Line 194, Address: 0x1c5a00, Func Offset: 0
	// Line 195, Address: 0x1c5a10, Func Offset: 0x10
	// Line 196, Address: 0x1c5a20, Func Offset: 0x20
	// Func End, Address: 0x1c5a30, Func Offset: 0x30
}

// 
// Start address: 0x1c5a30
int _shPathMakeHdDataBase(char* fullpath, char* filename)
{
	// Line 198, Address: 0x1c5a30, Func Offset: 0
	// Line 199, Address: 0x1c5a40, Func Offset: 0x10
	// Line 200, Address: 0x1c5a50, Func Offset: 0x20
	// Func End, Address: 0x1c5a60, Func Offset: 0x30
}

// 
// Start address: 0x1c5a60
int _shPathMakeHdData(char* fullpath, char* filename)
{
	// Line 202, Address: 0x1c5a60, Func Offset: 0
	// Line 203, Address: 0x1c5a70, Func Offset: 0x10
	// Line 204, Address: 0x1c5a80, Func Offset: 0x20
	// Func End, Address: 0x1c5a90, Func Offset: 0x30
}

