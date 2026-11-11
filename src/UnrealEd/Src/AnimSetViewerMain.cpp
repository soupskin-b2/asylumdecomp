// AnimSetViewerMain.cpp: 32 functions
// Placed here by: neighbours 28, callers 3, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C{
int sub_0083d030(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x0083d030
int C::sub_0083d030(undefined4*param_2)
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

struct C_0130e910 { int a, b; C_0130e910(int, int); };

// @baa 0x0130e910
C_0130e910::C_0130e910(int x, int y) : a(x), b(y) {}

struct C_0130e930 { C_0130e930* sub_0130e930(void); };

// @baa 0x0130e930
C_0130e930* C_0130e930::sub_0130e930(void) { return this; }

struct C_view {
    int sub_00c407b0(int);
};

extern undefined4 g_02249c8c;
// @baa 0x0130e940
undefined4 * UUnrealEdEngine::sub_0130e940(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00c407b0(2);
  param_1[4] = param_2;
  *param_1 = (undefined4)(&g_02249c8c);
  return param_1;
}

void sub_00c38ac0();
// @baa 0x0130e960
void sub_0130e960(void) { sub_00c38ac0(); }

extern undefined4 g_02249c9c;
// @baa 0x0130e970
undefined4 * UUnrealEdEngine::sub_0130e970(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00c407b0(2);
  param_1[4] = param_2;
  *param_1 = (undefined4)(&g_02249c9c);
  return param_1;
}

// @baa 0x0130e990
void sub_0130e990(void) { sub_00c38ac0(); }

extern char g_025e8ee0[];
// @baa 0x0130eb80
int sub_0130eb80(void) { return (int)g_025e8ee0; }

extern char g_026d70b8[];
// @baa 0x0130eb90
int sub_0130eb90(void) { return (int)g_026d70b8; }

extern char g_025e8ee8[];
// @baa 0x0130eba0
int sub_0130eba0(void) { return (int)g_025e8ee8; }

extern char g_026d70f8[];
// @baa 0x0130ebb0
int sub_0130ebb0(void) { return (int)g_026d70f8; }

extern char g_0224673c[];
// @baa 0x0130ebc0
int sub_0130ebc0(void) { return (int)g_0224673c; }

extern char g_026d7138[];
// @baa 0x0130ebd0
int sub_0130ebd0(void) { return (int)g_026d7138; }

// @baa 0x0130ec00
undefined4 UUnrealEdEngine::sub_0130ec00(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 0x300) + 0x144);
}

// @baa 0x0130ec10
void __stdcall sub_0130ec10(int a0) {  }

struct T_0131aae0;
// @baa 0x0131aae0
template INT TArray<T_0131aae0*>::RemoveItem(T_0131aae0* const&);

struct C_0131e5b0 {
    int sub_0131e5b0();
};

// @baa 0x0131e5b0
int C_0131e5b0::sub_0131e5b0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0131e5d0 {
    int sub_0131e5d0();
};

// @baa 0x0131e5d0
int C_0131e5d0::sub_0131e5d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_0131e5e0 {
    int sub_0131e5e0();
};

// @baa 0x0131e5e0
int C_0131e5e0::sub_0131e5e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 4 + param_1[5] * 0x18;
}

struct C_0131e5f0 {
    int sub_0131e5f0();
};

// @baa 0x0131e5f0
int C_0131e5f0::sub_0131e5f0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0131e610 {
    int sub_0131e610();
};

// @baa 0x0131e610
int C_0131e610::sub_0131e610(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_0131e620 {
    int sub_0131e620();
};

// @baa 0x0131e620
int C_0131e620::sub_0131e620(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + 4 + *(int *)*param_1;
}

struct C_0131e760 {
    int sub_0131e760(int);
    int sub_0131adc0(int, int);
};

// @baa 0x0131e760
int C_0131e760::sub_0131e760(int param_2)
{
    int * param_1 = (int *)this;
  ((C_0131e760 *)(this))->sub_0131adc0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x14;
  }
  return 0;
}

struct C_0131e790 {
    int sub_0131e790(int);
    int sub_0131aec0(int, int);
};

// @baa 0x0131e790
int C_0131e790::sub_0131e790(int param_2)
{
    int * param_1 = (int *)this;
  ((C_0131e790 *)(this))->sub_0131aec0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x18;
  }
  return 0;
}

struct C_0131e7c0 {
    int sub_0131e7c0(int);
    int sub_0131af40(int, int);
};

// @baa 0x0131e7c0
int C_0131e7c0::sub_0131e7c0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_0131e7c0 *)(this))->sub_0131af40((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
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

struct TConstSetBitIterator_013263b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_013263b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_013263b0& operator++();
};

TConstSetBitIterator_013263b0::TConstSetBitIterator_013263b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x013263b0
TConstSetBitIterator_013263b0& TConstSetBitIterator_013263b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01326400 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01326400(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01326400& operator++();
};

TConstSetBitIterator_01326400::TConstSetBitIterator_01326400(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01326400
TConstSetBitIterator_01326400& TConstSetBitIterator_01326400::operator++()
{
    It.Advance();
    return *this;
}

// @baa 0x01326450
IMPLEMENT_CLASS_AT(UASVSkelComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\AnimSetViewerMain.cpp", 19);

// @baa 0x01327b00
int sub_01321d20(void);
// @baa 0x01328390
int UUnrealEdEngine::sub_01328390(void)
{
    int param_1 = (int)this;

  sub_01321d20();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_01321d80(void);
// @baa 0x013283b0
int UUnrealEdEngine::sub_013283b0(void)
{
    int param_1 = (int)this;

  sub_01321d80();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_01321de0(void);
// @baa 0x013283d0
int UUnrealEdEngine::sub_013283d0(void)
{
    int param_1 = (int)this;

  sub_01321de0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}
