// RAnimNotify_Script.cpp: 43 functions
// Placed here by: callers 11, file 11.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x0159bb50
IMPLEMENT_CLASS_AT(URAnimNotify_Script, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNotify_Script.cpp", 15);

// @baa 0x0159bb70
IMPLEMENT_CLASS_AT(URAnimNotify_IdleOverlay, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNotify_Script.cpp", 19);

// @baa 0x0159bb90
IMPLEMENT_CLASS_AT(URAnimNotify_Emote, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNotify_Script.cpp", 25);

// @baa 0x0159bbb0
IMPLEMENT_CLASS_AT(URAnimNotify_PlayGadgetAnim, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNotify_Script.cpp", 22);

// @baa 0x0159bbd0
IMPLEMENT_CLASS_AT(URAnimNotify_Rumble, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNotify_Script.cpp", 20);

// @baa 0x0159bc30
IMPLEMENT_CLASS_AT(URAnimNotify_StrikeContact, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNotify_Script.cpp", 16);

// @baa 0x0159bdb0
IMPLEMENT_CLASS_AT(URAnimNotify_BeginFixGroup, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNotify_Script.cpp", 23);

// @baa 0x0159bdd0
IMPLEMENT_CLASS_AT(URAnimNotify_EndFixGroup, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNotify_Script.cpp", 24);

// @baa 0x0159c010
IMPLEMENT_CLASS_AT(URAnimNotify_CounterHit, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNotify_Script.cpp", 17);

// @baa 0x0159c030
IMPLEMENT_CLASS_AT(URAnimNotify_Takedown, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNotify_Script.cpp", 18);

// @baa 0x0159c090
IMPLEMENT_CLASS_AT(URAnimNotify_Camera, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNotify_Script.cpp", 21);

// @baa 0x0159cd80
// @baa 0x0159ce40
// @baa 0x0159cf00
// @baa 0x0159cfc0
// @baa 0x0159d080
// @baa 0x0159d140
// @baa 0x0159d200
// @baa 0x0159d2c0
// @baa 0x0159d380
// @baa 0x0159d440
// @baa 0x0159d500

int sub_005c7a20(void);
extern undefined * g_0231b5d8;
// @baa 0x01592060
undefined4 * UObject::sub_01592060(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0231b5d8);
  return param_1;
}

struct C_01592100 {
    INT sub_01592100(INT arg1);
};

// @baa 0x01592100
INT C_01592100::sub_01592100(INT arg1)
{
    return (INT)this;
}

// @baa 0x01592150
int sub_01592150(int a0, int a1) { return a1; }

extern undefined * g_0231b6f0;
// @baa 0x01592160
undefined4 * UObject::sub_01592160(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0231b6f0);
  return param_1;
}

extern undefined * g_0231b808;
// @baa 0x01592210
undefined4 * UObject::sub_01592210(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0231b808);
  return param_1;
}

extern undefined * g_0231bee0;
// @baa 0x01593850
undefined4 * UObject::sub_01593850(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0231bee0);
  return param_1;
}

// @baa 0x01596e30

// @baa 0x01596f40
int URAnimNotify_Script::vf_000(void) { return 1; }

// @baa 0x01596f50
bool URAnimNotify_Script::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x015970f0

// @baa 0x01597200
int URAnimNotify_CounterHit::vf_000(void) { return 1; }

// @baa 0x01597210
bool URAnimNotify_CounterHit::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01597250

// @baa 0x01597360
int URAnimNotify_Takedown::vf_000(void) { return 1; }

// @baa 0x01597370
bool URAnimNotify_Takedown::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01597520

// @baa 0x01597630
int URAnimNotify_Camera::vf_000(void) { return 1; }

// @baa 0x01597640
bool URAnimNotify_Camera::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x015a42a0

// @baa 0x015a43b0
bool URAnimNotify_IdleOverlay::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_view {
    int sub_015aa840(int);
};

// @baa 0x015aa9c0
void URAnimNotify_IdleOverlay::vf_10c(undefined4 param_2)
{
    int param_1 = (int)this;
  *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | 1;
  ((C_view *)(this))->sub_015aa840(param_2);
  *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xfffffffe;
  return;
}
