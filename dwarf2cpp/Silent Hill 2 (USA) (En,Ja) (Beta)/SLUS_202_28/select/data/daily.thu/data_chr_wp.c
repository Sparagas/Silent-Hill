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
typedef fsFileIndex type_2[1];
typedef char type_3[16];
typedef fsFileIndex type_4[1];
typedef char type_5[24];
typedef fsFileIndex type_6[1];
typedef char type_7[25];
typedef fsFile type_8[1];
typedef fsFile type_9[1];
typedef fsFile type_10[1];
typedef fsFileIndex type_11[1];
typedef char type_12[27];
typedef char type_13[24];
typedef fsFileIndex type_14[1];
typedef fsFile type_15[1];
typedef fsFile type_16[1];
typedef char type_17[22];
typedef fsFileIndex type_18[1];
typedef fsFileIndex type_19[1];
typedef char type_20[27];
typedef fsFileIndex type_21[1];
typedef char type_22[28];
typedef fsFile type_23[1];
typedef fsFile type_24[1];
typedef fsFileIndex type_25[1];
typedef char type_26[24];
typedef fsFileIndex type_27[1];
typedef char type_28[28];
typedef fsFile type_29[1];
typedef fsFile type_30[1];
typedef fsFile type_31[1];
typedef fsFileIndex type_32[1];
typedef char type_33[27];
typedef char type_34[24];
typedef fsFileIndex type_35[1];
typedef fsFile type_36[1];
typedef char type_37[27];
typedef fsFile type_38[1];
typedef fsFile type_39[1];
typedef fsFileIndex type_40[1];
typedef fsFileIndex type_41[1];
typedef char type_42[27];
typedef fsFileIndex type_43[1];
typedef char type_44[28];
typedef fsFile type_45[1];
typedef fsFile type_46[1];
typedef fsFileIndex type_47[1];
typedef char type_48[24];
typedef fsFileIndex type_49[1];
typedef char type_50[28];
typedef fsFile type_51[1];
typedef fsFile type_52[1];
typedef fsFile type_53[1];
typedef fsFileIndex type_54[1];
typedef char type_55[27];
typedef fsFileIndex type_56[1];
typedef char type_57[27];
typedef char type_58[29];
typedef fsFile type_59[1];
typedef fsFile type_60[1];
typedef fsFileIndex type_61[1];
typedef fsFileIndex type_62[1];
typedef char type_63[24];
typedef fsFileIndex type_64[1];
typedef char type_65[25];
typedef fsFile type_66[1];
typedef fsFile type_67[1];
typedef fsFile type_68[1];
typedef fsFileIndex type_69[1];
typedef char type_70[27];
typedef fsFileIndex type_71[1];
typedef char type_72[23];
typedef fsFile type_73[1];
typedef fsFile type_74[1];
typedef fsFileIndex type_75[1];
typedef char type_76[22];
typedef fsFileIndex type_77[1];
typedef fsFileIndex type_78[1];
typedef char type_79[27];
typedef char type_80[25];

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

char z_data_chr_wp_mgf__name[16];
fsFile z_data_chr_wp_mgf__info[1];
fsFileIndex data_chr_wp_mgf[1];
char z_data_chr_wp_jms_weapon_anm__name[27];
fsFile z_data_chr_wp_jms_weapon_anm__info[1];
fsFileIndex data_chr_wp_jms_weapon_anm[1];
char z_data_chr_wp_jms_weapon_anm_b__name[29];
fsFile z_data_chr_wp_jms_weapon_anm_b__info[1];
fsFileIndex data_chr_wp_jms_weapon_anm_b[1];
char z_data_chr_wp_rwp_csaw_mdl__name[25];
fsFile z_data_chr_wp_rwp_csaw_mdl__info[1];
fsFileIndex data_chr_wp_rwp_csaw_mdl[1];
char z_data_chr_wp_rwp_handgun_mdl__name[28];
fsFile z_data_chr_wp_rwp_handgun_mdl__info[1];
fsFileIndex data_chr_wp_rwp_handgun_mdl[1];
char z_data_chr_wp_rwp_kakuzai_mdl__name[28];
fsFile z_data_chr_wp_rwp_kakuzai_mdl__info[1];
fsFileIndex data_chr_wp_rwp_kakuzai_mdl[1];
char z_data_chr_wp_rwp_nata_mdl__name[25];
fsFile z_data_chr_wp_rwp_nata_mdl__info[1];
fsFileIndex data_chr_wp_rwp_nata_mdl[1];
char z_data_chr_wp_rwp_pipe_mdl__name[25];
fsFile z_data_chr_wp_rwp_pipe_mdl__info[1];
fsFileIndex data_chr_wp_rwp_pipe_mdl[1];
char z_data_chr_wp_rwp_riflgun_mdl__name[28];
fsFile z_data_chr_wp_rwp_riflgun_mdl__info[1];
fsFileIndex data_chr_wp_rwp_riflgun_mdl[1];
char z_data_chr_wp_rwp_shotgun_mdl__name[28];
fsFile z_data_chr_wp_rwp_shotgun_mdl__info[1];
fsFileIndex data_chr_wp_rwp_shotgun_mdl[1];
char z_data_chr_wp_rwp_sp_mdl__name[23];
fsFile z_data_chr_wp_rwp_sp_mdl__info[1];
fsFileIndex data_chr_wp_rwp_sp_mdl[1];
char z_data_chr_wp_wp_csaw_kg1__name[24];
fsFile z_data_chr_wp_wp_csaw_kg1__info[1];
fsFileIndex data_chr_wp_wp_csaw_kg1[1];
char z_data_chr_wp_wp_csaw_mdl__name[24];
fsFile z_data_chr_wp_wp_csaw_mdl__info[1];
fsFileIndex data_chr_wp_wp_csaw_mdl[1];
char z_data_chr_wp_wp_handgun_kg1__name[27];
fsFile z_data_chr_wp_wp_handgun_kg1__info[1];
fsFileIndex data_chr_wp_wp_handgun_kg1[1];
char z_data_chr_wp_wp_handgun_mdl__name[27];
fsFile z_data_chr_wp_wp_handgun_mdl__info[1];
fsFileIndex data_chr_wp_wp_handgun_mdl[1];
char z_data_chr_wp_wp_kakuzai_kg1__name[27];
fsFile z_data_chr_wp_wp_kakuzai_kg1__info[1];
fsFileIndex data_chr_wp_wp_kakuzai_kg1[1];
char z_data_chr_wp_wp_kakuzai_mdl__name[27];
fsFile z_data_chr_wp_wp_kakuzai_mdl__info[1];
fsFileIndex data_chr_wp_wp_kakuzai_mdl[1];
char z_data_chr_wp_wp_nata_kg1__name[24];
fsFile z_data_chr_wp_wp_nata_kg1__info[1];
fsFileIndex data_chr_wp_wp_nata_kg1[1];
char z_data_chr_wp_wp_nata_mdl__name[24];
fsFile z_data_chr_wp_wp_nata_mdl__info[1];
fsFileIndex data_chr_wp_wp_nata_mdl[1];
char z_data_chr_wp_wp_pipe_kg1__name[24];
fsFile z_data_chr_wp_wp_pipe_kg1__info[1];
fsFileIndex data_chr_wp_wp_pipe_kg1[1];
char z_data_chr_wp_wp_pipe_mdl__name[24];
fsFile z_data_chr_wp_wp_pipe_mdl__info[1];
fsFileIndex data_chr_wp_wp_pipe_mdl[1];
char z_data_chr_wp_wp_riflgun_kg1__name[27];
fsFile z_data_chr_wp_wp_riflgun_kg1__info[1];
fsFileIndex data_chr_wp_wp_riflgun_kg1[1];
char z_data_chr_wp_wp_riflgun_mdl__name[27];
fsFile z_data_chr_wp_wp_riflgun_mdl__info[1];
fsFileIndex data_chr_wp_wp_riflgun_mdl[1];
char z_data_chr_wp_wp_shotgun_kg1__name[27];
fsFile z_data_chr_wp_wp_shotgun_kg1__info[1];
fsFileIndex data_chr_wp_wp_shotgun_kg1[1];
char z_data_chr_wp_wp_shotgun_mdl__name[27];
fsFile z_data_chr_wp_wp_shotgun_mdl__info[1];
fsFileIndex data_chr_wp_wp_shotgun_mdl[1];
char z_data_chr_wp_wp_sp_kg1__name[22];
fsFile z_data_chr_wp_wp_sp_kg1__info[1];
fsFileIndex data_chr_wp_wp_sp_kg1[1];
char z_data_chr_wp_wp_sp_mdl__name[22];
fsFile z_data_chr_wp_wp_sp_mdl__info[1];
fsFileIndex data_chr_wp_wp_sp_mdl[1];


