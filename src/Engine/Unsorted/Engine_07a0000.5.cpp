// Engine_07a0000.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026c4ff0;
	/* ENGINE_SetInXrayMode */
struct AFracturedStaticMeshActor_ : public AFracturedStaticMeshActor
{
	void eventSetInXrayMode(UBOOL bInXrayMode);
};

// @baa 0x007a4d70
/* The script event's generated glue (EngineClasses.h), out of line here. Callers in
 * UnFracturedStaticMesh pass a part actor's x-ray bit. */
void AFracturedStaticMeshActor_::eventSetInXrayMode(UBOOL bInXrayMode)
{
	struct FracturedStaticMeshActor_eventSetInXrayMode_Parms
	{
		UBOOL bInXrayMode;
	} Parms;
	Parms.bInXrayMode = bInXrayMode ? TRUE : FALSE;
	ProcessEvent(FindFunctionChecked(g_026c4ff0), &Parms);
}

/* Kit gap: FStateFrame stops at ProbeMask; UE3's next member is the latent action (WORD LatentAction at 0x34). */
#pragma pack(push, 4)
#pragma pack(pop)
enum { AI_PollWaitForLanding = 528 };
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
struct AController_007a0dc0 : public AController {
    void sub_007a0dc0(); /* 0x007a0dc0 */
};

// @baa 0x007a0dc0
void AController_007a0dc0::sub_007a0dc0()
{
    StateFrame->LatentAction = 0;
    LatentFloat = -1.f;
}

extern FName g_026c543c;
	/* ENGINE_LongFall */
/* Kit gaps: AController::execPollWaitForLanding (the latent poll of WaitForLanding, registered with the natives;
 * UnController.cpp) and the Controller.LongFall script event's glue (EngineClasses.h, inline) aren't declared. */
struct AController_ : public AController
{
	void execPollWaitForLanding(FFrame& Stack, RESULT_DECL);
	void eventLongFall()
	{
		ProcessEvent(FindFunctionChecked(g_026c543c), NULL);
	}
};

// @baa 0x007a0860
void AController_::execPollWaitForLanding(FFrame& Stack, RESULT_DECL)
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
			eventLongFall();
		}
	}
}
