typedef union fsFileIndex;
typedef union fsFile;
typedef struct fsCdFile;
typedef struct fsMgcFile;
typedef struct fsMgfFile;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct _anon0;
typedef struct _anon1;


typedef fsFile type[1];

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

int execEnv_hd_merge_file;

void warning_no_entry(fsFileIndex* id);
int file_trans_merge_to_direct(fsFileIndex* id);
int FcFixFile(fsFileIndex* id);
int FcGetFileSize(fsFileIndex* id);
int FcRead(fsFileIndex* id, void* databuf);

// 
// Start address: 0x191a00
void warning_no_entry(fsFileIndex* id)
{
	// Line 19, Address: 0x191a00, Func Offset: 0
	// Line 20, Address: 0x191a0c, Func Offset: 0xc
	// Line 21, Address: 0x191a20, Func Offset: 0x20
	// Func End, Address: 0x191a30, Func Offset: 0x30
}

// 
// Start address: 0x191a30
int file_trans_merge_to_direct(fsFileIndex* id)
{
	fsFile* file;
	int ret;
	// Line 25, Address: 0x191a30, Func Offset: 0
	// Line 26, Address: 0x191a40, Func Offset: 0x10
	// Line 30, Address: 0x191a44, Func Offset: 0x14
	// Line 31, Address: 0x191a4c, Func Offset: 0x1c
	// Line 33, Address: 0x191a5c, Func Offset: 0x2c
	// Line 37, Address: 0x191a74, Func Offset: 0x44
	// Line 38, Address: 0x191a78, Func Offset: 0x48
	// Line 39, Address: 0x191a80, Func Offset: 0x50
	// Line 40, Address: 0x191aa8, Func Offset: 0x78
	// Line 41, Address: 0x191ab4, Func Offset: 0x84
	// Line 42, Address: 0x191ab8, Func Offset: 0x88
	// Line 43, Address: 0x191abc, Func Offset: 0x8c
	// Line 47, Address: 0x191ac0, Func Offset: 0x90
	// Line 48, Address: 0x191ac4, Func Offset: 0x94
	// Func End, Address: 0x191ad8, Func Offset: 0xa8
}

// 
// Start address: 0x191ae0
int FcFixFile(fsFileIndex* id)
{
	fsFile* file;
	// Line 53, Address: 0x191ae0, Func Offset: 0
	// Line 55, Address: 0x191af0, Func Offset: 0x10
	// Line 56, Address: 0x191afc, Func Offset: 0x1c
	// Line 57, Address: 0x191b08, Func Offset: 0x28
	// Line 59, Address: 0x191b14, Func Offset: 0x34
	// Line 60, Address: 0x191b1c, Func Offset: 0x3c
	// Line 61, Address: 0x191b28, Func Offset: 0x48
	// Line 62, Address: 0x191b38, Func Offset: 0x58
	// Line 64, Address: 0x191b48, Func Offset: 0x68
	// Line 65, Address: 0x191b50, Func Offset: 0x70
	// Line 67, Address: 0x191b64, Func Offset: 0x84
	// Line 70, Address: 0x191b70, Func Offset: 0x90
	// Line 72, Address: 0x191b74, Func Offset: 0x94
	// Func End, Address: 0x191b88, Func Offset: 0xa8
}

// 
// Start address: 0x191b90
int FcGetFileSize(fsFileIndex* id)
{
	int fid;
	fsFile* file;
	fsFile real[1];
	// Line 80, Address: 0x191b90, Func Offset: 0
	// Line 84, Address: 0x191ba4, Func Offset: 0x14
	// Line 85, Address: 0x191bb0, Func Offset: 0x20
	// Line 86, Address: 0x191bbc, Func Offset: 0x2c
	// Line 88, Address: 0x191bc8, Func Offset: 0x38
	// Line 89, Address: 0x191bd8, Func Offset: 0x48
	// Line 90, Address: 0x191bf4, Func Offset: 0x64
	// Line 91, Address: 0x191bfc, Func Offset: 0x6c
	// Line 92, Address: 0x191c0c, Func Offset: 0x7c
	// Line 93, Address: 0x191c20, Func Offset: 0x90
	// Line 95, Address: 0x191c2c, Func Offset: 0x9c
	// Line 97, Address: 0x191c30, Func Offset: 0xa0
	// Func End, Address: 0x191c48, Func Offset: 0xb8
}

// 
// Start address: 0x191c50
int FcRead(fsFileIndex* id, void* databuf)
{
	fsFile* file;
	// Line 139, Address: 0x191c50, Func Offset: 0
	// Line 141, Address: 0x191c64, Func Offset: 0x14
	// Line 142, Address: 0x191c70, Func Offset: 0x20
	// Line 143, Address: 0x191c7c, Func Offset: 0x2c
	// Line 145, Address: 0x191c88, Func Offset: 0x38
	// Line 146, Address: 0x191c90, Func Offset: 0x40
	// Line 151, Address: 0x191cac, Func Offset: 0x5c
	// Line 152, Address: 0x191cb8, Func Offset: 0x68
	// Line 154, Address: 0x191cc4, Func Offset: 0x74
	// Line 155, Address: 0x191cd4, Func Offset: 0x84
	// Func End, Address: 0x191ce8, Func Offset: 0x98
}

