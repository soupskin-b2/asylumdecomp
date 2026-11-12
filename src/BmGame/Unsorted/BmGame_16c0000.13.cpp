// BmGame_16c0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026e2f48;
	/* AdvanceFlockStage */
struct ARCrowdAgent_ : public ARCrowdAgent
{
	void eventAdvanceFlockStage(INT StageNum);
};

// @baa 0x016cd970
/* RCrowdAgent.AdvanceFlockStage script event: the generated glue, out of line here. */
void ARCrowdAgent_::eventAdvanceFlockStage(INT StageNum)
{
	struct RCrowdAgent_eventAdvanceFlockStage_Parms
	{
		INT StageNum;
	} Parms;
	Parms.StageNum = StageNum;
	ProcessEvent(FindFunctionChecked(g_026e2f48), &Parms);
}
