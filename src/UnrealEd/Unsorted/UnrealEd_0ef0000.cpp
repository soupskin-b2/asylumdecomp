// UnrealEd_0ef0000.cpp (part 1 of 2): 15 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Array.h"

struct E { BYTE Bytes[12]; };

struct S {
    TArray<E> Items; // 0x00
    E* sub_00ef4370(INT Index);
};

// @baa 0x00ef4370
E* S::sub_00ef4370(INT Index)
{
    return &Items(Index);
}

struct S_00ef43c0 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_00ef43c0(INT Index);
};

// @baa 0x00ef43c0
QWORD* S_00ef43c0::sub_00ef43c0(INT Index)
{
    return &Items(Index);
}

struct C { void sub_00ef4410(void); };

// @baa 0x00ef4410
void C::sub_00ef4410(void) { *(int*)((char*)this + 4) = 0; }

typedef uint size_t;

struct C_00ef4480 {
    int sub_00ef4480(int);
    int sub_00ef1220(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x00ef4480
int C_00ef4480::sub_00ef4480(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00ef4480 *)(this))->sub_00ef1220(param_2);
  sub_01a37612((void *)(iVar1 * 0x30 + *param_1),0,param_2 * 0x30);
  return iVar1;
}

struct C_00ef44c0{
int sub_00ef44c0(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x00ef44c0
int C_00ef44c0::sub_00ef44c0(undefined4*param_2)
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

struct E_00ef4520 { BYTE Bytes[96]; };

struct S_00ef4520 {
    TArray<E_00ef4520> Items; // 0x00
    E_00ef4520* sub_00ef4520(INT Index);
};

// @baa 0x00ef4520
E_00ef4520* S_00ef4520::sub_00ef4520(INT Index)
{
    return &Items(Index);
}

struct S_00ef45a0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00ef45a0(INT Index);
};

// @baa 0x00ef45a0
DWORD* S_00ef45a0::sub_00ef45a0(INT Index)
{
    return &Items(Index);
}

struct C_00ef45f0{
int sub_00ef45f0(undefined4*);
};

// @baa 0x00ef45f0
int C_00ef45f0::sub_00ef45f0(undefined4*param_2)
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

struct S_00ef4650 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00ef4650(INT Index);
};

// @baa 0x00ef4650
DWORD* S_00ef4650::sub_00ef4650(INT Index)
{
    return &Items(Index);
}

struct C_00efaa20 {
    int sub_00ef45f0(unsigned int *);
    int sub_00efaa20(unsigned int *);
};

// @baa 0x00efaa20
int C_00efaa20::sub_00efaa20(unsigned int *p)
{
    return this->sub_00ef45f0(p);
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00efaa70 { void* Data; int Num; int Max; void sub_00efaa70(); };

// @baa 0x00efaa70
void C_00efaa70::sub_00efaa70() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00efabf0{
int sub_00ef53c0(undefined4*);
int sub_00efabf0(undefined4*);
};

// @baa 0x00efabf0
int C_00efabf0::sub_00efabf0(undefined4*param_2)
{
return sub_00ef53c0(param_2);
}

struct C_00efacb0 {
    void sub_00efacb0(undefined4);
    int sub_00ef5540(int, int);
};

// @baa 0x00efacb0
void C_00efacb0::sub_00efacb0(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_00efacb0 *)(this))->sub_00ef5540(*(int *)(param_1 + 8) + *(int *)(param_1 + 4) * 0x14, param_2);
  return;
}

struct C_00efacd0 {
    void sub_00efacd0(undefined4);
    int sub_00ef5620(int, int);
};

// @baa 0x00efacd0
void C_00efacd0::sub_00efacd0(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_00efacd0 *)(this))->sub_00ef5620(*(int *)(param_1 + 8) + *(int *)(param_1 + 4) * 4, param_2);
  return;
}

struct C_00efad70 { void* Data; int Num; int Max; void sub_00efad70(); };

// @baa 0x00efad70
void C_00efad70::sub_00efad70() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}
