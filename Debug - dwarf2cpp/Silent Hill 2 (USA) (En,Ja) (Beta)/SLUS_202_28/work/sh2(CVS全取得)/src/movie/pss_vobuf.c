typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;


typedef unsigned char type[393216];

struct _anon0
{
	_anon2* data;
	_anon1* tagInter;
	_anon1* tag;
	int write;
	int count;
	int size;
};

struct _anon1
{
	int status;
	unsigned int* v;
};

struct _anon2
{
	unsigned char v[393216];
};


void voBufCreate(_anon0* f, _anon2* data, _anon1* tagInter, int size);
void voBufDelete();
void voBufReset(_anon0* f);
int voBufIsFull(_anon0* f);
void voBufIncCount(_anon0* f);
_anon2* voBufGetData(_anon0* f);
int voBufIsEmpty(_anon0* f);
_anon1* voBufGetTag(_anon0* f);
void voBufDecCount(_anon0* f);

// 
// Start address: 0x28de90
void voBufCreate(_anon0* f, _anon2* data, _anon1* tagInter, int size)
{
	int i;
	// Line 36, Address: 0x28de90, Func Offset: 0
	// Line 38, Address: 0x28de94, Func Offset: 0x4
	// Line 40, Address: 0x28de98, Func Offset: 0x8
	// Line 41, Address: 0x28de9c, Func Offset: 0xc
	// Line 42, Address: 0x28dea0, Func Offset: 0x10
	// Line 43, Address: 0x28dea4, Func Offset: 0x14
	// Line 45, Address: 0x28dea8, Func Offset: 0x18
	// Line 47, Address: 0x28deb4, Func Offset: 0x24
	// Line 48, Address: 0x28dec4, Func Offset: 0x34
	// Line 49, Address: 0x28ded4, Func Offset: 0x44
	// Func End, Address: 0x28dedc, Func Offset: 0x4c
}

// 
// Start address: 0x28dee0
void voBufDelete()
{
	// Line 53, Address: 0x28dee0, Func Offset: 0
	// Func End, Address: 0x28dee8, Func Offset: 0x8
}

// 
// Start address: 0x28def0
void voBufReset(_anon0* f)
{
	// Line 57, Address: 0x28def0, Func Offset: 0
	// Line 58, Address: 0x28def4, Func Offset: 0x4
	// Line 59, Address: 0x28def8, Func Offset: 0x8
	// Func End, Address: 0x28df00, Func Offset: 0x10
}

// 
// Start address: 0x28df00
int voBufIsFull(_anon0* f)
{
	// Line 63, Address: 0x28df00, Func Offset: 0
	// Line 64, Address: 0x28df10, Func Offset: 0x10
	// Func End, Address: 0x28df18, Func Offset: 0x18
}

// 
// Start address: 0x28df20
void voBufIncCount(_anon0* f)
{
	// Line 67, Address: 0x28df20, Func Offset: 0
	// Line 69, Address: 0x28df30, Func Offset: 0x10
	// Line 71, Address: 0x28df38, Func Offset: 0x18
	// Line 72, Address: 0x28df50, Func Offset: 0x30
	// Line 73, Address: 0x28df5c, Func Offset: 0x3c
	// Line 76, Address: 0x28df7c, Func Offset: 0x5c
	// Line 77, Address: 0x28df84, Func Offset: 0x64
	// Func End, Address: 0x28df98, Func Offset: 0x78
}

// 
// Start address: 0x28dfa0
_anon2* voBufGetData(_anon0* f)
{
	// Line 80, Address: 0x28dfa0, Func Offset: 0
	// Line 81, Address: 0x28dfb0, Func Offset: 0x10
	// Line 82, Address: 0x28dfe4, Func Offset: 0x44
	// Func End, Address: 0x28dff8, Func Offset: 0x58
}

// 
// Start address: 0x28e000
int voBufIsEmpty(_anon0* f)
{
	// Line 90, Address: 0x28e000, Func Offset: 0
	// Line 91, Address: 0x28e00c, Func Offset: 0xc
	// Func End, Address: 0x28e014, Func Offset: 0x14
}

// 
// Start address: 0x28e020
_anon1* voBufGetTag(_anon0* f)
{
	// Line 94, Address: 0x28e020, Func Offset: 0
	// Line 95, Address: 0x28e030, Func Offset: 0x10
	// Line 97, Address: 0x28e07c, Func Offset: 0x5c
	// Func End, Address: 0x28e090, Func Offset: 0x70
}

// 
// Start address: 0x28e090
void voBufDecCount(_anon0* f)
{
	// Line 101, Address: 0x28e090, Func Offset: 0
	// Line 102, Address: 0x28e09c, Func Offset: 0xc
	// Line 104, Address: 0x28e0a8, Func Offset: 0x18
	// Func End, Address: 0x28e0b0, Func Offset: 0x20
}

