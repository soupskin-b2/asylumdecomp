// UnContentCookers.cpp (part 5 of 6): 9 functions
// Placed here by: neighbours 8, class 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C {
    void sub_01090520(int);
};

int sub_0053df70(...);
// @baa 0x01090520
void C::sub_01090520(int param_2)
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

struct C_01090560 {
    void sub_01090560(int);
};

// @baa 0x01090560
void C_01090560::sub_01090560(int param_2)
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

// @baa 0x01090f80
void UCookPackagesCommandlet::sub_01090f80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  undefined4 uVar1;
  
  param_1[3] = 0;
  if (param_1[4] != 0) {
    param_1[4] = 0;
    if (param_1[2] != 0) {
      uVar1 = sub_0053df70(param_1[2],0,8);
      param_1[2] = uVar1;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

struct C_01091060 {
    void sub_01091060(int);
};

// @baa 0x01091060
void C_01091060::sub_01091060(int param_2)
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

void sub_0040fcc0();
// @baa 0x01093a30
void sub_01093a30(void) { sub_0040fcc0(); }

// @baa 0x01093a40
void sub_01093a40(void) { sub_0040fcc0(); }

// @baa 0x01093a50
void sub_01093a50(void) { sub_0040fcc0(); }

struct C_01093a80 {
    void sub_01093a80(int);
};

// @baa 0x01093a80
void C_01093a80::sub_01093a80(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x38,8);
      *param_1 = iVar1;
    }
  }
  return;
}

int sub_0053dfa0(...);
int sub_010908f0(void);
// @baa 0x010977c0
undefined4 UTexture2D::sub_010977c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_010908f0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
