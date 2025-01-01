typedef struct _anon0;
typedef struct Queue_Object;
typedef struct Queue_Element;


typedef unsigned long type_0[2];
typedef unsigned long type_1[2];
typedef unsigned long type_2[2];
typedef Queue_Element type_3[8];
typedef unsigned long type_4[2];
typedef unsigned long type_5[2];
typedef unsigned long type_6[2];

struct _anon0
{
	unsigned int* pCurrent;
	<unknown fundamental type (0xa510)>* pBase;
	<unknown fundamental type (0xa510)>* pDmaTag;
	unsigned int* pVifCode;
	unsigned int numlen;
	unsigned long* pGifTag;
	unsigned int pad12;
	unsigned int pad13;
};

struct Queue_Object
{
	unsigned int enQueue;
	unsigned int deQueue;
	unsigned int Length_Current;
	unsigned int Length_Max;
	Queue_Element Element[8];
};

struct Queue_Element
{
	void* pAddress;
};

unsigned long _GifTag_First[2];
unsigned long _GifTag_Final[2];
unsigned long _GifTag_GS_AD[2];
unsigned long _GifTag_Sprite[2];
unsigned long _GifTag_TriangleStrip[2];
unsigned long _GifTag_TriangleFan[2];
Queue_Object* pQueue;
_anon0 _Vif1_Packet;
Queue_Object _queue;

void QueueObject_Initialize(Queue_Object* pQueue);
unsigned int QueueObject_enQueue(Queue_Object* pQueue, Queue_Element* pElement);
unsigned int QueueObject_deQueue(Queue_Object* pQueue, Queue_Element* pElement);
unsigned int HH_Vif1PacketBuffer_Memory_Allocate_Check();
_anon0* HH_Vif1Packet_Current_Get();
void HH_Vif1PacketBuffer_Initialize();
void HH_Vif1PacketBuffer_Prefix_GifTag_Open();
void HH_Vif1PacketBuffer_Suffix_GifTag_Open();
void HH_Vif1PacketBuffer_GifTag_Open();
void HH_Vif1PacketBuffer_GifTag_Close();
void HH_Vif1Packet_Send();
int HH_Vif1Packet_FreePacketSize_Get();
void HH_Vif1Packet_GeneralGifTag_GS_AD_Open();
void HH_Vif1Packet_GeneralGifTag_Sprite_Open();
void HH_Vif1Packet_GeneralGifTag_TriangleStrip_Open();
void HH_Vif1Packet_GeneralGifTag_TriangleFan_Open();

// 
// Start address: 0x26b3e0
void QueueObject_Initialize(Queue_Object* pQueue)
{
	// Line 221, Address: 0x26b3e0, Func Offset: 0
	// Line 222, Address: 0x26b3e4, Func Offset: 0x4
	// Line 223, Address: 0x26b3e8, Func Offset: 0x8
	// Line 224, Address: 0x26b3ec, Func Offset: 0xc
	// Line 225, Address: 0x26b3f4, Func Offset: 0x14
	// Func End, Address: 0x26b3fc, Func Offset: 0x1c
}

// 
// Start address: 0x26b400
unsigned int QueueObject_enQueue(Queue_Object* pQueue, Queue_Element* pElement)
{
	unsigned int result;
	// Line 239, Address: 0x26b400, Func Offset: 0
	// Line 241, Address: 0x26b404, Func Offset: 0x4
	// Line 242, Address: 0x26b418, Func Offset: 0x18
	// Line 243, Address: 0x26b434, Func Offset: 0x34
	// Line 244, Address: 0x26b450, Func Offset: 0x50
	// Line 245, Address: 0x26b45c, Func Offset: 0x5c
	// Line 248, Address: 0x26b460, Func Offset: 0x60
	// Func End, Address: 0x26b468, Func Offset: 0x68
}

// 
// Start address: 0x26b470
unsigned int QueueObject_deQueue(Queue_Object* pQueue, Queue_Element* pElement)
{
	unsigned int result;
	// Line 262, Address: 0x26b470, Func Offset: 0
	// Line 264, Address: 0x26b474, Func Offset: 0x4
	// Line 265, Address: 0x26b480, Func Offset: 0x10
	// Line 266, Address: 0x26b49c, Func Offset: 0x2c
	// Line 267, Address: 0x26b4b8, Func Offset: 0x48
	// Line 268, Address: 0x26b4c4, Func Offset: 0x54
	// Line 271, Address: 0x26b4c8, Func Offset: 0x58
	// Func End, Address: 0x26b4d0, Func Offset: 0x60
}

// 
// Start address: 0x26b4d0
unsigned int HH_Vif1PacketBuffer_Memory_Allocate_Check()
{
	unsigned int result;
	// Line 317, Address: 0x26b4d0, Func Offset: 0
	// Line 318, Address: 0x26b4dc, Func Offset: 0xc
	// Line 320, Address: 0x26b4e0, Func Offset: 0x10
	// Line 321, Address: 0x26b4f4, Func Offset: 0x24
	// Line 323, Address: 0x26b4f8, Func Offset: 0x28
	// Line 324, Address: 0x26b4fc, Func Offset: 0x2c
	// Func End, Address: 0x26b510, Func Offset: 0x40
}

// 
// Start address: 0x26b510
_anon0* HH_Vif1Packet_Current_Get()
{
	// Line 373, Address: 0x26b510, Func Offset: 0
	// Line 374, Address: 0x26b518, Func Offset: 0x8
	// Func End, Address: 0x26b520, Func Offset: 0x10
}

// 
// Start address: 0x26b520
void HH_Vif1PacketBuffer_Initialize()
{
	Queue_Element element;
	_anon0* pPacket;
	<unknown fundamental type (0xa510)>* pPacketBuffer;
	// Line 383, Address: 0x26b520, Func Offset: 0
	// Line 384, Address: 0x26b52c, Func Offset: 0xc
	// Line 385, Address: 0x26b538, Func Offset: 0x18
	// Line 387, Address: 0x26b540, Func Offset: 0x20
	// Line 390, Address: 0x26b554, Func Offset: 0x34
	// Line 394, Address: 0x26b564, Func Offset: 0x44
	// Line 395, Address: 0x26b584, Func Offset: 0x64
	// Line 396, Address: 0x26b59c, Func Offset: 0x7c
	// Line 397, Address: 0x26b5ac, Func Offset: 0x8c
	// Line 401, Address: 0x26b5d4, Func Offset: 0xb4
	// Line 402, Address: 0x26b5e4, Func Offset: 0xc4
	// Line 404, Address: 0x26b5f4, Func Offset: 0xd4
	// Func End, Address: 0x26b608, Func Offset: 0xe8
}

// 
// Start address: 0x26b610
void HH_Vif1PacketBuffer_Prefix_GifTag_Open()
{
	_anon0* pPacket;
	// Line 413, Address: 0x26b610, Func Offset: 0
	// Line 422, Address: 0x26b618, Func Offset: 0x8
	// Line 425, Address: 0x26b620, Func Offset: 0x10
	// Line 427, Address: 0x26b63c, Func Offset: 0x2c
	// Line 428, Address: 0x26b654, Func Offset: 0x44
	// Line 429, Address: 0x26b668, Func Offset: 0x58
	// Line 430, Address: 0x26b690, Func Offset: 0x80
	// Line 442, Address: 0x26b6ac, Func Offset: 0x9c
	// Line 443, Address: 0x26b6c4, Func Offset: 0xb4
	// Line 444, Address: 0x26b6ec, Func Offset: 0xdc
	// Func End, Address: 0x26b6fc, Func Offset: 0xec
}

// 
// Start address: 0x26b700
void HH_Vif1PacketBuffer_Suffix_GifTag_Open()
{
	_anon0* pPacket;
	// Line 453, Address: 0x26b700, Func Offset: 0
	// Line 458, Address: 0x26b708, Func Offset: 0x8
	// Line 461, Address: 0x26b718, Func Offset: 0x18
	// Line 463, Address: 0x26b734, Func Offset: 0x34
	// Line 475, Address: 0x26b750, Func Offset: 0x50
	// Line 476, Address: 0x26b768, Func Offset: 0x68
	// Line 477, Address: 0x26b77c, Func Offset: 0x7c
	// Line 478, Address: 0x26b798, Func Offset: 0x98
	// Line 480, Address: 0x26b7b0, Func Offset: 0xb0
	// Line 482, Address: 0x26b7c0, Func Offset: 0xc0
	// Line 483, Address: 0x26b7c8, Func Offset: 0xc8
	// Func End, Address: 0x26b7d8, Func Offset: 0xd8
}

// 
// Start address: 0x26b7e0
void HH_Vif1PacketBuffer_GifTag_Open()
{
	// Line 492, Address: 0x26b7e0, Func Offset: 0
	// Line 493, Address: 0x26b7e8, Func Offset: 0x8
	// Line 494, Address: 0x26b7f8, Func Offset: 0x18
	// Line 495, Address: 0x26b814, Func Offset: 0x34
	// Line 496, Address: 0x26b830, Func Offset: 0x50
	// Line 515, Address: 0x26b854, Func Offset: 0x74
	// Func End, Address: 0x26b864, Func Offset: 0x84
}

// 
// Start address: 0x26b870
void HH_Vif1PacketBuffer_GifTag_Close()
{
	// Line 524, Address: 0x26b870, Func Offset: 0
	// Line 533, Address: 0x26b878, Func Offset: 0x8
	// Line 534, Address: 0x26b888, Func Offset: 0x18
	// Line 535, Address: 0x26b8a4, Func Offset: 0x34
	// Line 536, Address: 0x26b8c0, Func Offset: 0x50
	// Line 538, Address: 0x26b8e4, Func Offset: 0x74
	// Func End, Address: 0x26b8f4, Func Offset: 0x84
}

// 
// Start address: 0x26b900
void HH_Vif1Packet_Send()
{
	int Command_ID;
	Queue_Element element;
	_anon0* pPacket;
	// Line 547, Address: 0x26b900, Func Offset: 0
	// Line 552, Address: 0x26b908, Func Offset: 0x8
	// Line 553, Address: 0x26b918, Func Offset: 0x18
	// Line 554, Address: 0x26b92c, Func Offset: 0x2c
	// Line 560, Address: 0x26b93c, Func Offset: 0x3c
	// Line 561, Address: 0x26b944, Func Offset: 0x44
	// Line 572, Address: 0x26b950, Func Offset: 0x50
	// Line 574, Address: 0x26b96c, Func Offset: 0x6c
	// Func End, Address: 0x26b97c, Func Offset: 0x7c
}

// 
// Start address: 0x26b980
int HH_Vif1Packet_FreePacketSize_Get()
{
	<unknown fundamental type (0xa510)>* pPacketBuffer;
	// Line 584, Address: 0x26b980, Func Offset: 0
	// Line 585, Address: 0x26b988, Func Offset: 0x8
	// Line 589, Address: 0x26b994, Func Offset: 0x14
	// Line 591, Address: 0x26b9b0, Func Offset: 0x30
	// Func End, Address: 0x26b9c0, Func Offset: 0x40
}

// 
// Start address: 0x26b9c0
void HH_Vif1Packet_GeneralGifTag_GS_AD_Open()
{
	// Line 604, Address: 0x26b9c0, Func Offset: 0
	// Line 605, Address: 0x26b9c8, Func Offset: 0x8
	// Line 606, Address: 0x26b9e4, Func Offset: 0x24
	// Func End, Address: 0x26b9f4, Func Offset: 0x34
}

// 
// Start address: 0x26ba00
void HH_Vif1Packet_GeneralGifTag_Sprite_Open()
{
	// Line 615, Address: 0x26ba00, Func Offset: 0
	// Line 616, Address: 0x26ba08, Func Offset: 0x8
	// Line 617, Address: 0x26ba24, Func Offset: 0x24
	// Func End, Address: 0x26ba34, Func Offset: 0x34
}

// 
// Start address: 0x26ba40
void HH_Vif1Packet_GeneralGifTag_TriangleStrip_Open()
{
	// Line 626, Address: 0x26ba40, Func Offset: 0
	// Line 627, Address: 0x26ba48, Func Offset: 0x8
	// Line 628, Address: 0x26ba64, Func Offset: 0x24
	// Func End, Address: 0x26ba74, Func Offset: 0x34
}

// 
// Start address: 0x26ba80
void HH_Vif1Packet_GeneralGifTag_TriangleFan_Open()
{
	// Line 637, Address: 0x26ba80, Func Offset: 0
	// Line 638, Address: 0x26ba88, Func Offset: 0x8
	// Line 639, Address: 0x26baa4, Func Offset: 0x24
	// Func End, Address: 0x26bab4, Func Offset: 0x34
}

