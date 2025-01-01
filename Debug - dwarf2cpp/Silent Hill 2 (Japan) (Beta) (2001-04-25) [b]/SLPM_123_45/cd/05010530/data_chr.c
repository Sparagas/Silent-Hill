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
typedef char type_1[18];
typedef fsFile type_2[1];
typedef char type_3[17];
typedef fsFile type_4[1];
typedef fsFileIndex type_5[1];
typedef char type_6[17];
typedef fsFile type_7[1];
typedef char type_8[17];
typedef fsFile type_9[1];
typedef fsFileIndex type_10[1];
typedef char type_11[16];
typedef fsFile type_12[1];
typedef fsFileIndex type_13[1];
typedef char type_14[17];
typedef fsFile type_15[1];
typedef fsFileIndex type_16[1];
typedef fsFile type_17[1];
typedef fsFileIndex type_18[1];
typedef char type_19[17];
typedef char type_20[17];
typedef fsFile type_21[1];
typedef fsFileIndex type_22[1];
typedef fsFile type_23[1];
typedef fsFileIndex type_24[1];
typedef char type_25[17];
typedef char type_26[17];
typedef fsFile type_27[1];
typedef fsFileIndex type_28[1];
typedef fsFile type_29[1];
typedef fsFile type_30[1];
typedef fsFileIndex type_31[1];
typedef char type_32[17];
typedef char type_33[17];
typedef fsFile type_34[1];
typedef fsFileIndex type_35[1];
typedef fsFileIndex type_36[1];
typedef fsFileIndex type_37[1];
typedef char type_38[17];
typedef fsFile type_39[1];
typedef char type_40[13];
typedef char type_41[17];
typedef fsFile type_42[1];
typedef fsFileIndex type_43[1];
typedef fsFileIndex type_44[1];
typedef char type_45[17];
typedef fsFile type_46[1];
typedef char type_47[17];
typedef fsFile type_48[1];
typedef fsFileIndex type_49[1];
typedef fsFileIndex type_50[1];

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

char data_chr_mgf__name[13];
fsFile data_chr_mgf__info[1];
fsFileIndex data_chr_mgf[1];
char data_chr_agl_mgf__name[17];
fsFile data_chr_agl_mgf__info[1];
fsFileIndex data_chr_agl_mgf[1];
char data_chr_edi_mgf__name[17];
fsFile data_chr_edi_mgf__info[1];
fsFileIndex data_chr_edi_mgf[1];
char data_chr_ike_mgf__name[17];
fsFile data_chr_ike_mgf__info[1];
fsFileIndex data_chr_ike_mgf[1];
char data_chr_item_mgf__name[18];
fsFile data_chr_item_mgf__info[1];
fsFileIndex data_chr_item_mgf[1];
char data_chr_jms_mgf__name[17];
fsFile data_chr_jms_mgf__info[1];
fsFileIndex data_chr_jms_mgf[1];
char data_chr_lau_mgf__name[17];
fsFile data_chr_lau_mgf__info[1];
fsFileIndex data_chr_lau_mgf[1];
char data_chr_mar_mgf__name[17];
fsFile data_chr_mar_mgf__info[1];
fsFileIndex data_chr_mar_mgf[1];
char data_chr_mkn_mgf__name[17];
fsFile data_chr_mkn_mgf__info[1];
fsFileIndex data_chr_mkn_mgf[1];
char data_chr_mxx_mgf__name[17];
fsFile data_chr_mxx_mgf__info[1];
fsFileIndex data_chr_mxx_mgf[1];
char data_chr_nse_mgf__name[17];
fsFile data_chr_nse_mgf__info[1];
fsFileIndex data_chr_nse_mgf[1];
char data_chr_oni_mgf__name[17];
fsFile data_chr_oni_mgf__info[1];
fsFileIndex data_chr_oni_mgf[1];
char data_chr_pap_mgf__name[17];
fsFile data_chr_pap_mgf__info[1];
fsFileIndex data_chr_pap_mgf[1];
char data_chr_red_mgf__name[17];
fsFile data_chr_red_mgf__info[1];
fsFileIndex data_chr_red_mgf[1];
char data_chr_scu_mgf__name[17];
fsFile data_chr_scu_mgf__info[1];
fsFileIndex data_chr_scu_mgf[1];
char data_chr_tyu_mgf__name[17];
fsFile data_chr_tyu_mgf__info[1];
fsFileIndex data_chr_tyu_mgf[1];
char data_chr_wp_mgf__name[16];
fsFile data_chr_wp_mgf__info[1];
fsFileIndex data_chr_wp_mgf[1];


