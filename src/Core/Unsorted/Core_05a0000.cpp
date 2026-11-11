// Core_05a0000.cpp: 53 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x005a1130
void sub_005a1130(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x005a1150
void sub_005a1150(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return;
}

// @baa 0x005a1170
void sub_005a1170(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x005a1190
void sub_005a1190(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x005a11b0
void sub_005a11b0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x005a11d0
void sub_005a11d0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
  }
  return;
}

struct C {
    undefined4 * sub_005a1710(byte);
};

int sub_0053dfa0(...);
extern undefined * g_01e729c0;
// @baa 0x005a1710
undefined4 * C::sub_005a1710(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e729c0);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x005a1730
FString USubsystem::sub_005a1730()
{
    return TEXT("FBufferReader");
}

struct C_005a1960 {
    FString sub_005a1960();
};

// @baa 0x005a1960
FString C_005a1960::sub_005a1960()
{
    return TEXT("FBufferReaderWithSHA");
}

struct C_005a1990 {
    undefined4 sub_005a1990(byte);
};

int sub_005a18f0(void);
// @baa 0x005a1990
undefined4 C_005a1990::sub_005a1990(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_005a18f0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_005a19b0 { void* Data; int Num; int Max; void sub_005a19b0(); };

// @baa 0x005a19b0
void C_005a19b0::sub_005a19b0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x005a1a10
void __stdcall sub_005a1a10(int a, int b)
{
    return;
}

// @baa 0x005a1a20
void __stdcall sub_005a1a20(int a0, int a1) {  }

int sub_00549160(void);
// @baa 0x005a1a30
undefined4 UObject::sub_005a1a30(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00549160();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x005a1a50
int UObject::sub_005a1a50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

// @baa 0x005a1a60
void __stdcall sub_005a1a60(int a0, int a1) {  }

// @baa 0x005a1a70
int UObject::sub_005a1a70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

// @baa 0x005a1a80
int UObject::sub_005a1a80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

// @baa 0x005a1a90
int UObject::sub_005a1a90(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

// @baa 0x005a1aa0
int UObject::sub_005a1aa0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

// @baa 0x005a1ab0
int UObject::sub_005a1ab0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x48;
}

struct M_005a1ac0 { void sub_0040fcc0(); };

struct C_005a1ac0 { char pad[8]; M_005a1ac0 m; void sub_005a1ac0(); };

// @baa 0x005a1ac0
void C_005a1ac0::sub_005a1ac0() { m.sub_0040fcc0(); }

// @baa 0x005a1ad0
int UObject::sub_005a1ad0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct C_005ab070 {
    int sub_005ab070();
};

// @baa 0x005ab070
int C_005ab070::sub_005ab070(void)
{
    int param_1 = (int)this;
  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_005ab090 {
    int sub_005ab090();
};

// @baa 0x005ab090
int C_005ab090::sub_005ab090(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_005ab100 { void* Data; int Num; int Max; void sub_005ab100(); };

// @baa 0x005ab100
void C_005ab100::sub_005ab100() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_005ab160 { void* Data; int Num; int Max; void sub_005ab160(); };

// @baa 0x005ab160
void C_005ab160::sub_005ab160() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_005ab1c0 {
    void sub_005ab1c0(int);
};

int sub_0053df70(...);
// @baa 0x005ab1c0
void C_005ab1c0::sub_005ab1c0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x48,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_005ab200 {
    int sub_005ab200();
};

// @baa 0x005ab200
int C_005ab200::sub_005ab200(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x48;
}

struct M_005ab210 { void sub_0040fcc0(); };

struct C_005ab210 { char pad[8]; M_005ab210 m; void sub_005ab210(); };

// @baa 0x005ab210
void C_005ab210::sub_005ab210() { m.sub_0040fcc0(); }

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

struct TConstSetBitIterator_005ab220 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005ab220(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005ab220& operator++();
};

TConstSetBitIterator_005ab220::TConstSetBitIterator_005ab220(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005ab220
TConstSetBitIterator_005ab220& TConstSetBitIterator_005ab220::operator++()
{
    It.Advance();
    return *this;
}

// @baa 0x005ac680
int sub_005ac680(void) { return 1; }

int sub_0059c340(void);
int sub_005add00(...);
extern undefined4 g_0268d074;
// @baa 0x005adfa0
int sub_005adfa0(void)
{
  if (g_0268d074 == 0) {
    g_0268d074 = sub_005add00(L"Core");
    sub_0059c340();
  }
  return g_0268d074;
}

int sub_005e1960(...);
extern undefined4 g_026667a8;
// @baa 0x005adfd0
void sub_005adfd0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  if (g_0268d074 == 0) {
    g_0268d074 = sub_005add00(L"Core");
    sub_0059c340();
  }
  sub_005e1960(g_0268d074,param_2,param_3,param_4,param_5,param_6,0,g_026667a8,0,0,0);
  return;
}

// @baa 0x005ae030
IMPLEMENT_CLASS_AT(UEnum, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnCoreNative.cpp", 664);

// @baa 0x005ae0c0
struct C_005ae0e0 {
    undefined4 sub_005ae0e0();
};

// @baa 0x005ae0e0
undefined4 C_005ae0e0::sub_005ae0e0(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

struct C_005ae0f0 {
    int sub_005ae0f0();
};

// @baa 0x005ae0f0
int C_005ae0f0::sub_005ae0f0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_005ae110 {
    int sub_005ae110();
};

// @baa 0x005ae110
int C_005ae110::sub_005ae110(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct TConstSetBitIterator_005ae1f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005ae1f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005ae1f0& operator++();
};

TConstSetBitIterator_005ae1f0::TConstSetBitIterator_005ae1f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005ae1f0
TConstSetBitIterator_005ae1f0& TConstSetBitIterator_005ae1f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005ae210 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005ae210(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005ae210& operator++();
};

TConstSetBitIterator_005ae210::TConstSetBitIterator_005ae210(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005ae210
TConstSetBitIterator_005ae210& TConstSetBitIterator_005ae210::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005ae230 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005ae230(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005ae230& operator++();
};

TConstSetBitIterator_005ae230::TConstSetBitIterator_005ae230(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005ae230
TConstSetBitIterator_005ae230& TConstSetBitIterator_005ae230::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005ae250 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005ae250(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005ae250& operator++();
};

TConstSetBitIterator_005ae250::TConstSetBitIterator_005ae250(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005ae250
TConstSetBitIterator_005ae250& TConstSetBitIterator_005ae250::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005ae270 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005ae270(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005ae270& operator++();
};

TConstSetBitIterator_005ae270::TConstSetBitIterator_005ae270(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005ae270
TConstSetBitIterator_005ae270& TConstSetBitIterator_005ae270::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005ae470 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005ae470(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005ae470& operator++();
};

TConstSetBitIterator_005ae470::TConstSetBitIterator_005ae470(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005ae470
TConstSetBitIterator_005ae470& TConstSetBitIterator_005ae470::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005ae4c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005ae4c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005ae4c0& operator++();
};

TConstSetBitIterator_005ae4c0::TConstSetBitIterator_005ae4c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005ae4c0
TConstSetBitIterator_005ae4c0& TConstSetBitIterator_005ae4c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005ae510 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005ae510(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005ae510& operator++();
};

TConstSetBitIterator_005ae510::TConstSetBitIterator_005ae510(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005ae510
TConstSetBitIterator_005ae510& TConstSetBitIterator_005ae510::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005ae560 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005ae560(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005ae560& operator++();
};

TConstSetBitIterator_005ae560::TConstSetBitIterator_005ae560(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005ae560
TConstSetBitIterator_005ae560& TConstSetBitIterator_005ae560::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005ae5b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005ae5b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005ae5b0& operator++();
};

TConstSetBitIterator_005ae5b0::TConstSetBitIterator_005ae5b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005ae5b0
TConstSetBitIterator_005ae5b0& TConstSetBitIterator_005ae5b0::operator++()
{
    It.Advance();
    return *this;
}

struct C_005ae600 {
    undefined4 sub_005ae600(byte);
    int sub_0040fcc0();
};

// @baa 0x005ae600
undefined4 C_005ae600::sub_005ae600(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_005ae600 *)(((char *)this + 8)))->sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct TConstSetBitIterator_005ae630 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005ae630(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005ae630& operator++();
};

TConstSetBitIterator_005ae630::TConstSetBitIterator_005ae630(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005ae630
TConstSetBitIterator_005ae630& TConstSetBitIterator_005ae630::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005ae680 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005ae680(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005ae680& operator++();
};

TConstSetBitIterator_005ae680::TConstSetBitIterator_005ae680(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005ae680
TConstSetBitIterator_005ae680& TConstSetBitIterator_005ae680::operator++()
{
    It.Advance();
    return *this;
}

struct C_view {
    int sub_005a9910(int, int);
};

// @baa 0x005af6a0
int UTexture2D::sub_005af6a0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view *)(this))->sub_005a9910((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x1c, iVar1 != 0)) {
    return iVar1 + 8;
  }
  return 0;
}
