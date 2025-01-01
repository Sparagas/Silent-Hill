typedef struct sfListMan;
typedef struct sfList;



struct sfListMan
{
	void* start;
	unsigned int size;
	int max;
	short free_top;
	short free_last;
};

struct sfList
{
	short prev;
	short next;
};


void sfListInit(sfListMan* listman, void* start, unsigned int size, int max);
short sfListGetLast(sfListMan* listman);
void sfListLinkToTop(sfListMan* listman, short n);
short sfListLinkFreeTop(sfListMan* listman);
void sfListUnlinkFree(sfListMan* listman, short n);
int sfListTellFree(sfListMan* listman, short n);

// 
// Start address: 0x27b950
void sfListInit(sfListMan* listman, void* start, unsigned int size, int max)
{
	short n;
	sfList* p;
	// Line 40, Address: 0x27b950, Func Offset: 0
	// Line 45, Address: 0x27b954, Func Offset: 0x4
	// Line 41, Address: 0x27b958, Func Offset: 0x8
	// Line 43, Address: 0x27b95c, Func Offset: 0xc
	// Line 42, Address: 0x27b960, Func Offset: 0x10
	// Line 45, Address: 0x27b964, Func Offset: 0x14
	// Line 44, Address: 0x27b968, Func Offset: 0x18
	// Line 45, Address: 0x27b96c, Func Offset: 0x1c
	// Line 46, Address: 0x27b978, Func Offset: 0x28
	// Line 45, Address: 0x27b97c, Func Offset: 0x2c
	// Line 47, Address: 0x27b980, Func Offset: 0x30
	// Line 48, Address: 0x27b984, Func Offset: 0x34
	// Line 47, Address: 0x27b988, Func Offset: 0x38
	// Line 48, Address: 0x27b98c, Func Offset: 0x3c
	// Line 46, Address: 0x27b990, Func Offset: 0x40
	// Line 47, Address: 0x27b994, Func Offset: 0x44
	// Line 48, Address: 0x27b998, Func Offset: 0x48
	// Line 47, Address: 0x27b99c, Func Offset: 0x4c
	// Line 48, Address: 0x27b9a0, Func Offset: 0x50
	// Line 49, Address: 0x27b9b0, Func Offset: 0x60
	// Line 51, Address: 0x27b9b8, Func Offset: 0x68
	// Line 50, Address: 0x27b9bc, Func Offset: 0x6c
	// Line 52, Address: 0x27b9c0, Func Offset: 0x70
	// Line 51, Address: 0x27b9c4, Func Offset: 0x74
	// Line 53, Address: 0x27b9c8, Func Offset: 0x78
	// Func End, Address: 0x27b9d0, Func Offset: 0x80
}

// 
// Start address: 0x27b9d0
short sfListGetLast(sfListMan* listman)
{
	// Line 71, Address: 0x27b9d0, Func Offset: 0
	// Line 73, Address: 0x27b9e0, Func Offset: 0x10
	// Func End, Address: 0x27b9e8, Func Offset: 0x18
}

// 
// Start address: 0x27b9f0
void sfListLinkToTop(sfListMan* listman, short n)
{
	sfList* pt;
	// Line 111, Address: 0x27b9f0, Func Offset: 0
	// Line 113, Address: 0x27ba0c, Func Offset: 0x1c
	// Line 115, Address: 0x27ba44, Func Offset: 0x54
	// Line 117, Address: 0x27ba54, Func Offset: 0x64
	// Line 116, Address: 0x27ba58, Func Offset: 0x68
	// Line 117, Address: 0x27ba64, Func Offset: 0x74
	// Line 118, Address: 0x27ba6c, Func Offset: 0x7c
	// Line 119, Address: 0x27ba74, Func Offset: 0x84
	// Line 120, Address: 0x27ba80, Func Offset: 0x90
	// Line 121, Address: 0x27ba90, Func Offset: 0xa0
	// Line 122, Address: 0x27baac, Func Offset: 0xbc
	// Line 123, Address: 0x27bab0, Func Offset: 0xc0
	// Line 124, Address: 0x27bac8, Func Offset: 0xd8
	// Line 125, Address: 0x27bacc, Func Offset: 0xdc
	// Line 126, Address: 0x27bad4, Func Offset: 0xe4
	// Line 127, Address: 0x27bad8, Func Offset: 0xe8
	// Func End, Address: 0x27baf4, Func Offset: 0x104
}

// 
// Start address: 0x27bb00
short sfListLinkFreeTop(sfListMan* listman)
{
	short n;
	sfList* pt;
	// Line 186, Address: 0x27bb00, Func Offset: 0
	// Line 187, Address: 0x27bb10, Func Offset: 0x10
	// Line 189, Address: 0x27bb28, Func Offset: 0x28
	// Line 187, Address: 0x27bb30, Func Offset: 0x30
	// Line 189, Address: 0x27bb34, Func Offset: 0x34
	// Line 190, Address: 0x27bb40, Func Offset: 0x40
	// Line 191, Address: 0x27bb48, Func Offset: 0x48
	// Line 192, Address: 0x27bb60, Func Offset: 0x60
	// Line 193, Address: 0x27bb68, Func Offset: 0x68
	// Line 194, Address: 0x27bb6c, Func Offset: 0x6c
	// Line 196, Address: 0x27bb70, Func Offset: 0x70
	// Func End, Address: 0x27bb78, Func Offset: 0x78
}

// 
// Start address: 0x27bb80
void sfListUnlinkFree(sfListMan* listman, short n)
{
	short t;
	short next;
	// Line 249, Address: 0x27bb80, Func Offset: 0
	// Line 253, Address: 0x27bb90, Func Offset: 0x10
	// Line 252, Address: 0x27bb94, Func Offset: 0x14
	// Line 254, Address: 0x27bb9c, Func Offset: 0x1c
	// Line 256, Address: 0x27bba4, Func Offset: 0x24
	// Line 257, Address: 0x27bbac, Func Offset: 0x2c
	// Line 259, Address: 0x27bbb0, Func Offset: 0x30
	// Line 261, Address: 0x27bbbc, Func Offset: 0x3c
	// Line 263, Address: 0x27bbc4, Func Offset: 0x44
	// Line 264, Address: 0x27bbd4, Func Offset: 0x54
	// Line 265, Address: 0x27bbd8, Func Offset: 0x58
	// Func End, Address: 0x27bbf8, Func Offset: 0x78
}

// 
// Start address: 0x27bc00
int sfListTellFree(sfListMan* listman, short n)
{
	// Line 274, Address: 0x27bc08, Func Offset: 0x8
	// Line 275, Address: 0x27bc18, Func Offset: 0x18
	// Line 277, Address: 0x27bc38, Func Offset: 0x38
	// Func End, Address: 0x27bc40, Func Offset: 0x40
}

