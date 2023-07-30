typedef struct _anon0;
typedef enum _enum : unsigned char;
typedef struct _anon1;
typedef struct _sfMenuObjRect;
typedef struct _sfMenuObj;
typedef struct _anon2;
typedef struct _anon3;


typedef char type[16];

struct _anon0
{
	_anon3 menu;
	char result_stack[16];
	unsigned char max_figure;
	unsigned char cur_figure;
	unsigned char number_disp_ok;
};

enum _enum : unsigned char
{
	SF_MENU_LINEAR,
	SF_MENU_ATARI,
	SF_MENU_CURSOR_POS
};

struct _anon1
{
	short x;
	short y;
	short w;
	short h;
};

struct _sfMenuObjRect
{
	int x;
	int y;
	int w;
	int h;
	_sfMenuObjRect* next;
	_sfMenuObjRect* prev;
};

struct _sfMenuObj
{
	_sfMenuObjRect* atari;
	short id;
	unsigned short flag;
	_sfMenuObj* next;
	_sfMenuObj* prev;
};

struct _anon2
{
	int dir;
	unsigned short flag;
	unsigned short disp_num;
};

struct _anon3
{
	_sfMenuObj* cur;
	_sfMenuObj* pre;
	_sfMenuObj* top;
	_enum type;
	unsigned short option;
	unsigned short num;
	unsigned short timer;
	unsigned char step;
	_anon2 scrl;
	_sfMenuObjRect* atari_top;
	float cursor_x;
	float cursor_y;
};


void result_clear(char* buf);
int ev_panel_init(_anon0* pnl, _anon1* button, int button_num, int max_figure);
int ev_panel_exec(_anon0* pnl);
void ev_panel_get_result(_anon0* pnl, char* dst);
int ev_panel_get_id(_anon0* pnl);
int ev_panel_check_answer(_anon0* pnl, char* ans);
void ev_panel_set_cursor_pos(_anon0* pnl, float x, float y);
void ev_panel_get_cursor_pos(_anon0* pnl, float* x, float* y);
void ev_panel_end(_anon0* pnl);

// 
// Start address: 0x2e26b0
void result_clear(char* buf)
{
	int i;
	// Line 50, Address: 0x2e26b0, Func Offset: 0
	// Line 51, Address: 0x2e26b4, Func Offset: 0x4
	// Line 53, Address: 0x2e26f4, Func Offset: 0x44
	// Func End, Address: 0x2e26fc, Func Offset: 0x4c
}

// 
// Start address: 0x2e2700
int ev_panel_init(_anon0* pnl, _anon1* button, int button_num, int max_figure)
{
	int rtv;
	_sfMenuObjRect rect;
	_anon1* b;
	int i;
	// Line 64, Address: 0x2e2700, Func Offset: 0
	// Line 65, Address: 0x2e2704, Func Offset: 0x4
	// Line 64, Address: 0x2e2708, Func Offset: 0x8
	// Line 66, Address: 0x2e2734, Func Offset: 0x34
	// Line 68, Address: 0x2e273c, Func Offset: 0x3c
	// Line 71, Address: 0x2e2740, Func Offset: 0x40
	// Line 74, Address: 0x2e274c, Func Offset: 0x4c
	// Line 75, Address: 0x2e2754, Func Offset: 0x54
	// Line 77, Address: 0x2e2760, Func Offset: 0x60
	// Line 78, Address: 0x2e2778, Func Offset: 0x78
	// Line 83, Address: 0x2e277c, Func Offset: 0x7c
	// Line 78, Address: 0x2e2784, Func Offset: 0x84
	// Line 79, Address: 0x2e2788, Func Offset: 0x88
	// Line 80, Address: 0x2e2790, Func Offset: 0x90
	// Line 81, Address: 0x2e2798, Func Offset: 0x98
	// Line 83, Address: 0x2e279c, Func Offset: 0x9c
	// Line 85, Address: 0x2e27a4, Func Offset: 0xa4
	// Line 87, Address: 0x2e27b8, Func Offset: 0xb8
	// Line 89, Address: 0x2e27d0, Func Offset: 0xd0
	// Line 91, Address: 0x2e27e0, Func Offset: 0xe0
	// Line 92, Address: 0x2e27e8, Func Offset: 0xe8
	// Line 93, Address: 0x2e27ec, Func Offset: 0xec
	// Line 96, Address: 0x2e27f0, Func Offset: 0xf0
	// Func End, Address: 0x2e281c, Func Offset: 0x11c
}

// 
// Start address: 0x2e2820
int ev_panel_exec(_anon0* pnl)
{
	int rtv;
	float cursor_x;
	float cursor_y;
	float x;
	float y;
	short id;
	unsigned int pad;
	float x_max;
	float y_max;
	float add_x;
	float add_y;
	// Line 106, Address: 0x2e2820, Func Offset: 0
	// Line 107, Address: 0x2e2838, Func Offset: 0x18
	// Line 106, Address: 0x2e283c, Func Offset: 0x1c
	// Line 109, Address: 0x2e284c, Func Offset: 0x2c
	// Line 111, Address: 0x2e2854, Func Offset: 0x34
	// Line 115, Address: 0x2e2858, Func Offset: 0x38
	// Line 117, Address: 0x2e2868, Func Offset: 0x48
	// Line 118, Address: 0x2e287c, Func Offset: 0x5c
	// Line 120, Address: 0x2e288c, Func Offset: 0x6c
	// Line 121, Address: 0x2e2898, Func Offset: 0x78
	// Line 123, Address: 0x2e28ac, Func Offset: 0x8c
	// Line 127, Address: 0x2e28c0, Func Offset: 0xa0
	// Line 128, Address: 0x2e28c8, Func Offset: 0xa8
	// Line 129, Address: 0x2e28dc, Func Offset: 0xbc
	// Line 131, Address: 0x2e28e4, Func Offset: 0xc4
	// Line 133, Address: 0x2e28f0, Func Offset: 0xd0
	// Line 134, Address: 0x2e290c, Func Offset: 0xec
	// Line 136, Address: 0x2e2928, Func Offset: 0x108
	// Line 137, Address: 0x2e2934, Func Offset: 0x114
	// Line 138, Address: 0x2e2940, Func Offset: 0x120
	// Line 139, Address: 0x2e2944, Func Offset: 0x124
	// Line 140, Address: 0x2e2950, Func Offset: 0x130
	// Line 141, Address: 0x2e295c, Func Offset: 0x13c
	// Line 144, Address: 0x2e2960, Func Offset: 0x140
	// Line 145, Address: 0x2e296c, Func Offset: 0x14c
	// Line 146, Address: 0x2e2970, Func Offset: 0x150
	// Line 147, Address: 0x2e2978, Func Offset: 0x158
	// Line 148, Address: 0x2e2984, Func Offset: 0x164
	// Line 150, Address: 0x2e2988, Func Offset: 0x168
	// Line 152, Address: 0x2e2990, Func Offset: 0x170
	// Line 153, Address: 0x2e299c, Func Offset: 0x17c
	// Line 155, Address: 0x2e29a4, Func Offset: 0x184
	// Line 156, Address: 0x2e29f0, Func Offset: 0x1d0
	// Line 157, Address: 0x2e2a00, Func Offset: 0x1e0
	// Line 159, Address: 0x2e2a04, Func Offset: 0x1e4
	// Line 160, Address: 0x2e2a08, Func Offset: 0x1e8
	// Line 162, Address: 0x2e2a0c, Func Offset: 0x1ec
	// Line 164, Address: 0x2e2a10, Func Offset: 0x1f0
	// Line 165, Address: 0x2e2a20, Func Offset: 0x200
	// Line 168, Address: 0x2e2a24, Func Offset: 0x204
	// Line 166, Address: 0x2e2a28, Func Offset: 0x208
	// Line 168, Address: 0x2e2a2c, Func Offset: 0x20c
	// Line 165, Address: 0x2e2a30, Func Offset: 0x210
	// Line 166, Address: 0x2e2a34, Func Offset: 0x214
	// Line 168, Address: 0x2e2a38, Func Offset: 0x218
	// Line 165, Address: 0x2e2a40, Func Offset: 0x220
	// Line 168, Address: 0x2e2a44, Func Offset: 0x224
	// Line 169, Address: 0x2e2a50, Func Offset: 0x230
	// Line 170, Address: 0x2e2a68, Func Offset: 0x248
	// Line 171, Address: 0x2e2a88, Func Offset: 0x268
	// Line 173, Address: 0x2e2aa0, Func Offset: 0x280
	// Line 177, Address: 0x2e2ab0, Func Offset: 0x290
	// Line 178, Address: 0x2e2ab4, Func Offset: 0x294
	// Func End, Address: 0x2e2ae0, Func Offset: 0x2c0
}

// 
// Start address: 0x2e2ae0
void ev_panel_get_result(_anon0* pnl, char* dst)
{
	int i;
	// Line 189, Address: 0x2e2ae0, Func Offset: 0
	// Line 192, Address: 0x2e2ae8, Func Offset: 0x8
	// Line 197, Address: 0x2e2af8, Func Offset: 0x18
	// Line 192, Address: 0x2e2afc, Func Offset: 0x1c
	// Line 193, Address: 0x2e2b00, Func Offset: 0x20
	// Line 194, Address: 0x2e2b10, Func Offset: 0x30
	// Line 195, Address: 0x2e2b14, Func Offset: 0x34
	// Line 197, Address: 0x2e2b20, Func Offset: 0x40
	// Line 198, Address: 0x2e2b24, Func Offset: 0x44
	// Line 200, Address: 0x2e2b28, Func Offset: 0x48
	// Line 201, Address: 0x2e2b3c, Func Offset: 0x5c
	// Line 202, Address: 0x2e2b40, Func Offset: 0x60
	// Func End, Address: 0x2e2b48, Func Offset: 0x68
}

// 
// Start address: 0x2e2b50
int ev_panel_get_id(_anon0* pnl)
{
	int rtv;
	// Line 210, Address: 0x2e2b50, Func Offset: 0
	// Line 211, Address: 0x2e2b54, Func Offset: 0x4
	// Line 213, Address: 0x2e2b58, Func Offset: 0x8
	// Line 214, Address: 0x2e2b60, Func Offset: 0x10
	// Line 218, Address: 0x2e2b70, Func Offset: 0x20
	// Func End, Address: 0x2e2b7c, Func Offset: 0x2c
}

// 
// Start address: 0x2e2b80
int ev_panel_check_answer(_anon0* pnl, char* ans)
{
	int i;
	// Line 228, Address: 0x2e2b80, Func Offset: 0
	// Line 231, Address: 0x2e2b88, Func Offset: 0x8
	// Line 232, Address: 0x2e2b98, Func Offset: 0x18
	// Line 233, Address: 0x2e2bb4, Func Offset: 0x34
	// Line 235, Address: 0x2e2bbc, Func Offset: 0x3c
	// Line 237, Address: 0x2e2bd0, Func Offset: 0x50
	// Line 238, Address: 0x2e2bd8, Func Offset: 0x58
	// Func End, Address: 0x2e2be0, Func Offset: 0x60
}

// 
// Start address: 0x2e2be0
void ev_panel_set_cursor_pos(_anon0* pnl, float x, float y)
{
	// Line 247, Address: 0x2e2be0, Func Offset: 0
	// Line 248, Address: 0x2e2be4, Func Offset: 0x4
	// Line 249, Address: 0x2e2bec, Func Offset: 0xc
	// Line 250, Address: 0x2e2bf4, Func Offset: 0x14
	// Line 251, Address: 0x2e2bf8, Func Offset: 0x18
	// Func End, Address: 0x2e2c04, Func Offset: 0x24
}

// 
// Start address: 0x2e2c10
void ev_panel_get_cursor_pos(_anon0* pnl, float* x, float* y)
{
	// Line 260, Address: 0x2e2c10, Func Offset: 0
	// Line 261, Address: 0x2e2c14, Func Offset: 0x4
	// Line 262, Address: 0x2e2c1c, Func Offset: 0xc
	// Line 263, Address: 0x2e2c24, Func Offset: 0x14
	// Line 264, Address: 0x2e2c28, Func Offset: 0x18
	// Func End, Address: 0x2e2c34, Func Offset: 0x24
}

// 
// Start address: 0x2e2c40
void ev_panel_end(_anon0* pnl)
{
	// Line 272, Address: 0x2e2c40, Func Offset: 0
	// Line 273, Address: 0x2e2c44, Func Offset: 0x4
	// Line 274, Address: 0x2e2c4c, Func Offset: 0xc
	// Line 275, Address: 0x2e2c54, Func Offset: 0x14
	// Line 276, Address: 0x2e2c58, Func Offset: 0x18
	// Func End, Address: 0x2e2c64, Func Offset: 0x24
}

