// Core_1520000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

/* Kit gap: URFlagManager::SetFlagList (0x01548200) isn't declared. */
struct URFlagManager_ : public URFlagManager
{
	void SetFlagList(TArray<FString>& flagsList);
};

// @baa 0x0152c660
void URFlagManager::execSetFlagList(FFrame& Stack, RESULT_DECL)
{
	P_GET_TARRAY_REF(FString, flagsList);
	P_FINISH;
	((URFlagManager_*)this)->SetFlagList(flagsList);
}

/* Kit gap: URFlagManager::SetFlagListForChallengeMode (0x015483c0) isn't declared. */
struct URFlagManager__0152c720 : public URFlagManager
{
	void SetFlagListForChallengeMode(TArray<FString>& flagsList);
};

// @baa 0x0152c720
void URFlagManager::execSetFlagListForChallengeMode(FFrame& Stack, RESULT_DECL)
{
	P_GET_TARRAY_REF(FString, flagsList);
	P_FINISH;
	((URFlagManager__0152c720*)this)->SetFlagListForChallengeMode(flagsList);
}
