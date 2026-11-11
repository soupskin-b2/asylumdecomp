// UnNavigationPoint.cpp: 16 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

struct ACoverLink_ : public ACoverLink
{
	UBOOL IsEnabled();
	void execIsEnabled(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c88ac0
void ACoverLink_::execIsEnabled( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = IsEnabled();
}

struct ACoverLink__00c88370 : public ACoverLink
{
	ACoverSlotMarker* sub_00841860(INT);
};

// @baa 0x00c88370
void ACoverLink::execGetSlotMarker(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(SlotIdx);
	P_FINISH;
	*(ACoverSlotMarker**)Result = ((ACoverLink__00c88370*)this)->sub_00841860(SlotIdx);
}

struct ACoverLink__00c88c20 : public ACoverLink
{
	BYTE sub_00842180(INT);
};

// @baa 0x00c88c20
void ACoverLink::execGetLocationDescription(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(SlotIdx);
	P_FINISH;
	*(BYTE*)Result = ((ACoverLink__00c88c20*)this)->sub_00842180(SlotIdx);
}

struct ACoverLink__00c888e0 : public ACoverLink
{
	INT GetSlotIdxToLeft(INT SlotIdx, INT Cnt);
	void execGetSlotIdxToLeft(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c888e0
void ACoverLink__00c888e0::execGetSlotIdxToLeft(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(SlotIdx);
	P_GET_INT_OPTX(Cnt, 1);
	P_FINISH;
	*(INT*)Result = GetSlotIdxToLeft(SlotIdx, Cnt);
}

struct ACoverLink__00c88980 : public ACoverLink
{
	INT GetSlotIdxToRight(INT SlotIdx, INT Cnt);
	void execGetSlotIdxToRight(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c88980
void ACoverLink__00c88980::execGetSlotIdxToRight(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(SlotIdx);
	P_GET_INT_OPTX(Cnt, 1);
	P_FINISH;
	*(INT*)Result = GetSlotIdxToRight(SlotIdx, Cnt);
}

struct ACoverLink__00c887a0 : public ACoverLink
{
	UBOOL IsLeftEdgeSlot(INT SlotIdx, UBOOL bIgnoreLeans);
	void execIsLeftEdgeSlot(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c887a0
void ACoverLink__00c887a0::execIsLeftEdgeSlot(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(SlotIdx);
	P_GET_UBOOL(bIgnoreLeans);
	P_FINISH;
	*(UBOOL*)Result = IsLeftEdgeSlot(SlotIdx, bIgnoreLeans);
}

struct ACoverLink__00c88840 : public ACoverLink
{
	UBOOL IsRightEdgeSlot(INT SlotIdx, UBOOL bIgnoreLeans);
	void execIsRightEdgeSlot(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c88840
void ACoverLink__00c88840::execIsRightEdgeSlot(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(SlotIdx);
	P_GET_UBOOL(bIgnoreLeans);
	P_FINISH;
	*(UBOOL*)Result = IsRightEdgeSlot(SlotIdx, bIgnoreLeans);
}

struct ACoverLink__00c88a20 : public ACoverLink
{
	UBOOL AutoAdjustSlot(INT SlotIdx, UBOOL bOnlyCheckLeans);
	void execAutoAdjustSlot(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c88a20
void ACoverLink__00c88a20::execAutoAdjustSlot(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(SlotIdx);
	P_GET_UBOOL(bOnlyCheckLeans);
	P_FINISH;
	*(UBOOL*)Result = AutoAdjustSlot(SlotIdx, bOnlyCheckLeans);
}

struct ACoverLink__00c886f0 : public ACoverLink
{
	UBOOL IsEdgeSlot(INT SlotIdx, UBOOL bIgnoreLeans);
	void execIsEdgeSlot(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c886f0
void ACoverLink__00c886f0::execIsEdgeSlot(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(SlotIdx);
	P_GET_UBOOL_OPTX(bIgnoreLeans, FALSE);
	P_FINISH;
	*(UBOOL*)Result = IsEdgeSlot(SlotIdx, bIgnoreLeans);
}

struct ACoverLink__00c88110 : public ACoverLink
{
	FVector GetSlotLocation(INT SlotIdx, UBOOL bForceUseOffset);
	void execGetSlotLocation(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c88110
void ACoverLink__00c88110::execGetSlotLocation(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(SlotIdx);
	P_GET_UBOOL_OPTX(bForceUseOffset, FALSE);
	P_FINISH;
	*(FVector*)Result = GetSlotLocation(SlotIdx, bForceUseOffset);
}

struct ACoverLink__00c881d0 : public ACoverLink
{
	FRotator GetSlotRotation(INT SlotIdx, UBOOL bForceUseOffset);
	void execGetSlotRotation(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c881d0
void ACoverLink__00c881d0::execGetSlotRotation(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(SlotIdx);
	P_GET_UBOOL_OPTX(bForceUseOffset, FALSE);
	P_FINISH;
	*(FRotator*)Result = GetSlotRotation(SlotIdx, bForceUseOffset);
}

struct ACoverLink__00c883e0 : public ACoverLink
{
	UBOOL IsExposedTo(INT SlotIdx, FCoverInfo ChkSlot, FLOAT& out_ExposedScale);
	void execIsExposedTo(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c883e0
void ACoverLink__00c883e0::execIsExposedTo(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(SlotIdx);
	P_GET_STRUCT(FCoverInfo, ChkSlot);
	P_GET_FLOAT_REF(out_ExposedScale);
	P_FINISH;
	*(UBOOL*)Result = IsExposedTo(SlotIdx, ChkSlot, out_ExposedScale);
}

enum ECoverType
{
	CT_None,
	CT_Standing,
	CT_MidLevel,
	CT_MAX,
};

enum ECoverAction
{
	CA_Default,
	CA_BlindLeft,
	CA_BlindRight,
	CA_LeanLeft,
	CA_LeanRight,
	CA_StepLeft,
	CA_StepRight,
	CA_PopUp,
	CA_BlindUp,
	CA_PeekLeft,
	CA_PeekRight,
	CA_PeekUp,
	CA_MAX,
};

struct ACoverLink__00c88290 : public ACoverLink
{
	FVector GetSlotViewPoint(INT SlotIdx, BYTE Type, BYTE Action);
	void execGetSlotViewPoint(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c88290
void ACoverLink__00c88290::execGetSlotViewPoint(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(SlotIdx);
	P_GET_BYTE_OPTX(Type, CT_None);
	P_GET_BYTE_OPTX(Action, CA_Default);
	P_FINISH;
	*(FVector*)Result = GetSlotViewPoint(SlotIdx, Type, Action);
}

struct ACoverLink__00c884c0 : public ACoverLink
{
	UBOOL IsValidClaim(APawn* ChkClaim, INT SlotIdx, UBOOL bSkipTeamCheck, UBOOL bSkipOverlapCheck);
	void execIsValidClaim(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c884c0
void ACoverLink__00c884c0::execIsValidClaim(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(APawn, ChkClaim);
	P_GET_INT(SlotIdx);
	P_GET_UBOOL_OPTX(bSkipTeamCheck, FALSE);
	P_GET_UBOOL_OPTX(bSkipOverlapCheck, FALSE);
	P_FINISH;
	*(UBOOL*)Result = IsValidClaim(ChkClaim, SlotIdx, bSkipTeamCheck, bSkipOverlapCheck);
}

struct ACoverLink__00c88b00 : public ACoverLink
{
	INT AddCoverSlot(FVector SlotLocation, FRotator SlotRotation, INT SlotIdx, UBOOL bForceSlotUpdate);
	void execAddCoverSlot(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c88b00
void ACoverLink__00c88b00::execAddCoverSlot(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FVector, SlotLocation);
	P_GET_STRUCT(FRotator, SlotRotation);
	P_GET_INT_OPTX(SlotIdx, -1);
	P_GET_UBOOL_OPTX(bForceSlotUpdate, FALSE);
	P_FINISH;
	*(INT*)Result = AddCoverSlot(SlotLocation, SlotRotation, SlotIdx, bForceSlotUpdate);
}

struct ACoverLink__00c885d0 : public ACoverLink
{
	UBOOL FindSlots(FVector CheckLocation, FLOAT MaxDistance, INT& LeftSlotIdx, INT& RightSlotIdx);
	void execFindSlots(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c885d0
void ACoverLink__00c885d0::execFindSlots(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FVector, CheckLocation);
	P_GET_FLOAT(MaxDistance);
	P_GET_INT_REF(LeftSlotIdx);
	P_GET_INT_REF(RightSlotIdx);
	P_FINISH;
	*(UBOOL*)Result = FindSlots(CheckLocation, MaxDistance, LeftSlotIdx, RightSlotIdx);
}
