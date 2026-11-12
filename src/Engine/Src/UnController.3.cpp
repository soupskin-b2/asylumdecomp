// UnController.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"
#include "ue3/Native.h"

extern FName g_026c4e54;
	/* ENGINE_SeePlayer */
extern FName g_026c4b14;
	/* ENGINE_SeeMonster */
/* The script events' generated glue (EngineClasses.h), out of line here; SeePlayer/SeeMonster are
 * probe functions, so the glue first checks the state's probe mask. */

// @baa 0x007a1570
void AController::ShowSelf()
{
	if (!Pawn)
	{
		return;
	}

	for (AController* C = GWorld->sub_009c8570(); C; C = C->NextController)
	{
		if (C != this && C->ShouldCheckVisibilityOf(this) && C->SeePawn(Pawn, TRUE))
		{
			if (bIsPlayer)
			{
				((AController*)C)->eventSeePlayer(Pawn);
			}
			else
			{
				((AController*)C)->eventSeeMonster(Pawn);
			}
		}
	}
}
