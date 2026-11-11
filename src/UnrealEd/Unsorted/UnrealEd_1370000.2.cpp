// UnrealEd_1370000.cpp (part 2 of 3): 93 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C {
    void sub_01373dc0(int);
};

int sub_0053df70(...);
// @baa 0x01373dc0
void C::sub_01373dc0(int param_2)
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

struct C_01373e00 {
    void sub_01373e00(int);
};

// @baa 0x01373e00
void C_01373e00::sub_01373e00(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x1c,8);
      *param_1 = iVar1;
    }
  }
  return;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_01373e40 { void* Data; int Num; int Max; void sub_01373e40(); };

// @baa 0x01373e40
void C_01373e40::sub_01373e40() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_01373ea0 { void* Data; int Num; int Max; void sub_01373ea0(); };

// @baa 0x01373ea0
void C_01373ea0::sub_01373ea0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_01373f00 {
    void sub_01373f00(int);
};

// @baa 0x01373f00
void C_01373f00::sub_01373f00(int param_2)
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

struct C_01373fa0 {
    void sub_01373fa0(int);
};

// @baa 0x01373fa0
void C_01373fa0::sub_01373fa0(int param_2)
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

struct C_01373fe0 { void* Data; int Num; int Max; void sub_01373fe0(); };

// @baa 0x01373fe0
void C_01373fe0::sub_01373fe0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_01374140 {
    int sub_01374140(int);
};

// @baa 0x01374140
int C_01374140::sub_01374140(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_01374150 {
    void sub_01374150(int);
};

// @baa 0x01374150
void C_01374150::sub_01374150(int param_2)
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

struct C_01374190 {
    int sub_01374190(int);
};

// @baa 0x01374190
int C_01374190::sub_01374190(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_013741a0 {
    int sub_013741a0();
};

// @baa 0x013741a0
int C_013741a0::sub_013741a0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_013741c0 {
    int sub_013741c0(int);
};

// @baa 0x013741c0
int C_013741c0::sub_013741c0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_013741d0 {
    int sub_013741d0();
};

// @baa 0x013741d0
int C_013741d0::sub_013741d0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_013741f0 {
    int sub_013741f0();
};

// @baa 0x013741f0
int C_013741f0::sub_013741f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_01374200 {
    int sub_01374200(int);
};

// @baa 0x01374200
int C_01374200::sub_01374200(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_01374210 {
    int sub_01374210();
};

// @baa 0x01374210
int C_01374210::sub_01374210(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01374230 {
    int sub_01374230();
};

// @baa 0x01374230
int C_01374230::sub_01374230(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_01374240 {
    int sub_01374240();
};

// @baa 0x01374240
int C_01374240::sub_01374240(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01374260 {
    int sub_01374260();
};

// @baa 0x01374260
int C_01374260::sub_01374260(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01374280 {
    int sub_01374280(int);
};

// @baa 0x01374280
int C_01374280::sub_01374280(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_01374290 {
    int sub_01374290();
};

// @baa 0x01374290
int C_01374290::sub_01374290(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_013742b0 {
    int sub_013742b0();
};

// @baa 0x013742b0
int C_013742b0::sub_013742b0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

void sub_00790400();
// @baa 0x01374390
void sub_01374390(void) { sub_00790400(); }

// @baa 0x01374420
int UObject::sub_01374420(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x01374520
int UObject::sub_01374520(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x013745a0
int UObject::sub_013745a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

// @baa 0x01374630
int UObject::sub_01374630(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x01374730
int UObject::sub_01374730(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x013747b0
int UObject::sub_013747b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

// @baa 0x013747c0
int UObject::sub_013747c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

// @baa 0x01374850
int UObject::sub_01374850(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

// @baa 0x01374900
int UObject::sub_01374900(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

// @baa 0x01374910
int UObject::sub_01374910(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

void sub_013742d0();
// @baa 0x01374920
void sub_01374920(void) { sub_013742d0(); }

struct C_01374990 {
    int sub_01374990();
};

// @baa 0x01374990
int C_01374990::sub_01374990(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_013749a0 {
    int sub_013749a0();
};

// @baa 0x013749a0
int C_013749a0::sub_013749a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

int sub_0053dfa0(...);
int sub_01374930(void);
// @baa 0x013755a0
undefined4 UObject::sub_013755a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01374930();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_013755c0 {
    undefined4 sub_013755c0(byte);
};

int sub_0136c7a0(void);
// @baa 0x013755c0
undefined4 C_013755c0::sub_013755c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0136c7a0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_02262c4c[];
// @baa 0x01376a00
int sub_01376a00(void) { return (int)g_02262c4c; }

struct A_01376a10 { virtual void sub_0137e440(); char pad[320]; };

struct B_01376a10 { virtual void sub_0137e440(); };

struct C_01376a10 : A_01376a10, B_01376a10 { virtual void sub_0137e440(); C_01376a10(); };

C_01376a10::C_01376a10() {}

// @baa 0x01376a10
void C_01376a10::sub_0137e440() {}

struct A_01376a20 { virtual void sub_0137e440(); char pad[324]; };

struct B_01376a20 { virtual void sub_0137e440(); };

struct C_01376a20 : A_01376a20, B_01376a20 { virtual void sub_0137e440(); C_01376a20(); };

C_01376a20::C_01376a20() {}

// @baa 0x01376a20
void C_01376a20::sub_0137e440() {}

struct C_01376d70 {
    undefined4 sub_01376d70(int *);
};

int sub_01376bf0(...);
// @baa 0x01376d70
undefined4 C_01376d70::sub_01376d70(int * param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  if ((*(uint *)(*param_2 + 0xd8) & 0x3000000) != 0) {
    return 0;
  }
  if (((*param_1 != 0) && ((*(uint *)(*param_2 + 0xd8) & 0x200) == 0)) &&
     (iVar1 = sub_01376bf0(param_2,1), iVar1 == 0)) {
    return 0;
  }
  return 1;
}

struct C_0137a760 {
    undefined4 * sub_0137a760(byte);
};

extern undefined * g_01e72a60;
// @baa 0x0137a760
undefined4 * C_0137a760::sub_0137a760(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e72a60);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0137cda0 {
    int sub_0137cda0();
};

// @baa 0x0137cda0
int C_0137cda0::sub_0137cda0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0137cdc0 {
    int sub_0137cdc0();
};

// @baa 0x0137cdc0
int C_0137cdc0::sub_0137cdc0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0137cde0 {
    int sub_0137cde0();
};

// @baa 0x0137cde0
int C_0137cde0::sub_0137cde0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_0137cdf0 {
    int sub_0137cdf0();
};

// @baa 0x0137cdf0
int C_0137cdf0::sub_0137cdf0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0137ce10 {
    int sub_0137ce10();
};

// @baa 0x0137ce10
int C_0137ce10::sub_0137ce10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + 4 + *(int *)*param_1;
}

struct C_0137ce20 {
    int sub_0137ce20();
};

// @baa 0x0137ce20
int C_0137ce20::sub_0137ce20(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0137ce40 {
    int sub_0137ce40();
};

// @baa 0x0137ce40
int C_0137ce40::sub_0137ce40(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

extern TArray<int> g_026a1ca4;
struct C_0137ce60 {
    int sub_0137ce60();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x0137ce60
int C_0137ce60::sub_0137ce60()
{
    return g_026a1ca4(Index);
}

struct C_0137cec0 {
    int sub_0137cec0();
};

// @baa 0x0137cec0
int C_0137cec0::sub_0137cec0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0137cee0 {
    int sub_0137cee0();
};

// @baa 0x0137cee0
int C_0137cee0::sub_0137cee0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0137cf00 {
    int sub_0137cf00(int);
    int sub_013743a0(int, int);
};

// @baa 0x0137cf00
int C_0137cf00::sub_0137cf00(int param_2)
{
    int * param_1 = (int *)this;
  ((C_0137cf00 *)(this))->sub_013743a0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_0137cf30 {
    int sub_0137cf30(int);
    int sub_013744a0(int, int);
};

// @baa 0x0137cf30
int C_0137cf30::sub_0137cf30(int param_2)
{
    int * param_1 = (int *)this;
  ((C_0137cf30 *)(this))->sub_013744a0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_0137cf80 {
    int sub_0137cf80();
};

// @baa 0x0137cf80
int C_0137cf80::sub_0137cf80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_0137cf90 {
    int sub_0137cf90(int);
    int sub_013745b0(int, int);
};

// @baa 0x0137cf90
int C_0137cf90::sub_0137cf90(int param_2)
{
    int * param_1 = (int *)this;
  ((C_0137cf90 *)(this))->sub_013745b0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_0137cfc0 {
    int sub_0137cfc0(int);
    int sub_013746b0(int, int);
};

// @baa 0x0137cfc0
int C_0137cfc0::sub_0137cfc0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_0137cfc0 *)(this))->sub_013746b0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_0137cff0 {
    int sub_0137cff0();
};

// @baa 0x0137cff0
int C_0137cff0::sub_0137cff0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_0137d000 {
    int sub_0137d000();
};

// @baa 0x0137d000
int C_0137d000::sub_0137d000(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_0137d010 {
    int sub_0137d010();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x0137d010
int C_0137d010::sub_0137d010()
{
    return g_026a1ca4(Index);
}

struct C_0137d070 {
    int sub_0137d070(int);
    int sub_013747d0(int, int);
};

// @baa 0x0137d070
int C_0137d070::sub_0137d070(int param_2)
{
    int * param_1 = (int *)this;
  ((C_0137d070 *)(this))->sub_013747d0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x20 + *param_1;
  }
  return 0;
}

struct C_0137d0a0 {
    int sub_0137d0a0();
};

// @baa 0x0137d0a0
int C_0137d0a0::sub_0137d0a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_0137d0b0 {
    int sub_0137d0b0();
};

// @baa 0x0137d0b0
int C_0137d0b0::sub_0137d0b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

int sub_01374330(void);
// @baa 0x0137d210
undefined4 UObject::sub_0137d210(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01374330();
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

struct TConstSetBitIterator_0137d250 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0137d250(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0137d250& operator++();
};

TConstSetBitIterator_0137d250::TConstSetBitIterator_0137d250(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0137d250
TConstSetBitIterator_0137d250& TConstSetBitIterator_0137d250::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0137d270 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0137d270(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0137d270& operator++();
};

TConstSetBitIterator_0137d270::TConstSetBitIterator_0137d270(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0137d270
TConstSetBitIterator_0137d270& TConstSetBitIterator_0137d270::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0137d290 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0137d290(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0137d290& operator++();
};

TConstSetBitIterator_0137d290::TConstSetBitIterator_0137d290(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0137d290
TConstSetBitIterator_0137d290& TConstSetBitIterator_0137d290::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0137d2b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0137d2b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0137d2b0& operator++();
};

TConstSetBitIterator_0137d2b0::TConstSetBitIterator_0137d2b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0137d2b0
TConstSetBitIterator_0137d2b0& TConstSetBitIterator_0137d2b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0137d2d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0137d2d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0137d2d0& operator++();
};

TConstSetBitIterator_0137d2d0::TConstSetBitIterator_0137d2d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0137d2d0
TConstSetBitIterator_0137d2d0& TConstSetBitIterator_0137d2d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0137d2f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0137d2f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0137d2f0& operator++();
};

TConstSetBitIterator_0137d2f0::TConstSetBitIterator_0137d2f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0137d2f0
TConstSetBitIterator_0137d2f0& TConstSetBitIterator_0137d2f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0137d9a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0137d9a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0137d9a0& operator++();
};

TConstSetBitIterator_0137d9a0::TConstSetBitIterator_0137d9a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0137d9a0
TConstSetBitIterator_0137d9a0& TConstSetBitIterator_0137d9a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0137d9c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0137d9c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0137d9c0& operator++();
};

TConstSetBitIterator_0137d9c0::TConstSetBitIterator_0137d9c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0137d9c0
TConstSetBitIterator_0137d9c0& TConstSetBitIterator_0137d9c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0137d9e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0137d9e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0137d9e0& operator++();
};

TConstSetBitIterator_0137d9e0::TConstSetBitIterator_0137d9e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0137d9e0
TConstSetBitIterator_0137d9e0& TConstSetBitIterator_0137d9e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0137da00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0137da00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0137da00& operator++();
};

TConstSetBitIterator_0137da00::TConstSetBitIterator_0137da00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0137da00
TConstSetBitIterator_0137da00& TConstSetBitIterator_0137da00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0137da20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0137da20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0137da20& operator++();
};

TConstSetBitIterator_0137da20::TConstSetBitIterator_0137da20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0137da20
TConstSetBitIterator_0137da20& TConstSetBitIterator_0137da20::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0137da40 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0137da40(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0137da40& operator++();
};

TConstSetBitIterator_0137da40::TConstSetBitIterator_0137da40(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0137da40
TConstSetBitIterator_0137da40& TConstSetBitIterator_0137da40::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0137da90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0137da90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0137da90& operator++();
};

TConstSetBitIterator_0137da90::TConstSetBitIterator_0137da90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0137da90
TConstSetBitIterator_0137da90& TConstSetBitIterator_0137da90::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0137dae0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0137dae0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0137dae0& operator++();
};

TConstSetBitIterator_0137dae0::TConstSetBitIterator_0137dae0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0137dae0
TConstSetBitIterator_0137dae0& TConstSetBitIterator_0137dae0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0137db30 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0137db30(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0137db30& operator++();
};

TConstSetBitIterator_0137db30::TConstSetBitIterator_0137db30(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0137db30
TConstSetBitIterator_0137db30& TConstSetBitIterator_0137db30::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0137db80 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0137db80(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0137db80& operator++();
};

TConstSetBitIterator_0137db80::TConstSetBitIterator_0137db80(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0137db80
TConstSetBitIterator_0137db80& TConstSetBitIterator_0137db80::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0137dbd0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0137dbd0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0137dbd0& operator++();
};

TConstSetBitIterator_0137dbd0::TConstSetBitIterator_0137dbd0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0137dbd0
TConstSetBitIterator_0137dbd0& TConstSetBitIterator_0137dbd0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0137dc20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0137dc20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0137dc20& operator++();
};

TConstSetBitIterator_0137dc20::TConstSetBitIterator_0137dc20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0137dc20
TConstSetBitIterator_0137dc20& TConstSetBitIterator_0137dc20::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0137dc40 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0137dc40(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0137dc40& operator++();
};

TConstSetBitIterator_0137dc40::TConstSetBitIterator_0137dc40(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0137dc40
TConstSetBitIterator_0137dc40& TConstSetBitIterator_0137dc40::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0137dc90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0137dc90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0137dc90& operator++();
};

TConstSetBitIterator_0137dc90::TConstSetBitIterator_0137dc90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0137dc90
TConstSetBitIterator_0137dc90& TConstSetBitIterator_0137dc90::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0137dce0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0137dce0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0137dce0& operator++();
};

TConstSetBitIterator_0137dce0::TConstSetBitIterator_0137dce0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0137dce0
TConstSetBitIterator_0137dce0& TConstSetBitIterator_0137dce0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0137dd30 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0137dd30(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0137dd30& operator++();
};

TConstSetBitIterator_0137dd30::TConstSetBitIterator_0137dd30(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0137dd30
TConstSetBitIterator_0137dd30& TConstSetBitIterator_0137dd30::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0137dd80 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0137dd80(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0137dd80& operator++();
};

TConstSetBitIterator_0137dd80::TConstSetBitIterator_0137dd80(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0137dd80
TConstSetBitIterator_0137dd80& TConstSetBitIterator_0137dd80::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0137ddd0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0137ddd0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0137ddd0& operator++();
};

TConstSetBitIterator_0137ddd0::TConstSetBitIterator_0137ddd0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0137ddd0
TConstSetBitIterator_0137ddd0& TConstSetBitIterator_0137ddd0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0137de20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0137de20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0137de20& operator++();
};

TConstSetBitIterator_0137de20::TConstSetBitIterator_0137de20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0137de20
TConstSetBitIterator_0137de20& TConstSetBitIterator_0137de20::operator++()
{
    It.Advance();
    return *this;
}

extern char g_022632fc[];
// @baa 0x0137e7d0
int sub_0137e7d0(void) { return (int)g_022632fc; }

struct A_0137e7e0 { virtual void sub_01387400(); char pad[320]; };

struct B_0137e7e0 { virtual void sub_01387400(); };

struct C_0137e7e0 : A_0137e7e0, B_0137e7e0 { virtual void sub_01387400(); C_0137e7e0(); };

C_0137e7e0::C_0137e7e0() {}

// @baa 0x0137e7e0
void C_0137e7e0::sub_01387400() {}

struct A_0137e7f0 { virtual void sub_01387400(); char pad[324]; };

struct B_0137e7f0 { virtual void sub_01387400(); };

struct C_0137e7f0 : A_0137e7f0, B_0137e7f0 { virtual void sub_01387400(); C_0137e7f0(); };

C_0137e7f0::C_0137e7f0() {}

// @baa 0x0137e7f0
void C_0137e7f0::sub_01387400() {}
