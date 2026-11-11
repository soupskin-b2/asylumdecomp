// UnNavigationPoint.cpp: 9 functions
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
