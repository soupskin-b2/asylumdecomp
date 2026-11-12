// UnSequence.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"
#include "ue3/Cast.h"
#include "ue3/AppMath.h"
#include <float.h>

/* Kit gaps: UActorComponent::GetOwner (inline in EngineBaseTypes.h) and the view/projection matrix update of
 * USceneCapture2DComponent (0x008b01b0, only does work while bUpdateMatrices is set). */
struct UActorComponent_ : public UActorComponent
{
	AActor* GetOwner() const { return Owner; }
};

struct USceneCapture2DComponent_ : public USceneCapture2DComponent
{
	void UpdateMatrices();
};

// @baa 0x008f75a0
/* SetCaptureParameters(optional TextureRenderTarget2D NewTextureTarget, optional float NewFOV,
 * optional float NewNearPlane, optional float NewFarPlane): any parameter left out keeps its value. */
void USceneCapture2DComponent::execSetCaptureParameters(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT_OPTX(UTextureRenderTarget2D, NewTextureTarget, TextureTarget);
	P_GET_FLOAT_OPTX(NewFOV, FieldOfView);
	P_GET_FLOAT_OPTX(NewNearPlane, NearPlane);
	P_GET_FLOAT_OPTX(NewFarPlane, FarPlane);
	P_FINISH;

	TextureTarget = NewTextureTarget;
	FieldOfView = NewFOV;
	NearPlane = NewNearPlane;
	FarPlane = NewFarPlane;

	/* keep the planes and the fov sane */
	NearPlane = Max<FLOAT>(NearPlane, 1.f);
	if (FarPlane > 0.f)
	{
		FarPlane = Clamp<FLOAT>(FarPlane, NearPlane, FLT_MAX);
	}
	FieldOfView = Clamp<FLOAT>(FieldOfView, 1.f, 179.f);

	/* force the matrices to be rebuilt */
	UBOOL bOldUpdateMatrices = bUpdateMatrices;
	bUpdateMatrices = TRUE;
	((USceneCapture2DComponent_*)this)->UpdateMatrices();
	bUpdateMatrices = bOldUpdateMatrices;

	/* keep the owning capture actor's other components in step */
	ASceneCaptureActor* CaptureOwner = Cast<ASceneCaptureActor>(((UActorComponent_*)this)->GetOwner());
	if (CaptureOwner)
	{
		CaptureOwner->SyncComponents();
	}

	bNeedsSceneUpdate = TRUE;
}
