typedef struct loadBgAll_2x2Block;
typedef struct loadBgAll_2x2Info;
typedef struct _loadBgCommon_Info_T;


typedef _loadBgCommon_Info_T type_0[1];
typedef loadBgAll_2x2Block type_1[8];
typedef loadBgAll_2x2Block* type_2[8];
typedef int type_3[4];
typedef int type_4[4];
typedef int type_5[4];
typedef int type_6[4];
typedef int type_7[5];
typedef int type_8[5][5];

struct loadBgAll_2x2Block
{
	int mid;
	int bx;
	int bz;
	int slot;
	float dist2;
};

struct loadBgAll_2x2Info
{
	loadBgAll_2x2Block block[8];
	loadBgAll_2x2Block* sort[8];
};

struct _loadBgCommon_Info_T
{
	int glb_crd;
	float px;
	float pz;
	float fcx;
	float fcz;
	int icx;
	int icz;
	int minx;
	int minz;
	int outdoor;
	int RoomID;
	int BlockID[4];
	int AroundID[5][5];
	int unit;
	int load;
	int need;
	int lock;
	int miss;
	int hide_map;
	int hide_map_request;
};

loadBgAll_2x2Info lbAll_2x2Info;
_loadBgCommon_Info_T _loadBgCommon_Info[1];

void loadBgAll_Init();
void loadBgAll_Set2x2Block(int id, int glb_crd, int block_no, int bx, int bz, float dist2);
void loadBgAll_Sort2x2Block();
int loadBgAll_SetLoadRequestOutdoor2x2();
int loadBgAll_SetCheckRequestOutdoor2x2();
int loadBgAll_SetCheckActivateOutdoor2x2(loadBgAll_2x2Block* block);
int loadBgAll_2x2LoadRequest(int cleanup, int* ret3p, int* ret1p);
int loadBgAll_2x2CheckRequest(int* ret5p);
int loadBgAll_2x2ActivateRequestOutdoor(int* ret2p);
int loadBgAll_ExecLoadRequestOutdoor2x2(int* needUnits, int* remUnits, int* reqUnits, int* miss);
int loadBgAll_SetLoadRequestIndoor2x2(int rid, int* mid4);
int loadBgAll_2x2ActivateRequestIndoor(int* mid4, int* ret2p);
int loadBgAll_ExecLoadRequestIndoor2x2(int rid, int glb_crd, int* blocks, int* reqUnits, int* miss);
int loadBgAll_PrepareAround(int* loading, int* require);

// 
// Start address: 0x270ad0
void loadBgAll_Init()
{
	// Line 10, Address: 0x270ad0, Func Offset: 0
	// Line 12, Address: 0x270ad8, Func Offset: 0x8
	// Line 13, Address: 0x270ae0, Func Offset: 0x10
	// Func End, Address: 0x270af0, Func Offset: 0x20
}

// 
// Start address: 0x270af0
void loadBgAll_Set2x2Block(int id, int glb_crd, int block_no, int bx, int bz, float dist2)
{
	int mid;
	// Line 72, Address: 0x270af0, Func Offset: 0
	// Line 73, Address: 0x270af4, Func Offset: 0x4
	// Line 75, Address: 0x270b0c, Func Offset: 0x1c
	// Line 76, Address: 0x270b28, Func Offset: 0x38
	// Line 77, Address: 0x270b38, Func Offset: 0x48
	// Line 78, Address: 0x270b48, Func Offset: 0x58
	// Line 79, Address: 0x270b58, Func Offset: 0x68
	// Func End, Address: 0x270b60, Func Offset: 0x70
}

// 
// Start address: 0x270b60
void loadBgAll_Sort2x2Block()
{
	float fxz;
	float fz;
	float fx;
	float nxz;
	float nz;
	float nx;
	loadBgAll_2x2Block** sort;
	loadBgAll_2x2Block* block;
	// Line 84, Address: 0x270b60, Func Offset: 0
	// Line 85, Address: 0x270b68, Func Offset: 0x8
	// Line 89, Address: 0x270b70, Func Offset: 0x10
	// Line 90, Address: 0x270b7c, Func Offset: 0x1c
	// Line 91, Address: 0x270b84, Func Offset: 0x24
	// Line 92, Address: 0x270b8c, Func Offset: 0x2c
	// Line 93, Address: 0x270b94, Func Offset: 0x34
	// Line 94, Address: 0x270b9c, Func Offset: 0x3c
	// Line 95, Address: 0x270ba4, Func Offset: 0x44
	// Line 96, Address: 0x270bac, Func Offset: 0x4c
	// Line 98, Address: 0x270bbc, Func Offset: 0x5c
	// Line 99, Address: 0x270bc4, Func Offset: 0x64
	// Line 101, Address: 0x270bcc, Func Offset: 0x6c
	// Line 102, Address: 0x270bdc, Func Offset: 0x7c
	// Line 103, Address: 0x270be4, Func Offset: 0x84
	// Line 105, Address: 0x270bec, Func Offset: 0x8c
	// Line 106, Address: 0x270bfc, Func Offset: 0x9c
	// Line 107, Address: 0x270c04, Func Offset: 0xa4
	// Line 108, Address: 0x270c10, Func Offset: 0xb0
	// Line 109, Address: 0x270c18, Func Offset: 0xb8
	// Line 110, Address: 0x270c20, Func Offset: 0xc0
	// Line 112, Address: 0x270c2c, Func Offset: 0xcc
	// Line 113, Address: 0x270c34, Func Offset: 0xd4
	// Line 115, Address: 0x270c3c, Func Offset: 0xdc
	// Line 116, Address: 0x270c4c, Func Offset: 0xec
	// Line 118, Address: 0x270c54, Func Offset: 0xf4
	// Line 119, Address: 0x270c64, Func Offset: 0x104
	// Line 120, Address: 0x270c6c, Func Offset: 0x10c
	// Line 121, Address: 0x270c78, Func Offset: 0x118
	// Line 122, Address: 0x270c80, Func Offset: 0x120
	// Line 123, Address: 0x270c88, Func Offset: 0x128
	// Line 125, Address: 0x270c94, Func Offset: 0x134
	// Line 126, Address: 0x270c9c, Func Offset: 0x13c
	// Line 127, Address: 0x270ca4, Func Offset: 0x144
	// Line 128, Address: 0x270cac, Func Offset: 0x14c
	// Line 131, Address: 0x270cb8, Func Offset: 0x158
	// Line 132, Address: 0x270cc0, Func Offset: 0x160
	// Line 133, Address: 0x270cc8, Func Offset: 0x168
	// Line 135, Address: 0x270cd0, Func Offset: 0x170
	// Line 136, Address: 0x270ce0, Func Offset: 0x180
	// Line 137, Address: 0x270ce8, Func Offset: 0x188
	// Line 139, Address: 0x270cf0, Func Offset: 0x190
	// Line 140, Address: 0x270d00, Func Offset: 0x1a0
	// Line 141, Address: 0x270d08, Func Offset: 0x1a8
	// Line 142, Address: 0x270d14, Func Offset: 0x1b4
	// Line 143, Address: 0x270d1c, Func Offset: 0x1bc
	// Line 144, Address: 0x270d24, Func Offset: 0x1c4
	// Line 146, Address: 0x270d30, Func Offset: 0x1d0
	// Line 147, Address: 0x270d38, Func Offset: 0x1d8
	// Line 149, Address: 0x270d40, Func Offset: 0x1e0
	// Line 150, Address: 0x270d50, Func Offset: 0x1f0
	// Line 152, Address: 0x270d58, Func Offset: 0x1f8
	// Line 153, Address: 0x270d68, Func Offset: 0x208
	// Line 154, Address: 0x270d70, Func Offset: 0x210
	// Line 155, Address: 0x270d7c, Func Offset: 0x21c
	// Line 156, Address: 0x270d84, Func Offset: 0x224
	// Line 157, Address: 0x270d8c, Func Offset: 0x22c
	// Line 159, Address: 0x270d98, Func Offset: 0x238
	// Line 160, Address: 0x270da0, Func Offset: 0x240
	// Line 161, Address: 0x270da8, Func Offset: 0x248
	// Line 162, Address: 0x270db0, Func Offset: 0x250
	// Line 167, Address: 0x270dbc, Func Offset: 0x25c
	// Line 168, Address: 0x270dc0, Func Offset: 0x260
	// Func End, Address: 0x270dc8, Func Offset: 0x268
}

// 
// Start address: 0x270dd0
int loadBgAll_SetLoadRequestOutdoor2x2()
{
	int idx;
	int cleanup;
	int reduceRate8;
	int ret;
	float dist2;
	loadBgAll_2x2Block** sort;
	// Line 173, Address: 0x270dd0, Func Offset: 0
	// Line 179, Address: 0x270de4, Func Offset: 0x14
	// Line 180, Address: 0x270de8, Func Offset: 0x18
	// Line 181, Address: 0x270df8, Func Offset: 0x28
	// Line 183, Address: 0x270e24, Func Offset: 0x54
	// Line 184, Address: 0x270e28, Func Offset: 0x58
	// Line 185, Address: 0x270e50, Func Offset: 0x80
	// Line 186, Address: 0x270e54, Func Offset: 0x84
	// Line 187, Address: 0x270e7c, Func Offset: 0xac
	// Line 188, Address: 0x270ea4, Func Offset: 0xd4
	// Line 189, Address: 0x270ecc, Func Offset: 0xfc
	// Line 190, Address: 0x270ef4, Func Offset: 0x124
	// Line 191, Address: 0x270f1c, Func Offset: 0x14c
	// Line 192, Address: 0x270f44, Func Offset: 0x174
	// Line 193, Address: 0x270f6c, Func Offset: 0x19c
	// Line 194, Address: 0x270f70, Func Offset: 0x1a0
	// Line 196, Address: 0x270f90, Func Offset: 0x1c0
	// Line 202, Address: 0x270fac, Func Offset: 0x1dc
	// Line 203, Address: 0x270fb0, Func Offset: 0x1e0
	// Line 204, Address: 0x270fc4, Func Offset: 0x1f4
	// Line 205, Address: 0x270fc8, Func Offset: 0x1f8
	// Func End, Address: 0x270fe4, Func Offset: 0x214
}

// 
// Start address: 0x270ff0
int loadBgAll_SetCheckRequestOutdoor2x2()
{
	int ret;
	float dist2;
	loadBgAll_2x2Block** sort;
	// Line 210, Address: 0x270ff0, Func Offset: 0
	// Line 213, Address: 0x271000, Func Offset: 0x10
	// Line 214, Address: 0x271004, Func Offset: 0x14
	// Line 215, Address: 0x271014, Func Offset: 0x24
	// Line 216, Address: 0x271018, Func Offset: 0x28
	// Line 217, Address: 0x271038, Func Offset: 0x48
	// Line 219, Address: 0x27103c, Func Offset: 0x4c
	// Line 226, Address: 0x271058, Func Offset: 0x68
	// Line 227, Address: 0x27106c, Func Offset: 0x7c
	// Line 228, Address: 0x271070, Func Offset: 0x80
	// Func End, Address: 0x271088, Func Offset: 0x98
}

// 
// Start address: 0x271090
int loadBgAll_SetCheckActivateOutdoor2x2(loadBgAll_2x2Block* block)
{
	float dist2;
	// Line 231, Address: 0x271090, Func Offset: 0
	// Line 234, Address: 0x2710a0, Func Offset: 0x10
	// Line 235, Address: 0x2710a4, Func Offset: 0x14
	// Line 237, Address: 0x2710c4, Func Offset: 0x34
	// Line 244, Address: 0x2710e0, Func Offset: 0x50
	// Line 245, Address: 0x2710f0, Func Offset: 0x60
	// Func End, Address: 0x271104, Func Offset: 0x74
}

// 
// Start address: 0x271110
int loadBgAll_2x2LoadRequest(int cleanup, int* ret3p, int* ret1p)
{
	int ret3;
	int ret2;
	int ret1;
	// Line 248, Address: 0x271110, Func Offset: 0
	// Line 250, Address: 0x271130, Func Offset: 0x20
	// Line 251, Address: 0x271138, Func Offset: 0x28
	// Line 252, Address: 0x271148, Func Offset: 0x38
	// Line 253, Address: 0x271154, Func Offset: 0x44
	// Line 254, Address: 0x271160, Func Offset: 0x50
	// Line 255, Address: 0x27116c, Func Offset: 0x5c
	// Line 257, Address: 0x27117c, Func Offset: 0x6c
	// Func End, Address: 0x271198, Func Offset: 0x88
}

// 
// Start address: 0x2711a0
int loadBgAll_2x2CheckRequest(int* ret5p)
{
	int ret5;
	int ret4;
	// Line 260, Address: 0x2711a0, Func Offset: 0
	// Line 262, Address: 0x2711b0, Func Offset: 0x10
	// Line 263, Address: 0x2711b8, Func Offset: 0x18
	// Line 264, Address: 0x2711c4, Func Offset: 0x24
	// Line 266, Address: 0x2711d4, Func Offset: 0x34
	// Func End, Address: 0x2711e8, Func Offset: 0x48
}

// 
// Start address: 0x2711f0
int loadBgAll_2x2ActivateRequestOutdoor(int* ret2p)
{
	int slot;
	int i;
	int ret2;
	int ret1;
	int retB[4];
	int retA[4];
	loadBgAll_2x2Block* block;
	// Line 269, Address: 0x2711f0, Func Offset: 0
	// Line 275, Address: 0x27121c, Func Offset: 0x2c
	// Line 276, Address: 0x271220, Func Offset: 0x30
	// Line 277, Address: 0x271224, Func Offset: 0x34
	// Line 278, Address: 0x271230, Func Offset: 0x40
	// Line 279, Address: 0x271238, Func Offset: 0x48
	// Line 280, Address: 0x271250, Func Offset: 0x60
	// Line 281, Address: 0x271260, Func Offset: 0x70
	// Line 282, Address: 0x27126c, Func Offset: 0x7c
	// Line 283, Address: 0x271294, Func Offset: 0xa4
	// Line 284, Address: 0x27129c, Func Offset: 0xac
	// Line 285, Address: 0x2712a4, Func Offset: 0xb4
	// Line 286, Address: 0x2712b4, Func Offset: 0xc4
	// Line 287, Address: 0x2712c8, Func Offset: 0xd8
	// Line 288, Address: 0x2712d4, Func Offset: 0xe4
	// Line 289, Address: 0x2712d8, Func Offset: 0xe8
	// Func End, Address: 0x271308, Func Offset: 0x118
}

// 
// Start address: 0x271310
int loadBgAll_ExecLoadRequestOutdoor2x2(int* needUnits, int* remUnits, int* reqUnits, int* miss)
{
	int cleanup;
	int ret7;
	int ret6;
	int ret5;
	int ret4;
	int ret3;
	int ret2;
	int ret1;
	// Line 296, Address: 0x271310, Func Offset: 0
	// Line 300, Address: 0x271344, Func Offset: 0x34
	// Line 303, Address: 0x27134c, Func Offset: 0x3c
	// Line 305, Address: 0x271358, Func Offset: 0x48
	// Line 307, Address: 0x271370, Func Offset: 0x60
	// Line 309, Address: 0x271378, Func Offset: 0x68
	// Line 311, Address: 0x271380, Func Offset: 0x70
	// Line 313, Address: 0x271390, Func Offset: 0x80
	// Line 315, Address: 0x27139c, Func Offset: 0x8c
	// Line 316, Address: 0x2713ac, Func Offset: 0x9c
	// Line 317, Address: 0x2713bc, Func Offset: 0xac
	// Line 318, Address: 0x2713c8, Func Offset: 0xb8
	// Line 320, Address: 0x2713d8, Func Offset: 0xc8
	// Line 321, Address: 0x2713e0, Func Offset: 0xd0
	// Line 323, Address: 0x2713e8, Func Offset: 0xd8
	// Line 324, Address: 0x2713ec, Func Offset: 0xdc
	// Func End, Address: 0x271418, Func Offset: 0x108
}

// 
// Start address: 0x271420
int loadBgAll_SetLoadRequestIndoor2x2(int rid, int* mid4)
{
	int cleanup;
	// Line 331, Address: 0x271420, Func Offset: 0
	// Line 335, Address: 0x271438, Func Offset: 0x18
	// Line 337, Address: 0x271440, Func Offset: 0x20
	// Line 339, Address: 0x271450, Func Offset: 0x30
	// Line 340, Address: 0x271454, Func Offset: 0x34
	// Func End, Address: 0x27146c, Func Offset: 0x4c
}

// 
// Start address: 0x271470
int loadBgAll_2x2ActivateRequestIndoor(int* mid4, int* ret2p)
{
	int ret2;
	int ret1;
	// Line 343, Address: 0x271470, Func Offset: 0
	// Line 347, Address: 0x271480, Func Offset: 0x10
	// Line 348, Address: 0x27148c, Func Offset: 0x1c
	// Line 350, Address: 0x27149c, Func Offset: 0x2c
	// Func End, Address: 0x2714b0, Func Offset: 0x40
}

// 
// Start address: 0x2714b0
int loadBgAll_ExecLoadRequestIndoor2x2(int rid, int glb_crd, int* blocks, int* reqUnits, int* miss)
{
	int block_no;
	int mid;
	int i;
	int cleanup;
	int mid4[4];
	int ret5;
	int ret4;
	int ret3;
	int ret2;
	int ret1;
	// Line 358, Address: 0x2714b0, Func Offset: 0
	// Line 364, Address: 0x2714d0, Func Offset: 0x20
	// Line 367, Address: 0x2714dc, Func Offset: 0x2c
	// Line 368, Address: 0x2714e0, Func Offset: 0x30
	// Line 369, Address: 0x271500, Func Offset: 0x50
	// Line 370, Address: 0x271508, Func Offset: 0x58
	// Line 373, Address: 0x27151c, Func Offset: 0x6c
	// Line 375, Address: 0x27152c, Func Offset: 0x7c
	// Line 377, Address: 0x271544, Func Offset: 0x94
	// Line 379, Address: 0x271554, Func Offset: 0xa4
	// Line 380, Address: 0x271564, Func Offset: 0xb4
	// Line 382, Address: 0x27157c, Func Offset: 0xcc
	// Line 383, Address: 0x27158c, Func Offset: 0xdc
	// Line 385, Address: 0x27159c, Func Offset: 0xec
	// Line 386, Address: 0x2715a4, Func Offset: 0xf4
	// Line 389, Address: 0x2715ac, Func Offset: 0xfc
	// Line 390, Address: 0x2715b0, Func Offset: 0x100
	// Func End, Address: 0x2715d0, Func Offset: 0x120
}

// 
// Start address: 0x2715d0
int loadBgAll_PrepareAround(int* loading, int* require)
{
	float pfcz;
	float pfcx;
	int miss;
	int reqUnits;
	int remUnits;
	int needUnits;
	int lockUnits;
	int force;
	int prio;
	int rid;
	int glb_crd;
	int icz;
	int icx;
	float dz;
	float dx;
	int cpbz;
	int cpbx;
	int nbdz;
	int nbdx;
	_loadBgCommon_Info_T* info;
	// Line 396, Address: 0x2715d0, Func Offset: 0
	// Line 398, Address: 0x271604, Func Offset: 0x34
	// Line 422, Address: 0x27160c, Func Offset: 0x3c
	// Line 424, Address: 0x271614, Func Offset: 0x44
	// Line 426, Address: 0x27161c, Func Offset: 0x4c
	// Line 429, Address: 0x271630, Func Offset: 0x60
	// Line 430, Address: 0x271634, Func Offset: 0x64
	// Line 433, Address: 0x271638, Func Offset: 0x68
	// Line 434, Address: 0x271640, Func Offset: 0x70
	// Line 436, Address: 0x271648, Func Offset: 0x78
	// Line 440, Address: 0x27166c, Func Offset: 0x9c
	// Line 447, Address: 0x271680, Func Offset: 0xb0
	// Line 456, Address: 0x2716a0, Func Offset: 0xd0
	// Line 457, Address: 0x2716ac, Func Offset: 0xdc
	// Line 460, Address: 0x2716b8, Func Offset: 0xe8
	// Line 461, Address: 0x2716dc, Func Offset: 0x10c
	// Line 464, Address: 0x271704, Func Offset: 0x134
	// Line 466, Address: 0x27172c, Func Offset: 0x15c
	// Line 469, Address: 0x271754, Func Offset: 0x184
	// Line 477, Address: 0x271798, Func Offset: 0x1c8
	// Line 485, Address: 0x2717c8, Func Offset: 0x1f8
	// Line 493, Address: 0x2717e4, Func Offset: 0x214
	// Line 495, Address: 0x2717f4, Func Offset: 0x224
	// Line 503, Address: 0x271844, Func Offset: 0x274
	// Line 511, Address: 0x271884, Func Offset: 0x2b4
	// Line 513, Address: 0x27188c, Func Offset: 0x2bc
	// Line 521, Address: 0x2718d0, Func Offset: 0x300
	// Line 532, Address: 0x27191c, Func Offset: 0x34c
	// Line 540, Address: 0x271968, Func Offset: 0x398
	// Line 550, Address: 0x2719a4, Func Offset: 0x3d4
	// Line 555, Address: 0x2719ac, Func Offset: 0x3dc
	// Line 561, Address: 0x2719c4, Func Offset: 0x3f4
	// Line 562, Address: 0x2719cc, Func Offset: 0x3fc
	// Line 568, Address: 0x2719ec, Func Offset: 0x41c
	// Line 569, Address: 0x2719f4, Func Offset: 0x424
	// Line 572, Address: 0x2719fc, Func Offset: 0x42c
	// Line 573, Address: 0x271a0c, Func Offset: 0x43c
	// Line 578, Address: 0x271a20, Func Offset: 0x450
	// Line 579, Address: 0x271a28, Func Offset: 0x458
	// Line 580, Address: 0x271a30, Func Offset: 0x460
	// Line 581, Address: 0x271a38, Func Offset: 0x468
	// Line 582, Address: 0x271a3c, Func Offset: 0x46c
	// Line 585, Address: 0x271a44, Func Offset: 0x474
	// Func End, Address: 0x271a78, Func Offset: 0x4a8
}

