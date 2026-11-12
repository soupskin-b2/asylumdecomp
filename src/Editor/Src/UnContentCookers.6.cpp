// UnContentCookers.cpp (part 6 of 6): 5 functions
// Placed here by: neighbours 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_0040fcc0(void);
int sub_0053dfa0(...);
// @baa 0x01097730
undefined4 UTexture2D::sub_01097730(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x01097750
undefined4 UTexture2D::sub_01097750(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x01097770
undefined4 UTexture2D::sub_01097770(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct sub_0108c7a0_Type {
    INT X;
    INT Y;
    INT Z;
};

// @baa 0x0108c7a0
struct sub_0108c7a0_Slot : public sub_0108c7a0_Type {
    sub_0108c7a0_Slot* sub_0108c7a0(const sub_0108c7a0_Type* Source);
};

// @baa 0x0108c7a0
sub_0108c7a0_Slot* sub_0108c7a0_Slot::sub_0108c7a0(const sub_0108c7a0_Type* Source)
{
    X = Source->X;
    Y = Source->Y;
    Z = Source->Z;
    return this;
}

extern "C" void* sub_005f9de0(INT* Local);
struct T {
    INT Pad1[0x16];
    INT Field58;

    void sub_0108c950();
};

// @baa 0x0108c950
void T::sub_0108c950()
{
    INT Value;
    Field58 = *(INT*)sub_005f9de0(&Value);
}
