// FMod_1020000.cpp: 98 functions
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

struct TConstSetBitIterator_01022600 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01022600(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01022600& operator++();
};

TConstSetBitIterator_01022600::TConstSetBitIterator_01022600(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01022600
TConstSetBitIterator_01022600& TConstSetBitIterator_01022600::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01022620 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01022620(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01022620& operator++();
};

TConstSetBitIterator_01022620::TConstSetBitIterator_01022620(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01022620
TConstSetBitIterator_01022620& TConstSetBitIterator_01022620::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01022670 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01022670(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01022670& operator++();
};

TConstSetBitIterator_01022670::TConstSetBitIterator_01022670(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01022670
TConstSetBitIterator_01022670& TConstSetBitIterator_01022670::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_010226c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010226c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010226c0& operator++();
};

TConstSetBitIterator_010226c0::TConstSetBitIterator_010226c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010226c0
TConstSetBitIterator_010226c0& TConstSetBitIterator_010226c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01022710 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01022710(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01022710& operator++();
};

TConstSetBitIterator_01022710::TConstSetBitIterator_01022710(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01022710
TConstSetBitIterator_01022710& TConstSetBitIterator_01022710::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01022760 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01022760(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01022760& operator++();
};

TConstSetBitIterator_01022760::TConstSetBitIterator_01022760(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01022760
TConstSetBitIterator_01022760& TConstSetBitIterator_01022760::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01022780 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01022780(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01022780& operator++();
};

TConstSetBitIterator_01022780::TConstSetBitIterator_01022780(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01022780
TConstSetBitIterator_01022780& TConstSetBitIterator_01022780::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_010227a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010227a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010227a0& operator++();
};

TConstSetBitIterator_010227a0::TConstSetBitIterator_010227a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010227a0
TConstSetBitIterator_010227a0& TConstSetBitIterator_010227a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_010227c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010227c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010227c0& operator++();
};

TConstSetBitIterator_010227c0::TConstSetBitIterator_010227c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010227c0
TConstSetBitIterator_010227c0& TConstSetBitIterator_010227c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_010227e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010227e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010227e0& operator++();
};

TConstSetBitIterator_010227e0::TConstSetBitIterator_010227e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010227e0
TConstSetBitIterator_010227e0& TConstSetBitIterator_010227e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01022800 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01022800(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01022800& operator++();
};

TConstSetBitIterator_01022800::TConstSetBitIterator_01022800(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01022800
TConstSetBitIterator_01022800& TConstSetBitIterator_01022800::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01022820 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01022820(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01022820& operator++();
};

TConstSetBitIterator_01022820::TConstSetBitIterator_01022820(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01022820
TConstSetBitIterator_01022820& TConstSetBitIterator_01022820::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01022840 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01022840(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01022840& operator++();
};

TConstSetBitIterator_01022840::TConstSetBitIterator_01022840(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01022840
TConstSetBitIterator_01022840& TConstSetBitIterator_01022840::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01022860 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01022860(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01022860& operator++();
};

TConstSetBitIterator_01022860::TConstSetBitIterator_01022860(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01022860
TConstSetBitIterator_01022860& TConstSetBitIterator_01022860::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01022880 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01022880(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01022880& operator++();
};

TConstSetBitIterator_01022880::TConstSetBitIterator_01022880(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01022880
TConstSetBitIterator_01022880& TConstSetBitIterator_01022880::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_010228a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010228a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010228a0& operator++();
};

TConstSetBitIterator_010228a0::TConstSetBitIterator_010228a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010228a0
TConstSetBitIterator_010228a0& TConstSetBitIterator_010228a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_010228c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010228c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010228c0& operator++();
};

TConstSetBitIterator_010228c0::TConstSetBitIterator_010228c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010228c0
TConstSetBitIterator_010228c0& TConstSetBitIterator_010228c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_010228e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010228e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010228e0& operator++();
};

TConstSetBitIterator_010228e0::TConstSetBitIterator_010228e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010228e0
TConstSetBitIterator_010228e0& TConstSetBitIterator_010228e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01022900 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01022900(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01022900& operator++();
};

TConstSetBitIterator_01022900::TConstSetBitIterator_01022900(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01022900
TConstSetBitIterator_01022900& TConstSetBitIterator_01022900::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01022920 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01022920(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01022920& operator++();
};

TConstSetBitIterator_01022920::TConstSetBitIterator_01022920(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01022920
TConstSetBitIterator_01022920& TConstSetBitIterator_01022920::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01022940 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01022940(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01022940& operator++();
};

TConstSetBitIterator_01022940::TConstSetBitIterator_01022940(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01022940
TConstSetBitIterator_01022940& TConstSetBitIterator_01022940::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01022960 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01022960(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01022960& operator++();
};

TConstSetBitIterator_01022960::TConstSetBitIterator_01022960(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01022960
TConstSetBitIterator_01022960& TConstSetBitIterator_01022960::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_010229b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010229b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010229b0& operator++();
};

TConstSetBitIterator_010229b0::TConstSetBitIterator_010229b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010229b0
TConstSetBitIterator_010229b0& TConstSetBitIterator_010229b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01022a00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01022a00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01022a00& operator++();
};

TConstSetBitIterator_01022a00::TConstSetBitIterator_01022a00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01022a00
TConstSetBitIterator_01022a00& TConstSetBitIterator_01022a00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01022a50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01022a50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01022a50& operator++();
};

TConstSetBitIterator_01022a50::TConstSetBitIterator_01022a50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01022a50
TConstSetBitIterator_01022a50& TConstSetBitIterator_01022a50::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01022aa0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01022aa0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01022aa0& operator++();
};

TConstSetBitIterator_01022aa0::TConstSetBitIterator_01022aa0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01022aa0
TConstSetBitIterator_01022aa0& TConstSetBitIterator_01022aa0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01022af0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01022af0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01022af0& operator++();
};

TConstSetBitIterator_01022af0::TConstSetBitIterator_01022af0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01022af0
TConstSetBitIterator_01022af0& TConstSetBitIterator_01022af0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01022b40 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01022b40(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01022b40& operator++();
};

TConstSetBitIterator_01022b40::TConstSetBitIterator_01022b40(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01022b40
TConstSetBitIterator_01022b40& TConstSetBitIterator_01022b40::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01022b90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01022b90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01022b90& operator++();
};

TConstSetBitIterator_01022b90::TConstSetBitIterator_01022b90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01022b90
TConstSetBitIterator_01022b90& TConstSetBitIterator_01022b90::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01022be0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01022be0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01022be0& operator++();
};

TConstSetBitIterator_01022be0::TConstSetBitIterator_01022be0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01022be0
TConstSetBitIterator_01022be0& TConstSetBitIterator_01022be0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01022c30 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01022c30(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01022c30& operator++();
};

TConstSetBitIterator_01022c30::TConstSetBitIterator_01022c30(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01022c30
TConstSetBitIterator_01022c30& TConstSetBitIterator_01022c30::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01022c80 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01022c80(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01022c80& operator++();
};

TConstSetBitIterator_01022c80::TConstSetBitIterator_01022c80(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01022c80
TConstSetBitIterator_01022c80& TConstSetBitIterator_01022c80::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01022cd0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01022cd0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01022cd0& operator++();
};

TConstSetBitIterator_01022cd0::TConstSetBitIterator_01022cd0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01022cd0
TConstSetBitIterator_01022cd0& TConstSetBitIterator_01022cd0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01022d20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01022d20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01022d20& operator++();
};

TConstSetBitIterator_01022d20::TConstSetBitIterator_01022d20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01022d20
TConstSetBitIterator_01022d20& TConstSetBitIterator_01022d20::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01022d70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01022d70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01022d70& operator++();
};

TConstSetBitIterator_01022d70::TConstSetBitIterator_01022d70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01022d70
TConstSetBitIterator_01022d70& TConstSetBitIterator_01022d70::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01022dc0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01022dc0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01022dc0& operator++();
};

TConstSetBitIterator_01022dc0::TConstSetBitIterator_01022dc0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01022dc0
TConstSetBitIterator_01022dc0& TConstSetBitIterator_01022dc0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01022e10 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01022e10(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01022e10& operator++();
};

TConstSetBitIterator_01022e10::TConstSetBitIterator_01022e10(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01022e10
TConstSetBitIterator_01022e10& TConstSetBitIterator_01022e10::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01022e60 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01022e60(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01022e60& operator++();
};

TConstSetBitIterator_01022e60::TConstSetBitIterator_01022e60(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01022e60
TConstSetBitIterator_01022e60& TConstSetBitIterator_01022e60::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01022eb0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01022eb0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01022eb0& operator++();
};

TConstSetBitIterator_01022eb0::TConstSetBitIterator_01022eb0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01022eb0
TConstSetBitIterator_01022eb0& TConstSetBitIterator_01022eb0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01022ed0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01022ed0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01022ed0& operator++();
};

TConstSetBitIterator_01022ed0::TConstSetBitIterator_01022ed0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01022ed0
TConstSetBitIterator_01022ed0& TConstSetBitIterator_01022ed0::operator++()
{
    It.Advance();
    return *this;
}

struct C {
    undefined4 sub_01022f60(byte);
    int sub_0054eec0();
};

int sub_0053dfa0(...);
// @baa 0x01022f60
undefined4 C::sub_01022f60(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C *)(((char *)this + 0x20)))->sub_0054eec0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01022f90 {
    undefined4 * sub_01022f90(undefined4 *);
    int sub_00555160(int);
};

// @baa 0x01022f90
undefined4 * C_01022f90::sub_01022f90(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  ((C_01022f90 *)(((char *)this + 0x20)))->sub_00555160((int)(param_2 + 8));
  return param_1;
}

struct C_010230c0 {
    undefined4 * sub_010230c0(undefined4 *);
    int sub_01022460(int);
};

// @baa 0x010230c0
undefined4 * C_010230c0::sub_010230c0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_010230c0 *)(((char *)this + 4)))->sub_01022460((int)(param_2 + 1));
  return param_1;
}

struct TConstSetBitIterator_010230e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010230e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010230e0& operator++();
};

TConstSetBitIterator_010230e0::TConstSetBitIterator_010230e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010230e0
TConstSetBitIterator_010230e0& TConstSetBitIterator_010230e0::operator++()
{
    It.Advance();
    return *this;
}

struct C_01023100 {
    int sub_01023100();
};

// @baa 0x01023100
int C_01023100::sub_01023100(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01023120 {
    int sub_01023120();
};

// @baa 0x01023120
int C_01023120::sub_01023120(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01023140 {
    int sub_01023140();
};

// @baa 0x01023140
int C_01023140::sub_01023140(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01023160 {
    int sub_01023160();
};

// @baa 0x01023160
int C_01023160::sub_01023160(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01023180 {
    int sub_01023180();
};

// @baa 0x01023180
int C_01023180::sub_01023180(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct TConstSetBitIterator_010231a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010231a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010231a0& operator++();
};

TConstSetBitIterator_010231a0::TConstSetBitIterator_010231a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010231a0
TConstSetBitIterator_010231a0& TConstSetBitIterator_010231a0::operator++()
{
    It.Advance();
    return *this;
}

struct C_010231c0 {
    int sub_010231c0();
};

// @baa 0x010231c0
int C_010231c0::sub_010231c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0xac + *(int *)*param_1;
}

struct TConstSetBitIterator_010231d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010231d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010231d0& operator++();
};

TConstSetBitIterator_010231d0::TConstSetBitIterator_010231d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010231d0
TConstSetBitIterator_010231d0& TConstSetBitIterator_010231d0::operator++()
{
    It.Advance();
    return *this;
}

struct C_010231f0 {
    int sub_010231f0();
};

// @baa 0x010231f0
int C_010231f0::sub_010231f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0xb0 + *(int *)*param_1;
}

struct TConstSetBitIterator_01023200 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01023200(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01023200& operator++();
};

TConstSetBitIterator_01023200::TConstSetBitIterator_01023200(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01023200
TConstSetBitIterator_01023200& TConstSetBitIterator_01023200::operator++()
{
    It.Advance();
    return *this;
}

struct C_01023220 {
    int sub_01023220();
};

// @baa 0x01023220
int C_01023220::sub_01023220(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0xcc + *(int *)*param_1;
}

struct TConstSetBitIterator_01023230 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01023230(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01023230& operator++();
};

TConstSetBitIterator_01023230::TConstSetBitIterator_01023230(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01023230
TConstSetBitIterator_01023230& TConstSetBitIterator_01023230::operator++()
{
    It.Advance();
    return *this;
}

struct C_01023250 {
    int sub_01023250();
};

// @baa 0x01023250
int C_01023250::sub_01023250(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 300 + *(int *)*param_1;
}

struct TConstSetBitIterator_01023260 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01023260(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01023260& operator++();
};

TConstSetBitIterator_01023260::TConstSetBitIterator_01023260(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01023260
TConstSetBitIterator_01023260& TConstSetBitIterator_01023260::operator++()
{
    It.Advance();
    return *this;
}

struct C_01023280 {
    int sub_01023280();
};

// @baa 0x01023280
int C_01023280::sub_01023280(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 200 + *(int *)*param_1;
}

struct TConstSetBitIterator_01023290 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01023290(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01023290& operator++();
};

TConstSetBitIterator_01023290::TConstSetBitIterator_01023290(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01023290
TConstSetBitIterator_01023290& TConstSetBitIterator_01023290::operator++()
{
    It.Advance();
    return *this;
}

struct C_010232b0 {
    int sub_010232b0();
};

// @baa 0x010232b0
int C_010232b0::sub_010232b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0xc4 + *(int *)*param_1;
}

struct TConstSetBitIterator_010232c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010232c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010232c0& operator++();
};

TConstSetBitIterator_010232c0::TConstSetBitIterator_010232c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010232c0
TConstSetBitIterator_010232c0& TConstSetBitIterator_010232c0::operator++()
{
    It.Advance();
    return *this;
}

struct C_010232e0 {
    int sub_010232e0();
};

// @baa 0x010232e0
int C_010232e0::sub_010232e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x8c + *(int *)*param_1;
}

struct TConstSetBitIterator_010232f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010232f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010232f0& operator++();
};

TConstSetBitIterator_010232f0::TConstSetBitIterator_010232f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010232f0
TConstSetBitIterator_010232f0& TConstSetBitIterator_010232f0::operator++()
{
    It.Advance();
    return *this;
}

struct C_01023310 {
    int sub_01023310();
};

// @baa 0x01023310
int C_01023310::sub_01023310(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0xa0 + *(int *)*param_1;
}

struct TConstSetBitIterator_01023320 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01023320(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01023320& operator++();
};

TConstSetBitIterator_01023320::TConstSetBitIterator_01023320(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01023320
TConstSetBitIterator_01023320& TConstSetBitIterator_01023320::operator++()
{
    It.Advance();
    return *this;
}

struct C_01023340 {
    int sub_01023340();
};

// @baa 0x01023340
int C_01023340::sub_01023340(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x8c + *(int *)*param_1;
}

struct TConstSetBitIterator_01023350 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01023350(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01023350& operator++();
};

TConstSetBitIterator_01023350::TConstSetBitIterator_01023350(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01023350
TConstSetBitIterator_01023350& TConstSetBitIterator_01023350::operator++()
{
    It.Advance();
    return *this;
}

struct C_01023370 {
    int sub_01023370();
};

// @baa 0x01023370
int C_01023370::sub_01023370(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x94 + *(int *)*param_1;
}

struct TConstSetBitIterator_01023380 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01023380(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01023380& operator++();
};

TConstSetBitIterator_01023380::TConstSetBitIterator_01023380(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01023380
TConstSetBitIterator_01023380& TConstSetBitIterator_01023380::operator++()
{
    It.Advance();
    return *this;
}

struct C_010233a0 {
    int sub_010233a0();
};

// @baa 0x010233a0
int C_010233a0::sub_010233a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x88 + *(int *)*param_1;
}

struct TConstSetBitIterator_010233b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010233b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010233b0& operator++();
};

TConstSetBitIterator_010233b0::TConstSetBitIterator_010233b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010233b0
TConstSetBitIterator_010233b0& TConstSetBitIterator_010233b0::operator++()
{
    It.Advance();
    return *this;
}

struct C_010233d0 {
    int sub_010233d0();
};

// @baa 0x010233d0
int C_010233d0::sub_010233d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0xa0 + *(int *)*param_1;
}

struct C_010233e0 {
    int sub_010233e0(int);
    int sub_0101e070(int, int);
};

// @baa 0x010233e0
int C_010233e0::sub_010233e0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_010233e0 *)(this))->sub_0101e070((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x20 + *param_1;
  }
  return 0;
}

struct C_01023410 {
    int sub_01023410();
};

// @baa 0x01023410
int C_01023410::sub_01023410(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_01023420 {
    int sub_01023420(int);
    int sub_0101e1b0(int, int);
};

// @baa 0x01023420
int C_01023420::sub_01023420(int param_2)
{
    int * param_1 = (int *)this;
  ((C_01023420 *)(this))->sub_0101e1b0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x20 + *param_1;
  }
  return 0;
}

struct C_01023450 {
    int sub_01023450();
};

// @baa 0x01023450
int C_01023450::sub_01023450(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_01023460 {
    int sub_01023460(int);
    int sub_0101e2f0(int, int);
};

// @baa 0x01023460
int C_01023460::sub_01023460(int param_2)
{
    int * param_1 = (int *)this;
  ((C_01023460 *)(this))->sub_0101e2f0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x20 + *param_1;
  }
  return 0;
}

struct C_01023490 {
    int sub_01023490();
};

// @baa 0x01023490
int C_01023490::sub_01023490(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_010234a0 {
    int sub_010234a0(int);
    int sub_0101e430(int, int);
};

// @baa 0x010234a0
int C_010234a0::sub_010234a0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_010234a0 *)(this))->sub_0101e430((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x20 + *param_1;
  }
  return 0;
}

struct C_010234d0 {
    int sub_010234d0();
};

// @baa 0x010234d0
int C_010234d0::sub_010234d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_010234e0 {
    int sub_010234e0(int);
    int sub_0101e570(int, int);
};

// @baa 0x010234e0
int C_010234e0::sub_010234e0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_010234e0 *)(this))->sub_0101e570((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x20 + *param_1;
  }
  return 0;
}

struct C_01023510 {
    int sub_01023510();
};

// @baa 0x01023510
int C_01023510::sub_01023510(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct TConstSetBitIterator_010236b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010236b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010236b0& operator++();
};

TConstSetBitIterator_010236b0::TConstSetBitIterator_010236b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010236b0
TConstSetBitIterator_010236b0& TConstSetBitIterator_010236b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_010236d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010236d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010236d0& operator++();
};

TConstSetBitIterator_010236d0::TConstSetBitIterator_010236d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010236d0
TConstSetBitIterator_010236d0& TConstSetBitIterator_010236d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_010236f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010236f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010236f0& operator++();
};

TConstSetBitIterator_010236f0::TConstSetBitIterator_010236f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010236f0
TConstSetBitIterator_010236f0& TConstSetBitIterator_010236f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01023710 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01023710(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01023710& operator++();
};

TConstSetBitIterator_01023710::TConstSetBitIterator_01023710(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01023710
TConstSetBitIterator_01023710& TConstSetBitIterator_01023710::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01023730 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01023730(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01023730& operator++();
};

TConstSetBitIterator_01023730::TConstSetBitIterator_01023730(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01023730
TConstSetBitIterator_01023730& TConstSetBitIterator_01023730::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01023750 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01023750(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01023750& operator++();
};

TConstSetBitIterator_01023750::TConstSetBitIterator_01023750(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01023750
TConstSetBitIterator_01023750& TConstSetBitIterator_01023750::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01023770 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01023770(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01023770& operator++();
};

TConstSetBitIterator_01023770::TConstSetBitIterator_01023770(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01023770
TConstSetBitIterator_01023770& TConstSetBitIterator_01023770::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01023790 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01023790(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01023790& operator++();
};

TConstSetBitIterator_01023790::TConstSetBitIterator_01023790(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01023790
TConstSetBitIterator_01023790& TConstSetBitIterator_01023790::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_010237b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010237b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010237b0& operator++();
};

TConstSetBitIterator_010237b0::TConstSetBitIterator_010237b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010237b0
TConstSetBitIterator_010237b0& TConstSetBitIterator_010237b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_010237d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010237d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010237d0& operator++();
};

TConstSetBitIterator_010237d0::TConstSetBitIterator_010237d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010237d0
TConstSetBitIterator_010237d0& TConstSetBitIterator_010237d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_010237f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010237f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010237f0& operator++();
};

TConstSetBitIterator_010237f0::TConstSetBitIterator_010237f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010237f0
TConstSetBitIterator_010237f0& TConstSetBitIterator_010237f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01023840 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01023840(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01023840& operator++();
};

TConstSetBitIterator_01023840::TConstSetBitIterator_01023840(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01023840
TConstSetBitIterator_01023840& TConstSetBitIterator_01023840::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01023890 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01023890(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01023890& operator++();
};

TConstSetBitIterator_01023890::TConstSetBitIterator_01023890(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01023890
TConstSetBitIterator_01023890& TConstSetBitIterator_01023890::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_010238e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_010238e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_010238e0& operator++();
};

TConstSetBitIterator_010238e0::TConstSetBitIterator_010238e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x010238e0
TConstSetBitIterator_010238e0& TConstSetBitIterator_010238e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01023930 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01023930(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01023930& operator++();
};

TConstSetBitIterator_01023930::TConstSetBitIterator_01023930(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01023930
TConstSetBitIterator_01023930& TConstSetBitIterator_01023930::operator++()
{
    It.Advance();
    return *this;
}
