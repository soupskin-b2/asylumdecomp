// RBmAIClass.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Cast.h"

// @baa 0x015ea550
/* Whether a pawn's combat collision updates this frame: always for the player; otherwise when its controller's slot
 * in the global list falls in the current update group. */
UBOOL ARBMAIManager::CanUpdateCombatCollision(class ARPawn* TestPawn)
{
	if (!TestPawn)
	{
		return FALSE;
	}
	if (Cast<ARPawnPlayer>(TestPawn))
	{
		return TRUE;
	}
	INT Index;
	for (Index = 0; Index < GlobalControllerInfoList.Num(); Index++)
	{
		if (GlobalControllerInfoList(Index).Controller->Pawn == TestPawn)
		{
			break;
		}
	}
	return (Index % CombatCollisionUpdateGroups) == CurrCombatCollisionUpdate;
}
