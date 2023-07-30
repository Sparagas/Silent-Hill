typedef union fsFileIndex;
typedef struct _anon0;
typedef union fsFile;
typedef struct FilesBgBlock;
typedef struct FilesBgStage;
typedef struct FilesBgRoom;
typedef struct fsCdFile;
typedef enum STAGE_ID : unsigned char;
typedef struct fsMgcFile;
typedef struct fsMgfFile;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct _anon1;


typedef FilesBgStage type_0[1];
typedef FilesBgStage type_1[1];
typedef FilesBgStage type_2[1];
typedef FilesBgStage type_3[1];
typedef FilesBgStage type_4[1];
typedef FilesBgBlock* type_5[4];
typedef FilesBgStage type_6[1];
typedef int type_7[1];
typedef FilesBgStage type_8[1];
typedef FilesBgStage type_9[1];
typedef FilesBgStage type_10[1];
typedef FilesBgStage* type_11[17];
typedef FilesBgStage type_12[1];
typedef FilesBgStage type_13[1];
typedef FilesBgStage type_14[1];
typedef FilesBgStage type_15[1];
typedef FilesBgStage type_16[1];
typedef FilesBgStage type_17[1];
typedef FilesBgStage type_18[1];

union fsFileIndex
{
	_anon0 index;
	unsigned long pack;
};

struct _anon0
{
	fsFile* fp;
	char* name;
};

union fsFile
{
	_anon1 check;
	<unknown fundamental type (0xa510)> pack;
	fsCdFile cd;
	fsHdFile hd;
	fsMgcFile mgc;
	fsMgfFile mgf;
	fsMgpFile mgp;
};

struct FilesBgBlock
{
	fsFileIndex* map;
	fsFileIndex* cld;
	fsFileIndex* cam;
	fsFileIndex* kg2;
	fsFileIndex* tex;
	fsFileIndex* ex0;
	fsFileIndex* ex1;
	fsFileIndex* ex2;
};

struct FilesBgStage
{
	FilesBgBlock** block_list;
	int* block_max;
	FilesBgRoom** room_list;
	int* room_max;
};

struct FilesBgRoom
{
	FilesBgBlock* block[4];
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

enum STAGE_ID : unsigned char
{
	BG_ID_null,
	BG_ID_ap = 0x9,
	BG_ID_bw = 0x7,
	BG_ID_ca = 0x1,
	BG_ID_cb,
	BG_ID_cc,
	BG_ID_cd,
	BG_ID_er = 0x6,
	BG_ID_hp = 0xa,
	BG_ID_ps,
	BG_ID_ob = 0x5,
	BG_ID_rr = 0xc,
	BG_ID_ru,
	BG_ID_th = 0x8,
	BG_ID_qp = 0xe,
	BG_ID_qt,
	BG_ID_ma,
	BG_ID_num
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

struct _anon1
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

FilesBgStage FilesBgStage_ap[1];
FilesBgStage FilesBgStage_bw[1];
FilesBgStage FilesBgStage_ca[1];
FilesBgStage FilesBgStage_cb[1];
FilesBgStage FilesBgStage_cc[1];
FilesBgStage FilesBgStage_cd[1];
FilesBgStage FilesBgStage_er[1];
FilesBgStage FilesBgStage_hp[1];
FilesBgStage FilesBgStage_ps[1];
FilesBgStage FilesBgStage_qp[1];
FilesBgStage FilesBgStage_qt[1];
FilesBgStage FilesBgStage_rr[1];
FilesBgStage FilesBgStage_ru[1];
FilesBgStage FilesBgStage_th[1];
FilesBgStage FilesBgStage_ob[1];
FilesBgStage FilesBgStage_ma[1];
FilesBgStage* FilesBgStageList[17];
int FilesBgStageMax[1];

FilesBgBlock* FilesGetBgBlock(STAGE_ID stg_id, int blk_id);

// 
// Start address: 0x1db210
FilesBgBlock* FilesGetBgBlock(STAGE_ID stg_id, int blk_id)
{
	int max_id;
	FilesBgStage* stg;
	// Line 96, Address: 0x1db210, Func Offset: 0
	// Line 97, Address: 0x1db218, Func Offset: 0x8
	// Line 98, Address: 0x1db23c, Func Offset: 0x2c
	// Line 100, Address: 0x1db250, Func Offset: 0x40
	// Line 101, Address: 0x1db258, Func Offset: 0x48
	// Line 102, Address: 0x1db278, Func Offset: 0x68
	// Line 103, Address: 0x1db28c, Func Offset: 0x7c
	// Func End, Address: 0x1db294, Func Offset: 0x84
}

