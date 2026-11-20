// Engine_0c80000.cpp: 6 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"
#include "ue3/Native.h"

// @baa 0x00c82860
void AActor::execClearTimer(FFrame& Stack, RESULT_DECL)
{
	/* P_GET_NAME_OPTX(TimerFuncName, NAME_Timer), with the default built in place */
	FNameText TimerFuncName(TEXT("Timer"));
	GRuntimeUCFlags &= ~RUC_SkippedOptionalParm;
	Stack.Step(Stack.Object, &TimerFuncName);
	P_GET_OBJECT_OPTX(UObject, inObj, NULL);
	P_FINISH;
	this->ClearTimer(TimerFuncName, inObj);
}

// @baa 0x00c82a00
void AActor::execIsTimerActive(FFrame& Stack, RESULT_DECL)
{
	/* P_GET_NAME_OPTX(TimerFuncName, NAME_Timer), with the default built in place */
	FNameText TimerFuncName(TEXT("Timer"));
	GRuntimeUCFlags &= ~RUC_SkippedOptionalParm;
	Stack.Step(Stack.Object, &TimerFuncName);
	P_GET_OBJECT_OPTX(UObject, inObj, NULL);
	P_FINISH;
	*(UBOOL*)Result = this->IsTimerActive(TimerFuncName, inObj);
}

// @baa 0x00c82ac0
void AActor::execGetTimerCount(FFrame& Stack, RESULT_DECL)
{
	/* P_GET_NAME_OPTX(TimerFuncName, NAME_Timer), with the default built in place */
	FNameText TimerFuncName(TEXT("Timer"));
	GRuntimeUCFlags &= ~RUC_SkippedOptionalParm;
	Stack.Step(Stack.Object, &TimerFuncName);
	P_GET_OBJECT_OPTX(UObject, inObj, NULL);
	P_FINISH;
	*(FLOAT*)Result = this->GetTimerCount(TimerFuncName, inObj);
}

// @baa 0x00c82b80
void AActor::execGetTimerRate(FFrame& Stack, RESULT_DECL)
{
	/* P_GET_NAME_OPTX(TimerFuncName, NAME_Timer), with the default built in place */
	FNameText TimerFuncName(TEXT("Timer"));
	GRuntimeUCFlags &= ~RUC_SkippedOptionalParm;
	Stack.Step(Stack.Object, &TimerFuncName);
	P_GET_OBJECT_OPTX(UObject, inObj, NULL);
	P_FINISH;
	*(FLOAT*)Result = this->GetTimerRate(TimerFuncName, inObj);
}

// @baa 0x00c82910
void AActor::execPauseTimer(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bPause);
	/* P_GET_NAME_OPTX(inTimerFunc, NAME_Timer), with the default built in place */
	FNameText inTimerFunc(TEXT("Timer"));
	GRuntimeUCFlags &= ~RUC_SkippedOptionalParm;
	Stack.Step(Stack.Object, &inTimerFunc);
	P_GET_OBJECT_OPTX(UObject, inObj, NULL);
	P_FINISH;
	this->PauseTimer(bPause, inTimerFunc, inObj);
}

// @baa 0x00c82740
void AActor::execSetTimer(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(InRate);
	P_GET_UBOOL_OPTX(inbLoop, FALSE);
	/* P_GET_NAME_OPTX(inTimerFunc, NAME_Timer), with the default built in place */
	FNameText inTimerFunc(TEXT("Timer"));
	GRuntimeUCFlags &= ~RUC_SkippedOptionalParm;
	Stack.Step(Stack.Object, &inTimerFunc);
	P_GET_OBJECT_OPTX(UObject, inObj, NULL);
	P_FINISH;
	this->SetTimer(InRate, inbLoop, inTimerFunc, inObj);
}
