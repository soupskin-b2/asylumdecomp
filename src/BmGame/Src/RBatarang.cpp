// RBatarang.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026e372c;
	/* CheckOverrideTarget */
struct ARBatarang_ : public ARBatarang
{
	UBOOL eventCheckOverrideTarget(class AActor* BatarangTarget, FVector& BatarangTargetPosition);
};

// @baa 0x01638a00
/* RBatarang.CheckOverrideTarget script event: the generated glue, out of line here. */
UBOOL ARBatarang_::eventCheckOverrideTarget(class AActor* BatarangTarget, FVector& BatarangTargetPosition)
{
	struct RBatarang_eventCheckOverrideTarget_Parms
	{
		class AActor* BatarangTarget;
		FVector BatarangTargetPosition;
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	Parms.BatarangTarget = BatarangTarget;
	Parms.BatarangTargetPosition = BatarangTargetPosition;
	ProcessEvent(FindFunctionChecked(g_026e372c), &Parms);
	BatarangTargetPosition = Parms.BatarangTargetPosition;
	return Parms.ReturnValue;
}
