// Engine_0670000.cpp: 83 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C {
    void sub_00672f30(int);
};

int sub_0053df70(...);
// @baa 0x00672f30
void C::sub_00672f30(int param_2)
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

struct C_00673020 {
    undefined4 sub_00673020(byte);
};

int sub_0053dfa0(...);
int sub_007249d0(void);
// @baa 0x00673020
undefined4 C_00673020::sub_00673020(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct A_00673040 { virtual void sub_00673020(); char pad[16]; };

struct B_00673040 { virtual void sub_00673020(); };

struct C_00673040 : A_00673040, B_00673040 { virtual void sub_00673020(); C_00673040(); };

C_00673040::C_00673040() {}

// @baa 0x00673040
void C_00673040::sub_00673020() {}

void sub_00665ea0();
// @baa 0x006730c0
void sub_006730c0(void) { sub_00665ea0(); }

void sub_00666150();
// @baa 0x006730d0
void sub_006730d0(void) { sub_00666150(); }

struct A_006731c0 { virtual void sub_006731d0(); char pad[16]; };

struct B_006731c0 { virtual void sub_006731d0(); };

struct C_006731c0 : A_006731c0, B_006731c0 { virtual void sub_006731d0(); C_006731c0(); };

C_006731c0::C_006731c0() {}

// @baa 0x006731c0
void C_006731c0::sub_006731d0() {}

// @baa 0x006731d0
undefined4 UTexture2D::sub_006731d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_006734c0(void);
// @baa 0x00673520
undefined4 UTexture2DComposite::sub_00673520(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006734c0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct B {
    virtual void s0() {}
    virtual void s1() {}
    virtual void s2() {}
    virtual void s3() {}
    virtual void s4() {}
    virtual void s5() {}
    virtual void s6() {}
    virtual void s7() {}
    virtual void s8() {}
    virtual void s9() {}
    virtual void s10() {}
    virtual void s11() {}
    virtual void s12() {}
    virtual void s13() {}
    virtual void s14() {}
    virtual void s15() {}
    virtual void s16() {}
    virtual void s17() {}
    virtual void s18() {}
    virtual void s19() {}
    virtual void s20() {}
    virtual void s21() {}
    virtual void s22() {}
    virtual void s23() {}
    virtual void s24() {}
    virtual void s25() {}
    virtual void s26();
};

struct C_00673600 {
    int unused;
    B* p;
    void sub_00673600();
};

// @baa 0x00673600
void C_00673600::sub_00673600()
{
    p->s26();
}

// @baa 0x00673610
void __stdcall sub_00673610(int a0) {  }

// @baa 0x00673620
void __stdcall sub_00673620(int a0) {  }

// @baa 0x00673630
void __stdcall sub_00673630(int a0) {  }

// @baa 0x00673640
void __stdcall sub_00673640(int a0) {  }

// @baa 0x00673650
int sub_00673650(void) { return 0; }

// @baa 0x00673660
void __stdcall sub_00673660(int a0) {  }

// @baa 0x00673670
void __stdcall sub_00673670(int a0) {  }

// @baa 0x00673680
void __stdcall sub_00673680(int a0) {  }

// @baa 0x00673690
void __stdcall sub_00673690(int a0, int a1) {  }

// @baa 0x006736a0
void __stdcall sub_006736a0(int a0) {  }

// @baa 0x006736b0
void __stdcall sub_006736b0(int a0) {  }

// @baa 0x006736c0
void __stdcall sub_006736c0(int a0) {  }

// @baa 0x006736d0
void __stdcall sub_006736d0(int a0) {  }

// @baa 0x006736e0
void __stdcall sub_006736e0(int a0) {  }

struct C_006736f0 { int a, b, c; C_006736f0(); };

// @baa 0x006736f0
C_006736f0::C_006736f0() : a(0), b(0), c(0) {}

struct C_00673700 { int sub_00673700(void); };

// @baa 0x00673700
int C_00673700::sub_00673700(void) { return *(int*)((char*)this + 0); }

struct C_00673710 { int sub_00673710(void); };

// @baa 0x00673710
int C_00673710::sub_00673710(void) { return *(int*)((char*)this + 0); }

struct C_00673720 {
    int sub_00673720(int);
};

// @baa 0x00673720
int C_00673720::sub_00673720(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct S {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00673730(INT Index);
};

// @baa 0x00673730
DWORD* S::sub_00673730(INT Index)
{
    return &Items(Index);
}

// @baa 0x00673780
void __stdcall sub_00673780(int a0, int a1) {  }

void sub_00666f10();
// @baa 0x00673cd0
void sub_00673cd0(void) { sub_00666f10(); }

void sub_00667050();
// @baa 0x00673ce0
void sub_00673ce0(void) { sub_00667050(); }

void sub_006671d0();
// @baa 0x00673cf0
void sub_00673cf0(void) { sub_006671d0(); }

struct C_006751f0 { void sub_00672a40(int); C_006751f0 *sub_006751f0(int); };

// @baa 0x006751f0
C_006751f0 *C_006751f0::sub_006751f0(int a) { sub_00672a40(a); return this; }

struct C_00675550 { void sub_00672ad0(int); C_00675550 *sub_00675550(int); };

// @baa 0x00675550
C_00675550 *C_00675550::sub_00675550(int a) { sub_00672ad0(a); return this; }

struct C_00675650 { void sub_00672b80(int); C_00675650 *sub_00675650(int); };

// @baa 0x00675650
C_00675650 *C_00675650::sub_00675650(int a) { sub_00672b80(a); return this; }

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00675670 { void* Data; int Num; int Max; void sub_00675670(); };

// @baa 0x00675670
void C_00675670::sub_00675670() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_006756d0 { void* Data; int Num; int Max; void sub_006756d0(); };

// @baa 0x006756d0
void C_006756d0::sub_006756d0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct Inner {
    int* data;
    Inner();
    ~Inner();
};

struct Outer_006757f0 : Inner {
    int num;
    int max;
    void sub_00672c30(int* p);
    Outer_006757f0(int* p);
};

Inner::Inner()
{
    data = 0;
}

// @baa 0x006757f0
Outer_006757f0::Outer_006757f0(int* p)
{
    num = 0;
    max = 0;
    sub_00672c30(p);
}

struct C_00675850 { C_00675850* sub_00675850(void); };

// @baa 0x00675850
C_00675850* C_00675850::sub_00675850(void) { return this; }

struct C_00675860 { void* Data; int Num; int Max; void sub_00675860(); };

// @baa 0x00675860
void C_00675860::sub_00675860() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_006758c0 { void* Data; int Num; int Max; void sub_006758c0(); };

// @baa 0x006758c0
void C_006758c0::sub_006758c0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00675920 { void* Data; int Num; int Max; void sub_00675920(); };

// @baa 0x00675920
void C_00675920::sub_00675920() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00675980 { void* Data; int Num; int Max; void sub_00675980(); };

// @baa 0x00675980
void C_00675980::sub_00675980() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_006759e0 { void* Data; int Num; int Max; void sub_006759e0(); };

// @baa 0x006759e0
void C_006759e0::sub_006759e0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x00675a40
undefined4 UObject::sub_00675a40(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

struct C_00675a50 { void* Data; int Num; int Max; void sub_00675a50(); };

// @baa 0x00675a50
void C_00675a50::sub_00675a50() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00675ab0 { void* Data; int Num; int Max; void sub_00675ab0(); };

// @baa 0x00675ab0
void C_00675ab0::sub_00675ab0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x00675b10
undefined4 UObject::sub_00675b10(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

struct Outer_00675b20 : Inner {
    int num;
    int max;
    void sub_00672cf0(int* p);
    Outer_00675b20(int* p);
};

// @baa 0x00675b20
Outer_00675b20::Outer_00675b20(int* p)
{
    num = 0;
    max = 0;
    sub_00672cf0(p);
}

struct C_00675b80 { void* Data; int Num; int Max; void sub_00675b80(); };

// @baa 0x00675b80
void C_00675b80::sub_00675b80() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00675be0 { void* Data; int Num; int Max; void sub_00675be0(); };

// @baa 0x00675be0
void C_00675be0::sub_00675be0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00675c40 { void* Data; int Num; int Max; void sub_00675c40(); };

// @baa 0x00675c40
void C_00675c40::sub_00675c40() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00675ca0 { void* Data; int Num; int Max; void sub_00675ca0(); };

// @baa 0x00675ca0
void C_00675ca0::sub_00675ca0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00675ff0 { void* Data; int Num; int Max; void sub_00675ff0(); };

// @baa 0x00675ff0
void C_00675ff0::sub_00675ff0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00676050 { void* Data; int Num; int Max; void sub_00676050(); };

// @baa 0x00676050
void C_00676050::sub_00676050() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_006760b0 { void* Data; int Num; int Max; void sub_006760b0(); };

// @baa 0x006760b0
void C_006760b0::sub_006760b0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_006761e0 { void* Data; int Num; int Max; void sub_006761e0(); };

// @baa 0x006761e0
void C_006761e0::sub_006761e0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_006764a0 { void sub_00672db0(int); C_006764a0 *sub_006764a0(int); };

// @baa 0x006764a0
C_006764a0 *C_006764a0::sub_006764a0(int a) { sub_00672db0(a); return this; }

struct C_006764c0 { void* Data; int Num; int Max; void sub_006764c0(); };

// @baa 0x006764c0
void C_006764c0::sub_006764c0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00676520 {
    void sub_00676520();
};

// @baa 0x00676520
void C_00676520::sub_00676520(void)
{
    int param_1 = (int)this;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

struct C_00676530 { void* Data; int Num; int Max; void sub_00676530(); };

// @baa 0x00676530
void C_00676530::sub_00676530() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0067ac40 { void* Data; int Num; int Max; void sub_0067ac40(); };

// @baa 0x0067ac40
void C_0067ac40::sub_0067ac40() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0067aca0 { void* Data; int Num; int Max; void sub_0067aca0(); };

// @baa 0x0067aca0
void C_0067aca0::sub_0067aca0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0067ad00 { void* Data; int Num; int Max; void sub_0067ad00(); };

// @baa 0x0067ad00
void C_0067ad00::sub_0067ad00() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0067ae20 { C_0067ae20* sub_0067ae20(void); };

// @baa 0x0067ae20
C_0067ae20* C_0067ae20::sub_0067ae20(void) { return this; }

struct C_0067ae30 { C_0067ae30* sub_0067ae30(void); };

// @baa 0x0067ae30
C_0067ae30* C_0067ae30::sub_0067ae30(void) { return this; }

struct C_0067ae40 { C_0067ae40* sub_0067ae40(void); };

// @baa 0x0067ae40
C_0067ae40* C_0067ae40::sub_0067ae40(void) { return this; }

struct C_0067ae50 { C_0067ae50* sub_0067ae50(void); };

// @baa 0x0067ae50
C_0067ae50* C_0067ae50::sub_0067ae50(void) { return this; }

// @baa 0x0067e5a0
void __stdcall sub_0067e5a0(int a0, int a1) {  }

struct C_0067e5b0 {
    int sub_0067e5b0(int);
};

// @baa 0x0067e5b0
int C_0067e5b0::sub_0067e5b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

// @baa 0x0067e5c0
void __stdcall sub_0067e5c0(int a0, int a1) {  }

struct C_0067e8a0 {
    int sub_0067e8a0(int);
};

// @baa 0x0067e8a0
int C_0067e8a0::sub_0067e8a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_0067e8b0 {
    int sub_0067e8b0(int);
};

// @baa 0x0067e8b0
int C_0067e8b0::sub_0067e8b0(int param_2)
{
    uint param_1 = (uint)this;

  return param_2 * 0x34 +
         (-(uint)(*(uint *)(param_1 + 0x34) == 0) & param_1 | *(uint *)(param_1 + 0x34));
}

struct C_0067e8d0 {
    int sub_0067e8d0(int);
};

// @baa 0x0067e8d0
int C_0067e8d0::sub_0067e8d0(int param_2)
{
    uint param_1 = (uint)this;

  return param_2 * 0x30 +
         (-(uint)(*(uint *)(param_1 + 0xc0) == 0) & param_1 | *(uint *)(param_1 + 0xc0));
}

int sub_00673150(void);
extern undefined4 g_01ebc510;
extern undefined * g_01ebc518;
// @baa 0x0067f120
undefined4 * UTexture2D::sub_0067f120(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00673150();
  *param_1 = (undefined4)(&g_01ebc518);
  param_1[5] = (undefined4)(&g_01ebc510);
  return param_1;
}

int sub_006697b0(void);
// @baa 0x0067f2b0
undefined4 UObject::sub_0067f2b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006697b0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_00675ff0();
// @baa 0x0067f350
void sub_0067f350(void) { sub_00675ff0(); }

// @baa 0x0067f3e0
int UTexture2D::sub_0067f3e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

// @baa 0x0067f4a0
int UTexture2D::sub_0067f4a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

// @baa 0x0067f610
void __stdcall sub_0067f610(int a0, int a1) {  }

struct C_0067fd40 { void* Data; int Num; int Max; void sub_0067fd40(); };

// @baa 0x0067fd40
void C_0067fd40::sub_0067fd40() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct M_0067fda0 { void sub_00675b80(); };

struct C_0067fda0 { char pad[8]; M_0067fda0 m; void sub_0067fda0(); };

// @baa 0x0067fda0
void C_0067fda0::sub_0067fda0() { m.sub_00675b80(); }

struct C_0067fff0 {
    int sub_0067fff0(int);
};

// @baa 0x0067fff0
int C_0067fff0::sub_0067fff0(int param_2)
{
    uint param_1 = (uint)this;

  return (-(uint)(*(uint *)(param_1 + 0x18) == 0) & param_1 | *(uint *)(param_1 + 0x18)) +
         param_2 * 4;
}
