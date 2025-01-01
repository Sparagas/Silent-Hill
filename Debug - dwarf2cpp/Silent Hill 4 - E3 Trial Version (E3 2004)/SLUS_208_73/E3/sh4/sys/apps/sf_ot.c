typedef struct sfOtTexLoadCallbackAllocateList;
typedef struct sfOtTexData;
typedef struct sfOtWork;
typedef struct sfOtTexLoadCallback;
typedef struct sgSotEnv;
typedef struct sgSotTag;
typedef struct sgSot;
typedef enum sfOtTexMode : unsigned char;
typedef struct sgSotEnvData;
typedef struct sfOtTexDataAddr;
typedef struct sfOtTexClutDataAddr;
typedef struct sfOtTexDataLoadFunc;

typedef void(*type_0)(unsigned int, unsigned int);
typedef void(*type_2)(unsigned int, unsigned int);
typedef void(*type_3)(unsigned int);
typedef void(*type_6)(unsigned int);
typedef void(*type_8)(unsigned int, unsigned int);
typedef void(*type_12)(unsigned int);
typedef void(*type_13)(unsigned int, unsigned int);
typedef void(*type_14)(unsigned int);

typedef sfOtTexLoadCallback type_1[16];
typedef <unknown fundamental type (0xa510)>* type_4[32];
typedef sfOtTexData type_5[16];
typedef char type_7[196608];
typedef char type_9[512];
typedef <unknown fundamental type (0xa510)> type_10[16];
typedef <unknown fundamental type (0xa510)> type_11[16][32];

struct sfOtTexLoadCallbackAllocateList
{
	sfOtTexLoadCallback work[16];
	int use_num;
	sfOtTexLoadCallbackAllocateList* next;
};

struct sfOtTexData
{
	sfOtTexMode mode;
	union
	{
		sfOtTexDataAddr addr;
		sfOtTexClutDataAddr tcaddr;
		sfOtTexDataLoadFunc func;
	};
};

struct sfOtWork
{
	<unknown fundamental type (0xa510)>* env_packet[32];
	sgSot sot_work;
	sgSotEnv* sot_env_work;
	char* packet_buffer;
	char* otbuff;
	sfOtTexData texture[16];
	sfOtTexLoadCallbackAllocateList* callback_allocatelist;
};

struct sfOtTexLoadCallback
{
	void(*func)(unsigned int, unsigned int);
	unsigned int data1;
	unsigned int data2;
};

struct sgSotEnv
{
	sgSotEnvData* env_top;
	unsigned int env_max;
	unsigned int free;
	unsigned int pad;
};

struct sgSotTag
{
	unsigned short DmaQwc;
	unsigned short DmaId;
	void* Addr;
	unsigned int W;
	unsigned short VifQwc;
	unsigned char EnvID;
	unsigned char VifDirect;
};

struct sgSot
{
	sgSotTag** ot_top;
	sgSotTag** ot_last;
	unsigned short ot_size;
	unsigned short ot_width;
	unsigned int flag;
	unsigned int w_ofs;
	unsigned int w_mini;
	unsigned int w_max;
	unsigned int dma_max;
	sgSotTag* dma_top;
	sgSotTag* dmabuf_pos;
	sgSotTag* dmakick_buf;
	unsigned short* ot_max;
	unsigned int dmatag_num;
};

enum sfOtTexMode : unsigned char
{
	SF_OT_TEXMODE_EMPTY,
	SF_OT_TEXMODE_TEXDATA_ONLY,
	SF_OT_TEXMODE_TEXDATA_WITH_CLUT,
	SF_OT_TEXMODE_LOAD_FUNC
};

struct sgSotEnvData
{
	unsigned short DmaQwc;
	unsigned short DmaId;
	void* Addr;
	unsigned int pad1;
	unsigned short VifQwc;
	unsigned char pad2;
	unsigned char VifDirect;
};

struct sfOtTexDataAddr
{
	void* texdata;
	void(*call_back)(unsigned int);
};

struct sfOtTexClutDataAddr
{
	void* texdata;
	void* clutdata;
	void(*call_back)(unsigned int, unsigned int);
};

struct sfOtTexDataLoadFunc
{
	void(*load_func)(unsigned int);
	unsigned int data;
};

sfOtWork sf_ot_work;
<unknown fundamental type (0xa510)> env_packet_buf[16][32];
char envbuff[512];
int check_flag;
<unknown fundamental type (0xa510)>* single_buffer_top;
char pkbuff[196608];

void InitWork();
void sfOtPacketBufferReset();
void* sfOtPacketBufferGet();
int sfOtPacketBufferFix(int size);
void* sfOtSotEnvPacketBufferGet(unsigned int env_id);
sgSot* sfOtSotWork();
sgSotEnv* sfOtSotEnvWork();
void sfOtInit();
void sfOtTexDataReset();
void sfOtTexLoadFuncSet(void(*load_func)(unsigned int), unsigned int data);
sfOtTexLoadCallback* callback_allocate();
void sfOtTexLoadCallbackSet(void(*func)(unsigned int, unsigned int), unsigned int data1, unsigned int data2);
void sfOtTexDataLoadExec();
void sfOtReset();
void sfOtSendAll();

// 
// Start address: 0x163570
void InitWork()
{
	int size;
	int i;
	// Line 106, Address: 0x163570, Func Offset: 0
	// Line 111, Address: 0x163574, Func Offset: 0x4
	// Line 106, Address: 0x163578, Func Offset: 0x8
	// Line 111, Address: 0x16357c, Func Offset: 0xc
	// Line 113, Address: 0x163590, Func Offset: 0x20
	// Line 115, Address: 0x1635a0, Func Offset: 0x30
	// Line 116, Address: 0x1635ac, Func Offset: 0x3c
	// Line 115, Address: 0x1635b0, Func Offset: 0x40
	// Line 116, Address: 0x1635b4, Func Offset: 0x44
	// Line 117, Address: 0x1635cc, Func Offset: 0x5c
	// Line 119, Address: 0x1635e0, Func Offset: 0x70
	// Line 117, Address: 0x1635e8, Func Offset: 0x78
	// Line 119, Address: 0x1635ec, Func Offset: 0x7c
	// Line 124, Address: 0x1635f8, Func Offset: 0x88
	// Line 120, Address: 0x163600, Func Offset: 0x90
	// Line 124, Address: 0x163604, Func Offset: 0x94
	// Line 120, Address: 0x16360c, Func Offset: 0x9c
	// Line 124, Address: 0x163628, Func Offset: 0xb8
	// Line 127, Address: 0x163690, Func Offset: 0x120
	// Func End, Address: 0x1636a0, Func Offset: 0x130
}

// 
// Start address: 0x1636a0
void sfOtPacketBufferReset()
{
	// Line 150, Address: 0x1636a0, Func Offset: 0
	// Line 149, Address: 0x1636a4, Func Offset: 0x4
	// Line 150, Address: 0x1636a8, Func Offset: 0x8
	// Line 149, Address: 0x1636ac, Func Offset: 0xc
	// Line 151, Address: 0x1636b4, Func Offset: 0x14
	// Func End, Address: 0x1636bc, Func Offset: 0x1c
}

// 
// Start address: 0x1636c0
void* sfOtPacketBufferGet()
{
	// Line 167, Address: 0x1636c0, Func Offset: 0
	// Line 172, Address: 0x1636cc, Func Offset: 0xc
	// Line 167, Address: 0x1636d0, Func Offset: 0x10
	// Line 172, Address: 0x1636d4, Func Offset: 0x14
	// Line 167, Address: 0x1636d8, Func Offset: 0x18
	// Line 172, Address: 0x1636dc, Func Offset: 0x1c
	// Line 175, Address: 0x163708, Func Offset: 0x48
	// Func End, Address: 0x163710, Func Offset: 0x50
}

// 
// Start address: 0x163710
int sfOtPacketBufferFix(int size)
{
	void* addr;
	// Line 188, Address: 0x163710, Func Offset: 0
	// Line 194, Address: 0x163714, Func Offset: 0x4
	// Line 188, Address: 0x163718, Func Offset: 0x8
	// Line 190, Address: 0x16371c, Func Offset: 0xc
	// Line 193, Address: 0x163724, Func Offset: 0x14
	// Line 191, Address: 0x163728, Func Offset: 0x18
	// Line 194, Address: 0x16372c, Func Offset: 0x1c
	// Line 191, Address: 0x163730, Func Offset: 0x20
	// Line 194, Address: 0x163734, Func Offset: 0x24
	// Line 191, Address: 0x163738, Func Offset: 0x28
	// Line 192, Address: 0x16373c, Func Offset: 0x2c
	// Line 193, Address: 0x163744, Func Offset: 0x34
	// Line 194, Address: 0x16374c, Func Offset: 0x3c
	// Line 195, Address: 0x16375c, Func Offset: 0x4c
	// Line 196, Address: 0x163768, Func Offset: 0x58
	// Line 198, Address: 0x163770, Func Offset: 0x60
	// Line 200, Address: 0x163778, Func Offset: 0x68
	// Line 201, Address: 0x163780, Func Offset: 0x70
	// Func End, Address: 0x16378c, Func Offset: 0x7c
}

// 
// Start address: 0x163790
void* sfOtSotEnvPacketBufferGet(unsigned int env_id)
{
	// Line 226, Address: 0x163790, Func Offset: 0
	// Line 228, Address: 0x1637c4, Func Offset: 0x34
	// Func End, Address: 0x1637cc, Func Offset: 0x3c
}

// 
// Start address: 0x1637d0
sgSot* sfOtSotWork()
{
	// Line 256, Address: 0x1637d0, Func Offset: 0
	// Line 257, Address: 0x1637d4, Func Offset: 0x4
	// Func End, Address: 0x1637dc, Func Offset: 0xc
}

// 
// Start address: 0x1637e0
sgSotEnv* sfOtSotEnvWork()
{
	// Line 275, Address: 0x1637e0, Func Offset: 0
	// Line 276, Address: 0x1637e4, Func Offset: 0x4
	// Func End, Address: 0x1637ec, Func Offset: 0xc
}

// 
// Start address: 0x1637f0
void sfOtInit()
{
	// Line 287, Address: 0x1637f0, Func Offset: 0
	// Line 288, Address: 0x1637f8, Func Offset: 0x8
	// Line 289, Address: 0x163800, Func Offset: 0x10
	// Line 290, Address: 0x163808, Func Offset: 0x18
	// Func End, Address: 0x163814, Func Offset: 0x24
}

// 
// Start address: 0x163820
void sfOtTexDataReset()
{
	// Line 306, Address: 0x163820, Func Offset: 0
	// Func End, Address: 0x163834, Func Offset: 0x14
}

// 
// Start address: 0x163840
void sfOtTexLoadFuncSet(void(*load_func)(unsigned int), unsigned int data)
{
	sfOtTexData* ptd;
	sfOtTexData* fptd;
	int i;
	// Line 397, Address: 0x163840, Func Offset: 0
	// Line 398, Address: 0x163844, Func Offset: 0x4
	// Line 397, Address: 0x163848, Func Offset: 0x8
	// Line 399, Address: 0x16384c, Func Offset: 0xc
	// Line 400, Address: 0x163850, Func Offset: 0x10
	// Line 399, Address: 0x163854, Func Offset: 0x14
	// Line 400, Address: 0x163858, Func Offset: 0x18
	// Line 401, Address: 0x163874, Func Offset: 0x34
	// Line 402, Address: 0x163878, Func Offset: 0x38
	// Line 403, Address: 0x163880, Func Offset: 0x40
	// Line 405, Address: 0x163888, Func Offset: 0x48
	// Line 412, Address: 0x1638a0, Func Offset: 0x60
	// Line 413, Address: 0x1638b0, Func Offset: 0x70
	// Line 418, Address: 0x1638b8, Func Offset: 0x78
	// Line 419, Address: 0x1638bc, Func Offset: 0x7c
	// Line 420, Address: 0x1638c0, Func Offset: 0x80
	// Line 421, Address: 0x1638c4, Func Offset: 0x84
	// Func End, Address: 0x1638d0, Func Offset: 0x90
}

// 
// Start address: 0x1638d0
sfOtTexLoadCallback* callback_allocate()
{
	sfOtTexLoadCallbackAllocateList* pal;
	sfOtTexLoadCallbackAllocateList** ppal;
	// Line 425, Address: 0x1638d0, Func Offset: 0
	// Line 427, Address: 0x1638dc, Func Offset: 0xc
	// Line 428, Address: 0x1638e4, Func Offset: 0x14
	// Line 429, Address: 0x1638f0, Func Offset: 0x20
	// Line 430, Address: 0x163900, Func Offset: 0x30
	// Line 432, Address: 0x163918, Func Offset: 0x48
	// Line 433, Address: 0x16391c, Func Offset: 0x4c
	// Line 434, Address: 0x163928, Func Offset: 0x58
	// Line 435, Address: 0x163930, Func Offset: 0x60
	// Line 436, Address: 0x163940, Func Offset: 0x70
	// Line 437, Address: 0x163948, Func Offset: 0x78
	// Line 438, Address: 0x16394c, Func Offset: 0x7c
	// Line 440, Address: 0x163950, Func Offset: 0x80
	// Func End, Address: 0x163960, Func Offset: 0x90
}

// 
// Start address: 0x163960
void sfOtTexLoadCallbackSet(void(*func)(unsigned int, unsigned int), unsigned int data1, unsigned int data2)
{
	sfOtTexLoadCallback* pcb;
	// Line 452, Address: 0x163960, Func Offset: 0
	// Line 454, Address: 0x16397c, Func Offset: 0x1c
	// Line 455, Address: 0x163984, Func Offset: 0x24
	// Line 456, Address: 0x16398c, Func Offset: 0x2c
	// Line 457, Address: 0x163990, Func Offset: 0x30
	// Line 458, Address: 0x163994, Func Offset: 0x34
	// Line 459, Address: 0x163998, Func Offset: 0x38
	// Func End, Address: 0x1639b0, Func Offset: 0x50
}

// 
// Start address: 0x1639b0
void sfOtTexDataLoadExec()
{
	sfOtTexData* ptd;
	sfOtTexLoadCallback* pcb;
	sfOtTexLoadCallbackAllocateList* pal;
	sfOtTexLoadCallbackAllocateList* npal;
	int i;
	unsigned int id;
	unsigned int id2;
	// Line 463, Address: 0x1639b0, Func Offset: 0
	// Line 469, Address: 0x1639c8, Func Offset: 0x18
	// Line 470, Address: 0x1639d0, Func Offset: 0x20
	// Line 471, Address: 0x1639d8, Func Offset: 0x28
	// Line 472, Address: 0x163a04, Func Offset: 0x54
	// Line 473, Address: 0x163a08, Func Offset: 0x58
	// Line 474, Address: 0x163a14, Func Offset: 0x64
	// Line 475, Address: 0x163a1c, Func Offset: 0x6c
	// Line 477, Address: 0x163a24, Func Offset: 0x74
	// Line 478, Address: 0x163a2c, Func Offset: 0x7c
	// Line 479, Address: 0x163a30, Func Offset: 0x80
	// Line 480, Address: 0x163a38, Func Offset: 0x88
	// Line 481, Address: 0x163a48, Func Offset: 0x98
	// Line 482, Address: 0x163a50, Func Offset: 0xa0
	// Line 484, Address: 0x163a58, Func Offset: 0xa8
	// Line 486, Address: 0x163a60, Func Offset: 0xb0
	// Line 489, Address: 0x163a6c, Func Offset: 0xbc
	// Line 490, Address: 0x163a80, Func Offset: 0xd0
	// Line 491, Address: 0x163a88, Func Offset: 0xd8
	// Line 494, Address: 0x163a90, Func Offset: 0xe0
	// Line 492, Address: 0x163a94, Func Offset: 0xe4
	// Line 493, Address: 0x163a98, Func Offset: 0xe8
	// Line 494, Address: 0x163a9c, Func Offset: 0xec
	// Line 495, Address: 0x163aa8, Func Offset: 0xf8
	// Line 496, Address: 0x163ab8, Func Offset: 0x108
	// Line 497, Address: 0x163ad0, Func Offset: 0x120
	// Line 499, Address: 0x163ad8, Func Offset: 0x128
	// Line 500, Address: 0x163ae0, Func Offset: 0x130
	// Line 501, Address: 0x163ae8, Func Offset: 0x138
	// Func End, Address: 0x163b04, Func Offset: 0x154
}

// 
// Start address: 0x163b10
void sfOtReset()
{
	// Line 511, Address: 0x163b10, Func Offset: 0
	// Line 512, Address: 0x163b18, Func Offset: 0x8
	// Line 513, Address: 0x163b20, Func Offset: 0x10
	// Line 514, Address: 0x163b28, Func Offset: 0x18
	// Line 515, Address: 0x163b34, Func Offset: 0x24
	// Func End, Address: 0x163b40, Func Offset: 0x30
}

// 
// Start address: 0x163b40
void sfOtSendAll()
{
	void* adr;
	// Line 526, Address: 0x163b40, Func Offset: 0
	// Line 529, Address: 0x163b48, Func Offset: 0x8
	// Line 530, Address: 0x163b50, Func Offset: 0x10
	// Line 531, Address: 0x163b64, Func Offset: 0x24
	// Line 532, Address: 0x163b6c, Func Offset: 0x2c
	// Line 541, Address: 0x163b78, Func Offset: 0x38
	// Func End, Address: 0x163b88, Func Offset: 0x48
}

