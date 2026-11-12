// Engine_0dc0000.cpp (part 1 of 6): 79 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00dc9760
void sub_00dc9760(void)
{
  return;
}

// @baa 0x00dc9770
void sub_00dc9770(void) {  }

struct C_00dc97a0 {
    void sub_00dc97a0();
};

// @baa 0x00dc97a0
void C_00dc97a0::sub_00dc97a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}

struct C_00dc97b0 {
    undefined4 sub_00dc97b0(float *);
};

// @baa 0x00dc97b0
undefined4 C_00dc97b0::sub_00dc97b0(float * param_2)
{
    float * param_1 = (float *)this;
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

struct C_00dc97e0 { C_00dc97e0* sub_00dc97e0(void); };

// @baa 0x00dc97e0
C_00dc97e0* C_00dc97e0::sub_00dc97e0(void) { return this; }

struct C_00dc9810 {
    bool sub_00dc9810(undefined4);
};

int sub_0053de70(...);
// @baa 0x00dc9810
bool C_00dc9810::sub_00dc9810(undefined4 param_2)
{
    undefined4 param_1 = (undefined4)this;

  int iVar1;
  
  iVar1 = sub_0053de70(param_1,param_2,4);
  return iVar1 == 0;
}

struct C_00dc9830 { C_00dc9830* sub_00dc9830(void); };

// @baa 0x00dc9830
C_00dc9830* C_00dc9830::sub_00dc9830(void) { return this; }

struct C_00dc9890 {
    undefined4 sub_00dc9890();
};

// @baa 0x00dc9890
undefined4 C_00dc9890::sub_00dc9890(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

struct S_00dc98a0 {
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void vf_0c();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18(INT Value);
};

// @baa 0x00dc98a0
void sub_00dc98a0(S_00dc98a0* p, INT Value)
{
    p->vf_18(Value);
}

// @baa 0x00dc98c0
int sub_00dc98c0(int a0, int a1) { return a1; }

int sub_005c7a20(void);
extern undefined * g_020cfad0;
// @baa 0x00dc98d0
undefined4 * UObject::sub_00dc98d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020cfad0);
  return param_1;
}

// @baa 0x00dc98f0
IMPLEMENT_CLASS_AT(UUIString, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIStrings.cpp", 23);

// @baa 0x00dc9950
struct C_00dc9970 {
    int sub_00dc9970(int arg1);
};

// @baa 0x00dc9970
int C_00dc9970::sub_00dc9970(int arg1)
{
    return (int)this;
}

// @baa 0x00dc99c0
undefined4 sub_00dc99c0(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

struct S_00dc99d0 {
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void vf_0c();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18(INT Value);
};

// @baa 0x00dc99d0
void sub_00dc99d0(S_00dc99d0* p, INT Value)
{
    p->vf_18(Value);
}

// @baa 0x00dc99f0
int sub_00dc99f0(int a0, int a1) { return a1; }

// @baa 0x00dc9a00
int sub_00dc9a00(int a0, int a1) { return a1; }

// @baa 0x00dc9a10
int sub_00dc9a10(int a0, int a1) { return a1; }

// @baa 0x00dc9a20
int sub_00dc9a20(int a0, int a1) { return a1; }

struct C_00dc9a30 { C_00dc9a30* sub_00dc9a30(int a0); };

// @baa 0x00dc9a30
C_00dc9a30* C_00dc9a30::sub_00dc9a30(int a0) { return this; }

struct C_00dca9c0 { int sub_00dca9c0(void); };

// @baa 0x00dca9c0
int C_00dca9c0::sub_00dca9c0(void) { return *(int*)((char*)this + 124); }

struct C_00dca9d0 { int sub_00dca9d0(void); };

// @baa 0x00dca9d0
int C_00dca9d0::sub_00dca9d0(void) { return *(int*)((char*)this + 4); }

struct C_00dca9e0 { int sub_00dca9e0(void); };

// @baa 0x00dca9e0
int C_00dca9e0::sub_00dca9e0(void) { return *(int*)((char*)this + 4); }

struct C_00dca9f0 { int a, b, c; C_00dca9f0(); };

// @baa 0x00dca9f0
C_00dca9f0::C_00dca9f0() : a(0), b(0), c(0) {}

struct C_00dcaa00 { int sub_00dcaa00(void); };

// @baa 0x00dcaa00
int C_00dcaa00::sub_00dcaa00(void) { return *(int*)((char*)this + 4); }

struct C_00dcaa10 { int sub_00dcaa10(void); };

// @baa 0x00dcaa10
int C_00dcaa10::sub_00dcaa10(void) { return *(int*)((char*)this + 4); }

struct C_00dcaa20 { C_00dcaa20* sub_00dcaa20(int a0); };

// @baa 0x00dcaa20
C_00dcaa20* C_00dcaa20::sub_00dcaa20(int a0) { return this; }

struct C_00dcaaa0 { C_00dcaaa0* sub_00dcaaa0(int a0); };

// @baa 0x00dcaaa0
C_00dcaaa0* C_00dcaaa0::sub_00dcaaa0(int a0) { return this; }

struct C_00dcab20 { int sub_00dcab20(void); };

// @baa 0x00dcab20
int C_00dcab20::sub_00dcab20(void) { return *(int*)((char*)this + 0); }

struct C_00dcaba0 { int a, b; C_00dcaba0(int, int); };

// @baa 0x00dcaba0
C_00dcaba0::C_00dcaba0(int x, int y) : a(x), b(y) {}

struct C_00dcabc0 {
    int sub_00dcabc0();
};

// @baa 0x00dcabc0
int C_00dcabc0::sub_00dcabc0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00dcabd0 { int a, b; C_00dcabd0(int, int); };

// @baa 0x00dcabd0
C_00dcabd0::C_00dcabd0(int x, int y) : a(x), b(y) {}

struct C_00dcabf0 {
    int sub_00dcabf0();
};

// @baa 0x00dcabf0
int C_00dcabf0::sub_00dcabf0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00dcac00 { int a, b; C_00dcac00(int, int); };

// @baa 0x00dcac00
C_00dcac00::C_00dcac00(int x, int y) : a(x), b(y) {}

struct C_00dcac20 {
    int sub_00dcac20();
};

// @baa 0x00dcac20
int C_00dcac20::sub_00dcac20(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00dcac30 { int a, b; C_00dcac30(int, int); };

// @baa 0x00dcac30
C_00dcac30::C_00dcac30(int x, int y) : a(x), b(y) {}

struct C_00dcac50 {
    int sub_00dcac50();
};

// @baa 0x00dcac50
int C_00dcac50::sub_00dcac50(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00dcac60 { int a, b; C_00dcac60(int, int); };

// @baa 0x00dcac60
C_00dcac60::C_00dcac60(int x, int y) : a(x), b(y) {}

struct C_00dcac80 {
    int sub_00dcac80();
};

// @baa 0x00dcac80
int C_00dcac80::sub_00dcac80(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00dcac90 { int a, b; C_00dcac90(int, int); };

// @baa 0x00dcac90
C_00dcac90::C_00dcac90(int x, int y) : a(x), b(y) {}

// @baa 0x00dcacb0
int sub_00dcacb0(int a0) { return *(int*)a0; }

// @baa 0x00dcacc0
bool sub_00dcacc0(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00dcacd0 { int a, b; C_00dcacd0(const C_00dcacd0 &); };

// @baa 0x00dcacd0
C_00dcacd0::C_00dcacd0(const C_00dcacd0 &o) : a(o.a), b(o.b) {}

// @baa 0x00dcad30
int sub_00dcad30(int a0) { return *(int*)a0; }

int sub_00627f70(...);
// @baa 0x00dcad70
void sub_00dcad70(undefined4 param_1)
{
  sub_00627f70(param_1,0x10,0);
  return;
}

struct C_00dcadc0 {
    void sub_00dcadc0(int *);
};

// @baa 0x00dcadc0
void C_00dcadc0::sub_00dcadc0(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = *(int *)(param_1 + 0x10);
  return;
}

// @baa 0x00dcae00
undefined4 sub_00dcae00(undefined4 * param_1)
{
  return *param_1;
}

// @baa 0x00dcae10
undefined4 sub_00dcae10(int * param_1, int * param_2)
{
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

struct C_00dcae70 {
    void sub_00dcae70(int *);
};

// @baa 0x00dcae70
void C_00dcae70::sub_00dcae70(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = *(int *)(param_1 + 8);
  return;
}

struct C_00dcae80 { int sub_00dcae80(void); };

// @baa 0x00dcae80
int C_00dcae80::sub_00dcae80(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

// @baa 0x00dcaec0
int sub_00dcaec0(int a0) { return *(int*)a0; }

// @baa 0x00dcaed0
undefined4 sub_00dcaed0(int * param_1, int * param_2)
{
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

struct C_00dcaf20 {
    void sub_00dcaf20(int *);
};

// @baa 0x00dcaf20
void C_00dcaf20::sub_00dcaf20(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 8;
  return;
}

// @baa 0x00dcaf70
int sub_00dcaf70(int a0) { return *(int*)a0; }

// @baa 0x00dcaf80
undefined4 sub_00dcaf80(int * param_1, int * param_2)
{
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

struct C_00dcafe0 {
    void sub_00dcafe0(int *);
};

// @baa 0x00dcafe0
void C_00dcafe0::sub_00dcafe0(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = *(int *)(param_1 + 8);
  return;
}

struct C_00dcaff0 { int sub_00dcaff0(void); };

// @baa 0x00dcaff0
int C_00dcaff0::sub_00dcaff0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00dcb030 { int sub_00dcb030(void); };

// @baa 0x00dcb030
int C_00dcb030::sub_00dcb030(void) { return *(int*)((char*)this + 0); }

struct C_00dcb070 {
    int sub_00dcb070();
};

// @baa 0x00dcb070
int C_00dcb070::sub_00dcb070(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

// @baa 0x00dcb080
int* sub_00dcb080(int* a, int b)
{
  *a = b;
  return a;
}

struct C_00dcb0b0 { C_00dcb0b0* sub_00dcb0b0(void); };

// @baa 0x00dcb0b0
C_00dcb0b0* C_00dcb0b0::sub_00dcb0b0(void) { return this; }

struct C_00dcb0e0 {
    undefined4 sub_00dcb0e0();
};

// @baa 0x00dcb0e0
undefined4 C_00dcb0e0::sub_00dcb0e0(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

struct C_00dcb120 { C_00dcb120* sub_00dcb120(void); };

// @baa 0x00dcb120
C_00dcb120* C_00dcb120::sub_00dcb120(void) { return this; }

struct C_00dcb150 {
    undefined4 sub_00dcb150();
};

// @baa 0x00dcb150
undefined4 C_00dcb150::sub_00dcb150(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

struct C_00dcb190 {
    int sub_00dcb190(int);
};

// @baa 0x00dcb190
int C_00dcb190::sub_00dcb190(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_00dcb1b0 { C_00dcb1b0* sub_00dcb1b0(void); };

// @baa 0x00dcb1b0
C_00dcb1b0* C_00dcb1b0::sub_00dcb1b0(void) { return this; }

struct C_00dcb1e0 {
    int sub_00dcb1e0(int);
};

// @baa 0x00dcb1e0
int C_00dcb1e0::sub_00dcb1e0(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x14;
}

struct C_00dcb1f0 { int sub_00dcb1f0(void); };

// @baa 0x00dcb1f0
int C_00dcb1f0::sub_00dcb1f0(void) { return *(int*)((char*)this + 20); }

struct C_00dcb200 { int sub_00dcb200(void); };

// @baa 0x00dcb200
int C_00dcb200::sub_00dcb200(void) { return *(int*)((char*)this + 20); }

struct C_00dcb210 { int sub_00dcb210(void); };

// @baa 0x00dcb210
int C_00dcb210::sub_00dcb210(void) { return *(int*)((char*)this + 20); }

struct C_00dcb220 { int sub_00dcb220(void); };

// @baa 0x00dcb220
int C_00dcb220::sub_00dcb220(void) { return *(int*)((char*)this + 20); }

void sub_00572b30();
// @baa 0x00dcb230
void sub_00dcb230(void) { sub_00572b30(); }

struct C_00dcb240 {
    undefined4 sub_00dcb240();
};

int sub_00dcb28f(...);
int sub_00ddfd40(...);
int sub_00de17e0(void);
extern undefined4 g_026c5df0;
// @baa 0x00dcb240
undefined4 C_00dcb240::sub_00dcb240(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    if (g_026c5df0 == 0) {
      g_026c5df0 = sub_00ddfd40(L"Engine");
      sub_00de17e0();
      if (g_026c5df0 == 0) {
sub_00dcb28f:
        return *(undefined4 *)(param_1 + 0x2c);
      }
    }
    for (iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + 0x28); iVar1 != 0;
        iVar1 = *(int *)(iVar1 + 0x30)) {
      if (iVar1 == g_026c5df0) goto sub_00dcb28f;
    }
  }
  return 0;
}

struct C_00dcb2a0 { int a, b; C_00dcb2a0(const C_00dcb2a0 &); };

// @baa 0x00dcb2a0
C_00dcb2a0::C_00dcb2a0(const C_00dcb2a0 &o) : a(o.a), b(o.b) {}

struct E { BYTE Bytes[12]; };

struct S_00dcb2c0 {
    TArray<E> Items; // 0x00
    const E* sub_00dcb2c0(INT Index) const;
};

// @baa 0x00dcb2c0
const E* S_00dcb2c0::sub_00dcb2c0(INT Index) const
{
    return &Items(Index);
}

int sub_00627f00(...);
// @baa 0x00dcb490
void sub_00dcb490(undefined4 param_1, undefined4 param_2)
{
  sub_00627f00(param_1,param_2,0x30);
  return;
}

// @baa 0x00dcb4b0
void sub_00dcb4b0(undefined4 param_1, undefined4 param_2)
{
  sub_00627f00(param_1,param_2,0x30);
  return;
}

typedef uint size_t;

struct C_00dcb9b0 {
    int sub_00dcb9b0(int);
    int sub_00dcaab0(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x00dcb9b0
int C_00dcb9b0::sub_00dcb9b0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00dcb9b0 *)(this))->sub_00dcaab0(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0xc),0,param_2 * 0xc);
  return iVar1;
}
