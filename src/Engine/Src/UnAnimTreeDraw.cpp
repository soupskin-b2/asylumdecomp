// UnAnimTreeDraw.cpp: 8 functions
// Placed here by: class 7, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00c4b340
int UAnimNodeBlend::vf_000(void) { return 1; }

// @baa 0x00c648b0
IMPLEMENT_CLASS_AT(UAnimNodeBlend, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp", 13);

// @baa 0x00c64910
UINT UAnimNodeBlend::vf_170() { return 1; }

// @baa 0x00c64920
// @baa 0x00c6af90
// @baa 0x00c77aa0
// @baa 0x00c77bb0
bool UAnimNodeBlend::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

int sub_006311e0(...);
extern undefined4 g_0205ccbc;
// @baa 0x00c92af0
DOUBLE UAnimNodeBlend::vf_178(INT param_2, INT param_3) {
    int param_1 = (int)this;

  if ((param_2 != 0) || (param_3 != 0)) {
    sub_006311e0("0 == SliderIndex && 0 == ValueIndex",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTreeDraw.cpp"
                 ,0x16c,&g_0205ccbc);
  }
  return (float10)*(float *)(param_1 + 200);
}
