// UnCamera.cpp: 2 functions
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

// @baa 0x007880c0
/* UE3's UCameraAnimInst::Stop(bImmediate) (named sub_007880c0 in the kit). With a blend-out time and no hurry, the
 * anim starts blending out; otherwise it finishes now and lets go of its interp data. */
void UCameraAnimInst::Stop(UBOOL bImmediate)
{
	if (bImmediate || BlendOutTime <= 0.f)
	{
		if (InterpGroupInst->Group)
		{
			InterpGroupInst->TermGroupInst(TRUE);
		}
		bFinished = TRUE;
		MoveTrack = NULL;
		MoveInst = NULL;
		SourceAnimNode = NULL;
	}
	else
	{
		bBlendingOut = TRUE;
		CurBlendOutTime = 0.f;
	}
}
