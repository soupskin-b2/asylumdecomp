// RFractureWall.cpp: 7 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026e300c;
	/* ExplodeWallSFX */

// @baa 0x016cef60
/* RFractureWallBase.ExplodeWallSFX script event: the generated glue, out of line here. */
void ARFractureWallBase::eventExplodeWallSFX(FVector ExplosionCentre, INT NumPiecesRemoved)
{
	struct RFractureWallBase_eventExplodeWallSFX_Parms
	{
		FVector ExplosionCentre;
		INT NumPiecesRemoved;
	} Parms;
	Parms.ExplosionCentre = ExplosionCentre;
	Parms.NumPiecesRemoved = NumPiecesRemoved;
	ProcessEvent(FindFunctionChecked(g_026e300c), &Parms);
}

extern FName g_026e2b28;
	/* DoFractureWallExplodeAlert */

// @baa 0x016cefc0
/* RFractureWallBase.DoFractureWallExplodeAlert script event: the generated glue, out of line here. */
void ARFractureWallBase::eventDoFractureWallExplodeAlert(FVector ExplosionCentre, FVector WallNormal)
{
	struct RFractureWallBase_eventDoFractureWallExplodeAlert_Parms
	{
		FVector ExplosionCentre;
		FVector WallNormal;
	} Parms;
	Parms.ExplosionCentre = ExplosionCentre;
	Parms.WallNormal = WallNormal;
	ProcessEvent(FindFunctionChecked(g_026e2b28), &Parms);
}

extern FName g_026e34b0;
	/* LoadFragmentRemovedState */

// @baa 0x016cf030
/* RFractureWallBase.LoadFragmentRemovedState script event: the generated glue, out of line here. */
UBOOL ARFractureWallBase::eventLoadFragmentRemovedState(INT FragmentIndex)
{
	struct RFractureWallBase_eventLoadFragmentRemovedState_Parms
	{
		INT FragmentIndex;
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	Parms.FragmentIndex = FragmentIndex;
	ProcessEvent(FindFunctionChecked(g_026e34b0), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e37d8;
	/* SaveFragmentRemovedState */

// @baa 0x016cf080
/* RFractureWallBase.SaveFragmentRemovedState script event: the generated glue, out of line here. */
void ARFractureWallBase::eventSaveFragmentRemovedState(INT FragmentIndex, UBOOL IsRemoved)
{
	struct RFractureWallBase_eventSaveFragmentRemovedState_Parms
	{
		INT FragmentIndex;
		UBOOL IsRemoved;
	} Parms;
	Parms.FragmentIndex = FragmentIndex;
	Parms.IsRemoved = IsRemoved ? TRUE : FALSE;
	ProcessEvent(FindFunctionChecked(g_026e37d8), &Parms);
}

extern FName g_026e2b00;
	/* FallOverOnWall */

// @baa 0x016cf0d0
/* RFractureWallBase.FallOverOnWall script event: the generated glue, out of line here. */
void ARFractureWallBase::eventFallOverOnWall(class ARPawnCharacter* PawnIter)
{
	struct RFractureWallBase_eventFallOverOnWall_Parms
	{
		class ARPawnCharacter* PawnIter;
	} Parms;
	Parms.PawnIter = PawnIter;
	ProcessEvent(FindFunctionChecked(g_026e2b00), &Parms);
}

extern FName g_026e2c5c;
	/* AreGunThugsAround */

// @baa 0x016e1070
/* RFractureWallBase.AreGunThugsAround script event: the generated glue, out of line here. */
UBOOL ARFractureWallBase::eventAreGunThugsAround()
{
	struct RFractureWallBase_eventAreGunThugsAround_Parms
	{
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	ProcessEvent(FindFunctionChecked(g_026e2c5c), &Parms);
	return Parms.ReturnValue;
}


// @baa 0x01706ac0
void ARFractureWallBase::execUpdateWallState(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	UpdateWallState();
}
