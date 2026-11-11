// UnFPoly.cpp: 2 functions
// Placed here by: callers 1, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    void sub_00ced2b0(undefined4, undefined4, float);
};

int sub_00630f20(...);
// @baa 0x00ced2b0
void C::sub_00ced2b0(undefined4 param_2, undefined4 param_3, float param_4)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,param_3,(double)param_4);
  return;
}

// @baa 0x00d18d80
IMPLEMENT_CLASS_AT(UPolys, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnFPoly.cpp", 956);
