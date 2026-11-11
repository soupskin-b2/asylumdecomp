// Core_0410000.cpp (part 1 of 2): 37 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C {
    undefined4 * sub_00416150();
    int sub_00414280(int, int);
};

extern undefined4 g_01e382de;
extern undefined4 g_01e41da8;
// @baa 0x00416150
undefined4 * C::sub_00416150(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(&g_01e41da8);
  ((C *)(((char *)this + 4)))->sub_00414280((int)(&g_01e382de), 0xffffffff);
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  return param_1;
}

struct C_00416180 {
    undefined4 * sub_00416180(undefined4);
    int sub_00414220(int);
};

// @baa 0x00416180
undefined4 * C_00416180::sub_00416180(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(&g_01e41da8);
  ((C_00416180 *)(((char *)this + 4)))->sub_00414220(param_2);
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  return param_1;
}

struct C_004161b0 {
    void sub_004161b0();
};

int sub_0053dfa0(...);
int sub_01ab3290(...);
// @baa 0x004161b0
void C_004161b0::sub_004161b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e41da8);
  if (param_1[9] != 0) {
    sub_0053dfa0(param_1[9]);
    param_1[9] = 0;
  }
  sub_01ab3290(param_1[1],param_1[2]);
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00416310 { void* Data; int Num; int Max; void sub_00416310(); };

// @baa 0x00416310
void C_00416310::sub_00416310() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00416370 {
    void sub_00416370(int);
};

int sub_0053df70(...);
// @baa 0x00416370
void C_00416370::sub_00416370(int param_2)
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

struct C_004163b0 {
    void sub_004163b0();
};

int sub_00414a20(...);
// @baa 0x004163b0
void C_004163b0::sub_004163b0(void)
{
    int * param_1 = (int *)this;

  sub_00414a20(*param_1,*param_1 + param_1[2] * 4);
  sub_01ab3290(*param_1,param_1[1] * 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

extern TArray<int> g_026a1ca4;
struct C_004163f0 {
    int sub_004163f0();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x004163f0
int C_004163f0::sub_004163f0()
{
    return g_026a1ca4(Index);
}

struct C_00416450 {
    int sub_00416450();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x00416450
int C_00416450::sub_00416450()
{
    return g_026a1ca4(Index);
}

int sub_0040fcc0(void);
// @baa 0x004164b0
undefined4 UObject::sub_004164b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_004165a0 {
    undefined4 sub_004165a0(undefined4 *);
    int sub_00414c10(int, int);
};

// @baa 0x004165a0
undefined4 C_004165a0::sub_004165a0(undefined4 * param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_004165a0 *)(this))->sub_00414c10(*param_2, param_2[2]);
  return param_1;
}

struct C_00416de0 {
    void sub_00416de0(undefined4);
};

int sub_00415aa0(...);
// @baa 0x00416de0
void C_00416de0::sub_00416de0(undefined4 param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00415aa0(param_1,param_2);
  return;
}

struct C_004171d0 {
    undefined4 sub_004171d0(undefined4);
    int sub_00414c10(int, int);
};

// @baa 0x004171d0
undefined4 C_004171d0::sub_004171d0(undefined4 param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_004171d0 *)(this))->sub_00414c10(param_2, 1);
  return param_1;
}

struct C_004173b0 {
    undefined4 sub_004173b0(byte);
};

int sub_00415950(void);
// @baa 0x004173b0
undefined4 C_004173b0::sub_004173b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00415950();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_004173d0 {
    int sub_004173d0(int);
    int sub_00414220(int);
};

// @baa 0x004173d0
int C_004173d0::sub_004173d0(int param_2)
{
    int param_1 = (int)this;
  ((C_004173d0 *)(this))->sub_00414220(param_2);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  return param_1;
}

struct C_00417400 {
    undefined4 * sub_00417400(byte);
};

// @baa 0x00417400
undefined4 * C_00417400::sub_00417400(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1]);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00417440 {
    undefined4 * sub_00417440(byte);
};

// @baa 0x00417440
undefined4 * C_00417440::sub_00417440(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1]);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern int g_0266385c;
int sub_0045f620();
// @baa 0x00417510
int sub_00417510() { if (!g_0266385c) g_0266385c = sub_0045f620(); return g_0266385c; }

// @baa 0x00417550
void __stdcall sub_00417550(int a0) {  }

struct C_00417560 {
    undefined4 sub_00417560(byte);
};

int sub_0046c170(void);
// @baa 0x00417560
undefined4 C_00417560::sub_00417560(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0046c170();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x30);
  }
  return param_1;
}

struct C_004175f0 {
    int sub_004175f0(int);
    int sub_00417480(int);
};

// @baa 0x004175f0
int C_004175f0::sub_004175f0(int param_2)
{
    int param_1 = (int)this;
  ((C_004175f0 *)(this))->sub_00417480(param_2);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  return param_1;
}

struct C_00417620 {
    undefined4 sub_00417620(byte);
};

int sub_004159d0(void);
// @baa 0x00417620
undefined4 C_00417620::sub_00417620(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_004159d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00417cb0
int UObject::vf_00c(int a0, int a1) { return 1; }

// @baa 0x00417cc0
void UObject::vf_010(int a0) {  }

// @baa 0x00417cd0
void sub_00417cd0(void) {  }

// @baa 0x00417ce0
int UObject::vf_024(void) { return 1; }

// @baa 0x00417cf0
void UObject::vf_058(void) {  }

// @baa 0x00417d00
void UObject::vf_05c(void) {  }

// @baa 0x00417d10
int UObject::vf_098(void) { return 0; }

// @baa 0x00417d20
void UObject::vf_09c(void) {  }

// @baa 0x00417d30
void UObject::vf_0b0(int a0) {  }

// @baa 0x00417d40
void __stdcall sub_00417d40(int a0) {  }

// @baa 0x00417d50
int UObject::vf_0c0(int a0, int a1) { return 0; }

// @baa 0x00417d60
void UObject::vf_0d0(void) {  }

// @baa 0x00417d70
int UObject::vf_0d4(void) { return 0; }

// @baa 0x00417e30
int UObject::sub_00417e30(void) { return *(int*)((char*)this + 0); }

// @baa 0x00417f50
FString UObject::GetDetailedInfoInternal()
{
    return TEXT("No_Detailed_Info_Specified");
}

// @baa 0x00417f80
FString UObject::vf_0b8()
{
    return TEXT("");
}
