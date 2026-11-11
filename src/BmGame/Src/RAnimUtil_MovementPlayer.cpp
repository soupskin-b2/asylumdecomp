// RAnimUtil_MovementPlayer.cpp: 4 functions
// Placed here by: callers 2, file 1, neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    void sub_01599bb0(float *);
};

// @baa 0x01599bb0
void C::sub_01599bb0(float * param_2)
{
    int param_1 = (int)this;
  *(float *)(param_1 + 0xdcc) = *(float *)(param_1 + 0xdcc) + *param_2;
  *(float *)(param_1 + 0xdd0) = param_2[1] + *(float *)(param_1 + 0xdd0);
  *(float *)(param_1 + 0xdd4) = param_2[2] + *(float *)(param_1 + 0xdd4);
  *(float *)(param_1 + 0xdd8) = param_2[3] + *(float *)(param_1 + 0xdd8);
  return;
}

// @baa 0x015c4010
IMPLEMENT_CLASS_AT(URAnimUtil_MovementPlayer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil_MovementPlayer.cpp", 14);

// @baa 0x015c44b0
// @baa 0x015c46a0
void __fastcall sub_015c46a0(int param_1, undefined4 * param_2)
{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x60);
  if (uVar2 < 8) {
    *(undefined4 *)(param_1 + uVar2 * 0xc) = *param_2;
    iVar1 = param_1 + uVar2 * 0xc;
    *(undefined4 *)(iVar1 + 4) = param_2[1];
    *(undefined4 *)(iVar1 + 8) = param_2[2];
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  }
  return;
}
