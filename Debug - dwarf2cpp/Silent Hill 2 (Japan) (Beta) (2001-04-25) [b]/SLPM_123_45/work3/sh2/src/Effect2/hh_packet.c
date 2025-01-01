typedef struct _anon0;
typedef struct Queue_Object;
typedef struct Queue_Element;


typedef <unknown fundamental type (0xa510)> type_0[16384];
typedef unsigned long type_1[2];
typedef Queue_Element type_2[128];

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
	Queue_Element Element[128];
};

struct Queue_Element
{
	void* pAddress;
};

unsigned long _GifTag[2];
Queue_Object* pQueue;
_anon0 _Vif1_Packet;
<unknown fundamental type (0xa510)> _PacketBuffer[16384];
Queue_Object _queue;

_anon0* HH_Vif1Packet_Current_Get();
void HH_Vif1PacketBuffer_Initialize();
void HH_Vif1PacketBuffer_GifTag_Open();
void HH_Vif1PacketBuffer_GifTag_Close();
void HH_Vif1Packet_Send();
int HH_Vif1Packet_FreePacketSize_Get();
void QueueObject_Initialize(Queue_Object* pQueue);
unsigned int QueueObject_enQueue(Queue_Object* pQueue, Queue_Element* pElement);
unsigned int QueueObject_deQueue(Queue_Object* pQueue, Queue_Element* pElement);

// 
// Start address: 0x24b470
_anon0* HH_Vif1Packet_Current_Get()
{
	// Line 100, Address: 0x24b470, Func Offset: 0
	// Line 101, Address: 0x24b478, Func Offset: 0x8
	// Func End, Address: 0x24b480, Func Offset: 0x10
}

// 
// Start address: 0x24b480
void HH_Vif1PacketBuffer_Initialize()
{
	Queue_Element element;
	_anon0* pPacket;
	// Line 105, Address: 0x24b480, Func Offset: 0
	// Line 106, Address: 0x24b48c, Func Offset: 0xc
	// Line 108, Address: 0x24b494, Func Offset: 0x14
	// Line 111, Address: 0x24b4a8, Func Offset: 0x28
	// Line 115, Address: 0x24b4b8, Func Offset: 0x38
	// Line 116, Address: 0x24b4d4, Func Offset: 0x54
	// Line 117, Address: 0x24b4f0, Func Offset: 0x70
	// Line 118, Address: 0x24b500, Func Offset: 0x80
	// Line 122, Address: 0x24b51c, Func Offset: 0x9c
	// Line 123, Address: 0x24b52c, Func Offset: 0xac
	// Line 124, Address: 0x24b53c, Func Offset: 0xbc
	// Line 126, Address: 0x24b554, Func Offset: 0xd4
	// Func End, Address: 0x24b568, Func Offset: 0xe8
}

// 
// Start address: 0x24b570
void HH_Vif1PacketBuffer_GifTag_Open()
{
	// Line 130, Address: 0x24b570, Func Offset: 0
	// Line 131, Address: 0x24b578, Func Offset: 0x8
	// Line 132, Address: 0x24b588, Func Offset: 0x18
	// Line 133, Address: 0x24b5a4, Func Offset: 0x34
	// Line 134, Address: 0x24b5c0, Func Offset: 0x50
	// Line 153, Address: 0x24b5dc, Func Offset: 0x6c
	// Func End, Address: 0x24b5ec, Func Offset: 0x7c
}

// 
// Start address: 0x24b5f0
void HH_Vif1PacketBuffer_GifTag_Close()
{
	// Line 157, Address: 0x24b5f0, Func Offset: 0
	// Line 166, Address: 0x24b5f8, Func Offset: 0x8
	// Line 167, Address: 0x24b608, Func Offset: 0x18
	// Line 168, Address: 0x24b624, Func Offset: 0x34
	// Line 169, Address: 0x24b640, Func Offset: 0x50
	// Line 171, Address: 0x24b65c, Func Offset: 0x6c
	// Func End, Address: 0x24b66c, Func Offset: 0x7c
}

// 
// Start address: 0x24b670
void HH_Vif1Packet_Send()
{
	Queue_Element element;
	_anon0* pPacket;
	// Line 175, Address: 0x24b670, Func Offset: 0
	// Line 178, Address: 0x24b67c, Func Offset: 0xc
	// Line 180, Address: 0x24b684, Func Offset: 0x14
	// Line 181, Address: 0x24b690, Func Offset: 0x20
	// Line 182, Address: 0x24b69c, Func Offset: 0x2c
	// Line 183, Address: 0x24b6ac, Func Offset: 0x3c
	// Line 189, Address: 0x24b6b8, Func Offset: 0x48
	// Line 190, Address: 0x24b6c0, Func Offset: 0x50
	// Line 191, Address: 0x24b6cc, Func Offset: 0x5c
	// Line 193, Address: 0x24b6ec, Func Offset: 0x7c
	// Func End, Address: 0x24b700, Func Offset: 0x90
}

// 
// Start address: 0x24b700
int HH_Vif1Packet_FreePacketSize_Get()
{
	// Line 200, Address: 0x24b700, Func Offset: 0
	// Line 202, Address: 0x24b724, Func Offset: 0x24
	// Func End, Address: 0x24b72c, Func Offset: 0x2c
}

// 
// Start address: 0x24b730
void QueueObject_Initialize(Queue_Object* pQueue)
{
	// Line 209, Address: 0x24b730, Func Offset: 0
	// Line 210, Address: 0x24b738, Func Offset: 0x8
	// Line 211, Address: 0x24b740, Func Offset: 0x10
	// Line 212, Address: 0x24b748, Func Offset: 0x18
	// Line 213, Address: 0x24b750, Func Offset: 0x20
	// Line 214, Address: 0x24b75c, Func Offset: 0x2c
	// Func End, Address: 0x24b768, Func Offset: 0x38
}

// 
// Start address: 0x24b770
unsigned int QueueObject_enQueue(Queue_Object* pQueue, Queue_Element* pElement)
{
	unsigned int result;
	// Line 217, Address: 0x24b770, Func Offset: 0
	// Line 218, Address: 0x24b780, Func Offset: 0x10
	// Line 220, Address: 0x24b784, Func Offset: 0x14
	// Line 221, Address: 0x24b7a0, Func Offset: 0x30
	// Line 222, Address: 0x24b7cc, Func Offset: 0x5c
	// Line 223, Address: 0x24b7f4, Func Offset: 0x84
	// Line 224, Address: 0x24b804, Func Offset: 0x94
	// Line 226, Address: 0x24b808, Func Offset: 0x98
	// Line 227, Address: 0x24b80c, Func Offset: 0x9c
	// Func End, Address: 0x24b81c, Func Offset: 0xac
}

// 
// Start address: 0x24b820
unsigned int QueueObject_deQueue(Queue_Object* pQueue, Queue_Element* pElement)
{
	unsigned int result;
	// Line 230, Address: 0x24b820, Func Offset: 0
	// Line 231, Address: 0x24b830, Func Offset: 0x10
	// Line 233, Address: 0x24b834, Func Offset: 0x14
	// Line 234, Address: 0x24b844, Func Offset: 0x24
	// Line 235, Address: 0x24b870, Func Offset: 0x50
	// Line 236, Address: 0x24b894, Func Offset: 0x74
	// Line 237, Address: 0x24b8a4, Func Offset: 0x84
	// Line 239, Address: 0x24b8a8, Func Offset: 0x88
	// Line 240, Address: 0x24b8ac, Func Offset: 0x8c
	// Func End, Address: 0x24b8bc, Func Offset: 0x9c
}

