// SavePackage.cpp: 94 functions
// Placed here by: neighbours 90, callers 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct T_00543eb0 { BYTE b[12]; };

// @baa 0x00543eb0
template T_00543eb0& TArray<T_00543eb0>::Last(INT);

struct C_00543f10 { int a, b, c; C_00543f10(); };

// @baa 0x00543f10
C_00543f10::C_00543f10() : a(0), b(0), c(0) {}

struct C_00543f20 { int a, b, c; C_00543f20(); };

// @baa 0x00543f20
C_00543f20::C_00543f20() : a(0), b(0), c(0) {}

// @baa 0x00543f30
int UObject::sub_00543f30(void) { return *(int*)((char*)this + 0); }

struct S {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00543f40(INT Index);
};

// @baa 0x00543f40
DWORD* S::sub_00543f40(INT Index)
{
    return &Items(Index);
}

struct C_00543f90 { int a, b, c; C_00543f90(); };

// @baa 0x00543f90
C_00543f90::C_00543f90() : a(0), b(0), c(0) {}

struct C_00543fc0 { int a, b, c; C_00543fc0(); };

// @baa 0x00543fc0
C_00543fc0::C_00543fc0() : a(0), b(0), c(0) {}

struct C_00543fd0 { int a, b, c; C_00543fd0(); };

// @baa 0x00543fd0
C_00543fd0::C_00543fd0() : a(0), b(0), c(0) {}

struct E { BYTE Bytes[16]; };

struct S_00543fe0 {
    TArray<E> Items; // 0x00
    E* sub_00543fe0(INT Index);
};

// @baa 0x00543fe0
E* S_00543fe0::sub_00543fe0(INT Index)
{
    return &Items(Index);
}

struct C_00544070 { int a, b, c; C_00544070(); };

// @baa 0x00544070
C_00544070::C_00544070() : a(0), b(0), c(0) {}

struct S_00544080 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00544080(INT Index);
};

// @baa 0x00544080
DWORD* S_00544080::sub_00544080(INT Index)
{
    return &Items(Index);
}

struct C_005440d0 { int a, b, c; C_005440d0(); };

// @baa 0x005440d0
C_005440d0::C_005440d0() : a(0), b(0), c(0) {}

struct S_005440e0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_005440e0(INT Index);
};

// @baa 0x005440e0
DWORD* S_005440e0::sub_005440e0(INT Index)
{
    return &Items(Index);
}

// @baa 0x00544130
int UObject::sub_00544130(void) { return *(int*)((char*)this + 0); }

// @baa 0x00544280
int UObject::sub_00544280(void) { return *(int*)((char*)this + 0); }

struct T_00544290 { BYTE b[4]; };

// @baa 0x00544290
template INT TArray<T_00544290>::Add(INT);

struct T_00544320 { BYTE b[8]; };

// @baa 0x00544320
template INT TArray<T_00544320>::Add(INT);

struct C {
    int sub_005443b0(int);
};

// @baa 0x005443b0
int C::sub_005443b0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_005443c0 {
    int sub_005443c0(int);
};

// @baa 0x005443c0
int C_005443c0::sub_005443c0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_005443d0 { int sub_005443d0(void); };

// @baa 0x005443d0
int C_005443d0::sub_005443d0(void) { return *(int*)((char*)this + 0); }

struct C_005443e0 {
    int sub_005443e0(int);
};

// @baa 0x005443e0
int C_005443e0::sub_005443e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x005443f0
void __stdcall sub_005443f0(int a0, int a1) {  }

struct T_00544400 { BYTE b[12]; };

// @baa 0x00544400
template INT TArray<T_00544400>::Add(INT);

struct C_00548240 {
    int sub_00548240(int);
};

// @baa 0x00548240
int C_00548240::sub_00548240(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

// @baa 0x00548250
void __stdcall sub_00548250(int a0, int a1) {  }

int sub_005413d0(...);
// @baa 0x00548290
void sub_00548290(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_005482a0 {
    int sub_005482a0(int);
};

// @baa 0x005482a0
int C_005482a0::sub_005482a0(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

// @baa 0x005482e0
void sub_005482e0(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_005482f0 {
    int sub_005482f0(int);
};

// @baa 0x005482f0
int C_005482f0::sub_005482f0(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

struct C_00548300 {
    int sub_00548300(int);
};

// @baa 0x00548300
int C_00548300::sub_00548300(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00548310 {
    int sub_00548310();
};

// @baa 0x00548310
int C_00548310::sub_00548310(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_00548350 {
    int sub_00548350(int);
};

// @baa 0x00548350
int C_00548350::sub_00548350(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_00548370 {
    int sub_00548370(int);
};

// @baa 0x00548370
int C_00548370::sub_00548370(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_00548390 {
    int sub_00548390();
};

// @baa 0x00548390
int C_00548390::sub_00548390(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

// @baa 0x005483e0
void sub_005483e0(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_005483f0 {
    int sub_005483f0(int);
};

// @baa 0x005483f0
int C_005483f0::sub_005483f0(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x18;
}

struct C_00548430 {
    int sub_00548430(int);
};

// @baa 0x00548430
int C_00548430::sub_00548430(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00548470 {
    int sub_00548470();
};

// @baa 0x00548470
int C_00548470::sub_00548470(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00548490 {
    int sub_00548490();
};

// @baa 0x00548490
int C_00548490::sub_00548490(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_005484a0 {
    int sub_005484a0();
};

// @baa 0x005484a0
int C_005484a0::sub_005484a0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_005484c0 {
    int sub_005484c0();
};

// @baa 0x005484c0
int C_005484c0::sub_005484c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_005484d0 {
    int sub_005484d0();
};

// @baa 0x005484d0
int C_005484d0::sub_005484d0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_005484f0 {
    int sub_005484f0();
};

// @baa 0x005484f0
int C_005484f0::sub_005484f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00548500 {
    int sub_00548500();
};

// @baa 0x00548500
int C_00548500::sub_00548500(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00548520 {
    int sub_00548520();
};

// @baa 0x00548520
int C_00548520::sub_00548520(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_00548530 {
    int sub_00548530();
};

// @baa 0x00548530
int C_00548530::sub_00548530(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00548550 {
    int sub_00548550();
};

// @baa 0x00548550
int C_00548550::sub_00548550(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_00548560 {
    int sub_00548560();
};

// @baa 0x00548560
int C_00548560::sub_00548560(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

extern TArray<int> g_026a1ca4;
struct C_00548580 {
    int sub_00548580();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x00548580
int C_00548580::sub_00548580()
{
    return g_026a1ca4(Index);
}

struct C_005485e0 {
    int sub_005485e0();
};

// @baa 0x005485e0
int C_005485e0::sub_005485e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_00548680 {
    int sub_00548680();
};

// @baa 0x00548680
int C_00548680::sub_00548680(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_005486a0 {
    int sub_005486a0();
};

// @baa 0x005486a0
int C_005486a0::sub_005486a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x20 + *(int *)*param_1;
}

struct C_005486b0 {
    int sub_005486b0();
};

// @baa 0x005486b0
int C_005486b0::sub_005486b0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_005486d0 {
    int sub_005486d0();
};

// @baa 0x005486d0
int C_005486d0::sub_005486d0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_005486f0 {
    int sub_005486f0();
};

// @baa 0x005486f0
int C_005486f0::sub_005486f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00548700 {
    int sub_00548700();
};

// @baa 0x00548700
int C_00548700::sub_00548700(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00548720 {
    int sub_00548720();
};

// @baa 0x00548720
int C_00548720::sub_00548720(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00548730 {
    int sub_00548730();
};

// @baa 0x00548730
int C_00548730::sub_00548730(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00548750 {
    int sub_00548750();
};

// @baa 0x00548750
int C_00548750::sub_00548750(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00548770 {
    int sub_00548770();
};

// @baa 0x00548770
int C_00548770::sub_00548770(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00548780 {
    int sub_00548780();
};

// @baa 0x00548780
int C_00548780::sub_00548780(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_005487a0 {
    int sub_005487a0();
};

// @baa 0x005487a0
int C_005487a0::sub_005487a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct C_005487c0 {
    int sub_005487c0();
};

// @baa 0x005487c0
int C_005487c0::sub_005487c0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_005487e0 {
    int sub_005487e0();
};

// @baa 0x005487e0
int C_005487e0::sub_005487e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x1c;
}

struct C_00548800 {
    int sub_00548800();
};

// @baa 0x00548800
int C_00548800::sub_00548800(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00548820 {
    int sub_00548820();
};

// @baa 0x00548820
int C_00548820::sub_00548820(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_00548830 {
    int sub_00548830();
};

// @baa 0x00548830
int C_00548830::sub_00548830(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00548850 {
    int sub_00548850();
};

// @baa 0x00548850
int C_00548850::sub_00548850(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_00548860 {
    int sub_00548860();
};

// @baa 0x00548860
int C_00548860::sub_00548860(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00548880 {
    int sub_00548880();
};

// @baa 0x00548880
int C_00548880::sub_00548880(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_00548890 {
    int sub_00548890(int);
};

// @baa 0x00548890
int C_00548890::sub_00548890(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_005550c0 {
    undefined4 * sub_005550c0(undefined4 *);
    int sub_00551820(int);
};

// @baa 0x005550c0
undefined4 * C_005550c0::sub_005550c0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  ((C_005550c0 *)(((char *)this + 0x3c)))->sub_00551820((int)(param_2 + 0xf));
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  return param_1;
}

struct C_00555140 { void sub_00553180(int); C_00555140 *sub_00555140(int); };

// @baa 0x00555140
C_00555140 *C_00555140::sub_00555140(int a) { sub_00553180(a); return this; }

struct Inner {
    int* data;
    Inner();
    ~Inner();
};

struct Outer_00555160 : Inner {
    int num;
    int max;
    void sub_005532a0(int* p);
    Outer_00555160(int* p);
};

Inner::Inner()
{
    data = 0;
}

// @baa 0x00555160
Outer_00555160::Outer_00555160(int* p)
{
    num = 0;
    max = 0;
    sub_005532a0(p);
}

struct C_005551c0 { void sub_005532a0(int); C_005551c0 *sub_005551c0(int); };

// @baa 0x005551c0
C_005551c0 *C_005551c0::sub_005551c0(int a) { sub_005532a0(a); return this; }

struct C_view {
    int sub_0054f280(int, int);
};

// @baa 0x005551e0
int UPackageMap::sub_005551e0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view *)(this))->sub_0054f280((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x18, iVar1 != 0)) {
    return iVar1 + 4;
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

struct TConstSetBitIterator_00557340 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00557340(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00557340& operator++();
};

TConstSetBitIterator_00557340::TConstSetBitIterator_00557340(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00557340
TConstSetBitIterator_00557340& TConstSetBitIterator_00557340::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00557390 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00557390(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00557390& operator++();
};

TConstSetBitIterator_00557390::TConstSetBitIterator_00557390(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00557390
TConstSetBitIterator_00557390& TConstSetBitIterator_00557390::operator++()
{
    It.Advance();
    return *this;
}

void sub_0055b8c0();
// @baa 0x0055ebf0
void sub_0055ebf0(void) { sub_0055b8c0(); }

struct C_0055ec90 {
    void sub_0055bc20(int);
};

extern C_0055ec90 g_026a1cec;
// @baa 0x0055ec90
void sub_0055ec90(void)
{
    g_026a1cec.sub_0055bc20(0);
}

// @baa 0x00560270
void sub_00560270(void) { sub_0055b8c0(); }

void sub_0055b7a0();
// @baa 0x00560280
void sub_00560280(void) { sub_0055b7a0(); }

void sub_0055ba70();
// @baa 0x00560290
void sub_00560290(void) { sub_0055ba70(); }

void sub_0055bb90();
// @baa 0x005602a0
void sub_005602a0(void) { sub_0055bb90(); }

void sub_0055b950();
// @baa 0x005602b0
void sub_005602b0(void) { sub_0055b950(); }

struct V_00560300 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void g(int a0);
};

struct O_00560300 { char pad[4]; V_00560300* p; void sub_00560300(int a0); };

// @baa 0x00560300
void O_00560300::sub_00560300(int a0) { p->g(a0); }

struct C_00561f00 {
    int sub_00561f00();
};

int sub_005569b0(void);
// @baa 0x00561f00
int C_00561f00::sub_00561f00(void)
{
    int param_1 = (int)this;

  sub_005569b0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00561f20
void sub_00561f20(void) { sub_0055ba70(); }

struct C_00561f30 {
    int sub_00561f30();
};

// @baa 0x00561f30
int C_00561f30::sub_00561f30(void)
{
    int param_1 = (int)this;

  sub_005569b0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00561f50
void sub_00561f50(void) { sub_0055ba70(); }

struct C_00561f60 {
    int sub_00561f60();
};

int sub_005614c0(void);
// @baa 0x00561f60
int C_00561f60::sub_00561f60(void)
{
    int param_1 = (int)this;

  sub_005614c0();
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  return param_1;
}

struct M_00561fa0 { void sub_0055bb90(); };

struct C_00561fa0 { char pad[4]; M_00561fa0 m; void sub_00561fa0(); };

// @baa 0x00561fa0
void C_00561fa0::sub_00561fa0() { m.sub_0055bb90(); }

struct S16 {
    INT f00;
    INT f04;
    INT f08;
    INT f0c;
    S16* sub_0059a330();
};

// @baa 0x0059a330
S16* S16::sub_0059a330()
{
    f00 = 0;
    f04 = 0;
    f08 = 0;
    f0c = 0;
    return this;
}

// 0059a380: assign three INTs to this, return a reference to this.
struct S_0059a380
{
	INT X;
	INT Y;
	INT Z;

	S_0059a380& sub_0059a380(INT FX, INT FY, INT FZ);
};

// @baa 0x0059a380
S_0059a380& S_0059a380::sub_0059a380(INT FX, INT FY, INT FZ)
{
	X = FX;
	Y = FY;
	Z = FZ;
	return *this;
}
