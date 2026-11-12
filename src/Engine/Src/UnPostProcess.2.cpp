// UnPostProcess.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

// @baa 0x0088f720
void APostProcessVolume::PostLoad()
{
	Super::PostLoad();
	Settings.Scene_Desaturation = Clamp<FLOAT>(Settings.Scene_Desaturation, 0.f, 1.f);
}

// @baa 0x0088f6f0
void APostProcessVolume::PostEditChange(UProperty* PropertyThatChanged)
{
	Settings.Scene_Desaturation = Clamp<FLOAT>(Settings.Scene_Desaturation, 0.f, 1.f);
	Super::PostEditChange(PropertyThatChanged);
}
