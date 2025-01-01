typedef union fsFileIndex;
typedef struct _anon0;
typedef union fsFile;
typedef struct _loadBgCommon_Info_T;
typedef struct fsCdFile;
typedef struct fsMgcFile;
typedef struct fsMgfFile;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct _anon1;
typedef struct FilesBgBlock;


typedef int type_0[4];
typedef int type_1[5];
typedef int type_2[5][5];
typedef _loadBgCommon_Info_T type_3[1];

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
	_anon1 check;
	<unknown fundamental type (0xa510)> pack;
	fsCdFile cd;
	fsHdFile hd;
	fsMgcFile mgc;
	fsMgfFile mgf;
	fsMgpFile mgp;
};

struct _loadBgCommon_Info_T
{
	int glb_crd;
	float px;
	float pz;
	float fcx;
	float fcz;
	int icx;
	int icz;
	int minx;
	int minz;
	int outdoor;
	int RoomID;
	int BlockID[4];
	int AroundID[5][5];
	int unit;
	int load;
	int need;
	int lock;
	int miss;
	int hide_map;
	int hide_map_request;
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

struct _anon1
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

_loadBgCommon_Info_T _loadBgCommon_Info[1];

int loadBg1x1_GetIdForDrawEnv();
void* loadBg1x1_GetTrTexFile();

// 
// Start address: 0x2862a0
int loadBg1x1_GetIdForDrawEnv()
{
	int mapid;
	int glb_crd;
	_loadBgCommon_Info_T* info;
	// Line 9, Address: 0x2862a0, Func Offset: 0
	// Line 10, Address: 0x2862b0, Func Offset: 0x10
	// Line 15, Address: 0x2862b8, Func Offset: 0x18
	// Line 22, Address: 0x2862c4, Func Offset: 0x24
	// Line 24, Address: 0x2862f0, Func Offset: 0x50
	// Func End, Address: 0x286308, Func Offset: 0x68
}

// 
// Start address: 0x286310
void* loadBg1x1_GetTrTexFile()
{
	int i;
	void* file;
	FilesBgBlock* filesbg;
	int map_no;
	int glb_crd;
	_loadBgCommon_Info_T* info;
	// Line 27, Address: 0x286310, Func Offset: 0
	// Line 28, Address: 0x286324, Func Offset: 0x14
	// Line 35, Address: 0x28632c, Func Offset: 0x1c
	// Line 36, Address: 0x286338, Func Offset: 0x28
	// Line 37, Address: 0x286348, Func Offset: 0x38
	// Line 38, Address: 0x286358, Func Offset: 0x48
	// Line 39, Address: 0x28635c, Func Offset: 0x4c
	// Line 41, Address: 0x286364, Func Offset: 0x54
	// Line 42, Address: 0x286368, Func Offset: 0x58
	// Line 44, Address: 0x286374, Func Offset: 0x64
	// Line 45, Address: 0x286388, Func Offset: 0x78
	// Line 46, Address: 0x286394, Func Offset: 0x84
	// Line 47, Address: 0x286398, Func Offset: 0x88
	// Line 48, Address: 0x2863a0, Func Offset: 0x90
	// Line 49, Address: 0x2863b4, Func Offset: 0xa4
	// Line 52, Address: 0x2863b8, Func Offset: 0xa8
	// Func End, Address: 0x2863d4, Func Offset: 0xc4
}

