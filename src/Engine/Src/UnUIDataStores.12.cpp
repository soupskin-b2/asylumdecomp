// UnUIDataStores.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"

// @baa 0x00da51b0
/* Loads the session settings provider classes named in the ini and creates a provider for each. */
void UUIDataStore_SessionSettings::InitializeDataStore()
{
	for (INT ClassIndex = 0; ClassIndex < SessionSettingsProviderClassNames.Num(); ClassIndex++)
	{
		const FString& ClassName = (const FString&)SessionSettingsProviderClassNames(ClassIndex);
		UClass* ProviderClass = LoadClass<USessionSettingsProvider>(NULL, *ClassName, NULL, LOAD_None, NULL);
		if (ProviderClass != NULL)
		{
			SessionSettingsProviderClasses.AddUniqueItem(ProviderClass);
		}
	}

	for (INT ClassIndex = 0; ClassIndex < SessionSettingsProviderClasses.Num(); ClassIndex++)
	{
		UClass* ProviderClass = SessionSettingsProviderClasses(ClassIndex);
#line 5422 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIDataStores.cpp"
		check(ProviderClass);

		USessionSettingsProvider* Provider = ConstructObject<USessionSettingsProvider>((UClass*)ProviderClass, this);
		if (Provider != NULL)
		{
			SessionSettings.AddItem(Provider);
		}
	}
}

#line 84 "candidate.cpp"
