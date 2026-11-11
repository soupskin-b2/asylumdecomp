// Engine_0dd0000.cpp (part 1 of 2): 21 functions
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

struct TConstSetBitIterator_00dd18b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dd18b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dd18b0& operator++();
};

TConstSetBitIterator_00dd18b0::TConstSetBitIterator_00dd18b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dd18b0
TConstSetBitIterator_00dd18b0& TConstSetBitIterator_00dd18b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00dd1900 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dd1900(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dd1900& operator++();
};

TConstSetBitIterator_00dd1900::TConstSetBitIterator_00dd1900(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dd1900
TConstSetBitIterator_00dd1900& TConstSetBitIterator_00dd1900::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00dd1950 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dd1950(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dd1950& operator++();
};

TConstSetBitIterator_00dd1950::TConstSetBitIterator_00dd1950(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dd1950
TConstSetBitIterator_00dd1950& TConstSetBitIterator_00dd1950::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00dd19a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00dd19a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00dd19a0& operator++();
};

TConstSetBitIterator_00dd19a0::TConstSetBitIterator_00dd19a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00dd19a0
TConstSetBitIterator_00dd19a0& TConstSetBitIterator_00dd19a0::operator++()
{
    It.Advance();
    return *this;
}

struct C {
    undefined4 sub_00dd9de0();
};

int sub_00dd8e30(...);
int sub_00dd8fb0(void);
int sub_00dd9e2f(...);
extern undefined4 g_026c5d80;
// @baa 0x00dd9de0
undefined4 C::sub_00dd9de0(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    if (g_026c5d80 == 0) {
      g_026c5d80 = sub_00dd8e30(L"Engine");
      sub_00dd8fb0();
      if (g_026c5d80 == 0) {
sub_00dd9e2f:
        return *(undefined4 *)(param_1 + 0x2c);
      }
    }
    for (iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + 0x28); iVar1 != 0;
        iVar1 = *(int *)(iVar1 + 0x30)) {
      if (iVar1 == g_026c5d80) goto sub_00dd9e2f;
    }
  }
  return 0;
}

// @baa 0x00ddcd40
void sub_00ddcd40(void) {  }

// @baa 0x00ddcd50
void sub_00ddcd50(void) {  }

// @baa 0x00ddcd60
float10 sub_00ddcd60(double param_1)
{
  return (float10)param_1;
}

struct C_view {
    int sub_00c407b0(int);
};

extern undefined4 g_020d5098;
// @baa 0x00ddcda0
undefined4 * UUnrealEdEngine::sub_00ddcda0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00c407b0(2);
  param_1[4] = param_2;
  *param_1 = (undefined4)(&g_020d5098);
  return param_1;
}

void sub_00c38ac0();
// @baa 0x00ddce40
void sub_00ddce40(void) { sub_00c38ac0(); }

struct C_00ddce50 { void sub_00ddce50(int a0); };

// @baa 0x00ddce50
void C_00ddce50::sub_00ddce50(int a0) { *(int*)((char*)this + 48) = a0; }

struct C_00ddce60 { C_00ddce60* sub_00ddce60(void); };

// @baa 0x00ddce60
C_00ddce60* C_00ddce60::sub_00ddce60(void) { return this; }

struct C_00ddce70 { int a, b; C_00ddce70(int, int); };

// @baa 0x00ddce70
C_00ddce70::C_00ddce70(int x, int y) : a(x), b(y) {}

// @baa 0x00ddcf50
int sub_00ddcf50(int a0, int a1) { return a1; }

// @baa 0x00ddcf90
int sub_00ddcf90(int a0, int a1) { return a1; }

int sub_005c7a20(void);
extern undefined * g_020d50b8;
// @baa 0x00ddcfa0
undefined4 * UObject::sub_00ddcfa0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020d50b8);
  return param_1;
}

// @baa 0x00ddcfc0
IMPLEMENT_CLASS_AT(UUILayerBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUserInterface.cpp", 38);

// @baa 0x00ddd020
extern "C" int g_026c5078;
extern "C" int g_026c507c;
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
    void sub_00ddd040();
};

// @baa 0x00ddd040
void UObjectThunk::sub_00ddd040()
{
    this->ProcessEvent(this->sub_005d7d10(g_026c5078, g_026c507c, 0), 0, 0);
}

// @baa 0x00ddd070
int sub_00ddd070(int a0, int a1) { return a1; }

struct C_00ddcef0
{
    BYTE pad_00[0x10];
    BYTE Values[1];

    INT sub_00ddcef0(INT Index);
};

// @baa 0x00ddcef0
INT C_00ddcef0::sub_00ddcef0(INT Index)
{
    return Values[Index];
}
