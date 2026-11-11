// Core_0590000.cpp: 6 functions
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
