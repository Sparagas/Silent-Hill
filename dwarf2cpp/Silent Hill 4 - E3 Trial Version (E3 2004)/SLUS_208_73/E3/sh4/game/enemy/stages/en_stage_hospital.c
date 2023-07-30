typedef struct EnemyAreaBox;



struct EnemyAreaBox
{
	float x_mini;
	float y_mini;
	float z_mini;
	float x_max;
	float y_max;
	float z_max;
};

EnemyAreaBox do_not_enter_hs04;
EnemyAreaBox do_not_enter_hs30a;
EnemyAreaBox do_not_enter_hs30b;

int EnemyStageHospitalGetFloorNumber(int scene);
float EnemyStageHospitalGetBottomHeightInScene(int scene);
float EnemyStageHospitalGetAbyssHeightInScene(int scene);
int EnemyStageHospitalCheckInMovableRangeInScene();
EnemyAreaBox* EnemyStageHospitalDoNotEnterArea(int scene, int index);
float EnemyStageHospitalGetWallThickness();
int EnemyStageHospitalGetDoorNumber(int scene);
void EnemyStageHospitalDoorOpen(int scene, int num);
void EnemyStageHospitalDoorClose(int scene, int num);
int EnemyStageHospitalIsDoorOpen(int scene, int num);
int EnemyStageHospitalIsDoorClose(int scene, int num);
int EnemyStageHospitalCheckUseTexInScene(int texid);

// 
// Start address: 0x1ed4050
int EnemyStageHospitalGetFloorNumber(int scene)
{
	int r;
	// Line 22, Address: 0x1ed4050, Func Offset: 0
	// Line 27, Address: 0x1ed408c, Func Offset: 0x3c
	// Line 28, Address: 0x1ed4090, Func Offset: 0x40
	// Line 30, Address: 0x1ed4094, Func Offset: 0x44
	// Line 32, Address: 0x1ed4098, Func Offset: 0x48
	// Func End, Address: 0x1ed40a0, Func Offset: 0x50
}

// 
// Start address: 0x1ed40a0
float EnemyStageHospitalGetBottomHeightInScene(int scene)
{
	float r;
	// Line 41, Address: 0x1ed40a0, Func Offset: 0
	// Line 40, Address: 0x1ed40a4, Func Offset: 0x4
	// Line 41, Address: 0x1ed40a8, Func Offset: 0x8
	// Line 43, Address: 0x1ed40c0, Func Offset: 0x20
	// Line 44, Address: 0x1ed40c8, Func Offset: 0x28
	// Line 46, Address: 0x1ed40d0, Func Offset: 0x30
	// Line 48, Address: 0x1ed40dc, Func Offset: 0x3c
	// Line 50, Address: 0x1ed40e0, Func Offset: 0x40
	// Func End, Address: 0x1ed40e8, Func Offset: 0x48
}

// 
// Start address: 0x1ed40f0
float EnemyStageHospitalGetAbyssHeightInScene(int scene)
{
	// Line 162, Address: 0x1ed40f0, Func Offset: 0
	// Line 163, Address: 0x1ed40f4, Func Offset: 0x4
	// Line 162, Address: 0x1ed40f8, Func Offset: 0x8
	// Line 164, Address: 0x1ed4100, Func Offset: 0x10
	// Line 177, Address: 0x1ed4108, Func Offset: 0x18
	// Line 179, Address: 0x1ed4128, Func Offset: 0x38
	// Func End, Address: 0x1ed4138, Func Offset: 0x48
	// Line 58, Address: 0x1ed40f0, Func Offset: 0
	// Func End, Address: 0x1ed40f8, Func Offset: 0x8
}

// 
// Start address: 0x1ed4100
int EnemyStageHospitalCheckInMovableRangeInScene()
{
	// Line 69, Address: 0x1ed4100, Func Offset: 0
	// Func End, Address: 0x1ed4108, Func Offset: 0x8
}

// 
// Start address: 0x1ed4110
EnemyAreaBox* EnemyStageHospitalDoNotEnterArea(int scene, int index)
{
	EnemyAreaBox* pa;
	// Line 95, Address: 0x1ed4110, Func Offset: 0
	// Line 97, Address: 0x1ed4130, Func Offset: 0x20
	// Line 98, Address: 0x1ed4138, Func Offset: 0x28
	// Line 100, Address: 0x1ed413c, Func Offset: 0x2c
	// Line 101, Address: 0x1ed4144, Func Offset: 0x34
	// Line 102, Address: 0x1ed4148, Func Offset: 0x38
	// Line 103, Address: 0x1ed4164, Func Offset: 0x54
	// Line 104, Address: 0x1ed4168, Func Offset: 0x58
	// Line 105, Address: 0x1ed416c, Func Offset: 0x5c
	// Line 106, Address: 0x1ed4174, Func Offset: 0x64
	// Line 107, Address: 0x1ed4178, Func Offset: 0x68
	// Line 113, Address: 0x1ed4180, Func Offset: 0x70
	// Func End, Address: 0x1ed4188, Func Offset: 0x78
}

// 
// Start address: 0x1ed4190
float EnemyStageHospitalGetWallThickness()
{
	// Line 203, Address: 0x1ed4190, Func Offset: 0
	// Line 204, Address: 0x1ed4194, Func Offset: 0x4
	// Line 203, Address: 0x1ed4198, Func Offset: 0x8
	// Line 204, Address: 0x1ed419c, Func Offset: 0xc
	// Line 205, Address: 0x1ed41ac, Func Offset: 0x1c
	// Line 206, Address: 0x1ed41bc, Func Offset: 0x2c
	// Func End, Address: 0x1ed41c8, Func Offset: 0x38
	// Line 124, Address: 0x1ed4190, Func Offset: 0
	// Line 125, Address: 0x1ed4198, Func Offset: 0x8
	// Func End, Address: 0x1ed41a0, Func Offset: 0x10
}

// 
// Start address: 0x1ed41a0
int EnemyStageHospitalGetDoorNumber(int scene)
{
	int r;
	// Line 134, Address: 0x1ed41a0, Func Offset: 0
	// Line 135, Address: 0x1ed41b4, Func Offset: 0x14
	// Line 136, Address: 0x1ed41b8, Func Offset: 0x18
	// Line 138, Address: 0x1ed41bc, Func Offset: 0x1c
	// Line 140, Address: 0x1ed41c0, Func Offset: 0x20
	// Func End, Address: 0x1ed41c8, Func Offset: 0x28
}

// 
// Start address: 0x1ed41d0
void EnemyStageHospitalDoorOpen(int scene, int num)
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
// Start address: 0x1ed4210
void EnemyStageHospitalDoorClose(int scene, int num)
{
	// Line 160, Address: 0x1ed4210, Func Offset: 0
	// Line 161, Address: 0x1ed4214, Func Offset: 0x4
	// Line 163, Address: 0x1ed4228, Func Offset: 0x18
	// Line 166, Address: 0x1ed4238, Func Offset: 0x28
	// Func End, Address: 0x1ed4244, Func Offset: 0x34
}

// 
// Start address: 0x1ed4250
int EnemyStageHospitalIsDoorOpen(int scene, int num)
{
	int r;
	// Line 174, Address: 0x1ed4250, Func Offset: 0
	// Line 176, Address: 0x1ed4254, Func Offset: 0x4
	// Line 174, Address: 0x1ed4258, Func Offset: 0x8
	// Line 176, Address: 0x1ed425c, Func Offset: 0xc
	// Line 177, Address: 0x1ed426c, Func Offset: 0x1c
	// Line 178, Address: 0x1ed4270, Func Offset: 0x20
	// Line 182, Address: 0x1ed4280, Func Offset: 0x30
	// Func End, Address: 0x1ed428c, Func Offset: 0x3c
}

// 
// Start address: 0x1ed4290
int EnemyStageHospitalIsDoorClose(int scene, int num)
{
	int r;
	// Line 190, Address: 0x1ed4290, Func Offset: 0
	// Line 192, Address: 0x1ed4294, Func Offset: 0x4
	// Line 190, Address: 0x1ed4298, Func Offset: 0x8
	// Line 192, Address: 0x1ed429c, Func Offset: 0xc
	// Line 193, Address: 0x1ed42ac, Func Offset: 0x1c
	// Line 194, Address: 0x1ed42b0, Func Offset: 0x20
	// Line 198, Address: 0x1ed42c0, Func Offset: 0x30
	// Func End, Address: 0x1ed42cc, Func Offset: 0x3c
}

// 
// Start address: 0x1ed42d0
int EnemyStageHospitalCheckUseTexInScene(int texid)
{
	int r;
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

