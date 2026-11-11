// Editor_0720000.cpp: 41 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

typedef uint size_t;

struct C_view {
    int sub_00417dc0(int);
};

void * sub_01a375f0(void *, void *, size_t);
// @baa 0x007230e0
undefined4 * UObject::sub_007230e0(int * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  puVar1 = (undefined4 *)*param_2;
  ((C_view *)(this))->sub_00417dc0(puVar1[1]);
  if (param_1[1] != 0) {
    sub_01a375f0((void *)*param_1,(void *)*puVar1,param_1[1] * 2);
  }
  puVar1 = (undefined4 *)param_2[1];
  param_1[3] = *puVar1;
  param_1[4] = puVar1[1];
  param_1[5] = puVar1[2];
  return param_1;
}

// @baa 0x00723130
int UObject::sub_00723130(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

// @baa 0x00723140
undefined4 * UObject::sub_00723140(int * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  puVar1 = (undefined4 *)*param_2;
  ((C_view *)(this))->sub_00417dc0(puVar1[1]);
  if (param_1[1] != 0) {
    sub_01a375f0((void *)*param_1,(void *)*puVar1,param_1[1] * 2);
  }
  puVar1 = (undefined4 *)param_2[1];
  param_1[3] = *puVar1;
  param_1[4] = puVar1[1];
  param_1[5] = puVar1[2];
  param_1[6] = 0xffffffff;
  return param_1;
}

// @baa 0x00723190
int UObject::sub_00723190(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  return param_1[5] * 0x10 + *(int *)*param_1;
}

// @baa 0x007231a0
int UObject::sub_007231a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x28;
}

// @baa 0x007232d0
int UObject::sub_007232d0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

// @baa 0x00723400
undefined4 * UObject::sub_00723400(int * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  puVar1 = (undefined4 *)*param_2;
  ((C_view *)(this))->sub_00417dc0(puVar1[1]);
  if (param_1[1] != 0) {
    sub_01a375f0((void *)*param_1,(void *)*puVar1,param_1[1] * 2);
  }
  param_1[3] = param_2[1];
  return param_1;
}

// @baa 0x00723440
int UObject::sub_00723440(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

void sub_0040fcc0();
// @baa 0x007234a0
void sub_007234a0(void) { sub_0040fcc0(); }

void sub_00722cf0();
// @baa 0x007234b0
void sub_007234b0(void) { sub_00722cf0(); }

// @baa 0x007234c0
void sub_007234c0(void) { sub_0040fcc0(); }

struct C {
    int sub_007234d0(int);
};

// @baa 0x007234d0
int C::sub_007234d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_007234e0 {
    int sub_007234e0();
};

// @baa 0x007234e0
int C_007234e0::sub_007234e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x28;
}

struct C_007234f0 {
    int sub_007234f0();
};

// @baa 0x007234f0
int C_007234f0::sub_007234f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0xc;
}

struct C_00723500 {
    int sub_00723500();
};

// @baa 0x00723500
int C_00723500::sub_00723500(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_00723510 {
    int sub_00723510();
};

// @baa 0x00723510
int C_00723510::sub_00723510(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00723520 {
    int sub_00723520();
};

// @baa 0x00723520
int C_00723520::sub_00723520(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00723530 {
    int sub_00723530();
};

// @baa 0x00723530
int C_00723530::sub_00723530(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_00723540 {
    int sub_00723540();
};

// @baa 0x00723540
int C_00723540::sub_00723540(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_00723550 {
    int sub_00723550();
};

// @baa 0x00723550
int C_00723550::sub_00723550(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_00723560 {
    int sub_00723560();
};

// @baa 0x00723560
int C_00723560::sub_00723560(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

// @baa 0x00723570
void __stdcall sub_00723570(int a0, int a1) {  }

struct C_00723580 {
    int sub_00723580(int);
};

// @baa 0x00723580
int C_00723580::sub_00723580(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

// @baa 0x00723590
void __stdcall sub_00723590(int a0, int a1) {  }

struct C_007235a0 {
    int sub_007235a0(int);
};

// @baa 0x007235a0
int C_007235a0::sub_007235a0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

// @baa 0x007235b0
void __stdcall sub_007235b0(int a0, int a1) {  }

struct C_007235c0 {
    int sub_007235c0(int);
};

// @baa 0x007235c0
int C_007235c0::sub_007235c0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

// @baa 0x007235d0
void __stdcall sub_007235d0(int a0, int a1) {  }

struct C_007235e0 {
    int sub_007235e0(int);
};

// @baa 0x007235e0
int C_007235e0::sub_007235e0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

// @baa 0x007235f0
void __stdcall sub_007235f0(int a0, int a1) {  }

struct C_00723600 {
    int sub_00723600(int);
};

// @baa 0x00723600
int C_00723600::sub_00723600(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

// @baa 0x00723610
void __stdcall sub_00723610(int a0, int a1) {  }

struct C_00723620 {
    int sub_00723620(int);
};

// @baa 0x00723620
int C_00723620::sub_00723620(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct C_00723630 {
    int sub_00723630();
};

// @baa 0x00723630
int C_00723630::sub_00723630(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x28;
}

struct C_00723640 {
    undefined4 sub_00723640(byte);
};

int sub_0053dfa0(...);
int sub_0071e860(void);
// @baa 0x00723640
undefined4 C_00723640::sub_00723640(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0071e860();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00723660 {
    undefined4 sub_00723660(byte);
};

int sub_0071e8d0(void);
// @baa 0x00723660
undefined4 C_00723660::sub_00723660(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0071e8d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00723680 {
    undefined4 sub_00723680(byte);
};

int sub_0071e940(void);
// @baa 0x00723680
undefined4 C_00723680::sub_00723680(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0071e940();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_007236a0 {
    undefined4 sub_007236a0(byte);
};

int sub_0071e9b0(void);
// @baa 0x007236a0
undefined4 C_007236a0::sub_007236a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0071e9b0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_007236c0 {
    undefined4 sub_007236c0(byte);
};

int sub_0071ea20(void);
// @baa 0x007236c0
undefined4 C_007236c0::sub_007236c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0071ea20();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_007236e0 {
    undefined4 sub_007236e0(byte);
};

int sub_0071ea90(void);
// @baa 0x007236e0
undefined4 C_007236e0::sub_007236e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0071ea90();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00723700 {
    int sub_00723700();
};

// @baa 0x00723700
int C_00723700::sub_00723700(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}
