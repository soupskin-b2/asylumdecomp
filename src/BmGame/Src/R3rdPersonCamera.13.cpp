// R3rdPersonCamera.cpp: 8 functions
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

struct AR3rdPersonCamera__017090a0 : public AR3rdPersonCamera
{
	void sub_01689680(FLOAT);
};

// @baa 0x017090a0
void AR3rdPersonCamera::execUpdateCameraWander(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(DeltaTime);
	P_FINISH;
	((AR3rdPersonCamera__017090a0*)this)->sub_01689680(DeltaTime);
}

struct AR3rdPersonCamera__01709420 : public AR3rdPersonCamera
{
	void sub_0168ec60(FLOAT);
};

// @baa 0x01709420
void AR3rdPersonCamera::execTransitionInterpolate(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(DeltaTime);
	P_FINISH;
	((AR3rdPersonCamera__01709420*)this)->sub_0168ec60(DeltaTime);
}

struct AR3rdPersonCamera__01709880 : public AR3rdPersonCamera
{
	void sub_016a03c0(FLOAT);
};

// @baa 0x01709880
void AR3rdPersonCamera::execUpdateZoomFocus(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(DeltaTime);
	P_FINISH;
	((AR3rdPersonCamera__01709880*)this)->sub_016a03c0(DeltaTime);
}

struct AR3rdPersonCamera__01709710 : public AR3rdPersonCamera
{
	void sub_0168a650(FLOAT);
};

// @baa 0x01709710
void AR3rdPersonCamera::execDisableCameraDrag(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT_OPTX(Time, 1.0f);
	P_FINISH;
	((AR3rdPersonCamera__01709710*)this)->sub_0168a650(Time);
}

struct AR3rdPersonCamera__017098f0 : public AR3rdPersonCamera
{
	void sub_016a4b10(FTPOV&);
};

// @baa 0x017098f0
void AR3rdPersonCamera::execHideClippingObjects(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT_REF(FTPOV, NewPOV);
	P_FINISH;
	((AR3rdPersonCamera__017098f0*)this)->sub_016a4b10(NewPOV);
}

struct AR3rdPersonCamera__01709970 : public AR3rdPersonCamera
{
	void sub_01689e60(FVector&);
};

// @baa 0x01709970
void AR3rdPersonCamera::execGetTunnelCameraDirection(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT_REF(FVector, InDirection);
	P_FINISH;
	((AR3rdPersonCamera__01709970*)this)->sub_01689e60(InDirection);
}
