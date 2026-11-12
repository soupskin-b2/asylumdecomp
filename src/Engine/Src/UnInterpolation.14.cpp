// UnInterpolation.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

#define KINDA_SMALL_NUMBER (1.e-4)
// @baa 0x00cf41f0
/* The track's key range; the position, rotation and lookup tracks always carry the same keys. */
void UInterpTrackMove::GetTimeRange(FLOAT& StartTime, FLOAT& EndTime)
{
#line 2864 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp"
	check( (PosTrack.Points.Num() == EulerTrack.Points.Num()) && (PosTrack.Points.Num() == LookupTrack.Points.Num()) );

	if (PosTrack.Points.Num() == 0)
	{
		StartTime = 0.f;
		EndTime = 0.f;
	}
	else
	{
#line 2874 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnInterpolation.cpp"
		check( (PosTrack.Points(0).InVal - EulerTrack.Points(0).InVal) < KINDA_SMALL_NUMBER );
		check( (PosTrack.Points(PosTrack.Points.Num()-1).InVal - EulerTrack.Points(EulerTrack.Points.Num()-1).InVal) < KINDA_SMALL_NUMBER );

		StartTime = PosTrack.Points(0).InVal;
		EndTime = PosTrack.Points(PosTrack.Points.Num() - 1).InVal;
	}
}

#line 31 "candidate.cpp"
