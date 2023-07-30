typedef struct utilHeapCtrl;
typedef union Q_WORDDATA;
typedef struct SHADOW_SHAPE_FRAME;
typedef struct SHADOW_MAN;
typedef struct SHADOW_PACKET_BUF;
typedef struct Kg2_WORK;
typedef struct SHADOW_CHAR_MAN;
typedef struct SHADOW_OUTDOOR_MAN;
typedef struct Kg1WORK;
typedef union fsFileIndex;
typedef struct Kg1_Chr_WORK;
typedef struct SHADOW_OUTDOOR_HEAD;
typedef union fsFile;
typedef struct fsCdFile;
typedef struct shBattleFight;
typedef struct fsMgcFile;
typedef struct shBattleShot;
typedef struct fsMgfFile;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct _anon0;
typedef struct shAttackInfo;
typedef union _anon1;
typedef struct _anon2;


typedef float type_0[4];
typedef float type_1[4];
typedef float type_2[4][4];
typedef void* type_3[8];
typedef SHADOW_CHAR_MAN* type_4[16];
typedef SHADOW_OUTDOOR_MAN* type_5[4];
typedef <unknown fundamental type (0xa510)> type_6[1024];
typedef <unknown fundamental type (0xa510)> type_7[1024][16];
typedef Kg1WORK type_8[16];
typedef unsigned int type_9[4];
typedef unsigned short type_10[8];
typedef float type_11[4];
typedef unsigned char type_12[16];
typedef int type_13[4];
typedef short type_14[8];
typedef char type_15[16];
typedef unsigned long type_16[2];
typedef shAttackInfo type_17[46];
typedef <unknown fundamental type (0xa510)> type_18[2048];
typedef <unknown fundamental type (0xa510)> type_19[2048][4];
typedef <unknown fundamental type (0xa510)> type_20[12800];

struct utilHeapCtrl
{
	int size;
	int free;
	void* head;
	void* tail;
};

union Q_WORDDATA
{
	unsigned int ui32[4];
	unsigned short us16[8];
	float fl32[4];
	unsigned char uc8[16];
	int si32[4];
	short ss16[8];
	char sc8[16];
	unsigned long ul64[2];
	<unknown fundamental type (0xa510)> ul128;
};

struct SHADOW_SHAPE_FRAME
{
	float local_world[4][4];
	float local_light_position[4];
	Q_WORDDATA length;
	unsigned int* pRefPacket;
	unsigned int* pRawData;
	unsigned int* pKickAddr;
	short obj_id;
};

struct SHADOW_MAN
{
	char change_flag;
	short spot_num;
	short parallel_num;
	short char_man_num;
	short outdoor_man_num;
	short indoor_man_num;
	SHADOW_CHAR_MAN* char_man[16];
	SHADOW_OUTDOOR_MAN* outdoor_man[4];
	SHADOW_PACKET_BUF reftag_pool;
	SHADOW_PACKET_BUF kick_packet;
};

struct SHADOW_PACKET_BUF
{
	Q_WORDDATA* head;
	Q_WORDDATA* curr;
};

struct Kg2_WORK
{
	void* kg2_head_addr[8];
	int Kg2_Load_Head_Index;
	int Kg2_Load_Success_Num;
	int Kg2_Change;
};

struct SHADOW_CHAR_MAN
{
	unsigned short kind;
	short id;
	unsigned char lighting_mode;
	unsigned char obj_num;
	short size;
	short vert_num;
	float drop_shadow_matrix[4][4];
	Q_WORDDATA* raw_data;
	SHADOW_SHAPE_FRAME* shape;
};

struct SHADOW_OUTDOOR_MAN
{
	unsigned short kind;
	short map_id;
	unsigned char lighting_mode;
	unsigned char obj_num;
	short size;
	short vert_num;
	Q_WORDDATA* raw_data;
	SHADOW_SHAPE_FRAME* shape;
};

struct Kg1WORK
{
	int chara_id;
	void* kg1_head_addr;
	void* pMD;
};

union fsFileIndex
{
	_anon2 index;
	unsigned long pack;
};

struct Kg1_Chr_WORK
{
	Kg1WORK Kg1_Work[16];
	int Kg1_Change;
	int Kg1_Num;
};

struct SHADOW_OUTDOOR_HEAD
{
	unsigned short kind;
	short map_id;
	short obj_num;
	short reserve1;
	short reserve2;
	short reserve3;
	short reserve4;
	short reserve5;
};

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

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
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

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
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

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon1 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
};

union _anon1
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _anon2
{
	fsFile* fp;
	char* name;
};

shAttackInfo sh2_attack_list[46];
Kg1_Chr_WORK shadow_kg1_chr_work;
<unknown fundamental type (0xa510)> Kg1_data[1024][16];
Kg2_WORK shadow_kg2_work;
utilHeapCtrl* shadow_dataheap;
<unknown fundamental type (0xa510)> Shadow_Data[12800];
SHADOW_MAN shadow_man;
<unknown fundamental type (0xa510)> Kg2_data[2048][4];

void sh2shd_Init_kg1();
void* sh2shd_Get_Kg1MemADDR(void* pt);
void* sh2shd_Get_Kg1LoadAddr();
void sh2shd_Set_Kg1LoadData(int ckind, void* rr);
void* sh2shd_Get_Kg1LoadMemAddr(void* rr);
int Check_Exist_Shadow();
void sh2shd_Init_DataHeap();
void sh2shd_Init_kg2();
void sh2shd_Delete_kg2();
void Loadset_Kg2_Data2(fsFileIndex* file, unsigned short stage, short block);
void* sh2shd_Get_Kg2ADDR(int id);
int sh2shd_Get_Kg2NUM();

// 
// Start address: 0x1d3010
void sh2shd_Init_kg1()
{
	// Line 83, Address: 0x1d3010, Func Offset: 0
	// Line 85, Address: 0x1d3018, Func Offset: 0x8
	// Line 86, Address: 0x1d3030, Func Offset: 0x20
	// Func End, Address: 0x1d3040, Func Offset: 0x30
}

// 
// Start address: 0x1d3040
void* sh2shd_Get_Kg1MemADDR(void* pt)
{
	// Line 97, Address: 0x1d3040, Func Offset: 0
	// Line 98, Address: 0x1d3048, Func Offset: 0x8
	// Line 100, Address: 0x1d3060, Func Offset: 0x20
	// Line 101, Address: 0x1d306c, Func Offset: 0x2c
	// Func End, Address: 0x1d3078, Func Offset: 0x38
}

// 
// Start address: 0x1d3080
void* sh2shd_Get_Kg1LoadAddr()
{
	void* load_addr;
	Kg1WORK* ret;
	// Line 153, Address: 0x1d3080, Func Offset: 0
	// Line 159, Address: 0x1d308c, Func Offset: 0xc
	// Line 160, Address: 0x1d3094, Func Offset: 0x14
	// Line 161, Address: 0x1d30ac, Func Offset: 0x2c
	// Line 162, Address: 0x1d30d8, Func Offset: 0x58
	// Line 165, Address: 0x1d30dc, Func Offset: 0x5c
	// Line 166, Address: 0x1d30e0, Func Offset: 0x60
	// Func End, Address: 0x1d30f4, Func Offset: 0x74
}

// 
// Start address: 0x1d3100
void sh2shd_Set_Kg1LoadData(int ckind, void* rr)
{
	Kg1WORK* ret;
	// Line 171, Address: 0x1d3100, Func Offset: 0
	// Line 172, Address: 0x1d3110, Func Offset: 0x10
	// Line 173, Address: 0x1d3114, Func Offset: 0x14
	// Line 174, Address: 0x1d311c, Func Offset: 0x1c
	// Func End, Address: 0x1d312c, Func Offset: 0x2c
}

// 
// Start address: 0x1d3130
void* sh2shd_Get_Kg1LoadMemAddr(void* rr)
{
	Kg1WORK* ret;
	// Line 179, Address: 0x1d3130, Func Offset: 0
	// Line 180, Address: 0x1d313c, Func Offset: 0xc
	// Line 181, Address: 0x1d3140, Func Offset: 0x10
	// Line 182, Address: 0x1d3144, Func Offset: 0x14
	// Func End, Address: 0x1d3154, Func Offset: 0x24
}

// 
// Start address: 0x1d3160
int Check_Exist_Shadow()
{
	// Line 234, Address: 0x1d3160, Func Offset: 0
	// Line 235, Address: 0x1d3168, Func Offset: 0x8
	// Func End, Address: 0x1d3170, Func Offset: 0x10
}

// 
// Start address: 0x1d3170
void sh2shd_Init_DataHeap()
{
	// Line 252, Address: 0x1d3170, Func Offset: 0
	// Line 253, Address: 0x1d3178, Func Offset: 0x8
	// Line 254, Address: 0x1d3198, Func Offset: 0x28
	// Func End, Address: 0x1d31a8, Func Offset: 0x38
}

// 
// Start address: 0x1d31b0
void sh2shd_Init_kg2()
{
	// Line 263, Address: 0x1d31b0, Func Offset: 0
	// Line 265, Address: 0x1d31b8, Func Offset: 0x8
	// Line 266, Address: 0x1d31d0, Func Offset: 0x20
	// Func End, Address: 0x1d31e0, Func Offset: 0x30
}

// 
// Start address: 0x1d31e0
void sh2shd_Delete_kg2()
{
	int i;
	// Line 272, Address: 0x1d31e0, Func Offset: 0
	// Line 277, Address: 0x1d31ec, Func Offset: 0xc
	// Line 279, Address: 0x1d31f8, Func Offset: 0x18
	// Line 283, Address: 0x1d3204, Func Offset: 0x24
	// Line 284, Address: 0x1d3218, Func Offset: 0x38
	// Line 285, Address: 0x1d3234, Func Offset: 0x54
	// Line 286, Address: 0x1d323c, Func Offset: 0x5c
	// Func End, Address: 0x1d3250, Func Offset: 0x70
}

// 
// Start address: 0x1d3250
void Loadset_Kg2_Data2(fsFileIndex* file, unsigned short stage, short block)
{
	SHADOW_OUTDOOR_HEAD outdoor_head;
	void* load_addr;
	int file_len;
	int fid;
	// Line 300, Address: 0x1d3250, Func Offset: 0
	// Line 306, Address: 0x1d3270, Func Offset: 0x20
	// Line 308, Address: 0x1d3280, Func Offset: 0x30
	// Line 313, Address: 0x1d3288, Func Offset: 0x38
	// Line 314, Address: 0x1d3290, Func Offset: 0x40
	// Line 318, Address: 0x1d329c, Func Offset: 0x4c
	// Line 319, Address: 0x1d32b4, Func Offset: 0x64
	// Line 324, Address: 0x1d32dc, Func Offset: 0x8c
	// Line 325, Address: 0x1d32f0, Func Offset: 0xa0
	// Line 328, Address: 0x1d330c, Func Offset: 0xbc
	// Line 329, Address: 0x1d333c, Func Offset: 0xec
	// Line 330, Address: 0x1d3344, Func Offset: 0xf4
	// Line 331, Address: 0x1d334c, Func Offset: 0xfc
	// Line 333, Address: 0x1d3360, Func Offset: 0x110
	// Func End, Address: 0x1d337c, Func Offset: 0x12c
}

// 
// Start address: 0x1d3380
void* sh2shd_Get_Kg2ADDR(int id)
{
	// Line 378, Address: 0x1d3380, Func Offset: 0
	// Line 380, Address: 0x1d3388, Func Offset: 0x8
	// Line 382, Address: 0x1d33a0, Func Offset: 0x20
	// Func End, Address: 0x1d33ac, Func Offset: 0x2c
}

// 
// Start address: 0x1d33b0
int sh2shd_Get_Kg2NUM()
{
	// Line 389, Address: 0x1d33b0, Func Offset: 0
	// Line 391, Address: 0x1d33b8, Func Offset: 0x8
	// Func End, Address: 0x1d33c0, Func Offset: 0x10
}

