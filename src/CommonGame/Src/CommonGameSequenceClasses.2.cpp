// CommonGameSequenceClasses.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Native.h"

// @baa 0x01540100
/* Fires output 0 when stopped by input 1, and output N+1 when the timer passes TriggerEventsAtTimes(N).
 * Inputs: 0 start, 1 stop (and fire the "stopped" output), 2 abort. */
UBOOL URSeqAct_EventSequence::UpdateOp(FLOAT DeltaTime)
{
	if (InputLinks(0).bHasImpulse)
	{
		bTimerRunning = TRUE;
	}
	else if (InputLinks(1).bHasImpulse)
	{
		if (bTimerRunning)
		{
			bTimerRunning = FALSE;
			FSeqOpOutputLink& Link = OutputLinks(0);
			if (!Link.bDisabled)
			{
				Link.bHasImpulse = TRUE;
			}
			return TRUE;
		}
	}
	else if (InputLinks(2).bHasImpulse)
	{
		bTimerRunning = FALSE;
	}

	if (bTimerRunning)
	{
		const FLOAT Time = GWorld->GetWorldInfo()->TimeSeconds - TimerStartTime;
		if (Time != LastUpdateTime)
		{
			const FLOAT EventTime = TriggerEventsAtTimes(NextEvent).TimeForLink;
			if (Time >= EventTime && EventTime > LastUpdateTime)
			{
				FSeqOpOutputLink& Link = OutputLinks(NextEvent + 1);
				if (!Link.bDisabled)
				{
					Link.bHasImpulse = TRUE;
				}
				NextEvent++;
				if (NextEvent >= TriggerEventsAtTimes.Num())
				{
					return TRUE;
				}
			}
			LastUpdateTime = Time;
		}
	}
	return FALSE;
}
