// R3rdPersonCamera.cpp: 25 functions
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

extern FName g_026e38c8;
	/* ResetCamera */
struct AR3rdPersonCamera__01559350 : public AR3rdPersonCamera
{
	void eventResetCamera(FRotator ResetRotation, UBOOL bResetForBlend, UBOOL bResetSmoother);
};

// @baa 0x01559350
/* R3rdPersonCamera.ResetCamera script event: the generated glue, out of line here. */
void AR3rdPersonCamera__01559350::eventResetCamera(FRotator ResetRotation, UBOOL bResetForBlend, UBOOL bResetSmoother)
{
	struct R3rdPersonCamera_eventResetCamera_Parms
	{
		FRotator ResetRotation;
		UBOOL bResetForBlend;
		UBOOL bResetSmoother;
	} Parms;
	Parms.ResetRotation = ResetRotation;
	Parms.bResetForBlend = bResetForBlend ? TRUE : FALSE;
	Parms.bResetSmoother = bResetSmoother ? TRUE : FALSE;
	ProcessEvent(FindFunctionChecked(g_026e38c8), &Parms);
}

extern FName g_026e2a80;
	/* CancelZoom */
struct AR3rdPersonCamera__01686b90 : public AR3rdPersonCamera
{
	void eventCancelZoom();
};

// @baa 0x01686b90
/* R3rdPersonCamera.CancelZoom script event: the generated glue, out of line here. */
void AR3rdPersonCamera__01686b90::eventCancelZoom()
{
	ProcessEvent(FindFunctionChecked(g_026e2a80), NULL);
}

extern FName g_026e25a8;
	/* SettingsChanged */
struct AR3rdPersonCamera__01686bc0 : public AR3rdPersonCamera
{
	void eventSettingsChanged();
};

// @baa 0x01686bc0
/* R3rdPersonCamera.SettingsChanged script event: the generated glue, out of line here. */
void AR3rdPersonCamera__01686bc0::eventSettingsChanged()
{
	ProcessEvent(FindFunctionChecked(g_026e25a8), NULL);
}

/* AR3rdPersonCamera::UpdateFreeCam (0x16a3db0) isn't declared in the kit. */
struct AR3rdPersonCamera__01709490 : public AR3rdPersonCamera
{
    void UpdateFreeCam(FVector DesiredCameraPosition, FRotator DesiredCameraRotation, FLOAT DesiredCameraFOV, FLOAT DeltaTime);
};

// @baa 0x01709490
void AR3rdPersonCamera::execUpdateFreeCam(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, DesiredCameraPosition);
    P_GET_STRUCT(FRotator, DesiredCameraRotation);
    P_GET_FLOAT(DesiredCameraFOV);
    P_GET_FLOAT(DeltaTime);
    P_FINISH;
    ((AR3rdPersonCamera__01709490*)this)->UpdateFreeCam(DesiredCameraPosition, DesiredCameraRotation, DesiredCameraFOV, DeltaTime);
}

// @baa 0x01709370
void AR3rdPersonCamera::execUpdateViewTarget(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT_REF(FTViewTarget, OutVT);
    P_GET_FLOAT(DeltaTime);
    P_FINISH;
    UpdateViewTarget(OutVT, DeltaTime);
}

// @baa 0x017099f0
void AR3rdPersonCamera::execUpdateCameraPosition(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(DeltaTime);
    P_GET_UBOOL_OPTX(ProperReset, FALSE);
    P_FINISH;
    UpdateCameraPosition(DeltaTime, ProperReset);
}

// @baa 0x01709280
void AR3rdPersonCamera::execProcessViewRotation(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(DeltaTime);
    P_GET_STRUCT_REF(FRotator, out_ViewRotation);
    P_GET_STRUCT_REF(FRotator, out_DeltaRot);
    P_FINISH;
    ProcessViewRotation(DeltaTime, out_ViewRotation, out_DeltaRot);
}

// @baa 0x01709780
void AR3rdPersonCamera::execBlendViewTargets(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT_REF(FTViewTarget, A);
    P_GET_STRUCT_REF(FTViewTarget, B);
    P_GET_FLOAT(Alpha);
    P_FINISH;
    *(FTPOV*)Result = BlendViewTargets(A, B, Alpha);
}

// @baa 0x00c83870
void AR3rdPersonCamera::execApplyCameraModifiers(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(DeltaTime);
    P_GET_STRUCT_REF(FTPOV, OutPOV);
    P_FINISH;
    ApplyCameraModifiers(DeltaTime, OutPOV);
}

/* Kit gap: Script.h lacks UE3's P_GET_STRUCT_OPTX (UnScript.h); the struct constructors (UnMath.h) build the defaults. */
#define P_GET_STRUCT_OPTX(t, v, d) t v; GRuntimeUCFlags &= ~RUC_SkippedOptionalParm; Stack.Step(Stack.Object, &v); if (GRuntimeUCFlags & RUC_SkippedOptionalParm) v = d;
struct FRotator_ : public FRotator
{
	FRotator_(INT InPitch, INT InYaw, INT InRoll) { Pitch = InPitch; Yaw = InYaw; Roll = InRoll; }
};

/* Kit gaps: BlendToCameraTarget (01689c30) isn't declared (names from the exe's native table). */
struct AR3rdPersonCamera__017095a0 : public AR3rdPersonCamera
{
	void BlendToCameraTarget(class AActor* Target, FLOAT BlendTime, UBOOL bResetCam, FRotator ResetRotation, UBOOL BlendBatmanRelativePosition);	/* 0x01689c30 */
};

// @baa 0x017095a0
void AR3rdPersonCamera::execBlendToCameraTarget(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(AActor, Target);
	P_GET_FLOAT(BlendTime);
	P_GET_UBOOL_OPTX(bResetCam, FALSE);
	P_GET_STRUCT_OPTX(FRotator, ResetRotation, FRotator_(0, 0, 0));
	P_GET_UBOOL_OPTX(BlendBatmanRelativePosition, FALSE);
	P_FINISH;
	((AR3rdPersonCamera__017095a0*)this)->BlendToCameraTarget(Target, BlendTime, bResetCam, ResetRotation, BlendBatmanRelativePosition);
}
