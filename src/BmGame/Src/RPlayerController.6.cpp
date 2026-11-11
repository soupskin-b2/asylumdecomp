// RPlayerController.cpp (part 6 of 6): 22 functions
// Placed here by: class 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x016fa140
void ARPlayerController::execLive_SetActiveSave(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(Id);
    P_FINISH;
    vf_5b8(Id);
}

// @baa 0x016fa710
void ARPlayerController::execFE_UnblockInitialNotifies(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;
    vf_61c();
}

// @baa 0x016f7fd0
void ARPlayerController::execDebugUpdateAmbientTree( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_488();
}

// @baa 0x016f8050
void ARPlayerController::execToggleMovieRecord( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_490();
}

// @baa 0x016f80d0
void ARPlayerController::execPlayRiddlerCaptureMovie( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_498();
}

// @baa 0x016f8110
void ARPlayerController::execUpdateDownloadableContent( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_49c();
}

// @baa 0x016f8150
void ARPlayerController::execUpdateDownloadableCharacters( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_4a0();
}

struct ARPlayerController_ : public ARPlayerController
{
	void NativeBreakPoint();
	void execNativeBreakPoint(FFrame& Stack, RESULT_DECL);
};

// @baa 0x016f8210
void ARPlayerController_::execNativeBreakPoint( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	NativeBreakPoint();
}

// @baa 0x016f8300
void ARPlayerController::execAmbientSoundControl( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_4b4();
}

// @baa 0x016f8340
void ARPlayerController::execStartSavedAmbientSound( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_4b8();
}

// @baa 0x016f8380
void ARPlayerController::execStartSavedMixBin( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_4bc();
}

// @baa 0x016f8440
void ARPlayerController::execReloadGame( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	vf_4d0();
}

struct ARPlayerController__016f8e40 : public ARPlayerController
{
	UBOOL IsInExternalCamera();
	void execIsInExternalCamera(FFrame& Stack, RESULT_DECL);
};

// @baa 0x016f8e40
void ARPlayerController__016f8e40::execIsInExternalCamera( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = IsInExternalCamera();
}

struct ARPlayerController__016f8ff0 : public ARPlayerController
{
	void TurnOnObstructionDebugging();
	void execTurnOnObstructionDebugging(FFrame& Stack, RESULT_DECL);
};

// @baa 0x016f8ff0
void ARPlayerController__016f8ff0::execTurnOnObstructionDebugging( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	TurnOnObstructionDebugging();
}

struct ARPlayerController__016f9020 : public ARPlayerController
{
	void TurnOnInteractDebugging();
	void execTurnOnInteractDebugging(FFrame& Stack, RESULT_DECL);
};

// @baa 0x016f9020
void ARPlayerController__016f9020::execTurnOnInteractDebugging( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	TurnOnInteractDebugging();
}

struct ARPlayerController__016f9110 : public ARPlayerController
{
	void PlayerWtfNative();
	void execPlayerWtfNative(FFrame& Stack, RESULT_DECL);
};

// @baa 0x016f9110
void ARPlayerController__016f9110::execPlayerWtfNative( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	PlayerWtfNative();
}

struct ARPlayerController__016f9290 : public ARPlayerController
{
	void CheckForGlassAttackTarget();
	void execCheckForGlassAttackTarget(FFrame& Stack, RESULT_DECL);
};

// @baa 0x016f9290
void ARPlayerController__016f9290::execCheckForGlassAttackTarget( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	CheckForGlassAttackTarget();
}

struct ARPlayerController__016f94f0 : public ARPlayerController
{
	UBOOL WillIHitCapeGlideTarget();
	void execWillIHitCapeGlideTarget(FFrame& Stack, RESULT_DECL);
};

// @baa 0x016f94f0
void ARPlayerController__016f94f0::execWillIHitCapeGlideTarget( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = WillIHitCapeGlideTarget();
}

struct ARPlayerController__016f9530 : public ARPlayerController
{
	FLOAT CalculateCapeGlideAltitude();
	void execCalculateCapeGlideAltitude(FFrame& Stack, RESULT_DECL);
};

// @baa 0x016f9530
void ARPlayerController__016f9530::execCalculateCapeGlideAltitude( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(FLOAT*)Result = CalculateCapeGlideAltitude();
}

struct ARPlayerController__016f95b0 : public ARPlayerController
{
	UBOOL HaveRoomToCapeGlide();
	void execHaveRoomToCapeGlide(FFrame& Stack, RESULT_DECL);
};

// @baa 0x016f95b0
void ARPlayerController__016f95b0::execHaveRoomToCapeGlide( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = HaveRoomToCapeGlide();
}

struct ARPlayerController__016f9700 : public ARPlayerController
{
	void NativeStartGrappleMovement();
	void execNativeStartGrappleMovement(FFrame& Stack, RESULT_DECL);
};

// @baa 0x016f9700
void ARPlayerController__016f9700::execNativeStartGrappleMovement( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	NativeStartGrappleMovement();
}

struct ARPlayerController__016f9730 : public ARPlayerController
{
	UBOOL CheckSpaceToJump();
	void execCheckSpaceToJump(FFrame& Stack, RESULT_DECL);
};

// @baa 0x016f9730
void ARPlayerController__016f9730::execCheckSpaceToJump( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(UBOOL*)Result = CheckSpaceToJump();
}
