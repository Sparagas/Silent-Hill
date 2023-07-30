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
typedef char type_2[17];
typedef fsFileIndex type_3[1];
typedef char type_4[25];
typedef fsFileIndex type_5[1];
typedef char type_6[27];
typedef fsFile type_7[1];
typedef fsFile type_8[1];
typedef fsFileIndex type_9[1];
typedef fsFileIndex type_10[1];
typedef char type_11[32];
typedef fsFile type_12[1];
typedef fsFile type_13[1];
typedef fsFileIndex type_14[1];
typedef char type_15[28];
typedef fsFileIndex type_16[1];
typedef char type_17[29];
typedef fsFile type_18[1];
typedef fsFileIndex type_19[1];
typedef char type_20[25];
typedef fsFileIndex type_21[1];
typedef char type_22[22];
typedef fsFile type_23[1];
typedef fsFile type_24[1];
typedef fsFileIndex type_25[1];
typedef fsFileIndex type_26[1];
typedef char type_27[27];
typedef fsFile type_28[1];
typedef char type_29[23];
typedef fsFile type_30[1];
typedef fsFile type_31[1];
typedef fsFileIndex type_32[1];
typedef char type_33[27];
typedef fsFileIndex type_34[1];
typedef char type_35[25];
typedef fsFile type_36[1];
typedef fsFileIndex type_37[1];
typedef char type_38[24];
typedef fsFileIndex type_39[1];
typedef char type_40[23];
typedef fsFile type_41[1];
typedef fsFile type_42[1];
typedef fsFileIndex type_43[1];
typedef char type_44[30];
typedef char type_45[24];
typedef fsFile type_46[1];
typedef fsFile type_47[1];
typedef fsFileIndex type_48[1];
typedef fsFileIndex type_49[1];
typedef char type_50[26];
typedef char type_51[21];
typedef fsFile type_52[1];
typedef fsFile type_53[1];
typedef fsFileIndex type_54[1];
typedef char type_55[26];
typedef fsFileIndex type_56[1];
typedef fsFile type_57[1];
typedef fsFile type_58[1];
typedef fsFileIndex type_59[1];
typedef fsFileIndex type_60[1];
typedef char type_61[24];
typedef char type_62[22];

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

char z_data_pic_etc_mgf__name[17];
fsFile z_data_pic_etc_mgf__info[1];
fsFileIndex data_pic_etc_mgf[1];
char z_data_pic_etc_botan_tex__name[23];
fsFile z_data_pic_etc_botan_tex__info[1];
fsFileIndex data_pic_etc_botan_tex[1];
char z_data_pic_etc_carsol_tex__name[24];
fsFile z_data_pic_etc_carsol_tex__info[1];
fsFileIndex data_pic_etc_carsol_tex[1];
char z_data_pic_etc_cesa_tex__name[22];
fsFile z_data_pic_etc_cesa_tex__info[1];
fsFileIndex data_pic_etc_cesa_tex[1];
char z_data_pic_etc_comingsoon_tex__name[28];
fsFile z_data_pic_etc_comingsoon_tex__info[1];
fsFileIndex data_pic_etc_comingsoon_tex[1];
char z_data_pic_etc_gameover1_tex__name[27];
fsFile z_data_pic_etc_gameover1_tex__info[1];
fsFileIndex data_pic_etc_gameover1_tex[1];
char z_data_pic_etc_itemmenu_tex__name[26];
fsFile z_data_pic_etc_itemmenu_tex__info[1];
fsFileIndex data_pic_etc_itemmenu_tex[1];
char z_data_pic_etc_itemmenu2_tex__name[27];
fsFile z_data_pic_etc_itemmenu2_tex__info[1];
fsFileIndex data_pic_etc_itemmenu2_tex[1];
char z_data_pic_etc_kcet_tex__name[22];
fsFile z_data_pic_etc_kcet_tex__info[1];
fsFileIndex data_pic_etc_kcet_tex[1];
char z_data_pic_etc_konami_tex__name[24];
fsFile z_data_pic_etc_konami_tex__info[1];
fsFileIndex data_pic_etc_konami_tex[1];
char z_data_pic_etc_konami_r_tex__name[26];
fsFile z_data_pic_etc_konami_r_tex__info[1];
fsFileIndex data_pic_etc_konami_r_tex[1];
char z_data_pic_etc_p_laura_letter_tex__name[32];
fsFile z_data_pic_etc_p_laura_letter_tex__info[1];
fsFileIndex data_pic_etc_p_laura_letter_tex[1];
char z_data_pic_etc_p_letterm_tex__name[27];
fsFile z_data_pic_etc_p_letterm_tex__info[1];
fsFileIndex data_pic_etc_p_letterm_tex[1];
char z_data_pic_etc_p_lostmemory_tex__name[30];
fsFile z_data_pic_etc_p_lostmemory_tex__info[1];
fsFileIndex data_pic_etc_p_lostmemory_tex[1];
char z_data_pic_etc_p_memo_tex__name[24];
fsFile z_data_pic_etc_p_memo_tex__info[1];
fsFileIndex data_pic_etc_p_memo_tex[1];
char z_data_pic_etc_p_redreling_tex__name[29];
fsFile z_data_pic_etc_p_redreling_tex__info[1];
fsFileIndex data_pic_etc_p_redreling_tex[1];
char z_data_pic_etc_savebg1_tex__name[25];
fsFile z_data_pic_etc_savebg1_tex__info[1];
fsFileIndex data_pic_etc_savebg1_tex[1];
char z_data_pic_etc_sce_tex__name[21];
fsFile z_data_pic_etc_sce_tex__info[1];
fsFileIndex data_pic_etc_sce_tex[1];
char z_data_pic_etc_start00_tex__name[25];
fsFile z_data_pic_etc_start00_tex__info[1];
fsFileIndex data_pic_etc_start00_tex[1];
char z_data_pic_etc_start01_tex__name[25];
fsFile z_data_pic_etc_start01_tex__info[1];
fsFileIndex data_pic_etc_start01_tex[1];
char z_data_pic_etc_title_tex__name[23];
fsFile z_data_pic_etc_title_tex__info[1];
fsFileIndex data_pic_etc_title_tex[1];


