// Engine_0600000.cpp: 12 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

typedef uint size_t;

struct C_view {
    int sub_00417dc0(int);
};

void * sub_01a375f0(void *, void *, size_t);
// @baa 0x00604300
undefined4 * UObject::sub_00604300(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00417dc0(param_2[1]);
  if (param_1[1] != 0) {
    sub_01a375f0((void *)*param_1,(void *)*param_2,param_1[1] * 2);
  }
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  return param_1;
}

// @baa 0x00604340
undefined4 * UObject::sub_00604340(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00417dc0(param_2[1]);
  if (param_1[1] != 0) {
    sub_01a375f0((void *)*param_1,(void *)*param_2,param_1[1] * 2);
  }
  param_1[3] = param_2[3];
  return param_1;
}

struct C_view_006043d0 {
    int sub_006035a0(int);
};

// @baa 0x006043d0
undefined4 * UObject::sub_006043d0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_view_006043d0 *)(((char *)this + 4)))->sub_006035a0((int)(param_2 + 1));
  return param_1;
}

struct C_view_00604470 {
    int sub_006043f0(int, int);
};

// @baa 0x00604470
int UObject::sub_00604470(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00604470 *)(this))->sub_006043f0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x18;
  }
  return 0;
}

int sub_0040fcc0(void);
int sub_0053dfa0(...);
// @baa 0x006045d0
undefined4 UObject::sub_006045d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x006045f0
undefined4 * UObject::sub_006045f0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00417dc0(param_2[1]);
  if (param_1[1] != 0) {
    sub_01a375f0((void *)*param_1,(void *)*param_2,param_1[1] * 2);
  }
  param_1[3] = param_2[3];
  return param_1;
}

// @baa 0x00604630
undefined4 * UObject::sub_00604630(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00417dc0(param_2[1]);
  if (param_1[1] != 0) {
    sub_01a375f0((void *)*param_1,(void *)*param_2,param_1[1] * 2);
  }
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  return param_1;
}

struct C_view_00604670 {
    int sub_00547da0(int);
};

// @baa 0x00604670
int URFMODSound::sub_00604670(int param_2)
{
    int param_1 = (int)this;
  ((C_view_00604670 *)(this))->sub_00547da0(param_2);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  return param_1;
}

struct C {
    undefined4 * sub_006046a0(undefined4 *);
    int sub_00547da0(int);
};

// @baa 0x006046a0
undefined4 * C::sub_006046a0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  ((C *)(((char *)this + 8)))->sub_00547da0((int)(param_2 + 2));
  return param_1;
}

struct C_view_0060e900 {
    int sub_00555160(int);
};

// @baa 0x0060e900
undefined4 * UObject::sub_0060e900(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  ((C_view_0060e900 *)(((char *)this + 8)))->sub_00555160((int)(param_2 + 2));
  return param_1;
}

struct C_0060fa50 { void sub_0060e670(int); C_0060fa50 *sub_0060fa50(int); };

// @baa 0x0060fa50
C_0060fa50 *C_0060fa50::sub_0060fa50(int a) { sub_0060e670(a); return this; }

struct C_view_0060fa70 {
    int sub_00602550(int, int);
    int sub_0060c0e0(int);
};

// @baa 0x0060fa70
undefined4 UPackageMap::sub_0060fa70(int param_2, undefined4 * param_3)
{
    int * param_1 = (int *)this;
  ((C_view_0060fa70 *)(this))->sub_00602550((int)(&param_2), param_2);
  if (param_2 != -1) {
    *param_3 = *(undefined4 *)(param_2 * 0x10 + 4 + *param_1);
    ((C_view_0060fa70 *)(this))->sub_0060c0e0(param_2);
    return 1;
  }
  return 0;
}
