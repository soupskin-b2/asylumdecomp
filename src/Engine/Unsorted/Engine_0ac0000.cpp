// Engine_0ac0000.cpp (part 1 of 2): 444 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_0053dfa0(...);
int sub_00abd3a0(void);
// @baa 0x00ac0200
undefined4 ULensFlare::sub_00ac0200(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00abd3a0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00abd530(void);
// @baa 0x00ac02a0
undefined4 ULensFlare::sub_00ac02a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00abd530();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00ac01a0(void);
// @baa 0x00ac02e0
undefined4 ULensFlare::sub_00ac02e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00ac01a0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00656490(void);
// @baa 0x00ac0320
undefined4 ULensFlare::sub_00ac0320(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00656490();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00656520(void);
// @baa 0x00ac0340
undefined4 UTexture2DComposite::sub_00ac0340(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00656520();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C {
    int sub_00ac0360(int);
};

// @baa 0x00ac0360
int C::sub_00ac0360(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_00ac0410 {
    undefined4 sub_00ac0410();
};

// @baa 0x00ac0410
undefined4 C_00ac0410::sub_00ac0410(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  return *param_1;
}

// @baa 0x00ac0420
void __stdcall sub_00ac0420(int a0, int a1) {  }

struct C_00ac0430 { int sub_00ac0430(void); };

// @baa 0x00ac0430
int C_00ac0430::sub_00ac0430(void) { return *(int*)((char*)this + 0); }

struct C_00ac0440 { int sub_00ac0440(void); };

// @baa 0x00ac0440
int C_00ac0440::sub_00ac0440(void) { return *(int*)((char*)this + 0); }

struct C_00ac0450 {
    int sub_00ac0450(int);
};

// @baa 0x00ac0450
int C_00ac0450::sub_00ac0450(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_00ac0460 { C_00ac0460* sub_00ac0460(void); };

// @baa 0x00ac0460
C_00ac0460* C_00ac0460::sub_00ac0460(void) { *(int*)((char*)this + 16) = 0; return this; }

struct C_00ac0470 { int sub_00ac0470(void); };

// @baa 0x00ac0470
int C_00ac0470::sub_00ac0470(void) { return *(int*)((char*)this + 0); }

struct C_00ac0480 {
    int sub_00ac0480(int);
};

// @baa 0x00ac0480
int C_00ac0480::sub_00ac0480(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_00ac0520 { int sub_00ac0520(void); };

// @baa 0x00ac0520
int C_00ac0520::sub_00ac0520(void) { return *(int*)((char*)this + 0); }

struct C_00ac0530 { int sub_00ac0530(void); };

// @baa 0x00ac0530
int C_00ac0530::sub_00ac0530(void) { return *(int*)((char*)this + 0); }

struct C_00ac05d0 { int sub_00ac05d0(void); };

// @baa 0x00ac05d0
int C_00ac05d0::sub_00ac05d0(void) { return *(int*)((char*)this + 0); }

struct C_00ac05e0 {
    int sub_00ac05e0(int);
};

// @baa 0x00ac05e0
int C_00ac05e0::sub_00ac05e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_00ac05f0 { int sub_00ac05f0(void); };

// @baa 0x00ac05f0
int C_00ac05f0::sub_00ac05f0(void) { return *(int*)((char*)this + 0); }

struct C_00ac0690 { int sub_00ac0690(void); };

// @baa 0x00ac0690
int C_00ac0690::sub_00ac0690(void) { return *(int*)((char*)this + 0); }

int sub_005413d0(...);
// @baa 0x00ac0730
void sub_00ac0730(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_00ac0740 {
    int sub_00ac0740();
};

// @baa 0x00ac0740
int C_00ac0740::sub_00ac0740(void)
{
    int param_1 = (int)this;
  return *(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c);
}

struct C_00ac0750 { C_00ac0750* sub_00ac0750(void); };

// @baa 0x00ac0750
C_00ac0750* C_00ac0750::sub_00ac0750(void) { *(int*)((char*)this + 16384) = 0; return this; }

struct C_00ac0760 {
    void sub_00ac0760();
};

// @baa 0x00ac0760
void C_00ac0760::sub_00ac0760(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x4000) != 0) {
    sub_0053dfa0(*(int *)(param_1 + 0x4000));
    *(undefined4 *)(param_1 + 0x4000) = 0;
  }
  return;
}

struct C_00ac0790 { int sub_00ac0790(void); };

// @baa 0x00ac0790
int C_00ac0790::sub_00ac0790(void) { return *(int*)((char*)this + 0); }

struct C_00ac07a0 { int sub_00ac07a0(void); };

// @baa 0x00ac07a0
int C_00ac07a0::sub_00ac07a0(void) { return *(int*)((char*)this + 0); }

struct C_00ac07b0 {
    int sub_00ac07b0(int);
};

// @baa 0x00ac07b0
int C_00ac07b0::sub_00ac07b0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0xb8 + *param_1;
}

struct C_00ac0850 {
    int sub_00ac0850(int);
};

// @baa 0x00ac0850
int C_00ac0850::sub_00ac0850(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00ac0860
void __stdcall sub_00ac0860(int a0, int a1) {  }

struct C_00ac0870 {
    int sub_00ac0870(int);
};

// @baa 0x00ac0870
int C_00ac0870::sub_00ac0870(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x1150 + *param_1;
}

struct C_00ac0880 { int sub_00ac0880(void); };

// @baa 0x00ac0880
int C_00ac0880::sub_00ac0880(void) { return *(int*)((char*)this + 0); }

struct C_00ac0890 {
    int sub_00ac0890(int);
};

// @baa 0x00ac0890
int C_00ac0890::sub_00ac0890(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00ac08a0 { int sub_00ac08a0(void); };

// @baa 0x00ac08a0
int C_00ac08a0::sub_00ac08a0(void) { return *(int*)((char*)this + 0); }

struct C_00ac08b0 {
    int sub_00ac08b0(int);
};

// @baa 0x00ac08b0
int C_00ac08b0::sub_00ac08b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_00ac0930 { int sub_00ac0930(void); };

// @baa 0x00ac0930
int C_00ac0930::sub_00ac0930(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00ac0940 { int sub_00ac0940(void); };

// @baa 0x00ac0940
int C_00ac0940::sub_00ac0940(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00ac09a0 { C_00ac09a0* sub_00ac09a0(void); };

// @baa 0x00ac09a0
C_00ac09a0* C_00ac09a0::sub_00ac09a0(void) { *(int*)((char*)this + 12) = 0; return this; }

struct C_00ac09b0 {
    void sub_00ac09b0();
};

// @baa 0x00ac09b0
void C_00ac09b0::sub_00ac09b0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0xc) != 0) {
    sub_0053dfa0(*(int *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

struct C_00ac09d0 {
    int sub_00ac09d0(int);
};

// @baa 0x00ac09d0
int C_00ac09d0::sub_00ac09d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_00ac09e0 {
    int sub_00ac09e0(int);
};

// @baa 0x00ac09e0
int C_00ac09e0::sub_00ac09e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_00ac09f0 {
    int sub_00ac09f0(int);
};

// @baa 0x00ac09f0
int C_00ac09f0::sub_00ac09f0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00ac0a00
void __stdcall sub_00ac0a00(int a0, int a1) {  }

struct C_00ac0a10 {
    int sub_00ac0a10(int);
};

// @baa 0x00ac0a10
int C_00ac0a10::sub_00ac0a10(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x30 + *param_1;
}

struct C_00ac0a20 {
    int sub_00ac0a20(int);
};

// @baa 0x00ac0a20
int C_00ac0a20::sub_00ac0a20(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

// @baa 0x00ac0a30
void __stdcall sub_00ac0a30(int a0, int a1) {  }

struct C_00ac0a40 {
    void sub_00ac0a40(undefined4 *);
};

// @baa 0x00ac0a40
void C_00ac0a40::sub_00ac0a40(undefined4 * param_2)
{
    undefined4 param_1 = (undefined4)this;
  *param_2 = param_1;
  param_2[1] = 0;
  return;
}

struct C_00ac0a50 {
    int sub_00ac0a50();
};

// @baa 0x00ac0a50
int C_00ac0a50::sub_00ac0a50(void)
{
    int param_1 = (int)this;
  return *(int *)(param_1 + 0x314) * 0x30 + 0x350;
}

struct C_00ac0a70 {
    int sub_00ac0a70();
};

// @baa 0x00ac0a70
int C_00ac0a70::sub_00ac0a70(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x3c8) * 0x3c + 0x3f4;
}

struct C_00ac0a90 {
    int sub_00ac0a90(int);
};

// @baa 0x00ac0a90
int C_00ac0a90::sub_00ac0a90(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct A_00ac0c40 { virtual void sub_00ac12b0(); char pad[16]; };

struct B_00ac0c40 { virtual void sub_00ac12b0(); };

struct C_00ac0c40 : A_00ac0c40, B_00ac0c40 { virtual void sub_00ac12b0(); C_00ac0c40(); };

C_00ac0c40::C_00ac0c40() {}

// @baa 0x00ac0c40
void C_00ac0c40::sub_00ac12b0() {}

struct A_00ac0da0 { virtual void sub_00ac12d0(); char pad[16]; };

struct B_00ac0da0 { virtual void sub_00ac12d0(); };

struct C_00ac0da0 : A_00ac0da0, B_00ac0da0 { virtual void sub_00ac12d0(); C_00ac0da0(); };

C_00ac0da0::C_00ac0da0() {}

// @baa 0x00ac0da0
void C_00ac0da0::sub_00ac12d0() {}

struct A_00ac0f00 { virtual void sub_00ac12f0(); char pad[16]; };

struct B_00ac0f00 { virtual void sub_00ac12f0(); };

struct C_00ac0f00 : A_00ac0f00, B_00ac0f00 { virtual void sub_00ac12f0(); C_00ac0f00(); };

C_00ac0f00::C_00ac0f00() {}

// @baa 0x00ac0f00
void C_00ac0f00::sub_00ac12f0() {}

struct A_00ac1060 { virtual void sub_00ac1310(); char pad[16]; };

struct B_00ac1060 { virtual void sub_00ac1310(); };

struct C_00ac1060 : A_00ac1060, B_00ac1060 { virtual void sub_00ac1310(); C_00ac1060(); };

C_00ac1060::C_00ac1060() {}

// @baa 0x00ac1060
void C_00ac1060::sub_00ac1310() {}

struct C_00ac1070 { int a, b, c; C_00ac1070(); };

// @baa 0x00ac1070
C_00ac1070::C_00ac1070() : a(0), b(0), c(0) {}

struct C_00ac1090 {
    int sub_00ac1090();
};

// @baa 0x00ac1090
int C_00ac1090::sub_00ac1090(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00ac1290 {
    undefined4 sub_00ac1290(byte);
};

// @baa 0x00ac1290
undefined4 C_00ac1290::sub_00ac1290(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ac12b0 {
    undefined4 sub_00ac12b0(byte);
};

int sub_00ac0be0(void);
// @baa 0x00ac12b0
undefined4 C_00ac12b0::sub_00ac12b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00ac0be0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ac12d0 {
    undefined4 sub_00ac12d0(byte);
};

int sub_00ac0d40(void);
// @baa 0x00ac12d0
undefined4 C_00ac12d0::sub_00ac12d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00ac0d40();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ac12f0 {
    undefined4 sub_00ac12f0(byte);
};

int sub_00ac0ea0(void);
// @baa 0x00ac12f0
undefined4 C_00ac12f0::sub_00ac12f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00ac0ea0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ac1310 {
    undefined4 sub_00ac1310(byte);
};

int sub_00ac1000(void);
// @baa 0x00ac1310
undefined4 C_00ac1310::sub_00ac1310(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00ac1000();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ac1330 {
    undefined4 sub_00ac1330(byte);
};

int sub_007249d0(void);
// @baa 0x00ac1330
undefined4 C_00ac1330::sub_00ac1330(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ac1350 {
    undefined4 sub_00ac1350(byte);
};

// @baa 0x00ac1350
undefined4 C_00ac1350::sub_00ac1350(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ac1370 {
    undefined4 sub_00ac1370(byte);
};

// @baa 0x00ac1370
undefined4 C_00ac1370::sub_00ac1370(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ac1390 {
    undefined4 sub_00ac1390(byte);
};

// @baa 0x00ac1390
undefined4 C_00ac1390::sub_00ac1390(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ac13b0 {
    undefined4 sub_00ac13b0(byte);
};

// @baa 0x00ac13b0
undefined4 C_00ac13b0::sub_00ac13b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ac13d0 {
    undefined4 sub_00ac13d0(byte);
};

// @baa 0x00ac13d0
undefined4 C_00ac13d0::sub_00ac13d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ac13f0 {
    undefined4 sub_00ac13f0(byte);
};

// @baa 0x00ac13f0
undefined4 C_00ac13f0::sub_00ac13f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ac1410 {
    undefined4 sub_00ac1410(byte);
};

// @baa 0x00ac1410
undefined4 C_00ac1410::sub_00ac1410(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ac1430 {
    undefined4 sub_00ac1430(byte);
};

// @baa 0x00ac1430
undefined4 C_00ac1430::sub_00ac1430(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ac1450 {
    undefined4 sub_00ac1450(byte);
};

// @baa 0x00ac1450
undefined4 C_00ac1450::sub_00ac1450(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ac1470 {
    undefined4 sub_00ac1470(byte);
};

// @baa 0x00ac1470
undefined4 C_00ac1470::sub_00ac1470(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ac1490 {
    undefined4 sub_00ac1490(byte);
};

// @baa 0x00ac1490
undefined4 C_00ac1490::sub_00ac1490(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ac14b0 {
    undefined4 sub_00ac14b0(byte);
};

// @baa 0x00ac14b0
undefined4 C_00ac14b0::sub_00ac14b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ac14d0 {
    undefined4 sub_00ac14d0(byte);
};

// @baa 0x00ac14d0
undefined4 C_00ac14d0::sub_00ac14d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ac14f0 {
    undefined4 sub_00ac14f0(byte);
};

// @baa 0x00ac14f0
undefined4 C_00ac14f0::sub_00ac14f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ac1510 {
    undefined4 sub_00ac1510(byte);
};

// @baa 0x00ac1510
undefined4 C_00ac1510::sub_00ac1510(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ac1530 {
    undefined4 sub_00ac1530(byte);
};

// @baa 0x00ac1530
undefined4 C_00ac1530::sub_00ac1530(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ac1550 {
    undefined4 sub_00ac1550(byte);
};

// @baa 0x00ac1550
undefined4 C_00ac1550::sub_00ac1550(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ac1570 {
    undefined4 sub_00ac1570(byte);
};

// @baa 0x00ac1570
undefined4 C_00ac1570::sub_00ac1570(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ac1590 {
    undefined4 sub_00ac1590(byte);
};

// @baa 0x00ac1590
undefined4 C_00ac1590::sub_00ac1590(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ac15b0 {
    undefined4 sub_00ac15b0(byte);
};

// @baa 0x00ac15b0
undefined4 C_00ac15b0::sub_00ac15b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ac15d0 {
    undefined4 sub_00ac15d0(byte);
};

// @baa 0x00ac15d0
undefined4 C_00ac15d0::sub_00ac15d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ac15f0 {
    undefined4 sub_00ac15f0(byte);
};

// @baa 0x00ac15f0
undefined4 C_00ac15f0::sub_00ac15f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ac1610 {
    undefined4 sub_00ac1610(byte);
};

// @baa 0x00ac1610
undefined4 C_00ac1610::sub_00ac1610(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ac1630 {
    undefined4 sub_00ac1630(byte);
};

// @baa 0x00ac1630
undefined4 C_00ac1630::sub_00ac1630(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ac1650 {
    undefined4 sub_00ac1650(byte);
};

// @baa 0x00ac1650
undefined4 C_00ac1650::sub_00ac1650(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ac1670 {
    undefined4 sub_00ac1670(byte);
};

// @baa 0x00ac1670
undefined4 C_00ac1670::sub_00ac1670(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ac1690 {
    undefined4 sub_00ac1690(byte);
};

// @baa 0x00ac1690
undefined4 C_00ac1690::sub_00ac1690(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ac16b0 {
    undefined4 sub_00ac16b0(byte);
};

// @baa 0x00ac16b0
undefined4 C_00ac16b0::sub_00ac16b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ac16d0 {
    undefined4 sub_00ac16d0(byte);
};

// @baa 0x00ac16d0
undefined4 C_00ac16d0::sub_00ac16d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ac16f0 {
    undefined4 sub_00ac16f0(byte);
};

// @baa 0x00ac16f0
undefined4 C_00ac16f0::sub_00ac16f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ac1710 {
    undefined4 sub_00ac1710(byte);
};

// @baa 0x00ac1710
undefined4 C_00ac1710::sub_00ac1710(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ac1730 {
    undefined4 sub_00ac1730(byte);
};

// @baa 0x00ac1730
undefined4 C_00ac1730::sub_00ac1730(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ac1750 {
    undefined4 sub_00ac1750(byte);
};

// @baa 0x00ac1750
undefined4 C_00ac1750::sub_00ac1750(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ac1770 {
    undefined4 sub_00ac1770(byte);
};

// @baa 0x00ac1770
undefined4 C_00ac1770::sub_00ac1770(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ac17b0 { int sub_00ac17b0(void); };

// @baa 0x00ac17b0
int C_00ac17b0::sub_00ac17b0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct S {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00ac1850(INT Index);
};

// @baa 0x00ac1850
DWORD* S::sub_00ac1850(INT Index)
{
    return &Items(Index);
}

struct E { BYTE Bytes[12]; };

struct S_00ac1930 {
    TArray<E> Items; // 0x00
    E* sub_00ac1930(INT Index);
};

// @baa 0x00ac1930
E* S_00ac1930::sub_00ac1930(INT Index)
{
    return &Items(Index);
}

struct C_00ac1980 { int sub_00ac1980(void); };

// @baa 0x00ac1980
int C_00ac1980::sub_00ac1980(void) { return *(int*)((char*)this + 0); }

struct C_00ac1990 { int sub_00ac1990(void); };

// @baa 0x00ac1990
int C_00ac1990::sub_00ac1990(void) { return *(int*)((char*)this + 0); }

struct C_00ac19a0 {
    int sub_00ac19a0(int);
};

// @baa 0x00ac19a0
int C_00ac19a0::sub_00ac19a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_00ac19b0 {
    int sub_00ac19b0(int);
};

// @baa 0x00ac19b0
int C_00ac19b0::sub_00ac19b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_00ac19c0 {
    uint sub_00ac19c0();
};

// @baa 0x00ac19c0
uint C_00ac19c0::sub_00ac19c0(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x4000) | -(uint)(*(uint *)(param_1 + 0x4000) == 0) & param_1;
}

struct C_00ac1a70 { int sub_00ac1a70(void); };

// @baa 0x00ac1a70
int C_00ac1a70::sub_00ac1a70(void) { return *(int*)((char*)this + 0); }

struct C_00ac1a80 { int sub_00ac1a80(void); };

// @baa 0x00ac1a80
int C_00ac1a80::sub_00ac1a80(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

// @baa 0x00ac1a90
void sub_00ac1a90(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_00ac1aa0 {
    int sub_00ac1aa0(int);
};

// @baa 0x00ac1aa0
int C_00ac1aa0::sub_00ac1aa0(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0xc;
}

struct C_00ac1ab0 {
    int sub_00ac1ab0(int);
};

// @baa 0x00ac1ab0
int C_00ac1ab0::sub_00ac1ab0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_00ac1ac0 {
    int sub_00ac1ac0(int);
};

// @baa 0x00ac1ac0
int C_00ac1ac0::sub_00ac1ac0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_00ac1c30 {
    uint sub_00ac1c30();
};

// @baa 0x00ac1c30
uint C_00ac1c30::sub_00ac1c30(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0xc) | -(uint)(*(uint *)(param_1 + 0xc) == 0) & param_1;
}

// @baa 0x00ac1cf0
int UFracturedStaticMeshComponent::sub_00ac1cf0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00ac1d00
int UFracturedStaticMeshComponent::sub_00ac1d00(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00ac1d10
int UFracturedStaticMeshComponent::sub_00ac1d10(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x30 + *param_1;
}

// @baa 0x00ac1d20
int UFracturedStaticMeshComponent::sub_00ac1d20(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x30 + *param_1;
}

// @baa 0x00ac1d30
int UFracturedStaticMeshComponent::sub_00ac1d30(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00ac1d70
void sub_00ac1d70(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

// @baa 0x00ac1da0
int UFracturedStaticMeshComponent::sub_00ac1da0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

// @baa 0x00ac1de0
void sub_00ac1de0(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

// @baa 0x00ac1e10
int UFracturedStaticMeshComponent::sub_00ac1e10(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

// @baa 0x00ac1e50
void sub_00ac1e50(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

// @baa 0x00ac1e80
int UFracturedStaticMeshComponent::sub_00ac1e80(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00ac1e90 {
    void sub_00ac1e90();
};

// @baa 0x00ac1e90
void C_00ac1e90::sub_00ac1e90(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x300) != 0) {
    sub_0053dfa0(*(int *)(param_1 + 0x300));
    *(undefined4 *)(param_1 + 0x300) = 0;
  }
  return;
}

struct C_00ac1ec0 {
    void sub_00ac1ec0();
};

// @baa 0x00ac1ec0
void C_00ac1ec0::sub_00ac1ec0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x3c0) != 0) {
    sub_0053dfa0(*(int *)(param_1 + 0x3c0));
    *(undefined4 *)(param_1 + 0x3c0) = 0;
  }
  return;
}

// @baa 0x00ac2010
int UFracturedStaticMeshComponent::sub_00ac2010(void) { return *(int*)((char*)this + 0); }

// @baa 0x00ac2020
int UFracturedStaticMeshComponent::sub_00ac2020(void) { return *(int*)((char*)this + 0); }

struct C_00ac20c0 { int a, b, c; C_00ac20c0(); };

// @baa 0x00ac20c0
C_00ac20c0::C_00ac20c0() : a(0), b(0), c(0) {}

struct C_00ac20d0 { int sub_00ac20d0(void); };

// @baa 0x00ac20d0
int C_00ac20d0::sub_00ac20d0(void) { return *(int*)((char*)this + 0); }

struct C_00ac2110 {
    int sub_00ac2110();
};

// @baa 0x00ac2110
int C_00ac2110::sub_00ac2110(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00ac21d0 {
    int sub_00ac21d0();
};

// @baa 0x00ac21d0
int C_00ac21d0::sub_00ac21d0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00ac21f0 {
    void sub_00ac21f0();
};

// @baa 0x00ac21f0
void C_00ac21f0::sub_00ac21f0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x18c0) != 0) {
    sub_0053dfa0(*(int *)(param_1 + 0x18c0));
    *(undefined4 *)(param_1 + 0x18c0) = 0;
  }
  return;
}

struct C_00ac2220 {
    void sub_00ac2220();
};

// @baa 0x00ac2220
void C_00ac2220::sub_00ac2220(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x18c0) != 0) {
    sub_0053dfa0(*(int *)(param_1 + 0x18c0));
    *(undefined4 *)(param_1 + 0x18c0) = 0;
  }
  return;
}

struct C_00ac2250 {
    int sub_00ac2250();
};

// @baa 0x00ac2250
int C_00ac2250::sub_00ac2250(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00ac2270 {
    int sub_00ac2270();
};

// @baa 0x00ac2270
int C_00ac2270::sub_00ac2270(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00ac2290 {
    int sub_00ac2290();
};

// @baa 0x00ac2290
int C_00ac2290::sub_00ac2290(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00ac22b0 {
    int sub_00ac22b0();
};

// @baa 0x00ac22b0
int C_00ac22b0::sub_00ac22b0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00ac22d0 {
    int sub_00ac22d0();
};

// @baa 0x00ac22d0
int C_00ac22d0::sub_00ac22d0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00ac22f0{
int sub_00ac22f0(byte);
};

extern undefined4*g_026b0d94;
// @baa 0x00ac22f0
int C_00ac22f0::sub_00ac22f0(byte param_2)
{
int param_1=(DWORD)this;

if(*(int*)(param_1+8)!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x218))((int)(*(int*)(param_1+8)));
}
if((param_2&1)!=0){
sub_0053dfa0(param_1);
}
return param_1;
}

struct C_00ac2330 {
    int sub_00ac2330(int);
};

// @baa 0x00ac2330
int C_00ac2330::sub_00ac2330(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x4c + *param_1;
}

struct C_00ac2340 {
    int sub_00ac2340(int);
};

// @baa 0x00ac2340
int C_00ac2340::sub_00ac2340(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

int sub_00ab9770(...);
int sub_00ab97f0(...);
// @baa 0x00ac2440
void sub_00ac2440(undefined4 * param_1)
{
  undefined4 uVar1;
  
  uVar1 = sub_00ab9770(*param_1,0);
  sub_00ab97f0(param_1[1],uVar1);
  return;
}

struct C_00ac2460 {
    int sub_00ac2460(int);
};

// @baa 0x00ac2460
int C_00ac2460::sub_00ac2460(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00ac2470 {
    int sub_00ac2470(int);
};

// @baa 0x00ac2470
int C_00ac2470::sub_00ac2470(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00ac2480 {
    int sub_00ac2480(int);
};

// @baa 0x00ac2480
int C_00ac2480::sub_00ac2480(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct E_00ac2490 { BYTE Bytes[48]; };

struct S_00ac2490 {
    TArray<E_00ac2490> Items; // 0x00
    E_00ac2490* sub_00ac2490(INT Index);
};

// @baa 0x00ac2490
E_00ac2490* S_00ac2490::sub_00ac2490(INT Index)
{
    return &Items(Index);
}

struct C_00ac24e0 {
    int sub_00ac24e0(int);
};

// @baa 0x00ac24e0
int C_00ac24e0::sub_00ac24e0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00ac24f0 {
    int sub_00ac24f0(int);
};

// @baa 0x00ac24f0
int C_00ac24f0::sub_00ac24f0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00ac2500 {
    int sub_00ac2500(int);
};

// @baa 0x00ac2500
int C_00ac2500::sub_00ac2500(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x30 + *param_1;
}

struct C_00ac2510 {
    int sub_00ac2510(int);
};

// @baa 0x00ac2510
int C_00ac2510::sub_00ac2510(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x30 + *param_1;
}

struct C_00ac2520 {
    int sub_00ac2520(int);
};

// @baa 0x00ac2520
int C_00ac2520::sub_00ac2520(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x40 + *param_1;
}

struct C_00ac2530 {
    int sub_00ac2530(int);
};

// @baa 0x00ac2530
int C_00ac2530::sub_00ac2530(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x40 + *param_1;
}

struct C_00ac2540 { int sub_00ac2540(void); };

// @baa 0x00ac2540
int C_00ac2540::sub_00ac2540(void) { return *(int*)((char*)this + 0); }

struct C_00ac2550 { C_00ac2550* sub_00ac2550(void); };

// @baa 0x00ac2550
C_00ac2550* C_00ac2550::sub_00ac2550(void) { *(int*)((char*)this + 6336) = 0; return this; }

struct C_00ac2560 {
    uint sub_00ac2560();
};

// @baa 0x00ac2560
uint C_00ac2560::sub_00ac2560(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x18c0) | -(uint)(*(uint *)(param_1 + 0x18c0) == 0) & param_1;
}

struct C_00ac2640 { C_00ac2640* sub_00ac2640(void); };

// @baa 0x00ac2640
C_00ac2640* C_00ac2640::sub_00ac2640(void) { *(int*)((char*)this + 6336) = 0; return this; }

struct C_00ac2650 {
    uint sub_00ac2650();
};

// @baa 0x00ac2650
uint C_00ac2650::sub_00ac2650(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x18c0) | -(uint)(*(uint *)(param_1 + 0x18c0) == 0) & param_1;
}

struct C_00ac2730 {
    int sub_00ac2730();
};

// @baa 0x00ac2730
int C_00ac2730::sub_00ac2730(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0xc;
}

struct C_00ac2740 {
    int sub_00ac2740();
};

// @baa 0x00ac2740
int C_00ac2740::sub_00ac2740(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00ac2760 {
    int sub_00ac2760();
};

// @baa 0x00ac2760
int C_00ac2760::sub_00ac2760(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00ac2780 {
    int sub_00ac2780();
};

// @baa 0x00ac2780
int C_00ac2780::sub_00ac2780(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00ac27a0 {
    int sub_00ac27a0();
};

// @baa 0x00ac27a0
int C_00ac27a0::sub_00ac27a0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00ac27c0 {
    int sub_00ac27c0();
};

// @baa 0x00ac27c0
int C_00ac27c0::sub_00ac27c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0xc;
}

struct C_00ac27d0 {
    int sub_00ac27d0();
};

// @baa 0x00ac27d0
int C_00ac27d0::sub_00ac27d0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00ac27f0 {
    int sub_00ac27f0();
};

// @baa 0x00ac27f0
int C_00ac27f0::sub_00ac27f0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00ac2810 {
    int sub_00ac2810();
};

// @baa 0x00ac2810
int C_00ac2810::sub_00ac2810(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00ac2830 {
    int sub_00ac2830();
};

// @baa 0x00ac2830
int C_00ac2830::sub_00ac2830(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00ac2850 {
    int sub_00ac2850();
};

// @baa 0x00ac2850
int C_00ac2850::sub_00ac2850(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00ac2870 {
    int sub_00ac2870();
};

// @baa 0x00ac2870
int C_00ac2870::sub_00ac2870(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00ac2890 {
    int sub_00ac2890();
};

// @baa 0x00ac2890
int C_00ac2890::sub_00ac2890(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00ac28b0 {
    int sub_00ac28b0();
};

// @baa 0x00ac28b0
int C_00ac28b0::sub_00ac28b0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00ac28d0 {
    int sub_00ac28d0();
};

// @baa 0x00ac28d0
int C_00ac28d0::sub_00ac28d0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00ac28f0 {
    int sub_00ac28f0();
};

// @baa 0x00ac28f0
int C_00ac28f0::sub_00ac28f0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00ac2910 {
    int sub_00ac2910();
};

// @baa 0x00ac2910
int C_00ac2910::sub_00ac2910(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00ac2930 {
    int sub_00ac2930();
};

// @baa 0x00ac2930
int C_00ac2930::sub_00ac2930(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00ac2950 {
    int sub_00ac2950();
};

// @baa 0x00ac2950
int C_00ac2950::sub_00ac2950(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00ac2970 {
    int sub_00ac2970();
};

// @baa 0x00ac2970
int C_00ac2970::sub_00ac2970(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00ac2990 {
    int sub_00ac2990();
};

// @baa 0x00ac2990
int C_00ac2990::sub_00ac2990(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00ac29b0 {
    int sub_00ac29b0();
};

// @baa 0x00ac29b0
int C_00ac29b0::sub_00ac29b0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00ac29d0 {
    int sub_00ac29d0(int);
};

// @baa 0x00ac29d0
int C_00ac29d0::sub_00ac29d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_00ac29e0 {
    int sub_00ac29e0(int);
};

// @baa 0x00ac29e0
int C_00ac29e0::sub_00ac29e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct E_00ac29f0 { BYTE Bytes[76]; };

struct S_00ac29f0 {
    TArray<E_00ac29f0> Items; // 0x00
    E_00ac29f0* sub_00ac29f0(INT Index);
};

// @baa 0x00ac29f0
E_00ac29f0* S_00ac29f0::sub_00ac29f0(INT Index)
{
    return &Items(Index);
}

struct C_00ac2ad0 { int sub_00ac2ad0(void); };

// @baa 0x00ac2ad0
int C_00ac2ad0::sub_00ac2ad0(void) { return *(int*)((char*)this + 0); }

struct C_00ac2b70 { C_00ac2b70* sub_00ac2b70(void); };

// @baa 0x00ac2b70
C_00ac2b70* C_00ac2b70::sub_00ac2b70(void) { *(int*)((char*)this + 4) = 0; return this; }

struct C_00ac2b80 {
    int sub_00ac2b80(int);
};

// @baa 0x00ac2b80
int C_00ac2b80::sub_00ac2b80(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_00ac2b90 {
    int sub_00ac2b90(int);
};

// @baa 0x00ac2b90
int C_00ac2b90::sub_00ac2b90(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_00ac2ba0 {
    int sub_00ac2ba0(int);
};

// @baa 0x00ac2ba0
int C_00ac2ba0::sub_00ac2ba0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_00ac2bb0 {
    int sub_00ac2bb0(int);
};

// @baa 0x00ac2bb0
int C_00ac2bb0::sub_00ac2bb0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_00ac2bc0 {
    int sub_00ac2bc0(int);
};

// @baa 0x00ac2bc0
int C_00ac2bc0::sub_00ac2bc0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x30 + *param_1;
}

struct E_00ac2bd0 { BYTE Bytes[48]; };

struct S_00ac2bd0 {
    TArray<E_00ac2bd0> Items; // 0x00
    E_00ac2bd0* sub_00ac2bd0(INT Index);
};

// @baa 0x00ac2bd0
E_00ac2bd0* S_00ac2bd0::sub_00ac2bd0(INT Index)
{
    return &Items(Index);
}

struct C_00ac2c20 {
    int sub_00ac2c20(int);
};

// @baa 0x00ac2c20
int C_00ac2c20::sub_00ac2c20(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x40 + *param_1;
}

struct E_00ac2c30 { BYTE Bytes[64]; };

struct S_00ac2c30 {
    TArray<E_00ac2c30> Items; // 0x00
    E_00ac2c30* sub_00ac2c30(INT Index);
};

// @baa 0x00ac2c30
E_00ac2c30* S_00ac2c30::sub_00ac2c30(INT Index)
{
    return &Items(Index);
}

struct C_00ac2c80 {
    uint sub_00ac2c80();
};

// @baa 0x00ac2c80
uint C_00ac2c80::sub_00ac2c80(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x300) | -(uint)(*(uint *)(param_1 + 0x300) == 0) & param_1;
}

struct C_00ac2d30 {
    int sub_00ac2d30();
};

// @baa 0x00ac2d30
int C_00ac2d30::sub_00ac2d30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00ac2d40 { int sub_00ac2d40(void); };

// @baa 0x00ac2d40
int C_00ac2d40::sub_00ac2d40(void) { return *(int*)((char*)this + 20); }

struct C_00ac2d70 {
    int sub_00ac2d70();
};

// @baa 0x00ac2d70
int C_00ac2d70::sub_00ac2d70(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00ac2d90 {
    int sub_00ac2d90();
};

// @baa 0x00ac2d90
int C_00ac2d90::sub_00ac2d90(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00ac2db0 {
    int sub_00ac2db0();
};

// @baa 0x00ac2db0
int C_00ac2db0::sub_00ac2db0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct S_00ac2dd0 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_00ac2dd0(INT Index);
};

// @baa 0x00ac2dd0
QWORD* S_00ac2dd0::sub_00ac2dd0(INT Index)
{
    return &Items(Index);
}

struct S_00ac2e20 {
    TArray<E> Items; // 0x00
    E* sub_00ac2e20(INT Index);
};

// @baa 0x00ac2e20
E* S_00ac2e20::sub_00ac2e20(INT Index)
{
    return &Items(Index);
}

struct C_00ac2e70 {
    int sub_00ac2e70(int);
};

// @baa 0x00ac2e70
int C_00ac2e70::sub_00ac2e70(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x4c + *param_1;
}

struct C_00ac2e80 {
    int sub_00ac2e80(int);
};

// @baa 0x00ac2e80
int C_00ac2e80::sub_00ac2e80(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x2c + *param_1;
}

struct C_00ac2e90 { int a, b, c; C_00ac2e90(); };

// @baa 0x00ac2e90
C_00ac2e90::C_00ac2e90() : a(0), b(0), c(0) {}

struct C_00ac2ea0 { int sub_00ac2ea0(void); };

// @baa 0x00ac2ea0
int C_00ac2ea0::sub_00ac2ea0(void) { return *(int*)((char*)this + 0); }

struct S_00ac2eb0 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_00ac2eb0(INT Index);
};

// @baa 0x00ac2eb0
QWORD* S_00ac2eb0::sub_00ac2eb0(INT Index)
{
    return &Items(Index);
}

struct S_00ac2f00 {
    TArray<E> Items; // 0x00
    E* sub_00ac2f00(INT Index);
};

// @baa 0x00ac2f00
E* S_00ac2f00::sub_00ac2f00(INT Index)
{
    return &Items(Index);
}

struct C_00ac2f50 {
    int sub_00ac2f50(int);
};

// @baa 0x00ac2f50
int C_00ac2f50::sub_00ac2f50(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x48;
}

struct S_00ac2f60 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_00ac2f60(INT Index);
};

// @baa 0x00ac2f60
QWORD* S_00ac2f60::sub_00ac2f60(INT Index)
{
    return &Items(Index);
}

struct S_00ac2fb0 {
    TArray<E> Items; // 0x00
    E* sub_00ac2fb0(INT Index);
};

// @baa 0x00ac2fb0
E* S_00ac2fb0::sub_00ac2fb0(INT Index)
{
    return &Items(Index);
}

struct C_00ac3000 {
    int sub_00ac3000(int);
};

// @baa 0x00ac3000
int C_00ac3000::sub_00ac3000(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x48;
}

// @baa 0x00ac4040
void sub_00ac4040(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

struct C_00ac4060{
int sub_00ac4060(byte);
};

// @baa 0x00ac4060
int C_00ac4060::sub_00ac4060(byte param_2)
{
int param_1=(int)this;

if(*(int*)(param_1+4)!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x218))((int)(*(DWORD*)(param_1+4)));
}
if(0!=(param_2&1)){
sub_0053dfa0(param_1);
}
return param_1;
}

struct C_00ac40a0 {
    void sub_00ac40a0(int);
};

int sub_0053df70(...);
// @baa 0x00ac40a0
void C_00ac40a0::sub_00ac40a0(int param_2)
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

struct C_00ac40e0 {
    void sub_00ac40e0(int);
};

// @baa 0x00ac40e0
void C_00ac40e0::sub_00ac40e0(int param_2)
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

struct E_00ac41f0 { BYTE Bytes[16]; };

struct S_00ac41f0 {
    TArray<E_00ac41f0> Items; // 0x00
    E_00ac41f0* sub_00ac41f0(INT Index);
};

// @baa 0x00ac41f0
E_00ac41f0* S_00ac41f0::sub_00ac41f0(INT Index)
{
    return &Items(Index);
}

struct E_00ac4240 { BYTE Bytes[16]; };

struct S_00ac4240 {
    TArray<E_00ac4240> Items; // 0x00
    const E_00ac4240* sub_00ac4240(INT Index) const;
};

// @baa 0x00ac4240
const E_00ac4240* S_00ac4240::sub_00ac4240(INT Index) const
{
    return &Items(Index);
}

struct C_00ac4310 { C_00ac4310* sub_00ac4310(void); };

// @baa 0x00ac4310
C_00ac4310* C_00ac4310::sub_00ac4310(void) { *(int*)((char*)this + 768) = 0; return this; }

struct C_00ac43a0 { C_00ac43a0* sub_00ac43a0(void); };

// @baa 0x00ac43a0
C_00ac43a0* C_00ac43a0::sub_00ac43a0(void) { *(int*)((char*)this + 960) = 0; return this; }

// @baa 0x00ac43b0
void __stdcall sub_00ac43b0(int a0, int a1) {  }

struct C_00ac4680 {
    uint sub_00ac4680();
};

// @baa 0x00ac4680
uint C_00ac4680::sub_00ac4680(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x40) | -(uint)(*(uint *)(param_1 + 0x40) == 0) & param_1;
}

struct C_00ac4740 {
    uint sub_00ac4740();
};

// @baa 0x00ac4740
uint C_00ac4740::sub_00ac4740(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x40) | -(uint)(*(uint *)(param_1 + 0x40) == 0) & param_1;
}

struct C_00ac4800 {
    int sub_00ac4800();
};

int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
// @baa 0x00ac4800
int C_00ac4800::sub_00ac4800(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x24) == 0) {
    sub_006311e0("GetTypedData()",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
                 ,599,&g_01e3f3dc);
  }
  return *(int *)(param_1 + 0x28) * 0x50 + -0x50 + *(int *)(param_1 + 0x24);
}

struct C_00ac4840 { void sub_00abbed0(int); C_00ac4840 *sub_00ac4840(int); };

// @baa 0x00ac4840
C_00ac4840 *C_00ac4840::sub_00ac4840(int a) { sub_00abbed0(a); return this; }

struct C_00ac4b20{
void sub_00ac4b20();
};

// @baa 0x00ac4b20
void C_00ac4b20::sub_00ac4b20(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x248))((int)(iVar1));
}
return;
}

extern undefined4 g_026bb6b4;
// @baa 0x00ac5680
int sub_00ac5680(void)
{
  return g_026bb6b4 * 0x28;
}

extern undefined4 g_026bb6b0;
extern undefined4 g_026bb6b8;
// @baa 0x00ac56c0
void sub_00ac56c0(undefined4 * param_1)
{
  g_026bb6b8 = g_026bb6b8 + -1;
  *param_1 = g_026bb6b0;
  g_026bb6b0 = (undefined4)(param_1);
  return;
}

struct C_00ac5ac0{
void sub_00ac5ac0();
};

// @baa 0x00ac5ac0
void C_00ac5ac0::sub_00ac5ac0(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(0!=iVar1){
(*(int(__stdcall**)(int))(*g_026b0d94+0x248))((int)(iVar1));
}
return;
}

struct C_00ac5bd0{
void sub_00ac5bd0();
};

// @baa 0x00ac5bd0
void C_00ac5bd0::sub_00ac5bd0(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(0!=iVar1){
(*(int(__stdcall**)(int))(*g_026b0d94+0x248))((int)(iVar1));
}
return;
}

struct S_00ac6660 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00ac6660(INT Index);
};

// @baa 0x00ac6660
DWORD* S_00ac6660::sub_00ac6660(INT Index)
{
    return &Items(Index);
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00ac66b0 { void* Data; int Num; int Max; void sub_00ac66b0(); };

// @baa 0x00ac66b0
void C_00ac66b0::sub_00ac66b0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00ac7070{
void sub_00ac7070(int);
};

// @baa 0x00ac7070
void C_00ac7070::sub_00ac7070(int param_2)
{
int*param_1=(int*)this;
int iVar1;
int iVar2;
iVar1=param_1[1];
iVar2=0;
if(0<iVar1){
do{
if((iVar2<0)||((iVar2>=param_1[1]&&((0!=iVar2||(param_1[1]!=0)))))){
sub_006311e0("i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0))",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x230,&g_01e3f3dc);
}
iVar2=iVar2+1;
}while(iVar2<iVar1);
}
param_1[1]=0;
if(param_1[2]!=param_2){
param_1[2]=param_2;
if((*param_1)||(param_2!=0)){
iVar1=sub_0053df70(*param_1,param_2*0x50,8);
*param_1=iVar1;
}
}
return;
}

int sub_00ac77f0(void);
// @baa 0x00ac7d80
undefined4 ULensFlare::sub_00ac7d80(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00ac77f0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00ac78e0(void);
// @baa 0x00ac7da0
undefined4 UTexture2DComposite::sub_00ac7da0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00ac78e0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00ac7e20 {
    int sub_00ac7e20(int);
};

// @baa 0x00ac7e20
int C_00ac7e20::sub_00ac7e20(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00ac7e30
void __stdcall sub_00ac7e30(int a0, int a1) {  }

// @baa 0x00ac7f90
void __stdcall sub_00ac7f90(int a0, int a1) {  }

struct C_00ac7fa0 {
    uint sub_00ac7fa0();
};

// @baa 0x00ac7fa0
uint C_00ac7fa0::sub_00ac7fa0(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x10) | -(uint)(*(uint *)(param_1 + 0x10) == 0) & param_1;
}

// @baa 0x00ac8020
void __stdcall sub_00ac8020(int a0, int a1) {  }

// @baa 0x00ac8030
void __stdcall sub_00ac8030(int a0, int a1) {  }

// @baa 0x00ac8040
void __stdcall sub_00ac8040(int a0, int a1) {  }

struct C_00ac80b0 {
    int sub_00ac80b0(int);
};

// @baa 0x00ac80b0
int C_00ac80b0::sub_00ac80b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_00ac8130 {
    int sub_00ac8130(int);
};

// @baa 0x00ac8130
int C_00ac8130::sub_00ac8130(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

// @baa 0x00ac8140
void __stdcall sub_00ac8140(int a0, int a1) {  }

struct C_00ac8200 {
    int sub_00ac8200(int);
};

// @baa 0x00ac8200
int C_00ac8200::sub_00ac8200(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_00ac8210 {
    int sub_00ac8210(int);
};

// @baa 0x00ac8210
int C_00ac8210::sub_00ac8210(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_00ac8280 {
    int sub_00ac8280(int);
};

// @baa 0x00ac8280
int C_00ac8280::sub_00ac8280(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00ac8290
void __stdcall sub_00ac8290(int a0, int a1) {  }

struct C_00ac83e0 { int sub_00ac83e0(void); };

// @baa 0x00ac83e0
int C_00ac83e0::sub_00ac83e0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

// @baa 0x00ac8490
int UFracturedStaticMeshComponent::sub_00ac8490(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

// @baa 0x00ac8540
int UFracturedStaticMeshComponent::sub_00ac8540(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

// @baa 0x00ac86c0
uint UFracturedStaticMeshComponent::sub_00ac86c0(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0xc) | -(uint)(*(uint *)(param_1 + 0xc) == 0) & param_1;
}

// @baa 0x00ac8750
int UFracturedStaticMeshComponent::sub_00ac8750(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00ac8760
int UFracturedStaticMeshComponent::sub_00ac8760(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00ac8770
int UFracturedStaticMeshComponent::sub_00ac8770(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00ac8780
int UFracturedStaticMeshComponent::sub_00ac8780(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x30 + *param_1;
}

// @baa 0x00ac8790
int UFracturedStaticMeshComponent::sub_00ac8790(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct E_00ac8800 { BYTE Bytes[64]; };

struct S_00ac8800 {
    TArray<E_00ac8800> Items; // 0x00
    E_00ac8800* sub_00ac8800(INT Index);
};

// @baa 0x00ac8800
E_00ac8800* S_00ac8800::sub_00ac8800(INT Index)
{
    return &Items(Index);
}

// @baa 0x00ac8850
int UFracturedStaticMeshComponent::sub_00ac8850(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x40 + *param_1;
}

// @baa 0x00ac8860
void __stdcall sub_00ac8860(int a0, int a1) {  }

// @baa 0x00ac8870
int UFracturedStaticMeshComponent::sub_00ac8870(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x40 + *param_1;
}

// @baa 0x00ac8880
int UFracturedStaticMeshComponent::sub_00ac8880(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x00ac88a0
int UFracturedStaticMeshComponent::sub_00ac88a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

// @baa 0x00ac88b0
int UFracturedStaticMeshComponent::sub_00ac88b0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x00ac8980
void UFracturedStaticMeshComponent::sub_00ac8980(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(0!=iVar1){
(*(int(__stdcall**)(int))(*g_026b0d94+0x24c))((int)(iVar1));
}
return;
}

// @baa 0x00ac8a50
void UFracturedStaticMeshComponent::sub_00ac8a50(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(iVar1){
(*(int(__stdcall**)(int))(*g_026b0d94+0x24c))((int)(iVar1));
}
return;
}

// @baa 0x00ac8b20
void UFracturedStaticMeshComponent::sub_00ac8b20(void)
{
int param_1=(uint)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(0!=iVar1){
(*(int(__stdcall**)(int))(*g_026b0d94+0x250))((int)(iVar1));
}
return;
}

// @baa 0x00ac8bf0
void UFracturedStaticMeshComponent::sub_00ac8bf0(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(undefined4*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+600))((int)(iVar1));
}
return;
}

// @baa 0x00ac8cc0
void UFracturedStaticMeshComponent::sub_00ac8cc0(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+600))((int)(iVar1));
}
return;
}

// @baa 0x00ac8ce0
int UFracturedStaticMeshComponent::sub_00ac8ce0(byte param_2)
{
int param_1=(int)this;

if(*(int*)(param_1+4)!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x218))((int)(*(int*)(param_1+4)));
}
if((param_2&1)!=0){
sub_0053dfa0(param_1);
}
return param_1;
}

// @baa 0x00ac8d20
void UFracturedStaticMeshComponent::sub_00ac8d20(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

// @baa 0x00ac8db0
int UFracturedStaticMeshComponent::sub_00ac8db0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

// @baa 0x00ac8dc0
int UFracturedStaticMeshComponent::sub_00ac8dc0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

// @baa 0x00ac8dd0
int UFracturedStaticMeshComponent::sub_00ac8dd0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

// @baa 0x00ac8de0
uint UFracturedStaticMeshComponent::sub_00ac8de0(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0xc) | -(uint)(*(uint *)(param_1 + 0xc) == 0) & param_1;
}

// @baa 0x00ac8e00
void __stdcall sub_00ac8e00(int a0, int a1) {  }

// @baa 0x00ac8f00
int UFracturedStaticMeshComponent::sub_00ac8f00(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x00ac8f80
int UFracturedStaticMeshComponent::sub_00ac8f80(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x30 + *param_1;
}

// @baa 0x00ac9000
int UFracturedStaticMeshComponent::sub_00ac9000(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x40 + *param_1;
}

struct C_00ac9010 {
    uint sub_00ac9010();
};

// @baa 0x00ac9010
uint C_00ac9010::sub_00ac9010(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x3c0) | -(uint)(*(uint *)(param_1 + 0x3c0) == 0) & param_1;
}

struct C_00ac9030 {
    int sub_00ac9030(int);
};

// @baa 0x00ac9030
int C_00ac9030::sub_00ac9030(int param_2)
{
    uint param_1 = (uint)this;

  return (-(uint)(*(uint *)(param_1 + 0x3c0) == 0) & param_1 | *(uint *)(param_1 + 0x3c0)) +
         param_2 * 0x3c;
}

struct E_00ac90c0 { BYTE Bytes[64]; };

struct S_00ac90c0 {
    TArray<E_00ac90c0> Items; // 0x00
    E_00ac90c0* sub_00ac90c0(INT Index);
};

// @baa 0x00ac90c0
E_00ac90c0* S_00ac90c0::sub_00ac90c0(INT Index)
{
    return &Items(Index);
}

// @baa 0x00ac9110
int UFracturedStaticMeshComponent::sub_00ac9110(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

// @baa 0x00ac9120
int UFracturedStaticMeshComponent::sub_00ac9120(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

// @baa 0x00ac9130
int UFracturedStaticMeshComponent::sub_00ac9130(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

// @baa 0x00ac9180
int UFracturedStaticMeshComponent::sub_00ac9180(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x00ac91a0
int UFracturedStaticMeshComponent::sub_00ac91a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0xc;
}

// @baa 0x00ac91b0
int UFracturedStaticMeshComponent::sub_00ac91b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0xc;
}

// @baa 0x00ac91c0
int UFracturedStaticMeshComponent::sub_00ac91c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 4;
}

// @baa 0x00ac91d0
int UFracturedStaticMeshComponent::sub_00ac91d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 4;
}

// @baa 0x00ac91e0
int UFracturedStaticMeshComponent::sub_00ac91e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x30 + *(int *)*param_1;
}

// @baa 0x00ac91f0
int UFracturedStaticMeshComponent::sub_00ac91f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 4;
}

// @baa 0x00ac9200
void __stdcall sub_00ac9200(int a0, int a1) {  }

struct C_00ac92c0 {
    int sub_00ac92c0(int);
};

// @baa 0x00ac92c0
int C_00ac92c0::sub_00ac92c0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x2c + *param_1;
}

struct C_00ac92d0 {
    int sub_00ac92d0(int);
};

// @baa 0x00ac92d0
int C_00ac92d0::sub_00ac92d0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x30 + *param_1;
}

// @baa 0x00ac92e0
void __stdcall sub_00ac92e0(int a0, int a1) {  }

struct C_00ac92f0 {
    int sub_00ac92f0(int);
};

// @baa 0x00ac92f0
int C_00ac92f0::sub_00ac92f0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x40 + *param_1;
}

// @baa 0x00ac9300
void __stdcall sub_00ac9300(int a0, int a1) {  }

struct C_00ac9310 {
    uint sub_00ac9310();
};

// @baa 0x00ac9310
uint C_00ac9310::sub_00ac9310(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x300) | -(uint)(*(uint *)(param_1 + 0x300) == 0) & param_1;
}

struct C_00ac9330 {
    int sub_00ac9330();
};

// @baa 0x00ac9330
int C_00ac9330::sub_00ac9330(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_00ac9340 {
    uint sub_00ac9340();
};

// @baa 0x00ac9340
uint C_00ac9340::sub_00ac9340(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x18c0) | -(uint)(*(uint *)(param_1 + 0x18c0) == 0) & param_1;
}

struct C_00ac9360 {
    uint sub_00ac9360();
};

// @baa 0x00ac9360
uint C_00ac9360::sub_00ac9360(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x18c0) | -(uint)(*(uint *)(param_1 + 0x18c0) == 0) & param_1;
}

struct C_00ac9380 {
    uint sub_00ac9380();
};

// @baa 0x00ac9380
uint C_00ac9380::sub_00ac9380(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x18c0) | -(uint)(*(uint *)(param_1 + 0x18c0) == 0) & param_1;
}

struct C_00ac93a0 {
    uint sub_00ac93a0();
};

// @baa 0x00ac93a0
uint C_00ac93a0::sub_00ac93a0(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x18c0) | -(uint)(*(uint *)(param_1 + 0x18c0) == 0) & param_1;
}

struct C_00ac93c0 {
    int sub_00ac93c0();
};

// @baa 0x00ac93c0
int C_00ac93c0::sub_00ac93c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0xc;
}

struct C_00ac93d0 {
    int sub_00ac93d0();
};

// @baa 0x00ac93d0
int C_00ac93d0::sub_00ac93d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0xc;
}

struct C_00ac93e0 {
    int sub_00ac93e0();
};

// @baa 0x00ac93e0
int C_00ac93e0::sub_00ac93e0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00ac9400 {
    int sub_00ac9400();
};

// @baa 0x00ac9400
int C_00ac9400::sub_00ac9400(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_00ac9410 {
    int sub_00ac9410();
};

// @baa 0x00ac9410
int C_00ac9410::sub_00ac9410(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00ac9420 {
    int sub_00ac9420();
};

// @baa 0x00ac9420
int C_00ac9420::sub_00ac9420(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x30 + *(int *)*param_1;
}

struct C_00ac9430 {
    int sub_00ac9430();
};

// @baa 0x00ac9430
int C_00ac9430::sub_00ac9430(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x40 + *(int *)*param_1;
}

// @baa 0x00ac9440
void __stdcall sub_00ac9440(int a0, int a1) {  }

struct C_00ac9450 {
    int sub_00ac9450(int);
};

// @baa 0x00ac9450
int C_00ac9450::sub_00ac9450(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x4c + *param_1;
}

struct C_00ac9460 {
    int sub_00ac9460(int);
};

// @baa 0x00ac9460
int C_00ac9460::sub_00ac9460(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x2c + *param_1;
}

struct E_00ac9470 { BYTE Bytes[44]; };

struct S_00ac9470 {
    TArray<E_00ac9470> Items; // 0x00
    E_00ac9470* sub_00ac9470(INT Index);
};

// @baa 0x00ac9470
E_00ac9470* S_00ac9470::sub_00ac9470(INT Index)
{
    return &Items(Index);
}

// @baa 0x00ac94c0
void __stdcall sub_00ac94c0(int a0, int a1) {  }

struct C_00ac94d0 {
    int sub_00ac94d0(int);
};

// @baa 0x00ac94d0
int C_00ac94d0::sub_00ac94d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x48;
}

// @baa 0x00ac94e0
void __stdcall sub_00ac94e0(int a0, int a1) {  }

struct C_00ac94f0 {
    int sub_00ac94f0(int);
};

// @baa 0x00ac94f0
int C_00ac94f0::sub_00ac94f0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x48;
}

struct C_00ac9500 {
    uint sub_00ac9500();
};

// @baa 0x00ac9500
uint C_00ac9500::sub_00ac9500(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x300) | -(uint)(*(uint *)(param_1 + 0x300) == 0) & param_1;
}

struct C_00ac9580 {
    int sub_00ac9580();
};

// @baa 0x00ac9580
int C_00ac9580::sub_00ac9580(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_00ac9590 {
    int sub_00ac9590();
};

// @baa 0x00ac9590
int C_00ac9590::sub_00ac9590(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x30 + *(int *)*param_1;
}

struct C_00ac95a0 {
    int sub_00ac95a0();
};

// @baa 0x00ac95a0
int C_00ac95a0::sub_00ac95a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x40 + *(int *)*param_1;
}

struct CA { int* sub_00ac4500(); };

struct CB { void sub_00a66bb0(int a, int b); };

struct CC { void sub_00a66cc0(int a, int b, int c, int d, int e); };

struct V { virtual void vf(int* a, int b); };

// @baa 0x00aca550
void __stdcall sub_00aca550(int a1, int** a2, int a3, int* a4)
{
  if (*a4 == 0) {
    ((CB*)(a3 + 0x18))->sub_00a66bb0(a1, *((CA*)a3)->sub_00ac4500());
    *a4 = 1;
  }
  for (int i = 0; i < ((*(unsigned int*)(a3 + 0x24) & 4) ? 2 : 1); i++) {
    ((CC*)(a3 + 0x18))->sub_00a66cc0(a1, *(int*)((char*)*a2 + 0xe8), (int)*a2, i, (int)(a2 + 1));
    ((V*)(a3 + 0x18))->vf((int*)*a2, a1);
  }
}

struct CA_00aca5f0 { int* sub_00ac45b0(); };

struct CB_00aca5f0 { void sub_00a66960(int a, int b); };

struct CC_00aca5f0 { void sub_00a66a40(int a, int b, int c, int d, int e); };

// @baa 0x00aca5f0
void __stdcall sub_00aca5f0(int a1, int** a2, int a3, int* a4)
{
  if (*a4 == 0) {
    ((CB_00aca5f0*)(a3 + 0x18))->sub_00a66960(a1, *((CA_00aca5f0*)a3)->sub_00ac45b0());
    *a4 = 1;
  }
  for (int i = 0; i < ((*(unsigned int*)(a3 + 0x24) & 4) ? 2 : 1); i++) {
    ((CC_00aca5f0*)(a3 + 0x18))->sub_00a66a40(a1, *(int*)((char*)*a2 + 0xe8), (int)*a2, i, (int)(a2 + 1));
    ((V*)(a3 + 0x18))->vf((int*)*a2, a1);
  }
}

struct C_00aca690 {
    uint sub_00aca690();
};

// @baa 0x00aca690
uint C_00aca690::sub_00aca690(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x40) | -(uint)(*(uint *)(param_1 + 0x40) == 0) & param_1;
}

struct C_00aca6b0 {
    uint sub_00aca6b0();
};

// @baa 0x00aca6b0
uint C_00aca6b0::sub_00aca6b0(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x40) | -(uint)(*(uint *)(param_1 + 0x40) == 0) & param_1;
}

struct C_00aca740 {
    uint sub_00aca740();
};

// @baa 0x00aca740
uint C_00aca740::sub_00aca740(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x40) | -(uint)(*(uint *)(param_1 + 0x40) == 0) & param_1;
}

struct C_00aca760 {
    uint sub_00aca760();
};

// @baa 0x00aca760
uint C_00aca760::sub_00aca760(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x40) | -(uint)(*(uint *)(param_1 + 0x40) == 0) & param_1;
}

struct C_00acabf0 {
    void sub_00acabf0(undefined4, undefined4, undefined4, undefined4, undefined4, undefined4);
};

int sub_00ac70f0(...);
// @baa 0x00acabf0
void C_00acabf0::sub_00acabf0(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
{
    undefined4 param_1 = (undefined4)this;

  sub_00ac70f0(param_2,param_3,param_4,param_5,param_6,param_7,param_1);
  return;
}

struct C_00acac20 {
    void sub_00acac20(undefined4, undefined4, undefined4, undefined4, undefined4, undefined4);
};

int sub_00ac71d0(...);
// @baa 0x00acac20
void C_00acac20::sub_00acac20(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
{
    undefined4 param_1 = (undefined4)this;

  sub_00ac71d0(param_2,param_3,param_4,param_5,param_6,param_7,param_1);
  return;
}

struct C_00acac50 {
    void sub_00acac50(undefined4, undefined4, undefined4, undefined4, undefined4, undefined4);
};

int sub_00ac72b0(...);
// @baa 0x00acac50
void C_00acac50::sub_00acac50(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
{
    undefined4 param_1 = (undefined4)this;

  sub_00ac72b0(param_2,param_3,param_4,param_5,param_6,param_7,param_1);
  return;
}

struct C_00acac80 {
    void sub_00acac80(undefined4, undefined4, undefined4, undefined4, undefined4, undefined4);
};

int sub_00ac7390(...);
// @baa 0x00acac80
void C_00acac80::sub_00acac80(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
{
    undefined4 param_1 = (undefined4)this;

  sub_00ac7390(param_2,param_3,param_4,param_5,param_6,param_7,param_1);
  return;
}

struct M_00acb680 { void sub_00ac66b0(); };

struct C_00acb680 { char pad[40]; M_00acb680 m; void sub_00acb680(); };

// @baa 0x00acb680
void C_00acb680::sub_00acb680() { m.sub_00ac66b0(); }

struct Inner { void sub_00ac6c30(int param_1); };

struct Outer {
    char _pad[4];
    Inner m;
    void sub_00acbf50();
};

// @baa 0x00acbf50
void Outer::sub_00acbf50() {
    m.sub_00ac6c30(0);
}

struct C_00acbf60 { int a, b, c; C_00acbf60(); };

// @baa 0x00acbf60
C_00acbf60::C_00acbf60() : a(0), b(0), c(0) {}

void sub_00ac66b0();
// @baa 0x00acbf70
void sub_00acbf70(void) { sub_00ac66b0(); }

struct C_00acbfd0 {
    int sub_00acbfd0(int);
    int sub_00849d80(int, int);
};

// @baa 0x00acbfd0
int C_00acbfd0::sub_00acbfd0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_00acbfd0 *)(this))->sub_00849d80((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0xc;
  }
  return 0;
}

struct C_00acc060 { int a, b, c; C_00acc060(); };

// @baa 0x00acc060
C_00acc060::C_00acc060() : a(0), b(0), c(0) {}

struct C_00acc070 {
    void sub_00acc070();
};

// @baa 0x00acc070
void C_00acc070::sub_00acc070(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

struct C_00acc170 {
    void sub_00acc170();
};

// @baa 0x00acc170
void C_00acc170::sub_00acc170(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

struct C_00acc240 {
    void sub_00acc240();
};

// @baa 0x00acc240
void C_00acc240::sub_00acc240(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

typedef uint size_t;

struct C_00acc2c0 {
    int sub_00acc2c0(int);
    int sub_00ac7fc0(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x00acc2c0
int C_00acc2c0::sub_00acc2c0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00acc2c0 *)(this))->sub_00ac7fc0(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 4),0,param_2 * 4);
  return iVar1;
}

struct C_00acc370 {
    void sub_00acc370();
};

// @baa 0x00acc370
void C_00acc370::sub_00acc370(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

struct C_00acc560 {
    void sub_00acc560();
};

// @baa 0x00acc560
void C_00acc560::sub_00acc560(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

struct C_00acc5e0 { int a, b, c; C_00acc5e0(); };

// @baa 0x00acc5e0
C_00acc5e0::C_00acc5e0() : a(0), b(0), c(0) {}

struct C_00acc5f0 { int a, b, c; C_00acc5f0(); };

// @baa 0x00acc5f0
C_00acc5f0::C_00acc5f0() : a(0), b(0), c(0) {}

struct C_00acc600 {
    int sub_00acc600(int);
    int sub_00ac8220(int);
};

// @baa 0x00acc600
int C_00acc600::sub_00acc600(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00acc600 *)(this))->sub_00ac8220(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0x18),0,param_2 * 0x18);
  return iVar1;
}

struct C_00acc640 {
    void sub_00acc640();
};

// @baa 0x00acc640
void C_00acc640::sub_00acc640(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

struct C_00acc710 {
    int sub_00acc710(int);
};

// @baa 0x00acc710
int C_00acc710::sub_00acc710(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

// @baa 0x00acce20
int UFracturedStaticMeshComponent::sub_00acce20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x30 + *(int *)*param_1;
}

// @baa 0x00acce30
int UFracturedStaticMeshComponent::sub_00acce30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x30 + *(int *)*param_1;
}

// @baa 0x00acce40
void UFracturedStaticMeshComponent::sub_00acce40(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

// @baa 0x00acce50
int UFracturedStaticMeshComponent::sub_00acce50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 4;
}

// @baa 0x00acce60
int UFracturedStaticMeshComponent::sub_00acce60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 4;
}

// @baa 0x00acce70
int UFracturedStaticMeshComponent::sub_00acce70(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x00acce90
int UFracturedStaticMeshComponent::sub_00acce90(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 4;
}

// @baa 0x00accea0
int UFracturedStaticMeshComponent::sub_00accea0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

// @baa 0x00acceb0
int UFracturedStaticMeshComponent::sub_00acceb0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x00acd1a0
int UFracturedStaticMeshComponent::sub_00acd1a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

// @baa 0x00acd470
int UFracturedStaticMeshComponent::sub_00acd470(int param_2)
{
    uint param_1 = (uint)this;

  return (-(uint)(*(uint *)(param_1 + 0xc) == 0) & param_1 | *(uint *)(param_1 + 0xc)) + param_2 * 4
  ;
}

// @baa 0x00acd490
void __stdcall sub_00acd490(int a0, int a1) {  }

struct C_00ace590 {
    void sub_00ace590(int);
};

// @baa 0x00ace590
void C_00ace590::sub_00ace590(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x4c,8);
      *param_1 = iVar1;
    }
  }
  return;
}

// @baa 0x00ace630
void __stdcall sub_00ace630(int a0, int a1) {  }

struct C_00ace790 { void* Data; int Num; int Max; void sub_00ace790(); };

// @baa 0x00ace790
void C_00ace790::sub_00ace790() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00ace7f0 { void* Data; int Num; int Max; void sub_00ace7f0(); };

// @baa 0x00ace7f0
void C_00ace7f0::sub_00ace7f0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00ace970 {
    void sub_00ace970(int);
};

// @baa 0x00ace970
void C_00ace970::sub_00ace970(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x30,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00ace9b0 {
    void sub_00ace9b0(int);
};

// @baa 0x00ace9b0
void C_00ace9b0::sub_00ace9b0(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 << 6,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct TBitArray {
    int* AllocatorData;
    int NumBits;
    int MaxBits;
    int InlineData[4];
};

struct FBitIterator {
    int WordIndex;
    int Mask;
    const int* WordData;
    int UnvisitedMask;
    int CurrentIndex;
    int BaseIndex;

    FBitIterator(const TBitArray& Array, int StartIndex)
        : WordIndex(StartIndex >> 5)
        , Mask(1 << (StartIndex & 31))
        , WordData(Array.InlineData)
        , UnvisitedMask(~0 << (StartIndex & 31))
        , CurrentIndex(StartIndex)
        , BaseIndex(StartIndex & ~31)
    {
    }
    void FindFirstSetBit();
    void Advance()
    {
        UnvisitedMask &= ~Mask;
        FindFirstSetBit();
    }
};

struct TConstSetBitIterator_00aceb70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00aceb70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00aceb70& operator++();
};

TConstSetBitIterator_00aceb70::TConstSetBitIterator_00aceb70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00aceb70
TConstSetBitIterator_00aceb70& TConstSetBitIterator_00aceb70::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00acebc0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00acebc0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00acebc0& operator++();
};

TConstSetBitIterator_00acebc0::TConstSetBitIterator_00acebc0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00acebc0
TConstSetBitIterator_00acebc0& TConstSetBitIterator_00acebc0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00acec10 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00acec10(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00acec10& operator++();
};

TConstSetBitIterator_00acec10::TConstSetBitIterator_00acec10(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00acec10
TConstSetBitIterator_00acec10& TConstSetBitIterator_00acec10::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00acec60 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00acec60(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00acec60& operator++();
};

TConstSetBitIterator_00acec60::TConstSetBitIterator_00acec60(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00acec60
TConstSetBitIterator_00acec60& TConstSetBitIterator_00acec60::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00acecb0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00acecb0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00acecb0& operator++();
};

TConstSetBitIterator_00acecb0::TConstSetBitIterator_00acecb0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00acecb0
TConstSetBitIterator_00acecb0& TConstSetBitIterator_00acecb0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00aced00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00aced00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00aced00& operator++();
};

TConstSetBitIterator_00aced00::TConstSetBitIterator_00aced00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00aced00
TConstSetBitIterator_00aced00& TConstSetBitIterator_00aced00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00aced50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00aced50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00aced50& operator++();
};

TConstSetBitIterator_00aced50::TConstSetBitIterator_00aced50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00aced50
TConstSetBitIterator_00aced50& TConstSetBitIterator_00aced50::operator++()
{
    It.Advance();
    return *this;
}

struct C_00aced70 {
    int sub_00aced70();
};

// @baa 0x00aced70
int C_00aced70::sub_00aced70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x4c + *(int *)*param_1;
}

struct TConstSetBitIterator_00aced80 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00aced80(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00aced80& operator++();
};

TConstSetBitIterator_00aced80::TConstSetBitIterator_00aced80(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00aced80
TConstSetBitIterator_00aced80& TConstSetBitIterator_00aced80::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00aceda0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00aceda0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00aceda0& operator++();
};

TConstSetBitIterator_00aceda0::TConstSetBitIterator_00aceda0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00aceda0
TConstSetBitIterator_00aceda0& TConstSetBitIterator_00aceda0::operator++()
{
    It.Advance();
    return *this;
}

struct C_00acedc0 {
    int sub_00acedc0();
};

// @baa 0x00acedc0
int C_00acedc0::sub_00acedc0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x2c + *(int *)*param_1;
}

struct TConstSetBitIterator_00acedd0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00acedd0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00acedd0& operator++();
};

TConstSetBitIterator_00acedd0::TConstSetBitIterator_00acedd0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00acedd0
TConstSetBitIterator_00acedd0& TConstSetBitIterator_00acedd0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00acedf0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00acedf0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00acedf0& operator++();
};

TConstSetBitIterator_00acedf0::TConstSetBitIterator_00acedf0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00acedf0
TConstSetBitIterator_00acedf0& TConstSetBitIterator_00acedf0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00acee10 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00acee10(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00acee10& operator++();
};

TConstSetBitIterator_00acee10::TConstSetBitIterator_00acee10(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00acee10
TConstSetBitIterator_00acee10& TConstSetBitIterator_00acee10::operator++()
{
    It.Advance();
    return *this;
}

struct C_00acee30 {
    int sub_00acee30();
};

// @baa 0x00acee30
int C_00acee30::sub_00acee30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x44;
}

struct TConstSetBitIterator_00acee50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00acee50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00acee50& operator++();
};

TConstSetBitIterator_00acee50::TConstSetBitIterator_00acee50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00acee50
TConstSetBitIterator_00acee50& TConstSetBitIterator_00acee50::operator++()
{
    It.Advance();
    return *this;
}

struct C_00acee70 {
    int sub_00acee70();
};

// @baa 0x00acee70
int C_00acee70::sub_00acee70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x4c + *(int *)*param_1;
}

struct TConstSetBitIterator_00acee80 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00acee80(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00acee80& operator++();
};

TConstSetBitIterator_00acee80::TConstSetBitIterator_00acee80(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00acee80
TConstSetBitIterator_00acee80& TConstSetBitIterator_00acee80::operator++()
{
    It.Advance();
    return *this;
}

struct C_00aceea0 {
    int sub_00aceea0();
};

// @baa 0x00aceea0
int C_00aceea0::sub_00aceea0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x54 + *(int *)*param_1;
}

struct TConstSetBitIterator_00aceeb0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00aceeb0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00aceeb0& operator++();
};

TConstSetBitIterator_00aceeb0::TConstSetBitIterator_00aceeb0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00aceeb0
TConstSetBitIterator_00aceeb0& TConstSetBitIterator_00aceeb0::operator++()
{
    It.Advance();
    return *this;
}

struct C_00aceed0 {
    int sub_00aceed0();
};

// @baa 0x00aceed0
int C_00aceed0::sub_00aceed0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x54 + *(int *)*param_1;
}

struct TConstSetBitIterator_00aceee0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00aceee0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00aceee0& operator++();
};

TConstSetBitIterator_00aceee0::TConstSetBitIterator_00aceee0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00aceee0
TConstSetBitIterator_00aceee0& TConstSetBitIterator_00aceee0::operator++()
{
    It.Advance();
    return *this;
}

struct C_00acef00 {
    int sub_00acef00();
};

// @baa 0x00acef00
int C_00acef00::sub_00acef00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x54 + *(int *)*param_1;
}

struct TConstSetBitIterator_00acef10 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00acef10(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00acef10& operator++();
};

TConstSetBitIterator_00acef10::TConstSetBitIterator_00acef10(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00acef10
TConstSetBitIterator_00acef10& TConstSetBitIterator_00acef10::operator++()
{
    It.Advance();
    return *this;
}

struct C_00acef30 {
    int sub_00acef30();
};

// @baa 0x00acef30
int C_00acef30::sub_00acef30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x5c + *(int *)*param_1;
}

struct TConstSetBitIterator_00acef40 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00acef40(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00acef40& operator++();
};

TConstSetBitIterator_00acef40::TConstSetBitIterator_00acef40(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00acef40
TConstSetBitIterator_00acef40& TConstSetBitIterator_00acef40::operator++()
{
    It.Advance();
    return *this;
}

struct C_00acef60 {
    int sub_00acef60();
};

// @baa 0x00acef60
int C_00acef60::sub_00acef60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x54 + *(int *)*param_1;
}

struct TConstSetBitIterator_00acef70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00acef70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00acef70& operator++();
};

TConstSetBitIterator_00acef70::TConstSetBitIterator_00acef70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00acef70
TConstSetBitIterator_00acef70& TConstSetBitIterator_00acef70::operator++()
{
    It.Advance();
    return *this;
}

struct C_00acef90 {
    int sub_00acef90();
};

// @baa 0x00acef90
int C_00acef90::sub_00acef90(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x54 + *(int *)*param_1;
}

struct TConstSetBitIterator_00acefa0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00acefa0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00acefa0& operator++();
};

TConstSetBitIterator_00acefa0::TConstSetBitIterator_00acefa0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00acefa0
TConstSetBitIterator_00acefa0& TConstSetBitIterator_00acefa0::operator++()
{
    It.Advance();
    return *this;
}

struct C_00acefc0 {
    int sub_00acefc0();
};

// @baa 0x00acefc0
int C_00acefc0::sub_00acefc0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x54 + *(int *)*param_1;
}

struct TConstSetBitIterator_00acefd0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00acefd0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00acefd0& operator++();
};

TConstSetBitIterator_00acefd0::TConstSetBitIterator_00acefd0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00acefd0
TConstSetBitIterator_00acefd0& TConstSetBitIterator_00acefd0::operator++()
{
    It.Advance();
    return *this;
}

struct C_00aceff0 {
    int sub_00aceff0();
};

// @baa 0x00aceff0
int C_00aceff0::sub_00aceff0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x54 + *(int *)*param_1;
}

struct TConstSetBitIterator_00acf000 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00acf000(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00acf000& operator++();
};

TConstSetBitIterator_00acf000::TConstSetBitIterator_00acf000(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00acf000
TConstSetBitIterator_00acf000& TConstSetBitIterator_00acf000::operator++()
{
    It.Advance();
    return *this;
}

struct C_00acf020 {
    int sub_00acf020();
};

// @baa 0x00acf020
int C_00acf020::sub_00acf020(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x48;
}

struct TConstSetBitIterator_00acf030 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00acf030(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00acf030& operator++();
};

TConstSetBitIterator_00acf030::TConstSetBitIterator_00acf030(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00acf030
TConstSetBitIterator_00acf030& TConstSetBitIterator_00acf030::operator++()
{
    It.Advance();
    return *this;
}

struct C_00acf050 {
    int sub_00acf050();
};

// @baa 0x00acf050
int C_00acf050::sub_00acf050(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x48;
}

struct TConstSetBitIterator_00acf060 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00acf060(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00acf060& operator++();
};

TConstSetBitIterator_00acf060::TConstSetBitIterator_00acf060(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00acf060
TConstSetBitIterator_00acf060& TConstSetBitIterator_00acf060::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00acf080 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00acf080(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00acf080& operator++();
};

TConstSetBitIterator_00acf080::TConstSetBitIterator_00acf080(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00acf080
TConstSetBitIterator_00acf080& TConstSetBitIterator_00acf080::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00acf0a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00acf0a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00acf0a0& operator++();
};

TConstSetBitIterator_00acf0a0::TConstSetBitIterator_00acf0a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00acf0a0
TConstSetBitIterator_00acf0a0& TConstSetBitIterator_00acf0a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00acf0c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00acf0c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00acf0c0& operator++();
};

TConstSetBitIterator_00acf0c0::TConstSetBitIterator_00acf0c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00acf0c0
TConstSetBitIterator_00acf0c0& TConstSetBitIterator_00acf0c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00acf110 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00acf110(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00acf110& operator++();
};

TConstSetBitIterator_00acf110::TConstSetBitIterator_00acf110(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00acf110
TConstSetBitIterator_00acf110& TConstSetBitIterator_00acf110::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00acf160 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00acf160(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00acf160& operator++();
};

TConstSetBitIterator_00acf160::TConstSetBitIterator_00acf160(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00acf160
TConstSetBitIterator_00acf160& TConstSetBitIterator_00acf160::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00acf1b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00acf1b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00acf1b0& operator++();
};

TConstSetBitIterator_00acf1b0::TConstSetBitIterator_00acf1b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00acf1b0
TConstSetBitIterator_00acf1b0& TConstSetBitIterator_00acf1b0::operator++()
{
    It.Advance();
    return *this;
}

struct C_00acf200 {
    int sub_00acf200();
};

int sub_00ac95b0(void);
// @baa 0x00acf200
int C_00acf200::sub_00acf200(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & ~*(uint *)(param_1 + 4);
  sub_00ac95b0();
  return param_1;
}

struct TConstSetBitIterator_00acf220 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00acf220(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00acf220& operator++();
};

TConstSetBitIterator_00acf220::TConstSetBitIterator_00acf220(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00acf220
TConstSetBitIterator_00acf220& TConstSetBitIterator_00acf220::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00acf270 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00acf270(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00acf270& operator++();
};

TConstSetBitIterator_00acf270::TConstSetBitIterator_00acf270(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00acf270
TConstSetBitIterator_00acf270& TConstSetBitIterator_00acf270::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00acf2c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00acf2c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00acf2c0& operator++();
};

TConstSetBitIterator_00acf2c0::TConstSetBitIterator_00acf2c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00acf2c0
TConstSetBitIterator_00acf2c0& TConstSetBitIterator_00acf2c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00acf310 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00acf310(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00acf310& operator++();
};

TConstSetBitIterator_00acf310::TConstSetBitIterator_00acf310(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00acf310
TConstSetBitIterator_00acf310& TConstSetBitIterator_00acf310::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00acf360 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00acf360(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00acf360& operator++();
};

TConstSetBitIterator_00acf360::TConstSetBitIterator_00acf360(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00acf360
TConstSetBitIterator_00acf360& TConstSetBitIterator_00acf360::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00acf3b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00acf3b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00acf3b0& operator++();
};

TConstSetBitIterator_00acf3b0::TConstSetBitIterator_00acf3b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00acf3b0
TConstSetBitIterator_00acf3b0& TConstSetBitIterator_00acf3b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00acf400 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00acf400(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00acf400& operator++();
};

TConstSetBitIterator_00acf400::TConstSetBitIterator_00acf400(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00acf400
TConstSetBitIterator_00acf400& TConstSetBitIterator_00acf400::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00acf450 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00acf450(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00acf450& operator++();
};

TConstSetBitIterator_00acf450::TConstSetBitIterator_00acf450(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00acf450
TConstSetBitIterator_00acf450& TConstSetBitIterator_00acf450::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00acf4a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00acf4a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00acf4a0& operator++();
};

TConstSetBitIterator_00acf4a0::TConstSetBitIterator_00acf4a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00acf4a0
TConstSetBitIterator_00acf4a0& TConstSetBitIterator_00acf4a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00acf4f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00acf4f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00acf4f0& operator++();
};

TConstSetBitIterator_00acf4f0::TConstSetBitIterator_00acf4f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00acf4f0
TConstSetBitIterator_00acf4f0& TConstSetBitIterator_00acf4f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00acf540 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00acf540(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00acf540& operator++();
};

TConstSetBitIterator_00acf540::TConstSetBitIterator_00acf540(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00acf540
TConstSetBitIterator_00acf540& TConstSetBitIterator_00acf540::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00acf590 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00acf590(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00acf590& operator++();
};

TConstSetBitIterator_00acf590::TConstSetBitIterator_00acf590(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00acf590
TConstSetBitIterator_00acf590& TConstSetBitIterator_00acf590::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00acf5e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00acf5e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00acf5e0& operator++();
};

TConstSetBitIterator_00acf5e0::TConstSetBitIterator_00acf5e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00acf5e0
TConstSetBitIterator_00acf5e0& TConstSetBitIterator_00acf5e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00acf630 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00acf630(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00acf630& operator++();
};

TConstSetBitIterator_00acf630::TConstSetBitIterator_00acf630(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00acf630
TConstSetBitIterator_00acf630& TConstSetBitIterator_00acf630::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00acf680 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00acf680(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00acf680& operator++();
};

TConstSetBitIterator_00acf680::TConstSetBitIterator_00acf680(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00acf680
TConstSetBitIterator_00acf680& TConstSetBitIterator_00acf680::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00acf6d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00acf6d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00acf6d0& operator++();
};

TConstSetBitIterator_00acf6d0::TConstSetBitIterator_00acf6d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00acf6d0
TConstSetBitIterator_00acf6d0& TConstSetBitIterator_00acf6d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00acf720 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00acf720(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00acf720& operator++();
};

TConstSetBitIterator_00acf720::TConstSetBitIterator_00acf720(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00acf720
TConstSetBitIterator_00acf720& TConstSetBitIterator_00acf720::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00acf770 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00acf770(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00acf770& operator++();
};

TConstSetBitIterator_00acf770::TConstSetBitIterator_00acf770(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00acf770
TConstSetBitIterator_00acf770& TConstSetBitIterator_00acf770::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00acf790 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00acf790(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00acf790& operator++();
};

TConstSetBitIterator_00acf790::TConstSetBitIterator_00acf790(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00acf790
TConstSetBitIterator_00acf790& TConstSetBitIterator_00acf790::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00acf7b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00acf7b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00acf7b0& operator++();
};

TConstSetBitIterator_00acf7b0::TConstSetBitIterator_00acf7b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00acf7b0
TConstSetBitIterator_00acf7b0& TConstSetBitIterator_00acf7b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00acf7d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00acf7d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00acf7d0& operator++();
};

TConstSetBitIterator_00acf7d0::TConstSetBitIterator_00acf7d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00acf7d0
TConstSetBitIterator_00acf7d0& TConstSetBitIterator_00acf7d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00acf8e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00acf8e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00acf8e0& operator++();
};

TConstSetBitIterator_00acf8e0::TConstSetBitIterator_00acf8e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00acf8e0
TConstSetBitIterator_00acf8e0& TConstSetBitIterator_00acf8e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00acfa10 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00acfa10(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00acfa10& operator++();
};

TConstSetBitIterator_00acfa10::TConstSetBitIterator_00acfa10(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00acfa10
TConstSetBitIterator_00acfa10& TConstSetBitIterator_00acfa10::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00acfa60 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00acfa60(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00acfa60& operator++();
};

TConstSetBitIterator_00acfa60::TConstSetBitIterator_00acfa60(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00acfa60
TConstSetBitIterator_00acfa60& TConstSetBitIterator_00acfa60::operator++()
{
    It.Advance();
    return *this;
}

extern void* g_01fdc65c;
struct C_00ac0240 {
    void* F0;
    INT F0b;
    INT F1;
    INT F2;
    volatile INT F3;
    INT F4;
    void* sub_00ac0240();
};

// @baa 0x00ac0240
void* C_00ac0240::sub_00ac0240()
{
    F1 = 0;
    F2 = 0;
    F3 &= 0xfffffffe;
    F4 = 0;
    F0 = &g_01fdc65c;
    return this;
}

extern void* g_01fdc67c;
struct C_00ac0270 {
    void* F0;
    INT F0b;
    INT F1;
    INT F2;
    volatile INT F3;
    INT F4;
    void* sub_00ac0270();
};

// @baa 0x00ac0270
void* C_00ac0270::sub_00ac0270()
{
    F1 = 0;
    F2 = 0;
    F3 &= 0xfffffffe;
    F4 = 0;
    F0 = &g_01fdc67c;
    return this;
}

extern int g_01fdc594;
struct FShapeInstance
{
    void *F0;          // 0x00
    int F0b;           // 0x04 (untouched padding)
    int F1;            // 0x08
    int F2;            // 0x0C
    volatile int F3;   // 0x10
    int F4;            // 0x14

    FShapeInstance *sub_00ac02c0();
};

// @baa 0x00ac02c0
FShapeInstance *FShapeInstance::sub_00ac02c0()
{
    F1 = 0;
    F2 = 0;
    F3 &= 0xfffffffe;
    F0 = &g_01fdc594;
    F4 = 0;
    return this;
}

extern void* g_01fdc5c0;
struct S00ac0300 {
    void* F0;
    int F0b;
    int F1;
    int F2;
    volatile int F3;
    int F4;
    S00ac0300* sub_00ac0300();
};

// @baa 0x00ac0300
S00ac0300* S00ac0300::sub_00ac0300()
{
    this->F1 = 0;
    this->F2 = 0;
    this->F3 &= 0xfffffffe;
    this->F0 = &g_01fdc5c0;
    this->F4 = 0;
    return this;
}

/* A subobject reachable inside the object that TScene::LensBase points to,
 * living at offset 0x33e0 from that object's start. It exposes the method the
 * original this-calls. */
struct TLensFlareSub {
    INT sub_00abd280(UINT* Arg);
};

struct TScene {
    class UObject* Object; /* 0x0 */
    class UObject* LensBase; /* 0x4 */
    UINT LensArgs; /* 0x8 */

    INT sub_00ac52c0();
};

// @baa 0x00ac52c0
INT TScene::sub_00ac52c0()
{
    TLensFlareSub* Lens = (TLensFlareSub*)((char*)LensBase + 0x33e0);
    Lens->sub_00abd280(&LensArgs);
    return 12;
}

struct C_00ac1790
{
    int f0;
    int f1;
    void sub_00ac1790(void);
};

// @baa 0x00ac1790
void C_00ac1790::sub_00ac1790(void)
{
    if (f1 != 0) {
        (*(void(__stdcall**)(INT))(*g_026b0d94 + 0x218))(f1);
    }
}

struct sub_00ac1b10_ : public UObject {
    int sub_00ac1b10();
};

// @baa 0x00ac1b10
int sub_00ac1b10_::sub_00ac1b10()
{
    int A = Name.Number;
    int B = *(DWORD*)&ObjectFlags;
    int R = A / 32 + B * 21;
    return R * 4;
}

struct C_00ac1b50 {
    int a;
    int b;
    int Stride;    // +0x8
    int c;
    int d;
    int e;
    int f;
    int g;
    int h;
    int Count;     // +0x24
    int sub_00ac1b50(void);
};

// @baa 0x00ac1b50
int C_00ac1b50::sub_00ac1b50(void)
{
    return (Count / 32 + Stride * 21) * 4;
}

struct sub_00ac1bd0_ : public UObject {
    int sub_00ac1bd0();
};

// @baa 0x00ac1bd0
int sub_00ac1bd0_::sub_00ac1bd0()
{
    int A = Name.Number;
    int B = *(DWORD*)&ObjectFlags;
    int R = A / 32 + B * 21;
    return R * 4;
}

struct FGridIndex_00ac {
    int A;         // 0x00
    int B;         // 0x04
    int Row;       // 0x08
    int C;         // 0x0c
    int D;         // 0x10
    int E;         // 0x14
    int F;         // 0x18
    int G;         // 0x1c
    int H;         // 0x20
    int Cell;      // 0x24
    __declspec(noinline) int sub_00ac1b70();
};

// @baa 0x00ac1b70
int FGridIndex_00ac::sub_00ac1b70()
{
    return (Cell / 32 + Row * 23) * 4;
}
