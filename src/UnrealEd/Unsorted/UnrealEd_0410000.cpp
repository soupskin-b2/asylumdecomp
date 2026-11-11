// UnrealEd_0410000.cpp: 49 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct A_00413c80 { virtual void sub_00413c60(); char pad[4]; };

struct B_00413c80 { virtual void sub_00413c60(); };

struct C_00413c80 : A_00413c80, B_00413c80 { virtual void sub_00413c60(); C_00413c80(); };

C_00413c80::C_00413c80() {}

// @baa 0x00413c80
void C_00413c80::sub_00413c60() {}

struct A_00413c90 { virtual void sub_00413dc0(); char pad[332]; };

struct B_00413c90 { virtual void sub_00413dc0(); };

struct C_00413c90 : A_00413c90, B_00413c90 { virtual void sub_00413dc0(); C_00413c90(); };

C_00413c90::C_00413c90() {}

// @baa 0x00413c90
void C_00413c90::sub_00413dc0() {}

struct A_00413ca0 { virtual void sub_00413ce0(); char pad[332]; };

struct B_00413ca0 { virtual void sub_00413ce0(); };

struct C_00413ca0 : A_00413ca0, B_00413ca0 { virtual void sub_00413ce0(); C_00413ca0(); };

C_00413ca0::C_00413ca0() {}

// @baa 0x00413ca0
void C_00413ca0::sub_00413ce0() {}

struct A_00413cb0 { virtual void sub_00413c40(); char pad[4]; };

struct B_00413cb0 { virtual void sub_00413c40(); };

struct C_00413cb0 : A_00413cb0, B_00413cb0 { virtual void sub_00413c40(); C_00413cb0(); };

C_00413cb0::C_00413cb0() {}

// @baa 0x00413cb0
void C_00413cb0::sub_00413c40() {}

struct C {
    void sub_00413fa0();
};

int sub_01ab3290(...);
// @baa 0x00413fa0
void C::sub_00413fa0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1]);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_00413fc0 {
    void sub_00413fc0();
};

// @baa 0x00413fc0
void C_00413fc0::sub_00413fc0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 2);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_00413fe0 {
    void sub_00413fe0();
};

// @baa 0x00413fe0
void C_00413fe0::sub_00413fe0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_00414010 {
    void sub_00414010();
};

// @baa 0x00414010
void C_00414010::sub_00414010(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 0x30);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_00414040 {
    void sub_00414040();
};

// @baa 0x00414040
void C_00414040::sub_00414040(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_00414070 {
    void sub_00414070();
};

// @baa 0x00414070
void C_00414070::sub_00414070(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

int sub_0053df70(...);
// @baa 0x004140a0
void UObject::sub_004140a0(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00414130 {
    void sub_00414130();
};

// @baa 0x00414130
void C_00414130::sub_00414130(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

extern char g_01e4037c[];
struct C_004141a0 { void sub_004141a0(void); };

// @baa 0x004141a0
void C_004141a0::sub_004141a0(void) { *(int*)((char*)this + 0) = (int)g_01e4037c; }

struct C_004141b0 {
    undefined4 * sub_004141b0(byte);
};

int sub_0053dfa0(...);
// @baa 0x004141b0
undefined4 * C_004141b0::sub_004141b0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e4037c);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x004141d0
void __stdcall sub_004141d0(int a0, int a1) {  }

// @baa 0x004141e0
void __stdcall sub_004141e0(int a0, int a1) {  }

// @baa 0x004141f0
void __stdcall sub_004141f0(int a0, int a1) {  }

// @baa 0x00414200
void __stdcall sub_00414200(int a0, int a1) {  }

struct C_00414220 {
    int * sub_00414220(undefined4 *);
};

void * sub_01a375f0(void *, void *, size_t);
int sub_01ab3960(...);
// @baa 0x00414220
int * C_00414220::sub_00414220(undefined4 * param_2)
{
    int * param_1 = (int *)this;

  void *_Dst;
  int iVar1;
  
  if (param_2[2] == 0) {
    _Dst = (void *)0x0;
    iVar1 = 0;
  }
  else {
    iVar1 = param_2[2] + 1;
    if (iVar1 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      _Dst = (void *)sub_01ab3960(iVar1);
    }
  }
  *param_1 = (int)_Dst;
  param_1[1] = iVar1;
  param_1[2] = 0;
  sub_01a375f0(_Dst,(void *)*param_2,param_2[2]);
  iVar1 = param_2[2];
  param_1[2] = iVar1;
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + *param_1) = 0;
  }
  return param_1;
}

struct C_00414670 {
    void sub_00414670(int, int);
};

// @baa 0x00414670
void C_00414670::sub_00414670(int param_2, int param_3)
{
    int * param_1 = (int *)this;

  if (*param_1 != 0) {
    sub_01ab3290(*param_1,param_1[1] * 8);
    *param_1 = param_2;
    param_1[1] = param_3;
    return;
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}

struct C_00414bd0 {
    void sub_00414bd0(int);
};

// @baa 0x00414bd0
void C_00414bd0::sub_00414bd0(int param_2)
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

struct FFaceData {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_00414db0(volatile FFaceData *Other);
};

// @baa 0x00414db0
void FFaceData::sub_00414db0(volatile FFaceData *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct C_00414e00 {
    void sub_00414e00();
};

// @baa 0x00414e00
void C_00414e00::sub_00414e00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1]);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_00415320 {
    int sub_00415320();
    int sub_00414280(int, int);
};

// @baa 0x00415320
int C_00415320::sub_00415320(void)
{
    int param_1 = (int)this;
  ((C_00415320 *)(this))->sub_00414280((int)("Undefined"), 0xffffffff);
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  return param_1;
}

struct C_00415350 {
    void sub_00415350();
};

// @baa 0x00415350
void C_00415350::sub_00415350(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_00415380 {
    void sub_00415380();
};

// @baa 0x00415380
void C_00415380::sub_00415380(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 2);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

extern TArray<int> g_026a1ca4;
struct C_00415410 {
    int sub_00415410();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x00415410
int C_00415410::sub_00415410()
{
    return g_026a1ca4(Index);
}

struct C_00415470 {
    int sub_00415470();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x00415470
int C_00415470::sub_00415470()
{
    return g_026a1ca4(Index);
}

struct C_004156c0 {
    void sub_004156c0();
};

// @baa 0x004156c0
void C_004156c0::sub_004156c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_004156f0 {
    void sub_004156f0();
};

// @baa 0x004156f0
void C_004156f0::sub_004156f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1]);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_004157b0 {
    void sub_004157b0();
};

// @baa 0x004157b0
void C_004157b0::sub_004157b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 0x30);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_004157e0 {
    void sub_004157e0();
};

// @baa 0x004157e0
void C_004157e0::sub_004157e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_00415890 { int a, b, c; C_00415890(); };

// @baa 0x00415890
C_00415890::C_00415890() : a(0), b(0), c(0) {}

struct C_004158a0 {
    void sub_004158a0();
};

// @baa 0x004158a0
void C_004158a0::sub_004158a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1]);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_004158c0 {
    void sub_004158c0();
};

// @baa 0x004158c0
void C_004158c0::sub_004158c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct S {
    INT Unk00;
    INT Unk04;
    S *sub_00415bf0();
};

// @baa 0x00415bf0
S *S::sub_00415bf0()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct C_00415c80 { void sub_004145d0(int); C_00415c80 *sub_00415c80(int); };

// @baa 0x00415c80
C_00415c80 *C_00415c80::sub_00415c80(int a) { sub_004145d0(a); return this; }

struct A_00418f00 { virtual void sub_0041e520(); };

struct B_00418f00 { virtual void sub_0041e520(); };

struct C_00418f00 : A_00418f00, B_00418f00 { virtual void sub_0041e520(); C_00418f00(); };

C_00418f00::C_00418f00() {}

// @baa 0x00418f00
void C_00418f00::sub_0041e520() {}

struct C_00419140 {
    undefined4 sub_00419140(byte);
};

int sub_00415810(void);
// @baa 0x00419140
undefined4 C_00419140::sub_00419140(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00415810();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00419b80 {
    void sub_00419b80();
};

int sub_00414a20(...);
// @baa 0x00419b80
void C_00419b80::sub_00419b80(void)
{
    int * param_1 = (int *)this;

  sub_00414a20(*param_1,*param_1 + param_1[2] * 4);
  sub_01ab3290(*param_1,param_1[1] * 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_0041cad0 {
    undefined4 * sub_0041cad0();
};

int sub_01ab65f0(void);
extern undefined4 g_01e41d8c;
// @baa 0x0041cad0
undefined4 * C_0041cad0::sub_0041cad0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab65f0();
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (undefined4)(&g_01e41d8c);
  return param_1;
}

struct C_0041caf0 {
    undefined4 sub_0041caf0(byte);
};

int sub_00415ca0(void);
// @baa 0x0041caf0
undefined4 C_0041caf0::sub_0041caf0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00415ca0();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x10);
  }
  return param_1;
}

struct C_0041d0f0 { void sub_00416fc0(int); C_0041d0f0 *sub_0041d0f0(int); };

// @baa 0x0041d0f0
C_0041d0f0 *C_0041d0f0::sub_0041d0f0(int a) { sub_00416fc0(a); return this; }

struct S_0041d550 { void sub_00415950(); };

// @baa 0x0041d550
void sub_0041d550(S_0041d550 *p) { if (p) p->sub_00415950(); }

// @baa 0x0041d6a0
void sub_0041d6a0(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    sub_01ab3290(*param_1,param_1[1]);
    *param_1 = 0;
    param_1[2] = 0;
    param_1[1] = 0;
  }
  return;
}

// @baa 0x0041d6d0
void sub_0041d6d0(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    sub_01ab3290(*param_1,param_1[1]);
    *param_1 = 0;
    param_1[2] = 0;
    param_1[1] = 0;
  }
  return;
}

struct C_0041d700 {
    int sub_0041d700(undefined4, undefined4, undefined4);
    int sub_00417480(int);
};

// @baa 0x0041d700
int C_0041d700::sub_0041d700(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_0041d700 *)(this))->sub_00417480(param_2);
  *(undefined4 *)(param_1 + 0x30) = param_3;
  *(undefined4 *)(param_1 + 0x34) = param_4;
  return param_1;
}

struct S_0041d7f0 { void sub_004159d0(); };

// @baa 0x0041d7f0
void sub_0041d7f0(S_0041d7f0 *p) { if (p) p->sub_004159d0(); }

struct C_0041e520 {
    undefined4 sub_0041e520(byte);
};

int sub_00418dd0(void);
// @baa 0x0041e520
undefined4 C_0041e520::sub_0041e520(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00418dd0();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0xb0);
  }
  return param_1;
}
