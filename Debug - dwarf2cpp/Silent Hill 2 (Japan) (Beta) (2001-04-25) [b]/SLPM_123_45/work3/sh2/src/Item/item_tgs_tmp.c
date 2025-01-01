typedef struct fsMgpFile;
typedef union fsFile;
typedef struct fsMgcFile;
typedef struct _anon0;
typedef union fsFileIndex;
typedef struct _anon1;
typedef struct sh2gfw_AREA_HEAD;
typedef struct fsCdFile;
typedef struct PicDraw_Data;
typedef struct fsMgfFile;
typedef struct fsHdFile;


typedef fsFileIndex type_0[1];
typedef unsigned char type_1[3];
typedef char type_2[0];
typedef short type_3[2];
typedef short type_4[2][12];
typedef int type_5[11];

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

struct sh2gfw_AREA_HEAD
{
	unsigned int area_id;
	unsigned int toGlobalTexHead;
	unsigned int toGlobalClutsHead;
	unsigned int date;
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

struct PicDraw_Data
{
	sh2gfw_AREA_HEAD* ap;
	int tex;
	int clut;
	short x0;
	short y0;
	short x1;
	short y1;
	short x2;
	short y2;
	short x3;
	short y3;
	int us0;
	int vt0;
	int us1;
	int vt1;
	unsigned char r;
	unsigned char g;
	unsigned char b;
	unsigned char a;
	unsigned char alpha_a;
	unsigned char alpha_b;
	unsigned char alpha_c;
	unsigned char alpha_d;
	unsigned char alpha_fix;
	unsigned char test_ate;
	unsigned char test_atst;
	unsigned char test_aref;
	unsigned char test_afail;
	unsigned char test_date;
	unsigned char test_datm;
	unsigned char test_zte;
	unsigned char test_ztst;
	unsigned char pad[3];
	short otp;
	short status;
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

char pic_buf_0[0];
fsFileIndex data_pic_itemmenu_tex[1];
PicDraw_Data i_pic;

void TgsItemPictureLoad();
void TgsItemPitureStart();
void TgsItemPitureDraw(int kind, int cx, int cy, int rgb, int otp, float size);

// 
// Start address: 0x2097f0
void TgsItemPictureLoad()
{
	// Line 14, Address: 0x2097f0, Func Offset: 0
	// Line 15, Address: 0x2097f8, Func Offset: 0x8
	// Line 16, Address: 0x209810, Func Offset: 0x20
	// Func End, Address: 0x209820, Func Offset: 0x30
}

// 
// Start address: 0x209820
void TgsItemPitureStart()
{
	// Line 21, Address: 0x209820, Func Offset: 0
	// Line 22, Address: 0x209828, Func Offset: 0x8
	// Line 24, Address: 0x209844, Func Offset: 0x24
	// Line 26, Address: 0x209858, Func Offset: 0x38
	// Line 27, Address: 0x209894, Func Offset: 0x74
	// Line 28, Address: 0x2098e8, Func Offset: 0xc8
	// Func End, Address: 0x2098f8, Func Offset: 0xd8
}

// 
// Start address: 0x209900
void TgsItemPitureDraw(int kind, int cx, int cy, int rgb, int otp, float size)
{
	int xy;
	int i;
	short tex[2][12];
	int item_list[11];
	// Line 34, Address: 0x209900, Func Offset: 0
	// Line 56, Address: 0x209908, Func Offset: 0x8
	// Line 57, Address: 0x209948, Func Offset: 0x48
	// Line 58, Address: 0x20996c, Func Offset: 0x6c
	// Line 61, Address: 0x2099b0, Func Offset: 0xb0
	// Line 62, Address: 0x209a6c, Func Offset: 0x16c
	// Line 63, Address: 0x209aa4, Func Offset: 0x1a4
	// Line 64, Address: 0x209aac, Func Offset: 0x1ac
	// Line 65, Address: 0x209abc, Func Offset: 0x1bc
	// Func End, Address: 0x209acc, Func Offset: 0x1cc
}

