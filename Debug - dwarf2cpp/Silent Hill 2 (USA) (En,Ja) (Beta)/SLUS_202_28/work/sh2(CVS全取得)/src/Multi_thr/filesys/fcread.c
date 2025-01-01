typedef union fsFile;
typedef union fsFileIndex;
typedef struct fsCdFile;
typedef struct fsMgcFile;
typedef struct fsMgfFile;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct _anon0;
typedef struct _anon1;


typedef fsFile type[1];

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

union fsFileIndex
{
	_anon1 index;
	unsigned long pack;
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
int fcGetFileSize(fsFile* file);
int FcGetFileSize(fsFileIndex* id);
int FcRead(fsFileIndex* id, void* databuf);
int FcReadPart(fsFileIndex* id, void* databuf, int offset, int size);

// 
// Start address: 0x26bac0
void warning_no_entry(fsFileIndex* id)
{
	// Line 19, Address: 0x26bac0, Func Offset: 0
	// Line 20, Address: 0x26bacc, Func Offset: 0xc
	// Line 21, Address: 0x26badc, Func Offset: 0x1c
	// Func End, Address: 0x26baec, Func Offset: 0x2c
}

// 
// Start address: 0x26baf0
int file_trans_merge_to_direct(fsFileIndex* id)
{
	fsFile* file;
	int ret;
	// Line 26, Address: 0x26baf0, Func Offset: 0
	// Line 30, Address: 0x26baf4, Func Offset: 0x4
	// Line 31, Address: 0x26baf8, Func Offset: 0x8
	// Line 33, Address: 0x26bb08, Func Offset: 0x18
	// Line 37, Address: 0x26bb18, Func Offset: 0x28
	// Line 38, Address: 0x26bb1c, Func Offset: 0x2c
	// Line 39, Address: 0x26bb24, Func Offset: 0x34
	// Line 40, Address: 0x26bb4c, Func Offset: 0x5c
	// Line 41, Address: 0x26bb54, Func Offset: 0x64
	// Line 42, Address: 0x26bb58, Func Offset: 0x68
	// Line 43, Address: 0x26bb5c, Func Offset: 0x6c
	// Line 48, Address: 0x26bb60, Func Offset: 0x70
	// Func End, Address: 0x26bb68, Func Offset: 0x78
}

// 
// Start address: 0x26bb70
int FcFixFile(fsFileIndex* id)
{
	fsFile* file;
	// Line 55, Address: 0x26bb70, Func Offset: 0
	// Line 57, Address: 0x26bb78, Func Offset: 0x8
	// Line 58, Address: 0x26bb80, Func Offset: 0x10
	// Line 59, Address: 0x26bb88, Func Offset: 0x18
	// Line 61, Address: 0x26bb94, Func Offset: 0x24
	// Line 62, Address: 0x26bb98, Func Offset: 0x28
	// Line 63, Address: 0x26bba0, Func Offset: 0x30
	// Line 64, Address: 0x26bbb0, Func Offset: 0x40
	// Line 67, Address: 0x26bbc0, Func Offset: 0x50
	// Line 74, Address: 0x26bbe8, Func Offset: 0x78
	// Line 82, Address: 0x26bc08, Func Offset: 0x98
	// Func End, Address: 0x26bc18, Func Offset: 0xa8
}

// 
// Start address: 0x26bc20
int fcGetFileSize(fsFile* file)
{
	fsFile real[1];
	// Line 92, Address: 0x26bc20, Func Offset: 0
	// Line 97, Address: 0x26bc2c, Func Offset: 0xc
	// Line 99, Address: 0x26bc38, Func Offset: 0x18
	// Line 108, Address: 0x26bc3c, Func Offset: 0x1c
	// Func End, Address: 0x26bc4c, Func Offset: 0x2c
}

// 
// Start address: 0x26bc50
int FcGetFileSize(fsFileIndex* id)
{
	int fid;
	fsFile* file;
	// Line 111, Address: 0x26bc50, Func Offset: 0
	// Line 115, Address: 0x26bc60, Func Offset: 0x10
	// Line 116, Address: 0x26bc68, Func Offset: 0x18
	// Line 117, Address: 0x26bc70, Func Offset: 0x20
	// Line 121, Address: 0x26bc7c, Func Offset: 0x2c
	// Line 122, Address: 0x26bc84, Func Offset: 0x34
	// Line 124, Address: 0x26bca0, Func Offset: 0x50
	// Line 125, Address: 0x26bca4, Func Offset: 0x54
	// Line 126, Address: 0x26bcac, Func Offset: 0x5c
	// Func End, Address: 0x26bcc0, Func Offset: 0x70
}

// 
// Start address: 0x26bcc0
int FcRead(fsFileIndex* id, void* databuf)
{
	fsFile* file;
	// Line 172, Address: 0x26bcc0, Func Offset: 0
	// Line 174, Address: 0x26bcd4, Func Offset: 0x14
	// Line 175, Address: 0x26bcdc, Func Offset: 0x1c
	// Line 176, Address: 0x26bce4, Func Offset: 0x24
	// Line 178, Address: 0x26bcf0, Func Offset: 0x30
	// Line 186, Address: 0x26bcf4, Func Offset: 0x34
	// Line 187, Address: 0x26bcfc, Func Offset: 0x3c
	// Line 189, Address: 0x26bd08, Func Offset: 0x48
	// Line 190, Address: 0x26bd18, Func Offset: 0x58
	// Func End, Address: 0x26bd30, Func Offset: 0x70
}

// 
// Start address: 0x26bd30
int FcReadPart(fsFileIndex* id, void* databuf, int offset, int size)
{
	fsFile* file;
	// Line 194, Address: 0x26bd30, Func Offset: 0
	// Line 196, Address: 0x26bd54, Func Offset: 0x24
	// Line 197, Address: 0x26bd5c, Func Offset: 0x2c
	// Line 198, Address: 0x26bd64, Func Offset: 0x34
	// Line 200, Address: 0x26bd70, Func Offset: 0x40
	// Line 208, Address: 0x26bd74, Func Offset: 0x44
	// Line 209, Address: 0x26bd7c, Func Offset: 0x4c
	// Line 211, Address: 0x26bd88, Func Offset: 0x58
	// Line 212, Address: 0x26bda0, Func Offset: 0x70
	// Func End, Address: 0x26bdc0, Func Offset: 0x90
}

