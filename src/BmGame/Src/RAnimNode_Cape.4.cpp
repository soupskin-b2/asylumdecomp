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

struct URAnimNode_Cape__016ec150 : public URAnimNode_Cape
{
	UAnimNode* GetCurrentCapeAnimNode();
};

// @baa 0x016ec150
void URAnimNode_Cape::execGetCurrentCapeAnimNode(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UAnimNode**)Result = ((URAnimNode_Cape__016ec150*)this)->GetCurrentCapeAnimNode();
}

struct URAnimNode_Cape__016ec190 : public URAnimNode_Cape
{
	void* GetStateAnimNode(FName);
};

// @baa 0x016ec190
void URAnimNode_Cape::execGetStateAnimNode(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(AnimStateName);
	P_FINISH;
	*(void**)Result = this->GetStateAnimNode(AnimStateName);
}

struct URAnimNode_Cape__016ec210 : public URAnimNode_Cape
{
	FLOAT GetAnimTreeNodeBlendValue(FName);
};

// @baa 0x016ec210
void URAnimNode_Cape::execGetAnimTreeNodeBlendValue(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(getNodeName);
	P_FINISH;
	*(FLOAT*)Result = this->GetAnimTreeNodeBlendValue(getNodeName);
}

/* URAnimNode_Cape::SetAnimTreeNodeBlendValue (0x1562480) isn't declared in the kit. */
struct URAnimNode_Cape__016ec290 : public URAnimNode_Cape
{
    void SetAnimTreeNodeBlendValue(FName setNodeName, FLOAT blendValue);
};

// @baa 0x016ec290
void URAnimNode_Cape::execSetAnimTreeNodeBlendValue(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(setNodeName);
    P_GET_FLOAT(blendValue);
    P_FINISH;
    this->SetAnimTreeNodeBlendValue(setNodeName, blendValue);
}
