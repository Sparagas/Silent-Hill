


int af_target;
int af_depth;
int af_speed;

void sfFilterAutoFadeSetCurrent(int depth);
void sfFilterAutoFadeSetTarget(int target, int speed);
void sfFilterAutoFade();
int sfFilterAutoFadeCheckEnd();
int sfFilterAutoFadeCheckFadeNone();
int sfFilterAutoFadeCheckFadeMax();

// 
// Start address: 0x15a290
void sfFilterAutoFadeSetCurrent(int depth)
{
	// Line 45, Address: 0x15a290, Func Offset: 0
	// Line 46, Address: 0x15a298, Func Offset: 0x8
	// Line 49, Address: 0x15a29c, Func Offset: 0xc
	// Func End, Address: 0x15a2a4, Func Offset: 0x14
}

// 
// Start address: 0x15a2b0
void sfFilterAutoFadeSetTarget(int target, int speed)
{
	// Line 66, Address: 0x15a2b0, Func Offset: 0
	// Line 67, Address: 0x15a2b8, Func Offset: 0x8
	// Line 70, Address: 0x15a2bc, Func Offset: 0xc
	// Func End, Address: 0x15a2c4, Func Offset: 0x14
}

// 
// Start address: 0x15a2d0
void sfFilterAutoFade()
{
	// Line 80, Address: 0x15a2d0, Func Offset: 0
	// Line 81, Address: 0x15a2ec, Func Offset: 0x1c
	// Line 83, Address: 0x15a30c, Func Offset: 0x3c
	// Line 85, Address: 0x15a318, Func Offset: 0x48
	// Line 86, Address: 0x15a320, Func Offset: 0x50
	// Line 87, Address: 0x15a32c, Func Offset: 0x5c
	// Line 89, Address: 0x15a338, Func Offset: 0x68
	// Line 91, Address: 0x15a34c, Func Offset: 0x7c
	// Line 89, Address: 0x15a350, Func Offset: 0x80
	// Line 93, Address: 0x15a358, Func Offset: 0x88
	// Line 94, Address: 0x15a360, Func Offset: 0x90
	// Line 98, Address: 0x15a368, Func Offset: 0x98
	// Func End, Address: 0x15a374, Func Offset: 0xa4
}

// 
// Start address: 0x15a380
int sfFilterAutoFadeCheckEnd()
{
	// Line 110, Address: 0x15a380, Func Offset: 0
	// Line 111, Address: 0x15a394, Func Offset: 0x14
	// Func End, Address: 0x15a39c, Func Offset: 0x1c
}

// 
// Start address: 0x15a3a0
int sfFilterAutoFadeCheckFadeNone()
{
	// Line 123, Address: 0x15a3a0, Func Offset: 0
	// Line 124, Address: 0x15a3ac, Func Offset: 0xc
	// Func End, Address: 0x15a3b4, Func Offset: 0x14
}

// 
// Start address: 0x15a3c0
int sfFilterAutoFadeCheckFadeMax()
{
	// Line 136, Address: 0x15a3c0, Func Offset: 0
	// Line 137, Address: 0x15a3cc, Func Offset: 0xc
	// Func End, Address: 0x15a3d4, Func Offset: 0x14
}

