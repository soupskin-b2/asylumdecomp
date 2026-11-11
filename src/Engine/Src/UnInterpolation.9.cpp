// UnInterpolation.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

struct USeqAct_Interp_ : public USeqAct_Interp
{
	void Stop();
	void execStop(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c98ae0
void USeqAct_Interp_::execStop( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	Stop();
}
