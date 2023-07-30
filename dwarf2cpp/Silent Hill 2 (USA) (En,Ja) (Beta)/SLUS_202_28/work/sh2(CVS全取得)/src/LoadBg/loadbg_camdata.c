typedef struct _anon0;
typedef union _anon1;
typedef union fsFileIndex;
typedef struct _anon2;
typedef union fsFile;
typedef struct shBattleFight;
typedef struct fsCdFile;
typedef struct shBattleShot;
typedef struct fsMgcFile;
typedef struct fsMgfFile;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct shAttackInfo;


typedef shAttackInfo type_0[66];
typedef char type_1[2048];
typedef char type_2[2048][1];
typedef int type_3[1];

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

union _anon1
{
	shBattleFight fight;
	shBattleShot shot;
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

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
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

struct shBattleShot
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

shAttackInfo sh2_attack_list[66];
int CAMsize[1];
char CAMbuf[2048][1];

int BgCam_LoadData(void* loadbuf, fsFileIndex* file);
void loadBgCAM_LoadData(int slot, fsFileIndex* file, int mapid);

// 
// Start address: 0x251ae0
int BgCam_LoadData(void* loadbuf, fsFileIndex* file)
{
	// Line 24, Address: 0x251ae0, Func Offset: 0
	// Line 25, Address: 0x251ae8, Func Offset: 0x8
	// Line 26, Address: 0x251af4, Func Offset: 0x14
	// Func End, Address: 0x251b04, Func Offset: 0x24
}

// 
// Start address: 0x251b10
void loadBgCAM_LoadData(int slot, fsFileIndex* file, int mapid)
{
	// Line 29, Address: 0x251b10, Func Offset: 0
	// Line 30, Address: 0x251b34, Func Offset: 0x24
	// Line 31, Address: 0x251b6c, Func Offset: 0x5c
	// Line 32, Address: 0x251b80, Func Offset: 0x70
	// Line 33, Address: 0x251bb4, Func Offset: 0xa4
	// Line 35, Address: 0x251bc8, Func Offset: 0xb8
	// Func End, Address: 0x251be8, Func Offset: 0xd8
}

