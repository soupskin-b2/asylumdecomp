// UnInterpolation.cpp: 3 functions
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

struct USeqAct_Interp__00c98b10 : public USeqAct_Interp
{
	void sub_00d14240(APlayerController*);
};

// @baa 0x00c98b10
void USeqAct_Interp::execAddPlayerToDirectorTracks(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(APlayerController, PC);
	P_FINISH;
	((USeqAct_Interp__00c98b10*)this)->sub_00d14240(PC);
}

struct USeqAct_Interp__00c98a30 : public USeqAct_Interp
{
	void SetPosition(FLOAT NewPosition, UBOOL bJump);
	void execSetPosition(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c98a30
void USeqAct_Interp__00c98a30::execSetPosition(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(NewPosition);
	P_GET_UBOOL_OPTX(bJump, FALSE);
	P_FINISH;
	SetPosition(NewPosition, bJump);
}
