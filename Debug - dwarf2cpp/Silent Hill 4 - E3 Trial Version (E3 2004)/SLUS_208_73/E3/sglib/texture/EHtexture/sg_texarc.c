typedef struct sgTexArc;
typedef struct _TextureData;
typedef struct _TextureArc;
typedef struct sgClutData;
typedef struct _ClutData;
typedef struct _anon0;
typedef struct sgTexData;


typedef int type_0[3];
typedef int type_1[0];
typedef <unknown fundamental type (0xa510)> type_2[0];
typedef <unknown fundamental type (0xa510)> type_3[0];

struct sgTexArc
{
	<unknown fundamental type (0xa510)> dummy;
};

struct _TextureData
{
	unsigned short w;
	unsigned short pad_s0;
	unsigned short h;
	unsigned short pad_s1;
	unsigned char image_psm;
	unsigned char load_psm;
	unsigned char pad_c0;
	unsigned char version;
	unsigned int offset_to_data;
	<unknown fundamental type (0xa510)> data[0];
};

struct _TextureArc
{
	short n_texture;
	short n_clut;
	int pad[3];
	int offsets[0];
};

struct sgClutData
{
	<unknown fundamental type (0xa510)> dummy;
};

struct _ClutData
{
	short psm;
	short version;
	unsigned int size;
	unsigned int pad;
	unsigned int offset_to_data;
	<unknown fundamental type (0xa510)> data[0];
};

struct _anon0
{
	short base;
	short buffer_w;
	unsigned char psm;
	unsigned char data_psm;
	short w;
	short h;
	short buffer_size;
	short w2;
	short h2;
};

struct sgTexData
{
	<unknown fundamental type (0xa510)> dummy;
};


sgTexData* sgTexArcGetTexture(sgTexArc* arc_data, int texture_id);
sgClutData* sgTexArcGetClut(sgTexArc* arc_data, int clut_id);
int sgTexArcNClut(sgTexArc* arc_data);
void sgTexDataLoadImage(sgTexData* tex_data_addr, int bp);
void sgClutDataLoadImage(sgClutData* clut_data_, int bp);
int sgClutDataNPalettes(sgClutData* clut_data_);
void sgTextureConstructFromTexData(_anon0* texture, int base, sgTexData* tex_data_addr);
unsigned int sgTexManageTexDataConfirm(sgTexData* tex_data_addr);
unsigned int sgTexManageClutDataConfirm(sgClutData* clut_data_addr);

// 
// Start address: 0x1564e0
sgTexData* sgTexArcGetTexture(sgTexArc* arc_data, int texture_id)
{
	// Line 81, Address: 0x1564e0, Func Offset: 0
	// Line 82, Address: 0x1564ec, Func Offset: 0xc
	// Func End, Address: 0x1564f4, Func Offset: 0x14
}

// 
// Start address: 0x156500
sgClutData* sgTexArcGetClut(sgTexArc* arc_data, int clut_id)
{
	_TextureArc* texarc;
	// Line 95, Address: 0x156500, Func Offset: 0
	// Line 96, Address: 0x156518, Func Offset: 0x18
	// Func End, Address: 0x156520, Func Offset: 0x20
}

// 
// Start address: 0x156520
int sgTexArcNClut(sgTexArc* arc_data)
{
	// Line 119, Address: 0x156520, Func Offset: 0
	// Func End, Address: 0x156528, Func Offset: 0x8
}

// 
// Start address: 0x156530
void sgTexDataLoadImage(sgTexData* tex_data_addr, int bp)
{
	_TextureData* tex_data;
	_anon0 tpage;
	// Line 141, Address: 0x156530, Func Offset: 0
	// Line 146, Address: 0x156540, Func Offset: 0x10
	// Line 150, Address: 0x156548, Func Offset: 0x18
	// Line 152, Address: 0x156554, Func Offset: 0x24
	// Line 153, Address: 0x156574, Func Offset: 0x44
	// Func End, Address: 0x156588, Func Offset: 0x58
}

// 
// Start address: 0x156590
void sgClutDataLoadImage(sgClutData* clut_data_, int bp)
{
	_ClutData* clut_data;
	_anon0 tpage;
	void* addr;
	int i;
	int d;
	// Line 158, Address: 0x156590, Func Offset: 0
	// Line 159, Address: 0x1565a8, Func Offset: 0x18
	// Line 158, Address: 0x1565ac, Func Offset: 0x1c
	// Line 165, Address: 0x1565b4, Func Offset: 0x24
	// Line 168, Address: 0x1565bc, Func Offset: 0x2c
	// Line 169, Address: 0x1565c8, Func Offset: 0x38
	// Line 171, Address: 0x1565d0, Func Offset: 0x40
	// Line 175, Address: 0x1565d8, Func Offset: 0x48
	// Line 173, Address: 0x1565dc, Func Offset: 0x4c
	// Line 175, Address: 0x1565e0, Func Offset: 0x50
	// Line 176, Address: 0x1565f8, Func Offset: 0x68
	// Line 177, Address: 0x156610, Func Offset: 0x80
	// Line 178, Address: 0x15662c, Func Offset: 0x9c
	// Line 177, Address: 0x156634, Func Offset: 0xa4
	// Line 178, Address: 0x156638, Func Offset: 0xa8
	// Line 179, Address: 0x156648, Func Offset: 0xb8
	// Func End, Address: 0x15666c, Func Offset: 0xdc
}

// 
// Start address: 0x156670
int sgClutDataNPalettes(sgClutData* clut_data_)
{
	// Line 189, Address: 0x156670, Func Offset: 0
	// Func End, Address: 0x156678, Func Offset: 0x8
}

// 
// Start address: 0x156680
void sgTextureConstructFromTexData(_anon0* texture, int base, sgTexData* tex_data_addr)
{
	_TextureData* tex_data;
	// Line 194, Address: 0x156680, Func Offset: 0
	// Line 196, Address: 0x156690, Func Offset: 0x10
	// Line 199, Address: 0x156698, Func Offset: 0x18
	// Line 200, Address: 0x15669c, Func Offset: 0x1c
	// Line 202, Address: 0x1566ac, Func Offset: 0x2c
	// Line 203, Address: 0x1566b8, Func Offset: 0x38
	// Line 204, Address: 0x1566c0, Func Offset: 0x40
	// Func End, Address: 0x1566d4, Func Offset: 0x54
}

// 
// Start address: 0x1566e0
unsigned int sgTexManageTexDataConfirm(sgTexData* tex_data_addr)
{
	_TextureData* tex_data;
	int tex_id;
	void* raw_data;
	// Line 217, Address: 0x1566e0, Func Offset: 0
	// Line 222, Address: 0x1566f0, Func Offset: 0x10
	// Line 223, Address: 0x1566f8, Func Offset: 0x18
	// Line 228, Address: 0x156700, Func Offset: 0x20
	// Line 230, Address: 0x156714, Func Offset: 0x34
	// Line 231, Address: 0x15671c, Func Offset: 0x3c
	// Line 232, Address: 0x156724, Func Offset: 0x44
	// Line 236, Address: 0x156730, Func Offset: 0x50
	// Line 242, Address: 0x156770, Func Offset: 0x90
	// Func End, Address: 0x156784, Func Offset: 0xa4
}

// 
// Start address: 0x156790
unsigned int sgTexManageClutDataConfirm(sgClutData* clut_data_addr)
{
	_ClutData* clut_data;
	void* raw_data;
	int clut_id;
	// Line 255, Address: 0x156790, Func Offset: 0
	// Line 263, Address: 0x1567a0, Func Offset: 0x10
	// Line 265, Address: 0x1567bc, Func Offset: 0x2c
	// Line 266, Address: 0x1567c4, Func Offset: 0x34
	// Line 267, Address: 0x1567cc, Func Offset: 0x3c
	// Line 268, Address: 0x1567d8, Func Offset: 0x48
	// Line 269, Address: 0x1567e8, Func Offset: 0x58
	// Func End, Address: 0x1567fc, Func Offset: 0x6c
}

