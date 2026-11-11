// Editor_10d0000.cpp: 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C { void sub_0054e920(int); C *sub_010d0da0(int); };

// @baa 0x010d0da0
C *C::sub_010d0da0(int a) { sub_0054e920(a); return this; }

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

struct TConstSetBitIterator_010d0f60 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010d0f60(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010d0f60& operator++();
};

TConstSetBitIterator_010d0f60::TConstSetBitIterator_010d0f60(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010d0f60
TConstSetBitIterator_010d0f60& TConstSetBitIterator_010d0f60::operator++()
{
    It.Advance();
    return *this;
}
