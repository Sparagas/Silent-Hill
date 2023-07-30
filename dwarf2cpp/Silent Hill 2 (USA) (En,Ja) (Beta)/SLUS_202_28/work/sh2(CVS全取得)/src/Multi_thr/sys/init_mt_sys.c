typedef union fsFile;
typedef struct fsCdFile;
typedef struct fsMgcFile;
typedef struct fsMgfFile;
typedef struct fsHdFile;
typedef struct _anon0;
typedef struct fsMgpFile;
typedef struct _anon1;
typedef union fsFileIndex;
typedef struct _anon2;


typedef <unknown fundamental type (0xa510)> type_0[256];
typedef fsFileIndex type_1[1];
typedef <unknown fundamental type (0xa510)> type_2[512];
typedef fsFileIndex type_3[1];
typedef <unknown fundamental type (0xa510)> type_4[512];
typedef <unknown fundamental type (0xa510)> type_5[256];
typedef <unknown fundamental type (0xa510)> type_6[256];
typedef <unknown fundamental type (0xa510)> type_7[512];
typedef char type_8[256];
typedef <unknown fundamental type (0xa510)> type_9[128];
typedef <unknown fundamental type (0xa510)> type_10[512];
typedef fsFileIndex type_11[1];
typedef <unknown fundamental type (0xa510)> type_12[512];
typedef fsFileIndex type_13[1];
typedef char type_14[16];
typedef unsigned char type_15[8];
typedef _anon0 type_16[1];
typedef char type_17[0];
typedef char type_18[0];
typedef char type_19[0];
typedef fsFileIndex type_20[1];
typedef <unknown fundamental type (0xa510)> type_21[512];
typedef <unknown fundamental type (0xa510)> type_22[512];
typedef <unknown fundamental type (0xa510)> type_23[512];
typedef fsFileIndex type_24[1];
typedef fsFileIndex type_25[1];
typedef <unknown fundamental type (0xa510)> type_26[512];
typedef <unknown fundamental type (0xa510)> type_27[384];

union fsFile
{
	_anon1 check;
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

struct _anon0
{
	unsigned int lsn;
	unsigned int size;
	char name[16];
	unsigned char date[8];
	unsigned int flag;
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

struct _anon1
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

union fsFileIndex
{
	_anon2 index;
	unsigned long pack;
};

struct _anon2
{
	fsFile* fp;
	char* name;
};

char _end[0];
char _ovl_align_addr[0];
char _ovl_start_addr[0];
fsFileIndex data_sound_mgf[1];
fsFileIndex data_pic_mgf[1];
fsFileIndex data_movie_mgf[1];
fsFileIndex data_menu_mgf[1];
fsFileIndex data_etc_mgf[1];
fsFileIndex data_chr_mgf[1];
fsFileIndex data_bg_mgf[1];
int execEnv_skip_load_iop_mod;
<unknown fundamental type (0xa510)> ADDR_STACK_VB_S[256];
<unknown fundamental type (0xa510)> ADDR_STACK_VB_E[512];
<unknown fundamental type (0xa510)> ADDR_STACK_FS_CB[512];
int execEnv_sound_data_from_hd;
int execEnv_skip_cd_check;
int execEnv_exec_path_mode;
int execEnv_file_load_mode;
<unknown fundamental type (0xa510)> ADDR_QUEUE_LI[128];
<unknown fundamental type (0xa510)> ADDR_STACK_LI[512];
<unknown fundamental type (0xa510)> ADDR_QUEUE_FS_BG[512];
<unknown fundamental type (0xa510)> ADDR_STACK_FS_BG[512];
int execEnv_cdvd_media_type;
<unknown fundamental type (0xa510)> ADDR_QUEUE_DMA_GIF[512];
<unknown fundamental type (0xa510)> ADDR_STACK_DMA_GIF[256];
<unknown fundamental type (0xa510)> ADDR_QUEUE_DMA_VIF1[512];
<unknown fundamental type (0xa510)> ADDR_STACK_DMA_VIF1[256];
<unknown fundamental type (0xa510)> ADDR_STACK_PAD[512];
<unknown fundamental type (0xa510)> ADDR_STACK_DISP[512];
<unknown fundamental type (0xa510)> ADDR_STACK_MC[384];

void check_code_and_data_size();
void check_boot_file_name_in_system_cnf(char* bootfilename);
void check_build_environment(char* bootfilename);
int prepare_data_mgf();
void iop_mem_check(int mmode);
void iop_mem_check_break(int fid);
int init_sh2_filesys();
void init_sh2_dmac();
int init_sh2_devsys();

// 
// Start address: 0x1bf800
void check_code_and_data_size()
{
	// Line 124, Address: 0x1bf800, Func Offset: 0
	// Line 130, Address: 0x1bf808, Func Offset: 0x8
	// Line 132, Address: 0x1bf84c, Func Offset: 0x4c
	// Line 134, Address: 0x1bf88c, Func Offset: 0x8c
	// Func End, Address: 0x1bf89c, Func Offset: 0x9c
}

// 
// Start address: 0x1bf8a0
void check_boot_file_name_in_system_cnf(char* bootfilename)
{
	char* filename;
	char* search;
	char* dirchp;
	// Line 137, Address: 0x1bf8a0, Func Offset: 0
	// Line 142, Address: 0x1bf8a8, Func Offset: 0x8
	// Line 145, Address: 0x1bf8b0, Func Offset: 0x10
	// Line 146, Address: 0x1bf8b4, Func Offset: 0x14
	// Line 147, Address: 0x1bf8b8, Func Offset: 0x18
	// Line 148, Address: 0x1bf8c0, Func Offset: 0x20
	// Line 152, Address: 0x1bf8f4, Func Offset: 0x54
	// Line 157, Address: 0x1bf8f8, Func Offset: 0x58
	// Line 159, Address: 0x1bf90c, Func Offset: 0x6c
	// Line 163, Address: 0x1bf918, Func Offset: 0x78
	// Line 164, Address: 0x1bf920, Func Offset: 0x80
	// Line 165, Address: 0x1bf928, Func Offset: 0x88
	// Line 166, Address: 0x1bf930, Func Offset: 0x90
	// Line 167, Address: 0x1bf948, Func Offset: 0xa8
	// Line 169, Address: 0x1bf98c, Func Offset: 0xec
	// Func End, Address: 0x1bf99c, Func Offset: 0xfc
}

// 
// Start address: 0x1bf9a0
void check_build_environment(char* bootfilename)
{
	// Line 172, Address: 0x1bf9a0, Func Offset: 0
	// Line 174, Address: 0x1bf9b0, Func Offset: 0x10
	// Line 175, Address: 0x1bf9c8, Func Offset: 0x28
	// Line 176, Address: 0x1bf9e4, Func Offset: 0x44
	// Line 178, Address: 0x1bfa00, Func Offset: 0x60
	// Line 179, Address: 0x1bfa08, Func Offset: 0x68
	// Line 181, Address: 0x1bfa14, Func Offset: 0x74
	// Func End, Address: 0x1bfa28, Func Offset: 0x88
}

// 
// Start address: 0x1bfa30
int prepare_data_mgf()
{
	int fid;
	// Line 184, Address: 0x1bfa30, Func Offset: 0
	// Line 189, Address: 0x1bfa38, Func Offset: 0x8
	// Line 190, Address: 0x1bfa4c, Func Offset: 0x1c
	// Line 191, Address: 0x1bfa60, Func Offset: 0x30
	// Line 192, Address: 0x1bfa74, Func Offset: 0x44
	// Line 193, Address: 0x1bfa88, Func Offset: 0x58
	// Line 194, Address: 0x1bfa9c, Func Offset: 0x6c
	// Line 195, Address: 0x1bfab0, Func Offset: 0x80
	// Line 210, Address: 0x1bfac4, Func Offset: 0x94
	// Func End, Address: 0x1bfad4, Func Offset: 0xa4
}

// 
// Start address: 0x1bfae0
void iop_mem_check(int mmode)
{
	// Line 213, Address: 0x1bfae0, Func Offset: 0
	// Line 215, Address: 0x1bfaf0, Func Offset: 0x10
	// Line 217, Address: 0x1bfb04, Func Offset: 0x24
	// Line 219, Address: 0x1bfb18, Func Offset: 0x38
	// Line 220, Address: 0x1bfb28, Func Offset: 0x48
	// Line 221, Address: 0x1bfb30, Func Offset: 0x50
	// Line 222, Address: 0x1bfb4c, Func Offset: 0x6c
	// Line 223, Address: 0x1bfb5c, Func Offset: 0x7c
	// Line 226, Address: 0x1bfb6c, Func Offset: 0x8c
	// Line 229, Address: 0x1bfb78, Func Offset: 0x98
	// Func End, Address: 0x1bfb8c, Func Offset: 0xac
}

// 
// Start address: 0x1bfb90
void iop_mem_check_break(int fid)
{
	int count;
	int break_flag;
	// Line 232, Address: 0x1bfb90, Func Offset: 0
	// Line 234, Address: 0x1bfba0, Func Offset: 0x10
	// Line 236, Address: 0x1bfbb4, Func Offset: 0x24
	// Line 239, Address: 0x1bfbc4, Func Offset: 0x34
	// Line 240, Address: 0x1bfbcc, Func Offset: 0x3c
	// Line 241, Address: 0x1bfbd0, Func Offset: 0x40
	// Line 242, Address: 0x1bfbe4, Func Offset: 0x54
	// Line 243, Address: 0x1bfbec, Func Offset: 0x5c
	// Line 244, Address: 0x1bfbf0, Func Offset: 0x60
	// Line 255, Address: 0x1bfc08, Func Offset: 0x78
	// Func End, Address: 0x1bfc1c, Func Offset: 0x8c
}

// 
// Start address: 0x1bfc20
int init_sh2_filesys()
{
	_anon0 fp[1];
	char* path;
	char buf[256];
	int sect;
	int mmode;
	int fid;
	// Line 259, Address: 0x1bfc20, Func Offset: 0
	// Line 262, Address: 0x1bfc34, Func Offset: 0x14
	// Line 263, Address: 0x1bfc4c, Func Offset: 0x2c
	// Line 265, Address: 0x1bfc54, Func Offset: 0x34
	// Line 266, Address: 0x1bfc5c, Func Offset: 0x3c
	// Line 269, Address: 0x1bfc64, Func Offset: 0x44
	// Line 270, Address: 0x1bfc68, Func Offset: 0x48
	// Line 271, Address: 0x1bfc78, Func Offset: 0x58
	// Line 277, Address: 0x1bfc7c, Func Offset: 0x5c
	// Line 279, Address: 0x1bfc8c, Func Offset: 0x6c
	// Line 281, Address: 0x1bfc98, Func Offset: 0x78
	// Line 282, Address: 0x1bfca8, Func Offset: 0x88
	// Line 284, Address: 0x1bfcb0, Func Offset: 0x90
	// Line 285, Address: 0x1bfcc0, Func Offset: 0xa0
	// Line 287, Address: 0x1bfccc, Func Offset: 0xac
	// Line 290, Address: 0x1bfcdc, Func Offset: 0xbc
	// Line 293, Address: 0x1bfce4, Func Offset: 0xc4
	// Line 298, Address: 0x1bfd08, Func Offset: 0xe8
	// Line 302, Address: 0x1bfd2c, Func Offset: 0x10c
	// Line 310, Address: 0x1bfd34, Func Offset: 0x114
	// Line 315, Address: 0x1bfd44, Func Offset: 0x124
	// Line 317, Address: 0x1bfd54, Func Offset: 0x134
	// Line 318, Address: 0x1bfd64, Func Offset: 0x144
	// Line 322, Address: 0x1bfd78, Func Offset: 0x158
	// Line 325, Address: 0x1bfd84, Func Offset: 0x164
	// Line 326, Address: 0x1bfd98, Func Offset: 0x178
	// Line 327, Address: 0x1bfda8, Func Offset: 0x188
	// Line 330, Address: 0x1bfdb8, Func Offset: 0x198
	// Line 332, Address: 0x1bfdcc, Func Offset: 0x1ac
	// Line 340, Address: 0x1bfdfc, Func Offset: 0x1dc
	// Line 342, Address: 0x1bfe10, Func Offset: 0x1f0
	// Line 344, Address: 0x1bfe20, Func Offset: 0x200
	// Line 354, Address: 0x1bfe50, Func Offset: 0x230
	// Line 356, Address: 0x1bfe5c, Func Offset: 0x23c
	// Line 357, Address: 0x1bfe70, Func Offset: 0x250
	// Line 360, Address: 0x1bfe84, Func Offset: 0x264
	// Line 362, Address: 0x1bfe94, Func Offset: 0x274
	// Line 363, Address: 0x1bfea4, Func Offset: 0x284
	// Line 367, Address: 0x1bfeb8, Func Offset: 0x298
	// Line 372, Address: 0x1bfeec, Func Offset: 0x2cc
	// Line 375, Address: 0x1bff00, Func Offset: 0x2e0
	// Line 378, Address: 0x1bff10, Func Offset: 0x2f0
	// Line 382, Address: 0x1bff20, Func Offset: 0x300
	// Line 383, Address: 0x1bff24, Func Offset: 0x304
	// Line 384, Address: 0x1bff28, Func Offset: 0x308
	// Line 385, Address: 0x1bff30, Func Offset: 0x310
	// Line 387, Address: 0x1bff34, Func Offset: 0x314
	// Line 391, Address: 0x1bff38, Func Offset: 0x318
	// Line 392, Address: 0x1bff44, Func Offset: 0x324
	// Line 393, Address: 0x1bff58, Func Offset: 0x338
	// Line 394, Address: 0x1bff60, Func Offset: 0x340
	// Line 398, Address: 0x1bff6c, Func Offset: 0x34c
	// Line 400, Address: 0x1bff84, Func Offset: 0x364
	// Line 402, Address: 0x1bff90, Func Offset: 0x370
	// Line 406, Address: 0x1bff9c, Func Offset: 0x37c
	// Line 409, Address: 0x1bffbc, Func Offset: 0x39c
	// Line 412, Address: 0x1bffdc, Func Offset: 0x3bc
	// Line 413, Address: 0x1bffe0, Func Offset: 0x3c0
	// Func End, Address: 0x1bfffc, Func Offset: 0x3dc
}

// 
// Start address: 0x1c0000
void init_sh2_dmac()
{
	// Line 417, Address: 0x1c0000, Func Offset: 0
	// Line 419, Address: 0x1c0008, Func Offset: 0x8
	// Line 420, Address: 0x1c0010, Func Offset: 0x10
	// Line 423, Address: 0x1c0034, Func Offset: 0x34
	// Line 424, Address: 0x1c003c, Func Offset: 0x3c
	// Line 427, Address: 0x1c0060, Func Offset: 0x60
	// Line 429, Address: 0x1c0068, Func Offset: 0x68
	// Func End, Address: 0x1c0078, Func Offset: 0x78
}

// 
// Start address: 0x1c0080
int init_sh2_devsys()
{
	int sid_pad_fin;
	int sid_pad;
	// Line 436, Address: 0x1c0080, Func Offset: 0
	// Line 454, Address: 0x1c0090, Func Offset: 0x10
	// Line 460, Address: 0x1c00a8, Func Offset: 0x28
	// Line 470, Address: 0x1c00b8, Func Offset: 0x38
	// Line 484, Address: 0x1c00dc, Func Offset: 0x5c
	// Line 485, Address: 0x1c00e8, Func Offset: 0x68
	// Line 494, Address: 0x1c0100, Func Offset: 0x80
	// Line 497, Address: 0x1c0104, Func Offset: 0x84
	// Func End, Address: 0x1c011c, Func Offset: 0x9c
}

