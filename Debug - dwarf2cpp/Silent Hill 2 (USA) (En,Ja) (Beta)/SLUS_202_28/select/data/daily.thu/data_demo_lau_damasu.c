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
typedef char type_1[25];
typedef fsFileIndex type_2[1];
typedef char type_3[29];
typedef fsFile type_4[1];
typedef fsFileIndex type_5[1];
typedef fsFile type_6[1];
typedef fsFileIndex type_7[1];
typedef char type_8[33];
typedef fsFileIndex type_9[1];
typedef char type_10[36];
typedef fsFile type_11[1];
typedef fsFile type_12[1];
typedef char type_13[33];
typedef fsFile type_14[1];
typedef fsFileIndex type_15[1];
typedef char type_16[34];
typedef fsFileIndex type_17[1];
typedef fsFile type_18[1];
typedef char type_19[33];
typedef fsFile type_20[1];
typedef fsFileIndex type_21[1];
typedef char type_22[29];
typedef fsFile type_23[1];
typedef fsFileIndex type_24[1];
typedef fsFileIndex type_25[1];
typedef fsFile type_26[1];

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

char z_data_demo_lau_damasu_mgf__name[25];
fsFile z_data_demo_lau_damasu_mgf__info[1];
fsFileIndex data_demo_lau_damasu_mgf[1];
char z_data_demo_lau_damasu_hhh_jms_anm__name[33];
fsFile z_data_demo_lau_damasu_hhh_jms_anm__info[1];
fsFileIndex data_demo_lau_damasu_hhh_jms_anm[1];
char z_data_demo_lau_damasu_hhh_jms_cls__name[33];
fsFile z_data_demo_lau_damasu_hhh_jms_cls__info[1];
fsFileIndex data_demo_lau_damasu_hhh_jms_cls[1];
char z_data_demo_lau_damasu_i_bear_anm__name[32];
fsFile z_data_demo_lau_damasu_i_bear_anm__info[1];
fsFileIndex data_demo_lau_damasu_i_bear_anm[1];
char z_data_demo_lau_damasu_i_bear2_anm__name[33];
fsFile z_data_demo_lau_damasu_i_bear2_anm__info[1];
fsFileIndex data_demo_lau_damasu_i_bear2_anm[1];
char z_data_demo_lau_damasu_i_flight_anm__name[34];
fsFile z_data_demo_lau_damasu_i_flight_anm__info[1];
fsFileIndex data_demo_lau_damasu_i_flight_anm[1];
char z_data_demo_lau_damasu_lau_anm__name[29];
fsFile z_data_demo_lau_damasu_lau_anm__info[1];
fsFileIndex data_demo_lau_damasu_lau_anm[1];
char z_data_demo_lau_damasu_lau_cls__name[29];
fsFile z_data_demo_lau_damasu_lau_cls__info[1];
fsFileIndex data_demo_lau_damasu_lau_cls[1];
char z_data_demo_lau_damasu_lau_damasu_dds__name[36];
fsFile z_data_demo_lau_damasu_lau_damasu_dds__info[1];
fsFileIndex data_demo_lau_damasu_lau_damasu_dds[1];


