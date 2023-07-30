typedef enum EnemyEventID : unsigned char;


typedef float type[4];

enum EnemyEventID : unsigned char
{
	ENEMY_EVENT_STARTING,
	ENEMY_EVENT_WATERGHOSTAPPEAR,
	ENEMY_EVENT_GET_GHOSTS_KEY,
	ENEMY_EVENT_PEEP_END
};

unsigned int event_status;
float water_ghost_appear_pos[4];

void EnemyEventHappen(EnemyEventID event);
void EnemyEventClearAll();
void EnemyEventClear(EnemyEventID event);
int EnemyCheckEventHappen(EnemyEventID event);
void water_ghost_appear();

// 
// Start address: 0x23f380
void EnemyEventHappen(EnemyEventID event)
{
	// Line 27, Address: 0x23f380, Func Offset: 0
	// Line 28, Address: 0x23f384, Func Offset: 0x4
	// Line 27, Address: 0x23f388, Func Offset: 0x8
	// Line 28, Address: 0x23f390, Func Offset: 0x10
	// Line 29, Address: 0x23f3a4, Func Offset: 0x24
	// Line 30, Address: 0x23f3b4, Func Offset: 0x34
	// Line 31, Address: 0x23f3b8, Func Offset: 0x38
	// Line 34, Address: 0x23f3c0, Func Offset: 0x40
	// Func End, Address: 0x23f3cc, Func Offset: 0x4c
}

// 
// Start address: 0x23f3d0
void EnemyEventClearAll()
{
	// Line 40, Address: 0x23f3d0, Func Offset: 0
	// Line 41, Address: 0x23f3d4, Func Offset: 0x4
	// Func End, Address: 0x23f3dc, Func Offset: 0xc
}

// 
// Start address: 0x23f3e0
void EnemyEventClear(EnemyEventID event)
{
	// Line 48, Address: 0x23f3e0, Func Offset: 0
	// Line 49, Address: 0x23f400, Func Offset: 0x20
	// Func End, Address: 0x23f408, Func Offset: 0x28
}

// 
// Start address: 0x23f410
int EnemyCheckEventHappen(EnemyEventID event)
{
	// Line 57, Address: 0x23f410, Func Offset: 0
	// Line 58, Address: 0x23f428, Func Offset: 0x18
	// Func End, Address: 0x23f430, Func Offset: 0x20
}

// 
// Start address: 0x23f430
void water_ghost_appear()
{
	// Line 89, Address: 0x23f430, Func Offset: 0
	// Func End, Address: 0x23f438, Func Offset: 0x8
}

