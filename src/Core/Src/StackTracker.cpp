// StackTracker.cpp: 6 functions
// Placed here by: neighbours 3, callers 2, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct Inner {
    int* data;
    Inner();
    ~Inner();
};

struct Outer_00602330 : Inner {
    int num;
    int max;
    void sub_00600140(int* p);
    Outer_00602330(int* p);
};

Inner::Inner()
{
    data = 0;
}

// @baa 0x00602330
Outer_00602330::Outer_00602330(int* p)
{
    num = 0;
    max = 0;
    sub_00600140(p);
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C { void* Data; int Num; int Max; void sub_00602390(); };

// @baa 0x00602390
void C::sub_00602390() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_006023f0 { void* Data; int Num; int Max; void sub_006023f0(); };

// @baa 0x006023f0
void C_006023f0::sub_006023f0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x00602450
int UPackageMap::sub_00602450(void)
{
    int param_1 = (int)this;
  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct Outer_0060fdb0 : Inner {
    int num;
    int max;
    void sub_0060e760(int* p);
    Outer_0060fdb0(int* p);
};

// @baa 0x0060fdb0
Outer_0060fdb0::Outer_0060fdb0(int* p)
{
    num = 0;
    max = 0;
    sub_0060e760(p);
}

struct C_view {
    int sub_00616b00(int);
    int sub_0060bf70(int);
};

int sub_006311e0(...);
extern undefined4 g_01ea3848;
extern undefined4 g_02666790;
extern undefined4 g_02666794;
// @baa 0x0061a470
void UPackageMap::sub_0061a470(void)
{
    int param_1 = (int)this;
  if (*(int *)(param_1 + 0x48) != 0) {
    sub_006311e0("!bAvoidCapturing",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\StackTracker.cpp"
                 ,0x118,&g_01ea3848);
  }
  ((C_view *)(((char *)this + 0xc)))->sub_00616b00(0);
  ((C_view *)(this))->sub_0060bf70(0);
  *(undefined4 *)(param_1 + 0x50) = g_02666790;
  *(undefined4 *)(param_1 + 0x54) = g_02666794;
  *(undefined4 *)(param_1 + 0x58) = g_02666790;
  *(undefined4 *)(param_1 + 0x5c) = g_02666794;
  return;
}
