// BmGame_1560000.cpp (part 4 of 4): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_0040fcc0(void);
int sub_0053dfa0(...);
// @baa 0x0156f4e0
undefined4 UObject::sub_0156f4e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01563930
{
    INT V;
    INT A, B, C;
    C_01563930* sub_01563930(INT P);
};

// @baa 0x01563930
C_01563930* C_01563930::sub_01563930(INT P)
{
    A = 0;
    B = 0;
    C = 0;
    return this;
}

struct C_01563940
{
    INT V;
    INT A, B, C;
    C_01563940* sub_01563940(INT P);
};

// @baa 0x01563940
C_01563940* C_01563940::sub_01563940(INT P)
{
    A = 0;
    B = 0;
    C = 0;
    return this;
}
