typedef union fsFile;
typedef struct fsCdFile;
typedef struct fsMgcFile;
typedef struct fsMgfFile;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct _anon0;
typedef union fsFileIndex;
typedef struct _anon1;


typedef char type_0[32];
typedef fsFileIndex type_1[1];
typedef char type_2[17];
typedef char type_3[28];
typedef fsFile type_4[1];
typedef fsFileIndex type_5[1];
typedef char type_6[27];
typedef fsFile type_7[1];
typedef fsFileIndex type_8[1];
typedef char type_9[32];
typedef fsFile type_10[1];
typedef fsFileIndex type_11[1];
typedef char type_12[29];
typedef fsFile type_13[1];
typedef fsFileIndex type_14[1];
typedef fsFile type_15[1];
typedef char type_16[33];
typedef fsFileIndex type_17[1];
typedef char type_18[27];
typedef fsFile type_19[1];
typedef fsFileIndex type_20[1];
typedef char type_21[32];
typedef fsFileIndex type_22[1];
typedef fsFile type_23[1];
typedef fsFile type_24[1];
typedef char type_25[27];
typedef fsFile type_26[1];
typedef fsFileIndex type_27[1];
typedef char type_28[28];
typedef fsFile type_29[1];
typedef fsFileIndex type_30[1];
typedef fsFile type_31[1];
typedef char type_32[32];
typedef fsFileIndex type_33[1];
typedef char type_34[27];
typedef fsFile type_35[1];
typedef fsFileIndex type_36[1];
typedef fsFileIndex type_37[1];
typedef char type_38[31];
typedef fsFile type_39[1];
typedef char type_40[29];
typedef fsFile type_41[1];
typedef fsFileIndex type_42[1];
typedef char type_43[32];
typedef fsFile type_44[1];
typedef fsFileIndex type_45[1];
typedef char type_46[34];
typedef fsFile type_47[1];
typedef fsFileIndex type_48[1];
typedef char type_49[26];
typedef fsFile type_50[1];
typedef fsFileIndex type_51[1];
typedef char type_52[26];
typedef fsFileIndex type_53[1];
typedef fsFileIndex type_54[1];
typedef fsFile type_55[1];
typedef fsFile type_56[1];

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

char z_data_pic_dls_mgf__name[17];
fsFile z_data_pic_dls_mgf__info[1];
fsFileIndex data_pic_dls_mgf[1];
char z_data_pic_dls_p_hanging_tex__name[27];
fsFile z_data_pic_dls_p_hanging_tex__info[1];
fsFileIndex data_pic_dls_p_hanging_tex[1];
char z_data_pic_dls_p_hanging_2_tex__name[29];
fsFile z_data_pic_dls_p_hanging_2_tex__info[1];
fsFileIndex data_pic_dls_p_hanging_2_tex[1];
char z_data_pic_dls_p_hanging_easy_tex__name[32];
fsFile z_data_pic_dls_p_hanging_easy_tex__info[1];
fsFileIndex data_pic_dls_p_hanging_easy_tex[1];
char z_data_pic_dls_p_hanging_extra_tex__name[33];
fsFile z_data_pic_dls_p_hanging_extra_tex__info[1];
fsFileIndex data_pic_dls_p_hanging_extra_tex[1];
char z_data_pic_dls_p_hanging_hard_tex__name[32];
fsFile z_data_pic_dls_p_hanging_hard_tex__info[1];
fsFileIndex data_pic_dls_p_hanging_hard_tex[1];
char z_data_pic_dls_p_hanging_normal_tex__name[34];
fsFile z_data_pic_dls_p_hanging_normal_tex__info[1];
fsFileIndex data_pic_dls_p_hanging_normal_tex[1];
char z_data_pic_dls_p_magazin_tex__name[27];
fsFile z_data_pic_dls_p_magazin_tex__info[1];
fsFileIndex data_pic_dls_p_magazin_tex[1];
char z_data_pic_dls_p_manacles_off_tex__name[32];
fsFile z_data_pic_dls_p_manacles_off_tex__info[1];
fsFileIndex data_pic_dls_p_manacles_off_tex[1];
char z_data_pic_dls_p_manacles_on_tex__name[31];
fsFile z_data_pic_dls_p_manacles_on_tex__info[1];
fsFileIndex data_pic_dls_p_manacles_on_tex[1];
char z_data_pic_dls_p_marker_tex__name[26];
fsFile z_data_pic_dls_p_marker_tex__info[1];
fsFileIndex data_pic_dls_p_marker_tex[1];
char z_data_pic_dls_p_newspaper_tex__name[29];
fsFile z_data_pic_dls_p_newspaper_tex__info[1];
fsFileIndex data_pic_dls_p_newspaper_tex[1];
char z_data_pic_dls_p_panelrun_tex__name[28];
fsFile z_data_pic_dls_p_panelrun_tex__info[1];
fsFileIndex data_pic_dls_p_panelrun_tex[1];
char z_data_pic_dls_p_panelrun_btn_tex__name[32];
fsFile z_data_pic_dls_p_panelrun_btn_tex__info[1];
fsFileIndex data_pic_dls_p_panelrun_btn_tex[1];
char z_data_pic_dls_p_pull_off_tex__name[28];
fsFile z_data_pic_dls_p_pull_off_tex__info[1];
fsFileIndex data_pic_dls_p_pull_off_tex[1];
char z_data_pic_dls_p_pull_on_tex__name[27];
fsFile z_data_pic_dls_p_pull_on_tex__info[1];
fsFileIndex data_pic_dls_p_pull_on_tex[1];
char z_data_pic_dls_p_sankaku_tex__name[27];
fsFile z_data_pic_dls_p_sankaku_tex__info[1];
fsFileIndex data_pic_dls_p_sankaku_tex[1];
char z_data_pic_dls_p_tablet_tex__name[26];
fsFile z_data_pic_dls_p_tablet_tex__info[1];
fsFileIndex data_pic_dls_p_tablet_tex[1];
char z_data_pic_dls_p_tablet_plate_tex__name[32];
fsFile z_data_pic_dls_p_tablet_plate_tex__info[1];
fsFileIndex data_pic_dls_p_tablet_plate_tex[1];


