// Engine_0720000.cpp (part 2 of 7): 7 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_0053dfa0(...);
int sub_00656790(void);
// @baa 0x00724b40
undefined4 ULensFlare::sub_00724b40(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00656790();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00656490(void);
// @baa 0x00726d80
undefined4 ULensFlare::sub_00726d80(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00656490();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_007249d0(void);
// @baa 0x0072f070
undefined4 UTexture2DComposite::sub_0072f070(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x0072f190
undefined4 UTexture2DComposite::sub_0072f190(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x0072f210
undefined4 UTexture2DComposite::sub_0072f210(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern "C" int __cdecl sub_0053df40(int Size, int Alignment);
struct FGameplayObject
{
    FGameplayObject * sub_00729b50();
};

// @baa 0x0072f290
FGameplayObject * sub_0072f290()
{
    FGameplayObject * pObject = (FGameplayObject *)sub_0053df40(0x70, 8);
    if (pObject)
        return pObject->sub_00729b50();
    return 0;
}

struct C {
    undefined4 sub_0072f2b0(byte);
};

// @baa 0x0072f2b0
undefined4 C::sub_0072f2b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
