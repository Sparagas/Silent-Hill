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
typedef fsFile type_1[1];
typedef char type_2[38];
typedef char type_3[25];
typedef fsFile type_4[1];
typedef fsFileIndex type_5[1];
typedef fsFile type_6[1];
typedef char type_7[33];
typedef fsFileIndex type_8[1];
typedef fsFileIndex type_9[1];
typedef fsFile type_10[1];
typedef char type_11[38];
typedef fsFile type_12[1];
typedef fsFileIndex type_13[1];
typedef fsFile type_14[1];
typedef char type_15[33];
typedef fsFile type_16[1];
typedef char type_17[31];
typedef fsFileIndex type_18[1];
typedef fsFileIndex type_19[1];
typedef fsFile type_20[1];
typedef char type_21[33];
typedef fsFileIndex type_22[1];
typedef char type_23[32];
typedef fsFile type_24[1];
typedef char type_25[38];
typedef fsFileIndex type_26[1];
typedef fsFileIndex type_27[1];
typedef fsFile type_28[1];
typedef fsFile type_29[1];
typedef char type_30[33];
typedef fsFileIndex type_31[1];
typedef fsFileIndex type_32[1];

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

char z_data_demo_edi_korosu_mgf__name[25];
fsFile z_data_demo_edi_korosu_mgf__info[1];
fsFileIndex data_demo_edi_korosu_mgf[1];
char z_data_demo_edi_korosu_b_dor_anm__name[31];
fsFile z_data_demo_edi_korosu_b_dor_anm__info[1];
fsFileIndex data_demo_edi_korosu_b_dor_anm[1];
char z_data_demo_edi_korosu_edi_korosu_a_dds__name[38];
fsFile z_data_demo_edi_korosu_edi_korosu_a_dds__info[1];
fsFileIndex data_demo_edi_korosu_edi_korosu_a_dds[1];
char z_data_demo_edi_korosu_edi_korosu_c_dds__name[38];
fsFile z_data_demo_edi_korosu_edi_korosu_c_dds__info[1];
fsFileIndex data_demo_edi_korosu_edi_korosu_c_dds[1];
char z_data_demo_edi_korosu_edi_korosu_e_dds__name[38];
fsFile z_data_demo_edi_korosu_edi_korosu_e_dds__info[1];
fsFileIndex data_demo_edi_korosu_edi_korosu_e_dds[1];
char z_data_demo_edi_korosu_hhh_edi_anm__name[33];
fsFile z_data_demo_edi_korosu_hhh_edi_anm__info[1];
fsFileIndex data_demo_edi_korosu_hhh_edi_anm[1];
char z_data_demo_edi_korosu_hhh_edi_cls__name[33];
fsFile z_data_demo_edi_korosu_hhh_edi_cls__info[1];
fsFileIndex data_demo_edi_korosu_hhh_edi_cls[1];
char z_data_demo_edi_korosu_hhh_jms_anm__name[33];
fsFile z_data_demo_edi_korosu_hhh_jms_anm__info[1];
fsFileIndex data_demo_edi_korosu_hhh_jms_anm[1];
char z_data_demo_edi_korosu_hhh_jms_cls__name[33];
fsFile z_data_demo_edi_korosu_hhh_jms_cls__info[1];
fsFileIndex data_demo_edi_korosu_hhh_jms_cls[1];
char z_data_demo_edi_korosu_i_colt_anm__name[32];
fsFile z_data_demo_edi_korosu_i_colt_anm__info[1];
fsFileIndex data_demo_edi_korosu_i_colt_anm[1];
char z_data_demo_edi_korosu_i_j_light_anm__name[35];
fsFile z_data_demo_edi_korosu_i_j_light_anm__info[1];
fsFileIndex data_demo_edi_korosu_i_j_light_anm[1];


