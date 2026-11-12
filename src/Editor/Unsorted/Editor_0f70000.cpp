// Editor_0f70000.cpp (part 1 of 5): 120 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C_view {
    int sub_00f6f6e0(int);
};

// @baa 0x00f706c0
void UPackageMap::sub_00f706c0(void)
{
    int param_1 = (int)this;
  ((C_view *)((*(char **)((char *)this + 0x10))))->sub_00f6f6e0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

int sub_00f62060(void);
// @baa 0x00f706e0
int UPackageMap::sub_00f706e0(void)
{
    int param_1 = (int)this;

  sub_00f62060();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00f707b0
int UPackageMap::sub_00f707b0(void)
{
    int param_1 = (int)this;

  sub_00f62060();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C {
    undefined4 sub_00f71f90(int *);
};

// @baa 0x00f71f90
undefined4 C::sub_00f71f90(int * param_2)
{
    int * param_1 = (int *)this;

  if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
     (((param_1[3] == param_2[3] && (param_1[4] == param_2[4])) && (param_1[5] == param_2[5])))) {
    return 1;
  }
  return 0;
}

int sub_00627f70(...);
// @baa 0x00f71fd0
void sub_00f71fd0(undefined4 param_1)
{
  sub_00627f70(param_1,0x18,0);
  return;
}

struct C_00f71ff0 { C_00f71ff0* sub_00f71ff0(void); };

// @baa 0x00f71ff0
C_00f71ff0* C_00f71ff0::sub_00f71ff0(void) { return this; }

struct C_00f72000 { int sub_00f72000(void); };

// @baa 0x00f72000
int C_00f72000::sub_00f72000(void) { return *(int*)((char*)this + 16); }

struct C_view_00f72010 {
    int sub_00c407b0(int);
};

extern undefined4 g_02162168;
// @baa 0x00f72010
undefined4 * UUnrealEdEngine::sub_00f72010(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view_00f72010 *)(this))->sub_00c407b0(2);
  param_1[4] = param_2;
  *param_1 = (undefined4)(&g_02162168);
  param_1[5] = param_3;
  param_1[6] = param_4;
  return param_1;
}

void sub_00c38ac0();
// @baa 0x00f72040
void sub_00f72040(void) { sub_00c38ac0(); }

extern char g_02162178[];
struct C_00f72050 { C_00f72050* sub_00f72050(void); };

// @baa 0x00f72050
C_00f72050* C_00f72050::sub_00f72050(void) { *(int*)((char*)this + 0) = (int)g_02162178; return this; }

struct C_00f722d0 { int sub_00f722d0(void); };

// @baa 0x00f722d0
int C_00f722d0::sub_00f722d0(void) { return *(int*)((char*)this + 4); }

struct C_00f722e0 { int sub_00f722e0(void); };

// @baa 0x00f722e0
int C_00f722e0::sub_00f722e0(void) { return *(int*)((char*)this + 4); }

struct C_00f722f0 { int sub_00f722f0(void); };

// @baa 0x00f722f0
int C_00f722f0::sub_00f722f0(void) { return *(int*)((char*)this + 4); }

struct C_00f72300 { C_00f72300* sub_00f72300(void); };

// @baa 0x00f72300
C_00f72300* C_00f72300::sub_00f72300(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00f72310 {
    void sub_00f72310();
};

// @baa 0x00f72310
void C_00f72310::sub_00f72310(void)
{
    int * param_1 = (int *)this;

  *param_1 = *param_1 + 1;
  return;
}

struct C_00f72320 {
    C_00f72320 *sub_00f72320();
};

// @baa 0x00f72320
C_00f72320 *C_00f72320::sub_00f72320()
{
    int *pp = (int *)this;
    *pp = *(int *)(*pp + 4);
    return this;
}

struct C_00f72330 { int sub_00f72330(void); };

// @baa 0x00f72330
int C_00f72330::sub_00f72330(void) { return *(int*)((char*)this + 4); }

struct C_00f72340 { int sub_00f72340(void); };

// @baa 0x00f72340
int C_00f72340::sub_00f72340(void) { return *(int*)((char*)this + 4); }

struct C_00f72350 { int sub_00f72350(void); };

// @baa 0x00f72350
int C_00f72350::sub_00f72350(void) { return *(int*)((char*)this + 4); }

struct C_00f72360 { int sub_00f72360(void); };

// @baa 0x00f72360
int C_00f72360::sub_00f72360(void) { return *(int*)((char*)this + 4); }

extern char g_0216215c[];
struct C_00f72370 { C_00f72370* sub_00f72370(int a0); };

// @baa 0x00f72370
C_00f72370* C_00f72370::sub_00f72370(int a0) { *(int*)((char*)this + 0) = (int)g_0216215c; return this; }

struct C_00f723d0 {
    bool sub_00f723d0();
};

// @baa 0x00f723d0
bool C_00f723d0::sub_00f723d0(void)
{
    int * param_1 = (int *)this;
  return 0 < *param_1;
}

struct C_00f723e0 { int a, b; C_00f723e0(int, int); };

// @baa 0x00f723e0
C_00f723e0::C_00f723e0(int x, int y) : a(x), b(y) {}

struct C_00f72400 { int a, b; C_00f72400(int, int); };

// @baa 0x00f72400
C_00f72400::C_00f72400(int x, int y) : a(x), b(y) {}

struct C_00f72420 { int a, b; C_00f72420(int, int); };

// @baa 0x00f72420
C_00f72420::C_00f72420(int x, int y) : a(x), b(y) {}

struct C_00f72440 { int a, b; C_00f72440(int, int); };

// @baa 0x00f72440
C_00f72440::C_00f72440(int x, int y) : a(x), b(y) {}

struct C_00f72460 { int a, b; C_00f72460(int, int); };

// @baa 0x00f72460
C_00f72460::C_00f72460(int x, int y) : a(x), b(y) {}

// @baa 0x00f72480
int sub_00f72480(int a0) { return *(int*)a0; }

// @baa 0x00f72490
bool sub_00f72490(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00f724a0 { int a, b; C_00f724a0(const C_00f724a0 &); };

// @baa 0x00f724a0
C_00f724a0::C_00f724a0(const C_00f724a0 &o) : a(o.a), b(o.b) {}

// @baa 0x00f724e0
int sub_00f724e0(int a0) { return *(int*)a0; }

// @baa 0x00f724f0
undefined4 sub_00f724f0(int * param_1, int * param_2)
{
  if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
     (((param_1[3] == param_2[3] && (param_1[4] == param_2[4])) && (param_1[5] == param_2[5])))) {
    return 1;
  }
  return 0;
}

struct S {
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void vf_0c();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18(INT Value);
};

// @baa 0x00f72dd0
void sub_00f72dd0(S* p, INT Value)
{
    p->vf_18(Value);
}

// @baa 0x00f72df0
int __stdcall sub_00f72df0(int a0) { return 1; }

struct C_00f72e20 {
    int sub_00f72e20();
};

// @baa 0x00f72e20
int C_00f72e20::sub_00f72e20(void)
{
    uint * param_1 = (uint *)this;

  int iVar1;
  uint uVar2;
  
  uVar2 = 1;
  iVar1 = 0;
  do {
    if ((uVar2 & *param_1) == 0) {
      *param_1 = *param_1 | uVar2;
      return iVar1;
    }
    iVar1 = iVar1 + 1;
    uVar2 = uVar2 * 2;
  } while (iVar1 < 2);
  return -1;
}

// @baa 0x00f72e80
int sub_00f72e80(int a0, int a1) { return a1; }

struct C_00f72e90 {
    bool sub_00f72e90();
};

// @baa 0x00f72e90
bool C_00f72e90::sub_00f72e90(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x2c) == 3;
}

struct C_00f72ea0 {
    void sub_00f72ea0();
};

// @baa 0x00f72ea0
void C_00f72ea0::sub_00f72ea0(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x300) = (uint)(*(int *)(param_1 + 0x300) == 0);
  return;
}

struct C_00f72ec0 {
    void sub_00f72ec0();
};

// @baa 0x00f72ec0
void C_00f72ec0::sub_00f72ec0(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x300) = *(uint *)(param_1 + 0x300) | *(uint *)(param_1 + 0x304);
  return;
}

struct C_00f72f30 { char* sub_00f72f30(void); };

// @baa 0x00f72f30
char* C_00f72f30::sub_00f72f30(void) { return (char*)this + 48; }

struct C_00f72f40 { C_00f72f40* sub_00f72f40(void); };

// @baa 0x00f72f40
C_00f72f40* C_00f72f40::sub_00f72f40(void) { return this; }

struct C_00f72f50 { char* sub_00f72f50(void); };

// @baa 0x00f72f50
char* C_00f72f50::sub_00f72f50(void) { return (char*)this + 12; }

struct C_00f72f60 { int sub_00f72f60(void); };

// @baa 0x00f72f60
int C_00f72f60::sub_00f72f60(void) { return *(int*)((char*)this + 32); }

struct C_00f72f70 { int sub_00f72f70(void); };

// @baa 0x00f72f70
int C_00f72f70::sub_00f72f70(void) { return *(int*)((char*)this + 40); }

struct C_00f72f80 { int sub_00f72f80(void); };

// @baa 0x00f72f80
int C_00f72f80::sub_00f72f80(void) { return *(int*)((char*)this + 44); }

struct C_00f72f90 { int sub_00f72f90(void); };

// @baa 0x00f72f90
int C_00f72f90::sub_00f72f90(void) { return *(int*)((char*)this + 28); }

extern undefined4 g_026af518;
extern undefined4 g_026af51c;
extern undefined4 g_026af520;
extern undefined4 g_026cdb80;
extern undefined4 g_026cdb84;
extern undefined4 g_026cdb88;
// @baa 0x00f72fa0
undefined * sub_00f72fa0(void)
{
  if ((g_026cdb88 & 1) == 0) {
    g_026cdb88 = g_026cdb88 | 1;
    if ((g_026af520 & 1) == 0) {
      g_026af520 = g_026af520 | 1;
      g_026af518 = 0;
      g_026af51c = (undefined4)(L"HHitProxy");
    }
    g_026cdb80 = (undefined4)(&g_026af518);
    g_026cdb84 = (undefined4)(L"HWidgetAxis");
  }
  return (undefined *)(&g_026cdb80);
}

struct C_00f72ff0 { int sub_00f72ff0(void); };

// @baa 0x00f72ff0
int C_00f72ff0::sub_00f72ff0(void) { return *(int*)((char*)this + 28); }

struct C_00f73000 { void sub_00f73000(int a0); };

// @baa 0x00f73000
void C_00f73000::sub_00f73000(int a0) { *(int*)((char*)this + 36) = a0; }

struct C_00f73010 { int sub_00f73010(void); };

// @baa 0x00f73010
int C_00f73010::sub_00f73010(void) { return *(int*)((char*)this + 100); }

struct C_00f73040 {
    uint sub_00f73040();
};

// @baa 0x00f73040
uint C_00f73040::sub_00f73040(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x5e0) >> 1 & 1;
}

struct C_00f73050 {
    undefined4 * sub_00f73050(undefined4, undefined4);
};

int sub_006311e0(...);
int sub_00715880(void);
extern undefined2 g_01e3f3dc;
// @baa 0x00f73050
undefined4 * C_00f73050::sub_00f73050(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;

  int iVar1;
  
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  iVar1 = sub_00715880();
  if (iVar1 == 0) {
    sub_006311e0("IsInGameThread()","Engine/Inc\\Engine.h",0x246,&g_01e3f3dc);
  }
  param_1[5] = param_2;
  param_1[6] = param_3;
  return param_1;
}

struct C_00f75b80 { int a, b, c; C_00f75b80(); };

// @baa 0x00f75b80
C_00f75b80::C_00f75b80() : a(0), b(0), c(0) {}

struct C_00f75bc0 { int a, b, c; C_00f75bc0(); };

// @baa 0x00f75bc0
C_00f75bc0::C_00f75bc0() : a(0), b(0), c(0) {}

struct C_00f75bd0 { int a, b, c; C_00f75bd0(); };

// @baa 0x00f75bd0
C_00f75bd0::C_00f75bd0() : a(0), b(0), c(0) {}

struct C_00f75be0 {
    void sub_00f75be0();
};

int sub_005fae30(void);
// @baa 0x00f75be0
void C_00f75be0::sub_00f75be0(void)
{
    int * param_1 = (int *)this;

  if (0 < *param_1) {
    sub_005fae30();
    return;
  }
  return;
}

struct C_00f75bf0 { int sub_00f75bf0(void); };

// @baa 0x00f75bf0
int C_00f75bf0::sub_00f75bf0(void) { return *(int*)((char*)this + 0); }

struct C_00f75c00 { int a, b, c; C_00f75c00(); };

// @baa 0x00f75c00
C_00f75c00::C_00f75c00() : a(0), b(0), c(0) {}

struct C_00f75c10 { int a, b, c; C_00f75c10(); };

// @baa 0x00f75c10
C_00f75c10::C_00f75c10() : a(0), b(0), c(0) {}

struct C_00f75c20 { int a, b, c; C_00f75c20(); };

// @baa 0x00f75c20
C_00f75c20::C_00f75c20() : a(0), b(0), c(0) {}

struct C_00f75c30 { int a, b, c; C_00f75c30(); };

// @baa 0x00f75c30
C_00f75c30::C_00f75c30() : a(0), b(0), c(0) {}

struct C_00f75d20 { int sub_00f75d20(void); };

// @baa 0x00f75d20
int C_00f75d20::sub_00f75d20(void) { return *(int*)((char*)this + 0); }

struct C_00f75d30 { int sub_00f75d30(void); };

// @baa 0x00f75d30
int C_00f75d30::sub_00f75d30(void) { return *(int*)((char*)this + 0); }

struct C_00f75d40 { int sub_00f75d40(void); };

// @baa 0x00f75d40
int C_00f75d40::sub_00f75d40(void) { return *(int*)((char*)this + 0); }

struct C_00f75d50 {
    int sub_00f75d50(int);
};

// @baa 0x00f75d50
int C_00f75d50::sub_00f75d50(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x48;
}

struct C_00f75d60 { int sub_00f75d60(void); };

// @baa 0x00f75d60
int C_00f75d60::sub_00f75d60(void) { return *(int*)((char*)this + 0); }

struct C_00f75d70 { int sub_00f75d70(void); };

// @baa 0x00f75d70
int C_00f75d70::sub_00f75d70(void) { return *(int*)((char*)this + 0); }

struct C_00f75d80 { int sub_00f75d80(void); };

// @baa 0x00f75d80
int C_00f75d80::sub_00f75d80(void) { return *(int*)((char*)this + 0); }

struct C_00f75d90 {
    int sub_00f75d90(int);
};

// @baa 0x00f75d90
int C_00f75d90::sub_00f75d90(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 100 + *param_1;
}

struct C_00f75da0 { int sub_00f75da0(void); };

// @baa 0x00f75da0
int C_00f75da0::sub_00f75da0(void) { return *(int*)((char*)this + 0); }

struct C_00f75e20 { int sub_00f75e20(void); };

// @baa 0x00f75e20
int C_00f75e20::sub_00f75e20(void) { return *(int*)((char*)this + 0); }

struct C_00f75e30 { int sub_00f75e30(void); };

// @baa 0x00f75e30
int C_00f75e30::sub_00f75e30(void) { return *(int*)((char*)this + 0); }

struct C_00f75eb0 { int sub_00f75eb0(void); };

// @baa 0x00f75eb0
int C_00f75eb0::sub_00f75eb0(void) { return *(int*)((char*)this + 0); }

struct C_00f75f30 {
    int sub_00f75f30();
};

// @baa 0x00f75f30
int C_00f75f30::sub_00f75f30(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00f75f40 {
    int sub_00f75f40();
};

// @baa 0x00f75f40
int C_00f75f40::sub_00f75f40(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00f75f50 {
    int sub_00f75f50();
};

// @baa 0x00f75f50
int C_00f75f50::sub_00f75f50(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00f75f60 {
    int sub_00f75f60();
};

// @baa 0x00f75f60
int C_00f75f60::sub_00f75f60(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00f75f70 {
    int sub_00f75f70();
};

// @baa 0x00f75f70
int C_00f75f70::sub_00f75f70(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00f75f80 { int sub_00f75f80(void); };

// @baa 0x00f75f80
int C_00f75f80::sub_00f75f80(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00f75fb0 { int sub_00f75fb0(void); };

// @baa 0x00f75fb0
int C_00f75fb0::sub_00f75fb0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

void sub_005fa690();
// @baa 0x00f76000
void sub_00f76000(void) { sub_005fa690(); }

struct C_00f76010 { int sub_00f76010(void); };

// @baa 0x00f76010
int C_00f76010::sub_00f76010(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00f76040 { int sub_00f76040(void); };

// @baa 0x00f76040
int C_00f76040::sub_00f76040(void) { return *(int*)((char*)this + 0); }

struct C_00f76050 { int sub_00f76050(void); };

// @baa 0x00f76050
int C_00f76050::sub_00f76050(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00f76080 { int sub_00f76080(void); };

// @baa 0x00f76080
int C_00f76080::sub_00f76080(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00f760c0 { int sub_00f760c0(void); };

// @baa 0x00f760c0
int C_00f760c0::sub_00f760c0(void) { return *(int*)((char*)this + 0); }

struct C_00f760d0 { int sub_00f760d0(void); };

// @baa 0x00f760d0
int C_00f760d0::sub_00f760d0(void) { return *(int*)((char*)this + 0); }

struct C_00f760e0 { int sub_00f760e0(void); };

// @baa 0x00f760e0
int C_00f760e0::sub_00f760e0(void) { return *(int*)((char*)this + 0); }

struct C_00f760f0 {
    int sub_00f760f0(int);
};

// @baa 0x00f760f0
int C_00f760f0::sub_00f760f0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00f76100 { int sub_00f76100(void); };

// @baa 0x00f76100
int C_00f76100::sub_00f76100(void) { return *(int*)((char*)this + 20); }

struct C_00f76110 {
    int sub_00f76110(int);
};

// @baa 0x00f76110
int C_00f76110::sub_00f76110(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_00f76160 {
    int sub_00f76160(int);
};

// @baa 0x00f76160
int C_00f76160::sub_00f76160(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

struct C_00f76170 {
    int sub_00f76170(int);
};

// @baa 0x00f76170
int C_00f76170::sub_00f76170(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00f76180 {
    int sub_00f76180(int);
};

// @baa 0x00f76180
int C_00f76180::sub_00f76180(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00f76190 {
    int sub_00f76190(int);
};

// @baa 0x00f76190
int C_00f76190::sub_00f76190(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_00f761b0 {
    int sub_00f761b0(int);
};

// @baa 0x00f761b0
int C_00f761b0::sub_00f761b0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00f761c0 {
    int sub_00f761c0(int);
};

// @baa 0x00f761c0
int C_00f761c0::sub_00f761c0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00f761d0 {
    int sub_00f761d0(int);
};

// @baa 0x00f761d0
int C_00f761d0::sub_00f761d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_00f761f0 { int sub_00f761f0(void); };

// @baa 0x00f761f0
int C_00f761f0::sub_00f761f0(void) { return *(int*)((char*)this + 20); }

struct C_00f76200 { int sub_00f76200(void); };

// @baa 0x00f76200
int C_00f76200::sub_00f76200(void) { return *(int*)((char*)this + 20); }

struct C_00f76210 { int sub_00f76210(void); };

// @baa 0x00f76210
int C_00f76210::sub_00f76210(void) { return *(int*)((char*)this + 20); }

struct C_00f76220 { int sub_00f76220(void); };

// @baa 0x00f76220
int C_00f76220::sub_00f76220(void) { return *(int*)((char*)this + 20); }

struct C_00f76230 { int sub_00f76230(void); };

// @baa 0x00f76230
int C_00f76230::sub_00f76230(void) { return *(int*)((char*)this + 20); }

struct C_00f76240 { int sub_00f76240(void); };

// @baa 0x00f76240
int C_00f76240::sub_00f76240(void) { return *(int*)((char*)this + 20); }

struct C_00f76250 { int sub_00f76250(void); };

// @baa 0x00f76250
int C_00f76250::sub_00f76250(void) { return *(int*)((char*)this + 20); }

struct C_00f76260 { int sub_00f76260(void); };

// @baa 0x00f76260
int C_00f76260::sub_00f76260(void) { return *(int*)((char*)this + 20); }

struct C_00f76270 { int sub_00f76270(void); };

// @baa 0x00f76270
int C_00f76270::sub_00f76270(void) { return *(int*)((char*)this + 20); }

int sub_0053ec70(void);
extern undefined * g_01e72a60;
extern undefined * g_021623d8;
// @baa 0x00f76b90
undefined4 * UTexture2D::sub_00f76b90(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e72a60);
  sub_0053ec70();
  param_1[0x1f] = param_2;
  param_1[7] = 1;
  param_1[6] = 1;
  param_1[5] = 1;
  *param_1 = (undefined4)(&g_021623d8);
  param_1[0x20] = param_3;
  param_1[0x21] = param_4;
  return param_1;
}

struct C_00f76be0 {
    undefined4 * sub_00f76be0(byte);
};

int sub_0053dfa0(...);
// @baa 0x00f76be0
undefined4 * C_00f76be0::sub_00f76be0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e72a60);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00f76cb0 {
    undefined4 * sub_00f76cb0(byte);
};

// @baa 0x00f76cb0
undefined4 * C_00f76cb0::sub_00f76cb0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e72a60);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00f7dbe0
int UObject::sub_00f7dbe0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

// @baa 0x00f7dbf0
int UObject::sub_00f7dbf0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

// @baa 0x00f7dc00
int UObject::sub_00f7dc00(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x00f7dc10
int UObject::sub_00f7dc10(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x00f7dc20
int UObject::sub_00f7dc20(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

int sub_0053df70(...);
// @baa 0x00f7dc40
void UObject::sub_00f7dc40(int param_2)
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

int sub_0040fcc0(void);
// @baa 0x00f7dc80
undefined4 UObject::sub_00f7dc80(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00f7dda0
int UState::sub_00f7dda0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

// @baa 0x00f7de20
int UState::sub_00f7de20(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

// @baa 0x00f7df20
int UState::sub_00f7df20(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}
