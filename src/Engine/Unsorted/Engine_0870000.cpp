// Engine_0870000.cpp: 14 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Array.h"

struct C{
int sub_00878490(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x00878490
int C::sub_00878490(undefined4*param_2)
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

struct S {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_008784f0(INT Index);
};

// @baa 0x008784f0
DWORD* S::sub_008784f0(INT Index)
{
    return &Items(Index);
}

struct C_00878540{
int sub_00878540(undefined4*);
};

// @baa 0x00878540
int C_00878540::sub_00878540(undefined4*param_2)
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

struct C_008785a0 {
    int sub_008785a0(int);
};

// @baa 0x008785a0
int C_008785a0::sub_008785a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

// @baa 0x008785b0
void __stdcall sub_008785b0(int a0, int a1) {  }

struct C_008785c0 {
    int sub_008785c0(int);
};

// @baa 0x008785c0
int C_008785c0::sub_008785c0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_008785d0 {
    int sub_008785d0(int);
};

// @baa 0x008785d0
int C_008785d0::sub_008785d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x008785e0
void __stdcall sub_008785e0(int a0, int a1) {  }

struct C_0087f910 { C_0087f910* sub_0087f910(void); };

// @baa 0x0087f910
C_0087f910* C_0087f910::sub_0087f910(void) { return this; }

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_0087f980 { void* Data; int Num; int Max; void sub_0087f980(); };

// @baa 0x0087f980
void C_0087f980::sub_0087f980() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

extern TArray<int> g_026a1ca4;
struct C_0087f9e0 {
    int sub_0087f9e0();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x0087f9e0
int C_0087f9e0::sub_0087f9e0()
{
    return g_026a1ca4(Index);
}

struct C_0087fa40 {
    int sub_0087fa40();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x0087fa40
int C_0087fa40::sub_0087fa40()
{
    return g_026a1ca4(Index);
}

struct C_0087faa0 {
    int sub_0087faa0();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x0087faa0
int C_0087faa0::sub_0087faa0()
{
    return g_026a1ca4(Index);
}

struct C_0087fb00 {
    int sub_0087fb00();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x0087fb00
int C_0087fb00::sub_0087fb00()
{
    return g_026a1ca4(Index);
}
