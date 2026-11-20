// Engine_07a0000.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026c4ff0;
	/* ENGINE_SetInXrayMode */

// @baa 0x007a4d70
/* The script event's generated glue (EngineClasses.h), out of line here. Callers in
 * UnFracturedStaticMesh pass a part actor's x-ray bit. */
void AFracturedStaticMeshActor::eventSetInXrayMode(UBOOL bInXrayMode)
{
	struct FracturedStaticMeshActor_eventSetInXrayMode_Parms
	{
		UBOOL bInXrayMode;
	} Parms;
	Parms.bInXrayMode = bInXrayMode ? TRUE : FALSE;
	ProcessEvent(FindFunctionChecked(g_026c4ff0), &Parms);
}

// @baa 0x007a07d0
/* Latent: waits up to waitDuration for the pawn to land (polled while it's falling). */
void AController::execWaitForLanding(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT_OPTX(waitDuration, 4.f);
	P_FINISH;
	LatentFloat = waitDuration;
	if (Pawn && Pawn->Physics == PHYS_Falling)
	{
		StateFrame->LatentAction = AI_PollWaitForLanding;
	}
}

// AController declares no method at this address.

// @baa 0x007a0dc0
void AController::StopLatentExecution()
{
    StateFrame->LatentAction = 0;
    LatentFloat = -1.f;
}

extern FName g_026c543c;
	/* ENGINE_LongFall */
/* The Controller.LongFall script event's glue (EngineClasses.h, inline) isn't in the kit. */
struct AController__007a0860 : public AController
{
	void eventLongFall()
	{
		ProcessEvent(FindFunctionChecked(g_026c543c), NULL);
	}
};

// @baa 0x007a0860
void AController::execPollWaitForLanding(FFrame& Stack, RESULT_DECL)
{
	if (Pawn && (Pawn->Physics != PHYS_Falling))
	{
		StateFrame->LatentAction = 0;
	}
	else
	{
		LatentFloat -= *(FLOAT*)Result;
		if (LatentFloat <= 0.f)
		{
			((AController__007a0860*)this)->eventLongFall();
		}
	}
}
