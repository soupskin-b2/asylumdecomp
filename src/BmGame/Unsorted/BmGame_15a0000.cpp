// BmGame_15a0000.cpp: 7 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x015a42a0
IMPLEMENT_CLASS_AT(URAnimNotify_IdleOverlay, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNotify_Script.cpp", 19);

// @baa 0x015a43b0
bool URAnimNotify_IdleOverlay::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x015a4680
IMPLEMENT_CLASS_AT(URAnimNotify_SpawnParticleFX_PCOnly, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimNotify_SpawnParticleFX.cpp", 19);

// @baa 0x015a4790
bool URAnimNotify_SpawnParticleFX_PCOnly::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C {
    void sub_015a77b0(int);
};

int sub_0053df70(...);
// @baa 0x015a77b0
void C::sub_015a77b0(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 << 4,8);
      *param_1 = iVar1;
    }
  }
  return;
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

void sub_015a6ed0();
// @baa 0x015af7b0
void sub_015af7b0(void) { sub_015a6ed0(); }
