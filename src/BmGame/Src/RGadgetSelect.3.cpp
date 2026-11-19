// RGadgetSelect.cpp: 6 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026e2f40;
	/* GadgetSelected */

// @baa 0x01638cf0
/* RGadgetSelect.GadgetSelected script event: the generated glue, out of line here. */
void URGadgetSelect::eventGadgetSelected(BYTE Row, BYTE Column)
{
	struct RGadgetSelect_eventGadgetSelected_Parms
	{
		BYTE Row;
		BYTE Column;
	} Parms;
	Parms.Row = Row;
	Parms.Column = Column;
	ProcessEvent(FindFunctionChecked(g_026e2f40), &Parms);
}

extern FName g_026e3888;
	/* SpawnCutRopeFX */

// @baa 0x01638f60
/* RRopeBase.SpawnCutRopeFX script event: the generated glue, out of line here. */
void ARRopeBase::eventSpawnCutRopeFX(FVector CutPos)
{
	struct RRopeBase_eventSpawnCutRopeFX_Parms
	{
		FVector CutPos;
	} Parms;
	Parms.CutPos = CutPos;
	ProcessEvent(FindFunctionChecked(g_026e3888), &Parms);
}

extern FName g_026e3864;
	/* GadgetGadgetSelected */

// @baa 0x01638d40
/* RGadgetSelect.GadgetGadgetSelected script event: the generated glue, out of line here. */
void URGadgetSelect::eventGadgetGadgetSelected()
{
	ProcessEvent(FindFunctionChecked(g_026e3864), NULL);
}

extern FName g_026e2614;
	/* SetDestroyedHelpText */

// @baa 0x01638e90
/* RHidePoint.SetDestroyedHelpText script event: the generated glue, out of line here. */
void ARHidePoint::eventSetDestroyedHelpText()
{
	ProcessEvent(FindFunctionChecked(g_026e2614), NULL);
}

extern FName g_026e3060;
	/* CallQueueReattach */

// @baa 0x01638ef0
/* RRopeComponentBase.CallQueueReattach script event: the generated glue, out of line here. */
void URRopeComponentBase::eventCallQueueReattach()
{
	ProcessEvent(FindFunctionChecked(g_026e3060), NULL);
}

// @baa 0x01708750
void URGadgetSelect::execUpdateSelectedGadget(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(DeltaTime);
    P_GET_UBOOL(bCanCycleGadgets);
    P_FINISH;
    this->UpdateSelectedGadget(DeltaTime, bCanCycleGadgets);
}
