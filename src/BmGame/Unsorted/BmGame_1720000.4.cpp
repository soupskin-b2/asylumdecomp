// BmGame_1720000.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

/* Kit gaps: FindBestVantagePoint (0164c940) isn't declared (names from the exe's native table). */
struct ARGrappleGun_ : public ARGrappleGun
{
	FLOAT FindBestVantagePoint(FVector CheckLocation, FVector CheckDirection, FAvailableVantagePoints& VantagePointList, UBOOL Zoomed);	/* 0x0164c940 */
};

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
	*(FLOAT*)Result = ((ARGrappleGun_*)this)->FindBestVantagePoint(CheckLocation, CheckDirection, VantagePointList, Zoomed);
}

// @baa 0x01726d70
void ARCinematicActor::execInternalBeginAnimControl(FFrame& Stack, RESULT_DECL)
{
	P_GET_TARRAY(UAnimSet*, InAnimSets);
	P_FINISH;
	InternalBeginAnimControl(InAnimSets);
}

/* Kit gap: URAnimUtil::SortCharacterClasses (0x015b1620) isn't declared. */
struct URAnimUtil_ : public URAnimUtil
{
	void SortCharacterClasses(TArray<UClass*>& Array);
};

// @baa 0x01726e20
void URAnimUtil::execSortCharacterClasses(FFrame& Stack, RESULT_DECL)
{
	P_GET_TARRAY_REF(UClass*, Array);
	P_FINISH;
	((URAnimUtil_*)this)->SortCharacterClasses(Array);
}

/* Kit gap: URAnimUtil::SortAnimSets (0x015aaf80) isn't declared. */
struct URAnimUtil__01726ee0 : public URAnimUtil
{
	void SortAnimSets(TArray<UAnimSet*>& Array);
};

// @baa 0x01726ee0
void URAnimUtil::execSortAnimSets(FFrame& Stack, RESULT_DECL)
{
	P_GET_TARRAY_REF(UAnimSet*, Array);
	P_FINISH;
	((URAnimUtil__01726ee0*)this)->SortAnimSets(Array);
}
