typedef struct loadBgMem_File;
typedef struct _loadBgMem_LoadCtrl;
typedef struct _anon0;
typedef struct _loadBgMem_UnitL;
typedef struct _loadBgMem_UnitR;
typedef struct _loadBgMem_UnitC;
typedef struct _loadBgMem_CacheCtrl;
typedef union fsFileIndex;
typedef struct _anon1;
typedef union fsFile;
typedef struct loadBgMem_Sect;
typedef struct fsCdFile;
typedef struct fsMgcFile;
typedef struct fsMgfFile;
typedef struct fsHdFile;
typedef struct fsMgpFile;



struct loadBgMem_File
{
	fsFileIndex* file;
	int ofsS;
	int ofsE;
	void* addr;
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

struct _loadBgMem_UnitR
{
	fsFileIndex* file;
	unsigned short unitID;
	unsigned short unitNo;
	int sectID;
	_loadBgMem_UnitR* nextR;
};

struct _loadBgMem_UnitC
{
	fsFileIndex* file;
	unsigned short unitID;
	unsigned short unitNo;
	_loadBgMem_UnitC* prevC;
	_loadBgMem_UnitC* nextC;
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

union fsFileIndex
{
	_anon1 index;
	unsigned long pack;
};

struct _anon1
{
	fsFile* fp;
	char* name;
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


int _loadBgMem_CmpUnitLR(_loadBgMem_UnitL* UnitL, _loadBgMem_UnitR* UnitR);
int _loadBgMem_CheckUnitC(_loadBgMem_UnitC* UnitC, fsFileIndex* file, unsigned short unitID);
int _loadBgMem_SyncUnitL(_loadBgMem_UnitL* UnitL);
int _loadBgMem_ClearUnitL(_loadBgMem_UnitL* UnitL);
int _loadBgMem_ClearUnitC(_loadBgMem_UnitC* UnitC);
int _loadBgMem_AddUnitC(_loadBgMem_UnitC* UnitC, _loadBgMem_UnitC* prevC);
void _loadBgMem_TakeoutUnitC(_loadBgMem_CacheCtrl* cache, _loadBgMem_UnitC* UnitC);
void _loadBgMem_ShiftUnitC(_loadBgMem_CacheCtrl* cache, _loadBgMem_UnitC* UnitC);
void _loadBgMem_PushUnitC(_loadBgMem_CacheCtrl* cache, _loadBgMem_UnitC* UnitC);
_loadBgMem_UnitC* _loadBgMem_SearchOldestUnitC(_loadBgMem_CacheCtrl* cache);
_loadBgMem_UnitC* _loadBgMem_SearchUnitC(_loadBgMem_CacheCtrl* cache, fsFileIndex* file, unsigned short unitID);
_loadBgMem_UnitC* _loadBgMem_SearchUnitR2C(_loadBgMem_CacheCtrl* cache, _loadBgMem_UnitR* UnitR);
_loadBgMem_UnitC* _loadBgMem_SearchUnitL2C(_loadBgMem_CacheCtrl* cache, _loadBgMem_UnitL* UnitL);
void _loadBgMem_MoveMemC2L(_loadBgMem_LoadCtrl* ctrl, _loadBgMem_CacheCtrl* cache, _loadBgMem_UnitL* UnitL, _loadBgMem_UnitC* UnitC);
void _loadBgMem_MoveMemL2C(_loadBgMem_LoadCtrl* ctrl, _loadBgMem_CacheCtrl* cache, _loadBgMem_UnitL* UnitL, _loadBgMem_UnitC* UnitC);
void _loadBgMem_SwapMemLC(_loadBgMem_LoadCtrl* ctrl, _loadBgMem_CacheCtrl* cache, _loadBgMem_UnitL* UnitL, _loadBgMem_UnitC* UnitC);
int _loadBgMem_LoadMemR2L(_loadBgMem_LoadCtrl* ctrl, _loadBgMem_UnitL* UnitL, _loadBgMem_UnitR* UnitR);
int _loadBgMem_InitLoad(_loadBgMem_LoadCtrl* ctrl, int UnitSize, int Units, _loadBgMem_UnitL* UnitLArray, _loadBgMem_UnitR* UnitRArray, char* Buffer);
int _loadBgMem_InitCache(_loadBgMem_CacheCtrl* cache, int UnitSize, int Units, _loadBgMem_UnitC* UnitCArray, char* Buffer);
int _loadBgMem_ClearRequest(_loadBgMem_LoadCtrl* ctrl);
int loadBgMem_SetRequest(_loadBgMem_LoadCtrl* ctrl, loadBgMem_Sect** SectList);
int _loadBgMem_SyncLoadUnits(_loadBgMem_LoadCtrl* ctrl);
int loadBgMem_CheckRequest(_loadBgMem_LoadCtrl* ctrl, int* reqUnits);
int _loadBgMem_CleanupNonRequest(_loadBgMem_LoadCtrl* ctrl);
int loadBgMem_LoadRequest(_loadBgMem_LoadCtrl* ctrl, _loadBgMem_CacheCtrl* cache, int cache_access_limit, int file_access_limit, int* cache_in_access_count, int* cache_out_access_count, int* file_access_count, int* miss_access_count);

// 
// Start address: 0x272ff0
int _loadBgMem_CmpUnitLR(_loadBgMem_UnitL* UnitL, _loadBgMem_UnitR* UnitR)
{
	// Line 156, Address: 0x272ff0, Func Offset: 0
	// Line 157, Address: 0x273004, Func Offset: 0x14
	// Line 158, Address: 0x273018, Func Offset: 0x28
	// Line 160, Address: 0x273024, Func Offset: 0x34
	// Line 164, Address: 0x27303c, Func Offset: 0x4c
	// Line 166, Address: 0x273048, Func Offset: 0x58
	// Line 170, Address: 0x27306c, Func Offset: 0x7c
	// Line 173, Address: 0x273084, Func Offset: 0x94
	// Line 177, Address: 0x2730a8, Func Offset: 0xb8
	// Line 178, Address: 0x2730c0, Func Offset: 0xd0
	// Line 182, Address: 0x2730c4, Func Offset: 0xd4
	// Func End, Address: 0x2730cc, Func Offset: 0xdc
}

// 
// Start address: 0x2730d0
int _loadBgMem_CheckUnitC(_loadBgMem_UnitC* UnitC, fsFileIndex* file, unsigned short unitID)
{
	// Line 206, Address: 0x2730d0, Func Offset: 0
	// Line 207, Address: 0x2730e4, Func Offset: 0x14
	// Line 208, Address: 0x2730fc, Func Offset: 0x2c
	// Line 211, Address: 0x273110, Func Offset: 0x40
	// Func End, Address: 0x273118, Func Offset: 0x48
}

// 
// Start address: 0x273120
int _loadBgMem_SyncUnitL(_loadBgMem_UnitL* UnitL)
{
	int fid;
	// Line 219, Address: 0x273120, Func Offset: 0
	// Line 221, Address: 0x273130, Func Offset: 0x10
	// Line 222, Address: 0x273144, Func Offset: 0x24
	// Line 223, Address: 0x273150, Func Offset: 0x30
	// Line 224, Address: 0x273154, Func Offset: 0x34
	// Line 225, Address: 0x27315c, Func Offset: 0x3c
	// Line 227, Address: 0x273164, Func Offset: 0x44
	// Line 228, Address: 0x273168, Func Offset: 0x48
	// Line 229, Address: 0x27317c, Func Offset: 0x5c
	// Line 230, Address: 0x27319c, Func Offset: 0x7c
	// Line 232, Address: 0x2731a4, Func Offset: 0x84
	// Line 233, Address: 0x2731a8, Func Offset: 0x88
	// Func End, Address: 0x2731bc, Func Offset: 0x9c
}

// 
// Start address: 0x2731c0
int _loadBgMem_ClearUnitL(_loadBgMem_UnitL* UnitL)
{
	// Line 236, Address: 0x2731c0, Func Offset: 0
	// Line 237, Address: 0x2731d0, Func Offset: 0x10
	// Line 240, Address: 0x273210, Func Offset: 0x50
	// Line 244, Address: 0x27321c, Func Offset: 0x5c
	// Line 245, Address: 0x273220, Func Offset: 0x60
	// Line 246, Address: 0x273224, Func Offset: 0x64
	// Line 248, Address: 0x27322c, Func Offset: 0x6c
	// Line 251, Address: 0x273238, Func Offset: 0x78
	// Line 253, Address: 0x27323c, Func Offset: 0x7c
	// Func End, Address: 0x273250, Func Offset: 0x90
}

// 
// Start address: 0x273250
int _loadBgMem_ClearUnitC(_loadBgMem_UnitC* UnitC)
{
	// Line 257, Address: 0x273250, Func Offset: 0
	// Line 258, Address: 0x273264, Func Offset: 0x14
	// Line 259, Address: 0x273270, Func Offset: 0x20
	// Line 260, Address: 0x273274, Func Offset: 0x24
	// Line 261, Address: 0x273278, Func Offset: 0x28
	// Line 263, Address: 0x273284, Func Offset: 0x34
	// Line 265, Address: 0x273288, Func Offset: 0x38
	// Func End, Address: 0x273290, Func Offset: 0x40
}

// 
// Start address: 0x273290
int _loadBgMem_AddUnitC(_loadBgMem_UnitC* UnitC, _loadBgMem_UnitC* prevC)
{
	_loadBgMem_UnitC* nextC;
	// Line 315, Address: 0x273290, Func Offset: 0
	// Line 316, Address: 0x2732a4, Func Offset: 0x14
	// Line 318, Address: 0x2732b8, Func Offset: 0x28
	// Line 319, Address: 0x2732bc, Func Offset: 0x2c
	// Line 320, Address: 0x2732c8, Func Offset: 0x38
	// Line 321, Address: 0x2732cc, Func Offset: 0x3c
	// Line 322, Address: 0x2732d0, Func Offset: 0x40
	// Line 323, Address: 0x2732d4, Func Offset: 0x44
	// Line 324, Address: 0x2732d8, Func Offset: 0x48
	// Func End, Address: 0x2732e0, Func Offset: 0x50
}

// 
// Start address: 0x2732e0
void _loadBgMem_TakeoutUnitC(_loadBgMem_CacheCtrl* cache, _loadBgMem_UnitC* UnitC)
{
	_loadBgMem_UnitC* nextC;
	_loadBgMem_UnitC* prevC;
	_loadBgMem_UnitC* tailC;
	_loadBgMem_UnitC* headC;
	// Line 343, Address: 0x2732e0, Func Offset: 0
	// Line 348, Address: 0x2732e8, Func Offset: 0x8
	// Line 349, Address: 0x2732f8, Func Offset: 0x18
	// Line 350, Address: 0x2732fc, Func Offset: 0x1c
	// Line 351, Address: 0x273300, Func Offset: 0x20
	// Line 352, Address: 0x273308, Func Offset: 0x28
	// Line 354, Address: 0x27333c, Func Offset: 0x5c
	// Line 355, Address: 0x273340, Func Offset: 0x60
	// Line 356, Address: 0x273344, Func Offset: 0x64
	// Line 357, Address: 0x27334c, Func Offset: 0x6c
	// Line 358, Address: 0x27337c, Func Offset: 0x9c
	// Line 359, Address: 0x273380, Func Offset: 0xa0
	// Line 360, Address: 0x273388, Func Offset: 0xa8
	// Line 361, Address: 0x2733b4, Func Offset: 0xd4
	// Line 363, Address: 0x2733b8, Func Offset: 0xd8
	// Line 364, Address: 0x2733c0, Func Offset: 0xe0
	// Line 365, Address: 0x2733ec, Func Offset: 0x10c
	// Line 366, Address: 0x2733f0, Func Offset: 0x110
	// Line 367, Address: 0x2733f8, Func Offset: 0x118
	// Line 368, Address: 0x273424, Func Offset: 0x144
	// Line 370, Address: 0x273428, Func Offset: 0x148
	// Line 371, Address: 0x27342c, Func Offset: 0x14c
	// Line 373, Address: 0x273430, Func Offset: 0x150
	// Func End, Address: 0x273440, Func Offset: 0x160
}

// 
// Start address: 0x273440
void _loadBgMem_ShiftUnitC(_loadBgMem_CacheCtrl* cache, _loadBgMem_UnitC* UnitC)
{
	_loadBgMem_UnitC* headC;
	_loadBgMem_UnitC* tailC;
	// Line 378, Address: 0x273440, Func Offset: 0
	// Line 381, Address: 0x273448, Func Offset: 0x8
	// Line 382, Address: 0x273458, Func Offset: 0x18
	// Line 383, Address: 0x27348c, Func Offset: 0x4c
	// Line 384, Address: 0x2734bc, Func Offset: 0x7c
	// Line 385, Address: 0x2734c0, Func Offset: 0x80
	// Line 387, Address: 0x2734c8, Func Offset: 0x88
	// Line 388, Address: 0x2734cc, Func Offset: 0x8c
	// Line 390, Address: 0x273504, Func Offset: 0xc4
	// Line 391, Address: 0x273508, Func Offset: 0xc8
	// Line 392, Address: 0x27351c, Func Offset: 0xdc
	// Line 393, Address: 0x273520, Func Offset: 0xe0
	// Line 394, Address: 0x273554, Func Offset: 0x114
	// Line 395, Address: 0x273558, Func Offset: 0x118
	// Line 397, Address: 0x27355c, Func Offset: 0x11c
	// Func End, Address: 0x27356c, Func Offset: 0x12c
}

// 
// Start address: 0x273570
void _loadBgMem_PushUnitC(_loadBgMem_CacheCtrl* cache, _loadBgMem_UnitC* UnitC)
{
	_loadBgMem_UnitC* tailC;
	_loadBgMem_UnitC* headC;
	// Line 402, Address: 0x273570, Func Offset: 0
	// Line 405, Address: 0x273578, Func Offset: 0x8
	// Line 406, Address: 0x273588, Func Offset: 0x18
	// Line 407, Address: 0x2735bc, Func Offset: 0x4c
	// Line 408, Address: 0x2735ec, Func Offset: 0x7c
	// Line 409, Address: 0x2735f0, Func Offset: 0x80
	// Line 411, Address: 0x2735f8, Func Offset: 0x88
	// Line 412, Address: 0x2735fc, Func Offset: 0x8c
	// Line 414, Address: 0x273634, Func Offset: 0xc4
	// Line 415, Address: 0x273638, Func Offset: 0xc8
	// Line 416, Address: 0x27364c, Func Offset: 0xdc
	// Line 417, Address: 0x273650, Func Offset: 0xe0
	// Line 418, Address: 0x273684, Func Offset: 0x114
	// Line 419, Address: 0x273688, Func Offset: 0x118
	// Line 421, Address: 0x27368c, Func Offset: 0x11c
	// Func End, Address: 0x27369c, Func Offset: 0x12c
}

// 
// Start address: 0x2736a0
_loadBgMem_UnitC* _loadBgMem_SearchOldestUnitC(_loadBgMem_CacheCtrl* cache)
{
	// Line 425, Address: 0x2736a0, Func Offset: 0
	// Line 427, Address: 0x2736bc, Func Offset: 0x1c
	// Func End, Address: 0x2736c4, Func Offset: 0x24
}

// 
// Start address: 0x2736d0
_loadBgMem_UnitC* _loadBgMem_SearchUnitC(_loadBgMem_CacheCtrl* cache, fsFileIndex* file, unsigned short unitID)
{
	_loadBgMem_UnitC* UnitC;
	// Line 433, Address: 0x2736d0, Func Offset: 0
	// Line 435, Address: 0x2736ec, Func Offset: 0x1c
	// Line 436, Address: 0x273700, Func Offset: 0x30
	// Line 437, Address: 0x273714, Func Offset: 0x44
	// Line 438, Address: 0x273720, Func Offset: 0x50
	// Line 441, Address: 0x273740, Func Offset: 0x70
	// Line 442, Address: 0x273750, Func Offset: 0x80
	// Line 443, Address: 0x273754, Func Offset: 0x84
	// Func End, Address: 0x273770, Func Offset: 0xa0
}

// 
// Start address: 0x273770
_loadBgMem_UnitC* _loadBgMem_SearchUnitR2C(_loadBgMem_CacheCtrl* cache, _loadBgMem_UnitR* UnitR)
{
	unsigned short unitID;
	fsFileIndex* file;
	// Line 448, Address: 0x273770, Func Offset: 0
	// Line 451, Address: 0x273778, Func Offset: 0x8
	// Line 452, Address: 0x27378c, Func Offset: 0x1c
	// Line 453, Address: 0x273790, Func Offset: 0x20
	// Line 454, Address: 0x273794, Func Offset: 0x24
	// Line 455, Address: 0x2737a0, Func Offset: 0x30
	// Func End, Address: 0x2737b0, Func Offset: 0x40
}

// 
// Start address: 0x2737b0
_loadBgMem_UnitC* _loadBgMem_SearchUnitL2C(_loadBgMem_CacheCtrl* cache, _loadBgMem_UnitL* UnitL)
{
	unsigned short unitID;
	fsFileIndex* file;
	// Line 460, Address: 0x2737b0, Func Offset: 0
	// Line 463, Address: 0x2737b8, Func Offset: 0x8
	// Line 464, Address: 0x2737cc, Func Offset: 0x1c
	// Line 465, Address: 0x2737d0, Func Offset: 0x20
	// Line 466, Address: 0x2737d4, Func Offset: 0x24
	// Line 467, Address: 0x2737e0, Func Offset: 0x30
	// Func End, Address: 0x2737f0, Func Offset: 0x40
}

// 
// Start address: 0x2737f0
void _loadBgMem_MoveMemC2L(_loadBgMem_LoadCtrl* ctrl, _loadBgMem_CacheCtrl* cache, _loadBgMem_UnitL* UnitL, _loadBgMem_UnitC* UnitC)
{
	int unitNoC;
	int unitNoL;
	char* BufC;
	char* BufL;
	int UnitSize;
	// Line 476, Address: 0x2737f0, Func Offset: 0
	// Line 480, Address: 0x273808, Func Offset: 0x18
	// Line 481, Address: 0x273834, Func Offset: 0x44
	// Line 482, Address: 0x273864, Func Offset: 0x74
	// Line 483, Address: 0x273868, Func Offset: 0x78
	// Line 484, Address: 0x27386c, Func Offset: 0x7c
	// Line 488, Address: 0x273870, Func Offset: 0x80
	// Line 489, Address: 0x27389c, Func Offset: 0xac
	// Line 490, Address: 0x2738cc, Func Offset: 0xdc
	// Line 491, Address: 0x2738d0, Func Offset: 0xe0
	// Line 492, Address: 0x2738d4, Func Offset: 0xe4
	// Line 493, Address: 0x2738dc, Func Offset: 0xec
	// Line 495, Address: 0x2738e4, Func Offset: 0xf4
	// Line 496, Address: 0x2738ec, Func Offset: 0xfc
	// Line 497, Address: 0x2738f4, Func Offset: 0x104
	// Line 498, Address: 0x2738fc, Func Offset: 0x10c
	// Line 499, Address: 0x273904, Func Offset: 0x114
	// Func End, Address: 0x27391c, Func Offset: 0x12c
}

// 
// Start address: 0x273920
void _loadBgMem_MoveMemL2C(_loadBgMem_LoadCtrl* ctrl, _loadBgMem_CacheCtrl* cache, _loadBgMem_UnitL* UnitL, _loadBgMem_UnitC* UnitC)
{
	int unitNoC;
	int unitNoL;
	char* BufC;
	char* BufL;
	int UnitSize;
	// Line 506, Address: 0x273920, Func Offset: 0
	// Line 510, Address: 0x273938, Func Offset: 0x18
	// Line 511, Address: 0x273964, Func Offset: 0x44
	// Line 512, Address: 0x273994, Func Offset: 0x74
	// Line 513, Address: 0x273998, Func Offset: 0x78
	// Line 514, Address: 0x27399c, Func Offset: 0x7c
	// Line 518, Address: 0x2739a0, Func Offset: 0x80
	// Line 519, Address: 0x2739cc, Func Offset: 0xac
	// Line 520, Address: 0x2739fc, Func Offset: 0xdc
	// Line 521, Address: 0x273a00, Func Offset: 0xe0
	// Line 522, Address: 0x273a04, Func Offset: 0xe4
	// Line 523, Address: 0x273a0c, Func Offset: 0xec
	// Line 525, Address: 0x273a14, Func Offset: 0xf4
	// Line 526, Address: 0x273a20, Func Offset: 0x100
	// Line 527, Address: 0x273a28, Func Offset: 0x108
	// Line 528, Address: 0x273a30, Func Offset: 0x110
	// Func End, Address: 0x273a48, Func Offset: 0x128
}

// 
// Start address: 0x273a50
void _loadBgMem_SwapMemLC(_loadBgMem_LoadCtrl* ctrl, _loadBgMem_CacheCtrl* cache, _loadBgMem_UnitL* UnitL, _loadBgMem_UnitC* UnitC)
{
	unsigned short unitID;
	fsFileIndex* file;
	int unitNoC;
	int unitNoL;
	char* BufC;
	char* BufL;
	int UnitSize;
	// Line 535, Address: 0x273a50, Func Offset: 0
	// Line 539, Address: 0x273a68, Func Offset: 0x18
	// Line 540, Address: 0x273a94, Func Offset: 0x44
	// Line 541, Address: 0x273ac4, Func Offset: 0x74
	// Line 542, Address: 0x273ac8, Func Offset: 0x78
	// Line 543, Address: 0x273acc, Func Offset: 0x7c
	// Line 547, Address: 0x273ad0, Func Offset: 0x80
	// Line 548, Address: 0x273afc, Func Offset: 0xac
	// Line 549, Address: 0x273b2c, Func Offset: 0xdc
	// Line 550, Address: 0x273b30, Func Offset: 0xe0
	// Line 551, Address: 0x273b34, Func Offset: 0xe4
	// Line 552, Address: 0x273b3c, Func Offset: 0xec
	// Line 554, Address: 0x273b44, Func Offset: 0xf4
	// Line 558, Address: 0x273b4c, Func Offset: 0xfc
	// Line 559, Address: 0x273b50, Func Offset: 0x100
	// Line 560, Address: 0x273b54, Func Offset: 0x104
	// Line 561, Address: 0x273b5c, Func Offset: 0x10c
	// Line 562, Address: 0x273b64, Func Offset: 0x114
	// Line 563, Address: 0x273b68, Func Offset: 0x118
	// Line 565, Address: 0x273b6c, Func Offset: 0x11c
	// Line 566, Address: 0x273b74, Func Offset: 0x124
	// Func End, Address: 0x273b8c, Func Offset: 0x13c
}

// 
// Start address: 0x273b90
int _loadBgMem_LoadMemR2L(_loadBgMem_LoadCtrl* ctrl, _loadBgMem_UnitL* UnitL, _loadBgMem_UnitR* UnitR)
{
	int unitNo;
	int unitID;
	int fid;
	fsFileIndex* file;
	int offset;
	char* BufL;
	int UnitSize;
	// Line 572, Address: 0x273b90, Func Offset: 0
	// Line 579, Address: 0x273ba8, Func Offset: 0x18
	// Line 580, Address: 0x273bd4, Func Offset: 0x44
	// Line 581, Address: 0x273bd8, Func Offset: 0x48
	// Line 584, Address: 0x273bdc, Func Offset: 0x4c
	// Line 585, Address: 0x273c0c, Func Offset: 0x7c
	// Line 586, Address: 0x273c3c, Func Offset: 0xac
	// Line 587, Address: 0x273c40, Func Offset: 0xb0
	// Line 588, Address: 0x273c74, Func Offset: 0xe4
	// Line 589, Address: 0x273c7c, Func Offset: 0xec
	// Line 590, Address: 0x273c80, Func Offset: 0xf0
	// Line 591, Address: 0x273c84, Func Offset: 0xf4
	// Line 593, Address: 0x273c88, Func Offset: 0xf8
	// Line 594, Address: 0x273c94, Func Offset: 0x104
	// Line 595, Address: 0x273c9c, Func Offset: 0x10c
	// Line 596, Address: 0x273ca0, Func Offset: 0x110
	// Line 597, Address: 0x273ca4, Func Offset: 0x114
	// Line 598, Address: 0x273ca8, Func Offset: 0x118
	// Line 600, Address: 0x273cb4, Func Offset: 0x124
	// Line 602, Address: 0x273cb8, Func Offset: 0x128
	// Func End, Address: 0x273cd4, Func Offset: 0x144
}

// 
// Start address: 0x273ce0
int _loadBgMem_InitLoad(_loadBgMem_LoadCtrl* ctrl, int UnitSize, int Units, _loadBgMem_UnitL* UnitLArray, _loadBgMem_UnitR* UnitRArray, char* Buffer)
{
	_loadBgMem_UnitR* UnitR;
	_loadBgMem_UnitL* UnitL;
	int i;
	// Line 636, Address: 0x273ce0, Func Offset: 0
	// Line 640, Address: 0x273ce8, Func Offset: 0x8
	// Line 641, Address: 0x273cf0, Func Offset: 0x10
	// Line 642, Address: 0x273d34, Func Offset: 0x54
	// Line 643, Address: 0x273d7c, Func Offset: 0x9c
	// Line 644, Address: 0x273d80, Func Offset: 0xa0
	// Line 645, Address: 0x273d84, Func Offset: 0xa4
	// Line 646, Address: 0x273d88, Func Offset: 0xa8
	// Line 647, Address: 0x273d8c, Func Offset: 0xac
	// Line 648, Address: 0x273d90, Func Offset: 0xb0
	// Line 651, Address: 0x273d9c, Func Offset: 0xbc
	// Line 652, Address: 0x273da0, Func Offset: 0xc0
	// Line 653, Address: 0x273da4, Func Offset: 0xc4
	// Line 654, Address: 0x273da8, Func Offset: 0xc8
	// Line 655, Address: 0x273db0, Func Offset: 0xd0
	// Line 656, Address: 0x273db4, Func Offset: 0xd4
	// Line 657, Address: 0x273db8, Func Offset: 0xd8
	// Line 658, Address: 0x273dbc, Func Offset: 0xdc
	// Line 659, Address: 0x273dc0, Func Offset: 0xe0
	// Line 660, Address: 0x273dc4, Func Offset: 0xe4
	// Line 662, Address: 0x273dc8, Func Offset: 0xe8
	// Line 663, Address: 0x273de4, Func Offset: 0x104
	// Line 664, Address: 0x273de8, Func Offset: 0x108
	// Line 665, Address: 0x273dec, Func Offset: 0x10c
	// Func End, Address: 0x273dfc, Func Offset: 0x11c
}

// 
// Start address: 0x273e00
int _loadBgMem_InitCache(_loadBgMem_CacheCtrl* cache, int UnitSize, int Units, _loadBgMem_UnitC* UnitCArray, char* Buffer)
{
	_loadBgMem_UnitC* tailC;
	_loadBgMem_UnitC* headC;
	_loadBgMem_UnitC* UnitC;
	int i;
	// Line 673, Address: 0x273e00, Func Offset: 0
	// Line 678, Address: 0x273e38, Func Offset: 0x38
	// Line 679, Address: 0x273e40, Func Offset: 0x40
	// Line 680, Address: 0x273e84, Func Offset: 0x84
	// Line 681, Address: 0x273ecc, Func Offset: 0xcc
	// Line 682, Address: 0x273ed0, Func Offset: 0xd0
	// Line 683, Address: 0x273ed4, Func Offset: 0xd4
	// Line 684, Address: 0x273ed8, Func Offset: 0xd8
	// Line 685, Address: 0x273edc, Func Offset: 0xdc
	// Line 686, Address: 0x273eec, Func Offset: 0xec
	// Line 687, Address: 0x273ef0, Func Offset: 0xf0
	// Line 688, Address: 0x273ef4, Func Offset: 0xf4
	// Line 689, Address: 0x273ef8, Func Offset: 0xf8
	// Line 690, Address: 0x273efc, Func Offset: 0xfc
	// Line 691, Address: 0x273f00, Func Offset: 0x100
	// Line 692, Address: 0x273f14, Func Offset: 0x114
	// Line 693, Address: 0x273f2c, Func Offset: 0x12c
	// Line 694, Address: 0x273f30, Func Offset: 0x130
	// Line 695, Address: 0x273f34, Func Offset: 0x134
	// Line 696, Address: 0x273f44, Func Offset: 0x144
	// Line 697, Address: 0x273f58, Func Offset: 0x158
	// Line 698, Address: 0x273f5c, Func Offset: 0x15c
	// Line 699, Address: 0x273f60, Func Offset: 0x160
	// Line 700, Address: 0x273f64, Func Offset: 0x164
	// Line 701, Address: 0x273f7c, Func Offset: 0x17c
	// Line 702, Address: 0x273f80, Func Offset: 0x180
	// Line 704, Address: 0x273f84, Func Offset: 0x184
	// Line 705, Address: 0x273f88, Func Offset: 0x188
	// Func End, Address: 0x273fb4, Func Offset: 0x1b4
}

// 
// Start address: 0x273fc0
int _loadBgMem_ClearRequest(_loadBgMem_LoadCtrl* ctrl)
{
	int Units;
	int i;
	_loadBgMem_UnitR* UnitR;
	// Line 712, Address: 0x273fc0, Func Offset: 0
	// Line 713, Address: 0x273fd4, Func Offset: 0x14
	// Line 714, Address: 0x273fd8, Func Offset: 0x18
	// Line 715, Address: 0x273fe8, Func Offset: 0x28
	// Line 716, Address: 0x273fec, Func Offset: 0x2c
	// Line 717, Address: 0x273ff0, Func Offset: 0x30
	// Line 718, Address: 0x273ff4, Func Offset: 0x34
	// Line 719, Address: 0x273ff8, Func Offset: 0x38
	// Line 720, Address: 0x273ffc, Func Offset: 0x3c
	// Line 721, Address: 0x274014, Func Offset: 0x54
	// Line 722, Address: 0x274018, Func Offset: 0x58
	// Line 723, Address: 0x27401c, Func Offset: 0x5c
	// Func End, Address: 0x274024, Func Offset: 0x64
}

// 
// Start address: 0x274030
int loadBgMem_SetRequest(_loadBgMem_LoadCtrl* ctrl, loadBgMem_Sect** SectList)
{
	int unitIDE;
	int unitIDS;
	int fofsE;
	int fofsS;
	int unitID;
	int fUnits;
	fsFileIndex* file;
	int unitNoE;
	int unitNoS;
	int sofsE;
	int sofsS;
	char* addr;
	_loadBgMem_UnitR* UnitR;
	int sFiles;
	loadBgMem_File* sFile;
	int reduceRate8;
	int sectID;
	int overwrite;
	int sUnits0;
	int sUnits;
	int Dir;
	int ret;
	char* Buffer;
	int Units;
	int UnitSize;
	loadBgMem_Sect** Sect_p;
	loadBgMem_Sect* Sect;
	_loadBgMem_UnitR* tailR;
	_loadBgMem_UnitR* headR;
	_loadBgMem_UnitR* UnitRArray;
	// Line 729, Address: 0x274030, Func Offset: 0
	// Line 740, Address: 0x27404c, Func Offset: 0x1c
	// Line 742, Address: 0x274060, Func Offset: 0x30
	// Line 744, Address: 0x274064, Func Offset: 0x34
	// Line 745, Address: 0x274068, Func Offset: 0x38
	// Line 746, Address: 0x27406c, Func Offset: 0x3c
	// Line 747, Address: 0x274070, Func Offset: 0x40
	// Line 748, Address: 0x274074, Func Offset: 0x44
	// Line 749, Address: 0x274078, Func Offset: 0x48
	// Line 751, Address: 0x27407c, Func Offset: 0x4c
	// Line 765, Address: 0x274084, Func Offset: 0x54
	// Line 766, Address: 0x2740a0, Func Offset: 0x70
	// Line 767, Address: 0x2740a4, Func Offset: 0x74
	// Line 768, Address: 0x2740a8, Func Offset: 0x78
	// Line 769, Address: 0x2740ac, Func Offset: 0x7c
	// Line 772, Address: 0x2740b0, Func Offset: 0x80
	// Line 773, Address: 0x2740b4, Func Offset: 0x84
	// Line 776, Address: 0x2740b8, Func Offset: 0x88
	// Line 777, Address: 0x2740f4, Func Offset: 0xc4
	// Line 778, Address: 0x274134, Func Offset: 0x104
	// Line 779, Address: 0x274144, Func Offset: 0x114
	// Line 780, Address: 0x274154, Func Offset: 0x124
	// Line 781, Address: 0x274158, Func Offset: 0x128
	// Line 782, Address: 0x274160, Func Offset: 0x130
	// Line 785, Address: 0x274194, Func Offset: 0x164
	// Line 786, Address: 0x27419c, Func Offset: 0x16c
	// Line 788, Address: 0x2741a8, Func Offset: 0x178
	// Line 789, Address: 0x2741ac, Func Offset: 0x17c
	// Line 792, Address: 0x2741b4, Func Offset: 0x184
	// Line 793, Address: 0x2741c8, Func Offset: 0x198
	// Line 796, Address: 0x2741e8, Func Offset: 0x1b8
	// Line 802, Address: 0x2741f4, Func Offset: 0x1c4
	// Line 804, Address: 0x2741f8, Func Offset: 0x1c8
	// Line 805, Address: 0x2741fc, Func Offset: 0x1cc
	// Line 810, Address: 0x274200, Func Offset: 0x1d0
	// Line 811, Address: 0x274210, Func Offset: 0x1e0
	// Line 812, Address: 0x274228, Func Offset: 0x1f8
	// Line 813, Address: 0x27422c, Func Offset: 0x1fc
	// Line 816, Address: 0x274240, Func Offset: 0x210
	// Line 817, Address: 0x274260, Func Offset: 0x230
	// Line 822, Address: 0x274268, Func Offset: 0x238
	// Line 828, Address: 0x274270, Func Offset: 0x240
	// Line 831, Address: 0x274290, Func Offset: 0x260
	// Line 832, Address: 0x274294, Func Offset: 0x264
	// Line 833, Address: 0x274298, Func Offset: 0x268
	// Line 834, Address: 0x27429c, Func Offset: 0x26c
	// Line 835, Address: 0x2742a0, Func Offset: 0x270
	// Line 837, Address: 0x2742ac, Func Offset: 0x27c
	// Line 838, Address: 0x2742b4, Func Offset: 0x284
	// Line 839, Address: 0x2742b8, Func Offset: 0x288
	// Line 840, Address: 0x2742c0, Func Offset: 0x290
	// Line 841, Address: 0x2742ec, Func Offset: 0x2bc
	// Line 843, Address: 0x2742f0, Func Offset: 0x2c0
	// Line 844, Address: 0x2742f4, Func Offset: 0x2c4
	// Line 848, Address: 0x2742f8, Func Offset: 0x2c8
	// Line 849, Address: 0x274320, Func Offset: 0x2f0
	// Line 851, Address: 0x274328, Func Offset: 0x2f8
	// Line 852, Address: 0x274330, Func Offset: 0x300
	// Line 853, Address: 0x274354, Func Offset: 0x324
	// Line 854, Address: 0x274358, Func Offset: 0x328
	// Line 855, Address: 0x27435c, Func Offset: 0x32c
	// Line 856, Address: 0x274360, Func Offset: 0x330
	// Line 858, Address: 0x274394, Func Offset: 0x364
	// Line 860, Address: 0x2743b0, Func Offset: 0x380
	// Line 862, Address: 0x2743c4, Func Offset: 0x394
	// Line 864, Address: 0x2743c8, Func Offset: 0x398
	// Func End, Address: 0x2743ec, Func Offset: 0x3bc
}

// 
// Start address: 0x2743f0
int _loadBgMem_SyncLoadUnits(_loadBgMem_LoadCtrl* ctrl)
{
	int ret;
	int Units;
	_loadBgMem_UnitL* UnitL;
	// Line 868, Address: 0x2743f0, Func Offset: 0
	// Line 873, Address: 0x274404, Func Offset: 0x14
	// Line 875, Address: 0x274418, Func Offset: 0x28
	// Line 876, Address: 0x27441c, Func Offset: 0x2c
	// Line 878, Address: 0x274420, Func Offset: 0x30
	// Line 879, Address: 0x274424, Func Offset: 0x34
	// Line 880, Address: 0x27442c, Func Offset: 0x3c
	// Line 882, Address: 0x274478, Func Offset: 0x88
	// Line 883, Address: 0x27447c, Func Offset: 0x8c
	// Line 890, Address: 0x274484, Func Offset: 0x94
	// Line 893, Address: 0x2744ac, Func Offset: 0xbc
	// Line 895, Address: 0x2744c0, Func Offset: 0xd0
	// Line 896, Address: 0x2744c4, Func Offset: 0xd4
	// Func End, Address: 0x2744e0, Func Offset: 0xf0
}

// 
// Start address: 0x2744e0
int loadBgMem_CheckRequest(_loadBgMem_LoadCtrl* ctrl, int* reqUnits)
{
	int req;
	int ret;
	int Units;
	int UnitSize;
	_loadBgMem_UnitR* UnitR;
	_loadBgMem_UnitL* UnitL;
	// Line 900, Address: 0x2744e0, Func Offset: 0
	// Line 908, Address: 0x27450c, Func Offset: 0x2c
	// Line 909, Address: 0x274514, Func Offset: 0x34
	// Line 910, Address: 0x274524, Func Offset: 0x44
	// Line 913, Address: 0x274530, Func Offset: 0x50
	// Line 915, Address: 0x274534, Func Offset: 0x54
	// Line 916, Address: 0x274538, Func Offset: 0x58
	// Line 918, Address: 0x27453c, Func Offset: 0x5c
	// Line 919, Address: 0x274540, Func Offset: 0x60
	// Line 920, Address: 0x274544, Func Offset: 0x64
	// Line 922, Address: 0x27454c, Func Offset: 0x6c
	// Line 926, Address: 0x274588, Func Offset: 0xa8
	// Line 930, Address: 0x274598, Func Offset: 0xb8
	// Line 932, Address: 0x2745a4, Func Offset: 0xc4
	// Line 934, Address: 0x2745b4, Func Offset: 0xd4
	// Line 936, Address: 0x2745c4, Func Offset: 0xe4
	// Line 942, Address: 0x2745d4, Func Offset: 0xf4
	// Line 945, Address: 0x2745fc, Func Offset: 0x11c
	// Line 947, Address: 0x274610, Func Offset: 0x130
	// Line 952, Address: 0x274620, Func Offset: 0x140
	// Line 954, Address: 0x274644, Func Offset: 0x164
	// Line 956, Address: 0x274674, Func Offset: 0x194
	// Line 958, Address: 0x274680, Func Offset: 0x1a0
	// Line 959, Address: 0x274684, Func Offset: 0x1a4
	// Func End, Address: 0x2746b0, Func Offset: 0x1d0
}

// 
// Start address: 0x2746b0
int _loadBgMem_CleanupNonRequest(_loadBgMem_LoadCtrl* ctrl)
{
	int ret;
	int result;
	int Units;
	int i;
	_loadBgMem_UnitR* UnitR;
	_loadBgMem_UnitL* UnitL;
	// Line 963, Address: 0x2746b0, Func Offset: 0
	// Line 970, Address: 0x2746cc, Func Offset: 0x1c
	// Line 971, Address: 0x2746e0, Func Offset: 0x30
	// Line 972, Address: 0x2746e4, Func Offset: 0x34
	// Line 973, Address: 0x2746e8, Func Offset: 0x38
	// Line 977, Address: 0x2746fc, Func Offset: 0x4c
	// Line 978, Address: 0x27470c, Func Offset: 0x5c
	// Line 982, Address: 0x274738, Func Offset: 0x88
	// Line 984, Address: 0x274750, Func Offset: 0xa0
	// Line 986, Address: 0x274754, Func Offset: 0xa4
	// Line 997, Address: 0x27475c, Func Offset: 0xac
	// Line 1000, Address: 0x274784, Func Offset: 0xd4
	// Line 1001, Address: 0x27479c, Func Offset: 0xec
	// Line 1002, Address: 0x2747a0, Func Offset: 0xf0
	// Func End, Address: 0x2747c4, Func Offset: 0x114
}

// 
// Start address: 0x2747d0
int loadBgMem_LoadRequest(_loadBgMem_LoadCtrl* ctrl, _loadBgMem_CacheCtrl* cache, int cache_access_limit, int file_access_limit, int* cache_in_access_count, int* cache_out_access_count, int* file_access_count, int* miss_access_count)
{
	_loadBgMem_UnitC* findC;
	_loadBgMem_UnitC* findC;
	int result;
	_loadBgMem_UnitC* UnitC;
	_loadBgMem_UnitL* UnitL;
	int miss;
	int ca_hit;
	int ca_out;
	int ca_in;
	int fa_cnt;
	int UnitSize;
	_loadBgMem_UnitR* UnitR;
	_loadBgMem_UnitL* UnitLArray;
	// Line 1016, Address: 0x2747d0, Func Offset: 0
	// Line 1021, Address: 0x27481c, Func Offset: 0x4c
	// Line 1022, Address: 0x274820, Func Offset: 0x50
	// Line 1023, Address: 0x274824, Func Offset: 0x54
	// Line 1024, Address: 0x274828, Func Offset: 0x58
	// Line 1026, Address: 0x27482c, Func Offset: 0x5c
	// Line 1027, Address: 0x274834, Func Offset: 0x64
	// Line 1028, Address: 0x274844, Func Offset: 0x74
	// Line 1029, Address: 0x274854, Func Offset: 0x84
	// Line 1030, Address: 0x274864, Func Offset: 0x94
	// Line 1032, Address: 0x274878, Func Offset: 0xa8
	// Line 1035, Address: 0x274884, Func Offset: 0xb4
	// Line 1037, Address: 0x274888, Func Offset: 0xb8
	// Line 1038, Address: 0x274890, Func Offset: 0xc0
	// Line 1041, Address: 0x2748c4, Func Offset: 0xf4
	// Line 1044, Address: 0x2748cc, Func Offset: 0xfc
	// Line 1046, Address: 0x2748dc, Func Offset: 0x10c
	// Line 1051, Address: 0x2748e8, Func Offset: 0x118
	// Line 1053, Address: 0x2748f8, Func Offset: 0x128
	// Line 1054, Address: 0x27490c, Func Offset: 0x13c
	// Line 1062, Address: 0x27493c, Func Offset: 0x16c
	// Line 1063, Address: 0x274940, Func Offset: 0x170
	// Line 1064, Address: 0x274954, Func Offset: 0x184
	// Line 1066, Address: 0x27495c, Func Offset: 0x18c
	// Line 1067, Address: 0x27496c, Func Offset: 0x19c
	// Line 1068, Address: 0x274980, Func Offset: 0x1b0
	// Line 1069, Address: 0x27498c, Func Offset: 0x1bc
	// Line 1071, Address: 0x27499c, Func Offset: 0x1cc
	// Line 1073, Address: 0x2749b4, Func Offset: 0x1e4
	// Line 1075, Address: 0x2749c0, Func Offset: 0x1f0
	// Line 1076, Address: 0x2749d0, Func Offset: 0x200
	// Line 1077, Address: 0x2749d4, Func Offset: 0x204
	// Line 1081, Address: 0x2749dc, Func Offset: 0x20c
	// Line 1082, Address: 0x2749f0, Func Offset: 0x220
	// Line 1085, Address: 0x2749fc, Func Offset: 0x22c
	// Line 1087, Address: 0x274a0c, Func Offset: 0x23c
	// Line 1089, Address: 0x274a1c, Func Offset: 0x24c
	// Line 1091, Address: 0x274a34, Func Offset: 0x264
	// Line 1093, Address: 0x274a40, Func Offset: 0x270
	// Line 1094, Address: 0x274a50, Func Offset: 0x280
	// Line 1095, Address: 0x274a54, Func Offset: 0x284
	// Line 1097, Address: 0x274a5c, Func Offset: 0x28c
	// Line 1098, Address: 0x274a74, Func Offset: 0x2a4
	// Line 1099, Address: 0x274a78, Func Offset: 0x2a8
	// Line 1101, Address: 0x274a7c, Func Offset: 0x2ac
	// Line 1104, Address: 0x274a8c, Func Offset: 0x2bc
	// Line 1106, Address: 0x274a94, Func Offset: 0x2c4
	// Line 1107, Address: 0x274a98, Func Offset: 0x2c8
	// Line 1109, Address: 0x274aa8, Func Offset: 0x2d8
	// Line 1110, Address: 0x274ab0, Func Offset: 0x2e0
	// Line 1113, Address: 0x274ac0, Func Offset: 0x2f0
	// Line 1114, Address: 0x274ad0, Func Offset: 0x300
	// Line 1117, Address: 0x274ae8, Func Offset: 0x318
	// Line 1118, Address: 0x274afc, Func Offset: 0x32c
	// Line 1119, Address: 0x274b00, Func Offset: 0x330
	// Line 1121, Address: 0x274b08, Func Offset: 0x338
	// Line 1126, Address: 0x274b1c, Func Offset: 0x34c
	// Line 1127, Address: 0x274b30, Func Offset: 0x360
	// Line 1130, Address: 0x274b3c, Func Offset: 0x36c
	// Line 1132, Address: 0x274b4c, Func Offset: 0x37c
	// Line 1134, Address: 0x274b5c, Func Offset: 0x38c
	// Line 1137, Address: 0x274b64, Func Offset: 0x394
	// Line 1139, Address: 0x274b74, Func Offset: 0x3a4
	// Line 1141, Address: 0x274b8c, Func Offset: 0x3bc
	// Line 1142, Address: 0x274b9c, Func Offset: 0x3cc
	// Line 1144, Address: 0x274ba0, Func Offset: 0x3d0
	// Line 1145, Address: 0x274bb4, Func Offset: 0x3e4
	// Line 1146, Address: 0x274bb8, Func Offset: 0x3e8
	// Line 1147, Address: 0x274bbc, Func Offset: 0x3ec
	// Line 1148, Address: 0x274bc4, Func Offset: 0x3f4
	// Line 1151, Address: 0x274bc8, Func Offset: 0x3f8
	// Line 1152, Address: 0x274bd0, Func Offset: 0x400
	// Line 1155, Address: 0x274bd4, Func Offset: 0x404
	// Line 1157, Address: 0x274bdc, Func Offset: 0x40c
	// Line 1158, Address: 0x274be0, Func Offset: 0x410
	// Line 1164, Address: 0x274be8, Func Offset: 0x418
	// Line 1168, Address: 0x274c0c, Func Offset: 0x43c
	// Line 1170, Address: 0x274c20, Func Offset: 0x450
	// Line 1171, Address: 0x274c30, Func Offset: 0x460
	// Line 1172, Address: 0x274c40, Func Offset: 0x470
	// Line 1173, Address: 0x274c50, Func Offset: 0x480
	// Line 1175, Address: 0x274c60, Func Offset: 0x490
	// Line 1176, Address: 0x274c64, Func Offset: 0x494
	// Func End, Address: 0x274c98, Func Offset: 0x4c8
}

