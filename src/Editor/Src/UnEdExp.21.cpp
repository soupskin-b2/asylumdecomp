// UnEdExp.cpp: 6 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00eeccc0
int USoundSurroundExporterWAV::vf_11c(void) { return 8; }

// @baa 0x00ef09c0
int UTextureExporterT3D::vf_000(void) { return 1; }

struct C_00ef8c20 {
    undefined4 * sub_00ef8c20();
};

int sub_00ef3160(void);
// @baa 0x00ef8c20
undefined4 * C_00ef8c20::sub_00ef8c20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = 0xffffffff;
  param_1[1] = 0;
  sub_00ef3160();
  return param_1;
}

int sub_0053dfa0(...);
int sub_00f03060(void);
// @baa 0x00f09600
undefined4 UPrimitiveComponent::sub_00f09600(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00f03060();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C {
    undefined4 sub_00f09620(byte);
};

int sub_00f030d0(void);
// @baa 0x00f09620
undefined4 C::sub_00f09620(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00f030d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00f14890
IMPLEMENT_CLASS_AT(UTextureExporterT3D, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdExp.cpp", 2273);
