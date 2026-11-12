// GameWeapon.cpp: 13 functions
// Placed here by: callers 3, file 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00e26350
IMPLEMENT_CLASS_AT(UGameExplosion, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\GameFramework\\Src\\GameWeapon.cpp", 11);

// @baa 0x00e268d0
// @baa 0x00e27b20
IMPLEMENT_CLASS_AT(AGameExplosionActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\GameFramework\\Src\\GameWeapon.cpp", 12);

// @baa 0x00e27b70
IMPLEMENT_CLASS_AT(AGameWeapon, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\GameFramework\\Src\\GameWeapon.cpp", 9);

// @baa 0x00e27e10
// @baa 0x00e27ed0

// @baa 0x00e26040

// @baa 0x00e26150
int UGameExplosion::vf_000(void) { return 1; }

// @baa 0x00e26160
bool UGameExplosion::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C { int sub_00e26310(void); };

// @baa 0x00e26310
int C::sub_00e26310(void) { return *(int*)((char*)this + 4); }

struct C_00e26320 { C_00e26320* sub_00e26320(int a0); };

// @baa 0x00e26320
C_00e26320* C_00e26320::sub_00e26320(int a0) { return this; }

struct C_00e26330 { int sub_00e26330(void); };

// @baa 0x00e26330
int C_00e26330::sub_00e26330(void) { return *(int*)((char*)this + 0); }

struct C_00e26340 { int sub_00e26340(void); };

// @baa 0x00e26340
int C_00e26340::sub_00e26340(void) { return *(int*)((char*)this + 0); }
