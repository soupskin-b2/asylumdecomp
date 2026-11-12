// UnBrushComponent.cpp: 4 functions
// Placed here by: neighbours 1, callers 1, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_0053dfa0(...);
int sub_00656490(void);
// @baa 0x0078ea90
undefined4 ULensFlare::sub_0078ea90(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00656490();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x007996f0
IMPLEMENT_CLASS_AT(UBrushComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnBrushComponent.cpp", 11);

// @baa 0x0079ad90

// @baa 0x00787480
