// Core_1720000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Script.h"

/* the out-of-line TArray<UAnimSet*> instances */
template void TArray<UAnimSet*>::operator=(const TArray<UAnimSet*>& Other);

template TArray<UAnimSet*>::~TArray();

struct URAnimUtil_ : public URAnimUtil
{
	TArray<UAnimSet*> GetAllAnimSets(); /* 0x015b4510 */
};

// @baa 0x01729dd0
/* native function array<AnimSet> GetAllAnimSets() */
void URAnimUtil::execGetAllAnimSets(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(TArray<UAnimSet*>*)Result = ((URAnimUtil_*)this)->GetAllAnimSets();
}

/* the out-of-line TArray<UClass*> instances */
template void TArray<UClass*>::operator=(const TArray<UClass*>& Other);

template TArray<UClass*>::~TArray();

struct URAnimUtil__01729e60 : public URAnimUtil
{
	TArray<UClass*> GetAllBmScriptSubclasses(UClass* BaseClass); /* 0x015b4850 */
};

// @baa 0x01729e60
/* native function array<class> GetAllBmScriptSubclasses(class BaseClass) */
void URAnimUtil::execGetAllBmScriptSubclasses(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UClass, BaseClass);
	P_FINISH;
	*(TArray<UClass*>*)Result = ((URAnimUtil__01729e60*)this)->GetAllBmScriptSubclasses(BaseClass);
}
