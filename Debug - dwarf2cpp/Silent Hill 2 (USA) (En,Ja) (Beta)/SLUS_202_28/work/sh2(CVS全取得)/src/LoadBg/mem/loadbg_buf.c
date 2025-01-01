typedef struct _loadBgMem_LoadCtrl;
typedef union fsFile;
typedef struct fsMgcFile;
typedef struct _anon0;
typedef struct _loadBgMem_UnitL;
typedef struct _loadBgMem_UnitR;
typedef struct _loadBgMem_CacheCtrl;
typedef struct _loadBgMem_UnitC;
typedef union fsFileIndex;
typedef struct _anon1;
typedef struct fsCdFile;
typedef struct fsMgfFile;
typedef struct fsHdFile;
typedef struct fsMgpFile;


typedef _loadBgMem_UnitL type_0[256];
typedef _loadBgMem_UnitR type_1[256];
typedef _loadBgMem_UnitC type_2[128];
typedef _loadBgMem_LoadCtrl type_3[1];
typedef _loadBgMem_CacheCtrl type_4[1];
typedef _loadBgMem_UnitL type_5[120];
typedef _loadBgMem_UnitR type_6[120];
typedef _loadBgMem_UnitC type_7[8];
typedef _loadBgMem_LoadCtrl type_8[1];
typedef _loadBgMem_CacheCtrl type_9[1];
typedef _loadBgMem_UnitL type_10[304];
typedef _loadBgMem_UnitR type_11[304];
typedef _loadBgMem_UnitC type_12[76];
typedef _loadBgMem_LoadCtrl type_13[1];
typedef _loadBgMem_CacheCtrl type_14[1];

struct _loadBgMem_LoadCtrl
{
	int UnitSize;
	int Units;
	char* Buffer;
	_loadBgMem_UnitL* UnitLArray;
	_loadBgMem_UnitR* UnitRArray;
	_loadBgMem_UnitR* headR;
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

struct _loadBgMem_UnitR
{
	fsFileIndex* file;
	unsigned short unitID;
	unsigned short unitNo;
	int sectID;
	_loadBgMem_UnitR* nextR;
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
	_anon1 index;
	unsigned long pack;
};

struct _anon1
{
	fsFile* fp;
	char* name;
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

_loadBgMem_CacheCtrl loadBg4x4_CacheCtrl[1];
_loadBgMem_LoadCtrl loadBg4x4_LoadCtrl[1];
_loadBgMem_UnitC loadBg4x4_CacheUnit[76];
_loadBgMem_UnitR loadBg4x4_RequestUnit[304];
_loadBgMem_UnitL loadBg4x4_LoadUnit[304];
_loadBgMem_CacheCtrl loadBg2x2_CacheCtrl[1];
_loadBgMem_LoadCtrl loadBg2x2_LoadCtrl[1];
_loadBgMem_UnitC loadBg2x2_CacheUnit[8];
_loadBgMem_UnitR loadBg2x2_RequestUnit[120];
_loadBgMem_UnitL loadBg2x2_LoadUnit[120];
_loadBgMem_CacheCtrl loadBg1x1_CacheCtrl[1];
_loadBgMem_LoadCtrl loadBg1x1_LoadCtrl[1];
_loadBgMem_UnitC loadBg1x1_CacheUnit[128];
_loadBgMem_UnitR loadBg1x1_RequestUnit[256];
_loadBgMem_UnitL loadBg1x1_LoadUnit[256];


