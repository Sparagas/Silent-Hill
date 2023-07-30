typedef union fsFile;
typedef struct fsCdFile;
typedef struct fsMgcFile;
typedef struct fsMgfFile;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct _anon0;
typedef union fsFileIndex;
typedef struct _anon1;


typedef char type_0[20];
typedef char type_1[15];
typedef fsFile type_2[1];
typedef char type_3[20];
typedef fsFile type_4[1];
typedef fsFileIndex type_5[1];
typedef char type_6[20];
typedef fsFile type_7[1];
typedef fsFileIndex type_8[1];
typedef fsFileIndex type_9[1];
typedef char type_10[22];
typedef fsFileIndex type_11[1];
typedef fsFile type_12[1];
typedef fsFile type_13[1];
typedef char type_14[20];
typedef fsFile type_15[1];
typedef fsFile type_16[1];
typedef fsFileIndex type_17[1];
typedef char type_18[20];
typedef fsFileIndex type_19[1];
typedef fsFile type_20[1];
typedef char type_21[20];
typedef fsFileIndex type_22[1];
typedef char type_23[20];
typedef fsFile type_24[1];
typedef char type_25[20];
typedef fsFileIndex type_26[1];
typedef char type_27[20];
typedef fsFileIndex type_28[1];
typedef fsFile type_29[1];
typedef fsFileIndex type_30[1];
typedef fsFile type_31[1];
typedef fsFileIndex type_32[1];
typedef fsFile type_33[1];
typedef char type_34[20];
typedef fsFileIndex type_35[1];

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

char z_data_bg_qt_mgf__name[15];
fsFile z_data_bg_qt_mgf__info[1];
fsFileIndex data_bg_qt_mgf[1];
char z_data_bg_qt_qp05_cam__name[20];
fsFile z_data_bg_qt_qp05_cam__info[1];
fsFileIndex data_bg_qt_qp05_cam[1];
char z_data_bg_qt_qt01_cam__name[20];
fsFile z_data_bg_qt_qt01_cam__info[1];
fsFileIndex data_bg_qt_qt01_cam[1];
char z_data_bg_qt_qt01_map__name[20];
fsFile z_data_bg_qt_qt01_map__info[1];
fsFileIndex data_bg_qt_qt01_map[1];
char z_data_bg_qt_qt01TR_tex__name[22];
fsFile z_data_bg_qt_qt01TR_tex__info[1];
fsFileIndex data_bg_qt_qt01TR_tex[1];
char z_data_bg_qt_qt02_map__name[20];
fsFile z_data_bg_qt_qt02_map__info[1];
fsFileIndex data_bg_qt_qt02_map[1];
char z_data_bg_qt_qt03_map__name[20];
fsFile z_data_bg_qt_qt03_map__info[1];
fsFileIndex data_bg_qt_qt03_map[1];
char z_data_bg_qt_qt04_map__name[20];
fsFile z_data_bg_qt_qt04_map__info[1];
fsFileIndex data_bg_qt_qt04_map[1];
char z_data_bg_qt_qt05_cam__name[20];
fsFile z_data_bg_qt_qt05_cam__info[1];
fsFileIndex data_bg_qt_qt05_cam[1];
char z_data_bg_qt_qt05_map__name[20];
fsFile z_data_bg_qt_qt05_map__info[1];
fsFileIndex data_bg_qt_qt05_map[1];
char z_data_bg_qt_qt06_map__name[20];
fsFile z_data_bg_qt_qt06_map__info[1];
fsFileIndex data_bg_qt_qt06_map[1];
char z_data_bg_qt_qt07_map__name[20];
fsFile z_data_bg_qt_qt07_map__info[1];
fsFileIndex data_bg_qt_qt07_map[1];


