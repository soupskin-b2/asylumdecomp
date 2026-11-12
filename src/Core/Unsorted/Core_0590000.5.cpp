// Core_0590000.cpp: 11 functions
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

struct FRotatorCtor : public FRotator
{
	FRotatorCtor(INT InPitch, INT InYaw, INT InRoll)
	{
		Pitch = InPitch;
		Yaw   = InYaw;
		Roll  = InRoll;
	}
};

// @baa 0x00597080
void UObject::execMultiply_RotatorFloat(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FRotator, A);
	P_GET_FLOAT(B);
	P_FINISH;

	const FLOAT Scale = B;
	*(FRotator*)Result = FRotatorCtor(appTrunc(A.Pitch * Scale), appTrunc(A.Yaw * Scale), appTrunc(A.Roll * Scale));
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
