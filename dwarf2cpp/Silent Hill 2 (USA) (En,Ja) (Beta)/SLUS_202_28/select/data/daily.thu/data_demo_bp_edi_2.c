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
typedef fsFileIndex type_1[1];
typedef char type_2[23];
typedef fsFile type_3[1];
typedef fsFileIndex type_4[1];
typedef char type_5[31];
typedef fsFile type_6[1];
typedef fsFileIndex type_7[1];
typedef char type_8[27];
typedef fsFile type_9[1];
typedef fsFileIndex type_10[1];
typedef char type_11[32];
typedef fsFile type_12[1];
typedef fsFileIndex type_13[1];
typedef char type_14[31];
typedef fsFile type_15[1];
typedef fsFile type_16[1];
typedef char type_17[29];
typedef fsFileIndex type_18[1];
typedef fsFile type_19[1];
typedef fsFileIndex type_20[1];
typedef char type_21[32];
typedef fsFile type_22[1];
typedef fsFileIndex type_23[1];
typedef char type_24[31];
typedef fsFile type_25[1];
typedef char type_26[29];
typedef fsFileIndex type_27[1];
typedef fsFile type_28[1];
typedef fsFileIndex type_29[1];
typedef char type_30[31];
typedef fsFile type_31[1];
typedef fsFileIndex type_32[1];
typedef char type_33[27];
typedef fsFileIndex type_34[1];
typedef fsFile type_35[1];

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

char z_data_demo_bp_edi_2_mgf__name[23];
fsFile z_data_demo_bp_edi_2_mgf__info[1];
fsFileIndex data_demo_bp_edi_2_mgf[1];
char z_data_demo_bp_edi_2_b_bol_anm__name[29];
fsFile z_data_demo_bp_edi_2_b_bol_anm__info[1];
fsFileIndex data_demo_bp_edi_2_b_bol_anm[1];
char z_data_demo_bp_edi_2_b_d08_anm__name[29];
fsFile z_data_demo_bp_edi_2_b_d08_anm__info[1];
fsFileIndex data_demo_bp_edi_2_b_d08_anm[1];
char z_data_demo_bp_edi_2_b_piz_anm__name[29];
fsFile z_data_demo_bp_edi_2_b_piz_anm__info[1];
fsFileIndex data_demo_bp_edi_2_b_piz_anm[1];
char z_data_demo_bp_edi_2_bp_edi_c_dds__name[32];
fsFile z_data_demo_bp_edi_2_bp_edi_c_dds__info[1];
fsFileIndex data_demo_bp_edi_2_bp_edi_c_dds[1];
char z_data_demo_bp_edi_2_bp_edi_h_dds__name[32];
fsFile z_data_demo_bp_edi_2_bp_edi_h_dds__info[1];
fsFileIndex data_demo_bp_edi_2_bp_edi_h_dds[1];
char z_data_demo_bp_edi_2_hhh_edi_anm__name[31];
fsFile z_data_demo_bp_edi_2_hhh_edi_anm__info[1];
fsFileIndex data_demo_bp_edi_2_hhh_edi_anm[1];
char z_data_demo_bp_edi_2_hhh_edi_cls__name[31];
fsFile z_data_demo_bp_edi_2_hhh_edi_cls__info[1];
fsFileIndex data_demo_bp_edi_2_hhh_edi_cls[1];
char z_data_demo_bp_edi_2_hhh_jms_anm__name[31];
fsFile z_data_demo_bp_edi_2_hhh_jms_anm__info[1];
fsFileIndex data_demo_bp_edi_2_hhh_jms_anm[1];
char z_data_demo_bp_edi_2_hhh_jms_cls__name[31];
fsFile z_data_demo_bp_edi_2_hhh_jms_cls__info[1];
fsFileIndex data_demo_bp_edi_2_hhh_jms_cls[1];
char z_data_demo_bp_edi_2_lau_anm__name[27];
fsFile z_data_demo_bp_edi_2_lau_anm__info[1];
fsFileIndex data_demo_bp_edi_2_lau_anm[1];
char z_data_demo_bp_edi_2_lau_cls__name[27];
fsFile z_data_demo_bp_edi_2_lau_cls__info[1];
fsFileIndex data_demo_bp_edi_2_lau_cls[1];


