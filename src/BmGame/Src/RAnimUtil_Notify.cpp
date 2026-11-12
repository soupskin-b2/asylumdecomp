// RAnimUtil_Notify.cpp (part 1 of 2): 101 functions
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

int sub_005c7a20(void);
extern undefined * g_02326208;
// @baa 0x015bcfd0
undefined4 * UObject::sub_015bcfd0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02326208);
  return param_1;
}

extern undefined * g_02326320;
// @baa 0x015bd120
undefined4 * UObject::sub_015bd120(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02326320);
  return param_1;
}

// @baa 0x015bd140
int sub_015bd140(int a0, int a1) { return a1; }

extern undefined * g_02326438;
// @baa 0x015bd150
undefined4 * UObject::sub_015bd150(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02326438);
  return param_1;
}

extern undefined * g_02326550;
// @baa 0x015bd200
undefined4 * UObject::sub_015bd200(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02326550);
  return param_1;
}

extern undefined * g_02326668;
// @baa 0x015bd2b0
undefined4 * UObject::sub_015bd2b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02326668);
  return param_1;
}

extern undefined * g_02326780;
// @baa 0x015bd360
undefined4 * UObject::sub_015bd360(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02326780);
  return param_1;
}

extern undefined * g_02326898;
// @baa 0x015bd410
undefined4 * UObject::sub_015bd410(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02326898);
  return param_1;
}

extern undefined * g_023269b0;
// @baa 0x015bd4c0
undefined4 * UObject::sub_015bd4c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_023269b0);
  return param_1;
}

extern undefined * g_02326ac8;
// @baa 0x015bd580
undefined4 * UObject::sub_015bd580(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02326ac8);
  return param_1;
}

extern undefined * g_02326be0;
// @baa 0x015bd650
undefined4 * UObject::sub_015bd650(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02326be0);
  return param_1;
}

extern undefined * g_02326cf8;
// @baa 0x015bd710
undefined4 * UObject::sub_015bd710(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02326cf8);
  return param_1;
}

extern undefined * g_02326e10;
// @baa 0x015bd7d0
undefined4 * UObject::sub_015bd7d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02326e10);
  return param_1;
}

extern undefined * g_02326f28;
// @baa 0x015bd890
undefined4 * UObject::sub_015bd890(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02326f28);
  return param_1;
}

extern undefined * g_02327040;
// @baa 0x015bd950
undefined4 * UObject::sub_015bd950(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02327040);
  return param_1;
}

int sub_01596960(void);
int sub_0159caa0(...);
extern undefined4 g_026e1410;
// @baa 0x015bda00
int sub_015bda00(void)
{
  if (g_026e1410 == 0) {
    g_026e1410 = sub_0159caa0(L"BmGame");
    sub_01596960();
  }
  return g_026e1410;
}

int sub_01596ac0(void);
int sub_0159cb60(...);
extern undefined4 g_026e1414;
// @baa 0x015bda30
int sub_015bda30(void)
{
  if (g_026e1414 == 0) {
    g_026e1414 = sub_0159cb60(L"BmGame");
    sub_01596ac0();
  }
  return g_026e1414;
}

int sub_01596c20(void);
int sub_0159cc20(...);
extern undefined4 g_026e1418;
// @baa 0x015bda60
int sub_015bda60(void)
{
  if (g_026e1418 == 0) {
    g_026e1418 = sub_0159cc20(L"BmGame");
    sub_01596c20();
  }
  return g_026e1418;
}

// @baa 0x015bda90
int sub_015bda90(int a0, int a1) { return a1; }

extern undefined * g_02327158;
// @baa 0x015bdaa0
undefined4 * UObject::sub_015bdaa0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02327158);
  return param_1;
}

// @baa 0x015bdb60
int sub_015bdb60(int a0, int a1) { return a1; }

extern undefined * g_02327270;
// @baa 0x015bdb70
undefined4 * UObject::sub_015bdb70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02327270);
  return param_1;
}

// @baa 0x015c0030
int URAnimNotify_BeginRagdoll::vf_000(void) { return 1; }

// @baa 0x015c0040
bool URAnimNotify_BeginRagdoll::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x015c0080

// @baa 0x015c0190
int URAnimNotify_CanCancelBeforeHere::vf_000(void) { return 1; }

// @baa 0x015c01a0
bool URAnimNotify_CanCancelBeforeHere::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x015c01e0

// @baa 0x015c02f0
int URAnimNotify_CanCancelAfterHere::vf_000(void) { return 1; }

// @baa 0x015c0300
bool URAnimNotify_CanCancelAfterHere::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x015c0340

// @baa 0x015c0450
int URAnimNotify_CanCorrectAfterHere::vf_000(void) { return 1; }

// @baa 0x015c0460
bool URAnimNotify_CanCorrectAfterHere::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x015c04a0
int URAnimNotify_Clip::vf_000(void) { return 1; }

// @baa 0x015c04b0
int URAnimNotify_ClipRootMotion::vf_000(void) { return 1; }

// @baa 0x015c04c0
int URAnimNotify_CollisionOptions::vf_000(void) { return 1; }

// @baa 0x015c04d0

// @baa 0x015c05e0
int URAnimNotify_EndFixIK::vf_000(void) { return 1; }

// @baa 0x015c05f0
bool URAnimNotify_EndFixIK::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x015c0630

// @baa 0x015c0740
int URAnimNotify_EndRagdoll::vf_000(void) { return 1; }

// @baa 0x015c0750
bool URAnimNotify_EndRagdoll::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x015c0790
int URAnimNotify_FloorHeight::vf_000(void) { return 1; }

// @baa 0x015c07a0
int URAnimNotify_ForwardYaw::vf_000(void) { return 1; }

// @baa 0x015c07b0

// @baa 0x015c08c0
int URAnimNotify_MeetingPoint::vf_000(void) { return 1; }

// @baa 0x015c08d0
bool URAnimNotify_MeetingPoint::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x015c0910

// @baa 0x015c0a20
int URAnimNotify_SetFaceFXRegister::vf_000(void) { return 1; }

// @baa 0x015c0a30
bool URAnimNotify_SetFaceFXRegister::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x015c0a70

// @baa 0x015c0b80
int URAnimNotify_WeaponSwitch::vf_000(void) { return 1; }

// @baa 0x015c0b90
bool URAnimNotify_WeaponSwitch::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x015cb6b0

// @baa 0x015cb7c0
bool URAnimNotify_Clip::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x015cb800

// @baa 0x015cb910
bool URAnimNotify_ClipRootMotion::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x015cb950

// @baa 0x015cba60
bool URAnimNotify_CollisionOptions::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x015cbaa0

// @baa 0x015cbbb0
bool URAnimNotify_FloorHeight::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x015cbbf0

// @baa 0x015cbd00
bool URAnimNotify_ForwardYaw::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_015982d0
{
    double sub_015982d0(FLOAT F);
};

// @baa 0x015c0bd0
double sub_015c0bd0(FLOAT* P, C_015982d0* X)
{
    return X->sub_015982d0(*P);
}
