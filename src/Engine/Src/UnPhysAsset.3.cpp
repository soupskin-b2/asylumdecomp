// UnPhysAsset.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Native.h"

struct FRBPhysScene;
/* Callees Classes.h doesn't declare. */
struct URB_ConstraintInstance_ : public URB_ConstraintInstance
{
	UBOOL sub_00a3fe50(FRBPhysScene* Scene, UBOOL bFireBrokenEvent);	/* TermConstraint */
};

struct URB_BodyInstance_ : public URB_BodyInstance
{
	UBOOL sub_00a09b60(FRBPhysScene* Scene);	/* TermBody */
};

struct UWorld_ : public UWorld
{
	void sub_00a47a90(URB_ConstraintInstance* Constraint);	/* returns a constraint instance to the world's pool */
	void sub_00a47a10(URB_BodyInstance* Body);		/* returns a body instance to the world's pool */
};

/* UPhysicsAssetInstance::TermInstance isn't declared in Classes.h. */
struct UPhysicsAssetInstance_ : public UPhysicsAssetInstance
{
	UBOOL TermInstance(FRBPhysScene* Scene);
};

// @baa 0x00a0ace0
UBOOL UPhysicsAssetInstance_::TermInstance(FRBPhysScene* Scene)
{
	UBOOL bTerminated = FALSE;

	for (INT i = 0; i < Constraints.Num(); i++)
	{
#line 2480 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysAsset.cpp"
		check(Constraints(i));
		if (((URB_ConstraintInstance_*)Constraints(i))->sub_00a3fe50(Scene, FALSE))
		{
			((UWorld_*)GWorld)->sub_00a47a90(Constraints(i));
			Constraints(i) = NULL;
			bTerminated = TRUE;
		}
	}

	// without bodies of its own the instance is always done
	if (!bInitBodies)
	{
		bTerminated = TRUE;
	}

	for (INT i = 0; i < Bodies.Num(); i++)
	{
#line 2499 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysAsset.cpp"
		check(Bodies(i));
		if (((URB_BodyInstance_*)Bodies(i))->sub_00a09b60(Scene))
		{
			((UWorld_*)GWorld)->sub_00a47a10(Bodies(i));
			Bodies(i) = NULL;
			bTerminated = TRUE;
		}
	}

	return bTerminated;
}

#line 70 "candidate.cpp"
