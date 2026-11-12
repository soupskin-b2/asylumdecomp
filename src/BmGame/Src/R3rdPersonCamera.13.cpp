// R3rdPersonCamera.cpp: 15 functions
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

// @baa 0x00c83920
// @baa 0x00c83920
void ACamera::execCheckViewTarget(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT_REF(FTViewTarget, VT);
    P_FINISH;
    CheckViewTarget(VT);
}

// @baa 0x01709140
// @baa 0x01709140
void AR3rdPersonCamera::execSetFreeCameraConfig(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FFreeCameraConfig, NewConfig);
    P_FINISH;
    SetFreeCameraConfig(NewConfig);
}

// @baa 0x017091c0
// @baa 0x017091c0
void AR3rdPersonCamera::execSaveFreeCameraConfig(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT_REF(FFreeCameraConfig, ConfigToSave);
    P_FINISH;
    SaveFreeCameraConfig(ConfigToSave);
}

extern FName g_026e25c4;
	/* InputHeading */
struct ARPawnPlayerCombat_ : public ARPawnPlayerCombat
{
	FVector eventInputHeading();
};

// @baa 0x01686400
/* RPawnPlayerCombat.InputHeading script event: the generated glue, out of line here. */
FVector ARPawnPlayerCombat_::eventInputHeading()
{
	struct RPawnPlayerCombat_eventInputHeading_Parms
	{
		FVector ReturnValue;
	} Parms;
	appMemzero(&Parms.ReturnValue, sizeof(Parms.ReturnValue));
	ProcessEvent(FindFunctionChecked(g_026e25c4), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e3118;
	/* SetDof */
struct URDOFManager_ : public URDOFManager
{
	void eventSetDof(FPostProcessSettings& PP);
};

// @baa 0x01686a40
/* RDOFManager.SetDof script event: the generated glue, out of line here. */
void URDOFManager_::eventSetDof(FPostProcessSettings& PP)
{
	struct RDOFManager_eventSetDof_Parms
	{
		FPostProcessSettings PP;
	} Parms;
	Parms.PP = PP;
	ProcessEvent(FindFunctionChecked(g_026e3118), &Parms);
	PP = Parms.PP;
}

extern FName g_026e26e0;
	/* ApplyModifiers */
struct AR3rdPersonCamera__01686bf0 : public AR3rdPersonCamera
{
	void eventApplyModifiers(FLOAT DeltaTime, FTPOV& OutPOV);
};

// @baa 0x01686bf0
/* R3rdPersonCamera.ApplyModifiers script event: the generated glue, out of line here. */
void AR3rdPersonCamera__01686bf0::eventApplyModifiers(FLOAT DeltaTime, FTPOV& OutPOV)
{
	struct R3rdPersonCamera_eventApplyModifiers_Parms
	{
		FLOAT DeltaTime;
		FTPOV OutPOV;
	} Parms;
	Parms.DeltaTime = DeltaTime;
	Parms.OutPOV = OutPOV;
	ProcessEvent(FindFunctionChecked(g_026e26e0), &Parms);
	OutPOV = Parms.OutPOV;
}

extern FName g_026e3138;
	/* UpdateCurrentCamera */
struct AR3rdPersonCamera__01686cd0 : public AR3rdPersonCamera
{
	void eventUpdateCurrentCamera(FVector DesiredCameraPosition, FRotator DesiredCameraRotation, FLOAT DesiredCameraFOV, FLOAT DeltaTime);
};

// @baa 0x01686cd0
/* R3rdPersonCamera.UpdateCurrentCamera script event: the generated glue, out of line here. */
void AR3rdPersonCamera__01686cd0::eventUpdateCurrentCamera(FVector DesiredCameraPosition, FRotator DesiredCameraRotation, FLOAT DesiredCameraFOV, FLOAT DeltaTime)
{
	struct R3rdPersonCamera_eventUpdateCurrentCamera_Parms
	{
		FVector DesiredCameraPosition;
		FRotator DesiredCameraRotation;
		FLOAT DesiredCameraFOV;
		FLOAT DeltaTime;
	} Parms;
	Parms.DesiredCameraPosition = DesiredCameraPosition;
	Parms.DesiredCameraRotation = DesiredCameraRotation;
	Parms.DesiredCameraFOV = DesiredCameraFOV;
	Parms.DeltaTime = DeltaTime;
	ProcessEvent(FindFunctionChecked(g_026e3138), &Parms);
}
