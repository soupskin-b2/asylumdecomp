// Editor_0c20000.cpp: 22 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x00c25110
int ULensFlare::sub_00c25110(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x48;
}

// @baa 0x00c25120
int ULensFlare::sub_00c25120(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

// @baa 0x00c25130
int ULensFlare::sub_00c25130(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00c25140
int ULensFlare::sub_00c25140(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

// @baa 0x00c25150
int ULensFlare::sub_00c25150(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

// @baa 0x00c25160
int ULensFlare::sub_00c25160(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C {
    int sub_00c25230(int);
};

// @baa 0x00c25230
int C::sub_00c25230(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_00c25250 { int sub_00c25250(void); };

// @baa 0x00c25250
int C_00c25250::sub_00c25250(void) { return *(int*)((char*)this + 20); }

struct C_00c25260 {
    int sub_00c25260();
};

// @baa 0x00c25260
int C_00c25260::sub_00c25260(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct C_00c25280 { int sub_00c25280(void); };

// @baa 0x00c25280
int C_00c25280::sub_00c25280(void) { return *(int*)((char*)this + 20); }

struct C_00c25290 { int sub_00c25290(void); };

// @baa 0x00c25290
int C_00c25290::sub_00c25290(void) { return *(int*)((char*)this + 20); }

struct C_00c252a0 { int sub_00c252a0(void); };

// @baa 0x00c252a0
int C_00c252a0::sub_00c252a0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00c25420 {
    void sub_00c25420(undefined4, undefined4, undefined4);
};

int sub_00630f20(...);
// @baa 0x00c25420
void C_00c25420::sub_00c25420(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,param_3,param_4);
  return;
}

struct C_00c25440 {
    void sub_00c25440(undefined4, undefined4, undefined4);
};

// @baa 0x00c25440
void C_00c25440::sub_00c25440(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,param_3,param_4);
  return;
}

struct C_00c25550 {
    void sub_00c25550(undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x00c25550
void C_00c25550::sub_00c25550(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
    undefined4 param_1 = (undefined4)this;
  sub_00630f20(param_1,param_2,param_3,param_4,param_5);
  return;
}

struct C_00c25570 {
    void sub_00c25570(undefined4, undefined4, float);
};

// @baa 0x00c25570
void C_00c25570::sub_00c25570(undefined4 param_2, undefined4 param_3, float param_4)
{
    undefined4 param_1 = (undefined4)this;
  sub_00630f20(param_1,param_2,param_3,(double)param_4);
  return;
}

// @baa 0x00c25630
void sub_00c25630(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  return;
}

struct C_00c25740 { C_00c25740* sub_00c25740(void); };

// @baa 0x00c25740
C_00c25740* C_00c25740::sub_00c25740(void) { return this; }

struct M_00c25750 { void sub_00549310(); };

struct C_00c25750 { char pad[4]; M_00c25750 m; void sub_00c25750(); };

// @baa 0x00c25750
void C_00c25750::sub_00c25750() { m.sub_00549310(); }

struct C_00c25990 {
    void sub_00c25990();
};

int sub_0053df70(...);
// @baa 0x00c25990
void C_00c25990::sub_00c25990(void)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x34) = 0;
  if (*(int *)(param_1 + 0x38) != 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    if (*(int *)(param_1 + 0x30) != 0) {
      uVar1 = sub_0053df70(*(int *)(param_1 + 0x30),0,8);
      *(undefined4 *)(param_1 + 0x30) = uVar1;
    }
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    *(undefined4 *)(param_1 + 0x44) = 0;
    if (*(int *)(param_1 + 0x3c) != 0) {
      uVar1 = sub_0053df70(*(int *)(param_1 + 0x3c),0,8);
      *(undefined4 *)(param_1 + 0x3c) = uVar1;
    }
  }
  return;
}

struct C_00c29880 {
    int sub_00c29880(int);
};

// @baa 0x00c29880
int C_00c29880::sub_00c29880(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct S {
    int Object;
    int F4;
    int F8;
    int FC;
    volatile int F10;
    int F14;

    int sub_00c250f0();
};

extern int g_02044710;
// @baa 0x00c250f0
int S::sub_00c250f0()
{
    int T = (int)this;
    this->F8 = 0;
    this->FC = 0;
    this->F10 &= 0xfffffffe;
    this->Object = (int)&g_02044710;
    this->F14 = 0;
    return T;
}

static S g_self_00c250f0;
static int caller_00c250f0()
{
    return g_self_00c250f0.sub_00c250f0();
}
