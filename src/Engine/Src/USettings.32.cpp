// USettings.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"

// @baa 0x00d76620
/* Builds the URL options string from the settings: data bindings, then contexts, then properties. */
void USettings::BuildURL(FString& URL)
{
	URL.Empty();
	AppendDataBindingsToURL(URL);
	AppendContextsToURL(URL);
	AppendPropertiesToURL(URL);
}
