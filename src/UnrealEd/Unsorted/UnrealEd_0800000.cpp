// UnrealEd_0800000.cpp (part 1 of 2): 42 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C { int sub_00805290(void); };

// @baa 0x00805290
int C::sub_00805290(void) { return *(int*)((char*)this + 4); }

struct C_008052a0 { int a, b, c; C_008052a0(); };

// @baa 0x008052a0
C_008052a0::C_008052a0() : a(0), b(0), c(0) {}

struct C_008052b0 { int sub_008052b0(void); };

// @baa 0x008052b0
int C_008052b0::sub_008052b0(void) { return *(int*)((char*)this + 4); }

struct C_008052c0 { int sub_008052c0(void); };

// @baa 0x008052c0
int C_008052c0::sub_008052c0(void) { return *(int*)((char*)this + 4); }

struct C_008052d0 { int sub_008052d0(void); };

// @baa 0x008052d0
int C_008052d0::sub_008052d0(void) { return *(int*)((char*)this + 4); }

struct C_008052e0 { int sub_008052e0(void); };

// @baa 0x008052e0
int C_008052e0::sub_008052e0(void) { return *(int*)((char*)this + 4); }

struct C_008052f0 { int sub_008052f0(void); };

// @baa 0x008052f0
int C_008052f0::sub_008052f0(void) { return *(int*)((char*)this + 4); }

struct C_00805300 { int a, b, c; C_00805300(); };

// @baa 0x00805300
C_00805300::C_00805300() : a(0), b(0), c(0) {}

struct C_00805310 { int sub_00805310(void); };

// @baa 0x00805310
int C_00805310::sub_00805310(void) { return *(int*)((char*)this + 4); }

struct C_00805320 { int a, b, c; C_00805320(); };

// @baa 0x00805320
C_00805320::C_00805320() : a(0), b(0), c(0) {}

struct C_00805330 {
    void sub_00805330();
};

int sub_0053df70(...);
// @baa 0x00805330
void C_00805330::sub_00805330(void)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  iVar1 = param_1[1];
  if (param_1[2] != iVar1) {
    param_1[2] = iVar1;
    if ((*param_1 != 0) || (iVar1 != 0)) {
      iVar1 = sub_0053df70(*param_1,iVar1 << 6,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00805360 {
    void sub_00805360();
};

// @baa 0x00805360
void C_00805360::sub_00805360(void)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  iVar1 = param_1[1];
  if (param_1[2] != iVar1) {
    param_1[2] = iVar1;
    if ((*param_1 != 0) || (iVar1 != 0)) {
      iVar1 = sub_0053df70(*param_1,iVar1 * 0x18,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_008053a0 {
    void sub_008053a0();
};

// @baa 0x008053a0
void C_008053a0::sub_008053a0(void)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  iVar1 = param_1[1];
  if (param_1[2] != iVar1) {
    param_1[2] = iVar1;
    if ((*param_1 != 0) || (iVar1 != 0)) {
      iVar1 = sub_0053df70(*param_1,iVar1 << 6,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_008053d0 { int a, b, c; C_008053d0(); };

// @baa 0x008053d0
C_008053d0::C_008053d0() : a(0), b(0), c(0) {}

struct C_008053e0 { int a, b, c; C_008053e0(); };

// @baa 0x008053e0
C_008053e0::C_008053e0() : a(0), b(0), c(0) {}

struct C_008053f0 { int sub_008053f0(void); };

// @baa 0x008053f0
int C_008053f0::sub_008053f0(void) { return *(int*)((char*)this + 4); }

struct C_00805470 { int a, b, c; C_00805470(); };

// @baa 0x00805470
C_00805470::C_00805470() : a(0), b(0), c(0) {}

struct C_00805480 { int a, b, c; C_00805480(); };

// @baa 0x00805480
C_00805480::C_00805480() : a(0), b(0), c(0) {}

// @baa 0x00805490
int UObject::sub_00805490(void) { return *(int*)((char*)this + 4); }

int sub_006311e0(...);
int sub_00715880(void);
extern undefined2 g_01e3f3dc;
// @baa 0x008054f0
undefined4 * UObject::sub_008054f0(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  int iVar1;
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  iVar1 = sub_00715880();
  if (iVar1 == 0) {
    sub_006311e0("IsInGameThread()",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\engine\\inc\\Engine.h"
                 ,0x246,&g_01e3f3dc);
  }
  param_1[5] = param_2;
  param_1[6] = param_3;
  return param_1;
}

struct C_00805540 { int a, b, c; C_00805540(); };

// @baa 0x00805540
C_00805540::C_00805540() : a(0), b(0), c(0) {}

// @baa 0x00805550
int UObject::sub_00805550(void) { return *(int*)((char*)this + 0); }

// @baa 0x00805560
int UObject::sub_00805560(void) { return *(int*)((char*)this + 4); }

struct E { BYTE Bytes[16]; };

struct S {
    TArray<E> Items; // 0x00
    E* sub_00805570(INT Index);
};

// @baa 0x00805570
E* S::sub_00805570(INT Index)
{
    return &Items(Index);
}

struct C_00805600 { int a, b, c; C_00805600(); };

// @baa 0x00805600
C_00805600::C_00805600() : a(0), b(0), c(0) {}

// @baa 0x00805610
int UObject::sub_00805610(void) { return *(int*)((char*)this + 4); }

struct C_00805620 { int a, b, c; C_00805620(); };

// @baa 0x00805620
C_00805620::C_00805620() : a(0), b(0), c(0) {}

// @baa 0x00805630
int UObject::sub_00805630(void) { return *(int*)((char*)this + 4); }

struct C_00805640 { int sub_00805640(void); };

// @baa 0x00805640
int C_00805640::sub_00805640(void) { return *(int*)((char*)this + 104); }

struct C_00805650 { int a, b, c; C_00805650(); };

// @baa 0x00805650
C_00805650::C_00805650() : a(0), b(0), c(0) {}

// @baa 0x00805660
int UObject::sub_00805660(void) { return *(int*)((char*)this + 4); }

struct C_00805670 { int a, b, c; C_00805670(); };

// @baa 0x00805670
C_00805670::C_00805670() : a(0), b(0), c(0) {}

// @baa 0x00805680
int UObject::sub_00805680(void) { return *(int*)((char*)this + 4); }

// @baa 0x008056d0
int UObject::sub_008056d0(void) { return *(int*)((char*)this + 0); }

// @baa 0x008056e0
int UObject::sub_008056e0(void) { return *(int*)((char*)this + 0); }

struct C_00805790 { int a, b, c; C_00805790(); };

// @baa 0x00805790
C_00805790::C_00805790() : a(0), b(0), c(0) {}

// @baa 0x008057a0
int UObject::sub_008057a0(void) { return *(int*)((char*)this + 4); }

struct C_008057b0 { int a, b, c; C_008057b0(); };

// @baa 0x008057b0
C_008057b0::C_008057b0() : a(0), b(0), c(0) {}

// @baa 0x008057c0
int UObject::sub_008057c0(void) { return *(int*)((char*)this + 4); }

struct C_008057d0 { int a, b, c; C_008057d0(); };

// @baa 0x008057d0
C_008057d0::C_008057d0() : a(0), b(0), c(0) {}

extern char g_01f3dfb4[];
struct C_008057e0 { C_008057e0* sub_008057e0(void); };

// @baa 0x008057e0
C_008057e0* C_008057e0::sub_008057e0(void) { *(int*)((char*)this + 0) = (int)g_01f3dfb4; return this; }

// @baa 0x00805830
int UObject::sub_00805830(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}
