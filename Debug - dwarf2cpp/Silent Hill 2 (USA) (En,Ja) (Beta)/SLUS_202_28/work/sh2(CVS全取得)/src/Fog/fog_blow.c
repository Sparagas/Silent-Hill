typedef struct FOG_PART_DATA;
typedef struct FOG_COLIS_HEAD;
typedef struct FOG_AREA_DATA;
typedef struct FOG_ENV_DATA;
typedef struct FOG_BLOW_POINT;
typedef struct FOG_WORK2;
typedef struct FOG_OBJ_DATA;
typedef struct FOG_WALL_DATA;
typedef struct FOG_WORK;


typedef FOG_BLOW_POINT type_0[14];
typedef float type_1[4];
typedef float type_2[4];
typedef float type_3[4][4];
typedef FOG_BLOW_POINT type_4[10];
typedef int type_5[16];
typedef FOG_BLOW_POINT type_6[16];
typedef FOG_PART_DATA type_7[700];
typedef float type_8[8];
typedef float type_9[8][8];
typedef float type_10[8][8][8];
typedef FOG_WALL_DATA type_11[188];
typedef FOG_OBJ_DATA type_12[168];

struct FOG_PART_DATA
{
	float pos[4];
	float mv[4];
	float dd[4];
	float degree[4];
	float tdx;
	float tdy;
	float alp;
	int dpos;
	float alp_now;
	float alp_add;
	int bounce;
	int erase;
};

struct FOG_COLIS_HEAD
{
	unsigned short wall1;
	unsigned short wall2;
	unsigned short obj1;
	unsigned short obj2;
	unsigned short area;
	unsigned short env;
};

struct FOG_AREA_DATA
{
	short x0;
	short z0;
	short x1;
	short z1;
	unsigned short env;
};

struct FOG_ENV_DATA
{
	short PartNum;
	short MaxPos;
	short PartSize;
	short EscapeRange;
	short FloorY;
	short LimitY;
	short LimitHeight;
	short WaterY;
	unsigned char WindDef;
	unsigned char Flag;
	unsigned char Double;
	unsigned char Alpha;
	float GridRate;
};

struct FOG_BLOW_POINT
{
	float pos[4];
	float vec[4];
};

struct FOG_WORK2
{
	short PartNum;
	short BlowPointNum;
	int BlowPointID;
	FOG_BLOW_POINT* BlowPoint;
	int BlowTimer[16];
	int BlowInterval;
	float Gravity;
	float Expand;
};

struct FOG_OBJ_DATA
{
	float pos[4];
	float mv[4];
	int type;
	float rer;
	unsigned long id;
};

struct FOG_WALL_DATA
{
	float normal[4];
	float v0[4];
	float min[4];
	float max[4];
};

struct FOG_WORK
{
	FOG_PART_DATA Part[700];
	float GridDense[8][8][8];
	FOG_WALL_DATA Wall[188];
	FOG_OBJ_DATA Obj[168];
	float WorldScreenM[4][4];
	float WorldViewM[4][4];
	float CameraPosV[4];
	float OldCameraV[4];
	float WorldPosV[4];
	float LocalPosV[4];
	float MapPosV[4];
	float LightPosV[4];
	float WindV[4];
	float fewdense[4];
	float StayPoint[4];
	float LimitY;
	float LimitY2;
	float WaterY;
	float SpeedLevel;
	float sc_degree[4];
	float sc_tdx;
	float sc_tdy;
	float MaxPos;
	float FadePos;
	float PartSize;
	float Projection;
	float EscapeRange;
	float GridRate;
	float FloorY;
	short PartNum;
	short WallNum;
	short ObjMax;
	short ObjNum;
	short ObjNum2;
	short Alpha;
	short WindDef;
	char Double;
	char LoadStep;
	char Global;
	unsigned short AreaMax;
	unsigned short Flag;
	unsigned int Color;
	int SumW;
	int fid;
	int WindTimer;
	FOG_COLIS_HEAD* ColisHead;
	FOG_AREA_DATA* AreaTop;
	FOG_ENV_DATA* EnvTop;
	FOG_ENV_DATA* EnvNow;
};

FOG_BLOW_POINT blow_point_ps185[14];
FOG_BLOW_POINT blow_point_ps189[10];
FOG_BLOW_POINT blow_point_ps193[16];
FOG_WORK2 fwork2;
FOG_WORK fwork;

void fogInitParticle2();
void fogSetBlowPoint(int room);
void fogBlow(FOG_BLOW_POINT* blow);
void fogMoveParticle2();
void fog_part_blow();
void fog_part_clamp2();
void fogMakePacket2(<unknown fundamental type (0xa510)>* ppos);

// 
// Start address: 0x274ca0
void fogInitParticle2()
{
	// Line 195, Address: 0x274ca0, Func Offset: 0
	// Line 196, Address: 0x274ca8, Func Offset: 0x8
	// Func End, Address: 0x274cb0, Func Offset: 0x10
}

// 
// Start address: 0x274cb0
void fogSetBlowPoint(int room)
{
	int i;
	// Line 204, Address: 0x274cb0, Func Offset: 0
	// Line 206, Address: 0x274cdc, Func Offset: 0x2c
	// Line 207, Address: 0x274cec, Func Offset: 0x3c
	// Line 208, Address: 0x274cf8, Func Offset: 0x48
	// Line 209, Address: 0x274d04, Func Offset: 0x54
	// Line 211, Address: 0x274d0c, Func Offset: 0x5c
	// Line 212, Address: 0x274d1c, Func Offset: 0x6c
	// Line 213, Address: 0x274d28, Func Offset: 0x78
	// Line 214, Address: 0x274d34, Func Offset: 0x84
	// Line 216, Address: 0x274d3c, Func Offset: 0x8c
	// Line 217, Address: 0x274d4c, Func Offset: 0x9c
	// Line 218, Address: 0x274d58, Func Offset: 0xa8
	// Line 219, Address: 0x274d64, Func Offset: 0xb4
	// Line 221, Address: 0x274d6c, Func Offset: 0xbc
	// Line 224, Address: 0x274d74, Func Offset: 0xc4
	// Line 225, Address: 0x274d7c, Func Offset: 0xcc
	// Line 226, Address: 0x274d88, Func Offset: 0xd8
	// Line 227, Address: 0x274d9c, Func Offset: 0xec
	// Line 228, Address: 0x274dac, Func Offset: 0xfc
	// Func End, Address: 0x274db4, Func Offset: 0x104
}

// 
// Start address: 0x274dc0
void fogBlow(FOG_BLOW_POINT* blow)
{
	float vec[4];
	FOG_PART_DATA* pd;
	// Line 234, Address: 0x274dc0, Func Offset: 0
	// Line 237, Address: 0x274dd4, Func Offset: 0x14
	// Line 238, Address: 0x274de8, Func Offset: 0x28
	// Line 239, Address: 0x274e04, Func Offset: 0x44
	// Line 240, Address: 0x274e40, Func Offset: 0x80
	// Line 242, Address: 0x274e48, Func Offset: 0x88
	// Line 243, Address: 0x274e78, Func Offset: 0xb8
	// Line 244, Address: 0x274e84, Func Offset: 0xc4
	// Line 245, Address: 0x274e98, Func Offset: 0xd8
	// Line 246, Address: 0x274eb4, Func Offset: 0xf4
	// Line 247, Address: 0x274eb8, Func Offset: 0xf8
	// Line 248, Address: 0x274ebc, Func Offset: 0xfc
	// Line 249, Address: 0x274ec0, Func Offset: 0x100
	// Line 250, Address: 0x274ec4, Func Offset: 0x104
	// Line 251, Address: 0x274ed0, Func Offset: 0x110
	// Line 252, Address: 0x274edc, Func Offset: 0x11c
	// Line 253, Address: 0x274ee0, Func Offset: 0x120
	// Line 254, Address: 0x274f0c, Func Offset: 0x14c
	// Line 255, Address: 0x274f14, Func Offset: 0x154
	// Func End, Address: 0x274f2c, Func Offset: 0x16c
}

// 
// Start address: 0x274f30
void fogMoveParticle2()
{
	float alp;
	int room;
	int n1;
	int df;
	int n;
	FOG_PART_DATA* pdo;
	FOG_PART_DATA* pd;
	// Line 260, Address: 0x274f30, Func Offset: 0
	// Line 261, Address: 0x274f48, Func Offset: 0x18
	// Line 265, Address: 0x274f50, Func Offset: 0x20
	// Line 266, Address: 0x274f58, Func Offset: 0x28
	// Line 267, Address: 0x274f68, Func Offset: 0x38
	// Line 270, Address: 0x274f74, Func Offset: 0x44
	// Line 271, Address: 0x274f98, Func Offset: 0x68
	// Line 272, Address: 0x274fb8, Func Offset: 0x88
	// Line 273, Address: 0x274fc4, Func Offset: 0x94
	// Line 274, Address: 0x274fd0, Func Offset: 0xa0
	// Line 275, Address: 0x274ff4, Func Offset: 0xc4
	// Line 277, Address: 0x275058, Func Offset: 0x128
	// Line 279, Address: 0x275070, Func Offset: 0x140
	// Line 280, Address: 0x27508c, Func Offset: 0x15c
	// Line 282, Address: 0x275094, Func Offset: 0x164
	// Line 284, Address: 0x2750a0, Func Offset: 0x170
	// Line 287, Address: 0x2750d0, Func Offset: 0x1a0
	// Line 288, Address: 0x2750dc, Func Offset: 0x1ac
	// Line 289, Address: 0x2750f0, Func Offset: 0x1c0
	// Line 290, Address: 0x275120, Func Offset: 0x1f0
	// Line 293, Address: 0x275144, Func Offset: 0x214
	// Line 294, Address: 0x275158, Func Offset: 0x228
	// Line 298, Address: 0x2751a4, Func Offset: 0x274
	// Line 301, Address: 0x2751c0, Func Offset: 0x290
	// Line 305, Address: 0x2751c8, Func Offset: 0x298
	// Line 306, Address: 0x2751dc, Func Offset: 0x2ac
	// Line 309, Address: 0x275240, Func Offset: 0x310
	// Line 310, Address: 0x27524c, Func Offset: 0x31c
	// Line 311, Address: 0x275268, Func Offset: 0x338
	// Line 315, Address: 0x275290, Func Offset: 0x360
	// Line 318, Address: 0x275298, Func Offset: 0x368
	// Line 319, Address: 0x2752c8, Func Offset: 0x398
	// Line 320, Address: 0x2752e8, Func Offset: 0x3b8
	// Func End, Address: 0x275308, Func Offset: 0x3d8
}

// 
// Start address: 0x275310
void fog_part_blow()
{
	float* FVector;
	FOG_PART_DATA* pd;
	// Line 326, Address: 0x275310, Func Offset: 0
	// Line 327, Address: 0x275318, Func Offset: 0x8
	// Line 328, Address: 0x27531c, Func Offset: 0xc
	// Line 329, Address: 0x275330, Func Offset: 0x20
	// Line 330, Address: 0x27535c, Func Offset: 0x4c
	// Line 332, Address: 0x275360, Func Offset: 0x50
	// Line 333, Address: 0x275388, Func Offset: 0x78
	// Line 334, Address: 0x2753a4, Func Offset: 0x94
	// Line 335, Address: 0x2753b4, Func Offset: 0xa4
	// Line 336, Address: 0x2753b8, Func Offset: 0xa8
	// Func End, Address: 0x2753c0, Func Offset: 0xb0
}

// 
// Start address: 0x2753c0
void fog_part_clamp2()
{
	FOG_PART_DATA* pd;
	// Line 342, Address: 0x2753c0, Func Offset: 0
	// Line 387, Address: 0x2753c8, Func Offset: 0x8
	// Line 388, Address: 0x2753cc, Func Offset: 0xc
	// Line 389, Address: 0x2753d0, Func Offset: 0x10
	// Line 390, Address: 0x2753d4, Func Offset: 0x14
	// Line 391, Address: 0x2753d8, Func Offset: 0x18
	// Line 392, Address: 0x2753dc, Func Offset: 0x1c
	// Line 393, Address: 0x2753e0, Func Offset: 0x20
	// Line 394, Address: 0x2753e4, Func Offset: 0x24
	// Line 395, Address: 0x2753e8, Func Offset: 0x28
	// Line 396, Address: 0x2753ec, Func Offset: 0x2c
	// Line 397, Address: 0x2753f0, Func Offset: 0x30
	// Line 398, Address: 0x2753f4, Func Offset: 0x34
	// Line 399, Address: 0x2753f8, Func Offset: 0x38
	// Line 400, Address: 0x2753fc, Func Offset: 0x3c
	// Line 401, Address: 0x275400, Func Offset: 0x40
	// Line 404, Address: 0x275408, Func Offset: 0x48
	// Line 405, Address: 0x27540c, Func Offset: 0x4c
	// Line 406, Address: 0x275410, Func Offset: 0x50
	// Line 407, Address: 0x275414, Func Offset: 0x54
	// Line 408, Address: 0x275418, Func Offset: 0x58
	// Line 409, Address: 0x27541c, Func Offset: 0x5c
	// Line 412, Address: 0x275424, Func Offset: 0x64
	// Line 413, Address: 0x275428, Func Offset: 0x68
	// Line 416, Address: 0x275430, Func Offset: 0x70
	// Line 417, Address: 0x275434, Func Offset: 0x74
	// Line 418, Address: 0x275438, Func Offset: 0x78
	// Line 419, Address: 0x27543c, Func Offset: 0x7c
	// Line 420, Address: 0x275440, Func Offset: 0x80
	// Line 421, Address: 0x275444, Func Offset: 0x84
	// Line 422, Address: 0x275448, Func Offset: 0x88
	// Line 425, Address: 0x275450, Func Offset: 0x90
	// Line 426, Address: 0x275454, Func Offset: 0x94
	// Line 429, Address: 0x27545c, Func Offset: 0x9c
	// Line 430, Address: 0x275460, Func Offset: 0xa0
	// Line 431, Address: 0x275464, Func Offset: 0xa4
	// Line 432, Address: 0x275468, Func Offset: 0xa8
	// Line 436, Address: 0x27546c, Func Offset: 0xac
	// Func End, Address: 0x275474, Func Offset: 0xb4
}

// 
// Start address: 0x275480
void fogMakePacket2(<unknown fundamental type (0xa510)>* ppos)
{
	// Line 443, Address: 0x275480, Func Offset: 0
	// Line 457, Address: 0x275494, Func Offset: 0x14
	// Line 580, Address: 0x2754c0, Func Offset: 0x40
	// Line 612, Address: 0x2754d4, Func Offset: 0x54
	// Line 613, Address: 0x2754d8, Func Offset: 0x58
	// Line 614, Address: 0x2754dc, Func Offset: 0x5c
	// Line 616, Address: 0x2754e0, Func Offset: 0x60
	// Line 617, Address: 0x2754e4, Func Offset: 0x64
	// Line 618, Address: 0x2754e8, Func Offset: 0x68
	// Line 619, Address: 0x2754ec, Func Offset: 0x6c
	// Line 620, Address: 0x2754f0, Func Offset: 0x70
	// Line 621, Address: 0x2754f4, Func Offset: 0x74
	// Line 622, Address: 0x2754f8, Func Offset: 0x78
	// Line 623, Address: 0x2754fc, Func Offset: 0x7c
	// Line 624, Address: 0x275500, Func Offset: 0x80
	// Line 625, Address: 0x275504, Func Offset: 0x84
	// Line 627, Address: 0x27550c, Func Offset: 0x8c
	// Line 628, Address: 0x275510, Func Offset: 0x90
	// Line 629, Address: 0x275514, Func Offset: 0x94
	// Line 631, Address: 0x275518, Func Offset: 0x98
	// Line 632, Address: 0x27551c, Func Offset: 0x9c
	// Line 633, Address: 0x275520, Func Offset: 0xa0
	// Line 634, Address: 0x275524, Func Offset: 0xa4
	// Line 635, Address: 0x275528, Func Offset: 0xa8
	// Line 637, Address: 0x275530, Func Offset: 0xb0
	// Line 638, Address: 0x275534, Func Offset: 0xb4
	// Line 639, Address: 0x275538, Func Offset: 0xb8
	// Line 640, Address: 0x27553c, Func Offset: 0xbc
	// Line 641, Address: 0x275540, Func Offset: 0xc0
	// Line 642, Address: 0x275544, Func Offset: 0xc4
	// Line 643, Address: 0x275548, Func Offset: 0xc8
	// Line 644, Address: 0x27554c, Func Offset: 0xcc
	// Line 645, Address: 0x275550, Func Offset: 0xd0
	// Line 646, Address: 0x275554, Func Offset: 0xd4
	// Line 648, Address: 0x27555c, Func Offset: 0xdc
	// Line 650, Address: 0x275564, Func Offset: 0xe4
	// Line 651, Address: 0x275568, Func Offset: 0xe8
	// Line 652, Address: 0x27556c, Func Offset: 0xec
	// Line 653, Address: 0x275570, Func Offset: 0xf0
	// Line 654, Address: 0x275574, Func Offset: 0xf4
	// Line 655, Address: 0x275578, Func Offset: 0xf8
	// Line 656, Address: 0x27557c, Func Offset: 0xfc
	// Line 657, Address: 0x275580, Func Offset: 0x100
	// Line 658, Address: 0x275584, Func Offset: 0x104
	// Line 659, Address: 0x275588, Func Offset: 0x108
	// Line 660, Address: 0x27558c, Func Offset: 0x10c
	// Line 661, Address: 0x275590, Func Offset: 0x110
	// Line 664, Address: 0x275598, Func Offset: 0x118
	// Line 665, Address: 0x27559c, Func Offset: 0x11c
	// Line 666, Address: 0x2755a0, Func Offset: 0x120
	// Line 667, Address: 0x2755a4, Func Offset: 0x124
	// Line 668, Address: 0x2755a8, Func Offset: 0x128
	// Line 669, Address: 0x2755ac, Func Offset: 0x12c
	// Line 670, Address: 0x2755b0, Func Offset: 0x130
	// Line 672, Address: 0x2755b4, Func Offset: 0x134
	// Line 673, Address: 0x2755b8, Func Offset: 0x138
	// Line 674, Address: 0x2755bc, Func Offset: 0x13c
	// Line 675, Address: 0x2755c0, Func Offset: 0x140
	// Line 677, Address: 0x2755c8, Func Offset: 0x148
	// Line 678, Address: 0x2755cc, Func Offset: 0x14c
	// Line 679, Address: 0x2755d0, Func Offset: 0x150
	// Line 680, Address: 0x2755d4, Func Offset: 0x154
	// Line 681, Address: 0x2755d8, Func Offset: 0x158
	// Line 683, Address: 0x2755e0, Func Offset: 0x160
	// Line 684, Address: 0x2755e4, Func Offset: 0x164
	// Line 685, Address: 0x2755e8, Func Offset: 0x168
	// Line 686, Address: 0x2755ec, Func Offset: 0x16c
	// Line 687, Address: 0x2755f0, Func Offset: 0x170
	// Line 689, Address: 0x2755f8, Func Offset: 0x178
	// Line 692, Address: 0x2755fc, Func Offset: 0x17c
	// Line 693, Address: 0x275600, Func Offset: 0x180
	// Line 694, Address: 0x275604, Func Offset: 0x184
	// Line 695, Address: 0x275608, Func Offset: 0x188
	// Line 697, Address: 0x275610, Func Offset: 0x190
	// Line 698, Address: 0x275614, Func Offset: 0x194
	// Line 700, Address: 0x275618, Func Offset: 0x198
	// Line 702, Address: 0x27561c, Func Offset: 0x19c
	// Line 703, Address: 0x275620, Func Offset: 0x1a0
	// Line 704, Address: 0x275624, Func Offset: 0x1a4
	// Line 706, Address: 0x275628, Func Offset: 0x1a8
	// Line 707, Address: 0x27562c, Func Offset: 0x1ac
	// Line 708, Address: 0x275630, Func Offset: 0x1b0
	// Line 709, Address: 0x275634, Func Offset: 0x1b4
	// Line 710, Address: 0x275638, Func Offset: 0x1b8
	// Line 711, Address: 0x27563c, Func Offset: 0x1bc
	// Line 712, Address: 0x275640, Func Offset: 0x1c0
	// Line 713, Address: 0x275644, Func Offset: 0x1c4
	// Line 714, Address: 0x275648, Func Offset: 0x1c8
	// Line 717, Address: 0x275650, Func Offset: 0x1d0
	// Line 718, Address: 0x275654, Func Offset: 0x1d4
	// Line 719, Address: 0x275658, Func Offset: 0x1d8
	// Line 720, Address: 0x27565c, Func Offset: 0x1dc
	// Line 721, Address: 0x275660, Func Offset: 0x1e0
	// Line 722, Address: 0x275664, Func Offset: 0x1e4
	// Line 723, Address: 0x275668, Func Offset: 0x1e8
	// Line 724, Address: 0x27566c, Func Offset: 0x1ec
	// Line 725, Address: 0x275670, Func Offset: 0x1f0
	// Line 726, Address: 0x275674, Func Offset: 0x1f4
	// Line 727, Address: 0x275678, Func Offset: 0x1f8
	// Line 728, Address: 0x27567c, Func Offset: 0x1fc
	// Line 729, Address: 0x275680, Func Offset: 0x200
	// Line 730, Address: 0x275684, Func Offset: 0x204
	// Line 731, Address: 0x275688, Func Offset: 0x208
	// Line 732, Address: 0x27568c, Func Offset: 0x20c
	// Line 733, Address: 0x275690, Func Offset: 0x210
	// Line 734, Address: 0x275694, Func Offset: 0x214
	// Line 737, Address: 0x27569c, Func Offset: 0x21c
	// Line 738, Address: 0x2756a0, Func Offset: 0x220
	// Line 739, Address: 0x2756a4, Func Offset: 0x224
	// Line 740, Address: 0x2756a8, Func Offset: 0x228
	// Line 741, Address: 0x2756ac, Func Offset: 0x22c
	// Line 742, Address: 0x2756b0, Func Offset: 0x230
	// Line 743, Address: 0x2756b4, Func Offset: 0x234
	// Line 744, Address: 0x2756b8, Func Offset: 0x238
	// Line 745, Address: 0x2756bc, Func Offset: 0x23c
	// Line 746, Address: 0x2756c0, Func Offset: 0x240
	// Line 747, Address: 0x2756c4, Func Offset: 0x244
	// Line 748, Address: 0x2756c8, Func Offset: 0x248
	// Line 749, Address: 0x2756cc, Func Offset: 0x24c
	// Line 750, Address: 0x2756d0, Func Offset: 0x250
	// Line 751, Address: 0x2756d4, Func Offset: 0x254
	// Line 752, Address: 0x2756d8, Func Offset: 0x258
	// Line 753, Address: 0x2756dc, Func Offset: 0x25c
	// Line 754, Address: 0x2756e0, Func Offset: 0x260
	// Line 755, Address: 0x2756e4, Func Offset: 0x264
	// Line 756, Address: 0x2756e8, Func Offset: 0x268
	// Line 757, Address: 0x2756ec, Func Offset: 0x26c
	// Line 758, Address: 0x2756f0, Func Offset: 0x270
	// Line 759, Address: 0x2756f4, Func Offset: 0x274
	// Line 760, Address: 0x2756f8, Func Offset: 0x278
	// Line 761, Address: 0x2756fc, Func Offset: 0x27c
	// Line 762, Address: 0x275700, Func Offset: 0x280
	// Line 763, Address: 0x275704, Func Offset: 0x284
	// Line 764, Address: 0x275708, Func Offset: 0x288
	// Line 765, Address: 0x27570c, Func Offset: 0x28c
	// Line 766, Address: 0x275710, Func Offset: 0x290
	// Line 767, Address: 0x275714, Func Offset: 0x294
	// Line 768, Address: 0x275718, Func Offset: 0x298
	// Line 769, Address: 0x27571c, Func Offset: 0x29c
	// Line 770, Address: 0x275720, Func Offset: 0x2a0
	// Line 771, Address: 0x275724, Func Offset: 0x2a4
	// Line 772, Address: 0x275728, Func Offset: 0x2a8
	// Line 773, Address: 0x27572c, Func Offset: 0x2ac
	// Line 774, Address: 0x275730, Func Offset: 0x2b0
	// Line 775, Address: 0x275734, Func Offset: 0x2b4
	// Line 776, Address: 0x275738, Func Offset: 0x2b8
	// Line 778, Address: 0x27573c, Func Offset: 0x2bc
	// Line 779, Address: 0x275740, Func Offset: 0x2c0
	// Line 780, Address: 0x275744, Func Offset: 0x2c4
	// Line 781, Address: 0x275748, Func Offset: 0x2c8
	// Line 782, Address: 0x27574c, Func Offset: 0x2cc
	// Line 783, Address: 0x275750, Func Offset: 0x2d0
	// Line 784, Address: 0x275754, Func Offset: 0x2d4
	// Line 785, Address: 0x275758, Func Offset: 0x2d8
	// Line 786, Address: 0x27575c, Func Offset: 0x2dc
	// Line 787, Address: 0x275760, Func Offset: 0x2e0
	// Line 788, Address: 0x275764, Func Offset: 0x2e4
	// Line 789, Address: 0x275768, Func Offset: 0x2e8
	// Line 790, Address: 0x27576c, Func Offset: 0x2ec
	// Line 791, Address: 0x275770, Func Offset: 0x2f0
	// Line 792, Address: 0x275774, Func Offset: 0x2f4
	// Line 793, Address: 0x275778, Func Offset: 0x2f8
	// Line 794, Address: 0x27577c, Func Offset: 0x2fc
	// Line 795, Address: 0x275780, Func Offset: 0x300
	// Line 796, Address: 0x275784, Func Offset: 0x304
	// Line 797, Address: 0x275788, Func Offset: 0x308
	// Line 798, Address: 0x27578c, Func Offset: 0x30c
	// Line 801, Address: 0x275794, Func Offset: 0x314
	// Line 804, Address: 0x27579c, Func Offset: 0x31c
	// Line 805, Address: 0x2757a0, Func Offset: 0x320
	// Line 806, Address: 0x2757a4, Func Offset: 0x324
	// Line 807, Address: 0x2757a8, Func Offset: 0x328
	// Line 808, Address: 0x2757ac, Func Offset: 0x32c
	// Line 809, Address: 0x2757b0, Func Offset: 0x330
	// Line 810, Address: 0x2757b4, Func Offset: 0x334
	// Line 811, Address: 0x2757b8, Func Offset: 0x338
	// Line 812, Address: 0x2757bc, Func Offset: 0x33c
	// Line 813, Address: 0x2757c0, Func Offset: 0x340
	// Line 814, Address: 0x2757c4, Func Offset: 0x344
	// Line 815, Address: 0x2757c8, Func Offset: 0x348
	// Line 816, Address: 0x2757cc, Func Offset: 0x34c
	// Line 817, Address: 0x2757d0, Func Offset: 0x350
	// Line 818, Address: 0x2757d4, Func Offset: 0x354
	// Line 819, Address: 0x2757d8, Func Offset: 0x358
	// Line 820, Address: 0x2757dc, Func Offset: 0x35c
	// Line 822, Address: 0x2757e0, Func Offset: 0x360
	// Line 823, Address: 0x2757e4, Func Offset: 0x364
	// Line 825, Address: 0x2757ec, Func Offset: 0x36c
	// Line 826, Address: 0x2757f0, Func Offset: 0x370
	// Line 827, Address: 0x2757f4, Func Offset: 0x374
	// Line 828, Address: 0x2757f8, Func Offset: 0x378
	// Line 830, Address: 0x2757fc, Func Offset: 0x37c
	// Line 831, Address: 0x275800, Func Offset: 0x380
	// Line 832, Address: 0x275804, Func Offset: 0x384
	// Line 833, Address: 0x275808, Func Offset: 0x388
	// Line 834, Address: 0x27580c, Func Offset: 0x38c
	// Line 835, Address: 0x275810, Func Offset: 0x390
	// Line 836, Address: 0x275814, Func Offset: 0x394
	// Line 837, Address: 0x275818, Func Offset: 0x398
	// Line 838, Address: 0x27581c, Func Offset: 0x39c
	// Line 839, Address: 0x275820, Func Offset: 0x3a0
	// Line 840, Address: 0x275828, Func Offset: 0x3a8
	// Line 841, Address: 0x27582c, Func Offset: 0x3ac
	// Line 842, Address: 0x275830, Func Offset: 0x3b0
	// Line 843, Address: 0x275834, Func Offset: 0x3b4
	// Line 844, Address: 0x275838, Func Offset: 0x3b8
	// Line 845, Address: 0x27583c, Func Offset: 0x3bc
	// Line 849, Address: 0x275844, Func Offset: 0x3c4
	// Line 850, Address: 0x275848, Func Offset: 0x3c8
	// Line 851, Address: 0x27584c, Func Offset: 0x3cc
	// Line 852, Address: 0x275850, Func Offset: 0x3d0
	// Line 853, Address: 0x275854, Func Offset: 0x3d4
	// Line 854, Address: 0x275858, Func Offset: 0x3d8
	// Line 855, Address: 0x27585c, Func Offset: 0x3dc
	// Line 856, Address: 0x275860, Func Offset: 0x3e0
	// Line 858, Address: 0x275868, Func Offset: 0x3e8
	// Line 861, Address: 0x27586c, Func Offset: 0x3ec
	// Line 862, Address: 0x275870, Func Offset: 0x3f0
	// Line 870, Address: 0x275878, Func Offset: 0x3f8
	// Func End, Address: 0x275894, Func Offset: 0x414
}

