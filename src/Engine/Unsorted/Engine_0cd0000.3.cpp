// Engine_0cd0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00cd1300
/* SetVectorCurveParameterValue(name ParameterName, InterpCurveVector Value) */
void UMaterialInstanceTimeVarying::execSetVectorCurveParameterValue(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(ParameterName);
	/* This build's P_GET_STRUCT zeroes the temporary (the kit's macro doesn't). */
	FInterpCurveVector Value;
	appMemzero(&Value, sizeof(FInterpCurveVector));
	Stack.Step(Stack.Object, &Value);
	P_FINISH;
	SetVectorCurveParameterValue(ParameterName, Value);
}
