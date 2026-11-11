// Engine_0810000.cpp (part 1 of 2): 157 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C {
    void sub_00810750(undefined4);
};

int sub_00810680(...);
// @baa 0x00810750
void C::sub_00810750(undefined4 param_2)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x38) != 0) {
    sub_00810680(param_1,0,param_2);
  }
  return;
}

int sub_0053dfa0(...);
int sub_00807930(void);
// @baa 0x00811b70
undefined4 ULensFlare::sub_00811b70(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00807930();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00811b90 {
    FString sub_00811b90();
};

// @baa 0x00811b90
FString C_00811b90::sub_00811b90()
{
    return TEXT("BSP shadow vertices");
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_008120e0 { void* Data; int Num; int Max; void sub_008120e0(); };

// @baa 0x008120e0
void C_008120e0::sub_008120e0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00812140 {
    void sub_00812140(int);
};

int sub_0053df70(...);
// @baa 0x00812140
void C_00812140::sub_00812140(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_008123b0 { C_008123b0* sub_008123b0(void); };

// @baa 0x008123b0
C_008123b0* C_008123b0::sub_008123b0(void) { return this; }

struct C_008124c0 { void* Data; int Num; int Max; void sub_008124c0(); };

// @baa 0x008124c0
void C_008124c0::sub_008124c0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00812520 {
    void sub_00812520(int);
};

// @baa 0x00812520
void C_00812520::sub_00812520(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 8,8);
      *param_1 = iVar1;
    }
  }
  return;
}

// @baa 0x00812780
void UObject::sub_00812780(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 8,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_008128c0 { void sub_0080a0e0(int); C_008128c0 *sub_008128c0(int); };

// @baa 0x008128c0
C_008128c0 *C_008128c0::sub_008128c0(int a) { sub_0080a0e0(a); return this; }

struct C_008128e0 { void* Data; int Num; int Max; void sub_008128e0(); };

// @baa 0x008128e0
void C_008128e0::sub_008128e0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00812940 { void* Data; int Num; int Max; void sub_00812940(); };

// @baa 0x00812940
void C_00812940::sub_00812940() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_008129a0 { void* Data; int Num; int Max; void sub_008129a0(); };

// @baa 0x008129a0
void C_008129a0::sub_008129a0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00812a00 {
    void sub_00812a00(int);
};

// @baa 0x00812a00
void C_00812a00::sub_00812a00(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x30,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00812a50 { void* Data; int Num; int Max; void sub_00812a50(); };

// @baa 0x00812a50
void C_00812a50::sub_00812a50() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct T_00812ab0;
// @baa 0x00812ab0
template INT TArray<T_00812ab0*>::RemoveItem(T_00812ab0* const&);

struct C_00812b30 { void* Data; int Num; int Max; void sub_00812b30(); };

// @baa 0x00812b30
void C_00812b30::sub_00812b30() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00812b90 {
    void sub_00812b90(int);
};

// @baa 0x00812b90
void C_00812b90::sub_00812b90(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x2c,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00812c50 {
    uint sub_00812c50();
};

// @baa 0x00812c50
uint C_00812c50::sub_00812c50(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0xc0) | -(uint)(*(uint *)(param_1 + 0xc0) == 0) & param_1;
}

// @baa 0x00812c70
void __stdcall sub_00812c70(int a0, int a1) {  }

struct C_00812e80 {
    int sub_00812e80(int);
};

// @baa 0x00812e80
int C_00812e80::sub_00812e80(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_00812e90 {
    void sub_00812e90(int);
};

// @baa 0x00812e90
void C_00812e90::sub_00812e90(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 << 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00812ed0 {
    uint sub_00812ed0();
};

// @baa 0x00812ed0
uint C_00812ed0::sub_00812ed0(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 100) | -(uint)(*(uint *)(param_1 + 100) == 0) & param_1;
}

// @baa 0x00812ef0
void __stdcall sub_00812ef0(int a0, int a1) {  }

struct C_00812f00 { int sub_00812f00(void); };

// @baa 0x00812f00
int C_00812f00::sub_00812f00(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

// @baa 0x00812f10
void __stdcall sub_00812f10(int a0, int a1) {  }

struct C_00813010 {
    int sub_00813010(int);
};

// @baa 0x00813010
int C_00813010::sub_00813010(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_00813030 {
    int sub_00813030();
};

// @baa 0x00813030
int C_00813030::sub_00813030(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00813050 {
    int sub_00813050();
};

// @baa 0x00813050
int C_00813050::sub_00813050(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct C_00813160 {
    int sub_00813160(int);
};

// @baa 0x00813160
int C_00813160::sub_00813160(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00813250 {
    int sub_00813250(int);
};

// @baa 0x00813250
int C_00813250::sub_00813250(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00813350 {
    int sub_00813350(int);
};

// @baa 0x00813350
int C_00813350::sub_00813350(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00813360 {
    int sub_00813360(int);
};

// @baa 0x00813360
int C_00813360::sub_00813360(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_008133d0 {
    int sub_008133d0(int);
};

// @baa 0x008133d0
int C_008133d0::sub_008133d0(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

struct C_00813440 {
    int sub_00813440(int);
};

// @baa 0x00813440
int C_00813440::sub_00813440(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_008134c0 {
    int sub_008134c0(int);
};

// @baa 0x008134c0
int C_008134c0::sub_008134c0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_008134d0 {
    int sub_008134d0(int);
};

// @baa 0x008134d0
int C_008134d0::sub_008134d0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_008135b0 {
    int sub_008135b0(int);
};

// @baa 0x008135b0
int C_008135b0::sub_008135b0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_008135c0 {
    int sub_008135c0();
};

// @baa 0x008135c0
int C_008135c0::sub_008135c0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_008135e0 {
    int sub_008135e0();
};

// @baa 0x008135e0
int C_008135e0::sub_008135e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_008135f0 {
    uint sub_008135f0();
};

// @baa 0x008135f0
uint C_008135f0::sub_008135f0(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 100) | -(uint)(*(uint *)(param_1 + 100) == 0) & param_1;
}

struct C_00813680 {
    int sub_00813680(int);
};

// @baa 0x00813680
int C_00813680::sub_00813680(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00813690 {
    int sub_00813690(int);
};

// @baa 0x00813690
int C_00813690::sub_00813690(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_008136a0 {
    int sub_008136a0();
};

// @baa 0x008136a0
int C_008136a0::sub_008136a0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_008136c0 {
    int sub_008136c0();
};

// @baa 0x008136c0
int C_008136c0::sub_008136c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_008136f0 {
    int sub_008136f0(int);
};

// @baa 0x008136f0
int C_008136f0::sub_008136f0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_00813710 {
    int sub_00813710();
};

// @baa 0x00813710
int C_00813710::sub_00813710(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct C_00813730 {
    int sub_00813730();
};

// @baa 0x00813730
int C_00813730::sub_00813730(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_00813740 {
    int sub_00813740();
};

// @baa 0x00813740
int C_00813740::sub_00813740(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0xc;
}

struct C_00813750 {
    int sub_00813750();
};

// @baa 0x00813750
int C_00813750::sub_00813750(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00813760 {
    int sub_00813760();
};

// @baa 0x00813760
int C_00813760::sub_00813760(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_00813770 {
    int sub_00813770();
};

// @baa 0x00813770
int C_00813770::sub_00813770(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00813780 {
    int sub_00813780();
};

// @baa 0x00813780
int C_00813780::sub_00813780(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00813790 {
    int sub_00813790();
};

// @baa 0x00813790
int C_00813790::sub_00813790(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_008137a0 {
    int sub_008137a0();
};

// @baa 0x008137a0
int C_008137a0::sub_008137a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_008137b0 {
    int sub_008137b0();
};

// @baa 0x008137b0
int C_008137b0::sub_008137b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_008137c0 {
    int sub_008137c0();
};

// @baa 0x008137c0
int C_008137c0::sub_008137c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_008137d0 {
    int sub_008137d0();
};

// @baa 0x008137d0
int C_008137d0::sub_008137d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_008137e0 {
    int sub_008137e0();
};

// @baa 0x008137e0
int C_008137e0::sub_008137e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct C_00813800 {
    int sub_00813800();
};

// @baa 0x00813800
int C_00813800::sub_00813800(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00814500 {
    void sub_00814500(int);
};

// @baa 0x00814500
void C_00814500::sub_00814500(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x50,8);
      *param_1 = iVar1;
    }
  }
  return;
}

void sub_00812640();
// @baa 0x00814710
void sub_00814710(void) { sub_00812640(); }

void sub_008126a0();
// @baa 0x00814720
void sub_00814720(void) { sub_008126a0(); }

void sub_00812720();
// @baa 0x00814740
void sub_00814740(void) { sub_00812720(); }

// @baa 0x00815420
void ASpotLight::vf_09c(void) {  }

struct C_00815bf0 {
    undefined4 sub_00815bf0(byte);
};

int sub_0080cb00(void);
// @baa 0x00815bf0
undefined4 C_00815bf0::sub_00815bf0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0080cb00();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct M_00816790 { void sub_008124c0(); };

struct C_00816790 { char pad[4]; M_00816790 m; void sub_00816790(); };

// @baa 0x00816790
void C_00816790::sub_00816790() { m.sub_008124c0(); }

// @baa 0x00818b50
int UFracturedStaticMeshComponent::sub_00818b50(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_view {
    int sub_00812f20(int, int);
};

// @baa 0x00818b60
int UFracturedStaticMeshComponent::sub_00818b60(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view *)(this))->sub_00812f20((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_00818b90 {
    int sub_00818b90(int);
};

// @baa 0x00818b90
int C_00818b90::sub_00818b90(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_00818c20 {
    int sub_00818c20();
};

// @baa 0x00818c20
int C_00818c20::sub_00818c20(void)
{
    int param_1 = (int)this;
  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00818c40 {
    int sub_00818c40();
};

// @baa 0x00818c40
int C_00818c40::sub_00818c40(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct C_00818c60 {
    int sub_00818c60(int);
};

// @baa 0x00818c60
int C_00818c60::sub_00818c60(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00818c70 {
    int sub_00818c70(int);
    int sub_00813070(int, int);
};

// @baa 0x00818c70
int C_00818c70::sub_00818c70(int param_2)
{
    int * param_1 = (int *)this;
  ((C_00818c70 *)(this))->sub_00813070((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_00818ca0 {
    int sub_00818ca0(int);
};

// @baa 0x00818ca0
int C_00818ca0::sub_00818ca0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00818cb0 {
    int sub_00818cb0(int);
    int sub_00813170(int, int);
};

// @baa 0x00818cb0
int C_00818cb0::sub_00818cb0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_00818cb0 *)(this))->sub_00813170((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x18;
  }
  return 0;
}

struct C_00818ce0 {
    int sub_00818ce0(int);
};

// @baa 0x00818ce0
int C_00818ce0::sub_00818ce0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00818cf0 {
    int sub_00818cf0(int);
    int sub_00813260(int, int);
};

// @baa 0x00818cf0
int C_00818cf0::sub_00818cf0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_00818cf0 *)(this))->sub_00813260((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

extern TArray<int> g_026a1ca4;
struct C_00818e80 {
    int sub_00818e80();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x00818e80
int C_00818e80::sub_00818e80()
{
    return g_026a1ca4(Index);
}

struct C_00818ee0 {
    int sub_00818ee0(int);
};

// @baa 0x00818ee0
int C_00818ee0::sub_00818ee0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00818ef0 {
    int sub_00818ef0(int);
};

// @baa 0x00818ef0
int C_00818ef0::sub_00818ef0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00818f00 {
    int sub_00818f00(int);
};

// @baa 0x00818f00
int C_00818f00::sub_00818f00(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00818f10 {
    int sub_00818f10();
};

// @baa 0x00818f10
int C_00818f10::sub_00818f10(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00818f30 {
    int sub_00818f30();
};

// @baa 0x00818f30
int C_00818f30::sub_00818f30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00818f40 {
    int sub_00818f40(int);
};

// @baa 0x00818f40
int C_00818f40::sub_00818f40(int param_2)
{
    uint param_1 = (uint)this;

  return (-(uint)(*(uint *)(param_1 + 100) == 0) & param_1 | *(uint *)(param_1 + 100)) +
         param_2 * 0x14;
}

// @baa 0x00818f60
void __stdcall sub_00818f60(int a0, int a1) {  }

struct C_00818f70 {
    int sub_00818f70(int);
};

// @baa 0x00818f70
int C_00818f70::sub_00818f70(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00818f80 {
    int sub_00818f80();
};

// @baa 0x00818f80
int C_00818f80::sub_00818f80(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00818fa0 {
    int sub_00818fa0();
};

// @baa 0x00818fa0
int C_00818fa0::sub_00818fa0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00818ff0 {
    int sub_00818ff0();
};

// @baa 0x00818ff0
int C_00818ff0::sub_00818ff0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[2] * 0x10 + *(int *)*param_1;
}

struct C_008190f0 {
    int sub_008190f0(int);
};

// @baa 0x008190f0
int C_008190f0::sub_008190f0(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

struct C_00819180 {
    int sub_00819180(int);
};

// @baa 0x00819180
int C_00819180::sub_00819180(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_008192c0 {
    int sub_008192c0(int);
};

// @baa 0x008192c0
int C_008192c0::sub_008192c0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_008192d0 {
    int sub_008192d0(int);
};

// @baa 0x008192d0
int C_008192d0::sub_008192d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_008192e0 {
    int sub_008192e0(int);
};

// @baa 0x008192e0
int C_008192e0::sub_008192e0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_008192f0 {
    int sub_008192f0(int);
};

// @baa 0x008192f0
int C_008192f0::sub_008192f0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00819380 {
    int sub_00819380(int);
};

// @baa 0x00819380
int C_00819380::sub_00819380(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00819390 {
    int sub_00819390(int);
};

// @baa 0x00819390
int C_00819390::sub_00819390(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00819420 {
    int sub_00819420(int);
};

// @baa 0x00819420
int C_00819420::sub_00819420(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00819430{
int sub_00819430(byte);
};

extern undefined4*g_026b0d94;
// @baa 0x00819430
int C_00819430::sub_00819430(byte param_2)
{
int param_1=(int)this;

if(*(int*)(param_1+4)!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x238))((int)(*(int*)(param_1+4)));
}
if((param_2&1)!=0){
sub_0053dfa0(param_1);
}
return param_1;
}

struct TBitArray {
    int* AllocatorData;
    int NumBits;
    int MaxBits;
    int InlineData[4];
};

struct FBitIterator {
    int WordIndex;
    int Mask;
    const int* WordData;
    int UnvisitedMask;
    int CurrentIndex;
    int BaseIndex;

    FBitIterator(const TBitArray& Array, int StartIndex)
        : WordIndex(StartIndex >> 5)
        , Mask(1 << (StartIndex & 31))
        , WordData(Array.InlineData)
        , UnvisitedMask(~0 << (StartIndex & 31))
        , CurrentIndex(StartIndex)
        , BaseIndex(StartIndex & ~31)
    {
    }
    void FindFirstSetBit();
    void Advance()
    {
        UnvisitedMask &= ~Mask;
        FindFirstSetBit();
    }
};

struct TConstSetBitIterator_00819ec0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00819ec0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00819ec0& operator++();
};

TConstSetBitIterator_00819ec0::TConstSetBitIterator_00819ec0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00819ec0
TConstSetBitIterator_00819ec0& TConstSetBitIterator_00819ec0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00819ee0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00819ee0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00819ee0& operator++();
};

TConstSetBitIterator_00819ee0::TConstSetBitIterator_00819ee0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00819ee0
TConstSetBitIterator_00819ee0& TConstSetBitIterator_00819ee0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00819f00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00819f00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00819f00& operator++();
};

TConstSetBitIterator_00819f00::TConstSetBitIterator_00819f00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00819f00
TConstSetBitIterator_00819f00& TConstSetBitIterator_00819f00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00819f20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00819f20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00819f20& operator++();
};

TConstSetBitIterator_00819f20::TConstSetBitIterator_00819f20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00819f20
TConstSetBitIterator_00819f20& TConstSetBitIterator_00819f20::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00819f40 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00819f40(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00819f40& operator++();
};

TConstSetBitIterator_00819f40::TConstSetBitIterator_00819f40(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00819f40
TConstSetBitIterator_00819f40& TConstSetBitIterator_00819f40::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00819f60 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00819f60(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00819f60& operator++();
};

TConstSetBitIterator_00819f60::TConstSetBitIterator_00819f60(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00819f60
TConstSetBitIterator_00819f60& TConstSetBitIterator_00819f60::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00819f80 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00819f80(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00819f80& operator++();
};

TConstSetBitIterator_00819f80::TConstSetBitIterator_00819f80(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00819f80
TConstSetBitIterator_00819f80& TConstSetBitIterator_00819f80::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00819fa0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00819fa0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00819fa0& operator++();
};

TConstSetBitIterator_00819fa0::TConstSetBitIterator_00819fa0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00819fa0
TConstSetBitIterator_00819fa0& TConstSetBitIterator_00819fa0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00819fc0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00819fc0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00819fc0& operator++();
};

TConstSetBitIterator_00819fc0::TConstSetBitIterator_00819fc0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00819fc0
TConstSetBitIterator_00819fc0& TConstSetBitIterator_00819fc0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00819fe0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00819fe0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00819fe0& operator++();
};

TConstSetBitIterator_00819fe0::TConstSetBitIterator_00819fe0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00819fe0
TConstSetBitIterator_00819fe0& TConstSetBitIterator_00819fe0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0081a000 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0081a000(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0081a000& operator++();
};

TConstSetBitIterator_0081a000::TConstSetBitIterator_0081a000(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0081a000
TConstSetBitIterator_0081a000& TConstSetBitIterator_0081a000::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0081a050 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0081a050(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0081a050& operator++();
};

TConstSetBitIterator_0081a050::TConstSetBitIterator_0081a050(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0081a050
TConstSetBitIterator_0081a050& TConstSetBitIterator_0081a050::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0081a0a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0081a0a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0081a0a0& operator++();
};

TConstSetBitIterator_0081a0a0::TConstSetBitIterator_0081a0a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0081a0a0
TConstSetBitIterator_0081a0a0& TConstSetBitIterator_0081a0a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0081a0f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0081a0f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0081a0f0& operator++();
};

TConstSetBitIterator_0081a0f0::TConstSetBitIterator_0081a0f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0081a0f0
TConstSetBitIterator_0081a0f0& TConstSetBitIterator_0081a0f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0081a140 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0081a140(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0081a140& operator++();
};

TConstSetBitIterator_0081a140::TConstSetBitIterator_0081a140(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0081a140
TConstSetBitIterator_0081a140& TConstSetBitIterator_0081a140::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0081a190 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0081a190(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0081a190& operator++();
};

TConstSetBitIterator_0081a190::TConstSetBitIterator_0081a190(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0081a190
TConstSetBitIterator_0081a190& TConstSetBitIterator_0081a190::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0081a1e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0081a1e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0081a1e0& operator++();
};

TConstSetBitIterator_0081a1e0::TConstSetBitIterator_0081a1e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0081a1e0
TConstSetBitIterator_0081a1e0& TConstSetBitIterator_0081a1e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0081a230 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0081a230(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0081a230& operator++();
};

TConstSetBitIterator_0081a230::TConstSetBitIterator_0081a230(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0081a230
TConstSetBitIterator_0081a230& TConstSetBitIterator_0081a230::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0081a280 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0081a280(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0081a280& operator++();
};

TConstSetBitIterator_0081a280::TConstSetBitIterator_0081a280(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0081a280
TConstSetBitIterator_0081a280& TConstSetBitIterator_0081a280::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0081a2d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0081a2d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0081a2d0& operator++();
};

TConstSetBitIterator_0081a2d0::TConstSetBitIterator_0081a2d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0081a2d0
TConstSetBitIterator_0081a2d0& TConstSetBitIterator_0081a2d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0081a320 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0081a320(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0081a320& operator++();
};

TConstSetBitIterator_0081a320::TConstSetBitIterator_0081a320(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0081a320
TConstSetBitIterator_0081a320& TConstSetBitIterator_0081a320::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0081a370 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0081a370(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0081a370& operator++();
};

TConstSetBitIterator_0081a370::TConstSetBitIterator_0081a370(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0081a370
TConstSetBitIterator_0081a370& TConstSetBitIterator_0081a370::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0081a390 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0081a390(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0081a390& operator++();
};

TConstSetBitIterator_0081a390::TConstSetBitIterator_0081a390(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0081a390
TConstSetBitIterator_0081a390& TConstSetBitIterator_0081a390::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0081a3b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0081a3b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0081a3b0& operator++();
};

TConstSetBitIterator_0081a3b0::TConstSetBitIterator_0081a3b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0081a3b0
TConstSetBitIterator_0081a3b0& TConstSetBitIterator_0081a3b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0081a3d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0081a3d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0081a3d0& operator++();
};

TConstSetBitIterator_0081a3d0::TConstSetBitIterator_0081a3d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0081a3d0
TConstSetBitIterator_0081a3d0& TConstSetBitIterator_0081a3d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0081a3f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0081a3f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0081a3f0& operator++();
};

TConstSetBitIterator_0081a3f0::TConstSetBitIterator_0081a3f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0081a3f0
TConstSetBitIterator_0081a3f0& TConstSetBitIterator_0081a3f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0081a410 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0081a410(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0081a410& operator++();
};

TConstSetBitIterator_0081a410::TConstSetBitIterator_0081a410(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0081a410
TConstSetBitIterator_0081a410& TConstSetBitIterator_0081a410::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0081a430 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0081a430(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0081a430& operator++();
};

TConstSetBitIterator_0081a430::TConstSetBitIterator_0081a430(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0081a430
TConstSetBitIterator_0081a430& TConstSetBitIterator_0081a430::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0081a480 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0081a480(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0081a480& operator++();
};

TConstSetBitIterator_0081a480::TConstSetBitIterator_0081a480(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0081a480
TConstSetBitIterator_0081a480& TConstSetBitIterator_0081a480::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0081a4d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0081a4d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0081a4d0& operator++();
};

TConstSetBitIterator_0081a4d0::TConstSetBitIterator_0081a4d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0081a4d0
TConstSetBitIterator_0081a4d0& TConstSetBitIterator_0081a4d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0081a520 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0081a520(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0081a520& operator++();
};

TConstSetBitIterator_0081a520::TConstSetBitIterator_0081a520(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0081a520
TConstSetBitIterator_0081a520& TConstSetBitIterator_0081a520::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0081a570 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0081a570(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0081a570& operator++();
};

TConstSetBitIterator_0081a570::TConstSetBitIterator_0081a570(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0081a570
TConstSetBitIterator_0081a570& TConstSetBitIterator_0081a570::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0081a5c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0081a5c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0081a5c0& operator++();
};

TConstSetBitIterator_0081a5c0::TConstSetBitIterator_0081a5c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0081a5c0
TConstSetBitIterator_0081a5c0& TConstSetBitIterator_0081a5c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0081a610 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0081a610(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0081a610& operator++();
};

TConstSetBitIterator_0081a610::TConstSetBitIterator_0081a610(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0081a610
TConstSetBitIterator_0081a610& TConstSetBitIterator_0081a610::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0081a660 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0081a660(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0081a660& operator++();
};

TConstSetBitIterator_0081a660::TConstSetBitIterator_0081a660(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0081a660
TConstSetBitIterator_0081a660& TConstSetBitIterator_0081a660::operator++()
{
    It.Advance();
    return *this;
}

int sub_00818160(...);
// @baa 0x0081dbe0
undefined4 sub_0081dbe0(undefined4 param_1, undefined4 param_2)
{
  sub_00818160(param_1,param_2);
  return param_1;
}

int sub_00816700(void);
// @baa 0x0081e690
undefined4 UModelComponent::sub_0081e690(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00816700();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0081e730 {
    undefined4 sub_0081e730(byte);
    int sub_008124c0();
};

// @baa 0x0081e730
undefined4 C_0081e730::sub_0081e730(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_0081e730 *)(((char *)this + 4)))->sub_008124c0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00816de0(void);
// @baa 0x0081e7b0
undefined4 UTexture2DComposite::sub_0081e7b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00816de0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0081e7d0 { void sub_00814440(int); C_0081e7d0 *sub_0081e7d0(int); };

// @baa 0x0081e7d0
C_0081e7d0 *C_0081e7d0::sub_0081e7d0(int a) { sub_00814440(a); return this; }

// @baa 0x0081e870
int sub_0081e870(void) { return 0; }

// @baa 0x0081e880
int UFracturedStaticMeshComponent::sub_0081e880(void) { return *(int*)((char*)this + 16); }

// @baa 0x0081e890
int UFracturedStaticMeshComponent::sub_0081e890(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) * 0x24;
}

struct E { BYTE Bytes[36]; };

struct S {
    TArray<E> Items; // 0x00
    const E* sub_0081e8a0(INT Index) const;
};

// @baa 0x0081e8a0
const E* S::sub_0081e8a0(INT Index) const
{
    return &Items(Index);
}

struct C_0081e8f0 { char pad[4]; TArray<int> A; const int* sub_0081e8f0() const; };

// @baa 0x0081e8f0
const int* C_0081e8f0::sub_0081e8f0() const { return &A(0); }

// @baa 0x0081e920
void UFracturedStaticMeshComponent::sub_0081e920(void)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x10) == 0) &&
     (*(undefined4 *)(param_1 + 8) = 0, *(int *)(param_1 + 0xc) != 0)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 4) != 0) {
      uVar1 = sub_0053df70(*(int *)(param_1 + 4),0,8);
      *(undefined4 *)(param_1 + 4) = uVar1;
    }
  }
  return;
}

struct C_0081f040 {
    int sub_0081f040();
};

// @baa 0x0081f040
int C_0081f040::sub_0081f040(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0081f060 {
    int sub_0081f060();
};

// @baa 0x0081f060
int C_0081f060::sub_0081f060(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_0081f070 {
    int sub_0081f070();
};

// @baa 0x0081f070
int C_0081f070::sub_0081f070(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + 4 + *(int *)*param_1;
}

struct C_0081f150 {
    int sub_0081f150();
};

// @baa 0x0081f150
int C_0081f150::sub_0081f150(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0081f170 {
    int sub_0081f170();
};

// @baa 0x0081f170
int C_0081f170::sub_0081f170(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_0081f180 {
    int sub_0081f180();
};

// @baa 0x0081f180
int C_0081f180::sub_0081f180(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + 4 + *(int *)*param_1;
}

struct C_0081f280 {
    int sub_0081f280(int);
    int sub_00819100(int, int);
};

// @baa 0x0081f280
int C_0081f280::sub_0081f280(int param_2)
{
    int * param_1 = (int *)this;
  ((C_0081f280 *)(this))->sub_00819100((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x1c;
  }
  return 0;
}

struct C_0081f3a0 {
    int sub_0081f3a0(int);
    int sub_00819300(int, int);
};

// @baa 0x0081f3a0
int C_0081f3a0::sub_0081f3a0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_0081f3a0 *)(this))->sub_00819300((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_0081f3d0 {
    int sub_0081f3d0(int);
    int sub_008193a0(int, int);
};

// @baa 0x0081f3d0
int C_0081f3d0::sub_0081f3d0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_0081f3d0 *)(this))->sub_008193a0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_0081f400 {
    int sub_0081f400(int);
    int sub_008193a0(int, int);
};

// @baa 0x0081f400
int C_0081f400::sub_0081f400(int param_2)
{
    int * param_1 = (int *)this;
  ((C_0081f400 *)(this))->sub_008193a0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct TConstSetBitIterator_0081f980 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0081f980(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0081f980& operator++();
};

TConstSetBitIterator_0081f980::TConstSetBitIterator_0081f980(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0081f980
TConstSetBitIterator_0081f980& TConstSetBitIterator_0081f980::operator++()
{
    It.Advance();
    return *this;
}
