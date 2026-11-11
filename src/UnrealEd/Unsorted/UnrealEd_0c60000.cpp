// UnrealEd_0c60000.cpp: 7 functions
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

struct TConstSetBitIterator_00c63a90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00c63a90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00c63a90& operator++();
};

TConstSetBitIterator_00c63a90::TConstSetBitIterator_00c63a90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00c63a90
TConstSetBitIterator_00c63a90& TConstSetBitIterator_00c63a90::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00c63ae0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00c63ae0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00c63ae0& operator++();
};

TConstSetBitIterator_00c63ae0::TConstSetBitIterator_00c63ae0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00c63ae0
TConstSetBitIterator_00c63ae0& TConstSetBitIterator_00c63ae0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00c63b00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00c63b00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00c63b00& operator++();
};

TConstSetBitIterator_00c63b00::TConstSetBitIterator_00c63b00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00c63b00
TConstSetBitIterator_00c63b00& TConstSetBitIterator_00c63b00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00c63b20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00c63b20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00c63b20& operator++();
};

TConstSetBitIterator_00c63b20::TConstSetBitIterator_00c63b20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00c63b20
TConstSetBitIterator_00c63b20& TConstSetBitIterator_00c63b20::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00c63b40 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00c63b40(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00c63b40& operator++();
};

TConstSetBitIterator_00c63b40::TConstSetBitIterator_00c63b40(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00c63b40
TConstSetBitIterator_00c63b40& TConstSetBitIterator_00c63b40::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00c63b90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00c63b90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00c63b90& operator++();
};

TConstSetBitIterator_00c63b90::TConstSetBitIterator_00c63b90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00c63b90
TConstSetBitIterator_00c63b90& TConstSetBitIterator_00c63b90::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00c63be0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00c63be0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00c63be0& operator++();
};

TConstSetBitIterator_00c63be0::TConstSetBitIterator_00c63be0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00c63be0
TConstSetBitIterator_00c63be0& TConstSetBitIterator_00c63be0::operator++()
{
    It.Advance();
    return *this;
}
