// RControllableChatteringTeethBase.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Cast.h"

// @baa 0x0171f1a0
/* Whether any villain in the current room is near enough (feet to feet) for the teeth to explode on their own. */
UBOOL ARControllableChatteringTeethBase::sub_0171f1a0()
{
	if (WorldInfo)
	{
		ARGameInfo* GameInfo = Cast<ARGameInfo>(WorldInfo->Game);
		if (GameInfo)
		{
			URBMRoomAIState* RoomAIState = GameInfo->CurrentRoomAIState;
			if (RoomAIState)
			{
				const INT NumControllers = RoomAIState->ControllerList.Num();
				if (NumControllers > 0)
				{
					const FVector TeethFeet = Location - FVector(0.f, 0.f, CylinderComponent->CollisionHeight);
					const FLOAT MinDistSq = MinVillainDistanceBeforeAutoExplode * MinVillainDistanceBeforeAutoExplode;
					for (INT i = 0; i < NumControllers; i++)
					{
						ARBMAIController* AIController = RoomAIState->ControllerList(i);
						if (AIController)
						{
							ARPawnVillain* Villain = Cast<ARPawnVillain>(AIController->Pawn);
							if (Villain)
							{
								const FVector VillainFeet = Villain->Location - FVector(0.f, 0.f, Villain->CylinderComponent->CollisionHeight);
								if ((VillainFeet - TeethFeet).SizeSquared() <= MinDistSq)
								{
									return TRUE;
								}
							}
						}
					}
				}
			}
		}
	}
	return FALSE;
}

template ARGameInfo* Cast<ARGameInfo>(UObject* Src);

template ARPawnVillain* Cast<ARPawnVillain>(UObject* Src);
