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
typedef char type_1[23];
typedef fsFile type_2[1];
typedef fsFileIndex type_3[1];
typedef char type_4[27];
typedef fsFile type_5[1];
typedef fsFileIndex type_6[1];
typedef fsFile type_7[1];
typedef fsFileIndex type_8[1];
typedef char type_9[29];
typedef fsFileIndex type_10[1];
typedef char type_11[32];
typedef fsFile type_12[1];
typedef fsFile type_13[1];
typedef char type_14[27];
typedef fsFileIndex type_15[1];
typedef fsFile type_16[1];
typedef fsFileIndex type_17[1];
typedef char type_18[31];
typedef fsFileIndex type_19[1];
typedef char type_20[34];
typedef fsFile type_21[1];
typedef char type_22[27];
typedef fsFile type_23[1];
typedef fsFileIndex type_24[1];
typedef char type_25[31];
typedef fsFile type_26[1];
typedef fsFileIndex type_27[1];
typedef fsFile type_28[1];
typedef fsFileIndex type_29[1];

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

char z_data_demo_papa_agl_mgf__name[23];
fsFile z_data_demo_papa_agl_mgf__info[1];
fsFileIndex data_demo_papa_agl_mgf[1];
char z_data_demo_papa_agl_agl_anm__name[27];
fsFile z_data_demo_papa_agl_agl_anm__info[1];
fsFileIndex data_demo_papa_agl_agl_anm[1];
char z_data_demo_papa_agl_agl_cls__name[27];
fsFile z_data_demo_papa_agl_agl_cls__info[1];
fsFileIndex data_demo_papa_agl_agl_cls[1];
char z_data_demo_papa_agl_b_d00_anm__name[29];
fsFile z_data_demo_papa_agl_b_d00_anm__info[1];
fsFileIndex data_demo_papa_agl_b_d00_anm[1];
char z_data_demo_papa_agl_b_tel_anm__name[29];
fsFile z_data_demo_papa_agl_b_tel_anm__info[1];
fsFileIndex data_demo_papa_agl_b_tel_anm[1];
char z_data_demo_papa_agl_hhh_jms_anm__name[31];
fsFile z_data_demo_papa_agl_hhh_jms_anm__info[1];
fsFileIndex data_demo_papa_agl_hhh_jms_anm[1];
char z_data_demo_papa_agl_hhh_jms_cls__name[31];
fsFile z_data_demo_papa_agl_hhh_jms_cls__info[1];
fsFileIndex data_demo_papa_agl_hhh_jms_cls[1];
char z_data_demo_papa_agl_pap_anm__name[27];
fsFile z_data_demo_papa_agl_pap_anm__info[1];
fsFileIndex data_demo_papa_agl_pap_anm[1];
char z_data_demo_papa_agl_papa_agl_dds__name[32];
fsFile z_data_demo_papa_agl_papa_agl_dds__info[1];
fsFileIndex data_demo_papa_agl_papa_agl_dds[1];
char z_data_demo_papa_agl_papa_agl_a_dds__name[34];
fsFile z_data_demo_papa_agl_papa_agl_a_dds__info[1];
fsFileIndex data_demo_papa_agl_papa_agl_a_dds[1];


