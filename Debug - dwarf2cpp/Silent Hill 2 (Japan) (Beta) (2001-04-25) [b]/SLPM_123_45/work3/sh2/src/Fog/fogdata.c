typedef struct FOG_COLIS_WALL2;
typedef struct FOG_OBJ_DATA;
typedef struct FOG_AREA_DATA;
typedef struct _anon0;
typedef struct FOG_PART_DATA;
typedef struct _anon1;
typedef struct FOG_WALL_DATA;
typedef struct Model_List;
typedef struct FOG_WORK;
typedef struct _anon2;
typedef struct _anon3;
typedef struct FOG_COLIS_WALL;
typedef struct FOG_COLIS_HEAD;
typedef struct FOG_ENV_DATA;

typedef void(*type_0)();
typedef int(*type_1)();

typedef FOG_PART_DATA type_2[700];
typedef float type_3[4][8];
typedef float type_4[4][8][8];
typedef float type_5[4][8][8][8];
typedef unsigned short type_6[5120];
typedef float type_7[8];
typedef float type_8[8][8];
typedef float type_9[8][8][8];
typedef FOG_WALL_DATA type_10[60];
typedef FOG_OBJ_DATA type_11[168];
typedef float type_12[4];
typedef float type_13[4];
typedef float type_14[4];
typedef float type_15[4][4];

struct FOG_COLIS_WALL2
{
	short x0;
	short y0;
	short z0;
	short x1;
	short y1;
	short z1;
	short x2;
	short y2;
	short z2;
	short x3;
	short y3;
	short z3;
};

struct FOG_OBJ_DATA
{
	float pos[4];
	float mv[4];
	int type;
	float rer;
	unsigned long id;
};

struct FOG_AREA_DATA
{
	short x0;
	short z0;
	short x1;
	short z1;
	unsigned short env;
};

struct _anon0
{
	int flag;
	int cond;
	int rslt0;
	int rslt1;
};

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

struct _anon1
{
	float pos_x;
	float pos_z;
	unsigned short pos_y;
	unsigned short rot_y;
	unsigned int st;
};

struct FOG_WALL_DATA
{
	float normal[4];
	float v0[4];
	float min[4];
	float max[4];
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

struct FOG_WORK
{
	FOG_PART_DATA Part[700];
	float GridWindV[4][8][8][8];
	float GridDense[8][8][8];
	FOG_WALL_DATA Wall[60];
	FOG_OBJ_DATA Obj[168];
	float WorldScreenM[4][4];
	float WorldViewM[4][4];
	float CameraPosV[4];
	float WorldPosV[4];
	float LocalPosV[4];
	float MapPosV[4];
	float LightPosV[4];
	float WindV[4];
	float fewdense[4];
	float LimitY;
	float LimitY2;
	float WaterY;
	float SpeedLevel;
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
	FOG_COLIS_HEAD* ColisHead;
	FOG_AREA_DATA* AreaTop;
	FOG_ENV_DATA* EnvTop;
	FOG_ENV_DATA* EnvNow;
};

struct _anon2
{
	_anon0* ev_list;
	unsigned char* ev_pos;
	int(*ev_prog)();
	_anon1* gi_list;
	Model_List* mdl_list;
	_anon3* en_list;
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
	short kind;
	short id;
	int pos_x;
	int pos_z;
	short pos_y;
	short rot_y;
	short status;
	short condition;
};

struct FOG_COLIS_WALL
{
	short x0;
	short y0;
	short z0;
	short x1;
	short y1;
	short z1;
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

FOG_ENV_DATA fog_defset_data;
FOG_WORK fwork;
unsigned short fog_colis_data[5120];
_anon2* stage;

void fogSetCollision();
void fogSetCollisionMain();
void fogSetAreaEnvironment();

// 
// Start address: 0x1717b0
void fogSetCollision()
{
	// Line 471, Address: 0x1717b0, Func Offset: 0
	// Line 473, Address: 0x1717b8, Func Offset: 0x8
	// Line 474, Address: 0x1717dc, Func Offset: 0x2c
	// Line 475, Address: 0x1717f4, Func Offset: 0x44
	// Line 476, Address: 0x171804, Func Offset: 0x54
	// Line 477, Address: 0x17180c, Func Offset: 0x5c
	// Line 478, Address: 0x171814, Func Offset: 0x64
	// Line 479, Address: 0x17181c, Func Offset: 0x6c
	// Line 480, Address: 0x17182c, Func Offset: 0x7c
	// Line 482, Address: 0x171870, Func Offset: 0xc0
	// Line 483, Address: 0x17188c, Func Offset: 0xdc
	// Line 485, Address: 0x171894, Func Offset: 0xe4
	// Line 486, Address: 0x1718b0, Func Offset: 0x100
	// Line 488, Address: 0x1718b8, Func Offset: 0x108
	// Line 489, Address: 0x1718d4, Func Offset: 0x124
	// Line 491, Address: 0x1718dc, Func Offset: 0x12c
	// Line 492, Address: 0x1718f8, Func Offset: 0x148
	// Line 494, Address: 0x171900, Func Offset: 0x150
	// Line 495, Address: 0x17190c, Func Offset: 0x15c
	// Line 496, Address: 0x171920, Func Offset: 0x170
	// Line 497, Address: 0x171930, Func Offset: 0x180
	// Line 498, Address: 0x17193c, Func Offset: 0x18c
	// Line 500, Address: 0x171944, Func Offset: 0x194
	// Line 501, Address: 0x171950, Func Offset: 0x1a0
	// Line 502, Address: 0x171974, Func Offset: 0x1c4
	// Line 503, Address: 0x171990, Func Offset: 0x1e0
	// Line 504, Address: 0x1719a4, Func Offset: 0x1f4
	// Line 505, Address: 0x1719b4, Func Offset: 0x204
	// Line 506, Address: 0x1719c0, Func Offset: 0x210
	// Line 509, Address: 0x1719c8, Func Offset: 0x218
	// Line 513, Address: 0x1719d0, Func Offset: 0x220
	// Line 514, Address: 0x171a24, Func Offset: 0x274
	// Line 516, Address: 0x171a2c, Func Offset: 0x27c
	// Func End, Address: 0x171a3c, Func Offset: 0x28c
}

// 
// Start address: 0x171a40
void fogSetCollisionMain()
{
	FOG_COLIS_HEAD* ch;
	FOG_WALL_DATA* pw;
	float* pos;
	float wall[4];
	float* pobj;
	FOG_COLIS_WALL2* w2;
	FOG_COLIS_WALL* w1;
	float limf;
	float dzf;
	float dxf;
	int dz;
	int dx;
	int max;
	int wz;
	int wx;
	float* wp;
	FOG_OBJ_DATA* od2;
	FOG_OBJ_DATA* od;
	int i;
	// Line 520, Address: 0x171a40, Func Offset: 0
	// Line 523, Address: 0x171a70, Func Offset: 0x30
	// Line 529, Address: 0x171a78, Func Offset: 0x38
	// Line 530, Address: 0x171a80, Func Offset: 0x40
	// Line 532, Address: 0x171a88, Func Offset: 0x48
	// Line 533, Address: 0x171a94, Func Offset: 0x54
	// Line 534, Address: 0x171aac, Func Offset: 0x6c
	// Line 535, Address: 0x171ac4, Func Offset: 0x84
	// Line 537, Address: 0x171ad4, Func Offset: 0x94
	// Line 538, Address: 0x171adc, Func Offset: 0x9c
	// Line 539, Address: 0x171ae4, Func Offset: 0xa4
	// Line 540, Address: 0x171ae8, Func Offset: 0xa8
	// Line 541, Address: 0x171af8, Func Offset: 0xb8
	// Line 542, Address: 0x171b1c, Func Offset: 0xdc
	// Line 543, Address: 0x171b24, Func Offset: 0xe4
	// Line 544, Address: 0x171b34, Func Offset: 0xf4
	// Line 545, Address: 0x171b38, Func Offset: 0xf8
	// Line 546, Address: 0x171b3c, Func Offset: 0xfc
	// Line 548, Address: 0x171b44, Func Offset: 0x104
	// Line 549, Address: 0x171b48, Func Offset: 0x108
	// Line 550, Address: 0x171b4c, Func Offset: 0x10c
	// Line 551, Address: 0x171b50, Func Offset: 0x110
	// Line 552, Address: 0x171b54, Func Offset: 0x114
	// Line 553, Address: 0x171b58, Func Offset: 0x118
	// Line 556, Address: 0x171b5c, Func Offset: 0x11c
	// Line 557, Address: 0x171b64, Func Offset: 0x124
	// Line 558, Address: 0x171b68, Func Offset: 0x128
	// Line 559, Address: 0x171b6c, Func Offset: 0x12c
	// Line 560, Address: 0x171b70, Func Offset: 0x130
	// Line 561, Address: 0x171b7c, Func Offset: 0x13c
	// Line 563, Address: 0x171b84, Func Offset: 0x144
	// Line 564, Address: 0x171b90, Func Offset: 0x150
	// Line 566, Address: 0x171b98, Func Offset: 0x158
	// Line 567, Address: 0x171ba4, Func Offset: 0x164
	// Line 568, Address: 0x171bb4, Func Offset: 0x174
	// Line 569, Address: 0x171bc4, Func Offset: 0x184
	// Line 570, Address: 0x171be0, Func Offset: 0x1a0
	// Line 571, Address: 0x171bf0, Func Offset: 0x1b0
	// Line 572, Address: 0x171c00, Func Offset: 0x1c0
	// Line 575, Address: 0x171c1c, Func Offset: 0x1dc
	// Line 576, Address: 0x171c20, Func Offset: 0x1e0
	// Line 577, Address: 0x171c54, Func Offset: 0x214
	// Line 578, Address: 0x171c88, Func Offset: 0x248
	// Line 579, Address: 0x171cbc, Func Offset: 0x27c
	// Line 580, Address: 0x171cf0, Func Offset: 0x2b0
	// Line 581, Address: 0x171d24, Func Offset: 0x2e4
	// Line 582, Address: 0x171d58, Func Offset: 0x318
	// Line 583, Address: 0x171d84, Func Offset: 0x344
	// Line 584, Address: 0x171d90, Func Offset: 0x350
	// Line 585, Address: 0x171d98, Func Offset: 0x358
	// Line 586, Address: 0x171da0, Func Offset: 0x360
	// Line 588, Address: 0x171db4, Func Offset: 0x374
	// Line 590, Address: 0x171dc0, Func Offset: 0x380
	// Line 591, Address: 0x171dcc, Func Offset: 0x38c
	// Line 592, Address: 0x171ddc, Func Offset: 0x39c
	// Line 593, Address: 0x171dec, Func Offset: 0x3ac
	// Line 594, Address: 0x171e08, Func Offset: 0x3c8
	// Line 595, Address: 0x171e18, Func Offset: 0x3d8
	// Line 596, Address: 0x171e28, Func Offset: 0x3e8
	// Line 597, Address: 0x171e44, Func Offset: 0x404
	// Line 598, Address: 0x171e54, Func Offset: 0x414
	// Line 599, Address: 0x171e64, Func Offset: 0x424
	// Line 600, Address: 0x171e80, Func Offset: 0x440
	// Line 601, Address: 0x171e90, Func Offset: 0x450
	// Line 602, Address: 0x171ea0, Func Offset: 0x460
	// Line 605, Address: 0x171ebc, Func Offset: 0x47c
	// Line 608, Address: 0x171ec0, Func Offset: 0x480
	// Line 609, Address: 0x171ef0, Func Offset: 0x4b0
	// Line 610, Address: 0x171f20, Func Offset: 0x4e0
	// Line 611, Address: 0x171f50, Func Offset: 0x510
	// Line 612, Address: 0x171f80, Func Offset: 0x540
	// Line 613, Address: 0x171fb0, Func Offset: 0x570
	// Line 614, Address: 0x171fe0, Func Offset: 0x5a0
	// Line 615, Address: 0x172010, Func Offset: 0x5d0
	// Line 616, Address: 0x172040, Func Offset: 0x600
	// Line 617, Address: 0x172070, Func Offset: 0x630
	// Line 618, Address: 0x1720a0, Func Offset: 0x660
	// Line 619, Address: 0x1720d0, Func Offset: 0x690
	// Line 620, Address: 0x172100, Func Offset: 0x6c0
	// Line 621, Address: 0x17212c, Func Offset: 0x6ec
	// Line 622, Address: 0x172138, Func Offset: 0x6f8
	// Line 623, Address: 0x172144, Func Offset: 0x704
	// Line 624, Address: 0x17214c, Func Offset: 0x70c
	// Line 626, Address: 0x172164, Func Offset: 0x724
	// Line 628, Address: 0x172170, Func Offset: 0x730
	// Line 629, Address: 0x17217c, Func Offset: 0x73c
	// Line 630, Address: 0x172188, Func Offset: 0x748
	// Line 631, Address: 0x172194, Func Offset: 0x754
	// Line 632, Address: 0x1721a0, Func Offset: 0x760
	// Line 633, Address: 0x1721bc, Func Offset: 0x77c
	// Line 634, Address: 0x1721c4, Func Offset: 0x784
	// Line 635, Address: 0x1721cc, Func Offset: 0x78c
	// Line 636, Address: 0x1721d4, Func Offset: 0x794
	// Line 638, Address: 0x1721f0, Func Offset: 0x7b0
	// Line 640, Address: 0x172204, Func Offset: 0x7c4
	// Line 641, Address: 0x172210, Func Offset: 0x7d0
	// Line 642, Address: 0x17221c, Func Offset: 0x7dc
	// Line 643, Address: 0x172228, Func Offset: 0x7e8
	// Line 644, Address: 0x172234, Func Offset: 0x7f4
	// Line 645, Address: 0x172250, Func Offset: 0x810
	// Line 646, Address: 0x172258, Func Offset: 0x818
	// Line 647, Address: 0x172260, Func Offset: 0x820
	// Line 648, Address: 0x172268, Func Offset: 0x828
	// Line 649, Address: 0x172284, Func Offset: 0x844
	// Line 650, Address: 0x172288, Func Offset: 0x848
	// Line 651, Address: 0x17229c, Func Offset: 0x85c
	// Line 653, Address: 0x1722ac, Func Offset: 0x86c
	// Line 654, Address: 0x1722b4, Func Offset: 0x874
	// Line 655, Address: 0x1722c4, Func Offset: 0x884
	// Line 657, Address: 0x1722f0, Func Offset: 0x8b0
	// Func End, Address: 0x172328, Func Offset: 0x8e8
}

// 
// Start address: 0x172330
void fogSetAreaEnvironment()
{
	FOG_AREA_DATA* pa;
	short wz;
	short wx;
	int max;
	int i;
	// Line 661, Address: 0x172330, Func Offset: 0
	// Line 663, Address: 0x172338, Func Offset: 0x8
	// Line 664, Address: 0x172348, Func Offset: 0x18
	// Line 665, Address: 0x172370, Func Offset: 0x40
	// Line 666, Address: 0x172398, Func Offset: 0x68
	// Line 667, Address: 0x1723a0, Func Offset: 0x70
	// Line 668, Address: 0x1723ac, Func Offset: 0x7c
	// Line 669, Address: 0x17242c, Func Offset: 0xfc
	// Line 670, Address: 0x172454, Func Offset: 0x124
	// Line 672, Address: 0x17245c, Func Offset: 0x12c
	// Line 673, Address: 0x17246c, Func Offset: 0x13c
	// Line 674, Address: 0x17247c, Func Offset: 0x14c
	// Func End, Address: 0x17248c, Func Offset: 0x15c
}

