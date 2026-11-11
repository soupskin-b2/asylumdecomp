// UnMisc.cpp (part 2 of 2): 2 functions
// Placed here by: neighbours 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00642e60
USystem::USystem()
{
    *(DWORD*)((BYTE*)this + 0x84) = 0;
    *(DWORD*)((BYTE*)this + 0x88) = 0;
    *(DWORD*)((BYTE*)this + 0x8c) = 0;
    *(DWORD*)((BYTE*)this + 0xcc) = 0;
    *(DWORD*)((BYTE*)this + 0xd0) = 0;
    *(DWORD*)((BYTE*)this + 0xd4) = 0;
}

int sub_0053dfa0(...);
int sub_00639e10(void);
// @baa 0x00642fe0
undefined4 UObject::sub_00642fe0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00639e10();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
