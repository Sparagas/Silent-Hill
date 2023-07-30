typedef struct sgSot;
typedef struct sgSotTag;
typedef struct sgSotEnv;
typedef struct sgSotEnvData;



struct sgSot
{
	sgSotTag** ot_top;
	sgSotTag** ot_last;
	unsigned short ot_size;
	unsigned short ot_width;
	unsigned int flag;
	unsigned int w_ofs;
	unsigned int w_mini;
	unsigned int w_max;
	unsigned int dma_max;
	sgSotTag* dma_top;
	sgSotTag* dmabuf_pos;
	sgSotTag* dmakick_buf;
	unsigned short* ot_max;
	unsigned int dmatag_num;
};

struct sgSotTag
{
	unsigned short DmaQwc;
	unsigned short DmaId;
	void* Addr;
	unsigned int W;
	unsigned short VifQwc;
	unsigned char EnvID;
	unsigned char VifDirect;
};

struct sgSotEnv
{
	sgSotEnvData* env_top;
	unsigned int env_max;
	unsigned int free;
	unsigned int pad;
};

struct sgSotEnvData
{
	unsigned short DmaQwc;
	unsigned short DmaId;
	void* Addr;
	unsigned int pad1;
	unsigned short VifQwc;
	unsigned char pad2;
	unsigned char VifDirect;
};


void sgSotConstruct(sgSot* ot_work, unsigned int ot_size, void* workarea, unsigned int work_size);
unsigned int sgSotNeedSize(unsigned int ot_size, unsigned int tag_max);
void sgSotReset(sgSot* ot_work);
int sgSotSetGiftag(sgSot* ot_work, void* giftag, unsigned int w, unsigned int size);
int sgSotSetGiftagWithEnv(sgSot* ot_work, void* giftag, unsigned int w, unsigned int size, unsigned short envid);
void sgSotSetSub(sgSot* ot_work, sgSotTag* pd, unsigned int w);
<unknown fundamental type (0xa510)>* sgSotLink(sgSot* ot_work, sgSotEnv* env_work);
<unknown fundamental type (0xa510)>* ot_link_main(sgSot* ot_work, sgSotEnv* env_work, unsigned int tagid);
<unknown fundamental type (0xa510)>* ot_link_sub();
void ot_qsort_asm();
void ot_qsort2_asm();
void ot_check(sgSot* ot_work);

// 
// Start address: 0x1603d0
void sgSotConstruct(sgSot* ot_work, unsigned int ot_size, void* workarea, unsigned int work_size)
{
	unsigned int tmpadr;
	unsigned int n;
	// Line 71, Address: 0x1603d0, Func Offset: 0
	// Line 76, Address: 0x1603d4, Func Offset: 0x4
	// Line 71, Address: 0x1603d8, Func Offset: 0x8
	// Line 86, Address: 0x1603dc, Func Offset: 0xc
	// Line 71, Address: 0x1603e0, Func Offset: 0x10
	// Line 84, Address: 0x1603e4, Func Offset: 0x14
	// Line 76, Address: 0x1603e8, Func Offset: 0x18
	// Line 77, Address: 0x1603f0, Func Offset: 0x20
	// Line 81, Address: 0x1603f4, Func Offset: 0x24
	// Line 86, Address: 0x1603f8, Func Offset: 0x28
	// Line 94, Address: 0x1603fc, Func Offset: 0x2c
	// Line 77, Address: 0x160404, Func Offset: 0x34
	// Line 79, Address: 0x16040c, Func Offset: 0x3c
	// Line 81, Address: 0x160418, Func Offset: 0x48
	// Line 83, Address: 0x160420, Func Offset: 0x50
	// Line 85, Address: 0x16042c, Func Offset: 0x5c
	// Line 84, Address: 0x160430, Func Offset: 0x60
	// Line 85, Address: 0x160434, Func Offset: 0x64
	// Line 86, Address: 0x160438, Func Offset: 0x68
	// Line 94, Address: 0x160448, Func Offset: 0x78
	// Line 86, Address: 0x16044c, Func Offset: 0x7c
	// Line 87, Address: 0x160458, Func Offset: 0x88
	// Line 91, Address: 0x160464, Func Offset: 0x94
	// Line 88, Address: 0x160468, Func Offset: 0x98
	// Line 91, Address: 0x160470, Func Offset: 0xa0
	// Line 88, Address: 0x160474, Func Offset: 0xa4
	// Line 91, Address: 0x160478, Func Offset: 0xa8
	// Line 94, Address: 0x160480, Func Offset: 0xb0
	// Line 98, Address: 0x16049c, Func Offset: 0xcc
	// Line 95, Address: 0x1604a0, Func Offset: 0xd0
	// Line 98, Address: 0x1604a4, Func Offset: 0xd4
	// Line 99, Address: 0x1604ac, Func Offset: 0xdc
	// Func End, Address: 0x1604bc, Func Offset: 0xec
}

// 
// Start address: 0x1604c0
unsigned int sgSotNeedSize(unsigned int ot_size, unsigned int tag_max)
{
	// Line 112, Address: 0x1604c0, Func Offset: 0
	// Line 113, Address: 0x1604e8, Func Offset: 0x28
	// Func End, Address: 0x1604f0, Func Offset: 0x30
}

// 
// Start address: 0x1604f0
void sgSotReset(sgSot* ot_work)
{
	// Line 157, Address: 0x1604f0, Func Offset: 0
	// Line 159, Address: 0x1604fc, Func Offset: 0xc
	// Line 161, Address: 0x160514, Func Offset: 0x24
	// Line 162, Address: 0x160518, Func Offset: 0x28
	// Line 161, Address: 0x16051c, Func Offset: 0x2c
	// Line 162, Address: 0x160520, Func Offset: 0x30
	// Line 163, Address: 0x160524, Func Offset: 0x34
	// Line 164, Address: 0x160528, Func Offset: 0x38
	// Line 165, Address: 0x16052c, Func Offset: 0x3c
	// Func End, Address: 0x16053c, Func Offset: 0x4c
}

// 
// Start address: 0x160540
int sgSotSetGiftag(sgSot* ot_work, void* giftag, unsigned int w, unsigned int size)
{
	// Line 178, Address: 0x160540, Func Offset: 0
	// Func End, Address: 0x160548, Func Offset: 0x8
}

// 
// Start address: 0x160550
int sgSotSetGiftagWithEnv(sgSot* ot_work, void* giftag, unsigned int w, unsigned int size, unsigned short envid)
{
	sgSotTag* pd;
	// Line 191, Address: 0x160550, Func Offset: 0
	// Line 193, Address: 0x160554, Func Offset: 0x4
	// Line 194, Address: 0x160568, Func Offset: 0x18
	// Line 195, Address: 0x160584, Func Offset: 0x34
	// Line 196, Address: 0x16058c, Func Offset: 0x3c
	// Line 197, Address: 0x160590, Func Offset: 0x40
	// Line 199, Address: 0x160594, Func Offset: 0x44
	// Line 202, Address: 0x160598, Func Offset: 0x48
	// Line 199, Address: 0x16059c, Func Offset: 0x4c
	// Line 197, Address: 0x1605a0, Func Offset: 0x50
	// Line 203, Address: 0x1605a4, Func Offset: 0x54
	// Line 197, Address: 0x1605a8, Func Offset: 0x58
	// Line 198, Address: 0x1605ac, Func Offset: 0x5c
	// Line 199, Address: 0x1605b0, Func Offset: 0x60
	// Line 200, Address: 0x1605b4, Func Offset: 0x64
	// Line 201, Address: 0x1605b8, Func Offset: 0x68
	// Line 203, Address: 0x1605bc, Func Offset: 0x6c
	// Line 204, Address: 0x1605c4, Func Offset: 0x74
	// Line 205, Address: 0x1605c8, Func Offset: 0x78
	// Func End, Address: 0x1605d4, Func Offset: 0x84
}

// 
// Start address: 0x1605e0
void sgSotSetSub(sgSot* ot_work, sgSotTag* pd, unsigned int w)
{
	// Line 255, Address: 0x1605e0, Func Offset: 0
	// Line 256, Address: 0x160604, Func Offset: 0x24
	// Line 257, Address: 0x160608, Func Offset: 0x28
	// Line 258, Address: 0x160614, Func Offset: 0x34
	// Line 259, Address: 0x160618, Func Offset: 0x38
	// Line 261, Address: 0x160620, Func Offset: 0x40
	// Line 263, Address: 0x160628, Func Offset: 0x48
	// Line 265, Address: 0x160630, Func Offset: 0x50
	// Line 266, Address: 0x160648, Func Offset: 0x68
	// Line 267, Address: 0x160660, Func Offset: 0x80
	// Line 268, Address: 0x160670, Func Offset: 0x90
	// Line 269, Address: 0x160688, Func Offset: 0xa8
	// Line 270, Address: 0x16069c, Func Offset: 0xbc
	// Line 271, Address: 0x1606b0, Func Offset: 0xd0
	// Line 273, Address: 0x1606b4, Func Offset: 0xd4
	// Line 271, Address: 0x1606b8, Func Offset: 0xd8
	// Line 274, Address: 0x1606c4, Func Offset: 0xe4
	// Line 277, Address: 0x1606d0, Func Offset: 0xf0
	// Line 279, Address: 0x1606d8, Func Offset: 0xf8
	// Line 281, Address: 0x160700, Func Offset: 0x120
	// Line 282, Address: 0x160708, Func Offset: 0x128
	// Func End, Address: 0x160710, Func Offset: 0x130
}

// 
// Start address: 0x160710
<unknown fundamental type (0xa510)>* sgSotLink(sgSot* ot_work, sgSotEnv* env_work)
{
	// Line 294, Address: 0x160710, Func Offset: 0
	// Func End, Address: 0x160718, Func Offset: 0x8
}

// 
// Start address: 0x160720
<unknown fundamental type (0xa510)>* ot_link_main(sgSot* ot_work, sgSotEnv* env_work, unsigned int tagid)
{
	<unknown fundamental type (0xa510)>* ret;
	unsigned long* pos;
	int m;
	unsigned long* pos;
	// Line 318, Address: 0x160720, Func Offset: 0
	// Line 330, Address: 0x16073c, Func Offset: 0x1c
	// Line 333, Address: 0x160744, Func Offset: 0x24
	// Line 334, Address: 0x160758, Func Offset: 0x38
	// Line 339, Address: 0x160760, Func Offset: 0x40
	// Line 337, Address: 0x160764, Func Offset: 0x44
	// Line 339, Address: 0x160768, Func Offset: 0x48
	// Line 337, Address: 0x16076c, Func Offset: 0x4c
	// Line 339, Address: 0x160774, Func Offset: 0x54
	// Line 337, Address: 0x160778, Func Offset: 0x58
	// Line 341, Address: 0x16077c, Func Offset: 0x5c
	// Line 339, Address: 0x160780, Func Offset: 0x60
	// Line 341, Address: 0x160784, Func Offset: 0x64
	// Line 339, Address: 0x160788, Func Offset: 0x68
	// Line 341, Address: 0x16078c, Func Offset: 0x6c
	// Line 342, Address: 0x160798, Func Offset: 0x78
	// Line 344, Address: 0x1607a0, Func Offset: 0x80
	// Line 342, Address: 0x1607a4, Func Offset: 0x84
	// Line 346, Address: 0x1607a8, Func Offset: 0x88
	// Line 343, Address: 0x1607ac, Func Offset: 0x8c
	// Line 344, Address: 0x1607b0, Func Offset: 0x90
	// Line 346, Address: 0x1607b8, Func Offset: 0x98
	// Line 348, Address: 0x1607d0, Func Offset: 0xb0
	// Line 351, Address: 0x1607f8, Func Offset: 0xd8
	// Line 352, Address: 0x16080c, Func Offset: 0xec
	// Line 356, Address: 0x160818, Func Offset: 0xf8
	// Line 357, Address: 0x160820, Func Offset: 0x100
	// Line 359, Address: 0x160824, Func Offset: 0x104
	// Line 357, Address: 0x160828, Func Offset: 0x108
	// Line 359, Address: 0x16082c, Func Offset: 0x10c
	// Line 357, Address: 0x160834, Func Offset: 0x114
	// Line 359, Address: 0x160840, Func Offset: 0x120
	// Line 360, Address: 0x160844, Func Offset: 0x124
	// Line 363, Address: 0x160848, Func Offset: 0x128
	// Line 364, Address: 0x16084c, Func Offset: 0x12c
	// Func End, Address: 0x160864, Func Offset: 0x144
}

// 
// Start address: 0x160870
<unknown fundamental type (0xa510)>* ot_link_sub()
{
	// Line 509, Address: 0x160870, Func Offset: 0
	// Line 510, Address: 0x160874, Func Offset: 0x4
	// Line 511, Address: 0x160878, Func Offset: 0x8
	// Line 512, Address: 0x16087c, Func Offset: 0xc
	// Line 513, Address: 0x160880, Func Offset: 0x10
	// Line 514, Address: 0x160884, Func Offset: 0x14
	// Line 515, Address: 0x160888, Func Offset: 0x18
	// Line 516, Address: 0x16088c, Func Offset: 0x1c
	// Line 517, Address: 0x160890, Func Offset: 0x20
	// Line 518, Address: 0x160894, Func Offset: 0x24
	// Line 519, Address: 0x160898, Func Offset: 0x28
	// Line 520, Address: 0x16089c, Func Offset: 0x2c
	// Line 521, Address: 0x1608a0, Func Offset: 0x30
	// Line 522, Address: 0x1608a4, Func Offset: 0x34
	// Line 523, Address: 0x1608a8, Func Offset: 0x38
	// Line 524, Address: 0x1608ac, Func Offset: 0x3c
	// Line 525, Address: 0x1608b0, Func Offset: 0x40
	// Line 526, Address: 0x1608b4, Func Offset: 0x44
	// Line 527, Address: 0x1608b8, Func Offset: 0x48
	// Line 528, Address: 0x1608bc, Func Offset: 0x4c
	// Line 529, Address: 0x1608c0, Func Offset: 0x50
	// Line 530, Address: 0x1608c4, Func Offset: 0x54
	// Line 531, Address: 0x1608c8, Func Offset: 0x58
	// Line 532, Address: 0x1608cc, Func Offset: 0x5c
	// Line 533, Address: 0x1608d0, Func Offset: 0x60
	// Line 534, Address: 0x1608d4, Func Offset: 0x64
	// Line 535, Address: 0x1608d8, Func Offset: 0x68
	// Line 536, Address: 0x1608dc, Func Offset: 0x6c
	// Line 537, Address: 0x1608e0, Func Offset: 0x70
	// Line 538, Address: 0x1608e4, Func Offset: 0x74
	// Line 541, Address: 0x1608e8, Func Offset: 0x78
	// Line 542, Address: 0x1608ec, Func Offset: 0x7c
	// Line 543, Address: 0x1608f0, Func Offset: 0x80
	// Line 545, Address: 0x1608f8, Func Offset: 0x88
	// Line 547, Address: 0x160900, Func Offset: 0x90
	// Line 548, Address: 0x160904, Func Offset: 0x94
	// Line 553, Address: 0x16090c, Func Offset: 0x9c
	// Line 554, Address: 0x160910, Func Offset: 0xa0
	// Line 555, Address: 0x160914, Func Offset: 0xa4
	// Line 556, Address: 0x160918, Func Offset: 0xa8
	// Line 557, Address: 0x16091c, Func Offset: 0xac
	// Line 558, Address: 0x160920, Func Offset: 0xb0
	// Line 559, Address: 0x160924, Func Offset: 0xb4
	// Line 560, Address: 0x160928, Func Offset: 0xb8
	// Line 561, Address: 0x16092c, Func Offset: 0xbc
	// Line 562, Address: 0x160930, Func Offset: 0xc0
	// Line 563, Address: 0x160934, Func Offset: 0xc4
	// Line 565, Address: 0x16093c, Func Offset: 0xcc
	// Line 566, Address: 0x160940, Func Offset: 0xd0
	// Line 569, Address: 0x160948, Func Offset: 0xd8
	// Line 570, Address: 0x16094c, Func Offset: 0xdc
	// Line 571, Address: 0x160950, Func Offset: 0xe0
	// Line 573, Address: 0x160958, Func Offset: 0xe8
	// Line 576, Address: 0x160960, Func Offset: 0xf0
	// Line 578, Address: 0x160964, Func Offset: 0xf4
	// Line 579, Address: 0x160968, Func Offset: 0xf8
	// Line 580, Address: 0x16096c, Func Offset: 0xfc
	// Line 581, Address: 0x160970, Func Offset: 0x100
	// Line 583, Address: 0x160978, Func Offset: 0x108
	// Line 585, Address: 0x160980, Func Offset: 0x110
	// Line 586, Address: 0x160984, Func Offset: 0x114
	// Line 587, Address: 0x160988, Func Offset: 0x118
	// Line 588, Address: 0x16098c, Func Offset: 0x11c
	// Line 590, Address: 0x160990, Func Offset: 0x120
	// Line 591, Address: 0x160994, Func Offset: 0x124
	// Line 592, Address: 0x160998, Func Offset: 0x128
	// Line 594, Address: 0x1609a0, Func Offset: 0x130
	// Line 598, Address: 0x1609a8, Func Offset: 0x138
	// Line 601, Address: 0x1609b0, Func Offset: 0x140
	// Line 602, Address: 0x1609b4, Func Offset: 0x144
	// Line 603, Address: 0x1609b8, Func Offset: 0x148
	// Line 604, Address: 0x1609bc, Func Offset: 0x14c
	// Line 605, Address: 0x1609c0, Func Offset: 0x150
	// Line 606, Address: 0x1609c4, Func Offset: 0x154
	// Line 607, Address: 0x1609c8, Func Offset: 0x158
	// Line 608, Address: 0x1609cc, Func Offset: 0x15c
	// Line 610, Address: 0x1609d4, Func Offset: 0x164
	// Line 611, Address: 0x1609d8, Func Offset: 0x168
	// Line 614, Address: 0x1609e0, Func Offset: 0x170
	// Line 615, Address: 0x1609e4, Func Offset: 0x174
	// Line 616, Address: 0x1609e8, Func Offset: 0x178
	// Line 618, Address: 0x1609f0, Func Offset: 0x180
	// Line 621, Address: 0x1609f8, Func Offset: 0x188
	// Line 623, Address: 0x1609fc, Func Offset: 0x18c
	// Line 624, Address: 0x160a00, Func Offset: 0x190
	// Line 625, Address: 0x160a04, Func Offset: 0x194
	// Line 626, Address: 0x160a08, Func Offset: 0x198
	// Line 627, Address: 0x160a0c, Func Offset: 0x19c
	// Line 628, Address: 0x160a10, Func Offset: 0x1a0
	// Line 630, Address: 0x160a18, Func Offset: 0x1a8
	// Line 632, Address: 0x160a20, Func Offset: 0x1b0
	// Line 633, Address: 0x160a24, Func Offset: 0x1b4
	// Line 634, Address: 0x160a28, Func Offset: 0x1b8
	// Line 635, Address: 0x160a2c, Func Offset: 0x1bc
	// Line 637, Address: 0x160a30, Func Offset: 0x1c0
	// Line 638, Address: 0x160a34, Func Offset: 0x1c4
	// Line 639, Address: 0x160a38, Func Offset: 0x1c8
	// Line 640, Address: 0x160a3c, Func Offset: 0x1cc
	// Line 641, Address: 0x160a40, Func Offset: 0x1d0
	// Line 642, Address: 0x160a44, Func Offset: 0x1d4
	// Line 643, Address: 0x160a48, Func Offset: 0x1d8
	// Line 645, Address: 0x160a50, Func Offset: 0x1e0
	// Line 650, Address: 0x160a58, Func Offset: 0x1e8
	// Line 651, Address: 0x160a5c, Func Offset: 0x1ec
	// Line 652, Address: 0x160a60, Func Offset: 0x1f0
	// Line 654, Address: 0x160a68, Func Offset: 0x1f8
	// Line 656, Address: 0x160a70, Func Offset: 0x200
	// Line 657, Address: 0x160a74, Func Offset: 0x204
	// Line 658, Address: 0x160a78, Func Offset: 0x208
	// Line 660, Address: 0x160a7c, Func Offset: 0x20c
	// Line 661, Address: 0x160a80, Func Offset: 0x210
	// Line 662, Address: 0x160a84, Func Offset: 0x214
	// Line 663, Address: 0x160a88, Func Offset: 0x218
	// Line 664, Address: 0x160a8c, Func Offset: 0x21c
	// Line 665, Address: 0x160a90, Func Offset: 0x220
	// Line 666, Address: 0x160a94, Func Offset: 0x224
	// Line 667, Address: 0x160a98, Func Offset: 0x228
	// Line 668, Address: 0x160a9c, Func Offset: 0x22c
	// Line 669, Address: 0x160aa0, Func Offset: 0x230
	// Line 671, Address: 0x160aa8, Func Offset: 0x238
	// Line 675, Address: 0x160ab0, Func Offset: 0x240
	// Line 676, Address: 0x160ab4, Func Offset: 0x244
	// Line 677, Address: 0x160ab8, Func Offset: 0x248
	// Line 680, Address: 0x160ac0, Func Offset: 0x250
	// Line 681, Address: 0x160ac4, Func Offset: 0x254
	// Line 682, Address: 0x160ac8, Func Offset: 0x258
	// Line 683, Address: 0x160acc, Func Offset: 0x25c
	// Line 684, Address: 0x160ad0, Func Offset: 0x260
	// Line 685, Address: 0x160ad4, Func Offset: 0x264
	// Line 686, Address: 0x160ad8, Func Offset: 0x268
	// Line 687, Address: 0x160adc, Func Offset: 0x26c
	// Line 688, Address: 0x160ae0, Func Offset: 0x270
	// Line 689, Address: 0x160ae4, Func Offset: 0x274
	// Line 690, Address: 0x160ae8, Func Offset: 0x278
	// Line 691, Address: 0x160aec, Func Offset: 0x27c
	// Line 692, Address: 0x160af0, Func Offset: 0x280
	// Line 693, Address: 0x160af4, Func Offset: 0x284
	// Line 694, Address: 0x160af8, Func Offset: 0x288
	// Line 695, Address: 0x160afc, Func Offset: 0x28c
	// Line 696, Address: 0x160b00, Func Offset: 0x290
	// Func End, Address: 0x160b08, Func Offset: 0x298
}

// 
// Start address: 0x160b10
void ot_qsort_asm()
{
	// Line 798, Address: 0x160b10, Func Offset: 0
	// Line 799, Address: 0x160b14, Func Offset: 0x4
	// Line 800, Address: 0x160b18, Func Offset: 0x8
	// Line 802, Address: 0x160b20, Func Offset: 0x10
	// Line 803, Address: 0x160b24, Func Offset: 0x14
	// Line 806, Address: 0x160b2c, Func Offset: 0x1c
	// Line 807, Address: 0x160b30, Func Offset: 0x20
	// Line 808, Address: 0x160b34, Func Offset: 0x24
	// Line 810, Address: 0x160b38, Func Offset: 0x28
	// Line 811, Address: 0x160b3c, Func Offset: 0x2c
	// Line 812, Address: 0x160b40, Func Offset: 0x30
	// Line 813, Address: 0x160b44, Func Offset: 0x34
	// Line 815, Address: 0x160b48, Func Offset: 0x38
	// Line 816, Address: 0x160b4c, Func Offset: 0x3c
	// Line 817, Address: 0x160b50, Func Offset: 0x40
	// Line 818, Address: 0x160b54, Func Offset: 0x44
	// Line 819, Address: 0x160b58, Func Offset: 0x48
	// Line 820, Address: 0x160b5c, Func Offset: 0x4c
	// Line 822, Address: 0x160b64, Func Offset: 0x54
	// Line 824, Address: 0x160b6c, Func Offset: 0x5c
	// Line 825, Address: 0x160b70, Func Offset: 0x60
	// Line 826, Address: 0x160b74, Func Offset: 0x64
	// Line 827, Address: 0x160b78, Func Offset: 0x68
	// Line 828, Address: 0x160b7c, Func Offset: 0x6c
	// Line 830, Address: 0x160b80, Func Offset: 0x70
	// Line 831, Address: 0x160b84, Func Offset: 0x74
	// Line 832, Address: 0x160b88, Func Offset: 0x78
	// Line 834, Address: 0x160b90, Func Offset: 0x80
	// Line 835, Address: 0x160b94, Func Offset: 0x84
	// Line 836, Address: 0x160b98, Func Offset: 0x88
	// Line 840, Address: 0x160ba0, Func Offset: 0x90
	// Line 842, Address: 0x160ba8, Func Offset: 0x98
	// Line 843, Address: 0x160bac, Func Offset: 0x9c
	// Line 844, Address: 0x160bb0, Func Offset: 0xa0
	// Line 845, Address: 0x160bb4, Func Offset: 0xa4
	// Line 846, Address: 0x160bb8, Func Offset: 0xa8
	// Line 848, Address: 0x160bc0, Func Offset: 0xb0
	// Line 849, Address: 0x160bc4, Func Offset: 0xb4
	// Line 851, Address: 0x160bc8, Func Offset: 0xb8
	// Line 855, Address: 0x160bd0, Func Offset: 0xc0
	// Line 856, Address: 0x160bd4, Func Offset: 0xc4
	// Line 857, Address: 0x160bd8, Func Offset: 0xc8
	// Line 858, Address: 0x160bdc, Func Offset: 0xcc
	// Line 860, Address: 0x160be0, Func Offset: 0xd0
	// Line 861, Address: 0x160be4, Func Offset: 0xd4
	// Line 862, Address: 0x160be8, Func Offset: 0xd8
	// Line 863, Address: 0x160bec, Func Offset: 0xdc
	// Line 864, Address: 0x160bf0, Func Offset: 0xe0
	// Line 865, Address: 0x160bf4, Func Offset: 0xe4
	// Line 866, Address: 0x160bf8, Func Offset: 0xe8
	// Line 867, Address: 0x160bfc, Func Offset: 0xec
	// Line 868, Address: 0x160c00, Func Offset: 0xf0
	// Line 869, Address: 0x160c04, Func Offset: 0xf4
	// Line 870, Address: 0x160c08, Func Offset: 0xf8
	// Line 871, Address: 0x160c0c, Func Offset: 0xfc
	// Line 873, Address: 0x160c14, Func Offset: 0x104
	// Line 875, Address: 0x160c1c, Func Offset: 0x10c
	// Line 877, Address: 0x160c24, Func Offset: 0x114
	// Line 880, Address: 0x160c2c, Func Offset: 0x11c
	// Line 882, Address: 0x160c34, Func Offset: 0x124
	// Line 886, Address: 0x160c3c, Func Offset: 0x12c
	// Line 887, Address: 0x160c40, Func Offset: 0x130
	// Line 888, Address: 0x160c44, Func Offset: 0x134
	// Line 889, Address: 0x160c48, Func Offset: 0x138
	// Line 890, Address: 0x160c4c, Func Offset: 0x13c
	// Line 891, Address: 0x160c50, Func Offset: 0x140
	// Line 893, Address: 0x160c54, Func Offset: 0x144
	// Line 894, Address: 0x160c58, Func Offset: 0x148
	// Line 895, Address: 0x160c5c, Func Offset: 0x14c
	// Line 897, Address: 0x160c64, Func Offset: 0x154
	// Line 898, Address: 0x160c68, Func Offset: 0x158
	// Line 899, Address: 0x160c6c, Func Offset: 0x15c
	// Line 901, Address: 0x160c74, Func Offset: 0x164
	// Line 904, Address: 0x160c7c, Func Offset: 0x16c
	// Line 905, Address: 0x160c80, Func Offset: 0x170
	// Line 906, Address: 0x160c84, Func Offset: 0x174
	// Line 908, Address: 0x160c8c, Func Offset: 0x17c
	// Line 909, Address: 0x160c90, Func Offset: 0x180
	// Line 911, Address: 0x160c98, Func Offset: 0x188
	// Line 914, Address: 0x160ca0, Func Offset: 0x190
	// Line 915, Address: 0x160ca4, Func Offset: 0x194
	// Line 916, Address: 0x160ca8, Func Offset: 0x198
	// Line 917, Address: 0x160cac, Func Offset: 0x19c
	// Line 918, Address: 0x160cb0, Func Offset: 0x1a0
	// Line 919, Address: 0x160cb4, Func Offset: 0x1a4
	// Line 920, Address: 0x160cb8, Func Offset: 0x1a8
	// Line 921, Address: 0x160cbc, Func Offset: 0x1ac
	// Line 924, Address: 0x160cc4, Func Offset: 0x1b4
	// Line 925, Address: 0x160cc8, Func Offset: 0x1b8
	// Line 926, Address: 0x160ccc, Func Offset: 0x1bc
	// Line 928, Address: 0x160cd4, Func Offset: 0x1c4
	// Line 931, Address: 0x160cdc, Func Offset: 0x1cc
	// Line 933, Address: 0x160ce4, Func Offset: 0x1d4
	// Line 937, Address: 0x160cec, Func Offset: 0x1dc
	// Line 938, Address: 0x160cf0, Func Offset: 0x1e0
	// Line 939, Address: 0x160cf4, Func Offset: 0x1e4
	// Line 940, Address: 0x160cf8, Func Offset: 0x1e8
	// Line 941, Address: 0x160cfc, Func Offset: 0x1ec
	// Func End, Address: 0x160d04, Func Offset: 0x1f4
}

// 
// Start address: 0x160d10
void ot_qsort2_asm()
{
	// Line 1043, Address: 0x160d10, Func Offset: 0
	// Line 1044, Address: 0x160d14, Func Offset: 0x4
	// Line 1045, Address: 0x160d18, Func Offset: 0x8
	// Line 1047, Address: 0x160d20, Func Offset: 0x10
	// Line 1048, Address: 0x160d24, Func Offset: 0x14
	// Line 1051, Address: 0x160d2c, Func Offset: 0x1c
	// Line 1052, Address: 0x160d30, Func Offset: 0x20
	// Line 1053, Address: 0x160d34, Func Offset: 0x24
	// Line 1055, Address: 0x160d38, Func Offset: 0x28
	// Line 1056, Address: 0x160d3c, Func Offset: 0x2c
	// Line 1057, Address: 0x160d40, Func Offset: 0x30
	// Line 1058, Address: 0x160d44, Func Offset: 0x34
	// Line 1060, Address: 0x160d48, Func Offset: 0x38
	// Line 1061, Address: 0x160d4c, Func Offset: 0x3c
	// Line 1062, Address: 0x160d50, Func Offset: 0x40
	// Line 1063, Address: 0x160d54, Func Offset: 0x44
	// Line 1064, Address: 0x160d58, Func Offset: 0x48
	// Line 1065, Address: 0x160d5c, Func Offset: 0x4c
	// Line 1067, Address: 0x160d64, Func Offset: 0x54
	// Line 1069, Address: 0x160d6c, Func Offset: 0x5c
	// Line 1070, Address: 0x160d70, Func Offset: 0x60
	// Line 1071, Address: 0x160d74, Func Offset: 0x64
	// Line 1072, Address: 0x160d78, Func Offset: 0x68
	// Line 1073, Address: 0x160d7c, Func Offset: 0x6c
	// Line 1075, Address: 0x160d80, Func Offset: 0x70
	// Line 1076, Address: 0x160d84, Func Offset: 0x74
	// Line 1077, Address: 0x160d88, Func Offset: 0x78
	// Line 1079, Address: 0x160d90, Func Offset: 0x80
	// Line 1080, Address: 0x160d94, Func Offset: 0x84
	// Line 1081, Address: 0x160d98, Func Offset: 0x88
	// Line 1085, Address: 0x160da0, Func Offset: 0x90
	// Line 1087, Address: 0x160da8, Func Offset: 0x98
	// Line 1088, Address: 0x160dac, Func Offset: 0x9c
	// Line 1089, Address: 0x160db0, Func Offset: 0xa0
	// Line 1090, Address: 0x160db4, Func Offset: 0xa4
	// Line 1091, Address: 0x160db8, Func Offset: 0xa8
	// Line 1093, Address: 0x160dc0, Func Offset: 0xb0
	// Line 1094, Address: 0x160dc4, Func Offset: 0xb4
	// Line 1096, Address: 0x160dc8, Func Offset: 0xb8
	// Line 1100, Address: 0x160dd0, Func Offset: 0xc0
	// Line 1101, Address: 0x160dd4, Func Offset: 0xc4
	// Line 1102, Address: 0x160dd8, Func Offset: 0xc8
	// Line 1103, Address: 0x160ddc, Func Offset: 0xcc
	// Line 1105, Address: 0x160de0, Func Offset: 0xd0
	// Line 1106, Address: 0x160de4, Func Offset: 0xd4
	// Line 1107, Address: 0x160de8, Func Offset: 0xd8
	// Line 1108, Address: 0x160dec, Func Offset: 0xdc
	// Line 1109, Address: 0x160df0, Func Offset: 0xe0
	// Line 1110, Address: 0x160df4, Func Offset: 0xe4
	// Line 1111, Address: 0x160df8, Func Offset: 0xe8
	// Line 1112, Address: 0x160dfc, Func Offset: 0xec
	// Line 1113, Address: 0x160e00, Func Offset: 0xf0
	// Line 1114, Address: 0x160e04, Func Offset: 0xf4
	// Line 1115, Address: 0x160e08, Func Offset: 0xf8
	// Line 1116, Address: 0x160e0c, Func Offset: 0xfc
	// Line 1118, Address: 0x160e14, Func Offset: 0x104
	// Line 1120, Address: 0x160e1c, Func Offset: 0x10c
	// Line 1122, Address: 0x160e24, Func Offset: 0x114
	// Line 1125, Address: 0x160e2c, Func Offset: 0x11c
	// Line 1127, Address: 0x160e34, Func Offset: 0x124
	// Line 1131, Address: 0x160e3c, Func Offset: 0x12c
	// Line 1132, Address: 0x160e40, Func Offset: 0x130
	// Line 1133, Address: 0x160e44, Func Offset: 0x134
	// Line 1134, Address: 0x160e48, Func Offset: 0x138
	// Line 1135, Address: 0x160e4c, Func Offset: 0x13c
	// Line 1136, Address: 0x160e50, Func Offset: 0x140
	// Line 1138, Address: 0x160e54, Func Offset: 0x144
	// Line 1139, Address: 0x160e58, Func Offset: 0x148
	// Line 1140, Address: 0x160e5c, Func Offset: 0x14c
	// Line 1142, Address: 0x160e64, Func Offset: 0x154
	// Line 1143, Address: 0x160e68, Func Offset: 0x158
	// Line 1144, Address: 0x160e6c, Func Offset: 0x15c
	// Line 1146, Address: 0x160e74, Func Offset: 0x164
	// Line 1149, Address: 0x160e7c, Func Offset: 0x16c
	// Line 1150, Address: 0x160e80, Func Offset: 0x170
	// Line 1151, Address: 0x160e84, Func Offset: 0x174
	// Line 1153, Address: 0x160e8c, Func Offset: 0x17c
	// Line 1154, Address: 0x160e90, Func Offset: 0x180
	// Line 1156, Address: 0x160e98, Func Offset: 0x188
	// Line 1159, Address: 0x160ea0, Func Offset: 0x190
	// Line 1160, Address: 0x160ea4, Func Offset: 0x194
	// Line 1161, Address: 0x160ea8, Func Offset: 0x198
	// Line 1162, Address: 0x160eac, Func Offset: 0x19c
	// Line 1163, Address: 0x160eb0, Func Offset: 0x1a0
	// Line 1164, Address: 0x160eb4, Func Offset: 0x1a4
	// Line 1165, Address: 0x160eb8, Func Offset: 0x1a8
	// Line 1166, Address: 0x160ebc, Func Offset: 0x1ac
	// Line 1169, Address: 0x160ec4, Func Offset: 0x1b4
	// Line 1170, Address: 0x160ec8, Func Offset: 0x1b8
	// Line 1171, Address: 0x160ecc, Func Offset: 0x1bc
	// Line 1173, Address: 0x160ed4, Func Offset: 0x1c4
	// Line 1176, Address: 0x160edc, Func Offset: 0x1cc
	// Line 1178, Address: 0x160ee4, Func Offset: 0x1d4
	// Line 1182, Address: 0x160eec, Func Offset: 0x1dc
	// Line 1183, Address: 0x160ef0, Func Offset: 0x1e0
	// Line 1184, Address: 0x160ef4, Func Offset: 0x1e4
	// Line 1185, Address: 0x160ef8, Func Offset: 0x1e8
	// Line 1186, Address: 0x160efc, Func Offset: 0x1ec
	// Func End, Address: 0x160f04, Func Offset: 0x1f4
}

// 
// Start address: 0x160f10
void ot_check(sgSot* ot_work)
{
	int w;
	sgSotTag** ot_top;
	sgSotTag* od;
	unsigned short* ot_max;
	int n;
	unsigned short d;
	// Line 1199, Address: 0x160f10, Func Offset: 0
	// Line 1206, Address: 0x160f14, Func Offset: 0x4
	// Line 1207, Address: 0x160f18, Func Offset: 0x8
	// Line 1199, Address: 0x160f1c, Func Offset: 0xc
	// Line 1206, Address: 0x160f20, Func Offset: 0x10
	// Line 1207, Address: 0x160f24, Func Offset: 0x14
	// Line 1206, Address: 0x160f28, Func Offset: 0x18
	// Line 1207, Address: 0x160f2c, Func Offset: 0x1c
	// Line 1208, Address: 0x160f30, Func Offset: 0x20
	// Line 1209, Address: 0x160f40, Func Offset: 0x30
	// Line 1210, Address: 0x160f44, Func Offset: 0x34
	// Line 1212, Address: 0x160f4c, Func Offset: 0x3c
	// Line 1213, Address: 0x160f50, Func Offset: 0x40
	// Line 1215, Address: 0x160f54, Func Offset: 0x44
	// Line 1216, Address: 0x160f5c, Func Offset: 0x4c
	// Line 1217, Address: 0x160f64, Func Offset: 0x54
	// Line 1218, Address: 0x160f6c, Func Offset: 0x5c
	// Line 1219, Address: 0x160f70, Func Offset: 0x60
	// Line 1221, Address: 0x160f74, Func Offset: 0x64
	// Line 1219, Address: 0x160f78, Func Offset: 0x68
	// Line 1220, Address: 0x160f7c, Func Offset: 0x6c
	// Line 1221, Address: 0x160f80, Func Offset: 0x70
	// Line 1222, Address: 0x160f88, Func Offset: 0x78
	// Func End, Address: 0x160f90, Func Offset: 0x80
}

