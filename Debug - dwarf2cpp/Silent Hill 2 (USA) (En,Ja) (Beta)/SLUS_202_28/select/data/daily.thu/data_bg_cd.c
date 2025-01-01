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
typedef char type_1[20];
typedef fsFile type_2[1];
typedef char type_3[15];
typedef char type_4[20];
typedef char type_5[20];
typedef fsFileIndex type_6[1];
typedef char type_7[20];
typedef fsFile type_8[1];
typedef fsFileIndex type_9[1];
typedef fsFile type_10[1];
typedef fsFileIndex type_11[1];
typedef fsFile type_12[1];
typedef fsFile type_13[1];
typedef char type_14[20];
typedef fsFileIndex type_15[1];
typedef fsFile type_16[1];
typedef fsFileIndex type_17[1];
typedef fsFileIndex type_18[1];
typedef char type_19[22];
typedef fsFileIndex type_20[1];
typedef fsFile type_21[1];
typedef char type_22[20];
typedef fsFileIndex type_23[1];
typedef char type_24[20];
typedef fsFileIndex type_25[1];
typedef fsFile type_26[1];
typedef char type_27[20];
typedef fsFile type_28[1];
typedef fsFileIndex type_29[1];
typedef char type_30[20];
typedef fsFile type_31[1];
typedef fsFile type_32[1];
typedef char type_33[20];
typedef fsFile type_34[1];
typedef char type_35[20];
typedef fsFile type_36[1];
typedef fsFileIndex type_37[1];
typedef char type_38[20];
typedef fsFileIndex type_39[1];
typedef char type_40[20];
typedef fsFileIndex type_41[1];
typedef fsFileIndex type_42[1];
typedef fsFile type_43[1];
typedef char type_44[20];
typedef fsFileIndex type_45[1];
typedef fsFile type_46[1];
typedef char type_47[20];
typedef fsFileIndex type_48[1];
typedef fsFile type_49[1];
typedef char type_50[20];
typedef fsFile type_51[1];
typedef char type_52[20];
typedef char type_53[20];
typedef fsFileIndex type_54[1];
typedef fsFile type_55[1];
typedef fsFileIndex type_56[1];
typedef char type_57[20];
typedef fsFile type_58[1];
typedef fsFile type_59[1];
typedef fsFileIndex type_60[1];
typedef fsFileIndex type_61[1];
typedef fsFile type_62[1];
typedef fsFileIndex type_63[1];
typedef char type_64[20];
typedef fsFile type_65[1];
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

char z_data_bg_cd_mgf__name[15];
fsFile z_data_bg_cd_mgf__info[1];
fsFileIndex data_bg_cd_mgf[1];
char z_data_bg_cd_cd01_cam__name[20];
fsFile z_data_bg_cd_cd01_cam__info[1];
fsFileIndex data_bg_cd_cd01_cam[1];
char z_data_bg_cd_cd01_cld__name[20];
fsFile z_data_bg_cd_cd01_cld__info[1];
fsFileIndex data_bg_cd_cd01_cld[1];
char z_data_bg_cd_cd01_map__name[20];
fsFile z_data_bg_cd_cd01_map__info[1];
fsFileIndex data_bg_cd_cd01_map[1];
char z_data_bg_cd_cd01TR_tex__name[22];
fsFile z_data_bg_cd_cd01TR_tex__info[1];
fsFileIndex data_bg_cd_cd01TR_tex[1];
char z_data_bg_cd_cd02_cam__name[20];
fsFile z_data_bg_cd_cd02_cam__info[1];
fsFileIndex data_bg_cd_cd02_cam[1];
char z_data_bg_cd_cd02_cld__name[20];
fsFile z_data_bg_cd_cd02_cld__info[1];
fsFileIndex data_bg_cd_cd02_cld[1];
char z_data_bg_cd_cd02_map__name[20];
fsFile z_data_bg_cd_cd02_map__info[1];
fsFileIndex data_bg_cd_cd02_map[1];
char z_data_bg_cd_cd04_cam__name[20];
fsFile z_data_bg_cd_cd04_cam__info[1];
fsFileIndex data_bg_cd_cd04_cam[1];
char z_data_bg_cd_cd04_map__name[20];
fsFile z_data_bg_cd_cd04_map__info[1];
fsFileIndex data_bg_cd_cd04_map[1];
char z_data_bg_cd_cd05_cam__name[20];
fsFile z_data_bg_cd_cd05_cam__info[1];
fsFileIndex data_bg_cd_cd05_cam[1];
char z_data_bg_cd_cd05_cld__name[20];
fsFile z_data_bg_cd_cd05_cld__info[1];
fsFileIndex data_bg_cd_cd05_cld[1];
char z_data_bg_cd_cd05_map__name[20];
fsFile z_data_bg_cd_cd05_map__info[1];
fsFileIndex data_bg_cd_cd05_map[1];
char z_data_bg_cd_cd06_cam__name[20];
fsFile z_data_bg_cd_cd06_cam__info[1];
fsFileIndex data_bg_cd_cd06_cam[1];
char z_data_bg_cd_cd06_cld__name[20];
fsFile z_data_bg_cd_cd06_cld__info[1];
fsFileIndex data_bg_cd_cd06_cld[1];
char z_data_bg_cd_cd06_map__name[20];
fsFile z_data_bg_cd_cd06_map__info[1];
fsFileIndex data_bg_cd_cd06_map[1];
char z_data_bg_cd_cd10_cam__name[20];
fsFile z_data_bg_cd_cd10_cam__info[1];
fsFileIndex data_bg_cd_cd10_cam[1];
char z_data_bg_cd_cd10_map__name[20];
fsFile z_data_bg_cd_cd10_map__info[1];
fsFileIndex data_bg_cd_cd10_map[1];
char z_data_bg_cd_cd11_cam__name[20];
fsFile z_data_bg_cd_cd11_cam__info[1];
fsFileIndex data_bg_cd_cd11_cam[1];
char z_data_bg_cd_cd11_map__name[20];
fsFile z_data_bg_cd_cd11_map__info[1];
fsFileIndex data_bg_cd_cd11_map[1];
char z_data_bg_cd_cdGB_cam__name[20];
fsFile z_data_bg_cd_cdGB_cam__info[1];
fsFileIndex data_bg_cd_cdGB_cam[1];
char z_data_bg_cd_cdGB_fcl__name[20];
fsFile z_data_bg_cd_cdGB_fcl__info[1];
fsFileIndex data_bg_cd_cdGB_fcl[1];
char z_data_bg_cd_cdGB_tex__name[20];
fsFile z_data_bg_cd_cdGB_tex__info[1];
fsFileIndex data_bg_cd_cdGB_tex[1];


