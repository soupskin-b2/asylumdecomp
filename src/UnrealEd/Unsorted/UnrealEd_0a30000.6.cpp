// UnrealEd_0a30000.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026c526c;
// A parameterless UnrealScript event that returns a FLOAT: the generated glue, out of line here.
struct UObject_ : public UObject
{
    FLOAT eventScriptCall();
};

// @baa 0x00a34120
FLOAT UObject_::eventScriptCall()
{
    struct ScriptCall_Parms
    {
        FLOAT ReturnValue;
    } Parms;
    Parms.ReturnValue = 0.f;
    ProcessEvent(FindFunctionChecked(g_026c526c), &Parms);
    return Parms.ReturnValue;
}

extern FName g_026c3df4;
	/* ENGINE_FillByCylinder */
/* Kit gap: the generated glue for ForceFieldShape's script event FillByCylinder (EngineClasses.h) isn't declared;
 * this build keeps it out of line (the tornado force fields call it). */
struct UForceFieldShape_ : public UForceFieldShape
{
	void eventFillByCylinder(FLOAT BottomRadius, FLOAT TopRadius, FLOAT Height, FLOAT HeightOffset);
};

// @baa 0x00a33cd0
void UForceFieldShape_::eventFillByCylinder(FLOAT BottomRadius, FLOAT TopRadius, FLOAT Height, FLOAT HeightOffset)
{
	struct ForceFieldShape_eventFillByCylinder_Parms
	{
		FLOAT BottomRadius;
		FLOAT TopRadius;
		FLOAT Height;
		FLOAT HeightOffset;
	} Parms;
	Parms.BottomRadius = BottomRadius;
	Parms.TopRadius = TopRadius;
	Parms.Height = Height;
	Parms.HeightOffset = HeightOffset;
	ProcessEvent(FindFunctionChecked(g_026c3df4), &Parms);
}

extern FName g_026c4600;
	/* ENGINE_FillByBox */
/* Kit gap: the generated glue for ForceFieldShape's script event FillByBox (EngineClasses.h) isn't declared; this build keeps it out of line. */
struct UForceFieldShape__00a33d40 : public UForceFieldShape
{
	void eventFillByBox(FVector Dimension);
};

// @baa 0x00a33d40
void UForceFieldShape__00a33d40::eventFillByBox(FVector Dimension)
{
	struct ForceFieldShape_eventFillByBox_Parms
	{
		FVector Dimension;
	} Parms;
	Parms.Dimension = Dimension;
	ProcessEvent(FindFunctionChecked(g_026c4600), &Parms);
}
