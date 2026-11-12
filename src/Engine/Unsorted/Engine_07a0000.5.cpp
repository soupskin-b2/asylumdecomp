// Engine_07a0000.cpp: 2 functions
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
struct FStateFrame_ : public FStateFrame
{
	WORD LatentAction;	/* 0x34 */
};

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
		((FStateFrame_*)StateFrame)->LatentAction = AI_PollWaitForLanding;
	}
}
