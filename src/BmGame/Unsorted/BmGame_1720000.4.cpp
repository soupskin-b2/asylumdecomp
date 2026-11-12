// BmGame_1720000.cpp: 1 function
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
