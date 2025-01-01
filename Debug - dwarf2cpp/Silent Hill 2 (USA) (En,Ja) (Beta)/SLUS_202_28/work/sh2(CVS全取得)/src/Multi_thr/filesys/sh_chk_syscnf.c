typedef union fsFile;
typedef struct fsMgcFile;
typedef struct _anon0;
typedef union fsFileIndex;
typedef struct _anon1;
typedef struct fsCdFile;
typedef struct fsMgfFile;
typedef struct fsHdFile;
typedef struct fsMgpFile;

typedef int(*type_4)(fsFile**, void**);

typedef void* type_0[2];
typedef fsFileIndex type_1[1];
typedef char type_2[14];
typedef fsFile type_3[1];
typedef <unknown fundamental type (0xa510)> type_5[128];
typedef <unknown fundamental type (0xa510)> type_6[128][1];
typedef fsFile* type_7[2];
typedef fsFile type_8[1];
typedef fsFile type_9[1];
typedef fsFileIndex type_10[1];
typedef char type_11[13];

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

char z_root_system_cnf__all__name[13];
fsFile z_root_system_cnf__all__info[1];
fsFileIndex root_system_cnf__all[1];
char z_root_system_cnf__name[14];
fsFile z_root_system_cnf__info[1];
fsFileIndex root_system_cnf[1];
fsFile* check_fplist[2];
void* check_buflist[2];
int(*check_func)(fsFile**, void**);
<unknown fundamental type (0xa510)> check_buf[128][1];

int check_func(fsFile** fplist, void** buflist);
int fcSetParamForSystemCnf(int debug);

// 
// Start address: 0x1be110
int check_func(fsFile** fplist, void** buflist)
{
	int step;
	char ch;
	char* chp;
	fsFile realfp[1];
	int disk_number;
	int size;
	// Line 68, Address: 0x1be110, Func Offset: 0
	// Line 75, Address: 0x1be128, Func Offset: 0x18
	// Line 76, Address: 0x1be148, Func Offset: 0x38
	// Line 77, Address: 0x1be16c, Func Offset: 0x5c
	// Line 78, Address: 0x1be170, Func Offset: 0x60
	// Line 81, Address: 0x1be17c, Func Offset: 0x6c
	// Line 83, Address: 0x1be180, Func Offset: 0x70
	// Line 85, Address: 0x1be19c, Func Offset: 0x8c
	// Line 86, Address: 0x1be1a4, Func Offset: 0x94
	// Line 88, Address: 0x1be1ac, Func Offset: 0x9c
	// Line 89, Address: 0x1be1b4, Func Offset: 0xa4
	// Line 92, Address: 0x1be1c4, Func Offset: 0xb4
	// Line 93, Address: 0x1be1c8, Func Offset: 0xb8
	// Line 94, Address: 0x1be1cc, Func Offset: 0xbc
	// Line 95, Address: 0x1be1d8, Func Offset: 0xc8
	// Line 97, Address: 0x1be1ec, Func Offset: 0xdc
	// Line 98, Address: 0x1be1f8, Func Offset: 0xe8
	// Line 99, Address: 0x1be1fc, Func Offset: 0xec
	// Line 102, Address: 0x1be22c, Func Offset: 0x11c
	// Line 103, Address: 0x1be248, Func Offset: 0x138
	// Line 109, Address: 0x1be250, Func Offset: 0x140
	// Line 110, Address: 0x1be25c, Func Offset: 0x14c
	// Line 111, Address: 0x1be260, Func Offset: 0x150
	// Line 113, Address: 0x1be264, Func Offset: 0x154
	// Line 116, Address: 0x1be26c, Func Offset: 0x15c
	// Line 117, Address: 0x1be284, Func Offset: 0x174
	// Line 118, Address: 0x1be290, Func Offset: 0x180
	// Line 119, Address: 0x1be298, Func Offset: 0x188
	// Line 120, Address: 0x1be29c, Func Offset: 0x18c
	// Line 121, Address: 0x1be2a0, Func Offset: 0x190
	// Line 128, Address: 0x1be2b4, Func Offset: 0x1a4
	// Line 134, Address: 0x1be2d8, Func Offset: 0x1c8
	// Line 135, Address: 0x1be2ec, Func Offset: 0x1dc
	// Line 136, Address: 0x1be2f0, Func Offset: 0x1e0
	// Func End, Address: 0x1be308, Func Offset: 0x1f8
}

// 
// Start address: 0x1be310
int fcSetParamForSystemCnf(int debug)
{
	unsigned int media_type;
	// Line 139, Address: 0x1be310, Func Offset: 0
	// Line 142, Address: 0x1be318, Func Offset: 0x8
	// Line 143, Address: 0x1be31c, Func Offset: 0xc
	// Line 144, Address: 0x1be328, Func Offset: 0x18
	// Line 146, Address: 0x1be34c, Func Offset: 0x3c
	// Func End, Address: 0x1be35c, Func Offset: 0x4c
}

