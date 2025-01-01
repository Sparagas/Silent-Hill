typedef struct _loadBgCommon_Info_T;
typedef union fsFileIndex;
typedef union fsFile;
typedef struct fsCdFile;
typedef struct fsMgcFile;
typedef struct fsMgfFile;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct _anon0;
typedef struct _anon1;


typedef int type_0[4];
typedef int type_1[5];
typedef int type_2[5][5];
typedef int type_3[4];
typedef _loadBgCommon_Info_T type_4[1];

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

union fsFileIndex
{
	_anon1 index;
	unsigned long pack;
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

struct _anon1
{
	fsFile* fp;
	char* name;
};

_loadBgCommon_Info_T _loadBgCommon_Info[1];
int excl_sid;

int _loadBgCommon_LoadData(void* loadbuf, fsFileIndex* file, int limit);
int BPOSfromFPOS(float f);
float FPOSfromBPOS(int i);
int loadBgCommon_GetBlockNoOutdoor(int glb_crd, int bx, int bz);
int loadBgCommon_SetInfo(int glb_crd, float px, float pz);
int loadBgCommon_HideMapBlockOutdoor(int mapid);

// 
// Start address: 0x251bf0
int _loadBgCommon_LoadData(void* loadbuf, fsFileIndex* file, int limit)
{
	int fid;
	int size;
	// Line 21, Address: 0x251bf0, Func Offset: 0
	// Line 24, Address: 0x251c14, Func Offset: 0x24
	// Line 25, Address: 0x251c1c, Func Offset: 0x2c
	// Line 26, Address: 0x251c2c, Func Offset: 0x3c
	// Line 27, Address: 0x251c34, Func Offset: 0x44
	// Line 29, Address: 0x251c64, Func Offset: 0x74
	// Line 30, Address: 0x251c74, Func Offset: 0x84
	// Line 32, Address: 0x251c84, Func Offset: 0x94
	// Line 33, Address: 0x251c94, Func Offset: 0xa4
	// Line 34, Address: 0x251c9c, Func Offset: 0xac
	// Line 36, Address: 0x251ca0, Func Offset: 0xb0
	// Line 37, Address: 0x251ca8, Func Offset: 0xb8
	// Line 39, Address: 0x251cac, Func Offset: 0xbc
	// Line 40, Address: 0x251cb0, Func Offset: 0xc0
	// Func End, Address: 0x251cd0, Func Offset: 0xe0
}

// 
// Start address: 0x251cd0
int BPOSfromFPOS(float f)
{
	int ret;
	int i;
	// Line 50, Address: 0x251cd0, Func Offset: 0
	// Line 51, Address: 0x251cf0, Func Offset: 0x20
	// Line 52, Address: 0x251cf8, Func Offset: 0x28
	// Line 53, Address: 0x251d24, Func Offset: 0x54
	// Line 54, Address: 0x251d2c, Func Offset: 0x5c
	// Line 57, Address: 0x251d4c, Func Offset: 0x7c
	// Func End, Address: 0x251d54, Func Offset: 0x84
}

// 
// Start address: 0x251d60
float FPOSfromBPOS(int i)
{
	float ret;
	// Line 60, Address: 0x251d60, Func Offset: 0
	// Line 63, Address: 0x251d68, Func Offset: 0x8
	// Line 70, Address: 0x251dac, Func Offset: 0x4c
	// Func End, Address: 0x251dbc, Func Offset: 0x5c
}

// 
// Start address: 0x251dc0
int loadBgCommon_GetBlockNoOutdoor(int glb_crd, int bx, int bz)
{
	_loadBgCommon_Info_T* info;
	int blocks[4];
	int id;
	// Line 112, Address: 0x251dc0, Func Offset: 0
	// Line 115, Address: 0x251dd0, Func Offset: 0x10
	// Line 116, Address: 0x251dd8, Func Offset: 0x18
	// Line 117, Address: 0x251e00, Func Offset: 0x40
	// Line 119, Address: 0x251e08, Func Offset: 0x48
	// Line 120, Address: 0x251e18, Func Offset: 0x58
	// Line 121, Address: 0x251e24, Func Offset: 0x64
	// Line 146, Address: 0x251e28, Func Offset: 0x68
	// Func End, Address: 0x251e3c, Func Offset: 0x7c
}

// 
// Start address: 0x251e40
int loadBgCommon_SetInfo(int glb_crd, float px, float pz)
{
	float fcz;
	float fcx;
	int minz;
	int minx;
	int icz;
	int icx;
	int iz;
	int ix;
	float bz;
	float bx;
	int outdoor;
	_loadBgCommon_Info_T* info;
	int init;
	// Line 149, Address: 0x251e40, Func Offset: 0
	// Line 150, Address: 0x251e84, Func Offset: 0x44
	// Line 166, Address: 0x251e8c, Func Offset: 0x4c
	// Line 170, Address: 0x251eb0, Func Offset: 0x70
	// Line 171, Address: 0x251eb8, Func Offset: 0x78
	// Line 174, Address: 0x251ebc, Func Offset: 0x7c
	// Line 176, Address: 0x251ed0, Func Offset: 0x90
	// Line 179, Address: 0x251ed4, Func Offset: 0x94
	// Line 180, Address: 0x251ee4, Func Offset: 0xa4
	// Line 181, Address: 0x251ef4, Func Offset: 0xb4
	// Line 182, Address: 0x251f04, Func Offset: 0xc4
	// Line 185, Address: 0x251f14, Func Offset: 0xd4
	// Line 186, Address: 0x251f18, Func Offset: 0xd8
	// Line 203, Address: 0x251f1c, Func Offset: 0xdc
	// Line 204, Address: 0x251f20, Func Offset: 0xe0
	// Line 205, Address: 0x251f24, Func Offset: 0xe4
	// Line 206, Address: 0x251f28, Func Offset: 0xe8
	// Line 207, Address: 0x251f2c, Func Offset: 0xec
	// Line 208, Address: 0x251f30, Func Offset: 0xf0
	// Line 209, Address: 0x251f34, Func Offset: 0xf4
	// Line 210, Address: 0x251f38, Func Offset: 0xf8
	// Line 211, Address: 0x251f3c, Func Offset: 0xfc
	// Line 212, Address: 0x251f4c, Func Offset: 0x10c
	// Line 213, Address: 0x251f50, Func Offset: 0x110
	// Line 216, Address: 0x251f68, Func Offset: 0x128
	// Line 219, Address: 0x251f74, Func Offset: 0x134
	// Line 220, Address: 0x251f84, Func Offset: 0x144
	// Line 223, Address: 0x251f90, Func Offset: 0x150
	// Line 229, Address: 0x251fa0, Func Offset: 0x160
	// Line 230, Address: 0x252010, Func Offset: 0x1d0
	// Line 231, Address: 0x252024, Func Offset: 0x1e4
	// Line 233, Address: 0x252034, Func Offset: 0x1f4
	// Line 236, Address: 0x25203c, Func Offset: 0x1fc
	// Line 237, Address: 0x252070, Func Offset: 0x230
	// Line 238, Address: 0x25207c, Func Offset: 0x23c
	// Line 239, Address: 0x252088, Func Offset: 0x248
	// Line 240, Address: 0x25209c, Func Offset: 0x25c
	// Line 241, Address: 0x2520a4, Func Offset: 0x264
	// Line 242, Address: 0x2520bc, Func Offset: 0x27c
	// Line 243, Address: 0x2520d0, Func Offset: 0x290
	// Line 244, Address: 0x2520d8, Func Offset: 0x298
	// Line 249, Address: 0x2520e8, Func Offset: 0x2a8
	// Line 250, Address: 0x2520f0, Func Offset: 0x2b0
	// Func End, Address: 0x252130, Func Offset: 0x2f0
}

// 
// Start address: 0x252130
int loadBgCommon_HideMapBlockOutdoor(int mapid)
{
	int prev;
	_loadBgCommon_Info_T* info;
	// Line 266, Address: 0x252130, Func Offset: 0
	// Line 267, Address: 0x252138, Func Offset: 0x8
	// Line 269, Address: 0x252140, Func Offset: 0x10
	// Func End, Address: 0x252148, Func Offset: 0x18
}

