// BmEditor_12b0000.cpp: 5 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C { void sub_012b9710(); void sub_012bd6e0(int); };

// @baa 0x012bd6e0
void C::sub_012bd6e0(int) { sub_012b9710(); }

int sub_005c7a20(void);
extern undefined * g_02225c40;
// @baa 0x012bd840
undefined4 * UObject::sub_012bd840(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02225c40);
  return param_1;
}

// @baa 0x012bd860
IMPLEMENT_CLASS_AT(UCascadeOptions, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\Cascade.cpp", 13);

// @baa 0x012bd910
struct C_view {
    int sub_012ba0d0(int);
};

// @baa 0x012bd940
void UCascadeOptions::sub_012bd940(void)
{
    int param_1 = (int)this;
  int iVar1;
  do {
    iVar1 = ((C_view *)(this))->sub_012ba0d0(param_1 + 0x10);
  } while (iVar1 != 0);
  return;
}
