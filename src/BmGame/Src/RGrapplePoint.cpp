// RGrapplePoint.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct ARGrapplePointArray : public TArray<ARGrapplePoint*>
{
    INT AddUniqueItem(ARGrapplePoint* const& Item); /* 0x0164a6f0 */
};

extern ARGrapplePointArray g_026e1c54;
struct ARGrapplePoint_ : public ARGrapplePoint
{
    INT sub_0164ae40();
};

// @baa 0x0164ae40
INT ARGrapplePoint_::sub_0164ae40()
{
    return g_026e1c54.AddUniqueItem(this);
}

// @baa 0x0164d8a0
/* Looks straight up from just above the owner for a vantage point to escape to (45 degree cone), leaving the
 * current hide point and grapple angle as they were. */
void ARGrappleGun::FindEscapeVantagePoint()
{
	FLOAT SavedGrappleAngle = VantagePointGrappleAngle;
	VantagePointGrappleAngle = 45.f;
	AActor* SavedHidePoint = CurrentHidePoint;
	CurrentHidePoint = NULL;
	FindBestVantagePoint(Owner->Location + FVector(0.f, 0.f, 100.f), FVector(0.f, 0.f, 1.f), EscapeHidePoints, FALSE);
	EscapeHidePoint = CurrentHidePoint;
	CurrentHidePoint = SavedHidePoint;
	VantagePointGrappleAngle = SavedGrappleAngle;
}
