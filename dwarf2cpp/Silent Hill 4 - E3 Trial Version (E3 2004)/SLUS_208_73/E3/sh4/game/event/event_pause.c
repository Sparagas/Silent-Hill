
typedef void(*type)();



void EventPauseSet();
void EventPauseFuncSet(void(*func)());
int EventPauseFuncEnd();
void EventPauseReset();

// 
// Start address: 0x2a2800
void EventPauseSet()
{
	// Line 52, Address: 0x2a2800, Func Offset: 0
	// Line 53, Address: 0x2a2808, Func Offset: 0x8
	// Line 54, Address: 0x2a2810, Func Offset: 0x10
	// Line 55, Address: 0x2a2818, Func Offset: 0x18
	// Line 56, Address: 0x2a2820, Func Offset: 0x20
	// Func End, Address: 0x2a282c, Func Offset: 0x2c
}

// 
// Start address: 0x2a2830
void EventPauseFuncSet(void(*func)())
{
	// Line 66, Address: 0x2a2830, Func Offset: 0
	// Func End, Address: 0x2a2838, Func Offset: 0x8
}

// 
// Start address: 0x2a2840
int EventPauseFuncEnd()
{
	// Line 78, Address: 0x2a2840, Func Offset: 0
	// Func End, Address: 0x2a2848, Func Offset: 0x8
}

// 
// Start address: 0x2a2850
void EventPauseReset()
{
	// Line 93, Address: 0x2a2850, Func Offset: 0
	// Func End, Address: 0x2a2858, Func Offset: 0x8
}

