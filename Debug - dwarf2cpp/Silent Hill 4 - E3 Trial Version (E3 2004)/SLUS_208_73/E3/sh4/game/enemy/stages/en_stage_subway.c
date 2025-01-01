typedef struct EnemyAreaBox;


typedef char type_0[26];
typedef char type_1[26];

struct EnemyAreaBox
{
	float x_mini;
	float y_mini;
	float z_mini;
	float x_max;
	float y_max;
	float z_max;
};

char subway_floor_number[26];
char subway_floor_number_l[26];
EnemyAreaBox do_not_enter_sb07;
EnemyAreaBox do_not_enter_sb14;
EnemyAreaBox do_not_enter_sb09;
EnemyAreaBox do_not_enter_sb09b;
EnemyAreaBox do_not_enter_sb08;

int EnemyStageSubwayGetFloorNumber(int scene);
int EnemyStageSubwayGetPartitionInScene(float* pos, int scene);
float EnemyStageSubwayGetBottomHeightInScene(int scene);
float EnemyStageSubwayGetAbyssHeightInScene(int scene);
int EnemyStageSubwayCheckInMovableRangeInScene();
EnemyAreaBox* EnemyStageSubwayDoNotEnterArea(int scene, int index);
int EnemyStageSubwayMayShowShadowInScene();
int EnemyStageSubwayCheckGhostTrap();
float EnemyStageSubwayGetWallThickness(int scene);
int EnemyStageSubwayCheckUseTexInScene(int texid, int scene);

// 
// Start address: 0x1ed41d0
int EnemyStageSubwayGetFloorNumber(int scene)
{
	// Line 79, Address: 0x1ed41d0, Func Offset: 0
	// Line 81, Address: 0x1ed41dc, Func Offset: 0xc
	// Line 85, Address: 0x1ed4210, Func Offset: 0x40
	// Func End, Address: 0x1ed4220, Func Offset: 0x50
	// Line 153, Address: 0x1ed41d0, Func Offset: 0
	// Line 158, Address: 0x1ed41d4, Func Offset: 0x4
	// Line 153, Address: 0x1ed41d8, Func Offset: 0x8
	// Line 158, Address: 0x1ed41dc, Func Offset: 0xc
	// Line 153, Address: 0x1ed41e0, Func Offset: 0x10
	// Line 158, Address: 0x1ed41f4, Func Offset: 0x24
	// Line 160, Address: 0x1ed41f8, Func Offset: 0x28
	// Line 162, Address: 0x1ed4200, Func Offset: 0x30
	// Line 164, Address: 0x1ed4208, Func Offset: 0x38
	// Line 169, Address: 0x1ed4224, Func Offset: 0x54
	// Line 164, Address: 0x1ed4228, Func Offset: 0x58
	// Line 169, Address: 0x1ed4234, Func Offset: 0x64
	// Line 171, Address: 0x1ed423c, Func Offset: 0x6c
	// Line 172, Address: 0x1ed4244, Func Offset: 0x74
	// Line 174, Address: 0x1ed4248, Func Offset: 0x78
	// Line 175, Address: 0x1ed4254, Func Offset: 0x84
	// Line 178, Address: 0x1ed4258, Func Offset: 0x88
	// Line 179, Address: 0x1ed4260, Func Offset: 0x90
	// Line 180, Address: 0x1ed4264, Func Offset: 0x94
	// Line 181, Address: 0x1ed4268, Func Offset: 0x98
	// Line 182, Address: 0x1ed4274, Func Offset: 0xa4
	// Line 185, Address: 0x1ed4278, Func Offset: 0xa8
	// Line 186, Address: 0x1ed42a4, Func Offset: 0xd4
	// Line 185, Address: 0x1ed42a8, Func Offset: 0xd8
	// Line 186, Address: 0x1ed42b4, Func Offset: 0xe4
	// Line 188, Address: 0x1ed42c8, Func Offset: 0xf8
	// Line 189, Address: 0x1ed42ec, Func Offset: 0x11c
	// Line 191, Address: 0x1ed4300, Func Offset: 0x130
	// Line 192, Address: 0x1ed4314, Func Offset: 0x144
	// Line 193, Address: 0x1ed433c, Func Offset: 0x16c
	// Line 195, Address: 0x1ed4358, Func Offset: 0x188
	// Line 196, Address: 0x1ed435c, Func Offset: 0x18c
	// Line 197, Address: 0x1ed4368, Func Offset: 0x198
	// Line 200, Address: 0x1ed436c, Func Offset: 0x19c
	// Line 201, Address: 0x1ed4384, Func Offset: 0x1b4
	// Line 204, Address: 0x1ed4394, Func Offset: 0x1c4
	// Line 203, Address: 0x1ed4398, Func Offset: 0x1c8
	// Line 204, Address: 0x1ed439c, Func Offset: 0x1cc
	// Line 203, Address: 0x1ed43a4, Func Offset: 0x1d4
	// Line 204, Address: 0x1ed43b0, Func Offset: 0x1e0
	// Line 205, Address: 0x1ed43b8, Func Offset: 0x1e8
	// Line 206, Address: 0x1ed43d0, Func Offset: 0x200
	// Line 208, Address: 0x1ed43dc, Func Offset: 0x20c
	// Line 206, Address: 0x1ed43e0, Func Offset: 0x210
	// Line 207, Address: 0x1ed43e4, Func Offset: 0x214
	// Line 208, Address: 0x1ed43f0, Func Offset: 0x220
	// Line 209, Address: 0x1ed43fc, Func Offset: 0x22c
	// Line 211, Address: 0x1ed440c, Func Offset: 0x23c
	// Func End, Address: 0x1ed442c, Func Offset: 0x25c
	// Line 210, Address: 0x1ed41d0, Func Offset: 0
	// Line 211, Address: 0x1ed41d4, Func Offset: 0x4
	// Line 210, Address: 0x1ed41d8, Func Offset: 0x8
	// Line 211, Address: 0x1ed41dc, Func Offset: 0xc
	// Line 213, Address: 0x1ed41e8, Func Offset: 0x18
	// Line 215, Address: 0x1ed41f0, Func Offset: 0x20
	// Func End, Address: 0x1ed41fc, Func Offset: 0x2c
	// Line 147, Address: 0x1ed41d0, Func Offset: 0
	// Line 148, Address: 0x1ed41d4, Func Offset: 0x4
	// Line 150, Address: 0x1ed41e8, Func Offset: 0x18
	// Line 153, Address: 0x1ed41f8, Func Offset: 0x28
	// Func End, Address: 0x1ed4204, Func Offset: 0x34
}

// 
// Start address: 0x1ed4220
int EnemyStageSubwayGetPartitionInScene(float* pos, int scene)
{
	int r;
	// Line 95, Address: 0x1ed4220, Func Offset: 0
	// Line 97, Address: 0x1ed4240, Func Offset: 0x20
	// Line 99, Address: 0x1ed4260, Func Offset: 0x40
	// Line 102, Address: 0x1ed4268, Func Offset: 0x48
	// Line 104, Address: 0x1ed4270, Func Offset: 0x50
	// Line 106, Address: 0x1ed4288, Func Offset: 0x68
	// Line 107, Address: 0x1ed4290, Func Offset: 0x70
	// Line 109, Address: 0x1ed4294, Func Offset: 0x74
	// Line 111, Address: 0x1ed4298, Func Offset: 0x78
	// Func End, Address: 0x1ed42a0, Func Offset: 0x80
}

// 
// Start address: 0x1ed42a0
float EnemyStageSubwayGetBottomHeightInScene(int scene)
{
	float h;
	// Line 120, Address: 0x1ed42a0, Func Offset: 0
	// Line 119, Address: 0x1ed42a4, Func Offset: 0x4
	// Line 120, Address: 0x1ed42a8, Func Offset: 0x8
	// Line 122, Address: 0x1ed42b8, Func Offset: 0x18
	// Line 124, Address: 0x1ed42c4, Func Offset: 0x24
	// Line 126, Address: 0x1ed42c8, Func Offset: 0x28
	// Func End, Address: 0x1ed42d0, Func Offset: 0x30
	// Line 243, Address: 0x1ed42a0, Func Offset: 0
	// Line 244, Address: 0x1ed42a4, Func Offset: 0x4
	// Line 243, Address: 0x1ed42a8, Func Offset: 0x8
	// Line 244, Address: 0x1ed42ac, Func Offset: 0xc
	// Line 245, Address: 0x1ed42b8, Func Offset: 0x18
	// Line 246, Address: 0x1ed42c4, Func Offset: 0x24
	// Line 247, Address: 0x1ed42cc, Func Offset: 0x2c
	// Line 248, Address: 0x1ed42d0, Func Offset: 0x30
	// Func End, Address: 0x1ed42dc, Func Offset: 0x3c
}

// 
// Start address: 0x1ed42d0
float EnemyStageSubwayGetAbyssHeightInScene(int scene)
{
	float h;
	// Line 135, Address: 0x1ed42d0, Func Offset: 0
	// Line 134, Address: 0x1ed42d4, Func Offset: 0x4
	// Line 135, Address: 0x1ed42d8, Func Offset: 0x8
	// Line 137, Address: 0x1ed42e8, Func Offset: 0x18
	// Line 139, Address: 0x1ed42f4, Func Offset: 0x24
	// Line 141, Address: 0x1ed42f8, Func Offset: 0x28
	// Func End, Address: 0x1ed4300, Func Offset: 0x30
	// Line 208, Address: 0x1ed42d0, Func Offset: 0
	// Line 212, Address: 0x1ed4304, Func Offset: 0x34
	// Line 213, Address: 0x1ed4308, Func Offset: 0x38
	// Line 215, Address: 0x1ed430c, Func Offset: 0x3c
	// Line 217, Address: 0x1ed4310, Func Offset: 0x40
	// Func End, Address: 0x1ed4318, Func Offset: 0x48
}

// 
// Start address: 0x1ed4300
int EnemyStageSubwayCheckInMovableRangeInScene()
{
	// Line 151, Address: 0x1ed4300, Func Offset: 0
	// Func End, Address: 0x1ed4308, Func Offset: 0x8
	// Line 300, Address: 0x1ed4300, Func Offset: 0
	// Line 304, Address: 0x1ed4338, Func Offset: 0x38
	// Line 309, Address: 0x1ed4340, Func Offset: 0x40
	// Line 305, Address: 0x1ed4344, Func Offset: 0x44
	// Line 307, Address: 0x1ed4350, Func Offset: 0x50
	// Line 314, Address: 0x1ed4358, Func Offset: 0x58
	// Line 311, Address: 0x1ed4368, Func Offset: 0x68
	// Line 314, Address: 0x1ed436c, Func Offset: 0x6c
	// Line 315, Address: 0x1ed4374, Func Offset: 0x74
	// Line 316, Address: 0x1ed437c, Func Offset: 0x7c
	// Line 318, Address: 0x1ed4388, Func Offset: 0x88
	// Line 320, Address: 0x1ed4394, Func Offset: 0x94
	// Line 318, Address: 0x1ed4398, Func Offset: 0x98
	// Line 320, Address: 0x1ed439c, Func Offset: 0x9c
	// Line 318, Address: 0x1ed43a0, Func Offset: 0xa0
	// Line 320, Address: 0x1ed43a4, Func Offset: 0xa4
	// Line 318, Address: 0x1ed43a8, Func Offset: 0xa8
	// Line 316, Address: 0x1ed43ac, Func Offset: 0xac
	// Line 318, Address: 0x1ed43b0, Func Offset: 0xb0
	// Line 320, Address: 0x1ed43bc, Func Offset: 0xbc
	// Line 330, Address: 0x1ed43c0, Func Offset: 0xc0
	// Line 325, Address: 0x1ed43c4, Func Offset: 0xc4
	// Line 327, Address: 0x1ed43cc, Func Offset: 0xcc
	// Line 326, Address: 0x1ed43d4, Func Offset: 0xd4
	// Line 327, Address: 0x1ed43d8, Func Offset: 0xd8
	// Line 328, Address: 0x1ed43e4, Func Offset: 0xe4
	// Line 329, Address: 0x1ed43ec, Func Offset: 0xec
	// Line 330, Address: 0x1ed4400, Func Offset: 0x100
	// Line 331, Address: 0x1ed4404, Func Offset: 0x104
	// Line 337, Address: 0x1ed4408, Func Offset: 0x108
	// Line 338, Address: 0x1ed4410, Func Offset: 0x110
	// Line 339, Address: 0x1ed4428, Func Offset: 0x128
	// Line 340, Address: 0x1ed4434, Func Offset: 0x134
	// Line 339, Address: 0x1ed4438, Func Offset: 0x138
	// Line 340, Address: 0x1ed444c, Func Offset: 0x14c
	// Line 342, Address: 0x1ed4450, Func Offset: 0x150
	// Line 340, Address: 0x1ed4458, Func Offset: 0x158
	// Line 342, Address: 0x1ed445c, Func Offset: 0x15c
	// Line 343, Address: 0x1ed4464, Func Offset: 0x164
	// Line 344, Address: 0x1ed4474, Func Offset: 0x174
	// Func End, Address: 0x1ed44a8, Func Offset: 0x1a8
}

// 
// Start address: 0x1ed4310
EnemyAreaBox* EnemyStageSubwayDoNotEnterArea(int scene, int index)
{
	EnemyAreaBox* pa;
	// Line 186, Address: 0x1ed4310, Func Offset: 0
	// Line 188, Address: 0x1ed4358, Func Offset: 0x48
	// Line 189, Address: 0x1ed4360, Func Offset: 0x50
	// Line 191, Address: 0x1ed4364, Func Offset: 0x54
	// Line 193, Address: 0x1ed436c, Func Offset: 0x5c
	// Line 194, Address: 0x1ed4370, Func Offset: 0x60
	// Line 195, Address: 0x1ed4378, Func Offset: 0x68
	// Line 197, Address: 0x1ed437c, Func Offset: 0x6c
	// Line 199, Address: 0x1ed4384, Func Offset: 0x74
	// Line 200, Address: 0x1ed4388, Func Offset: 0x78
	// Line 201, Address: 0x1ed4390, Func Offset: 0x80
	// Line 202, Address: 0x1ed4394, Func Offset: 0x84
	// Line 203, Address: 0x1ed43ac, Func Offset: 0x9c
	// Line 205, Address: 0x1ed43b0, Func Offset: 0xa0
	// Line 207, Address: 0x1ed43b8, Func Offset: 0xa8
	// Line 208, Address: 0x1ed43c0, Func Offset: 0xb0
	// Line 213, Address: 0x1ed43c8, Func Offset: 0xb8
	// Func End, Address: 0x1ed43d0, Func Offset: 0xc0
}

// 
// Start address: 0x1ed43d0
int EnemyStageSubwayMayShowShadowInScene()
{
	// Line 230, Address: 0x1ed43d0, Func Offset: 0
	// Func End, Address: 0x1ed43d8, Func Offset: 0x8
}

// 
// Start address: 0x1ed43e0
int EnemyStageSubwayCheckGhostTrap()
{
	// Line 241, Address: 0x1ed43e0, Func Offset: 0
	// Func End, Address: 0x1ed43e8, Func Offset: 0x8
	// Line 136, Address: 0x1ed43e0, Func Offset: 0
	// Line 137, Address: 0x1ed43e4, Func Offset: 0x4
	// Line 136, Address: 0x1ed43e8, Func Offset: 0x8
	// Line 137, Address: 0x1ed43f0, Func Offset: 0x10
	// Line 139, Address: 0x1ed4400, Func Offset: 0x20
	// Line 142, Address: 0x1ed4408, Func Offset: 0x28
	// Line 143, Address: 0x1ed440c, Func Offset: 0x2c
	// Line 145, Address: 0x1ed4410, Func Offset: 0x30
	// Line 148, Address: 0x1ed4418, Func Offset: 0x38
	// Line 147, Address: 0x1ed441c, Func Offset: 0x3c
	// Line 148, Address: 0x1ed4420, Func Offset: 0x40
	// Func End, Address: 0x1ed442c, Func Offset: 0x4c
}

// 
// Start address: 0x1ed43f0
float EnemyStageSubwayGetWallThickness(int scene)
{
	float t;
	// Line 252, Address: 0x1ed43f0, Func Offset: 0
	// Line 253, Address: 0x1ed43f8, Func Offset: 0x8
	// Line 255, Address: 0x1ed4414, Func Offset: 0x24
	// Line 256, Address: 0x1ed4418, Func Offset: 0x28
	// Line 260, Address: 0x1ed4420, Func Offset: 0x30
	// Func End, Address: 0x1ed4428, Func Offset: 0x38
	// Line 91, Address: 0x1ed43f0, Func Offset: 0
	// Func End, Address: 0x1ed440c, Func Offset: 0x1c
}

// 
// Start address: 0x1ed4430
int EnemyStageSubwayCheckUseTexInScene(int texid, int scene)
{
	int r;
	// Line 270, Address: 0x1ed4430, Func Offset: 0
	// Line 275, Address: 0x1ed4458, Func Offset: 0x28
	// Line 278, Address: 0x1ed4478, Func Offset: 0x48
	// Line 283, Address: 0x1ed4480, Func Offset: 0x50
	// Line 285, Address: 0x1ed4484, Func Offset: 0x54
	// Line 287, Address: 0x1ed4488, Func Offset: 0x58
	// Func End, Address: 0x1ed4490, Func Offset: 0x60
	// Line 220, Address: 0x1ed4430, Func Offset: 0
	// Line 228, Address: 0x1ed4438, Func Offset: 0x8
	// Line 220, Address: 0x1ed443c, Func Offset: 0xc
	// Line 228, Address: 0x1ed4440, Func Offset: 0x10
	// Line 232, Address: 0x1ed4448, Func Offset: 0x18
	// Line 234, Address: 0x1ed445c, Func Offset: 0x2c
	// Line 235, Address: 0x1ed446c, Func Offset: 0x3c
	// Line 239, Address: 0x1ed448c, Func Offset: 0x5c
	// Line 244, Address: 0x1ed4498, Func Offset: 0x68
	// Line 239, Address: 0x1ed449c, Func Offset: 0x6c
	// Line 244, Address: 0x1ed44a8, Func Offset: 0x78
	// Line 239, Address: 0x1ed44ac, Func Offset: 0x7c
	// Line 244, Address: 0x1ed44b0, Func Offset: 0x80
	// Line 245, Address: 0x1ed44c0, Func Offset: 0x90
	// Line 250, Address: 0x1ed44e8, Func Offset: 0xb8
	// Line 253, Address: 0x1ed4504, Func Offset: 0xd4
	// Line 257, Address: 0x1ed4534, Func Offset: 0x104
	// Line 258, Address: 0x1ed4548, Func Offset: 0x118
	// Line 259, Address: 0x1ed4550, Func Offset: 0x120
	// Line 260, Address: 0x1ed4558, Func Offset: 0x128
	// Line 262, Address: 0x1ed4568, Func Offset: 0x138
	// Line 265, Address: 0x1ed4578, Func Offset: 0x148
	// Func End, Address: 0x1ed458c, Func Offset: 0x15c
	// Line 151, Address: 0x1ed4430, Func Offset: 0
	// Line 152, Address: 0x1ed4450, Func Offset: 0x20
	// Line 154, Address: 0x1ed4454, Func Offset: 0x24
	// Line 157, Address: 0x1ed445c, Func Offset: 0x2c
	// Line 158, Address: 0x1ed4484, Func Offset: 0x54
	// Line 160, Address: 0x1ed4488, Func Offset: 0x58
	// Line 161, Address: 0x1ed4490, Func Offset: 0x60
	// Line 163, Address: 0x1ed4494, Func Offset: 0x64
	// Line 164, Address: 0x1ed449c, Func Offset: 0x6c
	// Line 165, Address: 0x1ed44a4, Func Offset: 0x74
	// Line 167, Address: 0x1ed44a8, Func Offset: 0x78
	// Line 172, Address: 0x1ed44c0, Func Offset: 0x90
	// Line 174, Address: 0x1ed44c8, Func Offset: 0x98
	// Line 183, Address: 0x1ed44d0, Func Offset: 0xa0
	// Line 185, Address: 0x1ed44d4, Func Offset: 0xa4
	// Line 186, Address: 0x1ed44dc, Func Offset: 0xac
	// Line 188, Address: 0x1ed44e0, Func Offset: 0xb0
	// Line 190, Address: 0x1ed44f0, Func Offset: 0xc0
	// Line 191, Address: 0x1ed4520, Func Offset: 0xf0
	// Line 195, Address: 0x1ed4524, Func Offset: 0xf4
	// Line 197, Address: 0x1ed452c, Func Offset: 0xfc
	// Line 198, Address: 0x1ed4534, Func Offset: 0x104
	// Line 205, Address: 0x1ed4538, Func Offset: 0x108
	// Line 207, Address: 0x1ed453c, Func Offset: 0x10c
	// Line 209, Address: 0x1ed4544, Func Offset: 0x114
	// Line 211, Address: 0x1ed4548, Func Offset: 0x118
	// Line 214, Address: 0x1ed4558, Func Offset: 0x128
	// Line 216, Address: 0x1ed4560, Func Offset: 0x130
	// Line 218, Address: 0x1ed4568, Func Offset: 0x138
	// Line 222, Address: 0x1ed4570, Func Offset: 0x140
	// Line 224, Address: 0x1ed4584, Func Offset: 0x154
	// Line 230, Address: 0x1ed4588, Func Offset: 0x158
	// Line 231, Address: 0x1ed458c, Func Offset: 0x15c
	// Func End, Address: 0x1ed45a8, Func Offset: 0x178
	// Line 137, Address: 0x1ed4430, Func Offset: 0
	// Line 138, Address: 0x1ed4438, Func Offset: 0x8
	// Line 140, Address: 0x1ed4440, Func Offset: 0x10
	// Line 139, Address: 0x1ed4444, Func Offset: 0x14
	// Line 140, Address: 0x1ed4448, Func Offset: 0x18
	// Func End, Address: 0x1ed4450, Func Offset: 0x20
}

