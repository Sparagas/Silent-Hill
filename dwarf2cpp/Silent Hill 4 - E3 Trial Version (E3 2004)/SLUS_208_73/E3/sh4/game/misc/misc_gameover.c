typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;


typedef unsigned char type_0[2];
typedef unsigned int type_1[4];

struct _anon0
{
	_anon1* tex;
	unsigned char tcc;
	unsigned char tfx;
	unsigned char pad[2];
};

struct _anon1
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
	_anon0 tex_data;
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

int str_alpha;

void draw_game_over();
void init_str_alpha();
int str_fadein();
int str_fadeout();
int miscGameOver();

// 
// Start address: 0x2cab40
void draw_game_over()
{
	_anon1* tex;
	unsigned int cbp;
	_anon4 img;
	char flag;
	// Line 103, Address: 0x2cab40, Func Offset: 0
	// Line 114, Address: 0x2cab44, Func Offset: 0x4
	// Line 103, Address: 0x2cab48, Func Offset: 0x8
	// Line 114, Address: 0x2cab58, Func Offset: 0x18
	// Line 115, Address: 0x2cab64, Func Offset: 0x24
	// Line 116, Address: 0x2cab70, Func Offset: 0x30
	// Line 119, Address: 0x2caba4, Func Offset: 0x64
	// Line 120, Address: 0x2cabc4, Func Offset: 0x84
	// Line 121, Address: 0x2cabd8, Func Offset: 0x98
	// Line 122, Address: 0x2cabf4, Func Offset: 0xb4
	// Line 124, Address: 0x2cac08, Func Offset: 0xc8
	// Line 125, Address: 0x2cac1c, Func Offset: 0xdc
	// Line 126, Address: 0x2cac2c, Func Offset: 0xec
	// Line 125, Address: 0x2cac30, Func Offset: 0xf0
	// Line 126, Address: 0x2cac34, Func Offset: 0xf4
	// Line 127, Address: 0x2cac4c, Func Offset: 0x10c
	// Line 128, Address: 0x2cac64, Func Offset: 0x124
	// Line 160, Address: 0x2cac74, Func Offset: 0x134
	// Func End, Address: 0x2cac8c, Func Offset: 0x14c
}

// 
// Start address: 0x2cac90
void init_str_alpha()
{
	// Line 321, Address: 0x2cac90, Func Offset: 0
	// Func End, Address: 0x2cac9c, Func Offset: 0xc
}

// 
// Start address: 0x2caca0
int str_fadein()
{
	int rtv;
	// Line 327, Address: 0x2caca0, Func Offset: 0
	// Line 328, Address: 0x2cacb4, Func Offset: 0x14
	// Line 329, Address: 0x2cacc8, Func Offset: 0x28
	// Line 330, Address: 0x2cacd0, Func Offset: 0x30
	// Line 329, Address: 0x2cacd4, Func Offset: 0x34
	// Line 333, Address: 0x2cacd8, Func Offset: 0x38
	// Func End, Address: 0x2cace0, Func Offset: 0x40
}

// 
// Start address: 0x2cace0
int str_fadeout()
{
	int rtv;
	// Line 337, Address: 0x2cace0, Func Offset: 0
	// Line 338, Address: 0x2cacf4, Func Offset: 0x14
	// Line 339, Address: 0x2cad04, Func Offset: 0x24
	// Line 340, Address: 0x2cad08, Func Offset: 0x28
	// Line 339, Address: 0x2cad0c, Func Offset: 0x2c
	// Line 343, Address: 0x2cad10, Func Offset: 0x30
	// Func End, Address: 0x2cad18, Func Offset: 0x38
}

// 
// Start address: 0x2cad20
int miscGameOver()
{
	int rtv;
	unsigned int wait_limit;
	int img_fade;
	int str_fade;
	unsigned char draw_flag;
	unsigned int wait_timer;
	unsigned char is_game_clear;
	// Line 346, Address: 0x2cad20, Func Offset: 0
	// Line 354, Address: 0x2cad2c, Func Offset: 0xc
	// Line 355, Address: 0x2cad34, Func Offset: 0x14
	// Line 358, Address: 0x2cad60, Func Offset: 0x40
	// Line 357, Address: 0x2cad64, Func Offset: 0x44
	// Line 358, Address: 0x2cad68, Func Offset: 0x48
	// Line 359, Address: 0x2cad74, Func Offset: 0x54
	// Line 360, Address: 0x2cad7c, Func Offset: 0x5c
	// Line 361, Address: 0x2cad80, Func Offset: 0x60
	// Line 365, Address: 0x2cad88, Func Offset: 0x68
	// Line 366, Address: 0x2cad9c, Func Offset: 0x7c
	// Line 368, Address: 0x2cada4, Func Offset: 0x84
	// Line 369, Address: 0x2cadc4, Func Offset: 0xa4
	// Line 370, Address: 0x2cadcc, Func Offset: 0xac
	// Line 372, Address: 0x2cadd4, Func Offset: 0xb4
	// Line 374, Address: 0x2caddc, Func Offset: 0xbc
	// Line 376, Address: 0x2cade0, Func Offset: 0xc0
	// Line 377, Address: 0x2cade8, Func Offset: 0xc8
	// Line 378, Address: 0x2cadf0, Func Offset: 0xd0
	// Line 379, Address: 0x2cae00, Func Offset: 0xe0
	// Line 381, Address: 0x2cae08, Func Offset: 0xe8
	// Line 388, Address: 0x2cae10, Func Offset: 0xf0
	// Line 391, Address: 0x2caef0, Func Offset: 0x1d0
	// Line 393, Address: 0x2caf04, Func Offset: 0x1e4
	// Line 394, Address: 0x2caf28, Func Offset: 0x208
	// Line 395, Address: 0x2caf2c, Func Offset: 0x20c
	// Line 396, Address: 0x2caf3c, Func Offset: 0x21c
	// Line 398, Address: 0x2caf44, Func Offset: 0x224
	// Line 400, Address: 0x2caf4c, Func Offset: 0x22c
	// Line 402, Address: 0x2caf50, Func Offset: 0x230
	// Line 403, Address: 0x2caf58, Func Offset: 0x238
	// Line 404, Address: 0x2caf60, Func Offset: 0x240
	// Line 405, Address: 0x2caf70, Func Offset: 0x250
	// Line 407, Address: 0x2caf78, Func Offset: 0x258
	// Line 410, Address: 0x2caf80, Func Offset: 0x260
	// Line 412, Address: 0x2caf84, Func Offset: 0x264
	// Line 413, Address: 0x2caf88, Func Offset: 0x268
	// Line 415, Address: 0x2caf90, Func Offset: 0x270
	// Line 416, Address: 0x2cafa0, Func Offset: 0x280
	// Line 426, Address: 0x2cafa8, Func Offset: 0x288
	// Line 427, Address: 0x2cafac, Func Offset: 0x28c
	// Func End, Address: 0x2cafbc, Func Offset: 0x29c
}

