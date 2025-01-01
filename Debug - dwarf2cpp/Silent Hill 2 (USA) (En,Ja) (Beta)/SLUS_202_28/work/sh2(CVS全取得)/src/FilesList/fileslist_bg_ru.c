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
typedef FilesBgBlock type_2[1];
typedef FilesBgBlock type_3[1];
typedef FilesBgBlock type_4[1];
typedef FilesBgBlock* type_5[81];
typedef FilesBgBlock type_6[1];
typedef int type_7[1];
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
typedef FilesBgBlock type_81[1];
typedef FilesBgBlock type_82[1];

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

FilesBgBlock bg_bid_ru00[1];
FilesBgBlock bg_bid_ru01[1];
FilesBgBlock bg_bid_ru02[1];
FilesBgBlock bg_bid_ru03[1];
FilesBgBlock bg_bid_ru04[1];
FilesBgBlock bg_bid_ru05[1];
FilesBgBlock bg_bid_ru06[1];
FilesBgBlock bg_bid_ru07[1];
FilesBgBlock bg_bid_ru08[1];
FilesBgBlock bg_bid_ru09[1];
FilesBgBlock bg_bid_ru10[1];
FilesBgBlock bg_bid_ru11[1];
FilesBgBlock bg_bid_ru12[1];
FilesBgBlock bg_bid_ru13[1];
FilesBgBlock bg_bid_ru14[1];
FilesBgBlock bg_bid_ru15[1];
FilesBgBlock bg_bid_ru16[1];
FilesBgBlock bg_bid_ru17[1];
FilesBgBlock bg_bid_ru18[1];
FilesBgBlock bg_bid_ru19[1];
FilesBgBlock bg_bid_ru20[1];
FilesBgBlock bg_bid_ru21[1];
FilesBgBlock bg_bid_ru22[1];
FilesBgBlock bg_bid_ru23[1];
FilesBgBlock bg_bid_ru24[1];
FilesBgBlock bg_bid_ru25[1];
FilesBgBlock bg_bid_ru26[1];
FilesBgBlock bg_bid_ru27[1];
FilesBgBlock bg_bid_ru28[1];
FilesBgBlock bg_bid_ru29[1];
FilesBgBlock bg_bid_ru30[1];
FilesBgBlock bg_bid_ru31[1];
FilesBgBlock bg_bid_ru32[1];
FilesBgBlock bg_bid_ru33[1];
FilesBgBlock bg_bid_ru34[1];
FilesBgBlock bg_bid_ru35[1];
FilesBgBlock bg_bid_ru36[1];
FilesBgBlock bg_bid_ru37[1];
FilesBgBlock bg_bid_ru38[1];
FilesBgBlock bg_bid_ru39[1];
FilesBgBlock bg_bid_ru40[1];
FilesBgBlock bg_bid_ru41[1];
FilesBgBlock bg_bid_ru42[1];
FilesBgBlock bg_bid_ru43[1];
FilesBgBlock bg_bid_ru44[1];
FilesBgBlock bg_bid_ru45[1];
FilesBgBlock bg_bid_ru46[1];
FilesBgBlock bg_bid_ru47[1];
FilesBgBlock bg_bid_ru48[1];
FilesBgBlock bg_bid_ru49[1];
FilesBgBlock bg_bid_ru50[1];
FilesBgBlock bg_bid_ru51[1];
FilesBgBlock bg_bid_ru52[1];
FilesBgBlock bg_bid_ru53[1];
FilesBgBlock bg_bid_ru54[1];
FilesBgBlock bg_bid_ru55[1];
FilesBgBlock bg_bid_ru56[1];
FilesBgBlock bg_bid_ru57[1];
FilesBgBlock bg_bid_ru58[1];
FilesBgBlock bg_bid_ru59[1];
FilesBgBlock bg_bid_ru60[1];
FilesBgBlock bg_bid_ru61[1];
FilesBgBlock bg_bid_ru62[1];
FilesBgBlock bg_bid_ru63[1];
FilesBgBlock bg_bid_ru64[1];
FilesBgBlock bg_bid_ru65[1];
FilesBgBlock bg_bid_ru66[1];
FilesBgBlock bg_bid_ru67[1];
FilesBgBlock bg_bid_ru68[1];
FilesBgBlock bg_bid_ru69[1];
FilesBgBlock bg_bid_ru70[1];
FilesBgBlock bg_bid_ru71[1];
FilesBgBlock bg_bid_ru72[1];
FilesBgBlock bg_bid_ru73[1];
FilesBgBlock bg_bid_ru74[1];
FilesBgBlock bg_bid_ru75[1];
FilesBgBlock bg_bid_ru76[1];
FilesBgBlock bg_bid_ru77[1];
FilesBgBlock bg_bid_ru78[1];
FilesBgBlock bg_bid_ru79[1];
FilesBgBlock bg_bid_ru80[1];
int FilesBgBlockMax_ru[1];
FilesBgBlock* FilesBgBlockList_ru[81];


