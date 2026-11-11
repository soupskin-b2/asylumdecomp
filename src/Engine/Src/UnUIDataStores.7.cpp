// UnUIDataStores.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

struct UUIDynamicDataProvider_ : public UUIDynamicDataProvider
{
	UBOOL UnbindProviderInstance();
	void execUnbindProviderInstance(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca2cb0
void UUIDynamicDataProvider_::execUnbindProviderInstance( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = UnbindProviderInstance();
}

struct USessionSettingsProvider_ : public USessionSettingsProvider
{
	UBOOL UnbindProviderClient();
	void execUnbindProviderClient(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00ca2e50
void USessionSettingsProvider_::execUnbindProviderClient( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = UnbindProviderClient();
}
