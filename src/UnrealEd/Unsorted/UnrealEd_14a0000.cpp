// UnrealEd_14a0000.cpp (part 1 of 6): 59 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    undefined4 sub_014a58f0(byte);
};

int sub_0053dfa0(...);
int sub_011902b0(void);
// @baa 0x014a58f0
undefined4 C::sub_014a58f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_011902b0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_014a5aa0 { void* Data; int Num; int Max; void sub_014a5aa0(); };

// @baa 0x014a5aa0
void C_014a5aa0::sub_014a5aa0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_014a5b00 { void* Data; int Num; int Max; void sub_014a5b00(); };

// @baa 0x014a5b00
void C_014a5b00::sub_014a5b00() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_014a5c40 { void* Data; int Num; int Max; void sub_014a5c40(); };

// @baa 0x014a5c40
void C_014a5c40::sub_014a5c40() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_014a5ca0 { void* Data; int Num; int Max; void sub_014a5ca0(); };

// @baa 0x014a5ca0
void C_014a5ca0::sub_014a5ca0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_014a5d00 { void* Data; int Num; int Max; void sub_014a5d00(); };

// @baa 0x014a5d00
void C_014a5d00::sub_014a5d00() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_014a5fc0 { int sub_014a5fc0(void); };

// @baa 0x014a5fc0
int C_014a5fc0::sub_014a5fc0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_014a5fd0 {
    int sub_014a5fd0(int);
};

// @baa 0x014a5fd0
int C_014a5fd0::sub_014a5fd0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_014a5fe0 { int sub_014a5fe0(void); };

// @baa 0x014a5fe0
int C_014a5fe0::sub_014a5fe0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_014a5ff0 {
    int sub_014a5ff0(int);
};

// @baa 0x014a5ff0
int C_014a5ff0::sub_014a5ff0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_014a6010 {
    int sub_014a6010(int);
};

// @baa 0x014a6010
int C_014a6010::sub_014a6010(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_014a6020 {
    int sub_014a6020(int);
};

// @baa 0x014a6020
int C_014a6020::sub_014a6020(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct C_014a6030 {
    int sub_014a6030();
};

// @baa 0x014a6030
int C_014a6030::sub_014a6030(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct M_014a6090 { void sub_00db1ef0(); };

struct C_014a6090 { char pad[4]; M_014a6090 m; void sub_014a6090(); };

// @baa 0x014a6090
void C_014a6090::sub_014a6090() { m.sub_00db1ef0(); }

// @baa 0x014a6210
int UTexture2D::sub_014a6210(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_014a6380 {
    int sub_014a6380(int);
};

// @baa 0x014a6380
int C_014a6380::sub_014a6380(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_014a6390 {
    int sub_014a6390(int);
};

// @baa 0x014a6390
int C_014a6390::sub_014a6390(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct C_014a63a0 {
    int sub_014a63a0();
};

// @baa 0x014a63a0
int C_014a63a0::sub_014a63a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_014a6410 {
    int sub_014a6410(int);
};

// @baa 0x014a6410
int C_014a6410::sub_014a6410(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_014a6420 {
    int sub_014a6420(int);
};

// @baa 0x014a6420
int C_014a6420::sub_014a6420(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct C_014a6430 {
    int sub_014a6430();
};

// @baa 0x014a6430
int C_014a6430::sub_014a6430(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x24;
}

struct C_014a6440 {
    int sub_014a6440();
};

// @baa 0x014a6440
int C_014a6440::sub_014a6440(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x50 + *(int *)*param_1;
}

struct C_014a6450 {
    int sub_014a6450();
};

// @baa 0x014a6450
int C_014a6450::sub_014a6450(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct C_014a6e20 {
    undefined4 * sub_014a6e20(undefined4 *);
    int sub_00547da0(int);
};

// @baa 0x014a6e20
undefined4 * C_014a6e20::sub_014a6e20(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  ((C_014a6e20 *)(((char *)this + 4)))->sub_00547da0((int)(param_2 + 1));
  return param_1;
}

struct C_014a6fb0 { void* Data; int Num; int Max; void sub_014a6fb0(); };

// @baa 0x014a6fb0
void C_014a6fb0::sub_014a6fb0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_014a7010 {
    undefined4 sub_014a7010(byte);
    int sub_0040fcc0();
};

// @baa 0x014a7010
undefined4 C_014a7010::sub_014a7010(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_014a7010 *)(((char *)this + 4)))->sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_014a1a40(void);
// @baa 0x014a7040
undefined4 UObject::sub_014a7040(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_014a1a40();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_014a7060 {
    undefined4 sub_014a7060(byte);
    int sub_0040fcc0();
};

// @baa 0x014a7060
undefined4 C_014a7060::sub_014a7060(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_014a7060 *)(((char *)this + 4)))->sub_0040fcc0();
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

struct TConstSetBitIterator_014a7090 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_014a7090(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_014a7090& operator++();
};

TConstSetBitIterator_014a7090::TConstSetBitIterator_014a7090(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x014a7090
TConstSetBitIterator_014a7090& TConstSetBitIterator_014a7090::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_014a70b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_014a70b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_014a70b0& operator++();
};

TConstSetBitIterator_014a70b0::TConstSetBitIterator_014a70b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x014a70b0
TConstSetBitIterator_014a70b0& TConstSetBitIterator_014a70b0::operator++()
{
    It.Advance();
    return *this;
}

struct C_014a9af0 {
    undefined4 sub_014a9af0(byte);
};

int sub_013e9bc0(void);
// @baa 0x014a9af0
undefined4 C_014a9af0::sub_014a9af0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_013e9bc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct M_014a9ce0 { void sub_014a5c40(); };

struct C_014a9ce0 { char pad[4]; M_014a9ce0 m; void sub_014a9ce0(); };

// @baa 0x014a9ce0
void C_014a9ce0::sub_014a9ce0() { m.sub_014a5c40(); }

struct C_014ac910 {
    undefined4 sub_014ac910(byte);
};

int sub_011902c0(void);
// @baa 0x014ac910
undefined4 C_014ac910::sub_014ac910(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_011902c0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_014aca30 { C_014aca30* sub_014aca30(void); };

// @baa 0x014aca30
C_014aca30* C_014aca30::sub_014aca30(void) { return this; }

struct C_014aca90 { int sub_014aca90(void); };

// @baa 0x014aca90
int C_014aca90::sub_014aca90(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

extern TArray<int> g_026a1ca4;
struct C_014acaa0 {
    int sub_014acaa0();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x014acaa0
int C_014acaa0::sub_014acaa0()
{
    return g_026a1ca4(Index);
}

struct C_014acb00 {
    int sub_014acb00();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x014acb00
int C_014acb00::sub_014acb00()
{
    return g_026a1ca4(Index);
}

struct C_014acb60 {
    int sub_014acb60();
};

// @baa 0x014acb60
int C_014acb60::sub_014acb60(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_view {
    int sub_014a6190(int, int);
};

// @baa 0x014acb80
int UTexture2D::sub_014acb80(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view *)(this))->sub_014a6190((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_014acbb0 {
    int sub_014acbb0();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x014acbb0
int C_014acbb0::sub_014acbb0()
{
    return g_026a1ca4(Index);
}

struct C_view_014acc10 {
    int sub_011a1050(int, int);
};

// @baa 0x014acc10
int UTexture2D::sub_014acc10(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_014acc10 *)(this))->sub_011a1050((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x18;
  }
  return 0;
}

// @baa 0x014acc60
int UTexture2D::sub_014acc60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_view_014acd40 {
    int sub_00db1ef0();
};

// @baa 0x014acd40
undefined4 UTexture2D::sub_014acd40(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_014acd40 *)(((char *)this + 4)))->sub_00db1ef0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct M_014acd70 { void sub_014a5c40(); };

struct C_014acd70 { char pad[8]; M_014acd70 m; void sub_014acd70(); };

// @baa 0x014acd70
void C_014acd70::sub_014acd70() { m.sub_014a5c40(); }

struct C_014ad710 {
    undefined4 sub_014ad710(byte);
    int sub_014a5c40();
};

// @baa 0x014ad710
undefined4 C_014ad710::sub_014ad710(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_014ad710 *)(((char *)this + 8)))->sub_014a5c40();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_014ad740 {
    undefined4 * sub_014ad740(undefined4 *);
    int sub_014a63b0(int);
};

// @baa 0x014ad740
undefined4 * C_014ad740::sub_014ad740(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  ((C_014ad740 *)(((char *)this + 8)))->sub_014a63b0((int)(param_2 + 2));
  return param_1;
}

void sub_014a6fb0();
// @baa 0x014ad820
void sub_014ad820(void) { sub_014a6fb0(); }

struct C_014ad830 { C_014ad830* sub_014ad830(void); };

// @baa 0x014ad830
C_014ad830* C_014ad830::sub_014ad830(void) { return this; }

struct TConstSetBitIterator_014ad960 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_014ad960(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_014ad960& operator++();
};

TConstSetBitIterator_014ad960::TConstSetBitIterator_014ad960(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x014ad960
TConstSetBitIterator_014ad960& TConstSetBitIterator_014ad960::operator++()
{
    It.Advance();
    return *this;
}

// @baa 0x014ada10
IMPLEMENT_CLASS_AT(UUILayer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\UnUIEditor.cpp", 37);

// @baa 0x014ada90
int sub_005c7a20(void);
extern undefined * g_022b2718;
// @baa 0x014adab0
undefined4 * UObject::sub_014adab0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022b2718);
  return param_1;
}

extern undefined * g_022b2828;
// @baa 0x014adad0
undefined4 * UObject::sub_014adad0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022b2828);
  return param_1;
}

// @baa 0x014adaf0
IMPLEMENT_CLASS_AT(UUILayerRoot, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\UnUIEditor.cpp", 38);

// @baa 0x014adb50
struct C_014adb70 {
    undefined4 * sub_014adb70(undefined4);
    int sub_014a9a40(int);
};

extern undefined * g_022b2938;
// @baa 0x014adb70
undefined4 * C_014adb70::sub_014adb70(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_014adb70 *)(this))->sub_014a9a40(param_2);
  param_1[0x28] = 0;
  *param_1 = (undefined4)(&g_022b2938);
  return param_1;
}

struct C_014adba0 {
    undefined4 sub_014adba0(byte);
};

// @baa 0x014adba0
undefined4 C_014adba0::sub_014adba0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_013e9bc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_014adbc0 {
    undefined4 * sub_014adbc0(undefined4);
    int sub_014a9a40(int);
};

extern undefined * g_022b29e0;
// @baa 0x014adbc0
undefined4 * C_014adbc0::sub_014adbc0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_014adbc0 *)(this))->sub_014a9a40(param_2);
  param_1[0x28] = 0;
  *param_1 = (undefined4)(&g_022b29e0);
  return param_1;
}

struct C_014adc20 {
    undefined4 * sub_014adc20(undefined4);
    int sub_014a9a40(int);
};

extern undefined * g_022b2a88;
// @baa 0x014adc20
undefined4 * C_014adc20::sub_014adc20(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_014adc20 *)(this))->sub_014a9a40(param_2);
  param_1[0x28] = 0;
  *param_1 = (undefined4)(&g_022b2a88);
  return param_1;
}
