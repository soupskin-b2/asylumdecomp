// Core_0590000.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"
#include <math.h>

// @baa 0x00593780
void UObject::execComplementEqual_FloatFloat(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(A);
	P_GET_FLOAT(B);
	P_FINISH;
	*(UBOOL*)Result = fabs(A - B) < 0.0001;
}

// @baa 0x00593e30
void UObject::execAtan2(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(A);
	P_GET_FLOAT(B);
	P_FINISH;
	*(FLOAT*)Result = atan2(A, B);
}

int sub_00630ea0(FFrame&, INT, const TCHAR*);
// @baa 0x00593f90
void UObject::execSqrt(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(A);
	P_FINISH;

	FLOAT Value = 0.0f;

	if (A > 0.0f)
	{
		Value = (FLOAT)sqrt(A);
	}
	else if (A < 0.0f)
	{
		sub_00630ea0(Stack, 0x301, L"Attempt to take Sqrt() of negative number - returning 0.");
	}

	*(FLOAT*)Result = Value;
}
