typedef union fsFileIndex;
typedef struct _anon0;
typedef union fsFile;
typedef struct FilesBgBlock;
typedef struct fsCdFile;
typedef struct fsMgcFile;
typedef struct fsMgfFile;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct _anon1;


typedef FilesBgBlock type_0[1];
typedef FilesBgBlock type_1[1];
typedef FilesBgBlock type_2[1];
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
typedef int type_13[1];
typedef FilesBgBlock type_14[1];
typedef FilesBgBlock type_15[1];
typedef FilesBgBlock type_16[1];
typedef FilesBgBlock type_17[1];
typedef FilesBgBlock type_18[1];
typedef FilesBgBlock type_19[1];
typedef FilesBgBlock type_20[1];
typedef FilesBgBlock type_21[1];
typedef FilesBgBlock* type_22[91];
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
typedef FilesBgBlock type_81[1];
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

FilesBgBlock bg_bid_ma00[1];
FilesBgBlock bg_bid_ma01[1];
FilesBgBlock bg_bid_ma02[1];
FilesBgBlock bg_bid_ma03[1];
FilesBgBlock bg_bid_ma04[1];
FilesBgBlock bg_bid_ma05[1];
FilesBgBlock bg_bid_ma06[1];
FilesBgBlock bg_bid_ma07[1];
FilesBgBlock bg_bid_ma08[1];
FilesBgBlock bg_bid_ma09[1];
FilesBgBlock bg_bid_ma10[1];
FilesBgBlock bg_bid_ma11[1];
FilesBgBlock bg_bid_ma12[1];
FilesBgBlock bg_bid_ma13[1];
FilesBgBlock bg_bid_ma14[1];
FilesBgBlock bg_bid_ma15[1];
FilesBgBlock bg_bid_ma16[1];
FilesBgBlock bg_bid_ma17[1];
FilesBgBlock bg_bid_ma18[1];
FilesBgBlock bg_bid_ma19[1];
FilesBgBlock bg_bid_ma20[1];
FilesBgBlock bg_bid_ma21[1];
FilesBgBlock bg_bid_ma22[1];
FilesBgBlock bg_bid_ma23[1];
FilesBgBlock bg_bid_ma24[1];
FilesBgBlock bg_bid_ma25[1];
FilesBgBlock bg_bid_ma26[1];
FilesBgBlock bg_bid_ma27[1];
FilesBgBlock bg_bid_ma28[1];
FilesBgBlock bg_bid_ma29[1];
FilesBgBlock bg_bid_ma30[1];
FilesBgBlock bg_bid_ma31[1];
FilesBgBlock bg_bid_ma32[1];
FilesBgBlock bg_bid_ma33[1];
FilesBgBlock bg_bid_ma34[1];
FilesBgBlock bg_bid_ma35[1];
FilesBgBlock bg_bid_ma36[1];
FilesBgBlock bg_bid_ma37[1];
FilesBgBlock bg_bid_ma38[1];
FilesBgBlock bg_bid_ma39[1];
FilesBgBlock bg_bid_ma40[1];
FilesBgBlock bg_bid_ma41[1];
FilesBgBlock bg_bid_ma42[1];
FilesBgBlock bg_bid_ma43[1];
FilesBgBlock bg_bid_ma44[1];
FilesBgBlock bg_bid_ma45[1];
FilesBgBlock bg_bid_ma46[1];
FilesBgBlock bg_bid_ma47[1];
FilesBgBlock bg_bid_ma48[1];
FilesBgBlock bg_bid_ma49[1];
FilesBgBlock bg_bid_ma50[1];
FilesBgBlock bg_bid_ma51[1];
FilesBgBlock bg_bid_ma52[1];
FilesBgBlock bg_bid_ma53[1];
FilesBgBlock bg_bid_ma54[1];
FilesBgBlock bg_bid_ma55[1];
FilesBgBlock bg_bid_ma56[1];
FilesBgBlock bg_bid_ma57[1];
FilesBgBlock bg_bid_ma58[1];
FilesBgBlock bg_bid_ma59[1];
FilesBgBlock bg_bid_ma60[1];
FilesBgBlock bg_bid_ma61[1];
FilesBgBlock bg_bid_ma62[1];
FilesBgBlock bg_bid_ma63[1];
FilesBgBlock bg_bid_ma64[1];
FilesBgBlock bg_bid_ma65[1];
FilesBgBlock bg_bid_ma66[1];
FilesBgBlock bg_bid_ma67[1];
FilesBgBlock bg_bid_ma68[1];
FilesBgBlock bg_bid_ma69[1];
FilesBgBlock bg_bid_ma70[1];
FilesBgBlock bg_bid_ma71[1];
FilesBgBlock bg_bid_ma72[1];
FilesBgBlock bg_bid_ma73[1];
FilesBgBlock bg_bid_ma74[1];
FilesBgBlock bg_bid_ma75[1];
FilesBgBlock bg_bid_ma76[1];
FilesBgBlock bg_bid_ma77[1];
FilesBgBlock bg_bid_ma78[1];
FilesBgBlock bg_bid_ma79[1];
FilesBgBlock bg_bid_ma80[1];
FilesBgBlock bg_bid_ma81[1];
FilesBgBlock bg_bid_ma82[1];
FilesBgBlock bg_bid_ma83[1];
FilesBgBlock bg_bid_ma84[1];
FilesBgBlock bg_bid_ma85[1];
FilesBgBlock bg_bid_ma86[1];
FilesBgBlock bg_bid_ma87[1];
FilesBgBlock bg_bid_ma88[1];
FilesBgBlock bg_bid_ma89[1];
FilesBgBlock bg_bid_ma90[1];
int FilesBgBlockMax_ma[1];
FilesBgBlock* FilesBgBlockList_ma[91];


