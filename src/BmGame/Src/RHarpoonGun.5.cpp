// RHarpoonGun.cpp: 6 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026e2e84;
	/* ReleaseTarget */
struct ARSpecialMoveInstance_HarpoonYank_ : public ARSpecialMoveInstance_HarpoonYank
{
	void eventReleaseTarget(FHarpoonTargetInfo& CurrTarget);
};

// @baa 0x016385a0
/* RSpecialMoveInstance_HarpoonYank.ReleaseTarget script event: the generated glue, out of line here. */
void ARSpecialMoveInstance_HarpoonYank_::eventReleaseTarget(FHarpoonTargetInfo& CurrTarget)
{
	struct RSpecialMoveInstance_HarpoonYank_eventReleaseTarget_Parms
	{
		FHarpoonTargetInfo CurrTarget;
	} Parms;
	Parms.CurrTarget = CurrTarget;
	ProcessEvent(FindFunctionChecked(g_026e2e84), &Parms);
	CurrTarget = Parms.CurrTarget;
}

extern FName g_026e2934;
	/* TripTargetInvisibleCollision */
struct ARSpecialMoveInstance_HarpoonYank__01638600 : public ARSpecialMoveInstance_HarpoonYank
{
	void eventTripTargetInvisibleCollision(FHarpoonTargetInfo& CurrentTarget);
};

// @baa 0x01638600
/* RSpecialMoveInstance_HarpoonYank.TripTargetInvisibleCollision script event: the generated glue, out of line here. */
void ARSpecialMoveInstance_HarpoonYank__01638600::eventTripTargetInvisibleCollision(FHarpoonTargetInfo& CurrentTarget)
{
	struct RSpecialMoveInstance_HarpoonYank_eventTripTargetInvisibleCollision_Parms
	{
		FHarpoonTargetInfo CurrentTarget;
	} Parms;
	Parms.CurrentTarget = CurrentTarget;
	ProcessEvent(FindFunctionChecked(g_026e2934), &Parms);
	CurrentTarget = Parms.CurrentTarget;
}

extern FName g_026e2774;
	/* TripTarget */
struct ARSpecialMoveInstance_HarpoonYank__01638660 : public ARSpecialMoveInstance_HarpoonYank
{
	void eventTripTarget(FHarpoonTargetInfo& CurrentTarget);
};

// @baa 0x01638660
/* RSpecialMoveInstance_HarpoonYank.TripTarget script event: the generated glue, out of line here. */
void ARSpecialMoveInstance_HarpoonYank__01638660::eventTripTarget(FHarpoonTargetInfo& CurrentTarget)
{
	struct RSpecialMoveInstance_HarpoonYank_eventTripTarget_Parms
	{
		FHarpoonTargetInfo CurrentTarget;
	} Parms;
	Parms.CurrentTarget = CurrentTarget;
	ProcessEvent(FindFunctionChecked(g_026e2774), &Parms);
	CurrentTarget = Parms.CurrentTarget;
}

extern FName g_026e2bdc;
	/* YankTarget */
struct ARSpecialMoveInstance_HarpoonYank__016386c0 : public ARSpecialMoveInstance_HarpoonYank
{
	void eventYankTarget(FHarpoonTargetInfo& CurrentTarget);
};

// @baa 0x016386c0
/* RSpecialMoveInstance_HarpoonYank.YankTarget script event: the generated glue, out of line here. */
void ARSpecialMoveInstance_HarpoonYank__016386c0::eventYankTarget(FHarpoonTargetInfo& CurrentTarget)
{
	struct RSpecialMoveInstance_HarpoonYank_eventYankTarget_Parms
	{
		FHarpoonTargetInfo CurrentTarget;
	} Parms;
	Parms.CurrentTarget = CurrentTarget;
	ProcessEvent(FindFunctionChecked(g_026e2bdc), &Parms);
	CurrentTarget = Parms.CurrentTarget;
}

extern FName g_026e33ac;
	/* BumpLevel */
struct ARHarpoonProjectile_ : public ARHarpoonProjectile
{
	void eventBumpLevel(FVector HitLocation, FVector HitNormal);
};

// @baa 0x01638c20
/* RHarpoonProjectile.BumpLevel script event: the generated glue, out of line here. */
void ARHarpoonProjectile_::eventBumpLevel(FVector HitLocation, FVector HitNormal)
{
	struct RHarpoonProjectile_eventBumpLevel_Parms
	{
		FVector HitLocation;
		FVector HitNormal;
	} Parms;
	Parms.HitLocation = HitLocation;
	Parms.HitNormal = HitNormal;
	ProcessEvent(FindFunctionChecked(g_026e33ac), &Parms);
}

/* ARSpecialMoveInstance_HarpoonYank::UpdateYankees (0x1648e20) isn't declared in the kit. */

// @baa 0x016fb680
void ARSpecialMoveInstance_HarpoonYank::execUpdateYankees(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(DeltaTime);
    P_GET_FLOAT(PullForce);
    P_GET_FLOAT(PelvisCheatForce);
    P_FINISH;
    this->UpdateYankees(DeltaTime, PullForce, PelvisCheatForce);
}
