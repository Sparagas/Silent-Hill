typedef union fsFile;
typedef struct fsCdFile;
typedef struct fsMgcFile;
typedef struct fsMgfFile;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct _anon0;
typedef union fsFileIndex;
typedef struct _anon1;


typedef char type_0[17];
typedef fsFileIndex type_1[1];
typedef fsFile type_2[1];
typedef fsFileIndex type_3[1];
typedef char type_4[24];
typedef fsFile type_5[1];
typedef fsFile type_6[1];
typedef char type_7[22];
typedef fsFileIndex type_8[1];
typedef fsFile type_9[1];
typedef char type_10[23];
typedef fsFileIndex type_11[1];
typedef fsFile type_12[1];
typedef fsFileIndex type_13[1];
typedef char type_14[34];

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

char z_data_menu_mc_mgf__name[17];
fsFile z_data_menu_mc_mgf__info[1];
fsFileIndex data_menu_mc_mgf[1];
char z_data_menu_mc_icondata__name[22];
fsFile z_data_menu_mc_icondata__info[1];
fsFileIndex data_menu_mc_icondata[1];
char z_data_menu_mc_icondata2__name[23];
fsFile z_data_menu_mc_icondata2__info[1];
fsFileIndex data_menu_mc_icondata2[1];
char z_data_menu_mc_result_msg_extra_mes__name[34];
fsFile z_data_menu_mc_result_msg_extra_mes__info[1];
fsFileIndex data_menu_mc_result_msg_extra_mes[1];
char z_data_menu_mc_savebg_raw__name[24];
fsFile z_data_menu_mc_savebg_raw__info[1];
fsFileIndex data_menu_mc_savebg_raw[1];


