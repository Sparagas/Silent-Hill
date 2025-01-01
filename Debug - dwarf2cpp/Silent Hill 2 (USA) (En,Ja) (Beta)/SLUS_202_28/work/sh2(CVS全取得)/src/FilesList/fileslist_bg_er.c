typedef union fsFileIndex;
typedef struct _anon0;
typedef union fsFile;
typedef struct FilesBgBlock;
typedef struct fsCdFile;
typedef struct fsMgcFile;
typedef struct fsMgfFile;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct _anon1;


typedef FilesBgBlock type_0[1];
typedef FilesBgBlock type_1[1];
typedef FilesBgBlock type_2[1];
typedef FilesBgBlock type_3[1];
typedef FilesBgBlock type_4[1];
typedef FilesBgBlock type_5[1];
typedef FilesBgBlock type_6[1];
typedef FilesBgBlock type_7[1];
typedef FilesBgBlock type_8[1];
typedef FilesBgBlock type_9[1];
typedef FilesBgBlock type_10[1];
typedef FilesBgBlock type_11[1];
typedef FilesBgBlock type_12[1];
typedef FilesBgBlock type_13[1];
typedef FilesBgBlock type_14[1];
typedef FilesBgBlock type_15[1];
typedef FilesBgBlock type_16[1];
typedef int type_17[1];
typedef FilesBgBlock* type_18[21];
typedef FilesBgBlock type_19[1];
typedef FilesBgBlock type_20[1];
typedef FilesBgBlock type_21[1];
typedef FilesBgBlock type_22[1];

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

FilesBgBlock bg_bid_er00[1];
FilesBgBlock bg_bid_er01[1];
FilesBgBlock bg_bid_er02[1];
FilesBgBlock bg_bid_er03[1];
FilesBgBlock bg_bid_er04[1];
FilesBgBlock bg_bid_er05[1];
FilesBgBlock bg_bid_er06[1];
FilesBgBlock bg_bid_er07[1];
FilesBgBlock bg_bid_er08[1];
FilesBgBlock bg_bid_er09[1];
FilesBgBlock bg_bid_er10[1];
FilesBgBlock bg_bid_er11[1];
FilesBgBlock bg_bid_er12[1];
FilesBgBlock bg_bid_er13[1];
FilesBgBlock bg_bid_er14[1];
FilesBgBlock bg_bid_er15[1];
FilesBgBlock bg_bid_er16[1];
FilesBgBlock bg_bid_er17[1];
FilesBgBlock bg_bid_er18[1];
FilesBgBlock bg_bid_er19[1];
FilesBgBlock bg_bid_er20[1];
int FilesBgBlockMax_er[1];
FilesBgBlock* FilesBgBlockList_er[21];


