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
typedef FilesBgBlock* type_73[121];
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
typedef FilesBgBlock type_103[1];
typedef FilesBgBlock type_104[1];
typedef FilesBgBlock type_105[1];
typedef FilesBgBlock type_106[1];
typedef FilesBgBlock type_107[1];
typedef FilesBgBlock type_108[1];
typedef FilesBgBlock type_109[1];
typedef FilesBgBlock type_110[1];
typedef FilesBgBlock type_111[1];
typedef FilesBgBlock type_112[1];
typedef int type_113[1];
typedef FilesBgBlock type_114[1];
typedef FilesBgBlock type_115[1];
typedef FilesBgBlock type_116[1];
typedef FilesBgBlock type_117[1];
typedef FilesBgBlock type_118[1];
typedef FilesBgBlock type_119[1];
typedef FilesBgBlock type_120[1];
typedef FilesBgBlock type_121[1];
typedef FilesBgBlock type_122[1];

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

FilesBgBlock bg_bid_ap00[1];
FilesBgBlock bg_bid_ap01[1];
FilesBgBlock bg_bid_ap02[1];
FilesBgBlock bg_bid_ap03[1];
FilesBgBlock bg_bid_ap04[1];
FilesBgBlock bg_bid_ap05[1];
FilesBgBlock bg_bid_ap06[1];
FilesBgBlock bg_bid_ap07[1];
FilesBgBlock bg_bid_ap08[1];
FilesBgBlock bg_bid_ap09[1];
FilesBgBlock bg_bid_ap10[1];
FilesBgBlock bg_bid_ap11[1];
FilesBgBlock bg_bid_ap12[1];
FilesBgBlock bg_bid_ap13[1];
FilesBgBlock bg_bid_ap14[1];
FilesBgBlock bg_bid_ap15[1];
FilesBgBlock bg_bid_ap16[1];
FilesBgBlock bg_bid_ap17[1];
FilesBgBlock bg_bid_ap18[1];
FilesBgBlock bg_bid_ap19[1];
FilesBgBlock bg_bid_ap20[1];
FilesBgBlock bg_bid_ap21[1];
FilesBgBlock bg_bid_ap22[1];
FilesBgBlock bg_bid_ap23[1];
FilesBgBlock bg_bid_ap24[1];
FilesBgBlock bg_bid_ap25[1];
FilesBgBlock bg_bid_ap26[1];
FilesBgBlock bg_bid_ap27[1];
FilesBgBlock bg_bid_ap28[1];
FilesBgBlock bg_bid_ap29[1];
FilesBgBlock bg_bid_ap30[1];
FilesBgBlock bg_bid_ap31[1];
FilesBgBlock bg_bid_ap32[1];
FilesBgBlock bg_bid_ap33[1];
FilesBgBlock bg_bid_ap34[1];
FilesBgBlock bg_bid_ap35[1];
FilesBgBlock bg_bid_ap36[1];
FilesBgBlock bg_bid_ap37[1];
FilesBgBlock bg_bid_ap38[1];
FilesBgBlock bg_bid_ap39[1];
FilesBgBlock bg_bid_ap40[1];
FilesBgBlock bg_bid_ap41[1];
FilesBgBlock bg_bid_ap42[1];
FilesBgBlock bg_bid_ap43[1];
FilesBgBlock bg_bid_ap44[1];
FilesBgBlock bg_bid_ap45[1];
FilesBgBlock bg_bid_ap46[1];
FilesBgBlock bg_bid_ap47[1];
FilesBgBlock bg_bid_ap48[1];
FilesBgBlock bg_bid_ap49[1];
FilesBgBlock bg_bid_ap50[1];
FilesBgBlock bg_bid_ap51[1];
FilesBgBlock bg_bid_ap52[1];
FilesBgBlock bg_bid_ap53[1];
FilesBgBlock bg_bid_ap54[1];
FilesBgBlock bg_bid_ap55[1];
FilesBgBlock bg_bid_ap56[1];
FilesBgBlock bg_bid_ap57[1];
FilesBgBlock bg_bid_ap58[1];
FilesBgBlock bg_bid_ap59[1];
FilesBgBlock bg_bid_ap60[1];
FilesBgBlock bg_bid_ap61[1];
FilesBgBlock bg_bid_ap62[1];
FilesBgBlock bg_bid_ap63[1];
FilesBgBlock bg_bid_ap64[1];
FilesBgBlock bg_bid_ap65[1];
FilesBgBlock bg_bid_ap66[1];
FilesBgBlock bg_bid_ap67[1];
FilesBgBlock bg_bid_ap68[1];
FilesBgBlock bg_bid_ap69[1];
FilesBgBlock bg_bid_ap70[1];
FilesBgBlock bg_bid_ap71[1];
FilesBgBlock bg_bid_ap72[1];
FilesBgBlock bg_bid_ap73[1];
FilesBgBlock bg_bid_ap74[1];
FilesBgBlock bg_bid_ap75[1];
FilesBgBlock bg_bid_ap76[1];
FilesBgBlock bg_bid_ap77[1];
FilesBgBlock bg_bid_ap78[1];
FilesBgBlock bg_bid_ap79[1];
FilesBgBlock bg_bid_ap80[1];
FilesBgBlock bg_bid_ap81[1];
FilesBgBlock bg_bid_ap82[1];
FilesBgBlock bg_bid_ap83[1];
FilesBgBlock bg_bid_ap84[1];
FilesBgBlock bg_bid_ap85[1];
FilesBgBlock bg_bid_ap86[1];
FilesBgBlock bg_bid_ap87[1];
FilesBgBlock bg_bid_ap88[1];
FilesBgBlock bg_bid_ap89[1];
FilesBgBlock bg_bid_ap90[1];
FilesBgBlock bg_bid_ap91[1];
FilesBgBlock bg_bid_ap92[1];
FilesBgBlock bg_bid_ap93[1];
FilesBgBlock bg_bid_ap94[1];
FilesBgBlock bg_bid_ap95[1];
FilesBgBlock bg_bid_ap96[1];
FilesBgBlock bg_bid_ap97[1];
FilesBgBlock bg_bid_ap98[1];
FilesBgBlock bg_bid_ap99[1];
FilesBgBlock bg_bid_ap100[1];
FilesBgBlock bg_bid_ap101[1];
FilesBgBlock bg_bid_ap102[1];
FilesBgBlock bg_bid_ap103[1];
FilesBgBlock bg_bid_ap104[1];
FilesBgBlock bg_bid_ap105[1];
FilesBgBlock bg_bid_ap106[1];
FilesBgBlock bg_bid_ap107[1];
FilesBgBlock bg_bid_ap108[1];
FilesBgBlock bg_bid_ap109[1];
FilesBgBlock bg_bid_ap110[1];
FilesBgBlock bg_bid_ap111[1];
FilesBgBlock bg_bid_ap112[1];
FilesBgBlock bg_bid_ap113[1];
FilesBgBlock bg_bid_ap114[1];
FilesBgBlock bg_bid_ap115[1];
FilesBgBlock bg_bid_ap116[1];
FilesBgBlock bg_bid_ap117[1];
FilesBgBlock bg_bid_ap118[1];
FilesBgBlock bg_bid_ap119[1];
FilesBgBlock bg_bid_ap120[1];
int FilesBgBlockMax_ap[1];
FilesBgBlock* FilesBgBlockList_ap[121];


