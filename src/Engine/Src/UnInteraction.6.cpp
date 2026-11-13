// UnInteraction.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

/* Kit gaps: the native's exec and PlayUISound (00d78470) aren't declared (names from the exe's native table). */
struct UUIInteraction_ : public UUIInteraction
{
	void execPlayUISound(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca0c70
void UUIInteraction_::execPlayUISound(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(SoundCueName);
	P_GET_INT_OPTX(PlayerIndex, 0);
	P_FINISH;
	*(UBOOL*)Result = PlayUISound(SoundCueName, PlayerIndex);
}

extern FName g_026c4ce4;
	/* ENGINE_Tick */
struct UInteraction_ : public UInteraction
{
	/* Interaction.Tick script event: the generated glue, inlined here (Tick is a probe function). */
	FORCEINLINE void eventTick(FLOAT DeltaTime)
	{
		if (!StateFrame || (StateFrame->ProbeMask & ((QWORD)1 << (NAME_Tick - NAME_PROBEMIN))))
		{
			struct { FLOAT DeltaTime; } Parms;
			Parms.DeltaTime = DeltaTime;
			ProcessEvent(FindFunctionChecked(g_026c4ce4), &Parms);
		}
	}
};

// @baa 0x00888f80
/* Passes the tick on to script. */
void UInteraction::Tick(FLOAT DeltaTime)
{
	((UInteraction_*)this)->eventTick(DeltaTime);
}
