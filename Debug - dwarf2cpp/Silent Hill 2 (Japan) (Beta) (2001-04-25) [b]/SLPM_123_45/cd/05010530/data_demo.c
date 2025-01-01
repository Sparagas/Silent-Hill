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
typedef char type_2[20];
typedef fsFileIndex type_3[1];
typedef fsFile type_4[1];
typedef fsFileIndex type_5[1];
typedef char type_6[26];
typedef char type_7[20];
typedef fsFile type_8[1];
typedef char type_9[25];
typedef fsFile type_10[1];
typedef fsFileIndex type_11[1];
typedef fsFileIndex type_12[1];
typedef fsFile type_13[1];
typedef fsFile type_14[1];
typedef fsFileIndex type_15[1];
typedef char type_16[22];
typedef fsFile type_17[1];
typedef fsFileIndex type_18[1];
typedef char type_19[22];
typedef fsFileIndex type_20[1];
typedef char type_21[23];
typedef char type_22[28];
typedef fsFileIndex type_23[1];
typedef fsFile type_24[1];
typedef char type_25[18];
typedef fsFile type_26[1];
typedef char type_27[24];
typedef fsFileIndex type_28[1];
typedef fsFile type_29[1];
typedef fsFile type_30[1];
typedef fsFileIndex type_31[1];
typedef fsFileIndex type_32[1];
typedef char type_33[19];
typedef fsFileIndex type_34[1];
typedef char type_35[24];
typedef fsFileIndex type_36[1];
typedef fsFile type_37[1];
typedef fsFileIndex type_38[1];
typedef fsFile type_39[1];
typedef char type_40[18];
typedef fsFile type_41[1];
typedef char type_42[20];
typedef fsFile type_43[1];
typedef char type_44[27];
typedef fsFileIndex type_45[1];
typedef fsFile type_46[1];
typedef fsFileIndex type_47[1];
typedef char type_48[20];
typedef char type_49[27];
typedef char type_50[25];
typedef fsFile type_51[1];
typedef fsFileIndex type_52[1];
typedef fsFile type_53[1];
typedef fsFile type_54[1];
typedef fsFile type_55[1];
typedef char type_56[18];
typedef fsFileIndex type_57[1];
typedef char type_58[21];
typedef fsFileIndex type_59[1];
typedef char type_60[23];
typedef fsFileIndex type_61[1];
typedef fsFile type_62[1];
typedef fsFileIndex type_63[1];
typedef char type_64[29];
typedef char type_65[22];
typedef fsFileIndex type_66[1];
typedef char type_67[25];
typedef fsFile type_68[1];
typedef fsFile type_69[1];
typedef fsFileIndex type_70[1];
typedef fsFile type_71[1];
typedef fsFileIndex type_72[1];
typedef char type_73[21];
typedef fsFileIndex type_74[1];
typedef fsFileIndex type_75[1];
typedef char type_76[30];
typedef fsFile type_77[1];
typedef fsFile type_78[1];
typedef fsFileIndex type_79[1];
typedef char type_80[20];
typedef fsFile type_81[1];
typedef fsFile type_82[1];
typedef fsFileIndex type_83[1];
typedef fsFile type_84[1];
typedef fsFile type_85[1];
typedef char type_86[20];
typedef fsFileIndex type_87[1];
typedef char type_88[23];
typedef char type_89[24];
typedef fsFileIndex type_90[1];
typedef char type_91[23];
typedef fsFile type_92[1];
typedef fsFile type_93[1];
typedef char type_94[22];
typedef fsFileIndex type_95[1];
typedef char type_96[23];
typedef fsFileIndex type_97[1];
typedef fsFile type_98[1];
typedef char type_99[22];
typedef fsFile type_100[1];
typedef fsFileIndex type_101[1];
typedef fsFileIndex type_102[1];
typedef fsFileIndex type_103[1];
typedef char type_104[22];
typedef char type_105[23];
typedef fsFile type_106[1];
typedef fsFileIndex type_107[1];
typedef char type_108[26];
typedef fsFile type_109[1];
typedef fsFile type_110[1];
typedef fsFile type_111[1];
typedef fsFileIndex type_112[1];
typedef char type_113[23];
typedef fsFileIndex type_114[1];
typedef char type_115[14];
typedef fsFileIndex type_116[1];
typedef fsFileIndex type_117[1];
typedef fsFile type_118[1];
typedef char type_119[30];
typedef fsFile type_120[1];
typedef char type_121[20];
typedef fsFile type_122[1];
typedef fsFileIndex type_123[1];
typedef fsFile type_124[1];
typedef fsFile type_125[1];
typedef char type_126[23];
typedef fsFile type_127[1];
typedef char type_128[25];
typedef fsFileIndex type_129[1];
typedef fsFileIndex type_130[1];
typedef char type_131[24];
typedef char type_132[27];
typedef fsFileIndex type_133[1];
typedef fsFile type_134[1];
typedef char type_135[24];
typedef fsFile type_136[1];
typedef fsFileIndex type_137[1];
typedef fsFileIndex type_138[1];
typedef fsFile type_139[1];
typedef char type_140[21];
typedef fsFileIndex type_141[1];
typedef char type_142[22];
typedef fsFileIndex type_143[1];
typedef char type_144[21];
typedef char type_145[25];
typedef fsFileIndex type_146[1];
typedef fsFile type_147[1];
typedef fsFileIndex type_148[1];
typedef fsFile type_149[1];

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

char data_demo_mgf__name[14];
fsFile data_demo_mgf__info[1];
fsFileIndex data_demo_mgf[1];
char data_demo_ana_mgf__name[18];
fsFile data_demo_ana_mgf__info[1];
fsFileIndex data_demo_ana_mgf[1];
char data_demo_ap_boss_mgf__name[22];
fsFile data_demo_ap_boss_mgf__info[1];
fsFileIndex data_demo_ap_boss_mgf[1];
char data_demo_bp_mar1_mgf__name[22];
fsFile data_demo_bp_mar1_mgf__info[1];
fsFileIndex data_demo_bp_mar1_mgf[1];
char data_demo_bp_mar2_mgf__name[22];
fsFile data_demo_bp_mar2_mgf__info[1];
fsFileIndex data_demo_bp_mar2_mgf[1];
char data_demo_first_toilet_mgf__name[27];
fsFile data_demo_first_toilet_mgf__info[1];
fsFileIndex data_demo_first_toilet_mgf[1];
char data_demo_gekijou_a_mgf__name[24];
fsFile data_demo_gekijou_a_mgf__info[1];
fsFileIndex data_demo_gekijou_a_mgf[1];
char data_demo_gekijou_b_mgf__name[24];
fsFile data_demo_gekijou_b_mgf__info[1];
fsFileIndex data_demo_gekijou_b_mgf[1];
char data_demo_gero_edi_mgf__name[23];
fsFile data_demo_gero_edi_mgf__info[1];
fsFileIndex data_demo_gero_edi_mgf[1];
char data_demo_haka_agl_mgf__name[23];
fsFile data_demo_haka_agl_mgf__info[1];
fsFileIndex data_demo_haka_agl_mgf[1];
char data_demo_hei_lau_mgf__name[22];
fsFile data_demo_hei_lau_mgf__info[1];
fsFileIndex data_demo_hei_lau_mgf[1];
char data_demo_hp_lau_mgf__name[21];
fsFile data_demo_hp_lau_mgf__info[1];
fsFileIndex data_demo_hp_lau_mgf[1];
char data_demo_ido_mgf__name[18];
fsFile data_demo_ido_mgf__info[1];
fsFileIndex data_demo_ido_mgf[1];
char data_demo_jump1_mgf__name[20];
fsFile data_demo_jump1_mgf__info[1];
fsFileIndex data_demo_jump1_mgf[1];
char data_demo_jump2_mgf__name[20];
fsFile data_demo_jump2_mgf__info[1];
fsFileIndex data_demo_jump2_mgf[1];
char data_demo_jump3_mgf__name[20];
fsFile data_demo_jump3_mgf__info[1];
fsFileIndex data_demo_jump3_mgf[1];
char data_demo_jump4_mgf__name[20];
fsFile data_demo_jump4_mgf__info[1];
fsFileIndex data_demo_jump4_mgf[1];
char data_demo_jump5_mgf__name[20];
fsFile data_demo_jump5_mgf__info[1];
fsFileIndex data_demo_jump5_mgf[1];
char data_demo_kagikeri_mgf__name[23];
fsFile data_demo_kagikeri_mgf__info[1];
fsFileIndex data_demo_kagikeri_mgf[1];
char data_demo_kanaami_mgf__name[22];
fsFile data_demo_kanaami_mgf__info[1];
fsFileIndex data_demo_kanaami_mgf[1];
char data_demo_kao_mgf__name[18];
fsFile data_demo_kao_mgf__info[1];
fsFileIndex data_demo_kao_mgf[1];
char data_demo_kitanai_mgf__name[22];
fsFile data_demo_kitanai_mgf__info[1];
fsFileIndex data_demo_kitanai_mgf[1];
char data_demo_knife_agl_mgf__name[24];
fsFile data_demo_knife_agl_mgf__info[1];
fsFileIndex data_demo_knife_agl_mgf[1];
char data_demo_kubitsuri_mgf__name[24];
fsFile data_demo_kubitsuri_mgf__info[1];
fsFileIndex data_demo_kubitsuri_mgf[1];
char data_demo_lau_damasu_mgf__name[25];
fsFile data_demo_lau_damasu_mgf__info[1];
fsFileIndex data_demo_lau_damasu_mgf[1];
char data_demo_lau_damasu2_mgf__name[26];
fsFile data_demo_lau_damasu2_mgf__info[1];
fsFileIndex data_demo_lau_damasu2_mgf[1];
char data_demo_mar_dead_a_mgf__name[25];
fsFile data_demo_mar_dead_a_mgf__info[1];
fsFileIndex data_demo_mar_dead_a_mgf[1];
char data_demo_mar_dead_b_mgf__name[25];
fsFile data_demo_mar_dead_b_mgf__info[1];
fsFileIndex data_demo_mar_dead_b_mgf[1];
char data_demo_mar_deai_mgf__name[23];
fsFile data_demo_mar_deai_mgf__info[1];
fsFileIndex data_demo_mar_deai_mgf[1];
char data_demo_mar_hagureru_mgf__name[27];
fsFile data_demo_mar_hagureru_mgf__info[1];
fsFileIndex data_demo_mar_hagureru_mgf[1];
char data_demo_mar_ikiteruka_mgf__name[28];
fsFile data_demo_mar_ikiteruka_mgf__info[1];
fsFileIndex data_demo_mar_ikiteruka_mgf[1];
char data_demo_mar_ikiteruka2_mgf__name[29];
fsFile data_demo_mar_ikiteruka2_mgf__info[1];
fsFileIndex data_demo_mar_ikiteruka2_mgf[1];
char data_demo_papa_agl_mgf__name[23];
fsFile data_demo_papa_agl_mgf__info[1];
fsFileIndex data_demo_papa_agl_mgf[1];
char data_demo_papa_agl_a_mgf__name[25];
fsFile data_demo_papa_agl_a_mgf__info[1];
fsFileIndex data_demo_papa_agl_a_mgf[1];
char data_demo_piano_lau_mgf__name[24];
fsFile data_demo_piano_lau_mgf__info[1];
fsFileIndex data_demo_piano_lau_mgf[1];
char data_demo_piano_lau_a_lau_anm__name[30];
fsFile data_demo_piano_lau_a_lau_anm__info[1];
fsFileIndex data_demo_piano_lau_a_lau_anm[1];
char data_demo_piano_lau_a_lau_cls__name[30];
fsFile data_demo_piano_lau_a_lau_cls__info[1];
fsFileIndex data_demo_piano_lau_a_lau_cls[1];
char data_demo_piano_lau_a_mgf__name[26];
fsFile data_demo_piano_lau_a_mgf__info[1];
fsFileIndex data_demo_piano_lau_a_mgf[1];
char data_demo_red_taiketsu_mgf__name[27];
fsFile data_demo_red_taiketsu_mgf__info[1];
fsFileIndex data_demo_red_taiketsu_mgf[1];
char data_demo_reizouko_mgf__name[23];
fsFile data_demo_reizouko_mgf__info[1];
fsFileIndex data_demo_reizouko_mgf[1];
char data_demo_reizouko_a_mgf__name[25];
fsFile data_demo_reizouko_a_mgf__info[1];
fsFileIndex data_demo_reizouko_a_mgf[1];
char data_demo_room312_mgf__name[22];
fsFile data_demo_room312_mgf__info[1];
fsFileIndex data_demo_room312_mgf[1];
char data_demo_saisho_mgf__name[21];
fsFile data_demo_saisho_mgf__info[1];
fsFileIndex data_demo_saisho_mgf[1];
char data_demo_sankaku1_mgf__name[23];
fsFile data_demo_sankaku1_mgf__info[1];
fsFileIndex data_demo_sankaku1_mgf[1];
char data_demo_tenjou_mgf__name[21];
fsFile data_demo_tenjou_mgf__info[1];
fsFileIndex data_demo_tenjou_mgf[1];
char data_demo_test_mgf__name[19];
fsFile data_demo_test_mgf__info[1];
fsFileIndex data_demo_test_mgf[1];
char data_demo_tobira_mgf__name[21];
fsFile data_demo_tobira_mgf__info[1];
fsFileIndex data_demo_tobira_mgf[1];
char data_demo_tobira_c_mgf__name[23];
fsFile data_demo_tobira_c_mgf__info[1];
fsFileIndex data_demo_tobira_c_mgf[1];
char data_demo_tokei_mgf__name[20];
fsFile data_demo_tokei_mgf__info[1];
fsFileIndex data_demo_tokei_mgf[1];
char data_demo_tsuri_mgf__name[20];
fsFile data_demo_tsuri_mgf__info[1];
fsFileIndex data_demo_tsuri_mgf[1];


