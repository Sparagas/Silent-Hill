typedef struct EnemyDeltaTime;



struct EnemyDeltaTime
{
	int delta_frame;
	float frame_per_second;
	float second_per_frame;
	float reverse_delta_time;
};

EnemyDeltaTime en_delta_time;

void EnemySetDeltaFrame(int fpi);
float EnemyFramePerSecond();
float EnemySecondPerFrame();
float EnemyReverseDT();

// 
// Start address: 0x197a60
void EnemySetDeltaFrame(int fpi)
{
	// Line 30, Address: 0x197a60, Func Offset: 0
	// Line 31, Address: 0x197a64, Func Offset: 0x4
	// Line 30, Address: 0x197a68, Func Offset: 0x8
	// Line 31, Address: 0x197a70, Func Offset: 0x10
	// Line 32, Address: 0x197a74, Func Offset: 0x14
	// Line 34, Address: 0x197a84, Func Offset: 0x24
	// Line 32, Address: 0x197a8c, Func Offset: 0x2c
	// Line 35, Address: 0x197a94, Func Offset: 0x34
	// Line 32, Address: 0x197a98, Func Offset: 0x38
	// Line 34, Address: 0x197aa0, Func Offset: 0x40
	// Line 35, Address: 0x197aa8, Func Offset: 0x48
	// Line 34, Address: 0x197ab8, Func Offset: 0x58
	// Line 35, Address: 0x197ac4, Func Offset: 0x64
	// Line 37, Address: 0x197adc, Func Offset: 0x7c
	// Func End, Address: 0x197aec, Func Offset: 0x8c
}

// 
// Start address: 0x197af0
float EnemyFramePerSecond()
{
	// Line 52, Address: 0x197af0, Func Offset: 0
	// Line 53, Address: 0x197af4, Func Offset: 0x4
	// Func End, Address: 0x197afc, Func Offset: 0xc
}

// 
// Start address: 0x197b00
float EnemySecondPerFrame()
{
	// Line 60, Address: 0x197b00, Func Offset: 0
	// Line 61, Address: 0x197b04, Func Offset: 0x4
	// Func End, Address: 0x197b0c, Func Offset: 0xc
}

// 
// Start address: 0x197b10
float EnemyReverseDT()
{
	// Line 68, Address: 0x197b10, Func Offset: 0
	// Line 69, Address: 0x197b14, Func Offset: 0x4
	// Func End, Address: 0x197b1c, Func Offset: 0xc
}

