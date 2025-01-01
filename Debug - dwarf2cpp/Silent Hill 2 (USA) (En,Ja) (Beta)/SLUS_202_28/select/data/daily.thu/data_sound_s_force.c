typedef union fsFile;
typedef struct fsCdFile;
typedef struct fsMgcFile;
typedef struct fsMgfFile;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct _anon0;
typedef union fsFileIndex;
typedef struct _anon1;


typedef char type_0[37];
typedef char type_1[31];
typedef fsFile type_2[1];
typedef fsFile type_3[1];
typedef fsFileIndex type_4[1];
typedef char type_5[23];
typedef char type_6[34];
typedef char type_7[33];
typedef fsFile type_8[1];
typedef fsFileIndex type_9[1];
typedef char type_10[35];
typedef fsFileIndex type_11[1];
typedef char type_12[27];
typedef fsFile type_13[1];
typedef fsFile type_14[1];
typedef fsFile type_15[1];
typedef fsFileIndex type_16[1];
typedef fsFileIndex type_17[1];
typedef char type_18[37];
typedef char type_19[34];
typedef fsFile type_20[1];
typedef fsFileIndex type_21[1];
typedef fsFileIndex type_22[1];
typedef char type_23[30];
typedef fsFile type_24[1];
typedef fsFile type_25[1];
typedef fsFileIndex type_26[1];
typedef fsFileIndex type_27[1];
typedef char type_28[34];
typedef fsFileIndex type_29[1];
typedef fsFile type_30[1];
typedef char type_31[37];
typedef fsFile type_32[1];
typedef fsFile type_33[1];
typedef fsFileIndex type_34[1];
typedef char type_35[34];
typedef char type_36[35];
typedef fsFileIndex type_37[1];
typedef fsFile type_38[1];
typedef fsFileIndex type_39[1];
typedef char type_40[35];
typedef char type_41[35];
typedef fsFileIndex type_42[1];
typedef fsFile type_43[1];
typedef fsFile type_44[1];
typedef fsFileIndex type_45[1];
typedef char type_46[37];
typedef fsFileIndex type_47[1];
typedef char type_48[37];
typedef fsFile type_49[1];
typedef char type_50[34];
typedef fsFile type_51[1];
typedef fsFile type_52[1];
typedef fsFileIndex type_53[1];
typedef char type_54[33];
typedef fsFile type_55[1];
typedef fsFile type_56[1];
typedef fsFileIndex type_57[1];
typedef char type_58[35];
typedef fsFileIndex type_59[1];
typedef char type_60[34];
typedef fsFileIndex type_61[1];
typedef fsFile type_62[1];
typedef char type_63[37];
typedef fsFile type_64[1];
typedef fsFileIndex type_65[1];
typedef char type_66[34];
typedef char type_67[35];
typedef fsFile type_68[1];
typedef fsFileIndex type_69[1];
typedef fsFileIndex type_70[1];
typedef char type_71[33];
typedef fsFile type_72[1];
typedef fsFileIndex type_73[1];
typedef fsFile type_74[1];
typedef fsFileIndex type_75[1];
typedef fsFileIndex type_76[1];
typedef char type_77[37];
typedef char type_78[37];
typedef char type_79[34];
typedef fsFile type_80[1];
typedef fsFile type_81[1];
typedef fsFileIndex type_82[1];
typedef char type_83[33];
typedef fsFile type_84[1];
typedef fsFile type_85[1];
typedef char type_86[35];
typedef fsFileIndex type_87[1];
typedef fsFileIndex type_88[1];
typedef char type_89[34];
typedef fsFile type_90[1];
typedef fsFile type_91[1];
typedef fsFile type_92[1];
typedef fsFileIndex type_93[1];
typedef char type_94[37];
typedef fsFileIndex type_95[1];
typedef char type_96[34];
typedef char type_97[35];
typedef fsFile type_98[1];
typedef fsFileIndex type_99[1];
typedef fsFileIndex type_100[1];
typedef fsFile type_101[1];
typedef char type_102[33];
typedef fsFile type_103[1];
typedef fsFileIndex type_104[1];
typedef fsFileIndex type_105[1];
typedef fsFile type_106[1];
typedef fsFileIndex type_107[1];

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

char z_data_sound_s_force_mgf__name[23];
fsFile z_data_sound_s_force_mgf__info[1];
fsFileIndex data_sound_s_force_mgf[1];
char z_data_sound_s_force_apart_e1f_sfc__name[33];
fsFile z_data_sound_s_force_apart_e1f_sfc__info[1];
fsFileIndex data_sound_s_force_apart_e1f_sfc[1];
char z_data_sound_s_force_apart_e2f_sfc__name[33];
fsFile z_data_sound_s_force_apart_e2f_sfc__info[1];
fsFileIndex data_sound_s_force_apart_e2f_sfc[1];
char z_data_sound_s_force_apart_e3f_sfc__name[33];
fsFile z_data_sound_s_force_apart_e3f_sfc__info[1];
fsFileIndex data_sound_s_force_apart_e3f_sfc[1];
char z_data_sound_s_force_apart_stair_sfc__name[35];
fsFile z_data_sound_s_force_apart_stair_sfc__info[1];
fsFileIndex data_sound_s_force_apart_stair_sfc[1];
char z_data_sound_s_force_apart_w1f_sfc__name[33];
fsFile z_data_sound_s_force_apart_w1f_sfc__info[1];
fsFileIndex data_sound_s_force_apart_w1f_sfc[1];
char z_data_sound_s_force_apart_w2f_sfc__name[33];
fsFile z_data_sound_s_force_apart_w2f_sfc__info[1];
fsFileIndex data_sound_s_force_apart_w2f_sfc[1];
char z_data_sound_s_force_delusion_2_sfc__name[34];
fsFile z_data_sound_s_force_delusion_2_sfc__info[1];
fsFileIndex data_sound_s_force_delusion_2_sfc[1];
char z_data_sound_s_force_delusion_3_sfc__name[34];
fsFile z_data_sound_s_force_delusion_3_sfc__info[1];
fsFileIndex data_sound_s_force_delusion_3_sfc[1];
char z_data_sound_s_force_eddie_boss_sfc__name[34];
fsFile z_data_sound_s_force_eddie_boss_sfc__info[1];
fsFileIndex data_sound_s_force_eddie_boss_sfc[1];
char z_data_sound_s_force_end_sfc__name[27];
fsFile z_data_sound_s_force_end_sfc__info[1];
fsFileIndex data_sound_s_force_end_sfc[1];
char z_data_sound_s_force_hospital_1f_b_sfc__name[37];
fsFile z_data_sound_s_force_hospital_1f_b_sfc__info[1];
fsFileIndex data_sound_s_force_hospital_1f_b_sfc[1];
char z_data_sound_s_force_hospital_1f_f_sfc__name[37];
fsFile z_data_sound_s_force_hospital_1f_f_sfc__info[1];
fsFileIndex data_sound_s_force_hospital_1f_f_sfc[1];
char z_data_sound_s_force_hospital_2f_b_sfc__name[37];
fsFile z_data_sound_s_force_hospital_2f_b_sfc__info[1];
fsFileIndex data_sound_s_force_hospital_2f_b_sfc[1];
char z_data_sound_s_force_hospital_2f_f_sfc__name[37];
fsFile z_data_sound_s_force_hospital_2f_f_sfc__info[1];
fsFileIndex data_sound_s_force_hospital_2f_f_sfc[1];
char z_data_sound_s_force_hospital_3f_b_sfc__name[37];
fsFile z_data_sound_s_force_hospital_3f_b_sfc__info[1];
fsFileIndex data_sound_s_force_hospital_3f_b_sfc[1];
char z_data_sound_s_force_hospital_3f_f_sfc__name[37];
fsFile z_data_sound_s_force_hospital_3f_f_sfc__info[1];
fsFileIndex data_sound_s_force_hospital_3f_f_sfc[1];
char z_data_sound_s_force_hospital_bf_b_sfc__name[37];
fsFile z_data_sound_s_force_hospital_bf_b_sfc__info[1];
fsFileIndex data_sound_s_force_hospital_bf_b_sfc[1];
char z_data_sound_s_force_hospital_pass_sfc__name[37];
fsFile z_data_sound_s_force_hospital_pass_sfc__info[1];
fsFileIndex data_sound_s_force_hospital_pass_sfc[1];
char z_data_sound_s_force_hospital_rf_f_sfc__name[37];
fsFile z_data_sound_s_force_hospital_rf_f_sfc__info[1];
fsFileIndex data_sound_s_force_hospital_rf_f_sfc[1];
char z_data_sound_s_force_hotel_1f_b_sfc__name[34];
fsFile z_data_sound_s_force_hotel_1f_b_sfc__info[1];
fsFileIndex data_sound_s_force_hotel_1f_b_sfc[1];
char z_data_sound_s_force_hotel_1f_f_sfc__name[34];
fsFile z_data_sound_s_force_hotel_1f_f_sfc__info[1];
fsFileIndex data_sound_s_force_hotel_1f_f_sfc[1];
char z_data_sound_s_force_hotel_2f_b_sfc__name[34];
fsFile z_data_sound_s_force_hotel_2f_b_sfc__info[1];
fsFileIndex data_sound_s_force_hotel_2f_b_sfc[1];
char z_data_sound_s_force_hotel_2f_f_sfc__name[34];
fsFile z_data_sound_s_force_hotel_2f_f_sfc__info[1];
fsFileIndex data_sound_s_force_hotel_2f_f_sfc[1];
char z_data_sound_s_force_hotel_3f_b_sfc__name[34];
fsFile z_data_sound_s_force_hotel_3f_b_sfc__info[1];
fsFileIndex data_sound_s_force_hotel_3f_b_sfc[1];
char z_data_sound_s_force_hotel_bf_b_sfc__name[34];
fsFile z_data_sound_s_force_hotel_bf_b_sfc__info[1];
fsFileIndex data_sound_s_force_hotel_bf_b_sfc[1];
char z_data_sound_s_force_hotel_bf_f_sfc__name[34];
fsFile z_data_sound_s_force_hotel_bf_f_sfc__info[1];
fsFileIndex data_sound_s_force_hotel_bf_f_sfc[1];
char z_data_sound_s_force_iketani_sfc__name[31];
fsFile z_data_sound_s_force_iketani_sfc__info[1];
fsFileIndex data_sound_s_force_iketani_sfc[1];
char z_data_sound_s_force_labyrinth_e_sfc__name[35];
fsFile z_data_sound_s_force_labyrinth_e_sfc__info[1];
fsFileIndex data_sound_s_force_labyrinth_e_sfc[1];
char z_data_sound_s_force_labyrinth_n_sfc__name[35];
fsFile z_data_sound_s_force_labyrinth_n_sfc__info[1];
fsFileIndex data_sound_s_force_labyrinth_n_sfc[1];
char z_data_sound_s_force_labyrinth_w_sfc__name[35];
fsFile z_data_sound_s_force_labyrinth_w_sfc__info[1];
fsFileIndex data_sound_s_force_labyrinth_w_sfc[1];
char z_data_sound_s_force_prison_sfc__name[30];
fsFile z_data_sound_s_force_prison_sfc__info[1];
fsFileIndex data_sound_s_force_prison_sfc[1];
char z_data_sound_s_force_town_east_a_sfc__name[35];
fsFile z_data_sound_s_force_town_east_a_sfc__info[1];
fsFileIndex data_sound_s_force_town_east_a_sfc[1];
char z_data_sound_s_force_town_east_b_sfc__name[35];
fsFile z_data_sound_s_force_town_east_b_sfc__info[1];
fsFileIndex data_sound_s_force_town_east_b_sfc[1];
char z_data_sound_s_force_town_west_a_sfc__name[35];
fsFile z_data_sound_s_force_town_west_a_sfc__info[1];
fsFileIndex data_sound_s_force_town_west_a_sfc[1];
char z_data_sound_s_force_town_west_b_sfc__name[35];
fsFile z_data_sound_s_force_town_west_b_sfc__info[1];
fsFileIndex data_sound_s_force_town_west_b_sfc[1];


