// Core_0710000.cpp: 6 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

extern undefined4 g_026760e4;
extern undefined4 g_026760e8;
extern "C" __declspec(dllimport) int GetCurrentThreadId(...);
// @baa 0x00715880
undefined4 sub_00715880(void)
{
  DWORD DVar1;
  if (g_026760e8 != 0) {
    DVar1 = GetCurrentThreadId();
    if (DVar1 != g_026760e4) {
      return 0;
    }
  }
  return 1;
}

extern int g_01eee308;
// A small two-dword value struct used by DecalComponent.cpp.
struct FDecalValue
{
    FDecalValue* sub_007158a0(int* Src);
    int Value;  // 0x0
    int Unk04;  // 0x4
};

// @baa 0x007158a0
FDecalValue* FDecalValue::sub_007158a0(int* Src)
{
    Value = (int)&g_01eee308;
    Unk04 = *Src;
    return this;
}

extern char g_01edef14[];
// @baa 0x007158d0
int sub_007158d0(void) { return (int)g_01edef14; }

extern char g_01ebb554[];
struct C { void sub_007158e0(void); };

// @baa 0x007158e0
void C::sub_007158e0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_007158f0 {
    undefined4 * sub_007158f0(byte);
};

int sub_0053dfa0(...);
// @baa 0x007158f0
undefined4 * C_007158f0::sub_007158f0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern undefined4 g_026b21cc;
// @baa 0x00715920
undefined4 sub_00715920(void)
{
  undefined4 uVar1;
  
  uVar1 = g_026b21cc;
  g_026b21cc = 0;
  return uVar1;
}
