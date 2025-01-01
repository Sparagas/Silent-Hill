typedef struct MemShareCtrl;

typedef int(*type_2)();
typedef int(*type_3)(int(*)());
typedef int(*type_4)();

typedef char* type_0[8];
typedef char* type_1[8];
typedef char type_5[13180928];

struct MemShareCtrl
{
	int cid;
	int step;
	char* movie_tag;
	char* movie_vo;
	char* movie_vi;
	char* movie_mpeg;
	char* movie_read;
	int pad;
	char* _effect;
	char* effect;
	char* _effect2;
	char* effect2;
	char* _bg_chara;
	char* bg_chara;
	char* _bg_c_cache;
	char* bg_c_cache;
	char* _bg_l_cache;
	char* bg_l_cache;
	char* _bg_loadall;
	char* bg_loadall;
	char* _bg_load[8];
	char* bg_load[8];
};

MemShareCtrl mem_share_ctrl;
char MemShare_gp_data_buf[13180928];
int(*lisPutCmd0)(int(*)());
int(*___MemShareLoadInit)();

int ___MemShareRemove();
int ___MemShareLoadInit();
int ___MemShareLoadFinish();
void MemShareClearWorkAddr(int notall);
void MemShareAllocateTitleMovie();
void MemShareAllocateEventMovie(int slot);
void ___MemShareReleaseMovie(int notall);
void MemShareReleaseMovie();
void MemShareRecoverMovie();
void MemShareWaitRealloc(int mode);
void* MemShareGetBgLoadWorkAddr();
void* MemShareGetBgLoadSectionWorkAddr(int slot);
void* MemShareGetBgLoadCacheAddr();
void* MemShareGetBgCharaWorkAddr();
void* MemShareGetEffect2WorkAddr();
void* MemShareGetMovieTagWorkAddr();
void* MemShareGetMovieVoWorkAddr();
void* MemShareGetMovieViWorkAddr();
void* MemShareGetMovieMpegWorkAddr();
void* MemShareGetMovieReadWorkAddr();

// 
// Start address: 0x292850
int ___MemShareRemove()
{
	// Line 103, Address: 0x292850, Func Offset: 0
	// Line 104, Address: 0x292858, Func Offset: 0x8
	// Line 105, Address: 0x292860, Func Offset: 0x10
	// Line 106, Address: 0x292864, Func Offset: 0x14
	// Func End, Address: 0x292874, Func Offset: 0x24
}

// 
// Start address: 0x292880
int ___MemShareLoadInit()
{
	// Line 109, Address: 0x292880, Func Offset: 0
	// Line 110, Address: 0x292888, Func Offset: 0x8
	// Line 111, Address: 0x292890, Func Offset: 0x10
	// Line 112, Address: 0x292894, Func Offset: 0x14
	// Func End, Address: 0x2928a4, Func Offset: 0x24
}

// 
// Start address: 0x2928b0
int ___MemShareLoadFinish()
{
	// Line 115, Address: 0x2928b0, Func Offset: 0
	// Line 116, Address: 0x2928b8, Func Offset: 0x8
	// Line 117, Address: 0x2928c0, Func Offset: 0x10
	// Line 118, Address: 0x2928c4, Func Offset: 0x14
	// Func End, Address: 0x2928d4, Func Offset: 0x24
}

// 
// Start address: 0x2928e0
void MemShareClearWorkAddr(int notall)
{
	int i;
	// Line 122, Address: 0x2928e0, Func Offset: 0
	// Line 123, Address: 0x2928e8, Func Offset: 0x8
	// Line 124, Address: 0x2928f0, Func Offset: 0x10
	// Line 125, Address: 0x2928f8, Func Offset: 0x18
	// Line 126, Address: 0x292900, Func Offset: 0x20
	// Line 128, Address: 0x292908, Func Offset: 0x28
	// Line 129, Address: 0x292914, Func Offset: 0x34
	// Line 130, Address: 0x29291c, Func Offset: 0x3c
	// Line 131, Address: 0x292924, Func Offset: 0x44
	// Line 132, Address: 0x29292c, Func Offset: 0x4c
	// Line 133, Address: 0x292934, Func Offset: 0x54
	// Line 135, Address: 0x29293c, Func Offset: 0x5c
	// Line 136, Address: 0x292944, Func Offset: 0x64
	// Line 137, Address: 0x29294c, Func Offset: 0x6c
	// Line 138, Address: 0x292954, Func Offset: 0x74
	// Line 139, Address: 0x29295c, Func Offset: 0x7c
	// Line 142, Address: 0x292964, Func Offset: 0x84
	// Line 144, Address: 0x292970, Func Offset: 0x90
	// Line 145, Address: 0x292978, Func Offset: 0x98
	// Line 146, Address: 0x292984, Func Offset: 0xa4
	// Line 147, Address: 0x292998, Func Offset: 0xb8
	// Line 149, Address: 0x2929ac, Func Offset: 0xcc
	// Line 150, Address: 0x2929b4, Func Offset: 0xd4
	// Line 151, Address: 0x2929c0, Func Offset: 0xe0
	// Line 152, Address: 0x2929d4, Func Offset: 0xf4
	// Line 153, Address: 0x2929e4, Func Offset: 0x104
	// Line 154, Address: 0x2929e8, Func Offset: 0x108
	// Func End, Address: 0x2929f0, Func Offset: 0x110
}

// 
// Start address: 0x2929f0
void MemShareAllocateTitleMovie()
{
	char* addr;
	// Line 162, Address: 0x2929f0, Func Offset: 0
	// Line 164, Address: 0x2929f8, Func Offset: 0x8
	// Line 165, Address: 0x292a34, Func Offset: 0x44
	// Line 166, Address: 0x292a4c, Func Offset: 0x5c
	// Line 168, Address: 0x292a58, Func Offset: 0x68
	// Line 169, Address: 0x292a68, Func Offset: 0x78
	// Line 171, Address: 0x292a74, Func Offset: 0x84
	// Line 173, Address: 0x292a84, Func Offset: 0x94
	// Line 174, Address: 0x292a8c, Func Offset: 0x9c
	// Line 176, Address: 0x292a98, Func Offset: 0xa8
	// Line 177, Address: 0x292aa0, Func Offset: 0xb0
	// Line 178, Address: 0x292aa8, Func Offset: 0xb8
	// Line 179, Address: 0x292abc, Func Offset: 0xcc
	// Line 180, Address: 0x292ad0, Func Offset: 0xe0
	// Line 181, Address: 0x292ae4, Func Offset: 0xf4
	// Line 183, Address: 0x292af8, Func Offset: 0x108
	// Func End, Address: 0x292b08, Func Offset: 0x118
}

// 
// Start address: 0x292b10
void MemShareAllocateEventMovie(int slot)
{
	char* addr;
	// Line 186, Address: 0x292b10, Func Offset: 0
	// Line 188, Address: 0x292b20, Func Offset: 0x10
	// Line 189, Address: 0x292b5c, Func Offset: 0x4c
	// Line 190, Address: 0x292b64, Func Offset: 0x54
	// Line 192, Address: 0x292b70, Func Offset: 0x60
	// Line 194, Address: 0x292b7c, Func Offset: 0x6c
	// Line 195, Address: 0x292b84, Func Offset: 0x74
	// Line 197, Address: 0x292b90, Func Offset: 0x80
	// Line 198, Address: 0x292b98, Func Offset: 0x88
	// Line 199, Address: 0x292ba0, Func Offset: 0x90
	// Line 200, Address: 0x292bb4, Func Offset: 0xa4
	// Line 201, Address: 0x292bc8, Func Offset: 0xb8
	// Line 203, Address: 0x292bdc, Func Offset: 0xcc
	// Line 205, Address: 0x292be4, Func Offset: 0xd4
	// Line 206, Address: 0x292c08, Func Offset: 0xf8
	// Line 207, Address: 0x292c10, Func Offset: 0x100
	// Line 208, Address: 0x292c38, Func Offset: 0x128
	// Line 209, Address: 0x292c48, Func Offset: 0x138
	// Line 210, Address: 0x292c58, Func Offset: 0x148
	// Line 212, Address: 0x292c68, Func Offset: 0x158
	// Func End, Address: 0x292c7c, Func Offset: 0x16c
}

// 
// Start address: 0x292c80
void ___MemShareReleaseMovie(int notall)
{
	int i;
	char* addr;
	// Line 216, Address: 0x292c80, Func Offset: 0
	// Line 219, Address: 0x292c88, Func Offset: 0x8
	// Line 223, Address: 0x292c90, Func Offset: 0x10
	// Line 225, Address: 0x292c98, Func Offset: 0x18
	// Line 228, Address: 0x292ca0, Func Offset: 0x20
	// Line 231, Address: 0x292cb0, Func Offset: 0x30
	// Line 237, Address: 0x292cc4, Func Offset: 0x44
	// Line 243, Address: 0x292cd8, Func Offset: 0x58
	// Line 244, Address: 0x292ce0, Func Offset: 0x60
	// Line 245, Address: 0x292ce8, Func Offset: 0x68
	// Line 246, Address: 0x292cf4, Func Offset: 0x74
	// Line 247, Address: 0x292d08, Func Offset: 0x88
	// Line 248, Address: 0x292d20, Func Offset: 0xa0
	// Line 250, Address: 0x292d34, Func Offset: 0xb4
	// Func End, Address: 0x292d44, Func Offset: 0xc4
}

// 
// Start address: 0x292d50
void MemShareReleaseMovie()
{
	int cid;
	// Line 253, Address: 0x292d50, Func Offset: 0
	// Line 255, Address: 0x292d58, Func Offset: 0x8
	// Line 256, Address: 0x292d94, Func Offset: 0x44
	// Line 257, Address: 0x292da0, Func Offset: 0x50
	// Line 258, Address: 0x292dac, Func Offset: 0x5c
	// Line 260, Address: 0x292db8, Func Offset: 0x68
	// Line 261, Address: 0x292dd0, Func Offset: 0x80
	// Line 262, Address: 0x292ddc, Func Offset: 0x8c
	// Line 263, Address: 0x292de4, Func Offset: 0x94
	// Line 265, Address: 0x292df0, Func Offset: 0xa0
	// Func End, Address: 0x292e00, Func Offset: 0xb0
}

// 
// Start address: 0x292e00
void MemShareRecoverMovie()
{
	// Line 268, Address: 0x292e00, Func Offset: 0
	// Line 269, Address: 0x292e08, Func Offset: 0x8
	// Line 270, Address: 0x292e44, Func Offset: 0x44
	// Line 271, Address: 0x292e50, Func Offset: 0x50
	// Line 273, Address: 0x292e58, Func Offset: 0x58
	// Line 274, Address: 0x292e6c, Func Offset: 0x6c
	// Line 275, Address: 0x292e74, Func Offset: 0x74
	// Line 277, Address: 0x292e80, Func Offset: 0x80
	// Func End, Address: 0x292e90, Func Offset: 0x90
}

// 
// Start address: 0x292e90
void MemShareWaitRealloc(int mode)
{
	int cid;
	// Line 280, Address: 0x292e90, Func Offset: 0
	// Line 282, Address: 0x292ea0, Func Offset: 0x10
	// Line 285, Address: 0x292eb4, Func Offset: 0x24
	// Line 286, Address: 0x292ec0, Func Offset: 0x30
	// Line 288, Address: 0x292ec8, Func Offset: 0x38
	// Line 289, Address: 0x292edc, Func Offset: 0x4c
	// Line 291, Address: 0x292ee4, Func Offset: 0x54
	// Line 292, Address: 0x292eec, Func Offset: 0x5c
	// Line 293, Address: 0x292f0c, Func Offset: 0x7c
	// Line 294, Address: 0x292f20, Func Offset: 0x90
	// Line 296, Address: 0x292f28, Func Offset: 0x98
	// Line 297, Address: 0x292f3c, Func Offset: 0xac
	// Line 298, Address: 0x292f44, Func Offset: 0xb4
	// Line 300, Address: 0x292f50, Func Offset: 0xc0
	// Line 302, Address: 0x292f58, Func Offset: 0xc8
	// Func End, Address: 0x292f6c, Func Offset: 0xdc
}

// 
// Start address: 0x292f70
void* MemShareGetBgLoadWorkAddr()
{
	void* addr;
	// Line 314, Address: 0x292f70, Func Offset: 0
	// Line 316, Address: 0x292f78, Func Offset: 0x8
	// Line 317, Address: 0x292f88, Func Offset: 0x18
	// Line 320, Address: 0x292f90, Func Offset: 0x20
	// Func End, Address: 0x292f98, Func Offset: 0x28
}

// 
// Start address: 0x292fa0
void* MemShareGetBgLoadSectionWorkAddr(int slot)
{
	void* addr;
	// Line 332, Address: 0x292fa0, Func Offset: 0
	// Line 333, Address: 0x292fb4, Func Offset: 0x14
	// Line 334, Address: 0x292fcc, Func Offset: 0x2c
	// Line 337, Address: 0x292fd0, Func Offset: 0x30
	// Func End, Address: 0x292fd8, Func Offset: 0x38
}

// 
// Start address: 0x292fe0
void* MemShareGetBgLoadCacheAddr()
{
	void* addr;
	// Line 349, Address: 0x292fe0, Func Offset: 0
	// Line 351, Address: 0x292fe8, Func Offset: 0x8
	// Line 352, Address: 0x292ff8, Func Offset: 0x18
	// Line 355, Address: 0x293000, Func Offset: 0x20
	// Func End, Address: 0x293008, Func Offset: 0x28
}

// 
// Start address: 0x293010
void* MemShareGetBgCharaWorkAddr()
{
	void* addr;
	// Line 388, Address: 0x293010, Func Offset: 0
	// Line 390, Address: 0x293018, Func Offset: 0x8
	// Line 391, Address: 0x293028, Func Offset: 0x18
	// Line 394, Address: 0x293030, Func Offset: 0x20
	// Func End, Address: 0x293038, Func Offset: 0x28
}

// 
// Start address: 0x293040
void* MemShareGetEffect2WorkAddr()
{
	void* addr;
	// Line 424, Address: 0x293040, Func Offset: 0
	// Line 426, Address: 0x293048, Func Offset: 0x8
	// Line 427, Address: 0x293058, Func Offset: 0x18
	// Line 430, Address: 0x293060, Func Offset: 0x20
	// Func End, Address: 0x293068, Func Offset: 0x28
}

// 
// Start address: 0x293070
void* MemShareGetMovieTagWorkAddr()
{
	// Line 436, Address: 0x293070, Func Offset: 0
	// Line 437, Address: 0x293078, Func Offset: 0x8
	// Func End, Address: 0x293080, Func Offset: 0x10
}

// 
// Start address: 0x293080
void* MemShareGetMovieVoWorkAddr()
{
	// Line 441, Address: 0x293080, Func Offset: 0
	// Line 442, Address: 0x293088, Func Offset: 0x8
	// Func End, Address: 0x293090, Func Offset: 0x10
}

// 
// Start address: 0x293090
void* MemShareGetMovieViWorkAddr()
{
	// Line 446, Address: 0x293090, Func Offset: 0
	// Line 447, Address: 0x293098, Func Offset: 0x8
	// Func End, Address: 0x2930a0, Func Offset: 0x10
}

// 
// Start address: 0x2930a0
void* MemShareGetMovieMpegWorkAddr()
{
	// Line 451, Address: 0x2930a0, Func Offset: 0
	// Line 452, Address: 0x2930a8, Func Offset: 0x8
	// Func End, Address: 0x2930b0, Func Offset: 0x10
}

// 
// Start address: 0x2930b0
void* MemShareGetMovieReadWorkAddr()
{
	// Line 456, Address: 0x2930b0, Func Offset: 0
	// Line 457, Address: 0x2930b8, Func Offset: 0x8
	// Func End, Address: 0x2930c0, Func Offset: 0x10
}

