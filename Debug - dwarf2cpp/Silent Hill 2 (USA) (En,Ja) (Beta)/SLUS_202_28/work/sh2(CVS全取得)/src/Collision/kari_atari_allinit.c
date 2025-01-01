typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef union fsFile;
typedef struct fsMgcFile;
typedef struct _anon0;
typedef union fsFileIndex;
typedef struct _anon1;
typedef struct fsCdFile;
typedef struct fsMgfFile;


typedef unsigned char* type_0[16];
typedef unsigned char type_1[262144];

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

int atari_head_index;
int atari_data_num;
unsigned char* CLDadr[16];
unsigned char ATARI_DATA[262144];

void kari_init_colidata();

// 
// Start address: 0x13a780
void kari_init_colidata()
{
	int i;
	// Line 39, Address: 0x13a780, Func Offset: 0
	// Line 41, Address: 0x13a788, Func Offset: 0x8
	// Line 43, Address: 0x13a790, Func Offset: 0x10
	// Line 45, Address: 0x13a7c4, Func Offset: 0x44
	// Func End, Address: 0x13a7cc, Func Offset: 0x4c
}

