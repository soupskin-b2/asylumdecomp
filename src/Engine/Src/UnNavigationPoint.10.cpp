// UnNavigationPoint.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x008418c0
/* Where the slot is: its marker's location if it has one (unless the offset is forced), else the link's location
 * plus the slot's offset rotated into the link's frame. */
FVector ACoverLink::GetSlotLocation(INT SlotIdx, UBOOL bForceUseOffset)
{
	if (SlotIdx >= 0 && SlotIdx < Slots.Num())
	{
		if (!bForceUseOffset && Slots(SlotIdx).SlotMarker != NULL)
		{
			return Slots(SlotIdx).SlotMarker->Location;
		}
		return Location + FRotationMatrix(Rotation).TransformFVector(Slots(SlotIdx).LocationOffset);
	}
	return Location;
}

#line 71 "candidate.cpp"
