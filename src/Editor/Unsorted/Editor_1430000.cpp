// Editor_1430000.cpp: 6 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

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

struct TConstSetBitIterator_01439ea0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01439ea0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01439ea0& operator++();
};

TConstSetBitIterator_01439ea0::TConstSetBitIterator_01439ea0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01439ea0
TConstSetBitIterator_01439ea0& TConstSetBitIterator_01439ea0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01439ef0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01439ef0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01439ef0& operator++();
};

TConstSetBitIterator_01439ef0::TConstSetBitIterator_01439ef0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01439ef0
TConstSetBitIterator_01439ef0& TConstSetBitIterator_01439ef0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01439f40 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01439f40(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01439f40& operator++();
};

TConstSetBitIterator_01439f40::TConstSetBitIterator_01439f40(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01439f40
TConstSetBitIterator_01439f40& TConstSetBitIterator_01439f40::operator++()
{
    It.Advance();
    return *this;
}

int sub_005c7a20(void);
extern undefined * g_0228f7a8;
// @baa 0x0143a170
undefined4 * UObject::sub_0143a170(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0228f7a8);
  return param_1;
}

// @baa 0x0143a190
IMPLEMENT_CLASS_AT(UGenericBrowserType_SpeedTree, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\SpeedTreeBrowserType.cpp", 10);

// @baa 0x0143a1f0
