// Core_1720000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Script.h"

/* the out-of-line TArray<UAnimSet*> instances */
template void TArray<UAnimSet*>::operator=(const TArray<UAnimSet*>& Other);

template TArray<UAnimSet*>::~TArray();


// @baa 0x01729dd0
/* native function array<AnimSet> GetAllAnimSets() */
void URAnimUtil::execGetAllAnimSets(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(TArray<UAnimSet*>*)Result = ((URAnimUtil*)this)->GetAllAnimSets();
}

/* the out-of-line TArray<UClass*> instances */
template void TArray<UClass*>::operator=(const TArray<UClass*>& Other);

template TArray<UClass*>::~TArray();


// @baa 0x01729e60
/* native function array<class> GetAllBmScriptSubclasses(class BaseClass) */
void URAnimUtil::execGetAllBmScriptSubclasses(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UClass, BaseClass);
	P_FINISH;
	*(TArray<UClass*>*)Result = ((URAnimUtil*)this)->GetAllBmScriptSubclasses(BaseClass);
}
