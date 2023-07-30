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
typedef char type_1[24];
typedef fsFileIndex type_2[1];
typedef fsFile type_3[1];
typedef char type_4[24];
typedef fsFile type_5[1];
typedef fsFileIndex type_6[1];
typedef char type_7[17];
typedef char type_8[26];
typedef fsFileIndex type_9[1];
typedef fsFileIndex type_10[1];
typedef fsFile type_11[1];
typedef char type_12[20];
typedef fsFile type_13[1];
typedef fsFile type_14[1];
typedef char type_15[27];
typedef fsFile type_16[1];
typedef fsFileIndex type_17[1];
typedef fsFileIndex type_18[1];
typedef fsFileIndex type_19[1];
typedef char type_20[26];
typedef fsFile type_21[1];
typedef fsFile type_22[1];
typedef char type_23[25];
typedef char type_24[24];
typedef char type_25[17];
typedef fsFileIndex type_26[1];
typedef fsFile type_27[1];
typedef fsFile type_28[1];
typedef fsFile type_29[1];
typedef fsFileIndex type_30[1];
typedef char type_31[19];
typedef fsFileIndex type_32[1];
typedef char type_33[21];
typedef fsFileIndex type_34[1];
typedef fsFile type_35[1];
typedef fsFile type_36[1];
typedef char type_37[25];
typedef char type_38[26];
typedef fsFileIndex type_39[1];
typedef fsFileIndex type_40[1];
typedef fsFile type_41[1];
typedef fsFileIndex type_42[1];
typedef fsFile type_43[1];
typedef char type_44[17];
typedef fsFile type_45[1];
typedef fsFileIndex type_46[1];
typedef char type_47[23];
typedef char type_48[30];
typedef fsFileIndex type_49[1];
typedef fsFileIndex type_50[1];
typedef fsFile type_51[1];
typedef char type_52[20];
typedef fsFile type_53[1];
typedef fsFileIndex type_54[1];
typedef fsFile type_55[1];
typedef fsFile type_56[1];
typedef char type_57[27];
typedef fsFileIndex type_58[1];
typedef fsFileIndex type_59[1];
typedef char type_60[32];
typedef fsFile type_61[1];
typedef char type_62[25];
typedef fsFileIndex type_63[1];
typedef char type_64[24];
typedef char type_65[24];
typedef fsFile type_66[1];
typedef fsFile type_67[1];
typedef fsFileIndex type_68[1];
typedef fsFile type_69[1];
typedef char type_70[25];
typedef fsFileIndex type_71[1];
typedef char type_72[22];
typedef fsFile type_73[1];
typedef fsFileIndex type_74[1];
typedef fsFileIndex type_75[1];
typedef fsFile type_76[1];
typedef char type_77[27];
typedef char type_78[26];
typedef fsFileIndex type_79[1];
typedef fsFile type_80[1];
typedef fsFileIndex type_81[1];
typedef fsFile type_82[1];
typedef char type_83[20];
typedef fsFile type_84[1];
typedef fsFile type_85[1];
typedef char type_86[21];
typedef fsFileIndex type_87[1];
typedef fsFileIndex type_88[1];
typedef fsFileIndex type_89[1];
typedef char type_90[24];
typedef fsFile type_91[1];
typedef char type_92[18];
typedef fsFile type_93[1];
typedef char type_94[17];
typedef fsFile type_95[1];
typedef fsFileIndex type_96[1];
typedef fsFileIndex type_97[1];
typedef fsFile type_98[1];
typedef fsFileIndex type_99[1];
typedef fsFileIndex type_100[1];
typedef char type_101[20];
typedef char type_102[25];
typedef char type_103[19];
typedef fsFileIndex type_104[1];
typedef fsFile type_105[1];
typedef char type_106[24];
typedef fsFileIndex type_107[1];
typedef fsFile type_108[1];
typedef fsFile type_109[1];
typedef char type_110[19];
typedef char type_111[13];
typedef fsFileIndex type_112[1];
typedef fsFile type_113[1];
typedef char type_114[24];
typedef char type_115[21];
typedef fsFileIndex type_116[1];
typedef fsFileIndex type_117[1];
typedef fsFileIndex type_118[1];
typedef fsFile type_119[1];
typedef char type_120[23];
typedef fsFile type_121[1];
typedef fsFileIndex type_122[1];
typedef fsFile type_123[1];
typedef char type_124[27];
typedef fsFile type_125[1];
typedef char type_126[19];
typedef fsFile type_127[1];
typedef fsFileIndex type_128[1];
typedef fsFileIndex type_129[1];
typedef fsFileIndex type_130[1];
typedef char type_131[28];
typedef fsFile type_132[1];
typedef char type_133[25];
typedef fsFile type_134[1];
typedef char type_135[22];
typedef fsFileIndex type_136[1];
typedef fsFile type_137[1];
typedef fsFileIndex type_138[1];
typedef fsFile type_139[1];
typedef fsFileIndex type_140[1];
typedef char type_141[25];
typedef fsFileIndex type_142[1];
typedef fsFile type_143[1];
typedef char type_144[25];
typedef char type_145[26];
typedef char type_146[22];
typedef fsFileIndex type_147[1];
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

char data_pic_mgf__name[13];
fsFile data_pic_mgf__info[1];
fsFileIndex data_pic_mgf[1];
char data_pic_apartmape1f_tex__name[25];
fsFile data_pic_apartmape1f_tex__info[1];
fsFileIndex data_pic_apartmape1f_tex[1];
char data_pic_apartmape2f_tex__name[25];
fsFile data_pic_apartmape2f_tex__info[1];
fsFileIndex data_pic_apartmape2f_tex[1];
char data_pic_apartmape3f_tex__name[25];
fsFile data_pic_apartmape3f_tex__info[1];
fsFileIndex data_pic_apartmape3f_tex[1];
char data_pic_apartmapew1f_tex__name[26];
fsFile data_pic_apartmapew1f_tex__info[1];
fsFileIndex data_pic_apartmapew1f_tex[1];
char data_pic_apartmapew2f_tex__name[26];
fsFile data_pic_apartmapew2f_tex__info[1];
fsFileIndex data_pic_apartmapew2f_tex[1];
char data_pic_apartmapew3f_tex__name[26];
fsFile data_pic_apartmapew3f_tex__info[1];
fsFileIndex data_pic_apartmapew3f_tex[1];
char data_pic_apartmapw_tex__name[23];
fsFile data_pic_apartmapw_tex__info[1];
fsFileIndex data_pic_apartmapw_tex[1];
char data_pic_apt_mgf__name[17];
fsFile data_pic_apt_mgf__info[1];
fsFileIndex data_pic_apt_mgf[1];
char data_pic_bloodtest_tex__name[23];
fsFile data_pic_bloodtest_tex__info[1];
fsFileIndex data_pic_bloodtest_tex[1];
char data_pic_bloodtx_tex__name[21];
fsFile data_pic_bloodtx_tex__info[1];
fsFileIndex data_pic_bloodtx_tex[1];
char data_pic_btest_tex__name[19];
fsFile data_pic_btest_tex__info[1];
fsFileIndex data_pic_btest_tex[1];
char data_pic_carbon_tex__name[20];
fsFile data_pic_carbon_tex__info[1];
fsFileIndex data_pic_carbon_tex[1];
char data_pic_carsol_tex__name[20];
fsFile data_pic_carsol_tex__info[1];
fsFileIndex data_pic_carsol_tex[1];
char data_pic_cesa_tex__name[18];
fsFile data_pic_cesa_tex__info[1];
fsFileIndex data_pic_cesa_tex[1];
char data_pic_clock_clock_tex__name[25];
fsFile data_pic_clock_clock_tex__info[1];
fsFileIndex data_pic_clock_clock_tex[1];
char data_pic_clock_memo_tex__name[24];
fsFile data_pic_clock_memo_tex__info[1];
fsFileIndex data_pic_clock_memo_tex[1];
char data_pic_clock_wall_tex__name[24];
fsFile data_pic_clock_wall_tex__info[1];
fsFileIndex data_pic_clock_wall_tex[1];
char data_pic_comingsoon_tex__name[24];
fsFile data_pic_comingsoon_tex__info[1];
fsFileIndex data_pic_comingsoon_tex[1];
char data_pic_drainage_tex__name[22];
fsFile data_pic_drainage_tex__info[1];
fsFileIndex data_pic_drainage_tex[1];
char data_pic_dust_in_tex__name[21];
fsFile data_pic_dust_in_tex__info[1];
fsFileIndex data_pic_dust_in_tex[1];
char data_pic_dust_out_tex__name[22];
fsFile data_pic_dust_out_tex__info[1];
fsFileIndex data_pic_dust_out_tex[1];
char data_pic_effect0001_tex__name[24];
fsFile data_pic_effect0001_tex__info[1];
fsFileIndex data_pic_effect0001_tex[1];
char data_pic_effect0002_tex__name[24];
fsFile data_pic_effect0002_tex__info[1];
fsFileIndex data_pic_effect0002_tex[1];
char data_pic_etc_mgf__name[17];
fsFile data_pic_etc_mgf__info[1];
fsFileIndex data_pic_etc_mgf[1];
char data_pic_female_tex__name[20];
fsFile data_pic_female_tex__info[1];
fsFileIndex data_pic_female_tex[1];
char data_pic_hospitalmap01_tex__name[27];
fsFile data_pic_hospitalmap01_tex__info[1];
fsFileIndex data_pic_hospitalmap01_tex[1];
char data_pic_hospitalmap02_tex__name[27];
fsFile data_pic_hospitalmap02_tex__info[1];
fsFileIndex data_pic_hospitalmap02_tex[1];
char data_pic_hospitalmapmk_tex__name[27];
fsFile data_pic_hospitalmapmk_tex__info[1];
fsFileIndex data_pic_hospitalmapmk_tex[1];
char data_pic_hsp_mgf__name[17];
fsFile data_pic_hsp_mgf__info[1];
fsFileIndex data_pic_hsp_mgf[1];
char data_pic_itemmenu_tex__name[22];
fsFile data_pic_itemmenu_tex__info[1];
fsFileIndex data_pic_itemmenu_tex[1];
char data_pic_map_mgf__name[17];
fsFile data_pic_map_mgf__info[1];
fsFileIndex data_pic_map_mgf[1];
char data_pic_musiuminfo_tex__name[24];
fsFile data_pic_musiuminfo_tex__info[1];
fsFileIndex data_pic_musiuminfo_tex[1];
char data_pic_p_box_tex__name[19];
fsFile data_pic_p_box_tex__info[1];
fsFileIndex data_pic_p_box_tex[1];
char data_pic_p_box_key01_tex__name[25];
fsFile data_pic_p_box_key01_tex__info[1];
fsFileIndex data_pic_p_box_key01_tex[1];
char data_pic_p_boxnumber_tex__name[25];
fsFile data_pic_p_boxnumber_tex__info[1];
fsFileIndex data_pic_p_boxnumber_tex[1];
char data_pic_p_boxnumber_2_tex__name[27];
fsFile data_pic_p_boxnumber_2_tex__info[1];
fsFileIndex data_pic_p_boxnumber_2_tex[1];
char data_pic_p_diary_tex__name[21];
fsFile data_pic_p_diary_tex__info[1];
fsFileIndex data_pic_p_diary_tex[1];
char data_pic_p_doctormemo_tex__name[26];
fsFile data_pic_p_doctormemo_tex__info[1];
fsFileIndex data_pic_p_doctormemo_tex[1];
char data_pic_p_doctormemo_key_tex__name[30];
fsFile data_pic_p_doctormemo_key_tex__info[1];
fsFileIndex data_pic_p_doctormemo_key_tex[1];
char data_pic_p_drainage_tex__name[24];
fsFile data_pic_p_drainage_tex__info[1];
fsFileIndex data_pic_p_drainage_tex[1];
char data_pic_p_drainage_key_tex__name[28];
fsFile data_pic_p_drainage_key_tex__info[1];
fsFileIndex data_pic_p_drainage_key_tex[1];
char data_pic_p_h_elevator_tex__name[26];
fsFile data_pic_p_h_elevator_tex__info[1];
fsFileIndex data_pic_p_h_elevator_tex[1];
char data_pic_p_h_elevator_botan_tex__name[32];
fsFile data_pic_p_h_elevator_botan_tex__info[1];
fsFileIndex data_pic_p_h_elevator_botan_tex[1];
char data_pic_p_hair_tex__name[20];
fsFile data_pic_p_hair_tex__info[1];
fsFileIndex data_pic_p_hair_tex[1];
char data_pic_p_hair_hair_tex__name[25];
fsFile data_pic_p_hair_hair_tex__info[1];
fsFileIndex data_pic_p_hair_hair_tex[1];
char data_pic_panel_tex__name[19];
fsFile data_pic_panel_tex__info[1];
fsFileIndex data_pic_panel_tex[1];
char data_pic_pboxnumber2_tex__name[25];
fsFile data_pic_pboxnumber2_tex__info[1];
fsFileIndex data_pic_pboxnumber2_tex[1];
char data_pic_title_tex__name[19];
fsFile data_pic_title_tex__info[1];
fsFileIndex data_pic_title_tex[1];
char data_pic_whiteboard_tex__name[24];
fsFile data_pic_whiteboard_tex__info[1];
fsFileIndex data_pic_whiteboard_tex[1];


