// Engine_0c00000.cpp: 35 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00c002c0
FString UDemoRecDriver::LowLevelGetNetworkNumber()
{
    return TEXT("");
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C { void* Data; int Num; int Max; void sub_00c00310(); };

// @baa 0x00c00310
void C::sub_00c00310() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00c00370 {
    void sub_00c00370(int);
};

int sub_0053df70(...);
// @baa 0x00c00370
void C_00c00370::sub_00c00370(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x90,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00c00410 { void* Data; int Num; int Max; void sub_00c00410(); };

// @baa 0x00c00410
void C_00c00410::sub_00c00410() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct T_00c00470;
// @baa 0x00c00470
template INT TArray<T_00c00470*>::RemoveItem(T_00c00470* const&);

// @baa 0x00c004f0
void __stdcall sub_00c004f0(int a0, int a1) {  }

int sub_0053dfa0(...);
int sub_00549310(void);
// @baa 0x00c00500
undefined4 UObject::sub_00c00500(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00549310();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00c00520 {
    undefined4 sub_00c00520(byte);
    int sub_00549310();
};

// @baa 0x00c00520
undefined4 C_00c00520::sub_00c00520(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00c00520 *)(((char *)this + 4)))->sub_00549310();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00c00620 {
    int sub_00c00620();
};

// @baa 0x00c00620
int C_00c00620::sub_00c00620(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00c00630 {
    int sub_00c00630();
};

// @baa 0x00c00630
int C_00c00630::sub_00c00630(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

extern undefined4 g_026c08b0;
extern undefined4 g_026c08b4;
extern undefined4 g_026c08b8;
// @baa 0x00c04f20
void sub_00c04f20(void)
{
  g_026c08b4 = 0;
  if (g_026c08b8 != 0) {
    g_026c08b8 = 0;
    if (g_026c08b0 != 0) {
      g_026c08b0 = sub_0053df70(g_026c08b0,0,8);
    }
  }
  return;
}

// @baa 0x00c05780
int sub_00c05780(void) { return 1690; }

struct C_00c05790 {
    int sub_00c05790();
};

// @baa 0x00c05790
int C_00c05790::sub_00c05790(void)
{
    int param_1 = (int)this;

  return ((*(int *)(param_1 + 0xcc) + *(int *)(param_1 + 0xa8)) * 7 + *(int *)(param_1 + 0xc0) * 8 +
          *(int *)(param_1 + 0xb4) * 5 + *(int *)(param_1 + 0x9c) * 6 + *(int *)(param_1 + 0x84)) *
         4;
}

struct C_00c057d0 {
    int sub_00c057d0();
};

// @baa 0x00c057d0
int C_00c057d0::sub_00c057d0(void)
{
    int param_1 = (int)this;

  return ((*(int *)(param_1 + 0xcc) + *(int *)(param_1 + 0xa8)) * 7 + *(int *)(param_1 + 0xc0) * 8 +
          *(int *)(param_1 + 0xb4) * 5 + *(int *)(param_1 + 0x9c) * 6 + *(int *)(param_1 + 0x84)) *
         4 + 0xd0;
}

void sub_006837e0();
// @baa 0x00c05820
void sub_00c05820(void) { sub_006837e0(); }

struct C_00c06710 { void* Data; int Num; int Max; void sub_00c06710(); };

// @baa 0x00c06710
void C_00c06710::sub_00c06710() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00c06770 { void sub_00c009d0(int); C_00c06770 *sub_00c06770(int); };

// @baa 0x00c06770
C_00c06770 *C_00c06770::sub_00c06770(int a) { sub_00c009d0(a); return this; }

struct C_00c06850 {
    int sub_00c06850();
};

// @baa 0x00c06850
int C_00c06850::sub_00c06850(void)
{
    int param_1 = (int)this;
  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00c06870 {
    int sub_00c06870();
};

// @baa 0x00c06870
int C_00c06870::sub_00c06870(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00c06880 {
    undefined4 sub_00c06880(byte);
};

int sub_00c00550(void);
// @baa 0x00c06880
undefined4 C_00c06880::sub_00c06880(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c00550();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00c068a0 {
    undefined4 sub_00c068a0(byte);
};

int sub_00c005c0(void);
// @baa 0x00c068a0
undefined4 C_00c068a0::sub_00c068a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c005c0();
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

struct TConstSetBitIterator_00c06980 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00c06980(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00c06980& operator++();
};

TConstSetBitIterator_00c06980::TConstSetBitIterator_00c06980(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00c06980
TConstSetBitIterator_00c06980& TConstSetBitIterator_00c06980::operator++()
{
    It.Advance();
    return *this;
}

struct C_00c069a0 {
    int sub_00c069a0();
};

// @baa 0x00c069a0
int C_00c069a0::sub_00c069a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct TConstSetBitIterator_00c069b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00c069b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00c069b0& operator++();
};

TConstSetBitIterator_00c069b0::TConstSetBitIterator_00c069b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00c069b0
TConstSetBitIterator_00c069b0& TConstSetBitIterator_00c069b0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00c069d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00c069d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00c069d0& operator++();
};

TConstSetBitIterator_00c069d0::TConstSetBitIterator_00c069d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00c069d0
TConstSetBitIterator_00c069d0& TConstSetBitIterator_00c069d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00c06a20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00c06a20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00c06a20& operator++();
};

TConstSetBitIterator_00c06a20::TConstSetBitIterator_00c06a20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00c06a20
TConstSetBitIterator_00c06a20& TConstSetBitIterator_00c06a20::operator++()
{
    It.Advance();
    return *this;
}

int sub_00bf8090(void);
int sub_00c00b40(...);
extern undefined4 g_026c0808;
// @baa 0x00c0acd0
int sub_00c0acd0(void)
{
  if (g_026c0808 == 0) {
    g_026c0808 = sub_00c00b40(L"Engine");
    sub_00bf8090();
  }
  return g_026c0808;
}

// @baa 0x00c0d100
IMPLEMENT_CLASS_AT(UAnimationCompressionAlgorithm_BitwiseCompressOnly, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\AnimationCompressionAlgorithm_BitwiseCompressOnly.cpp", 10);

// @baa 0x00c0d210
bool UAnimationCompressionAlgorithm_BitwiseCompressOnly::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00c0d250
IMPLEMENT_CLASS_AT(UAnimationCompressionAlgorithm_RemoveEverySecondKey, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\AnimationCompressionAlgorithm_RemoveEverySecondKey.cpp", 10);

// @baa 0x00c0d360
bool UAnimationCompressionAlgorithm_RemoveEverySecondKey::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00c0f020
IMPLEMENT_CLASS_AT(UAnimationCompressionAlgorithm_RemoveTrivialKeys, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\AnimationCompressionAlgorithm_RemoveTrivialKeys.cpp", 10);

// @baa 0x00c0f130
bool UAnimationCompressionAlgorithm_RemoveTrivialKeys::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00c0f170
IMPLEMENT_CLASS_AT(UAnimationCompressionAlgorithm_RevertToRaw, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\AnimationCompressionAlgorithm_RevertToRaw.cpp", 10);

// @baa 0x00c0f280
bool UAnimationCompressionAlgorithm_RevertToRaw::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}
