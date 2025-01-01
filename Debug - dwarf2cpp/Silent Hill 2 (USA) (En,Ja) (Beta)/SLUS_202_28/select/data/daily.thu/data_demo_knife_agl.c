typedef union fsFile;
typedef struct fsCdFile;
typedef struct fsMgcFile;
typedef struct fsMgfFile;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct _anon0;
typedef union fsFileIndex;
typedef struct _anon1;


typedef char type_0[32];
typedef char type_1[24];
typedef fsFileIndex type_2[1];
typedef char type_3[34];
typedef fsFile type_4[1];
typedef fsFile type_5[1];
typedef fsFileIndex type_6[1];
typedef char type_7[32];
typedef fsFileIndex type_8[1];
typedef fsFile type_9[1];
typedef fsFile type_10[1];
typedef char type_11[28];
typedef fsFile type_12[1];
typedef fsFileIndex type_13[1];
typedef char type_14[32];
typedef fsFileIndex type_15[1];
typedef fsFile type_16[1];
typedef char type_17[28];
typedef fsFileIndex type_18[1];
typedef char type_19[32];
typedef fsFile type_20[1];
typedef fsFileIndex type_21[1];
typedef fsFile type_22[1];
typedef fsFileIndex type_23[1];

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

char z_data_demo_knife_agl_mgf__name[24];
fsFile z_data_demo_knife_agl_mgf__info[1];
fsFileIndex data_demo_knife_agl_mgf[1];
char z_data_demo_knife_agl_agl_anm__name[28];
fsFile z_data_demo_knife_agl_agl_anm__info[1];
fsFileIndex data_demo_knife_agl_agl_anm[1];
char z_data_demo_knife_agl_agl_cls__name[28];
fsFile z_data_demo_knife_agl_agl_cls__info[1];
fsFileIndex data_demo_knife_agl_agl_cls[1];
char z_data_demo_knife_agl_hhh_jms_anm__name[32];
fsFile z_data_demo_knife_agl_hhh_jms_anm__info[1];
fsFileIndex data_demo_knife_agl_hhh_jms_anm[1];
char z_data_demo_knife_agl_hhh_jms_cls__name[32];
fsFile z_data_demo_knife_agl_hhh_jms_cls__info[1];
fsFileIndex data_demo_knife_agl_hhh_jms_cls[1];
char z_data_demo_knife_agl_i_knife_anm__name[32];
fsFile z_data_demo_knife_agl_i_knife_anm__info[1];
fsFileIndex data_demo_knife_agl_i_knife_anm[1];
char z_data_demo_knife_agl_i_photo_anm__name[32];
fsFile z_data_demo_knife_agl_i_photo_anm__info[1];
fsFileIndex data_demo_knife_agl_i_photo_anm[1];
char z_data_demo_knife_agl_knife_agl_dds__name[34];
fsFile z_data_demo_knife_agl_knife_agl_dds__info[1];
fsFileIndex data_demo_knife_agl_knife_agl_dds[1];


