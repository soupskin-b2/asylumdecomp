// Engine_0530000.cpp (part 1 of 2): 9 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Array.h"

struct C_0053fa50 { int a, b; C_0053fa50(const C_0053fa50 &); };

// @baa 0x0053fa50
C_0053fa50::C_0053fa50(const C_0053fa50 &o) : a(o.a), b(o.b) {}

struct C_0053fa70 { int a, b; C_0053fa70(const C_0053fa70 &); };

// @baa 0x0053fa70
C_0053fa70::C_0053fa70(const C_0053fa70 &o) : a(o.a), b(o.b) {}

struct C { int sub_0053fa90(void); };

// @baa 0x0053fa90
int C::sub_0053fa90(void) { return *(int*)((char*)this + 4); }

struct T_0053faa0 { BYTE b[40]; };

// @baa 0x0053faa0
template INT TArray<T_0053faa0>::Add(INT);

struct C_0053fb40 { int a, b; C_0053fb40(const C_0053fb40 &); };

// @baa 0x0053fb40
C_0053fb40::C_0053fb40(const C_0053fb40 &o) : a(o.a), b(o.b) {}

// @baa 0x0053fb90
void sub_0053fb90(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  return;
}

struct C_0053fdc0 { C_0053fdc0* sub_0053fdc0(void); };

// @baa 0x0053fdc0
C_0053fdc0* C_0053fdc0::sub_0053fdc0(void) { return this; }

struct C_0053ff30 {
    bool sub_0053ff30();
};

// @baa 0x0053ff30
bool C_0053ff30::sub_0053ff30(void)
{
    int param_1 = (int)this;

  return *(char *)(param_1 + 1) == '\x01';
}

struct C_0053ff40 {
    void * sub_0053ff40();
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x0053ff40
void * C_0053ff40::sub_0053ff40(void)
{
    void * param_1 = (void *)this;

  sub_01a37612(param_1,0,0x30);
  return param_1;
}
