// Engine_0cf0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026c5224;
	/* ENGINE_SetFaceFXRegister */
struct AActor_ : public AActor
{
	void eventSetFaceFXRegister(const FString& RegisterName, FLOAT Value, BYTE RegOp);
};

// @baa 0x00cf8b60
/* The script event's generated glue (EngineClasses.h), out of line here. */
void AActor_::eventSetFaceFXRegister(const FString& RegisterName, FLOAT Value, BYTE RegOp)
{
	struct Actor_eventSetFaceFXRegister_Parms
	{
		FString RegisterName;
		FLOAT Value;
		BYTE RegOp;
	} Parms;
	Parms.RegisterName = RegisterName;
	Parms.Value = Value;
	Parms.RegOp = RegOp;
	ProcessEvent(FindFunctionChecked(g_026c5224), &Parms);
}
