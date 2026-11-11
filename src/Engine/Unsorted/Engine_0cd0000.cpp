// Engine_0cd0000.cpp (part 1 of 5): 37 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00cd0120
IMPLEMENT_CLASS_AT(ACrowdReplicationActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnCrowd.cpp", 12);

// @baa 0x00cd0180
// @baa 0x00cd0200
void ACrowdAgent::vf_358(int a0) {  }

// @baa 0x00cd0210
IMPLEMENT_CLASS_AT(ACrowdAgent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnCrowd.cpp", 9);

// @baa 0x00cd0290
// @baa 0x00cd02f0
IMPLEMENT_CLASS_AT(ACrowdAttractor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnCrowd.cpp", 10);

// @baa 0x00cd0350
int sub_00ccdcf0(...);
int sub_00ccddb0(void);
extern undefined4 g_026c3c70;
// @baa 0x00cd0380
int sub_00cd0380(void)
{
  if (g_026c3c70 == 0) {
    g_026c3c70 = sub_00ccdcf0(L"Engine");
    sub_00ccddb0();
  }
  return g_026c3c70;
}

int sub_00cce740(...);
int sub_00cce800(void);
extern undefined4 g_026c3c84;
// @baa 0x00cd03b0
int sub_00cd03b0(void)
{
  if (g_026c3c84 == 0) {
    g_026c3c84 = sub_00cce740(L"Engine");
    sub_00cce800();
  }
  return g_026c3c84;
}

int sub_00ccacd0(...);
int sub_00cceec0(void);
extern undefined4 g_026c3c98;
// @baa 0x00cd03e0
int sub_00cd03e0(void)
{
  if (g_026c3c98 == 0) {
    g_026c3c98 = sub_00ccacd0(L"Engine");
    sub_00cceec0();
  }
  return g_026c3c98;
}

int sub_00ccecb0(...);
int sub_00cced70(void);
extern undefined4 g_026c3c94;
// @baa 0x00cd0410
int sub_00cd0410(void)
{
  if (g_026c3c94 == 0) {
    g_026c3c94 = sub_00ccecb0(L"Engine");
    sub_00cced70();
  }
  return g_026c3c94;
}

int sub_00ccdf00(...);
int sub_00ccdfc0(void);
extern undefined4 g_026c3c74;
// @baa 0x00cd0440
int sub_00cd0440(void)
{
  if (g_026c3c74 == 0) {
    g_026c3c74 = sub_00ccdf00(L"Engine");
    sub_00ccdfc0();
  }
  return g_026c3c74;
}

int sub_00ccad90(...);
int sub_00ccf010(void);
extern undefined4 g_026c3ca4;
// @baa 0x00cd0470
int sub_00cd0470(void)
{
  if (g_026c3ca4 == 0) {
    g_026c3ca4 = sub_00ccad90(L"Engine");
    sub_00ccf010();
  }
  return g_026c3ca4;
}

int sub_00ccaa90(...);
int sub_00ccd900(void);
extern undefined4 g_026c3c64;
// @baa 0x00cd04a0
int sub_00cd04a0(void)
{
  if (g_026c3c64 == 0) {
    g_026c3c64 = sub_00ccaa90(L"Engine");
    sub_00ccd900();
  }
  return g_026c3c64;
}

int sub_00cce320(...);
int sub_00cce3e0(void);
extern undefined4 g_026c3c7c;
// @baa 0x00cd04d0
int sub_00cd04d0(void)
{
  if (g_026c3c7c == 0) {
    g_026c3c7c = sub_00cce320(L"Engine");
    sub_00cce3e0();
  }
  return g_026c3c7c;
}

int sub_00cce530(...);
int sub_00cce5f0(void);
extern undefined4 g_026c3c80;
// @baa 0x00cd0500
int sub_00cd0500(void)
{
  if (g_026c3c80 == 0) {
    g_026c3c80 = sub_00cce530(L"Engine");
    sub_00cce5f0();
  }
  return g_026c3c80;
}

int sub_00cce110(...);
int sub_00cce1d0(void);
extern undefined4 g_026c3c78;
// @baa 0x00cd0530
int sub_00cd0530(void)
{
  if (g_026c3c78 == 0) {
    g_026c3c78 = sub_00cce110(L"Engine");
    sub_00cce1d0();
  }
  return g_026c3c78;
}

int sub_00ccac10(...);
int sub_00cceb60(void);
extern undefined4 g_026c3c90;
// @baa 0x00cd0560
int sub_00cd0560(void)
{
  if (g_026c3c90 == 0) {
    g_026c3c90 = sub_00ccac10(L"Engine");
    sub_00cceb60();
  }
  return g_026c3c90;
}

int sub_00ccab50(...);
int sub_00ccea10(void);
extern undefined4 g_026c3c8c;
// @baa 0x00cd0590
int sub_00cd0590(void)
{
  if (g_026c3c8c == 0) {
    g_026c3c8c = sub_00ccab50(L"Engine");
    sub_00ccea10();
  }
  return g_026c3c8c;
}

// @baa 0x00cd06a0
IMPLEMENT_CLASS_AT(USoundNodeAmbientNonLoop, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAudioNodes.cpp", 1932);

// @baa 0x00cd07b0
bool USoundNodeAmbientNonLoop::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct M_00cd1100 { void sub_00ccc0c0(); };

struct C { char pad[96]; M_00cd1100 m; void sub_00cd1100(); };

// @baa 0x00cd1100
void C::sub_00cd1100() { m.sub_00ccc0c0(); }

void sub_00ccf260();
// @baa 0x00cd11e0
void sub_00cd11e0(void) { sub_00ccf260(); }

struct C_00cd1880 { void sub_00ccc920(int); C_00cd1880 *sub_00cd1880(int); };

// @baa 0x00cd1880
C_00cd1880 *C_00cd1880::sub_00cd1880(int a) { sub_00ccc920(a); return this; }

struct C_00cd1a20 { void sub_007c7b70(int); C_00cd1a20 *sub_00cd1a20(int); };

// @baa 0x00cd1a20
C_00cd1a20 *C_00cd1a20::sub_00cd1a20(int a) { sub_007c7b70(a); return this; }

struct C_view {
    int sub_00ccf750(int, int);
};

// @baa 0x00cd1c50
undefined4 UBrushComponent::sub_00cd1c50(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view *)(this))->sub_00ccf750(param_2, param_3);
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

struct TConstSetBitIterator_00cd1c70 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00cd1c70(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00cd1c70& operator++();
};

TConstSetBitIterator_00cd1c70::TConstSetBitIterator_00cd1c70(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00cd1c70
TConstSetBitIterator_00cd1c70& TConstSetBitIterator_00cd1c70::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00cd1cc0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00cd1cc0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00cd1cc0& operator++();
};

TConstSetBitIterator_00cd1cc0::TConstSetBitIterator_00cd1cc0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00cd1cc0
TConstSetBitIterator_00cd1cc0& TConstSetBitIterator_00cd1cc0::operator++()
{
    It.Advance();
    return *this;
}

struct C_view_00cd1d10 {
    int sub_00ccf7b0(int, int);
};

// @baa 0x00cd1d10
int UBrushComponent::sub_00cd1d10(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00cd1d10 *)(this))->sub_00ccf7b0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

int sub_0053dfa0(...);
int sub_00ccbf20(void);
// @baa 0x00cd1d30
undefined4 UBrushComponent::sub_00cd1d30(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00ccbf20();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00cc8150(void);
// @baa 0x00cd1dd0
int UBrushComponent::sub_00cd1dd0(void)
{
    int param_1 = (int)this;

  sub_00cc8150();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_00cd1600();
// @baa 0x00cd2020
void sub_00cd2020(void) { sub_00cd1600(); }

void sub_00cd18a0();
// @baa 0x00cd2080
void sub_00cd2080(void) { sub_00cd18a0(); }

// @baa 0x00cd8c20
IMPLEMENT_CLASS_AT(USeqAct_CrowdSpawner, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnCrowd.cpp", 11);

// @baa 0x00cd8da0
// @baa 0x00cd9350
UEngine::UEngine()
{
}

struct C_00cdba10 { C_00cdba10* sub_00cdba10(void); };

// @baa 0x00cdba10
C_00cdba10* C_00cdba10::sub_00cdba10(void) { return this; }
