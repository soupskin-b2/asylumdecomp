// Engine_08d0000.cpp (part 2 of 8): 6 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Cast.h"

// @baa 0x008dcbe0
template USceneCapture2DComponent* Cast<USceneCapture2DComponent>(UObject* Src);

// @baa 0x008dcc40
template USceneCaptureCubeMapComponent* Cast<USceneCaptureCubeMapComponent>(UObject* Src);

// @baa 0x008dcca0
template USceneCaptureReflectComponent* Cast<USceneCaptureReflectComponent>(UObject* Src);

// @baa 0x008dcd00
template USceneCapturePortalComponent* Cast<USceneCapturePortalComponent>(UObject* Src);

// @baa 0x008dcd60
template USeqVar_Object* Cast<USeqVar_Object>(UObject* Src);

// @baa 0x008dcdc0
template USeqVar_Named* Cast<USeqVar_Named>(UObject* Src);
