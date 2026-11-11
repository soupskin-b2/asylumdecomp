// UnNavigationPoint.cpp: 3 functions
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
