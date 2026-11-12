// Engine_0830000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* Kit gap: APortalTeleporter::CanTeleport (0x008b08f0) isn't virtual in this build and isn't declared. */
struct APortalTeleporter_ : public APortalTeleporter
{
	UBOOL CanTeleport(AActor* A);
};

// @baa 0x00837990
/* Whether A may go through the portal this marker stands for. */
UBOOL APortalMarker::CanTeleport(AActor* A)
{
	return (MyPortal != NULL && ((APortalTeleporter_*)MyPortal)->CanTeleport(A));
}
