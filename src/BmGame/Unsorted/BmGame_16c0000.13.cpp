// BmGame_16c0000.cpp: 7 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026e2f48;
	/* AdvanceFlockStage */

// @baa 0x016cd970
/* RCrowdAgent.AdvanceFlockStage script event: the generated glue, out of line here. */
void ARCrowdAgent::eventAdvanceFlockStage(INT StageNum)
{
	struct RCrowdAgent_eventAdvanceFlockStage_Parms
	{
		INT StageNum;
	} Parms;
	Parms.StageNum = StageNum;
	ProcessEvent(FindFunctionChecked(g_026e2f48), &Parms);
}

extern FName g_026e3684;
	/* BackToGameCamera */

// @baa 0x016cc0e0
/* RSeqAct_CrocRelativeAnimCamera.BackToGameCamera script event: the generated glue, out of line here. */
void URSeqAct_CrocRelativeAnimCamera::eventBackToGameCamera()
{
	ProcessEvent(FindFunctionChecked(g_026e3684), NULL);
}

extern FName g_026e2718;
	/* UpdateCameraRoot */

// @baa 0x016cc110
/* RSeqAct_CrocRelativeAnimCamera.UpdateCameraRoot script event: the generated glue, out of line here. */
void URSeqAct_CrocRelativeAnimCamera::eventUpdateCameraRoot()
{
	ProcessEvent(FindFunctionChecked(g_026e2718), NULL);
}

extern FName g_026e28e8;
	/* DestroyAgent */

// @baa 0x016cd9b0
/* RCrowdAgent.DestroyAgent script event: the generated glue, out of line here. */
void ARCrowdAgent::eventDestroyAgent()
{
	ProcessEvent(FindFunctionChecked(g_026e28e8), NULL);
}

extern FName g_026e2d28;
	/* KillAgent */

// @baa 0x016cd9e0
/* RCrowdAgent.KillAgent script event: the generated glue, out of line here. */
void ARCrowdAgent::eventKillAgent()
{
	ProcessEvent(FindFunctionChecked(g_026e2d28), NULL);
}

extern FName g_026e2690;
	/* SetupMaterialConstants */

// @baa 0x016cdac0
/* RCapeSkeletalMeshComponent.SetupMaterialConstants script event: the generated glue, out of line here. */
void URCapeSkeletalMeshComponent::eventSetupMaterialConstants()
{
	ProcessEvent(FindFunctionChecked(g_026e2690), NULL);
}

extern FName g_026e2950;
	/* SetDelayedWallPathCheck */

// @baa 0x016cef30
/* RFractureWallBase.SetDelayedWallPathCheck script event: the generated glue, out of line here. */
void ARFractureWallBase::eventSetDelayedWallPathCheck()
{
	ProcessEvent(FindFunctionChecked(g_026e2950), NULL);
}
