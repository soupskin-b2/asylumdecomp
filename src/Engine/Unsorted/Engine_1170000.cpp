// Engine_1170000.cpp: 4 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

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

struct TConstSetBitIterator_0117b220 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0117b220(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0117b220& operator++();
};

TConstSetBitIterator_0117b220::TConstSetBitIterator_0117b220(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0117b220
TConstSetBitIterator_0117b220& TConstSetBitIterator_0117b220::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0117b240 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0117b240(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0117b240& operator++();
};

TConstSetBitIterator_0117b240::TConstSetBitIterator_0117b240(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0117b240
TConstSetBitIterator_0117b240& TConstSetBitIterator_0117b240::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0117b290 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0117b290(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0117b290& operator++();
};

TConstSetBitIterator_0117b290::TConstSetBitIterator_0117b290(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0117b290
TConstSetBitIterator_0117b290& TConstSetBitIterator_0117b290::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0117b2b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0117b2b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0117b2b0& operator++();
};

TConstSetBitIterator_0117b2b0::TConstSetBitIterator_0117b2b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0117b2b0
TConstSetBitIterator_0117b2b0& TConstSetBitIterator_0117b2b0::operator++()
{
    It.Advance();
    return *this;
}
