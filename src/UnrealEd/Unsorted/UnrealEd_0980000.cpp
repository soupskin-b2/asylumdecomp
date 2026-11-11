// UnrealEd_0980000.cpp: 26 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Array.h"

struct E { BYTE Bytes[12]; };

struct S {
    TArray<E> Items; // 0x00
    E* sub_009885b0(INT Index);
};

// @baa 0x009885b0
E* S::sub_009885b0(INT Index)
{
    return &Items(Index);
}

struct S_00988600 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00988600(INT Index);
};

// @baa 0x00988600
DWORD* S_00988600::sub_00988600(INT Index)
{
    return &Items(Index);
}

struct C{
int sub_00988650(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x00988650
int C::sub_00988650(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],4);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3)){
iVar3=sub_0053df70(*param_1,iVar3*4,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+4*iVar2);
if((undefined4*)0x0!=puVar1){
*puVar1=*param_2;
}
return iVar2;
}

struct E_009886b0 { BYTE Bytes[84]; };

struct S_009886b0 {
    TArray<E_009886b0> Items; // 0x00
    E_009886b0* sub_009886b0(INT Index);
};

// @baa 0x009886b0
E_009886b0* S_009886b0::sub_009886b0(INT Index)
{
    return &Items(Index);
}

struct S_00988750 {
    TArray<QWORD> Items; // 0x00
    const QWORD* sub_00988750(INT Index) const;
};

// @baa 0x00988750
const QWORD* S_00988750::sub_00988750(INT Index) const
{
    return &Items(Index);
}

// @baa 0x00988800
void __stdcall sub_00988800(int a0, int a1) {  }

struct C_00988b60 {
    int sub_00988b60(int);
};

// @baa 0x00988b60
int C_00988b60::sub_00988b60(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 4;
}

// @baa 0x00988b70
void __stdcall sub_00988b70(int a0, int a1) {  }

struct E_00988c10 { BYTE Bytes[40]; };

struct S_00988c10 {
    TArray<E_00988c10> Items; // 0x00
    E_00988c10* sub_00988c10(INT Index);
};

// @baa 0x00988c10
E_00988c10* S_00988c10::sub_00988c10(INT Index)
{
    return &Items(Index);
}

struct C_00988c60 {
    int sub_00988c60(int);
};

// @baa 0x00988c60
int C_00988c60::sub_00988c60(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

// @baa 0x00988c70
void __stdcall sub_00988c70(int a0, int a1) {  }

struct C_00988c80 {
    int sub_00988c80(int);
};

// @baa 0x00988c80
int C_00988c80::sub_00988c80(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

// @baa 0x00988c90
void __stdcall sub_00988c90(int a0, int a1) {  }

// @baa 0x00988ca0
void __stdcall sub_00988ca0(int a0, int a1) {  }

// @baa 0x00988cb0
void __stdcall sub_00988cb0(int a0, int a1) {  }

struct C_00988cc0 {
    int sub_00988cc0(int);
};

// @baa 0x00988cc0
int C_00988cc0::sub_00988cc0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_00988cd0 {
    int sub_00988cd0(int);
};

// @baa 0x00988cd0
int C_00988cd0::sub_00988cd0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00988ce0
void __stdcall sub_00988ce0(int a0, int a1) {  }

// @baa 0x00988cf0
void __stdcall sub_00988cf0(int a0, int a1) {  }

// @baa 0x00988d00
void __stdcall sub_00988d00(int a0, int a1) {  }

struct C_00988d10 {
    int sub_00988d10(int);
};

// @baa 0x00988d10
int C_00988d10::sub_00988d10(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x30 + *param_1;
}

struct C_00988d20 {
    int sub_00988d20(int);
};

// @baa 0x00988d20
int C_00988d20::sub_00988d20(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_00988d40 {
    int sub_00988d40(int);
};

// @baa 0x00988d40
int C_00988d40::sub_00988d40(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00988d50
void __stdcall sub_00988d50(int a0, int a1) {  }

struct C_00988dd0 {
    int sub_00988dd0(int);
};

// @baa 0x00988dd0
int C_00988dd0::sub_00988dd0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x0098b5f0
void sub_0098b5f0(void) {  }
