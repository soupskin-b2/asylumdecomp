// Engine_0570000.cpp (part 1 of 2): 30 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C { void* Data; int Num; int Max; void sub_00573460(); };

// @baa 0x00573460
void C::sub_00573460() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_005734c0 {
    int sub_005734c0();
};

// @baa 0x005734c0
int C_005734c0::sub_005734c0(void)
{
    int param_1 = (int)this;
  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_005734e0 {
    int sub_005734e0(int);
};

// @baa 0x005734e0
int C_005734e0::sub_005734e0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_005734f0 {
    int sub_005734f0(int);
};

// @baa 0x005734f0
int C_005734f0::sub_005734f0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00573500 {
    int sub_00573500(int);
};

// @baa 0x00573500
int C_00573500::sub_00573500(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct Inner {
    int* data;
    Inner();
    ~Inner();
};

struct Outer_00573510 : Inner {
    int num;
    int max;
    void sub_0056fc20(int* p);
    Outer_00573510(int* p);
};

Inner::Inner()
{
    data = 0;
}

// @baa 0x00573510
Outer_00573510::Outer_00573510(int* p)
{
    num = 0;
    max = 0;
    sub_0056fc20(p);
}

struct C_00573570 {
    int sub_00573570(int);
};

// @baa 0x00573570
int C_00573570::sub_00573570(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00573580 {
    void sub_00573580(int);
};

int sub_0053df70(...);
// @baa 0x00573580
void C_00573580::sub_00573580(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 8,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_005735c0 {
    int sub_005735c0();
};

// @baa 0x005735c0
int C_005735c0::sub_005735c0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_005735e0 {
    int sub_005735e0();
};

// @baa 0x005735e0
int C_005735e0::sub_005735e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_005735f0 {
    int sub_005735f0();
};

// @baa 0x005735f0
int C_005735f0::sub_005735f0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00573610 {
    int sub_00573610();
};

// @baa 0x00573610
int C_00573610::sub_00573610(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00573620 {
    int sub_00573620();
};

// @baa 0x00573620
int C_00573620::sub_00573620(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00573640 {
    int sub_00573640();
};

// @baa 0x00573640
int C_00573640::sub_00573640(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00573650 {
    int sub_00573650();
};

// @baa 0x00573650
int C_00573650::sub_00573650(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00573670 {
    int sub_00573670();
};

// @baa 0x00573670
int C_00573670::sub_00573670(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00573680 {
    int sub_00573680(int);
};

// @baa 0x00573680
int C_00573680::sub_00573680(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00573690 {
    int sub_00573690();
};

// @baa 0x00573690
int C_00573690::sub_00573690(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_005736a0 {
    int sub_005736a0();
};

// @baa 0x005736a0
int C_005736a0::sub_005736a0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_005736c0 {
    int sub_005736c0(int);
};

// @baa 0x005736c0
int C_005736c0::sub_005736c0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_005736d0 {
    int sub_005736d0();
};

// @baa 0x005736d0
int C_005736d0::sub_005736d0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_005736f0 {
    int sub_005736f0();
};

// @baa 0x005736f0
int C_005736f0::sub_005736f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_005737e0 {
    int sub_005737e0();
};

// @baa 0x005737e0
int C_005737e0::sub_005737e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

int sub_0053dfa0(...);
int sub_005738c0(void);
// @baa 0x00574910
undefined4 UObject::sub_00574910(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_005738c0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x005749e0
FString UTextBufferFactory::sub_005749e0()
{
    return TEXT("FArchive");
}

struct C_00574bf0 {
    undefined4 sub_00574bf0(byte);
};

int sub_0054cbb0(void);
// @baa 0x00574bf0
undefined4 C_00574bf0::sub_00574bf0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0054cbb0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00577320 {
    int sub_00577320();
};

// @baa 0x00577320
int C_00577320::sub_00577320(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

extern TArray<int> g_026a1ca4;
struct C_00577330 {
    int sub_00577330();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x00577330
int C_00577330::sub_00577330()
{
    return g_026a1ca4(Index);
}

struct S {
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void vf_0c();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18(INT Value);
};

// @baa 0x00577470
void sub_00577470(S* p, INT Value)
{
    p->vf_18(Value);
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

struct TConstSetBitIterator_0057caf0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0057caf0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0057caf0& operator++();
};

TConstSetBitIterator_0057caf0::TConstSetBitIterator_0057caf0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0057caf0
TConstSetBitIterator_0057caf0& TConstSetBitIterator_0057caf0::operator++()
{
    It.Advance();
    return *this;
}
