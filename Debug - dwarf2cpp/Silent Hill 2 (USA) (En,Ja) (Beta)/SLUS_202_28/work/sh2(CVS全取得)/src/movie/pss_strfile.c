typedef union fsFileIndex;
typedef struct _anon0;
typedef union fsFile;
typedef struct _anon1;
typedef struct fsCdFile;
typedef struct fsMgcFile;
typedef struct fsMgfFile;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct _anon2;



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

struct _anon1
{
	fsFileIndex* id;
	int size;
	int ofs;
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

int isStrFileInit;
_anon1 d;

int strFileOpen(fsFileIndex* id);
int strFileSize();
int strFileRead(void* buf, int size);
int strFileClose();

// 
// Start address: 0x28c2f0
int strFileOpen(fsFileIndex* id)
{
	// Line 56, Address: 0x28c2f0, Func Offset: 0
	// Line 58, Address: 0x28c2f8, Func Offset: 0x8
	// Line 59, Address: 0x28c324, Func Offset: 0x34
	// Line 60, Address: 0x28c32c, Func Offset: 0x3c
	// Line 67, Address: 0x28c334, Func Offset: 0x44
	// Line 116, Address: 0x28c344, Func Offset: 0x54
	// Line 117, Address: 0x28c348, Func Offset: 0x58
	// Func End, Address: 0x28c358, Func Offset: 0x68
}

// 
// Start address: 0x28c360
int strFileSize()
{
	// Line 120, Address: 0x28c360, Func Offset: 0
	// Line 122, Address: 0x28c368, Func Offset: 0x8
	// Line 128, Address: 0x28c378, Func Offset: 0x18
	// Func End, Address: 0x28c388, Func Offset: 0x28
}

// 
// Start address: 0x28c390
int strFileRead(void* buf, int size)
{
	int fid;
	int count;
	// Line 131, Address: 0x28c390, Func Offset: 0
	// Line 135, Address: 0x28c3ac, Func Offset: 0x1c
	// Line 136, Address: 0x28c3bc, Func Offset: 0x2c
	// Line 137, Address: 0x28c3d0, Func Offset: 0x40
	// Line 138, Address: 0x28c3d8, Func Offset: 0x48
	// Line 140, Address: 0x28c3e4, Func Offset: 0x54
	// Line 142, Address: 0x28c3e8, Func Offset: 0x58
	// Line 143, Address: 0x28c408, Func Offset: 0x78
	// Line 144, Address: 0x28c414, Func Offset: 0x84
	// Line 145, Address: 0x28c424, Func Offset: 0x94
	// Line 170, Address: 0x28c438, Func Offset: 0xa8
	// Line 171, Address: 0x28c43c, Func Offset: 0xac
	// Func End, Address: 0x28c458, Func Offset: 0xc8
}

// 
// Start address: 0x28c460
int strFileClose()
{
	// Line 176, Address: 0x28c460, Func Offset: 0
	// Line 185, Address: 0x28c468, Func Offset: 0x8
	// Line 186, Address: 0x28c46c, Func Offset: 0xc
	// Func End, Address: 0x28c474, Func Offset: 0x14
}

