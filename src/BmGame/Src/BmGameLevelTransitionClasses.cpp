// BmGameLevelTransitionClasses.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026e3574;
	/* RecordRoomMetrics */
struct ARGameRI_ : public ARGameRI
{
	void eventRecordRoomMetrics(FName GoingToLevel);
};

// @baa 0x0154b040
/* RGameRI.RecordRoomMetrics script event: the generated glue, out of line here. */
void ARGameRI_::eventRecordRoomMetrics(FName GoingToLevel)
{
	struct RGameRI_eventRecordRoomMetrics_Parms
	{
		FName GoingToLevel;
	} Parms;
	Parms.GoingToLevel = GoingToLevel;
	ProcessEvent(FindFunctionChecked(g_026e3574), &Parms);
}
