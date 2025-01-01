typedef union fsFile;
typedef struct fsCdFile;
typedef struct fsMgcFile;
typedef struct fsMgfFile;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct _anon0;
typedef union fsFileIndex;
typedef struct _anon1;


typedef char type_0[39];
typedef char type_1[31];
typedef fsFileIndex type_2[1];
typedef fsFile type_3[1];
typedef fsFileIndex type_4[1];
typedef char type_5[48];
typedef fsFile type_6[1];
typedef fsFile type_7[1];
typedef char type_8[35];
typedef fsFileIndex type_9[1];
typedef fsFile type_10[1];
typedef char type_11[35];
typedef fsFileIndex type_12[1];
typedef fsFile type_13[1];
typedef fsFileIndex type_14[1];

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

char z_data_demo_mry_yarinaoshi_i_mgf__name[31];
fsFile z_data_demo_mry_yarinaoshi_i_mgf__info[1];
fsFileIndex data_demo_mry_yarinaoshi_i_mgf[1];
char z_data_demo_mry_yarinaoshi_i_lau_anm__name[35];
fsFile z_data_demo_mry_yarinaoshi_i_lau_anm__info[1];
fsFileIndex data_demo_mry_yarinaoshi_i_lau_anm[1];
char z_data_demo_mry_yarinaoshi_i_lau_cls__name[35];
fsFile z_data_demo_mry_yarinaoshi_i_lau_cls__info[1];
fsFileIndex data_demo_mry_yarinaoshi_i_lau_cls[1];
char z_data_demo_mry_yarinaoshi_i_lll_jms_anm__name[39];
fsFile z_data_demo_mry_yarinaoshi_i_lll_jms_anm__info[1];
fsFileIndex data_demo_mry_yarinaoshi_i_lll_jms_anm[1];
char z_data_demo_mry_yarinaoshi_i_mry_yarinaoshi_i_dds__name[48];
fsFile z_data_demo_mry_yarinaoshi_i_mry_yarinaoshi_i_dds__info[1];
fsFileIndex data_demo_mry_yarinaoshi_i_mry_yarinaoshi_i_dds[1];


