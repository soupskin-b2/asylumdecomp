// BmGame_16c0000.cpp: 7 functions
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

extern FName g_026e3684;
	/* BackToGameCamera */
struct URSeqAct_CrocRelativeAnimCamera_ : public URSeqAct_CrocRelativeAnimCamera
{
	void eventBackToGameCamera();
};

// @baa 0x016cc0e0
/* RSeqAct_CrocRelativeAnimCamera.BackToGameCamera script event: the generated glue, out of line here. */
void URSeqAct_CrocRelativeAnimCamera_::eventBackToGameCamera()
{
	ProcessEvent(FindFunctionChecked(g_026e3684), NULL);
}

extern FName g_026e2718;
	/* UpdateCameraRoot */
struct URSeqAct_CrocRelativeAnimCamera__016cc110 : public URSeqAct_CrocRelativeAnimCamera
{
	void eventUpdateCameraRoot();
};

// @baa 0x016cc110
/* RSeqAct_CrocRelativeAnimCamera.UpdateCameraRoot script event: the generated glue, out of line here. */
void URSeqAct_CrocRelativeAnimCamera__016cc110::eventUpdateCameraRoot()
{
	ProcessEvent(FindFunctionChecked(g_026e2718), NULL);
}

extern FName g_026e28e8;
	/* DestroyAgent */
struct ARCrowdAgent__016cd9b0 : public ARCrowdAgent
{
	void eventDestroyAgent();
};

// @baa 0x016cd9b0
/* RCrowdAgent.DestroyAgent script event: the generated glue, out of line here. */
void ARCrowdAgent__016cd9b0::eventDestroyAgent()
{
	ProcessEvent(FindFunctionChecked(g_026e28e8), NULL);
}

extern FName g_026e2d28;
	/* KillAgent */
struct ARCrowdAgent__016cd9e0 : public ARCrowdAgent
{
	void eventKillAgent();
};

// @baa 0x016cd9e0
/* RCrowdAgent.KillAgent script event: the generated glue, out of line here. */
void ARCrowdAgent__016cd9e0::eventKillAgent()
{
	ProcessEvent(FindFunctionChecked(g_026e2d28), NULL);
}

extern FName g_026e2690;
	/* SetupMaterialConstants */
struct URCapeSkeletalMeshComponent_ : public URCapeSkeletalMeshComponent
{
	void eventSetupMaterialConstants();
};

// @baa 0x016cdac0
/* RCapeSkeletalMeshComponent.SetupMaterialConstants script event: the generated glue, out of line here. */
void URCapeSkeletalMeshComponent_::eventSetupMaterialConstants()
{
	ProcessEvent(FindFunctionChecked(g_026e2690), NULL);
}

extern FName g_026e2950;
	/* SetDelayedWallPathCheck */
struct ARFractureWallBase_ : public ARFractureWallBase
{
	void eventSetDelayedWallPathCheck();
};

// @baa 0x016cef30
/* RFractureWallBase.SetDelayedWallPathCheck script event: the generated glue, out of line here. */
void ARFractureWallBase_::eventSetDelayedWallPathCheck()
{
	ProcessEvent(FindFunctionChecked(g_026e2950), NULL);
}
