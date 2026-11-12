// Core_0570000.cpp: 66 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

typedef uint size_t;

struct C_view {
    int sub_00417dc0(int);
};

void * sub_01a375f0(void *, void *, size_t);
// @baa 0x00570cd0
undefined4 * UObject::sub_00570cd0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00417dc0(param_2[1]);
  if (param_1[1] != 0) {
    sub_01a375f0((void *)*param_1,(void *)*param_2,param_1[1] * 2);
  }
  return param_1;
}

struct C { char pad[148]; TArray<int> A; int* sub_00570d10(); };

// @baa 0x00570d10
int* C::sub_00570d10() { return &A(0); }

// @baa 0x00570d70
IMPLEMENT_CLASS_AT(UConst, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnClass.cpp", 2357);

// @baa 0x00570de0
struct C_00570e00 {
    FString sub_00570e00();
};

// @baa 0x00570e00
FString C_00570e00::sub_00570e00()
{
    return TEXT("FMemoryReader");
}

struct C_00570ec0 {
    FString sub_00570ec0();
};

// @baa 0x00570ec0
FString C_00570ec0::sub_00570ec0()
{
    return TEXT("FArchiveFindCulprit");
}

struct C_00570f90 {
    FString sub_00570f90();
};

// @baa 0x00570f90
FString C_00570f90::sub_00570f90()
{
    return TEXT("FDuplicateDataReader");
}

struct M_00570fe0 { void sub_0056a7e0(); };

struct C_00570fe0 { char pad[24]; M_00570fe0 m; void sub_00570fe0(); };

// @baa 0x00570fe0
void C_00570fe0::sub_00570fe0() { m.sub_0056a7e0(); }

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00570ff0 { void* Data; int Num; int Max; void sub_00570ff0(); };

// @baa 0x00570ff0
void C_00570ff0::sub_00570ff0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00571050 { void* Data; int Num; int Max; void sub_00571050(); };

// @baa 0x00571050
void C_00571050::sub_00571050() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x005711e0
int UState::sub_005711e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_005712a0 {
    int sub_005712a0(int);
};

// @baa 0x005712a0
int C_005712a0::sub_005712a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_005712b0 {
    int sub_005712b0();
};

// @baa 0x005712b0
int C_005712b0::sub_005712b0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_005712d0 {
    int sub_005712d0();
};

// @baa 0x005712d0
int C_005712d0::sub_005712d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_005712e0 {
    int sub_005712e0();
};

// @baa 0x005712e0
int C_005712e0::sub_005712e0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00571300 {
    int sub_00571300(int);
};

// @baa 0x00571300
int C_00571300::sub_00571300(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_00571320 {
    int sub_00571320(int);
};

// @baa 0x00571320
int C_00571320::sub_00571320(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00571330 {
    int sub_00571330();
};

// @baa 0x00571330
int C_00571330::sub_00571330(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_00571340 {
    int sub_00571340();
};

// @baa 0x00571340
int C_00571340::sub_00571340(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_00571350 {
    int sub_00571350();
};

// @baa 0x00571350
int C_00571350::sub_00571350(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_00571360 {
    int sub_00571360();
};

// @baa 0x00571360
int C_00571360::sub_00571360(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00571370 {
    int sub_00571370();
};

// @baa 0x00571370
int C_00571370::sub_00571370(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_00571380 {
    int sub_00571380();
};

// @baa 0x00571380
int C_00571380::sub_00571380(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct C_005713a0 {
    int sub_005713a0();
};

// @baa 0x005713a0
int C_005713a0::sub_005713a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

int sub_0053dfa0(...);
int sub_00571c10(void);
// @baa 0x00576b60
undefined4 UTexture2D::sub_00576b60(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00571c10();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00571f70(void);
// @baa 0x00576b80
undefined4 UTexture2D::sub_00576b80(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00571f70();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00572130(void);
// @baa 0x00576ba0
undefined4 UTexture2D::sub_00576ba0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00572130();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_005722a0(void);
// @baa 0x00576bc0
undefined4 UTexture2D::sub_00576bc0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_005722a0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00576da0 {
    undefined4 sub_00576da0(byte);
};

int sub_005728b0(void);
// @baa 0x00576da0
undefined4 C_00576da0::sub_00576da0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_005728b0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00577060 {
    int sub_00577060();
};

// @baa 0x00577060
int C_00577060::sub_00577060(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_005771a0 {
    int sub_005771a0();
};

// @baa 0x005771a0
int C_005771a0::sub_005771a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 4 + param_1[5] * 0x14;
}

struct C_005771b0 {
    int sub_005771b0();
};

// @baa 0x005771b0
int C_005771b0::sub_005771b0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_005771d0 {
    int sub_005771d0();
};

// @baa 0x005771d0
int C_005771d0::sub_005771d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + 4 + *(int *)*param_1;
}

struct C_005771e0 {
    int sub_005771e0();
};

// @baa 0x005771e0
int C_005771e0::sub_005771e0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00577200 {
    int sub_00577200();
};

// @baa 0x00577200
int C_00577200::sub_00577200(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00577210 {
    int sub_00577210();
};

// @baa 0x00577210
int C_00577210::sub_00577210(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + 4 + *(int *)*param_1;
}

struct C_00577220 {
    int sub_00577220();
};

// @baa 0x00577220
int C_00577220::sub_00577220(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00577240 {
    int sub_00577240();
};

// @baa 0x00577240
int C_00577240::sub_00577240(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00577250 {
    int sub_00577250();
};

// @baa 0x00577250
int C_00577250::sub_00577250(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_00577260 {
    int sub_00577260();
};

// @baa 0x00577260
int C_00577260::sub_00577260(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 8 + param_1[5] * 0x14;
}

struct C_00577270 {
    int sub_00577270();
};

// @baa 0x00577270
int C_00577270::sub_00577270(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00577290 {
    int sub_00577290();
};

// @baa 0x00577290
int C_00577290::sub_00577290(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_005772b0 {
    int sub_005772b0();
};

// @baa 0x005772b0
int C_005772b0::sub_005772b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_005772c0 {
    int sub_005772c0();
};

// @baa 0x005772c0
int C_005772c0::sub_005772c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + 4 + *(int *)*param_1;
}

int sub_00575360(void);
// @baa 0x00578c50
undefined4 UTexture2D::sub_00578c50(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00575360();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00578d00 {
    undefined4 sub_00578d00(byte);
};

int sub_00575830(void);
// @baa 0x00578d00
undefined4 C_00578d00::sub_00578d00(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00575830();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00578d20 {
    int sub_00578d20();
};

// @baa 0x00578d20
int C_00578d20::sub_00578d20(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00578d40 {
    int sub_00578d40();
};

// @baa 0x00578d40
int C_00578d40::sub_00578d40(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_00578d50 {
    int sub_00578d50();
};

// @baa 0x00578d50
int C_00578d50::sub_00578d50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 4 + param_1[5] * 0x14;
}

struct C_view_00578d60 {
    int sub_00575910(int, int);
};

// @baa 0x00578d60
int UState::sub_00578d60(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00578d60 *)(this))->sub_00575910((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x1c;
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

struct TConstSetBitIterator_00578f70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00578f70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00578f70& operator++();
};

TConstSetBitIterator_00578f70::TConstSetBitIterator_00578f70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00578f70
TConstSetBitIterator_00578f70& TConstSetBitIterator_00578f70::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00578f90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00578f90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00578f90& operator++();
};

TConstSetBitIterator_00578f90::TConstSetBitIterator_00578f90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00578f90
TConstSetBitIterator_00578f90& TConstSetBitIterator_00578f90::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00578fb0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00578fb0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00578fb0& operator++();
};

TConstSetBitIterator_00578fb0::TConstSetBitIterator_00578fb0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00578fb0
TConstSetBitIterator_00578fb0& TConstSetBitIterator_00578fb0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00578fd0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00578fd0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00578fd0& operator++();
};

TConstSetBitIterator_00578fd0::TConstSetBitIterator_00578fd0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00578fd0
TConstSetBitIterator_00578fd0& TConstSetBitIterator_00578fd0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00579050 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00579050(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00579050& operator++();
};

TConstSetBitIterator_00579050::TConstSetBitIterator_00579050(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00579050
TConstSetBitIterator_00579050& TConstSetBitIterator_00579050::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00579160 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00579160(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00579160& operator++();
};

TConstSetBitIterator_00579160::TConstSetBitIterator_00579160(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00579160
TConstSetBitIterator_00579160& TConstSetBitIterator_00579160::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00579210 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00579210(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00579210& operator++();
};

TConstSetBitIterator_00579210::TConstSetBitIterator_00579210(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00579210
TConstSetBitIterator_00579210& TConstSetBitIterator_00579210::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00579260 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00579260(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00579260& operator++();
};

TConstSetBitIterator_00579260::TConstSetBitIterator_00579260(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00579260
TConstSetBitIterator_00579260& TConstSetBitIterator_00579260::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005792b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005792b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005792b0& operator++();
};

TConstSetBitIterator_005792b0::TConstSetBitIterator_005792b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005792b0
TConstSetBitIterator_005792b0& TConstSetBitIterator_005792b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00579300 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00579300(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00579300& operator++();
};

TConstSetBitIterator_00579300::TConstSetBitIterator_00579300(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00579300
TConstSetBitIterator_00579300& TConstSetBitIterator_00579300::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00579350 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00579350(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00579350& operator++();
};

TConstSetBitIterator_00579350::TConstSetBitIterator_00579350(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00579350
TConstSetBitIterator_00579350& TConstSetBitIterator_00579350::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005793a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005793a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005793a0& operator++();
};

TConstSetBitIterator_005793a0::TConstSetBitIterator_005793a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005793a0
TConstSetBitIterator_005793a0& TConstSetBitIterator_005793a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_005793c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_005793c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_005793c0& operator++();
};

TConstSetBitIterator_005793c0::TConstSetBitIterator_005793c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x005793c0
TConstSetBitIterator_005793c0& TConstSetBitIterator_005793c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00579410 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00579410(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00579410& operator++();
};

TConstSetBitIterator_00579410::TConstSetBitIterator_00579410(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00579410
TConstSetBitIterator_00579410& TConstSetBitIterator_00579410::operator++()
{
    It.Advance();
    return *this;
}

struct C_view_0057cb40 {
    int sub_0056bfe0();
    int sub_005798d0(int);
    int sub_005679a0(int);
    int sub_00567b80(int);
    int sub_00567a20();
};

// @baa 0x0057cb40
undefined4 UTexture2D::sub_0057cb40(int param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_0057cb40 *)(this))->sub_0056bfe0();
  ((C_view_0057cb40 *)(this))->sub_005798d0(2);
  ((C_view_0057cb40 *)(this))->sub_005679a0(*(undefined4 *)(param_2 + 8));
  ((C_view_0057cb40 *)(this))->sub_00567b80(param_2);
  ((C_view_0057cb40 *)(this))->sub_00567a20();
  return param_1;
}

struct S00570fc0 {
    int f0;
    int f1;
    int f2;
    int f3;
    int f4;
    int f5;
    S00570fc0* sub_00570fc0();
};

// @baa 0x00570fc0
S00570fc0* S00570fc0::sub_00570fc0()
{
    f0 = -1;
    f1 = 0;
    f2 = 0;
    f3 = 0;
    f4 = 0;
    f5 = 0;
    return this;
}
