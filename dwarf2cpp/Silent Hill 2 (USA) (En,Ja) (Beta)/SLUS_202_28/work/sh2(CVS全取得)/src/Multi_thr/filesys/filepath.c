

typedef char type_0[1];
typedef char type_1[256];
typedef char type_2[260];
typedef char type_3[1];
typedef char type_4[1];
typedef char type_5[1];
typedef char type_6[1];
typedef char type_7[256];
typedef char type_8[256];
typedef char type_9[3];

char* devstr_cdrom0;
char* devstr_host0;
char* execEnv_host_path;
char* execEnv_iop_path;
char* execEnv_iop_path_hd;
char* execEnv_data_path;
char* execEnv_database_path;

int pathname_skipcheck(char* filename);
int shPathCheckExecRoot(char* filename);
int shPathMakeCd(char* fullpath, char* pathname, char* filename);
int shPathMakeHd(char* fullpath, char* rootpath, char* pathname, char* filename);
int shPathMakeIop(char* fullpath, char* filename);
int shPathMakeCdData(char* fullpath, char* filename);
int shPathMakeHdData(char* fullpath, char* filename);
int shPathMakeCdDataBase(char* fullpath, char* filename);
int shPathMakeHdDataBase(char* fullpath, char* filename);
int ___shPathMakeCdDataBase(char* fullpath, char* filename);
int ___shPathMakeCdData(char* fullpath, char* filename);
int ___shPathMakeHdDataBase(char* fullpath, char* filename);
int ___shPathMakeHdData(char* fullpath, char* filename);

// 
// Start address: 0x1bc060
int pathname_skipcheck(char* filename)
{
	// Line 103, Address: 0x1bc060, Func Offset: 0
	// Line 106, Address: 0x1bc090, Func Offset: 0x30
	// Line 108, Address: 0x1bc09c, Func Offset: 0x3c
	// Line 111, Address: 0x1bc0c8, Func Offset: 0x68
	// Line 113, Address: 0x1bc0d4, Func Offset: 0x74
	// Line 116, Address: 0x1bc0f8, Func Offset: 0x98
	// Line 121, Address: 0x1bc104, Func Offset: 0xa4
	// Line 122, Address: 0x1bc114, Func Offset: 0xb4
	// Line 123, Address: 0x1bc12c, Func Offset: 0xcc
	// Line 124, Address: 0x1bc138, Func Offset: 0xd8
	// Line 125, Address: 0x1bc150, Func Offset: 0xf0
	// Line 130, Address: 0x1bc15c, Func Offset: 0xfc
	// Line 131, Address: 0x1bc160, Func Offset: 0x100
	// Func End, Address: 0x1bc168, Func Offset: 0x108
}

// 
// Start address: 0x1bc170
int shPathCheckExecRoot(char* filename)
{
	// Line 144, Address: 0x1bc170, Func Offset: 0
	// Line 145, Address: 0x1bc178, Func Offset: 0x8
	// Line 146, Address: 0x1bc188, Func Offset: 0x18
	// Func End, Address: 0x1bc198, Func Offset: 0x28
}

// 
// Start address: 0x1bc1a0
int shPathMakeCd(char* fullpath, char* pathname, char* filename)
{
	char work2[260];
	char work1[256];
	char* work;
	int len;
	char suffix[3];
	char* prefix;
	// Line 152, Address: 0x1bc1a0, Func Offset: 0
	// Line 154, Address: 0x1bc1b4, Func Offset: 0x14
	// Line 155, Address: 0x1bc1bc, Func Offset: 0x1c
	// Line 161, Address: 0x1bc1d8, Func Offset: 0x38
	// Line 162, Address: 0x1bc1ec, Func Offset: 0x4c
	// Line 163, Address: 0x1bc1fc, Func Offset: 0x5c
	// Line 165, Address: 0x1bc204, Func Offset: 0x64
	// Line 166, Address: 0x1bc220, Func Offset: 0x80
	// Line 168, Address: 0x1bc234, Func Offset: 0x94
	// Line 169, Address: 0x1bc238, Func Offset: 0x98
	// Line 170, Address: 0x1bc23c, Func Offset: 0x9c
	// Line 172, Address: 0x1bc260, Func Offset: 0xc0
	// Line 174, Address: 0x1bc278, Func Offset: 0xd8
	// Line 175, Address: 0x1bc284, Func Offset: 0xe4
	// Line 176, Address: 0x1bc2a0, Func Offset: 0x100
	// Line 177, Address: 0x1bc2a4, Func Offset: 0x104
	// Func End, Address: 0x1bc2bc, Func Offset: 0x11c
}

// 
// Start address: 0x1bc2c0
int shPathMakeHd(char* fullpath, char* rootpath, char* pathname, char* filename)
{
	char work2[256];
	char work1[256];
	int len;
	char* prefix;
	// Line 184, Address: 0x1bc2c0, Func Offset: 0
	// Line 186, Address: 0x1bc2dc, Func Offset: 0x1c
	// Line 196, Address: 0x1bc2e4, Func Offset: 0x24
	// Line 197, Address: 0x1bc2f8, Func Offset: 0x38
	// Line 198, Address: 0x1bc308, Func Offset: 0x48
	// Line 199, Address: 0x1bc310, Func Offset: 0x50
	// Line 201, Address: 0x1bc324, Func Offset: 0x64
	// Line 203, Address: 0x1bc328, Func Offset: 0x68
	// Line 204, Address: 0x1bc33c, Func Offset: 0x7c
	// Line 205, Address: 0x1bc354, Func Offset: 0x94
	// Line 206, Address: 0x1bc35c, Func Offset: 0x9c
	// Line 208, Address: 0x1bc370, Func Offset: 0xb0
	// Line 210, Address: 0x1bc374, Func Offset: 0xb4
	// Line 211, Address: 0x1bc380, Func Offset: 0xc0
	// Line 212, Address: 0x1bc398, Func Offset: 0xd8
	// Line 213, Address: 0x1bc39c, Func Offset: 0xdc
	// Func End, Address: 0x1bc3b8, Func Offset: 0xf8
}

// 
// Start address: 0x1bc3c0
int shPathMakeIop(char* fullpath, char* filename)
{
	char nullstr[1];
	char* hdpath;
	char* ioppath;
	// Line 216, Address: 0x1bc3c0, Func Offset: 0
	// Line 219, Address: 0x1bc3cc, Func Offset: 0xc
	// Line 220, Address: 0x1bc3e0, Func Offset: 0x20
	// Line 222, Address: 0x1bc3f0, Func Offset: 0x30
	// Line 223, Address: 0x1bc3f8, Func Offset: 0x38
	// Line 224, Address: 0x1bc404, Func Offset: 0x44
	// Line 228, Address: 0x1bc418, Func Offset: 0x58
	// Line 229, Address: 0x1bc420, Func Offset: 0x60
	// Line 230, Address: 0x1bc42c, Func Offset: 0x6c
	// Line 232, Address: 0x1bc434, Func Offset: 0x74
	// Func End, Address: 0x1bc444, Func Offset: 0x84
}

// 
// Start address: 0x1bc450
int shPathMakeCdData(char* fullpath, char* filename)
{
	char nullstr[1];
	char* datapath;
	// Line 235, Address: 0x1bc450, Func Offset: 0
	// Line 237, Address: 0x1bc45c, Func Offset: 0xc
	// Line 238, Address: 0x1bc470, Func Offset: 0x20
	// Line 239, Address: 0x1bc478, Func Offset: 0x28
	// Line 241, Address: 0x1bc484, Func Offset: 0x34
	// Line 242, Address: 0x1bc48c, Func Offset: 0x3c
	// Func End, Address: 0x1bc49c, Func Offset: 0x4c
}

// 
// Start address: 0x1bc4a0
int shPathMakeHdData(char* fullpath, char* filename)
{
	char nullstr[1];
	char* hdpath;
	char* datapath;
	// Line 245, Address: 0x1bc4a0, Func Offset: 0
	// Line 248, Address: 0x1bc4ac, Func Offset: 0xc
	// Line 249, Address: 0x1bc4c0, Func Offset: 0x20
	// Line 250, Address: 0x1bc4c8, Func Offset: 0x28
	// Line 251, Address: 0x1bc4d4, Func Offset: 0x34
	// Line 252, Address: 0x1bc4dc, Func Offset: 0x3c
	// Line 254, Address: 0x1bc4e8, Func Offset: 0x48
	// Line 255, Address: 0x1bc4f0, Func Offset: 0x50
	// Func End, Address: 0x1bc500, Func Offset: 0x60
}

// 
// Start address: 0x1bc500
int shPathMakeCdDataBase(char* fullpath, char* filename)
{
	char nullstr[1];
	char* datapath;
	// Line 258, Address: 0x1bc500, Func Offset: 0
	// Line 260, Address: 0x1bc50c, Func Offset: 0xc
	// Line 261, Address: 0x1bc520, Func Offset: 0x20
	// Line 262, Address: 0x1bc528, Func Offset: 0x28
	// Line 264, Address: 0x1bc534, Func Offset: 0x34
	// Line 265, Address: 0x1bc53c, Func Offset: 0x3c
	// Func End, Address: 0x1bc54c, Func Offset: 0x4c
}

// 
// Start address: 0x1bc550
int shPathMakeHdDataBase(char* fullpath, char* filename)
{
	char nullstr[1];
	char* hdpath;
	char* datapath;
	// Line 268, Address: 0x1bc550, Func Offset: 0
	// Line 271, Address: 0x1bc55c, Func Offset: 0xc
	// Line 272, Address: 0x1bc570, Func Offset: 0x20
	// Line 273, Address: 0x1bc578, Func Offset: 0x28
	// Line 274, Address: 0x1bc584, Func Offset: 0x34
	// Line 275, Address: 0x1bc58c, Func Offset: 0x3c
	// Line 277, Address: 0x1bc598, Func Offset: 0x48
	// Line 278, Address: 0x1bc5a0, Func Offset: 0x50
	// Func End, Address: 0x1bc5b0, Func Offset: 0x60
}

// 
// Start address: 0x1bc5b0
int ___shPathMakeCdDataBase(char* fullpath, char* filename)
{
	// Line 282, Address: 0x1bc5b0, Func Offset: 0
	// Line 283, Address: 0x1bc5b8, Func Offset: 0x8
	// Line 284, Address: 0x1bc5c0, Func Offset: 0x10
	// Func End, Address: 0x1bc5d0, Func Offset: 0x20
}

// 
// Start address: 0x1bc5d0
int ___shPathMakeCdData(char* fullpath, char* filename)
{
	// Line 286, Address: 0x1bc5d0, Func Offset: 0
	// Line 287, Address: 0x1bc5d8, Func Offset: 0x8
	// Line 288, Address: 0x1bc5e0, Func Offset: 0x10
	// Func End, Address: 0x1bc5f0, Func Offset: 0x20
}

// 
// Start address: 0x1bc5f0
int ___shPathMakeHdDataBase(char* fullpath, char* filename)
{
	// Line 290, Address: 0x1bc5f0, Func Offset: 0
	// Line 291, Address: 0x1bc5f8, Func Offset: 0x8
	// Line 292, Address: 0x1bc600, Func Offset: 0x10
	// Func End, Address: 0x1bc610, Func Offset: 0x20
}

// 
// Start address: 0x1bc610
int ___shPathMakeHdData(char* fullpath, char* filename)
{
	// Line 294, Address: 0x1bc610, Func Offset: 0
	// Line 295, Address: 0x1bc618, Func Offset: 0x8
	// Line 296, Address: 0x1bc620, Func Offset: 0x10
	// Func End, Address: 0x1bc630, Func Offset: 0x20
}

