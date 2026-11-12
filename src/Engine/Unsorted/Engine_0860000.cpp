// Engine_0860000.cpp (part 1 of 3): 22 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

extern "C" double fabs(double);
// @baa 0x00863d40
double sub_00863d40(float param_1)
{
    return fabs(param_1);
}

// @baa 0x00863d50
void sub_00863d50(void) {  }

// @baa 0x00863d60
void sub_00863d60(void) {  }

// @baa 0x00863d70
void sub_00863d70(void) {  }

// @baa 0x00863db0
undefined2 sub_00863db0(void)
{
  return 0x69;
}

// @baa 0x00863dc0
undefined2 sub_00863dc0(void)
{
  return 0x73;
}

struct C {
    bool sub_00863e10();
};

// @baa 0x00863e10
bool C::sub_00863e10(void)
{
    int * param_1 = (int *)this;

  return *param_1 != 0;
}

struct C_00863e40 { C_00863e40* sub_00863e40(int a0); };

// @baa 0x00863e40
C_00863e40* C_00863e40::sub_00863e40(int a0) { return this; }

struct C_00863e50 { C_00863e50* sub_00863e50(int a0); };

// @baa 0x00863e50
C_00863e50* C_00863e50::sub_00863e50(int a0) { return this; }

struct C_0086e360 { int a, b, c; C_0086e360(); };

// @baa 0x0086e360
C_0086e360::C_0086e360() : a(0), b(0), c(0) {}

struct C_0086e370 { int a, b, c; C_0086e370(); };

// @baa 0x0086e370
C_0086e370::C_0086e370() : a(0), b(0), c(0) {}

struct C_0086e380 { int sub_0086e380(void); };

// @baa 0x0086e380
int C_0086e380::sub_0086e380(void) { return *(int*)((char*)this + 4); }

struct C_0086e390 { C_0086e390* sub_0086e390(int a0); };

// @baa 0x0086e390
C_0086e390* C_0086e390::sub_0086e390(int a0) { return this; }

struct C_0086e410 { int sub_0086e410(void); };

// @baa 0x0086e410
int C_0086e410::sub_0086e410(void) { return *(int*)((char*)this + 0); }

struct C_0086e490 { int sub_0086e490(void); };

// @baa 0x0086e490
int C_0086e490::sub_0086e490(void) { return *(int*)((char*)this + 0); }

struct C_0086e4a0 { int sub_0086e4a0(void); };

// @baa 0x0086e4a0
int C_0086e4a0::sub_0086e4a0(void) { return *(int*)((char*)this + 0); }

struct C_0086e4b0 { int sub_0086e4b0(void); };

// @baa 0x0086e4b0
int C_0086e4b0::sub_0086e4b0(void) { return *(int*)((char*)this + 0); }

struct C_0086e710 {
    void sub_0086e710(undefined4, undefined4);
};

int sub_00630f20(...);
// @baa 0x0086e710
void C_0086e710::sub_0086e710(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;

  sub_00630f20(param_1,param_2,param_3);
  return;
}

void sub_00572b30();
// @baa 0x0086e730
void sub_0086e730(void) { sub_00572b30(); }

// @baa 0x0086e740
void sub_0086e740(void) { sub_00572b30(); }

struct S {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_0086e870(INT Index) const;
};

// @baa 0x0086e870
const DWORD* S::sub_0086e870(INT Index) const
{
    return &Items(Index);
}

struct S_00863dd0 {
    INT f0;
    INT f4;
    INT f8;
    INT fc;
    INT f10;
    INT f14;
    INT f18;

    S_00863dd0();
};

// @baa 0x00863dd0
S_00863dd0::S_00863dd0()
{
    f0 = 0;
    f4 = 0;
    f8 = 0;
    fc = 0;
    f10 = 0;
    f14 = 0;
    f18 = 0;
}
