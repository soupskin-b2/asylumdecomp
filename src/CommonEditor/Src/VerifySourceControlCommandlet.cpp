// VerifySourceControlCommandlet.cpp: 19 functions
// Placed here by: neighbours 10, class 7, callers 1, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    void sub_0173a470();
};

// @baa 0x0173a470
void C::sub_0173a470(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xfffffff7 | 0x17;
  return;
}

// @baa 0x0173df10
IMPLEMENT_CLASS_AT(UVerifySourceControlCommandlet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonEditor\\Src\\VerifySourceControlCommandlet.cpp", 6);

// @baa 0x0173e020
int UVerifySourceControlCommandlet::vf_000(void) { return 1; }

// @baa 0x0173e030
bool UVerifySourceControlCommandlet::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_view {
    int sub_01743bd0(int, int);
};

// @baa 0x01749d40
int UTexture2D::sub_01749d40(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view *)(this))->sub_01743bd0((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x48, iVar1 != 0)) {
    return iVar1 + 4;
  }
  return 0;
}

struct C_view_01749d80 {
    int sub_0147e750(int, int);
};

// @baa 0x01749d80
int UTexture2D::sub_01749d80(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view_01749d80 *)(this))->sub_0147e750((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x18, iVar1 != 0)) {
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

struct TConstSetBitIterator_01749ef0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01749ef0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01749ef0& operator++();
};

TConstSetBitIterator_01749ef0::TConstSetBitIterator_01749ef0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01749ef0
TConstSetBitIterator_01749ef0& TConstSetBitIterator_01749ef0::operator++()
{
    It.Advance();
    return *this;
}

struct C_01749f10 {
    void sub_01749f10();
    int sub_01746770(int);
};

// @baa 0x01749f10
void C_01749f10::sub_01749f10(void)
{
    int param_1 = (int)this;
  ((C_01749f10 *)((*(char **)((char *)this + 0x10))))->sub_01746770(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_01749f30 {
    void sub_01749f30();
    int sub_017468d0(int);
};

// @baa 0x01749f30
void C_01749f30::sub_01749f30(void)
{
    int param_1 = (int)this;
  ((C_01749f30 *)((*(char **)((char *)this + 0x10))))->sub_017468d0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct TConstSetBitIterator_0174a560 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0174a560(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0174a560& operator++();
};

TConstSetBitIterator_0174a560::TConstSetBitIterator_0174a560(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0174a560
TConstSetBitIterator_0174a560& TConstSetBitIterator_0174a560::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0174a5b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0174a5b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0174a5b0& operator++();
};

TConstSetBitIterator_0174a5b0::TConstSetBitIterator_0174a5b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0174a5b0
TConstSetBitIterator_0174a5b0& TConstSetBitIterator_0174a5b0::operator++()
{
    It.Advance();
    return *this;
}

int sub_01746e80(...);
// @baa 0x0174a600
void sub_0174a600(int param_1, int param_2, undefined4 param_3)
{
  if (0x10 < (int)(param_2 - param_1 & 0xfffffff0U)) {
    sub_01746e80(param_1,param_2,param_3,0,0);
  }
  return;
}

int sub_01747080(...);
// @baa 0x0174a770
void sub_0174a770(int param_1, int param_2, undefined4 param_3)
{
  if (0x10 < (int)(param_2 - param_1 & 0xfffffff0U)) {
    sub_01747080(param_1,param_2,param_3,0);
  }
  return;
}

struct C_0174a8c0 { void sub_0174a7a0(int); C_0174a8c0 *sub_0174a8c0(int); };

// @baa 0x0174a8c0
C_0174a8c0 *C_0174a8c0::sub_0174a8c0(int a) { sub_0174a7a0(a); return this; }

// @baa 0x0174a8e0
UVerifySourceControlCommandlet::UVerifySourceControlCommandlet()
{
    if (!(*(QWORD*)&ObjectFlags & 0x200)) AddToRoot();
}

// @baa 0x0174a940
int sub_0174a940(void);
int sub_005c7a70(...);
// @baa 0x0174a9a0
undefined4 UVerifySourceControlCommandlet::sub_0174a9a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0174a940();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x70);
  }
  return param_1;
}

// @baa 0x0174c970
// @baa 0x0174e020
