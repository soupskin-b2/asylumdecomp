// CommonEditor_1740000.cpp (part 1 of 2): 103 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C { void sub_01740c20(void); };

// @baa 0x01740c20
void C::sub_01740c20(void) { *(int*)((char*)this + 4) = 0; }

struct C_01740c30 { void sub_01740c30(void); };

// @baa 0x01740c30
void C_01740c30::sub_01740c30(void) { *(int*)((char*)this + 4) = 0; }

struct C_01740c90 { void sub_01740c90(void); };

// @baa 0x01740c90
void C_01740c90::sub_01740c90(void) { *(int*)((char*)this + 4) = 0; }

struct C_01740ca0 { void sub_01740ca0(void); };

// @baa 0x01740ca0
void C_01740ca0::sub_01740ca0(void) { *(int*)((char*)this + 4) = 0; }

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_01740cb0 { void* Data; int Num; int Max; void sub_01740cb0(); };

// @baa 0x01740cb0
void C_01740cb0::sub_01740cb0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_01740df0 { void* Data; int Num; int Max; void sub_01740df0(); };

// @baa 0x01740df0
void C_01740df0::sub_01740df0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_01740e50 {
    int sub_0173f2c0(undefined4 *);
    int sub_01740e50(undefined4 *);
};

// @baa 0x01740e50
int C_01740e50::sub_01740e50(undefined4 *param)
{
    return sub_0173f2c0(param);
}

struct C_01740e60 {
    void sub_01740e60(int);
};

int sub_0053df70(...);
// @baa 0x01740e60
void C_01740e60::sub_01740e60(int param_2)
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

// @baa 0x01740f20
int UTexture2D::sub_01740f20(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x48;
}

// @baa 0x01741020
int UTexture2D::sub_01741020(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_01741120 {
    int sub_01741120(int);
};

// @baa 0x01741120
int C_01741120::sub_01741120(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_01741130 {
    int sub_01741130();
};

// @baa 0x01741130
int C_01741130::sub_01741130(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01741150 {
    int sub_01741150();
};

// @baa 0x01741150
int C_01741150::sub_01741150(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_01741160 {
    int sub_01741160(int);
};

// @baa 0x01741160
int C_01741160::sub_01741160(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x48;
}

struct C_01741170 {
    int sub_01741170();
};

// @baa 0x01741170
int C_01741170::sub_01741170(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_01741180 {
    int sub_01741180();
};

// @baa 0x01741180
int C_01741180::sub_01741180(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x48;
}

struct C_01741190 {
    int sub_01741190();
};

// @baa 0x01741190
int C_01741190::sub_01741190(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_017411a0 {
    int sub_017411a0();
};

// @baa 0x017411a0
int C_017411a0::sub_017411a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x48;
}

struct C_017411b0 {
    int sub_017411b0();
};

// @baa 0x017411b0
int C_017411b0::sub_017411b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

typedef uint size_t;

struct C_view {
    int sub_00417dc0(int);
};

void * sub_01a375f0(void *, void *, size_t);
// @baa 0x017412f0
undefined4 * UObject::sub_017412f0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00417dc0(param_2[1]);
  if (param_1[1] != 0) {
    sub_01a375f0((void *)*param_1,(void *)*param_2,param_1[1] * 2);
  }
  param_1[3] = param_2[3];
  return param_1;
}

struct C_view_01741330 {
    int sub_00547da0(int);
};

// @baa 0x01741330
int URFMODSound::sub_01741330(int param_2)
{
    int param_1 = (int)this;
  ((C_view_01741330 *)(this))->sub_00547da0(param_2);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  return param_1;
}

struct C_01741b10 { void sub_017418e0(); void sub_01741b10(int); };

// @baa 0x01741b10
void C_01741b10::sub_01741b10(int) { sub_017418e0(); }

struct C_01741d50 { void sub_01741b20(); void sub_01741d50(int); };

// @baa 0x01741d50
void C_01741d50::sub_01741d50(int) { sub_01741b20(); }

extern TArray<int> g_026a1ca4;
struct C_017439c0 {
    int sub_017439c0();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x017439c0
int C_017439c0::sub_017439c0()
{
    return g_026a1ca4(Index);
}

struct C_01743a20 {
    int sub_01743a20();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x01743a20
int C_01743a20::sub_01743a20()
{
    return g_026a1ca4(Index);
}

struct C_01743a80 {
    int sub_01743a80();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x01743a80
int C_01743a80::sub_01743a80()
{
    return g_026a1ca4(Index);
}

struct C_01743ae0 { int sub_01743ae0(void); };

// @baa 0x01743ae0
int C_01743ae0::sub_01743ae0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_01743af0 {
    int sub_01743af0(int);
};

// @baa 0x01743af0
int C_01743af0::sub_01743af0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x48;
}

struct C_01743b00 {
    int sub_01743b00(int);
};

// @baa 0x01743b00
int C_01743b00::sub_01743b00(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_view_01743b10 {
    int sub_01740f30(int, int);
};

// @baa 0x01743b10
int UTexture2D::sub_01743b10(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_01743b10 *)(this))->sub_01740f30((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

// @baa 0x01743b40
int UTexture2D::sub_01743b40(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_view_01743b50 {
    int sub_01741030(int, int);
};

// @baa 0x01743b50
int UTexture2D::sub_01743b50(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_01743b50 *)(this))->sub_01741030((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_01743b80 {
    int sub_01743b80();
};

// @baa 0x01743b80
int C_01743b80::sub_01743b80(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01743ba0 {
    int sub_01743ba0();
};

// @baa 0x01743ba0
int C_01743ba0::sub_01743ba0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

int sub_0040fcc0(void);
int sub_0053dfa0(...);
// @baa 0x01743bb0
undefined4 UObject::sub_01743bb0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x01743c40
int UTexture2D::sub_01743c40(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x48;
}

// @baa 0x01743c50
int UTexture2D::sub_01743c50(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x01743c60
int UTexture2D::sub_01743c60(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
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

struct TConstSetBitIterator_01743eb0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01743eb0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01743eb0& operator++();
};

TConstSetBitIterator_01743eb0::TConstSetBitIterator_01743eb0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01743eb0
TConstSetBitIterator_01743eb0& TConstSetBitIterator_01743eb0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01743ed0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01743ed0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01743ed0& operator++();
};

TConstSetBitIterator_01743ed0::TConstSetBitIterator_01743ed0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01743ed0
TConstSetBitIterator_01743ed0& TConstSetBitIterator_01743ed0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01743ef0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01743ef0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01743ef0& operator++();
};

TConstSetBitIterator_01743ef0::TConstSetBitIterator_01743ef0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01743ef0
TConstSetBitIterator_01743ef0& TConstSetBitIterator_01743ef0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01743f40 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01743f40(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01743f40& operator++();
};

TConstSetBitIterator_01743f40::TConstSetBitIterator_01743f40(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01743f40
TConstSetBitIterator_01743f40& TConstSetBitIterator_01743f40::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01743f90 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01743f90(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01743f90& operator++();
};

TConstSetBitIterator_01743f90::TConstSetBitIterator_01743f90(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01743f90
TConstSetBitIterator_01743f90& TConstSetBitIterator_01743f90::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01743fe0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01743fe0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01743fe0& operator++();
};

TConstSetBitIterator_01743fe0::TConstSetBitIterator_01743fe0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01743fe0
TConstSetBitIterator_01743fe0& TConstSetBitIterator_01743fe0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01744000 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01744000(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01744000& operator++();
};

TConstSetBitIterator_01744000::TConstSetBitIterator_01744000(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01744000
TConstSetBitIterator_01744000& TConstSetBitIterator_01744000::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01744020 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01744020(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01744020& operator++();
};

TConstSetBitIterator_01744020::TConstSetBitIterator_01744020(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01744020
TConstSetBitIterator_01744020& TConstSetBitIterator_01744020::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01744040 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01744040(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01744040& operator++();
};

TConstSetBitIterator_01744040::TConstSetBitIterator_01744040(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01744040
TConstSetBitIterator_01744040& TConstSetBitIterator_01744040::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01744090 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01744090(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01744090& operator++();
};

TConstSetBitIterator_01744090::TConstSetBitIterator_01744090(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01744090
TConstSetBitIterator_01744090& TConstSetBitIterator_01744090::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_017440e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_017440e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_017440e0& operator++();
};

TConstSetBitIterator_017440e0::TConstSetBitIterator_017440e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x017440e0
TConstSetBitIterator_017440e0& TConstSetBitIterator_017440e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01744130 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01744130(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01744130& operator++();
};

TConstSetBitIterator_01744130::TConstSetBitIterator_01744130(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01744130
TConstSetBitIterator_01744130& TConstSetBitIterator_01744130::operator++()
{
    It.Advance();
    return *this;
}

struct C_01744150 {
    int sub_01744150();
};

// @baa 0x01744150
int C_01744150::sub_01744150(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

int sub_01741420(...);
// @baa 0x01744330
void sub_01744330(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  sub_01741420(param_1,param_2,param_3,0,0);
  return;
}

int sub_0173a8a0(void);
int sub_017415c0(...);
extern undefined4 g_026e5884;
// @baa 0x01744410
int sub_01744410(void)
{
  if (g_026e5884 == 0) {
    g_026e5884 = sub_017415c0(L"CommonEditor");
    sub_0173a8a0();
  }
  return g_026e5884;
}

int sub_005c7a20(void);
extern undefined * g_023d5350;
// @baa 0x01744440
undefined4 * UObject::sub_01744440(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_023d5350);
  return param_1;
}

// @baa 0x01744460
IMPLEMENT_CLASS_AT(URGenericBrowserType, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonEditor\\Src\\CommonEditorClasses.cpp", 6);

// @baa 0x017444c0
int sub_01742f80(void);
// @baa 0x01745700
undefined4 UUnrealEdEngine::sub_01745700(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01742f80();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01746370 {
    int sub_01746370();
};

// @baa 0x01746370
int C_01746370::sub_01746370(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_01746390 {
    int sub_01746390();
};

// @baa 0x01746390
int C_01746390::sub_01746390(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + 4 + *(int *)*param_1;
}

struct C_view_01746500 {
    int sub_01743bd0(int, int);
};

// @baa 0x01746500
int UTexture2D::sub_01746500(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_01746500 *)(this))->sub_01743bd0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x48;
  }
  return 0;
}

struct C_view_01746530 {
    int sub_0147e750(int, int);
};

// @baa 0x01746530
int UTexture2D::sub_01746530(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_01746530 *)(this))->sub_0147e750((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x18;
  }
  return 0;
}

struct TConstSetBitIterator_01746a30 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01746a30(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01746a30& operator++();
};

TConstSetBitIterator_01746a30::TConstSetBitIterator_01746a30(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01746a30
TConstSetBitIterator_01746a30& TConstSetBitIterator_01746a30::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01746b20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01746b20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01746b20& operator++();
};

TConstSetBitIterator_01746b20::TConstSetBitIterator_01746b20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01746b20
TConstSetBitIterator_01746b20& TConstSetBitIterator_01746b20::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01746b70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01746b70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01746b70& operator++();
};

TConstSetBitIterator_01746b70::TConstSetBitIterator_01746b70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01746b70
TConstSetBitIterator_01746b70& TConstSetBitIterator_01746b70::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01746bc0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01746bc0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01746bc0& operator++();
};

TConstSetBitIterator_01746bc0::TConstSetBitIterator_01746bc0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01746bc0
TConstSetBitIterator_01746bc0& TConstSetBitIterator_01746bc0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01746d30 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01746d30(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01746d30& operator++();
};

TConstSetBitIterator_01746d30::TConstSetBitIterator_01746d30(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01746d30
TConstSetBitIterator_01746d30& TConstSetBitIterator_01746d30::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01746d80 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01746d80(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01746d80& operator++();
};

TConstSetBitIterator_01746d80::TConstSetBitIterator_01746d80(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01746d80
TConstSetBitIterator_01746d80& TConstSetBitIterator_01746d80::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01746dd0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01746dd0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01746dd0& operator++();
};

TConstSetBitIterator_01746dd0::TConstSetBitIterator_01746dd0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01746dd0
TConstSetBitIterator_01746dd0& TConstSetBitIterator_01746dd0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01746e20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01746e20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01746e20& operator++();
};

TConstSetBitIterator_01746e20::TConstSetBitIterator_01746e20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01746e20
TConstSetBitIterator_01746e20& TConstSetBitIterator_01746e20::operator++()
{
    It.Advance();
    return *this;
}

void sub_01744160();
// @baa 0x01746e70
void sub_01746e70(void) { sub_01744160(); }

// @baa 0x01746f60
void sub_01746f60(int param_1, int param_2, int param_3)
{
  if ((param_1 != param_2) && (param_2 != param_3)) {
    sub_01741420(param_1,param_2,param_3,0,0);
  }
  return;
}

int sub_01744160(...);
// @baa 0x01746f90
void sub_01746f90(undefined4 param_1, undefined4 param_2, undefined4 param_3, code * param_4)
{
  char cVar1;
  
  cVar1 = (*param_4)(param_2,param_1);
  if (cVar1 != '\0') {
    sub_01744160(param_2,param_1);
  }
  cVar1 = (*param_4)(param_3,param_2);
  if (cVar1 != '\0') {
    sub_01744160(param_3,param_2);
  }
  cVar1 = (*param_4)(param_2,param_1);
  if (cVar1 != '\0') {
    sub_01744160(param_2,param_1);
  }
  return;
}

struct M_01748090 { void sub_00553720(); };

struct C_01748090 { char pad[8]; M_01748090 m; void sub_01748090(); };

// @baa 0x01748090
void C_01748090::sub_01748090() { m.sub_00553720(); }

extern undefined * g_023d59f8;
// @baa 0x0174aaa0
undefined4 * UObject::sub_0174aaa0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_023d59f8);
  return param_1;
}

// @baa 0x0174aac0
IMPLEMENT_CLASS_AT(UCacheDestructibleScalesCommandlet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonEditor\\Src\\CacheDestructibleScalesCommandlet.cpp", 8);

// @baa 0x0174ab20
extern undefined * g_023d5b10;
// @baa 0x0174ab40
undefined4 * UObject::sub_0174ab40(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_023d5b10);
  return param_1;
}

extern undefined * g_023d5c28;
// @baa 0x0174abe0
undefined4 * UObject::sub_0174abe0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_023d5c28);
  return param_1;
}

// @baa 0x0174ac00
IMPLEMENT_CLASS_AT(UFindUnusedCommandlet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonEditor\\Src\\FindUnusedCommandlet.cpp", 15);

// @baa 0x0174ac60
extern undefined * g_023d5d40;
// @baa 0x0174ac80
undefined4 * UObject::sub_0174ac80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_023d5d40);
  return param_1;
}

// @baa 0x0174aca0
IMPLEMENT_CLASS_AT(UMarkUnusedScriptNoExportCommandlet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonEditor\\Src\\MarkUnusedScriptNoExportCommandlet.cpp", 6);

// @baa 0x0174ad00
extern undefined * g_023d5e58;
// @baa 0x0174ad20
undefined4 * UObject::sub_0174ad20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_023d5e58);
  return param_1;
}

int sub_0173aa00(void);
int sub_01747760(...);
extern undefined4 g_026e5888;
// @baa 0x0174adc0
int sub_0174adc0(void)
{
  if (g_026e5888 == 0) {
    g_026e5888 = sub_01747760(L"CommonEditor");
    sub_0173aa00();
  }
  return g_026e5888;
}

struct TConstSetBitIterator_0174bf50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0174bf50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0174bf50& operator++();
};

TConstSetBitIterator_0174bf50::TConstSetBitIterator_0174bf50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0174bf50
TConstSetBitIterator_0174bf50& TConstSetBitIterator_0174bf50::operator++()
{
    It.Advance();
    return *this;
}

int sub_01749f50(void);
// @baa 0x0174c0d0
undefined4 UObject::sub_0174c0d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01749f50();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_01746c70(void);
// @baa 0x0174c510
int UTexture2D::sub_0174c510(void)
{
    int param_1 = (int)this;

  sub_01746c70();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_01746cd0(void);
// @baa 0x0174c530
int UTexture2D::sub_0174c530(void)
{
    int param_1 = (int)this;

  sub_01746cd0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view_0174c850 {
    int sub_00547da0(int);
    int sub_0174a7a0(int);
};

// @baa 0x0174c850
undefined4 URFMODSound::sub_0174c850(int param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_0174c850 *)(this))->sub_00547da0(param_2);
  ((C_view_0174c850 *)(((char *)this + 0xc)))->sub_0174a7a0(param_2 + 0xc);
  return param_1;
}

struct C_view_0174e2e0 {
    int sub_0174c270(int, int);
};

// @baa 0x0174e2e0
void UTexture2D::sub_0174e2e0(void)
{
    int param_1 = (int)this;
  ((C_view_0174e2e0 *)(this))->sub_0174c270(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_0174e3b0 {
    int sub_0174c330(int, int);
};

// @baa 0x0174e3b0
undefined4 UTexture2D::sub_0174e3b0(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_0174e3b0 *)(this))->sub_0174c330(param_2, param_3);
  return param_1;
}

struct C_view_0174e4e0 {
    int sub_0174c390(int, int);
};

// @baa 0x0174e4e0
int UTexture2D::sub_0174e4e0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_0174e4e0 *)(this))->sub_0174c390(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_0174e500 {
    int sub_0174c410(int, int);
};

// @baa 0x0174e500
int UTexture2D::sub_0174e500(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_0174e500 *)(this))->sub_0174c410(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_0174e520 {
    int sub_0174c490(int, int);
};

// @baa 0x0174e520
int UTexture2D::sub_0174e520(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_0174e520 *)(this))->sub_0174c490(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct M_0174e540 { void sub_010a4ce0(); };

struct C_0174e540 { char pad[4]; M_0174e540 m; void sub_0174e540(); };

// @baa 0x0174e540
void C_0174e540::sub_0174e540() { m.sub_010a4ce0(); }

// @baa 0x0174e550
int UTexture2D::sub_0174e550(void)
{
    int param_1 = (int)this;

  sub_01746c70();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x0174e570
int UTexture2D::sub_0174e570(void)
{
    int param_1 = (int)this;

  sub_01746cd0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct M_0174e590 { void sub_010a4ce0(); };

struct C_0174e590 { char pad[4]; M_0174e590 m; void sub_0174e590(); };

// @baa 0x0174e590
void C_0174e590::sub_0174e590() { m.sub_010a4ce0(); }

struct C_0174e620 {
    undefined4 sub_0174e620(byte);
    int sub_010a4ce0();
};

// @baa 0x0174e620
undefined4 C_0174e620::sub_0174e620(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_0174e620 *)(((char *)this + 4)))->sub_010a4ce0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_0174e1c0();
// @baa 0x0174fdf0
void sub_0174fdf0(void) { sub_0174e1c0(); }

struct C_view_0174fe80 {
    int sub_0174c330(int, int);
};

// @baa 0x0174fe80
int UTexture2D::sub_0174fe80(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_0174fe80 *)(this))->sub_0174c330(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

void sub_0174e3d0();
// @baa 0x0174fed0
void sub_0174fed0(void) { sub_0174e3d0(); }
