// FMod_0790000.cpp: 12 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C {
    void sub_00791cd0();
};

extern undefined * g_01f16174;
// @baa 0x00791cd0
void C::sub_00791cd0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(&g_01f16174);
  return;
}

// @baa 0x00791ce0
void __stdcall sub_00791ce0(int a0, int a1) {  }

// @baa 0x00791cf0
void __stdcall sub_00791cf0(int a0) {  }

// @baa 0x00791d00
int __stdcall sub_00791d00(int a0) { return 0; }

// @baa 0x00791d10
int __stdcall sub_00791d10(int a0) { return 0; }

// @baa 0x00791d20
void __stdcall sub_00791d20(int a0, int a1) {  }

// @baa 0x00791d30
int __stdcall sub_00791d30(int a0) { return 0; }

// @baa 0x00791d40
void __stdcall sub_00791d40(int a0, int a1) {  }

// @baa 0x00791d50
void __stdcall sub_00791d50(int a0, int a1) {  }

// @baa 0x00791d60
void __stdcall sub_00791d60(int a0, int a1) {  }

struct C_00791d70 {
    undefined4 * sub_00791d70(byte);
};

int sub_0053dfa0(...);
// @baa 0x00791d70
undefined4 * C_00791d70::sub_00791d70(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01f16174);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00791dc0(void);
// @baa 0x00791e20
undefined4 UTexture2DComposite::sub_00791e20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00791dc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
