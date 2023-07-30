typedef struct _anon0;
typedef struct EnemyTexMade;
typedef enum EnemyTexMadePage : unsigned char;
typedef struct EnemyTexMadeWork;


typedef unsigned long type_0[18];
typedef EnemyTexMade type_1[1];
typedef unsigned long type_2[16];

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

struct EnemyTexMade
{
	int bp;
	int w;
	int h;
	int psm;
	int size;
	int tex_manage_id;
};

enum EnemyTexMadePage : unsigned char
{
	EN_TEX_MADE_PAGE_EARTHWORM,
	EN_TEX_MADE_PAGE_MAX
};

struct EnemyTexMadeWork
{
	EnemyTexMade tmade[1];
	int base_x;
	int base_y;
};

unsigned long frame_set_dma_data[16];
unsigned long tex_trans_dma_data[18];
EnemyTexMadeWork enemy_tex_made_work;

void EnemyTexMadeConstruct(EnemyTexMadePage page, int w, int h, int psm);
void EnemyTexMadeDestruct(EnemyTexMadePage page);
void EnemyTexMadePrepare(EnemyTexMadePage page);
void EnemyTexMadeFinish(EnemyTexMadePage page);
unsigned long EnemyTexMadeTEX0(EnemyTexMadePage page);
int EnemyTexMadeGetBaseX();
int EnemyTexMadeGetBaseY();

// 
// Start address: 0x1fde30
void EnemyTexMadeConstruct(EnemyTexMadePage page, int w, int h, int psm)
{
	EnemyTexMade* ptm;
	int size;
	// Line 107, Address: 0x1fde30, Func Offset: 0
	// Line 108, Address: 0x1fde48, Func Offset: 0x18
	// Line 109, Address: 0x1fde64, Func Offset: 0x34
	// Line 110, Address: 0x1fde68, Func Offset: 0x38
	// Line 111, Address: 0x1fde7c, Func Offset: 0x4c
	// Line 112, Address: 0x1fde84, Func Offset: 0x54
	// Line 113, Address: 0x1fde88, Func Offset: 0x58
	// Line 114, Address: 0x1fdeac, Func Offset: 0x7c
	// Line 115, Address: 0x1fdeb4, Func Offset: 0x84
	// Line 117, Address: 0x1fdeb8, Func Offset: 0x88
	// Line 118, Address: 0x1fdebc, Func Offset: 0x8c
	// Line 119, Address: 0x1fdec0, Func Offset: 0x90
	// Line 120, Address: 0x1fdec4, Func Offset: 0x94
	// Line 121, Address: 0x1fdec8, Func Offset: 0x98
	// Line 122, Address: 0x1fdecc, Func Offset: 0x9c
	// Line 124, Address: 0x1fded0, Func Offset: 0xa0
	// Func End, Address: 0x1fded8, Func Offset: 0xa8
}

// 
// Start address: 0x1fdee0
void EnemyTexMadeDestruct(EnemyTexMadePage page)
{
	// Line 131, Address: 0x1fdee0, Func Offset: 0
	// Func End, Address: 0x1fdf04, Func Offset: 0x24
}

// 
// Start address: 0x1fdf10
void EnemyTexMadePrepare(EnemyTexMadePage page)
{
	EnemyTexMade* ptm;
	unsigned long* pul;
	// Line 141, Address: 0x1fdf10, Func Offset: 0
	// Line 138, Address: 0x1fdf14, Func Offset: 0x4
	// Line 141, Address: 0x1fdf18, Func Offset: 0x8
	// Line 138, Address: 0x1fdf1c, Func Offset: 0xc
	// Line 141, Address: 0x1fdf20, Func Offset: 0x10
	// Line 138, Address: 0x1fdf28, Func Offset: 0x18
	// Line 141, Address: 0x1fdf2c, Func Offset: 0x1c
	// Line 142, Address: 0x1fdf38, Func Offset: 0x28
	// Line 144, Address: 0x1fdf44, Func Offset: 0x34
	// Line 143, Address: 0x1fdf48, Func Offset: 0x38
	// Line 144, Address: 0x1fdf60, Func Offset: 0x50
	// Line 146, Address: 0x1fdfa0, Func Offset: 0x90
	// Line 144, Address: 0x1fdfa4, Func Offset: 0x94
	// Line 145, Address: 0x1fdfb0, Func Offset: 0xa0
	// Line 146, Address: 0x1fdfdc, Func Offset: 0xcc
	// Line 147, Address: 0x1fdfe4, Func Offset: 0xd4
	// Line 148, Address: 0x1fdff4, Func Offset: 0xe4
	// Line 149, Address: 0x1fe01c, Func Offset: 0x10c
	// Line 150, Address: 0x1fe048, Func Offset: 0x138
	// Func End, Address: 0x1fe058, Func Offset: 0x148
}

// 
// Start address: 0x1fe060
void EnemyTexMadeFinish(EnemyTexMadePage page)
{
	EnemyTexMade* ptm;
	unsigned long* pul;
	// Line 158, Address: 0x1fe060, Func Offset: 0
	// Line 161, Address: 0x1fe064, Func Offset: 0x4
	// Line 158, Address: 0x1fe068, Func Offset: 0x8
	// Line 161, Address: 0x1fe06c, Func Offset: 0xc
	// Line 158, Address: 0x1fe074, Func Offset: 0x14
	// Line 161, Address: 0x1fe078, Func Offset: 0x18
	// Line 158, Address: 0x1fe07c, Func Offset: 0x1c
	// Line 161, Address: 0x1fe080, Func Offset: 0x20
	// Line 158, Address: 0x1fe088, Func Offset: 0x28
	// Line 161, Address: 0x1fe08c, Func Offset: 0x2c
	// Line 162, Address: 0x1fe090, Func Offset: 0x30
	// Line 165, Address: 0x1fe0a8, Func Offset: 0x48
	// Line 166, Address: 0x1fe0c0, Func Offset: 0x60
	// Line 169, Address: 0x1fe108, Func Offset: 0xa8
	// Line 170, Address: 0x1fe118, Func Offset: 0xb8
	// Line 171, Address: 0x1fe120, Func Offset: 0xc0
	// Line 173, Address: 0x1fe140, Func Offset: 0xe0
	// Line 171, Address: 0x1fe144, Func Offset: 0xe4
	// Line 173, Address: 0x1fe154, Func Offset: 0xf4
	// Line 174, Address: 0x1fe15c, Func Offset: 0xfc
	// Line 175, Address: 0x1fe16c, Func Offset: 0x10c
	// Line 176, Address: 0x1fe174, Func Offset: 0x114
	// Line 177, Address: 0x1fe17c, Func Offset: 0x11c
	// Func End, Address: 0x1fe194, Func Offset: 0x134
}

// 
// Start address: 0x1fe1a0
unsigned long EnemyTexMadeTEX0(EnemyTexMadePage page)
{
	_anon0* tex;
	// Line 188, Address: 0x1fe1a0, Func Offset: 0
	// Line 184, Address: 0x1fe1ac, Func Offset: 0xc
	// Line 188, Address: 0x1fe1b0, Func Offset: 0x10
	// Line 184, Address: 0x1fe1bc, Func Offset: 0x1c
	// Line 188, Address: 0x1fe1c0, Func Offset: 0x20
	// Line 189, Address: 0x1fe1cc, Func Offset: 0x2c
	// Line 191, Address: 0x1fe1ec, Func Offset: 0x4c
	// Func End, Address: 0x1fe1f8, Func Offset: 0x58
}

// 
// Start address: 0x1fe200
int EnemyTexMadeGetBaseX()
{
	// Line 199, Address: 0x1fe200, Func Offset: 0
	// Line 200, Address: 0x1fe204, Func Offset: 0x4
	// Func End, Address: 0x1fe20c, Func Offset: 0xc
}

// 
// Start address: 0x1fe210
int EnemyTexMadeGetBaseY()
{
	// Line 208, Address: 0x1fe210, Func Offset: 0
	// Line 209, Address: 0x1fe214, Func Offset: 0x4
	// Func End, Address: 0x1fe21c, Func Offset: 0xc
}

