// ThumbnailManager.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

/* Kit gap: UIconThumbnailRenderer's icon accessor isn't declared (it loads the icon named by
 * the renderer's string the first time and caches it). */

// @baa 0x01253480
/* The thumbnail is the icon texture's size, scaled by the zoom. */
void UIconThumbnailRenderer::GetThumbnailSize(UObject* Object, EThumbnailPrimType PrimType, FLOAT Zoom, DWORD& OutWidth, DWORD& OutHeight)
{
	OutWidth = appTrunc(Zoom * this->sub_01250960()->SizeX);
	OutHeight = appTrunc(Zoom * this->sub_01250960()->SizeY);
}
