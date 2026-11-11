// PhATTools.cpp (part 1 of 2): 38 functions
// Placed here by: neighbours 38.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

void sub_00914900();
// @baa 0x0131a9f0
void sub_0131a9f0(void) { sub_00914900(); }

struct C {
    void sub_0131ab60(int);
};

int sub_0053df70(...);
// @baa 0x0131ab60
void C::sub_0131ab60(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x34,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_0131aba0 {
    void sub_0131aba0(int);
};

// @baa 0x0131aba0
void C_0131aba0::sub_0131aba0(int param_2)
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

struct C_0131abe0 {
    void sub_0131abe0(int);
};

// @baa 0x0131abe0
void C_0131abe0::sub_0131abe0(int param_2)
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

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_0131ac20 { void* Data; int Num; int Max; void sub_0131ac20(); };

// @baa 0x0131ac20
void C_0131ac20::sub_0131ac20() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0131ac80 {
    void sub_0131ac80(int);
};

// @baa 0x0131ac80
void C_0131ac80::sub_0131ac80(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 8,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_0131acc0 { void* Data; int Num; int Max; void sub_0131acc0(); };

// @baa 0x0131acc0
void C_0131acc0::sub_0131acc0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

void sub_01311fa0(void);
// @baa 0x0131ad20
void sub_0131ad20(void)
{
    sub_01311fa0();
}

struct C_0131ad30 {
    int sub_0131ad30(int);
};

// @baa 0x0131ad30
int C_0131ad30::sub_0131ad30(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_0131ad40 {
    int sub_0131ad40(int);
};

// @baa 0x0131ad40
int C_0131ad40::sub_0131ad40(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_0131ad50 {
    int sub_0131ad50(int);
};

// @baa 0x0131ad50
int C_0131ad50::sub_0131ad50(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0131ad60 {
    int sub_0131ad60();
};

// @baa 0x0131ad60
int C_0131ad60::sub_0131ad60(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0131ad80 {
    int sub_0131ad80();
};

// @baa 0x0131ad80
int C_0131ad80::sub_0131ad80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_0131ad90 {
    int sub_0131ad90();
};

// @baa 0x0131ad90
int C_0131ad90::sub_0131ad90(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0131adb0 {
    int sub_0131adb0();
};

// @baa 0x0131adb0
int C_0131adb0::sub_0131adb0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_0131ae40 {
    int sub_0131ae40(int);
};

// @baa 0x0131ae40
int C_0131ae40::sub_0131ae40(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_0131af30 {
    int sub_0131af30(int);
};

// @baa 0x0131af30
int C_0131af30::sub_0131af30(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x18;
}

struct C_0131afc0 {
    int sub_0131afc0(int);
};

// @baa 0x0131afc0
int C_0131afc0::sub_0131afc0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

void sub_013287e0();
// @baa 0x0132b150
void sub_0132b150(void) { sub_013287e0(); }

// @baa 0x0132bce0
int sub_0132bce0(void) { return 1690; }

// @baa 0x0132be00
int ULensFlare::sub_0132be00(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0xc0) * 3 + *(int *)(param_1 + 0x84)) * 4;
}

// @baa 0x0132be20
int ULensFlare::sub_0132be20(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0xc0) * 3 + *(int *)(param_1 + 0x84)) * 4 + 0x110;
}

int sub_00977470(void);
extern undefined * g_0224a8b8;
// @baa 0x0132be40
void ULensFlare::sub_0132be40(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_0224a8b8);
  sub_00977470();
  return;
}

int sub_0053dfa0(...);
// @baa 0x0132be50
undefined4 * ULensFlare::sub_0132be50(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_0224a8b8);
  sub_00977470();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_0132bfe0(void);
// @baa 0x0132c040
undefined4 UUnrealEdEngine::sub_0132c040(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0132bfe0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_01321d20(void);
// @baa 0x0132c060
int UUnrealEdEngine::sub_0132c060(void)
{
    int param_1 = (int)this;

  sub_01321d20();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_01321d80(void);
// @baa 0x0132c080
int UUnrealEdEngine::sub_0132c080(void)
{
    int param_1 = (int)this;

  sub_01321d80();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_01321de0(void);
// @baa 0x0132c0a0
int UUnrealEdEngine::sub_0132c0a0(void)
{
    int param_1 = (int)this;

  sub_01321de0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_01328850();
// @baa 0x0132c0c0
void sub_0132c0c0(void) { sub_01328850(); }

void sub_013288c0();
// @baa 0x0132c0d0
void sub_0132c0d0(void) { sub_013288c0(); }

struct A_0132c210 { virtual void sub_0132d630(); char pad[408]; };

struct B_0132c210 { virtual void sub_0132d630(); };

struct C_0132c210 : A_0132c210, B_0132c210 { virtual void sub_0132d630(); C_0132c210(); };

C_0132c210::C_0132c210() {}

// @baa 0x0132c210
void C_0132c210::sub_0132d630() {}

struct A_0132c220 { virtual void sub_0132d630(); char pad[416]; };

struct B_0132c220 { virtual void sub_0132d630(); };

struct C_0132c220 : A_0132c220, B_0132c220 { virtual void sub_0132d630(); C_0132c220(); };

C_0132c220::C_0132c220() {}

// @baa 0x0132c220
void C_0132c220::sub_0132d630() {}

struct A_0132c230 { virtual void sub_0132d630(); char pad[420]; };

struct B_0132c230 { virtual void sub_0132d630(); };

struct C_0132c230 : A_0132c230, B_0132c230 { virtual void sub_0132d630(); C_0132c230(); };

C_0132c230::C_0132c230() {}

// @baa 0x0132c230
void C_0132c230::sub_0132d630() {}

// @baa 0x0132ce60
void sub_0132ce60(void) { sub_013287e0(); }

struct A_0132d600 { virtual void sub_01333c20(); char pad[416]; };

struct B_0132d600 { virtual void sub_01333c20(); };

struct C_0132d600 : A_0132d600, B_0132d600 { virtual void sub_01333c20(); C_0132d600(); };

C_0132d600::C_0132d600() {}

// @baa 0x0132d600
void C_0132d600::sub_01333c20() {}

struct A_0132d610 { virtual void sub_01333c20(); char pad[420]; };

struct B_0132d610 { virtual void sub_01333c20(); };

struct C_0132d610 : A_0132d610, B_0132d610 { virtual void sub_01333c20(); C_0132d610(); };

C_0132d610::C_0132d610() {}

// @baa 0x0132d610
void C_0132d610::sub_01333c20() {}

struct A_0132d620 { virtual void sub_01333c20(); char pad[408]; };

struct B_0132d620 { virtual void sub_01333c20(); };

struct C_0132d620 : A_0132d620, B_0132d620 { virtual void sub_01333c20(); C_0132d620(); };

C_0132d620::C_0132d620() {}

// @baa 0x0132d620
void C_0132d620::sub_01333c20() {}

int sub_0132c0e0(void);
// @baa 0x0132d630
undefined4 UUnrealEdEngine::sub_0132d630(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0132c0e0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
