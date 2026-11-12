// RControllableChatteringTeethBase.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Cast.h"

/* Kit gap: FVector's inline operators (UnMath.h) aren't declared. */
struct FVector_ : public FVector
{
	FORCEINLINE FVector_(FLOAT InX, FLOAT InY, FLOAT InZ) { X = InX; Y = InY; Z = InZ; }
	FORCEINLINE FVector_ operator-(const FVector& V) const { return FVector_(X - V.X, Y - V.Y, Z - V.Z); }
	FORCEINLINE FLOAT SizeSquared() const { return X * X + Y * Y + Z * Z; }
};

struct ARControllableChatteringTeethBase_ : public ARControllableChatteringTeethBase
{
	UBOOL sub_0171f1a0();
};

// @baa 0x0171f1a0
/* Whether any villain in the current room is near enough (feet to feet) for the teeth to explode on their own. */
UBOOL ARControllableChatteringTeethBase_::sub_0171f1a0()
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
					const FVector_ TeethFeet = ((const FVector_&)Location) - FVector_(0.f, 0.f, CylinderComponent->CollisionHeight);
					const FLOAT MinDistSq = MinVillainDistanceBeforeAutoExplode * MinVillainDistanceBeforeAutoExplode;
					for (INT i = 0; i < NumControllers; i++)
					{
						ARBMAIController* AIController = RoomAIState->ControllerList(i);
						if (AIController)
						{
							ARPawnVillain* Villain = Cast<ARPawnVillain>(AIController->Pawn);
							if (Villain)
							{
								const FVector_ VillainFeet = ((const FVector_&)Villain->Location) - FVector_(0.f, 0.f, Villain->CylinderComponent->CollisionHeight);
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
