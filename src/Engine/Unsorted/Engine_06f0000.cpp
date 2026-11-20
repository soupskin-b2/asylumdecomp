// Engine_06f0000.cpp (part 1 of 18): 232 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"
#include "ue3/Map.h"

void sub_006efb40();
// @baa 0x006f03f0
void sub_006f03f0(void) { sub_006efb40(); }

// @baa 0x006f0560
int sub_006f0560(void) { return 1690; }

struct C {
    int sub_006f0570();
};

// @baa 0x006f0570
int C::sub_006f0570(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x84) * 4;
}

struct C_006f0600 {
    int sub_006f0600();
};

// @baa 0x006f0600
int C_006f0600::sub_006f0600(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x84) * 4 + 0xa0;
}

// @baa 0x006f0610
void sub_006f0610(void) { sub_006efb40(); }

// @baa 0x006f1210
void sub_006f1210(void) { sub_006efb40(); }

void sub_0054cfe0();
// @baa 0x006f16e0
void sub_006f16e0(void) { sub_0054cfe0(); }

struct C_006f16f0 { int a, b, c; C_006f16f0(); };

// @baa 0x006f16f0
C_006f16f0::C_006f16f0() : a(0), b(0), c(0) {}

struct C_006f1700 { void sub_006edca0(int); C_006f1700 *sub_006f1700(int); };

// @baa 0x006f1700
C_006f1700 *C_006f1700::sub_006f1700(int a) { sub_006edca0(a); return this; }

struct C_006f1720 { C_006f1720* sub_006f1720(void); };

// @baa 0x006f1720
C_006f1720* C_006f1720::sub_006f1720(void) { return this; }

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_006f1730 { void* Data; int Num; int Max; void sub_006f1730(); };

// @baa 0x006f1730
void C_006f1730::sub_006f1730() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_006f1790 { void* Data; int Num; int Max; void sub_006f1790(); };

// @baa 0x006f1790
void C_006f1790::sub_006f1790() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_006f17f0 { void* Data; int Num; int Max; void sub_006f17f0(); };

// @baa 0x006f17f0
void C_006f17f0::sub_006f17f0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_006f1850 {
    undefined4 sub_006f1850();
};

// @baa 0x006f1850
undefined4 C_006f1850::sub_006f1850(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

struct C_006f1860 { C_006f1860* sub_006f1860(void); };

// @baa 0x006f1860
C_006f1860* C_006f1860::sub_006f1860(void) { return this; }

struct C_006f1870 { C_006f1870* sub_006f1870(void); };

// @baa 0x006f1870
C_006f1870* C_006f1870::sub_006f1870(void) { return this; }

struct C_006f1880 { C_006f1880* sub_006f1880(void); };

// @baa 0x006f1880
C_006f1880* C_006f1880::sub_006f1880(void) { return this; }

struct C_006f1890 { C_006f1890* sub_006f1890(void); };

// @baa 0x006f1890
C_006f1890* C_006f1890::sub_006f1890(void) { return this; }

struct C_006f18a0 { C_006f18a0* sub_006f18a0(void); };

// @baa 0x006f18a0
C_006f18a0* C_006f18a0::sub_006f18a0(void) { return this; }

struct C_006f18b0 { int a, b, c; C_006f18b0(); };

// @baa 0x006f18b0
C_006f18b0::C_006f18b0() : a(0), b(0), c(0) {}

struct C_006f1af0 {
    int sub_006f1af0(int);
};

// @baa 0x006f1af0
int C_006f1af0::sub_006f1af0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_006f1b00 {
    int sub_006f1b00(int);
};

// @baa 0x006f1b00
int C_006f1b00::sub_006f1b00(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_006f1b10 {
    int sub_006f1b10(int);
};

// @baa 0x006f1b10
int C_006f1b10::sub_006f1b10(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_006f1b20 {
    int sub_006f1b20(int);
};

// @baa 0x006f1b20
int C_006f1b20::sub_006f1b20(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x3c;
}

struct C_006f1b40 {
    int sub_006f1b40(int);
};

// @baa 0x006f1b40
int C_006f1b40::sub_006f1b40(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x48;
}

struct C_006f1b50 {
    int sub_006f1b50(int);
};

// @baa 0x006f1b50
int C_006f1b50::sub_006f1b50(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_006f1b60 {
    int sub_006f1b60();
};

// @baa 0x006f1b60
int C_006f1b60::sub_006f1b60(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_006f1b80 {
    int sub_006f1b80();
};

// @baa 0x006f1b80
int C_006f1b80::sub_006f1b80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct A_006f1c30 { virtual void sub_006f1c90(); char pad[16]; };

struct B_006f1c30 { virtual void sub_006f1c90(); };

struct C_006f1c30 : A_006f1c30, B_006f1c30 { virtual void sub_006f1c90(); C_006f1c30(); };

C_006f1c30::C_006f1c30() {}

// @baa 0x006f1c30
void C_006f1c30::sub_006f1c90() {}

void sub_007249d0();
// @baa 0x006f1c40
void sub_006f1c40(void) { sub_007249d0(); }

struct A_006f1d50 { virtual void sub_006f1db0(); char pad[16]; };

struct B_006f1d50 { virtual void sub_006f1db0(); };

struct C_006f1d50 : A_006f1d50, B_006f1d50 { virtual void sub_006f1db0(); C_006f1d50(); };

C_006f1d50::C_006f1d50() {}

// @baa 0x006f1d50
void C_006f1d50::sub_006f1db0() {}

struct A_006f1e70 { virtual void sub_006f1ed0(); char pad[16]; };

struct B_006f1e70 { virtual void sub_006f1ed0(); };

struct C_006f1e70 : A_006f1e70, B_006f1e70 { virtual void sub_006f1ed0(); C_006f1e70(); };

C_006f1e70::C_006f1e70() {}

// @baa 0x006f1e70
void C_006f1e70::sub_006f1ed0() {}

struct A_006f1f90 { virtual void sub_006f1ff0(); char pad[16]; };

struct B_006f1f90 { virtual void sub_006f1ff0(); };

struct C_006f1f90 : A_006f1f90, B_006f1f90 { virtual void sub_006f1ff0(); C_006f1f90(); };

C_006f1f90::C_006f1f90() {}

// @baa 0x006f1f90
void C_006f1f90::sub_006f1ff0() {}

struct A_006f20b0 { virtual void sub_006f2110(); char pad[16]; };

struct B_006f20b0 { virtual void sub_006f2110(); };

struct C_006f20b0 : A_006f20b0, B_006f20b0 { virtual void sub_006f2110(); C_006f20b0(); };

C_006f20b0::C_006f20b0() {}

// @baa 0x006f20b0
void C_006f20b0::sub_006f2110() {}

struct A_006f21d0 { virtual void sub_006f2230(); char pad[16]; };

struct B_006f21d0 { virtual void sub_006f2230(); };

struct C_006f21d0 : A_006f21d0, B_006f21d0 { virtual void sub_006f2230(); C_006f21d0(); };

C_006f21d0::C_006f21d0() {}

// @baa 0x006f21d0
void C_006f21d0::sub_006f2230() {}

struct A_006f22f0 { virtual void sub_006f2350(); char pad[16]; };

struct B_006f22f0 { virtual void sub_006f2350(); };

struct C_006f22f0 : A_006f22f0, B_006f22f0 { virtual void sub_006f2350(); C_006f22f0(); };

C_006f22f0::C_006f22f0() {}

// @baa 0x006f22f0
void C_006f22f0::sub_006f2350() {}

struct A_006f2410 { virtual void sub_006f2470(); char pad[16]; };

struct B_006f2410 { virtual void sub_006f2470(); };

struct C_006f2410 : A_006f2410, B_006f2410 { virtual void sub_006f2470(); C_006f2410(); };

C_006f2410::C_006f2410() {}

// @baa 0x006f2410
void C_006f2410::sub_006f2470() {}

struct A_006f2530 { virtual void sub_006f2590(); char pad[16]; };

struct B_006f2530 { virtual void sub_006f2590(); };

struct C_006f2530 : A_006f2530, B_006f2530 { virtual void sub_006f2590(); C_006f2530(); };

C_006f2530::C_006f2530() {}

// @baa 0x006f2530
void C_006f2530::sub_006f2590() {}

int sub_0053dfa0(...);
int sub_006ecd80(void);
struct C_006f25b0 { undefined4 sub_006f25b0(byte param_2); };
// @baa 0x006f25b0
undefined4 C_006f25b0::sub_006f25b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006ecd80();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_006f2650 { int sub_006f2650(int param_2); };
// @baa 0x006f2650
int C_006f2650::sub_006f2650(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_006f26e0 { int sub_006f26e0(int param_2); };
// @baa 0x006f26e0
int C_006f26e0::sub_006f26e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_006f2770 { int sub_006f2770(int param_2); };
// @baa 0x006f2770
int C_006f2770::sub_006f2770(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_006f2810 { int sub_006f2810(int param_2); };
// @baa 0x006f2810
int C_006f2810::sub_006f2810(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x3c;
}

struct C_006f2830 { void* Data; int Num; int Max; void sub_006f2830(); };

// @baa 0x006f2830
void C_006f2830::sub_006f2830() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_006f2910 {
    int sub_006f2910(int);
};

// @baa 0x006f2910
int C_006f2910::sub_006f2910(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x48;
}

struct C_006f29a0 {
    int sub_006f29a0(int);
};

// @baa 0x006f29a0
int C_006f29a0::sub_006f29a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_006f2d10 {
    void sub_006f2d10(int);
};

int sub_0053df70(...);
// @baa 0x006f2d10
void C_006f2d10::sub_006f2d10(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x3c,8);
      *param_1 = iVar1;
    }
  }
  return;
}

/* Out-of-line copies of TSparseArray<T>::TConstIterator's constructor and operator++ (one per element type; the code doesn't
 * depend on it, so INT stands in for the unknown T). */


struct FSparseArrayConstIt_006f2e70 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006f2e70& operator++();
};

// @baa 0x006f2e70
FSparseArrayConstIt_006f2e70& FSparseArrayConstIt_006f2e70::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_006f2e90 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006f2e90& operator++();
};

// @baa 0x006f2e90
FSparseArrayConstIt_006f2e90& FSparseArrayConstIt_006f2e90::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_006f2eb0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006f2eb0& operator++();
};

// @baa 0x006f2eb0
FSparseArrayConstIt_006f2eb0& FSparseArrayConstIt_006f2eb0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_006f2ed0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006f2ed0& operator++();
};

// @baa 0x006f2ed0
FSparseArrayConstIt_006f2ed0& FSparseArrayConstIt_006f2ed0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_006f2ef0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006f2ef0& operator++();
};

// @baa 0x006f2ef0
FSparseArrayConstIt_006f2ef0& FSparseArrayConstIt_006f2ef0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_006f2f10 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006f2f10& operator++();
};

// @baa 0x006f2f10
FSparseArrayConstIt_006f2f10& FSparseArrayConstIt_006f2f10::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_006f2f30 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006f2f30& operator++();
};

// @baa 0x006f2f30
FSparseArrayConstIt_006f2f30& FSparseArrayConstIt_006f2f30::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct C_006f2f50 { void* Data; int Num; int Max; void sub_006f2f50(); };

// @baa 0x006f2f50
void C_006f2f50::sub_006f2f50() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_006f2fb0 { void* Data; int Num; int Max; void sub_006f2fb0(); };

// @baa 0x006f2fb0
void C_006f2fb0::sub_006f2fb0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_006f3010 { void* Data; int Num; int Max; void sub_006f3010(); };

// @baa 0x006f3010
void C_006f3010::sub_006f3010() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct FSparseArrayConstIt_006f3070 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006f3070(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x006f3070
FSparseArrayConstIt_006f3070::FSparseArrayConstIt_006f3070(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_006f30c0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006f30c0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x006f30c0
FSparseArrayConstIt_006f30c0::FSparseArrayConstIt_006f30c0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_006f3110 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006f3110(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x006f3110
FSparseArrayConstIt_006f3110::FSparseArrayConstIt_006f3110(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_006f3160 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006f3160(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x006f3160
FSparseArrayConstIt_006f3160::FSparseArrayConstIt_006f3160(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_006f31b0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006f31b0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x006f31b0
FSparseArrayConstIt_006f31b0::FSparseArrayConstIt_006f31b0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_006f3200 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006f3200(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x006f3200
FSparseArrayConstIt_006f3200::FSparseArrayConstIt_006f3200(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_006f3250 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006f3250(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x006f3250
FSparseArrayConstIt_006f3250::FSparseArrayConstIt_006f3250(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_006f32a0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006f32a0& operator++();
};

// @baa 0x006f32a0
FSparseArrayConstIt_006f32a0& FSparseArrayConstIt_006f32a0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_006f32c0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006f32c0& operator++();
};

// @baa 0x006f32c0
FSparseArrayConstIt_006f32c0& FSparseArrayConstIt_006f32c0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_006f32e0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006f32e0& operator++();
};

// @baa 0x006f32e0
FSparseArrayConstIt_006f32e0& FSparseArrayConstIt_006f32e0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_006f3300 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006f3300& operator++();
};

// @baa 0x006f3300
FSparseArrayConstIt_006f3300& FSparseArrayConstIt_006f3300::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_006f3320 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006f3320& operator++();
};

// @baa 0x006f3320
FSparseArrayConstIt_006f3320& FSparseArrayConstIt_006f3320::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_006f3340 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006f3340& operator++();
};

// @baa 0x006f3340
FSparseArrayConstIt_006f3340& FSparseArrayConstIt_006f3340::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_006f3360 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006f3360& operator++();
};

// @baa 0x006f3360
FSparseArrayConstIt_006f3360& FSparseArrayConstIt_006f3360::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct C_006f3380 {
    int sub_006f3380();
};

// @baa 0x006f3380
int C_006f3380::sub_006f3380(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x50 + *(int *)*param_1;
}

struct FSparseArrayConstIt_006f3390 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006f3390& operator++();
};

// @baa 0x006f3390
FSparseArrayConstIt_006f3390& FSparseArrayConstIt_006f3390::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct C_006f33b0 {
    int sub_006f33b0();
};

// @baa 0x006f33b0
int C_006f33b0::sub_006f33b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x50 + *(int *)*param_1;
}

struct FSparseArrayConstIt_006f33c0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006f33c0& operator++();
};

// @baa 0x006f33c0
FSparseArrayConstIt_006f33c0& FSparseArrayConstIt_006f33c0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct C_006f33e0 {
    int sub_006f33e0();
};

// @baa 0x006f33e0
int C_006f33e0::sub_006f33e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x50 + *(int *)*param_1;
}

struct FSparseArrayConstIt_006f33f0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006f33f0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x006f33f0
FSparseArrayConstIt_006f33f0::FSparseArrayConstIt_006f33f0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_006f3560 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006f3560(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x006f3560
FSparseArrayConstIt_006f3560::FSparseArrayConstIt_006f3560(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_006f35b0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006f35b0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x006f35b0
FSparseArrayConstIt_006f35b0::FSparseArrayConstIt_006f35b0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_006f3600 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006f3600(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x006f3600
FSparseArrayConstIt_006f3600::FSparseArrayConstIt_006f3600(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_006f3650 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006f3650(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x006f3650
FSparseArrayConstIt_006f3650::FSparseArrayConstIt_006f3650(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_006f36a0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006f36a0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x006f36a0
FSparseArrayConstIt_006f36a0::FSparseArrayConstIt_006f36a0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_006f36f0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006f36f0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x006f36f0
FSparseArrayConstIt_006f36f0::FSparseArrayConstIt_006f36f0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_006f3740 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006f3740(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x006f3740
FSparseArrayConstIt_006f3740::FSparseArrayConstIt_006f3740(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_006f3790 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006f3790(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x006f3790
FSparseArrayConstIt_006f3790::FSparseArrayConstIt_006f3790(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_006f37e0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006f37e0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x006f37e0
FSparseArrayConstIt_006f37e0::FSparseArrayConstIt_006f37e0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct C_006f3a90 {
    int sub_006f3a90(int);
    int sub_006edde0(int, int);
};

// @baa 0x006f3a90
int C_006f3a90::sub_006f3a90(int param_2)
{
    int * param_1 = (int *)this;
  ((C_006f3a90 *)(this))->sub_006edde0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct FSparseArrayConstIt_006f3ac0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006f3ac0& operator++();
};

// @baa 0x006f3ac0
FSparseArrayConstIt_006f3ac0& FSparseArrayConstIt_006f3ac0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_006f3ae0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006f3ae0& operator++();
};

// @baa 0x006f3ae0
FSparseArrayConstIt_006f3ae0& FSparseArrayConstIt_006f3ae0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_006f3b00 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006f3b00(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x006f3b00
FSparseArrayConstIt_006f3b00::FSparseArrayConstIt_006f3b00(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_006f3b50 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006f3b50(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x006f3b50
FSparseArrayConstIt_006f3b50::FSparseArrayConstIt_006f3b50(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

void sub_006f1730();
// @baa 0x006f3ba0
void sub_006f3ba0(void) { sub_006f1730(); }

void sub_006f1790();
// @baa 0x006f3bb0
void sub_006f3bb0(void) { sub_006f1790(); }

void sub_006f17f0();
// @baa 0x006f3bc0
void sub_006f3bc0(void) { sub_006f17f0(); }

struct C_006f4220 { C_006f4220* sub_006f4220(void); };

// @baa 0x006f4220
C_006f4220* C_006f4220::sub_006f4220(void) { return this; }

struct C_006f4230 { C_006f4230* sub_006f4230(void); };

// @baa 0x006f4230
C_006f4230* C_006f4230::sub_006f4230(void) { return this; }

struct C_006f4240 { C_006f4240* sub_006f4240(void); };

// @baa 0x006f4240
C_006f4240* C_006f4240::sub_006f4240(void) { return this; }

struct C_006f4250 { C_006f4250* sub_006f4250(void); };

// @baa 0x006f4250
C_006f4250* C_006f4250::sub_006f4250(void) { return this; }

struct C_006f42c0 { C_006f42c0* sub_006f42c0(void); };

// @baa 0x006f42c0
C_006f42c0* C_006f42c0::sub_006f42c0(void) { return this; }

struct C_006f4330 {
    int sub_006f4330();
};

// @baa 0x006f4330
int C_006f4330::sub_006f4330(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_006f4350 {
    int sub_006f4350();
};

// @baa 0x006f4350
int C_006f4350::sub_006f4350(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_006f5060 { void sub_006f3830(int); C_006f5060 *sub_006f5060(int); };

// @baa 0x006f5060
C_006f5060 *C_006f5060::sub_006f5060(int a) { sub_006f3830(a); return this; }

struct C_006f5080 { void sub_006f3960(int); C_006f5080 *sub_006f5080(int); };

// @baa 0x006f5080
C_006f5080 *C_006f5080::sub_006f5080(int a) { sub_006f3960(a); return this; }

struct C_view {
    int sub_006f25d0(int, int);
};

struct C_006f50a0 { int sub_006f50a0(int param_2); };
// @baa 0x006f50a0
int C_006f50a0::sub_006f50a0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view *)(this))->sub_006f25d0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x20 + *param_1;
  }
  return 0;
}

struct C_006f50d0 {
    int sub_006f50d0(int);
    int sub_006f2660(int, int);
};

// @baa 0x006f50d0
int C_006f50d0::sub_006f50d0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_006f50d0 *)(this))->sub_006f2660((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x14;
  }
  return 0;
}

struct C_006f5100 {
    int sub_006f5100(int);
    int sub_006f26f0(int, int);
};

// @baa 0x006f5100
int C_006f5100::sub_006f5100(int param_2)
{
    int * param_1 = (int *)this;
  ((C_006f5100 *)(this))->sub_006f26f0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x14;
  }
  return 0;
}

struct C_006f5130 {
    int sub_006f5130(int);
    int sub_006f2780(int, int);
};

// @baa 0x006f5130
int C_006f5130::sub_006f5130(int param_2)
{
    int * param_1 = (int *)this;
  ((C_006f5130 *)(this))->sub_006f2780((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x3c;
  }
  return 0;
}

struct C_006f5170 {
    int sub_006f5170(int);
    int sub_006f2890(int, int);
};

// @baa 0x006f5170
int C_006f5170::sub_006f5170(int param_2)
{
    int * param_1 = (int *)this;
  ((C_006f5170 *)(this))->sub_006f2890((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x48;
  }
  return 0;
}

struct C_006f51a0 {
    int sub_006f51a0(int);
    int sub_006f2920(int, int);
};

// @baa 0x006f51a0
int C_006f51a0::sub_006f51a0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_006f51a0 *)(this))->sub_006f2920((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x14;
  }
  return 0;
}

struct C_006f53a0 {
    void sub_006f53a0(undefined4);
};

int sub_00716170(...);
// @baa 0x006f53a0
void C_006f53a0::sub_006f53a0(undefined4 param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00716170(param_2,param_1);
  return;
}

struct C_006f53c0 {
    undefined4 sub_006f53c0(undefined4);
    int sub_0073f030(int);
};

int sub_007161b0(...);
int sub_00a49bb0(...);
// @baa 0x006f53c0
undefined4 C_006f53c0::sub_006f53c0(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_006f53c0 *)(this))->sub_0073f030(param_2);
  sub_00716170(param_2,param_1 + 0x4c);
  sub_00a49bb0(param_2,param_1 + 0x54);
  sub_007161b0(param_2,param_1 + 0xc0);
  return uVar1;
}

struct A_006f5400 { virtual void sub_006f81d0(); char pad[16]; };

struct B_006f5400 { virtual void sub_006f81d0(); };

struct C_006f5400 : A_006f5400, B_006f5400 { virtual void sub_006f81d0(); C_006f5400(); };

C_006f5400::C_006f5400() {}

// @baa 0x006f5400
void C_006f5400::sub_006f81d0() {}

struct C_006f5640 {
    undefined4 sub_006f5640(undefined4);
    int sub_0073f030(int);
};

// @baa 0x006f5640
undefined4 C_006f5640::sub_006f5640(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_006f5640 *)(this))->sub_0073f030(param_2);
  sub_00716170(param_2,param_1 + 0x4c);
  sub_007161b0(param_2,param_1 + 0x52);
  sub_00a49bb0(param_2,param_1 + 0x58);
  sub_007161b0(param_2,param_1 + 0xc4);
  return uVar1;
}

struct A_006f5690 { virtual void sub_006f81f0(); char pad[16]; };

struct B_006f5690 { virtual void sub_006f81f0(); };

struct C_006f5690 : A_006f5690, B_006f5690 { virtual void sub_006f81f0(); C_006f5690(); };

C_006f5690::C_006f5690() {}

// @baa 0x006f5690
void C_006f5690::sub_006f81f0() {}

struct C_006f58d0 {
    undefined4 sub_006f58d0(undefined4);
    int sub_0073f030(int);
};

// @baa 0x006f58d0
undefined4 C_006f58d0::sub_006f58d0(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_006f58d0 *)(this))->sub_0073f030(param_2);
  sub_00716170(param_2,param_1 + 0x4c);
  sub_00a49bb0(param_2,param_1 + 0x54);
  sub_007161b0(param_2,param_1 + 0xc0);
  return uVar1;
}

struct A_006f5910 { virtual void sub_006f8210(); char pad[16]; };

struct B_006f5910 { virtual void sub_006f8210(); };

struct C_006f5910 : A_006f5910, B_006f5910 { virtual void sub_006f8210(); C_006f5910(); };

C_006f5910::C_006f5910() {}

// @baa 0x006f5910
void C_006f5910::sub_006f8210() {}

int sub_00673150(void);
extern undefined4 g_01ed9870;
extern undefined * g_01ed9878;
struct C_006f5a20 { undefined4 * sub_006f5a20(void); };
// @baa 0x006f5a20
undefined4 * C_006f5a20::sub_006f5a20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00673150();
  *(undefined2 *)(param_1 + 0x1f) = 0;
  *(undefined2 *)((int)param_1 + 0x82) = 0;
  *param_1 = (undefined4)(&g_01ed9878);
  param_1[5] = (undefined4)(&g_01ed9870);
  return param_1;
}

struct FSparseArrayConstIt_006f65d0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006f65d0& operator++();
};

// @baa 0x006f65d0
FSparseArrayConstIt_006f65d0& FSparseArrayConstIt_006f65d0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_006f6710 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006f6710(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x006f6710
FSparseArrayConstIt_006f6710::FSparseArrayConstIt_006f6710(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_006f6760 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006f6760(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x006f6760
FSparseArrayConstIt_006f6760::FSparseArrayConstIt_006f6760(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_006f67b0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006f67b0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x006f67b0
FSparseArrayConstIt_006f67b0::FSparseArrayConstIt_006f67b0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_006f6800 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006f6800(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x006f6800
FSparseArrayConstIt_006f6800::FSparseArrayConstIt_006f6800(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_006f6850 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006f6850(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x006f6850
FSparseArrayConstIt_006f6850::FSparseArrayConstIt_006f6850(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_006f68a0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006f68a0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x006f68a0
FSparseArrayConstIt_006f68a0::FSparseArrayConstIt_006f68a0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_006f68f0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006f68f0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x006f68f0
FSparseArrayConstIt_006f68f0::FSparseArrayConstIt_006f68f0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_006f6be0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006f6be0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x006f6be0
FSparseArrayConstIt_006f6be0::FSparseArrayConstIt_006f6be0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_006f6ea0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006f6ea0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x006f6ea0
FSparseArrayConstIt_006f6ea0::FSparseArrayConstIt_006f6ea0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_006f6ef0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006f6ef0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x006f6ef0
FSparseArrayConstIt_006f6ef0::FSparseArrayConstIt_006f6ef0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_006f6f40 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006f6f40(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x006f6f40
FSparseArrayConstIt_006f6f40::FSparseArrayConstIt_006f6f40(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_006f6f90 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006f6f90(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x006f6f90
FSparseArrayConstIt_006f6f90::FSparseArrayConstIt_006f6f90(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_006f6fe0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006f6fe0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x006f6fe0
FSparseArrayConstIt_006f6fe0::FSparseArrayConstIt_006f6fe0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_006f7030 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006f7030(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x006f7030
FSparseArrayConstIt_006f7030::FSparseArrayConstIt_006f7030(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_006f7080 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006f7080(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x006f7080
FSparseArrayConstIt_006f7080::FSparseArrayConstIt_006f7080(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_006f70d0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006f70d0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x006f70d0
FSparseArrayConstIt_006f70d0::FSparseArrayConstIt_006f70d0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_006f7120 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006f7120(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x006f7120
FSparseArrayConstIt_006f7120::FSparseArrayConstIt_006f7120(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_006f72b0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006f72b0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x006f72b0
FSparseArrayConstIt_006f72b0::FSparseArrayConstIt_006f72b0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_006f7300 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006f7300(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x006f7300
FSparseArrayConstIt_006f7300::FSparseArrayConstIt_006f7300(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

// @baa 0x006f7350
IMPLEMENT_CLASS_AT(UDrawConeComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\PrimitiveComponent.cpp", 20);

// @baa 0x006f73b0
struct C_006f73e0 { C_006f73e0* sub_006f73e0(void); };

// @baa 0x006f73e0
C_006f73e0* C_006f73e0::sub_006f73e0(void) { return this; }

// @baa 0x006f73f0
void sub_006f73f0(void) { sub_006f17f0(); }

struct C_006f7400 { C_006f7400* sub_006f7400(void); };

// @baa 0x006f7400
C_006f7400* C_006f7400::sub_006f7400(void) { return this; }

struct C_006f7410 { void sub_006f4260(int); C_006f7410 *sub_006f7410(int); };

// @baa 0x006f7410
C_006f7410 *C_006f7410::sub_006f7410(int a) { sub_006f4260(a); return this; }

struct C_006f7430 { C_006f7430* sub_006f7430(void); };

// @baa 0x006f7430
C_006f7430* C_006f7430::sub_006f7430(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_006f7440 { C_006f7440* sub_006f7440(void); };

// @baa 0x006f7440
C_006f7440* C_006f7440::sub_006f7440(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_006f7450 { void sub_006f42d0(int); C_006f7450 *sub_006f7450(int); };

// @baa 0x006f7450
C_006f7450 *C_006f7450::sub_006f7450(int a) { sub_006f42d0(a); return this; }

struct M_006f7500 { void sub_006c4cf0(); };

struct C_006f7500 { char pad[28]; M_006f7500 m; void sub_006f7500(); };

// @baa 0x006f7500
void C_006f7500::sub_006f7500() { m.sub_006c4cf0(); }

struct M_006f7560 { void sub_006f17f0(); };

struct C_006f7560 { char pad[40]; M_006f7560 m; void sub_006f7560(); };

// @baa 0x006f7560
void C_006f7560::sub_006f7560() { m.sub_006f17f0(); }

void sub_006c4cf0();
// @baa 0x006f75c0
void sub_006f75c0(void) { sub_006c4cf0(); }

// @baa 0x006f75d0
void sub_006f75d0(void) { sub_006f17f0(); }

struct C_006f7930 {
    undefined4 sub_006f7930(undefined4);
    int sub_006f3830(int);
};

// @baa 0x006f7930
undefined4 C_006f7930::sub_006f7930(undefined4 param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_006f7930 *)(this))->sub_006f3830(param_2);
  return param_1;
}

struct C_006f7950 { void sub_006f3960(int); C_006f7950 *sub_006f7950(int); };

// @baa 0x006f7950
C_006f7950 *C_006f7950::sub_006f7950(int a) { sub_006f3960(a); return this; }

struct C_006f79b0 {
    int sub_006f79b0(int);
    int sub_006f2660(int, int);
};

// @baa 0x006f79b0
int C_006f79b0::sub_006f79b0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_006f79b0 *)(this))->sub_006f2660((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x14, iVar1 != 0)) {
    return iVar1 + 8;
  }
  return 0;
}

struct C_006f79f0 {
    undefined4 sub_006f79f0(int);
    int sub_006f26f0(int, int);
};

// @baa 0x006f79f0
undefined4 C_006f79f0::sub_006f79f0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_006f79f0 *)(this))->sub_006f26f0((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x14, iVar1 != 0)) {
    return *(undefined4 *)(iVar1 + 8);
  }
  return 0;
}

struct C_006f7a30 {
    int sub_006f7a30(int);
    int sub_006f2780(int, int);
};

// @baa 0x006f7a30
int C_006f7a30::sub_006f7a30(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_006f7a30 *)(this))->sub_006f2780((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x3c, iVar1 != 0)) {
    return iVar1 + 8;
  }
  return 0;
}

struct C_006f7a70 {
    int sub_006f7a70(int);
    int sub_006f2890(int, int);
};

// @baa 0x006f7a70
int C_006f7a70::sub_006f7a70(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_006f7a70 *)(this))->sub_006f2890((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x48, iVar1 != 0)) {
    return iVar1 + 8;
  }
  return 0;
}

struct C_006f7ad0 {
    undefined4 sub_006f7ad0(int);
    int sub_006f2920(int, int);
};

// @baa 0x006f7ad0
undefined4 C_006f7ad0::sub_006f7ad0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_006f7ad0 *)(this))->sub_006f2920((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x14, iVar1 != 0)) {
    return *(undefined4 *)(iVar1 + 8);
  }
  return 0;
}

extern "C" int __cdecl sub_0053df40(int Size, int Alignment);
struct FGameplayObject
{
    FGameplayObject * sub_006f5280();
};

// @baa 0x006f7b70
FGameplayObject * sub_006f7b70()
{
    FGameplayObject * pObject = (FGameplayObject *)sub_0053df40(0x5c, 8);
    if (pObject)
        return pObject->sub_006f5280();
    return 0;
}

struct FGameplayObject_006f7b90
{
    FGameplayObject_006f7b90 * sub_006f52e0();
};

// @baa 0x006f7b90
FGameplayObject_006f7b90 * sub_006f7b90()
{
    FGameplayObject_006f7b90 * pObject = (FGameplayObject_006f7b90 *)sub_0053df40(0xc8, 8);
    if (pObject)
        return pObject->sub_006f52e0();
    return 0;
}

struct FGameplayObject_006f7c20
{
    FGameplayObject_006f7c20 * sub_006f5510();
};

// @baa 0x006f7c20
FGameplayObject_006f7c20 * sub_006f7c20()
{
    FGameplayObject_006f7c20 * pObject = (FGameplayObject_006f7c20 *)sub_0053df40(0x60, 8);
    if (pObject)
        return pObject->sub_006f5510();
    return 0;
}

struct FGameplayObject_006f7c40
{
    FGameplayObject_006f7c40 * sub_006f5570();
};

// @baa 0x006f7c40
FGameplayObject_006f7c40 * sub_006f7c40()
{
    FGameplayObject_006f7c40 * pObject = (FGameplayObject_006f7c40 *)sub_0053df40(0xcc, 8);
    if (pObject)
        return pObject->sub_006f5570();
    return 0;
}

struct FGameplayObject_006f7cd0
{
    FGameplayObject_006f7cd0 * sub_006f57b0();
};

// @baa 0x006f7cd0
FGameplayObject_006f7cd0 * sub_006f7cd0()
{
    FGameplayObject_006f7cd0 * pObject = (FGameplayObject_006f7cd0 *)sub_0053df40(0x5c, 8);
    if (pObject)
        return pObject->sub_006f57b0();
    return 0;
}

struct FGameplayObject_006f7cf0
{
    FGameplayObject_006f7cf0 * sub_006f5810();
};

// @baa 0x006f7cf0
FGameplayObject_006f7cf0 * sub_006f7cf0()
{
    FGameplayObject_006f7cf0 * pObject = (FGameplayObject_006f7cf0 *)sub_0053df40(0xc8, 8);
    if (pObject)
        return pObject->sub_006f5810();
    return 0;
}

struct FSparseArrayConstIt_006f7f80 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006f7f80& operator++();
};

// @baa 0x006f7f80
FSparseArrayConstIt_006f7f80& FSparseArrayConstIt_006f7f80::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct C_006f8130 {
    void sub_006f8130();
    int sub_006f5e40(int);
};

// @baa 0x006f8130
void C_006f8130::sub_006f8130(void)
{
    int param_1 = (int)this;
  ((C_006f8130 *)((*(char **)((char *)this + 0x10))))->sub_006f5e40(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_006f8150 {
    void sub_006f8150();
    int sub_006f5fa0(int);
};

// @baa 0x006f8150
void C_006f8150::sub_006f8150(void)
{
    int param_1 = (int)this;
  ((C_006f8150 *)((*(char **)((char *)this + 0x10))))->sub_006f5fa0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_006f8170 {
    void sub_006f8170();
    int sub_006f6110(int);
};

// @baa 0x006f8170
void C_006f8170::sub_006f8170(void)
{
    int param_1 = (int)this;
  ((C_006f8170 *)((*(char **)((char *)this + 0x10))))->sub_006f6110(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_006f8190 {
    void sub_006f8190();
    int sub_006f6460(int);
};

// @baa 0x006f8190
void C_006f8190::sub_006f8190(void)
{
    int param_1 = (int)this;
  ((C_006f8190 *)((*(char **)((char *)this + 0x10))))->sub_006f6460(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct M_006f81b0 { void sub_006c4cf0(); };

struct C_006f81b0 { char pad[36]; M_006f81b0 m; void sub_006f81b0(); };

// @baa 0x006f81b0
void C_006f81b0::sub_006f81b0() { m.sub_006c4cf0(); }

struct M_006f81c0 { void sub_006f17f0(); };

struct C_006f81c0 { char pad[48]; M_006f81c0 m; void sub_006f81c0(); };

// @baa 0x006f81c0
void C_006f81c0::sub_006f81c0() { m.sub_006f17f0(); }

struct C_006f81d0 {
    undefined4 sub_006f81d0(byte);
};

int sub_006f5c40(void);
// @baa 0x006f81d0
undefined4 C_006f81d0::sub_006f81d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006f5c40();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_006f81f0 {
    undefined4 sub_006f81f0(byte);
};

int sub_006f5ca0(void);
// @baa 0x006f81f0
undefined4 C_006f81f0::sub_006f81f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006f5ca0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_006f8210 {
    undefined4 sub_006f8210(byte);
};

int sub_006f5d00(void);
// @baa 0x006f8210
undefined4 C_006f8210::sub_006f8210(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006f5d00();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct M_006f8230 { void sub_006c4cf0(); };

struct C_006f8230 { char pad[40]; M_006f8230 m; void sub_006f8230(); };

// @baa 0x006f8230
void C_006f8230::sub_006f8230() { m.sub_006c4cf0(); }

struct M_006f8240 { void sub_006f17f0(); };

struct C_006f8240 { char pad[52]; M_006f8240 m; void sub_006f8240(); };

// @baa 0x006f8240
void C_006f8240::sub_006f8240() { m.sub_006f17f0(); }

struct M_006f8540 { void sub_006c4cf0(); };

struct C_006f8540 { char pad[36]; M_006f8540 m; void sub_006f8540(); };

// @baa 0x006f8540
void C_006f8540::sub_006f8540() { m.sub_006c4cf0(); }

struct M_006f8550 { void sub_006f17f0(); };

struct C_006f8550 { char pad[48]; M_006f8550 m; void sub_006f8550(); };

// @baa 0x006f8550
void C_006f8550::sub_006f8550() { m.sub_006f17f0(); }

struct FSparseArrayConstIt_006f8ed0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006f8ed0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x006f8ed0
FSparseArrayConstIt_006f8ed0::FSparseArrayConstIt_006f8ed0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct C_006f90a0 {
    undefined4 sub_006f90a0(byte);
    int sub_006c4cf0();
};

// @baa 0x006f90a0
undefined4 C_006f90a0::sub_006f90a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_006f90a0 *)(((char *)this + 0x24)))->sub_006c4cf0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_006f90d0 {
    undefined4 sub_006f90d0(byte);
    int sub_006f17f0();
};

// @baa 0x006f90d0
undefined4 C_006f90d0::sub_006f90d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_006f90d0 *)(((char *)this + 0x30)))->sub_006f17f0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x006f9300
IMPLEMENT_CLASS_AT(UCylinderComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\PrimitiveComponent.cpp", 17);

// @baa 0x006f93b0
IMPLEMENT_CLASS_AT(UArrowComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\PrimitiveComponent.cpp", 18);

// @baa 0x006f9460
IMPLEMENT_CLASS_AT(UDrawCylinderComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\PrimitiveComponent.cpp", 24);

// @baa 0x006f9510
IMPLEMENT_CLASS_AT(UDrawBoxComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\PrimitiveComponent.cpp", 25);

// @baa 0x006f95c0
IMPLEMENT_CLASS_AT(UDrawCapsuleComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\PrimitiveComponent.cpp", 26);

// @baa 0x006f9670
IMPLEMENT_CLASS_AT(UCameraConeComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\PrimitiveComponent.cpp", 22);

// @baa 0x006f9720
IMPLEMENT_CLASS_AT(UDrawQuadComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\PrimitiveComponent.cpp", 23);

// @baa 0x006f97f0
IMPLEMENT_CLASS_AT(UDrawLightConeComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\PrimitiveComponent.cpp", 21);

// @baa 0x006f9850
struct C_006f9880 {
    int sub_006f9880(int);
    int sub_006f4260(int);
};

// @baa 0x006f9880
int C_006f9880::sub_006f9880(int param_2)
{
    int param_1 = (int)this;
  ((C_006f9880 *)(this))->sub_006f4260(param_2);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  return param_1;
}

struct C_006f98a0 {
    int sub_006f98a0(int);
    int sub_006f42d0(int);
};

// @baa 0x006f98a0
int C_006f98a0::sub_006f98a0(int param_2)
{
    int param_1 = (int)this;
  ((C_006f98a0 *)(this))->sub_006f42d0(param_2);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  return param_1;
}

struct C_006f9e90 {
    int sub_006f9e90(int);
    int sub_006f3830(int);
};

// @baa 0x006f9e90
int C_006f9e90::sub_006f9e90(int param_2)
{
    int param_1 = (int)this;
  ((C_006f9e90 *)(this))->sub_006f3830(param_2);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  return param_1;
}

struct C_006f9eb0 {
    int sub_006f9eb0(int);
    int sub_006f3960(int);
};

// @baa 0x006f9eb0
int C_006f9eb0::sub_006f9eb0(int param_2)
{
    int param_1 = (int)this;
  ((C_006f9eb0 *)(this))->sub_006f3960(param_2);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  return param_1;
}

// @baa 0x006fd9c0
// @baa 0x006fdad0
UBOOL UDrawCapsuleComponent::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct FSparseArrayConstIt_006fe660 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006fe660(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x006fe660
FSparseArrayConstIt_006fe660::FSparseArrayConstIt_006fe660(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct C_006fe6b0 {
    int sub_006fe6b0(undefined4, undefined4);
    int sub_006fb500(int, int);
};

// @baa 0x006fe6b0
int C_006fe6b0::sub_006fe6b0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_006fe6b0 *)(this))->sub_006fb500(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_006fe6d0 {
    int sub_006fe6d0(undefined4, undefined4);
    int sub_006fb580(int, int);
};

// @baa 0x006fe6d0
int C_006fe6d0::sub_006fe6d0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_006fe6d0 *)(this))->sub_006fb580(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_006fe6f0 {
    int sub_006fe6f0(undefined4, undefined4);
    int sub_006fb600(int, int);
};

// @baa 0x006fe6f0
int C_006fe6f0::sub_006fe6f0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_006fe6f0 *)(this))->sub_006fb600(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_006fe710 {
    int sub_006fe710(undefined4, undefined4);
    int sub_006fb680(int, int);
};

// @baa 0x006fe710
int C_006fe710::sub_006fe710(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_006fe710 *)(this))->sub_006fb680(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_006fe730 {
    int sub_006fe730(undefined4, undefined4);
    int sub_006fb700(int, int);
};

// @baa 0x006fe730
int C_006fe730::sub_006fe730(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_006fe730 *)(this))->sub_006fb700(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_006fe750 {
    int sub_006fe750(undefined4, undefined4);
    int sub_006fb780(int, int);
};

// @baa 0x006fe750
int C_006fe750::sub_006fe750(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_006fe750 *)(this))->sub_006fb780(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_006fe770 {
    int sub_006fe770();
};

int sub_006f6940(void);
// @baa 0x006fe770
int C_006fe770::sub_006fe770(void)
{
    int param_1 = (int)this;

  sub_006f6940();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_006fe790 {
    int sub_006fe790();
};

int sub_006f69a0(void);
// @baa 0x006fe790
int C_006fe790::sub_006fe790(void)
{
    int param_1 = (int)this;

  sub_006f69a0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_006fe7b0 {
    int sub_006fe7b0();
};

int sub_006f6a00(void);
// @baa 0x006fe7b0
int C_006fe7b0::sub_006fe7b0(void)
{
    int param_1 = (int)this;

  sub_006f6a00();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_006fe7d0 {
    int sub_006fe7d0();
};

int sub_006f6a60(void);
// @baa 0x006fe7d0
int C_006fe7d0::sub_006fe7d0(void)
{
    int param_1 = (int)this;

  sub_006f6a60();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_006fea60 {
    int sub_006fea60();
};

int sub_006f6b80(void);
// @baa 0x006fea60
int C_006fea60::sub_006fea60(void)
{
    int param_1 = (int)this;

  sub_006f6b80();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_006fea80 {
    undefined4 sub_006fea80(byte);
};

int sub_006f8f20(void);
// @baa 0x006fea80
undefined4 C_006fea80::sub_006fea80(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006f8f20();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_006feaa0 {
    undefined4 sub_006feaa0(byte);
};

int sub_006f8fa0(void);
// @baa 0x006feaa0
undefined4 C_006feaa0::sub_006feaa0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006f8fa0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_006feac0 {
    undefined4 sub_006feac0(byte);
};

int sub_006f9020(void);
// @baa 0x006feac0
undefined4 C_006feac0::sub_006feac0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006f9020();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_006febb0 {
    int sub_006febb0();
};

int sub_006f7250(void);
// @baa 0x006febb0
int C_006febb0::sub_006febb0(void)
{
    int param_1 = (int)this;

  sub_006f7250();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_006fdb10();
// @baa 0x006fed00
void sub_006fed00(void) { sub_006fdb10(); }

void sub_006fdcd0();
// @baa 0x006fee90
void sub_006fee90(void) { sub_006fdcd0(); }

// @baa 0x006ff0b0
// @baa 0x006ff1c0
UBOOL UDrawLightConeComponent::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

void sub_006fe130();
// @baa 0x006ff780
void sub_006ff780(void) { sub_006fe130(); }

void sub_006fe190();
// @baa 0x006ff790
void sub_006ff790(void) { sub_006fe190(); }

struct FSparseArrayConstIt_006ffb90 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_006ffb90(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x006ffb90
FSparseArrayConstIt_006ffb90::FSparseArrayConstIt_006ffb90(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct C_006ffbe0 {
    int sub_006ffbe0();
};

// @baa 0x006ffbe0
int C_006ffbe0::sub_006ffbe0(void)
{
    int param_1 = (int)this;

  sub_006f6940();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_006ffc00 {
    int sub_006ffc00();
};

// @baa 0x006ffc00
int C_006ffc00::sub_006ffc00(void)
{
    int param_1 = (int)this;

  sub_006f69a0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_006ffc20 {
    int sub_006ffc20();
};

// @baa 0x006ffc20
int C_006ffc20::sub_006ffc20(void)
{
    int param_1 = (int)this;

  sub_006f6a00();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_006ffc40 {
    int sub_006ffc40();
};

// @baa 0x006ffc40
int C_006ffc40::sub_006ffc40(void)
{
    int param_1 = (int)this;

  sub_006f6a60();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_006fffa0 {
    int sub_006fffa0();
};

// @baa 0x006fffa0
int C_006fffa0::sub_006fffa0(void)
{
    int param_1 = (int)this;

  sub_006f6b80();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_006fffc0 {
    void sub_006fffc0();
    int sub_006fe7f0(int);
};

// @baa 0x006fffc0
void C_006fffc0::sub_006fffc0(void)
{
    int param_1 = (int)this;
  ((C_006fffc0 *)((*(char **)((char *)this + 0x10))))->sub_006fe7f0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_006fffe0 {
    void sub_006fffe0();
    int sub_006fe930(int);
};

// @baa 0x006fffe0
void C_006fffe0::sub_006fffe0(void)
{
    int param_1 = (int)this;
  ((C_006fffe0 *)((*(char **)((char *)this + 0x10))))->sub_006fe930(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}
