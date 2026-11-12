// UnPostProcess.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Native.h"

// @baa 0x0088a1c0
/* Slot 0x310 (unnamed in the kit; UE3's ClearComponents): unlinks the volume from the world's priority-sorted list. */
void APostProcessVolume::vf_310(UBOOL bWillReattach)
{
	Super::vf_310(FALSE);
	if (GWorld)
	{
		APostProcessVolume* CurrentVolume = GWorld->GetWorldInfo()->HighestPriorityPostProcessVolume;
		APostProcessVolume* PreviousVolume = NULL;
		while (CurrentVolume)
		{
			if (CurrentVolume == this)
			{
				if (PreviousVolume)
				{
					PreviousVolume->NextLowerPriorityVolume = NextLowerPriorityVolume;
				}
				else
				{
					GWorld->GetWorldInfo()->HighestPriorityPostProcessVolume = NextLowerPriorityVolume;
				}
				break;
			}
			PreviousVolume = CurrentVolume;
			CurrentVolume = CurrentVolume->NextLowerPriorityVolume;
		}
		NextLowerPriorityVolume = NULL;
	}
}
