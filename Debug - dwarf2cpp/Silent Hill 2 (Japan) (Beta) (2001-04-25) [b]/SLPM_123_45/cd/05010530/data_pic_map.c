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
typedef char type_1[30];
typedef fsFile type_2[1];
typedef fsFileIndex type_3[1];
typedef char type_4[27];
typedef fsFileIndex type_5[1];
typedef char type_6[30];
typedef fsFile type_7[1];
typedef fsFile type_8[1];
typedef fsFile type_9[1];
typedef fsFileIndex type_10[1];
typedef char type_11[29];
typedef fsFileIndex type_12[1];
typedef char type_13[30];
typedef fsFile type_14[1];
typedef fsFile type_15[1];
typedef fsFileIndex type_16[1];
typedef char type_17[30];
typedef fsFileIndex type_18[1];
typedef char type_19[30];
typedef fsFile type_20[1];
typedef fsFileIndex type_21[1];
typedef char type_22[31];
typedef fsFileIndex type_23[1];
typedef char type_24[30];
typedef fsFile type_25[1];
typedef fsFile type_26[1];
typedef char type_27[29];
typedef fsFileIndex type_28[1];
typedef char type_29[30];
typedef fsFile type_30[1];
typedef fsFile type_31[1];
typedef fsFileIndex type_32[1];
typedef char type_33[30];
typedef fsFileIndex type_34[1];
typedef char type_35[30];
typedef fsFile type_36[1];
typedef fsFile type_37[1];
typedef fsFileIndex type_38[1];
typedef char type_39[31];
typedef fsFileIndex type_40[1];
typedef fsFile type_41[1];
typedef fsFile type_42[1];
typedef fsFileIndex type_43[1];
typedef char type_44[29];
typedef fsFileIndex type_45[1];
typedef char type_46[30];
typedef char type_47[17];
typedef fsFile type_48[1];
typedef fsFile type_49[1];
typedef fsFileIndex type_50[1];
typedef char type_51[30];
typedef fsFileIndex type_52[1];
typedef char type_53[30];
typedef fsFile type_54[1];
typedef fsFile type_55[1];
typedef fsFileIndex type_56[1];
typedef fsFileIndex type_57[1];
typedef char type_58[31];
typedef fsFile type_59[1];
typedef fsFile type_60[1];
typedef fsFileIndex type_61[1];
typedef char type_62[30];

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

char data_pic_map_mgf__name[17];
fsFile data_pic_map_mgf__info[1];
fsFileIndex data_pic_map_mgf[1];
char data_pic_map_apartmape1f_tex__name[29];
fsFile data_pic_map_apartmape1f_tex__info[1];
fsFileIndex data_pic_map_apartmape1f_tex[1];
char data_pic_map_apartmape2f_tex__name[29];
fsFile data_pic_map_apartmape2f_tex__info[1];
fsFileIndex data_pic_map_apartmape2f_tex[1];
char data_pic_map_apartmape3f_tex__name[29];
fsFile data_pic_map_apartmape3f_tex__info[1];
fsFileIndex data_pic_map_apartmape3f_tex[1];
char data_pic_map_apartmapew1f_tex__name[30];
fsFile data_pic_map_apartmapew1f_tex__info[1];
fsFileIndex data_pic_map_apartmapew1f_tex[1];
char data_pic_map_apartmapew2f_tex__name[30];
fsFile data_pic_map_apartmapew2f_tex__info[1];
fsFileIndex data_pic_map_apartmapew2f_tex[1];
char data_pic_map_apartmapew3f_tex__name[30];
fsFile data_pic_map_apartmapew3f_tex__info[1];
fsFileIndex data_pic_map_apartmapew3f_tex[1];
char data_pic_map_apartmapmark_tex__name[30];
fsFile data_pic_map_apartmapmark_tex__info[1];
fsFileIndex data_pic_map_apartmapmark_tex[1];
char data_pic_map_apartmapw_tex__name[27];
fsFile data_pic_map_apartmapw_tex__info[1];
fsFileIndex data_pic_map_apartmapw_tex[1];
char data_pic_map_hospitalmap01_tex__name[31];
fsFile data_pic_map_hospitalmap01_tex__info[1];
fsFileIndex data_pic_map_hospitalmap01_tex[1];
char data_pic_map_hospitalmap02_tex__name[31];
fsFile data_pic_map_hospitalmap02_tex__info[1];
fsFileIndex data_pic_map_hospitalmap02_tex[1];
char data_pic_map_hospitalmapmk_tex__name[31];
fsFile data_pic_map_hospitalmapmk_tex__info[1];
fsFileIndex data_pic_map_hospitalmapmk_tex[1];
char data_pic_map_hotelmap1f01_tex__name[30];
fsFile data_pic_map_hotelmap1f01_tex__info[1];
fsFileIndex data_pic_map_hotelmap1f01_tex[1];
char data_pic_map_hotelmap1f02_tex__name[30];
fsFile data_pic_map_hotelmap1f02_tex__info[1];
fsFileIndex data_pic_map_hotelmap1f02_tex[1];
char data_pic_map_hotelmap2f01_tex__name[30];
fsFile data_pic_map_hotelmap2f01_tex__info[1];
fsFileIndex data_pic_map_hotelmap2f01_tex[1];
char data_pic_map_hotelmap2f02_tex__name[30];
fsFile data_pic_map_hotelmap2f02_tex__info[1];
fsFileIndex data_pic_map_hotelmap2f02_tex[1];
char data_pic_map_hotelmap3f01_tex__name[30];
fsFile data_pic_map_hotelmap3f01_tex__info[1];
fsFileIndex data_pic_map_hotelmap3f01_tex[1];
char data_pic_map_hotelmap3f02_tex__name[30];
fsFile data_pic_map_hotelmap3f02_tex__info[1];
fsFileIndex data_pic_map_hotelmap3f02_tex[1];
char data_pic_map_hotelmapbf01_tex__name[30];
fsFile data_pic_map_hotelmapbf01_tex__info[1];
fsFileIndex data_pic_map_hotelmapbf01_tex[1];
char data_pic_map_hotelmapbf02_tex__name[30];
fsFile data_pic_map_hotelmapbf02_tex__info[1];
fsFileIndex data_pic_map_hotelmapbf02_tex[1];
char data_pic_map_hotelmapmark_tex__name[30];
fsFile data_pic_map_hotelmapmark_tex__info[1];
fsFileIndex data_pic_map_hotelmapmark_tex[1];


