// UnLinker.cpp (part 2 of 3): 8 functions
// Placed here by: neighbours 5.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_0053df70(...);
// @baa 0x005a8f10
void UObject::sub_005a8f10(int param_2)
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

// @baa 0x005a90b0
void UObject::sub_005a90b0(int param_2)
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

struct C {
    void sub_006488f0(int);
};

// @baa 0x006488f0
void C::sub_006488f0(int param_2)
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

struct C_00648990 {
    void sub_00648990(int);
};

// @baa 0x00648990
void C_00648990::sub_00648990(int param_2)
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

struct C_00648a30 {
    void sub_00648a30(int);
};

// @baa 0x00648a30
void C_00648a30::sub_00648a30(int param_2)
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

// @baa 0x0059a3e0
void ULinker::StaticConstructor()
{
    UClass* TheClass = GetClass();
    TheClass->EmitObjectReference(0x30);
    const DWORD SkipIndexIndex = TheClass->EmitStructArrayBegin(0xb0, 0x28);
    TheClass->EmitObjectReference(0x20);
    TheClass->EmitStructArrayEnd(SkipIndexIndex);
}

struct C_005a9ee0
{
    char pad_0[0x8];
    INT Value_8;
    INT Value_c;
    INT Value_10;

    C_005a9ee0* sub_005a9ee0();
};

// @baa 0x005a9ee0
C_005a9ee0* C_005a9ee0::sub_005a9ee0()
{
    Value_8 = 0;
    Value_c = 0;
    Value_10 = 0;
    return this;
}

// @baa 0x0059a7e0
int ULinkerSave::vf_000(void) { return 1; }
