// RGadgetSelect.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026e2f40;
	/* GadgetSelected */
struct URGadgetSelect_ : public URGadgetSelect
{
	void eventGadgetSelected(BYTE Row, BYTE Column);
};

// @baa 0x01638cf0
/* RGadgetSelect.GadgetSelected script event: the generated glue, out of line here. */
void URGadgetSelect_::eventGadgetSelected(BYTE Row, BYTE Column)
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
struct ARRopeBase_ : public ARRopeBase
{
	void eventSpawnCutRopeFX(FVector CutPos);
};

// @baa 0x01638f60
/* RRopeBase.SpawnCutRopeFX script event: the generated glue, out of line here. */
void ARRopeBase_::eventSpawnCutRopeFX(FVector CutPos)
{
	struct RRopeBase_eventSpawnCutRopeFX_Parms
	{
		FVector CutPos;
	} Parms;
	Parms.CutPos = CutPos;
	ProcessEvent(FindFunctionChecked(g_026e3888), &Parms);
}
