// UnPostProcess.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Native.h"

// @baa 0x0088a1c0
/* Slot 0x310 (unnamed in the kit; UE3's ClearComponents): unlinks the volume from the world's priority-sorted list. */
void APostProcessVolume::ClearComponents(UBOOL bWillReattach)
{
	Super::ClearComponents(FALSE);
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

// @baa 0x0088a250
/* Slot 0x314 (unnamed in the kit; UE3's UpdateComponentsInternal): inserts the volume into the world's
 * priority-sorted list (highest Priority first) unless it's already there. */
void APostProcessVolume::UpdateComponentsInternal(UBOOL bCollisionUpdate)
{
	Super::UpdateComponentsInternal(bCollisionUpdate);

	APostProcessVolume* CurrentVolume = GWorld->GetWorldInfo()->HighestPriorityPostProcessVolume;
	APostProcessVolume* PreviousVolume = NULL;
	if (!CurrentVolume)
	{
		GWorld->GetWorldInfo()->HighestPriorityPostProcessVolume = this;
		NextLowerPriorityVolume = NULL;
	}
	else
	{
		while (CurrentVolume)
		{
			if (CurrentVolume == this)
			{
				break;
			}
			if (Priority > CurrentVolume->Priority)
			{
				if (!PreviousVolume)
				{
					GWorld->GetWorldInfo()->HighestPriorityPostProcessVolume = this;
				}
				else
				{
					PreviousVolume->NextLowerPriorityVolume = this;
				}
				NextLowerPriorityVolume = CurrentVolume;
				break;
			}
			PreviousVolume = CurrentVolume;
			CurrentVolume = CurrentVolume->NextLowerPriorityVolume;
		}
		if (!CurrentVolume)
		{
#line 161 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPostProcess.cpp"
			check(PreviousVolume);
			PreviousVolume->NextLowerPriorityVolume = this;
			NextLowerPriorityVolume = NULL;
		}
	}
}

#line 86 "candidate.cpp"
