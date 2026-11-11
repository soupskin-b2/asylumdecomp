// UnObjGC.cpp: 4 functions
// Placed here by: callers 2, file 1, neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Array.h"

struct T_005ed920 { BYTE b[4]; };

// @baa 0x005ed920
template T_005ed920& TArray<T_005ed920>::Last(INT);

struct C {
    undefined4 sub_005edfe0();
    int sub_005ed920(int);
};

int sub_006311e0(...);
extern undefined4 g_01e9ab00;
// @baa 0x005edfe0
undefined4 C::sub_005edfe0(void)
{
    int param_1 = (int)this;
  uint uVar1;
  uint *puVar2;
  puVar2 = (uint *)((C *)(this))->sub_005ed920(0);
  uVar1 = *puVar2;
  if ((uVar1 & 0xff00) == 0) {
    sub_006311e0("ReferenceInfo.Type != GCRT_None",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnObjGC.cpp"
                 ,0x68b,&g_01e9ab00);
  }
  puVar2 = (uint *)((C *)(this))->sub_005ed920(0);
  *puVar2 = (uVar1 + 1 ^ uVar1) & 0xff ^ uVar1;
  return *(undefined4 *)(param_1 + 4);
}

struct S16 {
    INT f00;
    INT f04;
    INT f08;
    INT f0c;
    S16* sub_005f1ce0();
};

// @baa 0x005f1ce0
S16* S16::sub_005f1ce0()
{
    f00 = 0;
    f04 = 0;
    f08 = 0;
    f0c = 0;
    return this;
}

// @baa 0x00715910
void sub_00715910(void) {  }
