// Engine_1310000.cpp: 10 functions
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

struct TConstSetBitIterator_0131ec60 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0131ec60(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0131ec60& operator++();
};

TConstSetBitIterator_0131ec60::TConstSetBitIterator_0131ec60(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0131ec60
TConstSetBitIterator_0131ec60& TConstSetBitIterator_0131ec60::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0131ec80 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0131ec80(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0131ec80& operator++();
};

TConstSetBitIterator_0131ec80::TConstSetBitIterator_0131ec80(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0131ec80
TConstSetBitIterator_0131ec80& TConstSetBitIterator_0131ec80::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0131ecd0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0131ecd0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0131ecd0& operator++();
};

TConstSetBitIterator_0131ecd0::TConstSetBitIterator_0131ecd0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0131ecd0
TConstSetBitIterator_0131ecd0& TConstSetBitIterator_0131ecd0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0131ed20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0131ed20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0131ed20& operator++();
};

TConstSetBitIterator_0131ed20::TConstSetBitIterator_0131ed20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0131ed20
TConstSetBitIterator_0131ed20& TConstSetBitIterator_0131ed20::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0131ed70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0131ed70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0131ed70& operator++();
};

TConstSetBitIterator_0131ed70::TConstSetBitIterator_0131ed70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0131ed70
TConstSetBitIterator_0131ed70& TConstSetBitIterator_0131ed70::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0131ed90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0131ed90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0131ed90& operator++();
};

TConstSetBitIterator_0131ed90::TConstSetBitIterator_0131ed90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0131ed90
TConstSetBitIterator_0131ed90& TConstSetBitIterator_0131ed90::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0131edb0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0131edb0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0131edb0& operator++();
};

TConstSetBitIterator_0131edb0::TConstSetBitIterator_0131edb0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0131edb0
TConstSetBitIterator_0131edb0& TConstSetBitIterator_0131edb0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0131edd0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0131edd0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0131edd0& operator++();
};

TConstSetBitIterator_0131edd0::TConstSetBitIterator_0131edd0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0131edd0
TConstSetBitIterator_0131edd0& TConstSetBitIterator_0131edd0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0131ee20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0131ee20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0131ee20& operator++();
};

TConstSetBitIterator_0131ee20::TConstSetBitIterator_0131ee20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0131ee20
TConstSetBitIterator_0131ee20& TConstSetBitIterator_0131ee20::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0131ee70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0131ee70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0131ee70& operator++();
};

TConstSetBitIterator_0131ee70::TConstSetBitIterator_0131ee70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0131ee70
TConstSetBitIterator_0131ee70& TConstSetBitIterator_0131ee70::operator++()
{
    It.Advance();
    return *this;
}
