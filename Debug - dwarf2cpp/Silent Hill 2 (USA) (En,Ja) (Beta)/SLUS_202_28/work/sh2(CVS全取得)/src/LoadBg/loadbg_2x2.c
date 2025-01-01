typedef struct _loadBg2x2_Ctrl;
typedef struct _loadBgMem_UnitR;
typedef struct fsMgfFile;
typedef union fsFileIndex;
typedef struct loadBgMem_Sect;
typedef union fsFile;
typedef struct fsHdFile;
typedef struct _loadBgMem_UnitC;
typedef struct fsMgpFile;
typedef struct _loadBgMem_LoadCtrl;
typedef struct fsMgcFile;
typedef struct _anon0;
typedef struct _loadBgMem_UnitL;
typedef struct _loadBgMem_CacheCtrl;
typedef struct _anon1;
typedef struct loadBgMem_File;
typedef struct FilesBgBlock;
typedef struct fsCdFile;


typedef _loadBgMem_UnitC type_0[8];
typedef _loadBgMem_LoadCtrl type_1[1];
typedef _loadBgMem_CacheCtrl type_2[1];
typedef loadBgMem_Sect type_3[2];
typedef loadBgMem_Sect type_4[8];
typedef loadBgMem_File type_5[20];
typedef loadBgMem_File type_6[20][2];
typedef loadBgMem_File type_7[4];
typedef loadBgMem_File type_8[4][8];
typedef loadBgMem_Sect* type_9[8];
typedef int type_10[1];
typedef int type_11[1];
typedef int type_12[1];
typedef int type_13[1];
typedef int type_14[8];
typedef _loadBgMem_UnitL type_15[120];
typedef _loadBgMem_UnitR type_16[120];

struct _loadBg2x2_Ctrl
{
	_loadBgMem_LoadCtrl* load;
	_loadBgMem_CacheCtrl* cache;
	loadBgMem_Sect SectI[2];
	loadBgMem_Sect SectO[8];
	loadBgMem_File FileI[20][2];
	loadBgMem_File FileO[4][8];
	loadBgMem_Sect* SectList[8];
	int Sections;
	int cache_in_access_count[1];
	int cache_out_access_count[1];
	int file_access_count[1];
	int miss_access_count[1];
	int load_cleanup;
	int cache_cleanup;
	int slot_cleanup[8];
};

struct _loadBgMem_UnitR
{
	fsFileIndex* file;
	unsigned short unitID;
	unsigned short unitNo;
	int sectID;
	_loadBgMem_UnitR* nextR;
};

struct fsMgfFile
{
	struct
	{
		int type : 8;
		int padding : 24;
	};
	fsFile* parent;
	int offset;
	int size;
};

union fsFileIndex
{
	_anon1 index;
	unsigned long pack;
};

struct loadBgMem_Sect
{
	int ofsS;
	int ofsE;
	int files;
	loadBgMem_File* filelist;
	char reduceRate8;
	char upper;
	char overwrite;
	char sectID;
};

union fsFile
{
	_anon0 check;
	<unknown fundamental type (0xa510)> pack;
	fsCdFile cd;
	fsHdFile hd;
	fsMgcFile mgc;
	fsMgfFile mgf;
	fsMgpFile mgp;
};

struct fsHdFile
{
	struct
	{
		int type : 8;
		int padding : 24;
	};
	char* name;
	int offset;
	int size;
};

struct _loadBgMem_UnitC
{
	fsFileIndex* file;
	unsigned short unitID;
	unsigned short unitNo;
	_loadBgMem_UnitC* prevC;
	_loadBgMem_UnitC* nextC;
};

struct fsMgpFile
{
	struct
	{
		int type : 8;
		int padding : 24;
	};
	fsFile* file;
	fsMgcFile* start;
	fsMgcFile* end;
};

struct _loadBgMem_LoadCtrl
{
	int UnitSize;
	int Units;
	char* Buffer;
	_loadBgMem_UnitL* UnitLArray;
	_loadBgMem_UnitR* UnitRArray;
	_loadBgMem_UnitR* headR;
};

struct fsMgcFile
{
	struct
	{
		int type : 8;
		int padding : 24;
	};
	fsFile* parent;
	char* start;
	char* end;
};

struct _anon0
{
	struct
	{
		int type : 8;
		int number : 24;
	};
	int pad0;
	int pad1;
	int pad2;
};

struct _loadBgMem_UnitL
{
	fsFileIndex* file;
	unsigned short unitID;
	unsigned short unitNo;
	int fid;
	int pad;
};

struct _loadBgMem_CacheCtrl
{
	int UnitSize;
	int Units;
	char* Buffer;
	_loadBgMem_UnitC* UnitCArray;
	_loadBgMem_UnitC* headC;
	_loadBgMem_UnitC* tailC;
};

struct _anon1
{
	fsFile* fp;
	char* name;
};

struct loadBgMem_File
{
	fsFileIndex* file;
	int ofsS;
	int ofsE;
	void* addr;
};

struct FilesBgBlock
{
	fsFileIndex* map;
	fsFileIndex* cld;
	fsFileIndex* cam;
	fsFileIndex* kg2;
	fsFileIndex* tex;
	fsFileIndex* ex0;
	fsFileIndex* ex1;
	fsFileIndex* ex2;
};

struct fsCdFile
{
	struct
	{
		int type : 8;
		int number : 24;
	};
	char* name;
	int lsn;
	int size;
};

_loadBg2x2_Ctrl lb2x2Ctrl;
_loadBgMem_UnitC loadBg2x2_CacheUnit[8];
_loadBgMem_CacheCtrl loadBg2x2_CacheCtrl[1];
_loadBgMem_UnitR loadBg2x2_RequestUnit[120];
_loadBgMem_UnitL loadBg2x2_LoadUnit[120];
_loadBgMem_LoadCtrl loadBg2x2_LoadCtrl[1];

void loadBg2x2_ResetSectFileList(loadBgMem_File* filelist, int n);
void loadBg2x2_ResetSectionAll();
void* loadBg2x2_GetLoadWork();
void* loadBg2x2_GetCacheWork();
void loadBg2x2_CheckSlotWork();
void loadBg2x2_CheckCacheWork();
void loadBg2x2_CheckLoadWork();
void loadBg2x2_ClearRequest();
void loadBg2x2_SetRequest();
void loadBg2x2_CleanupNonRequest();
int loadBg2x2_GetOutdoorBlockSection(int bx, int bz);
int loadBg2x2_GetOutdoorBlockPhase(int bx, int bz);
int loadBg2x2_CheckLoadBufferOutdoor(int bx, int bz);
int loadBg2x2_SetRequestOutdoor(int prio, int reduceRate8, int bx, int bz, int mid);
int loadBg2x2_GetIndoorRoomSection(int roomid);
int loadBg2x2_CheckLoadBufferIndoor(int roomid);
int loadBg2x2_SetRequestIndoor(int roomid, int* mid4);
int loadBg2x2_CheckRequest(int* reqUnits);
int loadBg2x2_LoadRequest();
int loadBg2x2_ActivateRequestOutdoor(int slot, int mid, int* reqUnits);
int loadBg2x2_ActivateRequestIndoor(int* mid4, int* reqUnits);
int loadBg2x2_GetSlotOutdoor(int bx, int bz);
int loadBg2x2_GetFreeSlotIndoor(int roomid);
int loadBg2x2_GetUseSlotIndoor(int roomid);

// 
// Start address: 0x26f910
void loadBg2x2_ResetSectFileList(loadBgMem_File* filelist, int n)
{
	int i;
	// Line 54, Address: 0x26f910, Func Offset: 0
	// Line 55, Address: 0x26f91c, Func Offset: 0xc
	// Line 56, Address: 0x26f928, Func Offset: 0x18
	// Line 57, Address: 0x26f92c, Func Offset: 0x1c
	// Line 58, Address: 0x26f930, Func Offset: 0x20
	// Line 59, Address: 0x26f934, Func Offset: 0x24
	// Line 60, Address: 0x26f944, Func Offset: 0x34
	// Func End, Address: 0x26f94c, Func Offset: 0x3c
}

// 
// Start address: 0x26f950
void loadBg2x2_ResetSectionAll()
{
	int ofsS;
	int ofsSI;
	int j;
	int i;
	_loadBg2x2_Ctrl* ctrl;
	// Line 64, Address: 0x26f950, Func Offset: 0
	// Line 65, Address: 0x26f958, Func Offset: 0x8
	// Line 67, Address: 0x26f960, Func Offset: 0x10
	// Line 69, Address: 0x26f96c, Func Offset: 0x1c
	// Line 70, Address: 0x26f978, Func Offset: 0x28
	// Line 71, Address: 0x26f98c, Func Offset: 0x3c
	// Line 72, Address: 0x26f998, Func Offset: 0x48
	// Line 73, Address: 0x26f99c, Func Offset: 0x4c
	// Line 74, Address: 0x26f9ac, Func Offset: 0x5c
	// Line 75, Address: 0x26f9b4, Func Offset: 0x64
	// Line 76, Address: 0x26f9bc, Func Offset: 0x6c
	// Line 77, Address: 0x26f9c0, Func Offset: 0x70
	// Line 78, Address: 0x26f9c8, Func Offset: 0x78
	// Line 81, Address: 0x26f9d8, Func Offset: 0x88
	// Line 82, Address: 0x26f9e4, Func Offset: 0x94
	// Line 83, Address: 0x26f9f0, Func Offset: 0xa0
	// Line 84, Address: 0x26fa0c, Func Offset: 0xbc
	// Line 85, Address: 0x26fa18, Func Offset: 0xc8
	// Line 86, Address: 0x26fa1c, Func Offset: 0xcc
	// Line 87, Address: 0x26fa2c, Func Offset: 0xdc
	// Line 88, Address: 0x26fa30, Func Offset: 0xe0
	// Line 89, Address: 0x26fa34, Func Offset: 0xe4
	// Line 90, Address: 0x26fa38, Func Offset: 0xe8
	// Line 91, Address: 0x26fa40, Func Offset: 0xf0
	// Line 94, Address: 0x26fa50, Func Offset: 0x100
	// Line 95, Address: 0x26fa64, Func Offset: 0x114
	// Line 96, Address: 0x26fa70, Func Offset: 0x120
	// Line 97, Address: 0x26fa84, Func Offset: 0x134
	// Line 98, Address: 0x26fa88, Func Offset: 0x138
	// Func End, Address: 0x26fa98, Func Offset: 0x148
}

// 
// Start address: 0x26faa0
void* loadBg2x2_GetLoadWork()
{
	void* addr;
	// Line 109, Address: 0x26faa0, Func Offset: 0
	// Line 111, Address: 0x26faa8, Func Offset: 0x8
	// Line 112, Address: 0x26fab0, Func Offset: 0x10
	// Line 115, Address: 0x26fab8, Func Offset: 0x18
	// Line 119, Address: 0x26fac4, Func Offset: 0x24
	// Func End, Address: 0x26fad4, Func Offset: 0x34
}

// 
// Start address: 0x26fae0
void* loadBg2x2_GetCacheWork()
{
	void* addr;
	// Line 123, Address: 0x26fae0, Func Offset: 0
	// Line 126, Address: 0x26fae8, Func Offset: 0x8
	// Line 127, Address: 0x26faf0, Func Offset: 0x10
	// Line 128, Address: 0x26faf8, Func Offset: 0x18
	// Line 129, Address: 0x26fb00, Func Offset: 0x20
	// Line 130, Address: 0x26fb08, Func Offset: 0x28
	// Line 136, Address: 0x26fb14, Func Offset: 0x34
	// Func End, Address: 0x26fb24, Func Offset: 0x44
}

// 
// Start address: 0x26fb30
void loadBg2x2_CheckSlotWork()
{
	int slot;
	// Line 140, Address: 0x26fb30, Func Offset: 0
	// Line 142, Address: 0x26fb3c, Func Offset: 0xc
	// Line 143, Address: 0x26fb48, Func Offset: 0x18
	// Line 145, Address: 0x26fb5c, Func Offset: 0x2c
	// Line 146, Address: 0x26fb78, Func Offset: 0x48
	// Line 147, Address: 0x26fb80, Func Offset: 0x50
	// Line 149, Address: 0x26fb98, Func Offset: 0x68
	// Line 150, Address: 0x26fbac, Func Offset: 0x7c
	// Func End, Address: 0x26fbc0, Func Offset: 0x90
}

// 
// Start address: 0x26fbc0
void loadBg2x2_CheckCacheWork()
{
	void* addr;
	int try;
	// Line 154, Address: 0x26fbc0, Func Offset: 0
	// Line 157, Address: 0x26fbcc, Func Offset: 0xc
	// Line 159, Address: 0x26fbdc, Func Offset: 0x1c
	// Line 163, Address: 0x26fbe8, Func Offset: 0x28
	// Line 164, Address: 0x26fbf4, Func Offset: 0x34
	// Line 165, Address: 0x26fbfc, Func Offset: 0x3c
	// Line 166, Address: 0x26fc0c, Func Offset: 0x4c
	// Line 167, Address: 0x26fc1c, Func Offset: 0x5c
	// Line 175, Address: 0x26fc3c, Func Offset: 0x7c
	// Line 177, Address: 0x26fc44, Func Offset: 0x84
	// Line 179, Address: 0x26fc4c, Func Offset: 0x8c
	// Line 181, Address: 0x26fc58, Func Offset: 0x98
	// Func End, Address: 0x26fc6c, Func Offset: 0xac
}

// 
// Start address: 0x26fc70
void loadBg2x2_CheckLoadWork()
{
	void* addr;
	int try;
	// Line 186, Address: 0x26fc70, Func Offset: 0
	// Line 189, Address: 0x26fc7c, Func Offset: 0xc
	// Line 193, Address: 0x26fc88, Func Offset: 0x18
	// Line 194, Address: 0x26fc90, Func Offset: 0x20
	// Line 195, Address: 0x26fc98, Func Offset: 0x28
	// Line 196, Address: 0x26fca8, Func Offset: 0x38
	// Line 197, Address: 0x26fcb8, Func Offset: 0x48
	// Line 204, Address: 0x26fce4, Func Offset: 0x74
	// Line 207, Address: 0x26fcec, Func Offset: 0x7c
	// Line 209, Address: 0x26fcf4, Func Offset: 0x84
	// Line 211, Address: 0x26fcfc, Func Offset: 0x8c
	// Line 212, Address: 0x26fd08, Func Offset: 0x98
	// Line 214, Address: 0x26fd10, Func Offset: 0xa0
	// Line 215, Address: 0x26fd18, Func Offset: 0xa8
	// Func End, Address: 0x26fd2c, Func Offset: 0xbc
}

// 
// Start address: 0x26fd30
void loadBg2x2_ClearRequest()
{
	// Line 238, Address: 0x26fd30, Func Offset: 0
	// Line 239, Address: 0x26fd38, Func Offset: 0x8
	// Line 240, Address: 0x26fd40, Func Offset: 0x10
	// Line 241, Address: 0x26fd50, Func Offset: 0x20
	// Func End, Address: 0x26fd60, Func Offset: 0x30
}

// 
// Start address: 0x26fd60
void loadBg2x2_SetRequest()
{
	// Line 244, Address: 0x26fd60, Func Offset: 0
	// Line 245, Address: 0x26fd68, Func Offset: 0x8
	// Line 246, Address: 0x26fd80, Func Offset: 0x20
	// Func End, Address: 0x26fd90, Func Offset: 0x30
}

// 
// Start address: 0x26fd90
void loadBg2x2_CleanupNonRequest()
{
	int slot;
	// Line 249, Address: 0x26fd90, Func Offset: 0
	// Line 251, Address: 0x26fd98, Func Offset: 0x8
	// Line 252, Address: 0x26fdb0, Func Offset: 0x20
	// Line 253, Address: 0x26fdbc, Func Offset: 0x2c
	// Line 254, Address: 0x26fdd8, Func Offset: 0x48
	// Line 255, Address: 0x26fdec, Func Offset: 0x5c
	// Line 256, Address: 0x26fdf0, Func Offset: 0x60
	// Func End, Address: 0x26fe00, Func Offset: 0x70
}

// 
// Start address: 0x26fe00
int loadBg2x2_GetOutdoorBlockSection(int bx, int bz)
{
	// Line 265, Address: 0x26fe00, Func Offset: 0
	// Line 266, Address: 0x26fe10, Func Offset: 0x10
	// Func End, Address: 0x26fe18, Func Offset: 0x18
}

// 
// Start address: 0x26fe20
int loadBg2x2_GetOutdoorBlockPhase(int bx, int bz)
{
	// Line 275, Address: 0x26fe20, Func Offset: 0
	// Line 276, Address: 0x26fe34, Func Offset: 0x14
	// Func End, Address: 0x26fe3c, Func Offset: 0x1c
}

// 
// Start address: 0x26fe40
int loadBg2x2_CheckLoadBufferOutdoor(int bx, int bz)
{
	int bgslot;
	int cleanup;
	// Line 279, Address: 0x26fe40, Func Offset: 0
	// Line 283, Address: 0x26fe48, Func Offset: 0x8
	// Line 285, Address: 0x26fe50, Func Offset: 0x10
	// Line 295, Address: 0x26fe64, Func Offset: 0x24
	// Func End, Address: 0x26fe74, Func Offset: 0x34
}

// 
// Start address: 0x26fe80
int loadBg2x2_SetRequestOutdoor(int prio, int reduceRate8, int bx, int bz, int mid)
{
	int size;
	fsFileIndex* file;
	int j;
	int glb;
	FilesBgBlock* filesbg;
	fsFileIndex* file;
	int sectNo;
	int i;
	int n;
	loadBgMem_File* sFile;
	loadBgMem_Sect* SectO;
	_loadBg2x2_Ctrl* ctrl;
	// Line 304, Address: 0x26fe80, Func Offset: 0
	// Line 305, Address: 0x26febc, Func Offset: 0x3c
	// Line 311, Address: 0x26fec4, Func Offset: 0x44
	// Line 313, Address: 0x26fee0, Func Offset: 0x60
	// Line 314, Address: 0x26fef8, Func Offset: 0x78
	// Line 317, Address: 0x26ff04, Func Offset: 0x84
	// Line 319, Address: 0x26ff3c, Func Offset: 0xbc
	// Line 329, Address: 0x26ff40, Func Offset: 0xc0
	// Line 330, Address: 0x26ff50, Func Offset: 0xd0
	// Line 333, Address: 0x26ff60, Func Offset: 0xe0
	// Line 335, Address: 0x26ff64, Func Offset: 0xe4
	// Line 336, Address: 0x26ff68, Func Offset: 0xe8
	// Line 339, Address: 0x26ff70, Func Offset: 0xf0
	// Line 340, Address: 0x26ff7c, Func Offset: 0xfc
	// Line 342, Address: 0x26ffbc, Func Offset: 0x13c
	// Line 345, Address: 0x26ffcc, Func Offset: 0x14c
	// Line 346, Address: 0x26ffd4, Func Offset: 0x154
	// Line 348, Address: 0x26ffdc, Func Offset: 0x15c
	// Line 349, Address: 0x26ffe4, Func Offset: 0x164
	// Line 350, Address: 0x26fff0, Func Offset: 0x170
	// Line 352, Address: 0x26fff8, Func Offset: 0x178
	// Line 353, Address: 0x270024, Func Offset: 0x1a4
	// Line 354, Address: 0x270028, Func Offset: 0x1a8
	// Line 355, Address: 0x27005c, Func Offset: 0x1dc
	// Line 356, Address: 0x270060, Func Offset: 0x1e0
	// Line 357, Address: 0x270068, Func Offset: 0x1e8
	// Line 358, Address: 0x27006c, Func Offset: 0x1ec
	// Line 361, Address: 0x270084, Func Offset: 0x204
	// Line 364, Address: 0x270090, Func Offset: 0x210
	// Line 365, Address: 0x27009c, Func Offset: 0x21c
	// Line 366, Address: 0x2700a0, Func Offset: 0x220
	// Line 367, Address: 0x2700b0, Func Offset: 0x230
	// Line 368, Address: 0x2700b8, Func Offset: 0x238
	// Line 369, Address: 0x2700bc, Func Offset: 0x23c
	// Line 371, Address: 0x2700c0, Func Offset: 0x240
	// Line 372, Address: 0x2700c8, Func Offset: 0x248
	// Line 373, Address: 0x2700cc, Func Offset: 0x24c
	// Line 374, Address: 0x2700d0, Func Offset: 0x250
	// Line 375, Address: 0x2700e4, Func Offset: 0x264
	// Line 376, Address: 0x2700e8, Func Offset: 0x268
	// Func End, Address: 0x270118, Func Offset: 0x298
}

// 
// Start address: 0x270120
int loadBg2x2_GetIndoorRoomSection(int roomid)
{
	int sect;
	// Line 380, Address: 0x270120, Func Offset: 0
	// Line 382, Address: 0x270124, Func Offset: 0x4
	// Line 385, Address: 0x270138, Func Offset: 0x18
	// Line 391, Address: 0x27013c, Func Offset: 0x1c
	// Func End, Address: 0x270144, Func Offset: 0x24
}

// 
// Start address: 0x270150
int loadBg2x2_CheckLoadBufferIndoor(int roomid)
{
	int bgslot;
	int cleanup;
	// Line 394, Address: 0x270150, Func Offset: 0
	// Line 395, Address: 0x27015c, Func Offset: 0xc
	// Line 399, Address: 0x270160, Func Offset: 0x10
	// Line 402, Address: 0x270168, Func Offset: 0x18
	// Line 403, Address: 0x270180, Func Offset: 0x30
	// Line 404, Address: 0x27019c, Func Offset: 0x4c
	// Line 405, Address: 0x2701a8, Func Offset: 0x58
	// Line 406, Address: 0x2701b4, Func Offset: 0x64
	// Line 407, Address: 0x2701c0, Func Offset: 0x70
	// Line 408, Address: 0x2701cc, Func Offset: 0x7c
	// Line 432, Address: 0x2701d0, Func Offset: 0x80
	// Func End, Address: 0x2701e4, Func Offset: 0x94
}

// 
// Start address: 0x2701f0
int loadBg2x2_SetRequestIndoor(int roomid, int* mid4)
{
	int size;
	fsFileIndex* file;
	int j;
	int glb;
	FilesBgBlock* filesbg;
	fsFileIndex* file;
	int mid;
	int sectNo;
	int i;
	int slot;
	int n;
	loadBgMem_File* sFile;
	loadBgMem_Sect* SectI;
	_loadBg2x2_Ctrl* ctrl;
	// Line 435, Address: 0x2701f0, Func Offset: 0
	// Line 436, Address: 0x27021c, Func Offset: 0x2c
	// Line 443, Address: 0x270224, Func Offset: 0x34
	// Line 445, Address: 0x270240, Func Offset: 0x50
	// Line 446, Address: 0x270250, Func Offset: 0x60
	// Line 449, Address: 0x27025c, Func Offset: 0x6c
	// Line 450, Address: 0x270260, Func Offset: 0x70
	// Line 453, Address: 0x270294, Func Offset: 0xa4
	// Line 454, Address: 0x2702a0, Func Offset: 0xb0
	// Line 455, Address: 0x2702b0, Func Offset: 0xc0
	// Line 457, Address: 0x2702b4, Func Offset: 0xc4
	// Line 459, Address: 0x2702cc, Func Offset: 0xdc
	// Line 460, Address: 0x2702d0, Func Offset: 0xe0
	// Line 462, Address: 0x2702dc, Func Offset: 0xec
	// Line 463, Address: 0x2702e8, Func Offset: 0xf8
	// Line 464, Address: 0x270300, Func Offset: 0x110
	// Line 465, Address: 0x270308, Func Offset: 0x118
	// Line 466, Address: 0x270310, Func Offset: 0x120
	// Line 468, Address: 0x270314, Func Offset: 0x124
	// Line 469, Address: 0x27031c, Func Offset: 0x12c
	// Line 470, Address: 0x27032c, Func Offset: 0x13c
	// Line 471, Address: 0x270330, Func Offset: 0x140
	// Line 474, Address: 0x270338, Func Offset: 0x148
	// Line 475, Address: 0x270344, Func Offset: 0x154
	// Line 477, Address: 0x27037c, Func Offset: 0x18c
	// Line 480, Address: 0x27038c, Func Offset: 0x19c
	// Line 481, Address: 0x27039c, Func Offset: 0x1ac
	// Line 483, Address: 0x2703b0, Func Offset: 0x1c0
	// Line 484, Address: 0x2703c4, Func Offset: 0x1d4
	// Line 485, Address: 0x2703dc, Func Offset: 0x1ec
	// Line 487, Address: 0x2703e4, Func Offset: 0x1f4
	// Line 488, Address: 0x270414, Func Offset: 0x224
	// Line 489, Address: 0x270418, Func Offset: 0x228
	// Line 490, Address: 0x27042c, Func Offset: 0x23c
	// Line 491, Address: 0x27045c, Func Offset: 0x26c
	// Line 492, Address: 0x270460, Func Offset: 0x270
	// Line 493, Address: 0x270468, Func Offset: 0x278
	// Line 496, Address: 0x27046c, Func Offset: 0x27c
	// Line 499, Address: 0x270478, Func Offset: 0x288
	// Line 500, Address: 0x270484, Func Offset: 0x294
	// Line 501, Address: 0x270488, Func Offset: 0x298
	// Line 502, Address: 0x270498, Func Offset: 0x2a8
	// Line 503, Address: 0x2704a0, Func Offset: 0x2b0
	// Line 504, Address: 0x2704a4, Func Offset: 0x2b4
	// Line 506, Address: 0x2704a8, Func Offset: 0x2b8
	// Line 507, Address: 0x2704b0, Func Offset: 0x2c0
	// Line 508, Address: 0x2704b4, Func Offset: 0x2c4
	// Line 509, Address: 0x2704b8, Func Offset: 0x2c8
	// Line 511, Address: 0x2704cc, Func Offset: 0x2dc
	// Line 512, Address: 0x2704d0, Func Offset: 0x2e0
	// Func End, Address: 0x2704fc, Func Offset: 0x30c
}

// 
// Start address: 0x270500
int loadBg2x2_CheckRequest(int* reqUnits)
{
	int ret;
	_loadBg2x2_Ctrl* ctrl;
	// Line 515, Address: 0x270500, Func Offset: 0
	// Line 518, Address: 0x27050c, Func Offset: 0xc
	// Line 520, Address: 0x27051c, Func Offset: 0x1c
	// Func End, Address: 0x27052c, Func Offset: 0x2c
}

// 
// Start address: 0x270530
int loadBg2x2_LoadRequest()
{
	int ret;
	_loadBg2x2_Ctrl* ctrl;
	// Line 523, Address: 0x270530, Func Offset: 0
	// Line 527, Address: 0x270538, Func Offset: 0x8
	// Line 539, Address: 0x270578, Func Offset: 0x48
	// Func End, Address: 0x270588, Func Offset: 0x58
}

// 
// Start address: 0x270590
int loadBg2x2_ActivateRequestOutdoor(int slot, int mid, int* reqUnits)
{
	char* addr;
	int size;
	fsFileIndex* file;
	loadBgMem_File* sFile;
	int block_no;
	int ret;
	loadBgMem_Sect* Sect;
	_loadBg2x2_Ctrl* ctrl;
	// Line 542, Address: 0x270590, Func Offset: 0
	// Line 543, Address: 0x2705b8, Func Offset: 0x28
	// Line 548, Address: 0x2705c0, Func Offset: 0x30
	// Line 555, Address: 0x2705cc, Func Offset: 0x3c
	// Line 556, Address: 0x2705e0, Func Offset: 0x50
	// Line 557, Address: 0x2705e8, Func Offset: 0x58
	// Line 558, Address: 0x2705ec, Func Offset: 0x5c
	// Line 559, Address: 0x270624, Func Offset: 0x94
	// Line 560, Address: 0x270638, Func Offset: 0xa8
	// Line 561, Address: 0x27063c, Func Offset: 0xac
	// Line 563, Address: 0x270660, Func Offset: 0xd0
	// Line 564, Address: 0x270678, Func Offset: 0xe8
	// Line 566, Address: 0x270690, Func Offset: 0x100
	// Line 567, Address: 0x2706a8, Func Offset: 0x118
	// Line 568, Address: 0x2706c0, Func Offset: 0x130
	// Line 573, Address: 0x2706c8, Func Offset: 0x138
	// Line 576, Address: 0x2706cc, Func Offset: 0x13c
	// Line 577, Address: 0x2706d0, Func Offset: 0x140
	// Line 578, Address: 0x2706d4, Func Offset: 0x144
	// Line 581, Address: 0x2706e4, Func Offset: 0x154
	// Line 582, Address: 0x2706e8, Func Offset: 0x158
	// Line 583, Address: 0x2706ec, Func Offset: 0x15c
	// Line 587, Address: 0x2706fc, Func Offset: 0x16c
	// Line 588, Address: 0x270700, Func Offset: 0x170
	// Line 589, Address: 0x270704, Func Offset: 0x174
	// Line 592, Address: 0x270714, Func Offset: 0x184
	// Line 593, Address: 0x270718, Func Offset: 0x188
	// Line 594, Address: 0x27071c, Func Offset: 0x18c
	// Line 599, Address: 0x27072c, Func Offset: 0x19c
	// Line 600, Address: 0x270730, Func Offset: 0x1a0
	// Func End, Address: 0x270754, Func Offset: 0x1c4
}

// 
// Start address: 0x270760
int loadBg2x2_ActivateRequestIndoor(int* mid4, int* reqUnits)
{
	char* addr;
	int size;
	fsFileIndex* file;
	int block_no;
	int mid;
	int slot;
	loadBgMem_File* sFile;
	int ret;
	loadBgMem_Sect* Sect;
	_loadBg2x2_Ctrl* ctrl;
	// Line 604, Address: 0x270760, Func Offset: 0
	// Line 605, Address: 0x27078c, Func Offset: 0x2c
	// Line 608, Address: 0x270794, Func Offset: 0x34
	// Line 611, Address: 0x270798, Func Offset: 0x38
	// Line 612, Address: 0x2707a0, Func Offset: 0x40
	// Line 613, Address: 0x2707dc, Func Offset: 0x7c
	// Line 614, Address: 0x2707f0, Func Offset: 0x90
	// Line 615, Address: 0x270800, Func Offset: 0xa0
	// Line 618, Address: 0x27080c, Func Offset: 0xac
	// Line 619, Address: 0x270818, Func Offset: 0xb8
	// Line 620, Address: 0x270830, Func Offset: 0xd0
	// Line 621, Address: 0x270838, Func Offset: 0xd8
	// Line 622, Address: 0x270840, Func Offset: 0xe0
	// Line 624, Address: 0x270844, Func Offset: 0xe4
	// Line 625, Address: 0x27084c, Func Offset: 0xec
	// Line 626, Address: 0x27085c, Func Offset: 0xfc
	// Line 627, Address: 0x270860, Func Offset: 0x100
	// Line 628, Address: 0x270864, Func Offset: 0x104
	// Line 630, Address: 0x270888, Func Offset: 0x128
	// Line 631, Address: 0x2708b0, Func Offset: 0x150
	// Line 633, Address: 0x2708d8, Func Offset: 0x178
	// Line 634, Address: 0x270900, Func Offset: 0x1a0
	// Line 635, Address: 0x270918, Func Offset: 0x1b8
	// Line 636, Address: 0x270924, Func Offset: 0x1c4
	// Line 641, Address: 0x27092c, Func Offset: 0x1cc
	// Line 643, Address: 0x270938, Func Offset: 0x1d8
	// Line 644, Address: 0x27093c, Func Offset: 0x1dc
	// Line 645, Address: 0x270940, Func Offset: 0x1e0
	// Line 648, Address: 0x270950, Func Offset: 0x1f0
	// Line 650, Address: 0x27095c, Func Offset: 0x1fc
	// Line 651, Address: 0x270960, Func Offset: 0x200
	// Line 652, Address: 0x270964, Func Offset: 0x204
	// Line 653, Address: 0x270974, Func Offset: 0x214
	// Line 656, Address: 0x270978, Func Offset: 0x218
	// Line 658, Address: 0x270984, Func Offset: 0x224
	// Line 659, Address: 0x270988, Func Offset: 0x228
	// Line 660, Address: 0x27098c, Func Offset: 0x22c
	// Line 661, Address: 0x27099c, Func Offset: 0x23c
	// Line 664, Address: 0x2709a0, Func Offset: 0x240
	// Line 665, Address: 0x2709a4, Func Offset: 0x244
	// Line 666, Address: 0x2709a8, Func Offset: 0x248
	// Line 667, Address: 0x2709b8, Func Offset: 0x258
	// Line 668, Address: 0x2709bc, Func Offset: 0x25c
	// Line 669, Address: 0x2709c0, Func Offset: 0x260
	// Line 671, Address: 0x2709d4, Func Offset: 0x274
	// Line 672, Address: 0x2709d8, Func Offset: 0x278
	// Func End, Address: 0x270a04, Func Offset: 0x2a4
}

// 
// Start address: 0x270a10
int loadBg2x2_GetSlotOutdoor(int bx, int bz)
{
	int blockPhase;
	int blockSect;
	int sectNo;
	// Line 675, Address: 0x270a10, Func Offset: 0
	// Line 679, Address: 0x270a2c, Func Offset: 0x1c
	// Line 680, Address: 0x270a38, Func Offset: 0x28
	// Line 681, Address: 0x270a48, Func Offset: 0x38
	// Line 683, Address: 0x270a50, Func Offset: 0x40
	// Func End, Address: 0x270a6c, Func Offset: 0x5c
}

// 
// Start address: 0x270a70
int loadBg2x2_GetFreeSlotIndoor(int roomid)
{
	// Line 687, Address: 0x270a70, Func Offset: 0
	// Line 688, Address: 0x270a78, Func Offset: 0x8
	// Line 689, Address: 0x270a90, Func Offset: 0x20
	// Func End, Address: 0x270aa0, Func Offset: 0x30
}

// 
// Start address: 0x270aa0
int loadBg2x2_GetUseSlotIndoor(int roomid)
{
	// Line 692, Address: 0x270aa0, Func Offset: 0
	// Line 693, Address: 0x270aa8, Func Offset: 0x8
	// Line 694, Address: 0x270abc, Func Offset: 0x1c
	// Func End, Address: 0x270acc, Func Offset: 0x2c
}

