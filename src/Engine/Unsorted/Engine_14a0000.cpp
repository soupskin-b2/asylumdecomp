// Engine_14a0000.cpp: 24 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

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

struct TConstSetBitIterator_014ace50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_014ace50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_014ace50& operator++();
};

TConstSetBitIterator_014ace50::TConstSetBitIterator_014ace50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x014ace50
TConstSetBitIterator_014ace50& TConstSetBitIterator_014ace50::operator++()
{
    It.Advance();
    return *this;
}

struct C_view {
    int sub_014a63b0(int);
};

// @baa 0x014ace70
undefined4 * UTexture2D::sub_014ace70(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_view *)(((char *)this + 4)))->sub_014a63b0((int)(param_2 + 1));
  return param_1;
}

struct M_014ace90 { void sub_014a5c40(); };

struct C { char pad[8]; M_014ace90 m; void sub_014ace90(); };

// @baa 0x014ace90
void C::sub_014ace90() { m.sub_014a5c40(); }

struct TConstSetBitIterator_014ad200 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_014ad200(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_014ad200& operator++();
};

TConstSetBitIterator_014ad200::TConstSetBitIterator_014ad200(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x014ad200
TConstSetBitIterator_014ad200& TConstSetBitIterator_014ad200::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_014ad220 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_014ad220(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_014ad220& operator++();
};

TConstSetBitIterator_014ad220::TConstSetBitIterator_014ad220(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x014ad220
TConstSetBitIterator_014ad220& TConstSetBitIterator_014ad220::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_014ad240 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_014ad240(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_014ad240& operator++();
};

TConstSetBitIterator_014ad240::TConstSetBitIterator_014ad240(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x014ad240
TConstSetBitIterator_014ad240& TConstSetBitIterator_014ad240::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_014ad260 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_014ad260(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_014ad260& operator++();
};

TConstSetBitIterator_014ad260::TConstSetBitIterator_014ad260(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x014ad260
TConstSetBitIterator_014ad260& TConstSetBitIterator_014ad260::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_014ad280 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_014ad280(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_014ad280& operator++();
};

TConstSetBitIterator_014ad280::TConstSetBitIterator_014ad280(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x014ad280
TConstSetBitIterator_014ad280& TConstSetBitIterator_014ad280::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_014ad2d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_014ad2d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_014ad2d0& operator++();
};

TConstSetBitIterator_014ad2d0::TConstSetBitIterator_014ad2d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x014ad2d0
TConstSetBitIterator_014ad2d0& TConstSetBitIterator_014ad2d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_014ad320 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_014ad320(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_014ad320& operator++();
};

TConstSetBitIterator_014ad320::TConstSetBitIterator_014ad320(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x014ad320
TConstSetBitIterator_014ad320& TConstSetBitIterator_014ad320::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_014ad370 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_014ad370(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_014ad370& operator++();
};

TConstSetBitIterator_014ad370::TConstSetBitIterator_014ad370(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x014ad370
TConstSetBitIterator_014ad370& TConstSetBitIterator_014ad370::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_014ad3c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_014ad3c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_014ad3c0& operator++();
};

TConstSetBitIterator_014ad3c0::TConstSetBitIterator_014ad3c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x014ad3c0
TConstSetBitIterator_014ad3c0& TConstSetBitIterator_014ad3c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_014ad410 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_014ad410(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_014ad410& operator++();
};

TConstSetBitIterator_014ad410::TConstSetBitIterator_014ad410(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x014ad410
TConstSetBitIterator_014ad410& TConstSetBitIterator_014ad410::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_014ad430 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_014ad430(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_014ad430& operator++();
};

TConstSetBitIterator_014ad430::TConstSetBitIterator_014ad430(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x014ad430
TConstSetBitIterator_014ad430& TConstSetBitIterator_014ad430::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_014ad450 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_014ad450(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_014ad450& operator++();
};

TConstSetBitIterator_014ad450::TConstSetBitIterator_014ad450(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x014ad450
TConstSetBitIterator_014ad450& TConstSetBitIterator_014ad450::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_014ad470 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_014ad470(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_014ad470& operator++();
};

TConstSetBitIterator_014ad470::TConstSetBitIterator_014ad470(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x014ad470
TConstSetBitIterator_014ad470& TConstSetBitIterator_014ad470::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_014ad490 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_014ad490(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_014ad490& operator++();
};

TConstSetBitIterator_014ad490::TConstSetBitIterator_014ad490(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x014ad490
TConstSetBitIterator_014ad490& TConstSetBitIterator_014ad490::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_014ad4b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_014ad4b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_014ad4b0& operator++();
};

TConstSetBitIterator_014ad4b0::TConstSetBitIterator_014ad4b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x014ad4b0
TConstSetBitIterator_014ad4b0& TConstSetBitIterator_014ad4b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_014ad500 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_014ad500(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_014ad500& operator++();
};

TConstSetBitIterator_014ad500::TConstSetBitIterator_014ad500(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x014ad500
TConstSetBitIterator_014ad500& TConstSetBitIterator_014ad500::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_014ad550 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_014ad550(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_014ad550& operator++();
};

TConstSetBitIterator_014ad550::TConstSetBitIterator_014ad550(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x014ad550
TConstSetBitIterator_014ad550& TConstSetBitIterator_014ad550::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_014ad5a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_014ad5a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_014ad5a0& operator++();
};

TConstSetBitIterator_014ad5a0::TConstSetBitIterator_014ad5a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x014ad5a0
TConstSetBitIterator_014ad5a0& TConstSetBitIterator_014ad5a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_014ad5f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_014ad5f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_014ad5f0& operator++();
};

TConstSetBitIterator_014ad5f0::TConstSetBitIterator_014ad5f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x014ad5f0
TConstSetBitIterator_014ad5f0& TConstSetBitIterator_014ad5f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_014ad640 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_014ad640(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_014ad640& operator++();
};

TConstSetBitIterator_014ad640::TConstSetBitIterator_014ad640(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x014ad640
TConstSetBitIterator_014ad640& TConstSetBitIterator_014ad640::operator++()
{
    It.Advance();
    return *this;
}

INT sub_00dbcb50(void* Value);
struct C_014ad660
{
    char pad_00[0xc];
    void* Value;

    INT sub_014ad660();
};

// @baa 0x014ad660
INT C_014ad660::sub_014ad660()
{
    return sub_00dbcb50(Value);
}
