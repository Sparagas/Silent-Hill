typedef struct _anon0;


typedef char type[24117248];

struct _anon0
{
	char* buffer;
	char* buffer_top;
	char* buffer_end;
	char* current_bookmark;
};

_anon0 mem_stack_work;
char stack_buffer[24117248];

void sfMemoryStackInit();
void* sfMemoryStackAlloc(unsigned int size);
void sfMemoryStackFree(void* ptr);
int sfMemoryStackSaveFree(void* ptr);

// 
// Start address: 0x2a95c0
void sfMemoryStackInit()
{
	// Line 65, Address: 0x2a95c0, Func Offset: 0
	// Line 67, Address: 0x2a95c4, Func Offset: 0x4
	// Line 65, Address: 0x2a95c8, Func Offset: 0x8
	// Line 67, Address: 0x2a95cc, Func Offset: 0xc
	// Line 68, Address: 0x2a95d8, Func Offset: 0x18
	// Line 69, Address: 0x2a95e8, Func Offset: 0x28
	// Line 71, Address: 0x2a95ec, Func Offset: 0x2c
	// Line 69, Address: 0x2a95f0, Func Offset: 0x30
	// Line 71, Address: 0x2a95fc, Func Offset: 0x3c
	// Line 70, Address: 0x2a9608, Func Offset: 0x48
	// Line 72, Address: 0x2a9618, Func Offset: 0x58
	// Func End, Address: 0x2a9624, Func Offset: 0x64
}

// 
// Start address: 0x2a9630
void* sfMemoryStackAlloc(unsigned int size)
{
	_anon0* work;
	void* new_buffer;
	// Line 98, Address: 0x2a9630, Func Offset: 0
	// Line 99, Address: 0x2a9634, Func Offset: 0x4
	// Line 98, Address: 0x2a9638, Func Offset: 0x8
	// Line 102, Address: 0x2a963c, Func Offset: 0xc
	// Line 98, Address: 0x2a9640, Func Offset: 0x10
	// Line 102, Address: 0x2a9644, Func Offset: 0x14
	// Line 98, Address: 0x2a9648, Func Offset: 0x18
	// Line 99, Address: 0x2a964c, Func Offset: 0x1c
	// Line 102, Address: 0x2a9650, Func Offset: 0x20
	// Line 105, Address: 0x2a9654, Func Offset: 0x24
	// Line 102, Address: 0x2a9658, Func Offset: 0x28
	// Line 105, Address: 0x2a965c, Func Offset: 0x2c
	// Line 102, Address: 0x2a9660, Func Offset: 0x30
	// Line 103, Address: 0x2a966c, Func Offset: 0x3c
	// Line 104, Address: 0x2a9674, Func Offset: 0x44
	// Line 105, Address: 0x2a9680, Func Offset: 0x50
	// Line 106, Address: 0x2a9694, Func Offset: 0x64
	// Line 108, Address: 0x2a9698, Func Offset: 0x68
	// Line 111, Address: 0x2a96a0, Func Offset: 0x70
	// Line 114, Address: 0x2a96ac, Func Offset: 0x7c
	// Line 116, Address: 0x2a96b8, Func Offset: 0x88
	// Line 117, Address: 0x2a96c0, Func Offset: 0x90
	// Func End, Address: 0x2a96d4, Func Offset: 0xa4
}

// 
// Start address: 0x2a96e0
void sfMemoryStackFree(void* ptr)
{
	_anon0* work;
	// Line 130, Address: 0x2a96e0, Func Offset: 0
	// Line 128, Address: 0x2a96e4, Func Offset: 0x4
	// Line 129, Address: 0x2a96e8, Func Offset: 0x8
	// Line 130, Address: 0x2a96ec, Func Offset: 0xc
	// Line 128, Address: 0x2a96f0, Func Offset: 0x10
	// Line 131, Address: 0x2a96f4, Func Offset: 0x14
	// Line 134, Address: 0x2a96fc, Func Offset: 0x1c
	// Line 136, Address: 0x2a9720, Func Offset: 0x40
	// Line 146, Address: 0x2a9728, Func Offset: 0x48
	// Line 147, Address: 0x2a9730, Func Offset: 0x50
	// Func End, Address: 0x2a973c, Func Offset: 0x5c
}

// 
// Start address: 0x2a9740
int sfMemoryStackSaveFree(void* ptr)
{
	_anon0* work;
	int move_size;
	int move_interval;
	char* move_dist;
	char* old_move_start;
	// Line 159, Address: 0x2a9740, Func Offset: 0
	// Line 169, Address: 0x2a9760, Func Offset: 0x20
	// Line 160, Address: 0x2a9764, Func Offset: 0x24
	// Line 169, Address: 0x2a9768, Func Offset: 0x28
	// Line 170, Address: 0x2a976c, Func Offset: 0x2c
	// Line 171, Address: 0x2a9774, Func Offset: 0x34
	// Line 172, Address: 0x2a9780, Func Offset: 0x40
	// Line 174, Address: 0x2a97a0, Func Offset: 0x60
	// Line 179, Address: 0x2a97a8, Func Offset: 0x68
	// Line 185, Address: 0x2a97b0, Func Offset: 0x70
	// Line 186, Address: 0x2a97b4, Func Offset: 0x74
	// Line 188, Address: 0x2a97c0, Func Offset: 0x80
	// Line 189, Address: 0x2a97d0, Func Offset: 0x90
	// Line 198, Address: 0x2a97e0, Func Offset: 0xa0
	// Line 199, Address: 0x2a97f0, Func Offset: 0xb0
	// Line 202, Address: 0x2a97f4, Func Offset: 0xb4
	// Line 203, Address: 0x2a9804, Func Offset: 0xc4
	// Line 205, Address: 0x2a980c, Func Offset: 0xcc
	// Line 208, Address: 0x2a9810, Func Offset: 0xd0
	// Line 209, Address: 0x2a9818, Func Offset: 0xd8
	// Func End, Address: 0x2a983c, Func Offset: 0xfc
}

