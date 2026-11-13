// UnNavigationPoint.cpp: 19 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00c88ac0
void ACoverLink::execIsEnabled( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = IsEnabled();
}

// @baa 0x00c88370
void ACoverLink::execGetSlotMarker(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(SlotIdx);
	P_FINISH;
	*(ACoverSlotMarker**)Result = GetSlotMarker(SlotIdx);
}

// @baa 0x00c88c20
void ACoverLink::execGetLocationDescription(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(SlotIdx);
	P_FINISH;
	*(BYTE*)Result = GetLocationDescription(SlotIdx);
}

// @baa 0x00c888e0
void ACoverLink::execGetSlotIdxToLeft(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(SlotIdx);
	P_GET_INT_OPTX(Cnt, 1);
	P_FINISH;
	*(INT*)Result = GetSlotIdxToLeft(SlotIdx, Cnt);
}

// @baa 0x00c88980
void ACoverLink::execGetSlotIdxToRight(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(SlotIdx);
	P_GET_INT_OPTX(Cnt, 1);
	P_FINISH;
	*(INT*)Result = GetSlotIdxToRight(SlotIdx, Cnt);
}

// @baa 0x00c887a0
void ACoverLink::execIsLeftEdgeSlot(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(SlotIdx);
	P_GET_UBOOL(bIgnoreLeans);
	P_FINISH;
	*(UBOOL*)Result = IsLeftEdgeSlot(SlotIdx, bIgnoreLeans);
}

// @baa 0x00c88840
void ACoverLink::execIsRightEdgeSlot(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(SlotIdx);
	P_GET_UBOOL(bIgnoreLeans);
	P_FINISH;
	*(UBOOL*)Result = IsRightEdgeSlot(SlotIdx, bIgnoreLeans);
}

// @baa 0x00c88a20
void ACoverLink::execAutoAdjustSlot(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(SlotIdx);
	P_GET_UBOOL(bOnlyCheckLeans);
	P_FINISH;
	*(UBOOL*)Result = AutoAdjustSlot(SlotIdx, bOnlyCheckLeans);
}

// @baa 0x00c886f0
void ACoverLink::execIsEdgeSlot(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(SlotIdx);
	P_GET_UBOOL_OPTX(bIgnoreLeans, FALSE);
	P_FINISH;
	*(UBOOL*)Result = IsEdgeSlot(SlotIdx, bIgnoreLeans);
}

// @baa 0x00c88110
void ACoverLink::execGetSlotLocation(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(SlotIdx);
	P_GET_UBOOL_OPTX(bForceUseOffset, FALSE);
	P_FINISH;
	*(FVector*)Result = GetSlotLocation(SlotIdx, bForceUseOffset);
}

// @baa 0x00c881d0
void ACoverLink::execGetSlotRotation(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(SlotIdx);
	P_GET_UBOOL_OPTX(bForceUseOffset, FALSE);
	P_FINISH;
	*(FRotator*)Result = GetSlotRotation(SlotIdx, bForceUseOffset);
}

// @baa 0x00c883e0
void ACoverLink::execIsExposedTo(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(SlotIdx);
	P_GET_STRUCT(FCoverInfo, ChkSlot);
	P_GET_FLOAT_REF(out_ExposedScale);
	P_FINISH;
	*(UBOOL*)Result = IsExposedTo(SlotIdx, ChkSlot, out_ExposedScale);
}

// @baa 0x00c88290
void ACoverLink::execGetSlotViewPoint(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(SlotIdx);
	P_GET_BYTE_OPTX(Type, CT_None);
	P_GET_BYTE_OPTX(Action, CA_Default);
	P_FINISH;
	*(FVector*)Result = GetSlotViewPoint(SlotIdx, Type, Action);
}

// @baa 0x00c884c0
void ACoverLink::execIsValidClaim(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(APawn, ChkClaim);
	P_GET_INT(SlotIdx);
	P_GET_UBOOL_OPTX(bSkipTeamCheck, FALSE);
	P_GET_UBOOL_OPTX(bSkipOverlapCheck, FALSE);
	P_FINISH;
	*(UBOOL*)Result = IsValidClaim(ChkClaim, SlotIdx, bSkipTeamCheck, bSkipOverlapCheck);
}

// @baa 0x00c88b00
void ACoverLink::execAddCoverSlot(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FVector, SlotLocation);
	P_GET_STRUCT(FRotator, SlotRotation);
	P_GET_INT_OPTX(SlotIdx, -1);
	P_GET_UBOOL_OPTX(bForceSlotUpdate, FALSE);
	P_FINISH;
	*(INT*)Result = AddCoverSlot(SlotLocation, SlotRotation, SlotIdx, bForceSlotUpdate);
}

// @baa 0x00c885d0
void ACoverLink::execFindSlots(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FVector, CheckLocation);
	P_GET_FLOAT(MaxDistance);
	P_GET_INT_REF(LeftSlotIdx);
	P_GET_INT_REF(RightSlotIdx);
	P_FINISH;
	*(UBOOL*)Result = FindSlots(CheckLocation, MaxDistance, LeftSlotIdx, RightSlotIdx);
}

// @baa 0x00cbff70
void ACoverLink::execGetSlotActions(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(SlotIdx);
	P_GET_TARRAY_REF(BYTE, Actions);
	P_FINISH;
	GetSlotActions(SlotIdx, Actions);
}

extern FName g_026c4c18;
	/* ENGINE_SetSlotEnabled */
struct ACoverLink_ : public ACoverLink
{
	void eventSetSlotEnabled(INT SlotIdx, UBOOL bEnable);
};

// @baa 0x00833c40
/* The script event's generated glue (EngineClasses.h), out of line here. */
void ACoverLink_::eventSetSlotEnabled(INT SlotIdx, UBOOL bEnable)
{
	struct CoverLink_eventSetSlotEnabled_Parms
	{
		INT SlotIdx;
		UBOOL bEnable;
	} Parms;
	Parms.SlotIdx = SlotIdx;
	Parms.bEnable = bEnable ? TRUE : FALSE;
	ProcessEvent(FindFunctionChecked(g_026c4c18), &Parms);
}

// @baa 0x008365d0
void ACoverLink::execHasFireLinkTo(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(SlotIdx);
    P_GET_STRUCT(FCoverInfo, ChkCover);
    P_GET_UBOOL_OPTX(bAllowFallbackLinks, FALSE);
    P_FINISH;
    *(UBOOL*)Result = HasFireLinkTo(SlotIdx, ChkCover, bAllowFallbackLinks);
}
