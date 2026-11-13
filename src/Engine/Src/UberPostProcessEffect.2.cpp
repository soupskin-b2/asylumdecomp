// UberPostProcessEffect.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

// @baa 0x0075d0d0
/* The uber post-process always renders in the post-process DPG (5); clamps the desaturation. */
void UUberPostProcessEffect::PostLoad()
{
	Super::PostLoad();
	SceneDPG = 5;
	SceneDesaturation = Clamp(SceneDesaturation, 0.f, 1.f);
}
