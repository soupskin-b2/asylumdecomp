// UnNavigationPoint.cpp: 17 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C_0083a9a0 {
    void sub_0083a9a0(int, undefined4, undefined4);
    int sub_0083a5a0(int, int, int);
};

// @baa 0x0083a9a0
void C_0083a9a0::sub_0083a9a0(int param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  uint uVar1;
  uVar1 = *(uint *)(param_1 + 0x1a8);
  if ((uVar1 & 0x800000) != 0) {
    *(uint *)(param_1 + 0x1a8) = (*(int *)(param_2 + 0x1cc) << 0x13 ^ uVar1) & 0x800000 ^ uVar1;
    ((C_0083a9a0 *)(this))->sub_0083a5a0(param_2, param_3, param_4);
    *(uint *)(param_1 + 0x1a8) = *(uint *)(param_1 + 0x1a8) | 0x800000;
    return;
  }
  sub_0083a5a0(param_2,param_3,param_4);
  return;
}

// @baa 0x00857830
IMPLEMENT_CLASS_AT(ACoverGroup, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnNavigationPoint.cpp", 1636);

void sub_00856ab0();
// @baa 0x00857640
void sub_00857640(void) { sub_00856ab0(); }

struct C_00858b40 { C_00858b40* sub_00858b40(void); };

// @baa 0x00858b40
C_00858b40* C_00858b40::sub_00858b40(void) { return this; }

struct C_00858c30 {
    void sub_00858c30();
    int sub_008571d0(int, int);
};

// @baa 0x00858c30
void C_00858c30::sub_00858c30(void)
{
    int param_1 = (int)this;
  ((C_00858c30 *)(this))->sub_008571d0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_00858d80 {
    void sub_00858d80();
    int sub_00857290(int, int);
};

// @baa 0x00858d80
void C_00858d80::sub_00858d80(void)
{
    int param_1 = (int)this;
  ((C_00858d80 *)(this))->sub_00857290(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_00858ed0 {
    undefined4 sub_00858ed0(undefined4, undefined4);
    int sub_00857350(int, int);
};

// @baa 0x00858ed0
undefined4 C_00858ed0::sub_00858ed0(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00858ed0 *)(this))->sub_00857350(param_2, param_3);
  return param_1;
}

struct C_00858ef0 {
    undefined4 sub_00858ef0(undefined4, undefined4);
    int sub_008573b0(int, int);
};

// @baa 0x00858ef0
undefined4 C_00858ef0::sub_00858ef0(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00858ef0 *)(this))->sub_008573b0(param_2, param_3);
  return param_1;
}

struct C_00858f10 {
    int sub_00858f10(undefined4, undefined4);
    int sub_00857410(int, int);
};

// @baa 0x00858f10
int C_00858f10::sub_00858f10(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_00858f10 *)(this))->sub_00857410(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_00858f30 {
    int sub_00858f30(undefined4, undefined4);
    int sub_00857490(int, int);
};

// @baa 0x00858f30
int C_00858f30::sub_00858f30(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_00858f30 *)(this))->sub_00857490(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

int sub_0053dfa0(...);
struct C_00858f50 {
    undefined4 sub_00858f50(byte);
};

int sub_00857fa0(void);
// @baa 0x00858f50
undefined4 C_00858f50::sub_00858f50(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00857fa0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

/* Kit gap (Array.h, issue #39): this build inlines TArray::operator() where the kit's plain-inline one is
 * called out of line; same body, forced inline. */
template<class T> struct TArrayAt_ : public TArray<T>
{
    __forceinline T& At(INT i)
    {
#line 560 BAA_ARRAY_FILE
        check(i>=0 && (i<this->ArrayNum||(i==0 && this->ArrayNum==0)));
        return this->GetTypedData()[i];
    }
    __forceinline const T& At(INT i) const
    {
#line 566 BAA_ARRAY_FILE
        check(i>=0 && (i<this->ArrayNum||(i==0 && this->ArrayNum==0)));
        return this->GetTypedData()[i];
    }
};

// @baa 0x00843b80
UBOOL ACoverLink::IsEnabled()
{
    if (bDisabled)
    {
        return FALSE;
    }
    // enabled if any slot is enabled
    for (INT SlotIdx = 0; SlotIdx < Slots.Num(); SlotIdx++)
    {
        if (((TArrayAt_<FCoverSlot>&)Slots).At(SlotIdx).bEnabled)
        {
            return TRUE;
        }
    }
    return FALSE;
}

#line 174 "candidate.cpp"

struct ACoverSlotMarker_ : public ACoverSlotMarker {
    UBOOL IsValidClaim(APawn* ChkClaim, UBOOL bSkipTeamCheck, UBOOL bSkipOverlapCheck); // 008603f0
};

// @baa 0x008447a0
UBOOL ACoverLink::IsValidClaim(APawn* ChkClaim, INT SlotIdx, UBOOL bSkipTeamCheck, UBOOL bSkipOverlapCheck)
{
    ACoverSlotMarker* SlotMarker = ((TArrayAt_<FCoverSlot>&)Slots).At(SlotIdx).SlotMarker;
    return SlotMarker && ((ACoverSlotMarker_*)SlotMarker)->IsValidClaim(ChkClaim, bSkipTeamCheck, bSkipOverlapCheck);
}

struct ACoverLink_ : public ACoverLink {
    BYTE GetLocationDescription(INT SlotIdx); // 00842180
};

// @baa 0x00842180
BYTE ACoverLink_::GetLocationDescription(INT SlotIdx)
{
    if (SlotIdx >= 0 && SlotIdx < Slots.Num())
    {
        // use the slot's description if it has one, otherwise the link's
        BYTE Desc = ((TArrayAt_<FCoverSlot>&)Slots).At(SlotIdx).LocationDescription;
        if (Desc == CoverDesc_None)
        {
            Desc = LocationDescription;
        }
        return Desc;
    }
    return CoverDesc_None;
}

// @baa 0x0084e950
UBOOL ACoverLink::IsEdgeSlot(INT SlotIdx, UBOOL bIgnoreLeans)
{
    // circular/looped links have no edges
    if (!bCircular && !bLooped)
    {
        if (IsLeftEdgeSlot(SlotIdx, bIgnoreLeans) || IsRightEdgeSlot(SlotIdx, bIgnoreLeans))
        {
            return TRUE;
        }
    }
    return FALSE;
}

// @baa 0x0083a4c0
INT ACoverLink::GetSlotIdxToLeft(INT SlotIdx, INT Cnt)
{
    INT NextSlotIdx = SlotIdx - Cnt;
    if (bLooped)
    {
        // wrap around
        while (NextSlotIdx < 0)
        {
            NextSlotIdx += Slots.Num();
        }
    }
    return (NextSlotIdx >= 0 && NextSlotIdx < Slots.Num()) ? NextSlotIdx : -1;
}

// @baa 0x0083a500
INT ACoverLink::GetSlotIdxToRight(INT SlotIdx, INT Cnt)
{
    INT NextSlotIdx = SlotIdx + Cnt;
    if (bLooped)
    {
        // wrap around
        while (NextSlotIdx >= Slots.Num())
        {
            NextSlotIdx -= Slots.Num();
        }
    }
    return (NextSlotIdx >= 0 && NextSlotIdx < Slots.Num()) ? NextSlotIdx : -1;
}
