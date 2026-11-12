// UnrealEd_1370000.cpp (part 3 of 3): 6 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_0053dfa0(...);
int sub_013742d0(void);
// @baa 0x01375240
undefined4 UObject::sub_01375240(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_013742d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00790400(void);
// @baa 0x0137d230
undefined4 UObject::sub_0137d230(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00790400();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x0137d310
undefined4 UObject::sub_0137d310(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_013742d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_01374930();
// @baa 0x0137d330
void sub_0137d330(void) { sub_01374930(); }

struct Obj
{
    INT Dummy;

    void sub_005ac890();
};

// @baa 0x0137b800
void __stdcall sub_0137b800(Obj A, INT B, INT C)
{
    A.sub_005ac890();
}

INT sub_005d6930(void* Object);
struct C
{
    char pad_00[0xc];
    void* Object;

    INT sub_01374c70();
};

// @baa 0x01374c70
INT C::sub_01374c70()
{
    return sub_005d6930(Object);
}
