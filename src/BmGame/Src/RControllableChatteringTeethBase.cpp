// RControllableChatteringTeethBase.cpp (part 1 of 2): 8 functions
// Placed here by: class 6, file 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x01714d50
IMPLEMENT_CLASS_AT(ARControllableChatteringTeethBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RControllableChatteringTeethBase.cpp", 17);

// @baa 0x01714e60
int ARControllableChatteringTeethBase::vf_000(void) { return 1; }

// @baa 0x01714e70
bool ARControllableChatteringTeethBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

int sub_006311e0(...);
extern undefined4 g_023c29f0;
// @baa 0x01715120
void ARControllableChatteringTeethBase::sub_01715120(float param_2)
{
    int param_1 = (int)this;
  if (*(char *)(param_1 + 0x480) != '\x04') {
    sub_006311e0("TeethState == CHATTERINGTEETHSTATE_PostExplodeDelay",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RControllableChatteringTeethBase.cpp"
                 ,0xcb,&g_023c29f0);
  }
  param_2 = *(float *)(param_1 + 0x49c) - param_2;
  *(float *)(param_1 + 0x49c) = param_2;
  if (param_2 <= 0.0) {
    *(undefined1 *)(param_1 + 0x480) = 5;
  }
  return;
}

// @baa 0x017320a0
// @baa 0x01732100
// @baa 0x01733550
// @baa 0x017336d0
