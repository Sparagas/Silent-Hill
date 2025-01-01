typedef struct fsMgpFile;
typedef union fsFile;
typedef struct fsMgcFile;
typedef struct _anon0;
typedef struct _anon1;
typedef union fsFileIndex;
typedef struct _anon2;
typedef struct fsCdFile;
typedef struct fsMgfFile;
typedef struct fsHdFile;



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

struct _anon1
{
	int dummy;
	int d_count;
};

union fsFileIndex
{
	_anon2 index;
	unsigned long pack;
};

struct _anon2
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

_anon1 d;

void MoviePreSet(fsFileIndex* id);
void MovieAbort();
void MovieInit();
int MovieMain();
int dbmovie();

// 
// Start address: 0x242940
void MoviePreSet(fsFileIndex* id)
{
	// Line 15, Address: 0x242940, Func Offset: 0
	// Line 16, Address: 0x24294c, Func Offset: 0xc
	// Line 17, Address: 0x24295c, Func Offset: 0x1c
	// Line 18, Address: 0x242968, Func Offset: 0x28
	// Line 19, Address: 0x242970, Func Offset: 0x30
	// Line 20, Address: 0x242978, Func Offset: 0x38
	// Line 21, Address: 0x24298c, Func Offset: 0x4c
	// Line 22, Address: 0x242998, Func Offset: 0x58
	// Line 24, Address: 0x2429a4, Func Offset: 0x64
	// Func End, Address: 0x2429b4, Func Offset: 0x74
}

// 
// Start address: 0x2429c0
void MovieAbort()
{
	// Line 28, Address: 0x2429c0, Func Offset: 0
	// Line 29, Address: 0x2429d0, Func Offset: 0x10
	// Line 32, Address: 0x2429d8, Func Offset: 0x18
	// Func End, Address: 0x2429e0, Func Offset: 0x20
}

// 
// Start address: 0x2429e0
void MovieInit()
{
	// Line 35, Address: 0x2429e0, Func Offset: 0
	// Line 36, Address: 0x2429e8, Func Offset: 0x8
	// Line 37, Address: 0x2429f0, Func Offset: 0x10
	// Func End, Address: 0x242a00, Func Offset: 0x20
}

// 
// Start address: 0x242a00
int MovieMain()
{
	// Line 40, Address: 0x242a00, Func Offset: 0
	// Line 41, Address: 0x242a08, Func Offset: 0x8
	// Line 42, Address: 0x242a18, Func Offset: 0x18
	// Line 43, Address: 0x242a28, Func Offset: 0x28
	// Line 44, Address: 0x242a3c, Func Offset: 0x3c
	// Line 46, Address: 0x242a48, Func Offset: 0x48
	// Line 49, Address: 0x242a54, Func Offset: 0x54
	// Line 51, Address: 0x242a5c, Func Offset: 0x5c
	// Func End, Address: 0x242a6c, Func Offset: 0x6c
}

// 
// Start address: 0x242a70
int dbmovie()
{
	int result;
	int st;
	// Line 55, Address: 0x242a70, Func Offset: 0
	// Line 57, Address: 0x242a7c, Func Offset: 0xc
	// Line 58, Address: 0x242a80, Func Offset: 0x10
	// Line 60, Address: 0x242ab0, Func Offset: 0x40
	// Line 63, Address: 0x242abc, Func Offset: 0x4c
	// Line 65, Address: 0x242ad0, Func Offset: 0x60
	// Line 66, Address: 0x242ae8, Func Offset: 0x78
	// Line 68, Address: 0x242af0, Func Offset: 0x80
	// Line 69, Address: 0x242b00, Func Offset: 0x90
	// Line 70, Address: 0x242b08, Func Offset: 0x98
	// Line 72, Address: 0x242b0c, Func Offset: 0x9c
	// Line 77, Address: 0x242b14, Func Offset: 0xa4
	// Line 78, Address: 0x242b18, Func Offset: 0xa8
	// Func End, Address: 0x242b2c, Func Offset: 0xbc
}

