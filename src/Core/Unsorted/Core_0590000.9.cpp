// Core_0590000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

/* Kit gaps: UObject's bytecode handlers (UnScript.cpp) aren't declared, nor the globals GProperty and GPropObject
 * (UnScript.cpp) or RUC_ArrayLengthSet (Script.h has only RUC_SkippedOptionalParm). */
extern UProperty* g_026667d0;
	/* GProperty */
extern UObject* g_026667ec;
	/* GPropObject */
enum { RUC_ArrayLengthSet = 0x01 };
struct UObject_ : public UObject
{
	void execDynArrayLength(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00590150
void UObject_::execDynArrayLength(FFrame& Stack, RESULT_DECL)
{
	g_026667d0 = NULL;
	Stack.Step(this, NULL);
	g_026667ec = this;

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
