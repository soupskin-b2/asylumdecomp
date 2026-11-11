// UnrealEd_1280000.cpp (part 1 of 2): 26 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C { void* Data; int Num; int Max; void sub_01283ef0(); };

// @baa 0x01283ef0
void C::sub_01283ef0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

int sub_0053df70(...);
// @baa 0x01283f50
void UUnrealEdEngine::sub_01283f50(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 << 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_01284070 { void* Data; int Num; int Max; void sub_01284070(); };

// @baa 0x01284070
void C_01284070::sub_01284070() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_01284120 { void* Data; int Num; int Max; void sub_01284120(); };

// @baa 0x01284120
void C_01284120::sub_01284120() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_01284180 { void* Data; int Num; int Max; void sub_01284180(); };

// @baa 0x01284180
void C_01284180::sub_01284180() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x012842e0
void UUnrealEdEngine::sub_012842e0(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

// @baa 0x01284320
void UUnrealEdEngine::sub_01284320(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

// @baa 0x01284360
int UUnrealEdEngine::sub_01284360(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

// @baa 0x01284370
int UUnrealEdEngine::sub_01284370(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x01284380
int UUnrealEdEngine::sub_01284380(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x012843a0
int UUnrealEdEngine::sub_012843a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

// @baa 0x012843b0
void __stdcall sub_012843b0(int a0, int a1) {  }

// @baa 0x012843c0
int UUnrealEdEngine::sub_012843c0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x01284430
int UUnrealEdEngine::sub_01284430(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x14;
}

// @baa 0x01284620
int UUnrealEdEngine::sub_01284620(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct A_0128aeb0 { virtual void sub_0128eb30(); char pad[408]; };

struct B_0128aeb0 { virtual void sub_0128eb30(); };

struct C_0128aeb0 : A_0128aeb0, B_0128aeb0 { virtual void sub_0128eb30(); C_0128aeb0(); };

C_0128aeb0::C_0128aeb0() {}

// @baa 0x0128aeb0
void C_0128aeb0::sub_0128eb30() {}

struct A_0128aec0 { virtual void sub_0128eb30(); char pad[420]; };

struct B_0128aec0 { virtual void sub_0128eb30(); };

struct C_0128aec0 : A_0128aec0, B_0128aec0 { virtual void sub_0128eb30(); C_0128aec0(); };

C_0128aec0::C_0128aec0() {}

// @baa 0x0128aec0
void C_0128aec0::sub_0128eb30() {}

struct A_0128aed0 { virtual void sub_0128eb30(); char pad[424]; };

struct B_0128aed0 { virtual void sub_0128eb30(); };

struct C_0128aed0 : A_0128aed0, B_0128aed0 { virtual void sub_0128eb30(); C_0128aed0(); };

C_0128aed0::C_0128aed0() {}

// @baa 0x0128aed0
void C_0128aed0::sub_0128eb30() {}

struct FOO {
  int __thiscall sub_01283250(void);
};

extern undefined4 g_026d4dfc;
// @baa 0x0128afd0
void sub_0128afd0(void)
{
  ((FOO *)g_026d4dfc)->sub_01283250();
}

int sub_0053dfa0(...);
int sub_0128ade0(void);
// @baa 0x0128eb30
undefined4 UUnrealEdEngine::sub_0128eb30(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0128ade0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_view {
    int sub_012843d0(int, int);
};

// @baa 0x0128f8c0
int UUnrealEdEngine::sub_0128f8c0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view *)(this))->sub_012843d0((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x14, iVar1 != 0)) {
    return iVar1 + 4;
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

struct TConstSetBitIterator_0128f9b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0128f9b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0128f9b0& operator++();
};

TConstSetBitIterator_0128f9b0::TConstSetBitIterator_0128f9b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0128f9b0
TConstSetBitIterator_0128f9b0& TConstSetBitIterator_0128f9b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0128fe00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0128fe00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0128fe00& operator++();
};

TConstSetBitIterator_0128fe00::TConstSetBitIterator_0128fe00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0128fe00
TConstSetBitIterator_0128fe00& TConstSetBitIterator_0128fe00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0128fe50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0128fe50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0128fe50& operator++();
};

TConstSetBitIterator_0128fe50::TConstSetBitIterator_0128fe50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0128fe50
TConstSetBitIterator_0128fe50& TConstSetBitIterator_0128fe50::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0128ff60 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0128ff60(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0128ff60& operator++();
};

TConstSetBitIterator_0128ff60::TConstSetBitIterator_0128ff60(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0128ff60
TConstSetBitIterator_0128ff60& TConstSetBitIterator_0128ff60::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0128ffb0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0128ffb0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0128ffb0& operator++();
};

TConstSetBitIterator_0128ffb0::TConstSetBitIterator_0128ffb0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0128ffb0
TConstSetBitIterator_0128ffb0& TConstSetBitIterator_0128ffb0::operator++()
{
    It.Advance();
    return *this;
}
