typedef struct _anon0;
typedef struct _anon1;


typedef char type_0[512];
typedef _anon0 type_1[0];
typedef char type_2[256];
typedef _anon1 type_3[128];
typedef char type_4[512];
typedef _anon0 type_5[64];
typedef char type_6[512];

struct _anon0
{
	char* name;
	int size;
	int merge_index;
};

struct _anon1
{
	unsigned int key;
	void* addr;
	unsigned int size;
	int moved;
	int used;
};

_anon1 hash_table[128];
char fileload_root_path[256];
int file_tbl_num;
_anon0 sf_file_table[0];
_anon0 file_tbl[64];

char* slash2bs(char* name);
void HashBucketClear(_anon1* bucket);
void HashBucketDelete(_anon1* bucket);
void InitHash();
int GetHashValue(unsigned int key);
void InsertBucket(unsigned int key, void* addr, int size);
_anon1* GetBucket(int key);
void* GetBucketValue(int key);
int DeleteBucket(int key);
void ClearBucketFromValue(void* from_);
void DeleteBucketFromValue(void* from_, void* to_);
void MoveBucketValue(void* from_, void* to_, int move_offset);
void sfFileInit();
void sfFileLoadSetPath(char* path);
char* sfFileLoadPath();
int sfFileWait(int mode);
int ReallocateCache(_anon1* bucket);
int ReallocateCacheAddr(_anon1* bucket, void* to_addr);
int EilIDChange(int id);
int CynIDChange(int id);
_anon0* sfFileGetTblDataFromID(int id);
int sfFileLoad(int id);
int sfFileLoadToAddr(int id, void* addr);
void sfFileDelete(void* from, void* to);
void sfFileFlush(void* from);
void sfFileMove(void* from, void* to, int move_offset);
int sfFileFree(int id);
int sfFileArcIDFromFileID(int id);
void* sfFileArcGetAddress(int id);
int sfFileArcCheck(int id);
void sfFileVTask();
int sfDebugRead(char* name, void* addr, unsigned int size);

// 
// Start address: 0x158a20
char* slash2bs(char* name)
{
	int i;
	char name2[512];
	// Line 88, Address: 0x158a20, Func Offset: 0
	// Line 90, Address: 0x158a34, Func Offset: 0x14
	// Line 89, Address: 0x158a38, Func Offset: 0x18
	// Line 88, Address: 0x158a3c, Func Offset: 0x1c
	// Line 89, Address: 0x158a48, Func Offset: 0x28
	// Line 91, Address: 0x158a50, Func Offset: 0x30
	// Line 93, Address: 0x158a58, Func Offset: 0x38
	// Line 94, Address: 0x158a5c, Func Offset: 0x3c
	// Line 95, Address: 0x158a60, Func Offset: 0x40
	// Line 96, Address: 0x158a64, Func Offset: 0x44
	// Line 97, Address: 0x158a78, Func Offset: 0x58
	// Line 103, Address: 0x158a84, Func Offset: 0x64
	// Func End, Address: 0x158a8c, Func Offset: 0x6c
}

// 
// Start address: 0x158a90
void HashBucketClear(_anon1* bucket)
{
	// Line 131, Address: 0x158a90, Func Offset: 0
	// Line 132, Address: 0x158a94, Func Offset: 0x4
	// Line 133, Address: 0x158a98, Func Offset: 0x8
	// Line 134, Address: 0x158a9c, Func Offset: 0xc
	// Line 136, Address: 0x158aa0, Func Offset: 0x10
	// Func End, Address: 0x158aa8, Func Offset: 0x18
}

// 
// Start address: 0x158ab0
void HashBucketDelete(_anon1* bucket)
{
	// Line 144, Address: 0x158ab0, Func Offset: 0
	// Line 145, Address: 0x158ab8, Func Offset: 0x8
	// Line 146, Address: 0x158abc, Func Offset: 0xc
	// Line 147, Address: 0x158ac0, Func Offset: 0x10
	// Line 149, Address: 0x158ac4, Func Offset: 0x14
	// Func End, Address: 0x158acc, Func Offset: 0x1c
}

// 
// Start address: 0x158ad0
void InitHash()
{
	int i;
	// Line 154, Address: 0x158ad0, Func Offset: 0
	// Line 156, Address: 0x158ad4, Func Offset: 0x4
	// Line 154, Address: 0x158ad8, Func Offset: 0x8
	// Line 156, Address: 0x158adc, Func Offset: 0xc
	// Line 157, Address: 0x158ae8, Func Offset: 0x18
	// Line 158, Address: 0x158b08, Func Offset: 0x38
	// Func End, Address: 0x158b14, Func Offset: 0x44
}

// 
// Start address: 0x158b20
int GetHashValue(unsigned int key)
{
	// Line 165, Address: 0x158b20, Func Offset: 0
	// Func End, Address: 0x158b28, Func Offset: 0x8
}

// 
// Start address: 0x158b30
void InsertBucket(unsigned int key, void* addr, int size)
{
	int index;
	int i;
	_anon1* bucket;
	// Line 170, Address: 0x158b30, Func Offset: 0
	// Line 171, Address: 0x158b38, Func Offset: 0x8
	// Line 173, Address: 0x158b44, Func Offset: 0x14
	// Line 174, Address: 0x158b48, Func Offset: 0x18
	// Line 175, Address: 0x158b4c, Func Offset: 0x1c
	// Line 174, Address: 0x158b50, Func Offset: 0x20
	// Line 173, Address: 0x158b54, Func Offset: 0x24
	// Line 174, Address: 0x158b58, Func Offset: 0x28
	// Line 175, Address: 0x158b6c, Func Offset: 0x3c
	// Line 176, Address: 0x158b80, Func Offset: 0x50
	// Line 177, Address: 0x158b84, Func Offset: 0x54
	// Line 179, Address: 0x158b88, Func Offset: 0x58
	// Line 181, Address: 0x158b90, Func Offset: 0x60
	// Line 182, Address: 0x158b94, Func Offset: 0x64
	// Line 183, Address: 0x158ba0, Func Offset: 0x70
	// Line 184, Address: 0x158ba4, Func Offset: 0x74
	// Line 186, Address: 0x158bb8, Func Offset: 0x88
	// Func End, Address: 0x158bc4, Func Offset: 0x94
}

// 
// Start address: 0x158bd0
_anon1* GetBucket(int key)
{
	int index;
	int i;
	_anon1* bucket;
	// Line 191, Address: 0x158bd0, Func Offset: 0
	// Line 192, Address: 0x158bd8, Func Offset: 0x8
	// Line 194, Address: 0x158be0, Func Offset: 0x10
	// Line 195, Address: 0x158be4, Func Offset: 0x14
	// Line 194, Address: 0x158bec, Func Offset: 0x1c
	// Line 195, Address: 0x158bf0, Func Offset: 0x20
	// Line 197, Address: 0x158c04, Func Offset: 0x34
	// Line 200, Address: 0x158c0c, Func Offset: 0x3c
	// Line 201, Address: 0x158c14, Func Offset: 0x44
	// Line 202, Address: 0x158c18, Func Offset: 0x48
	// Line 203, Address: 0x158c24, Func Offset: 0x54
	// Line 205, Address: 0x158c28, Func Offset: 0x58
	// Line 206, Address: 0x158c2c, Func Offset: 0x5c
	// Line 207, Address: 0x158c38, Func Offset: 0x68
	// Line 208, Address: 0x158c3c, Func Offset: 0x6c
	// Line 209, Address: 0x158c50, Func Offset: 0x80
	// Line 210, Address: 0x158c58, Func Offset: 0x88
	// Func End, Address: 0x158c64, Func Offset: 0x94
}

// 
// Start address: 0x158c70
void* GetBucketValue(int key)
{
	_anon1* bucket;
	// Line 215, Address: 0x158c70, Func Offset: 0
	// Line 216, Address: 0x158c78, Func Offset: 0x8
	// Line 217, Address: 0x158c80, Func Offset: 0x10
	// Line 219, Address: 0x158c88, Func Offset: 0x18
	// Line 220, Address: 0x158c94, Func Offset: 0x24
	// Line 221, Address: 0x158ca0, Func Offset: 0x30
	// Line 222, Address: 0x158ca8, Func Offset: 0x38
	// Line 224, Address: 0x158cb0, Func Offset: 0x40
	// Line 225, Address: 0x158cb8, Func Offset: 0x48
	// Func End, Address: 0x158cc4, Func Offset: 0x54
}

// 
// Start address: 0x158cd0
int DeleteBucket(int key)
{
	_anon1* bucket;
	// Line 231, Address: 0x158cd0, Func Offset: 0
	// Line 232, Address: 0x158cd8, Func Offset: 0x8
	// Line 233, Address: 0x158ce4, Func Offset: 0x14
	// Line 234, Address: 0x158cec, Func Offset: 0x1c
	// Line 235, Address: 0x158cf8, Func Offset: 0x28
	// Line 236, Address: 0x158d00, Func Offset: 0x30
	// Line 237, Address: 0x158d08, Func Offset: 0x38
	// Func End, Address: 0x158d14, Func Offset: 0x44
}

// 
// Start address: 0x158d20
void ClearBucketFromValue(void* from_)
{
	int i;
	unsigned int from;
	// Line 245, Address: 0x158d20, Func Offset: 0
	// Line 243, Address: 0x158d24, Func Offset: 0x4
	// Line 246, Address: 0x158d28, Func Offset: 0x8
	// Line 243, Address: 0x158d2c, Func Offset: 0xc
	// Line 246, Address: 0x158d30, Func Offset: 0x10
	// Line 250, Address: 0x158d38, Func Offset: 0x18
	// Line 252, Address: 0x158d50, Func Offset: 0x30
	// Line 253, Address: 0x158d58, Func Offset: 0x38
	// Line 254, Address: 0x158d68, Func Offset: 0x48
	// Func End, Address: 0x158d74, Func Offset: 0x54
}

// 
// Start address: 0x158d80
void DeleteBucketFromValue(void* from_, void* to_)
{
	int i;
	unsigned int from;
	unsigned int to;
	unsigned int e_value;
	// Line 260, Address: 0x158d80, Func Offset: 0
	// Line 262, Address: 0x158d84, Func Offset: 0x4
	// Line 264, Address: 0x158d88, Func Offset: 0x8
	// Line 266, Address: 0x158d90, Func Offset: 0x10
	// Line 267, Address: 0x158d98, Func Offset: 0x18
	// Line 268, Address: 0x158da0, Func Offset: 0x20
	// Line 271, Address: 0x158db4, Func Offset: 0x34
	// Line 272, Address: 0x158db8, Func Offset: 0x38
	// Line 274, Address: 0x158dc4, Func Offset: 0x44
	// Line 276, Address: 0x158dd0, Func Offset: 0x50
	// Line 277, Address: 0x158dd8, Func Offset: 0x58
	// Line 278, Address: 0x158de8, Func Offset: 0x68
	// Func End, Address: 0x158df4, Func Offset: 0x74
}

// 
// Start address: 0x158e00
void MoveBucketValue(void* from_, void* to_, int move_offset)
{
	int i;
	unsigned int from;
	unsigned int to;
	unsigned int dist_start;
	unsigned int dist_end;
	unsigned int e_value;
	// Line 289, Address: 0x158e00, Func Offset: 0
	// Line 287, Address: 0x158e04, Func Offset: 0x4
	// Line 292, Address: 0x158e08, Func Offset: 0x8
	// Line 293, Address: 0x158e0c, Func Offset: 0xc
	// Line 287, Address: 0x158e10, Func Offset: 0x10
	// Line 295, Address: 0x158e14, Func Offset: 0x14
	// Line 297, Address: 0x158e1c, Func Offset: 0x1c
	// Line 298, Address: 0x158e24, Func Offset: 0x24
	// Line 300, Address: 0x158e28, Func Offset: 0x28
	// Line 303, Address: 0x158e3c, Func Offset: 0x3c
	// Line 305, Address: 0x158e40, Func Offset: 0x40
	// Line 306, Address: 0x158e58, Func Offset: 0x58
	// Line 307, Address: 0x158e5c, Func Offset: 0x5c
	// Line 306, Address: 0x158e60, Func Offset: 0x60
	// Line 307, Address: 0x158e64, Func Offset: 0x64
	// Line 309, Address: 0x158e68, Func Offset: 0x68
	// Line 312, Address: 0x158e70, Func Offset: 0x70
	// Line 313, Address: 0x158e84, Func Offset: 0x84
	// Line 314, Address: 0x158e8c, Func Offset: 0x8c
	// Line 315, Address: 0x158ea0, Func Offset: 0xa0
	// Func End, Address: 0x158eac, Func Offset: 0xac
}

// 
// Start address: 0x158eb0
void sfFileInit()
{
	// Line 328, Address: 0x158eb0, Func Offset: 0
	// Line 329, Address: 0x158eb8, Func Offset: 0x8
	// Line 336, Address: 0x158ec0, Func Offset: 0x10
	// Line 338, Address: 0x158ec8, Func Offset: 0x18
	// Line 341, Address: 0x158ed0, Func Offset: 0x20
	// Func End, Address: 0x158edc, Func Offset: 0x2c
}

// 
// Start address: 0x158ee0
void sfFileLoadSetPath(char* path)
{
	// Line 350, Address: 0x158ee4, Func Offset: 0x4
	// Func End, Address: 0x158ef0, Func Offset: 0x10
}

// 
// Start address: 0x158ef0
char* sfFileLoadPath()
{
	// Line 359, Address: 0x158ef0, Func Offset: 0
	// Line 360, Address: 0x158ef4, Func Offset: 0x4
	// Func End, Address: 0x158efc, Func Offset: 0xc
}

// 
// Start address: 0x158f00
int sfFileWait(int mode)
{
	// Line 442, Address: 0x158f00, Func Offset: 0
	// Func End, Address: 0x158f08, Func Offset: 0x8
}

// 
// Start address: 0x158f10
int ReallocateCache(_anon1* bucket)
{
	void* addr;
	// Line 452, Address: 0x158f10, Func Offset: 0
	// Line 456, Address: 0x158f20, Func Offset: 0x10
	// Line 457, Address: 0x158f2c, Func Offset: 0x1c
	// Line 460, Address: 0x158f38, Func Offset: 0x28
	// Line 462, Address: 0x158f44, Func Offset: 0x34
	// Line 461, Address: 0x158f48, Func Offset: 0x38
	// Line 462, Address: 0x158f4c, Func Offset: 0x3c
	// Line 463, Address: 0x158f58, Func Offset: 0x48
	// Line 465, Address: 0x158f60, Func Offset: 0x50
	// Line 467, Address: 0x158f68, Func Offset: 0x58
	// Line 465, Address: 0x158f6c, Func Offset: 0x5c
	// Line 467, Address: 0x158f70, Func Offset: 0x60
	// Line 468, Address: 0x158f7c, Func Offset: 0x6c
	// Line 471, Address: 0x158f80, Func Offset: 0x70
	// Line 469, Address: 0x158f84, Func Offset: 0x74
	// Line 470, Address: 0x158f88, Func Offset: 0x78
	// Line 471, Address: 0x158f8c, Func Offset: 0x7c
	// Line 472, Address: 0x158f90, Func Offset: 0x80
	// Func End, Address: 0x158fa4, Func Offset: 0x94
}

// 
// Start address: 0x158fb0
int ReallocateCacheAddr(_anon1* bucket, void* to_addr)
{
	// Line 482, Address: 0x158fb0, Func Offset: 0
	// Line 486, Address: 0x158fc4, Func Offset: 0x14
	// Line 487, Address: 0x158fd0, Func Offset: 0x20
	// Line 492, Address: 0x158fdc, Func Offset: 0x2c
	// Line 487, Address: 0x158fe0, Func Offset: 0x30
	// Line 492, Address: 0x158fe4, Func Offset: 0x34
	// Line 493, Address: 0x158ff0, Func Offset: 0x40
	// Line 497, Address: 0x158ff8, Func Offset: 0x48
	// Line 498, Address: 0x159000, Func Offset: 0x50
	// Line 499, Address: 0x159010, Func Offset: 0x60
	// Line 502, Address: 0x159014, Func Offset: 0x64
	// Line 500, Address: 0x159018, Func Offset: 0x68
	// Line 501, Address: 0x15901c, Func Offset: 0x6c
	// Line 503, Address: 0x159020, Func Offset: 0x70
	// Func End, Address: 0x159034, Func Offset: 0x84
}

// 
// Start address: 0x159040
int EilIDChange(int id)
{
	// Line 509, Address: 0x159040, Func Offset: 0
	// Line 510, Address: 0x15904c, Func Offset: 0xc
	// Line 511, Address: 0x15905c, Func Offset: 0x1c
	// Line 512, Address: 0x159068, Func Offset: 0x28
	// Line 513, Address: 0x159078, Func Offset: 0x38
	// Line 514, Address: 0x159080, Func Offset: 0x40
	// Line 515, Address: 0x159090, Func Offset: 0x50
	// Line 516, Address: 0x159098, Func Offset: 0x58
	// Line 517, Address: 0x1590a8, Func Offset: 0x68
	// Line 518, Address: 0x1590b0, Func Offset: 0x70
	// Line 519, Address: 0x1590c0, Func Offset: 0x80
	// Line 521, Address: 0x1590c8, Func Offset: 0x88
	// Line 522, Address: 0x1590d0, Func Offset: 0x90
	// Func End, Address: 0x1590e0, Func Offset: 0xa0
}

// 
// Start address: 0x1590e0
int CynIDChange(int id)
{
	// Line 525, Address: 0x1590e0, Func Offset: 0
	// Line 527, Address: 0x1590ec, Func Offset: 0xc
	// Line 528, Address: 0x1590fc, Func Offset: 0x1c
	// Line 530, Address: 0x159108, Func Offset: 0x28
	// Line 531, Address: 0x159118, Func Offset: 0x38
	// Line 532, Address: 0x159120, Func Offset: 0x40
	// Line 533, Address: 0x159130, Func Offset: 0x50
	// Line 534, Address: 0x159138, Func Offset: 0x58
	// Line 535, Address: 0x159148, Func Offset: 0x68
	// Line 537, Address: 0x159150, Func Offset: 0x70
	// Line 538, Address: 0x159158, Func Offset: 0x78
	// Func End, Address: 0x159168, Func Offset: 0x88
}

// 
// Start address: 0x159170
_anon0* sfFileGetTblDataFromID(int id)
{
	int sid;
	// Line 576, Address: 0x159170, Func Offset: 0
	// Line 577, Address: 0x1591b4, Func Offset: 0x44
	// Func End, Address: 0x1591bc, Func Offset: 0x4c
}

// 
// Start address: 0x1591c0
int sfFileLoad(int id)
{
	char tmpname[512];
	void* addr;
	char* name2;
	int size;
	int afs_table_index;
	_anon0* tbl;
	_anon1* bucket;
	// Line 599, Address: 0x1591c0, Func Offset: 0
	// Line 607, Address: 0x1591c4, Func Offset: 0x4
	// Line 599, Address: 0x1591c8, Func Offset: 0x8
	// Line 607, Address: 0x1591d4, Func Offset: 0x14
	// Line 599, Address: 0x1591d8, Func Offset: 0x18
	// Line 607, Address: 0x1591dc, Func Offset: 0x1c
	// Line 599, Address: 0x1591e0, Func Offset: 0x20
	// Line 607, Address: 0x1591e4, Func Offset: 0x24
	// Line 608, Address: 0x1591ec, Func Offset: 0x2c
	// Line 609, Address: 0x1591f8, Func Offset: 0x38
	// Line 612, Address: 0x159200, Func Offset: 0x40
	// Line 613, Address: 0x15920c, Func Offset: 0x4c
	// Line 615, Address: 0x159218, Func Offset: 0x58
	// Line 616, Address: 0x159224, Func Offset: 0x64
	// Line 617, Address: 0x15922c, Func Offset: 0x6c
	// Line 618, Address: 0x159238, Func Offset: 0x78
	// Line 624, Address: 0x159240, Func Offset: 0x80
	// Line 625, Address: 0x159248, Func Offset: 0x88
	// Line 626, Address: 0x159250, Func Offset: 0x90
	// Line 628, Address: 0x159260, Func Offset: 0xa0
	// Line 634, Address: 0x159268, Func Offset: 0xa8
	// Line 636, Address: 0x15926c, Func Offset: 0xac
	// Line 639, Address: 0x159284, Func Offset: 0xc4
	// Line 640, Address: 0x159290, Func Offset: 0xd0
	// Line 642, Address: 0x159298, Func Offset: 0xd8
	// Line 646, Address: 0x1592a0, Func Offset: 0xe0
	// Line 648, Address: 0x1592b4, Func Offset: 0xf4
	// Line 652, Address: 0x1592bc, Func Offset: 0xfc
	// Line 654, Address: 0x1592c8, Func Offset: 0x108
	// Line 656, Address: 0x1592cc, Func Offset: 0x10c
	// Line 659, Address: 0x1592dc, Func Offset: 0x11c
	// Line 660, Address: 0x1592f8, Func Offset: 0x138
	// Line 661, Address: 0x159300, Func Offset: 0x140
	// Line 664, Address: 0x159308, Func Offset: 0x148
	// Line 665, Address: 0x159310, Func Offset: 0x150
	// Func End, Address: 0x15932c, Func Offset: 0x16c
}

// 
// Start address: 0x159330
int sfFileLoadToAddr(int id, void* addr)
{
	char tmpname[512];
	char* name2;
	int size;
	int afs_table_index;
	_anon0* tbl;
	_anon1* bucket;
	// Line 687, Address: 0x159330, Func Offset: 0
	// Line 694, Address: 0x159334, Func Offset: 0x4
	// Line 687, Address: 0x159338, Func Offset: 0x8
	// Line 694, Address: 0x159350, Func Offset: 0x20
	// Line 695, Address: 0x159360, Func Offset: 0x30
	// Line 696, Address: 0x159370, Func Offset: 0x40
	// Line 699, Address: 0x159378, Func Offset: 0x48
	// Line 700, Address: 0x159380, Func Offset: 0x50
	// Line 702, Address: 0x15938c, Func Offset: 0x5c
	// Line 703, Address: 0x159398, Func Offset: 0x68
	// Line 704, Address: 0x1593a0, Func Offset: 0x70
	// Line 705, Address: 0x1593ac, Func Offset: 0x7c
	// Line 706, Address: 0x1593b4, Func Offset: 0x84
	// Line 711, Address: 0x1593b8, Func Offset: 0x88
	// Line 712, Address: 0x1593c0, Func Offset: 0x90
	// Line 713, Address: 0x1593c8, Func Offset: 0x98
	// Line 715, Address: 0x1593d8, Func Offset: 0xa8
	// Line 721, Address: 0x1593e0, Func Offset: 0xb0
	// Line 723, Address: 0x1593e4, Func Offset: 0xb4
	// Line 726, Address: 0x1593fc, Func Offset: 0xcc
	// Line 729, Address: 0x159408, Func Offset: 0xd8
	// Line 731, Address: 0x15941c, Func Offset: 0xec
	// Line 735, Address: 0x159424, Func Offset: 0xf4
	// Line 737, Address: 0x159430, Func Offset: 0x100
	// Line 739, Address: 0x159434, Func Offset: 0x104
	// Line 742, Address: 0x159444, Func Offset: 0x114
	// Line 743, Address: 0x159460, Func Offset: 0x130
	// Line 744, Address: 0x159468, Func Offset: 0x138
	// Line 747, Address: 0x159470, Func Offset: 0x140
	// Line 748, Address: 0x159478, Func Offset: 0x148
	// Func End, Address: 0x159494, Func Offset: 0x164
}

// 
// Start address: 0x1594a0
void sfFileDelete(void* from, void* to)
{
	// Line 760, Address: 0x1594a0, Func Offset: 0
	// Line 761, Address: 0x1594a4, Func Offset: 0x4
	// Line 760, Address: 0x1594a8, Func Offset: 0x8
	// Line 762, Address: 0x1594ac, Func Offset: 0xc
	// Func End, Address: 0x1594b4, Func Offset: 0x14
}

// 
// Start address: 0x1594c0
void sfFileFlush(void* from)
{
	// Line 777, Address: 0x1594c0, Func Offset: 0
	// Line 778, Address: 0x1594c4, Func Offset: 0x4
	// Func End, Address: 0x1594cc, Func Offset: 0xc
}

// 
// Start address: 0x1594d0
void sfFileMove(void* from, void* to, int move_offset)
{
	// Line 790, Address: 0x1594d0, Func Offset: 0
	// Line 791, Address: 0x1594d4, Func Offset: 0x4
	// Line 790, Address: 0x1594d8, Func Offset: 0x8
	// Line 792, Address: 0x1594dc, Func Offset: 0xc
	// Func End, Address: 0x1594e4, Func Offset: 0x14
}

// 
// Start address: 0x1594f0
int sfFileFree(int id)
{
	// Line 893, Address: 0x1594f0, Func Offset: 0
	// Func End, Address: 0x1594f8, Func Offset: 0x8
}

// 
// Start address: 0x159500
int sfFileArcIDFromFileID(int id)
{
	int id_arc;
	// Line 947, Address: 0x159500, Func Offset: 0
	// Line 948, Address: 0x159514, Func Offset: 0x14
	// Line 951, Address: 0x159520, Func Offset: 0x20
	// Func End, Address: 0x159528, Func Offset: 0x28
}

// 
// Start address: 0x159530
void* sfFileArcGetAddress(int id)
{
	void* addr;
	int id_arc;
	int id_file;
	// Line 979, Address: 0x159530, Func Offset: 0
	// Line 972, Address: 0x159534, Func Offset: 0x4
	// Line 979, Address: 0x159538, Func Offset: 0x8
	// Line 980, Address: 0x159548, Func Offset: 0x18
	// Line 981, Address: 0x15954c, Func Offset: 0x1c
	// Line 980, Address: 0x159550, Func Offset: 0x20
	// Line 981, Address: 0x159554, Func Offset: 0x24
	// Line 982, Address: 0x159558, Func Offset: 0x28
	// Line 983, Address: 0x159560, Func Offset: 0x30
	// Line 986, Address: 0x159568, Func Offset: 0x38
	// Line 988, Address: 0x159570, Func Offset: 0x40
	// Line 997, Address: 0x159590, Func Offset: 0x60
	// Func End, Address: 0x15959c, Func Offset: 0x6c
}

// 
// Start address: 0x1595a0
int sfFileArcCheck(int id)
{
	int fid;
	void* addr;
	// Line 1074, Address: 0x1595a0, Func Offset: 0
	// Line 1073, Address: 0x1595a4, Func Offset: 0x4
	// Line 1074, Address: 0x1595a8, Func Offset: 0x8
	// Line 1073, Address: 0x1595ac, Func Offset: 0xc
	// Line 1077, Address: 0x1595b0, Func Offset: 0x10
	// Line 1078, Address: 0x1595b8, Func Offset: 0x18
	// Line 1079, Address: 0x1595c0, Func Offset: 0x20
	// Line 1080, Address: 0x1595c8, Func Offset: 0x28
	// Line 1082, Address: 0x1595d0, Func Offset: 0x30
	// Line 1083, Address: 0x1595d8, Func Offset: 0x38
	// Func End, Address: 0x1595e4, Func Offset: 0x44
}

// 
// Start address: 0x1595f0
void sfFileVTask()
{
	// Line 1092, Address: 0x1595f0, Func Offset: 0
	// Func End, Address: 0x1595f8, Func Offset: 0x8
}

// 
// Start address: 0x159600
int sfDebugRead(char* name, void* addr, unsigned int size)
{
	// Line 1100, Address: 0x159608, Func Offset: 0x8
	// Func End, Address: 0x159618, Func Offset: 0x18
}

