typedef struct sfObj;
typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef struct _MiscResult;
typedef union _anon6;
typedef enum _enum_0 : unsigned char;
typedef enum _enum_1 : unsigned char;

typedef int(*type_9)(sfObj*);
typedef void(*type_18)(sfObj*);
typedef void(*type_19)(sfObj*);

typedef unsigned char type_0[2];
typedef int type_1[4];
typedef int type_2[4];
typedef int type_3[8];
typedef int type_4[6];
typedef unsigned int type_5[4];
typedef int type_6[5];
typedef unsigned int type_7[3];
typedef char type_8[128];
typedef short type_10[2];
typedef unsigned short type_11[2];
typedef char type_12[4];
typedef unsigned char type_13[4];
typedef int type_14[5];
typedef float type_15[1];
typedef int type_16[1];
typedef _anon6 type_17[256];

struct sfObj
{
	_anon6 fwork[256];
	_anon6* work;
	void(*func)(sfObj*);
	_anon6* work_pt0;
	_anon6* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon6* sys_work;
	_anon6* scene_work;
	_anon6* event_work;
	_anon6* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

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
	_enum_0 type;
	_enum_1 size;
	unsigned int col;
	float x;
	float y;
	float alpha;
	_anon5 img;
};

struct _anon5
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

struct _MiscResult
{
	unsigned int play_level;
	unsigned int save_count;
	unsigned int continue_count;
	unsigned int killed_enemy;
	unsigned int held_ghost;
	unsigned int ending_type;
	float play_time;
	unsigned int memo_item;
	unsigned int padding[3];
};

union _anon6
{
	int si;
	unsigned int ui;
	void* pt;
	short ss[2];
	unsigned short us[2];
	char sc[4];
	unsigned char uc[4];
	float f;
	float fv[1];
	int iv[1];
};

enum _enum_0 : unsigned char
{
	RESULT_STAR_TYPE_LARGE,
	RESULT_STAR_TYPE_SMALL
};

enum _enum_1 : unsigned char
{
	RESULT_STAR_SIZE_NORMAL,
	RESULT_STAR_SIZE_MINI
};

int id_result[8];
_MiscResult misc_result;
int(*result_star_draw)(sfObj*);
_anon1* g_tex;
int result_msg_alpha;
unsigned int g_cbp;
char lstr[128];

int miscResult_calc_gamelevel();
int miscResult_calc_playtime();
int miscResult_calc_save();
int miscResult_calc_continue();
int miscResult_calc_killed_enemy();
int miscResult_calc_memo_item();
int miscResult_calc();
sfObj* result_star_construct();
int result_star_draw(sfObj* obj);
int result_star_destruct(sfObj* obj);
int result_star_print(int base_x, int base_y, int val, _enum_1 size);
int result_draw_member0(int id, int msg_id, unsigned int col);
int result_draw_member1(int id, char* str, unsigned int col);
int result_draw();
void miscResult_init();
void miscResult_StarEntry();
int miscResultBgPicLoad();
int miscResultBgPicDataSet();
int miscResult();
int result_check_complete();

// 
// Start address: 0x32ea30
int miscResult_calc_gamelevel()
{
	int lvpt[4];
	// Line 199, Address: 0x32ea30, Func Offset: 0
	// Line 197, Address: 0x32ea34, Func Offset: 0x4
	// Line 199, Address: 0x32ea38, Func Offset: 0x8
	// Line 200, Address: 0x32ea44, Func Offset: 0x14
	// Line 199, Address: 0x32ea48, Func Offset: 0x18
	// Line 200, Address: 0x32ea4c, Func Offset: 0x1c
	// Line 201, Address: 0x32ea5c, Func Offset: 0x2c
	// Func End, Address: 0x32ea64, Func Offset: 0x34
}

// 
// Start address: 0x32ea70
int miscResult_calc_playtime()
{
	int ptw;
	// Line 210, Address: 0x32ea70, Func Offset: 0
	// Line 211, Address: 0x32eae0, Func Offset: 0x70
	// Line 212, Address: 0x32eaf0, Func Offset: 0x80
	// Line 214, Address: 0x32eb00, Func Offset: 0x90
	// Func End, Address: 0x32eb08, Func Offset: 0x98
}

// 
// Start address: 0x32eb10
int miscResult_calc_save()
{
	int bonus;
	int ptw;
	// Line 222, Address: 0x32eb10, Func Offset: 0
	// Line 220, Address: 0x32eb14, Func Offset: 0x4
	// Line 222, Address: 0x32eb18, Func Offset: 0x8
	// Line 223, Address: 0x32eb1c, Func Offset: 0xc
	// Line 225, Address: 0x32eb20, Func Offset: 0x10
	// Line 226, Address: 0x32eb28, Func Offset: 0x18
	// Line 227, Address: 0x32eb38, Func Offset: 0x28
	// Line 228, Address: 0x32eb3c, Func Offset: 0x2c
	// Line 230, Address: 0x32eb48, Func Offset: 0x38
	// Func End, Address: 0x32eb50, Func Offset: 0x40
}

// 
// Start address: 0x32eb50
int miscResult_calc_continue()
{
	int ptw;
	// Line 238, Address: 0x32eb50, Func Offset: 0
	// Line 239, Address: 0x32eb54, Func Offset: 0x4
	// Line 238, Address: 0x32eb58, Func Offset: 0x8
	// Line 239, Address: 0x32eb5c, Func Offset: 0xc
	// Line 240, Address: 0x32eb60, Func Offset: 0x10
	// Line 241, Address: 0x32eb70, Func Offset: 0x20
	// Line 243, Address: 0x32eb80, Func Offset: 0x30
	// Func End, Address: 0x32eb88, Func Offset: 0x38
}

// 
// Start address: 0x32eb90
int miscResult_calc_killed_enemy()
{
	int ptw;
	// Line 250, Address: 0x32eb90, Func Offset: 0
	// Line 251, Address: 0x32ebb4, Func Offset: 0x24
	// Line 253, Address: 0x32ebc8, Func Offset: 0x38
	// Func End, Address: 0x32ebd0, Func Offset: 0x40
}

// 
// Start address: 0x32ebd0
int miscResult_calc_memo_item()
{
	// Line 285, Address: 0x32ebd0, Func Offset: 0
	// Line 286, Address: 0x32ebfc, Func Offset: 0x2c
	// Func End, Address: 0x32ec04, Func Offset: 0x34
}

// 
// Start address: 0x32ec10
int miscResult_calc()
{
	int point;
	// Line 290, Address: 0x32ec10, Func Offset: 0
	// Line 293, Address: 0x32ec18, Func Offset: 0x8
	// Line 296, Address: 0x32ec20, Func Offset: 0x10
	// Line 299, Address: 0x32ec28, Func Offset: 0x18
	// Line 302, Address: 0x32ec30, Func Offset: 0x20
	// Line 305, Address: 0x32ec38, Func Offset: 0x28
	// Line 312, Address: 0x32ec40, Func Offset: 0x30
	// Line 318, Address: 0x32ec4c, Func Offset: 0x3c
	// Line 320, Address: 0x32ec60, Func Offset: 0x50
	// Line 319, Address: 0x32ec64, Func Offset: 0x54
	// Line 320, Address: 0x32ec68, Func Offset: 0x58
	// Func End, Address: 0x32ec70, Func Offset: 0x60
}

// 
// Start address: 0x32ec70
sfObj* result_star_construct()
{
	sfObj* obj;
	_anon4* wk;
	// Line 329, Address: 0x32ec70, Func Offset: 0
	// Line 334, Address: 0x32ec7c, Func Offset: 0xc
	// Line 335, Address: 0x32ec88, Func Offset: 0x18
	// Line 336, Address: 0x32ec98, Func Offset: 0x28
	// Line 339, Address: 0x32eca8, Func Offset: 0x38
	// Line 337, Address: 0x32ecac, Func Offset: 0x3c
	// Line 339, Address: 0x32ecb0, Func Offset: 0x40
	// Line 340, Address: 0x32ecb8, Func Offset: 0x48
	// Line 341, Address: 0x32ecc8, Func Offset: 0x58
	// Line 342, Address: 0x32ecd8, Func Offset: 0x68
	// Line 343, Address: 0x32ecf4, Func Offset: 0x84
	// Line 345, Address: 0x32ed08, Func Offset: 0x98
	// Line 346, Address: 0x32ed0c, Func Offset: 0x9c
	// Line 345, Address: 0x32ed10, Func Offset: 0xa0
	// Line 347, Address: 0x32ed18, Func Offset: 0xa8
	// Func End, Address: 0x32ed2c, Func Offset: 0xbc
}

// 
// Start address: 0x32ed30
int result_star_draw(sfObj* obj)
{
	_anon4* wk;
	_anon1* tex;
	unsigned int cbp;
	int size_w;
	int size_h;
	int shift;
	// Line 354, Address: 0x32ed30, Func Offset: 0
	// Line 356, Address: 0x32ed34, Func Offset: 0x4
	// Line 354, Address: 0x32ed38, Func Offset: 0x8
	// Line 364, Address: 0x32ed4c, Func Offset: 0x1c
	// Line 356, Address: 0x32ed50, Func Offset: 0x20
	// Line 366, Address: 0x32ed54, Func Offset: 0x24
	// Line 357, Address: 0x32ed58, Func Offset: 0x28
	// Line 366, Address: 0x32ed5c, Func Offset: 0x2c
	// Line 367, Address: 0x32ed64, Func Offset: 0x34
	// Line 368, Address: 0x32ed7c, Func Offset: 0x4c
	// Line 369, Address: 0x32ed88, Func Offset: 0x58
	// Line 372, Address: 0x32eda0, Func Offset: 0x70
	// Line 376, Address: 0x32edac, Func Offset: 0x7c
	// Line 377, Address: 0x32edb8, Func Offset: 0x88
	// Line 379, Address: 0x32edbc, Func Offset: 0x8c
	// Line 381, Address: 0x32edc0, Func Offset: 0x90
	// Line 385, Address: 0x32edfc, Func Offset: 0xcc
	// Line 386, Address: 0x32ee18, Func Offset: 0xe8
	// Line 387, Address: 0x32ee30, Func Offset: 0x100
	// Line 388, Address: 0x32ee44, Func Offset: 0x114
	// Line 390, Address: 0x32ee50, Func Offset: 0x120
	// Line 394, Address: 0x32ee78, Func Offset: 0x148
	// Line 390, Address: 0x32ee80, Func Offset: 0x150
	// Line 394, Address: 0x32ee84, Func Offset: 0x154
	// Line 395, Address: 0x32ee94, Func Offset: 0x164
	// Line 396, Address: 0x32eeac, Func Offset: 0x17c
	// Line 397, Address: 0x32eec0, Func Offset: 0x190
	// Line 401, Address: 0x32eecc, Func Offset: 0x19c
	// Line 400, Address: 0x32eed0, Func Offset: 0x1a0
	// Line 401, Address: 0x32eed4, Func Offset: 0x1a4
	// Func End, Address: 0x32eeec, Func Offset: 0x1bc
}

// 
// Start address: 0x32eef0
int result_star_destruct(sfObj* obj)
{
	// Line 445, Address: 0x32eef0, Func Offset: 0
	// Line 446, Address: 0x32eef8, Func Offset: 0x8
	// Line 448, Address: 0x32ef00, Func Offset: 0x10
	// Line 447, Address: 0x32ef04, Func Offset: 0x14
	// Line 448, Address: 0x32ef08, Func Offset: 0x18
	// Func End, Address: 0x32ef10, Func Offset: 0x20
}

// 
// Start address: 0x32ef10
int result_star_print(int base_x, int base_y, int val, _enum_1 size)
{
	sfObj* obj;
	int deca;
	int n;
	int i;
	int x;
	int y;
	int size_val_l;
	int size_val_s;
	int size_val_spc;
	// Line 455, Address: 0x32ef10, Func Offset: 0
	// Line 462, Address: 0x32ef14, Func Offset: 0x4
	// Line 455, Address: 0x32ef18, Func Offset: 0x8
	// Line 462, Address: 0x32ef1c, Func Offset: 0xc
	// Line 455, Address: 0x32ef20, Func Offset: 0x10
	// Line 462, Address: 0x32ef30, Func Offset: 0x20
	// Line 455, Address: 0x32ef34, Func Offset: 0x24
	// Line 465, Address: 0x32ef38, Func Offset: 0x28
	// Line 455, Address: 0x32ef3c, Func Offset: 0x2c
	// Line 465, Address: 0x32ef50, Func Offset: 0x40
	// Line 455, Address: 0x32ef54, Func Offset: 0x44
	// Line 465, Address: 0x32ef58, Func Offset: 0x48
	// Line 466, Address: 0x32ef5c, Func Offset: 0x4c
	// Line 455, Address: 0x32ef60, Func Offset: 0x50
	// Line 467, Address: 0x32ef64, Func Offset: 0x54
	// Line 466, Address: 0x32ef68, Func Offset: 0x58
	// Line 467, Address: 0x32ef6c, Func Offset: 0x5c
	// Line 462, Address: 0x32ef74, Func Offset: 0x64
	// Line 470, Address: 0x32ef84, Func Offset: 0x74
	// Line 463, Address: 0x32ef88, Func Offset: 0x78
	// Line 462, Address: 0x32ef8c, Func Offset: 0x7c
	// Line 470, Address: 0x32ef94, Func Offset: 0x84
	// Line 463, Address: 0x32ef98, Func Offset: 0x88
	// Line 470, Address: 0x32ef9c, Func Offset: 0x8c
	// Line 471, Address: 0x32efb8, Func Offset: 0xa8
	// Line 472, Address: 0x32efc0, Func Offset: 0xb0
	// Line 473, Address: 0x32efc4, Func Offset: 0xb4
	// Line 472, Address: 0x32efd0, Func Offset: 0xc0
	// Line 473, Address: 0x32efd4, Func Offset: 0xc4
	// Line 476, Address: 0x32efe0, Func Offset: 0xd0
	// Line 473, Address: 0x32efe4, Func Offset: 0xd4
	// Line 474, Address: 0x32efec, Func Offset: 0xdc
	// Line 475, Address: 0x32eff4, Func Offset: 0xe4
	// Line 476, Address: 0x32effc, Func Offset: 0xec
	// Line 477, Address: 0x32f01c, Func Offset: 0x10c
	// Line 476, Address: 0x32f020, Func Offset: 0x110
	// Line 477, Address: 0x32f028, Func Offset: 0x118
	// Line 483, Address: 0x32f034, Func Offset: 0x124
	// Line 482, Address: 0x32f038, Func Offset: 0x128
	// Line 485, Address: 0x32f044, Func Offset: 0x134
	// Line 486, Address: 0x32f060, Func Offset: 0x150
	// Line 487, Address: 0x32f068, Func Offset: 0x158
	// Line 488, Address: 0x32f06c, Func Offset: 0x15c
	// Line 489, Address: 0x32f074, Func Offset: 0x164
	// Line 488, Address: 0x32f078, Func Offset: 0x168
	// Line 492, Address: 0x32f07c, Func Offset: 0x16c
	// Line 490, Address: 0x32f080, Func Offset: 0x170
	// Line 492, Address: 0x32f088, Func Offset: 0x178
	// Line 488, Address: 0x32f08c, Func Offset: 0x17c
	// Line 492, Address: 0x32f094, Func Offset: 0x184
	// Line 488, Address: 0x32f098, Func Offset: 0x188
	// Line 489, Address: 0x32f0a0, Func Offset: 0x190
	// Line 490, Address: 0x32f0a8, Func Offset: 0x198
	// Line 492, Address: 0x32f0ac, Func Offset: 0x19c
	// Line 496, Address: 0x32f0b8, Func Offset: 0x1a8
	// Line 495, Address: 0x32f0c0, Func Offset: 0x1b0
	// Line 496, Address: 0x32f0c4, Func Offset: 0x1b4
	// Func End, Address: 0x32f0ec, Func Offset: 0x1dc
}

// 
// Start address: 0x32f0f0
int result_draw_member0(int id, int msg_id, unsigned int col)
{
	// Line 536, Address: 0x32f0f0, Func Offset: 0
	// Line 542, Address: 0x32f118, Func Offset: 0x28
	// Line 548, Address: 0x32f1a0, Func Offset: 0xb0
	// Line 550, Address: 0x32f218, Func Offset: 0x128
	// Line 549, Address: 0x32f21c, Func Offset: 0x12c
	// Line 550, Address: 0x32f220, Func Offset: 0x130
	// Func End, Address: 0x32f23c, Func Offset: 0x14c
}

// 
// Start address: 0x32f240
int result_draw_member1(int id, char* str, unsigned int col)
{
	// Line 553, Address: 0x32f240, Func Offset: 0
	// Line 559, Address: 0x32f268, Func Offset: 0x28
	// Line 560, Address: 0x32f2f0, Func Offset: 0xb0
	// Line 566, Address: 0x32f2f8, Func Offset: 0xb8
	// Line 570, Address: 0x32f378, Func Offset: 0x138
	// Line 569, Address: 0x32f380, Func Offset: 0x140
	// Line 570, Address: 0x32f384, Func Offset: 0x144
	// Func End, Address: 0x32f39c, Func Offset: 0x15c
}

// 
// Start address: 0x32f3a0
int result_draw()
{
	int edtype_id[6];
	int lv_id[4];
	_anon5 img;
	char flag;
	// Line 718, Address: 0x32f3a0, Func Offset: 0
	// Line 725, Address: 0x32f3a4, Func Offset: 0x4
	// Line 718, Address: 0x32f3a8, Func Offset: 0x8
	// Line 725, Address: 0x32f3b0, Func Offset: 0x10
	// Line 727, Address: 0x32f4ac, Func Offset: 0x10c
	// Line 729, Address: 0x32f4f0, Func Offset: 0x150
	// Line 731, Address: 0x32f680, Func Offset: 0x2e0
	// Line 733, Address: 0x32f6c4, Func Offset: 0x324
	// Line 735, Address: 0x32f708, Func Offset: 0x368
	// Line 741, Address: 0x32f74c, Func Offset: 0x3ac
	// Line 743, Address: 0x32f794, Func Offset: 0x3f4
	// Line 745, Address: 0x32f7bc, Func Offset: 0x41c
	// Line 747, Address: 0x32f7cc, Func Offset: 0x42c
	// Line 746, Address: 0x32f7d4, Func Offset: 0x434
	// Line 747, Address: 0x32f7d8, Func Offset: 0x438
	// Func End, Address: 0x32f7e0, Func Offset: 0x440
}

// 
// Start address: 0x32f7e0
void miscResult_init()
{
	// Line 752, Address: 0x32f7e0, Func Offset: 0
	// Line 755, Address: 0x32f7e8, Func Offset: 0x8
	// Line 756, Address: 0x32f7f4, Func Offset: 0x14
	// Line 757, Address: 0x32f800, Func Offset: 0x20
	// Line 758, Address: 0x32f80c, Func Offset: 0x2c
	// Line 759, Address: 0x32f818, Func Offset: 0x38
	// Line 763, Address: 0x32f824, Func Offset: 0x44
	// Line 764, Address: 0x32f830, Func Offset: 0x50
	// Line 777, Address: 0x32f840, Func Offset: 0x60
	// Func End, Address: 0x32f84c, Func Offset: 0x6c
}

// 
// Start address: 0x32f850
void miscResult_StarEntry()
{
	// Line 783, Address: 0x32f850, Func Offset: 0
	// Line 843, Address: 0x32f858, Func Offset: 0x8
	// Line 847, Address: 0x32f87c, Func Offset: 0x2c
	// Func End, Address: 0x32f88c, Func Offset: 0x3c
}

// 
// Start address: 0x32f890
int miscResultBgPicLoad()
{
	int pic_index[5];
	// Line 851, Address: 0x32f890, Func Offset: 0
	// Line 852, Address: 0x32f894, Func Offset: 0x4
	// Line 851, Address: 0x32f898, Func Offset: 0x8
	// Line 852, Address: 0x32f89c, Func Offset: 0xc
	// Line 860, Address: 0x32f8ac, Func Offset: 0x1c
	// Line 852, Address: 0x32f8b0, Func Offset: 0x20
	// Line 860, Address: 0x32f8b8, Func Offset: 0x28
	// Line 862, Address: 0x32f8cc, Func Offset: 0x3c
	// Line 861, Address: 0x32f8d0, Func Offset: 0x40
	// Line 862, Address: 0x32f8d4, Func Offset: 0x44
	// Func End, Address: 0x32f8dc, Func Offset: 0x4c
}

// 
// Start address: 0x32f8e0
int miscResultBgPicDataSet()
{
	int pic_emt_index[5];
	// Line 867, Address: 0x32f8e0, Func Offset: 0
	// Line 868, Address: 0x32f8e4, Func Offset: 0x4
	// Line 867, Address: 0x32f8e8, Func Offset: 0x8
	// Line 868, Address: 0x32f8ec, Func Offset: 0xc
	// Line 876, Address: 0x32f8fc, Func Offset: 0x1c
	// Line 868, Address: 0x32f900, Func Offset: 0x20
	// Line 876, Address: 0x32f908, Func Offset: 0x28
	// Line 877, Address: 0x32f928, Func Offset: 0x48
	// Line 879, Address: 0x32f94c, Func Offset: 0x6c
	// Line 878, Address: 0x32f950, Func Offset: 0x70
	// Line 879, Address: 0x32f954, Func Offset: 0x74
	// Func End, Address: 0x32f95c, Func Offset: 0x7c
}

// 
// Start address: 0x32f960
int miscResult()
{
	int rtv;
	unsigned char draw_flag;
	sfObj* obj;
	// Line 885, Address: 0x32f960, Func Offset: 0
	// Line 890, Address: 0x32f96c, Func Offset: 0xc
	// Line 891, Address: 0x32f974, Func Offset: 0x14
	// Line 893, Address: 0x32f9a0, Func Offset: 0x40
	// Line 894, Address: 0x32f9a8, Func Offset: 0x48
	// Line 895, Address: 0x32f9b0, Func Offset: 0x50
	// Line 896, Address: 0x32f9b8, Func Offset: 0x58
	// Line 897, Address: 0x32f9c0, Func Offset: 0x60
	// Line 898, Address: 0x32f9c8, Func Offset: 0x68
	// Line 900, Address: 0x32f9cc, Func Offset: 0x6c
	// Line 903, Address: 0x32f9d4, Func Offset: 0x74
	// Line 904, Address: 0x32f9d8, Func Offset: 0x78
	// Line 906, Address: 0x32f9ec, Func Offset: 0x8c
	// Line 907, Address: 0x32fa08, Func Offset: 0xa8
	// Line 908, Address: 0x32fa10, Func Offset: 0xb0
	// Line 911, Address: 0x32fa1c, Func Offset: 0xbc
	// Line 914, Address: 0x32fa24, Func Offset: 0xc4
	// Line 916, Address: 0x32fa2c, Func Offset: 0xcc
	// Line 917, Address: 0x32fa30, Func Offset: 0xd0
	// Line 918, Address: 0x32fa40, Func Offset: 0xe0
	// Line 920, Address: 0x32fa48, Func Offset: 0xe8
	// Line 922, Address: 0x32fa50, Func Offset: 0xf0
	// Line 923, Address: 0x32fa6c, Func Offset: 0x10c
	// Line 925, Address: 0x32fa74, Func Offset: 0x114
	// Line 927, Address: 0x32fa78, Func Offset: 0x118
	// Line 928, Address: 0x32fa8c, Func Offset: 0x12c
	// Line 929, Address: 0x32fa94, Func Offset: 0x134
	// Line 930, Address: 0x32fa9c, Func Offset: 0x13c
	// Line 932, Address: 0x32faa0, Func Offset: 0x140
	// Line 935, Address: 0x32faa8, Func Offset: 0x148
	// Line 936, Address: 0x32fab8, Func Offset: 0x158
	// Line 938, Address: 0x32fac0, Func Offset: 0x160
	// Line 943, Address: 0x32fac8, Func Offset: 0x168
	// Line 944, Address: 0x32fad4, Func Offset: 0x174
	// Line 945, Address: 0x32faf0, Func Offset: 0x190
	// Line 946, Address: 0x32fafc, Func Offset: 0x19c
	// Line 949, Address: 0x32fb00, Func Offset: 0x1a0
	// Line 951, Address: 0x32fb08, Func Offset: 0x1a8
	// Line 952, Address: 0x32fb18, Func Offset: 0x1b8
	// Line 953, Address: 0x32fb20, Func Offset: 0x1c0
	// Line 957, Address: 0x32fb28, Func Offset: 0x1c8
	// Line 958, Address: 0x32fb2c, Func Offset: 0x1cc
	// Func End, Address: 0x32fb3c, Func Offset: 0x1dc
}

// 
// Start address: 0x32fb40
int result_check_complete()
{
	// Line 963, Address: 0x32fb40, Func Offset: 0
	// Line 967, Address: 0x32fb44, Func Offset: 0x4
	// Line 963, Address: 0x32fb48, Func Offset: 0x8
	// Line 967, Address: 0x32fb4c, Func Offset: 0xc
	// Line 973, Address: 0x32fbc0, Func Offset: 0x80
	// Line 975, Address: 0x32fbc8, Func Offset: 0x88
	// Line 976, Address: 0x32fbd0, Func Offset: 0x90
	// Func End, Address: 0x32fbdc, Func Offset: 0x9c
}

