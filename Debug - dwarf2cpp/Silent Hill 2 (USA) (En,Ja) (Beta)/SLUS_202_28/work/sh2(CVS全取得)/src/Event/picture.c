typedef struct SPACK_OT_DATA;
typedef struct SPACK_ENV_DATA;
typedef struct sh2gfw_AREA_HEAD;
typedef struct SPACK_STATIC_DATA;
typedef struct sh2gfw_TEX_HEAD;
typedef struct PicDraw_Data;
typedef struct sh2gfw_CLUTS_HEAD;
typedef union Q_WORDDATA;
typedef struct SPACK_DATA;


typedef char type_0[51200];
typedef unsigned char type_1[16];
typedef unsigned int type_2[4];
typedef unsigned char type_3[16];
typedef unsigned short type_4[8];
typedef float type_5[4];
typedef unsigned char type_6[16];
typedef int type_7[4];
typedef short type_8[8];
typedef char type_9[16];
typedef unsigned long type_10[2];
typedef unsigned char type_11[3];

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

struct sh2gfw_AREA_HEAD
{
	unsigned int area_id;
	unsigned int toGlobalTexHead;
	unsigned int toGlobalClutsHead;
	unsigned int date;
};

struct SPACK_STATIC_DATA
{
	unsigned short GifNLOOP;
	unsigned short DmaQwc;
	unsigned int PRE_PRIM_FLG_NREG;
	unsigned long REGS;
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
	void* old_lastpos;
};

SPACK_DATA spack;
char cursor_adr[51200];
char* layer_adr;

void PictureDraw(PicDraw_Data* pic);
void PictureLoadImage(sh2gfw_AREA_HEAD* ap, int otp, int tex_adr, int clut_adr);

// 
// Start address: 0x1ae360
void PictureDraw(PicDraw_Data* pic)
{
	int prim;
	int len;
	int xy2set;
	int alpset;
	int uvset;
	unsigned long giftag_spr;
	sh2gfw_TEX_HEAD* tp;
	// Line 36, Address: 0x1ae360, Func Offset: 0
	// Line 46, Address: 0x1ae384, Func Offset: 0x24
	// Line 47, Address: 0x1ae394, Func Offset: 0x34
	// Line 48, Address: 0x1ae3a0, Func Offset: 0x40
	// Line 51, Address: 0x1ae3ac, Func Offset: 0x4c
	// Line 52, Address: 0x1ae3bc, Func Offset: 0x5c
	// Line 53, Address: 0x1ae3c4, Func Offset: 0x64
	// Line 54, Address: 0x1ae3c8, Func Offset: 0x68
	// Line 57, Address: 0x1ae3cc, Func Offset: 0x6c
	// Line 58, Address: 0x1ae3dc, Func Offset: 0x7c
	// Line 59, Address: 0x1ae3e0, Func Offset: 0x80
	// Line 60, Address: 0x1ae3e8, Func Offset: 0x88
	// Line 62, Address: 0x1ae3f4, Func Offset: 0x94
	// Line 66, Address: 0x1ae404, Func Offset: 0xa4
	// Line 67, Address: 0x1ae414, Func Offset: 0xb4
	// Line 68, Address: 0x1ae424, Func Offset: 0xc4
	// Line 69, Address: 0x1ae430, Func Offset: 0xd0
	// Line 70, Address: 0x1ae448, Func Offset: 0xe8
	// Line 73, Address: 0x1ae454, Func Offset: 0xf4
	// Line 75, Address: 0x1ae470, Func Offset: 0x110
	// Line 76, Address: 0x1ae480, Func Offset: 0x120
	// Line 78, Address: 0x1ae48c, Func Offset: 0x12c
	// Line 80, Address: 0x1ae49c, Func Offset: 0x13c
	// Line 83, Address: 0x1ae4d0, Func Offset: 0x170
	// Line 84, Address: 0x1ae504, Func Offset: 0x1a4
	// Line 85, Address: 0x1ae514, Func Offset: 0x1b4
	// Line 90, Address: 0x1ae5a0, Func Offset: 0x240
	// Line 93, Address: 0x1ae610, Func Offset: 0x2b0
	// Line 94, Address: 0x1ae618, Func Offset: 0x2b8
	// Line 95, Address: 0x1ae61c, Func Offset: 0x2bc
	// Line 96, Address: 0x1ae620, Func Offset: 0x2c0
	// Line 97, Address: 0x1ae644, Func Offset: 0x2e4
	// Line 98, Address: 0x1ae658, Func Offset: 0x2f8
	// Line 99, Address: 0x1ae660, Func Offset: 0x300
	// Line 100, Address: 0x1ae664, Func Offset: 0x304
	// Line 101, Address: 0x1ae668, Func Offset: 0x308
	// Line 102, Address: 0x1ae680, Func Offset: 0x320
	// Line 104, Address: 0x1ae688, Func Offset: 0x328
	// Line 107, Address: 0x1ae6ac, Func Offset: 0x34c
	// Line 111, Address: 0x1ae738, Func Offset: 0x3d8
	// Line 113, Address: 0x1ae77c, Func Offset: 0x41c
	// Line 115, Address: 0x1ae7d0, Func Offset: 0x470
	// Line 116, Address: 0x1ae808, Func Offset: 0x4a8
	// Line 117, Address: 0x1ae830, Func Offset: 0x4d0
	// Line 120, Address: 0x1ae884, Func Offset: 0x524
	// Line 121, Address: 0x1ae88c, Func Offset: 0x52c
	// Line 122, Address: 0x1ae8c4, Func Offset: 0x564
	// Line 123, Address: 0x1ae8ec, Func Offset: 0x58c
	// Line 124, Address: 0x1ae8f4, Func Offset: 0x594
	// Line 125, Address: 0x1ae92c, Func Offset: 0x5cc
	// Line 127, Address: 0x1ae954, Func Offset: 0x5f4
	// Line 130, Address: 0x1ae9a8, Func Offset: 0x648
	// Line 131, Address: 0x1ae9b0, Func Offset: 0x650
	// Line 132, Address: 0x1ae9e8, Func Offset: 0x688
	// Line 133, Address: 0x1aea10, Func Offset: 0x6b0
	// Line 136, Address: 0x1aea64, Func Offset: 0x704
	// Line 137, Address: 0x1aea9c, Func Offset: 0x73c
	// Line 138, Address: 0x1aeac4, Func Offset: 0x764
	// Line 142, Address: 0x1aeb18, Func Offset: 0x7b8
	// Line 143, Address: 0x1aeb20, Func Offset: 0x7c0
	// Line 144, Address: 0x1aeb28, Func Offset: 0x7c8
	// Line 147, Address: 0x1aeb5c, Func Offset: 0x7fc
	// Line 148, Address: 0x1aeb64, Func Offset: 0x804
	// Line 149, Address: 0x1aeb9c, Func Offset: 0x83c
	// Line 153, Address: 0x1aec04, Func Offset: 0x8a4
	// Line 154, Address: 0x1aec14, Func Offset: 0x8b4
	// Line 159, Address: 0x1aeca0, Func Offset: 0x940
	// Line 162, Address: 0x1aecb8, Func Offset: 0x958
	// Line 164, Address: 0x1aece0, Func Offset: 0x980
	// Line 166, Address: 0x1aed34, Func Offset: 0x9d4
	// Line 169, Address: 0x1aed88, Func Offset: 0xa28
	// Line 172, Address: 0x1aeddc, Func Offset: 0xa7c
	// Line 173, Address: 0x1aedec, Func Offset: 0xa8c
	// Line 176, Address: 0x1aee04, Func Offset: 0xaa4
	// Line 179, Address: 0x1aee40, Func Offset: 0xae0
	// Line 181, Address: 0x1aee48, Func Offset: 0xae8
	// Func End, Address: 0x1aee70, Func Offset: 0xb10
}

// 
// Start address: 0x1aee70
void PictureLoadImage(sh2gfw_AREA_HEAD* ap, int otp, int tex_adr, int clut_adr)
{
	int i;
	int load_img;
	int load_img_all;
	int tpws;
	sh2gfw_CLUTS_HEAD* cp;
	sh2gfw_TEX_HEAD* tp;
	// Line 193, Address: 0x1aee70, Func Offset: 0
	// Line 201, Address: 0x1aeea4, Func Offset: 0x34
	// Line 202, Address: 0x1aeeac, Func Offset: 0x3c
	// Line 203, Address: 0x1aeeb4, Func Offset: 0x44
	// Line 204, Address: 0x1aeec0, Func Offset: 0x50
	// Line 205, Address: 0x1aeec8, Func Offset: 0x58
	// Line 206, Address: 0x1aeee0, Func Offset: 0x70
	// Line 208, Address: 0x1aeef0, Func Offset: 0x80
	// Line 209, Address: 0x1aef00, Func Offset: 0x90
	// Line 210, Address: 0x1aef0c, Func Offset: 0x9c
	// Line 211, Address: 0x1aef2c, Func Offset: 0xbc
	// Line 212, Address: 0x1aef30, Func Offset: 0xc0
	// Line 213, Address: 0x1aef34, Func Offset: 0xc4
	// Line 217, Address: 0x1aef98, Func Offset: 0x128
	// Line 218, Address: 0x1aefa8, Func Offset: 0x138
	// Line 219, Address: 0x1aefb8, Func Offset: 0x148
	// Line 224, Address: 0x1aeff0, Func Offset: 0x180
	// Line 226, Address: 0x1aeff8, Func Offset: 0x188
	// Line 228, Address: 0x1af02c, Func Offset: 0x1bc
	// Line 229, Address: 0x1af060, Func Offset: 0x1f0
	// Line 230, Address: 0x1af068, Func Offset: 0x1f8
	// Func End, Address: 0x1af098, Func Offset: 0x228
}

