// UnSkeletalMeshCollision.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/AppMath.h"

/* the kDOP tree's bounds (UnkDOP.h): an axis-aligned box in this build */
#define NUM_PLANES 3
/* the tolerance on hits against a node's bounds (UnkDOP.h) */
#define FUDGE_SIZE 0.1f
/* the max component of a vector (FVector::GetMax, UnMath.h; not in the kit) */
static FORCEINLINE FLOAT GetMax(const FVector& V)
{
    return Max(Max(V.X, V.Y), V.Z);
}

/* FVector's arithmetic (UnMath.h); the kit's FVector has no operators */
struct FVector_ : public FVector
{
    FVector_(FLOAT InX, FLOAT InY, FLOAT InZ) : FVector(InX, InY, InZ) {}

    FVector_ operator+(const FVector& V) const { return FVector_(X + V.X, Y + V.Y, Z + V.Z); }
    FVector_ operator*(FLOAT Scale) const { return FVector_(X * Scale, Y * Scale, Z * Scale); }
};

/* TkDOPLineCollisionCheck<FSkelMeshCollisionDataProvider,WORD> (UnkDOP.h): a line check against a bone's
 * per-poly collision. Only the local-space line is used here. Not in the kit. */
struct FSkelMeshkDOPLineCollisionCheck
{
    BYTE OpaqueCheckState[0x20]; /* the result, data provider, tree, world start/end and trace flags */
    FVector_ LocalStart;         /* 0x20 */
    FVector_ LocalEnd;           /* 0x2c */
    FVector_ LocalDir;           /* 0x38 */
    FVector_ LocalOneOverDir;    /* 0x44 */
};

/* TkDOP<FSkelMeshCollisionDataProvider,WORD> (UnkDOP.h): a node's bounds */
struct FkDOP
{
    FLOAT Min[NUM_PLANES];
    FLOAT Max[NUM_PLANES];

    UBOOL LineCheck(FSkelMeshkDOPLineCollisionCheck& Check, FLOAT& HitTime);
};

// @baa 0x0094eb40
/* Does the line hit the box? HitTime is how far along it does (0 if it starts inside). */
UBOOL FkDOP::LineCheck(FSkelMeshkDOPLineCollisionCheck& Check, FLOAT& HitTime)
{
    FVector Time(0.f, 0.f, 0.f);
    UBOOL Inside = 1;

    HitTime = 0.0f;
    if (Check.LocalStart.X < Min[0])
    {
        if (Check.LocalDir.X <= 0.0f)
        {
            return 0;
        }
        else
        {
            Inside = 0;
            Time.X = (Min[0] - Check.LocalStart.X) * Check.LocalOneOverDir.X;
        }
    }
    else if (Check.LocalStart.X > Max[0])
    {
        if (Check.LocalDir.X >= 0.0f)
        {
            return 0;
        }
        else
        {
            Inside = 0;
            Time.X = (Max[0] - Check.LocalStart.X) * Check.LocalOneOverDir.X;
        }
    }

    if (Check.LocalStart.Y < Min[1])
    {
        if (Check.LocalDir.Y <= 0.0f)
        {
            return 0;
        }
        else
        {
            Inside = 0;
            Time.Y = (Min[1] - Check.LocalStart.Y) * Check.LocalOneOverDir.Y;
        }
    }
    else if (Check.LocalStart.Y > Max[1])
    {
        if (Check.LocalDir.Y >= 0.0f)
        {
            return 0;
        }
        else
        {
            Inside = 0;
            Time.Y = (Max[1] - Check.LocalStart.Y) * Check.LocalOneOverDir.Y;
        }
    }

    if (Check.LocalStart.Z < Min[2])
    {
        if (Check.LocalDir.Z <= 0.0f)
        {
            return 0;
        }
        else
        {
            Inside = 0;
            Time.Z = (Min[2] - Check.LocalStart.Z) * Check.LocalOneOverDir.Z;
        }
    }
    else if (Check.LocalStart.Z > Max[2])
    {
        if (Check.LocalDir.Z >= 0.0f)
        {
            return 0;
        }
        else
        {
            Inside = 0;
            Time.Z = (Max[2] - Check.LocalStart.Z) * Check.LocalOneOverDir.Z;
        }
    }

    // the line starts inside the box
    if (Inside)
    {
        HitTime = 0.f;
        return 1;
    }

    // the furthest entry plane is where it hits
    HitTime = GetMax(Time);

    if (HitTime >= 0.0f && HitTime <= 1.0f)
    {
        const FVector& Hit = Check.LocalStart + Check.LocalDir * HitTime;
        return (Hit.X > Min[0] - FUDGE_SIZE && Hit.X < Max[0] + FUDGE_SIZE &&
                Hit.Y > Min[1] - FUDGE_SIZE && Hit.Y < Max[1] + FUDGE_SIZE &&
                Hit.Z > Min[2] - FUDGE_SIZE && Hit.Z < Max[2] + FUDGE_SIZE);
    }
    return 0;
}
