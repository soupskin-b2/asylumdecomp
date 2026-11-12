// RBmBehaviourClass.cpp: 13 functions
// Placed here by: callers 2, file 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x015e37c0
IMPLEMENT_CLASS_AT(URBMBehaviourOverlay, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmBehaviourClass.cpp", 22);

// @baa 0x015e6c40
// @baa 0x015fec00
IMPLEMENT_CLASS_AT(URBMBehaviour, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmBehaviourClass.cpp", 20);

// @baa 0x01601180

// @baa 0x015de750

// @baa 0x015de860
int URBMBehaviour::vf_000(void) { return 1; }

// @baa 0x015de870
bool URBMBehaviour::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x015dea10
undefined4 URBMBehaviour::vf_1a0(void)
{
    int param_1 = (int)this;

  if ((*(int *)(param_1 + 0xfc) != 0) &&
     ((*(uint *)(*(int *)(param_1 + 0xfc) + 0x1b4) & 0x100000) != 0)) {
    return 1;
  }
  return 0;
}

// @baa 0x015dea50
void URBMBehaviour::vf_154(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0xe4) = *(uint *)(param_1 + 0xe4) | 0x20;
  return;
}

// @baa 0x015dea60
void URBMBehaviour::vf_158(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0xe4) = *(uint *)(param_1 + 0xe4) & 0xffffffdf;
  return;
}

// @baa 0x015deba0
undefined4 URBMBehaviour::vf_1a4(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  if (((*(int *)(param_1 + 0x18) != 0) &&
      (iVar1 = *(int *)(*(int *)(param_1 + 0x18) + 0x28), iVar1 != 0)) &&
     (iVar1 != *(int *)(param_1 + 0x28))) {
    return 1;
  }
  return 0;
}

// @baa 0x015debe0
void URBMBehaviour::sub_015debe0(undefined4 param_2, float * param_3)
{
    int param_1 = (int)this;
  float fVar1;
  float fVar2;
  fVar1 = *param_3;
  fVar2 = *(float *)(param_1 + 0xf0) - fVar1;
  *(float *)(param_1 + 0xf0) = fVar2;
  if (fVar2 < fVar1 * 0.5) {
    *(undefined2 *)(*(int *)(param_1 + 0x18) + 0x34) = 0;
  }
  return;
}

// @baa 0x015dec20
void URBMBehaviour::vf_1ac(undefined4 param_2)
{
    int param_1 = (int)this;

  *(undefined2 *)(*(int *)(param_1 + 0x18) + 0x34) = 0xfa1;
  *(undefined4 *)(param_1 + 0xf4) = param_2;
  return;
}
