typedef struct Chara_Bound;


typedef Chara_Bound type[0];

struct Chara_Bound
{
	int chara_id;
	float r;
};

Chara_Bound chara_bound_tbl[0];

float CharaGetBoundR(int chara_id);

// 
// Start address: 0x2758a0
float CharaGetBoundR(int chara_id)
{
	int n;
	int i;
	// Line 9, Address: 0x2758a0, Func Offset: 0
	// Line 13, Address: 0x2758b0, Func Offset: 0x10
	// Line 14, Address: 0x2758b8, Func Offset: 0x18
	// Line 15, Address: 0x2758c4, Func Offset: 0x24
	// Line 16, Address: 0x2758e0, Func Offset: 0x40
	// Line 18, Address: 0x2758f8, Func Offset: 0x58
	// Line 20, Address: 0x27590c, Func Offset: 0x6c
	// Line 21, Address: 0x275918, Func Offset: 0x78
	// Func End, Address: 0x27592c, Func Offset: 0x8c
}

