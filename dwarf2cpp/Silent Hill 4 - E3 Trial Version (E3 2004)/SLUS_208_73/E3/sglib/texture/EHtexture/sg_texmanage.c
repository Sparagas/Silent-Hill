typedef struct _Clut;
typedef struct _Texture;
typedef struct _anon0;
typedef struct _TextureBuffer;


typedef _Texture type_0[80];
typedef _Clut type_1[1000];

struct _Clut
{
	_Clut* prev;
	_Clut* next;
	void* addr;
	unsigned short bp;
	unsigned short psm;
	short size;
	unsigned short offset;
};

struct _Texture
{
	_Texture* prev;
	_Texture* next;
	void* addr;
	int data_psm;
	_anon0 tex_page;
	int check;
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

struct _TextureBuffer
{
	_Texture textures[80];
	_Clut cluts[1000];
	_Texture texture_head;
	_Texture* texture_free;
	_Clut clut_head;
	_Clut* clut_free;
	int texture_base;
	int texture_buffer_size;
	int texture_buffer_secured;
	int clut_base;
	int clut_buffer_size;
};

int tex_check;
_TextureBuffer vram_work;

void TextureMakeDummy(int bp, int size);
void TextureFlush(int bp_start, int size);
void sgTexManageTextureReset();
int sgTexManageFixAllocate(int bp_start, int size);
int sgTexManageAllocate(int alloc_size);
unsigned int sgTextureManageEntry(void* tex_addr, int psm, int w, int h, int data_psm);
unsigned int sgTextureManageSearch(void* tex_addr);
void ClutRemove(_Clut* clut);
void ClutEntry(_Clut* clut);
void ClutFlush1(_Clut* clut);
void ClutFlush(int bp_start, int size);
void sgClutManageReset();
_Clut* sgClutManageAllocate(int size);
unsigned int sgClutManageEntry(void* clut_addr, int psm, int size);
unsigned int sgClutManageSearch(void* clut_addr);
void sgTexManageInit();
void sgTexManageSetTextureBuffer(unsigned int start, unsigned int b_size);
void sgTexManageSetClutBuffer(unsigned int start, unsigned int b_size);
void sgTexManageSync();
void sgTexManageReset();
void sgTexManageInvalidVRam(int start_addr, int b_size);
int sgTexManageGetSecuredBuffer(int alloc_size);
void sgTexManageReleaseSecuredBuffer();
unsigned int sgTexManageTextureCreate(<unknown fundamental type (0xa510)>* rawdata, int pixel_depth, int w, int h);
unsigned int sgTexManageTextureCreateVaryPSM(<unknown fundamental type (0xa510)>* rawdata, int pixel_depth, int w, int h, int data_psm);
unsigned int sgTexManageTextureConfirm(<unknown fundamental type (0xa510)>* rawdata, int pixel_depth, int w, int h);
unsigned int sgTexManageClutCreate(<unknown fundamental type (0xa510)>* clut_rawdata, int pixel_depth, int n_cluts);
_anon0* sgTexManageTexture(unsigned int texture_id);
unsigned long sgTexManageClutCBP(unsigned int clut_id);
unsigned long sgTexManageClutPaletteCBP(unsigned int clut_id, unsigned int palette_idx);

// 
// Start address: 0x156800
void TextureMakeDummy(int bp, int size)
{
	_Texture* head;
	_anon0* tpage;
	// Line 218, Address: 0x156800, Func Offset: 0
	// Line 219, Address: 0x156838, Func Offset: 0x38
	// Line 223, Address: 0x15683c, Func Offset: 0x3c
	// Line 226, Address: 0x156844, Func Offset: 0x44
	// Line 228, Address: 0x156848, Func Offset: 0x48
	// Line 227, Address: 0x15684c, Func Offset: 0x4c
	// Line 228, Address: 0x156850, Func Offset: 0x50
	// Line 229, Address: 0x156854, Func Offset: 0x54
	// Line 230, Address: 0x15686c, Func Offset: 0x6c
	// Func End, Address: 0x156878, Func Offset: 0x78
}

// 
// Start address: 0x156880
void TextureFlush(int bp_start, int size)
{
	int bp_end;
	_Texture* texture;
	_anon0* t_tpage;
	int top;
	int end;
	// Line 240, Address: 0x156880, Func Offset: 0
	// Line 241, Address: 0x156884, Func Offset: 0x4
	// Line 240, Address: 0x156888, Func Offset: 0x8
	// Line 241, Address: 0x15688c, Func Offset: 0xc
	// Line 254, Address: 0x156898, Func Offset: 0x18
	// Line 241, Address: 0x15689c, Func Offset: 0x1c
	// Line 242, Address: 0x1568a0, Func Offset: 0x20
	// Line 244, Address: 0x1568a4, Func Offset: 0x24
	// Line 245, Address: 0x1568a8, Func Offset: 0x28
	// Line 250, Address: 0x1568b4, Func Offset: 0x34
	// Line 251, Address: 0x1568c0, Func Offset: 0x40
	// Line 254, Address: 0x1568cc, Func Offset: 0x4c
	// Line 255, Address: 0x1568fc, Func Offset: 0x7c
	// Line 256, Address: 0x156908, Func Offset: 0x88
	// Func End, Address: 0x156910, Func Offset: 0x90
}

// 
// Start address: 0x156910
void sgTexManageTextureReset()
{
	_Texture* texture;
	_Texture* head;
	_Texture* next;
	// Line 268, Address: 0x156910, Func Offset: 0
	// Line 270, Address: 0x156914, Func Offset: 0x4
	// Line 268, Address: 0x156918, Func Offset: 0x8
	// Line 272, Address: 0x15691c, Func Offset: 0xc
	// Line 270, Address: 0x156924, Func Offset: 0x14
	// Line 273, Address: 0x156928, Func Offset: 0x18
	// Line 274, Address: 0x156930, Func Offset: 0x20
	// Line 275, Address: 0x156934, Func Offset: 0x24
	// Line 277, Address: 0x156964, Func Offset: 0x54
	// Line 279, Address: 0x156970, Func Offset: 0x60
	// Line 281, Address: 0x1569a8, Func Offset: 0x98
	// Line 283, Address: 0x1569b0, Func Offset: 0xa0
	// Line 286, Address: 0x1569b4, Func Offset: 0xa4
	// Line 284, Address: 0x1569b8, Func Offset: 0xa8
	// Line 286, Address: 0x1569d0, Func Offset: 0xc0
	// Line 287, Address: 0x1569e0, Func Offset: 0xd0
	// Func End, Address: 0x1569ec, Func Offset: 0xdc
}

// 
// Start address: 0x1569f0
int sgTexManageFixAllocate(int bp_start, int size)
{
	int bp_end;
	_Texture* texture;
	_Texture* texture_next;
	_anon0* t_tpage;
	int top;
	int end;
	// Line 302, Address: 0x1569f0, Func Offset: 0
	// Line 307, Address: 0x1569f4, Func Offset: 0x4
	// Line 302, Address: 0x1569f8, Func Offset: 0x8
	// Line 306, Address: 0x1569fc, Func Offset: 0xc
	// Line 307, Address: 0x156a04, Func Offset: 0x14
	// Line 303, Address: 0x156a08, Func Offset: 0x18
	// Line 307, Address: 0x156a0c, Func Offset: 0x1c
	// Line 308, Address: 0x156a18, Func Offset: 0x28
	// Line 310, Address: 0x156a1c, Func Offset: 0x2c
	// Line 312, Address: 0x156a20, Func Offset: 0x30
	// Line 311, Address: 0x156a24, Func Offset: 0x34
	// Line 312, Address: 0x156a28, Func Offset: 0x38
	// Line 316, Address: 0x156a30, Func Offset: 0x40
	// Line 317, Address: 0x156a3c, Func Offset: 0x4c
	// Line 323, Address: 0x156a44, Func Offset: 0x54
	// Line 324, Address: 0x156a50, Func Offset: 0x60
	// Line 326, Address: 0x156a58, Func Offset: 0x68
	// Line 327, Address: 0x156a64, Func Offset: 0x74
	// Line 330, Address: 0x156a6c, Func Offset: 0x7c
	// Line 331, Address: 0x156aa0, Func Offset: 0xb0
	// Line 333, Address: 0x156ab0, Func Offset: 0xc0
	// Line 332, Address: 0x156ab4, Func Offset: 0xc4
	// Line 333, Address: 0x156ab8, Func Offset: 0xc8
	// Func End, Address: 0x156ac0, Func Offset: 0xd0
}

// 
// Start address: 0x156ac0
int sgTexManageAllocate(int alloc_size)
{
	_Texture* texture;
	int bp_start;
	int bp_end;
	int flag;
	int size;
	_anon0* tpage;
	// Line 357, Address: 0x156ac0, Func Offset: 0
	// Line 359, Address: 0x156ac4, Func Offset: 0x4
	// Line 357, Address: 0x156ac8, Func Offset: 0x8
	// Line 360, Address: 0x156acc, Func Offset: 0xc
	// Line 361, Address: 0x156ad0, Func Offset: 0x10
	// Line 364, Address: 0x156ad4, Func Offset: 0x14
	// Line 365, Address: 0x156ae8, Func Offset: 0x28
	// Line 367, Address: 0x156afc, Func Offset: 0x3c
	// Line 368, Address: 0x156b08, Func Offset: 0x48
	// Line 372, Address: 0x156b10, Func Offset: 0x50
	// Line 373, Address: 0x156b18, Func Offset: 0x58
	// Line 376, Address: 0x156b28, Func Offset: 0x68
	// Line 381, Address: 0x156b34, Func Offset: 0x74
	// Line 385, Address: 0x156b40, Func Offset: 0x80
	// Line 386, Address: 0x156b4c, Func Offset: 0x8c
	// Line 389, Address: 0x156b64, Func Offset: 0xa4
	// Line 386, Address: 0x156b68, Func Offset: 0xa8
	// Line 391, Address: 0x156b6c, Func Offset: 0xac
	// Line 393, Address: 0x156b7c, Func Offset: 0xbc
	// Line 395, Address: 0x156b88, Func Offset: 0xc8
	// Line 396, Address: 0x156b8c, Func Offset: 0xcc
	// Line 399, Address: 0x156b98, Func Offset: 0xd8
	// Line 401, Address: 0x156ba8, Func Offset: 0xe8
	// Line 402, Address: 0x156bb4, Func Offset: 0xf4
	// Line 401, Address: 0x156bb8, Func Offset: 0xf8
	// Line 403, Address: 0x156bc0, Func Offset: 0x100
	// Line 404, Address: 0x156bf0, Func Offset: 0x130
	// Line 406, Address: 0x156bfc, Func Offset: 0x13c
	// Line 407, Address: 0x156c08, Func Offset: 0x148
	// Line 408, Address: 0x156c14, Func Offset: 0x154
	// Line 409, Address: 0x156c20, Func Offset: 0x160
	// Line 410, Address: 0x156c28, Func Offset: 0x168
	// Line 412, Address: 0x156c2c, Func Offset: 0x16c
	// Line 410, Address: 0x156c30, Func Offset: 0x170
	// Line 412, Address: 0x156c34, Func Offset: 0x174
	// Line 410, Address: 0x156c38, Func Offset: 0x178
	// Line 412, Address: 0x156c3c, Func Offset: 0x17c
	// Line 411, Address: 0x156c44, Func Offset: 0x184
	// Line 412, Address: 0x156c48, Func Offset: 0x188
	// Line 413, Address: 0x156c68, Func Offset: 0x1a8
	// Line 415, Address: 0x156c70, Func Offset: 0x1b0
	// Line 416, Address: 0x156c78, Func Offset: 0x1b8
	// Line 418, Address: 0x156c80, Func Offset: 0x1c0
	// Line 422, Address: 0x156c90, Func Offset: 0x1d0
	// Line 423, Address: 0x156c9c, Func Offset: 0x1dc
	// Line 424, Address: 0x156ca0, Func Offset: 0x1e0
	// Func End, Address: 0x156cac, Func Offset: 0x1ec
}

// 
// Start address: 0x156cb0
unsigned int sgTextureManageEntry(void* tex_addr, int psm, int w, int h, int data_psm)
{
	int bp;
	_Texture* head;
	_anon0* tpage;
	// Line 450, Address: 0x156cb0, Func Offset: 0
	// Line 457, Address: 0x156cb4, Func Offset: 0x4
	// Line 450, Address: 0x156cb8, Func Offset: 0x8
	// Line 453, Address: 0x156ce4, Func Offset: 0x34
	// Line 450, Address: 0x156ce8, Func Offset: 0x38
	// Line 457, Address: 0x156cec, Func Offset: 0x3c
	// Line 458, Address: 0x156d20, Func Offset: 0x70
	// Line 459, Address: 0x156d28, Func Offset: 0x78
	// Line 460, Address: 0x156d30, Func Offset: 0x80
	// Line 466, Address: 0x156d38, Func Offset: 0x88
	// Line 465, Address: 0x156d3c, Func Offset: 0x8c
	// Line 466, Address: 0x156d40, Func Offset: 0x90
	// Line 467, Address: 0x156d58, Func Offset: 0xa8
	// Line 469, Address: 0x156d5c, Func Offset: 0xac
	// Line 470, Address: 0x156d64, Func Offset: 0xb4
	// Line 471, Address: 0x156d6c, Func Offset: 0xbc
	// Line 473, Address: 0x156d74, Func Offset: 0xc4
	// Line 475, Address: 0x156d78, Func Offset: 0xc8
	// Line 473, Address: 0x156d7c, Func Offset: 0xcc
	// Line 474, Address: 0x156d84, Func Offset: 0xd4
	// Line 475, Address: 0x156d88, Func Offset: 0xd8
	// Line 477, Address: 0x156d90, Func Offset: 0xe0
	// Line 480, Address: 0x156d94, Func Offset: 0xe4
	// Line 482, Address: 0x156da4, Func Offset: 0xf4
	// Line 486, Address: 0x156dbc, Func Offset: 0x10c
	// Line 487, Address: 0x156dc0, Func Offset: 0x110
	// Line 489, Address: 0x156dc8, Func Offset: 0x118
	// Line 487, Address: 0x156dcc, Func Offset: 0x11c
	// Line 489, Address: 0x156ddc, Func Offset: 0x12c
	// Line 490, Address: 0x156de0, Func Offset: 0x130
	// Func End, Address: 0x156e08, Func Offset: 0x158
}

// 
// Start address: 0x156e10
unsigned int sgTextureManageSearch(void* tex_addr)
{
	int i;
	_Texture* texture_head;
	_Texture* texture;
	// Line 501, Address: 0x156e10, Func Offset: 0
	// Line 504, Address: 0x156e14, Func Offset: 0x4
	// Line 505, Address: 0x156e1c, Func Offset: 0xc
	// Line 508, Address: 0x156e28, Func Offset: 0x18
	// Line 509, Address: 0x156e2c, Func Offset: 0x1c
	// Line 510, Address: 0x156e38, Func Offset: 0x28
	// Line 511, Address: 0x156e40, Func Offset: 0x30
	// Line 512, Address: 0x156e48, Func Offset: 0x38
	// Line 513, Address: 0x156e80, Func Offset: 0x70
	// Line 515, Address: 0x156e88, Func Offset: 0x78
	// Line 517, Address: 0x156e98, Func Offset: 0x88
	// Line 518, Address: 0x156ea0, Func Offset: 0x90
	// Func End, Address: 0x156ea8, Func Offset: 0x98
}

// 
// Start address: 0x156eb0
void ClutRemove(_Clut* clut)
{
	int i;
	int size;
	_Clut* head;
	// Line 581, Address: 0x156eb0, Func Offset: 0
	// Line 579, Address: 0x156eb4, Func Offset: 0x4
	// Line 581, Address: 0x156eb8, Func Offset: 0x8
	// Line 586, Address: 0x156ebc, Func Offset: 0xc
	// Line 579, Address: 0x156ec0, Func Offset: 0x10
	// Line 581, Address: 0x156ec4, Func Offset: 0x14
	// Line 583, Address: 0x156ed4, Func Offset: 0x24
	// Line 585, Address: 0x156ed8, Func Offset: 0x28
	// Line 588, Address: 0x156edc, Func Offset: 0x2c
	// Line 586, Address: 0x156ee0, Func Offset: 0x30
	// Line 588, Address: 0x156ee4, Func Offset: 0x34
	// Line 593, Address: 0x156efc, Func Offset: 0x4c
	// Line 591, Address: 0x156f00, Func Offset: 0x50
	// Line 594, Address: 0x156f08, Func Offset: 0x58
	// Line 591, Address: 0x156f0c, Func Offset: 0x5c
	// Line 594, Address: 0x156f10, Func Offset: 0x60
	// Line 591, Address: 0x156f14, Func Offset: 0x64
	// Line 592, Address: 0x156f24, Func Offset: 0x74
	// Line 593, Address: 0x156f28, Func Offset: 0x78
	// Line 594, Address: 0x156f4c, Func Offset: 0x9c
	// Line 591, Address: 0x156f54, Func Offset: 0xa4
	// Line 594, Address: 0x156f58, Func Offset: 0xa8
	// Line 591, Address: 0x156f9c, Func Offset: 0xec
	// Line 594, Address: 0x156fa0, Func Offset: 0xf0
	// Line 591, Address: 0x156fe4, Func Offset: 0x134
	// Line 594, Address: 0x156fe8, Func Offset: 0x138
	// Line 588, Address: 0x15703c, Func Offset: 0x18c
	// Line 594, Address: 0x157040, Func Offset: 0x190
	// Line 595, Address: 0x157070, Func Offset: 0x1c0
	// Func End, Address: 0x157078, Func Offset: 0x1c8
}

// 
// Start address: 0x157080
void ClutEntry(_Clut* clut)
{
	int i;
	int size;
	_Clut* head;
	// Line 603, Address: 0x157080, Func Offset: 0
	// Line 610, Address: 0x157084, Func Offset: 0x4
	// Line 603, Address: 0x157088, Func Offset: 0x8
	// Line 605, Address: 0x15708c, Func Offset: 0xc
	// Line 607, Address: 0x1570a4, Func Offset: 0x24
	// Line 610, Address: 0x1570a8, Func Offset: 0x28
	// Line 613, Address: 0x1570c8, Func Offset: 0x48
	// Line 614, Address: 0x1570cc, Func Offset: 0x4c
	// Line 615, Address: 0x1570e4, Func Offset: 0x64
	// Line 614, Address: 0x1570ec, Func Offset: 0x6c
	// Line 615, Address: 0x1570f0, Func Offset: 0x70
	// Line 614, Address: 0x1570fc, Func Offset: 0x7c
	// Line 615, Address: 0x157100, Func Offset: 0x80
	// Line 614, Address: 0x15710c, Func Offset: 0x8c
	// Line 615, Address: 0x157110, Func Offset: 0x90
	// Line 614, Address: 0x15711c, Func Offset: 0x9c
	// Line 615, Address: 0x157120, Func Offset: 0xa0
	// Line 614, Address: 0x15712c, Func Offset: 0xac
	// Line 615, Address: 0x157130, Func Offset: 0xb0
	// Line 614, Address: 0x15713c, Func Offset: 0xbc
	// Line 615, Address: 0x157140, Func Offset: 0xc0
	// Line 610, Address: 0x15716c, Func Offset: 0xec
	// Line 614, Address: 0x157170, Func Offset: 0xf0
	// Line 615, Address: 0x157174, Func Offset: 0xf4
	// Line 616, Address: 0x157190, Func Offset: 0x110
	// Func End, Address: 0x157198, Func Offset: 0x118
}

// 
// Start address: 0x1571a0
void ClutFlush1(_Clut* clut)
{
	_Clut* head;
	// Line 631, Address: 0x1571a0, Func Offset: 0
	// Line 632, Address: 0x1571b4, Func Offset: 0x14
	// Line 635, Address: 0x1571bc, Func Offset: 0x1c
	// Line 638, Address: 0x1571c4, Func Offset: 0x24
	// Line 641, Address: 0x1571d8, Func Offset: 0x38
	// Line 642, Address: 0x1571e4, Func Offset: 0x44
	// Line 643, Address: 0x1571ec, Func Offset: 0x4c
	// Line 645, Address: 0x1571f0, Func Offset: 0x50
	// Line 643, Address: 0x1571f4, Func Offset: 0x54
	// Line 644, Address: 0x157208, Func Offset: 0x68
	// Line 645, Address: 0x15720c, Func Offset: 0x6c
	// Line 647, Address: 0x157210, Func Offset: 0x70
	// Func End, Address: 0x157224, Func Offset: 0x84
}

// 
// Start address: 0x157230
void ClutFlush(int bp_start, int size)
{
	int bp_end;
	int nb_clut;
	int i;
	_Clut* clut;
	// Line 650, Address: 0x157230, Func Offset: 0
	// Line 651, Address: 0x157234, Func Offset: 0x4
	// Line 650, Address: 0x157238, Func Offset: 0x8
	// Line 651, Address: 0x15723c, Func Offset: 0xc
	// Line 650, Address: 0x157240, Func Offset: 0x10
	// Line 651, Address: 0x15724c, Func Offset: 0x1c
	// Line 657, Address: 0x157250, Func Offset: 0x20
	// Line 658, Address: 0x15725c, Func Offset: 0x2c
	// Line 659, Address: 0x15726c, Func Offset: 0x3c
	// Line 660, Address: 0x157278, Func Offset: 0x48
	// Line 661, Address: 0x157280, Func Offset: 0x50
	// Line 664, Address: 0x15728c, Func Offset: 0x5c
	// Line 666, Address: 0x15729c, Func Offset: 0x6c
	// Line 667, Address: 0x1572c4, Func Offset: 0x94
	// Line 666, Address: 0x1572c8, Func Offset: 0x98
	// Line 667, Address: 0x1572cc, Func Offset: 0x9c
	// Line 668, Address: 0x1572d8, Func Offset: 0xa8
	// Line 669, Address: 0x1572e0, Func Offset: 0xb0
	// Line 670, Address: 0x1572f8, Func Offset: 0xc8
	// Func End, Address: 0x157310, Func Offset: 0xe0
}

// 
// Start address: 0x157310
void sgClutManageReset()
{
	int i;
	_Clut* clut;
	_Clut* head;
	int rest;
	int bp;
	// Line 681, Address: 0x157310, Func Offset: 0
	// Line 680, Address: 0x157314, Func Offset: 0x4
	// Line 681, Address: 0x157318, Func Offset: 0x8
	// Line 690, Address: 0x15731c, Func Offset: 0xc
	// Line 680, Address: 0x157320, Func Offset: 0x10
	// Line 690, Address: 0x157324, Func Offset: 0x14
	// Line 682, Address: 0x157330, Func Offset: 0x20
	// Line 686, Address: 0x157338, Func Offset: 0x28
	// Line 690, Address: 0x15733c, Func Offset: 0x2c
	// Line 692, Address: 0x157348, Func Offset: 0x38
	// Line 693, Address: 0x15734c, Func Offset: 0x3c
	// Line 691, Address: 0x157350, Func Offset: 0x40
	// Line 694, Address: 0x157354, Func Offset: 0x44
	// Line 697, Address: 0x157358, Func Offset: 0x48
	// Line 695, Address: 0x15735c, Func Offset: 0x4c
	// Line 698, Address: 0x157360, Func Offset: 0x50
	// Line 695, Address: 0x157364, Func Offset: 0x54
	// Line 699, Address: 0x157368, Func Offset: 0x58
	// Line 695, Address: 0x15736c, Func Offset: 0x5c
	// Line 698, Address: 0x157374, Func Offset: 0x64
	// Line 695, Address: 0x157378, Func Offset: 0x68
	// Line 699, Address: 0x157380, Func Offset: 0x70
	// Line 702, Address: 0x157398, Func Offset: 0x88
	// Func End, Address: 0x1573a0, Func Offset: 0x90
}

// 
// Start address: 0x1573a0
_Clut* sgClutManageAllocate(int size)
{
	int i;
	_Clut* clut;
	int bp;
	// Line 708, Address: 0x1573a0, Func Offset: 0
	// Line 711, Address: 0x1573a4, Func Offset: 0x4
	// Line 708, Address: 0x1573a8, Func Offset: 0x8
	// Line 711, Address: 0x1573b0, Func Offset: 0x10
	// Line 713, Address: 0x1573c0, Func Offset: 0x20
	// Line 711, Address: 0x1573c4, Func Offset: 0x24
	// Line 713, Address: 0x1573c8, Func Offset: 0x28
	// Line 711, Address: 0x1573cc, Func Offset: 0x2c
	// Line 715, Address: 0x1573d0, Func Offset: 0x30
	// Line 716, Address: 0x1573e0, Func Offset: 0x40
	// Line 717, Address: 0x1573e8, Func Offset: 0x48
	// Line 719, Address: 0x1573f8, Func Offset: 0x58
	// Line 722, Address: 0x157400, Func Offset: 0x60
	// Line 723, Address: 0x157410, Func Offset: 0x70
	// Line 724, Address: 0x157418, Func Offset: 0x78
	// Line 723, Address: 0x15741c, Func Offset: 0x7c
	// Line 724, Address: 0x157420, Func Offset: 0x80
	// Line 727, Address: 0x157430, Func Offset: 0x90
	// Func End, Address: 0x15743c, Func Offset: 0x9c
}

// 
// Start address: 0x157440
unsigned int sgClutManageEntry(void* clut_addr, int psm, int size)
{
	int bp;
	int i;
	int d;
	_Clut* clut;
	_anon0 tpage;
	// Line 736, Address: 0x157440, Func Offset: 0
	// Line 744, Address: 0x15746c, Func Offset: 0x2c
	// Line 736, Address: 0x157470, Func Offset: 0x30
	// Line 744, Address: 0x157474, Func Offset: 0x34
	// Line 745, Address: 0x157480, Func Offset: 0x40
	// Line 746, Address: 0x157488, Func Offset: 0x48
	// Line 747, Address: 0x157494, Func Offset: 0x54
	// Line 748, Address: 0x15749c, Func Offset: 0x5c
	// Line 751, Address: 0x1574a0, Func Offset: 0x60
	// Line 752, Address: 0x1574a4, Func Offset: 0x64
	// Line 753, Address: 0x1574a8, Func Offset: 0x68
	// Line 758, Address: 0x1574ac, Func Offset: 0x6c
	// Line 759, Address: 0x1574b4, Func Offset: 0x74
	// Line 761, Address: 0x1574c0, Func Offset: 0x80
	// Line 763, Address: 0x1574c8, Func Offset: 0x88
	// Line 764, Address: 0x1574d8, Func Offset: 0x98
	// Line 766, Address: 0x1574f0, Func Offset: 0xb0
	// Line 770, Address: 0x15750c, Func Offset: 0xcc
	// Line 766, Address: 0x157510, Func Offset: 0xd0
	// Line 770, Address: 0x157514, Func Offset: 0xd4
	// Line 776, Address: 0x157520, Func Offset: 0xe0
	// Line 778, Address: 0x157528, Func Offset: 0xe8
	// Line 779, Address: 0x157530, Func Offset: 0xf0
	// Func End, Address: 0x15755c, Func Offset: 0x11c
}

// 
// Start address: 0x157560
unsigned int sgClutManageSearch(void* clut_addr)
{
	int i;
	_Clut* clut_head;
	_Clut* clut;
	// Line 789, Address: 0x157560, Func Offset: 0
	// Line 792, Address: 0x157564, Func Offset: 0x4
	// Line 793, Address: 0x15756c, Func Offset: 0xc
	// Line 796, Address: 0x157578, Func Offset: 0x18
	// Line 797, Address: 0x15757c, Func Offset: 0x1c
	// Line 798, Address: 0x157588, Func Offset: 0x28
	// Line 799, Address: 0x157594, Func Offset: 0x34
	// Line 800, Address: 0x15759c, Func Offset: 0x3c
	// Line 801, Address: 0x1575d8, Func Offset: 0x78
	// Line 803, Address: 0x1575e0, Func Offset: 0x80
	// Line 804, Address: 0x1575f0, Func Offset: 0x90
	// Line 805, Address: 0x1575f8, Func Offset: 0x98
	// Func End, Address: 0x157600, Func Offset: 0xa0
}

// 
// Start address: 0x157600
void sgTexManageInit()
{
	int i;
	_TextureBuffer* work;
	_Texture* texture;
	_Clut* clut;
	// Line 814, Address: 0x157600, Func Offset: 0
	// Line 820, Address: 0x157604, Func Offset: 0x4
	// Line 814, Address: 0x157608, Func Offset: 0x8
	// Line 820, Address: 0x15760c, Func Offset: 0xc
	// Line 814, Address: 0x157610, Func Offset: 0x10
	// Line 816, Address: 0x157614, Func Offset: 0x14
	// Line 820, Address: 0x15761c, Func Offset: 0x1c
	// Line 823, Address: 0x157624, Func Offset: 0x24
	// Line 828, Address: 0x157628, Func Offset: 0x28
	// Line 823, Address: 0x15762c, Func Offset: 0x2c
	// Line 829, Address: 0x157630, Func Offset: 0x30
	// Line 824, Address: 0x157634, Func Offset: 0x34
	// Line 830, Address: 0x157638, Func Offset: 0x38
	// Line 825, Address: 0x15763c, Func Offset: 0x3c
	// Line 829, Address: 0x157640, Func Offset: 0x40
	// Line 831, Address: 0x157648, Func Offset: 0x48
	// Line 832, Address: 0x157650, Func Offset: 0x50
	// Line 831, Address: 0x157654, Func Offset: 0x54
	// Line 832, Address: 0x15765c, Func Offset: 0x5c
	// Line 831, Address: 0x157664, Func Offset: 0x64
	// Line 832, Address: 0x15766c, Func Offset: 0x6c
	// Line 831, Address: 0x157678, Func Offset: 0x78
	// Line 832, Address: 0x157680, Func Offset: 0x80
	// Line 831, Address: 0x15768c, Func Offset: 0x8c
	// Line 832, Address: 0x157694, Func Offset: 0x94
	// Line 831, Address: 0x1576a4, Func Offset: 0xa4
	// Line 832, Address: 0x1576ac, Func Offset: 0xac
	// Line 835, Address: 0x1576b0, Func Offset: 0xb0
	// Line 832, Address: 0x1576b4, Func Offset: 0xb4
	// Line 841, Address: 0x1576b8, Func Offset: 0xb8
	// Line 832, Address: 0x1576bc, Func Offset: 0xbc
	// Line 839, Address: 0x1576c0, Func Offset: 0xc0
	// Line 831, Address: 0x1576c4, Func Offset: 0xc4
	// Line 832, Address: 0x1576cc, Func Offset: 0xcc
	// Line 831, Address: 0x1576d8, Func Offset: 0xd8
	// Line 832, Address: 0x1576e0, Func Offset: 0xe0
	// Line 831, Address: 0x1576ec, Func Offset: 0xec
	// Line 832, Address: 0x1576f0, Func Offset: 0xf0
	// Line 833, Address: 0x1576f4, Func Offset: 0xf4
	// Line 836, Address: 0x1576f8, Func Offset: 0xf8
	// Line 837, Address: 0x1576fc, Func Offset: 0xfc
	// Line 840, Address: 0x157700, Func Offset: 0x100
	// Line 842, Address: 0x157708, Func Offset: 0x108
	// Line 843, Address: 0x157710, Func Offset: 0x110
	// Line 842, Address: 0x157714, Func Offset: 0x114
	// Line 843, Address: 0x15771c, Func Offset: 0x11c
	// Line 842, Address: 0x157724, Func Offset: 0x124
	// Line 843, Address: 0x15772c, Func Offset: 0x12c
	// Line 842, Address: 0x157738, Func Offset: 0x138
	// Line 843, Address: 0x157740, Func Offset: 0x140
	// Line 842, Address: 0x15774c, Func Offset: 0x14c
	// Line 843, Address: 0x157754, Func Offset: 0x154
	// Line 842, Address: 0x157764, Func Offset: 0x164
	// Line 843, Address: 0x15776c, Func Offset: 0x16c
	// Line 846, Address: 0x157770, Func Offset: 0x170
	// Line 843, Address: 0x157774, Func Offset: 0x174
	// Line 846, Address: 0x157778, Func Offset: 0x178
	// Line 843, Address: 0x15777c, Func Offset: 0x17c
	// Line 842, Address: 0x157780, Func Offset: 0x180
	// Line 843, Address: 0x157788, Func Offset: 0x188
	// Line 842, Address: 0x157794, Func Offset: 0x194
	// Line 843, Address: 0x15779c, Func Offset: 0x19c
	// Line 842, Address: 0x1577a8, Func Offset: 0x1a8
	// Line 843, Address: 0x1577ac, Func Offset: 0x1ac
	// Line 846, Address: 0x1577b0, Func Offset: 0x1b0
	// Line 847, Address: 0x1577b8, Func Offset: 0x1b8
	// Line 848, Address: 0x1577c4, Func Offset: 0x1c4
	// Func End, Address: 0x1577d4, Func Offset: 0x1d4
}

// 
// Start address: 0x1577e0
void sgTexManageSetTextureBuffer(unsigned int start, unsigned int b_size)
{
	// Line 861, Address: 0x1577e0, Func Offset: 0
	// Line 862, Address: 0x1577e8, Func Offset: 0x8
	// Line 864, Address: 0x1577ec, Func Offset: 0xc
	// Func End, Address: 0x1577f4, Func Offset: 0x14
}

// 
// Start address: 0x157800
void sgTexManageSetClutBuffer(unsigned int start, unsigned int b_size)
{
	// Line 877, Address: 0x157800, Func Offset: 0
	// Line 878, Address: 0x157808, Func Offset: 0x8
	// Line 880, Address: 0x15780c, Func Offset: 0xc
	// Func End, Address: 0x157814, Func Offset: 0x14
}

// 
// Start address: 0x157820
void sgTexManageSync()
{
	// Line 927, Address: 0x157820, Func Offset: 0
	// Func End, Address: 0x157828, Func Offset: 0x8
}

// 
// Start address: 0x157830
void sgTexManageReset()
{
	// Line 936, Address: 0x157830, Func Offset: 0
	// Line 937, Address: 0x157838, Func Offset: 0x8
	// Line 938, Address: 0x157840, Func Offset: 0x10
	// Line 939, Address: 0x157848, Func Offset: 0x18
	// Func End, Address: 0x157854, Func Offset: 0x24
}

// 
// Start address: 0x157860
void sgTexManageInvalidVRam(int start_addr, int b_size)
{
	int end;
	int w_end;
	// Line 948, Address: 0x157860, Func Offset: 0
	// Line 949, Address: 0x157864, Func Offset: 0x4
	// Line 948, Address: 0x157868, Func Offset: 0x8
	// Line 949, Address: 0x15786c, Func Offset: 0xc
	// Line 954, Address: 0x157878, Func Offset: 0x18
	// Line 955, Address: 0x157880, Func Offset: 0x20
	// Line 956, Address: 0x157898, Func Offset: 0x38
	// Line 959, Address: 0x1578a8, Func Offset: 0x48
	// Line 960, Address: 0x1578b0, Func Offset: 0x50
	// Line 961, Address: 0x1578c8, Func Offset: 0x68
	// Line 962, Address: 0x1578d0, Func Offset: 0x70
	// Func End, Address: 0x1578dc, Func Offset: 0x7c
}

// 
// Start address: 0x1578e0
int sgTexManageGetSecuredBuffer(int alloc_size)
{
	// Line 986, Address: 0x1578e0, Func Offset: 0
	// Line 988, Address: 0x1578f8, Func Offset: 0x18
	// Line 989, Address: 0x157908, Func Offset: 0x28
	// Line 990, Address: 0x157914, Func Offset: 0x34
	// Line 991, Address: 0x15791c, Func Offset: 0x3c
	// Line 992, Address: 0x157920, Func Offset: 0x40
	// Line 993, Address: 0x15792c, Func Offset: 0x4c
	// Line 994, Address: 0x157938, Func Offset: 0x58
	// Line 998, Address: 0x157940, Func Offset: 0x60
	// Line 999, Address: 0x15794c, Func Offset: 0x6c
	// Line 1003, Address: 0x157950, Func Offset: 0x70
	// Line 999, Address: 0x157954, Func Offset: 0x74
	// Line 1000, Address: 0x157958, Func Offset: 0x78
	// Line 1003, Address: 0x15796c, Func Offset: 0x8c
	// Line 1004, Address: 0x157970, Func Offset: 0x90
	// Func End, Address: 0x157984, Func Offset: 0xa4
}

// 
// Start address: 0x157990
void sgTexManageReleaseSecuredBuffer()
{
	// Line 1011, Address: 0x157990, Func Offset: 0
	// Line 1012, Address: 0x157994, Func Offset: 0x4
	// Line 1011, Address: 0x157998, Func Offset: 0x8
	// Line 1012, Address: 0x15799c, Func Offset: 0xc
	// Line 1014, Address: 0x1579b4, Func Offset: 0x24
	// Line 1015, Address: 0x1579c0, Func Offset: 0x30
	// Line 1016, Address: 0x1579c8, Func Offset: 0x38
	// Func End, Address: 0x1579d4, Func Offset: 0x44
}

// 
// Start address: 0x1579e0
unsigned int sgTexManageTextureCreate(<unknown fundamental type (0xa510)>* rawdata, int pixel_depth, int w, int h)
{
	// Line 1033, Address: 0x1579e0, Func Offset: 0
	// Func End, Address: 0x1579e8, Func Offset: 0x8
}

// 
// Start address: 0x1579f0
unsigned int sgTexManageTextureCreateVaryPSM(<unknown fundamental type (0xa510)>* rawdata, int pixel_depth, int w, int h, int data_psm)
{
	int id;
	// Line 1054, Address: 0x1579f0, Func Offset: 0
	// Func End, Address: 0x1579f8, Func Offset: 0x8
}

// 
// Start address: 0x157a00
unsigned int sgTexManageTextureConfirm(<unknown fundamental type (0xa510)>* rawdata, int pixel_depth, int w, int h)
{
	int id;
	// Line 1074, Address: 0x157a00, Func Offset: 0
	// Line 1075, Address: 0x157a24, Func Offset: 0x24
	// Line 1076, Address: 0x157a2c, Func Offset: 0x2c
	// Line 1077, Address: 0x157a34, Func Offset: 0x34
	// Line 1079, Address: 0x157a48, Func Offset: 0x48
	// Func End, Address: 0x157a64, Func Offset: 0x64
}

// 
// Start address: 0x157a70
unsigned int sgTexManageClutCreate(<unknown fundamental type (0xa510)>* clut_rawdata, int pixel_depth, int n_cluts)
{
	// Line 1095, Address: 0x157a70, Func Offset: 0
	// Func End, Address: 0x157a78, Func Offset: 0x8
}

// 
// Start address: 0x157a80
_anon0* sgTexManageTexture(unsigned int texture_id)
{
	_Texture* texture;
	// Line 1131, Address: 0x157a80, Func Offset: 0
	// Line 1137, Address: 0x157a8c, Func Offset: 0xc
	// Func End, Address: 0x157a94, Func Offset: 0x14
}

// 
// Start address: 0x157aa0
unsigned long sgTexManageClutCBP(unsigned int clut_id)
{
	_Clut* clut;
	// Line 1167, Address: 0x157aa0, Func Offset: 0
	// Line 1170, Address: 0x157aac, Func Offset: 0xc
	// Func End, Address: 0x157ab4, Func Offset: 0x14
}

// 
// Start address: 0x157ac0
unsigned long sgTexManageClutPaletteCBP(unsigned int clut_id, unsigned int palette_idx)
{
	_Clut* clut;
	// Line 1199, Address: 0x157ac0, Func Offset: 0
	// Line 1200, Address: 0x157ac8, Func Offset: 0x8
	// Line 1204, Address: 0x157ad0, Func Offset: 0x10
	// Line 1205, Address: 0x157adc, Func Offset: 0x1c
	// Line 1207, Address: 0x157ae0, Func Offset: 0x20
	// Line 1208, Address: 0x157af0, Func Offset: 0x30
	// Line 1209, Address: 0x157af8, Func Offset: 0x38
	// Line 1210, Address: 0x157b10, Func Offset: 0x50
	// Func End, Address: 0x157b18, Func Offset: 0x58
}

