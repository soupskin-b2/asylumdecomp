// CommonEditor_1750000.cpp: 25 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_01746c70(void);
// @baa 0x01750210
int UTexture2D::sub_01750210(void)
{
    int param_1 = (int)this;

  sub_01746c70();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_01746cd0(void);
// @baa 0x01750230
int UTexture2D::sub_01750230(void)
{
    int param_1 = (int)this;

  sub_01746cd0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view {
    int sub_010a4ce0();
};

int sub_0053dfa0(...);
// @baa 0x01750250
undefined4 UTexture2D::sub_01750250(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view *)(((char *)this + 4)))->sub_010a4ce0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C {
    undefined4 * sub_01750420(undefined4 *);
    int sub_01750280(int);
};

// @baa 0x01750420
undefined4 * C::sub_01750420(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C *)(((char *)this + 4)))->sub_01750280((int)(param_2 + 1));
  return param_1;
}

void sub_0174e6e0();
// @baa 0x01750530
void sub_01750530(void) { sub_0174e6e0(); }

int sub_0174e6e0(...);
// @baa 0x017505b0
void sub_017505b0(undefined4 param_1, undefined4 param_2, undefined4 param_3, code * param_4)
{
  char cVar1;
  
  cVar1 = (*param_4)(param_2,param_1);
  if (cVar1 != '\0') {
    sub_0174e6e0(param_2,param_1);
  }
  cVar1 = (*param_4)(param_3,param_2);
  if (cVar1 != '\0') {
    sub_0174e6e0(param_3,param_2);
  }
  cVar1 = (*param_4)(param_2,param_1);
  if (cVar1 != '\0') {
    sub_0174e6e0(param_2,param_1);
  }
  return;
}

int sub_0174e8a0(...);
// @baa 0x01750610
void sub_01750610(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  sub_0174e8a0(param_1,param_2,param_3,0,0);
  return;
}

struct S {
    void sub_0174e0e0();
    void sub_01750ab0();
};

// @baa 0x01750ab0
void S::sub_01750ab0() {
    sub_0174e0e0();
}

void sub_0174e150();
// @baa 0x01750ac0
void sub_01750ac0(void) { sub_0174e150(); }

struct C_view_01753960 {
    int sub_0093d4e0(int);
};

// @baa 0x01753960
void USkeletalMeshComponent::sub_01753960(void)
{
    int param_1 = (int)this;
  ((C_view_01753960 *)(this))->sub_0093d4e0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c));
  return;
}

// @baa 0x01753970
int UTexture2D::sub_01753970(void)
{
    int param_1 = (int)this;

  sub_01746c70();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x01753990
int UTexture2D::sub_01753990(void)
{
    int param_1 = (int)this;

  sub_01746cd0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_01753a30 {
    undefined4 * sub_01753a30(undefined4 *);
    int sub_01750280(int);
};

// @baa 0x01753a30
undefined4 * C_01753a30::sub_01753a30(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_01753a30 *)(((char *)this + 4)))->sub_01750280(param_2[1]);
  return param_1;
}

struct C_01753b00 {
    undefined4 * sub_01753b00(undefined4 *);
    int sub_01750280(int);
};

// @baa 0x01753b00
undefined4 * C_01753b00::sub_01753b00(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_01753b00 *)(((char *)this + 4)))->sub_01750280(param_2[1]);
  param_1[0x10] = 0xffffffff;
  return param_1;
}

int sub_01750440(...);
// @baa 0x01753b30
void sub_01753b30(int param_1, int param_2, undefined4 param_3)
{
  sub_01750440(param_1,param_2,param_2 - param_1 >> 4,param_3);
  return;
}

int sub_01750540(...);
// @baa 0x01753bc0
void sub_01753bc0(int param_1, int param_2, undefined4 param_3)
{
  if (1 < (param_2 - param_1) / 0x18) {
    sub_01750540(param_1,param_2,param_3,0,0);
  }
  return;
}

// @baa 0x01753cb0
void sub_01753cb0(int param_1, int param_2, int param_3)
{
  if ((param_1 != param_2) && (param_2 != param_3)) {
    sub_0174e8a0(param_1,param_2,param_3,0,0);
  }
  return;
}

void sub_0174e0e0();
// @baa 0x01753d30
void sub_01753d30(void) { sub_0174e0e0(); }

// @baa 0x01753d40
void sub_01753d40(void) { sub_0174e150(); }

struct S_01753d50 {
    void sub_01750ad0();
    void sub_0174edd0();
    void sub_01753d50();
};

// @baa 0x01753d50
void S_01753d50::sub_01753d50() {
    sub_01750ad0();
    sub_0174edd0();
}

void sub_01754f70();
// @baa 0x01755270
void sub_01755270(void) { sub_01754f70(); }

int sub_00936580(void);
// @baa 0x01755280
int USkeletalMeshComponent::sub_01755280(void)
{
    int param_1 = (int)this;

  sub_00936580();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  return param_1;
}

struct C_01755850 {
    void sub_01755850();
    int sub_017539b0(int);
};

// @baa 0x01755850
void C_01755850::sub_01755850(void)
{
    int param_1 = (int)this;
  ((C_01755850 *)((*(char **)((char *)this + 0x10))))->sub_017539b0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

int sub_01746c10(void);
// @baa 0x01755870
int UTexture2D::sub_01755870(void)
{
    int param_1 = (int)this;

  sub_01746c10();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct Unknown_01752350
{
    char _pad[0x238];
    int Field238;

    void sub_01751670();
    void sub_01752350(int Arg);
};

// @baa 0x01752350
void Unknown_01752350::sub_01752350(int Arg)
{
    Field238 = (Field238 == 0);
    sub_01751670();
}
