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
typedef fsFile type_1[1];
typedef fsFile type_2[1];
typedef char type_3[24];
typedef fsFileIndex type_4[1];
typedef char type_5[25];
typedef fsFileIndex type_6[1];
typedef fsFile type_7[1];
typedef char type_8[22];
typedef fsFileIndex type_9[1];
typedef char type_10[23];
typedef fsFile type_11[1];
typedef fsFile type_12[1];
typedef fsFileIndex type_13[1];
typedef char type_14[28];
typedef char type_15[17];
typedef fsFileIndex type_16[1];
typedef fsFile type_17[1];
typedef fsFile type_18[1];
typedef char type_19[26];
typedef fsFileIndex type_20[1];

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

char data_pic_etc_mgf__name[17];
fsFile data_pic_etc_mgf__info[1];
fsFileIndex data_pic_etc_mgf[1];
char data_pic_etc_carsol_tex__name[24];
fsFile data_pic_etc_carsol_tex__info[1];
fsFileIndex data_pic_etc_carsol_tex[1];
char data_pic_etc_cesa_tex__name[22];
fsFile data_pic_etc_cesa_tex__info[1];
fsFileIndex data_pic_etc_cesa_tex[1];
char data_pic_etc_comingsoon_tex__name[28];
fsFile data_pic_etc_comingsoon_tex__info[1];
fsFileIndex data_pic_etc_comingsoon_tex[1];
char data_pic_etc_itemmenu_tex__name[26];
fsFile data_pic_etc_itemmenu_tex__info[1];
fsFileIndex data_pic_etc_itemmenu_tex[1];
char data_pic_etc_savebg1_tex__name[25];
fsFile data_pic_etc_savebg1_tex__info[1];
fsFileIndex data_pic_etc_savebg1_tex[1];
char data_pic_etc_title_tex__name[23];
fsFile data_pic_etc_title_tex__info[1];
fsFileIndex data_pic_etc_title_tex[1];


