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
typedef char type_1[26];
typedef fsFile type_2[1];
typedef char type_3[24];
typedef char type_4[28];
typedef char type_5[27];
typedef fsFileIndex type_6[1];
typedef fsFileIndex type_7[1];
typedef fsFile type_8[1];
typedef fsFileIndex type_9[1];
typedef fsFile type_10[1];
typedef fsFile type_11[1];
typedef char type_12[27];
typedef fsFile type_13[1];
typedef fsFile type_14[1];
typedef char type_15[31];
typedef char type_16[27];
typedef char type_17[24];
typedef fsFileIndex type_18[1];
typedef fsFileIndex type_19[1];
typedef fsFileIndex type_20[1];
typedef fsFile type_21[1];
typedef fsFileIndex type_22[1];
typedef fsFile type_23[1];
typedef fsFile type_24[1];
typedef char type_25[27];
typedef char type_26[31];
typedef char type_27[24];
typedef fsFileIndex type_28[1];
typedef fsFileIndex type_29[1];
typedef fsFile type_30[1];
typedef fsFileIndex type_31[1];
typedef fsFile type_32[1];
typedef fsFile type_33[1];
typedef char type_34[22];
typedef fsFile type_35[1];
typedef char type_36[24];
typedef char type_37[28];
typedef char type_38[27];
typedef fsFileIndex type_39[1];
typedef fsFileIndex type_40[1];
typedef fsFileIndex type_41[1];
typedef fsFile type_42[1];
typedef fsFileIndex type_43[1];
typedef fsFile type_44[1];
typedef fsFile type_45[1];
typedef char type_46[27];
typedef fsFile type_47[1];
typedef char type_48[28];
typedef char type_49[27];
typedef fsFileIndex type_50[1];
typedef fsFileIndex type_51[1];
typedef fsFileIndex type_52[1];
typedef fsFile type_53[1];
typedef fsFileIndex type_54[1];
typedef fsFile type_55[1];
typedef char type_56[27];
typedef fsFile type_57[1];
typedef char type_58[22];
typedef char type_59[31];
typedef char type_60[24];
typedef char type_61[16];
typedef fsFileIndex type_62[1];
typedef fsFileIndex type_63[1];
typedef fsFileIndex type_64[1];
typedef fsFile type_65[1];
typedef fsFileIndex type_66[1];
typedef fsFile type_67[1];
typedef fsFile type_68[1];
typedef char type_69[24];
typedef fsFile type_70[1];
typedef char type_71[31];
typedef char type_72[27];
typedef fsFileIndex type_73[1];
typedef fsFileIndex type_74[1];
typedef fsFileIndex type_75[1];
typedef fsFile type_76[1];
typedef fsFileIndex type_77[1];

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

char data_chr_wp_mgf__name[16];
fsFile data_chr_wp_mgf__info[1];
fsFileIndex data_chr_wp_mgf[1];
char data_chr_wp_jms_weapon_anm__name[27];
fsFile data_chr_wp_jms_weapon_anm__info[1];
fsFileIndex data_chr_wp_jms_weapon_anm[1];
char data_chr_wp_wp_csaw_anm__name[24];
fsFile data_chr_wp_wp_csaw_anm__info[1];
fsFileIndex data_chr_wp_wp_csaw_anm[1];
char data_chr_wp_wp_csaw_mdl__name[24];
fsFile data_chr_wp_wp_csaw_mdl__info[1];
fsFileIndex data_chr_wp_wp_csaw_mdl[1];
char data_chr_wp_wp_csaw_sh2_anm__name[28];
fsFile data_chr_wp_wp_csaw_sh2_anm__info[1];
fsFileIndex data_chr_wp_wp_csaw_sh2_anm[1];
char data_chr_wp_wp_handgun_anm__name[27];
fsFile data_chr_wp_wp_handgun_anm__info[1];
fsFileIndex data_chr_wp_wp_handgun_anm[1];
char data_chr_wp_wp_handgun_mdl__name[27];
fsFile data_chr_wp_wp_handgun_mdl__info[1];
fsFileIndex data_chr_wp_wp_handgun_mdl[1];
char data_chr_wp_wp_handgun_sh2_anm__name[31];
fsFile data_chr_wp_wp_handgun_sh2_anm__info[1];
fsFileIndex data_chr_wp_wp_handgun_sh2_anm[1];
char data_chr_wp_wp_kakuzai_anm__name[27];
fsFile data_chr_wp_wp_kakuzai_anm__info[1];
fsFileIndex data_chr_wp_wp_kakuzai_anm[1];
char data_chr_wp_wp_kakuzai_mdl__name[27];
fsFile data_chr_wp_wp_kakuzai_mdl__info[1];
fsFileIndex data_chr_wp_wp_kakuzai_mdl[1];
char data_chr_wp_wp_kakuzai_sh2_anm__name[31];
fsFile data_chr_wp_wp_kakuzai_sh2_anm__info[1];
fsFileIndex data_chr_wp_wp_kakuzai_sh2_anm[1];
char data_chr_wp_wp_nata_anm__name[24];
fsFile data_chr_wp_wp_nata_anm__info[1];
fsFileIndex data_chr_wp_wp_nata_anm[1];
char data_chr_wp_wp_nata_mdl__name[24];
fsFile data_chr_wp_wp_nata_mdl__info[1];
fsFileIndex data_chr_wp_wp_nata_mdl[1];
char data_chr_wp_wp_nata_sh2_anm__name[28];
fsFile data_chr_wp_wp_nata_sh2_anm__info[1];
fsFileIndex data_chr_wp_wp_nata_sh2_anm[1];
char data_chr_wp_wp_pipe_anm__name[24];
fsFile data_chr_wp_wp_pipe_anm__info[1];
fsFileIndex data_chr_wp_wp_pipe_anm[1];
char data_chr_wp_wp_pipe_mdl__name[24];
fsFile data_chr_wp_wp_pipe_mdl__info[1];
fsFileIndex data_chr_wp_wp_pipe_mdl[1];
char data_chr_wp_wp_pipe_sh2_anm__name[28];
fsFile data_chr_wp_wp_pipe_sh2_anm__info[1];
fsFileIndex data_chr_wp_wp_pipe_sh2_anm[1];
char data_chr_wp_wp_riflgun_anm__name[27];
fsFile data_chr_wp_wp_riflgun_anm__info[1];
fsFileIndex data_chr_wp_wp_riflgun_anm[1];
char data_chr_wp_wp_riflgun_mdl__name[27];
fsFile data_chr_wp_wp_riflgun_mdl__info[1];
fsFileIndex data_chr_wp_wp_riflgun_mdl[1];
char data_chr_wp_wp_riflgun_sh2_anm__name[31];
fsFile data_chr_wp_wp_riflgun_sh2_anm__info[1];
fsFileIndex data_chr_wp_wp_riflgun_sh2_anm[1];
char data_chr_wp_wp_shotgun_anm__name[27];
fsFile data_chr_wp_wp_shotgun_anm__info[1];
fsFileIndex data_chr_wp_wp_shotgun_anm[1];
char data_chr_wp_wp_shotgun_mdl__name[27];
fsFile data_chr_wp_wp_shotgun_mdl__info[1];
fsFileIndex data_chr_wp_wp_shotgun_mdl[1];
char data_chr_wp_wp_shotgun_sh2_anm__name[31];
fsFile data_chr_wp_wp_shotgun_sh2_anm__info[1];
fsFileIndex data_chr_wp_wp_shotgun_sh2_anm[1];
char data_chr_wp_wp_sp_anm__name[22];
fsFile data_chr_wp_wp_sp_anm__info[1];
fsFileIndex data_chr_wp_wp_sp_anm[1];
char data_chr_wp_wp_sp_mdl__name[22];
fsFile data_chr_wp_wp_sp_mdl__info[1];
fsFileIndex data_chr_wp_wp_sp_mdl[1];
char data_chr_wp_wp_sp_sh2_anm__name[26];
fsFile data_chr_wp_wp_sp_sh2_anm__info[1];
fsFileIndex data_chr_wp_wp_sp_sh2_anm[1];


