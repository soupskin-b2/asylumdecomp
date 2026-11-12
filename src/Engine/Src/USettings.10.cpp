// USettings.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Script.h"

/* Kit gap: USettings' blob helpers (USettings.h) aren't declared. */
struct USettings_ : public USettings
{
	void SetSettingsDataBlob(FSettingsData& Data, TArray<BYTE>& Blob); /* 0x00d742e0 */
	void GetSettingsDataBlob(FSettingsData& Data, TArray<BYTE>& OutBlob); /* 0x00d799d0 */
};

// @baa 0x00cbf990
void USettings::execSetSettingsDataBlob(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT_REF(FSettingsData, Data);
	P_GET_TARRAY_REF(BYTE, Blob);
	P_FINISH;
	((USettings_*)this)->SetSettingsDataBlob(Data, Blob);
}

// @baa 0x00cbfaa0
void USettings::execGetSettingsDataBlob(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT_REF(FSettingsData, Data);
	P_GET_TARRAY_REF(BYTE, OutBlob);
	P_FINISH;
	((USettings_*)this)->GetSettingsDataBlob(Data, OutBlob);
}
