typedef union fsFile;
typedef struct fsCdFile;
typedef struct fsMgcFile;
typedef struct fsMgfFile;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct _anon0;
typedef union fsFileIndex;
typedef struct _anon1;


typedef char type_0[35];
typedef char type_1[27];
typedef fsFileIndex type_2[1];
typedef fsFile type_3[1];
typedef char type_4[40];
typedef fsFileIndex type_5[1];
typedef fsFile type_6[1];
typedef fsFileIndex type_7[1];
typedef char type_8[35];
typedef fsFileIndex type_9[1];
typedef fsFile type_10[1];
typedef char type_11[40];
typedef fsFile type_12[1];
typedef char type_13[33];
typedef fsFileIndex type_14[1];
typedef fsFile type_15[1];
typedef char type_16[35];
typedef fsFileIndex type_17[1];
typedef fsFile type_18[1];
typedef char type_19[35];
typedef fsFileIndex type_20[1];
typedef fsFile type_21[1];
typedef char type_22[34];
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

char z_data_demo_killer_edi_e_mgf__name[27];
fsFile z_data_demo_killer_edi_e_mgf__info[1];
fsFileIndex data_demo_killer_edi_e_mgf[1];
char z_data_demo_killer_edi_e_b_d10_anm__name[33];
fsFile z_data_demo_killer_edi_e_b_d10_anm__info[1];
fsFileIndex data_demo_killer_edi_e_b_d10_anm[1];
char z_data_demo_killer_edi_e_hhh_edi_anm__name[35];
fsFile z_data_demo_killer_edi_e_hhh_edi_anm__info[1];
fsFileIndex data_demo_killer_edi_e_hhh_edi_anm[1];
char z_data_demo_killer_edi_e_hhh_edi_cls__name[35];
fsFile z_data_demo_killer_edi_e_hhh_edi_cls__info[1];
fsFileIndex data_demo_killer_edi_e_hhh_edi_cls[1];
char z_data_demo_killer_edi_e_hhl_jms_anm__name[35];
fsFile z_data_demo_killer_edi_e_hhl_jms_anm__info[1];
fsFileIndex data_demo_killer_edi_e_hhl_jms_anm[1];
char z_data_demo_killer_edi_e_hhl_jms_cls__name[35];
fsFile z_data_demo_killer_edi_e_hhl_jms_cls__info[1];
fsFileIndex data_demo_killer_edi_e_hhl_jms_cls[1];
char z_data_demo_killer_edi_e_i_colt_anm__name[34];
fsFile z_data_demo_killer_edi_e_i_colt_anm__info[1];
fsFileIndex data_demo_killer_edi_e_i_colt_anm[1];
char z_data_demo_killer_edi_e_killer_edi_3_dds__name[40];
fsFile z_data_demo_killer_edi_e_killer_edi_3_dds__info[1];
fsFileIndex data_demo_killer_edi_e_killer_edi_3_dds[1];
char z_data_demo_killer_edi_e_killer_edi_4_dds__name[40];
fsFile z_data_demo_killer_edi_e_killer_edi_4_dds__info[1];
fsFileIndex data_demo_killer_edi_e_killer_edi_4_dds[1];


