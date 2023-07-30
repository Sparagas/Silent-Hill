typedef union fsFile;
typedef struct fsCdFile;
typedef struct fsMgcFile;
typedef struct fsMgfFile;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct _anon0;
typedef union fsFileIndex;
typedef struct _anon1;


typedef char type_0[18];
typedef fsFile type_1[1];
typedef fsFileIndex type_2[1];
typedef char type_3[13];
typedef char type_4[17];
typedef fsFile type_5[1];
typedef fsFileIndex type_6[1];
typedef fsFile type_7[1];
typedef char type_8[17];
typedef fsFileIndex type_9[1];
typedef fsFile type_10[1];
typedef char type_11[17];
typedef fsFileIndex type_12[1];
typedef fsFile type_13[1];
typedef fsFileIndex type_14[1];
typedef char type_15[17];
typedef fsFile type_16[1];
typedef fsFileIndex type_17[1];
typedef char type_18[17];
typedef fsFile type_19[1];
typedef fsFileIndex type_20[1];
typedef char type_21[17];
typedef fsFile type_22[1];
typedef fsFileIndex type_23[1];
typedef fsFile type_24[1];
typedef char type_25[17];
typedef fsFileIndex type_26[1];
typedef fsFile type_27[1];
typedef char type_28[17];
typedef fsFileIndex type_29[1];
typedef char type_30[17];
typedef fsFile type_31[1];
typedef fsFile type_32[1];
typedef fsFileIndex type_33[1];
typedef char type_34[17];
typedef fsFile type_35[1];
typedef fsFileIndex type_36[1];
typedef char type_37[17];
typedef fsFile type_38[1];
typedef fsFileIndex type_39[1];
typedef char type_40[17];
typedef fsFileIndex type_41[1];
typedef fsFile type_42[1];
typedef char type_43[17];
typedef fsFileIndex type_44[1];
typedef fsFile type_45[1];
typedef char type_46[16];
typedef fsFileIndex type_47[1];
typedef char type_48[17];
typedef fsFile type_49[1];
typedef fsFileIndex type_50[1];
typedef char type_51[17];
typedef fsFile type_52[1];
typedef fsFileIndex type_53[1];
typedef char type_54[17];
typedef fsFile type_55[1];
typedef fsFileIndex type_56[1];
typedef fsFile type_57[1];
typedef char type_58[17];
typedef fsFileIndex type_59[1];
typedef fsFile type_60[1];
typedef char type_61[17];
typedef fsFileIndex type_62[1];
typedef fsFile type_63[1];
typedef char type_64[17];
typedef fsFileIndex type_65[1];
typedef char type_66[18];
typedef fsFileIndex type_67[1];
typedef fsFile type_68[1];

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

char z_data_chr_mgf__name[13];
fsFile z_data_chr_mgf__info[1];
fsFileIndex data_chr_mgf[1];
char z_data_chr_agl_mgf__name[17];
fsFile z_data_chr_agl_mgf__info[1];
fsFileIndex data_chr_agl_mgf[1];
char z_data_chr_arm_mgf__name[17];
fsFile z_data_chr_arm_mgf__info[1];
fsFileIndex data_chr_arm_mgf[1];
char z_data_chr_boat_mgf__name[18];
fsFile z_data_chr_boat_mgf__info[1];
fsFileIndex data_chr_boat_mgf[1];
char z_data_chr_bos_mgf__name[17];
fsFile z_data_chr_bos_mgf__info[1];
fsFileIndex data_chr_bos_mgf[1];
char z_data_chr_edi_mgf__name[17];
fsFile z_data_chr_edi_mgf__info[1];
fsFileIndex data_chr_edi_mgf[1];
char z_data_chr_ike_mgf__name[17];
fsFile z_data_chr_ike_mgf__info[1];
fsFileIndex data_chr_ike_mgf[1];
char z_data_chr_item_mgf__name[18];
fsFile z_data_chr_item_mgf__info[1];
fsFileIndex data_chr_item_mgf[1];
char z_data_chr_jms_mgf__name[17];
fsFile z_data_chr_jms_mgf__info[1];
fsFileIndex data_chr_jms_mgf[1];
char z_data_chr_lau_mgf__name[17];
fsFile z_data_chr_lau_mgf__info[1];
fsFileIndex data_chr_lau_mgf[1];
char z_data_chr_mar_mgf__name[17];
fsFile z_data_chr_mar_mgf__info[1];
fsFileIndex data_chr_mar_mgf[1];
char z_data_chr_mkn_mgf__name[17];
fsFile z_data_chr_mkn_mgf__info[1];
fsFileIndex data_chr_mkn_mgf[1];
char z_data_chr_mry_mgf__name[17];
fsFile z_data_chr_mry_mgf__info[1];
fsFileIndex data_chr_mry_mgf[1];
char z_data_chr_mxx_mgf__name[17];
fsFile z_data_chr_mxx_mgf__info[1];
fsFileIndex data_chr_mxx_mgf[1];
char z_data_chr_nik_mgf__name[17];
fsFile z_data_chr_nik_mgf__info[1];
fsFileIndex data_chr_nik_mgf[1];
char z_data_chr_nse_mgf__name[17];
fsFile z_data_chr_nse_mgf__info[1];
fsFileIndex data_chr_nse_mgf[1];
char z_data_chr_oni_mgf__name[17];
fsFile z_data_chr_oni_mgf__info[1];
fsFileIndex data_chr_oni_mgf[1];
char z_data_chr_pap_mgf__name[17];
fsFile z_data_chr_pap_mgf__info[1];
fsFileIndex data_chr_pap_mgf[1];
char z_data_chr_red_mgf__name[17];
fsFile z_data_chr_red_mgf__info[1];
fsFileIndex data_chr_red_mgf[1];
char z_data_chr_scu_mgf__name[17];
fsFile z_data_chr_scu_mgf__info[1];
fsFileIndex data_chr_scu_mgf[1];
char z_data_chr_tyu_mgf__name[17];
fsFile z_data_chr_tyu_mgf__info[1];
fsFileIndex data_chr_tyu_mgf[1];
char z_data_chr_wp_mgf__name[16];
fsFile z_data_chr_wp_mgf__info[1];
fsFileIndex data_chr_wp_mgf[1];
char z_data_chr_xoo_mgf__name[17];
fsFile z_data_chr_xoo_mgf__info[1];
fsFileIndex data_chr_xoo_mgf[1];


