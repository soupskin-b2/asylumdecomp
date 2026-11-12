// CommonGameInteractionClasses.cpp: 17 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x0153b330
IMPLEMENT_CLASS_AT(URInteractionClass, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameInteractionClasses.cpp", 5);

// @baa 0x0153b440
int URInteractionClass::vf_000(void) { return 1; }

// @baa 0x0153b450
bool URInteractionClass::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0153b5f0
IMPLEMENT_CLASS_AT(URInteractionComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameInteractionClasses.cpp", 7);

// @baa 0x0153b700
int URInteractionComponent::vf_000(void) { return 1; }

// @baa 0x0153b710
bool URInteractionComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_01541930 { void* Data; int Num; int Max; void sub_01541930(); };

// @baa 0x01541930
void C_01541930::sub_01541930() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

void sub_01541930();
int sub_0053dfa0(...);

struct C_01541990 { void* Data; int Num; int Max; void sub_01541990(); };

// @baa 0x01541990
void C_01541990::sub_01541990() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

void sub_01541990();

struct C_015419f0 { void* Data; int Num; int Max; void sub_015419f0(); };

// @baa 0x015419f0
void C_015419f0::sub_015419f0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

void sub_015419f0();

struct C_01541a50 { void* Data; int Num; int Max; void sub_01541a50(); };

// @baa 0x01541a50
void C_01541a50::sub_01541a50() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

void sub_01541a50();

// @baa 0x01541ab0
void __stdcall sub_01541ab0(DWORD a, DWORD b)
{
}

struct C_01541b30 {
    int sub_01541b30(int);
};

// @baa 0x01541b30
int C_01541b30::sub_01541b30(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_01541b40 {
    int sub_01541b40(int);
};

// @baa 0x01541b40
int C_01541b40::sub_01541b40(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_01541b50 {
    int sub_01541b50();
};

// @baa 0x01541b50
int C_01541b50::sub_01541b50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_01541b60 {
    int sub_01541b60();
};

// @baa 0x01541b60
int C_01541b60::sub_01541b60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_01541bd0 {
    void sub_01541bd0(int);
};

int sub_0053df70(...);
// @baa 0x01541bd0
void C_01541bd0::sub_01541bd0(int param_2)
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

int sub_005c7a20(void);
extern undefined * g_022e5e18;
// @baa 0x01541c10
undefined4 * UObject::sub_01541c10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022e5e18);
  return param_1;
}
