// Editor_0f20000.cpp (part 1 of 3): 114 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Map.h"

struct C {
    void sub_00f201c0(undefined4, undefined4, undefined2);
};

int sub_00630ea0(...);
// @baa 0x00f201c0
void C::sub_00f201c0(undefined4 param_2, undefined4 param_3, undefined2 param_4)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630ea0(param_1,param_2,param_3,param_4);
  return;
}

int sub_005c80f0(void);
int sub_005cb6d0(...);
int sub_005eae70(...);
extern undefined4 g_026a1c70;
// @baa 0x00f201e0
void sub_00f201e0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  if (g_026a1c70 == 0) {
    g_026a1c70 = sub_005cb6d0(L"Core");
    sub_005c80f0();
  }
  sub_005eae70(g_026a1c70,param_1,param_2,param_3,param_4,param_5,1);
  return;
}

// @baa 0x00f20290
void sub_00f20290(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return;
}

struct C_00f20ce0{
int sub_00f20ce0(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x00f20ce0
int C_00f20ce0::sub_00f20ce0(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],4);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3)){
iVar3=sub_0053df70(*param_1,iVar3*4,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+4*iVar2);
if((undefined4*)0x0!=puVar1){
*puVar1=*param_2;
}
return iVar2;
}

struct S {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00f20d40(INT Index);
};

// @baa 0x00f20d40
DWORD* S::sub_00f20d40(INT Index)
{
    return &Items(Index);
}

struct E { BYTE Bytes[296]; };

struct S_00f20d90 {
    TArray<E> Items; // 0x00
    E* sub_00f20d90(INT Index);
};

// @baa 0x00f20d90
E* S_00f20d90::sub_00f20d90(INT Index)
{
    return &Items(Index);
}

int sub_005413d0(...);
// @baa 0x00f21310
void sub_00f21310(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_00f21320 {
    int sub_00f21320(int);
};

// @baa 0x00f21320
int C_00f21320::sub_00f21320(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x18;
}

struct C_00f21330 {
    int sub_00f21330();
};

// @baa 0x00f21330
int C_00f21330::sub_00f21330(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00f21350 {
    int sub_00f21350();
};

// @baa 0x00f21350
int C_00f21350::sub_00f21350(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x28;
}

struct C_00f21360 {
    int sub_00f21360();
};

// @baa 0x00f21360
int C_00f21360::sub_00f21360(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00f21380 {
    int sub_00f21380();
};

// @baa 0x00f21380
int C_00f21380::sub_00f21380(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_00f21390 {
    int sub_00f21390();
};

// @baa 0x00f21390
int C_00f21390::sub_00f21390(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00f213b0 {
    int sub_00f213b0();
};

// @baa 0x00f213b0
int C_00f213b0::sub_00f213b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_00f213c0 {
    int sub_00f213c0();
};

// @baa 0x00f213c0
int C_00f213c0::sub_00f213c0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00f213e0 {
    int sub_00f213e0();
};

// @baa 0x00f213e0
int C_00f213e0::sub_00f213e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_00f213f0 {
    int sub_00f213f0();
};

// @baa 0x00f213f0
int C_00f213f0::sub_00f213f0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00f21410 {
    int sub_00f21410();
};

// @baa 0x00f21410
int C_00f21410::sub_00f21410(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_00f21420 {
    int sub_00f21420();
};

// @baa 0x00f21420
int C_00f21420::sub_00f21420(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00f21440 {
    int sub_00f21440();
};

// @baa 0x00f21440
int C_00f21440::sub_00f21440(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_00f21450 {
    int sub_00f21450();
};

// @baa 0x00f21450
int C_00f21450::sub_00f21450(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00f21470 {
    int sub_00f21470();
};

// @baa 0x00f21470
int C_00f21470::sub_00f21470(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_00f21480 {
    int sub_00f21480();
};

// @baa 0x00f21480
int C_00f21480::sub_00f21480(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00f214a0 {
    int sub_00f214a0();
};

// @baa 0x00f214a0
int C_00f214a0::sub_00f214a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_00f214b0 {
    int sub_00f214b0();
};

// @baa 0x00f214b0
int C_00f214b0::sub_00f214b0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00f214d0 {
    int sub_00f214d0();
};

// @baa 0x00f214d0
int C_00f214d0::sub_00f214d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_00f214e0 {
    int sub_00f214e0();
};

// @baa 0x00f214e0
int C_00f214e0::sub_00f214e0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00f21500 {
    int sub_00f21500();
};

// @baa 0x00f21500
int C_00f21500::sub_00f21500(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_00f21510 {
    int sub_00f21510();
};

// @baa 0x00f21510
int C_00f21510::sub_00f21510(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00f21530 {
    int sub_00f21530();
};

// @baa 0x00f21530
int C_00f21530::sub_00f21530(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_00f21540 {
    int sub_00f21540();
};

// @baa 0x00f21540
int C_00f21540::sub_00f21540(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00f21560 {
    int sub_00f21560();
};

// @baa 0x00f21560
int C_00f21560::sub_00f21560(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_00f21570 {
    int sub_00f21570();
};

// @baa 0x00f21570
int C_00f21570::sub_00f21570(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00f21590 {
    int sub_00f21590();
};

// @baa 0x00f21590
int C_00f21590::sub_00f21590(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_00f215a0 {
    int sub_00f215a0();
};

// @baa 0x00f215a0
int C_00f215a0::sub_00f215a0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00f215c0 {
    int sub_00f215c0();
};

// @baa 0x00f215c0
int C_00f215c0::sub_00f215c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_00f215d0 {
    int sub_00f215d0();
};

// @baa 0x00f215d0
int C_00f215d0::sub_00f215d0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00f215f0 {
    int sub_00f215f0();
};

// @baa 0x00f215f0
int C_00f215f0::sub_00f215f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_00f21600 {
    int sub_00f21600();
};

// @baa 0x00f21600
int C_00f21600::sub_00f21600(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00f21620 {
    int sub_00f21620();
};

// @baa 0x00f21620
int C_00f21620::sub_00f21620(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_00f21630 {
    int sub_00f21630();
};

// @baa 0x00f21630
int C_00f21630::sub_00f21630(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00f21650 {
    int sub_00f21650();
};

// @baa 0x00f21650
int C_00f21650::sub_00f21650(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_00f21660 {
    int sub_00f21660();
};

// @baa 0x00f21660
int C_00f21660::sub_00f21660(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00f21680 {
    int sub_00f21680();
};

// @baa 0x00f21680
int C_00f21680::sub_00f21680(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_00f21690 {
    int sub_00f21690();
};

// @baa 0x00f21690
int C_00f21690::sub_00f21690(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00f216b0 {
    int sub_00f216b0();
};

// @baa 0x00f216b0
int C_00f216b0::sub_00f216b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct T_00f21cb0;
// @baa 0x00f21cb0
template INT TArray<T_00f21cb0*>::RemoveItem(T_00f21cb0* const&);

int sub_0053dfa0(...);
int sub_00f22880(void);
// @baa 0x00f22930
undefined4 UObject::sub_00f22930(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00f22880();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00f27020 {
    undefined4 sub_00f27020(byte);
    int sub_0040fcc0();
};

// @baa 0x00f27020
undefined4 C_00f27020::sub_00f27020(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00f27020 *)(((char *)this + 4)))->sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_0040fcc0(void);
// @baa 0x00f27050
undefined4 UObject::sub_00f27050(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_view {
    int sub_0040fcc0();
};

// @baa 0x00f27070
undefined4 UObject::sub_00f27070(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view *)(((char *)this + 4)))->sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00f270a0
undefined4 UObject::sub_00f270a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view *)(((char *)this + 4)))->sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00f270d0
undefined4 UObject::sub_00f270d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view *)(((char *)this + 4)))->sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_00f25340();
// @baa 0x00f27d90
void sub_00f27d90(void) { sub_00f25340(); }

struct C_00f27da0 { int a, b, c; C_00f27da0(); };

// @baa 0x00f27da0
C_00f27da0::C_00f27da0() : a(0), b(0), c(0) {}

extern TArray<int> g_026a1ca4;
struct C_00f2d550 {
    int sub_00f2d550();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x00f2d550
int C_00f2d550::sub_00f2d550()
{
    return g_026a1ca4(Index);
}

struct C_00f2d5b0 {
    int sub_00f2d5b0(int);
    int sub_00f255d0(int, int);
};

// @baa 0x00f2d5b0
int C_00f2d5b0::sub_00f2d5b0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_00f2d5b0 *)(this))->sub_00f255d0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x18;
  }
  return 0;
}

struct C_00f2d5e0 {
    int sub_00f2d5e0();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x00f2d5e0
int C_00f2d5e0::sub_00f2d5e0()
{
    return g_026a1ca4(Index);
}

struct C_00f2d640 {
    int sub_00f2d640(int);
    int sub_00f25750(int, int);
};

// @baa 0x00f2d640
int C_00f2d640::sub_00f2d640(int param_2)
{
    int * param_1 = (int *)this;
  ((C_00f2d640 *)(this))->sub_00f25750((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x18;
  }
  return 0;
}

struct C_00f2d670 {
    int sub_00f2d670(int);
    int sub_00f25910(int, int);
};

// @baa 0x00f2d670
int C_00f2d670::sub_00f2d670(int param_2)
{
    int * param_1 = (int *)this;
  ((C_00f2d670 *)(this))->sub_00f25910((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x18;
  }
  return 0;
}

struct C_00f2d6a0 {
    int sub_00f2d6a0(int);
    int sub_00f25a90(int, int);
};

// @baa 0x00f2d6a0
int C_00f2d6a0::sub_00f2d6a0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_00f2d6a0 *)(this))->sub_00f25a90((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x18;
  }
  return 0;
}

struct C_00f2d6d0 {
    int sub_00f2d6d0(int);
    int sub_00f25c10(int, int);
};

// @baa 0x00f2d6d0
int C_00f2d6d0::sub_00f2d6d0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_00f2d6d0 *)(this))->sub_00f25c10((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x18;
  }
  return 0;
}

struct C_00f2d700 {
    int sub_00f2d700(int);
    int sub_00f25d90(int, int);
};

// @baa 0x00f2d700
int C_00f2d700::sub_00f2d700(int param_2)
{
    int * param_1 = (int *)this;
  ((C_00f2d700 *)(this))->sub_00f25d90((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x18;
  }
  return 0;
}

struct C_00f2d730 {
    int sub_00f2d730(int);
    int sub_00f25f10(int, int);
};

// @baa 0x00f2d730
int C_00f2d730::sub_00f2d730(int param_2)
{
    int * param_1 = (int *)this;
  ((C_00f2d730 *)(this))->sub_00f25f10((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x18;
  }
  return 0;
}

struct C_00f2d760 {
    int sub_00f2d760(int);
    int sub_00f26090(int, int);
};

// @baa 0x00f2d760
int C_00f2d760::sub_00f2d760(int param_2)
{
    int * param_1 = (int *)this;
  ((C_00f2d760 *)(this))->sub_00f26090((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x18;
  }
  return 0;
}

struct C_00f2d790 {
    int sub_00f2d790(int);
    int sub_00f26210(int, int);
};

// @baa 0x00f2d790
int C_00f2d790::sub_00f2d790(int param_2)
{
    int * param_1 = (int *)this;
  ((C_00f2d790 *)(this))->sub_00f26210((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x18;
  }
  return 0;
}

struct C_00f2da10 {
    undefined4 sub_00f2da10(byte);
};

int sub_00f253a0(void);
// @baa 0x00f2da10
undefined4 C_00f2da10::sub_00f2da10(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00f253a0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00f2da30 {
    undefined4 sub_00f2da30(byte);
    int sub_0040fcc0();
};

// @baa 0x00f2da30
undefined4 C_00f2da30::sub_00f2da30(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00f2da30 *)(((char *)this + 4)))->sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00f2da60
undefined4 UObject::sub_00f2da60(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00f2da80 {
    undefined4 sub_00f2da80(byte);
    int sub_0040fcc0();
};

// @baa 0x00f2da80
undefined4 C_00f2da80::sub_00f2da80(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00f2da80 *)(((char *)this + 4)))->sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00f2dab0 {
    undefined4 sub_00f2dab0(byte);
    int sub_0040fcc0();
};

// @baa 0x00f2dab0
undefined4 C_00f2dab0::sub_00f2dab0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00f2dab0 *)(((char *)this + 4)))->sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00f2dae0 {
    undefined4 sub_00f2dae0(byte);
    int sub_0040fcc0();
};

// @baa 0x00f2dae0
undefined4 C_00f2dae0::sub_00f2dae0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00f2dae0 *)(((char *)this + 4)))->sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00f2db10 {
    undefined4 sub_00f2db10(byte);
    int sub_0040fcc0();
};

// @baa 0x00f2db10
undefined4 C_00f2db10::sub_00f2db10(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00f2db10 *)(((char *)this + 4)))->sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00f2db40 {
    undefined4 sub_00f2db40(byte);
    int sub_0040fcc0();
};

// @baa 0x00f2db40
undefined4 C_00f2db40::sub_00f2db40(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00f2db40 *)(((char *)this + 4)))->sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00f2db70 {
    undefined4 sub_00f2db70(byte);
    int sub_0040fcc0();
};

// @baa 0x00f2db70
undefined4 C_00f2db70::sub_00f2db70(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00f2db70 *)(((char *)this + 4)))->sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00f2dba0 {
    undefined4 sub_00f2dba0(byte);
    int sub_0040fcc0();
};

// @baa 0x00f2dba0
undefined4 C_00f2dba0::sub_00f2dba0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00f2dba0 *)(((char *)this + 4)))->sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

/* Out-of-line copies of TSparseArray<T>::TConstIterator's constructor and operator++ (one per element type; the code doesn't
 * depend on it, so INT stands in for the unknown T). */


struct FSparseArrayConstIt_00f2e820 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f2e820& operator++();
};

// @baa 0x00f2e820
FSparseArrayConstIt_00f2e820& FSparseArrayConstIt_00f2e820::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00f2e840 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f2e840& operator++();
};

// @baa 0x00f2e840
FSparseArrayConstIt_00f2e840& FSparseArrayConstIt_00f2e840::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00f2e860 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f2e860& operator++();
};

// @baa 0x00f2e860
FSparseArrayConstIt_00f2e860& FSparseArrayConstIt_00f2e860::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00f2e880 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f2e880& operator++();
};

// @baa 0x00f2e880
FSparseArrayConstIt_00f2e880& FSparseArrayConstIt_00f2e880::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00f2e8a0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f2e8a0& operator++();
};

// @baa 0x00f2e8a0
FSparseArrayConstIt_00f2e8a0& FSparseArrayConstIt_00f2e8a0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00f2e8c0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f2e8c0& operator++();
};

// @baa 0x00f2e8c0
FSparseArrayConstIt_00f2e8c0& FSparseArrayConstIt_00f2e8c0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00f2e8e0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f2e8e0& operator++();
};

// @baa 0x00f2e8e0
FSparseArrayConstIt_00f2e8e0& FSparseArrayConstIt_00f2e8e0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00f2e900 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f2e900& operator++();
};

// @baa 0x00f2e900
FSparseArrayConstIt_00f2e900& FSparseArrayConstIt_00f2e900::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00f2e920 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f2e920& operator++();
};

// @baa 0x00f2e920
FSparseArrayConstIt_00f2e920& FSparseArrayConstIt_00f2e920::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00f2e940 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f2e940& operator++();
};

// @baa 0x00f2e940
FSparseArrayConstIt_00f2e940& FSparseArrayConstIt_00f2e940::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00f2e960 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f2e960(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00f2e960
FSparseArrayConstIt_00f2e960::FSparseArrayConstIt_00f2e960(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00f2e9b0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f2e9b0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00f2e9b0
FSparseArrayConstIt_00f2e9b0::FSparseArrayConstIt_00f2e9b0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00f2ea00 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f2ea00(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00f2ea00
FSparseArrayConstIt_00f2ea00::FSparseArrayConstIt_00f2ea00(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00f2ea50 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f2ea50(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00f2ea50
FSparseArrayConstIt_00f2ea50::FSparseArrayConstIt_00f2ea50(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00f2eaa0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f2eaa0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00f2eaa0
FSparseArrayConstIt_00f2eaa0::FSparseArrayConstIt_00f2eaa0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00f2eaf0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f2eaf0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00f2eaf0
FSparseArrayConstIt_00f2eaf0::FSparseArrayConstIt_00f2eaf0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00f2eb40 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f2eb40(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00f2eb40
FSparseArrayConstIt_00f2eb40::FSparseArrayConstIt_00f2eb40(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00f2eb90 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f2eb90(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00f2eb90
FSparseArrayConstIt_00f2eb90::FSparseArrayConstIt_00f2eb90(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00f2ebe0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f2ebe0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00f2ebe0
FSparseArrayConstIt_00f2ebe0::FSparseArrayConstIt_00f2ebe0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00f2ec30 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f2ec30(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00f2ec30
FSparseArrayConstIt_00f2ec30::FSparseArrayConstIt_00f2ec30(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00f2ec80 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f2ec80& operator++();
};

// @baa 0x00f2ec80
FSparseArrayConstIt_00f2ec80& FSparseArrayConstIt_00f2ec80::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00f2eca0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f2eca0& operator++();
};

// @baa 0x00f2eca0
FSparseArrayConstIt_00f2eca0& FSparseArrayConstIt_00f2eca0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00f2ecc0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f2ecc0& operator++();
};

// @baa 0x00f2ecc0
FSparseArrayConstIt_00f2ecc0& FSparseArrayConstIt_00f2ecc0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00f2ece0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f2ece0& operator++();
};

// @baa 0x00f2ece0
FSparseArrayConstIt_00f2ece0& FSparseArrayConstIt_00f2ece0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00f2ed00 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f2ed00& operator++();
};

// @baa 0x00f2ed00
FSparseArrayConstIt_00f2ed00& FSparseArrayConstIt_00f2ed00::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00f2ed20 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f2ed20& operator++();
};

// @baa 0x00f2ed20
FSparseArrayConstIt_00f2ed20& FSparseArrayConstIt_00f2ed20::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00f2ed40 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f2ed40& operator++();
};

// @baa 0x00f2ed40
FSparseArrayConstIt_00f2ed40& FSparseArrayConstIt_00f2ed40::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00f2ed60 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f2ed60& operator++();
};

// @baa 0x00f2ed60
FSparseArrayConstIt_00f2ed60& FSparseArrayConstIt_00f2ed60::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00f2ed80 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f2ed80& operator++();
};

// @baa 0x00f2ed80
FSparseArrayConstIt_00f2ed80& FSparseArrayConstIt_00f2ed80::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_00f2eda0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f2eda0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00f2eda0
FSparseArrayConstIt_00f2eda0::FSparseArrayConstIt_00f2eda0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00f2edf0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f2edf0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00f2edf0
FSparseArrayConstIt_00f2edf0::FSparseArrayConstIt_00f2edf0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00f2ee40 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f2ee40(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00f2ee40
FSparseArrayConstIt_00f2ee40::FSparseArrayConstIt_00f2ee40(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00f2ee90 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f2ee90(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00f2ee90
FSparseArrayConstIt_00f2ee90::FSparseArrayConstIt_00f2ee90(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00f2eee0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f2eee0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00f2eee0
FSparseArrayConstIt_00f2eee0::FSparseArrayConstIt_00f2eee0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00f2ef30 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f2ef30(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00f2ef30
FSparseArrayConstIt_00f2ef30::FSparseArrayConstIt_00f2ef30(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00f2ef80 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f2ef80(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00f2ef80
FSparseArrayConstIt_00f2ef80::FSparseArrayConstIt_00f2ef80(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00f2efd0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f2efd0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00f2efd0
FSparseArrayConstIt_00f2efd0::FSparseArrayConstIt_00f2efd0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_00f2f020 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_00f2f020(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x00f2f020
FSparseArrayConstIt_00f2f020::FSparseArrayConstIt_00f2f020(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}
