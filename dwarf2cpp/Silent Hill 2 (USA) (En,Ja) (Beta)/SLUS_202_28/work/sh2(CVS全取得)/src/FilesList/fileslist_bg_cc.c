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
typedef FilesBgBlock* type_60[81];
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

FilesBgBlock bg_bid_cc00[1];
FilesBgBlock bg_bid_cc01[1];
FilesBgBlock bg_bid_cc02[1];
FilesBgBlock bg_bid_cc03[1];
FilesBgBlock bg_bid_cc04[1];
FilesBgBlock bg_bid_cc05[1];
FilesBgBlock bg_bid_cc06[1];
FilesBgBlock bg_bid_cc07[1];
FilesBgBlock bg_bid_cc08[1];
FilesBgBlock bg_bid_cc09[1];
FilesBgBlock bg_bid_cc10[1];
FilesBgBlock bg_bid_cc11[1];
FilesBgBlock bg_bid_cc12[1];
FilesBgBlock bg_bid_cc13[1];
FilesBgBlock bg_bid_cc14[1];
FilesBgBlock bg_bid_cc15[1];
FilesBgBlock bg_bid_cc16[1];
FilesBgBlock bg_bid_cc17[1];
FilesBgBlock bg_bid_cc18[1];
FilesBgBlock bg_bid_cc19[1];
FilesBgBlock bg_bid_cc20[1];
FilesBgBlock bg_bid_cc21[1];
FilesBgBlock bg_bid_cc22[1];
FilesBgBlock bg_bid_cc23[1];
FilesBgBlock bg_bid_cc24[1];
FilesBgBlock bg_bid_cc25[1];
FilesBgBlock bg_bid_cc26[1];
FilesBgBlock bg_bid_cc27[1];
FilesBgBlock bg_bid_cc28[1];
FilesBgBlock bg_bid_cc29[1];
FilesBgBlock bg_bid_cc30[1];
FilesBgBlock bg_bid_cc31[1];
FilesBgBlock bg_bid_cc32[1];
FilesBgBlock bg_bid_cc33[1];
FilesBgBlock bg_bid_cc34[1];
FilesBgBlock bg_bid_cc35[1];
FilesBgBlock bg_bid_cc36[1];
FilesBgBlock bg_bid_cc37[1];
FilesBgBlock bg_bid_cc38[1];
FilesBgBlock bg_bid_cc39[1];
FilesBgBlock bg_bid_cc40[1];
FilesBgBlock bg_bid_cc41[1];
FilesBgBlock bg_bid_cc42[1];
FilesBgBlock bg_bid_cc43[1];
FilesBgBlock bg_bid_cc44[1];
FilesBgBlock bg_bid_cc45[1];
FilesBgBlock bg_bid_cc46[1];
FilesBgBlock bg_bid_cc47[1];
FilesBgBlock bg_bid_cc48[1];
FilesBgBlock bg_bid_cc49[1];
FilesBgBlock bg_bid_cc50[1];
FilesBgBlock bg_bid_cc51[1];
FilesBgBlock bg_bid_cc52[1];
FilesBgBlock bg_bid_cc53[1];
FilesBgBlock bg_bid_cc54[1];
FilesBgBlock bg_bid_cc55[1];
FilesBgBlock bg_bid_cc56[1];
FilesBgBlock bg_bid_cc57[1];
FilesBgBlock bg_bid_cc58[1];
FilesBgBlock bg_bid_cc59[1];
FilesBgBlock bg_bid_cc60[1];
FilesBgBlock bg_bid_cc61[1];
FilesBgBlock bg_bid_cc62[1];
FilesBgBlock bg_bid_cc63[1];
FilesBgBlock bg_bid_cc64[1];
FilesBgBlock bg_bid_cc65[1];
FilesBgBlock bg_bid_cc66[1];
FilesBgBlock bg_bid_cc67[1];
FilesBgBlock bg_bid_cc68[1];
FilesBgBlock bg_bid_cc69[1];
FilesBgBlock bg_bid_cc70[1];
FilesBgBlock bg_bid_cc71[1];
FilesBgBlock bg_bid_cc72[1];
FilesBgBlock bg_bid_cc73[1];
FilesBgBlock bg_bid_cc74[1];
FilesBgBlock bg_bid_cc75[1];
FilesBgBlock bg_bid_cc76[1];
FilesBgBlock bg_bid_cc77[1];
FilesBgBlock bg_bid_cc78[1];
FilesBgBlock bg_bid_cc79[1];
FilesBgBlock bg_bid_cc80[1];
int FilesBgBlockMax_cc[1];
FilesBgBlock* FilesBgBlockList_cc[81];


