// BmEditor_1280000.cpp: 29 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C { void* Data; int Num; int Max; void sub_01284990(); };

// @baa 0x01284990
void C::sub_01284990() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_012849f0 { void* Data; int Num; int Max; void sub_012849f0(); };

// @baa 0x012849f0
void C_012849f0::sub_012849f0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_01284a50 { void* Data; int Num; int Max; void sub_01284a50(); };

// @baa 0x01284a50
void C_01284a50::sub_01284a50() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_01284ab0 { void* Data; int Num; int Max; void sub_01284ab0(); };

// @baa 0x01284ab0
void C_01284ab0::sub_01284ab0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_01284b10 {
    undefined4 sub_01284b10(byte);
    int sub_0040fcc0();
};

int sub_0053dfa0(...);
// @baa 0x01284b10
undefined4 C_01284b10::sub_01284b10(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_01284b10 *)(((char *)this + 4)))->sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01284b40 {
    undefined4 sub_01284b40(byte);
};

int sub_0127f450(void);
// @baa 0x01284b40
undefined4 C_01284b40::sub_01284b40(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0127f450();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_0127f4b0(void);
// @baa 0x01284b60
undefined4 UObject::sub_01284b60(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0127f4b0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0128bc80 { void* Data; int Num; int Max; void sub_0128bc80(); };

// @baa 0x0128bc80
void C_0128bc80::sub_0128bc80() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_view {
    int sub_012843d0(int, int);
};

// @baa 0x0128bce0
int UUnrealEdEngine::sub_0128bce0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view *)(this))->sub_012843d0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x14;
  }
  return 0;
}

struct C_view_0128bd10 {
    int sub_012844a0(int, int);
};

// @baa 0x0128bd10
int UUnrealEdEngine::sub_0128bd10(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_0128bd10 *)(this))->sub_012844a0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_view_0128bd40 {
    int sub_012845a0(int, int);
};

// @baa 0x0128bd40
int UUnrealEdEngine::sub_0128bd40(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_0128bd40 *)(this))->sub_012845a0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
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

struct TConstSetBitIterator_0128be50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0128be50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0128be50& operator++();
};

TConstSetBitIterator_0128be50::TConstSetBitIterator_0128be50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0128be50
TConstSetBitIterator_0128be50& TConstSetBitIterator_0128be50::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0128c1d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0128c1d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0128c1d0& operator++();
};

TConstSetBitIterator_0128c1d0::TConstSetBitIterator_0128c1d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0128c1d0
TConstSetBitIterator_0128c1d0& TConstSetBitIterator_0128c1d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0128c1f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0128c1f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0128c1f0& operator++();
};

TConstSetBitIterator_0128c1f0::TConstSetBitIterator_0128c1f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0128c1f0
TConstSetBitIterator_0128c1f0& TConstSetBitIterator_0128c1f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0128c240 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0128c240(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0128c240& operator++();
};

TConstSetBitIterator_0128c240::TConstSetBitIterator_0128c240(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0128c240
TConstSetBitIterator_0128c240& TConstSetBitIterator_0128c240::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0128c290 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0128c290(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0128c290& operator++();
};

TConstSetBitIterator_0128c290::TConstSetBitIterator_0128c290(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0128c290
TConstSetBitIterator_0128c290& TConstSetBitIterator_0128c290::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0128c2b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0128c2b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0128c2b0& operator++();
};

TConstSetBitIterator_0128c2b0::TConstSetBitIterator_0128c2b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0128c2b0
TConstSetBitIterator_0128c2b0& TConstSetBitIterator_0128c2b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0128c2d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0128c2d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0128c2d0& operator++();
};

TConstSetBitIterator_0128c2d0::TConstSetBitIterator_0128c2d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0128c2d0
TConstSetBitIterator_0128c2d0& TConstSetBitIterator_0128c2d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0128c2f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0128c2f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0128c2f0& operator++();
};

TConstSetBitIterator_0128c2f0::TConstSetBitIterator_0128c2f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0128c2f0
TConstSetBitIterator_0128c2f0& TConstSetBitIterator_0128c2f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0128c340 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0128c340(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0128c340& operator++();
};

TConstSetBitIterator_0128c340::TConstSetBitIterator_0128c340(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0128c340
TConstSetBitIterator_0128c340& TConstSetBitIterator_0128c340::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0128c390 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0128c390(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0128c390& operator++();
};

TConstSetBitIterator_0128c390::TConstSetBitIterator_0128c390(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0128c390
TConstSetBitIterator_0128c390& TConstSetBitIterator_0128c390::operator++()
{
    It.Advance();
    return *this;
}

void sub_01284990();
// @baa 0x0128c3e0
void sub_0128c3e0(void) { sub_01284990(); }

void sub_012849f0();
// @baa 0x0128c3f0
void sub_0128c3f0(void) { sub_012849f0(); }

struct C_0128c400 { C_0128c400* sub_0128c400(void); };

// @baa 0x0128c400
C_0128c400* C_0128c400::sub_0128c400(void) { return this; }

struct C_0128c410 { C_0128c410* sub_0128c410(void); };

// @baa 0x0128c410
C_0128c410* C_0128c410::sub_0128c410(void) { return this; }

int sub_01284c40(void);
// @baa 0x0128c6b0
undefined4 UUnrealEdEngine::sub_0128c6b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01284c40();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_01284da0(void);
// @baa 0x0128c710
undefined4 UUnrealEdEngine::sub_0128c710(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01284da0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_01284f70(void);
// @baa 0x0128c770
undefined4 UUnrealEdEngine::sub_0128c770(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01284f70();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_01285210(void);
// @baa 0x0128c7d0
undefined4 UUnrealEdEngine::sub_0128c7d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01285210();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
