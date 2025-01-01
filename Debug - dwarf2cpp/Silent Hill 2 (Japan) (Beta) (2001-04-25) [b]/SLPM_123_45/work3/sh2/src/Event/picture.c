typedef struct sh2gfw_AREA_HEAD;
typedef struct PicDraw_Data;
typedef struct SPACK_OT_DATA;
typedef struct SPACK_ENV_DATA;
typedef struct sh2gfw_TEX_HEAD;
typedef struct sh2gfw_CLUTS_HEAD;
typedef struct SPACK_STATIC_DATA;
typedef struct SPACK_DATA;
typedef union Q_WORDDATA;


typedef unsigned char type_0[3];
typedef unsigned char type_1[16];
typedef unsigned char type_2[16];
typedef unsigned int type_3[4];
typedef unsigned short type_4[8];
typedef float type_5[4];
typedef unsigned char type_6[16];
typedef int type_7[4];
typedef short type_8[8];
typedef char type_9[16];
typedef unsigned long type_10[2];

struct sh2gfw_AREA_HEAD
{
	unsigned int area_id;
	unsigned int toGlobalTexHead;
	unsigned int toGlobalClutsHead;
	unsigned int date;
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

struct SPACK_OT_DATA
{
	unsigned short DmaQwc;
	unsigned short DmaId;
	void* Addr;
	unsigned int W;
	unsigned short VifQwc;
	unsigned char EnvID;
	unsigned char VifDirect;
};

struct SPACK_ENV_DATA
{
	unsigned short DmaQwc;
	unsigned short DmaId;
	void* Addr;
	unsigned int pad1;
	unsigned short VifQwc;
	unsigned char pad2;
	unsigned char VifDirect;
};

struct sh2gfw_TEX_HEAD
{
	unsigned int texture_no;
	unsigned short x;
	unsigned short y;
	unsigned short w;
	unsigned short h;
	unsigned char color;
	unsigned char padbyte;
	unsigned short importance;
	unsigned int datasize;
	unsigned int allsize;
	unsigned char sendpsm;
	unsigned char drawpsm;
	unsigned char bitshift;
	unsigned char tagpoint;
	unsigned char bitw;
	unsigned char bith;
	unsigned short check;
	Q_WORDDATA giftag;
};

struct sh2gfw_CLUTS_HEAD
{
	unsigned int clutssize;
	unsigned int toGSREGS;
	unsigned int toRawClut;
	unsigned char clutamount;
	unsigned char transcluts;
	unsigned char clw;
	unsigned char clh;
	unsigned char fmt[16];
	unsigned char transparency[16];
};

struct SPACK_STATIC_DATA
{
	unsigned short GifNLOOP;
	unsigned short DmaQwc;
	unsigned int PRE_PRIM_FLG_NREG;
	unsigned long REGS;
};

struct SPACK_DATA
{
	SPACK_OT_DATA** ot_top;
	SPACK_OT_DATA** ot_last;
	unsigned int ot_size;
	unsigned int ot_width;
	unsigned int w_ofs;
	unsigned int w_mini;
	unsigned int w_max;
	unsigned int envid;
	SPACK_OT_DATA* dma_top;
	SPACK_OT_DATA* dmabuf_pos;
	SPACK_ENV_DATA* env_top;
	unsigned long* pk_last;
	unsigned long* pos;
	short* ot_max;
	<unknown fundamental type (0xa510)>* packet;
	SPACK_STATIC_DATA* ps_top;
	unsigned long* pgiftag;
	unsigned long giftag_b;
	unsigned int flag;
	void* kick_top;
};

union Q_WORDDATA
{
	unsigned int ui32[4];
	unsigned short us16[8];
	float fl32[4];
	unsigned char uc8[16];
	int si32[4];
	short ss16[8];
	char sc8[16];
	unsigned long ul64[2];
	<unknown fundamental type (0xa510)> ul128;
};

SPACK_DATA spack;

void PictureDraw(PicDraw_Data* pic);
void PictureLoadImage(sh2gfw_AREA_HEAD* ap, int otp, int tex_adr, int clut_adr);

// 
// Start address: 0x1b2940
void PictureDraw(PicDraw_Data* pic)
{
	int prim;
	int len;
	int xy2set;
	int alpset;
	int uvset;
	unsigned long giftag_spr;
	sh2gfw_TEX_HEAD* tp;
	// Line 33, Address: 0x1b2940, Func Offset: 0
	// Line 43, Address: 0x1b2964, Func Offset: 0x24
	// Line 44, Address: 0x1b297c, Func Offset: 0x3c
	// Line 45, Address: 0x1b2990, Func Offset: 0x50
	// Line 48, Address: 0x1b29a4, Func Offset: 0x64
	// Line 49, Address: 0x1b29bc, Func Offset: 0x7c
	// Line 50, Address: 0x1b29c4, Func Offset: 0x84
	// Line 51, Address: 0x1b29cc, Func Offset: 0x8c
	// Line 54, Address: 0x1b29d4, Func Offset: 0x94
	// Line 55, Address: 0x1b29ec, Func Offset: 0xac
	// Line 56, Address: 0x1b29f0, Func Offset: 0xb0
	// Line 57, Address: 0x1b29f8, Func Offset: 0xb8
	// Line 59, Address: 0x1b2a04, Func Offset: 0xc4
	// Line 60, Address: 0x1b2a28, Func Offset: 0xe8
	// Line 63, Address: 0x1b2a2c, Func Offset: 0xec
	// Line 64, Address: 0x1b2a44, Func Offset: 0x104
	// Line 65, Address: 0x1b2a54, Func Offset: 0x114
	// Line 66, Address: 0x1b2a60, Func Offset: 0x120
	// Line 67, Address: 0x1b2a78, Func Offset: 0x138
	// Line 70, Address: 0x1b2a88, Func Offset: 0x148
	// Line 72, Address: 0x1b2ab8, Func Offset: 0x178
	// Line 73, Address: 0x1b2ad0, Func Offset: 0x190
	// Line 75, Address: 0x1b2aec, Func Offset: 0x1ac
	// Line 76, Address: 0x1b2b10, Func Offset: 0x1d0
	// Line 77, Address: 0x1b2b14, Func Offset: 0x1d4
	// Line 80, Address: 0x1b2b44, Func Offset: 0x204
	// Line 81, Address: 0x1b2b78, Func Offset: 0x238
	// Line 82, Address: 0x1b2b90, Func Offset: 0x250
	// Line 87, Address: 0x1b2c3c, Func Offset: 0x2fc
	// Line 90, Address: 0x1b2cc0, Func Offset: 0x380
	// Line 91, Address: 0x1b2cc8, Func Offset: 0x388
	// Line 92, Address: 0x1b2ccc, Func Offset: 0x38c
	// Line 93, Address: 0x1b2cd0, Func Offset: 0x390
	// Line 94, Address: 0x1b2cf4, Func Offset: 0x3b4
	// Line 95, Address: 0x1b2d08, Func Offset: 0x3c8
	// Line 96, Address: 0x1b2d10, Func Offset: 0x3d0
	// Line 97, Address: 0x1b2d14, Func Offset: 0x3d4
	// Line 98, Address: 0x1b2d18, Func Offset: 0x3d8
	// Line 99, Address: 0x1b2d30, Func Offset: 0x3f0
	// Line 101, Address: 0x1b2d38, Func Offset: 0x3f8
	// Line 104, Address: 0x1b2d5c, Func Offset: 0x41c
	// Line 108, Address: 0x1b2e0c, Func Offset: 0x4cc
	// Line 110, Address: 0x1b2e50, Func Offset: 0x510
	// Line 112, Address: 0x1b2ec0, Func Offset: 0x580
	// Line 113, Address: 0x1b2f08, Func Offset: 0x5c8
	// Line 114, Address: 0x1b2f40, Func Offset: 0x600
	// Line 117, Address: 0x1b2fa4, Func Offset: 0x664
	// Line 118, Address: 0x1b2fac, Func Offset: 0x66c
	// Line 119, Address: 0x1b2ff4, Func Offset: 0x6b4
	// Line 120, Address: 0x1b302c, Func Offset: 0x6ec
	// Line 121, Address: 0x1b3034, Func Offset: 0x6f4
	// Line 122, Address: 0x1b307c, Func Offset: 0x73c
	// Line 124, Address: 0x1b30b4, Func Offset: 0x774
	// Line 127, Address: 0x1b3118, Func Offset: 0x7d8
	// Line 128, Address: 0x1b3120, Func Offset: 0x7e0
	// Line 129, Address: 0x1b3168, Func Offset: 0x828
	// Line 130, Address: 0x1b31a0, Func Offset: 0x860
	// Line 133, Address: 0x1b3204, Func Offset: 0x8c4
	// Line 134, Address: 0x1b324c, Func Offset: 0x90c
	// Line 135, Address: 0x1b3284, Func Offset: 0x944
	// Line 139, Address: 0x1b32e8, Func Offset: 0x9a8
	// Line 140, Address: 0x1b32f0, Func Offset: 0x9b0
	// Line 141, Address: 0x1b32f8, Func Offset: 0x9b8
	// Line 144, Address: 0x1b3328, Func Offset: 0x9e8
	// Line 145, Address: 0x1b3330, Func Offset: 0x9f0
	// Line 146, Address: 0x1b3368, Func Offset: 0xa28
	// Line 150, Address: 0x1b33e4, Func Offset: 0xaa4
	// Line 151, Address: 0x1b33fc, Func Offset: 0xabc
	// Line 156, Address: 0x1b34a8, Func Offset: 0xb68
	// Line 159, Address: 0x1b34c0, Func Offset: 0xb80
	// Line 161, Address: 0x1b34e8, Func Offset: 0xba8
	// Line 163, Address: 0x1b3558, Func Offset: 0xc18
	// Line 166, Address: 0x1b35bc, Func Offset: 0xc7c
	// Line 169, Address: 0x1b3620, Func Offset: 0xce0
	// Line 171, Address: 0x1b3628, Func Offset: 0xce8
	// Func End, Address: 0x1b3650, Func Offset: 0xd10
}

// 
// Start address: 0x1b3650
void PictureLoadImage(sh2gfw_AREA_HEAD* ap, int otp, int tex_adr, int clut_adr)
{
	int i;
	int load_img;
	int load_img_all;
	int tpws;
	sh2gfw_CLUTS_HEAD* cp;
	sh2gfw_TEX_HEAD* tp;
	// Line 183, Address: 0x1b3650, Func Offset: 0
	// Line 191, Address: 0x1b3680, Func Offset: 0x30
	// Line 192, Address: 0x1b3690, Func Offset: 0x40
	// Line 193, Address: 0x1b36a0, Func Offset: 0x50
	// Line 194, Address: 0x1b36b4, Func Offset: 0x64
	// Line 195, Address: 0x1b36bc, Func Offset: 0x6c
	// Line 196, Address: 0x1b36d8, Func Offset: 0x88
	// Line 198, Address: 0x1b36f0, Func Offset: 0xa0
	// Line 199, Address: 0x1b3704, Func Offset: 0xb4
	// Line 200, Address: 0x1b3710, Func Offset: 0xc0
	// Line 201, Address: 0x1b3730, Func Offset: 0xe0
	// Line 202, Address: 0x1b3738, Func Offset: 0xe8
	// Line 203, Address: 0x1b373c, Func Offset: 0xec
	// Line 207, Address: 0x1b37ac, Func Offset: 0x15c
	// Line 208, Address: 0x1b37b8, Func Offset: 0x168
	// Line 209, Address: 0x1b37c4, Func Offset: 0x174
	// Line 214, Address: 0x1b3814, Func Offset: 0x1c4
	// Line 216, Address: 0x1b381c, Func Offset: 0x1cc
	// Line 218, Address: 0x1b384c, Func Offset: 0x1fc
	// Line 219, Address: 0x1b3880, Func Offset: 0x230
	// Line 220, Address: 0x1b3888, Func Offset: 0x238
	// Func End, Address: 0x1b38b0, Func Offset: 0x260
}

