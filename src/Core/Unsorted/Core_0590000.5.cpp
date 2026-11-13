// Core_0590000.cpp: 22 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"
#include "ue3/AppMath.h"

// @baa 0x00592fe0
void UObject::execMultiplyMultiply_FloatFloat(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(A);
    P_GET_FLOAT(B);
    P_FINISH;

    *(FLOAT*)Result = appPow(A, B);
}

// @baa 0x00593b10
void UObject::execAbs(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(A);
    P_FINISH;
    *(FLOAT*)Result = appAbs(A);
}

// @baa 0x00593b70
void UObject::execSin(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(A);
    P_FINISH;
    *(FLOAT*)Result = appSin(A);
}

// @baa 0x00593c70
void UObject::execCos(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(A);
    P_FINISH;
    *(FLOAT*)Result = appCos(A);
}

// @baa 0x00593d70
void UObject::execTan(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(A);
    P_FINISH;
    *(FLOAT*)Result = appTan(A);
}

// @baa 0x00593dd0
void UObject::execAtan(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(A);
    P_FINISH;
    *(FLOAT*)Result = appAtan(A);
}

// @baa 0x00592cb0
// Rand(int Max): a random integer in [0, Max)
void UObject::execRand(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(A);
	P_FINISH;
	INT Max = A;
	*(INT*)Result = Max > 0 ? appTrunc(appRand() * (FLOAT)Max / 32768.f) : 0;
}

// @baa 0x00597080
void UObject::execMultiply_RotatorFloat(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FRotator, A);
	P_GET_FLOAT(B);
	P_FINISH;

	const FLOAT Scale = B;
	*(FRotator*)Result = FRotator(appTrunc(A.Pitch * Scale), appTrunc(A.Yaw * Scale), appTrunc(A.Roll * Scale));
}

// @baa 0x005942f0
void UObject::execFMin(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(A);
	P_GET_FLOAT(B);
	P_FINISH;
	*(FLOAT*)Result = Min(A, B);
}

// @baa 0x00594390
void UObject::execFMax(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(A);
	P_GET_FLOAT(B);
	P_FINISH;
	*(FLOAT*)Result = Max(A, B);
}

// @baa 0x00594430
void UObject::execFClamp(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(V);
	P_GET_FLOAT(A);
	P_GET_FLOAT(B);
	P_FINISH;
	*(FLOAT*)Result = Clamp(V, A, B);
}

// @baa 0x00597150
void UObject::execMultiply_FloatRotator(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(A);
	P_GET_STRUCT(FRotator, B);
	P_FINISH;
	*(FRotator*)Result = (B) * A;
}

// @baa 0x005918a0
void UObject::execMultiplyEqual_ByteFloat(FFrame& Stack, RESULT_DECL)
{
	P_GET_BYTE_REF(A);
	P_GET_FLOAT(Scale);
	P_FINISH;

	A = (BYTE)appTrunc(A * Scale);
	*(BYTE*)Result = A;
}

// @baa 0x005927e0
void UObject::execMultiplyEqual_IntFloat(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT_REF(A);
	P_GET_FLOAT(Scale);
	P_FINISH;

	A = (INT)appTrunc(A * Scale);
	*(INT*)Result = A;
}

// @baa 0x005928a0
void UObject::execDivideEqual_IntFloat(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT_REF(A);
	P_GET_FLOAT(B);
	P_FINISH;

	const FLOAT Div = (B != 0.0f) ? (FLOAT)A / B : 0.0f;
	A = (INT)appTrunc(Div);
	*(INT*)Result = A;
}

int sub_00630ea0(FFrame&, INT, const TCHAR*);
// @baa 0x00597220
void UObject::execDivide_RotatorFloat(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FRotator, A);
	P_GET_FLOAT(B);
	P_FINISH;

	if (B == 0.0f)
		sub_00630ea0(Stack, 0x301, L"Divide by zero");

	const FLOAT Scale = 1.0f / B;
	*(FRotator*)Result = FRotator((INT)appTrunc((FLOAT)A.Pitch * Scale), (INT)appTrunc((FLOAT)A.Yaw * Scale), (INT)appTrunc((FLOAT)A.Roll * Scale));
}

// @baa 0x00595f90
void UObject::execDivideEqual_VectorFloat(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT_REF(FVector, A);
	P_GET_FLOAT(B);
	P_FINISH;

	if (B == 0.0f)
		sub_00630ea0(Stack, 0x301, L"Divide by zero");

	const FLOAT Scale = 1.0f / B;
	A.X = A.X * Scale;
	A.Y = A.Y * Scale;
	A.Z = A.Z * Scale;

	*(FVector*)Result = A;
}

// @baa 0x00597320
void UObject::execMultiplyEqual_RotatorFloat(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT_REF(FRotator, A);
	P_GET_FLOAT(Scale);
	P_FINISH;

	const FLOAT S = Scale;
	A.Pitch = (INT)appTrunc((FLOAT)A.Pitch * S);
	A.Yaw = (INT)appTrunc((FLOAT)A.Yaw * S);
	A.Roll = (INT)appTrunc((FLOAT)A.Roll * S);

	*(FRotator*)Result = A;
}

// @baa 0x00597410
void UObject::execDivideEqual_RotatorFloat(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT_REF(FRotator, A);
	P_GET_FLOAT(B);
	P_FINISH;

	if (B == 0.0f)
		sub_00630ea0(Stack, 0x301, L"Divide by zero");

	const FLOAT Scale = 1.0f / B;
	A.Pitch = (INT)appTrunc((FLOAT)A.Pitch * Scale);
	A.Yaw = (INT)appTrunc((FLOAT)A.Yaw * Scale);
	A.Roll = (INT)appTrunc((FLOAT)A.Roll * Scale);

	*(FRotator*)Result = A;
}

// @baa 0x005931c0
void UObject::execPercent_FloatFloat(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(A);
	P_GET_FLOAT(B);
	P_FINISH;

	if (B == 0.0f)
		sub_00630ea0(Stack, 0x301, L"Modulo by zero");

	*(FLOAT*)Result = (B != 0.0f) ? (FLOAT)appFmod(A, B) : 0.0f;
}

// @baa 0x00596a80
/* RotRand(optional bool bRoll): a random rotator, with a random roll only when asked. */
void UObject::execRotRand(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL_OPTX(bRoll, 0);
	P_FINISH;

	FRotator RotR;
	RotR.Yaw = appTrunc(2.f * appRand());
	RotR.Pitch = appTrunc(2.f * appRand());
	if (bRoll)
	{
		RotR.Roll = appTrunc(2.f * appRand());
	}
	else
	{
		RotR.Roll = 0;
	}
	*(FRotator*)Result = RotR;
}

// @baa 0x00594150
void UObject::execRound(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(A);
    P_FINISH;
    *(INT*)Result = appRound(A);
}
