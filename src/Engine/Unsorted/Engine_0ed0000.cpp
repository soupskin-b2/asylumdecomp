// Engine_0ed0000.cpp: 12 functions
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

struct TConstSetBitIterator_00ed7970 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00ed7970(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00ed7970& operator++();
};

TConstSetBitIterator_00ed7970::TConstSetBitIterator_00ed7970(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00ed7970
TConstSetBitIterator_00ed7970& TConstSetBitIterator_00ed7970::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00ed79c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00ed79c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00ed79c0& operator++();
};

TConstSetBitIterator_00ed79c0::TConstSetBitIterator_00ed79c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00ed79c0
TConstSetBitIterator_00ed79c0& TConstSetBitIterator_00ed79c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00ed7a10 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00ed7a10(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00ed7a10& operator++();
};

TConstSetBitIterator_00ed7a10::TConstSetBitIterator_00ed7a10(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00ed7a10
TConstSetBitIterator_00ed7a10& TConstSetBitIterator_00ed7a10::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00ed7a60 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00ed7a60(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00ed7a60& operator++();
};

TConstSetBitIterator_00ed7a60::TConstSetBitIterator_00ed7a60(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00ed7a60
TConstSetBitIterator_00ed7a60& TConstSetBitIterator_00ed7a60::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00ed7c30 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00ed7c30(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00ed7c30& operator++();
};

TConstSetBitIterator_00ed7c30::TConstSetBitIterator_00ed7c30(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00ed7c30
TConstSetBitIterator_00ed7c30& TConstSetBitIterator_00ed7c30::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00ed7c50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00ed7c50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00ed7c50& operator++();
};

TConstSetBitIterator_00ed7c50::TConstSetBitIterator_00ed7c50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00ed7c50
TConstSetBitIterator_00ed7c50& TConstSetBitIterator_00ed7c50::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00ed7ca0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00ed7ca0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00ed7ca0& operator++();
};

TConstSetBitIterator_00ed7ca0::TConstSetBitIterator_00ed7ca0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00ed7ca0
TConstSetBitIterator_00ed7ca0& TConstSetBitIterator_00ed7ca0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00ed7cf0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00ed7cf0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00ed7cf0& operator++();
};

TConstSetBitIterator_00ed7cf0::TConstSetBitIterator_00ed7cf0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00ed7cf0
TConstSetBitIterator_00ed7cf0& TConstSetBitIterator_00ed7cf0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00ed7d40 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00ed7d40(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00ed7d40& operator++();
};

TConstSetBitIterator_00ed7d40::TConstSetBitIterator_00ed7d40(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00ed7d40
TConstSetBitIterator_00ed7d40& TConstSetBitIterator_00ed7d40::operator++()
{
    It.Advance();
    return *this;
}

struct M_00ed7df0 { void sub_00ed42a0(); };

struct C { char pad[64]; M_00ed7df0 m; void sub_00ed7df0(); };

// @baa 0x00ed7df0
void C::sub_00ed7df0() { m.sub_00ed42a0(); }

// @baa 0x00ed7f50
IMPLEMENT_CLASS_AT(UEditorPlayer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\PlayLevel.cpp", 35);

// @baa 0x00ed7fc0
