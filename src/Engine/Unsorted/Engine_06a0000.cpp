// Engine_06a0000.cpp (part 1 of 2): 249 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

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

struct TConstSetBitIterator_006a00a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_006a00a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_006a00a0& operator++();
};

TConstSetBitIterator_006a00a0::TConstSetBitIterator_006a00a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x006a00a0
TConstSetBitIterator_006a00a0& TConstSetBitIterator_006a00a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_006a00f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_006a00f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_006a00f0& operator++();
};

TConstSetBitIterator_006a00f0::TConstSetBitIterator_006a00f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x006a00f0
TConstSetBitIterator_006a00f0& TConstSetBitIterator_006a00f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_006a0140 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_006a0140(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_006a0140& operator++();
};

TConstSetBitIterator_006a0140::TConstSetBitIterator_006a0140(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x006a0140
TConstSetBitIterator_006a0140& TConstSetBitIterator_006a0140::operator++()
{
    It.Advance();
    return *this;
}

struct C {
    undefined4 sub_006a0ae0(byte);
};

int sub_0053dfa0(...);
int sub_0068b6f0(void);
// @baa 0x006a0ae0
undefined4 C::sub_006a0ae0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0068b6f0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_006a0b00 {
    undefined4 sub_006a0b00(byte);
};

int sub_0068b770(void);
// @baa 0x006a0b00
undefined4 C_006a0b00::sub_006a0b00(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0068b770();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_006a0b20 {
    undefined4 sub_006a0b20(byte);
};

int sub_0068b7f0(void);
// @baa 0x006a0b20
undefined4 C_006a0b20::sub_006a0b20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0068b7f0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_006a1aa0 {
    int sub_006a1aa0(undefined4);
    int sub_006a0d80(int);
};

// @baa 0x006a1aa0
int C_006a1aa0::sub_006a1aa0(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_006a1aa0 *)(this))->sub_006a0d80(param_2);
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  return param_1;
}

struct C_006a1bf0 {
    int sub_006a1bf0(undefined4);
    int sub_006a0e40(int);
};

// @baa 0x006a1bf0
int C_006a1bf0::sub_006a1bf0(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_006a1bf0 *)(this))->sub_006a0e40(param_2);
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  return param_1;
}

struct C_006a1d40 {
    int sub_006a1d40(undefined4);
    int sub_006a0f00(int);
};

// @baa 0x006a1d40
int C_006a1d40::sub_006a1d40(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_006a1d40 *)(this))->sub_006a0f00(param_2);
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  return param_1;
}

struct CA { int* sub_006a1e10(); };

struct CB { void sub_006a13a0(int a, int b); };

struct CC { void sub_0069d540(int a, int b, int c, int d, int e); };

struct V { virtual void vf(int* a, int b); };

// @baa 0x006a2850
void __stdcall sub_006a2850(int a1, int** a2, int a3, int* a4)
{
  if (*a4 == 0) {
    ((CB*)(a3 + 0x18))->sub_006a13a0(a1, *((CA*)a3)->sub_006a1e10());
    *a4 = 1;
  }
  for (int i = 0; i < ((*(unsigned int*)(a3 + 0x24) & 4) ? 2 : 1); i++) {
    ((CC*)(a3 + 0x18))->sub_0069d540(a1, *(int*)((char*)*a2 + 0xe8), (int)*a2, i, (int)(a2 + 1));
    ((V*)(a3 + 0x18))->vf((int*)*a2, a1);
  }
}

struct C_view {
    int sub_006a2260(int);
};

int sub_0053df70(...);
// @baa 0x006a2bc0
void UObject::sub_006a2bc0(void)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != 0) {
    param_1[2] = 0;
    if (*param_1 != 0) {
      iVar1 = sub_0053df70(*param_1,0,8);
      *param_1 = iVar1;
    }
  }
  ((C_view *)(((char *)this + 0xc)))->sub_006a2260(0);
  return;
}

struct C_view_006a3200 {
    int sub_006a2410(int);
};

// @baa 0x006a3200
void UObject::sub_006a3200(void)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != 0) {
    param_1[2] = 0;
    if (*param_1 != 0) {
      iVar1 = sub_0053df70(*param_1,0,8);
      *param_1 = iVar1;
    }
  }
  ((C_view_006a3200 *)(((char *)this + 0xc)))->sub_006a2410(0);
  return;
}

struct C_006a3840 {
    void sub_006a3840();
    int sub_006a25c0(int);
};

// @baa 0x006a3840
void C_006a3840::sub_006a3840(void)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != 0) {
    param_1[2] = 0;
    if (*param_1 != 0) {
      iVar1 = sub_0053df70(*param_1,0,8);
      *param_1 = iVar1;
    }
  }
  ((C_006a3840 *)(((char *)this + 0xc)))->sub_006a25c0(0);
  return;
}

struct C_006a44e0 { int sub_006a44e0(void); };

// @baa 0x006a44e0
int C_006a44e0::sub_006a44e0(void) { return *(int*)((char*)this + 16); }

struct C_006a48c0 {
    void sub_006a48c0();
};

int sub_00b01b80(...);
// @baa 0x006a48c0
void C_006a48c0::sub_006a48c0(void)
{
    int param_1 = (int)this;

  sub_00b01b80(*(undefined1 *)(param_1 + 0xf7),param_1 + 0x154,param_1 + 0x178,param_1 + 0x19c);
  return;
}

struct C_006a48f0 {
    void sub_006a48f0();
};

// @baa 0x006a48f0
void C_006a48f0::sub_006a48f0(void)
{
    int param_1 = (int)this;

  sub_00b01b80(*(undefined1 *)(param_1 + 0xf7),param_1 + 0x1c0,param_1 + 0x1e4,param_1 + 0x208);
  return;
}

struct C_006a4920 { int sub_006a4920(void); };

// @baa 0x006a4920
int C_006a4920::sub_006a4920(void) { return *(int*)((char*)this + 0); }

struct C_006a4930 { int sub_006a4930(void); };

// @baa 0x006a4930
int C_006a4930::sub_006a4930(void) { return *(int*)((char*)this + 0); }

struct C_006a4940 { int sub_006a4940(void); };

// @baa 0x006a4940
int C_006a4940::sub_006a4940(void) { return *(int*)((char*)this + 0); }

struct C_006a4950 { int sub_006a4950(void); };

// @baa 0x006a4950
int C_006a4950::sub_006a4950(void) { return *(int*)((char*)this + 0); }

struct C_006a4960 { int sub_006a4960(void); };

// @baa 0x006a4960
int C_006a4960::sub_006a4960(void) { return *(int*)((char*)this + 0); }

struct C_006a4970 { int sub_006a4970(void); };

// @baa 0x006a4970
int C_006a4970::sub_006a4970(void) { return *(int*)((char*)this + 0); }

struct C_006a4980 { int sub_006a4980(void); };

// @baa 0x006a4980
int C_006a4980::sub_006a4980(void) { return *(int*)((char*)this + 0); }

struct C_006a4990 { int sub_006a4990(void); };

// @baa 0x006a4990
int C_006a4990::sub_006a4990(void) { return *(int*)((char*)this + 0); }

struct C_006a49a0 { int sub_006a49a0(void); };

// @baa 0x006a49a0
int C_006a49a0::sub_006a49a0(void) { return *(int*)((char*)this + 0); }

struct C_006a49b0 { int sub_006a49b0(void); };

// @baa 0x006a49b0
int C_006a49b0::sub_006a49b0(void) { return *(int*)((char*)this + 0); }

struct C_006a49c0 { int sub_006a49c0(void); };

// @baa 0x006a49c0
int C_006a49c0::sub_006a49c0(void) { return *(int*)((char*)this + 0); }

struct C_006a49d0 { int sub_006a49d0(void); };

// @baa 0x006a49d0
int C_006a49d0::sub_006a49d0(void) { return *(int*)((char*)this + 0); }

struct C_006a49e0 { int sub_006a49e0(void); };

// @baa 0x006a49e0
int C_006a49e0::sub_006a49e0(void) { return *(int*)((char*)this + 0); }

struct C_006a49f0 { int sub_006a49f0(void); };

// @baa 0x006a49f0
int C_006a49f0::sub_006a49f0(void) { return *(int*)((char*)this + 0); }

struct C_006a4a00 { int sub_006a4a00(void); };

// @baa 0x006a4a00
int C_006a4a00::sub_006a4a00(void) { return *(int*)((char*)this + 0); }

struct C_006a4a10 { int sub_006a4a10(void); };

// @baa 0x006a4a10
int C_006a4a10::sub_006a4a10(void) { return *(int*)((char*)this + 0); }

struct C_006a4a20 { int sub_006a4a20(void); };

// @baa 0x006a4a20
int C_006a4a20::sub_006a4a20(void) { return *(int*)((char*)this + 0); }

struct S_006a5030 { int sub_006a4a30(); };

struct C_006a5030 { int a; C_006a5030(S_006a5030 *); };

// @baa 0x006a5030
C_006a5030::C_006a5030(S_006a5030 *s) : a(s->sub_006a4a30()) {}

struct S_006a5050 { int sub_006a4a90(); };

struct C_006a5050 { int a; C_006a5050(S_006a5050 *); };

// @baa 0x006a5050
C_006a5050::C_006a5050(S_006a5050 *s) : a(s->sub_006a4a90()) {}

struct S_006a5070 { int sub_006a4af0(); };

struct C_006a5070 { int a; C_006a5070(S_006a5070 *); };

// @baa 0x006a5070
C_006a5070::C_006a5070(S_006a5070 *s) : a(s->sub_006a4af0()) {}

struct S_006a5090 { int sub_006a4b50(); };

struct C_006a5090 { int a; C_006a5090(S_006a5090 *); };

// @baa 0x006a5090
C_006a5090::C_006a5090(S_006a5090 *s) : a(s->sub_006a4b50()) {}

struct S_006a50b0 { int sub_006a4bb0(); };

struct C_006a50b0 { int a; C_006a50b0(S_006a50b0 *); };

// @baa 0x006a50b0
C_006a50b0::C_006a50b0(S_006a50b0 *s) : a(s->sub_006a4bb0()) {}

struct S_006a50d0 { int sub_006a4c10(); };

struct C_006a50d0 { int a; C_006a50d0(S_006a50d0 *); };

// @baa 0x006a50d0
C_006a50d0::C_006a50d0(S_006a50d0 *s) : a(s->sub_006a4c10()) {}

struct S_006a50f0 { int sub_006a4c70(); };

struct C_006a50f0 { int a; C_006a50f0(S_006a50f0 *); };

// @baa 0x006a50f0
C_006a50f0::C_006a50f0(S_006a50f0 *s) : a(s->sub_006a4c70()) {}

struct S_006a5110 { int sub_006a4cd0(); };

struct C_006a5110 { int a; C_006a5110(S_006a5110 *); };

// @baa 0x006a5110
C_006a5110::C_006a5110(S_006a5110 *s) : a(s->sub_006a4cd0()) {}

struct S_006a5130 { int sub_006a4d30(); };

struct C_006a5130 { int a; C_006a5130(S_006a5130 *); };

// @baa 0x006a5130
C_006a5130::C_006a5130(S_006a5130 *s) : a(s->sub_006a4d30()) {}

struct S_006a5150 { int sub_006a4d90(); };

struct C_006a5150 { int a; C_006a5150(S_006a5150 *); };

// @baa 0x006a5150
C_006a5150::C_006a5150(S_006a5150 *s) : a(s->sub_006a4d90()) {}

struct S_006a5170 { int sub_006a4df0(); };

struct C_006a5170 { int a; C_006a5170(S_006a5170 *); };

// @baa 0x006a5170
C_006a5170::C_006a5170(S_006a5170 *s) : a(s->sub_006a4df0()) {}

struct S_006a5190 { int sub_006a4e50(); };

struct C_006a5190 { int a; C_006a5190(S_006a5190 *); };

// @baa 0x006a5190
C_006a5190::C_006a5190(S_006a5190 *s) : a(s->sub_006a4e50()) {}

struct S_006a51b0 { int sub_006a4eb0(); };

struct C_006a51b0 { int a; C_006a51b0(S_006a51b0 *); };

// @baa 0x006a51b0
C_006a51b0::C_006a51b0(S_006a51b0 *s) : a(s->sub_006a4eb0()) {}

struct S_006a51d0 { int sub_006a4f10(); };

struct C_006a51d0 { int a; C_006a51d0(S_006a51d0 *); };

// @baa 0x006a51d0
C_006a51d0::C_006a51d0(S_006a51d0 *s) : a(s->sub_006a4f10()) {}

struct S_006a51f0 { int sub_006a4f70(); };

struct C_006a51f0 { int a; C_006a51f0(S_006a51f0 *); };

// @baa 0x006a51f0
C_006a51f0::C_006a51f0(S_006a51f0 *s) : a(s->sub_006a4f70()) {}

struct S_006a5210 { int sub_006a4fd0(); };

struct C_006a5210 { int a; C_006a5210(S_006a5210 *); };

// @baa 0x006a5210
C_006a5210::C_006a5210(S_006a5210 *s) : a(s->sub_006a4fd0()) {}

struct C_006a55c0 {
    undefined4 sub_006a55c0(byte);
};

int sub_006a5550(void);
// @baa 0x006a55c0
undefined4 C_006a55c0::sub_006a55c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006a5550();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_0064ea50(void);
int sub_006a43a0(...);
extern undefined4 g_026aeebc;
// @baa 0x006a5650
int sub_006a5650(void)
{
  if (g_026aeebc == 0) {
    g_026aeebc = sub_006a43a0(L"Engine");
    sub_0064ea50();
  }
  return g_026aeebc;
}

// @baa 0x006a7b50
undefined2 sub_006a7b50(undefined2 param_1)
{
  return param_1;
}

// @baa 0x006a7b60
void sub_006a7b60(void) {  }

// @baa 0x006a7b70
float10 sub_006a7b70(double param_1)
{
  return (float10)param_1;
}

// @baa 0x006a7b90
bool sub_006a7b90(short param_1)
{
  return param_1 == 10;
}

struct C_006a7ba0 {
    uint sub_006a7ba0();
};

// @baa 0x006a7ba0
uint C_006a7ba0::sub_006a7ba0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x7fffffff;
}

struct C_006a7bb0 { int sub_006a7bb0(void); };

// @baa 0x006a7bb0
int C_006a7bb0::sub_006a7bb0(void) { return *(int*)((char*)this + 116); }

struct C_006a7bc0 { int sub_006a7bc0(void); };

// @baa 0x006a7bc0
int C_006a7bc0::sub_006a7bc0(void) { return *(int*)((char*)this + 56); }

struct C_006a7bd0 { int sub_006a7bd0(void); };

// @baa 0x006a7bd0
int C_006a7bd0::sub_006a7bd0(void) { return *(int*)((char*)this + 40); }

struct C_006a7be0 { int sub_006a7be0(void); };

// @baa 0x006a7be0
int C_006a7be0::sub_006a7be0(void) { return *(int*)((char*)this + 44); }

struct C_006a7bf0 { int sub_006a7bf0(void); };

// @baa 0x006a7bf0
int C_006a7bf0::sub_006a7bf0(void) { return *(int*)((char*)this + 48); }

struct C_006a7c00 { int sub_006a7c00(void); };

// @baa 0x006a7c00
int C_006a7c00::sub_006a7c00(void) { return *(int*)((char*)this + 64); }

struct C_006a7c10 { int sub_006a7c10(void); };

// @baa 0x006a7c10
int C_006a7c10::sub_006a7c10(void) { return *(int*)((char*)this + 68); }

extern char g_01e72a60[];
struct C_006a7c20 { void sub_006a7c20(void); };

// @baa 0x006a7c20
void C_006a7c20::sub_006a7c20(void) { *(int*)((char*)this + 0) = (int)g_01e72a60; }

// @baa 0x006a7c30
int sub_006a7c30(unsigned short arg1)
{
  return arg1;
}

struct C_006a7c40 { int a; C_006a7c40(int); };

// @baa 0x006a7c40
C_006a7c40::C_006a7c40(int x) : a(x) {}

struct C_006a7d60 { C_006a7d60* sub_006a7d60(void); };

// @baa 0x006a7d60
C_006a7d60* C_006a7d60::sub_006a7d60(void) { return this; }

struct C_006a7d90 {
    int sub_006a7d90();
};

// @baa 0x006a7d90
int C_006a7d90::sub_006a7d90(void)
{
    int * param_1 = (int *)this;

  return param_1[2] - *param_1;
}

struct C_006a7dd0 {
    undefined4 sub_006a7dd0(float *);
};

// @baa 0x006a7dd0
undefined4 C_006a7dd0::sub_006a7dd0(float * param_2)
{
    float * param_1 = (float *)this;
  if (((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) {
    return 0;
  }
  return 1;
}

struct C_006a7e80 { C_006a7e80* sub_006a7e80(void); };

// @baa 0x006a7e80
C_006a7e80* C_006a7e80::sub_006a7e80(void) { return this; }

extern float g_02686258;
struct C_006a8300 {
    float sub_006a8300();
};

// @baa 0x006a8300
float C_006a8300::sub_006a8300()
{
    return *reinterpret_cast<float *>(this) * g_02686258;
}

extern undefined4 g_01ecdfb4;
// @baa 0x006a89f0
undefined4 sub_006a89f0(int param_1)
{
  return (&g_01ecdfb4)[param_1];
}

struct C_006a8a00 { C_006a8a00* sub_006a8a00(void); };

// @baa 0x006a8a00
C_006a8a00* C_006a8a00::sub_006a8a00(void) { return this; }

struct C_006a8a10 {
    void sub_006a8a10(undefined1 *);
};

// @baa 0x006a8a10
void C_006a8a10::sub_006a8a10(undefined1 * param_2)
{
    undefined1 * param_1 = (undefined1 *)this;

  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  return;
}

extern char g_01ecdfc8[];
struct C_006a8a50 { void sub_006a8a50(void); };

// @baa 0x006a8a50
void C_006a8a50::sub_006a8a50(void) { *(int*)((char*)this + 0) = (int)g_01ecdfc8; }

struct C_006a8a60 {
    undefined4 * sub_006a8a60(byte);
};

// @baa 0x006a8a60
undefined4 * C_006a8a60::sub_006a8a60(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ecdfc8);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x006a8a80
void sub_006a8a80(void) {  }

struct C_006a8a90 { char* sub_006a8a90(void); };

// @baa 0x006a8a90
char* C_006a8a90::sub_006a8a90(void) { return (char*)this + 4; }

struct C_006a8aa0 { void sub_006a8aa0(int a0); };

// @baa 0x006a8aa0
void C_006a8aa0::sub_006a8aa0(int a0) { *(int*)((char*)this + 156) = a0; }

struct C_006a8ab0 { char* sub_006a8ab0(void); };

// @baa 0x006a8ab0
char* C_006a8ab0::sub_006a8ab0(void) { return (char*)this + 112; }

struct C_006a8ac0 { char* sub_006a8ac0(void); };

// @baa 0x006a8ac0
char* C_006a8ac0::sub_006a8ac0(void) { return (char*)this + 124; }

struct C_006a8ad0 { char* sub_006a8ad0(void); };

// @baa 0x006a8ad0
char* C_006a8ad0::sub_006a8ad0(void) { return (char*)this + 84; }

struct C_006a8ae0 {
    void sub_006a8ae0(undefined4 *);
};

// @baa 0x006a8ae0
void C_006a8ae0::sub_006a8ae0(undefined4 * param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x54) = *param_2;
  return;
}

struct C_006a8af0 { int sub_006a8af0(void); };

// @baa 0x006a8af0
int C_006a8af0::sub_006a8af0(void) { return *(int*)((char*)this + 156); }

struct C_006a8b00 { void sub_006a8b00(void); };

// @baa 0x006a8b00
void C_006a8b00::sub_006a8b00(void) { *(int*)((char*)this + 168) = 0; }

extern char g_01ecdfdc[];
struct C_006a8b10 { void sub_006a8b10(void); };

// @baa 0x006a8b10
void C_006a8b10::sub_006a8b10(void) { *(int*)((char*)this + 0) = (int)g_01ecdfdc; }

struct C_006a8b20 {
    undefined4 * sub_006a8b20(byte);
};

// @baa 0x006a8b20
undefined4 * C_006a8b20::sub_006a8b20(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ecdfdc);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_006a8b40 { C_006a8b40* sub_006a8b40(void); };

// @baa 0x006a8b40
C_006a8b40* C_006a8b40::sub_006a8b40(void) { *(int*)((char*)this + 0) = (int)g_01ecdfdc; return this; }

struct C_006a8b50 { void sub_006a8b50(int a0); };

// @baa 0x006a8b50
void C_006a8b50::sub_006a8b50(int a0) { *(int*)((char*)this + 180) = a0; }

struct C_006a8b90 { char* sub_006a8b90(void); };

// @baa 0x006a8b90
char* C_006a8b90::sub_006a8b90(void) { return (char*)this + 56; }

struct C_006a8ba0 { int sub_006a8ba0(void); };

// @baa 0x006a8ba0
int C_006a8ba0::sub_006a8ba0(void) { return *(int*)((char*)this + 52); }

struct C_006a8bd0 {
    undefined4 * sub_006a8bd0(undefined4);
    int sub_00739650(int);
};

extern undefined4 g_01ecdff0;
extern undefined * g_01ecdff8;
// @baa 0x006a8bd0
undefined4 * C_006a8bd0::sub_006a8bd0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_006a8bd0 *)(this))->sub_00739650(param_2);
  *param_1 = (undefined4)(&g_01ecdff8);
  param_1[5] = (undefined4)(&g_01ecdff0);
  return param_1;
}

// @baa 0x006a8bf0
undefined4 sub_006a8bf0(void)
{
  return 1;
}

void sub_007249d0();
// @baa 0x006a8c00
void sub_006a8c00(void) { sub_007249d0(); }

struct C_view_006a8c90 {
    int sub_0073f030(int);
};

int sub_00716170(...);
// @baa 0x006a8c90
undefined4 UMorphWeightSequence::sub_006a8c90(undefined4 param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = ((C_view_006a8c90 *)(this))->sub_0073f030(param_2);
  sub_00716170(param_2,param_1 + 0x4c);
  return uVar1;
}

// @baa 0x006a8cc0
int sub_006a8cc0(void) { return 1; }

// @baa 0x006a8cd0
void sub_006a8cd0(void) { sub_007249d0(); }

// @baa 0x006a8ce0
int sub_006a8ce0(void) { return 1; }

struct C_006a8cf0 {
    undefined4 * sub_006a8cf0(undefined4);
    int sub_00739650(int);
};

extern undefined4 g_01ece064;
extern undefined * g_01ece06c;
// @baa 0x006a8cf0
undefined4 * C_006a8cf0::sub_006a8cf0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_006a8cf0 *)(this))->sub_00739650(param_2);
  *param_1 = (undefined4)(&g_01ece06c);
  param_1[5] = (undefined4)(&g_01ece064);
  return param_1;
}

struct S6a8d10
{
    void sub_007249d0();
    void sub_006a8d10();
};

// @baa 0x006a8d10
void S6a8d10::sub_006a8d10()
{
    sub_007249d0();
}

// @baa 0x006aa2f0
int sub_006aa2f0(void) { return 1690; }

void sub_006efb40();
// @baa 0x006aa300
void sub_006aa300(void) { sub_006efb40(); }

// @baa 0x006aa570
int UDrawLightRadiusComponent::vf_000(void) { return 1; }

// @baa 0x006aa580
bool UDrawLightRadiusComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x006aa950
int sub_006aa950(void) { return 1690; }

// @baa 0x006aa960
void sub_006aa960(void) { sub_006efb40(); }

// @baa 0x006aaa50
void sub_006aaa50(void) {  }

// @baa 0x006aaa60
void sub_006aaa60(void) {  }

struct C_006aab30 {
    uint sub_006aab30();
};

// @baa 0x006aab30
uint C_006aab30::sub_006aab30(void)
{
    uint * param_1 = (uint *)this;

  return *param_1 >> 3 & 1;
}

struct C_006aab40 { C_006aab40* sub_006aab40(void); };

// @baa 0x006aab40
C_006aab40* C_006aab40::sub_006aab40(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x006aaf10
int sub_006aaf10(int a0, int a1) { return a1; }

// @baa 0x006aaf20
int sub_006aaf20(int a0, int a1) { return a1; }

// @baa 0x006aaf30
int sub_006aaf30(int a0, int a1) { return a1; }

// @baa 0x006aaf40
int sub_006aaf40(int a0, int a1) { return a1; }

// @baa 0x006aaf50
int sub_006aaf50(int a0, int a1) { return a1; }

// @baa 0x006aaf60
int sub_006aaf60(int a0, int a1) { return a1; }

// @baa 0x006aaf70
int sub_006aaf70(int a0, int a1) { return a1; }

// @baa 0x006aaf80
int sub_006aaf80(int a0, int a1) { return a1; }

// @baa 0x006aaf90
int sub_006aaf90(int a0, int a1) { return a1; }

// @baa 0x006aafa0
int sub_006aafa0(int a0, int a1) { return a1; }

int sub_00c34500(...);
int sub_00c3b6d0(void);
extern undefined4 g_026c09f8;
// @baa 0x006aafb0
int sub_006aafb0(void)
{
  if (g_026c09f8 == 0) {
    g_026c09f8 = sub_00c34500(L"Engine");
    sub_00c3b6d0();
  }
  return g_026c09f8;
}

int sub_00c35700(...);
int sub_00c3c7e0(void);
extern undefined4 g_026c0a58;
// @baa 0x006aafe0
int sub_006aafe0(void)
{
  if (g_026c0a58 == 0) {
    g_026c0a58 = sub_00c35700(L"Engine");
    sub_00c3c7e0();
  }
  return g_026c0a58;
}

int sub_00c3e190(void);
int sub_00c41c50(...);
extern undefined4 g_026c0aa8;
// @baa 0x006ab010
int sub_006ab010(void)
{
  if (g_026c0aa8 == 0) {
    g_026c0aa8 = sub_00c41c50(L"Engine");
    sub_00c3e190();
  }
  return g_026c0aa8;
}

int sub_00c360c0(...);
int sub_00c41b00(void);
extern undefined4 g_026c0a90;
// @baa 0x006ab040
int sub_006ab040(void)
{
  if (g_026c0a90 == 0) {
    g_026c0a90 = sub_00c360c0(L"Engine");
    sub_00c41b00();
  }
  return g_026c0a90;
}

int sub_00c34680(...);
int sub_00c3b970(void);
extern undefined4 g_026c0a00;
// @baa 0x006ab070
int sub_006ab070(void)
{
  if (g_026c0a00 == 0) {
    g_026c0a00 = sub_00c34680(L"Engine");
    sub_00c3b970();
  }
  return g_026c0a00;
}

int sub_00c34800(...);
int sub_00c41320(void);
extern undefined4 g_026c0a08;
// @baa 0x006ab0a0
int sub_006ab0a0(void)
{
  if (g_026c0a08 == 0) {
    g_026c0a08 = sub_00c34800(L"Engine");
    sub_00c41320();
  }
  return g_026c0a08;
}

int sub_00c33180(...);
int sub_00c40f30(void);
extern undefined4 g_026c0990;
// @baa 0x006ab0d0
int sub_006ab0d0(void)
{
  if (g_026c0990 == 0) {
    g_026c0990 = sub_00c33180(L"Engine");
    sub_00c40f30();
  }
  return g_026c0990;
}

int sub_00c348c0(...);
int sub_00c41470(void);
extern undefined4 g_026c0a0c;
// @baa 0x006ab100
int sub_006ab100(void)
{
  if (g_026c0a0c == 0) {
    g_026c0a0c = sub_00c348c0(L"Engine");
    sub_00c41470();
  }
  return g_026c0a0c;
}

int sub_00c34740(...);
int sub_00c411d0(void);
extern undefined4 g_026c0a04;
// @baa 0x006ab130
int sub_006ab130(void)
{
  if (g_026c0a04 == 0) {
    g_026c0a04 = sub_00c34740(L"Engine");
    sub_00c411d0();
  }
  return g_026c0a04;
}

int sub_00c35b80(...);
int sub_00c3cfc0(void);
extern undefined4 g_026c0a70;
// @baa 0x006ab160
int sub_006ab160(void)
{
  if (g_026c0a70 == 0) {
    g_026c0a70 = sub_00c35b80(L"Engine");
    sub_00c3cfc0();
  }
  return g_026c0a70;
}

int sub_00c32b80(...);
int sub_00c38cd0(void);
extern undefined4 g_026c0970;
// @baa 0x006ab190
int sub_006ab190(void)
{
  if (g_026c0970 == 0) {
    g_026c0970 = sub_00c32b80(L"Engine");
    sub_00c38cd0();
  }
  return g_026c0970;
}

int sub_00c34380(...);
int sub_00c41080(void);
extern undefined4 g_026c09f0;
// @baa 0x006ab1c0
int sub_006ab1c0(void)
{
  if (g_026c09f0 == 0) {
    g_026c09f0 = sub_00c34380(L"Engine");
    sub_00c41080();
  }
  return g_026c09f0;
}

int sub_00c34c80(...);
int sub_00c41860(void);
extern undefined4 g_026c0a20;
// @baa 0x006ab1f0
int sub_006ab1f0(void)
{
  if (g_026c0a20 == 0) {
    g_026c0a20 = sub_00c34c80(L"Engine");
    sub_00c41860();
  }
  return g_026c0a20;
}

// @baa 0x006ab220
int sub_006ab220(int a0, int a1) { return a1; }

// @baa 0x006ab340
int AFogVolumeDensityInfo::vf_000(void) { return 1; }

// @baa 0x006ab350
bool AFogVolumeDensityInfo::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_view_006ab390 {
    int sub_005dfd20(int);
};

// @baa 0x006ab390
void AFogVolumeDensityInfo::Serialize(FArchive& Ar) {
    UINT param_2 = (UINT)&Ar;
    int param_1 = (int)this;
  ((C_view_006ab390 *)(this))->sub_005dfd20(param_2);
  if (*(int *)(param_2 + 4) < 0x215) {
    *(undefined4 *)(param_1 + 0x1ac) = 0;
  }
  return;
}

struct C_006ab550 {
    int sub_006ab550();
};

// @baa 0x006ab550
int C_006ab550::sub_006ab550(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x4c);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x50);
  }
  return iVar1;
}

// @baa 0x006ab560
int AFogVolumeConstantDensityInfo::vf_000(void) { return 1; }

// @baa 0x006ab570
int UFogVolumeConstantDensityComponent::vf_000(void) { return 1; }

// @baa 0x006ab630
int AFogVolumeLinearHalfspaceDensityInfo::vf_000(void) { return 1; }

// @baa 0x006ab640
int UFogVolumeLinearHalfspaceDensityComponent::vf_000(void) { return 1; }

// @baa 0x006ab7d0
int AFogVolumeSphericalDensityInfo::vf_000(void) { return 1; }

// @baa 0x006ab7e0
int UFogVolumeSphericalDensityComponent::vf_000(void) { return 1; }

// @baa 0x006ab8f0
int AFogVolumeConeDensityInfo::vf_000(void) { return 1; }

// @baa 0x006ab900
int UFogVolumeConeDensityComponent::vf_000(void) { return 1; }

// @baa 0x006abaa0
int UFogVolumeConeDensityComponent::sub_006abaa0(void) { return *(int*)((char*)this + 8); }

struct C_006abab0 { C_006abab0* sub_006abab0(void); };

// @baa 0x006abab0
C_006abab0* C_006abab0::sub_006abab0(void) { *(int*)((char*)this + 4) = 0; return this; }

struct C_006abac0 { C_006abac0* sub_006abac0(void); };

// @baa 0x006abac0
C_006abac0* C_006abac0::sub_006abac0(void) { *(int*)((char*)this + 0) = 0; return this; }

int sub_00c44850(void);
// @baa 0x006abad0
undefined4 UFogVolumeConeDensityComponent::sub_006abad0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c44850();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_006abaf0 {
    undefined4 sub_006abaf0();
};

// @baa 0x006abaf0
undefined4 C_006abaf0::sub_006abaf0(void)
{
    int param_1 = (int)this;

  if ((*(int *)(param_1 + 0x4c) != 0) && (*(int *)(param_1 + 0xb8) != 0)) {
    return 1;
  }
  return 0;
}

extern int g_01ece454;
// A small two-dword value struct used by DecalComponent.cpp.
struct FDecalValue
{
    FDecalValue* sub_006abb10(int* Src);
    int Value;  // 0x0
    int Unk04;  // 0x4
};

// @baa 0x006abb10
FDecalValue* FDecalValue::sub_006abb10(int* Src)
{
    Value = (int)&g_01ece454;
    Unk04 = *Src;
    return this;
}

extern char g_01ec37cc[];
// @baa 0x006abb30
int sub_006abb30(void) { return (int)g_01ec37cc; }

extern char g_01ec37f8[];
// @baa 0x006abb60
int sub_006abb60(void) { return (int)g_01ec37f8; }

extern char g_01ebb554[];
// @baa 0x006abb70
void UFogVolumeConeDensityComponent::sub_006abb70(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

// @baa 0x006abb80
void UFogVolumeConeDensityComponent::sub_006abb80(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

// @baa 0x006abb90
undefined4 * UFogVolumeConeDensityComponent::sub_006abb90(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x006abbb0
undefined4 * UFogVolumeConeDensityComponent::sub_006abbb0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_006abbd0 { void sub_006abbd0(void); };

// @baa 0x006abbd0
void C_006abbd0::sub_006abbd0(void) { *(int*)((char*)this + 216) = 1; }

// @baa 0x006abc10
int sub_006abc10(void) { return 1; }

// @baa 0x006abc40
undefined4 UFogVolumeConeDensityComponent::sub_006abc40(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(*(int *)(param_1 + 8) + 0xb8) = *(undefined4 *)(param_1 + 4);
  return 0xc;
}

extern char g_01ec3d44[];
// @baa 0x006abc60
int sub_006abc60(void) { return (int)g_01ec3d44; }

extern char g_01ec3d64[];
// @baa 0x006abc70
int sub_006abc70(void) { return (int)g_01ec3d64; }

// @baa 0x006abc80
void UFogVolumeConeDensityComponent::sub_006abc80(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

// @baa 0x006abc90
undefined4 * UFogVolumeConeDensityComponent::sub_006abc90(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_01ec4294[];
// @baa 0x006abcd0
int sub_006abcd0(void) { return (int)g_01ec4294; }

extern int g_01ece484;
// A small two-dword value struct used by DecalComponent.cpp.
struct FDecalValue_006abce0
{
    FDecalValue_006abce0* sub_006abce0(int* Src);
    int Value;  // 0x0
    int Unk04;  // 0x4
};

// @baa 0x006abce0
FDecalValue_006abce0* FDecalValue_006abce0::sub_006abce0(int* Src)
{
    Value = (int)&g_01ece484;
    Unk04 = *Src;
    return this;
}

extern char g_01ec42c0[];
// @baa 0x006abd20
int sub_006abd20(void) { return (int)g_01ec42c0; }

// @baa 0x006abd30
void UFogVolumeConeDensityComponent::sub_006abd30(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

// @baa 0x006abd40
void UFogVolumeConeDensityComponent::sub_006abd40(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

// @baa 0x006abd50
undefined4 * UFogVolumeConeDensityComponent::sub_006abd50(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x006abd70
undefined4 * UFogVolumeConeDensityComponent::sub_006abd70(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x006abe80
int UFogVolumeConeDensityComponent::sub_006abe80(void) { return *(int*)((char*)this + 60); }

// @baa 0x006abe90
int UFogVolumeConeDensityComponent::sub_006abe90(void) { return *(int*)((char*)this + 64); }

// @baa 0x006abec0
undefined4 UFogVolumeConeDensityComponent::sub_006abec0(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(*(int *)(param_1 + 4) + 0x6c) = *(undefined4 *)(param_1 + 8);
  return 0xc;
}

extern char g_01ec45a4[];
// @baa 0x006abed0
int sub_006abed0(void) { return (int)g_01ec45a4; }

// @baa 0x006abee0
void UFogVolumeConeDensityComponent::sub_006abee0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

// @baa 0x006abef0
undefined4 * UFogVolumeConeDensityComponent::sub_006abef0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00c971f0(...);
// @baa 0x006abf10
void sub_006abf10(void)
{
  sub_00c971f0(1,2);
  return;
}

// @baa 0x006abf20
void UFogVolumeConeDensityComponent::sub_006abf20(int a0) { *(int*)((char*)this + 84) = a0; }

// @baa 0x006abf30
void UFogVolumeConeDensityComponent::sub_006abf30(int a0) { *(int*)((char*)this + 88) = a0; }

extern char g_01ec484c[];
// @baa 0x006abf60
int sub_006abf60(void) { return (int)g_01ec484c; }

// @baa 0x006abf70
void UFogVolumeConeDensityComponent::sub_006abf70(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

// @baa 0x006abf80
undefined4 * UFogVolumeConeDensityComponent::sub_006abf80(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_006abfa0 { int sub_006abfa0(void); };

// @baa 0x006abfa0
int C_006abfa0::sub_006abfa0(void) { return *(int*)((char*)this + 224); }

// @baa 0x006abfe0
int UFogVolumeConeDensityComponent::sub_006abfe0(void) { return *(int*)((char*)this + 132); }

extern char g_01ec4c0c[];
// @baa 0x006ac020
int sub_006ac020(void) { return (int)g_01ec4c0c; }

// @baa 0x006ac030
void UFogVolumeConeDensityComponent::sub_006ac030(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

// @baa 0x006ac040
undefined4 * UFogVolumeConeDensityComponent::sub_006ac040(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_01ec4fc4[];
// @baa 0x006ac080
int sub_006ac080(void) { return (int)g_01ec4fc4; }

// @baa 0x006ac090
void UFogVolumeConeDensityComponent::sub_006ac090(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

// @baa 0x006ac0a0
undefined4 * UFogVolumeConeDensityComponent::sub_006ac0a0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x006ac0c0
void __stdcall sub_006ac0c0(int a0, int a1) {  }

// @baa 0x006ac260
void UFogVolumeConeDensityComponent::sub_006ac260(undefined4 param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 100) = 1;
  *(undefined4 *)(param_1 + 0x68) = param_2;
  return;
}

extern int g_01ece4c0;
// A small two-dword value struct used by DecalComponent.cpp.
struct FDecalValue_006ac280
{
    FDecalValue_006ac280* sub_006ac280(int* Src);
    int Value;  // 0x0
    int Unk04;  // 0x4
};

// @baa 0x006ac280
FDecalValue_006ac280* FDecalValue_006ac280::sub_006ac280(int* Src)
{
    Value = (int)&g_01ece4c0;
    Unk04 = *Src;
    return this;
}

extern char g_01ec5f84[];
// @baa 0x006ac2a0
int sub_006ac2a0(void) { return (int)g_01ec5f84; }

// @baa 0x006ac2b0
void UFogVolumeConeDensityComponent::sub_006ac2b0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

// @baa 0x006ac2c0
undefined4 * UFogVolumeConeDensityComponent::sub_006ac2c0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_01ec636c[];
// @baa 0x006ac2e0
int sub_006ac2e0(void) { return (int)g_01ec636c; }

// @baa 0x006ac320
void sub_006ac320(void) {  }

// @baa 0x006ac370
void __stdcall sub_006ac370(int a0) {  }

// @baa 0x006ac380
void sub_006ac380(void) {  }

struct C_006ac410 { void sub_006ac410(void); };

// @baa 0x006ac410
void C_006ac410::sub_006ac410(void) { *(int*)((char*)this + 8) = 0; }

struct C_006ac4a0 {
    void sub_006ac4a0(undefined4);
};

int sub_006311e0(...);
int sub_00cbc3e0(...);
extern undefined4 g_01ec6b98;
// @baa 0x006ac4a0
void C_006ac4a0::sub_006ac4a0(undefined4 param_2)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    sub_006311e0("bInitializedMovieRendering",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\engine\\src\\../Bink/Src/FullScreenMovieBink.inl"
                 ,0xbf3,&g_01ec6b98);
  }
  sub_00cbc3e0(*(undefined4 *)(param_1 + 0x14),param_2);
  return;
}

// @baa 0x006ac750
void __stdcall sub_006ac750(int a0) {  }

struct C_006ac7a0 {
    void sub_006ac7a0();
};

// @baa 0x006ac7a0
void C_006ac7a0::sub_006ac7a0(void)
{
    int * param_1 = (int *)this;

  if (*param_1 == 0) {
    *param_1 = 1;
  }
  return;
}

struct C_006ac7b0 {
    void sub_006ac7b0();
};

// @baa 0x006ac7b0
void C_006ac7b0::sub_006ac7b0(void)
{
    int * param_1 = (int *)this;

  if (*param_1 != 0) {
    *param_1 = 0;
  }
  return;
}

// @baa 0x006ac7c0
void __stdcall sub_006ac7c0(int a0) {  }

// @baa 0x006ac7d0
int sub_006ac7d0(void) { return 0; }

// @baa 0x006ac7e0
void __stdcall sub_006ac7e0(int a0, int a1, int a2) {  }

// @baa 0x006ac7f0
void __stdcall sub_006ac7f0(int a0, int a1, int a2) {  }

// @baa 0x006ac800
void sub_006ac800(void) {  }

// @baa 0x006ac810
int __stdcall sub_006ac810(int a0) { return 1; }

// @baa 0x006ac820
int __stdcall sub_006ac820(int a0) { return 0; }

// @baa 0x006ac830
void sub_006ac830(void) {  }

// @baa 0x006ac840
int sub_006ac840(void) { return 0; }

// @baa 0x006ac850
void sub_006ac850(void) {  }

// @baa 0x006ac860
void __stdcall sub_006ac860(int a0) {  }

struct C_006ac8a0 { void sub_006ac8a0(void); };

// @baa 0x006ac8a0
void C_006ac8a0::sub_006ac8a0(void) { *(int*)((char*)this + 0) = (int)g_01e72a60; }

struct C_006ac8f0 { C_006ac8f0* sub_006ac8f0(void); };

// @baa 0x006ac8f0
C_006ac8f0* C_006ac8f0::sub_006ac8f0(void) { *(int*)((char*)this + 0) = (int)g_01ecdfc8; return this; }

struct C_006ac900 { void sub_006ac900(void); };

// @baa 0x006ac900
void C_006ac900::sub_006ac900(void) { *(int*)((char*)this + 0) = (int)g_01ecdfc8; }

int sub_00765d00(void);
// @baa 0x006acc00
void UHeightFogComponent::SetEnabled(uint param_2)
{
    int param_1 = (int)this;

  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x4c);
  if ((uVar1 & 1) != param_2) {
    *(uint *)(param_1 + 0x4c) = (uVar1 ^ param_2) & 1 ^ uVar1;
    sub_00765d00();
  }
  return;
}

// @baa 0x006acc30
uint sub_006acc30(int param_1)
{
  return *(uint *)(param_1 + 0x54) >> 0x13 & 1;
}

// @baa 0x006accb0
uint sub_006accb0(int param_1)
{
  return *(uint *)(param_1 + 0x54) >> 4 & 1;
}

// @baa 0x006ad6d0
int ULightEnvironmentComponent::vf_000(void) { return 1; }

// @baa 0x006ad6e0
bool ULightEnvironmentComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x006ad770
uint ULightEnvironmentComponent::sub_006ad770(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x4c) & 1;
}

// @baa 0x006ad7c0
void sub_006ad7c0(void)
{
  return;
}

struct C_006ad7f0 { void sub_006ad7f0(void); };

// @baa 0x006ad7f0
void C_006ad7f0::sub_006ad7f0(void) { *(int*)((char*)this + 0) = (int)g_01ecdfc8; }

struct C_006ad800 {
    undefined4 * sub_006ad800(byte);
};

// @baa 0x006ad800
undefined4 * C_006ad800::sub_006ad800(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ecdfc8);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_01ec9514[];
// @baa 0x006adaf0
int sub_006adaf0(void) { return (int)g_01ec9514; }

struct C_006adb00 { void sub_006adb00(void); };

// @baa 0x006adb00
void C_006adb00::sub_006adb00(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_006adb10 {
    undefined4 * sub_006adb10(byte);
};

// @baa 0x006adb10
undefined4 * C_006adb10::sub_006adb10(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_0053df40(...);
extern undefined * g_01ece4cc;
// @baa 0x006adb30
undefined4 * sub_006adb30(void)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0053df40(0x10,8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (undefined4)(&g_01ece4cc);
    *(undefined2 *)(puVar1 + 2) = 0;
    *(undefined2 *)((int)puVar1 + 0xe) = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// @baa 0x006adb60
undefined4 * sub_006adb60(void)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0053df40(0x10,8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (undefined4)(&g_01ece4cc);
    *(undefined2 *)(puVar1 + 2) = 0;
    *(undefined2 *)((int)puVar1 + 0xe) = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

struct C_006adbc0 {
    void sub_006adbc0(undefined4);
};

// @baa 0x006adbc0
void C_006adbc0::sub_006adbc0(undefined4 param_2)
{
    int param_1 = (int)this;

  sub_00716170(param_2,param_1 + 4);
  sub_00716170(param_2,param_1 + 10);
  return;
}

// @baa 0x006adbf0
void __stdcall sub_006adbf0(int a0, int a1, int a2) {  }

// @baa 0x006ae910
void __stdcall sub_006ae910(int a0) {  }

struct C_006ae920 {
    int * sub_006ae920(int);
};

int sub_00715880(void);
extern undefined2 g_01e3f3dc;
// @baa 0x006ae920
int * C_006ae920::sub_006ae920(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  *param_1 = param_2;
  if ((*(byte *)(param_2 + 0x48) & 4) != 0) {
    sub_006311e0("!Material->ReentrantFlag","Engine/Inc\\MaterialInstance.h",0x1a,&g_01e3f3dc);
  }
  iVar1 = sub_00715880();
  if (iVar1 == 0) {
    sub_006311e0("IsInGameThread() && \"GetMaterial() is probably being called from the RenderThread.  You need to cache the value you need on the Proxy object\""
                 ,"Engine/Inc\\MaterialInstance.h",0x1c,&g_01e3f3dc);
  }
  *(uint *)(*param_1 + 0x48) = *(uint *)(*param_1 + 0x48) | 4;
  return param_1;
}

struct C_006ae980 {
    void sub_006ae980();
};

// @baa 0x006ae980
void C_006ae980::sub_006ae980(void)
{
    int * param_1 = (int *)this;

  *(uint *)(*param_1 + 0x48) = *(uint *)(*param_1 + 0x48) & 0xfffffffb;
  return;
}

struct C_006af030 { int sub_006af030(void); };

// @baa 0x006af030
int C_006af030::sub_006af030(void) { return *(int*)((char*)this + 4); }

struct C_006af040 { int a, b, c; C_006af040(); };

// @baa 0x006af040
C_006af040::C_006af040() : a(0), b(0), c(0) {}

struct C_006af050 { int a, b, c; C_006af050(); };

// @baa 0x006af050
C_006af050::C_006af050() : a(0), b(0), c(0) {}

struct C_006af060 { int sub_006af060(void); };

// @baa 0x006af060
int C_006af060::sub_006af060(void) { return *(int*)((char*)this + 4); }

struct C_006af070 { int a, b, c; C_006af070(); };

// @baa 0x006af070
C_006af070::C_006af070() : a(0), b(0), c(0) {}

struct C_006af080 { int sub_006af080(void); };

// @baa 0x006af080
int C_006af080::sub_006af080(void) { return *(int*)((char*)this + 4); }

struct C_006ac330
{
    float First;
    float Second;

    void sub_006ac330();
};

// @baa 0x006ac330
void C_006ac330::sub_006ac330()
{
    First = 0.0f;
    Second = 0.0f;
}

struct Sub_006ae060
{
	int Field_0;
	int Field_4;
	int Field_8;

	Sub_006ae060* sub_006ae060(int A, int B);
};

int sub_006ae07c(Sub_006ae060* S)
{
	return S->sub_006ae060(0, 0)->Field_0;
}

struct S006af090
{
    int f0;
    S006af090* sub_006af090(int Arg1, int Arg2);
};

// @baa 0x006af090
S006af090* S006af090::sub_006af090(int Arg1, int Arg2)
{
    f0 = Arg1;
    if (Arg1 != 0 && Arg2 != 0)
    {
        int* P = (int*)(Arg1 + 4);
        *P = *P + 1;
    }
    return this;
}

// FHolder_006a44f0: the block at +0xac0 inside the object this interface returns.
struct FHolder_006a44f0
{
	virtual void* GetBase();

	char* GetBlock();
};

// @baa 0x006a44f0
char* FHolder_006a44f0::GetBlock()
{
	return (char*)GetBase() + 0xac0;
}
