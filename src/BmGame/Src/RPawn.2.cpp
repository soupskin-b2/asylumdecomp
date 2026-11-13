// RPawn.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include <math.h>

// @baa 0x01673b20
void ARPawnCombat::SetDestHeading(FVector V)
{
    DestRot = atan2f(V.Y, V.X);
}

/* Unnamed in the kit: an ARPawnCombat helper that turns the pawn's DestRot towards a world location (the yaw, in
 * radians, of TargetLocation - Location). */

// @baa 0x01676b70
void ARPawnCombat::FacePos(FVector TargetLocation)
{
    FVector Dir(TargetLocation.X - Location.X, TargetLocation.Y - Location.Y, TargetLocation.Z - Location.Z);
    DestRot = atan2(Dir.Y, Dir.X);
}

/* Unnamed in the kit: an ARPawnCombat helper that turns the pawn's DestRot towards another pawn's AimAtPos (planar). */
struct ARPawnCombat__0167bba0 : public ARPawnCombat
{
    void FacePawn(ARPawnCombat* Other);
};

// @baa 0x0167bba0
void ARPawnCombat__0167bba0::FacePawn(ARPawnCombat* Other)
{
    if (Other)
    {
        FVector Target = Other->AimAtPos;
        FVector Dir(Target.X - Location.X, Target.Y - Location.Y, Target.Z - Location.Z);
        DestRot = atan2(Dir.Y, Dir.X);
    }
}
