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
typedef char type_1[31];
typedef fsFileIndex type_2[1];
typedef char type_3[29];
typedef char type_4[29];
typedef fsFile type_5[1];
typedef char type_6[20];
typedef fsFileIndex type_7[1];
typedef fsFile type_8[1];
typedef char type_9[32];
typedef fsFile type_10[1];
typedef fsFileIndex type_11[1];
typedef char type_12[30];
typedef fsFileIndex type_13[1];
typedef fsFileIndex type_14[1];
typedef fsFile type_15[1];
typedef char type_16[30];
typedef fsFile type_17[1];
typedef fsFile type_18[1];
typedef fsFileIndex type_19[1];
typedef char type_20[32];
typedef fsFileIndex type_21[1];
typedef fsFile type_22[1];
typedef char type_23[30];
typedef fsFileIndex type_24[1];
typedef fsFile type_25[1];
typedef char type_26[30];
typedef fsFile type_27[1];
typedef fsFileIndex type_28[1];
typedef fsFileIndex type_29[1];
typedef char type_30[30];
typedef fsFileIndex type_31[1];
typedef char type_32[29];
typedef char type_33[29];
typedef fsFile type_34[1];
typedef fsFileIndex type_35[1];
typedef fsFile type_36[1];
typedef char type_37[32];
typedef fsFileIndex type_38[1];
typedef fsFile type_39[1];
typedef char type_40[30];
typedef fsFileIndex type_41[1];
typedef fsFileIndex type_42[1];
typedef fsFile type_43[1];
typedef char type_44[31];
typedef fsFile type_45[1];
typedef fsFile type_46[1];
typedef fsFileIndex type_47[1];
typedef fsFile type_48[1];
typedef char type_49[31];
typedef fsFileIndex type_50[1];
typedef char type_51[28];
typedef fsFile type_52[1];
typedef char type_53[29];
typedef fsFileIndex type_54[1];
typedef fsFile type_55[1];
typedef char type_56[31];
typedef fsFileIndex type_57[1];
typedef fsFile type_58[1];
typedef fsFileIndex type_59[1];
typedef char type_60[28];
typedef fsFileIndex type_61[1];
typedef char type_62[29];
typedef char type_63[28];
typedef fsFile type_64[1];
typedef fsFileIndex type_65[1];
typedef fsFile type_66[1];
typedef char type_67[32];
typedef fsFileIndex type_68[1];
typedef fsFile type_69[1];
typedef char type_70[26];
typedef fsFileIndex type_71[1];
typedef char type_72[27];
typedef fsFile type_73[1];
typedef fsFile type_74[1];
typedef fsFile type_75[1];
typedef fsFileIndex type_76[1];
typedef char type_77[27];
typedef fsFileIndex type_78[1];
typedef char type_79[29];
typedef fsFile type_80[1];
typedef char type_81[29];
typedef fsFileIndex type_82[1];
typedef fsFile type_83[1];
typedef char type_84[27];
typedef fsFileIndex type_85[1];
typedef fsFile type_86[1];
typedef char type_87[28];
typedef fsFileIndex type_88[1];
typedef fsFileIndex type_89[1];
typedef char type_90[31];
typedef fsFile type_91[1];
typedef fsFile type_92[1];
typedef fsFileIndex type_93[1];
typedef fsFile type_94[1];
typedef char type_95[32];
typedef fsFileIndex type_96[1];
typedef fsFile type_97[1];
typedef char type_98[24];
typedef fsFileIndex type_99[1];
typedef fsFile type_100[1];
typedef char type_101[30];
typedef fsFileIndex type_102[1];
typedef fsFile type_103[1];
typedef fsFile type_104[1];

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

char z_data_pic_effect_mgf__name[20];
fsFile z_data_pic_effect_mgf__info[1];
fsFileIndex data_pic_effect_mgf[1];
char z_data_pic_effect_apstair00_tbn2__name[31];
fsFile z_data_pic_effect_apstair00_tbn2__info[1];
fsFileIndex data_pic_effect_apstair00_tbn2[1];
char z_data_pic_effect_bar00_tbn2__name[27];
fsFile z_data_pic_effect_bar00_tbn2__info[1];
fsFileIndex data_pic_effect_bar00_tbn2[1];
char z_data_pic_effect_bloodtex0_tbn2__name[31];
fsFile z_data_pic_effect_bloodtex0_tbn2__info[1];
fsFileIndex data_pic_effect_bloodtex0_tbn2[1];
char z_data_pic_effect_boatmask_tbn2__name[30];
fsFile z_data_pic_effect_boatmask_tbn2__info[1];
fsFileIndex data_pic_effect_boatmask_tbn2[1];
char z_data_pic_effect_fire00_tbn2__name[28];
fsFile z_data_pic_effect_fire00_tbn2__info[1];
fsFileIndex data_pic_effect_fire00_tbn2[1];
char z_data_pic_effect_fire01_tbn2__name[28];
fsFile z_data_pic_effect_fire01_tbn2__info[1];
fsFileIndex data_pic_effect_fire01_tbn2[1];
char z_data_pic_effect_flame003_tbn2__name[30];
fsFile z_data_pic_effect_flame003_tbn2__info[1];
fsFileIndex data_pic_effect_flame003_tbn2[1];
char z_data_pic_effect_flame032_tbn2__name[30];
fsFile z_data_pic_effect_flame032_tbn2__info[1];
fsFileIndex data_pic_effect_flame032_tbn2[1];
char z_data_pic_effect_fly1_tbn2__name[26];
fsFile z_data_pic_effect_fly1_tbn2__info[1];
fsFileIndex data_pic_effect_fly1_tbn2[1];
char z_data_pic_effect_fog_tex__name[24];
fsFile z_data_pic_effect_fog_tex__info[1];
fsFileIndex data_pic_effect_fog_tex[1];
char z_data_pic_effect_footmark_tbn2__name[30];
fsFile z_data_pic_effect_footmark_tbn2__info[1];
fsFileIndex data_pic_effect_footmark_tbn2[1];
char z_data_pic_effect_gesui00_tbn2__name[29];
fsFile z_data_pic_effect_gesui00_tbn2__info[1];
fsFileIndex data_pic_effect_gesui00_tbn2[1];
char z_data_pic_effect_gesui01_tbn2__name[29];
fsFile z_data_pic_effect_gesui01_tbn2__info[1];
fsFileIndex data_pic_effect_gesui01_tbn2[1];
char z_data_pic_effect_gesui02_tbn2__name[29];
fsFile z_data_pic_effect_gesui02_tbn2__info[1];
fsFileIndex data_pic_effect_gesui02_tbn2[1];
char z_data_pic_effect_gesui03_tbn2__name[29];
fsFile z_data_pic_effect_gesui03_tbn2__info[1];
fsFileIndex data_pic_effect_gesui03_tbn2[1];
char z_data_pic_effect_glas03_tbn2__name[28];
fsFile z_data_pic_effect_glas03_tbn2__info[1];
fsFileIndex data_pic_effect_glas03_tbn2[1];
char z_data_pic_effect_hbstair00_tbn2__name[31];
fsFile z_data_pic_effect_hbstair00_tbn2__info[1];
fsFileIndex data_pic_effect_hbstair00_tbn2[1];
char z_data_pic_effect_hibana01_tbn2__name[30];
fsFile z_data_pic_effect_hibana01_tbn2__info[1];
fsFileIndex data_pic_effect_hibana01_tbn2[1];
char z_data_pic_effect_kitchen00_tbn2__name[31];
fsFile z_data_pic_effect_kitchen00_tbn2__info[1];
fsFileIndex data_pic_effect_kitchen00_tbn2[1];
char z_data_pic_effect_msi00_tbn2__name[27];
fsFile z_data_pic_effect_msi00_tbn2__info[1];
fsFileIndex data_pic_effect_msi00_tbn2[1];
char z_data_pic_effect_passba00_tbn2__name[30];
fsFile z_data_pic_effect_passba00_tbn2__info[1];
fsFileIndex data_pic_effect_passba00_tbn2[1];
char z_data_pic_effect_passbb00_tbn2__name[30];
fsFile z_data_pic_effect_passbb00_tbn2__info[1];
fsFileIndex data_pic_effect_passbb00_tbn2[1];
char z_data_pic_effect_playable0_tbn2__name[31];
fsFile z_data_pic_effect_playable0_tbn2__info[1];
fsFileIndex data_pic_effect_playable0_tbn2[1];
char z_data_pic_effect_poison_tex__name[27];
fsFile z_data_pic_effect_poison_tex__info[1];
fsFileIndex data_pic_effect_poison_tex[1];
char z_data_pic_effect_psground00_tbn2__name[32];
fsFile z_data_pic_effect_psground00_tbn2__info[1];
fsFileIndex data_pic_effect_psground00_tbn2[1];
char z_data_pic_effect_psground01_tbn2__name[32];
fsFile z_data_pic_effect_psground01_tbn2__info[1];
fsFileIndex data_pic_effect_psground01_tbn2[1];
char z_data_pic_effect_psground02_tbn2__name[32];
fsFile z_data_pic_effect_psground02_tbn2__info[1];
fsFileIndex data_pic_effect_psground02_tbn2[1];
char z_data_pic_effect_psground03_tbn2__name[32];
fsFile z_data_pic_effect_psground03_tbn2__info[1];
fsFileIndex data_pic_effect_psground03_tbn2[1];
char z_data_pic_effect_psground04_tbn2__name[32];
fsFile z_data_pic_effect_psground04_tbn2__info[1];
fsFileIndex data_pic_effect_psground04_tbn2[1];
char z_data_pic_effect_smok01_tbn2__name[28];
fsFile z_data_pic_effect_smok01_tbn2__info[1];
fsFileIndex data_pic_effect_smok01_tbn2[1];
char z_data_pic_effect_water00_tbn2__name[29];
fsFile z_data_pic_effect_water00_tbn2__info[1];
fsFileIndex data_pic_effect_water00_tbn2[1];
char z_data_pic_effect_water01_tbn2__name[29];
fsFile z_data_pic_effect_water01_tbn2__info[1];
fsFileIndex data_pic_effect_water01_tbn2[1];
char z_data_pic_effect_water02_tbn2__name[29];
fsFile z_data_pic_effect_water02_tbn2__info[1];
fsFileIndex data_pic_effect_water02_tbn2[1];
char z_data_pic_effect_water40_tbn2__name[29];
fsFile z_data_pic_effect_water40_tbn2__info[1];
fsFileIndex data_pic_effect_water40_tbn2[1];


