// RPawn.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Cast.h"

// @baa 0x01673910
/* AI pawns let their combat behaviour decide the force; anything else uses the plain radial force. */
FVector ARPawnCombat::GetForceToGiveToPawn(ARPawnCombat* Receiver, FLOAT MaxForce, FLOAT MinRange, FLOAT MaxRange)
{
    ARBMAIController* AIController = Cast<ARBMAIController>(Controller);
    URBMBehaviour_Combat* CombatBehaviour = AIController ? AIController->CombatBehaviour : NULL;
    if (CombatBehaviour)
    {
        return CombatBehaviour->GetForceToGiveToPawn(Receiver, MaxForce, MinRange, MaxRange);
    }
    return GetRadialForce(Receiver, MaxForce, MinRange, MaxRange);
}
