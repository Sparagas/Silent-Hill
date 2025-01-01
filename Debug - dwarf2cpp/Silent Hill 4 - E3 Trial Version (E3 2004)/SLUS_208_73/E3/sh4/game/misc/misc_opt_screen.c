typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef struct _anon6;
typedef struct _anon7;
typedef struct _anon8;


typedef unsigned char type_0[2];
typedef unsigned char type_1[9];
typedef int type_2[10];
typedef _anon5 type_3[2];
typedef float type_4[2];
typedef float type_5[2][5];
typedef int type_6[2];
typedef unsigned int type_7[4];
typedef unsigned char type_8[9];
typedef char type_9[7];
typedef char type_10[16];

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
	int screen_pos[2];
	char head_motion;
	char hide_gauge;
	char hide_icon;
	char vibration;
	char sound;
	char bgm_vol;
	char se_vol;
	char keyconf;
	char brightness;
	char language;
	char subtitles;
	char blood_col;
	char noise_eff;
	char contrast;
	char cam_reverse;
	char move_parallel;
	char is_walk;
	char pad1[7];
};

struct _anon5
{
	float x;
	float y;
	int u;
	int v;
	unsigned int col;
};

struct _anon6
{
	_anon3 base;
	_anon5 v[2];
};

struct _anon7
{
	int ofs_x;
	int ofs_y;
	int brightness;
	int contrast;
	int pre_ofs_x;
	int pre_ofs_y;
	int pre_brightness;
	int pre_contrast;
	int is_canceled;
};

struct _anon8
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

int fade_depth;
_anon7 scr_info;
int mes_num[10];
unsigned char bri_tbl[9];
unsigned char cont_tbl[9];
unsigned long* sg_packet_cur;

void OptBrightnessToSystem(int level);
void OptContrastToSystem(int level);
void one_grad(int kind, int x, int y, int w, int h);
void draw_grad();
void OptBrightnessDispInfo();
void OptBrightnessCanceled(_anon4* opt);
int OptBrightnessInit(_anon4* opt);
int OptBrightnessHandle();
int OptBrightnessMain(_anon4* opt);
int OptBrightnessEnd(_anon4* opt);
int OptBrightness(_anon4* opt);
void OptScreenToSystem(int x, int y);
void draw_black();
void draw_grid();
void OptScreenDispInfo();
void OptScreenCanceled(_anon4* opt);
int OptScreenPosInit(_anon4* opt);
int OptScreenHandle();
int OptScreenPosMain(_anon4* opt);
int OptScreenPosEnd(_anon4* opt);
int OptScreenPos(_anon4* opt);

// 
// Start address: 0x2e5f20
void OptBrightnessToSystem(int level)
{
	// Line 319, Address: 0x2e5f20, Func Offset: 0
	// Line 320, Address: 0x2e5f24, Func Offset: 0x4
	// Line 321, Address: 0x2e5f38, Func Offset: 0x18
	// Line 322, Address: 0x2e5f4c, Func Offset: 0x2c
	// Line 323, Address: 0x2e5f50, Func Offset: 0x30
	// Func End, Address: 0x2e5f5c, Func Offset: 0x3c
}

// 
// Start address: 0x2e5f60
void OptContrastToSystem(int level)
{
	// Line 330, Address: 0x2e5f60, Func Offset: 0
	// Line 331, Address: 0x2e5f64, Func Offset: 0x4
	// Line 332, Address: 0x2e5f78, Func Offset: 0x18
	// Line 333, Address: 0x2e5f8c, Func Offset: 0x2c
	// Line 334, Address: 0x2e5f90, Func Offset: 0x30
	// Func End, Address: 0x2e5f9c, Func Offset: 0x3c
}

// 
// Start address: 0x2e5fa0
void one_grad(int kind, int x, int y, int w, int h)
{
	void* pkt;
	int i;
	unsigned long* p;
	unsigned char v;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	unsigned long* p;
	// Line 349, Address: 0x2e5fa0, Func Offset: 0
	// Line 350, Address: 0x2e5fe0, Func Offset: 0x40
	// Line 352, Address: 0x2e5ffc, Func Offset: 0x5c
	// Line 355, Address: 0x2e6014, Func Offset: 0x74
	// Line 356, Address: 0x2e601c, Func Offset: 0x7c
	// Line 357, Address: 0x2e6024, Func Offset: 0x84
	// Line 361, Address: 0x2e6030, Func Offset: 0x90
	// Line 359, Address: 0x2e6034, Func Offset: 0x94
	// Line 361, Address: 0x2e6048, Func Offset: 0xa8
	// Line 359, Address: 0x2e6050, Func Offset: 0xb0
	// Line 361, Address: 0x2e6060, Func Offset: 0xc0
	// Line 359, Address: 0x2e6064, Func Offset: 0xc4
	// Line 361, Address: 0x2e606c, Func Offset: 0xcc
	// Line 364, Address: 0x2e6070, Func Offset: 0xd0
	// Line 366, Address: 0x2e6084, Func Offset: 0xe4
	// Line 364, Address: 0x2e6088, Func Offset: 0xe8
	// Line 366, Address: 0x2e608c, Func Offset: 0xec
	// Line 367, Address: 0x2e60b8, Func Offset: 0x118
	// Line 368, Address: 0x2e60e8, Func Offset: 0x148
	// Line 369, Address: 0x2e611c, Func Offset: 0x17c
	// Line 370, Address: 0x2e6158, Func Offset: 0x1b8
	// Line 372, Address: 0x2e6198, Func Offset: 0x1f8
	// Line 373, Address: 0x2e61f8, Func Offset: 0x258
	// Line 372, Address: 0x2e61fc, Func Offset: 0x25c
	// Line 373, Address: 0x2e6220, Func Offset: 0x280
	// Line 374, Address: 0x2e6278, Func Offset: 0x2d8
	// Line 373, Address: 0x2e627c, Func Offset: 0x2dc
	// Line 374, Address: 0x2e6288, Func Offset: 0x2e8
	// Line 373, Address: 0x2e628c, Func Offset: 0x2ec
	// Line 374, Address: 0x2e62b4, Func Offset: 0x314
	// Line 376, Address: 0x2e62bc, Func Offset: 0x31c
	// Line 377, Address: 0x2e62c4, Func Offset: 0x324
	// Line 378, Address: 0x2e62cc, Func Offset: 0x32c
	// Line 379, Address: 0x2e62e4, Func Offset: 0x344
	// Line 380, Address: 0x2e62fc, Func Offset: 0x35c
	// Line 381, Address: 0x2e6300, Func Offset: 0x360
	// Func End, Address: 0x2e6330, Func Offset: 0x390
}

// 
// Start address: 0x2e6330
void draw_grad()
{
	int i;
	int w;
	_anon6 border;
	float line_x[2][5];
	_anon8 img;
	char flag;
	// Line 386, Address: 0x2e6330, Func Offset: 0
	// Line 391, Address: 0x2e6340, Func Offset: 0x10
	// Line 401, Address: 0x2e6348, Func Offset: 0x18
	// Line 402, Address: 0x2e6358, Func Offset: 0x28
	// Line 403, Address: 0x2e6364, Func Offset: 0x34
	// Line 406, Address: 0x2e6398, Func Offset: 0x68
	// Line 408, Address: 0x2e63b4, Func Offset: 0x84
	// Line 409, Address: 0x2e63c4, Func Offset: 0x94
	// Line 410, Address: 0x2e63dc, Func Offset: 0xac
	// Line 414, Address: 0x2e63f0, Func Offset: 0xc0
	// Line 415, Address: 0x2e6400, Func Offset: 0xd0
	// Line 418, Address: 0x2e6408, Func Offset: 0xd8
	// Line 421, Address: 0x2e6420, Func Offset: 0xf0
	// Line 422, Address: 0x2e6438, Func Offset: 0x108
	// Line 423, Address: 0x2e6450, Func Offset: 0x120
	// Line 424, Address: 0x2e6468, Func Offset: 0x138
	// Line 437, Address: 0x2e6484, Func Offset: 0x154
	// Line 438, Address: 0x2e6490, Func Offset: 0x160
	// Line 441, Address: 0x2e64b0, Func Offset: 0x180
	// Line 442, Address: 0x2e64c0, Func Offset: 0x190
	// Line 445, Address: 0x2e64e0, Func Offset: 0x1b0
	// Line 446, Address: 0x2e64f0, Func Offset: 0x1c0
	// Line 448, Address: 0x2e6500, Func Offset: 0x1d0
	// Func End, Address: 0x2e6518, Func Offset: 0x1e8
}

// 
// Start address: 0x2e6520
void OptBrightnessDispInfo()
{
	// Line 452, Address: 0x2e6520, Func Offset: 0
	// Line 453, Address: 0x2e6528, Func Offset: 0x8
	// Line 454, Address: 0x2e6530, Func Offset: 0x10
	// Line 457, Address: 0x2e6544, Func Offset: 0x24
	// Line 460, Address: 0x2e657c, Func Offset: 0x5c
	// Line 461, Address: 0x2e65b4, Func Offset: 0x94
	// Line 463, Address: 0x2e65d0, Func Offset: 0xb0
	// Line 466, Address: 0x2e6638, Func Offset: 0x118
	// Line 467, Address: 0x2e6670, Func Offset: 0x150
	// Line 469, Address: 0x2e668c, Func Offset: 0x16c
	// Line 475, Address: 0x2e66f4, Func Offset: 0x1d4
	// Line 478, Address: 0x2e672c, Func Offset: 0x20c
	// Line 491, Address: 0x2e6748, Func Offset: 0x228
	// Line 493, Address: 0x2e6780, Func Offset: 0x260
	// Line 496, Address: 0x2e67b8, Func Offset: 0x298
	// Line 504, Address: 0x2e67e4, Func Offset: 0x2c4
	// Line 505, Address: 0x2e67ec, Func Offset: 0x2cc
	// Func End, Address: 0x2e67f8, Func Offset: 0x2d8
}

// 
// Start address: 0x2e6800
void OptBrightnessCanceled(_anon4* opt)
{
	// Line 509, Address: 0x2e6800, Func Offset: 0
	// Line 510, Address: 0x2e6804, Func Offset: 0x4
	// Line 509, Address: 0x2e6808, Func Offset: 0x8
	// Line 510, Address: 0x2e6810, Func Offset: 0x10
	// Line 511, Address: 0x2e681c, Func Offset: 0x1c
	// Line 513, Address: 0x2e6828, Func Offset: 0x28
	// Line 514, Address: 0x2e6834, Func Offset: 0x34
	// Line 516, Address: 0x2e6840, Func Offset: 0x40
	// Line 517, Address: 0x2e684c, Func Offset: 0x4c
	// Line 519, Address: 0x2e6858, Func Offset: 0x58
	// Line 520, Address: 0x2e6860, Func Offset: 0x60
	// Func End, Address: 0x2e6870, Func Offset: 0x70
}

// 
// Start address: 0x2e6870
int OptBrightnessInit(_anon4* opt)
{
	// Line 524, Address: 0x2e6870, Func Offset: 0
	// Line 525, Address: 0x2e6874, Func Offset: 0x4
	// Line 524, Address: 0x2e6878, Func Offset: 0x8
	// Line 525, Address: 0x2e6880, Func Offset: 0x10
	// Line 526, Address: 0x2e688c, Func Offset: 0x1c
	// Line 528, Address: 0x2e6898, Func Offset: 0x28
	// Line 529, Address: 0x2e68a4, Func Offset: 0x34
	// Line 532, Address: 0x2e68b0, Func Offset: 0x40
	// Line 537, Address: 0x2e68b8, Func Offset: 0x48
	// Line 539, Address: 0x2e68bc, Func Offset: 0x4c
	// Line 532, Address: 0x2e68c0, Func Offset: 0x50
	// Line 533, Address: 0x2e68c4, Func Offset: 0x54
	// Line 537, Address: 0x2e68d0, Func Offset: 0x60
	// Line 535, Address: 0x2e68d8, Func Offset: 0x68
	// Line 540, Address: 0x2e68e0, Func Offset: 0x70
	// Func End, Address: 0x2e68f0, Func Offset: 0x80
}

// 
// Start address: 0x2e68f0
int OptBrightnessHandle()
{
	int rtv;
	unsigned int trg;
	int b;
	int b;
	// Line 543, Address: 0x2e68f0, Func Offset: 0
	// Line 546, Address: 0x2e68f4, Func Offset: 0x4
	// Line 543, Address: 0x2e68f8, Func Offset: 0x8
	// Line 546, Address: 0x2e6908, Func Offset: 0x18
	// Line 548, Address: 0x2e6914, Func Offset: 0x24
	// Line 549, Address: 0x2e6928, Func Offset: 0x38
	// Line 552, Address: 0x2e6930, Func Offset: 0x40
	// Line 553, Address: 0x2e6938, Func Offset: 0x48
	// Line 559, Address: 0x2e694c, Func Offset: 0x5c
	// Line 562, Address: 0x2e6954, Func Offset: 0x64
	// Line 564, Address: 0x2e6960, Func Offset: 0x70
	// Line 565, Address: 0x2e696c, Func Offset: 0x7c
	// Line 566, Address: 0x2e6974, Func Offset: 0x84
	// Line 568, Address: 0x2e6980, Func Offset: 0x90
	// Line 569, Address: 0x2e698c, Func Offset: 0x9c
	// Line 570, Address: 0x2e6998, Func Offset: 0xa8
	// Line 572, Address: 0x2e69a0, Func Offset: 0xb0
	// Line 575, Address: 0x2e69ac, Func Offset: 0xbc
	// Line 577, Address: 0x2e69b8, Func Offset: 0xc8
	// Line 580, Address: 0x2e69c4, Func Offset: 0xd4
	// Line 582, Address: 0x2e69cc, Func Offset: 0xdc
	// Line 583, Address: 0x2e69d8, Func Offset: 0xe8
	// Line 585, Address: 0x2e69e4, Func Offset: 0xf4
	// Line 588, Address: 0x2e69ec, Func Offset: 0xfc
	// Line 590, Address: 0x2e69f4, Func Offset: 0x104
	// Line 591, Address: 0x2e69f8, Func Offset: 0x108
	// Line 592, Address: 0x2e6a00, Func Offset: 0x110
	// Line 593, Address: 0x2e6a0c, Func Offset: 0x11c
	// Line 594, Address: 0x2e6a10, Func Offset: 0x120
	// Line 597, Address: 0x2e6a1c, Func Offset: 0x12c
	// Line 599, Address: 0x2e6a28, Func Offset: 0x138
	// Line 602, Address: 0x2e6a34, Func Offset: 0x144
	// Line 604, Address: 0x2e6a3c, Func Offset: 0x14c
	// Line 605, Address: 0x2e6a48, Func Offset: 0x158
	// Line 607, Address: 0x2e6a54, Func Offset: 0x164
	// Line 610, Address: 0x2e6a5c, Func Offset: 0x16c
	// Line 612, Address: 0x2e6a64, Func Offset: 0x174
	// Line 613, Address: 0x2e6a68, Func Offset: 0x178
	// Line 614, Address: 0x2e6a70, Func Offset: 0x180
	// Line 617, Address: 0x2e6a7c, Func Offset: 0x18c
	// Line 619, Address: 0x2e6a80, Func Offset: 0x190
	// Line 620, Address: 0x2e6a84, Func Offset: 0x194
	// Func End, Address: 0x2e6a9c, Func Offset: 0x1ac
}

// 
// Start address: 0x2e6aa0
int OptBrightnessMain(_anon4* opt)
{
	int rtv;
	// Line 623, Address: 0x2e6aa0, Func Offset: 0
	// Line 626, Address: 0x2e6ab4, Func Offset: 0x14
	// Line 627, Address: 0x2e6abc, Func Offset: 0x1c
	// Line 629, Address: 0x2e6ae8, Func Offset: 0x48
	// Line 630, Address: 0x2e6b20, Func Offset: 0x80
	// Line 632, Address: 0x2e6b28, Func Offset: 0x88
	// Line 635, Address: 0x2e6b30, Func Offset: 0x90
	// Line 636, Address: 0x2e6b40, Func Offset: 0xa0
	// Line 638, Address: 0x2e6b48, Func Offset: 0xa8
	// Line 641, Address: 0x2e6b50, Func Offset: 0xb0
	// Line 642, Address: 0x2e6b90, Func Offset: 0xf0
	// Line 643, Address: 0x2e6b9c, Func Offset: 0xfc
	// Line 644, Address: 0x2e6ba4, Func Offset: 0x104
	// Line 645, Address: 0x2e6ba8, Func Offset: 0x108
	// Line 648, Address: 0x2e6bac, Func Offset: 0x10c
	// Line 649, Address: 0x2e6bb0, Func Offset: 0x110
	// Line 651, Address: 0x2e6bb8, Func Offset: 0x118
	// Line 652, Address: 0x2e6bc0, Func Offset: 0x120
	// Line 653, Address: 0x2e6bc8, Func Offset: 0x128
	// Line 655, Address: 0x2e6bd4, Func Offset: 0x134
	// Line 656, Address: 0x2e6bd8, Func Offset: 0x138
	// Func End, Address: 0x2e6bec, Func Offset: 0x14c
}

// 
// Start address: 0x2e6bf0
int OptBrightnessEnd(_anon4* opt)
{
	// Line 660, Address: 0x2e6bf0, Func Offset: 0
	// Line 662, Address: 0x2e6bf4, Func Offset: 0x4
	// Line 660, Address: 0x2e6bf8, Func Offset: 0x8
	// Line 661, Address: 0x2e6c00, Func Offset: 0x10
	// Line 663, Address: 0x2e6c08, Func Offset: 0x18
	// Func End, Address: 0x2e6c10, Func Offset: 0x20
}

// 
// Start address: 0x2e6c10
int OptBrightness(_anon4* opt)
{
	int rtv;
	// Line 668, Address: 0x2e6c10, Func Offset: 0
	// Line 671, Address: 0x2e6c24, Func Offset: 0x14
	// Line 672, Address: 0x2e6c2c, Func Offset: 0x1c
	// Line 674, Address: 0x2e6c58, Func Offset: 0x48
	// Line 675, Address: 0x2e6c60, Func Offset: 0x50
	// Line 676, Address: 0x2e6c68, Func Offset: 0x58
	// Line 678, Address: 0x2e6c70, Func Offset: 0x60
	// Line 679, Address: 0x2e6c80, Func Offset: 0x70
	// Line 681, Address: 0x2e6c88, Func Offset: 0x78
	// Line 683, Address: 0x2e6c90, Func Offset: 0x80
	// Line 684, Address: 0x2e6ca0, Func Offset: 0x90
	// Line 687, Address: 0x2e6ca4, Func Offset: 0x94
	// Line 688, Address: 0x2e6ca8, Func Offset: 0x98
	// Line 690, Address: 0x2e6cb0, Func Offset: 0xa0
	// Line 691, Address: 0x2e6cb4, Func Offset: 0xa4
	// Func End, Address: 0x2e6cc8, Func Offset: 0xb8
}

// 
// Start address: 0x2e6cd0
void OptScreenToSystem(int x, int y)
{
	// Line 708, Address: 0x2e6cd0, Func Offset: 0
	// Func End, Address: 0x2e6cd8, Func Offset: 0x8
}

// 
// Start address: 0x2e6ce0
void draw_black()
{
	_anon8 img;
	char flag;
	// Line 714, Address: 0x2e6ce0, Func Offset: 0
	// Line 718, Address: 0x2e6ce4, Func Offset: 0x4
	// Line 714, Address: 0x2e6ce8, Func Offset: 0x8
	// Line 718, Address: 0x2e6cf0, Func Offset: 0x10
	// Line 719, Address: 0x2e6cfc, Func Offset: 0x1c
	// Line 720, Address: 0x2e6d08, Func Offset: 0x28
	// Line 721, Address: 0x2e6d24, Func Offset: 0x44
	// Line 724, Address: 0x2e6d58, Func Offset: 0x78
	// Line 725, Address: 0x2e6d6c, Func Offset: 0x8c
	// Line 726, Address: 0x2e6d70, Func Offset: 0x90
	// Line 727, Address: 0x2e6d80, Func Offset: 0xa0
	// Func End, Address: 0x2e6d90, Func Offset: 0xb0
}

// 
// Start address: 0x2e6d90
void draw_grid()
{
	int i;
	int x;
	int y;
	_anon8 box;
	_anon6 img;
	char flag;
	// Line 732, Address: 0x2e6d90, Func Offset: 0
	// Line 738, Address: 0x2e6d94, Func Offset: 0x4
	// Line 732, Address: 0x2e6d98, Func Offset: 0x8
	// Line 738, Address: 0x2e6da8, Func Offset: 0x18
	// Line 739, Address: 0x2e6db4, Func Offset: 0x24
	// Line 740, Address: 0x2e6dc0, Func Offset: 0x30
	// Line 741, Address: 0x2e6dd4, Func Offset: 0x44
	// Line 743, Address: 0x2e6dec, Func Offset: 0x5c
	// Line 744, Address: 0x2e6dfc, Func Offset: 0x6c
	// Line 745, Address: 0x2e6e1c, Func Offset: 0x8c
	// Line 749, Address: 0x2e6e30, Func Offset: 0xa0
	// Line 750, Address: 0x2e6e78, Func Offset: 0xe8
	// Line 752, Address: 0x2e6eb0, Func Offset: 0x120
	// Line 750, Address: 0x2e6eb4, Func Offset: 0x124
	// Line 752, Address: 0x2e6eb8, Func Offset: 0x128
	// Line 750, Address: 0x2e6ebc, Func Offset: 0x12c
	// Line 752, Address: 0x2e6ec0, Func Offset: 0x130
	// Line 750, Address: 0x2e6ec8, Func Offset: 0x138
	// Line 752, Address: 0x2e6ed8, Func Offset: 0x148
	// Line 754, Address: 0x2e6ee0, Func Offset: 0x150
	// Line 757, Address: 0x2e6f14, Func Offset: 0x184
	// Line 760, Address: 0x2e6f24, Func Offset: 0x194
	// Line 763, Address: 0x2e6f3c, Func Offset: 0x1ac
	// Line 766, Address: 0x2e6f74, Func Offset: 0x1e4
	// Line 767, Address: 0x2e6f84, Func Offset: 0x1f4
	// Line 770, Address: 0x2e6fd0, Func Offset: 0x240
	// Line 771, Address: 0x2e6ff8, Func Offset: 0x268
	// Line 773, Address: 0x2e7000, Func Offset: 0x270
	// Line 771, Address: 0x2e7004, Func Offset: 0x274
	// Line 773, Address: 0x2e7008, Func Offset: 0x278
	// Line 775, Address: 0x2e701c, Func Offset: 0x28c
	// Line 778, Address: 0x2e7054, Func Offset: 0x2c4
	// Line 781, Address: 0x2e7064, Func Offset: 0x2d4
	// Line 784, Address: 0x2e707c, Func Offset: 0x2ec
	// Line 787, Address: 0x2e70c0, Func Offset: 0x330
	// Line 788, Address: 0x2e70d0, Func Offset: 0x340
	// Line 792, Address: 0x2e70f8, Func Offset: 0x368
	// Line 795, Address: 0x2e7124, Func Offset: 0x394
	// Line 798, Address: 0x2e7134, Func Offset: 0x3a4
	// Line 801, Address: 0x2e7170, Func Offset: 0x3e0
	// Line 804, Address: 0x2e7180, Func Offset: 0x3f0
	// Line 807, Address: 0x2e71ac, Func Offset: 0x41c
	// Line 810, Address: 0x2e71bc, Func Offset: 0x42c
	// Line 813, Address: 0x2e71f8, Func Offset: 0x468
	// Line 815, Address: 0x2e7208, Func Offset: 0x478
	// Func End, Address: 0x2e7220, Func Offset: 0x490
}

// 
// Start address: 0x2e7220
void OptScreenDispInfo()
{
	int x;
	int y;
	char mes[16];
	// Line 819, Address: 0x2e7220, Func Offset: 0
	// Line 821, Address: 0x2e7224, Func Offset: 0x4
	// Line 819, Address: 0x2e7228, Func Offset: 0x8
	// Line 825, Address: 0x2e722c, Func Offset: 0xc
	// Line 819, Address: 0x2e7230, Func Offset: 0x10
	// Line 821, Address: 0x2e7240, Func Offset: 0x20
	// Line 822, Address: 0x2e7244, Func Offset: 0x24
	// Line 825, Address: 0x2e724c, Func Offset: 0x2c
	// Line 828, Address: 0x2e725c, Func Offset: 0x3c
	// Line 830, Address: 0x2e7264, Func Offset: 0x44
	// Line 831, Address: 0x2e727c, Func Offset: 0x5c
	// Line 832, Address: 0x2e7294, Func Offset: 0x74
	// Line 831, Address: 0x2e729c, Func Offset: 0x7c
	// Line 832, Address: 0x2e72a0, Func Offset: 0x80
	// Line 833, Address: 0x2e72b0, Func Offset: 0x90
	// Line 836, Address: 0x2e72cc, Func Offset: 0xac
	// Line 837, Address: 0x2e72e4, Func Offset: 0xc4
	// Line 838, Address: 0x2e72fc, Func Offset: 0xdc
	// Line 837, Address: 0x2e7304, Func Offset: 0xe4
	// Line 838, Address: 0x2e7308, Func Offset: 0xe8
	// Line 839, Address: 0x2e7318, Func Offset: 0xf8
	// Line 843, Address: 0x2e7334, Func Offset: 0x114
	// Line 845, Address: 0x2e7350, Func Offset: 0x130
	// Line 846, Address: 0x2e7388, Func Offset: 0x168
	// Line 848, Address: 0x2e73a4, Func Offset: 0x184
	// Line 865, Address: 0x2e73c0, Func Offset: 0x1a0
	// Line 867, Address: 0x2e73f8, Func Offset: 0x1d8
	// Line 870, Address: 0x2e7430, Func Offset: 0x210
	// Line 875, Address: 0x2e745c, Func Offset: 0x23c
	// Func End, Address: 0x2e7478, Func Offset: 0x258
}

// 
// Start address: 0x2e7480
void OptScreenCanceled(_anon4* opt)
{
	// Line 879, Address: 0x2e7480, Func Offset: 0
	// Line 880, Address: 0x2e7484, Func Offset: 0x4
	// Line 879, Address: 0x2e7488, Func Offset: 0x8
	// Line 880, Address: 0x2e748c, Func Offset: 0xc
	// Line 881, Address: 0x2e7494, Func Offset: 0x14
	// Line 883, Address: 0x2e74a0, Func Offset: 0x20
	// Line 884, Address: 0x2e74b8, Func Offset: 0x38
	// Line 886, Address: 0x2e74cc, Func Offset: 0x4c
	// Line 887, Address: 0x2e74d4, Func Offset: 0x54
	// Func End, Address: 0x2e74e0, Func Offset: 0x60
}

// 
// Start address: 0x2e74e0
int OptScreenPosInit(_anon4* opt)
{
	// Line 891, Address: 0x2e74e0, Func Offset: 0
	// Line 892, Address: 0x2e74ec, Func Offset: 0xc
	// Line 899, Address: 0x2e74f0, Func Offset: 0x10
	// Line 891, Address: 0x2e74f4, Func Offset: 0x14
	// Line 892, Address: 0x2e7500, Func Offset: 0x20
	// Line 895, Address: 0x2e7508, Func Offset: 0x28
	// Line 897, Address: 0x2e7520, Func Offset: 0x40
	// Line 900, Address: 0x2e7524, Func Offset: 0x44
	// Func End, Address: 0x2e752c, Func Offset: 0x4c
}

// 
// Start address: 0x2e7530
int OptScreenHandle()
{
	int rtv;
	unsigned int trg;
	int x;
	int y;
	// Line 903, Address: 0x2e7530, Func Offset: 0
	// Line 906, Address: 0x2e7534, Func Offset: 0x4
	// Line 903, Address: 0x2e7538, Func Offset: 0x8
	// Line 904, Address: 0x2e7544, Func Offset: 0x14
	// Line 903, Address: 0x2e7548, Func Offset: 0x18
	// Line 906, Address: 0x2e754c, Func Offset: 0x1c
	// Line 908, Address: 0x2e7558, Func Offset: 0x28
	// Line 909, Address: 0x2e756c, Func Offset: 0x3c
	// Line 912, Address: 0x2e7574, Func Offset: 0x44
	// Line 913, Address: 0x2e7580, Func Offset: 0x50
	// Line 919, Address: 0x2e7594, Func Offset: 0x64
	// Line 921, Address: 0x2e759c, Func Offset: 0x6c
	// Line 923, Address: 0x2e75a8, Func Offset: 0x78
	// Line 928, Address: 0x2e75b4, Func Offset: 0x84
	// Line 924, Address: 0x2e75b8, Func Offset: 0x88
	// Line 925, Address: 0x2e75bc, Func Offset: 0x8c
	// Line 928, Address: 0x2e75c0, Func Offset: 0x90
	// Line 929, Address: 0x2e75c8, Func Offset: 0x98
	// Line 931, Address: 0x2e75cc, Func Offset: 0x9c
	// Line 932, Address: 0x2e75d8, Func Offset: 0xa8
	// Line 933, Address: 0x2e75e4, Func Offset: 0xb4
	// Line 936, Address: 0x2e75ec, Func Offset: 0xbc
	// Line 938, Address: 0x2e75f4, Func Offset: 0xc4
	// Line 939, Address: 0x2e7600, Func Offset: 0xd0
	// Line 940, Address: 0x2e760c, Func Offset: 0xdc
	// Line 943, Address: 0x2e7614, Func Offset: 0xe4
	// Line 945, Address: 0x2e761c, Func Offset: 0xec
	// Line 946, Address: 0x2e7620, Func Offset: 0xf0
	// Line 948, Address: 0x2e7638, Func Offset: 0x108
	// Line 949, Address: 0x2e7644, Func Offset: 0x114
	// Line 952, Address: 0x2e764c, Func Offset: 0x11c
	// Line 954, Address: 0x2e7654, Func Offset: 0x124
	// Line 955, Address: 0x2e7660, Func Offset: 0x130
	// Line 956, Address: 0x2e766c, Func Offset: 0x13c
	// Line 959, Address: 0x2e7674, Func Offset: 0x144
	// Line 961, Address: 0x2e767c, Func Offset: 0x14c
	// Line 962, Address: 0x2e7680, Func Offset: 0x150
	// Line 964, Address: 0x2e7698, Func Offset: 0x168
	// Line 965, Address: 0x2e76a8, Func Offset: 0x178
	// Line 967, Address: 0x2e76bc, Func Offset: 0x18c
	// Line 969, Address: 0x2e76c0, Func Offset: 0x190
	// Line 970, Address: 0x2e76c4, Func Offset: 0x194
	// Func End, Address: 0x2e76e0, Func Offset: 0x1b0
}

// 
// Start address: 0x2e76e0
int OptScreenPosMain(_anon4* opt)
{
	int rtv;
	// Line 973, Address: 0x2e76e0, Func Offset: 0
	// Line 976, Address: 0x2e76f4, Func Offset: 0x14
	// Line 977, Address: 0x2e76fc, Func Offset: 0x1c
	// Line 979, Address: 0x2e7728, Func Offset: 0x48
	// Line 980, Address: 0x2e7760, Func Offset: 0x80
	// Line 982, Address: 0x2e7768, Func Offset: 0x88
	// Line 985, Address: 0x2e7770, Func Offset: 0x90
	// Line 986, Address: 0x2e7780, Func Offset: 0xa0
	// Line 988, Address: 0x2e7788, Func Offset: 0xa8
	// Line 991, Address: 0x2e7790, Func Offset: 0xb0
	// Line 992, Address: 0x2e77d0, Func Offset: 0xf0
	// Line 993, Address: 0x2e77dc, Func Offset: 0xfc
	// Line 994, Address: 0x2e77e4, Func Offset: 0x104
	// Line 995, Address: 0x2e77e8, Func Offset: 0x108
	// Line 998, Address: 0x2e77ec, Func Offset: 0x10c
	// Line 999, Address: 0x2e77f0, Func Offset: 0x110
	// Line 1001, Address: 0x2e77f8, Func Offset: 0x118
	// Line 1002, Address: 0x2e7800, Func Offset: 0x120
	// Line 1003, Address: 0x2e7808, Func Offset: 0x128
	// Line 1004, Address: 0x2e7810, Func Offset: 0x130
	// Line 1006, Address: 0x2e781c, Func Offset: 0x13c
	// Line 1007, Address: 0x2e7820, Func Offset: 0x140
	// Func End, Address: 0x2e7834, Func Offset: 0x154
}

// 
// Start address: 0x2e7840
int OptScreenPosEnd(_anon4* opt)
{
	// Line 1011, Address: 0x2e7840, Func Offset: 0
	// Line 1013, Address: 0x2e7844, Func Offset: 0x4
	// Line 1011, Address: 0x2e7848, Func Offset: 0x8
	// Line 1012, Address: 0x2e7850, Func Offset: 0x10
	// Line 1014, Address: 0x2e7858, Func Offset: 0x18
	// Func End, Address: 0x2e7860, Func Offset: 0x20
}

// 
// Start address: 0x2e7860
int OptScreenPos(_anon4* opt)
{
	int rtv;
	// Line 1018, Address: 0x2e7860, Func Offset: 0
	// Line 1021, Address: 0x2e7874, Func Offset: 0x14
	// Line 1022, Address: 0x2e787c, Func Offset: 0x1c
	// Line 1024, Address: 0x2e78a8, Func Offset: 0x48
	// Line 1025, Address: 0x2e78b0, Func Offset: 0x50
	// Line 1026, Address: 0x2e78b8, Func Offset: 0x58
	// Line 1028, Address: 0x2e78c0, Func Offset: 0x60
	// Line 1029, Address: 0x2e78d0, Func Offset: 0x70
	// Line 1031, Address: 0x2e78d8, Func Offset: 0x78
	// Line 1033, Address: 0x2e78e0, Func Offset: 0x80
	// Line 1034, Address: 0x2e78f0, Func Offset: 0x90
	// Line 1037, Address: 0x2e78f4, Func Offset: 0x94
	// Line 1038, Address: 0x2e78f8, Func Offset: 0x98
	// Line 1040, Address: 0x2e7900, Func Offset: 0xa0
	// Line 1041, Address: 0x2e7904, Func Offset: 0xa4
	// Func End, Address: 0x2e7918, Func Offset: 0xb8
}

