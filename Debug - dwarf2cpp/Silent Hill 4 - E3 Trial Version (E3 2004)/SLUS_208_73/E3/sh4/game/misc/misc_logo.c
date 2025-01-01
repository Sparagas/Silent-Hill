typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _anon5;

typedef int(*type_0)();
typedef void(*type_3)();

typedef int(*type_1)()[3];
typedef unsigned char type_2[2];
typedef void(*type_4)()[3];
typedef unsigned int type_5[4];

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

struct _anon1
{
	_anon0* tex;
	unsigned char tcc;
	unsigned char tfx;
	unsigned char pad[2];
};

struct _anon2
{
	unsigned int cbp;
	unsigned int ofs;
};

struct _anon3
{
	unsigned long reg_alpha;
	unsigned long reg_prim;
	unsigned long reg_test;
	_anon1 tex_data;
	_anon2 clut_data;
	unsigned short ot;
	unsigned short z;
};

struct _anon4
{
	_anon3 base;
	float x;
	float y;
	float w;
	float h;
	int u0;
	int v0;
	int u1;
	int v1;
	unsigned int col[4];
	float rot;
	float scale_x;
	float scale_y;
	int ofs_x;
	int ofs_y;
	unsigned char sprite_flag;
};

struct _anon5
{
	float depth;
	float speed;
	int wait;
};

_anon4 logo;
_anon5 fade_work;
int(*logo_func)()[3];

int misc_LogoTexLoad();
int misc_LogoConstruct();
void draw_konami();
void draw_tyo();
void draw_warning();
int misc_LogoDraw();
void KonamiLogoDrawMain();

// 
// Start address: 0x163b90
int misc_LogoTexLoad()
{
	int rtv;
	// Line 136, Address: 0x163b90, Func Offset: 0
	// Line 139, Address: 0x163b9c, Func Offset: 0xc
	// Line 140, Address: 0x163ba4, Func Offset: 0x14
	// Line 142, Address: 0x163bc8, Func Offset: 0x38
	// Line 143, Address: 0x163bdc, Func Offset: 0x4c
	// Line 145, Address: 0x163be4, Func Offset: 0x54
	// Line 146, Address: 0x163bec, Func Offset: 0x5c
	// Line 147, Address: 0x163bf0, Func Offset: 0x60
	// Line 148, Address: 0x163c04, Func Offset: 0x74
	// Line 152, Address: 0x163c08, Func Offset: 0x78
	// Line 154, Address: 0x163c10, Func Offset: 0x80
	// Line 155, Address: 0x163c14, Func Offset: 0x84
	// Func End, Address: 0x163c24, Func Offset: 0x94
}

// 
// Start address: 0x163c30
int misc_LogoConstruct()
{
	// Line 172, Address: 0x163c30, Func Offset: 0
	// Line 173, Address: 0x163c34, Func Offset: 0x4
	// Line 172, Address: 0x163c38, Func Offset: 0x8
	// Line 173, Address: 0x163c3c, Func Offset: 0xc
	// Line 174, Address: 0x163c4c, Func Offset: 0x1c
	// Line 175, Address: 0x163c58, Func Offset: 0x28
	// Line 177, Address: 0x163c8c, Func Offset: 0x5c
	// Line 178, Address: 0x163cac, Func Offset: 0x7c
	// Line 179, Address: 0x163cc0, Func Offset: 0x90
	// Line 180, Address: 0x163cd4, Func Offset: 0xa4
	// Line 183, Address: 0x163cf0, Func Offset: 0xc0
	// Line 182, Address: 0x163cf8, Func Offset: 0xc8
	// Line 183, Address: 0x163cfc, Func Offset: 0xcc
	// Func End, Address: 0x163d04, Func Offset: 0xd4
}

// 
// Start address: 0x163d10
void draw_konami()
{
	_anon0* logo_tex;
	unsigned int cbp;
	// Line 187, Address: 0x163d10, Func Offset: 0
	// Line 188, Address: 0x163d14, Func Offset: 0x4
	// Line 187, Address: 0x163d18, Func Offset: 0x8
	// Line 188, Address: 0x163d1c, Func Offset: 0xc
	// Line 187, Address: 0x163d20, Func Offset: 0x10
	// Line 188, Address: 0x163d24, Func Offset: 0x14
	// Line 187, Address: 0x163d28, Func Offset: 0x18
	// Line 188, Address: 0x163d2c, Func Offset: 0x1c
	// Line 189, Address: 0x163d38, Func Offset: 0x28
	// Line 191, Address: 0x163d4c, Func Offset: 0x3c
	// Line 192, Address: 0x163d6c, Func Offset: 0x5c
	// Line 194, Address: 0x163da0, Func Offset: 0x90
	// Line 195, Address: 0x163dbc, Func Offset: 0xac
	// Line 197, Address: 0x163dd4, Func Offset: 0xc4
	// Line 198, Address: 0x163de4, Func Offset: 0xd4
	// Func End, Address: 0x163dfc, Func Offset: 0xec
}

// 
// Start address: 0x163e00
void draw_tyo()
{
	_anon0* logo_tex;
	unsigned int cbp;
	// Line 202, Address: 0x163e00, Func Offset: 0
	// Line 203, Address: 0x163e04, Func Offset: 0x4
	// Line 202, Address: 0x163e08, Func Offset: 0x8
	// Line 203, Address: 0x163e0c, Func Offset: 0xc
	// Line 202, Address: 0x163e10, Func Offset: 0x10
	// Line 203, Address: 0x163e14, Func Offset: 0x14
	// Line 202, Address: 0x163e18, Func Offset: 0x18
	// Line 203, Address: 0x163e1c, Func Offset: 0x1c
	// Line 204, Address: 0x163e28, Func Offset: 0x28
	// Line 206, Address: 0x163e3c, Func Offset: 0x3c
	// Line 207, Address: 0x163e5c, Func Offset: 0x5c
	// Line 209, Address: 0x163e90, Func Offset: 0x90
	// Line 210, Address: 0x163eac, Func Offset: 0xac
	// Line 212, Address: 0x163ec4, Func Offset: 0xc4
	// Line 213, Address: 0x163ed4, Func Offset: 0xd4
	// Func End, Address: 0x163eec, Func Offset: 0xec
}

// 
// Start address: 0x163ef0
void draw_warning()
{
	_anon0* logo_tex;
	unsigned int cbp;
	// Line 217, Address: 0x163ef0, Func Offset: 0
	// Line 218, Address: 0x163ef4, Func Offset: 0x4
	// Line 217, Address: 0x163ef8, Func Offset: 0x8
	// Line 218, Address: 0x163efc, Func Offset: 0xc
	// Line 217, Address: 0x163f00, Func Offset: 0x10
	// Line 218, Address: 0x163f04, Func Offset: 0x14
	// Line 217, Address: 0x163f08, Func Offset: 0x18
	// Line 218, Address: 0x163f0c, Func Offset: 0x1c
	// Line 219, Address: 0x163f18, Func Offset: 0x28
	// Line 221, Address: 0x163f28, Func Offset: 0x38
	// Line 219, Address: 0x163f2c, Func Offset: 0x3c
	// Line 221, Address: 0x163f30, Func Offset: 0x40
	// Line 222, Address: 0x163f48, Func Offset: 0x58
	// Line 224, Address: 0x163f68, Func Offset: 0x78
	// Line 226, Address: 0x163f9c, Func Offset: 0xac
	// Line 227, Address: 0x163fb8, Func Offset: 0xc8
	// Line 229, Address: 0x163fd0, Func Offset: 0xe0
	// Line 232, Address: 0x163fe0, Func Offset: 0xf0
	// Line 234, Address: 0x163ffc, Func Offset: 0x10c
	// Line 239, Address: 0x164018, Func Offset: 0x128
	// Line 240, Address: 0x164020, Func Offset: 0x130
	// Func End, Address: 0x164038, Func Offset: 0x148
}

// 
// Start address: 0x164040
int misc_LogoDraw()
{
	int rtv;
	void(*draw_func)()[3];
	int draw_index;
	int skip_flag;
	// Line 243, Address: 0x164040, Func Offset: 0
	// Line 244, Address: 0x164054, Func Offset: 0x14
	// Line 255, Address: 0x164058, Func Offset: 0x18
	// Line 256, Address: 0x164060, Func Offset: 0x20
	// Line 258, Address: 0x1640a0, Func Offset: 0x60
	// Line 259, Address: 0x1640a4, Func Offset: 0x64
	// Line 262, Address: 0x1640ac, Func Offset: 0x6c
	// Line 263, Address: 0x1640b0, Func Offset: 0x70
	// Line 264, Address: 0x164120, Func Offset: 0xe0
	// Line 268, Address: 0x164128, Func Offset: 0xe8
	// Line 272, Address: 0x164150, Func Offset: 0x110
	// Line 273, Address: 0x164160, Func Offset: 0x120
	// Line 275, Address: 0x1641c4, Func Offset: 0x184
	// Line 276, Address: 0x1641c8, Func Offset: 0x188
	// Line 277, Address: 0x164210, Func Offset: 0x1d0
	// Line 279, Address: 0x164218, Func Offset: 0x1d8
	// Line 282, Address: 0x164220, Func Offset: 0x1e0
	// Line 283, Address: 0x164248, Func Offset: 0x208
	// Line 284, Address: 0x164258, Func Offset: 0x218
	// Line 286, Address: 0x1642b4, Func Offset: 0x274
	// Line 287, Address: 0x1642b8, Func Offset: 0x278
	// Line 288, Address: 0x1642cc, Func Offset: 0x28c
	// Line 290, Address: 0x16432c, Func Offset: 0x2ec
	// Line 292, Address: 0x164334, Func Offset: 0x2f4
	// Line 294, Address: 0x16433c, Func Offset: 0x2fc
	// Line 295, Address: 0x164340, Func Offset: 0x300
	// Line 296, Address: 0x164368, Func Offset: 0x328
	// Line 297, Address: 0x164378, Func Offset: 0x338
	// Line 299, Address: 0x1643dc, Func Offset: 0x39c
	// Line 300, Address: 0x1643e0, Func Offset: 0x3a0
	// Line 301, Address: 0x164430, Func Offset: 0x3f0
	// Line 303, Address: 0x164440, Func Offset: 0x400
	// Line 305, Address: 0x164448, Func Offset: 0x408
	// Line 306, Address: 0x164450, Func Offset: 0x410
	// Line 305, Address: 0x164454, Func Offset: 0x414
	// Line 306, Address: 0x164458, Func Offset: 0x418
	// Line 307, Address: 0x16445c, Func Offset: 0x41c
	// Line 311, Address: 0x164464, Func Offset: 0x424
	// Line 312, Address: 0x164468, Func Offset: 0x428
	// Line 315, Address: 0x164470, Func Offset: 0x430
	// Line 318, Address: 0x164494, Func Offset: 0x454
	// Line 320, Address: 0x1644ac, Func Offset: 0x46c
	// Line 321, Address: 0x1644b0, Func Offset: 0x470
	// Func End, Address: 0x1644cc, Func Offset: 0x48c
}

// 
// Start address: 0x1644d0
void KonamiLogoDrawMain()
{
	int flag;
	// Line 330, Address: 0x1644d0, Func Offset: 0
	// Line 333, Address: 0x1644dc, Func Offset: 0xc
	// Line 334, Address: 0x1644e4, Func Offset: 0x14
	// Line 335, Address: 0x164510, Func Offset: 0x40
	// Line 337, Address: 0x164518, Func Offset: 0x48
	// Line 338, Address: 0x16452c, Func Offset: 0x5c
	// Line 340, Address: 0x164530, Func Offset: 0x60
	// Line 342, Address: 0x164538, Func Offset: 0x68
	// Line 343, Address: 0x164540, Func Offset: 0x70
	// Line 346, Address: 0x164548, Func Offset: 0x78
	// Func End, Address: 0x164558, Func Offset: 0x88
}

