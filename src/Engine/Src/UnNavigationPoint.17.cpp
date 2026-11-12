// UnNavigationPoint.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x0084e870
/* Where the cover slot this marker stands for is; the origin when the marker isn't tied to a slot. */
FVector ACoverSlotMarker::GetSlotLocation()
{
	if (OwningSlot.Link)
	{
		return OwningSlot.Link->GetSlotLocation(OwningSlot.SlotIdx, FALSE);
	}
	return FVector(0.f, 0.f, 0.f);
}

// @baa 0x0084e8b0
/* Which way the cover slot this marker stands for faces; zero when the marker isn't tied to a slot. */
FRotator ACoverSlotMarker::GetSlotRotation()
{
	if (OwningSlot.Link)
	{
		return OwningSlot.Link->GetSlotRotation(OwningSlot.SlotIdx, FALSE);
	}
	return FRotator(0, 0, 0);
}
