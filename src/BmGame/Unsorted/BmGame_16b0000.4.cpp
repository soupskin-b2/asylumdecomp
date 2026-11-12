// BmGame_16b0000.cpp (part 4 of 4): 6 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C {
    void sub_016bde60(int);
};

int sub_0053df70(...);
// @baa 0x016bde60
void C::sub_016bde60(int param_2)
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

struct C_016bdfe0 {
    void sub_016bdfe0(int);
};

// @baa 0x016bdfe0
void C_016bdfe0::sub_016bdfe0(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 8,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_016be240 {
    void sub_016be240(int);
};

// @baa 0x016be240
void C_016be240::sub_016be240(int param_2)
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

struct C_Inner_0230b
{
    DWORD A, B, C;
};

struct C_P_0230b
{
    DWORD V0;
    C_Inner_0230b* P;
};

struct C_016b0230b
{
    DWORD A, B, C, D;
    C_016b0230b* sub_016b0230(C_P_0230b* P);
};

// @baa 0x016b0230
C_016b0230b* C_016b0230b::sub_016b0230(C_P_0230b* P)
{
    C_016b0230b* Self = this;
    C_P_0230b* PP = P;
    DWORD V0 = PP->V0;
    Self->A = V0;
    C_Inner_0230b* Q = PP->P;
    Self->B = Q->A;
    Self->C = Q->B;
    Self->D = Q->C;
    return Self;
}

struct C_016b0500b
{
    DWORD A, B, C, D;
    C_016b0500b* sub_016b0500(DWORD* P);
};

// @baa 0x016b0500
C_016b0500b* C_016b0500b::sub_016b0500(DWORD* P)
{
    C_016b0500b* Self = this;
    Self->A = P[0];
    P = P + 1;
    Self->B = P[0];
    Self->C = P[1];
    Self->D = P[2];
    return Self;
}

struct C_016be2b0
{
    DWORD* sub_016be2b0(INT Arg); /* 0x016be2b0 */
};

// @baa 0x016be2b0
DWORD* C_016be2b0::sub_016be2b0(INT Arg)
{
    void* P = (void*)((BYTE*)this + 0x30);
    void* V = *(void**)((BYTE*)P + 4);
    INT M = -(INT)(V == NULL);
    INT N = *(INT*)((BYTE*)this + 0x38);
    INT Idx = Arg & (N - 1);
    void* Base = (void*)((M & (INT)P) | (INT)V);
    return (DWORD*)((BYTE*)Base + Idx * 4);
}
