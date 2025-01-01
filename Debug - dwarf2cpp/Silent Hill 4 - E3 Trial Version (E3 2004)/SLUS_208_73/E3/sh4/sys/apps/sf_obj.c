typedef struct sfObj;
typedef union _anon0;

typedef void(*type_2)(sfObj*);
typedef void(*type_3)(sfObj*);
typedef void(*type_4)(sfObj*);
typedef void(*type_5)(sfObj*);

typedef _anon0 type_0[256];
typedef sfObj type_1[300];
typedef short type_6[2];
typedef unsigned short type_7[2];
typedef char type_8[4];
typedef unsigned char type_9[4];
typedef float type_10[1];
typedef int type_11[1];

struct sfObj
{
	_anon0 fwork[256];
	_anon0* work;
	void(*func)(sfObj*);
	_anon0* work_pt0;
	_anon0* work_pt1;
	unsigned short step;
	unsigned short step_s;
	unsigned short kind;
	unsigned short pad;
	_anon0* sys_work;
	_anon0* scene_work;
	_anon0* event_work;
	_anon0* objhit_work;
	void(*destructor)(sfObj*);
	short flag;
	short thread_no;
};

union _anon0
{
	int si;
	unsigned int ui;
	void* pt;
	short ss[2];
	unsigned short us[2];
	char sc[4];
	unsigned char uc[4];
	float f;
	float fv[1];
	int iv[1];
};

sfObj sf_obj_work[300];

void sfObjInit();
void sfObjExec(int thread_no);
sfObj* sfObjAllocate();
void sfObjFree(sfObj* obj);
void sfObjConstruct(sfObj* obj, void* func);
void sfObjDestruct(sfObj* obj);
void sfObjSetDestructor(sfObj* obj, void(*func)(sfObj*));
void sfObjSetThread(sfObj* obj, int thread_no);
int sfObjWorkRest(sfObj* obj);
_anon0* sfObjWorkAllocate(sfObj* obj, int size);
_anon0* sfObjWorkAllocateAlign16(sfObj* obj, int size);
sfObj* sfObjSearchFunc(void* func);
void sfObjFuncDummy();

// 
// Start address: 0x1418b0
void sfObjInit()
{
	int i;
	// Line 24, Address: 0x1418b0, Func Offset: 0
	// Line 26, Address: 0x1418c0, Func Offset: 0x10
	// Line 27, Address: 0x1418d0, Func Offset: 0x20
	// Line 28, Address: 0x1418dc, Func Offset: 0x2c
	// Line 29, Address: 0x1418ec, Func Offset: 0x3c
	// Func End, Address: 0x141900, Func Offset: 0x50
}

// 
// Start address: 0x141900
void sfObjExec(int thread_no)
{
	int i;
	sfObj* ptr;
	// Line 55, Address: 0x141900, Func Offset: 0
	// Line 59, Address: 0x141918, Func Offset: 0x18
	// Line 60, Address: 0x14192c, Func Offset: 0x2c
	// Line 61, Address: 0x141934, Func Offset: 0x34
	// Line 62, Address: 0x141968, Func Offset: 0x68
	// Line 64, Address: 0x141970, Func Offset: 0x70
	// Line 66, Address: 0x141978, Func Offset: 0x78
	// Line 68, Address: 0x141988, Func Offset: 0x88
	// Line 70, Address: 0x141994, Func Offset: 0x94
	// Line 72, Address: 0x14199c, Func Offset: 0x9c
	// Line 73, Address: 0x1419b0, Func Offset: 0xb0
	// Func End, Address: 0x1419c8, Func Offset: 0xc8
}

// 
// Start address: 0x1419d0
sfObj* sfObjAllocate()
{
	int i;
	sfObj* ptr;
	// Line 84, Address: 0x1419d0, Func Offset: 0
	// Line 88, Address: 0x1419d4, Func Offset: 0x4
	// Line 84, Address: 0x1419d8, Func Offset: 0x8
	// Line 88, Address: 0x1419e0, Func Offset: 0x10
	// Line 89, Address: 0x1419e8, Func Offset: 0x18
	// Line 90, Address: 0x1419f4, Func Offset: 0x24
	// Line 91, Address: 0x1419fc, Func Offset: 0x2c
	// Line 93, Address: 0x141a04, Func Offset: 0x34
	// Line 94, Address: 0x141a18, Func Offset: 0x48
	// Line 95, Address: 0x141a20, Func Offset: 0x50
	// Func End, Address: 0x141a30, Func Offset: 0x60
}

// 
// Start address: 0x141a30
void sfObjFree(sfObj* obj)
{
	// Line 101, Address: 0x141a30, Func Offset: 0
	// Func End, Address: 0x141a38, Func Offset: 0x8
}

// 
// Start address: 0x141a40
void sfObjConstruct(sfObj* obj, void* func)
{
	// Line 111, Address: 0x141a40, Func Offset: 0
	// Line 112, Address: 0x141a54, Func Offset: 0x14
	// Line 114, Address: 0x141a5c, Func Offset: 0x1c
	// Line 115, Address: 0x141a68, Func Offset: 0x28
	// Line 116, Address: 0x141a6c, Func Offset: 0x2c
	// Line 117, Address: 0x141a70, Func Offset: 0x30
	// Func End, Address: 0x141a84, Func Offset: 0x44
}

// 
// Start address: 0x141a90
void sfObjDestruct(sfObj* obj)
{
	void(*destruct_func)(sfObj*);
	// Line 124, Address: 0x141a90, Func Offset: 0
	// Line 126, Address: 0x141aa0, Func Offset: 0x10
	// Line 128, Address: 0x141aa8, Func Offset: 0x18
	// Line 129, Address: 0x141aac, Func Offset: 0x1c
	// Line 132, Address: 0x141ab4, Func Offset: 0x24
	// Line 133, Address: 0x141abc, Func Offset: 0x2c
	// Line 134, Address: 0x141ac0, Func Offset: 0x30
	// Line 135, Address: 0x141ad0, Func Offset: 0x40
	// Func End, Address: 0x141ae0, Func Offset: 0x50
}

// 
// Start address: 0x141ae0
void sfObjSetDestructor(sfObj* obj, void(*func)(sfObj*))
{
	// Line 146, Address: 0x141ae0, Func Offset: 0
	// Func End, Address: 0x141ae8, Func Offset: 0x8
}

// 
// Start address: 0x141af0
void sfObjSetThread(sfObj* obj, int thread_no)
{
	// Line 157, Address: 0x141af0, Func Offset: 0
	// Line 159, Address: 0x141af8, Func Offset: 0x8
	// Line 160, Address: 0x141afc, Func Offset: 0xc
	// Func End, Address: 0x141b08, Func Offset: 0x18
}

// 
// Start address: 0x141b10
int sfObjWorkRest(sfObj* obj)
{
	unsigned int* start;
	int no;
	// Line 172, Address: 0x141b10, Func Offset: 0
	// Line 173, Address: 0x141b18, Func Offset: 0x8
	// Line 176, Address: 0x141b20, Func Offset: 0x10
	// Line 177, Address: 0x141b38, Func Offset: 0x28
	// Line 178, Address: 0x141b48, Func Offset: 0x38
	// Line 180, Address: 0x141b58, Func Offset: 0x48
	// Line 181, Address: 0x141b60, Func Offset: 0x50
	// Func End, Address: 0x141b68, Func Offset: 0x58
}

// 
// Start address: 0x141b70
_anon0* sfObjWorkAllocate(sfObj* obj, int size)
{
	int isize;
	_anon0* last_work;
	// Line 194, Address: 0x141b70, Func Offset: 0
	// Line 195, Address: 0x141b8c, Func Offset: 0x1c
	// Line 198, Address: 0x141ba0, Func Offset: 0x30
	// Line 199, Address: 0x141ba8, Func Offset: 0x38
	// Line 201, Address: 0x141bb0, Func Offset: 0x40
	// Line 202, Address: 0x141bc4, Func Offset: 0x54
	// Line 204, Address: 0x141bd0, Func Offset: 0x60
	// Line 205, Address: 0x141bd4, Func Offset: 0x64
	// Line 207, Address: 0x141be0, Func Offset: 0x70
	// Func End, Address: 0x141bf8, Func Offset: 0x88
}

// 
// Start address: 0x141c00
_anon0* sfObjWorkAllocateAlign16(sfObj* obj, int size)
{
	int isize;
	_anon0* last_work;
	// Line 222, Address: 0x141c00, Func Offset: 0
	// Line 223, Address: 0x141c20, Func Offset: 0x20
	// Line 226, Address: 0x141c34, Func Offset: 0x34
	// Line 227, Address: 0x141c3c, Func Offset: 0x3c
	// Line 229, Address: 0x141c4c, Func Offset: 0x4c
	// Line 230, Address: 0x141c50, Func Offset: 0x50
	// Line 229, Address: 0x141c54, Func Offset: 0x54
	// Line 230, Address: 0x141c5c, Func Offset: 0x5c
	// Line 231, Address: 0x141c70, Func Offset: 0x70
	// Line 232, Address: 0x141c74, Func Offset: 0x74
	// Line 233, Address: 0x141c7c, Func Offset: 0x7c
	// Line 235, Address: 0x141c80, Func Offset: 0x80
	// Line 236, Address: 0x141c84, Func Offset: 0x84
	// Line 238, Address: 0x141c90, Func Offset: 0x90
	// Func End, Address: 0x141cac, Func Offset: 0xac
}

// 
// Start address: 0x141cb0
sfObj* sfObjSearchFunc(void* func)
{
	int i;
	sfObj* ptr;
	// Line 251, Address: 0x141cb0, Func Offset: 0
	// Line 252, Address: 0x141cc0, Func Offset: 0x10
	// Line 253, Address: 0x141ccc, Func Offset: 0x1c
	// Line 255, Address: 0x141cd4, Func Offset: 0x24
	// Line 256, Address: 0x141ce8, Func Offset: 0x38
	// Line 257, Address: 0x141cf0, Func Offset: 0x40
	// Func End, Address: 0x141cf8, Func Offset: 0x48
}

// 
// Start address: 0x141d00
void sfObjFuncDummy()
{
	// Line 273, Address: 0x141d00, Func Offset: 0
	// Func End, Address: 0x141d08, Func Offset: 0x8
}

