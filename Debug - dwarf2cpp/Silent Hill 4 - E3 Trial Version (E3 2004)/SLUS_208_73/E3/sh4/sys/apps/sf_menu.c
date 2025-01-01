typedef struct _anon0;
typedef struct _sfMenuObj;
typedef struct _sfMenuObjRect;
typedef enum _enum_0 : unsigned char;
typedef enum _enum_1 : unsigned char;
typedef struct _anon1;

typedef int(*type_1)(_sfMenuObjRect*, _sfMenuObjRect*);
typedef short(*type_2)(_anon0*);
typedef void(*type_4)(_anon0*, _enum_1);

typedef float type_0[4];
typedef short(*type_3)(_anon0*)[3];
typedef void(*type_5)(_anon0*, _enum_1)[3];
typedef int(*type_6)(_sfMenuObjRect*, _sfMenuObjRect*)[2];

struct _anon0
{
	_sfMenuObj* cur;
	_sfMenuObj* pre;
	_sfMenuObj* top;
	_enum_0 type;
	unsigned short option;
	unsigned short num;
	unsigned short timer;
	unsigned char step;
	_anon1 scrl;
	_sfMenuObjRect* atari_top;
	float cursor_x;
	float cursor_y;
};

struct _sfMenuObj
{
	_sfMenuObjRect* atari;
	short id;
	unsigned short flag;
	_sfMenuObj* next;
	_sfMenuObj* prev;
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

enum _enum_0 : unsigned char
{
	SF_MENU_LINEAR,
	SF_MENU_ATARI,
	SF_MENU_CURSOR_POS
};

enum _enum_1 : unsigned char
{
	SF_MENU_UP,
	SF_MENU_DOWN,
	SF_MENU_LEFT,
	SF_MENU_RIGHT,
	SF_MENU_PAGEUP,
	SF_MENU_PAGEDOWN,
	SF_MENU_INVALID_CMD
};

struct _anon1
{
	int dir;
	unsigned short flag;
	unsigned short disp_num;
};


_sfMenuObj* sfMenuObjGetNext(_sfMenuObj* obj);
_sfMenuObj* sfMenuObjGetPrev(_sfMenuObj* obj);
short sfMenuObjGetId(_sfMenuObj* obj);
_sfMenuObj* sfMenuSearch(_anon0* menu, short id);
void sfMenuClear(_anon0* menu);
void sfMenuConstruct(_anon0* menu);
void sfMenuDestruct(_anon0* menu);
void sfMenuSetXY(_anon0* menu, short id, int x, int y);
_sfMenuObjRect sfMenuGetRect(_anon0* menu, short id);
void sfMenuSwapPos(_anon0* menu, _sfMenuObj* new_top);
int sfMenuScrollUpdate(_anon0* menu, _enum_1 cmd);
short get_cur_sel_id(_anon0* menu);
short get_pointing_sel_id(_anon0* menu);
short sfMenuGetId(_anon0* menu);
void sfMenuSetCurSelId(_anon0* menu, short id);
void sfMenuPageDown(_anon0* menu);
void sfMenuPageUp(_anon0* menu);
void sfMenuSetType(_anon0* menu, _enum_0 type);
void sfMenuOptionOff(_anon0* menu, unsigned int opt);
_sfMenuObj* sfMenuGetTop(_anon0* menu);
int sfMenuAdd(_anon0* menu);
void sfMenuSetDispNum(_anon0* menu, unsigned short num);
void sfMenuMoveCursor_Linear(_anon0* menu, _enum_1 cmd);
int is_above(_sfMenuObjRect* org, _sfMenuObjRect* target);
int is_under(_sfMenuObjRect* org, _sfMenuObjRect* target);
int is_left(_sfMenuObjRect* org, _sfMenuObjRect* target);
int is_right(_sfMenuObjRect* org, _sfMenuObjRect* target);
void sfMenuMoveCursor_Atari(_anon0* menu, _enum_1 cmd);
int cmp_up(_sfMenuObjRect* org, _sfMenuObjRect* target);
int cmp_down(_sfMenuObjRect* org, _sfMenuObjRect* target);
int cmp_left(_sfMenuObjRect* org, _sfMenuObjRect* target);
int cmp_right(_sfMenuObjRect* org, _sfMenuObjRect* target);
void sfMenuMoveNone();
int sfMenuHandle(_anon0* menu, _enum_1 cmd);
void sfMenuSetCursorXY(_anon0* menu, float x, float y);
void sfMenuGetCursorXY(_anon0* menu, float* x, float* y);

// 
// Start address: 0x1dec20
_sfMenuObj* sfMenuObjGetNext(_sfMenuObj* obj)
{
	// Line 90, Address: 0x1dec20, Func Offset: 0
	// Line 93, Address: 0x1dec2c, Func Offset: 0xc
	// Func End, Address: 0x1dec34, Func Offset: 0x14
}

// 
// Start address: 0x1dec40
_sfMenuObj* sfMenuObjGetPrev(_sfMenuObj* obj)
{
	// Line 103, Address: 0x1dec40, Func Offset: 0
	// Line 106, Address: 0x1dec4c, Func Offset: 0xc
	// Func End, Address: 0x1dec54, Func Offset: 0x14
}

// 
// Start address: 0x1dec60
short sfMenuObjGetId(_sfMenuObj* obj)
{
	short rtv;
	// Line 130, Address: 0x1dec60, Func Offset: 0
	// Line 131, Address: 0x1dec68, Func Offset: 0x8
	// Line 132, Address: 0x1dec6c, Func Offset: 0xc
	// Line 134, Address: 0x1dec70, Func Offset: 0x10
	// Func End, Address: 0x1dec78, Func Offset: 0x18
}

// 
// Start address: 0x1dec80
_sfMenuObj* sfMenuSearch(_anon0* menu, short id)
{
	_sfMenuObj* rtv;
	_sfMenuObj* obj;
	// Line 161, Address: 0x1dec80, Func Offset: 0
	// Line 162, Address: 0x1dec8c, Func Offset: 0xc
	// Line 165, Address: 0x1dec9c, Func Offset: 0x1c
	// Line 166, Address: 0x1deca0, Func Offset: 0x20
	// Line 168, Address: 0x1decac, Func Offset: 0x2c
	// Line 169, Address: 0x1decb4, Func Offset: 0x34
	// Line 170, Address: 0x1decb8, Func Offset: 0x38
	// Line 171, Address: 0x1decbc, Func Offset: 0x3c
	// Line 176, Address: 0x1decc8, Func Offset: 0x48
	// Func End, Address: 0x1decd0, Func Offset: 0x50
}

// 
// Start address: 0x1decd0
void sfMenuClear(_anon0* menu)
{
	// Line 182, Address: 0x1decd0, Func Offset: 0
	// Line 183, Address: 0x1decd4, Func Offset: 0x4
	// Line 182, Address: 0x1decd8, Func Offset: 0x8
	// Line 183, Address: 0x1decdc, Func Offset: 0xc
	// Line 182, Address: 0x1dece0, Func Offset: 0x10
	// Line 183, Address: 0x1dece4, Func Offset: 0x14
	// Line 184, Address: 0x1decec, Func Offset: 0x1c
	// Line 185, Address: 0x1decf0, Func Offset: 0x20
	// Func End, Address: 0x1ded00, Func Offset: 0x30
}

// 
// Start address: 0x1ded00
void sfMenuConstruct(_anon0* menu)
{
	// Line 192, Address: 0x1ded00, Func Offset: 0
	// Line 193, Address: 0x1ded10, Func Offset: 0x10
	// Line 194, Address: 0x1ded18, Func Offset: 0x18
	// Line 195, Address: 0x1ded20, Func Offset: 0x20
	// Line 196, Address: 0x1ded2c, Func Offset: 0x2c
	// Line 197, Address: 0x1ded30, Func Offset: 0x30
	// Line 198, Address: 0x1ded34, Func Offset: 0x34
	// Line 199, Address: 0x1ded38, Func Offset: 0x38
	// Func End, Address: 0x1ded48, Func Offset: 0x48
}

// 
// Start address: 0x1ded50
void sfMenuDestruct(_anon0* menu)
{
	_sfMenuObj* obj;
	int i;
	_sfMenuObj* tmp;
	// Line 207, Address: 0x1ded50, Func Offset: 0
	// Line 208, Address: 0x1ded68, Func Offset: 0x18
	// Line 212, Address: 0x1ded70, Func Offset: 0x20
	// Line 209, Address: 0x1ded74, Func Offset: 0x24
	// Line 212, Address: 0x1ded78, Func Offset: 0x28
	// Line 213, Address: 0x1ded88, Func Offset: 0x38
	// Line 214, Address: 0x1ded8c, Func Offset: 0x3c
	// Line 215, Address: 0x1ded94, Func Offset: 0x44
	// Line 216, Address: 0x1ded9c, Func Offset: 0x4c
	// Line 217, Address: 0x1deda0, Func Offset: 0x50
	// Line 218, Address: 0x1deda8, Func Offset: 0x58
	// Line 221, Address: 0x1dedb0, Func Offset: 0x60
	// Line 222, Address: 0x1dedc8, Func Offset: 0x78
	// Line 224, Address: 0x1dedd0, Func Offset: 0x80
	// Func End, Address: 0x1dedec, Func Offset: 0x9c
}

// 
// Start address: 0x1dedf0
void sfMenuSetXY(_anon0* menu, short id, int x, int y)
{
	_sfMenuObj* obj;
	// Line 237, Address: 0x1dedf0, Func Offset: 0
	// Line 238, Address: 0x1dedf8, Func Offset: 0x8
	// Line 239, Address: 0x1dee00, Func Offset: 0x10
	// Line 241, Address: 0x1dee08, Func Offset: 0x18
	// Line 242, Address: 0x1dee10, Func Offset: 0x20
	// Line 243, Address: 0x1dee18, Func Offset: 0x28
	// Line 246, Address: 0x1dee20, Func Offset: 0x30
	// Func End, Address: 0x1dee2c, Func Offset: 0x3c
}

// 
// Start address: 0x1dee30
_sfMenuObjRect sfMenuGetRect(_anon0* menu, short id)
{
	_sfMenuObjRect rtv;
	_sfMenuObj* obj;
	// Line 290, Address: 0x1dee30, Func Offset: 0
	// Line 291, Address: 0x1dee38, Func Offset: 0x8
	// Line 290, Address: 0x1dee3c, Func Offset: 0xc
	// Line 291, Address: 0x1dee40, Func Offset: 0x10
	// Line 292, Address: 0x1dee64, Func Offset: 0x34
	// Line 293, Address: 0x1dee6c, Func Offset: 0x3c
	// Line 294, Address: 0x1dee74, Func Offset: 0x44
	// Line 295, Address: 0x1dee7c, Func Offset: 0x4c
	// Line 297, Address: 0x1deeb4, Func Offset: 0x84
	// Line 298, Address: 0x1deeb8, Func Offset: 0x88
	// Line 299, Address: 0x1deeec, Func Offset: 0xbc
	// Func End, Address: 0x1deef8, Func Offset: 0xc8
}

// 
// Start address: 0x1def00
void sfMenuSwapPos(_anon0* menu, _sfMenuObj* new_top)
{
	int i;
	_sfMenuObj* obj;
	_sfMenuObjRect* atop;
	// Line 368, Address: 0x1def00, Func Offset: 0
	// Line 365, Address: 0x1def04, Func Offset: 0x4
	// Line 368, Address: 0x1def08, Func Offset: 0x8
	// Line 369, Address: 0x1def18, Func Offset: 0x18
	// Line 372, Address: 0x1def1c, Func Offset: 0x1c
	// Line 371, Address: 0x1def24, Func Offset: 0x24
	// Line 372, Address: 0x1def28, Func Offset: 0x28
	// Line 373, Address: 0x1def38, Func Offset: 0x38
	// Func End, Address: 0x1def40, Func Offset: 0x40
}

// 
// Start address: 0x1def40
int sfMenuScrollUpdate(_anon0* menu, _enum_1 cmd)
{
	int cnt;
	_sfMenuObj* top;
	_sfMenuObj* cur;
	int rtv;
	// Line 377, Address: 0x1def40, Func Offset: 0
	// Line 378, Address: 0x1def44, Func Offset: 0x4
	// Line 377, Address: 0x1def48, Func Offset: 0x8
	// Line 379, Address: 0x1def4c, Func Offset: 0xc
	// Line 380, Address: 0x1def50, Func Offset: 0x10
	// Line 383, Address: 0x1def54, Func Offset: 0x14
	// Line 385, Address: 0x1def64, Func Offset: 0x24
	// Line 386, Address: 0x1def70, Func Offset: 0x30
	// Line 387, Address: 0x1def74, Func Offset: 0x34
	// Line 388, Address: 0x1def78, Func Offset: 0x38
	// Line 389, Address: 0x1def8c, Func Offset: 0x4c
	// Line 391, Address: 0x1def90, Func Offset: 0x50
	// Line 393, Address: 0x1def9c, Func Offset: 0x5c
	// Line 395, Address: 0x1defa0, Func Offset: 0x60
	// Line 397, Address: 0x1defb4, Func Offset: 0x74
	// Line 399, Address: 0x1defc8, Func Offset: 0x88
	// Line 401, Address: 0x1defd0, Func Offset: 0x90
	// Line 402, Address: 0x1defdc, Func Offset: 0x9c
	// Line 403, Address: 0x1defe4, Func Offset: 0xa4
	// Line 406, Address: 0x1deff0, Func Offset: 0xb0
	// Line 408, Address: 0x1deff4, Func Offset: 0xb4
	// Line 409, Address: 0x1df000, Func Offset: 0xc0
	// Line 412, Address: 0x1df00c, Func Offset: 0xcc
	// Line 415, Address: 0x1df010, Func Offset: 0xd0
	// Func End, Address: 0x1df01c, Func Offset: 0xdc
}

// 
// Start address: 0x1df020
short get_cur_sel_id(_anon0* menu)
{
	short rtv;
	// Line 420, Address: 0x1df020, Func Offset: 0
	// Line 422, Address: 0x1df024, Func Offset: 0x4
	// Line 423, Address: 0x1df02c, Func Offset: 0xc
	// Line 424, Address: 0x1df03c, Func Offset: 0x1c
	// Line 428, Address: 0x1df040, Func Offset: 0x20
	// Func End, Address: 0x1df048, Func Offset: 0x28
}

// 
// Start address: 0x1df050
short get_pointing_sel_id(_anon0* menu)
{
	_sfMenuObj* obj;
	int i;
	int csr_x;
	int csr_y;
	// Line 433, Address: 0x1df050, Func Offset: 0
	// Line 436, Address: 0x1df064, Func Offset: 0x14
	// Line 434, Address: 0x1df068, Func Offset: 0x18
	// Line 437, Address: 0x1df06c, Func Offset: 0x1c
	// Line 439, Address: 0x1df070, Func Offset: 0x20
	// Line 436, Address: 0x1df074, Func Offset: 0x24
	// Line 437, Address: 0x1df078, Func Offset: 0x28
	// Line 436, Address: 0x1df07c, Func Offset: 0x2c
	// Line 437, Address: 0x1df080, Func Offset: 0x30
	// Line 439, Address: 0x1df084, Func Offset: 0x34
	// Line 440, Address: 0x1df090, Func Offset: 0x40
	// Line 444, Address: 0x1df0dc, Func Offset: 0x8c
	// Line 445, Address: 0x1df0e4, Func Offset: 0x94
	// Line 446, Address: 0x1df0e8, Func Offset: 0x98
	// Line 447, Address: 0x1df0ec, Func Offset: 0x9c
	// Line 448, Address: 0x1df0fc, Func Offset: 0xac
	// Line 450, Address: 0x1df100, Func Offset: 0xb0
	// Line 451, Address: 0x1df108, Func Offset: 0xb8
	// Func End, Address: 0x1df110, Func Offset: 0xc0
}

// 
// Start address: 0x1df110
short sfMenuGetId(_anon0* menu)
{
	short(*get_id)(_anon0*)[3];
	// Line 467, Address: 0x1df110, Func Offset: 0
	// Func End, Address: 0x1df130, Func Offset: 0x20
}

// 
// Start address: 0x1df130
void sfMenuSetCurSelId(_anon0* menu, short id)
{
	_sfMenuObj* obj;
	int num;
	int start_id;
	_sfMenuObj* top;
	// Line 477, Address: 0x1df130, Func Offset: 0
	// Line 478, Address: 0x1df138, Func Offset: 0x8
	// Line 479, Address: 0x1df140, Func Offset: 0x10
	// Line 481, Address: 0x1df148, Func Offset: 0x18
	// Line 482, Address: 0x1df150, Func Offset: 0x20
	// Line 483, Address: 0x1df154, Func Offset: 0x24
	// Line 485, Address: 0x1df158, Func Offset: 0x28
	// Line 486, Address: 0x1df164, Func Offset: 0x34
	// Line 488, Address: 0x1df174, Func Offset: 0x44
	// Line 490, Address: 0x1df17c, Func Offset: 0x4c
	// Line 494, Address: 0x1df188, Func Offset: 0x58
	// Line 493, Address: 0x1df18c, Func Offset: 0x5c
	// Line 494, Address: 0x1df198, Func Offset: 0x68
	// Line 493, Address: 0x1df19c, Func Offset: 0x6c
	// Line 497, Address: 0x1df1a0, Func Offset: 0x70
	// Line 500, Address: 0x1df1ac, Func Offset: 0x7c
	// Line 501, Address: 0x1df1b4, Func Offset: 0x84
	// Line 502, Address: 0x1df1b8, Func Offset: 0x88
	// Line 503, Address: 0x1df1c4, Func Offset: 0x94
	// Line 504, Address: 0x1df1cc, Func Offset: 0x9c
	// Line 509, Address: 0x1df1d0, Func Offset: 0xa0
	// Func End, Address: 0x1df1dc, Func Offset: 0xac
}

// 
// Start address: 0x1df1e0
void sfMenuPageDown(_anon0* menu)
{
	short new_cur_id;
	// Line 514, Address: 0x1df1e0, Func Offset: 0
	// Line 515, Address: 0x1df1e8, Func Offset: 0x8
	// Line 516, Address: 0x1df1f4, Func Offset: 0x14
	// Line 518, Address: 0x1df214, Func Offset: 0x34
	// Line 519, Address: 0x1df220, Func Offset: 0x40
	// Line 520, Address: 0x1df230, Func Offset: 0x50
	// Line 521, Address: 0x1df248, Func Offset: 0x68
	// Line 523, Address: 0x1df250, Func Offset: 0x70
	// Line 525, Address: 0x1df25c, Func Offset: 0x7c
	// Line 527, Address: 0x1df260, Func Offset: 0x80
	// Line 529, Address: 0x1df268, Func Offset: 0x88
	// Func End, Address: 0x1df274, Func Offset: 0x94
}

// 
// Start address: 0x1df280
void sfMenuPageUp(_anon0* menu)
{
	short new_cur_id;
	// Line 534, Address: 0x1df280, Func Offset: 0
	// Line 535, Address: 0x1df288, Func Offset: 0x8
	// Line 536, Address: 0x1df294, Func Offset: 0x14
	// Line 538, Address: 0x1df2b0, Func Offset: 0x30
	// Line 539, Address: 0x1df2b8, Func Offset: 0x38
	// Line 540, Address: 0x1df2c8, Func Offset: 0x48
	// Line 541, Address: 0x1df2d4, Func Offset: 0x54
	// Line 543, Address: 0x1df2e0, Func Offset: 0x60
	// Line 545, Address: 0x1df2e4, Func Offset: 0x64
	// Line 547, Address: 0x1df2e8, Func Offset: 0x68
	// Line 549, Address: 0x1df2f0, Func Offset: 0x70
	// Func End, Address: 0x1df2fc, Func Offset: 0x7c
}

// 
// Start address: 0x1df300
void sfMenuSetType(_anon0* menu, _enum_0 type)
{
	// Line 559, Address: 0x1df300, Func Offset: 0
	// Line 560, Address: 0x1df308, Func Offset: 0x8
	// Line 561, Address: 0x1df30c, Func Offset: 0xc
	// Line 562, Address: 0x1df310, Func Offset: 0x10
	// Func End, Address: 0x1df318, Func Offset: 0x18
}

// 
// Start address: 0x1df320
void sfMenuOptionOff(_anon0* menu, unsigned int opt)
{
	// Line 581, Address: 0x1df320, Func Offset: 0
	// Line 582, Address: 0x1df330, Func Offset: 0x10
	// Func End, Address: 0x1df338, Func Offset: 0x18
}

// 
// Start address: 0x1df340
_sfMenuObj* sfMenuGetTop(_anon0* menu)
{
	// Line 619, Address: 0x1df340, Func Offset: 0
	// Line 622, Address: 0x1df34c, Func Offset: 0xc
	// Func End, Address: 0x1df354, Func Offset: 0x14
}

// 
// Start address: 0x1df360
int sfMenuAdd(_anon0* menu)
{
	_sfMenuObjRect rect;
	int id;
	_sfMenuObj* obj;
	_sfMenuObjRect* atari;
	_sfMenuObjRect* atop;
	// Line 647, Address: 0x1df360, Func Offset: 0
	// Line 648, Address: 0x1df37c, Func Offset: 0x1c
	// Line 647, Address: 0x1df380, Func Offset: 0x20
	// Line 649, Address: 0x1df3b0, Func Offset: 0x50
	// Line 650, Address: 0x1df3b8, Func Offset: 0x58
	// Line 651, Address: 0x1df3c4, Func Offset: 0x64
	// Line 653, Address: 0x1df3cc, Func Offset: 0x6c
	// Line 656, Address: 0x1df3dc, Func Offset: 0x7c
	// Line 654, Address: 0x1df3e0, Func Offset: 0x80
	// Line 656, Address: 0x1df3e4, Func Offset: 0x84
	// Line 654, Address: 0x1df3e8, Func Offset: 0x88
	// Line 656, Address: 0x1df3ec, Func Offset: 0x8c
	// Line 654, Address: 0x1df3f0, Func Offset: 0x90
	// Line 656, Address: 0x1df414, Func Offset: 0xb4
	// Line 657, Address: 0x1df41c, Func Offset: 0xbc
	// Line 658, Address: 0x1df424, Func Offset: 0xc4
	// Line 660, Address: 0x1df42c, Func Offset: 0xcc
	// Line 661, Address: 0x1df430, Func Offset: 0xd0
	// Line 662, Address: 0x1df434, Func Offset: 0xd4
	// Line 665, Address: 0x1df438, Func Offset: 0xd8
	// Line 666, Address: 0x1df43c, Func Offset: 0xdc
	// Line 667, Address: 0x1df440, Func Offset: 0xe0
	// Line 671, Address: 0x1df444, Func Offset: 0xe4
	// Line 673, Address: 0x1df448, Func Offset: 0xe8
	// Line 677, Address: 0x1df450, Func Offset: 0xf0
	// Line 679, Address: 0x1df454, Func Offset: 0xf4
	// Line 680, Address: 0x1df45c, Func Offset: 0xfc
	// Line 681, Address: 0x1df460, Func Offset: 0x100
	// Line 682, Address: 0x1df468, Func Offset: 0x108
	// Line 685, Address: 0x1df46c, Func Offset: 0x10c
	// Line 686, Address: 0x1df474, Func Offset: 0x114
	// Line 687, Address: 0x1df478, Func Offset: 0x118
	// Line 688, Address: 0x1df480, Func Offset: 0x120
	// Line 689, Address: 0x1df484, Func Offset: 0x124
	// Line 690, Address: 0x1df488, Func Offset: 0x128
	// Line 691, Address: 0x1df498, Func Offset: 0x138
	// Line 693, Address: 0x1df49c, Func Offset: 0x13c
	// Line 695, Address: 0x1df4b8, Func Offset: 0x158
	// Line 699, Address: 0x1df4c0, Func Offset: 0x160
	// Line 700, Address: 0x1df4c4, Func Offset: 0x164
	// Func End, Address: 0x1df4e0, Func Offset: 0x180
}

// 
// Start address: 0x1df4e0
void sfMenuSetDispNum(_anon0* menu, unsigned short num)
{
	// Line 747, Address: 0x1df4e0, Func Offset: 0
	// Line 748, Address: 0x1df4e8, Func Offset: 0x8
	// Line 749, Address: 0x1df4ec, Func Offset: 0xc
	// Line 750, Address: 0x1df500, Func Offset: 0x20
	// Line 752, Address: 0x1df504, Func Offset: 0x24
	// Line 753, Address: 0x1df508, Func Offset: 0x28
	// Func End, Address: 0x1df510, Func Offset: 0x30
}

// 
// Start address: 0x1df510
void sfMenuMoveCursor_Linear(_anon0* menu, _enum_1 cmd)
{
	// Line 790, Address: 0x1df510, Func Offset: 0
	// Line 787, Address: 0x1df514, Func Offset: 0x4
	// Line 790, Address: 0x1df518, Func Offset: 0x8
	// Line 794, Address: 0x1df540, Func Offset: 0x30
	// Line 796, Address: 0x1df564, Func Offset: 0x54
	// Line 797, Address: 0x1df568, Func Offset: 0x58
	// Line 798, Address: 0x1df570, Func Offset: 0x60
	// Line 803, Address: 0x1df578, Func Offset: 0x68
	// Line 806, Address: 0x1df598, Func Offset: 0x88
	// Line 807, Address: 0x1df5a0, Func Offset: 0x90
	// Line 810, Address: 0x1df5a8, Func Offset: 0x98
	// Line 811, Address: 0x1df5b0, Func Offset: 0xa0
	// Line 813, Address: 0x1df5b8, Func Offset: 0xa8
	// Line 816, Address: 0x1df5c0, Func Offset: 0xb0
	// Func End, Address: 0x1df5cc, Func Offset: 0xbc
}

// 
// Start address: 0x1df5d0
int is_above(_sfMenuObjRect* org, _sfMenuObjRect* target)
{
	float o_cx;
	float o_cy;
	float t_cx;
	float t_cy;
	float dir[4];
	float up[4];
	// Line 845, Address: 0x1df5d0, Func Offset: 0
	// Line 846, Address: 0x1df5dc, Func Offset: 0xc
	// Line 847, Address: 0x1df5f8, Func Offset: 0x28
	// Line 848, Address: 0x1df618, Func Offset: 0x48
	// Line 847, Address: 0x1df620, Func Offset: 0x50
	// Line 848, Address: 0x1df624, Func Offset: 0x54
	// Line 849, Address: 0x1df638, Func Offset: 0x68
	// Line 848, Address: 0x1df640, Func Offset: 0x70
	// Line 849, Address: 0x1df648, Func Offset: 0x78
	// Line 850, Address: 0x1df660, Func Offset: 0x90
	// Line 849, Address: 0x1df668, Func Offset: 0x98
	// Line 850, Address: 0x1df670, Func Offset: 0xa0
	// Line 851, Address: 0x1df688, Func Offset: 0xb8
	// Line 850, Address: 0x1df690, Func Offset: 0xc0
	// Line 851, Address: 0x1df698, Func Offset: 0xc8
	// Line 852, Address: 0x1df6c0, Func Offset: 0xf0
	// Line 854, Address: 0x1df6cc, Func Offset: 0xfc
	// Line 851, Address: 0x1df6d4, Func Offset: 0x104
	// Line 852, Address: 0x1df6e0, Func Offset: 0x110
	// Line 854, Address: 0x1df6e8, Func Offset: 0x118
	// Line 856, Address: 0x1df730, Func Offset: 0x160
	// Line 857, Address: 0x1df738, Func Offset: 0x168
	// Func End, Address: 0x1df748, Func Offset: 0x178
}

// 
// Start address: 0x1df750
int is_under(_sfMenuObjRect* org, _sfMenuObjRect* target)
{
	float o_cx;
	float o_cy;
	float t_cx;
	float t_cy;
	float dir[4];
	float down[4];
	// Line 861, Address: 0x1df750, Func Offset: 0
	// Line 862, Address: 0x1df75c, Func Offset: 0xc
	// Line 863, Address: 0x1df778, Func Offset: 0x28
	// Line 864, Address: 0x1df798, Func Offset: 0x48
	// Line 863, Address: 0x1df7a0, Func Offset: 0x50
	// Line 864, Address: 0x1df7a4, Func Offset: 0x54
	// Line 865, Address: 0x1df7b8, Func Offset: 0x68
	// Line 864, Address: 0x1df7c0, Func Offset: 0x70
	// Line 865, Address: 0x1df7c8, Func Offset: 0x78
	// Line 866, Address: 0x1df7e0, Func Offset: 0x90
	// Line 865, Address: 0x1df7e8, Func Offset: 0x98
	// Line 866, Address: 0x1df7f0, Func Offset: 0xa0
	// Line 867, Address: 0x1df808, Func Offset: 0xb8
	// Line 866, Address: 0x1df810, Func Offset: 0xc0
	// Line 867, Address: 0x1df818, Func Offset: 0xc8
	// Line 868, Address: 0x1df840, Func Offset: 0xf0
	// Line 870, Address: 0x1df84c, Func Offset: 0xfc
	// Line 867, Address: 0x1df854, Func Offset: 0x104
	// Line 868, Address: 0x1df860, Func Offset: 0x110
	// Line 870, Address: 0x1df868, Func Offset: 0x118
	// Line 872, Address: 0x1df8b0, Func Offset: 0x160
	// Line 873, Address: 0x1df8b8, Func Offset: 0x168
	// Func End, Address: 0x1df8c8, Func Offset: 0x178
}

// 
// Start address: 0x1df8d0
int is_left(_sfMenuObjRect* org, _sfMenuObjRect* target)
{
	float o_cx;
	float o_cy;
	float t_cx;
	float t_cy;
	float dir[4];
	float left[4];
	// Line 877, Address: 0x1df8d0, Func Offset: 0
	// Line 878, Address: 0x1df8dc, Func Offset: 0xc
	// Line 879, Address: 0x1df8f8, Func Offset: 0x28
	// Line 880, Address: 0x1df918, Func Offset: 0x48
	// Line 879, Address: 0x1df920, Func Offset: 0x50
	// Line 880, Address: 0x1df924, Func Offset: 0x54
	// Line 881, Address: 0x1df938, Func Offset: 0x68
	// Line 880, Address: 0x1df940, Func Offset: 0x70
	// Line 881, Address: 0x1df948, Func Offset: 0x78
	// Line 882, Address: 0x1df960, Func Offset: 0x90
	// Line 881, Address: 0x1df968, Func Offset: 0x98
	// Line 882, Address: 0x1df970, Func Offset: 0xa0
	// Line 883, Address: 0x1df988, Func Offset: 0xb8
	// Line 882, Address: 0x1df990, Func Offset: 0xc0
	// Line 883, Address: 0x1df998, Func Offset: 0xc8
	// Line 884, Address: 0x1df9c0, Func Offset: 0xf0
	// Line 886, Address: 0x1df9cc, Func Offset: 0xfc
	// Line 883, Address: 0x1df9d4, Func Offset: 0x104
	// Line 884, Address: 0x1df9e0, Func Offset: 0x110
	// Line 886, Address: 0x1df9e8, Func Offset: 0x118
	// Line 888, Address: 0x1dfa30, Func Offset: 0x160
	// Line 889, Address: 0x1dfa38, Func Offset: 0x168
	// Func End, Address: 0x1dfa48, Func Offset: 0x178
}

// 
// Start address: 0x1dfa50
int is_right(_sfMenuObjRect* org, _sfMenuObjRect* target)
{
	float o_cx;
	float o_cy;
	float t_cx;
	float t_cy;
	float dir[4];
	float right[4];
	// Line 893, Address: 0x1dfa50, Func Offset: 0
	// Line 894, Address: 0x1dfa5c, Func Offset: 0xc
	// Line 895, Address: 0x1dfa78, Func Offset: 0x28
	// Line 896, Address: 0x1dfa94, Func Offset: 0x44
	// Line 895, Address: 0x1dfa9c, Func Offset: 0x4c
	// Line 896, Address: 0x1dfaa0, Func Offset: 0x50
	// Line 897, Address: 0x1dfab4, Func Offset: 0x64
	// Line 896, Address: 0x1dfabc, Func Offset: 0x6c
	// Line 897, Address: 0x1dfac4, Func Offset: 0x74
	// Line 898, Address: 0x1dfadc, Func Offset: 0x8c
	// Line 897, Address: 0x1dfae4, Func Offset: 0x94
	// Line 898, Address: 0x1dfaec, Func Offset: 0x9c
	// Line 899, Address: 0x1dfb04, Func Offset: 0xb4
	// Line 898, Address: 0x1dfb0c, Func Offset: 0xbc
	// Line 899, Address: 0x1dfb14, Func Offset: 0xc4
	// Line 900, Address: 0x1dfb3c, Func Offset: 0xec
	// Line 902, Address: 0x1dfb48, Func Offset: 0xf8
	// Line 899, Address: 0x1dfb50, Func Offset: 0x100
	// Line 900, Address: 0x1dfb5c, Func Offset: 0x10c
	// Line 902, Address: 0x1dfb64, Func Offset: 0x114
	// Line 903, Address: 0x1dfbac, Func Offset: 0x15c
	// Line 904, Address: 0x1dfbb0, Func Offset: 0x160
	// Line 905, Address: 0x1dfbb8, Func Offset: 0x168
	// Func End, Address: 0x1dfbc8, Func Offset: 0x178
}

// 
// Start address: 0x1dfbd0
void sfMenuMoveCursor_Atari(_anon0* menu, _enum_1 cmd)
{
	int rtv;
	int(*p_cmp)(_sfMenuObjRect*, _sfMenuObjRect*)[2];
	int i;
	int index;
	_sfMenuObj* obj;
	_sfMenuObj* cur;
	unsigned long min_distance;
	unsigned long distance;
	int d_x;
	int d_y;
	// Line 909, Address: 0x1dfbd0, Func Offset: 0
	// Line 927, Address: 0x1dfbd4, Func Offset: 0x4
	// Line 909, Address: 0x1dfbd8, Func Offset: 0x8
	// Line 927, Address: 0x1dfbdc, Func Offset: 0xc
	// Line 909, Address: 0x1dfbe0, Func Offset: 0x10
	// Line 927, Address: 0x1dfbe4, Func Offset: 0x14
	// Line 909, Address: 0x1dfbe8, Func Offset: 0x18
	// Line 935, Address: 0x1dfc08, Func Offset: 0x38
	// Line 910, Address: 0x1dfc0c, Func Offset: 0x3c
	// Line 927, Address: 0x1dfc10, Func Offset: 0x40
	// Line 935, Address: 0x1dfc14, Func Offset: 0x44
	// Line 936, Address: 0x1dfc48, Func Offset: 0x78
	// Line 937, Address: 0x1dfc50, Func Offset: 0x80
	// Line 938, Address: 0x1dfc58, Func Offset: 0x88
	// Line 939, Address: 0x1dfc60, Func Offset: 0x90
	// Line 940, Address: 0x1dfc64, Func Offset: 0x94
	// Line 943, Address: 0x1dfc6c, Func Offset: 0x9c
	// Line 944, Address: 0x1dfc78, Func Offset: 0xa8
	// Line 945, Address: 0x1dfc7c, Func Offset: 0xac
	// Line 946, Address: 0x1dfc80, Func Offset: 0xb0
	// Line 949, Address: 0x1dfc8c, Func Offset: 0xbc
	// Line 950, Address: 0x1dfc90, Func Offset: 0xc0
	// Line 951, Address: 0x1dfc98, Func Offset: 0xc8
	// Line 953, Address: 0x1dfcc0, Func Offset: 0xf0
	// Line 954, Address: 0x1dfcc8, Func Offset: 0xf8
	// Line 953, Address: 0x1dfcd0, Func Offset: 0x100
	// Line 954, Address: 0x1dfcd4, Func Offset: 0x104
	// Line 956, Address: 0x1dfcd8, Func Offset: 0x108
	// Line 957, Address: 0x1dfcec, Func Offset: 0x11c
	// Line 958, Address: 0x1dfcf8, Func Offset: 0x128
	// Line 959, Address: 0x1dfcfc, Func Offset: 0x12c
	// Line 960, Address: 0x1dfd00, Func Offset: 0x130
	// Line 963, Address: 0x1dfd04, Func Offset: 0x134
	// Line 964, Address: 0x1dfd08, Func Offset: 0x138
	// Line 965, Address: 0x1dfd0c, Func Offset: 0x13c
	// Line 967, Address: 0x1dfd18, Func Offset: 0x148
	// Line 970, Address: 0x1dfd20, Func Offset: 0x150
	// Line 971, Address: 0x1dfd30, Func Offset: 0x160
	// Func End, Address: 0x1dfd5c, Func Offset: 0x18c
}

// 
// Start address: 0x1dfd60
int cmp_up(_sfMenuObjRect* org, _sfMenuObjRect* target)
{
	// Line 822, Address: 0x1dfd60, Func Offset: 0
	// Line 823, Address: 0x1dfd74, Func Offset: 0x14
	// Func End, Address: 0x1dfd7c, Func Offset: 0x1c
}

// 
// Start address: 0x1dfd80
int cmp_down(_sfMenuObjRect* org, _sfMenuObjRect* target)
{
	// Line 828, Address: 0x1dfd80, Func Offset: 0
	// Line 829, Address: 0x1dfd94, Func Offset: 0x14
	// Func End, Address: 0x1dfd9c, Func Offset: 0x1c
}

// 
// Start address: 0x1dfda0
int cmp_left(_sfMenuObjRect* org, _sfMenuObjRect* target)
{
	// Line 834, Address: 0x1dfda0, Func Offset: 0
	// Line 835, Address: 0x1dfdb4, Func Offset: 0x14
	// Func End, Address: 0x1dfdbc, Func Offset: 0x1c
}

// 
// Start address: 0x1dfdc0
int cmp_right(_sfMenuObjRect* org, _sfMenuObjRect* target)
{
	// Line 840, Address: 0x1dfdc0, Func Offset: 0
	// Line 841, Address: 0x1dfdd4, Func Offset: 0x14
	// Func End, Address: 0x1dfddc, Func Offset: 0x1c
}

// 
// Start address: 0x1dfde0
void sfMenuMoveNone()
{
	// Line 977, Address: 0x1dfde0, Func Offset: 0
	// Func End, Address: 0x1dfde8, Func Offset: 0x8
}

// 
// Start address: 0x1dfdf0
int sfMenuHandle(_anon0* menu, _enum_1 cmd)
{
	int rtv;
	void(*move_csr)(_anon0*, _enum_1)[3];
	// Line 987, Address: 0x1dfdf0, Func Offset: 0
	// Line 988, Address: 0x1dfdf4, Func Offset: 0x4
	// Line 987, Address: 0x1dfdf8, Func Offset: 0x8
	// Line 995, Address: 0x1dfe08, Func Offset: 0x18
	// Line 996, Address: 0x1dfe10, Func Offset: 0x20
	// Line 997, Address: 0x1dfe1c, Func Offset: 0x2c
	// Line 998, Address: 0x1dfe3c, Func Offset: 0x4c
	// Line 1003, Address: 0x1dfe48, Func Offset: 0x58
	// Func End, Address: 0x1dfe5c, Func Offset: 0x6c
}

// 
// Start address: 0x1dfe60
void sfMenuSetCursorXY(_anon0* menu, float x, float y)
{
	// Line 1016, Address: 0x1dfe60, Func Offset: 0
	// Line 1017, Address: 0x1dfe68, Func Offset: 0x8
	// Line 1018, Address: 0x1dfe6c, Func Offset: 0xc
	// Line 1020, Address: 0x1dfe70, Func Offset: 0x10
	// Func End, Address: 0x1dfe78, Func Offset: 0x18
}

// 
// Start address: 0x1dfe80
void sfMenuGetCursorXY(_anon0* menu, float* x, float* y)
{
	// Line 1032, Address: 0x1dfe80, Func Offset: 0
	// Line 1033, Address: 0x1dfe88, Func Offset: 0x8
	// Line 1034, Address: 0x1dfe90, Func Offset: 0x10
	// Line 1036, Address: 0x1dfe98, Func Offset: 0x18
	// Func End, Address: 0x1dfea0, Func Offset: 0x20
}

