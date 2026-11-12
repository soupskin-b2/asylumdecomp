// PointLightComponent.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

// @baa 0x006e4530
/* Keeps the falloff exponent positive before the light is updated. */
void UPointLightComponent::PostEditChange(UProperty* PropertyThatChanged)
{
    FalloffExponent = Max(0.0001f, FalloffExponent);
    Super::PostEditChange(PropertyThatChanged);
}
