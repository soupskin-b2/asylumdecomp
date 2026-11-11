// UnAnimTree.cpp (part 3 of 4): 6 functions
// Placed here by: neighbours 6.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C {
    void sub_00c57500(int);
};

int sub_0053df70(...);
// @baa 0x00c57500
void C::sub_00c57500(int param_2)
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

struct C_00c575c0 {
    void sub_00c575c0(int);
};

// @baa 0x00c575c0
void C_00c575c0::sub_00c575c0(int param_2)
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

struct C_00c576c0 {
    void sub_00c576c0(int);
};

// @baa 0x00c576c0
void C_00c576c0::sub_00c576c0(int param_2)
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

int sub_0040fcc0(void);
int sub_0053dfa0(...);
// @baa 0x00c63550
undefined4 UObject::sub_00c63550(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00c6aa10 {
    undefined4 sub_00c6aa10(byte);
};

int sub_00921250(void);
// @baa 0x00c6aa10
undefined4 C_00c6aa10::sub_00c6aa10(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00921250();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00c6aa30 {
    undefined4 sub_00c6aa30(byte);
};

// @baa 0x00c6aa30
undefined4 C_00c6aa30::sub_00c6aa30(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00921250();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
