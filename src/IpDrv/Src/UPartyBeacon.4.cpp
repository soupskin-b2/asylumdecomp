// UPartyBeacon.cpp (part 4 of 4): 10 functions
// Placed here by: class 5.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_0053df70(...);
// @baa 0x00e2fb60
void UPartyBeaconHost::sub_00e2fb60(int param_2)
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

// @baa 0x00e2fba0
void UPartyBeaconHost::sub_00e2fba0(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x1c,8);
      *param_1 = iVar1;
    }
  }
  return;
}

// @baa 0x00e333c0
void UPartyBeaconHost::sub_00e333c0(int param_2)
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

// @baa 0x00e33400
void UPartyBeaconHost::sub_00e33400(int param_2)
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

// @baa 0x00e335f0
void UPartyBeaconHost::sub_00e335f0(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 << 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

// @baa 0x00e348c0
int sub_00e348c0(void) { return 1; }

int sub_005c7a70(...);
int sub_00e34810(void);
// @baa 0x00e348e0
undefined4 UPartyBeacon::sub_00e348e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00e34810();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x50);
  }
  return param_1;
}

int sub_00e34900(void);
extern undefined * g_020f4c78;
extern undefined * g_020f4c90;
// @baa 0x00e38150
undefined4 * UPartyBeacon::sub_00e38150(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00e34900();
  *param_1 = (undefined4)(&g_020f4c90);
  param_1[0xc] = (undefined4)(&g_020f4c78);
  return param_1;
}

void sub_00e3e280();
// @baa 0x00e3f490
void sub_00e3f490(void) { sub_00e3e280(); }

struct S_00e2d540 {
    int A, B, C;
    S_00e2d540& sub_00e2d540(const S_00e2d540& S);
};

// @baa 0x00e2d540
S_00e2d540& S_00e2d540::sub_00e2d540(const S_00e2d540& S)
{
    A = S.A;
    B = S.B;
    C = S.C;
    return *this;
}
