// Core_16c0000.cpp: 4 functions
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

struct TConstSetBitIterator_016c6b00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_016c6b00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_016c6b00& operator++();
};

TConstSetBitIterator_016c6b00::TConstSetBitIterator_016c6b00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x016c6b00
TConstSetBitIterator_016c6b00& TConstSetBitIterator_016c6b00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_016c6b20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_016c6b20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_016c6b20& operator++();
};

TConstSetBitIterator_016c6b20::TConstSetBitIterator_016c6b20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x016c6b20
TConstSetBitIterator_016c6b20& TConstSetBitIterator_016c6b20::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_016c6b70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_016c6b70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_016c6b70& operator++();
};

TConstSetBitIterator_016c6b70::TConstSetBitIterator_016c6b70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x016c6b70
TConstSetBitIterator_016c6b70& TConstSetBitIterator_016c6b70::operator++()
{
    It.Advance();
    return *this;
}

// @baa 0x016c6ce0
IMPLEMENT_CLASS_AT(URCapeConfigFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCapeComponent.cpp", 22);
