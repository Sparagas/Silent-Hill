typedef struct sgSotEnvData;
typedef struct sgSotTag;
typedef struct sgSot;
typedef struct sgSotEnv;


typedef char type_0[262144];
typedef char type_1[65536];
typedef char type_2[512];

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

struct sgSotEnv
{
	sgSotEnvData* env_top;
	unsigned int env_max;
	unsigned int free;
	unsigned int pad;
};

int check_flag;
<unknown fundamental type (0xa510)>* single_buffer_top;
char pkbuff[262144];
sgSotEnv* sot_env_work;
char envbuff[512];
char otbuff[65536];
sgSot* sot_ptr;
sgSot sot_work;

void sgEMRenderOtPacketBufferReset();
void* sgEMRenderOtPacketBufferGet();
void sgEMRenderOtPacketBufferFix(int size);
void sgEMRenderSotInit();
sgSot* sgEMRenderSot();
sgSotEnv* sgEMRenderSotEnv();

// 
// Start address: 0x1cf040
void sgEMRenderOtPacketBufferReset()
{
	// Line 24, Address: 0x1cf040, Func Offset: 0
	// Line 23, Address: 0x1cf044, Func Offset: 0x4
	// Line 24, Address: 0x1cf048, Func Offset: 0x8
	// Line 23, Address: 0x1cf04c, Func Offset: 0xc
	// Line 25, Address: 0x1cf054, Func Offset: 0x14
	// Func End, Address: 0x1cf05c, Func Offset: 0x1c
}

// 
// Start address: 0x1cf060
void* sgEMRenderOtPacketBufferGet()
{
	// Line 32, Address: 0x1cf060, Func Offset: 0
	// Line 33, Address: 0x1cf064, Func Offset: 0x4
	// Line 32, Address: 0x1cf068, Func Offset: 0x8
	// Line 33, Address: 0x1cf06c, Func Offset: 0xc
	// Line 34, Address: 0x1cf078, Func Offset: 0x18
	// Line 37, Address: 0x1cf080, Func Offset: 0x20
	// Line 39, Address: 0x1cf088, Func Offset: 0x28
	// Line 37, Address: 0x1cf08c, Func Offset: 0x2c
	// Line 39, Address: 0x1cf090, Func Offset: 0x30
	// Line 37, Address: 0x1cf094, Func Offset: 0x34
	// Line 39, Address: 0x1cf098, Func Offset: 0x38
	// Line 37, Address: 0x1cf09c, Func Offset: 0x3c
	// Line 39, Address: 0x1cf0a0, Func Offset: 0x40
	// Line 40, Address: 0x1cf0b4, Func Offset: 0x54
	// Line 41, Address: 0x1cf0c0, Func Offset: 0x60
	// Line 43, Address: 0x1cf0c8, Func Offset: 0x68
	// Line 44, Address: 0x1cf0d8, Func Offset: 0x78
	// Func End, Address: 0x1cf0e4, Func Offset: 0x84
}

// 
// Start address: 0x1cf0f0
void sgEMRenderOtPacketBufferFix(int size)
{
	void* addr;
	// Line 51, Address: 0x1cf0f0, Func Offset: 0
	// Line 57, Address: 0x1cf0f4, Func Offset: 0x4
	// Line 51, Address: 0x1cf0f8, Func Offset: 0x8
	// Line 53, Address: 0x1cf0fc, Func Offset: 0xc
	// Line 56, Address: 0x1cf104, Func Offset: 0x14
	// Line 54, Address: 0x1cf108, Func Offset: 0x18
	// Line 57, Address: 0x1cf10c, Func Offset: 0x1c
	// Line 54, Address: 0x1cf110, Func Offset: 0x20
	// Line 57, Address: 0x1cf114, Func Offset: 0x24
	// Line 54, Address: 0x1cf118, Func Offset: 0x28
	// Line 55, Address: 0x1cf11c, Func Offset: 0x2c
	// Line 56, Address: 0x1cf124, Func Offset: 0x34
	// Line 57, Address: 0x1cf12c, Func Offset: 0x3c
	// Line 58, Address: 0x1cf13c, Func Offset: 0x4c
	// Line 59, Address: 0x1cf148, Func Offset: 0x58
	// Line 61, Address: 0x1cf150, Func Offset: 0x60
	// Line 64, Address: 0x1cf158, Func Offset: 0x68
	// Func End, Address: 0x1cf164, Func Offset: 0x74
}

// 
// Start address: 0x1cf170
void sgEMRenderSotInit()
{
	int size;
	// Line 80, Address: 0x1cf170, Func Offset: 0
	// Line 82, Address: 0x1cf174, Func Offset: 0x4
	// Line 80, Address: 0x1cf178, Func Offset: 0x8
	// Line 82, Address: 0x1cf17c, Func Offset: 0xc
	// Line 83, Address: 0x1cf184, Func Offset: 0x14
	// Line 82, Address: 0x1cf188, Func Offset: 0x18
	// Line 83, Address: 0x1cf18c, Func Offset: 0x1c
	// Line 84, Address: 0x1cf194, Func Offset: 0x24
	// Line 85, Address: 0x1cf1a8, Func Offset: 0x38
	// Line 87, Address: 0x1cf1b8, Func Offset: 0x48
	// Line 88, Address: 0x1cf1d4, Func Offset: 0x64
	// Line 89, Address: 0x1cf1e8, Func Offset: 0x78
	// Line 90, Address: 0x1cf1f0, Func Offset: 0x80
	// Func End, Address: 0x1cf1fc, Func Offset: 0x8c
}

// 
// Start address: 0x1cf200
sgSot* sgEMRenderSot()
{
	// Line 94, Address: 0x1cf200, Func Offset: 0
	// Line 95, Address: 0x1cf204, Func Offset: 0x4
	// Func End, Address: 0x1cf20c, Func Offset: 0xc
}

// 
// Start address: 0x1cf210
sgSotEnv* sgEMRenderSotEnv()
{
	// Line 100, Address: 0x1cf210, Func Offset: 0
	// Line 101, Address: 0x1cf214, Func Offset: 0x4
	// Func End, Address: 0x1cf21c, Func Offset: 0xc
}

