typedef union fsFile;
typedef struct fsCdFile;
typedef struct fsMgcFile;
typedef struct fsMgfFile;
typedef struct fsHdFile;
typedef struct PicDraw_Data;
typedef struct fsMgpFile;
typedef struct sh2gfw_AREA_HEAD;
typedef struct _anon0;
typedef union fsFileIndex;
typedef struct _anon1;


typedef short type_0[3];
typedef short type_1[3][80];
typedef short type_2[80];
typedef float type_3[80];
typedef int type_4[80];
typedef unsigned char type_5[3];
typedef fsFileIndex type_6[1];

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

struct sh2gfw_AREA_HEAD
{
	unsigned int area_id;
	unsigned int toGlobalTexHead;
	unsigned int toGlobalClutsHead;
	unsigned int date;
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

float item_size[80];
fsFileIndex data_pic_etc_itemmenu2_tex[1];
PicDraw_Data i_pic;

void TgsItemPictureLoad();
void TgsItemPitureStart();
void TgsItemPitureDraw(int kind, int cx, int cy, int rgb, int otp, float size);

// 
// Start address: 0x209150
void TgsItemPictureLoad()
{
	// Line 15, Address: 0x209150, Func Offset: 0
	// Line 16, Address: 0x209158, Func Offset: 0x8
	// Line 17, Address: 0x209174, Func Offset: 0x24
	// Func End, Address: 0x209184, Func Offset: 0x34
}

// 
// Start address: 0x209190
void TgsItemPitureStart()
{
	// Line 22, Address: 0x209190, Func Offset: 0
	// Line 23, Address: 0x209198, Func Offset: 0x8
	// Line 25, Address: 0x2091b8, Func Offset: 0x28
	// Line 27, Address: 0x2091cc, Func Offset: 0x3c
	// Line 28, Address: 0x209204, Func Offset: 0x74
	// Line 29, Address: 0x209250, Func Offset: 0xc0
	// Func End, Address: 0x209260, Func Offset: 0xd0
}

// 
// Start address: 0x209260
void TgsItemPitureDraw(int kind, int cx, int cy, int rgb, int otp, float size)
{
	int xy;
	int i;
	short tex[3][80];
	short texsize[80];
	int item_list[80];
	// Line 36, Address: 0x209260, Func Offset: 0
	// Line 149, Address: 0x209298, Func Offset: 0x38
	// Line 151, Address: 0x2092a4, Func Offset: 0x44
	// Line 152, Address: 0x2092e4, Func Offset: 0x84
	// Line 154, Address: 0x2092f4, Func Offset: 0x94
	// Line 155, Address: 0x209330, Func Offset: 0xd0
	// Line 158, Address: 0x209354, Func Offset: 0xf4
	// Line 161, Address: 0x2094a8, Func Offset: 0x248
	// Line 162, Address: 0x209550, Func Offset: 0x2f0
	// Line 163, Address: 0x20957c, Func Offset: 0x31c
	// Line 164, Address: 0x209584, Func Offset: 0x324
	// Line 165, Address: 0x209594, Func Offset: 0x334
	// Func End, Address: 0x2095c0, Func Offset: 0x360
}

