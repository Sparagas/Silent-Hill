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
typedef char type_1[24];
typedef fsFile type_2[1];
typedef fsFile type_3[1];
typedef fsFileIndex type_4[1];
typedef char type_5[34];
typedef fsFileIndex type_6[1];
typedef char type_7[27];
typedef fsFile type_8[1];
typedef fsFile type_9[1];
typedef fsFile type_10[1];
typedef fsFileIndex type_11[1];
typedef char type_12[24];
typedef fsFileIndex type_13[1];
typedef char type_14[31];
typedef fsFile type_15[1];
typedef fsFile type_16[1];
typedef fsFileIndex type_17[1];
typedef char type_18[31];
typedef fsFileIndex type_19[1];
typedef char type_20[29];
typedef fsFile type_21[1];
typedef fsFileIndex type_22[1];
typedef char type_23[28];
typedef fsFileIndex type_24[1];
typedef char type_25[27];
typedef fsFile type_26[1];
typedef fsFile type_27[1];
typedef char type_28[28];
typedef fsFileIndex type_29[1];
typedef fsFileIndex type_30[1];
typedef char type_31[30];
typedef fsFile type_32[1];
typedef fsFile type_33[1];
typedef fsFileIndex type_34[1];
typedef char type_35[25];
typedef fsFileIndex type_36[1];
typedef char type_37[25];
typedef fsFile type_38[1];
typedef fsFile type_39[1];
typedef fsFileIndex type_40[1];
typedef char type_41[32];
typedef fsFileIndex type_42[1];
typedef char type_43[28];
typedef fsFile type_44[1];
typedef fsFileIndex type_45[1];
typedef fsFile type_46[1];
typedef char type_47[23];
typedef fsFileIndex type_48[1];
typedef char type_49[36];
typedef fsFile type_50[1];
typedef char type_51[17];
typedef fsFile type_52[1];
typedef fsFileIndex type_53[1];
typedef char type_54[30];
typedef fsFileIndex type_55[1];
typedef char type_56[27];
typedef fsFile type_57[1];
typedef fsFile type_58[1];
typedef fsFileIndex type_59[1];
typedef char type_60[26];
typedef fsFileIndex type_61[1];
typedef fsFile type_62[1];
typedef fsFile type_63[1];
typedef fsFileIndex type_64[1];
typedef char type_65[29];

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

char data_pic_hsp_mgf__name[17];
fsFile data_pic_hsp_mgf__info[1];
fsFileIndex data_pic_hsp_mgf[1];
char data_pic_hsp_carbon_tex__name[24];
fsFile data_pic_hsp_carbon_tex__info[1];
fsFileIndex data_pic_hsp_carbon_tex[1];
char data_pic_hsp_musiuminfo_tex__name[28];
fsFile data_pic_hsp_musiuminfo_tex__info[1];
fsFileIndex data_pic_hsp_musiuminfo_tex[1];
char data_pic_hsp_p_box_tex__name[23];
fsFile data_pic_hsp_p_box_tex__info[1];
fsFileIndex data_pic_hsp_p_box_tex[1];
char data_pic_hsp_p_boxnumber_tex__name[29];
fsFile data_pic_hsp_p_boxnumber_tex__info[1];
fsFileIndex data_pic_hsp_p_boxnumber_tex[1];
char data_pic_hsp_p_boxnumber_2_tex__name[31];
fsFile data_pic_hsp_p_boxnumber_2_tex__info[1];
fsFileIndex data_pic_hsp_p_boxnumber_2_tex[1];
char data_pic_hsp_p_diary_tex__name[25];
fsFile data_pic_hsp_p_diary_tex__info[1];
fsFileIndex data_pic_hsp_p_diary_tex[1];
char data_pic_hsp_p_doctormemo_tex__name[30];
fsFile data_pic_hsp_p_doctormemo_tex__info[1];
fsFileIndex data_pic_hsp_p_doctormemo_tex[1];
char data_pic_hsp_p_doctormemo_key_tex__name[34];
fsFile data_pic_hsp_p_doctormemo_key_tex__info[1];
fsFileIndex data_pic_hsp_p_doctormemo_key_tex[1];
char data_pic_hsp_p_drainage_tex__name[28];
fsFile data_pic_hsp_p_drainage_tex__info[1];
fsFileIndex data_pic_hsp_p_drainage_tex[1];
char data_pic_hsp_p_drainage_key_tex__name[32];
fsFile data_pic_hsp_p_drainage_key_tex__info[1];
fsFileIndex data_pic_hsp_p_drainage_key_tex[1];
char data_pic_hsp_p_female_tex__name[26];
fsFile data_pic_hsp_p_female_tex__info[1];
fsFileIndex data_pic_hsp_p_female_tex[1];
char data_pic_hsp_p_female_ring_tex__name[31];
fsFile data_pic_hsp_p_female_ring_tex__info[1];
fsFileIndex data_pic_hsp_p_female_ring_tex[1];
char data_pic_hsp_p_h_elevator_tex__name[30];
fsFile data_pic_hsp_p_h_elevator_tex__info[1];
fsFileIndex data_pic_hsp_p_h_elevator_tex[1];
char data_pic_hsp_p_h_elevator_botan_tex__name[36];
fsFile data_pic_hsp_p_h_elevator_botan_tex__info[1];
fsFileIndex data_pic_hsp_p_h_elevator_botan_tex[1];
char data_pic_hsp_p_hair_tex__name[24];
fsFile data_pic_hsp_p_hair_tex__info[1];
fsFileIndex data_pic_hsp_p_hair_tex[1];
char data_pic_hsp_p_hair_hair_tex__name[29];
fsFile data_pic_hsp_p_hair_hair_tex__info[1];
fsFileIndex data_pic_hsp_p_hair_hair_tex[1];
char data_pic_hsp_p_panel_tex__name[25];
fsFile data_pic_hsp_p_panel_tex__info[1];
fsFileIndex data_pic_hsp_p_panel_tex[1];
char data_pic_hsp_p_panel02_tex__name[27];
fsFile data_pic_hsp_p_panel02_tex__info[1];
fsFileIndex data_pic_hsp_p_panel02_tex[1];
char data_pic_hsp_p_patient_tex__name[27];
fsFile data_pic_hsp_p_patient_tex__info[1];
fsFileIndex data_pic_hsp_p_patient_tex[1];
char data_pic_hsp_pboxkey01_tex__name[27];
fsFile data_pic_hsp_pboxkey01_tex__info[1];
fsFileIndex data_pic_hsp_pboxkey01_tex[1];
char data_pic_hsp_whiteboard_tex__name[28];
fsFile data_pic_hsp_whiteboard_tex__info[1];
fsFileIndex data_pic_hsp_whiteboard_tex[1];


