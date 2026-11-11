// UnActorComponent.cpp (part 3 of 3): 7 functions
// Placed here by: neighbours 7.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Cast.h"

// @baa 0x0075ab50
template UGameEngine* Cast<UGameEngine>(UObject* Src);

// @baa 0x0075abb0
template ULocalPlayer* Cast<ULocalPlayer>(UObject* Src);

// @baa 0x0075ac10
template ULightComponent* Cast<ULightComponent>(UObject* Src);

// @baa 0x0075ac70
template ARB_ConstraintActor* Cast<ARB_ConstraintActor>(UObject* Src);

// @baa 0x0075acd0
template UCylinderComponent* Cast<UCylinderComponent>(UObject* Src);

// @baa 0x0075ad90
template UPointLightComponent* Cast<UPointLightComponent>(UObject* Src);

// @baa 0x0075adf0
template USpotLightComponent* Cast<USpotLightComponent>(UObject* Src);
