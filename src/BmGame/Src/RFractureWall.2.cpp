// RFractureWall.cpp: 7 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026e300c;
	/* ExplodeWallSFX */
struct ARFractureWallBase_ : public ARFractureWallBase
{
	void eventExplodeWallSFX(FVector ExplosionCentre, INT NumPiecesRemoved);
};

// @baa 0x016cef60
/* RFractureWallBase.ExplodeWallSFX script event: the generated glue, out of line here. */
void ARFractureWallBase_::eventExplodeWallSFX(FVector ExplosionCentre, INT NumPiecesRemoved)
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
struct ARFractureWallBase__016cefc0 : public ARFractureWallBase
{
	void eventDoFractureWallExplodeAlert(FVector ExplosionCentre, FVector WallNormal);
};

// @baa 0x016cefc0
/* RFractureWallBase.DoFractureWallExplodeAlert script event: the generated glue, out of line here. */
void ARFractureWallBase__016cefc0::eventDoFractureWallExplodeAlert(FVector ExplosionCentre, FVector WallNormal)
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
struct ARFractureWallBase__016cf030 : public ARFractureWallBase
{
	UBOOL eventLoadFragmentRemovedState(INT FragmentIndex);
};

// @baa 0x016cf030
/* RFractureWallBase.LoadFragmentRemovedState script event: the generated glue, out of line here. */
UBOOL ARFractureWallBase__016cf030::eventLoadFragmentRemovedState(INT FragmentIndex)
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
struct ARFractureWallBase__016cf080 : public ARFractureWallBase
{
	void eventSaveFragmentRemovedState(INT FragmentIndex, UBOOL IsRemoved);
};

// @baa 0x016cf080
/* RFractureWallBase.SaveFragmentRemovedState script event: the generated glue, out of line here. */
void ARFractureWallBase__016cf080::eventSaveFragmentRemovedState(INT FragmentIndex, UBOOL IsRemoved)
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
struct ARFractureWallBase__016cf0d0 : public ARFractureWallBase
{
	void eventFallOverOnWall(class ARPawnCharacter* PawnIter);
};

// @baa 0x016cf0d0
/* RFractureWallBase.FallOverOnWall script event: the generated glue, out of line here. */
void ARFractureWallBase__016cf0d0::eventFallOverOnWall(class ARPawnCharacter* PawnIter)
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
struct ARFractureWallBase__016e1070 : public ARFractureWallBase
{
	UBOOL eventAreGunThugsAround();
};

// @baa 0x016e1070
/* RFractureWallBase.AreGunThugsAround script event: the generated glue, out of line here. */
UBOOL ARFractureWallBase__016e1070::eventAreGunThugsAround()
{
	struct RFractureWallBase_eventAreGunThugsAround_Parms
	{
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	ProcessEvent(FindFunctionChecked(g_026e2c5c), &Parms);
	return Parms.ReturnValue;
}

/* Kit gaps: the native's exec and UpdateWallState (016d8e90) aren't declared (name from the exe's native table). */
struct ARFractureWallBase__01706ac0 : public ARFractureWallBase
{
	void UpdateWallState();
	void execUpdateWallState(FFrame& Stack, RESULT_DECL);
};

// @baa 0x01706ac0
void ARFractureWallBase__01706ac0::execUpdateWallState(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	UpdateWallState();
}
