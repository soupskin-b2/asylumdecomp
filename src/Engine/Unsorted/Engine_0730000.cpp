// Engine_0730000.cpp (part 1 of 3): 218 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct S_007300b0 { int sub_0072ec80(); };

struct C_007300b0 { int a; C_007300b0(S_007300b0 *); };

// @baa 0x007300b0
C_007300b0::C_007300b0(S_007300b0 *s) : a(s->sub_0072ec80()) {}

struct S_007300d0 { int sub_0072ece0(); };

struct C_007300d0 { int a; C_007300d0(S_007300d0 *); };

// @baa 0x007300d0
C_007300d0::C_007300d0(S_007300d0 *s) : a(s->sub_0072ece0()) {}

struct S_007300f0 { int sub_0072ed40(); };

struct C_007300f0 { int a; C_007300f0(S_007300f0 *); };

// @baa 0x007300f0
C_007300f0::C_007300f0(S_007300f0 *s) : a(s->sub_0072ed40()) {}

extern "C" int __cdecl sub_0053df40(int Size, int Alignment);
struct FGameplayObject
{
    FGameplayObject * sub_0072bdf0();
};

// @baa 0x00730110
FGameplayObject * sub_00730110()
{
    FGameplayObject * pObject = (FGameplayObject *)sub_0053df40(0x58, 8);
    if (pObject)
        return pObject->sub_0072bdf0();
    return 0;
}

struct FGameplayObject_00730130
{
    FGameplayObject_00730130 * sub_0072bec0();
};

// @baa 0x00730130
FGameplayObject_00730130 * sub_00730130()
{
    FGameplayObject_00730130 * pObject = (FGameplayObject_00730130 *)sub_0053df40(0xcc, 8);
    if (pObject)
        return pObject->sub_0072bec0();
    return 0;
}

struct FGameplayObject_00730150
{
    FGameplayObject_00730150 * sub_0072c000();
};

// @baa 0x00730150
FGameplayObject_00730150 * sub_00730150()
{
    FGameplayObject_00730150 * pObject = (FGameplayObject_00730150 *)sub_0053df40(0x5c, 8);
    if (pObject)
        return pObject->sub_0072c000();
    return 0;
}

struct FGameplayObject_00730170
{
    FGameplayObject_00730170 * sub_0072c0d0();
};

// @baa 0x00730170
FGameplayObject_00730170 * sub_00730170()
{
    FGameplayObject_00730170 * pObject = (FGameplayObject_00730170 *)sub_0053df40(0xd4, 8);
    if (pObject)
        return pObject->sub_0072c0d0();
    return 0;
}

struct FGameplayObject_00730190
{
    FGameplayObject_00730190 * sub_0072c1b0();
};

// @baa 0x00730190
FGameplayObject_00730190 * sub_00730190()
{
    FGameplayObject_00730190 * pObject = (FGameplayObject_00730190 *)sub_0053df40(0x58, 8);
    if (pObject)
        return pObject->sub_0072c1b0();
    return 0;
}

struct FGameplayObject_007301b0
{
    FGameplayObject_007301b0 * sub_0072c270();
};

// @baa 0x007301b0
FGameplayObject_007301b0 * sub_007301b0()
{
    FGameplayObject_007301b0 * pObject = (FGameplayObject_007301b0 *)sub_0053df40(0xcc, 8);
    if (pObject)
        return pObject->sub_0072c270();
    return 0;
}

struct FGameplayObject_007301d0
{
    FGameplayObject_007301d0 * sub_0072c470();
};

// @baa 0x007301d0
FGameplayObject_007301d0 * sub_007301d0()
{
    FGameplayObject_007301d0 * pObject = (FGameplayObject_007301d0 *)sub_0053df40(0x5c, 8);
    if (pObject)
        return pObject->sub_0072c470();
    return 0;
}

struct FGameplayObject_007301f0
{
    FGameplayObject_007301f0 * sub_0072c580();
};

// @baa 0x007301f0
FGameplayObject_007301f0 * sub_007301f0()
{
    FGameplayObject_007301f0 * pObject = (FGameplayObject_007301f0 *)sub_0053df40(0xd4, 8);
    if (pObject)
        return pObject->sub_0072c580();
    return 0;
}

struct FGameplayObject_00730210
{
    FGameplayObject_00730210 * sub_0072c6f0();
};

// @baa 0x00730210
FGameplayObject_00730210 * sub_00730210()
{
    FGameplayObject_00730210 * pObject = (FGameplayObject_00730210 *)sub_0053df40(0x60, 8);
    if (pObject)
        return pObject->sub_0072c6f0();
    return 0;
}

struct FGameplayObject_00730230
{
    FGameplayObject_00730230 * sub_0072c7c0();
};

// @baa 0x00730230
FGameplayObject_00730230 * sub_00730230()
{
    FGameplayObject_00730230 * pObject = (FGameplayObject_00730230 *)sub_0053df40(0xd8, 8);
    if (pObject)
        return pObject->sub_0072c7c0();
    return 0;
}

struct FGameplayObject_00730250
{
    FGameplayObject_00730250 * sub_0072c8b0();
};

// @baa 0x00730250
FGameplayObject_00730250 * sub_00730250()
{
    FGameplayObject_00730250 * pObject = (FGameplayObject_00730250 *)sub_0053df40(0x5c, 8);
    if (pObject)
        return pObject->sub_0072c8b0();
    return 0;
}

struct FGameplayObject_00730270
{
    FGameplayObject_00730270 * sub_0072c980();
};

// @baa 0x00730270
FGameplayObject_00730270 * sub_00730270()
{
    FGameplayObject_00730270 * pObject = (FGameplayObject_00730270 *)sub_0053df40(0xd4, 8);
    if (pObject)
        return pObject->sub_0072c980();
    return 0;
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

struct TConstSetBitIterator_007302e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007302e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007302e0& operator++();
};

TConstSetBitIterator_007302e0::TConstSetBitIterator_007302e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007302e0
TConstSetBitIterator_007302e0& TConstSetBitIterator_007302e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007315f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007315f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007315f0& operator++();
};

TConstSetBitIterator_007315f0::TConstSetBitIterator_007315f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007315f0
TConstSetBitIterator_007315f0& TConstSetBitIterator_007315f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00731b10 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00731b10(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00731b10& operator++();
};

TConstSetBitIterator_00731b10::TConstSetBitIterator_00731b10(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00731b10
TConstSetBitIterator_00731b10& TConstSetBitIterator_00731b10::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00731b60 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00731b60(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00731b60& operator++();
};

TConstSetBitIterator_00731b60::TConstSetBitIterator_00731b60(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00731b60
TConstSetBitIterator_00731b60& TConstSetBitIterator_00731b60::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00731bb0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00731bb0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00731bb0& operator++();
};

TConstSetBitIterator_00731bb0::TConstSetBitIterator_00731bb0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00731bb0
TConstSetBitIterator_00731bb0& TConstSetBitIterator_00731bb0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00731e00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00731e00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00731e00& operator++();
};

TConstSetBitIterator_00731e00::TConstSetBitIterator_00731e00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00731e00
TConstSetBitIterator_00731e00& TConstSetBitIterator_00731e00::operator++()
{
    It.Advance();
    return *this;
}

class FArchive;
struct FMipArray : public FIndirectArray_Mirror_0072b900 {
    void sub_0072fe60(FArchive& Ar, UObject* Owner);
};

struct UTexture2D_ : public UTexture2D {
    void sub_00733310(FArchive& Ar);
};

// @baa 0x00733310
void UTexture2D_::sub_00733310(FArchive& Ar)
{
    ((FMipArray&)Mips).sub_0072fe60(Ar, this);
}

struct TConstSetBitIterator_00733b90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00733b90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00733b90& operator++();
};

TConstSetBitIterator_00733b90::TConstSetBitIterator_00733b90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00733b90
TConstSetBitIterator_00733b90& TConstSetBitIterator_00733b90::operator++()
{
    It.Advance();
    return *this;
}

void sub_00730300();
// @baa 0x00733bb0
void sub_00733bb0(void) { sub_00730300(); }

void sub_007304e0();
// @baa 0x00733bc0
void sub_00733bc0(void) { sub_007304e0(); }

void sub_00730560();
// @baa 0x00733bd0
void sub_00733bd0(void) { sub_00730560(); }

struct TConstSetBitIterator_00733be0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00733be0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00733be0& operator++();
};

TConstSetBitIterator_00733be0::TConstSetBitIterator_00733be0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00733be0
TConstSetBitIterator_00733be0& TConstSetBitIterator_00733be0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00733c00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00733c00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00733c00& operator++();
};

TConstSetBitIterator_00733c00::TConstSetBitIterator_00733c00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00733c00
TConstSetBitIterator_00733c00& TConstSetBitIterator_00733c00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00733c20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00733c20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00733c20& operator++();
};

TConstSetBitIterator_00733c20::TConstSetBitIterator_00733c20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00733c20
TConstSetBitIterator_00733c20& TConstSetBitIterator_00733c20::operator++()
{
    It.Advance();
    return *this;
}

struct C {
    undefined4 * sub_00734e00();
};

int sub_0067eb60(void);
extern undefined4 g_01eef738;
extern undefined * g_01eef740;
// @baa 0x00734e00
undefined4 * C::sub_00734e00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0067eb60();
  *(undefined2 *)(param_1 + 0x37) = 0;
  *(undefined2 *)((int)param_1 + 0xe2) = 0;
  *(undefined2 *)(param_1 + 0x3a) = 0;
  *(undefined2 *)((int)param_1 + 0xee) = 0;
  *(undefined2 *)(param_1 + 0x3d) = 0;
  *(undefined2 *)((int)param_1 + 0xfa) = 0;
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined2 *)((int)param_1 + 0x106) = 0;
  *param_1 = (undefined4)(&g_01eef740);
  param_1[5] = (undefined4)(&g_01eef738);
  return param_1;
}

struct A_00734e60 { virtual void sub_007352a0(); char pad[16]; };

struct B_00734e60 { virtual void sub_007352a0(); };

struct C_00734e60 : A_00734e60, B_00734e60 { virtual void sub_007352a0(); C_00734e60(); };

C_00734e60::C_00734e60() {}

// @baa 0x00734e60
void C_00734e60::sub_007352a0() {}

void sub_007249d0();
// @baa 0x00734e70
void sub_00734e70(void) { sub_007249d0(); }

struct C_00734e80 {
    undefined4 * sub_00734e80();
};

int sub_0067ec20(void);
extern undefined4 g_01eef76c;
extern undefined * g_01eef774;
// @baa 0x00734e80
undefined4 * C_00734e80::sub_00734e80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0067ec20();
  *(undefined2 *)(param_1 + 0x3f) = 0;
  *(undefined2 *)((int)param_1 + 0x102) = 0;
  *(undefined2 *)(param_1 + 0x42) = 0;
  *(undefined2 *)((int)param_1 + 0x10e) = 0;
  *(undefined2 *)(param_1 + 0x45) = 0;
  *(undefined2 *)((int)param_1 + 0x11a) = 0;
  *(undefined2 *)(param_1 + 0x48) = 0;
  *(undefined2 *)((int)param_1 + 0x126) = 0;
  *param_1 = (undefined4)(&g_01eef774);
  param_1[5] = (undefined4)(&g_01eef76c);
  return param_1;
}

struct A_00734ee0 { virtual void sub_007352c0(); char pad[16]; };

struct B_00734ee0 { virtual void sub_007352c0(); };

struct C_00734ee0 : A_00734ee0, B_00734ee0 { virtual void sub_007352c0(); C_00734ee0(); };

C_00734ee0::C_00734ee0() {}

// @baa 0x00734ee0
void C_00734ee0::sub_007352c0() {}

// @baa 0x00734ef0
void sub_00734ef0(void) { sub_007249d0(); }

struct C_00734f00 {
    undefined4 * sub_00734f00();
};

int sub_0067ece0(void);
extern undefined4 g_01eef7a0;
extern undefined * g_01eef7a8;
// @baa 0x00734f00
undefined4 * C_00734f00::sub_00734f00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0067ece0();
  *(undefined2 *)(param_1 + 0x4f) = 0;
  *(undefined2 *)((int)param_1 + 0x142) = 0;
  *(undefined2 *)(param_1 + 0x52) = 0;
  *(undefined2 *)((int)param_1 + 0x14e) = 0;
  *(undefined2 *)(param_1 + 0x55) = 0;
  *(undefined2 *)((int)param_1 + 0x15a) = 0;
  *(undefined2 *)(param_1 + 0x58) = 0;
  *(undefined2 *)((int)param_1 + 0x166) = 0;
  *param_1 = (undefined4)(&g_01eef7a8);
  param_1[5] = (undefined4)(&g_01eef7a0);
  return param_1;
}

struct A_00734f60 { virtual void sub_007352e0(); char pad[16]; };

struct B_00734f60 { virtual void sub_007352e0(); };

struct C_00734f60 : A_00734f60, B_00734f60 { virtual void sub_007352e0(); C_00734f60(); };

C_00734f60::C_00734f60() {}

// @baa 0x00734f60
void C_00734f60::sub_007352e0() {}

// @baa 0x00734f70
void sub_00734f70(void) { sub_007249d0(); }

struct C_00734f80 {
    undefined4 * sub_00734f80();
};

int sub_0067edb0(void);
extern undefined4 g_01eef7d4;
extern undefined * g_01eef7dc;
// @baa 0x00734f80
undefined4 * C_00734f80::sub_00734f80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0067edb0();
  *(undefined2 *)(param_1 + 0x37) = 0;
  *(undefined2 *)((int)param_1 + 0xe2) = 0;
  *(undefined2 *)(param_1 + 0x3a) = 0;
  *(undefined2 *)((int)param_1 + 0xee) = 0;
  *(undefined2 *)(param_1 + 0x3d) = 0;
  *(undefined2 *)((int)param_1 + 0xfa) = 0;
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined2 *)((int)param_1 + 0x106) = 0;
  *param_1 = (undefined4)(&g_01eef7dc);
  param_1[5] = (undefined4)(&g_01eef7d4);
  return param_1;
}

struct A_00734fe0 { virtual void sub_00735300(); char pad[16]; };

struct B_00734fe0 { virtual void sub_00735300(); };

struct C_00734fe0 : A_00734fe0, B_00734fe0 { virtual void sub_00735300(); C_00734fe0(); };

C_00734fe0::C_00734fe0() {}

// @baa 0x00734fe0
void C_00734fe0::sub_00735300() {}

// @baa 0x00734ff0
void sub_00734ff0(void) { sub_007249d0(); }

struct C_00735000 {
    undefined4 * sub_00735000();
};

int sub_0067ee70(void);
extern undefined4 g_01eef808;
extern undefined * g_01eef810;
// @baa 0x00735000
undefined4 * C_00735000::sub_00735000(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0067ee70();
  *(undefined2 *)(param_1 + 0x3f) = 0;
  *(undefined2 *)((int)param_1 + 0x102) = 0;
  *(undefined2 *)(param_1 + 0x42) = 0;
  *(undefined2 *)((int)param_1 + 0x10e) = 0;
  *(undefined2 *)(param_1 + 0x45) = 0;
  *(undefined2 *)((int)param_1 + 0x11a) = 0;
  *(undefined2 *)(param_1 + 0x48) = 0;
  *(undefined2 *)((int)param_1 + 0x126) = 0;
  *param_1 = (undefined4)(&g_01eef810);
  param_1[5] = (undefined4)(&g_01eef808);
  return param_1;
}

struct A_00735060 { virtual void sub_00735320(); char pad[16]; };

struct B_00735060 { virtual void sub_00735320(); };

struct C_00735060 : A_00735060, B_00735060 { virtual void sub_00735320(); C_00735060(); };

C_00735060::C_00735060() {}

// @baa 0x00735060
void C_00735060::sub_00735320() {}

// @baa 0x00735070
void sub_00735070(void) { sub_007249d0(); }

struct C_00735080 {
    undefined4 * sub_00735080();
};

int sub_0067ef30(void);
extern undefined4 g_01eef83c;
extern undefined * g_01eef844;
// @baa 0x00735080
undefined4 * C_00735080::sub_00735080(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0067ef30();
  *(undefined2 *)(param_1 + 0x4f) = 0;
  *(undefined2 *)((int)param_1 + 0x142) = 0;
  *(undefined2 *)(param_1 + 0x52) = 0;
  *(undefined2 *)((int)param_1 + 0x14e) = 0;
  *(undefined2 *)(param_1 + 0x55) = 0;
  *(undefined2 *)((int)param_1 + 0x15a) = 0;
  *(undefined2 *)(param_1 + 0x58) = 0;
  *(undefined2 *)((int)param_1 + 0x166) = 0;
  *param_1 = (undefined4)(&g_01eef844);
  param_1[5] = (undefined4)(&g_01eef83c);
  return param_1;
}

struct A_007350e0 { virtual void sub_00735340(); char pad[16]; };

struct B_007350e0 { virtual void sub_00735340(); };

struct C_007350e0 : A_007350e0, B_007350e0 { virtual void sub_00735340(); C_007350e0(); };

C_007350e0::C_007350e0() {}

// @baa 0x007350e0
void C_007350e0::sub_00735340() {}

// @baa 0x007350f0
void sub_007350f0(void) { sub_007249d0(); }

struct C_00735100 {
    undefined4 * sub_00735100();
};

int sub_0067e900(void);
extern undefined4 g_01eef870;
extern undefined * g_01eef878;
// @baa 0x00735100
undefined4 * C_00735100::sub_00735100(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0067e900();
  *(undefined2 *)(param_1 + 0x47) = 0;
  *(undefined2 *)((int)param_1 + 0x122) = 0;
  *(undefined2 *)(param_1 + 0x4a) = 0;
  *(undefined2 *)((int)param_1 + 0x12e) = 0;
  *(undefined2 *)(param_1 + 0x4d) = 0;
  *(undefined2 *)((int)param_1 + 0x13a) = 0;
  *(undefined2 *)(param_1 + 0x50) = 0;
  *(undefined2 *)((int)param_1 + 0x146) = 0;
  *param_1 = (undefined4)(&g_01eef878);
  param_1[5] = (undefined4)(&g_01eef870);
  return param_1;
}

struct A_00735160 { virtual void sub_00735360(); char pad[16]; };

struct B_00735160 { virtual void sub_00735360(); };

struct C_00735160 : A_00735160, B_00735160 { virtual void sub_00735360(); C_00735160(); };

C_00735160::C_00735160() {}

// @baa 0x00735160
void C_00735160::sub_00735360() {}

// @baa 0x00735170
void sub_00735170(void) { sub_007249d0(); }

struct C_00735180 {
    undefined4 * sub_00735180();
};

int sub_0067e9c0(void);
extern undefined4 g_01eef8a4;
extern undefined * g_01eef8ac;
// @baa 0x00735180
undefined4 * C_00735180::sub_00735180(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0067e9c0();
  *(undefined2 *)(param_1 + 0x67) = 0;
  *(undefined2 *)((int)param_1 + 0x1a2) = 0;
  *(undefined2 *)(param_1 + 0x6a) = 0;
  *(undefined2 *)((int)param_1 + 0x1ae) = 0;
  *(undefined2 *)(param_1 + 0x6d) = 0;
  *(undefined2 *)((int)param_1 + 0x1ba) = 0;
  *(undefined2 *)(param_1 + 0x70) = 0;
  *(undefined2 *)((int)param_1 + 0x1c6) = 0;
  *param_1 = (undefined4)(&g_01eef8ac);
  param_1[5] = (undefined4)(&g_01eef8a4);
  return param_1;
}

struct A_007351e0 { virtual void sub_00735380(); char pad[16]; };

struct B_007351e0 { virtual void sub_00735380(); };

struct C_007351e0 : A_007351e0, B_007351e0 { virtual void sub_00735380(); C_007351e0(); };

C_007351e0::C_007351e0() {}

// @baa 0x007351e0
void C_007351e0::sub_00735380() {}

// @baa 0x007351f0
void sub_007351f0(void) { sub_007249d0(); }

struct C_00735200 {
    undefined4 * sub_00735200();
};

int sub_0067ea90(void);
extern undefined4 g_01eef8d8;
extern undefined * g_01eef8e0;
// @baa 0x00735200
undefined4 * C_00735200::sub_00735200(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0067ea90();
  *(undefined2 *)(param_1 + 0x77) = 0;
  *(undefined2 *)((int)param_1 + 0x1e2) = 0;
  *(undefined2 *)(param_1 + 0x7a) = 0;
  *(undefined2 *)((int)param_1 + 0x1ee) = 0;
  *(undefined2 *)(param_1 + 0x7d) = 0;
  *(undefined2 *)((int)param_1 + 0x1fa) = 0;
  *(undefined2 *)(param_1 + 0x80) = 0;
  *(undefined2 *)((int)param_1 + 0x206) = 0;
  *param_1 = (undefined4)(&g_01eef8e0);
  param_1[5] = (undefined4)(&g_01eef8d8);
  return param_1;
}

struct A_00735260 { virtual void sub_007353a0(); char pad[16]; };

struct B_00735260 { virtual void sub_007353a0(); };

struct C_00735260 : A_00735260, B_00735260 { virtual void sub_007353a0(); C_00735260(); };

C_00735260::C_00735260() {}

// @baa 0x00735260
void C_00735260::sub_007353a0() {}

// @baa 0x00735270
void sub_00735270(void) { sub_007249d0(); }

struct C_00735280 {
    void sub_00735280();
    int sub_00730e80(int);
};

// @baa 0x00735280
void C_00735280::sub_00735280(void)
{
    int param_1 = (int)this;
  ((C_00735280 *)((*(char **)((char *)this + 0x10))))->sub_00730e80(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct TConstSetBitIterator_007357d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007357d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007357d0& operator++();
};

TConstSetBitIterator_007357d0::TConstSetBitIterator_007357d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007357d0
TConstSetBitIterator_007357d0& TConstSetBitIterator_007357d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00735820 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00735820(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00735820& operator++();
};

TConstSetBitIterator_00735820::TConstSetBitIterator_00735820(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00735820
TConstSetBitIterator_00735820& TConstSetBitIterator_00735820::operator++()
{
    It.Advance();
    return *this;
}

void sub_007311f0();
// @baa 0x00735db0
void sub_00735db0(void) { sub_007311f0(); }

void sub_00731270();
// @baa 0x00735dc0
void sub_00735dc0(void) { sub_00731270(); }

void sub_007312f0();
// @baa 0x00735dd0
void sub_00735dd0(void) { sub_007312f0(); }

void sub_00731370();
// @baa 0x00735de0
void sub_00735de0(void) { sub_00731370(); }

void sub_007313f0();
// @baa 0x00735df0
void sub_00735df0(void) { sub_007313f0(); }

void sub_00731470();
// @baa 0x00735e00
void sub_00735e00(void) { sub_00731470(); }

int sub_0072e7e0(void);
// @baa 0x00735e10
int UTexture2D::sub_00735e10(void)
{
    int param_1 = (int)this;

  sub_0072e7e0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_0072e840(void);
// @baa 0x00735e30
int UTexture2D::sub_00735e30(void)
{
    int param_1 = (int)this;

  sub_0072e840();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_0072e8a0(void);
// @baa 0x00735e50
int UTexture2D::sub_00735e50(void)
{
    int param_1 = (int)this;

  sub_0072e8a0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_0072e900(void);
// @baa 0x00735e70
int UTexture2D::sub_00735e70(void)
{
    int param_1 = (int)this;

  sub_0072e900();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_0072e960(void);
// @baa 0x00735e90
int UTexture2D::sub_00735e90(void)
{
    int param_1 = (int)this;

  sub_0072e960();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_0072ea10(void);
// @baa 0x00735eb0
int UTexture2D::sub_00735eb0(void)
{
    int param_1 = (int)this;

  sub_0072ea10();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_0072ea70(void);
// @baa 0x00735ed0
int UTexture2D::sub_00735ed0(void)
{
    int param_1 = (int)this;

  sub_0072ea70();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct TConstSetBitIterator_00735ef0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00735ef0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00735ef0& operator++();
};

TConstSetBitIterator_00735ef0::TConstSetBitIterator_00735ef0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00735ef0
TConstSetBitIterator_00735ef0& TConstSetBitIterator_00735ef0::operator++()
{
    It.Advance();
    return *this;
}

// @baa 0x007360a0
IMPLEMENT_CLASS_AT(AReverbVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ReverbVolume.cpp", 8);

// @baa 0x00736100
void sub_00734af0();
// @baa 0x007364c0
void sub_007364c0(void) { sub_00734af0(); }

// @baa 0x00737860
int UTexture2D::sub_00737860(void)
{
    int param_1 = (int)this;

  sub_0072ea10();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00737880
int UTexture2D::sub_00737880(void)
{
    int param_1 = (int)this;

  sub_0072ea70();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_007363e0();
// @baa 0x00737b60
void sub_00737b60(void) { sub_007363e0(); }

void sub_00736450();
// @baa 0x00737b70
void sub_00737b70(void) { sub_00736450(); }

void sub_007364d0();
// @baa 0x00737b80
void sub_00737b80(void) { sub_007364d0(); }

void sub_007365b0();
// @baa 0x00737c90
void sub_00737c90(void) { sub_007365b0(); }

void sub_00736620();
// @baa 0x00737ca0
void sub_00737ca0(void) { sub_00736620(); }

void sub_00736370();
// @baa 0x00737cb0
void sub_00737cb0(void) { sub_00736370(); }

struct TConstSetBitIterator_00737f30 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00737f30(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00737f30& operator++();
};

TConstSetBitIterator_00737f30::TConstSetBitIterator_00737f30(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00737f30
TConstSetBitIterator_00737f30& TConstSetBitIterator_00737f30::operator++()
{
    It.Advance();
    return *this;
}

void sub_00737020();
// @baa 0x00738000
void sub_00738000(void) { sub_00737020(); }

struct TConstSetBitIterator_00738090 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00738090(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00738090& operator++();
};

TConstSetBitIterator_00738090::TConstSetBitIterator_00738090(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00738090
TConstSetBitIterator_00738090& TConstSetBitIterator_00738090::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007380e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007380e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007380e0& operator++();
};

TConstSetBitIterator_007380e0::TConstSetBitIterator_007380e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007380e0
TConstSetBitIterator_007380e0& TConstSetBitIterator_007380e0::operator++()
{
    It.Advance();
    return *this;
}

struct C_view {
    int sub_00735870(int, int);
};

// @baa 0x00738130
int UTexture2D::sub_00738130(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view *)(this))->sub_00735870(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct Block {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    int Unk20;   // 0x20
    int Unk24;   // 0x24
    int Unk28;   // 0x28
    int Unk2C;   // 0x2c
    void sub_00735650(int, int);
};

struct C_00738160 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_00738160(void);
};

// @baa 0x00738160
void C_00738160::sub_00738160(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_00735650(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

void sub_00737390();
// @baa 0x00738180
void sub_00738180(void) { sub_00737390(); }

void sub_007374f0();
// @baa 0x007381d0
void sub_007381d0(void) { sub_007374f0(); }

// @baa 0x00738220
int UTexture2D::sub_00738220(void)
{
    int param_1 = (int)this;

  sub_0072e7e0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00738240
int UTexture2D::sub_00738240(void)
{
    int param_1 = (int)this;

  sub_0072e840();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00738260
int UTexture2D::sub_00738260(void)
{
    int param_1 = (int)this;

  sub_0072e8a0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00738280
int UTexture2D::sub_00738280(void)
{
    int param_1 = (int)this;

  sub_0072e900();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view_007382a0 {
    int sub_0072d640();
    int sub_00735650(int, int);
};

// @baa 0x007382a0
void UTexture2D::sub_007382a0(void)
{
    int param_1 = (int)this;
  ((C_view_007382a0 *)(this))->sub_0072d640();
  ((C_view_007382a0 *)(this))->sub_00735650(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

// @baa 0x007382c0
int UTexture2D::sub_007382c0(void)
{
    int param_1 = (int)this;

  sub_0072e960();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_00737800();
// @baa 0x007382e0
void sub_007382e0(void) { sub_00737800(); }

// @baa 0x007382f0
int UTexture2D::sub_007382f0(void)
{
    int param_1 = (int)this;

  sub_0072ea10();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00738310
int UTexture2D::sub_00738310(void)
{
    int param_1 = (int)this;

  sub_0072ea70();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00738950
void sub_00738950(void) { sub_007363e0(); }

// @baa 0x00738960
void sub_00738960(void) { sub_00736450(); }

// @baa 0x00738970
void sub_00738970(void) { sub_007364d0(); }

void sub_00736540();
// @baa 0x00738f40
void sub_00738f40(void) { sub_00736540(); }

// @baa 0x00739430
void sub_00739430(void) { sub_007365b0(); }

// @baa 0x00739440
void sub_00739440(void) { sub_00736620(); }

struct C_00739e60 {
    uint sub_00739e60();
};

// @baa 0x00739e60
uint C_00739e60::sub_00739e60(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x14) >> 1 & 1;
}

// @baa 0x00739fe0
int sub_00739fe0(void) { return 0; }

// @baa 0x00739ff0
int sub_00739ff0(void) { return 0; }

// @baa 0x0073a000
int sub_0073a000(void) { return 0; }

struct C_0073a010 {
    void sub_0073a010();
};

int sub_00b01b80(...);
// @baa 0x0073a010
void C_0073a010::sub_0073a010(void)
{
    int param_1 = (int)this;

  sub_00b01b80(*(undefined1 *)(param_1 + 0xf7),param_1 + 0x154,param_1 + 0x178,param_1 + 0x19c);
  return;
}

struct C_0073a040 {
    void sub_0073a040();
};

// @baa 0x0073a040
void C_0073a040::sub_0073a040(void)
{
    int param_1 = (int)this;

  sub_00b01b80(*(undefined1 *)(param_1 + 0xf7),param_1 + 0x1c0,param_1 + 0x1e4,param_1 + 0x208);
  return;
}

// @baa 0x0073a070
int __stdcall sub_0073a070(int a0, int a1, int a2) { return 0; }

// @baa 0x0073a080
int __stdcall sub_0073a080(int a0, int a1) { return 0; }

// @baa 0x0073a090
int __stdcall sub_0073a090(int a0, int a1) { return 4; }

// @baa 0x0073a0a0
void sub_0073a0a0(void) {  }

// @baa 0x0073a0b0
int __stdcall sub_0073a0b0(int a0, int a1, int a2, int a3, int a4, int a5, int a6) { return 0; }

void sub_00694520();
// @baa 0x0073a1e0
void sub_0073a1e0(void) { sub_00694520(); }

// @baa 0x0073a810
int UTexture2D::sub_0073a810(void)
{
    int param_1 = (int)this;

  sub_0072e7e0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x0073a830
int UTexture2D::sub_0073a830(void)
{
    int param_1 = (int)this;

  sub_0072e840();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x0073a850
int UTexture2D::sub_0073a850(void)
{
    int param_1 = (int)this;

  sub_0072e8a0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x0073a870
int UTexture2D::sub_0073a870(void)
{
    int param_1 = (int)this;

  sub_0072e900();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view_0073a890 {
    int sub_0072d640();
    int sub_00735650(int, int);
};

// @baa 0x0073a890
void UTexture2D::sub_0073a890(void)
{
    int param_1 = (int)this;
  ((C_view_0073a890 *)(this))->sub_0072d640();
  ((C_view_0073a890 *)(this))->sub_00735650(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

// @baa 0x0073a8b0
int UTexture2D::sub_0073a8b0(void)
{
    int param_1 = (int)this;

  sub_0072e960();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view_0073a8d0 {
    int sub_00737800(int);
};

// @baa 0x0073a8d0
void UTexture2D::sub_0073a8d0(void)
{
    int param_1 = (int)this;
  ((C_view_0073a8d0 *)(this))->sub_00737800(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c));
  return;
}

// @baa 0x0073a8e0
int UTexture2D::sub_0073a8e0(void)
{
    int param_1 = (int)this;

  sub_0072ea10();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x0073a900
int UTexture2D::sub_0073a900(void)
{
    int param_1 = (int)this;

  sub_0072ea70();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_006987b0();
// @baa 0x0073a920
void sub_0073a920(void) { sub_006987b0(); }

int sub_00662920(...);
int sub_006987b0(...);
// @baa 0x0073a930
void sub_0073a930(int param_1, int param_2)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_00662920(4,param_2 + 0x78);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (param_1 == 2) {
    puVar1 = (undefined4 *)sub_00662920(4,param_2 + 0x78);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 3;
    }
  }
  sub_006987b0(param_1,param_2);
  return;
}

void sub_00698860();
// @baa 0x0073a980
void sub_0073a980(void) { sub_00698860(); }

int sub_00698860(...);
// @baa 0x0073a990
void sub_0073a990(int param_1, int param_2)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_00662920(4,param_2 + 0x78);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (param_1 == 2) {
    puVar1 = (undefined4 *)sub_00662920(4,param_2 + 0x78);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 3;
    }
  }
  sub_00698860(param_1,param_2);
  return;
}

// @baa 0x0073a9f0
void sub_0073a9f0(int param_1, int param_2)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_00662920(4,param_2 + 0x78);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (param_1 == 2) {
    puVar1 = (undefined4 *)sub_00662920(4,param_2 + 0x78);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 3;
    }
  }
  sub_006987b0(param_1,param_2);
  return;
}

// @baa 0x0073aa50
void sub_0073aa50(int param_1, int param_2)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_00662920(4,param_2 + 0x78);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (param_1 == 2) {
    puVar1 = (undefined4 *)sub_00662920(4,param_2 + 0x78);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 3;
    }
  }
  sub_00698860(param_1,param_2);
  return;
}

void sub_0073a700();
// @baa 0x0073aaa0
void sub_0073aaa0(void) { sub_0073a700(); }

int sub_00696b50(...);
int sub_0073a700(...);
// @baa 0x0073aab0
void sub_0073aab0(undefined4 param_1, undefined4 param_2)
{
  sub_00696b50(param_1,param_2);
  sub_0073a700(param_1,param_2);
  return;
}

int sub_00696c40(...);
// @baa 0x0073aad0
void sub_0073aad0(undefined4 param_1, undefined4 param_2)
{
  sub_00696c40(param_1,param_2);
  sub_0073a700(param_1,param_2);
  return;
}

int sub_00696d30(...);
// @baa 0x0073aaf0
void sub_0073aaf0(undefined4 param_1, undefined4 param_2)
{
  sub_00696d30(param_1,param_2);
  sub_0073a700(param_1,param_2);
  return;
}

int sub_00696e20(...);
// @baa 0x0073ab10
void sub_0073ab10(undefined4 param_1, undefined4 param_2)
{
  sub_00696e20(param_1,param_2);
  sub_0073a700(param_1,param_2);
  return;
}

int sub_00696f10(...);
// @baa 0x0073ab30
void sub_0073ab30(undefined4 param_1, undefined4 param_2)
{
  sub_00696f10(param_1,param_2);
  sub_0073a700(param_1,param_2);
  return;
}

// @baa 0x0073ba80
void sub_0073ba80(void) { sub_007363e0(); }

// @baa 0x0073ba90
void sub_0073ba90(void) { sub_007363e0(); }

// @baa 0x0073baa0
void sub_0073baa0(void) { sub_00736450(); }

// @baa 0x0073bab0
void sub_0073bab0(void) { sub_007364d0(); }

// @baa 0x0073bae0
IMPLEMENT_CLASS_AT(USpotLightComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\SpotLightComponent.cpp", 11);

// @baa 0x0073bb40
// @baa 0x0073bb90
IMPLEMENT_CLASS_AT(USkyLightComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\SkyLightComponent.cpp", 9);

// @baa 0x0073bbf0
int sub_005c7a70(...);
int sub_0073bc80(void);
// @baa 0x0073bce0
undefined4 USphericalHarmonicLightComponent::sub_0073bce0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0073bc80();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x210);
  }
  return param_1;
}

// @baa 0x0073bd90
void sub_0073bd90(void) { sub_00736540(); }

struct C_0073c040 {
    undefined4 * sub_0073c040(undefined4);
    int sub_00739650(int);
};

extern undefined4 g_01eeebd0;
extern undefined * g_01eeebd8;
// @baa 0x0073c040
undefined4 * C_0073c040::sub_0073c040(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_0073c040 *)(this))->sub_00739650(param_2);
  *param_1 = (undefined4)(&g_01eeebd8);
  param_1[5] = (undefined4)(&g_01eeebd0);
  return param_1;
}

// @baa 0x0073c420
void sub_0073c420(void) { sub_007365b0(); }

// @baa 0x0073c430
void sub_0073c430(void) { sub_00736620(); }

// @baa 0x0073c440
void sub_0073c440(void) { sub_00736370(); }

int sub_0072c350(void);
// @baa 0x0073d100
int UTexture2D::sub_0073d100(void)
{
    int param_1 = (int)this;

  sub_0072c350();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_0072c3b0(void);
// @baa 0x0073d190
int UTexture2D::sub_0073d190(void)
{
    int param_1 = (int)this;

  sub_0072c3b0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_0072c410(void);
// @baa 0x0073d220
int UTexture2D::sub_0073d220(void)
{
    int param_1 = (int)this;

  sub_0072c410();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_00695c20(...);
// @baa 0x0073d550
void sub_0073d550(undefined4 param_1, undefined4 param_2)
{
  sub_00695c20(param_1,param_2);
  sub_0073a700(param_1,param_2);
  return;
}

int sub_00695de0(...);
// @baa 0x0073d570
void sub_0073d570(undefined4 param_1, undefined4 param_2)
{
  sub_00695de0(param_1,param_2);
  sub_0073a700(param_1,param_2);
  return;
}

int sub_00695fa0(...);
// @baa 0x0073d590
void sub_0073d590(undefined4 param_1, undefined4 param_2)
{
  sub_00695fa0(param_1,param_2);
  sub_0073a700(param_1,param_2);
  return;
}

int sub_00696160(...);
// @baa 0x0073d5b0
void sub_0073d5b0(undefined4 param_1, undefined4 param_2)
{
  sub_00696160(param_1,param_2);
  sub_0073a700(param_1,param_2);
  return;
}

int sub_00696320(...);
// @baa 0x0073d5d0
void sub_0073d5d0(undefined4 param_1, undefined4 param_2)
{
  sub_00696320(param_1,param_2);
  sub_0073a700(param_1,param_2);
  return;
}

int sub_006964e0(...);
// @baa 0x0073d5f0
void sub_0073d5f0(undefined4 param_1, undefined4 param_2)
{
  sub_006964e0(param_1,param_2);
  sub_0073a700(param_1,param_2);
  return;
}

int sub_006956e0(...);
// @baa 0x0073d610
void sub_0073d610(undefined4 param_1, undefined4 param_2)
{
  sub_006956e0(param_1,param_2);
  sub_0073a700(param_1,param_2);
  return;
}

int sub_006958a0(...);
// @baa 0x0073d630
void sub_0073d630(undefined4 param_1, undefined4 param_2)
{
  sub_006958a0(param_1,param_2);
  sub_0073a700(param_1,param_2);
  return;
}

int sub_00695a60(...);
// @baa 0x0073d650
void sub_0073d650(undefined4 param_1, undefined4 param_2)
{
  sub_00695a60(param_1,param_2);
  sub_0073a700(param_1,param_2);
  return;
}

int sub_0072dbe0(void);
// @baa 0x0073d7c0
int UTexture2D::sub_0073d7c0(void)
{
    int param_1 = (int)this;

  sub_0072dbe0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_0072dc40(void);
// @baa 0x0073d7e0
int UTexture2D::sub_0073d7e0(void)
{
    int param_1 = (int)this;

  sub_0072dc40();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_0072dca0(void);
// @baa 0x0073d800
int UTexture2D::sub_0073d800(void)
{
    int param_1 = (int)this;

  sub_0072dca0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0073d820 { void sub_0073b9f0(int); C_0073d820 *sub_0073d820(int); };

// @baa 0x0073d820
C_0073d820 *C_0073d820::sub_0073d820(int a) { sub_0073b9f0(a); return this; }

// @baa 0x0073d840
int UTexture2D::sub_0073d840(undefined1 param_2)
{
    int param_1 = (int)this;

  sub_0072e840();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x3c) = param_2;
  return param_1;
}

int sub_0073d8f0(void);
// @baa 0x0073d980
undefined4 UShaderCache::sub_0073d980(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0073d8f0();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0xec);
  }
  return param_1;
}

struct C_0073e780 { void sub_0073b9f0(int); C_0073e780 *sub_0073e780(int); };

// @baa 0x0073e780
C_0073e780 *C_0073e780::sub_0073e780(int a) { sub_0073b9f0(a); return this; }

// @baa 0x0073f260
void __stdcall sub_0073f260(int a0, int a1, int a2) {  }

extern char g_026b33f4[];
struct C_0073f390 { void sub_006fa300(int, int); void sub_0073f390(int); };

// @baa 0x0073f390
void C_0073f390::sub_0073f390(int a) { sub_006fa300((int)g_026b33f4, a); }

extern char g_026b3934[];
struct C_0073f3b0 { void sub_006fa300(int, int); void sub_0073f3b0(int); };

// @baa 0x0073f3b0
void C_0073f3b0::sub_0073f3b0(int a) { sub_006fa300((int)g_026b3934, a); }

extern char g_026b2a1c[];
struct C_0073f3d0 { void sub_006fa300(int, int); void sub_0073f3d0(int); };

// @baa 0x0073f3d0
void C_0073f3d0::sub_0073f3d0(int a) { sub_006fa300((int)g_026b2a1c, a); }

extern char g_026b32a4[];
struct C_0073f3f0 { void sub_006fa300(int, int); void sub_0073f3f0(int); };

// @baa 0x0073f3f0
void C_0073f3f0::sub_0073f3f0(int a) { sub_006fa300((int)g_026b32a4, a); }

extern char g_026b2b6c[];
struct C_0073f410 { void sub_006fa300(int, int); void sub_0073f410(int); };

// @baa 0x0073f410
void C_0073f410::sub_0073f410(int a) { sub_006fa300((int)g_026b2b6c, a); }

extern char g_026b373c[];
struct C_0073f430 { void sub_006fa300(int, int); void sub_0073f430(int); };

// @baa 0x0073f430
void C_0073f430::sub_0073f430(int a) { sub_006fa300((int)g_026b373c, a); }

struct S {
    TArray<QWORD> Items; // 0x00
    const QWORD* sub_0073f4a0(INT Index) const;
};

// @baa 0x0073f4a0
const QWORD* S::sub_0073f4a0(INT Index) const
{
    return &Items(Index);
}

struct C_0073f4f0 { int sub_0073f4f0(void); };

// @baa 0x0073f4f0
int C_0073f4f0::sub_0073f4f0(void) { return *(int*)((char*)this + 4); }

struct E { BYTE Bytes[12]; };

struct S_0073f500 {
    TArray<E> Items; // 0x00
    const E* sub_0073f500(INT Index) const;
};

// @baa 0x0073f500
const E* S_0073f500::sub_0073f500(INT Index) const
{
    return &Items(Index);
}

struct S_0073f5b0 {
    TArray<QWORD> Items; // 0x00
    const QWORD* sub_0073f5b0(INT Index) const;
};

// @baa 0x0073f5b0
const QWORD* S_0073f5b0::sub_0073f5b0(INT Index) const
{
    return &Items(Index);
}

struct C_0073f600 { int sub_0073f600(void); };

// @baa 0x0073f600
int C_0073f600::sub_0073f600(void) { return *(int*)((char*)this + 4); }

struct E_0073f610 { BYTE Bytes[24]; };

struct S_0073f610 {
    TArray<E_0073f610> Items; // 0x00
    const E_0073f610* sub_0073f610(INT Index) const;
};

// @baa 0x0073f610
const E_0073f610* S_0073f610::sub_0073f610(INT Index) const
{
    return &Items(Index);
}

struct S_0073f6c0 {
    TArray<QWORD> Items; // 0x00
    const QWORD* sub_0073f6c0(INT Index) const;
};

// @baa 0x0073f6c0
const QWORD* S_0073f6c0::sub_0073f6c0(INT Index) const
{
    return &Items(Index);
}

struct C_0073f710 { int sub_0073f710(void); };

// @baa 0x0073f710
int C_0073f710::sub_0073f710(void) { return *(int*)((char*)this + 4); }

struct S_0073f720 {
    TArray<E> Items; // 0x00
    const E* sub_0073f720(INT Index) const;
};

// @baa 0x0073f720
const E* S_0073f720::sub_0073f720(INT Index) const
{
    return &Items(Index);
}

struct C_0073f770 {
    void sub_0073f770(int);
};

// @baa 0x0073f770
void C_0073f770::sub_0073f770(int param_2)
{
    int * param_1 = (int *)this;

  *param_1 = param_2 >> 5;
  param_1[1] = 1 << ((byte)param_2 & 0x1f);
  return;
}

struct C_0073f790 {
    void sub_0073f790(int);
};

// @baa 0x0073f790
void C_0073f790::sub_0073f790(int param_2)
{
    int * param_1 = (int *)this;

  *param_1 = param_2 >> 5;
  param_1[1] = 1 << ((byte)param_2 & 0x1f);
  return;
}

struct C_0073f7b0 {
    void sub_0073f7b0(int);
};

// @baa 0x0073f7b0
void C_0073f7b0::sub_0073f7b0(int param_2)
{
    int * param_1 = (int *)this;

  *param_1 = param_2 >> 5;
  param_1[1] = 1 << ((byte)param_2 & 0x1f);
  return;
}

struct C_0073f7d0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_0073f7d0* sub_0073f7d0(INT value);
};

// @baa 0x0073f7d0
C_0073f7d0* C_0073f7d0::sub_0073f7d0(INT value)
{
    Unk00 = value;
    Unk04 = 0;
    return this;
}

struct CCtr {
    int a;
    int b;
    CCtr* sub_0073f7f0() { b++; return this; }
};

// @baa 0x0073f7f0
void g_use(CCtr* p, int x) { if (x) p->sub_0073f7f0(); }

struct C_0073f850 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_0073f850* sub_0073f850(INT value);
};

// @baa 0x0073f850
C_0073f850* C_0073f850::sub_0073f850(INT value)
{
    Unk00 = value;
    Unk04 = 0;
    return this;
}

struct C_0073f8d0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_0073f8d0* sub_0073f8d0(INT value);
};

// @baa 0x0073f8d0
C_0073f8d0* C_0073f8d0::sub_0073f8d0(INT value)
{
    Unk00 = value;
    Unk04 = 0;
    return this;
}

struct C_0073f8f0 {
    void* vtbl;
    INT count;
    C_0073f8f0* sub_0073f8f0();
};

// @baa 0x0073f8f0
C_0073f8f0* C_0073f8f0::sub_0073f8f0()
{
    this->count++;
    return this;
}

// @baa 0x0073f950
int sub_0073f950(int param_1)
{
  return param_1 + 0x18;
}

struct C_0073f960 { int a, b, c; C_0073f960(); };

// @baa 0x0073f960
C_0073f960::C_0073f960() : a(0), b(0), c(0) {}

struct C_0073f970 { int a, b, c; C_0073f970(); };

// @baa 0x0073f970
C_0073f970::C_0073f970() : a(0), b(0), c(0) {}

struct C_0073f980 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_0073f980(INT Index);
};

// @baa 0x0073f980
UBOOL C_0073f980::sub_0073f980(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

// @baa 0x0073f9a0
int sub_0073f9a0(int param_1)
{
  return param_1 + 0x18;
}

struct C_0073f9b0 { int a, b, c; C_0073f9b0(); };

// @baa 0x0073f9b0
C_0073f9b0::C_0073f9b0() : a(0), b(0), c(0) {}

struct C_0073f9c0 { int a, b, c; C_0073f9c0(); };

// @baa 0x0073f9c0
C_0073f9c0::C_0073f9c0() : a(0), b(0), c(0) {}

struct C_0073f9d0 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_0073f9d0(INT Index);
};

// @baa 0x0073f9d0
UBOOL C_0073f9d0::sub_0073f9d0(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

// @baa 0x0073f9f0
int sub_0073f9f0(int param_1)
{
  return param_1 + 0x18;
}

struct C_0073fa00 { int a, b, c; C_0073fa00(); };

// @baa 0x0073fa00
C_0073fa00::C_0073fa00() : a(0), b(0), c(0) {}

struct C_0073fa10 { int a, b, c; C_0073fa10(); };

// @baa 0x0073fa10
C_0073fa10::C_0073fa10() : a(0), b(0), c(0) {}

struct C_0073fa20 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_0073fa20(INT Index);
};

// @baa 0x0073fa20
UBOOL C_0073fa20::sub_0073fa20(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_0073fbc0 { int sub_0073fbc0(void); };

// @baa 0x0073fbc0
int C_0073fbc0::sub_0073fbc0(void) { return *(int*)((char*)this + 20); }

struct C_0073fbd0 {
    int sub_0073fbd0();
};

// @baa 0x0073fbd0
int C_0073fbd0::sub_0073fbd0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0073fbf0 { int sub_0073fbf0(void); };

// @baa 0x0073fbf0
int C_0073fbf0::sub_0073fbf0(void) { return *(int*)((char*)this + 20); }

struct C_0073fc00 {
    int sub_0073fc00();
};

// @baa 0x0073fc00
int C_0073fc00::sub_0073fc00(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0073fc20 { int sub_0073fc20(void); };

// @baa 0x0073fc20
int C_0073fc20::sub_0073fc20(void) { return *(int*)((char*)this + 20); }

struct C_0073fc30 {
    int sub_0073fc30();
};

// @baa 0x0073fc30
int C_0073fc30::sub_0073fc30(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0073fc50 { int sub_0073fc50(void); };

// @baa 0x0073fc50
int C_0073fc50::sub_0073fc50(void) { return *(int*)((char*)this + 4); }

struct C_0073fd40 { int sub_0073fd40(void); };

// @baa 0x0073fd40
int C_0073fd40::sub_0073fd40(void) { return *(int*)((char*)this + 4); }

struct C_0073fe40 { int sub_0073fe40(void); };

// @baa 0x0073fe40
int C_0073fe40::sub_0073fe40(void) { return *(int*)((char*)this + 4); }
