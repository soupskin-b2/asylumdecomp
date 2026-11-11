// Engine_09e0000.cpp (part 1 of 2): 36 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct E { BYTE Bytes[40]; };

struct S {
    TArray<E> Items; // 0x00
    E* sub_009e0020(INT Index);
};

// @baa 0x009e0020
E* S::sub_009e0020(INT Index)
{
    return &Items(Index);
}

struct S_009e00f0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_009e00f0(INT Index);
};

// @baa 0x009e00f0
DWORD* S_009e00f0::sub_009e00f0(INT Index)
{
    return &Items(Index);
}

struct C {
    void sub_009e01a0(undefined4 *);
};

// @baa 0x009e01a0
void C::sub_009e01a0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

struct C_009e01c0 {
    int sub_009e01c0(int);
};

// @baa 0x009e01c0
int C_009e01c0::sub_009e01c0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x2c + *param_1;
}

struct C_009e0200 { int sub_009e0200(void); };

// @baa 0x009e0200
int C_009e0200::sub_009e0200(void) { return *(int*)((char*)this + 20); }

struct C_009e0210 {
    int sub_009e0210();
};

// @baa 0x009e0210
int C_009e0210::sub_009e0210(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_009e0290 {
    int sub_009e0290(int);
};

// @baa 0x009e0290
int C_009e0290::sub_009e0290(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x2c + *param_1;
}

struct C_009e02a0 {
    int sub_009e02a0(int);
};

// @baa 0x009e02a0
int C_009e02a0::sub_009e02a0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_009e02b0 {
    int sub_009e02b0();
};

// @baa 0x009e02b0
int C_009e02b0::sub_009e02b0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_009e04c0 {
    void sub_009e04c0(int);
};

int sub_0053df70(...);
// @baa 0x009e04c0
void C_009e04c0::sub_009e04c0(int param_2)
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

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_009e7080 { void* Data; int Num; int Max; void sub_009e7080(); };

// @baa 0x009e7080
void C_009e7080::sub_009e7080() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_009e70e0 {
int sub_009df970(undefined4 *);
int sub_009e70e0(undefined4 *);
};

// @baa 0x009e70e0
int C_009e70e0::sub_009e70e0(undefined4 *param)
{
return sub_009df970(param);
}

struct C_009e76c0 {
    int sub_009e76c0(int);
};

// @baa 0x009e76c0
int C_009e76c0::sub_009e76c0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x2c + *param_1;
}

struct C_009e7700 {
    int sub_009e7700();
};

// @baa 0x009e7700
int C_009e7700::sub_009e7700(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_009e7720 {
    int sub_009e7720();
};

// @baa 0x009e7720
int C_009e7720::sub_009e7720(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x2c + *(int *)*param_1;
}

struct C_009e7730 {
    int sub_009e7730(int);
};

// @baa 0x009e7730
int C_009e7730::sub_009e7730(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x2c + *param_1;
}

struct C_009e7740 {
    int sub_009e7740();
};

// @baa 0x009e7740
int C_009e7740::sub_009e7740(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x2c + *(int *)*param_1;
}

struct C_009e7750 {
    int sub_009e7750();
};

// @baa 0x009e7750
int C_009e7750::sub_009e7750(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_009e7760 {
    int sub_009e7760();
};

// @baa 0x009e7760
int C_009e7760::sub_009e7760(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x2c + *(int *)*param_1;
}

void sub_009e7080();
// @baa 0x009e7aa0
void sub_009e7aa0(void) { sub_009e7080(); }

void sub_009e70f0();
// @baa 0x009e7b10
void sub_009e7b10(void) { sub_009e70f0(); }

void sub_009e7230();
// @baa 0x009e7b20
void sub_009e7b20(void) { sub_009e7230(); }

void sub_009e72d0();
// @baa 0x009e7b30
void sub_009e7b30(void) { sub_009e72d0(); }

void sub_009e7370();
// @baa 0x009e7b40
void sub_009e7b40(void) { sub_009e7370(); }

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

struct TConstSetBitIterator_009eccb0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_009eccb0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_009eccb0& operator++();
};

TConstSetBitIterator_009eccb0::TConstSetBitIterator_009eccb0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x009eccb0
TConstSetBitIterator_009eccb0& TConstSetBitIterator_009eccb0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_009eced0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_009eced0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_009eced0& operator++();
};

TConstSetBitIterator_009eced0::TConstSetBitIterator_009eced0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x009eced0
TConstSetBitIterator_009eced0& TConstSetBitIterator_009eced0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_009efb50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_009efb50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_009efb50& operator++();
};

TConstSetBitIterator_009efb50::TConstSetBitIterator_009efb50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x009efb50
TConstSetBitIterator_009efb50& TConstSetBitIterator_009efb50::operator++()
{
    It.Advance();
    return *this;
}

struct C_009efdf0 {
    int sub_009efdf0();
};

int sub_009ea0c0(void);
// @baa 0x009efdf0
int C_009efdf0::sub_009efdf0(void)
{
    int param_1 = (int)this;

  sub_009ea0c0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_009efe10 {
    int sub_009efe10();
};

int sub_009ea120(void);
// @baa 0x009efe10
int C_009efe10::sub_009efe10(void)
{
    int param_1 = (int)this;

  sub_009ea120();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_005c7a20(void);
extern undefined * g_01fa5530;
// @baa 0x009efe30
undefined4 * UObject::sub_009efe30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01fa5530);
  return param_1;
}

// @baa 0x009efe50
IMPLEMENT_CLASS_AT(UKMeshProps, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysActor.cpp", 30);

// @baa 0x009efec0
// @baa 0x009efee0
IMPLEMENT_CLASS_AT(AEmitter, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleComponents.cpp", 17);

// @baa 0x009eff40
int sub_009ea840(...);
int sub_009eddb0(void);
extern undefined4 g_026b63b8;
// @baa 0x009effa0
int sub_009effa0(void)
{
  if (g_026b63b8 == 0) {
    g_026b63b8 = sub_009ea840(L"Engine");
    sub_009eddb0();
  }
  return g_026b63b8;
}

int sub_009ebe80(...);
int sub_009ee820(void);
extern undefined4 g_026b63c4;
// @baa 0x009effd0
int sub_009effd0(void)
{
  if (g_026b63c4 == 0) {
    g_026b63c4 = sub_009ebe80(L"Engine");
    sub_009ee820();
  }
  return g_026b63c4;
}
