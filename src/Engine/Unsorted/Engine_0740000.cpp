// Engine_0740000.cpp: 73 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C {
    undefined4 * sub_00740250(int);
    int sub_0069c7f0(int);
};

extern undefined4 g_01ef0450;
// @baa 0x00740250
undefined4 * C::sub_00740250(int param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C *)(this))->sub_0069c7f0(param_2);
  *param_1 = (undefined4)(&g_01ef0450);
  param_1[5] = *(undefined4 *)(param_2 + 0x14);
  param_1[6] = *(undefined4 *)(param_2 + 0x18);
  param_1[7] = *(undefined4 *)(param_2 + 0x1c);
  return param_1;
}

struct C_00740280 {
    undefined4 * sub_00740280(int);
    int sub_0069c7f0(int);
};

extern undefined4 g_01ef0454;
// @baa 0x00740280
undefined4 * C_00740280::sub_00740280(int param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00740280 *)(this))->sub_0069c7f0(param_2);
  *param_1 = (undefined4)(&g_01ef0454);
  param_1[5] = *(undefined4 *)(param_2 + 0x14);
  param_1[6] = *(undefined4 *)(param_2 + 0x18);
  param_1[7] = *(undefined4 *)(param_2 + 0x1c);
  param_1[8] = *(undefined4 *)(param_2 + 0x20);
  return param_1;
}

struct C_007402c0 {
    undefined4 * sub_007402c0(int);
    int sub_0069c7f0(int);
};

extern undefined4 g_01ef0458;
// @baa 0x007402c0
undefined4 * C_007402c0::sub_007402c0(int param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_007402c0 *)(this))->sub_0069c7f0(param_2);
  *param_1 = (undefined4)(&g_01ef0458);
  param_1[5] = *(undefined4 *)(param_2 + 0x14);
  param_1[6] = *(undefined4 *)(param_2 + 0x18);
  param_1[7] = *(undefined4 *)(param_2 + 0x1c);
  param_1[8] = *(undefined4 *)(param_2 + 0x20);
  return param_1;
}

struct C_00740330 { int sub_00740330(void); };

// @baa 0x00740330
int C_00740330::sub_00740330(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00740370 { int sub_00740370(void); };

// @baa 0x00740370
int C_00740370::sub_00740370(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_007403b0 { int sub_007403b0(void); };

// @baa 0x007403b0
int C_007403b0::sub_007403b0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_007403f0 { int sub_007403f0(void); };

// @baa 0x007403f0
int C_007403f0::sub_007403f0(void) { return *(int*)((char*)this + 0); }

struct C_00740400 {
    void sub_00740400();
};

int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
extern undefined4 g_01ec1274;
// @baa 0x00740400
void C_00740400::sub_00740400(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  return;
}

struct C_00740460 { int sub_00740460(void); };

// @baa 0x00740460
int C_00740460::sub_00740460(void) { return *(int*)((char*)this + 0); }

struct C_00740470 {
    void sub_00740470();
};

// @baa 0x00740470
void C_00740470::sub_00740470(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  return;
}

struct C_007404d0 { int sub_007404d0(void); };

// @baa 0x007404d0
int C_007404d0::sub_007404d0(void) { return *(int*)((char*)this + 0); }

struct C_007404e0 {
    void sub_007404e0();
};

// @baa 0x007404e0
void C_007404e0::sub_007404e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  return;
}

int sub_0053dfa0(...);
// @baa 0x00740510
undefined4 * UShaderCache::sub_00740510(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00740550
undefined4 * UShaderCache::sub_00740550(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00740590
undefined4 * UShaderCache::sub_00740590(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ec1274);
  if (param_1[1] != 0) {
    sub_006311e0("!NumRefs",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\RefCounting.h"
                 ,0xd,&g_01e3f3dc);
  }
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct S_007405d0 { int sub_0073faa0(int); };

// @baa 0x007405d0
int sub_007405d0(S_007405d0 *s, int a) { return s->sub_0073faa0(a); }

int sub_0069c170(...);
// @baa 0x007405e0
void sub_007405e0(int param_1)
{
  sub_0069c170(*(undefined4 *)(param_1 + 4),0);
  return;
}

struct C_00740600 {
    int sub_00740600(int);
};

// @baa 0x00740600
int C_00740600::sub_00740600(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct S_00740610 { int sub_0073fb00(int); };

// @baa 0x00740610
int sub_00740610(S_00740610 *s, int a) { return s->sub_0073fb00(a); }

// @baa 0x00740620
void sub_00740620(int param_1)
{
  sub_0069c170(*(undefined4 *)(param_1 + 4),0);
  return;
}

struct C_00740640 {
    int sub_00740640(int);
};

// @baa 0x00740640
int C_00740640::sub_00740640(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct S_00740650 { int sub_0073fb60(int); };

// @baa 0x00740650
int sub_00740650(S_00740650 *s, int a) { return s->sub_0073fb60(a); }

// @baa 0x00740660
void sub_00740660(int param_1)
{
  sub_0069c170(*(undefined4 *)(param_1 + 4),0);
  return;
}

struct C_00740680 {
    int sub_00740680(int);
};

// @baa 0x00740680
int C_00740680::sub_00740680(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct C_00740c80 {
    int sub_00740c80(int);
};

// @baa 0x00740c80
int C_00740c80::sub_00740c80(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct C_00740d80 {
    int sub_00740d80(int);
};

// @baa 0x00740d80
int C_00740d80::sub_00740d80(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

struct C_00740e80 {
    int sub_00740e80(int);
};

// @baa 0x00740e80
int C_00740e80::sub_00740e80(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

// @baa 0x00741100
int UTexture2D::sub_00741100(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

// @baa 0x00741180
int UTexture2D::sub_00741180(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

// @baa 0x00741200
int UTexture2D::sub_00741200(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

// @baa 0x00741210
int UTexture2D::sub_00741210(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x50 + *(int *)*param_1;
}

// @baa 0x00741220
int UTexture2D::sub_00741220(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x50 + *(int *)*param_1;
}

// @baa 0x00741230
int UTexture2D::sub_00741230(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x50 + *(int *)*param_1;
}

int sub_0053df70(...);
// @baa 0x00741240
void UTexture2D::sub_00741240(int param_2)
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

// @baa 0x00741280
void UTexture2D::sub_00741280(int param_2)
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

// @baa 0x007412c0
void UTexture2D::sub_007412c0(int param_2)
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

// @baa 0x00741300
int UTexture2D::sub_00741300(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

// @baa 0x00741450
int UTexture2D::sub_00741450(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

// @baa 0x007415b0
int UTexture2D::sub_007415b0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
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

struct TConstSetBitIterator_00741960 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00741960(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00741960& operator++();
};

TConstSetBitIterator_00741960::TConstSetBitIterator_00741960(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00741960
TConstSetBitIterator_00741960& TConstSetBitIterator_00741960::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00741980 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00741980(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00741980& operator++();
};

TConstSetBitIterator_00741980::TConstSetBitIterator_00741980(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00741980
TConstSetBitIterator_00741980& TConstSetBitIterator_00741980::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007419a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007419a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007419a0& operator++();
};

TConstSetBitIterator_007419a0::TConstSetBitIterator_007419a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007419a0
TConstSetBitIterator_007419a0& TConstSetBitIterator_007419a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007419c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007419c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007419c0& operator++();
};

TConstSetBitIterator_007419c0::TConstSetBitIterator_007419c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007419c0
TConstSetBitIterator_007419c0& TConstSetBitIterator_007419c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00741a10 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00741a10(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00741a10& operator++();
};

TConstSetBitIterator_00741a10::TConstSetBitIterator_00741a10(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00741a10
TConstSetBitIterator_00741a10& TConstSetBitIterator_00741a10::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00741a60 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00741a60(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00741a60& operator++();
};

TConstSetBitIterator_00741a60::TConstSetBitIterator_00741a60(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00741a60
TConstSetBitIterator_00741a60& TConstSetBitIterator_00741a60::operator++()
{
    It.Advance();
    return *this;
}

struct C_view {
    int sub_00741700(int, int);
};

// @baa 0x007423b0
int UTexture2D::sub_007423b0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view *)(this))->sub_00741700((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x50 + *param_1;
  }
  return 0;
}

struct C_view_00742440 {
    int sub_007417c0(int, int);
};

// @baa 0x00742440
int UTexture2D::sub_00742440(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00742440 *)(this))->sub_007417c0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x50 + *param_1;
  }
  return 0;
}

struct C_view_007424d0 {
    int sub_00741890(int, int);
};

// @baa 0x007424d0
int UTexture2D::sub_007424d0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_007424d0 *)(this))->sub_00741890((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x50 + *param_1;
  }
  return 0;
}

struct TConstSetBitIterator_00742950 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00742950(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00742950& operator++();
};

TConstSetBitIterator_00742950::TConstSetBitIterator_00742950(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00742950
TConstSetBitIterator_00742950& TConstSetBitIterator_00742950::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007429a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007429a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007429a0& operator++();
};

TConstSetBitIterator_007429a0::TConstSetBitIterator_007429a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007429a0
TConstSetBitIterator_007429a0& TConstSetBitIterator_007429a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007429f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007429f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007429f0& operator++();
};

TConstSetBitIterator_007429f0::TConstSetBitIterator_007429f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007429f0
TConstSetBitIterator_007429f0& TConstSetBitIterator_007429f0::operator++()
{
    It.Advance();
    return *this;
}

struct C_00743390 {
    undefined4 sub_00743390(byte);
};

int sub_007311f0(void);
// @baa 0x00743390
undefined4 C_00743390::sub_00743390(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007311f0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_007433b0 {
    undefined4 sub_007433b0(byte);
};

int sub_00731270(void);
// @baa 0x007433b0
undefined4 C_007433b0::sub_007433b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00731270();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_007433d0 {
    undefined4 sub_007433d0(byte);
};

int sub_007312f0(void);
// @baa 0x007433d0
undefined4 C_007433d0::sub_007433d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007312f0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00744790 {
    int sub_00744790(undefined4);
    int sub_00743e00(int);
};

// @baa 0x00744790
int C_00744790::sub_00744790(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_00744790 *)(this))->sub_00743e00(param_2);
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  return param_1;
}

struct C_007448e0 {
    int sub_007448e0(undefined4);
    int sub_00743ec0(int);
};

// @baa 0x007448e0
int C_007448e0::sub_007448e0(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_007448e0 *)(this))->sub_00743ec0(param_2);
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  return param_1;
}

struct C_00744a30 {
    int sub_00744a30(undefined4);
    int sub_00743f80(int);
};

// @baa 0x00744a30
int C_00744a30::sub_00744a30(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_00744a30 *)(this))->sub_00743f80(param_2);
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  return param_1;
}

struct CA { int* sub_00744210(); };

struct CB { void sub_00743670(int a, int b); };

struct CC { void sub_0073fff0(int a, int b, int c, int d, int e); };

struct V { virtual void vf(int* a, int b); };

// @baa 0x00744b30
void __stdcall sub_00744b30(int a1, int** a2, int a3, int* a4)
{
  if (*a4 == 0) {
    ((CB*)(a3 + 0x18))->sub_00743670(a1, *((CA*)a3)->sub_00744210());
    *a4 = 1;
  }
  for (int i = 0; i < ((*(unsigned int*)(a3 + 0x24) & 4) ? 2 : 1); i++) {
    ((CC*)(a3 + 0x18))->sub_0073fff0(a1, *(int*)((char*)*a2 + 0xe8), (int)*a2, i, (int)(a2 + 1));
    ((V*)(a3 + 0x18))->vf((int*)*a2, a1);
  }
}

struct C_view_00746050 {
    int sub_007458b0(int);
};

// @baa 0x00746050
void UShaderCache::sub_00746050(void)
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
  ((C_view_00746050 *)(((char *)this + 0xc)))->sub_007458b0(0);
  return;
}

struct C_view_00746290 {
    int sub_00745a60(int);
};

// @baa 0x00746290
void UShaderCache::sub_00746290(void)
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
  ((C_view_00746290 *)(((char *)this + 0xc)))->sub_00745a60(0);
  return;
}

struct C_view_007464d0 {
    int sub_00745c10(int);
};

// @baa 0x007464d0
void UShaderCache::sub_007464d0(void)
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
  ((C_view_007464d0 *)(((char *)this + 0xc)))->sub_00745c10(0);
  return;
}

struct C_00746c00 { void sub_0073b9f0(int); C_00746c00 *sub_00746c00(int); };

// @baa 0x00746c00
C_00746c00 *C_00746c00::sub_00746c00(int a) { sub_0073b9f0(a); return this; }

struct C_view_00746c20 {
    int sub_0073f030(int);
};

int sub_009e0e10(...);
// @baa 0x00746c20
uint UMorphWeightSequence::sub_00746c20(undefined4 param_2)
{
    int param_1 = (int)this;
  uint uVar1;
  uint uVar2;
  uVar1 = ((C_view_00746c20 *)(this))->sub_0073f030(param_2);
  uVar2 = sub_009e0e10(param_2,param_1 + 0x50);
  return uVar2 | uVar1;
}

struct C_view_00746d90 {
    int sub_0073f030(int);
};

// @baa 0x00746d90
uint UMorphWeightSequence::sub_00746d90(undefined4 param_2)
{
    int param_1 = (int)this;
  uint uVar1;
  uint uVar2;
  uVar1 = ((C_view_00746d90 *)(this))->sub_0073f030(param_2);
  uVar2 = sub_009e0e10(param_2,param_1 + 0x50);
  return uVar2 | uVar1;
}

// @baa 0x0074f470
int __stdcall sub_0074f470(int a0, int a1) { return 0; }

// @baa 0x0074f500
int sub_0074f500(void) { return 0; }

// @baa 0x0074f510
int sub_0074f510(void) { return 0; }

// @baa 0x0074f520
int sub_0074f520(void) { return 0; }

// @baa 0x0074f530
int sub_0074f530(void) { return 0; }

// @baa 0x0074f540
int sub_0074f540(void) { return 0; }

int sub_01a37872(...);
int sub_01e236d0(...);
extern undefined4 g_026b296c;
extern undefined4 g_026b2970;
// @baa 0x0074f550
undefined4 sub_0074f550(void)
{
  if ((g_026b2970 & 1) == 0) {
    g_026b2970 = g_026b2970 | 1;
    g_026b296c = 0;
    sub_01a37872(&sub_01e236d0);
  }
  return g_026b296c;
}

struct C_0074f5f0 {
    undefined4 sub_0074f5f0(byte);
};

int sub_0074f580(void);
// @baa 0x0074f5f0
undefined4 C_0074f5f0::sub_0074f5f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0074f580();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0074fff0 {
    void sub_0074fff0();
};

int sub_00b01b80(...);
// @baa 0x0074fff0
void C_0074fff0::sub_0074fff0(void)
{
    int param_1 = (int)this;

  sub_00b01b80(*(undefined1 *)(param_1 + 0xf7),param_1 + 0x154,param_1 + 0x178,param_1 + 0x19c);
  return;
}
