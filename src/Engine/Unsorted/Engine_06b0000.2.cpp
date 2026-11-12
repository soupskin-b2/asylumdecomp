// Engine_06b0000.cpp (part 2 of 3): 9 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

extern char g_01ecdfc8[];
// @baa 0x006b42d0
void ULensFlare::sub_006b42d0(void) { *(int*)((char*)this + 0) = (int)g_01ecdfc8; }

struct C { void sub_006b4c40(void); };

// @baa 0x006b4c40
void C::sub_006b4c40(void) { *(int*)((char*)this + 0) = (int)g_01ecdfc8; }

struct C_006b77e0 {
    void sub_006b77e0(int);
};

int sub_0053df70(...);
// @baa 0x006b77e0
void C_006b77e0::sub_006b77e0(int param_2)
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

struct C_006bcca0 {
    void sub_006bcca0(int);
};

// @baa 0x006bcca0
void C_006bcca0::sub_006bcca0(int param_2)
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

struct C_006bcce0 {
    void sub_006bcce0(int);
};

// @baa 0x006bcce0
void C_006bcce0::sub_006bcce0(int param_2)
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

struct C_006bce10 {
    void sub_006bce10(int);
};

// @baa 0x006bce10
void C_006bce10::sub_006bce10(int param_2)
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

struct C_006bcfc0 {
    void sub_006bcfc0(int);
};

// @baa 0x006bcfc0
void C_006bcfc0::sub_006bcfc0(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x14,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_006bd000 {
    void sub_006bd000(int);
};

// @baa 0x006bd000
void C_006bd000::sub_006bd000(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 << 5,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_006b9130
{
    char pad_0[0x4];
    INT Value_4;
    INT Value_8;
    INT Value_c;

    C_006b9130* sub_006b9130();
};

// @baa 0x006b9130
C_006b9130* C_006b9130::sub_006b9130()
{
    Value_4 = 0;
    Value_8 = 0;
    Value_c = 0;
    return this;
}
