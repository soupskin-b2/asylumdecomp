// Engine_0bc0000.cpp: 71 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

void sub_00bc56b0();
// @baa 0x00bc5730
void sub_00bc5730(void) { sub_00bc56b0(); }

int sub_0053df40(...);
extern undefined * g_0201a638;
// @baa 0x00bc5810
undefined4 * sub_00bc5810(void)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0053df40(0x5c,8);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined2 *)(puVar1 + 2) = 0;
    *(undefined2 *)((int)puVar1 + 0xe) = 0;
    *(undefined2 *)(puVar1 + 5) = 0;
    *(undefined2 *)((int)puVar1 + 0x1a) = 0;
    *(undefined2 *)(puVar1 + 8) = 0;
    *(undefined2 *)((int)puVar1 + 0x26) = 0;
    *(undefined2 *)(puVar1 + 0xb) = 0;
    *(undefined2 *)((int)puVar1 + 0x32) = 0;
    *(undefined2 *)(puVar1 + 0xe) = 0;
    *(undefined2 *)((int)puVar1 + 0x3e) = 0;
    *(undefined2 *)(puVar1 + 0x11) = 0;
    *puVar1 = (undefined4)(&g_0201a638);
    *(undefined2 *)(puVar1 + 0x13) = 0;
    *(undefined2 *)((int)puVar1 + 0x52) = 0;
    *(undefined2 *)(puVar1 + 0x16) = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

void sub_00bbc950();
// @baa 0x00bc5870
void sub_00bc5870(void) { sub_00bbc950(); }

void sub_00bbc9b0();
// @baa 0x00bc5880
void sub_00bc5880(void) { sub_00bbc9b0(); }

struct C { C* sub_00bc7b40(void); };

// @baa 0x00bc7b40
C* C::sub_00bc7b40(void) { return this; }

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00bc7b50 { void* Data; int Num; int Max; void sub_00bc7b50(); };

// @baa 0x00bc7b50
void C_00bc7b50::sub_00bc7b50() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00bc7bb0 {
    void sub_00bc7bb0(int);
};

int sub_0053df70(...);
// @baa 0x00bc7bb0
void C_00bc7bb0::sub_00bc7bb0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x14,8);
      *param_1 = iVar1;
    }
  }
  return;
}

extern TArray<int> g_026a1ca4;
struct C_00bc7cf0 {
    int sub_00bc7cf0();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x00bc7cf0
int C_00bc7cf0::sub_00bc7cf0()
{
    return g_026a1ca4(Index);
}

struct C_00bc7d50 {
    int sub_00bc7d50();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x00bc7d50
int C_00bc7d50::sub_00bc7d50()
{
    return g_026a1ca4(Index);
}

struct C_00bc7db0 { int a, b, c; C_00bc7db0(); };

// @baa 0x00bc7db0
C_00bc7db0::C_00bc7db0() : a(0), b(0), c(0) {}

struct C_00bc7f60 { C_00bc7f60* sub_00bc7f60(void); };

// @baa 0x00bc7f60
C_00bc7f60* C_00bc7f60::sub_00bc7f60(void) { return this; }

struct C_00bc7f70 { C_00bc7f70* sub_00bc7f70(void); };

// @baa 0x00bc7f70
C_00bc7f70* C_00bc7f70::sub_00bc7f70(void) { return this; }

struct C_00bc8040 { void sub_00bbed00(int); C_00bc8040 *sub_00bc8040(int); };

// @baa 0x00bc8040
C_00bc8040 *C_00bc8040::sub_00bc8040(int a) { sub_00bbed00(a); return this; }

struct C_00bc8110 {
    int sub_00bc8110();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x00bc8110
int C_00bc8110::sub_00bc8110()
{
    return g_026a1ca4(Index);
}

struct C_00bc85f0 {
    int sub_00bc85f0(int);
};

// @baa 0x00bc85f0
int C_00bc85f0::sub_00bc85f0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00bc8600 {
    int sub_00bc8600(int);
    int sub_00bbe5f0(int, int);
};

// @baa 0x00bc8600
int C_00bc8600::sub_00bc8600(int param_2)
{
    int * param_1 = (int *)this;
  ((C_00bc8600 *)(this))->sub_00bbe5f0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

struct C_00bc8630 {
    int sub_00bc8630();
};

// @baa 0x00bc8630
int C_00bc8630::sub_00bc8630(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00bc8650 {
    int sub_00bc8650();
};

// @baa 0x00bc8650
int C_00bc8650::sub_00bc8650(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00bc8720 {
    int sub_00bc8720(int);
};

// @baa 0x00bc8720
int C_00bc8720::sub_00bc8720(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00bc8810 {
    int sub_00bc8810(int);
};

// @baa 0x00bc8810
int C_00bc8810::sub_00bc8810(int param_2)
{
    uint param_1 = (uint)this;

  return param_2 * 0x40 +
         (-(uint)(*(uint *)(param_1 + 0x18c0) == 0) & param_1 | *(uint *)(param_1 + 0x18c0));
}

// @baa 0x00bc8830
void __stdcall sub_00bc8830(int a0, int a1) {  }

struct C_00bc8840 {
    int sub_00bc8840();
};

// @baa 0x00bc8840
int C_00bc8840::sub_00bc8840(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00bc8860 {
    int sub_00bc8860();
};

// @baa 0x00bc8860
int C_00bc8860::sub_00bc8860(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00bc8870 {
    int sub_00bc8870();
};

// @baa 0x00bc8870
int C_00bc8870::sub_00bc8870(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00bc8890 {
    int sub_00bc8890();
};

// @baa 0x00bc8890
int C_00bc8890::sub_00bc8890(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

int sub_0040fcc0(void);
int sub_0053dfa0(...);
// @baa 0x00bc88a0
undefined4 UObject::sub_00bc88a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00bc88c0 {
    int sub_00bc88c0(int);
};

// @baa 0x00bc88c0
int C_00bc88c0::sub_00bc88c0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x00bc88d0
void __stdcall sub_00bc88d0(int a0, int a1) {  }

struct C_00bc8960 {
    int sub_00bc8960(int);
};

// @baa 0x00bc8960
int C_00bc8960::sub_00bc8960(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00bc8970{
int sub_00bc8970(byte);
};

extern undefined4*g_026b0d94;
// @baa 0x00bc8970
int C_00bc8970::sub_00bc8970(byte param_2)
{
int param_1=(int)this;

if(*(int*)(param_1+8)!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x218))((*(int*)(param_1+8)));
}
if((param_2&1)!=0){
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

struct TConstSetBitIterator_00bc8c10 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00bc8c10(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00bc8c10& operator++();
};

TConstSetBitIterator_00bc8c10::TConstSetBitIterator_00bc8c10(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00bc8c10
TConstSetBitIterator_00bc8c10& TConstSetBitIterator_00bc8c10::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00bc8c30 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00bc8c30(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00bc8c30& operator++();
};

TConstSetBitIterator_00bc8c30::TConstSetBitIterator_00bc8c30(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00bc8c30
TConstSetBitIterator_00bc8c30& TConstSetBitIterator_00bc8c30::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00bc8c80 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00bc8c80(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00bc8c80& operator++();
};

TConstSetBitIterator_00bc8c80::TConstSetBitIterator_00bc8c80(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00bc8c80
TConstSetBitIterator_00bc8c80& TConstSetBitIterator_00bc8c80::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00bc8cd0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00bc8cd0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00bc8cd0& operator++();
};

TConstSetBitIterator_00bc8cd0::TConstSetBitIterator_00bc8cd0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00bc8cd0
TConstSetBitIterator_00bc8cd0& TConstSetBitIterator_00bc8cd0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00bc8d20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00bc8d20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00bc8d20& operator++();
};

TConstSetBitIterator_00bc8d20::TConstSetBitIterator_00bc8d20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00bc8d20
TConstSetBitIterator_00bc8d20& TConstSetBitIterator_00bc8d20::operator++()
{
    It.Advance();
    return *this;
}

struct C_00bc8d70 {
    void sub_00bc8d70(int);
    int sub_00baf8b0(int, int, int);
};

// @baa 0x00bc8d70
void C_00bc8d70::sub_00bc8d70(int param_2)
{
    int param_1 = (int)this;
  *(undefined4 *)(param_1 + 0x844) = 0;
  if (*(int *)(param_1 + 0x848) != param_2) {
    *(int *)(param_1 + 0x848) = param_2;
    ((C_00bc8d70 *)(this))->sub_00baf8b0(0, param_2, 0x40);
  }
  return;
}

struct C_00bc8e70 {
    int sub_00bc8e70(int);
};

// @baa 0x00bc8e70
int C_00bc8e70::sub_00bc8e70(int param_2)
{
    uint param_1 = (uint)this;

  return param_2 * 0x40 +
         (-(uint)(*(uint *)(param_1 + 0x40) == 0) & param_1 | *(uint *)(param_1 + 0x40));
}

// @baa 0x00bc8e90
void __stdcall sub_00bc8e90(int a0, int a1) {  }

// @baa 0x00bc8f70
IMPLEMENT_CLASS_AT(UParticleModuleTrailSpawn, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleTrailModules.cpp", 366);

// @baa 0x00bc9010
IMPLEMENT_CLASS_AT(UParticleModuleTypeDataTrail2, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnParticleTrailModules.cpp", 477);

// @baa 0x00bc9070
void sub_00bc7b50();
// @baa 0x00bc90c0
void sub_00bc90c0(void) { sub_00bc7b50(); }

int sub_00bab2f0(void);
int sub_00bbfc00(...);
extern undefined4 g_026bf898;
// @baa 0x00bc90d0
int sub_00bc90d0(void)
{
  if (g_026bf898 == 0) {
    g_026bf898 = sub_00bbfc00(L"Engine");
    sub_00bab2f0();
  }
  return g_026bf898;
}

struct C_00bca160 {
    undefined4 sub_00bca160(byte);
};

int sub_00bca0c0(void);
// @baa 0x00bca160
undefined4 C_00bca160::sub_00bca160(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00bca0c0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00bcabd0
int __stdcall sub_00bcabd0(int a0, int a1) { return 0; }

// @baa 0x00bcabe0
int sub_00bcabe0(void) { return 0; }

struct E { BYTE Bytes[68]; };

struct S {
    TArray<E> Items; // 0x00
    const E* sub_00bcac20(INT Index) const;
};

// @baa 0x00bcac20
const E* S::sub_00bcac20(INT Index) const
{
    return &Items(Index);
}

struct C_00bcc390 { C_00bcc390* sub_00bcc390(void); };

// @baa 0x00bcc390
C_00bcc390* C_00bcc390::sub_00bcc390(void) { return this; }

struct C_00bcc4c0 {
    int sub_00bcc4c0();
};

// @baa 0x00bcc4c0
int C_00bcc4c0::sub_00bcc4c0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00bcc4e0 {
    int sub_00bcc4e0();
};

// @baa 0x00bcc4e0
int C_00bcc4e0::sub_00bcc4e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00bcc4f0 {
    int sub_00bcc4f0();
};

// @baa 0x00bcc4f0
int C_00bcc4f0::sub_00bcc4f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + 4 + *(int *)*param_1;
}

struct TConstSetBitIterator_00bcce00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00bcce00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00bcce00& operator++();
};

TConstSetBitIterator_00bcce00::TConstSetBitIterator_00bcce00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00bcce00
TConstSetBitIterator_00bcce00& TConstSetBitIterator_00bcce00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00bcce20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00bcce20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00bcce20& operator++();
};

TConstSetBitIterator_00bcce20::TConstSetBitIterator_00bcce20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00bcce20
TConstSetBitIterator_00bcce20& TConstSetBitIterator_00bcce20::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00bcce70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00bcce70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00bcce70& operator++();
};

TConstSetBitIterator_00bcce70::TConstSetBitIterator_00bcce70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00bcce70
TConstSetBitIterator_00bcce70& TConstSetBitIterator_00bcce70::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00bccf80 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00bccf80(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00bccf80& operator++();
};

TConstSetBitIterator_00bccf80::TConstSetBitIterator_00bccf80(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00bccf80
TConstSetBitIterator_00bccf80& TConstSetBitIterator_00bccf80::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00bccfd0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00bccfd0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00bccfd0& operator++();
};

TConstSetBitIterator_00bccfd0::TConstSetBitIterator_00bccfd0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00bccfd0
TConstSetBitIterator_00bccfd0& TConstSetBitIterator_00bccfd0::operator++()
{
    It.Advance();
    return *this;
}

int sub_006f7810(void);
extern undefined * g_0201ad30;
// @baa 0x00bcd6a0
undefined4 * UPrimitiveComponent::sub_00bcd6a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_006f7810();
  *param_1 = (undefined4)(&g_0201ad30);
  return param_1;
}

// @baa 0x00bcd6c0
IMPLEMENT_CLASS_AT(ULensFlareComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\LensFlare.cpp", 11);

// @baa 0x00bcd720
struct C_00bcd750 {
    void * sub_00bcd750();
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x00bcd750
void * C_00bcd750::sub_00bcd750(void)
{
    void * param_1 = (void *)this;

  sub_01a37612(param_1,0,0x138);
  return param_1;
}

struct C_00bcdce0 {
    undefined4 sub_00bcdce0(byte);
};

int sub_00bc9100(void);
// @baa 0x00bcdce0
undefined4 C_00bcdce0::sub_00bcdce0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00bc9100();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00bce240
int sub_00bce240(void) { return 1690; }

struct C_00bce250 {
    float10 sub_00bce250(float);
};

// @baa 0x00bce250
float10 C_00bce250::sub_00bce250(float param_2)
{
    int param_1 = (int)this;
  return ((float10)*(float *)(param_1 + 0x158) - (float10)*(float *)(param_1 + 0x15c)) *
         (float10)param_2 + (float10)*(float *)(param_1 + 0x15c);
}

struct C_00bce2b0 { C_00bce2b0* sub_00bce2b0(void); };

// @baa 0x00bce2b0
C_00bce2b0* C_00bce2b0::sub_00bce2b0(void) { return this; }

struct T_00bce2c0 { int x; };

// @baa 0x00bce2c0
template T_00bce2c0& TIndirectArray<T_00bce2c0>::operator()(INT);

struct C_00bce310 {
    int sub_00bce310();
};

// @baa 0x00bce310
int C_00bce310::sub_00bce310(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x84) * 4;
}

struct C_00bcebc0 {
    void sub_00bcebc0(undefined4);
    int sub_00bcea30(int, int, int, int);
};

// @baa 0x00bcebc0
void C_00bcebc0::sub_00bcebc0(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_00bcebc0 *)(this))->sub_00bcea30(0, param_2, 0, *(uint *)(param_1 + 0x78) >> 10 & 7);
  return;
}

// @baa 0x00bcfce0
IMPLEMENT_CLASS_AT(USpeedTreeComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\SpeedTreeComponent.cpp", 15);

// @baa 0x00bcabb0
void __stdcall sub_00bcabb0(int Value, int* A, int* B, int* C)
{
    *A = Value;
    *B = Value;
    *C = Value;
}
