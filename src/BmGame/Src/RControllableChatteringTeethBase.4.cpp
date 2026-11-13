// RControllableChatteringTeethBase.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"
#include "ue3/Cast.h"

extern FName g_026e3954;
	/* FinishStandSpecialMove */
extern FName g_026e3124;
	/* DestroyTeethCamera */
extern FName g_026e2f38;
	/* DestroyTeeth */
/* Kit gap: FVector::Rotation (UnMath.cpp) isn't declared. */


struct ARControllableChatteringTeethBase_ : public ARControllableChatteringTeethBase
{
	/* RControllableChatteringTeethBase script events: the generated glue, inlined here. */
	FORCEINLINE void eventFinishStandSpecialMove() { ProcessEvent(FindFunctionChecked(g_026e3954), NULL); }
	FORCEINLINE void eventDestroyTeethCamera() { ProcessEvent(FindFunctionChecked(g_026e3124), NULL); }
	FORCEINLINE void eventDestroyTeeth() { ProcessEvent(FindFunctionChecked(g_026e2f38), NULL); }

	void sub_0171a4b0(FLOAT DeltaTime);
};

// @baa 0x0171a4b0
/* The teeth are done: the Joker who threw them turns to face where they went off and finishes his special move,
 * then the teeth camera and the teeth themselves go. */
void ARControllableChatteringTeethBase_::sub_0171a4b0(FLOAT DeltaTime)
{
#line 216 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RControllableChatteringTeethBase.cpp"
	check(TeethState == CHATTERINGTEETHSTATE_Destroy);
	if (SpawnGadget)
	{
		ARPawnPlayerChallengeJokerBase* Joker = Cast<ARPawnPlayerChallengeJokerBase>(SpawnGadget->Owner);
		if (Joker)
		{
			FVector ToTeeth;
			ToTeeth.X = Location.X - Joker->Location.X;
			ToTeeth.Y = Location.Y - Joker->Location.Y;
			ToTeeth.Z = Location.Z - Joker->Location.Z;
			const FRotator FaceTeeth = ToTeeth.Rotation();
			Joker->sub_016a0360(FaceTeeth);
			eventFinishStandSpecialMove();
		}
	}
	eventDestroyTeethCamera();
	bExploded = TRUE;
	eventDestroyTeeth();
}

template ARPawnPlayerChallengeJokerBase* Cast<ARPawnPlayerChallengeJokerBase>(UObject* Src);

#line 64 "candidate.cpp"
