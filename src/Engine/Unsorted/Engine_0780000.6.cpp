// Engine_0780000.cpp: 6 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x0078e4c0
void UAudioComponent::execGetMinDistance( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(FLOAT*)Result = GetMinDistance();
}

// @baa 0x0078e500
void UAudioComponent::execGetMaxDistance( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(FLOAT*)Result = GetMaxDistance();
}

// @baa 0x0078e540
void UAudioComponent::execSetFloatParameter(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(InName);
    P_GET_FLOAT(InFloat);
    P_FINISH;
    this->SetFloatParameter(InName, InFloat);
}

// @baa 0x0078e5e0
void UAudioComponent::execSetVelocity(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(InName);
    P_GET_FLOAT(InFloat);
    P_FINISH;
    this->SetVelocity(InName, InFloat);
}

#include "ue3/ConstructObject.h"

// @baa 0x0078cfb0
template USoundCue* ConstructObject<USoundCue>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

#line 88 "candidate.cpp"

// @baa 0x0078cf10
template UAudioComponent* ConstructObject<UAudioComponent>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);
