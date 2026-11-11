// Editor_0cb0000.cpp: 18 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Array.h"

struct C{
void sub_00cb43c0();
};

extern undefined4*g_026b0d94;
// @baa 0x00cb43c0
void C::sub_00cb43c0(void)
{
int*param_1=(int*)this;

int iVar1;

iVar1=*param_1;
*param_1=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x214))((int)(iVar1));
}
return;
}

struct E { BYTE Bytes[12]; };

struct S {
    TArray<E> Items; // 0x00
    E* sub_00cb43e0(INT Index);
};

// @baa 0x00cb43e0
E* S::sub_00cb43e0(INT Index)
{
    return &Items(Index);
}

struct FFaceFXElement
{
	INT X;    // 0x00
	INT Y;    // 0x04
	INT Z;    // 0x08
	INT W;    // 0x0c
	INT Unk10;// 0x10
};

struct UFxRenderWidget
{
	TArray<FFaceFXElement> BoneArray; // 0x00
	FFaceFXElement* sub_00cb4430(INT Index);
};

// @baa 0x00cb4430
FFaceFXElement* UFxRenderWidget::sub_00cb4430(INT Index)
{
	return &BoneArray(Index);
}

struct E_00cb4480 { BYTE Bytes[24]; };

struct S_00cb4480 {
    TArray<E_00cb4480> Items; // 0x00
    E_00cb4480* sub_00cb4480(INT Index);
};

// @baa 0x00cb4480
E_00cb4480* S_00cb4480::sub_00cb4480(INT Index)
{
    return &Items(Index);
}

typedef uint size_t;

struct C_00cb44d0 {
    int sub_00cb44d0(int);
    int sub_00cb0d20(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x00cb44d0
int C_00cb44d0::sub_00cb44d0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00cb44d0 *)(this))->sub_00cb0d20(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0x18),0,param_2 * 0x18);
  return iVar1;
}

struct S_00cb4510 {
    TArray<QWORD> Items; // 0x00
    const QWORD* sub_00cb4510(INT Index) const;
};

// @baa 0x00cb4510
const QWORD* S_00cb4510::sub_00cb4510(INT Index) const
{
    return &Items(Index);
}

struct C_00cb4560{
int sub_00cb4560(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x00cb4560
int C_00cb4560::sub_00cb4560(undefined4*param_2)
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

struct S_00cb4620 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00cb4620(INT Index);
};

// @baa 0x00cb4620
DWORD* S_00cb4620::sub_00cb4620(INT Index)
{
    return &Items(Index);
}

struct C_00cb4670{
int sub_00cb4670(undefined4*);
};

// @baa 0x00cb4670
int C_00cb4670::sub_00cb4670(undefined4*param_2)
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

struct S_00cb46d0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00cb46d0(INT Index);
};

// @baa 0x00cb46d0
DWORD* S_00cb46d0::sub_00cb46d0(INT Index)
{
    return &Items(Index);
}

struct C_00cb4720{
int sub_00cb4720(undefined4*);
};

// @baa 0x00cb4720
int C_00cb4720::sub_00cb4720(undefined4*param_2)
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

struct C_00cb4780 {
    void sub_00cb4780(int, int);
    int sub_00cb0f90(int, int);
};

// @baa 0x00cb4780
void C_00cb4780::sub_00cb4780(int param_2, int param_3)
{
    int * param_1 = (int *)this;
  ((C_00cb4780 *)(this))->sub_00cb0f90(param_2, param_3);
  sub_01a37612((void *)(*param_1 + param_2 * 4),0,param_3 * 4);
  return;
}

struct E_00cb47c0 { BYTE Bytes[60]; };

struct S_00cb47c0 {
    TArray<E_00cb47c0> Items; // 0x00
    E_00cb47c0* sub_00cb47c0(INT Index);
};

// @baa 0x00cb47c0
E_00cb47c0* S_00cb47c0::sub_00cb47c0(INT Index)
{
    return &Items(Index);
}

struct C_00cb4810 {
    void sub_00cb4810(int, int);
    int sub_00cb10e0(int, int);
};

// @baa 0x00cb4810
void C_00cb4810::sub_00cb4810(int param_2, int param_3)
{
    int * param_1 = (int *)this;
  ((C_00cb4810 *)(this))->sub_00cb10e0(param_2, param_3);
  sub_01a37612((void *)(*param_1 + param_2 * 0x3c),0,param_3 * 0x3c);
  return;
}

struct E_00cb4850 { BYTE Bytes[16]; };

struct S_00cb4850 {
    TArray<E_00cb4850> Items; // 0x00
    E_00cb4850* sub_00cb4850(INT Index);
};

// @baa 0x00cb4850
E_00cb4850* S_00cb4850::sub_00cb4850(INT Index)
{
    return &Items(Index);
}

struct S_00cb48a0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00cb48a0(INT Index);
};

// @baa 0x00cb48a0
DWORD* S_00cb48a0::sub_00cb48a0(INT Index)
{
    return &Items(Index);
}

struct C_00cb48f0{
int sub_00cb48f0(undefined4*);
};

// @baa 0x00cb48f0
int C_00cb48f0::sub_00cb48f0(undefined4*param_2)
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

struct S_00cb49b0 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_00cb49b0(INT Index) const;
};

// @baa 0x00cb49b0
const DWORD* S_00cb49b0::sub_00cb49b0(INT Index) const
{
    return &Items(Index);
}
