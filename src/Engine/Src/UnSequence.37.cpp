// UnSequence.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"
#include "ue3/Cast.h"

// @baa 0x008f7780
/* SetCaptureParameters(optional TextureRenderTarget2D NewTextureTarget, optional float NewScaleFOV,
 * optional Actor NewViewDest): any parameter left out keeps its current value. */
void USceneCapturePortalComponent::execSetCaptureParameters(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT_OPTX(UTextureRenderTarget2D, NewTextureTarget, TextureTarget);
	P_GET_FLOAT_OPTX(NewScaleFOV, ScaleFOV);
	P_GET_OBJECT_OPTX(AActor, NewViewDest, ViewDestination);
	P_FINISH;

	TextureTarget = NewTextureTarget;
	ScaleFOV = NewScaleFOV;
	ViewDestination = NewViewDest;

	/* keep the owning capture actor's other components in step */
	ASceneCaptureActor* CaptureOwner = Cast<ASceneCaptureActor>(this->GetOwner());
	if (CaptureOwner)
	{
		CaptureOwner->SyncComponents();
	}

	bNeedsSceneUpdate = TRUE;
}
