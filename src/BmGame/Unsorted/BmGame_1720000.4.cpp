// BmGame_1720000.cpp: 6 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

/* Kit gaps: FindBestVantagePoint (0164c940) isn't declared (names from the exe's native table). */

// @baa 0x0172ae60
void ARGrappleGun::execFindBestVantagePoint(FFrame& Stack, RESULT_DECL)
{
	P_GET_VECTOR(CheckLocation);
	P_GET_VECTOR(CheckDirection);
	/* This build's P_GET_STRUCT_REF zeroes the temporary after clearing GPropAddr (the kit's macro doesn't). */
	FAvailableVantagePoints VantagePointListT;
	GPropAddr = 0;
	appMemzero(&VantagePointListT, sizeof(FAvailableVantagePoints));
	Stack.Step(Stack.Object, &VantagePointListT);
	FAvailableVantagePoints& VantagePointList = GPropAddr ? *(FAvailableVantagePoints*)GPropAddr : VantagePointListT;
	P_GET_UBOOL(Zoomed);
	P_FINISH;
	*(FLOAT*)Result = this->FindBestVantagePoint(CheckLocation, CheckDirection, VantagePointList, Zoomed);
}

// @baa 0x01726d70
void ARCinematicActor::execInternalBeginAnimControl(FFrame& Stack, RESULT_DECL)
{
	P_GET_TARRAY(UAnimSet*, InAnimSets);
	P_FINISH;
	InternalBeginAnimControl(InAnimSets);
}

/* Kit gap: URAnimUtil::SortCharacterClasses (0x015b1620) isn't declared. */

// @baa 0x01726e20
void URAnimUtil::execSortCharacterClasses(FFrame& Stack, RESULT_DECL)
{
	P_GET_TARRAY_REF(UClass*, Array);
	P_FINISH;
	this->SortCharacterClasses(Array);
}

/* Kit gap: URAnimUtil::SortAnimSets (0x015aaf80) isn't declared. */

// @baa 0x01726ee0
void URAnimUtil::execSortAnimSets(FFrame& Stack, RESULT_DECL)
{
	P_GET_TARRAY_REF(UAnimSet*, Array);
	P_FINISH;
	this->SortAnimSets(Array);
}

// @baa 0x01722cd0
void ARPawnPlayerCombat::execGetNumberOfCounterHits(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UAnimSequence, StrikeAnimSequence);
	P_GET_TARRAY_REF(FLOAT, SlowMoHitTimes);
	P_FINISH;
	*(INT*)Result = GetNumberOfCounterHits(StrikeAnimSequence, SlowMoHitTimes);
}

// @baa 0x01722b90
/* HelpLinesMatch(out HelpLine A, out HelpLine B) */
void URHUDPrompt::execHelpLinesMatch(FFrame& Stack, RESULT_DECL)
{
	/* This build's P_GET_STRUCT_REF zeroes the temporary after clearing GPropAddr (the kit's macro doesn't). */
	FHelpLine AT;
	GPropAddr = 0;
	appMemzero(&AT, sizeof(FHelpLine));
	Stack.Step(Stack.Object, &AT);
	FHelpLine& A = GPropAddr ? *(FHelpLine*)GPropAddr : AT;
	FHelpLine BT;
	GPropAddr = 0;
	appMemzero(&BT, sizeof(FHelpLine));
	Stack.Step(Stack.Object, &BT);
	FHelpLine& B = GPropAddr ? *(FHelpLine*)GPropAddr : BT;
	P_FINISH;
	*(UBOOL*)Result = HelpLinesMatch(A, B);
}
