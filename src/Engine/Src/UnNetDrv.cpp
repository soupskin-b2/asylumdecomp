// UnNetDrv.cpp (part 1 of 3): 62 functions
// Placed here by: neighbours 49, callers 9, file 3, class 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C { void* Data; int Num; int Max; void sub_00c003b0(); };

// @baa 0x00c003b0
void C::sub_00c003b0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

int sub_005e1960(...);
int sub_005fc1a0(void);
int sub_0061e230(...);
extern undefined4 g_026667a8;
extern undefined4 g_026a4b40;
// @baa 0x00defbd0
void sub_00defbd0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  if (g_026a4b40 == 0) {
    g_026a4b40 = sub_0061e230(L"Core");
    sub_005fc1a0();
  }
  sub_005e1960(g_026a4b40,param_2,param_3,param_4,param_5,param_6,0,g_026667a8,0,0,0);
  return;
}

struct C_00df4470 {
    int sub_005f2bf0(int);
};

struct A {
    char pad[0x28];
    C_00df4470 *m_pC;
    int sub_00df4470();
};

// @baa 0x00df4470
int A::sub_00df4470()
{
    return m_pC->sub_005f2bf0(0xb4);
}

// @baa 0x00df4480
IMPLEMENT_CLASS_AT(UPackageMapLevel, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnNetDrv.cpp", 195);

// @baa 0x00df4590
int UPackageMapLevel::vf_000(void) { return 1; }

// @baa 0x00df45a0
bool UPackageMapLevel::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00df45e0
int UPackageMapSeekFree::vf_110(int a0) { return 1; }

// @baa 0x00df45f0
int UPackageMapSeekFree::vf_114(int a0) { return 1; }

// @baa 0x00df4600
int UPackageMapSeekFree::vf_000(void) { return 1; }

extern char g_01e8bd3c[];
struct C_00df4610 { C_00df4610* sub_00df4610(void); };

// @baa 0x00df4610
C_00df4610* C_00df4610::sub_00df4610(void) { *(int*)((char*)this + 0) = (int)g_01e8bd3c; return this; }

struct C_00df4e20 {
    void sub_00df4e20();
};

// @baa 0x00df4e20
void C_00df4e20::sub_00df4e20(void)
{
    int param_1 = (int)this;
  *(undefined4 *)(param_1 + 0x6c) = 15000;
  *(undefined4 *)(param_1 + 0x70) = 10000;
  return;
}

struct C_00dfaa60{
int sub_00dfaa60(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x00dfaa60
int C_00dfaa60::sub_00dfaa60(undefined4*param_2)
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

struct C_00dfab80{
int sub_00dfab80(undefined4*);
};

// @baa 0x00dfab80
int C_00dfab80::sub_00dfab80(undefined4*param_2)
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
    TArray<QWORD> Items; // 0x00
    QWORD* sub_00dfabe0(INT Index);
};

// @baa 0x00dfabe0
QWORD* S::sub_00dfabe0(INT Index)
{
    return &Items(Index);
}

struct S_00dfac80 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00dfac80(INT Index);
};

// @baa 0x00dfac80
DWORD* S_00dfac80::sub_00dfac80(INT Index)
{
    return &Items(Index);
}

struct T_00dfacd0 { BYTE b[4]; };

// @baa 0x00dfacd0
template T_00dfacd0& TArray<T_00dfacd0>::Last(INT);

struct S_00dfad30 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00dfad30(INT Index);
};

// @baa 0x00dfad30
DWORD* S_00dfad30::sub_00dfad30(INT Index)
{
    return &Items(Index);
}

struct C_00dfad80{
int sub_00dfad80(undefined4*);
};

// @baa 0x00dfad80
int C_00dfad80::sub_00dfad80(undefined4*param_2)
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

struct S_00dfae70 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_00dfae70(INT Index) const;
};

// @baa 0x00dfae70
const DWORD* S_00dfae70::sub_00dfae70(INT Index) const
{
    return &Items(Index);
}

// @baa 0x00dfaf00
void __stdcall sub_00dfaf00(int a0, int a1) {  }

struct C_00dfaf10{
int sub_00dfaf10(undefined4*);
};

// @baa 0x00dfaf10
int C_00dfaf10::sub_00dfaf10(undefined4*param_2)
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

struct C_00dfaf70 {
    int sub_00dfaf70(int);
};

// @baa 0x00dfaf70
int C_00dfaf70::sub_00dfaf70(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00dfaf80
void __stdcall sub_00dfaf80(int a0, int a1) {  }

struct C_00dfaf90 {
    int sub_00dfaf90(int);
};

// @baa 0x00dfaf90
int C_00dfaf90::sub_00dfaf90(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

// @baa 0x00dfafa0
void __stdcall sub_00dfafa0(int a0, int a1) {  }

// @baa 0x00dfafb0
void __stdcall sub_00dfafb0(int a0, int a1) {  }

struct C_00dfafc0 {
    int sub_00dfafc0(int);
};

// @baa 0x00dfafc0
int C_00dfafc0::sub_00dfafc0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x00dfafd0
void __stdcall sub_00dfafd0(int a0, int a1) {  }

struct C_00dfafe0{
int sub_00dfafe0(undefined4*);
};

// @baa 0x00dfafe0
int C_00dfafe0::sub_00dfafe0(undefined4*param_2)
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

struct C_00dfb040 {
    int sub_00dfb040(int);
};

// @baa 0x00dfb040
int C_00dfb040::sub_00dfb040(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00dfb050
void __stdcall sub_00dfb050(int a0, int a1) {  }

struct C_00dfb060 {
    int sub_00dfb060(int);
};

// @baa 0x00dfb060
int C_00dfb060::sub_00dfb060(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_00dfb070 {
    int sub_00dfb070(int);
};

// @baa 0x00dfb070
int C_00dfb070::sub_00dfb070(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00dfb080
void __stdcall sub_00dfb080(int a0, int a1) {  }

struct C_00dfb090 {
    int sub_00dfb090(int);
};

// @baa 0x00dfb090
int C_00dfb090::sub_00dfb090(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_00dfb0a0 {
    int sub_00dfb0a0(int);
};

// @baa 0x00dfb0a0
int C_00dfb0a0::sub_00dfb0a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

// @baa 0x00dfb0b0
void __stdcall sub_00dfb0b0(int a0, int a1) {  }

struct C_00dfb0c0 {
    int sub_00dfb0c0(int);
};

// @baa 0x00dfb0c0
int C_00dfb0c0::sub_00dfb0c0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00dfb0d0
void __stdcall sub_00dfb0d0(int a0, int a1) {  }

struct C_00dfb0e0 {
    int sub_00dfb0e0(int);
};

// @baa 0x00dfb0e0
int C_00dfb0e0::sub_00dfb0e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00dfb0f0
void __stdcall sub_00dfb0f0(int a0, int a1) {  }

struct C_00dfb100 { int sub_00dfb100(void); };

// @baa 0x00dfb100
int C_00dfb100::sub_00dfb100(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00dfdd20 {
    undefined4 * sub_00dfdd20();
};

int sub_005c7a20(void);
extern undefined * g_020e3238;
// @baa 0x00dfdd20
undefined4 * C_00dfdd20::sub_00dfdd20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *param_1 = (undefined4)(&g_020e3238);
  param_1[0x298] = 1;
  return param_1;
}

// @baa 0x00dfdd50
IMPLEMENT_CLASS_AT(UChannelDownload, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnDownload.cpp", 401);

// @baa 0x00dfddb0
struct C_00e08b10 {
    int sub_00e08b10();
};

// @baa 0x00e08b10
int C_00e08b10::sub_00e08b10(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00e08b30 {
    int sub_00e08b30();
};

// @baa 0x00e08b30
int C_00e08b30::sub_00e08b30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + 4 + *(int *)*param_1;
}

struct C_00e08b40 {
    int sub_00e08b40();
};

// @baa 0x00e08b40
int C_00e08b40::sub_00e08b40(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00e08b60 {
    int sub_00e08b60();
};

// @baa 0x00e08b60
int C_00e08b60::sub_00e08b60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_00e08b70 {
    int sub_00e08b70();
};

// @baa 0x00e08b70
int C_00e08b70::sub_00e08b70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 8 + param_1[5] * 0x14;
}

struct C_00e08b80 {
    int sub_00e08b80(int);
    int sub_00e04f50(int, int);
};

// @baa 0x00e08b80
int C_00e08b80::sub_00e08b80(int param_2)
{
    int * param_1 = (int *)this;
  ((C_00e08b80 *)(this))->sub_00e04f50((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x14;
  }
  return 0;
}

struct TBitArray {
    int* AllocatorData;
    int NumBits;
    int MaxBits;
    int InlineData[4];
};

struct FBitIterator {
    int WordIndex;
    int Mask;
    const int* WordData;
    int UnvisitedMask;
    int CurrentIndex;
    int BaseIndex;

    FBitIterator(const TBitArray& Array, int StartIndex)
        : WordIndex(StartIndex >> 5)
        , Mask(1 << (StartIndex & 31))
        , WordData(Array.InlineData)
        , UnvisitedMask(~0 << (StartIndex & 31))
        , CurrentIndex(StartIndex)
        , BaseIndex(StartIndex & ~31)
    {
    }
    void FindFirstSetBit();
    void Advance()
    {
        UnvisitedMask &= ~Mask;
        FindFirstSetBit();
    }
};

struct TConstSetBitIterator_00e08e90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e08e90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e08e90& operator++();
};

TConstSetBitIterator_00e08e90::TConstSetBitIterator_00e08e90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e08e90
TConstSetBitIterator_00e08e90& TConstSetBitIterator_00e08e90::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00e08eb0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e08eb0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e08eb0& operator++();
};

TConstSetBitIterator_00e08eb0::TConstSetBitIterator_00e08eb0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e08eb0
TConstSetBitIterator_00e08eb0& TConstSetBitIterator_00e08eb0::operator++()
{
    It.Advance();
    return *this;
}

// @baa 0x00e15db0
// @baa 0x00e15dd0
IMPLEMENT_CLASS_AT(UPackageMapSeekFree, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnNetDrv.cpp", 298);

// @baa 0x00e15ee0
// @baa 0x00e15fa0
int sub_005d88c0(...);
int sub_00df3930(void);
int sub_00e14d50(...);
extern undefined4 g_026c5ebc;
// @baa 0x00e16300
void sub_00e16300(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  if (g_026c5ebc == 0) {
    g_026c5ebc = sub_00e14d50(L"Engine");
    sub_00df3930();
  }
  sub_005d88c0(g_026c5ebc,param_1,param_2,param_3);
  return;
}

int sub_00df4480(void);
int sub_00e15ee0(...);
extern undefined4 g_026c5ed4;
// @baa 0x00e163e0
void sub_00e163e0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  if (g_026c5ed4 == 0) {
    g_026c5ed4 = sub_00e15ee0(L"Engine");
    sub_00df4480();
  }
  sub_005e1960(g_026c5ed4,param_2,param_3,param_4,param_5,param_6,0,g_026667a8,0,0,0);
  return;
}

// @baa 0x00e16440
IMPLEMENT_CLASS_AT(UNetDriver, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnNetDrv.cpp", 807);

int sub_00df3f90(void);
int sub_00e15e20(...);
extern undefined4 g_026c5ec8;
// @baa 0x00e16450
void sub_00e16450(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  if (g_026c5ec8 == 0) {
    g_026c5ec8 = sub_00e15e20(L"Engine");
    sub_00df3f90();
  }
  sub_005e1960(g_026c5ec8,param_2,param_3,param_4,param_5,param_6,0,g_026667a8,0,0,0);
  return;
}

// @baa 0x00e16aa0
