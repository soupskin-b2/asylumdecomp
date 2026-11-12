// BmGame_1680000.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026e3928;
	/* JustAboveFloor */
struct ARPawnVillain_ : public ARPawnVillain
{
	UBOOL eventJustAboveFloor();
};

// @baa 0x01686390
/* RPawnVillain.JustAboveFloor script event: the generated glue, out of line here. */
UBOOL ARPawnVillain_::eventJustAboveFloor()
{
	struct RPawnVillain_eventJustAboveFloor_Parms
	{
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	ProcessEvent(FindFunctionChecked(g_026e3928), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e2874;
	/* GetVenomHenchmanRidden */
struct ARPawnPlayer_ : public ARPawnPlayer
{
	class ARPawnBossVenomBase* eventGetVenomHenchmanRidden();
};

// @baa 0x016864c0
/* RPawnPlayer.GetVenomHenchmanRidden script event: the generated glue, out of line here. */
class ARPawnBossVenomBase* ARPawnPlayer_::eventGetVenomHenchmanRidden()
{
	struct RPawnPlayer_eventGetVenomHenchmanRidden_Parms
	{
		class ARPawnBossVenomBase* ReturnValue;
	} Parms;
	Parms.ReturnValue = NULL;
	ProcessEvent(FindFunctionChecked(g_026e2874), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e3654;
	/* IsRidingVenomHenchman */
struct ARPawnPlayer__01686500 : public ARPawnPlayer
{
	UBOOL eventIsRidingVenomHenchman();
};

// @baa 0x01686500
/* RPawnPlayer.IsRidingVenomHenchman script event: the generated glue, out of line here. */
UBOOL ARPawnPlayer__01686500::eventIsRidingVenomHenchman()
{
	struct RPawnPlayer_eventIsRidingVenomHenchman_Parms
	{
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	ProcessEvent(FindFunctionChecked(g_026e3654), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e2df0;
	/* GetYawAnchorRotation */
struct ARPlayerController_ : public ARPlayerController
{
	FRotator eventGetYawAnchorRotation();
};

// @baa 0x016868b0
/* RPlayerController.GetYawAnchorRotation script event: the generated glue, out of line here. */
FRotator ARPlayerController_::eventGetYawAnchorRotation()
{
	struct RPlayerController_eventGetYawAnchorRotation_Parms
	{
		FRotator ReturnValue;
	} Parms;
	appMemzero(&Parms.ReturnValue, sizeof(Parms.ReturnValue));
	ProcessEvent(FindFunctionChecked(g_026e2df0), &Parms);
	return Parms.ReturnValue;
}
