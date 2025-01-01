typedef struct loadBgTEX_Ctrl;


typedef int type_0[7];
typedef void* type_1[7];
typedef int type_2[7];

struct loadBgTEX_Ctrl
{
	int mapid[7];
	void* addr[7];
	int size[7];
};

loadBgTEX_Ctrl lbMAP_Ctrl;

int _loadBgMAP_Delete(int slot);
int _loadBgMAP_Regist(int slot, int mapid, void* addr, int size);
int _loadBgMAP_Replace(int slot, int mapid, void* addr, int size);
int loadBgTEX_Replace(int slot, int mapid, void* addr, int size);
int loadBgMAP_Replace(int slot, int mapid, void* addr, int size);
void loadBgMAP_AllClear();
int loadBgTEX_AreaInit(int init);
int loadBgTEX_RoomInit(int init);
int loadBgMAP_BlockInit(int slot, int init);

// 
// Start address: 0x2727b0
int _loadBgMAP_Delete(int slot)
{
	void* addr;
	// Line 25, Address: 0x2727b0, Func Offset: 0
	// Line 28, Address: 0x2727b8, Func Offset: 0x8
	// Line 29, Address: 0x2727f4, Func Offset: 0x44
	// Line 30, Address: 0x272808, Func Offset: 0x58
	// Line 31, Address: 0x272818, Func Offset: 0x68
	// Line 32, Address: 0x27281c, Func Offset: 0x6c
	// Line 33, Address: 0x27282c, Func Offset: 0x7c
	// Line 34, Address: 0x272834, Func Offset: 0x84
	// Line 36, Address: 0x272840, Func Offset: 0x90
	// Line 37, Address: 0x27285c, Func Offset: 0xac
	// Line 38, Address: 0x272870, Func Offset: 0xc0
	// Line 39, Address: 0x272884, Func Offset: 0xd4
	// Line 43, Address: 0x272894, Func Offset: 0xe4
	// Func End, Address: 0x2728a4, Func Offset: 0xf4
}

// 
// Start address: 0x2728b0
int _loadBgMAP_Regist(int slot, int mapid, void* addr, int size)
{
	// Line 46, Address: 0x2728b0, Func Offset: 0
	// Line 47, Address: 0x2728b8, Func Offset: 0x8
	// Line 48, Address: 0x2728f4, Func Offset: 0x44
	// Line 52, Address: 0x272940, Func Offset: 0x90
	// Line 54, Address: 0x27294c, Func Offset: 0x9c
	// Line 55, Address: 0x272950, Func Offset: 0xa0
	// Line 56, Address: 0x272960, Func Offset: 0xb0
	// Line 57, Address: 0x272970, Func Offset: 0xc0
	// Line 58, Address: 0x27298c, Func Offset: 0xdc
	// Line 59, Address: 0x2729a0, Func Offset: 0xf0
	// Line 60, Address: 0x2729b4, Func Offset: 0x104
	// Line 64, Address: 0x2729c0, Func Offset: 0x110
	// Func End, Address: 0x2729d0, Func Offset: 0x120
}

// 
// Start address: 0x2729d0
int _loadBgMAP_Replace(int slot, int mapid, void* addr, int size)
{
	int ret;
	// Line 67, Address: 0x2729d0, Func Offset: 0
	// Line 68, Address: 0x2729fc, Func Offset: 0x2c
	// Line 69, Address: 0x272a00, Func Offset: 0x30
	// Line 74, Address: 0x272a4c, Func Offset: 0x7c
	// Line 75, Address: 0x272a60, Func Offset: 0x90
	// Line 78, Address: 0x272a64, Func Offset: 0x94
	// Line 80, Address: 0x272a6c, Func Offset: 0x9c
	// Line 82, Address: 0x272a90, Func Offset: 0xc0
	// Line 83, Address: 0x272a94, Func Offset: 0xc4
	// Func End, Address: 0x272ab8, Func Offset: 0xe8
}

// 
// Start address: 0x272ac0
int loadBgTEX_Replace(int slot, int mapid, void* addr, int size)
{
	int ret;
	// Line 86, Address: 0x272ac0, Func Offset: 0
	// Line 88, Address: 0x272aec, Func Offset: 0x2c
	// Line 89, Address: 0x272af8, Func Offset: 0x38
	// Line 92, Address: 0x272b24, Func Offset: 0x64
	// Line 93, Address: 0x272b40, Func Offset: 0x80
	// Line 96, Address: 0x272b48, Func Offset: 0x88
	// Line 98, Address: 0x272b74, Func Offset: 0xb4
	// Line 102, Address: 0x272b7c, Func Offset: 0xbc
	// Line 106, Address: 0x272ba8, Func Offset: 0xe8
	// Line 107, Address: 0x272bac, Func Offset: 0xec
	// Func End, Address: 0x272bd0, Func Offset: 0x110
}

// 
// Start address: 0x272bd0
int loadBgMAP_Replace(int slot, int mapid, void* addr, int size)
{
	int ret;
	// Line 110, Address: 0x272bd0, Func Offset: 0
	// Line 112, Address: 0x272bfc, Func Offset: 0x2c
	// Line 113, Address: 0x272c0c, Func Offset: 0x3c
	// Line 116, Address: 0x272c38, Func Offset: 0x68
	// Line 117, Address: 0x272c4c, Func Offset: 0x7c
	// Line 120, Address: 0x272c54, Func Offset: 0x84
	// Line 121, Address: 0x272c78, Func Offset: 0xa8
	// Line 125, Address: 0x272c80, Func Offset: 0xb0
	// Line 128, Address: 0x272ca4, Func Offset: 0xd4
	// Line 129, Address: 0x272ca8, Func Offset: 0xd8
	// Func End, Address: 0x272ccc, Func Offset: 0xfc
}

// 
// Start address: 0x272cd0
void loadBgMAP_AllClear()
{
	int i;
	// Line 132, Address: 0x272cd0, Func Offset: 0
	// Line 134, Address: 0x272cdc, Func Offset: 0xc
	// Line 135, Address: 0x272ce8, Func Offset: 0x18
	// Line 136, Address: 0x272d00, Func Offset: 0x30
	// Line 137, Address: 0x272d14, Func Offset: 0x44
	// Func End, Address: 0x272d28, Func Offset: 0x58
}

// 
// Start address: 0x272d30
int loadBgTEX_AreaInit(int init)
{
	int size;
	void* addr;
	int mapid;
	// Line 153, Address: 0x272d30, Func Offset: 0
	// Line 157, Address: 0x272d38, Func Offset: 0x8
	// Line 158, Address: 0x272d40, Func Offset: 0x10
	// Line 160, Address: 0x272d48, Func Offset: 0x18
	// Line 161, Address: 0x272d50, Func Offset: 0x20
	// Line 162, Address: 0x272d58, Func Offset: 0x28
	// Line 163, Address: 0x272d68, Func Offset: 0x38
	// Line 164, Address: 0x272d7c, Func Offset: 0x4c
	// Line 165, Address: 0x272d88, Func Offset: 0x58
	// Line 166, Address: 0x272d9c, Func Offset: 0x6c
	// Line 167, Address: 0x272da4, Func Offset: 0x74
	// Line 169, Address: 0x272db4, Func Offset: 0x84
	// Line 170, Address: 0x272dbc, Func Offset: 0x8c
	// Line 172, Address: 0x272dcc, Func Offset: 0x9c
	// Line 176, Address: 0x272dd4, Func Offset: 0xa4
	// Line 177, Address: 0x272ddc, Func Offset: 0xac
	// Line 180, Address: 0x272df0, Func Offset: 0xc0
	// Line 181, Address: 0x272df4, Func Offset: 0xc4
	// Func End, Address: 0x272e04, Func Offset: 0xd4
}

// 
// Start address: 0x272e10
int loadBgTEX_RoomInit(int init)
{
	int size;
	void* addr;
	int mapid;
	// Line 184, Address: 0x272e10, Func Offset: 0
	// Line 189, Address: 0x272e18, Func Offset: 0x8
	// Line 190, Address: 0x272e20, Func Offset: 0x10
	// Line 192, Address: 0x272e28, Func Offset: 0x18
	// Line 193, Address: 0x272e30, Func Offset: 0x20
	// Line 194, Address: 0x272e38, Func Offset: 0x28
	// Line 195, Address: 0x272e48, Func Offset: 0x38
	// Line 196, Address: 0x272e5c, Func Offset: 0x4c
	// Line 197, Address: 0x272e68, Func Offset: 0x58
	// Line 198, Address: 0x272e7c, Func Offset: 0x6c
	// Line 199, Address: 0x272e84, Func Offset: 0x74
	// Line 201, Address: 0x272e94, Func Offset: 0x84
	// Line 202, Address: 0x272e9c, Func Offset: 0x8c
	// Line 204, Address: 0x272eac, Func Offset: 0x9c
	// Line 208, Address: 0x272eb4, Func Offset: 0xa4
	// Line 209, Address: 0x272ebc, Func Offset: 0xac
	// Line 212, Address: 0x272ed0, Func Offset: 0xc0
	// Line 213, Address: 0x272ed4, Func Offset: 0xc4
	// Func End, Address: 0x272ee4, Func Offset: 0xd4
}

// 
// Start address: 0x272ef0
int loadBgMAP_BlockInit(int slot, int init)
{
	int size;
	void* addr;
	int mapid;
	// Line 216, Address: 0x272ef0, Func Offset: 0
	// Line 221, Address: 0x272f04, Func Offset: 0x14
	// Line 222, Address: 0x272f18, Func Offset: 0x28
	// Line 224, Address: 0x272f20, Func Offset: 0x30
	// Line 225, Address: 0x272f30, Func Offset: 0x40
	// Line 226, Address: 0x272f40, Func Offset: 0x50
	// Line 227, Address: 0x272f58, Func Offset: 0x68
	// Line 228, Address: 0x272f68, Func Offset: 0x78
	// Line 229, Address: 0x272f80, Func Offset: 0x90
	// Line 230, Address: 0x272f88, Func Offset: 0x98
	// Line 232, Address: 0x272f9c, Func Offset: 0xac
	// Line 237, Address: 0x272fa8, Func Offset: 0xb8
	// Line 238, Address: 0x272fc0, Func Offset: 0xd0
	// Line 241, Address: 0x272fcc, Func Offset: 0xdc
	// Line 242, Address: 0x272fd0, Func Offset: 0xe0
	// Func End, Address: 0x272fe8, Func Offset: 0xf8
}

