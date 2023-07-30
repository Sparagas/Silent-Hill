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
typedef char type_2[25];
typedef fsFileIndex type_3[1];
typedef char type_4[26];
typedef fsFileIndex type_5[1];
typedef char type_6[28];
typedef fsFileIndex type_7[1];
typedef fsFile type_8[1];
typedef fsFile type_9[1];
typedef fsFile type_10[1];
typedef fsFile type_11[1];
typedef fsFileIndex type_12[1];
typedef fsFileIndex type_13[1];
typedef char type_14[28];
typedef char type_15[30];
typedef fsFile type_16[1];
typedef char type_17[25];
typedef fsFileIndex type_18[1];
typedef fsFile type_19[1];
typedef fsFile type_20[1];
typedef fsFileIndex type_21[1];
typedef char type_22[28];
typedef fsFileIndex type_23[1];
typedef char type_24[30];
typedef fsFile type_25[1];
typedef fsFileIndex type_26[1];
typedef char type_27[27];
typedef fsFile type_28[1];
typedef fsFile type_29[1];
typedef fsFileIndex type_30[1];
typedef fsFileIndex type_31[1];
typedef char type_32[29];
typedef char type_33[25];
typedef char type_34[25];
typedef fsFile type_35[1];
typedef fsFile type_36[1];
typedef fsFileIndex type_37[1];
typedef fsFile type_38[1];
typedef fsFileIndex type_39[1];
typedef fsFileIndex type_40[1];
typedef char type_41[28];
typedef char type_42[30];
typedef fsFile type_43[1];
typedef char type_44[25];
typedef fsFile type_45[1];
typedef fsFile type_46[1];
typedef fsFileIndex type_47[1];
typedef fsFileIndex type_48[1];
typedef char type_49[28];
typedef fsFileIndex type_50[1];
typedef char type_51[30];
typedef fsFileIndex type_52[1];
typedef fsFile type_53[1];
typedef fsFile type_54[1];
typedef fsFile type_55[1];
typedef char type_56[32];
typedef fsFileIndex type_57[1];
typedef fsFileIndex type_58[1];
typedef char type_59[28];
typedef char type_60[29];
typedef fsFile type_61[1];
typedef fsFile type_62[1];
typedef fsFileIndex type_63[1];
typedef fsFile type_64[1];
typedef char type_65[30];
typedef fsFileIndex type_66[1];
typedef fsFileIndex type_67[1];
typedef fsFileIndex type_68[1];
typedef char type_69[28];
typedef char type_70[30];
typedef char type_71[25];
typedef fsFile type_72[1];
typedef fsFile type_73[1];
typedef char type_74[17];
typedef fsFile type_75[1];
typedef fsFileIndex type_76[1];
typedef char type_77[28];
typedef fsFileIndex type_78[1];
typedef char type_79[28];
typedef fsFileIndex type_80[1];
typedef fsFile type_81[1];
typedef fsFile type_82[1];
typedef fsFileIndex type_83[1];
typedef fsFile type_84[1];
typedef char type_85[21];
typedef fsFileIndex type_86[1];
typedef fsFileIndex type_87[1];
typedef char type_88[28];
typedef char type_89[30];
typedef fsFile type_90[1];
typedef fsFile type_91[1];
typedef fsFileIndex type_92[1];
typedef fsFileIndex type_93[1];
typedef char type_94[28];
typedef char type_95[28];
typedef fsFileIndex type_96[1];
typedef fsFile type_97[1];
typedef char type_98[30];

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

char data_chr_jms_mgf__name[17];
fsFile data_chr_jms_mgf__info[1];
fsFileIndex data_chr_jms_mgf[1];
char data_chr_jms_hhh_jms_kg1__name[25];
fsFile data_chr_jms_hhh_jms_kg1__info[1];
fsFileIndex data_chr_jms_hhh_jms_kg1[1];
char data_chr_jms_hhh_jms_kg2__name[25];
fsFile data_chr_jms_hhh_jms_kg2__info[1];
fsFileIndex data_chr_jms_hhh_jms_kg2[1];
char data_chr_jms_hhh_jms_mdl__name[25];
fsFile data_chr_jms_hhh_jms_mdl__info[1];
fsFileIndex data_chr_jms_hhh_jms_mdl[1];
char data_chr_jms_hhl_jms_mdl__name[25];
fsFile data_chr_jms_hhl_jms_mdl__info[1];
fsFileIndex data_chr_jms_hhl_jms_mdl[1];
char data_chr_jms_hll_jms_mdl__name[25];
fsFile data_chr_jms_hll_jms_mdl__info[1];
fsFileIndex data_chr_jms_hll_jms_mdl[1];
char data_chr_jms_jms_basic1_anm__name[28];
fsFile data_chr_jms_jms_basic1_anm__info[1];
fsFileIndex data_chr_jms_jms_basic1_anm[1];
char data_chr_jms_jms_basic1_1_anm__name[30];
fsFile data_chr_jms_jms_basic1_1_anm__info[1];
fsFileIndex data_chr_jms_jms_basic1_1_anm[1];
char data_chr_jms_jms_basic1_2_anm__name[30];
fsFile data_chr_jms_jms_basic1_2_anm__info[1];
fsFileIndex data_chr_jms_jms_basic1_2_anm[1];
char data_chr_jms_jms_basic2_1_anm__name[30];
fsFile data_chr_jms_jms_basic2_1_anm__info[1];
fsFileIndex data_chr_jms_jms_basic2_1_anm[1];
char data_chr_jms_jms_basic2_2_anm__name[30];
fsFile data_chr_jms_jms_basic2_2_anm__info[1];
fsFileIndex data_chr_jms_jms_basic2_2_anm[1];
char data_chr_jms_jms_basic3_anm__name[28];
fsFile data_chr_jms_jms_basic3_anm__info[1];
fsFileIndex data_chr_jms_jms_basic3_anm[1];
char data_chr_jms_jms_basic3_1_anm__name[30];
fsFile data_chr_jms_jms_basic3_1_anm__info[1];
fsFileIndex data_chr_jms_jms_basic3_1_anm[1];
char data_chr_jms_jms_basic3_2_anm__name[30];
fsFile data_chr_jms_jms_basic3_2_anm__info[1];
fsFileIndex data_chr_jms_jms_basic3_2_anm[1];
char data_chr_jms_jms_basic4_anm__name[28];
fsFile data_chr_jms_jms_basic4_anm__info[1];
fsFileIndex data_chr_jms_jms_basic4_anm[1];
char data_chr_jms_jms_basic5_anm__name[28];
fsFile data_chr_jms_jms_basic5_anm__info[1];
fsFileIndex data_chr_jms_jms_basic5_anm[1];
char data_chr_jms_jms_wp_hand_anm__name[29];
fsFile data_chr_jms_jms_wp_hand_anm__info[1];
fsFileIndex data_chr_jms_jms_wp_hand_anm[1];
char data_chr_jms_jms_wp_kaku_anm__name[29];
fsFile data_chr_jms_jms_wp_kaku_anm__info[1];
fsFileIndex data_chr_jms_jms_wp_kaku_anm[1];
char data_chr_jms_jms_wpcsaw_anm__name[28];
fsFile data_chr_jms_jms_wpcsaw_anm__info[1];
fsFileIndex data_chr_jms_jms_wpcsaw_anm[1];
char data_chr_jms_jms_wphand_anm__name[28];
fsFile data_chr_jms_jms_wphand_anm__info[1];
fsFileIndex data_chr_jms_jms_wphand_anm[1];
char data_chr_jms_jms_wpkaku_anm__name[28];
fsFile data_chr_jms_jms_wpkaku_anm__info[1];
fsFileIndex data_chr_jms_jms_wpkaku_anm[1];
char data_chr_jms_jms_wpnata_anm__name[28];
fsFile data_chr_jms_jms_wpnata_anm__info[1];
fsFileIndex data_chr_jms_jms_wpnata_anm[1];
char data_chr_jms_jms_wpnone_anm__name[28];
fsFile data_chr_jms_jms_wpnone_anm__info[1];
fsFileIndex data_chr_jms_jms_wpnone_anm[1];
char data_chr_jms_jms_wppipe_anm__name[28];
fsFile data_chr_jms_jms_wppipe_anm__info[1];
fsFileIndex data_chr_jms_jms_wppipe_anm[1];
char data_chr_jms_jms_wprifl_anm__name[28];
fsFile data_chr_jms_jms_wprifl_anm__info[1];
fsFileIndex data_chr_jms_jms_wprifl_anm[1];
char data_chr_jms_jms_wpshot_anm__name[28];
fsFile data_chr_jms_jms_wpshot_anm__info[1];
fsFileIndex data_chr_jms_jms_wpshot_anm[1];
char data_chr_jms_jms_wpsp_anm__name[26];
fsFile data_chr_jms_jms_wpsp_anm__info[1];
fsFileIndex data_chr_jms_jms_wpsp_anm[1];
char data_chr_jms_lll_jms_mdl__name[25];
fsFile data_chr_jms_lll_jms_mdl__info[1];
fsFileIndex data_chr_jms_lll_jms_mdl[1];
char data_chr_jms_lll_jms_hand_mdl__name[30];
fsFile data_chr_jms_lll_jms_hand_mdl__info[1];
fsFileIndex data_chr_jms_lll_jms_hand_mdl[1];
char data_chr_jms_lll_jms_kaku_mdl__name[30];
fsFile data_chr_jms_lll_jms_kaku_mdl__info[1];
fsFileIndex data_chr_jms_lll_jms_kaku_mdl[1];
char data_chr_jms_lll_jms_n_mdl__name[27];
fsFile data_chr_jms_lll_jms_n_mdl__info[1];
fsFileIndex data_chr_jms_lll_jms_n_mdl[1];
char data_chr_jms_lll_jms_normal_mdl__name[32];
fsFile data_chr_jms_lll_jms_normal_mdl__info[1];
fsFileIndex data_chr_jms_lll_jms_normal_mdl[1];
char data_chr_jms_logfile__name[21];
fsFile data_chr_jms_logfile__info[1];
fsFileIndex data_chr_jms_logfile[1];


