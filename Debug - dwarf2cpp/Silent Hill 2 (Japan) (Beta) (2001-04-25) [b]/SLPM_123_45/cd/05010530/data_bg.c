typedef union fsFile;
typedef struct fsCdFile;
typedef struct fsMgcFile;
typedef struct fsMgfFile;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct _anon0;
typedef union fsFileIndex;
typedef struct _anon1;


typedef fsFile type_0[1];
typedef char type_1[12];
typedef fsFile type_2[1];
typedef fsFileIndex type_3[1];
typedef char type_4[12];
typedef fsFileIndex type_5[1];
typedef fsFile type_6[1];
typedef char type_7[15];
typedef fsFileIndex type_8[1];
typedef char type_9[12];
typedef fsFile type_10[1];
typedef fsFileIndex type_11[1];

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

char data_bg_mgf__name[12];
fsFile data_bg_mgf__info[1];
fsFileIndex data_bg_mgf[1];
char data_bg_aaa__name[12];
fsFile data_bg_aaa__info[1];
fsFileIndex data_bg_aaa[1];
char data_bg_bbb__name[12];
fsFile data_bg_bbb__info[1];
fsFileIndex data_bg_bbb[1];
char data_bg_hp_mgf__name[15];
fsFile data_bg_hp_mgf__info[1];
fsFileIndex data_bg_hp_mgf[1];


