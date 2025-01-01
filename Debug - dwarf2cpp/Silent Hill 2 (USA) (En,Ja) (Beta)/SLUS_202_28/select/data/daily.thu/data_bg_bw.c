typedef union fsFile;
typedef struct fsCdFile;
typedef struct fsMgcFile;
typedef struct fsMgfFile;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct _anon0;
typedef union fsFileIndex;
typedef struct _anon1;


typedef char type_0[22];
typedef fsFileIndex type_1[1];
typedef fsFileIndex type_2[1];
typedef fsFileIndex type_3[1];
typedef char type_4[15];
typedef char type_5[20];
typedef fsFileIndex type_6[1];
typedef fsFile type_7[1];
typedef fsFile type_8[1];
typedef fsFile type_9[1];
typedef fsFileIndex type_10[1];
typedef fsFileIndex type_11[1];
typedef fsFile type_12[1];
typedef fsFile type_13[1];
typedef fsFileIndex type_14[1];
typedef fsFile type_15[1];
typedef char type_16[20];
typedef char type_17[20];
typedef char type_18[20];
typedef fsFileIndex type_19[1];
typedef fsFile type_20[1];
typedef char type_21[20];
typedef fsFile type_22[1];
typedef fsFileIndex type_23[1];
typedef fsFileIndex type_24[1];
typedef char type_25[20];
typedef char type_26[20];
typedef fsFileIndex type_27[1];
typedef fsFile type_28[1];
typedef fsFile type_29[1];
typedef fsFile type_30[1];
typedef fsFileIndex type_31[1];
typedef char type_32[20];
typedef fsFile type_33[1];
typedef char type_34[20];
typedef fsFile type_35[1];
typedef fsFile type_36[1];
typedef fsFileIndex type_37[1];
typedef fsFileIndex type_38[1];
typedef char type_39[22];
typedef char type_40[20];
typedef fsFileIndex type_41[1];
typedef char type_42[20];
typedef fsFileIndex type_43[1];
typedef char type_44[22];
typedef fsFileIndex type_45[1];
typedef fsFileIndex type_46[1];
typedef fsFile type_47[1];
typedef fsFile type_48[1];
typedef fsFile type_49[1];
typedef fsFile type_50[1];
typedef fsFileIndex type_51[1];
typedef char type_52[20];
typedef char type_53[20];
typedef fsFileIndex type_54[1];
typedef char type_55[20];
typedef fsFile type_56[1];
typedef fsFile type_57[1];
typedef fsFileIndex type_58[1];
typedef char type_59[20];
typedef fsFileIndex type_60[1];
typedef fsFileIndex type_61[1];
typedef char type_62[20];
typedef fsFile type_63[1];
typedef char type_64[20];
typedef fsFileIndex type_65[1];
typedef fsFile type_66[1];
typedef fsFileIndex type_67[1];
typedef char type_68[20];
typedef char type_69[20];
typedef fsFile type_70[1];
typedef fsFile type_71[1];
typedef fsFile type_72[1];
typedef char type_73[20];
typedef char type_74[20];
typedef fsFileIndex type_75[1];
typedef char type_76[20];
typedef fsFile type_77[1];

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

char z_data_bg_bw_mgf__name[15];
fsFile z_data_bg_bw_mgf__info[1];
fsFileIndex data_bg_bw_mgf[1];
char z_data_bg_bw_bw01_cam__name[20];
fsFile z_data_bg_bw_bw01_cam__info[1];
fsFileIndex data_bg_bw_bw01_cam[1];
char z_data_bg_bw_bw01_cld__name[20];
fsFile z_data_bg_bw_bw01_cld__info[1];
fsFileIndex data_bg_bw_bw01_cld[1];
char z_data_bg_bw_bw01_kg2__name[20];
fsFile z_data_bg_bw_bw01_kg2__info[1];
fsFileIndex data_bg_bw_bw01_kg2[1];
char z_data_bg_bw_bw01_map__name[20];
fsFile z_data_bg_bw_bw01_map__info[1];
fsFileIndex data_bg_bw_bw01_map[1];
char z_data_bg_bw_bw01TR_tex__name[22];
fsFile z_data_bg_bw_bw01TR_tex__info[1];
fsFileIndex data_bg_bw_bw01TR_tex[1];
char z_data_bg_bw_bw02_map__name[20];
fsFile z_data_bg_bw_bw02_map__info[1];
fsFileIndex data_bg_bw_bw02_map[1];
char z_data_bg_bw_bw03_map__name[20];
fsFile z_data_bg_bw_bw03_map__info[1];
fsFileIndex data_bg_bw_bw03_map[1];
char z_data_bg_bw_bw04_map__name[20];
fsFile z_data_bg_bw_bw04_map__info[1];
fsFileIndex data_bg_bw_bw04_map[1];
char z_data_bg_bw_bw05_cam__name[20];
fsFile z_data_bg_bw_bw05_cam__info[1];
fsFileIndex data_bg_bw_bw05_cam[1];
char z_data_bg_bw_bw05_cld__name[20];
fsFile z_data_bg_bw_bw05_cld__info[1];
fsFileIndex data_bg_bw_bw05_cld[1];
char z_data_bg_bw_bw05_kg2__name[20];
fsFile z_data_bg_bw_bw05_kg2__info[1];
fsFileIndex data_bg_bw_bw05_kg2[1];
char z_data_bg_bw_bw05_map__name[20];
fsFile z_data_bg_bw_bw05_map__info[1];
fsFileIndex data_bg_bw_bw05_map[1];
char z_data_bg_bw_bw05TR_tex__name[22];
fsFile z_data_bg_bw_bw05TR_tex__info[1];
fsFileIndex data_bg_bw_bw05TR_tex[1];
char z_data_bg_bw_bw06_map__name[20];
fsFile z_data_bg_bw_bw06_map__info[1];
fsFileIndex data_bg_bw_bw06_map[1];
char z_data_bg_bw_bw07_map__name[20];
fsFile z_data_bg_bw_bw07_map__info[1];
fsFileIndex data_bg_bw_bw07_map[1];
char z_data_bg_bw_bw08_map__name[20];
fsFile z_data_bg_bw_bw08_map__info[1];
fsFileIndex data_bg_bw_bw08_map[1];
char z_data_bg_bw_bw09_cam__name[20];
fsFile z_data_bg_bw_bw09_cam__info[1];
fsFileIndex data_bg_bw_bw09_cam[1];
char z_data_bg_bw_bw09_cld__name[20];
fsFile z_data_bg_bw_bw09_cld__info[1];
fsFileIndex data_bg_bw_bw09_cld[1];
char z_data_bg_bw_bw09_kg2__name[20];
fsFile z_data_bg_bw_bw09_kg2__info[1];
fsFileIndex data_bg_bw_bw09_kg2[1];
char z_data_bg_bw_bw09_map__name[20];
fsFile z_data_bg_bw_bw09_map__info[1];
fsFileIndex data_bg_bw_bw09_map[1];
char z_data_bg_bw_bw09TR_tex__name[22];
fsFile z_data_bg_bw_bw09TR_tex__info[1];
fsFileIndex data_bg_bw_bw09TR_tex[1];
char z_data_bg_bw_bw10_map__name[20];
fsFile z_data_bg_bw_bw10_map__info[1];
fsFileIndex data_bg_bw_bw10_map[1];
char z_data_bg_bw_bw11_map__name[20];
fsFile z_data_bg_bw_bw11_map__info[1];
fsFileIndex data_bg_bw_bw11_map[1];
char z_data_bg_bw_bw12_map__name[20];
fsFile z_data_bg_bw_bw12_map__info[1];
fsFileIndex data_bg_bw_bw12_map[1];
char z_data_bg_bw_bwGB_tex__name[20];
fsFile z_data_bg_bw_bwGB_tex__info[1];
fsFileIndex data_bg_bw_bwGB_tex[1];


