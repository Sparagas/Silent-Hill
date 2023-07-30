typedef struct FilesBgStage;
typedef struct FilesBgBlock;
typedef struct FilesBgRoom;
typedef union fsFile;
typedef struct fsCdFile;
typedef struct fsMgcFile;
typedef enum STAGE_ID : unsigned char;
typedef struct fsMgfFile;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct _anon0;
typedef union fsFileIndex;
typedef struct _anon1;


typedef FilesBgStage type_0[1];
typedef FilesBgStage type_1[1];
typedef FilesBgStage* type_2[15];
typedef FilesBgStage type_3[1];
typedef FilesBgStage type_4[1];
typedef FilesBgStage type_5[1];
typedef FilesBgStage type_6[1];
typedef FilesBgStage type_7[1];
typedef FilesBgStage type_8[1];
typedef FilesBgStage type_9[1];
typedef FilesBgStage type_10[1];
typedef FilesBgStage type_11[1];
typedef FilesBgStage type_12[1];
typedef FilesBgStage type_13[1];
typedef int type_14[1];
typedef FilesBgStage type_15[1];
typedef FilesBgBlock* type_16[4];

struct FilesBgStage
{
	FilesBgBlock** block_list;
	int* block_max;
	FilesBgRoom** room_list;
	int* room_max;
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

struct FilesBgRoom
{
	FilesBgBlock* block[4];
};

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
	BG_ID_num
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
FilesBgStage FilesBgStage_rr[1];
FilesBgStage FilesBgStage_ru[1];
FilesBgStage FilesBgStage_th[1];
FilesBgStage FilesBgStage_ob[1];
FilesBgStage* FilesBgStageList[15];
int FilesBgStageMax[1];

FilesBgBlock* FilesGetBgBlock(STAGE_ID stg_id, int blk_id);

// 
// Start address: 0x1e06c0
FilesBgBlock* FilesGetBgBlock(STAGE_ID stg_id, int blk_id)
{
	int max_id;
	FilesBgStage* stg;
	// Line 75, Address: 0x1e06c0, Func Offset: 0
	// Line 79, Address: 0x1e06d4, Func Offset: 0x14
	// Line 80, Address: 0x1e06dc, Func Offset: 0x1c
	// Line 81, Address: 0x1e070c, Func Offset: 0x4c
	// Line 83, Address: 0x1e0728, Func Offset: 0x68
	// Line 84, Address: 0x1e0730, Func Offset: 0x70
	// Line 85, Address: 0x1e0758, Func Offset: 0x98
	// Line 86, Address: 0x1e0770, Func Offset: 0xb0
	// Func End, Address: 0x1e0784, Func Offset: 0xc4
}

