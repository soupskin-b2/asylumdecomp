// RPlayerController.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Native.h"

/* Kit gaps: the special move instance's script event glue (out of line here: eventForceNotDestroy 016128b0,
 * eventCancelSpecialMove 01612880) isn't declared, nor is this setter (UE3-style SetCurrentSpecialMove, called by
 * execSetCurrentSpecialMove). UWorld::sub_007e72a0 is DestroyActor(Actor, bNetForce, bShouldModifyLevel). */
struct ARSpecialMoveInstance_ : public ARSpecialMoveInstance
{
	UBOOL eventForceNotDestroy();
	void eventCancelSpecialMove();
};

struct ARPlayerController_ : public ARPlayerController
{
	void sub_016153e0(class ARSpecialMoveInstance* NewMove);
};

// @baa 0x016153e0
/* Replaces the current special move; the old one is cancelled and destroyed unless it asks to be kept. */
void ARPlayerController_::sub_016153e0(class ARSpecialMoveInstance* NewMove)
{
	if (NewCurrentSpecialMove)
	{
		if (NewCurrentSpecialMove != NewMove && !((ARSpecialMoveInstance_*)NewCurrentSpecialMove)->eventForceNotDestroy())
		{
			((ARSpecialMoveInstance_*)NewCurrentSpecialMove)->eventCancelSpecialMove();
			GWorld->sub_007e72a0(NewCurrentSpecialMove, FALSE, TRUE);
		}
	}
	NewCurrentSpecialMove = NewMove;
}
