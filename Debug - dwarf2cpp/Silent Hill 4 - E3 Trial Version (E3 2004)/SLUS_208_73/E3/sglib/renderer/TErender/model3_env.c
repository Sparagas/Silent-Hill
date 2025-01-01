typedef struct Model3Env;



struct Model3Env
{
	unsigned long vu1_test;
	unsigned long vu0_test;
	unsigned long vu1_alpha;
	unsigned long vu0_alpha;
	unsigned long vu1_fba;
	unsigned long vu0_fba;
	unsigned long vu1_tfx;
	unsigned long vu0_tfx;
	unsigned char vu1_backclip_force;
	unsigned char vu1_backclip_value;
	unsigned char vu0_backclip_force;
	unsigned char vu0_backclip_value;
	unsigned char normalize_normal;
	unsigned char update_z_first;
};

Model3Env model3_env;

void Model3EnvSetTEST(unsigned long test);
void Model3EnvResetTEST();
void Model3EnvSetVu0ALPHA(unsigned long alpha);
void Model3EnvSetALPHA(unsigned long alpha);
void Model3EnvResetALPHA();
void Model3EnvSetVu1FBA(unsigned long fba);
void Model3EnvSetVu0FBA(unsigned long fba);
void Model3EnvSetFBA(unsigned long fba);
void Model3EnvResetVu1FBA();
void Model3EnvResetVu0FBA();
void Model3EnvResetFBA();
void Model3EnvResetTFX();
void Model3EnvResetBackclip();
void Model3EnvSetNormalizeNormal(int flag);
void Model3EnvResetNormalizeNormal();
void Model3EnvSetUpdateZFirst(int flag);
void Model3EnvResetUpdateZFirst();
void Model3EnvReset();

// 
// Start address: 0x14d8e0
void Model3EnvSetTEST(unsigned long test)
{
	// Line 152, Address: 0x14d8e0, Func Offset: 0
	// Line 153, Address: 0x14d8e8, Func Offset: 0x8
	// Line 154, Address: 0x14d8ec, Func Offset: 0xc
	// Func End, Address: 0x14d8f4, Func Offset: 0x14
}

// 
// Start address: 0x14d900
void Model3EnvResetTEST()
{
	// Line 165, Address: 0x14d900, Func Offset: 0
	// Line 166, Address: 0x14d910, Func Offset: 0x10
	// Line 167, Address: 0x14d914, Func Offset: 0x14
	// Func End, Address: 0x14d91c, Func Offset: 0x1c
}

// 
// Start address: 0x14d920
void Model3EnvSetVu0ALPHA(unsigned long alpha)
{
	// Line 179, Address: 0x14d920, Func Offset: 0
	// Line 180, Address: 0x14d924, Func Offset: 0x4
	// Func End, Address: 0x14d92c, Func Offset: 0xc
}

// 
// Start address: 0x14d930
void Model3EnvSetALPHA(unsigned long alpha)
{
	// Line 183, Address: 0x14d930, Func Offset: 0
	// Line 185, Address: 0x14d938, Func Offset: 0x8
	// Line 186, Address: 0x14d93c, Func Offset: 0xc
	// Func End, Address: 0x14d944, Func Offset: 0x14
}

// 
// Start address: 0x14d950
void Model3EnvResetALPHA()
{
	// Line 197, Address: 0x14d950, Func Offset: 0
	// Line 198, Address: 0x14d95c, Func Offset: 0xc
	// Line 197, Address: 0x14d960, Func Offset: 0x10
	// Line 198, Address: 0x14d968, Func Offset: 0x18
	// Func End, Address: 0x14d970, Func Offset: 0x20
}

// 
// Start address: 0x14d970
void Model3EnvSetVu1FBA(unsigned long fba)
{
	// Line 207, Address: 0x14d970, Func Offset: 0
	// Line 208, Address: 0x14d974, Func Offset: 0x4
	// Func End, Address: 0x14d97c, Func Offset: 0xc
}

// 
// Start address: 0x14d980
void Model3EnvSetVu0FBA(unsigned long fba)
{
	// Line 211, Address: 0x14d980, Func Offset: 0
	// Line 212, Address: 0x14d984, Func Offset: 0x4
	// Func End, Address: 0x14d98c, Func Offset: 0xc
}

// 
// Start address: 0x14d990
void Model3EnvSetFBA(unsigned long fba)
{
	// Line 214, Address: 0x14d990, Func Offset: 0
	// Line 215, Address: 0x14d99c, Func Offset: 0xc
	// Line 216, Address: 0x14d9a4, Func Offset: 0x14
	// Line 217, Address: 0x14d9ac, Func Offset: 0x1c
	// Func End, Address: 0x14d9bc, Func Offset: 0x2c
}

// 
// Start address: 0x14d9c0
void Model3EnvResetVu1FBA()
{
	// Line 220, Address: 0x14d9c0, Func Offset: 0
	// Func End, Address: 0x14d9c8, Func Offset: 0x8
}

// 
// Start address: 0x14d9d0
void Model3EnvResetVu0FBA()
{
	// Line 224, Address: 0x14d9d0, Func Offset: 0
	// Func End, Address: 0x14d9d8, Func Offset: 0x8
}

// 
// Start address: 0x14d9e0
void Model3EnvResetFBA()
{
	// Line 227, Address: 0x14d9e0, Func Offset: 0
	// Line 228, Address: 0x14d9e8, Func Offset: 0x8
	// Line 229, Address: 0x14d9f0, Func Offset: 0x10
	// Line 230, Address: 0x14d9f8, Func Offset: 0x18
	// Func End, Address: 0x14da04, Func Offset: 0x24
}

// 
// Start address: 0x14da10
void Model3EnvResetTFX()
{
	// Line 260, Address: 0x14da10, Func Offset: 0
	// Line 261, Address: 0x14da20, Func Offset: 0x10
	// Line 262, Address: 0x14da24, Func Offset: 0x14
	// Func End, Address: 0x14da2c, Func Offset: 0x1c
}

// 
// Start address: 0x14da30
void Model3EnvResetBackclip()
{
	// Line 293, Address: 0x14da30, Func Offset: 0
	// Line 294, Address: 0x14da38, Func Offset: 0x8
	// Line 295, Address: 0x14da3c, Func Offset: 0xc
	// Func End, Address: 0x14da44, Func Offset: 0x14
}

// 
// Start address: 0x14da50
void Model3EnvSetNormalizeNormal(int flag)
{
	// Line 303, Address: 0x14da50, Func Offset: 0
	// Line 304, Address: 0x14da54, Func Offset: 0x4
	// Func End, Address: 0x14da5c, Func Offset: 0xc
}

// 
// Start address: 0x14da60
void Model3EnvResetNormalizeNormal()
{
	// Line 307, Address: 0x14da60, Func Offset: 0
	// Func End, Address: 0x14da68, Func Offset: 0x8
}

// 
// Start address: 0x14da70
void Model3EnvSetUpdateZFirst(int flag)
{
	// Line 316, Address: 0x14da70, Func Offset: 0
	// Line 317, Address: 0x14da74, Func Offset: 0x4
	// Func End, Address: 0x14da7c, Func Offset: 0xc
}

// 
// Start address: 0x14da80
void Model3EnvResetUpdateZFirst()
{
	// Line 320, Address: 0x14da80, Func Offset: 0
	// Func End, Address: 0x14da88, Func Offset: 0x8
}

// 
// Start address: 0x14da90
void Model3EnvReset()
{
	// Line 345, Address: 0x14da90, Func Offset: 0
	// Line 346, Address: 0x14da98, Func Offset: 0x8
	// Line 347, Address: 0x14daa0, Func Offset: 0x10
	// Line 348, Address: 0x14daa8, Func Offset: 0x18
	// Line 349, Address: 0x14dab0, Func Offset: 0x20
	// Line 350, Address: 0x14dab8, Func Offset: 0x28
	// Line 351, Address: 0x14dac0, Func Offset: 0x30
	// Line 352, Address: 0x14dac8, Func Offset: 0x38
	// Line 353, Address: 0x14dad0, Func Offset: 0x40
	// Func End, Address: 0x14dadc, Func Offset: 0x4c
}

