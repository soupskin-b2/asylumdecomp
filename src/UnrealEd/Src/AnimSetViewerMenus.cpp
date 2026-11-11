// AnimSetViewerMenus.cpp: 23 functions
// Placed here by: neighbours 22, callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_008343f0(void);
int sub_008549d0(...);
extern undefined4 g_026b55c4;
// @baa 0x00c92750
int sub_00c92750(void)
{
  if (g_026b55c4 == 0) {
    g_026b55c4 = sub_008549d0(L"Engine");
    sub_008343f0();
  }
  return g_026b55c4;
}

struct M_0133b670 { void sub_0040fcc0(); };

struct C { char pad[4]; M_0133b670 m; void sub_0133b670(); };

// @baa 0x0133b670
void C::sub_0133b670() { m.sub_0040fcc0(); }

struct C_0133bc80 { void sub_01339bb0(); void sub_0133bc80(int); };

// @baa 0x0133bc80
void C_0133bc80::sub_0133bc80(int) { sub_01339bb0(); }

extern TArray<int> g_026a1ca4;
struct C_0134e880 {
    int sub_0134e880();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x0134e880
int C_0134e880::sub_0134e880()
{
    return g_026a1ca4(Index);
}

struct C_0134e8e0 {
    int sub_0134e8e0();
};

// @baa 0x0134e8e0
int C_0134e8e0::sub_0134e8e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_0134e8f0 {
    int sub_0134e8f0();
};

// @baa 0x0134e8f0
int C_0134e8f0::sub_0134e8f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

void sub_0134e750();
// @baa 0x01354180
void sub_01354180(void) { sub_0134e750(); }

struct C_01354240 {
    int sub_01354240();
};

// @baa 0x01354240
int C_01354240::sub_01354240(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_01354250 {
    int sub_01354250();
};

// @baa 0x01354250
int C_01354250::sub_01354250(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + 4 + *(int *)*param_1;
}

struct C_01354260 {
    int sub_01354260();
};

// @baa 0x01354260
int C_01354260::sub_01354260(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_01354270 {
    int sub_01354270();
};

// @baa 0x01354270
int C_01354270::sub_01354270(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 4 + param_1[5] * 0x18;
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

struct TConstSetBitIterator_01354280 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01354280(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01354280& operator++();
};

TConstSetBitIterator_01354280::TConstSetBitIterator_01354280(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01354280
TConstSetBitIterator_01354280& TConstSetBitIterator_01354280::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_013542a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_013542a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_013542a0& operator++();
};

TConstSetBitIterator_013542a0::TConstSetBitIterator_013542a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x013542a0
TConstSetBitIterator_013542a0& TConstSetBitIterator_013542a0::operator++()
{
    It.Advance();
    return *this;
}

void sub_0134eb10();
// @baa 0x013542c0
void sub_013542c0(void) { sub_0134eb10(); }

int sub_009369a0(void);
extern undefined * g_022589f8;
// @baa 0x013542d0
undefined4 * USkeletalMeshComponent::sub_013542d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_009369a0();
  *param_1 = (undefined4)(&g_022589f8);
  return param_1;
}

// @baa 0x013542f0
IMPLEMENT_CLASS_AT(UAnimTreeEdSkelComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\AnimTreeEditor.cpp", 14);

// @baa 0x01354350
struct C_01354980 { void sub_0134f740(); void sub_01354980(int); };

// @baa 0x01354980
void C_01354980::sub_01354980(int) { sub_0134f740(); }

struct TConstSetBitIterator_01355dd0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01355dd0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01355dd0& operator++();
};

TConstSetBitIterator_01355dd0::TConstSetBitIterator_01355dd0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01355dd0
TConstSetBitIterator_01355dd0& TConstSetBitIterator_01355dd0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01355df0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01355df0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01355df0& operator++();
};

TConstSetBitIterator_01355df0::TConstSetBitIterator_01355df0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01355df0
TConstSetBitIterator_01355df0& TConstSetBitIterator_01355df0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01355e10 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01355e10(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01355e10& operator++();
};

TConstSetBitIterator_01355e10::TConstSetBitIterator_01355e10(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01355e10
TConstSetBitIterator_01355e10& TConstSetBitIterator_01355e10::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01355e60 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01355e60(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01355e60& operator++();
};

TConstSetBitIterator_01355e60::TConstSetBitIterator_01355e60(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01355e60
TConstSetBitIterator_01355e60& TConstSetBitIterator_01355e60::operator++()
{
    It.Advance();
    return *this;
}

struct C_01356060 { void sub_01355090(); void sub_01356060(int); };

// @baa 0x01356060
void C_01356060::sub_01356060(int) { sub_01355090(); }
