typedef struct EnemyTexSize;
typedef struct _anon0;
typedef struct EnemyTexWork;
typedef enum EnemyTexReverse : unsigned char;
typedef struct EnemyTexParameter;
typedef struct EnemyTexClutData;
typedef struct _anon1;
typedef struct sgClutData;
typedef struct EnemyTexData;
typedef struct EnemyTexRectangle;
typedef struct EnemyTexTextureData;
typedef struct sgTexData;
typedef enum EnemyTexIdentity : unsigned char;
typedef enum EnemyTexRotate : unsigned char;

typedef void(*type_0)(unsigned int, unsigned int);
typedef void*(*type_6)();
typedef void*(*type_7)();
typedef void(*type_8)();
typedef void(*type_9)();
typedef void(*type_12)(EnemyTexIdentity);

typedef unsigned int type_1[17];
typedef unsigned int type_2[17];
typedef unsigned long* type_3[17];
typedef EnemyTexSize type_4[17];
typedef _anon1 type_5[2];
typedef unsigned long type_10[12];
typedef EnemyTexData type_11[17];

struct EnemyTexSize
{
	int w;
	int h;
	float wf;
	float hf;
	float wfr;
	float hfr;
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

struct EnemyTexWork
{
	unsigned int tex_id[17];
	unsigned int clut_id[17];
	unsigned long* tex0_adr[17];
	EnemyTexSize tex_size[17];
	int capture_addr;
	int capture_size;
	int capture_free_check;
	unsigned long capture_tex0;
	int allocated;
};

enum EnemyTexReverse : unsigned char
{
	EN_TEX_REV_NONE,
	EN_TEX_REV_HORIZONTAL,
	EN_TEX_REV_VERTICAL,
	EN_TEX_REV_BOTH
};

struct EnemyTexParameter
{
	_anon1 st[2];
	EnemyTexIdentity texid;
	unsigned long clamp;
	int rotate;
};

struct EnemyTexClutData
{
	short psm;
	short version;
	unsigned int size;
	unsigned int pad;
	unsigned int offset_to_data;
};

struct _anon1
{
	float S;
	float T;
};

struct sgClutData
{
	<unknown fundamental type (0xa510)> dummy;
};

struct EnemyTexData
{
	void*(*get_texdata_func)();
	void*(*get_clutdata_func)();
	void(*construct_func)();
	void(*destruct_func)();
};

struct EnemyTexRectangle
{
	unsigned short u;
	unsigned short v;
	unsigned short w;
	unsigned short h;
};

struct EnemyTexTextureData
{
	unsigned short w;
	unsigned short pad_s0;
	unsigned short h;
	unsigned short pad_s1;
	unsigned char image_psm;
	unsigned char load_psm;
	unsigned char pad_co;
	unsigned char version;
	unsigned int offset_to_data;
};

struct sgTexData
{
	<unknown fundamental type (0xa510)> dummy;
};

enum EnemyTexIdentity : unsigned char
{
	EN_TEX_ID_COALTAR,
	EN_TEX_ID_GHOSTSTAIN,
	EN_TEX_ID_CELL,
	EN_TEX_ID_CELL2,
	EN_TEX_ID_MUCUS,
	EN_TEX_ID_CRUSH_HIL,
	EN_TEX_ID_EARTHWORM,
	EN_TEX_ID_EARTHWORM2,
	EN_TEX_ID_EARTHWORM3,
	EN_TEX_ID_EARTHWORM4,
	EN_TEX_ID_BLOODPOOL,
	EN_TEX_ID_FLAME1,
	EN_TEX_ID_FLAME2,
	EN_TEX_ID_TOACH,
	EN_TEX_ID_FIRE,
	EN_TEX_ID_FIRELIGHT,
	EN_TEX_ID_WALL,
	EN_TEX_ID_MAX
};

enum EnemyTexRotate : unsigned char
{
	EN_TEX_ROT_NORMAL,
	EN_TEX_ROT_LEFT90,
	EN_TEX_ROT_REVERSE,
	EN_TEX_ROT_RIGHT90
};

EnemyTexData en_tex_data[17];
unsigned long tex_cap_dma_data[12];
EnemyTexWork enemy_tex_work;
void(*EnemyTexLoad)(EnemyTexIdentity);
void(*ot_tex0_callback)(unsigned int, unsigned int);

void EnemyTexConstructAll();
void EnemyTexDestructAll();
void EnemyTexReset();
void* EnemyTexDataAddress(int dataid, int index);
void* EnemyTexClutDataAddress(int dataid, int index);
void* EnemyTexGetClutData(int id);
void EnemyTexLoad(EnemyTexIdentity id);
void ot_tex0_callback(unsigned int id, unsigned int tex0_addr);
void EnemyTexSetOtWithTex0Callback(EnemyTexIdentity id, unsigned long* tex0_addr);
unsigned long EnemyTexGetGsData(int texmanageid);
unsigned long EnemyTexTEX0(EnemyTexIdentity id);
void EnemyTexSetTEX0Address(EnemyTexIdentity id, unsigned long* adr);
void EnemyTexWait();
void get_tex_size(EnemyTexIdentity id);
float EnemyTexWidthFr(EnemyTexIdentity id);
float EnemyTexHeightFr(EnemyTexIdentity id);
void EnemyTexParameterConstruct(EnemyTexParameter* tex, EnemyTexIdentity id);
void EnemyTexParameterRotate(EnemyTexParameter* tex, EnemyTexRotate rot);
void EnemyTexParameterSetSTAndRegionClampByUV(EnemyTexParameter* tex, int u0, int v0, int u1, int v1);
void EnemyTexParameterSetSTAndRegionClampByRect(EnemyTexParameter* tex, EnemyTexRectangle* rect);
unsigned long EnemyTexST(EnemyTexParameter* tex, int num, float q);
unsigned long EnemyTexSTMiddle(EnemyTexParameter* tex, float s, float t, float q);

// 
// Start address: 0x1a79c0
void EnemyTexConstructAll()
{
	int i;
	// Line 198, Address: 0x1a79c0, Func Offset: 0
	// Line 200, Address: 0x1a79c4, Func Offset: 0x4
	// Line 198, Address: 0x1a79c8, Func Offset: 0x8
	// Line 200, Address: 0x1a79d4, Func Offset: 0x14
	// Line 207, Address: 0x1a79e0, Func Offset: 0x20
	// Line 206, Address: 0x1a79e4, Func Offset: 0x24
	// Line 207, Address: 0x1a79ec, Func Offset: 0x2c
	// Line 206, Address: 0x1a79f0, Func Offset: 0x30
	// Line 207, Address: 0x1a79f4, Func Offset: 0x34
	// Line 208, Address: 0x1a79f8, Func Offset: 0x38
	// Line 209, Address: 0x1a7a0c, Func Offset: 0x4c
	// Line 210, Address: 0x1a7a14, Func Offset: 0x54
	// Line 213, Address: 0x1a7a1c, Func Offset: 0x5c
	// Line 214, Address: 0x1a7a30, Func Offset: 0x70
	// Func End, Address: 0x1a7a44, Func Offset: 0x84
}

// 
// Start address: 0x1a7a50
void EnemyTexDestructAll()
{
	int i;
	// Line 219, Address: 0x1a7a50, Func Offset: 0
	// Line 221, Address: 0x1a7a54, Func Offset: 0x4
	// Line 219, Address: 0x1a7a58, Func Offset: 0x8
	// Line 221, Address: 0x1a7a64, Func Offset: 0x14
	// Line 228, Address: 0x1a7a70, Func Offset: 0x20
	// Line 227, Address: 0x1a7a74, Func Offset: 0x24
	// Line 228, Address: 0x1a7a78, Func Offset: 0x28
	// Line 229, Address: 0x1a7a80, Func Offset: 0x30
	// Line 230, Address: 0x1a7a94, Func Offset: 0x44
	// Line 231, Address: 0x1a7a9c, Func Offset: 0x4c
	// Line 234, Address: 0x1a7aa4, Func Offset: 0x54
	// Line 235, Address: 0x1a7ab8, Func Offset: 0x68
	// Func End, Address: 0x1a7acc, Func Offset: 0x7c
}

// 
// Start address: 0x1a7ad0
void EnemyTexReset()
{
	int i;
	// Line 242, Address: 0x1a7ad0, Func Offset: 0
	// Line 243, Address: 0x1a7adc, Func Offset: 0xc
	// Line 244, Address: 0x1a7ae4, Func Offset: 0x14
	// Line 246, Address: 0x1a7b50, Func Offset: 0x80
	// Func End, Address: 0x1a7b58, Func Offset: 0x88
}

// 
// Start address: 0x1a7b60
void* EnemyTexDataAddress(int dataid, int index)
{
	void* adr;
	sgTexData* ptd;
	// Line 254, Address: 0x1a7b60, Func Offset: 0
	// Line 257, Address: 0x1a7b6c, Func Offset: 0xc
	// Line 258, Address: 0x1a7b74, Func Offset: 0x14
	// Line 259, Address: 0x1a7b88, Func Offset: 0x28
	// Line 260, Address: 0x1a7b94, Func Offset: 0x34
	// Line 261, Address: 0x1a7b98, Func Offset: 0x38
	// Func End, Address: 0x1a7ba8, Func Offset: 0x48
}

// 
// Start address: 0x1a7bb0
void* EnemyTexClutDataAddress(int dataid, int index)
{
	void* adr;
	sgClutData* pcd;
	// Line 269, Address: 0x1a7bb0, Func Offset: 0
	// Line 272, Address: 0x1a7bbc, Func Offset: 0xc
	// Line 273, Address: 0x1a7bc4, Func Offset: 0x14
	// Line 274, Address: 0x1a7bd8, Func Offset: 0x28
	// Line 275, Address: 0x1a7be4, Func Offset: 0x34
	// Line 276, Address: 0x1a7be8, Func Offset: 0x38
	// Func End, Address: 0x1a7bf8, Func Offset: 0x48
}

// 
// Start address: 0x1a7c00
void* EnemyTexGetClutData(int id)
{
	// Line 295, Address: 0x1a7c00, Func Offset: 0
	// Line 297, Address: 0x1a7c04, Func Offset: 0x4
	// Line 299, Address: 0x1a7c34, Func Offset: 0x34
	// Line 301, Address: 0x1a7c50, Func Offset: 0x50
	// Func End, Address: 0x1a7c5c, Func Offset: 0x5c
}

// 
// Start address: 0x1a7c60
void EnemyTexLoad(EnemyTexIdentity id)
{
	EnemyTexData* pt;
	void* adr;
	// Line 307, Address: 0x1a7c60, Func Offset: 0
	// Line 308, Address: 0x1a7c64, Func Offset: 0x4
	// Line 307, Address: 0x1a7c68, Func Offset: 0x8
	// Line 308, Address: 0x1a7c6c, Func Offset: 0xc
	// Line 307, Address: 0x1a7c70, Func Offset: 0x10
	// Line 308, Address: 0x1a7c80, Func Offset: 0x20
	// Line 310, Address: 0x1a7c88, Func Offset: 0x28
	// Line 311, Address: 0x1a7c94, Func Offset: 0x34
	// Line 313, Address: 0x1a7cb4, Func Offset: 0x54
	// Line 314, Address: 0x1a7cbc, Func Offset: 0x5c
	// Line 315, Address: 0x1a7cc4, Func Offset: 0x64
	// Line 317, Address: 0x1a7cdc, Func Offset: 0x7c
	// Line 315, Address: 0x1a7ce0, Func Offset: 0x80
	// Line 318, Address: 0x1a7cec, Func Offset: 0x8c
	// Line 319, Address: 0x1a7cf8, Func Offset: 0x98
	// Line 321, Address: 0x1a7d08, Func Offset: 0xa8
	// Func End, Address: 0x1a7d20, Func Offset: 0xc0
}

// 
// Start address: 0x1a7d20
void ot_tex0_callback(unsigned int id, unsigned int tex0_addr)
{
	// Line 336, Address: 0x1a7d20, Func Offset: 0
	// Line 337, Address: 0x1a7d24, Func Offset: 0x4
	// Line 336, Address: 0x1a7d28, Func Offset: 0x8
	// Line 337, Address: 0x1a7d30, Func Offset: 0x10
	// Line 338, Address: 0x1a7d3c, Func Offset: 0x1c
	// Func End, Address: 0x1a7d4c, Func Offset: 0x2c
}

// 
// Start address: 0x1a7d50
void EnemyTexSetOtWithTex0Callback(EnemyTexIdentity id, unsigned long* tex0_addr)
{
	// Line 346, Address: 0x1a7d50, Func Offset: 0
	// Line 347, Address: 0x1a7d68, Func Offset: 0x18
	// Line 348, Address: 0x1a7d78, Func Offset: 0x28
	// Line 349, Address: 0x1a7d8c, Func Offset: 0x3c
	// Func End, Address: 0x1a7da0, Func Offset: 0x50
}

// 
// Start address: 0x1a7da0
unsigned long EnemyTexGetGsData(int texmanageid)
{
	_anon0* tex;
	// Line 378, Address: 0x1a7da0, Func Offset: 0
	// Line 380, Address: 0x1a7da8, Func Offset: 0x8
	// Line 381, Address: 0x1a7db0, Func Offset: 0x10
	// Line 384, Address: 0x1a7df4, Func Offset: 0x54
	// Func End, Address: 0x1a7e00, Func Offset: 0x60
}

// 
// Start address: 0x1a7e00
unsigned long EnemyTexTEX0(EnemyTexIdentity id)
{
	_anon0* tex;
	unsigned long tex0;
	EnemyTexClutData* pc;
	unsigned int cbp;
	// Line 391, Address: 0x1a7e00, Func Offset: 0
	// Line 395, Address: 0x1a7e04, Func Offset: 0x4
	// Line 391, Address: 0x1a7e08, Func Offset: 0x8
	// Line 395, Address: 0x1a7e14, Func Offset: 0x14
	// Line 391, Address: 0x1a7e18, Func Offset: 0x18
	// Line 395, Address: 0x1a7e28, Func Offset: 0x28
	// Line 396, Address: 0x1a7e38, Func Offset: 0x38
	// Line 398, Address: 0x1a7e40, Func Offset: 0x40
	// Line 400, Address: 0x1a7e54, Func Offset: 0x54
	// Line 403, Address: 0x1a7e64, Func Offset: 0x64
	// Line 404, Address: 0x1a7e6c, Func Offset: 0x6c
	// Line 405, Address: 0x1a7e78, Func Offset: 0x78
	// Line 404, Address: 0x1a7e7c, Func Offset: 0x7c
	// Line 405, Address: 0x1a7e80, Func Offset: 0x80
	// Line 404, Address: 0x1a7e88, Func Offset: 0x88
	// Line 405, Address: 0x1a7e8c, Func Offset: 0x8c
	// Line 406, Address: 0x1a7e98, Func Offset: 0x98
	// Line 407, Address: 0x1a7ea0, Func Offset: 0xa0
	// Line 410, Address: 0x1a7eb0, Func Offset: 0xb0
	// Func End, Address: 0x1a7ec8, Func Offset: 0xc8
}

// 
// Start address: 0x1a7ed0
void EnemyTexSetTEX0Address(EnemyTexIdentity id, unsigned long* adr)
{
	// Line 418, Address: 0x1a7ed0, Func Offset: 0
	// Line 419, Address: 0x1a7ee4, Func Offset: 0x14
	// Func End, Address: 0x1a7eec, Func Offset: 0x1c
}

// 
// Start address: 0x1a7ef0
void EnemyTexWait()
{
	// Line 425, Address: 0x1a7ef0, Func Offset: 0
	// Func End, Address: 0x1a7ef8, Func Offset: 0x8
}

// 
// Start address: 0x1a7f00
void get_tex_size(EnemyTexIdentity id)
{
	EnemyTexSize* p;
	EnemyTexData* pt;
	EnemyTexTextureData* td;
	// Line 436, Address: 0x1a7f00, Func Offset: 0
	// Line 432, Address: 0x1a7f04, Func Offset: 0x4
	// Line 436, Address: 0x1a7f08, Func Offset: 0x8
	// Line 432, Address: 0x1a7f0c, Func Offset: 0xc
	// Line 436, Address: 0x1a7f10, Func Offset: 0x10
	// Line 437, Address: 0x1a7f20, Func Offset: 0x20
	// Line 432, Address: 0x1a7f2c, Func Offset: 0x2c
	// Line 437, Address: 0x1a7f30, Func Offset: 0x30
	// Line 436, Address: 0x1a7f34, Func Offset: 0x34
	// Line 438, Address: 0x1a7f38, Func Offset: 0x38
	// Line 439, Address: 0x1a7f44, Func Offset: 0x44
	// Line 440, Address: 0x1a7f4c, Func Offset: 0x4c
	// Line 441, Address: 0x1a7f54, Func Offset: 0x54
	// Line 443, Address: 0x1a7f64, Func Offset: 0x64
	// Line 441, Address: 0x1a7f6c, Func Offset: 0x6c
	// Line 444, Address: 0x1a7f70, Func Offset: 0x70
	// Line 442, Address: 0x1a7f78, Func Offset: 0x78
	// Line 443, Address: 0x1a7f90, Func Offset: 0x90
	// Line 444, Address: 0x1a7f9c, Func Offset: 0x9c
	// Line 445, Address: 0x1a7fa8, Func Offset: 0xa8
	// Func End, Address: 0x1a7fb8, Func Offset: 0xb8
}

// 
// Start address: 0x1a7fc0
float EnemyTexWidthFr(EnemyTexIdentity id)
{
	// Line 497, Address: 0x1a7fc0, Func Offset: 0
	// Line 496, Address: 0x1a7fc4, Func Offset: 0x4
	// Line 497, Address: 0x1a7fc8, Func Offset: 0x8
	// Line 496, Address: 0x1a7fd4, Func Offset: 0x14
	// Line 497, Address: 0x1a7fd8, Func Offset: 0x18
	// Line 496, Address: 0x1a7fe0, Func Offset: 0x20
	// Line 497, Address: 0x1a7fe4, Func Offset: 0x24
	// Line 498, Address: 0x1a8000, Func Offset: 0x40
	// Line 497, Address: 0x1a8004, Func Offset: 0x44
	// Line 498, Address: 0x1a8008, Func Offset: 0x48
	// Func End, Address: 0x1a8014, Func Offset: 0x54
}

// 
// Start address: 0x1a8020
float EnemyTexHeightFr(EnemyTexIdentity id)
{
	// Line 506, Address: 0x1a8020, Func Offset: 0
	// Line 505, Address: 0x1a8024, Func Offset: 0x4
	// Line 506, Address: 0x1a8028, Func Offset: 0x8
	// Line 505, Address: 0x1a8034, Func Offset: 0x14
	// Line 506, Address: 0x1a8038, Func Offset: 0x18
	// Line 505, Address: 0x1a8040, Func Offset: 0x20
	// Line 506, Address: 0x1a8044, Func Offset: 0x24
	// Line 507, Address: 0x1a8060, Func Offset: 0x40
	// Line 506, Address: 0x1a8064, Func Offset: 0x44
	// Line 507, Address: 0x1a8068, Func Offset: 0x48
	// Func End, Address: 0x1a8074, Func Offset: 0x54
}

// 
// Start address: 0x1a8080
void EnemyTexParameterConstruct(EnemyTexParameter* tex, EnemyTexIdentity id)
{
	// Line 515, Address: 0x1a8080, Func Offset: 0
	// Line 520, Address: 0x1a8084, Func Offset: 0x4
	// Line 516, Address: 0x1a8088, Func Offset: 0x8
	// Line 518, Address: 0x1a808c, Func Offset: 0xc
	// Line 517, Address: 0x1a8090, Func Offset: 0x10
	// Line 518, Address: 0x1a8094, Func Offset: 0x14
	// Line 519, Address: 0x1a8098, Func Offset: 0x18
	// Line 520, Address: 0x1a809c, Func Offset: 0x1c
	// Line 522, Address: 0x1a80a0, Func Offset: 0x20
	// Func End, Address: 0x1a80a8, Func Offset: 0x28
}

// 
// Start address: 0x1a80b0
void EnemyTexParameterRotate(EnemyTexParameter* tex, EnemyTexRotate rot)
{
	// Line 530, Address: 0x1a80b0, Func Offset: 0
	// Line 531, Address: 0x1a80c0, Func Offset: 0x10
	// Func End, Address: 0x1a80c8, Func Offset: 0x18
}

// 
// Start address: 0x1a80d0
void EnemyTexParameterSetSTAndRegionClampByUV(EnemyTexParameter* tex, int u0, int v0, int u1, int v1)
{
	float rw;
	float rh;
	int t;
	// Line 551, Address: 0x1a80d0, Func Offset: 0
	// Line 554, Address: 0x1a8100, Func Offset: 0x30
	// Line 555, Address: 0x1a810c, Func Offset: 0x3c
	// Line 556, Address: 0x1a8118, Func Offset: 0x48
	// Line 560, Address: 0x1a811c, Func Offset: 0x4c
	// Line 557, Address: 0x1a8120, Func Offset: 0x50
	// Line 556, Address: 0x1a8124, Func Offset: 0x54
	// Line 557, Address: 0x1a812c, Func Offset: 0x5c
	// Line 556, Address: 0x1a8130, Func Offset: 0x60
	// Line 557, Address: 0x1a8134, Func Offset: 0x64
	// Line 558, Address: 0x1a813c, Func Offset: 0x6c
	// Line 559, Address: 0x1a8140, Func Offset: 0x70
	// Line 558, Address: 0x1a8144, Func Offset: 0x74
	// Line 559, Address: 0x1a8148, Func Offset: 0x78
	// Line 558, Address: 0x1a814c, Func Offset: 0x7c
	// Line 559, Address: 0x1a8150, Func Offset: 0x80
	// Line 558, Address: 0x1a8154, Func Offset: 0x84
	// Line 560, Address: 0x1a8158, Func Offset: 0x88
	// Line 561, Address: 0x1a8160, Func Offset: 0x90
	// Line 562, Address: 0x1a8164, Func Offset: 0x94
	// Line 563, Address: 0x1a8168, Func Offset: 0x98
	// Line 564, Address: 0x1a816c, Func Offset: 0x9c
	// Line 565, Address: 0x1a8170, Func Offset: 0xa0
	// Line 567, Address: 0x1a817c, Func Offset: 0xac
	// Line 568, Address: 0x1a8180, Func Offset: 0xb0
	// Line 569, Address: 0x1a8184, Func Offset: 0xb4
	// Line 570, Address: 0x1a8188, Func Offset: 0xb8
	// Line 571, Address: 0x1a81d4, Func Offset: 0x104
	// Func End, Address: 0x1a81f8, Func Offset: 0x128
}

// 
// Start address: 0x1a8200
void EnemyTexParameterSetSTAndRegionClampByRect(EnemyTexParameter* tex, EnemyTexRectangle* rect)
{
	// Line 579, Address: 0x1a8200, Func Offset: 0
	// Line 580, Address: 0x1a8204, Func Offset: 0x4
	// Line 579, Address: 0x1a8208, Func Offset: 0x8
	// Line 580, Address: 0x1a820c, Func Offset: 0xc
	// Func End, Address: 0x1a8220, Func Offset: 0x20
}

// 
// Start address: 0x1a8220
unsigned long EnemyTexST(EnemyTexParameter* tex, int num, float q)
{
	float s;
	float t;
	// Line 621, Address: 0x1a8220, Func Offset: 0
	// Line 622, Address: 0x1a8228, Func Offset: 0x8
	// Line 623, Address: 0x1a8234, Func Offset: 0x14
	// Line 622, Address: 0x1a823c, Func Offset: 0x1c
	// Line 623, Address: 0x1a8248, Func Offset: 0x28
	// Line 622, Address: 0x1a824c, Func Offset: 0x2c
	// Line 624, Address: 0x1a8250, Func Offset: 0x30
	// Line 625, Address: 0x1a8258, Func Offset: 0x38
	// Line 626, Address: 0x1a8264, Func Offset: 0x44
	// Line 627, Address: 0x1a8278, Func Offset: 0x58
	// Line 628, Address: 0x1a8284, Func Offset: 0x64
	// Line 629, Address: 0x1a82a0, Func Offset: 0x80
	// Line 631, Address: 0x1a82c0, Func Offset: 0xa0
	// Line 632, Address: 0x1a82d0, Func Offset: 0xb0
	// Func End, Address: 0x1a82d8, Func Offset: 0xb8
}

// 
// Start address: 0x1a82e0
unsigned long EnemyTexSTMiddle(EnemyTexParameter* tex, float s, float t, float q)
{
	int num;
	float s0;
	float t0;
	float s1;
	float t1;
	// Line 645, Address: 0x1a82e0, Func Offset: 0
	// Line 646, Address: 0x1a82e8, Func Offset: 0x8
	// Line 647, Address: 0x1a82f8, Func Offset: 0x18
	// Line 648, Address: 0x1a8304, Func Offset: 0x24
	// Line 651, Address: 0x1a8310, Func Offset: 0x30
	// Line 649, Address: 0x1a8314, Func Offset: 0x34
	// Line 651, Address: 0x1a8318, Func Offset: 0x38
	// Line 650, Address: 0x1a831c, Func Offset: 0x3c
	// Line 651, Address: 0x1a8320, Func Offset: 0x40
	// Line 652, Address: 0x1a8324, Func Offset: 0x44
	// Line 653, Address: 0x1a8328, Func Offset: 0x48
	// Line 656, Address: 0x1a8334, Func Offset: 0x54
	// Line 654, Address: 0x1a8338, Func Offset: 0x58
	// Line 656, Address: 0x1a833c, Func Offset: 0x5c
	// Line 655, Address: 0x1a8340, Func Offset: 0x60
	// Line 656, Address: 0x1a8344, Func Offset: 0x64
	// Line 658, Address: 0x1a8348, Func Offset: 0x68
	// Line 660, Address: 0x1a834c, Func Offset: 0x6c
	// Line 659, Address: 0x1a8350, Func Offset: 0x70
	// Line 661, Address: 0x1a8354, Func Offset: 0x74
	// Line 662, Address: 0x1a8358, Func Offset: 0x78
	// Line 663, Address: 0x1a8380, Func Offset: 0xa0
	// Func End, Address: 0x1a8388, Func Offset: 0xa8
}

