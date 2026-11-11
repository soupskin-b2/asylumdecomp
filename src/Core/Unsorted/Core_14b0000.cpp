// Core_14b0000.cpp: 20 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C_view {
    int sub_014a5c40();
};

int sub_0053dfa0(...);
// @baa 0x014b31c0
undefined4 UTexture2D::sub_014b31c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view *)(((char *)this + 8)))->sub_014a5c40();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

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

struct TConstSetBitIterator_014b31f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_014b31f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_014b31f0& operator++();
};

TConstSetBitIterator_014b31f0::TConstSetBitIterator_014b31f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x014b31f0
TConstSetBitIterator_014b31f0& TConstSetBitIterator_014b31f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_014b3240 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_014b3240(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_014b3240& operator++();
};

TConstSetBitIterator_014b3240::TConstSetBitIterator_014b3240(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x014b3240
TConstSetBitIterator_014b3240& TConstSetBitIterator_014b3240::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_014b3290 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_014b3290(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_014b3290& operator++();
};

TConstSetBitIterator_014b3290::TConstSetBitIterator_014b3290(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x014b3290
TConstSetBitIterator_014b3290& TConstSetBitIterator_014b3290::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_014b32e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_014b32e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_014b32e0& operator++();
};

TConstSetBitIterator_014b32e0::TConstSetBitIterator_014b32e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x014b32e0
TConstSetBitIterator_014b32e0& TConstSetBitIterator_014b32e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_014b3330 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_014b3330(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_014b3330& operator++();
};

TConstSetBitIterator_014b3330::TConstSetBitIterator_014b3330(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x014b3330
TConstSetBitIterator_014b3330& TConstSetBitIterator_014b3330::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_014b34a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_014b34a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_014b34a0& operator++();
};

TConstSetBitIterator_014b34a0::TConstSetBitIterator_014b34a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x014b34a0
TConstSetBitIterator_014b34a0& TConstSetBitIterator_014b34a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_014b34f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_014b34f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_014b34f0& operator++();
};

TConstSetBitIterator_014b34f0::TConstSetBitIterator_014b34f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x014b34f0
TConstSetBitIterator_014b34f0& TConstSetBitIterator_014b34f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_014b3540 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_014b3540(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_014b3540& operator++();
};

TConstSetBitIterator_014b3540::TConstSetBitIterator_014b3540(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x014b3540
TConstSetBitIterator_014b3540& TConstSetBitIterator_014b3540::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_014b3590 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_014b3590(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_014b3590& operator++();
};

TConstSetBitIterator_014b3590::TConstSetBitIterator_014b3590(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x014b3590
TConstSetBitIterator_014b3590& TConstSetBitIterator_014b3590::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_014b35e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_014b35e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_014b35e0& operator++();
};

TConstSetBitIterator_014b35e0::TConstSetBitIterator_014b35e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x014b35e0
TConstSetBitIterator_014b35e0& TConstSetBitIterator_014b35e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_014b3630 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_014b3630(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_014b3630& operator++();
};

TConstSetBitIterator_014b3630::TConstSetBitIterator_014b3630(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x014b3630
TConstSetBitIterator_014b3630& TConstSetBitIterator_014b3630::operator++()
{
    It.Advance();
    return *this;
}

void sub_014ad770();
// @baa 0x014b36f0
void sub_014b36f0(void) { sub_014ad770(); }

// @baa 0x014b3700
IMPLEMENT_CLASS_AT(UUISceneFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\UnUIEditor.cpp", 32);

// @baa 0x014b3760
// @baa 0x014b3860
IMPLEMENT_CLASS_AT(UUISceneFactoryText, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\UnUIEditor.cpp", 34);

// @baa 0x014b38c0
int sub_0060b320(void);
extern undefined * g_022b3668;
// @baa 0x014b38e0
undefined4 * UExporter::sub_014b38e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b320();
  *param_1 = (undefined4)(&g_022b3668);
  return param_1;
}

// @baa 0x014b3900
IMPLEMENT_CLASS_AT(UUISceneExporter, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\UnUIEditor.cpp", 36);

// @baa 0x014b3960
