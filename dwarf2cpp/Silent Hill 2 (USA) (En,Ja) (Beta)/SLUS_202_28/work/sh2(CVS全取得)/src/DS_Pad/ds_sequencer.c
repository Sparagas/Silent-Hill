typedef struct EntryRecord;
typedef struct DS_Record_Edit;
typedef struct DSR_MUD;
typedef struct Record_Info;
typedef struct DS_Object_Info;
typedef struct DS_Record_Header;
typedef struct DS_Record;
typedef struct DSR_MU_EventDescriptor;
typedef struct Sequencer_Data;


typedef DSR_MU_EventDescriptor type_0[100];
typedef float type_1[4];
typedef Sequencer_Data type_2[2];
typedef EntryRecord type_3[20];
typedef unsigned char type_4[16];
typedef unsigned int type_5[2];
typedef unsigned int type_6[64];
typedef unsigned char type_7[2];

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

struct DS_Record_Edit
{
	DS_Record Record;
	DS_Record_Edit* pPrev;
	DS_Record_Edit* pNext;
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

struct Record_Info
{
	DS_Object_Info* pObject;
	void* pAddress;
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

struct DS_Record_Header
{
	unsigned char DataName[16];
	unsigned int Revision;
	unsigned int Object_Num;
	unsigned int Reserved[2];
};

struct DS_Record
{
	float Time;
	unsigned char Actuater_LV;
	unsigned char Complement_Enable;
	unsigned char Reserved[2];
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
// Start address: 0x232e50
void SequencerManager()
{
	unsigned int Handle;
	EntryRecord* pER;
	unsigned int i;
	// Line 228, Address: 0x232e50, Func Offset: 0
	// Line 232, Address: 0x232e64, Func Offset: 0x14
	// Line 233, Address: 0x232e70, Func Offset: 0x20
	// Line 236, Address: 0x232e80, Func Offset: 0x30
	// Line 237, Address: 0x232e94, Func Offset: 0x44
	// Line 240, Address: 0x232ea4, Func Offset: 0x54
	// Line 244, Address: 0x232ee4, Func Offset: 0x94
	// Line 246, Address: 0x232f24, Func Offset: 0xd4
	// Line 247, Address: 0x232f30, Func Offset: 0xe0
	// Line 249, Address: 0x232f38, Func Offset: 0xe8
	// Line 250, Address: 0x232f44, Func Offset: 0xf4
	// Line 252, Address: 0x232f4c, Func Offset: 0xfc
	// Line 253, Address: 0x232f58, Func Offset: 0x108
	// Line 255, Address: 0x232f60, Func Offset: 0x110
	// Line 259, Address: 0x232f6c, Func Offset: 0x11c
	// Line 261, Address: 0x232f70, Func Offset: 0x120
	// Line 266, Address: 0x232f84, Func Offset: 0x134
	// Line 267, Address: 0x232f98, Func Offset: 0x148
	// Line 272, Address: 0x232fd8, Func Offset: 0x188
	// Line 273, Address: 0x232fec, Func Offset: 0x19c
	// Line 277, Address: 0x232ff4, Func Offset: 0x1a4
	// Line 278, Address: 0x233008, Func Offset: 0x1b8
	// Line 292, Address: 0x23301c, Func Offset: 0x1cc
	// Line 293, Address: 0x233020, Func Offset: 0x1d0
	// Line 294, Address: 0x233034, Func Offset: 0x1e4
	// Func End, Address: 0x233050, Func Offset: 0x200
}

// 
// Start address: 0x233050
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
	// Line 299, Address: 0x233050, Func Offset: 0
	// Line 300, Address: 0x233070, Func Offset: 0x20
	// Line 301, Address: 0x233074, Func Offset: 0x24
	// Line 304, Address: 0x233078, Func Offset: 0x28
	// Line 305, Address: 0x23308c, Func Offset: 0x3c
	// Line 309, Address: 0x23309c, Func Offset: 0x4c
	// Line 310, Address: 0x2330b0, Func Offset: 0x60
	// Line 311, Address: 0x2330bc, Func Offset: 0x6c
	// Line 315, Address: 0x2330c0, Func Offset: 0x70
	// Line 316, Address: 0x2330cc, Func Offset: 0x7c
	// Line 317, Address: 0x2330d8, Func Offset: 0x88
	// Line 320, Address: 0x2330e0, Func Offset: 0x90
	// Line 322, Address: 0x2330e4, Func Offset: 0x94
	// Line 325, Address: 0x2330f0, Func Offset: 0xa0
	// Line 326, Address: 0x233110, Func Offset: 0xc0
	// Line 330, Address: 0x23311c, Func Offset: 0xcc
	// Line 333, Address: 0x23314c, Func Offset: 0xfc
	// Line 336, Address: 0x233194, Func Offset: 0x144
	// Func End, Address: 0x2331b8, Func Offset: 0x168
}

// 
// Start address: 0x2331c0
void Sequencer_Type_Lowspeed(EntryRecord* pER)
{
	float now_act_lv_f;
	DS_Record* pDSR;
	int Node_Next;
	int Node;
	float time;
	Record_Info* pInfo;
	// Line 341, Address: 0x2331c0, Func Offset: 0
	// Line 342, Address: 0x2331dc, Func Offset: 0x1c
	// Line 343, Address: 0x2331e0, Func Offset: 0x20
	// Line 346, Address: 0x2331e4, Func Offset: 0x24
	// Line 347, Address: 0x2331f8, Func Offset: 0x38
	// Line 352, Address: 0x233208, Func Offset: 0x48
	// Line 353, Address: 0x23321c, Func Offset: 0x5c
	// Line 354, Address: 0x233228, Func Offset: 0x68
	// Line 358, Address: 0x23322c, Func Offset: 0x6c
	// Line 359, Address: 0x233238, Func Offset: 0x78
	// Line 362, Address: 0x233244, Func Offset: 0x84
	// Line 365, Address: 0x23324c, Func Offset: 0x8c
	// Line 368, Address: 0x233260, Func Offset: 0xa0
	// Func End, Address: 0x233280, Func Offset: 0xc0
}

// 
// Start address: 0x233280
void Sequencer_Type_Hispeed_Edit(EntryRecord* pER)
{
	float section_1;
	float section_0;
	unsigned int now_act_lv_i;
	DS_Record_Edit* pDSR;
	float time;
	Record_Info* pInfo;
	// Line 373, Address: 0x233280, Func Offset: 0
	// Line 375, Address: 0x2332a0, Func Offset: 0x20
	// Line 378, Address: 0x2332a4, Func Offset: 0x24
	// Line 380, Address: 0x2332b8, Func Offset: 0x38
	// Line 381, Address: 0x2332c0, Func Offset: 0x40
	// Line 382, Address: 0x2332cc, Func Offset: 0x4c
	// Line 385, Address: 0x2332d0, Func Offset: 0x50
	// Line 386, Address: 0x2332dc, Func Offset: 0x5c
	// Line 387, Address: 0x2332e8, Func Offset: 0x68
	// Line 390, Address: 0x2332f0, Func Offset: 0x70
	// Line 392, Address: 0x2332f4, Func Offset: 0x74
	// Line 395, Address: 0x233300, Func Offset: 0x80
	// Line 396, Address: 0x233320, Func Offset: 0xa0
	// Line 400, Address: 0x23332c, Func Offset: 0xac
	// Line 403, Address: 0x23335c, Func Offset: 0xdc
	// Line 407, Address: 0x2333a4, Func Offset: 0x124
	// Func End, Address: 0x2333c8, Func Offset: 0x148
}

// 
// Start address: 0x2333d0
void Sequencer_Type_Lowspeed_Edit(EntryRecord* pER)
{
	float now_act_lv_f;
	DS_Record_Edit* pDSR;
	float time;
	Record_Info* pInfo;
	// Line 412, Address: 0x2333d0, Func Offset: 0
	// Line 414, Address: 0x2333e4, Func Offset: 0x14
	// Line 417, Address: 0x2333e8, Func Offset: 0x18
	// Line 419, Address: 0x2333fc, Func Offset: 0x2c
	// Line 420, Address: 0x233404, Func Offset: 0x34
	// Line 421, Address: 0x233410, Func Offset: 0x40
	// Line 424, Address: 0x233414, Func Offset: 0x44
	// Line 425, Address: 0x233420, Func Offset: 0x50
	// Line 428, Address: 0x23342c, Func Offset: 0x5c
	// Line 431, Address: 0x233434, Func Offset: 0x64
	// Line 435, Address: 0x233448, Func Offset: 0x78
	// Func End, Address: 0x233460, Func Offset: 0x90
}

// 
// Start address: 0x233460
unsigned int EntryRecord_Enable_Check(EntryRecord* pER)
{
	// Line 447, Address: 0x233460, Func Offset: 0
	// Line 448, Address: 0x233464, Func Offset: 0x4
	// Func End, Address: 0x23346c, Func Offset: 0xc
}

// 
// Start address: 0x233470
unsigned int EntryRecord_TimeOver_Check(EntryRecord* pER)
{
	unsigned int result;
	// Line 453, Address: 0x233470, Func Offset: 0
	// Line 455, Address: 0x233474, Func Offset: 0x4
	// Line 456, Address: 0x23348c, Func Offset: 0x1c
	// Line 460, Address: 0x233490, Func Offset: 0x20
	// Func End, Address: 0x233498, Func Offset: 0x28
}

// 
// Start address: 0x2334a0
unsigned int EntryRecord_Type_Get(EntryRecord* pER)
{
	// Line 466, Address: 0x2334a0, Func Offset: 0
	// Line 467, Address: 0x2334a8, Func Offset: 0x8
	// Func End, Address: 0x2334b0, Func Offset: 0x10
}

// 
// Start address: 0x2334b0
unsigned int EntryRecord_ID_Get(EntryRecord* pER)
{
	// Line 480, Address: 0x2334b0, Func Offset: 0
	// Line 481, Address: 0x2334b8, Func Offset: 0x8
	// Func End, Address: 0x2334c0, Func Offset: 0x10
}

// 
// Start address: 0x2334c0
unsigned int EntryRecord_Attribute_Get(EntryRecord* pER)
{
	// Line 494, Address: 0x2334c0, Func Offset: 0
	// Line 495, Address: 0x2334c8, Func Offset: 0x8
	// Func End, Address: 0x2334d0, Func Offset: 0x10
}

// 
// Start address: 0x2334d0
unsigned int EntryRecord_Condition_Get(EntryRecord* pER)
{
	// Line 509, Address: 0x2334d0, Func Offset: 0
	// Line 510, Address: 0x2334d4, Func Offset: 0x4
	// Func End, Address: 0x2334dc, Func Offset: 0xc
}

// 
// Start address: 0x2334e0
void EntryRecord_Condition_Set(EntryRecord* pER, unsigned int Condition)
{
	// Line 516, Address: 0x2334e0, Func Offset: 0
	// Line 517, Address: 0x2334e4, Func Offset: 0x4
	// Func End, Address: 0x2334ec, Func Offset: 0xc
}

// 
// Start address: 0x2334f0
unsigned int EntryRecord_Handle_Get(EntryRecord* pER)
{
	// Line 523, Address: 0x2334f0, Func Offset: 0
	// Line 524, Address: 0x2334f4, Func Offset: 0x4
	// Func End, Address: 0x2334fc, Func Offset: 0xc
}

// 
// Start address: 0x233500
void EntryRecord_Initialize(EntryRecord* pER)
{
	// Line 529, Address: 0x233500, Func Offset: 0
	// Line 530, Address: 0x233508, Func Offset: 0x8
	// Line 531, Address: 0x233518, Func Offset: 0x18
	// Func End, Address: 0x233528, Func Offset: 0x28
}

// 
// Start address: 0x233530
unsigned int EntryRecord_EntryCount_Get()
{
	// Line 536, Address: 0x233530, Func Offset: 0
	// Line 537, Address: 0x23353c, Func Offset: 0xc
	// Func End, Address: 0x233544, Func Offset: 0x14
}

// 
// Start address: 0x233550
unsigned int EntryRecord_EntryFreeCount_Get()
{
	// Line 542, Address: 0x233550, Func Offset: 0
	// Line 543, Address: 0x233564, Func Offset: 0x14
	// Func End, Address: 0x23356c, Func Offset: 0x1c
}

// 
// Start address: 0x233570
unsigned int EntryRecord_EntryCount_Increment()
{
	// Line 548, Address: 0x233570, Func Offset: 0
	// Line 549, Address: 0x233584, Func Offset: 0x14
	// Func End, Address: 0x23358c, Func Offset: 0x1c
}

// 
// Start address: 0x233590
unsigned int EntryRecord_EntryCount_Decrement()
{
	// Line 554, Address: 0x233590, Func Offset: 0
	// Line 555, Address: 0x2335a8, Func Offset: 0x18
	// Line 558, Address: 0x2335b4, Func Offset: 0x24
	// Line 559, Address: 0x2335c0, Func Offset: 0x30
	// Func End, Address: 0x2335c8, Func Offset: 0x38
}

// 
// Start address: 0x2335d0
float Sequence_Different_Time_Get()
{
	// Line 564, Address: 0x2335d0, Func Offset: 0
	// Line 565, Address: 0x2335dc, Func Offset: 0xc
	// Func End, Address: 0x2335e4, Func Offset: 0x14
}

// 
// Start address: 0x2335f0
void Sequence_Different_Time_Set(float Time)
{
	// Line 570, Address: 0x2335f0, Func Offset: 0
	// Line 571, Address: 0x2335fc, Func Offset: 0xc
	// Func End, Address: 0x233604, Func Offset: 0x14
}

// 
// Start address: 0x233610
unsigned int EntryRecord_Handle_Create()
{
	unsigned int result;
	// Line 578, Address: 0x233610, Func Offset: 0
	// Line 579, Address: 0x23361c, Func Offset: 0xc
	// Line 581, Address: 0x23362c, Func Offset: 0x1c
	// Line 582, Address: 0x233634, Func Offset: 0x24
	// Line 583, Address: 0x233638, Func Offset: 0x28
	// Line 584, Address: 0x233654, Func Offset: 0x44
	// Line 586, Address: 0x233660, Func Offset: 0x50
	// Line 587, Address: 0x233664, Func Offset: 0x54
	// Func End, Address: 0x233678, Func Offset: 0x68
}

// 
// Start address: 0x233680
EntryRecord* EntryRecord_Get_fromTableIndex(unsigned int EntryTable_Index)
{
	// Line 592, Address: 0x233680, Func Offset: 0
	// Line 594, Address: 0x233688, Func Offset: 0x8
	// Line 596, Address: 0x2336bc, Func Offset: 0x3c
	// Line 597, Address: 0x2336d4, Func Offset: 0x54
	// Func End, Address: 0x2336e4, Func Offset: 0x64
}

// 
// Start address: 0x2336f0
EntryRecord* EntryRecord_Get_fromHandle(unsigned int Handle)
{
	EntryRecord* pER;
	int i;
	void* result;
	// Line 604, Address: 0x2336f0, Func Offset: 0
	// Line 605, Address: 0x233708, Func Offset: 0x18
	// Line 609, Address: 0x23370c, Func Offset: 0x1c
	// Line 610, Address: 0x233718, Func Offset: 0x28
	// Line 612, Address: 0x233728, Func Offset: 0x38
	// Line 613, Address: 0x233738, Func Offset: 0x48
	// Line 614, Address: 0x233748, Func Offset: 0x58
	// Line 615, Address: 0x23374c, Func Offset: 0x5c
	// Line 618, Address: 0x233754, Func Offset: 0x64
	// Line 620, Address: 0x233768, Func Offset: 0x78
	// Line 621, Address: 0x23376c, Func Offset: 0x7c
	// Func End, Address: 0x233788, Func Offset: 0x98
}

// 
// Start address: 0x233790
unsigned int EntryRecord_Handle_Search(unsigned int Handle)
{
	unsigned int result;
	// Line 628, Address: 0x233790, Func Offset: 0
	// Line 629, Address: 0x23379c, Func Offset: 0xc
	// Line 632, Address: 0x2337a0, Func Offset: 0x10
	// Line 633, Address: 0x2337b0, Func Offset: 0x20
	// Line 636, Address: 0x2337b4, Func Offset: 0x24
	// Line 637, Address: 0x2337b8, Func Offset: 0x28
	// Func End, Address: 0x2337cc, Func Offset: 0x3c
}

// 
// Start address: 0x2337d0
unsigned int EntryRecord_ID_Search(unsigned int ID)
{
	EntryRecord* pER;
	int i;
	unsigned int result;
	// Line 647, Address: 0x2337d0, Func Offset: 0
	// Line 648, Address: 0x2337e8, Func Offset: 0x18
	// Line 652, Address: 0x2337ec, Func Offset: 0x1c
	// Line 653, Address: 0x2337f8, Func Offset: 0x28
	// Line 655, Address: 0x233808, Func Offset: 0x38
	// Line 656, Address: 0x233818, Func Offset: 0x48
	// Line 657, Address: 0x233828, Func Offset: 0x58
	// Line 658, Address: 0x233834, Func Offset: 0x64
	// Line 661, Address: 0x23383c, Func Offset: 0x6c
	// Line 663, Address: 0x233850, Func Offset: 0x80
	// Line 664, Address: 0x233854, Func Offset: 0x84
	// Func End, Address: 0x233870, Func Offset: 0xa0
}

// 
// Start address: 0x233870
unsigned int EntryRecord_Attribute_Search(unsigned int Attribute)
{
	EntryRecord* pER;
	int i;
	unsigned int result;
	// Line 674, Address: 0x233870, Func Offset: 0
	// Line 675, Address: 0x233888, Func Offset: 0x18
	// Line 679, Address: 0x23388c, Func Offset: 0x1c
	// Line 680, Address: 0x233898, Func Offset: 0x28
	// Line 682, Address: 0x2338a8, Func Offset: 0x38
	// Line 683, Address: 0x2338b8, Func Offset: 0x48
	// Line 684, Address: 0x2338c8, Func Offset: 0x58
	// Line 685, Address: 0x2338d4, Func Offset: 0x64
	// Line 688, Address: 0x2338dc, Func Offset: 0x6c
	// Line 690, Address: 0x2338f0, Func Offset: 0x80
	// Line 691, Address: 0x2338f4, Func Offset: 0x84
	// Func End, Address: 0x233910, Func Offset: 0xa0
}

// 
// Start address: 0x233910
void EntryRecord_Time_Count(EntryRecord* pER)
{
	// Line 697, Address: 0x233910, Func Offset: 0
	// Line 698, Address: 0x233918, Func Offset: 0x8
	// Line 699, Address: 0x23392c, Func Offset: 0x1c
	// Func End, Address: 0x23393c, Func Offset: 0x2c
}

// 
// Start address: 0x233940
void EntryRecord_Time_Set(EntryRecord* pER, float Time)
{
	// Line 705, Address: 0x233940, Func Offset: 0
	// Line 706, Address: 0x233944, Func Offset: 0x4
	// Func End, Address: 0x23394c, Func Offset: 0xc
}

// 
// Start address: 0x233950
void EntryRecord_Ratio_Set(EntryRecord* pER, float Ratio)
{
	// Line 712, Address: 0x233950, Func Offset: 0
	// Line 713, Address: 0x233954, Func Offset: 0x4
	// Func End, Address: 0x23395c, Func Offset: 0xc
}

// 
// Start address: 0x233960
EntryRecord* EntryRecordTable_FreeSpace_Search()
{
	EntryRecord* pER;
	int i;
	void* result;
	// Line 719, Address: 0x233960, Func Offset: 0
	// Line 720, Address: 0x233970, Func Offset: 0x10
	// Line 723, Address: 0x233974, Func Offset: 0x14
	// Line 724, Address: 0x233980, Func Offset: 0x20
	// Line 726, Address: 0x23398c, Func Offset: 0x2c
	// Line 727, Address: 0x233998, Func Offset: 0x38
	// Line 728, Address: 0x23399c, Func Offset: 0x3c
	// Line 730, Address: 0x2339a4, Func Offset: 0x44
	// Line 732, Address: 0x2339b8, Func Offset: 0x58
	// Line 733, Address: 0x2339bc, Func Offset: 0x5c
	// Func End, Address: 0x2339d4, Func Offset: 0x74
}

// 
// Start address: 0x2339e0
void EntryRecordTable_All_Initialize()
{
	unsigned int i;
	// Line 738, Address: 0x2339e0, Func Offset: 0
	// Line 742, Address: 0x2339ec, Func Offset: 0xc
	// Line 743, Address: 0x2339f8, Func Offset: 0x18
	// Line 744, Address: 0x233a10, Func Offset: 0x30
	// Line 746, Address: 0x233a24, Func Offset: 0x44
	// Func End, Address: 0x233a38, Func Offset: 0x58
}

// 
// Start address: 0x233a40
unsigned int EntryRecord_Entry(unsigned int* pHandleArray, DS_Record_Header* pHeader, unsigned int ControllerID, float Ratio)
{
	DS_Record_Edit* pTail;
	EntryRecord* pER;
	EntryRecord* pER;
	DS_Object_Info* pObject_Info;
	unsigned int permission_check;
	unsigned int i;
	unsigned int result;
	// Line 761, Address: 0x233a40, Func Offset: 0
	// Line 762, Address: 0x233a74, Func Offset: 0x34
	// Line 766, Address: 0x233a78, Func Offset: 0x38
	// Line 767, Address: 0x233a8c, Func Offset: 0x4c
	// Line 769, Address: 0x233aa4, Func Offset: 0x64
	// Line 770, Address: 0x233aa8, Func Offset: 0x68
	// Line 774, Address: 0x233aac, Func Offset: 0x6c
	// Line 776, Address: 0x233aec, Func Offset: 0xac
	// Line 777, Address: 0x233b00, Func Offset: 0xc0
	// Line 779, Address: 0x233b04, Func Offset: 0xc4
	// Line 781, Address: 0x233b0c, Func Offset: 0xcc
	// Line 782, Address: 0x233b20, Func Offset: 0xe0
	// Line 784, Address: 0x233b24, Func Offset: 0xe4
	// Line 786, Address: 0x233b2c, Func Offset: 0xec
	// Line 787, Address: 0x233b54, Func Offset: 0x114
	// Line 789, Address: 0x233b58, Func Offset: 0x118
	// Line 791, Address: 0x233b60, Func Offset: 0x120
	// Line 792, Address: 0x233b88, Func Offset: 0x148
	// Line 800, Address: 0x233b8c, Func Offset: 0x14c
	// Line 801, Address: 0x233b94, Func Offset: 0x154
	// Line 804, Address: 0x233bcc, Func Offset: 0x18c
	// Line 805, Address: 0x233bd8, Func Offset: 0x198
	// Line 807, Address: 0x233be4, Func Offset: 0x1a4
	// Line 808, Address: 0x233bec, Func Offset: 0x1ac
	// Line 809, Address: 0x233bf0, Func Offset: 0x1b0
	// Line 810, Address: 0x233bfc, Func Offset: 0x1bc
	// Line 811, Address: 0x233c00, Func Offset: 0x1c0
	// Line 812, Address: 0x233c04, Func Offset: 0x1c4
	// Line 814, Address: 0x233c10, Func Offset: 0x1d0
	// Line 816, Address: 0x233c2c, Func Offset: 0x1ec
	// Line 817, Address: 0x233c34, Func Offset: 0x1f4
	// Line 818, Address: 0x233c44, Func Offset: 0x204
	// Line 820, Address: 0x233c48, Func Offset: 0x208
	// Line 822, Address: 0x233c50, Func Offset: 0x210
	// Line 823, Address: 0x233c68, Func Offset: 0x228
	// Line 826, Address: 0x233c70, Func Offset: 0x230
	// Line 827, Address: 0x233c7c, Func Offset: 0x23c
	// Line 829, Address: 0x233c88, Func Offset: 0x248
	// Line 830, Address: 0x233c90, Func Offset: 0x250
	// Line 831, Address: 0x233c94, Func Offset: 0x254
	// Line 832, Address: 0x233ca0, Func Offset: 0x260
	// Line 833, Address: 0x233ca4, Func Offset: 0x264
	// Line 834, Address: 0x233ca8, Func Offset: 0x268
	// Line 837, Address: 0x233cb0, Func Offset: 0x270
	// Line 839, Address: 0x233cb4, Func Offset: 0x274
	// Line 840, Address: 0x233cbc, Func Offset: 0x27c
	// Line 841, Address: 0x233cc0, Func Offset: 0x280
	// Line 842, Address: 0x233cd8, Func Offset: 0x298
	// Line 845, Address: 0x233ce0, Func Offset: 0x2a0
	// Line 846, Address: 0x233ce8, Func Offset: 0x2a8
	// Line 849, Address: 0x233cf8, Func Offset: 0x2b8
	// Line 850, Address: 0x233d00, Func Offset: 0x2c0
	// Line 855, Address: 0x233d18, Func Offset: 0x2d8
	// Line 860, Address: 0x233d1c, Func Offset: 0x2dc
	// Line 861, Address: 0x233d20, Func Offset: 0x2e0
	// Func End, Address: 0x233d4c, Func Offset: 0x30c
}

// 
// Start address: 0x233d50
unsigned int DSR_FileFormat_ErrorChecker(DS_Record_Header* pHeader)
{
	DS_Object_Info* pInfo;
	unsigned int num;
	unsigned int result;
	// Line 866, Address: 0x233d50, Func Offset: 0
	// Line 867, Address: 0x233d60, Func Offset: 0x10
	// Line 869, Address: 0x233d68, Func Offset: 0x18
	// Line 871, Address: 0x233d70, Func Offset: 0x20
	// Line 873, Address: 0x233d74, Func Offset: 0x24
	// Line 874, Address: 0x233d80, Func Offset: 0x30
	// Line 875, Address: 0x233d8c, Func Offset: 0x3c
	// Line 877, Address: 0x233d90, Func Offset: 0x40
	// Line 884, Address: 0x233dc0, Func Offset: 0x70
	// Line 887, Address: 0x233dc4, Func Offset: 0x74
	// Line 889, Address: 0x233dc8, Func Offset: 0x78
	// Line 890, Address: 0x233dd8, Func Offset: 0x88
	// Line 891, Address: 0x233ddc, Func Offset: 0x8c
	// Line 892, Address: 0x233de0, Func Offset: 0x90
	// Line 896, Address: 0x233df8, Func Offset: 0xa8
	// Func End, Address: 0x233e0c, Func Offset: 0xbc
}

// 
// Start address: 0x233e10
unsigned int DSR_FF_Header_ErrorChecker(DS_Record_Header* pHeader)
{
	unsigned int result;
	// Line 901, Address: 0x233e10, Func Offset: 0
	// Line 902, Address: 0x233e18, Func Offset: 0x8
	// Line 904, Address: 0x233e1c, Func Offset: 0xc
	// Line 906, Address: 0x233e24, Func Offset: 0x14
	// Line 909, Address: 0x233e4c, Func Offset: 0x3c
	// Line 913, Address: 0x233e5c, Func Offset: 0x4c
	// Line 917, Address: 0x233e60, Func Offset: 0x50
	// Line 918, Address: 0x233e6c, Func Offset: 0x5c
	// Line 923, Address: 0x233e70, Func Offset: 0x60
	// Func End, Address: 0x233e80, Func Offset: 0x70
}

// 
// Start address: 0x233e80
void TotalActuaterLV_Keeper(unsigned int ControllerID, unsigned int ActuaterType, float ActuaterLV)
{
	// Line 932, Address: 0x233e80, Func Offset: 0
	// Line 933, Address: 0x233e9c, Func Offset: 0x1c
	// Func End, Address: 0x233ea4, Func Offset: 0x24
}

// 
// Start address: 0x233eb0
void TotalActuaterLV_Send(unsigned int ControllerID, unsigned int ActuaterType)
{
	float act_ratio;
	float act_lv;
	// Line 938, Address: 0x233eb0, Func Offset: 0
	// Line 940, Address: 0x233ecc, Func Offset: 0x1c
	// Line 941, Address: 0x233ee8, Func Offset: 0x38
	// Line 943, Address: 0x233ef0, Func Offset: 0x40
	// Line 949, Address: 0x233f24, Func Offset: 0x74
	// Line 950, Address: 0x233f3c, Func Offset: 0x8c
	// Line 958, Address: 0x233f44, Func Offset: 0x94
	// Line 961, Address: 0x233f48, Func Offset: 0x98
	// Line 964, Address: 0x233f68, Func Offset: 0xb8
	// Line 965, Address: 0x233f78, Func Offset: 0xc8
	// Func End, Address: 0x233f94, Func Offset: 0xe4
}

// 
// Start address: 0x233fa0
void TotalActuaterLV_Initialize(unsigned int ControllerID, unsigned int ActuaterType)
{
	// Line 972, Address: 0x233fa0, Func Offset: 0
	// Line 973, Address: 0x233fbc, Func Offset: 0x1c
	// Func End, Address: 0x233fc4, Func Offset: 0x24
}

// 
// Start address: 0x233fd0
float ActuaterLV_Complement(DS_Record* pDSR, float Time)
{
	float act_lv_next;
	float act_lv_current;
	float comp_ratio;
	float time_next;
	float time_current;
	float result;
	// Line 1011, Address: 0x233fd0, Func Offset: 0
	// Line 1012, Address: 0x233fd4, Func Offset: 0x4
	// Line 1013, Address: 0x233fd8, Func Offset: 0x8
	// Line 1014, Address: 0x233fec, Func Offset: 0x1c
	// Line 1015, Address: 0x233ff8, Func Offset: 0x28
	// Line 1018, Address: 0x234004, Func Offset: 0x34
	// Line 1021, Address: 0x234090, Func Offset: 0xc0
	// Func End, Address: 0x234098, Func Offset: 0xc8
}

// 
// Start address: 0x2340a0
float ActuaterLV_Complement_Edit(DS_Record_Edit* pDSR, float Time)
{
	float act_lv_next;
	float act_lv_current;
	float comp_ratio;
	float time_next;
	float time_current;
	float result;
	// Line 1028, Address: 0x2340a0, Func Offset: 0
	// Line 1029, Address: 0x2340a4, Func Offset: 0x4
	// Line 1030, Address: 0x2340ac, Func Offset: 0xc
	// Line 1031, Address: 0x2340c0, Func Offset: 0x20
	// Line 1032, Address: 0x2340cc, Func Offset: 0x2c
	// Line 1035, Address: 0x2340d8, Func Offset: 0x38
	// Line 1038, Address: 0x234164, Func Offset: 0xc4
	// Func End, Address: 0x23416c, Func Offset: 0xcc
}

// 
// Start address: 0x234170
int Node_Next_Search(Record_Info* pInfo, float Time)
{
	int result;
	unsigned int i;
	DS_Record* pDSR;
	unsigned int node_num;
	// Line 1046, Address: 0x234170, Func Offset: 0
	// Line 1047, Address: 0x234178, Func Offset: 0x8
	// Line 1049, Address: 0x23417c, Func Offset: 0xc
	// Line 1051, Address: 0x234180, Func Offset: 0x10
	// Line 1052, Address: 0x23418c, Func Offset: 0x1c
	// Line 1053, Address: 0x2341a0, Func Offset: 0x30
	// Line 1054, Address: 0x2341a4, Func Offset: 0x34
	// Line 1056, Address: 0x2341ac, Func Offset: 0x3c
	// Line 1059, Address: 0x2341c8, Func Offset: 0x58
	// Func End, Address: 0x2341d0, Func Offset: 0x60
}

// 
// Start address: 0x2341d0
int Node_Current_Search(Record_Info* pInfo, float Time)
{
	int num;
	int result;
	// Line 1089, Address: 0x2341d0, Func Offset: 0
	// Line 1090, Address: 0x2341d8, Func Offset: 0x8
	// Line 1091, Address: 0x2341dc, Func Offset: 0xc
	// Line 1094, Address: 0x2341e4, Func Offset: 0x14
	// Line 1095, Address: 0x2341ec, Func Offset: 0x1c
	// Line 1098, Address: 0x2341f0, Func Offset: 0x20
	// Line 1099, Address: 0x2341f4, Func Offset: 0x24
	// Func End, Address: 0x234204, Func Offset: 0x34
}

// 
// Start address: 0x234210
DS_Record_Edit* EditNode_Current_Search(Record_Info* pInfo, float Time)
{
	DS_Record_Edit* pDSR;
	DS_Record_Edit* result;
	// Line 1108, Address: 0x234210, Func Offset: 0
	// Line 1109, Address: 0x234214, Func Offset: 0x4
	// Line 1121, Address: 0x234218, Func Offset: 0x8
	// Line 1122, Address: 0x234220, Func Offset: 0x10
	// Line 1123, Address: 0x234234, Func Offset: 0x24
	// Line 1124, Address: 0x234238, Func Offset: 0x28
	// Line 1126, Address: 0x234240, Func Offset: 0x30
	// Line 1127, Address: 0x234248, Func Offset: 0x38
	// Line 1131, Address: 0x234250, Func Offset: 0x40
	// Func End, Address: 0x234258, Func Offset: 0x48
}

// 
// Start address: 0x234260
void EventManager()
{
	EntryRecord* pER;
	DSR_MU_EventDescriptor Descriptor;
	// Line 1161, Address: 0x234260, Func Offset: 0
	// Line 1164, Address: 0x234268, Func Offset: 0x8
	// Line 1165, Address: 0x234270, Func Offset: 0x10
	// Line 1167, Address: 0x234280, Func Offset: 0x20
	// Line 1170, Address: 0x234288, Func Offset: 0x28
	// Line 1172, Address: 0x2342b4, Func Offset: 0x54
	// Line 1173, Address: 0x2342b8, Func Offset: 0x58
	// Line 1174, Address: 0x2342c0, Func Offset: 0x60
	// Line 1175, Address: 0x2342c8, Func Offset: 0x68
	// Line 1178, Address: 0x2342d0, Func Offset: 0x70
	// Line 1179, Address: 0x2342d8, Func Offset: 0x78
	// Line 1182, Address: 0x2342e0, Func Offset: 0x80
	// Line 1183, Address: 0x2342ec, Func Offset: 0x8c
	// Line 1186, Address: 0x2342f4, Func Offset: 0x94
	// Line 1187, Address: 0x234300, Func Offset: 0xa0
	// Line 1190, Address: 0x234308, Func Offset: 0xa8
	// Line 1191, Address: 0x234314, Func Offset: 0xb4
	// Line 1194, Address: 0x23431c, Func Offset: 0xbc
	// Line 1200, Address: 0x234328, Func Offset: 0xc8
	// Line 1204, Address: 0x23433c, Func Offset: 0xdc
	// Func End, Address: 0x23434c, Func Offset: 0xec
}

// 
// Start address: 0x234350
unsigned int EventMessage_Post(unsigned int Handle, unsigned int EventID, float Value)
{
	DSR_MU_EventDescriptor Descriptor;
	unsigned int result;
	// Line 1223, Address: 0x234350, Func Offset: 0
	// Line 1224, Address: 0x23435c, Func Offset: 0xc
	// Line 1225, Address: 0x234360, Func Offset: 0x10
	// Line 1227, Address: 0x234388, Func Offset: 0x38
	// Line 1228, Address: 0x23439c, Func Offset: 0x4c
	// Line 1231, Address: 0x2343a0, Func Offset: 0x50
	// Line 1232, Address: 0x2343a4, Func Offset: 0x54
	// Func End, Address: 0x2343b8, Func Offset: 0x68
}

// 
// Start address: 0x2343c0
unsigned int EventMessageQueue_enQueue(DSR_MU_EventDescriptor* pDescriptor)
{
	unsigned int length;
	unsigned int result;
	// Line 1239, Address: 0x2343c0, Func Offset: 0
	// Line 1240, Address: 0x2343d4, Func Offset: 0x14
	// Line 1241, Address: 0x2343d8, Func Offset: 0x18
	// Line 1243, Address: 0x2343e0, Func Offset: 0x20
	// Line 1244, Address: 0x2343f8, Func Offset: 0x38
	// Line 1245, Address: 0x234434, Func Offset: 0x74
	// Line 1246, Address: 0x234454, Func Offset: 0x94
	// Line 1247, Address: 0x234468, Func Offset: 0xa8
	// Line 1250, Address: 0x23446c, Func Offset: 0xac
	// Line 1251, Address: 0x234470, Func Offset: 0xb0
	// Func End, Address: 0x234488, Func Offset: 0xc8
}

// 
// Start address: 0x234490
unsigned int EventMessageQueue_deQueue(DSR_MU_EventDescriptor* pDescriptor)
{
	unsigned int length;
	unsigned int result;
	// Line 1258, Address: 0x234490, Func Offset: 0
	// Line 1259, Address: 0x2344a4, Func Offset: 0x14
	// Line 1260, Address: 0x2344a8, Func Offset: 0x18
	// Line 1262, Address: 0x2344b0, Func Offset: 0x20
	// Line 1263, Address: 0x2344c4, Func Offset: 0x34
	// Line 1264, Address: 0x234500, Func Offset: 0x70
	// Line 1265, Address: 0x234520, Func Offset: 0x90
	// Line 1266, Address: 0x234534, Func Offset: 0xa4
	// Line 1269, Address: 0x234538, Func Offset: 0xa8
	// Line 1270, Address: 0x23453c, Func Offset: 0xac
	// Func End, Address: 0x234554, Func Offset: 0xc4
}

// 
// Start address: 0x234560
void EventMessageQueue_Initialize()
{
	// Line 1275, Address: 0x234560, Func Offset: 0
	// Line 1278, Address: 0x234584, Func Offset: 0x24
	// Func End, Address: 0x23458c, Func Offset: 0x2c
}

// 
// Start address: 0x234590
unsigned int EventMessageQueue_Length_Get()
{
	// Line 1295, Address: 0x234590, Func Offset: 0
	// Line 1296, Address: 0x234594, Func Offset: 0x4
	// Func End, Address: 0x23459c, Func Offset: 0xc
}

// 
// Start address: 0x2345a0
void DSR_MUD_Initialize()
{
	// Line 1300, Address: 0x2345a0, Func Offset: 0
	// Line 1301, Address: 0x2345a8, Func Offset: 0x8
	// Line 1303, Address: 0x2345c0, Func Offset: 0x20
	// Line 1305, Address: 0x2345d4, Func Offset: 0x34
	// Line 1306, Address: 0x2345dc, Func Offset: 0x3c
	// Func End, Address: 0x2345ec, Func Offset: 0x4c
}

// 
// Start address: 0x2345f0
unsigned int DSR_Entry0(void* pAddress, unsigned int ControllerID, float Ratio)
{
	unsigned int handle[64];
	int num;
	DS_Record_Header* pHeader;
	unsigned int result;
	// Line 1322, Address: 0x2345f0, Func Offset: 0
	// Line 1324, Address: 0x234614, Func Offset: 0x24
	// Line 1327, Address: 0x23461c, Func Offset: 0x2c
	// Line 1331, Address: 0x234620, Func Offset: 0x30
	// Line 1333, Address: 0x23463c, Func Offset: 0x4c
	// Line 1334, Address: 0x234644, Func Offset: 0x54
	// Line 1335, Address: 0x23464c, Func Offset: 0x5c
	// Line 1336, Address: 0x234668, Func Offset: 0x78
	// Line 1339, Address: 0x234678, Func Offset: 0x88
	// Line 1341, Address: 0x234680, Func Offset: 0x90
	// Line 1342, Address: 0x234684, Func Offset: 0x94
	// Func End, Address: 0x2346a4, Func Offset: 0xb4
}

// 
// Start address: 0x2346b0
void DSR_Sequencer_Initialize()
{
	// Line 1426, Address: 0x2346b0, Func Offset: 0
	// Line 1427, Address: 0x2346b8, Func Offset: 0x8
	// Line 1428, Address: 0x2346c0, Func Offset: 0x10
	// Line 1430, Address: 0x2346c8, Func Offset: 0x18
	// Line 1431, Address: 0x2346d8, Func Offset: 0x28
	// Line 1432, Address: 0x2346e8, Func Offset: 0x38
	// Line 1433, Address: 0x2346f8, Func Offset: 0x48
	// Line 1434, Address: 0x234708, Func Offset: 0x58
	// Func End, Address: 0x234718, Func Offset: 0x68
}

// 
// Start address: 0x234720
void DSR_Sequencer()
{
	// Line 1439, Address: 0x234720, Func Offset: 0
	// Line 1441, Address: 0x234728, Func Offset: 0x8
	// Line 1444, Address: 0x234730, Func Offset: 0x10
	// Line 1447, Address: 0x234738, Func Offset: 0x18
	// Line 1448, Address: 0x234748, Func Offset: 0x28
	// Line 1449, Address: 0x234758, Func Offset: 0x38
	// Line 1450, Address: 0x234768, Func Offset: 0x48
	// Line 1451, Address: 0x234778, Func Offset: 0x58
	// Line 1453, Address: 0x234788, Func Offset: 0x68
	// Func End, Address: 0x234798, Func Offset: 0x78
}

// 
// Start address: 0x2347a0
void DSR_Sequence_Different_Time_Set(float Different_Time)
{
	// Line 1457, Address: 0x2347a0, Func Offset: 0
	// Line 1458, Address: 0x2347a8, Func Offset: 0x8
	// Line 1459, Address: 0x2347b0, Func Offset: 0x10
	// Func End, Address: 0x2347c0, Func Offset: 0x20
}

