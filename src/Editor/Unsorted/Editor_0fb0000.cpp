// Editor_0fb0000.cpp: 165 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    void sub_00fb0af0(undefined4, undefined4);
};

int sub_00fa8cc0(...);
// @baa 0x00fb0af0
void C::sub_00fb0af0(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;

  sub_00fa8cc0(param_1,param_2,param_3);
  return;
}

struct C_00fb27d0 {
    int sub_00fb27d0();
};

// @baa 0x00fb27d0
int C_00fb27d0::sub_00fb27d0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00fb27f0 {
    int sub_00fb27f0();
};

// @baa 0x00fb27f0
int C_00fb27f0::sub_00fb27f0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00fb2810 { void* Data; int Num; int Max; void sub_00fb2810(); };

// @baa 0x00fb2810
void C_00fb2810::sub_00fb2810() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

extern TArray<int> g_026a1ca4;
struct C_00fb2870 {
    int sub_00fb2870();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x00fb2870
int C_00fb2870::sub_00fb2870()
{
    return g_026a1ca4(Index);
}

struct C_00fb28d0 {
    int sub_00fb28d0();
};

// @baa 0x00fb28d0
int C_00fb28d0::sub_00fb28d0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00fb28f0 {
    int sub_00fb28f0();
};

// @baa 0x00fb28f0
int C_00fb28f0::sub_00fb28f0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00fb2910 {
    int sub_00fb2910();
};

// @baa 0x00fb2910
int C_00fb2910::sub_00fb2910(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00fb2930 {
    int sub_00fb2930();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x00fb2930
int C_00fb2930::sub_00fb2930()
{
    return g_026a1ca4(Index);
}

struct C_view {
    int sub_00faa3c0(int, int);
};

// @baa 0x00fb2b50
int UTexture2D::sub_00fb2b50(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view *)(this))->sub_00faa3c0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x18;
  }
  return 0;
}

// @baa 0x00fb2b80
int UTexture2D::sub_00fb2b80(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x54 + *param_1;
}

// @baa 0x00fb2b90
int UTexture2D::sub_00fb2b90(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x54 + *(int *)*param_1;
}

// @baa 0x00fb2ba0
int UTexture2D::sub_00fb2ba0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_00fb2bb0 {
    int sub_00fb2bb0();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x00fb2bb0
int C_00fb2bb0::sub_00fb2bb0()
{
    return g_026a1ca4(Index);
}

// @baa 0x00fb2c10
int UTexture2D::sub_00fb2c10(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x9a0 + *param_1;
}

// @baa 0x00fb2c20
int UTexture2D::sub_00fb2c20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x9a0 + *(int *)*param_1;
}

// @baa 0x00fb2c30
int UTexture2D::sub_00fb2c30(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x9d8 + *param_1;
}

// @baa 0x00fb2c40
int UTexture2D::sub_00fb2c40(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x13bc + *param_1;
}

// @baa 0x00fb2c50
int UTexture2D::sub_00fb2c50(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0xd0 + *param_1;
}

struct C_view_00fb2c60 {
    int sub_00faa8b0(int, int);
};

// @baa 0x00fb2c60
int UTexture2D::sub_00fb2c60(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00fb2c60 *)(this))->sub_00faa8b0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

// @baa 0x00fb2c90
int UTexture2D::sub_00fb2c90(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x9d8 + *(int *)*param_1;
}

// @baa 0x00fb2ca0
int UTexture2D::sub_00fb2ca0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x13bc + *(int *)*param_1;
}

struct C_view_00fb2cb0 {
    int sub_00faa9d0(int, int);
};

// @baa 0x00fb2cb0
int UTexture2D::sub_00fb2cb0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00fb2cb0 *)(this))->sub_00faa9d0((int)(&param_2), param_2);
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

struct TConstSetBitIterator_00fb2ce0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb2ce0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb2ce0& operator++();
};

TConstSetBitIterator_00fb2ce0::TConstSetBitIterator_00fb2ce0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb2ce0
TConstSetBitIterator_00fb2ce0& TConstSetBitIterator_00fb2ce0::operator++()
{
    It.Advance();
    return *this;
}

// @baa 0x00fb2d00
int UTexture2D::sub_00fb2d00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct C_view_00fb2d20 {
    int sub_00faaad0(int, int);
};

// @baa 0x00fb2d20
int UTexture2D::sub_00fb2d20(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00fb2d20 *)(this))->sub_00faaad0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_00fb2d50 {
    int sub_00fb2d50();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x00fb2d50
int C_00fb2d50::sub_00fb2d50()
{
    return g_026a1ca4(Index);
}

int sub_00faabc0(void);
// @baa 0x00fb2e30
undefined4 UTexture2D::sub_00fb2e30(void)
{
    undefined4 param_1 = (undefined4)this;

  sub_00faabc0();
  return param_1;
}

// @baa 0x00fb2e40
int UTexture2D::sub_00fb2e40(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[2] * 0x10 + 4 + *(int *)*param_1;
}

int sub_0053dfa0(...);
int sub_00faa2b0(void);
// @baa 0x00fb2e50
undefined4 UTexture2D::sub_00fb2e50(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00faa2b0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00fb2e70 {
    undefined4 sub_00fb2e70(byte);
    int sub_00549160();
};

// @baa 0x00fb2e70
undefined4 C_00fb2e70::sub_00fb2e70(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00fb2e70 *)(((char *)this + 0x28)))->sub_00549160();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00fb2ea0 {
    undefined4 sub_00fb2ea0(byte);
    int sub_00549160();
};

// @baa 0x00fb2ea0
undefined4 C_00fb2ea0::sub_00fb2ea0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00fb2ea0 *)(((char *)this + 0x2c)))->sub_00549160();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_0040fcc0(void);
// @baa 0x00fb2ed0
undefined4 UObject::sub_00fb2ed0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00fb2f70
int UTexture2D::sub_00fb2f70(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x54 + *param_1;
}

struct TConstSetBitIterator_00fb2f80 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb2f80(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb2f80& operator++();
};

TConstSetBitIterator_00fb2f80::TConstSetBitIterator_00fb2f80(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb2f80
TConstSetBitIterator_00fb2f80& TConstSetBitIterator_00fb2f80::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00fb3090 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb3090(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb3090& operator++();
};

TConstSetBitIterator_00fb3090::TConstSetBitIterator_00fb3090(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb3090
TConstSetBitIterator_00fb3090& TConstSetBitIterator_00fb3090::operator++()
{
    It.Advance();
    return *this;
}

// @baa 0x00fb3130
int UContentTagIndex::sub_00fb3130(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x9d8 + *param_1;
}

struct C_00fb3140 { void* Data; int Num; int Max; void sub_00fb3140(); };

// @baa 0x00fb3140
void C_00fb3140::sub_00fb3140() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x00fb3220
int UContentTagIndex::sub_00fb3220(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x13bc + *param_1;
}

struct C_00fb3230 { void* Data; int Num; int Max; void sub_00fb3230(); };

// @baa 0x00fb3230
void C_00fb3230::sub_00fb3230() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00fb3310 {
    int sub_00fb3310(int);
};

// @baa 0x00fb3310
int C_00fb3310::sub_00fb3310(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0xd0 + *param_1;
}

struct TConstSetBitIterator_00fb3320 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb3320(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb3320& operator++();
};

TConstSetBitIterator_00fb3320::TConstSetBitIterator_00fb3320(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb3320
TConstSetBitIterator_00fb3320& TConstSetBitIterator_00fb3320::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00fb3340 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb3340(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb3340& operator++();
};

TConstSetBitIterator_00fb3340::TConstSetBitIterator_00fb3340(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb3340
TConstSetBitIterator_00fb3340& TConstSetBitIterator_00fb3340::operator++()
{
    It.Advance();
    return *this;
}

struct M_00fb3360 { void sub_0040fcc0(); };

struct C_00fb3360 { char pad[8]; M_00fb3360 m; void sub_00fb3360(); };

// @baa 0x00fb3360
void C_00fb3360::sub_00fb3360() { m.sub_0040fcc0(); }

int sub_0053df70(...);
// @baa 0x00fb3580
void UTexture2D::sub_00fb3580(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x9a0,8);
      *param_1 = iVar1;
    }
  }
  return;
}

// @baa 0x00fb35c0
void UTexture2D::sub_00fb35c0(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x9d8,8);
      *param_1 = iVar1;
    }
  }
  return;
}

// @baa 0x00fb3600
void UTexture2D::sub_00fb3600(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x13bc,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct TConstSetBitIterator_00fb3880 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb3880(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb3880& operator++();
};

TConstSetBitIterator_00fb3880::TConstSetBitIterator_00fb3880(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb3880
TConstSetBitIterator_00fb3880& TConstSetBitIterator_00fb3880::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00fb38a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb38a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb38a0& operator++();
};

TConstSetBitIterator_00fb38a0::TConstSetBitIterator_00fb38a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb38a0
TConstSetBitIterator_00fb38a0& TConstSetBitIterator_00fb38a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00fb38c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb38c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb38c0& operator++();
};

TConstSetBitIterator_00fb38c0::TConstSetBitIterator_00fb38c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb38c0
TConstSetBitIterator_00fb38c0& TConstSetBitIterator_00fb38c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00fb38e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb38e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb38e0& operator++();
};

TConstSetBitIterator_00fb38e0::TConstSetBitIterator_00fb38e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb38e0
TConstSetBitIterator_00fb38e0& TConstSetBitIterator_00fb38e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00fb3930 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb3930(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb3930& operator++();
};

TConstSetBitIterator_00fb3930::TConstSetBitIterator_00fb3930(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb3930
TConstSetBitIterator_00fb3930& TConstSetBitIterator_00fb3930::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00fb3980 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb3980(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb3980& operator++();
};

TConstSetBitIterator_00fb3980::TConstSetBitIterator_00fb3980(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb3980
TConstSetBitIterator_00fb3980& TConstSetBitIterator_00fb3980::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00fb39d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb39d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb39d0& operator++();
};

TConstSetBitIterator_00fb39d0::TConstSetBitIterator_00fb39d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb39d0
TConstSetBitIterator_00fb39d0& TConstSetBitIterator_00fb39d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00fb3b40 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb3b40(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb3b40& operator++();
};

TConstSetBitIterator_00fb3b40::TConstSetBitIterator_00fb3b40(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb3b40
TConstSetBitIterator_00fb3b40& TConstSetBitIterator_00fb3b40::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00fb3b90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb3b90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb3b90& operator++();
};

TConstSetBitIterator_00fb3b90::TConstSetBitIterator_00fb3b90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb3b90
TConstSetBitIterator_00fb3b90& TConstSetBitIterator_00fb3b90::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00fb3be0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb3be0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb3be0& operator++();
};

TConstSetBitIterator_00fb3be0::TConstSetBitIterator_00fb3be0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb3be0
TConstSetBitIterator_00fb3be0& TConstSetBitIterator_00fb3be0::operator++()
{
    It.Advance();
    return *this;
}

struct C_00fb3c30 {
    int sub_00fb3c30();
};

// @baa 0x00fb3c30
int C_00fb3c30::sub_00fb3c30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct TConstSetBitIterator_00fb3c40 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb3c40(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb3c40& operator++();
};

TConstSetBitIterator_00fb3c40::TConstSetBitIterator_00fb3c40(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb3c40
TConstSetBitIterator_00fb3c40& TConstSetBitIterator_00fb3c40::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00fb3c60 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb3c60(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb3c60& operator++();
};

TConstSetBitIterator_00fb3c60::TConstSetBitIterator_00fb3c60(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb3c60
TConstSetBitIterator_00fb3c60& TConstSetBitIterator_00fb3c60::operator++()
{
    It.Advance();
    return *this;
}

struct C_00fb3c80 {
    int sub_00fb3c80();
};

// @baa 0x00fb3c80
int C_00fb3c80::sub_00fb3c80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x9a0 + *(int *)*param_1;
}

struct TConstSetBitIterator_00fb3c90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb3c90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb3c90& operator++();
};

TConstSetBitIterator_00fb3c90::TConstSetBitIterator_00fb3c90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb3c90
TConstSetBitIterator_00fb3c90& TConstSetBitIterator_00fb3c90::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00fb3cb0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb3cb0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb3cb0& operator++();
};

TConstSetBitIterator_00fb3cb0::TConstSetBitIterator_00fb3cb0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb3cb0
TConstSetBitIterator_00fb3cb0& TConstSetBitIterator_00fb3cb0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00fb3cd0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb3cd0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb3cd0& operator++();
};

TConstSetBitIterator_00fb3cd0::TConstSetBitIterator_00fb3cd0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb3cd0
TConstSetBitIterator_00fb3cd0& TConstSetBitIterator_00fb3cd0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00fb3cf0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb3cf0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb3cf0& operator++();
};

TConstSetBitIterator_00fb3cf0::TConstSetBitIterator_00fb3cf0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb3cf0
TConstSetBitIterator_00fb3cf0& TConstSetBitIterator_00fb3cf0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00fb3d10 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb3d10(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb3d10& operator++();
};

TConstSetBitIterator_00fb3d10::TConstSetBitIterator_00fb3d10(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb3d10
TConstSetBitIterator_00fb3d10& TConstSetBitIterator_00fb3d10::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00fb3d30 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb3d30(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb3d30& operator++();
};

TConstSetBitIterator_00fb3d30::TConstSetBitIterator_00fb3d30(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb3d30
TConstSetBitIterator_00fb3d30& TConstSetBitIterator_00fb3d30::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00fb3d50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb3d50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb3d50& operator++();
};

TConstSetBitIterator_00fb3d50::TConstSetBitIterator_00fb3d50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb3d50
TConstSetBitIterator_00fb3d50& TConstSetBitIterator_00fb3d50::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00fb3d70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb3d70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb3d70& operator++();
};

TConstSetBitIterator_00fb3d70::TConstSetBitIterator_00fb3d70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb3d70
TConstSetBitIterator_00fb3d70& TConstSetBitIterator_00fb3d70::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00fb3dc0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb3dc0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb3dc0& operator++();
};

TConstSetBitIterator_00fb3dc0::TConstSetBitIterator_00fb3dc0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb3dc0
TConstSetBitIterator_00fb3dc0& TConstSetBitIterator_00fb3dc0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00fb3e10 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb3e10(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb3e10& operator++();
};

TConstSetBitIterator_00fb3e10::TConstSetBitIterator_00fb3e10(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb3e10
TConstSetBitIterator_00fb3e10& TConstSetBitIterator_00fb3e10::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00fb3e60 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb3e60(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb3e60& operator++();
};

TConstSetBitIterator_00fb3e60::TConstSetBitIterator_00fb3e60(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb3e60
TConstSetBitIterator_00fb3e60& TConstSetBitIterator_00fb3e60::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00fb3eb0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb3eb0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb3eb0& operator++();
};

TConstSetBitIterator_00fb3eb0::TConstSetBitIterator_00fb3eb0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb3eb0
TConstSetBitIterator_00fb3eb0& TConstSetBitIterator_00fb3eb0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00fb3f00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb3f00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb3f00& operator++();
};

TConstSetBitIterator_00fb3f00::TConstSetBitIterator_00fb3f00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb3f00
TConstSetBitIterator_00fb3f00& TConstSetBitIterator_00fb3f00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00fb3f50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb3f50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb3f50& operator++();
};

TConstSetBitIterator_00fb3f50::TConstSetBitIterator_00fb3f50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb3f50
TConstSetBitIterator_00fb3f50& TConstSetBitIterator_00fb3f50::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00fb3fa0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb3fa0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb3fa0& operator++();
};

TConstSetBitIterator_00fb3fa0::TConstSetBitIterator_00fb3fa0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb3fa0
TConstSetBitIterator_00fb3fa0& TConstSetBitIterator_00fb3fa0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00fb3ff0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb3ff0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb3ff0& operator++();
};

TConstSetBitIterator_00fb3ff0::TConstSetBitIterator_00fb3ff0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb3ff0
TConstSetBitIterator_00fb3ff0& TConstSetBitIterator_00fb3ff0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00fb4040 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb4040(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb4040& operator++();
};

TConstSetBitIterator_00fb4040::TConstSetBitIterator_00fb4040(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb4040
TConstSetBitIterator_00fb4040& TConstSetBitIterator_00fb4040::operator++()
{
    It.Advance();
    return *this;
}

struct C_00fb4060 {
    int sub_00fb4060();
};

// @baa 0x00fb4060
int C_00fb4060::sub_00fb4060(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x9d8 + *(int *)*param_1;
}

struct TConstSetBitIterator_00fb4070 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb4070(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb4070& operator++();
};

TConstSetBitIterator_00fb4070::TConstSetBitIterator_00fb4070(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb4070
TConstSetBitIterator_00fb4070& TConstSetBitIterator_00fb4070::operator++()
{
    It.Advance();
    return *this;
}

struct C_00fb4090 {
    int sub_00fb4090();
};

// @baa 0x00fb4090
int C_00fb4090::sub_00fb4090(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x13bc + *(int *)*param_1;
}

struct C_view_00fb4420 {
    int sub_00551820(int);
};

// @baa 0x00fb4420
undefined4 * UObject::sub_00fb4420(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  ((C_view_00fb4420 *)(((char *)this + 0xc)))->sub_00551820((int)(param_2 + 3));
  return param_1;
}

int sub_00fad8e0(void);
// @baa 0x00fb45b0
undefined4 UObject::sub_00fb45b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00fad8e0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00fb45d0
undefined4 UObject::sub_00fb45d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct TConstSetBitIterator_00fb45f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb45f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb45f0& operator++();
};

TConstSetBitIterator_00fb45f0::TConstSetBitIterator_00fb45f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb45f0
TConstSetBitIterator_00fb45f0& TConstSetBitIterator_00fb45f0::operator++()
{
    It.Advance();
    return *this;
}

struct C_00fb57a0 {
    int sub_00fb57a0();
};

// @baa 0x00fb57a0
int C_00fb57a0::sub_00fb57a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x54 + *(int *)*param_1;
}

struct C_00fb57b0 {
    int sub_00fb57b0();
};

// @baa 0x00fb57b0
int C_00fb57b0::sub_00fb57b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x54 + 0xc + *(int *)*param_1;
}

struct C_00fb5860 {
    int sub_00fb5860();
};

// @baa 0x00fb5860
int C_00fb5860::sub_00fb5860(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_00fb5870 {
    int sub_00fb5870();
};

// @baa 0x00fb5870
int C_00fb5870::sub_00fb5870(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + 0xc + *(int *)*param_1;
}

struct C_00fb5930 {
    int sub_00fb5930();
};

// @baa 0x00fb5930
int C_00fb5930::sub_00fb5930(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x9a0 + 4 + *(int *)*param_1;
}

// @baa 0x00fb5990
int UTexture2D::sub_00fb5990(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x9d8 + *(int *)*param_1;
}

// @baa 0x00fb59a0
int UTexture2D::sub_00fb59a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x9d8 + 4 + *(int *)*param_1;
}

// @baa 0x00fb59c0
int UTexture2D::sub_00fb59c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x13bc + *(int *)*param_1;
}

// @baa 0x00fb59d0
int UTexture2D::sub_00fb59d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x13bc + 4 + *(int *)*param_1;
}

struct TConstSetBitIterator_00fb5f30 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb5f30(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb5f30& operator++();
};

TConstSetBitIterator_00fb5f30::TConstSetBitIterator_00fb5f30(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb5f30
TConstSetBitIterator_00fb5f30& TConstSetBitIterator_00fb5f30::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00fb5f50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb5f50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb5f50& operator++();
};

TConstSetBitIterator_00fb5f50::TConstSetBitIterator_00fb5f50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb5f50
TConstSetBitIterator_00fb5f50& TConstSetBitIterator_00fb5f50::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00fb7430 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb7430(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb7430& operator++();
};

TConstSetBitIterator_00fb7430::TConstSetBitIterator_00fb7430(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb7430
TConstSetBitIterator_00fb7430& TConstSetBitIterator_00fb7430::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00fb7450 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb7450(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb7450& operator++();
};

TConstSetBitIterator_00fb7450::TConstSetBitIterator_00fb7450(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb7450
TConstSetBitIterator_00fb7450& TConstSetBitIterator_00fb7450::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00fb74a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb74a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb74a0& operator++();
};

TConstSetBitIterator_00fb74a0::TConstSetBitIterator_00fb74a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb74a0
TConstSetBitIterator_00fb74a0& TConstSetBitIterator_00fb74a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00fb74f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb74f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb74f0& operator++();
};

TConstSetBitIterator_00fb74f0::TConstSetBitIterator_00fb74f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb74f0
TConstSetBitIterator_00fb74f0& TConstSetBitIterator_00fb74f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00fb7510 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb7510(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb7510& operator++();
};

TConstSetBitIterator_00fb7510::TConstSetBitIterator_00fb7510(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb7510
TConstSetBitIterator_00fb7510& TConstSetBitIterator_00fb7510::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00fb7560 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb7560(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb7560& operator++();
};

TConstSetBitIterator_00fb7560::TConstSetBitIterator_00fb7560(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb7560
TConstSetBitIterator_00fb7560& TConstSetBitIterator_00fb7560::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00fb75b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb75b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb75b0& operator++();
};

TConstSetBitIterator_00fb75b0::TConstSetBitIterator_00fb75b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb75b0
TConstSetBitIterator_00fb75b0& TConstSetBitIterator_00fb75b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00fb7600 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb7600(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb7600& operator++();
};

TConstSetBitIterator_00fb7600::TConstSetBitIterator_00fb7600(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb7600
TConstSetBitIterator_00fb7600& TConstSetBitIterator_00fb7600::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00fb7650 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb7650(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb7650& operator++();
};

TConstSetBitIterator_00fb7650::TConstSetBitIterator_00fb7650(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb7650
TConstSetBitIterator_00fb7650& TConstSetBitIterator_00fb7650::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00fb76a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb76a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb76a0& operator++();
};

TConstSetBitIterator_00fb76a0::TConstSetBitIterator_00fb76a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb76a0
TConstSetBitIterator_00fb76a0& TConstSetBitIterator_00fb76a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00fb76f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb76f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb76f0& operator++();
};

TConstSetBitIterator_00fb76f0::TConstSetBitIterator_00fb76f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb76f0
TConstSetBitIterator_00fb76f0& TConstSetBitIterator_00fb76f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00fb7740 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb7740(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb7740& operator++();
};

TConstSetBitIterator_00fb7740::TConstSetBitIterator_00fb7740(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb7740
TConstSetBitIterator_00fb7740& TConstSetBitIterator_00fb7740::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00fb7790 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb7790(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb7790& operator++();
};

TConstSetBitIterator_00fb7790::TConstSetBitIterator_00fb7790(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb7790
TConstSetBitIterator_00fb7790& TConstSetBitIterator_00fb7790::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00fb77e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb77e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb77e0& operator++();
};

TConstSetBitIterator_00fb77e0::TConstSetBitIterator_00fb77e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb77e0
TConstSetBitIterator_00fb77e0& TConstSetBitIterator_00fb77e0::operator++()
{
    It.Advance();
    return *this;
}

struct C_00fb78c0 { void sub_00fb4510(int); C_00fb78c0 *sub_00fb78c0(int); };

// @baa 0x00fb78c0
C_00fb78c0 *C_00fb78c0::sub_00fb78c0(int a) { sub_00fb4510(a); return this; }

int sub_00fb61b0(void);
// @baa 0x00fb78e0
undefined4 UObject::sub_00fb78e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00fb61b0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_0060b3d0(void);
extern undefined * g_0214d8b8;
// @baa 0x00fb8890
undefined4 * UReimportSkeletalMeshFactory::sub_00fb8890(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b3d0();
  param_1[0x14] = param_1[0x14] | 4;
  param_1[0x1b] = param_2;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *param_1 = (undefined4)(&g_0214d8b8);
  return param_1;
}

struct TConstSetBitIterator_00fb9260 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb9260(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb9260& operator++();
};

TConstSetBitIterator_00fb9260::TConstSetBitIterator_00fb9260(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb9260
TConstSetBitIterator_00fb9260& TConstSetBitIterator_00fb9260::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00fb9280 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb9280(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb9280& operator++();
};

TConstSetBitIterator_00fb9280::TConstSetBitIterator_00fb9280(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb9280
TConstSetBitIterator_00fb9280& TConstSetBitIterator_00fb9280::operator++()
{
    It.Advance();
    return *this;
}

struct C_00fb9550 {
    void sub_00fb9550();
    int sub_00fb6210(int);
};

// @baa 0x00fb9550
void C_00fb9550::sub_00fb9550(void)
{
    int param_1 = (int)this;
  ((C_00fb9550 *)((*(char **)((char *)this + 0x10))))->sub_00fb6210(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_00fb9570 {
    void sub_00fb9570();
    int sub_00fb6920(int);
};

// @baa 0x00fb9570
void C_00fb9570::sub_00fb9570(void)
{
    int param_1 = (int)this;
  ((C_00fb9570 *)((*(char **)((char *)this + 0x10))))->sub_00fb6920(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_00fb9590 {
    void sub_00fb9590();
    int sub_00fb6a80(int);
};

// @baa 0x00fb9590
void C_00fb9590::sub_00fb9590(void)
{
    int param_1 = (int)this;
  ((C_00fb9590 *)((*(char **)((char *)this + 0x10))))->sub_00fb6a80(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_view_00fb9890 {
    int sub_00fb6fc0(int);
};

// @baa 0x00fb9890
void UObject::sub_00fb9890(void)
{
    int param_1 = (int)this;
  ((C_view_00fb9890 *)((*(char **)((char *)this + 0x10))))->sub_00fb6fc0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

// @baa 0x00fb9910
undefined4 UObject::sub_00fb9910(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00fb61b0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct TConstSetBitIterator_00fb9cf0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb9cf0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb9cf0& operator++();
};

TConstSetBitIterator_00fb9cf0::TConstSetBitIterator_00fb9cf0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb9cf0
TConstSetBitIterator_00fb9cf0& TConstSetBitIterator_00fb9cf0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00fb9d40 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb9d40(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb9d40& operator++();
};

TConstSetBitIterator_00fb9d40::TConstSetBitIterator_00fb9d40(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb9d40
TConstSetBitIterator_00fb9d40& TConstSetBitIterator_00fb9d40::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00fb9f40 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fb9f40(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fb9f40& operator++();
};

TConstSetBitIterator_00fb9f40::TConstSetBitIterator_00fb9f40(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fb9f40
TConstSetBitIterator_00fb9f40& TConstSetBitIterator_00fb9f40::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00fba640 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fba640(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fba640& operator++();
};

TConstSetBitIterator_00fba640::TConstSetBitIterator_00fba640(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fba640
TConstSetBitIterator_00fba640& TConstSetBitIterator_00fba640::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00fba690 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fba690(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fba690& operator++();
};

TConstSetBitIterator_00fba690::TConstSetBitIterator_00fba690(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fba690
TConstSetBitIterator_00fba690& TConstSetBitIterator_00fba690::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00fbaa70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fbaa70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fbaa70& operator++();
};

TConstSetBitIterator_00fbaa70::TConstSetBitIterator_00fbaa70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fbaa70
TConstSetBitIterator_00fbaa70& TConstSetBitIterator_00fbaa70::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00fbaac0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fbaac0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fbaac0& operator++();
};

TConstSetBitIterator_00fbaac0::TConstSetBitIterator_00fbaac0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fbaac0
TConstSetBitIterator_00fbaac0& TConstSetBitIterator_00fbaac0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00fbab10 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fbab10(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fbab10& operator++();
};

TConstSetBitIterator_00fbab10::TConstSetBitIterator_00fbab10(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fbab10
TConstSetBitIterator_00fbab10& TConstSetBitIterator_00fbab10::operator++()
{
    It.Advance();
    return *this;
}

struct A_00fbb060 { virtual void sub_00fbd3e0(); char pad[36]; };

struct B_00fbb060 { virtual void sub_00fbd3e0(); };

struct C_00fbb060 : A_00fbb060, B_00fbb060 { virtual void sub_00fbd3e0(); C_00fbb060(); };

C_00fbb060::C_00fbb060() {}

// @baa 0x00fbb060
void C_00fbb060::sub_00fbd3e0() {}

struct C_view_00fbbf70 {
    int sub_00fb9750(int, int);
};

// @baa 0x00fbbf70
undefined4 UObject::sub_00fbbf70(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_00fbbf70 *)(this))->sub_00fb9750(param_2, param_3);
  return param_1;
}

struct C_view_00fbc040 {
    int sub_00fb9810(int, int);
};

// @baa 0x00fbc040
int UObject::sub_00fbc040(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00fbc040 *)(this))->sub_00fb9810(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_00fbc060 {
    int sub_00fb95b0(int);
};

// @baa 0x00fbc060
void UObject::sub_00fbc060(void)
{
    int param_1 = (int)this;
  ((C_view_00fbc060 *)((*(char **)((char *)this + 0x10))))->sub_00fb95b0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_view_00fbc080 {
    int sub_00fb6fc0(int);
};

// @baa 0x00fbc080
void UObject::sub_00fbc080(void)
{
    int param_1 = (int)this;
  ((C_view_00fbc080 *)((*(char **)((char *)this + 0x10))))->sub_00fb6fc0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_00fbc450 {
    int sub_00fbc450(undefined4);
    int sub_00fbc2a0(int);
};

// @baa 0x00fbc450
int C_00fbc450::sub_00fbc450(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_00fbc450 *)(this))->sub_00fbc2a0(param_2);
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  return param_1;
}

struct TConstSetBitIterator_00fbc4d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fbc4d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fbc4d0& operator++();
};

TConstSetBitIterator_00fbc4d0::TConstSetBitIterator_00fbc4d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fbc4d0
TConstSetBitIterator_00fbc4d0& TConstSetBitIterator_00fbc4d0::operator++()
{
    It.Advance();
    return *this;
}

int sub_00fb7040(void);
// @baa 0x00fbcac0
int UTexture2D::sub_00fbcac0(void)
{
    int param_1 = (int)this;

  sub_00fb7040();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_00fb7190(void);
// @baa 0x00fbcfa0
int UTexture2D::sub_00fbcfa0(void)
{
    int param_1 = (int)this;

  sub_00fb7190();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_00fb7250(void);
// @baa 0x00fbcfc0
int UTexture2D::sub_00fbcfc0(void)
{
    int param_1 = (int)this;

  sub_00fb7250();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_00fb73d0(void);
// @baa 0x00fbd040
int UTexture2D::sub_00fbd040(void)
{
    int param_1 = (int)this;

  sub_00fb73d0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct TConstSetBitIterator_00fbd0e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00fbd0e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00fbd0e0& operator++();
};

TConstSetBitIterator_00fbd0e0::TConstSetBitIterator_00fbd0e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00fbd0e0
TConstSetBitIterator_00fbd0e0& TConstSetBitIterator_00fbd0e0::operator++()
{
    It.Advance();
    return *this;
}

int sub_00fbb070(void);
// @baa 0x00fbd3e0
undefined4 UTexture2D::sub_00fbd3e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00fbb070();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_view_00fbd710 {
    int sub_00fb9750(int, int);
};

// @baa 0x00fbd710
int UObject::sub_00fbd710(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_00fbd710 *)(this))->sub_00fb9750(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct Block {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    int Unk20;   // 0x20
    int Unk24;   // 0x24
    int Unk28;   // 0x28
    int Unk2C;   // 0x2c
    void sub_005b4b00(int, int);
};

struct C_00fbd740 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_00fbd740(void);
};

// @baa 0x00fbd740
void C_00fbd740::sub_00fbd740(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_005b4b00(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

// @baa 0x00fbdd80
int UTexture2D::sub_00fbdd80(void)
{
    int param_1 = (int)this;

  sub_00fb7040();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view_00fbde20 {
    int sub_00fbcba0(int, int);
};

// @baa 0x00fbde20
int UTexture2D::sub_00fbde20(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00fbde20 *)(this))->sub_00fbcba0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_00fbde40 {
    int sub_00fbcc20(int, int);
};

// @baa 0x00fbde40
int UTexture2D::sub_00fbde40(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00fbde40 *)(this))->sub_00fbcc20(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_00fbde60 {
    int sub_00fbc160(int);
};

// @baa 0x00fbde60
void UTexture2D::sub_00fbde60(void)
{
    int param_1 = (int)this;
  ((C_view_00fbde60 *)((*(char **)((char *)this + 0x10))))->sub_00fbc160(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_view_00fbde80 {
    int sub_00fbcca0(int, int);
};

// @baa 0x00fbde80
int UTexture2D::sub_00fbde80(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00fbde80 *)(this))->sub_00fbcca0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_00fbdea0 {
    int sub_00fbcd20(int, int);
};

// @baa 0x00fbdea0
int UTexture2D::sub_00fbdea0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00fbdea0 *)(this))->sub_00fbcd20(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_00fbdec0 {
    int sub_00fbcda0(int, int);
};

// @baa 0x00fbdec0
int UTexture2D::sub_00fbdec0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00fbdec0 *)(this))->sub_00fbcda0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_00fbdee0 {
    int sub_00fbce20(int, int);
};

// @baa 0x00fbdee0
int UTexture2D::sub_00fbdee0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00fbdee0 *)(this))->sub_00fbce20(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_00fbdf00 {
    int sub_00fbcea0(int, int);
};

// @baa 0x00fbdf00
int UTexture2D::sub_00fbdf00(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00fbdf00 *)(this))->sub_00fbcea0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_00fbdf20 {
    int sub_00fbcf20(int, int);
};

// @baa 0x00fbdf20
int UTexture2D::sub_00fbdf20(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00fbdf20 *)(this))->sub_00fbcf20(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_00fbdf40 { void sub_005b7760(int); C_00fbdf40 *sub_00fbdf40(int); };

// @baa 0x00fbdf40
C_00fbdf40 *C_00fbdf40::sub_00fbdf40(int a) { sub_005b7760(a); return this; }

// @baa 0x00fbdf60
int UTexture2D::sub_00fbdf60(void)
{
    int param_1 = (int)this;

  sub_00fb7190();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00fbdf80
int UTexture2D::sub_00fbdf80(void)
{
    int param_1 = (int)this;

  sub_00fb7250();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00fbdfa0
int UTexture2D::sub_00fbdfa0(void)
{
    int param_1 = (int)this;

  sub_00fb73d0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view_00fbdfc0 {
    int sub_00fbd060(int, int);
};

// @baa 0x00fbdfc0
int UTexture2D::sub_00fbdfc0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00fbdfc0 *)(this))->sub_00fbd060(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

int sub_00fb71f0(void);
// @baa 0x00fbdfe0
int UTexture2D::sub_00fbdfe0(void)
{
    int param_1 = (int)this;

  sub_00fb71f0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_00fbd370();
// @baa 0x00fbe000
void sub_00fbe000(void) { sub_00fbd370(); }

void sub_00fbd630();
// @baa 0x00fbe010
void sub_00fbe010(void) { sub_00fbd630(); }

void sub_00fbd6a0();
// @baa 0x00fbe410
void sub_00fbe410(void) { sub_00fbd6a0(); }

void sub_00fbd760();
// @baa 0x00fbe630
void sub_00fbe630(void) { sub_00fbd760(); }

void sub_00fbd900();
// @baa 0x00fbe780
void sub_00fbe780(void) { sub_00fbd900(); }

void sub_00fbe7d0();
// @baa 0x00fbf280
void sub_00fbf280(void) { sub_00fbe7d0(); }
