// BmGame_1530000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Native.h"

// @baa 0x0153d140
/* Start the sequence from the top: rewind the clock and note when it started. */
void URSeqAct_EventSequence::Activated()
{
	CurrentTime = 0.f;
	LastUpdateTime = 0.f;
	NextEvent = 0;
	TimerStartTime = GWorld->GetWorldInfo()->TimeSeconds;
}
