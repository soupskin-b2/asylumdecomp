// R3rdPersonCamera.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Cast.h"
#include "ue3/AppMath.h"

/* Kit gap: UGameViewportClient::GetViewportSize (0x00889880, UnPlayer.cpp) isn't declared. */

// @baa 0x01690760
/* Writes the live free-camera tuning back into ConfigToSave; with separate 4:3 settings, only when the aspect ratio
 * hasn't changed since loading, and into the 4:3 offsets when the screen is nearer 4:3 than 16:9. */
void AR3rdPersonCamera::SaveFreeCameraConfig(FFreeCameraConfig& ConfigToSave)
{
	if (ConfigToSave.bUseSeparate43Settings)
	{
		FLOAT AspectRatio = 16.f / 9.f;
		if (PCOwner)
		{
			ULocalPlayer* LocalPlayer = Cast<ULocalPlayer>(PCOwner->Player);
			if (LocalPlayer)
			{
				FVector2D ViewportSize;
				((UGameViewportClient*)LocalPlayer->ViewportClient)->GetViewportSize(ViewportSize);
				AspectRatio = ViewportSize.X / ViewportSize.Y;
			}
		}
		if (LoadedAspectRatio != AspectRatio)
		{
			return;
		}
		if (appAbs(AspectRatio - 16.f / 9.f) < appAbs(AspectRatio - 4.f / 3.f))
		{
			ConfigToSave.StateFreeCameraSitOffsetMin = StateFreeCameraSitOffsetMin;
			ConfigToSave.StateFreeCameraSitOffsetMax = StateFreeCameraSitOffsetMax;
		}
		else
		{
			ConfigToSave.StateFreeCamera43SitOffsetMin = StateFreeCameraSitOffsetMin;
			ConfigToSave.StateFreeCamera43SitOffsetMax = StateFreeCameraSitOffsetMax;
		}
	}
	else
	{
		ConfigToSave.StateFreeCameraSitOffsetMin = StateFreeCameraSitOffsetMin;
		ConfigToSave.StateFreeCameraSitOffsetMax = StateFreeCameraSitOffsetMax;
	}
	ConfigToSave.StateFreeCameraPullOffset = StateFreeCameraPullOffset;
	ConfigToSave.CameraPivotOffset = CameraPivotOffset;
	ConfigToSave.CameraSitOffsetPower = StateSitOffsetPower;
	ConfigToSave.ZoomedOffset = ZoomOffset;
	ConfigToSave.maxPitch = (FLOAT)maxPitch;
	ConfigToSave.MinPitch = (FLOAT)MinPitch;
	ConfigToSave.MinFreeCameraDistance = MinFreeCameraDistance;
	ConfigToSave.MaxFreeCameraDistance = MaxFreeCameraDistance;
	ConfigToSave.ShortCamSpringConst = ShortCamSpringConst;
	ConfigToSave.LongCamSpringConst = LongCamSpringConst;
	ConfigToSave.DefaultCameraPitch = StateDefaultCameraPitch;
}
