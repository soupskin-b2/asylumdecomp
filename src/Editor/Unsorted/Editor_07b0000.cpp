// Editor_07b0000.cpp: 13 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Array.h"

struct S {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_007b1e40(INT Index);
};

// @baa 0x007b1e40
DWORD* S::sub_007b1e40(INT Index)
{
    return &Items(Index);
}

struct E { BYTE Bytes[64]; };

struct S_007b1e90 {
    TArray<E> Items; // 0x00
    const E* sub_007b1e90(INT Index) const;
};

// @baa 0x007b1e90
const E* S_007b1e90::sub_007b1e90(INT Index) const
{
    return &Items(Index);
}

typedef uint size_t;

struct C {
    int sub_007b1ee0(int);
    int sub_007a8c20(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x007b1ee0
int C::sub_007b1ee0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C *)(this))->sub_007a8c20(param_2);
  sub_01a37612((void *)(iVar1 * 0x40 + *param_1),0,param_2 << 6);
  return iVar1;
}

struct S_007b1f10 {
    TArray<QWORD> Items; // 0x00
    const QWORD* sub_007b1f10(INT Index) const;
};

// @baa 0x007b1f10
const QWORD* S_007b1f10::sub_007b1f10(INT Index) const
{
    return &Items(Index);
}

struct S_007b1f60 {
    TArray<QWORD> Items; // 0x00
    const QWORD* sub_007b1f60(INT Index) const;
};

// @baa 0x007b1f60
const QWORD* S_007b1f60::sub_007b1f60(INT Index) const
{
    return &Items(Index);
}

struct C_007b1fb0 {
    int sub_007b1fb0(int);
    int sub_007a8cd0(int);
};

// @baa 0x007b1fb0
int C_007b1fb0::sub_007b1fb0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_007b1fb0 *)(this))->sub_007a8cd0(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 8),0,param_2 * 8);
  return iVar1;
}

struct E_007b1ff0 { BYTE Bytes[60]; };

struct S_007b1ff0 {
    TArray<E_007b1ff0> Items; // 0x00
    E_007b1ff0* sub_007b1ff0(INT Index);
};

// @baa 0x007b1ff0
E_007b1ff0* S_007b1ff0::sub_007b1ff0(INT Index)
{
    return &Items(Index);
}

struct E_007b2090 { BYTE Bytes[12]; };

struct S_007b2090 {
    TArray<E_007b2090> Items; // 0x00
    E_007b2090* sub_007b2090(INT Index);
};

// @baa 0x007b2090
E_007b2090* S_007b2090::sub_007b2090(INT Index)
{
    return &Items(Index);
}

struct C_007b20e0 {
    int sub_007b20e0(int);
    int sub_007a8e00(int);
};

// @baa 0x007b20e0
int C_007b20e0::sub_007b20e0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_007b20e0 *)(this))->sub_007a8e00(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0xc),0,param_2 * 0xc);
  return iVar1;
}

struct S_007b2120 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_007b2120(INT Index);
};

// @baa 0x007b2120
QWORD* S_007b2120::sub_007b2120(INT Index)
{
    return &Items(Index);
}

struct S_007b2170 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_007b2170(INT Index);
};

// @baa 0x007b2170
DWORD* S_007b2170::sub_007b2170(INT Index)
{
    return &Items(Index);
}

struct C_007b21c0{
int sub_007b21c0(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x007b21c0
int C_007b21c0::sub_007b21c0(undefined4*param_2)
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

struct E_007b2220 { BYTE Bytes[368]; };

struct S_007b2220 {
    TArray<E_007b2220> Items; // 0x00
    E_007b2220* sub_007b2220(INT Index);
};

// @baa 0x007b2220
E_007b2220* S_007b2220::sub_007b2220(INT Index)
{
    return &Items(Index);
}
