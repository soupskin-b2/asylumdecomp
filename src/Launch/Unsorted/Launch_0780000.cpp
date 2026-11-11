// Launch_0780000.cpp (part 1 of 4): 13 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Array.h"

struct C { C* sub_00788180(void); };

// @baa 0x00788180
C* C::sub_00788180(void) { return this; }

struct C_00788190 { void sub_00788190(int a0); };

// @baa 0x00788190
void C_00788190::sub_00788190(int a0) { *(int*)((char*)this + 16) = a0; }

extern char g_01f16100[];
struct C_0078bce0 { C_0078bce0* sub_0078bce0(void); };

// @baa 0x0078bce0
C_0078bce0* C_0078bce0::sub_0078bce0(void) { *(int*)((char*)this + 0) = (int)g_01f16100; return this; }

struct E { BYTE Bytes[48]; };

struct S {
    TArray<E> Items; // 0x00
    const E* sub_0078bcf0(INT Index) const;
};

// @baa 0x0078bcf0
const E* S::sub_0078bcf0(INT Index) const
{
    return &Items(Index);
}

struct S_0078bdd0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0078bdd0(INT Index);
};

// @baa 0x0078bdd0
DWORD* S_0078bdd0::sub_0078bdd0(INT Index)
{
    return &Items(Index);
}

struct E_0078bf30 { BYTE Bytes[100]; };

struct S_0078bf30 {
    TArray<E_0078bf30> Items; // 0x00
    E_0078bf30* sub_0078bf30(INT Index);
};

// @baa 0x0078bf30
E_0078bf30* S_0078bf30::sub_0078bf30(INT Index)
{
    return &Items(Index);
}

struct E_0078bf80 { BYTE Bytes[100]; };

struct S_0078bf80 {
    TArray<E_0078bf80> Items; // 0x00
    const E_0078bf80* sub_0078bf80(INT Index) const;
};

// @baa 0x0078bf80
const E_0078bf80* S_0078bf80::sub_0078bf80(INT Index) const
{
    return &Items(Index);
}

struct S_0078bfd0 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_0078bfd0(INT Index) const;
};

// @baa 0x0078bfd0
const DWORD* S_0078bfd0::sub_0078bfd0(INT Index) const
{
    return &Items(Index);
}

typedef uint size_t;

struct C_0078c020 {
    int sub_0078c020(int);
    int sub_007888a0(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x0078c020
int C_0078c020::sub_0078c020(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_0078c020 *)(this))->sub_007888a0(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0x1c),0,param_2 * 0x1c);
  return iVar1;
}

struct C_0078c060{
int sub_0078c060(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x0078c060
int C_0078c060::sub_0078c060(undefined4*param_2)
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

struct D { void sub_005c8330(); };

extern D g_026b526c;
// @baa 0x0078f220
void sub_0078f220() { g_026b526c.sub_005c8330(); }

void sub_004025d0(void*);
struct D_0078faf0 { void* p; ~D_0078faf0(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_0078faf0 { void* Data; int Num; int Max; void sub_0078faf0(); };

// @baa 0x0078faf0
void C_0078faf0::sub_0078faf0() {
    void* t = Data;
    {
    D_0078faf0 d;
    Max = 0; Num = 0;
    d.~D_0078faf0();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct D_0078fc10 { void* p; ~D_0078fc10(){ if(0) sub_004025d0(p);} };

struct C_0078fc10 { void* Data; int Num; int Max; void sub_0078fc10(); };

// @baa 0x0078fc10
void C_0078fc10::sub_0078fc10() {
    void* t = Data;
    {
    D_0078fc10 d;
    Max = 0; Num = 0;
    d.~D_0078fc10();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}
