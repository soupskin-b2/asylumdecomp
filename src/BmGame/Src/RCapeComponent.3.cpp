// RCapeComponent.cpp: 9 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

struct URCapeComponent_ : public URCapeComponent
{
	UBOOL GetIsInitialised();
	void execGetIsInitialised(FFrame& Stack, RESULT_DECL);
};

// @baa 0x01701ec0
void URCapeComponent_::execGetIsInitialised( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = GetIsInitialised();
}

struct URCapeComponent__01701fa0 : public URCapeComponent {
    FName GetCurrentCapeStateName(); /* 0x016ae4e0 */
};

// @baa 0x01701fa0
void URCapeComponent::execGetCurrentCapeStateName(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;
    *(FName*)Result = ((URCapeComponent__01701fa0*)this)->GetCurrentCapeStateName();
}

struct URCapeComponent__01702430 : public URCapeComponent
{
	void ForceCapeToAnimPose();
	void execForceCapeToAnimPose(FFrame& Stack, RESULT_DECL);
};

// @baa 0x01702430
void URCapeComponent__01702430::execForceCapeToAnimPose( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	ForceCapeToAnimPose();
}

struct URCapeComponent__01702460 : public URCapeComponent
{
	UBOOL GetIsInCinematicsState();
	void execGetIsInCinematicsState(FFrame& Stack, RESULT_DECL);
};

// @baa 0x01702460
void URCapeComponent__01702460::execGetIsInCinematicsState( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = GetIsInCinematicsState();
}

struct URCapeComponent__01702a80 : public URCapeComponent
{
	void PauseCape();
	void execPauseCape(FFrame& Stack, RESULT_DECL);
};

// @baa 0x01702a80
void URCapeComponent__01702a80::execPauseCape( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	PauseCape();
}

struct URCapeComponent__01702ab0 : public URCapeComponent
{
	void ResumeCape();
	void execResumeCape(FFrame& Stack, RESULT_DECL);
};

// @baa 0x01702ab0
void URCapeComponent__01702ab0::execResumeCape( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	ResumeCape();
}

struct URCapeComponent__01702dc0 : public URCapeComponent
{
	FLOAT CalculateAngularVelocity();
	void execCalculateAngularVelocity(FFrame& Stack, RESULT_DECL);
};

// @baa 0x01702dc0
void URCapeComponent__01702dc0::execCalculateAngularVelocity( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(FLOAT*)Result = CalculateAngularVelocity();
}

struct URCapeComponent__01702e00 : public URCapeComponent
{
	UBOOL UpdateSkeletalMeshDepthBias();
	void execUpdateSkeletalMeshDepthBias(FFrame& Stack, RESULT_DECL);
};

// @baa 0x01702e00
void URCapeComponent__01702e00::execUpdateSkeletalMeshDepthBias( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = UpdateSkeletalMeshDepthBias();
}

struct URCapeComponent__01702e40 : public URCapeComponent
{
	UBOOL GetIsCinematicMode();
	void execGetIsCinematicMode(FFrame& Stack, RESULT_DECL);
};

// @baa 0x01702e40
void URCapeComponent__01702e40::execGetIsCinematicMode( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = GetIsCinematicMode();
}
