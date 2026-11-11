// Engine_0f80000.cpp: 11 functions
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

struct TConstSetBitIterator_00f88bb0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f88bb0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f88bb0& operator++();
};

TConstSetBitIterator_00f88bb0::TConstSetBitIterator_00f88bb0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f88bb0
TConstSetBitIterator_00f88bb0& TConstSetBitIterator_00f88bb0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00f88c00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f88c00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f88c00& operator++();
};

TConstSetBitIterator_00f88c00::TConstSetBitIterator_00f88c00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f88c00
TConstSetBitIterator_00f88c00& TConstSetBitIterator_00f88c00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00f88c50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f88c50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f88c50& operator++();
};

TConstSetBitIterator_00f88c50::TConstSetBitIterator_00f88c50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f88c50
TConstSetBitIterator_00f88c50& TConstSetBitIterator_00f88c50::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00f88ca0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f88ca0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f88ca0& operator++();
};

TConstSetBitIterator_00f88ca0::TConstSetBitIterator_00f88ca0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f88ca0
TConstSetBitIterator_00f88ca0& TConstSetBitIterator_00f88ca0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00f88cf0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f88cf0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f88cf0& operator++();
};

TConstSetBitIterator_00f88cf0::TConstSetBitIterator_00f88cf0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f88cf0
TConstSetBitIterator_00f88cf0& TConstSetBitIterator_00f88cf0::operator++()
{
    It.Advance();
    return *this;
}

struct Arr {
    int* Data;      // +0x00
    int Count;      // +0x04
    int MaxNum;     // +0x08
    Arr();
    ~Arr();
};

void sub_0054f6d0(Arr*);
struct SubT {
    char pad0[0x10];   // prefix before Data
    int* Data;         // +0x10 (parent+0x1c)
    int Count;         // +0x14
    int MaxNum;        // +0x18
    SubT(int, int);    // -> sub_005538b0 (implicit __thiscall, ret 8)
};

struct C {
    Arr arr;          // +0x00
    SubT sub;         // +0x0c  (size 0x1c)
    int d;            // +0x28
    int e;            // +0x2c
    C();
};

Arr::Arr() { Data = 0; Count = 0; MaxNum = 0; }

Arr::~Arr() { sub_0054f6d0(this); }

// @baa 0x00f88ec0
C::C() : sub(0, 0) {
    d = 0; e = 0;
}

struct TConstSetBitIterator_00f88f20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f88f20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f88f20& operator++();
};

TConstSetBitIterator_00f88f20::TConstSetBitIterator_00f88f20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f88f20
TConstSetBitIterator_00f88f20& TConstSetBitIterator_00f88f20::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00f88f70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f88f70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f88f70& operator++();
};

TConstSetBitIterator_00f88f70::TConstSetBitIterator_00f88f70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f88f70
TConstSetBitIterator_00f88f70& TConstSetBitIterator_00f88f70::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00f88fc0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f88fc0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f88fc0& operator++();
};

TConstSetBitIterator_00f88fc0::TConstSetBitIterator_00f88fc0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f88fc0
TConstSetBitIterator_00f88fc0& TConstSetBitIterator_00f88fc0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00f89010 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f89010(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f89010& operator++();
};

TConstSetBitIterator_00f89010::TConstSetBitIterator_00f89010(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f89010
TConstSetBitIterator_00f89010& TConstSetBitIterator_00f89010::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00f89060 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00f89060(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00f89060& operator++();
};

TConstSetBitIterator_00f89060::TConstSetBitIterator_00f89060(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00f89060
TConstSetBitIterator_00f89060& TConstSetBitIterator_00f89060::operator++()
{
    It.Advance();
    return *this;
}
