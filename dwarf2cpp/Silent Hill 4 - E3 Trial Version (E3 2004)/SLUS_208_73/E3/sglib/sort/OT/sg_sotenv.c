typedef struct sgSotEnv;
typedef struct sgSotEnvData;



struct sgSotEnv
{
	sgSotEnvData* env_top;
	unsigned int env_max;
	unsigned int free;
	unsigned int pad;
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

sgSotEnvData init_env;

sgSotEnv* sgSotEnvConstruct(void* workarea, unsigned int env_max);
void sgSotEnvSetGifPacket(sgSotEnv* env_work, <unknown fundamental type (0xa510)>* adr, unsigned short envid, unsigned int size);

// 
// Start address: 0x160f90
sgSotEnv* sgSotEnvConstruct(void* workarea, unsigned int env_max)
{
	sgSotEnv* env_work;
	int i;
	<unknown fundamental type (0xa510)> d_init_env;
	// Line 26, Address: 0x160f90, Func Offset: 0
	// Line 29, Address: 0x160f94, Func Offset: 0x4
	// Line 26, Address: 0x160f98, Func Offset: 0x8
	// Line 27, Address: 0x160f9c, Func Offset: 0xc
	// Line 30, Address: 0x160fa0, Func Offset: 0x10
	// Line 28, Address: 0x160fa4, Func Offset: 0x14
	// Line 30, Address: 0x160fa8, Func Offset: 0x18
	// Line 31, Address: 0x160fc8, Func Offset: 0x38
	// Line 32, Address: 0x161008, Func Offset: 0x78
	// Line 31, Address: 0x16100c, Func Offset: 0x7c
	// Line 32, Address: 0x161010, Func Offset: 0x80
	// Line 31, Address: 0x161014, Func Offset: 0x84
	// Line 32, Address: 0x161018, Func Offset: 0x88
	// Line 34, Address: 0x161028, Func Offset: 0x98
	// Func End, Address: 0x161030, Func Offset: 0xa0
}

// 
// Start address: 0x161030
void sgSotEnvSetGifPacket(sgSotEnv* env_work, <unknown fundamental type (0xa510)>* adr, unsigned short envid, unsigned int size)
{
	sgSotEnvData* pe;
	// Line 147, Address: 0x161030, Func Offset: 0
	// Line 151, Address: 0x16103c, Func Offset: 0xc
	// Line 147, Address: 0x161040, Func Offset: 0x10
	// Line 150, Address: 0x161044, Func Offset: 0x14
	// Line 148, Address: 0x161048, Func Offset: 0x18
	// Line 149, Address: 0x16104c, Func Offset: 0x1c
	// Line 148, Address: 0x161050, Func Offset: 0x20
	// Line 150, Address: 0x161054, Func Offset: 0x24
	// Line 149, Address: 0x161058, Func Offset: 0x28
	// Line 150, Address: 0x16105c, Func Offset: 0x2c
	// Line 152, Address: 0x161060, Func Offset: 0x30
	// Func End, Address: 0x161068, Func Offset: 0x38
}

