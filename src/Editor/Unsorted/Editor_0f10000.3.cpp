// Editor_0f10000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026c469c;
	/* IsPastingIntoUISequenceAllowed */
struct USequenceObject_ : public USequenceObject
{
	UBOOL eventIsPastingIntoUISequenceAllowed();
};

// @baa 0x00f1a5f0
/* SequenceObject.IsPastingIntoUISequenceAllowed script event: the generated glue, out of line here. */
UBOOL USequenceObject_::eventIsPastingIntoUISequenceAllowed()
{
	struct SequenceObject_eventIsPastingIntoUISequenceAllowed_Parms
	{
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	ProcessEvent(FindFunctionChecked(g_026c469c), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026c5234;
	/* IsPastingIntoLevelSequenceAllowed */
struct USequenceObject__00f1a630 : public USequenceObject
{
	UBOOL eventIsPastingIntoLevelSequenceAllowed();
};

// @baa 0x00f1a630
/* SequenceObject.IsPastingIntoLevelSequenceAllowed script event: the generated glue, out of line here. */
UBOOL USequenceObject__00f1a630::eventIsPastingIntoLevelSequenceAllowed()
{
	struct SequenceObject_eventIsPastingIntoLevelSequenceAllowed_Parms
	{
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	ProcessEvent(FindFunctionChecked(g_026c5234), &Parms);
	return Parms.ReturnValue;
}
