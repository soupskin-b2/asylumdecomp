// UnUIStrings.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026c534c;
	/* ENGINE_SubscriberAttached */
/* Kit gap: the generated glue for UIDataStore's script event SubscriberAttached (EngineClasses.h) isn't declared; this build keeps it out of line. */
struct UUIDataStore_ : public UUIDataStore
{
	void eventSubscriberAttached(const FScriptInterface& Subscriber);
};

// @baa 0x00dcb670
void UUIDataStore_::eventSubscriberAttached(const FScriptInterface& Subscriber)
{
	struct UIDataStore_eventSubscriberAttached_Parms
	{
		FScriptInterface Subscriber;
	} Parms;
	Parms.Subscriber = Subscriber;
	ProcessEvent(FindFunctionChecked(g_026c534c), &Parms);
}
