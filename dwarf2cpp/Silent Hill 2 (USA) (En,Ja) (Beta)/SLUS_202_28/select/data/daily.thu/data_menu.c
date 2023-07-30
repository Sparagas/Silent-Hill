typedef union fsFile;
typedef struct fsCdFile;
typedef struct fsMgcFile;
typedef struct fsMgfFile;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct _anon0;
typedef union fsFileIndex;
typedef struct _anon1;


typedef char type_0[14];
typedef fsFile type_1[1];
typedef fsFileIndex type_2[1];
typedef fsFile type_3[1];
typedef char type_4[18];
typedef fsFile type_5[1];
typedef fsFileIndex type_6[1];
typedef char type_7[18];
typedef fsFileIndex type_8[1];
typedef fsFile type_9[1];
typedef char type_10[17];
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

char z_data_menu_mgf__name[14];
fsFile z_data_menu_mgf__info[1];
fsFileIndex data_menu_mgf[1];
char z_data_menu_1st_mgf__name[18];
fsFile z_data_menu_1st_mgf__info[1];
fsFileIndex data_menu_1st_mgf[1];
char z_data_menu_map_mgf__name[18];
fsFile z_data_menu_map_mgf__info[1];
fsFileIndex data_menu_map_mgf[1];
char z_data_menu_mc_mgf__name[17];
fsFile z_data_menu_mc_mgf__info[1];
fsFileIndex data_menu_mc_mgf[1];


