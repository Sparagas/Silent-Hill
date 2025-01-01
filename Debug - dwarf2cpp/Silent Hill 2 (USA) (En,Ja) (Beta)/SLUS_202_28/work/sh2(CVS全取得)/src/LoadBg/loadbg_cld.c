typedef struct loadBgCLD_Ctrl;


typedef int type_0[16];
typedef void* type_1[16];
typedef int type_2[16];
typedef void* type_3[17];

struct loadBgCLD_Ctrl
{
	int mapid[16];
	void* addr[16];
	int size[16];
	void* list[17];
};

loadBgCLD_Ctrl lbCLD_Ctrl;

int _loadBgCLD_Delete(int slot);
int _loadBgCLD_Regist(int slot, int mapid, void* addr, int size);
int _loadBgCLD_Replace(int slot, int mapid, void* addr, int size);
int loadBgCLD_Replace(int slot, int mapid, void* addr, int size);
void** loadBgCLD_GetLoadedDataAddrList();

// 
// Start address: 0x271fc0
int _loadBgCLD_Delete(int slot)
{
	void* addr;
	// Line 19, Address: 0x271fc0, Func Offset: 0
	// Line 21, Address: 0x271fc8, Func Offset: 0x8
	// Line 22, Address: 0x272004, Func Offset: 0x44
	// Line 23, Address: 0x272018, Func Offset: 0x58
	// Line 24, Address: 0x272028, Func Offset: 0x68
	// Line 25, Address: 0x27202c, Func Offset: 0x6c
	// Line 26, Address: 0x27203c, Func Offset: 0x7c
	// Line 27, Address: 0x272040, Func Offset: 0x80
	// Func End, Address: 0x272050, Func Offset: 0x90
}

// 
// Start address: 0x272050
int _loadBgCLD_Regist(int slot, int mapid, void* addr, int size)
{
	// Line 30, Address: 0x272050, Func Offset: 0
	// Line 31, Address: 0x272058, Func Offset: 0x8
	// Line 32, Address: 0x272094, Func Offset: 0x44
	// Line 36, Address: 0x2720e0, Func Offset: 0x90
	// Line 38, Address: 0x2720ec, Func Offset: 0x9c
	// Line 39, Address: 0x2720f0, Func Offset: 0xa0
	// Line 40, Address: 0x272100, Func Offset: 0xb0
	// Line 41, Address: 0x272110, Func Offset: 0xc0
	// Line 43, Address: 0x272114, Func Offset: 0xc4
	// Func End, Address: 0x272124, Func Offset: 0xd4
}

// 
// Start address: 0x272130
int _loadBgCLD_Replace(int slot, int mapid, void* addr, int size)
{
	int ret;
	// Line 64, Address: 0x272130, Func Offset: 0
	// Line 65, Address: 0x27215c, Func Offset: 0x2c
	// Line 66, Address: 0x272160, Func Offset: 0x30
	// Line 70, Address: 0x2721ac, Func Offset: 0x7c
	// Line 72, Address: 0x2721c4, Func Offset: 0x94
	// Line 73, Address: 0x2721dc, Func Offset: 0xac
	// Line 75, Address: 0x272200, Func Offset: 0xd0
	// Line 76, Address: 0x272204, Func Offset: 0xd4
	// Func End, Address: 0x272228, Func Offset: 0xf8
}

// 
// Start address: 0x272230
int loadBgCLD_Replace(int slot, int mapid, void* addr, int size)
{
	int ret;
	// Line 79, Address: 0x272230, Func Offset: 0
	// Line 81, Address: 0x27225c, Func Offset: 0x2c
	// Line 82, Address: 0x272268, Func Offset: 0x38
	// Line 84, Address: 0x272294, Func Offset: 0x64
	// Line 85, Address: 0x2722a8, Func Offset: 0x78
	// Line 87, Address: 0x2722b0, Func Offset: 0x80
	// Line 88, Address: 0x2722d4, Func Offset: 0xa4
	// Line 90, Address: 0x2722dc, Func Offset: 0xac
	// Line 93, Address: 0x272300, Func Offset: 0xd0
	// Line 94, Address: 0x272304, Func Offset: 0xd4
	// Func End, Address: 0x272328, Func Offset: 0xf8
}

// 
// Start address: 0x272330
void** loadBgCLD_GetLoadedDataAddrList()
{
	void* addr;
	int j;
	int i;
	// Line 106, Address: 0x272330, Func Offset: 0
	// Line 107, Address: 0x272334, Func Offset: 0x4
	// Line 108, Address: 0x272340, Func Offset: 0x10
	// Line 109, Address: 0x272354, Func Offset: 0x24
	// Line 110, Address: 0x272378, Func Offset: 0x48
	// Line 111, Address: 0x27238c, Func Offset: 0x5c
	// Line 113, Address: 0x2723a0, Func Offset: 0x70
	// Line 114, Address: 0x2723a8, Func Offset: 0x78
	// Func End, Address: 0x2723b0, Func Offset: 0x80
}

