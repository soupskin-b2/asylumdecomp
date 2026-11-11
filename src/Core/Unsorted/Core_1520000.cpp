// Core_1520000.cpp: 46 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    int sub_015267d0(int);
};

// @baa 0x015267d0
int C::sub_015267d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_015267e0 {
    int sub_015267e0();
};

// @baa 0x015267e0
int C_015267e0::sub_015267e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x28;
}

struct C_015267f0 {
    int sub_015267f0(int);
};

// @baa 0x015267f0
int C_015267f0::sub_015267f0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x44;
}

struct C_01526810 {
    int sub_01526810();
};

// @baa 0x01526810
int C_01526810::sub_01526810(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x44;
}

struct C_01526890 {
    undefined4 sub_01526890(byte);
};

int sub_0053dfa0(...);
int sub_01515670(void);
// @baa 0x01526890
undefined4 C_01526890::sub_01526890(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01515670();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_0040fcc0(void);
// @baa 0x015268b0
undefined4 UObject::sub_015268b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_015268d0 {
    undefined4 sub_015268d0(byte);
    int sub_0040fcc0();
};

// @baa 0x015268d0
undefined4 C_015268d0::sub_015268d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_015268d0 *)(((char *)this + 0x1c)))->sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01526900 {
    int sub_01526900();
};

// @baa 0x01526900
int C_01526900::sub_01526900(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

// @baa 0x01526980
int UTexture2D::sub_01526980(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x28;
}

// @baa 0x01526a10
int UTexture2D::sub_01526a10(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x44;
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

struct TConstSetBitIterator_01526c70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01526c70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01526c70& operator++();
};

TConstSetBitIterator_01526c70::TConstSetBitIterator_01526c70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01526c70
TConstSetBitIterator_01526c70& TConstSetBitIterator_01526c70::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01526cc0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01526cc0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01526cc0& operator++();
};

TConstSetBitIterator_01526cc0::TConstSetBitIterator_01526cc0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01526cc0
TConstSetBitIterator_01526cc0& TConstSetBitIterator_01526cc0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01526d10 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01526d10(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01526d10& operator++();
};

TConstSetBitIterator_01526d10::TConstSetBitIterator_01526d10(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01526d10
TConstSetBitIterator_01526d10& TConstSetBitIterator_01526d10::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01526d60 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01526d60(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01526d60& operator++();
};

TConstSetBitIterator_01526d60::TConstSetBitIterator_01526d60(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01526d60
TConstSetBitIterator_01526d60& TConstSetBitIterator_01526d60::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01526db0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01526db0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01526db0& operator++();
};

TConstSetBitIterator_01526db0::TConstSetBitIterator_01526db0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01526db0
TConstSetBitIterator_01526db0& TConstSetBitIterator_01526db0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01526e00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01526e00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01526e00& operator++();
};

TConstSetBitIterator_01526e00::TConstSetBitIterator_01526e00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01526e00
TConstSetBitIterator_01526e00& TConstSetBitIterator_01526e00::operator++()
{
    It.Advance();
    return *this;
}

void sub_0151bcd0();
// @baa 0x01527310
void sub_01527310(void) { sub_0151bcd0(); }

void sub_0151bd30();
// @baa 0x01527320
void sub_01527320(void) { sub_0151bd30(); }

struct C_01527470 { C_01527470* sub_01527470(void); };

// @baa 0x01527470
C_01527470* C_01527470::sub_01527470(void) { return this; }

struct C_01527480 {
    int sub_01527480();
};

// @baa 0x01527480
int C_01527480::sub_01527480(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 4 + param_1[5] * 0x28;
}

struct C_0152b270 {
    int sub_0152b270();
};

// @baa 0x0152b270
int C_0152b270::sub_0152b270(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 4 + param_1[5] * 0x44;
}

struct C_0152b7d0 {
    int sub_0152b7d0();
};

// @baa 0x0152b7d0
int C_0152b7d0::sub_0152b7d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_view {
    int sub_01526910(int, int);
};

// @baa 0x0152b7e0
int UTexture2D::sub_0152b7e0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view *)(this))->sub_01526910((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x28;
  }
  return 0;
}

struct C_view_0152b8d0 {
    int sub_01526990(int, int);
};

// @baa 0x0152b8d0
int UTexture2D::sub_0152b8d0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_0152b8d0 *)(this))->sub_01526990((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x44;
  }
  return 0;
}

struct M_0152ba80 { void sub_0151bd30(); };

struct C_0152ba80 { char pad[8]; M_0152ba80 m; void sub_0152ba80(); };

// @baa 0x0152ba80
void C_0152ba80::sub_0152ba80() { m.sub_0151bd30(); }

struct TConstSetBitIterator_0152bc00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0152bc00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0152bc00& operator++();
};

TConstSetBitIterator_0152bc00::TConstSetBitIterator_0152bc00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0152bc00
TConstSetBitIterator_0152bc00& TConstSetBitIterator_0152bc00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0152be90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0152be90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0152be90& operator++();
};

TConstSetBitIterator_0152be90::TConstSetBitIterator_0152be90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0152be90
TConstSetBitIterator_0152be90& TConstSetBitIterator_0152be90::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0152beb0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0152beb0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0152beb0& operator++();
};

TConstSetBitIterator_0152beb0::TConstSetBitIterator_0152beb0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0152beb0
TConstSetBitIterator_0152beb0& TConstSetBitIterator_0152beb0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0152bf00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0152bf00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0152bf00& operator++();
};

TConstSetBitIterator_0152bf00::TConstSetBitIterator_0152bf00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0152bf00
TConstSetBitIterator_0152bf00& TConstSetBitIterator_0152bf00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0152bf50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0152bf50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0152bf50& operator++();
};

TConstSetBitIterator_0152bf50::TConstSetBitIterator_0152bf50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0152bf50
TConstSetBitIterator_0152bf50& TConstSetBitIterator_0152bf50::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0152bfa0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0152bfa0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0152bfa0& operator++();
};

TConstSetBitIterator_0152bfa0::TConstSetBitIterator_0152bfa0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0152bfa0
TConstSetBitIterator_0152bfa0& TConstSetBitIterator_0152bfa0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0152bff0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0152bff0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0152bff0& operator++();
};

TConstSetBitIterator_0152bff0::TConstSetBitIterator_0152bff0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0152bff0
TConstSetBitIterator_0152bff0& TConstSetBitIterator_0152bff0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0152c040 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0152c040(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0152c040& operator++();
};

TConstSetBitIterator_0152c040::TConstSetBitIterator_0152c040(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0152c040
TConstSetBitIterator_0152c040& TConstSetBitIterator_0152c040::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0152c120 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0152c120(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0152c120& operator++();
};

TConstSetBitIterator_0152c120::TConstSetBitIterator_0152c120(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0152c120
TConstSetBitIterator_0152c120& TConstSetBitIterator_0152c120::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0152c170 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0152c170(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0152c170& operator++();
};

TConstSetBitIterator_0152c170::TConstSetBitIterator_0152c170(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0152c170
TConstSetBitIterator_0152c170& TConstSetBitIterator_0152c170::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0152c190 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0152c190(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0152c190& operator++();
};

TConstSetBitIterator_0152c190::TConstSetBitIterator_0152c190(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0152c190
TConstSetBitIterator_0152c190& TConstSetBitIterator_0152c190::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0152c1e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0152c1e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0152c1e0& operator++();
};

TConstSetBitIterator_0152c1e0::TConstSetBitIterator_0152c1e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0152c1e0
TConstSetBitIterator_0152c1e0& TConstSetBitIterator_0152c1e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0152c200 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0152c200(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0152c200& operator++();
};

TConstSetBitIterator_0152c200::TConstSetBitIterator_0152c200(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0152c200
TConstSetBitIterator_0152c200& TConstSetBitIterator_0152c200::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0152c250 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0152c250(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0152c250& operator++();
};

TConstSetBitIterator_0152c250::TConstSetBitIterator_0152c250(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0152c250
TConstSetBitIterator_0152c250& TConstSetBitIterator_0152c250::operator++()
{
    It.Advance();
    return *this;
}

void sub_01526e50();
// @baa 0x0152c270
void sub_0152c270(void) { sub_01526e50(); }

void sub_01526f00();
// @baa 0x0152c280
void sub_0152c280(void) { sub_01526f00(); }

void sub_01526f80();
// @baa 0x0152c290
void sub_0152c290(void) { sub_01526f80(); }

int sub_0152c360(void);
int sub_005c7a70(...);
// @baa 0x0152c3c0
undefined4 URScriptConversationFactoryNew::sub_0152c3c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  sub_0152c360();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,100);
  }
  return param_1;
}

int sub_005c7a20(void);
extern undefined * g_022de5b8;
// @baa 0x0152c480
undefined4 * UObject::sub_0152c480(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022de5b8);
  return param_1;
}

// @baa 0x0152c4c0
IMPLEMENT_CLASS_AT(URScriptConversation, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameClasses.cpp", 34);

// @baa 0x0152c530
