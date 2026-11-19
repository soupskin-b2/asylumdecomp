// Engine_0830000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x008358f0
void ANavigationPoint::GetBoundingCylinder(FLOAT& CollisionRadius, FLOAT& CollisionHeight)
{
	if (CylinderComponent)
	{
		CollisionRadius = CylinderComponent->CollisionRadius;
		CollisionHeight = CylinderComponent->CollisionHeight;
	}
	else
	{
		Super::GetBoundingCylinder(CollisionRadius, CollisionHeight);
	}
}

// @baa 0x0083eb20
/* Slot 0x31c (unnamed in the kit): after the actor handling, kills the node's reach specs unless the flag is set. */
void ANavigationPoint::MarkComponentsAsPendingKill(UBOOL bFlag)
{
	Super::MarkComponentsAsPendingKill(bFlag);
	if (!bFlag)
	{
		for (INT PathIdx = 0; PathIdx < PathList.Num(); PathIdx++)
		{
			if (PathList(PathIdx) != NULL)
			{
				((UObject*)PathList(PathIdx))->MarkPendingKill();
			}
		}
	}
}

#line 58 "candidate.cpp"
