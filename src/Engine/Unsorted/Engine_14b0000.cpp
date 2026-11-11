// Engine_14b0000.cpp (part 1 of 4): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

void sub_013e9bc0();
// @baa 0x014b1f30
void sub_014b1f30(void) { sub_013e9bc0(); }

struct C_view {
    int sub_011a1050(int, int);
};

// @baa 0x014b2a50
int UTexture2D::sub_014b2a50(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view *)(this))->sub_011a1050((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x18, iVar1 != 0)) {
    return iVar1 + 0xc;
  }
  return 0;
}

// @baa 0x014b2ab0
int UTexture2D::sub_014b2ab0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 8 + param_1[5] * 0x14;
}
