typedef struct EnemyDrawEnv;
typedef struct EnemyTextureUse;
typedef struct sgSpkWork;
typedef struct _anon0;
typedef struct EnemyTexParameter;
typedef struct _anon1;
typedef struct sfAllocateList2;
typedef union _anon2;
typedef enum EnemyTexIdentity : unsigned char;
typedef union _anon3;
typedef struct EnemyPacketChain;
typedef struct ktScene;
typedef struct ktLight;
typedef struct sgSotTag;
typedef struct sgSot;
typedef struct EnemyPacketWork;
typedef struct sgSotEnv;
typedef struct sfBillboardWork;
typedef enum EnemyBillboardNumber : unsigned char;
typedef struct _anon4;
typedef enum EnemyPacketChainLine : unsigned char;
typedef struct sgSotEnvData;


typedef float type_0[4];
typedef float type_1[4][4];
typedef float type_2[4];
typedef float type_3[4][4];
typedef _anon0 type_4[4];
typedef <unknown fundamental type (0xa510)> type_5[4];
typedef float type_6[4];
typedef float type_7[4];
typedef float type_8[4][2];
typedef float type_9[4];
typedef float type_10[4][2];
typedef _anon0 type_11[2];
typedef <unknown fundamental type (0xa510)> type_12[2];
typedef float type_13[4];
typedef float type_14[4][4];
typedef float type_15[4];
typedef sfBillboardWork type_16[2];
typedef EnemyPacketChain* type_17[3];
typedef float type_18[4][2];
typedef float type_19[4];
typedef float type_20[4][2];
typedef _anon4 type_21[2];

struct EnemyDrawEnv
{
	float world_screen[4][4];
	float view_screen[4][4];
	float camera_pos[4];
	float camera_rotate[4];
	float clip[4][2];
	float tmp[4];
	float foga;
	float fogb;
	unsigned int base_x;
	unsigned int base_y;
	unsigned int clip_flag;
	float w;
	float camera_roll;
};

struct EnemyTextureUse
{
	EnemyTexIdentity id;
	unsigned long* ptex0;
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

struct _anon0
{
	float x;
	float y;
	float z;
	float w;
};

struct EnemyTexParameter
{
	_anon4 st[2];
	EnemyTexIdentity texid;
	unsigned long clamp;
	int rotate;
};

struct _anon1
{
	ktScene current;
};

struct sfAllocateList2
{
	char* work_top;
	unsigned int size;
	unsigned int lsize;
	int number;
};

union _anon2
{
	float d[4][4];
	float i[4][4];
	_anon0 v[4];
	<unknown fundamental type (0xa510)> u128[4];
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

union _anon3
{
	float d[4][2];
	float i[4][2];
	_anon0 v[2];
	<unknown fundamental type (0xa510)> u128[2];
};

struct EnemyPacketChain
{
	void* packet;
	EnemyPacketChain* next;
};

struct ktScene
{
	_anon0 fog_col;
	int fog_near;
	int fog_far;
	float fog_a;
	float fog_b;
	unsigned char fog_pow;
	_anon0 ambi;
	int projection;
	int width;
	int height;
	int clip_width;
	int clip_height;
	int near_clip;
	int far_clip;
	int z_min;
	int z_max;
	int light_n;
	ktLight* light;
	_anon2 para_mat;
	_anon2 para_col;
	_anon2 vs;
	_anon2 vs0;
	_anon2 wv;
	_anon2 r_wv;
	_anon2 vw;
	_anon2 ws;
	_anon2 ws0;
	_anon2 vc;
	_anon2 cs;
	_anon2 vd;
	_anon2 vg;
	_anon3 vd24;
	_anon3 vg24;
	_anon3 vs24;
	_anon0 rev;
	char is_link_change;
	char is_para_change;
	char is_change;
	char is_rev;
};

struct ktLight
{
	ktLight* next;
	ktLight* link;
	float r;
	float g;
	float b;
	unsigned int type;
	_anon0 pos;
	_anon0 vec;
	float f_start;
	float f_end;
	float cone;
	float spread;
	float f_a;
	float f_b;
	float s_a;
	float s_b;
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

struct EnemyPacketWork
{
	sgSpkWork pk_work;
	sfBillboardWork bb_work[2];
	void* packet;
	EnemyPacketChain* chain_top[3];
	sfAllocateList2 texture_list;
};

struct sgSotEnv
{
	sgSotEnvData* env_top;
	unsigned int env_max;
	unsigned int free;
	unsigned int pad;
};

struct sfBillboardWork
{
	sgSpkWork* pk_work;
	sgSot* ot_work;
	unsigned int env_id;
	int zoffset;
	int woffset;
};

enum EnemyBillboardNumber : unsigned char
{
	ENEMY_BB_FIRE,
	ENEMY_BB_FIRELIGHT
};

struct _anon4
{
	float S;
	float T;
};

enum EnemyPacketChainLine : unsigned char
{
	ENEMY_PACKET_CHAIN_LINE_HALFTRANS,
	ENEMY_PACKET_CHAIN_LINE_HALFTRANS_SUB,
	ENEMY_PACKET_CHAIN_LINE_HALFTRANS2,
	ENEMY_PACKET_CHAIN_LINE_MAX
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

float draw_clip_data[4][2];
EnemyPacketWork enemy_packet_work;
float sg_vector_unit_z[4];
_anon1 kt_scene_global_work;
EnemyDrawEnv* enemy_draw_env;
EnemyDrawEnv enemy_draw_env_store;

void EnemyPacketWorkInit();
void EnemyPacketWorkAllDestruct();
void EnemyDrawPre();
void EnemyDrawPost();
sgSpkWork* EnemyPacketWorkAddress();
void EnemyPacketWorkFix();
void EnemyPacketWorkDiscard();
void EnemyPacketChainEntry(EnemyPacketChain* pc, EnemyPacketChainLine line);
void EnemyPacketChainEntryFromSpk(void* addr, EnemyPacketChainLine line);
void* EnemyPacketChainEntryFromSPR(void* addr, unsigned int size, EnemyPacketChainLine line);
void EnemyPacketChainEntryTexture(int tex, unsigned long* ptex0);
void EnemyDrawEnvStore();
void EnemyDrawEnvSet(void* base_addr);
unsigned int EnemyDrawEnvSize();
float* EnemyCameraPos();
float* EnemyCameraRot();
int EnemyCalcFog(float q);
void EnemyPacketClipReset();
void check_clip(float* vertex);
int EnemyPacketRotTransPersAndClip(float* dst, float* vertex);
int EnemyPacketRotTransPersAndClipBillboard(float dst[4], float* vertex, float w, float h);
int EnemyPacketRotTransPersAndClipHorizontalLine(float dst[4], float* vertex, float w);
int EnemyPacketSpkSetData(sgSpkWork* pkw, float* vertex, unsigned int color, EnemyTexParameter* ptex, int num);
int EnemyPacketSpkSetDataByST(sgSpkWork* pkw, float* vertex, unsigned int color, EnemyTexParameter* ptex, float s, float t);
int EnemyPacketSpkMakeDataByST(sgSpkWork* pkw, float* vertex, unsigned int color, EnemyTexParameter* ptex, float s, float t, unsigned long* dataadr);
int EnemyPacketSpkMakeDataOnlyByST(unsigned long* dataadr, float* vertex, unsigned int color, EnemyTexParameter* ptex, float s, float t);
void EnemyPacketSpkChangeDataColor(unsigned long* dataadr, unsigned int color);
int EnemyPacketClipCheck();
unsigned int EnemyPacketGetWforOT();

// 
// Start address: 0x1a02a0
void EnemyPacketWorkInit()
{
	sgSpkWork te_work;
	sgSot* p_ot_work;
	sgSotEnv* p_env_work;
	sfBillboardWork* p_bb_work;
	// Line 100, Address: 0x1a02a0, Func Offset: 0
	// Line 109, Address: 0x1a02a4, Func Offset: 0x4
	// Line 100, Address: 0x1a02a8, Func Offset: 0x8
	// Line 109, Address: 0x1a02ac, Func Offset: 0xc
	// Line 100, Address: 0x1a02b0, Func Offset: 0x10
	// Line 109, Address: 0x1a02b4, Func Offset: 0x14
	// Line 100, Address: 0x1a02b8, Func Offset: 0x18
	// Line 109, Address: 0x1a02bc, Func Offset: 0x1c
	// Line 112, Address: 0x1a02c4, Func Offset: 0x24
	// Line 113, Address: 0x1a02cc, Func Offset: 0x2c
	// Line 116, Address: 0x1a02d4, Func Offset: 0x34
	// Line 117, Address: 0x1a02d8, Func Offset: 0x38
	// Line 116, Address: 0x1a02dc, Func Offset: 0x3c
	// Line 113, Address: 0x1a02e0, Func Offset: 0x40
	// Line 117, Address: 0x1a02e4, Func Offset: 0x44
	// Line 118, Address: 0x1a02f4, Func Offset: 0x54
	// Line 119, Address: 0x1a0300, Func Offset: 0x60
	// Line 120, Address: 0x1a0304, Func Offset: 0x64
	// Line 119, Address: 0x1a0308, Func Offset: 0x68
	// Line 120, Address: 0x1a030c, Func Offset: 0x6c
	// Line 121, Address: 0x1a031c, Func Offset: 0x7c
	// Line 124, Address: 0x1a0328, Func Offset: 0x88
	// Line 126, Address: 0x1a0340, Func Offset: 0xa0
	// Line 127, Address: 0x1a0348, Func Offset: 0xa8
	// Line 128, Address: 0x1a036c, Func Offset: 0xcc
	// Line 129, Address: 0x1a0374, Func Offset: 0xd4
	// Line 128, Address: 0x1a0378, Func Offset: 0xd8
	// Line 129, Address: 0x1a037c, Func Offset: 0xdc
	// Line 130, Address: 0x1a0384, Func Offset: 0xe4
	// Line 131, Address: 0x1a038c, Func Offset: 0xec
	// Line 128, Address: 0x1a0390, Func Offset: 0xf0
	// Line 129, Address: 0x1a03a0, Func Offset: 0x100
	// Line 130, Address: 0x1a03b4, Func Offset: 0x114
	// Line 131, Address: 0x1a03c4, Func Offset: 0x124
	// Line 132, Address: 0x1a03cc, Func Offset: 0x12c
	// Line 136, Address: 0x1a03e0, Func Offset: 0x140
	// Line 138, Address: 0x1a03f8, Func Offset: 0x158
	// Line 139, Address: 0x1a0400, Func Offset: 0x160
	// Line 140, Address: 0x1a041c, Func Offset: 0x17c
	// Line 139, Address: 0x1a0424, Func Offset: 0x184
	// Line 140, Address: 0x1a0428, Func Offset: 0x188
	// Line 142, Address: 0x1a042c, Func Offset: 0x18c
	// Line 143, Address: 0x1a0438, Func Offset: 0x198
	// Line 144, Address: 0x1a0440, Func Offset: 0x1a0
	// Line 140, Address: 0x1a0444, Func Offset: 0x1a4
	// Line 142, Address: 0x1a0454, Func Offset: 0x1b4
	// Line 143, Address: 0x1a0468, Func Offset: 0x1c8
	// Line 144, Address: 0x1a0478, Func Offset: 0x1d8
	// Line 145, Address: 0x1a0480, Func Offset: 0x1e0
	// Line 149, Address: 0x1a0494, Func Offset: 0x1f4
	// Line 151, Address: 0x1a04ac, Func Offset: 0x20c
	// Line 152, Address: 0x1a04b4, Func Offset: 0x214
	// Line 153, Address: 0x1a04d0, Func Offset: 0x230
	// Line 152, Address: 0x1a04d4, Func Offset: 0x234
	// Line 153, Address: 0x1a04d8, Func Offset: 0x238
	// Line 154, Address: 0x1a04e0, Func Offset: 0x240
	// Line 157, Address: 0x1a04e4, Func Offset: 0x244
	// Line 154, Address: 0x1a04ec, Func Offset: 0x24c
	// Line 155, Address: 0x1a04f0, Func Offset: 0x250
	// Line 157, Address: 0x1a04f8, Func Offset: 0x258
	// Line 158, Address: 0x1a04fc, Func Offset: 0x25c
	// Line 159, Address: 0x1a0504, Func Offset: 0x264
	// Line 154, Address: 0x1a0508, Func Offset: 0x268
	// Line 155, Address: 0x1a0518, Func Offset: 0x278
	// Line 157, Address: 0x1a052c, Func Offset: 0x28c
	// Line 158, Address: 0x1a0540, Func Offset: 0x2a0
	// Line 159, Address: 0x1a0550, Func Offset: 0x2b0
	// Line 160, Address: 0x1a0558, Func Offset: 0x2b8
	// Line 164, Address: 0x1a056c, Func Offset: 0x2cc
	// Line 166, Address: 0x1a0584, Func Offset: 0x2e4
	// Line 167, Address: 0x1a058c, Func Offset: 0x2ec
	// Line 168, Address: 0x1a05a8, Func Offset: 0x308
	// Line 167, Address: 0x1a05ac, Func Offset: 0x30c
	// Line 168, Address: 0x1a05b0, Func Offset: 0x310
	// Line 169, Address: 0x1a05b8, Func Offset: 0x318
	// Line 171, Address: 0x1a05bc, Func Offset: 0x31c
	// Line 169, Address: 0x1a05c4, Func Offset: 0x324
	// Line 170, Address: 0x1a05c8, Func Offset: 0x328
	// Line 171, Address: 0x1a05d0, Func Offset: 0x330
	// Line 172, Address: 0x1a05d4, Func Offset: 0x334
	// Line 173, Address: 0x1a05dc, Func Offset: 0x33c
	// Line 169, Address: 0x1a05e0, Func Offset: 0x340
	// Line 170, Address: 0x1a05f0, Func Offset: 0x350
	// Line 171, Address: 0x1a0604, Func Offset: 0x364
	// Line 172, Address: 0x1a0618, Func Offset: 0x378
	// Line 173, Address: 0x1a0628, Func Offset: 0x388
	// Line 174, Address: 0x1a0630, Func Offset: 0x390
	// Line 179, Address: 0x1a0644, Func Offset: 0x3a4
	// Func End, Address: 0x1a065c, Func Offset: 0x3bc
}

// 
// Start address: 0x1a0660
void EnemyPacketWorkAllDestruct()
{
	// Line 185, Address: 0x1a0660, Func Offset: 0
	// Func End, Address: 0x1a066c, Func Offset: 0xc
}

// 
// Start address: 0x1a0670
void EnemyDrawPre()
{
	sgSpkWork* p_pk_work;
	sgSot* p_ot_work;
	// Line 191, Address: 0x1a0670, Func Offset: 0
	// Line 196, Address: 0x1a0680, Func Offset: 0x10
	// Line 199, Address: 0x1a0690, Func Offset: 0x20
	// Line 200, Address: 0x1a0698, Func Offset: 0x28
	// Line 203, Address: 0x1a06a0, Func Offset: 0x30
	// Line 204, Address: 0x1a06a8, Func Offset: 0x38
	// Line 207, Address: 0x1a06b4, Func Offset: 0x44
	// Line 208, Address: 0x1a06d0, Func Offset: 0x60
	// Line 207, Address: 0x1a06d4, Func Offset: 0x64
	// Line 208, Address: 0x1a06d8, Func Offset: 0x68
	// Line 209, Address: 0x1a06dc, Func Offset: 0x6c
	// Line 210, Address: 0x1a06e4, Func Offset: 0x74
	// Line 208, Address: 0x1a06e8, Func Offset: 0x78
	// Line 209, Address: 0x1a06f8, Func Offset: 0x88
	// Line 210, Address: 0x1a0708, Func Offset: 0x98
	// Line 211, Address: 0x1a0710, Func Offset: 0xa0
	// Line 213, Address: 0x1a0728, Func Offset: 0xb8
	// Line 219, Address: 0x1a0730, Func Offset: 0xc0
	// Line 225, Address: 0x1a0748, Func Offset: 0xd8
	// Func End, Address: 0x1a0760, Func Offset: 0xf0
}

// 
// Start address: 0x1a0760
void EnemyDrawPost()
{
	EnemyTextureUse* pt;
	void* adr;
	void* tadr;
	unsigned int* pcur;
	unsigned long* pcur2;
	EnemyPacketChain* pc;
	int i;
	int f;
	// Line 230, Address: 0x1a0760, Func Offset: 0
	// Line 231, Address: 0x1a0770, Func Offset: 0x10
	// Line 240, Address: 0x1a07a0, Func Offset: 0x40
	// Line 241, Address: 0x1a07b0, Func Offset: 0x50
	// Line 242, Address: 0x1a07b8, Func Offset: 0x58
	// Line 243, Address: 0x1a07c0, Func Offset: 0x60
	// Line 244, Address: 0x1a07cc, Func Offset: 0x6c
	// Line 245, Address: 0x1a07dc, Func Offset: 0x7c
	// Line 246, Address: 0x1a07e0, Func Offset: 0x80
	// Line 247, Address: 0x1a07f4, Func Offset: 0x94
	// Line 256, Address: 0x1a0800, Func Offset: 0xa0
	// Line 257, Address: 0x1a0808, Func Offset: 0xa8
	// Line 260, Address: 0x1a0814, Func Offset: 0xb4
	// Line 258, Address: 0x1a081c, Func Offset: 0xbc
	// Line 259, Address: 0x1a0824, Func Offset: 0xc4
	// Line 258, Address: 0x1a0828, Func Offset: 0xc8
	// Line 260, Address: 0x1a082c, Func Offset: 0xcc
	// Line 280, Address: 0x1a0834, Func Offset: 0xd4
	// Line 296, Address: 0x1a0838, Func Offset: 0xd8
	// Line 280, Address: 0x1a083c, Func Offset: 0xdc
	// Line 263, Address: 0x1a0840, Func Offset: 0xe0
	// Line 285, Address: 0x1a0844, Func Offset: 0xe4
	// Line 263, Address: 0x1a0848, Func Offset: 0xe8
	// Line 285, Address: 0x1a084c, Func Offset: 0xec
	// Line 283, Address: 0x1a0850, Func Offset: 0xf0
	// Line 289, Address: 0x1a0854, Func Offset: 0xf4
	// Line 286, Address: 0x1a0858, Func Offset: 0xf8
	// Line 287, Address: 0x1a085c, Func Offset: 0xfc
	// Line 290, Address: 0x1a0860, Func Offset: 0x100
	// Line 289, Address: 0x1a0864, Func Offset: 0x104
	// Line 273, Address: 0x1a0868, Func Offset: 0x108
	// Line 260, Address: 0x1a086c, Func Offset: 0x10c
	// Line 261, Address: 0x1a0870, Func Offset: 0x110
	// Line 262, Address: 0x1a0874, Func Offset: 0x114
	// Line 263, Address: 0x1a087c, Func Offset: 0x11c
	// Line 265, Address: 0x1a089c, Func Offset: 0x13c
	// Line 266, Address: 0x1a08a0, Func Offset: 0x140
	// Line 267, Address: 0x1a08a4, Func Offset: 0x144
	// Line 268, Address: 0x1a08a8, Func Offset: 0x148
	// Line 269, Address: 0x1a08ac, Func Offset: 0x14c
	// Line 271, Address: 0x1a08b0, Func Offset: 0x150
	// Line 272, Address: 0x1a08b4, Func Offset: 0x154
	// Line 273, Address: 0x1a08b8, Func Offset: 0x158
	// Line 274, Address: 0x1a08bc, Func Offset: 0x15c
	// Line 275, Address: 0x1a08c0, Func Offset: 0x160
	// Line 276, Address: 0x1a08c4, Func Offset: 0x164
	// Line 278, Address: 0x1a08c8, Func Offset: 0x168
	// Line 280, Address: 0x1a08d0, Func Offset: 0x170
	// Line 281, Address: 0x1a08d4, Func Offset: 0x174
	// Line 282, Address: 0x1a08d8, Func Offset: 0x178
	// Line 283, Address: 0x1a08dc, Func Offset: 0x17c
	// Line 285, Address: 0x1a08e0, Func Offset: 0x180
	// Line 286, Address: 0x1a08e4, Func Offset: 0x184
	// Line 287, Address: 0x1a08e8, Func Offset: 0x188
	// Line 288, Address: 0x1a08ec, Func Offset: 0x18c
	// Line 289, Address: 0x1a08f0, Func Offset: 0x190
	// Line 290, Address: 0x1a08f4, Func Offset: 0x194
	// Line 295, Address: 0x1a08f8, Func Offset: 0x198
	// Line 296, Address: 0x1a0900, Func Offset: 0x1a0
	// Line 297, Address: 0x1a0904, Func Offset: 0x1a4
	// Line 302, Address: 0x1a0908, Func Offset: 0x1a8
	// Line 297, Address: 0x1a090c, Func Offset: 0x1ac
	// Line 298, Address: 0x1a0918, Func Offset: 0x1b8
	// Line 299, Address: 0x1a091c, Func Offset: 0x1bc
	// Line 301, Address: 0x1a0920, Func Offset: 0x1c0
	// Line 300, Address: 0x1a0924, Func Offset: 0x1c4
	// Line 303, Address: 0x1a0928, Func Offset: 0x1c8
	// Line 304, Address: 0x1a0930, Func Offset: 0x1d0
	// Line 305, Address: 0x1a0940, Func Offset: 0x1e0
	// Line 312, Address: 0x1a0948, Func Offset: 0x1e8
	// Line 306, Address: 0x1a094c, Func Offset: 0x1ec
	// Line 312, Address: 0x1a0950, Func Offset: 0x1f0
	// Line 307, Address: 0x1a0954, Func Offset: 0x1f4
	// Line 315, Address: 0x1a0958, Func Offset: 0x1f8
	// Line 308, Address: 0x1a095c, Func Offset: 0x1fc
	// Line 315, Address: 0x1a0960, Func Offset: 0x200
	// Line 309, Address: 0x1a0964, Func Offset: 0x204
	// Line 317, Address: 0x1a0968, Func Offset: 0x208
	// Line 312, Address: 0x1a096c, Func Offset: 0x20c
	// Line 314, Address: 0x1a0970, Func Offset: 0x210
	// Line 313, Address: 0x1a0974, Func Offset: 0x214
	// Line 317, Address: 0x1a0978, Func Offset: 0x218
	// Line 314, Address: 0x1a097c, Func Offset: 0x21c
	// Line 317, Address: 0x1a0980, Func Offset: 0x220
	// Line 315, Address: 0x1a0988, Func Offset: 0x228
	// Line 317, Address: 0x1a098c, Func Offset: 0x22c
	// Line 321, Address: 0x1a0990, Func Offset: 0x230
	// Line 318, Address: 0x1a0994, Func Offset: 0x234
	// Line 325, Address: 0x1a0998, Func Offset: 0x238
	// Line 318, Address: 0x1a099c, Func Offset: 0x23c
	// Line 320, Address: 0x1a09a0, Func Offset: 0x240
	// Line 319, Address: 0x1a09a4, Func Offset: 0x244
	// Line 320, Address: 0x1a09a8, Func Offset: 0x248
	// Line 321, Address: 0x1a09ac, Func Offset: 0x24c
	// Line 322, Address: 0x1a09b0, Func Offset: 0x250
	// Line 323, Address: 0x1a09b8, Func Offset: 0x258
	// Line 324, Address: 0x1a09bc, Func Offset: 0x25c
	// Line 323, Address: 0x1a09c0, Func Offset: 0x260
	// Line 324, Address: 0x1a09c4, Func Offset: 0x264
	// Line 328, Address: 0x1a09c8, Func Offset: 0x268
	// Line 330, Address: 0x1a09dc, Func Offset: 0x27c
	// Line 331, Address: 0x1a09e4, Func Offset: 0x284
	// Line 332, Address: 0x1a09ec, Func Offset: 0x28c
	// Line 333, Address: 0x1a09f8, Func Offset: 0x298
	// Line 334, Address: 0x1a0a00, Func Offset: 0x2a0
	// Line 344, Address: 0x1a0a08, Func Offset: 0x2a8
	// Func End, Address: 0x1a0a20, Func Offset: 0x2c0
}

// 
// Start address: 0x1a0a20
sgSpkWork* EnemyPacketWorkAddress()
{
	void* adr;
	// Line 350, Address: 0x1a0a20, Func Offset: 0
	// Line 358, Address: 0x1a0a28, Func Offset: 0x8
	// Line 360, Address: 0x1a0a34, Func Offset: 0x14
	// Line 358, Address: 0x1a0a38, Func Offset: 0x18
	// Line 359, Address: 0x1a0a3c, Func Offset: 0x1c
	// Line 360, Address: 0x1a0a44, Func Offset: 0x24
	// Line 359, Address: 0x1a0a48, Func Offset: 0x28
	// Line 360, Address: 0x1a0a4c, Func Offset: 0x2c
	// Line 362, Address: 0x1a0a54, Func Offset: 0x34
	// Line 361, Address: 0x1a0a58, Func Offset: 0x38
	// Line 362, Address: 0x1a0a60, Func Offset: 0x40
	// Func End, Address: 0x1a0a68, Func Offset: 0x48
}

// 
// Start address: 0x1a0a70
void EnemyPacketWorkFix()
{
	// Line 374, Address: 0x1a0a70, Func Offset: 0
	// Func End, Address: 0x1a0a90, Func Offset: 0x20
}

// 
// Start address: 0x1a0a90
void EnemyPacketWorkDiscard()
{
	// Line 388, Address: 0x1a0a90, Func Offset: 0
	// Func End, Address: 0x1a0a98, Func Offset: 0x8
}

// 
// Start address: 0x1a0aa0
void EnemyPacketChainEntry(EnemyPacketChain* pc, EnemyPacketChainLine line)
{
	EnemyPacketChain* pct;
	// Line 401, Address: 0x1a0aa4, Func Offset: 0x4
	// Line 402, Address: 0x1a0ad0, Func Offset: 0x30
	// Line 403, Address: 0x1a0ad4, Func Offset: 0x34
	// Line 404, Address: 0x1a0ae0, Func Offset: 0x40
	// Line 405, Address: 0x1a0ae8, Func Offset: 0x48
	// Line 406, Address: 0x1a0af0, Func Offset: 0x50
	// Line 408, Address: 0x1a0b08, Func Offset: 0x68
	// Line 409, Address: 0x1a0b10, Func Offset: 0x70
	// Line 410, Address: 0x1a0b14, Func Offset: 0x74
	// Line 411, Address: 0x1a0b18, Func Offset: 0x78
	// Line 412, Address: 0x1a0b1c, Func Offset: 0x7c
	// Func End, Address: 0x1a0b28, Func Offset: 0x88
}

// 
// Start address: 0x1a0b30
void EnemyPacketChainEntryFromSpk(void* addr, EnemyPacketChainLine line)
{
	EnemyPacketChain* pc;
	unsigned int* p;
	int n;
	// Line 419, Address: 0x1a0b30, Func Offset: 0
	// Line 423, Address: 0x1a0b48, Func Offset: 0x18
	// Line 424, Address: 0x1a0b60, Func Offset: 0x30
	// Line 425, Address: 0x1a0b74, Func Offset: 0x44
	// Line 430, Address: 0x1a0b78, Func Offset: 0x48
	// Line 426, Address: 0x1a0b7c, Func Offset: 0x4c
	// Line 429, Address: 0x1a0b80, Func Offset: 0x50
	// Line 427, Address: 0x1a0b84, Func Offset: 0x54
	// Line 433, Address: 0x1a0b88, Func Offset: 0x58
	// Line 430, Address: 0x1a0b8c, Func Offset: 0x5c
	// Line 435, Address: 0x1a0b90, Func Offset: 0x60
	// Line 439, Address: 0x1a0b94, Func Offset: 0x64
	// Line 429, Address: 0x1a0b98, Func Offset: 0x68
	// Line 433, Address: 0x1a0b9c, Func Offset: 0x6c
	// Line 429, Address: 0x1a0ba0, Func Offset: 0x70
	// Line 430, Address: 0x1a0ba4, Func Offset: 0x74
	// Line 432, Address: 0x1a0ba8, Func Offset: 0x78
	// Line 433, Address: 0x1a0bac, Func Offset: 0x7c
	// Line 435, Address: 0x1a0bb0, Func Offset: 0x80
	// Line 436, Address: 0x1a0bb4, Func Offset: 0x84
	// Line 437, Address: 0x1a0bb8, Func Offset: 0x88
	// Line 439, Address: 0x1a0bbc, Func Offset: 0x8c
	// Line 440, Address: 0x1a0bc4, Func Offset: 0x94
	// Line 441, Address: 0x1a0bd0, Func Offset: 0xa0
	// Func End, Address: 0x1a0be8, Func Offset: 0xb8
}

// 
// Start address: 0x1a0bf0
void* EnemyPacketChainEntryFromSPR(void* addr, unsigned int size, EnemyPacketChainLine line)
{
	void* ptop;
	void* madr;
	EnemyPacketChain* pc;
	// Line 451, Address: 0x1a0bf0, Func Offset: 0
	// Line 454, Address: 0x1a0c18, Func Offset: 0x28
	// Line 455, Address: 0x1a0c24, Func Offset: 0x34
	// Line 454, Address: 0x1a0c28, Func Offset: 0x38
	// Line 455, Address: 0x1a0c2c, Func Offset: 0x3c
	// Line 457, Address: 0x1a0c48, Func Offset: 0x58
	// Line 458, Address: 0x1a0c4c, Func Offset: 0x5c
	// Line 457, Address: 0x1a0c50, Func Offset: 0x60
	// Line 458, Address: 0x1a0c54, Func Offset: 0x64
	// Line 457, Address: 0x1a0c5c, Func Offset: 0x6c
	// Line 458, Address: 0x1a0c60, Func Offset: 0x70
	// Line 457, Address: 0x1a0c64, Func Offset: 0x74
	// Line 460, Address: 0x1a0c68, Func Offset: 0x78
	// Line 461, Address: 0x1a0c70, Func Offset: 0x80
	// Line 462, Address: 0x1a0c7c, Func Offset: 0x8c
	// Line 463, Address: 0x1a0c80, Func Offset: 0x90
	// Line 462, Address: 0x1a0c84, Func Offset: 0x94
	// Line 463, Address: 0x1a0c88, Func Offset: 0x98
	// Line 466, Address: 0x1a0c90, Func Offset: 0xa0
	// Line 464, Address: 0x1a0c94, Func Offset: 0xa4
	// Line 466, Address: 0x1a0c98, Func Offset: 0xa8
	// Line 464, Address: 0x1a0c9c, Func Offset: 0xac
	// Line 466, Address: 0x1a0ca0, Func Offset: 0xb0
	// Line 465, Address: 0x1a0ca4, Func Offset: 0xb4
	// Line 466, Address: 0x1a0cac, Func Offset: 0xbc
	// Line 467, Address: 0x1a0cb4, Func Offset: 0xc4
	// Line 468, Address: 0x1a0cc0, Func Offset: 0xd0
	// Line 469, Address: 0x1a0cd0, Func Offset: 0xe0
	// Func End, Address: 0x1a0cf4, Func Offset: 0x104
}

// 
// Start address: 0x1a0d00
void EnemyPacketChainEntryTexture(int tex, unsigned long* ptex0)
{
	EnemyTextureUse* pt;
	// Line 476, Address: 0x1a0d00, Func Offset: 0
	// Line 478, Address: 0x1a0d14, Func Offset: 0x14
	// Line 479, Address: 0x1a0d24, Func Offset: 0x24
	// Line 480, Address: 0x1a0d2c, Func Offset: 0x2c
	// Line 481, Address: 0x1a0d30, Func Offset: 0x30
	// Line 482, Address: 0x1a0d34, Func Offset: 0x34
	// Line 483, Address: 0x1a0d38, Func Offset: 0x38
	// Func End, Address: 0x1a0d4c, Func Offset: 0x4c
}

// 
// Start address: 0x1a0d50
void EnemyDrawEnvStore()
{
	EnemyDrawEnv* pede;
	int w;
	int h;
	float mat[4][4];
	// Line 488, Address: 0x1a0d50, Func Offset: 0
	// Line 491, Address: 0x1a0d54, Func Offset: 0x4
	// Line 488, Address: 0x1a0d58, Func Offset: 0x8
	// Line 489, Address: 0x1a0d60, Func Offset: 0x10
	// Line 488, Address: 0x1a0d64, Func Offset: 0x14
	// Line 489, Address: 0x1a0d68, Func Offset: 0x18
	// Line 493, Address: 0x1a0d6c, Func Offset: 0x1c
	// Line 495, Address: 0x1a0d78, Func Offset: 0x28
	// Line 497, Address: 0x1a0d80, Func Offset: 0x30
	// Line 499, Address: 0x1a0d88, Func Offset: 0x38
	// Line 500, Address: 0x1a0d90, Func Offset: 0x40
	// Line 501, Address: 0x1a0d98, Func Offset: 0x48
	// Line 502, Address: 0x1a0dac, Func Offset: 0x5c
	// Line 501, Address: 0x1a0db0, Func Offset: 0x60
	// Line 502, Address: 0x1a0db4, Func Offset: 0x64
	// Line 504, Address: 0x1a0dc8, Func Offset: 0x78
	// Line 502, Address: 0x1a0dcc, Func Offset: 0x7c
	// Line 508, Address: 0x1a0dd4, Func Offset: 0x84
	// Line 504, Address: 0x1a0dd8, Func Offset: 0x88
	// Line 505, Address: 0x1a0ddc, Func Offset: 0x8c
	// Line 506, Address: 0x1a0de0, Func Offset: 0x90
	// Line 508, Address: 0x1a0de4, Func Offset: 0x94
	// Line 509, Address: 0x1a0df8, Func Offset: 0xa8
	// Line 508, Address: 0x1a0dfc, Func Offset: 0xac
	// Line 509, Address: 0x1a0e00, Func Offset: 0xb0
	// Line 508, Address: 0x1a0e04, Func Offset: 0xb4
	// Line 509, Address: 0x1a0e14, Func Offset: 0xc4
	// Line 517, Address: 0x1a0e30, Func Offset: 0xe0
	// Line 509, Address: 0x1a0e34, Func Offset: 0xe4
	// Line 523, Address: 0x1a0e38, Func Offset: 0xe8
	// Line 509, Address: 0x1a0e3c, Func Offset: 0xec
	// Line 510, Address: 0x1a0e44, Func Offset: 0xf4
	// Line 511, Address: 0x1a0e48, Func Offset: 0xf8
	// Line 510, Address: 0x1a0e50, Func Offset: 0x100
	// Line 511, Address: 0x1a0e54, Func Offset: 0x104
	// Line 517, Address: 0x1a0e58, Func Offset: 0x108
	// Line 518, Address: 0x1a0e60, Func Offset: 0x110
	// Line 523, Address: 0x1a0e68, Func Offset: 0x118
	// Line 524, Address: 0x1a0e70, Func Offset: 0x120
	// Line 526, Address: 0x1a0e80, Func Offset: 0x130
	// Line 524, Address: 0x1a0e84, Func Offset: 0x134
	// Line 526, Address: 0x1a0e88, Func Offset: 0x138
	// Line 528, Address: 0x1a0e98, Func Offset: 0x148
	// Func End, Address: 0x1a0eac, Func Offset: 0x15c
}

// 
// Start address: 0x1a0eb0
void EnemyDrawEnvSet(void* base_addr)
{
	EnemyDrawEnv* pede;
	// Line 536, Address: 0x1a0eb0, Func Offset: 0
	// Line 537, Address: 0x1a0eb4, Func Offset: 0x4
	// Line 536, Address: 0x1a0eb8, Func Offset: 0x8
	// Line 537, Address: 0x1a0ebc, Func Offset: 0xc
	// Line 538, Address: 0x1a0ee4, Func Offset: 0x34
	// Func End, Address: 0x1a0eec, Func Offset: 0x3c
}

// 
// Start address: 0x1a0ef0
unsigned int EnemyDrawEnvSize()
{
	// Line 546, Address: 0x1a0ef0, Func Offset: 0
	// Func End, Address: 0x1a0ef8, Func Offset: 0x8
}

// 
// Start address: 0x1a0f00
float* EnemyCameraPos()
{
	// Line 569, Address: 0x1a0f00, Func Offset: 0
	// Line 570, Address: 0x1a0f08, Func Offset: 0x8
	// Func End, Address: 0x1a0f10, Func Offset: 0x10
}

// 
// Start address: 0x1a0f10
float* EnemyCameraRot()
{
	// Line 577, Address: 0x1a0f10, Func Offset: 0
	// Line 578, Address: 0x1a0f18, Func Offset: 0x8
	// Func End, Address: 0x1a0f20, Func Offset: 0x10
}

// 
// Start address: 0x1a0f20
int EnemyCalcFog(float q)
{
	EnemyDrawEnv* pede;
	// Line 624, Address: 0x1a0f20, Func Offset: 0
	// Line 625, Address: 0x1a0f24, Func Offset: 0x4
	// Line 624, Address: 0x1a0f28, Func Offset: 0x8
	// Line 625, Address: 0x1a0f2c, Func Offset: 0xc
	// Line 626, Address: 0x1a0f58, Func Offset: 0x38
	// Func End, Address: 0x1a0f60, Func Offset: 0x40
}

// 
// Start address: 0x1a0f60
void EnemyPacketClipReset()
{
	// Line 632, Address: 0x1a0f60, Func Offset: 0
	// Line 633, Address: 0x1a0f70, Func Offset: 0x10
	// Line 634, Address: 0x1a0f78, Func Offset: 0x18
	// Func End, Address: 0x1a0f80, Func Offset: 0x20
}

// 
// Start address: 0x1a0f80
void check_clip(float* vertex)
{
	// Line 641, Address: 0x1a0f80, Func Offset: 0
	// Line 643, Address: 0x1a0f88, Func Offset: 0x8
	// Line 644, Address: 0x1a0f8c, Func Offset: 0xc
	// Line 646, Address: 0x1a0f94, Func Offset: 0x14
	// Line 647, Address: 0x1a0f98, Func Offset: 0x18
	// Line 648, Address: 0x1a0f9c, Func Offset: 0x1c
	// Line 649, Address: 0x1a0fa0, Func Offset: 0x20
	// Line 650, Address: 0x1a0fa4, Func Offset: 0x24
	// Line 651, Address: 0x1a0fa8, Func Offset: 0x28
	// Line 652, Address: 0x1a0fac, Func Offset: 0x2c
	// Line 653, Address: 0x1a0fb0, Func Offset: 0x30
	// Line 654, Address: 0x1a0fb4, Func Offset: 0x34
	// Line 655, Address: 0x1a0fb8, Func Offset: 0x38
	// Line 656, Address: 0x1a0fbc, Func Offset: 0x3c
	// Line 657, Address: 0x1a0fc0, Func Offset: 0x40
	// Line 658, Address: 0x1a0fc4, Func Offset: 0x44
	// Line 659, Address: 0x1a0fc8, Func Offset: 0x48
	// Line 660, Address: 0x1a0fcc, Func Offset: 0x4c
	// Line 663, Address: 0x1a0fd0, Func Offset: 0x50
	// Func End, Address: 0x1a0fd8, Func Offset: 0x58
}

// 
// Start address: 0x1a0fe0
int EnemyPacketRotTransPersAndClip(float* dst, float* vertex)
{
	EnemyDrawEnv* pede;
	float x;
	float y;
	float z;
	float w;
	// Line 671, Address: 0x1a0fe0, Func Offset: 0
	// Line 672, Address: 0x1a0fe4, Func Offset: 0x4
	// Line 671, Address: 0x1a0fe8, Func Offset: 0x8
	// Line 672, Address: 0x1a0fec, Func Offset: 0xc
	// Line 674, Address: 0x1a0ff0, Func Offset: 0x10
	// Line 679, Address: 0x1a1024, Func Offset: 0x44
	// Line 675, Address: 0x1a1028, Func Offset: 0x48
	// Line 677, Address: 0x1a102c, Func Offset: 0x4c
	// Line 678, Address: 0x1a1030, Func Offset: 0x50
	// Line 679, Address: 0x1a1034, Func Offset: 0x54
	// Line 683, Address: 0x1a1090, Func Offset: 0xb0
	// Line 685, Address: 0x1a1098, Func Offset: 0xb8
	// Line 686, Address: 0x1a10a0, Func Offset: 0xc0
	// Line 687, Address: 0x1a10a8, Func Offset: 0xc8
	// Line 688, Address: 0x1a10b0, Func Offset: 0xd0
	// Func End, Address: 0x1a10bc, Func Offset: 0xdc
}

// 
// Start address: 0x1a10c0
int EnemyPacketRotTransPersAndClipBillboard(float dst[4], float* vertex, float w, float h)
{
	EnemyDrawEnv* pede;
	float* vtx;
	float* tvtx;
	float q;
	float qx;
	float qy;
	float* vec;
	float tx;
	float ty;
	// Line 701, Address: 0x1a10c0, Func Offset: 0
	// Line 705, Address: 0x1a10f4, Func Offset: 0x34
	// Line 709, Address: 0x1a1110, Func Offset: 0x50
	// Line 706, Address: 0x1a1118, Func Offset: 0x58
	// Line 709, Address: 0x1a1120, Func Offset: 0x60
	// Line 708, Address: 0x1a1124, Func Offset: 0x64
	// Line 709, Address: 0x1a1128, Func Offset: 0x68
	// Line 710, Address: 0x1a112c, Func Offset: 0x6c
	// Line 711, Address: 0x1a1138, Func Offset: 0x78
	// Line 712, Address: 0x1a1140, Func Offset: 0x80
	// Line 711, Address: 0x1a1144, Func Offset: 0x84
	// Line 712, Address: 0x1a1148, Func Offset: 0x88
	// Line 713, Address: 0x1a1160, Func Offset: 0xa0
	// Line 717, Address: 0x1a1164, Func Offset: 0xa4
	// Line 713, Address: 0x1a1168, Func Offset: 0xa8
	// Line 714, Address: 0x1a1170, Func Offset: 0xb0
	// Line 715, Address: 0x1a117c, Func Offset: 0xbc
	// Line 717, Address: 0x1a1184, Func Offset: 0xc4
	// Line 718, Address: 0x1a118c, Func Offset: 0xcc
	// Line 719, Address: 0x1a1198, Func Offset: 0xd8
	// Line 720, Address: 0x1a119c, Func Offset: 0xdc
	// Line 721, Address: 0x1a11a0, Func Offset: 0xe0
	// Line 720, Address: 0x1a11a4, Func Offset: 0xe4
	// Line 721, Address: 0x1a11a8, Func Offset: 0xe8
	// Line 722, Address: 0x1a11b0, Func Offset: 0xf0
	// Line 723, Address: 0x1a11bc, Func Offset: 0xfc
	// Line 724, Address: 0x1a11c0, Func Offset: 0x100
	// Line 725, Address: 0x1a11c4, Func Offset: 0x104
	// Line 724, Address: 0x1a11c8, Func Offset: 0x108
	// Line 725, Address: 0x1a11cc, Func Offset: 0x10c
	// Line 726, Address: 0x1a11d4, Func Offset: 0x114
	// Line 727, Address: 0x1a11e0, Func Offset: 0x120
	// Line 728, Address: 0x1a11e4, Func Offset: 0x124
	// Line 729, Address: 0x1a11e8, Func Offset: 0x128
	// Line 728, Address: 0x1a11ec, Func Offset: 0x12c
	// Line 729, Address: 0x1a11f0, Func Offset: 0x130
	// Line 730, Address: 0x1a11f8, Func Offset: 0x138
	// Line 731, Address: 0x1a1200, Func Offset: 0x140
	// Line 733, Address: 0x1a1204, Func Offset: 0x144
	// Line 736, Address: 0x1a1208, Func Offset: 0x148
	// Line 734, Address: 0x1a120c, Func Offset: 0x14c
	// Line 736, Address: 0x1a1210, Func Offset: 0x150
	// Line 737, Address: 0x1a1220, Func Offset: 0x160
	// Line 743, Address: 0x1a1224, Func Offset: 0x164
	// Line 739, Address: 0x1a1228, Func Offset: 0x168
	// Line 738, Address: 0x1a122c, Func Offset: 0x16c
	// Line 739, Address: 0x1a1230, Func Offset: 0x170
	// Line 740, Address: 0x1a1238, Func Offset: 0x178
	// Line 741, Address: 0x1a1244, Func Offset: 0x184
	// Line 743, Address: 0x1a124c, Func Offset: 0x18c
	// Line 744, Address: 0x1a1254, Func Offset: 0x194
	// Line 745, Address: 0x1a1260, Func Offset: 0x1a0
	// Line 746, Address: 0x1a1264, Func Offset: 0x1a4
	// Line 747, Address: 0x1a1268, Func Offset: 0x1a8
	// Line 749, Address: 0x1a1270, Func Offset: 0x1b0
	// Line 750, Address: 0x1a1284, Func Offset: 0x1c4
	// Line 752, Address: 0x1a1288, Func Offset: 0x1c8
	// Line 750, Address: 0x1a128c, Func Offset: 0x1cc
	// Line 751, Address: 0x1a1298, Func Offset: 0x1d8
	// Line 752, Address: 0x1a12a4, Func Offset: 0x1e4
	// Line 753, Address: 0x1a12ac, Func Offset: 0x1ec
	// Line 754, Address: 0x1a12b8, Func Offset: 0x1f8
	// Line 755, Address: 0x1a12bc, Func Offset: 0x1fc
	// Line 757, Address: 0x1a12c0, Func Offset: 0x200
	// Line 755, Address: 0x1a12c4, Func Offset: 0x204
	// Line 756, Address: 0x1a12cc, Func Offset: 0x20c
	// Line 757, Address: 0x1a12d4, Func Offset: 0x214
	// Line 758, Address: 0x1a12dc, Func Offset: 0x21c
	// Line 760, Address: 0x1a12e0, Func Offset: 0x220
	// Line 759, Address: 0x1a12e4, Func Offset: 0x224
	// Line 760, Address: 0x1a12e8, Func Offset: 0x228
	// Line 761, Address: 0x1a12f0, Func Offset: 0x230
	// Line 762, Address: 0x1a12f4, Func Offset: 0x234
	// Line 764, Address: 0x1a12f8, Func Offset: 0x238
	// Line 762, Address: 0x1a12fc, Func Offset: 0x23c
	// Line 763, Address: 0x1a1304, Func Offset: 0x244
	// Line 764, Address: 0x1a130c, Func Offset: 0x24c
	// Line 765, Address: 0x1a1314, Func Offset: 0x254
	// Line 766, Address: 0x1a1318, Func Offset: 0x258
	// Line 767, Address: 0x1a1320, Func Offset: 0x260
	// Func End, Address: 0x1a1350, Func Offset: 0x290
}

// 
// Start address: 0x1a1350
int EnemyPacketRotTransPersAndClipHorizontalLine(float dst[4], float* vertex, float w)
{
	EnemyDrawEnv* pede;
	float* vtx;
	float* tvtx;
	float q;
	float qx;
	float* vec;
	float tx;
	float ty;
	// Line 779, Address: 0x1a1350, Func Offset: 0
	// Line 783, Address: 0x1a1374, Func Offset: 0x24
	// Line 787, Address: 0x1a1390, Func Offset: 0x40
	// Line 784, Address: 0x1a1398, Func Offset: 0x48
	// Line 787, Address: 0x1a13a0, Func Offset: 0x50
	// Line 786, Address: 0x1a13a4, Func Offset: 0x54
	// Line 787, Address: 0x1a13a8, Func Offset: 0x58
	// Line 788, Address: 0x1a13ac, Func Offset: 0x5c
	// Line 789, Address: 0x1a13b4, Func Offset: 0x64
	// Line 788, Address: 0x1a13b8, Func Offset: 0x68
	// Line 789, Address: 0x1a13bc, Func Offset: 0x6c
	// Line 790, Address: 0x1a13d4, Func Offset: 0x84
	// Line 794, Address: 0x1a13d8, Func Offset: 0x88
	// Line 790, Address: 0x1a13dc, Func Offset: 0x8c
	// Line 791, Address: 0x1a13e4, Func Offset: 0x94
	// Line 792, Address: 0x1a13ec, Func Offset: 0x9c
	// Line 794, Address: 0x1a13f4, Func Offset: 0xa4
	// Line 795, Address: 0x1a13fc, Func Offset: 0xac
	// Line 796, Address: 0x1a1408, Func Offset: 0xb8
	// Line 797, Address: 0x1a140c, Func Offset: 0xbc
	// Line 798, Address: 0x1a1410, Func Offset: 0xc0
	// Line 797, Address: 0x1a1414, Func Offset: 0xc4
	// Line 798, Address: 0x1a1418, Func Offset: 0xc8
	// Line 799, Address: 0x1a1420, Func Offset: 0xd0
	// Line 800, Address: 0x1a1428, Func Offset: 0xd8
	// Line 802, Address: 0x1a142c, Func Offset: 0xdc
	// Line 804, Address: 0x1a1430, Func Offset: 0xe0
	// Line 805, Address: 0x1a1444, Func Offset: 0xf4
	// Line 811, Address: 0x1a1448, Func Offset: 0xf8
	// Line 807, Address: 0x1a144c, Func Offset: 0xfc
	// Line 806, Address: 0x1a1450, Func Offset: 0x100
	// Line 807, Address: 0x1a1454, Func Offset: 0x104
	// Line 808, Address: 0x1a145c, Func Offset: 0x10c
	// Line 809, Address: 0x1a1468, Func Offset: 0x118
	// Line 811, Address: 0x1a1470, Func Offset: 0x120
	// Line 812, Address: 0x1a1478, Func Offset: 0x128
	// Line 813, Address: 0x1a1484, Func Offset: 0x134
	// Line 814, Address: 0x1a1488, Func Offset: 0x138
	// Line 815, Address: 0x1a148c, Func Offset: 0x13c
	// Line 816, Address: 0x1a1494, Func Offset: 0x144
	// Line 817, Address: 0x1a14a4, Func Offset: 0x154
	// Line 819, Address: 0x1a14a8, Func Offset: 0x158
	// Line 817, Address: 0x1a14ac, Func Offset: 0x15c
	// Line 818, Address: 0x1a14b8, Func Offset: 0x168
	// Line 819, Address: 0x1a14c4, Func Offset: 0x174
	// Line 820, Address: 0x1a14cc, Func Offset: 0x17c
	// Line 821, Address: 0x1a14d0, Func Offset: 0x180
	// Line 822, Address: 0x1a14d8, Func Offset: 0x188
	// Func End, Address: 0x1a14fc, Func Offset: 0x1ac
}

// 
// Start address: 0x1a1500
int EnemyPacketSpkSetData(sgSpkWork* pkw, float* vertex, unsigned int color, EnemyTexParameter* ptex, int num)
{
	EnemyDrawEnv* pede;
	float* vtx;
	float q;
	// Line 836, Address: 0x1a1500, Func Offset: 0
	// Line 837, Address: 0x1a1504, Func Offset: 0x4
	// Line 836, Address: 0x1a1508, Func Offset: 0x8
	// Line 837, Address: 0x1a1534, Func Offset: 0x34
	// Line 838, Address: 0x1a1538, Func Offset: 0x38
	// Line 840, Address: 0x1a153c, Func Offset: 0x3c
	// Line 841, Address: 0x1a154c, Func Offset: 0x4c
	// Line 842, Address: 0x1a1554, Func Offset: 0x54
	// Line 843, Address: 0x1a1558, Func Offset: 0x58
	// Line 844, Address: 0x1a1560, Func Offset: 0x60
	// Line 843, Address: 0x1a1564, Func Offset: 0x64
	// Line 844, Address: 0x1a1568, Func Offset: 0x68
	// Line 843, Address: 0x1a156c, Func Offset: 0x6c
	// Line 844, Address: 0x1a1578, Func Offset: 0x78
	// Line 845, Address: 0x1a1590, Func Offset: 0x90
	// Line 846, Address: 0x1a1598, Func Offset: 0x98
	// Line 845, Address: 0x1a159c, Func Offset: 0x9c
	// Line 846, Address: 0x1a15a8, Func Offset: 0xa8
	// Line 847, Address: 0x1a15d8, Func Offset: 0xd8
	// Line 846, Address: 0x1a15dc, Func Offset: 0xdc
	// Line 848, Address: 0x1a15e8, Func Offset: 0xe8
	// Func End, Address: 0x1a160c, Func Offset: 0x10c
}

// 
// Start address: 0x1a1610
int EnemyPacketSpkSetDataByST(sgSpkWork* pkw, float* vertex, unsigned int color, EnemyTexParameter* ptex, float s, float t)
{
	EnemyDrawEnv* pede;
	float* vtx;
	float q;
	// Line 890, Address: 0x1a1610, Func Offset: 0
	// Line 891, Address: 0x1a1614, Func Offset: 0x4
	// Line 890, Address: 0x1a1618, Func Offset: 0x8
	// Line 891, Address: 0x1a1640, Func Offset: 0x30
	// Line 892, Address: 0x1a164c, Func Offset: 0x3c
	// Line 894, Address: 0x1a1650, Func Offset: 0x40
	// Line 895, Address: 0x1a1660, Func Offset: 0x50
	// Line 897, Address: 0x1a1668, Func Offset: 0x58
	// Line 898, Address: 0x1a1670, Func Offset: 0x60
	// Line 897, Address: 0x1a1674, Func Offset: 0x64
	// Line 898, Address: 0x1a1678, Func Offset: 0x68
	// Line 897, Address: 0x1a1680, Func Offset: 0x70
	// Line 898, Address: 0x1a168c, Func Offset: 0x7c
	// Line 899, Address: 0x1a16a4, Func Offset: 0x94
	// Line 900, Address: 0x1a16ac, Func Offset: 0x9c
	// Line 899, Address: 0x1a16b0, Func Offset: 0xa0
	// Line 900, Address: 0x1a16bc, Func Offset: 0xac
	// Line 901, Address: 0x1a16ec, Func Offset: 0xdc
	// Line 900, Address: 0x1a16f0, Func Offset: 0xe0
	// Line 901, Address: 0x1a16fc, Func Offset: 0xec
	// Line 902, Address: 0x1a1700, Func Offset: 0xf0
	// Func End, Address: 0x1a1724, Func Offset: 0x114
}

// 
// Start address: 0x1a1730
int EnemyPacketSpkMakeDataByST(sgSpkWork* pkw, float* vertex, unsigned int color, EnemyTexParameter* ptex, float s, float t, unsigned long* dataadr)
{
	EnemyDrawEnv* pede;
	float* vtx;
	float q;
	unsigned long st;
	unsigned long rgbaq;
	unsigned long xyzf;
	// Line 920, Address: 0x1a1730, Func Offset: 0
	// Line 921, Address: 0x1a1734, Func Offset: 0x4
	// Line 920, Address: 0x1a1738, Func Offset: 0x8
	// Line 921, Address: 0x1a176c, Func Offset: 0x3c
	// Line 922, Address: 0x1a1778, Func Offset: 0x48
	// Line 925, Address: 0x1a177c, Func Offset: 0x4c
	// Line 926, Address: 0x1a178c, Func Offset: 0x5c
	// Line 927, Address: 0x1a1794, Func Offset: 0x64
	// Line 928, Address: 0x1a1798, Func Offset: 0x68
	// Line 929, Address: 0x1a17a0, Func Offset: 0x70
	// Line 928, Address: 0x1a17a4, Func Offset: 0x74
	// Line 929, Address: 0x1a17a8, Func Offset: 0x78
	// Line 928, Address: 0x1a17b0, Func Offset: 0x80
	// Line 929, Address: 0x1a17bc, Func Offset: 0x8c
	// Line 930, Address: 0x1a17c8, Func Offset: 0x98
	// Line 931, Address: 0x1a17cc, Func Offset: 0x9c
	// Line 932, Address: 0x1a17f8, Func Offset: 0xc8
	// Line 931, Address: 0x1a17fc, Func Offset: 0xcc
	// Line 938, Address: 0x1a1800, Func Offset: 0xd0
	// Line 932, Address: 0x1a1804, Func Offset: 0xd4
	// Line 933, Address: 0x1a1810, Func Offset: 0xe0
	// Line 934, Address: 0x1a1820, Func Offset: 0xf0
	// Line 935, Address: 0x1a1830, Func Offset: 0x100
	// Line 936, Address: 0x1a1834, Func Offset: 0x104
	// Line 937, Address: 0x1a1838, Func Offset: 0x108
	// Line 938, Address: 0x1a183c, Func Offset: 0x10c
	// Line 939, Address: 0x1a1840, Func Offset: 0x110
	// Func End, Address: 0x1a186c, Func Offset: 0x13c
}

// 
// Start address: 0x1a1870
int EnemyPacketSpkMakeDataOnlyByST(unsigned long* dataadr, float* vertex, unsigned int color, EnemyTexParameter* ptex, float s, float t)
{
	EnemyDrawEnv* pede;
	float* vtx;
	float q;
	unsigned long st;
	unsigned long rgbaq;
	unsigned long xyzf;
	// Line 956, Address: 0x1a1870, Func Offset: 0
	// Line 957, Address: 0x1a1874, Func Offset: 0x4
	// Line 956, Address: 0x1a1878, Func Offset: 0x8
	// Line 957, Address: 0x1a18a4, Func Offset: 0x34
	// Line 958, Address: 0x1a18b0, Func Offset: 0x40
	// Line 961, Address: 0x1a18b4, Func Offset: 0x44
	// Line 962, Address: 0x1a18c4, Func Offset: 0x54
	// Line 963, Address: 0x1a18cc, Func Offset: 0x5c
	// Line 964, Address: 0x1a18d0, Func Offset: 0x60
	// Line 965, Address: 0x1a18d8, Func Offset: 0x68
	// Line 964, Address: 0x1a18dc, Func Offset: 0x6c
	// Line 965, Address: 0x1a18e0, Func Offset: 0x70
	// Line 964, Address: 0x1a18e8, Func Offset: 0x78
	// Line 965, Address: 0x1a18f4, Func Offset: 0x84
	// Line 966, Address: 0x1a1900, Func Offset: 0x90
	// Line 967, Address: 0x1a1904, Func Offset: 0x94
	// Line 968, Address: 0x1a1930, Func Offset: 0xc0
	// Line 969, Address: 0x1a1934, Func Offset: 0xc4
	// Line 967, Address: 0x1a1938, Func Offset: 0xc8
	// Line 970, Address: 0x1a193c, Func Offset: 0xcc
	// Line 971, Address: 0x1a1940, Func Offset: 0xd0
	// Line 972, Address: 0x1a1948, Func Offset: 0xd8
	// Func End, Address: 0x1a1970, Func Offset: 0x100
}

// 
// Start address: 0x1a1970
void EnemyPacketSpkChangeDataColor(unsigned long* dataadr, unsigned int color)
{
	// Line 983, Address: 0x1a1970, Func Offset: 0
	// Func End, Address: 0x1a1978, Func Offset: 0x8
}

// 
// Start address: 0x1a1980
int EnemyPacketClipCheck()
{
	// Line 1013, Address: 0x1a1980, Func Offset: 0
	// Line 1014, Address: 0x1a198c, Func Offset: 0xc
	// Func End, Address: 0x1a1994, Func Offset: 0x14
}

// 
// Start address: 0x1a19a0
unsigned int EnemyPacketGetWforOT()
{
	// Line 1021, Address: 0x1a19a0, Func Offset: 0
	// Line 1022, Address: 0x1a19c0, Func Offset: 0x20
	// Func End, Address: 0x1a19c8, Func Offset: 0x28
}

