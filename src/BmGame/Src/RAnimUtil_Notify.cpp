// RAnimUtil_Notify.cpp (part 1 of 2): 37 functions
// Placed here by: callers 19, file 18.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x015c0bf0
int * sub_015c0bf0(int * param_1, int param_2, int param_3)
{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *param_1) {
    piVar2 = param_1 + 1;
    do {
      if ((*piVar2 == param_2) && (piVar2[1] == param_3)) {
        return param_1 + iVar1 * 5 + 1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 5;
    } while (iVar1 < *param_1);
  }
  return (int *)0x0;
}

// @baa 0x015c3dd0
IMPLEMENT_CLASS_AT(URAnimNotify_AddForce, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_Notify.cpp", 16);

// @baa 0x015c3df0
IMPLEMENT_CLASS_AT(URAnimNotify_BeginBoneRescale, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_Notify.cpp", 17);

// @baa 0x015c3e10
IMPLEMENT_CLASS_AT(URAnimNotify_BeginEnd, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_Notify.cpp", 18);

// @baa 0x015c3e30
IMPLEMENT_CLASS_AT(URAnimNotify_Clip, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_Notify.cpp", 24);

// @baa 0x015c3e50
IMPLEMENT_CLASS_AT(URAnimNotify_ClipRootMotion, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_Notify.cpp", 25);

// @baa 0x015c3e70
IMPLEMENT_CLASS_AT(URAnimNotify_CollisionOptions, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_Notify.cpp", 26);

// @baa 0x015c3e90
IMPLEMENT_CLASS_AT(URAnimNotify_FloorHeight, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_Notify.cpp", 29);

// @baa 0x015c3eb0
IMPLEMENT_CLASS_AT(URAnimNotify_ForwardYaw, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_Notify.cpp", 30);

// @baa 0x015c3ed0
IMPLEMENT_CLASS_AT(URAnimNotify_BeginFixIK, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_Notify.cpp", 19);

// @baa 0x015c3ef0
IMPLEMENT_CLASS_AT(URAnimNotify_BeginRagdoll, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_Notify.cpp", 20);

// @baa 0x015c3f10
IMPLEMENT_CLASS_AT(URAnimNotify_CanCancelAfterHere, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_Notify.cpp", 22);

// @baa 0x015c3f30
IMPLEMENT_CLASS_AT(URAnimNotify_CanCancelBeforeHere, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_Notify.cpp", 21);

// @baa 0x015c3f50
IMPLEMENT_CLASS_AT(URAnimNotify_CanCorrectAfterHere, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_Notify.cpp", 23);

// @baa 0x015c3f70
IMPLEMENT_CLASS_AT(URAnimNotify_EndFixIK, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_Notify.cpp", 27);

// @baa 0x015c3f90
IMPLEMENT_CLASS_AT(URAnimNotify_EndRagdoll, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_Notify.cpp", 28);

// @baa 0x015c3fb0
IMPLEMENT_CLASS_AT(URAnimNotify_MeetingPoint, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_Notify.cpp", 31);

// @baa 0x015c3fd0
IMPLEMENT_CLASS_AT(URAnimNotify_WeaponSwitch, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_Notify.cpp", 33);

// @baa 0x015c51e0
// @baa 0x015c52a0
// @baa 0x015c5360
// @baa 0x015c5420
// @baa 0x015c54e0
// @baa 0x015c55a0
// @baa 0x015c5660
// @baa 0x015c5720
// @baa 0x015c57e0
// @baa 0x015c58a0
// @baa 0x015c5960
// @baa 0x015c5a20
// @baa 0x015c5ae0
// @baa 0x015c5ba0
// @baa 0x015c5c60
// @baa 0x015c5d20
// @baa 0x015c5de0
// @baa 0x015d6a10
IMPLEMENT_CLASS_AT(URAnimNotify_SetFaceFXRegister, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_Notify.cpp", 32);

// @baa 0x015d6a30
