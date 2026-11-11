// GFx_1920000.cpp (part 2 of 5): 65 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C {
    void sub_019213c0(float *, float *);
};

// @baa 0x019213c0
void C::sub_019213c0(float * param_2, float * param_3)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  iVar1 = *param_1;
  *param_2 = (float)*(int *)(iVar1 + 0x2c);
  *param_3 = (float)*(int *)(iVar1 + 0x30);
  if ((*(byte *)(iVar1 + 0x70) & 0x80) != 0) {
    *param_2 = *param_2 * *(float *)(iVar1 + 0x6c);
    *param_3 = *(float *)(iVar1 + 0x6c) * *param_3;
  }
  return;
}

struct Base_01921a80 {
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
    void sub_01921a80_target();
};

struct C_01921a80 {
    char pad[16];
    Base_01921a80 m;
    void sub_01921a80();
};

// @baa 0x01921a80
void C_01921a80::sub_01921a80() { m.v19(); }

struct Obj {
    virtual void f00(); virtual void f01(); virtual void f02(); virtual void f03();
    virtual void f04(); virtual void f05(); virtual void f06(); virtual void f07();
    virtual void f08(); virtual void f09(); virtual void f10(); virtual void f11();
    virtual void f12(); virtual void f13(); virtual void f14(); virtual void f15();
    virtual void f16(); virtual void f17(); virtual void f18();
    virtual void call19();
};

void Obj::f00(){}

void Obj::f01(){}

void Obj::f02(){}

void Obj::f03(){}

void Obj::f04(){}

void Obj::f05(){}

void Obj::f06(){}

void Obj::f07(){}

void Obj::f08(){}

void Obj::f09(){}

void Obj::f10(){}

void Obj::f11(){}

void Obj::f12(){}

void Obj::f13(){}

void Obj::f14(){}

void Obj::f15(){}

void Obj::f16(){}

void Obj::f17(){}

void Obj::f18(){}

void Obj::call19(){}

struct C_01921a90 {
    void sub_01921a90();
};

// @baa 0x01921a90
void C_01921a90::sub_01921a90()
{
    return ((Obj*)((char*)this + 0x10))->call19();
}

int __stdcall sub_018d7150(int);
// @baa 0x01921b70
void sub_01921b70(undefined4 param_1)
{
  sub_018d7150(param_1);
  return;
}

int __stdcall sub_018d7170(int);
// @baa 0x01921b80
void sub_01921b80(undefined4 param_1)
{
  sub_018d7170(param_1);
  return;
}

struct C_01921c50 { int a, b, c; C_01921c50(); };

// @baa 0x01921c50
C_01921c50::C_01921c50() : a(0), b(0), c(0) {}

struct C_01921c60 { int a, b, c; C_01921c60(); };

// @baa 0x01921c60
C_01921c60::C_01921c60() : a(0), b(0), c(0) {}

struct C_01921c70 { int a, b, c; C_01921c70(); };

// @baa 0x01921c70
C_01921c70::C_01921c70() : a(0), b(0), c(0) {}

struct C_01921c80 {
    undefined4 * sub_01921c80();
};

int sub_018d3d50(void);
extern undefined * g_023f7948;
// @baa 0x01921c80
undefined4 * C_01921c80::sub_01921c80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_018d3d50();
  *param_1 = (undefined4)(&g_023f7948);
  return param_1;
}

struct C_01921ca0 { int a, b, c; C_01921ca0(); };

// @baa 0x01921ca0
C_01921ca0::C_01921ca0() : a(0), b(0), c(0) {}

// @baa 0x01921d00
uint UGFxDataStoreSubscriber::sub_01921d00(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

// @baa 0x01921d10
uint UGFxDataStoreSubscriber::sub_01921d10(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

// @baa 0x01921d20
unsigned UGFxDataStoreSubscriber::sub_01921d20(void) { return *(unsigned*)((char*)this + 8) >> 30; }

// @baa 0x01921d30
unsigned UGFxDataStoreSubscriber::sub_01921d30(void) { return *(unsigned*)((char*)this + 8) >> 31; }

// @baa 0x01921d40
uint UGFxDataStoreSubscriber::sub_01921d40(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

// @baa 0x01921d50
void UGFxDataStoreSubscriber::sub_01921d50(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

// @baa 0x01921d70
unsigned UGFxDataStoreSubscriber::sub_01921d70(void) { return *(unsigned*)((char*)this + 8) >> 30; }

// @baa 0x01921d80
unsigned UGFxDataStoreSubscriber::sub_01921d80(void) { return *(unsigned*)((char*)this + 8) >> 31; }

// @baa 0x01921d90
uint UGFxDataStoreSubscriber::sub_01921d90(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

// @baa 0x01921da0
void UGFxDataStoreSubscriber::sub_01921da0(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

// @baa 0x01921dc0
uint UGFxDataStoreSubscriber::sub_01921dc0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

// @baa 0x01921e10
unsigned UGFxDataStoreSubscriber::sub_01921e10(void) { return *(unsigned*)((char*)this + 8) >> 30; }

// @baa 0x01921e20
unsigned UGFxDataStoreSubscriber::sub_01921e20(void) { return *(unsigned*)((char*)this + 8) >> 31; }

// @baa 0x01921e30
uint UGFxDataStoreSubscriber::sub_01921e30(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

// @baa 0x01921e40
void UGFxDataStoreSubscriber::sub_01921e40(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

// @baa 0x01922020
undefined4 sub_01922020(undefined4 param_1)
{
  return param_1;
}

// @baa 0x01922040
int UGFxDataStoreSubscriber::sub_01922040(void) { return *(int*)((char*)this + 4); }

// @baa 0x019220e0
int UGFxDataStoreSubscriber::sub_019220e0(void) { return *(int*)((char*)this + 8); }

// @baa 0x01922110
int UGFxDataStoreSubscriber::sub_01922110(void) { return *(int*)((char*)this + 0); }

// @baa 0x01922140
undefined4 UGFxDataStoreSubscriber::sub_01922140(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x1c);
}

struct C_01922ea0 {
    void sub_01922ea0();
    int sub_01920840();
};

// @baa 0x01922ea0
void C_01922ea0::sub_01922ea0(void)
{
    int param_1 = (int)this;
  if (*(char *)(param_1 + 0x20) != '\x01') {
    do {
      ((C_01922ea0 *)(this))->sub_01920840();
    } while (*(char *)(param_1 + 0x20) == '\x03');
  }
  return;
}

struct C_01923450 {
    undefined4 * sub_01923450();
};

extern undefined * g_023f7970;
// @baa 0x01923450
undefined4 * C_01923450::sub_01923450(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_018d3d50();
  *param_1 = (undefined4)(&g_023f7970);
  return param_1;
}

// @baa 0x01924fe0
float sub_01924fe0(void)
{
  return 100.0f;
}

struct M_01925370 { void sub_019248c0(); };

struct C_01925370 { char pad[16]; M_01925370 m; void sub_01925370(); };

// @baa 0x01925370
void C_01925370::sub_01925370() { m.sub_019248c0(); }

struct M_01925380 { void sub_01924430(); };

struct C_01925380 { char pad[16]; M_01925380 m; void sub_01925380(); };

// @baa 0x01925380
void C_01925380::sub_01925380() { m.sub_01924430(); }

struct M_019253b0 { void sub_01924e40(); };

struct C_019253b0 { char pad[16]; M_019253b0 m; void sub_019253b0(); };

// @baa 0x019253b0
void C_019253b0::sub_019253b0() { m.sub_01924e40(); }

struct C_019256e0 { void sub_01923ec0(int); void sub_019256e0(); };

// @baa 0x019256e0
void C_019256e0::sub_019256e0() { sub_01923ec0(0); }

struct C_019256f0 { void sub_01923f90(int); void sub_019256f0(); };

// @baa 0x019256f0
void C_019256f0::sub_019256f0() { sub_01923f90(0); }

struct M_01926c70 { void sub_01925700(); };

struct C_01926c70 { char pad[16]; M_01926c70 m; void sub_01926c70(); };

// @baa 0x01926c70
void C_01926c70::sub_01926c70() { m.sub_01925700(); }

struct C_01928c50 {
    void sub_01928c50(int, int);
    int sub_019287e0(int, int, int);
};

// @baa 0x01928c50
void C_01928c50::sub_01928c50(int param_2, int param_3)
{
    int param_1 = (int)this;
  ((C_01928c50 *)(this))->sub_019287e0(param_2 - *(int *)(param_1 + 0x14), param_3 - *(int *)(param_1 + 0x18), 0);
  return;
}

struct C_01928c70 {
    void sub_01928c70(int, int, int, int);
    int sub_019289f0(int, int, int, int, int);
};

// @baa 0x01928c70
void C_01928c70::sub_01928c70(int param_2, int param_3, int param_4, int param_5)
{
    int param_1 = (int)this;
  ((C_01928c70 *)(this))->sub_019289f0(param_2 - *(int *)(param_1 + 0x14), param_3 - *(int *)(param_1 + 0x18), param_4 - param_2, param_5 - param_3, 0);
  return;
}

struct C_01928ca0 {
    void sub_01928ca0();
    int sub_01928c50(int, int);
};

// @baa 0x01928ca0
void C_01928ca0::sub_01928ca0(void)
{
    int param_1 = (int)this;
  if ((*(int *)(param_1 + 0x14) != *(int *)(param_1 + 0xc)) ||
     (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x10))) {
    ((C_01928ca0 *)(this))->sub_01928c50(*(int *)(param_1 + 0xc), *(undefined4 *)(param_1 + 0x10));
  }
  return;
}

struct C_01928d40 {
    undefined4 * sub_01928d40(undefined4);
    int sub_01928310();
    int sub_019200e0(int);
};

extern undefined4 g_023f7ca4;
// @baa 0x01928d40
undefined4 * C_01928d40::sub_01928d40(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_01928d40 *)(this))->sub_01928310();
  *param_1 = (undefined4)((&g_023f7ca4));
  ((C_01928d40 *)(((char *)this + 0x30)))->sub_019200e0(param_2);
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined2 *)(param_1 + 0x12) = 0;
  return param_1;
}

struct C_01928f10 { int a, b, c; C_01928f10(); };

// @baa 0x01928f10
C_01928f10::C_01928f10() : a(0), b(0), c(0) {}

struct C_01928f40 { int a, b, c; C_01928f40(); };

// @baa 0x01928f40
C_01928f40::C_01928f40() : a(0), b(0), c(0) {}

struct C_01928f70 { int a, b, c; C_01928f70(); };

// @baa 0x01928f70
C_01928f70::C_01928f70() : a(0), b(0), c(0) {}

struct C_01928f80 { int a, b, c; C_01928f80(); };

// @baa 0x01928f80
C_01928f80::C_01928f80() : a(0), b(0), c(0) {}

int sub_01928310(void);
extern undefined4 g_023f7cfc;
// @baa 0x01929350
undefined4 * UGFxDataStoreSubscriber::sub_01929350(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  sub_01928310();
  *param_1 = (undefined4)((&g_023f7cfc));
  param_1[0xc] = 0;
  return param_1;
}

// @baa 0x01929370
int UGFxDataStoreSubscriber::sub_01929370(void) { return *(int*)((char*)this + 48); }

struct GFxConstShapeWithStyles {
    char pad[0x48];
    float f_0x48;
    void sub_01929630(float param);
};

// @baa 0x01929630
void GFxConstShapeWithStyles::sub_01929630(float param) { f_0x48 = param; }

struct C_01929870 {
    void sub_01929870(float);
};

// @baa 0x01929870
void C_01929870::sub_01929870(float f)
{
    *(float *)(this + 0x74) = f;
}

struct M_01929ba0 { void sub_01929a30(); };

struct C_01929ba0 { char pad[16]; M_01929ba0 m; void sub_01929ba0(); };

// @baa 0x01929ba0
void C_01929ba0::sub_01929ba0() { m.sub_01929a30(); }

struct M_01929bb0 { void sub_019293c0(); };

struct C_01929bb0 { char pad[16]; M_01929bb0 m; void sub_01929bb0(); };

// @baa 0x01929bb0
void C_01929bb0::sub_01929bb0() { m.sub_019293c0(); }

struct M_01929bc0 { void sub_01929180(); };

struct C_01929bc0 { char pad[16]; M_01929bc0 m; void sub_01929bc0(); };

// @baa 0x01929bc0
void C_01929bc0::sub_01929bc0() { m.sub_01929180(); }

struct M_01929bd0 { void sub_019293c0(); };

struct C_01929bd0 { char pad[16]; M_01929bd0 m; void sub_01929bd0(); };

// @baa 0x01929bd0
void C_01929bd0::sub_01929bd0() { m.sub_019293c0(); }

struct M_01929be0 { void sub_01928fa0(); };

struct C_01929be0 { char pad[16]; M_01929be0 m; void sub_01929be0(); };

// @baa 0x01929be0
void C_01929be0::sub_01929be0() { m.sub_01928fa0(); }

struct C_0192a2e0 {
    int sub_0192a2e0();
};

// @baa 0x0192a2e0
int C_0192a2e0::sub_0192a2e0(void)
{
    return ((BYTE *)this)[7];
}

struct C_0192a360 {
    unsigned int sub_0192a360();
};

// @baa 0x0192a360
unsigned int C_0192a360::sub_0192a360(void)
{
    return *(unsigned short *)((char *)this + 0x10);
}

struct C_0192a370 {
    int sub_0192a370(void);
};

// @baa 0x0192a370
int C_0192a370::sub_0192a370(void)
{
    return *(unsigned short*)(this + 0x12);
}

struct C_0192ab90 { int a, b, c; C_0192ab90(); };

// @baa 0x0192ab90
C_0192ab90::C_0192ab90() : a(0), b(0), c(0) {}

struct C_0192e8c0 { int a, b, c; C_0192e8c0(); };

// @baa 0x0192e8c0
C_0192e8c0::C_0192e8c0() : a(0), b(0), c(0) {}

struct C_0192eae0 { int a, b, c; C_0192eae0(); };

// @baa 0x0192eae0
C_0192eae0::C_0192eae0() : a(0), b(0), c(0) {}

// @baa 0x0192f240
void UGFxDataStoreSubscriber::sub_0192f240(undefined4 * param_2)
{
    int param_1 = (int)this;

  *param_2 = *(undefined4 *)(param_1 + 0xc);
  param_2[1] = *(undefined4 *)(param_1 + 0x10);
  param_2[2] = *(undefined4 *)(param_1 + 0x14);
  param_2[3] = *(undefined4 *)(param_1 + 0x18);
  param_2[4] = *(undefined4 *)(param_1 + 0x1c);
  param_2[5] = *(undefined4 *)(param_1 + 0x20);
  param_2[6] = *(undefined4 *)(param_1 + 0x24);
  param_2[7] = *(undefined4 *)(param_1 + 0x28);
  param_2[8] = *(undefined4 *)(param_1 + 0x2c);
  *(undefined1 *)(param_2 + 9) = *(undefined1 *)(param_1 + 0x30);
  return;
}

struct C_0192f6c0 { void sub_0192f3f0(int); void sub_0192f6c0(); };

// @baa 0x0192f6c0
void C_0192f6c0::sub_0192f6c0() { sub_0192f3f0(0); }

struct C_0192f890 { int a, b, c; C_0192f890(); };

// @baa 0x0192f890
C_0192f890::C_0192f890() : a(0), b(0), c(0) {}
