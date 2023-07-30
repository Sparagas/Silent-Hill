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
typedef fsFileIndex type_2[1];
typedef fsFileIndex type_3[1];
typedef fsFile type_4[1];
typedef fsFileIndex type_5[1];
typedef char type_6[15];
typedef fsFileIndex type_7[1];
typedef fsFile type_8[1];
typedef fsFile type_9[1];
typedef fsFile type_10[1];
typedef fsFile type_11[1];
typedef char type_12[20];
typedef fsFileIndex type_13[1];
typedef fsFile type_14[1];
typedef char type_15[20];
typedef char type_16[20];
typedef fsFile type_17[1];
typedef char type_18[20];
typedef fsFileIndex type_19[1];
typedef fsFile type_20[1];
typedef char type_21[20];
typedef fsFileIndex type_22[1];
typedef fsFileIndex type_23[1];
typedef fsFileIndex type_24[1];
typedef fsFile type_25[1];
typedef fsFileIndex type_26[1];
typedef fsFile type_27[1];
typedef char type_28[20];
typedef fsFile type_29[1];
typedef char type_30[20];
typedef fsFileIndex type_31[1];
typedef fsFile type_32[1];
typedef char type_33[20];
typedef fsFileIndex type_34[1];
typedef char type_35[22];
typedef char type_36[20];
typedef fsFileIndex type_37[1];
typedef char type_38[20];
typedef fsFileIndex type_39[1];
typedef fsFileIndex type_40[1];
typedef fsFile type_41[1];
typedef fsFileIndex type_42[1];
typedef fsFile type_43[1];
typedef fsFile type_44[1];
typedef char type_45[20];
typedef fsFile type_46[1];
typedef fsFileIndex type_47[1];
typedef fsFile type_48[1];
typedef fsFileIndex type_49[1];
typedef char type_50[20];
typedef char type_51[20];
typedef char type_52[20];
typedef fsFileIndex type_53[1];
typedef fsFileIndex type_54[1];
typedef char type_55[22];
typedef fsFile type_56[1];
typedef char type_57[20];
typedef fsFileIndex type_58[1];
typedef char type_59[20];
typedef fsFile type_60[1];
typedef char type_61[20];
typedef fsFile type_62[1];
typedef fsFile type_63[1];
typedef fsFile type_64[1];
typedef char type_65[20];
typedef fsFile type_66[1];
typedef fsFileIndex type_67[1];
typedef char type_68[20];

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

char z_data_bg_th_mgf__name[15];
fsFile z_data_bg_th_mgf__info[1];
fsFileIndex data_bg_th_mgf[1];
char z_data_bg_th_th01_cam__name[20];
fsFile z_data_bg_th_th01_cam__info[1];
fsFileIndex data_bg_th_th01_cam[1];
char z_data_bg_th_th01_cld__name[20];
fsFile z_data_bg_th_th01_cld__info[1];
fsFileIndex data_bg_th_th01_cld[1];
char z_data_bg_th_th01_kg2__name[20];
fsFile z_data_bg_th_th01_kg2__info[1];
fsFileIndex data_bg_th_th01_kg2[1];
char z_data_bg_th_th01_map__name[20];
fsFile z_data_bg_th_th01_map__info[1];
fsFileIndex data_bg_th_th01_map[1];
char z_data_bg_th_th01TR_tex__name[22];
fsFile z_data_bg_th_th01TR_tex__info[1];
fsFileIndex data_bg_th_th01TR_tex[1];
char z_data_bg_th_th02_map__name[20];
fsFile z_data_bg_th_th02_map__info[1];
fsFileIndex data_bg_th_th02_map[1];
char z_data_bg_th_th03_map__name[20];
fsFile z_data_bg_th_th03_map__info[1];
fsFileIndex data_bg_th_th03_map[1];
char z_data_bg_th_th04_map__name[20];
fsFile z_data_bg_th_th04_map__info[1];
fsFileIndex data_bg_th_th04_map[1];
char z_data_bg_th_th05_cam__name[20];
fsFile z_data_bg_th_th05_cam__info[1];
fsFileIndex data_bg_th_th05_cam[1];
char z_data_bg_th_th05_cld__name[20];
fsFile z_data_bg_th_th05_cld__info[1];
fsFileIndex data_bg_th_th05_cld[1];
char z_data_bg_th_th05_kg2__name[20];
fsFile z_data_bg_th_th05_kg2__info[1];
fsFileIndex data_bg_th_th05_kg2[1];
char z_data_bg_th_th05_map__name[20];
fsFile z_data_bg_th_th05_map__info[1];
fsFileIndex data_bg_th_th05_map[1];
char z_data_bg_th_th05TR_tex__name[22];
fsFile z_data_bg_th_th05TR_tex__info[1];
fsFileIndex data_bg_th_th05TR_tex[1];
char z_data_bg_th_th06_map__name[20];
fsFile z_data_bg_th_th06_map__info[1];
fsFileIndex data_bg_th_th06_map[1];
char z_data_bg_th_th07_map__name[20];
fsFile z_data_bg_th_th07_map__info[1];
fsFileIndex data_bg_th_th07_map[1];
char z_data_bg_th_th08_map__name[20];
fsFile z_data_bg_th_th08_map__info[1];
fsFileIndex data_bg_th_th08_map[1];
char z_data_bg_th_th09_map__name[20];
fsFile z_data_bg_th_th09_map__info[1];
fsFileIndex data_bg_th_th09_map[1];
char z_data_bg_th_th13_map__name[20];
fsFile z_data_bg_th_th13_map__info[1];
fsFileIndex data_bg_th_th13_map[1];
char z_data_bg_th_th14_map__name[20];
fsFile z_data_bg_th_th14_map__info[1];
fsFileIndex data_bg_th_th14_map[1];
char z_data_bg_th_th15_map__name[20];
fsFile z_data_bg_th_th15_map__info[1];
fsFileIndex data_bg_th_th15_map[1];
char z_data_bg_th_th16_map__name[20];
fsFile z_data_bg_th_th16_map__info[1];
fsFileIndex data_bg_th_th16_map[1];
char z_data_bg_th_th16TR_tex__name[22];
fsFile z_data_bg_th_th16TR_tex__info[1];
fsFileIndex data_bg_th_th16TR_tex[1];


