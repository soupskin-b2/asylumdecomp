// Core_0600000.cpp (part 6 of 6): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_0040fcc0(void);
int sub_0053dfa0(...);
// @baa 0x0060d760
undefined4 UObject::sub_0060d760(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

/* GError->Logf: a variadic member, so cdecl with `this` pushed first. */
struct FOutputDeviceError_ {
    void sub_00630f20(const TCHAR* Fmt, ...);
};

extern FOutputDeviceError_* g_026667a8;
// @baa 0x006005b0
INT UProperty::ImportText(INT, INT, INT, INT, INT)
{
    g_026667a8->sub_00630f20(TEXT("Pure virtual not implemented (%s)"), TEXT("UProperty::ImportText"));
    return 0;
}
