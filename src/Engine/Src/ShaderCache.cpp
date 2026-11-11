// ShaderCache.cpp (part 1 of 3): 60 functions
// Placed here by: neighbours 55, callers 4, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00638790
FString sub_00638790()
{
    return TEXT("PC");
}

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x0071d9e0
int UTexture2D::sub_0071d9e0(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],4);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3)){
iVar3=sub_0053df70(*param_1,iVar3*4,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+4*iVar2);
if((undefined4*)0x0!=puVar1){
*puVar1=*param_2;
}
return iVar2;
}

// @baa 0x0071dab0
int UTexture2D::sub_0071dab0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x0071dac0
int UTexture2D::sub_0071dac0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct S_0071dad0 { int sub_00544d40(int); };

// @baa 0x0071dad0
int sub_0071dad0(S_0071dad0 *s, int a) { return s->sub_00544d40(a); }

// @baa 0x0071dae0
int UTexture2D::sub_0071dae0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

// @baa 0x0071daf0
int UTexture2D::sub_0071daf0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x0071db10
int UTexture2D::sub_0071db10(void) { return *(int*)((char*)this + 0); }

// @baa 0x0071db90
int UTexture2D::sub_0071db90(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

// @baa 0x0071dc30
int UTexture2D::sub_0071dc30(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

// @baa 0x0071dcd0
int UTexture2D::sub_0071dcd0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C { int sub_0071dde0(void); };

// @baa 0x0071dde0
int C::sub_0071dde0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct S_0071ddf0 { int sub_00544d40(int); };

// @baa 0x0071ddf0
int sub_0071ddf0(S_0071ddf0 *s, int a) { return s->sub_00544d40(a); }

struct C_0071de00 { int sub_0071de00(void); };

// @baa 0x0071de00
int C_0071de00::sub_0071de00(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0071de10 {
    int sub_0071de10();
};

// @baa 0x0071de10
int C_0071de10::sub_0071de10(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0071de30 {
    int sub_0071de30();
};

// @baa 0x0071de30
int C_0071de30::sub_0071de30(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct S_0071de80 { int sub_00544d40(int); };

// @baa 0x0071de80
int sub_0071de80(S_0071de80 *s, int a) { return s->sub_00544d40(a); }

struct C_0071de90 { int sub_0071de90(void); };

// @baa 0x0071de90
int C_0071de90::sub_0071de90(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct S_0071ded0 { int sub_00544d40(int); };

// @baa 0x0071ded0
int sub_0071ded0(S_0071ded0 *s, int a) { return s->sub_00544d40(a); }

struct C_0071dee0 { int sub_0071dee0(void); };

// @baa 0x0071dee0
int C_0071dee0::sub_0071dee0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_0071def0 {
    int sub_0071def0(int);
};

// @baa 0x0071def0
int C_0071def0::sub_0071def0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct S {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0071df00(INT Index);
};

// @baa 0x0071df00
DWORD* S::sub_0071df00(INT Index)
{
    return &Items(Index);
}

struct E { BYTE Bytes[24]; };

struct S_0071df50 {
    TArray<E> Items; // 0x00
    E* sub_0071df50(INT Index);
};

// @baa 0x0071df50
E* S_0071df50::sub_0071df50(INT Index)
{
    return &Items(Index);
}

struct C_0071e020 {
    int sub_0071e020(int);
};

// @baa 0x0071e020
int C_0071e020::sub_0071e020(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
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

struct TConstSetBitIterator_0072e420 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0072e420(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0072e420& operator++();
};

TConstSetBitIterator_0072e420::TConstSetBitIterator_0072e420(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0072e420
TConstSetBitIterator_0072e420& TConstSetBitIterator_0072e420::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007305e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007305e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007305e0& operator++();
};

TConstSetBitIterator_007305e0::TConstSetBitIterator_007305e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007305e0
TConstSetBitIterator_007305e0& TConstSetBitIterator_007305e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00730600 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00730600(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00730600& operator++();
};

TConstSetBitIterator_00730600::TConstSetBitIterator_00730600(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00730600
TConstSetBitIterator_00730600& TConstSetBitIterator_00730600::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00730620 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00730620(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00730620& operator++();
};

TConstSetBitIterator_00730620::TConstSetBitIterator_00730620(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00730620
TConstSetBitIterator_00730620& TConstSetBitIterator_00730620::operator++()
{
    It.Advance();
    return *this;
}

// @baa 0x007306a0
int sub_007306a0(void) { return 0; }

struct A_007306b0 { virtual void sub_00730ab0(); char pad[16]; };

struct B_007306b0 { virtual void sub_00730ab0(); };

struct C_007306b0 : A_007306b0, B_007306b0 { virtual void sub_00730ab0(); C_007306b0(); };

C_007306b0::C_007306b0() {}

// @baa 0x007306b0
void C_007306b0::sub_00730ab0() {}

void sub_007249d0();
// @baa 0x007306c0
void sub_007306c0(void) { sub_007249d0(); }

// @baa 0x00730730
int sub_00730730(void) { return 0; }

struct A_00730740 { virtual void sub_00730ad0(); char pad[16]; };

struct B_00730740 { virtual void sub_00730ad0(); };

struct C_00730740 : A_00730740, B_00730740 { virtual void sub_00730ad0(); C_00730740(); };

C_00730740::C_00730740() {}

// @baa 0x00730740
void C_00730740::sub_00730ad0() {}

// @baa 0x00730750
void sub_00730750(void) { sub_007249d0(); }

// @baa 0x007307c0
int sub_007307c0(void) { return 0; }

struct A_007307d0 { virtual void sub_00730af0(); char pad[16]; };

struct B_007307d0 { virtual void sub_00730af0(); };

struct C_007307d0 : A_007307d0, B_007307d0 { virtual void sub_00730af0(); C_007307d0(); };

C_007307d0::C_007307d0() {}

// @baa 0x007307d0
void C_007307d0::sub_00730af0() {}

// @baa 0x007307e0
void sub_007307e0(void) { sub_007249d0(); }

// @baa 0x00730850
int sub_00730850(void) { return 0; }

struct A_00730860 { virtual void sub_00730b10(); char pad[16]; };

struct B_00730860 { virtual void sub_00730b10(); };

struct C_00730860 : A_00730860, B_00730860 { virtual void sub_00730b10(); C_00730860(); };

C_00730860::C_00730860() {}

// @baa 0x00730860
void C_00730860::sub_00730b10() {}

// @baa 0x00730870
void sub_00730870(void) { sub_007249d0(); }

// @baa 0x007308e0
int sub_007308e0(void) { return 0; }

struct A_007308f0 { virtual void sub_00730b30(); char pad[16]; };

struct B_007308f0 { virtual void sub_00730b30(); };

struct C_007308f0 : A_007308f0, B_007308f0 { virtual void sub_00730b30(); C_007308f0(); };

C_007308f0::C_007308f0() {}

// @baa 0x007308f0
void C_007308f0::sub_00730b30() {}

// @baa 0x00730900
void sub_00730900(void) { sub_007249d0(); }

struct C_view {
    int sub_0072d0e0(int);
};

// @baa 0x00730910
void UTexture2D::sub_00730910(void)
{
    int param_1 = (int)this;
  ((C_view *)((*(char **)((char *)this + 0x10))))->sub_0072d0e0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_view_00730930 {
    int sub_0072d260(int);
};

// @baa 0x00730930
void UTexture2D::sub_00730930(void)
{
    int param_1 = (int)this;
  ((C_view_00730930 *)((*(char **)((char *)this + 0x10))))->sub_0072d260(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_view_00730950 {
    int sub_0072d3c0(int);
};

// @baa 0x00730950
void UTexture2D::sub_00730950(void)
{
    int param_1 = (int)this;
  ((C_view_00730950 *)((*(char **)((char *)this + 0x10))))->sub_0072d3c0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_view_00730970 {
    int sub_0072d770(int);
};

// @baa 0x00730970
void UTexture2D::sub_00730970(void)
{
    int param_1 = (int)this;
  ((C_view_00730970 *)((*(char **)((char *)this + 0x10))))->sub_0072d770(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_view_00730990 {
    int sub_0072d910(int);
};

// @baa 0x00730990
void UTexture2D::sub_00730990(void)
{
    int param_1 = (int)this;
  ((C_view_00730990 *)((*(char **)((char *)this + 0x10))))->sub_0072d910(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_view_007309b0 {
    int sub_0072da70(int);
};

// @baa 0x007309b0
void UTexture2D::sub_007309b0(void)
{
    int param_1 = (int)this;
  ((C_view_007309b0 *)((*(char **)((char *)this + 0x10))))->sub_0072da70(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

int sub_0053dfa0(...);
int sub_0072ce90(void);
// @baa 0x007309d0
undefined4 UTexture2D::sub_007309d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0072ce90();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_0072cef0(void);
// @baa 0x007309f0
undefined4 UTexture2D::sub_007309f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0072cef0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_0072cf50(void);
// @baa 0x00730a10
undefined4 UTexture2D::sub_00730a10(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0072cf50();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_0072cfb0(void);
// @baa 0x00730a30
undefined4 UTexture2D::sub_00730a30(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0072cfb0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_0072d010(void);
// @baa 0x00730a50
undefined4 UTexture2D::sub_00730a50(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0072d010();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_0072d070(void);
// @baa 0x00730a70
undefined4 UTexture2D::sub_00730a70(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0072d070();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x0073ee30
IMPLEMENT_CLASS_AT(UShaderCache, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ShaderCache.cpp", 9);

// @baa 0x0073ee40
int sub_00750d00(...);
extern undefined4 g_026b2158;
// @baa 0x007513d0
undefined4 sub_007513d0(int param_1)
{
  if ((&g_026b2158)[param_1] == 0) {
    sub_00750d00(param_1);
  }
  return (&g_026b2158)[param_1];
}

void sub_0074f680();
// @baa 0x00751a80
void sub_00751a80(void) { sub_0074f680(); }

void sub_007520b0();
// @baa 0x00752120
void sub_00752120(void) { sub_007520b0(); }
