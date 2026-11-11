// FCollada_1810000.cpp (part 3 of 8): 67 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

struct S0183c0d0 {
    int *sub_0183c0d0();
};

struct C {
    char pad[0xa0];
    S0183c0d0 *_0xa0;
    int *sub_01811b60();
};

// @baa 0x01811b60
int *C::sub_01811b60() {
    return _0xa0->sub_0183c0d0();
}

static volatile int *sink;
static void force() {
    C *c;
    sink = c->sub_01811b60();
}

struct S2 {
    int * sub_01839840(int);
};

struct S1 {
    char pad[0xa8];
    S2 *p;
    int * sub_01811b70(int arg);
};

// @baa 0x01811b70
int * S1::sub_01811b70(int arg) {
    return p->sub_01839840(arg);
}

struct T {
    int sub_01839a80(int arg);
};

struct S {
    char pad[0xb0];
    T* t;
    int sub_01811b80(int arg);
};

// @baa 0x01811b80
int S::sub_01811b80(int arg) {
    return t->sub_01839a80(arg);
}

struct C_01811ba0 {
    int sub_01811ba0(int a);
};

struct C2 {
    int sub_01839f00(int a);
};

// @baa 0x01811ba0
int C_01811ba0::sub_01811ba0(int a)
{
    return ((C2 *)*(int **)((char *)this + 0xc0))->sub_01839f00(a);
}

struct Base {
    void * sub_0183a140(int arg);
};

struct C_01811bb0 {
    char pad[0x110];
    Base * sub;
    void * sub_01811bb0(int arg);
};

// @baa 0x01811bb0
void * C_01811bb0::sub_01811bb0(int arg) {
    return sub->sub_0183a140(arg);
}

struct Inner {
    int * sub_0183a380(int);
};

struct C_01811bc0 {
    char pad[0xc8];
    Inner *p;
    int * sub_01811bc0(int);
};

// @baa 0x01811bc0
int * C_01811bc0::sub_01811bc0(int arg) { return p->sub_0183a380(arg); }

struct S_01811bd0 {
    char pad[0xd0];
    S_01811bd0 *next;
    int * sub_0183a5c0(int a);
    int * sub_01811bd0(int a);
};

// @baa 0x01811bd0
int * S_01811bd0::sub_01811bd0(int a)
{
    return this->next->sub_0183a5c0(a);
}

struct S_01811be0 {
    void * sub_0183a800(int arg1);
};

struct T_01811be0 {
    char pad[0xd8];
    S_01811be0 * f_d8;
    void * sub_01811be0(int arg1);
};

// @baa 0x01811be0
void * T_01811be0::sub_01811be0(int arg1)
{
    return f_d8->sub_0183a800(arg1);
}

struct B {
    int * sub_0183aa40(int arg);
};

struct A {
    char pad[0xe0];
    B * m_B;
    int * sub_01811bf0(int arg);
};

// @baa 0x01811bf0
int * A::sub_01811bf0(int arg) { return m_B->sub_0183aa40(arg); }

struct Inner_01811c00 {
    int sub_0183ac80(int);
};

struct Outer {
    char pad[0xe8];
    Inner_01811c00* p;
    int sub_01811c00(int);
};

// @baa 0x01811c00
int Outer::sub_01811c00(int a) {
    return p->sub_0183ac80(a);
}

struct D;
struct C_01811c10;
struct D {
    int * sub_0183aec0(int param2);
};

struct C_01811c10 {
    char pad[0x108];
    D * member;
    int * sub_01811c10(int param2);
};

// @baa 0x01811c10
int * C_01811c10::sub_01811c10(int param2)
{
    return member->sub_0183aec0(param2);
}

struct Sub {
    int sub_0183b580(int a);
};

struct C_01811c20 {
    char pad[0x100];
    Sub *m;
    int sub_01811c20(int a);
};

// @baa 0x01811c20
int __thiscall C_01811c20::sub_01811c20(int a) { return m->sub_0183b580(a); }

struct Inner_01811c30 {
    int sub_0183b340(int);
};

struct C_01811c30 {
    char pad[0xf8];
    Inner_01811c30 *p;
    int sub_01811c30(int);
};

// @baa 0x01811c30
int C_01811c30::sub_01811c30(int a) {
    return p->sub_0183b340(a);
}

struct S_01811c40 {
    int sub_0183b100(int arg1);
};

struct C_01811c40 {
    char pad[0xf0];
    S_01811c40* f;
    int sub_01811c40(int arg1);
};

// @baa 0x01811c40
int C_01811c40::sub_01811c40(int arg1) { return f->sub_0183b100(arg1); }

struct M_018121a0 { void sub_018168a0(); };

struct C_018121a0 { char pad[140]; M_018121a0 m; void sub_018121a0(); };

// @baa 0x018121a0
void C_018121a0::sub_018121a0() { m.sub_018168a0(); }

struct C_018130a0 { int a, b, c; C_018130a0(); };

// @baa 0x018130a0
C_018130a0::C_018130a0() : a(0), b(0), c(0) {}

struct C_018154d0 {
    undefined4 sub_018154d0();
};

// @baa 0x018154d0
undefined4 C_018154d0::sub_018154d0(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(param_1 + 8);
}

struct C_01815510 { int a; C_01815510(int); };

// @baa 0x01815510
C_01815510::C_01815510(int x) : a(x) {}

struct C_01815a40 { int a, b, c; C_01815a40(); };

// @baa 0x01815a40
C_01815a40::C_01815a40() : a(0), b(0), c(0) {}

struct C_01815a50 { int a, b, c; C_01815a50(); };

// @baa 0x01815a50
C_01815a50::C_01815a50() : a(0), b(0), c(0) {}

struct C_01815b60 {
    int v;
    int *sub_01815b60(int *a);
};

// @baa 0x01815b60
int *C_01815b60::sub_01815b60(int *a) {
    *a = v;
    return a;
}

struct C_018160f0 {
    void sub_018160f0(undefined4);
    int sub_01815910(int, int);
};

// @baa 0x018160f0
void C_018160f0::sub_018160f0(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_018160f0 *)(this))->sub_01815910(*(int *)(param_1 + 8) + *(int *)(param_1 + 4) * 4, param_2);
  return;
}

struct C_01816b00 {
    undefined4 * sub_01816b00();
    int sub_01816a30();
};

// @baa 0x01816b00
undefined4 * C_01816b00::sub_01816b00(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  ((C_01816b00 *)(((char *)this + 0x10)))->sub_01816a30();
  return param_1;
}

struct C_01816c60 {
    undefined4 * sub_01816c60(undefined4, undefined4);
    int sub_0181bb10(int, int);
};

extern undefined4 g_023e44d0;
// @baa 0x01816c60
undefined4 * C_01816c60::sub_01816c60(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_01816c60 *)(this))->sub_0181bb10(param_2, param_3);
  *param_1 = (undefined4)((&g_023e44d0));
  return param_1;
}

struct C_01816ca0 { void sub_01818ec0(int); C_01816ca0 *sub_01816ca0(int); };

// @baa 0x01816ca0
C_01816ca0 *C_01816ca0::sub_01816ca0(int a) { sub_01818ec0(a); return this; }

struct C_01816cc0 {
    undefined4 * sub_01816cc0(undefined4, undefined4);
    int sub_0181bb10(int, int);
};

extern undefined4 g_023e44e0;
// @baa 0x01816cc0
undefined4 * C_01816cc0::sub_01816cc0(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_01816cc0 *)(this))->sub_0181bb10(param_2, param_3);
  *param_1 = (undefined4)((&g_023e44e0));
  return param_1;
}

struct C_01816cf0 { void sub_01818ec0(int); C_01816cf0 *sub_01816cf0(int); };

// @baa 0x01816cf0
C_01816cf0 *C_01816cf0::sub_01816cf0(int a) { sub_01818ec0(a); return this; }

struct C_01816d10 {
    undefined4 * sub_01816d10(undefined4, undefined4);
    int sub_0181bb10(int, int);
};

extern undefined4 g_023e44f0;
// @baa 0x01816d10
undefined4 * C_01816d10::sub_01816d10(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_01816d10 *)(this))->sub_0181bb10(param_2, param_3);
  *param_1 = (undefined4)((&g_023e44f0));
  return param_1;
}

struct C_01816d40 { void sub_01818ec0(int); C_01816d40 *sub_01816d40(int); };

// @baa 0x01816d40
C_01816d40 *C_01816d40::sub_01816d40(int a) { sub_01818ec0(a); return this; }

struct C_01816d60 {
    undefined4 * sub_01816d60(undefined4, undefined4);
    int sub_0181bb10(int, int);
};

extern undefined4 g_023e4500;
// @baa 0x01816d60
undefined4 * C_01816d60::sub_01816d60(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_01816d60 *)(this))->sub_0181bb10(param_2, param_3);
  *param_1 = (undefined4)((&g_023e4500));
  return param_1;
}

struct C_01816d90 {
    undefined4 * sub_01816d90(undefined4, undefined4);
    int sub_0181bb10(int, int);
};

extern undefined4 g_023e4510;
// @baa 0x01816d90
undefined4 * C_01816d90::sub_01816d90(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_01816d90 *)(this))->sub_0181bb10(param_2, param_3);
  *param_1 = (undefined4)((&g_023e4510));
  return param_1;
}

struct C_01816db0 {
    void sub_01816db0();
};

int sub_0181b5d0(void);
// @baa 0x01816db0
void C_01816db0::sub_01816db0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_023e4510);
  sub_0181b5d0();
  return;
}

struct B_018172f0 {
    virtual int f0(int);
    virtual int f1(int);
    virtual int f2(int);
    virtual int f3(int);
    virtual int f4(int);
    virtual int f5(int);
    virtual int f6(int);
};

int B_018172f0::f0(int a) { return a; }

int B_018172f0::f1(int a) { return a; }

int B_018172f0::f2(int a) { return a; }

int B_018172f0::f3(int a) { return a; }

int B_018172f0::f4(int a) { return a; }

int B_018172f0::f5(int a) { return a; }

int B_018172f0::f6(int a) { return a; }

struct C_018172f0 : B_018172f0 {
    int sub_018172f0(int a);
};

// @baa 0x018172f0
int C_018172f0::sub_018172f0(int a) {
    B_018172f0 &b = *this;
    return b.f6(a);
}

struct C_018193b0 { int a, b, c; C_018193b0(); };

// @baa 0x018193b0
C_018193b0::C_018193b0() : a(0), b(0), c(0) {}

struct C_01819470 { int a, b, c; C_01819470(); };

// @baa 0x01819470
C_01819470::C_01819470() : a(0), b(0), c(0) {}

struct C_01819530 { int a, b, c; C_01819530(); };

// @baa 0x01819530
C_01819530::C_01819530() : a(0), b(0), c(0) {}

struct C_01819d70 {
    int sub_01819d70(undefined4);
    int sub_018190a0(int);
};

// @baa 0x01819d70
int C_01819d70::sub_01819d70(undefined4 param_2)
{
    int param_1 = (int)this;
  int iVar1;
  iVar1 = ((C_01819d70 *)(((char *)this + 0x1c)))->sub_018190a0(param_2);
  return iVar1 - *(int *)(param_1 + 0x24) >> 3;
}

struct C_01819e80 {
    int sub_01819e80(undefined4);
    int sub_01819110(int);
};

// @baa 0x01819e80
int C_01819e80::sub_01819e80(undefined4 param_2)
{
    int param_1 = (int)this;
  int iVar1;
  iVar1 = ((C_01819e80 *)(((char *)this + 0x1c)))->sub_01819110(param_2);
  return iVar1 - *(int *)(param_1 + 0x24) >> 4;
}

struct C_01819f90 {
    int sub_01819f90(undefined4);
    int sub_01819110(int);
};

// @baa 0x01819f90
int C_01819f90::sub_01819f90(undefined4 param_2)
{
    int param_1 = (int)this;
  int iVar1;
  iVar1 = ((C_01819f90 *)(((char *)this + 0x1c)))->sub_01819110(param_2);
  return iVar1 - *(int *)(param_1 + 0x24) >> 4;
}

struct C_0181a0a0 {
    int sub_0181a0a0(undefined4);
    int sub_01819180(int);
};

// @baa 0x0181a0a0
int C_0181a0a0::sub_0181a0a0(undefined4 param_2)
{
    int param_1 = (int)this;
  int iVar1;
  iVar1 = ((C_0181a0a0 *)(((char *)this + 0x1c)))->sub_01819180(param_2);
  return iVar1 - *(int *)(param_1 + 0x24) >> 4;
}

struct C_0181a1b0 {
    int sub_0181a1b0(undefined4);
    int sub_01819180(int);
};

// @baa 0x0181a1b0
int C_0181a1b0::sub_0181a1b0(undefined4 param_2)
{
    int param_1 = (int)this;
  int iVar1;
  iVar1 = ((C_0181a1b0 *)(((char *)this + 0x1c)))->sub_01819180(param_2);
  return iVar1 - *(int *)(param_1 + 0x24) >> 4;
}

struct C_0181a2e0 {
    bool sub_0181a2e0(undefined4);
    int sub_018190a0(int);
};

// @baa 0x0181a2e0
bool C_0181a2e0::sub_0181a2e0(undefined4 param_2)
{
    int param_1 = (int)this;
  int iVar1;
  iVar1 = ((C_0181a2e0 *)(this))->sub_018190a0(param_2);
  return iVar1 != *(int *)(param_1 + 8) + *(int *)(param_1 + 4) * 8;
}

struct C_0181a390 {
    bool sub_0181a390(undefined4);
    int sub_01819110(int);
};

// @baa 0x0181a390
bool C_0181a390::sub_0181a390(undefined4 param_2)
{
    int param_1 = (int)this;
  int iVar1;
  iVar1 = ((C_0181a390 *)(this))->sub_01819110(param_2);
  return iVar1 != *(int *)(param_1 + 4) * 0x10 + *(int *)(param_1 + 8);
}

struct C_0181a440 {
    bool sub_0181a440(undefined4);
    int sub_01819180(int);
};

// @baa 0x0181a440
bool C_0181a440::sub_0181a440(undefined4 param_2)
{
    int param_1 = (int)this;
  int iVar1;
  iVar1 = ((C_0181a440 *)(this))->sub_01819180(param_2);
  return iVar1 != *(int *)(param_1 + 4) * 0x10 + *(int *)(param_1 + 8);
}

struct C_0181ac40 {
    void sub_0181ac40(undefined4);
    int sub_00ec7aa0(int, int);
};

// @baa 0x0181ac40
void C_0181ac40::sub_0181ac40(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_0181ac40 *)(this))->sub_00ec7aa0(*(undefined4 *)(param_1 + 8), param_2);
  return;
}

struct C_0181ac60 {
    void sub_0181ac60();
    int sub_018195f0(int);
};

// @baa 0x0181ac60
void C_0181ac60::sub_0181ac60(void)
{
    int param_1 = (int)this;
  ((C_0181ac60 *)(this))->sub_018195f0(*(undefined4 *)(param_1 + 8));
  return;
}

struct C_0181ae20 {
    void sub_0181ae20(undefined4);
    int sub_0181a540(int, int);
};

// @baa 0x0181ae20
void C_0181ae20::sub_0181ae20(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_0181ae20 *)(this))->sub_0181a540(*(undefined4 *)(param_1 + 8), param_2);
  return;
}

struct C_0181ae40 {
    void sub_0181ae40();
    int sub_01819650(int);
};

// @baa 0x0181ae40
void C_0181ae40::sub_0181ae40(void)
{
    int param_1 = (int)this;
  ((C_0181ae40 *)(this))->sub_01819650(*(undefined4 *)(param_1 + 8));
  return;
}

struct C_0181b020 {
    void sub_0181b020(undefined4);
    int sub_0181a5e0(int, int);
};

// @baa 0x0181b020
void C_0181b020::sub_0181b020(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_0181b020 *)(this))->sub_0181a5e0(*(undefined4 *)(param_1 + 8), param_2);
  return;
}

struct C_0181b040 {
    void sub_0181b040();
    int sub_018196b0(int);
};

// @baa 0x0181b040
void C_0181b040::sub_0181b040(void)
{
    int param_1 = (int)this;
  ((C_0181b040 *)(this))->sub_018196b0(*(undefined4 *)(param_1 + 8));
  return;
}

struct C_0181b240 {
    void sub_0181b240(undefined4);
    int sub_0181a680(int, int);
};

// @baa 0x0181b240
void C_0181b240::sub_0181b240(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_0181b240 *)(this))->sub_0181a680(*(undefined4 *)(param_1 + 8), param_2);
  return;
}

struct C_0181b260 {
    void sub_0181b260();
    int sub_01819710(int);
};

// @baa 0x0181b260
void C_0181b260::sub_0181b260(void)
{
    int param_1 = (int)this;
  ((C_0181b260 *)(this))->sub_01819710(*(undefined4 *)(param_1 + 8));
  return;
}

struct M_0181b830 { void sub_0181a2a0(); };

struct C_0181b830 { char pad[28]; M_0181b830 m; void sub_0181b830(); };

// @baa 0x0181b830
void C_0181b830::sub_0181b830() { m.sub_0181a2a0(); }

struct C_0181b990 {
    void sub_0181b990(undefined4);
    int sub_0181a310(int);
};

// @baa 0x0181b990
void C_0181b990::sub_0181b990(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_0181b990 *)(this))->sub_0181a310(param_2);
  param_1[1] = *param_1;
  return;
}

struct C_0181b9f0 {
    void sub_0181b9f0(undefined4);
    int sub_0181a540(int, int);
};

// @baa 0x0181b9f0
void C_0181b9f0::sub_0181b9f0(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_0181b9f0 *)(this))->sub_0181a540(*(int *)(param_1 + 8) + *(int *)(param_1 + 4) * 8, param_2);
  return;
}

struct C_0181ba10 {
    void sub_0181ba10(undefined4);
    int sub_0181a3c0(int);
};

// @baa 0x0181ba10
void C_0181ba10::sub_0181ba10(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_0181ba10 *)(this))->sub_0181a3c0(param_2);
  param_1[1] = *param_1;
  return;
}

struct C_0181ba70 {
    void sub_0181ba70(undefined4);
    int sub_0181a5e0(int, int);
};

// @baa 0x0181ba70
void C_0181ba70::sub_0181ba70(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_0181ba70 *)(this))->sub_0181a5e0(*(int *)(param_1 + 4) * 0x10 + *(int *)(param_1 + 8), param_2);
  return;
}

struct C_0181ba90 {
    void sub_0181ba90(undefined4);
    int sub_0181a470(int);
};

// @baa 0x0181ba90
void C_0181ba90::sub_0181ba90(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_0181ba90 *)(this))->sub_0181a470(param_2);
  param_1[1] = *param_1;
  return;
}

struct C_0181baf0 {
    void sub_0181baf0(undefined4);
    int sub_0181a680(int, int);
};

// @baa 0x0181baf0
void C_0181baf0::sub_0181baf0(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_0181baf0 *)(this))->sub_0181a680(*(int *)(param_1 + 4) * 0x10 + *(int *)(param_1 + 8), param_2);
  return;
}

typedef uint size_t;

struct C_0181d1c0 {
    undefined4 * sub_0181d1c0(undefined4 *);
    int sub_0181a310(int);
};

void * sub_01a375f0(void *, void *, size_t);
// @baa 0x0181d1c0
undefined4 * C_0181d1c0::sub_0181d1c0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  if (param_1 != param_2) {
    ((C_0181d1c0 *)(this))->sub_0181a310(param_2[1]);
    param_1[1] = *param_1;
    sub_01a375f0((void *)param_1[2],(void *)param_2[2],param_2[1] * 8);
  }
  return param_1;
}

struct C_0181d200 {
    undefined4 * sub_0181d200(undefined4 *);
    int sub_0181a3c0(int);
};

// @baa 0x0181d200
undefined4 * C_0181d200::sub_0181d200(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  if (param_1 != param_2) {
    ((C_0181d200 *)(this))->sub_0181a3c0(param_2[1]);
    param_1[1] = *param_1;
    sub_01a375f0((void *)param_1[2],(void *)param_2[2],param_2[1] << 4);
  }
  return param_1;
}

struct C_0181d240 {
    undefined4 * sub_0181d240(undefined4 *);
    int sub_0181a470(int);
};

// @baa 0x0181d240
undefined4 * C_0181d240::sub_0181d240(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  if (param_1 != param_2) {
    ((C_0181d240 *)(this))->sub_0181a470(param_2[1]);
    param_1[1] = *param_1;
    sub_01a375f0((void *)param_1[2],(void *)param_2[2],param_2[1] << 4);
  }
  return param_1;
}

struct C_0181f0a0 {
    void sub_0181f0a0(undefined4);
    int sub_018190a0(int);
    int sub_0181dcf0(int);
    int sub_0181c180();
};

// @baa 0x0181f0a0
void C_0181f0a0::sub_0181f0a0(undefined4 param_2)
{
    int param_1 = (int)this;
  int iVar1;
  uint uVar2;
  iVar1 = ((C_0181f0a0 *)(((char *)this + 0x1c)))->sub_018190a0(param_2);
  uVar2 = iVar1 - *(int *)(param_1 + 0x24) >> 3;
  if (uVar2 < *(uint *)(param_1 + 0x20)) {
    ((C_0181f0a0 *)(this))->sub_0181dcf0(uVar2);
  }
  ((C_0181f0a0 *)(this))->sub_0181c180();
  return;
}

struct C_0181f0d0 {
    void sub_0181f0d0(undefined4);
    int sub_01819110(int);
    int sub_0181e130(int);
    int sub_0181c300();
};

// @baa 0x0181f0d0
void C_0181f0d0::sub_0181f0d0(undefined4 param_2)
{
    int param_1 = (int)this;
  int iVar1;
  uint uVar2;
  iVar1 = ((C_0181f0d0 *)(((char *)this + 0x1c)))->sub_01819110(param_2);
  uVar2 = iVar1 - *(int *)(param_1 + 0x24) >> 4;
  if (uVar2 < *(uint *)(param_1 + 0x20)) {
    ((C_0181f0d0 *)(this))->sub_0181e130(uVar2);
  }
  ((C_0181f0d0 *)(this))->sub_0181c300();
  return;
}

struct C_0181f100 {
    void sub_0181f100(undefined4);
    int sub_01819110(int);
    int sub_0181e570(int);
    int sub_0181c480();
};

// @baa 0x0181f100
void C_0181f100::sub_0181f100(undefined4 param_2)
{
    int param_1 = (int)this;
  int iVar1;
  uint uVar2;
  iVar1 = ((C_0181f100 *)(((char *)this + 0x1c)))->sub_01819110(param_2);
  uVar2 = iVar1 - *(int *)(param_1 + 0x24) >> 4;
  if (uVar2 < *(uint *)(param_1 + 0x20)) {
    ((C_0181f100 *)(this))->sub_0181e570(uVar2);
  }
  ((C_0181f100 *)(this))->sub_0181c480();
  return;
}

struct C_0181f130 {
    void sub_0181f130(undefined4);
    int sub_01819180(int);
    int sub_0181e9b0(int);
    int sub_0181c600();
};

// @baa 0x0181f130
void C_0181f130::sub_0181f130(undefined4 param_2)
{
    int param_1 = (int)this;
  int iVar1;
  uint uVar2;
  iVar1 = ((C_0181f130 *)(((char *)this + 0x1c)))->sub_01819180(param_2);
  uVar2 = iVar1 - *(int *)(param_1 + 0x24) >> 4;
  if (uVar2 < *(uint *)(param_1 + 0x20)) {
    ((C_0181f130 *)(this))->sub_0181e9b0(uVar2);
  }
  ((C_0181f130 *)(this))->sub_0181c600();
  return;
}

struct C_0181f160 {
    void sub_0181f160(undefined4);
    int sub_01819180(int);
    int sub_0181edf0(int);
    int sub_0181c780();
};

// @baa 0x0181f160
void C_0181f160::sub_0181f160(undefined4 param_2)
{
    int param_1 = (int)this;
  int iVar1;
  uint uVar2;
  iVar1 = ((C_0181f160 *)(((char *)this + 0x1c)))->sub_01819180(param_2);
  uVar2 = iVar1 - *(int *)(param_1 + 0x24) >> 4;
  if (uVar2 < *(uint *)(param_1 + 0x20)) {
    ((C_0181f160 *)(this))->sub_0181edf0(uVar2);
  }
  ((C_0181f160 *)(this))->sub_0181c780();
  return;
}
