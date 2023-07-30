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
typedef char type_4[32];
typedef fsFile type_5[1];
typedef fsFileIndex type_6[1];
typedef fsFile type_7[1];
typedef fsFileIndex type_8[1];
typedef char type_9[33];
typedef fsFileIndex type_10[1];
typedef char type_11[36];
typedef fsFile type_12[1];
typedef fsFile type_13[1];
typedef char type_14[31];
typedef fsFileIndex type_15[1];
typedef fsFile type_16[1];
typedef fsFileIndex type_17[1];
typedef char type_18[33];
typedef fsFileIndex type_19[1];
typedef fsFile type_20[1];
typedef char type_21[38];
typedef char type_22[31];
typedef fsFile type_23[1];
typedef fsFileIndex type_24[1];
typedef char type_25[33];
typedef fsFile type_26[1];
typedef fsFileIndex type_27[1];
typedef fsFileIndex type_28[1];
typedef fsFile type_29[1];

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

char z_data_demo_killer_edi_mgf__name[25];
fsFile z_data_demo_killer_edi_mgf__info[1];
fsFileIndex data_demo_killer_edi_mgf[1];
char z_data_demo_killer_edi_b_d06_anm__name[31];
fsFile z_data_demo_killer_edi_b_d06_anm__info[1];
fsFileIndex data_demo_killer_edi_b_d06_anm[1];
char z_data_demo_killer_edi_b_sti_anm__name[31];
fsFile z_data_demo_killer_edi_b_sti_anm__info[1];
fsFileIndex data_demo_killer_edi_b_sti_anm[1];
char z_data_demo_killer_edi_hhh_edi_anm__name[33];
fsFile z_data_demo_killer_edi_hhh_edi_anm__info[1];
fsFileIndex data_demo_killer_edi_hhh_edi_anm[1];
char z_data_demo_killer_edi_hhh_edi_cls__name[33];
fsFile z_data_demo_killer_edi_hhh_edi_cls__info[1];
fsFileIndex data_demo_killer_edi_hhh_edi_cls[1];
char z_data_demo_killer_edi_hhl_jms_anm__name[33];
fsFile z_data_demo_killer_edi_hhl_jms_anm__info[1];
fsFileIndex data_demo_killer_edi_hhl_jms_anm[1];
char z_data_demo_killer_edi_hhl_jms_cls__name[33];
fsFile z_data_demo_killer_edi_hhl_jms_cls__info[1];
fsFileIndex data_demo_killer_edi_hhl_jms_cls[1];
char z_data_demo_killer_edi_i_colt_anm__name[32];
fsFile z_data_demo_killer_edi_i_colt_anm__info[1];
fsFileIndex data_demo_killer_edi_i_colt_anm[1];
char z_data_demo_killer_edi_killer_edi_dds__name[36];
fsFile z_data_demo_killer_edi_killer_edi_dds__info[1];
fsFileIndex data_demo_killer_edi_killer_edi_dds[1];
char z_data_demo_killer_edi_killer_edi_2_dds__name[38];
fsFile z_data_demo_killer_edi_killer_edi_2_dds__info[1];
fsFileIndex data_demo_killer_edi_killer_edi_2_dds[1];


