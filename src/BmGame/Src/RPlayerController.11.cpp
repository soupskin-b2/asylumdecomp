// RPlayerController.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Native.h"

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
		if (NewCurrentSpecialMove != NewMove && !NewCurrentSpecialMove->eventForceNotDestroy())
		{
			NewCurrentSpecialMove->eventCancelSpecialMove();
			GWorld->sub_007e72a0(NewCurrentSpecialMove, FALSE, TRUE);
		}
	}
	NewCurrentSpecialMove = NewMove;
}
