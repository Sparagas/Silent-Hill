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
typedef char type_1[15];
typedef char type_2[12];
typedef fsFileIndex type_3[1];
typedef fsFile type_4[1];
typedef fsFileIndex type_5[1];
typedef fsFile type_6[1];
typedef fsFile type_7[1];
typedef fsFile type_8[1];
typedef char type_9[15];
typedef fsFile type_10[1];
typedef char type_11[15];
typedef fsFileIndex type_12[1];
typedef fsFileIndex type_13[1];
typedef char type_14[15];
typedef fsFileIndex type_15[1];
typedef char type_16[15];
typedef fsFileIndex type_17[1];
typedef fsFile type_18[1];
typedef fsFileIndex type_19[1];
typedef fsFile type_20[1];
typedef fsFile type_21[1];
typedef fsFile type_22[1];
typedef char type_23[12];
typedef fsFile type_24[1];
typedef char type_25[15];
typedef char type_26[15];
typedef fsFileIndex type_27[1];
typedef fsFileIndex type_28[1];
typedef char type_29[15];
typedef fsFileIndex type_30[1];
typedef char type_31[15];
typedef fsFileIndex type_32[1];
typedef fsFile type_33[1];
typedef fsFileIndex type_34[1];
typedef fsFile type_35[1];
typedef fsFile type_36[1];
typedef fsFile type_37[1];
typedef char type_38[15];
typedef char type_39[15];
typedef fsFileIndex type_40[1];
typedef char type_41[15];
typedef fsFileIndex type_42[1];
typedef char type_43[15];
typedef fsFileIndex type_44[1];
typedef char type_45[15];
typedef fsFile type_46[1];
typedef fsFileIndex type_47[1];
typedef fsFile type_48[1];
typedef fsFile type_49[1];
typedef fsFile type_50[1];
typedef char type_51[12];
typedef fsFile type_52[1];
typedef fsFileIndex type_53[1];
typedef char type_54[15];
typedef fsFileIndex type_55[1];
typedef char type_56[15];

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

char z_data_bg_mgf__name[12];
fsFile z_data_bg_mgf__info[1];
fsFileIndex data_bg_mgf[1];
char z_data_bg_aaa__name[12];
fsFile z_data_bg_aaa__info[1];
fsFileIndex data_bg_aaa[1];
char z_data_bg_ap_mgf__name[15];
fsFile z_data_bg_ap_mgf__info[1];
fsFileIndex data_bg_ap_mgf[1];
char z_data_bg_bbb__name[12];
fsFile z_data_bg_bbb__info[1];
fsFileIndex data_bg_bbb[1];
char z_data_bg_bw_mgf__name[15];
fsFile z_data_bg_bw_mgf__info[1];
fsFileIndex data_bg_bw_mgf[1];
char z_data_bg_ca_mgf__name[15];
fsFile z_data_bg_ca_mgf__info[1];
fsFileIndex data_bg_ca_mgf[1];
char z_data_bg_cb_mgf__name[15];
fsFile z_data_bg_cb_mgf__info[1];
fsFileIndex data_bg_cb_mgf[1];
char z_data_bg_cc_mgf__name[15];
fsFile z_data_bg_cc_mgf__info[1];
fsFileIndex data_bg_cc_mgf[1];
char z_data_bg_cd_mgf__name[15];
fsFile z_data_bg_cd_mgf__info[1];
fsFileIndex data_bg_cd_mgf[1];
char z_data_bg_er_mgf__name[15];
fsFile z_data_bg_er_mgf__info[1];
fsFileIndex data_bg_er_mgf[1];
char z_data_bg_hp_mgf__name[15];
fsFile z_data_bg_hp_mgf__info[1];
fsFileIndex data_bg_hp_mgf[1];
char z_data_bg_ma_mgf__name[15];
fsFile z_data_bg_ma_mgf__info[1];
fsFileIndex data_bg_ma_mgf[1];
char z_data_bg_ob_mgf__name[15];
fsFile z_data_bg_ob_mgf__info[1];
fsFileIndex data_bg_ob_mgf[1];
char z_data_bg_ps_mgf__name[15];
fsFile z_data_bg_ps_mgf__info[1];
fsFileIndex data_bg_ps_mgf[1];
char z_data_bg_qp_mgf__name[15];
fsFile z_data_bg_qp_mgf__info[1];
fsFileIndex data_bg_qp_mgf[1];
char z_data_bg_qt_mgf__name[15];
fsFile z_data_bg_qt_mgf__info[1];
fsFileIndex data_bg_qt_mgf[1];
char z_data_bg_rr_mgf__name[15];
fsFile z_data_bg_rr_mgf__info[1];
fsFileIndex data_bg_rr_mgf[1];
char z_data_bg_ru_mgf__name[15];
fsFile z_data_bg_ru_mgf__info[1];
fsFileIndex data_bg_ru_mgf[1];
char z_data_bg_th_mgf__name[15];
fsFile z_data_bg_th_mgf__info[1];
fsFileIndex data_bg_th_mgf[1];


