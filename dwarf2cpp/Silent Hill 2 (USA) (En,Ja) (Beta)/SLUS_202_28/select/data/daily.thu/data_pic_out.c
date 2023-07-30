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
typedef char type_1[30];
typedef char type_2[17];
typedef fsFile type_3[1];
typedef fsFileIndex type_4[1];
typedef char type_5[31];
typedef fsFile type_6[1];
typedef fsFileIndex type_7[1];
typedef char type_8[28];
typedef fsFile type_9[1];
typedef fsFileIndex type_10[1];
typedef char type_11[28];
typedef fsFile type_12[1];
typedef fsFileIndex type_13[1];
typedef char type_14[25];
typedef fsFile type_15[1];
typedef fsFile type_16[1];
typedef char type_17[25];
typedef fsFileIndex type_18[1];
typedef fsFile type_19[1];
typedef fsFileIndex type_20[1];
typedef char type_21[30];
typedef fsFile type_22[1];
typedef fsFileIndex type_23[1];
typedef char type_24[27];
typedef fsFile type_25[1];
typedef char type_26[29];
typedef fsFileIndex type_27[1];
typedef fsFile type_28[1];
typedef fsFileIndex type_29[1];
typedef char type_30[30];
typedef fsFile type_31[1];
typedef fsFileIndex type_32[1];
typedef char type_33[27];
typedef fsFile type_34[1];
typedef fsFileIndex type_35[1];

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

char z_data_pic_out_mgf__name[17];
fsFile z_data_pic_out_mgf__info[1];
fsFileIndex data_pic_out_mgf[1];
char z_data_pic_out_p_incar_tex__name[25];
fsFile z_data_pic_out_p_incar_tex__info[1];
fsFileIndex data_pic_out_p_incar_tex[1];
char z_data_pic_out_p_incar_map_tex__name[29];
fsFile z_data_pic_out_p_incar_map_tex__info[1];
fsFileIndex data_pic_out_p_incar_map_tex[1];
char z_data_pic_out_p_lostmemory_tex__name[30];
fsFile z_data_pic_out_p_lostmemory_tex__info[1];
fsFileIndex data_pic_out_p_lostmemory_tex[1];
char z_data_pic_out_p_redpaper_tex__name[28];
fsFile z_data_pic_out_p_redpaper_tex__info[1];
fsFileIndex data_pic_out_p_redpaper_tex[1];
char z_data_pic_out_p_statue_box_tex__name[30];
fsFile z_data_pic_out_p_statue_box_tex__info[1];
fsFileIndex data_pic_out_p_statue_box_tex[1];
char z_data_pic_out_p_statue_key_tex__name[30];
fsFile z_data_pic_out_p_statue_key_tex__info[1];
fsFileIndex data_pic_out_p_statue_key_tex[1];
char z_data_pic_out_p_statue_key2_tex__name[31];
fsFile z_data_pic_out_p_statue_key2_tex__info[1];
fsFileIndex data_pic_out_p_statue_key2_tex[1];
char z_data_pic_out_p_swamp_tex__name[25];
fsFile z_data_pic_out_p_swamp_tex__info[1];
fsFileIndex data_pic_out_p_swamp_tex[1];
char z_data_pic_out_statuebox_tex__name[27];
fsFile z_data_pic_out_statuebox_tex__info[1];
fsFileIndex data_pic_out_statuebox_tex[1];
char z_data_pic_out_statuekey_tex__name[27];
fsFile z_data_pic_out_statuekey_tex__info[1];
fsFileIndex data_pic_out_statuekey_tex[1];
char z_data_pic_out_statuekey2_tex__name[28];
fsFile z_data_pic_out_statuekey2_tex__info[1];
fsFileIndex data_pic_out_statuekey2_tex[1];


