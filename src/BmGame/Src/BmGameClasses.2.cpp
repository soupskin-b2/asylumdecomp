// BmGameClasses.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026e2bb0;
	/* HitPontoon */
struct ARGatherRootPointBase_ : public ARGatherRootPointBase
{
	void eventHitPontoon(class AActor* P, FVector ContactPos);
};

// @baa 0x0154aec0
/* RGatherRootPointBase.HitPontoon script event: the generated glue, out of line here. */
void ARGatherRootPointBase_::eventHitPontoon(class AActor* P, FVector ContactPos)
{
	struct RGatherRootPointBase_eventHitPontoon_Parms
	{
		class AActor* P;
		FVector ContactPos;
	} Parms;
	Parms.P = P;
	Parms.ContactPos = ContactPos;
	ProcessEvent(FindFunctionChecked(g_026e2bb0), &Parms);
}

extern FName g_026e3368;
	/* CauseElectricDamageToPawn */
struct ARElectrifiedFloorPanel_ : public ARElectrifiedFloorPanel
{
	void eventCauseElectricDamageToPawn(class ARPawnCharacter* CPawn);
};

// @baa 0x0154b330
/* RElectrifiedFloorPanel.CauseElectricDamageToPawn script event: the generated glue, out of line here. */
void ARElectrifiedFloorPanel_::eventCauseElectricDamageToPawn(class ARPawnCharacter* CPawn)
{
	struct RElectrifiedFloorPanel_eventCauseElectricDamageToPawn_Parms
	{
		class ARPawnCharacter* CPawn;
	} Parms;
	Parms.CPawn = CPawn;
	ProcessEvent(FindFunctionChecked(g_026e3368), &Parms);
}
