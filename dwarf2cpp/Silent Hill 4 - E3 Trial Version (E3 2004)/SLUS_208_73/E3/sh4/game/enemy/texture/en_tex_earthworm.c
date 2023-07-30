typedef struct EarthwormTexParameter;
typedef struct EarthwormTexWork;
typedef struct EarthwormTexDrawData;
typedef struct _anon0;
typedef struct sgSpkWork;

typedef void(*type_1)(_anon0*, int, int, float*);

typedef unsigned char type_0[17216];
typedef float type_2[2];
typedef float type_3[2];
typedef short type_4[10];
typedef short type_5[10];
typedef short type_6[20];
typedef unsigned char type_7[17];
typedef unsigned char type_8[17][20];
typedef float type_9[8];
typedef float type_10[8];
typedef float type_11[8];
typedef float type_12[8];
typedef float type_13[8];
typedef float type_14[8];
typedef float type_15[16];
typedef float type_16[16][16];
typedef float type_17[16];
typedef float type_18[16][16];

struct EarthwormTexParameter
{
	float flesh_speed[8];
	float flesh_accel[8];
	float flesh_u[8];
	int flesh_base_u;
	float skin_speed[8];
	float skin_accel[8];
	float skin_u[8];
	int skin_base_u;
	float bv_alpha[16][16];
	float bv_alpha_accel[16][16];
};

struct EarthwormTexWork
{
	unsigned char packet[17216];
	EarthwormTexParameter parameter;
	unsigned long* packet_top;
	int packet_size;
	<unknown fundamental type (0xa510)>* flesh_pk_top;
	<unknown fundamental type (0xa510)>* bv_pk_top;
	<unknown fundamental type (0xa510)>* skin_pk_top;
	void* modeldata;
	EarthwormTexDrawData* tmpwork;
	unsigned long tex0;
};

struct EarthwormTexDrawData
{
	short flesh_x[10];
	short skin_x[10];
	short bv_x[20];
	unsigned char bv_alpha[17][20];
};

struct _anon0
{
	unsigned long tex0;
	unsigned long clamp;
};

struct sgSpkWork
{
	<unknown fundamental type (0xa510)>* packet;
	unsigned int packet_max;
	unsigned long* pk_last;
	unsigned long* pos;
	unsigned long* pgiftag;
	unsigned long giftag_b;
};

EarthwormTexWork* earthworm_tex_work;
void(*texture_load)(_anon0*, int, int, float*);

void EnemyTexEarthwormConstruct();
void EnemyTexEarthwormDestruct();
void* EnemyTexEarthwormTexData();
void* EnemyTexEarthwormClutData();
void* EnemyTexEarthworm2TexData();
void* EnemyTexEarthworm2ClutData();
void* EnemyTexEarthworm3TexData();
void* EnemyTexEarthworm3ClutData();
void* EnemyTexEarthworm4TexData();
void* EnemyTexEarthworm4ClutData();
void texture_load(_anon0* param, int texture_no);
void EnemyTexEarthwormSetModelData(void* model);
void send_to_spr(void* madr, void* sadr, unsigned int size);
void send_from_spr(void* sadr, void* madr, unsigned int size);
void EnemyTexEarthwormReset();
void EnemyTexEarthwormMove();
void calc_tex_pos();
void post_draw();
void EnemyTexEarthwormLoad();
void make_static_packet();
void draw_tex();

// 
// Start address: 0x1fc1e0
void EnemyTexEarthwormConstruct()
{
	// Line 108, Address: 0x1fc1e0, Func Offset: 0
	// Line 110, Address: 0x1fc1e8, Func Offset: 0x8
	// Line 111, Address: 0x1fc200, Func Offset: 0x20
	// Line 112, Address: 0x1fc208, Func Offset: 0x28
	// Line 114, Address: 0x1fc210, Func Offset: 0x30
	// Line 116, Address: 0x1fc218, Func Offset: 0x38
	// Line 118, Address: 0x1fc22c, Func Offset: 0x4c
	// Func End, Address: 0x1fc23c, Func Offset: 0x5c
}

// 
// Start address: 0x1fc240
void EnemyTexEarthwormDestruct()
{
	// Line 121, Address: 0x1fc240, Func Offset: 0
	// Line 122, Address: 0x1fc250, Func Offset: 0x10
	// Line 123, Address: 0x1fc258, Func Offset: 0x18
	// Line 124, Address: 0x1fc260, Func Offset: 0x20
	// Line 125, Address: 0x1fc264, Func Offset: 0x24
	// Line 127, Address: 0x1fc270, Func Offset: 0x30
	// Func End, Address: 0x1fc27c, Func Offset: 0x3c
}

// 
// Start address: 0x1fc280
void* EnemyTexEarthwormTexData()
{
	// Line 131, Address: 0x1fc280, Func Offset: 0
	// Func End, Address: 0x1fc290, Func Offset: 0x10
}

// 
// Start address: 0x1fc290
void* EnemyTexEarthwormClutData()
{
	// Line 136, Address: 0x1fc290, Func Offset: 0
	// Func End, Address: 0x1fc2a0, Func Offset: 0x10
}

// 
// Start address: 0x1fc2a0
void* EnemyTexEarthworm2TexData()
{
	// Line 141, Address: 0x1fc2a0, Func Offset: 0
	// Func End, Address: 0x1fc2b0, Func Offset: 0x10
}

// 
// Start address: 0x1fc2b0
void* EnemyTexEarthworm2ClutData()
{
	// Line 146, Address: 0x1fc2b0, Func Offset: 0
	// Func End, Address: 0x1fc2c0, Func Offset: 0x10
}

// 
// Start address: 0x1fc2c0
void* EnemyTexEarthworm3TexData()
{
	// Line 151, Address: 0x1fc2c0, Func Offset: 0
	// Func End, Address: 0x1fc2d0, Func Offset: 0x10
}

// 
// Start address: 0x1fc2d0
void* EnemyTexEarthworm3ClutData()
{
	// Line 156, Address: 0x1fc2d0, Func Offset: 0
	// Func End, Address: 0x1fc2e0, Func Offset: 0x10
}

// 
// Start address: 0x1fc2e0
void* EnemyTexEarthworm4TexData()
{
	// Line 161, Address: 0x1fc2e0, Func Offset: 0
	// Func End, Address: 0x1fc2f0, Func Offset: 0x10
}

// 
// Start address: 0x1fc2f0
void* EnemyTexEarthworm4ClutData()
{
	// Line 166, Address: 0x1fc2f0, Func Offset: 0
	// Func End, Address: 0x1fc300, Func Offset: 0x10
}

// 
// Start address: 0x1fc300
void texture_load(_anon0* param, int texture_no)
{
	// Line 171, Address: 0x1fc300, Func Offset: 0
	// Line 172, Address: 0x1fc304, Func Offset: 0x4
	// Line 171, Address: 0x1fc308, Func Offset: 0x8
	// Line 172, Address: 0x1fc310, Func Offset: 0x10
	// Line 174, Address: 0x1fc328, Func Offset: 0x28
	// Line 176, Address: 0x1fc334, Func Offset: 0x34
	// Line 177, Address: 0x1fc33c, Func Offset: 0x3c
	// Line 178, Address: 0x1fc340, Func Offset: 0x40
	// Line 179, Address: 0x1fc348, Func Offset: 0x48
	// Line 180, Address: 0x1fc354, Func Offset: 0x54
	// Line 182, Address: 0x1fc35c, Func Offset: 0x5c
	// Line 183, Address: 0x1fc360, Func Offset: 0x60
	// Func End, Address: 0x1fc370, Func Offset: 0x70
}

// 
// Start address: 0x1fc370
void EnemyTexEarthwormSetModelData(void* model)
{
	// Line 186, Address: 0x1fc370, Func Offset: 0
	// Line 187, Address: 0x1fc380, Func Offset: 0x10
	// Line 188, Address: 0x1fc388, Func Offset: 0x18
	// Line 189, Address: 0x1fc38c, Func Offset: 0x1c
	// Line 190, Address: 0x1fc394, Func Offset: 0x24
	// Func End, Address: 0x1fc3a4, Func Offset: 0x34
}

// 
// Start address: 0x1fc3b0
void send_to_spr(void* madr, void* sadr, unsigned int size)
{
	// Line 193, Address: 0x1fc3b0, Func Offset: 0
	// Line 194, Address: 0x1fc3d0, Func Offset: 0x20
	// Line 195, Address: 0x1fc3d8, Func Offset: 0x28
	// Line 197, Address: 0x1fc3dc, Func Offset: 0x2c
	// Line 195, Address: 0x1fc3e0, Func Offset: 0x30
	// Line 196, Address: 0x1fc3ec, Func Offset: 0x3c
	// Line 197, Address: 0x1fc3f4, Func Offset: 0x44
	// Line 196, Address: 0x1fc3f8, Func Offset: 0x48
	// Line 198, Address: 0x1fc3fc, Func Offset: 0x4c
	// Line 197, Address: 0x1fc400, Func Offset: 0x50
	// Line 199, Address: 0x1fc404, Func Offset: 0x54
	// Line 197, Address: 0x1fc408, Func Offset: 0x58
	// Line 198, Address: 0x1fc40c, Func Offset: 0x5c
	// Line 199, Address: 0x1fc410, Func Offset: 0x60
	// Line 200, Address: 0x1fc418, Func Offset: 0x68
	// Func End, Address: 0x1fc430, Func Offset: 0x80
}

// 
// Start address: 0x1fc430
void send_from_spr(void* sadr, void* madr, unsigned int size)
{
	// Line 203, Address: 0x1fc430, Func Offset: 0
	// Line 204, Address: 0x1fc450, Func Offset: 0x20
	// Line 205, Address: 0x1fc458, Func Offset: 0x28
	// Line 207, Address: 0x1fc45c, Func Offset: 0x2c
	// Line 205, Address: 0x1fc460, Func Offset: 0x30
	// Line 206, Address: 0x1fc46c, Func Offset: 0x3c
	// Line 207, Address: 0x1fc474, Func Offset: 0x44
	// Line 206, Address: 0x1fc478, Func Offset: 0x48
	// Line 208, Address: 0x1fc47c, Func Offset: 0x4c
	// Line 207, Address: 0x1fc480, Func Offset: 0x50
	// Line 209, Address: 0x1fc484, Func Offset: 0x54
	// Line 207, Address: 0x1fc488, Func Offset: 0x58
	// Line 208, Address: 0x1fc48c, Func Offset: 0x5c
	// Line 209, Address: 0x1fc490, Func Offset: 0x60
	// Line 210, Address: 0x1fc498, Func Offset: 0x68
	// Func End, Address: 0x1fc4b0, Func Offset: 0x80
}

// 
// Start address: 0x1fc4b0
void EnemyTexEarthwormReset()
{
	EarthwormTexParameter* pp;
	int u;
	int v;
	// Line 213, Address: 0x1fc4b0, Func Offset: 0
	// Line 216, Address: 0x1fc4b4, Func Offset: 0x4
	// Line 213, Address: 0x1fc4b8, Func Offset: 0x8
	// Line 216, Address: 0x1fc4c0, Func Offset: 0x10
	// Line 217, Address: 0x1fc4cc, Func Offset: 0x1c
	// Line 218, Address: 0x1fc4d0, Func Offset: 0x20
	// Line 219, Address: 0x1fc4dc, Func Offset: 0x2c
	// Line 221, Address: 0x1fc4e0, Func Offset: 0x30
	// Line 219, Address: 0x1fc4e4, Func Offset: 0x34
	// Line 221, Address: 0x1fc4f0, Func Offset: 0x40
	// Line 222, Address: 0x1fc510, Func Offset: 0x60
	// Line 223, Address: 0x1fc520, Func Offset: 0x70
	// Line 224, Address: 0x1fc528, Func Offset: 0x78
	// Line 225, Address: 0x1fc530, Func Offset: 0x80
	// Line 222, Address: 0x1fc534, Func Offset: 0x84
	// Line 223, Address: 0x1fc53c, Func Offset: 0x8c
	// Line 224, Address: 0x1fc540, Func Offset: 0x90
	// Line 225, Address: 0x1fc544, Func Offset: 0x94
	// Line 228, Address: 0x1fc554, Func Offset: 0xa4
	// Line 226, Address: 0x1fc55c, Func Offset: 0xac
	// Line 228, Address: 0x1fc560, Func Offset: 0xb0
	// Line 229, Address: 0x1fc578, Func Offset: 0xc8
	// Line 230, Address: 0x1fc584, Func Offset: 0xd4
	// Line 229, Address: 0x1fc588, Func Offset: 0xd8
	// Line 230, Address: 0x1fc58c, Func Offset: 0xdc
	// Line 231, Address: 0x1fc590, Func Offset: 0xe0
	// Line 232, Address: 0x1fc598, Func Offset: 0xe8
	// Line 229, Address: 0x1fc59c, Func Offset: 0xec
	// Line 230, Address: 0x1fc5a4, Func Offset: 0xf4
	// Line 231, Address: 0x1fc5a8, Func Offset: 0xf8
	// Line 232, Address: 0x1fc5ac, Func Offset: 0xfc
	// Line 233, Address: 0x1fc5bc, Func Offset: 0x10c
	// Line 235, Address: 0x1fc5c0, Func Offset: 0x110
	// Line 236, Address: 0x1fc5d0, Func Offset: 0x120
	// Line 237, Address: 0x1fc5e0, Func Offset: 0x130
	// Line 239, Address: 0x1fc5e8, Func Offset: 0x138
	// Line 237, Address: 0x1fc5ec, Func Offset: 0x13c
	// Line 238, Address: 0x1fc5f0, Func Offset: 0x140
	// Line 239, Address: 0x1fc5f4, Func Offset: 0x144
	// Line 240, Address: 0x1fc604, Func Offset: 0x154
	// Line 241, Address: 0x1fc614, Func Offset: 0x164
	// Func End, Address: 0x1fc628, Func Offset: 0x178
}

// 
// Start address: 0x1fc630
void EnemyTexEarthwormMove()
{
	EarthwormTexParameter* pp;
	void* tmp_buff;
	int u;
	int v;
	int ut;
	float dt;
	float s;
	float t;
	float a;
	float r;
	float ab[2];
	float acb[2];
	float* tmp_buff2;
	float* bu;
	float* bu_p;
	float* bu_n;
	int v0;
	int v1;
	float d;
	// Line 244, Address: 0x1fc630, Func Offset: 0
	// Line 251, Address: 0x1fc634, Func Offset: 0x4
	// Line 244, Address: 0x1fc638, Func Offset: 0x8
	// Line 251, Address: 0x1fc658, Func Offset: 0x28
	// Line 252, Address: 0x1fc664, Func Offset: 0x34
	// Line 255, Address: 0x1fc670, Func Offset: 0x40
	// Line 252, Address: 0x1fc674, Func Offset: 0x44
	// Line 255, Address: 0x1fc678, Func Offset: 0x48
	// Line 252, Address: 0x1fc684, Func Offset: 0x54
	// Line 255, Address: 0x1fc688, Func Offset: 0x58
	// Line 256, Address: 0x1fc69c, Func Offset: 0x6c
	// Line 257, Address: 0x1fc6a8, Func Offset: 0x78
	// Line 258, Address: 0x1fc6b4, Func Offset: 0x84
	// Line 262, Address: 0x1fc70c, Func Offset: 0xdc
	// Line 263, Address: 0x1fc718, Func Offset: 0xe8
	// Line 264, Address: 0x1fc720, Func Offset: 0xf0
	// Line 266, Address: 0x1fc76c, Func Offset: 0x13c
	// Line 267, Address: 0x1fc788, Func Offset: 0x158
	// Line 269, Address: 0x1fc78c, Func Offset: 0x15c
	// Line 271, Address: 0x1fc7b4, Func Offset: 0x184
	// Line 272, Address: 0x1fc7b8, Func Offset: 0x188
	// Line 273, Address: 0x1fc7bc, Func Offset: 0x18c
	// Line 276, Address: 0x1fc7c0, Func Offset: 0x190
	// Line 274, Address: 0x1fc7c4, Func Offset: 0x194
	// Line 276, Address: 0x1fc7c8, Func Offset: 0x198
	// Line 275, Address: 0x1fc7cc, Func Offset: 0x19c
	// Line 274, Address: 0x1fc7d0, Func Offset: 0x1a0
	// Line 275, Address: 0x1fc7d8, Func Offset: 0x1a8
	// Line 276, Address: 0x1fc7dc, Func Offset: 0x1ac
	// Line 277, Address: 0x1fc7f0, Func Offset: 0x1c0
	// Line 278, Address: 0x1fc804, Func Offset: 0x1d4
	// Line 279, Address: 0x1fc80c, Func Offset: 0x1dc
	// Line 280, Address: 0x1fc81c, Func Offset: 0x1ec
	// Line 281, Address: 0x1fc820, Func Offset: 0x1f0
	// Line 282, Address: 0x1fc830, Func Offset: 0x200
	// Line 283, Address: 0x1fc834, Func Offset: 0x204
	// Line 284, Address: 0x1fc838, Func Offset: 0x208
	// Line 285, Address: 0x1fc850, Func Offset: 0x220
	// Line 286, Address: 0x1fc860, Func Offset: 0x230
	// Line 285, Address: 0x1fc864, Func Offset: 0x234
	// Line 286, Address: 0x1fc868, Func Offset: 0x238
	// Line 287, Address: 0x1fc870, Func Offset: 0x240
	// Line 289, Address: 0x1fc880, Func Offset: 0x250
	// Line 290, Address: 0x1fc890, Func Offset: 0x260
	// Line 292, Address: 0x1fc894, Func Offset: 0x264
	// Line 294, Address: 0x1fc8ac, Func Offset: 0x27c
	// Line 296, Address: 0x1fc8c0, Func Offset: 0x290
	// Line 303, Address: 0x1fc8c4, Func Offset: 0x294
	// Line 297, Address: 0x1fc8c8, Func Offset: 0x298
	// Line 299, Address: 0x1fc8cc, Func Offset: 0x29c
	// Line 303, Address: 0x1fc8d0, Func Offset: 0x2a0
	// Line 299, Address: 0x1fc8dc, Func Offset: 0x2ac
	// Line 300, Address: 0x1fc8e0, Func Offset: 0x2b0
	// Line 301, Address: 0x1fc8e8, Func Offset: 0x2b8
	// Line 303, Address: 0x1fc980, Func Offset: 0x350
	// Line 304, Address: 0x1fc984, Func Offset: 0x354
	// Line 305, Address: 0x1fc988, Func Offset: 0x358
	// Line 306, Address: 0x1fc98c, Func Offset: 0x35c
	// Line 307, Address: 0x1fc9ac, Func Offset: 0x37c
	// Line 315, Address: 0x1fc9b4, Func Offset: 0x384
	// Line 319, Address: 0x1fc9b8, Func Offset: 0x388
	// Line 307, Address: 0x1fc9c4, Func Offset: 0x394
	// Line 309, Address: 0x1fc9cc, Func Offset: 0x39c
	// Line 312, Address: 0x1fc9d0, Func Offset: 0x3a0
	// Line 309, Address: 0x1fc9d4, Func Offset: 0x3a4
	// Line 310, Address: 0x1fc9d8, Func Offset: 0x3a8
	// Line 315, Address: 0x1fc9f0, Func Offset: 0x3c0
	// Line 313, Address: 0x1fc9f4, Func Offset: 0x3c4
	// Line 315, Address: 0x1fc9f8, Func Offset: 0x3c8
	// Line 313, Address: 0x1fc9fc, Func Offset: 0x3cc
	// Line 315, Address: 0x1fca00, Func Offset: 0x3d0
	// Line 319, Address: 0x1fca70, Func Offset: 0x440
	// Line 315, Address: 0x1fca74, Func Offset: 0x444
	// Line 324, Address: 0x1fca78, Func Offset: 0x448
	// Line 321, Address: 0x1fca7c, Func Offset: 0x44c
	// Line 324, Address: 0x1fca80, Func Offset: 0x450
	// Line 319, Address: 0x1fca84, Func Offset: 0x454
	// Line 321, Address: 0x1fca88, Func Offset: 0x458
	// Line 324, Address: 0x1fca9c, Func Offset: 0x46c
	// Line 325, Address: 0x1fcaa4, Func Offset: 0x474
	// Line 334, Address: 0x1fcacc, Func Offset: 0x49c
	// Line 327, Address: 0x1fcad0, Func Offset: 0x4a0
	// Line 328, Address: 0x1fcad4, Func Offset: 0x4a4
	// Line 330, Address: 0x1fcad8, Func Offset: 0x4a8
	// Line 331, Address: 0x1fcae0, Func Offset: 0x4b0
	// Line 332, Address: 0x1fcae8, Func Offset: 0x4b8
	// Line 334, Address: 0x1fcb80, Func Offset: 0x550
	// Line 335, Address: 0x1fcb84, Func Offset: 0x554
	// Line 336, Address: 0x1fcb88, Func Offset: 0x558
	// Line 337, Address: 0x1fcb8c, Func Offset: 0x55c
	// Line 338, Address: 0x1fcbac, Func Offset: 0x57c
	// Line 348, Address: 0x1fcbb4, Func Offset: 0x584
	// Line 352, Address: 0x1fcbb8, Func Offset: 0x588
	// Line 338, Address: 0x1fcbc4, Func Offset: 0x594
	// Line 340, Address: 0x1fcbcc, Func Offset: 0x59c
	// Line 345, Address: 0x1fcbd0, Func Offset: 0x5a0
	// Line 340, Address: 0x1fcbf0, Func Offset: 0x5c0
	// Line 342, Address: 0x1fcbf4, Func Offset: 0x5c4
	// Line 348, Address: 0x1fcc10, Func Offset: 0x5e0
	// Line 346, Address: 0x1fcc14, Func Offset: 0x5e4
	// Line 348, Address: 0x1fcc18, Func Offset: 0x5e8
	// Line 346, Address: 0x1fcc1c, Func Offset: 0x5ec
	// Line 348, Address: 0x1fcc20, Func Offset: 0x5f0
	// Line 352, Address: 0x1fcca8, Func Offset: 0x678
	// Line 348, Address: 0x1fccac, Func Offset: 0x67c
	// Line 355, Address: 0x1fccb0, Func Offset: 0x680
	// Line 353, Address: 0x1fccb4, Func Offset: 0x684
	// Line 355, Address: 0x1fccb8, Func Offset: 0x688
	// Line 352, Address: 0x1fccbc, Func Offset: 0x68c
	// Line 353, Address: 0x1fccc0, Func Offset: 0x690
	// Line 355, Address: 0x1fccd4, Func Offset: 0x6a4
	// Line 356, Address: 0x1fccdc, Func Offset: 0x6ac
	// Line 359, Address: 0x1fcce0, Func Offset: 0x6b0
	// Line 360, Address: 0x1fccec, Func Offset: 0x6bc
	// Line 361, Address: 0x1fccf8, Func Offset: 0x6c8
	// Line 363, Address: 0x1fcd3c, Func Offset: 0x70c
	// Line 364, Address: 0x1fcd58, Func Offset: 0x728
	// Line 366, Address: 0x1fcd5c, Func Offset: 0x72c
	// Line 368, Address: 0x1fcd84, Func Offset: 0x754
	// Line 369, Address: 0x1fcd88, Func Offset: 0x758
	// Line 370, Address: 0x1fcd8c, Func Offset: 0x75c
	// Line 373, Address: 0x1fcd90, Func Offset: 0x760
	// Line 371, Address: 0x1fcd94, Func Offset: 0x764
	// Line 373, Address: 0x1fcd98, Func Offset: 0x768
	// Line 372, Address: 0x1fcd9c, Func Offset: 0x76c
	// Line 371, Address: 0x1fcda0, Func Offset: 0x770
	// Line 372, Address: 0x1fcda8, Func Offset: 0x778
	// Line 373, Address: 0x1fcdac, Func Offset: 0x77c
	// Line 374, Address: 0x1fcdc0, Func Offset: 0x790
	// Line 375, Address: 0x1fcdd4, Func Offset: 0x7a4
	// Line 376, Address: 0x1fcddc, Func Offset: 0x7ac
	// Line 377, Address: 0x1fcdec, Func Offset: 0x7bc
	// Line 378, Address: 0x1fcdf0, Func Offset: 0x7c0
	// Line 379, Address: 0x1fce00, Func Offset: 0x7d0
	// Line 380, Address: 0x1fce04, Func Offset: 0x7d4
	// Line 381, Address: 0x1fce08, Func Offset: 0x7d8
	// Line 382, Address: 0x1fce20, Func Offset: 0x7f0
	// Line 383, Address: 0x1fce30, Func Offset: 0x800
	// Line 382, Address: 0x1fce34, Func Offset: 0x804
	// Line 383, Address: 0x1fce38, Func Offset: 0x808
	// Line 384, Address: 0x1fce40, Func Offset: 0x810
	// Line 386, Address: 0x1fce50, Func Offset: 0x820
	// Line 387, Address: 0x1fce60, Func Offset: 0x830
	// Line 389, Address: 0x1fce64, Func Offset: 0x834
	// Line 391, Address: 0x1fce7c, Func Offset: 0x84c
	// Line 393, Address: 0x1fce90, Func Offset: 0x860
	// Line 400, Address: 0x1fce94, Func Offset: 0x864
	// Line 394, Address: 0x1fce98, Func Offset: 0x868
	// Line 396, Address: 0x1fce9c, Func Offset: 0x86c
	// Line 400, Address: 0x1fcea0, Func Offset: 0x870
	// Line 396, Address: 0x1fceac, Func Offset: 0x87c
	// Line 397, Address: 0x1fceb0, Func Offset: 0x880
	// Line 398, Address: 0x1fceb8, Func Offset: 0x888
	// Line 400, Address: 0x1fcf50, Func Offset: 0x920
	// Line 401, Address: 0x1fcf54, Func Offset: 0x924
	// Line 402, Address: 0x1fcf58, Func Offset: 0x928
	// Line 403, Address: 0x1fcf5c, Func Offset: 0x92c
	// Line 404, Address: 0x1fcf78, Func Offset: 0x948
	// Line 413, Address: 0x1fcf9c, Func Offset: 0x96c
	// Line 406, Address: 0x1fcfa0, Func Offset: 0x970
	// Line 407, Address: 0x1fcfa4, Func Offset: 0x974
	// Line 409, Address: 0x1fcfa8, Func Offset: 0x978
	// Line 410, Address: 0x1fcfb0, Func Offset: 0x980
	// Line 411, Address: 0x1fcfb8, Func Offset: 0x988
	// Line 413, Address: 0x1fd050, Func Offset: 0xa20
	// Line 414, Address: 0x1fd054, Func Offset: 0xa24
	// Line 415, Address: 0x1fd058, Func Offset: 0xa28
	// Line 416, Address: 0x1fd05c, Func Offset: 0xa2c
	// Line 417, Address: 0x1fd07c, Func Offset: 0xa4c
	// Line 420, Address: 0x1fd080, Func Offset: 0xa50
	// Line 421, Address: 0x1fd088, Func Offset: 0xa58
	// Line 422, Address: 0x1fd090, Func Offset: 0xa60
	// Line 424, Address: 0x1fd0d4, Func Offset: 0xaa4
	// Line 425, Address: 0x1fd0e8, Func Offset: 0xab8
	// Line 426, Address: 0x1fd0f4, Func Offset: 0xac4
	// Line 425, Address: 0x1fd0f8, Func Offset: 0xac8
	// Line 427, Address: 0x1fd0fc, Func Offset: 0xacc
	// Line 429, Address: 0x1fd110, Func Offset: 0xae0
	// Line 430, Address: 0x1fd130, Func Offset: 0xb00
	// Line 431, Address: 0x1fd134, Func Offset: 0xb04
	// Line 432, Address: 0x1fd144, Func Offset: 0xb14
	// Line 435, Address: 0x1fd154, Func Offset: 0xb24
	// Line 436, Address: 0x1fd168, Func Offset: 0xb38
	// Line 441, Address: 0x1fd178, Func Offset: 0xb48
	// Line 444, Address: 0x1fd188, Func Offset: 0xb58
	// Line 446, Address: 0x1fd198, Func Offset: 0xb68
	// Line 447, Address: 0x1fd19c, Func Offset: 0xb6c
	// Line 448, Address: 0x1fd1a0, Func Offset: 0xb70
	// Line 455, Address: 0x1fd1a8, Func Offset: 0xb78
	// Line 460, Address: 0x1fd1ac, Func Offset: 0xb7c
	// Line 455, Address: 0x1fd1b0, Func Offset: 0xb80
	// Line 460, Address: 0x1fd1b4, Func Offset: 0xb84
	// Line 449, Address: 0x1fd1b8, Func Offset: 0xb88
	// Line 451, Address: 0x1fd1bc, Func Offset: 0xb8c
	// Line 450, Address: 0x1fd1c0, Func Offset: 0xb90
	// Line 451, Address: 0x1fd1c4, Func Offset: 0xb94
	// Line 452, Address: 0x1fd1dc, Func Offset: 0xbac
	// Line 451, Address: 0x1fd1e0, Func Offset: 0xbb0
	// Line 453, Address: 0x1fd1f0, Func Offset: 0xbc0
	// Line 454, Address: 0x1fd208, Func Offset: 0xbd8
	// Line 455, Address: 0x1fd220, Func Offset: 0xbf0
	// Line 467, Address: 0x1fd22c, Func Offset: 0xbfc
	// Line 457, Address: 0x1fd230, Func Offset: 0xc00
	// Line 458, Address: 0x1fd234, Func Offset: 0xc04
	// Line 456, Address: 0x1fd238, Func Offset: 0xc08
	// Line 467, Address: 0x1fd23c, Func Offset: 0xc0c
	// Line 457, Address: 0x1fd240, Func Offset: 0xc10
	// Line 455, Address: 0x1fd244, Func Offset: 0xc14
	// Line 456, Address: 0x1fd248, Func Offset: 0xc18
	// Line 458, Address: 0x1fd24c, Func Offset: 0xc1c
	// Line 457, Address: 0x1fd250, Func Offset: 0xc20
	// Line 459, Address: 0x1fd254, Func Offset: 0xc24
	// Line 458, Address: 0x1fd258, Func Offset: 0xc28
	// Line 459, Address: 0x1fd25c, Func Offset: 0xc2c
	// Line 460, Address: 0x1fd260, Func Offset: 0xc30
	// Line 461, Address: 0x1fd268, Func Offset: 0xc38
	// Line 462, Address: 0x1fd26c, Func Offset: 0xc3c
	// Line 463, Address: 0x1fd270, Func Offset: 0xc40
	// Line 464, Address: 0x1fd274, Func Offset: 0xc44
	// Line 465, Address: 0x1fd278, Func Offset: 0xc48
	// Line 461, Address: 0x1fd27c, Func Offset: 0xc4c
	// Line 466, Address: 0x1fd280, Func Offset: 0xc50
	// Line 462, Address: 0x1fd28c, Func Offset: 0xc5c
	// Line 463, Address: 0x1fd290, Func Offset: 0xc60
	// Line 464, Address: 0x1fd294, Func Offset: 0xc64
	// Line 465, Address: 0x1fd298, Func Offset: 0xc68
	// Line 466, Address: 0x1fd29c, Func Offset: 0xc6c
	// Line 467, Address: 0x1fd2a4, Func Offset: 0xc74
	// Line 468, Address: 0x1fd2ac, Func Offset: 0xc7c
	// Line 469, Address: 0x1fd2bc, Func Offset: 0xc8c
	// Line 471, Address: 0x1fd2c8, Func Offset: 0xc98
	// Line 473, Address: 0x1fd2e0, Func Offset: 0xcb0
	// Line 474, Address: 0x1fd2ec, Func Offset: 0xcbc
	// Func End, Address: 0x1fd318, Func Offset: 0xce8
}

// 
// Start address: 0x1fd320
void calc_tex_pos()
{
	EarthwormTexParameter* pp;
	EarthwormTexDrawData* pd;
	int u;
	int v;
	int ut;
	int a;
	float utf;
	float utn;
	float x;
	// Line 477, Address: 0x1fd320, Func Offset: 0
	// Line 482, Address: 0x1fd324, Func Offset: 0x4
	// Line 477, Address: 0x1fd328, Func Offset: 0x8
	// Line 483, Address: 0x1fd32c, Func Offset: 0xc
	// Line 477, Address: 0x1fd330, Func Offset: 0x10
	// Line 483, Address: 0x1fd334, Func Offset: 0x14
	// Line 482, Address: 0x1fd338, Func Offset: 0x18
	// Line 483, Address: 0x1fd33c, Func Offset: 0x1c
	// Line 484, Address: 0x1fd344, Func Offset: 0x24
	// Line 486, Address: 0x1fd348, Func Offset: 0x28
	// Line 484, Address: 0x1fd34c, Func Offset: 0x2c
	// Line 486, Address: 0x1fd350, Func Offset: 0x30
	// Line 487, Address: 0x1fd360, Func Offset: 0x40
	// Line 488, Address: 0x1fd378, Func Offset: 0x58
	// Line 489, Address: 0x1fd3a4, Func Offset: 0x84
	// Line 488, Address: 0x1fd3a8, Func Offset: 0x88
	// Line 489, Address: 0x1fd3b8, Func Offset: 0x98
	// Line 490, Address: 0x1fd3c4, Func Offset: 0xa4
	// Line 493, Address: 0x1fd3c8, Func Offset: 0xa8
	// Line 490, Address: 0x1fd3d4, Func Offset: 0xb4
	// Line 491, Address: 0x1fd3dc, Func Offset: 0xbc
	// Line 493, Address: 0x1fd3e4, Func Offset: 0xc4
	// Line 494, Address: 0x1fd3f0, Func Offset: 0xd0
	// Line 495, Address: 0x1fd408, Func Offset: 0xe8
	// Line 496, Address: 0x1fd434, Func Offset: 0x114
	// Line 495, Address: 0x1fd438, Func Offset: 0x118
	// Line 496, Address: 0x1fd448, Func Offset: 0x128
	// Line 497, Address: 0x1fd454, Func Offset: 0x134
	// Line 500, Address: 0x1fd458, Func Offset: 0x138
	// Line 497, Address: 0x1fd47c, Func Offset: 0x15c
	// Line 500, Address: 0x1fd480, Func Offset: 0x160
	// Line 497, Address: 0x1fd484, Func Offset: 0x164
	// Line 500, Address: 0x1fd488, Func Offset: 0x168
	// Line 498, Address: 0x1fd48c, Func Offset: 0x16c
	// Line 500, Address: 0x1fd494, Func Offset: 0x174
	// Line 501, Address: 0x1fd4a0, Func Offset: 0x180
	// Line 502, Address: 0x1fd4b8, Func Offset: 0x198
	// Line 503, Address: 0x1fd4d8, Func Offset: 0x1b8
	// Line 504, Address: 0x1fd4f4, Func Offset: 0x1d4
	// Line 505, Address: 0x1fd50c, Func Offset: 0x1ec
	// Line 504, Address: 0x1fd510, Func Offset: 0x1f0
	// Line 505, Address: 0x1fd514, Func Offset: 0x1f4
	// Line 506, Address: 0x1fd524, Func Offset: 0x204
	// Line 507, Address: 0x1fd528, Func Offset: 0x208
	// Line 506, Address: 0x1fd52c, Func Offset: 0x20c
	// Line 507, Address: 0x1fd538, Func Offset: 0x218
	// Line 506, Address: 0x1fd53c, Func Offset: 0x21c
	// Line 507, Address: 0x1fd548, Func Offset: 0x228
	// Line 506, Address: 0x1fd54c, Func Offset: 0x22c
	// Line 508, Address: 0x1fd550, Func Offset: 0x230
	// Line 509, Address: 0x1fd574, Func Offset: 0x254
	// Line 510, Address: 0x1fd578, Func Offset: 0x258
	// Line 509, Address: 0x1fd580, Func Offset: 0x260
	// Line 510, Address: 0x1fd584, Func Offset: 0x264
	// Line 511, Address: 0x1fd5a0, Func Offset: 0x280
	// Line 512, Address: 0x1fd5b0, Func Offset: 0x290
	// Line 514, Address: 0x1fd5c0, Func Offset: 0x2a0
	// Line 513, Address: 0x1fd5c4, Func Offset: 0x2a4
	// Line 515, Address: 0x1fd5c8, Func Offset: 0x2a8
	// Line 516, Address: 0x1fd5ec, Func Offset: 0x2cc
	// Line 517, Address: 0x1fd600, Func Offset: 0x2e0
	// Line 518, Address: 0x1fd610, Func Offset: 0x2f0
	// Line 519, Address: 0x1fd618, Func Offset: 0x2f8
	// Line 520, Address: 0x1fd638, Func Offset: 0x318
	// Line 519, Address: 0x1fd63c, Func Offset: 0x31c
	// Line 520, Address: 0x1fd64c, Func Offset: 0x32c
	// Line 521, Address: 0x1fd65c, Func Offset: 0x33c
	// Func End, Address: 0x1fd66c, Func Offset: 0x34c
}

// 
// Start address: 0x1fd670
void post_draw()
{
	// Line 524, Address: 0x1fd670, Func Offset: 0
	// Line 525, Address: 0x1fd674, Func Offset: 0x4
	// Line 524, Address: 0x1fd678, Func Offset: 0x8
	// Line 525, Address: 0x1fd67c, Func Offset: 0xc
	// Line 526, Address: 0x1fd68c, Func Offset: 0x1c
	// Line 527, Address: 0x1fd698, Func Offset: 0x28
	// Func End, Address: 0x1fd6a4, Func Offset: 0x34
}

// 
// Start address: 0x1fd6b0
void EnemyTexEarthwormLoad()
{
	// Line 530, Address: 0x1fd6b0, Func Offset: 0
	// Line 531, Address: 0x1fd6c0, Func Offset: 0x10
	// Line 532, Address: 0x1fd6d8, Func Offset: 0x28
	// Line 534, Address: 0x1fd6e0, Func Offset: 0x30
	// Line 535, Address: 0x1fd6e8, Func Offset: 0x38
	// Line 536, Address: 0x1fd6f0, Func Offset: 0x40
	// Line 537, Address: 0x1fd6f8, Func Offset: 0x48
	// Line 538, Address: 0x1fd700, Func Offset: 0x50
	// Line 539, Address: 0x1fd708, Func Offset: 0x58
	// Line 540, Address: 0x1fd710, Func Offset: 0x60
	// Line 541, Address: 0x1fd718, Func Offset: 0x68
	// Line 542, Address: 0x1fd720, Func Offset: 0x70
	// Line 543, Address: 0x1fd728, Func Offset: 0x78
	// Line 544, Address: 0x1fd73c, Func Offset: 0x8c
	// Func End, Address: 0x1fd74c, Func Offset: 0x9c
}

// 
// Start address: 0x1fd750
void make_static_packet()
{
	sgSpkWork pkw;
	int du;
	int dv;
	// Line 547, Address: 0x1fd750, Func Offset: 0
	// Line 551, Address: 0x1fd76c, Func Offset: 0x1c
	// Line 553, Address: 0x1fd774, Func Offset: 0x24
	// Line 557, Address: 0x1fd78c, Func Offset: 0x3c
	// Line 561, Address: 0x1fd7a4, Func Offset: 0x54
	// Line 565, Address: 0x1fd7b8, Func Offset: 0x68
	// Line 569, Address: 0x1fd7c4, Func Offset: 0x74
	// Line 566, Address: 0x1fd7c8, Func Offset: 0x78
	// Line 569, Address: 0x1fd7cc, Func Offset: 0x7c
	// Line 573, Address: 0x1fd7d0, Func Offset: 0x80
	// Line 569, Address: 0x1fd7d4, Func Offset: 0x84
	// Line 573, Address: 0x1fd7d8, Func Offset: 0x88
	// Line 569, Address: 0x1fd7dc, Func Offset: 0x8c
	// Line 573, Address: 0x1fd7e4, Func Offset: 0x94
	// Line 569, Address: 0x1fd7e8, Func Offset: 0x98
	// Line 573, Address: 0x1fd7ec, Func Offset: 0x9c
	// Line 566, Address: 0x1fd7f0, Func Offset: 0xa0
	// Line 567, Address: 0x1fd7f8, Func Offset: 0xa8
	// Line 569, Address: 0x1fd808, Func Offset: 0xb8
	// Line 573, Address: 0x1fd814, Func Offset: 0xc4
	// Line 575, Address: 0x1fd81c, Func Offset: 0xcc
	// Line 577, Address: 0x1fd824, Func Offset: 0xd4
	// Line 575, Address: 0x1fd828, Func Offset: 0xd8
	// Line 577, Address: 0x1fd82c, Func Offset: 0xdc
	// Line 576, Address: 0x1fd830, Func Offset: 0xe0
	// Line 577, Address: 0x1fd838, Func Offset: 0xe8
	// Line 575, Address: 0x1fd840, Func Offset: 0xf0
	// Line 576, Address: 0x1fd850, Func Offset: 0x100
	// Line 577, Address: 0x1fd860, Func Offset: 0x110
	// Line 580, Address: 0x1fd868, Func Offset: 0x118
	// Line 582, Address: 0x1fd878, Func Offset: 0x128
	// Line 580, Address: 0x1fd87c, Func Offset: 0x12c
	// Line 585, Address: 0x1fd88c, Func Offset: 0x13c
	// Line 582, Address: 0x1fd894, Func Offset: 0x144
	// Line 583, Address: 0x1fd898, Func Offset: 0x148
	// Line 587, Address: 0x1fd89c, Func Offset: 0x14c
	// Line 583, Address: 0x1fd8a4, Func Offset: 0x154
	// Line 584, Address: 0x1fd8b0, Func Offset: 0x160
	// Line 585, Address: 0x1fd8bc, Func Offset: 0x16c
	// Line 586, Address: 0x1fd8cc, Func Offset: 0x17c
	// Line 587, Address: 0x1fd8d4, Func Offset: 0x184
	// Line 590, Address: 0x1fd8dc, Func Offset: 0x18c
	// Line 597, Address: 0x1fd900, Func Offset: 0x1b0
	// Line 601, Address: 0x1fd914, Func Offset: 0x1c4
	// Line 602, Address: 0x1fd920, Func Offset: 0x1d0
	// Line 603, Address: 0x1fd924, Func Offset: 0x1d4
	// Line 605, Address: 0x1fd92c, Func Offset: 0x1dc
	// Line 602, Address: 0x1fd930, Func Offset: 0x1e0
	// Line 603, Address: 0x1fd938, Func Offset: 0x1e8
	// Line 606, Address: 0x1fd950, Func Offset: 0x200
	// Line 607, Address: 0x1fd958, Func Offset: 0x208
	// Line 608, Address: 0x1fd960, Func Offset: 0x210
	// Line 609, Address: 0x1fd968, Func Offset: 0x218
	// Line 614, Address: 0x1fd980, Func Offset: 0x230
	// Line 615, Address: 0x1fd99c, Func Offset: 0x24c
	// Line 621, Address: 0x1fd9b0, Func Offset: 0x260
	// Line 622, Address: 0x1fd9c0, Func Offset: 0x270
	// Line 625, Address: 0x1fd9d0, Func Offset: 0x280
	// Line 628, Address: 0x1fd9e4, Func Offset: 0x294
	// Line 629, Address: 0x1fd9f8, Func Offset: 0x2a8
	// Line 632, Address: 0x1fda04, Func Offset: 0x2b4
	// Line 630, Address: 0x1fda08, Func Offset: 0x2b8
	// Line 632, Address: 0x1fda0c, Func Offset: 0x2bc
	// Line 636, Address: 0x1fda10, Func Offset: 0x2c0
	// Line 632, Address: 0x1fda14, Func Offset: 0x2c4
	// Line 636, Address: 0x1fda18, Func Offset: 0x2c8
	// Line 632, Address: 0x1fda1c, Func Offset: 0x2cc
	// Line 636, Address: 0x1fda24, Func Offset: 0x2d4
	// Line 632, Address: 0x1fda28, Func Offset: 0x2d8
	// Line 636, Address: 0x1fda2c, Func Offset: 0x2dc
	// Line 630, Address: 0x1fda38, Func Offset: 0x2e8
	// Line 632, Address: 0x1fda40, Func Offset: 0x2f0
	// Line 636, Address: 0x1fda4c, Func Offset: 0x2fc
	// Line 639, Address: 0x1fda54, Func Offset: 0x304
	// Line 641, Address: 0x1fda64, Func Offset: 0x314
	// Line 639, Address: 0x1fda68, Func Offset: 0x318
	// Line 642, Address: 0x1fda78, Func Offset: 0x328
	// Line 646, Address: 0x1fda84, Func Offset: 0x334
	// Line 642, Address: 0x1fda8c, Func Offset: 0x33c
	// Line 643, Address: 0x1fda98, Func Offset: 0x348
	// Line 644, Address: 0x1fdaa4, Func Offset: 0x354
	// Line 645, Address: 0x1fdab4, Func Offset: 0x364
	// Line 646, Address: 0x1fdabc, Func Offset: 0x36c
	// Line 647, Address: 0x1fdac4, Func Offset: 0x374
	// Line 648, Address: 0x1fdad4, Func Offset: 0x384
	// Line 650, Address: 0x1fdae0, Func Offset: 0x390
	// Func End, Address: 0x1fdaf8, Func Offset: 0x3a8
}

// 
// Start address: 0x1fdb00
void draw_tex()
{
	EarthwormTexParameter* pp;
	EarthwormTexDrawData* pd;
	<unknown fundamental type (0xa510)>* dadr;
	int du;
	int dv;
	int bx;
	int by;
	int bu;
	int x;
	int y;
	float s;
	float t;
	float fbu;
	// Line 653, Address: 0x1fdb00, Func Offset: 0
	// Line 660, Address: 0x1fdb04, Func Offset: 0x4
	// Line 653, Address: 0x1fdb08, Func Offset: 0x8
	// Line 664, Address: 0x1fdb0c, Func Offset: 0xc
	// Line 653, Address: 0x1fdb10, Func Offset: 0x10
	// Line 660, Address: 0x1fdb20, Func Offset: 0x20
	// Line 661, Address: 0x1fdb24, Func Offset: 0x24
	// Line 664, Address: 0x1fdb28, Func Offset: 0x28
	// Line 665, Address: 0x1fdb34, Func Offset: 0x34
	// Line 668, Address: 0x1fdb3c, Func Offset: 0x3c
	// Line 669, Address: 0x1fdb40, Func Offset: 0x40
	// Line 668, Address: 0x1fdb44, Func Offset: 0x44
	// Line 669, Address: 0x1fdb48, Func Offset: 0x48
	// Line 666, Address: 0x1fdb4c, Func Offset: 0x4c
	// Line 667, Address: 0x1fdb50, Func Offset: 0x50
	// Line 669, Address: 0x1fdb54, Func Offset: 0x54
	// Line 668, Address: 0x1fdb5c, Func Offset: 0x5c
	// Line 669, Address: 0x1fdb60, Func Offset: 0x60
	// Line 670, Address: 0x1fdb68, Func Offset: 0x68
	// Line 671, Address: 0x1fdb70, Func Offset: 0x70
	// Line 670, Address: 0x1fdb74, Func Offset: 0x74
	// Line 671, Address: 0x1fdb7c, Func Offset: 0x7c
	// Line 677, Address: 0x1fdb80, Func Offset: 0x80
	// Line 675, Address: 0x1fdb84, Func Offset: 0x84
	// Line 671, Address: 0x1fdb88, Func Offset: 0x88
	// Line 673, Address: 0x1fdb8c, Func Offset: 0x8c
	// Line 671, Address: 0x1fdb94, Func Offset: 0x94
	// Line 675, Address: 0x1fdb98, Func Offset: 0x98
	// Line 672, Address: 0x1fdb9c, Func Offset: 0x9c
	// Line 673, Address: 0x1fdba0, Func Offset: 0xa0
	// Line 674, Address: 0x1fdba4, Func Offset: 0xa4
	// Line 675, Address: 0x1fdba8, Func Offset: 0xa8
	// Line 676, Address: 0x1fdbac, Func Offset: 0xac
	// Line 677, Address: 0x1fdbb0, Func Offset: 0xb0
	// Line 680, Address: 0x1fdbbc, Func Offset: 0xbc
	// Line 681, Address: 0x1fdbc8, Func Offset: 0xc8
	// Line 682, Address: 0x1fdbd0, Func Offset: 0xd0
	// Line 680, Address: 0x1fdbe8, Func Offset: 0xe8
	// Line 682, Address: 0x1fdbec, Func Offset: 0xec
	// Line 680, Address: 0x1fdbf4, Func Offset: 0xf4
	// Line 681, Address: 0x1fdbf8, Func Offset: 0xf8
	// Line 682, Address: 0x1fdbfc, Func Offset: 0xfc
	// Line 680, Address: 0x1fdc14, Func Offset: 0x114
	// Line 682, Address: 0x1fdc18, Func Offset: 0x118
	// Line 683, Address: 0x1fdc38, Func Offset: 0x138
	// Line 684, Address: 0x1fdc58, Func Offset: 0x158
	// Line 687, Address: 0x1fdc6c, Func Offset: 0x16c
	// Line 688, Address: 0x1fdc70, Func Offset: 0x170
	// Line 685, Address: 0x1fdc78, Func Offset: 0x178
	// Line 686, Address: 0x1fdc7c, Func Offset: 0x17c
	// Line 687, Address: 0x1fdc80, Func Offset: 0x180
	// Line 684, Address: 0x1fdc84, Func Offset: 0x184
	// Line 694, Address: 0x1fdc88, Func Offset: 0x188
	// Line 688, Address: 0x1fdc8c, Func Offset: 0x18c
	// Line 685, Address: 0x1fdc90, Func Offset: 0x190
	// Line 686, Address: 0x1fdc94, Func Offset: 0x194
	// Line 688, Address: 0x1fdc9c, Func Offset: 0x19c
	// Line 686, Address: 0x1fdca0, Func Offset: 0x1a0
	// Line 688, Address: 0x1fdca4, Func Offset: 0x1a4
	// Line 691, Address: 0x1fdca8, Func Offset: 0x1a8
	// Line 688, Address: 0x1fdcac, Func Offset: 0x1ac
	// Line 687, Address: 0x1fdcb0, Func Offset: 0x1b0
	// Line 691, Address: 0x1fdcb4, Func Offset: 0x1b4
	// Line 687, Address: 0x1fdcb8, Func Offset: 0x1b8
	// Line 690, Address: 0x1fdcbc, Func Offset: 0x1bc
	// Line 685, Address: 0x1fdcc0, Func Offset: 0x1c0
	// Line 690, Address: 0x1fdcc4, Func Offset: 0x1c4
	// Line 691, Address: 0x1fdcc8, Func Offset: 0x1c8
	// Line 693, Address: 0x1fdccc, Func Offset: 0x1cc
	// Line 694, Address: 0x1fdcd0, Func Offset: 0x1d0
	// Line 693, Address: 0x1fdcd4, Func Offset: 0x1d4
	// Line 692, Address: 0x1fdcd8, Func Offset: 0x1d8
	// Line 694, Address: 0x1fdcdc, Func Offset: 0x1dc
	// Line 693, Address: 0x1fdce0, Func Offset: 0x1e0
	// Line 692, Address: 0x1fdce8, Func Offset: 0x1e8
	// Line 694, Address: 0x1fdcec, Func Offset: 0x1ec
	// Line 692, Address: 0x1fdcf0, Func Offset: 0x1f0
	// Line 694, Address: 0x1fdcf8, Func Offset: 0x1f8
	// Line 697, Address: 0x1fdcfc, Func Offset: 0x1fc
	// Line 694, Address: 0x1fdd00, Func Offset: 0x200
	// Line 696, Address: 0x1fdd04, Func Offset: 0x204
	// Line 697, Address: 0x1fdd08, Func Offset: 0x208
	// Line 696, Address: 0x1fdd0c, Func Offset: 0x20c
	// Line 697, Address: 0x1fdd10, Func Offset: 0x210
	// Line 699, Address: 0x1fdd14, Func Offset: 0x214
	// Line 700, Address: 0x1fdd28, Func Offset: 0x228
	// Line 702, Address: 0x1fdd2c, Func Offset: 0x22c
	// Line 703, Address: 0x1fdd44, Func Offset: 0x244
	// Line 709, Address: 0x1fdd54, Func Offset: 0x254
	// Line 708, Address: 0x1fdd58, Func Offset: 0x258
	// Line 709, Address: 0x1fdd5c, Func Offset: 0x25c
	// Line 706, Address: 0x1fdd60, Func Offset: 0x260
	// Line 707, Address: 0x1fdd64, Func Offset: 0x264
	// Line 709, Address: 0x1fdd68, Func Offset: 0x268
	// Line 708, Address: 0x1fdd70, Func Offset: 0x270
	// Line 709, Address: 0x1fdd74, Func Offset: 0x274
	// Line 710, Address: 0x1fdd80, Func Offset: 0x280
	// Line 711, Address: 0x1fdd88, Func Offset: 0x288
	// Line 710, Address: 0x1fdd8c, Func Offset: 0x28c
	// Line 711, Address: 0x1fdd90, Func Offset: 0x290
	// Line 717, Address: 0x1fdd94, Func Offset: 0x294
	// Line 711, Address: 0x1fdd98, Func Offset: 0x298
	// Line 710, Address: 0x1fdd9c, Func Offset: 0x29c
	// Line 713, Address: 0x1fdda8, Func Offset: 0x2a8
	// Line 711, Address: 0x1fddac, Func Offset: 0x2ac
	// Line 715, Address: 0x1fddb0, Func Offset: 0x2b0
	// Line 713, Address: 0x1fddb4, Func Offset: 0x2b4
	// Line 712, Address: 0x1fddb8, Func Offset: 0x2b8
	// Line 713, Address: 0x1fddbc, Func Offset: 0x2bc
	// Line 715, Address: 0x1fddc0, Func Offset: 0x2c0
	// Line 714, Address: 0x1fddc4, Func Offset: 0x2c4
	// Line 715, Address: 0x1fddc8, Func Offset: 0x2c8
	// Line 716, Address: 0x1fddcc, Func Offset: 0x2cc
	// Line 717, Address: 0x1fddd0, Func Offset: 0x2d0
	// Line 719, Address: 0x1fdddc, Func Offset: 0x2dc
	// Line 720, Address: 0x1fdde0, Func Offset: 0x2e0
	// Line 722, Address: 0x1fde00, Func Offset: 0x300
	// Line 723, Address: 0x1fde08, Func Offset: 0x308
	// Func End, Address: 0x1fde24, Func Offset: 0x324
}

