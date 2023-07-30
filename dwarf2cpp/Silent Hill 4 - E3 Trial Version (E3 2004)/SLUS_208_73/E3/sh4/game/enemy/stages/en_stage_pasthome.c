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

EnemyAreaBox do_not_enter_cm12;

float EnemyStagePastHomeGetBottomHeightInScene(int scene);
float EnemyStagePastHomeGetAbyssHeightInScene(int scene);
EnemyAreaBox* EnemyStagePastHomeDoNotEnterArea(int scene, int index);

// 
// Start address: 0x1ed3f80
float EnemyStagePastHomeGetBottomHeightInScene(int scene)
{
	// Line 21, Address: 0x1ed3f80, Func Offset: 0
	// Func End, Address: 0x1ed3f88, Func Offset: 0x8
	// Line 37, Address: 0x1ed3f80, Func Offset: 0
	// Func End, Address: 0x1ed3f88, Func Offset: 0x8
	// Line 42, Address: 0x1ed3f80, Func Offset: 0
	// Func End, Address: 0x1ed3f88, Func Offset: 0x8
	// Line 111, Address: 0x1ed3f80, Func Offset: 0
	// Line 114, Address: 0x1ed3fc0, Func Offset: 0x40
	// Line 115, Address: 0x1ed3fcc, Func Offset: 0x4c
	// Line 117, Address: 0x1ed3fd4, Func Offset: 0x54
	// Line 118, Address: 0x1ed3fdc, Func Offset: 0x5c
	// Line 120, Address: 0x1ed3fe0, Func Offset: 0x60
	// Line 121, Address: 0x1ed3ff0, Func Offset: 0x70
	// Line 122, Address: 0x1ed3ffc, Func Offset: 0x7c
	// Line 123, Address: 0x1ed400c, Func Offset: 0x8c
	// Line 124, Address: 0x1ed4014, Func Offset: 0x94
	// Line 125, Address: 0x1ed401c, Func Offset: 0x9c
	// Line 127, Address: 0x1ed4030, Func Offset: 0xb0
	// Line 128, Address: 0x1ed4088, Func Offset: 0x108
	// Line 129, Address: 0x1ed4090, Func Offset: 0x110
	// Line 130, Address: 0x1ed40b0, Func Offset: 0x130
	// Line 129, Address: 0x1ed40b4, Func Offset: 0x134
	// Line 130, Address: 0x1ed40b8, Func Offset: 0x138
	// Line 129, Address: 0x1ed40bc, Func Offset: 0x13c
	// Line 130, Address: 0x1ed40c0, Func Offset: 0x140
	// Line 131, Address: 0x1ed40c4, Func Offset: 0x144
	// Line 132, Address: 0x1ed40ec, Func Offset: 0x16c
	// Line 134, Address: 0x1ed4108, Func Offset: 0x188
	// Line 132, Address: 0x1ed410c, Func Offset: 0x18c
	// Line 134, Address: 0x1ed4114, Func Offset: 0x194
	// Line 132, Address: 0x1ed4118, Func Offset: 0x198
	// Line 134, Address: 0x1ed4120, Func Offset: 0x1a0
	// Line 133, Address: 0x1ed4124, Func Offset: 0x1a4
	// Line 134, Address: 0x1ed4128, Func Offset: 0x1a8
	// Line 135, Address: 0x1ed412c, Func Offset: 0x1ac
	// Line 137, Address: 0x1ed4134, Func Offset: 0x1b4
	// Line 139, Address: 0x1ed414c, Func Offset: 0x1cc
	// Line 140, Address: 0x1ed415c, Func Offset: 0x1dc
	// Line 141, Address: 0x1ed416c, Func Offset: 0x1ec
	// Line 142, Address: 0x1ed417c, Func Offset: 0x1fc
	// Line 143, Address: 0x1ed4180, Func Offset: 0x200
	// Func End, Address: 0x1ed41c4, Func Offset: 0x244
	// Line 38, Address: 0x1ed3f80, Func Offset: 0
	// Func End, Address: 0x1ed3f88, Func Offset: 0x8
	// Line 69, Address: 0x1ed3f80, Func Offset: 0
	// Line 72, Address: 0x1ed3f84, Func Offset: 0x4
	// Line 69, Address: 0x1ed3f88, Func Offset: 0x8
	// Line 72, Address: 0x1ed3f8c, Func Offset: 0xc
	// Line 69, Address: 0x1ed3f90, Func Offset: 0x10
	// Line 72, Address: 0x1ed3f98, Func Offset: 0x18
	// Line 73, Address: 0x1ed3fa0, Func Offset: 0x20
	// Line 74, Address: 0x1ed3fc0, Func Offset: 0x40
	// Func End, Address: 0x1ed3fd0, Func Offset: 0x50
	// Line 24, Address: 0x1ed3f80, Func Offset: 0
	// Line 25, Address: 0x1ed3f84, Func Offset: 0x4
	// Func End, Address: 0x1ed3f8c, Func Offset: 0xc
	// Line 22, Address: 0x1ed3f80, Func Offset: 0
	// Func End, Address: 0x1ed3f88, Func Offset: 0x8
	// Line 20, Address: 0x1ed3f80, Func Offset: 0
	// Line 24, Address: 0x1ed3f84, Func Offset: 0x4
	// Line 25, Address: 0x1ed3f88, Func Offset: 0x8
	// Line 26, Address: 0x1ed3f8c, Func Offset: 0xc
	// Func End, Address: 0x1ed3f94, Func Offset: 0x14
}

// 
// Start address: 0x1ed3fa0
float EnemyStagePastHomeGetAbyssHeightInScene(int scene)
{
	// Line 148, Address: 0x1ed3fa0, Func Offset: 0
	// Line 149, Address: 0x1ed3fa4, Func Offset: 0x4
	// Line 148, Address: 0x1ed3fa8, Func Offset: 0x8
	// Line 149, Address: 0x1ed3fac, Func Offset: 0xc
	// Line 150, Address: 0x1ed3fb4, Func Offset: 0x14
	// Line 149, Address: 0x1ed3fb8, Func Offset: 0x18
	// Line 150, Address: 0x1ed3fbc, Func Offset: 0x1c
	// Line 152, Address: 0x1ed3fe0, Func Offset: 0x40
	// Line 151, Address: 0x1ed3fe4, Func Offset: 0x44
	// Line 152, Address: 0x1ed3fe8, Func Offset: 0x48
	// Func End, Address: 0x1ed3ff0, Func Offset: 0x50
	// Line 61, Address: 0x1ed3fa0, Func Offset: 0
	// Line 62, Address: 0x1ed3fa4, Func Offset: 0x4
	// Line 61, Address: 0x1ed3fa8, Func Offset: 0x8
	// Line 65, Address: 0x1ed3fac, Func Offset: 0xc
	// Line 61, Address: 0x1ed3fb0, Func Offset: 0x10
	// Line 62, Address: 0x1ed3fb4, Func Offset: 0x14
	// Line 65, Address: 0x1ed3fb8, Func Offset: 0x18
	// Line 67, Address: 0x1ed3fd0, Func Offset: 0x30
	// Line 68, Address: 0x1ed3fdc, Func Offset: 0x3c
	// Line 70, Address: 0x1ed3fe0, Func Offset: 0x40
	// Line 77, Address: 0x1ed3ff0, Func Offset: 0x50
	// Line 70, Address: 0x1ed3ff4, Func Offset: 0x54
	// Line 77, Address: 0x1ed3ff8, Func Offset: 0x58
	// Line 80, Address: 0x1ed4024, Func Offset: 0x84
	// Line 81, Address: 0x1ed4028, Func Offset: 0x88
	// Line 80, Address: 0x1ed402c, Func Offset: 0x8c
	// Line 84, Address: 0x1ed4030, Func Offset: 0x90
	// Line 86, Address: 0x1ed403c, Func Offset: 0x9c
	// Line 87, Address: 0x1ed4044, Func Offset: 0xa4
	// Line 89, Address: 0x1ed4048, Func Offset: 0xa8
	// Line 90, Address: 0x1ed4050, Func Offset: 0xb0
	// Line 92, Address: 0x1ed4060, Func Offset: 0xc0
	// Line 94, Address: 0x1ed4068, Func Offset: 0xc8
	// Func End, Address: 0x1ed4078, Func Offset: 0xd8
	// Line 34, Address: 0x1ed3fa0, Func Offset: 0
	// Func End, Address: 0x1ed3fa8, Func Offset: 0x8
}

// 
// Start address: 0x1ed3fb0
EnemyAreaBox* EnemyStagePastHomeDoNotEnterArea(int scene, int index)
{
	EnemyAreaBox* pa;
	// Line 61, Address: 0x1ed3fb0, Func Offset: 0
	// Line 62, Address: 0x1ed3fc4, Func Offset: 0x14
	// Line 63, Address: 0x1ed3fc8, Func Offset: 0x18
	// Line 64, Address: 0x1ed3fd0, Func Offset: 0x20
	// Line 69, Address: 0x1ed3fd8, Func Offset: 0x28
	// Func End, Address: 0x1ed3fe0, Func Offset: 0x30
}

