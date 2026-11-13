// UnPawn.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/AppMath.h"
#include "ue3/Cast.h"

// @baa 0x0087b1d0
UBOOL AActor::TouchReachSucceeded(APawn* P, const FVector& TestPosition)
{
	if (bCollideActors && P->bCollideActors)
	{
		if (TestPosition == P->Location)
		{
			for (INT Idx = 0; Idx < Touching.Num(); Idx++)
			{
				if (Touching(Idx) == P)
				{
					return TRUE;
				}
			}
			return FALSE;
		}
		else
		{
			UCylinderComponent* Cylinder = Cast<UCylinderComponent>(CollisionComponent);
			if (Cylinder != NULL && (!bBlockActors || !Cylinder->BlockActors))
			{
				if (Square(Location.Z - TestPosition.Z) < Square(Cylinder->CollisionHeight + P->CylinderComponent->CollisionHeight) &&
					Square(Location.X - TestPosition.X) + Square(Location.Y - TestPosition.Y) < Square(Cylinder->CollisionRadius + P->CylinderComponent->CollisionRadius))
				{
					return TRUE;
				}
			}
		}
	}
	return FALSE;
}
