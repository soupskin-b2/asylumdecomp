// DynamicLightEnvironmentComponent.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Script.h"
#include "ue3/Cast.h"

// @baa 0x006bdce0
template UPointLightComponent* CastChecked<UPointLightComponent>(UObject* Src);

// @baa 0x006bdb10
template UDirectionalLightComponent* CastChecked<UDirectionalLightComponent>(UObject* Src);

// @baa 0x006bdeb0
template USphericalHarmonicLightComponent* CastChecked<USphericalHarmonicLightComponent>(UObject* Src);

// @baa 0x006be080
template USkyLightComponent* CastChecked<USkyLightComponent>(UObject* Src);
