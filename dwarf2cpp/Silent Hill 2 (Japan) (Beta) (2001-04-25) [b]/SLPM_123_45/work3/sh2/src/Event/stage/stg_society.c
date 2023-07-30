typedef union fsFile;
typedef struct _anon0;
typedef struct fsCdFile;
typedef struct fsMgcFile;
typedef struct Model_List;
typedef struct fsMgfFile;
typedef struct _anon1;
typedef struct fsHdFile;
typedef struct fsMgpFile;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union fsFileIndex;
typedef struct shBattleFight;
typedef struct _anon5;
typedef struct shBattleShot;
typedef struct shAttackInfo;
typedef union _anon6;

typedef void(*type_0)();
typedef int(*type_1)();

typedef int(*type_2)()[3];
typedef unsigned char type_3[170];
typedef fsFileIndex type_4[1];
typedef unsigned char type_5[13];
typedef unsigned char type_6[34];
typedef float type_7[4];
typedef _anon3 type_8[13];
typedef unsigned char type_9[10];
typedef shAttackInfo type_10[46];
typedef unsigned char type_11[10];

union fsFile
{
	_anon4 check;
	<unknown fundamental type (0xa510)> pack;
	fsCdFile cd;
	fsHdFile hd;
	fsMgcFile mgc;
	fsMgfFile mgf;
	fsMgpFile mgp;
};

struct _anon0
{
	float pos_x;
	float pos_z;
	unsigned short pos_y;
	unsigned short rot_y;
	unsigned int st;
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

struct Model_List
{
	short kind;
	short id;
	short flag_off;
	short flag_on;
	float pos[4];
	float rot[4];
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

struct _anon1
{
	short kind;
	short id;
	int pos_x;
	int pos_z;
	short pos_y;
	short rot_y;
	short status;
	short condition;
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

struct _anon2
{
	_anon3* ev_list;
	unsigned char* ev_pos;
	int(*ev_prog)();
	_anon0* gi_list;
	Model_List* mdl_list;
	_anon1* en_list;
	void(*stage_init)();
	void(*room_init)();
	void(*alltime_func)();
	int glb_crd;
	int reserve_05;
	int reserve_06;
	int reserve_07;
	int reserve_08;
	int reserve_09;
	int reserve_10;
	int reserve_11;
};

struct _anon3
{
	int flag;
	int cond;
	int rslt0;
	int rslt1;
};

struct _anon4
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
	_anon5 index;
	unsigned long pack;
};

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

struct _anon5
{
	fsFile* fp;
	char* name;
};

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon6 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
};

union _anon6
{
	shBattleFight fight;
	shBattleShot shot;
};

shAttackInfo sh2_attack_list[46];
unsigned char human_skelton[13];
unsigned char enemy_skelton[10];
unsigned char weapon_skelton[10];
unsigned char obj_anime_skelton[34];
unsigned char ev_pos[170];
_anon3 ev_list[13];
int(*ev_prog)()[3];
_anon2 stage_society;
fsFileIndex data_pic_hsp_p_female_tex[1];

int EvProgTriheadPicture();
int EvProgGetGoblet();

// 
// Start address: 0x2324e0
int EvProgTriheadPicture()
{
	// Line 62, Address: 0x2324e0, Func Offset: 0
	// Line 63, Address: 0x2324e8, Func Offset: 0x8
	// Line 65, Address: 0x2324fc, Func Offset: 0x1c
	// Func End, Address: 0x23250c, Func Offset: 0x2c
}

// 
// Start address: 0x232510
int EvProgGetGoblet()
{
	// Line 71, Address: 0x232510, Func Offset: 0
	// Line 72, Address: 0x232518, Func Offset: 0x8
	// Line 74, Address: 0x232528, Func Offset: 0x18
	// Func End, Address: 0x232538, Func Offset: 0x28
}

