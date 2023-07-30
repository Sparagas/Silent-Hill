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
typedef char type_1[33];
typedef char type_2[17];
typedef fsFile type_3[1];
typedef fsFileIndex type_4[1];
typedef char type_5[25];
typedef fsFileIndex type_6[1];
typedef char type_7[31];
typedef fsFile type_8[1];
typedef fsFile type_9[1];
typedef fsFileIndex type_10[1];
typedef char type_11[29];
typedef fsFileIndex type_12[1];
typedef fsFile type_13[1];
typedef fsFile type_14[1];
typedef fsFileIndex type_15[1];
typedef char type_16[30];
typedef fsFileIndex type_17[1];
typedef char type_18[27];
typedef fsFile type_19[1];
typedef fsFileIndex type_20[1];
typedef char type_21[26];
typedef fsFileIndex type_22[1];
typedef char type_23[27];
typedef fsFile type_24[1];
typedef fsFile type_25[1];
typedef fsFile type_26[1];
typedef fsFileIndex type_27[1];
typedef char type_28[29];
typedef char type_29[27];
typedef fsFile type_30[1];
typedef fsFile type_31[1];
typedef fsFileIndex type_32[1];
typedef char type_33[28];
typedef fsFileIndex type_34[1];
typedef char type_35[26];
typedef fsFile type_36[1];
typedef fsFileIndex type_37[1];
typedef char type_38[29];
typedef fsFileIndex type_39[1];
typedef fsFile type_40[1];
typedef fsFile type_41[1];
typedef char type_42[28];
typedef fsFileIndex type_43[1];
typedef char type_44[28];
typedef fsFile type_45[1];
typedef fsFile type_46[1];
typedef fsFileIndex type_47[1];
typedef char type_48[28];
typedef fsFileIndex type_49[1];
typedef char type_50[30];
typedef fsFile type_51[1];
typedef fsFile type_52[1];
typedef fsFileIndex type_53[1];
typedef char type_54[34];
typedef fsFileIndex type_55[1];
typedef fsFile type_56[1];
typedef fsFile type_57[1];
typedef fsFileIndex type_58[1];
typedef char type_59[28];

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

char z_data_pic_apt_mgf__name[17];
fsFile z_data_pic_apt_mgf__info[1];
fsFileIndex data_pic_apt_mgf[1];
char z_data_pic_apt_clock_close_tex__name[29];
fsFile z_data_pic_apt_clock_close_tex__info[1];
fsFileIndex data_pic_apt_clock_close_tex[1];
char z_data_pic_apt_clock_hari_tex__name[28];
fsFile z_data_pic_apt_clock_hari_tex__info[1];
fsFileIndex data_pic_apt_clock_hari_tex[1];
char z_data_pic_apt_clock_memo_tex__name[28];
fsFile z_data_pic_apt_clock_memo_tex__info[1];
fsFileIndex data_pic_apt_clock_memo_tex[1];
char z_data_pic_apt_clock_memo_2_tex__name[30];
fsFile z_data_pic_apt_clock_memo_2_tex__info[1];
fsFileIndex data_pic_apt_clock_memo_2_tex[1];
char z_data_pic_apt_clock_name_tex__name[28];
fsFile z_data_pic_apt_clock_name_tex__info[1];
fsFileIndex data_pic_apt_clock_name_tex[1];
char z_data_pic_apt_clock_open_tex__name[28];
fsFile z_data_pic_apt_clock_open_tex__info[1];
fsFileIndex data_pic_apt_clock_open_tex[1];
char z_data_pic_apt_dust_in_tex__name[25];
fsFile z_data_pic_apt_dust_in_tex__info[1];
fsFileIndex data_pic_apt_dust_in_tex[1];
char z_data_pic_apt_dust_out_tex__name[26];
fsFile z_data_pic_apt_dust_out_tex__info[1];
fsFileIndex data_pic_apt_dust_out_tex[1];
char z_data_pic_apt_p_desk_coin_tex__name[29];
fsFile z_data_pic_apt_p_desk_coin_tex__info[1];
fsFileIndex data_pic_apt_p_desk_coin_tex[1];
char z_data_pic_apt_p_desk_coin_coin_tex__name[34];
fsFile z_data_pic_apt_p_desk_coin_coin_tex__info[1];
fsFileIndex data_pic_apt_p_desk_coin_coin_tex[1];
char z_data_pic_apt_p_desk_hint_tex__name[29];
fsFile z_data_pic_apt_p_desk_hint_tex__info[1];
fsFileIndex data_pic_apt_p_desk_hint_tex[1];
char z_data_pic_apt_p_dust_in_tex__name[27];
fsFile z_data_pic_apt_p_dust_in_tex__info[1];
fsFileIndex data_pic_apt_p_dust_in_tex[1];
char z_data_pic_apt_p_dust_out_tex__name[28];
fsFile z_data_pic_apt_p_dust_out_tex__info[1];
fsFileIndex data_pic_apt_p_dust_out_tex[1];
char z_data_pic_apt_p_dust_out_coin_tex__name[33];
fsFile z_data_pic_apt_p_dust_out_coin_tex__info[1];
fsFileIndex data_pic_apt_p_dust_out_coin_tex[1];
char z_data_pic_apt_p_endhint_tex__name[27];
fsFile z_data_pic_apt_p_endhint_tex__info[1];
fsFileIndex data_pic_apt_p_endhint_tex[1];
char z_data_pic_apt_p_family_tex__name[26];
fsFile z_data_pic_apt_p_family_tex__info[1];
fsFileIndex data_pic_apt_p_family_tex[1];
char z_data_pic_apt_p_safe_close_tex__name[30];
fsFile z_data_pic_apt_p_safe_close_tex__info[1];
fsFileIndex data_pic_apt_p_safe_close_tex[1];
char z_data_pic_apt_p_safe_close2_tex__name[31];
fsFile z_data_pic_apt_p_safe_close2_tex__info[1];
fsFileIndex data_pic_apt_p_safe_close2_tex[1];
char z_data_pic_apt_p_tourist_tex__name[27];
fsFile z_data_pic_apt_p_tourist_tex__info[1];
fsFileIndex data_pic_apt_p_tourist_tex[1];


