// Editor_0600000.cpp: 8 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C { void sub_00547da0(int); C *sub_006012a0(int); };

// @baa 0x006012a0
C *C::sub_006012a0(int a) { sub_00547da0(a); return this; }

typedef uint size_t;

struct C_view {
    int sub_00417dc0(int);
};

void * sub_01a375f0(void *, void *, size_t);
// @baa 0x006012c0
undefined4 * UObject::sub_006012c0(undefined4 * param_2, undefined4 param_3, undefined4 param_4)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00417dc0(param_2[1]);
  if (param_1[1] != 0) {
    sub_01a375f0((void *)*param_1,(void *)*param_2,param_1[1] * 2);
  }
  param_1[3] = param_3;
  param_1[4] = param_4;
  return param_1;
}

// @baa 0x006013e0
undefined4 * UObject::sub_006013e0(undefined4 * param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00417dc0(param_2[1]);
  if (param_1[1] != 0) {
    sub_01a375f0((void *)*param_1,(void *)*param_2,param_1[1] * 2);
    param_1[3] = param_3;
    return param_1;
  }
  param_1[3] = param_3;
  return param_1;
}

struct C_view_006019d0 {
    int sub_00601720(int, int);
};

extern undefined4 g_01ea7524;
// @baa 0x006019d0
undefined4 * UPackageMap::sub_006019d0(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view_006019d0 *)(this))->sub_00601720(param_2, param_3);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *param_1 = (undefined4)(&g_01ea7524);
  return param_1;
}

struct M_00601a90 { void sub_0040fcc0(); };

struct C_00601a90 { char pad[8]; M_00601a90 m; void sub_00601a90(); };

// @baa 0x00601a90
void C_00601a90::sub_00601a90() { m.sub_0040fcc0(); }

struct C_view_0060bd80 {
    int sub_00603010(int, int);
};

// @baa 0x0060bd80
int UFracturedStaticMeshComponent::sub_0060bd80(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view_0060bd80 *)(this))->sub_00603010((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x18, iVar1 != 0)) {
    return iVar1 + 0xc;
  }
  return 0;
}

// @baa 0x0060bdc0
int UFracturedStaticMeshComponent::sub_0060bdc0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

// @baa 0x0060bde0
int UFracturedStaticMeshComponent::sub_0060bde0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 0x10 + param_1[5] * 0x1c;
}
