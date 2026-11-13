// Engine_07a0000.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Cast.h"

// @baa 0x007a0330
/* APlayerController slot 0x354 (kit vf_354, UE3 IsLocalPlayerController()): the player is a local one. */
UBOOL APlayerController::IsLocalPlayerController()
{
    return Player && ObjectIsA(Player, ULocalPlayer::StaticClass());
}

// @baa 0x007a03a0
/* APlayerController slot 0x3a4 (kit vf_3a4, UE3 IsLocalController()): the player is a local one. */
INT APlayerController::vf_3a4()
{
    return Player && ObjectIsA(Player, ULocalPlayer::StaticClass());
}

/* UE3's path-search node evaluator (UnPath.h's NodeEvaluator). */
typedef FLOAT (*NodeEvaluator)(ANavigationPoint*, APawn*, FLOAT);

/* Unnamed in the kit: UE3's static FLOAT FindRandomPath(ANavigationPoint* CurrentNode, APawn* seeker, FLOAT bestWeight)
 * (UnController.cpp's evaluator for FindRandomDest). */
FLOAT sub_007a0670(ANavigationPoint* CurrentNode, APawn* seeker, FLOAT bestWeight);
/* Unnamed in the kit: UE3's FLOAT APawn::findPathToward(AActor* goal, FVector GoalLocation, NodeEvaluator NodeEval,
 * FLOAT BestWeight, UBOOL bWeightDetours, INT MaxPathLength, UBOOL bReturnPartial, INT SoftMaxNodes). */
struct APawn_ : public APawn
{
    FLOAT sub_008ce4d0(AActor* goal, FVector GoalLocation, NodeEvaluator NodeEval, FLOAT BestWeight, UBOOL bWeightDetours,
        INT MaxPathLength, UBOOL bReturnPartial, INT SoftMaxNodes);
};

// @baa 0x007ad390
/* UE3's AController::FindRandomDest() (execFindRandomDest's native): a random reachable navigation point. */
ANavigationPoint* AController::FindRandomDest()
{
    if (!Pawn)
    {
        return NULL;
    }
    ANavigationPoint* bestPath = NULL;
    bPreparingMove = FALSE;
    if (((APawn_*)Pawn)->sub_008ce4d0(NULL, FVector(0.f, 0.f, 0.f), &sub_007a0670, 0.f, FALSE, 10000000, FALSE, 200) > 0.f)
    {
        bestPath = Cast<ANavigationPoint>(RouteGoal);
    }
    return bestPath;
}
