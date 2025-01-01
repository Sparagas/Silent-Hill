typedef union fsFile;
typedef struct fsCdFile;
typedef struct fsMgcFile;
typedef struct fsMgfFile;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct _anon0;
typedef union fsFileIndex;
typedef struct _anon1;


typedef char type_0[29];
typedef char type_1[22];
typedef fsFileIndex type_2[1];
typedef fsFile type_3[1];
typedef fsFileIndex type_4[1];
typedef char type_5[29];
typedef fsFileIndex type_6[1];
typedef fsFile type_7[1];
typedef fsFile type_8[1];
typedef char type_9[30];
typedef fsFileIndex type_10[1];
typedef char type_11[30];
typedef fsFile type_12[1];
typedef char type_13[30];
typedef fsFileIndex type_14[1];
typedef fsFile type_15[1];
typedef fsFile type_16[1];
typedef fsFileIndex type_17[1];

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

char z_data_demo_teddy_a_mgf__name[22];
fsFile z_data_demo_teddy_a_mgf__info[1];
fsFileIndex data_demo_teddy_a_mgf[1];
char z_data_demo_teddy_a_hhh_jms_anm__name[30];
fsFile z_data_demo_teddy_a_hhh_jms_anm__info[1];
fsFileIndex data_demo_teddy_a_hhh_jms_anm[1];
char z_data_demo_teddy_a_hhh_jms_cls__name[30];
fsFile z_data_demo_teddy_a_hhh_jms_cls__info[1];
fsFileIndex data_demo_teddy_a_hhh_jms_cls[1];
char z_data_demo_teddy_a_i_bear_anm__name[29];
fsFile z_data_demo_teddy_a_i_bear_anm__info[1];
fsFileIndex data_demo_teddy_a_i_bear_anm[1];
char z_data_demo_teddy_a_i_hari_anm__name[29];
fsFile z_data_demo_teddy_a_i_hari_anm__info[1];
fsFileIndex data_demo_teddy_a_i_hari_anm[1];
char z_data_demo_teddy_a_teddy_a_dds__name[30];
fsFile z_data_demo_teddy_a_teddy_a_dds__info[1];
fsFileIndex data_demo_teddy_a_teddy_a_dds[1];


