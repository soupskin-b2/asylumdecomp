// UnCrowd.cpp: 17 functions
// Placed here by: neighbours 7, callers 5, file 4.
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

struct TConstSetBitIterator_00cc81b0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00cc81b0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00cc81b0& operator++();
};

TConstSetBitIterator_00cc81b0::TConstSetBitIterator_00cc81b0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00cc81b0
TConstSetBitIterator_00cc81b0& TConstSetBitIterator_00cc81b0::operator++()
{
    It.Advance();
    return *this;
}

struct C {
    undefined4 sub_00ccf650(byte);
    int sub_00553720();
};

int sub_0053dfa0(...);
// @baa 0x00ccf650
undefined4 C::sub_00ccf650(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C *)(((char *)this + 8)))->sub_00553720();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_00ccbf20();
// @baa 0x00ccf680
void sub_00ccf680(void) { sub_00ccbf20(); }

int sub_00cc8150(void);
// @baa 0x00ccf830
int UBrushComponent::sub_00ccf830(void)
{
    int param_1 = (int)this;

  sub_00cc8150();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00cd1f10
IMPLEMENT_CLASS_AT(ACrowdReplicationActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnCrowd.cpp", 12);

void sub_00cd1590();
// @baa 0x00cd1f40
void sub_00cd1f40(void) { sub_00cd1590(); }

int sub_00cb0680(void);
int sub_00cd1410(...);
extern undefined4 g_026c3d00;
// @baa 0x00cd1f50
int sub_00cd1f50(void)
{
  if (g_026c3d00 == 0) {
    g_026c3d00 = sub_00cd1410(L"Engine");
    sub_00cb0680();
  }
  return g_026c3d00;
}

int sub_00cb07e0(void);
int sub_00cd14d0(...);
extern undefined4 g_026c3d04;
// @baa 0x00cd1f80
int sub_00cd1f80(void)
{
  if (g_026c3d04 == 0) {
    g_026c3d04 = sub_00cd14d0(L"Engine");
    sub_00cb07e0();
  }
  return g_026c3d04;
}

// @baa 0x00cd1fb0
IMPLEMENT_CLASS_AT(ACrowdAgent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnCrowd.cpp", 9);

// @baa 0x00cd1fe0
IMPLEMENT_CLASS_AT(ACrowdAttractor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnCrowd.cpp", 10);

// @baa 0x00cd2090
// @baa 0x00cd2150
// @baa 0x00cd2210
// @baa 0x00cda2a0
IMPLEMENT_CLASS_AT(USeqAct_CrowdSpawner, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnCrowd.cpp", 11);

// @baa 0x00cda2c0
struct D { void sub_007bce90(); };

extern D g_026c5624;
// @baa 0x01e25510
void sub_01e25510() { g_026c5624.sub_007bce90(); }

// @baa 0x00cbc780
/* A crowd agent drops its cached nearest path when its level is being removed. */
void ACrowdAgent::GetActorReferences(TArray<FActorReference*>& ActorRefs, UBOOL bIsRemovingLevel)
{
    if (bIsRemovingLevel)
    {
        NearestPath = NULL;
    }
    Super::GetActorReferences(ActorRefs, bIsRemovingLevel);
}
