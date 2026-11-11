// UnAudioNodes.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include <stdlib.h>

/* UE3 UnVcWin32.h (not in the kit). */
inline FLOAT appFrand() { return rand() / (FLOAT)RAND_MAX; }

/* USoundNodeAmbientNonLoop::PickNewSlot isn't declared in Classes.h. */
struct USoundNodeAmbientNonLoop_ : public USoundNodeAmbientNonLoop
{
	INT PickNewSlot();
};

// @baa 0x00cbad20
INT USoundNodeAmbientNonLoop_::PickNewSlot()
{
	// Handle case of empty array
	if( SoundSlots.Num() == 0 )
	{
		return 0;
	}

	// First, sum up the weights
	FLOAT TotalWeight = 0.f;
	for( INT i=0; i<SoundSlots.Num(); i++ )
	{
		TotalWeight += SoundSlots(i).Weight;
	}

	// Then pick a random number in that range
	FLOAT Choice = appFrand() * TotalWeight;

	// Then iterate over array, finding the slot that this choice falls in
	FLOAT RunningTotal = 0.f;
	for( INT i=0; i<SoundSlots.Num(); i++ )
	{
		RunningTotal += SoundSlots(i).Weight;
		if( RunningTotal >= Choice )
		{
			return i;
		}
	}

	return SoundSlots.Num() - 1;
}
