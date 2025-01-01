typedef union fsFile;
typedef struct fsCdFile;
typedef struct fsMgcFile;
typedef struct fsMgfFile;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct _anon0;
typedef union fsFileIndex;
typedef struct _anon1;


typedef char type_0[31];
typedef fsFile type_1[1];
typedef char type_2[17];
typedef fsFileIndex type_3[1];
typedef char type_4[24];
typedef fsFileIndex type_5[1];
typedef char type_6[26];
typedef fsFile type_7[1];
typedef fsFileIndex type_8[1];
typedef fsFile type_9[1];
typedef char type_10[24];
typedef fsFileIndex type_11[1];
typedef fsFile type_12[1];
typedef fsFileIndex type_13[1];
typedef fsFile type_14[1];
typedef char type_15[28];
typedef fsFileIndex type_16[1];
typedef fsFile type_17[1];
typedef char type_18[25];
typedef char type_19[27];
typedef fsFileIndex type_20[1];
typedef fsFile type_21[1];
typedef fsFile type_22[1];
typedef fsFileIndex type_23[1];
typedef char type_24[30];
typedef fsFileIndex type_25[1];
typedef fsFile type_26[1];
typedef char type_27[28];
typedef fsFileIndex type_28[1];
typedef char type_29[25];
typedef fsFile type_30[1];
typedef fsFileIndex type_31[1];
typedef fsFile type_32[1];
typedef fsFileIndex type_33[1];
typedef char type_34[29];
typedef fsFile type_35[1];
typedef fsFileIndex type_36[1];
typedef fsFile type_37[1];
typedef char type_38[24];
typedef fsFile type_39[1];
typedef char type_40[32];
typedef fsFile type_41[1];
typedef fsFileIndex type_42[1];
typedef char type_43[27];
typedef fsFileIndex type_44[1];
typedef fsFile type_45[1];
typedef char type_46[29];
typedef fsFileIndex type_47[1];
typedef char type_48[32];
typedef fsFileIndex type_49[1];
typedef fsFile type_50[1];
typedef char type_51[27];
typedef fsFileIndex type_52[1];
typedef char type_53[30];
typedef fsFile type_54[1];
typedef fsFile type_55[1];
typedef fsFileIndex type_56[1];
typedef fsFileIndex type_57[1];
typedef char type_58[34];
typedef fsFile type_59[1];
typedef char type_60[28];
typedef fsFile type_61[1];
typedef fsFileIndex type_62[1];
typedef char type_63[26];
typedef fsFile type_64[1];
typedef fsFileIndex type_65[1];
typedef char type_66[27];
typedef fsFileIndex type_67[1];
typedef fsFile type_68[1];
typedef char type_69[31];
typedef fsFileIndex type_70[1];
typedef char type_71[36];
typedef fsFile type_72[1];
typedef fsFileIndex type_73[1];
typedef char type_74[28];
typedef fsFile type_75[1];
typedef fsFileIndex type_76[1];
typedef fsFile type_77[1];
typedef char type_78[34];
typedef fsFileIndex type_79[1];
typedef fsFile type_80[1];
typedef char type_81[30];
typedef fsFileIndex type_82[1];
typedef fsFile type_83[1];
typedef char type_84[23];
typedef fsFile type_85[1];
typedef fsFileIndex type_86[1];

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

char z_data_pic_hsp_mgf__name[17];
fsFile z_data_pic_hsp_mgf__info[1];
fsFileIndex data_pic_hsp_mgf[1];
char z_data_pic_hsp_carbon_tex__name[24];
fsFile z_data_pic_hsp_carbon_tex__info[1];
fsFileIndex data_pic_hsp_carbon_tex[1];
char z_data_pic_hsp_musiuminfo_tex__name[28];
fsFile z_data_pic_hsp_musiuminfo_tex__info[1];
fsFileIndex data_pic_hsp_musiuminfo_tex[1];
char z_data_pic_hsp_p_box_tex__name[23];
fsFile z_data_pic_hsp_p_box_tex__info[1];
fsFileIndex data_pic_hsp_p_box_tex[1];
char z_data_pic_hsp_p_box_key_tex__name[27];
fsFile z_data_pic_hsp_p_box_key_tex__info[1];
fsFileIndex data_pic_hsp_p_box_key_tex[1];
char z_data_pic_hsp_p_boxnumber_tex__name[29];
fsFile z_data_pic_hsp_p_boxnumber_tex__info[1];
fsFileIndex data_pic_hsp_p_boxnumber_tex[1];
char z_data_pic_hsp_p_boxnumber_2_tex__name[31];
fsFile z_data_pic_hsp_p_boxnumber_2_tex__info[1];
fsFileIndex data_pic_hsp_p_boxnumber_2_tex[1];
char z_data_pic_hsp_p_carbon_tex__name[26];
fsFile z_data_pic_hsp_p_carbon_tex__info[1];
fsFileIndex data_pic_hsp_p_carbon_tex[1];
char z_data_pic_hsp_p_diary_tex__name[25];
fsFile z_data_pic_hsp_p_diary_tex__info[1];
fsFileIndex data_pic_hsp_p_diary_tex[1];
char z_data_pic_hsp_p_doctormemo_tex__name[30];
fsFile z_data_pic_hsp_p_doctormemo_tex__info[1];
fsFileIndex data_pic_hsp_p_doctormemo_tex[1];
char z_data_pic_hsp_p_doctormemo_key_tex__name[34];
fsFile z_data_pic_hsp_p_doctormemo_key_tex__info[1];
fsFileIndex data_pic_hsp_p_doctormemo_key_tex[1];
char z_data_pic_hsp_p_drainage_tex__name[28];
fsFile z_data_pic_hsp_p_drainage_tex__info[1];
fsFileIndex data_pic_hsp_p_drainage_tex[1];
char z_data_pic_hsp_p_drainage_key_tex__name[32];
fsFile z_data_pic_hsp_p_drainage_key_tex__info[1];
fsFileIndex data_pic_hsp_p_drainage_key_tex[1];
char z_data_pic_hsp_p_female_tex__name[26];
fsFile z_data_pic_hsp_p_female_tex__info[1];
fsFileIndex data_pic_hsp_p_female_tex[1];
char z_data_pic_hsp_p_female_ring_tex__name[31];
fsFile z_data_pic_hsp_p_female_ring_tex__info[1];
fsFileIndex data_pic_hsp_p_female_ring_tex[1];
char z_data_pic_hsp_p_h_elevator_tex__name[30];
fsFile z_data_pic_hsp_p_h_elevator_tex__info[1];
fsFileIndex data_pic_hsp_p_h_elevator_tex[1];
char z_data_pic_hsp_p_h_elevator_2_tex__name[32];
fsFile z_data_pic_hsp_p_h_elevator_2_tex__info[1];
fsFileIndex data_pic_hsp_p_h_elevator_2_tex[1];
char z_data_pic_hsp_p_h_elevator_botan_tex__name[36];
fsFile z_data_pic_hsp_p_h_elevator_botan_tex__info[1];
fsFileIndex data_pic_hsp_p_h_elevator_botan_tex[1];
char z_data_pic_hsp_p_hair_tex__name[24];
fsFile z_data_pic_hsp_p_hair_tex__info[1];
fsFileIndex data_pic_hsp_p_hair_tex[1];
char z_data_pic_hsp_p_hair_hair_tex__name[29];
fsFile z_data_pic_hsp_p_hair_hair_tex__info[1];
fsFileIndex data_pic_hsp_p_hair_hair_tex[1];
char z_data_pic_hsp_p_museuminfo_key_tex__name[34];
fsFile z_data_pic_hsp_p_museuminfo_key_tex__info[1];
fsFileIndex data_pic_hsp_p_museuminfo_key_tex[1];
char z_data_pic_hsp_p_musiuminfo_tex__name[30];
fsFile z_data_pic_hsp_p_musiuminfo_tex__info[1];
fsFileIndex data_pic_hsp_p_musiuminfo_tex[1];
char z_data_pic_hsp_p_panel_tex__name[25];
fsFile z_data_pic_hsp_p_panel_tex__info[1];
fsFileIndex data_pic_hsp_p_panel_tex[1];
char z_data_pic_hsp_p_panel02_tex__name[27];
fsFile z_data_pic_hsp_p_panel02_tex__info[1];
fsFileIndex data_pic_hsp_p_panel02_tex[1];
char z_data_pic_hsp_p_patient_tex__name[27];
fsFile z_data_pic_hsp_p_patient_tex__info[1];
fsFileIndex data_pic_hsp_p_patient_tex[1];
char z_data_pic_hsp_p_quiz_tex__name[24];
fsFile z_data_pic_hsp_p_quiz_tex__info[1];
fsFileIndex data_pic_hsp_p_quiz_tex[1];
char z_data_pic_hsp_p_quiz_btn_tex__name[28];
fsFile z_data_pic_hsp_p_quiz_btn_tex__info[1];
fsFileIndex data_pic_hsp_p_quiz_btn_tex[1];
char z_data_pic_hsp_pboxkey01_tex__name[27];
fsFile z_data_pic_hsp_pboxkey01_tex__info[1];
fsFileIndex data_pic_hsp_pboxkey01_tex[1];
char z_data_pic_hsp_whiteboard_tex__name[28];
fsFile z_data_pic_hsp_whiteboard_tex__info[1];
fsFileIndex data_pic_hsp_whiteboard_tex[1];


