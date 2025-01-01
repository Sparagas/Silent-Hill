typedef union fsFile;
typedef struct fsCdFile;
typedef struct fsMgcFile;
typedef struct fsMgfFile;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct _anon0;
typedef union fsFileIndex;
typedef struct _anon1;


typedef char type_0[20];
typedef fsFile type_1[1];
typedef fsFileIndex type_2[1];
typedef fsFile type_3[1];
typedef fsFile type_4[1];
typedef char type_5[28];
typedef fsFileIndex type_6[1];
typedef char type_7[26];
typedef fsFileIndex type_8[1];
typedef fsFile type_9[1];
typedef fsFileIndex type_10[1];
typedef char type_11[34];

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

char z_data_demo_jump2_mgf__name[20];
fsFile z_data_demo_jump2_mgf__info[1];
fsFileIndex data_demo_jump2_mgf[1];
char z_data_demo_jump2_hll_jms_anm__name[28];
fsFile z_data_demo_jump2_hll_jms_anm__info[1];
fsFileIndex data_demo_jump2_hll_jms_anm[1];
char z_data_demo_jump2_jump2_dds__name[26];
fsFile z_data_demo_jump2_jump2_dds__info[1];
fsFileIndex data_demo_jump2_jump2_dds[1];
char z_data_demo_jump2_jump2_hll_jms_anm__name[34];
fsFile z_data_demo_jump2_jump2_hll_jms_anm__info[1];
fsFileIndex data_demo_jump2_jump2_hll_jms_anm[1];


