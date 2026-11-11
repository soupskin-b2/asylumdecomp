// GFx_1910000.cpp (part 1 of 5): 81 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

struct C_019103b0 { int a, b, c; C_019103b0(); };

// @baa 0x019103b0
C_019103b0::C_019103b0() : a(0), b(0), c(0) {}

struct S018d4a70 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_0190bda0(int NewNum);
    void sub_019103c0();
};

void __stdcall sub_018d7170(int A);
// @baa 0x019103c0
void S018d4a70::sub_019103c0()
{
    S018d4a70* Self = this;
    sub_0190bda0(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct S018d4a70_01910680 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_0190cc10(int NewNum);
    void sub_01910680();
};

// @baa 0x01910680
void S018d4a70_01910680::sub_01910680()
{
    S018d4a70_01910680* Self = this;
    sub_0190cc10(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct C_019106f0 { int a, b, c; C_019106f0(); };

// @baa 0x019106f0
C_019106f0::C_019106f0() : a(0), b(0), c(0) {}

struct S018d4a70_01910700 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_0190cd60(int NewNum);
    void sub_01910700();
};

// @baa 0x01910700
void S018d4a70_01910700::sub_01910700()
{
    S018d4a70_01910700* Self = this;
    sub_0190cd60(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct A_01911300 { virtual void sub_01911310(); char pad[12]; };

struct B_01911300 { virtual void sub_01911310(); };

struct C_01911300 : A_01911300, B_01911300 { virtual void sub_01911310(); C_01911300(); };

C_01911300::C_01911300() {}

// @baa 0x01911300
void C_01911300::sub_01911310() {}

struct A_019120e0 { virtual void sub_01912d00(); char pad[12]; };

struct B_019120e0 { virtual void sub_01912d00(); };

struct C_019120e0 : A_019120e0, B_019120e0 { virtual void sub_01912d00(); C_019120e0(); };

C_019120e0::C_019120e0() {}

// @baa 0x019120e0
void C_019120e0::sub_01912d00() {}

struct C {
    undefined4 sub_019124a0(undefined4);
    int sub_019729b0(int, int);
};

// @baa 0x019124a0
undefined4 C::sub_019124a0(undefined4 param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C *)(this))->sub_019729b0(param_2, 0);
  return param_1;
}

struct C_019124c0 { void sub_01972a00(int); C_019124c0 *sub_019124c0(int); };

// @baa 0x019124c0
C_019124c0 *C_019124c0::sub_019124c0(int a) { sub_01972a00(a); return this; }

struct C_019124e0 { void sub_01972a00(int); C_019124e0 *sub_019124e0(int); };

// @baa 0x019124e0
C_019124e0 *C_019124e0::sub_019124e0(int a) { sub_01972a00(a); return this; }

struct C_01912520 {
    BYTE *sub_01912520();
};

// @baa 0x01912520
BYTE *C_01912520::sub_01912520(void)
{
    BYTE *p = (BYTE *)this;
    p[0] = 0;
    p[1] = 0;
    return p;
}

int __stdcall sub_018d7150(int);
// @baa 0x01912590
void sub_01912590(undefined4 param_1)
{
  sub_018d7150(param_1);
  return;
}

struct A_01912650 { virtual void sub_01912b30(); char pad[12]; };

struct B_01912650 { virtual void sub_01912b30(); };

struct C_01912650 : A_01912650, B_01912650 { virtual void sub_01912b30(); C_01912650(); };

C_01912650::C_01912650() {}

// @baa 0x01912650
void C_01912650::sub_01912b30() {}

struct C_01912990 {
    undefined4 * sub_01912990(undefined4);
    int sub_0190be70(int);
};

// @baa 0x01912990
undefined4 * C_01912990::sub_01912990(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  ((C_01912990 *)(this))->sub_0190be70(param_2);
  return param_1;
}

struct C_019129b0 {
    undefined4 * sub_019129b0(undefined4);
    int sub_0190be70(int);
};

// @baa 0x019129b0
undefined4 * C_019129b0::sub_019129b0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  ((C_019129b0 *)(this))->sub_0190be70(param_2);
  return param_1;
}

struct A_01912fc0 { virtual void sub_01919690(); char pad[12]; };

struct B_01912fc0 { virtual void sub_01919690(); };

struct C_01912fc0 : A_01912fc0, B_01912fc0 { virtual void sub_01919690(); C_01912fc0(); };

C_01912fc0::C_01912fc0() {}

// @baa 0x01912fc0
void C_01912fc0::sub_01919690() {}

struct C_01913720 {
    void sub_01913720(undefined4);
};

// @baa 0x01913720
void C_01913720::sub_01913720(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = 4;
  param_1[2] = param_2;
  return;
}

struct C_01913e90 {
    byte sub_01913e90();
};

// @baa 0x01913e90
byte C_01913e90::sub_01913e90(void)
{
    int param_1 = (int)this;
  return *(byte *)(param_1 + 0x14c) >> 2 & 3;
}

struct GEvent {
    GEvent * __thiscall sub_01988220(bool a, bool b);
    GEvent * sub_01913ed0();
};

// @baa 0x01913ed0
GEvent * GEvent::sub_01913ed0()
{
    return sub_01988220(false, false);
}

struct C_01913f60 {
    byte sub_01913f60();
};

// @baa 0x01913f60
byte C_01913f60::sub_01913f60(void)
{
    byte v = *reinterpret_cast<byte *>(this + 0x64);
    v = ~v;
    return v & 1;
}

struct S {
    BYTE sub_01914260(UINT a1, UINT a2);
};

// @baa 0x01914260
BYTE S::sub_01914260(UINT a1, UINT a2)
{
    return 1;
}

static void use_it(void* p)
{
    ((S*)p)->sub_01914260(0, 0);
}

struct C_01914300 { int a; C_01914300(int); };

// @baa 0x01914300
C_01914300::C_01914300(int x) : a(x) {}

struct C_019143c0 { int a, b, c; C_019143c0(); };

// @baa 0x019143c0
C_019143c0::C_019143c0() : a(0), b(0), c(0) {}

struct C_019143d0 { int a, b, c; C_019143d0(); };

// @baa 0x019143d0
C_019143d0::C_019143d0() : a(0), b(0), c(0) {}

struct A_019144a0 { virtual void sub_01919620(); char pad[104]; };

struct B_019144a0 { virtual void sub_01919620(); };

struct C_019144a0 : A_019144a0, B_019144a0 { virtual void sub_01919620(); C_019144a0(); };

C_019144a0::C_019144a0() {}

// @baa 0x019144a0
void C_019144a0::sub_01919620() {}

struct A_019144b0 { virtual void sub_01919620(); char pad[12]; };

struct B_019144b0 { virtual void sub_01919620(); };

struct C_019144b0 : A_019144b0, B_019144b0 { virtual void sub_01919620(); C_019144b0(); };

C_019144b0::C_019144b0() {}

// @baa 0x019144b0
void C_019144b0::sub_01919620() {}

struct A_019144c0 { virtual void sub_01914220(); char pad[104]; };

struct B_019144c0 { virtual void sub_01914220(); };

struct C_019144c0 : A_019144c0, B_019144c0 { virtual void sub_01914220(); C_019144c0(); };

C_019144c0::C_019144c0() {}

// @baa 0x019144c0
void C_019144c0::sub_01914220() {}

struct M_01915110 { void sub_01914590(); };

struct C_01915110 { char pad[288]; M_01915110 m; void sub_01915110(); };

// @baa 0x01915110
void C_01915110::sub_01915110() { m.sub_01914590(); }

struct C_01917b70 { int a, b, c; C_01917b70(); };

// @baa 0x01917b70
C_01917b70::C_01917b70() : a(0), b(0), c(0) {}

struct C_01917f00 { int a, b, c; C_01917f00(); };

// @baa 0x01917f00
C_01917f00::C_01917f00() : a(0), b(0), c(0) {}

struct C_01917f50 { int a, b, c; C_01917f50(); };

// @baa 0x01917f50
C_01917f50::C_01917f50() : a(0), b(0), c(0) {}

struct C_019198a0 {
    void sub_019198a0(undefined4);
};

// @baa 0x019198a0
void C_019198a0::sub_019198a0(undefined4 param_2)
{
    int param_1 = (int)this;
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

struct M_01919950 { void sub_019296f0(); };

struct C_01919950 { char pad[16]; M_01919950 m; void sub_01919950(); };

// @baa 0x01919950
void C_01919950::sub_01919950() { m.sub_019296f0(); }

struct C_01919b90 {
    undefined4 * sub_01919b90();
};

int sub_018d3d50(void);
extern undefined * g_023f709c;
// @baa 0x01919b90
undefined4 * C_01919b90::sub_01919b90(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_018d3d50();
  *param_1 = (undefined4)(&g_023f709c);
  return param_1;
}

struct S_01919bb0 {
    INT Unk00;
    INT Unk04;
    S_01919bb0 *sub_01919bb0();
};

// @baa 0x01919bb0
S_01919bb0 *S_01919bb0::sub_01919bb0()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct C_01919c00 {
    undefined4 * sub_01919c00();
};

extern undefined * g_023f70a4;
// @baa 0x01919c00
undefined4 * C_01919c00::sub_01919c00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_018d3d50();
  *param_1 = (undefined4)(&g_023f70a4);
  return param_1;
}

struct C_01919ce0 { int a; C_01919ce0(int); };

// @baa 0x01919ce0
C_01919ce0::C_01919ce0(int x) : a(x) {}

struct Object;
struct ObjectRef {
    Object* ObjectPtr; // 0x00
    void sub_01919cf0();
};

struct Object {
    void sub_018dd090();
};

// @baa 0x01919cf0
void ObjectRef::sub_01919cf0()
{
    if (ObjectPtr != 0)
        ObjectPtr->sub_018dd090();
}

struct C_01919d20 { int a; C_01919d20(int); };

// @baa 0x01919d20
C_01919d20::C_01919d20(int x) : a(x) {}

struct ObjectRef_01919d30 {
    Object* ObjectPtr; // 0x00
    void sub_01919d30();
};

// @baa 0x01919d30
void ObjectRef_01919d30::sub_01919d30()
{
    if (ObjectPtr != 0)
        ObjectPtr->sub_018dd090();
}

struct C_01919d60 { int a; C_01919d60(int); };

// @baa 0x01919d60
C_01919d60::C_01919d60(int x) : a(x) {}

struct ObjectRef_01919d70 {
    Object* ObjectPtr; // 0x00
    void sub_01919d70();
};

// @baa 0x01919d70
void ObjectRef_01919d70::sub_01919d70()
{
    if (ObjectPtr != 0)
        ObjectPtr->sub_018dd090();
}

struct C_01919db0 { int a; C_01919db0(int); };

// @baa 0x01919db0
C_01919db0::C_01919db0(int x) : a(x) {}

struct C_01919e40 {
    int sub_01919e40(int);
    int sub_018e4700(int);
};

// @baa 0x01919e40
int C_01919e40::sub_01919e40(int param_2)
{
    int param_1 = (int)this;
  ((C_01919e40 *)(this))->sub_018e4700(param_2);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  return param_1;
}

struct C_01919e70 { int a, b, c; C_01919e70(); };

// @baa 0x01919e70
C_01919e70::C_01919e70() : a(0), b(0), c(0) {}

struct C_01919e80 { int a, b, c; C_01919e80(); };

// @baa 0x01919e80
C_01919e80::C_01919e80() : a(0), b(0), c(0) {}

struct C_01919ea0 { int a, b, c; C_01919ea0(); };

// @baa 0x01919ea0
C_01919ea0::C_01919ea0() : a(0), b(0), c(0) {}

struct C_01919eb0 { int a, b, c; C_01919eb0(); };

// @baa 0x01919eb0
C_01919eb0::C_01919eb0() : a(0), b(0), c(0) {}

struct C_01919fc0 {
    int sub_01919fc0(int);
};

// @baa 0x01919fc0
int C_01919fc0::sub_01919fc0(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + 8 + *param_1;
}

struct C_01919fd0 {
    uint sub_01919fd0();
};

// @baa 0x01919fd0
uint C_01919fd0::sub_01919fd0(void)
{
    int param_1 = (int)this;
  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_0191a0c0 {
    virtual void v0(void*);
    virtual void v1(void*);
    void sub_0191a0c0(void* a);
};

// @baa 0x0191a0c0
void C_0191a0c0::sub_0191a0c0(void* a)
{
    v1(a);
}

struct C_0191a270 {
    virtual void v0(void*);
    virtual void v1(void*);
    void sub_0191a270(void* a);
};

// @baa 0x0191a270
void C_0191a270::sub_0191a270(void* a)
{
    v1(a);
}

struct C_0191a300 {
    undefined4 sub_0191a300();
};

// @baa 0x0191a300
undefined4 C_0191a300::sub_0191a300(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(param_1 + 0x18);
}

struct S_0191a330 {
    char pad[0x28];
    S_0191a330 *f28;
    void sub_018f5750(const void *src, int size);
    void sub_0191a330(const void *src, int size);
};

// @baa 0x0191a330
void S_0191a330::sub_0191a330(const void *src, int size)
{
    this->f28->sub_018f5750(src, size);
}

struct Base {
    virtual void v0(int);
    virtual void v1(int);
    virtual void f(int);
};

struct C_0191abd0 {
    char pad[0x10];
    Base b;
    void sub_0191abd0(int);
};

// @baa 0x0191abd0
void C_0191abd0::sub_0191abd0(int a) { b.f(a); }

struct B {
    virtual void g();
    char pad[12];
};

struct T {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void f7();
    virtual void f8();
    virtual void f9();
    virtual void f10();
    virtual void f11();
    virtual void f12();
    virtual void f13();
    virtual void f14();
    virtual void f15();
    virtual void f16();
};

struct C_0191abe0 {
    B b;
    T t;
    void sub_0191abe0();
};

// @baa 0x0191abe0
void C_0191abe0::sub_0191abe0() { t.f16(); }

struct Inner {
    char pad[0x44];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void method();
};

struct GFxShapeCharacterDef {
    char pad[0x0c];
    Inner member;
    char pad2[0x24];
    virtual void sub_0191abf0();
};

// @baa 0x0191abf0
void GFxShapeCharacterDef::sub_0191abf0()
{
    member.method();
}

void Inner::method() {}

struct C_0191ac30 {
    void sub_0191ac30();
    int sub_01929c90();
};

extern undefined4 g_023f4ed0;
// @baa 0x0191ac30
void C_0191ac30::sub_0191ac30(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_0191ac30 *)(((char *)this + 0x10)))->sub_01929c90();
  *param_1 = (undefined4)((&g_023f4ed0));
  return;
}

struct C_0191be60 { void sub_0191b9e0(int); void sub_0191be60(); };

// @baa 0x0191be60
void C_0191be60::sub_0191be60() { sub_0191b9e0(0); }

struct C_0191bec0 { void sub_0191bad0(int); void sub_0191bec0(); };

// @baa 0x0191bec0
void C_0191bec0::sub_0191bec0() { sub_0191bad0(0); }

struct S018d4a70_0191bff0 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_0191b9e0(int NewNum);
    void sub_0191bff0();
};

// @baa 0x0191bff0
void S018d4a70_0191bff0::sub_0191bff0()
{
    S018d4a70_0191bff0* Self = this;
    sub_0191b9e0(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct S018d4a70_0191c020 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_0191bad0(int NewNum);
    void sub_0191c020();
};

// @baa 0x0191c020
void S018d4a70_0191c020::sub_0191c020()
{
    S018d4a70_0191c020* Self = this;
    sub_0191bad0(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct C_0191c110 {
    void sub_0191c110(undefined4, undefined4);
    int sub_01901dd0(int);
};

// @baa 0x0191c110
void C_0191c110::sub_0191c110(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  int iVar1;
  iVar1 = *(int *)(param_1 + 0x308) + 1;
  ((C_0191c110 *)(((char *)this + 0x304)))->sub_01901dd0(iVar1);
  *(undefined4 *)(*(int *)(param_1 + 0x304) + -4 + iVar1 * 4) = param_3;
  return;
}

struct C_0191c300 { int a, b, c; C_0191c300(); };

// @baa 0x0191c300
C_0191c300::C_0191c300() : a(0), b(0), c(0) {}

struct C_0191c320 { int a, b, c; C_0191c320(); };

// @baa 0x0191c320
C_0191c320::C_0191c320() : a(0), b(0), c(0) {}

struct S018d4a70_0191c330 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_0191b9e0(int NewNum);
    void sub_0191c330();
};

// @baa 0x0191c330
void S018d4a70_0191c330::sub_0191c330()
{
    S018d4a70_0191c330* Self = this;
    sub_0191b9e0(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct C_0191c370 { int a, b, c; C_0191c370(); };

// @baa 0x0191c370
C_0191c370::C_0191c370() : a(0), b(0), c(0) {}

struct C_0191c380 { int a, b, c; C_0191c380(); };

// @baa 0x0191c380
C_0191c380::C_0191c380() : a(0), b(0), c(0) {}

struct S018d4a70_0191c390 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_0191bad0(int NewNum);
    void sub_0191c390();
};

// @baa 0x0191c390
void S018d4a70_0191c390::sub_0191c390()
{
    S018d4a70_0191c390* Self = this;
    sub_0191bad0(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct C_0191c430 {
    undefined4 * sub_0191c430();
    int sub_018e4150();
};

// @baa 0x0191c430
undefined4 * C_0191c430::sub_0191c430(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  ((C_0191c430 *)(((char *)this + 0xc)))->sub_018e4150();
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return param_1;
}

struct V_0191e1f0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void g(int, int);
    void sub_0191e1f0();
};

// @baa 0x0191e1f0
void V_0191e1f0::sub_0191e1f0() { g(0, 2); }

struct C_0191e220 {
    virtual void v0() {}
    virtual void v1() {}
    virtual void v2() {}
    virtual void v3() {}
    virtual int v4() { return 0; }
    __int64 sub_0191e220();
};

// @baa 0x0191e220
__int64 C_0191e220::sub_0191e220()
{
    return v4();
}

struct F {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual int f6();
};

struct C_0191e270 {
    F m;
    __int64 sub_0191e270();
};

// @baa 0x0191e270
__int64 C_0191e270::sub_0191e270() { return m.f6(); }

struct S_0191e330 { BYTE sub_0191e330(int arg); };

// @baa 0x0191e330
BYTE S_0191e330::sub_0191e330(int arg) { return 0; }

struct C_0191ebc0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual INT v6();
    QWORD sub_0191ebc0();
};

// @baa 0x0191ebc0
QWORD C_0191ebc0::sub_0191ebc0()
{
    return v6();
}

struct C_0191f190 {
    undefined4 * sub_0191f190();
    int sub_018da830(int);
};

// @baa 0x0191f190
undefined4 * C_0191f190::sub_0191f190(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_0191f190 *)(((char *)this + 8)))->sub_018da830(0);
  param_1[1] = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  return param_1;
}

struct C_0191f5e0 {
    undefined4 sub_0191f5e0();
    int sub_018daa80();
};

// @baa 0x0191f5e0
undefined4 C_0191f5e0::sub_0191f5e0(void)
{
    undefined4 param_1 = (undefined4)this;
  ((C_0191f5e0 *)(((char *)this + 4)))->sub_018daa80();
  return param_1;
}

struct C_0191f670 {
    INT sub_0191f670();
};

// @baa 0x0191f670
INT C_0191f670::sub_0191f670(void)
{
    return ((BYTE *)this)[0];
}

struct S_0191f8f0 {
    INT Unk00;
    INT Unk04;
    S_0191f8f0 *sub_0191f8f0();
};

// @baa 0x0191f8f0
S_0191f8f0 *S_0191f8f0::sub_0191f8f0()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct C_0191fa10 {
    char pad[0x2c];
    BYTE f2c;
    UINT sub_0191fa10();
};

// @baa 0x0191fa10
UINT C_0191fa10::sub_0191fa10()
{
    return f2c;
}

struct C_0191fc30 {
    void sub_0191fc30(float);
};

// @baa 0x0191fc30
void C_0191fc30::sub_0191fc30(float f)
{
    *(float *)(this + 0x14) = f;
}
