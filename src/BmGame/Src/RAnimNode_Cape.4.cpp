// RAnimNode_Cape.cpp: 8 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x016ec050
void URAnimNode_Cape::execPauseAnim( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	PauseAnim();
}

// @baa 0x016ec090
void URAnimNode_Cape::execResumeAnim( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	ResumeAnim();
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

// @baa 0x016ec150
void URAnimNode_Cape::execGetCurrentCapeAnimNode(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UAnimNode**)Result = ((URAnimNode_Cape*)this)->GetCurrentCapeAnimNode();
}

// @baa 0x016ec190
void URAnimNode_Cape::execGetStateAnimNode(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(AnimStateName);
	P_FINISH;
	*(void**)Result = this->GetStateAnimNode(AnimStateName);
}

// @baa 0x016ec210
void URAnimNode_Cape::execGetAnimTreeNodeBlendValue(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(getNodeName);
	P_FINISH;
	*(FLOAT*)Result = this->GetAnimTreeNodeBlendValue(getNodeName);
}

// @baa 0x016ec290
void URAnimNode_Cape::execSetAnimTreeNodeBlendValue(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(setNodeName);
    P_GET_FLOAT(blendValue);
    P_FINISH;
    this->SetAnimTreeNodeBlendValue(setNodeName, blendValue);
}
