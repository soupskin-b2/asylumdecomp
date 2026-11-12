// Engine_0c80000.cpp: 6 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"
#include "ue3/Native.h"

/* Kit gap: AActor's timer queries (UnActor.cpp) aren't declared. NAME_Timer isn't in the kit's EName list. */
struct AActor_ : public AActor
{
	void ClearTimer(FName TimerFuncName, UObject* inObj);	/* 0x008b7da0 */
};

// @baa 0x00c82860
void AActor::execClearTimer(FFrame& Stack, RESULT_DECL)
{
	/* P_GET_NAME_OPTX(TimerFuncName, NAME_Timer), with the default built in place */
	FNameText TimerFuncName(TEXT("Timer"));
	GRuntimeUCFlags &= ~RUC_SkippedOptionalParm;
	Stack.Step(Stack.Object, &TimerFuncName);
	P_GET_OBJECT_OPTX(UObject, inObj, NULL);
	P_FINISH;
	((AActor_*)this)->ClearTimer(TimerFuncName, inObj);
}

/* Kit gap: AActor's timer queries (UnActor.cpp) aren't declared. NAME_Timer isn't in the kit's EName list. */
struct AActor__00c82a00 : public AActor
{
	UBOOL IsTimerActive(FName TimerFuncName, UObject* inObj);	/* 0x008b7ff0 */
};

// @baa 0x00c82a00
void AActor::execIsTimerActive(FFrame& Stack, RESULT_DECL)
{
	/* P_GET_NAME_OPTX(TimerFuncName, NAME_Timer), with the default built in place */
	FNameText TimerFuncName(TEXT("Timer"));
	GRuntimeUCFlags &= ~RUC_SkippedOptionalParm;
	Stack.Step(Stack.Object, &TimerFuncName);
	P_GET_OBJECT_OPTX(UObject, inObj, NULL);
	P_FINISH;
	*(UBOOL*)Result = ((AActor__00c82a00*)this)->IsTimerActive(TimerFuncName, inObj);
}

/* Kit gap: AActor's timer queries (UnActor.cpp) aren't declared. NAME_Timer isn't in the kit's EName list. */
struct AActor__00c82ac0 : public AActor
{
	FLOAT GetTimerCount(FName TimerFuncName, UObject* inObj);	/* 0x008b8130 */
};

// @baa 0x00c82ac0
void AActor::execGetTimerCount(FFrame& Stack, RESULT_DECL)
{
	/* P_GET_NAME_OPTX(TimerFuncName, NAME_Timer), with the default built in place */
	FNameText TimerFuncName(TEXT("Timer"));
	GRuntimeUCFlags &= ~RUC_SkippedOptionalParm;
	Stack.Step(Stack.Object, &TimerFuncName);
	P_GET_OBJECT_OPTX(UObject, inObj, NULL);
	P_FINISH;
	*(FLOAT*)Result = ((AActor__00c82ac0*)this)->GetTimerCount(TimerFuncName, inObj);
}

/* Kit gap: AActor's timer queries (UnActor.cpp) aren't declared. NAME_Timer isn't in the kit's EName list. */
struct AActor__00c82b80 : public AActor
{
	FLOAT GetTimerRate(FName TimerFuncName, UObject* inObj);	/* 0x008b8270 */
};

// @baa 0x00c82b80
void AActor::execGetTimerRate(FFrame& Stack, RESULT_DECL)
{
	/* P_GET_NAME_OPTX(TimerFuncName, NAME_Timer), with the default built in place */
	FNameText TimerFuncName(TEXT("Timer"));
	GRuntimeUCFlags &= ~RUC_SkippedOptionalParm;
	Stack.Step(Stack.Object, &TimerFuncName);
	P_GET_OBJECT_OPTX(UObject, inObj, NULL);
	P_FINISH;
	*(FLOAT*)Result = ((AActor__00c82b80*)this)->GetTimerRate(TimerFuncName, inObj);
}

/* Kit gaps: PauseTimer (008b7ec0) isn't declared (names from the exe's native table). NAME_Timer isn't in the kit's EName list. */
struct AActor__00c82910 : public AActor
{
	void PauseTimer(UBOOL bPause, FName inTimerFunc, class UObject* inObj);	/* 0x008b7ec0 */
};

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
	((AActor__00c82910*)this)->PauseTimer(bPause, inTimerFunc, inObj);
}

/* Kit gaps: SetTimer (008b7990) isn't declared (names from the exe's native table). NAME_Timer isn't in the kit's EName list. */
struct AActor__00c82740 : public AActor
{
	void SetTimer(FLOAT InRate, UBOOL inbLoop, FName inTimerFunc, class UObject* inObj);	/* 0x008b7990 */
};

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
	((AActor__00c82740*)this)->SetTimer(InRate, inbLoop, inTimerFunc, inObj);
}
