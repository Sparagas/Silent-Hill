typedef union fsFile;
typedef struct fsCdFile;
typedef struct fsMgcFile;
typedef struct fsMgfFile;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct _anon0;
typedef union fsFileIndex;
typedef struct _anon1;


typedef char type_0[34];
typedef fsFileIndex type_1[1];
typedef fsFile type_2[1];
typedef char type_3[17];
typedef fsFile type_4[1];
typedef fsFileIndex type_5[1];
typedef char type_6[29];
typedef fsFileIndex type_7[1];
typedef fsFile type_8[1];
typedef char type_9[29];
typedef fsFile type_10[1];
typedef fsFileIndex type_11[1];
typedef char type_12[27];
typedef fsFileIndex type_13[1];
typedef char type_14[33];
typedef fsFile type_15[1];
typedef fsFile type_16[1];
typedef fsFileIndex type_17[1];
typedef char type_18[29];
typedef fsFileIndex type_19[1];
typedef char type_20[32];
typedef fsFile type_21[1];
typedef fsFile type_22[1];
typedef fsFileIndex type_23[1];
typedef char type_24[28];
typedef fsFileIndex type_25[1];
typedef fsFile type_26[1];
typedef char type_27[25];
typedef fsFile type_28[1];
typedef fsFile type_29[1];
typedef fsFileIndex type_30[1];
typedef char type_31[22];
typedef char type_32[28];
typedef fsFileIndex type_33[1];
typedef fsFile type_34[1];
typedef fsFileIndex type_35[1];
typedef fsFile type_36[1];
typedef char type_37[28];
typedef fsFileIndex type_38[1];
typedef char type_39[26];
typedef fsFile type_40[1];
typedef fsFile type_41[1];
typedef fsFileIndex type_42[1];
typedef char type_43[29];
typedef fsFileIndex type_44[1];
typedef fsFile type_45[1];
typedef char type_46[25];
typedef fsFile type_47[1];
typedef char type_48[21];
typedef fsFileIndex type_49[1];
typedef char type_50[32];
typedef fsFileIndex type_51[1];
typedef fsFile type_52[1];
typedef fsFileIndex type_53[1];
typedef fsFile type_54[1];
typedef char type_55[32];
typedef fsFileIndex type_56[1];
typedef char type_57[27];
typedef fsFile type_58[1];
typedef fsFile type_59[1];
typedef fsFileIndex type_60[1];
typedef char type_61[29];
typedef fsFileIndex type_62[1];
typedef fsFile type_63[1];
typedef char type_64[27];
typedef fsFileIndex type_65[1];
typedef fsFile type_66[1];
typedef char type_67[23];
typedef fsFileIndex type_68[1];

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

char z_data_pic_htl_mgf__name[17];
fsFile z_data_pic_htl_mgf__info[1];
fsFileIndex data_pic_htl_mgf[1];
char z_data_pic_htl_dram_tex__name[22];
fsFile z_data_pic_htl_dram_tex__info[1];
fsFileIndex data_pic_htl_dram_tex[1];
char z_data_pic_htl_egg_tex__name[21];
fsFile z_data_pic_htl_egg_tex__info[1];
fsFileIndex data_pic_htl_egg_tex[1];
char z_data_pic_htl_maker_tex__name[23];
fsFile z_data_pic_htl_maker_tex__info[1];
fsFileIndex data_pic_htl_maker_tex[1];
char z_data_pic_htl_p_bag_close_tex__name[29];
fsFile z_data_pic_htl_p_bag_close_tex__info[1];
fsFileIndex data_pic_htl_p_bag_close_tex[1];
char z_data_pic_htl_p_bag_open_tex__name[28];
fsFile z_data_pic_htl_p_bag_open_tex__info[1];
fsFileIndex data_pic_htl_p_bag_open_tex[1];
char z_data_pic_htl_p_bag_open_key_tex__name[32];
fsFile z_data_pic_htl_p_bag_open_key_tex__info[1];
fsFileIndex data_pic_htl_p_bag_open_key_tex[1];
char z_data_pic_htl_p_can_close_tex__name[29];
fsFile z_data_pic_htl_p_can_close_tex__info[1];
fsFileIndex data_pic_htl_p_can_close_tex[1];
char z_data_pic_htl_p_can_open_tex__name[28];
fsFile z_data_pic_htl_p_can_open_tex__info[1];
fsFileIndex data_pic_htl_p_can_open_tex[1];
char z_data_pic_htl_p_can_open2_tex__name[29];
fsFile z_data_pic_htl_p_can_open2_tex__info[1];
fsFileIndex data_pic_htl_p_can_open2_tex[1];
char z_data_pic_htl_p_egghollow_tex__name[29];
fsFile z_data_pic_htl_p_egghollow_tex__info[1];
fsFileIndex data_pic_htl_p_egghollow_tex[1];
char z_data_pic_htl_p_hanging_tex__name[27];
fsFile z_data_pic_htl_p_hanging_tex__info[1];
fsFileIndex data_pic_htl_p_hanging_tex[1];
char z_data_pic_htl_p_hanging2_tex__name[28];
fsFile z_data_pic_htl_p_hanging2_tex__info[1];
fsFileIndex data_pic_htl_p_hanging2_tex[1];
char z_data_pic_htl_p_htl_elevator_tex__name[32];
fsFile z_data_pic_htl_p_htl_elevator_tex__info[1];
fsFileIndex data_pic_htl_p_htl_elevator_tex[1];
char z_data_pic_htl_p_htl_elevator_2_tex__name[34];
fsFile z_data_pic_htl_p_htl_elevator_2_tex__info[1];
fsFileIndex data_pic_htl_p_htl_elevator_2_tex[1];
char z_data_pic_htl_p_laura_letter_tex__name[32];
fsFile z_data_pic_htl_p_laura_letter_tex__info[1];
fsFileIndex data_pic_htl_p_laura_letter_tex[1];
char z_data_pic_htl_p_marker_tex__name[26];
fsFile z_data_pic_htl_p_marker_tex__info[1];
fsFileIndex data_pic_htl_p_marker_tex[1];
char z_data_pic_htl_p_receipt_tex__name[27];
fsFile z_data_pic_htl_p_receipt_tex__info[1];
fsFileIndex data_pic_htl_p_receipt_tex[1];
char z_data_pic_htl_p_redreling_tex__name[29];
fsFile z_data_pic_htl_p_redreling_tex__info[1];
fsFileIndex data_pic_htl_p_redreling_tex[1];
char z_data_pic_htl_p_trank_tex__name[25];
fsFile z_data_pic_htl_p_trank_tex__info[1];
fsFileIndex data_pic_htl_p_trank_tex[1];
char z_data_pic_htl_p_video_tex__name[25];
fsFile z_data_pic_htl_p_video_tex__info[1];
fsFileIndex data_pic_htl_p_video_tex[1];
char z_data_pic_htl_p_video02_tex__name[27];
fsFile z_data_pic_htl_p_video02_tex__info[1];
fsFileIndex data_pic_htl_p_video02_tex[1];
char z_data_pic_htl_prisonmap03mark_tex__name[33];
fsFile z_data_pic_htl_prisonmap03mark_tex__info[1];
fsFileIndex data_pic_htl_prisonmap03mark_tex[1];


