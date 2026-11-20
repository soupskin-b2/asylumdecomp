// UnrealEd_14b0000.cpp: 44 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"
#include "ue3/Map.h"

struct A_014b0a90 { virtual void sub_014b0b60(); char pad[332]; };

struct B_014b0a90 { virtual void sub_014b0b60(); };

struct C_014b0a90 : A_014b0a90, B_014b0a90 { virtual void sub_014b0b60(); C_014b0a90(); };

C_014b0a90::C_014b0a90() {}

// @baa 0x014b0a90
void C_014b0a90::sub_014b0b60() {}

struct A_014b0aa0 { virtual void sub_014b0b60(); char pad[428]; };

struct B_014b0aa0 { virtual void sub_014b0b60(); };

struct C_014b0aa0 : A_014b0aa0, B_014b0aa0 { virtual void sub_014b0b60(); C_014b0aa0(); };

C_014b0aa0::C_014b0aa0() {}

// @baa 0x014b0aa0
void C_014b0aa0::sub_014b0b60() {}

struct C {
    undefined4 sub_014b0b60(byte);
};

int sub_0053dfa0(...);
int sub_014b0ad0(void);
// @baa 0x014b0b60
undefined4 C::sub_014b0b60(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_014b0ad0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_014b0b80 {
    void sub_014b0b80(undefined4);
};

int sub_014ac930(...);
// @baa 0x014b0b80
void C_014b0b80::sub_014b0b80(undefined4 param_2)
{
    int param_1 = (int)this;

  sub_014ac930(param_2,param_1 + 4);
  return;
}

/* Out-of-line copies of TSparseArray<T>::TConstIterator's constructor and operator++ (one per element type; the code doesn't
 * depend on it, so INT stands in for the unknown T). */


struct FSparseArrayConstIt_014b2b20 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_014b2b20& operator++();
};

// @baa 0x014b2b20
FSparseArrayConstIt_014b2b20& FSparseArrayConstIt_014b2b20::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct C_view {
    int sub_014a63b0(int);
};

struct C_014b2e00 { undefined4 * sub_014b2e00(undefined4 * param_2); };
// @baa 0x014b2e00
undefined4 * C_014b2e00::sub_014b2e00(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  *param_1 = *param_2;
  puVar1 = (undefined4 *)param_2[1];
  param_1[1] = *puVar1;
  ((C_view *)(((char *)this + 8)))->sub_014a63b0((int)(puVar1 + 1));
  return param_1;
}

struct C_014b2f30 { undefined4 * sub_014b2f30(undefined4 * param_2); };
// @baa 0x014b2f30
undefined4 * C_014b2f30::sub_014b2f30(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  *param_1 = *param_2;
  puVar1 = (undefined4 *)param_2[1];
  param_1[1] = *puVar1;
  ((C_view *)(((char *)this + 8)))->sub_014a63b0((int)(puVar1 + 1));
  param_1[5] = 0xffffffff;
  return param_1;
}

struct C_014b4760 {
    undefined4 sub_014b4760(byte);
};

int sub_014adfe0(void);
// @baa 0x014b4760
undefined4 C_014b4760::sub_014b4760(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_014adfe0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_014b4930 {
    undefined4 sub_014b4930(byte);
};

int sub_014ae900(void);
// @baa 0x014b4930
undefined4 C_014b4930::sub_014b4930(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_014ae900();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct FSparseArrayConstIt_014b9540 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_014b9540& operator++();
};

// @baa 0x014b9540
FSparseArrayConstIt_014b9540& FSparseArrayConstIt_014b9540::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct C_014b9560 {
    void sub_014b9560();
    int sub_014b2b40(int);
};

// @baa 0x014b9560
void C_014b9560::sub_014b9560(void)
{
    int param_1 = (int)this;
  ((C_014b9560 *)((*(char **)((char *)this + 0x10))))->sub_014b2b40(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_014b9580 {
    void sub_014b9580();
    int sub_014b2ca0(int);
};

// @baa 0x014b9580
void C_014b9580::sub_014b9580(void)
{
    int param_1 = (int)this;
  ((C_014b9580 *)((*(char **)((char *)this + 0x10))))->sub_014b2ca0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_014b95a0 {
    void sub_014b95a0();
    int sub_014b2f60(int);
};

// @baa 0x014b95a0
void C_014b95a0::sub_014b95a0(void)
{
    int param_1 = (int)this;
  ((C_014b95a0 *)((*(char **)((char *)this + 0x10))))->sub_014b2f60(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

void sub_014b3980();
// @baa 0x014ba150
void sub_014ba150(void) { sub_014b3980(); }

void sub_014b3a50();
// @baa 0x014ba160
void sub_014ba160(void) { sub_014b3a50(); }

void sub_014b3b20();
// @baa 0x014ba170
void sub_014ba170(void) { sub_014b3b20(); }

struct M_014ba7d0 { void sub_014b9470(); };

struct C_014ba7d0 { char pad[12]; M_014ba7d0 m; void sub_014ba7d0(); };

// @baa 0x014ba7d0
void C_014ba7d0::sub_014ba7d0() { m.sub_014b9470(); }

int sub_014b3380(void);
struct C_014bafc0 { int sub_014bafc0(void); };
// @baa 0x014bafc0
int C_014bafc0::sub_014bafc0(void)
{
    int param_1 = (int)this;

  sub_014b3380();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_014b33e0(void);
struct C_014bafe0 { int sub_014bafe0(void); };
// @baa 0x014bafe0
int C_014bafe0::sub_014bafe0(void)
{
    int param_1 = (int)this;

  sub_014b33e0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_014b3440(void);
struct C_014bb000 { int sub_014bb000(void); };
// @baa 0x014bb000
int C_014bb000::sub_014bb000(void)
{
    int param_1 = (int)this;

  sub_014b3440();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_014ad9b0(void);
struct C_014bb0f0 { int sub_014bb0f0(void); };
// @baa 0x014bb0f0
int C_014bb0f0::sub_014bb0f0(void)
{
    int param_1 = (int)this;

  sub_014ad9b0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x014bb370
UBOOL UUISceneFactoryText::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_view_014bc070 {
    int sub_00dbc800(int, int);
};

struct C_014bc070 { void sub_014bc070(void); };
// @baa 0x014bc070
void C_014bc070::sub_014bc070(void)
{
    int param_1 = (int)this;
  ((C_view_014bc070 *)(this))->sub_00dbc800(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_014bc080 {
    int sub_014bad80(int, int);
};

struct C_014bc080 { undefined4 sub_014bc080(undefined4 param_2, undefined4 param_3); };
// @baa 0x014bc080
undefined4 C_014bc080::sub_014bc080(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_014bc080 *)(this))->sub_014bad80(param_2, param_3);
  return param_1;
}

struct C_view_014bc0a0 {
    int sub_014bade0(int, int);
};

struct C_014bc0a0 { int sub_014bc0a0(undefined4 param_2, undefined4 param_3); };
// @baa 0x014bc0a0
int C_014bc0a0::sub_014bc0a0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_014bc0a0 *)(this))->sub_014bade0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_014bc0c0 {
    int sub_014bae60(int, int);
};

struct C_014bc0c0 { int sub_014bc0c0(undefined4 param_2, undefined4 param_3); };
// @baa 0x014bc0c0
int C_014bc0c0::sub_014bc0c0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_014bc0c0 *)(this))->sub_014bae60(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_014bc0e0 {
    int sub_014baee0(int, int);
};

struct C_014bc0e0 { int sub_014bc0e0(undefined4 param_2, undefined4 param_3); };
// @baa 0x014bc0e0
int C_014bc0e0::sub_014bc0e0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_014bc0e0 *)(this))->sub_014baee0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_014bc100 {
    int sub_014baf50(int, int);
};

struct C_014bc100 { int sub_014bc100(undefined4 param_2, undefined4 param_3); };
// @baa 0x014bc100
int C_014bc100::sub_014bc100(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_014bc100 *)(this))->sub_014baf50(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_014bc120 { int sub_014bc120(void); };
// @baa 0x014bc120
int C_014bc120::sub_014bc120(void)
{
    int param_1 = (int)this;

  sub_014b3380();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_014bc140 { int sub_014bc140(void); };
// @baa 0x014bc140
int C_014bc140::sub_014bc140(void)
{
    int param_1 = (int)this;

  sub_014b33e0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_014bc160 { int sub_014bc160(void); };
// @baa 0x014bc160
int C_014bc160::sub_014bc160(void)
{
    int param_1 = (int)this;

  sub_014b3440();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_014bb080();
// @baa 0x014bc220
void sub_014bc220(void) { sub_014bb080(); }

struct C_014bc230 { int sub_014bc230(void); };
// @baa 0x014bc230
int C_014bc230::sub_014bc230(void)
{
    int param_1 = (int)this;

  sub_014ad9b0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_014bbad0();
// @baa 0x014bc250
void sub_014bc250(void) { sub_014bbad0(); }

void sub_014bbb40();
// @baa 0x014bc260
void sub_014bc260(void) { sub_014bbb40(); }

void sub_014bbbb0();
// @baa 0x014bc520
void sub_014bc520(void) { sub_014bbbb0(); }

void sub_014bbc20();
// @baa 0x014bc530
void sub_014bc530(void) { sub_014bbc20(); }

// @baa 0x014bec70
void sub_014bec70(void) { sub_014bbbb0(); }

// @baa 0x014bec80
void sub_014bec80(void) { sub_014bbb40(); }

struct C_014bfca0 { void sub_014bc720(int); C_014bfca0 *sub_014bfca0(int); };

// @baa 0x014bfca0
C_014bfca0 *C_014bfca0::sub_014bfca0(int a) { sub_014bc720(a); return this; }

struct M_014bfcc0 { void sub_014bbb40(); };

struct C_014bfcc0 { char pad[4]; M_014bfcc0 m; void sub_014bfcc0(); };

// @baa 0x014bfcc0
void C_014bfcc0::sub_014bfcc0() { m.sub_014bbb40(); }

struct M_014bfcd0 { void sub_014bbb40(); };

struct C_014bfcd0 { char pad[4]; M_014bfcd0 m; void sub_014bfcd0(); };

// @baa 0x014bfcd0
void C_014bfcd0::sub_014bfcd0() { m.sub_014bbb40(); }

struct C_014bfce0 {
    undefined4 sub_014bfce0(byte);
    int sub_014bbb40();
};

// @baa 0x014bfce0
undefined4 C_014bfce0::sub_014bfce0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_014bfce0 *)(((char *)this + 4)))->sub_014bbb40();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct Sub
{
    void sub_014b2820(INT Value);
};

// @baa 0x014b3e10
void __stdcall sub_014b3e10(Sub* Object, INT Unused)
{
    Object->sub_014b2820(0);
}
