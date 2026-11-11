// D3D9MeshUtils.cpp: 19 functions
// Placed here by: neighbours 18, callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Array.h"

struct C{
int sub_00ea1470(undefined4*);
};

int sub_0053d240(...);
int sub_0053df70(...);
// @baa 0x00ea1470
int C::sub_00ea1470(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar3;
int iVar2;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],8);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3)){
iVar3=sub_0053df70(*param_1,iVar3*8,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+iVar2*8);
if(puVar1!=(undefined4*)0x0){
*puVar1=*param_2;
puVar1[1]=param_2[1];
}
return iVar2;
}

struct C_00ea14d0 {
    int sub_00ea14d0(int);
};

// @baa 0x00ea14d0
int C_00ea14d0::sub_00ea14d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

// @baa 0x00ea14e0
void __stdcall sub_00ea14e0(int a0, int a1) {  }

struct C_00ea14f0 {
    int sub_00ea14f0(int);
};

// @baa 0x00ea14f0
int C_00ea14f0::sub_00ea14f0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x60 + *param_1;
}

// @baa 0x00ea1500
void __stdcall sub_00ea1500(int a0, int a1) {  }

// @baa 0x00ea1510
void __stdcall sub_00ea1510(int a0, int a1) {  }

// @baa 0x00ea1520
void __stdcall sub_00ea1520(int a0, int a1) {  }

// @baa 0x00ea1530
void __stdcall sub_00ea1530(int a0, int a1) {  }

struct C_00ea1540 {
    int sub_00ea1540(int);
};

// @baa 0x00ea1540
int C_00ea1540::sub_00ea1540(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0xb0 + *param_1;
}

// @baa 0x00ea1550
void __stdcall sub_00ea1550(int a0, int a1) {  }

int sub_0053de70(...);
// @baa 0x00ea1560
undefined4 sub_00ea1560(int param_1, int param_2)
{
  int iVar1;
  
  if (*(int *)(param_1 + 0x88) == *(int *)(param_2 + 0x88)) {
    iVar1 = sub_0053de70(param_2,param_1,*(int *)(param_1 + 0x88) * 8);
    if (iVar1 == 0) {
      return 1;
    }
  }
  return 0;
}

struct C_00ea15e0 { int sub_00ea15e0(void); };

// @baa 0x00ea15e0
int C_00ea15e0::sub_00ea15e0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00ea1630{
int sub_00ea1630(byte);
};

int sub_0053dfa0(...);
// @baa 0x00ea1630
int C_00ea1630::sub_00ea1630(byte param_2)
{
int param_1=(int)this;

int*piVar1;

piVar1=*(int**)(0x90+param_1);
if(piVar1!=(int*)0x0){
(*(int(__stdcall**)(int))(*piVar1+8))((int)(piVar1));
}
if((1&param_2)!=0){
sub_0053dfa0(param_1);
}
return param_1;
}

struct C_00ea1690 {
    int sub_00ea1690(int);
};

// @baa 0x00ea1690
int C_00ea1690::sub_00ea1690(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x9c + *param_1;
}

struct C_00ea16a0 {
    int sub_00ea16a0(int);
};

// @baa 0x00ea16a0
int C_00ea16a0::sub_00ea16a0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x9c + *param_1;
}

struct C_00ea16b0 {
    int sub_00ea16b0();
};

// @baa 0x00ea16b0
int C_00ea16b0::sub_00ea16b0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00ea16d0 {
    int sub_00ea16d0(int);
};

// @baa 0x00ea16d0
int C_00ea16d0::sub_00ea16d0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x9c + *param_1;
}

struct E { BYTE Bytes[156]; };

struct S {
    TArray<E> Items; // 0x00
    E* sub_00ea16e0(INT Index);
};

// @baa 0x00ea16e0
E* S::sub_00ea16e0(INT Index)
{
    return &Items(Index);
}

struct C_00ea1730 {
    int sub_00ea1730();
};

// @baa 0x00ea1730
int C_00ea1730::sub_00ea1730(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}
