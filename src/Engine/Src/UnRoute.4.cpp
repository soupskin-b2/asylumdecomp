// UnRoute.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

// @baa 0x008a6c50
INT UPath_AvoidInEscapableNodes::CachePawnReacFlags(APawn* P)
{
	Radius = P->bCanCrouch ? appTrunc(P->CrouchRadius) : appTrunc(P->CylinderComponent->CollisionRadius);
	Height = P->bCanCrouch ? appTrunc(P->CrouchHeight) : appTrunc(P->CylinderComponent->CollisionHeight);
	MaxFallSpeed = appTrunc(P->MaxFallSpeed * P->AIMaxFallSpeedFactor);	/* APawn::GetAIMaxFallSpeed() */
	return MoveFlags = P->calcMoveFlags();
}
