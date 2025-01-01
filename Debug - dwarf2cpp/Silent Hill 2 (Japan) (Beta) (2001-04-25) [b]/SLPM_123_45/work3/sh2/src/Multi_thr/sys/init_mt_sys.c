typedef union fsFile;
typedef struct fsCdFile;
typedef struct fsMgcFile;
typedef struct fsMgfFile;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct _anon0;
typedef struct _anon1;


typedef fsFile type_0[1];
typedef <unknown fundamental type (0xa510)> type_1[512];
typedef <unknown fundamental type (0xa510)> type_2[512];
typedef <unknown fundamental type (0xa510)> type_3[512];
typedef fsFile type_4[1];
typedef <unknown fundamental type (0xa510)> type_5[512];
typedef <unknown fundamental type (0xa510)> type_6[384];
typedef <unknown fundamental type (0xa510)> type_7[256];
typedef <unknown fundamental type (0xa510)> type_8[512];
typedef <unknown fundamental type (0xa510)> type_9[512];
typedef <unknown fundamental type (0xa510)> type_10[256];
typedef <unknown fundamental type (0xa510)> type_11[256];
typedef _anon1 type_12[1];
typedef <unknown fundamental type (0xa510)> type_13[512];
typedef char type_14[16];
typedef <unknown fundamental type (0xa510)> type_15[128];
typedef unsigned char type_16[8];
typedef <unknown fundamental type (0xa510)> type_17[512];
typedef <unknown fundamental type (0xa510)> type_18[512];
typedef char type_19[0];
typedef char type_20[0];
typedef char type_21[0];

union fsFile
{
	_anon0 check;
	<unknown fundamental type (0xa510)> pack;
	fsCdFile cd;
	fsHdFile hd;
	fsMgcFile mgc;
	fsMgfFile mgf;
	fsMgpFile mgp;
};

struct fsCdFile
{
	struct
	{
		int type : 8;
		int number : 24;
	};
	char* name;
	int lsn;
	int size;
};

struct fsMgcFile
{
	struct
	{
		int type : 8;
		int padding : 24;
	};
	fsFile* parent;
	char* start;
	char* end;
};

struct fsMgfFile
{
	struct
	{
		int type : 8;
		int padding : 24;
	};
	fsFile* parent;
	int offset;
	int size;
};

struct fsHdFile
{
	struct
	{
		int type : 8;
		int padding : 24;
	};
	char* name;
	int offset;
	int size;
};

struct fsMgpFile
{
	struct
	{
		int type : 8;
		int padding : 24;
	};
	fsFile* file;
	fsMgcFile* start;
	fsMgcFile* end;
};

struct _anon0
{
	struct
	{
		int type : 8;
		int number : 24;
	};
	int pad0;
	int pad1;
	int pad2;
};

struct _anon1
{
	unsigned int lsn;
	unsigned int size;
	char name[16];
	unsigned char date[8];
};

char help_th_disp[0];
<unknown fundamental type (0xa510)> ADDR_STACK_VB_S[256];
char help_th_vbe[0];
<unknown fundamental type (0xa510)> ADDR_STACK_VB_E[512];
fsFile data_mgf__info[1];
<unknown fundamental type (0xa510)> ADDR_STACK_FS_CB[512];
int execEnv_sound_data_from_hd;
int execEnv_skip_cd_check;
int execEnv_file_load_mode;
<unknown fundamental type (0xa510)> ADDR_QUEUE_LI[128];
<unknown fundamental type (0xa510)> ADDR_STACK_LI[512];
<unknown fundamental type (0xa510)> ADDR_QUEUE_FS_BG[512];
<unknown fundamental type (0xa510)> ADDR_STACK_FS_BG[512];
int execEnv_skip_load_iop_mod;
int execEnv_cdvd_media_type;
<unknown fundamental type (0xa510)> ADDR_QUEUE_DMA_GIF[512];
<unknown fundamental type (0xa510)> ADDR_STACK_DMA_GIF[256];
<unknown fundamental type (0xa510)> ADDR_QUEUE_DMA_VIF1[512];
<unknown fundamental type (0xa510)> ADDR_STACK_DMA_VIF1[256];
char help_th_pad[0];
<unknown fundamental type (0xa510)> ADDR_STACK_PAD[512];
<unknown fundamental type (0xa510)> ADDR_STACK_DISP[512];
<unknown fundamental type (0xa510)> ADDR_STACK_MC[384];

int init_sh2_filesys();
void init_sh2_dmac();
int init_sh2_devsys();

// 
// Start address: 0x1c9370
int init_sh2_filesys()
{
	_anon1 fp[1];
	int sect;
	int mmode;
	int fid;
	// Line 97, Address: 0x1c9370, Func Offset: 0
	// Line 100, Address: 0x1c938c, Func Offset: 0x1c
	// Line 101, Address: 0x1c93a4, Func Offset: 0x34
	// Line 103, Address: 0x1c93ac, Func Offset: 0x3c
	// Line 104, Address: 0x1c93b4, Func Offset: 0x44
	// Line 106, Address: 0x1c93bc, Func Offset: 0x4c
	// Line 107, Address: 0x1c93cc, Func Offset: 0x5c
	// Line 108, Address: 0x1c93d0, Func Offset: 0x60
	// Line 109, Address: 0x1c93d8, Func Offset: 0x68
	// Line 113, Address: 0x1c93dc, Func Offset: 0x6c
	// Line 115, Address: 0x1c93ec, Func Offset: 0x7c
	// Line 130, Address: 0x1c93fc, Func Offset: 0x8c
	// Line 131, Address: 0x1c940c, Func Offset: 0x9c
	// Line 133, Address: 0x1c9418, Func Offset: 0xa8
	// Line 136, Address: 0x1c9428, Func Offset: 0xb8
	// Line 202, Address: 0x1c9430, Func Offset: 0xc0
	// Line 207, Address: 0x1c9454, Func Offset: 0xe4
	// Line 219, Address: 0x1c9478, Func Offset: 0x108
	// Line 223, Address: 0x1c948c, Func Offset: 0x11c
	// Line 241, Address: 0x1c94a0, Func Offset: 0x130
	// Line 242, Address: 0x1c94b4, Func Offset: 0x144
	// Line 243, Address: 0x1c94c8, Func Offset: 0x158
	// Line 246, Address: 0x1c94dc, Func Offset: 0x16c
	// Line 248, Address: 0x1c94f0, Func Offset: 0x180
	// Line 253, Address: 0x1c9528, Func Offset: 0x1b8
	// Line 255, Address: 0x1c953c, Func Offset: 0x1cc
	// Line 272, Address: 0x1c9570, Func Offset: 0x200
	// Line 274, Address: 0x1c9580, Func Offset: 0x210
	// Line 277, Address: 0x1c959c, Func Offset: 0x22c
	// Line 280, Address: 0x1c95b0, Func Offset: 0x240
	// Line 283, Address: 0x1c95c0, Func Offset: 0x250
	// Line 285, Address: 0x1c95d0, Func Offset: 0x260
	// Line 286, Address: 0x1c95e4, Func Offset: 0x274
	// Line 287, Address: 0x1c95e8, Func Offset: 0x278
	// Line 288, Address: 0x1c95f0, Func Offset: 0x280
	// Line 291, Address: 0x1c95f4, Func Offset: 0x284
	// Line 292, Address: 0x1c9600, Func Offset: 0x290
	// Line 293, Address: 0x1c960c, Func Offset: 0x29c
	// Line 298, Address: 0x1c9618, Func Offset: 0x2a8
	// Line 300, Address: 0x1c9630, Func Offset: 0x2c0
	// Line 301, Address: 0x1c9640, Func Offset: 0x2d0
	// Line 307, Address: 0x1c9654, Func Offset: 0x2e4
	// Line 310, Address: 0x1c9678, Func Offset: 0x308
	// Line 317, Address: 0x1c969c, Func Offset: 0x32c
	// Line 318, Address: 0x1c96a0, Func Offset: 0x330
	// Func End, Address: 0x1c96c4, Func Offset: 0x354
}

// 
// Start address: 0x1c96d0
void init_sh2_dmac()
{
	// Line 336, Address: 0x1c96d0, Func Offset: 0
	// Line 338, Address: 0x1c96d8, Func Offset: 0x8
	// Line 339, Address: 0x1c96e0, Func Offset: 0x10
	// Line 342, Address: 0x1c9704, Func Offset: 0x34
	// Line 343, Address: 0x1c970c, Func Offset: 0x3c
	// Line 346, Address: 0x1c9730, Func Offset: 0x60
	// Line 348, Address: 0x1c9738, Func Offset: 0x68
	// Func End, Address: 0x1c9748, Func Offset: 0x78
}

// 
// Start address: 0x1c9750
int init_sh2_devsys()
{
	int sid_pad_fin;
	int sid_pad;
	// Line 355, Address: 0x1c9750, Func Offset: 0
	// Line 373, Address: 0x1c9760, Func Offset: 0x10
	// Line 379, Address: 0x1c977c, Func Offset: 0x2c
	// Line 389, Address: 0x1c978c, Func Offset: 0x3c
	// Line 403, Address: 0x1c97b4, Func Offset: 0x64
	// Line 404, Address: 0x1c97c0, Func Offset: 0x70
	// Line 412, Address: 0x1c97d8, Func Offset: 0x88
	// Line 415, Address: 0x1c97dc, Func Offset: 0x8c
	// Func End, Address: 0x1c97f4, Func Offset: 0xa4
}

