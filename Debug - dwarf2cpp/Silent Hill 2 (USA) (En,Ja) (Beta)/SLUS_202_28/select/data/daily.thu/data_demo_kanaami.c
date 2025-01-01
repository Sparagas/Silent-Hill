typedef union fsFile;
typedef struct fsCdFile;
typedef struct fsMgcFile;
typedef struct fsMgfFile;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct _anon0;
typedef union fsFileIndex;
typedef struct _anon1;


typedef char type_0[30];
typedef char type_1[22];
typedef fsFileIndex type_2[1];
typedef fsFile type_3[1];
typedef fsFileIndex type_4[1];
typedef char type_5[26];
typedef fsFile type_6[1];
typedef fsFile type_7[1];
typedef char type_8[28];
typedef fsFileIndex type_9[1];
typedef fsFile type_10[1];
typedef char type_11[30];
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

char z_data_demo_kanaami_mgf__name[22];
fsFile z_data_demo_kanaami_mgf__info[1];
fsFileIndex data_demo_kanaami_mgf[1];
char z_data_demo_kanaami_b_ami_anm__name[28];
fsFile z_data_demo_kanaami_b_ami_anm__info[1];
fsFileIndex data_demo_kanaami_b_ami_anm[1];
char z_data_demo_kanaami_hhl_jms_anm__name[30];
fsFile z_data_demo_kanaami_hhl_jms_anm__info[1];
fsFileIndex data_demo_kanaami_hhl_jms_anm[1];
char z_data_demo_kanaami_kanaami_dds__name[30];
fsFile z_data_demo_kanaami_kanaami_dds__info[1];
fsFileIndex data_demo_kanaami_kanaami_dds[1];
char z_data_demo_kanaami_red_anm__name[26];
fsFile z_data_demo_kanaami_red_anm__info[1];
fsFileIndex data_demo_kanaami_red_anm[1];


