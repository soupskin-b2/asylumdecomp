// Core_0640000.cpp: 18 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Array.h"

// @baa 0x00648670
void sub_00648670(void)
{
  return;
}

struct C_00648680 { int a, b, c; C_00648680(); };

// @baa 0x00648680
C_00648680::C_00648680() : a(0), b(0), c(0) {}

struct C { int sub_00648690(void); };

// @baa 0x00648690
int C::sub_00648690(void) { return *(int*)((char*)this + 4); }

struct C_006486a0 { int sub_006486a0(void); };

// @baa 0x006486a0
int C_006486a0::sub_006486a0(void) { return *(int*)((char*)this + 0); }

struct C_006486b0 { int sub_006486b0(void); };

// @baa 0x006486b0
int C_006486b0::sub_006486b0(void) { return *(int*)((char*)this + 0); }

struct C_006486c0 {
    int sub_006486c0(int);
};

// @baa 0x006486c0
int C_006486c0::sub_006486c0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_006486d0 { int sub_006486d0(void); };

// @baa 0x006486d0
int C_006486d0::sub_006486d0(void) { return *(int*)((char*)this + 0); }

struct C_006486e0 { int sub_006486e0(void); };

// @baa 0x006486e0
int C_006486e0::sub_006486e0(void) { return *(int*)((char*)this + 0); }

struct S {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_006486f0(INT Index);
};

// @baa 0x006486f0
DWORD* S::sub_006486f0(INT Index)
{
    return &Items(Index);
}

struct S_00648740 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_00648740(INT Index) const;
};

// @baa 0x00648740
const DWORD* S_00648740::sub_00648740(INT Index) const
{
    return &Items(Index);
}

struct C_00648790 {
    int sub_00648790(int);
};

// @baa 0x00648790
int C_00648790::sub_00648790(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x006487a0
void __stdcall sub_006487a0(int a0, int a1) {  }

struct C_006487b0 {
    int sub_006487b0(int);
};

// @baa 0x006487b0
int C_006487b0::sub_006487b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x006487c0
void __stdcall sub_006487c0(int a0, int a1) {  }

struct C_006487d0 {
    int sub_006487d0(int);
};

// @baa 0x006487d0
int C_006487d0::sub_006487d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x006487e0
void __stdcall sub_006487e0(int a0, int a1) {  }

// @baa 0x006487f0
void __stdcall sub_006487f0(int a0, int a1) {  }

struct C_00648b40 {
    undefined4 sub_00648b40(byte);
};

int sub_0053dfa0(...);
int sub_00648ae0(void);
// @baa 0x00648b40
undefined4 C_00648b40::sub_00648b40(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00648ae0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
