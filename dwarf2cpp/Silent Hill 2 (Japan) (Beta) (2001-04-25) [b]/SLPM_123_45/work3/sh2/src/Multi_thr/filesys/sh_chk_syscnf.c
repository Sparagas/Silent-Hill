typedef union fsFileIndex;
typedef struct _anon0;
typedef union fsFile;
typedef struct fsCdFile;
typedef struct fsMgcFile;
typedef struct fsMgfFile;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct _anon1;

typedef int(*type_5)(fsFile**, void**);

typedef char type_0[13];
typedef void* type_1[2];
typedef fsFileIndex type_2[1];
typedef char type_3[14];
typedef fsFile type_4[1];
typedef <unknown fundamental type (0xa510)> type_6[128];
typedef <unknown fundamental type (0xa510)> type_7[128][1];
typedef fsFile* type_8[2];
typedef fsFile type_9[1];
typedef fsFile type_10[1];
typedef fsFileIndex type_11[1];

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

char root_system_cnf__all__name[13];
fsFile root_system_cnf__all__info[1];
fsFileIndex root_system_cnf__all[1];
char root_system_cnf__name[14];
fsFile root_system_cnf__info[1];
fsFileIndex root_system_cnf[1];
fsFile* check_fplist[2];
void* check_buflist[2];
int(*check_func)(fsFile**, void**);
<unknown fundamental type (0xa510)> check_buf[128][1];

int check_func(fsFile** fplist, void** buflist);
int fcSetParamForSystemCnf(int debug);

// 
// Start address: 0x1c77f0
int check_func(fsFile** fplist, void** buflist)
{
	int step;
	char ch;
	char* chp;
	fsFile realfp[1];
	int disk_number;
	int size;
	// Line 22, Address: 0x1c77f0, Func Offset: 0
	// Line 29, Address: 0x1c7818, Func Offset: 0x28
	// Line 30, Address: 0x1c783c, Func Offset: 0x4c
	// Line 31, Address: 0x1c7864, Func Offset: 0x74
	// Line 32, Address: 0x1c7868, Func Offset: 0x78
	// Line 35, Address: 0x1c7874, Func Offset: 0x84
	// Line 37, Address: 0x1c7878, Func Offset: 0x88
	// Line 39, Address: 0x1c78a0, Func Offset: 0xb0
	// Line 40, Address: 0x1c78b0, Func Offset: 0xc0
	// Line 42, Address: 0x1c78b8, Func Offset: 0xc8
	// Line 43, Address: 0x1c78cc, Func Offset: 0xdc
	// Line 45, Address: 0x1c78e0, Func Offset: 0xf0
	// Line 46, Address: 0x1c78f8, Func Offset: 0x108
	// Line 47, Address: 0x1c78fc, Func Offset: 0x10c
	// Line 48, Address: 0x1c7900, Func Offset: 0x110
	// Line 49, Address: 0x1c7910, Func Offset: 0x120
	// Line 51, Address: 0x1c7924, Func Offset: 0x134
	// Line 52, Address: 0x1c7938, Func Offset: 0x148
	// Line 53, Address: 0x1c793c, Func Offset: 0x14c
	// Line 56, Address: 0x1c796c, Func Offset: 0x17c
	// Line 57, Address: 0x1c7994, Func Offset: 0x1a4
	// Line 63, Address: 0x1c799c, Func Offset: 0x1ac
	// Line 64, Address: 0x1c79b0, Func Offset: 0x1c0
	// Line 65, Address: 0x1c79b4, Func Offset: 0x1c4
	// Line 67, Address: 0x1c79b8, Func Offset: 0x1c8
	// Line 70, Address: 0x1c79c0, Func Offset: 0x1d0
	// Line 71, Address: 0x1c79e8, Func Offset: 0x1f8
	// Line 72, Address: 0x1c79f4, Func Offset: 0x204
	// Line 73, Address: 0x1c7a04, Func Offset: 0x214
	// Line 75, Address: 0x1c7a08, Func Offset: 0x218
	// Line 76, Address: 0x1c7a1c, Func Offset: 0x22c
	// Line 77, Address: 0x1c7a28, Func Offset: 0x238
	// Line 81, Address: 0x1c7a34, Func Offset: 0x244
	// Line 82, Address: 0x1c7a4c, Func Offset: 0x25c
	// Line 83, Address: 0x1c7a50, Func Offset: 0x260
	// Func End, Address: 0x1c7a78, Func Offset: 0x288
}

// 
// Start address: 0x1c7a80
int fcSetParamForSystemCnf(int debug)
{
	unsigned int media_type;
	// Line 86, Address: 0x1c7a80, Func Offset: 0
	// Line 88, Address: 0x1c7a90, Func Offset: 0x10
	// Line 89, Address: 0x1c7a94, Func Offset: 0x14
	// Line 90, Address: 0x1c7aa4, Func Offset: 0x24
	// Line 92, Address: 0x1c7ac8, Func Offset: 0x48
	// Func End, Address: 0x1c7adc, Func Offset: 0x5c
}

