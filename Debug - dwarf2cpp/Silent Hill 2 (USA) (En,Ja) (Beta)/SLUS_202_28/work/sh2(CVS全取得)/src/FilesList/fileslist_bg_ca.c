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
typedef FilesBgBlock type_17[1];
typedef int type_18[1];
typedef FilesBgBlock type_19[1];
typedef FilesBgBlock type_20[1];
typedef FilesBgBlock* type_21[31];
typedef FilesBgBlock type_22[1];
typedef FilesBgBlock type_23[1];
typedef FilesBgBlock type_24[1];
typedef FilesBgBlock type_25[1];
typedef FilesBgBlock type_26[1];
typedef FilesBgBlock type_27[1];
typedef FilesBgBlock type_28[1];
typedef FilesBgBlock type_29[1];
typedef FilesBgBlock type_30[1];
typedef FilesBgBlock type_31[1];
typedef FilesBgBlock type_32[1];

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

FilesBgBlock bg_bid_ca00[1];
FilesBgBlock bg_bid_ca01[1];
FilesBgBlock bg_bid_ca02[1];
FilesBgBlock bg_bid_ca03[1];
FilesBgBlock bg_bid_ca04[1];
FilesBgBlock bg_bid_ca05[1];
FilesBgBlock bg_bid_ca06[1];
FilesBgBlock bg_bid_ca07[1];
FilesBgBlock bg_bid_ca08[1];
FilesBgBlock bg_bid_ca09[1];
FilesBgBlock bg_bid_ca10[1];
FilesBgBlock bg_bid_ca11[1];
FilesBgBlock bg_bid_ca12[1];
FilesBgBlock bg_bid_ca13[1];
FilesBgBlock bg_bid_ca14[1];
FilesBgBlock bg_bid_ca15[1];
FilesBgBlock bg_bid_ca16[1];
FilesBgBlock bg_bid_ca17[1];
FilesBgBlock bg_bid_ca18[1];
FilesBgBlock bg_bid_ca19[1];
FilesBgBlock bg_bid_ca20[1];
FilesBgBlock bg_bid_ca21[1];
FilesBgBlock bg_bid_ca22[1];
FilesBgBlock bg_bid_ca23[1];
FilesBgBlock bg_bid_ca24[1];
FilesBgBlock bg_bid_ca25[1];
FilesBgBlock bg_bid_ca26[1];
FilesBgBlock bg_bid_ca27[1];
FilesBgBlock bg_bid_ca28[1];
FilesBgBlock bg_bid_ca29[1];
FilesBgBlock bg_bid_ca30[1];
int FilesBgBlockMax_ca[1];
FilesBgBlock* FilesBgBlockList_ca[31];


