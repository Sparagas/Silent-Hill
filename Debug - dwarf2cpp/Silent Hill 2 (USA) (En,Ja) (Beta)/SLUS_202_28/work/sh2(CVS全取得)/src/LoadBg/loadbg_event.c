typedef struct _loadBgMem_UnitC;
typedef union fsFileIndex;
typedef struct _anon0;
typedef union fsFile;
typedef struct loadBgMem_File;
typedef struct loadBgMem_Sect;
typedef struct fsCdFile;
typedef struct fsMgcFile;
typedef struct _loadBgMem_UnitL;
typedef struct _loadBgMem_UnitR;
typedef struct fsMgfFile;
typedef struct fsHdFile;
typedef struct _anon1;
typedef struct fsMgpFile;
typedef struct _loadBgMem_LoadCtrl;
typedef struct _anon2;
typedef struct _loadBgMem_CacheCtrl;


typedef _loadBgMem_UnitL type_0[1024];
typedef _loadBgMem_UnitR type_1[1024];
typedef _loadBgMem_UnitC type_2[4];
typedef char type_3[32768];
typedef loadBgMem_Sect* type_4[101];
typedef loadBgMem_Sect* type_5[2];
typedef loadBgMem_Sect type_6[100];
typedef loadBgMem_File type_7[100];

struct _loadBgMem_UnitC
{
	fsFileIndex* file;
	unsigned short unitID;
	unsigned short unitNo;
	_loadBgMem_UnitC* prevC;
	_loadBgMem_UnitC* nextC;
};

union fsFileIndex
{
	_anon0 index;
	unsigned long pack;
};

struct _anon0
{
	fsFile* fp;
	char* name;
};

union fsFile
{
	_anon2 check;
	<unknown fundamental type (0xa510)> pack;
	fsCdFile cd;
	fsHdFile hd;
	fsMgcFile mgc;
	fsMgfFile mgf;
	fsMgpFile mgp;
};

struct loadBgMem_File
{
	fsFileIndex* file;
	int ofsS;
	int ofsE;
	void* addr;
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

struct _anon1
{
	_loadBgMem_LoadCtrl ctrl;
	_loadBgMem_UnitL UnitLArray[1024];
	_loadBgMem_UnitR UnitRArray[1024];
	_loadBgMem_CacheCtrl cache;
	_loadBgMem_UnitC UnitCArray[4];
	char c_buf[32768];
	loadBgMem_Sect* SectList[101];
	loadBgMem_Sect* infosect[2];
	loadBgMem_Sect SectListBuf[100];
	loadBgMem_File filelist[100];
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

struct _anon2
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

struct _loadBgMem_CacheCtrl
{
	int UnitSize;
	int Units;
	char* Buffer;
	_loadBgMem_UnitC* UnitCArray;
	_loadBgMem_UnitC* headC;
	_loadBgMem_UnitC* tailC;
};

_anon1 d;

void initwork();
loadBgMem_File* getfilelist();
loadBgMem_Sect* getfreesect();
loadBgMem_Sect* getsect(void* adr);
loadBgMem_Sect* setsect(void* adr, int size);
void addsectlist(loadBgMem_Sect* sect);
void LoadBgEventInit(void* adr, unsigned int size);
void LoadBgEventFileLoad(fsFileIndex* fileid, void* adr);
void LoadBgEventLoadSync();
int LoadBgEventListCnt();
int LoadBgEventLoadCnt();
int LoadBgEventIsLoad();
void LoadBgEventDispose();

// 
// Start address: 0x28f0c0
void initwork()
{
	// Line 29, Address: 0x28f0c0, Func Offset: 0
	// Line 30, Address: 0x28f0c8, Func Offset: 0x8
	// Line 31, Address: 0x28f0e0, Func Offset: 0x20
	// Line 32, Address: 0x28f0e8, Func Offset: 0x28
	// Func End, Address: 0x28f0f8, Func Offset: 0x38
}

// 
// Start address: 0x28f100
loadBgMem_File* getfilelist()
{
	int i;
	// Line 39, Address: 0x28f100, Func Offset: 0
	// Line 40, Address: 0x28f10c, Func Offset: 0xc
	// Line 41, Address: 0x28f128, Func Offset: 0x28
	// Line 43, Address: 0x28f148, Func Offset: 0x48
	// Line 44, Address: 0x28f15c, Func Offset: 0x5c
	// Line 45, Address: 0x28f160, Func Offset: 0x60
	// Func End, Address: 0x28f168, Func Offset: 0x68
}

// 
// Start address: 0x28f170
loadBgMem_Sect* getfreesect()
{
	int i;
	// Line 56, Address: 0x28f170, Func Offset: 0
	// Line 59, Address: 0x28f178, Func Offset: 0x8
	// Line 60, Address: 0x28f184, Func Offset: 0x14
	// Line 61, Address: 0x28f1a8, Func Offset: 0x38
	// Line 63, Address: 0x28f1c8, Func Offset: 0x58
	// Line 64, Address: 0x28f1dc, Func Offset: 0x6c
	// Line 66, Address: 0x28f204, Func Offset: 0x94
	// Func End, Address: 0x28f214, Func Offset: 0xa4
}

// 
// Start address: 0x28f220
loadBgMem_Sect* getsect(void* adr)
{
	loadBgMem_Sect* p;
	int i;
	// Line 69, Address: 0x28f220, Func Offset: 0
	// Line 73, Address: 0x28f22c, Func Offset: 0xc
	// Line 74, Address: 0x28f238, Func Offset: 0x18
	// Line 75, Address: 0x28f248, Func Offset: 0x28
	// Line 76, Address: 0x28f250, Func Offset: 0x30
	// Line 77, Address: 0x28f258, Func Offset: 0x38
	// Line 78, Address: 0x28f25c, Func Offset: 0x3c
	// Line 80, Address: 0x28f264, Func Offset: 0x44
	// Line 81, Address: 0x28f274, Func Offset: 0x54
	// Line 83, Address: 0x28f29c, Func Offset: 0x7c
	// Func End, Address: 0x28f2b0, Func Offset: 0x90
}

// 
// Start address: 0x28f2b0
loadBgMem_Sect* setsect(void* adr, int size)
{
	loadBgMem_Sect* p;
	// Line 86, Address: 0x28f2b0, Func Offset: 0
	// Line 89, Address: 0x28f2c0, Func Offset: 0x10
	// Line 91, Address: 0x28f2c8, Func Offset: 0x18
	// Line 92, Address: 0x28f2fc, Func Offset: 0x4c
	// Line 94, Address: 0x28f324, Func Offset: 0x74
	// Func End, Address: 0x28f338, Func Offset: 0x88
}

// 
// Start address: 0x28f340
void addsectlist(loadBgMem_Sect* sect)
{
	loadBgMem_Sect** l;
	int i;
	// Line 106, Address: 0x28f340, Func Offset: 0
	// Line 108, Address: 0x28f348, Func Offset: 0x8
	// Line 110, Address: 0x28f350, Func Offset: 0x10
	// Line 111, Address: 0x28f35c, Func Offset: 0x1c
	// Line 112, Address: 0x28f380, Func Offset: 0x40
	// Line 113, Address: 0x28f3bc, Func Offset: 0x7c
	// Line 115, Address: 0x28f3c0, Func Offset: 0x80
	// Line 116, Address: 0x28f3c4, Func Offset: 0x84
	// Func End, Address: 0x28f3d4, Func Offset: 0x94
}

// 
// Start address: 0x28f3e0
void LoadBgEventInit(void* adr, unsigned int size)
{
	int Units;
	// Line 146, Address: 0x28f3e0, Func Offset: 0
	// Line 149, Address: 0x28f3ec, Func Offset: 0xc
	// Line 150, Address: 0x28f41c, Func Offset: 0x3c
	// Line 151, Address: 0x28f424, Func Offset: 0x44
	// Line 156, Address: 0x28f448, Func Offset: 0x68
	// Line 164, Address: 0x28f470, Func Offset: 0x90
	// Line 165, Address: 0x28f478, Func Offset: 0x98
	// Func End, Address: 0x28f488, Func Offset: 0xa8
}

// 
// Start address: 0x28f490
void LoadBgEventFileLoad(fsFileIndex* fileid, void* adr)
{
	int size;
	loadBgMem_Sect* p;
	// Line 169, Address: 0x28f490, Func Offset: 0
	// Line 173, Address: 0x28f4ac, Func Offset: 0x1c
	// Line 174, Address: 0x28f4b8, Func Offset: 0x28
	// Line 175, Address: 0x28f4cc, Func Offset: 0x3c
	// Line 176, Address: 0x28f4fc, Func Offset: 0x6c
	// Line 177, Address: 0x28f504, Func Offset: 0x74
	// Line 178, Address: 0x28f510, Func Offset: 0x80
	// Line 179, Address: 0x28f544, Func Offset: 0xb4
	// Line 180, Address: 0x28f548, Func Offset: 0xb8
	// Line 181, Address: 0x28f550, Func Offset: 0xc0
	// Line 182, Address: 0x28f55c, Func Offset: 0xcc
	// Func End, Address: 0x28f578, Func Offset: 0xe8
}

// 
// Start address: 0x28f580
void LoadBgEventLoadSync()
{
	// Line 200, Address: 0x28f580, Func Offset: 0
	// Line 201, Address: 0x28f588, Func Offset: 0x8
	// Line 202, Address: 0x28f598, Func Offset: 0x18
	// Line 203, Address: 0x28f5b0, Func Offset: 0x30
	// Line 205, Address: 0x28f5c0, Func Offset: 0x40
	// Line 214, Address: 0x28f5f0, Func Offset: 0x70
	// Func End, Address: 0x28f600, Func Offset: 0x80
}

// 
// Start address: 0x28f600
int LoadBgEventListCnt()
{
	loadBgMem_Sect** p;
	int i;
	// Line 223, Address: 0x28f600, Func Offset: 0
	// Line 224, Address: 0x28f608, Func Offset: 0x8
	// Line 225, Address: 0x28f614, Func Offset: 0x14
	// Line 227, Address: 0x28f638, Func Offset: 0x38
	// Func End, Address: 0x28f640, Func Offset: 0x40
}

// 
// Start address: 0x28f640
int LoadBgEventLoadCnt()
{
	int cnt;
	// Line 230, Address: 0x28f640, Func Offset: 0
	// Line 234, Address: 0x28f648, Func Offset: 0x8
	// Line 235, Address: 0x28f658, Func Offset: 0x18
	// Line 236, Address: 0x28f670, Func Offset: 0x30
	// Line 238, Address: 0x28f680, Func Offset: 0x40
	// Line 240, Address: 0x28f694, Func Offset: 0x54
	// Func End, Address: 0x28f6a4, Func Offset: 0x64
}

// 
// Start address: 0x28f6b0
int LoadBgEventIsLoad()
{
	// Line 242, Address: 0x28f6b0, Func Offset: 0
	// Line 243, Address: 0x28f6b8, Func Offset: 0x8
	// Line 244, Address: 0x28f6c8, Func Offset: 0x18
	// Func End, Address: 0x28f6d8, Func Offset: 0x28
}

// 
// Start address: 0x28f6e0
void LoadBgEventDispose()
{
	// Line 263, Address: 0x28f6e0, Func Offset: 0
	// Line 264, Address: 0x28f6e8, Func Offset: 0x8
	// Line 266, Address: 0x28f6f0, Func Offset: 0x10
	// Func End, Address: 0x28f700, Func Offset: 0x20
}

