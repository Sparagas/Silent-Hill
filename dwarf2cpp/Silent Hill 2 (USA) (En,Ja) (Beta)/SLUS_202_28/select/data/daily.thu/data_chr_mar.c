typedef union fsFile;
typedef struct fsCdFile;
typedef struct fsMgcFile;
typedef struct fsMgfFile;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct _anon0;
typedef union fsFileIndex;
typedef struct _anon1;


typedef fsFile type_0[1];
typedef char type_1[31];
typedef char type_2[17];
typedef fsFile type_3[1];
typedef fsFileIndex type_4[1];
typedef fsFile type_5[1];
typedef char type_6[27];
typedef fsFileIndex type_7[1];
typedef fsFileIndex type_8[1];
typedef fsFile type_9[1];
typedef char type_10[25];
typedef fsFileIndex type_11[1];
typedef char type_12[26];
typedef fsFile type_13[1];
typedef fsFile type_14[1];
typedef char type_15[25];
typedef fsFileIndex type_16[1];
typedef fsFileIndex type_17[1];
typedef fsFile type_18[1];
typedef char type_19[25];
typedef fsFileIndex type_20[1];
typedef char type_21[26];
typedef fsFile type_22[1];
typedef char type_23[25];
typedef fsFile type_24[1];
typedef fsFileIndex type_25[1];
typedef fsFile type_26[1];
typedef char type_27[30];
typedef fsFileIndex type_28[1];
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

char z_data_chr_mar_mgf__name[17];
fsFile z_data_chr_mar_mgf__info[1];
fsFileIndex data_chr_mar_mgf[1];
char z_data_chr_mar_hhh_mar_kg1__name[25];
fsFile z_data_chr_mar_hhh_mar_kg1__info[1];
fsFileIndex data_chr_mar_hhh_mar_kg1[1];
char z_data_chr_mar_hhh_mar_mdl__name[25];
fsFile z_data_chr_mar_hhh_mar_mdl__info[1];
fsFileIndex data_chr_mar_hhh_mar_mdl[1];
char z_data_chr_mar_hhh_mar_notex_mdl__name[31];
fsFile z_data_chr_mar_hhh_mar_notex_mdl__info[1];
fsFileIndex data_chr_mar_hhh_mar_notex_mdl[1];
char z_data_chr_mar_lll_mar_anm__name[25];
fsFile z_data_chr_mar_lll_mar_anm__info[1];
fsFileIndex data_chr_mar_lll_mar_anm[1];
char z_data_chr_mar_lll_mar_mdl__name[25];
fsFile z_data_chr_mar_lll_mar_mdl__info[1];
fsFileIndex data_chr_mar_lll_mar_mdl[1];
char z_data_chr_mar_lll_mar_back_anm__name[30];
fsFile z_data_chr_mar_lll_mar_back_anm__info[1];
fsFileIndex data_chr_mar_lll_mar_back_anm[1];
char z_data_chr_mar_p_hhh_mar_anm__name[27];
fsFile z_data_chr_mar_p_hhh_mar_anm__info[1];
fsFileIndex data_chr_mar_p_hhh_mar_anm[1];
char z_data_chr_mar_rhhh_mar_mdl__name[26];
fsFile z_data_chr_mar_rhhh_mar_mdl__info[1];
fsFileIndex data_chr_mar_rhhh_mar_mdl[1];
char z_data_chr_mar_rlll_mar_mdl__name[26];
fsFile z_data_chr_mar_rlll_mar_mdl__info[1];
fsFileIndex data_chr_mar_rlll_mar_mdl[1];


