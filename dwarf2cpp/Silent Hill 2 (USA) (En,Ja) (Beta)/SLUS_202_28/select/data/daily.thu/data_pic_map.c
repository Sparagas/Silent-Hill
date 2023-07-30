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
typedef char type_1[29];
typedef fsFile type_2[1];
typedef fsFileIndex type_3[1];
typedef char type_4[17];
typedef fsFile type_5[1];
typedef char type_6[30];
typedef fsFileIndex type_7[1];
typedef fsFile type_8[1];
typedef char type_9[27];
typedef fsFileIndex type_10[1];
typedef char type_11[30];
typedef fsFile type_12[1];
typedef fsFile type_13[1];
typedef fsFileIndex type_14[1];
typedef char type_15[30];
typedef fsFileIndex type_16[1];
typedef fsFile type_17[1];
typedef char type_18[33];
typedef fsFileIndex type_19[1];
typedef fsFile type_20[1];
typedef char type_21[31];
typedef fsFile type_22[1];
typedef fsFileIndex type_23[1];
typedef char type_24[25];
typedef fsFileIndex type_25[1];
typedef char type_26[30];
typedef fsFile type_27[1];
typedef fsFileIndex type_28[1];
typedef fsFile type_29[1];
typedef char type_30[30];
typedef fsFileIndex type_31[1];
typedef fsFile type_32[1];
typedef char type_33[33];
typedef fsFileIndex type_34[1];
typedef char type_35[27];
typedef fsFile type_36[1];
typedef fsFile type_37[1];
typedef fsFileIndex type_38[1];
typedef char type_39[30];
typedef fsFile type_40[1];
typedef fsFileIndex type_41[1];
typedef char type_42[29];
typedef fsFile type_43[1];
typedef fsFileIndex type_44[1];
typedef fsFile type_45[1];
typedef char type_46[30];
typedef fsFile type_47[1];
typedef fsFileIndex type_48[1];
typedef char type_49[28];
typedef fsFileIndex type_50[1];
typedef char type_51[30];
typedef fsFile type_52[1];
typedef fsFileIndex type_53[1];
typedef fsFile type_54[1];
typedef char type_55[30];
typedef fsFileIndex type_56[1];
typedef fsFile type_57[1];
typedef char type_58[33];
typedef fsFileIndex type_59[1];
typedef fsFile type_60[1];
typedef char type_61[31];
typedef fsFile type_62[1];
typedef fsFileIndex type_63[1];
typedef char type_64[30];
typedef fsFileIndex type_65[1];
typedef char type_66[29];
typedef fsFile type_67[1];
typedef fsFileIndex type_68[1];
typedef fsFile type_69[1];
typedef char type_70[30];
typedef fsFile type_71[1];
typedef fsFileIndex type_72[1];
typedef char type_73[25];
typedef fsFileIndex type_74[1];
typedef char type_75[30];
typedef fsFile type_76[1];
typedef fsFile type_77[1];
typedef fsFileIndex type_78[1];
typedef fsFileIndex type_79[1];
typedef char type_80[30];
typedef fsFile type_81[1];
typedef char type_82[29];
typedef fsFileIndex type_83[1];
typedef fsFile type_84[1];
typedef char type_85[31];
typedef fsFile type_86[1];
typedef fsFileIndex type_87[1];
typedef fsFileIndex type_88[1];
typedef char type_89[24];

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

char z_data_pic_map_mgf__name[17];
fsFile z_data_pic_map_mgf__info[1];
fsFileIndex data_pic_map_mgf[1];
char z_data_pic_map_apartmape1f_tex__name[29];
fsFile z_data_pic_map_apartmape1f_tex__info[1];
fsFileIndex data_pic_map_apartmape1f_tex[1];
char z_data_pic_map_apartmape2f_tex__name[29];
fsFile z_data_pic_map_apartmape2f_tex__info[1];
fsFileIndex data_pic_map_apartmape2f_tex[1];
char z_data_pic_map_apartmape3f_tex__name[29];
fsFile z_data_pic_map_apartmape3f_tex__info[1];
fsFileIndex data_pic_map_apartmape3f_tex[1];
char z_data_pic_map_apartmapew1f_tex__name[30];
fsFile z_data_pic_map_apartmapew1f_tex__info[1];
fsFileIndex data_pic_map_apartmapew1f_tex[1];
char z_data_pic_map_apartmapew2f_tex__name[30];
fsFile z_data_pic_map_apartmapew2f_tex__info[1];
fsFileIndex data_pic_map_apartmapew2f_tex[1];
char z_data_pic_map_apartmapew3f_tex__name[30];
fsFile z_data_pic_map_apartmapew3f_tex__info[1];
fsFileIndex data_pic_map_apartmapew3f_tex[1];
char z_data_pic_map_apartmapmark_tex__name[30];
fsFile z_data_pic_map_apartmapmark_tex__info[1];
fsFileIndex data_pic_map_apartmapmark_tex[1];
char z_data_pic_map_apartmapw_tex__name[27];
fsFile z_data_pic_map_apartmapw_tex__info[1];
fsFileIndex data_pic_map_apartmapw_tex[1];
char z_data_pic_map_hospitalmap01_tex__name[31];
fsFile z_data_pic_map_hospitalmap01_tex__info[1];
fsFileIndex data_pic_map_hospitalmap01_tex[1];
char z_data_pic_map_hospitalmap02_tex__name[31];
fsFile z_data_pic_map_hospitalmap02_tex__info[1];
fsFileIndex data_pic_map_hospitalmap02_tex[1];
char z_data_pic_map_hospitalmapmk_tex__name[31];
fsFile z_data_pic_map_hospitalmapmk_tex__info[1];
fsFileIndex data_pic_map_hospitalmapmk_tex[1];
char z_data_pic_map_hotelmap1f01_tex__name[30];
fsFile z_data_pic_map_hotelmap1f01_tex__info[1];
fsFileIndex data_pic_map_hotelmap1f01_tex[1];
char z_data_pic_map_hotelmap1f02_tex__name[30];
fsFile z_data_pic_map_hotelmap1f02_tex__info[1];
fsFileIndex data_pic_map_hotelmap1f02_tex[1];
char z_data_pic_map_hotelmap2f01_tex__name[30];
fsFile z_data_pic_map_hotelmap2f01_tex__info[1];
fsFileIndex data_pic_map_hotelmap2f01_tex[1];
char z_data_pic_map_hotelmap2f02_tex__name[30];
fsFile z_data_pic_map_hotelmap2f02_tex__info[1];
fsFileIndex data_pic_map_hotelmap2f02_tex[1];
char z_data_pic_map_hotelmap3f01_tex__name[30];
fsFile z_data_pic_map_hotelmap3f01_tex__info[1];
fsFileIndex data_pic_map_hotelmap3f01_tex[1];
char z_data_pic_map_hotelmap3f02_tex__name[30];
fsFile z_data_pic_map_hotelmap3f02_tex__info[1];
fsFileIndex data_pic_map_hotelmap3f02_tex[1];
char z_data_pic_map_hotelmapbf01_tex__name[30];
fsFile z_data_pic_map_hotelmapbf01_tex__info[1];
fsFileIndex data_pic_map_hotelmapbf01_tex[1];
char z_data_pic_map_hotelmapbf02_tex__name[30];
fsFile z_data_pic_map_hotelmapbf02_tex__info[1];
fsFileIndex data_pic_map_hotelmapbf02_tex[1];
char z_data_pic_map_hotelmapmark_tex__name[30];
fsFile z_data_pic_map_hotelmapmark_tex__info[1];
fsFileIndex data_pic_map_hotelmapmark_tex[1];
char z_data_pic_map_outmap_tex__name[24];
fsFile z_data_pic_map_outmap_tex__info[1];
fsFileIndex data_pic_map_outmap_tex[1];
char z_data_pic_map_outmape_tex__name[25];
fsFile z_data_pic_map_outmape_tex__info[1];
fsFileIndex data_pic_map_outmape_tex[1];
char z_data_pic_map_outmapmark_tex__name[28];
fsFile z_data_pic_map_outmapmark_tex__info[1];
fsFileIndex data_pic_map_outmapmark_tex[1];
char z_data_pic_map_outmapw_tex__name[25];
fsFile z_data_pic_map_outmapw_tex__info[1];
fsFileIndex data_pic_map_outmapw_tex[1];
char z_data_pic_map_prisonmap_tex__name[27];
fsFile z_data_pic_map_prisonmap_tex__info[1];
fsFileIndex data_pic_map_prisonmap_tex[1];
char z_data_pic_map_prisonmap01mark_tex__name[33];
fsFile z_data_pic_map_prisonmap01mark_tex__info[1];
fsFileIndex data_pic_map_prisonmap01mark_tex[1];
char z_data_pic_map_prisonmap02mark_tex__name[33];
fsFile z_data_pic_map_prisonmap02mark_tex__info[1];
fsFileIndex data_pic_map_prisonmap02mark_tex[1];
char z_data_pic_map_prisonmap03_tex__name[29];
fsFile z_data_pic_map_prisonmap03_tex__info[1];
fsFileIndex data_pic_map_prisonmap03_tex[1];
char z_data_pic_map_prisonmap03mark_tex__name[33];
fsFile z_data_pic_map_prisonmap03mark_tex__info[1];
fsFileIndex data_pic_map_prisonmap03mark_tex[1];


