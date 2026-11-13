// Engine_0da0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026c45e8;
	/* ENGINE_SubscriberDetached */
/* Kit gap: the generated glue for UIDataStore's script event SubscriberDetached (EngineClasses.h) isn't declared; this build keeps it out of line. */
struct UUIDataStore_ : public UUIDataStore
{
	void eventSubscriberDetached(const FScriptInterface& Subscriber);
};

// @baa 0x00dac770
void UUIDataStore_::eventSubscriberDetached(const FScriptInterface& Subscriber)
{
	struct UIDataStore_eventSubscriberDetached_Parms
	{
		FScriptInterface Subscriber;
	} Parms;
	Parms.Subscriber = Subscriber;
	ProcessEvent(FindFunctionChecked(g_026c45e8), &Parms);
}
