// UnCamera.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x00787f60
/* Keeps the editor frustum in step with the camera's FOV and aspect ratio. */
void ACameraActor::PostEditChange(UProperty* PropertyThatChanged)
{
    Super::PostEditChange(PropertyThatChanged);

    if (DrawFrustum)
    {
        DrawFrustum->FrustumAngle = FOVAngle;
        DrawFrustum->FrustumStartDist = 10.f;
        DrawFrustum->FrustumEndDist = 1000.f;
        DrawFrustum->FrustumAspectRatio = AspectRatio;
    }
}
