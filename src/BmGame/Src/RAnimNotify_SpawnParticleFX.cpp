// RAnimNotify_SpawnParticleFX.cpp: 10 functions
// Placed here by: callers 2, file 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x0159bbf0
IMPLEMENT_CLASS_AT(URAnimNotify_SpawnParticleFX, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNotify_SpawnParticleFX.cpp", 18);

// @baa 0x0159bc10
IMPLEMENT_CLASS_AT(URAnimNotify_SpawnParticleFX_PCOnly, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNotify_SpawnParticleFX.cpp", 19);

// @baa 0x0159d7e0
// @baa 0x0159d8a0

// @baa 0x01592340
int sub_01592340(int a0, int a1) { return a1; }

int sub_005c7a20(void);
extern undefined * g_0231b920;
// @baa 0x015923d0
undefined4 * UObject::sub_015923d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0231b920);
  return param_1;
}

// @baa 0x015923f0
int sub_015923f0(int a0, int a1) { return a1; }

extern undefined * g_0231ba38;
// @baa 0x01592400
undefined4 * UObject::sub_01592400(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0231ba38);
  return param_1;
}

// @baa 0x015a4680

// @baa 0x015a4790
bool URAnimNotify_SpawnParticleFX_PCOnly::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}
