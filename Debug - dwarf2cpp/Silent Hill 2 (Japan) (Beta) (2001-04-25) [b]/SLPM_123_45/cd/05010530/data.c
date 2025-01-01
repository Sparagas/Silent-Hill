typedef union fsFile;
typedef struct fsCdFile;
typedef struct fsMgcFile;
typedef struct fsMgfFile;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct _anon0;
typedef union fsFileIndex;
typedef struct _anon1;


typedef fsFile type_0[1];
typedef fsFile type_1[1];
typedef char type_2[12];
typedef fsFile type_3[1];
typedef char type_4[14];
typedef fsFileIndex type_5[1];
typedef fsFileIndex type_6[1];
typedef fsFile type_7[1];
typedef char type_8[13];
typedef char type_9[13];
typedef fsFileIndex type_10[1];
typedef fsFileIndex type_11[1];
typedef fsFile type_12[1];
typedef fsFile type_13[1];
typedef char type_14[14];
typedef char type_15[15];
typedef fsFileIndex type_16[1];
typedef fsFileIndex type_17[1];
typedef char type_18[9];
typedef fsFile type_19[1];
typedef fsFile type_20[1];
typedef char type_21[13];
typedef fsFileIndex type_22[1];
typedef fsFileIndex type_23[1];

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

char data_mgf__name[9];
fsFile data_mgf__info[1];
fsFileIndex data_mgf[1];
char data_bg_mgf__name[12];
fsFile data_bg_mgf__info[1];
fsFileIndex data_bg_mgf[1];
char data_chr_mgf__name[13];
fsFile data_chr_mgf__info[1];
fsFileIndex data_chr_mgf[1];
char data_demo_mgf__name[14];
fsFile data_demo_mgf__info[1];
fsFileIndex data_demo_mgf[1];
char data_etc_mgf__name[13];
fsFile data_etc_mgf__info[1];
fsFileIndex data_etc_mgf[1];
char data_menu_mgf__name[14];
fsFile data_menu_mgf__info[1];
fsFileIndex data_menu_mgf[1];
char data_pic_mgf__name[13];
fsFile data_pic_mgf__info[1];
fsFileIndex data_pic_mgf[1];
char data_sound_mgf__name[15];
fsFile data_sound_mgf__info[1];
fsFileIndex data_sound_mgf[1];


