// RAnimNode_Cape.cpp: 5 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x016ec050
void URAnimNode_Cape::execPauseAnim( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_1a0();
}

// @baa 0x016ec090
void URAnimNode_Cape::execResumeAnim( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_1a4();
}

struct URAnimNode_Cape_ : public URAnimNode_Cape
{
	UBOOL GetHasCurrentAnimEnded();
	void execGetHasCurrentAnimEnded(FFrame& Stack, RESULT_DECL);
};

// @baa 0x016ec0d0
void URAnimNode_Cape_::execGetHasCurrentAnimEnded( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = GetHasCurrentAnimEnded();
}

struct URAnimNode_Cape__016ec110 : public URAnimNode_Cape
{
	INT GetNumBonesInCape();
	void execGetNumBonesInCape(FFrame& Stack, RESULT_DECL);
};

// @baa 0x016ec110
void URAnimNode_Cape__016ec110::execGetNumBonesInCape( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(INT*)Result = GetNumBonesInCape();
}

struct URAnimNode_Cape__016ec150 : public URAnimNode_Cape
{
	UAnimNode* sub_01579fb0();
};

// @baa 0x016ec150
void URAnimNode_Cape::execGetCurrentCapeAnimNode(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UAnimNode**)Result = ((URAnimNode_Cape__016ec150*)this)->sub_01579fb0();
}
