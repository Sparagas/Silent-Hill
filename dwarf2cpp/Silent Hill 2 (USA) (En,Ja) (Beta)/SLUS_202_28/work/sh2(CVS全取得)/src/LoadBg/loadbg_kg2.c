typedef struct shBattleShot;
typedef struct loadBgKG2_Ctrl;
typedef struct shAttackInfo;
typedef union _anon0;
typedef struct SHADOW_OUTDOOR_HEAD;
typedef struct shBattleFight;


typedef int type_0[4];
typedef void* type_1[4];
typedef int type_2[4];
typedef void* type_3[5];
typedef shAttackInfo type_4[66];

struct shBattleShot
{
	float test_a;
	float test_b;
	float test_c;
};

struct loadBgKG2_Ctrl
{
	int mapid[4];
	void* addr[4];
	int size[4];
	void* list[5];
};

struct shAttackInfo
{
	unsigned short id;
	unsigned short kind;
	float ap;
	float sp;
	float min_range;
	float max_range;
	_anon0 hit_check;
	unsigned char atk_start;
	unsigned char atk_end;
	unsigned char sd;
	unsigned char eff;
};

union _anon0
{
	shBattleFight fight;
	shBattleShot shot;
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

struct shBattleFight
{
	float test_a;
	float test_b;
	float test_c;
};

shAttackInfo sh2_attack_list[66];
loadBgKG2_Ctrl lbKG2_Ctrl;

int _loadBgKG2_Delete(int slot);
int _loadBgKG2_Regist(int slot, int mapid, void* addr, int size);
int _loadBgKG2_Replace(int slot, int mapid, void* addr, int size);
int loadBgKG2_Replace(int slot, int mapid, void* addr, int size);
void** loadBgKG2_GetLoadedDataAddrList();

// 
// Start address: 0x2723b0
int _loadBgKG2_Delete(int slot)
{
	void* addr;
	// Line 21, Address: 0x2723b0, Func Offset: 0
	// Line 23, Address: 0x2723b8, Func Offset: 0x8
	// Line 24, Address: 0x2723f4, Func Offset: 0x44
	// Line 25, Address: 0x272408, Func Offset: 0x58
	// Line 26, Address: 0x272418, Func Offset: 0x68
	// Line 27, Address: 0x27241c, Func Offset: 0x6c
	// Line 28, Address: 0x27242c, Func Offset: 0x7c
	// Line 29, Address: 0x272430, Func Offset: 0x80
	// Func End, Address: 0x272440, Func Offset: 0x90
}

// 
// Start address: 0x272440
int _loadBgKG2_Regist(int slot, int mapid, void* addr, int size)
{
	SHADOW_OUTDOOR_HEAD* header;
	// Line 32, Address: 0x272440, Func Offset: 0
	// Line 33, Address: 0x272448, Func Offset: 0x8
	// Line 34, Address: 0x272484, Func Offset: 0x44
	// Line 38, Address: 0x2724d0, Func Offset: 0x90
	// Line 40, Address: 0x2724dc, Func Offset: 0x9c
	// Line 41, Address: 0x2724e0, Func Offset: 0xa0
	// Line 42, Address: 0x2724f0, Func Offset: 0xb0
	// Line 43, Address: 0x272500, Func Offset: 0xc0
	// Line 45, Address: 0x272508, Func Offset: 0xc8
	// Line 46, Address: 0x272518, Func Offset: 0xd8
	// Line 48, Address: 0x27251c, Func Offset: 0xdc
	// Line 50, Address: 0x272520, Func Offset: 0xe0
	// Func End, Address: 0x272530, Func Offset: 0xf0
}

// 
// Start address: 0x272530
int _loadBgKG2_Replace(int slot, int mapid, void* addr, int size)
{
	int ret;
	// Line 71, Address: 0x272530, Func Offset: 0
	// Line 72, Address: 0x27255c, Func Offset: 0x2c
	// Line 73, Address: 0x272560, Func Offset: 0x30
	// Line 77, Address: 0x2725ac, Func Offset: 0x7c
	// Line 79, Address: 0x2725c4, Func Offset: 0x94
	// Line 80, Address: 0x2725dc, Func Offset: 0xac
	// Line 82, Address: 0x272600, Func Offset: 0xd0
	// Line 83, Address: 0x272604, Func Offset: 0xd4
	// Func End, Address: 0x272628, Func Offset: 0xf8
}

// 
// Start address: 0x272630
int loadBgKG2_Replace(int slot, int mapid, void* addr, int size)
{
	int ret;
	// Line 86, Address: 0x272630, Func Offset: 0
	// Line 88, Address: 0x27265c, Func Offset: 0x2c
	// Line 89, Address: 0x272668, Func Offset: 0x38
	// Line 91, Address: 0x272694, Func Offset: 0x64
	// Line 92, Address: 0x2726a8, Func Offset: 0x78
	// Line 94, Address: 0x2726b0, Func Offset: 0x80
	// Line 95, Address: 0x2726d4, Func Offset: 0xa4
	// Line 97, Address: 0x2726dc, Func Offset: 0xac
	// Line 100, Address: 0x272700, Func Offset: 0xd0
	// Line 101, Address: 0x272704, Func Offset: 0xd4
	// Func End, Address: 0x272728, Func Offset: 0xf8
}

// 
// Start address: 0x272730
void** loadBgKG2_GetLoadedDataAddrList()
{
	void* addr;
	int j;
	int i;
	// Line 113, Address: 0x272730, Func Offset: 0
	// Line 114, Address: 0x272734, Func Offset: 0x4
	// Line 115, Address: 0x272740, Func Offset: 0x10
	// Line 116, Address: 0x272754, Func Offset: 0x24
	// Line 117, Address: 0x272778, Func Offset: 0x48
	// Line 118, Address: 0x27278c, Func Offset: 0x5c
	// Line 120, Address: 0x2727a0, Func Offset: 0x70
	// Line 121, Address: 0x2727a8, Func Offset: 0x78
	// Func End, Address: 0x2727b0, Func Offset: 0x80
}

