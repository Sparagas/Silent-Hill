


int excl_sid;
int cd_sd_now_access;

int shSdWaitExcl();
int shSdSignalExcl();
int shSdInit();
int sd_stat_now_cd_using();
void shSdVSync();
int shSdCallCheck(int i0);
int shSdCall(int i0, int i1, int i2, int i3);
int shSdSeStop(int i0);
int shSdStat();
int shSd3dCall(int i0, int i1, int i2, float f0, float f1);
int shSd3dMove(int i0, int i1, int i2, float f0, float f1);
void shSd3dStop(int i0);
void shSd3dAllStop();
int shSdSeChange(int i0, int i1, int i2, int i3);
int shSdTrack(int i0, int i1);
int shSdRadio(int i0, int i1, int i2, int i3);
void* shSd3dAdrs();

// 
// Start address: 0x290ca0
int shSdWaitExcl()
{
	// Line 29, Address: 0x290ca0, Func Offset: 0
	// Line 30, Address: 0x290ca8, Func Offset: 0x8
	// Line 31, Address: 0x290cb8, Func Offset: 0x18
	// Func End, Address: 0x290cc8, Func Offset: 0x28
}

// 
// Start address: 0x290cd0
int shSdSignalExcl()
{
	// Line 34, Address: 0x290cd0, Func Offset: 0
	// Line 35, Address: 0x290cd8, Func Offset: 0x8
	// Line 36, Address: 0x290ce8, Func Offset: 0x18
	// Func End, Address: 0x290cf8, Func Offset: 0x28
}

// 
// Start address: 0x290d00
int shSdInit()
{
	// Line 39, Address: 0x290d00, Func Offset: 0
	// Line 40, Address: 0x290d08, Func Offset: 0x8
	// Line 44, Address: 0x290d38, Func Offset: 0x38
	// Line 45, Address: 0x290d40, Func Offset: 0x40
	// Line 46, Address: 0x290d44, Func Offset: 0x44
	// Func End, Address: 0x290d54, Func Offset: 0x54
}

// 
// Start address: 0x290d60
int sd_stat_now_cd_using()
{
	int ret;
	int stat;
	// Line 49, Address: 0x290d60, Func Offset: 0
	// Line 52, Address: 0x290d68, Func Offset: 0x8
	// Line 53, Address: 0x290d70, Func Offset: 0x10
	// Line 54, Address: 0x290d78, Func Offset: 0x18
	// Line 55, Address: 0x290d98, Func Offset: 0x38
	// Line 56, Address: 0x290d9c, Func Offset: 0x3c
	// Func End, Address: 0x290dac, Func Offset: 0x4c
}

// 
// Start address: 0x290db0
void shSdVSync()
{
	// Line 60, Address: 0x290db0, Func Offset: 0
	// Line 61, Address: 0x290db8, Func Offset: 0x8
	// Line 62, Address: 0x290dcc, Func Offset: 0x1c
	// Line 63, Address: 0x290dd4, Func Offset: 0x24
	// Line 64, Address: 0x290df4, Func Offset: 0x44
	// Line 65, Address: 0x290e00, Func Offset: 0x50
	// Line 67, Address: 0x290e08, Func Offset: 0x58
	// Line 68, Address: 0x290e10, Func Offset: 0x60
	// Line 69, Address: 0x290e30, Func Offset: 0x80
	// Line 70, Address: 0x290e38, Func Offset: 0x88
	// Line 72, Address: 0x290e40, Func Offset: 0x90
	// Line 73, Address: 0x290e48, Func Offset: 0x98
	// Line 74, Address: 0x290e50, Func Offset: 0xa0
	// Func End, Address: 0x290e60, Func Offset: 0xb0
}

// 
// Start address: 0x290e60
int shSdCallCheck(int i0)
{
	// Line 77, Address: 0x290e60, Func Offset: 0
	// Line 78, Address: 0x290e70, Func Offset: 0x10
	// Line 79, Address: 0x290e90, Func Offset: 0x30
	// Line 81, Address: 0x290ea4, Func Offset: 0x44
	// Line 84, Address: 0x290ec4, Func Offset: 0x64
	// Line 85, Address: 0x290edc, Func Offset: 0x7c
	// Line 86, Address: 0x290efc, Func Offset: 0x9c
	// Line 87, Address: 0x290f14, Func Offset: 0xb4
	// Line 88, Address: 0x290f34, Func Offset: 0xd4
	// Line 89, Address: 0x290f44, Func Offset: 0xe4
	// Line 93, Address: 0x290f64, Func Offset: 0x104
	// Line 94, Address: 0x290f68, Func Offset: 0x108
	// Func End, Address: 0x290f7c, Func Offset: 0x11c
}

// 
// Start address: 0x290f80
int shSdCall(int i0, int i1, int i2, int i3)
{
	int ret;
	// Line 97, Address: 0x290f80, Func Offset: 0
	// Line 99, Address: 0x290fa8, Func Offset: 0x28
	// Line 100, Address: 0x290fc4, Func Offset: 0x44
	// Line 101, Address: 0x290fcc, Func Offset: 0x4c
	// Line 102, Address: 0x290fe8, Func Offset: 0x68
	// Line 103, Address: 0x290ff0, Func Offset: 0x70
	// Line 104, Address: 0x290ff4, Func Offset: 0x74
	// Func End, Address: 0x291014, Func Offset: 0x94
}

// 
// Start address: 0x291020
int shSdSeStop(int i0)
{
	int ret;
	// Line 107, Address: 0x291020, Func Offset: 0
	// Line 109, Address: 0x291030, Func Offset: 0x10
	// Line 110, Address: 0x29104c, Func Offset: 0x2c
	// Line 111, Address: 0x291054, Func Offset: 0x34
	// Line 112, Address: 0x291064, Func Offset: 0x44
	// Line 113, Address: 0x29106c, Func Offset: 0x4c
	// Line 114, Address: 0x291070, Func Offset: 0x50
	// Func End, Address: 0x291084, Func Offset: 0x64
}

// 
// Start address: 0x291090
int shSdStat()
{
	int ret;
	// Line 117, Address: 0x291090, Func Offset: 0
	// Line 119, Address: 0x29109c, Func Offset: 0xc
	// Line 120, Address: 0x2910bc, Func Offset: 0x2c
	// Line 121, Address: 0x2910c4, Func Offset: 0x34
	// Line 122, Address: 0x2910d0, Func Offset: 0x40
	// Line 123, Address: 0x2910d8, Func Offset: 0x48
	// Line 124, Address: 0x2910dc, Func Offset: 0x4c
	// Func End, Address: 0x2910f0, Func Offset: 0x60
}

// 
// Start address: 0x2910f0
int shSd3dCall(int i0, int i1, int i2, float f0, float f1)
{
	int ret;
	// Line 127, Address: 0x2910f0, Func Offset: 0
	// Line 129, Address: 0x291120, Func Offset: 0x30
	// Line 130, Address: 0x291140, Func Offset: 0x50
	// Line 131, Address: 0x291148, Func Offset: 0x58
	// Line 132, Address: 0x291168, Func Offset: 0x78
	// Line 133, Address: 0x291170, Func Offset: 0x80
	// Line 134, Address: 0x291174, Func Offset: 0x84
	// Func End, Address: 0x291198, Func Offset: 0xa8
}

// 
// Start address: 0x2911a0
int shSd3dMove(int i0, int i1, int i2, float f0, float f1)
{
	int ret;
	// Line 137, Address: 0x2911a0, Func Offset: 0
	// Line 139, Address: 0x2911d0, Func Offset: 0x30
	// Line 140, Address: 0x2911f0, Func Offset: 0x50
	// Line 141, Address: 0x2911f8, Func Offset: 0x58
	// Line 142, Address: 0x291218, Func Offset: 0x78
	// Line 143, Address: 0x291220, Func Offset: 0x80
	// Line 144, Address: 0x291224, Func Offset: 0x84
	// Func End, Address: 0x291248, Func Offset: 0xa8
}

// 
// Start address: 0x291250
void shSd3dStop(int i0)
{
	// Line 157, Address: 0x291250, Func Offset: 0
	// Line 158, Address: 0x291260, Func Offset: 0x10
	// Line 159, Address: 0x291274, Func Offset: 0x24
	// Line 160, Address: 0x29127c, Func Offset: 0x2c
	// Line 161, Address: 0x291288, Func Offset: 0x38
	// Line 162, Address: 0x291290, Func Offset: 0x40
	// Func End, Address: 0x2912a4, Func Offset: 0x54
}

// 
// Start address: 0x2912b0
void shSd3dAllStop()
{
	// Line 165, Address: 0x2912b0, Func Offset: 0
	// Line 166, Address: 0x2912b8, Func Offset: 0x8
	// Line 167, Address: 0x2912cc, Func Offset: 0x1c
	// Line 168, Address: 0x2912d4, Func Offset: 0x24
	// Line 169, Address: 0x2912dc, Func Offset: 0x2c
	// Line 170, Address: 0x2912e4, Func Offset: 0x34
	// Func End, Address: 0x2912f4, Func Offset: 0x44
}

// 
// Start address: 0x291300
int shSdSeChange(int i0, int i1, int i2, int i3)
{
	int ret;
	// Line 173, Address: 0x291300, Func Offset: 0
	// Line 175, Address: 0x291328, Func Offset: 0x28
	// Line 176, Address: 0x291348, Func Offset: 0x48
	// Line 177, Address: 0x291350, Func Offset: 0x50
	// Line 178, Address: 0x29136c, Func Offset: 0x6c
	// Line 179, Address: 0x291374, Func Offset: 0x74
	// Line 180, Address: 0x291378, Func Offset: 0x78
	// Func End, Address: 0x291398, Func Offset: 0x98
}

// 
// Start address: 0x2913a0
int shSdTrack(int i0, int i1)
{
	int ret;
	// Line 183, Address: 0x2913a0, Func Offset: 0
	// Line 185, Address: 0x2913b8, Func Offset: 0x18
	// Line 186, Address: 0x2913d8, Func Offset: 0x38
	// Line 187, Address: 0x2913e0, Func Offset: 0x40
	// Line 188, Address: 0x2913f4, Func Offset: 0x54
	// Line 189, Address: 0x2913fc, Func Offset: 0x5c
	// Line 190, Address: 0x291400, Func Offset: 0x60
	// Func End, Address: 0x291418, Func Offset: 0x78
}

// 
// Start address: 0x291420
int shSdRadio(int i0, int i1, int i2, int i3)
{
	int ret;
	// Line 193, Address: 0x291420, Func Offset: 0
	// Line 195, Address: 0x291448, Func Offset: 0x28
	// Line 196, Address: 0x291468, Func Offset: 0x48
	// Line 197, Address: 0x291470, Func Offset: 0x50
	// Line 198, Address: 0x29148c, Func Offset: 0x6c
	// Line 199, Address: 0x291494, Func Offset: 0x74
	// Line 200, Address: 0x291498, Func Offset: 0x78
	// Func End, Address: 0x2914b8, Func Offset: 0x98
}

// 
// Start address: 0x2914c0
void* shSd3dAdrs()
{
	void* ret;
	// Line 203, Address: 0x2914c0, Func Offset: 0
	// Line 206, Address: 0x2914cc, Func Offset: 0xc
	// Line 207, Address: 0x2914d4, Func Offset: 0x14
	// Line 208, Address: 0x2914e0, Func Offset: 0x20
	// Line 209, Address: 0x2914e8, Func Offset: 0x28
	// Line 210, Address: 0x2914ec, Func Offset: 0x2c
	// Func End, Address: 0x291500, Func Offset: 0x40
}

