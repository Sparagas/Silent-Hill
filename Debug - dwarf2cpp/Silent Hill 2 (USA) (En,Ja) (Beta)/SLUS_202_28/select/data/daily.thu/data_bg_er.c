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
typedef fsFile type_1[1];
typedef char type_2[20];
typedef fsFile type_3[1];
typedef char type_4[22];
typedef char type_5[20];
typedef char type_6[15];
typedef char type_7[20];
typedef fsFileIndex type_8[1];
typedef fsFile type_9[1];
typedef fsFileIndex type_10[1];
typedef fsFileIndex type_11[1];
typedef fsFile type_12[1];
typedef fsFileIndex type_13[1];
typedef fsFile type_14[1];
typedef char type_15[20];
typedef char type_16[20];
typedef char type_17[20];
typedef fsFileIndex type_18[1];
typedef fsFile type_19[1];
typedef fsFile type_20[1];
typedef char type_21[20];
typedef fsFile type_22[1];
typedef fsFile type_23[1];
typedef fsFileIndex type_24[1];
typedef fsFileIndex type_25[1];
typedef fsFile type_26[1];
typedef fsFileIndex type_27[1];
typedef fsFileIndex type_28[1];
typedef fsFileIndex type_29[1];
typedef fsFileIndex type_30[1];
typedef char type_31[22];
typedef fsFile type_32[1];
typedef char type_33[20];
typedef char type_34[20];
typedef fsFile type_35[1];
typedef fsFile type_36[1];
typedef char type_37[20];
typedef char type_38[20];
typedef fsFileIndex type_39[1];
typedef fsFile type_40[1];
typedef char type_41[20];
typedef fsFileIndex type_42[1];
typedef fsFile type_43[1];
typedef fsFileIndex type_44[1];
typedef fsFile type_45[1];
typedef char type_46[20];
typedef char type_47[20];
typedef fsFile type_48[1];
typedef char type_49[20];
typedef fsFileIndex type_50[1];
typedef fsFile type_51[1];
typedef fsFile type_52[1];
typedef fsFile type_53[1];
typedef fsFileIndex type_54[1];
typedef char type_55[20];
typedef fsFile type_56[1];
typedef fsFile type_57[1];
typedef char type_58[20];
typedef char type_59[20];
typedef fsFileIndex type_60[1];
typedef fsFileIndex type_61[1];
typedef fsFile type_62[1];
typedef fsFileIndex type_63[1];
typedef char type_64[20];
typedef fsFile type_65[1];
typedef fsFile type_66[1];
typedef char type_67[20];
typedef fsFileIndex type_68[1];
typedef fsFileIndex type_69[1];
typedef fsFile type_70[1];
typedef fsFileIndex type_71[1];
typedef fsFileIndex type_72[1];
typedef char type_73[20];
typedef fsFileIndex type_74[1];
typedef char type_75[20];
typedef fsFile type_76[1];
typedef fsFile type_77[1];
typedef fsFileIndex type_78[1];
typedef char type_79[22];
typedef fsFile type_80[1];
typedef fsFileIndex type_81[1];
typedef char type_82[20];
typedef fsFile type_83[1];
typedef fsFileIndex type_84[1];
typedef char type_85[20];
typedef fsFile type_86[1];
typedef fsFileIndex type_87[1];
typedef fsFile type_88[1];
typedef char type_89[20];
typedef char type_90[20];
typedef fsFileIndex type_91[1];
typedef char type_92[20];
typedef char type_93[20];
typedef fsFileIndex type_94[1];
typedef fsFile type_95[1];
typedef fsFile type_96[1];
typedef fsFile type_97[1];
typedef char type_98[20];
typedef fsFileIndex type_99[1];
typedef fsFileIndex type_100[1];
typedef fsFile type_101[1];
typedef fsFileIndex type_102[1];
typedef fsFileIndex type_103[1];
typedef fsFile type_104[1];
typedef fsFileIndex type_105[1];
typedef fsFile type_106[1];
typedef char type_107[20];
typedef char type_108[20];
typedef char type_109[20];
typedef fsFileIndex type_110[1];
typedef char type_111[20];
typedef fsFile type_112[1];
typedef char type_113[20];
typedef fsFileIndex type_114[1];
typedef fsFileIndex type_115[1];
typedef fsFile type_116[1];
typedef fsFileIndex type_117[1];
typedef fsFileIndex type_118[1];
typedef char type_119[20];

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

char z_data_bg_er_mgf__name[15];
fsFile z_data_bg_er_mgf__info[1];
fsFileIndex data_bg_er_mgf[1];
char z_data_bg_er_er01_cam__name[20];
fsFile z_data_bg_er_er01_cam__info[1];
fsFileIndex data_bg_er_er01_cam[1];
char z_data_bg_er_er01_cld__name[20];
fsFile z_data_bg_er_er01_cld__info[1];
fsFileIndex data_bg_er_er01_cld[1];
char z_data_bg_er_er01_map__name[20];
fsFile z_data_bg_er_er01_map__info[1];
fsFileIndex data_bg_er_er01_map[1];
char z_data_bg_er_er01TR_tex__name[22];
fsFile z_data_bg_er_er01TR_tex__info[1];
fsFileIndex data_bg_er_er01TR_tex[1];
char z_data_bg_er_er02_map__name[20];
fsFile z_data_bg_er_er02_map__info[1];
fsFileIndex data_bg_er_er02_map[1];
char z_data_bg_er_er03_map__name[20];
fsFile z_data_bg_er_er03_map__info[1];
fsFileIndex data_bg_er_er03_map[1];
char z_data_bg_er_er04_map__name[20];
fsFile z_data_bg_er_er04_map__info[1];
fsFileIndex data_bg_er_er04_map[1];
char z_data_bg_er_er05_cam__name[20];
fsFile z_data_bg_er_er05_cam__info[1];
fsFileIndex data_bg_er_er05_cam[1];
char z_data_bg_er_er05_cld__name[20];
fsFile z_data_bg_er_er05_cld__info[1];
fsFileIndex data_bg_er_er05_cld[1];
char z_data_bg_er_er05_kg2__name[20];
fsFile z_data_bg_er_er05_kg2__info[1];
fsFileIndex data_bg_er_er05_kg2[1];
char z_data_bg_er_er05_map__name[20];
fsFile z_data_bg_er_er05_map__info[1];
fsFileIndex data_bg_er_er05_map[1];
char z_data_bg_er_er06_map__name[20];
fsFile z_data_bg_er_er06_map__info[1];
fsFileIndex data_bg_er_er06_map[1];
char z_data_bg_er_er09_cam__name[20];
fsFile z_data_bg_er_er09_cam__info[1];
fsFileIndex data_bg_er_er09_cam[1];
char z_data_bg_er_er09_cld__name[20];
fsFile z_data_bg_er_er09_cld__info[1];
fsFileIndex data_bg_er_er09_cld[1];
char z_data_bg_er_er09_kg2__name[20];
fsFile z_data_bg_er_er09_kg2__info[1];
fsFileIndex data_bg_er_er09_kg2[1];
char z_data_bg_er_er09_map__name[20];
fsFile z_data_bg_er_er09_map__info[1];
fsFileIndex data_bg_er_er09_map[1];
char z_data_bg_er_er09TR_tex__name[22];
fsFile z_data_bg_er_er09TR_tex__info[1];
fsFileIndex data_bg_er_er09TR_tex[1];
char z_data_bg_er_er10_map__name[20];
fsFile z_data_bg_er_er10_map__info[1];
fsFileIndex data_bg_er_er10_map[1];
char z_data_bg_er_er11_map__name[20];
fsFile z_data_bg_er_er11_map__info[1];
fsFileIndex data_bg_er_er11_map[1];
char z_data_bg_er_er12_map__name[20];
fsFile z_data_bg_er_er12_map__info[1];
fsFileIndex data_bg_er_er12_map[1];
char z_data_bg_er_er13_cam__name[20];
fsFile z_data_bg_er_er13_cam__info[1];
fsFileIndex data_bg_er_er13_cam[1];
char z_data_bg_er_er13_cld__name[20];
fsFile z_data_bg_er_er13_cld__info[1];
fsFileIndex data_bg_er_er13_cld[1];
char z_data_bg_er_er13_kg2__name[20];
fsFile z_data_bg_er_er13_kg2__info[1];
fsFileIndex data_bg_er_er13_kg2[1];
char z_data_bg_er_er13_map__name[20];
fsFile z_data_bg_er_er13_map__info[1];
fsFileIndex data_bg_er_er13_map[1];
char z_data_bg_er_er13TR_tex__name[22];
fsFile z_data_bg_er_er13TR_tex__info[1];
fsFileIndex data_bg_er_er13TR_tex[1];
char z_data_bg_er_er14_map__name[20];
fsFile z_data_bg_er_er14_map__info[1];
fsFileIndex data_bg_er_er14_map[1];
char z_data_bg_er_er15_map__name[20];
fsFile z_data_bg_er_er15_map__info[1];
fsFileIndex data_bg_er_er15_map[1];
char z_data_bg_er_er16_map__name[20];
fsFile z_data_bg_er_er16_map__info[1];
fsFileIndex data_bg_er_er16_map[1];
char z_data_bg_er_er87_map__name[20];
fsFile z_data_bg_er_er87_map__info[1];
fsFileIndex data_bg_er_er87_map[1];
char z_data_bg_er_er88_map__name[20];
fsFile z_data_bg_er_er88_map__info[1];
fsFileIndex data_bg_er_er88_map[1];
char z_data_bg_er_er89_map__name[20];
fsFile z_data_bg_er_er89_map__info[1];
fsFileIndex data_bg_er_er89_map[1];
char z_data_bg_er_er90_map__name[20];
fsFile z_data_bg_er_er90_map__info[1];
fsFileIndex data_bg_er_er90_map[1];
char z_data_bg_er_er91_map__name[20];
fsFile z_data_bg_er_er91_map__info[1];
fsFileIndex data_bg_er_er91_map[1];
char z_data_bg_er_er94_map__name[20];
fsFile z_data_bg_er_er94_map__info[1];
fsFileIndex data_bg_er_er94_map[1];
char z_data_bg_er_er95_map__name[20];
fsFile z_data_bg_er_er95_map__info[1];
fsFileIndex data_bg_er_er95_map[1];
char z_data_bg_er_er96_map__name[20];
fsFile z_data_bg_er_er96_map__info[1];
fsFileIndex data_bg_er_er96_map[1];
char z_data_bg_er_er97_map__name[20];
fsFile z_data_bg_er_er97_map__info[1];
fsFileIndex data_bg_er_er97_map[1];
char z_data_bg_er_er98_map__name[20];
fsFile z_data_bg_er_er98_map__info[1];
fsFileIndex data_bg_er_er98_map[1];
char z_data_bg_er_er99_map__name[20];
fsFile z_data_bg_er_er99_map__info[1];
fsFileIndex data_bg_er_er99_map[1];


