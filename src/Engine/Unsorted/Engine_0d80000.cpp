// Engine_0d80000.cpp (part 1 of 2): 89 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

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

struct TConstSetBitIterator_00d80bf0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d80bf0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d80bf0& operator++();
};

TConstSetBitIterator_00d80bf0::TConstSetBitIterator_00d80bf0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d80bf0
TConstSetBitIterator_00d80bf0& TConstSetBitIterator_00d80bf0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d80c40 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d80c40(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d80c40& operator++();
};

TConstSetBitIterator_00d80c40::TConstSetBitIterator_00d80c40(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d80c40
TConstSetBitIterator_00d80c40& TConstSetBitIterator_00d80c40::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d80c90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d80c90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d80c90& operator++();
};

TConstSetBitIterator_00d80c90::TConstSetBitIterator_00d80c90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d80c90
TConstSetBitIterator_00d80c90& TConstSetBitIterator_00d80c90::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d80e60 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d80e60(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d80e60& operator++();
};

TConstSetBitIterator_00d80e60::TConstSetBitIterator_00d80e60(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d80e60
TConstSetBitIterator_00d80e60& TConstSetBitIterator_00d80e60::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d80f10 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d80f10(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d80f10& operator++();
};

TConstSetBitIterator_00d80f10::TConstSetBitIterator_00d80f10(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d80f10
TConstSetBitIterator_00d80f10& TConstSetBitIterator_00d80f10::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d80f60 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d80f60(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d80f60& operator++();
};

TConstSetBitIterator_00d80f60::TConstSetBitIterator_00d80f60(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d80f60
TConstSetBitIterator_00d80f60& TConstSetBitIterator_00d80f60::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d80fb0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d80fb0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d80fb0& operator++();
};

TConstSetBitIterator_00d80fb0::TConstSetBitIterator_00d80fb0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d80fb0
TConstSetBitIterator_00d80fb0& TConstSetBitIterator_00d80fb0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d81000 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d81000(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d81000& operator++();
};

TConstSetBitIterator_00d81000::TConstSetBitIterator_00d81000(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d81000
TConstSetBitIterator_00d81000& TConstSetBitIterator_00d81000::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d81050 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d81050(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d81050& operator++();
};

TConstSetBitIterator_00d81050::TConstSetBitIterator_00d81050(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d81050
TConstSetBitIterator_00d81050& TConstSetBitIterator_00d81050::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d810a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d810a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d810a0& operator++();
};

TConstSetBitIterator_00d810a0::TConstSetBitIterator_00d810a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d810a0
TConstSetBitIterator_00d810a0& TConstSetBitIterator_00d810a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d810f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d810f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d810f0& operator++();
};

TConstSetBitIterator_00d810f0::TConstSetBitIterator_00d810f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d810f0
TConstSetBitIterator_00d810f0& TConstSetBitIterator_00d810f0::operator++()
{
    It.Advance();
    return *this;
}

struct C {
    undefined4 sub_00d81140(byte);
    int sub_00553720();
};

int sub_0053dfa0(...);

struct TConstSetBitIterator_00d81170 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d81170(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d81170& operator++();
};

TConstSetBitIterator_00d81170::TConstSetBitIterator_00d81170(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d81170
TConstSetBitIterator_00d81170& TConstSetBitIterator_00d81170::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d812b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d812b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d812b0& operator++();
};

TConstSetBitIterator_00d812b0::TConstSetBitIterator_00d812b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d812b0
TConstSetBitIterator_00d812b0& TConstSetBitIterator_00d812b0::operator++()
{
    It.Advance();
    return *this;
}

int sub_005c7a70(...);
int sub_00d81390(void);
// @baa 0x00d81430
undefined4 UConsole::sub_00d81430(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00d81390();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x184);
  }
  return param_1;
}

struct C_00d82280 { C_00d82280* sub_00d82280(void); };

// @baa 0x00d82280
C_00d82280* C_00d82280::sub_00d82280(void) { return this; }

void sub_00d82010();
// @baa 0x00d83980
void sub_00d83980(void) { sub_00d82010(); }

void sub_00d820e0();
// @baa 0x00d83990
void sub_00d83990(void) { sub_00d820e0(); }

void sub_00d821b0();
// @baa 0x00d839a0
void sub_00d839a0(void) { sub_00d821b0(); }

void sub_00d82290();
// @baa 0x00d839c0
void sub_00d839c0(void) { sub_00d82290(); }

struct C_00d84690 { C_00d84690* sub_00d84690(void); };

// @baa 0x00d84690
C_00d84690* C_00d84690::sub_00d84690(void) { return this; }

struct C_00d846a0 { C_00d846a0* sub_00d846a0(void); };

// @baa 0x00d846a0
C_00d846a0* C_00d846a0::sub_00d846a0(void) { return this; }

struct C_00d846b0 { C_00d846b0* sub_00d846b0(void); };

// @baa 0x00d846b0
C_00d846b0* C_00d846b0::sub_00d846b0(void) { return this; }

struct C_00d84790 { C_00d84790* sub_00d84790(void); };

// @baa 0x00d84790
C_00d84790* C_00d84790::sub_00d84790(void) { return this; }

void sub_00d825b0();
// @baa 0x00d847a0
void sub_00d847a0(void) { sub_00d825b0(); }

void sub_00d82630();
// @baa 0x00d847b0
void sub_00d847b0(void) { sub_00d82630(); }

struct TConstSetBitIterator_00d847c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d847c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d847c0& operator++();
};

TConstSetBitIterator_00d847c0::TConstSetBitIterator_00d847c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d847c0
TConstSetBitIterator_00d847c0& TConstSetBitIterator_00d847c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d847e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d847e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d847e0& operator++();
};

TConstSetBitIterator_00d847e0::TConstSetBitIterator_00d847e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d847e0
TConstSetBitIterator_00d847e0& TConstSetBitIterator_00d847e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d84800 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d84800(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d84800& operator++();
};

TConstSetBitIterator_00d84800::TConstSetBitIterator_00d84800(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d84800
TConstSetBitIterator_00d84800& TConstSetBitIterator_00d84800::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d84820 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d84820(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d84820& operator++();
};

TConstSetBitIterator_00d84820::TConstSetBitIterator_00d84820(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d84820
TConstSetBitIterator_00d84820& TConstSetBitIterator_00d84820::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00d84840 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00d84840(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00d84840& operator++();
};

TConstSetBitIterator_00d84840::TConstSetBitIterator_00d84840(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00d84840
TConstSetBitIterator_00d84840& TConstSetBitIterator_00d84840::operator++()
{
    It.Advance();
    return *this;
}

struct C_00d87150 {
    int sub_00d87150();
};

int sub_00d80ce0(void);
// @baa 0x00d87150
int C_00d87150::sub_00d87150(void)
{
    int param_1 = (int)this;

  sub_00d80ce0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00d87170 {
    int sub_00d87170();
};

int sub_00d80d40(void);
// @baa 0x00d87170
int C_00d87170::sub_00d87170(void)
{
    int param_1 = (int)this;

  sub_00d80d40();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00d87190 {
    int sub_00d87190();
};

int sub_00d80da0(void);
// @baa 0x00d87190
int C_00d87190::sub_00d87190(void)
{
    int param_1 = (int)this;

  sub_00d80da0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00d871b0 {
    int sub_00d871b0();
};

int sub_00d80e00(void);
// @baa 0x00d871b0
int C_00d871b0::sub_00d871b0(void)
{
    int param_1 = (int)this;

  sub_00d80e00();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_00d86280();
// @baa 0x00d87280
void sub_00d87280(void) { sub_00d86280(); }

void sub_00d86350();
// @baa 0x00d87290
void sub_00d87290(void) { sub_00d86350(); }

void sub_00d86420();
// @baa 0x00d872a0
void sub_00d872a0(void) { sub_00d86420(); }

void sub_00d866b0();
// @baa 0x00d87ca0
void sub_00d87ca0(void) { sub_00d866b0(); }

void sub_00d86720();
// @baa 0x00d87cb0
void sub_00d87cb0(void) { sub_00d86720(); }

struct C_00d87cc0 { C_00d87cc0* sub_00d87cc0(void); };

// @baa 0x00d87cc0
C_00d87cc0* C_00d87cc0::sub_00d87cc0(void) { return this; }

struct C_00d87cd0 { C_00d87cd0* sub_00d87cd0(void); };

// @baa 0x00d87cd0
C_00d87cd0* C_00d87cd0::sub_00d87cd0(void) { return this; }

struct C_00d87ce0 { C_00d87ce0* sub_00d87ce0(void); };

// @baa 0x00d87ce0
C_00d87ce0* C_00d87ce0::sub_00d87ce0(void) { return this; }

struct C_00d883a0 {
    int sub_00d883a0();
};

// @baa 0x00d883a0
int C_00d883a0::sub_00d883a0(void)
{
    int param_1 = (int)this;

  sub_00d80da0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00d883c0 {
    int sub_00d883c0();
};

// @baa 0x00d883c0
int C_00d883c0::sub_00d883c0(void)
{
    int param_1 = (int)this;

  sub_00d80e00();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_00d87040(void);
// @baa 0x00d883e0
undefined4 UObject::sub_00d883e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00d87040();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00d889b0 { C_00d889b0* sub_00d889b0(void); };

// @baa 0x00d889b0
C_00d889b0* C_00d889b0::sub_00d889b0(void) { return this; }

int sub_005c7a20(void);
extern undefined * g_020b70e8;
// @baa 0x00d889c0
undefined4 * UObject::sub_00d889c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020b70e8);
  return param_1;
}

// @baa 0x00d889e0
IMPLEMENT_CLASS_AT(UOnlineGameSearch, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UOnlineSubsystem.cpp", 11);

// @baa 0x00d88ae0
IMPLEMENT_CLASS_AT(UOnlineGameSettings, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UOnlineSubsystem.cpp", 10);

// @baa 0x00d88b50
extern undefined * g_020b7458;
// @baa 0x00d88b80
undefined4 * UObject::sub_00d88b80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020b7458);
  return param_1;
}

void sub_00d864f0();
// @baa 0x00d88c70
void sub_00d88c70(void) { sub_00d864f0(); }

void sub_00d86560();
// @baa 0x00d88c80
void sub_00d88c80(void) { sub_00d86560(); }

void sub_00d865d0();
// @baa 0x00d88c90
void sub_00d88c90(void) { sub_00d865d0(); }

void sub_00d86640();
// @baa 0x00d88ca0
void sub_00d88ca0(void) { sub_00d86640(); }

// @baa 0x00d89d50
void sub_00d89d50(void) { sub_00d866b0(); }

void sub_00d88140();
// @baa 0x00d8a7b0
void sub_00d8a7b0(void) { sub_00d88140(); }

struct C_00d8a890 {
    int sub_00d8a890();
};

// @baa 0x00d8a890
int C_00d8a890::sub_00d8a890(void)
{
    int param_1 = (int)this;

  sub_00d80da0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00d8a8b0 {
    int sub_00d8a8b0();
};

// @baa 0x00d8a8b0
int C_00d8a8b0::sub_00d8a8b0(void)
{
    int param_1 = (int)this;

  sub_00d80e00();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00d8abc0
void sub_00d8abc0(void) { sub_00d864f0(); }

void sub_00d8a7c0();
// @baa 0x00d8abd0
void sub_00d8abd0(void) { sub_00d8a7c0(); }

// @baa 0x00d8abe0
void sub_00d8abe0(void) { sub_00d86560(); }

// @baa 0x00d8ac70
void sub_00d8ac70(void) { sub_00d865d0(); }

// @baa 0x00d8ac80
void sub_00d8ac80(void) { sub_00d86640(); }

// @baa 0x00d8ba80
void sub_00d8ba80(void) { sub_00d866b0(); }

// @baa 0x00d8ba90
void sub_00d8ba90(void) { sub_00d866b0(); }

// @baa 0x00d8bfe0
// @baa 0x00d8c0f0
bool UOnlineGameSettings::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d8c130
// @baa 0x00d8c240
bool UOnlineGameSearch::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_00d8c4a0 {
    int sub_00d8c4a0();
};

// @baa 0x00d8c4a0
int C_00d8c4a0::sub_00d8c4a0(void)
{
    int param_1 = (int)this;

  sub_00d80e00();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00d8c660
void sub_00d8c660(void) { sub_00d88140(); }

struct M_00d8c670 { void sub_00d864f0(); };

struct C_00d8c670 { char pad[4]; M_00d8c670 m; void sub_00d8c670(); };

// @baa 0x00d8c670
void C_00d8c670::sub_00d8c670() { m.sub_00d864f0(); }

// @baa 0x00d8c680
void sub_00d8c680(void) { sub_00d8a7c0(); }

// @baa 0x00d8eac0
undefined4 sub_00d8eac0(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

// @baa 0x00d8ead0
IMPLEMENT_CLASS_AT(UUIComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIComponents.cpp", 19);

// @baa 0x00d8eb50
// @baa 0x00d8eb70
undefined4 sub_00d8eb70(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

// @baa 0x00d8eb80
// @baa 0x00d8ec90
int UUIComponent::vf_000(void) { return 1; }

// @baa 0x00d8eca0
bool UUIComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d8f1d0
void sub_00d8f1d0(void) {  }

extern "C" int g_026c4a00;
extern "C" int g_026c4a04;
struct UObjectThunk {
    virtual void V00();
    virtual void V04();
    virtual void V08();
    virtual void V0c();
    virtual void V10();
    virtual void V14();
    virtual void V18();
    virtual void V1c();
    virtual void V20();
    virtual void V24();
    virtual void V28();
    virtual void V2c();
    virtual void V30();
    virtual void V34();
    virtual void V38();
    virtual void V3c();
    virtual void V40();
    virtual void V44();
    virtual void V48();
    virtual void V4c();
    virtual void V50();
    virtual void V54();
    virtual void V58();
    virtual void V5c();
    virtual void V60();
    virtual void V64();
    virtual void V68();
    virtual void V6c();
    virtual void V70();
    virtual void V74();
    virtual void V78();
    virtual void V7c();
    virtual void V80();
    virtual void V84();
    virtual void V88();
    virtual void V8c();
    virtual void V90();
    virtual void V94();
    virtual void V98();
    virtual void V9c();
    virtual void VA0();
    virtual void VA4();
    virtual void VA8();
    virtual void VAc();
    virtual void VB0();
    virtual void VB4();
    virtual void VB8();
    virtual void VBc();
    virtual void VC0();
    virtual void VC4();
    virtual void VC8();
    virtual void VCc();
    virtual void VD0();
    virtual void VD4();
    virtual void VD8();
    virtual void VDc();
    virtual void VE0();
    virtual void VE4();
    virtual void VE8();
    virtual void ProcessEvent(int, int, int);
    int __thiscall sub_005d7d10(int, int, int);
    void sub_00d8f200();
};

// @baa 0x00d8f200
void UObjectThunk::sub_00d8f200()
{
    this->ProcessEvent(this->sub_005d7d10(g_026c4a00, g_026c4a04, 0), 0, 0);
}

struct C_00d8f2c0 { C_00d8f2c0* sub_00d8f2c0(void); };

// @baa 0x00d8f2c0
C_00d8f2c0* C_00d8f2c0::sub_00d8f2c0(void) { return this; }

struct C_00d8f2d0 { C_00d8f2d0* sub_00d8f2d0(void); };

// @baa 0x00d8f2d0
C_00d8f2d0* C_00d8f2d0::sub_00d8f2d0(void) { return this; }

struct C_00d8f2e0 { C_00d8f2e0* sub_00d8f2e0(void); };

// @baa 0x00d8f2e0
C_00d8f2e0* C_00d8f2e0::sub_00d8f2e0(void) { return this; }

struct C_00d8f2f0 { C_00d8f2f0* sub_00d8f2f0(void); };

// @baa 0x00d8f2f0
C_00d8f2f0* C_00d8f2f0::sub_00d8f2f0(void) { return this; }

// @baa 0x00d8f320
int sub_00d8f320(int a0, int a1) { return a1; }
