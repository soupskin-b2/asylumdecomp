// UnSequence.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Cast.h"

/* USequenceEvent::CheckActivate (vtable 0x198, declared only as vf_198), called here non-virtually as Super::. */
struct USequenceEvent_ : public USequenceEvent
{
	UBOOL sub_008abba0(AActor* InOriginator, AActor* InInstigator, UBOOL bTest, TArray<INT>* ActivateIndices, UBOOL bPushTop);
};

/* USeqEvent_Touch's override of that slot. */
struct USeqEvent_Touch_ : public USeqEvent_Touch
{
	UBOOL CheckActivate(AActor* InOriginator, AActor* InInstigator, UBOOL bTest, TArray<INT>* ActivateIndices, UBOOL bPushTop);
};

// @baa 0x008be740
UBOOL USeqEvent_Touch_::CheckActivate(AActor* InOriginator, AActor* InInstigator, UBOOL bTest, TArray<INT>* ActivateIndices, UBOOL bPushTop)
{
	UBOOL bPassed = FALSE;
	if (bEnabled && InInstigator != NULL)
	{
		// reject anything of an ignored class
		UBOOL bIgnored = FALSE;
		for (INT Idx = 0; Idx < IgnoredClassProximityTypes.Num(); Idx++)
		{
			if (ObjectIsA(InInstigator, IgnoredClassProximityTypes(Idx)))
			{
				bIgnored = TRUE;
				break;
			}
		}
		if (!bIgnored)
		{
			// accept any class if none are listed, otherwise one of them
			if (ClassProximityTypes.Num() > 0)
			{
				for (INT Idx = 0; Idx < ClassProximityTypes.Num() && !bPassed; Idx++)
				{
					if (ObjectIsA(InInstigator, ClassProximityTypes(Idx)))
					{
						bPassed = TRUE;
					}
				}
			}
			else
			{
				bPassed = TRUE;
			}
			// only test here: the touch itself activates the event
			if (bPassed)
			{
				bPassed = ((USequenceEvent_*)this)->sub_008abba0(InOriginator, InInstigator, TRUE, ActivateIndices, bPushTop);
			}
		}
	}
	return bPassed;
}
