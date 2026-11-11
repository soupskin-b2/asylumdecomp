// UnrealEd_1320000.cpp: 39 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    int sub_013216f0(int);
    int sub_0131adc0(int, int);
};

// @baa 0x013216f0
int C::sub_013216f0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C *)(this))->sub_0131adc0((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x14, iVar1 != 0)) {
    return iVar1 + 8;
  }
  return 0;
}

struct C_01321730 {
    int sub_01321730(int);
    int sub_0131aec0(int, int);
};

// @baa 0x01321730
int C_01321730::sub_01321730(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_01321730 *)(this))->sub_0131aec0((int)(&param_2), param_2);
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

struct TConstSetBitIterator_013217b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_013217b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_013217b0& operator++();
};

TConstSetBitIterator_013217b0::TConstSetBitIterator_013217b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x013217b0
TConstSetBitIterator_013217b0& TConstSetBitIterator_013217b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_013217d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_013217d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_013217d0& operator++();
};

TConstSetBitIterator_013217d0::TConstSetBitIterator_013217d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x013217d0
TConstSetBitIterator_013217d0& TConstSetBitIterator_013217d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01321c30 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01321c30(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01321c30& operator++();
};

TConstSetBitIterator_01321c30::TConstSetBitIterator_01321c30(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01321c30
TConstSetBitIterator_01321c30& TConstSetBitIterator_01321c30::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01321c80 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01321c80(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01321c80& operator++();
};

TConstSetBitIterator_01321c80::TConstSetBitIterator_01321c80(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01321c80
TConstSetBitIterator_01321c80& TConstSetBitIterator_01321c80::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01321cd0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01321cd0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01321cd0& operator++();
};

TConstSetBitIterator_01321cd0::TConstSetBitIterator_01321cd0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01321cd0
TConstSetBitIterator_01321cd0& TConstSetBitIterator_01321cd0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01321e40 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01321e40(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01321e40& operator++();
};

TConstSetBitIterator_01321e40::TConstSetBitIterator_01321e40(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01321e40
TConstSetBitIterator_01321e40& TConstSetBitIterator_01321e40::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01321e90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01321e90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01321e90& operator++();
};

TConstSetBitIterator_01321e90::TConstSetBitIterator_01321e90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01321e90
TConstSetBitIterator_01321e90& TConstSetBitIterator_01321e90::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01321ee0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01321ee0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01321ee0& operator++();
};

TConstSetBitIterator_01321ee0::TConstSetBitIterator_01321ee0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01321ee0
TConstSetBitIterator_01321ee0& TConstSetBitIterator_01321ee0::operator++()
{
    It.Advance();
    return *this;
}

int sub_009369a0(void);
extern undefined * g_0224a2b8;
// @baa 0x01321f30
undefined4 * USkeletalMeshComponent::sub_01321f30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_009369a0();
  *param_1 = (undefined4)(&g_0224a2b8);
  return param_1;
}

// @baa 0x01321f50
IMPLEMENT_CLASS_AT(UASVSkelComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\AnimSetViewerMain.cpp", 19);

// @baa 0x01321fb0
extern undefined * g_0224a528;
// @baa 0x01321fe0
undefined4 * USkeletalMeshComponent::sub_01321fe0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_009369a0();
  *param_1 = (undefined4)(&g_0224a528);
  return param_1;
}

// @baa 0x01322000
IMPLEMENT_CLASS_AT(UPhATSkeletalMeshComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\PhATMain.cpp", 14);

// @baa 0x01322070
struct C_01325de0 { void sub_007bec40(int); C_01325de0 *sub_01325de0(int); };

// @baa 0x01325de0
C_01325de0 *C_01325de0::sub_01325de0(int a) { sub_007bec40(a); return this; }

struct TConstSetBitIterator_01325e00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01325e00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01325e00& operator++();
};

TConstSetBitIterator_01325e00::TConstSetBitIterator_01325e00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01325e00
TConstSetBitIterator_01325e00& TConstSetBitIterator_01325e00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01325e20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01325e20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01325e20& operator++();
};

TConstSetBitIterator_01325e20::TConstSetBitIterator_01325e20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01325e20
TConstSetBitIterator_01325e20& TConstSetBitIterator_01325e20::operator++()
{
    It.Advance();
    return *this;
}

struct C_view {
    int sub_013217f0(int);
};

// @baa 0x01325e40
void UUnrealEdEngine::sub_01325e40(void)
{
    int param_1 = (int)this;
  ((C_view *)((*(char **)((char *)this + 0x10))))->sub_013217f0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_view_01325e60 {
    int sub_01321960(int);
};

// @baa 0x01325e60
void UUnrealEdEngine::sub_01325e60(void)
{
    int param_1 = (int)this;
  ((C_view_01325e60 *)((*(char **)((char *)this + 0x10))))->sub_01321960(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_view_01325e80 {
    int sub_01321ad0(int);
};

// @baa 0x01325e80
void UUnrealEdEngine::sub_01325e80(void)
{
    int param_1 = (int)this;
  ((C_view_01325e80 *)((*(char **)((char *)this + 0x10))))->sub_01321ad0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_view_01328bd0 {
    int sub_01328090(int, int);
};

// @baa 0x01328bd0
void UUnrealEdEngine::sub_01328bd0(void)
{
    int param_1 = (int)this;
  ((C_view_01328bd0 *)(this))->sub_01328090(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_01328ca0 {
    int sub_01328150(int, int);
};

// @baa 0x01328ca0
undefined4 UUnrealEdEngine::sub_01328ca0(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_01328ca0 *)(this))->sub_01328150(param_2, param_3);
  return param_1;
}

struct C_view_01328cc0 {
    int sub_013281b0(int, int);
};

// @baa 0x01328cc0
undefined4 UUnrealEdEngine::sub_01328cc0(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_01328cc0 *)(this))->sub_013281b0(param_2, param_3);
  return param_1;
}

struct C_view_01328ce0 {
    int sub_01328210(int, int);
};

// @baa 0x01328ce0
int UUnrealEdEngine::sub_01328ce0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_01328ce0 *)(this))->sub_01328210(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_01328d00 {
    int sub_01328290(int, int);
};

// @baa 0x01328d00
int UUnrealEdEngine::sub_01328d00(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_01328d00 *)(this))->sub_01328290(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_01328d20 {
    int sub_01328310(int, int);
};

// @baa 0x01328d20
int UUnrealEdEngine::sub_01328d20(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_01328d20 *)(this))->sub_01328310(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

int sub_01321d20(void);
// @baa 0x01328d40
int UUnrealEdEngine::sub_01328d40(void)
{
    int param_1 = (int)this;

  sub_01321d20();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_01321d80(void);
// @baa 0x01328d60
int UUnrealEdEngine::sub_01328d60(void)
{
    int param_1 = (int)this;

  sub_01321d80();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_01321de0(void);
// @baa 0x01328d80
int UUnrealEdEngine::sub_01328d80(void)
{
    int param_1 = (int)this;

  sub_01321de0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_01328850();
// @baa 0x01328ee0
void sub_01328ee0(void) { sub_01328850(); }

void sub_013288c0();
// @baa 0x01328ef0
void sub_01328ef0(void) { sub_013288c0(); }

struct C_01329400 { int sub_01329400(void); };

// @baa 0x01329400
int C_01329400::sub_01329400(void) { return *(int*)((char*)this + 836); }

struct C_01329480 {
    undefined4 sub_01329480(byte);
};

int sub_0053dfa0(...);
int sub_01329410(void);
// @baa 0x01329480
undefined4 C_01329480::sub_01329480(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01329410();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_013287e0();
// @baa 0x013294a0
void sub_013294a0(void) { sub_013287e0(); }

void sub_01328a10();
// @baa 0x01329ed0
void sub_01329ed0(void) { sub_01328a10(); }

struct S {
    void sub_01328850();
    void sub_0132a190();
};

// @baa 0x0132a190
void S::sub_0132a190() { this->sub_01328850(); }

// @baa 0x0132a1a0
void sub_0132a1a0(void) { sub_013288c0(); }
