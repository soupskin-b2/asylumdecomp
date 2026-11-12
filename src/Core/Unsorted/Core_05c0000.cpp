// Core_05c0000.cpp (part 1 of 3): 180 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C {
    int sub_005c1840();
};

// @baa 0x005c1840
int C::sub_005c1840(void)
{
    int param_1 = (int)this;

  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  for (puVar1 = *(undefined4 **)(param_1 + 0x14); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    iVar2 = iVar2 + puVar1[1];
  }
  return iVar2;
}

struct C_005c18f0 {
    void sub_005c18f0(uint, uint);
};

// @baa 0x005c18f0
void C_005c18f0::sub_005c18f0(uint param_2, uint param_3)
{
    uint * param_1 = (uint *)this;

  *param_1 = *param_1 | param_2;
  param_1[1] = param_1[1] | param_3;
  return;
}

struct C_005c1900 {
    void sub_005c1900(uint, uint);
};

// @baa 0x005c1900
void C_005c1900::sub_005c1900(uint param_2, uint param_3)
{
    uint * param_1 = (uint *)this;

  *param_1 = *param_1 & ~param_2;
  param_1[1] = param_1[1] & ~param_3;
  return;
}

struct C_005c1920 { int sub_005c1920(void); };

// @baa 0x005c1920
int C_005c1920::sub_005c1920(void) { return *(int*)((char*)this + 4); }

// @baa 0x005c1990
int sub_005c1990(void) { return 65536; }

struct C_005c19a0 {
    void sub_005c19a0();
};

int sub_0053df40(...);
// @baa 0x005c19a0
void C_005c19a0::sub_005c19a0(void)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[2] = param_1[2] + 1;
  iVar1 = sub_0053df40(0x10000,8);
  *param_1 = iVar1;
  param_1[1] = iVar1 + 0x10000;
  return;
}

// @baa 0x005c19d0
void sub_005c19d0(void) {  }

// @baa 0x005c19e0
void sub_005c19e0(void) {  }

// @baa 0x005c19f0
void UObject::vf_03c(void) {  }

struct C_view {
    virtual void vf_000();
    virtual void vf_004();
    virtual void vf_008();
    virtual void vf_00c();
    virtual void vf_010();
    virtual void vf_014();
    virtual void vf_018(int);
};

// @baa 0x005c1a00
void UObject::PreEditChange(UProperty* a)
{
    vf_018(0);
}

struct V_005c1a30 {
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
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void g(int a0);
    void sub_005c1a30(int a0);
};

// @baa 0x005c1a30
void V_005c1a30::sub_005c1a30(int a0) { g(a0); }

struct C_005c1a40 {
    virtual void f00(); virtual void f01(); virtual void f02(); virtual void f03();
    virtual void f04(); virtual void f05(); virtual void f06(); virtual void f07();
    virtual void f08(); virtual void f09(); virtual void f10(); virtual void f11();
    virtual void f12(); virtual void f13(); virtual void f14(); virtual void f15();
    virtual void f16();
    virtual void f17(int);
    void sub_005c1a40();
};

// @baa 0x005c1a40
void C_005c1a40::sub_005c1a40() { f17(0); }

// slot-19 forwarder: call virtual at vtable offset 0x4c with arg 0
struct UThing {
    virtual void a() {}
    virtual void b() {}
    virtual void c() {}
    virtual void d() {}
    virtual void e() {}
    virtual void f() {}
    virtual void g() {}
    virtual void h() {}
    virtual void i() {}
    virtual void j() {}
    virtual void k() {}
    virtual void l() {}
    virtual void m() {}
    virtual void n() {}
    virtual void o() {}
    virtual void p() {}
    virtual void q() {}
    virtual void r() {}
    virtual void s() {}
    virtual void tgt(int);   // index 19 -> offset 0x4c
    virtual void sub_005c1a50();
};

void UThing::tgt(int) {}

// @baa 0x005c1a50
void UThing::sub_005c1a50()
{
    tgt(0);
}

struct C_005c1a60 {
    virtual void f00(); virtual void f01(); virtual void f02(); virtual void f03();
    virtual void f04(); virtual void f05(); virtual void f06(); virtual void f07();
    virtual void f08(); virtual void f09(); virtual void f10(); virtual void f11();
    virtual void f12(); virtual void f13(); virtual void f14(); virtual void f15();
    virtual void f16();
    virtual void f17(int);
    void sub_005c1a60();
};

// @baa 0x005c1a60
void C_005c1a60::sub_005c1a60() { f17(0); }

struct C_005c1a70 {
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
    virtual void v12() {}
    virtual void v13() {}
    virtual void v14() {}
    virtual void v15() {}
    virtual void v16() {}
    virtual void v17() {}
    virtual void v18() {}
    virtual void target(int) = 0;
    void sub_005c1a70();
};

// @baa 0x005c1a70
void C_005c1a70::sub_005c1a70() { target(0); }

struct C_005c1a80 {
    virtual void f00(); virtual void f01(); virtual void f02(); virtual void f03();
    virtual void f04(); virtual void f05(); virtual void f06(); virtual void f07();
    virtual void f08(); virtual void f09(); virtual void f10(); virtual void f11();
    virtual void f12(); virtual void f13(); virtual void f14(); virtual void f15();
    virtual void f16();
    virtual void f17(int);
    void sub_005c1a80();
};

// @baa 0x005c1a80
void C_005c1a80::sub_005c1a80() { f17(0); }

// slot-19 forwarder: call virtual at vtable offset 0x4c with arg 0
struct UThing_005c1a90 {
    virtual void a() {}
    virtual void b() {}
    virtual void c() {}
    virtual void d() {}
    virtual void e() {}
    virtual void f() {}
    virtual void g() {}
    virtual void h() {}
    virtual void i() {}
    virtual void j() {}
    virtual void k() {}
    virtual void l() {}
    virtual void m() {}
    virtual void n() {}
    virtual void o() {}
    virtual void p() {}
    virtual void q() {}
    virtual void r() {}
    virtual void s() {}
    virtual void tgt(int);   // index 19 -> offset 0x4c
    virtual void sub_005c1a90();
};

void UThing_005c1a90::tgt(int) {}

// @baa 0x005c1a90
void UThing_005c1a90::sub_005c1a90()
{
    tgt(0);
}

// @baa 0x005c1aa0
void __stdcall sub_005c1aa0(int a0) {  }

extern char g_025d6730[];
// @baa 0x005c1dd0
int sub_005c1dd0(void) { return (int)g_025d6730; }

struct C_005c1e50 { int a, b, c; C_005c1e50(); };

// @baa 0x005c1e50
C_005c1e50::C_005c1e50() : a(0), b(0), c(0) {}

// @baa 0x005c1e60
int UObject::sub_005c1e60(void) { return *(int*)((char*)this + 4); }

struct C_005c1e70 { int a, b, c; C_005c1e70(); };

// @baa 0x005c1e70
C_005c1e70::C_005c1e70() : a(0), b(0), c(0) {}

struct C_005c1e80 { int a, b, c; C_005c1e80(); };

// @baa 0x005c1e80
C_005c1e80::C_005c1e80() : a(0), b(0), c(0) {}

// @baa 0x005c1e90
int UObject::sub_005c1e90(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) >> 1;
}

int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
// @baa 0x005c1ea0
int UObject::sub_005c1ea0(void)
{
    int param_1 = (int)this;

  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    sub_006311e0("!IsUnicode()",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\UnName.h"
                 ,0xa1,&g_01e3f3dc);
  }
  return param_1 + 0x10;
}

// @baa 0x005c1ed0
int UObject::sub_005c1ed0(void) { return *(int*)((char*)this + 4); }

extern char g_026a1df4[];
// @baa 0x005c1ee0
int sub_005c1ee0(void) { return (int)g_026a1df4; }

struct C_005c1ef0 { int a, b, c; C_005c1ef0(); };

// @baa 0x005c1ef0
C_005c1ef0::C_005c1ef0() : a(0), b(0), c(0) {}

// @baa 0x005c1f00
undefined4 UObject::sub_005c1f00(void)
{
    int param_1 = (int)this;

  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x10);
  if ((((cVar1 != '\x01') && (cVar1 != '\x05')) && (cVar1 != '\x03')) && (cVar1 != '\x04')) {
    return 0;
  }
  return 1;
}

// @baa 0x005c1f20
undefined4 UObject::sub_005c1f20(void)
{
    int param_1 = (int)this;

  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x1c);
  if ((((cVar1 != '\x01') && (cVar1 != '\x05')) && (cVar1 != '\x03')) && (cVar1 != '\x04')) {
    return 0;
  }
  return 1;
}

// @baa 0x005c1f40
undefined4 UObject::sub_005c1f40(void)
{
    int param_1 = (int)this;

  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x28);
  if ((((cVar1 != '\x01') && (cVar1 != '\x05')) && (cVar1 != '\x03')) && (cVar1 != '\x04')) {
    return 0;
  }
  return 1;
}

struct C_005c1f60 {
    undefined4 sub_005c1f60();
};

// @baa 0x005c1f60
undefined4 C_005c1f60::sub_005c1f60(void)
{
    int param_1 = (int)this;

  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x4c);
  if ((((cVar1 != '\x01') && (cVar1 != '\x05')) && (cVar1 != '\x03')) && (cVar1 != '\x04')) {
    return 0;
  }
  return 1;
}

struct C_005c1fb0 { C_005c1fb0* sub_005c1fb0(void); };

// @baa 0x005c1fb0
C_005c1fb0* C_005c1fb0::sub_005c1fb0(void) { return this; }

struct C_005c1ff0 {
    undefined1 sub_005c1ff0();
};

// @baa 0x005c1ff0
undefined1 C_005c1ff0::sub_005c1ff0(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x50);
}

struct C_005c2060 { int a, b, c; C_005c2060(); };

// @baa 0x005c2060
C_005c2060::C_005c2060() : a(0), b(0), c(0) {}

// @baa 0x005c2070
int UObject::sub_005c2070(void) { return *(int*)((char*)this + 4); }

struct C_005c20d0 { int a, b, c; C_005c20d0(); };

// @baa 0x005c20d0
C_005c20d0::C_005c20d0() : a(0), b(0), c(0) {}

// @baa 0x005c2100
int UObject::sub_005c2100(void) { return *(int*)((char*)this + 4); }

// @baa 0x005c2110
int sub_005c2110(int a0, int a1) { return a1; }

struct C_005c2120 { int a, b, c; C_005c2120(); };

// @baa 0x005c2120
C_005c2120::C_005c2120() : a(0), b(0), c(0) {}

// @baa 0x005c2130
int UObject::sub_005c2130(void) { return *(int*)((char*)this + 4); }

struct C_005c2160 { int a, b, c; C_005c2160(); };

// @baa 0x005c2160
C_005c2160::C_005c2160() : a(0), b(0), c(0) {}

// @baa 0x005c2170
int UObject::sub_005c2170(void) { return *(int*)((char*)this + 4); }

// @baa 0x005c2180
int UObject::sub_005c2180(void) { return *(int*)((char*)this + 4); }

struct C_005c2190 { C_005c2190* sub_005c2190(int a0); };

// @baa 0x005c2190
C_005c2190* C_005c2190::sub_005c2190(int a0) { return this; }

// @baa 0x005c21a0
int UObject::sub_005c21a0(void) { return *(int*)((char*)this + 0); }

// @baa 0x005c21e0
int UObject::sub_005c21e0(void) { return *(int*)((char*)this + 0); }

// @baa 0x005c2260
int UObject::sub_005c2260(void) { return *(int*)((char*)this + 0); }

struct C_005c22e0 { int sub_005c22e0(void); };

// @baa 0x005c22e0
int C_005c22e0::sub_005c22e0(void) { return *(int*)((char*)this + 0); }

struct C_005c22f0 { int sub_005c22f0(void); };

// @baa 0x005c22f0
int C_005c22f0::sub_005c22f0(void) { return *(int*)((char*)this + 0); }

struct C_005c2370 { int sub_005c2370(void); };

// @baa 0x005c2370
int C_005c2370::sub_005c2370(void) { return *(int*)((char*)this + 0); }

struct C_005c23f0 { int sub_005c23f0(void); };

// @baa 0x005c23f0
int C_005c23f0::sub_005c23f0(void) { return *(int*)((char*)this + 0); }

struct C_005c2400 {
    int sub_005c2400();
};

// @baa 0x005c2400
int C_005c2400::sub_005c2400(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_005c2410 { int a, b; C_005c2410(int, int); };

// @baa 0x005c2410
C_005c2410::C_005c2410(int x, int y) : a(x), b(y) {}

struct C_005c2430 {
    int sub_005c2430();
};

// @baa 0x005c2430
int C_005c2430::sub_005c2430(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_005c2440 { int a, b; C_005c2440(int, int); };

// @baa 0x005c2440
C_005c2440::C_005c2440(int x, int y) : a(x), b(y) {}

struct C_005c2460 {
    int sub_005c2460();
};

// @baa 0x005c2460
int C_005c2460::sub_005c2460(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_005c2470 {
    int sub_005c2470();
};

// @baa 0x005c2470
int C_005c2470::sub_005c2470(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_005c2480 { int a, b; C_005c2480(int, int); };

// @baa 0x005c2480
C_005c2480::C_005c2480(int x, int y) : a(x), b(y) {}

struct C_005c24a0 { int sub_005c24a0(void); };

// @baa 0x005c24a0
int C_005c24a0::sub_005c24a0(void) { return *(int*)((char*)this + 0); }

struct C_005c24b0 { int sub_005c24b0(void); };

// @baa 0x005c24b0
int C_005c24b0::sub_005c24b0(void) { return *(int*)((char*)this + 0); }

// @baa 0x005c24c0
int sub_005c24c0(int a0) { return *(int*)a0; }

struct C_005c2530 {
    void sub_005c2530(int *);
};

// @baa 0x005c2530
void C_005c2530::sub_005c2530(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = *(int *)(param_1 + 0x10);
  return;
}

// @baa 0x005c2570
undefined4 sub_005c2570(undefined4 * param_1)
{
  return *param_1;
}

// @baa 0x005c2580
bool sub_005c2580(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_005c25b0 {
    void sub_005c25b0(undefined4 *);
};

// @baa 0x005c25b0
void C_005c25b0::sub_005c25b0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

struct C_005c2600 { int sub_005c2600(void); };

// @baa 0x005c2600
int C_005c2600::sub_005c2600(void) { return *(int*)((char*)this + 0); }

struct C_005c2610 { int sub_005c2610(void); };

// @baa 0x005c2610
int C_005c2610::sub_005c2610(void) { return *(int*)((char*)this + 0); }

// @baa 0x005c2670
int sub_005c2670(int a0) { return *(int*)a0; }

struct C_005c2680 {
    void sub_005c2680(int *);
};

// @baa 0x005c2680
void C_005c2680::sub_005c2680(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 0xc;
  return;
}

struct C_005c26d0 { int sub_005c26d0(void); };

// @baa 0x005c26d0
int C_005c26d0::sub_005c26d0(void) { return *(int*)((char*)this + 0); }

struct C_005c26e0 { int sub_005c26e0(void); };

// @baa 0x005c26e0
int C_005c26e0::sub_005c26e0(void) { return *(int*)((char*)this + 0); }

struct C_005c26f0 { int sub_005c26f0(void); };

// @baa 0x005c26f0
int C_005c26f0::sub_005c26f0(void) { return *(int*)((char*)this + 0); }

struct C_005c2700 { int sub_005c2700(void); };

// @baa 0x005c2700
int C_005c2700::sub_005c2700(void) { return *(int*)((char*)this + 0); }

int sub_00627f70(...);
// @baa 0x005c2710
void sub_005c2710(undefined4 param_1)
{
  sub_00627f70(param_1,0x10,0);
  return;
}

struct C_005c2750 { int sub_005c2750(void); };

// @baa 0x005c2750
int C_005c2750::sub_005c2750(void) { return *(int*)((char*)this + 8) - *(int*)((char*)this + 4); }

struct C_005c2760 {
    void sub_005c2760();
};

int sub_0053df70(...);
// @baa 0x005c2760
void C_005c2760::sub_005c2760(void)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  iVar1 = param_1[1];
  if (param_1[2] != iVar1) {
    param_1[2] = iVar1;
    if ((*param_1 != 0) || (iVar1 != 0)) {
      iVar1 = sub_0053df70(*param_1,iVar1 * 0x14,8);
      *param_1 = iVar1;
    }
  }
  return;
}

#pragma pack(push, 1)
struct CRect { char _pad0[1]; };

#pragma pack(pop)
struct C_005c2980 {
    void sub_005c2980(int, int, int, int);
};

int sub_00630f20(...);
// @baa 0x005c2980
void C_005c2980::sub_005c2980(int param_1, int param_2, int param_3, int param_4)
{
    CRect * this_ = (CRect *)this;
  sub_00630f20(this_,param_1,param_2,param_3,param_4);
  return;
}

struct C_005c29a0 {
    void sub_005c29a0(undefined4, undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x005c29a0
void C_005c29a0::sub_005c29a0(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
    undefined4 param_1 = (undefined4)this;
  sub_00630f20(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

// @baa 0x005c29d0
uint sub_005c29d0(uint param_1, uint param_2)
{
  if (param_1 < param_2) {
    param_1 = param_2;
  }
  return param_1;
}

struct C_005c2a30 {
    undefined4 sub_005c2a30(int *);
};

// @baa 0x005c2a30
undefined4 C_005c2a30::sub_005c2a30(int * param_2)
{
    int * param_1 = (int *)this;

  if (((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) {
    return 1;
  }
  return 0;
}

struct C_005c2a60 {
    void sub_005c2a60(undefined4, undefined4);
};

// @baa 0x005c2a60
void C_005c2a60::sub_005c2a60(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,param_3);
  return;
}

#pragma pack(push, 1)
#pragma pack(pop)
struct C_005c2a80 {
    void sub_005c2a80(int, int, int, int);
};

// @baa 0x005c2a80
void C_005c2a80::sub_005c2a80(int param_1, int param_2, int param_3, int param_4)
{
    CRect * this_ = (CRect *)this;

  sub_00630f20(this_,param_1,param_2,param_3,param_4);
  return;
}

struct C_005c2aa0 {
    void sub_005c2aa0(undefined4, undefined4, undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x005c2aa0
void C_005c2aa0::sub_005c2aa0(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}

struct C_005c2ad0 {
    void sub_005c2ad0(undefined4, undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x005c2ad0
void C_005c2ad0::sub_005c2ad0(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

struct C_005c2b00 { C_005c2b00* sub_005c2b00(void); };

// @baa 0x005c2b00
C_005c2b00* C_005c2b00::sub_005c2b00(void) { return this; }

struct C_005c2b10 {
    void sub_005c2b10(undefined4, undefined4, undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x005c2b10
void C_005c2b10::sub_005c2b10(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}

struct C_005c2b40 {
    void sub_005c2b40(undefined4, undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x005c2b40
void C_005c2b40::sub_005c2b40(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

struct C_005c2b70 {
    void sub_005c2b70(undefined4, undefined4, undefined4);
};

// @baa 0x005c2b70
void C_005c2b70::sub_005c2b70(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,param_3,param_4);
  return;
}

#pragma pack(push, 1)
#pragma pack(pop)
struct C_005c2b90 {
    void sub_005c2b90(int, int, int, int);
};

// @baa 0x005c2b90
void C_005c2b90::sub_005c2b90(int param_1, int param_2, int param_3, int param_4)
{
    CRect * this_ = (CRect *)this;

  sub_00630f20(this_,param_1,param_2,param_3,param_4);
  return;
}

struct C_005c2c00 {
    void sub_005c2c00(undefined4, undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x005c2c00
void C_005c2c00::sub_005c2c00(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

struct C_005c2c30 {
    void sub_005c2c30(undefined4, undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x005c2c30
void C_005c2c30::sub_005c2c30(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

struct C_005c2c60 {
    void sub_005c2c60(undefined4, undefined4, undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x005c2c60
void C_005c2c60::sub_005c2c60(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}

struct C_005c2c90 {
    void sub_005c2c90(undefined4, undefined4, undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x005c2c90
void C_005c2c90::sub_005c2c90(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}

struct C_005c2cf0 {
    void sub_005c2cf0(undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x005c2cf0
void C_005c2cf0::sub_005c2cf0(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9, undefined4 param_10, undefined4 param_11, undefined4 param_12, undefined4 param_13)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,param_13);
  return;
}

// @baa 0x005c2da0
uint sub_005c2da0(int param_1, int param_2)
{
  return param_1 + -1 + param_2 & ~(param_2 - 1U);
}

int sub_00627f00(...);
// @baa 0x005c2de0
void sub_005c2de0(undefined4 param_1, undefined4 param_2)
{
  sub_00627f00(param_1,param_2,0xc);
  return;
}

struct E { BYTE Bytes[12]; };

struct S {
    TArray<E> Items; // 0x00
    const E* sub_005c2ee0(INT Index) const;
};

// @baa 0x005c2ee0
const E* S::sub_005c2ee0(INT Index) const
{
    return &Items(Index);
}

// @baa 0x005c2fa0
int sub_005c2fa0(int a0) { return a0; }

// @baa 0x005c2fb0
int sub_005c2fb0(int a0) { return a0; }

// @baa 0x005c3060
void sub_005c3060(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x005c3080
void sub_005c3080(undefined4 param_1, undefined4 param_2)
{
  sub_00627f00(param_1,param_2,0x30);
  return;
}

struct C_005c32b0 { int sub_005c32b0(void); };

// @baa 0x005c32b0
int C_005c32b0::sub_005c32b0(void) { return *(int*)((char*)this + 68); }

struct C_005c32c0 { void sub_005c32c0(int a0); };

// @baa 0x005c32c0
void C_005c32c0::sub_005c32c0(int a0) { *(int*)((char*)this + 68) = a0; }

// @baa 0x005c32d0
int __stdcall sub_005c32d0(int a0) { return 0; }

// @baa 0x005c32e0
int sub_005c32e0(void) { return 0; }

struct S_005c32f0 {
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void vf_0c();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18(INT Value);
};

// @baa 0x005c32f0
void sub_005c32f0(S_005c32f0* p, INT Value)
{
    p->vf_18(Value);
}

struct C_005c3330 { int sub_005c3330(void); };

// @baa 0x005c3330
int C_005c3330::sub_005c3330(void) { return *(int*)((char*)this + 0); }

struct C_005c3340 { void sub_005c3340(int a0); };

// @baa 0x005c3340
void C_005c3340::sub_005c3340(int a0) { *(int*)((char*)this + 28) = a0; }

struct C_005c3350 {
    int Unk0;
    int Unk4;
    int sub_005c3350();
};

// @baa 0x005c3350
int C_005c3350::sub_005c3350()
{
    return Unk4 == 0 ? -1 : 0;
}

struct C_005c3360 { int sub_005c3360(void); };

// @baa 0x005c3360
int C_005c3360::sub_005c3360(void) { return *(int*)((char*)this + 4); }

struct C_005c3370 { int sub_005c3370(void); };

// @baa 0x005c3370
int C_005c3370::sub_005c3370(void) { return *(int*)((char*)this + 4); }

// @baa 0x005c33e0
int sub_005c33e0(int param_1)
{
  if ((param_1 == 0) || ((*(byte *)(*(int *)(param_1 + 0x28) + 0xde) & 1) == 0)) {
    param_1 = 0;
  }
  return param_1;
}

// @baa 0x005c3400
int sub_005c3400(int param_1)
{
  if ((param_1 == 0) || ((*(uint *)(*(int *)(param_1 + 0x28) + 0xdc) & 0x4000) == 0)) {
    param_1 = 0;
  }
  return param_1;
}

// @baa 0x005c3420
int sub_005c3420(int param_1)
{
  if ((param_1 == 0) || ((*(uint *)(*(int *)(param_1 + 0x28) + 0xdc) & 0x400000) == 0)) {
    param_1 = 0;
  }
  return param_1;
}

struct C_005c3480 { int sub_005c3480(void); };

// @baa 0x005c3480
int C_005c3480::sub_005c3480(void) { return *(int*)((char*)this + 124); }

struct C_005c3490 { int sub_005c3490(void); };

// @baa 0x005c3490
int C_005c3490::sub_005c3490(void) { return *(int*)((char*)this + 128); }

extern char g_01e72a60[];
struct C_005c34a0 { void sub_005c34a0(void); };

// @baa 0x005c34a0
void C_005c34a0::sub_005c34a0(void) { *(int*)((char*)this + 0) = (int)g_01e72a60; }

// @baa 0x005c34b0
undefined2 sub_005c34b0(void)
{
  return 0x73;
}

struct C_005c34c0 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_005c34c0(INT Index);
};

// @baa 0x005c34c0
UBOOL C_005c34c0::sub_005c34c0(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_005c34e0 { int a, b, c; C_005c34e0(); };

// @baa 0x005c34e0
C_005c34e0::C_005c34e0() : a(0), b(0), c(0) {}

struct C_005c34f0 { int sub_005c34f0(void); };

// @baa 0x005c34f0
int C_005c34f0::sub_005c34f0(void) { return *(int*)((char*)this + 0); }

struct C_005c75c0 {
    undefined4 sub_005c75c0(byte);
};

int sub_0053dfa0(...);
int sub_005c7560(void);
// @baa 0x005c75c0
undefined4 C_005c75c0::sub_005c75c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_005c7560();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern undefined1 g_026a1df0;
// @baa 0x005c7a10
undefined1 sub_005c7a10(void)
{
  return g_026a1df0;
}

extern char g_01e98b98[];
struct C_005c7a20 { C_005c7a20* sub_005c7a20(void); };

// @baa 0x005c7a20
C_005c7a20* C_005c7a20::sub_005c7a20(void) { *(int*)((char*)this + 0) = (int)g_01e98b98; return this; }

struct FFaceFXElement
{
	INT X;    // 0x00
	INT Y;    // 0x04
	INT Z;    // 0x08
	INT W;    // 0x0c
	INT Unk10;// 0x10
};

struct UFxRenderWidget
{
	TArray<FFaceFXElement> BoneArray; // 0x00
	FFaceFXElement* sub_005c84c0(INT Index);
};

// @baa 0x005c84c0
FFaceFXElement* UFxRenderWidget::sub_005c84c0(INT Index)
{
	return &BoneArray(Index);
}

struct C_005c8510{
int sub_005c8510(undefined4*);
};

int sub_0053d240(...);
// @baa 0x005c8510
int C_005c8510::sub_005c8510(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],0x14);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3!=0)){
iVar3=sub_0053df70(*param_1,iVar3*0x14,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+iVar2*0x14);
if((undefined4*)0x0!=puVar1){
*puVar1=*param_2;
puVar1[1]=param_2[1];
puVar1[2]=param_2[2];
puVar1[3]=param_2[3];
puVar1[4]=param_2[4];
}
return iVar2;
}

struct E_005c8590 { BYTE Bytes[16]; };

struct S_005c8590 {
    TArray<E_005c8590> Items; // 0x00
    E_005c8590* sub_005c8590(INT Index);
};

// @baa 0x005c8590
E_005c8590* S_005c8590::sub_005c8590(INT Index)
{
    return &Items(Index);
}

struct C_005c85e0 {
    int sub_005c85e0(int);
};

// @baa 0x005c85e0
int C_005c85e0::sub_005c85e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_005c85f0 {
    int sub_005c85f0(int);
};

// @baa 0x005c85f0
int C_005c85f0::sub_005c85f0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

// @baa 0x005c8600
void __stdcall sub_005c8600(int a0, int a1) {  }

struct C_005c8610 {
    int sub_005c8610(int);
};

// @baa 0x005c8610
int C_005c8610::sub_005c8610(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_005c8620 {
    int sub_005c8620(int);
};

// @baa 0x005c8620
int C_005c8620::sub_005c8620(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x5c + *param_1;
}

struct C_005c8630 {
    int sub_005c8630(int);
};

// @baa 0x005c8630
int C_005c8630::sub_005c8630(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_005c8640 {
    int sub_005c8640(int);
};

// @baa 0x005c8640
int C_005c8640::sub_005c8640(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

// @baa 0x005c8650
void __stdcall sub_005c8650(int a0, int a1) {  }

struct C_005c8660 {
    int sub_005c8660(int);
};

// @baa 0x005c8660
int C_005c8660::sub_005c8660(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

// @baa 0x005c8670
void __stdcall sub_005c8670(int a0, int a1) {  }

struct C_005c8680 {
    int sub_005c8680(int);
};

// @baa 0x005c8680
int C_005c8680::sub_005c8680(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x005c8690
void __stdcall sub_005c8690(int a0, int a1) {  }

struct M_005c86a0 { void sub_00547290(); };

struct C_005c86a0 { char pad[8]; M_005c86a0 m; void sub_005c86a0(); };

// @baa 0x005c86a0
void C_005c86a0::sub_005c86a0() { m.sub_00547290(); }

struct C_005c86b0 { int sub_005c86b0(void); };

// @baa 0x005c86b0
int C_005c86b0::sub_005c86b0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

int sub_005413d0(...);
// @baa 0x005c86c0
void sub_005c86c0(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_005c86f0 { int sub_005c86f0(void); };

// @baa 0x005c86f0
int C_005c86f0::sub_005c86f0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct S_005c8700 { int sub_00544d40(int); };

// @baa 0x005c8700
int sub_005c8700(S_005c8700 *s, int a) { return s->sub_00544d40(a); }

struct C_005c8760 { int sub_005c8760(void); };

// @baa 0x005c8760
int C_005c8760::sub_005c8760(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_005c8770 {
    int sub_005c8770(int);
};

// @baa 0x005c8770
int C_005c8770::sub_005c8770(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

#pragma pack(push, 1)
#pragma pack(pop)
struct C_005c8bf0 {
    void sub_005c8bf0(int, int, int, int);
};

// @baa 0x005c8bf0
void C_005c8bf0::sub_005c8bf0(int param_1, int param_2, int param_3, int param_4)
{
    CRect * this_ = (CRect *)this;

  sub_00630f20(this_,param_1,param_2,param_3,param_4);
  return;
}

#pragma pack(push, 1)
#pragma pack(pop)
struct C_005c8c10 {
    void sub_005c8c10(int, int, int, int);
};

// @baa 0x005c8c10
void C_005c8c10::sub_005c8c10(int param_1, int param_2, int param_3, int param_4)
{
    CRect * this_ = (CRect *)this;

  sub_00630f20(this_,param_1,param_2,param_3,param_4);
  return;
}

int sub_00588dd0(...);
int sub_00589470(void);
extern undefined4 g_02688448;
// @baa 0x005c8da0
int sub_005c8da0(int param_1)
{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x28);
    if (g_02688448 == 0) {
      g_02688448 = sub_00588dd0(L"Core");
      sub_00589470();
    }
    if (iVar1 == g_02688448) {
      return param_1;
    }
  }
  return 0;
}

// @baa 0x005c8de0
void sub_005c8de0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
  }
  return;
}

// @baa 0x005c8e10
void sub_005c8e10(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return;
}

// @baa 0x005c8e60
void sub_005c8e60(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return;
}

// @baa 0x005c8eb0
void UObject::sub_005c8eb0(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0xc,8);
      *param_1 = iVar1;
    }
  }
  return;
}

// @baa 0x005c8f90
void sub_005c8f90(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

extern "C" void sub_005c3380();
struct CNode {
    // 0x00
    void* Unk00;
    // 0x04
    void* Unk04;
    void sub_005c9030();
};

// @baa 0x005c9030
void CNode::sub_005c9030()
{
    Unk04 = *(void**)((char*)Unk04 + 0x34);
    sub_005c3380();
}

struct C_005c90c0 {
    void sub_005c90c0(int, int);
};

// @baa 0x005c90c0
void C_005c90c0::sub_005c90c0(int param_2, int param_3)
{
    int param_1 = (int)this;

  *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + param_2;
  *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + param_3;
  return;
}

struct C_005c90e0 {
    undefined4 * sub_005c90e0(byte);
};

// @baa 0x005c90e0
undefined4 * C_005c90e0::sub_005c90e0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e72a60);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_005c9100 {
    int sub_005c9100(int);
};

// @baa 0x005c9100
int C_005c9100::sub_005c9100(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_005cac30 {
    void sub_005cac30();
};

// @baa 0x005cac30
void C_005cac30::sub_005cac30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  undefined4 uVar1;
  
  uVar1 = param_1[2];
  sub_005c7560();
  param_1[2] = uVar1;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_005cb790 { void* Data; int Num; int Max; void sub_005cb790(); };

// @baa 0x005cb790
void C_005cb790::sub_005cb790() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x005cb7f0
void UObject::sub_005cb7f0(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x14,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_view_005cb830 {
    int sub_00417ef0(int);
};

extern undefined4 g_01e98d0c;
// @baa 0x005cb830
undefined4 * UObject::sub_005cb830(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view_005cb830 *)(((char *)this + 0x10)))->sub_00417ef0(param_2);
  param_1[1] = 1;
  param_1[3] = 1;
  param_1[2] = 0;
  *param_1 = (undefined4)(&g_01e98d0c);
  return param_1;
}

struct Sub {
    void sub_00544b60(int);
};

struct C_005cb860 {
    char pad[0x10];
    Sub s;
    void sub_005cb860(int a1, int a2);
};

// @baa 0x005cb860
void C_005cb860::sub_005cb860(int a1, int a2)
{
    s.sub_00544b60(a1);
}

struct C_005cb880 { void* Data; int Num; int Max; void sub_005cb880(); };

// @baa 0x005cb880
void C_005cb880::sub_005cb880() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x005cb8e0
void UObject::sub_005cb8e0(int param_2)
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

struct Inner {
    int* data;
    Inner();
    ~Inner();
};

struct Outer_005cb9e0 : Inner {
    int num;
    int max;
    void sub_00549650(int* p);
    Outer_005cb9e0(int* p);
};

Inner::Inner()
{
    data = 0;
}

// @baa 0x005cb9e0
Outer_005cb9e0::Outer_005cb9e0(int* p)
{
    num = 0;
    max = 0;
    sub_00549650(p);
}

// @baa 0x005cbac0
void UObject::sub_005cbac0(int param_2)
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

struct C_005cbb00 { void* Data; int Num; int Max; void sub_005cbb00(); };

// @baa 0x005cbb00
void C_005cbb00::sub_005cbb00() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x005cbb60
int UObject::sub_005cbb60(void)
{
    int param_1 = (int)this;
  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_005cbb80 { void* Data; int Num; int Max; void sub_005cbb80(); };

// @baa 0x005cbb80
void C_005cbb80::sub_005cbb80() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_005cbbe0 { void* Data; int Num; int Max; void sub_005cbbe0(); };

// @baa 0x005cbbe0
void C_005cbbe0::sub_005cbbe0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x005cbc40
void __stdcall sub_005cbc40(DWORD a1, DWORD a2)
{
}

// @baa 0x005cbd50
int UObject::sub_005cbd50(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

// @baa 0x005cbd60
int UObject::sub_005cbd60(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_view_005cbdd0 {
    int sub_00547290();
};

// @baa 0x005cbdd0
undefined4 UObject::sub_005cbdd0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_005cbdd0 *)(((char *)this + 8)))->sub_00547290();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x005cbe00
int UObject::sub_005cbe00(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

extern DWORD g_026a1c58;
extern DWORD g_026a1c5c;
struct UObject_ : public UObject
{
    DWORD sub_005c2140();
};

// @baa 0x005c2140
DWORD UObject_::sub_005c2140()
{
    if (this < (UObject*)g_026a1c58 || this >= (UObject*)g_026a1c5c)
        return 0;
    return 1;
}

struct FThreeWords
{
	INT X;
	INT Y;
	INT Z;

	FThreeWords& sub_005c2e30(const FThreeWords& Other)
	{
		X = Other.X;
		Y = Other.Y;
		Z = Other.Z;
		return *this;
	}
};

// @baa 0x005c2e30
FThreeWords& fwords_assign_helper(FThreeWords& A, const FThreeWords& B)
{
	return A.sub_005c2e30(B);
}

/* Kit gap: FRotationMatrix (constructor out of line, 004029a0) and FMatrix::GetAxis (UnMath.h) aren't declared. */
struct FRotationMatrix : public FMatrix
{
	FRotationMatrix(const FRotator& Rot);
};

struct FMatrix_ : public FMatrix
{
	FORCEINLINE FVector GetAxis(INT i) const
	{
		const FPlane& P = (&XPlane)[i];
		return FVector(P.X, P.Y, P.Z);
	}
};

// @baa 0x005c99e0
/* UnMath.cpp: the rotation's forward axis. */
FVector FRotator::Vector() const
{
	return ((const FMatrix_&)FRotationMatrix(*this)).GetAxis(0);
}
