typedef union fsFile;
typedef struct fsCdFile;
typedef struct fsMgcFile;
typedef struct fsMgfFile;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct _anon0;
typedef union fsFileIndex;
typedef struct _anon1;


typedef char type_0[23];
typedef char type_1[17];
typedef fsFile type_2[1];
typedef fsFileIndex type_3[1];
typedef fsFile type_4[1];
typedef fsFile type_5[1];
typedef char type_6[21];
typedef fsFileIndex type_7[1];
typedef char type_8[21];
typedef fsFileIndex type_9[1];
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

char z_data_chr_lau_mgf__name[17];
fsFile z_data_chr_lau_mgf__info[1];
fsFileIndex data_chr_lau_mgf[1];
char z_data_chr_lau_lau_kg1__name[21];
fsFile z_data_chr_lau_lau_kg1__info[1];
fsFileIndex data_chr_lau_lau_kg1[1];
char z_data_chr_lau_lau_mdl__name[21];
fsFile z_data_chr_lau_lau_mdl__info[1];
fsFileIndex data_chr_lau_lau_mdl[1];
char z_data_chr_lau_p_lau_anm__name[23];
fsFile z_data_chr_lau_p_lau_anm__info[1];
fsFileIndex data_chr_lau_p_lau_anm[1];


