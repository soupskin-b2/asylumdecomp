// Engine_0920000.cpp (part 2 of 2): 63 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C { void sub_00920a60(void); };

// @baa 0x00920a60
void C::sub_00920a60(void) { *(int*)((char*)this + 4) = 0; }

void sub_00568680();
// @baa 0x00920a70
void sub_00920a70(void) { sub_00568680(); }

struct C_00920a80 { void sub_00920a80(void); };

// @baa 0x00920a80
void C_00920a80::sub_00920a80(void) { *(int*)((char*)this + 4) = 0; }

struct E { BYTE Bytes[32]; };

struct S {
    TArray<E> Items; // 0x00
    const E* sub_00920a90(INT Index) const;
};

// @baa 0x00920a90
const E* S::sub_00920a90(INT Index) const
{
    return &Items(Index);
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00920b40 { void* Data; int Num; int Max; void sub_00920b40(); };

// @baa 0x00920b40
void C_00920b40::sub_00920b40() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00920ba0 { void* Data; int Num; int Max; void sub_00920ba0(); };

// @baa 0x00920ba0
void C_00920ba0::sub_00920ba0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00920c60 { void* Data; int Num; int Max; void sub_00920c60(); };

// @baa 0x00920c60
void C_00920c60::sub_00920c60() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00920cc0 {
    int sub_00915830(undefined4 *);
    int sub_00920cc0(undefined4 *);
};

// @baa 0x00920cc0
int C_00920cc0::sub_00920cc0(undefined4 *param_2)
{
    return sub_00915830(param_2);
}

struct C_00920cd0 {
    void sub_00920cd0(int);
};

int sub_0053df70(...);
// @baa 0x00920cd0
void C_00920cd0::sub_00920cd0(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 << 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00920d10 { void* Data; int Num; int Max; void sub_00920d10(); };

// @baa 0x00920d10
void C_00920d10::sub_00920d10() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00920d70 {
    void sub_00920d70(int);
};

// @baa 0x00920d70
void C_00920d70::sub_00920d70(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00920db0 { void sub_00920db0(void); };

// @baa 0x00920db0
void C_00920db0::sub_00920db0(void) { *(int*)((char*)this + 4) = 0; }

struct C_00920dc0 { void sub_00920dc0(void); };

// @baa 0x00920dc0
void C_00920dc0::sub_00920dc0(void) { *(int*)((char*)this + 4) = 0; }

struct C_00920dd0 { void* Data; int Num; int Max; void sub_00920dd0(); };

// @baa 0x00920dd0
void C_00920dd0::sub_00920dd0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00920e30 {
    void sub_00920e30(int);
};

// @baa 0x00920e30
void C_00920e30::sub_00920e30(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 << 5,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00920e70 { C_00920e70* sub_00920e70(void); };

// @baa 0x00920e70
C_00920e70* C_00920e70::sub_00920e70(void) { return this; }

struct C_00920e80 { void* Data; int Num; int Max; void sub_00920e80(); };

// @baa 0x00920e80
void C_00920e80::sub_00920e80() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

void sub_00920ba0();
// @baa 0x009220d0
void sub_009220d0(void) { sub_00920ba0(); }

struct C_00922100 { int a, b, c; C_00922100(); };

// @baa 0x00922100
C_00922100::C_00922100() : a(0), b(0), c(0) {}

void sub_00920e80();
// @baa 0x00922120
void sub_00922120(void) { sub_00920e80(); }

void sub_00920fd0();
// @baa 0x00922130
void sub_00922130(void) { sub_00920fd0(); }

int sub_00913060(...);
int sub_00918b30(void);
extern undefined4 g_026b5dbc;
// @baa 0x009222f0
int sub_009222f0(void)
{
  if (g_026b5dbc == 0) {
    g_026b5dbc = sub_00913060(L"Engine");
    sub_00918b30();
  }
  return g_026b5dbc;
}

int sub_005c7a20(void);
extern undefined * g_01f786a8;
// @baa 0x009224d0
undefined4 * UObject::sub_009224d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f786a8);
  return param_1;
}

struct C_0092eba0 {
    void sub_0092eba0();
};

// @baa 0x0092eba0
void C_0092eba0::sub_0092eba0(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

struct C_0092ebb0 { C_0092ebb0* sub_0092ebb0(void); };

// @baa 0x0092ebb0
C_0092ebb0* C_0092ebb0::sub_0092ebb0(void) { return this; }

struct C_0092ebc0 { void* Data; int Num; int Max; void sub_0092ebc0(); };

// @baa 0x0092ebc0
void C_0092ebc0::sub_0092ebc0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0092ec20 {
    void sub_0092ec20(int);
};

// @baa 0x0092ec20
void C_0092ec20::sub_0092ec20(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_0092ec60 { void sub_007bec40(int); C_0092ec60 *sub_0092ec60(int); };

// @baa 0x0092ec60
C_0092ec60 *C_0092ec60::sub_0092ec60(int a) { sub_007bec40(a); return this; }

struct C_0092ece0 { C_0092ece0* sub_0092ece0(void); };

// @baa 0x0092ece0
C_0092ece0* C_0092ece0::sub_0092ece0(void) { return this; }

struct C_0092ecf0 { C_0092ecf0* sub_0092ecf0(void); };

// @baa 0x0092ecf0
C_0092ecf0* C_0092ecf0::sub_0092ecf0(void) { return this; }

struct C_0092ed00 { int a, b, c; C_0092ed00(); };

// @baa 0x0092ed00
C_0092ed00::C_0092ed00() : a(0), b(0), c(0) {}

struct C_0092ed10 { int a, b, c; C_0092ed10(); };

// @baa 0x0092ed10
C_0092ed10::C_0092ed10() : a(0), b(0), c(0) {}

// @baa 0x0092ed20
void USkeletalMeshComponent::sub_0092ed20(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_0092ed60 { C_0092ed60* sub_0092ed60(void); };

// @baa 0x0092ed60
C_0092ed60* C_0092ed60::sub_0092ed60(void) { return this; }

struct C_0092ed70 { C_0092ed70* sub_0092ed70(void); };

// @baa 0x0092ed70
C_0092ed70* C_0092ed70::sub_0092ed70(void) { return this; }

extern TArray<int> g_026a1ca4;
struct C_0092ed80 {
    int sub_0092ed80();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x0092ed80
int C_0092ed80::sub_0092ed80()
{
    return g_026a1ca4(Index);
}

struct C_view {
    int sub_00921150();
};

int sub_0053dfa0(...);
// @baa 0x0092ede0
undefined4 USkeletalMeshComponent::sub_0092ede0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view *)(((char *)this + 0x20)))->sub_00921150();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0092ef10 { void sub_00921f70(int); C_0092ef10 *sub_0092ef10(int); };

// @baa 0x0092ef10
C_0092ef10 *C_0092ef10::sub_0092ef10(int a) { sub_00921f70(a); return this; }

// @baa 0x0092ef30
int USkeletalMeshComponent::sub_0092ef30(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_view_0092ef40 {
    int sub_00921600(int, int);
};

// @baa 0x0092ef40
int USkeletalMeshComponent::sub_0092ef40(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_0092ef40 *)(this))->sub_00921600((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_0092f080 {
    int sub_0092f080();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x0092f080
int C_0092f080::sub_0092f080()
{
    return g_026a1ca4(Index);
}

struct C_0092f0e0 {
    int sub_0092f0e0();
};

// @baa 0x0092f0e0
int C_0092f0e0::sub_0092f0e0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0092f100 { int sub_0092f100(void); };

// @baa 0x0092f100
int C_0092f100::sub_0092f100(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0092f110 {
    int sub_0092f110(int);
};

// @baa 0x0092f110
int C_0092f110::sub_0092f110(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x58 + *param_1;
}

struct C_0092f120 {
    int sub_0092f120();
};

// @baa 0x0092f120
int C_0092f120::sub_0092f120(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0092f140 {
    int sub_0092f140(int);
};

// @baa 0x0092f140
int C_0092f140::sub_0092f140(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_0092f150 {
    int sub_0092f150();
};

// @baa 0x0092f150
int C_0092f150::sub_0092f150(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x0092f260
int USkeletalMeshComponent::sub_0092f260(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x0092f2f0
int USkeletalMeshComponent::sub_0092f2f0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x58 + *param_1;
}

struct C_0092f300 { void* Data; int Num; int Max; void sub_0092f300(); };

// @baa 0x0092f300
void C_0092f300::sub_0092f300() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x0092f3c0
int USkeletalMeshComponent::sub_0092f3c0(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x24;
}

// @baa 0x0092f3d0
int USkeletalMeshComponent::sub_0092f3d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x24;
}

struct C_0092f500 {
    void sub_0092f500(int);
};

// @baa 0x0092f500
void C_0092f500::sub_0092f500(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x58,8);
      *param_1 = iVar1;
    }
  }
  return;
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

struct TConstSetBitIterator_0092f540 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0092f540(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0092f540& operator++();
};

TConstSetBitIterator_0092f540::TConstSetBitIterator_0092f540(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0092f540
TConstSetBitIterator_0092f540& TConstSetBitIterator_0092f540::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0092f560 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0092f560(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0092f560& operator++();
};

TConstSetBitIterator_0092f560::TConstSetBitIterator_0092f560(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0092f560
TConstSetBitIterator_0092f560& TConstSetBitIterator_0092f560::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0092f580 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0092f580(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0092f580& operator++();
};

TConstSetBitIterator_0092f580::TConstSetBitIterator_0092f580(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0092f580
TConstSetBitIterator_0092f580& TConstSetBitIterator_0092f580::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0092f5a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0092f5a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0092f5a0& operator++();
};

TConstSetBitIterator_0092f5a0::TConstSetBitIterator_0092f5a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0092f5a0
TConstSetBitIterator_0092f5a0& TConstSetBitIterator_0092f5a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0092f5f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0092f5f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0092f5f0& operator++();
};

TConstSetBitIterator_0092f5f0::TConstSetBitIterator_0092f5f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0092f5f0
TConstSetBitIterator_0092f5f0& TConstSetBitIterator_0092f5f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0092f640 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0092f640(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0092f640& operator++();
};

TConstSetBitIterator_0092f640::TConstSetBitIterator_0092f640(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0092f640
TConstSetBitIterator_0092f640& TConstSetBitIterator_0092f640::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0092f690 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0092f690(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0092f690& operator++();
};

TConstSetBitIterator_0092f690::TConstSetBitIterator_0092f690(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0092f690
TConstSetBitIterator_0092f690& TConstSetBitIterator_0092f690::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0092f6e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0092f6e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0092f6e0& operator++();
};

TConstSetBitIterator_0092f6e0::TConstSetBitIterator_0092f6e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0092f6e0
TConstSetBitIterator_0092f6e0& TConstSetBitIterator_0092f6e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0092f730 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0092f730(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0092f730& operator++();
};

TConstSetBitIterator_0092f730::TConstSetBitIterator_0092f730(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0092f730
TConstSetBitIterator_0092f730& TConstSetBitIterator_0092f730::operator++()
{
    It.Advance();
    return *this;
}

struct C_0092f780 { void sub_00922020(int); C_0092f780 *sub_0092f780(int); };

// @baa 0x0092f780
C_0092f780 *C_0092f780::sub_0092f780(int a) { sub_00922020(a); return this; }
