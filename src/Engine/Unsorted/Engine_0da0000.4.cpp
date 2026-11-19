// Engine_0da0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026c45e8;

// @baa 0x00dac770
void UUIDataStore::eventSubscriberDetached(const FScriptInterface& Subscriber)
{
	struct UIDataStore_eventSubscriberDetached_Parms
	{
		FScriptInterface Subscriber;
	} Parms;
	Parms.Subscriber = Subscriber;
	ProcessEvent(FindFunctionChecked(g_026c45e8), &Parms);
}
