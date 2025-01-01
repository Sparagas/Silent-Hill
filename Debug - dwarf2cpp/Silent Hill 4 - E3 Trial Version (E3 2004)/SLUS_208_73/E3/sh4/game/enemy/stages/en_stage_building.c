typedef struct EnemyAreaBox;
typedef struct EventFlag;
typedef enum EnemyKind : unsigned char;


typedef float type_0[4][2];
typedef unsigned char type_1[320];
typedef float type_2[4][3];
typedef float type_3[4];

struct EnemyAreaBox
{
	float x_mini;
	float y_mini;
	float z_mini;
	float x_max;
	float y_max;
	float z_max;
};

struct EventFlag
{
	unsigned char flag[320];
};

enum EnemyKind : unsigned char
{
	ENEMY_KIND_NOTHING,
	ENEMY_KIND_CELL,
	ENEMY_KIND_MUSH,
	ENEMY_KIND_BUZZ,
	ENEMY_KIND_MM,
	ENEMY_KIND_WALLMAN,
	ENEMY_KIND_WHEEL,
	ENEMY_KIND_JINMEN,
	ENEMY_KIND_TWINS,
	ENEMY_KIND_HIL,
	ENEMY_KIND_HYENA,
	ENEMY_KIND_MULTI,
	ENEMY_KIND_PICKGIRL,
	ENEMY_KIND_FLAMES,
	ENEMY_KIND_FAT,
	ENEMY_KIND_SCRATCH,
	ENEMY_KIND_KILLER,
	ENEMY_KIND_NURSE,
	ENEMY_KIND_SAMPLE,
	ENEMY_KIND_MAX,
	ENEMY_KIND_TEST00 = 0,
	ENEMY_KIND_ALL = 0x13
};

EnemyAreaBox do_not_enter_bd01;
EnemyAreaBox do_not_enter_bd04a;
EnemyAreaBox do_not_enter_bd04b;
EnemyAreaBox do_not_enter_bd04c;
EnemyAreaBox do_not_enter_bd17a;
EnemyAreaBox do_not_enter_bd17b;
EventFlag event_flag;
float bd02_lost_item_pos[4][2];
float bd18_lost_item_pos[4][3];

int EnemyStageBuildingGetFloorNumber(int scene);
int EnemyStageBuildingGetPartitionInScene(float* pos, int scene);
float EnemyStageBuildingGetBottomHeightInScene(int scene);
float EnemyStageBuildingGetAbyssHeightInScene(int scene);
int EnemyStageBuildingCheckInMovableRangeInScene();
EnemyAreaBox* EnemyStageBuildingDoNotEnterArea(int scene, int index);
int EnemyStageBuildingMayShowShadowInScene(int scene, EnemyKind kind);
float EnemyStageBuildingGetGhostWaitTime(int scene);
float EnemyStageBuildingGetWallThickness();
int EnemyStageBuildingGetLostItemPosNum(int scene);
void EnemyStageBuildingGetLostItemPos(int num, float* pos, int scene);
int EnemyStageBuildingCheckUseTexInScene(int texid, int scene);

// 
// Start address: 0x1ed4320
int EnemyStageBuildingGetFloorNumber(int scene)
{
	int r;
	// Line 20, Address: 0x1ed4320, Func Offset: 0
	// Line 22, Address: 0x1ed4334, Func Offset: 0x14
	// Line 23, Address: 0x1ed4344, Func Offset: 0x24
	// Line 33, Address: 0x1ed4388, Func Offset: 0x68
	// Line 34, Address: 0x1ed4390, Func Offset: 0x70
	// Line 38, Address: 0x1ed43f4, Func Offset: 0xd4
	// Line 40, Address: 0x1ed43f8, Func Offset: 0xd8
	// Line 46, Address: 0x1ed4400, Func Offset: 0xe0
	// Line 49, Address: 0x1ed4404, Func Offset: 0xe4
	// Line 50, Address: 0x1ed4408, Func Offset: 0xe8
	// Line 51, Address: 0x1ed440c, Func Offset: 0xec
	// Func End, Address: 0x1ed4420, Func Offset: 0x100
	// Line 111, Address: 0x1ed4320, Func Offset: 0
	// Line 113, Address: 0x1ed432c, Func Offset: 0xc
	// Line 114, Address: 0x1ed433c, Func Offset: 0x1c
	// Line 115, Address: 0x1ed4348, Func Offset: 0x28
	// Line 114, Address: 0x1ed434c, Func Offset: 0x2c
	// Line 115, Address: 0x1ed4350, Func Offset: 0x30
	// Line 116, Address: 0x1ed4358, Func Offset: 0x38
	// Line 117, Address: 0x1ed4360, Func Offset: 0x40
	// Line 118, Address: 0x1ed4370, Func Offset: 0x50
	// Line 119, Address: 0x1ed437c, Func Offset: 0x5c
	// Line 120, Address: 0x1ed4380, Func Offset: 0x60
	// Line 121, Address: 0x1ed438c, Func Offset: 0x6c
	// Line 122, Address: 0x1ed4398, Func Offset: 0x78
	// Line 124, Address: 0x1ed43a4, Func Offset: 0x84
	// Line 123, Address: 0x1ed43a8, Func Offset: 0x88
	// Line 124, Address: 0x1ed43ac, Func Offset: 0x8c
	// Func End, Address: 0x1ed43b8, Func Offset: 0x98
}

// 
// Start address: 0x1ed4420
int EnemyStageBuildingGetPartitionInScene(float* pos, int scene)
{
	int r;
	// Line 61, Address: 0x1ed4420, Func Offset: 0
	// Line 62, Address: 0x1ed4434, Func Offset: 0x14
	// Line 63, Address: 0x1ed4438, Func Offset: 0x18
	// Line 65, Address: 0x1ed4454, Func Offset: 0x34
	// Line 67, Address: 0x1ed447c, Func Offset: 0x5c
	// Line 68, Address: 0x1ed4488, Func Offset: 0x68
	// Line 71, Address: 0x1ed448c, Func Offset: 0x6c
	// Line 73, Address: 0x1ed4490, Func Offset: 0x70
	// Func End, Address: 0x1ed4498, Func Offset: 0x78
}

// 
// Start address: 0x1ed44a0
float EnemyStageBuildingGetBottomHeightInScene(int scene)
{
	float r;
	// Line 82, Address: 0x1ed44a0, Func Offset: 0
	// Line 81, Address: 0x1ed44a4, Func Offset: 0x4
	// Line 82, Address: 0x1ed44a8, Func Offset: 0x8
	// Line 84, Address: 0x1ed4524, Func Offset: 0x84
	// Line 85, Address: 0x1ed4528, Func Offset: 0x88
	// Line 86, Address: 0x1ed4530, Func Offset: 0x90
	// Line 92, Address: 0x1ed4538, Func Offset: 0x98
	// Line 93, Address: 0x1ed4540, Func Offset: 0xa0
	// Line 96, Address: 0x1ed4548, Func Offset: 0xa8
	// Line 97, Address: 0x1ed4550, Func Offset: 0xb0
	// Line 99, Address: 0x1ed4558, Func Offset: 0xb8
	// Line 100, Address: 0x1ed4560, Func Offset: 0xc0
	// Line 102, Address: 0x1ed4568, Func Offset: 0xc8
	// Line 103, Address: 0x1ed4570, Func Offset: 0xd0
	// Line 105, Address: 0x1ed4578, Func Offset: 0xd8
	// Line 109, Address: 0x1ed4580, Func Offset: 0xe0
	// Func End, Address: 0x1ed4588, Func Offset: 0xe8
	// Line 156, Address: 0x1ed44a0, Func Offset: 0
	// Line 158, Address: 0x1ed44b0, Func Offset: 0x10
	// Line 160, Address: 0x1ed44b8, Func Offset: 0x18
	// Line 161, Address: 0x1ed44c8, Func Offset: 0x28
	// Line 162, Address: 0x1ed44cc, Func Offset: 0x2c
	// Line 163, Address: 0x1ed44d4, Func Offset: 0x34
	// Line 164, Address: 0x1ed44e8, Func Offset: 0x48
	// Line 165, Address: 0x1ed4514, Func Offset: 0x74
	// Line 166, Address: 0x1ed4518, Func Offset: 0x78
	// Line 167, Address: 0x1ed4520, Func Offset: 0x80
	// Line 169, Address: 0x1ed4528, Func Offset: 0x88
	// Line 170, Address: 0x1ed4530, Func Offset: 0x90
	// Line 173, Address: 0x1ed4538, Func Offset: 0x98
	// Line 175, Address: 0x1ed4544, Func Offset: 0xa4
	// Line 176, Address: 0x1ed4548, Func Offset: 0xa8
	// Line 178, Address: 0x1ed4550, Func Offset: 0xb0
	// Line 180, Address: 0x1ed4558, Func Offset: 0xb8
	// Func End, Address: 0x1ed456c, Func Offset: 0xcc
}

// 
// Start address: 0x1ed4590
float EnemyStageBuildingGetAbyssHeightInScene(int scene)
{
	// Line 287, Address: 0x1ed4590, Func Offset: 0
	// Line 278, Address: 0x1ed4594, Func Offset: 0x4
	// Line 287, Address: 0x1ed4598, Func Offset: 0x8
	// Line 278, Address: 0x1ed459c, Func Offset: 0xc
	// Line 287, Address: 0x1ed45a0, Func Offset: 0x10
	// Line 296, Address: 0x1ed45a4, Func Offset: 0x14
	// Line 287, Address: 0x1ed45a8, Func Offset: 0x18
	// Line 296, Address: 0x1ed45ac, Func Offset: 0x1c
	// Line 287, Address: 0x1ed45b0, Func Offset: 0x20
	// Line 296, Address: 0x1ed45b4, Func Offset: 0x24
	// Line 287, Address: 0x1ed45b8, Func Offset: 0x28
	// Line 296, Address: 0x1ed45bc, Func Offset: 0x2c
	// Line 287, Address: 0x1ed45c0, Func Offset: 0x30
	// Line 278, Address: 0x1ed45c4, Func Offset: 0x34
	// Line 287, Address: 0x1ed45c8, Func Offset: 0x38
	// Line 292, Address: 0x1ed45cc, Func Offset: 0x3c
	// Line 296, Address: 0x1ed45d4, Func Offset: 0x44
	// Line 286, Address: 0x1ed45e4, Func Offset: 0x54
	// Line 296, Address: 0x1ed45e8, Func Offset: 0x58
	// Line 293, Address: 0x1ed45fc, Func Offset: 0x6c
	// Line 296, Address: 0x1ed4600, Func Offset: 0x70
	// Line 298, Address: 0x1ed4668, Func Offset: 0xd8
	// Line 301, Address: 0x1ed4678, Func Offset: 0xe8
	// Line 309, Address: 0x1ed4680, Func Offset: 0xf0
	// Line 311, Address: 0x1ed4688, Func Offset: 0xf8
	// Line 312, Address: 0x1ed4690, Func Offset: 0x100
	// Line 313, Address: 0x1ed4694, Func Offset: 0x104
	// Line 314, Address: 0x1ed4698, Func Offset: 0x108
	// Line 315, Address: 0x1ed46a0, Func Offset: 0x110
	// Line 316, Address: 0x1ed46ac, Func Offset: 0x11c
	// Line 317, Address: 0x1ed46b4, Func Offset: 0x124
	// Line 319, Address: 0x1ed46b8, Func Offset: 0x128
	// Line 320, Address: 0x1ed46e0, Func Offset: 0x150
	// Line 322, Address: 0x1ed46f0, Func Offset: 0x160
	// Line 324, Address: 0x1ed46f8, Func Offset: 0x168
	// Line 325, Address: 0x1ed4700, Func Offset: 0x170
	// Line 327, Address: 0x1ed471c, Func Offset: 0x18c
	// Line 331, Address: 0x1ed4758, Func Offset: 0x1c8
	// Line 333, Address: 0x1ed4760, Func Offset: 0x1d0
	// Line 336, Address: 0x1ed476c, Func Offset: 0x1dc
	// Line 337, Address: 0x1ed4774, Func Offset: 0x1e4
	// Line 338, Address: 0x1ed4790, Func Offset: 0x200
	// Line 342, Address: 0x1ed4794, Func Offset: 0x204
	// Line 338, Address: 0x1ed4798, Func Offset: 0x208
	// Line 342, Address: 0x1ed47a0, Func Offset: 0x210
	// Line 338, Address: 0x1ed47a4, Func Offset: 0x214
	// Line 342, Address: 0x1ed47ac, Func Offset: 0x21c
	// Line 338, Address: 0x1ed47b0, Func Offset: 0x220
	// Line 342, Address: 0x1ed47b4, Func Offset: 0x224
	// Line 338, Address: 0x1ed47b8, Func Offset: 0x228
	// Line 342, Address: 0x1ed47c0, Func Offset: 0x230
	// Line 339, Address: 0x1ed47c4, Func Offset: 0x234
	// Line 343, Address: 0x1ed47c8, Func Offset: 0x238
	// Line 344, Address: 0x1ed47d4, Func Offset: 0x244
	// Line 345, Address: 0x1ed47d8, Func Offset: 0x248
	// Line 350, Address: 0x1ed47dc, Func Offset: 0x24c
	// Line 351, Address: 0x1ed47e8, Func Offset: 0x258
	// Line 352, Address: 0x1ed4800, Func Offset: 0x270
	// Line 353, Address: 0x1ed4808, Func Offset: 0x278
	// Line 354, Address: 0x1ed480c, Func Offset: 0x27c
	// Line 355, Address: 0x1ed4824, Func Offset: 0x294
	// Line 356, Address: 0x1ed483c, Func Offset: 0x2ac
	// Line 357, Address: 0x1ed484c, Func Offset: 0x2bc
	// Line 359, Address: 0x1ed4868, Func Offset: 0x2d8
	// Line 357, Address: 0x1ed486c, Func Offset: 0x2dc
	// Line 360, Address: 0x1ed4894, Func Offset: 0x304
	// Func End, Address: 0x1ed48a4, Func Offset: 0x314
	// Line 117, Address: 0x1ed4590, Func Offset: 0
	// Func End, Address: 0x1ed4598, Func Offset: 0x8
}

// 
// Start address: 0x1ed45a0
int EnemyStageBuildingCheckInMovableRangeInScene()
{
	// Line 128, Address: 0x1ed45a0, Func Offset: 0
	// Func End, Address: 0x1ed45a8, Func Offset: 0x8
	// Line 200, Address: 0x1ed45a0, Func Offset: 0
	// Line 202, Address: 0x1ed45a8, Func Offset: 0x8
	// Line 203, Address: 0x1ed45b0, Func Offset: 0x10
	// Line 204, Address: 0x1ed45b8, Func Offset: 0x18
	// Func End, Address: 0x1ed45c4, Func Offset: 0x24
}

// 
// Start address: 0x1ed45b0
EnemyAreaBox* EnemyStageBuildingDoNotEnterArea(int scene, int index)
{
	EnemyAreaBox* pa;
	// Line 165, Address: 0x1ed45b0, Func Offset: 0
	// Line 167, Address: 0x1ed45b4, Func Offset: 0x4
	// Line 165, Address: 0x1ed45b8, Func Offset: 0x8
	// Line 167, Address: 0x1ed45c0, Func Offset: 0x10
	// Line 168, Address: 0x1ed45e4, Func Offset: 0x34
	// Line 169, Address: 0x1ed45e8, Func Offset: 0x38
	// Line 171, Address: 0x1ed4610, Func Offset: 0x60
	// Line 173, Address: 0x1ed4614, Func Offset: 0x64
	// Line 174, Address: 0x1ed461c, Func Offset: 0x6c
	// Line 175, Address: 0x1ed4620, Func Offset: 0x70
	// Line 176, Address: 0x1ed4644, Func Offset: 0x94
	// Line 177, Address: 0x1ed4648, Func Offset: 0x98
	// Line 178, Address: 0x1ed464c, Func Offset: 0x9c
	// Line 179, Address: 0x1ed4654, Func Offset: 0xa4
	// Line 180, Address: 0x1ed4658, Func Offset: 0xa8
	// Line 181, Address: 0x1ed465c, Func Offset: 0xac
	// Line 182, Address: 0x1ed4664, Func Offset: 0xb4
	// Line 183, Address: 0x1ed4668, Func Offset: 0xb8
	// Line 186, Address: 0x1ed466c, Func Offset: 0xbc
	// Line 187, Address: 0x1ed4674, Func Offset: 0xc4
	// Line 188, Address: 0x1ed4678, Func Offset: 0xc8
	// Line 189, Address: 0x1ed4680, Func Offset: 0xd0
	// Line 190, Address: 0x1ed4684, Func Offset: 0xd4
	// Line 191, Address: 0x1ed46ac, Func Offset: 0xfc
	// Line 194, Address: 0x1ed46b4, Func Offset: 0x104
	// Line 195, Address: 0x1ed46b8, Func Offset: 0x108
	// Line 196, Address: 0x1ed46bc, Func Offset: 0x10c
	// Func End, Address: 0x1ed46cc, Func Offset: 0x11c
	// Line 242, Address: 0x1ed45b0, Func Offset: 0
	// Func End, Address: 0x1ed45bc, Func Offset: 0xc
}

// 
// Start address: 0x1ed46d0
int EnemyStageBuildingMayShowShadowInScene(int scene, EnemyKind kind)
{
	int r;
	// Line 528, Address: 0x1ed46d0, Func Offset: 0
	// Line 529, Address: 0x1ed46e0, Func Offset: 0x10
	// Func End, Address: 0x1ed46e8, Func Offset: 0x18
	// Line 206, Address: 0x1ed46d0, Func Offset: 0
	// Line 209, Address: 0x1ed46f0, Func Offset: 0x20
	// Line 210, Address: 0x1ed4700, Func Offset: 0x30
	// Line 212, Address: 0x1ed4704, Func Offset: 0x34
	// Line 214, Address: 0x1ed4708, Func Offset: 0x38
	// Func End, Address: 0x1ed4710, Func Offset: 0x40
	// Line 230, Address: 0x1ed46d0, Func Offset: 0
	// Line 231, Address: 0x1ed46dc, Func Offset: 0xc
	// Line 232, Address: 0x1ed46ec, Func Offset: 0x1c
	// Line 233, Address: 0x1ed46f4, Func Offset: 0x24
	// Line 235, Address: 0x1ed46f8, Func Offset: 0x28
	// Line 237, Address: 0x1ed4700, Func Offset: 0x30
	// Line 239, Address: 0x1ed4708, Func Offset: 0x38
	// Line 240, Address: 0x1ed4710, Func Offset: 0x40
	// Line 241, Address: 0x1ed4718, Func Offset: 0x48
	// Func End, Address: 0x1ed4728, Func Offset: 0x58
}

// 
// Start address: 0x1ed4710
float EnemyStageBuildingGetGhostWaitTime(int scene)
{
	float r;
	// Line 221, Address: 0x1ed4710, Func Offset: 0
	// Line 224, Address: 0x1ed4714, Func Offset: 0x4
	// Line 221, Address: 0x1ed4718, Func Offset: 0x8
	// Line 223, Address: 0x1ed4720, Func Offset: 0x10
	// Line 224, Address: 0x1ed4724, Func Offset: 0x14
	// Line 226, Address: 0x1ed4748, Func Offset: 0x38
	// Line 227, Address: 0x1ed4750, Func Offset: 0x40
	// Line 229, Address: 0x1ed4758, Func Offset: 0x48
	// Line 230, Address: 0x1ed4760, Func Offset: 0x50
	// Line 232, Address: 0x1ed4768, Func Offset: 0x58
	// Line 233, Address: 0x1ed4778, Func Offset: 0x68
	// Line 234, Address: 0x1ed4788, Func Offset: 0x78
	// Line 235, Address: 0x1ed478c, Func Offset: 0x7c
	// Line 236, Address: 0x1ed4798, Func Offset: 0x88
	// Line 242, Address: 0x1ed47a0, Func Offset: 0x90
	// Line 241, Address: 0x1ed47a4, Func Offset: 0x94
	// Line 242, Address: 0x1ed47a8, Func Offset: 0x98
	// Func End, Address: 0x1ed47b4, Func Offset: 0xa4
}

// 
// Start address: 0x1ed47c0
float EnemyStageBuildingGetWallThickness()
{
	// Line 253, Address: 0x1ed47c0, Func Offset: 0
	// Line 254, Address: 0x1ed47c8, Func Offset: 0x8
	// Func End, Address: 0x1ed47d0, Func Offset: 0x10
	// Line 431, Address: 0x1ed47c0, Func Offset: 0
	// Line 432, Address: 0x1ed47c8, Func Offset: 0x8
	// Line 434, Address: 0x1ed47d0, Func Offset: 0x10
	// Line 433, Address: 0x1ed47d4, Func Offset: 0x14
	// Line 434, Address: 0x1ed47d8, Func Offset: 0x18
	// Func End, Address: 0x1ed47e0, Func Offset: 0x20
	// Line 256, Address: 0x1ed47c0, Func Offset: 0
	// Line 257, Address: 0x1ed47cc, Func Offset: 0xc
	// Line 258, Address: 0x1ed47d0, Func Offset: 0x10
	// Line 259, Address: 0x1ed47d8, Func Offset: 0x18
	// Line 261, Address: 0x1ed47e0, Func Offset: 0x20
	// Line 260, Address: 0x1ed47e4, Func Offset: 0x24
	// Line 261, Address: 0x1ed47e8, Func Offset: 0x28
	// Func End, Address: 0x1ed47f4, Func Offset: 0x34
}

// 
// Start address: 0x1ed47d0
int EnemyStageBuildingGetLostItemPosNum(int scene)
{
	int r;
	// Line 274, Address: 0x1ed47d0, Func Offset: 0
	// Line 277, Address: 0x1ed47f0, Func Offset: 0x20
	// Line 279, Address: 0x1ed47f8, Func Offset: 0x28
	// Line 281, Address: 0x1ed47fc, Func Offset: 0x2c
	// Line 283, Address: 0x1ed4800, Func Offset: 0x30
	// Func End, Address: 0x1ed4808, Func Offset: 0x38
}

// 
// Start address: 0x1ed4810
void EnemyStageBuildingGetLostItemPos(int num, float* pos, int scene)
{
	// Line 597, Address: 0x1ed4810, Func Offset: 0
	// Line 598, Address: 0x1ed4820, Func Offset: 0x10
	// Func End, Address: 0x1ed4828, Func Offset: 0x18
	// Line 292, Address: 0x1ed4810, Func Offset: 0
	// Line 293, Address: 0x1ed482c, Func Offset: 0x1c
	// Line 294, Address: 0x1ed4830, Func Offset: 0x20
	// Line 295, Address: 0x1ed4844, Func Offset: 0x34
	// Line 296, Address: 0x1ed484c, Func Offset: 0x3c
	// Line 297, Address: 0x1ed4850, Func Offset: 0x40
	// Line 298, Address: 0x1ed4864, Func Offset: 0x54
	// Line 299, Address: 0x1ed486c, Func Offset: 0x5c
	// Line 300, Address: 0x1ed4870, Func Offset: 0x60
	// Line 301, Address: 0x1ed4874, Func Offset: 0x64
	// Line 302, Address: 0x1ed4878, Func Offset: 0x68
	// Func End, Address: 0x1ed4880, Func Offset: 0x70
}

// 
// Start address: 0x1ed4880
int EnemyStageBuildingCheckUseTexInScene(int texid, int scene)
{
	int r;
	// Line 312, Address: 0x1ed4880, Func Offset: 0
	// Line 314, Address: 0x1ed48b4, Func Offset: 0x34
	// Line 316, Address: 0x1ed48b8, Func Offset: 0x38
	// Line 319, Address: 0x1ed48c0, Func Offset: 0x40
	// Line 320, Address: 0x1ed48d8, Func Offset: 0x58
	// Line 323, Address: 0x1ed48dc, Func Offset: 0x5c
	// Line 325, Address: 0x1ed48e0, Func Offset: 0x60
	// Func End, Address: 0x1ed48e8, Func Offset: 0x68
}

