// RGrapplePoint.cpp: 1 function
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
