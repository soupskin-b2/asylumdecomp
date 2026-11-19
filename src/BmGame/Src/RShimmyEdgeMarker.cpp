// RShimmyEdgeMarker.cpp: 4 functions
// Placed here by: file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x01683960
IMPLEMENT_CLASS_AT(ARShimmyEdgeMarker, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RShimmyEdgeMarker.cpp", 7);

// @baa 0x0166a1a0

struct ARShimmyEdgeMarkerArray : public TArray<ARShimmyEdgeMarker*>
{
    INT AddUniqueItem(ARShimmyEdgeMarker* const& Item); /* 0x01676f00 */
};

extern ARShimmyEdgeMarkerArray g_026e1dd0;

// @baa 0x01678d20
void ARShimmyEdgeMarker::RegisterShimmyEdgeMarker()
{
    g_026e1dd0.AddUniqueItem(this);
}

// @baa 0x016748d0
/* Slot 0x2c: also drops the marker from the list. */
void ARShimmyEdgeMarker::FinishDestroy()
{
	g_026e1dd0.RemoveItem(this);
	Super::FinishDestroy();
}
