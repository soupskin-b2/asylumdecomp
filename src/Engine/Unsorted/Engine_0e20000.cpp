// Engine_0e20000.cpp: 31 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00e25220
int sub_00e25220(int a0, int a1) { return a1; }

// @baa 0x00e25230
int sub_00e25230(int a0, int a1) { return a1; }

// @baa 0x00e25240
int sub_00e25240(int a0, int a1) { return a1; }

extern char g_020ecb58[];
// @baa 0x00e25250
int sub_00e25250(void) { return (int)g_020ecb58; }

// @baa 0x00e25260
int sub_00e25260(int a0, int a1) { return a1; }

// @baa 0x00e25270
int sub_00e25270(int a0, int a1) { return a1; }

// @baa 0x00e25280
int sub_00e25280(int a0, int a1) { return a1; }

extern char g_01ebc268[];
// @baa 0x00e25290
int sub_00e25290(void) { return (int)g_01ebc268; }

// @baa 0x00e252a0
int sub_00e252a0(int a0, int a1) { return a1; }

int sub_005c7a20(void);
extern undefined * g_020ecb68;
// @baa 0x00e252b0
undefined4 * UObject::sub_00e252b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020ecb68);
  return param_1;
}

// @baa 0x00e252d0
IMPLEMENT_CLASS_AT(UGameExplosion, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\GameFramework\\Src\\GameWeapon.cpp", 11);

// @baa 0x00e25330
// @baa 0x00e25360
int sub_00e25360(int a0, int a1) { return a1; }

extern undefined * g_020ecc78;
// @baa 0x00e25370
undefined4 * UObject::sub_00e25370(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020ecc78);
  return param_1;
}

// @baa 0x00e25390
IMPLEMENT_CLASS_AT(UGameTypes, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\GameFramework\\Src\\GameFramework.cpp", 61);

// @baa 0x00e253f0
// @baa 0x00e25410
undefined4 sub_00e25410(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

// @baa 0x00e25420
int sub_00e25420(int a0, int a1) { return a1; }

// @baa 0x00e25430
IMPLEMENT_CLASS_AT(AGamePlayerController, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\GameFramework\\Src\\GameController.cpp", 9);

// @baa 0x00e25540
int AGamePlayerController::vf_000(void) { return 1; }

// @baa 0x00e25550
bool AGamePlayerController::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C { C* sub_00e25590(void); };

// @baa 0x00e25590
C* C::sub_00e25590(void) { return this; }

struct C_00e255a0 { C_00e255a0* sub_00e255a0(void); };

// @baa 0x00e255a0
C_00e255a0* C_00e255a0::sub_00e255a0(void) { return this; }

// @baa 0x00e255b0
int sub_00e255b0(int a0, int a1) { return a1; }

// @baa 0x00e25610
// @baa 0x00e25720
int UGameTypes::vf_000(void) { return 1; }

// @baa 0x00e25730
bool UGameTypes::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00e25770
IMPLEMENT_CLASS_AT(AGameHUD, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\GameFramework\\Src\\GameHUD.cpp", 9);

// @baa 0x00e28430
IMPLEMENT_CLASS_AT(UGamePlayerInput, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\GameFramework\\Src\\GamePlayerInput.cpp", 8);

// @baa 0x00e28490
// @baa 0x00e284c0
