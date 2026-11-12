// Editor_1080000.cpp (part 1 of 2): 4 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    undefined4 sub_01083ab0(byte);
};

int sub_0053dfa0(...);
int sub_0107fc10(void);
// @baa 0x01083ab0
undefined4 C::sub_01083ab0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0107fc10();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_0107ea80(void);
// @baa 0x01083ad0
undefined4 UObject::sub_01083ad0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0107ea80();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_0107eae0(void);
// @baa 0x01083af0
undefined4 UObject::sub_01083af0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0107eae0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01083b10 { void sub_01077040(int); C_01083b10 *sub_01083b10(int); };

// @baa 0x01083b10
C_01083b10 *C_01083b10::sub_01083b10(int a) { sub_01077040(a); return this; }

