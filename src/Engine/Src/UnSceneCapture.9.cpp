// UnSceneCapture.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"
#include "ue3/Cast.h"

// @baa 0x008dd700
/* Keeps the editor frustum in step with the 2D scene capture: its field of view, near/far planes (at least 50 and
 * 200), target texture and, when there is a target, the target's aspect ratio. */
void ASceneCapture2DActor::SyncComponents()
{
	USceneCapture2DComponent* SceneCapture2D = Cast<USceneCapture2DComponent>(SceneCapture);
	if (DrawFrustum && SceneCapture2D)
	{
		DrawFrustum->Texture = SceneCapture2D->TextureTarget;
		DrawFrustum->FrustumAngle = SceneCapture2D->FieldOfView;
		DrawFrustum->FrustumStartDist = Max<FLOAT>(SceneCapture2D->NearPlane, 50.f);
		DrawFrustum->FrustumEndDist = Max<FLOAT>(SceneCapture2D->FarPlane, 200.f);
		if (SceneCapture2D->TextureTarget)
		{
			DrawFrustum->FrustumAspectRatio = (FLOAT)SceneCapture2D->TextureTarget->SizeX / (FLOAT)SceneCapture2D->TextureTarget->SizeY;
		}
	}
}
