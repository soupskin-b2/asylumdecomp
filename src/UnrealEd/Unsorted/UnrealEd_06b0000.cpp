// UnrealEd_06b0000.cpp (part 1 of 3): 70 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x006b0000
int sub_006b0000(WORD param_1)
{
  return param_1;
}

struct C {
    int sub_006b0010(int);
};

// @baa 0x006b0010
int C::sub_006b0010(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_006b0040 {
    undefined4 sub_006b0040(uint);
};

// @baa 0x006b0040
undefined4 C_006b0040::sub_006b0040(uint param_2)
{
    int param_1 = (int)this;

  return *(undefined4 *)(param_1 + 0x230 + (param_2 & 7) * 4);
}

struct C_006b00a0 { int sub_006b00a0(void); };

// @baa 0x006b00a0
int C_006b00a0::sub_006b00a0(void) { return *(int*)((char*)this + 6352); }

struct C_006b0110 {
    int sub_006b0110(int);
};

// @baa 0x006b0110
int C_006b0110::sub_006b0110(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_006b0150 { C_006b0150* sub_006b0150(void); };

// @baa 0x006b0150
C_006b0150* C_006b0150::sub_006b0150(void) { return this; }

struct C_006b0160 { C_006b0160* sub_006b0160(void); };

// @baa 0x006b0160
C_006b0160* C_006b0160::sub_006b0160(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_006b0170 { int sub_006b0170(void); };

// @baa 0x006b0170
int C_006b0170::sub_006b0170(void) { return *(int*)((char*)this + 0); }

struct C_006b0180 { int sub_006b0180(void); };

// @baa 0x006b0180
int C_006b0180::sub_006b0180(void) { return *(int*)((char*)this + 20); }

struct C_006b0190 { int sub_006b0190(void); };

// @baa 0x006b0190
int C_006b0190::sub_006b0190(void) { return *(int*)((char*)this + 20); }

struct C_006b01a0 { int sub_006b01a0(void); };

// @baa 0x006b01a0
int C_006b01a0::sub_006b01a0(void) { return *(int*)((char*)this + 20); }

struct C_006b01b0 { int sub_006b01b0(void); };

// @baa 0x006b01b0
int C_006b01b0::sub_006b01b0(void) { return *(int*)((char*)this + 20); }

struct C_006b01e0 { int sub_006b01e0(void); };

// @baa 0x006b01e0
int C_006b01e0::sub_006b01e0(void) { return *(int*)((char*)this + 20); }

struct C_006b01f0 { int sub_006b01f0(void); };

// @baa 0x006b01f0
int C_006b01f0::sub_006b01f0(void) { return *(int*)((char*)this + 20); }

struct C_006b0200 {
    int sub_006b0200(int);
};

// @baa 0x006b0200
int C_006b0200::sub_006b0200(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_006b0210 {
    int sub_006b0210(int);
};

// @baa 0x006b0210
int C_006b0210::sub_006b0210(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_006b0220 {
    int sub_006b0220(int);
};

// @baa 0x006b0220
int C_006b0220::sub_006b0220(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_006b0230 { C_006b0230* sub_006b0230(void); };

// @baa 0x006b0230
C_006b0230* C_006b0230::sub_006b0230(void) { return this; }

struct C_006b0240 { int sub_006b0240(void); };

// @baa 0x006b0240
int C_006b0240::sub_006b0240(void) { return *(int*)((char*)this + 0); }

struct C_006b0250 { C_006b0250* sub_006b0250(void); };

// @baa 0x006b0250
C_006b0250* C_006b0250::sub_006b0250(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x006b02f0
float10 sub_006b02f0(double param_1)
{
  return (float10)param_1 * (float10)param_1;
}

int sub_005d88c0(...);
int sub_0072a530(void);
int sub_00733250(...);
extern undefined4 g_026b2250;
// @baa 0x006b0480
void sub_006b0480(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  if (g_026b2250 == 0) {
    g_026b2250 = sub_00733250(L"Engine");
    sub_0072a530();
  }
  sub_005d88c0(g_026b2250,param_1,param_2,param_3);
  return;
}

int sub_005eae70(...);
int sub_006d8f70(void);
int sub_006ee740(...);
extern undefined4 g_026b1298;
// @baa 0x006b0a00
void sub_006b0a00(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  if (g_026b1298 == 0) {
    g_026b1298 = sub_006ee740(L"Engine");
    sub_006d8f70();
  }
  sub_005eae70(g_026b1298,param_1,param_2,param_3,param_4,param_5,1);
  return;
}

// @baa 0x006b0a50
void sub_006b0a50(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x006b0a70
uint sub_006b0a70(uint param_1, uint param_2)
{
  return param_1 | -(uint)(param_1 == 0) & param_2;
}

// @baa 0x006b0a90
uint sub_006b0a90(uint param_1, uint param_2)
{
  return param_1 | -(uint)(param_1 == 0) & param_2;
}

struct C_006b0ae0 { int a, b; C_006b0ae0(const C_006b0ae0 &); };

// @baa 0x006b0ae0
C_006b0ae0::C_006b0ae0(const C_006b0ae0 &o) : a(o.a), b(o.b) {}

struct S {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_006b0ba0(INT Index) const;
};

// @baa 0x006b0ba0
const DWORD* S::sub_006b0ba0(INT Index) const
{
    return &Items(Index);
}

struct C_006b0c70 { C_006b0c70* sub_006b0c70(void); };

// @baa 0x006b0c70
C_006b0c70* C_006b0c70::sub_006b0c70(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_006b0c80 { int sub_006b0c80(void); };

// @baa 0x006b0c80
int C_006b0c80::sub_006b0c80(void) { return *(int*)((char*)this + 548); }

struct C_006b0c90 { unsigned sub_006b0c90(void); };

// @baa 0x006b0c90
unsigned C_006b0c90::sub_006b0c90(void) { return *(unsigned*)((char*)this + 592) >> 31; }

struct C_006b0ca0 {
    bool sub_006b0ca0();
};

// @baa 0x006b0ca0
bool C_006b0ca0::sub_006b0ca0(void)
{
    int * param_1 = (int *)this;

  return *param_1 != 0;
}

struct C_006b0cb0 { int sub_006b0cb0(void); };

// @baa 0x006b0cb0
int C_006b0cb0::sub_006b0cb0(void) { return *(int*)((char*)this + 0); }

struct C_006b0cc0 { char* sub_006b0cc0(void); };

// @baa 0x006b0cc0
char* C_006b0cc0::sub_006b0cc0(void) { return (char*)this + 16; }

struct C_006b0cd0 { int sub_006b0cd0(void); };

// @baa 0x006b0cd0
int C_006b0cd0::sub_006b0cd0(void) { return *(int*)((char*)this + 80); }

struct C_006b0ce0 {
    void sub_006b0ce0();
};

int sub_0053dfa0(...);
// @baa 0x006b0ce0
void C_006b0ce0::sub_006b0ce0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x40) != 0) {
    sub_0053dfa0(*(int *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  return;
}

struct C_006b0d00 { C_006b0d00* sub_006b0d00(void); };

// @baa 0x006b0d00
C_006b0d00* C_006b0d00::sub_006b0d00(void) { *(int*)((char*)this + 64) = 0; return this; }

struct C_006b0d40 { C_006b0d40* sub_006b0d40(void); };

// @baa 0x006b0d40
C_006b0d40* C_006b0d40::sub_006b0d40(void) { return this; }

int sub_00627f00(...);
// @baa 0x006b0d50
void sub_006b0d50(undefined4 param_1, undefined4 param_2)
{
  sub_00627f00(param_1,param_2,0x22c);
  return;
}

struct C_006b0d70 {
    void sub_006b0d70(undefined4, float, float, float, float, float, float);
};

int sub_00630f20(...);
// @baa 0x006b0d70
void C_006b0d70::sub_006b0d70(undefined4 param_2, float param_3, float param_4, float param_5, float param_6, float param_7, float param_8)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,(double)param_3,(double)param_4,(double)param_5,(double)param_6,
               (double)param_7,(double)param_8);
  return;
}

struct A_006b0eb0 { virtual void sub_006b1dc0(); char pad[16]; };

struct B_006b0eb0 { virtual void sub_006b1dc0(); };

struct C_006b0eb0 : A_006b0eb0, B_006b0eb0 { virtual void sub_006b1dc0(); C_006b0eb0(); };

C_006b0eb0::C_006b0eb0() {}

// @baa 0x006b0eb0
void C_006b0eb0::sub_006b1dc0() {}

struct A_006b0ec0 { virtual void sub_006b1e50(); char pad[16]; };

struct B_006b0ec0 { virtual void sub_006b1e50(); };

struct C_006b0ec0 : A_006b0ec0, B_006b0ec0 { virtual void sub_006b1e50(); C_006b0ec0(); };

C_006b0ec0::C_006b0ec0() {}

// @baa 0x006b0ec0
void C_006b0ec0::sub_006b1e50() {}

struct A_006b0ed0 { virtual void sub_006b1d30(); char pad[16]; };

struct B_006b0ed0 { virtual void sub_006b1d30(); };

struct C_006b0ed0 : A_006b0ed0, B_006b0ed0 { virtual void sub_006b1d30(); C_006b0ed0(); };

C_006b0ed0::C_006b0ed0() {}

// @baa 0x006b0ed0
void C_006b0ed0::sub_006b1d30() {}

int sub_0053ec70(void);
extern undefined * g_01e72a60;
extern undefined * g_01ece5d8;
// @baa 0x006b0ee0
undefined4 * UTexture2D::sub_006b0ee0(int param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e72a60);
  sub_0053ec70();
  param_1[0x1f] = param_2;
  *param_1 = (undefined4)(&g_01ece5d8);
  param_1[1] = *(undefined4 *)(param_2 + 4);
  param_1[2] = *(uint *)(param_2 + 8) & 0x7fffffff;
  param_1[3] = *(undefined4 *)(param_2 + 0xc);
  param_1[4] = *(undefined4 *)(param_2 + 0x10);
  param_1[5] = *(undefined4 *)(param_2 + 0x14);
  param_1[6] = *(undefined4 *)(param_2 + 0x18);
  param_1[7] = *(undefined4 *)(param_2 + 0x1c);
  param_1[8] = *(undefined4 *)(param_2 + 0x20);
  param_1[9] = *(undefined4 *)(param_2 + 0x24);
  param_1[0xd] = *(undefined4 *)(param_2 + 0x34);
  param_1[0xe] = *(undefined4 *)(param_2 + 0x38);
  param_1[10] = *(undefined4 *)(param_2 + 0x28);
  param_1[0xb] = *(undefined4 *)(param_2 + 0x2c);
  param_1[0xc] = *(undefined4 *)(param_2 + 0x30);
  param_1[0x10] = *(undefined4 *)(param_2 + 0x40);
  param_1[0x11] = *(undefined4 *)(param_2 + 0x44);
  param_1[0x12] = *(undefined4 *)(param_2 + 0x48);
  param_1[0x13] = (uint)(0 < *(int *)(param_2 + 0x4c));
  param_1[0x14] = *(undefined4 *)(param_2 + 0x50);
  param_1[0x15] = *(undefined4 *)(param_2 + 0x54);
  param_1[0x16] = *(undefined4 *)(param_2 + 0x58);
  param_1[0x17] = (uint)(0 < *(int *)(param_2 + 0x5c));
  param_1[0x18] = *(undefined4 *)(param_2 + 0x60);
  param_1[0x19] = *(undefined4 *)(param_2 + 100);
  param_1[0x1a] = *(undefined4 *)(param_2 + 0x68);
  param_1[0x1b] = *(undefined4 *)(param_2 + 0x6c);
  param_1[0x1c] = *(undefined4 *)(param_2 + 0x70);
  param_1[0x1d] = *(undefined4 *)(param_2 + 0x74);
  param_1[0x1e] = *(undefined4 *)(param_2 + 0x78);
  return param_1;
}

struct V_006b0fc0 {
    virtual void v0();
    virtual void g(int a0);
};

struct O_006b0fc0 { char pad[124]; V_006b0fc0* p; void sub_006b0fc0(int a0); };

// @baa 0x006b0fc0
void O_006b0fc0::sub_006b0fc0(int a0) { p->g(a0); }

struct V_006b0fd0 {
    virtual void v0();
    virtual void v1();
    virtual void g(int a0);
};

struct O_006b0fd0 { char pad[124]; V_006b0fd0* p; void sub_006b0fd0(int a0); };

// @baa 0x006b0fd0
void O_006b0fd0::sub_006b0fd0(int a0) { p->g(a0); }

struct V_006b0fe0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void g(int a0);
};

struct O_006b0fe0 { char pad[124]; V_006b0fe0* p; void sub_006b0fe0(int a0); };

// @baa 0x006b0fe0
void O_006b0fe0::sub_006b0fe0(int a0) { p->g(a0); }

struct D {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual int f4(int);
};

struct C_006b0ff0 {
    char pad[0x7c];
    D* p;
    int sub_006b0ff0(int x);
};

// @baa 0x006b0ff0
int C_006b0ff0::sub_006b0ff0(int x) {
    return p->f4(x);
}

struct D_006b1000 {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual int m(int);
};

struct C_006b1000 {
    char pad[0x7c];
    D_006b1000* p;
    int sub_006b1000(int x);
};

// @baa 0x006b1000
int C_006b1000::sub_006b1000(int x) {
    return p->m(x);
}

struct V_006b1010 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void g(int a0);
};

struct O_006b1010 { char pad[124]; V_006b1010* p; void sub_006b1010(int a0); };

// @baa 0x006b1010
void O_006b1010::sub_006b1010(int a0) { p->g(a0); }

struct V_006b1020 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void g(int a0);
};

struct O_006b1020 { char pad[124]; V_006b1020* p; void sub_006b1020(int a0); };

// @baa 0x006b1020
void O_006b1020::sub_006b1020(int a0) { p->g(a0); }

struct Inner {
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
};

struct C_006b1030 {
    char pad[0x7c];
    Inner* m;
    void sub_006b1030();
};

// @baa 0x006b1030
void C_006b1030::sub_006b1030()
{
    m->f9();
}

struct Obj10 {
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
};

struct C_006b1040 {
    char pad[0x7c];
    Obj10* p;
    void sub_006b1040();
};

// @baa 0x006b1040
void C_006b1040::sub_006b1040()
{
    p->f10();
}

struct S11 {
    virtual void f00();
    virtual void f01();
    virtual void f02();
    virtual void f03();
    virtual void f04();
    virtual void f05();
    virtual void f06();
    virtual void f07();
    virtual void f08();
    virtual void f09();
    virtual void f10();
    virtual void f11();
};

struct C_006b1050 {
    char pad[0x7c];
    S11* m;
    void sub_006b1050();
};

// @baa 0x006b1050
void C_006b1050::sub_006b1050()
{
    m->f11();
}

struct Base12 {
    virtual void v0() {}
    virtual void v1() {}
    virtual void v2() {}
    virtual void v3() {}
    virtual void v4() {}
    virtual void v5() {}
    virtual void v6() {}
    virtual void v7() {}
    virtual void v8() {}
    virtual void v9() {}
    virtual void v10() {}
    virtual void v11() {}
    virtual void slot12() {}
};

struct C_006b1060 {
    char pad[0x7c];
    Base12* field_7c;
    void sub_006b1060();
};

// @baa 0x006b1060
void C_006b1060::sub_006b1060() { field_7c->slot12(); }

struct V_006b1070 {
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
    virtual void g(int a0);
};

struct O_006b1070 { char pad[124]; V_006b1070* p; void sub_006b1070(int a0); };

// @baa 0x006b1070
void O_006b1070::sub_006b1070(int a0) { p->g(a0); }

struct V_006b1080 {
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
    virtual void g(int a0);
};

struct O_006b1080 { char pad[124]; V_006b1080* p; void sub_006b1080(int a0); };

// @baa 0x006b1080
void O_006b1080::sub_006b1080(int a0) { p->g(a0); }

struct V_006b1090 {
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
    virtual void g(int a0);
};

struct O_006b1090 { char pad[124]; V_006b1090* p; void sub_006b1090(int a0); };

// @baa 0x006b1090
void O_006b1090::sub_006b1090(int a0) { p->g(a0); }

struct V_006b10a0 {
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
    virtual void g(int a0);
};

struct O_006b10a0 { char pad[124]; V_006b10a0* p; void sub_006b10a0(int a0); };

// @baa 0x006b10a0
void O_006b10a0::sub_006b10a0(int a0) { p->g(a0); }

struct V_006b10b0 {
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
    virtual void g(int a0);
};

struct O_006b10b0 { char pad[124]; V_006b10b0* p; void sub_006b10b0(int a0); };

// @baa 0x006b10b0
void O_006b10b0::sub_006b10b0(int a0) { p->g(a0); }

struct Inner_006b10c0 {
    virtual void f00();
    virtual void f01();
    virtual void f02();
    virtual void f03();
    virtual void f04();
    virtual void f05();
    virtual void f06();
    virtual void f07();
    virtual void f08();
    virtual void f09();
    virtual void f10();
    virtual void f11();
    virtual void f12();
    virtual void f13();
    virtual void f14();
    virtual void f15();
    virtual void f16();
    virtual void f17();
    virtual void f18();
};

struct C_006b10c0 {
    char pad[0x7c];
    Inner_006b10c0* pInner;
    void sub_006b10c0();
};

// @baa 0x006b10c0
void C_006b10c0::sub_006b10c0() {
    pInner->f18();
}

struct D_006b10d0 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
};

struct C_006b10d0 {
    char pad[0x7c];
    D_006b10d0* d;
    void sub_006b10d0();
};

// @baa 0x006b10d0
void C_006b10d0::sub_006b10d0()
{
    ((D_006b10d0*)(this->d))->m19();
}

struct Tgt {
    virtual ~Tgt() {}
    virtual void v01() {}
    virtual void v02() {}
    virtual void v03() {}
    virtual void v04() {}
    virtual void v05() {}
    virtual void v06() {}
    virtual void v07() {}
    virtual void v08() {}
    virtual void v09() {}
    virtual void v10() {}
    virtual void v11() {}
    virtual void v12() {}
    virtual void v13() {}
    virtual void v14() {}
    virtual void v15() {}
    virtual void v16() {}
    virtual void v17() {}
    virtual void v18() {}
    virtual void v19() {}
    virtual void v20() {}
};

struct C_006b10e0 {
    char _pad[0x7c];
    Tgt *m_p;
    void sub_006b10e0();
};

// @baa 0x006b10e0
void C_006b10e0::sub_006b10e0()
{
    m_p->v20();
}

struct V_006b10f0 {
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
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void g(int a0);
};

struct O_006b10f0 { char pad[124]; V_006b10f0* p; void sub_006b10f0(int a0); };

// @baa 0x006b10f0
void O_006b10f0::sub_006b10f0(int a0) { p->g(a0); }

struct V_006b1100 {
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
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void g(int a0);
};

struct O_006b1100 { char pad[124]; V_006b1100* p; void sub_006b1100(int a0); };

// @baa 0x006b1100
void O_006b1100::sub_006b1100(int a0) { p->g(a0); }

struct V_006b1110 {
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
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void g(int a0);
};

struct O_006b1110 { char pad[124]; V_006b1110* p; void sub_006b1110(int a0); };

// @baa 0x006b1110
void O_006b1110::sub_006b1110(int a0) { p->g(a0); }

struct C_006b1120 {
    undefined4 * sub_006b1120(byte);
};

// @baa 0x006b1120
undefined4 * C_006b1120::sub_006b1120(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e72a60);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_006ba380 {
    FString sub_006ba380();
};

// @baa 0x006ba380
FString C_006ba380::sub_006ba380()
{
    return TEXT("");
}

int sub_0053df40(...);
extern undefined * g_01ece6a0;
// @baa 0x006ba4b0
undefined4 * sub_006ba4b0(void)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0053df40(0x1c,8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (undefined4)(&g_01ece6a0);
    *(undefined2 *)(puVar1 + 2) = 0;
    *(undefined2 *)((int)puVar1 + 0xe) = 0;
    *(undefined2 *)(puVar1 + 5) = 0;
    *(undefined2 *)((int)puVar1 + 0x1a) = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

extern undefined * g_01ece72c;
// @baa 0x006ba4e0
undefined4 * sub_006ba4e0(void)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0053df40(0x30,8);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined2 *)(puVar1 + 2) = 0;
    *(undefined2 *)((int)puVar1 + 0xe) = 0;
    *(undefined2 *)(puVar1 + 5) = 0;
    *(undefined2 *)((int)puVar1 + 0x1a) = 0;
    *puVar1 = (undefined4)(&g_01ece72c);
    *(undefined2 *)(puVar1 + 8) = 0;
    *(undefined2 *)((int)puVar1 + 0x26) = 0;
    *(undefined2 *)(puVar1 + 0xb) = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}
