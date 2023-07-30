typedef union fsFileIndex;
typedef struct _anon0;
typedef union fsFile;
typedef struct shAttackInfo;
typedef struct _VC_FIX_CAM_PARAM;
typedef union _anon1;
typedef struct _VC_FIX_ANG_CAM_PARAM;
typedef struct _VC_LOCUS_CIRCLE_CAM_PARAM;
typedef struct _VC_ROAD_AREA;
typedef struct _VC_ROAD_DATA;
typedef struct fsCdFile;
typedef struct fsMgcFile;
typedef union _anon2;
typedef struct fsMgfFile;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct shBattleFight;
typedef struct shBattleShot;
typedef struct _anon3;


typedef _VC_ROAD_DATA type_0[0];
typedef unsigned char* type_1[16];
typedef shAttackInfo type_2[46];
typedef unsigned char type_3[262144];

union fsFileIndex
{
	_anon0 index;
	unsigned long pack;
};

struct _anon0
{
	fsFile* fp;
	char* name;
};

union fsFile
{
	_anon3 check;
	<unknown fundamental type (0xa510)> pack;
	fsCdFile cd;
	fsHdFile hd;
	fsMgcFile mgc;
	fsMgfFile mgf;
	fsMgpFile mgp;
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

struct _VC_FIX_CAM_PARAM
{
	float sta_base_ang_y;
	float end_base_ang_y;
};

union _anon1
{
	shBattleFight fight;
	shBattleShot shot;
};

struct _VC_FIX_ANG_CAM_PARAM
{
	float ang_x;
	float ang_y;
};

struct _VC_LOCUS_CIRCLE_CAM_PARAM
{
	float ang_y;
	float radius;
};

struct _VC_ROAD_AREA
{
	float x0;
	float z0;
	float x1;
	float z1;
	float x2;
	float z2;
	float min_hy;
	float max_hy;
};

struct _VC_ROAD_DATA
{
	_VC_ROAD_AREA lim_sw;
	_VC_ROAD_AREA lim_rd;
	int flags;
	int area_size_type;
	int rd_type;
	int mv_y_type;
	float ofs_watch_hy;
	int rd_dir_type;
	float projection;
	float proj_sec;
	int cam_mv_type;
	_anon2 tmp;
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

union _anon2
{
	_VC_FIX_CAM_PARAM stl;
	_VC_FIX_ANG_CAM_PARAM fix;
	_VC_LOCUS_CIRCLE_CAM_PARAM cir;
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

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct _anon3
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

int atari_head_index;
int atari_data_num;
unsigned char* CLDadr[16];
unsigned char ATARI_DATA[262144];
shAttackInfo sh2_attack_list[46];
int cam_index;
_VC_ROAD_DATA mainCameraData[0];

void kari_init_colidata();
int kari_load_colidata2(fsFileIndex* file);
void kari_init_camdata();
int kari_load_camdata(fsFileIndex* file);

// 
// Start address: 0x146150
void kari_init_colidata()
{
	int i;
	// Line 36, Address: 0x146150, Func Offset: 0
	// Line 39, Address: 0x146158, Func Offset: 0x8
	// Line 41, Address: 0x146160, Func Offset: 0x10
	// Line 43, Address: 0x146168, Func Offset: 0x18
	// Line 45, Address: 0x14619c, Func Offset: 0x4c
	// Func End, Address: 0x1461ac, Func Offset: 0x5c
}

// 
// Start address: 0x1461b0
int kari_load_colidata2(fsFileIndex* file)
{
	int fid;
	int le;
	int fp;
	// Line 56, Address: 0x1461b0, Func Offset: 0
	// Line 62, Address: 0x1461c8, Func Offset: 0x18
	// Line 63, Address: 0x1461d8, Func Offset: 0x28
	// Line 65, Address: 0x1461e0, Func Offset: 0x30
	// Line 67, Address: 0x1461ec, Func Offset: 0x3c
	// Line 69, Address: 0x146210, Func Offset: 0x60
	// Line 76, Address: 0x14624c, Func Offset: 0x9c
	// Line 77, Address: 0x146268, Func Offset: 0xb8
	// Line 78, Address: 0x146290, Func Offset: 0xe0
	// Line 86, Address: 0x1462a4, Func Offset: 0xf4
	// Line 88, Address: 0x1462c0, Func Offset: 0x110
	// Line 89, Address: 0x1462c4, Func Offset: 0x114
	// Func End, Address: 0x1462e0, Func Offset: 0x130
}

// 
// Start address: 0x1462e0
void kari_init_camdata()
{
	// Line 157, Address: 0x1462e0, Func Offset: 0
	// Line 158, Address: 0x1462e8, Func Offset: 0x8
	// Func End, Address: 0x1462f0, Func Offset: 0x10
}

// 
// Start address: 0x1462f0
int kari_load_camdata(fsFileIndex* file)
{
	int fid;
	int fp;
	// Line 164, Address: 0x1462f0, Func Offset: 0
	// Line 168, Address: 0x146304, Func Offset: 0x14
	// Line 171, Address: 0x146310, Func Offset: 0x20
	// Line 172, Address: 0x14631c, Func Offset: 0x2c
	// Line 178, Address: 0x146328, Func Offset: 0x38
	// Line 179, Address: 0x146338, Func Offset: 0x48
	// Line 180, Address: 0x146344, Func Offset: 0x54
	// Line 182, Address: 0x14634c, Func Offset: 0x5c
	// Line 184, Address: 0x146358, Func Offset: 0x68
	// Line 185, Address: 0x146394, Func Offset: 0xa4
	// Line 187, Address: 0x1463b0, Func Offset: 0xc0
	// Line 189, Address: 0x1463c4, Func Offset: 0xd4
	// Line 190, Address: 0x1463c8, Func Offset: 0xd8
	// Func End, Address: 0x1463e0, Func Offset: 0xf0
}

