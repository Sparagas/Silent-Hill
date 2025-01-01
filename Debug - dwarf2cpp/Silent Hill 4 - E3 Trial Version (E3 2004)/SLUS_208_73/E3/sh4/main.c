typedef struct _anon0;


typedef int type_0[2];
typedef char type_1[128];

struct _anon0
{
	int t10000_mode;
	int usb_boot;
	int windows_path;
	int data_path_type;
};

_anon0 boot_status;
int soft_reset_enable;

void BootStatusInit();
void AnalizeBootOption(int argc, char** argv);
int IsT10000();
int IsWindows();
int DataPathType();
void SoftResetDisable();
void SoftResetEnable();
int SoftResetIsEnable();
int FullMallocAndFree();
void LoadModule(char* load_path, char* file_name, int args, char* argp);
void ColdInit();
void WarmInit();
int SoftResetCheck();
void SoftReset();
void MainLoop();
int main(int argc, char** argv);

// 
// Start address: 0x21fea0
void BootStatusInit()
{
	// Line 206, Address: 0x21fea0, Func Offset: 0
	// Line 207, Address: 0x21fea8, Func Offset: 0x8
	// Line 208, Address: 0x21feb0, Func Offset: 0x10
	// Line 209, Address: 0x21feb8, Func Offset: 0x18
	// Line 211, Address: 0x21febc, Func Offset: 0x1c
	// Func End, Address: 0x21fec4, Func Offset: 0x24
}

// 
// Start address: 0x21fed0
void AnalizeBootOption(int argc, char** argv)
{
	int idx;
	unsigned char buf_uc;
	// Line 226, Address: 0x21fed0, Func Offset: 0
	// Line 234, Address: 0x21fee0, Func Offset: 0x10
	// Line 242, Address: 0x21fef4, Func Offset: 0x24
	// Line 239, Address: 0x21fef8, Func Offset: 0x28
	// Line 230, Address: 0x21fefc, Func Offset: 0x2c
	// Line 226, Address: 0x21ff04, Func Offset: 0x34
	// Line 228, Address: 0x21ff0c, Func Offset: 0x3c
	// Line 230, Address: 0x21ff10, Func Offset: 0x40
	// Line 234, Address: 0x21ff20, Func Offset: 0x50
	// Line 235, Address: 0x21ff54, Func Offset: 0x84
	// Line 236, Address: 0x21ff58, Func Offset: 0x88
	// Line 237, Address: 0x21ff5c, Func Offset: 0x8c
	// Line 238, Address: 0x21ff64, Func Offset: 0x94
	// Line 239, Address: 0x21ff68, Func Offset: 0x98
	// Line 240, Address: 0x21ff6c, Func Offset: 0x9c
	// Line 241, Address: 0x21ff74, Func Offset: 0xa4
	// Line 242, Address: 0x21ff78, Func Offset: 0xa8
	// Line 243, Address: 0x21ff7c, Func Offset: 0xac
	// Line 244, Address: 0x21ff84, Func Offset: 0xb4
	// Line 245, Address: 0x21ff88, Func Offset: 0xb8
	// Line 246, Address: 0x21ff94, Func Offset: 0xc4
	// Line 247, Address: 0x21ff9c, Func Offset: 0xcc
	// Line 248, Address: 0x21ffa0, Func Offset: 0xd0
	// Line 251, Address: 0x21ffb0, Func Offset: 0xe0
	// Line 252, Address: 0x21ffc0, Func Offset: 0xf0
	// Func End, Address: 0x21ffc8, Func Offset: 0xf8
}

// 
// Start address: 0x21ffd0
int IsT10000()
{
	// Line 258, Address: 0x21ffd0, Func Offset: 0
	// Line 259, Address: 0x21ffd4, Func Offset: 0x4
	// Func End, Address: 0x21ffdc, Func Offset: 0xc
}

// 
// Start address: 0x21ffe0
int IsWindows()
{
	// Line 265, Address: 0x21ffe0, Func Offset: 0
	// Line 266, Address: 0x21ffe4, Func Offset: 0x4
	// Func End, Address: 0x21ffec, Func Offset: 0xc
}

// 
// Start address: 0x21fff0
int DataPathType()
{
	// Line 278, Address: 0x21fff0, Func Offset: 0
	// Line 279, Address: 0x21fff4, Func Offset: 0x4
	// Func End, Address: 0x21fffc, Func Offset: 0xc
}

// 
// Start address: 0x220000
void SoftResetDisable()
{
	// Line 296, Address: 0x220000, Func Offset: 0
	// Line 297, Address: 0x220004, Func Offset: 0x4
	// Func End, Address: 0x22000c, Func Offset: 0xc
}

// 
// Start address: 0x220010
void SoftResetEnable()
{
	// Line 302, Address: 0x220010, Func Offset: 0
	// Line 303, Address: 0x220018, Func Offset: 0x8
	// Func End, Address: 0x220020, Func Offset: 0x10
}

// 
// Start address: 0x220020
int SoftResetIsEnable()
{
	// Line 307, Address: 0x220020, Func Offset: 0
	// Line 308, Address: 0x220024, Func Offset: 0x4
	// Func End, Address: 0x22002c, Func Offset: 0xc
}

// 
// Start address: 0x220030
int FullMallocAndFree()
{
	char* p;
	int heap_size;
	int st_stack_size_;
	int st_end;
	// Line 320, Address: 0x220030, Func Offset: 0
	// Line 338, Address: 0x220034, Func Offset: 0x4
	// Line 320, Address: 0x220038, Func Offset: 0x8
	// Line 338, Address: 0x22003c, Func Offset: 0xc
	// Line 320, Address: 0x220040, Func Offset: 0x10
	// Line 338, Address: 0x220044, Func Offset: 0x14
	// Line 339, Address: 0x220060, Func Offset: 0x30
	// Line 340, Address: 0x220068, Func Offset: 0x38
	// Line 343, Address: 0x220070, Func Offset: 0x40
	// Line 344, Address: 0x220074, Func Offset: 0x44
	// Func End, Address: 0x220084, Func Offset: 0x54
}

// 
// Start address: 0x220090
void LoadModule(char* load_path, char* file_name, int args, char* argp)
{
	char module_name[128];
	// Line 350, Address: 0x220090, Func Offset: 0
	// Line 352, Address: 0x22009c, Func Offset: 0xc
	// Line 350, Address: 0x2200a0, Func Offset: 0x10
	// Line 352, Address: 0x2200b8, Func Offset: 0x28
	// Line 353, Address: 0x2200c0, Func Offset: 0x30
	// Line 355, Address: 0x2200cc, Func Offset: 0x3c
	// Line 357, Address: 0x2200dc, Func Offset: 0x4c
	// Line 358, Address: 0x2200ec, Func Offset: 0x5c
	// Line 359, Address: 0x220100, Func Offset: 0x70
	// Line 360, Address: 0x220104, Func Offset: 0x74
	// Line 359, Address: 0x220108, Func Offset: 0x78
	// Line 362, Address: 0x22010c, Func Offset: 0x7c
	// Line 363, Address: 0x220118, Func Offset: 0x88
	// Line 366, Address: 0x220128, Func Offset: 0x98
	// Line 373, Address: 0x220140, Func Offset: 0xb0
	// Line 374, Address: 0x22015c, Func Offset: 0xcc
	// Func End, Address: 0x220178, Func Offset: 0xe8
}

// 
// Start address: 0x220180
void ColdInit()
{
	int rtc[2];
	// Line 380, Address: 0x220180, Func Offset: 0
	// Line 384, Address: 0x220188, Func Offset: 0x8
	// Line 386, Address: 0x220190, Func Offset: 0x10
	// Line 388, Address: 0x220198, Func Offset: 0x18
	// Line 390, Address: 0x2201a0, Func Offset: 0x20
	// Line 392, Address: 0x2201b0, Func Offset: 0x30
	// Line 394, Address: 0x2201cc, Func Offset: 0x4c
	// Line 411, Address: 0x2201f0, Func Offset: 0x70
	// Line 413, Address: 0x2201f8, Func Offset: 0x78
	// Line 415, Address: 0x220200, Func Offset: 0x80
	// Line 417, Address: 0x220208, Func Offset: 0x88
	// Line 420, Address: 0x220210, Func Offset: 0x90
	// Line 422, Address: 0x220218, Func Offset: 0x98
	// Line 424, Address: 0x220220, Func Offset: 0xa0
	// Line 426, Address: 0x220228, Func Offset: 0xa8
	// Line 427, Address: 0x220238, Func Offset: 0xb8
	// Line 428, Address: 0x220240, Func Offset: 0xc0
	// Line 429, Address: 0x220248, Func Offset: 0xc8
	// Line 435, Address: 0x220250, Func Offset: 0xd0
	// Line 451, Address: 0x220258, Func Offset: 0xd8
	// Line 452, Address: 0x220278, Func Offset: 0xf8
	// Line 455, Address: 0x220298, Func Offset: 0x118
	// Line 456, Address: 0x2202b8, Func Offset: 0x138
	// Line 459, Address: 0x2202d8, Func Offset: 0x158
	// Line 461, Address: 0x2202f8, Func Offset: 0x178
	// Line 462, Address: 0x220308, Func Offset: 0x188
	// Line 463, Address: 0x220328, Func Offset: 0x1a8
	// Line 464, Address: 0x220348, Func Offset: 0x1c8
	// Line 466, Address: 0x220368, Func Offset: 0x1e8
	// Line 467, Address: 0x220374, Func Offset: 0x1f4
	// Line 470, Address: 0x220398, Func Offset: 0x218
	// Line 471, Address: 0x2203a0, Func Offset: 0x220
	// Line 474, Address: 0x2203c4, Func Offset: 0x244
	// Line 481, Address: 0x2203c8, Func Offset: 0x248
	// Line 482, Address: 0x2203d0, Func Offset: 0x250
	// Line 483, Address: 0x2203d8, Func Offset: 0x258
	// Line 484, Address: 0x2203e0, Func Offset: 0x260
	// Line 485, Address: 0x2203e8, Func Offset: 0x268
	// Line 497, Address: 0x2203f0, Func Offset: 0x270
	// Line 498, Address: 0x2203f8, Func Offset: 0x278
	// Line 499, Address: 0x220400, Func Offset: 0x280
	// Line 501, Address: 0x220408, Func Offset: 0x288
	// Line 508, Address: 0x220410, Func Offset: 0x290
	// Line 513, Address: 0x220418, Func Offset: 0x298
	// Line 514, Address: 0x220420, Func Offset: 0x2a0
	// Line 517, Address: 0x220434, Func Offset: 0x2b4
	// Line 520, Address: 0x22043c, Func Offset: 0x2bc
	// Line 524, Address: 0x220448, Func Offset: 0x2c8
	// Line 528, Address: 0x22045c, Func Offset: 0x2dc
	// Line 530, Address: 0x220464, Func Offset: 0x2e4
	// Line 531, Address: 0x22046c, Func Offset: 0x2ec
	// Func End, Address: 0x220478, Func Offset: 0x2f8
}

// 
// Start address: 0x220480
void WarmInit()
{
	void* addr;
	int size;
	// Line 537, Address: 0x220480, Func Offset: 0
	// Line 541, Address: 0x220488, Func Offset: 0x8
	// Line 548, Address: 0x220490, Func Offset: 0x10
	// Line 549, Address: 0x220498, Func Offset: 0x18
	// Line 551, Address: 0x2204a0, Func Offset: 0x20
	// Line 571, Address: 0x2204b0, Func Offset: 0x30
	// Line 572, Address: 0x2204b8, Func Offset: 0x38
	// Line 573, Address: 0x2204c0, Func Offset: 0x40
	// Line 574, Address: 0x2204c8, Func Offset: 0x48
	// Line 575, Address: 0x2204d8, Func Offset: 0x58
	// Line 576, Address: 0x2204e0, Func Offset: 0x60
	// Line 577, Address: 0x2204f0, Func Offset: 0x70
	// Line 578, Address: 0x2204f8, Func Offset: 0x78
	// Line 580, Address: 0x220508, Func Offset: 0x88
	// Line 581, Address: 0x22051c, Func Offset: 0x9c
	// Line 582, Address: 0x220530, Func Offset: 0xb0
	// Line 584, Address: 0x220544, Func Offset: 0xc4
	// Line 585, Address: 0x22054c, Func Offset: 0xcc
	// Line 586, Address: 0x220554, Func Offset: 0xd4
	// Line 588, Address: 0x22055c, Func Offset: 0xdc
	// Line 589, Address: 0x220564, Func Offset: 0xe4
	// Line 590, Address: 0x22056c, Func Offset: 0xec
	// Line 592, Address: 0x220574, Func Offset: 0xf4
	// Line 596, Address: 0x22057c, Func Offset: 0xfc
	// Line 598, Address: 0x22058c, Func Offset: 0x10c
	// Line 599, Address: 0x220598, Func Offset: 0x118
	// Line 600, Address: 0x2205a0, Func Offset: 0x120
	// Line 601, Address: 0x2205ac, Func Offset: 0x12c
	// Line 602, Address: 0x2205b8, Func Offset: 0x138
	// Line 603, Address: 0x2205c0, Func Offset: 0x140
	// Line 609, Address: 0x2205cc, Func Offset: 0x14c
	// Line 610, Address: 0x2205d4, Func Offset: 0x154
	// Line 613, Address: 0x2205dc, Func Offset: 0x15c
	// Line 614, Address: 0x2205e4, Func Offset: 0x164
	// Line 617, Address: 0x2205ec, Func Offset: 0x16c
	// Line 618, Address: 0x2205f4, Func Offset: 0x174
	// Line 619, Address: 0x2205fc, Func Offset: 0x17c
	// Line 625, Address: 0x220604, Func Offset: 0x184
	// Line 629, Address: 0x22060c, Func Offset: 0x18c
	// Line 630, Address: 0x220614, Func Offset: 0x194
	// Line 634, Address: 0x22061c, Func Offset: 0x19c
	// Line 635, Address: 0x220624, Func Offset: 0x1a4
	// Line 636, Address: 0x22062c, Func Offset: 0x1ac
	// Line 637, Address: 0x220634, Func Offset: 0x1b4
	// Line 638, Address: 0x22063c, Func Offset: 0x1bc
	// Line 639, Address: 0x220644, Func Offset: 0x1c4
	// Line 640, Address: 0x22064c, Func Offset: 0x1cc
	// Line 641, Address: 0x220654, Func Offset: 0x1d4
	// Line 642, Address: 0x22065c, Func Offset: 0x1dc
	// Line 651, Address: 0x220664, Func Offset: 0x1e4
	// Line 652, Address: 0x22066c, Func Offset: 0x1ec
	// Func End, Address: 0x22067c, Func Offset: 0x1fc
}

// 
// Start address: 0x220680
int SoftResetCheck()
{
	unsigned int idle_count;
	// Line 662, Address: 0x220680, Func Offset: 0
	// Line 665, Address: 0x220688, Func Offset: 0x8
	// Line 666, Address: 0x220698, Func Offset: 0x18
	// Line 669, Address: 0x2206a0, Func Offset: 0x20
	// Line 673, Address: 0x2206f8, Func Offset: 0x78
	// Line 674, Address: 0x220704, Func Offset: 0x84
	// Line 676, Address: 0x220710, Func Offset: 0x90
	// Line 681, Address: 0x220718, Func Offset: 0x98
	// Line 683, Address: 0x22073c, Func Offset: 0xbc
	// Line 686, Address: 0x220748, Func Offset: 0xc8
	// Line 687, Address: 0x220760, Func Offset: 0xe0
	// Line 689, Address: 0x220768, Func Offset: 0xe8
	// Line 690, Address: 0x220770, Func Offset: 0xf0
	// Func End, Address: 0x220780, Func Offset: 0x100
}

// 
// Start address: 0x220780
void SoftReset()
{
	// Line 695, Address: 0x220780, Func Offset: 0
	// Line 696, Address: 0x220784, Func Offset: 0x4
	// Line 695, Address: 0x220788, Func Offset: 0x8
	// Line 696, Address: 0x22078c, Func Offset: 0xc
	// Line 697, Address: 0x220794, Func Offset: 0x14
	// Line 698, Address: 0x22079c, Func Offset: 0x1c
	// Line 699, Address: 0x2207a4, Func Offset: 0x24
	// Line 700, Address: 0x2207ac, Func Offset: 0x2c
	// Line 701, Address: 0x2207b4, Func Offset: 0x34
	// Line 702, Address: 0x2207bc, Func Offset: 0x3c
	// Line 705, Address: 0x2207c4, Func Offset: 0x44
	// Line 706, Address: 0x2207cc, Func Offset: 0x4c
	// Line 709, Address: 0x2207d4, Func Offset: 0x54
	// Line 710, Address: 0x2207dc, Func Offset: 0x5c
	// Line 711, Address: 0x22080c, Func Offset: 0x8c
	// Line 712, Address: 0x220814, Func Offset: 0x94
	// Line 713, Address: 0x22081c, Func Offset: 0x9c
	// Line 714, Address: 0x220824, Func Offset: 0xa4
	// Line 715, Address: 0x22082c, Func Offset: 0xac
	// Line 716, Address: 0x220834, Func Offset: 0xb4
	// Line 717, Address: 0x220840, Func Offset: 0xc0
	// Line 718, Address: 0x220848, Func Offset: 0xc8
	// Line 720, Address: 0x220854, Func Offset: 0xd4
	// Line 721, Address: 0x22085c, Func Offset: 0xdc
	// Line 731, Address: 0x220864, Func Offset: 0xe4
	// Line 733, Address: 0x220880, Func Offset: 0x100
	// Func End, Address: 0x220890, Func Offset: 0x110
}

// 
// Start address: 0x220890
void MainLoop()
{
	int skip_draw;
	// Line 741, Address: 0x220890, Func Offset: 0
	// Line 745, Address: 0x220898, Func Offset: 0x8
	// Line 746, Address: 0x2208a8, Func Offset: 0x18
	// Line 748, Address: 0x2208b0, Func Offset: 0x20
	// Line 755, Address: 0x2208b8, Func Offset: 0x28
	// Line 756, Address: 0x2208c8, Func Offset: 0x38
	// Line 757, Address: 0x2208d0, Func Offset: 0x40
	// Line 760, Address: 0x2208d8, Func Offset: 0x48
	// Line 762, Address: 0x2208e0, Func Offset: 0x50
	// Line 763, Address: 0x2208f0, Func Offset: 0x60
	// Line 765, Address: 0x2208f8, Func Offset: 0x68
	// Line 771, Address: 0x220900, Func Offset: 0x70
	// Line 776, Address: 0x220908, Func Offset: 0x78
	// Line 777, Address: 0x220918, Func Offset: 0x88
	// Line 783, Address: 0x220920, Func Offset: 0x90
	// Line 784, Address: 0x220928, Func Offset: 0x98
	// Line 785, Address: 0x220930, Func Offset: 0xa0
	// Line 786, Address: 0x220938, Func Offset: 0xa8
	// Func End, Address: 0x220944, Func Offset: 0xb4
}

// 
// Start address: 0x220950
int main(int argc, char** argv)
{
	// Line 795, Address: 0x220950, Func Offset: 0
	// Line 796, Address: 0x220958, Func Offset: 0x8
	// Line 797, Address: 0x220960, Func Offset: 0x10
	// Line 799, Address: 0x220968, Func Offset: 0x18
	// Line 802, Address: 0x220970, Func Offset: 0x20
	// Line 804, Address: 0x220978, Func Offset: 0x28
	// Line 805, Address: 0x220980, Func Offset: 0x30
	// Func End, Address: 0x220988, Func Offset: 0x38
}

