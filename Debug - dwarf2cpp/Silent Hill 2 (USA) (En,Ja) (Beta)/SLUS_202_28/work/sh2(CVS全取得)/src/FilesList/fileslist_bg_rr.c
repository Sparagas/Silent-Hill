typedef struct FilesBgBlock;
typedef union fsFileIndex;
typedef struct _anon0;
typedef union fsFile;
typedef struct fsCdFile;
typedef struct fsMgcFile;
typedef struct fsMgfFile;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct _anon1;


typedef FilesBgBlock type_0[1];
typedef FilesBgBlock type_1[1];
typedef FilesBgBlock* type_2[100];
typedef FilesBgBlock type_3[1];
typedef FilesBgBlock type_4[1];
typedef FilesBgBlock type_5[1];
typedef FilesBgBlock type_6[1];
typedef FilesBgBlock type_7[1];
typedef FilesBgBlock type_8[1];
typedef FilesBgBlock type_9[1];
typedef FilesBgBlock type_10[1];
typedef FilesBgBlock type_11[1];
typedef FilesBgBlock type_12[1];
typedef FilesBgBlock type_13[1];
typedef FilesBgBlock type_14[1];
typedef FilesBgBlock type_15[1];
typedef FilesBgBlock type_16[1];
typedef FilesBgBlock type_17[1];
typedef FilesBgBlock type_18[1];
typedef FilesBgBlock type_19[1];
typedef FilesBgBlock type_20[1];
typedef FilesBgBlock type_21[1];
typedef FilesBgBlock type_22[1];
typedef FilesBgBlock type_23[1];
typedef FilesBgBlock type_24[1];
typedef FilesBgBlock type_25[1];
typedef FilesBgBlock type_26[1];
typedef FilesBgBlock type_27[1];
typedef FilesBgBlock type_28[1];
typedef FilesBgBlock type_29[1];
typedef FilesBgBlock type_30[1];
typedef FilesBgBlock type_31[1];
typedef FilesBgBlock type_32[1];
typedef FilesBgBlock type_33[1];
typedef FilesBgBlock type_34[1];
typedef FilesBgBlock type_35[1];
typedef FilesBgBlock type_36[1];
typedef FilesBgBlock type_37[1];
typedef FilesBgBlock type_38[1];
typedef FilesBgBlock type_39[1];
typedef FilesBgBlock type_40[1];
typedef FilesBgBlock type_41[1];
typedef FilesBgBlock type_42[1];
typedef FilesBgBlock type_43[1];
typedef FilesBgBlock type_44[1];
typedef FilesBgBlock type_45[1];
typedef FilesBgBlock type_46[1];
typedef FilesBgBlock type_47[1];
typedef FilesBgBlock type_48[1];
typedef FilesBgBlock type_49[1];
typedef FilesBgBlock type_50[1];
typedef FilesBgBlock type_51[1];
typedef FilesBgBlock type_52[1];
typedef FilesBgBlock type_53[1];
typedef FilesBgBlock type_54[1];
typedef FilesBgBlock type_55[1];
typedef FilesBgBlock type_56[1];
typedef FilesBgBlock type_57[1];
typedef FilesBgBlock type_58[1];
typedef FilesBgBlock type_59[1];
typedef FilesBgBlock type_60[1];
typedef FilesBgBlock type_61[1];
typedef FilesBgBlock type_62[1];
typedef FilesBgBlock type_63[1];
typedef FilesBgBlock type_64[1];
typedef FilesBgBlock type_65[1];
typedef FilesBgBlock type_66[1];
typedef FilesBgBlock type_67[1];
typedef FilesBgBlock type_68[1];
typedef FilesBgBlock type_69[1];
typedef FilesBgBlock type_70[1];
typedef FilesBgBlock type_71[1];
typedef FilesBgBlock type_72[1];
typedef FilesBgBlock type_73[1];
typedef FilesBgBlock type_74[1];
typedef FilesBgBlock type_75[1];
typedef FilesBgBlock type_76[1];
typedef FilesBgBlock type_77[1];
typedef FilesBgBlock type_78[1];
typedef FilesBgBlock type_79[1];
typedef FilesBgBlock type_80[1];
typedef int type_81[1];
typedef FilesBgBlock type_82[1];
typedef FilesBgBlock type_83[1];
typedef FilesBgBlock type_84[1];
typedef FilesBgBlock type_85[1];
typedef FilesBgBlock type_86[1];
typedef FilesBgBlock type_87[1];
typedef FilesBgBlock type_88[1];
typedef FilesBgBlock type_89[1];
typedef FilesBgBlock type_90[1];
typedef FilesBgBlock type_91[1];
typedef FilesBgBlock type_92[1];
typedef FilesBgBlock type_93[1];
typedef FilesBgBlock type_94[1];
typedef FilesBgBlock type_95[1];
typedef FilesBgBlock type_96[1];
typedef FilesBgBlock type_97[1];
typedef FilesBgBlock type_98[1];
typedef FilesBgBlock type_99[1];
typedef FilesBgBlock type_100[1];
typedef FilesBgBlock type_101[1];
typedef FilesBgBlock type_102[1];

struct FilesBgBlock
{
	fsFileIndex* map;
	fsFileIndex* cld;
	fsFileIndex* cam;
	fsFileIndex* kg2;
	fsFileIndex* tex;
	fsFileIndex* ex0;
	fsFileIndex* ex1;
	fsFileIndex* ex2;
};

union fsFileIndex
{
	_anon0 index;
	unsigned long pack;
};

struct _anon0
{
	fsFile* fp;
	char* name;
};

union fsFile
{
	_anon1 check;
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

struct _anon1
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

FilesBgBlock bg_bid_rr00[1];
FilesBgBlock bg_bid_rr01[1];
FilesBgBlock bg_bid_rr02[1];
FilesBgBlock bg_bid_rr03[1];
FilesBgBlock bg_bid_rr04[1];
FilesBgBlock bg_bid_rr05[1];
FilesBgBlock bg_bid_rr06[1];
FilesBgBlock bg_bid_rr07[1];
FilesBgBlock bg_bid_rr08[1];
FilesBgBlock bg_bid_rr09[1];
FilesBgBlock bg_bid_rr10[1];
FilesBgBlock bg_bid_rr11[1];
FilesBgBlock bg_bid_rr12[1];
FilesBgBlock bg_bid_rr13[1];
FilesBgBlock bg_bid_rr14[1];
FilesBgBlock bg_bid_rr15[1];
FilesBgBlock bg_bid_rr16[1];
FilesBgBlock bg_bid_rr17[1];
FilesBgBlock bg_bid_rr18[1];
FilesBgBlock bg_bid_rr19[1];
FilesBgBlock bg_bid_rr20[1];
FilesBgBlock bg_bid_rr21[1];
FilesBgBlock bg_bid_rr22[1];
FilesBgBlock bg_bid_rr23[1];
FilesBgBlock bg_bid_rr24[1];
FilesBgBlock bg_bid_rr25[1];
FilesBgBlock bg_bid_rr26[1];
FilesBgBlock bg_bid_rr27[1];
FilesBgBlock bg_bid_rr28[1];
FilesBgBlock bg_bid_rr29[1];
FilesBgBlock bg_bid_rr30[1];
FilesBgBlock bg_bid_rr31[1];
FilesBgBlock bg_bid_rr32[1];
FilesBgBlock bg_bid_rr33[1];
FilesBgBlock bg_bid_rr34[1];
FilesBgBlock bg_bid_rr35[1];
FilesBgBlock bg_bid_rr36[1];
FilesBgBlock bg_bid_rr37[1];
FilesBgBlock bg_bid_rr38[1];
FilesBgBlock bg_bid_rr39[1];
FilesBgBlock bg_bid_rr40[1];
FilesBgBlock bg_bid_rr41[1];
FilesBgBlock bg_bid_rr42[1];
FilesBgBlock bg_bid_rr43[1];
FilesBgBlock bg_bid_rr44[1];
FilesBgBlock bg_bid_rr45[1];
FilesBgBlock bg_bid_rr46[1];
FilesBgBlock bg_bid_rr47[1];
FilesBgBlock bg_bid_rr48[1];
FilesBgBlock bg_bid_rr49[1];
FilesBgBlock bg_bid_rr50[1];
FilesBgBlock bg_bid_rr51[1];
FilesBgBlock bg_bid_rr52[1];
FilesBgBlock bg_bid_rr53[1];
FilesBgBlock bg_bid_rr54[1];
FilesBgBlock bg_bid_rr55[1];
FilesBgBlock bg_bid_rr56[1];
FilesBgBlock bg_bid_rr57[1];
FilesBgBlock bg_bid_rr58[1];
FilesBgBlock bg_bid_rr59[1];
FilesBgBlock bg_bid_rr60[1];
FilesBgBlock bg_bid_rr61[1];
FilesBgBlock bg_bid_rr62[1];
FilesBgBlock bg_bid_rr63[1];
FilesBgBlock bg_bid_rr64[1];
FilesBgBlock bg_bid_rr65[1];
FilesBgBlock bg_bid_rr66[1];
FilesBgBlock bg_bid_rr67[1];
FilesBgBlock bg_bid_rr68[1];
FilesBgBlock bg_bid_rr69[1];
FilesBgBlock bg_bid_rr70[1];
FilesBgBlock bg_bid_rr71[1];
FilesBgBlock bg_bid_rr72[1];
FilesBgBlock bg_bid_rr73[1];
FilesBgBlock bg_bid_rr74[1];
FilesBgBlock bg_bid_rr75[1];
FilesBgBlock bg_bid_rr76[1];
FilesBgBlock bg_bid_rr77[1];
FilesBgBlock bg_bid_rr78[1];
FilesBgBlock bg_bid_rr79[1];
FilesBgBlock bg_bid_rr80[1];
FilesBgBlock bg_bid_rr81[1];
FilesBgBlock bg_bid_rr82[1];
FilesBgBlock bg_bid_rr83[1];
FilesBgBlock bg_bid_rr84[1];
FilesBgBlock bg_bid_rr85[1];
FilesBgBlock bg_bid_rr86[1];
FilesBgBlock bg_bid_rr87[1];
FilesBgBlock bg_bid_rr88[1];
FilesBgBlock bg_bid_rr89[1];
FilesBgBlock bg_bid_rr90[1];
FilesBgBlock bg_bid_rr91[1];
FilesBgBlock bg_bid_rr92[1];
FilesBgBlock bg_bid_rr93[1];
FilesBgBlock bg_bid_rr94[1];
FilesBgBlock bg_bid_rr95[1];
FilesBgBlock bg_bid_rr96[1];
FilesBgBlock bg_bid_rr97[1];
FilesBgBlock bg_bid_rr98[1];
FilesBgBlock bg_bid_rr99[1];
FilesBgBlock bg_bid_rr100[1];
int FilesBgBlockMax_rr[1];
FilesBgBlock* FilesBgBlockList_rr[100];


