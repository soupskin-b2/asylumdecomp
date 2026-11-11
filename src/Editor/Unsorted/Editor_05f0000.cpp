// Editor_05f0000.cpp: 9 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x005fa790
void UProperty::vf_164(int a0, int a1, int a2, int a3) {  }

// @baa 0x005fa7a0
UINT UProperty::vf_168() { return 1; }

// @baa 0x005fa7b0
int UProperty::vf_170(void) { return 0; }

// @baa 0x005fa7c0
void UProperty::vf_174(int a0, int a1, int a2, int a3) {  }

// @baa 0x005fa7d0
IMPLEMENT_CLASS_AT(UProperty, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnProp.cpp", 518);

struct C_view {
    int sub_0062dc50(int, int, int, int, int);
};

extern undefined * g_01ea6f00;
// @baa 0x005fa990
undefined4 * UStrProperty::sub_005fa990(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_0062dc50(0, param_3, param_4, param_5, param_6);
  *param_1 = (undefined4)(&g_01ea6f00);
  return param_1;
}

// @baa 0x005fa9c0
IMPLEMENT_CLASS_AT(UArrayProperty, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnProp.cpp", 3466);

// @baa 0x005faa20
int UArrayProperty::vf_160(void) { return 1; }

// @baa 0x005faa30
