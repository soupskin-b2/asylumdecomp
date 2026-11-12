// UnrealEd_08b0000.cpp: 23 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct E { BYTE Bytes[64]; };

struct S {
    TArray<E> Items; // 0x00
    E* sub_008b2590(INT Index);
};

// @baa 0x008b2590
E* S::sub_008b2590(INT Index)
{
    return &Items(Index);
}

struct S_008b25e0 {
    TArray<E> Items; // 0x00
    const E* sub_008b25e0(INT Index) const;
};

// @baa 0x008b25e0
const E* S_008b25e0::sub_008b25e0(INT Index) const
{
    return &Items(Index);
}

typedef uint size_t;

struct C {
    void sub_008b2630(int, int);
    int sub_008ad700(int, int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x008b2630
void C::sub_008b2630(int param_2, int param_3)
{
    int * param_1 = (int *)this;
  ((C *)(this))->sub_008ad700(param_2, param_3);
  sub_01a37612((void *)(param_2 * 0x40 + *param_1),0,param_3 << 6);
  return;
}

struct C_008b2660 {
    int sub_008b2660(int);
    int sub_008ad690(int);
};

// @baa 0x008b2660
int C_008b2660::sub_008b2660(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_008b2660 *)(this))->sub_008ad690(param_2);
  sub_01a37612((void *)(iVar1 * 0x40 + *param_1),0,param_2 << 6);
  return iVar1;
}

struct E_008b2690 { BYTE Bytes[36]; };

struct S_008b2690 {
    TArray<E_008b2690> Items; // 0x00
    E_008b2690* sub_008b2690(INT Index);
};

// @baa 0x008b2690
E_008b2690* S_008b2690::sub_008b2690(INT Index)
{
    return &Items(Index);
}

struct E_008b26e0 { BYTE Bytes[36]; };

struct S_008b26e0 {
    TArray<E_008b26e0> Items; // 0x00
    const E_008b26e0* sub_008b26e0(INT Index) const;
};

// @baa 0x008b26e0
const E_008b26e0* S_008b26e0::sub_008b26e0(INT Index) const
{
    return &Items(Index);
}

struct S_008b2730 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_008b2730(INT Index);
};

// @baa 0x008b2730
DWORD* S_008b2730::sub_008b2730(INT Index)
{
    return &Items(Index);
}

struct S_008b2780 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_008b2780(INT Index) const;
};

// @baa 0x008b2780
const DWORD* S_008b2780::sub_008b2780(INT Index) const
{
    return &Items(Index);
}

struct C_008b2850{
int sub_008b2850(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x008b2850
int C_008b2850::sub_008b2850(undefined4*param_2)
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

struct E_008b2d20 { BYTE Bytes[12]; };

struct S_008b2d20 {
    TArray<E_008b2d20> Items; // 0x00
    const E_008b2d20* sub_008b2d20(INT Index) const;
};

// @baa 0x008b2d20
const E_008b2d20* S_008b2d20::sub_008b2d20(INT Index) const
{
    return &Items(Index);
}

struct S_008b2d70 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_008b2d70(INT Index);
};

// @baa 0x008b2d70
QWORD* S_008b2d70::sub_008b2d70(INT Index)
{
    return &Items(Index);
}

struct S_008b2dc0 {
    TArray<QWORD> Items; // 0x00
    const QWORD* sub_008b2dc0(INT Index) const;
};

// @baa 0x008b2dc0
const QWORD* S_008b2dc0::sub_008b2dc0(INT Index) const
{
    return &Items(Index);
}

struct E_008b2e10 { BYTE Bytes[24]; };

struct S_008b2e10 {
    TArray<E_008b2e10> Items; // 0x00
    E_008b2e10* sub_008b2e10(INT Index);
};

// @baa 0x008b2e10
E_008b2e10* S_008b2e10::sub_008b2e10(INT Index)
{
    return &Items(Index);
}

struct C_008b2e60 {
    int sub_008b2e60(int);
    int sub_008add10(int);
};

// @baa 0x008b2e60
int C_008b2e60::sub_008b2e60(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_008b2e60 *)(this))->sub_008add10(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0x18),0,param_2 * 0x18);
  return iVar1;
}

struct C_008b2ea0{
int sub_008b2ea0(undefined4*);
};

// @baa 0x008b2ea0
int C_008b2ea0::sub_008b2ea0(undefined4*param_2)
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

struct C_008b2f00{
int sub_008b2f00(undefined4*);
};

// @baa 0x008b2f00
int C_008b2f00::sub_008b2f00(undefined4*param_2)
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

struct S_008b2f60 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_008b2f60(INT Index);
};

// @baa 0x008b2f60
DWORD* S_008b2f60::sub_008b2f60(INT Index)
{
    return &Items(Index);
}

struct C_008b2fb0{
int sub_008b2fb0(undefined4*);
};

// @baa 0x008b2fb0
int C_008b2fb0::sub_008b2fb0(undefined4*param_2)
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

extern "C" void sub_008adf00();
struct CNode {
    // 0x00
    void* Unk00;
    // 0x04
    void* Unk04;
    void sub_008b3040();
};

// @baa 0x008b3040
void CNode::sub_008b3040()
{
    Unk04 = *(void**)((char*)Unk04 + 0x34);
    sub_008adf00();
}

struct C_008b3050{
int sub_008b3050(undefined4*);
};

// @baa 0x008b3050
int C_008b3050::sub_008b3050(undefined4*param_2)
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

struct S_008b30b0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_008b30b0(INT Index);
};

// @baa 0x008b30b0
DWORD* S_008b30b0::sub_008b30b0(INT Index)
{
    return &Items(Index);
}

struct C_008b3100{
int sub_008b3100(undefined4*);
};

// @baa 0x008b3100
int C_008b3100::sub_008b3100(undefined4*param_2)
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

/* Kit gaps: RF_PendingKill and UObject::HasAnyFlags (ObjectFlags is an FQWord here). */
#define RF_PendingKill ((QWORD)0x2000000000000000)

// @baa 0x008b1620
/* A sequence object is pending kill along with the sequence that holds it. */
UBOOL USequenceObject::IsPendingKill()
{
	return this->HasAnyFlags(RF_PendingKill) || (ParentSequence != NULL && ParentSequence->IsPendingKill());
}
