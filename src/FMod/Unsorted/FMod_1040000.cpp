// FMod_1040000.cpp: 4 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C { void sub_01039420(int); C *sub_01042ba0(int); };

// @baa 0x01042ba0
C *C::sub_01042ba0(int a) { sub_01039420(a); return this; }

void sub_0103e5a0();
// @baa 0x01042bc0
void sub_01042bc0(void) { sub_0103e5a0(); }

int sub_01024270(void);
// @baa 0x01042c00
int UTexture2D::sub_01042c00(void)
{
    int param_1 = (int)this;

  sub_01024270();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view {
    int sub_01036ac0();
};

int sub_0053dfa0(...);
// @baa 0x01042c20
undefined4 UTexture2D::sub_01042c20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view *)(((char *)this + 0x10)))->sub_01036ac0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
