// UnClass.cpp (part 2 of 2): 4 functions
// Placed here by: neighbours 3, class 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00575580
UScriptStruct::UScriptStruct()
{
    *(DWORD*)((BYTE*)this + 0x84) = 0;
    *(DWORD*)((BYTE*)this + 0x88) = 0;
    *(DWORD*)((BYTE*)this + 0x8c) = 0;
    *(DWORD*)((BYTE*)this + 0x94) = 0;
    *(DWORD*)((BYTE*)this + 0x98) = 0;
    *(DWORD*)((BYTE*)this + 0x9c) = 0;
}

struct C {
    undefined4 sub_00588e90(byte);
};

int sub_0053dfa0(...);
int sub_00588400(void);
// @baa 0x00588e90
undefined4 C::sub_00588e90(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00588400();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00588eb0 {
    undefined4 sub_00588eb0(byte);
};

// @baa 0x00588eb0
undefined4 C_00588eb0::sub_00588eb0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00588400();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00588ed0 {
    undefined4 sub_00588ed0(byte);
};

// @baa 0x00588ed0
undefined4 C_00588ed0::sub_00588ed0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00588400();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
