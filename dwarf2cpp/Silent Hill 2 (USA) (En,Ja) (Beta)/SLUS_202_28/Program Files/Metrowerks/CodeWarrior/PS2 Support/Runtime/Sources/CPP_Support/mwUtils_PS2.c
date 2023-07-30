typedef struct _anon0;
typedef struct ExceptionTableIndex;
typedef struct mwOverlayHeader;

typedef int(*type_0)(int);
typedef void(*type_1)();

typedef unsigned char type_2[3];
typedef unsigned char type_3[32];
typedef ExceptionTableIndex type_4[0];
typedef ExceptionTableIndex type_5[0];
typedef void(*type_6)()[0];
typedef void(*type_7)()[0];

struct _anon0
{
	struct
	{
		unsigned int MARK : 16;
		unsigned int p0 : 16;
	};
};

struct ExceptionTableIndex
{
	char* function_address;
	unsigned int function_size;
	char* exception_table;
};

struct mwOverlayHeader
{
	unsigned char identifier[3];
	unsigned char version;
	unsigned int id;
	unsigned int address;
	unsigned int sz_text;
	unsigned int sz_data;
	unsigned int sz_bss;
	unsigned int _static_init;
	unsigned int _static_init_end;
	unsigned char name[32];
};

ExceptionTableIndex __exception_table_end__[0];
ExceptionTableIndex __exception_table_start__[0];
void(*__static_init_end)()[0];
void(*__static_init)()[0];
int mwHdlrID_VIF0;
int mwHdlrID_VIF1;
int mwHdlrState_VIF0;
int mwHdlrState_VIF1;
int(*mwDbgVifHandler)(int);

void MWNotifyOverlayLoaded();

// 
// Start address: 0x209140
void MWNotifyOverlayLoaded()
{
	// Line 202, Address: 0x209140, Func Offset: 0
	// Func End, Address: 0x209148, Func Offset: 0x8
}

