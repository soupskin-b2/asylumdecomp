// UnrealEd_12e0000.cpp (part 1 of 2): 34 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_0053dfa0(...);
int sub_00c38ac0(void);
// @baa 0x012e0000
undefined4 UObject::sub_012e0000(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c38ac0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x012e0030
undefined4 UObject::sub_012e0030(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c38ac0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x012e0060
undefined4 UObject::sub_012e0060(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c38ac0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x012e0090
undefined4 UObject::sub_012e0090(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c38ac0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x012e00c0
undefined4 UObject::sub_012e00c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c38ac0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x012e00f0
undefined4 UObject::sub_012e00f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c38ac0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x012e0120
undefined4 UObject::sub_012e0120(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c38ac0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x012e0150
undefined4 UObject::sub_012e0150(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c38ac0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x012e0180
undefined4 UObject::sub_012e0180(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c38ac0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x012e01b0
undefined4 UObject::sub_012e01b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c38ac0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x012e01e0
undefined4 UObject::sub_012e01e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c38ac0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x012e0210
undefined4 UObject::sub_012e0210(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c38ac0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x012e0240
undefined4 UObject::sub_012e0240(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c38ac0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C { void sub_012df280(); void sub_012e0e90(int); };

// @baa 0x012e0e90
void C::sub_012e0e90(int) { sub_012df280(); }

struct C_012e0ea0 { void sub_012df380(); void sub_012e0ea0(int); };

// @baa 0x012e0ea0
void C_012e0ea0::sub_012e0ea0(int) { sub_012df380(); }

struct C_012e3f80 { void sub_012e1440(); void sub_012e3f80(int); };

// @baa 0x012e3f80
void C_012e3f80::sub_012e3f80(int) { sub_012e1440(); }

struct C_012e3f90 { void sub_012e14b0(); void sub_012e3f90(int); };

// @baa 0x012e3f90
void C_012e3f90::sub_012e3f90(int) { sub_012e14b0(); }

int sub_012e0f10(void);
// @baa 0x012e3fa0
undefined4 UUnrealEdEngine::sub_012e3fa0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_012e0f10();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_012e5340 {
    int sub_012e5340(undefined4 *, int);
    int sub_012e1db0(int, int);
};

// @baa 0x012e5340
int C_012e5340::sub_012e5340(undefined4 * param_2, int param_3)
{
    int * param_1 = (int *)this;
  undefined4 *puVar1;
  ((C_012e5340 *)(this))->sub_012e1db0(param_3, 1);
  puVar1 = (undefined4 *)(*param_1 + param_3 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
  }
  return param_3;
}

struct C_012e53c0 {
    void sub_012e53c0(int);
};

int sub_0053df70(...);
// @baa 0x012e53c0
void C_012e53c0::sub_012e53c0(int param_2)
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

struct S {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_012e5500(INT Index);
};

// @baa 0x012e5500
QWORD* S::sub_012e5500(INT Index)
{
    return &Items(Index);
}

struct C_012e5600 {
    int sub_012e5600(int);
};

// @baa 0x012e5600
int C_012e5600::sub_012e5600(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x38;
}

// @baa 0x012e5620
void __stdcall sub_012e5620(int a0, int a1) {  }

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
	FFaceFXElement* sub_012e5630(INT Index);
};

// @baa 0x012e5630
FFaceFXElement* UFxRenderWidget::sub_012e5630(INT Index)
{
	return &BoneArray(Index);
}

struct C_012e5680 {
    int sub_012e5680(int);
};

// @baa 0x012e5680
int C_012e5680::sub_012e5680(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

// @baa 0x012e5690
void __stdcall sub_012e5690(int a0, int a1) {  }

struct E { BYTE Bytes[16]; };

struct S_012e56a0 {
    TArray<E> Items; // 0x00
    E* sub_012e56a0(INT Index);
};

// @baa 0x012e56a0
E* S_012e56a0::sub_012e56a0(INT Index)
{
    return &Items(Index);
}

struct C_012e56f0 {
    int sub_012e56f0(int);
};

// @baa 0x012e56f0
int C_012e56f0::sub_012e56f0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x012e5700
void __stdcall sub_012e5700(int a0, int a1) {  }

struct C_012e5710 {
    int sub_012e5710(int);
};

// @baa 0x012e5710
int C_012e5710::sub_012e5710(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

// @baa 0x012e5720
void __stdcall sub_012e5720(int a0, int a1) {  }

struct C_012e5730 {
    int sub_012e5730(int);
};

// @baa 0x012e5730
int C_012e5730::sub_012e5730(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

// @baa 0x012e5740
void __stdcall sub_012e5740(int a0, int a1) {  }

struct C_012e8580 { void sub_012e4510(); void sub_012e8580(int); };

// @baa 0x012e8580
void C_012e8580::sub_012e8580(int) { sub_012e4510(); }
