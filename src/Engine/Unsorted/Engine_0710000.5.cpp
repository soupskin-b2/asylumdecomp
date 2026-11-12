// Engine_0710000.cpp (part 5 of 7): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_0053dfa0(...);
int sub_00581450(void);
// @baa 0x0071d940
undefined4 UTexture2D::sub_0071d940(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00581450();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// 0x00718dd0 : sets this (X, Y, Z) from another 2-value struct, Z fixed to -1
struct FVector2_ {
    INT X;
    INT Y;
};

struct F00718DD0 {
    INT X;
    INT Y;
    INT Z;

    F00718DD0* sub_00718dd0(FVector2_ const* Src); // 0x00718dd0
};

// @baa 0x00718dd0
F00718DD0* F00718DD0::sub_00718dd0(FVector2_ const* Src)
{
    X = Src->X;
    Y = Src->Y;
    Z = -1;
    return this;
}
