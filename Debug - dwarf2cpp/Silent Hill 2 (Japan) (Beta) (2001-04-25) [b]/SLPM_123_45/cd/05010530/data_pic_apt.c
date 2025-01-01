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
typedef char type_3[29];
typedef fsFile type_4[1];
typedef fsFileIndex type_5[1];
typedef char type_6[28];
typedef fsFileIndex type_7[1];
typedef fsFile type_8[1];
typedef char type_9[28];
typedef fsFileIndex type_10[1];
typedef char type_11[25];
typedef fsFile type_12[1];
typedef fsFileIndex type_13[1];
typedef fsFile type_14[1];
typedef fsFileIndex type_15[1];
typedef char type_16[28];
typedef char type_17[17];
typedef fsFileIndex type_18[1];
typedef char type_19[26];
typedef fsFile type_20[1];
typedef fsFile type_21[1];
typedef fsFileIndex type_22[1];
typedef char type_23[28];

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

char data_pic_apt_mgf__name[17];
fsFile data_pic_apt_mgf__info[1];
fsFileIndex data_pic_apt_mgf[1];
char data_pic_apt_clock_close_tex__name[29];
fsFile data_pic_apt_clock_close_tex__info[1];
fsFileIndex data_pic_apt_clock_close_tex[1];
char data_pic_apt_clock_hari_tex__name[28];
fsFile data_pic_apt_clock_hari_tex__info[1];
fsFileIndex data_pic_apt_clock_hari_tex[1];
char data_pic_apt_clock_memo_tex__name[28];
fsFile data_pic_apt_clock_memo_tex__info[1];
fsFileIndex data_pic_apt_clock_memo_tex[1];
char data_pic_apt_clock_name_tex__name[28];
fsFile data_pic_apt_clock_name_tex__info[1];
fsFileIndex data_pic_apt_clock_name_tex[1];
char data_pic_apt_clock_open_tex__name[28];
fsFile data_pic_apt_clock_open_tex__info[1];
fsFileIndex data_pic_apt_clock_open_tex[1];
char data_pic_apt_dust_in_tex__name[25];
fsFile data_pic_apt_dust_in_tex__info[1];
fsFileIndex data_pic_apt_dust_in_tex[1];
char data_pic_apt_dust_out_tex__name[26];
fsFile data_pic_apt_dust_out_tex__info[1];
fsFileIndex data_pic_apt_dust_out_tex[1];


