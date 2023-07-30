typedef struct DS_Record;
typedef struct DS_Record_Edit;
typedef struct Record_Info;
typedef struct DS_Record_Header;
typedef struct EntryRecord;
typedef struct DS_Object_Info;
typedef struct DSR_MUD;
typedef struct DSR_MU_EventDescriptor;
typedef struct Sequencer_Data;


typedef unsigned char type_0[16];
typedef unsigned int type_1[2];
typedef unsigned int type_2[64];
typedef unsigned char type_3[2];
typedef DSR_MU_EventDescriptor type_4[100];
typedef float type_5[4];
typedef Sequencer_Data type_6[2];
typedef EntryRecord type_7[20];

struct DS_Record
{
	float Time;
	unsigned char Actuater_LV;
	unsigned char Complement_Enable;
	unsigned char Reserved[2];
};

struct DS_Record_Edit
{
	DS_Record Record;
	DS_Record_Edit* pPrev;
	DS_Record_Edit* pNext;
};

struct Record_Info
{
	DS_Object_Info* pObject;
	void* pAddress;
};

struct DS_Record_Header
{
	unsigned char DataName[16];
	unsigned int Revision;
	unsigned int Object_Num;
	unsigned int Reserved[2];
};

struct EntryRecord
{
	unsigned short Enable;
	unsigned short Controller_ID;
	unsigned int Handle;
	unsigned int Group_Handle;
	unsigned int Condition;
	float Time_Count;
	float Time_Max;
	float Ratio;
	Record_Info Info;
};

struct DS_Object_Info
{
	unsigned int Offset;
	unsigned int DataNode_num;
	unsigned short Type;
	unsigned short ID;
	unsigned short Attribute;
	unsigned short Permission;
};

struct DSR_MUD
{
	float Different_Time;
	unsigned int Handle_History;
	unsigned int EntryRecord_Count;
	unsigned int enQueue_Pos;
	unsigned int deQueue_Pos;
	unsigned int EventQueue_Count;
};

struct DSR_MU_EventDescriptor
{
	unsigned int Handle;
	unsigned int EventID;
	float Value;
};

struct Sequencer_Data
{
	float ActuaterLV[4];
};

Sequencer_Data* pSD;
DSR_MUD* pMUD;
EntryRecord EntryTable[20];
DSR_MU_EventDescriptor _EventQueue[100];
DSR_MUD _mud;
Sequencer_Data _sd[2];

void SequencerManager();
void Sequencer_Type_Hispeed(EntryRecord* pER);
void Sequencer_Type_Lowspeed(EntryRecord* pER);
void Sequencer_Type_Hispeed_Edit(EntryRecord* pER);
void Sequencer_Type_Lowspeed_Edit(EntryRecord* pER);
unsigned int EntryRecord_Enable_Check(EntryRecord* pER);
unsigned int EntryRecord_TimeOver_Check(EntryRecord* pER);
unsigned int EntryRecord_Type_Get(EntryRecord* pER);
unsigned int EntryRecord_ID_Get(EntryRecord* pER);
unsigned int EntryRecord_Attribute_Get(EntryRecord* pER);
unsigned int EntryRecord_Condition_Get(EntryRecord* pER);
void EntryRecord_Condition_Set(EntryRecord* pER, unsigned int Condition);
unsigned int EntryRecord_Handle_Get(EntryRecord* pER);
void EntryRecord_Initialize(EntryRecord* pER);
unsigned int EntryRecord_EntryCount_Get();
unsigned int EntryRecord_EntryFreeCount_Get();
unsigned int EntryRecord_EntryCount_Increment();
unsigned int EntryRecord_EntryCount_Decrement();
float Sequence_Different_Time_Get();
void Sequence_Different_Time_Set(float Time);
unsigned int EntryRecord_Handle_Create();
EntryRecord* EntryRecord_Get_fromTableIndex(unsigned int EntryTable_Index);
EntryRecord* EntryRecord_Get_fromHandle(unsigned int Handle);
unsigned int EntryRecord_Handle_Search(unsigned int Handle);
unsigned int EntryRecord_ID_Search(unsigned int ID);
unsigned int EntryRecord_Attribute_Search(unsigned int Attribute);
void EntryRecord_Time_Count(EntryRecord* pER);
void EntryRecord_Time_Set(EntryRecord* pER, float Time);
void EntryRecord_Ratio_Set(EntryRecord* pER, float Ratio);
EntryRecord* EntryRecordTable_FreeSpace_Search();
void EntryRecordTable_All_Initialize();
unsigned int EntryRecord_Entry(unsigned int* pHandleArray, DS_Record_Header* pHeader, unsigned int ControllerID, float Ratio);
unsigned int DSR_FileFormat_ErrorChecker(DS_Record_Header* pHeader);
unsigned int DSR_FF_Header_ErrorChecker(DS_Record_Header* pHeader);
void TotalActuaterLV_Keeper(unsigned int ControllerID, unsigned int ActuaterType, float ActuaterLV);
void TotalActuaterLV_Send(unsigned int ControllerID, unsigned int ActuaterType);
void TotalActuaterLV_Initialize(unsigned int ControllerID, unsigned int ActuaterType);
float ActuaterLV_Complement(DS_Record* pDSR, float Time);
float ActuaterLV_Complement_Edit(DS_Record_Edit* pDSR, float Time);
int Node_Next_Search(Record_Info* pInfo, float Time);
int Node_Current_Search(Record_Info* pInfo, float Time);
DS_Record_Edit* EditNode_Current_Search(Record_Info* pInfo, float Time);
void EventManager();
unsigned int EventMessage_Post(unsigned int Handle, unsigned int EventID, float Value);
unsigned int EventMessageQueue_enQueue(DSR_MU_EventDescriptor* pDescriptor);
unsigned int EventMessageQueue_deQueue(DSR_MU_EventDescriptor* pDescriptor);
void EventMessageQueue_Initialize();
unsigned int EventMessageQueue_Length_Get();
void DSR_MUD_Initialize();
unsigned int DSR_Entry0(void* pAddress, unsigned int ControllerID, float Ratio);
void DSR_Sequencer_Initialize();
void DSR_Sequencer();
void DSR_Sequence_Different_Time_Set(float Different_Time);

// 
// Start address: 0x24b8c0
void SequencerManager()
{
	unsigned int Handle;
	EntryRecord* pER;
	unsigned int i;
	// Line 228, Address: 0x24b8c0, Func Offset: 0
	// Line 232, Address: 0x24b8d4, Func Offset: 0x14
	// Line 233, Address: 0x24b8e0, Func Offset: 0x20
	// Line 236, Address: 0x24b8f0, Func Offset: 0x30
	// Line 237, Address: 0x24b904, Func Offset: 0x44
	// Line 240, Address: 0x24b914, Func Offset: 0x54
	// Line 244, Address: 0x24b954, Func Offset: 0x94
	// Line 246, Address: 0x24b994, Func Offset: 0xd4
	// Line 247, Address: 0x24b9a0, Func Offset: 0xe0
	// Line 249, Address: 0x24b9a8, Func Offset: 0xe8
	// Line 250, Address: 0x24b9b4, Func Offset: 0xf4
	// Line 252, Address: 0x24b9bc, Func Offset: 0xfc
	// Line 253, Address: 0x24b9c8, Func Offset: 0x108
	// Line 255, Address: 0x24b9d0, Func Offset: 0x110
	// Line 259, Address: 0x24b9dc, Func Offset: 0x11c
	// Line 261, Address: 0x24b9e0, Func Offset: 0x120
	// Line 266, Address: 0x24b9f4, Func Offset: 0x134
	// Line 267, Address: 0x24ba08, Func Offset: 0x148
	// Line 272, Address: 0x24ba48, Func Offset: 0x188
	// Line 273, Address: 0x24ba5c, Func Offset: 0x19c
	// Line 277, Address: 0x24ba64, Func Offset: 0x1a4
	// Line 278, Address: 0x24ba78, Func Offset: 0x1b8
	// Line 291, Address: 0x24ba8c, Func Offset: 0x1cc
	// Line 293, Address: 0x24ba90, Func Offset: 0x1d0
	// Line 294, Address: 0x24baa4, Func Offset: 0x1e4
	// Func End, Address: 0x24bac0, Func Offset: 0x200
}

// 
// Start address: 0x24bac0
void Sequencer_Type_Hispeed(EntryRecord* pER)
{
	float section_1;
	float section_0;
	unsigned int now_act_lv_i;
	DS_Record* pDSR;
	int Node_Next;
	int Node;
	float time;
	Record_Info* pInfo;
	// Line 299, Address: 0x24bac0, Func Offset: 0
	// Line 300, Address: 0x24baec, Func Offset: 0x2c
	// Line 301, Address: 0x24baf4, Func Offset: 0x34
	// Line 304, Address: 0x24bb00, Func Offset: 0x40
	// Line 305, Address: 0x24bb14, Func Offset: 0x54
	// Line 309, Address: 0x24bb28, Func Offset: 0x68
	// Line 310, Address: 0x24bb40, Func Offset: 0x80
	// Line 311, Address: 0x24bb4c, Func Offset: 0x8c
	// Line 315, Address: 0x24bb50, Func Offset: 0x90
	// Line 316, Address: 0x24bb5c, Func Offset: 0x9c
	// Line 317, Address: 0x24bb7c, Func Offset: 0xbc
	// Line 320, Address: 0x24bb84, Func Offset: 0xc4
	// Line 322, Address: 0x24bb8c, Func Offset: 0xcc
	// Line 325, Address: 0x24bba0, Func Offset: 0xe0
	// Line 326, Address: 0x24bbd0, Func Offset: 0x110
	// Line 330, Address: 0x24bbf0, Func Offset: 0x130
	// Line 333, Address: 0x24bc24, Func Offset: 0x164
	// Line 336, Address: 0x24bc74, Func Offset: 0x1b4
	// Func End, Address: 0x24bca4, Func Offset: 0x1e4
}

// 
// Start address: 0x24bcb0
void Sequencer_Type_Lowspeed(EntryRecord* pER)
{
	float now_act_lv_f;
	DS_Record* pDSR;
	int Node_Next;
	int Node;
	float time;
	Record_Info* pInfo;
	// Line 341, Address: 0x24bcb0, Func Offset: 0
	// Line 342, Address: 0x24bccc, Func Offset: 0x1c
	// Line 343, Address: 0x24bcd4, Func Offset: 0x24
	// Line 346, Address: 0x24bce0, Func Offset: 0x30
	// Line 347, Address: 0x24bcf4, Func Offset: 0x44
	// Line 352, Address: 0x24bd08, Func Offset: 0x58
	// Line 353, Address: 0x24bd20, Func Offset: 0x70
	// Line 354, Address: 0x24bd2c, Func Offset: 0x7c
	// Line 358, Address: 0x24bd38, Func Offset: 0x88
	// Line 359, Address: 0x24bd44, Func Offset: 0x94
	// Line 362, Address: 0x24bd58, Func Offset: 0xa8
	// Line 365, Address: 0x24bd6c, Func Offset: 0xbc
	// Line 368, Address: 0x24bd88, Func Offset: 0xd8
	// Func End, Address: 0x24bda8, Func Offset: 0xf8
}

// 
// Start address: 0x24bdb0
void Sequencer_Type_Hispeed_Edit(EntryRecord* pER)
{
	float section_1;
	float section_0;
	unsigned int now_act_lv_i;
	DS_Record_Edit* pDSR;
	float time;
	Record_Info* pInfo;
	// Line 373, Address: 0x24bdb0, Func Offset: 0
	// Line 374, Address: 0x24bdd4, Func Offset: 0x24
	// Line 375, Address: 0x24bddc, Func Offset: 0x2c
	// Line 378, Address: 0x24bde8, Func Offset: 0x38
	// Line 380, Address: 0x24bdfc, Func Offset: 0x4c
	// Line 381, Address: 0x24be04, Func Offset: 0x54
	// Line 382, Address: 0x24be10, Func Offset: 0x60
	// Line 385, Address: 0x24be14, Func Offset: 0x64
	// Line 386, Address: 0x24be20, Func Offset: 0x70
	// Line 387, Address: 0x24be40, Func Offset: 0x90
	// Line 390, Address: 0x24be48, Func Offset: 0x98
	// Line 392, Address: 0x24be50, Func Offset: 0xa0
	// Line 395, Address: 0x24be64, Func Offset: 0xb4
	// Line 396, Address: 0x24be94, Func Offset: 0xe4
	// Line 400, Address: 0x24beb4, Func Offset: 0x104
	// Line 403, Address: 0x24bee8, Func Offset: 0x138
	// Line 407, Address: 0x24bf38, Func Offset: 0x188
	// Func End, Address: 0x24bf60, Func Offset: 0x1b0
}

// 
// Start address: 0x24bf60
void Sequencer_Type_Lowspeed_Edit(EntryRecord* pER)
{
	float now_act_lv_f;
	DS_Record_Edit* pDSR;
	float time;
	Record_Info* pInfo;
	// Line 412, Address: 0x24bf60, Func Offset: 0
	// Line 413, Address: 0x24bf74, Func Offset: 0x14
	// Line 414, Address: 0x24bf7c, Func Offset: 0x1c
	// Line 417, Address: 0x24bf88, Func Offset: 0x28
	// Line 419, Address: 0x24bf9c, Func Offset: 0x3c
	// Line 420, Address: 0x24bfa4, Func Offset: 0x44
	// Line 421, Address: 0x24bfb0, Func Offset: 0x50
	// Line 424, Address: 0x24bfbc, Func Offset: 0x5c
	// Line 425, Address: 0x24bfc8, Func Offset: 0x68
	// Line 428, Address: 0x24bfdc, Func Offset: 0x7c
	// Line 431, Address: 0x24bff0, Func Offset: 0x90
	// Line 435, Address: 0x24c00c, Func Offset: 0xac
	// Func End, Address: 0x24c024, Func Offset: 0xc4
}

// 
// Start address: 0x24c030
unsigned int EntryRecord_Enable_Check(EntryRecord* pER)
{
	// Line 446, Address: 0x24c030, Func Offset: 0
	// Line 447, Address: 0x24c038, Func Offset: 0x8
	// Line 448, Address: 0x24c044, Func Offset: 0x14
	// Func End, Address: 0x24c050, Func Offset: 0x20
}

// 
// Start address: 0x24c050
unsigned int EntryRecord_TimeOver_Check(EntryRecord* pER)
{
	unsigned int result;
	// Line 452, Address: 0x24c050, Func Offset: 0
	// Line 453, Address: 0x24c05c, Func Offset: 0xc
	// Line 455, Address: 0x24c060, Func Offset: 0x10
	// Line 456, Address: 0x24c080, Func Offset: 0x30
	// Line 459, Address: 0x24c084, Func Offset: 0x34
	// Line 460, Address: 0x24c088, Func Offset: 0x38
	// Func End, Address: 0x24c098, Func Offset: 0x48
}

// 
// Start address: 0x24c0a0
unsigned int EntryRecord_Type_Get(EntryRecord* pER)
{
	// Line 465, Address: 0x24c0a0, Func Offset: 0
	// Line 466, Address: 0x24c0a8, Func Offset: 0x8
	// Line 467, Address: 0x24c0b8, Func Offset: 0x18
	// Func End, Address: 0x24c0c4, Func Offset: 0x24
}

// 
// Start address: 0x24c0d0
unsigned int EntryRecord_ID_Get(EntryRecord* pER)
{
	// Line 479, Address: 0x24c0d0, Func Offset: 0
	// Line 480, Address: 0x24c0d8, Func Offset: 0x8
	// Line 481, Address: 0x24c0e8, Func Offset: 0x18
	// Func End, Address: 0x24c0f4, Func Offset: 0x24
}

// 
// Start address: 0x24c100
unsigned int EntryRecord_Attribute_Get(EntryRecord* pER)
{
	// Line 493, Address: 0x24c100, Func Offset: 0
	// Line 494, Address: 0x24c108, Func Offset: 0x8
	// Line 495, Address: 0x24c118, Func Offset: 0x18
	// Func End, Address: 0x24c124, Func Offset: 0x24
}

// 
// Start address: 0x24c130
unsigned int EntryRecord_Condition_Get(EntryRecord* pER)
{
	// Line 508, Address: 0x24c130, Func Offset: 0
	// Line 509, Address: 0x24c138, Func Offset: 0x8
	// Line 510, Address: 0x24c140, Func Offset: 0x10
	// Func End, Address: 0x24c14c, Func Offset: 0x1c
}

// 
// Start address: 0x24c150
void EntryRecord_Condition_Set(EntryRecord* pER, unsigned int Condition)
{
	// Line 515, Address: 0x24c150, Func Offset: 0
	// Line 516, Address: 0x24c15c, Func Offset: 0xc
	// Line 517, Address: 0x24c168, Func Offset: 0x18
	// Func End, Address: 0x24c174, Func Offset: 0x24
}

// 
// Start address: 0x24c180
unsigned int EntryRecord_Handle_Get(EntryRecord* pER)
{
	// Line 522, Address: 0x24c180, Func Offset: 0
	// Line 523, Address: 0x24c188, Func Offset: 0x8
	// Line 524, Address: 0x24c190, Func Offset: 0x10
	// Func End, Address: 0x24c19c, Func Offset: 0x1c
}

// 
// Start address: 0x24c1a0
void EntryRecord_Initialize(EntryRecord* pER)
{
	// Line 529, Address: 0x24c1a0, Func Offset: 0
	// Line 530, Address: 0x24c1ac, Func Offset: 0xc
	// Line 531, Address: 0x24c1c0, Func Offset: 0x20
	// Func End, Address: 0x24c1d0, Func Offset: 0x30
}

// 
// Start address: 0x24c1d0
unsigned int EntryRecord_EntryCount_Get()
{
	// Line 536, Address: 0x24c1d0, Func Offset: 0
	// Line 537, Address: 0x24c1dc, Func Offset: 0xc
	// Func End, Address: 0x24c1e4, Func Offset: 0x14
}

// 
// Start address: 0x24c1f0
unsigned int EntryRecord_EntryFreeCount_Get()
{
	// Line 542, Address: 0x24c1f0, Func Offset: 0
	// Line 543, Address: 0x24c204, Func Offset: 0x14
	// Func End, Address: 0x24c20c, Func Offset: 0x1c
}

// 
// Start address: 0x24c210
unsigned int EntryRecord_EntryCount_Increment()
{
	// Line 548, Address: 0x24c210, Func Offset: 0
	// Line 549, Address: 0x24c224, Func Offset: 0x14
	// Func End, Address: 0x24c22c, Func Offset: 0x1c
}

// 
// Start address: 0x24c230
unsigned int EntryRecord_EntryCount_Decrement()
{
	// Line 554, Address: 0x24c230, Func Offset: 0
	// Line 555, Address: 0x24c244, Func Offset: 0x14
	// Line 558, Address: 0x24c258, Func Offset: 0x28
	// Line 559, Address: 0x24c264, Func Offset: 0x34
	// Func End, Address: 0x24c26c, Func Offset: 0x3c
}

// 
// Start address: 0x24c270
float Sequence_Different_Time_Get()
{
	// Line 564, Address: 0x24c270, Func Offset: 0
	// Line 565, Address: 0x24c27c, Func Offset: 0xc
	// Func End, Address: 0x24c284, Func Offset: 0x14
}

// 
// Start address: 0x24c290
void Sequence_Different_Time_Set(float Time)
{
	// Line 569, Address: 0x24c290, Func Offset: 0
	// Line 570, Address: 0x24c298, Func Offset: 0x8
	// Line 571, Address: 0x24c2a8, Func Offset: 0x18
	// Func End, Address: 0x24c2b4, Func Offset: 0x24
}

// 
// Start address: 0x24c2c0
unsigned int EntryRecord_Handle_Create()
{
	unsigned int result;
	// Line 578, Address: 0x24c2c0, Func Offset: 0
	// Line 579, Address: 0x24c2cc, Func Offset: 0xc
	// Line 581, Address: 0x24c2dc, Func Offset: 0x1c
	// Line 582, Address: 0x24c2e4, Func Offset: 0x24
	// Line 583, Address: 0x24c2e8, Func Offset: 0x28
	// Line 584, Address: 0x24c304, Func Offset: 0x44
	// Line 586, Address: 0x24c310, Func Offset: 0x50
	// Line 587, Address: 0x24c314, Func Offset: 0x54
	// Func End, Address: 0x24c328, Func Offset: 0x68
}

// 
// Start address: 0x24c330
EntryRecord* EntryRecord_Get_fromTableIndex(unsigned int EntryTable_Index)
{
	// Line 592, Address: 0x24c330, Func Offset: 0
	// Line 594, Address: 0x24c33c, Func Offset: 0xc
	// Line 596, Address: 0x24c370, Func Offset: 0x40
	// Line 597, Address: 0x24c38c, Func Offset: 0x5c
	// Func End, Address: 0x24c39c, Func Offset: 0x6c
}

// 
// Start address: 0x24c3a0
EntryRecord* EntryRecord_Get_fromHandle(unsigned int Handle)
{
	EntryRecord* pER;
	int i;
	void* result;
	// Line 604, Address: 0x24c3a0, Func Offset: 0
	// Line 605, Address: 0x24c3b8, Func Offset: 0x18
	// Line 609, Address: 0x24c3bc, Func Offset: 0x1c
	// Line 610, Address: 0x24c3c8, Func Offset: 0x28
	// Line 612, Address: 0x24c3d8, Func Offset: 0x38
	// Line 613, Address: 0x24c3ec, Func Offset: 0x4c
	// Line 614, Address: 0x24c404, Func Offset: 0x64
	// Line 615, Address: 0x24c408, Func Offset: 0x68
	// Line 618, Address: 0x24c410, Func Offset: 0x70
	// Line 620, Address: 0x24c428, Func Offset: 0x88
	// Line 621, Address: 0x24c42c, Func Offset: 0x8c
	// Func End, Address: 0x24c448, Func Offset: 0xa8
}

// 
// Start address: 0x24c450
unsigned int EntryRecord_Handle_Search(unsigned int Handle)
{
	unsigned int result;
	// Line 628, Address: 0x24c450, Func Offset: 0
	// Line 629, Address: 0x24c460, Func Offset: 0x10
	// Line 632, Address: 0x24c464, Func Offset: 0x14
	// Line 633, Address: 0x24c478, Func Offset: 0x28
	// Line 636, Address: 0x24c47c, Func Offset: 0x2c
	// Line 637, Address: 0x24c480, Func Offset: 0x30
	// Func End, Address: 0x24c494, Func Offset: 0x44
}

// 
// Start address: 0x24c4a0
unsigned int EntryRecord_ID_Search(unsigned int ID)
{
	EntryRecord* pER;
	int i;
	unsigned int result;
	// Line 647, Address: 0x24c4a0, Func Offset: 0
	// Line 648, Address: 0x24c4b8, Func Offset: 0x18
	// Line 652, Address: 0x24c4bc, Func Offset: 0x1c
	// Line 653, Address: 0x24c4c8, Func Offset: 0x28
	// Line 655, Address: 0x24c4d8, Func Offset: 0x38
	// Line 656, Address: 0x24c4ec, Func Offset: 0x4c
	// Line 657, Address: 0x24c504, Func Offset: 0x64
	// Line 658, Address: 0x24c514, Func Offset: 0x74
	// Line 661, Address: 0x24c51c, Func Offset: 0x7c
	// Line 663, Address: 0x24c530, Func Offset: 0x90
	// Line 664, Address: 0x24c534, Func Offset: 0x94
	// Func End, Address: 0x24c550, Func Offset: 0xb0
}

// 
// Start address: 0x24c550
unsigned int EntryRecord_Attribute_Search(unsigned int Attribute)
{
	EntryRecord* pER;
	int i;
	unsigned int result;
	// Line 674, Address: 0x24c550, Func Offset: 0
	// Line 675, Address: 0x24c568, Func Offset: 0x18
	// Line 679, Address: 0x24c56c, Func Offset: 0x1c
	// Line 680, Address: 0x24c578, Func Offset: 0x28
	// Line 682, Address: 0x24c588, Func Offset: 0x38
	// Line 683, Address: 0x24c59c, Func Offset: 0x4c
	// Line 684, Address: 0x24c5b4, Func Offset: 0x64
	// Line 685, Address: 0x24c5c4, Func Offset: 0x74
	// Line 688, Address: 0x24c5cc, Func Offset: 0x7c
	// Line 690, Address: 0x24c5e0, Func Offset: 0x90
	// Line 691, Address: 0x24c5e4, Func Offset: 0x94
	// Func End, Address: 0x24c600, Func Offset: 0xb0
}

// 
// Start address: 0x24c600
void EntryRecord_Time_Count(EntryRecord* pER)
{
	// Line 697, Address: 0x24c600, Func Offset: 0
	// Line 698, Address: 0x24c60c, Func Offset: 0xc
	// Line 699, Address: 0x24c624, Func Offset: 0x24
	// Func End, Address: 0x24c634, Func Offset: 0x34
}

// 
// Start address: 0x24c640
void EntryRecord_Time_Set(EntryRecord* pER, float Time)
{
	// Line 704, Address: 0x24c640, Func Offset: 0
	// Line 705, Address: 0x24c64c, Func Offset: 0xc
	// Line 706, Address: 0x24c658, Func Offset: 0x18
	// Func End, Address: 0x24c664, Func Offset: 0x24
}

// 
// Start address: 0x24c670
void EntryRecord_Ratio_Set(EntryRecord* pER, float Ratio)
{
	// Line 711, Address: 0x24c670, Func Offset: 0
	// Line 712, Address: 0x24c67c, Func Offset: 0xc
	// Line 713, Address: 0x24c688, Func Offset: 0x18
	// Func End, Address: 0x24c694, Func Offset: 0x24
}

// 
// Start address: 0x24c6a0
EntryRecord* EntryRecordTable_FreeSpace_Search()
{
	EntryRecord* pER;
	int i;
	void* result;
	// Line 719, Address: 0x24c6a0, Func Offset: 0
	// Line 720, Address: 0x24c6b4, Func Offset: 0x14
	// Line 723, Address: 0x24c6b8, Func Offset: 0x18
	// Line 724, Address: 0x24c6c4, Func Offset: 0x24
	// Line 726, Address: 0x24c6d4, Func Offset: 0x34
	// Line 727, Address: 0x24c6e0, Func Offset: 0x40
	// Line 728, Address: 0x24c6e4, Func Offset: 0x44
	// Line 730, Address: 0x24c6ec, Func Offset: 0x4c
	// Line 732, Address: 0x24c700, Func Offset: 0x60
	// Line 733, Address: 0x24c704, Func Offset: 0x64
	// Func End, Address: 0x24c720, Func Offset: 0x80
}

// 
// Start address: 0x24c720
void EntryRecordTable_All_Initialize()
{
	unsigned int i;
	// Line 738, Address: 0x24c720, Func Offset: 0
	// Line 742, Address: 0x24c72c, Func Offset: 0xc
	// Line 743, Address: 0x24c738, Func Offset: 0x18
	// Line 744, Address: 0x24c750, Func Offset: 0x30
	// Line 746, Address: 0x24c764, Func Offset: 0x44
	// Func End, Address: 0x24c778, Func Offset: 0x58
}

// 
// Start address: 0x24c780
unsigned int EntryRecord_Entry(unsigned int* pHandleArray, DS_Record_Header* pHeader, unsigned int ControllerID, float Ratio)
{
	DS_Record_Edit* pTail;
	EntryRecord* pER;
	EntryRecord* pER;
	DS_Object_Info* pObject_Info;
	unsigned int permission_check;
	unsigned int i;
	unsigned int result;
	// Line 761, Address: 0x24c780, Func Offset: 0
	// Line 762, Address: 0x24c7b4, Func Offset: 0x34
	// Line 766, Address: 0x24c7b8, Func Offset: 0x38
	// Line 767, Address: 0x24c7cc, Func Offset: 0x4c
	// Line 769, Address: 0x24c7e8, Func Offset: 0x68
	// Line 770, Address: 0x24c7ec, Func Offset: 0x6c
	// Line 774, Address: 0x24c7f4, Func Offset: 0x74
	// Line 776, Address: 0x24c83c, Func Offset: 0xbc
	// Line 777, Address: 0x24c854, Func Offset: 0xd4
	// Line 779, Address: 0x24c858, Func Offset: 0xd8
	// Line 781, Address: 0x24c860, Func Offset: 0xe0
	// Line 782, Address: 0x24c878, Func Offset: 0xf8
	// Line 784, Address: 0x24c87c, Func Offset: 0xfc
	// Line 786, Address: 0x24c884, Func Offset: 0x104
	// Line 787, Address: 0x24c8b4, Func Offset: 0x134
	// Line 789, Address: 0x24c8b8, Func Offset: 0x138
	// Line 791, Address: 0x24c8c0, Func Offset: 0x140
	// Line 792, Address: 0x24c8f0, Func Offset: 0x170
	// Line 800, Address: 0x24c8f4, Func Offset: 0x174
	// Line 801, Address: 0x24c8fc, Func Offset: 0x17c
	// Line 804, Address: 0x24c938, Func Offset: 0x1b8
	// Line 805, Address: 0x24c944, Func Offset: 0x1c4
	// Line 807, Address: 0x24c950, Func Offset: 0x1d0
	// Line 808, Address: 0x24c958, Func Offset: 0x1d8
	// Line 809, Address: 0x24c960, Func Offset: 0x1e0
	// Line 810, Address: 0x24c96c, Func Offset: 0x1ec
	// Line 811, Address: 0x24c974, Func Offset: 0x1f4
	// Line 812, Address: 0x24c978, Func Offset: 0x1f8
	// Line 814, Address: 0x24c988, Func Offset: 0x208
	// Line 816, Address: 0x24c9a8, Func Offset: 0x228
	// Line 817, Address: 0x24c9b4, Func Offset: 0x234
	// Line 820, Address: 0x24c9c8, Func Offset: 0x248
	// Line 822, Address: 0x24c9d0, Func Offset: 0x250
	// Line 823, Address: 0x24c9ec, Func Offset: 0x26c
	// Line 826, Address: 0x24c9f4, Func Offset: 0x274
	// Line 827, Address: 0x24ca00, Func Offset: 0x280
	// Line 829, Address: 0x24ca0c, Func Offset: 0x28c
	// Line 830, Address: 0x24ca14, Func Offset: 0x294
	// Line 831, Address: 0x24ca1c, Func Offset: 0x29c
	// Line 832, Address: 0x24ca28, Func Offset: 0x2a8
	// Line 833, Address: 0x24ca30, Func Offset: 0x2b0
	// Line 834, Address: 0x24ca34, Func Offset: 0x2b4
	// Line 837, Address: 0x24ca3c, Func Offset: 0x2bc
	// Line 839, Address: 0x24ca40, Func Offset: 0x2c0
	// Line 840, Address: 0x24ca48, Func Offset: 0x2c8
	// Line 841, Address: 0x24ca50, Func Offset: 0x2d0
	// Line 842, Address: 0x24ca68, Func Offset: 0x2e8
	// Line 845, Address: 0x24ca70, Func Offset: 0x2f0
	// Line 846, Address: 0x24ca7c, Func Offset: 0x2fc
	// Line 849, Address: 0x24ca90, Func Offset: 0x310
	// Line 850, Address: 0x24ca98, Func Offset: 0x318
	// Line 854, Address: 0x24cab4, Func Offset: 0x334
	// Line 855, Address: 0x24cab8, Func Offset: 0x338
	// Line 860, Address: 0x24cabc, Func Offset: 0x33c
	// Line 861, Address: 0x24cac0, Func Offset: 0x340
	// Func End, Address: 0x24caec, Func Offset: 0x36c
}

// 
// Start address: 0x24caf0
unsigned int DSR_FileFormat_ErrorChecker(DS_Record_Header* pHeader)
{
	DS_Object_Info* pInfo;
	unsigned int num;
	unsigned int result;
	// Line 866, Address: 0x24caf0, Func Offset: 0
	// Line 867, Address: 0x24cb08, Func Offset: 0x18
	// Line 869, Address: 0x24cb18, Func Offset: 0x28
	// Line 871, Address: 0x24cb20, Func Offset: 0x30
	// Line 873, Address: 0x24cb28, Func Offset: 0x38
	// Line 874, Address: 0x24cb34, Func Offset: 0x44
	// Line 875, Address: 0x24cb40, Func Offset: 0x50
	// Line 876, Address: 0x24cb44, Func Offset: 0x54
	// Line 877, Address: 0x24cb48, Func Offset: 0x58
	// Line 884, Address: 0x24cb7c, Func Offset: 0x8c
	// Line 889, Address: 0x24cb80, Func Offset: 0x90
	// Line 890, Address: 0x24cb90, Func Offset: 0xa0
	// Line 891, Address: 0x24cb94, Func Offset: 0xa4
	// Line 892, Address: 0x24cb98, Func Offset: 0xa8
	// Line 893, Address: 0x24cbb4, Func Offset: 0xc4
	// Line 895, Address: 0x24cbb8, Func Offset: 0xc8
	// Line 896, Address: 0x24cbbc, Func Offset: 0xcc
	// Func End, Address: 0x24cbd8, Func Offset: 0xe8
}

// 
// Start address: 0x24cbe0
unsigned int DSR_FF_Header_ErrorChecker(DS_Record_Header* pHeader)
{
	unsigned int result;
	// Line 901, Address: 0x24cbe0, Func Offset: 0
	// Line 902, Address: 0x24cbf0, Func Offset: 0x10
	// Line 904, Address: 0x24cbf4, Func Offset: 0x14
	// Line 905, Address: 0x24cc00, Func Offset: 0x20
	// Line 906, Address: 0x24cc04, Func Offset: 0x24
	// Line 909, Address: 0x24cc20, Func Offset: 0x40
	// Line 913, Address: 0x24cc34, Func Offset: 0x54
	// Line 917, Address: 0x24cc38, Func Offset: 0x58
	// Line 918, Address: 0x24cc48, Func Offset: 0x68
	// Line 922, Address: 0x24cc4c, Func Offset: 0x6c
	// Line 923, Address: 0x24cc50, Func Offset: 0x70
	// Func End, Address: 0x24cc64, Func Offset: 0x84
}

// 
// Start address: 0x24cc70
void TotalActuaterLV_Keeper(unsigned int ControllerID, unsigned int ActuaterType, float ActuaterLV)
{
	// Line 931, Address: 0x24cc70, Func Offset: 0
	// Line 932, Address: 0x24cc80, Func Offset: 0x10
	// Line 933, Address: 0x24cca8, Func Offset: 0x38
	// Func End, Address: 0x24ccb4, Func Offset: 0x44
}

// 
// Start address: 0x24ccc0
void TotalActuaterLV_Send(unsigned int ControllerID, unsigned int ActuaterType)
{
	float act_ratio;
	float act_lv;
	// Line 938, Address: 0x24ccc0, Func Offset: 0
	// Line 940, Address: 0x24ccd0, Func Offset: 0x10
	// Line 941, Address: 0x24cd00, Func Offset: 0x40
	// Line 943, Address: 0x24cd0c, Func Offset: 0x4c
	// Line 949, Address: 0x24cd44, Func Offset: 0x84
	// Line 950, Address: 0x24cd5c, Func Offset: 0x9c
	// Line 958, Address: 0x24cd6c, Func Offset: 0xac
	// Line 961, Address: 0x24cd7c, Func Offset: 0xbc
	// Line 964, Address: 0x24cd9c, Func Offset: 0xdc
	// Line 965, Address: 0x24cdac, Func Offset: 0xec
	// Func End, Address: 0x24cdbc, Func Offset: 0xfc
}

// 
// Start address: 0x24cdc0
void TotalActuaterLV_Initialize(unsigned int ControllerID, unsigned int ActuaterType)
{
	// Line 970, Address: 0x24cdc0, Func Offset: 0
	// Line 972, Address: 0x24cdcc, Func Offset: 0xc
	// Line 973, Address: 0x24cdf4, Func Offset: 0x34
	// Func End, Address: 0x24ce00, Func Offset: 0x40
}

// 
// Start address: 0x24ce00
float ActuaterLV_Complement(DS_Record* pDSR, float Time)
{
	float act_lv_next;
	float act_lv_current;
	float comp_ratio;
	float time_next;
	float time_current;
	float result;
	// Line 1009, Address: 0x24ce00, Func Offset: 0
	// Line 1011, Address: 0x24ce0c, Func Offset: 0xc
	// Line 1012, Address: 0x24ce18, Func Offset: 0x18
	// Line 1013, Address: 0x24ce24, Func Offset: 0x24
	// Line 1014, Address: 0x24ce44, Func Offset: 0x44
	// Line 1015, Address: 0x24ce88, Func Offset: 0x88
	// Line 1018, Address: 0x24cecc, Func Offset: 0xcc
	// Line 1020, Address: 0x24cef8, Func Offset: 0xf8
	// Line 1021, Address: 0x24cefc, Func Offset: 0xfc
	// Func End, Address: 0x24cf08, Func Offset: 0x108
}

// 
// Start address: 0x24cf10
float ActuaterLV_Complement_Edit(DS_Record_Edit* pDSR, float Time)
{
	float act_lv_next;
	float act_lv_current;
	float comp_ratio;
	float time_next;
	float time_current;
	float result;
	// Line 1026, Address: 0x24cf10, Func Offset: 0
	// Line 1028, Address: 0x24cf1c, Func Offset: 0xc
	// Line 1029, Address: 0x24cf28, Func Offset: 0x18
	// Line 1030, Address: 0x24cf38, Func Offset: 0x28
	// Line 1031, Address: 0x24cf58, Func Offset: 0x48
	// Line 1032, Address: 0x24cf9c, Func Offset: 0x8c
	// Line 1035, Address: 0x24cfe4, Func Offset: 0xd4
	// Line 1037, Address: 0x24d010, Func Offset: 0x100
	// Line 1038, Address: 0x24d014, Func Offset: 0x104
	// Func End, Address: 0x24d020, Func Offset: 0x110
}

// 
// Start address: 0x24d020
int Node_Next_Search(Record_Info* pInfo, float Time)
{
	int result;
	unsigned int i;
	DS_Record* pDSR;
	unsigned int node_num;
	// Line 1045, Address: 0x24d020, Func Offset: 0
	// Line 1046, Address: 0x24d03c, Func Offset: 0x1c
	// Line 1047, Address: 0x24d048, Func Offset: 0x28
	// Line 1049, Address: 0x24d050, Func Offset: 0x30
	// Line 1051, Address: 0x24d054, Func Offset: 0x34
	// Line 1052, Address: 0x24d060, Func Offset: 0x40
	// Line 1053, Address: 0x24d078, Func Offset: 0x58
	// Line 1054, Address: 0x24d07c, Func Offset: 0x5c
	// Line 1056, Address: 0x24d084, Func Offset: 0x64
	// Line 1058, Address: 0x24d0a0, Func Offset: 0x80
	// Line 1059, Address: 0x24d0a4, Func Offset: 0x84
	// Func End, Address: 0x24d0c0, Func Offset: 0xa0
}

// 
// Start address: 0x24d0c0
int Node_Current_Search(Record_Info* pInfo, float Time)
{
	int num;
	int result;
	// Line 1089, Address: 0x24d0c0, Func Offset: 0
	// Line 1090, Address: 0x24d0d8, Func Offset: 0x18
	// Line 1091, Address: 0x24d0dc, Func Offset: 0x1c
	// Line 1094, Address: 0x24d0f0, Func Offset: 0x30
	// Line 1095, Address: 0x24d0f8, Func Offset: 0x38
	// Line 1098, Address: 0x24d0fc, Func Offset: 0x3c
	// Line 1099, Address: 0x24d100, Func Offset: 0x40
	// Func End, Address: 0x24d118, Func Offset: 0x58
}

// 
// Start address: 0x24d120
DS_Record_Edit* EditNode_Current_Search(Record_Info* pInfo, float Time)
{
	DS_Record_Edit* pDSR;
	DS_Record_Edit* result;
	// Line 1107, Address: 0x24d120, Func Offset: 0
	// Line 1108, Address: 0x24d134, Func Offset: 0x14
	// Line 1109, Address: 0x24d138, Func Offset: 0x18
	// Line 1121, Address: 0x24d140, Func Offset: 0x20
	// Line 1122, Address: 0x24d148, Func Offset: 0x28
	// Line 1123, Address: 0x24d160, Func Offset: 0x40
	// Line 1124, Address: 0x24d164, Func Offset: 0x44
	// Line 1126, Address: 0x24d16c, Func Offset: 0x4c
	// Line 1127, Address: 0x24d174, Func Offset: 0x54
	// Line 1130, Address: 0x24d180, Func Offset: 0x60
	// Line 1131, Address: 0x24d184, Func Offset: 0x64
	// Func End, Address: 0x24d198, Func Offset: 0x78
}

// 
// Start address: 0x24d1a0
void EventManager()
{
	EntryRecord* pER;
	DSR_MU_EventDescriptor Descriptor;
	// Line 1161, Address: 0x24d1a0, Func Offset: 0
	// Line 1164, Address: 0x24d1ac, Func Offset: 0xc
	// Line 1165, Address: 0x24d1b4, Func Offset: 0x14
	// Line 1167, Address: 0x24d1c4, Func Offset: 0x24
	// Line 1170, Address: 0x24d1cc, Func Offset: 0x2c
	// Line 1173, Address: 0x24d1f8, Func Offset: 0x58
	// Line 1174, Address: 0x24d200, Func Offset: 0x60
	// Line 1175, Address: 0x24d20c, Func Offset: 0x6c
	// Line 1178, Address: 0x24d214, Func Offset: 0x74
	// Line 1179, Address: 0x24d220, Func Offset: 0x80
	// Line 1182, Address: 0x24d228, Func Offset: 0x88
	// Line 1183, Address: 0x24d238, Func Offset: 0x98
	// Line 1186, Address: 0x24d240, Func Offset: 0xa0
	// Line 1187, Address: 0x24d250, Func Offset: 0xb0
	// Line 1190, Address: 0x24d258, Func Offset: 0xb8
	// Line 1191, Address: 0x24d268, Func Offset: 0xc8
	// Line 1194, Address: 0x24d270, Func Offset: 0xd0
	// Line 1200, Address: 0x24d280, Func Offset: 0xe0
	// Line 1204, Address: 0x24d294, Func Offset: 0xf4
	// Func End, Address: 0x24d2a8, Func Offset: 0x108
}

// 
// Start address: 0x24d2b0
unsigned int EventMessage_Post(unsigned int Handle, unsigned int EventID, float Value)
{
	DSR_MU_EventDescriptor Descriptor;
	unsigned int result;
	// Line 1223, Address: 0x24d2b0, Func Offset: 0
	// Line 1224, Address: 0x24d2c8, Func Offset: 0x18
	// Line 1225, Address: 0x24d2cc, Func Offset: 0x1c
	// Line 1227, Address: 0x24d300, Func Offset: 0x50
	// Line 1228, Address: 0x24d314, Func Offset: 0x64
	// Line 1231, Address: 0x24d318, Func Offset: 0x68
	// Line 1232, Address: 0x24d31c, Func Offset: 0x6c
	// Func End, Address: 0x24d330, Func Offset: 0x80
}

// 
// Start address: 0x24d330
unsigned int EventMessageQueue_enQueue(DSR_MU_EventDescriptor* pDescriptor)
{
	unsigned int length;
	unsigned int result;
	// Line 1239, Address: 0x24d330, Func Offset: 0
	// Line 1240, Address: 0x24d344, Func Offset: 0x14
	// Line 1241, Address: 0x24d348, Func Offset: 0x18
	// Line 1243, Address: 0x24d354, Func Offset: 0x24
	// Line 1244, Address: 0x24d36c, Func Offset: 0x3c
	// Line 1245, Address: 0x24d3b4, Func Offset: 0x84
	// Line 1246, Address: 0x24d3d4, Func Offset: 0xa4
	// Line 1247, Address: 0x24d3e8, Func Offset: 0xb8
	// Line 1250, Address: 0x24d3ec, Func Offset: 0xbc
	// Line 1251, Address: 0x24d3f0, Func Offset: 0xc0
	// Func End, Address: 0x24d408, Func Offset: 0xd8
}

// 
// Start address: 0x24d410
unsigned int EventMessageQueue_deQueue(DSR_MU_EventDescriptor* pDescriptor)
{
	unsigned int length;
	unsigned int result;
	// Line 1258, Address: 0x24d410, Func Offset: 0
	// Line 1259, Address: 0x24d424, Func Offset: 0x14
	// Line 1260, Address: 0x24d428, Func Offset: 0x18
	// Line 1262, Address: 0x24d434, Func Offset: 0x24
	// Line 1263, Address: 0x24d448, Func Offset: 0x38
	// Line 1264, Address: 0x24d490, Func Offset: 0x80
	// Line 1265, Address: 0x24d4b0, Func Offset: 0xa0
	// Line 1266, Address: 0x24d4c4, Func Offset: 0xb4
	// Line 1269, Address: 0x24d4c8, Func Offset: 0xb8
	// Line 1270, Address: 0x24d4cc, Func Offset: 0xbc
	// Func End, Address: 0x24d4e4, Func Offset: 0xd4
}

// 
// Start address: 0x24d4f0
void EventMessageQueue_Initialize()
{
	// Line 1275, Address: 0x24d4f0, Func Offset: 0
	// Line 1278, Address: 0x24d514, Func Offset: 0x24
	// Func End, Address: 0x24d51c, Func Offset: 0x2c
}

// 
// Start address: 0x24d520
unsigned int EventMessageQueue_Length_Get()
{
	// Line 1295, Address: 0x24d520, Func Offset: 0
	// Line 1296, Address: 0x24d524, Func Offset: 0x4
	// Func End, Address: 0x24d52c, Func Offset: 0xc
}

// 
// Start address: 0x24d530
void DSR_MUD_Initialize()
{
	// Line 1300, Address: 0x24d530, Func Offset: 0
	// Line 1301, Address: 0x24d538, Func Offset: 0x8
	// Line 1303, Address: 0x24d550, Func Offset: 0x20
	// Line 1305, Address: 0x24d564, Func Offset: 0x34
	// Line 1306, Address: 0x24d56c, Func Offset: 0x3c
	// Func End, Address: 0x24d57c, Func Offset: 0x4c
}

// 
// Start address: 0x24d580
unsigned int DSR_Entry0(void* pAddress, unsigned int ControllerID, float Ratio)
{
	unsigned int handle[64];
	int num;
	DS_Record_Header* pHeader;
	unsigned int result;
	// Line 1322, Address: 0x24d580, Func Offset: 0
	// Line 1324, Address: 0x24d5a0, Func Offset: 0x20
	// Line 1326, Address: 0x24d5a8, Func Offset: 0x28
	// Line 1327, Address: 0x24d5ac, Func Offset: 0x2c
	// Line 1331, Address: 0x24d5b0, Func Offset: 0x30
	// Line 1333, Address: 0x24d5cc, Func Offset: 0x4c
	// Line 1334, Address: 0x24d5d4, Func Offset: 0x54
	// Line 1335, Address: 0x24d5dc, Func Offset: 0x5c
	// Line 1336, Address: 0x24d5f8, Func Offset: 0x78
	// Line 1339, Address: 0x24d608, Func Offset: 0x88
	// Line 1341, Address: 0x24d610, Func Offset: 0x90
	// Line 1342, Address: 0x24d614, Func Offset: 0x94
	// Func End, Address: 0x24d630, Func Offset: 0xb0
}

// 
// Start address: 0x24d630
void DSR_Sequencer_Initialize()
{
	// Line 1426, Address: 0x24d630, Func Offset: 0
	// Line 1427, Address: 0x24d638, Func Offset: 0x8
	// Line 1428, Address: 0x24d640, Func Offset: 0x10
	// Line 1430, Address: 0x24d648, Func Offset: 0x18
	// Line 1431, Address: 0x24d658, Func Offset: 0x28
	// Line 1432, Address: 0x24d668, Func Offset: 0x38
	// Line 1433, Address: 0x24d678, Func Offset: 0x48
	// Line 1434, Address: 0x24d688, Func Offset: 0x58
	// Func End, Address: 0x24d698, Func Offset: 0x68
}

// 
// Start address: 0x24d6a0
void DSR_Sequencer()
{
	// Line 1439, Address: 0x24d6a0, Func Offset: 0
	// Line 1441, Address: 0x24d6a8, Func Offset: 0x8
	// Line 1444, Address: 0x24d6b0, Func Offset: 0x10
	// Line 1447, Address: 0x24d6b8, Func Offset: 0x18
	// Line 1448, Address: 0x24d6c8, Func Offset: 0x28
	// Line 1449, Address: 0x24d6d8, Func Offset: 0x38
	// Line 1450, Address: 0x24d6e8, Func Offset: 0x48
	// Line 1451, Address: 0x24d6f8, Func Offset: 0x58
	// Line 1453, Address: 0x24d708, Func Offset: 0x68
	// Func End, Address: 0x24d718, Func Offset: 0x78
}

// 
// Start address: 0x24d720
void DSR_Sequence_Different_Time_Set(float Different_Time)
{
	// Line 1457, Address: 0x24d720, Func Offset: 0
	// Line 1458, Address: 0x24d72c, Func Offset: 0xc
	// Line 1459, Address: 0x24d738, Func Offset: 0x18
	// Func End, Address: 0x24d748, Func Offset: 0x28
}

