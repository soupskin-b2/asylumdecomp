// Editor_1090000.cpp: 13 functions
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

struct TConstSetBitIterator_0109ce40 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0109ce40(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0109ce40& operator++();
};

TConstSetBitIterator_0109ce40::TConstSetBitIterator_0109ce40(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0109ce40
TConstSetBitIterator_0109ce40& TConstSetBitIterator_0109ce40::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0109d050 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0109d050(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0109d050& operator++();
};

TConstSetBitIterator_0109d050::TConstSetBitIterator_0109d050(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0109d050
TConstSetBitIterator_0109d050& TConstSetBitIterator_0109d050::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0109d0a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0109d0a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0109d0a0& operator++();
};

TConstSetBitIterator_0109d0a0::TConstSetBitIterator_0109d0a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0109d0a0
TConstSetBitIterator_0109d0a0& TConstSetBitIterator_0109d0a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0109d0f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0109d0f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0109d0f0& operator++();
};

TConstSetBitIterator_0109d0f0::TConstSetBitIterator_0109d0f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0109d0f0
TConstSetBitIterator_0109d0f0& TConstSetBitIterator_0109d0f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0109d140 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0109d140(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0109d140& operator++();
};

TConstSetBitIterator_0109d140::TConstSetBitIterator_0109d140(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0109d140
TConstSetBitIterator_0109d140& TConstSetBitIterator_0109d140::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0109d190 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0109d190(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0109d190& operator++();
};

TConstSetBitIterator_0109d190::TConstSetBitIterator_0109d190(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0109d190
TConstSetBitIterator_0109d190& TConstSetBitIterator_0109d190::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0109d1e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0109d1e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0109d1e0& operator++();
};

TConstSetBitIterator_0109d1e0::TConstSetBitIterator_0109d1e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0109d1e0
TConstSetBitIterator_0109d1e0& TConstSetBitIterator_0109d1e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0109d230 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0109d230(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0109d230& operator++();
};

TConstSetBitIterator_0109d230::TConstSetBitIterator_0109d230(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0109d230
TConstSetBitIterator_0109d230& TConstSetBitIterator_0109d230::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0109d280 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0109d280(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0109d280& operator++();
};

TConstSetBitIterator_0109d280::TConstSetBitIterator_0109d280(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0109d280
TConstSetBitIterator_0109d280& TConstSetBitIterator_0109d280::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0109d2d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0109d2d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0109d2d0& operator++();
};

TConstSetBitIterator_0109d2d0::TConstSetBitIterator_0109d2d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0109d2d0
TConstSetBitIterator_0109d2d0& TConstSetBitIterator_0109d2d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0109d320 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0109d320(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0109d320& operator++();
};

TConstSetBitIterator_0109d320::TConstSetBitIterator_0109d320(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0109d320
TConstSetBitIterator_0109d320& TConstSetBitIterator_0109d320::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0109d370 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0109d370(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0109d370& operator++();
};

TConstSetBitIterator_0109d370::TConstSetBitIterator_0109d370(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0109d370
TConstSetBitIterator_0109d370& TConstSetBitIterator_0109d370::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0109d3c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0109d3c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0109d3c0& operator++();
};

TConstSetBitIterator_0109d3c0::TConstSetBitIterator_0109d3c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0109d3c0
TConstSetBitIterator_0109d3c0& TConstSetBitIterator_0109d3c0::operator++()
{
    It.Advance();
    return *this;
}
