// ParticleModules_Parameter.cpp (part 1 of 2): 93 functions
// Placed here by: class 57, neighbours 29, file 2, callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C { void* Data; int Num; int Max; void sub_007b9350(); };

// @baa 0x007b9350
void C::sub_007b9350() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x00b33b40
int UParticleModuleParameterDynamic::vf_000(void) { return 1; }

// @baa 0x00b33b50
int UParticleModuleParameterDynamic::vf_114(int a0) { return 16; }

// @baa 0x00b33b60
void UParticleModuleParameterDynamic::vf_120(int a0) {  }

// @baa 0x00b33b70
void UParticleModuleParameterDynamic::vf_04c(UINT a0) {  }

// @baa 0x00b33b80
void UParticleModuleParameterDynamic::vf_15c(int a0) {  }

// @baa 0x00b33b90
void UParticleModuleParameterDynamic::vf_160(int a0) {  }

struct C_00b35700 {
    undefined4 sub_00b35700(byte);
};

int sub_0053dfa0(...);
int sub_00b313d0(void);
// @baa 0x00b35700
undefined4 C_00b35700::sub_00b35700(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00b313d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00b3c6f0
int UParticleModuleParameterDynamic::sub_00b3c6f0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00b3c7f0 {
    int sub_00b3c7f0(int);
};

// @baa 0x00b3c7f0
int C_00b3c7f0::sub_00b3c7f0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00b3c800 {
    int sub_00b3c800();
};

// @baa 0x00b3c800
int C_00b3c800::sub_00b3c800(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00b3c820 {
    int sub_00b3c820();
};

// @baa 0x00b3c820
int C_00b3c820::sub_00b3c820(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00b3c830 {
    int sub_00b3c830();
};

// @baa 0x00b3c830
int C_00b3c830::sub_00b3c830(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00b3c840 {
    int sub_00b3c840();
};

// @baa 0x00b3c840
int C_00b3c840::sub_00b3c840(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00b3d080 {
    int sub_00b3d080(int);
};

// @baa 0x00b3d080
int C_00b3d080::sub_00b3d080(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x48;
}

struct C_00b3d240 {
    int sub_00b3d240(int);
};

// @baa 0x00b3d240
int C_00b3d240::sub_00b3d240(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x48;
}

struct C_00b3d250 {
    int sub_00b3d250();
};

// @baa 0x00b3d250
int C_00b3d250::sub_00b3d250(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x48;
}

struct C_view {
    int sub_00b3c700(int, int);
};

// @baa 0x00b3f830
int UParticleModuleParameterDynamic::sub_00b3f830(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view *)(this))->sub_00b3c700((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

// @baa 0x00b3f860
int UParticleModuleParameterDynamic::sub_00b3f860(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x00b3f880
int UParticleModuleParameterDynamic::sub_00b3f880(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

int sub_007b9350(void);
// @baa 0x00b3f890
undefined4 UParticleModuleParameterDynamic::sub_00b3f890(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007b9350();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00b3f8b0
int UParticleModuleParameterDynamic::sub_00b3f8b0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x00b3f8c0
int UParticleModuleParameterDynamic::sub_00b3f8c0(int param_2)
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

struct TConstSetBitIterator_00b3fb10 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00b3fb10(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00b3fb10& operator++();
};

TConstSetBitIterator_00b3fb10::TConstSetBitIterator_00b3fb10(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00b3fb10
TConstSetBitIterator_00b3fb10& TConstSetBitIterator_00b3fb10::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00b3fb30 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00b3fb30(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00b3fb30& operator++();
};

TConstSetBitIterator_00b3fb30::TConstSetBitIterator_00b3fb30(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00b3fb30
TConstSetBitIterator_00b3fb30& TConstSetBitIterator_00b3fb30::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00b3fb80 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00b3fb80(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00b3fb80& operator++();
};

TConstSetBitIterator_00b3fb80::TConstSetBitIterator_00b3fb80(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00b3fb80
TConstSetBitIterator_00b3fb80& TConstSetBitIterator_00b3fb80::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00b3fba0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00b3fba0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00b3fba0& operator++();
};

TConstSetBitIterator_00b3fba0::TConstSetBitIterator_00b3fba0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00b3fba0
TConstSetBitIterator_00b3fba0& TConstSetBitIterator_00b3fba0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00b3fbc0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00b3fbc0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00b3fbc0& operator++();
};

TConstSetBitIterator_00b3fbc0::TConstSetBitIterator_00b3fbc0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00b3fbc0
TConstSetBitIterator_00b3fbc0& TConstSetBitIterator_00b3fbc0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00b3fc10 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00b3fc10(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00b3fc10& operator++();
};

TConstSetBitIterator_00b3fc10::TConstSetBitIterator_00b3fc10(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00b3fc10
TConstSetBitIterator_00b3fc10& TConstSetBitIterator_00b3fc10::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00b3fc60 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00b3fc60(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00b3fc60& operator++();
};

TConstSetBitIterator_00b3fc60::TConstSetBitIterator_00b3fc60(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00b3fc60
TConstSetBitIterator_00b3fc60& TConstSetBitIterator_00b3fc60::operator++()
{
    It.Advance();
    return *this;
}

// @baa 0x00b3fcb0
int UParticleModuleParameterDynamic::sub_00b3fcb0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x48;
}

struct TConstSetBitIterator_00b3fec0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00b3fec0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00b3fec0& operator++();
};

TConstSetBitIterator_00b3fec0::TConstSetBitIterator_00b3fec0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00b3fec0
TConstSetBitIterator_00b3fec0& TConstSetBitIterator_00b3fec0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00b3fee0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00b3fee0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00b3fee0& operator++();
};

TConstSetBitIterator_00b3fee0::TConstSetBitIterator_00b3fee0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00b3fee0
TConstSetBitIterator_00b3fee0& TConstSetBitIterator_00b3fee0::operator++()
{
    It.Advance();
    return *this;
}

// @baa 0x00b40fa0
IMPLEMENT_CLASS_AT(UParticleModuleParameterBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ParticleModules_Parameter.cpp", 15);

// @baa 0x00b41c30
// @baa 0x00b426c0
int UParticleModuleParameterDynamic::sub_00b426c0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x00b426e0
int UParticleModuleParameterDynamic::sub_00b426e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct M_00b427d0 { void sub_00765d90(); };

struct C_00b427d0 { char pad[16]; M_00b427d0 m; void sub_00b427d0(); };

// @baa 0x00b427d0
void C_00b427d0::sub_00b427d0() { m.sub_00765d90(); }

struct TConstSetBitIterator_00b42aa0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00b42aa0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00b42aa0& operator++();
};

TConstSetBitIterator_00b42aa0::TConstSetBitIterator_00b42aa0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00b42aa0
TConstSetBitIterator_00b42aa0& TConstSetBitIterator_00b42aa0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00b42ac0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00b42ac0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00b42ac0& operator++();
};

TConstSetBitIterator_00b42ac0::TConstSetBitIterator_00b42ac0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00b42ac0
TConstSetBitIterator_00b42ac0& TConstSetBitIterator_00b42ac0::operator++()
{
    It.Advance();
    return *this;
}

struct C_view_00b42f40 {
    int sub_00b3fe00(int, int);
};

// @baa 0x00b42f40
int UParticleModuleParameterDynamic::sub_00b42f40(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00b42f40 *)(this))->sub_00b3fe00((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x48;
  }
  return 0;
}

struct TConstSetBitIterator_00b43120 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00b43120(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00b43120& operator++();
};

TConstSetBitIterator_00b43120::TConstSetBitIterator_00b43120(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00b43120
TConstSetBitIterator_00b43120& TConstSetBitIterator_00b43120::operator++()
{
    It.Advance();
    return *this;
}

// @baa 0x00b49120
IMPLEMENT_CLASS_AT(UParticleModuleParameterDynamic, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ParticleModules_Parameter.cpp", 20);

// @baa 0x00b49230
bool UParticleModuleParameterDynamic::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct TConstSetBitIterator_00b49f00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00b49f00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00b49f00& operator++();
};

TConstSetBitIterator_00b49f00::TConstSetBitIterator_00b49f00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00b49f00
TConstSetBitIterator_00b49f00& TConstSetBitIterator_00b49f00::operator++()
{
    It.Advance();
    return *this;
}

struct C_00b49f20 {
    void sub_00b49f20();
    int sub_00b427e0(int);
};

// @baa 0x00b49f20
void C_00b49f20::sub_00b49f20(void)
{
    int param_1 = (int)this;
  ((C_00b49f20 *)((*(char **)((char *)this + 0x10))))->sub_00b427e0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_00b49f40 {
    void sub_00b49f40();
    int sub_00b42940(int);
};

// @baa 0x00b49f40
void C_00b49f40::sub_00b49f40(void)
{
    int param_1 = (int)this;
  ((C_00b49f40 *)((*(char **)((char *)this + 0x10))))->sub_00b42940(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_00b49f60 {
    undefined4 sub_00b49f60(byte);
    int sub_00765d90();
};

// @baa 0x00b49f60
undefined4 C_00b49f60::sub_00b49f60(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00b49f60 *)(((char *)this + 0x10)))->sub_00765d90();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct TConstSetBitIterator_00b4a390 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00b4a390(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00b4a390& operator++();
};

TConstSetBitIterator_00b4a390::TConstSetBitIterator_00b4a390(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00b4a390
TConstSetBitIterator_00b4a390& TConstSetBitIterator_00b4a390::operator++()
{
    It.Advance();
    return *this;
}

struct C_00b4a5f0 {
    undefined4 sub_00b4a5f0(byte);
};

int sub_00ae5f50(void);
// @baa 0x00b4a5f0
undefined4 C_00b4a5f0::sub_00b4a5f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00ae5f50();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00b42b10(void);
// @baa 0x00b4b9a0
int UParticleModuleParameterDynamic::sub_00b4b9a0(void)
{
    int param_1 = (int)this;

  sub_00b42b10();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_00b49270(void);
int sub_00b4b400(...);
extern undefined4 g_026bf330;
// @baa 0x00b4bb90
int sub_00b4bb90(void)
{
  if (g_026bf330 == 0) {
    g_026bf330 = sub_00b4b400(L"Engine");
    sub_00b49270();
  }
  return g_026bf330;
}

struct C_view_00b4bd20 {
    int sub_00b4b6c0(int, int);
};

// @baa 0x00b4bd20
void UParticleModuleParameterDynamic::sub_00b4bd20(void)
{
    int param_1 = (int)this;
  ((C_view_00b4bd20 *)(this))->sub_00b4b6c0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_00b4beb0 {
    int sub_00b4b840(int, int);
};

// @baa 0x00b4beb0
undefined4 UParticleModuleParameterDynamic::sub_00b4beb0(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_00b4beb0 *)(this))->sub_00b4b840(param_2, param_3);
  return param_1;
}

struct C_view_00b4bed0 {
    int sub_00b4b8a0(int, int);
};

// @baa 0x00b4bed0
int UParticleModuleParameterDynamic::sub_00b4bed0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00b4bed0 *)(this))->sub_00b4b8a0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_00b4bef0 {
    int sub_00b4b920(int, int);
};

// @baa 0x00b4bef0
int UParticleModuleParameterDynamic::sub_00b4bef0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00b4bef0 *)(this))->sub_00b4b920(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

// @baa 0x00b4bf70
int UParticleModuleParameterDynamic::sub_00b4bf70(void)
{
    int param_1 = (int)this;

  sub_00b42b10();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view_00b4c120 {
    int sub_00b4ba80(int);
};

// @baa 0x00b4c120
int UParticleModuleParameterDynamic::sub_00b4c120(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_view_00b4c120 *)(this))->sub_00b4ba80(param_2);
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  return param_1;
}

struct C_00b4c350 { C_00b4c350* sub_00b4c350(void); };

// @baa 0x00b4c350
C_00b4c350* C_00b4c350::sub_00b4c350(void) { return this; }

struct C_view_00b4c360 {
    int sub_00b4b840(int, int);
};

// @baa 0x00b4c360
int UParticleModuleParameterDynamic::sub_00b4c360(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_00b4c360 *)(this))->sub_00b4b840(param_2, param_4);
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
    void sub_00b4b6c0(int, int);
};

struct C_00b4c390 {
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
    void sub_00b4c390(void);
};

// @baa 0x00b4c390
void C_00b4c390::sub_00b4c390(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_00b4b6c0(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

void sub_00b4bf10();
// @baa 0x00b4c3b0
void sub_00b4c3b0(void) { sub_00b4bf10(); }

// @baa 0x00b4c3c0
int UParticleModuleParameterDynamic::sub_00b4c3c0(void)
{
    int param_1 = (int)this;

  sub_00b42b10();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_005c7a20(void);
extern undefined * g_01fefd68;
// @baa 0x00b4c520
undefined4 * UObject::sub_00b4c520(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01fefd68);
  return param_1;
}

// @baa 0x00b4c540
int UParticleModuleParameterDynamic::vf_154(int a0, int a1, int a2) { return 1; }

// @baa 0x00b4c550
// @baa 0x00b4c5c0
void sub_00b4bbe0();
// @baa 0x00b4c600
void sub_00b4c600(void) { sub_00b4bbe0(); }

struct C_view_00b4c610 {
    int sub_00b4bf10(int);
};

// @baa 0x00b4c610
void UParticleModuleParameterDynamic::sub_00b4c610(void)
{
    int param_1 = (int)this;
  ((C_view_00b4c610 *)(this))->sub_00b4bf10(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c));
  return;
}

// @baa 0x00b4c620
int UParticleModuleParameterDynamic::sub_00b4c620(void)
{
    int param_1 = (int)this;

  sub_00b42b10();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00b4c960
uint UParticleModuleParameterDynamic::sub_00b4c960(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x18c) >> 2 & 1;
}

// @baa 0x00b4c980
void __stdcall sub_00b4c980(int a0, int a1, int a2, int a3, int a4, int a5) {  }

// @baa 0x00b4c990
void __stdcall sub_00b4c990(int a0, int a1, int a2, int a3) {  }

// @baa 0x00b4c9a0
void __stdcall sub_00b4c9a0(int a0, int a1, int a2, int a3) {  }

// @baa 0x00b4cd90
// @baa 0x00b4cdc0
void sub_00b4cdc0(void) { sub_00b4bbe0(); }

extern char g_025ddfe8[];
// @baa 0x00b4cea0
int sub_00b4cea0(void) { return (int)g_025ddfe8; }

// @baa 0x00b4ceb0
int __stdcall sub_00b4ceb0(int a0) { return 0; }

// @baa 0x00b4cec0
int __stdcall sub_00b4cec0(int a0, int a1) { return 0; }

// @baa 0x00b4ced0
int sub_00b4ced0(void) { return 0; }

// @baa 0x00b4cf00
void __stdcall sub_00b4cf00(int a0) {  }

// @baa 0x00b4cf10
void sub_00b4cf10(void) {  }

// @baa 0x00b4cf20
int sub_00b4cf20(void) { return 0; }

int sub_00b4cdd0(void);
extern undefined * g_01feff98;
// @baa 0x00b4cf30
void UParticleModuleParameterDynamic::sub_00b4cf30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01feff98);
  sub_00b4cdd0();
  return;
}

extern char g_025ddfd0[];
// @baa 0x00b4cf40
int sub_00b4cf40(void) { return (int)g_025ddfd0; }

extern undefined * g_01ff0038;
// @baa 0x00b4cfb0
void UParticleModuleParameterDynamic::sub_00b4cfb0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ff0038);
  sub_00b4cdd0();
  return;
}

extern char g_025ddfd8[];
// @baa 0x00b4cfc0
int sub_00b4cfc0(void) { return (int)g_025ddfd8; }

// @baa 0x00b4d090
// @baa 0x016c7750
undefined4 UParticleModuleParameterDynamic::sub_016c7750(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007b9350();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct FInner {
    void sub_00b49e80(int A);
};

extern int g_02676094;
struct C_00b4bbc0 {
    int Pad;
    FInner Inner;
    void sub_00b4bbc0(int A);
};

// @baa 0x00b4bbc0
void C_00b4bbc0::sub_00b4bbc0(int A)
{
    if (!g_02676094) {
        Inner.sub_00b49e80(A);
    }
}

// @baa 0x00b339e0

// @baa 0x00b33af0
int UParticleModuleParameterBase::vf_000(void) { return 1; }

// @baa 0x00b33b00
bool UParticleModuleParameterBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}
