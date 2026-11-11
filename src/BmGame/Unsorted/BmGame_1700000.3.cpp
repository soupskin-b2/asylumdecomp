// BmGame_1700000.cpp: 13 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

typedef AActor* (__thiscall* FSlot)(void*);

// @baa 0x017083b0
void ARExplosiveGooMine::execConditionalSetupPosition(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(AActor**)Result = ((FSlot)(*(void***)this)[0x354 / 4])(this);
}

struct ARBatarangCamera_ : public ARBatarangCamera
{
	void sub_016a9f20(FLOAT);
};

// @baa 0x01709b40
void ARBatarangCamera::execUpdateTrackingPosition(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(DeltaTime);
	P_FINISH;
	((ARBatarangCamera_*)this)->sub_016a9f20(DeltaTime);
}

struct ARLineLauncherDirectorCamera_ : public ARLineLauncherDirectorCamera
{
	void sub_016b0e10(FLOAT);
};

// @baa 0x0170a180
void ARLineLauncherDirectorCamera::execSetupPosition(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(DeltaTime);
	P_FINISH;
	((ARLineLauncherDirectorCamera_*)this)->sub_016b0e10(DeltaTime);
}

struct ARMultiTargetCamera_ : public ARMultiTargetCamera
{
	void sub_016b70c0(FLOAT);
};

// @baa 0x0170a2d0
void ARMultiTargetCamera::execUpdatePosition(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(DeltaTime);
	P_FINISH;
	((ARMultiTargetCamera_*)this)->sub_016b70c0(DeltaTime);
}

// @baa 0x01703ab0
void ARBMAIController::execShutDownBehaviour(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(URBMBehaviour, BehaviourToExit);
	P_FINISH;
	vf_450((INT)BehaviourToExit);
}

// @baa 0x01704b50
void URSimpleIdleConfig::execFireOutputLink(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(URBMBehaviour_IdleWithPlannarProp, Owner);
	P_FINISH;
	vf_10c((INT)Owner);
}

// @baa 0x01704bc0
void URIdleWithDeathConfig::execFireDeathLink(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(URBMBehaviour_IdleWithPlannarProp, Owner);
	P_FINISH;
	vf_120((INT)Owner);
}

// @baa 0x01706b60
void ARForensicsDevice::execEvidenceRegisterDnaSNS(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(ARForensicDnaSplatStaticNonScan, Splat);
	P_FINISH;
	vf_358((INT)Splat);
}

// @baa 0x01706bd0
void ARForensicsDevice::execEvidenceRegisterDnaS(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(ARForensicDnaSplatStatic, Splat);
	P_FINISH;
	vf_35c((INT)Splat);
}

// @baa 0x01706ce0
void ARForensicsDevice::execEvidenceRegisterDNA(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(ARForensicDnaSplat, Splat);
	P_FINISH;
	vf_364((INT)Splat);
}

// @baa 0x01708ff0
void ARDisruptableObjectDoor::execUpdateSound(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(ARPawnPlayer, Batman);
	P_FINISH;
	vf_358((INT)Batman);
}

struct ARCameraActor_ : public ARCameraActor
{
	FLOAT sub_01690910(AR3rdPersonCamera*);
};

// @baa 0x01709ad0
void ARCameraActor::execCorrectedAspectRatioFOV(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(AR3rdPersonCamera, OwnerCam);
	P_FINISH;
	*(FLOAT*)Result = ((ARCameraActor_*)this)->sub_01690910(OwnerCam);
}

// @baa 0x01701480
void ARWindVolume::execTick(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(DeltaTime);
	P_FINISH;
	vf_360(DeltaTime);
}
