// UnController.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

// @baa 0x007a1da0
FRotator AController::SetRotationRate(FLOAT deltaTime)
{
	if (!Pawn || Pawn->IsHumanControlled())
	{
		return FRotator(0, 0, 0);
	}
	if (bForceDesiredRotation)
	{
		Pawn->DesiredRotation = DesiredRotation;
	}
	return FRotator(appRound(RotationRate.Pitch * deltaTime), appRound(RotationRate.Yaw * deltaTime), appRound(RotationRate.Roll * deltaTime));
}
