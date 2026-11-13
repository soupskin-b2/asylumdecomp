// UnAudio.cpp (part 1 of 13): 237 functions
// Placed here by: neighbours 158, class 56, callers 15, file 8.
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

struct TConstSetBitIterator_0076de80 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0076de80(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0076de80& operator++();
};

TConstSetBitIterator_0076de80::TConstSetBitIterator_0076de80(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0076de80
TConstSetBitIterator_0076de80& TConstSetBitIterator_0076de80::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0076ded0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0076ded0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0076ded0& operator++();
};

TConstSetBitIterator_0076ded0::TConstSetBitIterator_0076ded0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0076ded0
TConstSetBitIterator_0076ded0& TConstSetBitIterator_0076ded0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0076df20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0076df20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0076df20& operator++();
};

TConstSetBitIterator_0076df20::TConstSetBitIterator_0076df20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0076df20
TConstSetBitIterator_0076df20& TConstSetBitIterator_0076df20::operator++()
{
    It.Advance();
    return *this;
}

extern char g_01e3f3e0[];
// @baa 0x00785670
int sub_00785670(void) { return (int)g_01e3f3e0; }

// @baa 0x00785680
int sub_00785680(int a0, int a1) { return a1; }

// @baa 0x00785690
int sub_00785690(int a0, int a1) { return a1; }

// @baa 0x007856a0
int sub_007856a0(int a0, int a1) { return a1; }

// @baa 0x007856b0
int sub_007856b0(int a0, int a1) { return a1; }

// @baa 0x00785720
int sub_00785720(int a0, int a1) { return a1; }

struct S {
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void vf_0c();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18(INT Value);
};

// @baa 0x00785730
void sub_00785730(S* p, INT Value)
{
    p->vf_18(Value);
}

int sub_00cce950(...);
int sub_00cd06a0(void);
extern undefined4 g_026c3c88;
// @baa 0x00785750
int sub_00785750(void)
{
  if (g_026c3c88 == 0) {
    g_026c3c88 = sub_00cce950(L"Engine");
    sub_00cd06a0();
  }
  return g_026c3c88;
}

// @baa 0x00785780
void sub_00785780(S* p, INT Value)
{
    p->vf_18(Value);
}

// @baa 0x007857a0
void __stdcall sub_007857a0(int a0) {  }

int sub_00d023a0(void);
int sub_00d0ad90(...);
extern undefined4 g_026c5680;
// @baa 0x007857b0
int sub_007857b0(void)
{
  if (g_026c5680 == 0) {
    g_026c5680 = sub_00d0ad90(L"Engine");
    sub_00d023a0();
  }
  return g_026c5680;
}

int sub_00cedad0(...);
int sub_00cf1420(void);
extern undefined4 g_026c5684;
// @baa 0x007857e0
int sub_007857e0(void)
{
  if (g_026c5684 == 0) {
    g_026c5684 = sub_00cedad0(L"Engine");
    sub_00cf1420();
  }
  return g_026c5684;
}

int sub_0150e7d0(void);
int sub_01532490(...);
extern undefined4 g_026e0b58;
// @baa 0x00785810
int sub_00785810(void)
{
  if (g_026e0b58 == 0) {
    g_026e0b58 = sub_01532490(L"CommonGame");
    sub_0150e7d0();
  }
  return g_026e0b58;
}

// @baa 0x00785840
IMPLEMENT_CLASS_AT(UAudioDevice, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAudio.cpp", 17);

// @baa 0x00785970
bool UAudioDevice::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x007859b0
IMPLEMENT_CLASS_AT(USoundMode, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAudio.cpp", 18);

// @baa 0x00785ac0
int USoundMode::vf_000(void) { return 1; }

// @baa 0x00785ad0
bool USoundMode::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00785b10
IMPLEMENT_CLASS_AT(AAmbientSound, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAudio.cpp", 19);

// @baa 0x00785c20
int AAmbientSound::vf_000(void) { return 1; }

// @baa 0x00785c30
bool AAmbientSound::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00785c70
int AAmbientSoundSimple::vf_000(void) { return 1; }

// @baa 0x00785c80
int AAmbientSoundNonLoop::vf_000(void) { return 1; }

// @baa 0x00785c90
int AAmbientSoundMovable::vf_000(void) { return 1; }

// @baa 0x00785ca0
IMPLEMENT_CLASS_AT(UDrawSoundRadiusComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAudio.cpp", 23);

// @baa 0x00785db0
int UDrawSoundRadiusComponent::vf_000(void) { return 1; }

// @baa 0x00785dc0
bool UDrawSoundRadiusComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00785e10
void UAudioDevice::vf_124(int a0) { *(int*)((char*)this + 408) = a0; }

// @baa 0x00785f30
void __stdcall sub_00785f30(int a0) {  }

struct C {
    undefined4 sub_00785f50();
};

// @baa 0x00785f50
undefined4 C::sub_00785f50(void)
{
    int param_1 = (int)this;
  int iVar1;
  if (((*(int *)(param_1 + 8) != 0) && (iVar1 = *(int *)(*(int *)(param_1 + 8) + 8), iVar1 != 0)) &&
     ((*(uint *)(iVar1 + 0x60) & 0x4000) != 0)) {
    return 0;
  }
  return 1;
}

struct C_00785f70 {
    undefined4 sub_00785f70();
};

// @baa 0x00785f70
undefined4 C_00785f70::sub_00785f70(void)
{
    int param_1 = (int)this;
  int *piVar1;
  piVar1 = *(int **)(param_1 + 8);
  *(uint *)(param_1 + 0x14) = (uint)(piVar1[0xf] == 0);
  if (piVar1[0xe] != 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if (2 < *(int *)(*piVar1 + 0x78)) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return *(undefined4 *)(param_1 + 0x14);
}

struct C_00786070 { int sub_00786070(void); };

// @baa 0x00786070
int C_00786070::sub_00786070(void) { return *(int*)((char*)this + 28); }

struct C_00786080 {
    void sub_00786080();
};

// @baa 0x00786080
void C_00786080::sub_00786080(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x1c) = (uint)(*(int *)(param_1 + 0x14) != 2);
  return;
}

// @baa 0x007861f0
INT UAudioComponent::vf_144() {
    int param_1 = (int)this;

  if ((*(int *)(param_1 + 0x40) != 0) && ((*(byte *)(param_1 + 0x60) & 8) == 0)) {
    return 0;
  }
  return 1;
}

// @baa 0x00786280
uint UAudioComponent::sub_00786280(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x60) >> 0x13 & 1;
}

// @baa 0x00786290
uint UAudioComponent::sub_00786290(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x60) >> 0x12 & 1;
}

// @baa 0x007862f0
float10 sub_007862f0(void)
{
  return (float10)1;
}

// @baa 0x00786300
float10 sub_00786300(void)
{
  return (float10)1;
}

// @baa 0x00786310
float10 sub_00786310(void)
{
  return (float10)1;
}

struct S_00786630 {
    void sub_007814b0();
    void sub_00786580();
    void sub_00786630();
};

// @baa 0x00786630
void S_00786630::sub_00786630() {
    sub_007814b0();
    sub_00786580();
}

struct C_view {
    int sub_00763370(int);
};

// @baa 0x00786650
void AAmbientSoundSimple::PreEditChange(UProperty* param_2)
{
    int param_1 = (int)this;
  Super::PreEditChange(param_2);
  if (*(int *)(param_1 + 0x1ac) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x1ac) + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x1b0) = 0;
  }
  return;
}

// @baa 0x00786bc0
int sub_00786bc0(void) { return 1690; }

// @baa 0x00786bd0
void UAudioDevice::vf_1d8(void) {  }

// @baa 0x00786be0
void UAudioDevice::vf_110(int a0, int a1) {  }

// @baa 0x00786bf0
void UAudioDevice::vf_120(void) {  }

// @baa 0x00786c00
void UAudioDevice::vf_114(float param_2)
{
    int param_1 = (int)this;
  if (*(float *)(param_1 + 0x110) != param_2) {
    *(float *)(param_1 + 0x110) = param_2;
  }
  return;
}

// @baa 0x00786c30
float UAudioDevice::vf_118(void) { return *(float*)((char*)this + 272); }

// @baa 0x007891b0
int sub_007891b0(int a0) { return *(int*)a0; }

// @baa 0x007891c0
bool sub_007891c0(int param_1, int param_2)
{
  return param_1 == param_2;
}

// @baa 0x007891d0
int sub_007891d0(int a0) { return *(int*)a0; }

// @baa 0x007891e0
bool sub_007891e0(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_007891f0 { C_007891f0* sub_007891f0(void); };

// @baa 0x007891f0
C_007891f0* C_007891f0::sub_007891f0(void) { return this; }

struct C_00789230 { C_00789230* sub_00789230(void); };

// @baa 0x00789230
C_00789230* C_00789230::sub_00789230(void) { return this; }

struct C_00789290 { C_00789290* sub_00789290(void); };

// @baa 0x00789290
C_00789290* C_00789290::sub_00789290(void) { return this; }

struct C_007892f0 {
    int sub_007892f0(int);
};

// @baa 0x007892f0
int C_007892f0::sub_007892f0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00789300 {
    int sub_00789300(int);
};

// @baa 0x00789300
int C_00789300::sub_00789300(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00789310 {
    int sub_00789310(int);
};

// @baa 0x00789310
int C_00789310::sub_00789310(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00789320 { int a, b; C_00789320(int, int); };

// @baa 0x00789320
C_00789320::C_00789320(int x, int y) : a(x), b(y) {}

struct C_00789340 { int a, b; C_00789340(int, int); };

// @baa 0x00789340
C_00789340::C_00789340(int x, int y) : a(x), b(y) {}

struct C_00789360 { int sub_00789360(void); };

// @baa 0x00789360
int C_00789360::sub_00789360(void) { return *(int*)((char*)this + 20); }

struct C_00789370 { int sub_00789370(void); };

// @baa 0x00789370
int C_00789370::sub_00789370(void) { return *(int*)((char*)this + 20); }

struct C_00789380 { int sub_00789380(void); };

// @baa 0x00789380
int C_00789380::sub_00789380(void) { return *(int*)((char*)this + 20); }

struct C_00789390 { int sub_00789390(void); };

// @baa 0x00789390
int C_00789390::sub_00789390(void) { return *(int*)((char*)this + 20); }

struct C_007893a0 { int sub_007893a0(void); };

// @baa 0x007893a0
int C_007893a0::sub_007893a0(void) { return *(int*)((char*)this + 20); }

// @baa 0x007893b0
int sub_007893b0(int a0) { return *(int*)a0; }

// @baa 0x007893c0
int sub_007893c0(int a0) { return *(int*)a0; }

struct C_007893d0 {
    int sub_007893d0(int);
};

// @baa 0x007893d0
int C_007893d0::sub_007893d0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_007893e0 {
    int sub_007893e0(int);
};

// @baa 0x007893e0
int C_007893e0::sub_007893e0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_007893f0 { int a, b; C_007893f0(int, int); };

// @baa 0x007893f0
C_007893f0::C_007893f0(int x, int y) : a(x), b(y) {}

struct C_00789410 { int a, b; C_00789410(int, int); };

// @baa 0x00789410
C_00789410::C_00789410(int x, int y) : a(x), b(y) {}

int sub_005eae70(...);
int sub_00ccdba0(void);
int sub_00cdc050(...);
extern undefined4 g_026c3c6c;
// @baa 0x00789430
void sub_00789430(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  if (g_026c3c6c == 0) {
    g_026c3c6c = sub_00cdc050(L"Engine");
    sub_00ccdba0();
  }
  sub_005eae70(g_026c3c6c,param_1,param_2,param_3,param_4,param_5,1);
  return;
}

struct C_007894e0 {
    undefined4 sub_007894e0();
};

int sub_00764b50(void);
int sub_007846f0(...);
int sub_0078952f(...);
extern undefined4 g_026b3ccc;
// @baa 0x007894e0
undefined4 C_007894e0::sub_007894e0(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    if (g_026b3ccc == 0) {
      g_026b3ccc = sub_007846f0(L"Engine");
      sub_00764b50();
      if (g_026b3ccc == 0) {
sub_0078952f:
        return *(undefined4 *)(param_1 + 0x2c);
      }
    }
    for (iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + 0x28); iVar1 != 0;
        iVar1 = *(int *)(iVar1 + 0x30)) {
      if (iVar1 == g_026b3ccc) goto sub_0078952f;
    }
  }
  return 0;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_0078fd80 { void* Data; int Num; int Max; void sub_0078fd80(); };

// @baa 0x0078fd80
void C_0078fd80::sub_0078fd80() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0078fde0 { void* Data; int Num; int Max; void sub_0078fde0(); };

// @baa 0x0078fde0
void C_0078fde0::sub_0078fde0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0078fe40 {
    int sub_0078c730(UINT*);
    int sub_0078fe40(UINT*);
};

// @baa 0x0078fe40
int C_0078fe40::sub_0078fe40(UINT* p)
{
    return sub_0078c730(p);
}

struct T_0078fe50;
// @baa 0x0078fe50
template INT TArray<T_0078fe50*>::RemoveItem(T_0078fe50* const&);

struct T_00790060;
// @baa 0x00790060
template INT TArray<T_00790060*>::RemoveItem(T_00790060* const&);

struct C_007902a0 { void* Data; int Num; int Max; void sub_007902a0(); };

// @baa 0x007902a0
void C_007902a0::sub_007902a0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00790300 { void* Data; int Num; int Max; void sub_00790300(); };

// @baa 0x00790300
void C_00790300::sub_00790300() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00790360 {
    void sub_00790360(int);
};

int sub_0053df70(...);
// @baa 0x00790360
void C_00790360::sub_00790360(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x48,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_007903a0 { void* Data; int Num; int Max; void sub_007903a0(); };

// @baa 0x007903a0
void C_007903a0::sub_007903a0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00790400 { void* Data; int Num; int Max; void sub_00790400(); };

// @baa 0x00790400
void C_00790400::sub_00790400() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00790460 { void* Data; int Num; int Max; void sub_00790460(); };

// @baa 0x00790460
void C_00790460::sub_00790460() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x007909d0
int UBrushComponent::sub_007909d0(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x18;
}

// @baa 0x00790a60
int UBrushComponent::sub_00790a60(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_view_00791b10 {
    int sub_00786580();
    int sub_00791770();
    int sub_00783b70(int);
};

// @baa 0x00791b10
void AAmbientSoundSimple::PostEditChange(UProperty* param_2)
{
    int param_1 = (int)this;
  if (*(int *)(param_1 + 0x1ac) != 0) {
    ((C_view_00791b10 *)(this))->sub_00786580();
    if ((*(byte *)(*(int *)(param_1 + 0x1ac) + 0x60) & 0x80) != 0) {
      ((C_view_00791b10 *)((*(char **)((char *)this + 0x1ac))))->sub_00791770();
    }
  }
  Super::PostEditChange(param_2);
  return;
}

struct C_00792fa0 { C_00792fa0* sub_00792fa0(void); };

// @baa 0x00792fa0
C_00792fa0* C_00792fa0::sub_00792fa0(void) { return this; }

struct C_00792fb0 { C_00792fb0* sub_00792fb0(void); };

// @baa 0x00792fb0
C_00792fb0* C_00792fb0::sub_00792fb0(void) { return this; }

struct C_00793010 { C_00793010* sub_00793010(void); };

// @baa 0x00793010
C_00793010* C_00793010::sub_00793010(void) { return this; }

struct C_00793070 { int sub_00793070(void); };

// @baa 0x00793070
int C_00793070::sub_00793070(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_007930b0 { C_007930b0* sub_007930b0(void); };

// @baa 0x007930b0
C_007930b0* C_007930b0::sub_007930b0(void) { return this; }

struct C_007930c0 { C_007930c0* sub_007930c0(void); };

// @baa 0x007930c0
C_007930c0* C_007930c0::sub_007930c0(void) { return this; }

extern TArray<int> g_026a1ca4;
struct C_007930d0 {
    int sub_007930d0();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x007930d0
int C_007930d0::sub_007930d0()
{
    return g_026a1ca4(Index);
}

struct C_00793130 {
    int sub_00793130();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x00793130
int C_00793130::sub_00793130()
{
    return g_026a1ca4(Index);
}

struct C_00793190 {
    int sub_00793190();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x00793190
int C_00793190::sub_00793190()
{
    return g_026a1ca4(Index);
}

struct C_007931f0 {
    int sub_007931f0();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x007931f0
int C_007931f0::sub_007931f0()
{
    return g_026a1ca4(Index);
}

struct C_00793250 {
    int sub_00793250(int);
};

// @baa 0x00793250
int C_00793250::sub_00793250(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_view_00793260 {
    int sub_00790960(int, int);
};

// @baa 0x00793260
int UBrushComponent::sub_00793260(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00793260 *)(this))->sub_00790960((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x18;
  }
  return 0;
}

struct C_view_00793290 {
    int sub_007909e0(int, int);
};

// @baa 0x00793290
int UBrushComponent::sub_00793290(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view_00793290 *)(this))->sub_007909e0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x10 + *param_1;
  }
  return 0;
}

// @baa 0x007932c0
int UBrushComponent::sub_007932c0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_007932d0 {
    int sub_007932d0();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x007932d0
int C_007932d0::sub_007932d0()
{
    return g_026a1ca4(Index);
}

struct C_00793330 {
    int sub_00793330();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x00793330
int C_00793330::sub_00793330()
{
    return g_026a1ca4(Index);
}

struct C_007933d0 {
    int sub_007933d0();
};

// @baa 0x007933d0
int C_007933d0::sub_007933d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[2] * 0x10 + *(int *)*param_1;
}

int sub_0053dfa0(...);
int sub_00549310(void);
// @baa 0x007933e0
undefined4 UObject::sub_007933e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00549310();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00793570
int UBrushComponent::sub_00793570(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

struct TConstSetBitIterator_007936a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007936a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007936a0& operator++();
};

TConstSetBitIterator_007936a0::TConstSetBitIterator_007936a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007936a0
TConstSetBitIterator_007936a0& TConstSetBitIterator_007936a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007936c0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007936c0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007936c0& operator++();
};

TConstSetBitIterator_007936c0::TConstSetBitIterator_007936c0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007936c0
TConstSetBitIterator_007936c0& TConstSetBitIterator_007936c0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00793710 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00793710(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00793710& operator++();
};

TConstSetBitIterator_00793710::TConstSetBitIterator_00793710(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00793710
TConstSetBitIterator_00793710& TConstSetBitIterator_00793710::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00793730 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00793730(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00793730& operator++();
};

TConstSetBitIterator_00793730::TConstSetBitIterator_00793730(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00793730
TConstSetBitIterator_00793730& TConstSetBitIterator_00793730::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00793750 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00793750(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00793750& operator++();
};

TConstSetBitIterator_00793750::TConstSetBitIterator_00793750(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00793750
TConstSetBitIterator_00793750& TConstSetBitIterator_00793750::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00793770 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00793770(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00793770& operator++();
};

TConstSetBitIterator_00793770::TConstSetBitIterator_00793770(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00793770
TConstSetBitIterator_00793770& TConstSetBitIterator_00793770::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00793790 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00793790(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00793790& operator++();
};

TConstSetBitIterator_00793790::TConstSetBitIterator_00793790(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00793790
TConstSetBitIterator_00793790& TConstSetBitIterator_00793790::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_007937e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_007937e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_007937e0& operator++();
};

TConstSetBitIterator_007937e0::TConstSetBitIterator_007937e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x007937e0
TConstSetBitIterator_007937e0& TConstSetBitIterator_007937e0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00793830 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00793830(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00793830& operator++();
};

TConstSetBitIterator_00793830::TConstSetBitIterator_00793830(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00793830
TConstSetBitIterator_00793830& TConstSetBitIterator_00793830::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00793880 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00793880(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00793880& operator++();
};

TConstSetBitIterator_00793880::TConstSetBitIterator_00793880(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00793880
TConstSetBitIterator_00793880& TConstSetBitIterator_00793880::operator++()
{
    It.Advance();
    return *this;
}

void sub_00792c00();
// @baa 0x007938f0
void sub_007938f0(void) { sub_00792c00(); }

void sub_00792cc0();
// @baa 0x00793900
void sub_00793900(void) { sub_00792cc0(); }

void sub_00792d80();
// @baa 0x00793910
void sub_00793910(void) { sub_00792d80(); }

// @baa 0x00793990
// @baa 0x00793a00
int sub_00793400(void);
// @baa 0x00794af0
undefined4 UBrushComponent::sub_00794af0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00793400();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct TConstSetBitIterator_00794d50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00794d50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00794d50& operator++();
};

TConstSetBitIterator_00794d50::TConstSetBitIterator_00794d50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00794d50
TConstSetBitIterator_00794d50& TConstSetBitIterator_00794d50::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00794e00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00794e00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00794e00& operator++();
};

TConstSetBitIterator_00794e00::TConstSetBitIterator_00794e00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00794e00
TConstSetBitIterator_00794e00& TConstSetBitIterator_00794e00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00794e50 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00794e50(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00794e50& operator++();
};

TConstSetBitIterator_00794e50::TConstSetBitIterator_00794e50(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00794e50
TConstSetBitIterator_00794e50& TConstSetBitIterator_00794e50::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00794ea0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00794ea0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00794ea0& operator++();
};

TConstSetBitIterator_00794ea0::TConstSetBitIterator_00794ea0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00794ea0
TConstSetBitIterator_00794ea0& TConstSetBitIterator_00794ea0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00794ef0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00794ef0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00794ef0& operator++();
};

TConstSetBitIterator_00794ef0::TConstSetBitIterator_00794ef0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00794ef0
TConstSetBitIterator_00794ef0& TConstSetBitIterator_00794ef0::operator++()
{
    It.Advance();
    return *this;
}

int sub_006f7810(void);
extern undefined * g_01f16308;
// @baa 0x00794f40
undefined4 * UPrimitiveComponent::sub_00794f40(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_006f7810();
  *param_1 = (undefined4)(&g_01f16308);
  return param_1;
}

// @baa 0x00794f60
// @baa 0x00794fc0
// @baa 0x00795060
struct C_view_007967b0 {
    int sub_00794b10(int);
};

// @baa 0x007967b0
void UBrushComponent::sub_007967b0(void)
{
    int param_1 = (int)this;
  ((C_view_007967b0 *)((*(char **)((char *)this + 0x10))))->sub_00794b10(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

void sub_00796530();
// @baa 0x00797480
void sub_00797480(void) { sub_00796530(); }

struct C_00797490 { int a, b, c; C_00797490(); };

// @baa 0x00797490
C_00797490::C_00797490() : a(0), b(0), c(0) {}

// @baa 0x007974a0
// @baa 0x007974c0
void sub_00796730();
// @baa 0x00797820
void sub_00797820(void) { sub_00796730(); }

int sub_00794da0(void);
// @baa 0x00797cd0
int UBrushComponent::sub_00797cd0(void)
{
    int param_1 = (int)this;

  sub_00794da0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_00797660(...);
// @baa 0x00797dc0
undefined4 sub_00797dc0(undefined4 param_1, undefined4 param_2)
{
  sub_00797660(param_1,param_2);
  return param_1;
}

void sub_00797750();
// @baa 0x00797de0
void sub_00797de0(void) { sub_00797750(); }

// @baa 0x00797e70
IMPLEMENT_CLASS_AT(ACamera, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnCamera.cpp", 11);

// @baa 0x00797ee0
void ACamera::vf_360(FPostProcessSettings& a0) {  }

// @baa 0x00797ef0
// @baa 0x00797f80
IMPLEMENT_CLASS_AT(AAnimatedCamera, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnCamera.cpp", 14);

// @baa 0x00798000
// @baa 0x00798030
IMPLEMENT_CLASS_AT(ACameraActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnCamera.cpp", 12);

// @baa 0x00798090
// @baa 0x00798120
IMPLEMENT_CLASS_AT(ADynamicCameraActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnCamera.cpp", 13);

// @baa 0x00798180
// @baa 0x007981b0
// @baa 0x00798210
// @baa 0x007982a0
IMPLEMENT_CLASS_AT(AAmbientSoundMovable, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAudio.cpp", 22);

// @baa 0x00798300
// @baa 0x00798330
IMPLEMENT_CLASS_AT(AAmbientSoundSimple, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAudio.cpp", 20);

// @baa 0x00798390
// @baa 0x00798420
IMPLEMENT_CLASS_AT(AAmbientSoundNonLoop, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAudio.cpp", 21);

// @baa 0x00798480
struct C_view_00798590 {
    int sub_006db600(int);
};

// @baa 0x00798590
void UBrushComponent::Serialize(FArchive& Ar)
{
    undefined4 param_2 = (undefined4)&Ar;
    int param_1 = (int)this;
  ((C_view_00798590 *)(this))->sub_006db600(param_2);
  sub_00797660(param_2,param_1 + 0x1e4);
  return;
}

struct C_007985c0 { C_007985c0* sub_007985c0(void); };

// @baa 0x007985c0
C_007985c0* C_007985c0::sub_007985c0(void) { return this; }

struct C_view_00798a50 {
    int sub_00797be0(int, int);
};

// @baa 0x00798a50
undefined4 UBrushComponent::sub_00798a50(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_00798a50 *)(this))->sub_00797be0(param_2, param_3);
  return param_1;
}

struct C_view_00798a70 {
    int sub_00797c60(int, int);
};

// @baa 0x00798a70
int UBrushComponent::sub_00798a70(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00798a70 *)(this))->sub_00797c60(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

// @baa 0x00798a90
int UBrushComponent::sub_00798a90(void)
{
    int param_1 = (int)this;

  sub_00794da0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00798ab0 { C_00798ab0* sub_00798ab0(void); };

// @baa 0x00798ab0
C_00798ab0* C_00798ab0::sub_00798ab0(void) { return this; }

// @baa 0x00798af0
IMPLEMENT_CLASS_AT(UBrushComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnBrushComponent.cpp", 11);

// @baa 0x00798b70
// @baa 0x00798ba0
// @baa 0x00798bd0
// @baa 0x00798c00
// @baa 0x00798c30
void sub_007985d0();
// @baa 0x00798c60
void sub_00798c60(void) { sub_007985d0(); }

// @baa 0x00798c70
// @baa 0x00798ca0
// @baa 0x00798cd0
// @baa 0x00798d00
// @baa 0x00798d30
// @baa 0x00798df0
// @baa 0x00798eb0
// @baa 0x00798f70
// @baa 0x007997d0
// @baa 0x007998e0
bool AAmbientSoundSimple::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00799920
// @baa 0x00799a30
bool AAmbientSoundMovable::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0079be50
void sub_0079be50(void) { sub_007985d0(); }

int sub_00798f70(...);
int sub_00799920(void);
extern undefined4 g_026b439c;
// @baa 0x0079be60
int sub_0079be60(void)
{
  if (g_026b439c == 0) {
    g_026b439c = sub_00798f70(L"Engine");
    sub_00799920();
  }
  return g_026b439c;
}

int sub_00798df0(...);
int sub_007997d0(void);
extern undefined4 g_026b4394;
// @baa 0x0079be90
int sub_0079be90(void)
{
  if (g_026b4394 == 0) {
    g_026b4394 = sub_00798df0(L"Engine");
    sub_007997d0();
  }
  return g_026b4394;
}

// @baa 0x0079bec0
// @baa 0x0079bfd0
bool AAmbientSoundNonLoop::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct S_0079c6b0 {
    void sub_00799ca0();
    void sub_005db340();
    void sub_0079c6b0();
};

// @baa 0x0079c6b0
void S_0079c6b0::sub_0079c6b0() {
    sub_00799ca0();
    sub_005db340();
}

struct C_view_0079c720 {
    int sub_00799e00();
};

int sub_006311e0(...);
extern undefined4 g_01f10aa4;
// @baa 0x0079c720
void UAudioComponent::sub_0079c720(undefined4 param_2)
{
    int param_1 = (int)this;
  if ((*(byte *)(param_1 + 0x60) & 4) != 0) {
    sub_006311e0("!bAutoDestroy",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAudio.cpp"
                 ,0x8c6,&g_01f10aa4);
  }
  ((C_view_0079c720 *)(this))->sub_00799e00();
  *(undefined4 *)(param_1 + 0x4c) = param_2;
  return;
}

// @baa 0x0079c8a0
int UAudioDevice::vf_134(void) { return 0; }

// @baa 0x0079c8b0
void UAudioDevice::vf_138(int a0, int a1, int a2, int a3, int a4, int a5) {  }

// @baa 0x0079c8c0
void UAudioDevice::vf_148(int a0) {  }

// @baa 0x0079c8d0
void UAudioDevice::vf_144(int a0) {  }

// @baa 0x0079c8e0
void UAudioDevice::vf_140(int a0) {  }

// @baa 0x0079c8f0
void UAudioDevice::vf_14c(int a0) {  }

// @baa 0x0079c900
void UAudioDevice::vf_150(int a0) {  }

// @baa 0x0079c910
void UAudioDevice::vf_154(int a0) {  }

// @baa 0x0079c920
void UAudioDevice::vf_15c(UINT a0) {  }

// @baa 0x0079c930
bool UAudioDevice::vf_158(INT a1) {
    return 0;
}

// @baa 0x0079c940
void UAudioDevice::vf_160(int a0, int a1) {  }

// @baa 0x0079c950
int UAudioDevice::vf_164(int a0, int a1) { return 0; }

// @baa 0x0079c960
int UAudioDevice::vf_168(int a0, int a1) { return 0; }

// @baa 0x0079c970
int UAudioDevice::vf_16c(int a0, int a1, int a2) { return 0; }

// @baa 0x0079c980
int UAudioDevice::vf_170(int a0, int a1, int a2, int a3, int a4) { return 0; }

// @baa 0x0079c990
float UAudioDevice::vf_174(int param) {
    (void)param;
    return 0.0f;
}

// @baa 0x0079c9a0
int UAudioDevice::vf_178(int a0) { return 0; }

// @baa 0x0079c9b0
int UAudioDevice::vf_17c(int a0) { return 0; }

// @baa 0x0079c9c0
void UAudioDevice::vf_180(int a0, int a1) {  }

// @baa 0x0079c9d0
void UAudioDevice::vf_184(int a0) {  }

// @baa 0x0079c9e0
int UAudioDevice::vf_188(int a0, int a1) { return 1; }

// @baa 0x0079c9f0
void UAudioDevice::vf_18c(int a0, int a1) {  }

// @baa 0x0079ca00
void UAudioDevice::vf_190(int a0) {  }

// @baa 0x0079ca10
void __stdcall sub_0079ca10(int a0, int a1) {  }

// @baa 0x0079ca20
void UAudioDevice::vf_198(int a0) {  }

// @baa 0x0079ca50
int UAudioDevice::vf_1a0(int a0) { return 0; }

// @baa 0x0079ca60
INT UAudioDevice::vf_1a4(INT a0) { return 0; }

// @baa 0x0079ca70
int UAudioDevice::vf_1a8(int a0) { return 0; }

// @baa 0x0079ca80
INT UAudioDevice::vf_1ac(INT a0, INT a1) { return 0; }

// @baa 0x0079ca90
void UAudioDevice::vf_1b0(INT a0) {  }

// @baa 0x0079caa0
void UAudioDevice::vf_1b4(int a0) {  }

// @baa 0x0079cab0
void UAudioDevice::vf_1b8(int a0) {  }

// @baa 0x0079cac0
void UAudioDevice::vf_1bc(void) {  }

// @baa 0x0079cad0
int UAudioDevice::vf_1c0(void) { return 0; }

// @baa 0x0079cae0
void UAudioDevice::vf_1c4(void) {  }

// @baa 0x0079caf0
void UAudioDevice::vf_1c8(void) {  }

// @baa 0x0079cb00
int UAudioDevice::vf_1cc(int a0) { return 0; }

// @baa 0x0079cb10
void UAudioDevice::vf_1d0(void) {  }

// @baa 0x0079cb20
int UAudioDevice::vf_1d4(void) { return 0; }

int sub_005c7a70(...);
int sub_0079cb30(void);
// @baa 0x0079cc20
undefined4 UAudioDevice::sub_0079cc20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0079cb30();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x19c);
  }
  return param_1;
}

int sub_00798eb0(...);
int sub_0079bec0(void);
extern undefined4 g_026b4398;
// @baa 0x0079cc50
int sub_0079cc50(void)
{
  if (g_026b4398 == 0) {
    g_026b4398 = sub_00798eb0(L"Engine");
    sub_0079bec0();
  }
  return g_026b4398;
}

void sub_006efb40();
// @baa 0x0079d4f0
void sub_0079d4f0(void) { sub_006efb40(); }

// @baa 0x0079d840
// @baa 0x0079d850
int sub_00785840(void);
int sub_0079d850(...);
extern undefined4 g_026b4388;
// @baa 0x0079ddc0
int sub_0079ddc0(void)
{
  if (g_026b4388 == 0) {
    g_026b4388 = sub_0079d850(L"Engine");
    sub_00785840();
  }
  return g_026b4388;
}

struct D_01e23a50 { void sub_0076a4b0(); };

extern D_01e23a50 g_026b52c8;
// @baa 0x01e23a50
void sub_01e23a50() { g_026b52c8.sub_0076a4b0(); }
