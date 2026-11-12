// UnrealEd_1250000.cpp: 43 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    undefined4 sub_01250eb0(undefined4);
};

int sub_005f5500(...);
int sub_0124b0e0(...);
// @baa 0x01250eb0
undefined4 C::sub_01250eb0(undefined4 param_2)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1b4) == 0) {
    uVar1 = sub_0124b0e0(param_2);
    sub_005f5500(0,L"%s: No terrain selected.",uVar1);
    return 0;
  }
  return 1;
}

// @baa 0x01253410
IMPLEMENT_CLASS_AT(UIconThumbnailRenderer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\ThumbnailManager.cpp", 31);

// @baa 0x01253540
IMPLEMENT_CLASS_AT(UArchetypeThumbnailRenderer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\ThumbnailManager.cpp", 45);

// @baa 0x012535e0
IMPLEMENT_CLASS_AT(UPrefabThumbnailRenderer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\ThumbnailManager.cpp", 46);

// @baa 0x01253680
IMPLEMENT_CLASS_AT(UUISceneThumbnailRenderer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\ThumbnailManager.cpp", 48);

// @baa 0x012536e0
struct C_012537f0 {
    undefined4 sub_012537f0(byte);
};

int sub_0053dfa0(...);
int sub_01253360(void);
// @baa 0x012537f0
undefined4 C_012537f0::sub_012537f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01253360();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01253810 {
    int sub_01253810();
};

// @baa 0x01253810
int C_01253810::sub_01253810(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

int sub_00c304d0(void);
// @baa 0x012598f0
undefined4 UMaterialExpressionWorldPosition::sub_012598f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c304d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x01259bb0
// @baa 0x01259cc0
bool UIconThumbnailRenderer::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0125ac80
bool UParticleSystemLabelRenderer::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

int sub_01251ae0(...);
int sub_0125a630(void);
extern undefined4 g_026d410c;
// @baa 0x0125b760
int sub_0125b760(void)
{
  if (g_026d410c == 0) {
    g_026d410c = sub_01251ae0(L"UnrealEd");
    sub_0125a630();
  }
  return g_026d410c;
}

int sub_012511e0(...);
int sub_01259a60(void);
extern undefined4 g_026d40d8;
// @baa 0x0125b790
int sub_0125b790(void)
{
  if (g_026d40d8 == 0) {
    g_026d40d8 = sub_012511e0(L"UnrealEd");
    sub_01259a60();
  }
  return g_026d40d8;
}

int sub_01251060(...);
int sub_01259910(void);
extern undefined4 g_026d40d0;
// @baa 0x0125b840
int sub_0125b840(void)
{
  if (g_026d40d0 == 0) {
    g_026d40d0 = sub_01251060(L"UnrealEd");
    sub_01259910();
  }
  return g_026d40d0;
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

struct TConstSetBitIterator_0125b8d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0125b8d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0125b8d0& operator++();
};

TConstSetBitIterator_0125b8d0::TConstSetBitIterator_0125b8d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0125b8d0
TConstSetBitIterator_0125b8d0& TConstSetBitIterator_0125b8d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0125b8f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0125b8f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0125b8f0& operator++();
};

TConstSetBitIterator_0125b8f0::TConstSetBitIterator_0125b8f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0125b8f0
TConstSetBitIterator_0125b8f0& TConstSetBitIterator_0125b8f0::operator++()
{
    It.Advance();
    return *this;
}

struct A_0125c190 { virtual void sub_0125f5a0(); char pad[416]; };

struct B_0125c190 { virtual void sub_0125f5a0(); };

struct C_0125c190 : A_0125c190, B_0125c190 { virtual void sub_0125f5a0(); C_0125c190(); };

C_0125c190::C_0125c190() {}

// @baa 0x0125c190
void C_0125c190::sub_0125f5a0() {}

struct A_0125c1a0 { virtual void sub_0125f5a0(); char pad[420]; };

struct B_0125c1a0 { virtual void sub_0125f5a0(); };

struct C_0125c1a0 : A_0125c1a0, B_0125c1a0 { virtual void sub_0125f5a0(); C_0125c1a0(); };

C_0125c1a0::C_0125c1a0() {}

// @baa 0x0125c1a0
void C_0125c1a0::sub_0125f5a0() {}

struct A_0125c1b0 { virtual void sub_0125f5a0(); char pad[412]; };

struct B_0125c1b0 { virtual void sub_0125f5a0(); };

struct C_0125c1b0 : A_0125c1b0, B_0125c1b0 { virtual void sub_0125f5a0(); C_0125c1b0(); };

C_0125c1b0::C_0125c1b0() {}

// @baa 0x0125c1b0
void C_0125c1b0::sub_0125f5a0() {}

// @baa 0x0125d920
undefined4 UMaterialExpressionWorldPosition::sub_0125d920(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c304d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x0125da20
undefined4 UMaterialExpressionWorldPosition::sub_0125da20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c304d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x0125dc30
undefined4 UMaterialExpressionWorldPosition::sub_0125dc30(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c304d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x0125e990
bool ULensFlareThumbnailRenderer::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct Inner {
    int* data;
    Inner();
    ~Inner();
};

struct Outer : Inner {
    int num;
    int max;
    void sub_0125b6a0(int* p);
    Outer(int* p);
};

Inner::Inner()
{
    data = 0;
}

// @baa 0x0125eee0
Outer::Outer(int* p)
{
    num = 0;
    max = 0;
    sub_0125b6a0(p);
}

struct C_0125ef40 {
    int sub_0125ef40(int);
    int sub_0125b210(int, int);
};

// @baa 0x0125ef40
int C_0125ef40::sub_0125ef40(int param_2)
{
    int * param_1 = (int *)this;
  ((C_0125ef40 *)(this))->sub_0125b210((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_0125ef90 { void sub_0098f3b0(int); C_0125ef90 *sub_0125ef90(int); };

// @baa 0x0125ef90
C_0125ef90 *C_0125ef90::sub_0125ef90(int a) { sub_0098f3b0(a); return this; }

struct C_0125efb0 {
    int sub_0125efb0(int);
    int sub_0125b300(int, int);
};

// @baa 0x0125efb0
int C_0125efb0::sub_0125efb0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_0125efb0 *)(this))->sub_0125b300((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct TConstSetBitIterator_0125f260 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0125f260(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0125f260& operator++();
};

TConstSetBitIterator_0125f260::TConstSetBitIterator_0125f260(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0125f260
TConstSetBitIterator_0125f260& TConstSetBitIterator_0125f260::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0125f280 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0125f280(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0125f280& operator++();
};

TConstSetBitIterator_0125f280::TConstSetBitIterator_0125f280(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0125f280
TConstSetBitIterator_0125f280& TConstSetBitIterator_0125f280::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0125f2d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0125f2d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0125f2d0& operator++();
};

TConstSetBitIterator_0125f2d0::TConstSetBitIterator_0125f2d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0125f2d0
TConstSetBitIterator_0125f2d0& TConstSetBitIterator_0125f2d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0125f2f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0125f2f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0125f2f0& operator++();
};

TConstSetBitIterator_0125f2f0::TConstSetBitIterator_0125f2f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0125f2f0
TConstSetBitIterator_0125f2f0& TConstSetBitIterator_0125f2f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0125f310 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0125f310(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0125f310& operator++();
};

TConstSetBitIterator_0125f310::TConstSetBitIterator_0125f310(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0125f310
TConstSetBitIterator_0125f310& TConstSetBitIterator_0125f310::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0125f360 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0125f360(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0125f360& operator++();
};

TConstSetBitIterator_0125f360::TConstSetBitIterator_0125f360(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0125f360
TConstSetBitIterator_0125f360& TConstSetBitIterator_0125f360::operator++()
{
    It.Advance();
    return *this;
}

int sub_01259bb0(void);
int sub_0125e2e0(...);
extern undefined4 g_026d40ec;
// @baa 0x0125f3b0
int sub_0125f3b0(void)
{
  if (g_026d40ec == 0) {
    g_026d40ec = sub_0125e2e0(L"UnrealEd");
    sub_01259bb0();
  }
  return g_026d40ec;
}

struct TConstSetBitIterator_0125f510 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0125f510(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0125f510& operator++();
};

TConstSetBitIterator_0125f510::TConstSetBitIterator_0125f510(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0125f510
TConstSetBitIterator_0125f510& TConstSetBitIterator_0125f510::operator++()
{
    It.Advance();
    return *this;
}

int sub_0125c0a0(void);
// @baa 0x0125f5a0
undefined4 UUnrealEdEngine::sub_0125f5a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0125c0a0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0125f830 { void sub_0125c2a0(); void sub_0125f830(int); };

// @baa 0x0125f830
void C_0125f830::sub_0125f830(int) { sub_0125c2a0(); }

struct C_0125f840 { void sub_0125c2a0(); void sub_0125f840(int); };

// @baa 0x0125f840
void C_0125f840::sub_0125f840(int) { sub_0125c2a0(); }

struct C_0125f910 { void sub_0125c2a0(); void sub_0125f910(int); };

// @baa 0x0125f910
void C_0125f910::sub_0125f910(int) { sub_0125c2a0(); }
