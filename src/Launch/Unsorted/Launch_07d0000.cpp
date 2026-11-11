// Launch_07d0000.cpp: 7 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct S {
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void vf_0c();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18(INT Value);
};

// @baa 0x007d6770
void sub_007d6770(S* p, INT Value)
{
    p->vf_18(Value);
}

int sub_005e1960(...);
int sub_00804e70(void);
int sub_00825770(...);
extern undefined4 g_026667a8;
extern undefined4 g_026b548c;
// @baa 0x007d6790
void sub_007d6790(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  if (g_026b548c == 0) {
    g_026b548c = sub_00825770(L"Engine");
    sub_00804e70();
  }
  sub_005e1960(g_026b548c,param_2,param_3,param_4,param_5,param_6,0,g_026667a8,0,0,0);
  return;
}

// @baa 0x007d67f0
void sub_007d67f0(S* p, INT Value)
{
    p->vf_18(Value);
}

struct C { char* sub_007d6810(void); };

// @baa 0x007d6810
char* C::sub_007d6810(void) { return (char*)this + 456; }

// @baa 0x007d6850
void UEngine::vf_114(void) {  }

// @baa 0x007d6860
int sub_007d6860(int a0, int a1) { return a1; }

// @baa 0x007d68d0
int sub_007d68d0(int a0, int a1) { return a1; }
