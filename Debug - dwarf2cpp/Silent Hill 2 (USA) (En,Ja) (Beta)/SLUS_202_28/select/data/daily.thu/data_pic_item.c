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
typedef fsFile type_1[1];
typedef char type_2[18];
typedef fsFileIndex type_3[1];
typedef char type_4[33];
typedef fsFile type_5[1];
typedef fsFileIndex type_6[1];
typedef char type_7[34];
typedef fsFile type_8[1];
typedef fsFileIndex type_9[1];
typedef char type_10[30];
typedef fsFile type_11[1];
typedef fsFileIndex type_12[1];
typedef char type_13[29];
typedef fsFile type_14[1];
typedef fsFileIndex type_15[1];
typedef char type_16[33];
typedef fsFile type_17[1];
typedef fsFileIndex type_18[1];
typedef char type_19[31];
typedef fsFile type_20[1];
typedef fsFileIndex type_21[1];
typedef char type_22[29];
typedef fsFile type_23[1];
typedef fsFileIndex type_24[1];
typedef fsFile type_25[1];
typedef char type_26[31];
typedef fsFile type_27[1];
typedef fsFileIndex type_28[1];
typedef char type_29[30];
typedef fsFileIndex type_30[1];
typedef fsFile type_31[1];
typedef char type_32[37];
typedef fsFile type_33[1];
typedef fsFileIndex type_34[1];
typedef char type_35[30];
typedef fsFile type_36[1];
typedef fsFileIndex type_37[1];
typedef char type_38[28];
typedef fsFile type_39[1];
typedef fsFileIndex type_40[1];
typedef char type_41[30];
typedef fsFile type_42[1];
typedef fsFileIndex type_43[1];
typedef char type_44[27];
typedef fsFile type_45[1];
typedef fsFileIndex type_46[1];
typedef char type_47[30];
typedef fsFile type_48[1];
typedef fsFileIndex type_49[1];
typedef char type_50[29];
typedef fsFile type_51[1];
typedef fsFileIndex type_52[1];
typedef char type_53[29];
typedef fsFileIndex type_54[1];
typedef fsFile type_55[1];
typedef fsFileIndex type_56[1];

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

char z_data_pic_item_mgf__name[18];
fsFile z_data_pic_item_mgf__info[1];
fsFileIndex data_pic_item_mgf[1];
char z_data_pic_item_x_coin_snake_tex__name[31];
fsFile z_data_pic_item_x_coin_snake_tex__info[1];
fsFileIndex data_pic_item_x_coin_snake_tex[1];
char z_data_pic_item_x_coinelder_tex__name[30];
fsFile z_data_pic_item_x_coinelder_tex__info[1];
fsFileIndex data_pic_item_x_coinelder_tex[1];
char z_data_pic_item_x_coinelder_ura_tex__name[34];
fsFile z_data_pic_item_x_coinelder_ura_tex__info[1];
fsFileIndex data_pic_item_x_coinelder_ura_tex[1];
char z_data_pic_item_x_coinprisoner_tex__name[33];
fsFile z_data_pic_item_x_coinprisoner_tex__info[1];
fsFileIndex data_pic_item_x_coinprisoner_tex[1];
char z_data_pic_item_x_coinprisoner_ura_tex__name[37];
fsFile z_data_pic_item_x_coinprisoner_ura_tex__info[1];
fsFileIndex data_pic_item_x_coinprisoner_ura_tex[1];
char z_data_pic_item_x_coinsnake_tex__name[30];
fsFile z_data_pic_item_x_coinsnake_tex__info[1];
fsFileIndex data_pic_item_x_coinsnake_tex[1];
char z_data_pic_item_x_coinsnake_ura_tex__name[34];
fsFile z_data_pic_item_x_coinsnake_ura_tex__info[1];
fsFileIndex data_pic_item_x_coinsnake_ura_tex[1];
char z_data_pic_item_x_keyclock_tex__name[29];
fsFile z_data_pic_item_x_keyclock_tex__info[1];
fsFileIndex data_pic_item_x_keyclock_tex[1];
char z_data_pic_item_x_keygate_tex__name[28];
fsFile z_data_pic_item_x_keygate_tex__info[1];
fsFileIndex data_pic_item_x_keygate_tex[1];
char z_data_pic_item_x_keynorth_tex__name[29];
fsFile z_data_pic_item_x_keynorth_tex__info[1];
fsFileIndex data_pic_item_x_keynorth_tex[1];
char z_data_pic_item_x_keyrapis_tex__name[29];
fsFile z_data_pic_item_x_keyrapis_tex__info[1];
fsFileIndex data_pic_item_x_keyrapis_tex[1];
char z_data_pic_item_x_keyspiral_tex__name[30];
fsFile z_data_pic_item_x_keyspiral_tex__info[1];
fsFileIndex data_pic_item_x_keyspiral_tex[1];
char z_data_pic_item_x_mary_p_tex__name[27];
fsFile z_data_pic_item_x_mary_p_tex__info[1];
fsFileIndex data_pic_item_x_mary_p_tex[1];
char z_data_pic_item_x_plate_female_tex__name[33];
fsFile z_data_pic_item_x_plate_female_tex__info[1];
fsFileIndex data_pic_item_x_plate_female_tex[1];
char z_data_pic_item_x_plate_kick_tex__name[31];
fsFile z_data_pic_item_x_plate_kick_tex__info[1];
fsFileIndex data_pic_item_x_plate_kick_tex[1];
char z_data_pic_item_x_plate_pig_tex__name[30];
fsFile z_data_pic_item_x_plate_pig_tex__info[1];
fsFileIndex data_pic_item_x_plate_pig_tex[1];
char z_data_pic_item_x_ringlead_tex__name[29];
fsFile z_data_pic_item_x_ringlead_tex__info[1];
fsFileIndex data_pic_item_x_ringlead_tex[1];
char z_data_pic_item_x_ringopper_tex__name[30];
fsFile z_data_pic_item_x_ringopper_tex__info[1];
fsFileIndex data_pic_item_x_ringopper_tex[1];


