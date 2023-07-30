typedef struct sgSpkWork;
typedef struct sfBillboardWork;
typedef struct sgSotTag;
typedef struct sgSot;
typedef struct sfBillboard;


typedef float type_0[4];
typedef float type_1[4][4];
typedef float type_2[4];

struct sgSpkWork
{
	<unknown fundamental type (0xa510)>* packet;
	unsigned int packet_max;
	unsigned long* pk_last;
	unsigned long* pos;
	unsigned long* pgiftag;
	unsigned long giftag_b;
};

struct sfBillboardWork
{
	sgSpkWork* pk_work;
	sgSot* ot_work;
	unsigned int env_id;
	int zoffset;
	int woffset;
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

struct sfBillboard
{
	float worldpos[4];
	float width;
	float height;
	float transparency;
	unsigned int color;
	unsigned short u;
	unsigned short v;
	unsigned short t_width;
	unsigned short t_height;
};


void sfBillboardInit(sfBillboardWork* bb_work, sgSpkWork* pk_work, sgSot* ot_work);
void sfBillboardSetEnvId(sfBillboardWork* bb_work, unsigned int env_id);

// 
// Start address: 0x184280
void sfBillboardInit(sfBillboardWork* bb_work, sgSpkWork* pk_work, sgSot* ot_work)
{
	// Line 32, Address: 0x184280, Func Offset: 0
	// Line 33, Address: 0x184284, Func Offset: 0x4
	// Line 34, Address: 0x184288, Func Offset: 0x8
	// Line 35, Address: 0x18428c, Func Offset: 0xc
	// Line 37, Address: 0x184290, Func Offset: 0x10
	// Func End, Address: 0x184298, Func Offset: 0x18
}

// 
// Start address: 0x1842a0
void sfBillboardSetEnvId(sfBillboardWork* bb_work, unsigned int env_id)
{
	// Line 46, Address: 0x1842a0, Func Offset: 0
	// Func End, Address: 0x1842a8, Func Offset: 0x8
}

