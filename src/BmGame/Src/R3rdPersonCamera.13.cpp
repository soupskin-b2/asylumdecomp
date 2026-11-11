// R3rdPersonCamera.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

struct AR3rdPersonCamera_ : public AR3rdPersonCamera
{
	void ResetSmoother();
	void execResetSmoother(FFrame& Stack, RESULT_DECL);
};

// @baa 0x01709110
void AR3rdPersonCamera_::execResetSmoother( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	ResetSmoother();
}

struct AR3rdPersonCamera__01709240 : public AR3rdPersonCamera
{
	UBOOL FollowCameraRotation();
	void execFollowCameraRotation(FFrame& Stack, RESULT_DECL);
};

// @baa 0x01709240
void AR3rdPersonCamera__01709240::execFollowCameraRotation( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = FollowCameraRotation();
}
