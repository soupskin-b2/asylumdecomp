// UnPawn.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Cast.h"

/* ETestMoveResult (UnPath.h) */
enum ETestMoveResult { TESTMOVE_Stopped = 0, TESTMOVE_Moved = 1, TESTMOVE_Fell = 2, TESTMOVE_HitGoal = 5 };

struct APawn_ : public APawn {
    ETestMoveResult sub_008660b0(AActor* GoalActor); // HitGoal
};

// @baa 0x008660b0
ETestMoveResult APawn_::sub_008660b0(AActor* GoalActor)
{
    if (ObjectIsA(GoalActor, ANavigationPoint::StaticClass()) && !GoalActor->bBlockActors)
    {
        return TESTMOVE_Stopped;
    }
    return TESTMOVE_HitGoal;
}
