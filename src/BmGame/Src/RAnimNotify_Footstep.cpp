// RAnimNotify_Footstep.cpp: 13 functions
// Placed here by: callers 4, file 4.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x0159bdf0
IMPLEMENT_CLASS_AT(URAnimNotify_FootPassing, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNotify_Footstep.cpp", 15);

// @baa 0x0159be10
IMPLEMENT_CLASS_AT(URAnimNotify_FootSyncIn, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNotify_Footstep.cpp", 16);

// @baa 0x0159be30
IMPLEMENT_CLASS_AT(URAnimNotify_FootSyncOut, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNotify_Footstep.cpp", 17);

// @baa 0x0159c070
IMPLEMENT_CLASS_AT(URAnimNotify_Footstep, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNotify_Footstep.cpp", 14);

// @baa 0x0159c9e0
// @baa 0x0159caa0
// @baa 0x0159cb60
// @baa 0x0159cc20

int sub_005c7a20(void);
extern undefined * g_0231c110;
// @baa 0x015939c0
undefined4 * UObject::sub_015939c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0231c110);
  return param_1;
}

extern undefined * g_0231c228;
// @baa 0x01593a80
undefined4 * UObject::sub_01593a80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0231c228);
  return param_1;
}

// @baa 0x01596800

// @baa 0x01596910
int URAnimNotify_Footstep::vf_000(void) { return 1; }

// @baa 0x01596920
bool URAnimNotify_Footstep::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}
