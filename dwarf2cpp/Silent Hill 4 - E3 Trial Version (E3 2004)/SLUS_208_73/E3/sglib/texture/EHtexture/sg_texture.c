typedef struct _anon0;



struct _anon0
{
	short base;
	short buffer_w;
	unsigned char psm;
	unsigned char data_psm;
	short w;
	short h;
	short buffer_size;
	short w2;
	short h2;
};

unsigned long* sg_packet_cur;

int GetPixelSize(int psm);
int TexLog2(unsigned int n);
void sgTextureConstruct(_anon0* tex, int base, int psm, int w, int h);
unsigned long sgTextureTEX0(_anon0* tex, int tcc, int tfx);
unsigned long sgTextureTEX02(_anon0* tex, int tcc, int tfx, int cbp, int cpsm, int cld);
unsigned long sgTextureFRAME(_anon0* tex, unsigned char r_mask, unsigned char g_mask, unsigned char b_mask, unsigned char a_mask);

// 
// Start address: 0x157b20
int GetPixelSize(int psm)
{
	// Line 18, Address: 0x157b20, Func Offset: 0
	// Line 19, Address: 0x157b28, Func Offset: 0x8
	// Line 25, Address: 0x157bb4, Func Offset: 0x94
	// Line 26, Address: 0x157bb8, Func Offset: 0x98
	// Line 30, Address: 0x157bc0, Func Offset: 0xa0
	// Line 36, Address: 0x157bc8, Func Offset: 0xa8
	// Line 39, Address: 0x157bd0, Func Offset: 0xb0
	// Line 42, Address: 0x157bd8, Func Offset: 0xb8
	// Line 45, Address: 0x157be0, Func Offset: 0xc0
	// Line 48, Address: 0x157bec, Func Offset: 0xcc
	// Line 49, Address: 0x157bf0, Func Offset: 0xd0
	// Func End, Address: 0x157bfc, Func Offset: 0xdc
}

// 
// Start address: 0x157c00
int TexLog2(unsigned int n)
{
	int x;
	// Line 58, Address: 0x157c04, Func Offset: 0x4
	// Line 61, Address: 0x157c08, Func Offset: 0x8
	// Line 62, Address: 0x157c20, Func Offset: 0x20
	// Line 63, Address: 0x157c2c, Func Offset: 0x2c
	// Line 64, Address: 0x157c34, Func Offset: 0x34
	// Line 66, Address: 0x157c38, Func Offset: 0x38
	// Line 68, Address: 0x157c70, Func Offset: 0x70
	// Line 69, Address: 0x157c7c, Func Offset: 0x7c
	// Line 71, Address: 0x157c80, Func Offset: 0x80
	// Func End, Address: 0x157c8c, Func Offset: 0x8c
}

// 
// Start address: 0x157c90
void sgTextureConstruct(_anon0* tex, int base, int psm, int w, int h)
{
	int dh;
	int dv;
	// Line 89, Address: 0x157c90, Func Offset: 0
	// Line 90, Address: 0x157cac, Func Offset: 0x1c
	// Line 92, Address: 0x157cb4, Func Offset: 0x24
	// Line 93, Address: 0x157cb8, Func Offset: 0x28
	// Line 94, Address: 0x157cbc, Func Offset: 0x2c
	// Line 95, Address: 0x157cc8, Func Offset: 0x38
	// Line 96, Address: 0x157cdc, Func Offset: 0x4c
	// Line 97, Address: 0x157ce8, Func Offset: 0x58
	// Line 99, Address: 0x157cf8, Func Offset: 0x68
	// Line 100, Address: 0x157d00, Func Offset: 0x70
	// Line 105, Address: 0x157d18, Func Offset: 0x88
	// Line 110, Address: 0x157d38, Func Offset: 0xa8
	// Line 112, Address: 0x157d44, Func Offset: 0xb4
	// Line 114, Address: 0x157d48, Func Offset: 0xb8
	// Line 119, Address: 0x157d54, Func Offset: 0xc4
	// Line 121, Address: 0x157d58, Func Offset: 0xc8
	// Line 122, Address: 0x157d64, Func Offset: 0xd4
	// Line 124, Address: 0x157d68, Func Offset: 0xd8
	// Line 125, Address: 0x157d78, Func Offset: 0xe8
	// Line 126, Address: 0x157d80, Func Offset: 0xf0
	// Line 131, Address: 0x157d88, Func Offset: 0xf8
	// Line 132, Address: 0x157db4, Func Offset: 0x124
	// Func End, Address: 0x157dcc, Func Offset: 0x13c
}

// 
// Start address: 0x157dd0
unsigned long sgTextureTEX0(_anon0* tex, int tcc, int tfx)
{
	// Line 151, Address: 0x157dd0, Func Offset: 0
	// Line 152, Address: 0x157e38, Func Offset: 0x68
	// Func End, Address: 0x157e40, Func Offset: 0x70
}

// 
// Start address: 0x157e40
unsigned long sgTextureTEX02(_anon0* tex, int tcc, int tfx, int cbp, int cpsm, int cld)
{
	// Line 175, Address: 0x157e40, Func Offset: 0
	// Line 176, Address: 0x157ed8, Func Offset: 0x98
	// Func End, Address: 0x157ee0, Func Offset: 0xa0
}

// 
// Start address: 0x157ee0
unsigned long sgTextureFRAME(_anon0* tex, unsigned char r_mask, unsigned char g_mask, unsigned char b_mask, unsigned char a_mask)
{
	// Line 197, Address: 0x157ee0, Func Offset: 0
	// Line 198, Address: 0x157f60, Func Offset: 0x80
	// Func End, Address: 0x157f68, Func Offset: 0x88
}

