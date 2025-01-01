typedef union fsFile;
typedef struct fsCdFile;
typedef struct fsMgcFile;
typedef struct fsMgfFile;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct _anon0;
typedef union fsFileIndex;
typedef struct _anon1;


typedef char type_0[33];
typedef char type_1[25];
typedef fsFileIndex type_2[1];
typedef fsFile type_3[1];
typedef fsFile type_4[1];
typedef fsFileIndex type_5[1];
typedef char type_6[33];
typedef fsFileIndex type_7[1];
typedef fsFile type_8[1];
typedef fsFile type_9[1];
typedef char type_10[31];
typedef fsFileIndex type_11[1];
typedef char type_12[33];
typedef fsFileIndex type_13[1];
typedef fsFile type_14[1];
typedef char type_15[33];
typedef fsFileIndex type_16[1];
typedef char type_17[36];
typedef fsFile type_18[1];
typedef fsFileIndex type_19[1];
typedef fsFile type_20[1];

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

char z_data_demo_mar_saikai_mgf__name[25];
fsFile z_data_demo_mar_saikai_mgf__info[1];
fsFileIndex data_demo_mar_saikai_mgf[1];
char z_data_demo_mar_saikai_b_tan_anm__name[31];
fsFile z_data_demo_mar_saikai_b_tan_anm__info[1];
fsFileIndex data_demo_mar_saikai_b_tan_anm[1];
char z_data_demo_mar_saikai_hhh_jms_anm__name[33];
fsFile z_data_demo_mar_saikai_hhh_jms_anm__info[1];
fsFileIndex data_demo_mar_saikai_hhh_jms_anm[1];
char z_data_demo_mar_saikai_hhh_jms_cls__name[33];
fsFile z_data_demo_mar_saikai_hhh_jms_cls__info[1];
fsFileIndex data_demo_mar_saikai_hhh_jms_cls[1];
char z_data_demo_mar_saikai_hhh_mar_anm__name[33];
fsFile z_data_demo_mar_saikai_hhh_mar_anm__info[1];
fsFileIndex data_demo_mar_saikai_hhh_mar_anm[1];
char z_data_demo_mar_saikai_hhh_mar_cls__name[33];
fsFile z_data_demo_mar_saikai_hhh_mar_cls__info[1];
fsFileIndex data_demo_mar_saikai_hhh_mar_cls[1];
char z_data_demo_mar_saikai_mar_saikai_dds__name[36];
fsFile z_data_demo_mar_saikai_mar_saikai_dds__info[1];
fsFileIndex data_demo_mar_saikai_mar_saikai_dds[1];


