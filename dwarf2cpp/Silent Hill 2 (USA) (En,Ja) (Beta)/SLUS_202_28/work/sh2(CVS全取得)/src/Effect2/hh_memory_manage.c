

typedef <unknown fundamental type (0xa510)> type_0[17536];
typedef <unknown fundamental type (0xa510)> type_1[17536][1];
typedef void* type_2[4];

void* _pMemroyBlock_Table[4];
<unknown fundamental type (0xa510)> _texture_buffer_always[17536][1];

unsigned int MemoryBlock_Allocate(unsigned int MemoryBlock_Type, void* pAddress);
unsigned int AllocateMemoryBlock_Check(unsigned int MemoryBlock_Type);
void* AllocateMemoryBlock_Get(unsigned int MemoryBlock_Type);
unsigned int AllocateMemoryBlock_Release(unsigned int MemoryBlock_Type);
unsigned int HH_MemoryManager_AllocateMemoryBlock_Check(unsigned int MemoryBlock_Type);
void* HH_MemoryManager_AllocateMemoryBlock_Get(unsigned int MemoryBlock_Type);
void* HH_MemoryManager_DesignateSize_Alignment16Address_Calculator(void* pAddress, unsigned int Size, unsigned int Number);
void* HH_MemoryManager_DesignateSize_Alignment64Address_Calculator(void* pAddress, unsigned int Size, unsigned int Number);
unsigned int HH_MemoryManager_MemoryBlock_All_Allocate();
unsigned int HH_MemoryManager_MemoryBlock_Allocate_Packet_and_ObjectWork();
unsigned int HH_MemoryManager_MemoryBlock_Allocate_TextureBuffer();
unsigned int HH_MemoryManager_MemoryBlock_All_Discard();

// 
// Start address: 0x2923a0
unsigned int MemoryBlock_Allocate(unsigned int MemoryBlock_Type, void* pAddress)
{
	unsigned int result;
	// Line 127, Address: 0x2923a0, Func Offset: 0
	// Line 129, Address: 0x2923b4, Func Offset: 0x14
	// Line 130, Address: 0x2923b8, Func Offset: 0x18
	// Func End, Address: 0x2923c0, Func Offset: 0x20
}

// 
// Start address: 0x2923c0
unsigned int AllocateMemoryBlock_Check(unsigned int MemoryBlock_Type)
{
	unsigned int result;
	// Line 142, Address: 0x2923c0, Func Offset: 0
	// Line 143, Address: 0x2923cc, Func Offset: 0xc
	// Line 145, Address: 0x2923d0, Func Offset: 0x10
	// Line 146, Address: 0x2923e0, Func Offset: 0x20
	// Line 148, Address: 0x2923e4, Func Offset: 0x24
	// Line 149, Address: 0x2923e8, Func Offset: 0x28
	// Func End, Address: 0x2923fc, Func Offset: 0x3c
}

// 
// Start address: 0x292400
void* AllocateMemoryBlock_Get(unsigned int MemoryBlock_Type)
{
	// Line 163, Address: 0x292400, Func Offset: 0
	// Line 164, Address: 0x292414, Func Offset: 0x14
	// Func End, Address: 0x29241c, Func Offset: 0x1c
}

// 
// Start address: 0x292420
unsigned int AllocateMemoryBlock_Release(unsigned int MemoryBlock_Type)
{
	unsigned int result;
	// Line 177, Address: 0x292420, Func Offset: 0
	// Line 180, Address: 0x292424, Func Offset: 0x4
	// Line 182, Address: 0x292440, Func Offset: 0x20
	// Line 184, Address: 0x292444, Func Offset: 0x24
	// Line 188, Address: 0x292448, Func Offset: 0x28
	// Func End, Address: 0x292450, Func Offset: 0x30
}

// 
// Start address: 0x292450
unsigned int HH_MemoryManager_AllocateMemoryBlock_Check(unsigned int MemoryBlock_Type)
{
	// Line 201, Address: 0x292450, Func Offset: 0
	// Line 202, Address: 0x292458, Func Offset: 0x8
	// Line 203, Address: 0x292460, Func Offset: 0x10
	// Func End, Address: 0x292470, Func Offset: 0x20
}

// 
// Start address: 0x292470
void* HH_MemoryManager_AllocateMemoryBlock_Get(unsigned int MemoryBlock_Type)
{
	// Line 206, Address: 0x292470, Func Offset: 0
	// Line 207, Address: 0x292478, Func Offset: 0x8
	// Line 208, Address: 0x292480, Func Offset: 0x10
	// Func End, Address: 0x292490, Func Offset: 0x20
}

// 
// Start address: 0x292490
void* HH_MemoryManager_DesignateSize_Alignment16Address_Calculator(void* pAddress, unsigned int Size, unsigned int Number)
{
	unsigned int Next_Address;
	void* result;
	// Line 228, Address: 0x292490, Func Offset: 0
	// Line 233, Address: 0x292498, Func Offset: 0x8
	// Line 234, Address: 0x2924a4, Func Offset: 0x14
	// Line 236, Address: 0x2924ac, Func Offset: 0x1c
	// Line 238, Address: 0x2924b8, Func Offset: 0x28
	// Line 240, Address: 0x2924c0, Func Offset: 0x30
	// Line 241, Address: 0x2924c4, Func Offset: 0x34
	// Line 243, Address: 0x2924cc, Func Offset: 0x3c
	// Line 247, Address: 0x2924f4, Func Offset: 0x64
	// Func End, Address: 0x292504, Func Offset: 0x74
}

// 
// Start address: 0x292510
void* HH_MemoryManager_DesignateSize_Alignment64Address_Calculator(void* pAddress, unsigned int Size, unsigned int Number)
{
	unsigned int Next_Address;
	void* result;
	// Line 262, Address: 0x292510, Func Offset: 0
	// Line 267, Address: 0x292518, Func Offset: 0x8
	// Line 268, Address: 0x292524, Func Offset: 0x14
	// Line 270, Address: 0x29252c, Func Offset: 0x1c
	// Line 271, Address: 0x292538, Func Offset: 0x28
	// Line 273, Address: 0x292540, Func Offset: 0x30
	// Line 274, Address: 0x292544, Func Offset: 0x34
	// Line 276, Address: 0x29254c, Func Offset: 0x3c
	// Line 280, Address: 0x292574, Func Offset: 0x64
	// Func End, Address: 0x292584, Func Offset: 0x74
}

// 
// Start address: 0x292590
unsigned int HH_MemoryManager_MemoryBlock_All_Allocate()
{
	unsigned int End;
	unsigned int Base;
	void* pAddress;
	unsigned int result;
	// Line 292, Address: 0x292590, Func Offset: 0
	// Line 293, Address: 0x2925a0, Func Offset: 0x10
	// Line 297, Address: 0x2925a4, Func Offset: 0x14
	// Line 298, Address: 0x2925b8, Func Offset: 0x28
	// Line 299, Address: 0x2925bc, Func Offset: 0x2c
	// Line 300, Address: 0x2925c4, Func Offset: 0x34
	// Line 301, Address: 0x2925d8, Func Offset: 0x48
	// Line 304, Address: 0x2925dc, Func Offset: 0x4c
	// Line 306, Address: 0x2925e4, Func Offset: 0x54
	// Line 310, Address: 0x2925e8, Func Offset: 0x58
	// Line 311, Address: 0x2925f4, Func Offset: 0x64
	// Line 313, Address: 0x29260c, Func Offset: 0x7c
	// Line 314, Address: 0x292618, Func Offset: 0x88
	// Line 317, Address: 0x292630, Func Offset: 0xa0
	// Line 318, Address: 0x29263c, Func Offset: 0xac
	// Line 321, Address: 0x292658, Func Offset: 0xc8
	// Line 325, Address: 0x292670, Func Offset: 0xe0
	// Line 326, Address: 0x292674, Func Offset: 0xe4
	// Func End, Address: 0x29268c, Func Offset: 0xfc
}

// 
// Start address: 0x292690
unsigned int HH_MemoryManager_MemoryBlock_Allocate_Packet_and_ObjectWork()
{
	void* pAddress;
	unsigned int result;
	// Line 339, Address: 0x292690, Func Offset: 0
	// Line 340, Address: 0x29269c, Func Offset: 0xc
	// Line 344, Address: 0x2926a0, Func Offset: 0x10
	// Line 345, Address: 0x2926b4, Func Offset: 0x24
	// Line 346, Address: 0x2926b8, Func Offset: 0x28
	// Line 347, Address: 0x2926c0, Func Offset: 0x30
	// Line 348, Address: 0x2926d4, Func Offset: 0x44
	// Line 351, Address: 0x2926d8, Func Offset: 0x48
	// Line 353, Address: 0x2926e0, Func Offset: 0x50
	// Line 354, Address: 0x2926ec, Func Offset: 0x5c
	// Line 356, Address: 0x292704, Func Offset: 0x74
	// Line 359, Address: 0x292710, Func Offset: 0x80
	// Line 362, Address: 0x292718, Func Offset: 0x88
	// Line 363, Address: 0x29271c, Func Offset: 0x8c
	// Func End, Address: 0x292730, Func Offset: 0xa0
}

// 
// Start address: 0x292730
unsigned int HH_MemoryManager_MemoryBlock_Allocate_TextureBuffer()
{
	void* pAddress;
	unsigned int result;
	// Line 377, Address: 0x292730, Func Offset: 0
	// Line 378, Address: 0x29273c, Func Offset: 0xc
	// Line 382, Address: 0x292740, Func Offset: 0x10
	// Line 383, Address: 0x292750, Func Offset: 0x20
	// Line 384, Address: 0x292754, Func Offset: 0x24
	// Line 385, Address: 0x29275c, Func Offset: 0x2c
	// Line 386, Address: 0x29276c, Func Offset: 0x3c
	// Line 389, Address: 0x292770, Func Offset: 0x40
	// Line 391, Address: 0x292778, Func Offset: 0x48
	// Line 392, Address: 0x29278c, Func Offset: 0x5c
	// Line 393, Address: 0x2927a0, Func Offset: 0x70
	// Line 396, Address: 0x2927b0, Func Offset: 0x80
	// Line 397, Address: 0x2927b8, Func Offset: 0x88
	// Line 400, Address: 0x2927c4, Func Offset: 0x94
	// Line 401, Address: 0x2927c8, Func Offset: 0x98
	// Func End, Address: 0x2927dc, Func Offset: 0xac
}

// 
// Start address: 0x2927e0
unsigned int HH_MemoryManager_MemoryBlock_All_Discard()
{
	unsigned int result;
	// Line 404, Address: 0x2927e0, Func Offset: 0
	// Line 405, Address: 0x2927ec, Func Offset: 0xc
	// Line 407, Address: 0x2927f0, Func Offset: 0x10
	// Line 409, Address: 0x2927fc, Func Offset: 0x1c
	// Line 410, Address: 0x29280c, Func Offset: 0x2c
	// Line 411, Address: 0x29281c, Func Offset: 0x3c
	// Line 413, Address: 0x29282c, Func Offset: 0x4c
	// Line 414, Address: 0x292830, Func Offset: 0x50
	// Func End, Address: 0x292844, Func Offset: 0x64
}

