// Core_0590000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x00590150
void UObject::execDynArrayLength(FFrame& Stack, RESULT_DECL)
{
	GProperty = NULL;
	Stack.Step(this, NULL);
	GPropObject = this;

	if (GPropAddr)
	{
		TArray<BYTE>* Array = (TArray<BYTE>*)GPropAddr;
		if (!Result)
		{
			GRuntimeUCFlags |= RUC_ArrayLengthSet;	// so that EX_Let knows that this is a length 'set'-ting
		}
		else
		{
			*(INT*)Result = Array->Num();
		}
	}
}
