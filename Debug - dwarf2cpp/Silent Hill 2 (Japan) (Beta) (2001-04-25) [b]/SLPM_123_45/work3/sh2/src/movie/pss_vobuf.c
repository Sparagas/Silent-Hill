typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;


typedef unsigned char type[518400];

struct _anon0
{
	_anon1* data;
	_anon2* tagProg;
	_anon2* tagInter;
	_anon2* tag;
	int write;
	int count;
	int size;
};

struct _anon1
{
	unsigned char v[518400];
};

struct _anon2
{
	int status;
	unsigned int* v;
};


void voBufCreate(_anon0* f, _anon1* data, _anon2* tagProg, _anon2* tagInter, int size);
void voBufDelete();
void voBufReset(_anon0* f);
int voBufIsFull(_anon0* f);
void voBufIncCount(_anon0* f);
_anon1* voBufGetData(_anon0* f);
int voBufIsEmpty(_anon0* f);
_anon2* voBufGetTag(_anon0* f);
void voBufDecCount(_anon0* f);

// 
// Start address: 0x23cf80
void voBufCreate(_anon0* f, _anon1* data, _anon2* tagProg, _anon2* tagInter, int size)
{
	int i;
	// Line 33, Address: 0x23cf80, Func Offset: 0
	// Line 36, Address: 0x23cf9c, Func Offset: 0x1c
	// Line 37, Address: 0x23cfa8, Func Offset: 0x28
	// Line 38, Address: 0x23cfb4, Func Offset: 0x34
	// Line 40, Address: 0x23cfc0, Func Offset: 0x40
	// Line 41, Address: 0x23cfcc, Func Offset: 0x4c
	// Line 42, Address: 0x23cfd8, Func Offset: 0x58
	// Line 43, Address: 0x23cfe0, Func Offset: 0x60
	// Line 45, Address: 0x23cfe8, Func Offset: 0x68
	// Line 46, Address: 0x23cff4, Func Offset: 0x74
	// Line 47, Address: 0x23d008, Func Offset: 0x88
	// Line 48, Address: 0x23d01c, Func Offset: 0x9c
	// Line 49, Address: 0x23d030, Func Offset: 0xb0
	// Func End, Address: 0x23d040, Func Offset: 0xc0
}

// 
// Start address: 0x23d040
void voBufDelete()
{
	// Line 52, Address: 0x23d040, Func Offset: 0
	// Line 53, Address: 0x23d044, Func Offset: 0x4
	// Func End, Address: 0x23d050, Func Offset: 0x10
}

// 
// Start address: 0x23d050
void voBufReset(_anon0* f)
{
	// Line 56, Address: 0x23d050, Func Offset: 0
	// Line 57, Address: 0x23d058, Func Offset: 0x8
	// Line 58, Address: 0x23d060, Func Offset: 0x10
	// Line 59, Address: 0x23d068, Func Offset: 0x18
	// Func End, Address: 0x23d074, Func Offset: 0x24
}

// 
// Start address: 0x23d080
int voBufIsFull(_anon0* f)
{
	// Line 62, Address: 0x23d080, Func Offset: 0
	// Line 63, Address: 0x23d088, Func Offset: 0x8
	// Line 64, Address: 0x23d0a0, Func Offset: 0x20
	// Func End, Address: 0x23d0ac, Func Offset: 0x2c
}

// 
// Start address: 0x23d0b0
void voBufIncCount(_anon0* f)
{
	unsigned int stat;
	// Line 69, Address: 0x23d0b0, Func Offset: 0
	// Line 71, Address: 0x23d0cc, Func Offset: 0x1c
	// Line 72, Address: 0x23d0e4, Func Offset: 0x34
	// Line 73, Address: 0x23d0f0, Func Offset: 0x40
	// Line 76, Address: 0x23d110, Func Offset: 0x60
	// Line 77, Address: 0x23d114, Func Offset: 0x64
	// Func End, Address: 0x23d11c, Func Offset: 0x6c
}

// 
// Start address: 0x23d120
_anon1* voBufGetData(_anon0* f)
{
	// Line 80, Address: 0x23d120, Func Offset: 0
	// Line 81, Address: 0x23d130, Func Offset: 0x10
	// Line 82, Address: 0x23d184, Func Offset: 0x64
	// Func End, Address: 0x23d198, Func Offset: 0x78
}

// 
// Start address: 0x23d1a0
int voBufIsEmpty(_anon0* f)
{
	// Line 89, Address: 0x23d1a0, Func Offset: 0
	// Line 90, Address: 0x23d1a8, Func Offset: 0x8
	// Line 91, Address: 0x23d1b8, Func Offset: 0x18
	// Func End, Address: 0x23d1c4, Func Offset: 0x24
}

// 
// Start address: 0x23d1d0
_anon2* voBufGetTag(_anon0* f)
{
	// Line 94, Address: 0x23d1d0, Func Offset: 0
	// Line 95, Address: 0x23d1e0, Func Offset: 0x10
	// Line 97, Address: 0x23d24c, Func Offset: 0x7c
	// Func End, Address: 0x23d260, Func Offset: 0x90
}

// 
// Start address: 0x23d260
void voBufDecCount(_anon0* f)
{
	// Line 100, Address: 0x23d260, Func Offset: 0
	// Line 101, Address: 0x23d268, Func Offset: 0x8
	// Line 102, Address: 0x23d278, Func Offset: 0x18
	// Line 104, Address: 0x23d288, Func Offset: 0x28
	// Func End, Address: 0x23d294, Func Offset: 0x34
}

