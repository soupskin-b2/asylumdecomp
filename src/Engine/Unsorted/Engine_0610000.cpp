// Engine_0610000.cpp: 57 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_005c7a20(void);
extern undefined * g_01ea7880;
// @baa 0x006123f0
undefined4 * UObject::sub_006123f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01ea7880);
  return param_1;
}

// @baa 0x00612410
IMPLEMENT_CLASS_AT(UHelpCommandlet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UHelpCommandlet.cpp", 208);

// @baa 0x00612470
extern "C" int sub_0060fe70(int *);
// @baa 0x00612e00
int sub_00612e00(int *a) { return sub_0060fe70(a); }

struct Inner {
    int* data;
    Inner();
    ~Inner();
};

struct Outer_00612e10 : Inner {
    int num;
    int max;
    void sub_00612140(int* p);
    Outer_00612e10(int* p);
};

Inner::Inner()
{
    data = 0;
}

// @baa 0x00612e10
Outer_00612e10::Outer_00612e10(int* p)
{
    num = 0;
    max = 0;
    sub_00612140(p);
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

struct TConstSetBitIterator_00612e70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00612e70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00612e70& operator++();
};

TConstSetBitIterator_00612e70::TConstSetBitIterator_00612e70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00612e70
TConstSetBitIterator_00612e70& TConstSetBitIterator_00612e70::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00612e90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00612e90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00612e90& operator++();
};

TConstSetBitIterator_00612e90::TConstSetBitIterator_00612e90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00612e90
TConstSetBitIterator_00612e90& TConstSetBitIterator_00612e90::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00612eb0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00612eb0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00612eb0& operator++();
};

TConstSetBitIterator_00612eb0::TConstSetBitIterator_00612eb0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00612eb0
TConstSetBitIterator_00612eb0& TConstSetBitIterator_00612eb0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00612ed0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00612ed0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00612ed0& operator++();
};

TConstSetBitIterator_00612ed0::TConstSetBitIterator_00612ed0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00612ed0
TConstSetBitIterator_00612ed0& TConstSetBitIterator_00612ed0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00612ef0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00612ef0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00612ef0& operator++();
};

TConstSetBitIterator_00612ef0::TConstSetBitIterator_00612ef0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00612ef0
TConstSetBitIterator_00612ef0& TConstSetBitIterator_00612ef0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00612f30 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00612f30(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00612f30& operator++();
};

TConstSetBitIterator_00612f30::TConstSetBitIterator_00612f30(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00612f30
TConstSetBitIterator_00612f30& TConstSetBitIterator_00612f30::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00612f50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00612f50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00612f50& operator++();
};

TConstSetBitIterator_00612f50::TConstSetBitIterator_00612f50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00612f50
TConstSetBitIterator_00612f50& TConstSetBitIterator_00612f50::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00612f70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00612f70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00612f70& operator++();
};

TConstSetBitIterator_00612f70::TConstSetBitIterator_00612f70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00612f70
TConstSetBitIterator_00612f70& TConstSetBitIterator_00612f70::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_006136f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_006136f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_006136f0& operator++();
};

TConstSetBitIterator_006136f0::TConstSetBitIterator_006136f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x006136f0
TConstSetBitIterator_006136f0& TConstSetBitIterator_006136f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00613740 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00613740(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00613740& operator++();
};

TConstSetBitIterator_00613740::TConstSetBitIterator_00613740(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00613740
TConstSetBitIterator_00613740& TConstSetBitIterator_00613740::operator++()
{
    It.Advance();
    return *this;
}

int sub_0060d830(void);
// @baa 0x006137f0
int UPackageMap::sub_006137f0(void)
{
    int param_1 = (int)this;

  sub_0060d830();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct TConstSetBitIterator_00613810 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00613810(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00613810& operator++();
};

TConstSetBitIterator_00613810::TConstSetBitIterator_00613810(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00613810
TConstSetBitIterator_00613810& TConstSetBitIterator_00613810::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00613cb0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00613cb0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00613cb0& operator++();
};

TConstSetBitIterator_00613cb0::TConstSetBitIterator_00613cb0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00613cb0
TConstSetBitIterator_00613cb0& TConstSetBitIterator_00613cb0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00613dc0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00613dc0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00613dc0& operator++();
};

TConstSetBitIterator_00613dc0::TConstSetBitIterator_00613dc0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00613dc0
TConstSetBitIterator_00613dc0& TConstSetBitIterator_00613dc0::operator++()
{
    It.Advance();
    return *this;
}

int sub_0060dd40(void);
// @baa 0x00614780
int UPackageMap::sub_00614780(void)
{
    int param_1 = (int)this;

  sub_0060dd40();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_0060dda0(void);
// @baa 0x006147a0
int UPackageMap::sub_006147a0(void)
{
    int param_1 = (int)this;

  sub_0060dda0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_0060df60(void);
// @baa 0x00614940
int UPackageMap::sub_00614940(void)
{
    int param_1 = (int)this;

  sub_0060df60();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_0060dfc0(void);
// @baa 0x00614960
int UPackageMap::sub_00614960(void)
{
    int param_1 = (int)this;

  sub_0060dfc0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_0060e070(void);
// @baa 0x00614980
int UPackageMap::sub_00614980(void)
{
    int param_1 = (int)this;

  sub_0060e070();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_0060e120(void);
// @baa 0x006149a0
int UPackageMap::sub_006149a0(void)
{
    int param_1 = (int)this;

  sub_0060e120();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_0060e180(void);
// @baa 0x006149c0
int UPackageMap::sub_006149c0(void)
{
    int param_1 = (int)this;

  sub_0060e180();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct TConstSetBitIterator_00617680 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00617680(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00617680& operator++();
};

TConstSetBitIterator_00617680::TConstSetBitIterator_00617680(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00617680
TConstSetBitIterator_00617680& TConstSetBitIterator_00617680::operator++()
{
    It.Advance();
    return *this;
}

struct C_view {
    int sub_00613790(int, int);
};

// @baa 0x006176d0
int UPackageMap::sub_006176d0(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view *)(this))->sub_00613790(param_2, param_4);
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
    void sub_00613570(int, int);
};

struct C {
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
    void sub_00617700(void);
};

// @baa 0x00617700
void C::sub_00617700(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_00613570(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

// @baa 0x00617720
int UPackageMap::sub_00617720(void)
{
    int param_1 = (int)this;

  sub_0060d830();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  return param_1;
}

struct TConstSetBitIterator_00617740 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00617740(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00617740& operator++();
};

TConstSetBitIterator_00617740::TConstSetBitIterator_00617740(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00617740
TConstSetBitIterator_00617740& TConstSetBitIterator_00617740::operator++()
{
    It.Advance();
    return *this;
}

struct C_view_00617790 {
    int sub_00613860(int, int);
};

// @baa 0x00617790
int UPackageMap::sub_00617790(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_00617790 *)(this))->sub_00613860(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct Block_006177c0 {
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
    void sub_00613630(int, int);
};

struct C_006177c0 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block_006177c0* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_006177c0(void);
};

// @baa 0x006177c0
void C_006177c0::sub_006177c0(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_00613630(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct TConstSetBitIterator_00617910 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00617910(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00617910& operator++();
};

TConstSetBitIterator_00617910::TConstSetBitIterator_00617910(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00617910
TConstSetBitIterator_00617910& TConstSetBitIterator_00617910::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_006179a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_006179a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_006179a0& operator++();
};

TConstSetBitIterator_006179a0::TConstSetBitIterator_006179a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x006179a0
TConstSetBitIterator_006179a0& TConstSetBitIterator_006179a0::operator++()
{
    It.Advance();
    return *this;
}

struct C_view_006179f0 {
    int sub_00613e10(int, int);
};

// @baa 0x006179f0
int UPackageMap::sub_006179f0(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_006179f0 *)(this))->sub_00613e10(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct Block_00617a20 {
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
    void sub_006134b0(int, int);
};

struct C_00617a20 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block_00617a20* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_00617a20(void);
};

// @baa 0x00617a20
void C_00617a20::sub_00617a20(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_006134b0(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

void sub_00616b00();
// @baa 0x00617a40
void sub_00617a40(void) { sub_00616b00(); }

struct C_view_00617b10 {
    int sub_006140b0(int, int);
};

// @baa 0x00617b10
int UPackageMap::sub_00617b10(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_00617b10 *)(this))->sub_006140b0(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct Block_00617b40 {
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
    void sub_006133f0(int, int);
};

struct C_00617b40 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block_00617b40* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_00617b40(void);
};

// @baa 0x00617b40
void C_00617b40::sub_00617b40(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_006133f0(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

// @baa 0x00617b60
int UPackageMap::sub_00617b60(void)
{
    int param_1 = (int)this;

  sub_0060dd40();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_00617000();
// @baa 0x00617b80
void sub_00617b80(void) { sub_00617000(); }

// @baa 0x00617b90
int UPackageMap::sub_00617b90(void)
{
    int param_1 = (int)this;

  sub_0060dda0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view_00617bb0 {
    int sub_0060c760();
    int sub_005dae80(int, int);
};

// @baa 0x00617bb0
void UPackageMap::sub_00617bb0(void)
{
    int param_1 = (int)this;
  ((C_view_00617bb0 *)(this))->sub_0060c760();
  ((C_view_00617bb0 *)(this))->sub_005dae80(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_00617bd0 {
    int sub_0060c930();
    int sub_00613570(int, int);
};

// @baa 0x00617bd0
void UPackageMap::sub_00617bd0(void)
{
    int param_1 = (int)this;
  ((C_view_00617bd0 *)(this))->sub_0060c930();
  ((C_view_00617bd0 *)(this))->sub_00613570(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_00617bf0 {
    int sub_0060cb00();
    int sub_00613630(int, int);
};

// @baa 0x00617bf0
void UPackageMap::sub_00617bf0(void)
{
    int param_1 = (int)this;
  ((C_view_00617bf0 *)(this))->sub_0060cb00();
  ((C_view_00617bf0 *)(this))->sub_00613630(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

// @baa 0x00617c10
int UPackageMap::sub_00617c10(void)
{
    int param_1 = (int)this;

  sub_0060df60();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00617c30
int UPackageMap::sub_00617c30(void)
{
    int param_1 = (int)this;

  sub_0060dfc0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00617c50
int UPackageMap::sub_00617c50(void)
{
    int param_1 = (int)this;

  sub_0060e070();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00617c70
int UPackageMap::sub_00617c70(void)
{
    int param_1 = (int)this;

  sub_0060e120();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00617c90
int UPackageMap::sub_00617c90(void)
{
    int param_1 = (int)this;

  sub_0060e180();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view_00617cb0 {
    int sub_00617080(int);
};

// @baa 0x00617cb0
void UPackageMap::sub_00617cb0(void)
{
    int param_1 = (int)this;
  ((C_view_00617cb0 *)((*(char **)((char *)this + 0x10))))->sub_00617080(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_00617cd0 { void sub_006171a0(int); C_00617cd0 *sub_00617cd0(int); };

// @baa 0x00617cd0
C_00617cd0 *C_00617cd0::sub_00617cd0(int a) { sub_006171a0(a); return this; }

int sub_006149e0(...);
int sub_00637c10(...);
// @baa 0x00617cf0
void sub_00617cf0(undefined4 param_1, int param_2)
{
  undefined4 uVar1;
  
  uVar1 = sub_00637c10(param_1,param_2);
  sub_006149e0(uVar1,param_2 + 0xc);
  return;
}

void sub_00617350();
// @baa 0x00617e50
void sub_00617e50(void) { sub_00617350(); }

int sub_0060a2e0(void);
// @baa 0x00617e60
int UPackageMap::sub_00617e60(void)
{
    int param_1 = (int)this;

  sub_0060a2e0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_00615d70();
// @baa 0x00617e80
void sub_00617e80(void) { sub_00615d70(); }
