typedef union fsFile;
typedef struct fsCdFile;
typedef struct fsMgcFile;
typedef struct fsMgfFile;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct _anon0;
typedef union fsFileIndex;
typedef struct _anon1;


typedef char type_0[22];
typedef fsFileIndex type_1[1];
typedef char type_2[15];
typedef char type_3[21];
typedef fsFileIndex type_4[1];
typedef fsFile type_5[1];
typedef fsFileIndex type_6[1];
typedef fsFile type_7[1];
typedef char type_8[21];
typedef fsFileIndex type_9[1];
typedef fsFile type_10[1];
typedef fsFile type_11[1];
typedef char type_12[24];
typedef fsFileIndex type_13[1];
typedef fsFile type_14[1];
typedef char type_15[24];
typedef fsFileIndex type_16[1];
typedef fsFile type_17[1];
typedef char type_18[22];
typedef fsFileIndex type_19[1];
typedef char type_20[20];
typedef fsFile type_21[1];
typedef fsFileIndex type_22[1];
typedef fsFileIndex type_23[1];
typedef fsFile type_24[1];
typedef char type_25[24];
typedef fsFileIndex type_26[1];
typedef fsFile type_27[1];
typedef char type_28[20];
typedef fsFile type_29[1];
typedef fsFile type_30[1];
typedef char type_31[24];
typedef fsFileIndex type_32[1];
typedef fsFileIndex type_33[1];
typedef fsFile type_34[1];
typedef char type_35[24];
typedef char type_36[21];
typedef fsFileIndex type_37[1];
typedef char type_38[22];
typedef fsFileIndex type_39[1];
typedef fsFile type_40[1];
typedef fsFileIndex type_41[1];
typedef fsFile type_42[1];
typedef char type_43[24];
typedef fsFileIndex type_44[1];
typedef fsFile type_45[1];
typedef char type_46[23];
typedef fsFile type_47[1];
typedef fsFileIndex type_48[1];
typedef char type_49[21];
typedef fsFileIndex type_50[1];
typedef fsFile type_51[1];
typedef char type_52[22];
typedef char type_53[21];
typedef fsFileIndex type_54[1];
typedef fsFile type_55[1];
typedef char type_56[19];
typedef fsFileIndex type_57[1];
typedef fsFile type_58[1];
typedef fsFileIndex type_59[1];
typedef fsFile type_60[1];
typedef char type_61[22];
typedef fsFile type_62[1];
typedef fsFileIndex type_63[1];
typedef char type_64[24];
typedef fsFile type_65[1];

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

char z_data_movie_mgf__name[15];
fsFile z_data_movie_mgf__info[1];
fsFileIndex data_movie_mgf[1];
char z_data_movie_deai_pss__name[20];
fsFile z_data_movie_deai_pss__info[1];
fsFileIndex data_movie_deai_pss[1];
char z_data_movie_end_dog_pss__name[23];
fsFile z_data_movie_end_dog_pss__info[1];
fsFileIndex data_movie_end_dog_pss[1];
char z_data_movie_end_mria_pss__name[24];
fsFile z_data_movie_end_mria_pss__info[1];
fsFileIndex data_movie_end_mria_pss[1];
char z_data_movie_end_rbrt_pss__name[24];
fsFile z_data_movie_end_rbrt_pss__info[1];
fsFileIndex data_movie_end_rbrt_pss[1];
char z_data_movie_end_scde_pss__name[24];
fsFile z_data_movie_end_scde_pss__info[1];
fsFileIndex data_movie_end_scde_pss[1];
char z_data_movie_ending_pss__name[22];
fsFile z_data_movie_ending_pss__info[1];
fsFileIndex data_movie_ending_pss[1];
char z_data_movie_flash_pss__name[21];
fsFile z_data_movie_flash_pss__info[1];
fsFileIndex data_movie_flash_pss[1];
char z_data_movie_gero_pss__name[20];
fsFile z_data_movie_gero_pss__info[1];
fsFileIndex data_movie_gero_pss[1];
char z_data_movie_hakaba_pss__name[22];
fsFile z_data_movie_hakaba_pss__info[1];
fsFileIndex data_movie_hakaba_pss[1];
char z_data_movie_hei_pss__name[19];
fsFile z_data_movie_hei_pss__info[1];
fsFileIndex data_movie_hei_pss[1];
char z_data_movie_knife_pss__name[21];
fsFile z_data_movie_knife_pss__info[1];
fsFileIndex data_movie_knife_pss[1];
char z_data_movie_korosu_a_pss__name[24];
fsFile z_data_movie_korosu_a_pss__info[1];
fsFileIndex data_movie_korosu_a_pss[1];
char z_data_movie_korosu_b_pss__name[24];
fsFile z_data_movie_korosu_b_pss__info[1];
fsFileIndex data_movie_korosu_b_pss[1];
char z_data_movie_murder_pss__name[22];
fsFile z_data_movie_murder_pss__info[1];
fsFileIndex data_movie_murder_pss[1];
char z_data_movie_open_bgm_pss__name[24];
fsFile z_data_movie_open_bgm_pss__info[1];
fsFileIndex data_movie_open_bgm_pss[1];
char z_data_movie_open_voc_pss__name[24];
fsFile z_data_movie_open_voc_pss__info[1];
fsFileIndex data_movie_open_voc_pss[1];
char z_data_movie_rouya_pss__name[21];
fsFile z_data_movie_rouya_pss__info[1];
fsFileIndex data_movie_rouya_pss[1];
char z_data_movie_saikai_pss__name[22];
fsFile z_data_movie_saikai_pss__info[1];
fsFileIndex data_movie_saikai_pss[1];
char z_data_movie_toilet_pss__name[22];
fsFile z_data_movie_toilet_pss__info[1];
fsFileIndex data_movie_toilet_pss[1];
char z_data_movie_video_pss__name[21];
fsFile z_data_movie_video_pss__info[1];
fsFileIndex data_movie_video_pss[1];
char z_data_movie_water_pss__name[21];
fsFile z_data_movie_water_pss__info[1];
fsFileIndex data_movie_water_pss[1];


