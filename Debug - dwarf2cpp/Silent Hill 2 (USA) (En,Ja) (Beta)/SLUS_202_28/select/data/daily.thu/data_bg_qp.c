typedef union fsFile;
typedef struct fsCdFile;
typedef struct fsMgcFile;
typedef struct fsMgfFile;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct _anon0;
typedef union fsFileIndex;
typedef struct _anon1;


typedef fsFileIndex type_0[1];
typedef char type_1[22];
typedef char type_2[15];
typedef fsFileIndex type_3[1];
typedef fsFile type_4[1];
typedef fsFile type_5[1];
typedef fsFile type_6[1];
typedef fsFileIndex type_7[1];
typedef char type_8[20];
typedef fsFileIndex type_9[1];
typedef fsFile type_10[1];
typedef char type_11[20];
typedef fsFileIndex type_12[1];
typedef char type_13[20];
typedef fsFile type_14[1];
typedef char type_15[20];
typedef fsFile type_16[1];
typedef fsFileIndex type_17[1];
typedef char type_18[20];
typedef fsFileIndex type_19[1];
typedef fsFileIndex type_20[1];
typedef fsFile type_21[1];
typedef fsFileIndex type_22[1];
typedef fsFile type_23[1];
typedef char type_24[20];
typedef char type_25[20];
typedef fsFile type_26[1];
typedef char type_27[20];
typedef fsFile type_28[1];
typedef fsFileIndex type_29[1];
typedef char type_30[20];
typedef fsFile type_31[1];
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

char z_data_bg_qp_mgf__name[15];
fsFile z_data_bg_qp_mgf__info[1];
fsFileIndex data_bg_qp_mgf[1];
char z_data_bg_qp_qp01_cam__name[20];
fsFile z_data_bg_qp_qp01_cam__info[1];
fsFileIndex data_bg_qp_qp01_cam[1];
char z_data_bg_qp_qp01_map__name[20];
fsFile z_data_bg_qp_qp01_map__info[1];
fsFileIndex data_bg_qp_qp01_map[1];
char z_data_bg_qp_qp01TR_tex__name[22];
fsFile z_data_bg_qp_qp01TR_tex__info[1];
fsFileIndex data_bg_qp_qp01TR_tex[1];
char z_data_bg_qp_qp02_map__name[20];
fsFile z_data_bg_qp_qp02_map__info[1];
fsFileIndex data_bg_qp_qp02_map[1];
char z_data_bg_qp_qp03_map__name[20];
fsFile z_data_bg_qp_qp03_map__info[1];
fsFileIndex data_bg_qp_qp03_map[1];
char z_data_bg_qp_qp04_map__name[20];
fsFile z_data_bg_qp_qp04_map__info[1];
fsFileIndex data_bg_qp_qp04_map[1];
char z_data_bg_qp_qp05_cam__name[20];
fsFile z_data_bg_qp_qp05_cam__info[1];
fsFileIndex data_bg_qp_qp05_cam[1];
char z_data_bg_qp_qp05_map__name[20];
fsFile z_data_bg_qp_qp05_map__info[1];
fsFileIndex data_bg_qp_qp05_map[1];
char z_data_bg_qp_qp06_map__name[20];
fsFile z_data_bg_qp_qp06_map__info[1];
fsFileIndex data_bg_qp_qp06_map[1];
char z_data_bg_qp_qp07_map__name[20];
fsFile z_data_bg_qp_qp07_map__info[1];
fsFileIndex data_bg_qp_qp07_map[1];


