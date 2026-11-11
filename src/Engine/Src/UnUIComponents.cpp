// UnUIComponents.cpp: 15 functions
// Placed here by: neighbours 12, file 2, callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00d8ed20
IMPLEMENT_CLASS_AT(UUIComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIComponents.cpp", 19);

// @baa 0x00d8ed40
struct C {
    int sub_00d8ee00(int);
};

// @baa 0x00d8ee00
int C::sub_00d8ee00(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct S {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_00d8ee10(INT Index);
};

// @baa 0x00d8ee10
QWORD* S::sub_00d8ee10(INT Index)
{
    return &Items(Index);
}

// @baa 0x00d8ee60
IMPLEMENT_CLASS_AT(UUIComp_Event, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIComponents.cpp", 20);

// @baa 0x00d8ef70
bool UUIComp_Event::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d8efb0
void __stdcall sub_00d8efb0(int a0, int a1) {  }

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00d8efc0 { void* Data; int Num; int Max; void sub_00d8efc0(); };

// @baa 0x00d8efc0
void C_00d8efc0::sub_00d8efc0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

void sub_00d8efc0();
// @baa 0x00d8f020
void sub_00d8f020(void) { sub_00d8efc0(); }

struct C_00d8f030 { C_00d8f030* sub_00d8f030(void); };

// @baa 0x00d8f030
C_00d8f030* C_00d8f030::sub_00d8f030(void) { return this; }

int sub_005c7a20(void);
extern undefined * g_020b9610;
// @baa 0x00d8f040
undefined4 * UObject::sub_00d8f040(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020b9610);
  return param_1;
}

// @baa 0x00d8f060
// @baa 0x00d8f0d0
// @baa 0x00d8f0f0
// @baa 0x00d8f110
